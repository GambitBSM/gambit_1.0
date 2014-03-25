#include "NNfunction_sb_dRsR.h"
#include <cmath>

double NNfunction_sb_dRsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5486)/15.3354;
   input1 = (in1 - -1.3743)/1144.72;
   input2 = (in2 - 668.482)/628.877;
   input3 = (in3 - -53.1577)/796.428;
   input4 = (in4 - 1038.91)/942.341;
   input5 = (in5 - 875.404)/925.575;
   input6 = (in6 - 893.112)/930.063;
   input7 = (in7 - 909.924)/915.667;
   input8 = (in8 - 918.677)/977.596;
   input9 = (in9 - 901.976)/961.335;
   input10 = (in10 - 983.997)/958.242;
   input11 = (in11 - 724.473)/868.737;
   input12 = (in12 - 734.378)/882.163;
   input13 = (in13 - 502.015)/518.474;
   input14 = (in14 - 701.379)/796.188;
   input15 = (in15 - 704.582)/797.882;
   input16 = (in16 - 536.129)/559.606;
   input17 = (in17 - 366.096)/369.298;
   input18 = (in18 - 362.653)/368.979;
   input19 = (in19 - 815.024)/890.335;
   input20 = (in20 - -8.93237)/484.452;
   input21 = (in21 - 4.77887)/1160.31;
   input22 = (in22 - -3.85289)/1208.22;
   input23 = (in23 - -202.63)/602.94;
   switch(index) {
     case 0:
         return neuron0x31064b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dRsR::Value(int index, double* input) {
   input0 = (input[0] - 23.5486)/15.3354;
   input1 = (input[1] - -1.3743)/1144.72;
   input2 = (input[2] - 668.482)/628.877;
   input3 = (input[3] - -53.1577)/796.428;
   input4 = (input[4] - 1038.91)/942.341;
   input5 = (input[5] - 875.404)/925.575;
   input6 = (input[6] - 893.112)/930.063;
   input7 = (input[7] - 909.924)/915.667;
   input8 = (input[8] - 918.677)/977.596;
   input9 = (input[9] - 901.976)/961.335;
   input10 = (input[10] - 983.997)/958.242;
   input11 = (input[11] - 724.473)/868.737;
   input12 = (input[12] - 734.378)/882.163;
   input13 = (input[13] - 502.015)/518.474;
   input14 = (input[14] - 701.379)/796.188;
   input15 = (input[15] - 704.582)/797.882;
   input16 = (input[16] - 536.129)/559.606;
   input17 = (input[17] - 366.096)/369.298;
   input18 = (input[18] - 362.653)/368.979;
   input19 = (input[19] - 815.024)/890.335;
   input20 = (input[20] - -8.93237)/484.452;
   input21 = (input[21] - 4.77887)/1160.31;
   input22 = (input[22] - -3.85289)/1208.22;
   input23 = (input[23] - -202.63)/602.94;
   switch(index) {
     case 0:
         return neuron0x31064b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dRsR::neuron0x30d2570() {
   return input0;
}

double NNfunction_sb_dRsR::neuron0x30d28b0() {
   return input1;
}

double NNfunction_sb_dRsR::neuron0x30d2bf0() {
   return input2;
}

double NNfunction_sb_dRsR::neuron0x30d2f30() {
   return input3;
}

double NNfunction_sb_dRsR::neuron0x30d3270() {
   return input4;
}

double NNfunction_sb_dRsR::neuron0x30d35b0() {
   return input5;
}

double NNfunction_sb_dRsR::neuron0x30d38f0() {
   return input6;
}

double NNfunction_sb_dRsR::neuron0x30d3c30() {
   return input7;
}

double NNfunction_sb_dRsR::neuron0x30d3f70() {
   return input8;
}

double NNfunction_sb_dRsR::neuron0x30d42b0() {
   return input9;
}

double NNfunction_sb_dRsR::neuron0x30d45f0() {
   return input10;
}

double NNfunction_sb_dRsR::neuron0x30d4930() {
   return input11;
}

double NNfunction_sb_dRsR::neuron0x30d4c70() {
   return input12;
}

double NNfunction_sb_dRsR::neuron0x30d4fb0() {
   return input13;
}

double NNfunction_sb_dRsR::neuron0x30d52f0() {
   return input14;
}

double NNfunction_sb_dRsR::neuron0x30d5630() {
   return input15;
}

double NNfunction_sb_dRsR::neuron0x30d5970() {
   return input16;
}

double NNfunction_sb_dRsR::neuron0x30d5ed0() {
   return input17;
}

double NNfunction_sb_dRsR::neuron0x30d60f0() {
   return input18;
}

double NNfunction_sb_dRsR::neuron0x30d6430() {
   return input19;
}

double NNfunction_sb_dRsR::neuron0x30d6770() {
   return input20;
}

double NNfunction_sb_dRsR::neuron0x30d6ab0() {
   return input21;
}

double NNfunction_sb_dRsR::neuron0x30d6df0() {
   return input22;
}

double NNfunction_sb_dRsR::neuron0x30d7130() {
   return input23;
}

double NNfunction_sb_dRsR::input0x30d75d0() {
   double input = -1.03373;
   input += synapse0x2e923e0();
   input += synapse0x30d2430();
   input += synapse0x30d2470();
   input += synapse0x30d7880();
   input += synapse0x30d78c0();
   input += synapse0x30d7900();
   input += synapse0x30d7940();
   input += synapse0x30d7980();
   input += synapse0x30d79c0();
   input += synapse0x30d7a00();
   input += synapse0x30d7a40();
   input += synapse0x30d7a80();
   input += synapse0x30d7ac0();
   input += synapse0x30d7b00();
   input += synapse0x30d7b40();
   input += synapse0x30d7b80();
   input += synapse0x30d23a0();
   input += synapse0x30d23e0();
   input += synapse0x2e83c80();
   input += synapse0x2e83cc0();
   input += synapse0x30d7de0();
   input += synapse0x30d7e20();
   input += synapse0x30d7e60();
   input += synapse0x30d7ea0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30d75d0() {
   double input = input0x30d75d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30d7ee0() {
   double input = -0.769212;
   input += synapse0x30d8220();
   input += synapse0x30d8260();
   input += synapse0x30d82a0();
   input += synapse0x30d82e0();
   input += synapse0x30d8320();
   input += synapse0x30d8360();
   input += synapse0x30d83a0();
   input += synapse0x30d83e0();
   input += synapse0x30d8420();
   input += synapse0x30d7cd0();
   input += synapse0x30d7d10();
   input += synapse0x30d7d50();
   input += synapse0x30d7d90();
   input += synapse0x30d8670();
   input += synapse0x30d86b0();
   input += synapse0x30d86f0();
   input += synapse0x30d8070();
   input += synapse0x30d80b0();
   input += synapse0x30d8840();
   input += synapse0x30d8880();
   input += synapse0x30d88c0();
   input += synapse0x30d8900();
   input += synapse0x30d8940();
   input += synapse0x30d8980();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30d7ee0() {
   double input = input0x30d7ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30d89c0() {
   double input = -0.0502308;
   input += synapse0x30d8d00();
   input += synapse0x30d8d40();
   input += synapse0x30d8d80();
   input += synapse0x30d8dc0();
   input += synapse0x30d8e00();
   input += synapse0x30d8e40();
   input += synapse0x30d8e80();
   input += synapse0x30d8ec0();
   input += synapse0x30d8f00();
   input += synapse0x30d8f40();
   input += synapse0x30d8f80();
   input += synapse0x30d8fc0();
   input += synapse0x30d9000();
   input += synapse0x30d9040();
   input += synapse0x30d9080();
   input += synapse0x30d90c0();
   input += synapse0x30d8b50();
   input += synapse0x30d8b90();
   input += synapse0x2e91ad0();
   input += synapse0x2e91b10();
   input += synapse0x30c1600();
   input += synapse0x30c1640();
   input += synapse0x30c1680();
   input += synapse0x30d24b0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30d89c0() {
   double input = input0x30d89c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2e92250() {
   double input = 0.966595;
   input += synapse0x30d8610();
   input += synapse0x30d24f0();
   input += synapse0x30d2530();
   input += synapse0x30d9210();
   input += synapse0x30d9250();
   input += synapse0x30d9290();
   input += synapse0x30d92d0();
   input += synapse0x30d9310();
   input += synapse0x30d9350();
   input += synapse0x30d9390();
   input += synapse0x30d93d0();
   input += synapse0x30d9410();
   input += synapse0x30d9450();
   input += synapse0x30d9490();
   input += synapse0x30d94d0();
   input += synapse0x30d9510();
   input += synapse0x30d8460();
   input += synapse0x30d84a0();
   input += synapse0x30d9660();
   input += synapse0x30d96a0();
   input += synapse0x30d96e0();
   input += synapse0x30d9720();
   input += synapse0x30d9760();
   input += synapse0x30d97a0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2e92250() {
   double input = input0x2e92250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30d97e0() {
   double input = 0.56398;
   input += synapse0x30d9b20();
   input += synapse0x30d9b60();
   input += synapse0x30d9ba0();
   input += synapse0x30d9be0();
   input += synapse0x30d9c20();
   input += synapse0x30d9c60();
   input += synapse0x30d9ca0();
   input += synapse0x30d9ce0();
   input += synapse0x30d9d20();
   input += synapse0x30d9d60();
   input += synapse0x30d9da0();
   input += synapse0x30d9de0();
   input += synapse0x30d9e20();
   input += synapse0x30d9e60();
   input += synapse0x30d9ea0();
   input += synapse0x30d9ee0();
   input += synapse0x30d9970();
   input += synapse0x30d99b0();
   input += synapse0x30da030();
   input += synapse0x30da070();
   input += synapse0x30da0b0();
   input += synapse0x30da0f0();
   input += synapse0x30da130();
   input += synapse0x30da170();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30d97e0() {
   double input = input0x30d97e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30da1b0() {
   double input = -4.24757;
   input += synapse0x30da4f0();
   input += synapse0x30da530();
   input += synapse0x30da570();
   input += synapse0x30da5b0();
   input += synapse0x30da5f0();
   input += synapse0x30da630();
   input += synapse0x30da670();
   input += synapse0x30da6b0();
   input += synapse0x30da6f0();
   input += synapse0x2e91e40();
   input += synapse0x2e91e80();
   input += synapse0x2e91ec0();
   input += synapse0x2e91f00();
   input += synapse0x2e91f40();
   input += synapse0x2e91f80();
   input += synapse0x2e91fc0();
   input += synapse0x30da340();
   input += synapse0x30da380();
   input += synapse0x2e92110();
   input += synapse0x2e92150();
   input += synapse0x2e92190();
   input += synapse0x2e921d0();
   input += synapse0x2e92210();
   input += synapse0x30daf40();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30da1b0() {
   double input = input0x30da1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30daf80() {
   double input = -0.207019;
   input += synapse0x30db2c0();
   input += synapse0x30db300();
   input += synapse0x30db340();
   input += synapse0x30db380();
   input += synapse0x30db3c0();
   input += synapse0x30db400();
   input += synapse0x30db440();
   input += synapse0x30db480();
   input += synapse0x30db4c0();
   input += synapse0x30db500();
   input += synapse0x30db540();
   input += synapse0x30db580();
   input += synapse0x30db5c0();
   input += synapse0x30db600();
   input += synapse0x30db640();
   input += synapse0x30db680();
   input += synapse0x30db110();
   input += synapse0x30db150();
   input += synapse0x30db7d0();
   input += synapse0x30db810();
   input += synapse0x30db850();
   input += synapse0x30db890();
   input += synapse0x30db8d0();
   input += synapse0x30db910();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30daf80() {
   double input = input0x30daf80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30db950() {
   double input = 1.84965;
   input += synapse0x30dbc90();
   input += synapse0x30dbcd0();
   input += synapse0x30dbd10();
   input += synapse0x30dbd50();
   input += synapse0x30dbd90();
   input += synapse0x30dbdd0();
   input += synapse0x30dbe10();
   input += synapse0x30dbe50();
   input += synapse0x30dbe90();
   input += synapse0x30dbed0();
   input += synapse0x30dbf10();
   input += synapse0x30dbf50();
   input += synapse0x30dbf90();
   input += synapse0x30dbfd0();
   input += synapse0x30dc010();
   input += synapse0x30dc050();
   input += synapse0x30dbae0();
   input += synapse0x30dbb20();
   input += synapse0x30dc1a0();
   input += synapse0x30dc1e0();
   input += synapse0x30dc220();
   input += synapse0x30dc260();
   input += synapse0x30dc2a0();
   input += synapse0x30dc2e0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30db950() {
   double input = input0x30db950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30dc320() {
   double input = -2.33341;
   input += synapse0x30d5dc0();
   input += synapse0x30d5e00();
   input += synapse0x30d5e40();
   input += synapse0x30d5e80();
   input += synapse0x30dc870();
   input += synapse0x30dc8b0();
   input += synapse0x30dc8f0();
   input += synapse0x30dc930();
   input += synapse0x30dc970();
   input += synapse0x30dc9b0();
   input += synapse0x30dc9f0();
   input += synapse0x30dca30();
   input += synapse0x30dca70();
   input += synapse0x30dcab0();
   input += synapse0x30dcaf0();
   input += synapse0x30dcb30();
   input += synapse0x30dc4b0();
   input += synapse0x30dc4f0();
   input += synapse0x30dcc80();
   input += synapse0x30dccc0();
   input += synapse0x30dcd00();
   input += synapse0x30dcd40();
   input += synapse0x30dcd80();
   input += synapse0x30dcdc0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30dc320() {
   double input = input0x30dc320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30dce00() {
   double input = -1.23315;
   input += synapse0x30dd140();
   input += synapse0x30dd180();
   input += synapse0x30dd1c0();
   input += synapse0x30dd200();
   input += synapse0x30dd240();
   input += synapse0x30dd280();
   input += synapse0x30dd2c0();
   input += synapse0x30dd300();
   input += synapse0x30dd340();
   input += synapse0x30dd380();
   input += synapse0x30dd3c0();
   input += synapse0x30dd400();
   input += synapse0x30dd440();
   input += synapse0x30dd480();
   input += synapse0x30dd4c0();
   input += synapse0x30dd500();
   input += synapse0x30dcf90();
   input += synapse0x30dcfd0();
   input += synapse0x30dd650();
   input += synapse0x30dd690();
   input += synapse0x30dd6d0();
   input += synapse0x30dd710();
   input += synapse0x30dd750();
   input += synapse0x30dd790();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30dce00() {
   double input = input0x30dce00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30dd7d0() {
   double input = 0.578844;
   input += synapse0x30ddb10();
   input += synapse0x30ddb50();
   input += synapse0x30ddb90();
   input += synapse0x30ddbd0();
   input += synapse0x30ddc10();
   input += synapse0x30ddc50();
   input += synapse0x30ddc90();
   input += synapse0x30ddcd0();
   input += synapse0x30ddd10();
   input += synapse0x30ddd50();
   input += synapse0x30ddd90();
   input += synapse0x30dddd0();
   input += synapse0x30dde10();
   input += synapse0x30dde50();
   input += synapse0x30dde90();
   input += synapse0x30dded0();
   input += synapse0x30dd960();
   input += synapse0x30dd9a0();
   input += synapse0x30da730();
   input += synapse0x30da770();
   input += synapse0x30da7b0();
   input += synapse0x30da7f0();
   input += synapse0x30da830();
   input += synapse0x30da870();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30dd7d0() {
   double input = input0x30dd7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30da8b0() {
   double input = 1.27097;
   input += synapse0x30dabf0();
   input += synapse0x30dac30();
   input += synapse0x30dac70();
   input += synapse0x30dacb0();
   input += synapse0x30dacf0();
   input += synapse0x30dad30();
   input += synapse0x30dad70();
   input += synapse0x30dadb0();
   input += synapse0x30dadf0();
   input += synapse0x30dae30();
   input += synapse0x30dae70();
   input += synapse0x30daeb0();
   input += synapse0x30daef0();
   input += synapse0x30df030();
   input += synapse0x30df070();
   input += synapse0x30df0b0();
   input += synapse0x30daa40();
   input += synapse0x30daa80();
   input += synapse0x30df200();
   input += synapse0x30df240();
   input += synapse0x30df280();
   input += synapse0x30df2c0();
   input += synapse0x30df300();
   input += synapse0x30df340();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30da8b0() {
   double input = input0x30da8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30df380() {
   double input = 0.782216;
   input += synapse0x30df6c0();
   input += synapse0x30df700();
   input += synapse0x30df740();
   input += synapse0x30df780();
   input += synapse0x30df7c0();
   input += synapse0x30df800();
   input += synapse0x30df840();
   input += synapse0x30df880();
   input += synapse0x30df8c0();
   input += synapse0x30df900();
   input += synapse0x30df940();
   input += synapse0x30df980();
   input += synapse0x30df9c0();
   input += synapse0x30dfa00();
   input += synapse0x30dfa40();
   input += synapse0x30dfa80();
   input += synapse0x30df510();
   input += synapse0x30df550();
   input += synapse0x30dfbd0();
   input += synapse0x30dfc10();
   input += synapse0x30dfc50();
   input += synapse0x30dfc90();
   input += synapse0x30dfcd0();
   input += synapse0x30dfd10();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30df380() {
   double input = input0x30df380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30dfd50() {
   double input = 1.5351;
   input += synapse0x30e0090();
   input += synapse0x30e00d0();
   input += synapse0x30e0110();
   input += synapse0x30e0150();
   input += synapse0x30e0190();
   input += synapse0x30e01d0();
   input += synapse0x30e0210();
   input += synapse0x30e0250();
   input += synapse0x30e0290();
   input += synapse0x30e02d0();
   input += synapse0x30e0310();
   input += synapse0x30e0350();
   input += synapse0x30e0390();
   input += synapse0x30e03d0();
   input += synapse0x30e0410();
   input += synapse0x30e0450();
   input += synapse0x30dfee0();
   input += synapse0x30dff20();
   input += synapse0x30e05a0();
   input += synapse0x30e05e0();
   input += synapse0x30e0620();
   input += synapse0x30e0660();
   input += synapse0x30e06a0();
   input += synapse0x30e06e0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30dfd50() {
   double input = input0x30dfd50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30e0720() {
   double input = 0.48389;
   input += synapse0x30e0a60();
   input += synapse0x30e0aa0();
   input += synapse0x30e0ae0();
   input += synapse0x30e0b20();
   input += synapse0x30e0b60();
   input += synapse0x30e0ba0();
   input += synapse0x30e0be0();
   input += synapse0x30e0c20();
   input += synapse0x30e0c60();
   input += synapse0x30e0ca0();
   input += synapse0x30e0ce0();
   input += synapse0x30e0d20();
   input += synapse0x30e0d60();
   input += synapse0x30e0da0();
   input += synapse0x30e0de0();
   input += synapse0x30e0e20();
   input += synapse0x30e08b0();
   input += synapse0x30e08f0();
   input += synapse0x30e0f70();
   input += synapse0x30e0fb0();
   input += synapse0x30e0ff0();
   input += synapse0x30e1030();
   input += synapse0x30e1070();
   input += synapse0x30e10b0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30e0720() {
   double input = input0x30e0720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30e10f0() {
   double input = -0.410948;
   input += synapse0x30e1430();
   input += synapse0x30d2790();
   input += synapse0x30d27d0();
   input += synapse0x30d2ad0();
   input += synapse0x30d2b10();
   input += synapse0x30d2e10();
   input += synapse0x30d2e50();
   input += synapse0x30d3150();
   input += synapse0x30d3190();
   input += synapse0x30d3490();
   input += synapse0x30d34d0();
   input += synapse0x30d37d0();
   input += synapse0x30d3810();
   input += synapse0x30d3b10();
   input += synapse0x30d3b50();
   input += synapse0x30d3e50();
   input += synapse0x30d3e90();
   input += synapse0x30d4190();
   input += synapse0x30d41d0();
   input += synapse0x30d44d0();
   input += synapse0x30d4510();
   input += synapse0x30d4810();
   input += synapse0x30d4850();
   input += synapse0x30d4b50();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30e10f0() {
   double input = input0x30e10f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30e2f00() {
   double input = -0.237346;
   input += synapse0x30d4b90();
   input += synapse0x30d5850();
   input += synapse0x30d5890();
   input += synapse0x30e1280();
   input += synapse0x30e12c0();
   input += synapse0x30d5b90();
   input += synapse0x30d5bd0();
   input += synapse0x2e83b60();
   input += synapse0x2e83ba0();
   input += synapse0x30d6310();
   input += synapse0x30d6350();
   input += synapse0x30d6650();
   input += synapse0x30d6690();
   input += synapse0x30d6990();
   input += synapse0x30d69d0();
   input += synapse0x30d6cd0();
   input += synapse0x30d6d10();
   input += synapse0x30d7010();
   input += synapse0x30d7050();
   input += synapse0x30d7350();
   input += synapse0x30d7390();
   input += synapse0x30d4e90();
   input += synapse0x30d4ed0();
   input += synapse0x30e31a0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30e2f00() {
   double input = input0x30e2f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30e31e0() {
   double input = 0.424322;
   input += synapse0x30e3520();
   input += synapse0x30e3560();
   input += synapse0x30e35a0();
   input += synapse0x30e35e0();
   input += synapse0x30e3620();
   input += synapse0x30e3660();
   input += synapse0x30e36a0();
   input += synapse0x30e36e0();
   input += synapse0x30e3720();
   input += synapse0x30e3760();
   input += synapse0x30e37a0();
   input += synapse0x30e37e0();
   input += synapse0x30e3820();
   input += synapse0x30e3860();
   input += synapse0x30e38a0();
   input += synapse0x30e38e0();
   input += synapse0x30e3370();
   input += synapse0x30e33b0();
   input += synapse0x30e3a30();
   input += synapse0x30e3a70();
   input += synapse0x30e3ab0();
   input += synapse0x30e3af0();
   input += synapse0x30e3b30();
   input += synapse0x30e3b70();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30e31e0() {
   double input = input0x30e31e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30e3bb0() {
   double input = 1.19743;
   input += synapse0x30e3ef0();
   input += synapse0x30e3f30();
   input += synapse0x30e3f70();
   input += synapse0x30e3fb0();
   input += synapse0x30e3ff0();
   input += synapse0x30e4030();
   input += synapse0x30e4070();
   input += synapse0x30e40b0();
   input += synapse0x30e40f0();
   input += synapse0x30e4130();
   input += synapse0x30e4170();
   input += synapse0x30e41b0();
   input += synapse0x30e41f0();
   input += synapse0x30e4230();
   input += synapse0x30e4270();
   input += synapse0x30e42b0();
   input += synapse0x30e3d40();
   input += synapse0x30e3d80();
   input += synapse0x30e4400();
   input += synapse0x30e4440();
   input += synapse0x30e4480();
   input += synapse0x30e44c0();
   input += synapse0x30e4500();
   input += synapse0x30e4540();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30e3bb0() {
   double input = input0x30e3bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30e4580() {
   double input = 1.3118;
   input += synapse0x30e48c0();
   input += synapse0x30e4900();
   input += synapse0x30e4940();
   input += synapse0x30e4980();
   input += synapse0x30e49c0();
   input += synapse0x30e4a00();
   input += synapse0x30e4a40();
   input += synapse0x30e4a80();
   input += synapse0x30e4ac0();
   input += synapse0x30e4b00();
   input += synapse0x30e4b40();
   input += synapse0x30e4b80();
   input += synapse0x30e4bc0();
   input += synapse0x30e4c00();
   input += synapse0x30e4c40();
   input += synapse0x30e4c80();
   input += synapse0x30e4710();
   input += synapse0x30e4750();
   input += synapse0x30e4dd0();
   input += synapse0x30e4e10();
   input += synapse0x30e4e50();
   input += synapse0x30e4e90();
   input += synapse0x30e4ed0();
   input += synapse0x30e4f10();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30e4580() {
   double input = input0x30e4580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30e4f50() {
   double input = -1.34335;
   input += synapse0x30e5290();
   input += synapse0x30e52d0();
   input += synapse0x30e5310();
   input += synapse0x30e5350();
   input += synapse0x30e5390();
   input += synapse0x30e53d0();
   input += synapse0x30e5410();
   input += synapse0x30e5450();
   input += synapse0x30e5490();
   input += synapse0x30e54d0();
   input += synapse0x30e5510();
   input += synapse0x30e5550();
   input += synapse0x30e5590();
   input += synapse0x30e55d0();
   input += synapse0x30e5610();
   input += synapse0x30e5650();
   input += synapse0x30e50e0();
   input += synapse0x30e5120();
   input += synapse0x30e57a0();
   input += synapse0x30e57e0();
   input += synapse0x30e5820();
   input += synapse0x30e5860();
   input += synapse0x30e58a0();
   input += synapse0x30e58e0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30e4f50() {
   double input = input0x30e4f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30e5920() {
   double input = -0.39411;
   input += synapse0x30e5c60();
   input += synapse0x30e5ca0();
   input += synapse0x30e5ce0();
   input += synapse0x30e5d20();
   input += synapse0x30e5d60();
   input += synapse0x30e5da0();
   input += synapse0x30e5de0();
   input += synapse0x30e5e20();
   input += synapse0x30e5e60();
   input += synapse0x30de020();
   input += synapse0x30de060();
   input += synapse0x30de0a0();
   input += synapse0x30de0e0();
   input += synapse0x30de120();
   input += synapse0x30de160();
   input += synapse0x30de1a0();
   input += synapse0x30e5ab0();
   input += synapse0x30e5af0();
   input += synapse0x30de2f0();
   input += synapse0x30de330();
   input += synapse0x30de370();
   input += synapse0x30de3b0();
   input += synapse0x30de3f0();
   input += synapse0x30de430();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30e5920() {
   double input = input0x30e5920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30de470() {
   double input = 0.860232;
   input += synapse0x30de7b0();
   input += synapse0x30de7f0();
   input += synapse0x30de830();
   input += synapse0x30de870();
   input += synapse0x30de8b0();
   input += synapse0x30de8f0();
   input += synapse0x30de930();
   input += synapse0x30de970();
   input += synapse0x30de9b0();
   input += synapse0x30de9f0();
   input += synapse0x30dea30();
   input += synapse0x30dea70();
   input += synapse0x30deab0();
   input += synapse0x30deaf0();
   input += synapse0x30deb30();
   input += synapse0x30deb70();
   input += synapse0x30de600();
   input += synapse0x30de640();
   input += synapse0x30decc0();
   input += synapse0x30ded00();
   input += synapse0x30ded40();
   input += synapse0x30ded80();
   input += synapse0x30dedc0();
   input += synapse0x30dee00();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30de470() {
   double input = input0x30de470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30dee40() {
   double input = 0.493642;
   input += synapse0x30defd0();
   input += synapse0x30e8060();
   input += synapse0x30e80a0();
   input += synapse0x30e80e0();
   input += synapse0x30e8120();
   input += synapse0x30e8160();
   input += synapse0x30e81a0();
   input += synapse0x30e81e0();
   input += synapse0x30e8220();
   input += synapse0x30e8260();
   input += synapse0x30e82a0();
   input += synapse0x30e82e0();
   input += synapse0x30e8320();
   input += synapse0x30e8360();
   input += synapse0x30e83a0();
   input += synapse0x30e83e0();
   input += synapse0x30e7eb0();
   input += synapse0x30e7ef0();
   input += synapse0x30e8530();
   input += synapse0x30e8570();
   input += synapse0x30e85b0();
   input += synapse0x30e85f0();
   input += synapse0x30e8630();
   input += synapse0x30e8670();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30dee40() {
   double input = input0x30dee40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30e86b0() {
   double input = 0.952853;
   input += synapse0x30e89f0();
   input += synapse0x30e8a30();
   input += synapse0x30e8a70();
   input += synapse0x30e8ab0();
   input += synapse0x30e8af0();
   input += synapse0x30e8b30();
   input += synapse0x30e8b70();
   input += synapse0x30e8bb0();
   input += synapse0x30e8bf0();
   input += synapse0x30e8c30();
   input += synapse0x30e8c70();
   input += synapse0x30e8cb0();
   input += synapse0x30e8cf0();
   input += synapse0x30e8d30();
   input += synapse0x30e8d70();
   input += synapse0x30e8db0();
   input += synapse0x30e8840();
   input += synapse0x30e8880();
   input += synapse0x30e8f00();
   input += synapse0x30e8f40();
   input += synapse0x30e8f80();
   input += synapse0x30e8fc0();
   input += synapse0x30e9000();
   input += synapse0x30e9040();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30e86b0() {
   double input = input0x30e86b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30e9080() {
   double input = -0.868088;
   input += synapse0x30e93c0();
   input += synapse0x30e9400();
   input += synapse0x30e9440();
   input += synapse0x30e9480();
   input += synapse0x30e94c0();
   input += synapse0x30e9500();
   input += synapse0x30e9540();
   input += synapse0x30e9580();
   input += synapse0x30e95c0();
   input += synapse0x30e9600();
   input += synapse0x30e9640();
   input += synapse0x30e9680();
   input += synapse0x30e96c0();
   input += synapse0x30e9700();
   input += synapse0x30e9740();
   input += synapse0x30e9780();
   input += synapse0x30e9210();
   input += synapse0x30e9250();
   input += synapse0x30e98d0();
   input += synapse0x30e9910();
   input += synapse0x30e9950();
   input += synapse0x30e9990();
   input += synapse0x30e99d0();
   input += synapse0x30e9a10();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30e9080() {
   double input = input0x30e9080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30e9a50() {
   double input = -0.432844;
   input += synapse0x30e9d90();
   input += synapse0x30e9dd0();
   input += synapse0x30e9e10();
   input += synapse0x30e9e50();
   input += synapse0x30e9e90();
   input += synapse0x30e9ed0();
   input += synapse0x30e9f10();
   input += synapse0x30e9f50();
   input += synapse0x30e9f90();
   input += synapse0x30e9fd0();
   input += synapse0x30ea010();
   input += synapse0x30ea050();
   input += synapse0x30ea090();
   input += synapse0x30ea0d0();
   input += synapse0x30ea110();
   input += synapse0x30ea150();
   input += synapse0x30e9be0();
   input += synapse0x30e9c20();
   input += synapse0x30ea2a0();
   input += synapse0x30ea2e0();
   input += synapse0x30ea320();
   input += synapse0x30ea360();
   input += synapse0x30ea3a0();
   input += synapse0x30ea3e0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30e9a50() {
   double input = input0x30e9a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30ea420() {
   double input = -0.171457;
   input += synapse0x30ea760();
   input += synapse0x30ea7a0();
   input += synapse0x30ea7e0();
   input += synapse0x30ea820();
   input += synapse0x30ea860();
   input += synapse0x30ea8a0();
   input += synapse0x30ea8e0();
   input += synapse0x30ea920();
   input += synapse0x30ea960();
   input += synapse0x30ea9a0();
   input += synapse0x30ea9e0();
   input += synapse0x30eaa20();
   input += synapse0x30eaa60();
   input += synapse0x30eaaa0();
   input += synapse0x30eaae0();
   input += synapse0x30eab20();
   input += synapse0x30ea5b0();
   input += synapse0x30ea5f0();
   input += synapse0x30eac70();
   input += synapse0x30eacb0();
   input += synapse0x30eacf0();
   input += synapse0x30ead30();
   input += synapse0x30ead70();
   input += synapse0x30eadb0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30ea420() {
   double input = input0x30ea420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30eadf0() {
   double input = 0.227668;
   input += synapse0x30eb130();
   input += synapse0x30eb170();
   input += synapse0x30eb1b0();
   input += synapse0x30eb1f0();
   input += synapse0x30eb230();
   input += synapse0x30eb270();
   input += synapse0x30eb2b0();
   input += synapse0x30eb2f0();
   input += synapse0x30eb330();
   input += synapse0x30eb370();
   input += synapse0x30eb3b0();
   input += synapse0x30eb3f0();
   input += synapse0x30eb430();
   input += synapse0x30eb470();
   input += synapse0x30eb4b0();
   input += synapse0x30eb4f0();
   input += synapse0x30eaf80();
   input += synapse0x30eafc0();
   input += synapse0x30eb640();
   input += synapse0x30eb680();
   input += synapse0x30eb6c0();
   input += synapse0x30eb700();
   input += synapse0x30eb740();
   input += synapse0x30eb780();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30eadf0() {
   double input = input0x30eadf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30eb7c0() {
   double input = 0.533405;
   input += synapse0x30ebb00();
   input += synapse0x30ebb40();
   input += synapse0x30ebb80();
   input += synapse0x30ebbc0();
   input += synapse0x30ebc00();
   input += synapse0x30ebc40();
   input += synapse0x30ebc80();
   input += synapse0x30ebcc0();
   input += synapse0x30ebd00();
   input += synapse0x30ebd40();
   input += synapse0x30ebd80();
   input += synapse0x30ebdc0();
   input += synapse0x30ebe00();
   input += synapse0x30ebe40();
   input += synapse0x30ebe80();
   input += synapse0x30ebec0();
   input += synapse0x30eb950();
   input += synapse0x30eb990();
   input += synapse0x30ec010();
   input += synapse0x30ec050();
   input += synapse0x30ec090();
   input += synapse0x30ec0d0();
   input += synapse0x30ec110();
   input += synapse0x30ec150();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30eb7c0() {
   double input = input0x30eb7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30ec190() {
   double input = -1.86333;
   input += synapse0x30ec4d0();
   input += synapse0x30ec510();
   input += synapse0x30ec550();
   input += synapse0x30ec590();
   input += synapse0x30ec5d0();
   input += synapse0x30ec610();
   input += synapse0x30ec650();
   input += synapse0x30ec690();
   input += synapse0x30ec6d0();
   input += synapse0x30ec710();
   input += synapse0x30ec750();
   input += synapse0x30ec790();
   input += synapse0x30ec7d0();
   input += synapse0x30ec810();
   input += synapse0x30ec850();
   input += synapse0x30ec890();
   input += synapse0x30ec320();
   input += synapse0x30ec360();
   input += synapse0x30ec9e0();
   input += synapse0x30eca20();
   input += synapse0x30eca60();
   input += synapse0x30ecaa0();
   input += synapse0x30ecae0();
   input += synapse0x30ecb20();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30ec190() {
   double input = input0x30ec190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30ecb60() {
   double input = 3.54282;
   input += synapse0x30ecea0();
   input += synapse0x30e1470();
   input += synapse0x30e14b0();
   input += synapse0x30e14f0();
   input += synapse0x30e1740();
   input += synapse0x30e1780();
   input += synapse0x30e17c0();
   input += synapse0x30e1a10();
   input += synapse0x30e1a50();
   input += synapse0x30e1ca0();
   input += synapse0x30e1ce0();
   input += synapse0x30e1d20();
   input += synapse0x30e1f70();
   input += synapse0x30e1fb0();
   input += synapse0x30e2200();
   input += synapse0x30e2240();
   input += synapse0x30eccf0();
   input += synapse0x30ecd30();
   input += synapse0x30e2390();
   input += synapse0x30e28a0();
   input += synapse0x30e28e0();
   input += synapse0x30e2920();
   input += synapse0x30e2b70();
   input += synapse0x30e2bb0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30ecb60() {
   double input = input0x30ecb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30e2bf0() {
   double input = 1.11819;
   input += synapse0x30e2460();
   input += synapse0x30e24a0();
   input += synapse0x30e24e0();
   input += synapse0x30e2520();
   input += synapse0x30e2ea0();
   input += synapse0x30ef1f0();
   input += synapse0x30ef230();
   input += synapse0x30ef270();
   input += synapse0x30ef2b0();
   input += synapse0x30ef2f0();
   input += synapse0x30ef330();
   input += synapse0x30ef370();
   input += synapse0x30ef3b0();
   input += synapse0x30ef3f0();
   input += synapse0x30ef430();
   input += synapse0x30ef470();
   input += synapse0x30e2d80();
   input += synapse0x30e2dc0();
   input += synapse0x30ef5c0();
   input += synapse0x30ef600();
   input += synapse0x30ef640();
   input += synapse0x30ef680();
   input += synapse0x30ef6c0();
   input += synapse0x30ef700();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30e2bf0() {
   double input = input0x30e2bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30ef740() {
   double input = -0.262143;
   input += synapse0x30efa80();
   input += synapse0x30efac0();
   input += synapse0x30efb00();
   input += synapse0x30efb40();
   input += synapse0x30efb80();
   input += synapse0x30efbc0();
   input += synapse0x30efc00();
   input += synapse0x30efc40();
   input += synapse0x30efc80();
   input += synapse0x30efcc0();
   input += synapse0x30efd00();
   input += synapse0x30efd40();
   input += synapse0x30efd80();
   input += synapse0x30efdc0();
   input += synapse0x30efe00();
   input += synapse0x30efe40();
   input += synapse0x30ef8d0();
   input += synapse0x30ef910();
   input += synapse0x30eff90();
   input += synapse0x30effd0();
   input += synapse0x30f0010();
   input += synapse0x30f0050();
   input += synapse0x30f0090();
   input += synapse0x30f00d0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30ef740() {
   double input = input0x30ef740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30f0110() {
   double input = -1.37469;
   input += synapse0x30f0450();
   input += synapse0x30f0490();
   input += synapse0x30f04d0();
   input += synapse0x30f0510();
   input += synapse0x30f0550();
   input += synapse0x30f0590();
   input += synapse0x30f05d0();
   input += synapse0x30f0610();
   input += synapse0x30f0650();
   input += synapse0x30f0690();
   input += synapse0x30f06d0();
   input += synapse0x30f0710();
   input += synapse0x30f0750();
   input += synapse0x30f0790();
   input += synapse0x30f07d0();
   input += synapse0x30f0810();
   input += synapse0x30f02a0();
   input += synapse0x30f02e0();
   input += synapse0x30f0960();
   input += synapse0x30f09a0();
   input += synapse0x30f09e0();
   input += synapse0x30f0a20();
   input += synapse0x30f0a60();
   input += synapse0x30f0aa0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30f0110() {
   double input = input0x30f0110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30f0ae0() {
   double input = 1.75049;
   input += synapse0x30f0e20();
   input += synapse0x30f0e60();
   input += synapse0x30f0ea0();
   input += synapse0x30f0ee0();
   input += synapse0x30f0f20();
   input += synapse0x30f0f60();
   input += synapse0x30f0fa0();
   input += synapse0x30f0fe0();
   input += synapse0x30f1020();
   input += synapse0x30f1060();
   input += synapse0x30f10a0();
   input += synapse0x30f10e0();
   input += synapse0x30f1120();
   input += synapse0x30f1160();
   input += synapse0x30f11a0();
   input += synapse0x30f11e0();
   input += synapse0x30f0c70();
   input += synapse0x30f0cb0();
   input += synapse0x30f1330();
   input += synapse0x30f1370();
   input += synapse0x30f13b0();
   input += synapse0x30f13f0();
   input += synapse0x30f1430();
   input += synapse0x30f1470();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30f0ae0() {
   double input = input0x30f0ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30f14b0() {
   double input = 0.407495;
   input += synapse0x30f17f0();
   input += synapse0x30f1830();
   input += synapse0x30f1870();
   input += synapse0x30f18b0();
   input += synapse0x30f18f0();
   input += synapse0x30f1930();
   input += synapse0x30f1970();
   input += synapse0x30f19b0();
   input += synapse0x30f19f0();
   input += synapse0x30f1a30();
   input += synapse0x30f1a70();
   input += synapse0x30f1ab0();
   input += synapse0x30f1af0();
   input += synapse0x30f1b30();
   input += synapse0x30f1b70();
   input += synapse0x30f1bb0();
   input += synapse0x30f1640();
   input += synapse0x30f1680();
   input += synapse0x30f1d00();
   input += synapse0x30f1d40();
   input += synapse0x30f1d80();
   input += synapse0x30f1dc0();
   input += synapse0x30f1e00();
   input += synapse0x30f1e40();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30f14b0() {
   double input = input0x30f14b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30f1e80() {
   double input = 0.795022;
   input += synapse0x30f21c0();
   input += synapse0x30f2200();
   input += synapse0x30f2240();
   input += synapse0x30f2280();
   input += synapse0x30f22c0();
   input += synapse0x30f2300();
   input += synapse0x30f2340();
   input += synapse0x30f2380();
   input += synapse0x30f23c0();
   input += synapse0x30f2400();
   input += synapse0x30f2440();
   input += synapse0x30f2480();
   input += synapse0x30f24c0();
   input += synapse0x30f2500();
   input += synapse0x30f2540();
   input += synapse0x30f2580();
   input += synapse0x30f2010();
   input += synapse0x30f2050();
   input += synapse0x30f26d0();
   input += synapse0x30f2710();
   input += synapse0x30f2750();
   input += synapse0x30f2790();
   input += synapse0x30f27d0();
   input += synapse0x30f2810();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30f1e80() {
   double input = input0x30f1e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30f2850() {
   double input = 0.0977935;
   input += synapse0x30f2b90();
   input += synapse0x30f2bd0();
   input += synapse0x30f2c10();
   input += synapse0x30f2c50();
   input += synapse0x30f2c90();
   input += synapse0x30f2cd0();
   input += synapse0x30f2d10();
   input += synapse0x30f2d50();
   input += synapse0x30f2d90();
   input += synapse0x30f2dd0();
   input += synapse0x30f2e10();
   input += synapse0x30f2e50();
   input += synapse0x30f2e90();
   input += synapse0x30f2ed0();
   input += synapse0x30f2f10();
   input += synapse0x30f2f50();
   input += synapse0x30f29e0();
   input += synapse0x30f2a20();
   input += synapse0x30f30a0();
   input += synapse0x30f30e0();
   input += synapse0x30f3120();
   input += synapse0x30f3160();
   input += synapse0x30f31a0();
   input += synapse0x30f31e0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30f2850() {
   double input = input0x30f2850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30f3220() {
   double input = 0.775776;
   input += synapse0x30f3560();
   input += synapse0x30f35a0();
   input += synapse0x30f35e0();
   input += synapse0x30f3620();
   input += synapse0x30f3660();
   input += synapse0x30f36a0();
   input += synapse0x30f36e0();
   input += synapse0x30f3720();
   input += synapse0x30f3760();
   input += synapse0x30f37a0();
   input += synapse0x30f37e0();
   input += synapse0x30f3820();
   input += synapse0x30f3860();
   input += synapse0x30f38a0();
   input += synapse0x30f38e0();
   input += synapse0x30f3920();
   input += synapse0x30f33b0();
   input += synapse0x30f33f0();
   input += synapse0x30f3a70();
   input += synapse0x30f3ab0();
   input += synapse0x30f3af0();
   input += synapse0x30f3b30();
   input += synapse0x30f3b70();
   input += synapse0x30f3bb0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30f3220() {
   double input = input0x30f3220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30f3bf0() {
   double input = -1.26235;
   input += synapse0x30dc660();
   input += synapse0x30dc6a0();
   input += synapse0x30dc6e0();
   input += synapse0x30dc720();
   input += synapse0x30dc760();
   input += synapse0x30dc7a0();
   input += synapse0x30dc7e0();
   input += synapse0x30dc820();
   input += synapse0x30f4340();
   input += synapse0x30f4380();
   input += synapse0x30f43c0();
   input += synapse0x30f4400();
   input += synapse0x30f4440();
   input += synapse0x30f4480();
   input += synapse0x30f44c0();
   input += synapse0x30f4500();
   input += synapse0x30f3d80();
   input += synapse0x30f3dc0();
   input += synapse0x30f4650();
   input += synapse0x30f4690();
   input += synapse0x30f46d0();
   input += synapse0x30f4710();
   input += synapse0x30f4750();
   input += synapse0x30f4790();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30f3bf0() {
   double input = input0x30f3bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30f47d0() {
   double input = -0.366065;
   input += synapse0x30f4b10();
   input += synapse0x30f4b50();
   input += synapse0x30f4b90();
   input += synapse0x30f4bd0();
   input += synapse0x30f4c10();
   input += synapse0x30f4c50();
   input += synapse0x30f4c90();
   input += synapse0x30f4cd0();
   input += synapse0x30f4d10();
   input += synapse0x30f4d50();
   input += synapse0x30f4d90();
   input += synapse0x30f4dd0();
   input += synapse0x30f4e10();
   input += synapse0x30f4e50();
   input += synapse0x30f4e90();
   input += synapse0x30f4ed0();
   input += synapse0x30f4960();
   input += synapse0x30f49a0();
   input += synapse0x30f5020();
   input += synapse0x30f5060();
   input += synapse0x30f50a0();
   input += synapse0x30f50e0();
   input += synapse0x30f5120();
   input += synapse0x30f5160();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30f47d0() {
   double input = input0x30f47d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30f51a0() {
   double input = 1.25465;
   input += synapse0x30f54e0();
   input += synapse0x30f5520();
   input += synapse0x30f5560();
   input += synapse0x30f55a0();
   input += synapse0x30f55e0();
   input += synapse0x30f5620();
   input += synapse0x30f5660();
   input += synapse0x30f56a0();
   input += synapse0x30f56e0();
   input += synapse0x30f5720();
   input += synapse0x30f5760();
   input += synapse0x30f57a0();
   input += synapse0x30f57e0();
   input += synapse0x30f5820();
   input += synapse0x30f5860();
   input += synapse0x30f58a0();
   input += synapse0x30f5330();
   input += synapse0x30f5370();
   input += synapse0x30e5ea0();
   input += synapse0x30e5ee0();
   input += synapse0x30e5f20();
   input += synapse0x30e5f60();
   input += synapse0x30e5fa0();
   input += synapse0x30e5fe0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30f51a0() {
   double input = input0x30f51a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30e6020() {
   double input = 0.752458;
   input += synapse0x30e6360();
   input += synapse0x30e63a0();
   input += synapse0x30e63e0();
   input += synapse0x30e6420();
   input += synapse0x30e6460();
   input += synapse0x30e64a0();
   input += synapse0x30e64e0();
   input += synapse0x30e6520();
   input += synapse0x30e6560();
   input += synapse0x30e65a0();
   input += synapse0x30e65e0();
   input += synapse0x30e6620();
   input += synapse0x30e6660();
   input += synapse0x30e66a0();
   input += synapse0x30e66e0();
   input += synapse0x30e6720();
   input += synapse0x30e61b0();
   input += synapse0x30e61f0();
   input += synapse0x30e6870();
   input += synapse0x30e68b0();
   input += synapse0x30e68f0();
   input += synapse0x30e6930();
   input += synapse0x30e6970();
   input += synapse0x30e69b0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30e6020() {
   double input = input0x30e6020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30e69f0() {
   double input = -2.14385;
   input += synapse0x30e6d30();
   input += synapse0x30e6d70();
   input += synapse0x30e6db0();
   input += synapse0x30e6df0();
   input += synapse0x30e6e30();
   input += synapse0x30e6e70();
   input += synapse0x30e6eb0();
   input += synapse0x30e6ef0();
   input += synapse0x30e6f30();
   input += synapse0x30e6f70();
   input += synapse0x30e6fb0();
   input += synapse0x30e6ff0();
   input += synapse0x30e7030();
   input += synapse0x30e7070();
   input += synapse0x30e70b0();
   input += synapse0x30e70f0();
   input += synapse0x30e6b80();
   input += synapse0x30e6bc0();
   input += synapse0x30e7240();
   input += synapse0x30e7280();
   input += synapse0x30e72c0();
   input += synapse0x30e7300();
   input += synapse0x30e7340();
   input += synapse0x30e7380();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30e69f0() {
   double input = input0x30e69f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30e73c0() {
   double input = -0.750993;
   input += synapse0x30e7700();
   input += synapse0x30e7740();
   input += synapse0x30e7780();
   input += synapse0x30e77c0();
   input += synapse0x30e7800();
   input += synapse0x30e7840();
   input += synapse0x30e7880();
   input += synapse0x30e78c0();
   input += synapse0x30e7900();
   input += synapse0x30e7940();
   input += synapse0x30e7980();
   input += synapse0x30e79c0();
   input += synapse0x30e7a00();
   input += synapse0x30e7a40();
   input += synapse0x30e7a80();
   input += synapse0x30e7ac0();
   input += synapse0x30e7550();
   input += synapse0x30e7590();
   input += synapse0x30e7c10();
   input += synapse0x30e7c50();
   input += synapse0x30e7c90();
   input += synapse0x30e7cd0();
   input += synapse0x30e7d10();
   input += synapse0x30e7d50();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30e73c0() {
   double input = input0x30e73c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30f9a00() {
   double input = -0.353116;
   input += synapse0x30f9c20();
   input += synapse0x30f9c60();
   input += synapse0x30f9ca0();
   input += synapse0x30f9ce0();
   input += synapse0x30f9d20();
   input += synapse0x30f9d60();
   input += synapse0x30f9da0();
   input += synapse0x30f9de0();
   input += synapse0x30f9e20();
   input += synapse0x30f9e60();
   input += synapse0x30f9ea0();
   input += synapse0x30f9ee0();
   input += synapse0x30f9f20();
   input += synapse0x30f9f60();
   input += synapse0x30f9fa0();
   input += synapse0x30f9fe0();
   input += synapse0x30e7d90();
   input += synapse0x30e7dd0();
   input += synapse0x30fa130();
   input += synapse0x30fa170();
   input += synapse0x30fa1b0();
   input += synapse0x30fa1f0();
   input += synapse0x30fa230();
   input += synapse0x30fa270();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30f9a00() {
   double input = input0x30f9a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30fa2b0() {
   double input = 0.142839;
   input += synapse0x30fa5f0();
   input += synapse0x30fa630();
   input += synapse0x30fa670();
   input += synapse0x30fa6b0();
   input += synapse0x30fa6f0();
   input += synapse0x30fa730();
   input += synapse0x30fa770();
   input += synapse0x30fa7b0();
   input += synapse0x30fa7f0();
   input += synapse0x30fa830();
   input += synapse0x30fa870();
   input += synapse0x30fa8b0();
   input += synapse0x30fa8f0();
   input += synapse0x30fa930();
   input += synapse0x30fa970();
   input += synapse0x30fa9b0();
   input += synapse0x30fa440();
   input += synapse0x30fa480();
   input += synapse0x30fab00();
   input += synapse0x30fab40();
   input += synapse0x30fab80();
   input += synapse0x30fabc0();
   input += synapse0x30fac00();
   input += synapse0x30fac40();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30fa2b0() {
   double input = input0x30fa2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30fac80() {
   double input = 5.48925;
   input += synapse0x30fafc0();
   input += synapse0x30fb000();
   input += synapse0x30fb040();
   input += synapse0x30fb080();
   input += synapse0x30fb0c0();
   input += synapse0x30fb100();
   input += synapse0x30fb140();
   input += synapse0x30fb180();
   input += synapse0x30fb1c0();
   input += synapse0x30fb200();
   input += synapse0x30fb240();
   input += synapse0x30fb280();
   input += synapse0x30fb2c0();
   input += synapse0x30fb300();
   input += synapse0x30fb340();
   input += synapse0x30fb380();
   input += synapse0x30fae10();
   input += synapse0x30fae50();
   input += synapse0x30fb4d0();
   input += synapse0x30fb510();
   input += synapse0x30fb550();
   input += synapse0x30fb590();
   input += synapse0x30fb5d0();
   input += synapse0x30fb610();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30fac80() {
   double input = input0x30fac80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x30fb650() {
   double input = -2.51013;
   input += synapse0x30fb990();
   input += synapse0x30fb9d0();
   input += synapse0x30fba10();
   input += synapse0x30fba50();
   input += synapse0x30fba90();
   input += synapse0x30fbad0();
   input += synapse0x30fbb10();
   input += synapse0x30fbb50();
   input += synapse0x30fbb90();
   input += synapse0x30fbbd0();
   input += synapse0x30fbc10();
   input += synapse0x30fbc50();
   input += synapse0x30fbc90();
   input += synapse0x30fbcd0();
   input += synapse0x30fbd10();
   input += synapse0x30fbd50();
   input += synapse0x30fb7e0();
   input += synapse0x30fb820();
   input += synapse0x30fbea0();
   input += synapse0x30fbee0();
   input += synapse0x30fbf20();
   input += synapse0x30fbf60();
   input += synapse0x30fbfa0();
   input += synapse0x30fbfe0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x30fb650() {
   double input = input0x30fb650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x3102850() {
   double input = 0.375008;
   input += synapse0x30d8580();
   input += synapse0x30d85c0();
   input += synapse0x30d9a90();
   input += synapse0x30d9ad0();
   input += synapse0x30da460();
   input += synapse0x30da4a0();
   input += synapse0x30db230();
   input += synapse0x30db270();
   input += synapse0x30dbc00();
   input += synapse0x30dbc40();
   input += synapse0x30dc5d0();
   input += synapse0x30dc610();
   input += synapse0x30dd0b0();
   input += synapse0x30dd0f0();
   input += synapse0x30dda80();
   input += synapse0x30ddac0();
   input += synapse0x30dab60();
   input += synapse0x30daba0();
   input += synapse0x30df630();
   input += synapse0x30df670();
   input += synapse0x30e0000();
   input += synapse0x30e0040();
   input += synapse0x30e09d0();
   input += synapse0x30e0a10();
   input += synapse0x30e13a0();
   input += synapse0x30e13e0();
   input += synapse0x30d5510();
   input += synapse0x30d5550();
   input += synapse0x30e3490();
   input += synapse0x30e34d0();
   input += synapse0x30e3e60();
   input += synapse0x30e3ea0();
   input += synapse0x30e4830();
   input += synapse0x30e4870();
   input += synapse0x30e5200();
   input += synapse0x30e5240();
   input += synapse0x30e5bd0();
   input += synapse0x30e5c10();
   input += synapse0x30de720();
   input += synapse0x30de760();
   input += synapse0x30e7fd0();
   input += synapse0x30e8010();
   input += synapse0x30e8960();
   input += synapse0x30e89a0();
   input += synapse0x30e9330();
   input += synapse0x30e9370();
   input += synapse0x30e9d00();
   input += synapse0x30e9d40();
   input += synapse0x30ea6d0();
   input += synapse0x30ea710();
   return input;
}

double NNfunction_sb_dRsR::neuron0x3102850() {
   double input = input0x3102850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x3102bf0() {
   double input = 0.0938007;
   input += synapse0x30ece10();
   input += synapse0x30ece50();
   input += synapse0x30e23d0();
   input += synapse0x30e2410();
   input += synapse0x30ef9f0();
   input += synapse0x30efa30();
   input += synapse0x30f03c0();
   input += synapse0x30f0400();
   input += synapse0x30f0d90();
   input += synapse0x30f0dd0();
   input += synapse0x30f1760();
   input += synapse0x30f17a0();
   input += synapse0x30f2130();
   input += synapse0x30f2170();
   input += synapse0x30f2b00();
   input += synapse0x30f2b40();
   input += synapse0x30f34d0();
   input += synapse0x30f3510();
   input += synapse0x30f3ea0();
   input += synapse0x30f3ee0();
   input += synapse0x30f4a80();
   input += synapse0x30f4ac0();
   input += synapse0x30f5450();
   input += synapse0x30f5490();
   input += synapse0x30e62d0();
   input += synapse0x30e6310();
   input += synapse0x30e6ca0();
   input += synapse0x30e6ce0();
   input += synapse0x30e7670();
   input += synapse0x30e76b0();
   input += synapse0x30f9b90();
   input += synapse0x30f9bd0();
   input += synapse0x30fa560();
   input += synapse0x30fa5a0();
   input += synapse0x30faf30();
   input += synapse0x30faf70();
   input += synapse0x30fb900();
   input += synapse0x30fb940();
   input += synapse0x30d77f0();
   input += synapse0x30d7830();
   input += synapse0x30eb0a0();
   input += synapse0x30eb0e0();
   input += synapse0x30fc020();
   input += synapse0x30fc060();
   input += synapse0x30fc0a0();
   input += synapse0x30fc0e0();
   input += synapse0x3102f90();
   input += synapse0x3102fd0();
   input += synapse0x3103010();
   input += synapse0x3103050();
   return input;
}

double NNfunction_sb_dRsR::neuron0x3102bf0() {
   double input = input0x3102bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x3103090() {
   double input = 0.903797;
   input += synapse0x31033d0();
   input += synapse0x3103410();
   input += synapse0x3103450();
   input += synapse0x3103490();
   input += synapse0x31034d0();
   input += synapse0x3103510();
   input += synapse0x3103550();
   input += synapse0x3103590();
   input += synapse0x31035d0();
   input += synapse0x3103610();
   input += synapse0x3103650();
   input += synapse0x3103690();
   input += synapse0x31036d0();
   input += synapse0x3103710();
   input += synapse0x3103750();
   input += synapse0x3103790();
   input += synapse0x3103220();
   input += synapse0x3103260();
   input += synapse0x31038e0();
   input += synapse0x3103920();
   input += synapse0x3103960();
   input += synapse0x31039a0();
   input += synapse0x31039e0();
   input += synapse0x3103a20();
   input += synapse0x3103a60();
   input += synapse0x3103aa0();
   input += synapse0x3103ae0();
   input += synapse0x3103b20();
   input += synapse0x3103b60();
   input += synapse0x3103ba0();
   input += synapse0x3103be0();
   input += synapse0x3103c20();
   input += synapse0x31037d0();
   input += synapse0x3103810();
   input += synapse0x3103850();
   input += synapse0x3103890();
   input += synapse0x3103e70();
   input += synapse0x3103eb0();
   input += synapse0x3103ef0();
   input += synapse0x3103f30();
   input += synapse0x3103f70();
   input += synapse0x3103fb0();
   input += synapse0x3103ff0();
   input += synapse0x3104030();
   input += synapse0x3104070();
   input += synapse0x31040b0();
   input += synapse0x31040f0();
   input += synapse0x3104130();
   input += synapse0x3104170();
   input += synapse0x31041b0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x3103090() {
   double input = input0x3103090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x31041f0() {
   double input = 0.241183;
   input += synapse0x3104530();
   input += synapse0x3104570();
   input += synapse0x31045b0();
   input += synapse0x31045f0();
   input += synapse0x3104630();
   input += synapse0x3104670();
   input += synapse0x31046b0();
   input += synapse0x31046f0();
   input += synapse0x3104730();
   input += synapse0x3104770();
   input += synapse0x31047b0();
   input += synapse0x31047f0();
   input += synapse0x3104830();
   input += synapse0x3104870();
   input += synapse0x31048b0();
   input += synapse0x31048f0();
   input += synapse0x3104380();
   input += synapse0x31043c0();
   input += synapse0x3104a40();
   input += synapse0x3104a80();
   input += synapse0x3104ac0();
   input += synapse0x3104b00();
   input += synapse0x3104b40();
   input += synapse0x3104b80();
   input += synapse0x3104bc0();
   input += synapse0x3104c00();
   input += synapse0x3104c40();
   input += synapse0x3104c80();
   input += synapse0x3104cc0();
   input += synapse0x3104d00();
   input += synapse0x3104d40();
   input += synapse0x3104d80();
   input += synapse0x3104930();
   input += synapse0x3104970();
   input += synapse0x31049b0();
   input += synapse0x31049f0();
   input += synapse0x3104fd0();
   input += synapse0x3105010();
   input += synapse0x3105050();
   input += synapse0x3105090();
   input += synapse0x31050d0();
   input += synapse0x3105110();
   input += synapse0x3105150();
   input += synapse0x3105190();
   input += synapse0x31051d0();
   input += synapse0x3105210();
   input += synapse0x3105250();
   input += synapse0x3105290();
   input += synapse0x31052d0();
   input += synapse0x3105310();
   return input;
}

double NNfunction_sb_dRsR::neuron0x31041f0() {
   double input = input0x31041f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x3105350() {
   double input = 0.231506;
   input += synapse0x3105690();
   input += synapse0x31056d0();
   input += synapse0x3105710();
   input += synapse0x3105750();
   input += synapse0x3105790();
   input += synapse0x31057d0();
   input += synapse0x3105810();
   input += synapse0x3105850();
   input += synapse0x3105890();
   input += synapse0x31058d0();
   input += synapse0x3105910();
   input += synapse0x3105950();
   input += synapse0x3105990();
   input += synapse0x31059d0();
   input += synapse0x3105a10();
   input += synapse0x3105a50();
   input += synapse0x31054e0();
   input += synapse0x3105520();
   input += synapse0x3105ba0();
   input += synapse0x3105be0();
   input += synapse0x3105c20();
   input += synapse0x3105c60();
   input += synapse0x3105ca0();
   input += synapse0x3105ce0();
   input += synapse0x3105d20();
   input += synapse0x3105d60();
   input += synapse0x3105da0();
   input += synapse0x3105de0();
   input += synapse0x3105e20();
   input += synapse0x3105e60();
   input += synapse0x3105ea0();
   input += synapse0x3105ee0();
   input += synapse0x3105a90();
   input += synapse0x3105ad0();
   input += synapse0x3105b10();
   input += synapse0x3105b50();
   input += synapse0x3106130();
   input += synapse0x3106170();
   input += synapse0x31061b0();
   input += synapse0x31061f0();
   input += synapse0x3106230();
   input += synapse0x3106270();
   input += synapse0x31062b0();
   input += synapse0x31062f0();
   input += synapse0x3106330();
   input += synapse0x3106370();
   input += synapse0x31063b0();
   input += synapse0x31063f0();
   input += synapse0x3106430();
   input += synapse0x3106470();
   return input;
}

double NNfunction_sb_dRsR::neuron0x3105350() {
   double input = input0x3105350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x31064b0() {
   double input = 9.31025;
   input += synapse0x30d7590();
   input += synapse0x31066d0();
   input += synapse0x3106710();
   input += synapse0x3106750();
   input += synapse0x3106790();
   return input;
}

double NNfunction_sb_dRsR::neuron0x31064b0() {
   double input = input0x31064b0();
   return (input * 1)+0;
}

double NNfunction_sb_dRsR::synapse0x2e923e0() {
   return (neuron0x30d2570()*-0.144609);
}

double NNfunction_sb_dRsR::synapse0x30d2430() {
   return (neuron0x30d28b0()*0.0512278);
}

double NNfunction_sb_dRsR::synapse0x30d2470() {
   return (neuron0x30d2bf0()*0.135993);
}

double NNfunction_sb_dRsR::synapse0x30d7880() {
   return (neuron0x30d2f30()*-0.00821133);
}

double NNfunction_sb_dRsR::synapse0x30d78c0() {
   return (neuron0x30d3270()*-0.237187);
}

double NNfunction_sb_dRsR::synapse0x30d7900() {
   return (neuron0x30d35b0()*-0.141443);
}

double NNfunction_sb_dRsR::synapse0x30d7940() {
   return (neuron0x30d38f0()*-0.381432);
}

double NNfunction_sb_dRsR::synapse0x30d7980() {
   return (neuron0x30d3c30()*-0.220719);
}

double NNfunction_sb_dRsR::synapse0x30d79c0() {
   return (neuron0x30d3f70()*0.369146);
}

double NNfunction_sb_dRsR::synapse0x30d7a00() {
   return (neuron0x30d42b0()*0.143824);
}

double NNfunction_sb_dRsR::synapse0x30d7a40() {
   return (neuron0x30d45f0()*0.260452);
}

double NNfunction_sb_dRsR::synapse0x30d7a80() {
   return (neuron0x30d4930()*-0.65399);
}

double NNfunction_sb_dRsR::synapse0x30d7ac0() {
   return (neuron0x30d4c70()*-0.841906);
}

double NNfunction_sb_dRsR::synapse0x30d7b00() {
   return (neuron0x30d4fb0()*0.657728);
}

double NNfunction_sb_dRsR::synapse0x30d7b40() {
   return (neuron0x30d52f0()*0.249966);
}

double NNfunction_sb_dRsR::synapse0x30d7b80() {
   return (neuron0x30d5630()*0.0900249);
}

double NNfunction_sb_dRsR::synapse0x30d23a0() {
   return (neuron0x30d5970()*0.147988);
}

double NNfunction_sb_dRsR::synapse0x30d23e0() {
   return (neuron0x30d5ed0()*-1.18199);
}

double NNfunction_sb_dRsR::synapse0x2e83c80() {
   return (neuron0x30d60f0()*-0.975269);
}

double NNfunction_sb_dRsR::synapse0x2e83cc0() {
   return (neuron0x30d6430()*0.0160376);
}

double NNfunction_sb_dRsR::synapse0x30d7de0() {
   return (neuron0x30d6770()*-0.208598);
}

double NNfunction_sb_dRsR::synapse0x30d7e20() {
   return (neuron0x30d6ab0()*0.258766);
}

double NNfunction_sb_dRsR::synapse0x30d7e60() {
   return (neuron0x30d6df0()*0.164552);
}

double NNfunction_sb_dRsR::synapse0x30d7ea0() {
   return (neuron0x30d7130()*0.521274);
}

double NNfunction_sb_dRsR::synapse0x30d8220() {
   return (neuron0x30d2570()*-0.215532);
}

double NNfunction_sb_dRsR::synapse0x30d8260() {
   return (neuron0x30d28b0()*0.09441);
}

double NNfunction_sb_dRsR::synapse0x30d82a0() {
   return (neuron0x30d2bf0()*-0.0654356);
}

double NNfunction_sb_dRsR::synapse0x30d82e0() {
   return (neuron0x30d2f30()*1.28078);
}

double NNfunction_sb_dRsR::synapse0x30d8320() {
   return (neuron0x30d3270()*-0.443518);
}

double NNfunction_sb_dRsR::synapse0x30d8360() {
   return (neuron0x30d35b0()*-0.335522);
}

double NNfunction_sb_dRsR::synapse0x30d83a0() {
   return (neuron0x30d38f0()*0.205609);
}

double NNfunction_sb_dRsR::synapse0x30d83e0() {
   return (neuron0x30d3c30()*-0.716801);
}

double NNfunction_sb_dRsR::synapse0x30d8420() {
   return (neuron0x30d3f70()*-0.142182);
}

double NNfunction_sb_dRsR::synapse0x30d7cd0() {
   return (neuron0x30d42b0()*0.0213808);
}

double NNfunction_sb_dRsR::synapse0x30d7d10() {
   return (neuron0x30d45f0()*-0.0128595);
}

double NNfunction_sb_dRsR::synapse0x30d7d50() {
   return (neuron0x30d4930()*-0.456878);
}

double NNfunction_sb_dRsR::synapse0x30d7d90() {
   return (neuron0x30d4c70()*-0.348039);
}

double NNfunction_sb_dRsR::synapse0x30d8670() {
   return (neuron0x30d4fb0()*-0.359113);
}

double NNfunction_sb_dRsR::synapse0x30d86b0() {
   return (neuron0x30d52f0()*0.278653);
}

double NNfunction_sb_dRsR::synapse0x30d86f0() {
   return (neuron0x30d5630()*-0.193267);
}

double NNfunction_sb_dRsR::synapse0x30d8070() {
   return (neuron0x30d5970()*-0.38402);
}

double NNfunction_sb_dRsR::synapse0x30d80b0() {
   return (neuron0x30d5ed0()*-0.0510029);
}

double NNfunction_sb_dRsR::synapse0x30d8840() {
   return (neuron0x30d60f0()*-0.219248);
}

double NNfunction_sb_dRsR::synapse0x30d8880() {
   return (neuron0x30d6430()*0.171835);
}

double NNfunction_sb_dRsR::synapse0x30d88c0() {
   return (neuron0x30d6770()*-0.212334);
}

double NNfunction_sb_dRsR::synapse0x30d8900() {
   return (neuron0x30d6ab0()*0.725898);
}

double NNfunction_sb_dRsR::synapse0x30d8940() {
   return (neuron0x30d6df0()*-0.657183);
}

double NNfunction_sb_dRsR::synapse0x30d8980() {
   return (neuron0x30d7130()*0.485275);
}

double NNfunction_sb_dRsR::synapse0x30d8d00() {
   return (neuron0x30d2570()*-0.570008);
}

double NNfunction_sb_dRsR::synapse0x30d8d40() {
   return (neuron0x30d28b0()*-0.414056);
}

double NNfunction_sb_dRsR::synapse0x30d8d80() {
   return (neuron0x30d2bf0()*-0.37064);
}

double NNfunction_sb_dRsR::synapse0x30d8dc0() {
   return (neuron0x30d2f30()*0.490234);
}

double NNfunction_sb_dRsR::synapse0x30d8e00() {
   return (neuron0x30d3270()*-0.179397);
}

double NNfunction_sb_dRsR::synapse0x30d8e40() {
   return (neuron0x30d35b0()*-0.454552);
}

double NNfunction_sb_dRsR::synapse0x30d8e80() {
   return (neuron0x30d38f0()*0.218795);
}

double NNfunction_sb_dRsR::synapse0x30d8ec0() {
   return (neuron0x30d3c30()*0.101459);
}

double NNfunction_sb_dRsR::synapse0x30d8f00() {
   return (neuron0x30d3f70()*0.0909302);
}

double NNfunction_sb_dRsR::synapse0x30d8f40() {
   return (neuron0x30d42b0()*0.0148145);
}

double NNfunction_sb_dRsR::synapse0x30d8f80() {
   return (neuron0x30d45f0()*0.392705);
}

double NNfunction_sb_dRsR::synapse0x30d8fc0() {
   return (neuron0x30d4930()*0.0711024);
}

double NNfunction_sb_dRsR::synapse0x30d9000() {
   return (neuron0x30d4c70()*0.137824);
}

double NNfunction_sb_dRsR::synapse0x30d9040() {
   return (neuron0x30d4fb0()*0.376881);
}

double NNfunction_sb_dRsR::synapse0x30d9080() {
   return (neuron0x30d52f0()*-0.275001);
}

double NNfunction_sb_dRsR::synapse0x30d90c0() {
   return (neuron0x30d5630()*0.682989);
}

double NNfunction_sb_dRsR::synapse0x30d8b50() {
   return (neuron0x30d5970()*0.409917);
}

double NNfunction_sb_dRsR::synapse0x30d8b90() {
   return (neuron0x30d5ed0()*0.492357);
}

double NNfunction_sb_dRsR::synapse0x2e91ad0() {
   return (neuron0x30d60f0()*-0.417924);
}

double NNfunction_sb_dRsR::synapse0x2e91b10() {
   return (neuron0x30d6430()*-0.121365);
}

double NNfunction_sb_dRsR::synapse0x30c1600() {
   return (neuron0x30d6770()*-0.0407616);
}

double NNfunction_sb_dRsR::synapse0x30c1640() {
   return (neuron0x30d6ab0()*0.726177);
}

double NNfunction_sb_dRsR::synapse0x30c1680() {
   return (neuron0x30d6df0()*-0.105291);
}

double NNfunction_sb_dRsR::synapse0x30d24b0() {
   return (neuron0x30d7130()*0.57862);
}

double NNfunction_sb_dRsR::synapse0x30d8610() {
   return (neuron0x30d2570()*-0.452656);
}

double NNfunction_sb_dRsR::synapse0x30d24f0() {
   return (neuron0x30d28b0()*0.0111213);
}

double NNfunction_sb_dRsR::synapse0x30d2530() {
   return (neuron0x30d2bf0()*-0.143623);
}

double NNfunction_sb_dRsR::synapse0x30d9210() {
   return (neuron0x30d2f30()*-0.228997);
}

double NNfunction_sb_dRsR::synapse0x30d9250() {
   return (neuron0x30d3270()*-0.214128);
}

double NNfunction_sb_dRsR::synapse0x30d9290() {
   return (neuron0x30d35b0()*-0.17646);
}

double NNfunction_sb_dRsR::synapse0x30d92d0() {
   return (neuron0x30d38f0()*-0.270898);
}

double NNfunction_sb_dRsR::synapse0x30d9310() {
   return (neuron0x30d3c30()*0.999581);
}

double NNfunction_sb_dRsR::synapse0x30d9350() {
   return (neuron0x30d3f70()*-0.86833);
}

double NNfunction_sb_dRsR::synapse0x30d9390() {
   return (neuron0x30d42b0()*-0.828078);
}

double NNfunction_sb_dRsR::synapse0x30d93d0() {
   return (neuron0x30d45f0()*-0.765748);
}

double NNfunction_sb_dRsR::synapse0x30d9410() {
   return (neuron0x30d4930()*0.749769);
}

double NNfunction_sb_dRsR::synapse0x30d9450() {
   return (neuron0x30d4c70()*0.227637);
}

double NNfunction_sb_dRsR::synapse0x30d9490() {
   return (neuron0x30d4fb0()*-0.365095);
}

double NNfunction_sb_dRsR::synapse0x30d94d0() {
   return (neuron0x30d52f0()*0.254772);
}

double NNfunction_sb_dRsR::synapse0x30d9510() {
   return (neuron0x30d5630()*-0.276379);
}

double NNfunction_sb_dRsR::synapse0x30d8460() {
   return (neuron0x30d5970()*0.141957);
}

double NNfunction_sb_dRsR::synapse0x30d84a0() {
   return (neuron0x30d5ed0()*2.09368);
}

double NNfunction_sb_dRsR::synapse0x30d9660() {
   return (neuron0x30d60f0()*1.10511);
}

double NNfunction_sb_dRsR::synapse0x30d96a0() {
   return (neuron0x30d6430()*0.218606);
}

double NNfunction_sb_dRsR::synapse0x30d96e0() {
   return (neuron0x30d6770()*-0.577538);
}

double NNfunction_sb_dRsR::synapse0x30d9720() {
   return (neuron0x30d6ab0()*0.527641);
}

double NNfunction_sb_dRsR::synapse0x30d9760() {
   return (neuron0x30d6df0()*-0.141571);
}

double NNfunction_sb_dRsR::synapse0x30d97a0() {
   return (neuron0x30d7130()*-0.0158481);
}

double NNfunction_sb_dRsR::synapse0x30d9b20() {
   return (neuron0x30d2570()*0.0183102);
}

double NNfunction_sb_dRsR::synapse0x30d9b60() {
   return (neuron0x30d28b0()*0.01213);
}

double NNfunction_sb_dRsR::synapse0x30d9ba0() {
   return (neuron0x30d2bf0()*0.0167364);
}

double NNfunction_sb_dRsR::synapse0x30d9be0() {
   return (neuron0x30d2f30()*5.00001);
}

double NNfunction_sb_dRsR::synapse0x30d9c20() {
   return (neuron0x30d3270()*0.0260454);
}

double NNfunction_sb_dRsR::synapse0x30d9c60() {
   return (neuron0x30d35b0()*0.00182552);
}

double NNfunction_sb_dRsR::synapse0x30d9ca0() {
   return (neuron0x30d38f0()*0.0244336);
}

double NNfunction_sb_dRsR::synapse0x30d9ce0() {
   return (neuron0x30d3c30()*0.0182738);
}

double NNfunction_sb_dRsR::synapse0x30d9d20() {
   return (neuron0x30d3f70()*0.0313752);
}

double NNfunction_sb_dRsR::synapse0x30d9d60() {
   return (neuron0x30d42b0()*0.0304265);
}

double NNfunction_sb_dRsR::synapse0x30d9da0() {
   return (neuron0x30d45f0()*0.0293137);
}

double NNfunction_sb_dRsR::synapse0x30d9de0() {
   return (neuron0x30d4930()*-0.0218291);
}

double NNfunction_sb_dRsR::synapse0x30d9e20() {
   return (neuron0x30d4c70()*0.0268835);
}

double NNfunction_sb_dRsR::synapse0x30d9e60() {
   return (neuron0x30d4fb0()*0.00772499);
}

double NNfunction_sb_dRsR::synapse0x30d9ea0() {
   return (neuron0x30d52f0()*-0.0453358);
}

double NNfunction_sb_dRsR::synapse0x30d9ee0() {
   return (neuron0x30d5630()*0.0130173);
}

double NNfunction_sb_dRsR::synapse0x30d9970() {
   return (neuron0x30d5970()*-0.0061804);
}

double NNfunction_sb_dRsR::synapse0x30d99b0() {
   return (neuron0x30d5ed0()*1.22871);
}

double NNfunction_sb_dRsR::synapse0x30da030() {
   return (neuron0x30d60f0()*1.4483);
}

double NNfunction_sb_dRsR::synapse0x30da070() {
   return (neuron0x30d6430()*-0.0854614);
}

double NNfunction_sb_dRsR::synapse0x30da0b0() {
   return (neuron0x30d6770()*0.0322098);
}

double NNfunction_sb_dRsR::synapse0x30da0f0() {
   return (neuron0x30d6ab0()*0.0214888);
}

double NNfunction_sb_dRsR::synapse0x30da130() {
   return (neuron0x30d6df0()*-0.0135163);
}

double NNfunction_sb_dRsR::synapse0x30da170() {
   return (neuron0x30d7130()*-0.0136647);
}

double NNfunction_sb_dRsR::synapse0x30da4f0() {
   return (neuron0x30d2570()*0.0258313);
}

double NNfunction_sb_dRsR::synapse0x30da530() {
   return (neuron0x30d28b0()*0.0659614);
}

double NNfunction_sb_dRsR::synapse0x30da570() {
   return (neuron0x30d2bf0()*-0.00829099);
}

double NNfunction_sb_dRsR::synapse0x30da5b0() {
   return (neuron0x30d2f30()*2.31543);
}

double NNfunction_sb_dRsR::synapse0x30da5f0() {
   return (neuron0x30d3270()*-0.0110444);
}

double NNfunction_sb_dRsR::synapse0x30da630() {
   return (neuron0x30d35b0()*-0.0118853);
}

double NNfunction_sb_dRsR::synapse0x30da670() {
   return (neuron0x30d38f0()*0.0143106);
}

double NNfunction_sb_dRsR::synapse0x30da6b0() {
   return (neuron0x30d3c30()*0.0103019);
}

double NNfunction_sb_dRsR::synapse0x30da6f0() {
   return (neuron0x30d3f70()*0.056724);
}

double NNfunction_sb_dRsR::synapse0x2e91e40() {
   return (neuron0x30d42b0()*0.0390463);
}

double NNfunction_sb_dRsR::synapse0x2e91e80() {
   return (neuron0x30d45f0()*0.0182623);
}

double NNfunction_sb_dRsR::synapse0x2e91ec0() {
   return (neuron0x30d4930()*0.0781331);
}

double NNfunction_sb_dRsR::synapse0x2e91f00() {
   return (neuron0x30d4c70()*0.0633636);
}

double NNfunction_sb_dRsR::synapse0x2e91f40() {
   return (neuron0x30d4fb0()*-0.0185344);
}

double NNfunction_sb_dRsR::synapse0x2e91f80() {
   return (neuron0x30d52f0()*0.0169836);
}

double NNfunction_sb_dRsR::synapse0x2e91fc0() {
   return (neuron0x30d5630()*0.0126078);
}

double NNfunction_sb_dRsR::synapse0x30da340() {
   return (neuron0x30d5970()*-0.027494);
}

double NNfunction_sb_dRsR::synapse0x30da380() {
   return (neuron0x30d5ed0()*0.733279);
}

double NNfunction_sb_dRsR::synapse0x2e92110() {
   return (neuron0x30d60f0()*0.483423);
}

double NNfunction_sb_dRsR::synapse0x2e92150() {
   return (neuron0x30d6430()*0.00232683);
}

double NNfunction_sb_dRsR::synapse0x2e92190() {
   return (neuron0x30d6770()*0.00183888);
}

double NNfunction_sb_dRsR::synapse0x2e921d0() {
   return (neuron0x30d6ab0()*0.00667882);
}

double NNfunction_sb_dRsR::synapse0x2e92210() {
   return (neuron0x30d6df0()*-0.0102531);
}

double NNfunction_sb_dRsR::synapse0x30daf40() {
   return (neuron0x30d7130()*-0.0136413);
}

double NNfunction_sb_dRsR::synapse0x30db2c0() {
   return (neuron0x30d2570()*-0.34411);
}

double NNfunction_sb_dRsR::synapse0x30db300() {
   return (neuron0x30d28b0()*0.362921);
}

double NNfunction_sb_dRsR::synapse0x30db340() {
   return (neuron0x30d2bf0()*-0.306953);
}

double NNfunction_sb_dRsR::synapse0x30db380() {
   return (neuron0x30d2f30()*0.410526);
}

double NNfunction_sb_dRsR::synapse0x30db3c0() {
   return (neuron0x30d3270()*-0.79278);
}

double NNfunction_sb_dRsR::synapse0x30db400() {
   return (neuron0x30d35b0()*0.383949);
}

double NNfunction_sb_dRsR::synapse0x30db440() {
   return (neuron0x30d38f0()*-0.309729);
}

double NNfunction_sb_dRsR::synapse0x30db480() {
   return (neuron0x30d3c30()*-0.0557291);
}

double NNfunction_sb_dRsR::synapse0x30db4c0() {
   return (neuron0x30d3f70()*-0.249725);
}

double NNfunction_sb_dRsR::synapse0x30db500() {
   return (neuron0x30d42b0()*0.695902);
}

double NNfunction_sb_dRsR::synapse0x30db540() {
   return (neuron0x30d45f0()*-0.266641);
}

double NNfunction_sb_dRsR::synapse0x30db580() {
   return (neuron0x30d4930()*0.650508);
}

double NNfunction_sb_dRsR::synapse0x30db5c0() {
   return (neuron0x30d4c70()*0.0151429);
}

double NNfunction_sb_dRsR::synapse0x30db600() {
   return (neuron0x30d4fb0()*-0.616161);
}

double NNfunction_sb_dRsR::synapse0x30db640() {
   return (neuron0x30d52f0()*1.05924);
}

double NNfunction_sb_dRsR::synapse0x30db680() {
   return (neuron0x30d5630()*0.467516);
}

double NNfunction_sb_dRsR::synapse0x30db110() {
   return (neuron0x30d5970()*-1.07183);
}

double NNfunction_sb_dRsR::synapse0x30db150() {
   return (neuron0x30d5ed0()*-0.295874);
}

double NNfunction_sb_dRsR::synapse0x30db7d0() {
   return (neuron0x30d60f0()*0.931691);
}

double NNfunction_sb_dRsR::synapse0x30db810() {
   return (neuron0x30d6430()*0.138229);
}

double NNfunction_sb_dRsR::synapse0x30db850() {
   return (neuron0x30d6770()*0.0865245);
}

double NNfunction_sb_dRsR::synapse0x30db890() {
   return (neuron0x30d6ab0()*-0.429879);
}

double NNfunction_sb_dRsR::synapse0x30db8d0() {
   return (neuron0x30d6df0()*-0.704848);
}

double NNfunction_sb_dRsR::synapse0x30db910() {
   return (neuron0x30d7130()*-0.921308);
}

double NNfunction_sb_dRsR::synapse0x30dbc90() {
   return (neuron0x30d2570()*-0.127159);
}

double NNfunction_sb_dRsR::synapse0x30dbcd0() {
   return (neuron0x30d28b0()*-0.506036);
}

double NNfunction_sb_dRsR::synapse0x30dbd10() {
   return (neuron0x30d2bf0()*0.317523);
}

double NNfunction_sb_dRsR::synapse0x30dbd50() {
   return (neuron0x30d2f30()*-0.630336);
}

double NNfunction_sb_dRsR::synapse0x30dbd90() {
   return (neuron0x30d3270()*0.325852);
}

double NNfunction_sb_dRsR::synapse0x30dbdd0() {
   return (neuron0x30d35b0()*0.213042);
}

double NNfunction_sb_dRsR::synapse0x30dbe10() {
   return (neuron0x30d38f0()*0.529216);
}

double NNfunction_sb_dRsR::synapse0x30dbe50() {
   return (neuron0x30d3c30()*0.241081);
}

double NNfunction_sb_dRsR::synapse0x30dbe90() {
   return (neuron0x30d3f70()*0.0911885);
}

double NNfunction_sb_dRsR::synapse0x30dbed0() {
   return (neuron0x30d42b0()*0.173536);
}

double NNfunction_sb_dRsR::synapse0x30dbf10() {
   return (neuron0x30d45f0()*0.112301);
}

double NNfunction_sb_dRsR::synapse0x30dbf50() {
   return (neuron0x30d4930()*-0.439781);
}

double NNfunction_sb_dRsR::synapse0x30dbf90() {
   return (neuron0x30d4c70()*-0.438911);
}

double NNfunction_sb_dRsR::synapse0x30dbfd0() {
   return (neuron0x30d4fb0()*-0.0254056);
}

double NNfunction_sb_dRsR::synapse0x30dc010() {
   return (neuron0x30d52f0()*0.14153);
}

double NNfunction_sb_dRsR::synapse0x30dc050() {
   return (neuron0x30d5630()*0.700933);
}

double NNfunction_sb_dRsR::synapse0x30dbae0() {
   return (neuron0x30d5970()*0.309525);
}

double NNfunction_sb_dRsR::synapse0x30dbb20() {
   return (neuron0x30d5ed0()*0.90424);
}

double NNfunction_sb_dRsR::synapse0x30dc1a0() {
   return (neuron0x30d60f0()*0.0801461);
}

double NNfunction_sb_dRsR::synapse0x30dc1e0() {
   return (neuron0x30d6430()*-0.432024);
}

double NNfunction_sb_dRsR::synapse0x30dc220() {
   return (neuron0x30d6770()*0.00916493);
}

double NNfunction_sb_dRsR::synapse0x30dc260() {
   return (neuron0x30d6ab0()*-0.119315);
}

double NNfunction_sb_dRsR::synapse0x30dc2a0() {
   return (neuron0x30d6df0()*-0.310822);
}

double NNfunction_sb_dRsR::synapse0x30dc2e0() {
   return (neuron0x30d7130()*-0.0698471);
}

double NNfunction_sb_dRsR::synapse0x30d5dc0() {
   return (neuron0x30d2570()*0.208178);
}

double NNfunction_sb_dRsR::synapse0x30d5e00() {
   return (neuron0x30d28b0()*0.187799);
}

double NNfunction_sb_dRsR::synapse0x30d5e40() {
   return (neuron0x30d2bf0()*0.0240562);
}

double NNfunction_sb_dRsR::synapse0x30d5e80() {
   return (neuron0x30d2f30()*-2.50248);
}

double NNfunction_sb_dRsR::synapse0x30dc870() {
   return (neuron0x30d3270()*-0.417434);
}

double NNfunction_sb_dRsR::synapse0x30dc8b0() {
   return (neuron0x30d35b0()*-0.0597625);
}

double NNfunction_sb_dRsR::synapse0x30dc8f0() {
   return (neuron0x30d38f0()*0.0482391);
}

double NNfunction_sb_dRsR::synapse0x30dc930() {
   return (neuron0x30d3c30()*0.177998);
}

double NNfunction_sb_dRsR::synapse0x30dc970() {
   return (neuron0x30d3f70()*0.219825);
}

double NNfunction_sb_dRsR::synapse0x30dc9b0() {
   return (neuron0x30d42b0()*0.165087);
}

double NNfunction_sb_dRsR::synapse0x30dc9f0() {
   return (neuron0x30d45f0()*0.0797241);
}

double NNfunction_sb_dRsR::synapse0x30dca30() {
   return (neuron0x30d4930()*-0.182252);
}

double NNfunction_sb_dRsR::synapse0x30dca70() {
   return (neuron0x30d4c70()*-0.018919);
}

double NNfunction_sb_dRsR::synapse0x30dcab0() {
   return (neuron0x30d4fb0()*-0.161769);
}

double NNfunction_sb_dRsR::synapse0x30dcaf0() {
   return (neuron0x30d52f0()*-0.266471);
}

double NNfunction_sb_dRsR::synapse0x30dcb30() {
   return (neuron0x30d5630()*-0.0244309);
}

double NNfunction_sb_dRsR::synapse0x30dc4b0() {
   return (neuron0x30d5970()*0.0712084);
}

double NNfunction_sb_dRsR::synapse0x30dc4f0() {
   return (neuron0x30d5ed0()*0.0203229);
}

double NNfunction_sb_dRsR::synapse0x30dcc80() {
   return (neuron0x30d60f0()*-0.0380546);
}

double NNfunction_sb_dRsR::synapse0x30dccc0() {
   return (neuron0x30d6430()*-0.439339);
}

double NNfunction_sb_dRsR::synapse0x30dcd00() {
   return (neuron0x30d6770()*-0.54382);
}

double NNfunction_sb_dRsR::synapse0x30dcd40() {
   return (neuron0x30d6ab0()*0.228653);
}

double NNfunction_sb_dRsR::synapse0x30dcd80() {
   return (neuron0x30d6df0()*-0.0813501);
}

double NNfunction_sb_dRsR::synapse0x30dcdc0() {
   return (neuron0x30d7130()*0.331073);
}

double NNfunction_sb_dRsR::synapse0x30dd140() {
   return (neuron0x30d2570()*0.495696);
}

double NNfunction_sb_dRsR::synapse0x30dd180() {
   return (neuron0x30d28b0()*-0.750727);
}

double NNfunction_sb_dRsR::synapse0x30dd1c0() {
   return (neuron0x30d2bf0()*-0.0706466);
}

double NNfunction_sb_dRsR::synapse0x30dd200() {
   return (neuron0x30d2f30()*-0.865107);
}

double NNfunction_sb_dRsR::synapse0x30dd240() {
   return (neuron0x30d3270()*-0.0634446);
}

double NNfunction_sb_dRsR::synapse0x30dd280() {
   return (neuron0x30d35b0()*-0.644256);
}

double NNfunction_sb_dRsR::synapse0x30dd2c0() {
   return (neuron0x30d38f0()*0.467273);
}

double NNfunction_sb_dRsR::synapse0x30dd300() {
   return (neuron0x30d3c30()*0.0340809);
}

double NNfunction_sb_dRsR::synapse0x30dd340() {
   return (neuron0x30d3f70()*0.289029);
}

double NNfunction_sb_dRsR::synapse0x30dd380() {
   return (neuron0x30d42b0()*0.273046);
}

double NNfunction_sb_dRsR::synapse0x30dd3c0() {
   return (neuron0x30d45f0()*-0.741073);
}

double NNfunction_sb_dRsR::synapse0x30dd400() {
   return (neuron0x30d4930()*0.551044);
}

double NNfunction_sb_dRsR::synapse0x30dd440() {
   return (neuron0x30d4c70()*-0.0997574);
}

double NNfunction_sb_dRsR::synapse0x30dd480() {
   return (neuron0x30d4fb0()*0.317065);
}

double NNfunction_sb_dRsR::synapse0x30dd4c0() {
   return (neuron0x30d52f0()*0.643535);
}

double NNfunction_sb_dRsR::synapse0x30dd500() {
   return (neuron0x30d5630()*-0.802922);
}

double NNfunction_sb_dRsR::synapse0x30dcf90() {
   return (neuron0x30d5970()*0.0445955);
}

double NNfunction_sb_dRsR::synapse0x30dcfd0() {
   return (neuron0x30d5ed0()*1.19466);
}

double NNfunction_sb_dRsR::synapse0x30dd650() {
   return (neuron0x30d60f0()*0.0532325);
}

double NNfunction_sb_dRsR::synapse0x30dd690() {
   return (neuron0x30d6430()*0.222509);
}

double NNfunction_sb_dRsR::synapse0x30dd6d0() {
   return (neuron0x30d6770()*0.149097);
}

double NNfunction_sb_dRsR::synapse0x30dd710() {
   return (neuron0x30d6ab0()*0.27329);
}

double NNfunction_sb_dRsR::synapse0x30dd750() {
   return (neuron0x30d6df0()*0.223878);
}

double NNfunction_sb_dRsR::synapse0x30dd790() {
   return (neuron0x30d7130()*-0.337513);
}

double NNfunction_sb_dRsR::synapse0x30ddb10() {
   return (neuron0x30d2570()*0.165995);
}

double NNfunction_sb_dRsR::synapse0x30ddb50() {
   return (neuron0x30d28b0()*-0.36569);
}

double NNfunction_sb_dRsR::synapse0x30ddb90() {
   return (neuron0x30d2bf0()*-0.707358);
}

double NNfunction_sb_dRsR::synapse0x30ddbd0() {
   return (neuron0x30d2f30()*0.819751);
}

double NNfunction_sb_dRsR::synapse0x30ddc10() {
   return (neuron0x30d3270()*-0.0799421);
}

double NNfunction_sb_dRsR::synapse0x30ddc50() {
   return (neuron0x30d35b0()*-0.0212394);
}

double NNfunction_sb_dRsR::synapse0x30ddc90() {
   return (neuron0x30d38f0()*-0.233146);
}

double NNfunction_sb_dRsR::synapse0x30ddcd0() {
   return (neuron0x30d3c30()*0.210468);
}

double NNfunction_sb_dRsR::synapse0x30ddd10() {
   return (neuron0x30d3f70()*-0.436059);
}

double NNfunction_sb_dRsR::synapse0x30ddd50() {
   return (neuron0x30d42b0()*-0.386438);
}

double NNfunction_sb_dRsR::synapse0x30ddd90() {
   return (neuron0x30d45f0()*-0.0559067);
}

double NNfunction_sb_dRsR::synapse0x30dddd0() {
   return (neuron0x30d4930()*0.203722);
}

double NNfunction_sb_dRsR::synapse0x30dde10() {
   return (neuron0x30d4c70()*-0.0639549);
}

double NNfunction_sb_dRsR::synapse0x30dde50() {
   return (neuron0x30d4fb0()*-0.335633);
}

double NNfunction_sb_dRsR::synapse0x30dde90() {
   return (neuron0x30d52f0()*0.469315);
}

double NNfunction_sb_dRsR::synapse0x30dded0() {
   return (neuron0x30d5630()*-0.753899);
}

double NNfunction_sb_dRsR::synapse0x30dd960() {
   return (neuron0x30d5970()*0.605956);
}

double NNfunction_sb_dRsR::synapse0x30dd9a0() {
   return (neuron0x30d5ed0()*-0.277955);
}

double NNfunction_sb_dRsR::synapse0x30da730() {
   return (neuron0x30d60f0()*-0.155748);
}

double NNfunction_sb_dRsR::synapse0x30da770() {
   return (neuron0x30d6430()*0.98266);
}

double NNfunction_sb_dRsR::synapse0x30da7b0() {
   return (neuron0x30d6770()*0.0268484);
}

double NNfunction_sb_dRsR::synapse0x30da7f0() {
   return (neuron0x30d6ab0()*0.233235);
}

double NNfunction_sb_dRsR::synapse0x30da830() {
   return (neuron0x30d6df0()*0.592188);
}

double NNfunction_sb_dRsR::synapse0x30da870() {
   return (neuron0x30d7130()*-0.170781);
}

double NNfunction_sb_dRsR::synapse0x30dabf0() {
   return (neuron0x30d2570()*-0.144995);
}

double NNfunction_sb_dRsR::synapse0x30dac30() {
   return (neuron0x30d28b0()*0.0246951);
}

double NNfunction_sb_dRsR::synapse0x30dac70() {
   return (neuron0x30d2bf0()*-0.130977);
}

double NNfunction_sb_dRsR::synapse0x30dacb0() {
   return (neuron0x30d2f30()*-1.41577);
}

double NNfunction_sb_dRsR::synapse0x30dacf0() {
   return (neuron0x30d3270()*-0.0858731);
}

double NNfunction_sb_dRsR::synapse0x30dad30() {
   return (neuron0x30d35b0()*0.00570167);
}

double NNfunction_sb_dRsR::synapse0x30dad70() {
   return (neuron0x30d38f0()*0.0398743);
}

double NNfunction_sb_dRsR::synapse0x30dadb0() {
   return (neuron0x30d3c30()*-0.0524552);
}

double NNfunction_sb_dRsR::synapse0x30dadf0() {
   return (neuron0x30d3f70()*-0.0593784);
}

double NNfunction_sb_dRsR::synapse0x30dae30() {
   return (neuron0x30d42b0()*0.0186242);
}

double NNfunction_sb_dRsR::synapse0x30dae70() {
   return (neuron0x30d45f0()*0.114109);
}

double NNfunction_sb_dRsR::synapse0x30daeb0() {
   return (neuron0x30d4930()*-0.0257205);
}

double NNfunction_sb_dRsR::synapse0x30daef0() {
   return (neuron0x30d4c70()*-0.509341);
}

double NNfunction_sb_dRsR::synapse0x30df030() {
   return (neuron0x30d4fb0()*0.229591);
}

double NNfunction_sb_dRsR::synapse0x30df070() {
   return (neuron0x30d52f0()*-0.043653);
}

double NNfunction_sb_dRsR::synapse0x30df0b0() {
   return (neuron0x30d5630()*-0.134871);
}

double NNfunction_sb_dRsR::synapse0x30daa40() {
   return (neuron0x30d5970()*0.272494);
}

double NNfunction_sb_dRsR::synapse0x30daa80() {
   return (neuron0x30d5ed0()*-0.0580297);
}

double NNfunction_sb_dRsR::synapse0x30df200() {
   return (neuron0x30d60f0()*-0.0532619);
}

double NNfunction_sb_dRsR::synapse0x30df240() {
   return (neuron0x30d6430()*0.144791);
}

double NNfunction_sb_dRsR::synapse0x30df280() {
   return (neuron0x30d6770()*-0.0570521);
}

double NNfunction_sb_dRsR::synapse0x30df2c0() {
   return (neuron0x30d6ab0()*0.093459);
}

double NNfunction_sb_dRsR::synapse0x30df300() {
   return (neuron0x30d6df0()*0.115325);
}

double NNfunction_sb_dRsR::synapse0x30df340() {
   return (neuron0x30d7130()*0.107793);
}

double NNfunction_sb_dRsR::synapse0x30df6c0() {
   return (neuron0x30d2570()*0.633334);
}

double NNfunction_sb_dRsR::synapse0x30df700() {
   return (neuron0x30d28b0()*0.775957);
}

double NNfunction_sb_dRsR::synapse0x30df740() {
   return (neuron0x30d2bf0()*0.431391);
}

double NNfunction_sb_dRsR::synapse0x30df780() {
   return (neuron0x30d2f30()*-0.659829);
}

double NNfunction_sb_dRsR::synapse0x30df7c0() {
   return (neuron0x30d3270()*0.10308);
}

double NNfunction_sb_dRsR::synapse0x30df800() {
   return (neuron0x30d35b0()*-0.71094);
}

double NNfunction_sb_dRsR::synapse0x30df840() {
   return (neuron0x30d38f0()*1.06894);
}

double NNfunction_sb_dRsR::synapse0x30df880() {
   return (neuron0x30d3c30()*0.0884537);
}

double NNfunction_sb_dRsR::synapse0x30df8c0() {
   return (neuron0x30d3f70()*-0.0157385);
}

double NNfunction_sb_dRsR::synapse0x30df900() {
   return (neuron0x30d42b0()*-0.821371);
}

double NNfunction_sb_dRsR::synapse0x30df940() {
   return (neuron0x30d45f0()*0.464219);
}

double NNfunction_sb_dRsR::synapse0x30df980() {
   return (neuron0x30d4930()*-0.269807);
}

double NNfunction_sb_dRsR::synapse0x30df9c0() {
   return (neuron0x30d4c70()*0.00801141);
}

double NNfunction_sb_dRsR::synapse0x30dfa00() {
   return (neuron0x30d4fb0()*-0.317101);
}

double NNfunction_sb_dRsR::synapse0x30dfa40() {
   return (neuron0x30d52f0()*-0.0309511);
}

double NNfunction_sb_dRsR::synapse0x30dfa80() {
   return (neuron0x30d5630()*-0.567465);
}

double NNfunction_sb_dRsR::synapse0x30df510() {
   return (neuron0x30d5970()*-0.163051);
}

double NNfunction_sb_dRsR::synapse0x30df550() {
   return (neuron0x30d5ed0()*-0.538821);
}

double NNfunction_sb_dRsR::synapse0x30dfbd0() {
   return (neuron0x30d60f0()*-0.574341);
}

double NNfunction_sb_dRsR::synapse0x30dfc10() {
   return (neuron0x30d6430()*-0.0567114);
}

double NNfunction_sb_dRsR::synapse0x30dfc50() {
   return (neuron0x30d6770()*0.44911);
}

double NNfunction_sb_dRsR::synapse0x30dfc90() {
   return (neuron0x30d6ab0()*0.248065);
}

double NNfunction_sb_dRsR::synapse0x30dfcd0() {
   return (neuron0x30d6df0()*-0.241649);
}

double NNfunction_sb_dRsR::synapse0x30dfd10() {
   return (neuron0x30d7130()*-0.938427);
}

double NNfunction_sb_dRsR::synapse0x30e0090() {
   return (neuron0x30d2570()*-0.00610275);
}

double NNfunction_sb_dRsR::synapse0x30e00d0() {
   return (neuron0x30d28b0()*-0.0272104);
}

double NNfunction_sb_dRsR::synapse0x30e0110() {
   return (neuron0x30d2bf0()*-0.0148947);
}

double NNfunction_sb_dRsR::synapse0x30e0150() {
   return (neuron0x30d2f30()*0.557513);
}

double NNfunction_sb_dRsR::synapse0x30e0190() {
   return (neuron0x30d3270()*-0.01315);
}

double NNfunction_sb_dRsR::synapse0x30e01d0() {
   return (neuron0x30d35b0()*0.00836407);
}

double NNfunction_sb_dRsR::synapse0x30e0210() {
   return (neuron0x30d38f0()*-0.0186305);
}

double NNfunction_sb_dRsR::synapse0x30e0250() {
   return (neuron0x30d3c30()*-0.0241666);
}

double NNfunction_sb_dRsR::synapse0x30e0290() {
   return (neuron0x30d3f70()*0.0181713);
}

double NNfunction_sb_dRsR::synapse0x30e02d0() {
   return (neuron0x30d42b0()*0.0124701);
}

double NNfunction_sb_dRsR::synapse0x30e0310() {
   return (neuron0x30d45f0()*0.0186195);
}

double NNfunction_sb_dRsR::synapse0x30e0350() {
   return (neuron0x30d4930()*-0.0105485);
}

double NNfunction_sb_dRsR::synapse0x30e0390() {
   return (neuron0x30d4c70()*-0.0520206);
}

double NNfunction_sb_dRsR::synapse0x30e03d0() {
   return (neuron0x30d4fb0()*0.0091159);
}

double NNfunction_sb_dRsR::synapse0x30e0410() {
   return (neuron0x30d52f0()*-0.0780761);
}

double NNfunction_sb_dRsR::synapse0x30e0450() {
   return (neuron0x30d5630()*-0.030588);
}

double NNfunction_sb_dRsR::synapse0x30dfee0() {
   return (neuron0x30d5970()*0.0163539);
}

double NNfunction_sb_dRsR::synapse0x30dff20() {
   return (neuron0x30d5ed0()*-0.607957);
}

double NNfunction_sb_dRsR::synapse0x30e05a0() {
   return (neuron0x30d60f0()*-0.710888);
}

double NNfunction_sb_dRsR::synapse0x30e05e0() {
   return (neuron0x30d6430()*-0.00229178);
}

double NNfunction_sb_dRsR::synapse0x30e0620() {
   return (neuron0x30d6770()*-0.00481408);
}

double NNfunction_sb_dRsR::synapse0x30e0660() {
   return (neuron0x30d6ab0()*0.017372);
}

double NNfunction_sb_dRsR::synapse0x30e06a0() {
   return (neuron0x30d6df0()*0.0163337);
}

double NNfunction_sb_dRsR::synapse0x30e06e0() {
   return (neuron0x30d7130()*-0.000905024);
}

double NNfunction_sb_dRsR::synapse0x30e0a60() {
   return (neuron0x30d2570()*-0.0613996);
}

double NNfunction_sb_dRsR::synapse0x30e0aa0() {
   return (neuron0x30d28b0()*-0.335626);
}

double NNfunction_sb_dRsR::synapse0x30e0ae0() {
   return (neuron0x30d2bf0()*-0.0162371);
}

double NNfunction_sb_dRsR::synapse0x30e0b20() {
   return (neuron0x30d2f30()*-0.606497);
}

double NNfunction_sb_dRsR::synapse0x30e0b60() {
   return (neuron0x30d3270()*-0.0175257);
}

double NNfunction_sb_dRsR::synapse0x30e0ba0() {
   return (neuron0x30d35b0()*-0.477199);
}

double NNfunction_sb_dRsR::synapse0x30e0be0() {
   return (neuron0x30d38f0()*-0.400278);
}

double NNfunction_sb_dRsR::synapse0x30e0c20() {
   return (neuron0x30d3c30()*-0.336676);
}

double NNfunction_sb_dRsR::synapse0x30e0c60() {
   return (neuron0x30d3f70()*0.177694);
}

double NNfunction_sb_dRsR::synapse0x30e0ca0() {
   return (neuron0x30d42b0()*-0.104299);
}

double NNfunction_sb_dRsR::synapse0x30e0ce0() {
   return (neuron0x30d45f0()*-0.626611);
}

double NNfunction_sb_dRsR::synapse0x30e0d20() {
   return (neuron0x30d4930()*0.191617);
}

double NNfunction_sb_dRsR::synapse0x30e0d60() {
   return (neuron0x30d4c70()*0.260351);
}

double NNfunction_sb_dRsR::synapse0x30e0da0() {
   return (neuron0x30d4fb0()*-0.398687);
}

double NNfunction_sb_dRsR::synapse0x30e0de0() {
   return (neuron0x30d52f0()*0.325146);
}

double NNfunction_sb_dRsR::synapse0x30e0e20() {
   return (neuron0x30d5630()*-0.603152);
}

double NNfunction_sb_dRsR::synapse0x30e08b0() {
   return (neuron0x30d5970()*-0.176303);
}

double NNfunction_sb_dRsR::synapse0x30e08f0() {
   return (neuron0x30d5ed0()*-0.264979);
}

double NNfunction_sb_dRsR::synapse0x30e0f70() {
   return (neuron0x30d60f0()*0.175907);
}

double NNfunction_sb_dRsR::synapse0x30e0fb0() {
   return (neuron0x30d6430()*0.166813);
}

double NNfunction_sb_dRsR::synapse0x30e0ff0() {
   return (neuron0x30d6770()*-0.269434);
}

double NNfunction_sb_dRsR::synapse0x30e1030() {
   return (neuron0x30d6ab0()*0.142397);
}

double NNfunction_sb_dRsR::synapse0x30e1070() {
   return (neuron0x30d6df0()*-0.475597);
}

double NNfunction_sb_dRsR::synapse0x30e10b0() {
   return (neuron0x30d7130()*0.299263);
}

double NNfunction_sb_dRsR::synapse0x30e1430() {
   return (neuron0x30d2570()*-0.128756);
}

double NNfunction_sb_dRsR::synapse0x30d2790() {
   return (neuron0x30d28b0()*0.187931);
}

double NNfunction_sb_dRsR::synapse0x30d27d0() {
   return (neuron0x30d2bf0()*0.480219);
}

double NNfunction_sb_dRsR::synapse0x30d2ad0() {
   return (neuron0x30d2f30()*0.597304);
}

double NNfunction_sb_dRsR::synapse0x30d2b10() {
   return (neuron0x30d3270()*1.43209);
}

double NNfunction_sb_dRsR::synapse0x30d2e10() {
   return (neuron0x30d35b0()*-0.393698);
}

double NNfunction_sb_dRsR::synapse0x30d2e50() {
   return (neuron0x30d38f0()*0.230669);
}

double NNfunction_sb_dRsR::synapse0x30d3150() {
   return (neuron0x30d3c30()*-0.598333);
}

double NNfunction_sb_dRsR::synapse0x30d3190() {
   return (neuron0x30d3f70()*0.307739);
}

double NNfunction_sb_dRsR::synapse0x30d3490() {
   return (neuron0x30d42b0()*-0.369214);
}

double NNfunction_sb_dRsR::synapse0x30d34d0() {
   return (neuron0x30d45f0()*1.27942);
}

double NNfunction_sb_dRsR::synapse0x30d37d0() {
   return (neuron0x30d4930()*-0.241282);
}

double NNfunction_sb_dRsR::synapse0x30d3810() {
   return (neuron0x30d4c70()*0.605473);
}

double NNfunction_sb_dRsR::synapse0x30d3b10() {
   return (neuron0x30d4fb0()*-0.101935);
}

double NNfunction_sb_dRsR::synapse0x30d3b50() {
   return (neuron0x30d52f0()*0.00913619);
}

double NNfunction_sb_dRsR::synapse0x30d3e50() {
   return (neuron0x30d5630()*0.101438);
}

double NNfunction_sb_dRsR::synapse0x30d3e90() {
   return (neuron0x30d5970()*-0.48555);
}

double NNfunction_sb_dRsR::synapse0x30d4190() {
   return (neuron0x30d5ed0()*0.695013);
}

double NNfunction_sb_dRsR::synapse0x30d41d0() {
   return (neuron0x30d60f0()*-0.0490997);
}

double NNfunction_sb_dRsR::synapse0x30d44d0() {
   return (neuron0x30d6430()*-0.64348);
}

double NNfunction_sb_dRsR::synapse0x30d4510() {
   return (neuron0x30d6770()*0.806912);
}

double NNfunction_sb_dRsR::synapse0x30d4810() {
   return (neuron0x30d6ab0()*-0.458511);
}

double NNfunction_sb_dRsR::synapse0x30d4850() {
   return (neuron0x30d6df0()*-0.102914);
}

double NNfunction_sb_dRsR::synapse0x30d4b50() {
   return (neuron0x30d7130()*0.0129763);
}

double NNfunction_sb_dRsR::synapse0x30d4b90() {
   return (neuron0x30d2570()*0.0105433);
}

double NNfunction_sb_dRsR::synapse0x30d5850() {
   return (neuron0x30d28b0()*0.0137479);
}

double NNfunction_sb_dRsR::synapse0x30d5890() {
   return (neuron0x30d2bf0()*0.0166497);
}

double NNfunction_sb_dRsR::synapse0x30e1280() {
   return (neuron0x30d2f30()*-0.180277);
}

double NNfunction_sb_dRsR::synapse0x30e12c0() {
   return (neuron0x30d3270()*-0.0100007);
}

double NNfunction_sb_dRsR::synapse0x30d5b90() {
   return (neuron0x30d35b0()*-0.012486);
}

double NNfunction_sb_dRsR::synapse0x30d5bd0() {
   return (neuron0x30d38f0()*-0.00502533);
}

double NNfunction_sb_dRsR::synapse0x2e83b60() {
   return (neuron0x30d3c30()*0.00283756);
}

double NNfunction_sb_dRsR::synapse0x2e83ba0() {
   return (neuron0x30d3f70()*0.0103889);
}

double NNfunction_sb_dRsR::synapse0x30d6310() {
   return (neuron0x30d42b0()*0.0226917);
}

double NNfunction_sb_dRsR::synapse0x30d6350() {
   return (neuron0x30d45f0()*0.00029083);
}

double NNfunction_sb_dRsR::synapse0x30d6650() {
   return (neuron0x30d4930()*-0.0100438);
}

double NNfunction_sb_dRsR::synapse0x30d6690() {
   return (neuron0x30d4c70()*0.0140825);
}

double NNfunction_sb_dRsR::synapse0x30d6990() {
   return (neuron0x30d4fb0()*0.00479188);
}

double NNfunction_sb_dRsR::synapse0x30d69d0() {
   return (neuron0x30d52f0()*0.0177596);
}

double NNfunction_sb_dRsR::synapse0x30d6cd0() {
   return (neuron0x30d5630()*-0.00826966);
}

double NNfunction_sb_dRsR::synapse0x30d6d10() {
   return (neuron0x30d5970()*-0.00905814);
}

double NNfunction_sb_dRsR::synapse0x30d7010() {
   return (neuron0x30d5ed0()*-0.604144);
}

double NNfunction_sb_dRsR::synapse0x30d7050() {
   return (neuron0x30d60f0()*0.759348);
}

double NNfunction_sb_dRsR::synapse0x30d7350() {
   return (neuron0x30d6430()*0.00970998);
}

double NNfunction_sb_dRsR::synapse0x30d7390() {
   return (neuron0x30d6770()*0.00545616);
}

double NNfunction_sb_dRsR::synapse0x30d4e90() {
   return (neuron0x30d6ab0()*-0.00068653);
}

double NNfunction_sb_dRsR::synapse0x30d4ed0() {
   return (neuron0x30d6df0()*-0.00186379);
}

double NNfunction_sb_dRsR::synapse0x30e31a0() {
   return (neuron0x30d7130()*0.00790472);
}

double NNfunction_sb_dRsR::synapse0x30e3520() {
   return (neuron0x30d2570()*-0.437396);
}

double NNfunction_sb_dRsR::synapse0x30e3560() {
   return (neuron0x30d28b0()*0.25976);
}

double NNfunction_sb_dRsR::synapse0x30e35a0() {
   return (neuron0x30d2bf0()*-1.16845);
}

double NNfunction_sb_dRsR::synapse0x30e35e0() {
   return (neuron0x30d2f30()*-0.749942);
}

double NNfunction_sb_dRsR::synapse0x30e3620() {
   return (neuron0x30d3270()*-0.165747);
}

double NNfunction_sb_dRsR::synapse0x30e3660() {
   return (neuron0x30d35b0()*-0.235255);
}

double NNfunction_sb_dRsR::synapse0x30e36a0() {
   return (neuron0x30d38f0()*0.247094);
}

double NNfunction_sb_dRsR::synapse0x30e36e0() {
   return (neuron0x30d3c30()*0.0914397);
}

double NNfunction_sb_dRsR::synapse0x30e3720() {
   return (neuron0x30d3f70()*0.0445806);
}

double NNfunction_sb_dRsR::synapse0x30e3760() {
   return (neuron0x30d42b0()*0.727814);
}

double NNfunction_sb_dRsR::synapse0x30e37a0() {
   return (neuron0x30d45f0()*-0.222658);
}

double NNfunction_sb_dRsR::synapse0x30e37e0() {
   return (neuron0x30d4930()*0.918576);
}

double NNfunction_sb_dRsR::synapse0x30e3820() {
   return (neuron0x30d4c70()*-0.918452);
}

double NNfunction_sb_dRsR::synapse0x30e3860() {
   return (neuron0x30d4fb0()*-0.212434);
}

double NNfunction_sb_dRsR::synapse0x30e38a0() {
   return (neuron0x30d52f0()*-0.751884);
}

double NNfunction_sb_dRsR::synapse0x30e38e0() {
   return (neuron0x30d5630()*-0.837781);
}

double NNfunction_sb_dRsR::synapse0x30e3370() {
   return (neuron0x30d5970()*-0.43719);
}

double NNfunction_sb_dRsR::synapse0x30e33b0() {
   return (neuron0x30d5ed0()*-0.123706);
}

double NNfunction_sb_dRsR::synapse0x30e3a30() {
   return (neuron0x30d60f0()*0.53597);
}

double NNfunction_sb_dRsR::synapse0x30e3a70() {
   return (neuron0x30d6430()*0.75125);
}

double NNfunction_sb_dRsR::synapse0x30e3ab0() {
   return (neuron0x30d6770()*0.575882);
}

double NNfunction_sb_dRsR::synapse0x30e3af0() {
   return (neuron0x30d6ab0()*1.05557);
}

double NNfunction_sb_dRsR::synapse0x30e3b30() {
   return (neuron0x30d6df0()*-1.04285);
}

double NNfunction_sb_dRsR::synapse0x30e3b70() {
   return (neuron0x30d7130()*0.399995);
}

double NNfunction_sb_dRsR::synapse0x30e3ef0() {
   return (neuron0x30d2570()*-0.242146);
}

double NNfunction_sb_dRsR::synapse0x30e3f30() {
   return (neuron0x30d28b0()*-0.162237);
}

double NNfunction_sb_dRsR::synapse0x30e3f70() {
   return (neuron0x30d2bf0()*0.566135);
}

double NNfunction_sb_dRsR::synapse0x30e3fb0() {
   return (neuron0x30d2f30()*0.389771);
}

double NNfunction_sb_dRsR::synapse0x30e3ff0() {
   return (neuron0x30d3270()*-1.72509);
}

double NNfunction_sb_dRsR::synapse0x30e4030() {
   return (neuron0x30d35b0()*0.831886);
}

double NNfunction_sb_dRsR::synapse0x30e4070() {
   return (neuron0x30d38f0()*0.288037);
}

double NNfunction_sb_dRsR::synapse0x30e40b0() {
   return (neuron0x30d3c30()*-1.01108);
}

double NNfunction_sb_dRsR::synapse0x30e40f0() {
   return (neuron0x30d3f70()*0.531751);
}

double NNfunction_sb_dRsR::synapse0x30e4130() {
   return (neuron0x30d42b0()*-0.690149);
}

double NNfunction_sb_dRsR::synapse0x30e4170() {
   return (neuron0x30d45f0()*-0.0502948);
}

double NNfunction_sb_dRsR::synapse0x30e41b0() {
   return (neuron0x30d4930()*-0.420448);
}

double NNfunction_sb_dRsR::synapse0x30e41f0() {
   return (neuron0x30d4c70()*0.814287);
}

double NNfunction_sb_dRsR::synapse0x30e4230() {
   return (neuron0x30d4fb0()*0.550084);
}

double NNfunction_sb_dRsR::synapse0x30e4270() {
   return (neuron0x30d52f0()*-0.122539);
}

double NNfunction_sb_dRsR::synapse0x30e42b0() {
   return (neuron0x30d5630()*-0.610795);
}

double NNfunction_sb_dRsR::synapse0x30e3d40() {
   return (neuron0x30d5970()*0.478319);
}

double NNfunction_sb_dRsR::synapse0x30e3d80() {
   return (neuron0x30d5ed0()*-1.1765);
}

double NNfunction_sb_dRsR::synapse0x30e4400() {
   return (neuron0x30d60f0()*0.186427);
}

double NNfunction_sb_dRsR::synapse0x30e4440() {
   return (neuron0x30d6430()*-0.960546);
}

double NNfunction_sb_dRsR::synapse0x30e4480() {
   return (neuron0x30d6770()*-0.272068);
}

double NNfunction_sb_dRsR::synapse0x30e44c0() {
   return (neuron0x30d6ab0()*-0.474037);
}

double NNfunction_sb_dRsR::synapse0x30e4500() {
   return (neuron0x30d6df0()*0.103909);
}

double NNfunction_sb_dRsR::synapse0x30e4540() {
   return (neuron0x30d7130()*-0.0310409);
}

double NNfunction_sb_dRsR::synapse0x30e48c0() {
   return (neuron0x30d2570()*-0.132199);
}

double NNfunction_sb_dRsR::synapse0x30e4900() {
   return (neuron0x30d28b0()*-0.163794);
}

double NNfunction_sb_dRsR::synapse0x30e4940() {
   return (neuron0x30d2bf0()*0.711106);
}

double NNfunction_sb_dRsR::synapse0x30e4980() {
   return (neuron0x30d2f30()*-0.314467);
}

double NNfunction_sb_dRsR::synapse0x30e49c0() {
   return (neuron0x30d3270()*-0.13433);
}

double NNfunction_sb_dRsR::synapse0x30e4a00() {
   return (neuron0x30d35b0()*1.05442);
}

double NNfunction_sb_dRsR::synapse0x30e4a40() {
   return (neuron0x30d38f0()*-0.375043);
}

double NNfunction_sb_dRsR::synapse0x30e4a80() {
   return (neuron0x30d3c30()*-0.865748);
}

double NNfunction_sb_dRsR::synapse0x30e4ac0() {
   return (neuron0x30d3f70()*0.47122);
}

double NNfunction_sb_dRsR::synapse0x30e4b00() {
   return (neuron0x30d42b0()*-1.71262);
}

double NNfunction_sb_dRsR::synapse0x30e4b40() {
   return (neuron0x30d45f0()*0.235932);
}

double NNfunction_sb_dRsR::synapse0x30e4b80() {
   return (neuron0x30d4930()*-0.170525);
}

double NNfunction_sb_dRsR::synapse0x30e4bc0() {
   return (neuron0x30d4c70()*0.148547);
}

double NNfunction_sb_dRsR::synapse0x30e4c00() {
   return (neuron0x30d4fb0()*0.680227);
}

double NNfunction_sb_dRsR::synapse0x30e4c40() {
   return (neuron0x30d52f0()*0.0196586);
}

double NNfunction_sb_dRsR::synapse0x30e4c80() {
   return (neuron0x30d5630()*0.044025);
}

double NNfunction_sb_dRsR::synapse0x30e4710() {
   return (neuron0x30d5970()*-0.12758);
}

double NNfunction_sb_dRsR::synapse0x30e4750() {
   return (neuron0x30d5ed0()*0.465559);
}

double NNfunction_sb_dRsR::synapse0x30e4dd0() {
   return (neuron0x30d60f0()*0.64167);
}

double NNfunction_sb_dRsR::synapse0x30e4e10() {
   return (neuron0x30d6430()*0.384592);
}

double NNfunction_sb_dRsR::synapse0x30e4e50() {
   return (neuron0x30d6770()*0.300303);
}

double NNfunction_sb_dRsR::synapse0x30e4e90() {
   return (neuron0x30d6ab0()*0.0721929);
}

double NNfunction_sb_dRsR::synapse0x30e4ed0() {
   return (neuron0x30d6df0()*0.224947);
}

double NNfunction_sb_dRsR::synapse0x30e4f10() {
   return (neuron0x30d7130()*0.129039);
}

double NNfunction_sb_dRsR::synapse0x30e5290() {
   return (neuron0x30d2570()*-0.0520221);
}

double NNfunction_sb_dRsR::synapse0x30e52d0() {
   return (neuron0x30d28b0()*-0.668234);
}

double NNfunction_sb_dRsR::synapse0x30e5310() {
   return (neuron0x30d2bf0()*0.127365);
}

double NNfunction_sb_dRsR::synapse0x30e5350() {
   return (neuron0x30d2f30()*-0.75772);
}

double NNfunction_sb_dRsR::synapse0x30e5390() {
   return (neuron0x30d3270()*0.68515);
}

double NNfunction_sb_dRsR::synapse0x30e53d0() {
   return (neuron0x30d35b0()*-0.211841);
}

double NNfunction_sb_dRsR::synapse0x30e5410() {
   return (neuron0x30d38f0()*0.563441);
}

double NNfunction_sb_dRsR::synapse0x30e5450() {
   return (neuron0x30d3c30()*-0.621733);
}

double NNfunction_sb_dRsR::synapse0x30e5490() {
   return (neuron0x30d3f70()*0.013863);
}

double NNfunction_sb_dRsR::synapse0x30e54d0() {
   return (neuron0x30d42b0()*-0.71411);
}

double NNfunction_sb_dRsR::synapse0x30e5510() {
   return (neuron0x30d45f0()*0.276201);
}

double NNfunction_sb_dRsR::synapse0x30e5550() {
   return (neuron0x30d4930()*-0.131943);
}

double NNfunction_sb_dRsR::synapse0x30e5590() {
   return (neuron0x30d4c70()*-0.541233);
}

double NNfunction_sb_dRsR::synapse0x30e55d0() {
   return (neuron0x30d4fb0()*-0.224018);
}

double NNfunction_sb_dRsR::synapse0x30e5610() {
   return (neuron0x30d52f0()*0.164248);
}

double NNfunction_sb_dRsR::synapse0x30e5650() {
   return (neuron0x30d5630()*-0.178808);
}

double NNfunction_sb_dRsR::synapse0x30e50e0() {
   return (neuron0x30d5970()*-0.487924);
}

double NNfunction_sb_dRsR::synapse0x30e5120() {
   return (neuron0x30d5ed0()*-0.323036);
}

double NNfunction_sb_dRsR::synapse0x30e57a0() {
   return (neuron0x30d60f0()*-0.212993);
}

double NNfunction_sb_dRsR::synapse0x30e57e0() {
   return (neuron0x30d6430()*-0.173914);
}

double NNfunction_sb_dRsR::synapse0x30e5820() {
   return (neuron0x30d6770()*0.320107);
}

double NNfunction_sb_dRsR::synapse0x30e5860() {
   return (neuron0x30d6ab0()*-0.329265);
}

double NNfunction_sb_dRsR::synapse0x30e58a0() {
   return (neuron0x30d6df0()*0.338864);
}

double NNfunction_sb_dRsR::synapse0x30e58e0() {
   return (neuron0x30d7130()*0.103703);
}

double NNfunction_sb_dRsR::synapse0x30e5c60() {
   return (neuron0x30d2570()*0.634709);
}

double NNfunction_sb_dRsR::synapse0x30e5ca0() {
   return (neuron0x30d28b0()*-0.113912);
}

double NNfunction_sb_dRsR::synapse0x30e5ce0() {
   return (neuron0x30d2bf0()*-0.155801);
}

double NNfunction_sb_dRsR::synapse0x30e5d20() {
   return (neuron0x30d2f30()*-0.689579);
}

double NNfunction_sb_dRsR::synapse0x30e5d60() {
   return (neuron0x30d3270()*-0.496761);
}

double NNfunction_sb_dRsR::synapse0x30e5da0() {
   return (neuron0x30d35b0()*-0.34075);
}

double NNfunction_sb_dRsR::synapse0x30e5de0() {
   return (neuron0x30d38f0()*0.245655);
}

double NNfunction_sb_dRsR::synapse0x30e5e20() {
   return (neuron0x30d3c30()*0.5104);
}

double NNfunction_sb_dRsR::synapse0x30e5e60() {
   return (neuron0x30d3f70()*-0.00779228);
}

double NNfunction_sb_dRsR::synapse0x30de020() {
   return (neuron0x30d42b0()*0.44453);
}

double NNfunction_sb_dRsR::synapse0x30de060() {
   return (neuron0x30d45f0()*0.177758);
}

double NNfunction_sb_dRsR::synapse0x30de0a0() {
   return (neuron0x30d4930()*-0.567997);
}

double NNfunction_sb_dRsR::synapse0x30de0e0() {
   return (neuron0x30d4c70()*-0.178306);
}

double NNfunction_sb_dRsR::synapse0x30de120() {
   return (neuron0x30d4fb0()*0.0538003);
}

double NNfunction_sb_dRsR::synapse0x30de160() {
   return (neuron0x30d52f0()*0.981672);
}

double NNfunction_sb_dRsR::synapse0x30de1a0() {
   return (neuron0x30d5630()*-0.0563877);
}

double NNfunction_sb_dRsR::synapse0x30e5ab0() {
   return (neuron0x30d5970()*0.378971);
}

double NNfunction_sb_dRsR::synapse0x30e5af0() {
   return (neuron0x30d5ed0()*0.607959);
}

double NNfunction_sb_dRsR::synapse0x30de2f0() {
   return (neuron0x30d60f0()*0.666577);
}

double NNfunction_sb_dRsR::synapse0x30de330() {
   return (neuron0x30d6430()*0.712234);
}

double NNfunction_sb_dRsR::synapse0x30de370() {
   return (neuron0x30d6770()*0.223677);
}

double NNfunction_sb_dRsR::synapse0x30de3b0() {
   return (neuron0x30d6ab0()*-0.24807);
}

double NNfunction_sb_dRsR::synapse0x30de3f0() {
   return (neuron0x30d6df0()*-0.109817);
}

double NNfunction_sb_dRsR::synapse0x30de430() {
   return (neuron0x30d7130()*0.307598);
}

double NNfunction_sb_dRsR::synapse0x30de7b0() {
   return (neuron0x30d2570()*-0.250661);
}

double NNfunction_sb_dRsR::synapse0x30de7f0() {
   return (neuron0x30d28b0()*-0.0590869);
}

double NNfunction_sb_dRsR::synapse0x30de830() {
   return (neuron0x30d2bf0()*-0.347603);
}

double NNfunction_sb_dRsR::synapse0x30de870() {
   return (neuron0x30d2f30()*-1.15264);
}

double NNfunction_sb_dRsR::synapse0x30de8b0() {
   return (neuron0x30d3270()*0.167357);
}

double NNfunction_sb_dRsR::synapse0x30de8f0() {
   return (neuron0x30d35b0()*-0.246361);
}

double NNfunction_sb_dRsR::synapse0x30de930() {
   return (neuron0x30d38f0()*0.264804);
}

double NNfunction_sb_dRsR::synapse0x30de970() {
   return (neuron0x30d3c30()*0.141528);
}

double NNfunction_sb_dRsR::synapse0x30de9b0() {
   return (neuron0x30d3f70()*0.361507);
}

double NNfunction_sb_dRsR::synapse0x30de9f0() {
   return (neuron0x30d42b0()*0.959945);
}

double NNfunction_sb_dRsR::synapse0x30dea30() {
   return (neuron0x30d45f0()*-0.282882);
}

double NNfunction_sb_dRsR::synapse0x30dea70() {
   return (neuron0x30d4930()*-0.18981);
}

double NNfunction_sb_dRsR::synapse0x30deab0() {
   return (neuron0x30d4c70()*0.147695);
}

double NNfunction_sb_dRsR::synapse0x30deaf0() {
   return (neuron0x30d4fb0()*-0.0902565);
}

double NNfunction_sb_dRsR::synapse0x30deb30() {
   return (neuron0x30d52f0()*-0.343979);
}

double NNfunction_sb_dRsR::synapse0x30deb70() {
   return (neuron0x30d5630()*-0.363524);
}

double NNfunction_sb_dRsR::synapse0x30de600() {
   return (neuron0x30d5970()*-0.601278);
}

double NNfunction_sb_dRsR::synapse0x30de640() {
   return (neuron0x30d5ed0()*-0.443249);
}

double NNfunction_sb_dRsR::synapse0x30decc0() {
   return (neuron0x30d60f0()*-0.075788);
}

double NNfunction_sb_dRsR::synapse0x30ded00() {
   return (neuron0x30d6430()*0.558795);
}

double NNfunction_sb_dRsR::synapse0x30ded40() {
   return (neuron0x30d6770()*0.333558);
}

double NNfunction_sb_dRsR::synapse0x30ded80() {
   return (neuron0x30d6ab0()*-0.448471);
}

double NNfunction_sb_dRsR::synapse0x30dedc0() {
   return (neuron0x30d6df0()*-0.133261);
}

double NNfunction_sb_dRsR::synapse0x30dee00() {
   return (neuron0x30d7130()*-0.158997);
}

double NNfunction_sb_dRsR::synapse0x30defd0() {
   return (neuron0x30d2570()*-0.337738);
}

double NNfunction_sb_dRsR::synapse0x30e8060() {
   return (neuron0x30d28b0()*1.10554);
}

double NNfunction_sb_dRsR::synapse0x30e80a0() {
   return (neuron0x30d2bf0()*0.189217);
}

double NNfunction_sb_dRsR::synapse0x30e80e0() {
   return (neuron0x30d2f30()*-1.13288);
}

double NNfunction_sb_dRsR::synapse0x30e8120() {
   return (neuron0x30d3270()*0.421574);
}

double NNfunction_sb_dRsR::synapse0x30e8160() {
   return (neuron0x30d35b0()*0.310378);
}

double NNfunction_sb_dRsR::synapse0x30e81a0() {
   return (neuron0x30d38f0()*-0.331094);
}

double NNfunction_sb_dRsR::synapse0x30e81e0() {
   return (neuron0x30d3c30()*0.597642);
}

double NNfunction_sb_dRsR::synapse0x30e8220() {
   return (neuron0x30d3f70()*0.220504);
}

double NNfunction_sb_dRsR::synapse0x30e8260() {
   return (neuron0x30d42b0()*-0.210867);
}

double NNfunction_sb_dRsR::synapse0x30e82a0() {
   return (neuron0x30d45f0()*-0.115493);
}

double NNfunction_sb_dRsR::synapse0x30e82e0() {
   return (neuron0x30d4930()*-0.567206);
}

double NNfunction_sb_dRsR::synapse0x30e8320() {
   return (neuron0x30d4c70()*-1.17098);
}

double NNfunction_sb_dRsR::synapse0x30e8360() {
   return (neuron0x30d4fb0()*-0.512109);
}

double NNfunction_sb_dRsR::synapse0x30e83a0() {
   return (neuron0x30d52f0()*-0.696155);
}

double NNfunction_sb_dRsR::synapse0x30e83e0() {
   return (neuron0x30d5630()*-0.896025);
}

double NNfunction_sb_dRsR::synapse0x30e7eb0() {
   return (neuron0x30d5970()*0.432409);
}

double NNfunction_sb_dRsR::synapse0x30e7ef0() {
   return (neuron0x30d5ed0()*-0.2431);
}

double NNfunction_sb_dRsR::synapse0x30e8530() {
   return (neuron0x30d60f0()*0.0130885);
}

double NNfunction_sb_dRsR::synapse0x30e8570() {
   return (neuron0x30d6430()*0.172121);
}

double NNfunction_sb_dRsR::synapse0x30e85b0() {
   return (neuron0x30d6770()*0.785285);
}

double NNfunction_sb_dRsR::synapse0x30e85f0() {
   return (neuron0x30d6ab0()*-0.625357);
}

double NNfunction_sb_dRsR::synapse0x30e8630() {
   return (neuron0x30d6df0()*-0.674253);
}

double NNfunction_sb_dRsR::synapse0x30e8670() {
   return (neuron0x30d7130()*0.0244042);
}

double NNfunction_sb_dRsR::synapse0x30e89f0() {
   return (neuron0x30d2570()*-0.105713);
}

double NNfunction_sb_dRsR::synapse0x30e8a30() {
   return (neuron0x30d28b0()*0.599712);
}

double NNfunction_sb_dRsR::synapse0x30e8a70() {
   return (neuron0x30d2bf0()*-0.150361);
}

double NNfunction_sb_dRsR::synapse0x30e8ab0() {
   return (neuron0x30d2f30()*-0.459721);
}

double NNfunction_sb_dRsR::synapse0x30e8af0() {
   return (neuron0x30d3270()*-0.116935);
}

double NNfunction_sb_dRsR::synapse0x30e8b30() {
   return (neuron0x30d35b0()*-0.727557);
}

double NNfunction_sb_dRsR::synapse0x30e8b70() {
   return (neuron0x30d38f0()*0.686629);
}

double NNfunction_sb_dRsR::synapse0x30e8bb0() {
   return (neuron0x30d3c30()*-0.460977);
}

double NNfunction_sb_dRsR::synapse0x30e8bf0() {
   return (neuron0x30d3f70()*0.959779);
}

double NNfunction_sb_dRsR::synapse0x30e8c30() {
   return (neuron0x30d42b0()*1.05711);
}

double NNfunction_sb_dRsR::synapse0x30e8c70() {
   return (neuron0x30d45f0()*-0.444254);
}

double NNfunction_sb_dRsR::synapse0x30e8cb0() {
   return (neuron0x30d4930()*-0.658201);
}

double NNfunction_sb_dRsR::synapse0x30e8cf0() {
   return (neuron0x30d4c70()*0.30913);
}

double NNfunction_sb_dRsR::synapse0x30e8d30() {
   return (neuron0x30d4fb0()*0.0930044);
}

double NNfunction_sb_dRsR::synapse0x30e8d70() {
   return (neuron0x30d52f0()*-0.467681);
}

double NNfunction_sb_dRsR::synapse0x30e8db0() {
   return (neuron0x30d5630()*0.402513);
}

double NNfunction_sb_dRsR::synapse0x30e8840() {
   return (neuron0x30d5970()*-0.383051);
}

double NNfunction_sb_dRsR::synapse0x30e8880() {
   return (neuron0x30d5ed0()*0.118987);
}

double NNfunction_sb_dRsR::synapse0x30e8f00() {
   return (neuron0x30d60f0()*0.172992);
}

double NNfunction_sb_dRsR::synapse0x30e8f40() {
   return (neuron0x30d6430()*0.347604);
}

double NNfunction_sb_dRsR::synapse0x30e8f80() {
   return (neuron0x30d6770()*0.132373);
}

double NNfunction_sb_dRsR::synapse0x30e8fc0() {
   return (neuron0x30d6ab0()*-0.62599);
}

double NNfunction_sb_dRsR::synapse0x30e9000() {
   return (neuron0x30d6df0()*0.594734);
}

double NNfunction_sb_dRsR::synapse0x30e9040() {
   return (neuron0x30d7130()*-0.253003);
}

double NNfunction_sb_dRsR::synapse0x30e93c0() {
   return (neuron0x30d2570()*0.765706);
}

double NNfunction_sb_dRsR::synapse0x30e9400() {
   return (neuron0x30d28b0()*-0.156489);
}

double NNfunction_sb_dRsR::synapse0x30e9440() {
   return (neuron0x30d2bf0()*-0.0575211);
}

double NNfunction_sb_dRsR::synapse0x30e9480() {
   return (neuron0x30d2f30()*-0.201255);
}

double NNfunction_sb_dRsR::synapse0x30e94c0() {
   return (neuron0x30d3270()*-0.428009);
}

double NNfunction_sb_dRsR::synapse0x30e9500() {
   return (neuron0x30d35b0()*-0.799151);
}

double NNfunction_sb_dRsR::synapse0x30e9540() {
   return (neuron0x30d38f0()*0.29121);
}

double NNfunction_sb_dRsR::synapse0x30e9580() {
   return (neuron0x30d3c30()*0.0665332);
}

double NNfunction_sb_dRsR::synapse0x30e95c0() {
   return (neuron0x30d3f70()*0.241285);
}

double NNfunction_sb_dRsR::synapse0x30e9600() {
   return (neuron0x30d42b0()*0.185299);
}

double NNfunction_sb_dRsR::synapse0x30e9640() {
   return (neuron0x30d45f0()*-0.710431);
}

double NNfunction_sb_dRsR::synapse0x30e9680() {
   return (neuron0x30d4930()*-0.193307);
}

double NNfunction_sb_dRsR::synapse0x30e96c0() {
   return (neuron0x30d4c70()*0.382721);
}

double NNfunction_sb_dRsR::synapse0x30e9700() {
   return (neuron0x30d4fb0()*0.141449);
}

double NNfunction_sb_dRsR::synapse0x30e9740() {
   return (neuron0x30d52f0()*0.925266);
}

double NNfunction_sb_dRsR::synapse0x30e9780() {
   return (neuron0x30d5630()*-0.290928);
}

double NNfunction_sb_dRsR::synapse0x30e9210() {
   return (neuron0x30d5970()*0.13882);
}

double NNfunction_sb_dRsR::synapse0x30e9250() {
   return (neuron0x30d5ed0()*0.997741);
}

double NNfunction_sb_dRsR::synapse0x30e98d0() {
   return (neuron0x30d60f0()*0.288964);
}

double NNfunction_sb_dRsR::synapse0x30e9910() {
   return (neuron0x30d6430()*1.09736);
}

double NNfunction_sb_dRsR::synapse0x30e9950() {
   return (neuron0x30d6770()*-0.836438);
}

double NNfunction_sb_dRsR::synapse0x30e9990() {
   return (neuron0x30d6ab0()*0.339314);
}

double NNfunction_sb_dRsR::synapse0x30e99d0() {
   return (neuron0x30d6df0()*0.273114);
}

double NNfunction_sb_dRsR::synapse0x30e9a10() {
   return (neuron0x30d7130()*-0.0121075);
}

double NNfunction_sb_dRsR::synapse0x30e9d90() {
   return (neuron0x30d2570()*-0.0391343);
}

double NNfunction_sb_dRsR::synapse0x30e9dd0() {
   return (neuron0x30d28b0()*-0.473277);
}

double NNfunction_sb_dRsR::synapse0x30e9e10() {
   return (neuron0x30d2bf0()*-0.459457);
}

double NNfunction_sb_dRsR::synapse0x30e9e50() {
   return (neuron0x30d2f30()*0.303947);
}

double NNfunction_sb_dRsR::synapse0x30e9e90() {
   return (neuron0x30d3270()*0.390226);
}

double NNfunction_sb_dRsR::synapse0x30e9ed0() {
   return (neuron0x30d35b0()*-0.123391);
}

double NNfunction_sb_dRsR::synapse0x30e9f10() {
   return (neuron0x30d38f0()*0.186326);
}

double NNfunction_sb_dRsR::synapse0x30e9f50() {
   return (neuron0x30d3c30()*-0.392381);
}

double NNfunction_sb_dRsR::synapse0x30e9f90() {
   return (neuron0x30d3f70()*-0.0594083);
}

double NNfunction_sb_dRsR::synapse0x30e9fd0() {
   return (neuron0x30d42b0()*0.178347);
}

double NNfunction_sb_dRsR::synapse0x30ea010() {
   return (neuron0x30d45f0()*-0.222774);
}

double NNfunction_sb_dRsR::synapse0x30ea050() {
   return (neuron0x30d4930()*-1.74968);
}

double NNfunction_sb_dRsR::synapse0x30ea090() {
   return (neuron0x30d4c70()*0.259828);
}

double NNfunction_sb_dRsR::synapse0x30ea0d0() {
   return (neuron0x30d4fb0()*1.07224);
}

double NNfunction_sb_dRsR::synapse0x30ea110() {
   return (neuron0x30d52f0()*-0.221057);
}

double NNfunction_sb_dRsR::synapse0x30ea150() {
   return (neuron0x30d5630()*0.234081);
}

double NNfunction_sb_dRsR::synapse0x30e9be0() {
   return (neuron0x30d5970()*0.101814);
}

double NNfunction_sb_dRsR::synapse0x30e9c20() {
   return (neuron0x30d5ed0()*0.985558);
}

double NNfunction_sb_dRsR::synapse0x30ea2a0() {
   return (neuron0x30d60f0()*0.448335);
}

double NNfunction_sb_dRsR::synapse0x30ea2e0() {
   return (neuron0x30d6430()*-0.257945);
}

double NNfunction_sb_dRsR::synapse0x30ea320() {
   return (neuron0x30d6770()*-1.09106);
}

double NNfunction_sb_dRsR::synapse0x30ea360() {
   return (neuron0x30d6ab0()*0.0295943);
}

double NNfunction_sb_dRsR::synapse0x30ea3a0() {
   return (neuron0x30d6df0()*0.248384);
}

double NNfunction_sb_dRsR::synapse0x30ea3e0() {
   return (neuron0x30d7130()*-0.647135);
}

double NNfunction_sb_dRsR::synapse0x30ea760() {
   return (neuron0x30d2570()*-1.07882);
}

double NNfunction_sb_dRsR::synapse0x30ea7a0() {
   return (neuron0x30d28b0()*0.568753);
}

double NNfunction_sb_dRsR::synapse0x30ea7e0() {
   return (neuron0x30d2bf0()*-0.216616);
}

double NNfunction_sb_dRsR::synapse0x30ea820() {
   return (neuron0x30d2f30()*-0.536048);
}

double NNfunction_sb_dRsR::synapse0x30ea860() {
   return (neuron0x30d3270()*-0.557505);
}

double NNfunction_sb_dRsR::synapse0x30ea8a0() {
   return (neuron0x30d35b0()*-0.305183);
}

double NNfunction_sb_dRsR::synapse0x30ea8e0() {
   return (neuron0x30d38f0()*-0.249291);
}

double NNfunction_sb_dRsR::synapse0x30ea920() {
   return (neuron0x30d3c30()*-0.120686);
}

double NNfunction_sb_dRsR::synapse0x30ea960() {
   return (neuron0x30d3f70()*0.634901);
}

double NNfunction_sb_dRsR::synapse0x30ea9a0() {
   return (neuron0x30d42b0()*-0.0801024);
}

double NNfunction_sb_dRsR::synapse0x30ea9e0() {
   return (neuron0x30d45f0()*0.373862);
}

double NNfunction_sb_dRsR::synapse0x30eaa20() {
   return (neuron0x30d4930()*0.00754612);
}

double NNfunction_sb_dRsR::synapse0x30eaa60() {
   return (neuron0x30d4c70()*-0.221498);
}

double NNfunction_sb_dRsR::synapse0x30eaaa0() {
   return (neuron0x30d4fb0()*-0.306827);
}

double NNfunction_sb_dRsR::synapse0x30eaae0() {
   return (neuron0x30d52f0()*-0.787763);
}

double NNfunction_sb_dRsR::synapse0x30eab20() {
   return (neuron0x30d5630()*0.0663017);
}

double NNfunction_sb_dRsR::synapse0x30ea5b0() {
   return (neuron0x30d5970()*-0.125348);
}

double NNfunction_sb_dRsR::synapse0x30ea5f0() {
   return (neuron0x30d5ed0()*-0.158839);
}

double NNfunction_sb_dRsR::synapse0x30eac70() {
   return (neuron0x30d60f0()*0.0214154);
}

double NNfunction_sb_dRsR::synapse0x30eacb0() {
   return (neuron0x30d6430()*0.207);
}

double NNfunction_sb_dRsR::synapse0x30eacf0() {
   return (neuron0x30d6770()*-0.36142);
}

double NNfunction_sb_dRsR::synapse0x30ead30() {
   return (neuron0x30d6ab0()*0.493191);
}

double NNfunction_sb_dRsR::synapse0x30ead70() {
   return (neuron0x30d6df0()*-0.63763);
}

double NNfunction_sb_dRsR::synapse0x30eadb0() {
   return (neuron0x30d7130()*0.272176);
}

double NNfunction_sb_dRsR::synapse0x30eb130() {
   return (neuron0x30d2570()*-0.0087773);
}

double NNfunction_sb_dRsR::synapse0x30eb170() {
   return (neuron0x30d28b0()*0.0140326);
}

double NNfunction_sb_dRsR::synapse0x30eb1b0() {
   return (neuron0x30d2bf0()*0.00732935);
}

double NNfunction_sb_dRsR::synapse0x30eb1f0() {
   return (neuron0x30d2f30()*8.87994);
}

double NNfunction_sb_dRsR::synapse0x30eb230() {
   return (neuron0x30d3270()*-0.0324829);
}

double NNfunction_sb_dRsR::synapse0x30eb270() {
   return (neuron0x30d35b0()*-0.0134408);
}

double NNfunction_sb_dRsR::synapse0x30eb2b0() {
   return (neuron0x30d38f0()*-0.00151424);
}

double NNfunction_sb_dRsR::synapse0x30eb2f0() {
   return (neuron0x30d3c30()*-0.00400397);
}

double NNfunction_sb_dRsR::synapse0x30eb330() {
   return (neuron0x30d3f70()*0.0211383);
}

double NNfunction_sb_dRsR::synapse0x30eb370() {
   return (neuron0x30d42b0()*-0.0129778);
}

double NNfunction_sb_dRsR::synapse0x30eb3b0() {
   return (neuron0x30d45f0()*-0.01159);
}

double NNfunction_sb_dRsR::synapse0x30eb3f0() {
   return (neuron0x30d4930()*0.0153447);
}

double NNfunction_sb_dRsR::synapse0x30eb430() {
   return (neuron0x30d4c70()*0.00404208);
}

double NNfunction_sb_dRsR::synapse0x30eb470() {
   return (neuron0x30d4fb0()*0.00157721);
}

double NNfunction_sb_dRsR::synapse0x30eb4b0() {
   return (neuron0x30d52f0()*0.0134311);
}

double NNfunction_sb_dRsR::synapse0x30eb4f0() {
   return (neuron0x30d5630()*0.0278313);
}

double NNfunction_sb_dRsR::synapse0x30eaf80() {
   return (neuron0x30d5970()*0.0239183);
}

double NNfunction_sb_dRsR::synapse0x30eafc0() {
   return (neuron0x30d5ed0()*-0.341169);
}

double NNfunction_sb_dRsR::synapse0x30eb640() {
   return (neuron0x30d60f0()*-0.334582);
}

double NNfunction_sb_dRsR::synapse0x30eb680() {
   return (neuron0x30d6430()*-0.0465656);
}

double NNfunction_sb_dRsR::synapse0x30eb6c0() {
   return (neuron0x30d6770()*-0.0070654);
}

double NNfunction_sb_dRsR::synapse0x30eb700() {
   return (neuron0x30d6ab0()*-0.0165899);
}

double NNfunction_sb_dRsR::synapse0x30eb740() {
   return (neuron0x30d6df0()*-0.020509);
}

double NNfunction_sb_dRsR::synapse0x30eb780() {
   return (neuron0x30d7130()*0.0233108);
}

double NNfunction_sb_dRsR::synapse0x30ebb00() {
   return (neuron0x30d2570()*-0.307756);
}

double NNfunction_sb_dRsR::synapse0x30ebb40() {
   return (neuron0x30d28b0()*-0.236713);
}

double NNfunction_sb_dRsR::synapse0x30ebb80() {
   return (neuron0x30d2bf0()*-0.289219);
}

double NNfunction_sb_dRsR::synapse0x30ebbc0() {
   return (neuron0x30d2f30()*0.964571);
}

double NNfunction_sb_dRsR::synapse0x30ebc00() {
   return (neuron0x30d3270()*0.348671);
}

double NNfunction_sb_dRsR::synapse0x30ebc40() {
   return (neuron0x30d35b0()*-0.104712);
}

double NNfunction_sb_dRsR::synapse0x30ebc80() {
   return (neuron0x30d38f0()*0.251085);
}

double NNfunction_sb_dRsR::synapse0x30ebcc0() {
   return (neuron0x30d3c30()*-0.635514);
}

double NNfunction_sb_dRsR::synapse0x30ebd00() {
   return (neuron0x30d3f70()*-0.0854281);
}

double NNfunction_sb_dRsR::synapse0x30ebd40() {
   return (neuron0x30d42b0()*0.0457236);
}

double NNfunction_sb_dRsR::synapse0x30ebd80() {
   return (neuron0x30d45f0()*-0.351479);
}

double NNfunction_sb_dRsR::synapse0x30ebdc0() {
   return (neuron0x30d4930()*-0.435224);
}

double NNfunction_sb_dRsR::synapse0x30ebe00() {
   return (neuron0x30d4c70()*-0.174404);
}

double NNfunction_sb_dRsR::synapse0x30ebe40() {
   return (neuron0x30d4fb0()*-0.446283);
}

double NNfunction_sb_dRsR::synapse0x30ebe80() {
   return (neuron0x30d52f0()*0.554322);
}

double NNfunction_sb_dRsR::synapse0x30ebec0() {
   return (neuron0x30d5630()*-0.382522);
}

double NNfunction_sb_dRsR::synapse0x30eb950() {
   return (neuron0x30d5970()*0.410042);
}

double NNfunction_sb_dRsR::synapse0x30eb990() {
   return (neuron0x30d5ed0()*-1.64734);
}

double NNfunction_sb_dRsR::synapse0x30ec010() {
   return (neuron0x30d60f0()*-0.560912);
}

double NNfunction_sb_dRsR::synapse0x30ec050() {
   return (neuron0x30d6430()*0.393898);
}

double NNfunction_sb_dRsR::synapse0x30ec090() {
   return (neuron0x30d6770()*1.22852);
}

double NNfunction_sb_dRsR::synapse0x30ec0d0() {
   return (neuron0x30d6ab0()*0.127354);
}

double NNfunction_sb_dRsR::synapse0x30ec110() {
   return (neuron0x30d6df0()*-0.57715);
}

double NNfunction_sb_dRsR::synapse0x30ec150() {
   return (neuron0x30d7130()*0.0795627);
}

double NNfunction_sb_dRsR::synapse0x30ec4d0() {
   return (neuron0x30d2570()*0.0155106);
}

double NNfunction_sb_dRsR::synapse0x30ec510() {
   return (neuron0x30d28b0()*0.150952);
}

double NNfunction_sb_dRsR::synapse0x30ec550() {
   return (neuron0x30d2bf0()*0.0418202);
}

double NNfunction_sb_dRsR::synapse0x30ec590() {
   return (neuron0x30d2f30()*-0.557765);
}

double NNfunction_sb_dRsR::synapse0x30ec5d0() {
   return (neuron0x30d3270()*-0.0105052);
}

double NNfunction_sb_dRsR::synapse0x30ec610() {
   return (neuron0x30d35b0()*-0.0284334);
}

double NNfunction_sb_dRsR::synapse0x30ec650() {
   return (neuron0x30d38f0()*0.0349973);
}

double NNfunction_sb_dRsR::synapse0x30ec690() {
   return (neuron0x30d3c30()*0.0324574);
}

double NNfunction_sb_dRsR::synapse0x30ec6d0() {
   return (neuron0x30d3f70()*0.00795251);
}

double NNfunction_sb_dRsR::synapse0x30ec710() {
   return (neuron0x30d42b0()*-0.00636357);
}

double NNfunction_sb_dRsR::synapse0x30ec750() {
   return (neuron0x30d45f0()*-0.0135754);
}

double NNfunction_sb_dRsR::synapse0x30ec790() {
   return (neuron0x30d4930()*0.219412);
}

double NNfunction_sb_dRsR::synapse0x30ec7d0() {
   return (neuron0x30d4c70()*0.257282);
}

double NNfunction_sb_dRsR::synapse0x30ec810() {
   return (neuron0x30d4fb0()*-0.0704014);
}

double NNfunction_sb_dRsR::synapse0x30ec850() {
   return (neuron0x30d52f0()*0.296864);
}

double NNfunction_sb_dRsR::synapse0x30ec890() {
   return (neuron0x30d5630()*0.173406);
}

double NNfunction_sb_dRsR::synapse0x30ec320() {
   return (neuron0x30d5970()*-0.0830171);
}

double NNfunction_sb_dRsR::synapse0x30ec360() {
   return (neuron0x30d5ed0()*0.201529);
}

double NNfunction_sb_dRsR::synapse0x30ec9e0() {
   return (neuron0x30d60f0()*0.161911);
}

double NNfunction_sb_dRsR::synapse0x30eca20() {
   return (neuron0x30d6430()*0.0423252);
}

double NNfunction_sb_dRsR::synapse0x30eca60() {
   return (neuron0x30d6770()*0.00294674);
}

double NNfunction_sb_dRsR::synapse0x30ecaa0() {
   return (neuron0x30d6ab0()*-0.0387523);
}

double NNfunction_sb_dRsR::synapse0x30ecae0() {
   return (neuron0x30d6df0()*-0.00813996);
}

double NNfunction_sb_dRsR::synapse0x30ecb20() {
   return (neuron0x30d7130()*0.0045313);
}

double NNfunction_sb_dRsR::synapse0x30ecea0() {
   return (neuron0x30d2570()*0.00186657);
}

double NNfunction_sb_dRsR::synapse0x30e1470() {
   return (neuron0x30d28b0()*-0.0788315);
}

double NNfunction_sb_dRsR::synapse0x30e14b0() {
   return (neuron0x30d2bf0()*0.0145113);
}

double NNfunction_sb_dRsR::synapse0x30e14f0() {
   return (neuron0x30d2f30()*1.67491);
}

double NNfunction_sb_dRsR::synapse0x30e1740() {
   return (neuron0x30d3270()*-0.0861109);
}

double NNfunction_sb_dRsR::synapse0x30e1780() {
   return (neuron0x30d35b0()*-0.0361106);
}

double NNfunction_sb_dRsR::synapse0x30e17c0() {
   return (neuron0x30d38f0()*-0.0435568);
}

double NNfunction_sb_dRsR::synapse0x30e1a10() {
   return (neuron0x30d3c30()*0.0486219);
}

double NNfunction_sb_dRsR::synapse0x30e1a50() {
   return (neuron0x30d3f70()*0.0191517);
}

double NNfunction_sb_dRsR::synapse0x30e1ca0() {
   return (neuron0x30d42b0()*0.0625998);
}

double NNfunction_sb_dRsR::synapse0x30e1ce0() {
   return (neuron0x30d45f0()*-0.0722464);
}

double NNfunction_sb_dRsR::synapse0x30e1d20() {
   return (neuron0x30d4930()*-0.133075);
}

double NNfunction_sb_dRsR::synapse0x30e1f70() {
   return (neuron0x30d4c70()*-0.0245955);
}

double NNfunction_sb_dRsR::synapse0x30e1fb0() {
   return (neuron0x30d4fb0()*0.00848177);
}

double NNfunction_sb_dRsR::synapse0x30e2200() {
   return (neuron0x30d52f0()*-0.0150941);
}

double NNfunction_sb_dRsR::synapse0x30e2240() {
   return (neuron0x30d5630()*0.0552557);
}

double NNfunction_sb_dRsR::synapse0x30eccf0() {
   return (neuron0x30d5970()*0.00849695);
}

double NNfunction_sb_dRsR::synapse0x30ecd30() {
   return (neuron0x30d5ed0()*0.274883);
}

double NNfunction_sb_dRsR::synapse0x30e2390() {
   return (neuron0x30d60f0()*0.386765);
}

double NNfunction_sb_dRsR::synapse0x30e28a0() {
   return (neuron0x30d6430()*-0.0155683);
}

double NNfunction_sb_dRsR::synapse0x30e28e0() {
   return (neuron0x30d6770()*-0.00869013);
}

double NNfunction_sb_dRsR::synapse0x30e2920() {
   return (neuron0x30d6ab0()*-0.0207053);
}

double NNfunction_sb_dRsR::synapse0x30e2b70() {
   return (neuron0x30d6df0()*-0.111144);
}

double NNfunction_sb_dRsR::synapse0x30e2bb0() {
   return (neuron0x30d7130()*0.037697);
}

double NNfunction_sb_dRsR::synapse0x30e2460() {
   return (neuron0x30d2570()*0.427082);
}

double NNfunction_sb_dRsR::synapse0x30e24a0() {
   return (neuron0x30d28b0()*-0.483002);
}

double NNfunction_sb_dRsR::synapse0x30e24e0() {
   return (neuron0x30d2bf0()*0.223601);
}

double NNfunction_sb_dRsR::synapse0x30e2520() {
   return (neuron0x30d2f30()*-0.555123);
}

double NNfunction_sb_dRsR::synapse0x30e2ea0() {
   return (neuron0x30d3270()*0.55481);
}

double NNfunction_sb_dRsR::synapse0x30ef1f0() {
   return (neuron0x30d35b0()*0.39895);
}

double NNfunction_sb_dRsR::synapse0x30ef230() {
   return (neuron0x30d38f0()*1.24124);
}

double NNfunction_sb_dRsR::synapse0x30ef270() {
   return (neuron0x30d3c30()*-0.0767243);
}

double NNfunction_sb_dRsR::synapse0x30ef2b0() {
   return (neuron0x30d3f70()*-1.14504);
}

double NNfunction_sb_dRsR::synapse0x30ef2f0() {
   return (neuron0x30d42b0()*0.112906);
}

double NNfunction_sb_dRsR::synapse0x30ef330() {
   return (neuron0x30d45f0()*-1.14206);
}

double NNfunction_sb_dRsR::synapse0x30ef370() {
   return (neuron0x30d4930()*0.986112);
}

double NNfunction_sb_dRsR::synapse0x30ef3b0() {
   return (neuron0x30d4c70()*1.17578);
}

double NNfunction_sb_dRsR::synapse0x30ef3f0() {
   return (neuron0x30d4fb0()*0.503565);
}

double NNfunction_sb_dRsR::synapse0x30ef430() {
   return (neuron0x30d52f0()*-0.398194);
}

double NNfunction_sb_dRsR::synapse0x30ef470() {
   return (neuron0x30d5630()*-0.319288);
}

double NNfunction_sb_dRsR::synapse0x30e2d80() {
   return (neuron0x30d5970()*1.4088);
}

double NNfunction_sb_dRsR::synapse0x30e2dc0() {
   return (neuron0x30d5ed0()*0.647945);
}

double NNfunction_sb_dRsR::synapse0x30ef5c0() {
   return (neuron0x30d60f0()*-0.0610162);
}

double NNfunction_sb_dRsR::synapse0x30ef600() {
   return (neuron0x30d6430()*0.237305);
}

double NNfunction_sb_dRsR::synapse0x30ef640() {
   return (neuron0x30d6770()*-0.0682464);
}

double NNfunction_sb_dRsR::synapse0x30ef680() {
   return (neuron0x30d6ab0()*-0.199069);
}

double NNfunction_sb_dRsR::synapse0x30ef6c0() {
   return (neuron0x30d6df0()*0.0610643);
}

double NNfunction_sb_dRsR::synapse0x30ef700() {
   return (neuron0x30d7130()*-0.0845785);
}

double NNfunction_sb_dRsR::synapse0x30efa80() {
   return (neuron0x30d2570()*-0.027326);
}

double NNfunction_sb_dRsR::synapse0x30efac0() {
   return (neuron0x30d28b0()*0.141318);
}

double NNfunction_sb_dRsR::synapse0x30efb00() {
   return (neuron0x30d2bf0()*0.54362);
}

double NNfunction_sb_dRsR::synapse0x30efb40() {
   return (neuron0x30d2f30()*-0.0899503);
}

double NNfunction_sb_dRsR::synapse0x30efb80() {
   return (neuron0x30d3270()*-0.00978286);
}

double NNfunction_sb_dRsR::synapse0x30efbc0() {
   return (neuron0x30d35b0()*-0.728896);
}

double NNfunction_sb_dRsR::synapse0x30efc00() {
   return (neuron0x30d38f0()*0.419979);
}

double NNfunction_sb_dRsR::synapse0x30efc40() {
   return (neuron0x30d3c30()*0.397004);
}

double NNfunction_sb_dRsR::synapse0x30efc80() {
   return (neuron0x30d3f70()*0.324587);
}

double NNfunction_sb_dRsR::synapse0x30efcc0() {
   return (neuron0x30d42b0()*-0.51411);
}

double NNfunction_sb_dRsR::synapse0x30efd00() {
   return (neuron0x30d45f0()*-0.474149);
}

double NNfunction_sb_dRsR::synapse0x30efd40() {
   return (neuron0x30d4930()*0.484606);
}

double NNfunction_sb_dRsR::synapse0x30efd80() {
   return (neuron0x30d4c70()*-1.09005);
}

double NNfunction_sb_dRsR::synapse0x30efdc0() {
   return (neuron0x30d4fb0()*-0.237864);
}

double NNfunction_sb_dRsR::synapse0x30efe00() {
   return (neuron0x30d52f0()*0.373667);
}

double NNfunction_sb_dRsR::synapse0x30efe40() {
   return (neuron0x30d5630()*-1.28278);
}

double NNfunction_sb_dRsR::synapse0x30ef8d0() {
   return (neuron0x30d5970()*-0.527909);
}

double NNfunction_sb_dRsR::synapse0x30ef910() {
   return (neuron0x30d5ed0()*-0.661531);
}

double NNfunction_sb_dRsR::synapse0x30eff90() {
   return (neuron0x30d60f0()*-0.208832);
}

double NNfunction_sb_dRsR::synapse0x30effd0() {
   return (neuron0x30d6430()*0.496898);
}

double NNfunction_sb_dRsR::synapse0x30f0010() {
   return (neuron0x30d6770()*-0.533195);
}

double NNfunction_sb_dRsR::synapse0x30f0050() {
   return (neuron0x30d6ab0()*0.359187);
}

double NNfunction_sb_dRsR::synapse0x30f0090() {
   return (neuron0x30d6df0()*0.664857);
}

double NNfunction_sb_dRsR::synapse0x30f00d0() {
   return (neuron0x30d7130()*0.613613);
}

double NNfunction_sb_dRsR::synapse0x30f0450() {
   return (neuron0x30d2570()*0.448991);
}

double NNfunction_sb_dRsR::synapse0x30f0490() {
   return (neuron0x30d28b0()*-0.270192);
}

double NNfunction_sb_dRsR::synapse0x30f04d0() {
   return (neuron0x30d2bf0()*0.154335);
}

double NNfunction_sb_dRsR::synapse0x30f0510() {
   return (neuron0x30d2f30()*0.549403);
}

double NNfunction_sb_dRsR::synapse0x30f0550() {
   return (neuron0x30d3270()*0.116257);
}

double NNfunction_sb_dRsR::synapse0x30f0590() {
   return (neuron0x30d35b0()*-0.349523);
}

double NNfunction_sb_dRsR::synapse0x30f05d0() {
   return (neuron0x30d38f0()*0.441844);
}

double NNfunction_sb_dRsR::synapse0x30f0610() {
   return (neuron0x30d3c30()*0.201707);
}

double NNfunction_sb_dRsR::synapse0x30f0650() {
   return (neuron0x30d3f70()*-0.199566);
}

double NNfunction_sb_dRsR::synapse0x30f0690() {
   return (neuron0x30d42b0()*0.990486);
}

double NNfunction_sb_dRsR::synapse0x30f06d0() {
   return (neuron0x30d45f0()*-0.220037);
}

double NNfunction_sb_dRsR::synapse0x30f0710() {
   return (neuron0x30d4930()*-0.0545545);
}

double NNfunction_sb_dRsR::synapse0x30f0750() {
   return (neuron0x30d4c70()*-0.356858);
}

double NNfunction_sb_dRsR::synapse0x30f0790() {
   return (neuron0x30d4fb0()*-0.305331);
}

double NNfunction_sb_dRsR::synapse0x30f07d0() {
   return (neuron0x30d52f0()*-0.264728);
}

double NNfunction_sb_dRsR::synapse0x30f0810() {
   return (neuron0x30d5630()*-0.346223);
}

double NNfunction_sb_dRsR::synapse0x30f02a0() {
   return (neuron0x30d5970()*-0.441372);
}

double NNfunction_sb_dRsR::synapse0x30f02e0() {
   return (neuron0x30d5ed0()*0.453263);
}

double NNfunction_sb_dRsR::synapse0x30f0960() {
   return (neuron0x30d60f0()*0.32354);
}

double NNfunction_sb_dRsR::synapse0x30f09a0() {
   return (neuron0x30d6430()*0.27778);
}

double NNfunction_sb_dRsR::synapse0x30f09e0() {
   return (neuron0x30d6770()*-0.292876);
}

double NNfunction_sb_dRsR::synapse0x30f0a20() {
   return (neuron0x30d6ab0()*-0.218125);
}

double NNfunction_sb_dRsR::synapse0x30f0a60() {
   return (neuron0x30d6df0()*-0.642806);
}

double NNfunction_sb_dRsR::synapse0x30f0aa0() {
   return (neuron0x30d7130()*-0.127694);
}

double NNfunction_sb_dRsR::synapse0x30f0e20() {
   return (neuron0x30d2570()*0.00802251);
}

double NNfunction_sb_dRsR::synapse0x30f0e60() {
   return (neuron0x30d28b0()*-0.0129104);
}

double NNfunction_sb_dRsR::synapse0x30f0ea0() {
   return (neuron0x30d2bf0()*0.00811645);
}

double NNfunction_sb_dRsR::synapse0x30f0ee0() {
   return (neuron0x30d2f30()*0.333917);
}

double NNfunction_sb_dRsR::synapse0x30f0f20() {
   return (neuron0x30d3270()*-0.00786297);
}

double NNfunction_sb_dRsR::synapse0x30f0f60() {
   return (neuron0x30d35b0()*-0.00120322);
}

double NNfunction_sb_dRsR::synapse0x30f0fa0() {
   return (neuron0x30d38f0()*-0.00528294);
}

double NNfunction_sb_dRsR::synapse0x30f0fe0() {
   return (neuron0x30d3c30()*0.00272314);
}

double NNfunction_sb_dRsR::synapse0x30f1020() {
   return (neuron0x30d3f70()*0.00133326);
}

double NNfunction_sb_dRsR::synapse0x30f1060() {
   return (neuron0x30d42b0()*0.0109957);
}

double NNfunction_sb_dRsR::synapse0x30f10a0() {
   return (neuron0x30d45f0()*-0.00181161);
}

double NNfunction_sb_dRsR::synapse0x30f10e0() {
   return (neuron0x30d4930()*0.00448273);
}

double NNfunction_sb_dRsR::synapse0x30f1120() {
   return (neuron0x30d4c70()*-0.00830109);
}

double NNfunction_sb_dRsR::synapse0x30f1160() {
   return (neuron0x30d4fb0()*0.000477986);
}

double NNfunction_sb_dRsR::synapse0x30f11a0() {
   return (neuron0x30d52f0()*-0.0188071);
}

double NNfunction_sb_dRsR::synapse0x30f11e0() {
   return (neuron0x30d5630()*-0.0115583);
}

double NNfunction_sb_dRsR::synapse0x30f0c70() {
   return (neuron0x30d5970()*-0.00172161);
}

double NNfunction_sb_dRsR::synapse0x30f0cb0() {
   return (neuron0x30d5ed0()*-1.01471);
}

double NNfunction_sb_dRsR::synapse0x30f1330() {
   return (neuron0x30d60f0()*0.689697);
}

double NNfunction_sb_dRsR::synapse0x30f1370() {
   return (neuron0x30d6430()*0.000140554);
}

double NNfunction_sb_dRsR::synapse0x30f13b0() {
   return (neuron0x30d6770()*-0.00282541);
}

double NNfunction_sb_dRsR::synapse0x30f13f0() {
   return (neuron0x30d6ab0()*-0.00153185);
}

double NNfunction_sb_dRsR::synapse0x30f1430() {
   return (neuron0x30d6df0()*0.00190118);
}

double NNfunction_sb_dRsR::synapse0x30f1470() {
   return (neuron0x30d7130()*-0.00173371);
}

double NNfunction_sb_dRsR::synapse0x30f17f0() {
   return (neuron0x30d2570()*0.308689);
}

double NNfunction_sb_dRsR::synapse0x30f1830() {
   return (neuron0x30d28b0()*-0.701251);
}

double NNfunction_sb_dRsR::synapse0x30f1870() {
   return (neuron0x30d2bf0()*1.09457);
}

double NNfunction_sb_dRsR::synapse0x30f18b0() {
   return (neuron0x30d2f30()*0.469848);
}

double NNfunction_sb_dRsR::synapse0x30f18f0() {
   return (neuron0x30d3270()*0.514824);
}

double NNfunction_sb_dRsR::synapse0x30f1930() {
   return (neuron0x30d35b0()*0.550098);
}

double NNfunction_sb_dRsR::synapse0x30f1970() {
   return (neuron0x30d38f0()*0.34431);
}

double NNfunction_sb_dRsR::synapse0x30f19b0() {
   return (neuron0x30d3c30()*-0.733653);
}

double NNfunction_sb_dRsR::synapse0x30f19f0() {
   return (neuron0x30d3f70()*0.0688097);
}

double NNfunction_sb_dRsR::synapse0x30f1a30() {
   return (neuron0x30d42b0()*0.308383);
}

double NNfunction_sb_dRsR::synapse0x30f1a70() {
   return (neuron0x30d45f0()*1.67371);
}

double NNfunction_sb_dRsR::synapse0x30f1ab0() {
   return (neuron0x30d4930()*-0.141203);
}

double NNfunction_sb_dRsR::synapse0x30f1af0() {
   return (neuron0x30d4c70()*0.239645);
}

double NNfunction_sb_dRsR::synapse0x30f1b30() {
   return (neuron0x30d4fb0()*0.331732);
}

double NNfunction_sb_dRsR::synapse0x30f1b70() {
   return (neuron0x30d52f0()*0.635352);
}

double NNfunction_sb_dRsR::synapse0x30f1bb0() {
   return (neuron0x30d5630()*0.877752);
}

double NNfunction_sb_dRsR::synapse0x30f1640() {
   return (neuron0x30d5970()*0.394997);
}

double NNfunction_sb_dRsR::synapse0x30f1680() {
   return (neuron0x30d5ed0()*0.710561);
}

double NNfunction_sb_dRsR::synapse0x30f1d00() {
   return (neuron0x30d60f0()*-1.08331);
}

double NNfunction_sb_dRsR::synapse0x30f1d40() {
   return (neuron0x30d6430()*-1.34002);
}

double NNfunction_sb_dRsR::synapse0x30f1d80() {
   return (neuron0x30d6770()*0.31811);
}

double NNfunction_sb_dRsR::synapse0x30f1dc0() {
   return (neuron0x30d6ab0()*-0.915661);
}

double NNfunction_sb_dRsR::synapse0x30f1e00() {
   return (neuron0x30d6df0()*0.422856);
}

double NNfunction_sb_dRsR::synapse0x30f1e40() {
   return (neuron0x30d7130()*0.451256);
}

double NNfunction_sb_dRsR::synapse0x30f21c0() {
   return (neuron0x30d2570()*-0.469953);
}

double NNfunction_sb_dRsR::synapse0x30f2200() {
   return (neuron0x30d28b0()*0.118607);
}

double NNfunction_sb_dRsR::synapse0x30f2240() {
   return (neuron0x30d2bf0()*0.257789);
}

double NNfunction_sb_dRsR::synapse0x30f2280() {
   return (neuron0x30d2f30()*0.336654);
}

double NNfunction_sb_dRsR::synapse0x30f22c0() {
   return (neuron0x30d3270()*0.389311);
}

double NNfunction_sb_dRsR::synapse0x30f2300() {
   return (neuron0x30d35b0()*-0.0937543);
}

double NNfunction_sb_dRsR::synapse0x30f2340() {
   return (neuron0x30d38f0()*-0.49751);
}

double NNfunction_sb_dRsR::synapse0x30f2380() {
   return (neuron0x30d3c30()*0.0175744);
}

double NNfunction_sb_dRsR::synapse0x30f23c0() {
   return (neuron0x30d3f70()*-0.0672687);
}

double NNfunction_sb_dRsR::synapse0x30f2400() {
   return (neuron0x30d42b0()*1.25236);
}

double NNfunction_sb_dRsR::synapse0x30f2440() {
   return (neuron0x30d45f0()*0.263747);
}

double NNfunction_sb_dRsR::synapse0x30f2480() {
   return (neuron0x30d4930()*-0.342309);
}

double NNfunction_sb_dRsR::synapse0x30f24c0() {
   return (neuron0x30d4c70()*-0.0734617);
}

double NNfunction_sb_dRsR::synapse0x30f2500() {
   return (neuron0x30d4fb0()*1.28536);
}

double NNfunction_sb_dRsR::synapse0x30f2540() {
   return (neuron0x30d52f0()*-0.326075);
}

double NNfunction_sb_dRsR::synapse0x30f2580() {
   return (neuron0x30d5630()*-0.779497);
}

double NNfunction_sb_dRsR::synapse0x30f2010() {
   return (neuron0x30d5970()*-0.044869);
}

double NNfunction_sb_dRsR::synapse0x30f2050() {
   return (neuron0x30d5ed0()*1.27422);
}

double NNfunction_sb_dRsR::synapse0x30f26d0() {
   return (neuron0x30d60f0()*1.12678);
}

double NNfunction_sb_dRsR::synapse0x30f2710() {
   return (neuron0x30d6430()*0.20744);
}

double NNfunction_sb_dRsR::synapse0x30f2750() {
   return (neuron0x30d6770()*0.68222);
}

double NNfunction_sb_dRsR::synapse0x30f2790() {
   return (neuron0x30d6ab0()*0.33579);
}

double NNfunction_sb_dRsR::synapse0x30f27d0() {
   return (neuron0x30d6df0()*0.861973);
}

double NNfunction_sb_dRsR::synapse0x30f2810() {
   return (neuron0x30d7130()*-0.175337);
}

double NNfunction_sb_dRsR::synapse0x30f2b90() {
   return (neuron0x30d2570()*-0.0145109);
}

double NNfunction_sb_dRsR::synapse0x30f2bd0() {
   return (neuron0x30d28b0()*0.0210139);
}

double NNfunction_sb_dRsR::synapse0x30f2c10() {
   return (neuron0x30d2bf0()*-0.0140426);
}

double NNfunction_sb_dRsR::synapse0x30f2c50() {
   return (neuron0x30d2f30()*-0.335092);
}

double NNfunction_sb_dRsR::synapse0x30f2c90() {
   return (neuron0x30d3270()*-0.0172623);
}

double NNfunction_sb_dRsR::synapse0x30f2cd0() {
   return (neuron0x30d35b0()*0.00283546);
}

double NNfunction_sb_dRsR::synapse0x30f2d10() {
   return (neuron0x30d38f0()*0.00557899);
}

double NNfunction_sb_dRsR::synapse0x30f2d50() {
   return (neuron0x30d3c30()*0.00686987);
}

double NNfunction_sb_dRsR::synapse0x30f2d90() {
   return (neuron0x30d3f70()*0.00431076);
}

double NNfunction_sb_dRsR::synapse0x30f2dd0() {
   return (neuron0x30d42b0()*-0.0199055);
}

double NNfunction_sb_dRsR::synapse0x30f2e10() {
   return (neuron0x30d45f0()*-0.00569849);
}

double NNfunction_sb_dRsR::synapse0x30f2e50() {
   return (neuron0x30d4930()*0.00404987);
}

double NNfunction_sb_dRsR::synapse0x30f2e90() {
   return (neuron0x30d4c70()*-0.00246882);
}

double NNfunction_sb_dRsR::synapse0x30f2ed0() {
   return (neuron0x30d4fb0()*0.0120965);
}

double NNfunction_sb_dRsR::synapse0x30f2f10() {
   return (neuron0x30d52f0()*0.0166216);
}

double NNfunction_sb_dRsR::synapse0x30f2f50() {
   return (neuron0x30d5630()*0.0161526);
}

double NNfunction_sb_dRsR::synapse0x30f29e0() {
   return (neuron0x30d5970()*0.00103448);
}

double NNfunction_sb_dRsR::synapse0x30f2a20() {
   return (neuron0x30d5ed0()*1.7347);
}

double NNfunction_sb_dRsR::synapse0x30f30a0() {
   return (neuron0x30d60f0()*-0.65943);
}

double NNfunction_sb_dRsR::synapse0x30f30e0() {
   return (neuron0x30d6430()*0.0403117);
}

double NNfunction_sb_dRsR::synapse0x30f3120() {
   return (neuron0x30d6770()*-0.0145758);
}

double NNfunction_sb_dRsR::synapse0x30f3160() {
   return (neuron0x30d6ab0()*-0.0060872);
}

double NNfunction_sb_dRsR::synapse0x30f31a0() {
   return (neuron0x30d6df0()*0.00625794);
}

double NNfunction_sb_dRsR::synapse0x30f31e0() {
   return (neuron0x30d7130()*-7.28497e-05);
}

double NNfunction_sb_dRsR::synapse0x30f3560() {
   return (neuron0x30d2570()*0.283874);
}

double NNfunction_sb_dRsR::synapse0x30f35a0() {
   return (neuron0x30d28b0()*0.788692);
}

double NNfunction_sb_dRsR::synapse0x30f35e0() {
   return (neuron0x30d2bf0()*-0.472742);
}

double NNfunction_sb_dRsR::synapse0x30f3620() {
   return (neuron0x30d2f30()*0.221765);
}

double NNfunction_sb_dRsR::synapse0x30f3660() {
   return (neuron0x30d3270()*0.711956);
}

double NNfunction_sb_dRsR::synapse0x30f36a0() {
   return (neuron0x30d35b0()*0.527451);
}

double NNfunction_sb_dRsR::synapse0x30f36e0() {
   return (neuron0x30d38f0()*-0.777891);
}

double NNfunction_sb_dRsR::synapse0x30f3720() {
   return (neuron0x30d3c30()*-0.576077);
}

double NNfunction_sb_dRsR::synapse0x30f3760() {
   return (neuron0x30d3f70()*0.119064);
}

double NNfunction_sb_dRsR::synapse0x30f37a0() {
   return (neuron0x30d42b0()*-1.74139);
}

double NNfunction_sb_dRsR::synapse0x30f37e0() {
   return (neuron0x30d45f0()*-0.133768);
}

double NNfunction_sb_dRsR::synapse0x30f3820() {
   return (neuron0x30d4930()*-0.739191);
}

double NNfunction_sb_dRsR::synapse0x30f3860() {
   return (neuron0x30d4c70()*-0.28575);
}

double NNfunction_sb_dRsR::synapse0x30f38a0() {
   return (neuron0x30d4fb0()*0.112265);
}

double NNfunction_sb_dRsR::synapse0x30f38e0() {
   return (neuron0x30d52f0()*-0.828691);
}

double NNfunction_sb_dRsR::synapse0x30f3920() {
   return (neuron0x30d5630()*-0.794128);
}

double NNfunction_sb_dRsR::synapse0x30f33b0() {
   return (neuron0x30d5970()*0.309867);
}

double NNfunction_sb_dRsR::synapse0x30f33f0() {
   return (neuron0x30d5ed0()*1.1847);
}

double NNfunction_sb_dRsR::synapse0x30f3a70() {
   return (neuron0x30d60f0()*-1.24607);
}

double NNfunction_sb_dRsR::synapse0x30f3ab0() {
   return (neuron0x30d6430()*0.085833);
}

double NNfunction_sb_dRsR::synapse0x30f3af0() {
   return (neuron0x30d6770()*-0.412364);
}

double NNfunction_sb_dRsR::synapse0x30f3b30() {
   return (neuron0x30d6ab0()*0.859575);
}

double NNfunction_sb_dRsR::synapse0x30f3b70() {
   return (neuron0x30d6df0()*-0.675561);
}

double NNfunction_sb_dRsR::synapse0x30f3bb0() {
   return (neuron0x30d7130()*-0.615254);
}

double NNfunction_sb_dRsR::synapse0x30dc660() {
   return (neuron0x30d2570()*0.0376833);
}

double NNfunction_sb_dRsR::synapse0x30dc6a0() {
   return (neuron0x30d28b0()*0.135181);
}

double NNfunction_sb_dRsR::synapse0x30dc6e0() {
   return (neuron0x30d2bf0()*0.0389831);
}

double NNfunction_sb_dRsR::synapse0x30dc720() {
   return (neuron0x30d2f30()*-0.502007);
}

double NNfunction_sb_dRsR::synapse0x30dc760() {
   return (neuron0x30d3270()*-0.0270088);
}

double NNfunction_sb_dRsR::synapse0x30dc7a0() {
   return (neuron0x30d35b0()*-0.0192371);
}

double NNfunction_sb_dRsR::synapse0x30dc7e0() {
   return (neuron0x30d38f0()*0.0178598);
}

double NNfunction_sb_dRsR::synapse0x30dc820() {
   return (neuron0x30d3c30()*0.049692);
}

double NNfunction_sb_dRsR::synapse0x30f4340() {
   return (neuron0x30d3f70()*0.000104334);
}

double NNfunction_sb_dRsR::synapse0x30f4380() {
   return (neuron0x30d42b0()*-0.0172236);
}

double NNfunction_sb_dRsR::synapse0x30f43c0() {
   return (neuron0x30d45f0()*-0.0294567);
}

double NNfunction_sb_dRsR::synapse0x30f4400() {
   return (neuron0x30d4930()*-0.425095);
}

double NNfunction_sb_dRsR::synapse0x30f4440() {
   return (neuron0x30d4c70()*-0.379253);
}

double NNfunction_sb_dRsR::synapse0x30f4480() {
   return (neuron0x30d4fb0()*0.0156597);
}

double NNfunction_sb_dRsR::synapse0x30f44c0() {
   return (neuron0x30d52f0()*-0.111945);
}

double NNfunction_sb_dRsR::synapse0x30f4500() {
   return (neuron0x30d5630()*-0.226914);
}

double NNfunction_sb_dRsR::synapse0x30f3d80() {
   return (neuron0x30d5970()*0.00741499);
}

double NNfunction_sb_dRsR::synapse0x30f3dc0() {
   return (neuron0x30d5ed0()*0.029955);
}

double NNfunction_sb_dRsR::synapse0x30f4650() {
   return (neuron0x30d60f0()*0.0187616);
}

double NNfunction_sb_dRsR::synapse0x30f4690() {
   return (neuron0x30d6430()*0.0205401);
}

double NNfunction_sb_dRsR::synapse0x30f46d0() {
   return (neuron0x30d6770()*-0.0045962);
}

double NNfunction_sb_dRsR::synapse0x30f4710() {
   return (neuron0x30d6ab0()*-0.0307924);
}

double NNfunction_sb_dRsR::synapse0x30f4750() {
   return (neuron0x30d6df0()*0.0205072);
}

double NNfunction_sb_dRsR::synapse0x30f4790() {
   return (neuron0x30d7130()*-0.0165823);
}

double NNfunction_sb_dRsR::synapse0x30f4b10() {
   return (neuron0x30d2570()*-0.178074);
}

double NNfunction_sb_dRsR::synapse0x30f4b50() {
   return (neuron0x30d28b0()*0.104487);
}

double NNfunction_sb_dRsR::synapse0x30f4b90() {
   return (neuron0x30d2bf0()*-0.578667);
}

double NNfunction_sb_dRsR::synapse0x30f4bd0() {
   return (neuron0x30d2f30()*-0.0398722);
}

double NNfunction_sb_dRsR::synapse0x30f4c10() {
   return (neuron0x30d3270()*-0.253122);
}

double NNfunction_sb_dRsR::synapse0x30f4c50() {
   return (neuron0x30d35b0()*0.168929);
}

double NNfunction_sb_dRsR::synapse0x30f4c90() {
   return (neuron0x30d38f0()*0.61877);
}

double NNfunction_sb_dRsR::synapse0x30f4cd0() {
   return (neuron0x30d3c30()*0.648023);
}

double NNfunction_sb_dRsR::synapse0x30f4d10() {
   return (neuron0x30d3f70()*-0.543929);
}

double NNfunction_sb_dRsR::synapse0x30f4d50() {
   return (neuron0x30d42b0()*0.719057);
}

double NNfunction_sb_dRsR::synapse0x30f4d90() {
   return (neuron0x30d45f0()*0.279367);
}

double NNfunction_sb_dRsR::synapse0x30f4dd0() {
   return (neuron0x30d4930()*-0.338151);
}

double NNfunction_sb_dRsR::synapse0x30f4e10() {
   return (neuron0x30d4c70()*0.228365);
}

double NNfunction_sb_dRsR::synapse0x30f4e50() {
   return (neuron0x30d4fb0()*0.479279);
}

double NNfunction_sb_dRsR::synapse0x30f4e90() {
   return (neuron0x30d52f0()*0.251415);
}

double NNfunction_sb_dRsR::synapse0x30f4ed0() {
   return (neuron0x30d5630()*-0.270366);
}

double NNfunction_sb_dRsR::synapse0x30f4960() {
   return (neuron0x30d5970()*-0.537112);
}

double NNfunction_sb_dRsR::synapse0x30f49a0() {
   return (neuron0x30d5ed0()*0.785214);
}

double NNfunction_sb_dRsR::synapse0x30f5020() {
   return (neuron0x30d60f0()*-0.298132);
}

double NNfunction_sb_dRsR::synapse0x30f5060() {
   return (neuron0x30d6430()*-0.73293);
}

double NNfunction_sb_dRsR::synapse0x30f50a0() {
   return (neuron0x30d6770()*1.12345);
}

double NNfunction_sb_dRsR::synapse0x30f50e0() {
   return (neuron0x30d6ab0()*1.07673);
}

double NNfunction_sb_dRsR::synapse0x30f5120() {
   return (neuron0x30d6df0()*0.0881292);
}

double NNfunction_sb_dRsR::synapse0x30f5160() {
   return (neuron0x30d7130()*0.0546248);
}

double NNfunction_sb_dRsR::synapse0x30f54e0() {
   return (neuron0x30d2570()*0.565975);
}

double NNfunction_sb_dRsR::synapse0x30f5520() {
   return (neuron0x30d28b0()*0.000956594);
}

double NNfunction_sb_dRsR::synapse0x30f5560() {
   return (neuron0x30d2bf0()*-0.528376);
}

double NNfunction_sb_dRsR::synapse0x30f55a0() {
   return (neuron0x30d2f30()*-0.497605);
}

double NNfunction_sb_dRsR::synapse0x30f55e0() {
   return (neuron0x30d3270()*-0.439615);
}

double NNfunction_sb_dRsR::synapse0x30f5620() {
   return (neuron0x30d35b0()*-0.260313);
}

double NNfunction_sb_dRsR::synapse0x30f5660() {
   return (neuron0x30d38f0()*-0.0777664);
}

double NNfunction_sb_dRsR::synapse0x30f56a0() {
   return (neuron0x30d3c30()*-0.170825);
}

double NNfunction_sb_dRsR::synapse0x30f56e0() {
   return (neuron0x30d3f70()*-0.306797);
}

double NNfunction_sb_dRsR::synapse0x30f5720() {
   return (neuron0x30d42b0()*-0.233369);
}

double NNfunction_sb_dRsR::synapse0x30f5760() {
   return (neuron0x30d45f0()*0.313361);
}

double NNfunction_sb_dRsR::synapse0x30f57a0() {
   return (neuron0x30d4930()*-0.738378);
}

double NNfunction_sb_dRsR::synapse0x30f57e0() {
   return (neuron0x30d4c70()*0.157917);
}

double NNfunction_sb_dRsR::synapse0x30f5820() {
   return (neuron0x30d4fb0()*-0.0584866);
}

double NNfunction_sb_dRsR::synapse0x30f5860() {
   return (neuron0x30d52f0()*1.23766);
}

double NNfunction_sb_dRsR::synapse0x30f58a0() {
   return (neuron0x30d5630()*0.248101);
}

double NNfunction_sb_dRsR::synapse0x30f5330() {
   return (neuron0x30d5970()*-0.00801483);
}

double NNfunction_sb_dRsR::synapse0x30f5370() {
   return (neuron0x30d5ed0()*1.06185);
}

double NNfunction_sb_dRsR::synapse0x30e5ea0() {
   return (neuron0x30d60f0()*1.1142);
}

double NNfunction_sb_dRsR::synapse0x30e5ee0() {
   return (neuron0x30d6430()*-0.27575);
}

double NNfunction_sb_dRsR::synapse0x30e5f20() {
   return (neuron0x30d6770()*-0.160598);
}

double NNfunction_sb_dRsR::synapse0x30e5f60() {
   return (neuron0x30d6ab0()*-0.842036);
}

double NNfunction_sb_dRsR::synapse0x30e5fa0() {
   return (neuron0x30d6df0()*-0.300963);
}

double NNfunction_sb_dRsR::synapse0x30e5fe0() {
   return (neuron0x30d7130()*-0.264069);
}

double NNfunction_sb_dRsR::synapse0x30e6360() {
   return (neuron0x30d2570()*-0.00157801);
}

double NNfunction_sb_dRsR::synapse0x30e63a0() {
   return (neuron0x30d28b0()*-0.0351759);
}

double NNfunction_sb_dRsR::synapse0x30e63e0() {
   return (neuron0x30d2bf0()*-0.00440384);
}

double NNfunction_sb_dRsR::synapse0x30e6420() {
   return (neuron0x30d2f30()*3.87321);
}

double NNfunction_sb_dRsR::synapse0x30e6460() {
   return (neuron0x30d3270()*0.0269966);
}

double NNfunction_sb_dRsR::synapse0x30e64a0() {
   return (neuron0x30d35b0()*0.0228709);
}

double NNfunction_sb_dRsR::synapse0x30e64e0() {
   return (neuron0x30d38f0()*0.00406662);
}

double NNfunction_sb_dRsR::synapse0x30e6520() {
   return (neuron0x30d3c30()*-0.00239805);
}

double NNfunction_sb_dRsR::synapse0x30e6560() {
   return (neuron0x30d3f70()*-0.0145515);
}

double NNfunction_sb_dRsR::synapse0x30e65a0() {
   return (neuron0x30d42b0()*0.00264853);
}

double NNfunction_sb_dRsR::synapse0x30e65e0() {
   return (neuron0x30d45f0()*0.003898);
}

double NNfunction_sb_dRsR::synapse0x30e6620() {
   return (neuron0x30d4930()*-0.00157547);
}

double NNfunction_sb_dRsR::synapse0x30e6660() {
   return (neuron0x30d4c70()*0.0223565);
}

double NNfunction_sb_dRsR::synapse0x30e66a0() {
   return (neuron0x30d4fb0()*0.000630232);
}

double NNfunction_sb_dRsR::synapse0x30e66e0() {
   return (neuron0x30d52f0()*-0.0228089);
}

double NNfunction_sb_dRsR::synapse0x30e6720() {
   return (neuron0x30d5630()*0.00403243);
}

double NNfunction_sb_dRsR::synapse0x30e61b0() {
   return (neuron0x30d5970()*0.00730218);
}

double NNfunction_sb_dRsR::synapse0x30e61f0() {
   return (neuron0x30d5ed0()*-0.325782);
}

double NNfunction_sb_dRsR::synapse0x30e6870() {
   return (neuron0x30d60f0()*-0.260068);
}

double NNfunction_sb_dRsR::synapse0x30e68b0() {
   return (neuron0x30d6430()*-0.000505024);
}

double NNfunction_sb_dRsR::synapse0x30e68f0() {
   return (neuron0x30d6770()*0.000907278);
}

double NNfunction_sb_dRsR::synapse0x30e6930() {
   return (neuron0x30d6ab0()*0.0105657);
}

double NNfunction_sb_dRsR::synapse0x30e6970() {
   return (neuron0x30d6df0()*-0.00958972);
}

double NNfunction_sb_dRsR::synapse0x30e69b0() {
   return (neuron0x30d7130()*0.000731729);
}

double NNfunction_sb_dRsR::synapse0x30e6d30() {
   return (neuron0x30d2570()*-0.017317);
}

double NNfunction_sb_dRsR::synapse0x30e6d70() {
   return (neuron0x30d28b0()*0.0325588);
}

double NNfunction_sb_dRsR::synapse0x30e6db0() {
   return (neuron0x30d2bf0()*-0.00870801);
}

double NNfunction_sb_dRsR::synapse0x30e6df0() {
   return (neuron0x30d2f30()*10.8974);
}

double NNfunction_sb_dRsR::synapse0x30e6e30() {
   return (neuron0x30d3270()*-0.0525367);
}

double NNfunction_sb_dRsR::synapse0x30e6e70() {
   return (neuron0x30d35b0()*-0.00850029);
}

double NNfunction_sb_dRsR::synapse0x30e6eb0() {
   return (neuron0x30d38f0()*-0.0405021);
}

double NNfunction_sb_dRsR::synapse0x30e6ef0() {
   return (neuron0x30d3c30()*-0.00875307);
}

double NNfunction_sb_dRsR::synapse0x30e6f30() {
   return (neuron0x30d3f70()*0.029954);
}

double NNfunction_sb_dRsR::synapse0x30e6f70() {
   return (neuron0x30d42b0()*0.0504327);
}

double NNfunction_sb_dRsR::synapse0x30e6fb0() {
   return (neuron0x30d45f0()*0.0199277);
}

double NNfunction_sb_dRsR::synapse0x30e6ff0() {
   return (neuron0x30d4930()*0.0022832);
}

double NNfunction_sb_dRsR::synapse0x30e7030() {
   return (neuron0x30d4c70()*0.00796357);
}

double NNfunction_sb_dRsR::synapse0x30e7070() {
   return (neuron0x30d4fb0()*0.00156263);
}

double NNfunction_sb_dRsR::synapse0x30e70b0() {
   return (neuron0x30d52f0()*-0.0157063);
}

double NNfunction_sb_dRsR::synapse0x30e70f0() {
   return (neuron0x30d5630()*-0.0208306);
}

double NNfunction_sb_dRsR::synapse0x30e6b80() {
   return (neuron0x30d5970()*0.0273147);
}

double NNfunction_sb_dRsR::synapse0x30e6bc0() {
   return (neuron0x30d5ed0()*0.280316);
}

double NNfunction_sb_dRsR::synapse0x30e7240() {
   return (neuron0x30d60f0()*0.280808);
}

double NNfunction_sb_dRsR::synapse0x30e7280() {
   return (neuron0x30d6430()*0.0670605);
}

double NNfunction_sb_dRsR::synapse0x30e72c0() {
   return (neuron0x30d6770()*-0.0294382);
}

double NNfunction_sb_dRsR::synapse0x30e7300() {
   return (neuron0x30d6ab0()*-0.0167791);
}

double NNfunction_sb_dRsR::synapse0x30e7340() {
   return (neuron0x30d6df0()*-0.00936537);
}

double NNfunction_sb_dRsR::synapse0x30e7380() {
   return (neuron0x30d7130()*0.00820378);
}

double NNfunction_sb_dRsR::synapse0x30e7700() {
   return (neuron0x30d2570()*0.00386065);
}

double NNfunction_sb_dRsR::synapse0x30e7740() {
   return (neuron0x30d28b0()*0.0347062);
}

double NNfunction_sb_dRsR::synapse0x30e7780() {
   return (neuron0x30d2bf0()*0.0127347);
}

double NNfunction_sb_dRsR::synapse0x30e77c0() {
   return (neuron0x30d2f30()*2.33705);
}

double NNfunction_sb_dRsR::synapse0x30e7800() {
   return (neuron0x30d3270()*-0.011172);
}

double NNfunction_sb_dRsR::synapse0x30e7840() {
   return (neuron0x30d35b0()*-0.011588);
}

double NNfunction_sb_dRsR::synapse0x30e7880() {
   return (neuron0x30d38f0()*0.00435654);
}

double NNfunction_sb_dRsR::synapse0x30e78c0() {
   return (neuron0x30d3c30()*-0.00458858);
}

double NNfunction_sb_dRsR::synapse0x30e7900() {
   return (neuron0x30d3f70()*0.0093591);
}

double NNfunction_sb_dRsR::synapse0x30e7940() {
   return (neuron0x30d42b0()*-0.00461527);
}

double NNfunction_sb_dRsR::synapse0x30e7980() {
   return (neuron0x30d45f0()*-0.0011707);
}

double NNfunction_sb_dRsR::synapse0x30e79c0() {
   return (neuron0x30d4930()*-0.00980302);
}

double NNfunction_sb_dRsR::synapse0x30e7a00() {
   return (neuron0x30d4c70()*-0.0138763);
}

double NNfunction_sb_dRsR::synapse0x30e7a40() {
   return (neuron0x30d4fb0()*0.00421795);
}

double NNfunction_sb_dRsR::synapse0x30e7a80() {
   return (neuron0x30d52f0()*0.0270689);
}

double NNfunction_sb_dRsR::synapse0x30e7ac0() {
   return (neuron0x30d5630()*-0.00784398);
}

double NNfunction_sb_dRsR::synapse0x30e7550() {
   return (neuron0x30d5970()*-0.00524036);
}

double NNfunction_sb_dRsR::synapse0x30e7590() {
   return (neuron0x30d5ed0()*0.185615);
}

double NNfunction_sb_dRsR::synapse0x30e7c10() {
   return (neuron0x30d60f0()*0.169771);
}

double NNfunction_sb_dRsR::synapse0x30e7c50() {
   return (neuron0x30d6430()*0.00876012);
}

double NNfunction_sb_dRsR::synapse0x30e7c90() {
   return (neuron0x30d6770()*-0.00505033);
}

double NNfunction_sb_dRsR::synapse0x30e7cd0() {
   return (neuron0x30d6ab0()*-0.0104755);
}

double NNfunction_sb_dRsR::synapse0x30e7d10() {
   return (neuron0x30d6df0()*0.0106341);
}

double NNfunction_sb_dRsR::synapse0x30e7d50() {
   return (neuron0x30d7130()*0.000722512);
}

double NNfunction_sb_dRsR::synapse0x30f9c20() {
   return (neuron0x30d2570()*-0.182103);
}

double NNfunction_sb_dRsR::synapse0x30f9c60() {
   return (neuron0x30d28b0()*0.177506);
}

double NNfunction_sb_dRsR::synapse0x30f9ca0() {
   return (neuron0x30d2bf0()*1.05678);
}

double NNfunction_sb_dRsR::synapse0x30f9ce0() {
   return (neuron0x30d2f30()*-0.365853);
}

double NNfunction_sb_dRsR::synapse0x30f9d20() {
   return (neuron0x30d3270()*-0.0140662);
}

double NNfunction_sb_dRsR::synapse0x30f9d60() {
   return (neuron0x30d35b0()*-0.309348);
}

double NNfunction_sb_dRsR::synapse0x30f9da0() {
   return (neuron0x30d38f0()*0.256842);
}

double NNfunction_sb_dRsR::synapse0x30f9de0() {
   return (neuron0x30d3c30()*0.783751);
}

double NNfunction_sb_dRsR::synapse0x30f9e20() {
   return (neuron0x30d3f70()*0.679663);
}

double NNfunction_sb_dRsR::synapse0x30f9e60() {
   return (neuron0x30d42b0()*-0.24912);
}

double NNfunction_sb_dRsR::synapse0x30f9ea0() {
   return (neuron0x30d45f0()*0.376864);
}

double NNfunction_sb_dRsR::synapse0x30f9ee0() {
   return (neuron0x30d4930()*-0.787798);
}

double NNfunction_sb_dRsR::synapse0x30f9f20() {
   return (neuron0x30d4c70()*0.184123);
}

double NNfunction_sb_dRsR::synapse0x30f9f60() {
   return (neuron0x30d4fb0()*0.364748);
}

double NNfunction_sb_dRsR::synapse0x30f9fa0() {
   return (neuron0x30d52f0()*-0.852988);
}

double NNfunction_sb_dRsR::synapse0x30f9fe0() {
   return (neuron0x30d5630()*0.0816835);
}

double NNfunction_sb_dRsR::synapse0x30e7d90() {
   return (neuron0x30d5970()*0.500734);
}

double NNfunction_sb_dRsR::synapse0x30e7dd0() {
   return (neuron0x30d5ed0()*-0.303871);
}

double NNfunction_sb_dRsR::synapse0x30fa130() {
   return (neuron0x30d60f0()*0.302122);
}

double NNfunction_sb_dRsR::synapse0x30fa170() {
   return (neuron0x30d6430()*0.641975);
}

double NNfunction_sb_dRsR::synapse0x30fa1b0() {
   return (neuron0x30d6770()*0.0458692);
}

double NNfunction_sb_dRsR::synapse0x30fa1f0() {
   return (neuron0x30d6ab0()*-0.328542);
}

double NNfunction_sb_dRsR::synapse0x30fa230() {
   return (neuron0x30d6df0()*-0.575177);
}

double NNfunction_sb_dRsR::synapse0x30fa270() {
   return (neuron0x30d7130()*0.785299);
}

double NNfunction_sb_dRsR::synapse0x30fa5f0() {
   return (neuron0x30d2570()*-0.20257);
}

double NNfunction_sb_dRsR::synapse0x30fa630() {
   return (neuron0x30d28b0()*1.28918);
}

double NNfunction_sb_dRsR::synapse0x30fa670() {
   return (neuron0x30d2bf0()*0.623706);
}

double NNfunction_sb_dRsR::synapse0x30fa6b0() {
   return (neuron0x30d2f30()*-0.316683);
}

double NNfunction_sb_dRsR::synapse0x30fa6f0() {
   return (neuron0x30d3270()*-0.366131);
}

double NNfunction_sb_dRsR::synapse0x30fa730() {
   return (neuron0x30d35b0()*0.0630671);
}

double NNfunction_sb_dRsR::synapse0x30fa770() {
   return (neuron0x30d38f0()*-0.324031);
}

double NNfunction_sb_dRsR::synapse0x30fa7b0() {
   return (neuron0x30d3c30()*0.161575);
}

double NNfunction_sb_dRsR::synapse0x30fa7f0() {
   return (neuron0x30d3f70()*-0.376928);
}

double NNfunction_sb_dRsR::synapse0x30fa830() {
   return (neuron0x30d42b0()*1.39419);
}

double NNfunction_sb_dRsR::synapse0x30fa870() {
   return (neuron0x30d45f0()*-0.050876);
}

double NNfunction_sb_dRsR::synapse0x30fa8b0() {
   return (neuron0x30d4930()*-0.408846);
}

double NNfunction_sb_dRsR::synapse0x30fa8f0() {
   return (neuron0x30d4c70()*-0.410195);
}

double NNfunction_sb_dRsR::synapse0x30fa930() {
   return (neuron0x30d4fb0()*-0.464373);
}

double NNfunction_sb_dRsR::synapse0x30fa970() {
   return (neuron0x30d52f0()*-0.445132);
}

double NNfunction_sb_dRsR::synapse0x30fa9b0() {
   return (neuron0x30d5630()*-0.104586);
}

double NNfunction_sb_dRsR::synapse0x30fa440() {
   return (neuron0x30d5970()*-0.662369);
}

double NNfunction_sb_dRsR::synapse0x30fa480() {
   return (neuron0x30d5ed0()*0.342519);
}

double NNfunction_sb_dRsR::synapse0x30fab00() {
   return (neuron0x30d60f0()*0.580642);
}

double NNfunction_sb_dRsR::synapse0x30fab40() {
   return (neuron0x30d6430()*0.10392);
}

double NNfunction_sb_dRsR::synapse0x30fab80() {
   return (neuron0x30d6770()*-1.02117);
}

double NNfunction_sb_dRsR::synapse0x30fabc0() {
   return (neuron0x30d6ab0()*0.235084);
}

double NNfunction_sb_dRsR::synapse0x30fac00() {
   return (neuron0x30d6df0()*1.25757);
}

double NNfunction_sb_dRsR::synapse0x30fac40() {
   return (neuron0x30d7130()*-0.0569005);
}

double NNfunction_sb_dRsR::synapse0x30fafc0() {
   return (neuron0x30d2570()*0.0401969);
}

double NNfunction_sb_dRsR::synapse0x30fb000() {
   return (neuron0x30d28b0()*-0.136807);
}

double NNfunction_sb_dRsR::synapse0x30fb040() {
   return (neuron0x30d2bf0()*-0.0495651);
}

double NNfunction_sb_dRsR::synapse0x30fb080() {
   return (neuron0x30d2f30()*3.02436);
}

double NNfunction_sb_dRsR::synapse0x30fb0c0() {
   return (neuron0x30d3270()*-0.134221);
}

double NNfunction_sb_dRsR::synapse0x30fb100() {
   return (neuron0x30d35b0()*-0.0412544);
}

double NNfunction_sb_dRsR::synapse0x30fb140() {
   return (neuron0x30d38f0()*-0.0743738);
}

double NNfunction_sb_dRsR::synapse0x30fb180() {
   return (neuron0x30d3c30()*0.0869784);
}

double NNfunction_sb_dRsR::synapse0x30fb1c0() {
   return (neuron0x30d3f70()*0.00468787);
}

double NNfunction_sb_dRsR::synapse0x30fb200() {
   return (neuron0x30d42b0()*0.0253481);
}

double NNfunction_sb_dRsR::synapse0x30fb240() {
   return (neuron0x30d45f0()*-0.122147);
}

double NNfunction_sb_dRsR::synapse0x30fb280() {
   return (neuron0x30d4930()*-0.154442);
}

double NNfunction_sb_dRsR::synapse0x30fb2c0() {
   return (neuron0x30d4c70()*-0.161736);
}

double NNfunction_sb_dRsR::synapse0x30fb300() {
   return (neuron0x30d4fb0()*0.0110556);
}

double NNfunction_sb_dRsR::synapse0x30fb340() {
   return (neuron0x30d52f0()*-0.0803567);
}

double NNfunction_sb_dRsR::synapse0x30fb380() {
   return (neuron0x30d5630()*0.0825309);
}

double NNfunction_sb_dRsR::synapse0x30fae10() {
   return (neuron0x30d5970()*0.00613108);
}

double NNfunction_sb_dRsR::synapse0x30fae50() {
   return (neuron0x30d5ed0()*-0.252695);
}

double NNfunction_sb_dRsR::synapse0x30fb4d0() {
   return (neuron0x30d60f0()*-0.00230122);
}

double NNfunction_sb_dRsR::synapse0x30fb510() {
   return (neuron0x30d6430()*-0.0149267);
}

double NNfunction_sb_dRsR::synapse0x30fb550() {
   return (neuron0x30d6770()*0.0168906);
}

double NNfunction_sb_dRsR::synapse0x30fb590() {
   return (neuron0x30d6ab0()*-0.060501);
}

double NNfunction_sb_dRsR::synapse0x30fb5d0() {
   return (neuron0x30d6df0()*-0.120211);
}

double NNfunction_sb_dRsR::synapse0x30fb610() {
   return (neuron0x30d7130()*0.0243245);
}

double NNfunction_sb_dRsR::synapse0x30fb990() {
   return (neuron0x30d2570()*0.409921);
}

double NNfunction_sb_dRsR::synapse0x30fb9d0() {
   return (neuron0x30d28b0()*-0.415604);
}

double NNfunction_sb_dRsR::synapse0x30fba10() {
   return (neuron0x30d2bf0()*-0.099688);
}

double NNfunction_sb_dRsR::synapse0x30fba50() {
   return (neuron0x30d2f30()*-1.76857);
}

double NNfunction_sb_dRsR::synapse0x30fba90() {
   return (neuron0x30d3270()*-0.158299);
}

double NNfunction_sb_dRsR::synapse0x30fbad0() {
   return (neuron0x30d35b0()*0.0722955);
}

double NNfunction_sb_dRsR::synapse0x30fbb10() {
   return (neuron0x30d38f0()*-0.184456);
}

double NNfunction_sb_dRsR::synapse0x30fbb50() {
   return (neuron0x30d3c30()*-0.0223936);
}

double NNfunction_sb_dRsR::synapse0x30fbb90() {
   return (neuron0x30d3f70()*-0.0607931);
}

double NNfunction_sb_dRsR::synapse0x30fbbd0() {
   return (neuron0x30d42b0()*-0.552349);
}

double NNfunction_sb_dRsR::synapse0x30fbc10() {
   return (neuron0x30d45f0()*-0.167202);
}

double NNfunction_sb_dRsR::synapse0x30fbc50() {
   return (neuron0x30d4930()*-0.285042);
}

double NNfunction_sb_dRsR::synapse0x30fbc90() {
   return (neuron0x30d4c70()*-0.204774);
}

double NNfunction_sb_dRsR::synapse0x30fbcd0() {
   return (neuron0x30d4fb0()*-0.20824);
}

double NNfunction_sb_dRsR::synapse0x30fbd10() {
   return (neuron0x30d52f0()*-0.195585);
}

double NNfunction_sb_dRsR::synapse0x30fbd50() {
   return (neuron0x30d5630()*0.127846);
}

double NNfunction_sb_dRsR::synapse0x30fb7e0() {
   return (neuron0x30d5970()*0.0776007);
}

double NNfunction_sb_dRsR::synapse0x30fb820() {
   return (neuron0x30d5ed0()*0.583549);
}

double NNfunction_sb_dRsR::synapse0x30fbea0() {
   return (neuron0x30d60f0()*0.0307554);
}

double NNfunction_sb_dRsR::synapse0x30fbee0() {
   return (neuron0x30d6430()*-0.257541);
}

double NNfunction_sb_dRsR::synapse0x30fbf20() {
   return (neuron0x30d6770()*0.0525192);
}

double NNfunction_sb_dRsR::synapse0x30fbf60() {
   return (neuron0x30d6ab0()*-0.19935);
}

double NNfunction_sb_dRsR::synapse0x30fbfa0() {
   return (neuron0x30d6df0()*-0.745005);
}

double NNfunction_sb_dRsR::synapse0x30fbfe0() {
   return (neuron0x30d7130()*0.127406);
}

double NNfunction_sb_dRsR::synapse0x30d8580() {
   return (neuron0x30d75d0()*-0.406304);
}

double NNfunction_sb_dRsR::synapse0x30d85c0() {
   return (neuron0x30d7ee0()*-0.0596049);
}

double NNfunction_sb_dRsR::synapse0x30d9a90() {
   return (neuron0x30d89c0()*-0.156482);
}

double NNfunction_sb_dRsR::synapse0x30d9ad0() {
   return (neuron0x2e92250()*0.0887989);
}

double NNfunction_sb_dRsR::synapse0x30da460() {
   return (neuron0x30d97e0()*2.14823);
}

double NNfunction_sb_dRsR::synapse0x30da4a0() {
   return (neuron0x30da1b0()*0.520754);
}

double NNfunction_sb_dRsR::synapse0x30db230() {
   return (neuron0x30daf80()*0.143998);
}

double NNfunction_sb_dRsR::synapse0x30db270() {
   return (neuron0x30db950()*0.0878471);
}

double NNfunction_sb_dRsR::synapse0x30dbc00() {
   return (neuron0x30dc320()*0.223194);
}

double NNfunction_sb_dRsR::synapse0x30dbc40() {
   return (neuron0x30dce00()*0.167126);
}

double NNfunction_sb_dRsR::synapse0x30dc5d0() {
   return (neuron0x30dd7d0()*0.0236906);
}

double NNfunction_sb_dRsR::synapse0x30dc610() {
   return (neuron0x30da8b0()*1.18357);
}

double NNfunction_sb_dRsR::synapse0x30dd0b0() {
   return (neuron0x30df380()*-0.0575601);
}

double NNfunction_sb_dRsR::synapse0x30dd0f0() {
   return (neuron0x30dfd50()*-0.876911);
}

double NNfunction_sb_dRsR::synapse0x30dda80() {
   return (neuron0x30e0720()*0.289538);
}

double NNfunction_sb_dRsR::synapse0x30ddac0() {
   return (neuron0x30e10f0()*0.0628559);
}

double NNfunction_sb_dRsR::synapse0x30dab60() {
   return (neuron0x30e2f00()*1.83887);
}

double NNfunction_sb_dRsR::synapse0x30daba0() {
   return (neuron0x30e31e0()*-0.0779188);
}

double NNfunction_sb_dRsR::synapse0x30df630() {
   return (neuron0x30e3bb0()*-0.112105);
}

double NNfunction_sb_dRsR::synapse0x30df670() {
   return (neuron0x30e4580()*0.145787);
}

double NNfunction_sb_dRsR::synapse0x30e0000() {
   return (neuron0x30e4f50()*0.161391);
}

double NNfunction_sb_dRsR::synapse0x30e0040() {
   return (neuron0x30e5920()*0.0732612);
}

double NNfunction_sb_dRsR::synapse0x30e09d0() {
   return (neuron0x30de470()*-0.213141);
}

double NNfunction_sb_dRsR::synapse0x30e0a10() {
   return (neuron0x30dee40()*-0.0822029);
}

double NNfunction_sb_dRsR::synapse0x30e13a0() {
   return (neuron0x30e86b0()*0.118666);
}

double NNfunction_sb_dRsR::synapse0x30e13e0() {
   return (neuron0x30e9080()*-0.0588624);
}

double NNfunction_sb_dRsR::synapse0x30d5510() {
   return (neuron0x30e9a50()*0.117392);
}

double NNfunction_sb_dRsR::synapse0x30d5550() {
   return (neuron0x30ea420()*0.120947);
}

double NNfunction_sb_dRsR::synapse0x30e3490() {
   return (neuron0x30eadf0()*-1.12721);
}

double NNfunction_sb_dRsR::synapse0x30e34d0() {
   return (neuron0x30eb7c0()*-0.0978719);
}

double NNfunction_sb_dRsR::synapse0x30e3e60() {
   return (neuron0x30ec190()*-0.178296);
}

double NNfunction_sb_dRsR::synapse0x30e3ea0() {
   return (neuron0x30ecb60()*0.136184);
}

double NNfunction_sb_dRsR::synapse0x30e4830() {
   return (neuron0x30e2bf0()*0.00866936);
}

double NNfunction_sb_dRsR::synapse0x30e4870() {
   return (neuron0x30ef740()*-0.179326);
}

double NNfunction_sb_dRsR::synapse0x30e5200() {
   return (neuron0x30f0110()*-0.0596131);
}

double NNfunction_sb_dRsR::synapse0x30e5240() {
   return (neuron0x30f0ae0()*-1.59848);
}

double NNfunction_sb_dRsR::synapse0x30e5bd0() {
   return (neuron0x30f14b0()*-0.0535733);
}

double NNfunction_sb_dRsR::synapse0x30e5c10() {
   return (neuron0x30f1e80()*0.122931);
}

double NNfunction_sb_dRsR::synapse0x30de720() {
   return (neuron0x30f2850()*0.0836619);
}

double NNfunction_sb_dRsR::synapse0x30de760() {
   return (neuron0x30f3220()*-0.101666);
}

double NNfunction_sb_dRsR::synapse0x30e7fd0() {
   return (neuron0x30f3bf0()*-0.503727);
}

double NNfunction_sb_dRsR::synapse0x30e8010() {
   return (neuron0x30f47d0()*0.17008);
}

double NNfunction_sb_dRsR::synapse0x30e8960() {
   return (neuron0x30f51a0()*0.133585);
}

double NNfunction_sb_dRsR::synapse0x30e89a0() {
   return (neuron0x30e6020()*-2.20155);
}

double NNfunction_sb_dRsR::synapse0x30e9330() {
   return (neuron0x30e69f0()*-0.168584);
}

double NNfunction_sb_dRsR::synapse0x30e9370() {
   return (neuron0x30e73c0()*-0.789898);
}

double NNfunction_sb_dRsR::synapse0x30e9d00() {
   return (neuron0x30f9a00()*0.234775);
}

double NNfunction_sb_dRsR::synapse0x30e9d40() {
   return (neuron0x30fa2b0()*0.112952);
}

double NNfunction_sb_dRsR::synapse0x30ea6d0() {
   return (neuron0x30fac80()*1.66056);
}

double NNfunction_sb_dRsR::synapse0x30ea710() {
   return (neuron0x30fb650()*0.364776);
}

double NNfunction_sb_dRsR::synapse0x30ece10() {
   return (neuron0x30d75d0()*0.0500897);
}

double NNfunction_sb_dRsR::synapse0x30ece50() {
   return (neuron0x30d7ee0()*0.019043);
}

double NNfunction_sb_dRsR::synapse0x30e23d0() {
   return (neuron0x30d89c0()*0.0469026);
}

double NNfunction_sb_dRsR::synapse0x30e2410() {
   return (neuron0x2e92250()*-0.0288786);
}

double NNfunction_sb_dRsR::synapse0x30ef9f0() {
   return (neuron0x30d97e0()*0.0185509);
}

double NNfunction_sb_dRsR::synapse0x30efa30() {
   return (neuron0x30da1b0()*0.874463);
}

double NNfunction_sb_dRsR::synapse0x30f03c0() {
   return (neuron0x30daf80()*-0.021948);
}

double NNfunction_sb_dRsR::synapse0x30f0400() {
   return (neuron0x30db950()*-0.0234282);
}

double NNfunction_sb_dRsR::synapse0x30f0d90() {
   return (neuron0x30dc320()*-0.0640907);
}

double NNfunction_sb_dRsR::synapse0x30f0dd0() {
   return (neuron0x30dce00()*-0.0379545);
}

double NNfunction_sb_dRsR::synapse0x30f1760() {
   return (neuron0x30dd7d0()*0.0113821);
}

double NNfunction_sb_dRsR::synapse0x30f17a0() {
   return (neuron0x30da8b0()*-0.249272);
}

double NNfunction_sb_dRsR::synapse0x30f2130() {
   return (neuron0x30df380()*-0.00379435);
}

double NNfunction_sb_dRsR::synapse0x30f2170() {
   return (neuron0x30dfd50()*-1.13719);
}

double NNfunction_sb_dRsR::synapse0x30f2b00() {
   return (neuron0x30e0720()*-0.0677199);
}

double NNfunction_sb_dRsR::synapse0x30f2b40() {
   return (neuron0x30e10f0()*-0.00767489);
}

double NNfunction_sb_dRsR::synapse0x30f34d0() {
   return (neuron0x30e2f00()*1.0573);
}

double NNfunction_sb_dRsR::synapse0x30f3510() {
   return (neuron0x30e31e0()*0.00493745);
}

double NNfunction_sb_dRsR::synapse0x30f3ea0() {
   return (neuron0x30e3bb0()*0.0211923);
}

double NNfunction_sb_dRsR::synapse0x30f3ee0() {
   return (neuron0x30e4580()*-0.0392878);
}

double NNfunction_sb_dRsR::synapse0x30f4a80() {
   return (neuron0x30e4f50()*-0.0453265);
}

double NNfunction_sb_dRsR::synapse0x30f4ac0() {
   return (neuron0x30e5920()*-0.0250788);
}

double NNfunction_sb_dRsR::synapse0x30f5450() {
   return (neuron0x30de470()*0.0132032);
}

double NNfunction_sb_dRsR::synapse0x30f5490() {
   return (neuron0x30dee40()*0.0148303);
}

double NNfunction_sb_dRsR::synapse0x30e62d0() {
   return (neuron0x30e86b0()*-0.0216004);
}

double NNfunction_sb_dRsR::synapse0x30e6310() {
   return (neuron0x30e9080()*0.00366972);
}

double NNfunction_sb_dRsR::synapse0x30e6ca0() {
   return (neuron0x30e9a50()*-0.0233514);
}

double NNfunction_sb_dRsR::synapse0x30e6ce0() {
   return (neuron0x30ea420()*-0.0399311);
}

double NNfunction_sb_dRsR::synapse0x30e7670() {
   return (neuron0x30eadf0()*-0.502116);
}

double NNfunction_sb_dRsR::synapse0x30e76b0() {
   return (neuron0x30eb7c0()*0.0124425);
}

double NNfunction_sb_dRsR::synapse0x30f9b90() {
   return (neuron0x30ec190()*-1.03524);
}

double NNfunction_sb_dRsR::synapse0x30f9bd0() {
   return (neuron0x30ecb60()*0.159325);
}

double NNfunction_sb_dRsR::synapse0x30fa560() {
   return (neuron0x30e2bf0()*0.00201391);
}

double NNfunction_sb_dRsR::synapse0x30fa5a0() {
   return (neuron0x30ef740()*0.0356527);
}

double NNfunction_sb_dRsR::synapse0x30faf30() {
   return (neuron0x30f0110()*0.0102634);
}

double NNfunction_sb_dRsR::synapse0x30faf70() {
   return (neuron0x30f0ae0()*-0.253632);
}

double NNfunction_sb_dRsR::synapse0x30fb900() {
   return (neuron0x30f14b0()*0.00197582);
}

double NNfunction_sb_dRsR::synapse0x30fb940() {
   return (neuron0x30f1e80()*-0.0362613);
}

double NNfunction_sb_dRsR::synapse0x30d77f0() {
   return (neuron0x30f2850()*0.690606);
}

double NNfunction_sb_dRsR::synapse0x30d7830() {
   return (neuron0x30f3220()*0.0259571);
}

double NNfunction_sb_dRsR::synapse0x30eb0a0() {
   return (neuron0x30f3bf0()*-0.653199);
}

double NNfunction_sb_dRsR::synapse0x30eb0e0() {
   return (neuron0x30f47d0()*-0.0281942);
}

double NNfunction_sb_dRsR::synapse0x30fc020() {
   return (neuron0x30f51a0()*-0.0453768);
}

double NNfunction_sb_dRsR::synapse0x30fc060() {
   return (neuron0x30e6020()*-0.739987);
}

double NNfunction_sb_dRsR::synapse0x30fc0a0() {
   return (neuron0x30e69f0()*0.526951);
}

double NNfunction_sb_dRsR::synapse0x30fc0e0() {
   return (neuron0x30e73c0()*2.11877);
}

double NNfunction_sb_dRsR::synapse0x3102f90() {
   return (neuron0x30f9a00()*-0.0486144);
}

double NNfunction_sb_dRsR::synapse0x3102fd0() {
   return (neuron0x30fa2b0()*-0.0308733);
}

double NNfunction_sb_dRsR::synapse0x3103010() {
   return (neuron0x30fac80()*0.15698);
}

double NNfunction_sb_dRsR::synapse0x3103050() {
   return (neuron0x30fb650()*-0.0476511);
}

double NNfunction_sb_dRsR::synapse0x31033d0() {
   return (neuron0x30d75d0()*-1.75903);
}

double NNfunction_sb_dRsR::synapse0x3103410() {
   return (neuron0x30d7ee0()*-0.387847);
}

double NNfunction_sb_dRsR::synapse0x3103450() {
   return (neuron0x30d89c0()*2.16993);
}

double NNfunction_sb_dRsR::synapse0x3103490() {
   return (neuron0x2e92250()*-0.13453);
}

double NNfunction_sb_dRsR::synapse0x31034d0() {
   return (neuron0x30d97e0()*2.42898);
}

double NNfunction_sb_dRsR::synapse0x3103510() {
   return (neuron0x30da1b0()*-1.51489);
}

double NNfunction_sb_dRsR::synapse0x3103550() {
   return (neuron0x30daf80()*-1.0852);
}

double NNfunction_sb_dRsR::synapse0x3103590() {
   return (neuron0x30db950()*0.895107);
}

double NNfunction_sb_dRsR::synapse0x31035d0() {
   return (neuron0x30dc320()*1.80775);
}

double NNfunction_sb_dRsR::synapse0x3103610() {
   return (neuron0x30dce00()*-2.16247);
}

double NNfunction_sb_dRsR::synapse0x3103650() {
   return (neuron0x30dd7d0()*-1.0459);
}

double NNfunction_sb_dRsR::synapse0x3103690() {
   return (neuron0x30da8b0()*2.41242);
}

double NNfunction_sb_dRsR::synapse0x31036d0() {
   return (neuron0x30df380()*0.322205);
}

double NNfunction_sb_dRsR::synapse0x3103710() {
   return (neuron0x30dfd50()*-2.03583);
}

double NNfunction_sb_dRsR::synapse0x3103750() {
   return (neuron0x30e0720()*-1.07235);
}

double NNfunction_sb_dRsR::synapse0x3103790() {
   return (neuron0x30e10f0()*1.17292);
}

double NNfunction_sb_dRsR::synapse0x3103220() {
   return (neuron0x30e2f00()*1.22986);
}

double NNfunction_sb_dRsR::synapse0x3103260() {
   return (neuron0x30e31e0()*0.263504);
}

double NNfunction_sb_dRsR::synapse0x31038e0() {
   return (neuron0x30e3bb0()*1.52673);
}

double NNfunction_sb_dRsR::synapse0x3103920() {
   return (neuron0x30e4580()*0.632893);
}

double NNfunction_sb_dRsR::synapse0x3103960() {
   return (neuron0x30e4f50()*-1.95922);
}

double NNfunction_sb_dRsR::synapse0x31039a0() {
   return (neuron0x30e5920()*-1.51041);
}

double NNfunction_sb_dRsR::synapse0x31039e0() {
   return (neuron0x30de470()*0.651625);
}

double NNfunction_sb_dRsR::synapse0x3103a20() {
   return (neuron0x30dee40()*1.51014);
}

double NNfunction_sb_dRsR::synapse0x3103a60() {
   return (neuron0x30e86b0()*-1.38603);
}

double NNfunction_sb_dRsR::synapse0x3103aa0() {
   return (neuron0x30e9080()*2.36699);
}

double NNfunction_sb_dRsR::synapse0x3103ae0() {
   return (neuron0x30e9a50()*-0.242742);
}

double NNfunction_sb_dRsR::synapse0x3103b20() {
   return (neuron0x30ea420()*-1.79502);
}

double NNfunction_sb_dRsR::synapse0x3103b60() {
   return (neuron0x30eadf0()*-2.79624);
}

double NNfunction_sb_dRsR::synapse0x3103ba0() {
   return (neuron0x30eb7c0()*2.07026);
}

double NNfunction_sb_dRsR::synapse0x3103be0() {
   return (neuron0x30ec190()*-2.39728);
}

double NNfunction_sb_dRsR::synapse0x3103c20() {
   return (neuron0x30ecb60()*1.10235);
}

double NNfunction_sb_dRsR::synapse0x31037d0() {
   return (neuron0x30e2bf0()*-1.38405);
}

double NNfunction_sb_dRsR::synapse0x3103810() {
   return (neuron0x30ef740()*1.5076);
}

double NNfunction_sb_dRsR::synapse0x3103850() {
   return (neuron0x30f0110()*1.88523);
}

double NNfunction_sb_dRsR::synapse0x3103890() {
   return (neuron0x30f0ae0()*-0.779997);
}

double NNfunction_sb_dRsR::synapse0x3103e70() {
   return (neuron0x30f14b0()*-0.880975);
}

double NNfunction_sb_dRsR::synapse0x3103eb0() {
   return (neuron0x30f1e80()*1.2912);
}

double NNfunction_sb_dRsR::synapse0x3103ef0() {
   return (neuron0x30f2850()*2.09615);
}

double NNfunction_sb_dRsR::synapse0x3103f30() {
   return (neuron0x30f3220()*-0.475987);
}

double NNfunction_sb_dRsR::synapse0x3103f70() {
   return (neuron0x30f3bf0()*-2.56207);
}

double NNfunction_sb_dRsR::synapse0x3103fb0() {
   return (neuron0x30f47d0()*-1.65875);
}

double NNfunction_sb_dRsR::synapse0x3103ff0() {
   return (neuron0x30f51a0()*1.3348);
}

double NNfunction_sb_dRsR::synapse0x3104030() {
   return (neuron0x30e6020()*-3.42485);
}

double NNfunction_sb_dRsR::synapse0x3104070() {
   return (neuron0x30e69f0()*2.81524);
}

double NNfunction_sb_dRsR::synapse0x31040b0() {
   return (neuron0x30e73c0()*-0.138307);
}

double NNfunction_sb_dRsR::synapse0x31040f0() {
   return (neuron0x30f9a00()*-1.48769);
}

double NNfunction_sb_dRsR::synapse0x3104130() {
   return (neuron0x30fa2b0()*-0.886076);
}

double NNfunction_sb_dRsR::synapse0x3104170() {
   return (neuron0x30fac80()*5.72346);
}

double NNfunction_sb_dRsR::synapse0x31041b0() {
   return (neuron0x30fb650()*-2.83432);
}

double NNfunction_sb_dRsR::synapse0x3104530() {
   return (neuron0x30d75d0()*1.09722);
}

double NNfunction_sb_dRsR::synapse0x3104570() {
   return (neuron0x30d7ee0()*-2.74212);
}

double NNfunction_sb_dRsR::synapse0x31045b0() {
   return (neuron0x30d89c0()*0.0501155);
}

double NNfunction_sb_dRsR::synapse0x31045f0() {
   return (neuron0x2e92250()*2.2736);
}

double NNfunction_sb_dRsR::synapse0x3104630() {
   return (neuron0x30d97e0()*3.88575);
}

double NNfunction_sb_dRsR::synapse0x3104670() {
   return (neuron0x30da1b0()*-4.57654);
}

double NNfunction_sb_dRsR::synapse0x31046b0() {
   return (neuron0x30daf80()*-1.74755);
}

double NNfunction_sb_dRsR::synapse0x31046f0() {
   return (neuron0x30db950()*2.77802);
}

double NNfunction_sb_dRsR::synapse0x3104730() {
   return (neuron0x30dc320()*2.13054);
}

double NNfunction_sb_dRsR::synapse0x3104770() {
   return (neuron0x30dce00()*-0.219802);
}

double NNfunction_sb_dRsR::synapse0x31047b0() {
   return (neuron0x30dd7d0()*-2.29934);
}

double NNfunction_sb_dRsR::synapse0x31047f0() {
   return (neuron0x30da8b0()*-0.114623);
}

double NNfunction_sb_dRsR::synapse0x3104830() {
   return (neuron0x30df380()*1.81931);
}

double NNfunction_sb_dRsR::synapse0x3104870() {
   return (neuron0x30dfd50()*-0.865134);
}

double NNfunction_sb_dRsR::synapse0x31048b0() {
   return (neuron0x30e0720()*2.41539);
}

double NNfunction_sb_dRsR::synapse0x31048f0() {
   return (neuron0x30e10f0()*-2.09335);
}

double NNfunction_sb_dRsR::synapse0x3104380() {
   return (neuron0x30e2f00()*1.28409);
}

double NNfunction_sb_dRsR::synapse0x31043c0() {
   return (neuron0x30e31e0()*1.7213);
}

double NNfunction_sb_dRsR::synapse0x3104a40() {
   return (neuron0x30e3bb0()*-0.714142);
}

double NNfunction_sb_dRsR::synapse0x3104a80() {
   return (neuron0x30e4580()*1.4849);
}

double NNfunction_sb_dRsR::synapse0x3104ac0() {
   return (neuron0x30e4f50()*1.35081);
}

double NNfunction_sb_dRsR::synapse0x3104b00() {
   return (neuron0x30e5920()*1.92001);
}

double NNfunction_sb_dRsR::synapse0x3104b40() {
   return (neuron0x30de470()*2.54556);
}

double NNfunction_sb_dRsR::synapse0x3104b80() {
   return (neuron0x30dee40()*-1.7155);
}

double NNfunction_sb_dRsR::synapse0x3104bc0() {
   return (neuron0x30e86b0()*0.585905);
}

double NNfunction_sb_dRsR::synapse0x3104c00() {
   return (neuron0x30e9080()*-1.00078);
}

double NNfunction_sb_dRsR::synapse0x3104c40() {
   return (neuron0x30e9a50()*-2.15961);
}

double NNfunction_sb_dRsR::synapse0x3104c80() {
   return (neuron0x30ea420()*1.76307);
}

double NNfunction_sb_dRsR::synapse0x3104cc0() {
   return (neuron0x30eadf0()*-6.6818);
}

double NNfunction_sb_dRsR::synapse0x3104d00() {
   return (neuron0x30eb7c0()*0.027338);
}

double NNfunction_sb_dRsR::synapse0x3104d40() {
   return (neuron0x30ec190()*0.656899);
}

double NNfunction_sb_dRsR::synapse0x3104d80() {
   return (neuron0x30ecb60()*-1.4125);
}

double NNfunction_sb_dRsR::synapse0x3104930() {
   return (neuron0x30e2bf0()*1.52538);
}

double NNfunction_sb_dRsR::synapse0x3104970() {
   return (neuron0x30ef740()*-1.09708);
}

double NNfunction_sb_dRsR::synapse0x31049b0() {
   return (neuron0x30f0110()*-1.55537);
}

double NNfunction_sb_dRsR::synapse0x31049f0() {
   return (neuron0x30f0ae0()*0.27423);
}

double NNfunction_sb_dRsR::synapse0x3104fd0() {
   return (neuron0x30f14b0()*1.78342);
}

double NNfunction_sb_dRsR::synapse0x3105010() {
   return (neuron0x30f1e80()*1.42888);
}

double NNfunction_sb_dRsR::synapse0x3105050() {
   return (neuron0x30f2850()*-0.369285);
}

double NNfunction_sb_dRsR::synapse0x3105090() {
   return (neuron0x30f3220()*1.86938);
}

double NNfunction_sb_dRsR::synapse0x31050d0() {
   return (neuron0x30f3bf0()*0.0239794);
}

double NNfunction_sb_dRsR::synapse0x3105110() {
   return (neuron0x30f47d0()*-0.92246);
}

double NNfunction_sb_dRsR::synapse0x3105150() {
   return (neuron0x30f51a0()*2.77014);
}

double NNfunction_sb_dRsR::synapse0x3105190() {
   return (neuron0x30e6020()*-2.75822);
}

double NNfunction_sb_dRsR::synapse0x31051d0() {
   return (neuron0x30e69f0()*9.04679);
}

double NNfunction_sb_dRsR::synapse0x3105210() {
   return (neuron0x30e73c0()*-0.740026);
}

double NNfunction_sb_dRsR::synapse0x3105250() {
   return (neuron0x30f9a00()*-1.6703);
}

double NNfunction_sb_dRsR::synapse0x3105290() {
   return (neuron0x30fa2b0()*2.04608);
}

double NNfunction_sb_dRsR::synapse0x31052d0() {
   return (neuron0x30fac80()*0.219855);
}

double NNfunction_sb_dRsR::synapse0x3105310() {
   return (neuron0x30fb650()*-0.155143);
}

double NNfunction_sb_dRsR::synapse0x3105690() {
   return (neuron0x30d75d0()*-0.00503392);
}

double NNfunction_sb_dRsR::synapse0x31056d0() {
   return (neuron0x30d7ee0()*0.0357483);
}

double NNfunction_sb_dRsR::synapse0x3105710() {
   return (neuron0x30d89c0()*0.134633);
}

double NNfunction_sb_dRsR::synapse0x3105750() {
   return (neuron0x2e92250()*-0.0249861);
}

double NNfunction_sb_dRsR::synapse0x3105790() {
   return (neuron0x30d97e0()*0.197238);
}

double NNfunction_sb_dRsR::synapse0x31057d0() {
   return (neuron0x30da1b0()*-0.444723);
}

double NNfunction_sb_dRsR::synapse0x3105810() {
   return (neuron0x30daf80()*-0.0423856);
}

double NNfunction_sb_dRsR::synapse0x3105850() {
   return (neuron0x30db950()*-0.0767313);
}

double NNfunction_sb_dRsR::synapse0x3105890() {
   return (neuron0x30dc320()*-0.116845);
}

double NNfunction_sb_dRsR::synapse0x31058d0() {
   return (neuron0x30dce00()*-0.0493752);
}

double NNfunction_sb_dRsR::synapse0x3105910() {
   return (neuron0x30dd7d0()*0.0203212);
}

double NNfunction_sb_dRsR::synapse0x3105950() {
   return (neuron0x30da8b0()*-0.496104);
}

double NNfunction_sb_dRsR::synapse0x3105990() {
   return (neuron0x30df380()*-0.0423624);
}

double NNfunction_sb_dRsR::synapse0x31059d0() {
   return (neuron0x30dfd50()*0.400348);
}

double NNfunction_sb_dRsR::synapse0x3105a10() {
   return (neuron0x30e0720()*-0.13417);
}

double NNfunction_sb_dRsR::synapse0x3105a50() {
   return (neuron0x30e10f0()*0.0163789);
}

double NNfunction_sb_dRsR::synapse0x31054e0() {
   return (neuron0x30e2f00()*-2.25889);
}

double NNfunction_sb_dRsR::synapse0x3105520() {
   return (neuron0x30e31e0()*0.0275713);
}

double NNfunction_sb_dRsR::synapse0x3105ba0() {
   return (neuron0x30e3bb0()*0.0557708);
}

double NNfunction_sb_dRsR::synapse0x3105be0() {
   return (neuron0x30e4580()*-0.0391329);
}

double NNfunction_sb_dRsR::synapse0x3105c20() {
   return (neuron0x30e4f50()*-0.0532148);
}

double NNfunction_sb_dRsR::synapse0x3105c60() {
   return (neuron0x30e5920()*-0.0692894);
}

double NNfunction_sb_dRsR::synapse0x3105ca0() {
   return (neuron0x30de470()*0.00766235);
}

double NNfunction_sb_dRsR::synapse0x3105ce0() {
   return (neuron0x30dee40()*0.0184972);
}

double NNfunction_sb_dRsR::synapse0x3105d20() {
   return (neuron0x30e86b0()*-0.0524289);
}

double NNfunction_sb_dRsR::synapse0x3105d60() {
   return (neuron0x30e9080()*0.0201186);
}

double NNfunction_sb_dRsR::synapse0x3105da0() {
   return (neuron0x30e9a50()*-0.0122128);
}

double NNfunction_sb_dRsR::synapse0x3105de0() {
   return (neuron0x30ea420()*-0.0965633);
}

double NNfunction_sb_dRsR::synapse0x3105e20() {
   return (neuron0x30eadf0()*1.39599);
}

double NNfunction_sb_dRsR::synapse0x3105e60() {
   return (neuron0x30eb7c0()*0.0412112);
}

double NNfunction_sb_dRsR::synapse0x3105ea0() {
   return (neuron0x30ec190()*-0.311137);
}

double NNfunction_sb_dRsR::synapse0x3105ee0() {
   return (neuron0x30ecb60()*1.92644);
}

double NNfunction_sb_dRsR::synapse0x3105a90() {
   return (neuron0x30e2bf0()*-0.0405054);
}

double NNfunction_sb_dRsR::synapse0x3105ad0() {
   return (neuron0x30ef740()*0.0853181);
}

double NNfunction_sb_dRsR::synapse0x3105b10() {
   return (neuron0x30f0110()*0.0595833);
}

double NNfunction_sb_dRsR::synapse0x3105b50() {
   return (neuron0x30f0ae0()*2.31924);
}

double NNfunction_sb_dRsR::synapse0x3106130() {
   return (neuron0x30f14b0()*-0.013518);
}

double NNfunction_sb_dRsR::synapse0x3106170() {
   return (neuron0x30f1e80()*-0.00815706);
}

double NNfunction_sb_dRsR::synapse0x31061b0() {
   return (neuron0x30f2850()*-0.105332);
}

double NNfunction_sb_dRsR::synapse0x31061f0() {
   return (neuron0x30f3220()*0.0105521);
}

double NNfunction_sb_dRsR::synapse0x3106230() {
   return (neuron0x30f3bf0()*0.0159907);
}

double NNfunction_sb_dRsR::synapse0x3106270() {
   return (neuron0x30f47d0()*-0.0565039);
}

double NNfunction_sb_dRsR::synapse0x31062b0() {
   return (neuron0x30f51a0()*-0.0288774);
}

double NNfunction_sb_dRsR::synapse0x31062f0() {
   return (neuron0x30e6020()*1.7785);
}

double NNfunction_sb_dRsR::synapse0x3106330() {
   return (neuron0x30e69f0()*1.2293);
}

double NNfunction_sb_dRsR::synapse0x3106370() {
   return (neuron0x30e73c0()*1.59111);
}

double NNfunction_sb_dRsR::synapse0x31063b0() {
   return (neuron0x30f9a00()*-0.0726678);
}

double NNfunction_sb_dRsR::synapse0x31063f0() {
   return (neuron0x30fa2b0()*-0.0464811);
}

double NNfunction_sb_dRsR::synapse0x3106430() {
   return (neuron0x30fac80()*-0.478314);
}

double NNfunction_sb_dRsR::synapse0x3106470() {
   return (neuron0x30fb650()*-0.0229671);
}

double NNfunction_sb_dRsR::synapse0x30d7590() {
   return (neuron0x3102850()*-2.02423);
}

double NNfunction_sb_dRsR::synapse0x31066d0() {
   return (neuron0x3102bf0()*-7.25395);
}

double NNfunction_sb_dRsR::synapse0x3106710() {
   return (neuron0x3103090()*-7.39105);
}

double NNfunction_sb_dRsR::synapse0x3106750() {
   return (neuron0x31041f0()*-6.34556);
}

double NNfunction_sb_dRsR::synapse0x3106790() {
   return (neuron0x3105350()*7.67374);
}

