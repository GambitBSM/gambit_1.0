#include "NNfunction_ss_sLdR.h"
#include <cmath>

double NNfunction_ss_sLdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5874)/15.3314;
   input1 = (in1 - 2.15146)/1152.28;
   input2 = (in2 - 667.861)/624.833;
   input3 = (in3 - -49.1375)/793.858;
   input4 = (in4 - 1037.83)/941.132;
   input5 = (in5 - 880.912)/931.469;
   input6 = (in6 - 888.697)/931.831;
   input7 = (in7 - 920.362)/925.107;
   input8 = (in8 - 925.195)/979.676;
   input9 = (in9 - 898.161)/957.696;
   input10 = (in10 - 991.756)/961.067;
   input11 = (in11 - 725.166)/873.841;
   input12 = (in12 - 372.928)/378.942;
   input13 = (in13 - 501.285)/517.109;
   input14 = (in14 - 703.771)/798.199;
   input15 = (in15 - 701.435)/798.201;
   input16 = (in16 - 531.238)/555.44;
   input17 = (in17 - 383.19)/391.882;
   input18 = (in18 - 756.668)/909.064;
   input19 = (in19 - 808.797)/883.161;
   input20 = (in20 - -6.06945)/484.079;
   input21 = (in21 - -5.35104)/1150.57;
   input22 = (in22 - -3.95609)/1207.7;
   input23 = (in23 - -204.183)/610.152;
   switch(index) {
     case 0:
         return neuron0x21134b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLdR::Value(int index, double* input) {
   input0 = (input[0] - 23.5874)/15.3314;
   input1 = (input[1] - 2.15146)/1152.28;
   input2 = (input[2] - 667.861)/624.833;
   input3 = (input[3] - -49.1375)/793.858;
   input4 = (input[4] - 1037.83)/941.132;
   input5 = (input[5] - 880.912)/931.469;
   input6 = (input[6] - 888.697)/931.831;
   input7 = (input[7] - 920.362)/925.107;
   input8 = (input[8] - 925.195)/979.676;
   input9 = (input[9] - 898.161)/957.696;
   input10 = (input[10] - 991.756)/961.067;
   input11 = (input[11] - 725.166)/873.841;
   input12 = (input[12] - 372.928)/378.942;
   input13 = (input[13] - 501.285)/517.109;
   input14 = (input[14] - 703.771)/798.199;
   input15 = (input[15] - 701.435)/798.201;
   input16 = (input[16] - 531.238)/555.44;
   input17 = (input[17] - 383.19)/391.882;
   input18 = (input[18] - 756.668)/909.064;
   input19 = (input[19] - 808.797)/883.161;
   input20 = (input[20] - -6.06945)/484.079;
   input21 = (input[21] - -5.35104)/1150.57;
   input22 = (input[22] - -3.95609)/1207.7;
   input23 = (input[23] - -204.183)/610.152;
   switch(index) {
     case 0:
         return neuron0x21134b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLdR::neuron0x20df570() {
   return input0;
}

double NNfunction_ss_sLdR::neuron0x20df8b0() {
   return input1;
}

double NNfunction_ss_sLdR::neuron0x20dfbf0() {
   return input2;
}

double NNfunction_ss_sLdR::neuron0x20dff30() {
   return input3;
}

double NNfunction_ss_sLdR::neuron0x20e0270() {
   return input4;
}

double NNfunction_ss_sLdR::neuron0x20e05b0() {
   return input5;
}

double NNfunction_ss_sLdR::neuron0x20e08f0() {
   return input6;
}

double NNfunction_ss_sLdR::neuron0x20e0c30() {
   return input7;
}

double NNfunction_ss_sLdR::neuron0x20e0f70() {
   return input8;
}

double NNfunction_ss_sLdR::neuron0x20e12b0() {
   return input9;
}

double NNfunction_ss_sLdR::neuron0x20e15f0() {
   return input10;
}

double NNfunction_ss_sLdR::neuron0x20e1930() {
   return input11;
}

double NNfunction_ss_sLdR::neuron0x20e1c70() {
   return input12;
}

double NNfunction_ss_sLdR::neuron0x20e1fb0() {
   return input13;
}

double NNfunction_ss_sLdR::neuron0x20e22f0() {
   return input14;
}

double NNfunction_ss_sLdR::neuron0x20e2630() {
   return input15;
}

double NNfunction_ss_sLdR::neuron0x20e2970() {
   return input16;
}

double NNfunction_ss_sLdR::neuron0x20e2ed0() {
   return input17;
}

double NNfunction_ss_sLdR::neuron0x20e30f0() {
   return input18;
}

double NNfunction_ss_sLdR::neuron0x20e3430() {
   return input19;
}

double NNfunction_ss_sLdR::neuron0x20e3770() {
   return input20;
}

double NNfunction_ss_sLdR::neuron0x20e3ab0() {
   return input21;
}

double NNfunction_ss_sLdR::neuron0x20e3df0() {
   return input22;
}

double NNfunction_ss_sLdR::neuron0x20e4130() {
   return input23;
}

double NNfunction_ss_sLdR::input0x20e45d0() {
   double input = -0.0459489;
   input += synapse0x1e9f3e0();
   input += synapse0x20df430();
   input += synapse0x20df470();
   input += synapse0x20e4880();
   input += synapse0x20e48c0();
   input += synapse0x20e4900();
   input += synapse0x20e4940();
   input += synapse0x20e4980();
   input += synapse0x20e49c0();
   input += synapse0x20e4a00();
   input += synapse0x20e4a40();
   input += synapse0x20e4a80();
   input += synapse0x20e4ac0();
   input += synapse0x20e4b00();
   input += synapse0x20e4b40();
   input += synapse0x20e4b80();
   input += synapse0x20df3a0();
   input += synapse0x20df3e0();
   input += synapse0x1e90c80();
   input += synapse0x1e90cc0();
   input += synapse0x20e4de0();
   input += synapse0x20e4e20();
   input += synapse0x20e4e60();
   input += synapse0x20e4ea0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20e45d0() {
   double input = input0x20e45d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20e4ee0() {
   double input = 0.0337524;
   input += synapse0x20e5220();
   input += synapse0x20e5260();
   input += synapse0x20e52a0();
   input += synapse0x20e52e0();
   input += synapse0x20e5320();
   input += synapse0x20e5360();
   input += synapse0x20e53a0();
   input += synapse0x20e53e0();
   input += synapse0x20e5420();
   input += synapse0x20e4cd0();
   input += synapse0x20e4d10();
   input += synapse0x20e4d50();
   input += synapse0x20e4d90();
   input += synapse0x20e5670();
   input += synapse0x20e56b0();
   input += synapse0x20e56f0();
   input += synapse0x20e5070();
   input += synapse0x20e50b0();
   input += synapse0x20e5840();
   input += synapse0x20e5880();
   input += synapse0x20e58c0();
   input += synapse0x20e5900();
   input += synapse0x20e5940();
   input += synapse0x20e5980();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20e4ee0() {
   double input = input0x20e4ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20e59c0() {
   double input = 0.152642;
   input += synapse0x20e5d00();
   input += synapse0x20e5d40();
   input += synapse0x20e5d80();
   input += synapse0x20e5dc0();
   input += synapse0x20e5e00();
   input += synapse0x20e5e40();
   input += synapse0x20e5e80();
   input += synapse0x20e5ec0();
   input += synapse0x20e5f00();
   input += synapse0x20e5f40();
   input += synapse0x20e5f80();
   input += synapse0x20e5fc0();
   input += synapse0x20e6000();
   input += synapse0x20e6040();
   input += synapse0x20e6080();
   input += synapse0x20e60c0();
   input += synapse0x20e5b50();
   input += synapse0x20e5b90();
   input += synapse0x1e9ead0();
   input += synapse0x1e9eb10();
   input += synapse0x20ce600();
   input += synapse0x20ce640();
   input += synapse0x20ce680();
   input += synapse0x20df4b0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20e59c0() {
   double input = input0x20e59c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x1e9f250() {
   double input = -0.0824745;
   input += synapse0x20e5610();
   input += synapse0x20df4f0();
   input += synapse0x20df530();
   input += synapse0x20e6210();
   input += synapse0x20e6250();
   input += synapse0x20e6290();
   input += synapse0x20e62d0();
   input += synapse0x20e6310();
   input += synapse0x20e6350();
   input += synapse0x20e6390();
   input += synapse0x20e63d0();
   input += synapse0x20e6410();
   input += synapse0x20e6450();
   input += synapse0x20e6490();
   input += synapse0x20e64d0();
   input += synapse0x20e6510();
   input += synapse0x20e5460();
   input += synapse0x20e54a0();
   input += synapse0x20e6660();
   input += synapse0x20e66a0();
   input += synapse0x20e66e0();
   input += synapse0x20e6720();
   input += synapse0x20e6760();
   input += synapse0x20e67a0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x1e9f250() {
   double input = input0x1e9f250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20e67e0() {
   double input = -4.97971;
   input += synapse0x20e6b20();
   input += synapse0x20e6b60();
   input += synapse0x20e6ba0();
   input += synapse0x20e6be0();
   input += synapse0x20e6c20();
   input += synapse0x20e6c60();
   input += synapse0x20e6ca0();
   input += synapse0x20e6ce0();
   input += synapse0x20e6d20();
   input += synapse0x20e6d60();
   input += synapse0x20e6da0();
   input += synapse0x20e6de0();
   input += synapse0x20e6e20();
   input += synapse0x20e6e60();
   input += synapse0x20e6ea0();
   input += synapse0x20e6ee0();
   input += synapse0x20e6970();
   input += synapse0x20e69b0();
   input += synapse0x20e7030();
   input += synapse0x20e7070();
   input += synapse0x20e70b0();
   input += synapse0x20e70f0();
   input += synapse0x20e7130();
   input += synapse0x20e7170();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20e67e0() {
   double input = input0x20e67e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20e71b0() {
   double input = 0.178603;
   input += synapse0x20e74f0();
   input += synapse0x20e7530();
   input += synapse0x20e7570();
   input += synapse0x20e75b0();
   input += synapse0x20e75f0();
   input += synapse0x20e7630();
   input += synapse0x20e7670();
   input += synapse0x20e76b0();
   input += synapse0x20e76f0();
   input += synapse0x1e9ee40();
   input += synapse0x1e9ee80();
   input += synapse0x1e9eec0();
   input += synapse0x1e9ef00();
   input += synapse0x1e9ef40();
   input += synapse0x1e9ef80();
   input += synapse0x1e9efc0();
   input += synapse0x20e7340();
   input += synapse0x20e7380();
   input += synapse0x1e9f110();
   input += synapse0x1e9f150();
   input += synapse0x1e9f190();
   input += synapse0x1e9f1d0();
   input += synapse0x1e9f210();
   input += synapse0x20e7f40();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20e71b0() {
   double input = input0x20e71b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20e7f80() {
   double input = 0.626094;
   input += synapse0x20e82c0();
   input += synapse0x20e8300();
   input += synapse0x20e8340();
   input += synapse0x20e8380();
   input += synapse0x20e83c0();
   input += synapse0x20e8400();
   input += synapse0x20e8440();
   input += synapse0x20e8480();
   input += synapse0x20e84c0();
   input += synapse0x20e8500();
   input += synapse0x20e8540();
   input += synapse0x20e8580();
   input += synapse0x20e85c0();
   input += synapse0x20e8600();
   input += synapse0x20e8640();
   input += synapse0x20e8680();
   input += synapse0x20e8110();
   input += synapse0x20e8150();
   input += synapse0x20e87d0();
   input += synapse0x20e8810();
   input += synapse0x20e8850();
   input += synapse0x20e8890();
   input += synapse0x20e88d0();
   input += synapse0x20e8910();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20e7f80() {
   double input = input0x20e7f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20e8950() {
   double input = 0.00367896;
   input += synapse0x20e8c90();
   input += synapse0x20e8cd0();
   input += synapse0x20e8d10();
   input += synapse0x20e8d50();
   input += synapse0x20e8d90();
   input += synapse0x20e8dd0();
   input += synapse0x20e8e10();
   input += synapse0x20e8e50();
   input += synapse0x20e8e90();
   input += synapse0x20e8ed0();
   input += synapse0x20e8f10();
   input += synapse0x20e8f50();
   input += synapse0x20e8f90();
   input += synapse0x20e8fd0();
   input += synapse0x20e9010();
   input += synapse0x20e9050();
   input += synapse0x20e8ae0();
   input += synapse0x20e8b20();
   input += synapse0x20e91a0();
   input += synapse0x20e91e0();
   input += synapse0x20e9220();
   input += synapse0x20e9260();
   input += synapse0x20e92a0();
   input += synapse0x20e92e0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20e8950() {
   double input = input0x20e8950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20e9320() {
   double input = 0.0288611;
   input += synapse0x20e2dc0();
   input += synapse0x20e2e00();
   input += synapse0x20e2e40();
   input += synapse0x20e2e80();
   input += synapse0x20e9870();
   input += synapse0x20e98b0();
   input += synapse0x20e98f0();
   input += synapse0x20e9930();
   input += synapse0x20e9970();
   input += synapse0x20e99b0();
   input += synapse0x20e99f0();
   input += synapse0x20e9a30();
   input += synapse0x20e9a70();
   input += synapse0x20e9ab0();
   input += synapse0x20e9af0();
   input += synapse0x20e9b30();
   input += synapse0x20e94b0();
   input += synapse0x20e94f0();
   input += synapse0x20e9c80();
   input += synapse0x20e9cc0();
   input += synapse0x20e9d00();
   input += synapse0x20e9d40();
   input += synapse0x20e9d80();
   input += synapse0x20e9dc0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20e9320() {
   double input = input0x20e9320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20e9e00() {
   double input = 0.883788;
   input += synapse0x20ea140();
   input += synapse0x20ea180();
   input += synapse0x20ea1c0();
   input += synapse0x20ea200();
   input += synapse0x20ea240();
   input += synapse0x20ea280();
   input += synapse0x20ea2c0();
   input += synapse0x20ea300();
   input += synapse0x20ea340();
   input += synapse0x20ea380();
   input += synapse0x20ea3c0();
   input += synapse0x20ea400();
   input += synapse0x20ea440();
   input += synapse0x20ea480();
   input += synapse0x20ea4c0();
   input += synapse0x20ea500();
   input += synapse0x20e9f90();
   input += synapse0x20e9fd0();
   input += synapse0x20ea650();
   input += synapse0x20ea690();
   input += synapse0x20ea6d0();
   input += synapse0x20ea710();
   input += synapse0x20ea750();
   input += synapse0x20ea790();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20e9e00() {
   double input = input0x20e9e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20ea7d0() {
   double input = 0.334782;
   input += synapse0x20eab10();
   input += synapse0x20eab50();
   input += synapse0x20eab90();
   input += synapse0x20eabd0();
   input += synapse0x20eac10();
   input += synapse0x20eac50();
   input += synapse0x20eac90();
   input += synapse0x20eacd0();
   input += synapse0x20ead10();
   input += synapse0x20ead50();
   input += synapse0x20ead90();
   input += synapse0x20eadd0();
   input += synapse0x20eae10();
   input += synapse0x20eae50();
   input += synapse0x20eae90();
   input += synapse0x20eaed0();
   input += synapse0x20ea960();
   input += synapse0x20ea9a0();
   input += synapse0x20e7730();
   input += synapse0x20e7770();
   input += synapse0x20e77b0();
   input += synapse0x20e77f0();
   input += synapse0x20e7830();
   input += synapse0x20e7870();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20ea7d0() {
   double input = input0x20ea7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20e78b0() {
   double input = 0.12366;
   input += synapse0x20e7bf0();
   input += synapse0x20e7c30();
   input += synapse0x20e7c70();
   input += synapse0x20e7cb0();
   input += synapse0x20e7cf0();
   input += synapse0x20e7d30();
   input += synapse0x20e7d70();
   input += synapse0x20e7db0();
   input += synapse0x20e7df0();
   input += synapse0x20e7e30();
   input += synapse0x20e7e70();
   input += synapse0x20e7eb0();
   input += synapse0x20e7ef0();
   input += synapse0x20ec030();
   input += synapse0x20ec070();
   input += synapse0x20ec0b0();
   input += synapse0x20e7a40();
   input += synapse0x20e7a80();
   input += synapse0x20ec200();
   input += synapse0x20ec240();
   input += synapse0x20ec280();
   input += synapse0x20ec2c0();
   input += synapse0x20ec300();
   input += synapse0x20ec340();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20e78b0() {
   double input = input0x20e78b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20ec380() {
   double input = 0.29734;
   input += synapse0x20ec6c0();
   input += synapse0x20ec700();
   input += synapse0x20ec740();
   input += synapse0x20ec780();
   input += synapse0x20ec7c0();
   input += synapse0x20ec800();
   input += synapse0x20ec840();
   input += synapse0x20ec880();
   input += synapse0x20ec8c0();
   input += synapse0x20ec900();
   input += synapse0x20ec940();
   input += synapse0x20ec980();
   input += synapse0x20ec9c0();
   input += synapse0x20eca00();
   input += synapse0x20eca40();
   input += synapse0x20eca80();
   input += synapse0x20ec510();
   input += synapse0x20ec550();
   input += synapse0x20ecbd0();
   input += synapse0x20ecc10();
   input += synapse0x20ecc50();
   input += synapse0x20ecc90();
   input += synapse0x20eccd0();
   input += synapse0x20ecd10();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20ec380() {
   double input = input0x20ec380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20ecd50() {
   double input = 1.8137;
   input += synapse0x20ed090();
   input += synapse0x20ed0d0();
   input += synapse0x20ed110();
   input += synapse0x20ed150();
   input += synapse0x20ed190();
   input += synapse0x20ed1d0();
   input += synapse0x20ed210();
   input += synapse0x20ed250();
   input += synapse0x20ed290();
   input += synapse0x20ed2d0();
   input += synapse0x20ed310();
   input += synapse0x20ed350();
   input += synapse0x20ed390();
   input += synapse0x20ed3d0();
   input += synapse0x20ed410();
   input += synapse0x20ed450();
   input += synapse0x20ecee0();
   input += synapse0x20ecf20();
   input += synapse0x20ed5a0();
   input += synapse0x20ed5e0();
   input += synapse0x20ed620();
   input += synapse0x20ed660();
   input += synapse0x20ed6a0();
   input += synapse0x20ed6e0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20ecd50() {
   double input = input0x20ecd50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20ed720() {
   double input = -0.72041;
   input += synapse0x20eda60();
   input += synapse0x20edaa0();
   input += synapse0x20edae0();
   input += synapse0x20edb20();
   input += synapse0x20edb60();
   input += synapse0x20edba0();
   input += synapse0x20edbe0();
   input += synapse0x20edc20();
   input += synapse0x20edc60();
   input += synapse0x20edca0();
   input += synapse0x20edce0();
   input += synapse0x20edd20();
   input += synapse0x20edd60();
   input += synapse0x20edda0();
   input += synapse0x20edde0();
   input += synapse0x20ede20();
   input += synapse0x20ed8b0();
   input += synapse0x20ed8f0();
   input += synapse0x20edf70();
   input += synapse0x20edfb0();
   input += synapse0x20edff0();
   input += synapse0x20ee030();
   input += synapse0x20ee070();
   input += synapse0x20ee0b0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20ed720() {
   double input = input0x20ed720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20ee0f0() {
   double input = -1.09757;
   input += synapse0x20ee430();
   input += synapse0x20df790();
   input += synapse0x20df7d0();
   input += synapse0x20dfad0();
   input += synapse0x20dfb10();
   input += synapse0x20dfe10();
   input += synapse0x20dfe50();
   input += synapse0x20e0150();
   input += synapse0x20e0190();
   input += synapse0x20e0490();
   input += synapse0x20e04d0();
   input += synapse0x20e07d0();
   input += synapse0x20e0810();
   input += synapse0x20e0b10();
   input += synapse0x20e0b50();
   input += synapse0x20e0e50();
   input += synapse0x20e0e90();
   input += synapse0x20e1190();
   input += synapse0x20e11d0();
   input += synapse0x20e14d0();
   input += synapse0x20e1510();
   input += synapse0x20e1810();
   input += synapse0x20e1850();
   input += synapse0x20e1b50();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20ee0f0() {
   double input = input0x20ee0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20eff00() {
   double input = 0.74918;
   input += synapse0x20e1b90();
   input += synapse0x20e2850();
   input += synapse0x20e2890();
   input += synapse0x20ee280();
   input += synapse0x20ee2c0();
   input += synapse0x20e2b90();
   input += synapse0x20e2bd0();
   input += synapse0x1e90b60();
   input += synapse0x1e90ba0();
   input += synapse0x20e3310();
   input += synapse0x20e3350();
   input += synapse0x20e3650();
   input += synapse0x20e3690();
   input += synapse0x20e3990();
   input += synapse0x20e39d0();
   input += synapse0x20e3cd0();
   input += synapse0x20e3d10();
   input += synapse0x20e4010();
   input += synapse0x20e4050();
   input += synapse0x20e4350();
   input += synapse0x20e4390();
   input += synapse0x20e1e90();
   input += synapse0x20e1ed0();
   input += synapse0x20f01a0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20eff00() {
   double input = input0x20eff00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20f01e0() {
   double input = 0.258655;
   input += synapse0x20f0520();
   input += synapse0x20f0560();
   input += synapse0x20f05a0();
   input += synapse0x20f05e0();
   input += synapse0x20f0620();
   input += synapse0x20f0660();
   input += synapse0x20f06a0();
   input += synapse0x20f06e0();
   input += synapse0x20f0720();
   input += synapse0x20f0760();
   input += synapse0x20f07a0();
   input += synapse0x20f07e0();
   input += synapse0x20f0820();
   input += synapse0x20f0860();
   input += synapse0x20f08a0();
   input += synapse0x20f08e0();
   input += synapse0x20f0370();
   input += synapse0x20f03b0();
   input += synapse0x20f0a30();
   input += synapse0x20f0a70();
   input += synapse0x20f0ab0();
   input += synapse0x20f0af0();
   input += synapse0x20f0b30();
   input += synapse0x20f0b70();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20f01e0() {
   double input = input0x20f01e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20f0bb0() {
   double input = -0.319823;
   input += synapse0x20f0ef0();
   input += synapse0x20f0f30();
   input += synapse0x20f0f70();
   input += synapse0x20f0fb0();
   input += synapse0x20f0ff0();
   input += synapse0x20f1030();
   input += synapse0x20f1070();
   input += synapse0x20f10b0();
   input += synapse0x20f10f0();
   input += synapse0x20f1130();
   input += synapse0x20f1170();
   input += synapse0x20f11b0();
   input += synapse0x20f11f0();
   input += synapse0x20f1230();
   input += synapse0x20f1270();
   input += synapse0x20f12b0();
   input += synapse0x20f0d40();
   input += synapse0x20f0d80();
   input += synapse0x20f1400();
   input += synapse0x20f1440();
   input += synapse0x20f1480();
   input += synapse0x20f14c0();
   input += synapse0x20f1500();
   input += synapse0x20f1540();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20f0bb0() {
   double input = input0x20f0bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20f1580() {
   double input = 1.50044;
   input += synapse0x20f18c0();
   input += synapse0x20f1900();
   input += synapse0x20f1940();
   input += synapse0x20f1980();
   input += synapse0x20f19c0();
   input += synapse0x20f1a00();
   input += synapse0x20f1a40();
   input += synapse0x20f1a80();
   input += synapse0x20f1ac0();
   input += synapse0x20f1b00();
   input += synapse0x20f1b40();
   input += synapse0x20f1b80();
   input += synapse0x20f1bc0();
   input += synapse0x20f1c00();
   input += synapse0x20f1c40();
   input += synapse0x20f1c80();
   input += synapse0x20f1710();
   input += synapse0x20f1750();
   input += synapse0x20f1dd0();
   input += synapse0x20f1e10();
   input += synapse0x20f1e50();
   input += synapse0x20f1e90();
   input += synapse0x20f1ed0();
   input += synapse0x20f1f10();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20f1580() {
   double input = input0x20f1580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20f1f50() {
   double input = 0.362533;
   input += synapse0x20f2290();
   input += synapse0x20f22d0();
   input += synapse0x20f2310();
   input += synapse0x20f2350();
   input += synapse0x20f2390();
   input += synapse0x20f23d0();
   input += synapse0x20f2410();
   input += synapse0x20f2450();
   input += synapse0x20f2490();
   input += synapse0x20f24d0();
   input += synapse0x20f2510();
   input += synapse0x20f2550();
   input += synapse0x20f2590();
   input += synapse0x20f25d0();
   input += synapse0x20f2610();
   input += synapse0x20f2650();
   input += synapse0x20f20e0();
   input += synapse0x20f2120();
   input += synapse0x20f27a0();
   input += synapse0x20f27e0();
   input += synapse0x20f2820();
   input += synapse0x20f2860();
   input += synapse0x20f28a0();
   input += synapse0x20f28e0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20f1f50() {
   double input = input0x20f1f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20f2920() {
   double input = -0.215694;
   input += synapse0x20f2c60();
   input += synapse0x20f2ca0();
   input += synapse0x20f2ce0();
   input += synapse0x20f2d20();
   input += synapse0x20f2d60();
   input += synapse0x20f2da0();
   input += synapse0x20f2de0();
   input += synapse0x20f2e20();
   input += synapse0x20f2e60();
   input += synapse0x20eb020();
   input += synapse0x20eb060();
   input += synapse0x20eb0a0();
   input += synapse0x20eb0e0();
   input += synapse0x20eb120();
   input += synapse0x20eb160();
   input += synapse0x20eb1a0();
   input += synapse0x20f2ab0();
   input += synapse0x20f2af0();
   input += synapse0x20eb2f0();
   input += synapse0x20eb330();
   input += synapse0x20eb370();
   input += synapse0x20eb3b0();
   input += synapse0x20eb3f0();
   input += synapse0x20eb430();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20f2920() {
   double input = input0x20f2920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20eb470() {
   double input = 0.536632;
   input += synapse0x20eb7b0();
   input += synapse0x20eb7f0();
   input += synapse0x20eb830();
   input += synapse0x20eb870();
   input += synapse0x20eb8b0();
   input += synapse0x20eb8f0();
   input += synapse0x20eb930();
   input += synapse0x20eb970();
   input += synapse0x20eb9b0();
   input += synapse0x20eb9f0();
   input += synapse0x20eba30();
   input += synapse0x20eba70();
   input += synapse0x20ebab0();
   input += synapse0x20ebaf0();
   input += synapse0x20ebb30();
   input += synapse0x20ebb70();
   input += synapse0x20eb600();
   input += synapse0x20eb640();
   input += synapse0x20ebcc0();
   input += synapse0x20ebd00();
   input += synapse0x20ebd40();
   input += synapse0x20ebd80();
   input += synapse0x20ebdc0();
   input += synapse0x20ebe00();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20eb470() {
   double input = input0x20eb470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20ebe40() {
   double input = -0.324589;
   input += synapse0x20ebfd0();
   input += synapse0x20f5060();
   input += synapse0x20f50a0();
   input += synapse0x20f50e0();
   input += synapse0x20f5120();
   input += synapse0x20f5160();
   input += synapse0x20f51a0();
   input += synapse0x20f51e0();
   input += synapse0x20f5220();
   input += synapse0x20f5260();
   input += synapse0x20f52a0();
   input += synapse0x20f52e0();
   input += synapse0x20f5320();
   input += synapse0x20f5360();
   input += synapse0x20f53a0();
   input += synapse0x20f53e0();
   input += synapse0x20f4eb0();
   input += synapse0x20f4ef0();
   input += synapse0x20f5530();
   input += synapse0x20f5570();
   input += synapse0x20f55b0();
   input += synapse0x20f55f0();
   input += synapse0x20f5630();
   input += synapse0x20f5670();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20ebe40() {
   double input = input0x20ebe40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20f56b0() {
   double input = 0.15458;
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
   input += synapse0x20f5cb0();
   input += synapse0x20f5cf0();
   input += synapse0x20f5d30();
   input += synapse0x20f5d70();
   input += synapse0x20f5db0();
   input += synapse0x20f5840();
   input += synapse0x20f5880();
   input += synapse0x20f5f00();
   input += synapse0x20f5f40();
   input += synapse0x20f5f80();
   input += synapse0x20f5fc0();
   input += synapse0x20f6000();
   input += synapse0x20f6040();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20f56b0() {
   double input = input0x20f56b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20f6080() {
   double input = -0.0266544;
   input += synapse0x20f63c0();
   input += synapse0x20f6400();
   input += synapse0x20f6440();
   input += synapse0x20f6480();
   input += synapse0x20f64c0();
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
   input += synapse0x20f6210();
   input += synapse0x20f6250();
   input += synapse0x20f68d0();
   input += synapse0x20f6910();
   input += synapse0x20f6950();
   input += synapse0x20f6990();
   input += synapse0x20f69d0();
   input += synapse0x20f6a10();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20f6080() {
   double input = input0x20f6080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20f6a50() {
   double input = 0.0915578;
   input += synapse0x20f6d90();
   input += synapse0x20f6dd0();
   input += synapse0x20f6e10();
   input += synapse0x20f6e50();
   input += synapse0x20f6e90();
   input += synapse0x20f6ed0();
   input += synapse0x20f6f10();
   input += synapse0x20f6f50();
   input += synapse0x20f6f90();
   input += synapse0x20f6fd0();
   input += synapse0x20f7010();
   input += synapse0x20f7050();
   input += synapse0x20f7090();
   input += synapse0x20f70d0();
   input += synapse0x20f7110();
   input += synapse0x20f7150();
   input += synapse0x20f6be0();
   input += synapse0x20f6c20();
   input += synapse0x20f72a0();
   input += synapse0x20f72e0();
   input += synapse0x20f7320();
   input += synapse0x20f7360();
   input += synapse0x20f73a0();
   input += synapse0x20f73e0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20f6a50() {
   double input = input0x20f6a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20f7420() {
   double input = 0.358113;
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
   input += synapse0x20f79e0();
   input += synapse0x20f7a20();
   input += synapse0x20f7a60();
   input += synapse0x20f7aa0();
   input += synapse0x20f7ae0();
   input += synapse0x20f7b20();
   input += synapse0x20f75b0();
   input += synapse0x20f75f0();
   input += synapse0x20f7c70();
   input += synapse0x20f7cb0();
   input += synapse0x20f7cf0();
   input += synapse0x20f7d30();
   input += synapse0x20f7d70();
   input += synapse0x20f7db0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20f7420() {
   double input = input0x20f7420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20f7df0() {
   double input = -0.242714;
   input += synapse0x20f8130();
   input += synapse0x20f8170();
   input += synapse0x20f81b0();
   input += synapse0x20f81f0();
   input += synapse0x20f8230();
   input += synapse0x20f8270();
   input += synapse0x20f82b0();
   input += synapse0x20f82f0();
   input += synapse0x20f8330();
   input += synapse0x20f8370();
   input += synapse0x20f83b0();
   input += synapse0x20f83f0();
   input += synapse0x20f8430();
   input += synapse0x20f8470();
   input += synapse0x20f84b0();
   input += synapse0x20f84f0();
   input += synapse0x20f7f80();
   input += synapse0x20f7fc0();
   input += synapse0x20f8640();
   input += synapse0x20f8680();
   input += synapse0x20f86c0();
   input += synapse0x20f8700();
   input += synapse0x20f8740();
   input += synapse0x20f8780();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20f7df0() {
   double input = input0x20f7df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20f87c0() {
   double input = 0.257083;
   input += synapse0x20f8b00();
   input += synapse0x20f8b40();
   input += synapse0x20f8b80();
   input += synapse0x20f8bc0();
   input += synapse0x20f8c00();
   input += synapse0x20f8c40();
   input += synapse0x20f8c80();
   input += synapse0x20f8cc0();
   input += synapse0x20f8d00();
   input += synapse0x20f8d40();
   input += synapse0x20f8d80();
   input += synapse0x20f8dc0();
   input += synapse0x20f8e00();
   input += synapse0x20f8e40();
   input += synapse0x20f8e80();
   input += synapse0x20f8ec0();
   input += synapse0x20f8950();
   input += synapse0x20f8990();
   input += synapse0x20f9010();
   input += synapse0x20f9050();
   input += synapse0x20f9090();
   input += synapse0x20f90d0();
   input += synapse0x20f9110();
   input += synapse0x20f9150();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20f87c0() {
   double input = input0x20f87c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20f9190() {
   double input = -0.117305;
   input += synapse0x20f94d0();
   input += synapse0x20f9510();
   input += synapse0x20f9550();
   input += synapse0x20f9590();
   input += synapse0x20f95d0();
   input += synapse0x20f9610();
   input += synapse0x20f9650();
   input += synapse0x20f9690();
   input += synapse0x20f96d0();
   input += synapse0x20f9710();
   input += synapse0x20f9750();
   input += synapse0x20f9790();
   input += synapse0x20f97d0();
   input += synapse0x20f9810();
   input += synapse0x20f9850();
   input += synapse0x20f9890();
   input += synapse0x20f9320();
   input += synapse0x20f9360();
   input += synapse0x20f99e0();
   input += synapse0x20f9a20();
   input += synapse0x20f9a60();
   input += synapse0x20f9aa0();
   input += synapse0x20f9ae0();
   input += synapse0x20f9b20();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20f9190() {
   double input = input0x20f9190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20f9b60() {
   double input = -0.37515;
   input += synapse0x20f9ea0();
   input += synapse0x20ee470();
   input += synapse0x20ee4b0();
   input += synapse0x20ee4f0();
   input += synapse0x20ee740();
   input += synapse0x20ee780();
   input += synapse0x20ee7c0();
   input += synapse0x20eea10();
   input += synapse0x20eea50();
   input += synapse0x20eeca0();
   input += synapse0x20eece0();
   input += synapse0x20eed20();
   input += synapse0x20eef70();
   input += synapse0x20eefb0();
   input += synapse0x20ef200();
   input += synapse0x20ef240();
   input += synapse0x20f9cf0();
   input += synapse0x20f9d30();
   input += synapse0x20ef390();
   input += synapse0x20ef8a0();
   input += synapse0x20ef8e0();
   input += synapse0x20ef920();
   input += synapse0x20efb70();
   input += synapse0x20efbb0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20f9b60() {
   double input = input0x20f9b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20efbf0() {
   double input = 1.2067;
   input += synapse0x20ef460();
   input += synapse0x20ef4a0();
   input += synapse0x20ef4e0();
   input += synapse0x20ef520();
   input += synapse0x20efea0();
   input += synapse0x20fc1f0();
   input += synapse0x20fc230();
   input += synapse0x20fc270();
   input += synapse0x20fc2b0();
   input += synapse0x20fc2f0();
   input += synapse0x20fc330();
   input += synapse0x20fc370();
   input += synapse0x20fc3b0();
   input += synapse0x20fc3f0();
   input += synapse0x20fc430();
   input += synapse0x20fc470();
   input += synapse0x20efd80();
   input += synapse0x20efdc0();
   input += synapse0x20fc5c0();
   input += synapse0x20fc600();
   input += synapse0x20fc640();
   input += synapse0x20fc680();
   input += synapse0x20fc6c0();
   input += synapse0x20fc700();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20efbf0() {
   double input = input0x20efbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20fc740() {
   double input = -0.297116;
   input += synapse0x20fca80();
   input += synapse0x20fcac0();
   input += synapse0x20fcb00();
   input += synapse0x20fcb40();
   input += synapse0x20fcb80();
   input += synapse0x20fcbc0();
   input += synapse0x20fcc00();
   input += synapse0x20fcc40();
   input += synapse0x20fcc80();
   input += synapse0x20fccc0();
   input += synapse0x20fcd00();
   input += synapse0x20fcd40();
   input += synapse0x20fcd80();
   input += synapse0x20fcdc0();
   input += synapse0x20fce00();
   input += synapse0x20fce40();
   input += synapse0x20fc8d0();
   input += synapse0x20fc910();
   input += synapse0x20fcf90();
   input += synapse0x20fcfd0();
   input += synapse0x20fd010();
   input += synapse0x20fd050();
   input += synapse0x20fd090();
   input += synapse0x20fd0d0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20fc740() {
   double input = input0x20fc740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20fd110() {
   double input = -0.0582625;
   input += synapse0x20fd450();
   input += synapse0x20fd490();
   input += synapse0x20fd4d0();
   input += synapse0x20fd510();
   input += synapse0x20fd550();
   input += synapse0x20fd590();
   input += synapse0x20fd5d0();
   input += synapse0x20fd610();
   input += synapse0x20fd650();
   input += synapse0x20fd690();
   input += synapse0x20fd6d0();
   input += synapse0x20fd710();
   input += synapse0x20fd750();
   input += synapse0x20fd790();
   input += synapse0x20fd7d0();
   input += synapse0x20fd810();
   input += synapse0x20fd2a0();
   input += synapse0x20fd2e0();
   input += synapse0x20fd960();
   input += synapse0x20fd9a0();
   input += synapse0x20fd9e0();
   input += synapse0x20fda20();
   input += synapse0x20fda60();
   input += synapse0x20fdaa0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20fd110() {
   double input = input0x20fd110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20fdae0() {
   double input = 0.872839;
   input += synapse0x20fde20();
   input += synapse0x20fde60();
   input += synapse0x20fdea0();
   input += synapse0x20fdee0();
   input += synapse0x20fdf20();
   input += synapse0x20fdf60();
   input += synapse0x20fdfa0();
   input += synapse0x20fdfe0();
   input += synapse0x20fe020();
   input += synapse0x20fe060();
   input += synapse0x20fe0a0();
   input += synapse0x20fe0e0();
   input += synapse0x20fe120();
   input += synapse0x20fe160();
   input += synapse0x20fe1a0();
   input += synapse0x20fe1e0();
   input += synapse0x20fdc70();
   input += synapse0x20fdcb0();
   input += synapse0x20fe330();
   input += synapse0x20fe370();
   input += synapse0x20fe3b0();
   input += synapse0x20fe3f0();
   input += synapse0x20fe430();
   input += synapse0x20fe470();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20fdae0() {
   double input = input0x20fdae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20fe4b0() {
   double input = 4.85149;
   input += synapse0x20fe7f0();
   input += synapse0x20fe830();
   input += synapse0x20fe870();
   input += synapse0x20fe8b0();
   input += synapse0x20fe8f0();
   input += synapse0x20fe930();
   input += synapse0x20fe970();
   input += synapse0x20fe9b0();
   input += synapse0x20fe9f0();
   input += synapse0x20fea30();
   input += synapse0x20fea70();
   input += synapse0x20feab0();
   input += synapse0x20feaf0();
   input += synapse0x20feb30();
   input += synapse0x20feb70();
   input += synapse0x20febb0();
   input += synapse0x20fe640();
   input += synapse0x20fe680();
   input += synapse0x20fed00();
   input += synapse0x20fed40();
   input += synapse0x20fed80();
   input += synapse0x20fedc0();
   input += synapse0x20fee00();
   input += synapse0x20fee40();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20fe4b0() {
   double input = input0x20fe4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20fee80() {
   double input = -0.825452;
   input += synapse0x20ff1c0();
   input += synapse0x20ff200();
   input += synapse0x20ff240();
   input += synapse0x20ff280();
   input += synapse0x20ff2c0();
   input += synapse0x20ff300();
   input += synapse0x20ff340();
   input += synapse0x20ff380();
   input += synapse0x20ff3c0();
   input += synapse0x20ff400();
   input += synapse0x20ff440();
   input += synapse0x20ff480();
   input += synapse0x20ff4c0();
   input += synapse0x20ff500();
   input += synapse0x20ff540();
   input += synapse0x20ff580();
   input += synapse0x20ff010();
   input += synapse0x20ff050();
   input += synapse0x20ff6d0();
   input += synapse0x20ff710();
   input += synapse0x20ff750();
   input += synapse0x20ff790();
   input += synapse0x20ff7d0();
   input += synapse0x20ff810();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20fee80() {
   double input = input0x20fee80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20ff850() {
   double input = -0.973024;
   input += synapse0x20ffb90();
   input += synapse0x20ffbd0();
   input += synapse0x20ffc10();
   input += synapse0x20ffc50();
   input += synapse0x20ffc90();
   input += synapse0x20ffcd0();
   input += synapse0x20ffd10();
   input += synapse0x20ffd50();
   input += synapse0x20ffd90();
   input += synapse0x20ffdd0();
   input += synapse0x20ffe10();
   input += synapse0x20ffe50();
   input += synapse0x20ffe90();
   input += synapse0x20ffed0();
   input += synapse0x20fff10();
   input += synapse0x20fff50();
   input += synapse0x20ff9e0();
   input += synapse0x20ffa20();
   input += synapse0x21000a0();
   input += synapse0x21000e0();
   input += synapse0x2100120();
   input += synapse0x2100160();
   input += synapse0x21001a0();
   input += synapse0x21001e0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20ff850() {
   double input = input0x20ff850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x2100220() {
   double input = -0.0999805;
   input += synapse0x2100560();
   input += synapse0x21005a0();
   input += synapse0x21005e0();
   input += synapse0x2100620();
   input += synapse0x2100660();
   input += synapse0x21006a0();
   input += synapse0x21006e0();
   input += synapse0x2100720();
   input += synapse0x2100760();
   input += synapse0x21007a0();
   input += synapse0x21007e0();
   input += synapse0x2100820();
   input += synapse0x2100860();
   input += synapse0x21008a0();
   input += synapse0x21008e0();
   input += synapse0x2100920();
   input += synapse0x21003b0();
   input += synapse0x21003f0();
   input += synapse0x2100a70();
   input += synapse0x2100ab0();
   input += synapse0x2100af0();
   input += synapse0x2100b30();
   input += synapse0x2100b70();
   input += synapse0x2100bb0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x2100220() {
   double input = input0x2100220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x2100bf0() {
   double input = 0.958932;
   input += synapse0x20e9660();
   input += synapse0x20e96a0();
   input += synapse0x20e96e0();
   input += synapse0x20e9720();
   input += synapse0x20e9760();
   input += synapse0x20e97a0();
   input += synapse0x20e97e0();
   input += synapse0x20e9820();
   input += synapse0x2101340();
   input += synapse0x2101380();
   input += synapse0x21013c0();
   input += synapse0x2101400();
   input += synapse0x2101440();
   input += synapse0x2101480();
   input += synapse0x21014c0();
   input += synapse0x2101500();
   input += synapse0x2100d80();
   input += synapse0x2100dc0();
   input += synapse0x2101650();
   input += synapse0x2101690();
   input += synapse0x21016d0();
   input += synapse0x2101710();
   input += synapse0x2101750();
   input += synapse0x2101790();
   return input;
}

double NNfunction_ss_sLdR::neuron0x2100bf0() {
   double input = input0x2100bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x21017d0() {
   double input = 1.4137;
   input += synapse0x2101b10();
   input += synapse0x2101b50();
   input += synapse0x2101b90();
   input += synapse0x2101bd0();
   input += synapse0x2101c10();
   input += synapse0x2101c50();
   input += synapse0x2101c90();
   input += synapse0x2101cd0();
   input += synapse0x2101d10();
   input += synapse0x2101d50();
   input += synapse0x2101d90();
   input += synapse0x2101dd0();
   input += synapse0x2101e10();
   input += synapse0x2101e50();
   input += synapse0x2101e90();
   input += synapse0x2101ed0();
   input += synapse0x2101960();
   input += synapse0x21019a0();
   input += synapse0x2102020();
   input += synapse0x2102060();
   input += synapse0x21020a0();
   input += synapse0x21020e0();
   input += synapse0x2102120();
   input += synapse0x2102160();
   return input;
}

double NNfunction_ss_sLdR::neuron0x21017d0() {
   double input = input0x21017d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x21021a0() {
   double input = -0.292461;
   input += synapse0x21024e0();
   input += synapse0x2102520();
   input += synapse0x2102560();
   input += synapse0x21025a0();
   input += synapse0x21025e0();
   input += synapse0x2102620();
   input += synapse0x2102660();
   input += synapse0x21026a0();
   input += synapse0x21026e0();
   input += synapse0x2102720();
   input += synapse0x2102760();
   input += synapse0x21027a0();
   input += synapse0x21027e0();
   input += synapse0x2102820();
   input += synapse0x2102860();
   input += synapse0x21028a0();
   input += synapse0x2102330();
   input += synapse0x2102370();
   input += synapse0x20f2ea0();
   input += synapse0x20f2ee0();
   input += synapse0x20f2f20();
   input += synapse0x20f2f60();
   input += synapse0x20f2fa0();
   input += synapse0x20f2fe0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x21021a0() {
   double input = input0x21021a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20f3020() {
   double input = 0.285017;
   input += synapse0x20f3360();
   input += synapse0x20f33a0();
   input += synapse0x20f33e0();
   input += synapse0x20f3420();
   input += synapse0x20f3460();
   input += synapse0x20f34a0();
   input += synapse0x20f34e0();
   input += synapse0x20f3520();
   input += synapse0x20f3560();
   input += synapse0x20f35a0();
   input += synapse0x20f35e0();
   input += synapse0x20f3620();
   input += synapse0x20f3660();
   input += synapse0x20f36a0();
   input += synapse0x20f36e0();
   input += synapse0x20f3720();
   input += synapse0x20f31b0();
   input += synapse0x20f31f0();
   input += synapse0x20f3870();
   input += synapse0x20f38b0();
   input += synapse0x20f38f0();
   input += synapse0x20f3930();
   input += synapse0x20f3970();
   input += synapse0x20f39b0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20f3020() {
   double input = input0x20f3020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20f39f0() {
   double input = 0.841277;
   input += synapse0x20f3d30();
   input += synapse0x20f3d70();
   input += synapse0x20f3db0();
   input += synapse0x20f3df0();
   input += synapse0x20f3e30();
   input += synapse0x20f3e70();
   input += synapse0x20f3eb0();
   input += synapse0x20f3ef0();
   input += synapse0x20f3f30();
   input += synapse0x20f3f70();
   input += synapse0x20f3fb0();
   input += synapse0x20f3ff0();
   input += synapse0x20f4030();
   input += synapse0x20f4070();
   input += synapse0x20f40b0();
   input += synapse0x20f40f0();
   input += synapse0x20f3b80();
   input += synapse0x20f3bc0();
   input += synapse0x20f4240();
   input += synapse0x20f4280();
   input += synapse0x20f42c0();
   input += synapse0x20f4300();
   input += synapse0x20f4340();
   input += synapse0x20f4380();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20f39f0() {
   double input = input0x20f39f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x20f43c0() {
   double input = -0.284837;
   input += synapse0x20f4700();
   input += synapse0x20f4740();
   input += synapse0x20f4780();
   input += synapse0x20f47c0();
   input += synapse0x20f4800();
   input += synapse0x20f4840();
   input += synapse0x20f4880();
   input += synapse0x20f48c0();
   input += synapse0x20f4900();
   input += synapse0x20f4940();
   input += synapse0x20f4980();
   input += synapse0x20f49c0();
   input += synapse0x20f4a00();
   input += synapse0x20f4a40();
   input += synapse0x20f4a80();
   input += synapse0x20f4ac0();
   input += synapse0x20f4550();
   input += synapse0x20f4590();
   input += synapse0x20f4c10();
   input += synapse0x20f4c50();
   input += synapse0x20f4c90();
   input += synapse0x20f4cd0();
   input += synapse0x20f4d10();
   input += synapse0x20f4d50();
   return input;
}

double NNfunction_ss_sLdR::neuron0x20f43c0() {
   double input = input0x20f43c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x2106a00() {
   double input = 0.246009;
   input += synapse0x2106c20();
   input += synapse0x2106c60();
   input += synapse0x2106ca0();
   input += synapse0x2106ce0();
   input += synapse0x2106d20();
   input += synapse0x2106d60();
   input += synapse0x2106da0();
   input += synapse0x2106de0();
   input += synapse0x2106e20();
   input += synapse0x2106e60();
   input += synapse0x2106ea0();
   input += synapse0x2106ee0();
   input += synapse0x2106f20();
   input += synapse0x2106f60();
   input += synapse0x2106fa0();
   input += synapse0x2106fe0();
   input += synapse0x20f4d90();
   input += synapse0x20f4dd0();
   input += synapse0x2107130();
   input += synapse0x2107170();
   input += synapse0x21071b0();
   input += synapse0x21071f0();
   input += synapse0x2107230();
   input += synapse0x2107270();
   return input;
}

double NNfunction_ss_sLdR::neuron0x2106a00() {
   double input = input0x2106a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x21072b0() {
   double input = -0.288666;
   input += synapse0x21075f0();
   input += synapse0x2107630();
   input += synapse0x2107670();
   input += synapse0x21076b0();
   input += synapse0x21076f0();
   input += synapse0x2107730();
   input += synapse0x2107770();
   input += synapse0x21077b0();
   input += synapse0x21077f0();
   input += synapse0x2107830();
   input += synapse0x2107870();
   input += synapse0x21078b0();
   input += synapse0x21078f0();
   input += synapse0x2107930();
   input += synapse0x2107970();
   input += synapse0x21079b0();
   input += synapse0x2107440();
   input += synapse0x2107480();
   input += synapse0x2107b00();
   input += synapse0x2107b40();
   input += synapse0x2107b80();
   input += synapse0x2107bc0();
   input += synapse0x2107c00();
   input += synapse0x2107c40();
   return input;
}

double NNfunction_ss_sLdR::neuron0x21072b0() {
   double input = input0x21072b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x2107c80() {
   double input = -0.342347;
   input += synapse0x2107fc0();
   input += synapse0x2108000();
   input += synapse0x2108040();
   input += synapse0x2108080();
   input += synapse0x21080c0();
   input += synapse0x2108100();
   input += synapse0x2108140();
   input += synapse0x2108180();
   input += synapse0x21081c0();
   input += synapse0x2108200();
   input += synapse0x2108240();
   input += synapse0x2108280();
   input += synapse0x21082c0();
   input += synapse0x2108300();
   input += synapse0x2108340();
   input += synapse0x2108380();
   input += synapse0x2107e10();
   input += synapse0x2107e50();
   input += synapse0x21084d0();
   input += synapse0x2108510();
   input += synapse0x2108550();
   input += synapse0x2108590();
   input += synapse0x21085d0();
   input += synapse0x2108610();
   return input;
}

double NNfunction_ss_sLdR::neuron0x2107c80() {
   double input = input0x2107c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x2108650() {
   double input = -1.40102;
   input += synapse0x2108990();
   input += synapse0x21089d0();
   input += synapse0x2108a10();
   input += synapse0x2108a50();
   input += synapse0x2108a90();
   input += synapse0x2108ad0();
   input += synapse0x2108b10();
   input += synapse0x2108b50();
   input += synapse0x2108b90();
   input += synapse0x2108bd0();
   input += synapse0x2108c10();
   input += synapse0x2108c50();
   input += synapse0x2108c90();
   input += synapse0x2108cd0();
   input += synapse0x2108d10();
   input += synapse0x2108d50();
   input += synapse0x21087e0();
   input += synapse0x2108820();
   input += synapse0x2108ea0();
   input += synapse0x2108ee0();
   input += synapse0x2108f20();
   input += synapse0x2108f60();
   input += synapse0x2108fa0();
   input += synapse0x2108fe0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x2108650() {
   double input = input0x2108650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x210f850() {
   double input = -0.0905992;
   input += synapse0x20e5580();
   input += synapse0x20e55c0();
   input += synapse0x20e6a90();
   input += synapse0x20e6ad0();
   input += synapse0x20e7460();
   input += synapse0x20e74a0();
   input += synapse0x20e8230();
   input += synapse0x20e8270();
   input += synapse0x20e8c00();
   input += synapse0x20e8c40();
   input += synapse0x20e95d0();
   input += synapse0x20e9610();
   input += synapse0x20ea0b0();
   input += synapse0x20ea0f0();
   input += synapse0x20eaa80();
   input += synapse0x20eaac0();
   input += synapse0x20e7b60();
   input += synapse0x20e7ba0();
   input += synapse0x20ec630();
   input += synapse0x20ec670();
   input += synapse0x20ed000();
   input += synapse0x20ed040();
   input += synapse0x20ed9d0();
   input += synapse0x20eda10();
   input += synapse0x20ee3a0();
   input += synapse0x20ee3e0();
   input += synapse0x20e2510();
   input += synapse0x20e2550();
   input += synapse0x20f0490();
   input += synapse0x20f04d0();
   input += synapse0x20f0e60();
   input += synapse0x20f0ea0();
   input += synapse0x20f1830();
   input += synapse0x20f1870();
   input += synapse0x20f2200();
   input += synapse0x20f2240();
   input += synapse0x20f2bd0();
   input += synapse0x20f2c10();
   input += synapse0x20eb720();
   input += synapse0x20eb760();
   input += synapse0x20f4fd0();
   input += synapse0x20f5010();
   input += synapse0x20f5960();
   input += synapse0x20f59a0();
   input += synapse0x20f6330();
   input += synapse0x20f6370();
   input += synapse0x20f6d00();
   input += synapse0x20f6d40();
   input += synapse0x20f76d0();
   input += synapse0x20f7710();
   return input;
}

double NNfunction_ss_sLdR::neuron0x210f850() {
   double input = input0x210f850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x210fbf0() {
   double input = -0.660106;
   input += synapse0x20f9e10();
   input += synapse0x20f9e50();
   input += synapse0x20ef3d0();
   input += synapse0x20ef410();
   input += synapse0x20fc9f0();
   input += synapse0x20fca30();
   input += synapse0x20fd3c0();
   input += synapse0x20fd400();
   input += synapse0x20fdd90();
   input += synapse0x20fddd0();
   input += synapse0x20fe760();
   input += synapse0x20fe7a0();
   input += synapse0x20ff130();
   input += synapse0x20ff170();
   input += synapse0x20ffb00();
   input += synapse0x20ffb40();
   input += synapse0x21004d0();
   input += synapse0x2100510();
   input += synapse0x2100ea0();
   input += synapse0x2100ee0();
   input += synapse0x2101a80();
   input += synapse0x2101ac0();
   input += synapse0x2102450();
   input += synapse0x2102490();
   input += synapse0x20f32d0();
   input += synapse0x20f3310();
   input += synapse0x20f3ca0();
   input += synapse0x20f3ce0();
   input += synapse0x20f4670();
   input += synapse0x20f46b0();
   input += synapse0x2106b90();
   input += synapse0x2106bd0();
   input += synapse0x2107560();
   input += synapse0x21075a0();
   input += synapse0x2107f30();
   input += synapse0x2107f70();
   input += synapse0x2108900();
   input += synapse0x2108940();
   input += synapse0x20e47f0();
   input += synapse0x20e4830();
   input += synapse0x20f80a0();
   input += synapse0x20f80e0();
   input += synapse0x2109020();
   input += synapse0x2109060();
   input += synapse0x21090a0();
   input += synapse0x21090e0();
   input += synapse0x210ff90();
   input += synapse0x210ffd0();
   input += synapse0x2110010();
   input += synapse0x2110050();
   return input;
}

double NNfunction_ss_sLdR::neuron0x210fbf0() {
   double input = input0x210fbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x2110090() {
   double input = -0.93832;
   input += synapse0x21103d0();
   input += synapse0x2110410();
   input += synapse0x2110450();
   input += synapse0x2110490();
   input += synapse0x21104d0();
   input += synapse0x2110510();
   input += synapse0x2110550();
   input += synapse0x2110590();
   input += synapse0x21105d0();
   input += synapse0x2110610();
   input += synapse0x2110650();
   input += synapse0x2110690();
   input += synapse0x21106d0();
   input += synapse0x2110710();
   input += synapse0x2110750();
   input += synapse0x2110790();
   input += synapse0x2110220();
   input += synapse0x2110260();
   input += synapse0x21108e0();
   input += synapse0x2110920();
   input += synapse0x2110960();
   input += synapse0x21109a0();
   input += synapse0x21109e0();
   input += synapse0x2110a20();
   input += synapse0x2110a60();
   input += synapse0x2110aa0();
   input += synapse0x2110ae0();
   input += synapse0x2110b20();
   input += synapse0x2110b60();
   input += synapse0x2110ba0();
   input += synapse0x2110be0();
   input += synapse0x2110c20();
   input += synapse0x21107d0();
   input += synapse0x2110810();
   input += synapse0x2110850();
   input += synapse0x2110890();
   input += synapse0x2110e70();
   input += synapse0x2110eb0();
   input += synapse0x2110ef0();
   input += synapse0x2110f30();
   input += synapse0x2110f70();
   input += synapse0x2110fb0();
   input += synapse0x2110ff0();
   input += synapse0x2111030();
   input += synapse0x2111070();
   input += synapse0x21110b0();
   input += synapse0x21110f0();
   input += synapse0x2111130();
   input += synapse0x2111170();
   input += synapse0x21111b0();
   return input;
}

double NNfunction_ss_sLdR::neuron0x2110090() {
   double input = input0x2110090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x21111f0() {
   double input = 0.598234;
   input += synapse0x2111530();
   input += synapse0x2111570();
   input += synapse0x21115b0();
   input += synapse0x21115f0();
   input += synapse0x2111630();
   input += synapse0x2111670();
   input += synapse0x21116b0();
   input += synapse0x21116f0();
   input += synapse0x2111730();
   input += synapse0x2111770();
   input += synapse0x21117b0();
   input += synapse0x21117f0();
   input += synapse0x2111830();
   input += synapse0x2111870();
   input += synapse0x21118b0();
   input += synapse0x21118f0();
   input += synapse0x2111380();
   input += synapse0x21113c0();
   input += synapse0x2111a40();
   input += synapse0x2111a80();
   input += synapse0x2111ac0();
   input += synapse0x2111b00();
   input += synapse0x2111b40();
   input += synapse0x2111b80();
   input += synapse0x2111bc0();
   input += synapse0x2111c00();
   input += synapse0x2111c40();
   input += synapse0x2111c80();
   input += synapse0x2111cc0();
   input += synapse0x2111d00();
   input += synapse0x2111d40();
   input += synapse0x2111d80();
   input += synapse0x2111930();
   input += synapse0x2111970();
   input += synapse0x21119b0();
   input += synapse0x21119f0();
   input += synapse0x2111fd0();
   input += synapse0x2112010();
   input += synapse0x2112050();
   input += synapse0x2112090();
   input += synapse0x21120d0();
   input += synapse0x2112110();
   input += synapse0x2112150();
   input += synapse0x2112190();
   input += synapse0x21121d0();
   input += synapse0x2112210();
   input += synapse0x2112250();
   input += synapse0x2112290();
   input += synapse0x21122d0();
   input += synapse0x2112310();
   return input;
}

double NNfunction_ss_sLdR::neuron0x21111f0() {
   double input = input0x21111f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x2112350() {
   double input = 0.00741921;
   input += synapse0x2112690();
   input += synapse0x21126d0();
   input += synapse0x2112710();
   input += synapse0x2112750();
   input += synapse0x2112790();
   input += synapse0x21127d0();
   input += synapse0x2112810();
   input += synapse0x2112850();
   input += synapse0x2112890();
   input += synapse0x21128d0();
   input += synapse0x2112910();
   input += synapse0x2112950();
   input += synapse0x2112990();
   input += synapse0x21129d0();
   input += synapse0x2112a10();
   input += synapse0x2112a50();
   input += synapse0x21124e0();
   input += synapse0x2112520();
   input += synapse0x2112ba0();
   input += synapse0x2112be0();
   input += synapse0x2112c20();
   input += synapse0x2112c60();
   input += synapse0x2112ca0();
   input += synapse0x2112ce0();
   input += synapse0x2112d20();
   input += synapse0x2112d60();
   input += synapse0x2112da0();
   input += synapse0x2112de0();
   input += synapse0x2112e20();
   input += synapse0x2112e60();
   input += synapse0x2112ea0();
   input += synapse0x2112ee0();
   input += synapse0x2112a90();
   input += synapse0x2112ad0();
   input += synapse0x2112b10();
   input += synapse0x2112b50();
   input += synapse0x2113130();
   input += synapse0x2113170();
   input += synapse0x21131b0();
   input += synapse0x21131f0();
   input += synapse0x2113230();
   input += synapse0x2113270();
   input += synapse0x21132b0();
   input += synapse0x21132f0();
   input += synapse0x2113330();
   input += synapse0x2113370();
   input += synapse0x21133b0();
   input += synapse0x21133f0();
   input += synapse0x2113430();
   input += synapse0x2113470();
   return input;
}

double NNfunction_ss_sLdR::neuron0x2112350() {
   double input = input0x2112350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdR::input0x21134b0() {
   double input = 6.55589;
   input += synapse0x20e4590();
   input += synapse0x21136d0();
   input += synapse0x2113710();
   input += synapse0x2113750();
   input += synapse0x2113790();
   return input;
}

double NNfunction_ss_sLdR::neuron0x21134b0() {
   double input = input0x21134b0();
   return (input * 1)+0;
}

double NNfunction_ss_sLdR::synapse0x1e9f3e0() {
   return (neuron0x20df570()*0.174056);
}

double NNfunction_ss_sLdR::synapse0x20df430() {
   return (neuron0x20df8b0()*0.485075);
}

double NNfunction_ss_sLdR::synapse0x20df470() {
   return (neuron0x20dfbf0()*-0.444105);
}

double NNfunction_ss_sLdR::synapse0x20e4880() {
   return (neuron0x20dff30()*0.816458);
}

double NNfunction_ss_sLdR::synapse0x20e48c0() {
   return (neuron0x20e0270()*0.39278);
}

double NNfunction_ss_sLdR::synapse0x20e4900() {
   return (neuron0x20e05b0()*1.49725);
}

double NNfunction_ss_sLdR::synapse0x20e4940() {
   return (neuron0x20e08f0()*-0.581798);
}

double NNfunction_ss_sLdR::synapse0x20e4980() {
   return (neuron0x20e0c30()*-0.561484);
}

double NNfunction_ss_sLdR::synapse0x20e49c0() {
   return (neuron0x20e0f70()*-1.1208);
}

double NNfunction_ss_sLdR::synapse0x20e4a00() {
   return (neuron0x20e12b0()*0.596387);
}

double NNfunction_ss_sLdR::synapse0x20e4a40() {
   return (neuron0x20e15f0()*-0.159164);
}

double NNfunction_ss_sLdR::synapse0x20e4a80() {
   return (neuron0x20e1930()*-1.39933);
}

double NNfunction_ss_sLdR::synapse0x20e4ac0() {
   return (neuron0x20e1c70()*0.244604);
}

double NNfunction_ss_sLdR::synapse0x20e4b00() {
   return (neuron0x20e1fb0()*0.474632);
}

double NNfunction_ss_sLdR::synapse0x20e4b40() {
   return (neuron0x20e22f0()*-0.459915);
}

double NNfunction_ss_sLdR::synapse0x20e4b80() {
   return (neuron0x20e2630()*-0.36346);
}

double NNfunction_ss_sLdR::synapse0x20df3a0() {
   return (neuron0x20e2970()*-0.572635);
}

double NNfunction_ss_sLdR::synapse0x20df3e0() {
   return (neuron0x20e2ed0()*0.425153);
}

double NNfunction_ss_sLdR::synapse0x1e90c80() {
   return (neuron0x20e30f0()*-0.197743);
}

double NNfunction_ss_sLdR::synapse0x1e90cc0() {
   return (neuron0x20e3430()*-0.574335);
}

double NNfunction_ss_sLdR::synapse0x20e4de0() {
   return (neuron0x20e3770()*1.40091);
}

double NNfunction_ss_sLdR::synapse0x20e4e20() {
   return (neuron0x20e3ab0()*0.700161);
}

double NNfunction_ss_sLdR::synapse0x20e4e60() {
   return (neuron0x20e3df0()*0.18996);
}

double NNfunction_ss_sLdR::synapse0x20e4ea0() {
   return (neuron0x20e4130()*-0.429736);
}

double NNfunction_ss_sLdR::synapse0x20e5220() {
   return (neuron0x20df570()*-0.259738);
}

double NNfunction_ss_sLdR::synapse0x20e5260() {
   return (neuron0x20df8b0()*0.270373);
}

double NNfunction_ss_sLdR::synapse0x20e52a0() {
   return (neuron0x20dfbf0()*-0.211151);
}

double NNfunction_ss_sLdR::synapse0x20e52e0() {
   return (neuron0x20dff30()*-0.398722);
}

double NNfunction_ss_sLdR::synapse0x20e5320() {
   return (neuron0x20e0270()*-0.0140506);
}

double NNfunction_ss_sLdR::synapse0x20e5360() {
   return (neuron0x20e05b0()*0.216263);
}

double NNfunction_ss_sLdR::synapse0x20e53a0() {
   return (neuron0x20e08f0()*0.114539);
}

double NNfunction_ss_sLdR::synapse0x20e53e0() {
   return (neuron0x20e0c30()*0.153684);
}

double NNfunction_ss_sLdR::synapse0x20e5420() {
   return (neuron0x20e0f70()*0.450338);
}

double NNfunction_ss_sLdR::synapse0x20e4cd0() {
   return (neuron0x20e12b0()*-0.377955);
}

double NNfunction_ss_sLdR::synapse0x20e4d10() {
   return (neuron0x20e15f0()*-0.346314);
}

double NNfunction_ss_sLdR::synapse0x20e4d50() {
   return (neuron0x20e1930()*0.697734);
}

double NNfunction_ss_sLdR::synapse0x20e4d90() {
   return (neuron0x20e1c70()*-0.654847);
}

double NNfunction_ss_sLdR::synapse0x20e5670() {
   return (neuron0x20e1fb0()*-0.498237);
}

double NNfunction_ss_sLdR::synapse0x20e56b0() {
   return (neuron0x20e22f0()*-0.212859);
}

double NNfunction_ss_sLdR::synapse0x20e56f0() {
   return (neuron0x20e2630()*-0.648049);
}

double NNfunction_ss_sLdR::synapse0x20e5070() {
   return (neuron0x20e2970()*-0.785754);
}

double NNfunction_ss_sLdR::synapse0x20e50b0() {
   return (neuron0x20e2ed0()*-0.00820591);
}

double NNfunction_ss_sLdR::synapse0x20e5840() {
   return (neuron0x20e30f0()*0.304372);
}

double NNfunction_ss_sLdR::synapse0x20e5880() {
   return (neuron0x20e3430()*0.801956);
}

double NNfunction_ss_sLdR::synapse0x20e58c0() {
   return (neuron0x20e3770()*-1.15);
}

double NNfunction_ss_sLdR::synapse0x20e5900() {
   return (neuron0x20e3ab0()*-0.4859);
}

double NNfunction_ss_sLdR::synapse0x20e5940() {
   return (neuron0x20e3df0()*-0.103427);
}

double NNfunction_ss_sLdR::synapse0x20e5980() {
   return (neuron0x20e4130()*0.57881);
}

double NNfunction_ss_sLdR::synapse0x20e5d00() {
   return (neuron0x20df570()*0.0804401);
}

double NNfunction_ss_sLdR::synapse0x20e5d40() {
   return (neuron0x20df8b0()*0.184616);
}

double NNfunction_ss_sLdR::synapse0x20e5d80() {
   return (neuron0x20dfbf0()*-0.289327);
}

double NNfunction_ss_sLdR::synapse0x20e5dc0() {
   return (neuron0x20dff30()*-0.621186);
}

double NNfunction_ss_sLdR::synapse0x20e5e00() {
   return (neuron0x20e0270()*0.293586);
}

double NNfunction_ss_sLdR::synapse0x20e5e40() {
   return (neuron0x20e05b0()*0.744223);
}

double NNfunction_ss_sLdR::synapse0x20e5e80() {
   return (neuron0x20e08f0()*0.218132);
}

double NNfunction_ss_sLdR::synapse0x20e5ec0() {
   return (neuron0x20e0c30()*0.0934092);
}

double NNfunction_ss_sLdR::synapse0x20e5f00() {
   return (neuron0x20e0f70()*-0.0272549);
}

double NNfunction_ss_sLdR::synapse0x20e5f40() {
   return (neuron0x20e12b0()*-0.890411);
}

double NNfunction_ss_sLdR::synapse0x20e5f80() {
   return (neuron0x20e15f0()*-0.0837241);
}

double NNfunction_ss_sLdR::synapse0x20e5fc0() {
   return (neuron0x20e1930()*-0.167435);
}

double NNfunction_ss_sLdR::synapse0x20e6000() {
   return (neuron0x20e1c70()*0.681659);
}

double NNfunction_ss_sLdR::synapse0x20e6040() {
   return (neuron0x20e1fb0()*-1.15274);
}

double NNfunction_ss_sLdR::synapse0x20e6080() {
   return (neuron0x20e22f0()*-0.12904);
}

double NNfunction_ss_sLdR::synapse0x20e60c0() {
   return (neuron0x20e2630()*-0.587265);
}

double NNfunction_ss_sLdR::synapse0x20e5b50() {
   return (neuron0x20e2970()*0.089197);
}

double NNfunction_ss_sLdR::synapse0x20e5b90() {
   return (neuron0x20e2ed0()*0.857689);
}

double NNfunction_ss_sLdR::synapse0x1e9ead0() {
   return (neuron0x20e30f0()*-0.499964);
}

double NNfunction_ss_sLdR::synapse0x1e9eb10() {
   return (neuron0x20e3430()*-0.143588);
}

double NNfunction_ss_sLdR::synapse0x20ce600() {
   return (neuron0x20e3770()*0.498063);
}

double NNfunction_ss_sLdR::synapse0x20ce640() {
   return (neuron0x20e3ab0()*0.618592);
}

double NNfunction_ss_sLdR::synapse0x20ce680() {
   return (neuron0x20e3df0()*0.534025);
}

double NNfunction_ss_sLdR::synapse0x20df4b0() {
   return (neuron0x20e4130()*-0.0158583);
}

double NNfunction_ss_sLdR::synapse0x20e5610() {
   return (neuron0x20df570()*-0.00689798);
}

double NNfunction_ss_sLdR::synapse0x20df4f0() {
   return (neuron0x20df8b0()*0.1083);
}

double NNfunction_ss_sLdR::synapse0x20df530() {
   return (neuron0x20dfbf0()*-1.31033);
}

double NNfunction_ss_sLdR::synapse0x20e6210() {
   return (neuron0x20dff30()*-0.0889);
}

double NNfunction_ss_sLdR::synapse0x20e6250() {
   return (neuron0x20e0270()*-0.0122777);
}

double NNfunction_ss_sLdR::synapse0x20e6290() {
   return (neuron0x20e05b0()*0.0100792);
}

double NNfunction_ss_sLdR::synapse0x20e62d0() {
   return (neuron0x20e08f0()*-0.0102233);
}

double NNfunction_ss_sLdR::synapse0x20e6310() {
   return (neuron0x20e0c30()*-0.0929707);
}

double NNfunction_ss_sLdR::synapse0x20e6350() {
   return (neuron0x20e0f70()*-0.0443487);
}

double NNfunction_ss_sLdR::synapse0x20e6390() {
   return (neuron0x20e12b0()*-0.00254703);
}

double NNfunction_ss_sLdR::synapse0x20e63d0() {
   return (neuron0x20e15f0()*-0.0271232);
}

double NNfunction_ss_sLdR::synapse0x20e6410() {
   return (neuron0x20e1930()*0.023503);
}

double NNfunction_ss_sLdR::synapse0x20e6450() {
   return (neuron0x20e1c70()*0.559101);
}

double NNfunction_ss_sLdR::synapse0x20e6490() {
   return (neuron0x20e1fb0()*-0.0938854);
}

double NNfunction_ss_sLdR::synapse0x20e64d0() {
   return (neuron0x20e22f0()*-0.101033);
}

double NNfunction_ss_sLdR::synapse0x20e6510() {
   return (neuron0x20e2630()*-0.0618593);
}

double NNfunction_ss_sLdR::synapse0x20e5460() {
   return (neuron0x20e2970()*-0.0347613);
}

double NNfunction_ss_sLdR::synapse0x20e54a0() {
   return (neuron0x20e2ed0()*-0.130203);
}

double NNfunction_ss_sLdR::synapse0x20e6660() {
   return (neuron0x20e30f0()*-0.00150061);
}

double NNfunction_ss_sLdR::synapse0x20e66a0() {
   return (neuron0x20e3430()*-0.0482822);
}

double NNfunction_ss_sLdR::synapse0x20e66e0() {
   return (neuron0x20e3770()*0.0102762);
}

double NNfunction_ss_sLdR::synapse0x20e6720() {
   return (neuron0x20e3ab0()*0.105492);
}

double NNfunction_ss_sLdR::synapse0x20e6760() {
   return (neuron0x20e3df0()*0.0845792);
}

double NNfunction_ss_sLdR::synapse0x20e67a0() {
   return (neuron0x20e4130()*-0.00989034);
}

double NNfunction_ss_sLdR::synapse0x20e6b20() {
   return (neuron0x20df570()*0.0238287);
}

double NNfunction_ss_sLdR::synapse0x20e6b60() {
   return (neuron0x20df8b0()*-0.0083566);
}

double NNfunction_ss_sLdR::synapse0x20e6ba0() {
   return (neuron0x20dfbf0()*0.0310901);
}

double NNfunction_ss_sLdR::synapse0x20e6be0() {
   return (neuron0x20dff30()*-2.91832);
}

double NNfunction_ss_sLdR::synapse0x20e6c20() {
   return (neuron0x20e0270()*0.0331174);
}

double NNfunction_ss_sLdR::synapse0x20e6c60() {
   return (neuron0x20e05b0()*0.00344133);
}

double NNfunction_ss_sLdR::synapse0x20e6ca0() {
   return (neuron0x20e08f0()*0.00429246);
}

double NNfunction_ss_sLdR::synapse0x20e6ce0() {
   return (neuron0x20e0c30()*0.00487349);
}

double NNfunction_ss_sLdR::synapse0x20e6d20() {
   return (neuron0x20e0f70()*0.00352378);
}

double NNfunction_ss_sLdR::synapse0x20e6d60() {
   return (neuron0x20e12b0()*-0.0195243);
}

double NNfunction_ss_sLdR::synapse0x20e6da0() {
   return (neuron0x20e15f0()*-0.00800181);
}

double NNfunction_ss_sLdR::synapse0x20e6de0() {
   return (neuron0x20e1930()*0.0337439);
}

double NNfunction_ss_sLdR::synapse0x20e6e20() {
   return (neuron0x20e1c70()*0.573929);
}

double NNfunction_ss_sLdR::synapse0x20e6e60() {
   return (neuron0x20e1fb0()*-0.0374547);
}

double NNfunction_ss_sLdR::synapse0x20e6ea0() {
   return (neuron0x20e22f0()*-0.0146833);
}

double NNfunction_ss_sLdR::synapse0x20e6ee0() {
   return (neuron0x20e2630()*0.016333);
}

double NNfunction_ss_sLdR::synapse0x20e6970() {
   return (neuron0x20e2970()*0.0149731);
}

double NNfunction_ss_sLdR::synapse0x20e69b0() {
   return (neuron0x20e2ed0()*0.818286);
}

double NNfunction_ss_sLdR::synapse0x20e7030() {
   return (neuron0x20e30f0()*0.00275515);
}

double NNfunction_ss_sLdR::synapse0x20e7070() {
   return (neuron0x20e3430()*-0.0189793);
}

double NNfunction_ss_sLdR::synapse0x20e70b0() {
   return (neuron0x20e3770()*-0.0138983);
}

double NNfunction_ss_sLdR::synapse0x20e70f0() {
   return (neuron0x20e3ab0()*-0.0139481);
}

double NNfunction_ss_sLdR::synapse0x20e7130() {
   return (neuron0x20e3df0()*0.00617052);
}

double NNfunction_ss_sLdR::synapse0x20e7170() {
   return (neuron0x20e4130()*-0.0281495);
}

double NNfunction_ss_sLdR::synapse0x20e74f0() {
   return (neuron0x20df570()*-0.753548);
}

double NNfunction_ss_sLdR::synapse0x20e7530() {
   return (neuron0x20df8b0()*-0.0249403);
}

double NNfunction_ss_sLdR::synapse0x20e7570() {
   return (neuron0x20dfbf0()*0.456592);
}

double NNfunction_ss_sLdR::synapse0x20e75b0() {
   return (neuron0x20dff30()*-0.885012);
}

double NNfunction_ss_sLdR::synapse0x20e75f0() {
   return (neuron0x20e0270()*-0.319642);
}

double NNfunction_ss_sLdR::synapse0x20e7630() {
   return (neuron0x20e05b0()*-0.916052);
}

double NNfunction_ss_sLdR::synapse0x20e7670() {
   return (neuron0x20e08f0()*0.983606);
}

double NNfunction_ss_sLdR::synapse0x20e76b0() {
   return (neuron0x20e0c30()*0.139566);
}

double NNfunction_ss_sLdR::synapse0x20e76f0() {
   return (neuron0x20e0f70()*0.4162);
}

double NNfunction_ss_sLdR::synapse0x1e9ee40() {
   return (neuron0x20e12b0()*0.715362);
}

double NNfunction_ss_sLdR::synapse0x1e9ee80() {
   return (neuron0x20e15f0()*-0.32176);
}

double NNfunction_ss_sLdR::synapse0x1e9eec0() {
   return (neuron0x20e1930()*-0.125199);
}

double NNfunction_ss_sLdR::synapse0x1e9ef00() {
   return (neuron0x20e1c70()*0.20314);
}

double NNfunction_ss_sLdR::synapse0x1e9ef40() {
   return (neuron0x20e1fb0()*-0.454467);
}

double NNfunction_ss_sLdR::synapse0x1e9ef80() {
   return (neuron0x20e22f0()*0.427536);
}

double NNfunction_ss_sLdR::synapse0x1e9efc0() {
   return (neuron0x20e2630()*-0.874038);
}

double NNfunction_ss_sLdR::synapse0x20e7340() {
   return (neuron0x20e2970()*-0.532796);
}

double NNfunction_ss_sLdR::synapse0x20e7380() {
   return (neuron0x20e2ed0()*-0.945389);
}

double NNfunction_ss_sLdR::synapse0x1e9f110() {
   return (neuron0x20e30f0()*0.629962);
}

double NNfunction_ss_sLdR::synapse0x1e9f150() {
   return (neuron0x20e3430()*-0.218526);
}

double NNfunction_ss_sLdR::synapse0x1e9f190() {
   return (neuron0x20e3770()*-0.740346);
}

double NNfunction_ss_sLdR::synapse0x1e9f1d0() {
   return (neuron0x20e3ab0()*-0.0419203);
}

double NNfunction_ss_sLdR::synapse0x1e9f210() {
   return (neuron0x20e3df0()*-0.609331);
}

double NNfunction_ss_sLdR::synapse0x20e7f40() {
   return (neuron0x20e4130()*-0.298139);
}

double NNfunction_ss_sLdR::synapse0x20e82c0() {
   return (neuron0x20df570()*0.439878);
}

double NNfunction_ss_sLdR::synapse0x20e8300() {
   return (neuron0x20df8b0()*0.0449332);
}

double NNfunction_ss_sLdR::synapse0x20e8340() {
   return (neuron0x20dfbf0()*-1.1259);
}

double NNfunction_ss_sLdR::synapse0x20e8380() {
   return (neuron0x20dff30()*-0.704188);
}

double NNfunction_ss_sLdR::synapse0x20e83c0() {
   return (neuron0x20e0270()*-0.356375);
}

double NNfunction_ss_sLdR::synapse0x20e8400() {
   return (neuron0x20e05b0()*0.153091);
}

double NNfunction_ss_sLdR::synapse0x20e8440() {
   return (neuron0x20e08f0()*-0.261097);
}

double NNfunction_ss_sLdR::synapse0x20e8480() {
   return (neuron0x20e0c30()*0.0731088);
}

double NNfunction_ss_sLdR::synapse0x20e84c0() {
   return (neuron0x20e0f70()*0.443824);
}

double NNfunction_ss_sLdR::synapse0x20e8500() {
   return (neuron0x20e12b0()*0.118059);
}

double NNfunction_ss_sLdR::synapse0x20e8540() {
   return (neuron0x20e15f0()*-0.181997);
}

double NNfunction_ss_sLdR::synapse0x20e8580() {
   return (neuron0x20e1930()*-0.468915);
}

double NNfunction_ss_sLdR::synapse0x20e85c0() {
   return (neuron0x20e1c70()*-1.37406);
}

double NNfunction_ss_sLdR::synapse0x20e8600() {
   return (neuron0x20e1fb0()*-0.293251);
}

double NNfunction_ss_sLdR::synapse0x20e8640() {
   return (neuron0x20e22f0()*0.493713);
}

double NNfunction_ss_sLdR::synapse0x20e8680() {
   return (neuron0x20e2630()*-0.272206);
}

double NNfunction_ss_sLdR::synapse0x20e8110() {
   return (neuron0x20e2970()*-0.610865);
}

double NNfunction_ss_sLdR::synapse0x20e8150() {
   return (neuron0x20e2ed0()*-0.892487);
}

double NNfunction_ss_sLdR::synapse0x20e87d0() {
   return (neuron0x20e30f0()*-0.212452);
}

double NNfunction_ss_sLdR::synapse0x20e8810() {
   return (neuron0x20e3430()*-0.351553);
}

double NNfunction_ss_sLdR::synapse0x20e8850() {
   return (neuron0x20e3770()*-0.355473);
}

double NNfunction_ss_sLdR::synapse0x20e8890() {
   return (neuron0x20e3ab0()*-0.079596);
}

double NNfunction_ss_sLdR::synapse0x20e88d0() {
   return (neuron0x20e3df0()*-0.139188);
}

double NNfunction_ss_sLdR::synapse0x20e8910() {
   return (neuron0x20e4130()*-0.240603);
}

double NNfunction_ss_sLdR::synapse0x20e8c90() {
   return (neuron0x20df570()*-0.218896);
}

double NNfunction_ss_sLdR::synapse0x20e8cd0() {
   return (neuron0x20df8b0()*-0.880958);
}

double NNfunction_ss_sLdR::synapse0x20e8d10() {
   return (neuron0x20dfbf0()*-0.669867);
}

double NNfunction_ss_sLdR::synapse0x20e8d50() {
   return (neuron0x20dff30()*0.00118356);
}

double NNfunction_ss_sLdR::synapse0x20e8d90() {
   return (neuron0x20e0270()*-0.225685);
}

double NNfunction_ss_sLdR::synapse0x20e8dd0() {
   return (neuron0x20e05b0()*0.482321);
}

double NNfunction_ss_sLdR::synapse0x20e8e10() {
   return (neuron0x20e08f0()*-0.379226);
}

double NNfunction_ss_sLdR::synapse0x20e8e50() {
   return (neuron0x20e0c30()*0.3851);
}

double NNfunction_ss_sLdR::synapse0x20e8e90() {
   return (neuron0x20e0f70()*0.919294);
}

double NNfunction_ss_sLdR::synapse0x20e8ed0() {
   return (neuron0x20e12b0()*-0.746721);
}

double NNfunction_ss_sLdR::synapse0x20e8f10() {
   return (neuron0x20e15f0()*0.504761);
}

double NNfunction_ss_sLdR::synapse0x20e8f50() {
   return (neuron0x20e1930()*-0.27999);
}

double NNfunction_ss_sLdR::synapse0x20e8f90() {
   return (neuron0x20e1c70()*-0.863232);
}

double NNfunction_ss_sLdR::synapse0x20e8fd0() {
   return (neuron0x20e1fb0()*-0.726606);
}

double NNfunction_ss_sLdR::synapse0x20e9010() {
   return (neuron0x20e22f0()*-0.165407);
}

double NNfunction_ss_sLdR::synapse0x20e9050() {
   return (neuron0x20e2630()*0.181546);
}

double NNfunction_ss_sLdR::synapse0x20e8ae0() {
   return (neuron0x20e2970()*-0.558798);
}

double NNfunction_ss_sLdR::synapse0x20e8b20() {
   return (neuron0x20e2ed0()*0.827493);
}

double NNfunction_ss_sLdR::synapse0x20e91a0() {
   return (neuron0x20e30f0()*-0.0826645);
}

double NNfunction_ss_sLdR::synapse0x20e91e0() {
   return (neuron0x20e3430()*-0.578514);
}

double NNfunction_ss_sLdR::synapse0x20e9220() {
   return (neuron0x20e3770()*0.747026);
}

double NNfunction_ss_sLdR::synapse0x20e9260() {
   return (neuron0x20e3ab0()*0.24652);
}

double NNfunction_ss_sLdR::synapse0x20e92a0() {
   return (neuron0x20e3df0()*0.25686);
}

double NNfunction_ss_sLdR::synapse0x20e92e0() {
   return (neuron0x20e4130()*0.116631);
}

double NNfunction_ss_sLdR::synapse0x20e2dc0() {
   return (neuron0x20df570()*-0.612954);
}

double NNfunction_ss_sLdR::synapse0x20e2e00() {
   return (neuron0x20df8b0()*0.255646);
}

double NNfunction_ss_sLdR::synapse0x20e2e40() {
   return (neuron0x20dfbf0()*-0.0594497);
}

double NNfunction_ss_sLdR::synapse0x20e2e80() {
   return (neuron0x20dff30()*0.0460209);
}

double NNfunction_ss_sLdR::synapse0x20e9870() {
   return (neuron0x20e0270()*-0.559622);
}

double NNfunction_ss_sLdR::synapse0x20e98b0() {
   return (neuron0x20e05b0()*-0.580622);
}

double NNfunction_ss_sLdR::synapse0x20e98f0() {
   return (neuron0x20e08f0()*0.70565);
}

double NNfunction_ss_sLdR::synapse0x20e9930() {
   return (neuron0x20e0c30()*-0.247207);
}

double NNfunction_ss_sLdR::synapse0x20e9970() {
   return (neuron0x20e0f70()*1.00168);
}

double NNfunction_ss_sLdR::synapse0x20e99b0() {
   return (neuron0x20e12b0()*-0.175419);
}

double NNfunction_ss_sLdR::synapse0x20e99f0() {
   return (neuron0x20e15f0()*0.399876);
}

double NNfunction_ss_sLdR::synapse0x20e9a30() {
   return (neuron0x20e1930()*0.60701);
}

double NNfunction_ss_sLdR::synapse0x20e9a70() {
   return (neuron0x20e1c70()*2.24864);
}

double NNfunction_ss_sLdR::synapse0x20e9ab0() {
   return (neuron0x20e1fb0()*-0.397961);
}

double NNfunction_ss_sLdR::synapse0x20e9af0() {
   return (neuron0x20e22f0()*-0.758864);
}

double NNfunction_ss_sLdR::synapse0x20e9b30() {
   return (neuron0x20e2630()*1.34283);
}

double NNfunction_ss_sLdR::synapse0x20e94b0() {
   return (neuron0x20e2970()*0.648874);
}

double NNfunction_ss_sLdR::synapse0x20e94f0() {
   return (neuron0x20e2ed0()*0.377709);
}

double NNfunction_ss_sLdR::synapse0x20e9c80() {
   return (neuron0x20e30f0()*0.460794);
}

double NNfunction_ss_sLdR::synapse0x20e9cc0() {
   return (neuron0x20e3430()*0.674576);
}

double NNfunction_ss_sLdR::synapse0x20e9d00() {
   return (neuron0x20e3770()*0.247076);
}

double NNfunction_ss_sLdR::synapse0x20e9d40() {
   return (neuron0x20e3ab0()*0.271546);
}

double NNfunction_ss_sLdR::synapse0x20e9d80() {
   return (neuron0x20e3df0()*-0.436487);
}

double NNfunction_ss_sLdR::synapse0x20e9dc0() {
   return (neuron0x20e4130()*0.671919);
}

double NNfunction_ss_sLdR::synapse0x20ea140() {
   return (neuron0x20df570()*-0.76165);
}

double NNfunction_ss_sLdR::synapse0x20ea180() {
   return (neuron0x20df8b0()*1.18717);
}

double NNfunction_ss_sLdR::synapse0x20ea1c0() {
   return (neuron0x20dfbf0()*-0.247334);
}

double NNfunction_ss_sLdR::synapse0x20ea200() {
   return (neuron0x20dff30()*0.370099);
}

double NNfunction_ss_sLdR::synapse0x20ea240() {
   return (neuron0x20e0270()*-0.275248);
}

double NNfunction_ss_sLdR::synapse0x20ea280() {
   return (neuron0x20e05b0()*0.634345);
}

double NNfunction_ss_sLdR::synapse0x20ea2c0() {
   return (neuron0x20e08f0()*0.990875);
}

double NNfunction_ss_sLdR::synapse0x20ea300() {
   return (neuron0x20e0c30()*0.277748);
}

double NNfunction_ss_sLdR::synapse0x20ea340() {
   return (neuron0x20e0f70()*0.648626);
}

double NNfunction_ss_sLdR::synapse0x20ea380() {
   return (neuron0x20e12b0()*-0.0720543);
}

double NNfunction_ss_sLdR::synapse0x20ea3c0() {
   return (neuron0x20e15f0()*-0.355049);
}

double NNfunction_ss_sLdR::synapse0x20ea400() {
   return (neuron0x20e1930()*0.132475);
}

double NNfunction_ss_sLdR::synapse0x20ea440() {
   return (neuron0x20e1c70()*-0.590445);
}

double NNfunction_ss_sLdR::synapse0x20ea480() {
   return (neuron0x20e1fb0()*0.136292);
}

double NNfunction_ss_sLdR::synapse0x20ea4c0() {
   return (neuron0x20e22f0()*-0.172673);
}

double NNfunction_ss_sLdR::synapse0x20ea500() {
   return (neuron0x20e2630()*0.0291085);
}

double NNfunction_ss_sLdR::synapse0x20e9f90() {
   return (neuron0x20e2970()*0.85124);
}

double NNfunction_ss_sLdR::synapse0x20e9fd0() {
   return (neuron0x20e2ed0()*-0.0326893);
}

double NNfunction_ss_sLdR::synapse0x20ea650() {
   return (neuron0x20e30f0()*-0.0470787);
}

double NNfunction_ss_sLdR::synapse0x20ea690() {
   return (neuron0x20e3430()*-0.493466);
}

double NNfunction_ss_sLdR::synapse0x20ea6d0() {
   return (neuron0x20e3770()*0.43478);
}

double NNfunction_ss_sLdR::synapse0x20ea710() {
   return (neuron0x20e3ab0()*0.171761);
}

double NNfunction_ss_sLdR::synapse0x20ea750() {
   return (neuron0x20e3df0()*0.250777);
}

double NNfunction_ss_sLdR::synapse0x20ea790() {
   return (neuron0x20e4130()*-0.9486);
}

double NNfunction_ss_sLdR::synapse0x20eab10() {
   return (neuron0x20df570()*0.240187);
}

double NNfunction_ss_sLdR::synapse0x20eab50() {
   return (neuron0x20df8b0()*-0.0598531);
}

double NNfunction_ss_sLdR::synapse0x20eab90() {
   return (neuron0x20dfbf0()*0.11974);
}

double NNfunction_ss_sLdR::synapse0x20eabd0() {
   return (neuron0x20dff30()*0.420296);
}

double NNfunction_ss_sLdR::synapse0x20eac10() {
   return (neuron0x20e0270()*0.252323);
}

double NNfunction_ss_sLdR::synapse0x20eac50() {
   return (neuron0x20e05b0()*-0.339221);
}

double NNfunction_ss_sLdR::synapse0x20eac90() {
   return (neuron0x20e08f0()*-0.64182);
}

double NNfunction_ss_sLdR::synapse0x20eacd0() {
   return (neuron0x20e0c30()*0.375787);
}

double NNfunction_ss_sLdR::synapse0x20ead10() {
   return (neuron0x20e0f70()*0.056261);
}

double NNfunction_ss_sLdR::synapse0x20ead50() {
   return (neuron0x20e12b0()*0.311604);
}

double NNfunction_ss_sLdR::synapse0x20ead90() {
   return (neuron0x20e15f0()*-0.0585601);
}

double NNfunction_ss_sLdR::synapse0x20eadd0() {
   return (neuron0x20e1930()*1.02066);
}

double NNfunction_ss_sLdR::synapse0x20eae10() {
   return (neuron0x20e1c70()*-0.149821);
}

double NNfunction_ss_sLdR::synapse0x20eae50() {
   return (neuron0x20e1fb0()*0.660485);
}

double NNfunction_ss_sLdR::synapse0x20eae90() {
   return (neuron0x20e22f0()*1.26594);
}

double NNfunction_ss_sLdR::synapse0x20eaed0() {
   return (neuron0x20e2630()*0.638471);
}

double NNfunction_ss_sLdR::synapse0x20ea960() {
   return (neuron0x20e2970()*0.340277);
}

double NNfunction_ss_sLdR::synapse0x20ea9a0() {
   return (neuron0x20e2ed0()*0.00771112);
}

double NNfunction_ss_sLdR::synapse0x20e7730() {
   return (neuron0x20e30f0()*-0.0887022);
}

double NNfunction_ss_sLdR::synapse0x20e7770() {
   return (neuron0x20e3430()*0.667026);
}

double NNfunction_ss_sLdR::synapse0x20e77b0() {
   return (neuron0x20e3770()*-0.307619);
}

double NNfunction_ss_sLdR::synapse0x20e77f0() {
   return (neuron0x20e3ab0()*0.0206717);
}

double NNfunction_ss_sLdR::synapse0x20e7830() {
   return (neuron0x20e3df0()*0.886644);
}

double NNfunction_ss_sLdR::synapse0x20e7870() {
   return (neuron0x20e4130()*0.192427);
}

double NNfunction_ss_sLdR::synapse0x20e7bf0() {
   return (neuron0x20df570()*-0.0473891);
}

double NNfunction_ss_sLdR::synapse0x20e7c30() {
   return (neuron0x20df8b0()*-0.307905);
}

double NNfunction_ss_sLdR::synapse0x20e7c70() {
   return (neuron0x20dfbf0()*0.0712598);
}

double NNfunction_ss_sLdR::synapse0x20e7cb0() {
   return (neuron0x20dff30()*-0.473556);
}

double NNfunction_ss_sLdR::synapse0x20e7cf0() {
   return (neuron0x20e0270()*-0.143454);
}

double NNfunction_ss_sLdR::synapse0x20e7d30() {
   return (neuron0x20e05b0()*0.0118159);
}

double NNfunction_ss_sLdR::synapse0x20e7d70() {
   return (neuron0x20e08f0()*-0.00579971);
}

double NNfunction_ss_sLdR::synapse0x20e7db0() {
   return (neuron0x20e0c30()*0.0142028);
}

double NNfunction_ss_sLdR::synapse0x20e7df0() {
   return (neuron0x20e0f70()*-0.200948);
}

double NNfunction_ss_sLdR::synapse0x20e7e30() {
   return (neuron0x20e12b0()*0.00429344);
}

double NNfunction_ss_sLdR::synapse0x20e7e70() {
   return (neuron0x20e15f0()*-0.067412);
}

double NNfunction_ss_sLdR::synapse0x20e7eb0() {
   return (neuron0x20e1930()*-0.091332);
}

double NNfunction_ss_sLdR::synapse0x20e7ef0() {
   return (neuron0x20e1c70()*-0.697353);
}

double NNfunction_ss_sLdR::synapse0x20ec030() {
   return (neuron0x20e1fb0()*0.283156);
}

double NNfunction_ss_sLdR::synapse0x20ec070() {
   return (neuron0x20e22f0()*0.100113);
}

double NNfunction_ss_sLdR::synapse0x20ec0b0() {
   return (neuron0x20e2630()*0.0339173);
}

double NNfunction_ss_sLdR::synapse0x20e7a40() {
   return (neuron0x20e2970()*0.192451);
}

double NNfunction_ss_sLdR::synapse0x20e7a80() {
   return (neuron0x20e2ed0()*0.0532595);
}

double NNfunction_ss_sLdR::synapse0x20ec200() {
   return (neuron0x20e30f0()*0.0189602);
}

double NNfunction_ss_sLdR::synapse0x20ec240() {
   return (neuron0x20e3430()*-0.293683);
}

double NNfunction_ss_sLdR::synapse0x20ec280() {
   return (neuron0x20e3770()*0.032539);
}

double NNfunction_ss_sLdR::synapse0x20ec2c0() {
   return (neuron0x20e3ab0()*0.0694438);
}

double NNfunction_ss_sLdR::synapse0x20ec300() {
   return (neuron0x20e3df0()*0.0139693);
}

double NNfunction_ss_sLdR::synapse0x20ec340() {
   return (neuron0x20e4130()*0.152926);
}

double NNfunction_ss_sLdR::synapse0x20ec6c0() {
   return (neuron0x20df570()*-0.17345);
}

double NNfunction_ss_sLdR::synapse0x20ec700() {
   return (neuron0x20df8b0()*-0.419959);
}

double NNfunction_ss_sLdR::synapse0x20ec740() {
   return (neuron0x20dfbf0()*0.707099);
}

double NNfunction_ss_sLdR::synapse0x20ec780() {
   return (neuron0x20dff30()*0.122991);
}

double NNfunction_ss_sLdR::synapse0x20ec7c0() {
   return (neuron0x20e0270()*0.803303);
}

double NNfunction_ss_sLdR::synapse0x20ec800() {
   return (neuron0x20e05b0()*0.706722);
}

double NNfunction_ss_sLdR::synapse0x20ec840() {
   return (neuron0x20e08f0()*-0.282045);
}

double NNfunction_ss_sLdR::synapse0x20ec880() {
   return (neuron0x20e0c30()*-0.315445);
}

double NNfunction_ss_sLdR::synapse0x20ec8c0() {
   return (neuron0x20e0f70()*0.134234);
}

double NNfunction_ss_sLdR::synapse0x20ec900() {
   return (neuron0x20e12b0()*0.237448);
}

double NNfunction_ss_sLdR::synapse0x20ec940() {
   return (neuron0x20e15f0()*0.208997);
}

double NNfunction_ss_sLdR::synapse0x20ec980() {
   return (neuron0x20e1930()*-0.775019);
}

double NNfunction_ss_sLdR::synapse0x20ec9c0() {
   return (neuron0x20e1c70()*-0.741101);
}

double NNfunction_ss_sLdR::synapse0x20eca00() {
   return (neuron0x20e1fb0()*1.17472);
}

double NNfunction_ss_sLdR::synapse0x20eca40() {
   return (neuron0x20e22f0()*0.199669);
}

double NNfunction_ss_sLdR::synapse0x20eca80() {
   return (neuron0x20e2630()*-1.16837);
}

double NNfunction_ss_sLdR::synapse0x20ec510() {
   return (neuron0x20e2970()*-0.341505);
}

double NNfunction_ss_sLdR::synapse0x20ec550() {
   return (neuron0x20e2ed0()*-0.596487);
}

double NNfunction_ss_sLdR::synapse0x20ecbd0() {
   return (neuron0x20e30f0()*0.184681);
}

double NNfunction_ss_sLdR::synapse0x20ecc10() {
   return (neuron0x20e3430()*-0.178069);
}

double NNfunction_ss_sLdR::synapse0x20ecc50() {
   return (neuron0x20e3770()*-0.137426);
}

double NNfunction_ss_sLdR::synapse0x20ecc90() {
   return (neuron0x20e3ab0()*-0.10385);
}

double NNfunction_ss_sLdR::synapse0x20eccd0() {
   return (neuron0x20e3df0()*0.502654);
}

double NNfunction_ss_sLdR::synapse0x20ecd10() {
   return (neuron0x20e4130()*-0.472895);
}

double NNfunction_ss_sLdR::synapse0x20ed090() {
   return (neuron0x20df570()*0.0113147);
}

double NNfunction_ss_sLdR::synapse0x20ed0d0() {
   return (neuron0x20df8b0()*-0.0170025);
}

double NNfunction_ss_sLdR::synapse0x20ed110() {
   return (neuron0x20dfbf0()*-0.0313625);
}

double NNfunction_ss_sLdR::synapse0x20ed150() {
   return (neuron0x20dff30()*-9.75564);
}

double NNfunction_ss_sLdR::synapse0x20ed190() {
   return (neuron0x20e0270()*0.0124134);
}

double NNfunction_ss_sLdR::synapse0x20ed1d0() {
   return (neuron0x20e05b0()*-0.00519817);
}

double NNfunction_ss_sLdR::synapse0x20ed210() {
   return (neuron0x20e08f0()*0.0155457);
}

double NNfunction_ss_sLdR::synapse0x20ed250() {
   return (neuron0x20e0c30()*-0.0157334);
}

double NNfunction_ss_sLdR::synapse0x20ed290() {
   return (neuron0x20e0f70()*-0.0222238);
}

double NNfunction_ss_sLdR::synapse0x20ed2d0() {
   return (neuron0x20e12b0()*-0.00230136);
}

double NNfunction_ss_sLdR::synapse0x20ed310() {
   return (neuron0x20e15f0()*-0.00809206);
}

double NNfunction_ss_sLdR::synapse0x20ed350() {
   return (neuron0x20e1930()*-0.0330548);
}

double NNfunction_ss_sLdR::synapse0x20ed390() {
   return (neuron0x20e1c70()*-0.112306);
}

double NNfunction_ss_sLdR::synapse0x20ed3d0() {
   return (neuron0x20e1fb0()*0.0211083);
}

double NNfunction_ss_sLdR::synapse0x20ed410() {
   return (neuron0x20e22f0()*0.0059469);
}

double NNfunction_ss_sLdR::synapse0x20ed450() {
   return (neuron0x20e2630()*-0.013101);
}

double NNfunction_ss_sLdR::synapse0x20ecee0() {
   return (neuron0x20e2970()*-0.0126123);
}

double NNfunction_ss_sLdR::synapse0x20ecf20() {
   return (neuron0x20e2ed0()*-0.135927);
}

double NNfunction_ss_sLdR::synapse0x20ed5a0() {
   return (neuron0x20e30f0()*-0.0299673);
}

double NNfunction_ss_sLdR::synapse0x20ed5e0() {
   return (neuron0x20e3430()*0.000504842);
}

double NNfunction_ss_sLdR::synapse0x20ed620() {
   return (neuron0x20e3770()*-0.00240517);
}

double NNfunction_ss_sLdR::synapse0x20ed660() {
   return (neuron0x20e3ab0()*-0.000385943);
}

double NNfunction_ss_sLdR::synapse0x20ed6a0() {
   return (neuron0x20e3df0()*0.00522903);
}

double NNfunction_ss_sLdR::synapse0x20ed6e0() {
   return (neuron0x20e4130()*-0.0238545);
}

double NNfunction_ss_sLdR::synapse0x20eda60() {
   return (neuron0x20df570()*0.244539);
}

double NNfunction_ss_sLdR::synapse0x20edaa0() {
   return (neuron0x20df8b0()*0.220813);
}

double NNfunction_ss_sLdR::synapse0x20edae0() {
   return (neuron0x20dfbf0()*-0.509836);
}

double NNfunction_ss_sLdR::synapse0x20edb20() {
   return (neuron0x20dff30()*0.0508508);
}

double NNfunction_ss_sLdR::synapse0x20edb60() {
   return (neuron0x20e0270()*0.1047);
}

double NNfunction_ss_sLdR::synapse0x20edba0() {
   return (neuron0x20e05b0()*0.664695);
}

double NNfunction_ss_sLdR::synapse0x20edbe0() {
   return (neuron0x20e08f0()*0.235402);
}

double NNfunction_ss_sLdR::synapse0x20edc20() {
   return (neuron0x20e0c30()*0.660838);
}

double NNfunction_ss_sLdR::synapse0x20edc60() {
   return (neuron0x20e0f70()*-0.481982);
}

double NNfunction_ss_sLdR::synapse0x20edca0() {
   return (neuron0x20e12b0()*-0.321875);
}

double NNfunction_ss_sLdR::synapse0x20edce0() {
   return (neuron0x20e15f0()*-0.432648);
}

double NNfunction_ss_sLdR::synapse0x20edd20() {
   return (neuron0x20e1930()*-0.389892);
}

double NNfunction_ss_sLdR::synapse0x20edd60() {
   return (neuron0x20e1c70()*0.212766);
}

double NNfunction_ss_sLdR::synapse0x20edda0() {
   return (neuron0x20e1fb0()*-0.383811);
}

double NNfunction_ss_sLdR::synapse0x20edde0() {
   return (neuron0x20e22f0()*0.256415);
}

double NNfunction_ss_sLdR::synapse0x20ede20() {
   return (neuron0x20e2630()*-0.286446);
}

double NNfunction_ss_sLdR::synapse0x20ed8b0() {
   return (neuron0x20e2970()*0.425829);
}

double NNfunction_ss_sLdR::synapse0x20ed8f0() {
   return (neuron0x20e2ed0()*0.487069);
}

double NNfunction_ss_sLdR::synapse0x20edf70() {
   return (neuron0x20e30f0()*1.28501);
}

double NNfunction_ss_sLdR::synapse0x20edfb0() {
   return (neuron0x20e3430()*0.682161);
}

double NNfunction_ss_sLdR::synapse0x20edff0() {
   return (neuron0x20e3770()*-0.173811);
}

double NNfunction_ss_sLdR::synapse0x20ee030() {
   return (neuron0x20e3ab0()*0.356525);
}

double NNfunction_ss_sLdR::synapse0x20ee070() {
   return (neuron0x20e3df0()*-0.215887);
}

double NNfunction_ss_sLdR::synapse0x20ee0b0() {
   return (neuron0x20e4130()*0.240857);
}

double NNfunction_ss_sLdR::synapse0x20ee430() {
   return (neuron0x20df570()*-0.0939621);
}

double NNfunction_ss_sLdR::synapse0x20df790() {
   return (neuron0x20df8b0()*0.35386);
}

double NNfunction_ss_sLdR::synapse0x20df7d0() {
   return (neuron0x20dfbf0()*0.259695);
}

double NNfunction_ss_sLdR::synapse0x20dfad0() {
   return (neuron0x20dff30()*-0.0142354);
}

double NNfunction_ss_sLdR::synapse0x20dfb10() {
   return (neuron0x20e0270()*0.381661);
}

double NNfunction_ss_sLdR::synapse0x20dfe10() {
   return (neuron0x20e05b0()*0.0408765);
}

double NNfunction_ss_sLdR::synapse0x20dfe50() {
   return (neuron0x20e08f0()*-0.0588107);
}

double NNfunction_ss_sLdR::synapse0x20e0150() {
   return (neuron0x20e0c30()*0.0647313);
}

double NNfunction_ss_sLdR::synapse0x20e0190() {
   return (neuron0x20e0f70()*0.894754);
}

double NNfunction_ss_sLdR::synapse0x20e0490() {
   return (neuron0x20e12b0()*-0.243249);
}

double NNfunction_ss_sLdR::synapse0x20e04d0() {
   return (neuron0x20e15f0()*-0.44602);
}

double NNfunction_ss_sLdR::synapse0x20e07d0() {
   return (neuron0x20e1930()*-1.22755);
}

double NNfunction_ss_sLdR::synapse0x20e0810() {
   return (neuron0x20e1c70()*-0.400033);
}

double NNfunction_ss_sLdR::synapse0x20e0b10() {
   return (neuron0x20e1fb0()*-0.316866);
}

double NNfunction_ss_sLdR::synapse0x20e0b50() {
   return (neuron0x20e22f0()*0.208068);
}

double NNfunction_ss_sLdR::synapse0x20e0e50() {
   return (neuron0x20e2630()*0.0511956);
}

double NNfunction_ss_sLdR::synapse0x20e0e90() {
   return (neuron0x20e2970()*-0.273449);
}

double NNfunction_ss_sLdR::synapse0x20e1190() {
   return (neuron0x20e2ed0()*-0.17596);
}

double NNfunction_ss_sLdR::synapse0x20e11d0() {
   return (neuron0x20e30f0()*-0.541247);
}

double NNfunction_ss_sLdR::synapse0x20e14d0() {
   return (neuron0x20e3430()*0.69864);
}

double NNfunction_ss_sLdR::synapse0x20e1510() {
   return (neuron0x20e3770()*0.0572293);
}

double NNfunction_ss_sLdR::synapse0x20e1810() {
   return (neuron0x20e3ab0()*0.0260359);
}

double NNfunction_ss_sLdR::synapse0x20e1850() {
   return (neuron0x20e3df0()*-0.0927069);
}

double NNfunction_ss_sLdR::synapse0x20e1b50() {
   return (neuron0x20e4130()*0.22813);
}

double NNfunction_ss_sLdR::synapse0x20e1b90() {
   return (neuron0x20df570()*-0.126917);
}

double NNfunction_ss_sLdR::synapse0x20e2850() {
   return (neuron0x20df8b0()*-0.15105);
}

double NNfunction_ss_sLdR::synapse0x20e2890() {
   return (neuron0x20dfbf0()*0.910985);
}

double NNfunction_ss_sLdR::synapse0x20ee280() {
   return (neuron0x20dff30()*1.35943);
}

double NNfunction_ss_sLdR::synapse0x20ee2c0() {
   return (neuron0x20e0270()*0.387211);
}

double NNfunction_ss_sLdR::synapse0x20e2b90() {
   return (neuron0x20e05b0()*0.463568);
}

double NNfunction_ss_sLdR::synapse0x20e2bd0() {
   return (neuron0x20e08f0()*-0.372098);
}

double NNfunction_ss_sLdR::synapse0x1e90b60() {
   return (neuron0x20e0c30()*0.254386);
}

double NNfunction_ss_sLdR::synapse0x1e90ba0() {
   return (neuron0x20e0f70()*0.269556);
}

double NNfunction_ss_sLdR::synapse0x20e3310() {
   return (neuron0x20e12b0()*0.0383983);
}

double NNfunction_ss_sLdR::synapse0x20e3350() {
   return (neuron0x20e15f0()*-0.113704);
}

double NNfunction_ss_sLdR::synapse0x20e3650() {
   return (neuron0x20e1930()*0.51769);
}

double NNfunction_ss_sLdR::synapse0x20e3690() {
   return (neuron0x20e1c70()*0.318154);
}

double NNfunction_ss_sLdR::synapse0x20e3990() {
   return (neuron0x20e1fb0()*0.556234);
}

double NNfunction_ss_sLdR::synapse0x20e39d0() {
   return (neuron0x20e22f0()*0.923838);
}

double NNfunction_ss_sLdR::synapse0x20e3cd0() {
   return (neuron0x20e2630()*-0.0902037);
}

double NNfunction_ss_sLdR::synapse0x20e3d10() {
   return (neuron0x20e2970()*0.0694419);
}

double NNfunction_ss_sLdR::synapse0x20e4010() {
   return (neuron0x20e2ed0()*0.600633);
}

double NNfunction_ss_sLdR::synapse0x20e4050() {
   return (neuron0x20e30f0()*0.89886);
}

double NNfunction_ss_sLdR::synapse0x20e4350() {
   return (neuron0x20e3430()*0.161144);
}

double NNfunction_ss_sLdR::synapse0x20e4390() {
   return (neuron0x20e3770()*-0.471657);
}

double NNfunction_ss_sLdR::synapse0x20e1e90() {
   return (neuron0x20e3ab0()*-0.189032);
}

double NNfunction_ss_sLdR::synapse0x20e1ed0() {
   return (neuron0x20e3df0()*0.140223);
}

double NNfunction_ss_sLdR::synapse0x20f01a0() {
   return (neuron0x20e4130()*-0.0656107);
}

double NNfunction_ss_sLdR::synapse0x20f0520() {
   return (neuron0x20df570()*0.855382);
}

double NNfunction_ss_sLdR::synapse0x20f0560() {
   return (neuron0x20df8b0()*-0.0873527);
}

double NNfunction_ss_sLdR::synapse0x20f05a0() {
   return (neuron0x20dfbf0()*1.57138);
}

double NNfunction_ss_sLdR::synapse0x20f05e0() {
   return (neuron0x20dff30()*-0.00740606);
}

double NNfunction_ss_sLdR::synapse0x20f0620() {
   return (neuron0x20e0270()*-0.711299);
}

double NNfunction_ss_sLdR::synapse0x20f0660() {
   return (neuron0x20e05b0()*0.349365);
}

double NNfunction_ss_sLdR::synapse0x20f06a0() {
   return (neuron0x20e08f0()*-0.0251026);
}

double NNfunction_ss_sLdR::synapse0x20f06e0() {
   return (neuron0x20e0c30()*-0.646311);
}

double NNfunction_ss_sLdR::synapse0x20f0720() {
   return (neuron0x20e0f70()*-0.340552);
}

double NNfunction_ss_sLdR::synapse0x20f0760() {
   return (neuron0x20e12b0()*-0.561034);
}

double NNfunction_ss_sLdR::synapse0x20f07a0() {
   return (neuron0x20e15f0()*0.283718);
}

double NNfunction_ss_sLdR::synapse0x20f07e0() {
   return (neuron0x20e1930()*0.71366);
}

double NNfunction_ss_sLdR::synapse0x20f0820() {
   return (neuron0x20e1c70()*-0.178112);
}

double NNfunction_ss_sLdR::synapse0x20f0860() {
   return (neuron0x20e1fb0()*-0.897299);
}

double NNfunction_ss_sLdR::synapse0x20f08a0() {
   return (neuron0x20e22f0()*0.10011);
}

double NNfunction_ss_sLdR::synapse0x20f08e0() {
   return (neuron0x20e2630()*0.249028);
}

double NNfunction_ss_sLdR::synapse0x20f0370() {
   return (neuron0x20e2970()*0.48577);
}

double NNfunction_ss_sLdR::synapse0x20f03b0() {
   return (neuron0x20e2ed0()*0.312062);
}

double NNfunction_ss_sLdR::synapse0x20f0a30() {
   return (neuron0x20e30f0()*-0.814356);
}

double NNfunction_ss_sLdR::synapse0x20f0a70() {
   return (neuron0x20e3430()*1.05482);
}

double NNfunction_ss_sLdR::synapse0x20f0ab0() {
   return (neuron0x20e3770()*1.24183);
}

double NNfunction_ss_sLdR::synapse0x20f0af0() {
   return (neuron0x20e3ab0()*0.831709);
}

double NNfunction_ss_sLdR::synapse0x20f0b30() {
   return (neuron0x20e3df0()*-0.569608);
}

double NNfunction_ss_sLdR::synapse0x20f0b70() {
   return (neuron0x20e4130()*-0.488018);
}

double NNfunction_ss_sLdR::synapse0x20f0ef0() {
   return (neuron0x20df570()*-0.929608);
}

double NNfunction_ss_sLdR::synapse0x20f0f30() {
   return (neuron0x20df8b0()*0.11933);
}

double NNfunction_ss_sLdR::synapse0x20f0f70() {
   return (neuron0x20dfbf0()*-0.165985);
}

double NNfunction_ss_sLdR::synapse0x20f0fb0() {
   return (neuron0x20dff30()*0.077139);
}

double NNfunction_ss_sLdR::synapse0x20f0ff0() {
   return (neuron0x20e0270()*0.904296);
}

double NNfunction_ss_sLdR::synapse0x20f1030() {
   return (neuron0x20e05b0()*-0.618829);
}

double NNfunction_ss_sLdR::synapse0x20f1070() {
   return (neuron0x20e08f0()*0.120736);
}

double NNfunction_ss_sLdR::synapse0x20f10b0() {
   return (neuron0x20e0c30()*-0.213248);
}

double NNfunction_ss_sLdR::synapse0x20f10f0() {
   return (neuron0x20e0f70()*0.108128);
}

double NNfunction_ss_sLdR::synapse0x20f1130() {
   return (neuron0x20e12b0()*0.741039);
}

double NNfunction_ss_sLdR::synapse0x20f1170() {
   return (neuron0x20e15f0()*0.845742);
}

double NNfunction_ss_sLdR::synapse0x20f11b0() {
   return (neuron0x20e1930()*0.00629076);
}

double NNfunction_ss_sLdR::synapse0x20f11f0() {
   return (neuron0x20e1c70()*0.149065);
}

double NNfunction_ss_sLdR::synapse0x20f1230() {
   return (neuron0x20e1fb0()*0.239932);
}

double NNfunction_ss_sLdR::synapse0x20f1270() {
   return (neuron0x20e22f0()*-0.367772);
}

double NNfunction_ss_sLdR::synapse0x20f12b0() {
   return (neuron0x20e2630()*0.127845);
}

double NNfunction_ss_sLdR::synapse0x20f0d40() {
   return (neuron0x20e2970()*-0.940836);
}

double NNfunction_ss_sLdR::synapse0x20f0d80() {
   return (neuron0x20e2ed0()*0.225911);
}

double NNfunction_ss_sLdR::synapse0x20f1400() {
   return (neuron0x20e30f0()*0.750857);
}

double NNfunction_ss_sLdR::synapse0x20f1440() {
   return (neuron0x20e3430()*-0.148348);
}

double NNfunction_ss_sLdR::synapse0x20f1480() {
   return (neuron0x20e3770()*-0.0749818);
}

double NNfunction_ss_sLdR::synapse0x20f14c0() {
   return (neuron0x20e3ab0()*-0.53035);
}

double NNfunction_ss_sLdR::synapse0x20f1500() {
   return (neuron0x20e3df0()*0.902897);
}

double NNfunction_ss_sLdR::synapse0x20f1540() {
   return (neuron0x20e4130()*-0.322374);
}

double NNfunction_ss_sLdR::synapse0x20f18c0() {
   return (neuron0x20df570()*0.0394092);
}

double NNfunction_ss_sLdR::synapse0x20f1900() {
   return (neuron0x20df8b0()*-0.0118883);
}

double NNfunction_ss_sLdR::synapse0x20f1940() {
   return (neuron0x20dfbf0()*-0.304884);
}

double NNfunction_ss_sLdR::synapse0x20f1980() {
   return (neuron0x20dff30()*1.02239);
}

double NNfunction_ss_sLdR::synapse0x20f19c0() {
   return (neuron0x20e0270()*0.027021);
}

double NNfunction_ss_sLdR::synapse0x20f1a00() {
   return (neuron0x20e05b0()*-0.129348);
}

double NNfunction_ss_sLdR::synapse0x20f1a40() {
   return (neuron0x20e08f0()*-0.370544);
}

double NNfunction_ss_sLdR::synapse0x20f1a80() {
   return (neuron0x20e0c30()*0.0443589);
}

double NNfunction_ss_sLdR::synapse0x20f1ac0() {
   return (neuron0x20e0f70()*0.156794);
}

double NNfunction_ss_sLdR::synapse0x20f1b00() {
   return (neuron0x20e12b0()*0.166222);
}

double NNfunction_ss_sLdR::synapse0x20f1b40() {
   return (neuron0x20e15f0()*-0.0236382);
}

double NNfunction_ss_sLdR::synapse0x20f1b80() {
   return (neuron0x20e1930()*-0.171111);
}

double NNfunction_ss_sLdR::synapse0x20f1bc0() {
   return (neuron0x20e1c70()*-0.658598);
}

double NNfunction_ss_sLdR::synapse0x20f1c00() {
   return (neuron0x20e1fb0()*0.0102895);
}

double NNfunction_ss_sLdR::synapse0x20f1c40() {
   return (neuron0x20e22f0()*-0.169739);
}

double NNfunction_ss_sLdR::synapse0x20f1c80() {
   return (neuron0x20e2630()*-0.271115);
}

double NNfunction_ss_sLdR::synapse0x20f1710() {
   return (neuron0x20e2970()*0.208543);
}

double NNfunction_ss_sLdR::synapse0x20f1750() {
   return (neuron0x20e2ed0()*1.63918);
}

double NNfunction_ss_sLdR::synapse0x20f1dd0() {
   return (neuron0x20e30f0()*0.0754454);
}

double NNfunction_ss_sLdR::synapse0x20f1e10() {
   return (neuron0x20e3430()*0.155034);
}

double NNfunction_ss_sLdR::synapse0x20f1e50() {
   return (neuron0x20e3770()*-0.103708);
}

double NNfunction_ss_sLdR::synapse0x20f1e90() {
   return (neuron0x20e3ab0()*-0.181562);
}

double NNfunction_ss_sLdR::synapse0x20f1ed0() {
   return (neuron0x20e3df0()*-0.1311);
}

double NNfunction_ss_sLdR::synapse0x20f1f10() {
   return (neuron0x20e4130()*-0.00298689);
}

double NNfunction_ss_sLdR::synapse0x20f2290() {
   return (neuron0x20df570()*0.0648191);
}

double NNfunction_ss_sLdR::synapse0x20f22d0() {
   return (neuron0x20df8b0()*0.150335);
}

double NNfunction_ss_sLdR::synapse0x20f2310() {
   return (neuron0x20dfbf0()*-0.912035);
}

double NNfunction_ss_sLdR::synapse0x20f2350() {
   return (neuron0x20dff30()*0.209955);
}

double NNfunction_ss_sLdR::synapse0x20f2390() {
   return (neuron0x20e0270()*0.139744);
}

double NNfunction_ss_sLdR::synapse0x20f23d0() {
   return (neuron0x20e05b0()*0.902814);
}

double NNfunction_ss_sLdR::synapse0x20f2410() {
   return (neuron0x20e08f0()*0.152754);
}

double NNfunction_ss_sLdR::synapse0x20f2450() {
   return (neuron0x20e0c30()*-0.0639804);
}

double NNfunction_ss_sLdR::synapse0x20f2490() {
   return (neuron0x20e0f70()*-0.312008);
}

double NNfunction_ss_sLdR::synapse0x20f24d0() {
   return (neuron0x20e12b0()*-0.339989);
}

double NNfunction_ss_sLdR::synapse0x20f2510() {
   return (neuron0x20e15f0()*0.644342);
}

double NNfunction_ss_sLdR::synapse0x20f2550() {
   return (neuron0x20e1930()*-0.897447);
}

double NNfunction_ss_sLdR::synapse0x20f2590() {
   return (neuron0x20e1c70()*0.293703);
}

double NNfunction_ss_sLdR::synapse0x20f25d0() {
   return (neuron0x20e1fb0()*0.23894);
}

double NNfunction_ss_sLdR::synapse0x20f2610() {
   return (neuron0x20e22f0()*-0.272086);
}

double NNfunction_ss_sLdR::synapse0x20f2650() {
   return (neuron0x20e2630()*0.732158);
}

double NNfunction_ss_sLdR::synapse0x20f20e0() {
   return (neuron0x20e2970()*-0.622471);
}

double NNfunction_ss_sLdR::synapse0x20f2120() {
   return (neuron0x20e2ed0()*0.252516);
}

double NNfunction_ss_sLdR::synapse0x20f27a0() {
   return (neuron0x20e30f0()*-0.813908);
}

double NNfunction_ss_sLdR::synapse0x20f27e0() {
   return (neuron0x20e3430()*0.641487);
}

double NNfunction_ss_sLdR::synapse0x20f2820() {
   return (neuron0x20e3770()*-0.420699);
}

double NNfunction_ss_sLdR::synapse0x20f2860() {
   return (neuron0x20e3ab0()*0.017013);
}

double NNfunction_ss_sLdR::synapse0x20f28a0() {
   return (neuron0x20e3df0()*0.704008);
}

double NNfunction_ss_sLdR::synapse0x20f28e0() {
   return (neuron0x20e4130()*0.665608);
}

double NNfunction_ss_sLdR::synapse0x20f2c60() {
   return (neuron0x20df570()*0.127628);
}

double NNfunction_ss_sLdR::synapse0x20f2ca0() {
   return (neuron0x20df8b0()*-0.237803);
}

double NNfunction_ss_sLdR::synapse0x20f2ce0() {
   return (neuron0x20dfbf0()*0.14686);
}

double NNfunction_ss_sLdR::synapse0x20f2d20() {
   return (neuron0x20dff30()*-0.0350759);
}

double NNfunction_ss_sLdR::synapse0x20f2d60() {
   return (neuron0x20e0270()*0.313393);
}

double NNfunction_ss_sLdR::synapse0x20f2da0() {
   return (neuron0x20e05b0()*-0.396281);
}

double NNfunction_ss_sLdR::synapse0x20f2de0() {
   return (neuron0x20e08f0()*-0.0121756);
}

double NNfunction_ss_sLdR::synapse0x20f2e20() {
   return (neuron0x20e0c30()*0.231893);
}

double NNfunction_ss_sLdR::synapse0x20f2e60() {
   return (neuron0x20e0f70()*0.0427249);
}

double NNfunction_ss_sLdR::synapse0x20eb020() {
   return (neuron0x20e12b0()*-0.0901536);
}

double NNfunction_ss_sLdR::synapse0x20eb060() {
   return (neuron0x20e15f0()*0.799);
}

double NNfunction_ss_sLdR::synapse0x20eb0a0() {
   return (neuron0x20e1930()*-0.43182);
}

double NNfunction_ss_sLdR::synapse0x20eb0e0() {
   return (neuron0x20e1c70()*-1.26588);
}

double NNfunction_ss_sLdR::synapse0x20eb120() {
   return (neuron0x20e1fb0()*0.0640843);
}

double NNfunction_ss_sLdR::synapse0x20eb160() {
   return (neuron0x20e22f0()*-0.0812768);
}

double NNfunction_ss_sLdR::synapse0x20eb1a0() {
   return (neuron0x20e2630()*0.0803783);
}

double NNfunction_ss_sLdR::synapse0x20f2ab0() {
   return (neuron0x20e2970()*0.0423201);
}

double NNfunction_ss_sLdR::synapse0x20f2af0() {
   return (neuron0x20e2ed0()*-1.27998);
}

double NNfunction_ss_sLdR::synapse0x20eb2f0() {
   return (neuron0x20e30f0()*-0.184944);
}

double NNfunction_ss_sLdR::synapse0x20eb330() {
   return (neuron0x20e3430()*0.17541);
}

double NNfunction_ss_sLdR::synapse0x20eb370() {
   return (neuron0x20e3770()*0.0507003);
}

double NNfunction_ss_sLdR::synapse0x20eb3b0() {
   return (neuron0x20e3ab0()*0.145322);
}

double NNfunction_ss_sLdR::synapse0x20eb3f0() {
   return (neuron0x20e3df0()*0.0637789);
}

double NNfunction_ss_sLdR::synapse0x20eb430() {
   return (neuron0x20e4130()*-0.0180592);
}

double NNfunction_ss_sLdR::synapse0x20eb7b0() {
   return (neuron0x20df570()*0.00420079);
}

double NNfunction_ss_sLdR::synapse0x20eb7f0() {
   return (neuron0x20df8b0()*-0.00923824);
}

double NNfunction_ss_sLdR::synapse0x20eb830() {
   return (neuron0x20dfbf0()*0.0425703);
}

double NNfunction_ss_sLdR::synapse0x20eb870() {
   return (neuron0x20dff30()*0.0654363);
}

double NNfunction_ss_sLdR::synapse0x20eb8b0() {
   return (neuron0x20e0270()*0.0110087);
}

double NNfunction_ss_sLdR::synapse0x20eb8f0() {
   return (neuron0x20e05b0()*-0.00745277);
}

double NNfunction_ss_sLdR::synapse0x20eb930() {
   return (neuron0x20e08f0()*-0.00707458);
}

double NNfunction_ss_sLdR::synapse0x20eb970() {
   return (neuron0x20e0c30()*0.00176659);
}

double NNfunction_ss_sLdR::synapse0x20eb9b0() {
   return (neuron0x20e0f70()*0.0198365);
}

double NNfunction_ss_sLdR::synapse0x20eb9f0() {
   return (neuron0x20e12b0()*-0.0022212);
}

double NNfunction_ss_sLdR::synapse0x20eba30() {
   return (neuron0x20e15f0()*0.0165732);
}

double NNfunction_ss_sLdR::synapse0x20eba70() {
   return (neuron0x20e1930()*0.0507696);
}

double NNfunction_ss_sLdR::synapse0x20ebab0() {
   return (neuron0x20e1c70()*-1.25869);
}

double NNfunction_ss_sLdR::synapse0x20ebaf0() {
   return (neuron0x20e1fb0()*-0.0225526);
}

double NNfunction_ss_sLdR::synapse0x20ebb30() {
   return (neuron0x20e22f0()*0.0348498);
}

double NNfunction_ss_sLdR::synapse0x20ebb70() {
   return (neuron0x20e2630()*0.027717);
}

double NNfunction_ss_sLdR::synapse0x20eb600() {
   return (neuron0x20e2970()*-0.0218673);
}

double NNfunction_ss_sLdR::synapse0x20eb640() {
   return (neuron0x20e2ed0()*0.228963);
}

double NNfunction_ss_sLdR::synapse0x20ebcc0() {
   return (neuron0x20e30f0()*0.0177653);
}

double NNfunction_ss_sLdR::synapse0x20ebd00() {
   return (neuron0x20e3430()*0.0164986);
}

double NNfunction_ss_sLdR::synapse0x20ebd40() {
   return (neuron0x20e3770()*-0.0105767);
}

double NNfunction_ss_sLdR::synapse0x20ebd80() {
   return (neuron0x20e3ab0()*-0.0143389);
}

double NNfunction_ss_sLdR::synapse0x20ebdc0() {
   return (neuron0x20e3df0()*-0.00822204);
}

double NNfunction_ss_sLdR::synapse0x20ebe00() {
   return (neuron0x20e4130()*0.00925089);
}

double NNfunction_ss_sLdR::synapse0x20ebfd0() {
   return (neuron0x20df570()*-0.536804);
}

double NNfunction_ss_sLdR::synapse0x20f5060() {
   return (neuron0x20df8b0()*0.390159);
}

double NNfunction_ss_sLdR::synapse0x20f50a0() {
   return (neuron0x20dfbf0()*1.0082);
}

double NNfunction_ss_sLdR::synapse0x20f50e0() {
   return (neuron0x20dff30()*-0.589897);
}

double NNfunction_ss_sLdR::synapse0x20f5120() {
   return (neuron0x20e0270()*0.990723);
}

double NNfunction_ss_sLdR::synapse0x20f5160() {
   return (neuron0x20e05b0()*-0.440224);
}

double NNfunction_ss_sLdR::synapse0x20f51a0() {
   return (neuron0x20e08f0()*0.616203);
}

double NNfunction_ss_sLdR::synapse0x20f51e0() {
   return (neuron0x20e0c30()*-0.371578);
}

double NNfunction_ss_sLdR::synapse0x20f5220() {
   return (neuron0x20e0f70()*0.0432317);
}

double NNfunction_ss_sLdR::synapse0x20f5260() {
   return (neuron0x20e12b0()*0.488217);
}

double NNfunction_ss_sLdR::synapse0x20f52a0() {
   return (neuron0x20e15f0()*-0.137511);
}

double NNfunction_ss_sLdR::synapse0x20f52e0() {
   return (neuron0x20e1930()*-0.093346);
}

double NNfunction_ss_sLdR::synapse0x20f5320() {
   return (neuron0x20e1c70()*-0.0188556);
}

double NNfunction_ss_sLdR::synapse0x20f5360() {
   return (neuron0x20e1fb0()*0.502569);
}

double NNfunction_ss_sLdR::synapse0x20f53a0() {
   return (neuron0x20e22f0()*-1.49952);
}

double NNfunction_ss_sLdR::synapse0x20f53e0() {
   return (neuron0x20e2630()*-0.239751);
}

double NNfunction_ss_sLdR::synapse0x20f4eb0() {
   return (neuron0x20e2970()*-0.802507);
}

double NNfunction_ss_sLdR::synapse0x20f4ef0() {
   return (neuron0x20e2ed0()*-0.360368);
}

double NNfunction_ss_sLdR::synapse0x20f5530() {
   return (neuron0x20e30f0()*1.01293);
}

double NNfunction_ss_sLdR::synapse0x20f5570() {
   return (neuron0x20e3430()*-0.105604);
}

double NNfunction_ss_sLdR::synapse0x20f55b0() {
   return (neuron0x20e3770()*-0.917816);
}

double NNfunction_ss_sLdR::synapse0x20f55f0() {
   return (neuron0x20e3ab0()*0.0750428);
}

double NNfunction_ss_sLdR::synapse0x20f5630() {
   return (neuron0x20e3df0()*0.377151);
}

double NNfunction_ss_sLdR::synapse0x20f5670() {
   return (neuron0x20e4130()*-0.542239);
}

double NNfunction_ss_sLdR::synapse0x20f59f0() {
   return (neuron0x20df570()*-0.0522363);
}

double NNfunction_ss_sLdR::synapse0x20f5a30() {
   return (neuron0x20df8b0()*0.0772521);
}

double NNfunction_ss_sLdR::synapse0x20f5a70() {
   return (neuron0x20dfbf0()*-0.290643);
}

double NNfunction_ss_sLdR::synapse0x20f5ab0() {
   return (neuron0x20dff30()*0.33622);
}

double NNfunction_ss_sLdR::synapse0x20f5af0() {
   return (neuron0x20e0270()*0.396472);
}

double NNfunction_ss_sLdR::synapse0x20f5b30() {
   return (neuron0x20e05b0()*-0.885088);
}

double NNfunction_ss_sLdR::synapse0x20f5b70() {
   return (neuron0x20e08f0()*-0.267411);
}

double NNfunction_ss_sLdR::synapse0x20f5bb0() {
   return (neuron0x20e0c30()*0.362902);
}

double NNfunction_ss_sLdR::synapse0x20f5bf0() {
   return (neuron0x20e0f70()*0.885592);
}

double NNfunction_ss_sLdR::synapse0x20f5c30() {
   return (neuron0x20e12b0()*-0.115335);
}

double NNfunction_ss_sLdR::synapse0x20f5c70() {
   return (neuron0x20e15f0()*0.97627);
}

double NNfunction_ss_sLdR::synapse0x20f5cb0() {
   return (neuron0x20e1930()*0.285805);
}

double NNfunction_ss_sLdR::synapse0x20f5cf0() {
   return (neuron0x20e1c70()*1.00153);
}

double NNfunction_ss_sLdR::synapse0x20f5d30() {
   return (neuron0x20e1fb0()*0.0227715);
}

double NNfunction_ss_sLdR::synapse0x20f5d70() {
   return (neuron0x20e22f0()*0.16952);
}

double NNfunction_ss_sLdR::synapse0x20f5db0() {
   return (neuron0x20e2630()*0.0540048);
}

double NNfunction_ss_sLdR::synapse0x20f5840() {
   return (neuron0x20e2970()*-0.337791);
}

double NNfunction_ss_sLdR::synapse0x20f5880() {
   return (neuron0x20e2ed0()*1.18813);
}

double NNfunction_ss_sLdR::synapse0x20f5f00() {
   return (neuron0x20e30f0()*0.300522);
}

double NNfunction_ss_sLdR::synapse0x20f5f40() {
   return (neuron0x20e3430()*0.559276);
}

double NNfunction_ss_sLdR::synapse0x20f5f80() {
   return (neuron0x20e3770()*-0.335907);
}

double NNfunction_ss_sLdR::synapse0x20f5fc0() {
   return (neuron0x20e3ab0()*-0.643926);
}

double NNfunction_ss_sLdR::synapse0x20f6000() {
   return (neuron0x20e3df0()*0.71682);
}

double NNfunction_ss_sLdR::synapse0x20f6040() {
   return (neuron0x20e4130()*-0.247397);
}

double NNfunction_ss_sLdR::synapse0x20f63c0() {
   return (neuron0x20df570()*0.0597212);
}

double NNfunction_ss_sLdR::synapse0x20f6400() {
   return (neuron0x20df8b0()*-0.121993);
}

double NNfunction_ss_sLdR::synapse0x20f6440() {
   return (neuron0x20dfbf0()*-0.208405);
}

double NNfunction_ss_sLdR::synapse0x20f6480() {
   return (neuron0x20dff30()*-0.260707);
}

double NNfunction_ss_sLdR::synapse0x20f64c0() {
   return (neuron0x20e0270()*-0.213333);
}

double NNfunction_ss_sLdR::synapse0x20f6500() {
   return (neuron0x20e05b0()*0.437084);
}

double NNfunction_ss_sLdR::synapse0x20f6540() {
   return (neuron0x20e08f0()*-0.112685);
}

double NNfunction_ss_sLdR::synapse0x20f6580() {
   return (neuron0x20e0c30()*0.104436);
}

double NNfunction_ss_sLdR::synapse0x20f65c0() {
   return (neuron0x20e0f70()*-0.0763484);
}

double NNfunction_ss_sLdR::synapse0x20f6600() {
   return (neuron0x20e12b0()*-0.00563295);
}

double NNfunction_ss_sLdR::synapse0x20f6640() {
   return (neuron0x20e15f0()*-0.0588911);
}

double NNfunction_ss_sLdR::synapse0x20f6680() {
   return (neuron0x20e1930()*0.046427);
}

double NNfunction_ss_sLdR::synapse0x20f66c0() {
   return (neuron0x20e1c70()*-1.85602);
}

double NNfunction_ss_sLdR::synapse0x20f6700() {
   return (neuron0x20e1fb0()*0.00740428);
}

double NNfunction_ss_sLdR::synapse0x20f6740() {
   return (neuron0x20e22f0()*-0.0837395);
}

double NNfunction_ss_sLdR::synapse0x20f6780() {
   return (neuron0x20e2630()*-0.0325531);
}

double NNfunction_ss_sLdR::synapse0x20f6210() {
   return (neuron0x20e2970()*-0.267656);
}

double NNfunction_ss_sLdR::synapse0x20f6250() {
   return (neuron0x20e2ed0()*-2.30494);
}

double NNfunction_ss_sLdR::synapse0x20f68d0() {
   return (neuron0x20e30f0()*-0.0899606);
}

double NNfunction_ss_sLdR::synapse0x20f6910() {
   return (neuron0x20e3430()*-0.228445);
}

double NNfunction_ss_sLdR::synapse0x20f6950() {
   return (neuron0x20e3770()*-0.0145767);
}

double NNfunction_ss_sLdR::synapse0x20f6990() {
   return (neuron0x20e3ab0()*-0.0165813);
}

double NNfunction_ss_sLdR::synapse0x20f69d0() {
   return (neuron0x20e3df0()*-0.141316);
}

double NNfunction_ss_sLdR::synapse0x20f6a10() {
   return (neuron0x20e4130()*-0.194409);
}

double NNfunction_ss_sLdR::synapse0x20f6d90() {
   return (neuron0x20df570()*0.0117904);
}

double NNfunction_ss_sLdR::synapse0x20f6dd0() {
   return (neuron0x20df8b0()*-0.0165191);
}

double NNfunction_ss_sLdR::synapse0x20f6e10() {
   return (neuron0x20dfbf0()*-0.00116205);
}

double NNfunction_ss_sLdR::synapse0x20f6e50() {
   return (neuron0x20dff30()*-6.53221);
}

double NNfunction_ss_sLdR::synapse0x20f6e90() {
   return (neuron0x20e0270()*0.0110911);
}

double NNfunction_ss_sLdR::synapse0x20f6ed0() {
   return (neuron0x20e05b0()*-0.00620068);
}

double NNfunction_ss_sLdR::synapse0x20f6f10() {
   return (neuron0x20e08f0()*0.00603612);
}

double NNfunction_ss_sLdR::synapse0x20f6f50() {
   return (neuron0x20e0c30()*-0.0148309);
}

double NNfunction_ss_sLdR::synapse0x20f6f90() {
   return (neuron0x20e0f70()*0.00170815);
}

double NNfunction_ss_sLdR::synapse0x20f6fd0() {
   return (neuron0x20e12b0()*-6.69432e-06);
}

double NNfunction_ss_sLdR::synapse0x20f7010() {
   return (neuron0x20e15f0()*0.00378895);
}

double NNfunction_ss_sLdR::synapse0x20f7050() {
   return (neuron0x20e1930()*0.0318663);
}

double NNfunction_ss_sLdR::synapse0x20f7090() {
   return (neuron0x20e1c70()*0.252489);
}

double NNfunction_ss_sLdR::synapse0x20f70d0() {
   return (neuron0x20e1fb0()*0.00738715);
}

double NNfunction_ss_sLdR::synapse0x20f7110() {
   return (neuron0x20e22f0()*-0.0120555);
}

double NNfunction_ss_sLdR::synapse0x20f7150() {
   return (neuron0x20e2630()*0.0034515);
}

double NNfunction_ss_sLdR::synapse0x20f6be0() {
   return (neuron0x20e2970()*-0.00882045);
}

double NNfunction_ss_sLdR::synapse0x20f6c20() {
   return (neuron0x20e2ed0()*0.259862);
}

double NNfunction_ss_sLdR::synapse0x20f72a0() {
   return (neuron0x20e30f0()*-0.00888801);
}

double NNfunction_ss_sLdR::synapse0x20f72e0() {
   return (neuron0x20e3430()*0.00318364);
}

double NNfunction_ss_sLdR::synapse0x20f7320() {
   return (neuron0x20e3770()*-0.00291682);
}

double NNfunction_ss_sLdR::synapse0x20f7360() {
   return (neuron0x20e3ab0()*0.0045076);
}

double NNfunction_ss_sLdR::synapse0x20f73a0() {
   return (neuron0x20e3df0()*0.00604167);
}

double NNfunction_ss_sLdR::synapse0x20f73e0() {
   return (neuron0x20e4130()*-0.0121996);
}

double NNfunction_ss_sLdR::synapse0x20f7760() {
   return (neuron0x20df570()*-0.00688339);
}

double NNfunction_ss_sLdR::synapse0x20f77a0() {
   return (neuron0x20df8b0()*0.0613752);
}

double NNfunction_ss_sLdR::synapse0x20f77e0() {
   return (neuron0x20dfbf0()*0.0462964);
}

double NNfunction_ss_sLdR::synapse0x20f7820() {
   return (neuron0x20dff30()*2.74273);
}

double NNfunction_ss_sLdR::synapse0x20f7860() {
   return (neuron0x20e0270()*0.0286095);
}

double NNfunction_ss_sLdR::synapse0x20f78a0() {
   return (neuron0x20e05b0()*0.0744229);
}

double NNfunction_ss_sLdR::synapse0x20f78e0() {
   return (neuron0x20e08f0()*-0.117324);
}

double NNfunction_ss_sLdR::synapse0x20f7920() {
   return (neuron0x20e0c30()*0.0820312);
}

double NNfunction_ss_sLdR::synapse0x20f7960() {
   return (neuron0x20e0f70()*0.0685765);
}

double NNfunction_ss_sLdR::synapse0x20f79a0() {
   return (neuron0x20e12b0()*0.00461654);
}

double NNfunction_ss_sLdR::synapse0x20f79e0() {
   return (neuron0x20e15f0()*0.142992);
}

double NNfunction_ss_sLdR::synapse0x20f7a20() {
   return (neuron0x20e1930()*0.335744);
}

double NNfunction_ss_sLdR::synapse0x20f7a60() {
   return (neuron0x20e1c70()*-0.841883);
}

double NNfunction_ss_sLdR::synapse0x20f7aa0() {
   return (neuron0x20e1fb0()*-0.048283);
}

double NNfunction_ss_sLdR::synapse0x20f7ae0() {
   return (neuron0x20e22f0()*0.0113582);
}

double NNfunction_ss_sLdR::synapse0x20f7b20() {
   return (neuron0x20e2630()*0.133041);
}

double NNfunction_ss_sLdR::synapse0x20f75b0() {
   return (neuron0x20e2970()*-0.0838511);
}

double NNfunction_ss_sLdR::synapse0x20f75f0() {
   return (neuron0x20e2ed0()*-0.893342);
}

double NNfunction_ss_sLdR::synapse0x20f7c70() {
   return (neuron0x20e30f0()*-0.00705608);
}

double NNfunction_ss_sLdR::synapse0x20f7cb0() {
   return (neuron0x20e3430()*0.185123);
}

double NNfunction_ss_sLdR::synapse0x20f7cf0() {
   return (neuron0x20e3770()*-0.0598606);
}

double NNfunction_ss_sLdR::synapse0x20f7d30() {
   return (neuron0x20e3ab0()*0.00356076);
}

double NNfunction_ss_sLdR::synapse0x20f7d70() {
   return (neuron0x20e3df0()*-0.0223855);
}

double NNfunction_ss_sLdR::synapse0x20f7db0() {
   return (neuron0x20e4130()*0.0230559);
}

double NNfunction_ss_sLdR::synapse0x20f8130() {
   return (neuron0x20df570()*0.474978);
}

double NNfunction_ss_sLdR::synapse0x20f8170() {
   return (neuron0x20df8b0()*0.00833401);
}

double NNfunction_ss_sLdR::synapse0x20f81b0() {
   return (neuron0x20dfbf0()*0.130254);
}

double NNfunction_ss_sLdR::synapse0x20f81f0() {
   return (neuron0x20dff30()*0.114912);
}

double NNfunction_ss_sLdR::synapse0x20f8230() {
   return (neuron0x20e0270()*0.677309);
}

double NNfunction_ss_sLdR::synapse0x20f8270() {
   return (neuron0x20e05b0()*-0.161596);
}

double NNfunction_ss_sLdR::synapse0x20f82b0() {
   return (neuron0x20e08f0()*-0.0975699);
}

double NNfunction_ss_sLdR::synapse0x20f82f0() {
   return (neuron0x20e0c30()*0.0731228);
}

double NNfunction_ss_sLdR::synapse0x20f8330() {
   return (neuron0x20e0f70()*-0.797731);
}

double NNfunction_ss_sLdR::synapse0x20f8370() {
   return (neuron0x20e12b0()*-0.63812);
}

double NNfunction_ss_sLdR::synapse0x20f83b0() {
   return (neuron0x20e15f0()*-0.298287);
}

double NNfunction_ss_sLdR::synapse0x20f83f0() {
   return (neuron0x20e1930()*0.762489);
}

double NNfunction_ss_sLdR::synapse0x20f8430() {
   return (neuron0x20e1c70()*-0.226004);
}

double NNfunction_ss_sLdR::synapse0x20f8470() {
   return (neuron0x20e1fb0()*-0.483559);
}

double NNfunction_ss_sLdR::synapse0x20f84b0() {
   return (neuron0x20e22f0()*-0.160435);
}

double NNfunction_ss_sLdR::synapse0x20f84f0() {
   return (neuron0x20e2630()*0.343455);
}

double NNfunction_ss_sLdR::synapse0x20f7f80() {
   return (neuron0x20e2970()*0.352721);
}

double NNfunction_ss_sLdR::synapse0x20f7fc0() {
   return (neuron0x20e2ed0()*0.317897);
}

double NNfunction_ss_sLdR::synapse0x20f8640() {
   return (neuron0x20e30f0()*1.13855);
}

double NNfunction_ss_sLdR::synapse0x20f8680() {
   return (neuron0x20e3430()*0.00986731);
}

double NNfunction_ss_sLdR::synapse0x20f86c0() {
   return (neuron0x20e3770()*0.448552);
}

double NNfunction_ss_sLdR::synapse0x20f8700() {
   return (neuron0x20e3ab0()*-0.0477727);
}

double NNfunction_ss_sLdR::synapse0x20f8740() {
   return (neuron0x20e3df0()*0.427501);
}

double NNfunction_ss_sLdR::synapse0x20f8780() {
   return (neuron0x20e4130()*-1.16334);
}

double NNfunction_ss_sLdR::synapse0x20f8b00() {
   return (neuron0x20df570()*-0.449345);
}

double NNfunction_ss_sLdR::synapse0x20f8b40() {
   return (neuron0x20df8b0()*0.198115);
}

double NNfunction_ss_sLdR::synapse0x20f8b80() {
   return (neuron0x20dfbf0()*0.727524);
}

double NNfunction_ss_sLdR::synapse0x20f8bc0() {
   return (neuron0x20dff30()*-0.197102);
}

double NNfunction_ss_sLdR::synapse0x20f8c00() {
   return (neuron0x20e0270()*0.452961);
}

double NNfunction_ss_sLdR::synapse0x20f8c40() {
   return (neuron0x20e05b0()*0.448271);
}

double NNfunction_ss_sLdR::synapse0x20f8c80() {
   return (neuron0x20e08f0()*-0.650889);
}

double NNfunction_ss_sLdR::synapse0x20f8cc0() {
   return (neuron0x20e0c30()*0.659638);
}

double NNfunction_ss_sLdR::synapse0x20f8d00() {
   return (neuron0x20e0f70()*-1.24471);
}

double NNfunction_ss_sLdR::synapse0x20f8d40() {
   return (neuron0x20e12b0()*-0.564142);
}

double NNfunction_ss_sLdR::synapse0x20f8d80() {
   return (neuron0x20e15f0()*0.827404);
}

double NNfunction_ss_sLdR::synapse0x20f8dc0() {
   return (neuron0x20e1930()*-0.321728);
}

double NNfunction_ss_sLdR::synapse0x20f8e00() {
   return (neuron0x20e1c70()*-0.262697);
}

double NNfunction_ss_sLdR::synapse0x20f8e40() {
   return (neuron0x20e1fb0()*0.505789);
}

double NNfunction_ss_sLdR::synapse0x20f8e80() {
   return (neuron0x20e22f0()*-0.35837);
}

double NNfunction_ss_sLdR::synapse0x20f8ec0() {
   return (neuron0x20e2630()*0.000158815);
}

double NNfunction_ss_sLdR::synapse0x20f8950() {
   return (neuron0x20e2970()*0.269077);
}

double NNfunction_ss_sLdR::synapse0x20f8990() {
   return (neuron0x20e2ed0()*-0.526506);
}

double NNfunction_ss_sLdR::synapse0x20f9010() {
   return (neuron0x20e30f0()*0.111404);
}

double NNfunction_ss_sLdR::synapse0x20f9050() {
   return (neuron0x20e3430()*-0.301806);
}

double NNfunction_ss_sLdR::synapse0x20f9090() {
   return (neuron0x20e3770()*0.644432);
}

double NNfunction_ss_sLdR::synapse0x20f90d0() {
   return (neuron0x20e3ab0()*0.541353);
}

double NNfunction_ss_sLdR::synapse0x20f9110() {
   return (neuron0x20e3df0()*0.216282);
}

double NNfunction_ss_sLdR::synapse0x20f9150() {
   return (neuron0x20e4130()*0.207461);
}

double NNfunction_ss_sLdR::synapse0x20f94d0() {
   return (neuron0x20df570()*0.133753);
}

double NNfunction_ss_sLdR::synapse0x20f9510() {
   return (neuron0x20df8b0()*0.0780297);
}

double NNfunction_ss_sLdR::synapse0x20f9550() {
   return (neuron0x20dfbf0()*-0.820104);
}

double NNfunction_ss_sLdR::synapse0x20f9590() {
   return (neuron0x20dff30()*-0.047976);
}

double NNfunction_ss_sLdR::synapse0x20f95d0() {
   return (neuron0x20e0270()*-0.191412);
}

double NNfunction_ss_sLdR::synapse0x20f9610() {
   return (neuron0x20e05b0()*-0.244382);
}

double NNfunction_ss_sLdR::synapse0x20f9650() {
   return (neuron0x20e08f0()*-0.680429);
}

double NNfunction_ss_sLdR::synapse0x20f9690() {
   return (neuron0x20e0c30()*-0.322373);
}

double NNfunction_ss_sLdR::synapse0x20f96d0() {
   return (neuron0x20e0f70()*-0.811338);
}

double NNfunction_ss_sLdR::synapse0x20f9710() {
   return (neuron0x20e12b0()*-0.511955);
}

double NNfunction_ss_sLdR::synapse0x20f9750() {
   return (neuron0x20e15f0()*0.438373);
}

double NNfunction_ss_sLdR::synapse0x20f9790() {
   return (neuron0x20e1930()*0.0458932);
}

double NNfunction_ss_sLdR::synapse0x20f97d0() {
   return (neuron0x20e1c70()*0.716618);
}

double NNfunction_ss_sLdR::synapse0x20f9810() {
   return (neuron0x20e1fb0()*0.307322);
}

double NNfunction_ss_sLdR::synapse0x20f9850() {
   return (neuron0x20e22f0()*-0.235627);
}

double NNfunction_ss_sLdR::synapse0x20f9890() {
   return (neuron0x20e2630()*-0.0221698);
}

double NNfunction_ss_sLdR::synapse0x20f9320() {
   return (neuron0x20e2970()*-0.0565066);
}

double NNfunction_ss_sLdR::synapse0x20f9360() {
   return (neuron0x20e2ed0()*1.36038);
}

double NNfunction_ss_sLdR::synapse0x20f99e0() {
   return (neuron0x20e30f0()*-0.288779);
}

double NNfunction_ss_sLdR::synapse0x20f9a20() {
   return (neuron0x20e3430()*0.28693);
}

double NNfunction_ss_sLdR::synapse0x20f9a60() {
   return (neuron0x20e3770()*-0.323918);
}

double NNfunction_ss_sLdR::synapse0x20f9aa0() {
   return (neuron0x20e3ab0()*-0.854075);
}

double NNfunction_ss_sLdR::synapse0x20f9ae0() {
   return (neuron0x20e3df0()*0.280195);
}

double NNfunction_ss_sLdR::synapse0x20f9b20() {
   return (neuron0x20e4130()*-0.407714);
}

double NNfunction_ss_sLdR::synapse0x20f9ea0() {
   return (neuron0x20df570()*0.743129);
}

double NNfunction_ss_sLdR::synapse0x20ee470() {
   return (neuron0x20df8b0()*0.303479);
}

double NNfunction_ss_sLdR::synapse0x20ee4b0() {
   return (neuron0x20dfbf0()*-0.503516);
}

double NNfunction_ss_sLdR::synapse0x20ee4f0() {
   return (neuron0x20dff30()*1.12584);
}

double NNfunction_ss_sLdR::synapse0x20ee740() {
   return (neuron0x20e0270()*1.19319);
}

double NNfunction_ss_sLdR::synapse0x20ee780() {
   return (neuron0x20e05b0()*-0.873634);
}

double NNfunction_ss_sLdR::synapse0x20ee7c0() {
   return (neuron0x20e08f0()*0.185099);
}

double NNfunction_ss_sLdR::synapse0x20eea10() {
   return (neuron0x20e0c30()*0.12618);
}

double NNfunction_ss_sLdR::synapse0x20eea50() {
   return (neuron0x20e0f70()*0.951638);
}

double NNfunction_ss_sLdR::synapse0x20eeca0() {
   return (neuron0x20e12b0()*-0.836919);
}

double NNfunction_ss_sLdR::synapse0x20eece0() {
   return (neuron0x20e15f0()*-0.38916);
}

double NNfunction_ss_sLdR::synapse0x20eed20() {
   return (neuron0x20e1930()*0.132608);
}

double NNfunction_ss_sLdR::synapse0x20eef70() {
   return (neuron0x20e1c70()*-0.290116);
}

double NNfunction_ss_sLdR::synapse0x20eefb0() {
   return (neuron0x20e1fb0()*0.392131);
}

double NNfunction_ss_sLdR::synapse0x20ef200() {
   return (neuron0x20e22f0()*0.618081);
}

double NNfunction_ss_sLdR::synapse0x20ef240() {
   return (neuron0x20e2630()*0.666664);
}

double NNfunction_ss_sLdR::synapse0x20f9cf0() {
   return (neuron0x20e2970()*-0.313998);
}

double NNfunction_ss_sLdR::synapse0x20f9d30() {
   return (neuron0x20e2ed0()*0.533683);
}

double NNfunction_ss_sLdR::synapse0x20ef390() {
   return (neuron0x20e30f0()*-0.659034);
}

double NNfunction_ss_sLdR::synapse0x20ef8a0() {
   return (neuron0x20e3430()*-0.193083);
}

double NNfunction_ss_sLdR::synapse0x20ef8e0() {
   return (neuron0x20e3770()*-0.77258);
}

double NNfunction_ss_sLdR::synapse0x20ef920() {
   return (neuron0x20e3ab0()*0.219569);
}

double NNfunction_ss_sLdR::synapse0x20efb70() {
   return (neuron0x20e3df0()*0.498247);
}

double NNfunction_ss_sLdR::synapse0x20efbb0() {
   return (neuron0x20e4130()*-0.359324);
}

double NNfunction_ss_sLdR::synapse0x20ef460() {
   return (neuron0x20df570()*0.00517834);
}

double NNfunction_ss_sLdR::synapse0x20ef4a0() {
   return (neuron0x20df8b0()*-0.0156211);
}

double NNfunction_ss_sLdR::synapse0x20ef4e0() {
   return (neuron0x20dfbf0()*-0.00688364);
}

double NNfunction_ss_sLdR::synapse0x20ef520() {
   return (neuron0x20dff30()*2.92438);
}

double NNfunction_ss_sLdR::synapse0x20efea0() {
   return (neuron0x20e0270()*0.0035688);
}

double NNfunction_ss_sLdR::synapse0x20fc1f0() {
   return (neuron0x20e05b0()*2.61994e-05);
}

double NNfunction_ss_sLdR::synapse0x20fc230() {
   return (neuron0x20e08f0()*0.00209291);
}

double NNfunction_ss_sLdR::synapse0x20fc270() {
   return (neuron0x20e0c30()*-0.00197148);
}

double NNfunction_ss_sLdR::synapse0x20fc2b0() {
   return (neuron0x20e0f70()*-0.0127515);
}

double NNfunction_ss_sLdR::synapse0x20fc2f0() {
   return (neuron0x20e12b0()*0.00212297);
}

double NNfunction_ss_sLdR::synapse0x20fc330() {
   return (neuron0x20e15f0()*-0.00574148);
}

double NNfunction_ss_sLdR::synapse0x20fc370() {
   return (neuron0x20e1930()*-0.00879715);
}

double NNfunction_ss_sLdR::synapse0x20fc3b0() {
   return (neuron0x20e1c70()*-0.00627859);
}

double NNfunction_ss_sLdR::synapse0x20fc3f0() {
   return (neuron0x20e1fb0()*0.00675395);
}

double NNfunction_ss_sLdR::synapse0x20fc430() {
   return (neuron0x20e22f0()*0.00468392);
}

double NNfunction_ss_sLdR::synapse0x20fc470() {
   return (neuron0x20e2630()*-0.00673429);
}

double NNfunction_ss_sLdR::synapse0x20efd80() {
   return (neuron0x20e2970()*0.00655834);
}

double NNfunction_ss_sLdR::synapse0x20efdc0() {
   return (neuron0x20e2ed0()*-0.00268182);
}

double NNfunction_ss_sLdR::synapse0x20fc5c0() {
   return (neuron0x20e30f0()*-0.000779224);
}

double NNfunction_ss_sLdR::synapse0x20fc600() {
   return (neuron0x20e3430()*-0.00424771);
}

double NNfunction_ss_sLdR::synapse0x20fc640() {
   return (neuron0x20e3770()*0.00183701);
}

double NNfunction_ss_sLdR::synapse0x20fc680() {
   return (neuron0x20e3ab0()*-0.00552993);
}

double NNfunction_ss_sLdR::synapse0x20fc6c0() {
   return (neuron0x20e3df0()*-0.00166124);
}

double NNfunction_ss_sLdR::synapse0x20fc700() {
   return (neuron0x20e4130()*-0.00354566);
}

double NNfunction_ss_sLdR::synapse0x20fca80() {
   return (neuron0x20df570()*-0.195639);
}

double NNfunction_ss_sLdR::synapse0x20fcac0() {
   return (neuron0x20df8b0()*-0.594038);
}

double NNfunction_ss_sLdR::synapse0x20fcb00() {
   return (neuron0x20dfbf0()*-0.0422776);
}

double NNfunction_ss_sLdR::synapse0x20fcb40() {
   return (neuron0x20dff30()*0.358415);
}

double NNfunction_ss_sLdR::synapse0x20fcb80() {
   return (neuron0x20e0270()*0.0175194);
}

double NNfunction_ss_sLdR::synapse0x20fcbc0() {
   return (neuron0x20e05b0()*0.879792);
}

double NNfunction_ss_sLdR::synapse0x20fcc00() {
   return (neuron0x20e08f0()*0.129808);
}

double NNfunction_ss_sLdR::synapse0x20fcc40() {
   return (neuron0x20e0c30()*0.766427);
}

double NNfunction_ss_sLdR::synapse0x20fcc80() {
   return (neuron0x20e0f70()*0.155442);
}

double NNfunction_ss_sLdR::synapse0x20fccc0() {
   return (neuron0x20e12b0()*-0.210177);
}

double NNfunction_ss_sLdR::synapse0x20fcd00() {
   return (neuron0x20e15f0()*0.773607);
}

double NNfunction_ss_sLdR::synapse0x20fcd40() {
   return (neuron0x20e1930()*-0.290547);
}

double NNfunction_ss_sLdR::synapse0x20fcd80() {
   return (neuron0x20e1c70()*1.55032);
}

double NNfunction_ss_sLdR::synapse0x20fcdc0() {
   return (neuron0x20e1fb0()*-0.636184);
}

double NNfunction_ss_sLdR::synapse0x20fce00() {
   return (neuron0x20e22f0()*0.4219);
}

double NNfunction_ss_sLdR::synapse0x20fce40() {
   return (neuron0x20e2630()*-0.58383);
}

double NNfunction_ss_sLdR::synapse0x20fc8d0() {
   return (neuron0x20e2970()*-0.322015);
}

double NNfunction_ss_sLdR::synapse0x20fc910() {
   return (neuron0x20e2ed0()*0.804606);
}

double NNfunction_ss_sLdR::synapse0x20fcf90() {
   return (neuron0x20e30f0()*-0.0866422);
}

double NNfunction_ss_sLdR::synapse0x20fcfd0() {
   return (neuron0x20e3430()*-0.125663);
}

double NNfunction_ss_sLdR::synapse0x20fd010() {
   return (neuron0x20e3770()*0.130116);
}

double NNfunction_ss_sLdR::synapse0x20fd050() {
   return (neuron0x20e3ab0()*0.169331);
}

double NNfunction_ss_sLdR::synapse0x20fd090() {
   return (neuron0x20e3df0()*0.110825);
}

double NNfunction_ss_sLdR::synapse0x20fd0d0() {
   return (neuron0x20e4130()*0.952214);
}

double NNfunction_ss_sLdR::synapse0x20fd450() {
   return (neuron0x20df570()*0.00388267);
}

double NNfunction_ss_sLdR::synapse0x20fd490() {
   return (neuron0x20df8b0()*0.00953712);
}

double NNfunction_ss_sLdR::synapse0x20fd4d0() {
   return (neuron0x20dfbf0()*0.00654746);
}

double NNfunction_ss_sLdR::synapse0x20fd510() {
   return (neuron0x20dff30()*2.32344);
}

double NNfunction_ss_sLdR::synapse0x20fd550() {
   return (neuron0x20e0270()*0.00224649);
}

double NNfunction_ss_sLdR::synapse0x20fd590() {
   return (neuron0x20e05b0()*-0.00613609);
}

double NNfunction_ss_sLdR::synapse0x20fd5d0() {
   return (neuron0x20e08f0()*0.000247582);
}

double NNfunction_ss_sLdR::synapse0x20fd610() {
   return (neuron0x20e0c30()*0.00281123);
}

double NNfunction_ss_sLdR::synapse0x20fd650() {
   return (neuron0x20e0f70()*-0.00566044);
}

double NNfunction_ss_sLdR::synapse0x20fd690() {
   return (neuron0x20e12b0()*-0.000122495);
}

double NNfunction_ss_sLdR::synapse0x20fd6d0() {
   return (neuron0x20e15f0()*-0.00437758);
}

double NNfunction_ss_sLdR::synapse0x20fd710() {
   return (neuron0x20e1930()*-0.00945006);
}

double NNfunction_ss_sLdR::synapse0x20fd750() {
   return (neuron0x20e1c70()*0.347375);
}

double NNfunction_ss_sLdR::synapse0x20fd790() {
   return (neuron0x20e1fb0()*0.00567995);
}

double NNfunction_ss_sLdR::synapse0x20fd7d0() {
   return (neuron0x20e22f0()*-5.38558e-05);
}

double NNfunction_ss_sLdR::synapse0x20fd810() {
   return (neuron0x20e2630()*-0.00268178);
}

double NNfunction_ss_sLdR::synapse0x20fd2a0() {
   return (neuron0x20e2970()*0.0106098);
}

double NNfunction_ss_sLdR::synapse0x20fd2e0() {
   return (neuron0x20e2ed0()*0.338527);
}

double NNfunction_ss_sLdR::synapse0x20fd960() {
   return (neuron0x20e30f0()*-0.00527266);
}

double NNfunction_ss_sLdR::synapse0x20fd9a0() {
   return (neuron0x20e3430()*-0.00516926);
}

double NNfunction_ss_sLdR::synapse0x20fd9e0() {
   return (neuron0x20e3770()*-0.00458744);
}

double NNfunction_ss_sLdR::synapse0x20fda20() {
   return (neuron0x20e3ab0()*-0.00213443);
}

double NNfunction_ss_sLdR::synapse0x20fda60() {
   return (neuron0x20e3df0()*0.00364755);
}

double NNfunction_ss_sLdR::synapse0x20fdaa0() {
   return (neuron0x20e4130()*-0.00300304);
}

double NNfunction_ss_sLdR::synapse0x20fde20() {
   return (neuron0x20df570()*-0.0448387);
}

double NNfunction_ss_sLdR::synapse0x20fde60() {
   return (neuron0x20df8b0()*0.597729);
}

double NNfunction_ss_sLdR::synapse0x20fdea0() {
   return (neuron0x20dfbf0()*0.141855);
}

double NNfunction_ss_sLdR::synapse0x20fdee0() {
   return (neuron0x20dff30()*0.0369788);
}

double NNfunction_ss_sLdR::synapse0x20fdf20() {
   return (neuron0x20e0270()*-0.269028);
}

double NNfunction_ss_sLdR::synapse0x20fdf60() {
   return (neuron0x20e05b0()*-0.590489);
}

double NNfunction_ss_sLdR::synapse0x20fdfa0() {
   return (neuron0x20e08f0()*0.585341);
}

double NNfunction_ss_sLdR::synapse0x20fdfe0() {
   return (neuron0x20e0c30()*-0.527443);
}

double NNfunction_ss_sLdR::synapse0x20fe020() {
   return (neuron0x20e0f70()*0.211269);
}

double NNfunction_ss_sLdR::synapse0x20fe060() {
   return (neuron0x20e12b0()*-0.187852);
}

double NNfunction_ss_sLdR::synapse0x20fe0a0() {
   return (neuron0x20e15f0()*-0.602068);
}

double NNfunction_ss_sLdR::synapse0x20fe0e0() {
   return (neuron0x20e1930()*-0.765866);
}

double NNfunction_ss_sLdR::synapse0x20fe120() {
   return (neuron0x20e1c70()*-1.58027);
}

double NNfunction_ss_sLdR::synapse0x20fe160() {
   return (neuron0x20e1fb0()*-0.738296);
}

double NNfunction_ss_sLdR::synapse0x20fe1a0() {
   return (neuron0x20e22f0()*0.0833011);
}

double NNfunction_ss_sLdR::synapse0x20fe1e0() {
   return (neuron0x20e2630()*-0.210147);
}

double NNfunction_ss_sLdR::synapse0x20fdc70() {
   return (neuron0x20e2970()*-0.671305);
}

double NNfunction_ss_sLdR::synapse0x20fdcb0() {
   return (neuron0x20e2ed0()*0.282653);
}

double NNfunction_ss_sLdR::synapse0x20fe330() {
   return (neuron0x20e30f0()*-0.452957);
}

double NNfunction_ss_sLdR::synapse0x20fe370() {
   return (neuron0x20e3430()*0.168977);
}

double NNfunction_ss_sLdR::synapse0x20fe3b0() {
   return (neuron0x20e3770()*0.155057);
}

double NNfunction_ss_sLdR::synapse0x20fe3f0() {
   return (neuron0x20e3ab0()*0.245478);
}

double NNfunction_ss_sLdR::synapse0x20fe430() {
   return (neuron0x20e3df0()*-0.0137691);
}

double NNfunction_ss_sLdR::synapse0x20fe470() {
   return (neuron0x20e4130()*0.779611);
}

double NNfunction_ss_sLdR::synapse0x20fe7f0() {
   return (neuron0x20df570()*-0.0066077);
}

double NNfunction_ss_sLdR::synapse0x20fe830() {
   return (neuron0x20df8b0()*-0.059514);
}

double NNfunction_ss_sLdR::synapse0x20fe870() {
   return (neuron0x20dfbf0()*-0.0028686);
}

double NNfunction_ss_sLdR::synapse0x20fe8b0() {
   return (neuron0x20dff30()*-2.7396);
}

double NNfunction_ss_sLdR::synapse0x20fe8f0() {
   return (neuron0x20e0270()*-0.00890671);
}

double NNfunction_ss_sLdR::synapse0x20fe930() {
   return (neuron0x20e05b0()*0.0253483);
}

double NNfunction_ss_sLdR::synapse0x20fe970() {
   return (neuron0x20e08f0()*0.0339814);
}

double NNfunction_ss_sLdR::synapse0x20fe9b0() {
   return (neuron0x20e0c30()*-0.0152364);
}

double NNfunction_ss_sLdR::synapse0x20fe9f0() {
   return (neuron0x20e0f70()*-0.019508);
}

double NNfunction_ss_sLdR::synapse0x20fea30() {
   return (neuron0x20e12b0()*-0.0262636);
}

double NNfunction_ss_sLdR::synapse0x20fea70() {
   return (neuron0x20e15f0()*0.0183848);
}

double NNfunction_ss_sLdR::synapse0x20feab0() {
   return (neuron0x20e1930()*0.000930558);
}

double NNfunction_ss_sLdR::synapse0x20feaf0() {
   return (neuron0x20e1c70()*-0.943161);
}

double NNfunction_ss_sLdR::synapse0x20feb30() {
   return (neuron0x20e1fb0()*0.00401335);
}

double NNfunction_ss_sLdR::synapse0x20feb70() {
   return (neuron0x20e22f0()*-0.025213);
}

double NNfunction_ss_sLdR::synapse0x20febb0() {
   return (neuron0x20e2630()*0.00744766);
}

double NNfunction_ss_sLdR::synapse0x20fe640() {
   return (neuron0x20e2970()*-0.0169506);
}

double NNfunction_ss_sLdR::synapse0x20fe680() {
   return (neuron0x20e2ed0()*-1.00332);
}

double NNfunction_ss_sLdR::synapse0x20fed00() {
   return (neuron0x20e30f0()*-0.0330819);
}

double NNfunction_ss_sLdR::synapse0x20fed40() {
   return (neuron0x20e3430()*0.00875197);
}

double NNfunction_ss_sLdR::synapse0x20fed80() {
   return (neuron0x20e3770()*0.0412354);
}

double NNfunction_ss_sLdR::synapse0x20fedc0() {
   return (neuron0x20e3ab0()*0.0206412);
}

double NNfunction_ss_sLdR::synapse0x20fee00() {
   return (neuron0x20e3df0()*0.00782207);
}

double NNfunction_ss_sLdR::synapse0x20fee40() {
   return (neuron0x20e4130()*0.017333);
}

double NNfunction_ss_sLdR::synapse0x20ff1c0() {
   return (neuron0x20df570()*-1.12212);
}

double NNfunction_ss_sLdR::synapse0x20ff200() {
   return (neuron0x20df8b0()*-0.361242);
}

double NNfunction_ss_sLdR::synapse0x20ff240() {
   return (neuron0x20dfbf0()*-0.459669);
}

double NNfunction_ss_sLdR::synapse0x20ff280() {
   return (neuron0x20dff30()*0.583899);
}

double NNfunction_ss_sLdR::synapse0x20ff2c0() {
   return (neuron0x20e0270()*0.0430665);
}

double NNfunction_ss_sLdR::synapse0x20ff300() {
   return (neuron0x20e05b0()*0.167396);
}

double NNfunction_ss_sLdR::synapse0x20ff340() {
   return (neuron0x20e08f0()*-0.520564);
}

double NNfunction_ss_sLdR::synapse0x20ff380() {
   return (neuron0x20e0c30()*0.491579);
}

double NNfunction_ss_sLdR::synapse0x20ff3c0() {
   return (neuron0x20e0f70()*0.490487);
}

double NNfunction_ss_sLdR::synapse0x20ff400() {
   return (neuron0x20e12b0()*-1.34645);
}

double NNfunction_ss_sLdR::synapse0x20ff440() {
   return (neuron0x20e15f0()*0.398726);
}

double NNfunction_ss_sLdR::synapse0x20ff480() {
   return (neuron0x20e1930()*-0.450068);
}

double NNfunction_ss_sLdR::synapse0x20ff4c0() {
   return (neuron0x20e1c70()*-0.703964);
}

double NNfunction_ss_sLdR::synapse0x20ff500() {
   return (neuron0x20e1fb0()*-0.0462549);
}

double NNfunction_ss_sLdR::synapse0x20ff540() {
   return (neuron0x20e22f0()*-0.70876);
}

double NNfunction_ss_sLdR::synapse0x20ff580() {
   return (neuron0x20e2630()*-0.178518);
}

double NNfunction_ss_sLdR::synapse0x20ff010() {
   return (neuron0x20e2970()*-0.106196);
}

double NNfunction_ss_sLdR::synapse0x20ff050() {
   return (neuron0x20e2ed0()*-0.756666);
}

double NNfunction_ss_sLdR::synapse0x20ff6d0() {
   return (neuron0x20e30f0()*0.380527);
}

double NNfunction_ss_sLdR::synapse0x20ff710() {
   return (neuron0x20e3430()*-0.142475);
}

double NNfunction_ss_sLdR::synapse0x20ff750() {
   return (neuron0x20e3770()*0.552288);
}

double NNfunction_ss_sLdR::synapse0x20ff790() {
   return (neuron0x20e3ab0()*0.352704);
}

double NNfunction_ss_sLdR::synapse0x20ff7d0() {
   return (neuron0x20e3df0()*0.632383);
}

double NNfunction_ss_sLdR::synapse0x20ff810() {
   return (neuron0x20e4130()*0.673246);
}

double NNfunction_ss_sLdR::synapse0x20ffb90() {
   return (neuron0x20df570()*-0.229329);
}

double NNfunction_ss_sLdR::synapse0x20ffbd0() {
   return (neuron0x20df8b0()*-0.0327385);
}

double NNfunction_ss_sLdR::synapse0x20ffc10() {
   return (neuron0x20dfbf0()*-0.557366);
}

double NNfunction_ss_sLdR::synapse0x20ffc50() {
   return (neuron0x20dff30()*1.09128);
}

double NNfunction_ss_sLdR::synapse0x20ffc90() {
   return (neuron0x20e0270()*0.0745654);
}

double NNfunction_ss_sLdR::synapse0x20ffcd0() {
   return (neuron0x20e05b0()*-0.42361);
}

double NNfunction_ss_sLdR::synapse0x20ffd10() {
   return (neuron0x20e08f0()*-0.395926);
}

double NNfunction_ss_sLdR::synapse0x20ffd50() {
   return (neuron0x20e0c30()*0.065324);
}

double NNfunction_ss_sLdR::synapse0x20ffd90() {
   return (neuron0x20e0f70()*0.297226);
}

double NNfunction_ss_sLdR::synapse0x20ffdd0() {
   return (neuron0x20e12b0()*-0.810573);
}

double NNfunction_ss_sLdR::synapse0x20ffe10() {
   return (neuron0x20e15f0()*0.173675);
}

double NNfunction_ss_sLdR::synapse0x20ffe50() {
   return (neuron0x20e1930()*-0.0401158);
}

double NNfunction_ss_sLdR::synapse0x20ffe90() {
   return (neuron0x20e1c70()*0.159534);
}

double NNfunction_ss_sLdR::synapse0x20ffed0() {
   return (neuron0x20e1fb0()*-0.168084);
}

double NNfunction_ss_sLdR::synapse0x20fff10() {
   return (neuron0x20e22f0()*-0.705309);
}

double NNfunction_ss_sLdR::synapse0x20fff50() {
   return (neuron0x20e2630()*-0.397701);
}

double NNfunction_ss_sLdR::synapse0x20ff9e0() {
   return (neuron0x20e2970()*0.301541);
}

double NNfunction_ss_sLdR::synapse0x20ffa20() {
   return (neuron0x20e2ed0()*-1.45111);
}

double NNfunction_ss_sLdR::synapse0x21000a0() {
   return (neuron0x20e30f0()*0.674153);
}

double NNfunction_ss_sLdR::synapse0x21000e0() {
   return (neuron0x20e3430()*0.552056);
}

double NNfunction_ss_sLdR::synapse0x2100120() {
   return (neuron0x20e3770()*-0.654851);
}

double NNfunction_ss_sLdR::synapse0x2100160() {
   return (neuron0x20e3ab0()*0.213618);
}

double NNfunction_ss_sLdR::synapse0x21001a0() {
   return (neuron0x20e3df0()*0.102959);
}

double NNfunction_ss_sLdR::synapse0x21001e0() {
   return (neuron0x20e4130()*-0.132591);
}

double NNfunction_ss_sLdR::synapse0x2100560() {
   return (neuron0x20df570()*-0.35341);
}

double NNfunction_ss_sLdR::synapse0x21005a0() {
   return (neuron0x20df8b0()*-0.569959);
}

double NNfunction_ss_sLdR::synapse0x21005e0() {
   return (neuron0x20dfbf0()*0.0430744);
}

double NNfunction_ss_sLdR::synapse0x2100620() {
   return (neuron0x20dff30()*0.39332);
}

double NNfunction_ss_sLdR::synapse0x2100660() {
   return (neuron0x20e0270()*-0.918101);
}

double NNfunction_ss_sLdR::synapse0x21006a0() {
   return (neuron0x20e05b0()*1.13659);
}

double NNfunction_ss_sLdR::synapse0x21006e0() {
   return (neuron0x20e08f0()*0.433407);
}

double NNfunction_ss_sLdR::synapse0x2100720() {
   return (neuron0x20e0c30()*-0.368579);
}

double NNfunction_ss_sLdR::synapse0x2100760() {
   return (neuron0x20e0f70()*0.49786);
}

double NNfunction_ss_sLdR::synapse0x21007a0() {
   return (neuron0x20e12b0()*-0.153804);
}

double NNfunction_ss_sLdR::synapse0x21007e0() {
   return (neuron0x20e15f0()*0.283884);
}

double NNfunction_ss_sLdR::synapse0x2100820() {
   return (neuron0x20e1930()*0.634332);
}

double NNfunction_ss_sLdR::synapse0x2100860() {
   return (neuron0x20e1c70()*-0.031619);
}

double NNfunction_ss_sLdR::synapse0x21008a0() {
   return (neuron0x20e1fb0()*0.120174);
}

double NNfunction_ss_sLdR::synapse0x21008e0() {
   return (neuron0x20e22f0()*-0.124561);
}

double NNfunction_ss_sLdR::synapse0x2100920() {
   return (neuron0x20e2630()*0.680803);
}

double NNfunction_ss_sLdR::synapse0x21003b0() {
   return (neuron0x20e2970()*0.194049);
}

double NNfunction_ss_sLdR::synapse0x21003f0() {
   return (neuron0x20e2ed0()*0.201517);
}

double NNfunction_ss_sLdR::synapse0x2100a70() {
   return (neuron0x20e30f0()*-0.0370388);
}

double NNfunction_ss_sLdR::synapse0x2100ab0() {
   return (neuron0x20e3430()*-0.562195);
}

double NNfunction_ss_sLdR::synapse0x2100af0() {
   return (neuron0x20e3770()*-0.750581);
}

double NNfunction_ss_sLdR::synapse0x2100b30() {
   return (neuron0x20e3ab0()*-0.00493428);
}

double NNfunction_ss_sLdR::synapse0x2100b70() {
   return (neuron0x20e3df0()*-0.0463469);
}

double NNfunction_ss_sLdR::synapse0x2100bb0() {
   return (neuron0x20e4130()*-0.27004);
}

double NNfunction_ss_sLdR::synapse0x20e9660() {
   return (neuron0x20df570()*0.00190243);
}

double NNfunction_ss_sLdR::synapse0x20e96a0() {
   return (neuron0x20df8b0()*-0.0845064);
}

double NNfunction_ss_sLdR::synapse0x20e96e0() {
   return (neuron0x20dfbf0()*-0.180741);
}

double NNfunction_ss_sLdR::synapse0x20e9720() {
   return (neuron0x20dff30()*-0.0242429);
}

double NNfunction_ss_sLdR::synapse0x20e9760() {
   return (neuron0x20e0270()*-0.0176869);
}

double NNfunction_ss_sLdR::synapse0x20e97a0() {
   return (neuron0x20e05b0()*0.00812895);
}

double NNfunction_ss_sLdR::synapse0x20e97e0() {
   return (neuron0x20e08f0()*0.024329);
}

double NNfunction_ss_sLdR::synapse0x20e9820() {
   return (neuron0x20e0c30()*-0.0324367);
}

double NNfunction_ss_sLdR::synapse0x2101340() {
   return (neuron0x20e0f70()*-0.00691148);
}

double NNfunction_ss_sLdR::synapse0x2101380() {
   return (neuron0x20e12b0()*-0.0122511);
}

double NNfunction_ss_sLdR::synapse0x21013c0() {
   return (neuron0x20e15f0()*0.0245509);
}

double NNfunction_ss_sLdR::synapse0x2101400() {
   return (neuron0x20e1930()*0.0662042);
}

double NNfunction_ss_sLdR::synapse0x2101440() {
   return (neuron0x20e1c70()*-0.00597269);
}

double NNfunction_ss_sLdR::synapse0x2101480() {
   return (neuron0x20e1fb0()*-0.00453441);
}

double NNfunction_ss_sLdR::synapse0x21014c0() {
   return (neuron0x20e22f0()*-0.00270022);
}

double NNfunction_ss_sLdR::synapse0x2101500() {
   return (neuron0x20e2630()*-0.0192743);
}

double NNfunction_ss_sLdR::synapse0x2100d80() {
   return (neuron0x20e2970()*-0.0132452);
}

double NNfunction_ss_sLdR::synapse0x2100dc0() {
   return (neuron0x20e2ed0()*-0.214991);
}

double NNfunction_ss_sLdR::synapse0x2101650() {
   return (neuron0x20e30f0()*0.00805077);
}

double NNfunction_ss_sLdR::synapse0x2101690() {
   return (neuron0x20e3430()*0.0105268);
}

double NNfunction_ss_sLdR::synapse0x21016d0() {
   return (neuron0x20e3770()*0.0422274);
}

double NNfunction_ss_sLdR::synapse0x2101710() {
   return (neuron0x20e3ab0()*0.00780274);
}

double NNfunction_ss_sLdR::synapse0x2101750() {
   return (neuron0x20e3df0()*0.0136722);
}

double NNfunction_ss_sLdR::synapse0x2101790() {
   return (neuron0x20e4130()*0.00328112);
}

double NNfunction_ss_sLdR::synapse0x2101b10() {
   return (neuron0x20df570()*-0.0548054);
}

double NNfunction_ss_sLdR::synapse0x2101b50() {
   return (neuron0x20df8b0()*0.0637055);
}

double NNfunction_ss_sLdR::synapse0x2101b90() {
   return (neuron0x20dfbf0()*-0.0366295);
}

double NNfunction_ss_sLdR::synapse0x2101bd0() {
   return (neuron0x20dff30()*0.111916);
}

double NNfunction_ss_sLdR::synapse0x2101c10() {
   return (neuron0x20e0270()*0.045283);
}

double NNfunction_ss_sLdR::synapse0x2101c50() {
   return (neuron0x20e05b0()*0.000462089);
}

double NNfunction_ss_sLdR::synapse0x2101c90() {
   return (neuron0x20e08f0()*-0.0348338);
}

double NNfunction_ss_sLdR::synapse0x2101cd0() {
   return (neuron0x20e0c30()*-0.000447814);
}

double NNfunction_ss_sLdR::synapse0x2101d10() {
   return (neuron0x20e0f70()*-0.00288578);
}

double NNfunction_ss_sLdR::synapse0x2101d50() {
   return (neuron0x20e12b0()*0.0607483);
}

double NNfunction_ss_sLdR::synapse0x2101d90() {
   return (neuron0x20e15f0()*-0.00829717);
}

double NNfunction_ss_sLdR::synapse0x2101dd0() {
   return (neuron0x20e1930()*0.654214);
}

double NNfunction_ss_sLdR::synapse0x2101e10() {
   return (neuron0x20e1c70()*-0.748559);
}

double NNfunction_ss_sLdR::synapse0x2101e50() {
   return (neuron0x20e1fb0()*-0.183614);
}

double NNfunction_ss_sLdR::synapse0x2101e90() {
   return (neuron0x20e22f0()*0.615249);
}

double NNfunction_ss_sLdR::synapse0x2101ed0() {
   return (neuron0x20e2630()*0.601143);
}

double NNfunction_ss_sLdR::synapse0x2101960() {
   return (neuron0x20e2970()*-0.248089);
}

double NNfunction_ss_sLdR::synapse0x21019a0() {
   return (neuron0x20e2ed0()*0.290777);
}

double NNfunction_ss_sLdR::synapse0x2102020() {
   return (neuron0x20e30f0()*0.315656);
}

double NNfunction_ss_sLdR::synapse0x2102060() {
   return (neuron0x20e3430()*0.0768958);
}

double NNfunction_ss_sLdR::synapse0x21020a0() {
   return (neuron0x20e3770()*-0.101668);
}

double NNfunction_ss_sLdR::synapse0x21020e0() {
   return (neuron0x20e3ab0()*-0.0106822);
}

double NNfunction_ss_sLdR::synapse0x2102120() {
   return (neuron0x20e3df0()*-0.0554102);
}

double NNfunction_ss_sLdR::synapse0x2102160() {
   return (neuron0x20e4130()*0.051036);
}

double NNfunction_ss_sLdR::synapse0x21024e0() {
   return (neuron0x20df570()*0.409405);
}

double NNfunction_ss_sLdR::synapse0x2102520() {
   return (neuron0x20df8b0()*-0.280451);
}

double NNfunction_ss_sLdR::synapse0x2102560() {
   return (neuron0x20dfbf0()*0.436163);
}

double NNfunction_ss_sLdR::synapse0x21025a0() {
   return (neuron0x20dff30()*-0.558701);
}

double NNfunction_ss_sLdR::synapse0x21025e0() {
   return (neuron0x20e0270()*-0.0806714);
}

double NNfunction_ss_sLdR::synapse0x2102620() {
   return (neuron0x20e05b0()*-0.69736);
}

double NNfunction_ss_sLdR::synapse0x2102660() {
   return (neuron0x20e08f0()*0.209104);
}

double NNfunction_ss_sLdR::synapse0x21026a0() {
   return (neuron0x20e0c30()*0.451109);
}

double NNfunction_ss_sLdR::synapse0x21026e0() {
   return (neuron0x20e0f70()*0.733144);
}

double NNfunction_ss_sLdR::synapse0x2102720() {
   return (neuron0x20e12b0()*-0.215907);
}

double NNfunction_ss_sLdR::synapse0x2102760() {
   return (neuron0x20e15f0()*-0.77126);
}

double NNfunction_ss_sLdR::synapse0x21027a0() {
   return (neuron0x20e1930()*0.0933155);
}

double NNfunction_ss_sLdR::synapse0x21027e0() {
   return (neuron0x20e1c70()*0.983512);
}

double NNfunction_ss_sLdR::synapse0x2102820() {
   return (neuron0x20e1fb0()*-0.689529);
}

double NNfunction_ss_sLdR::synapse0x2102860() {
   return (neuron0x20e22f0()*0.560121);
}

double NNfunction_ss_sLdR::synapse0x21028a0() {
   return (neuron0x20e2630()*0.280905);
}

double NNfunction_ss_sLdR::synapse0x2102330() {
   return (neuron0x20e2970()*-0.857209);
}

double NNfunction_ss_sLdR::synapse0x2102370() {
   return (neuron0x20e2ed0()*0.666616);
}

double NNfunction_ss_sLdR::synapse0x20f2ea0() {
   return (neuron0x20e30f0()*0.136972);
}

double NNfunction_ss_sLdR::synapse0x20f2ee0() {
   return (neuron0x20e3430()*0.489969);
}

double NNfunction_ss_sLdR::synapse0x20f2f20() {
   return (neuron0x20e3770()*0.94502);
}

double NNfunction_ss_sLdR::synapse0x20f2f60() {
   return (neuron0x20e3ab0()*-0.643311);
}

double NNfunction_ss_sLdR::synapse0x20f2fa0() {
   return (neuron0x20e3df0()*-0.959308);
}

double NNfunction_ss_sLdR::synapse0x20f2fe0() {
   return (neuron0x20e4130()*-0.0285746);
}

double NNfunction_ss_sLdR::synapse0x20f3360() {
   return (neuron0x20df570()*0.245968);
}

double NNfunction_ss_sLdR::synapse0x20f33a0() {
   return (neuron0x20df8b0()*-1.38656);
}

double NNfunction_ss_sLdR::synapse0x20f33e0() {
   return (neuron0x20dfbf0()*-0.468686);
}

double NNfunction_ss_sLdR::synapse0x20f3420() {
   return (neuron0x20dff30()*-0.207937);
}

double NNfunction_ss_sLdR::synapse0x20f3460() {
   return (neuron0x20e0270()*-0.125057);
}

double NNfunction_ss_sLdR::synapse0x20f34a0() {
   return (neuron0x20e05b0()*0.71927);
}

double NNfunction_ss_sLdR::synapse0x20f34e0() {
   return (neuron0x20e08f0()*-0.229042);
}

double NNfunction_ss_sLdR::synapse0x20f3520() {
   return (neuron0x20e0c30()*0.230502);
}

double NNfunction_ss_sLdR::synapse0x20f3560() {
   return (neuron0x20e0f70()*0.70427);
}

double NNfunction_ss_sLdR::synapse0x20f35a0() {
   return (neuron0x20e12b0()*-0.416115);
}

double NNfunction_ss_sLdR::synapse0x20f35e0() {
   return (neuron0x20e15f0()*0.841146);
}

double NNfunction_ss_sLdR::synapse0x20f3620() {
   return (neuron0x20e1930()*-0.78809);
}

double NNfunction_ss_sLdR::synapse0x20f3660() {
   return (neuron0x20e1c70()*-0.446659);
}

double NNfunction_ss_sLdR::synapse0x20f36a0() {
   return (neuron0x20e1fb0()*-0.475689);
}

double NNfunction_ss_sLdR::synapse0x20f36e0() {
   return (neuron0x20e22f0()*0.179791);
}

double NNfunction_ss_sLdR::synapse0x20f3720() {
   return (neuron0x20e2630()*0.296592);
}

double NNfunction_ss_sLdR::synapse0x20f31b0() {
   return (neuron0x20e2970()*0.216417);
}

double NNfunction_ss_sLdR::synapse0x20f31f0() {
   return (neuron0x20e2ed0()*1.4828);
}

double NNfunction_ss_sLdR::synapse0x20f3870() {
   return (neuron0x20e30f0()*0.588675);
}

double NNfunction_ss_sLdR::synapse0x20f38b0() {
   return (neuron0x20e3430()*-0.0336736);
}

double NNfunction_ss_sLdR::synapse0x20f38f0() {
   return (neuron0x20e3770()*-0.349241);
}

double NNfunction_ss_sLdR::synapse0x20f3930() {
   return (neuron0x20e3ab0()*-0.0665516);
}

double NNfunction_ss_sLdR::synapse0x20f3970() {
   return (neuron0x20e3df0()*0.0647518);
}

double NNfunction_ss_sLdR::synapse0x20f39b0() {
   return (neuron0x20e4130()*0.957003);
}

double NNfunction_ss_sLdR::synapse0x20f3d30() {
   return (neuron0x20df570()*0.0525648);
}

double NNfunction_ss_sLdR::synapse0x20f3d70() {
   return (neuron0x20df8b0()*-0.890287);
}

double NNfunction_ss_sLdR::synapse0x20f3db0() {
   return (neuron0x20dfbf0()*-0.528632);
}

double NNfunction_ss_sLdR::synapse0x20f3df0() {
   return (neuron0x20dff30()*-0.22093);
}

double NNfunction_ss_sLdR::synapse0x20f3e30() {
   return (neuron0x20e0270()*-0.241071);
}

double NNfunction_ss_sLdR::synapse0x20f3e70() {
   return (neuron0x20e05b0()*-0.0763707);
}

double NNfunction_ss_sLdR::synapse0x20f3eb0() {
   return (neuron0x20e08f0()*-0.353735);
}

double NNfunction_ss_sLdR::synapse0x20f3ef0() {
   return (neuron0x20e0c30()*0.75726);
}

double NNfunction_ss_sLdR::synapse0x20f3f30() {
   return (neuron0x20e0f70()*0.101012);
}

double NNfunction_ss_sLdR::synapse0x20f3f70() {
   return (neuron0x20e12b0()*-0.107631);
}

double NNfunction_ss_sLdR::synapse0x20f3fb0() {
   return (neuron0x20e15f0()*0.580061);
}

double NNfunction_ss_sLdR::synapse0x20f3ff0() {
   return (neuron0x20e1930()*-0.516149);
}

double NNfunction_ss_sLdR::synapse0x20f4030() {
   return (neuron0x20e1c70()*-1.1601);
}

double NNfunction_ss_sLdR::synapse0x20f4070() {
   return (neuron0x20e1fb0()*1.06607);
}

double NNfunction_ss_sLdR::synapse0x20f40b0() {
   return (neuron0x20e22f0()*-0.572533);
}

double NNfunction_ss_sLdR::synapse0x20f40f0() {
   return (neuron0x20e2630()*0.252491);
}

double NNfunction_ss_sLdR::synapse0x20f3b80() {
   return (neuron0x20e2970()*0.986585);
}

double NNfunction_ss_sLdR::synapse0x20f3bc0() {
   return (neuron0x20e2ed0()*-0.868668);
}

double NNfunction_ss_sLdR::synapse0x20f4240() {
   return (neuron0x20e30f0()*-0.333898);
}

double NNfunction_ss_sLdR::synapse0x20f4280() {
   return (neuron0x20e3430()*-0.698551);
}

double NNfunction_ss_sLdR::synapse0x20f42c0() {
   return (neuron0x20e3770()*-0.542343);
}

double NNfunction_ss_sLdR::synapse0x20f4300() {
   return (neuron0x20e3ab0()*0.400749);
}

double NNfunction_ss_sLdR::synapse0x20f4340() {
   return (neuron0x20e3df0()*-0.000866214);
}

double NNfunction_ss_sLdR::synapse0x20f4380() {
   return (neuron0x20e4130()*0.174154);
}

double NNfunction_ss_sLdR::synapse0x20f4700() {
   return (neuron0x20df570()*-0.563739);
}

double NNfunction_ss_sLdR::synapse0x20f4740() {
   return (neuron0x20df8b0()*0.335604);
}

double NNfunction_ss_sLdR::synapse0x20f4780() {
   return (neuron0x20dfbf0()*1.40846);
}

double NNfunction_ss_sLdR::synapse0x20f47c0() {
   return (neuron0x20dff30()*-0.507462);
}

double NNfunction_ss_sLdR::synapse0x20f4800() {
   return (neuron0x20e0270()*-0.174671);
}

double NNfunction_ss_sLdR::synapse0x20f4840() {
   return (neuron0x20e05b0()*0.142326);
}

double NNfunction_ss_sLdR::synapse0x20f4880() {
   return (neuron0x20e08f0()*0.252662);
}

double NNfunction_ss_sLdR::synapse0x20f48c0() {
   return (neuron0x20e0c30()*0.166613);
}

double NNfunction_ss_sLdR::synapse0x20f4900() {
   return (neuron0x20e0f70()*0.149907);
}

double NNfunction_ss_sLdR::synapse0x20f4940() {
   return (neuron0x20e12b0()*0.0306148);
}

double NNfunction_ss_sLdR::synapse0x20f4980() {
   return (neuron0x20e15f0()*0.406793);
}

double NNfunction_ss_sLdR::synapse0x20f49c0() {
   return (neuron0x20e1930()*-1.14336);
}

double NNfunction_ss_sLdR::synapse0x20f4a00() {
   return (neuron0x20e1c70()*-0.263166);
}

double NNfunction_ss_sLdR::synapse0x20f4a40() {
   return (neuron0x20e1fb0()*-0.213644);
}

double NNfunction_ss_sLdR::synapse0x20f4a80() {
   return (neuron0x20e22f0()*-0.573945);
}

double NNfunction_ss_sLdR::synapse0x20f4ac0() {
   return (neuron0x20e2630()*-0.292531);
}

double NNfunction_ss_sLdR::synapse0x20f4550() {
   return (neuron0x20e2970()*-0.194129);
}

double NNfunction_ss_sLdR::synapse0x20f4590() {
   return (neuron0x20e2ed0()*-0.260316);
}

double NNfunction_ss_sLdR::synapse0x20f4c10() {
   return (neuron0x20e30f0()*0.337858);
}

double NNfunction_ss_sLdR::synapse0x20f4c50() {
   return (neuron0x20e3430()*-0.748652);
}

double NNfunction_ss_sLdR::synapse0x20f4c90() {
   return (neuron0x20e3770()*0.255538);
}

double NNfunction_ss_sLdR::synapse0x20f4cd0() {
   return (neuron0x20e3ab0()*0.435324);
}

double NNfunction_ss_sLdR::synapse0x20f4d10() {
   return (neuron0x20e3df0()*0.399632);
}

double NNfunction_ss_sLdR::synapse0x20f4d50() {
   return (neuron0x20e4130()*0.239132);
}

double NNfunction_ss_sLdR::synapse0x2106c20() {
   return (neuron0x20df570()*0.26756);
}

double NNfunction_ss_sLdR::synapse0x2106c60() {
   return (neuron0x20df8b0()*0.711151);
}

double NNfunction_ss_sLdR::synapse0x2106ca0() {
   return (neuron0x20dfbf0()*0.0873979);
}

double NNfunction_ss_sLdR::synapse0x2106ce0() {
   return (neuron0x20dff30()*0.289679);
}

double NNfunction_ss_sLdR::synapse0x2106d20() {
   return (neuron0x20e0270()*0.735944);
}

double NNfunction_ss_sLdR::synapse0x2106d60() {
   return (neuron0x20e05b0()*1.60202);
}

double NNfunction_ss_sLdR::synapse0x2106da0() {
   return (neuron0x20e08f0()*0.24901);
}

double NNfunction_ss_sLdR::synapse0x2106de0() {
   return (neuron0x20e0c30()*0.249738);
}

double NNfunction_ss_sLdR::synapse0x2106e20() {
   return (neuron0x20e0f70()*-1.02088);
}

double NNfunction_ss_sLdR::synapse0x2106e60() {
   return (neuron0x20e12b0()*-0.00655551);
}

double NNfunction_ss_sLdR::synapse0x2106ea0() {
   return (neuron0x20e15f0()*-0.123561);
}

double NNfunction_ss_sLdR::synapse0x2106ee0() {
   return (neuron0x20e1930()*-1.12275);
}

double NNfunction_ss_sLdR::synapse0x2106f20() {
   return (neuron0x20e1c70()*-0.154114);
}

double NNfunction_ss_sLdR::synapse0x2106f60() {
   return (neuron0x20e1fb0()*-0.120523);
}

double NNfunction_ss_sLdR::synapse0x2106fa0() {
   return (neuron0x20e22f0()*-0.0148407);
}

double NNfunction_ss_sLdR::synapse0x2106fe0() {
   return (neuron0x20e2630()*-0.0904677);
}

double NNfunction_ss_sLdR::synapse0x20f4d90() {
   return (neuron0x20e2970()*-0.287985);
}

double NNfunction_ss_sLdR::synapse0x20f4dd0() {
   return (neuron0x20e2ed0()*-0.149366);
}

double NNfunction_ss_sLdR::synapse0x2107130() {
   return (neuron0x20e30f0()*0.490411);
}

double NNfunction_ss_sLdR::synapse0x2107170() {
   return (neuron0x20e3430()*-0.823542);
}

double NNfunction_ss_sLdR::synapse0x21071b0() {
   return (neuron0x20e3770()*0.84868);
}

double NNfunction_ss_sLdR::synapse0x21071f0() {
   return (neuron0x20e3ab0()*0.120908);
}

double NNfunction_ss_sLdR::synapse0x2107230() {
   return (neuron0x20e3df0()*0.296294);
}

double NNfunction_ss_sLdR::synapse0x2107270() {
   return (neuron0x20e4130()*-0.243493);
}

double NNfunction_ss_sLdR::synapse0x21075f0() {
   return (neuron0x20df570()*-1.2949);
}

double NNfunction_ss_sLdR::synapse0x2107630() {
   return (neuron0x20df8b0()*-0.759591);
}

double NNfunction_ss_sLdR::synapse0x2107670() {
   return (neuron0x20dfbf0()*-0.142997);
}

double NNfunction_ss_sLdR::synapse0x21076b0() {
   return (neuron0x20dff30()*0.0916623);
}

double NNfunction_ss_sLdR::synapse0x21076f0() {
   return (neuron0x20e0270()*0.250901);
}

double NNfunction_ss_sLdR::synapse0x2107730() {
   return (neuron0x20e05b0()*0.861514);
}

double NNfunction_ss_sLdR::synapse0x2107770() {
   return (neuron0x20e08f0()*-0.204607);
}

double NNfunction_ss_sLdR::synapse0x21077b0() {
   return (neuron0x20e0c30()*-0.0513509);
}

double NNfunction_ss_sLdR::synapse0x21077f0() {
   return (neuron0x20e0f70()*0.455572);
}

double NNfunction_ss_sLdR::synapse0x2107830() {
   return (neuron0x20e12b0()*0.101014);
}

double NNfunction_ss_sLdR::synapse0x2107870() {
   return (neuron0x20e15f0()*0.61409);
}

double NNfunction_ss_sLdR::synapse0x21078b0() {
   return (neuron0x20e1930()*0.32129);
}

double NNfunction_ss_sLdR::synapse0x21078f0() {
   return (neuron0x20e1c70()*-0.1254);
}

double NNfunction_ss_sLdR::synapse0x2107930() {
   return (neuron0x20e1fb0()*0.294296);
}

double NNfunction_ss_sLdR::synapse0x2107970() {
   return (neuron0x20e22f0()*0.0860293);
}

double NNfunction_ss_sLdR::synapse0x21079b0() {
   return (neuron0x20e2630()*0.690754);
}

double NNfunction_ss_sLdR::synapse0x2107440() {
   return (neuron0x20e2970()*0.0348973);
}

double NNfunction_ss_sLdR::synapse0x2107480() {
   return (neuron0x20e2ed0()*-0.48149);
}

double NNfunction_ss_sLdR::synapse0x2107b00() {
   return (neuron0x20e30f0()*0.216355);
}

double NNfunction_ss_sLdR::synapse0x2107b40() {
   return (neuron0x20e3430()*-2.18106);
}

double NNfunction_ss_sLdR::synapse0x2107b80() {
   return (neuron0x20e3770()*-0.431137);
}

double NNfunction_ss_sLdR::synapse0x2107bc0() {
   return (neuron0x20e3ab0()*0.500832);
}

double NNfunction_ss_sLdR::synapse0x2107c00() {
   return (neuron0x20e3df0()*-1.17923);
}

double NNfunction_ss_sLdR::synapse0x2107c40() {
   return (neuron0x20e4130()*0.37155);
}

double NNfunction_ss_sLdR::synapse0x2107fc0() {
   return (neuron0x20df570()*-0.519088);
}

double NNfunction_ss_sLdR::synapse0x2108000() {
   return (neuron0x20df8b0()*0.204377);
}

double NNfunction_ss_sLdR::synapse0x2108040() {
   return (neuron0x20dfbf0()*-0.515278);
}

double NNfunction_ss_sLdR::synapse0x2108080() {
   return (neuron0x20dff30()*-0.0265766);
}

double NNfunction_ss_sLdR::synapse0x21080c0() {
   return (neuron0x20e0270()*0.274674);
}

double NNfunction_ss_sLdR::synapse0x2108100() {
   return (neuron0x20e05b0()*-0.35861);
}

double NNfunction_ss_sLdR::synapse0x2108140() {
   return (neuron0x20e08f0()*0.121649);
}

double NNfunction_ss_sLdR::synapse0x2108180() {
   return (neuron0x20e0c30()*0.0515674);
}

double NNfunction_ss_sLdR::synapse0x21081c0() {
   return (neuron0x20e0f70()*0.176573);
}

double NNfunction_ss_sLdR::synapse0x2108200() {
   return (neuron0x20e12b0()*-0.238998);
}

double NNfunction_ss_sLdR::synapse0x2108240() {
   return (neuron0x20e15f0()*-0.704774);
}

double NNfunction_ss_sLdR::synapse0x2108280() {
   return (neuron0x20e1930()*0.894656);
}

double NNfunction_ss_sLdR::synapse0x21082c0() {
   return (neuron0x20e1c70()*-2.37804);
}

double NNfunction_ss_sLdR::synapse0x2108300() {
   return (neuron0x20e1fb0()*-0.2225);
}

double NNfunction_ss_sLdR::synapse0x2108340() {
   return (neuron0x20e22f0()*-0.242701);
}

double NNfunction_ss_sLdR::synapse0x2108380() {
   return (neuron0x20e2630()*0.0168904);
}

double NNfunction_ss_sLdR::synapse0x2107e10() {
   return (neuron0x20e2970()*0.299294);
}

double NNfunction_ss_sLdR::synapse0x2107e50() {
   return (neuron0x20e2ed0()*-0.328529);
}

double NNfunction_ss_sLdR::synapse0x21084d0() {
   return (neuron0x20e30f0()*0.488918);
}

double NNfunction_ss_sLdR::synapse0x2108510() {
   return (neuron0x20e3430()*0.782285);
}

double NNfunction_ss_sLdR::synapse0x2108550() {
   return (neuron0x20e3770()*0.193954);
}

double NNfunction_ss_sLdR::synapse0x2108590() {
   return (neuron0x20e3ab0()*-0.090663);
}

double NNfunction_ss_sLdR::synapse0x21085d0() {
   return (neuron0x20e3df0()*0.480031);
}

double NNfunction_ss_sLdR::synapse0x2108610() {
   return (neuron0x20e4130()*-0.693537);
}

double NNfunction_ss_sLdR::synapse0x2108990() {
   return (neuron0x20df570()*-0.00233841);
}

double NNfunction_ss_sLdR::synapse0x21089d0() {
   return (neuron0x20df8b0()*0.0389375);
}

double NNfunction_ss_sLdR::synapse0x2108a10() {
   return (neuron0x20dfbf0()*0.0126246);
}

double NNfunction_ss_sLdR::synapse0x2108a50() {
   return (neuron0x20dff30()*-0.0809689);
}

double NNfunction_ss_sLdR::synapse0x2108a90() {
   return (neuron0x20e0270()*0.0109946);
}

double NNfunction_ss_sLdR::synapse0x2108ad0() {
   return (neuron0x20e05b0()*-0.00752316);
}

double NNfunction_ss_sLdR::synapse0x2108b10() {
   return (neuron0x20e08f0()*-0.019647);
}

double NNfunction_ss_sLdR::synapse0x2108b50() {
   return (neuron0x20e0c30()*0.00627998);
}

double NNfunction_ss_sLdR::synapse0x2108b90() {
   return (neuron0x20e0f70()*-0.00238656);
}

double NNfunction_ss_sLdR::synapse0x2108bd0() {
   return (neuron0x20e12b0()*0.0100471);
}

double NNfunction_ss_sLdR::synapse0x2108c10() {
   return (neuron0x20e15f0()*-0.00375089);
}

double NNfunction_ss_sLdR::synapse0x2108c50() {
   return (neuron0x20e1930()*0.0170572);
}

double NNfunction_ss_sLdR::synapse0x2108c90() {
   return (neuron0x20e1c70()*-0.143215);
}

double NNfunction_ss_sLdR::synapse0x2108cd0() {
   return (neuron0x20e1fb0()*0.0227875);
}

double NNfunction_ss_sLdR::synapse0x2108d10() {
   return (neuron0x20e22f0()*0.0169542);
}

double NNfunction_ss_sLdR::synapse0x2108d50() {
   return (neuron0x20e2630()*0.0228009);
}

double NNfunction_ss_sLdR::synapse0x21087e0() {
   return (neuron0x20e2970()*0.014075);
}

double NNfunction_ss_sLdR::synapse0x2108820() {
   return (neuron0x20e2ed0()*0.76132);
}

double NNfunction_ss_sLdR::synapse0x2108ea0() {
   return (neuron0x20e30f0()*0.021481);
}

double NNfunction_ss_sLdR::synapse0x2108ee0() {
   return (neuron0x20e3430()*0.00892187);
}

double NNfunction_ss_sLdR::synapse0x2108f20() {
   return (neuron0x20e3770()*-0.0178264);
}

double NNfunction_ss_sLdR::synapse0x2108f60() {
   return (neuron0x20e3ab0()*-0.00138132);
}

double NNfunction_ss_sLdR::synapse0x2108fa0() {
   return (neuron0x20e3df0()*-0.00862556);
}

double NNfunction_ss_sLdR::synapse0x2108fe0() {
   return (neuron0x20e4130()*0.0129372);
}

double NNfunction_ss_sLdR::synapse0x20e5580() {
   return (neuron0x20e45d0()*0.00633826);
}

double NNfunction_ss_sLdR::synapse0x20e55c0() {
   return (neuron0x20e4ee0()*0.205218);
}

double NNfunction_ss_sLdR::synapse0x20e6a90() {
   return (neuron0x20e59c0()*0.161142);
}

double NNfunction_ss_sLdR::synapse0x20e6ad0() {
   return (neuron0x1e9f250()*-0.264679);
}

double NNfunction_ss_sLdR::synapse0x20e7460() {
   return (neuron0x20e67e0()*0.188768);
}

double NNfunction_ss_sLdR::synapse0x20e74a0() {
   return (neuron0x20e71b0()*0.0590493);
}

double NNfunction_ss_sLdR::synapse0x20e8230() {
   return (neuron0x20e7f80()*0.130466);
}

double NNfunction_ss_sLdR::synapse0x20e8270() {
   return (neuron0x20e8950()*0.034832);
}

double NNfunction_ss_sLdR::synapse0x20e8c00() {
   return (neuron0x20e9320()*0.0641364);
}

double NNfunction_ss_sLdR::synapse0x20e8c40() {
   return (neuron0x20e9e00()*0.0889846);
}

double NNfunction_ss_sLdR::synapse0x20e95d0() {
   return (neuron0x20ea7d0()*-0.0726313);
}

double NNfunction_ss_sLdR::synapse0x20e9610() {
   return (neuron0x20e78b0()*1.07131);
}

double NNfunction_ss_sLdR::synapse0x20ea0b0() {
   return (neuron0x20ec380()*0.0652111);
}

double NNfunction_ss_sLdR::synapse0x20ea0f0() {
   return (neuron0x20ecd50()*0.524068);
}

double NNfunction_ss_sLdR::synapse0x20eaa80() {
   return (neuron0x20ed720()*0.00446278);
}

double NNfunction_ss_sLdR::synapse0x20eaac0() {
   return (neuron0x20ee0f0()*0.0664009);
}

double NNfunction_ss_sLdR::synapse0x20e7b60() {
   return (neuron0x20eff00()*-0.225757);
}

double NNfunction_ss_sLdR::synapse0x20e7ba0() {
   return (neuron0x20f01e0()*0.00890265);
}

double NNfunction_ss_sLdR::synapse0x20ec630() {
   return (neuron0x20f0bb0()*0.0704489);
}

double NNfunction_ss_sLdR::synapse0x20ec670() {
   return (neuron0x20f1580()*0.984336);
}

double NNfunction_ss_sLdR::synapse0x20ed000() {
   return (neuron0x20f1f50()*0.0156673);
}

double NNfunction_ss_sLdR::synapse0x20ed040() {
   return (neuron0x20f2920()*0.216304);
}

double NNfunction_ss_sLdR::synapse0x20ed9d0() {
   return (neuron0x20eb470()*0.810151);
}

double NNfunction_ss_sLdR::synapse0x20eda10() {
   return (neuron0x20ebe40()*-0.0604636);
}

double NNfunction_ss_sLdR::synapse0x20ee3a0() {
   return (neuron0x20f56b0()*0.0694822);
}

double NNfunction_ss_sLdR::synapse0x20ee3e0() {
   return (neuron0x20f6080()*0.319903);
}

double NNfunction_ss_sLdR::synapse0x20e2510() {
   return (neuron0x20f6a50()*-0.222096);
}

double NNfunction_ss_sLdR::synapse0x20e2550() {
   return (neuron0x20f7420()*0.0914826);
}

double NNfunction_ss_sLdR::synapse0x20f0490() {
   return (neuron0x20f7df0()*0.0762709);
}

double NNfunction_ss_sLdR::synapse0x20f04d0() {
   return (neuron0x20f87c0()*-0.0209547);
}

double NNfunction_ss_sLdR::synapse0x20f0e60() {
   return (neuron0x20f9190()*-0.0497218);
}

double NNfunction_ss_sLdR::synapse0x20f0ea0() {
   return (neuron0x20f9b60()*0.0467975);
}

double NNfunction_ss_sLdR::synapse0x20f1830() {
   return (neuron0x20efbf0()*0.846763);
}

double NNfunction_ss_sLdR::synapse0x20f1870() {
   return (neuron0x20fc740()*-0.211863);
}

double NNfunction_ss_sLdR::synapse0x20f2200() {
   return (neuron0x20fd110()*0.154157);
}

double NNfunction_ss_sLdR::synapse0x20f2240() {
   return (neuron0x20fdae0()*-0.0496683);
}

double NNfunction_ss_sLdR::synapse0x20f2bd0() {
   return (neuron0x20fe4b0()*0.918165);
}

double NNfunction_ss_sLdR::synapse0x20f2c10() {
   return (neuron0x20fee80()*-0.0408775);
}

double NNfunction_ss_sLdR::synapse0x20eb720() {
   return (neuron0x20ff850()*-0.0593794);
}

double NNfunction_ss_sLdR::synapse0x20eb760() {
   return (neuron0x2100220()*-0.0334025);
}

double NNfunction_ss_sLdR::synapse0x20f4fd0() {
   return (neuron0x2100bf0()*-0.292136);
}

double NNfunction_ss_sLdR::synapse0x20f5010() {
   return (neuron0x21017d0()*0.677655);
}

double NNfunction_ss_sLdR::synapse0x20f5960() {
   return (neuron0x21021a0()*-0.0763815);
}

double NNfunction_ss_sLdR::synapse0x20f59a0() {
   return (neuron0x20f3020()*-0.0537459);
}

double NNfunction_ss_sLdR::synapse0x20f6330() {
   return (neuron0x20f39f0()*-0.0546252);
}

double NNfunction_ss_sLdR::synapse0x20f6370() {
   return (neuron0x20f43c0()*0.0221924);
}

double NNfunction_ss_sLdR::synapse0x20f6d00() {
   return (neuron0x2106a00()*0.016917);
}

double NNfunction_ss_sLdR::synapse0x20f6d40() {
   return (neuron0x21072b0()*-0.0827927);
}

double NNfunction_ss_sLdR::synapse0x20f76d0() {
   return (neuron0x2107c80()*-0.0155463);
}

double NNfunction_ss_sLdR::synapse0x20f7710() {
   return (neuron0x2108650()*-0.324272);
}

double NNfunction_ss_sLdR::synapse0x20f9e10() {
   return (neuron0x20e45d0()*-0.511814);
}

double NNfunction_ss_sLdR::synapse0x20f9e50() {
   return (neuron0x20e4ee0()*-0.220698);
}

double NNfunction_ss_sLdR::synapse0x20ef3d0() {
   return (neuron0x20e59c0()*-0.458391);
}

double NNfunction_ss_sLdR::synapse0x20ef410() {
   return (neuron0x1e9f250()*0.119518);
}

double NNfunction_ss_sLdR::synapse0x20fc9f0() {
   return (neuron0x20e67e0()*-0.0836002);
}

double NNfunction_ss_sLdR::synapse0x20fca30() {
   return (neuron0x20e71b0()*0.0353695);
}

double NNfunction_ss_sLdR::synapse0x20fd3c0() {
   return (neuron0x20e7f80()*0.0912201);
}

double NNfunction_ss_sLdR::synapse0x20fd400() {
   return (neuron0x20e8950()*-0.220179);
}

double NNfunction_ss_sLdR::synapse0x20fdd90() {
   return (neuron0x20e9320()*-0.190345);
}

double NNfunction_ss_sLdR::synapse0x20fddd0() {
   return (neuron0x20e9e00()*-0.317816);
}

double NNfunction_ss_sLdR::synapse0x20fe760() {
   return (neuron0x20ea7d0()*0.0383269);
}

double NNfunction_ss_sLdR::synapse0x20fe7a0() {
   return (neuron0x20e78b0()*-0.127914);
}

double NNfunction_ss_sLdR::synapse0x20ff130() {
   return (neuron0x20ec380()*-0.26227);
}

double NNfunction_ss_sLdR::synapse0x20ff170() {
   return (neuron0x20ecd50()*0.688224);
}

double NNfunction_ss_sLdR::synapse0x20ffb00() {
   return (neuron0x20ed720()*0.152539);
}

double NNfunction_ss_sLdR::synapse0x20ffb40() {
   return (neuron0x20ee0f0()*0.221915);
}

double NNfunction_ss_sLdR::synapse0x21004d0() {
   return (neuron0x20eff00()*-0.193792);
}

double NNfunction_ss_sLdR::synapse0x2100510() {
   return (neuron0x20f01e0()*-0.68723);
}

double NNfunction_ss_sLdR::synapse0x2100ea0() {
   return (neuron0x20f0bb0()*0.0327334);
}

double NNfunction_ss_sLdR::synapse0x2100ee0() {
   return (neuron0x20f1580()*-1.20775);
}

double NNfunction_ss_sLdR::synapse0x2101a80() {
   return (neuron0x20f1f50()*-0.569749);
}

double NNfunction_ss_sLdR::synapse0x2101ac0() {
   return (neuron0x20f2920()*-0.206004);
}

double NNfunction_ss_sLdR::synapse0x2102450() {
   return (neuron0x20eb470()*-0.157467);
}

double NNfunction_ss_sLdR::synapse0x2102490() {
   return (neuron0x20ebe40()*-0.231309);
}

double NNfunction_ss_sLdR::synapse0x20f32d0() {
   return (neuron0x20f56b0()*-0.346916);
}

double NNfunction_ss_sLdR::synapse0x20f3310() {
   return (neuron0x20f6080()*0.377959);
}

double NNfunction_ss_sLdR::synapse0x20f3ca0() {
   return (neuron0x20f6a50()*0.598652);
}

double NNfunction_ss_sLdR::synapse0x20f3ce0() {
   return (neuron0x20f7420()*-0.157229);
}

double NNfunction_ss_sLdR::synapse0x20f4670() {
   return (neuron0x20f7df0()*-0.180435);
}

double NNfunction_ss_sLdR::synapse0x20f46b0() {
   return (neuron0x20f87c0()*0.0202021);
}

double NNfunction_ss_sLdR::synapse0x2106b90() {
   return (neuron0x20f9190()*0.174267);
}

double NNfunction_ss_sLdR::synapse0x2106bd0() {
   return (neuron0x20f9b60()*-0.00203425);
}

double NNfunction_ss_sLdR::synapse0x2107560() {
   return (neuron0x20efbf0()*-0.669993);
}

double NNfunction_ss_sLdR::synapse0x21075a0() {
   return (neuron0x20fc740()*0.0311786);
}

double NNfunction_ss_sLdR::synapse0x2107f30() {
   return (neuron0x20fd110()*-0.231292);
}

double NNfunction_ss_sLdR::synapse0x2107f70() {
   return (neuron0x20fdae0()*-0.408552);
}

double NNfunction_ss_sLdR::synapse0x2108900() {
   return (neuron0x20fe4b0()*-0.43877);
}

double NNfunction_ss_sLdR::synapse0x2108940() {
   return (neuron0x20fee80()*-0.149526);
}

double NNfunction_ss_sLdR::synapse0x20e47f0() {
   return (neuron0x20ff850()*0.419316);
}

double NNfunction_ss_sLdR::synapse0x20e4830() {
   return (neuron0x2100220()*-0.347348);
}

double NNfunction_ss_sLdR::synapse0x20f80a0() {
   return (neuron0x2100bf0()*0.110172);
}

double NNfunction_ss_sLdR::synapse0x20f80e0() {
   return (neuron0x21017d0()*-0.478059);
}

double NNfunction_ss_sLdR::synapse0x2109020() {
   return (neuron0x21021a0()*0.0660644);
}

double NNfunction_ss_sLdR::synapse0x2109060() {
   return (neuron0x20f3020()*-0.70532);
}

double NNfunction_ss_sLdR::synapse0x21090a0() {
   return (neuron0x20f39f0()*0.0510009);
}

double NNfunction_ss_sLdR::synapse0x21090e0() {
   return (neuron0x20f43c0()*-0.173533);
}

double NNfunction_ss_sLdR::synapse0x210ff90() {
   return (neuron0x2106a00()*0.2452);
}

double NNfunction_ss_sLdR::synapse0x210ffd0() {
   return (neuron0x21072b0()*-0.223202);
}

double NNfunction_ss_sLdR::synapse0x2110010() {
   return (neuron0x2107c80()*-0.390316);
}

double NNfunction_ss_sLdR::synapse0x2110050() {
   return (neuron0x2108650()*-0.334548);
}

double NNfunction_ss_sLdR::synapse0x21103d0() {
   return (neuron0x20e45d0()*1.61329);
}

double NNfunction_ss_sLdR::synapse0x2110410() {
   return (neuron0x20e4ee0()*1.76164);
}

double NNfunction_ss_sLdR::synapse0x2110450() {
   return (neuron0x20e59c0()*1.72453);
}

double NNfunction_ss_sLdR::synapse0x2110490() {
   return (neuron0x1e9f250()*-2.29276);
}

double NNfunction_ss_sLdR::synapse0x21104d0() {
   return (neuron0x20e67e0()*-9.23571);
}

double NNfunction_ss_sLdR::synapse0x2110510() {
   return (neuron0x20e71b0()*1.70597);
}

double NNfunction_ss_sLdR::synapse0x2110550() {
   return (neuron0x20e7f80()*1.25882);
}

double NNfunction_ss_sLdR::synapse0x2110590() {
   return (neuron0x20e8950()*-1.8556);
}

double NNfunction_ss_sLdR::synapse0x21105d0() {
   return (neuron0x20e9320()*1.68955);
}

double NNfunction_ss_sLdR::synapse0x2110610() {
   return (neuron0x20e9e00()*1.68021);
}

double NNfunction_ss_sLdR::synapse0x2110650() {
   return (neuron0x20ea7d0()*1.45087);
}

double NNfunction_ss_sLdR::synapse0x2110690() {
   return (neuron0x20e78b0()*-0.950022);
}

double NNfunction_ss_sLdR::synapse0x21106d0() {
   return (neuron0x20ec380()*1.6503);
}

double NNfunction_ss_sLdR::synapse0x2110710() {
   return (neuron0x20ecd50()*-8.02063);
}

double NNfunction_ss_sLdR::synapse0x2110750() {
   return (neuron0x20ed720()*1.3756);
}

double NNfunction_ss_sLdR::synapse0x2110790() {
   return (neuron0x20ee0f0()*-1.79968);
}

double NNfunction_ss_sLdR::synapse0x2110220() {
   return (neuron0x20eff00()*-1.84973);
}

double NNfunction_ss_sLdR::synapse0x2110260() {
   return (neuron0x20f01e0()*1.42105);
}

double NNfunction_ss_sLdR::synapse0x21108e0() {
   return (neuron0x20f0bb0()*1.62861);
}

double NNfunction_ss_sLdR::synapse0x2110920() {
   return (neuron0x20f1580()*2.26126);
}

double NNfunction_ss_sLdR::synapse0x2110960() {
   return (neuron0x20f1f50()*1.41323);
}

double NNfunction_ss_sLdR::synapse0x21109a0() {
   return (neuron0x20f2920()*-2.2011);
}

double NNfunction_ss_sLdR::synapse0x21109e0() {
   return (neuron0x20eb470()*-1.45074);
}

double NNfunction_ss_sLdR::synapse0x2110a20() {
   return (neuron0x20ebe40()*-1.38254);
}

double NNfunction_ss_sLdR::synapse0x2110a60() {
   return (neuron0x20f56b0()*-1.7085);
}

double NNfunction_ss_sLdR::synapse0x2110aa0() {
   return (neuron0x20f6080()*-2.37671);
}

double NNfunction_ss_sLdR::synapse0x2110ae0() {
   return (neuron0x20f6a50()*7.64177);
}

double NNfunction_ss_sLdR::synapse0x2110b20() {
   return (neuron0x20f7420()*1.29367);
}

double NNfunction_ss_sLdR::synapse0x2110b60() {
   return (neuron0x20f7df0()*1.34617);
}

double NNfunction_ss_sLdR::synapse0x2110ba0() {
   return (neuron0x20f87c0()*-1.41312);
}

double NNfunction_ss_sLdR::synapse0x2110be0() {
   return (neuron0x20f9190()*1.60505);
}

double NNfunction_ss_sLdR::synapse0x2110c20() {
   return (neuron0x20f9b60()*1.25957);
}

double NNfunction_ss_sLdR::synapse0x21107d0() {
   return (neuron0x20efbf0()*-0.179561);
}

double NNfunction_ss_sLdR::synapse0x2110810() {
   return (neuron0x20fc740()*-1.81983);
}

double NNfunction_ss_sLdR::synapse0x2110850() {
   return (neuron0x20fd110()*-1.14452);
}

double NNfunction_ss_sLdR::synapse0x2110890() {
   return (neuron0x20fdae0()*-2.01334);
}

double NNfunction_ss_sLdR::synapse0x2110e70() {
   return (neuron0x20fe4b0()*7.06238);
}

double NNfunction_ss_sLdR::synapse0x2110eb0() {
   return (neuron0x20fee80()*1.73374);
}

double NNfunction_ss_sLdR::synapse0x2110ef0() {
   return (neuron0x20ff850()*-2.14044);
}

double NNfunction_ss_sLdR::synapse0x2110f30() {
   return (neuron0x2100220()*-2.19094);
}

double NNfunction_ss_sLdR::synapse0x2110f70() {
   return (neuron0x2100bf0()*-0.675374);
}

double NNfunction_ss_sLdR::synapse0x2110fb0() {
   return (neuron0x21017d0()*0.348414);
}

double NNfunction_ss_sLdR::synapse0x2110ff0() {
   return (neuron0x21021a0()*1.23835);
}

double NNfunction_ss_sLdR::synapse0x2111030() {
   return (neuron0x20f3020()*1.69378);
}

double NNfunction_ss_sLdR::synapse0x2111070() {
   return (neuron0x20f39f0()*1.8028);
}

double NNfunction_ss_sLdR::synapse0x21110b0() {
   return (neuron0x20f43c0()*1.70409);
}

double NNfunction_ss_sLdR::synapse0x21110f0() {
   return (neuron0x2106a00()*-1.85633);
}

double NNfunction_ss_sLdR::synapse0x2111130() {
   return (neuron0x21072b0()*1.17005);
}

double NNfunction_ss_sLdR::synapse0x2111170() {
   return (neuron0x2107c80()*-1.96097);
}

double NNfunction_ss_sLdR::synapse0x21111b0() {
   return (neuron0x2108650()*-0.361169);
}

double NNfunction_ss_sLdR::synapse0x2111530() {
   return (neuron0x20e45d0()*0.0725643);
}

double NNfunction_ss_sLdR::synapse0x2111570() {
   return (neuron0x20e4ee0()*0.0604);
}

double NNfunction_ss_sLdR::synapse0x21115b0() {
   return (neuron0x20e59c0()*0.0848975);
}

double NNfunction_ss_sLdR::synapse0x21115f0() {
   return (neuron0x1e9f250()*-0.175089);
}

double NNfunction_ss_sLdR::synapse0x2111630() {
   return (neuron0x20e67e0()*1.33316);
}

double NNfunction_ss_sLdR::synapse0x2111670() {
   return (neuron0x20e71b0()*0.0933141);
}

double NNfunction_ss_sLdR::synapse0x21116b0() {
   return (neuron0x20e7f80()*0.0142729);
}

double NNfunction_ss_sLdR::synapse0x21116f0() {
   return (neuron0x20e8950()*-0.0549266);
}

double NNfunction_ss_sLdR::synapse0x2111730() {
   return (neuron0x20e9320()*0.0603278);
}

double NNfunction_ss_sLdR::synapse0x2111770() {
   return (neuron0x20e9e00()*0.0397013);
}

double NNfunction_ss_sLdR::synapse0x21117b0() {
   return (neuron0x20ea7d0()*0.00165213);
}

double NNfunction_ss_sLdR::synapse0x21117f0() {
   return (neuron0x20e78b0()*0.463993);
}

double NNfunction_ss_sLdR::synapse0x2111830() {
   return (neuron0x20ec380()*0.0432518);
}

double NNfunction_ss_sLdR::synapse0x2111870() {
   return (neuron0x20ecd50()*-0.941757);
}

double NNfunction_ss_sLdR::synapse0x21118b0() {
   return (neuron0x20ed720()*0.0562835);
}

double NNfunction_ss_sLdR::synapse0x21118f0() {
   return (neuron0x20ee0f0()*0.0242384);
}

double NNfunction_ss_sLdR::synapse0x2111380() {
   return (neuron0x20eff00()*-0.0357201);
}

double NNfunction_ss_sLdR::synapse0x21113c0() {
   return (neuron0x20f01e0()*0.0110651);
}

double NNfunction_ss_sLdR::synapse0x2111a40() {
   return (neuron0x20f0bb0()*0.0347529);
}

double NNfunction_ss_sLdR::synapse0x2111a80() {
   return (neuron0x20f1580()*0.475723);
}

double NNfunction_ss_sLdR::synapse0x2111ac0() {
   return (neuron0x20f1f50()*0.0196488);
}

double NNfunction_ss_sLdR::synapse0x2111b00() {
   return (neuron0x20f2920()*0.108471);
}

double NNfunction_ss_sLdR::synapse0x2111b40() {
   return (neuron0x20eb470()*-0.847407);
}

double NNfunction_ss_sLdR::synapse0x2111b80() {
   return (neuron0x20ebe40()*-0.0538217);
}

double NNfunction_ss_sLdR::synapse0x2111bc0() {
   return (neuron0x20f56b0()*0.0137026);
}

double NNfunction_ss_sLdR::synapse0x2111c00() {
   return (neuron0x20f6080()*0.286506);
}

double NNfunction_ss_sLdR::synapse0x2111c40() {
   return (neuron0x20f6a50()*1.29431);
}

double NNfunction_ss_sLdR::synapse0x2111c80() {
   return (neuron0x20f7420()*0.51343);
}

double NNfunction_ss_sLdR::synapse0x2111cc0() {
   return (neuron0x20f7df0()*0.0883275);
}

double NNfunction_ss_sLdR::synapse0x2111d00() {
   return (neuron0x20f87c0()*-0.0720321);
}

double NNfunction_ss_sLdR::synapse0x2111d40() {
   return (neuron0x20f9190()*0.0253747);
}

double NNfunction_ss_sLdR::synapse0x2111d80() {
   return (neuron0x20f9b60()*0.0278746);
}

double NNfunction_ss_sLdR::synapse0x2111930() {
   return (neuron0x20efbf0()*-2.3393);
}

double NNfunction_ss_sLdR::synapse0x2111970() {
   return (neuron0x20fc740()*-0.0717837);
}

double NNfunction_ss_sLdR::synapse0x21119b0() {
   return (neuron0x20fd110()*2.44938);
}

double NNfunction_ss_sLdR::synapse0x21119f0() {
   return (neuron0x20fdae0()*-0.0331466);
}

double NNfunction_ss_sLdR::synapse0x2111fd0() {
   return (neuron0x20fe4b0()*-1.37865);
}

double NNfunction_ss_sLdR::synapse0x2112010() {
   return (neuron0x20fee80()*0.0359364);
}

double NNfunction_ss_sLdR::synapse0x2112050() {
   return (neuron0x20ff850()*-0.095721);
}

double NNfunction_ss_sLdR::synapse0x2112090() {
   return (neuron0x2100220()*-0.0223619);
}

double NNfunction_ss_sLdR::synapse0x21120d0() {
   return (neuron0x2100bf0()*1.00101);
}

double NNfunction_ss_sLdR::synapse0x2112110() {
   return (neuron0x21017d0()*0.19099);
}

double NNfunction_ss_sLdR::synapse0x2112150() {
   return (neuron0x21021a0()*0.0183465);
}

double NNfunction_ss_sLdR::synapse0x2112190() {
   return (neuron0x20f3020()*0.0218094);
}

double NNfunction_ss_sLdR::synapse0x21121d0() {
   return (neuron0x20f39f0()*-0.0334277);
}

double NNfunction_ss_sLdR::synapse0x2112210() {
   return (neuron0x20f43c0()*0.0491895);
}

double NNfunction_ss_sLdR::synapse0x2112250() {
   return (neuron0x2106a00()*-0.0399922);
}

double NNfunction_ss_sLdR::synapse0x2112290() {
   return (neuron0x21072b0()*0.0104308);
}

double NNfunction_ss_sLdR::synapse0x21122d0() {
   return (neuron0x2107c80()*-0.0545596);
}

double NNfunction_ss_sLdR::synapse0x2112310() {
   return (neuron0x2108650()*0.479461);
}

double NNfunction_ss_sLdR::synapse0x2112690() {
   return (neuron0x20e45d0()*0.121888);
}

double NNfunction_ss_sLdR::synapse0x21126d0() {
   return (neuron0x20e4ee0()*0.0912717);
}

double NNfunction_ss_sLdR::synapse0x2112710() {
   return (neuron0x20e59c0()*0.13806);
}

double NNfunction_ss_sLdR::synapse0x2112750() {
   return (neuron0x1e9f250()*0.11959);
}

double NNfunction_ss_sLdR::synapse0x2112790() {
   return (neuron0x20e67e0()*0.434722);
}

double NNfunction_ss_sLdR::synapse0x21127d0() {
   return (neuron0x20e71b0()*0.157345);
}

double NNfunction_ss_sLdR::synapse0x2112810() {
   return (neuron0x20e7f80()*-0.00988753);
}

double NNfunction_ss_sLdR::synapse0x2112850() {
   return (neuron0x20e8950()*-0.134367);
}

double NNfunction_ss_sLdR::synapse0x2112890() {
   return (neuron0x20e9320()*0.0997049);
}

double NNfunction_ss_sLdR::synapse0x21128d0() {
   return (neuron0x20e9e00()*0.0647377);
}

double NNfunction_ss_sLdR::synapse0x2112910() {
   return (neuron0x20ea7d0()*0.027439);
}

double NNfunction_ss_sLdR::synapse0x2112950() {
   return (neuron0x20e78b0()*0.620548);
}

double NNfunction_ss_sLdR::synapse0x2112990() {
   return (neuron0x20ec380()*0.0841544);
}

double NNfunction_ss_sLdR::synapse0x21129d0() {
   return (neuron0x20ecd50()*-0.238758);
}

double NNfunction_ss_sLdR::synapse0x2112a10() {
   return (neuron0x20ed720()*0.122397);
}

double NNfunction_ss_sLdR::synapse0x2112a50() {
   return (neuron0x20ee0f0()*-0.00175879);
}

double NNfunction_ss_sLdR::synapse0x21124e0() {
   return (neuron0x20eff00()*-0.0535744);
}

double NNfunction_ss_sLdR::synapse0x2112520() {
   return (neuron0x20f01e0()*0.0287918);
}

double NNfunction_ss_sLdR::synapse0x2112ba0() {
   return (neuron0x20f0bb0()*0.0789039);
}

double NNfunction_ss_sLdR::synapse0x2112be0() {
   return (neuron0x20f1580()*0.484791);
}

double NNfunction_ss_sLdR::synapse0x2112c20() {
   return (neuron0x20f1f50()*0.0586209);
}

double NNfunction_ss_sLdR::synapse0x2112c60() {
   return (neuron0x20f2920()*0.112129);
}

double NNfunction_ss_sLdR::synapse0x2112ca0() {
   return (neuron0x20eb470()*0.304145);
}

double NNfunction_ss_sLdR::synapse0x2112ce0() {
   return (neuron0x20ebe40()*-0.102864);
}

double NNfunction_ss_sLdR::synapse0x2112d20() {
   return (neuron0x20f56b0()*-0.0237598);
}

double NNfunction_ss_sLdR::synapse0x2112d60() {
   return (neuron0x20f6080()*0.394076);
}

double NNfunction_ss_sLdR::synapse0x2112da0() {
   return (neuron0x20f6a50()*-0.296631);
}

double NNfunction_ss_sLdR::synapse0x2112de0() {
   return (neuron0x20f7420()*0.944308);
}

double NNfunction_ss_sLdR::synapse0x2112e20() {
   return (neuron0x20f7df0()*0.141938);
}

double NNfunction_ss_sLdR::synapse0x2112e60() {
   return (neuron0x20f87c0()*-0.145751);
}

double NNfunction_ss_sLdR::synapse0x2112ea0() {
   return (neuron0x20f9190()*0.0804266);
}

double NNfunction_ss_sLdR::synapse0x2112ee0() {
   return (neuron0x20f9b60()*0.0561087);
}

double NNfunction_ss_sLdR::synapse0x2112a90() {
   return (neuron0x20efbf0()*0.523112);
}

double NNfunction_ss_sLdR::synapse0x2112ad0() {
   return (neuron0x20fc740()*-0.114453);
}

double NNfunction_ss_sLdR::synapse0x2112b10() {
   return (neuron0x20fd110()*-1.92829);
}

double NNfunction_ss_sLdR::synapse0x2112b50() {
   return (neuron0x20fdae0()*-0.0944063);
}

double NNfunction_ss_sLdR::synapse0x2113130() {
   return (neuron0x20fe4b0()*-0.538385);
}

double NNfunction_ss_sLdR::synapse0x2113170() {
   return (neuron0x20fee80()*0.0898882);
}

double NNfunction_ss_sLdR::synapse0x21131b0() {
   return (neuron0x20ff850()*-0.184102);
}

double NNfunction_ss_sLdR::synapse0x21131f0() {
   return (neuron0x2100220()*-0.0941089);
}

double NNfunction_ss_sLdR::synapse0x2113230() {
   return (neuron0x2100bf0()*-0.960775);
}

double NNfunction_ss_sLdR::synapse0x2113270() {
   return (neuron0x21017d0()*-0.101255);
}

double NNfunction_ss_sLdR::synapse0x21132b0() {
   return (neuron0x21021a0()*0.068831);
}

double NNfunction_ss_sLdR::synapse0x21132f0() {
   return (neuron0x20f3020()*0.0616244);
}

double NNfunction_ss_sLdR::synapse0x2113330() {
   return (neuron0x20f39f0()*-0.0290455);
}

double NNfunction_ss_sLdR::synapse0x2113370() {
   return (neuron0x20f43c0()*0.086529);
}

double NNfunction_ss_sLdR::synapse0x21133b0() {
   return (neuron0x2106a00()*-0.109005);
}

double NNfunction_ss_sLdR::synapse0x21133f0() {
   return (neuron0x21072b0()*0.0512658);
}

double NNfunction_ss_sLdR::synapse0x2113430() {
   return (neuron0x2107c80()*-0.116147);
}

double NNfunction_ss_sLdR::synapse0x2113470() {
   return (neuron0x2108650()*-2.86495);
}

double NNfunction_ss_sLdR::synapse0x20e4590() {
   return (neuron0x210f850()*5.04536);
}

double NNfunction_ss_sLdR::synapse0x21136d0() {
   return (neuron0x210fbf0()*-0.872155);
}

double NNfunction_ss_sLdR::synapse0x2113710() {
   return (neuron0x2110090()*-9.86519);
}

double NNfunction_ss_sLdR::synapse0x2113750() {
   return (neuron0x21111f0()*-7.28708);
}

double NNfunction_ss_sLdR::synapse0x2113790() {
   return (neuron0x2112350()*4.83594);
}

