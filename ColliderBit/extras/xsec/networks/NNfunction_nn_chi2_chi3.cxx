#include "NNfunction_nn_chi2_chi3.h"
#include <cmath>

double NNfunction_nn_chi2_chi3::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.6694)/14.9584;
   input1 = (in1 - 48.5536)/801.097;
   input2 = (in2 - 388.265)/455.659;
   input3 = (in3 - 264.573)/757.264;
   input4 = (in4 - 1055.67)/892.516;
   input5 = (in5 - 1053.32)/991.467;
   input6 = (in6 - 1055.57)/990.116;
   input7 = (in7 - 1037.43)/955.762;
   input8 = (in8 - 1055.23)/1000.98;
   input9 = (in9 - 1045.96)/994.297;
   input10 = (in10 - 1023.37)/939.538;
   input11 = (in11 - 999.49)/969.516;
   input12 = (in12 - 1011.83)/970.745;
   input13 = (in13 - 756.397)/696.21;
   input14 = (in14 - 1006)/947.372;
   input15 = (in15 - 1010.35)/948.496;
   input16 = (in16 - 682.484)/601.363;
   input17 = (in17 - 1024.04)/980.923;
   input18 = (in18 - 1022.05)/981.464;
   input19 = (in19 - 985.11)/906.302;
   input20 = (in20 - -194.315)/480.212;
   input21 = (in21 - -248.198)/974.481;
   input22 = (in22 - 10.504)/968.797;
   input23 = (in23 - 22.7858)/307.981;
   switch(index) {
     case 0:
         return neuron0x40c8260();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi2_chi3::Value(int index, double* input) {
   input0 = (input[0] - 24.6694)/14.9584;
   input1 = (input[1] - 48.5536)/801.097;
   input2 = (input[2] - 388.265)/455.659;
   input3 = (input[3] - 264.573)/757.264;
   input4 = (input[4] - 1055.67)/892.516;
   input5 = (input[5] - 1053.32)/991.467;
   input6 = (input[6] - 1055.57)/990.116;
   input7 = (input[7] - 1037.43)/955.762;
   input8 = (input[8] - 1055.23)/1000.98;
   input9 = (input[9] - 1045.96)/994.297;
   input10 = (input[10] - 1023.37)/939.538;
   input11 = (input[11] - 999.49)/969.516;
   input12 = (input[12] - 1011.83)/970.745;
   input13 = (input[13] - 756.397)/696.21;
   input14 = (input[14] - 1006)/947.372;
   input15 = (input[15] - 1010.35)/948.496;
   input16 = (input[16] - 682.484)/601.363;
   input17 = (input[17] - 1024.04)/980.923;
   input18 = (input[18] - 1022.05)/981.464;
   input19 = (input[19] - 985.11)/906.302;
   input20 = (input[20] - -194.315)/480.212;
   input21 = (input[21] - -248.198)/974.481;
   input22 = (input[22] - 10.504)/968.797;
   input23 = (input[23] - 22.7858)/307.981;
   switch(index) {
     case 0:
         return neuron0x40c8260();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi2_chi3::neuron0x40932d0() {
   return input0;
}

double NNfunction_nn_chi2_chi3::neuron0x4093580() {
   return input1;
}

double NNfunction_nn_chi2_chi3::neuron0x40938c0() {
   return input2;
}

double NNfunction_nn_chi2_chi3::neuron0x4093c00() {
   return input3;
}

double NNfunction_nn_chi2_chi3::neuron0x4093f40() {
   return input4;
}

double NNfunction_nn_chi2_chi3::neuron0x4094280() {
   return input5;
}

double NNfunction_nn_chi2_chi3::neuron0x40945c0() {
   return input6;
}

double NNfunction_nn_chi2_chi3::neuron0x4094900() {
   return input7;
}

double NNfunction_nn_chi2_chi3::neuron0x4094c40() {
   return input8;
}

double NNfunction_nn_chi2_chi3::neuron0x4094f80() {
   return input9;
}

double NNfunction_nn_chi2_chi3::neuron0x40952c0() {
   return input10;
}

double NNfunction_nn_chi2_chi3::neuron0x4095600() {
   return input11;
}

double NNfunction_nn_chi2_chi3::neuron0x4095940() {
   return input12;
}

double NNfunction_nn_chi2_chi3::neuron0x4095c80() {
   return input13;
}

double NNfunction_nn_chi2_chi3::neuron0x4095fc0() {
   return input14;
}

double NNfunction_nn_chi2_chi3::neuron0x4096300() {
   return input15;
}

double NNfunction_nn_chi2_chi3::neuron0x4096640() {
   return input16;
}

double NNfunction_nn_chi2_chi3::neuron0x4096ba0() {
   return input17;
}

double NNfunction_nn_chi2_chi3::neuron0x4096ee0() {
   return input18;
}

double NNfunction_nn_chi2_chi3::neuron0x4097220() {
   return input19;
}

double NNfunction_nn_chi2_chi3::neuron0x4097560() {
   return input20;
}

double NNfunction_nn_chi2_chi3::neuron0x40978a0() {
   return input21;
}

double NNfunction_nn_chi2_chi3::neuron0x4097be0() {
   return input22;
}

double NNfunction_nn_chi2_chi3::neuron0x4097f20() {
   return input23;
}

double NNfunction_nn_chi2_chi3::input0x4098390() {
   double input = 1.25178;
   input += synapse0x40986d0();
   input += synapse0x4098710();
   input += synapse0x4098750();
   input += synapse0x4098790();
   input += synapse0x40987d0();
   input += synapse0x4098810();
   input += synapse0x4098850();
   input += synapse0x4098890();
   input += synapse0x40988d0();
   input += synapse0x4098910();
   input += synapse0x4098950();
   input += synapse0x4098990();
   input += synapse0x40989d0();
   input += synapse0x4098a10();
   input += synapse0x4098a50();
   input += synapse0x4098a90();
   input += synapse0x4098520();
   input += synapse0x4098560();
   input += synapse0x3e4f590();
   input += synapse0x3e4f5d0();
   input += synapse0x4098ad0();
   input += synapse0x4098b10();
   input += synapse0x4098b50();
   input += synapse0x4098b90();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x4098390() {
   double input = input0x4098390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x4098bd0() {
   double input = -5.98786;
   input += synapse0x4098f10();
   input += synapse0x4098f50();
   input += synapse0x4098f90();
   input += synapse0x4098fd0();
   input += synapse0x4099010();
   input += synapse0x4099050();
   input += synapse0x4099090();
   input += synapse0x40990d0();
   input += synapse0x4099110();
   input += synapse0x3e4f3e0();
   input += synapse0x3e4f420();
   input += synapse0x3e4f460();
   input += synapse0x3e4f4a0();
   input += synapse0x4099360();
   input += synapse0x40993a0();
   input += synapse0x40993e0();
   input += synapse0x4098d60();
   input += synapse0x4098da0();
   input += synapse0x4099530();
   input += synapse0x4099570();
   input += synapse0x40995b0();
   input += synapse0x40995f0();
   input += synapse0x4099630();
   input += synapse0x4099670();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x4098bd0() {
   double input = input0x4098bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40996b0() {
   double input = 0.202418;
   input += synapse0x40999f0();
   input += synapse0x4099a30();
   input += synapse0x4099a70();
   input += synapse0x4099ab0();
   input += synapse0x4099af0();
   input += synapse0x4099b30();
   input += synapse0x4099b70();
   input += synapse0x4099bb0();
   input += synapse0x4099bf0();
   input += synapse0x4099c30();
   input += synapse0x4099c70();
   input += synapse0x4099cb0();
   input += synapse0x4099cf0();
   input += synapse0x4099d30();
   input += synapse0x4099d70();
   input += synapse0x4099db0();
   input += synapse0x4099840();
   input += synapse0x4099880();
   input += synapse0x2c3af10();
   input += synapse0x3e5d380();
   input += synapse0x3e5d3c0();
   input += synapse0x409bce0();
   input += synapse0x409bd20();
   input += synapse0x4093010();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40996b0() {
   double input = input0x40996b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x4099150() {
   double input = 0.930884;
   input += synapse0x40930e0();
   input += synapse0x3e5dc00();
   input += synapse0x40992e0();
   input += synapse0x4099320();
   input += synapse0x4099f00();
   input += synapse0x4099f40();
   input += synapse0x4099f80();
   input += synapse0x4099fc0();
   input += synapse0x409a000();
   input += synapse0x409a040();
   input += synapse0x409a080();
   input += synapse0x409a0c0();
   input += synapse0x409a100();
   input += synapse0x409a140();
   input += synapse0x409a180();
   input += synapse0x409a1c0();
   input += synapse0x4093050();
   input += synapse0x4093090();
   input += synapse0x409a310();
   input += synapse0x409a350();
   input += synapse0x409a390();
   input += synapse0x409a3d0();
   input += synapse0x409a410();
   input += synapse0x409a450();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x4099150() {
   double input = input0x4099150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x409a490() {
   double input = 0.417683;
   input += synapse0x409a7d0();
   input += synapse0x409a810();
   input += synapse0x409a850();
   input += synapse0x409a890();
   input += synapse0x409a8d0();
   input += synapse0x409a910();
   input += synapse0x409a950();
   input += synapse0x409a990();
   input += synapse0x409a9d0();
   input += synapse0x409aa10();
   input += synapse0x409aa50();
   input += synapse0x409aa90();
   input += synapse0x409aad0();
   input += synapse0x409ab10();
   input += synapse0x409ab50();
   input += synapse0x409ab90();
   input += synapse0x409ace0();
   input += synapse0x409a620();
   input += synapse0x409a660();
   input += synapse0x409be20();
   input += synapse0x409be60();
   input += synapse0x409bea0();
   input += synapse0x409bee0();
   input += synapse0x409bf20();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x409a490() {
   double input = input0x409a490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x409bf60() {
   double input = 0.132835;
   input += synapse0x409c2a0();
   input += synapse0x409c2e0();
   input += synapse0x409c320();
   input += synapse0x409c360();
   input += synapse0x409c3a0();
   input += synapse0x409c3e0();
   input += synapse0x409c420();
   input += synapse0x409c460();
   input += synapse0x409c4a0();
   input += synapse0x3e5d6d0();
   input += synapse0x3e5d710();
   input += synapse0x3e5d750();
   input += synapse0x3e5d790();
   input += synapse0x3e5d7d0();
   input += synapse0x3e5d810();
   input += synapse0x3e5d850();
   input += synapse0x409c0f0();
   input += synapse0x409c130();
   input += synapse0x3e5d9a0();
   input += synapse0x3e5d9e0();
   input += synapse0x3e5da20();
   input += synapse0x3e5da60();
   input += synapse0x3e5daa0();
   input += synapse0x409ccf0();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x409bf60() {
   double input = input0x409bf60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x409cd30() {
   double input = 0.363942;
   input += synapse0x409d070();
   input += synapse0x409d0b0();
   input += synapse0x409d0f0();
   input += synapse0x409d130();
   input += synapse0x409d170();
   input += synapse0x409d1b0();
   input += synapse0x409d1f0();
   input += synapse0x409d230();
   input += synapse0x409d270();
   input += synapse0x409d2b0();
   input += synapse0x409d2f0();
   input += synapse0x409d330();
   input += synapse0x409d370();
   input += synapse0x409d3b0();
   input += synapse0x409d3f0();
   input += synapse0x409d430();
   input += synapse0x409cec0();
   input += synapse0x409cf00();
   input += synapse0x409d580();
   input += synapse0x409d5c0();
   input += synapse0x409d600();
   input += synapse0x409d640();
   input += synapse0x409d680();
   input += synapse0x409d6c0();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x409cd30() {
   double input = input0x409cd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x409d700() {
   double input = -0.717272;
   input += synapse0x409da40();
   input += synapse0x409da80();
   input += synapse0x409dac0();
   input += synapse0x409db00();
   input += synapse0x409db40();
   input += synapse0x409db80();
   input += synapse0x409dbc0();
   input += synapse0x409dc00();
   input += synapse0x409dc40();
   input += synapse0x409dc80();
   input += synapse0x409dcc0();
   input += synapse0x409dd00();
   input += synapse0x409dd40();
   input += synapse0x409dd80();
   input += synapse0x409ddc0();
   input += synapse0x409de00();
   input += synapse0x409d890();
   input += synapse0x409d8d0();
   input += synapse0x409df50();
   input += synapse0x409df90();
   input += synapse0x409dfd0();
   input += synapse0x409e010();
   input += synapse0x409e050();
   input += synapse0x409e090();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x409d700() {
   double input = input0x409d700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x409e0d0() {
   double input = 3.91972;
   input += synapse0x4096a90();
   input += synapse0x4096ad0();
   input += synapse0x4096b10();
   input += synapse0x4096b50();
   input += synapse0x409e620();
   input += synapse0x409e660();
   input += synapse0x409e6a0();
   input += synapse0x409e6e0();
   input += synapse0x409e720();
   input += synapse0x409e760();
   input += synapse0x409e7a0();
   input += synapse0x409e7e0();
   input += synapse0x409e820();
   input += synapse0x409e860();
   input += synapse0x409e8a0();
   input += synapse0x409e8e0();
   input += synapse0x409e260();
   input += synapse0x409e2a0();
   input += synapse0x409ea30();
   input += synapse0x409ea70();
   input += synapse0x409eab0();
   input += synapse0x409eaf0();
   input += synapse0x409eb30();
   input += synapse0x409eb70();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x409e0d0() {
   double input = input0x409e0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x409ebb0() {
   double input = 0.673619;
   input += synapse0x409eef0();
   input += synapse0x409ef30();
   input += synapse0x409ef70();
   input += synapse0x409efb0();
   input += synapse0x409eff0();
   input += synapse0x409f030();
   input += synapse0x409f070();
   input += synapse0x409f0b0();
   input += synapse0x409f0f0();
   input += synapse0x409f130();
   input += synapse0x409f170();
   input += synapse0x409f1b0();
   input += synapse0x409f1f0();
   input += synapse0x409f230();
   input += synapse0x409f270();
   input += synapse0x409f2b0();
   input += synapse0x409ed40();
   input += synapse0x409ed80();
   input += synapse0x409f400();
   input += synapse0x409f440();
   input += synapse0x409f480();
   input += synapse0x409f4c0();
   input += synapse0x409f500();
   input += synapse0x409f540();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x409ebb0() {
   double input = input0x409ebb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x409f580() {
   double input = 0.877637;
   input += synapse0x409f8c0();
   input += synapse0x409f900();
   input += synapse0x409f940();
   input += synapse0x409f980();
   input += synapse0x409f9c0();
   input += synapse0x409fa00();
   input += synapse0x409fa40();
   input += synapse0x409fa80();
   input += synapse0x409fac0();
   input += synapse0x409fb00();
   input += synapse0x409fb40();
   input += synapse0x409fb80();
   input += synapse0x409fbc0();
   input += synapse0x409fc00();
   input += synapse0x409fc40();
   input += synapse0x409fc80();
   input += synapse0x409f710();
   input += synapse0x409f750();
   input += synapse0x409c4e0();
   input += synapse0x409c520();
   input += synapse0x409c560();
   input += synapse0x409c5a0();
   input += synapse0x409c5e0();
   input += synapse0x409c620();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x409f580() {
   double input = input0x409f580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x409c660() {
   double input = -1.34877;
   input += synapse0x409c9a0();
   input += synapse0x409c9e0();
   input += synapse0x409ca20();
   input += synapse0x409ca60();
   input += synapse0x409caa0();
   input += synapse0x409cae0();
   input += synapse0x409cb20();
   input += synapse0x409cb60();
   input += synapse0x409cba0();
   input += synapse0x409cbe0();
   input += synapse0x409cc20();
   input += synapse0x409cc60();
   input += synapse0x409cca0();
   input += synapse0x40a0de0();
   input += synapse0x40a0e20();
   input += synapse0x40a0e60();
   input += synapse0x409c7f0();
   input += synapse0x409c830();
   input += synapse0x40a0fb0();
   input += synapse0x40a0ff0();
   input += synapse0x40a1030();
   input += synapse0x40a1070();
   input += synapse0x40a10b0();
   input += synapse0x40a10f0();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x409c660() {
   double input = input0x409c660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40a1130() {
   double input = -1.60804;
   input += synapse0x40a1470();
   input += synapse0x40a14b0();
   input += synapse0x40a14f0();
   input += synapse0x40a1530();
   input += synapse0x40a1570();
   input += synapse0x40a15b0();
   input += synapse0x40a15f0();
   input += synapse0x40a1630();
   input += synapse0x40a1670();
   input += synapse0x40a16b0();
   input += synapse0x40a16f0();
   input += synapse0x40a1730();
   input += synapse0x40a1770();
   input += synapse0x40a17b0();
   input += synapse0x40a17f0();
   input += synapse0x40a1830();
   input += synapse0x40a12c0();
   input += synapse0x40a1300();
   input += synapse0x40a1980();
   input += synapse0x40a19c0();
   input += synapse0x40a1a00();
   input += synapse0x40a1a40();
   input += synapse0x40a1a80();
   input += synapse0x40a1ac0();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40a1130() {
   double input = input0x40a1130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40a1b00() {
   double input = -4.8999;
   input += synapse0x40a1e40();
   input += synapse0x40a1e80();
   input += synapse0x40a1ec0();
   input += synapse0x40a1f00();
   input += synapse0x40a1f40();
   input += synapse0x40a1f80();
   input += synapse0x40a1fc0();
   input += synapse0x40a2000();
   input += synapse0x40a2040();
   input += synapse0x40a2080();
   input += synapse0x40a20c0();
   input += synapse0x40a2100();
   input += synapse0x40a2140();
   input += synapse0x40a2180();
   input += synapse0x40a21c0();
   input += synapse0x40a2200();
   input += synapse0x40a1c90();
   input += synapse0x40a1cd0();
   input += synapse0x40a2350();
   input += synapse0x40a2390();
   input += synapse0x40a23d0();
   input += synapse0x40a2410();
   input += synapse0x40a2450();
   input += synapse0x40a2490();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40a1b00() {
   double input = input0x40a1b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40a24d0() {
   double input = 5.70315;
   input += synapse0x40a2810();
   input += synapse0x40a2850();
   input += synapse0x40a2890();
   input += synapse0x40a28d0();
   input += synapse0x40a2910();
   input += synapse0x40a2950();
   input += synapse0x40a2990();
   input += synapse0x40a29d0();
   input += synapse0x40a2a10();
   input += synapse0x40a2a50();
   input += synapse0x40a2a90();
   input += synapse0x40a2ad0();
   input += synapse0x40a2b10();
   input += synapse0x40a2b50();
   input += synapse0x40a2b90();
   input += synapse0x40a2bd0();
   input += synapse0x40a2660();
   input += synapse0x40a26a0();
   input += synapse0x40a2d20();
   input += synapse0x40a2d60();
   input += synapse0x40a2da0();
   input += synapse0x40a2de0();
   input += synapse0x40a2e20();
   input += synapse0x40a2e60();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40a24d0() {
   double input = input0x40a24d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40a2ea0() {
   double input = -4.59038;
   input += synapse0x40a31e0();
   input += synapse0x4093460();
   input += synapse0x40934a0();
   input += synapse0x40937a0();
   input += synapse0x40937e0();
   input += synapse0x4093ae0();
   input += synapse0x4093b20();
   input += synapse0x4093e20();
   input += synapse0x4093e60();
   input += synapse0x4094160();
   input += synapse0x40941a0();
   input += synapse0x40944a0();
   input += synapse0x40944e0();
   input += synapse0x40947e0();
   input += synapse0x4094820();
   input += synapse0x4094b20();
   input += synapse0x4094b60();
   input += synapse0x4094e60();
   input += synapse0x4094ea0();
   input += synapse0x40951a0();
   input += synapse0x40951e0();
   input += synapse0x40954e0();
   input += synapse0x4095520();
   input += synapse0x4095820();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40a2ea0() {
   double input = input0x40a2ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40a4cb0() {
   double input = 0.793315;
   input += synapse0x4095860();
   input += synapse0x4096520();
   input += synapse0x4096560();
   input += synapse0x40a3030();
   input += synapse0x40a3070();
   input += synapse0x4096860();
   input += synapse0x40968a0();
   input += synapse0x4096dc0();
   input += synapse0x4096e00();
   input += synapse0x4097100();
   input += synapse0x4097140();
   input += synapse0x4097440();
   input += synapse0x4097480();
   input += synapse0x4097780();
   input += synapse0x40977c0();
   input += synapse0x4097ac0();
   input += synapse0x4097b00();
   input += synapse0x4097e00();
   input += synapse0x4097e40();
   input += synapse0x4098140();
   input += synapse0x4098180();
   input += synapse0x4095b60();
   input += synapse0x4095ba0();
   input += synapse0x40a4f50();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40a4cb0() {
   double input = input0x40a4cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40a4f90() {
   double input = 1.42412;
   input += synapse0x40a52d0();
   input += synapse0x40a5310();
   input += synapse0x40a5350();
   input += synapse0x40a5390();
   input += synapse0x40a53d0();
   input += synapse0x40a5410();
   input += synapse0x40a5450();
   input += synapse0x40a5490();
   input += synapse0x40a54d0();
   input += synapse0x40a5510();
   input += synapse0x40a5550();
   input += synapse0x40a5590();
   input += synapse0x40a55d0();
   input += synapse0x40a5610();
   input += synapse0x40a5650();
   input += synapse0x40a5690();
   input += synapse0x40a5120();
   input += synapse0x40a5160();
   input += synapse0x40a57e0();
   input += synapse0x40a5820();
   input += synapse0x40a5860();
   input += synapse0x40a58a0();
   input += synapse0x40a58e0();
   input += synapse0x40a5920();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40a4f90() {
   double input = input0x40a4f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40a5960() {
   double input = -1.91403;
   input += synapse0x40a5ca0();
   input += synapse0x40a5ce0();
   input += synapse0x40a5d20();
   input += synapse0x40a5d60();
   input += synapse0x40a5da0();
   input += synapse0x40a5de0();
   input += synapse0x40a5e20();
   input += synapse0x40a5e60();
   input += synapse0x40a5ea0();
   input += synapse0x40a5ee0();
   input += synapse0x40a5f20();
   input += synapse0x40a5f60();
   input += synapse0x40a5fa0();
   input += synapse0x40a5fe0();
   input += synapse0x40a6020();
   input += synapse0x40a6060();
   input += synapse0x40a5af0();
   input += synapse0x40a5b30();
   input += synapse0x40a61b0();
   input += synapse0x40a61f0();
   input += synapse0x40a6230();
   input += synapse0x40a6270();
   input += synapse0x40a62b0();
   input += synapse0x40a62f0();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40a5960() {
   double input = input0x40a5960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40a6330() {
   double input = 0.612997;
   input += synapse0x40a6670();
   input += synapse0x40a66b0();
   input += synapse0x40a66f0();
   input += synapse0x40a6730();
   input += synapse0x40a6770();
   input += synapse0x40a67b0();
   input += synapse0x40a67f0();
   input += synapse0x40a6830();
   input += synapse0x40a6870();
   input += synapse0x40a68b0();
   input += synapse0x40a68f0();
   input += synapse0x40a6930();
   input += synapse0x40a6970();
   input += synapse0x40a69b0();
   input += synapse0x40a69f0();
   input += synapse0x40a6a30();
   input += synapse0x40a64c0();
   input += synapse0x40a6500();
   input += synapse0x40a6b80();
   input += synapse0x40a6bc0();
   input += synapse0x40a6c00();
   input += synapse0x40a6c40();
   input += synapse0x40a6c80();
   input += synapse0x40a6cc0();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40a6330() {
   double input = input0x40a6330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40a6d00() {
   double input = -7.00782;
   input += synapse0x40a7040();
   input += synapse0x40a7080();
   input += synapse0x40a70c0();
   input += synapse0x40a7100();
   input += synapse0x40a7140();
   input += synapse0x40a7180();
   input += synapse0x40a71c0();
   input += synapse0x40a7200();
   input += synapse0x40a7240();
   input += synapse0x40a7280();
   input += synapse0x40a72c0();
   input += synapse0x40a7300();
   input += synapse0x40a7340();
   input += synapse0x40a7380();
   input += synapse0x40a73c0();
   input += synapse0x40a7400();
   input += synapse0x40a6e90();
   input += synapse0x40a6ed0();
   input += synapse0x40a7550();
   input += synapse0x40a7590();
   input += synapse0x40a75d0();
   input += synapse0x40a7610();
   input += synapse0x40a7650();
   input += synapse0x40a7690();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40a6d00() {
   double input = input0x40a6d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40a76d0() {
   double input = 1.96896;
   input += synapse0x40a7a10();
   input += synapse0x40a7a50();
   input += synapse0x40a7a90();
   input += synapse0x40a7ad0();
   input += synapse0x40a7b10();
   input += synapse0x40a7b50();
   input += synapse0x40a7b90();
   input += synapse0x40a7bd0();
   input += synapse0x40a7c10();
   input += synapse0x409fdd0();
   input += synapse0x409fe10();
   input += synapse0x409fe50();
   input += synapse0x409fe90();
   input += synapse0x409fed0();
   input += synapse0x409ff10();
   input += synapse0x409ff50();
   input += synapse0x40a7860();
   input += synapse0x40a78a0();
   input += synapse0x40a00a0();
   input += synapse0x40a00e0();
   input += synapse0x40a0120();
   input += synapse0x40a0160();
   input += synapse0x40a01a0();
   input += synapse0x40a01e0();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40a76d0() {
   double input = input0x40a76d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40a0220() {
   double input = -3.05955;
   input += synapse0x40a0560();
   input += synapse0x40a05a0();
   input += synapse0x40a05e0();
   input += synapse0x40a0620();
   input += synapse0x40a0660();
   input += synapse0x40a06a0();
   input += synapse0x40a06e0();
   input += synapse0x40a0720();
   input += synapse0x40a0760();
   input += synapse0x40a07a0();
   input += synapse0x40a07e0();
   input += synapse0x40a0820();
   input += synapse0x40a0860();
   input += synapse0x40a08a0();
   input += synapse0x40a08e0();
   input += synapse0x40a0920();
   input += synapse0x40a03b0();
   input += synapse0x40a03f0();
   input += synapse0x40a0a70();
   input += synapse0x40a0ab0();
   input += synapse0x40a0af0();
   input += synapse0x40a0b30();
   input += synapse0x40a0b70();
   input += synapse0x40a0bb0();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40a0220() {
   double input = input0x40a0220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40a0bf0() {
   double input = 1.63901;
   input += synapse0x40a0d80();
   input += synapse0x40a9e10();
   input += synapse0x40a9e50();
   input += synapse0x40a9e90();
   input += synapse0x40a9ed0();
   input += synapse0x40a9f10();
   input += synapse0x40a9f50();
   input += synapse0x40a9f90();
   input += synapse0x40a9fd0();
   input += synapse0x40aa010();
   input += synapse0x40aa050();
   input += synapse0x40aa090();
   input += synapse0x40aa0d0();
   input += synapse0x40aa110();
   input += synapse0x40aa150();
   input += synapse0x40aa190();
   input += synapse0x40a9c60();
   input += synapse0x40a9ca0();
   input += synapse0x40aa2e0();
   input += synapse0x40aa320();
   input += synapse0x40aa360();
   input += synapse0x40aa3a0();
   input += synapse0x40aa3e0();
   input += synapse0x40aa420();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40a0bf0() {
   double input = input0x40a0bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40aa460() {
   double input = -1.52989;
   input += synapse0x40aa7a0();
   input += synapse0x40aa7e0();
   input += synapse0x40aa820();
   input += synapse0x40aa860();
   input += synapse0x40aa8a0();
   input += synapse0x40aa8e0();
   input += synapse0x40aa920();
   input += synapse0x40aa960();
   input += synapse0x40aa9a0();
   input += synapse0x40aa9e0();
   input += synapse0x40aaa20();
   input += synapse0x40aaa60();
   input += synapse0x40aaaa0();
   input += synapse0x40aaae0();
   input += synapse0x40aab20();
   input += synapse0x40aab60();
   input += synapse0x40aa5f0();
   input += synapse0x40aa630();
   input += synapse0x40aacb0();
   input += synapse0x40aacf0();
   input += synapse0x40aad30();
   input += synapse0x40aad70();
   input += synapse0x40aadb0();
   input += synapse0x40aadf0();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40aa460() {
   double input = input0x40aa460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40aae30() {
   double input = 0.600343;
   input += synapse0x40ab170();
   input += synapse0x40ab1b0();
   input += synapse0x40ab1f0();
   input += synapse0x40ab230();
   input += synapse0x40ab270();
   input += synapse0x40ab2b0();
   input += synapse0x40ab2f0();
   input += synapse0x40ab330();
   input += synapse0x40ab370();
   input += synapse0x40ab3b0();
   input += synapse0x40ab3f0();
   input += synapse0x40ab430();
   input += synapse0x40ab470();
   input += synapse0x40ab4b0();
   input += synapse0x40ab4f0();
   input += synapse0x40ab530();
   input += synapse0x40aafc0();
   input += synapse0x40ab000();
   input += synapse0x40ab680();
   input += synapse0x40ab6c0();
   input += synapse0x40ab700();
   input += synapse0x40ab740();
   input += synapse0x40ab780();
   input += synapse0x40ab7c0();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40aae30() {
   double input = input0x40aae30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40ab800() {
   double input = -0.992934;
   input += synapse0x40abb40();
   input += synapse0x40abb80();
   input += synapse0x40abbc0();
   input += synapse0x40abc00();
   input += synapse0x40abc40();
   input += synapse0x40abc80();
   input += synapse0x40abcc0();
   input += synapse0x40abd00();
   input += synapse0x40abd40();
   input += synapse0x40abd80();
   input += synapse0x40abdc0();
   input += synapse0x40abe00();
   input += synapse0x40abe40();
   input += synapse0x40abe80();
   input += synapse0x40abec0();
   input += synapse0x40abf00();
   input += synapse0x40ab990();
   input += synapse0x40ab9d0();
   input += synapse0x40ac050();
   input += synapse0x40ac090();
   input += synapse0x40ac0d0();
   input += synapse0x40ac110();
   input += synapse0x40ac150();
   input += synapse0x40ac190();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40ab800() {
   double input = input0x40ab800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40ac1d0() {
   double input = 0.122016;
   input += synapse0x40ac510();
   input += synapse0x40ac550();
   input += synapse0x40ac590();
   input += synapse0x40ac5d0();
   input += synapse0x40ac610();
   input += synapse0x40ac650();
   input += synapse0x40ac690();
   input += synapse0x40ac6d0();
   input += synapse0x40ac710();
   input += synapse0x40ac750();
   input += synapse0x40ac790();
   input += synapse0x40ac7d0();
   input += synapse0x40ac810();
   input += synapse0x40ac850();
   input += synapse0x40ac890();
   input += synapse0x40ac8d0();
   input += synapse0x40ac360();
   input += synapse0x40ac3a0();
   input += synapse0x40aca20();
   input += synapse0x40aca60();
   input += synapse0x40acaa0();
   input += synapse0x40acae0();
   input += synapse0x40acb20();
   input += synapse0x40acb60();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40ac1d0() {
   double input = input0x40ac1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40acba0() {
   double input = -1.94616;
   input += synapse0x40acee0();
   input += synapse0x40acf20();
   input += synapse0x40acf60();
   input += synapse0x40acfa0();
   input += synapse0x40acfe0();
   input += synapse0x40ad020();
   input += synapse0x40ad060();
   input += synapse0x40ad0a0();
   input += synapse0x40ad0e0();
   input += synapse0x40ad120();
   input += synapse0x40ad160();
   input += synapse0x40ad1a0();
   input += synapse0x40ad1e0();
   input += synapse0x40ad220();
   input += synapse0x40ad260();
   input += synapse0x40ad2a0();
   input += synapse0x40acd30();
   input += synapse0x40acd70();
   input += synapse0x40ad3f0();
   input += synapse0x40ad430();
   input += synapse0x40ad470();
   input += synapse0x40ad4b0();
   input += synapse0x40ad4f0();
   input += synapse0x40ad530();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40acba0() {
   double input = input0x40acba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40ad570() {
   double input = 0.567647;
   input += synapse0x40ad8b0();
   input += synapse0x40ad8f0();
   input += synapse0x40ad930();
   input += synapse0x40ad970();
   input += synapse0x40ad9b0();
   input += synapse0x40ad9f0();
   input += synapse0x40ada30();
   input += synapse0x40ada70();
   input += synapse0x40adab0();
   input += synapse0x40adaf0();
   input += synapse0x40adb30();
   input += synapse0x40adb70();
   input += synapse0x40adbb0();
   input += synapse0x40adbf0();
   input += synapse0x40adc30();
   input += synapse0x40adc70();
   input += synapse0x40ad700();
   input += synapse0x40ad740();
   input += synapse0x40addc0();
   input += synapse0x40ade00();
   input += synapse0x40ade40();
   input += synapse0x40ade80();
   input += synapse0x40adec0();
   input += synapse0x40adf00();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40ad570() {
   double input = input0x40ad570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40adf40() {
   double input = 5.6679;
   input += synapse0x40ae280();
   input += synapse0x40ae2c0();
   input += synapse0x40ae300();
   input += synapse0x40ae340();
   input += synapse0x40ae380();
   input += synapse0x40ae3c0();
   input += synapse0x40ae400();
   input += synapse0x40ae440();
   input += synapse0x40ae480();
   input += synapse0x40ae4c0();
   input += synapse0x40ae500();
   input += synapse0x40ae540();
   input += synapse0x40ae580();
   input += synapse0x40ae5c0();
   input += synapse0x40ae600();
   input += synapse0x40ae640();
   input += synapse0x40ae0d0();
   input += synapse0x40ae110();
   input += synapse0x40ae790();
   input += synapse0x40ae7d0();
   input += synapse0x40ae810();
   input += synapse0x40ae850();
   input += synapse0x40ae890();
   input += synapse0x40ae8d0();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40adf40() {
   double input = input0x40adf40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40ae910() {
   double input = 1.20119;
   input += synapse0x40aec50();
   input += synapse0x40a3220();
   input += synapse0x40a3260();
   input += synapse0x40a32a0();
   input += synapse0x40a34f0();
   input += synapse0x40a3530();
   input += synapse0x40a3570();
   input += synapse0x40a37c0();
   input += synapse0x40a3800();
   input += synapse0x40a3a50();
   input += synapse0x40a3a90();
   input += synapse0x40a3ad0();
   input += synapse0x40a3d20();
   input += synapse0x40a3d60();
   input += synapse0x40a3fb0();
   input += synapse0x40a3ff0();
   input += synapse0x40aeaa0();
   input += synapse0x40aeae0();
   input += synapse0x40a4140();
   input += synapse0x40a4650();
   input += synapse0x40a4690();
   input += synapse0x40a46d0();
   input += synapse0x40a4920();
   input += synapse0x40a4960();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40ae910() {
   double input = input0x40ae910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40a49a0() {
   double input = -2.71904;
   input += synapse0x40a4210();
   input += synapse0x40a4250();
   input += synapse0x40a4290();
   input += synapse0x40a42d0();
   input += synapse0x40a4c50();
   input += synapse0x40b0fa0();
   input += synapse0x40b0fe0();
   input += synapse0x40b1020();
   input += synapse0x40b1060();
   input += synapse0x40b10a0();
   input += synapse0x40b10e0();
   input += synapse0x40b1120();
   input += synapse0x40b1160();
   input += synapse0x40b11a0();
   input += synapse0x40b11e0();
   input += synapse0x40b1220();
   input += synapse0x40a4b30();
   input += synapse0x40a4b70();
   input += synapse0x40b1370();
   input += synapse0x40b13b0();
   input += synapse0x40b13f0();
   input += synapse0x40b1430();
   input += synapse0x40b1470();
   input += synapse0x40b14b0();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40a49a0() {
   double input = input0x40a49a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40b14f0() {
   double input = -4.23686;
   input += synapse0x40b1830();
   input += synapse0x40b1870();
   input += synapse0x40b18b0();
   input += synapse0x40b18f0();
   input += synapse0x40b1930();
   input += synapse0x40b1970();
   input += synapse0x40b19b0();
   input += synapse0x40b19f0();
   input += synapse0x40b1a30();
   input += synapse0x40b1a70();
   input += synapse0x40b1ab0();
   input += synapse0x40b1af0();
   input += synapse0x40b1b30();
   input += synapse0x40b1b70();
   input += synapse0x40b1bb0();
   input += synapse0x40b1bf0();
   input += synapse0x40b1680();
   input += synapse0x40b16c0();
   input += synapse0x40b1d40();
   input += synapse0x40b1d80();
   input += synapse0x40b1dc0();
   input += synapse0x40b1e00();
   input += synapse0x40b1e40();
   input += synapse0x40b1e80();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40b14f0() {
   double input = input0x40b14f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40b1ec0() {
   double input = -13.3268;
   input += synapse0x40b2200();
   input += synapse0x40b2240();
   input += synapse0x40b2280();
   input += synapse0x40b22c0();
   input += synapse0x40b2300();
   input += synapse0x40b2340();
   input += synapse0x40b2380();
   input += synapse0x40b23c0();
   input += synapse0x40b2400();
   input += synapse0x40b2440();
   input += synapse0x40b2480();
   input += synapse0x40b24c0();
   input += synapse0x40b2500();
   input += synapse0x40b2540();
   input += synapse0x40b2580();
   input += synapse0x40b25c0();
   input += synapse0x40b2050();
   input += synapse0x40b2090();
   input += synapse0x40b2710();
   input += synapse0x40b2750();
   input += synapse0x40b2790();
   input += synapse0x40b27d0();
   input += synapse0x40b2810();
   input += synapse0x40b2850();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40b1ec0() {
   double input = input0x40b1ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40b2890() {
   double input = 2.51485;
   input += synapse0x40b2bd0();
   input += synapse0x40b2c10();
   input += synapse0x40b2c50();
   input += synapse0x40b2c90();
   input += synapse0x40b2cd0();
   input += synapse0x40b2d10();
   input += synapse0x40b2d50();
   input += synapse0x40b2d90();
   input += synapse0x40b2dd0();
   input += synapse0x40b2e10();
   input += synapse0x40b2e50();
   input += synapse0x40b2e90();
   input += synapse0x40b2ed0();
   input += synapse0x40b2f10();
   input += synapse0x40b2f50();
   input += synapse0x40b2f90();
   input += synapse0x40b2a20();
   input += synapse0x40b2a60();
   input += synapse0x40b30e0();
   input += synapse0x40b3120();
   input += synapse0x40b3160();
   input += synapse0x40b31a0();
   input += synapse0x40b31e0();
   input += synapse0x40b3220();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40b2890() {
   double input = input0x40b2890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40b3260() {
   double input = -0.9213;
   input += synapse0x40b35a0();
   input += synapse0x40b35e0();
   input += synapse0x40b3620();
   input += synapse0x40b3660();
   input += synapse0x40b36a0();
   input += synapse0x40b36e0();
   input += synapse0x40b3720();
   input += synapse0x40b3760();
   input += synapse0x40b37a0();
   input += synapse0x40b37e0();
   input += synapse0x40b3820();
   input += synapse0x40b3860();
   input += synapse0x40b38a0();
   input += synapse0x40b38e0();
   input += synapse0x40b3920();
   input += synapse0x40b3960();
   input += synapse0x40b33f0();
   input += synapse0x40b3430();
   input += synapse0x40b3ab0();
   input += synapse0x40b3af0();
   input += synapse0x40b3b30();
   input += synapse0x40b3b70();
   input += synapse0x40b3bb0();
   input += synapse0x40b3bf0();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40b3260() {
   double input = input0x40b3260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40b3c30() {
   double input = 1.86351;
   input += synapse0x40b3f70();
   input += synapse0x40b3fb0();
   input += synapse0x40b3ff0();
   input += synapse0x40b4030();
   input += synapse0x40b4070();
   input += synapse0x40b40b0();
   input += synapse0x40b40f0();
   input += synapse0x40b4130();
   input += synapse0x40b4170();
   input += synapse0x40b41b0();
   input += synapse0x40b41f0();
   input += synapse0x40b4230();
   input += synapse0x40b4270();
   input += synapse0x40b42b0();
   input += synapse0x40b42f0();
   input += synapse0x40b4330();
   input += synapse0x40b3dc0();
   input += synapse0x40b3e00();
   input += synapse0x40b4480();
   input += synapse0x40b44c0();
   input += synapse0x40b4500();
   input += synapse0x40b4540();
   input += synapse0x40b4580();
   input += synapse0x40b45c0();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40b3c30() {
   double input = input0x40b3c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40b4600() {
   double input = -1.85478;
   input += synapse0x40b4940();
   input += synapse0x40b4980();
   input += synapse0x40b49c0();
   input += synapse0x40b4a00();
   input += synapse0x40b4a40();
   input += synapse0x40b4a80();
   input += synapse0x40b4ac0();
   input += synapse0x40b4b00();
   input += synapse0x40b4b40();
   input += synapse0x40b4b80();
   input += synapse0x40b4bc0();
   input += synapse0x40b4c00();
   input += synapse0x40b4c40();
   input += synapse0x40b4c80();
   input += synapse0x40b4cc0();
   input += synapse0x40b4d00();
   input += synapse0x40b4790();
   input += synapse0x40b47d0();
   input += synapse0x40b4e50();
   input += synapse0x40b4e90();
   input += synapse0x40b4ed0();
   input += synapse0x40b4f10();
   input += synapse0x40b4f50();
   input += synapse0x40b4f90();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40b4600() {
   double input = input0x40b4600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40b4fd0() {
   double input = -1.51983;
   input += synapse0x40b5310();
   input += synapse0x40b5350();
   input += synapse0x40b5390();
   input += synapse0x40b53d0();
   input += synapse0x40b5410();
   input += synapse0x40b5450();
   input += synapse0x40b5490();
   input += synapse0x40b54d0();
   input += synapse0x40b5510();
   input += synapse0x40b5550();
   input += synapse0x40b5590();
   input += synapse0x40b55d0();
   input += synapse0x40b5610();
   input += synapse0x40b5650();
   input += synapse0x40b5690();
   input += synapse0x40b56d0();
   input += synapse0x40b5160();
   input += synapse0x40b51a0();
   input += synapse0x40b5820();
   input += synapse0x40b5860();
   input += synapse0x40b58a0();
   input += synapse0x40b58e0();
   input += synapse0x40b5920();
   input += synapse0x40b5960();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40b4fd0() {
   double input = input0x40b4fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40b59a0() {
   double input = -2.1909;
   input += synapse0x409e410();
   input += synapse0x409e450();
   input += synapse0x409e490();
   input += synapse0x409e4d0();
   input += synapse0x409e510();
   input += synapse0x409e550();
   input += synapse0x409e590();
   input += synapse0x409e5d0();
   input += synapse0x40b60f0();
   input += synapse0x40b6130();
   input += synapse0x40b6170();
   input += synapse0x40b61b0();
   input += synapse0x40b61f0();
   input += synapse0x40b6230();
   input += synapse0x40b6270();
   input += synapse0x40b62b0();
   input += synapse0x40b5b30();
   input += synapse0x40b5b70();
   input += synapse0x40b6400();
   input += synapse0x40b6440();
   input += synapse0x40b6480();
   input += synapse0x40b64c0();
   input += synapse0x40b6500();
   input += synapse0x40b6540();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40b59a0() {
   double input = input0x40b59a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40b6580() {
   double input = 1.77492;
   input += synapse0x40b68c0();
   input += synapse0x40b6900();
   input += synapse0x40b6940();
   input += synapse0x40b6980();
   input += synapse0x40b69c0();
   input += synapse0x40b6a00();
   input += synapse0x40b6a40();
   input += synapse0x40b6a80();
   input += synapse0x40b6ac0();
   input += synapse0x40b6b00();
   input += synapse0x40b6b40();
   input += synapse0x40b6b80();
   input += synapse0x40b6bc0();
   input += synapse0x40b6c00();
   input += synapse0x40b6c40();
   input += synapse0x40b6c80();
   input += synapse0x40b6710();
   input += synapse0x40b6750();
   input += synapse0x40b6dd0();
   input += synapse0x40b6e10();
   input += synapse0x40b6e50();
   input += synapse0x40b6e90();
   input += synapse0x40b6ed0();
   input += synapse0x40b6f10();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40b6580() {
   double input = input0x40b6580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40b6f50() {
   double input = 5.59859;
   input += synapse0x40b7290();
   input += synapse0x40b72d0();
   input += synapse0x40b7310();
   input += synapse0x40b7350();
   input += synapse0x40b7390();
   input += synapse0x40b73d0();
   input += synapse0x40b7410();
   input += synapse0x40b7450();
   input += synapse0x40b7490();
   input += synapse0x40b74d0();
   input += synapse0x40b7510();
   input += synapse0x40b7550();
   input += synapse0x40b7590();
   input += synapse0x40b75d0();
   input += synapse0x40b7610();
   input += synapse0x40b7650();
   input += synapse0x40b70e0();
   input += synapse0x40b7120();
   input += synapse0x40a7c50();
   input += synapse0x40a7c90();
   input += synapse0x40a7cd0();
   input += synapse0x40a7d10();
   input += synapse0x40a7d50();
   input += synapse0x40a7d90();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40b6f50() {
   double input = input0x40b6f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40a7dd0() {
   double input = 0.638398;
   input += synapse0x40a8110();
   input += synapse0x40a8150();
   input += synapse0x40a8190();
   input += synapse0x40a81d0();
   input += synapse0x40a8210();
   input += synapse0x40a8250();
   input += synapse0x40a8290();
   input += synapse0x40a82d0();
   input += synapse0x40a8310();
   input += synapse0x40a8350();
   input += synapse0x40a8390();
   input += synapse0x40a83d0();
   input += synapse0x40a8410();
   input += synapse0x40a8450();
   input += synapse0x40a8490();
   input += synapse0x40a84d0();
   input += synapse0x40a7f60();
   input += synapse0x40a7fa0();
   input += synapse0x40a8620();
   input += synapse0x40a8660();
   input += synapse0x40a86a0();
   input += synapse0x40a86e0();
   input += synapse0x40a8720();
   input += synapse0x40a8760();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40a7dd0() {
   double input = input0x40a7dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40a87a0() {
   double input = -4.19814;
   input += synapse0x40a8ae0();
   input += synapse0x40a8b20();
   input += synapse0x40a8b60();
   input += synapse0x40a8ba0();
   input += synapse0x40a8be0();
   input += synapse0x40a8c20();
   input += synapse0x40a8c60();
   input += synapse0x40a8ca0();
   input += synapse0x40a8ce0();
   input += synapse0x40a8d20();
   input += synapse0x40a8d60();
   input += synapse0x40a8da0();
   input += synapse0x40a8de0();
   input += synapse0x40a8e20();
   input += synapse0x40a8e60();
   input += synapse0x40a8ea0();
   input += synapse0x40a8930();
   input += synapse0x40a8970();
   input += synapse0x40a8ff0();
   input += synapse0x40a9030();
   input += synapse0x40a9070();
   input += synapse0x40a90b0();
   input += synapse0x40a90f0();
   input += synapse0x40a9130();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40a87a0() {
   double input = input0x40a87a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40a9170() {
   double input = 9.14603;
   input += synapse0x40a94b0();
   input += synapse0x40a94f0();
   input += synapse0x40a9530();
   input += synapse0x40a9570();
   input += synapse0x40a95b0();
   input += synapse0x40a95f0();
   input += synapse0x40a9630();
   input += synapse0x40a9670();
   input += synapse0x40a96b0();
   input += synapse0x40a96f0();
   input += synapse0x40a9730();
   input += synapse0x40a9770();
   input += synapse0x40a97b0();
   input += synapse0x40a97f0();
   input += synapse0x40a9830();
   input += synapse0x40a9870();
   input += synapse0x40a9300();
   input += synapse0x40a9340();
   input += synapse0x40a99c0();
   input += synapse0x40a9a00();
   input += synapse0x40a9a40();
   input += synapse0x40a9a80();
   input += synapse0x40a9ac0();
   input += synapse0x40a9b00();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40a9170() {
   double input = input0x40a9170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40bb7b0() {
   double input = -2.65853;
   input += synapse0x40bb9d0();
   input += synapse0x40bba10();
   input += synapse0x40bba50();
   input += synapse0x40bba90();
   input += synapse0x40bbad0();
   input += synapse0x40bbb10();
   input += synapse0x40bbb50();
   input += synapse0x40bbb90();
   input += synapse0x40bbbd0();
   input += synapse0x40bbc10();
   input += synapse0x40bbc50();
   input += synapse0x40bbc90();
   input += synapse0x40bbcd0();
   input += synapse0x40bbd10();
   input += synapse0x40bbd50();
   input += synapse0x40bbd90();
   input += synapse0x40a9b40();
   input += synapse0x40a9b80();
   input += synapse0x40bbee0();
   input += synapse0x40bbf20();
   input += synapse0x40bbf60();
   input += synapse0x40bbfa0();
   input += synapse0x40bbfe0();
   input += synapse0x40bc020();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40bb7b0() {
   double input = input0x40bb7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40bc060() {
   double input = 0.255022;
   input += synapse0x40bc3a0();
   input += synapse0x40bc3e0();
   input += synapse0x40bc420();
   input += synapse0x40bc460();
   input += synapse0x40bc4a0();
   input += synapse0x40bc4e0();
   input += synapse0x40bc520();
   input += synapse0x40bc560();
   input += synapse0x40bc5a0();
   input += synapse0x40bc5e0();
   input += synapse0x40bc620();
   input += synapse0x40bc660();
   input += synapse0x40bc6a0();
   input += synapse0x40bc6e0();
   input += synapse0x40bc720();
   input += synapse0x40bc760();
   input += synapse0x40bc1f0();
   input += synapse0x40bc230();
   input += synapse0x40bc8b0();
   input += synapse0x40bc8f0();
   input += synapse0x40bc930();
   input += synapse0x40bc970();
   input += synapse0x40bc9b0();
   input += synapse0x40bc9f0();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40bc060() {
   double input = input0x40bc060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40bca30() {
   double input = 0.288847;
   input += synapse0x40bcd70();
   input += synapse0x40bcdb0();
   input += synapse0x40bcdf0();
   input += synapse0x40bce30();
   input += synapse0x40bce70();
   input += synapse0x40bceb0();
   input += synapse0x40bcef0();
   input += synapse0x40bcf30();
   input += synapse0x40bcf70();
   input += synapse0x40bcfb0();
   input += synapse0x40bcff0();
   input += synapse0x40bd030();
   input += synapse0x40bd070();
   input += synapse0x40bd0b0();
   input += synapse0x40bd0f0();
   input += synapse0x40bd130();
   input += synapse0x40bcbc0();
   input += synapse0x40bcc00();
   input += synapse0x40bd280();
   input += synapse0x40bd2c0();
   input += synapse0x40bd300();
   input += synapse0x40bd340();
   input += synapse0x40bd380();
   input += synapse0x40bd3c0();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40bca30() {
   double input = input0x40bca30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40bd400() {
   double input = 1.0839;
   input += synapse0x40bd740();
   input += synapse0x40bd780();
   input += synapse0x40bd7c0();
   input += synapse0x40bd800();
   input += synapse0x40bd840();
   input += synapse0x40bd880();
   input += synapse0x40bd8c0();
   input += synapse0x40bd900();
   input += synapse0x40bd940();
   input += synapse0x40bd980();
   input += synapse0x40bd9c0();
   input += synapse0x40bda00();
   input += synapse0x40bda40();
   input += synapse0x40bda80();
   input += synapse0x40bdac0();
   input += synapse0x40bdb00();
   input += synapse0x40bd590();
   input += synapse0x40bd5d0();
   input += synapse0x40bdc50();
   input += synapse0x40bdc90();
   input += synapse0x40bdcd0();
   input += synapse0x40bdd10();
   input += synapse0x40bdd50();
   input += synapse0x40bdd90();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40bd400() {
   double input = input0x40bd400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40c4600() {
   double input = -4.16809;
   input += synapse0x3e5db70();
   input += synapse0x3e5dbb0();
   input += synapse0x409a740();
   input += synapse0x409a780();
   input += synapse0x409c210();
   input += synapse0x409c250();
   input += synapse0x409cfe0();
   input += synapse0x409d020();
   input += synapse0x409d9b0();
   input += synapse0x409d9f0();
   input += synapse0x409e380();
   input += synapse0x409e3c0();
   input += synapse0x409ee60();
   input += synapse0x409eea0();
   input += synapse0x409f830();
   input += synapse0x409f870();
   input += synapse0x409c910();
   input += synapse0x409c950();
   input += synapse0x40a13e0();
   input += synapse0x40a1420();
   input += synapse0x40a1db0();
   input += synapse0x40a1df0();
   input += synapse0x40a2780();
   input += synapse0x40a27c0();
   input += synapse0x40a3150();
   input += synapse0x40a3190();
   input += synapse0x40961e0();
   input += synapse0x4096220();
   input += synapse0x40a5240();
   input += synapse0x40a5280();
   input += synapse0x40a5c10();
   input += synapse0x40a5c50();
   input += synapse0x40a65e0();
   input += synapse0x40a6620();
   input += synapse0x40a6fb0();
   input += synapse0x40a6ff0();
   input += synapse0x40a7980();
   input += synapse0x40a79c0();
   input += synapse0x40a04d0();
   input += synapse0x40a0510();
   input += synapse0x40a9d80();
   input += synapse0x40a9dc0();
   input += synapse0x40aa710();
   input += synapse0x40aa750();
   input += synapse0x40ab0e0();
   input += synapse0x40ab120();
   input += synapse0x40abab0();
   input += synapse0x40abaf0();
   input += synapse0x40ac480();
   input += synapse0x40ac4c0();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40c4600() {
   double input = input0x40c4600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40c49a0() {
   double input = -3.41155;
   input += synapse0x40aebc0();
   input += synapse0x40aec00();
   input += synapse0x40a4180();
   input += synapse0x40a41c0();
   input += synapse0x40b17a0();
   input += synapse0x40b17e0();
   input += synapse0x40b2170();
   input += synapse0x40b21b0();
   input += synapse0x40b2b40();
   input += synapse0x40b2b80();
   input += synapse0x40b3510();
   input += synapse0x40b3550();
   input += synapse0x40b3ee0();
   input += synapse0x40b3f20();
   input += synapse0x40b48b0();
   input += synapse0x40b48f0();
   input += synapse0x40b5280();
   input += synapse0x40b52c0();
   input += synapse0x40b5c50();
   input += synapse0x40b5c90();
   input += synapse0x40b6830();
   input += synapse0x40b6870();
   input += synapse0x40b7200();
   input += synapse0x40b7240();
   input += synapse0x40a8080();
   input += synapse0x40a80c0();
   input += synapse0x40a8a50();
   input += synapse0x40a8a90();
   input += synapse0x40a9420();
   input += synapse0x40a9460();
   input += synapse0x40bb940();
   input += synapse0x40bb980();
   input += synapse0x40bc310();
   input += synapse0x40bc350();
   input += synapse0x40bcce0();
   input += synapse0x40bcd20();
   input += synapse0x40bd6b0();
   input += synapse0x40bd6f0();
   input += synapse0x4098640();
   input += synapse0x4098680();
   input += synapse0x40ace50();
   input += synapse0x40ace90();
   input += synapse0x40bddd0();
   input += synapse0x40bde10();
   input += synapse0x40bde50();
   input += synapse0x40bde90();
   input += synapse0x40c4d40();
   input += synapse0x40c4d80();
   input += synapse0x40c4dc0();
   input += synapse0x40c4e00();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40c49a0() {
   double input = input0x40c49a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40c4e40() {
   double input = -5.62273;
   input += synapse0x40c5180();
   input += synapse0x40c51c0();
   input += synapse0x40c5200();
   input += synapse0x40c5240();
   input += synapse0x40c5280();
   input += synapse0x40c52c0();
   input += synapse0x40c5300();
   input += synapse0x40c5340();
   input += synapse0x40c5380();
   input += synapse0x40c53c0();
   input += synapse0x40c5400();
   input += synapse0x40c5440();
   input += synapse0x40c5480();
   input += synapse0x40c54c0();
   input += synapse0x40c5500();
   input += synapse0x40c5540();
   input += synapse0x40c4fd0();
   input += synapse0x40c5010();
   input += synapse0x40c5690();
   input += synapse0x40c56d0();
   input += synapse0x40c5710();
   input += synapse0x40c5750();
   input += synapse0x40c5790();
   input += synapse0x40c57d0();
   input += synapse0x40c5810();
   input += synapse0x40c5850();
   input += synapse0x40c5890();
   input += synapse0x40c58d0();
   input += synapse0x40c5910();
   input += synapse0x40c5950();
   input += synapse0x40c5990();
   input += synapse0x40c59d0();
   input += synapse0x40c5580();
   input += synapse0x40c55c0();
   input += synapse0x40c5600();
   input += synapse0x40c5640();
   input += synapse0x40c5c20();
   input += synapse0x40c5c60();
   input += synapse0x40c5ca0();
   input += synapse0x40c5ce0();
   input += synapse0x40c5d20();
   input += synapse0x40c5d60();
   input += synapse0x40c5da0();
   input += synapse0x40c5de0();
   input += synapse0x40c5e20();
   input += synapse0x40c5e60();
   input += synapse0x40c5ea0();
   input += synapse0x40c5ee0();
   input += synapse0x40c5f20();
   input += synapse0x40c5f60();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40c4e40() {
   double input = input0x40c4e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40c5fa0() {
   double input = -2.53756;
   input += synapse0x40c62e0();
   input += synapse0x40c6320();
   input += synapse0x40c6360();
   input += synapse0x40c63a0();
   input += synapse0x40c63e0();
   input += synapse0x40c6420();
   input += synapse0x40c6460();
   input += synapse0x40c64a0();
   input += synapse0x40c64e0();
   input += synapse0x40c6520();
   input += synapse0x40c6560();
   input += synapse0x40c65a0();
   input += synapse0x40c65e0();
   input += synapse0x40c6620();
   input += synapse0x40c6660();
   input += synapse0x40c66a0();
   input += synapse0x40c6130();
   input += synapse0x40c6170();
   input += synapse0x40c67f0();
   input += synapse0x40c6830();
   input += synapse0x40c6870();
   input += synapse0x40c68b0();
   input += synapse0x40c68f0();
   input += synapse0x40c6930();
   input += synapse0x40c6970();
   input += synapse0x40c69b0();
   input += synapse0x40c69f0();
   input += synapse0x40c6a30();
   input += synapse0x40c6a70();
   input += synapse0x40c6ab0();
   input += synapse0x40c6af0();
   input += synapse0x40c6b30();
   input += synapse0x40c66e0();
   input += synapse0x40c6720();
   input += synapse0x40c6760();
   input += synapse0x40c67a0();
   input += synapse0x40c6d80();
   input += synapse0x40c6dc0();
   input += synapse0x40c6e00();
   input += synapse0x40c6e40();
   input += synapse0x40c6e80();
   input += synapse0x40c6ec0();
   input += synapse0x40c6f00();
   input += synapse0x40c6f40();
   input += synapse0x40c6f80();
   input += synapse0x40c6fc0();
   input += synapse0x40c7000();
   input += synapse0x40c7040();
   input += synapse0x40c7080();
   input += synapse0x40c70c0();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40c5fa0() {
   double input = input0x40c5fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40c7100() {
   double input = 0.718199;
   input += synapse0x40c7440();
   input += synapse0x40c7480();
   input += synapse0x40c74c0();
   input += synapse0x40c7500();
   input += synapse0x40c7540();
   input += synapse0x40c7580();
   input += synapse0x40c75c0();
   input += synapse0x40c7600();
   input += synapse0x40c7640();
   input += synapse0x40c7680();
   input += synapse0x40c76c0();
   input += synapse0x40c7700();
   input += synapse0x40c7740();
   input += synapse0x40c7780();
   input += synapse0x40c77c0();
   input += synapse0x40c7800();
   input += synapse0x40c7290();
   input += synapse0x40c72d0();
   input += synapse0x40c7950();
   input += synapse0x40c7990();
   input += synapse0x40c79d0();
   input += synapse0x40c7a10();
   input += synapse0x40c7a50();
   input += synapse0x40c7a90();
   input += synapse0x40c7ad0();
   input += synapse0x40c7b10();
   input += synapse0x40c7b50();
   input += synapse0x40c7b90();
   input += synapse0x40c7bd0();
   input += synapse0x40c7c10();
   input += synapse0x40c7c50();
   input += synapse0x40c7c90();
   input += synapse0x40c7840();
   input += synapse0x40c7880();
   input += synapse0x40c78c0();
   input += synapse0x40c7900();
   input += synapse0x40c7ee0();
   input += synapse0x40c7f20();
   input += synapse0x40c7f60();
   input += synapse0x40c7fa0();
   input += synapse0x40c7fe0();
   input += synapse0x40c8020();
   input += synapse0x40c8060();
   input += synapse0x40c80a0();
   input += synapse0x40c80e0();
   input += synapse0x40c8120();
   input += synapse0x40c8160();
   input += synapse0x40c81a0();
   input += synapse0x40c81e0();
   input += synapse0x40c8220();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40c7100() {
   double input = input0x40c7100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi3::input0x40c8260() {
   double input = 7.69249;
   input += synapse0x40c8480();
   input += synapse0x40c84c0();
   input += synapse0x40c8500();
   input += synapse0x40c8540();
   input += synapse0x40c8580();
   return input;
}

double NNfunction_nn_chi2_chi3::neuron0x40c8260() {
   double input = input0x40c8260();
   return (input * 1)+0;
}

double NNfunction_nn_chi2_chi3::synapse0x40986d0() {
   return (neuron0x40932d0()*0.0245028);
}

double NNfunction_nn_chi2_chi3::synapse0x4098710() {
   return (neuron0x4093580()*16.0608);
}

double NNfunction_nn_chi2_chi3::synapse0x4098750() {
   return (neuron0x40938c0()*0.643727);
}

double NNfunction_nn_chi2_chi3::synapse0x4098790() {
   return (neuron0x4093c00()*-0.0153039);
}

double NNfunction_nn_chi2_chi3::synapse0x40987d0() {
   return (neuron0x4093f40()*0.0144848);
}

double NNfunction_nn_chi2_chi3::synapse0x4098810() {
   return (neuron0x4094280()*-0.00350644);
}

double NNfunction_nn_chi2_chi3::synapse0x4098850() {
   return (neuron0x40945c0()*-0.0159296);
}

double NNfunction_nn_chi2_chi3::synapse0x4098890() {
   return (neuron0x4094900()*0.0282738);
}

double NNfunction_nn_chi2_chi3::synapse0x40988d0() {
   return (neuron0x4094c40()*0.0109153);
}

double NNfunction_nn_chi2_chi3::synapse0x4098910() {
   return (neuron0x4094f80()*-0.0161027);
}

double NNfunction_nn_chi2_chi3::synapse0x4098950() {
   return (neuron0x40952c0()*-0.018243);
}

double NNfunction_nn_chi2_chi3::synapse0x4098990() {
   return (neuron0x4095600()*-0.0387073);
}

double NNfunction_nn_chi2_chi3::synapse0x40989d0() {
   return (neuron0x4095940()*0.00258814);
}

double NNfunction_nn_chi2_chi3::synapse0x4098a10() {
   return (neuron0x4095c80()*0.0181868);
}

double NNfunction_nn_chi2_chi3::synapse0x4098a50() {
   return (neuron0x4095fc0()*-0.00664257);
}

double NNfunction_nn_chi2_chi3::synapse0x4098a90() {
   return (neuron0x4096300()*0.00755467);
}

double NNfunction_nn_chi2_chi3::synapse0x4098520() {
   return (neuron0x4096640()*0.00631275);
}

double NNfunction_nn_chi2_chi3::synapse0x4098560() {
   return (neuron0x4096ba0()*0.005266);
}

double NNfunction_nn_chi2_chi3::synapse0x3e4f590() {
   return (neuron0x4096ee0()*0.0218763);
}

double NNfunction_nn_chi2_chi3::synapse0x3e4f5d0() {
   return (neuron0x4097220()*-0.00508843);
}

double NNfunction_nn_chi2_chi3::synapse0x4098ad0() {
   return (neuron0x4097560()*-0.0317041);
}

double NNfunction_nn_chi2_chi3::synapse0x4098b10() {
   return (neuron0x40978a0()*0.00192908);
}

double NNfunction_nn_chi2_chi3::synapse0x4098b50() {
   return (neuron0x4097be0()*-0.0109906);
}

double NNfunction_nn_chi2_chi3::synapse0x4098b90() {
   return (neuron0x4097f20()*5.90384);
}

double NNfunction_nn_chi2_chi3::synapse0x4098f10() {
   return (neuron0x40932d0()*-0.0581633);
}

double NNfunction_nn_chi2_chi3::synapse0x4098f50() {
   return (neuron0x4093580()*0.00967212);
}

double NNfunction_nn_chi2_chi3::synapse0x4098f90() {
   return (neuron0x40938c0()*-6.98806);
}

double NNfunction_nn_chi2_chi3::synapse0x4098fd0() {
   return (neuron0x4093c00()*-0.00778658);
}

double NNfunction_nn_chi2_chi3::synapse0x4099010() {
   return (neuron0x4093f40()*-0.0332186);
}

double NNfunction_nn_chi2_chi3::synapse0x4099050() {
   return (neuron0x4094280()*0.0466778);
}

double NNfunction_nn_chi2_chi3::synapse0x4099090() {
   return (neuron0x40945c0()*0.00123045);
}

double NNfunction_nn_chi2_chi3::synapse0x40990d0() {
   return (neuron0x4094900()*0.0188652);
}

double NNfunction_nn_chi2_chi3::synapse0x4099110() {
   return (neuron0x4094c40()*-0.0181917);
}

double NNfunction_nn_chi2_chi3::synapse0x3e4f3e0() {
   return (neuron0x4094f80()*0.0391606);
}

double NNfunction_nn_chi2_chi3::synapse0x3e4f420() {
   return (neuron0x40952c0()*0.0260119);
}

double NNfunction_nn_chi2_chi3::synapse0x3e4f460() {
   return (neuron0x4095600()*-0.00493353);
}

double NNfunction_nn_chi2_chi3::synapse0x3e4f4a0() {
   return (neuron0x4095940()*0.0100755);
}

double NNfunction_nn_chi2_chi3::synapse0x4099360() {
   return (neuron0x4095c80()*-0.0907838);
}

double NNfunction_nn_chi2_chi3::synapse0x40993a0() {
   return (neuron0x4095fc0()*0.114632);
}

double NNfunction_nn_chi2_chi3::synapse0x40993e0() {
   return (neuron0x4096300()*0.0142943);
}

double NNfunction_nn_chi2_chi3::synapse0x4098d60() {
   return (neuron0x4096640()*0.0313614);
}

double NNfunction_nn_chi2_chi3::synapse0x4098da0() {
   return (neuron0x4096ba0()*0.00314604);
}

double NNfunction_nn_chi2_chi3::synapse0x4099530() {
   return (neuron0x4096ee0()*0.027372);
}

double NNfunction_nn_chi2_chi3::synapse0x4099570() {
   return (neuron0x4097220()*0.0298803);
}

double NNfunction_nn_chi2_chi3::synapse0x40995b0() {
   return (neuron0x4097560()*0.00999654);
}

double NNfunction_nn_chi2_chi3::synapse0x40995f0() {
   return (neuron0x40978a0()*-0.00708596);
}

double NNfunction_nn_chi2_chi3::synapse0x4099630() {
   return (neuron0x4097be0()*0.0175242);
}

double NNfunction_nn_chi2_chi3::synapse0x4099670() {
   return (neuron0x4097f20()*3.65561);
}

double NNfunction_nn_chi2_chi3::synapse0x40999f0() {
   return (neuron0x40932d0()*0.735798);
}

double NNfunction_nn_chi2_chi3::synapse0x4099a30() {
   return (neuron0x4093580()*-0.859608);
}

double NNfunction_nn_chi2_chi3::synapse0x4099a70() {
   return (neuron0x40938c0()*0.431431);
}

double NNfunction_nn_chi2_chi3::synapse0x4099ab0() {
   return (neuron0x4093c00()*0.323028);
}

double NNfunction_nn_chi2_chi3::synapse0x4099af0() {
   return (neuron0x4093f40()*-0.00507414);
}

double NNfunction_nn_chi2_chi3::synapse0x4099b30() {
   return (neuron0x4094280()*-0.887368);
}

double NNfunction_nn_chi2_chi3::synapse0x4099b70() {
   return (neuron0x40945c0()*-0.229072);
}

double NNfunction_nn_chi2_chi3::synapse0x4099bb0() {
   return (neuron0x4094900()*0.369325);
}

double NNfunction_nn_chi2_chi3::synapse0x4099bf0() {
   return (neuron0x4094c40()*-0.55909);
}

double NNfunction_nn_chi2_chi3::synapse0x4099c30() {
   return (neuron0x4094f80()*0.426924);
}

double NNfunction_nn_chi2_chi3::synapse0x4099c70() {
   return (neuron0x40952c0()*-0.351652);
}

double NNfunction_nn_chi2_chi3::synapse0x4099cb0() {
   return (neuron0x4095600()*0.833269);
}

double NNfunction_nn_chi2_chi3::synapse0x4099cf0() {
   return (neuron0x4095940()*0.0427035);
}

double NNfunction_nn_chi2_chi3::synapse0x4099d30() {
   return (neuron0x4095c80()*0.608965);
}

double NNfunction_nn_chi2_chi3::synapse0x4099d70() {
   return (neuron0x4095fc0()*1.23765);
}

double NNfunction_nn_chi2_chi3::synapse0x4099db0() {
   return (neuron0x4096300()*0.379166);
}

double NNfunction_nn_chi2_chi3::synapse0x4099840() {
   return (neuron0x4096640()*0.491447);
}

double NNfunction_nn_chi2_chi3::synapse0x4099880() {
   return (neuron0x4096ba0()*-2.7605);
}

double NNfunction_nn_chi2_chi3::synapse0x2c3af10() {
   return (neuron0x4096ee0()*-0.404767);
}

double NNfunction_nn_chi2_chi3::synapse0x3e5d380() {
   return (neuron0x4097220()*-0.242409);
}

double NNfunction_nn_chi2_chi3::synapse0x3e5d3c0() {
   return (neuron0x4097560()*-0.887482);
}

double NNfunction_nn_chi2_chi3::synapse0x409bce0() {
   return (neuron0x40978a0()*-0.567611);
}

double NNfunction_nn_chi2_chi3::synapse0x409bd20() {
   return (neuron0x4097be0()*1.23354);
}

double NNfunction_nn_chi2_chi3::synapse0x4093010() {
   return (neuron0x4097f20()*0.480537);
}

double NNfunction_nn_chi2_chi3::synapse0x40930e0() {
   return (neuron0x40932d0()*0.437852);
}

double NNfunction_nn_chi2_chi3::synapse0x3e5dc00() {
   return (neuron0x4093580()*2.05736);
}

double NNfunction_nn_chi2_chi3::synapse0x40992e0() {
   return (neuron0x40938c0()*0.848824);
}

double NNfunction_nn_chi2_chi3::synapse0x4099320() {
   return (neuron0x4093c00()*-0.261655);
}

double NNfunction_nn_chi2_chi3::synapse0x4099f00() {
   return (neuron0x4093f40()*-0.835791);
}

double NNfunction_nn_chi2_chi3::synapse0x4099f40() {
   return (neuron0x4094280()*0.474014);
}

double NNfunction_nn_chi2_chi3::synapse0x4099f80() {
   return (neuron0x40945c0()*0.337062);
}

double NNfunction_nn_chi2_chi3::synapse0x4099fc0() {
   return (neuron0x4094900()*0.0594961);
}

double NNfunction_nn_chi2_chi3::synapse0x409a000() {
   return (neuron0x4094c40()*-0.934412);
}

double NNfunction_nn_chi2_chi3::synapse0x409a040() {
   return (neuron0x4094f80()*1.15885);
}

double NNfunction_nn_chi2_chi3::synapse0x409a080() {
   return (neuron0x40952c0()*0.00878052);
}

double NNfunction_nn_chi2_chi3::synapse0x409a0c0() {
   return (neuron0x4095600()*1.12972);
}

double NNfunction_nn_chi2_chi3::synapse0x409a100() {
   return (neuron0x4095940()*0.655366);
}

double NNfunction_nn_chi2_chi3::synapse0x409a140() {
   return (neuron0x4095c80()*-1.37567);
}

double NNfunction_nn_chi2_chi3::synapse0x409a180() {
   return (neuron0x4095fc0()*-0.119009);
}

double NNfunction_nn_chi2_chi3::synapse0x409a1c0() {
   return (neuron0x4096300()*-0.425949);
}

double NNfunction_nn_chi2_chi3::synapse0x4093050() {
   return (neuron0x4096640()*-0.0265293);
}

double NNfunction_nn_chi2_chi3::synapse0x4093090() {
   return (neuron0x4096ba0()*-0.133928);
}

double NNfunction_nn_chi2_chi3::synapse0x409a310() {
   return (neuron0x4096ee0()*-0.27682);
}

double NNfunction_nn_chi2_chi3::synapse0x409a350() {
   return (neuron0x4097220()*-0.336394);
}

double NNfunction_nn_chi2_chi3::synapse0x409a390() {
   return (neuron0x4097560()*-0.324356);
}

double NNfunction_nn_chi2_chi3::synapse0x409a3d0() {
   return (neuron0x40978a0()*0.00331871);
}

double NNfunction_nn_chi2_chi3::synapse0x409a410() {
   return (neuron0x4097be0()*-0.0312191);
}

double NNfunction_nn_chi2_chi3::synapse0x409a450() {
   return (neuron0x4097f20()*0.634473);
}

double NNfunction_nn_chi2_chi3::synapse0x409a7d0() {
   return (neuron0x40932d0()*-0.0543367);
}

double NNfunction_nn_chi2_chi3::synapse0x409a810() {
   return (neuron0x4093580()*0.0152252);
}

double NNfunction_nn_chi2_chi3::synapse0x409a850() {
   return (neuron0x40938c0()*0.120227);
}

double NNfunction_nn_chi2_chi3::synapse0x409a890() {
   return (neuron0x4093c00()*0.016692);
}

double NNfunction_nn_chi2_chi3::synapse0x409a8d0() {
   return (neuron0x4093f40()*0.0246216);
}

double NNfunction_nn_chi2_chi3::synapse0x409a910() {
   return (neuron0x4094280()*0.0101429);
}

double NNfunction_nn_chi2_chi3::synapse0x409a950() {
   return (neuron0x40945c0()*0.0113139);
}

double NNfunction_nn_chi2_chi3::synapse0x409a990() {
   return (neuron0x4094900()*0.0211956);
}

double NNfunction_nn_chi2_chi3::synapse0x409a9d0() {
   return (neuron0x4094c40()*-0.0255938);
}

double NNfunction_nn_chi2_chi3::synapse0x409aa10() {
   return (neuron0x4094f80()*-0.0286349);
}

double NNfunction_nn_chi2_chi3::synapse0x409aa50() {
   return (neuron0x40952c0()*0.0014252);
}

double NNfunction_nn_chi2_chi3::synapse0x409aa90() {
   return (neuron0x4095600()*0.0177017);
}

double NNfunction_nn_chi2_chi3::synapse0x409aad0() {
   return (neuron0x4095940()*-0.00505071);
}

double NNfunction_nn_chi2_chi3::synapse0x409ab10() {
   return (neuron0x4095c80()*0.016018);
}

double NNfunction_nn_chi2_chi3::synapse0x409ab50() {
   return (neuron0x4095fc0()*-0.0146633);
}

double NNfunction_nn_chi2_chi3::synapse0x409ab90() {
   return (neuron0x4096300()*0.0475584);
}

double NNfunction_nn_chi2_chi3::synapse0x409ace0() {
   return (neuron0x4096640()*0.00187688);
}

double NNfunction_nn_chi2_chi3::synapse0x409a620() {
   return (neuron0x4096ba0()*-0.00301692);
}

double NNfunction_nn_chi2_chi3::synapse0x409a660() {
   return (neuron0x4096ee0()*-0.0053835);
}

double NNfunction_nn_chi2_chi3::synapse0x409be20() {
   return (neuron0x4097220()*-0.0130376);
}

double NNfunction_nn_chi2_chi3::synapse0x409be60() {
   return (neuron0x4097560()*-0.00483523);
}

double NNfunction_nn_chi2_chi3::synapse0x409bea0() {
   return (neuron0x40978a0()*-0.0228338);
}

double NNfunction_nn_chi2_chi3::synapse0x409bee0() {
   return (neuron0x4097be0()*-0.00753704);
}

double NNfunction_nn_chi2_chi3::synapse0x409bf20() {
   return (neuron0x4097f20()*-11.645);
}

double NNfunction_nn_chi2_chi3::synapse0x409c2a0() {
   return (neuron0x40932d0()*1.30659);
}

double NNfunction_nn_chi2_chi3::synapse0x409c2e0() {
   return (neuron0x4093580()*-1.1307);
}

double NNfunction_nn_chi2_chi3::synapse0x409c320() {
   return (neuron0x40938c0()*0.952165);
}

double NNfunction_nn_chi2_chi3::synapse0x409c360() {
   return (neuron0x4093c00()*-1.68599);
}

double NNfunction_nn_chi2_chi3::synapse0x409c3a0() {
   return (neuron0x4093f40()*-0.466045);
}

double NNfunction_nn_chi2_chi3::synapse0x409c3e0() {
   return (neuron0x4094280()*0.699379);
}

double NNfunction_nn_chi2_chi3::synapse0x409c420() {
   return (neuron0x40945c0()*0.455926);
}

double NNfunction_nn_chi2_chi3::synapse0x409c460() {
   return (neuron0x4094900()*-0.169722);
}

double NNfunction_nn_chi2_chi3::synapse0x409c4a0() {
   return (neuron0x4094c40()*0.304888);
}

double NNfunction_nn_chi2_chi3::synapse0x3e5d6d0() {
   return (neuron0x4094f80()*1.75283);
}

double NNfunction_nn_chi2_chi3::synapse0x3e5d710() {
   return (neuron0x40952c0()*-0.0312724);
}

double NNfunction_nn_chi2_chi3::synapse0x3e5d750() {
   return (neuron0x4095600()*-0.494837);
}

double NNfunction_nn_chi2_chi3::synapse0x3e5d790() {
   return (neuron0x4095940()*-1.09386);
}

double NNfunction_nn_chi2_chi3::synapse0x3e5d7d0() {
   return (neuron0x4095c80()*-1.27727);
}

double NNfunction_nn_chi2_chi3::synapse0x3e5d810() {
   return (neuron0x4095fc0()*-0.633179);
}

double NNfunction_nn_chi2_chi3::synapse0x3e5d850() {
   return (neuron0x4096300()*-1.57665);
}

double NNfunction_nn_chi2_chi3::synapse0x409c0f0() {
   return (neuron0x4096640()*1.00292);
}

double NNfunction_nn_chi2_chi3::synapse0x409c130() {
   return (neuron0x4096ba0()*-0.895686);
}

double NNfunction_nn_chi2_chi3::synapse0x3e5d9a0() {
   return (neuron0x4096ee0()*0.721771);
}

double NNfunction_nn_chi2_chi3::synapse0x3e5d9e0() {
   return (neuron0x4097220()*0.594352);
}

double NNfunction_nn_chi2_chi3::synapse0x3e5da20() {
   return (neuron0x4097560()*0.350285);
}

double NNfunction_nn_chi2_chi3::synapse0x3e5da60() {
   return (neuron0x40978a0()*-0.127275);
}

double NNfunction_nn_chi2_chi3::synapse0x3e5daa0() {
   return (neuron0x4097be0()*-0.0968156);
}

double NNfunction_nn_chi2_chi3::synapse0x409ccf0() {
   return (neuron0x4097f20()*0.106741);
}

double NNfunction_nn_chi2_chi3::synapse0x409d070() {
   return (neuron0x40932d0()*0.049398);
}

double NNfunction_nn_chi2_chi3::synapse0x409d0b0() {
   return (neuron0x4093580()*0.0360375);
}

double NNfunction_nn_chi2_chi3::synapse0x409d0f0() {
   return (neuron0x40938c0()*3.78032);
}

double NNfunction_nn_chi2_chi3::synapse0x409d130() {
   return (neuron0x4093c00()*-0.0337746);
}

double NNfunction_nn_chi2_chi3::synapse0x409d170() {
   return (neuron0x4093f40()*-0.116754);
}

double NNfunction_nn_chi2_chi3::synapse0x409d1b0() {
   return (neuron0x4094280()*0.035388);
}

double NNfunction_nn_chi2_chi3::synapse0x409d1f0() {
   return (neuron0x40945c0()*0.00812961);
}

double NNfunction_nn_chi2_chi3::synapse0x409d230() {
   return (neuron0x4094900()*0.0663632);
}

double NNfunction_nn_chi2_chi3::synapse0x409d270() {
   return (neuron0x4094c40()*-0.065977);
}

double NNfunction_nn_chi2_chi3::synapse0x409d2b0() {
   return (neuron0x4094f80()*0.0317752);
}

double NNfunction_nn_chi2_chi3::synapse0x409d2f0() {
   return (neuron0x40952c0()*0.0574068);
}

double NNfunction_nn_chi2_chi3::synapse0x409d330() {
   return (neuron0x4095600()*-0.257273);
}

double NNfunction_nn_chi2_chi3::synapse0x409d370() {
   return (neuron0x4095940()*0.176953);
}

double NNfunction_nn_chi2_chi3::synapse0x409d3b0() {
   return (neuron0x4095c80()*0.0982544);
}

double NNfunction_nn_chi2_chi3::synapse0x409d3f0() {
   return (neuron0x4095fc0()*0.166211);
}

double NNfunction_nn_chi2_chi3::synapse0x409d430() {
   return (neuron0x4096300()*0.00983962);
}

double NNfunction_nn_chi2_chi3::synapse0x409cec0() {
   return (neuron0x4096640()*0.0575316);
}

double NNfunction_nn_chi2_chi3::synapse0x409cf00() {
   return (neuron0x4096ba0()*0.0232314);
}

double NNfunction_nn_chi2_chi3::synapse0x409d580() {
   return (neuron0x4096ee0()*0.0783454);
}

double NNfunction_nn_chi2_chi3::synapse0x409d5c0() {
   return (neuron0x4097220()*0.0851313);
}

double NNfunction_nn_chi2_chi3::synapse0x409d600() {
   return (neuron0x4097560()*0.0387353);
}

double NNfunction_nn_chi2_chi3::synapse0x409d640() {
   return (neuron0x40978a0()*0.0141651);
}

double NNfunction_nn_chi2_chi3::synapse0x409d680() {
   return (neuron0x4097be0()*-0.0677719);
}

double NNfunction_nn_chi2_chi3::synapse0x409d6c0() {
   return (neuron0x4097f20()*1.12194);
}

double NNfunction_nn_chi2_chi3::synapse0x409da40() {
   return (neuron0x40932d0()*-0.00630104);
}

double NNfunction_nn_chi2_chi3::synapse0x409da80() {
   return (neuron0x4093580()*7.98513);
}

double NNfunction_nn_chi2_chi3::synapse0x409dac0() {
   return (neuron0x40938c0()*-1.19026);
}

double NNfunction_nn_chi2_chi3::synapse0x409db00() {
   return (neuron0x4093c00()*0.00125393);
}

double NNfunction_nn_chi2_chi3::synapse0x409db40() {
   return (neuron0x4093f40()*-0.0188488);
}

double NNfunction_nn_chi2_chi3::synapse0x409db80() {
   return (neuron0x4094280()*0.0286638);
}

double NNfunction_nn_chi2_chi3::synapse0x409dbc0() {
   return (neuron0x40945c0()*-0.0217613);
}

double NNfunction_nn_chi2_chi3::synapse0x409dc00() {
   return (neuron0x4094900()*0.0188391);
}

double NNfunction_nn_chi2_chi3::synapse0x409dc40() {
   return (neuron0x4094c40()*0.0276491);
}

double NNfunction_nn_chi2_chi3::synapse0x409dc80() {
   return (neuron0x4094f80()*0.00551043);
}

double NNfunction_nn_chi2_chi3::synapse0x409dcc0() {
   return (neuron0x40952c0()*-0.0152259);
}

double NNfunction_nn_chi2_chi3::synapse0x409dd00() {
   return (neuron0x4095600()*-0.192257);
}

double NNfunction_nn_chi2_chi3::synapse0x409dd40() {
   return (neuron0x4095940()*0.0206351);
}

double NNfunction_nn_chi2_chi3::synapse0x409dd80() {
   return (neuron0x4095c80()*-0.0288666);
}

double NNfunction_nn_chi2_chi3::synapse0x409ddc0() {
   return (neuron0x4095fc0()*0.0369348);
}

double NNfunction_nn_chi2_chi3::synapse0x409de00() {
   return (neuron0x4096300()*-0.0207528);
}

double NNfunction_nn_chi2_chi3::synapse0x409d890() {
   return (neuron0x4096640()*0.0221774);
}

double NNfunction_nn_chi2_chi3::synapse0x409d8d0() {
   return (neuron0x4096ba0()*-0.0245845);
}

double NNfunction_nn_chi2_chi3::synapse0x409df50() {
   return (neuron0x4096ee0()*-0.0191742);
}

double NNfunction_nn_chi2_chi3::synapse0x409df90() {
   return (neuron0x4097220()*0.0232594);
}

double NNfunction_nn_chi2_chi3::synapse0x409dfd0() {
   return (neuron0x4097560()*-0.0067996);
}

double NNfunction_nn_chi2_chi3::synapse0x409e010() {
   return (neuron0x40978a0()*0.0022288);
}

double NNfunction_nn_chi2_chi3::synapse0x409e050() {
   return (neuron0x4097be0()*0.0020982);
}

double NNfunction_nn_chi2_chi3::synapse0x409e090() {
   return (neuron0x4097f20()*0.645156);
}

double NNfunction_nn_chi2_chi3::synapse0x4096a90() {
   return (neuron0x40932d0()*0.0100405);
}

double NNfunction_nn_chi2_chi3::synapse0x4096ad0() {
   return (neuron0x4093580()*31.678);
}

double NNfunction_nn_chi2_chi3::synapse0x4096b10() {
   return (neuron0x40938c0()*0.0781675);
}

double NNfunction_nn_chi2_chi3::synapse0x4096b50() {
   return (neuron0x4093c00()*0.0115015);
}

double NNfunction_nn_chi2_chi3::synapse0x409e620() {
   return (neuron0x4093f40()*-0.00872537);
}

double NNfunction_nn_chi2_chi3::synapse0x409e660() {
   return (neuron0x4094280()*-0.0318744);
}

double NNfunction_nn_chi2_chi3::synapse0x409e6a0() {
   return (neuron0x40945c0()*0.0268541);
}

double NNfunction_nn_chi2_chi3::synapse0x409e6e0() {
   return (neuron0x4094900()*0.0234514);
}

double NNfunction_nn_chi2_chi3::synapse0x409e720() {
   return (neuron0x4094c40()*-0.00902113);
}

double NNfunction_nn_chi2_chi3::synapse0x409e760() {
   return (neuron0x4094f80()*-0.00912525);
}

double NNfunction_nn_chi2_chi3::synapse0x409e7a0() {
   return (neuron0x40952c0()*-0.00980912);
}

double NNfunction_nn_chi2_chi3::synapse0x409e7e0() {
   return (neuron0x4095600()*0.144726);
}

double NNfunction_nn_chi2_chi3::synapse0x409e820() {
   return (neuron0x4095940()*-0.00207937);
}

double NNfunction_nn_chi2_chi3::synapse0x409e860() {
   return (neuron0x4095c80()*-0.0449348);
}

double NNfunction_nn_chi2_chi3::synapse0x409e8a0() {
   return (neuron0x4095fc0()*0.0288917);
}

double NNfunction_nn_chi2_chi3::synapse0x409e8e0() {
   return (neuron0x4096300()*-0.0343798);
}

double NNfunction_nn_chi2_chi3::synapse0x409e260() {
   return (neuron0x4096640()*0.0553147);
}

double NNfunction_nn_chi2_chi3::synapse0x409e2a0() {
   return (neuron0x4096ba0()*0.0231338);
}

double NNfunction_nn_chi2_chi3::synapse0x409ea30() {
   return (neuron0x4096ee0()*-0.0210849);
}

double NNfunction_nn_chi2_chi3::synapse0x409ea70() {
   return (neuron0x4097220()*0.0378111);
}

double NNfunction_nn_chi2_chi3::synapse0x409eab0() {
   return (neuron0x4097560()*-0.0488514);
}

double NNfunction_nn_chi2_chi3::synapse0x409eaf0() {
   return (neuron0x40978a0()*0.0243508);
}

double NNfunction_nn_chi2_chi3::synapse0x409eb30() {
   return (neuron0x4097be0()*0.00805476);
}

double NNfunction_nn_chi2_chi3::synapse0x409eb70() {
   return (neuron0x4097f20()*-1.78677);
}

double NNfunction_nn_chi2_chi3::synapse0x409eef0() {
   return (neuron0x40932d0()*0.39761);
}

double NNfunction_nn_chi2_chi3::synapse0x409ef30() {
   return (neuron0x4093580()*-0.53661);
}

double NNfunction_nn_chi2_chi3::synapse0x409ef70() {
   return (neuron0x40938c0()*-0.961179);
}

double NNfunction_nn_chi2_chi3::synapse0x409efb0() {
   return (neuron0x4093c00()*-0.324146);
}

double NNfunction_nn_chi2_chi3::synapse0x409eff0() {
   return (neuron0x4093f40()*1.30594);
}

double NNfunction_nn_chi2_chi3::synapse0x409f030() {
   return (neuron0x4094280()*1.38002);
}

double NNfunction_nn_chi2_chi3::synapse0x409f070() {
   return (neuron0x40945c0()*-0.557765);
}

double NNfunction_nn_chi2_chi3::synapse0x409f0b0() {
   return (neuron0x4094900()*0.523382);
}

double NNfunction_nn_chi2_chi3::synapse0x409f0f0() {
   return (neuron0x4094c40()*2.97328);
}

double NNfunction_nn_chi2_chi3::synapse0x409f130() {
   return (neuron0x4094f80()*-0.91956);
}

double NNfunction_nn_chi2_chi3::synapse0x409f170() {
   return (neuron0x40952c0()*-1.59514);
}

double NNfunction_nn_chi2_chi3::synapse0x409f1b0() {
   return (neuron0x4095600()*-0.373853);
}

double NNfunction_nn_chi2_chi3::synapse0x409f1f0() {
   return (neuron0x4095940()*-1.63437);
}

double NNfunction_nn_chi2_chi3::synapse0x409f230() {
   return (neuron0x4095c80()*-0.530476);
}

double NNfunction_nn_chi2_chi3::synapse0x409f270() {
   return (neuron0x4095fc0()*-0.113243);
}

double NNfunction_nn_chi2_chi3::synapse0x409f2b0() {
   return (neuron0x4096300()*-0.5184);
}

double NNfunction_nn_chi2_chi3::synapse0x409ed40() {
   return (neuron0x4096640()*-0.945586);
}

double NNfunction_nn_chi2_chi3::synapse0x409ed80() {
   return (neuron0x4096ba0()*-0.154934);
}

double NNfunction_nn_chi2_chi3::synapse0x409f400() {
   return (neuron0x4096ee0()*-1.37201);
}

double NNfunction_nn_chi2_chi3::synapse0x409f440() {
   return (neuron0x4097220()*-0.610435);
}

double NNfunction_nn_chi2_chi3::synapse0x409f480() {
   return (neuron0x4097560()*-0.517401);
}

double NNfunction_nn_chi2_chi3::synapse0x409f4c0() {
   return (neuron0x40978a0()*-0.166468);
}

double NNfunction_nn_chi2_chi3::synapse0x409f500() {
   return (neuron0x4097be0()*0.639026);
}

double NNfunction_nn_chi2_chi3::synapse0x409f540() {
   return (neuron0x4097f20()*1.71381);
}

double NNfunction_nn_chi2_chi3::synapse0x409f8c0() {
   return (neuron0x40932d0()*0.0259981);
}

double NNfunction_nn_chi2_chi3::synapse0x409f900() {
   return (neuron0x4093580()*4.3105);
}

double NNfunction_nn_chi2_chi3::synapse0x409f940() {
   return (neuron0x40938c0()*4.03199);
}

double NNfunction_nn_chi2_chi3::synapse0x409f980() {
   return (neuron0x4093c00()*-0.0383589);
}

double NNfunction_nn_chi2_chi3::synapse0x409f9c0() {
   return (neuron0x4093f40()*-0.0679946);
}

double NNfunction_nn_chi2_chi3::synapse0x409fa00() {
   return (neuron0x4094280()*0.0664667);
}

double NNfunction_nn_chi2_chi3::synapse0x409fa40() {
   return (neuron0x40945c0()*0.00680938);
}

double NNfunction_nn_chi2_chi3::synapse0x409fa80() {
   return (neuron0x4094900()*0.145614);
}

double NNfunction_nn_chi2_chi3::synapse0x409fac0() {
   return (neuron0x4094c40()*-0.0917065);
}

double NNfunction_nn_chi2_chi3::synapse0x409fb00() {
   return (neuron0x4094f80()*0.149072);
}

double NNfunction_nn_chi2_chi3::synapse0x409fb40() {
   return (neuron0x40952c0()*0.0689358);
}

double NNfunction_nn_chi2_chi3::synapse0x409fb80() {
   return (neuron0x4095600()*-0.0101382);
}

double NNfunction_nn_chi2_chi3::synapse0x409fbc0() {
   return (neuron0x4095940()*0.137371);
}

double NNfunction_nn_chi2_chi3::synapse0x409fc00() {
   return (neuron0x4095c80()*0.0626603);
}

double NNfunction_nn_chi2_chi3::synapse0x409fc40() {
   return (neuron0x4095fc0()*0.270217);
}

double NNfunction_nn_chi2_chi3::synapse0x409fc80() {
   return (neuron0x4096300()*0.0346999);
}

double NNfunction_nn_chi2_chi3::synapse0x409f710() {
   return (neuron0x4096640()*-0.0097222);
}

double NNfunction_nn_chi2_chi3::synapse0x409f750() {
   return (neuron0x4096ba0()*-0.121304);
}

double NNfunction_nn_chi2_chi3::synapse0x409c4e0() {
   return (neuron0x4096ee0()*0.0382657);
}

double NNfunction_nn_chi2_chi3::synapse0x409c520() {
   return (neuron0x4097220()*-0.114859);
}

double NNfunction_nn_chi2_chi3::synapse0x409c560() {
   return (neuron0x4097560()*0.0637117);
}

double NNfunction_nn_chi2_chi3::synapse0x409c5a0() {
   return (neuron0x40978a0()*0.0525254);
}

double NNfunction_nn_chi2_chi3::synapse0x409c5e0() {
   return (neuron0x4097be0()*-0.00123491);
}

double NNfunction_nn_chi2_chi3::synapse0x409c620() {
   return (neuron0x4097f20()*1.26517);
}

double NNfunction_nn_chi2_chi3::synapse0x409c9a0() {
   return (neuron0x40932d0()*0.00610967);
}

double NNfunction_nn_chi2_chi3::synapse0x409c9e0() {
   return (neuron0x4093580()*0.0053659);
}

double NNfunction_nn_chi2_chi3::synapse0x409ca20() {
   return (neuron0x40938c0()*0.837122);
}

double NNfunction_nn_chi2_chi3::synapse0x409ca60() {
   return (neuron0x4093c00()*-0.371549);
}

double NNfunction_nn_chi2_chi3::synapse0x409caa0() {
   return (neuron0x4093f40()*0.218234);
}

double NNfunction_nn_chi2_chi3::synapse0x409cae0() {
   return (neuron0x4094280()*0.334394);
}

double NNfunction_nn_chi2_chi3::synapse0x409cb20() {
   return (neuron0x40945c0()*0.195198);
}

double NNfunction_nn_chi2_chi3::synapse0x409cb60() {
   return (neuron0x4094900()*1.09974);
}

double NNfunction_nn_chi2_chi3::synapse0x409cba0() {
   return (neuron0x4094c40()*0.114391);
}

double NNfunction_nn_chi2_chi3::synapse0x409cbe0() {
   return (neuron0x4094f80()*-0.776);
}

double NNfunction_nn_chi2_chi3::synapse0x409cc20() {
   return (neuron0x40952c0()*0.0987949);
}

double NNfunction_nn_chi2_chi3::synapse0x409cc60() {
   return (neuron0x4095600()*0.287933);
}

double NNfunction_nn_chi2_chi3::synapse0x409cca0() {
   return (neuron0x4095940()*-0.444964);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0de0() {
   return (neuron0x4095c80()*-0.441106);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0e20() {
   return (neuron0x4095fc0()*-0.294106);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0e60() {
   return (neuron0x4096300()*-0.129065);
}

double NNfunction_nn_chi2_chi3::synapse0x409c7f0() {
   return (neuron0x4096640()*0.287451);
}

double NNfunction_nn_chi2_chi3::synapse0x409c830() {
   return (neuron0x4096ba0()*0.55677);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0fb0() {
   return (neuron0x4096ee0()*0.730787);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0ff0() {
   return (neuron0x4097220()*-0.156547);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1030() {
   return (neuron0x4097560()*0.047098);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1070() {
   return (neuron0x40978a0()*-0.41114);
}

double NNfunction_nn_chi2_chi3::synapse0x40a10b0() {
   return (neuron0x4097be0()*0.61814);
}

double NNfunction_nn_chi2_chi3::synapse0x40a10f0() {
   return (neuron0x4097f20()*-3.44539);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1470() {
   return (neuron0x40932d0()*0.0106475);
}

double NNfunction_nn_chi2_chi3::synapse0x40a14b0() {
   return (neuron0x4093580()*-0.00141907);
}

double NNfunction_nn_chi2_chi3::synapse0x40a14f0() {
   return (neuron0x40938c0()*0.338864);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1530() {
   return (neuron0x4093c00()*0.00324489);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1570() {
   return (neuron0x4093f40()*-0.00118405);
}

double NNfunction_nn_chi2_chi3::synapse0x40a15b0() {
   return (neuron0x4094280()*-0.0063236);
}

double NNfunction_nn_chi2_chi3::synapse0x40a15f0() {
   return (neuron0x40945c0()*-0.00323057);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1630() {
   return (neuron0x4094900()*0.0020909);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1670() {
   return (neuron0x4094c40()*-0.00386995);
}

double NNfunction_nn_chi2_chi3::synapse0x40a16b0() {
   return (neuron0x4094f80()*0.00796193);
}

double NNfunction_nn_chi2_chi3::synapse0x40a16f0() {
   return (neuron0x40952c0()*-0.0150101);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1730() {
   return (neuron0x4095600()*-0.0869804);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1770() {
   return (neuron0x4095940()*-0.00381658);
}

double NNfunction_nn_chi2_chi3::synapse0x40a17b0() {
   return (neuron0x4095c80()*0.0210395);
}

double NNfunction_nn_chi2_chi3::synapse0x40a17f0() {
   return (neuron0x4095fc0()*0.0271619);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1830() {
   return (neuron0x4096300()*0.00922697);
}

double NNfunction_nn_chi2_chi3::synapse0x40a12c0() {
   return (neuron0x4096640()*-0.0167958);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1300() {
   return (neuron0x4096ba0()*-0.0197804);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1980() {
   return (neuron0x4096ee0()*-0.0482557);
}

double NNfunction_nn_chi2_chi3::synapse0x40a19c0() {
   return (neuron0x4097220()*-0.00213949);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1a00() {
   return (neuron0x4097560()*-0.00398226);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1a40() {
   return (neuron0x40978a0()*-0.00473155);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1a80() {
   return (neuron0x4097be0()*-0.0222266);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1ac0() {
   return (neuron0x4097f20()*-4.54387);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1e40() {
   return (neuron0x40932d0()*0.00585715);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1e80() {
   return (neuron0x4093580()*-0.0245246);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1ec0() {
   return (neuron0x40938c0()*-1.07954);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1f00() {
   return (neuron0x4093c00()*0.00553733);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1f40() {
   return (neuron0x4093f40()*-0.0884028);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1f80() {
   return (neuron0x4094280()*-0.00236492);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1fc0() {
   return (neuron0x40945c0()*0.00551748);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2000() {
   return (neuron0x4094900()*0.0289159);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2040() {
   return (neuron0x4094c40()*-0.0437052);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2080() {
   return (neuron0x4094f80()*0.0310895);
}

double NNfunction_nn_chi2_chi3::synapse0x40a20c0() {
   return (neuron0x40952c0()*0.00560997);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2100() {
   return (neuron0x4095600()*-5.28419);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2140() {
   return (neuron0x4095940()*-0.0361797);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2180() {
   return (neuron0x4095c80()*-0.0235911);
}

double NNfunction_nn_chi2_chi3::synapse0x40a21c0() {
   return (neuron0x4095fc0()*0.0506128);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2200() {
   return (neuron0x4096300()*0.0372849);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1c90() {
   return (neuron0x4096640()*-0.0156911);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1cd0() {
   return (neuron0x4096ba0()*-0.00215229);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2350() {
   return (neuron0x4096ee0()*0.0158403);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2390() {
   return (neuron0x4097220()*-0.00116267);
}

double NNfunction_nn_chi2_chi3::synapse0x40a23d0() {
   return (neuron0x4097560()*0.000248595);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2410() {
   return (neuron0x40978a0()*0.0160547);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2450() {
   return (neuron0x4097be0()*0.0101567);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2490() {
   return (neuron0x4097f20()*0.842235);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2810() {
   return (neuron0x40932d0()*-0.00212529);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2850() {
   return (neuron0x4093580()*-0.0197856);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2890() {
   return (neuron0x40938c0()*4.02007);
}

double NNfunction_nn_chi2_chi3::synapse0x40a28d0() {
   return (neuron0x4093c00()*-0.000285501);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2910() {
   return (neuron0x4093f40()*0.0395011);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2950() {
   return (neuron0x4094280()*-0.0308301);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2990() {
   return (neuron0x40945c0()*0.02692);
}

double NNfunction_nn_chi2_chi3::synapse0x40a29d0() {
   return (neuron0x4094900()*0.00706779);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2a10() {
   return (neuron0x4094c40()*0.00998947);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2a50() {
   return (neuron0x4094f80()*0.0185855);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2a90() {
   return (neuron0x40952c0()*-0.0964088);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2ad0() {
   return (neuron0x4095600()*0.253846);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2b10() {
   return (neuron0x4095940()*0.00836758);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2b50() {
   return (neuron0x4095c80()*0.0014803);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2b90() {
   return (neuron0x4095fc0()*0.0123973);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2bd0() {
   return (neuron0x4096300()*0.014642);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2660() {
   return (neuron0x4096640()*-0.0226403);
}

double NNfunction_nn_chi2_chi3::synapse0x40a26a0() {
   return (neuron0x4096ba0()*0.0241425);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2d20() {
   return (neuron0x4096ee0()*0.00163662);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2d60() {
   return (neuron0x4097220()*-0.0285128);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2da0() {
   return (neuron0x4097560()*0.0133507);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2de0() {
   return (neuron0x40978a0()*-0.00759201);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2e20() {
   return (neuron0x4097be0()*0.00369697);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2e60() {
   return (neuron0x4097f20()*-0.9655);
}

double NNfunction_nn_chi2_chi3::synapse0x40a31e0() {
   return (neuron0x40932d0()*-1.54864);
}

double NNfunction_nn_chi2_chi3::synapse0x4093460() {
   return (neuron0x4093580()*-0.0572425);
}

double NNfunction_nn_chi2_chi3::synapse0x40934a0() {
   return (neuron0x40938c0()*-2.73183);
}

double NNfunction_nn_chi2_chi3::synapse0x40937a0() {
   return (neuron0x4093c00()*-0.163412);
}

double NNfunction_nn_chi2_chi3::synapse0x40937e0() {
   return (neuron0x4093f40()*0.184222);
}

double NNfunction_nn_chi2_chi3::synapse0x4093ae0() {
   return (neuron0x4094280()*-0.09944);
}

double NNfunction_nn_chi2_chi3::synapse0x4093b20() {
   return (neuron0x40945c0()*-0.0742855);
}

double NNfunction_nn_chi2_chi3::synapse0x4093e20() {
   return (neuron0x4094900()*-0.0706301);
}

double NNfunction_nn_chi2_chi3::synapse0x4093e60() {
   return (neuron0x4094c40()*0.183827);
}

double NNfunction_nn_chi2_chi3::synapse0x4094160() {
   return (neuron0x4094f80()*-0.171459);
}

double NNfunction_nn_chi2_chi3::synapse0x40941a0() {
   return (neuron0x40952c0()*-0.230253);
}

double NNfunction_nn_chi2_chi3::synapse0x40944a0() {
   return (neuron0x4095600()*0.342345);
}

double NNfunction_nn_chi2_chi3::synapse0x40944e0() {
   return (neuron0x4095940()*0.134366);
}

double NNfunction_nn_chi2_chi3::synapse0x40947e0() {
   return (neuron0x4095c80()*0.491204);
}

double NNfunction_nn_chi2_chi3::synapse0x4094820() {
   return (neuron0x4095fc0()*-0.252831);
}

double NNfunction_nn_chi2_chi3::synapse0x4094b20() {
   return (neuron0x4096300()*-0.236642);
}

double NNfunction_nn_chi2_chi3::synapse0x4094b60() {
   return (neuron0x4096640()*-0.0804629);
}

double NNfunction_nn_chi2_chi3::synapse0x4094e60() {
   return (neuron0x4096ba0()*0.0848481);
}

double NNfunction_nn_chi2_chi3::synapse0x4094ea0() {
   return (neuron0x4096ee0()*-0.148636);
}

double NNfunction_nn_chi2_chi3::synapse0x40951a0() {
   return (neuron0x4097220()*-0.0820161);
}

double NNfunction_nn_chi2_chi3::synapse0x40951e0() {
   return (neuron0x4097560()*-0.175664);
}

double NNfunction_nn_chi2_chi3::synapse0x40954e0() {
   return (neuron0x40978a0()*0.111118);
}

double NNfunction_nn_chi2_chi3::synapse0x4095520() {
   return (neuron0x4097be0()*-0.0175222);
}

double NNfunction_nn_chi2_chi3::synapse0x4095820() {
   return (neuron0x4097f20()*-2.54819);
}

double NNfunction_nn_chi2_chi3::synapse0x4095860() {
   return (neuron0x40932d0()*0.0333292);
}

double NNfunction_nn_chi2_chi3::synapse0x4096520() {
   return (neuron0x4093580()*-0.486206);
}

double NNfunction_nn_chi2_chi3::synapse0x4096560() {
   return (neuron0x40938c0()*1.19776);
}

double NNfunction_nn_chi2_chi3::synapse0x40a3030() {
   return (neuron0x4093c00()*-0.0210245);
}

double NNfunction_nn_chi2_chi3::synapse0x40a3070() {
   return (neuron0x4093f40()*0.408931);
}

double NNfunction_nn_chi2_chi3::synapse0x4096860() {
   return (neuron0x4094280()*-0.0644098);
}

double NNfunction_nn_chi2_chi3::synapse0x40968a0() {
   return (neuron0x40945c0()*-0.060025);
}

double NNfunction_nn_chi2_chi3::synapse0x4096dc0() {
   return (neuron0x4094900()*0.105593);
}

double NNfunction_nn_chi2_chi3::synapse0x4096e00() {
   return (neuron0x4094c40()*-0.842079);
}

double NNfunction_nn_chi2_chi3::synapse0x4097100() {
   return (neuron0x4094f80()*-0.231684);
}

double NNfunction_nn_chi2_chi3::synapse0x4097140() {
   return (neuron0x40952c0()*-0.14179);
}

double NNfunction_nn_chi2_chi3::synapse0x4097440() {
   return (neuron0x4095600()*-0.0643966);
}

double NNfunction_nn_chi2_chi3::synapse0x4097480() {
   return (neuron0x4095940()*0.252724);
}

double NNfunction_nn_chi2_chi3::synapse0x4097780() {
   return (neuron0x4095c80()*0.608506);
}

double NNfunction_nn_chi2_chi3::synapse0x40977c0() {
   return (neuron0x4095fc0()*0.436477);
}

double NNfunction_nn_chi2_chi3::synapse0x4097ac0() {
   return (neuron0x4096300()*-0.631638);
}

double NNfunction_nn_chi2_chi3::synapse0x4097b00() {
   return (neuron0x4096640()*0.194286);
}

double NNfunction_nn_chi2_chi3::synapse0x4097e00() {
   return (neuron0x4096ba0()*1.15335);
}

double NNfunction_nn_chi2_chi3::synapse0x4097e40() {
   return (neuron0x4096ee0()*0.338031);
}

double NNfunction_nn_chi2_chi3::synapse0x4098140() {
   return (neuron0x4097220()*0.320807);
}

double NNfunction_nn_chi2_chi3::synapse0x4098180() {
   return (neuron0x4097560()*0.0499991);
}

double NNfunction_nn_chi2_chi3::synapse0x4095b60() {
   return (neuron0x40978a0()*0.247301);
}

double NNfunction_nn_chi2_chi3::synapse0x4095ba0() {
   return (neuron0x4097be0()*-0.271607);
}

double NNfunction_nn_chi2_chi3::synapse0x40a4f50() {
   return (neuron0x4097f20()*-0.507333);
}

double NNfunction_nn_chi2_chi3::synapse0x40a52d0() {
   return (neuron0x40932d0()*-0.016101);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5310() {
   return (neuron0x4093580()*9.9167);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5350() {
   return (neuron0x40938c0()*0.45166);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5390() {
   return (neuron0x4093c00()*-0.00531439);
}

double NNfunction_nn_chi2_chi3::synapse0x40a53d0() {
   return (neuron0x4093f40()*0.00374506);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5410() {
   return (neuron0x4094280()*-0.00284786);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5450() {
   return (neuron0x40945c0()*0.00526585);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5490() {
   return (neuron0x4094900()*0.0019825);
}

double NNfunction_nn_chi2_chi3::synapse0x40a54d0() {
   return (neuron0x4094c40()*0.00215892);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5510() {
   return (neuron0x4094f80()*-0.00629719);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5550() {
   return (neuron0x40952c0()*-1.25392e-05);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5590() {
   return (neuron0x4095600()*0.0180124);
}

double NNfunction_nn_chi2_chi3::synapse0x40a55d0() {
   return (neuron0x4095940()*-0.00128491);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5610() {
   return (neuron0x4095c80()*0.00396324);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5650() {
   return (neuron0x4095fc0()*-0.00412334);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5690() {
   return (neuron0x4096300()*-0.0038586);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5120() {
   return (neuron0x4096640()*-0.014196);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5160() {
   return (neuron0x4096ba0()*0.00705482);
}

double NNfunction_nn_chi2_chi3::synapse0x40a57e0() {
   return (neuron0x4096ee0()*0.00249815);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5820() {
   return (neuron0x4097220()*-0.00393475);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5860() {
   return (neuron0x4097560()*0.0132079);
}

double NNfunction_nn_chi2_chi3::synapse0x40a58a0() {
   return (neuron0x40978a0()*0.00289646);
}

double NNfunction_nn_chi2_chi3::synapse0x40a58e0() {
   return (neuron0x4097be0()*-0.00339853);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5920() {
   return (neuron0x4097f20()*-2.36531);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5ca0() {
   return (neuron0x40932d0()*-1.17297);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5ce0() {
   return (neuron0x4093580()*0.0727596);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5d20() {
   return (neuron0x40938c0()*-0.499795);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5d60() {
   return (neuron0x4093c00()*0.202132);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5da0() {
   return (neuron0x4093f40()*1.54749);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5de0() {
   return (neuron0x4094280()*0.705955);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5e20() {
   return (neuron0x40945c0()*-1.32457);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5e60() {
   return (neuron0x4094900()*-0.273404);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5ea0() {
   return (neuron0x4094c40()*0.417273);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5ee0() {
   return (neuron0x4094f80()*-1.17936);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5f20() {
   return (neuron0x40952c0()*1.46313);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5f60() {
   return (neuron0x4095600()*-0.415962);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5fa0() {
   return (neuron0x4095940()*0.431628);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5fe0() {
   return (neuron0x4095c80()*0.841498);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6020() {
   return (neuron0x4095fc0()*0.55822);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6060() {
   return (neuron0x4096300()*-0.00222838);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5af0() {
   return (neuron0x4096640()*1.50784);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5b30() {
   return (neuron0x4096ba0()*-2.54643);
}

double NNfunction_nn_chi2_chi3::synapse0x40a61b0() {
   return (neuron0x4096ee0()*-1.22928);
}

double NNfunction_nn_chi2_chi3::synapse0x40a61f0() {
   return (neuron0x4097220()*-0.691144);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6230() {
   return (neuron0x4097560()*1.43331);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6270() {
   return (neuron0x40978a0()*-0.108771);
}

double NNfunction_nn_chi2_chi3::synapse0x40a62b0() {
   return (neuron0x4097be0()*1.00541);
}

double NNfunction_nn_chi2_chi3::synapse0x40a62f0() {
   return (neuron0x4097f20()*-1.06049);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6670() {
   return (neuron0x40932d0()*0.794323);
}

double NNfunction_nn_chi2_chi3::synapse0x40a66b0() {
   return (neuron0x4093580()*0.198722);
}

double NNfunction_nn_chi2_chi3::synapse0x40a66f0() {
   return (neuron0x40938c0()*0.470479);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6730() {
   return (neuron0x4093c00()*-0.194276);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6770() {
   return (neuron0x4093f40()*0.0323705);
}

double NNfunction_nn_chi2_chi3::synapse0x40a67b0() {
   return (neuron0x4094280()*0.637379);
}

double NNfunction_nn_chi2_chi3::synapse0x40a67f0() {
   return (neuron0x40945c0()*0.258929);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6830() {
   return (neuron0x4094900()*0.480363);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6870() {
   return (neuron0x4094c40()*-0.459625);
}

double NNfunction_nn_chi2_chi3::synapse0x40a68b0() {
   return (neuron0x4094f80()*0.585118);
}

double NNfunction_nn_chi2_chi3::synapse0x40a68f0() {
   return (neuron0x40952c0()*0.141155);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6930() {
   return (neuron0x4095600()*-0.572957);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6970() {
   return (neuron0x4095940()*-0.389926);
}

double NNfunction_nn_chi2_chi3::synapse0x40a69b0() {
   return (neuron0x4095c80()*-0.146748);
}

double NNfunction_nn_chi2_chi3::synapse0x40a69f0() {
   return (neuron0x4095fc0()*0.20443);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6a30() {
   return (neuron0x4096300()*0.297046);
}

double NNfunction_nn_chi2_chi3::synapse0x40a64c0() {
   return (neuron0x4096640()*0.597771);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6500() {
   return (neuron0x4096ba0()*-0.0831888);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6b80() {
   return (neuron0x4096ee0()*0.367218);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6bc0() {
   return (neuron0x4097220()*0.395079);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6c00() {
   return (neuron0x4097560()*0.0848403);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6c40() {
   return (neuron0x40978a0()*-0.0512985);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6c80() {
   return (neuron0x4097be0()*0.112048);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6cc0() {
   return (neuron0x4097f20()*0.276961);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7040() {
   return (neuron0x40932d0()*0.00786698);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7080() {
   return (neuron0x4093580()*18.7668);
}

double NNfunction_nn_chi2_chi3::synapse0x40a70c0() {
   return (neuron0x40938c0()*-9.38912);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7100() {
   return (neuron0x4093c00()*-0.0176146);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7140() {
   return (neuron0x4093f40()*0.0157375);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7180() {
   return (neuron0x4094280()*0.0551977);
}

double NNfunction_nn_chi2_chi3::synapse0x40a71c0() {
   return (neuron0x40945c0()*-0.0464689);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7200() {
   return (neuron0x4094900()*-0.0144125);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7240() {
   return (neuron0x4094c40()*0.0155588);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7280() {
   return (neuron0x4094f80()*0.0161197);
}

double NNfunction_nn_chi2_chi3::synapse0x40a72c0() {
   return (neuron0x40952c0()*-0.0093332);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7300() {
   return (neuron0x4095600()*-0.0966521);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7340() {
   return (neuron0x4095940()*-0.00899957);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7380() {
   return (neuron0x4095c80()*0.0263105);
}

double NNfunction_nn_chi2_chi3::synapse0x40a73c0() {
   return (neuron0x4095fc0()*0.0307853);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7400() {
   return (neuron0x4096300()*0.0253045);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6e90() {
   return (neuron0x4096640()*-0.0152362);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6ed0() {
   return (neuron0x4096ba0()*-0.00343827);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7550() {
   return (neuron0x4096ee0()*-0.0370566);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7590() {
   return (neuron0x4097220()*-0.0252105);
}

double NNfunction_nn_chi2_chi3::synapse0x40a75d0() {
   return (neuron0x4097560()*0.0231523);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7610() {
   return (neuron0x40978a0()*-0.00365861);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7650() {
   return (neuron0x4097be0()*-0.0251401);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7690() {
   return (neuron0x4097f20()*-0.0608724);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7a10() {
   return (neuron0x40932d0()*0.00689072);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7a50() {
   return (neuron0x4093580()*-0.0107061);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7a90() {
   return (neuron0x40938c0()*2.64165);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7ad0() {
   return (neuron0x4093c00()*-0.0115879);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7b10() {
   return (neuron0x4093f40()*0.0160516);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7b50() {
   return (neuron0x4094280()*0.00692398);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7b90() {
   return (neuron0x40945c0()*0.00515015);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7bd0() {
   return (neuron0x4094900()*-0.00260119);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7c10() {
   return (neuron0x4094c40()*-0.00493603);
}

double NNfunction_nn_chi2_chi3::synapse0x409fdd0() {
   return (neuron0x4094f80()*-0.00814657);
}

double NNfunction_nn_chi2_chi3::synapse0x409fe10() {
   return (neuron0x40952c0()*0.0138349);
}

double NNfunction_nn_chi2_chi3::synapse0x409fe50() {
   return (neuron0x4095600()*-0.442476);
}

double NNfunction_nn_chi2_chi3::synapse0x409fe90() {
   return (neuron0x4095940()*-0.0130813);
}

double NNfunction_nn_chi2_chi3::synapse0x409fed0() {
   return (neuron0x4095c80()*-0.00539037);
}

double NNfunction_nn_chi2_chi3::synapse0x409ff10() {
   return (neuron0x4095fc0()*0.0050269);
}

double NNfunction_nn_chi2_chi3::synapse0x409ff50() {
   return (neuron0x4096300()*0.0132645);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7860() {
   return (neuron0x4096640()*0.0128428);
}

double NNfunction_nn_chi2_chi3::synapse0x40a78a0() {
   return (neuron0x4096ba0()*0.0246051);
}

double NNfunction_nn_chi2_chi3::synapse0x40a00a0() {
   return (neuron0x4096ee0()*-0.000303105);
}

double NNfunction_nn_chi2_chi3::synapse0x40a00e0() {
   return (neuron0x4097220()*0.00742701);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0120() {
   return (neuron0x4097560()*-0.00700591);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0160() {
   return (neuron0x40978a0()*-0.00915118);
}

double NNfunction_nn_chi2_chi3::synapse0x40a01a0() {
   return (neuron0x4097be0()*0.00890057);
}

double NNfunction_nn_chi2_chi3::synapse0x40a01e0() {
   return (neuron0x4097f20()*-1.90024);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0560() {
   return (neuron0x40932d0()*-0.0140703);
}

double NNfunction_nn_chi2_chi3::synapse0x40a05a0() {
   return (neuron0x4093580()*-0.261084);
}

double NNfunction_nn_chi2_chi3::synapse0x40a05e0() {
   return (neuron0x40938c0()*-0.36074);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0620() {
   return (neuron0x4093c00()*-0.178522);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0660() {
   return (neuron0x4093f40()*0.727123);
}

double NNfunction_nn_chi2_chi3::synapse0x40a06a0() {
   return (neuron0x4094280()*0.0610886);
}

double NNfunction_nn_chi2_chi3::synapse0x40a06e0() {
   return (neuron0x40945c0()*-0.204552);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0720() {
   return (neuron0x4094900()*-0.378971);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0760() {
   return (neuron0x4094c40()*-0.0253842);
}

double NNfunction_nn_chi2_chi3::synapse0x40a07a0() {
   return (neuron0x4094f80()*0.10742);
}

double NNfunction_nn_chi2_chi3::synapse0x40a07e0() {
   return (neuron0x40952c0()*0.0702502);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0820() {
   return (neuron0x4095600()*-1.06538);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0860() {
   return (neuron0x4095940()*-0.244734);
}

double NNfunction_nn_chi2_chi3::synapse0x40a08a0() {
   return (neuron0x4095c80()*-0.123543);
}

double NNfunction_nn_chi2_chi3::synapse0x40a08e0() {
   return (neuron0x4095fc0()*2.76112);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0920() {
   return (neuron0x4096300()*0.378472);
}

double NNfunction_nn_chi2_chi3::synapse0x40a03b0() {
   return (neuron0x4096640()*0.0730116);
}

double NNfunction_nn_chi2_chi3::synapse0x40a03f0() {
   return (neuron0x4096ba0()*-0.0281256);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0a70() {
   return (neuron0x4096ee0()*-0.403135);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0ab0() {
   return (neuron0x4097220()*-0.498004);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0af0() {
   return (neuron0x4097560()*-0.476875);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0b30() {
   return (neuron0x40978a0()*-0.405519);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0b70() {
   return (neuron0x4097be0()*0.117954);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0bb0() {
   return (neuron0x4097f20()*0.638515);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0d80() {
   return (neuron0x40932d0()*-0.106673);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9e10() {
   return (neuron0x4093580()*13.7453);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9e50() {
   return (neuron0x40938c0()*2.39603);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9e90() {
   return (neuron0x4093c00()*0.0320358);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9ed0() {
   return (neuron0x4093f40()*0.0242273);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9f10() {
   return (neuron0x4094280()*0.0023765);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9f50() {
   return (neuron0x40945c0()*-0.0149717);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9f90() {
   return (neuron0x4094900()*-0.0112996);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9fd0() {
   return (neuron0x4094c40()*-0.044285);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa010() {
   return (neuron0x4094f80()*0.0174349);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa050() {
   return (neuron0x40952c0()*-0.0192182);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa090() {
   return (neuron0x4095600()*-0.0692001);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa0d0() {
   return (neuron0x4095940()*-0.0225636);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa110() {
   return (neuron0x4095c80()*0.122151);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa150() {
   return (neuron0x4095fc0()*0.0306923);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa190() {
   return (neuron0x4096300()*-0.00135171);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9c60() {
   return (neuron0x4096640()*-0.0886553);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9ca0() {
   return (neuron0x4096ba0()*-0.00514111);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa2e0() {
   return (neuron0x4096ee0()*0.00493051);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa320() {
   return (neuron0x4097220()*-0.0211199);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa360() {
   return (neuron0x4097560()*-0.00240202);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa3a0() {
   return (neuron0x40978a0()*-0.0241061);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa3e0() {
   return (neuron0x4097be0()*-0.00471245);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa420() {
   return (neuron0x4097f20()*-4.3677);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa7a0() {
   return (neuron0x40932d0()*-0.00056796);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa7e0() {
   return (neuron0x4093580()*-0.00243161);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa820() {
   return (neuron0x40938c0()*0.205855);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa860() {
   return (neuron0x4093c00()*-0.00162936);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa8a0() {
   return (neuron0x4093f40()*0.00835172);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa8e0() {
   return (neuron0x4094280()*-0.00467511);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa920() {
   return (neuron0x40945c0()*0.00132538);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa960() {
   return (neuron0x4094900()*0.00257989);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa9a0() {
   return (neuron0x4094c40()*0.000721932);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa9e0() {
   return (neuron0x4094f80()*-0.00519813);
}

double NNfunction_nn_chi2_chi3::synapse0x40aaa20() {
   return (neuron0x40952c0()*-0.00872159);
}

double NNfunction_nn_chi2_chi3::synapse0x40aaa60() {
   return (neuron0x4095600()*-0.011063);
}

double NNfunction_nn_chi2_chi3::synapse0x40aaaa0() {
   return (neuron0x4095940()*0.000530034);
}

double NNfunction_nn_chi2_chi3::synapse0x40aaae0() {
   return (neuron0x4095c80()*0.013727);
}

double NNfunction_nn_chi2_chi3::synapse0x40aab20() {
   return (neuron0x4095fc0()*-0.000377439);
}

double NNfunction_nn_chi2_chi3::synapse0x40aab60() {
   return (neuron0x4096300()*0.000970327);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa5f0() {
   return (neuron0x4096640()*0.00207126);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa630() {
   return (neuron0x4096ba0()*0.00307824);
}

double NNfunction_nn_chi2_chi3::synapse0x40aacb0() {
   return (neuron0x4096ee0()*-0.00965635);
}

double NNfunction_nn_chi2_chi3::synapse0x40aacf0() {
   return (neuron0x4097220()*-0.00746531);
}

double NNfunction_nn_chi2_chi3::synapse0x40aad30() {
   return (neuron0x4097560()*0.00349514);
}

double NNfunction_nn_chi2_chi3::synapse0x40aad70() {
   return (neuron0x40978a0()*0.0013788);
}

double NNfunction_nn_chi2_chi3::synapse0x40aadb0() {
   return (neuron0x4097be0()*-0.0013778);
}

double NNfunction_nn_chi2_chi3::synapse0x40aadf0() {
   return (neuron0x4097f20()*0.818879);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab170() {
   return (neuron0x40932d0()*0.144773);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab1b0() {
   return (neuron0x4093580()*0.0472954);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab1f0() {
   return (neuron0x40938c0()*0.763085);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab230() {
   return (neuron0x4093c00()*-0.0101459);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab270() {
   return (neuron0x4093f40()*0.0758087);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab2b0() {
   return (neuron0x4094280()*-0.389831);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab2f0() {
   return (neuron0x40945c0()*0.102114);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab330() {
   return (neuron0x4094900()*-0.0174726);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab370() {
   return (neuron0x4094c40()*0.144639);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab3b0() {
   return (neuron0x4094f80()*-0.052066);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab3f0() {
   return (neuron0x40952c0()*-0.0957417);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab430() {
   return (neuron0x4095600()*-0.119437);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab470() {
   return (neuron0x4095940()*0.288659);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab4b0() {
   return (neuron0x4095c80()*0.209604);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab4f0() {
   return (neuron0x4095fc0()*0.556753);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab530() {
   return (neuron0x4096300()*-0.311542);
}

double NNfunction_nn_chi2_chi3::synapse0x40aafc0() {
   return (neuron0x4096640()*-0.171875);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab000() {
   return (neuron0x4096ba0()*0.273822);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab680() {
   return (neuron0x4096ee0()*-0.00760175);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab6c0() {
   return (neuron0x4097220()*0.0993228);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab700() {
   return (neuron0x4097560()*0.0286894);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab740() {
   return (neuron0x40978a0()*0.173006);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab780() {
   return (neuron0x4097be0()*-0.16407);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab7c0() {
   return (neuron0x4097f20()*2.76475);
}

double NNfunction_nn_chi2_chi3::synapse0x40abb40() {
   return (neuron0x40932d0()*-0.288176);
}

double NNfunction_nn_chi2_chi3::synapse0x40abb80() {
   return (neuron0x4093580()*-0.209175);
}

double NNfunction_nn_chi2_chi3::synapse0x40abbc0() {
   return (neuron0x40938c0()*-1.77185);
}

double NNfunction_nn_chi2_chi3::synapse0x40abc00() {
   return (neuron0x4093c00()*0.232035);
}

double NNfunction_nn_chi2_chi3::synapse0x40abc40() {
   return (neuron0x4093f40()*-0.255836);
}

double NNfunction_nn_chi2_chi3::synapse0x40abc80() {
   return (neuron0x4094280()*0.449347);
}

double NNfunction_nn_chi2_chi3::synapse0x40abcc0() {
   return (neuron0x40945c0()*-0.0888545);
}

double NNfunction_nn_chi2_chi3::synapse0x40abd00() {
   return (neuron0x4094900()*-0.611444);
}

double NNfunction_nn_chi2_chi3::synapse0x40abd40() {
   return (neuron0x4094c40()*-0.237756);
}

double NNfunction_nn_chi2_chi3::synapse0x40abd80() {
   return (neuron0x4094f80()*-0.275413);
}

double NNfunction_nn_chi2_chi3::synapse0x40abdc0() {
   return (neuron0x40952c0()*0.348002);
}

double NNfunction_nn_chi2_chi3::synapse0x40abe00() {
   return (neuron0x4095600()*1.01092);
}

double NNfunction_nn_chi2_chi3::synapse0x40abe40() {
   return (neuron0x4095940()*1.3953);
}

double NNfunction_nn_chi2_chi3::synapse0x40abe80() {
   return (neuron0x4095c80()*-0.479087);
}

double NNfunction_nn_chi2_chi3::synapse0x40abec0() {
   return (neuron0x4095fc0()*1.49201);
}

double NNfunction_nn_chi2_chi3::synapse0x40abf00() {
   return (neuron0x4096300()*-0.346294);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab990() {
   return (neuron0x4096640()*-0.214429);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab9d0() {
   return (neuron0x4096ba0()*-1.29815);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac050() {
   return (neuron0x4096ee0()*-0.407207);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac090() {
   return (neuron0x4097220()*0.978009);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac0d0() {
   return (neuron0x4097560()*0.561781);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac110() {
   return (neuron0x40978a0()*-0.338304);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac150() {
   return (neuron0x4097be0()*-0.373911);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac190() {
   return (neuron0x4097f20()*-1.81268);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac510() {
   return (neuron0x40932d0()*0.0128502);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac550() {
   return (neuron0x4093580()*-15.4703);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac590() {
   return (neuron0x40938c0()*0.389098);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac5d0() {
   return (neuron0x4093c00()*0.00438707);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac610() {
   return (neuron0x4093f40()*0.000663185);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac650() {
   return (neuron0x4094280()*-0.00418079);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac690() {
   return (neuron0x40945c0()*0.000310689);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac6d0() {
   return (neuron0x4094900()*0.00328607);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac710() {
   return (neuron0x4094c40()*0.0061521);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac750() {
   return (neuron0x4094f80()*-0.00171181);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac790() {
   return (neuron0x40952c0()*-0.0274352);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac7d0() {
   return (neuron0x4095600()*0.0138797);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac810() {
   return (neuron0x4095940()*0.0188337);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac850() {
   return (neuron0x4095c80()*-0.0133892);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac890() {
   return (neuron0x4095fc0()*0.0453627);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac8d0() {
   return (neuron0x4096300()*-0.00511156);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac360() {
   return (neuron0x4096640()*0.0386201);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac3a0() {
   return (neuron0x4096ba0()*-0.0116298);
}

double NNfunction_nn_chi2_chi3::synapse0x40aca20() {
   return (neuron0x4096ee0()*0.00779812);
}

double NNfunction_nn_chi2_chi3::synapse0x40aca60() {
   return (neuron0x4097220()*0.00721924);
}

double NNfunction_nn_chi2_chi3::synapse0x40acaa0() {
   return (neuron0x4097560()*-0.00685722);
}

double NNfunction_nn_chi2_chi3::synapse0x40acae0() {
   return (neuron0x40978a0()*0.00608642);
}

double NNfunction_nn_chi2_chi3::synapse0x40acb20() {
   return (neuron0x4097be0()*0.00277994);
}

double NNfunction_nn_chi2_chi3::synapse0x40acb60() {
   return (neuron0x4097f20()*2.48986);
}

double NNfunction_nn_chi2_chi3::synapse0x40acee0() {
   return (neuron0x40932d0()*-0.0588903);
}

double NNfunction_nn_chi2_chi3::synapse0x40acf20() {
   return (neuron0x4093580()*-0.00952888);
}

double NNfunction_nn_chi2_chi3::synapse0x40acf60() {
   return (neuron0x40938c0()*-0.754506);
}

double NNfunction_nn_chi2_chi3::synapse0x40acfa0() {
   return (neuron0x4093c00()*0.00192728);
}

double NNfunction_nn_chi2_chi3::synapse0x40acfe0() {
   return (neuron0x4093f40()*-0.0444956);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad020() {
   return (neuron0x4094280()*0.0199347);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad060() {
   return (neuron0x40945c0()*-0.00297622);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad0a0() {
   return (neuron0x4094900()*-0.0782499);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad0e0() {
   return (neuron0x4094c40()*0.0102428);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad120() {
   return (neuron0x4094f80()*0.0237174);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad160() {
   return (neuron0x40952c0()*-0.0260749);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad1a0() {
   return (neuron0x4095600()*-0.164642);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad1e0() {
   return (neuron0x4095940()*-0.0450151);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad220() {
   return (neuron0x4095c80()*-0.0394723);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad260() {
   return (neuron0x4095fc0()*-0.0921839);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad2a0() {
   return (neuron0x4096300()*0.0182885);
}

double NNfunction_nn_chi2_chi3::synapse0x40acd30() {
   return (neuron0x4096640()*-0.0283382);
}

double NNfunction_nn_chi2_chi3::synapse0x40acd70() {
   return (neuron0x4096ba0()*-0.0837899);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad3f0() {
   return (neuron0x4096ee0()*0.0129179);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad430() {
   return (neuron0x4097220()*-0.0413927);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad470() {
   return (neuron0x4097560()*0.0211022);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad4b0() {
   return (neuron0x40978a0()*0.005729);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad4f0() {
   return (neuron0x4097be0()*0.0151037);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad530() {
   return (neuron0x4097f20()*3.47268);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad8b0() {
   return (neuron0x40932d0()*0.296145);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad8f0() {
   return (neuron0x4093580()*0.0355746);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad930() {
   return (neuron0x40938c0()*-1.48321);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad970() {
   return (neuron0x4093c00()*0.116341);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad9b0() {
   return (neuron0x4093f40()*0.142737);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad9f0() {
   return (neuron0x4094280()*-0.287631);
}

double NNfunction_nn_chi2_chi3::synapse0x40ada30() {
   return (neuron0x40945c0()*0.166165);
}

double NNfunction_nn_chi2_chi3::synapse0x40ada70() {
   return (neuron0x4094900()*0.22777);
}

double NNfunction_nn_chi2_chi3::synapse0x40adab0() {
   return (neuron0x4094c40()*0.0600167);
}

double NNfunction_nn_chi2_chi3::synapse0x40adaf0() {
   return (neuron0x4094f80()*-0.00688459);
}

double NNfunction_nn_chi2_chi3::synapse0x40adb30() {
   return (neuron0x40952c0()*0.206803);
}

double NNfunction_nn_chi2_chi3::synapse0x40adb70() {
   return (neuron0x4095600()*-0.100872);
}

double NNfunction_nn_chi2_chi3::synapse0x40adbb0() {
   return (neuron0x4095940()*0.102128);
}

double NNfunction_nn_chi2_chi3::synapse0x40adbf0() {
   return (neuron0x4095c80()*0.0550972);
}

double NNfunction_nn_chi2_chi3::synapse0x40adc30() {
   return (neuron0x4095fc0()*0.096967);
}

double NNfunction_nn_chi2_chi3::synapse0x40adc70() {
   return (neuron0x4096300()*-0.146788);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad700() {
   return (neuron0x4096640()*-0.118871);
}

double NNfunction_nn_chi2_chi3::synapse0x40ad740() {
   return (neuron0x4096ba0()*0.216972);
}

double NNfunction_nn_chi2_chi3::synapse0x40addc0() {
   return (neuron0x4096ee0()*0.340931);
}

double NNfunction_nn_chi2_chi3::synapse0x40ade00() {
   return (neuron0x4097220()*0.074276);
}

double NNfunction_nn_chi2_chi3::synapse0x40ade40() {
   return (neuron0x4097560()*-0.0995875);
}

double NNfunction_nn_chi2_chi3::synapse0x40ade80() {
   return (neuron0x40978a0()*0.227735);
}

double NNfunction_nn_chi2_chi3::synapse0x40adec0() {
   return (neuron0x4097be0()*-0.0326187);
}

double NNfunction_nn_chi2_chi3::synapse0x40adf00() {
   return (neuron0x4097f20()*-4.98761);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae280() {
   return (neuron0x40932d0()*0.0429542);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae2c0() {
   return (neuron0x4093580()*0.020634);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae300() {
   return (neuron0x40938c0()*2.43902);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae340() {
   return (neuron0x4093c00()*0.0108054);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae380() {
   return (neuron0x4093f40()*0.0329597);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae3c0() {
   return (neuron0x4094280()*-0.0421795);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae400() {
   return (neuron0x40945c0()*-0.0390238);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae440() {
   return (neuron0x4094900()*-0.00106483);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae480() {
   return (neuron0x4094c40()*0.0720278);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae4c0() {
   return (neuron0x4094f80()*0.00429732);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae500() {
   return (neuron0x40952c0()*0.0441382);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae540() {
   return (neuron0x4095600()*2.43242);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae580() {
   return (neuron0x4095940()*-0.00363923);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae5c0() {
   return (neuron0x4095c80()*-0.0503597);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae600() {
   return (neuron0x4095fc0()*-0.0400645);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae640() {
   return (neuron0x4096300()*-0.0111436);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae0d0() {
   return (neuron0x4096640()*0.0764533);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae110() {
   return (neuron0x4096ba0()*0.0587737);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae790() {
   return (neuron0x4096ee0()*0.0230598);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae7d0() {
   return (neuron0x4097220()*0.0411257);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae810() {
   return (neuron0x4097560()*-0.0642209);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae850() {
   return (neuron0x40978a0()*-0.0611062);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae890() {
   return (neuron0x4097be0()*0.0483809);
}

double NNfunction_nn_chi2_chi3::synapse0x40ae8d0() {
   return (neuron0x4097f20()*0.383451);
}

double NNfunction_nn_chi2_chi3::synapse0x40aec50() {
   return (neuron0x40932d0()*3.31663);
}

double NNfunction_nn_chi2_chi3::synapse0x40a3220() {
   return (neuron0x4093580()*2.05567);
}

double NNfunction_nn_chi2_chi3::synapse0x40a3260() {
   return (neuron0x40938c0()*-0.277611);
}

double NNfunction_nn_chi2_chi3::synapse0x40a32a0() {
   return (neuron0x4093c00()*1.0469);
}

double NNfunction_nn_chi2_chi3::synapse0x40a34f0() {
   return (neuron0x4093f40()*0.821568);
}

double NNfunction_nn_chi2_chi3::synapse0x40a3530() {
   return (neuron0x4094280()*-0.290259);
}

double NNfunction_nn_chi2_chi3::synapse0x40a3570() {
   return (neuron0x40945c0()*0.824385);
}

double NNfunction_nn_chi2_chi3::synapse0x40a37c0() {
   return (neuron0x4094900()*-0.502107);
}

double NNfunction_nn_chi2_chi3::synapse0x40a3800() {
   return (neuron0x4094c40()*-0.962692);
}

double NNfunction_nn_chi2_chi3::synapse0x40a3a50() {
   return (neuron0x4094f80()*-0.63532);
}

double NNfunction_nn_chi2_chi3::synapse0x40a3a90() {
   return (neuron0x40952c0()*1.23978);
}

double NNfunction_nn_chi2_chi3::synapse0x40a3ad0() {
   return (neuron0x4095600()*-1.16719);
}

double NNfunction_nn_chi2_chi3::synapse0x40a3d20() {
   return (neuron0x4095940()*0.321741);
}

double NNfunction_nn_chi2_chi3::synapse0x40a3d60() {
   return (neuron0x4095c80()*1.19165);
}

double NNfunction_nn_chi2_chi3::synapse0x40a3fb0() {
   return (neuron0x4095fc0()*0.200852);
}

double NNfunction_nn_chi2_chi3::synapse0x40a3ff0() {
   return (neuron0x4096300()*-0.640564);
}

double NNfunction_nn_chi2_chi3::synapse0x40aeaa0() {
   return (neuron0x4096640()*0.534998);
}

double NNfunction_nn_chi2_chi3::synapse0x40aeae0() {
   return (neuron0x4096ba0()*0.731935);
}

double NNfunction_nn_chi2_chi3::synapse0x40a4140() {
   return (neuron0x4096ee0()*-1.08331);
}

double NNfunction_nn_chi2_chi3::synapse0x40a4650() {
   return (neuron0x4097220()*-0.90697);
}

double NNfunction_nn_chi2_chi3::synapse0x40a4690() {
   return (neuron0x4097560()*-0.92261);
}

double NNfunction_nn_chi2_chi3::synapse0x40a46d0() {
   return (neuron0x40978a0()*1.00576);
}

double NNfunction_nn_chi2_chi3::synapse0x40a4920() {
   return (neuron0x4097be0()*-0.451057);
}

double NNfunction_nn_chi2_chi3::synapse0x40a4960() {
   return (neuron0x4097f20()*-0.281711);
}

double NNfunction_nn_chi2_chi3::synapse0x40a4210() {
   return (neuron0x40932d0()*-0.683631);
}

double NNfunction_nn_chi2_chi3::synapse0x40a4250() {
   return (neuron0x4093580()*-2.20506);
}

double NNfunction_nn_chi2_chi3::synapse0x40a4290() {
   return (neuron0x40938c0()*-1.32642);
}

double NNfunction_nn_chi2_chi3::synapse0x40a42d0() {
   return (neuron0x4093c00()*-0.0601544);
}

double NNfunction_nn_chi2_chi3::synapse0x40a4c50() {
   return (neuron0x4093f40()*1.76861);
}

double NNfunction_nn_chi2_chi3::synapse0x40b0fa0() {
   return (neuron0x4094280()*-1.06489);
}

double NNfunction_nn_chi2_chi3::synapse0x40b0fe0() {
   return (neuron0x40945c0()*0.0410725);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1020() {
   return (neuron0x4094900()*-0.319598);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1060() {
   return (neuron0x4094c40()*0.292048);
}

double NNfunction_nn_chi2_chi3::synapse0x40b10a0() {
   return (neuron0x4094f80()*-0.724431);
}

double NNfunction_nn_chi2_chi3::synapse0x40b10e0() {
   return (neuron0x40952c0()*-0.142442);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1120() {
   return (neuron0x4095600()*-2.04187);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1160() {
   return (neuron0x4095940()*0.352188);
}

double NNfunction_nn_chi2_chi3::synapse0x40b11a0() {
   return (neuron0x4095c80()*1.91236);
}

double NNfunction_nn_chi2_chi3::synapse0x40b11e0() {
   return (neuron0x4095fc0()*0.541969);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1220() {
   return (neuron0x4096300()*-0.893772);
}

double NNfunction_nn_chi2_chi3::synapse0x40a4b30() {
   return (neuron0x4096640()*-0.165618);
}

double NNfunction_nn_chi2_chi3::synapse0x40a4b70() {
   return (neuron0x4096ba0()*-0.124605);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1370() {
   return (neuron0x4096ee0()*-0.0428618);
}

double NNfunction_nn_chi2_chi3::synapse0x40b13b0() {
   return (neuron0x4097220()*-0.273205);
}

double NNfunction_nn_chi2_chi3::synapse0x40b13f0() {
   return (neuron0x4097560()*0.0389893);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1430() {
   return (neuron0x40978a0()*-0.481775);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1470() {
   return (neuron0x4097be0()*-0.715887);
}

double NNfunction_nn_chi2_chi3::synapse0x40b14b0() {
   return (neuron0x4097f20()*-1.62265);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1830() {
   return (neuron0x40932d0()*-0.820233);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1870() {
   return (neuron0x4093580()*-0.0138371);
}

double NNfunction_nn_chi2_chi3::synapse0x40b18b0() {
   return (neuron0x40938c0()*-2.32276);
}

double NNfunction_nn_chi2_chi3::synapse0x40b18f0() {
   return (neuron0x4093c00()*-0.0731971);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1930() {
   return (neuron0x4093f40()*0.104821);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1970() {
   return (neuron0x4094280()*-0.121095);
}

double NNfunction_nn_chi2_chi3::synapse0x40b19b0() {
   return (neuron0x40945c0()*-0.0551186);
}

double NNfunction_nn_chi2_chi3::synapse0x40b19f0() {
   return (neuron0x4094900()*-0.00117589);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1a30() {
   return (neuron0x4094c40()*0.112023);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1a70() {
   return (neuron0x4094f80()*-0.142142);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1ab0() {
   return (neuron0x40952c0()*-0.268348);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1af0() {
   return (neuron0x4095600()*0.412023);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1b30() {
   return (neuron0x4095940()*0.152442);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1b70() {
   return (neuron0x4095c80()*0.277299);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1bb0() {
   return (neuron0x4095fc0()*-0.0898116);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1bf0() {
   return (neuron0x4096300()*-0.275873);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1680() {
   return (neuron0x4096640()*-0.0703129);
}

double NNfunction_nn_chi2_chi3::synapse0x40b16c0() {
   return (neuron0x4096ba0()*0.0849163);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1d40() {
   return (neuron0x4096ee0()*-0.133908);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1d80() {
   return (neuron0x4097220()*0.0625011);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1dc0() {
   return (neuron0x4097560()*-0.0727731);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1e00() {
   return (neuron0x40978a0()*0.0508698);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1e40() {
   return (neuron0x4097be0()*-0.0266981);
}

double NNfunction_nn_chi2_chi3::synapse0x40b1e80() {
   return (neuron0x4097f20()*-2.18939);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2200() {
   return (neuron0x40932d0()*0.0245129);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2240() {
   return (neuron0x4093580()*-24.7332);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2280() {
   return (neuron0x40938c0()*-12.3381);
}

double NNfunction_nn_chi2_chi3::synapse0x40b22c0() {
   return (neuron0x4093c00()*0.0233978);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2300() {
   return (neuron0x4093f40()*-0.0252857);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2340() {
   return (neuron0x4094280()*-0.0365168);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2380() {
   return (neuron0x40945c0()*0.00888933);
}

double NNfunction_nn_chi2_chi3::synapse0x40b23c0() {
   return (neuron0x4094900()*0.0507346);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2400() {
   return (neuron0x4094c40()*0.00701856);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2440() {
   return (neuron0x4094f80()*-0.0230399);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2480() {
   return (neuron0x40952c0()*0.0614904);
}

double NNfunction_nn_chi2_chi3::synapse0x40b24c0() {
   return (neuron0x4095600()*-0.0381684);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2500() {
   return (neuron0x4095940()*-0.106939);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2540() {
   return (neuron0x4095c80()*-0.0109542);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2580() {
   return (neuron0x4095fc0()*-0.0817469);
}

double NNfunction_nn_chi2_chi3::synapse0x40b25c0() {
   return (neuron0x4096300()*-0.0242482);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2050() {
   return (neuron0x4096640()*0.0547434);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2090() {
   return (neuron0x4096ba0()*0.0443764);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2710() {
   return (neuron0x4096ee0()*0.0168499);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2750() {
   return (neuron0x4097220()*-0.0190373);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2790() {
   return (neuron0x4097560()*-0.0013545);
}

double NNfunction_nn_chi2_chi3::synapse0x40b27d0() {
   return (neuron0x40978a0()*-0.0147245);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2810() {
   return (neuron0x4097be0()*-0.00685298);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2850() {
   return (neuron0x4097f20()*-0.267331);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2bd0() {
   return (neuron0x40932d0()*3.39602);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2c10() {
   return (neuron0x4093580()*0.474669);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2c50() {
   return (neuron0x40938c0()*0.069289);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2c90() {
   return (neuron0x4093c00()*0.714561);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2cd0() {
   return (neuron0x4093f40()*0.378602);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2d10() {
   return (neuron0x4094280()*0.334349);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2d50() {
   return (neuron0x40945c0()*0.659523);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2d90() {
   return (neuron0x4094900()*0.00415547);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2dd0() {
   return (neuron0x4094c40()*-1.43457);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2e10() {
   return (neuron0x4094f80()*-0.11786);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2e50() {
   return (neuron0x40952c0()*0.415533);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2e90() {
   return (neuron0x4095600()*-1.68604);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2ed0() {
   return (neuron0x4095940()*0.807219);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2f10() {
   return (neuron0x4095c80()*0.657146);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2f50() {
   return (neuron0x4095fc0()*0.290563);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2f90() {
   return (neuron0x4096300()*-0.67838);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2a20() {
   return (neuron0x4096640()*0.162742);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2a60() {
   return (neuron0x4096ba0()*0.212216);
}

double NNfunction_nn_chi2_chi3::synapse0x40b30e0() {
   return (neuron0x4096ee0()*-1.03547);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3120() {
   return (neuron0x4097220()*0.489133);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3160() {
   return (neuron0x4097560()*-0.450491);
}

double NNfunction_nn_chi2_chi3::synapse0x40b31a0() {
   return (neuron0x40978a0()*0.310536);
}

double NNfunction_nn_chi2_chi3::synapse0x40b31e0() {
   return (neuron0x4097be0()*-0.253456);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3220() {
   return (neuron0x4097f20()*-1.1625);
}

double NNfunction_nn_chi2_chi3::synapse0x40b35a0() {
   return (neuron0x40932d0()*0.257686);
}

double NNfunction_nn_chi2_chi3::synapse0x40b35e0() {
   return (neuron0x4093580()*-0.0139682);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3620() {
   return (neuron0x40938c0()*-0.839365);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3660() {
   return (neuron0x4093c00()*0.186356);
}

double NNfunction_nn_chi2_chi3::synapse0x40b36a0() {
   return (neuron0x4093f40()*-0.39772);
}

double NNfunction_nn_chi2_chi3::synapse0x40b36e0() {
   return (neuron0x4094280()*0.260443);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3720() {
   return (neuron0x40945c0()*-0.65872);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3760() {
   return (neuron0x4094900()*1.29974);
}

double NNfunction_nn_chi2_chi3::synapse0x40b37a0() {
   return (neuron0x4094c40()*0.700631);
}

double NNfunction_nn_chi2_chi3::synapse0x40b37e0() {
   return (neuron0x4094f80()*-1.18924);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3820() {
   return (neuron0x40952c0()*-0.0696234);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3860() {
   return (neuron0x4095600()*0.670456);
}

double NNfunction_nn_chi2_chi3::synapse0x40b38a0() {
   return (neuron0x4095940()*-1.46801);
}

double NNfunction_nn_chi2_chi3::synapse0x40b38e0() {
   return (neuron0x4095c80()*-1.44825);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3920() {
   return (neuron0x4095fc0()*-0.199991);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3960() {
   return (neuron0x4096300()*-0.107454);
}

double NNfunction_nn_chi2_chi3::synapse0x40b33f0() {
   return (neuron0x4096640()*-0.681277);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3430() {
   return (neuron0x4096ba0()*-1.41546);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3ab0() {
   return (neuron0x4096ee0()*0.273336);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3af0() {
   return (neuron0x4097220()*1.25723);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3b30() {
   return (neuron0x4097560()*-0.63096);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3b70() {
   return (neuron0x40978a0()*0.957826);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3bb0() {
   return (neuron0x4097be0()*0.86163);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3bf0() {
   return (neuron0x4097f20()*-1.61827);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3f70() {
   return (neuron0x40932d0()*0.00950291);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3fb0() {
   return (neuron0x4093580()*0.0200828);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3ff0() {
   return (neuron0x40938c0()*-0.211969);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4030() {
   return (neuron0x4093c00()*-0.00320836);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4070() {
   return (neuron0x4093f40()*-0.00886078);
}

double NNfunction_nn_chi2_chi3::synapse0x40b40b0() {
   return (neuron0x4094280()*0.00667263);
}

double NNfunction_nn_chi2_chi3::synapse0x40b40f0() {
   return (neuron0x40945c0()*0.00247839);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4130() {
   return (neuron0x4094900()*-0.00104288);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4170() {
   return (neuron0x4094c40()*-0.0115382);
}

double NNfunction_nn_chi2_chi3::synapse0x40b41b0() {
   return (neuron0x4094f80()*0.00779178);
}

double NNfunction_nn_chi2_chi3::synapse0x40b41f0() {
   return (neuron0x40952c0()*0.00779517);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4230() {
   return (neuron0x4095600()*-0.0133826);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4270() {
   return (neuron0x4095940()*-0.00666393);
}

double NNfunction_nn_chi2_chi3::synapse0x40b42b0() {
   return (neuron0x4095c80()*-0.016167);
}

double NNfunction_nn_chi2_chi3::synapse0x40b42f0() {
   return (neuron0x4095fc0()*-0.00159821);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4330() {
   return (neuron0x4096300()*0.00152762);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3dc0() {
   return (neuron0x4096640()*-0.00181722);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3e00() {
   return (neuron0x4096ba0()*0.000646576);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4480() {
   return (neuron0x4096ee0()*0.0117547);
}

double NNfunction_nn_chi2_chi3::synapse0x40b44c0() {
   return (neuron0x4097220()*-0.00130716);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4500() {
   return (neuron0x4097560()*6.87513e-05);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4540() {
   return (neuron0x40978a0()*-0.00382487);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4580() {
   return (neuron0x4097be0()*-0.0025881);
}

double NNfunction_nn_chi2_chi3::synapse0x40b45c0() {
   return (neuron0x4097f20()*1.20197);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4940() {
   return (neuron0x40932d0()*0.00199861);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4980() {
   return (neuron0x4093580()*0.00438196);
}

double NNfunction_nn_chi2_chi3::synapse0x40b49c0() {
   return (neuron0x40938c0()*-0.343266);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4a00() {
   return (neuron0x4093c00()*0.00322319);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4a40() {
   return (neuron0x4093f40()*-0.0171926);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4a80() {
   return (neuron0x4094280()*0.000875852);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4ac0() {
   return (neuron0x40945c0()*-0.013264);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4b00() {
   return (neuron0x4094900()*0.0115498);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4b40() {
   return (neuron0x4094c40()*-0.00731903);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4b80() {
   return (neuron0x4094f80()*0.017044);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4bc0() {
   return (neuron0x40952c0()*0.00209856);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4c00() {
   return (neuron0x4095600()*-0.0472085);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4c40() {
   return (neuron0x4095940()*0.0341178);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4c80() {
   return (neuron0x4095c80()*0.00800261);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4cc0() {
   return (neuron0x4095fc0()*0.00577753);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4d00() {
   return (neuron0x4096300()*0.009038);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4790() {
   return (neuron0x4096640()*0.0145939);
}

double NNfunction_nn_chi2_chi3::synapse0x40b47d0() {
   return (neuron0x4096ba0()*-0.00457086);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4e50() {
   return (neuron0x4096ee0()*-0.00708758);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4e90() {
   return (neuron0x4097220()*0.0126915);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4ed0() {
   return (neuron0x4097560()*0.0115033);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4f10() {
   return (neuron0x40978a0()*0.00475332);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4f50() {
   return (neuron0x4097be0()*-0.0169609);
}

double NNfunction_nn_chi2_chi3::synapse0x40b4f90() {
   return (neuron0x4097f20()*-1.53065);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5310() {
   return (neuron0x40932d0()*0.0761161);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5350() {
   return (neuron0x4093580()*-9.68393);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5390() {
   return (neuron0x40938c0()*0.24121);
}

double NNfunction_nn_chi2_chi3::synapse0x40b53d0() {
   return (neuron0x4093c00()*-0.0459008);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5410() {
   return (neuron0x4093f40()*-0.0727467);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5450() {
   return (neuron0x4094280()*-0.00146781);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5490() {
   return (neuron0x40945c0()*0.0349679);
}

double NNfunction_nn_chi2_chi3::synapse0x40b54d0() {
   return (neuron0x4094900()*-0.0126955);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5510() {
   return (neuron0x4094c40()*0.01152);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5550() {
   return (neuron0x4094f80()*-0.00118135);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5590() {
   return (neuron0x40952c0()*0.0523288);
}

double NNfunction_nn_chi2_chi3::synapse0x40b55d0() {
   return (neuron0x4095600()*-0.0197498);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5610() {
   return (neuron0x4095940()*0.0789113);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5650() {
   return (neuron0x4095c80()*-0.0504212);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5690() {
   return (neuron0x4095fc0()*0.0192917);
}

double NNfunction_nn_chi2_chi3::synapse0x40b56d0() {
   return (neuron0x4096300()*-0.00182448);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5160() {
   return (neuron0x4096640()*0.02572);
}

double NNfunction_nn_chi2_chi3::synapse0x40b51a0() {
   return (neuron0x4096ba0()*0.0128092);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5820() {
   return (neuron0x4096ee0()*-0.000282253);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5860() {
   return (neuron0x4097220()*0.0481677);
}

double NNfunction_nn_chi2_chi3::synapse0x40b58a0() {
   return (neuron0x4097560()*0.078867);
}

double NNfunction_nn_chi2_chi3::synapse0x40b58e0() {
   return (neuron0x40978a0()*-0.0276551);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5920() {
   return (neuron0x4097be0()*-0.00977187);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5960() {
   return (neuron0x4097f20()*5.05031);
}

double NNfunction_nn_chi2_chi3::synapse0x409e410() {
   return (neuron0x40932d0()*-0.00277509);
}

double NNfunction_nn_chi2_chi3::synapse0x409e450() {
   return (neuron0x4093580()*-0.054628);
}

double NNfunction_nn_chi2_chi3::synapse0x409e490() {
   return (neuron0x40938c0()*0.951808);
}

double NNfunction_nn_chi2_chi3::synapse0x409e4d0() {
   return (neuron0x4093c00()*-0.00571678);
}

double NNfunction_nn_chi2_chi3::synapse0x409e510() {
   return (neuron0x4093f40()*0.0178197);
}

double NNfunction_nn_chi2_chi3::synapse0x409e550() {
   return (neuron0x4094280()*0.0219094);
}

double NNfunction_nn_chi2_chi3::synapse0x409e590() {
   return (neuron0x40945c0()*-0.0199688);
}

double NNfunction_nn_chi2_chi3::synapse0x409e5d0() {
   return (neuron0x4094900()*-0.0124335);
}

double NNfunction_nn_chi2_chi3::synapse0x40b60f0() {
   return (neuron0x4094c40()*0.0281541);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6130() {
   return (neuron0x4094f80()*0.0242851);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6170() {
   return (neuron0x40952c0()*0.0218908);
}

double NNfunction_nn_chi2_chi3::synapse0x40b61b0() {
   return (neuron0x4095600()*0.0557593);
}

double NNfunction_nn_chi2_chi3::synapse0x40b61f0() {
   return (neuron0x4095940()*-0.0153306);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6230() {
   return (neuron0x4095c80()*-0.0585952);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6270() {
   return (neuron0x4095fc0()*0.163872);
}

double NNfunction_nn_chi2_chi3::synapse0x40b62b0() {
   return (neuron0x4096300()*-0.0163777);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5b30() {
   return (neuron0x4096640()*0.0308563);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5b70() {
   return (neuron0x4096ba0()*-0.0147361);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6400() {
   return (neuron0x4096ee0()*-0.0144081);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6440() {
   return (neuron0x4097220()*0.0143902);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6480() {
   return (neuron0x4097560()*-0.0534186);
}

double NNfunction_nn_chi2_chi3::synapse0x40b64c0() {
   return (neuron0x40978a0()*0.013708);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6500() {
   return (neuron0x4097be0()*-0.0268648);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6540() {
   return (neuron0x4097f20()*-0.194782);
}

double NNfunction_nn_chi2_chi3::synapse0x40b68c0() {
   return (neuron0x40932d0()*0.620592);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6900() {
   return (neuron0x4093580()*-0.657848);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6940() {
   return (neuron0x40938c0()*-0.716744);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6980() {
   return (neuron0x4093c00()*-0.05381);
}

double NNfunction_nn_chi2_chi3::synapse0x40b69c0() {
   return (neuron0x4093f40()*-0.46943);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6a00() {
   return (neuron0x4094280()*-0.383574);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6a40() {
   return (neuron0x40945c0()*-1.68658);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6a80() {
   return (neuron0x4094900()*0.511237);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6ac0() {
   return (neuron0x4094c40()*0.287454);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6b00() {
   return (neuron0x4094f80()*-0.842032);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6b40() {
   return (neuron0x40952c0()*1.02956);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6b80() {
   return (neuron0x4095600()*-0.191845);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6bc0() {
   return (neuron0x4095940()*0.310124);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6c00() {
   return (neuron0x4095c80()*-0.751634);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6c40() {
   return (neuron0x4095fc0()*-1.21285);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6c80() {
   return (neuron0x4096300()*-0.838426);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6710() {
   return (neuron0x4096640()*0.300878);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6750() {
   return (neuron0x4096ba0()*1.02026);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6dd0() {
   return (neuron0x4096ee0()*1.22324);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6e10() {
   return (neuron0x4097220()*1.1208);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6e50() {
   return (neuron0x4097560()*0.612921);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6e90() {
   return (neuron0x40978a0()*0.439816);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6ed0() {
   return (neuron0x4097be0()*-0.157397);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6f10() {
   return (neuron0x4097f20()*1.38156);
}

double NNfunction_nn_chi2_chi3::synapse0x40b7290() {
   return (neuron0x40932d0()*0.0154424);
}

double NNfunction_nn_chi2_chi3::synapse0x40b72d0() {
   return (neuron0x4093580()*-0.0014089);
}

double NNfunction_nn_chi2_chi3::synapse0x40b7310() {
   return (neuron0x40938c0()*6.16035);
}

double NNfunction_nn_chi2_chi3::synapse0x40b7350() {
   return (neuron0x4093c00()*-0.00688373);
}

double NNfunction_nn_chi2_chi3::synapse0x40b7390() {
   return (neuron0x4093f40()*-0.012187);
}

double NNfunction_nn_chi2_chi3::synapse0x40b73d0() {
   return (neuron0x4094280()*0.0226956);
}

double NNfunction_nn_chi2_chi3::synapse0x40b7410() {
   return (neuron0x40945c0()*0.00860655);
}

double NNfunction_nn_chi2_chi3::synapse0x40b7450() {
   return (neuron0x4094900()*0.000667989);
}

double NNfunction_nn_chi2_chi3::synapse0x40b7490() {
   return (neuron0x4094c40()*-0.00511307);
}

double NNfunction_nn_chi2_chi3::synapse0x40b74d0() {
   return (neuron0x4094f80()*0.0340854);
}

double NNfunction_nn_chi2_chi3::synapse0x40b7510() {
   return (neuron0x40952c0()*-0.00975149);
}

double NNfunction_nn_chi2_chi3::synapse0x40b7550() {
   return (neuron0x4095600()*-0.0704116);
}

double NNfunction_nn_chi2_chi3::synapse0x40b7590() {
   return (neuron0x4095940()*0.0286328);
}

double NNfunction_nn_chi2_chi3::synapse0x40b75d0() {
   return (neuron0x4095c80()*-0.032924);
}

double NNfunction_nn_chi2_chi3::synapse0x40b7610() {
   return (neuron0x4095fc0()*0.0109426);
}

double NNfunction_nn_chi2_chi3::synapse0x40b7650() {
   return (neuron0x4096300()*0.0089331);
}

double NNfunction_nn_chi2_chi3::synapse0x40b70e0() {
   return (neuron0x4096640()*0.032057);
}

double NNfunction_nn_chi2_chi3::synapse0x40b7120() {
   return (neuron0x4096ba0()*-0.00705228);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7c50() {
   return (neuron0x4096ee0()*-0.00337507);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7c90() {
   return (neuron0x4097220()*0.0183193);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7cd0() {
   return (neuron0x4097560()*0.00563905);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7d10() {
   return (neuron0x40978a0()*-0.00154684);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7d50() {
   return (neuron0x4097be0()*-0.0107928);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7d90() {
   return (neuron0x4097f20()*4.0716);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8110() {
   return (neuron0x40932d0()*-0.0216849);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8150() {
   return (neuron0x4093580()*14.3765);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8190() {
   return (neuron0x40938c0()*-0.223697);
}

double NNfunction_nn_chi2_chi3::synapse0x40a81d0() {
   return (neuron0x4093c00()*-0.0125229);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8210() {
   return (neuron0x4093f40()*-0.00795709);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8250() {
   return (neuron0x4094280()*-0.00420425);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8290() {
   return (neuron0x40945c0()*0.00542841);
}

double NNfunction_nn_chi2_chi3::synapse0x40a82d0() {
   return (neuron0x4094900()*0.00220783);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8310() {
   return (neuron0x4094c40()*-0.0140043);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8350() {
   return (neuron0x4094f80()*-0.0167965);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8390() {
   return (neuron0x40952c0()*-0.00945034);
}

double NNfunction_nn_chi2_chi3::synapse0x40a83d0() {
   return (neuron0x4095600()*-0.0490366);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8410() {
   return (neuron0x4095940()*-0.000109271);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8450() {
   return (neuron0x4095c80()*-0.0081833);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8490() {
   return (neuron0x4095fc0()*0.00522965);
}

double NNfunction_nn_chi2_chi3::synapse0x40a84d0() {
   return (neuron0x4096300()*0.0194792);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7f60() {
   return (neuron0x4096640()*0.00826722);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7fa0() {
   return (neuron0x4096ba0()*-0.00039225);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8620() {
   return (neuron0x4096ee0()*0.0245417);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8660() {
   return (neuron0x4097220()*0.00163534);
}

double NNfunction_nn_chi2_chi3::synapse0x40a86a0() {
   return (neuron0x4097560()*-0.00804797);
}

double NNfunction_nn_chi2_chi3::synapse0x40a86e0() {
   return (neuron0x40978a0()*0.000509896);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8720() {
   return (neuron0x4097be0()*0.0063093);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8760() {
   return (neuron0x4097f20()*4.87195);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8ae0() {
   return (neuron0x40932d0()*0.776547);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8b20() {
   return (neuron0x4093580()*-0.21934);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8b60() {
   return (neuron0x40938c0()*-2.53479);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8ba0() {
   return (neuron0x4093c00()*0.331721);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8be0() {
   return (neuron0x4093f40()*-0.572833);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8c20() {
   return (neuron0x4094280()*-0.562005);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8c60() {
   return (neuron0x40945c0()*-0.406727);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8ca0() {
   return (neuron0x4094900()*0.107577);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8ce0() {
   return (neuron0x4094c40()*0.142752);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8d20() {
   return (neuron0x4094f80()*-0.269395);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8d60() {
   return (neuron0x40952c0()*-0.613795);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8da0() {
   return (neuron0x4095600()*-1.76161);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8de0() {
   return (neuron0x4095940()*0.840491);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8e20() {
   return (neuron0x4095c80()*-0.168709);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8e60() {
   return (neuron0x4095fc0()*1.28091);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8ea0() {
   return (neuron0x4096300()*-1.30233);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8930() {
   return (neuron0x4096640()*1.33385);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8970() {
   return (neuron0x4096ba0()*1.13863);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8ff0() {
   return (neuron0x4096ee0()*0.127983);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9030() {
   return (neuron0x4097220()*0.0990627);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9070() {
   return (neuron0x4097560()*-0.490783);
}

double NNfunction_nn_chi2_chi3::synapse0x40a90b0() {
   return (neuron0x40978a0()*-1.09703);
}

double NNfunction_nn_chi2_chi3::synapse0x40a90f0() {
   return (neuron0x4097be0()*-0.120677);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9130() {
   return (neuron0x4097f20()*-0.505743);
}

double NNfunction_nn_chi2_chi3::synapse0x40a94b0() {
   return (neuron0x40932d0()*0.0064529);
}

double NNfunction_nn_chi2_chi3::synapse0x40a94f0() {
   return (neuron0x4093580()*-23.3278);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9530() {
   return (neuron0x40938c0()*11.3066);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9570() {
   return (neuron0x4093c00()*0.00754484);
}

double NNfunction_nn_chi2_chi3::synapse0x40a95b0() {
   return (neuron0x4093f40()*0.00840917);
}

double NNfunction_nn_chi2_chi3::synapse0x40a95f0() {
   return (neuron0x4094280()*-0.043331);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9630() {
   return (neuron0x40945c0()*0.0252168);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9670() {
   return (neuron0x4094900()*0.00884958);
}

double NNfunction_nn_chi2_chi3::synapse0x40a96b0() {
   return (neuron0x4094c40()*-0.0199387);
}

double NNfunction_nn_chi2_chi3::synapse0x40a96f0() {
   return (neuron0x4094f80()*-0.0307307);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9730() {
   return (neuron0x40952c0()*-0.00692556);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9770() {
   return (neuron0x4095600()*0.160671);
}

double NNfunction_nn_chi2_chi3::synapse0x40a97b0() {
   return (neuron0x4095940()*0.0167376);
}

double NNfunction_nn_chi2_chi3::synapse0x40a97f0() {
   return (neuron0x4095c80()*-0.000697302);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9830() {
   return (neuron0x4095fc0()*-0.0241102);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9870() {
   return (neuron0x4096300()*-0.024962);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9300() {
   return (neuron0x4096640()*0.0223358);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9340() {
   return (neuron0x4096ba0()*-0.00301635);
}

double NNfunction_nn_chi2_chi3::synapse0x40a99c0() {
   return (neuron0x4096ee0()*0.041948);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9a00() {
   return (neuron0x4097220()*0.000424424);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9a40() {
   return (neuron0x4097560()*-0.00946879);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9a80() {
   return (neuron0x40978a0()*0.00670241);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9ac0() {
   return (neuron0x4097be0()*0.0143385);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9b00() {
   return (neuron0x4097f20()*-0.348267);
}

double NNfunction_nn_chi2_chi3::synapse0x40bb9d0() {
   return (neuron0x40932d0()*0.0425648);
}

double NNfunction_nn_chi2_chi3::synapse0x40bba10() {
   return (neuron0x4093580()*-3.83959);
}

double NNfunction_nn_chi2_chi3::synapse0x40bba50() {
   return (neuron0x40938c0()*-1.43356);
}

double NNfunction_nn_chi2_chi3::synapse0x40bba90() {
   return (neuron0x4093c00()*0.265903);
}

double NNfunction_nn_chi2_chi3::synapse0x40bbad0() {
   return (neuron0x4093f40()*0.075167);
}

double NNfunction_nn_chi2_chi3::synapse0x40bbb10() {
   return (neuron0x4094280()*-0.234528);
}

double NNfunction_nn_chi2_chi3::synapse0x40bbb50() {
   return (neuron0x40945c0()*0.0147106);
}

double NNfunction_nn_chi2_chi3::synapse0x40bbb90() {
   return (neuron0x4094900()*0.00398236);
}

double NNfunction_nn_chi2_chi3::synapse0x40bbbd0() {
   return (neuron0x4094c40()*-0.412633);
}

double NNfunction_nn_chi2_chi3::synapse0x40bbc10() {
   return (neuron0x4094f80()*0.139414);
}

double NNfunction_nn_chi2_chi3::synapse0x40bbc50() {
   return (neuron0x40952c0()*0.0856126);
}

double NNfunction_nn_chi2_chi3::synapse0x40bbc90() {
   return (neuron0x4095600()*-4.92098);
}

double NNfunction_nn_chi2_chi3::synapse0x40bbcd0() {
   return (neuron0x4095940()*-0.0501021);
}

double NNfunction_nn_chi2_chi3::synapse0x40bbd10() {
   return (neuron0x4095c80()*-0.1531);
}

double NNfunction_nn_chi2_chi3::synapse0x40bbd50() {
   return (neuron0x4095fc0()*0.633989);
}

double NNfunction_nn_chi2_chi3::synapse0x40bbd90() {
   return (neuron0x4096300()*0.592614);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9b40() {
   return (neuron0x4096640()*0.300222);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9b80() {
   return (neuron0x4096ba0()*0.325428);
}

double NNfunction_nn_chi2_chi3::synapse0x40bbee0() {
   return (neuron0x4096ee0()*-0.106334);
}

double NNfunction_nn_chi2_chi3::synapse0x40bbf20() {
   return (neuron0x4097220()*-0.573011);
}

double NNfunction_nn_chi2_chi3::synapse0x40bbf60() {
   return (neuron0x4097560()*0.397331);
}

double NNfunction_nn_chi2_chi3::synapse0x40bbfa0() {
   return (neuron0x40978a0()*-0.0152586);
}

double NNfunction_nn_chi2_chi3::synapse0x40bbfe0() {
   return (neuron0x4097be0()*0.242042);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc020() {
   return (neuron0x4097f20()*-0.827373);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc3a0() {
   return (neuron0x40932d0()*0.0262998);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc3e0() {
   return (neuron0x4093580()*-0.00430562);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc420() {
   return (neuron0x40938c0()*1.35743);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc460() {
   return (neuron0x4093c00()*0.00741638);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc4a0() {
   return (neuron0x4093f40()*-0.00439343);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc4e0() {
   return (neuron0x4094280()*0.00079091);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc520() {
   return (neuron0x40945c0()*-0.00947522);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc560() {
   return (neuron0x4094900()*0.0442465);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc5a0() {
   return (neuron0x4094c40()*0.0010023);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc5e0() {
   return (neuron0x4094f80()*0.0310633);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc620() {
   return (neuron0x40952c0()*0.00194725);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc660() {
   return (neuron0x4095600()*0.518969);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc6a0() {
   return (neuron0x4095940()*0.0141702);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc6e0() {
   return (neuron0x4095c80()*-0.00291167);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc720() {
   return (neuron0x4095fc0()*-0.0124177);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc760() {
   return (neuron0x4096300()*-0.00559235);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc1f0() {
   return (neuron0x4096640()*-0.00591386);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc230() {
   return (neuron0x4096ba0()*-0.00181966);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc8b0() {
   return (neuron0x4096ee0()*0.0058073);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc8f0() {
   return (neuron0x4097220()*0.00258019);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc930() {
   return (neuron0x4097560()*-0.00401138);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc970() {
   return (neuron0x40978a0()*0.00249127);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc9b0() {
   return (neuron0x4097be0()*0.00103299);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc9f0() {
   return (neuron0x4097f20()*-1.63246);
}

double NNfunction_nn_chi2_chi3::synapse0x40bcd70() {
   return (neuron0x40932d0()*-0.81283);
}

double NNfunction_nn_chi2_chi3::synapse0x40bcdb0() {
   return (neuron0x4093580()*-1.4138);
}

double NNfunction_nn_chi2_chi3::synapse0x40bcdf0() {
   return (neuron0x40938c0()*-2.18868);
}

double NNfunction_nn_chi2_chi3::synapse0x40bce30() {
   return (neuron0x4093c00()*-0.955054);
}

double NNfunction_nn_chi2_chi3::synapse0x40bce70() {
   return (neuron0x4093f40()*0.144718);
}

double NNfunction_nn_chi2_chi3::synapse0x40bceb0() {
   return (neuron0x4094280()*1.87229);
}

double NNfunction_nn_chi2_chi3::synapse0x40bcef0() {
   return (neuron0x40945c0()*0.574231);
}

double NNfunction_nn_chi2_chi3::synapse0x40bcf30() {
   return (neuron0x4094900()*-0.191594);
}

double NNfunction_nn_chi2_chi3::synapse0x40bcf70() {
   return (neuron0x4094c40()*0.294684);
}

double NNfunction_nn_chi2_chi3::synapse0x40bcfb0() {
   return (neuron0x4094f80()*-0.962223);
}

double NNfunction_nn_chi2_chi3::synapse0x40bcff0() {
   return (neuron0x40952c0()*-0.0881442);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd030() {
   return (neuron0x4095600()*-1.26166);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd070() {
   return (neuron0x4095940()*-0.590982);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd0b0() {
   return (neuron0x4095c80()*-0.117287);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd0f0() {
   return (neuron0x4095fc0()*-1.79);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd130() {
   return (neuron0x4096300()*1.23799);
}

double NNfunction_nn_chi2_chi3::synapse0x40bcbc0() {
   return (neuron0x4096640()*0.729603);
}

double NNfunction_nn_chi2_chi3::synapse0x40bcc00() {
   return (neuron0x4096ba0()*0.862704);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd280() {
   return (neuron0x4096ee0()*-0.559389);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd2c0() {
   return (neuron0x4097220()*-0.91072);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd300() {
   return (neuron0x4097560()*1.24556);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd340() {
   return (neuron0x40978a0()*0.945537);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd380() {
   return (neuron0x4097be0()*-1.92871);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd3c0() {
   return (neuron0x4097f20()*-1.19478);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd740() {
   return (neuron0x40932d0()*-0.151365);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd780() {
   return (neuron0x4093580()*-0.933711);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd7c0() {
   return (neuron0x40938c0()*-0.811843);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd800() {
   return (neuron0x4093c00()*0.0331933);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd840() {
   return (neuron0x4093f40()*-0.318564);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd880() {
   return (neuron0x4094280()*0.16594);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd8c0() {
   return (neuron0x40945c0()*-0.65255);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd900() {
   return (neuron0x4094900()*-0.880508);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd940() {
   return (neuron0x4094c40()*-0.529772);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd980() {
   return (neuron0x4094f80()*-0.281221);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd9c0() {
   return (neuron0x40952c0()*-0.0469037);
}

double NNfunction_nn_chi2_chi3::synapse0x40bda00() {
   return (neuron0x4095600()*1.39653);
}

double NNfunction_nn_chi2_chi3::synapse0x40bda40() {
   return (neuron0x4095940()*-0.0633272);
}

double NNfunction_nn_chi2_chi3::synapse0x40bda80() {
   return (neuron0x4095c80()*0.132699);
}

double NNfunction_nn_chi2_chi3::synapse0x40bdac0() {
   return (neuron0x4095fc0()*1.31876);
}

double NNfunction_nn_chi2_chi3::synapse0x40bdb00() {
   return (neuron0x4096300()*0.0722245);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd590() {
   return (neuron0x4096640()*-0.0217891);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd5d0() {
   return (neuron0x4096ba0()*0.124117);
}

double NNfunction_nn_chi2_chi3::synapse0x40bdc50() {
   return (neuron0x4096ee0()*0.622217);
}

double NNfunction_nn_chi2_chi3::synapse0x40bdc90() {
   return (neuron0x4097220()*0.326777);
}

double NNfunction_nn_chi2_chi3::synapse0x40bdcd0() {
   return (neuron0x4097560()*0.053204);
}

double NNfunction_nn_chi2_chi3::synapse0x40bdd10() {
   return (neuron0x40978a0()*-0.289755);
}

double NNfunction_nn_chi2_chi3::synapse0x40bdd50() {
   return (neuron0x4097be0()*-0.178566);
}

double NNfunction_nn_chi2_chi3::synapse0x40bdd90() {
   return (neuron0x4097f20()*-0.329838);
}

double NNfunction_nn_chi2_chi3::synapse0x3e5db70() {
   return (neuron0x4098390()*7.22352);
}

double NNfunction_nn_chi2_chi3::synapse0x3e5dbb0() {
   return (neuron0x4098bd0()*-0.00135093);
}

double NNfunction_nn_chi2_chi3::synapse0x409a740() {
   return (neuron0x40996b0()*0.402058);
}

double NNfunction_nn_chi2_chi3::synapse0x409a780() {
   return (neuron0x4099150()*-0.523224);
}

double NNfunction_nn_chi2_chi3::synapse0x409c210() {
   return (neuron0x409a490()*0.748878);
}

double NNfunction_nn_chi2_chi3::synapse0x409c250() {
   return (neuron0x409bf60()*0.244769);
}

double NNfunction_nn_chi2_chi3::synapse0x409cfe0() {
   return (neuron0x409cd30()*-1.6736);
}

double NNfunction_nn_chi2_chi3::synapse0x409d020() {
   return (neuron0x409d700()*-3.31803);
}

double NNfunction_nn_chi2_chi3::synapse0x409d9b0() {
   return (neuron0x409e0d0()*3.87817);
}

double NNfunction_nn_chi2_chi3::synapse0x409d9f0() {
   return (neuron0x409ebb0()*0.194584);
}

double NNfunction_nn_chi2_chi3::synapse0x409e380() {
   return (neuron0x409f580()*1.47227);
}

double NNfunction_nn_chi2_chi3::synapse0x409e3c0() {
   return (neuron0x409c660()*-0.355042);
}

double NNfunction_nn_chi2_chi3::synapse0x409ee60() {
   return (neuron0x40a1130()*-0.701385);
}

double NNfunction_nn_chi2_chi3::synapse0x409eea0() {
   return (neuron0x40a1b00()*0.150473);
}

double NNfunction_nn_chi2_chi3::synapse0x409f830() {
   return (neuron0x40a24d0()*-3.18058);
}

double NNfunction_nn_chi2_chi3::synapse0x409f870() {
   return (neuron0x40a2ea0()*2.43147);
}

double NNfunction_nn_chi2_chi3::synapse0x409c910() {
   return (neuron0x40a4cb0()*0.674858);
}

double NNfunction_nn_chi2_chi3::synapse0x409c950() {
   return (neuron0x40a4f90()*3.33775);
}

double NNfunction_nn_chi2_chi3::synapse0x40a13e0() {
   return (neuron0x40a5960()*-0.279373);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1420() {
   return (neuron0x40a6330()*-0.566715);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1db0() {
   return (neuron0x40a6d00()*-2.03664);
}

double NNfunction_nn_chi2_chi3::synapse0x40a1df0() {
   return (neuron0x40a76d0()*1.10857);
}

double NNfunction_nn_chi2_chi3::synapse0x40a2780() {
   return (neuron0x40a0220()*0.555642);
}

double NNfunction_nn_chi2_chi3::synapse0x40a27c0() {
   return (neuron0x40a0bf0()*4.43537);
}

double NNfunction_nn_chi2_chi3::synapse0x40a3150() {
   return (neuron0x40aa460()*-1.52592);
}

double NNfunction_nn_chi2_chi3::synapse0x40a3190() {
   return (neuron0x40aae30()*-1.58679);
}

double NNfunction_nn_chi2_chi3::synapse0x40961e0() {
   return (neuron0x40ab800()*0.400746);
}

double NNfunction_nn_chi2_chi3::synapse0x4096220() {
   return (neuron0x40ac1d0()*5.59912);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5240() {
   return (neuron0x40acba0()*3.14795);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5280() {
   return (neuron0x40ad570()*1.19704);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5c10() {
   return (neuron0x40adf40()*-1.41541);
}

double NNfunction_nn_chi2_chi3::synapse0x40a5c50() {
   return (neuron0x40ae910()*-0.384929);
}

double NNfunction_nn_chi2_chi3::synapse0x40a65e0() {
   return (neuron0x40a49a0()*-0.424544);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6620() {
   return (neuron0x40b14f0()*-4.4495);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6fb0() {
   return (neuron0x40b1ec0()*-5.5305);
}

double NNfunction_nn_chi2_chi3::synapse0x40a6ff0() {
   return (neuron0x40b2890()*0.399399);
}

double NNfunction_nn_chi2_chi3::synapse0x40a7980() {
   return (neuron0x40b3260()*-0.27644);
}

double NNfunction_nn_chi2_chi3::synapse0x40a79c0() {
   return (neuron0x40b3c30()*-6.35536);
}

double NNfunction_nn_chi2_chi3::synapse0x40a04d0() {
   return (neuron0x40b4600()*-4.25598);
}

double NNfunction_nn_chi2_chi3::synapse0x40a0510() {
   return (neuron0x40b4fd0()*4.09618);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9d80() {
   return (neuron0x40b59a0()*-1.92656);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9dc0() {
   return (neuron0x40b6580()*0.390414);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa710() {
   return (neuron0x40b6f50()*1.03887);
}

double NNfunction_nn_chi2_chi3::synapse0x40aa750() {
   return (neuron0x40a7dd0()*-6.42932);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab0e0() {
   return (neuron0x40a87a0()*0.403911);
}

double NNfunction_nn_chi2_chi3::synapse0x40ab120() {
   return (neuron0x40a9170()*3.51314);
}

double NNfunction_nn_chi2_chi3::synapse0x40abab0() {
   return (neuron0x40bb7b0()*-0.268253);
}

double NNfunction_nn_chi2_chi3::synapse0x40abaf0() {
   return (neuron0x40bc060()*1.41577);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac480() {
   return (neuron0x40bca30()*0.32177);
}

double NNfunction_nn_chi2_chi3::synapse0x40ac4c0() {
   return (neuron0x40bd400()*-0.612579);
}

double NNfunction_nn_chi2_chi3::synapse0x40aebc0() {
   return (neuron0x4098390()*-0.39323);
}

double NNfunction_nn_chi2_chi3::synapse0x40aec00() {
   return (neuron0x4098bd0()*-0.904152);
}

double NNfunction_nn_chi2_chi3::synapse0x40a4180() {
   return (neuron0x40996b0()*0.0152819);
}

double NNfunction_nn_chi2_chi3::synapse0x40a41c0() {
   return (neuron0x4099150()*-0.022607);
}

double NNfunction_nn_chi2_chi3::synapse0x40b17a0() {
   return (neuron0x409a490()*-0.473936);
}

double NNfunction_nn_chi2_chi3::synapse0x40b17e0() {
   return (neuron0x409bf60()*-0.0030672);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2170() {
   return (neuron0x409cd30()*0.327707);
}

double NNfunction_nn_chi2_chi3::synapse0x40b21b0() {
   return (neuron0x409d700()*1.26747);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2b40() {
   return (neuron0x409e0d0()*-0.9056);
}

double NNfunction_nn_chi2_chi3::synapse0x40b2b80() {
   return (neuron0x409ebb0()*0.0104257);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3510() {
   return (neuron0x409f580()*-0.139561);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3550() {
   return (neuron0x409c660()*-0.0619572);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3ee0() {
   return (neuron0x40a1130()*-1.05867);
}

double NNfunction_nn_chi2_chi3::synapse0x40b3f20() {
   return (neuron0x40a1b00()*-0.516422);
}

double NNfunction_nn_chi2_chi3::synapse0x40b48b0() {
   return (neuron0x40a24d0()*-3.73379);
}

double NNfunction_nn_chi2_chi3::synapse0x40b48f0() {
   return (neuron0x40a2ea0()*0.318767);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5280() {
   return (neuron0x40a4cb0()*-0.00770454);
}

double NNfunction_nn_chi2_chi3::synapse0x40b52c0() {
   return (neuron0x40a4f90()*-2.04051);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5c50() {
   return (neuron0x40a5960()*-0.0179126);
}

double NNfunction_nn_chi2_chi3::synapse0x40b5c90() {
   return (neuron0x40a6330()*-0.00547847);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6830() {
   return (neuron0x40a6d00()*5.78641);
}

double NNfunction_nn_chi2_chi3::synapse0x40b6870() {
   return (neuron0x40a76d0()*1.45025);
}

double NNfunction_nn_chi2_chi3::synapse0x40b7200() {
   return (neuron0x40a0220()*-0.00971985);
}

double NNfunction_nn_chi2_chi3::synapse0x40b7240() {
   return (neuron0x40a0bf0()*-0.0548884);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8080() {
   return (neuron0x40aa460()*2.17089);
}

double NNfunction_nn_chi2_chi3::synapse0x40a80c0() {
   return (neuron0x40aae30()*-0.0141839);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8a50() {
   return (neuron0x40ab800()*0.0373472);
}

double NNfunction_nn_chi2_chi3::synapse0x40a8a90() {
   return (neuron0x40ac1d0()*-1.06516);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9420() {
   return (neuron0x40acba0()*0.40172);
}

double NNfunction_nn_chi2_chi3::synapse0x40a9460() {
   return (neuron0x40ad570()*-0.0310048);
}

double NNfunction_nn_chi2_chi3::synapse0x40bb940() {
   return (neuron0x40adf40()*-0.495024);
}

double NNfunction_nn_chi2_chi3::synapse0x40bb980() {
   return (neuron0x40ae910()*-0.0214922);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc310() {
   return (neuron0x40a49a0()*-0.0299029);
}

double NNfunction_nn_chi2_chi3::synapse0x40bc350() {
   return (neuron0x40b14f0()*-0.326081);
}

double NNfunction_nn_chi2_chi3::synapse0x40bcce0() {
   return (neuron0x40b1ec0()*-0.838352);
}

double NNfunction_nn_chi2_chi3::synapse0x40bcd20() {
   return (neuron0x40b2890()*0.0213628);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd6b0() {
   return (neuron0x40b3260()*-0.0171367);
}

double NNfunction_nn_chi2_chi3::synapse0x40bd6f0() {
   return (neuron0x40b3c30()*-0.638787);
}

double NNfunction_nn_chi2_chi3::synapse0x4098640() {
   return (neuron0x40b4600()*-2.97476);
}

double NNfunction_nn_chi2_chi3::synapse0x4098680() {
   return (neuron0x40b4fd0()*0.319127);
}

double NNfunction_nn_chi2_chi3::synapse0x40ace50() {
   return (neuron0x40b59a0()*0.156465);
}

double NNfunction_nn_chi2_chi3::synapse0x40ace90() {
   return (neuron0x40b6580()*0.0216228);
}

double NNfunction_nn_chi2_chi3::synapse0x40bddd0() {
   return (neuron0x40b6f50()*1.65654);
}

double NNfunction_nn_chi2_chi3::synapse0x40bde10() {
   return (neuron0x40a7dd0()*1.71843);
}

double NNfunction_nn_chi2_chi3::synapse0x40bde50() {
   return (neuron0x40a87a0()*0.00192833);
}

double NNfunction_nn_chi2_chi3::synapse0x40bde90() {
   return (neuron0x40a9170()*6.72558);
}

double NNfunction_nn_chi2_chi3::synapse0x40c4d40() {
   return (neuron0x40bb7b0()*0.0785166);
}

double NNfunction_nn_chi2_chi3::synapse0x40c4d80() {
   return (neuron0x40bc060()*1.43846);
}

double NNfunction_nn_chi2_chi3::synapse0x40c4dc0() {
   return (neuron0x40bca30()*0.0016478);
}

double NNfunction_nn_chi2_chi3::synapse0x40c4e00() {
   return (neuron0x40bd400()*-0.0193268);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5180() {
   return (neuron0x4098390()*-0.290987);
}

double NNfunction_nn_chi2_chi3::synapse0x40c51c0() {
   return (neuron0x4098bd0()*-1.73154);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5200() {
   return (neuron0x40996b0()*-0.000144097);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5240() {
   return (neuron0x4099150()*-0.0064887);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5280() {
   return (neuron0x409a490()*6.34677);
}

double NNfunction_nn_chi2_chi3::synapse0x40c52c0() {
   return (neuron0x409bf60()*0.00387636);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5300() {
   return (neuron0x409cd30()*-0.000708514);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5340() {
   return (neuron0x409d700()*-0.506907);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5380() {
   return (neuron0x409e0d0()*0.835594);
}

double NNfunction_nn_chi2_chi3::synapse0x40c53c0() {
   return (neuron0x409ebb0()*-0.00392123);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5400() {
   return (neuron0x409f580()*0.0419491);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5440() {
   return (neuron0x409c660()*0.0415396);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5480() {
   return (neuron0x40a1130()*1.44017);
}

double NNfunction_nn_chi2_chi3::synapse0x40c54c0() {
   return (neuron0x40a1b00()*-0.072506);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5500() {
   return (neuron0x40a24d0()*-0.608199);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5540() {
   return (neuron0x40a2ea0()*0.0430096);
}

double NNfunction_nn_chi2_chi3::synapse0x40c4fd0() {
   return (neuron0x40a4cb0()*0.0362326);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5010() {
   return (neuron0x40a4f90()*1.05997);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5690() {
   return (neuron0x40a5960()*-0.00881142);
}

double NNfunction_nn_chi2_chi3::synapse0x40c56d0() {
   return (neuron0x40a6330()*-0.0194812);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5710() {
   return (neuron0x40a6d00()*-1.36969);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5750() {
   return (neuron0x40a76d0()*-0.198147);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5790() {
   return (neuron0x40a0220()*0.0545249);
}

double NNfunction_nn_chi2_chi3::synapse0x40c57d0() {
   return (neuron0x40a0bf0()*-0.155471);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5810() {
   return (neuron0x40aa460()*-4.46012);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5850() {
   return (neuron0x40aae30()*-0.0750313);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5890() {
   return (neuron0x40ab800()*0.00446551);
}

double NNfunction_nn_chi2_chi3::synapse0x40c58d0() {
   return (neuron0x40ac1d0()*0.887668);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5910() {
   return (neuron0x40acba0()*0.272764);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5950() {
   return (neuron0x40ad570()*0.0168504);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5990() {
   return (neuron0x40adf40()*-0.207288);
}

double NNfunction_nn_chi2_chi3::synapse0x40c59d0() {
   return (neuron0x40ae910()*0.00534946);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5580() {
   return (neuron0x40a49a0()*-0.00479148);
}

double NNfunction_nn_chi2_chi3::synapse0x40c55c0() {
   return (neuron0x40b14f0()*-0.0936719);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5600() {
   return (neuron0x40b1ec0()*-0.275494);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5640() {
   return (neuron0x40b2890()*0.00168158);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5c20() {
   return (neuron0x40b3260()*-0.00618469);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5c60() {
   return (neuron0x40b3c30()*-1.45886);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5ca0() {
   return (neuron0x40b4600()*0.421112);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5ce0() {
   return (neuron0x40b4fd0()*0.0341905);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5d20() {
   return (neuron0x40b59a0()*-0.670247);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5d60() {
   return (neuron0x40b6580()*0.00465568);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5da0() {
   return (neuron0x40b6f50()*0.256186);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5de0() {
   return (neuron0x40a7dd0()*-0.233679);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5e20() {
   return (neuron0x40a87a0()*-2.03747e-05);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5e60() {
   return (neuron0x40a9170()*-1.25691);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5ea0() {
   return (neuron0x40bb7b0()*-0.062799);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5ee0() {
   return (neuron0x40bc060()*-0.215903);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5f20() {
   return (neuron0x40bca30()*0.00867441);
}

double NNfunction_nn_chi2_chi3::synapse0x40c5f60() {
   return (neuron0x40bd400()*-0.0133203);
}

double NNfunction_nn_chi2_chi3::synapse0x40c62e0() {
   return (neuron0x4098390()*1.22462);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6320() {
   return (neuron0x4098bd0()*2.17339);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6360() {
   return (neuron0x40996b0()*-0.00219971);
}

double NNfunction_nn_chi2_chi3::synapse0x40c63a0() {
   return (neuron0x4099150()*0.0428523);
}

double NNfunction_nn_chi2_chi3::synapse0x40c63e0() {
   return (neuron0x409a490()*0.718618);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6420() {
   return (neuron0x409bf60()*0.00747118);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6460() {
   return (neuron0x409cd30()*-0.556996);
}

double NNfunction_nn_chi2_chi3::synapse0x40c64a0() {
   return (neuron0x409d700()*0.0152867);
}

double NNfunction_nn_chi2_chi3::synapse0x40c64e0() {
   return (neuron0x409e0d0()*-1.26205);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6520() {
   return (neuron0x409ebb0()*0.0171662);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6560() {
   return (neuron0x409f580()*0.18062);
}

double NNfunction_nn_chi2_chi3::synapse0x40c65a0() {
   return (neuron0x409c660()*-0.0415125);
}

double NNfunction_nn_chi2_chi3::synapse0x40c65e0() {
   return (neuron0x40a1130()*-0.158623);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6620() {
   return (neuron0x40a1b00()*0.956941);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6660() {
   return (neuron0x40a24d0()*2.80964);
}

double NNfunction_nn_chi2_chi3::synapse0x40c66a0() {
   return (neuron0x40a2ea0()*0.0223182);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6130() {
   return (neuron0x40a4cb0()*0.017212);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6170() {
   return (neuron0x40a4f90()*-1.00975);
}

double NNfunction_nn_chi2_chi3::synapse0x40c67f0() {
   return (neuron0x40a5960()*0.0396041);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6830() {
   return (neuron0x40a6330()*0.0812366);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6870() {
   return (neuron0x40a6d00()*-2.99448);
}

double NNfunction_nn_chi2_chi3::synapse0x40c68b0() {
   return (neuron0x40a76d0()*-2.0947);
}

double NNfunction_nn_chi2_chi3::synapse0x40c68f0() {
   return (neuron0x40a0220()*-0.133719);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6930() {
   return (neuron0x40a0bf0()*0.051653);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6970() {
   return (neuron0x40aa460()*1.12503);
}

double NNfunction_nn_chi2_chi3::synapse0x40c69b0() {
   return (neuron0x40aae30()*0.168087);
}

double NNfunction_nn_chi2_chi3::synapse0x40c69f0() {
   return (neuron0x40ab800()*-0.0630103);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6a30() {
   return (neuron0x40ac1d0()*-1.14932);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6a70() {
   return (neuron0x40acba0()*0.394398);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6ab0() {
   return (neuron0x40ad570()*0.154072);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6af0() {
   return (neuron0x40adf40()*2.99454);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6b30() {
   return (neuron0x40ae910()*-0.000893456);
}

double NNfunction_nn_chi2_chi3::synapse0x40c66e0() {
   return (neuron0x40a49a0()*0.0396583);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6720() {
   return (neuron0x40b14f0()*-0.210291);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6760() {
   return (neuron0x40b1ec0()*-4.19629);
}

double NNfunction_nn_chi2_chi3::synapse0x40c67a0() {
   return (neuron0x40b2890()*-0.041547);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6d80() {
   return (neuron0x40b3260()*0.00777617);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6dc0() {
   return (neuron0x40b3c30()*0.46988);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6e00() {
   return (neuron0x40b4600()*1.98314);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6e40() {
   return (neuron0x40b4fd0()*-0.220647);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6e80() {
   return (neuron0x40b59a0()*1.64035);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6ec0() {
   return (neuron0x40b6580()*-0.0302486);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6f00() {
   return (neuron0x40b6f50()*-1.62204);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6f40() {
   return (neuron0x40a7dd0()*-0.66967);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6f80() {
   return (neuron0x40a87a0()*-0.0120515);
}

double NNfunction_nn_chi2_chi3::synapse0x40c6fc0() {
   return (neuron0x40a9170()*1.10234);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7000() {
   return (neuron0x40bb7b0()*0.0750373);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7040() {
   return (neuron0x40bc060()*-1.29347);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7080() {
   return (neuron0x40bca30()*-0.00163984);
}

double NNfunction_nn_chi2_chi3::synapse0x40c70c0() {
   return (neuron0x40bd400()*0.0548824);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7440() {
   return (neuron0x4098390()*-1.51716);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7480() {
   return (neuron0x4098bd0()*1.22282);
}

double NNfunction_nn_chi2_chi3::synapse0x40c74c0() {
   return (neuron0x40996b0()*-0.00213014);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7500() {
   return (neuron0x4099150()*-0.000542006);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7540() {
   return (neuron0x409a490()*1.23171);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7580() {
   return (neuron0x409bf60()*-0.0182343);
}

double NNfunction_nn_chi2_chi3::synapse0x40c75c0() {
   return (neuron0x409cd30()*-0.157188);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7600() {
   return (neuron0x409d700()*-1.41407);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7640() {
   return (neuron0x409e0d0()*2.47699);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7680() {
   return (neuron0x409ebb0()*-0.0502963);
}

double NNfunction_nn_chi2_chi3::synapse0x40c76c0() {
   return (neuron0x409f580()*0.288013);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7700() {
   return (neuron0x409c660()*0.225189);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7740() {
   return (neuron0x40a1130()*2.25525);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7780() {
   return (neuron0x40a1b00()*0.194791);
}

double NNfunction_nn_chi2_chi3::synapse0x40c77c0() {
   return (neuron0x40a24d0()*4.58068);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7800() {
   return (neuron0x40a2ea0()*-0.5391);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7290() {
   return (neuron0x40a4cb0()*0.0519898);
}

double NNfunction_nn_chi2_chi3::synapse0x40c72d0() {
   return (neuron0x40a4f90()*-1.24583);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7950() {
   return (neuron0x40a5960()*-0.00733158);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7990() {
   return (neuron0x40a6330()*-0.0823644);
}

double NNfunction_nn_chi2_chi3::synapse0x40c79d0() {
   return (neuron0x40a6d00()*-4.32958);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7a10() {
   return (neuron0x40a76d0()*0.85008);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7a50() {
   return (neuron0x40a0220()*0.118757);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7a90() {
   return (neuron0x40a0bf0()*0.476675);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7ad0() {
   return (neuron0x40aa460()*1.99908);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7b10() {
   return (neuron0x40aae30()*0.0838022);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7b50() {
   return (neuron0x40ab800()*0.00100726);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7b90() {
   return (neuron0x40ac1d0()*-0.906629);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7bd0() {
   return (neuron0x40acba0()*0.821467);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7c10() {
   return (neuron0x40ad570()*0.0448945);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7c50() {
   return (neuron0x40adf40()*-0.697354);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7c90() {
   return (neuron0x40ae910()*0.0264739);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7840() {
   return (neuron0x40a49a0()*0.0319776);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7880() {
   return (neuron0x40b14f0()*0.573612);
}

double NNfunction_nn_chi2_chi3::synapse0x40c78c0() {
   return (neuron0x40b1ec0()*0.632097);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7900() {
   return (neuron0x40b2890()*0.0160013);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7ee0() {
   return (neuron0x40b3260()*0.0277252);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7f20() {
   return (neuron0x40b3c30()*0.421091);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7f60() {
   return (neuron0x40b4600()*2.42669);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7fa0() {
   return (neuron0x40b4fd0()*0.0308148);
}

double NNfunction_nn_chi2_chi3::synapse0x40c7fe0() {
   return (neuron0x40b59a0()*-0.709037);
}

double NNfunction_nn_chi2_chi3::synapse0x40c8020() {
   return (neuron0x40b6580()*-0.0080374);
}

double NNfunction_nn_chi2_chi3::synapse0x40c8060() {
   return (neuron0x40b6f50()*-0.112667);
}

double NNfunction_nn_chi2_chi3::synapse0x40c80a0() {
   return (neuron0x40a7dd0()*0.0202804);
}

double NNfunction_nn_chi2_chi3::synapse0x40c80e0() {
   return (neuron0x40a87a0()*0.0568973);
}

double NNfunction_nn_chi2_chi3::synapse0x40c8120() {
   return (neuron0x40a9170()*-4.8485);
}

double NNfunction_nn_chi2_chi3::synapse0x40c8160() {
   return (neuron0x40bb7b0()*-0.300439);
}

double NNfunction_nn_chi2_chi3::synapse0x40c81a0() {
   return (neuron0x40bc060()*0.704771);
}

double NNfunction_nn_chi2_chi3::synapse0x40c81e0() {
   return (neuron0x40bca30()*0.0258931);
}

double NNfunction_nn_chi2_chi3::synapse0x40c8220() {
   return (neuron0x40bd400()*-0.0102191);
}

double NNfunction_nn_chi2_chi3::synapse0x40c8480() {
   return (neuron0x40c4600()*4.2828);
}

double NNfunction_nn_chi2_chi3::synapse0x40c84c0() {
   return (neuron0x40c49a0()*-8.12223);
}

double NNfunction_nn_chi2_chi3::synapse0x40c8500() {
   return (neuron0x40c4e40()*-9.72741);
}

double NNfunction_nn_chi2_chi3::synapse0x40c8540() {
   return (neuron0x40c5fa0()*-3.60356);
}

double NNfunction_nn_chi2_chi3::synapse0x40c8580() {
   return (neuron0x40c7100()*-5.86694);
}

