#include "NNfunction_ss_sLdL.h"
#include <cmath>

double NNfunction_ss_sLdL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5372)/15.3427;
   input1 = (in1 - 1.23769)/1142.62;
   input2 = (in2 - 663.163)/621.527;
   input3 = (in3 - -52.407)/823.754;
   input4 = (in4 - 1049)/943.697;
   input5 = (in5 - 883.068)/936.936;
   input6 = (in6 - 894.674)/936.911;
   input7 = (in7 - 914.645)/924.792;
   input8 = (in8 - 926.567)/976.75;
   input9 = (in9 - 898.242)/956.298;
   input10 = (in10 - 991.858)/960.949;
   input11 = (in11 - 415.291)/437.219;
   input12 = (in12 - 410.513)/431.701;
   input13 = (in13 - 499.209)/516.446;
   input14 = (in14 - 702.239)/798.731;
   input15 = (in15 - 702.435)/800.963;
   input16 = (in16 - 527.21)/552.026;
   input17 = (in17 - 767.622)/906.011;
   input18 = (in18 - 752.787)/906.66;
   input19 = (in19 - 805.248)/887.042;
   input20 = (in20 - -3.3809)/486.596;
   input21 = (in21 - 7.33827)/1160.48;
   input22 = (in22 - 5.3672)/1206.26;
   input23 = (in23 - -193.227)/594.858;
   switch(index) {
     case 0:
         return neuron0x17da4a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLdL::Value(int index, double* input) {
   input0 = (input[0] - 23.5372)/15.3427;
   input1 = (input[1] - 1.23769)/1142.62;
   input2 = (input[2] - 663.163)/621.527;
   input3 = (input[3] - -52.407)/823.754;
   input4 = (input[4] - 1049)/943.697;
   input5 = (input[5] - 883.068)/936.936;
   input6 = (input[6] - 894.674)/936.911;
   input7 = (input[7] - 914.645)/924.792;
   input8 = (input[8] - 926.567)/976.75;
   input9 = (input[9] - 898.242)/956.298;
   input10 = (input[10] - 991.858)/960.949;
   input11 = (input[11] - 415.291)/437.219;
   input12 = (input[12] - 410.513)/431.701;
   input13 = (input[13] - 499.209)/516.446;
   input14 = (input[14] - 702.239)/798.731;
   input15 = (input[15] - 702.435)/800.963;
   input16 = (input[16] - 527.21)/552.026;
   input17 = (input[17] - 767.622)/906.011;
   input18 = (input[18] - 752.787)/906.66;
   input19 = (input[19] - 805.248)/887.042;
   input20 = (input[20] - -3.3809)/486.596;
   input21 = (input[21] - 7.33827)/1160.48;
   input22 = (input[22] - 5.3672)/1206.26;
   input23 = (input[23] - -193.227)/594.858;
   switch(index) {
     case 0:
         return neuron0x17da4a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLdL::neuron0x17a6560() {
   return input0;
}

double NNfunction_ss_sLdL::neuron0x17a68a0() {
   return input1;
}

double NNfunction_ss_sLdL::neuron0x17a6be0() {
   return input2;
}

double NNfunction_ss_sLdL::neuron0x17a6f20() {
   return input3;
}

double NNfunction_ss_sLdL::neuron0x17a7260() {
   return input4;
}

double NNfunction_ss_sLdL::neuron0x17a75a0() {
   return input5;
}

double NNfunction_ss_sLdL::neuron0x17a78e0() {
   return input6;
}

double NNfunction_ss_sLdL::neuron0x17a7c20() {
   return input7;
}

double NNfunction_ss_sLdL::neuron0x17a7f60() {
   return input8;
}

double NNfunction_ss_sLdL::neuron0x17a82a0() {
   return input9;
}

double NNfunction_ss_sLdL::neuron0x17a85e0() {
   return input10;
}

double NNfunction_ss_sLdL::neuron0x17a8920() {
   return input11;
}

double NNfunction_ss_sLdL::neuron0x17a8c60() {
   return input12;
}

double NNfunction_ss_sLdL::neuron0x17a8fa0() {
   return input13;
}

double NNfunction_ss_sLdL::neuron0x17a92e0() {
   return input14;
}

double NNfunction_ss_sLdL::neuron0x17a9620() {
   return input15;
}

double NNfunction_ss_sLdL::neuron0x17a9960() {
   return input16;
}

double NNfunction_ss_sLdL::neuron0x17a9ec0() {
   return input17;
}

double NNfunction_ss_sLdL::neuron0x17aa0e0() {
   return input18;
}

double NNfunction_ss_sLdL::neuron0x17aa420() {
   return input19;
}

double NNfunction_ss_sLdL::neuron0x17aa760() {
   return input20;
}

double NNfunction_ss_sLdL::neuron0x17aaaa0() {
   return input21;
}

double NNfunction_ss_sLdL::neuron0x17aade0() {
   return input22;
}

double NNfunction_ss_sLdL::neuron0x17ab120() {
   return input23;
}

double NNfunction_ss_sLdL::input0x17ab5c0() {
   double input = 1.23639;
   input += synapse0x15663d0();
   input += synapse0x17a6420();
   input += synapse0x17a6460();
   input += synapse0x17ab870();
   input += synapse0x17ab8b0();
   input += synapse0x17ab8f0();
   input += synapse0x17ab930();
   input += synapse0x17ab970();
   input += synapse0x17ab9b0();
   input += synapse0x17ab9f0();
   input += synapse0x17aba30();
   input += synapse0x17aba70();
   input += synapse0x17abab0();
   input += synapse0x17abaf0();
   input += synapse0x17abb30();
   input += synapse0x17abb70();
   input += synapse0x17a6390();
   input += synapse0x17a63d0();
   input += synapse0x1557c70();
   input += synapse0x1557cb0();
   input += synapse0x17abdd0();
   input += synapse0x17abe10();
   input += synapse0x17abe50();
   input += synapse0x17abe90();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17ab5c0() {
   double input = input0x17ab5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17abed0() {
   double input = -0.278069;
   input += synapse0x17ac210();
   input += synapse0x17ac250();
   input += synapse0x17ac290();
   input += synapse0x17ac2d0();
   input += synapse0x17ac310();
   input += synapse0x17ac350();
   input += synapse0x17ac390();
   input += synapse0x17ac3d0();
   input += synapse0x17ac410();
   input += synapse0x17abcc0();
   input += synapse0x17abd00();
   input += synapse0x17abd40();
   input += synapse0x17abd80();
   input += synapse0x17ac660();
   input += synapse0x17ac6a0();
   input += synapse0x17ac6e0();
   input += synapse0x17ac060();
   input += synapse0x17ac0a0();
   input += synapse0x17ac830();
   input += synapse0x17ac870();
   input += synapse0x17ac8b0();
   input += synapse0x17ac8f0();
   input += synapse0x17ac930();
   input += synapse0x17ac970();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17abed0() {
   double input = input0x17abed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17ac9b0() {
   double input = 2.03344;
   input += synapse0x17accf0();
   input += synapse0x17acd30();
   input += synapse0x17acd70();
   input += synapse0x17acdb0();
   input += synapse0x17acdf0();
   input += synapse0x17ace30();
   input += synapse0x17ace70();
   input += synapse0x17aceb0();
   input += synapse0x17acef0();
   input += synapse0x17acf30();
   input += synapse0x17acf70();
   input += synapse0x17acfb0();
   input += synapse0x17acff0();
   input += synapse0x17ad030();
   input += synapse0x17ad070();
   input += synapse0x17ad0b0();
   input += synapse0x17acb40();
   input += synapse0x17acb80();
   input += synapse0x1565ac0();
   input += synapse0x1565b00();
   input += synapse0x17955f0();
   input += synapse0x1795630();
   input += synapse0x1795670();
   input += synapse0x17a64a0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17ac9b0() {
   double input = input0x17ac9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1566240() {
   double input = -0.350365;
   input += synapse0x17ac600();
   input += synapse0x17a64e0();
   input += synapse0x17a6520();
   input += synapse0x17ad200();
   input += synapse0x17ad240();
   input += synapse0x17ad280();
   input += synapse0x17ad2c0();
   input += synapse0x17ad300();
   input += synapse0x17ad340();
   input += synapse0x17ad380();
   input += synapse0x17ad3c0();
   input += synapse0x17ad400();
   input += synapse0x17ad440();
   input += synapse0x17ad480();
   input += synapse0x17ad4c0();
   input += synapse0x17ad500();
   input += synapse0x17ac450();
   input += synapse0x17ac490();
   input += synapse0x17ad650();
   input += synapse0x17ad690();
   input += synapse0x17ad6d0();
   input += synapse0x17ad710();
   input += synapse0x17ad750();
   input += synapse0x17ad790();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1566240() {
   double input = input0x1566240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17ad7d0() {
   double input = 1.13916;
   input += synapse0x17adb10();
   input += synapse0x17adb50();
   input += synapse0x17adb90();
   input += synapse0x17adbd0();
   input += synapse0x17adc10();
   input += synapse0x17adc50();
   input += synapse0x17adc90();
   input += synapse0x17adcd0();
   input += synapse0x17add10();
   input += synapse0x17add50();
   input += synapse0x17add90();
   input += synapse0x17addd0();
   input += synapse0x17ade10();
   input += synapse0x17ade50();
   input += synapse0x17ade90();
   input += synapse0x17aded0();
   input += synapse0x17ad960();
   input += synapse0x17ad9a0();
   input += synapse0x17ae020();
   input += synapse0x17ae060();
   input += synapse0x17ae0a0();
   input += synapse0x17ae0e0();
   input += synapse0x17ae120();
   input += synapse0x17ae160();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17ad7d0() {
   double input = input0x17ad7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17ae1a0() {
   double input = 0.78513;
   input += synapse0x17ae4e0();
   input += synapse0x17ae520();
   input += synapse0x17ae560();
   input += synapse0x17ae5a0();
   input += synapse0x17ae5e0();
   input += synapse0x17ae620();
   input += synapse0x17ae660();
   input += synapse0x17ae6a0();
   input += synapse0x17ae6e0();
   input += synapse0x1565e30();
   input += synapse0x1565e70();
   input += synapse0x1565eb0();
   input += synapse0x1565ef0();
   input += synapse0x1565f30();
   input += synapse0x1565f70();
   input += synapse0x1565fb0();
   input += synapse0x17ae330();
   input += synapse0x17ae370();
   input += synapse0x1566100();
   input += synapse0x1566140();
   input += synapse0x1566180();
   input += synapse0x15661c0();
   input += synapse0x1566200();
   input += synapse0x17aef30();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17ae1a0() {
   double input = input0x17ae1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17aef70() {
   double input = 0.714176;
   input += synapse0x17af2b0();
   input += synapse0x17af2f0();
   input += synapse0x17af330();
   input += synapse0x17af370();
   input += synapse0x17af3b0();
   input += synapse0x17af3f0();
   input += synapse0x17af430();
   input += synapse0x17af470();
   input += synapse0x17af4b0();
   input += synapse0x17af4f0();
   input += synapse0x17af530();
   input += synapse0x17af570();
   input += synapse0x17af5b0();
   input += synapse0x17af5f0();
   input += synapse0x17af630();
   input += synapse0x17af670();
   input += synapse0x17af100();
   input += synapse0x17af140();
   input += synapse0x17af7c0();
   input += synapse0x17af800();
   input += synapse0x17af840();
   input += synapse0x17af880();
   input += synapse0x17af8c0();
   input += synapse0x17af900();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17aef70() {
   double input = input0x17aef70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17af940() {
   double input = -0.0405681;
   input += synapse0x17afc80();
   input += synapse0x17afcc0();
   input += synapse0x17afd00();
   input += synapse0x17afd40();
   input += synapse0x17afd80();
   input += synapse0x17afdc0();
   input += synapse0x17afe00();
   input += synapse0x17afe40();
   input += synapse0x17afe80();
   input += synapse0x17afec0();
   input += synapse0x17aff00();
   input += synapse0x17aff40();
   input += synapse0x17aff80();
   input += synapse0x17affc0();
   input += synapse0x17b0000();
   input += synapse0x17b0040();
   input += synapse0x17afad0();
   input += synapse0x17afb10();
   input += synapse0x17b0190();
   input += synapse0x17b01d0();
   input += synapse0x17b0210();
   input += synapse0x17b0250();
   input += synapse0x17b0290();
   input += synapse0x17b02d0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17af940() {
   double input = input0x17af940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17b0310() {
   double input = -0.545168;
   input += synapse0x17a9db0();
   input += synapse0x17a9df0();
   input += synapse0x17a9e30();
   input += synapse0x17a9e70();
   input += synapse0x17b0860();
   input += synapse0x17b08a0();
   input += synapse0x17b08e0();
   input += synapse0x17b0920();
   input += synapse0x17b0960();
   input += synapse0x17b09a0();
   input += synapse0x17b09e0();
   input += synapse0x17b0a20();
   input += synapse0x17b0a60();
   input += synapse0x17b0aa0();
   input += synapse0x17b0ae0();
   input += synapse0x17b0b20();
   input += synapse0x17b04a0();
   input += synapse0x17b04e0();
   input += synapse0x17b0c70();
   input += synapse0x17b0cb0();
   input += synapse0x17b0cf0();
   input += synapse0x17b0d30();
   input += synapse0x17b0d70();
   input += synapse0x17b0db0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17b0310() {
   double input = input0x17b0310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17b0df0() {
   double input = -1.57331;
   input += synapse0x17b1130();
   input += synapse0x17b1170();
   input += synapse0x17b11b0();
   input += synapse0x17b11f0();
   input += synapse0x17b1230();
   input += synapse0x17b1270();
   input += synapse0x17b12b0();
   input += synapse0x17b12f0();
   input += synapse0x17b1330();
   input += synapse0x17b1370();
   input += synapse0x17b13b0();
   input += synapse0x17b13f0();
   input += synapse0x17b1430();
   input += synapse0x17b1470();
   input += synapse0x17b14b0();
   input += synapse0x17b14f0();
   input += synapse0x17b0f80();
   input += synapse0x17b0fc0();
   input += synapse0x17b1640();
   input += synapse0x17b1680();
   input += synapse0x17b16c0();
   input += synapse0x17b1700();
   input += synapse0x17b1740();
   input += synapse0x17b1780();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17b0df0() {
   double input = input0x17b0df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17b17c0() {
   double input = 0.0701429;
   input += synapse0x17b1b00();
   input += synapse0x17b1b40();
   input += synapse0x17b1b80();
   input += synapse0x17b1bc0();
   input += synapse0x17b1c00();
   input += synapse0x17b1c40();
   input += synapse0x17b1c80();
   input += synapse0x17b1cc0();
   input += synapse0x17b1d00();
   input += synapse0x17b1d40();
   input += synapse0x17b1d80();
   input += synapse0x17b1dc0();
   input += synapse0x17b1e00();
   input += synapse0x17b1e40();
   input += synapse0x17b1e80();
   input += synapse0x17b1ec0();
   input += synapse0x17b1950();
   input += synapse0x17b1990();
   input += synapse0x17ae720();
   input += synapse0x17ae760();
   input += synapse0x17ae7a0();
   input += synapse0x17ae7e0();
   input += synapse0x17ae820();
   input += synapse0x17ae860();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17b17c0() {
   double input = input0x17b17c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17ae8a0() {
   double input = 2.35062;
   input += synapse0x17aebe0();
   input += synapse0x17aec20();
   input += synapse0x17aec60();
   input += synapse0x17aeca0();
   input += synapse0x17aece0();
   input += synapse0x17aed20();
   input += synapse0x17aed60();
   input += synapse0x17aeda0();
   input += synapse0x17aede0();
   input += synapse0x17aee20();
   input += synapse0x17aee60();
   input += synapse0x17aeea0();
   input += synapse0x17aeee0();
   input += synapse0x17b3020();
   input += synapse0x17b3060();
   input += synapse0x17b30a0();
   input += synapse0x17aea30();
   input += synapse0x17aea70();
   input += synapse0x17b31f0();
   input += synapse0x17b3230();
   input += synapse0x17b3270();
   input += synapse0x17b32b0();
   input += synapse0x17b32f0();
   input += synapse0x17b3330();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17ae8a0() {
   double input = input0x17ae8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17b3370() {
   double input = 1.18713;
   input += synapse0x17b36b0();
   input += synapse0x17b36f0();
   input += synapse0x17b3730();
   input += synapse0x17b3770();
   input += synapse0x17b37b0();
   input += synapse0x17b37f0();
   input += synapse0x17b3830();
   input += synapse0x17b3870();
   input += synapse0x17b38b0();
   input += synapse0x17b38f0();
   input += synapse0x17b3930();
   input += synapse0x17b3970();
   input += synapse0x17b39b0();
   input += synapse0x17b39f0();
   input += synapse0x17b3a30();
   input += synapse0x17b3a70();
   input += synapse0x17b3500();
   input += synapse0x17b3540();
   input += synapse0x17b3bc0();
   input += synapse0x17b3c00();
   input += synapse0x17b3c40();
   input += synapse0x17b3c80();
   input += synapse0x17b3cc0();
   input += synapse0x17b3d00();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17b3370() {
   double input = input0x17b3370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17b3d40() {
   double input = 1.70967;
   input += synapse0x17b4080();
   input += synapse0x17b40c0();
   input += synapse0x17b4100();
   input += synapse0x17b4140();
   input += synapse0x17b4180();
   input += synapse0x17b41c0();
   input += synapse0x17b4200();
   input += synapse0x17b4240();
   input += synapse0x17b4280();
   input += synapse0x17b42c0();
   input += synapse0x17b4300();
   input += synapse0x17b4340();
   input += synapse0x17b4380();
   input += synapse0x17b43c0();
   input += synapse0x17b4400();
   input += synapse0x17b4440();
   input += synapse0x17b3ed0();
   input += synapse0x17b3f10();
   input += synapse0x17b4590();
   input += synapse0x17b45d0();
   input += synapse0x17b4610();
   input += synapse0x17b4650();
   input += synapse0x17b4690();
   input += synapse0x17b46d0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17b3d40() {
   double input = input0x17b3d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17b4710() {
   double input = 1.28572;
   input += synapse0x17b4a50();
   input += synapse0x17b4a90();
   input += synapse0x17b4ad0();
   input += synapse0x17b4b10();
   input += synapse0x17b4b50();
   input += synapse0x17b4b90();
   input += synapse0x17b4bd0();
   input += synapse0x17b4c10();
   input += synapse0x17b4c50();
   input += synapse0x17b4c90();
   input += synapse0x17b4cd0();
   input += synapse0x17b4d10();
   input += synapse0x17b4d50();
   input += synapse0x17b4d90();
   input += synapse0x17b4dd0();
   input += synapse0x17b4e10();
   input += synapse0x17b48a0();
   input += synapse0x17b48e0();
   input += synapse0x17b4f60();
   input += synapse0x17b4fa0();
   input += synapse0x17b4fe0();
   input += synapse0x17b5020();
   input += synapse0x17b5060();
   input += synapse0x17b50a0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17b4710() {
   double input = input0x17b4710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17b50e0() {
   double input = 0.592221;
   input += synapse0x17b5420();
   input += synapse0x17a6780();
   input += synapse0x17a67c0();
   input += synapse0x17a6ac0();
   input += synapse0x17a6b00();
   input += synapse0x17a6e00();
   input += synapse0x17a6e40();
   input += synapse0x17a7140();
   input += synapse0x17a7180();
   input += synapse0x17a7480();
   input += synapse0x17a74c0();
   input += synapse0x17a77c0();
   input += synapse0x17a7800();
   input += synapse0x17a7b00();
   input += synapse0x17a7b40();
   input += synapse0x17a7e40();
   input += synapse0x17a7e80();
   input += synapse0x17a8180();
   input += synapse0x17a81c0();
   input += synapse0x17a84c0();
   input += synapse0x17a8500();
   input += synapse0x17a8800();
   input += synapse0x17a8840();
   input += synapse0x17a8b40();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17b50e0() {
   double input = input0x17b50e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17b6ef0() {
   double input = 6.54635;
   input += synapse0x17a8b80();
   input += synapse0x17a9840();
   input += synapse0x17a9880();
   input += synapse0x17b5270();
   input += synapse0x17b52b0();
   input += synapse0x17a9b80();
   input += synapse0x17a9bc0();
   input += synapse0x1557b50();
   input += synapse0x1557b90();
   input += synapse0x17aa300();
   input += synapse0x17aa340();
   input += synapse0x17aa640();
   input += synapse0x17aa680();
   input += synapse0x17aa980();
   input += synapse0x17aa9c0();
   input += synapse0x17aacc0();
   input += synapse0x17aad00();
   input += synapse0x17ab000();
   input += synapse0x17ab040();
   input += synapse0x17ab340();
   input += synapse0x17ab380();
   input += synapse0x17a8e80();
   input += synapse0x17a8ec0();
   input += synapse0x17b7190();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17b6ef0() {
   double input = input0x17b6ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17b71d0() {
   double input = -0.101931;
   input += synapse0x17b7510();
   input += synapse0x17b7550();
   input += synapse0x17b7590();
   input += synapse0x17b75d0();
   input += synapse0x17b7610();
   input += synapse0x17b7650();
   input += synapse0x17b7690();
   input += synapse0x17b76d0();
   input += synapse0x17b7710();
   input += synapse0x17b7750();
   input += synapse0x17b7790();
   input += synapse0x17b77d0();
   input += synapse0x17b7810();
   input += synapse0x17b7850();
   input += synapse0x17b7890();
   input += synapse0x17b78d0();
   input += synapse0x17b7360();
   input += synapse0x17b73a0();
   input += synapse0x17b7a20();
   input += synapse0x17b7a60();
   input += synapse0x17b7aa0();
   input += synapse0x17b7ae0();
   input += synapse0x17b7b20();
   input += synapse0x17b7b60();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17b71d0() {
   double input = input0x17b71d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17b7ba0() {
   double input = -0.525472;
   input += synapse0x17b7ee0();
   input += synapse0x17b7f20();
   input += synapse0x17b7f60();
   input += synapse0x17b7fa0();
   input += synapse0x17b7fe0();
   input += synapse0x17b8020();
   input += synapse0x17b8060();
   input += synapse0x17b80a0();
   input += synapse0x17b80e0();
   input += synapse0x17b8120();
   input += synapse0x17b8160();
   input += synapse0x17b81a0();
   input += synapse0x17b81e0();
   input += synapse0x17b8220();
   input += synapse0x17b8260();
   input += synapse0x17b82a0();
   input += synapse0x17b7d30();
   input += synapse0x17b7d70();
   input += synapse0x17b83f0();
   input += synapse0x17b8430();
   input += synapse0x17b8470();
   input += synapse0x17b84b0();
   input += synapse0x17b84f0();
   input += synapse0x17b8530();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17b7ba0() {
   double input = input0x17b7ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17b8570() {
   double input = 1.31014;
   input += synapse0x17b88b0();
   input += synapse0x17b88f0();
   input += synapse0x17b8930();
   input += synapse0x17b8970();
   input += synapse0x17b89b0();
   input += synapse0x17b89f0();
   input += synapse0x17b8a30();
   input += synapse0x17b8a70();
   input += synapse0x17b8ab0();
   input += synapse0x17b8af0();
   input += synapse0x17b8b30();
   input += synapse0x17b8b70();
   input += synapse0x17b8bb0();
   input += synapse0x17b8bf0();
   input += synapse0x17b8c30();
   input += synapse0x17b8c70();
   input += synapse0x17b8700();
   input += synapse0x17b8740();
   input += synapse0x17b8dc0();
   input += synapse0x17b8e00();
   input += synapse0x17b8e40();
   input += synapse0x17b8e80();
   input += synapse0x17b8ec0();
   input += synapse0x17b8f00();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17b8570() {
   double input = input0x17b8570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17b8f40() {
   double input = 1.14358;
   input += synapse0x17b9280();
   input += synapse0x17b92c0();
   input += synapse0x17b9300();
   input += synapse0x17b9340();
   input += synapse0x17b9380();
   input += synapse0x17b93c0();
   input += synapse0x17b9400();
   input += synapse0x17b9440();
   input += synapse0x17b9480();
   input += synapse0x17b94c0();
   input += synapse0x17b9500();
   input += synapse0x17b9540();
   input += synapse0x17b9580();
   input += synapse0x17b95c0();
   input += synapse0x17b9600();
   input += synapse0x17b9640();
   input += synapse0x17b90d0();
   input += synapse0x17b9110();
   input += synapse0x17b9790();
   input += synapse0x17b97d0();
   input += synapse0x17b9810();
   input += synapse0x17b9850();
   input += synapse0x17b9890();
   input += synapse0x17b98d0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17b8f40() {
   double input = input0x17b8f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17b9910() {
   double input = 0.529665;
   input += synapse0x17b9c50();
   input += synapse0x17b9c90();
   input += synapse0x17b9cd0();
   input += synapse0x17b9d10();
   input += synapse0x17b9d50();
   input += synapse0x17b9d90();
   input += synapse0x17b9dd0();
   input += synapse0x17b9e10();
   input += synapse0x17b9e50();
   input += synapse0x17b2010();
   input += synapse0x17b2050();
   input += synapse0x17b2090();
   input += synapse0x17b20d0();
   input += synapse0x17b2110();
   input += synapse0x17b2150();
   input += synapse0x17b2190();
   input += synapse0x17b9aa0();
   input += synapse0x17b9ae0();
   input += synapse0x17b22e0();
   input += synapse0x17b2320();
   input += synapse0x17b2360();
   input += synapse0x17b23a0();
   input += synapse0x17b23e0();
   input += synapse0x17b2420();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17b9910() {
   double input = input0x17b9910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17b2460() {
   double input = -0.482466;
   input += synapse0x17b27a0();
   input += synapse0x17b27e0();
   input += synapse0x17b2820();
   input += synapse0x17b2860();
   input += synapse0x17b28a0();
   input += synapse0x17b28e0();
   input += synapse0x17b2920();
   input += synapse0x17b2960();
   input += synapse0x17b29a0();
   input += synapse0x17b29e0();
   input += synapse0x17b2a20();
   input += synapse0x17b2a60();
   input += synapse0x17b2aa0();
   input += synapse0x17b2ae0();
   input += synapse0x17b2b20();
   input += synapse0x17b2b60();
   input += synapse0x17b25f0();
   input += synapse0x17b2630();
   input += synapse0x17b2cb0();
   input += synapse0x17b2cf0();
   input += synapse0x17b2d30();
   input += synapse0x17b2d70();
   input += synapse0x17b2db0();
   input += synapse0x17b2df0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17b2460() {
   double input = input0x17b2460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17b2e30() {
   double input = 2.10167;
   input += synapse0x17b2fc0();
   input += synapse0x17bc050();
   input += synapse0x17bc090();
   input += synapse0x17bc0d0();
   input += synapse0x17bc110();
   input += synapse0x17bc150();
   input += synapse0x17bc190();
   input += synapse0x17bc1d0();
   input += synapse0x17bc210();
   input += synapse0x17bc250();
   input += synapse0x17bc290();
   input += synapse0x17bc2d0();
   input += synapse0x17bc310();
   input += synapse0x17bc350();
   input += synapse0x17bc390();
   input += synapse0x17bc3d0();
   input += synapse0x17bbea0();
   input += synapse0x17bbee0();
   input += synapse0x17bc520();
   input += synapse0x17bc560();
   input += synapse0x17bc5a0();
   input += synapse0x17bc5e0();
   input += synapse0x17bc620();
   input += synapse0x17bc660();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17b2e30() {
   double input = input0x17b2e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17bc6a0() {
   double input = -0.772209;
   input += synapse0x17bc9e0();
   input += synapse0x17bca20();
   input += synapse0x17bca60();
   input += synapse0x17bcaa0();
   input += synapse0x17bcae0();
   input += synapse0x17bcb20();
   input += synapse0x17bcb60();
   input += synapse0x17bcba0();
   input += synapse0x17bcbe0();
   input += synapse0x17bcc20();
   input += synapse0x17bcc60();
   input += synapse0x17bcca0();
   input += synapse0x17bcce0();
   input += synapse0x17bcd20();
   input += synapse0x17bcd60();
   input += synapse0x17bcda0();
   input += synapse0x17bc830();
   input += synapse0x17bc870();
   input += synapse0x17bcef0();
   input += synapse0x17bcf30();
   input += synapse0x17bcf70();
   input += synapse0x17bcfb0();
   input += synapse0x17bcff0();
   input += synapse0x17bd030();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17bc6a0() {
   double input = input0x17bc6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17bd070() {
   double input = -0.142969;
   input += synapse0x17bd3b0();
   input += synapse0x17bd3f0();
   input += synapse0x17bd430();
   input += synapse0x17bd470();
   input += synapse0x17bd4b0();
   input += synapse0x17bd4f0();
   input += synapse0x17bd530();
   input += synapse0x17bd570();
   input += synapse0x17bd5b0();
   input += synapse0x17bd5f0();
   input += synapse0x17bd630();
   input += synapse0x17bd670();
   input += synapse0x17bd6b0();
   input += synapse0x17bd6f0();
   input += synapse0x17bd730();
   input += synapse0x17bd770();
   input += synapse0x17bd200();
   input += synapse0x17bd240();
   input += synapse0x17bd8c0();
   input += synapse0x17bd900();
   input += synapse0x17bd940();
   input += synapse0x17bd980();
   input += synapse0x17bd9c0();
   input += synapse0x17bda00();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17bd070() {
   double input = input0x17bd070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17bda40() {
   double input = -0.455255;
   input += synapse0x17bdd80();
   input += synapse0x17bddc0();
   input += synapse0x17bde00();
   input += synapse0x17bde40();
   input += synapse0x17bde80();
   input += synapse0x17bdec0();
   input += synapse0x17bdf00();
   input += synapse0x17bdf40();
   input += synapse0x17bdf80();
   input += synapse0x17bdfc0();
   input += synapse0x17be000();
   input += synapse0x17be040();
   input += synapse0x17be080();
   input += synapse0x17be0c0();
   input += synapse0x17be100();
   input += synapse0x17be140();
   input += synapse0x17bdbd0();
   input += synapse0x17bdc10();
   input += synapse0x17be290();
   input += synapse0x17be2d0();
   input += synapse0x17be310();
   input += synapse0x17be350();
   input += synapse0x17be390();
   input += synapse0x17be3d0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17bda40() {
   double input = input0x17bda40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17be410() {
   double input = -0.810255;
   input += synapse0x17be750();
   input += synapse0x17be790();
   input += synapse0x17be7d0();
   input += synapse0x17be810();
   input += synapse0x17be850();
   input += synapse0x17be890();
   input += synapse0x17be8d0();
   input += synapse0x17be910();
   input += synapse0x17be950();
   input += synapse0x17be990();
   input += synapse0x17be9d0();
   input += synapse0x17bea10();
   input += synapse0x17bea50();
   input += synapse0x17bea90();
   input += synapse0x17bead0();
   input += synapse0x17beb10();
   input += synapse0x17be5a0();
   input += synapse0x17be5e0();
   input += synapse0x17bec60();
   input += synapse0x17beca0();
   input += synapse0x17bece0();
   input += synapse0x17bed20();
   input += synapse0x17bed60();
   input += synapse0x17beda0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17be410() {
   double input = input0x17be410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17bede0() {
   double input = -0.326387;
   input += synapse0x17bf120();
   input += synapse0x17bf160();
   input += synapse0x17bf1a0();
   input += synapse0x17bf1e0();
   input += synapse0x17bf220();
   input += synapse0x17bf260();
   input += synapse0x17bf2a0();
   input += synapse0x17bf2e0();
   input += synapse0x17bf320();
   input += synapse0x17bf360();
   input += synapse0x17bf3a0();
   input += synapse0x17bf3e0();
   input += synapse0x17bf420();
   input += synapse0x17bf460();
   input += synapse0x17bf4a0();
   input += synapse0x17bf4e0();
   input += synapse0x17bef70();
   input += synapse0x17befb0();
   input += synapse0x17bf630();
   input += synapse0x17bf670();
   input += synapse0x17bf6b0();
   input += synapse0x17bf6f0();
   input += synapse0x17bf730();
   input += synapse0x17bf770();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17bede0() {
   double input = input0x17bede0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17bf7b0() {
   double input = 0.82887;
   input += synapse0x17bfaf0();
   input += synapse0x17bfb30();
   input += synapse0x17bfb70();
   input += synapse0x17bfbb0();
   input += synapse0x17bfbf0();
   input += synapse0x17bfc30();
   input += synapse0x17bfc70();
   input += synapse0x17bfcb0();
   input += synapse0x17bfcf0();
   input += synapse0x17bfd30();
   input += synapse0x17bfd70();
   input += synapse0x17bfdb0();
   input += synapse0x17bfdf0();
   input += synapse0x17bfe30();
   input += synapse0x17bfe70();
   input += synapse0x17bfeb0();
   input += synapse0x17bf940();
   input += synapse0x17bf980();
   input += synapse0x17c0000();
   input += synapse0x17c0040();
   input += synapse0x17c0080();
   input += synapse0x17c00c0();
   input += synapse0x17c0100();
   input += synapse0x17c0140();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17bf7b0() {
   double input = input0x17bf7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17c0180() {
   double input = 0.551747;
   input += synapse0x17c04c0();
   input += synapse0x17c0500();
   input += synapse0x17c0540();
   input += synapse0x17c0580();
   input += synapse0x17c05c0();
   input += synapse0x17c0600();
   input += synapse0x17c0640();
   input += synapse0x17c0680();
   input += synapse0x17c06c0();
   input += synapse0x17c0700();
   input += synapse0x17c0740();
   input += synapse0x17c0780();
   input += synapse0x17c07c0();
   input += synapse0x17c0800();
   input += synapse0x17c0840();
   input += synapse0x17c0880();
   input += synapse0x17c0310();
   input += synapse0x17c0350();
   input += synapse0x17c09d0();
   input += synapse0x17c0a10();
   input += synapse0x17c0a50();
   input += synapse0x17c0a90();
   input += synapse0x17c0ad0();
   input += synapse0x17c0b10();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17c0180() {
   double input = input0x17c0180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17c0b50() {
   double input = 0.347406;
   input += synapse0x17c0e90();
   input += synapse0x17b5460();
   input += synapse0x17b54a0();
   input += synapse0x17b54e0();
   input += synapse0x17b5730();
   input += synapse0x17b5770();
   input += synapse0x17b57b0();
   input += synapse0x17b5a00();
   input += synapse0x17b5a40();
   input += synapse0x17b5c90();
   input += synapse0x17b5cd0();
   input += synapse0x17b5d10();
   input += synapse0x17b5f60();
   input += synapse0x17b5fa0();
   input += synapse0x17b61f0();
   input += synapse0x17b6230();
   input += synapse0x17c0ce0();
   input += synapse0x17c0d20();
   input += synapse0x17b6380();
   input += synapse0x17b6890();
   input += synapse0x17b68d0();
   input += synapse0x17b6910();
   input += synapse0x17b6b60();
   input += synapse0x17b6ba0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17c0b50() {
   double input = input0x17c0b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17b6be0() {
   double input = 0.041923;
   input += synapse0x17b6450();
   input += synapse0x17b6490();
   input += synapse0x17b64d0();
   input += synapse0x17b6510();
   input += synapse0x17b6e90();
   input += synapse0x17c31e0();
   input += synapse0x17c3220();
   input += synapse0x17c3260();
   input += synapse0x17c32a0();
   input += synapse0x17c32e0();
   input += synapse0x17c3320();
   input += synapse0x17c3360();
   input += synapse0x17c33a0();
   input += synapse0x17c33e0();
   input += synapse0x17c3420();
   input += synapse0x17c3460();
   input += synapse0x17b6d70();
   input += synapse0x17b6db0();
   input += synapse0x17c35b0();
   input += synapse0x17c35f0();
   input += synapse0x17c3630();
   input += synapse0x17c3670();
   input += synapse0x17c36b0();
   input += synapse0x17c36f0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17b6be0() {
   double input = input0x17b6be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17c3730() {
   double input = -1.15513;
   input += synapse0x17c3a70();
   input += synapse0x17c3ab0();
   input += synapse0x17c3af0();
   input += synapse0x17c3b30();
   input += synapse0x17c3b70();
   input += synapse0x17c3bb0();
   input += synapse0x17c3bf0();
   input += synapse0x17c3c30();
   input += synapse0x17c3c70();
   input += synapse0x17c3cb0();
   input += synapse0x17c3cf0();
   input += synapse0x17c3d30();
   input += synapse0x17c3d70();
   input += synapse0x17c3db0();
   input += synapse0x17c3df0();
   input += synapse0x17c3e30();
   input += synapse0x17c38c0();
   input += synapse0x17c3900();
   input += synapse0x17c3f80();
   input += synapse0x17c3fc0();
   input += synapse0x17c4000();
   input += synapse0x17c4040();
   input += synapse0x17c4080();
   input += synapse0x17c40c0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17c3730() {
   double input = input0x17c3730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17c4100() {
   double input = -1.19163;
   input += synapse0x17c4440();
   input += synapse0x17c4480();
   input += synapse0x17c44c0();
   input += synapse0x17c4500();
   input += synapse0x17c4540();
   input += synapse0x17c4580();
   input += synapse0x17c45c0();
   input += synapse0x17c4600();
   input += synapse0x17c4640();
   input += synapse0x17c4680();
   input += synapse0x17c46c0();
   input += synapse0x17c4700();
   input += synapse0x17c4740();
   input += synapse0x17c4780();
   input += synapse0x17c47c0();
   input += synapse0x17c4800();
   input += synapse0x17c4290();
   input += synapse0x17c42d0();
   input += synapse0x17c4950();
   input += synapse0x17c4990();
   input += synapse0x17c49d0();
   input += synapse0x17c4a10();
   input += synapse0x17c4a50();
   input += synapse0x17c4a90();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17c4100() {
   double input = input0x17c4100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17c4ad0() {
   double input = 0.379333;
   input += synapse0x17c4e10();
   input += synapse0x17c4e50();
   input += synapse0x17c4e90();
   input += synapse0x17c4ed0();
   input += synapse0x17c4f10();
   input += synapse0x17c4f50();
   input += synapse0x17c4f90();
   input += synapse0x17c4fd0();
   input += synapse0x17c5010();
   input += synapse0x17c5050();
   input += synapse0x17c5090();
   input += synapse0x17c50d0();
   input += synapse0x17c5110();
   input += synapse0x17c5150();
   input += synapse0x17c5190();
   input += synapse0x17c51d0();
   input += synapse0x17c4c60();
   input += synapse0x17c4ca0();
   input += synapse0x17c5320();
   input += synapse0x17c5360();
   input += synapse0x17c53a0();
   input += synapse0x17c53e0();
   input += synapse0x17c5420();
   input += synapse0x17c5460();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17c4ad0() {
   double input = input0x17c4ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17c54a0() {
   double input = 0.113774;
   input += synapse0x17c57e0();
   input += synapse0x17c5820();
   input += synapse0x17c5860();
   input += synapse0x17c58a0();
   input += synapse0x17c58e0();
   input += synapse0x17c5920();
   input += synapse0x17c5960();
   input += synapse0x17c59a0();
   input += synapse0x17c59e0();
   input += synapse0x17c5a20();
   input += synapse0x17c5a60();
   input += synapse0x17c5aa0();
   input += synapse0x17c5ae0();
   input += synapse0x17c5b20();
   input += synapse0x17c5b60();
   input += synapse0x17c5ba0();
   input += synapse0x17c5630();
   input += synapse0x17c5670();
   input += synapse0x17c5cf0();
   input += synapse0x17c5d30();
   input += synapse0x17c5d70();
   input += synapse0x17c5db0();
   input += synapse0x17c5df0();
   input += synapse0x17c5e30();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17c54a0() {
   double input = input0x17c54a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17c5e70() {
   double input = -0.85354;
   input += synapse0x17c61b0();
   input += synapse0x17c61f0();
   input += synapse0x17c6230();
   input += synapse0x17c6270();
   input += synapse0x17c62b0();
   input += synapse0x17c62f0();
   input += synapse0x17c6330();
   input += synapse0x17c6370();
   input += synapse0x17c63b0();
   input += synapse0x17c63f0();
   input += synapse0x17c6430();
   input += synapse0x17c6470();
   input += synapse0x17c64b0();
   input += synapse0x17c64f0();
   input += synapse0x17c6530();
   input += synapse0x17c6570();
   input += synapse0x17c6000();
   input += synapse0x17c6040();
   input += synapse0x17c66c0();
   input += synapse0x17c6700();
   input += synapse0x17c6740();
   input += synapse0x17c6780();
   input += synapse0x17c67c0();
   input += synapse0x17c6800();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17c5e70() {
   double input = input0x17c5e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17c6840() {
   double input = 0.725929;
   input += synapse0x17c6b80();
   input += synapse0x17c6bc0();
   input += synapse0x17c6c00();
   input += synapse0x17c6c40();
   input += synapse0x17c6c80();
   input += synapse0x17c6cc0();
   input += synapse0x17c6d00();
   input += synapse0x17c6d40();
   input += synapse0x17c6d80();
   input += synapse0x17c6dc0();
   input += synapse0x17c6e00();
   input += synapse0x17c6e40();
   input += synapse0x17c6e80();
   input += synapse0x17c6ec0();
   input += synapse0x17c6f00();
   input += synapse0x17c6f40();
   input += synapse0x17c69d0();
   input += synapse0x17c6a10();
   input += synapse0x17c7090();
   input += synapse0x17c70d0();
   input += synapse0x17c7110();
   input += synapse0x17c7150();
   input += synapse0x17c7190();
   input += synapse0x17c71d0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17c6840() {
   double input = input0x17c6840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17c7210() {
   double input = -1.00486;
   input += synapse0x17c7550();
   input += synapse0x17c7590();
   input += synapse0x17c75d0();
   input += synapse0x17c7610();
   input += synapse0x17c7650();
   input += synapse0x17c7690();
   input += synapse0x17c76d0();
   input += synapse0x17c7710();
   input += synapse0x17c7750();
   input += synapse0x17c7790();
   input += synapse0x17c77d0();
   input += synapse0x17c7810();
   input += synapse0x17c7850();
   input += synapse0x17c7890();
   input += synapse0x17c78d0();
   input += synapse0x17c7910();
   input += synapse0x17c73a0();
   input += synapse0x17c73e0();
   input += synapse0x17c7a60();
   input += synapse0x17c7aa0();
   input += synapse0x17c7ae0();
   input += synapse0x17c7b20();
   input += synapse0x17c7b60();
   input += synapse0x17c7ba0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17c7210() {
   double input = input0x17c7210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17c7be0() {
   double input = 0.288531;
   input += synapse0x17b0650();
   input += synapse0x17b0690();
   input += synapse0x17b06d0();
   input += synapse0x17b0710();
   input += synapse0x17b0750();
   input += synapse0x17b0790();
   input += synapse0x17b07d0();
   input += synapse0x17b0810();
   input += synapse0x17c8330();
   input += synapse0x17c8370();
   input += synapse0x17c83b0();
   input += synapse0x17c83f0();
   input += synapse0x17c8430();
   input += synapse0x17c8470();
   input += synapse0x17c84b0();
   input += synapse0x17c84f0();
   input += synapse0x17c7d70();
   input += synapse0x17c7db0();
   input += synapse0x17c8640();
   input += synapse0x17c8680();
   input += synapse0x17c86c0();
   input += synapse0x17c8700();
   input += synapse0x17c8740();
   input += synapse0x17c8780();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17c7be0() {
   double input = input0x17c7be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17c87c0() {
   double input = -0.349586;
   input += synapse0x17c8b00();
   input += synapse0x17c8b40();
   input += synapse0x17c8b80();
   input += synapse0x17c8bc0();
   input += synapse0x17c8c00();
   input += synapse0x17c8c40();
   input += synapse0x17c8c80();
   input += synapse0x17c8cc0();
   input += synapse0x17c8d00();
   input += synapse0x17c8d40();
   input += synapse0x17c8d80();
   input += synapse0x17c8dc0();
   input += synapse0x17c8e00();
   input += synapse0x17c8e40();
   input += synapse0x17c8e80();
   input += synapse0x17c8ec0();
   input += synapse0x17c8950();
   input += synapse0x17c8990();
   input += synapse0x17c9010();
   input += synapse0x17c9050();
   input += synapse0x17c9090();
   input += synapse0x17c90d0();
   input += synapse0x17c9110();
   input += synapse0x17c9150();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17c87c0() {
   double input = input0x17c87c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17c9190() {
   double input = -0.43513;
   input += synapse0x17c94d0();
   input += synapse0x17c9510();
   input += synapse0x17c9550();
   input += synapse0x17c9590();
   input += synapse0x17c95d0();
   input += synapse0x17c9610();
   input += synapse0x17c9650();
   input += synapse0x17c9690();
   input += synapse0x17c96d0();
   input += synapse0x17c9710();
   input += synapse0x17c9750();
   input += synapse0x17c9790();
   input += synapse0x17c97d0();
   input += synapse0x17c9810();
   input += synapse0x17c9850();
   input += synapse0x17c9890();
   input += synapse0x17c9320();
   input += synapse0x17c9360();
   input += synapse0x17b9e90();
   input += synapse0x17b9ed0();
   input += synapse0x17b9f10();
   input += synapse0x17b9f50();
   input += synapse0x17b9f90();
   input += synapse0x17b9fd0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17c9190() {
   double input = input0x17c9190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17ba010() {
   double input = 0.169616;
   input += synapse0x17ba350();
   input += synapse0x17ba390();
   input += synapse0x17ba3d0();
   input += synapse0x17ba410();
   input += synapse0x17ba450();
   input += synapse0x17ba490();
   input += synapse0x17ba4d0();
   input += synapse0x17ba510();
   input += synapse0x17ba550();
   input += synapse0x17ba590();
   input += synapse0x17ba5d0();
   input += synapse0x17ba610();
   input += synapse0x17ba650();
   input += synapse0x17ba690();
   input += synapse0x17ba6d0();
   input += synapse0x17ba710();
   input += synapse0x17ba1a0();
   input += synapse0x17ba1e0();
   input += synapse0x17ba860();
   input += synapse0x17ba8a0();
   input += synapse0x17ba8e0();
   input += synapse0x17ba920();
   input += synapse0x17ba960();
   input += synapse0x17ba9a0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17ba010() {
   double input = input0x17ba010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17ba9e0() {
   double input = 0.0789825;
   input += synapse0x17bad20();
   input += synapse0x17bad60();
   input += synapse0x17bada0();
   input += synapse0x17bade0();
   input += synapse0x17bae20();
   input += synapse0x17bae60();
   input += synapse0x17baea0();
   input += synapse0x17baee0();
   input += synapse0x17baf20();
   input += synapse0x17baf60();
   input += synapse0x17bafa0();
   input += synapse0x17bafe0();
   input += synapse0x17bb020();
   input += synapse0x17bb060();
   input += synapse0x17bb0a0();
   input += synapse0x17bb0e0();
   input += synapse0x17bab70();
   input += synapse0x17babb0();
   input += synapse0x17bb230();
   input += synapse0x17bb270();
   input += synapse0x17bb2b0();
   input += synapse0x17bb2f0();
   input += synapse0x17bb330();
   input += synapse0x17bb370();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17ba9e0() {
   double input = input0x17ba9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17bb3b0() {
   double input = 0.948807;
   input += synapse0x17bb6f0();
   input += synapse0x17bb730();
   input += synapse0x17bb770();
   input += synapse0x17bb7b0();
   input += synapse0x17bb7f0();
   input += synapse0x17bb830();
   input += synapse0x17bb870();
   input += synapse0x17bb8b0();
   input += synapse0x17bb8f0();
   input += synapse0x17bb930();
   input += synapse0x17bb970();
   input += synapse0x17bb9b0();
   input += synapse0x17bb9f0();
   input += synapse0x17bba30();
   input += synapse0x17bba70();
   input += synapse0x17bbab0();
   input += synapse0x17bb540();
   input += synapse0x17bb580();
   input += synapse0x17bbc00();
   input += synapse0x17bbc40();
   input += synapse0x17bbc80();
   input += synapse0x17bbcc0();
   input += synapse0x17bbd00();
   input += synapse0x17bbd40();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17bb3b0() {
   double input = input0x17bb3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17cd9f0() {
   double input = -1.09541;
   input += synapse0x17cdc10();
   input += synapse0x17cdc50();
   input += synapse0x17cdc90();
   input += synapse0x17cdcd0();
   input += synapse0x17cdd10();
   input += synapse0x17cdd50();
   input += synapse0x17cdd90();
   input += synapse0x17cddd0();
   input += synapse0x17cde10();
   input += synapse0x17cde50();
   input += synapse0x17cde90();
   input += synapse0x17cded0();
   input += synapse0x17cdf10();
   input += synapse0x17cdf50();
   input += synapse0x17cdf90();
   input += synapse0x17cdfd0();
   input += synapse0x17bbd80();
   input += synapse0x17bbdc0();
   input += synapse0x17ce120();
   input += synapse0x17ce160();
   input += synapse0x17ce1a0();
   input += synapse0x17ce1e0();
   input += synapse0x17ce220();
   input += synapse0x17ce260();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17cd9f0() {
   double input = input0x17cd9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17ce2a0() {
   double input = -0.8786;
   input += synapse0x17ce5e0();
   input += synapse0x17ce620();
   input += synapse0x17ce660();
   input += synapse0x17ce6a0();
   input += synapse0x17ce6e0();
   input += synapse0x17ce720();
   input += synapse0x17ce760();
   input += synapse0x17ce7a0();
   input += synapse0x17ce7e0();
   input += synapse0x17ce820();
   input += synapse0x17ce860();
   input += synapse0x17ce8a0();
   input += synapse0x17ce8e0();
   input += synapse0x17ce920();
   input += synapse0x17ce960();
   input += synapse0x17ce9a0();
   input += synapse0x17ce430();
   input += synapse0x17ce470();
   input += synapse0x17ceaf0();
   input += synapse0x17ceb30();
   input += synapse0x17ceb70();
   input += synapse0x17cebb0();
   input += synapse0x17cebf0();
   input += synapse0x17cec30();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17ce2a0() {
   double input = input0x17ce2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17cec70() {
   double input = -1.50085;
   input += synapse0x17cefb0();
   input += synapse0x17ceff0();
   input += synapse0x17cf030();
   input += synapse0x17cf070();
   input += synapse0x17cf0b0();
   input += synapse0x17cf0f0();
   input += synapse0x17cf130();
   input += synapse0x17cf170();
   input += synapse0x17cf1b0();
   input += synapse0x17cf1f0();
   input += synapse0x17cf230();
   input += synapse0x17cf270();
   input += synapse0x17cf2b0();
   input += synapse0x17cf2f0();
   input += synapse0x17cf330();
   input += synapse0x17cf370();
   input += synapse0x17cee00();
   input += synapse0x17cee40();
   input += synapse0x17cf4c0();
   input += synapse0x17cf500();
   input += synapse0x17cf540();
   input += synapse0x17cf580();
   input += synapse0x17cf5c0();
   input += synapse0x17cf600();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17cec70() {
   double input = input0x17cec70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17cf640() {
   double input = 1.45683;
   input += synapse0x17cf980();
   input += synapse0x17cf9c0();
   input += synapse0x17cfa00();
   input += synapse0x17cfa40();
   input += synapse0x17cfa80();
   input += synapse0x17cfac0();
   input += synapse0x17cfb00();
   input += synapse0x17cfb40();
   input += synapse0x17cfb80();
   input += synapse0x17cfbc0();
   input += synapse0x17cfc00();
   input += synapse0x17cfc40();
   input += synapse0x17cfc80();
   input += synapse0x17cfcc0();
   input += synapse0x17cfd00();
   input += synapse0x17cfd40();
   input += synapse0x17cf7d0();
   input += synapse0x17cf810();
   input += synapse0x17cfe90();
   input += synapse0x17cfed0();
   input += synapse0x17cff10();
   input += synapse0x17cff50();
   input += synapse0x17cff90();
   input += synapse0x17cffd0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17cf640() {
   double input = input0x17cf640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17d6840() {
   double input = -0.397264;
   input += synapse0x17ac570();
   input += synapse0x17ac5b0();
   input += synapse0x17ada80();
   input += synapse0x17adac0();
   input += synapse0x17ae450();
   input += synapse0x17ae490();
   input += synapse0x17af220();
   input += synapse0x17af260();
   input += synapse0x17afbf0();
   input += synapse0x17afc30();
   input += synapse0x17b05c0();
   input += synapse0x17b0600();
   input += synapse0x17b10a0();
   input += synapse0x17b10e0();
   input += synapse0x17b1a70();
   input += synapse0x17b1ab0();
   input += synapse0x17aeb50();
   input += synapse0x17aeb90();
   input += synapse0x17b3620();
   input += synapse0x17b3660();
   input += synapse0x17b3ff0();
   input += synapse0x17b4030();
   input += synapse0x17b49c0();
   input += synapse0x17b4a00();
   input += synapse0x17b5390();
   input += synapse0x17b53d0();
   input += synapse0x17a9500();
   input += synapse0x17a9540();
   input += synapse0x17b7480();
   input += synapse0x17b74c0();
   input += synapse0x17b7e50();
   input += synapse0x17b7e90();
   input += synapse0x17b8820();
   input += synapse0x17b8860();
   input += synapse0x17b91f0();
   input += synapse0x17b9230();
   input += synapse0x17b9bc0();
   input += synapse0x17b9c00();
   input += synapse0x17b2710();
   input += synapse0x17b2750();
   input += synapse0x17bbfc0();
   input += synapse0x17bc000();
   input += synapse0x17bc950();
   input += synapse0x17bc990();
   input += synapse0x17bd320();
   input += synapse0x17bd360();
   input += synapse0x17bdcf0();
   input += synapse0x17bdd30();
   input += synapse0x17be6c0();
   input += synapse0x17be700();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17d6840() {
   double input = input0x17d6840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17d6be0() {
   double input = -0.531653;
   input += synapse0x17c0e00();
   input += synapse0x17c0e40();
   input += synapse0x17b63c0();
   input += synapse0x17b6400();
   input += synapse0x17c39e0();
   input += synapse0x17c3a20();
   input += synapse0x17c43b0();
   input += synapse0x17c43f0();
   input += synapse0x17c4d80();
   input += synapse0x17c4dc0();
   input += synapse0x17c5750();
   input += synapse0x17c5790();
   input += synapse0x17c6120();
   input += synapse0x17c6160();
   input += synapse0x17c6af0();
   input += synapse0x17c6b30();
   input += synapse0x17c74c0();
   input += synapse0x17c7500();
   input += synapse0x17c7e90();
   input += synapse0x17c7ed0();
   input += synapse0x17c8a70();
   input += synapse0x17c8ab0();
   input += synapse0x17c9440();
   input += synapse0x17c9480();
   input += synapse0x17ba2c0();
   input += synapse0x17ba300();
   input += synapse0x17bac90();
   input += synapse0x17bacd0();
   input += synapse0x17bb660();
   input += synapse0x17bb6a0();
   input += synapse0x17cdb80();
   input += synapse0x17cdbc0();
   input += synapse0x17ce550();
   input += synapse0x17ce590();
   input += synapse0x17cef20();
   input += synapse0x17cef60();
   input += synapse0x17cf8f0();
   input += synapse0x17cf930();
   input += synapse0x17ab7e0();
   input += synapse0x17ab820();
   input += synapse0x17bf090();
   input += synapse0x17bf0d0();
   input += synapse0x17d0010();
   input += synapse0x17d0050();
   input += synapse0x17d0090();
   input += synapse0x17d00d0();
   input += synapse0x17d6f80();
   input += synapse0x17d6fc0();
   input += synapse0x17d7000();
   input += synapse0x17d7040();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17d6be0() {
   double input = input0x17d6be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17d7080() {
   double input = -0.0634028;
   input += synapse0x17d73c0();
   input += synapse0x17d7400();
   input += synapse0x17d7440();
   input += synapse0x17d7480();
   input += synapse0x17d74c0();
   input += synapse0x17d7500();
   input += synapse0x17d7540();
   input += synapse0x17d7580();
   input += synapse0x17d75c0();
   input += synapse0x17d7600();
   input += synapse0x17d7640();
   input += synapse0x17d7680();
   input += synapse0x17d76c0();
   input += synapse0x17d7700();
   input += synapse0x17d7740();
   input += synapse0x17d7780();
   input += synapse0x17d7210();
   input += synapse0x17d7250();
   input += synapse0x17d78d0();
   input += synapse0x17d7910();
   input += synapse0x17d7950();
   input += synapse0x17d7990();
   input += synapse0x17d79d0();
   input += synapse0x17d7a10();
   input += synapse0x17d7a50();
   input += synapse0x17d7a90();
   input += synapse0x17d7ad0();
   input += synapse0x17d7b10();
   input += synapse0x17d7b50();
   input += synapse0x17d7b90();
   input += synapse0x17d7bd0();
   input += synapse0x17d7c10();
   input += synapse0x17d77c0();
   input += synapse0x17d7800();
   input += synapse0x17d7840();
   input += synapse0x17d7880();
   input += synapse0x17d7e60();
   input += synapse0x17d7ea0();
   input += synapse0x17d7ee0();
   input += synapse0x17d7f20();
   input += synapse0x17d7f60();
   input += synapse0x17d7fa0();
   input += synapse0x17d7fe0();
   input += synapse0x17d8020();
   input += synapse0x17d8060();
   input += synapse0x17d80a0();
   input += synapse0x17d80e0();
   input += synapse0x17d8120();
   input += synapse0x17d8160();
   input += synapse0x17d81a0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17d7080() {
   double input = input0x17d7080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17d81e0() {
   double input = 0.112433;
   input += synapse0x17d8520();
   input += synapse0x17d8560();
   input += synapse0x17d85a0();
   input += synapse0x17d85e0();
   input += synapse0x17d8620();
   input += synapse0x17d8660();
   input += synapse0x17d86a0();
   input += synapse0x17d86e0();
   input += synapse0x17d8720();
   input += synapse0x17d8760();
   input += synapse0x17d87a0();
   input += synapse0x17d87e0();
   input += synapse0x17d8820();
   input += synapse0x17d8860();
   input += synapse0x17d88a0();
   input += synapse0x17d88e0();
   input += synapse0x17d8370();
   input += synapse0x17d83b0();
   input += synapse0x17d8a30();
   input += synapse0x17d8a70();
   input += synapse0x17d8ab0();
   input += synapse0x17d8af0();
   input += synapse0x17d8b30();
   input += synapse0x17d8b70();
   input += synapse0x17d8bb0();
   input += synapse0x17d8bf0();
   input += synapse0x17d8c30();
   input += synapse0x17d8c70();
   input += synapse0x17d8cb0();
   input += synapse0x17d8cf0();
   input += synapse0x17d8d30();
   input += synapse0x17d8d70();
   input += synapse0x17d8920();
   input += synapse0x17d8960();
   input += synapse0x17d89a0();
   input += synapse0x17d89e0();
   input += synapse0x17d8fc0();
   input += synapse0x17d9000();
   input += synapse0x17d9040();
   input += synapse0x17d9080();
   input += synapse0x17d90c0();
   input += synapse0x17d9100();
   input += synapse0x17d9140();
   input += synapse0x17d9180();
   input += synapse0x17d91c0();
   input += synapse0x17d9200();
   input += synapse0x17d9240();
   input += synapse0x17d9280();
   input += synapse0x17d92c0();
   input += synapse0x17d9300();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17d81e0() {
   double input = input0x17d81e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17d9340() {
   double input = -0.788534;
   input += synapse0x17d9680();
   input += synapse0x17d96c0();
   input += synapse0x17d9700();
   input += synapse0x17d9740();
   input += synapse0x17d9780();
   input += synapse0x17d97c0();
   input += synapse0x17d9800();
   input += synapse0x17d9840();
   input += synapse0x17d9880();
   input += synapse0x17d98c0();
   input += synapse0x17d9900();
   input += synapse0x17d9940();
   input += synapse0x17d9980();
   input += synapse0x17d99c0();
   input += synapse0x17d9a00();
   input += synapse0x17d9a40();
   input += synapse0x17d94d0();
   input += synapse0x17d9510();
   input += synapse0x17d9b90();
   input += synapse0x17d9bd0();
   input += synapse0x17d9c10();
   input += synapse0x17d9c50();
   input += synapse0x17d9c90();
   input += synapse0x17d9cd0();
   input += synapse0x17d9d10();
   input += synapse0x17d9d50();
   input += synapse0x17d9d90();
   input += synapse0x17d9dd0();
   input += synapse0x17d9e10();
   input += synapse0x17d9e50();
   input += synapse0x17d9e90();
   input += synapse0x17d9ed0();
   input += synapse0x17d9a80();
   input += synapse0x17d9ac0();
   input += synapse0x17d9b00();
   input += synapse0x17d9b40();
   input += synapse0x17da120();
   input += synapse0x17da160();
   input += synapse0x17da1a0();
   input += synapse0x17da1e0();
   input += synapse0x17da220();
   input += synapse0x17da260();
   input += synapse0x17da2a0();
   input += synapse0x17da2e0();
   input += synapse0x17da320();
   input += synapse0x17da360();
   input += synapse0x17da3a0();
   input += synapse0x17da3e0();
   input += synapse0x17da420();
   input += synapse0x17da460();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17d9340() {
   double input = input0x17d9340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x17da4a0() {
   double input = 1.85454;
   input += synapse0x17ab580();
   input += synapse0x17da6c0();
   input += synapse0x17da700();
   input += synapse0x17da740();
   input += synapse0x17da780();
   return input;
}

double NNfunction_ss_sLdL::neuron0x17da4a0() {
   double input = input0x17da4a0();
   return (input * 1)+0;
}

double NNfunction_ss_sLdL::synapse0x15663d0() {
   return (neuron0x17a6560()*-0.113707);
}

double NNfunction_ss_sLdL::synapse0x17a6420() {
   return (neuron0x17a68a0()*-0.463263);
}

double NNfunction_ss_sLdL::synapse0x17a6460() {
   return (neuron0x17a6be0()*-0.685579);
}

double NNfunction_ss_sLdL::synapse0x17ab870() {
   return (neuron0x17a6f20()*0.698754);
}

double NNfunction_ss_sLdL::synapse0x17ab8b0() {
   return (neuron0x17a7260()*0.00831554);
}

double NNfunction_ss_sLdL::synapse0x17ab8f0() {
   return (neuron0x17a75a0()*0.303176);
}

double NNfunction_ss_sLdL::synapse0x17ab930() {
   return (neuron0x17a78e0()*-0.327076);
}

double NNfunction_ss_sLdL::synapse0x17ab970() {
   return (neuron0x17a7c20()*-0.2965);
}

double NNfunction_ss_sLdL::synapse0x17ab9b0() {
   return (neuron0x17a7f60()*-0.0845305);
}

double NNfunction_ss_sLdL::synapse0x17ab9f0() {
   return (neuron0x17a82a0()*0.234981);
}

double NNfunction_ss_sLdL::synapse0x17aba30() {
   return (neuron0x17a85e0()*0.156992);
}

double NNfunction_ss_sLdL::synapse0x17aba70() {
   return (neuron0x17a8920()*-0.80478);
}

double NNfunction_ss_sLdL::synapse0x17abab0() {
   return (neuron0x17a8c60()*-0.283913);
}

double NNfunction_ss_sLdL::synapse0x17abaf0() {
   return (neuron0x17a8fa0()*-0.24873);
}

double NNfunction_ss_sLdL::synapse0x17abb30() {
   return (neuron0x17a92e0()*0.420256);
}

double NNfunction_ss_sLdL::synapse0x17abb70() {
   return (neuron0x17a9620()*-0.255315);
}

double NNfunction_ss_sLdL::synapse0x17a6390() {
   return (neuron0x17a9960()*-0.106833);
}

double NNfunction_ss_sLdL::synapse0x17a63d0() {
   return (neuron0x17a9ec0()*-0.0854288);
}

double NNfunction_ss_sLdL::synapse0x1557c70() {
   return (neuron0x17aa0e0()*0.224996);
}

double NNfunction_ss_sLdL::synapse0x1557cb0() {
   return (neuron0x17aa420()*0.0304687);
}

double NNfunction_ss_sLdL::synapse0x17abdd0() {
   return (neuron0x17aa760()*0.186229);
}

double NNfunction_ss_sLdL::synapse0x17abe10() {
   return (neuron0x17aaaa0()*0.0865704);
}

double NNfunction_ss_sLdL::synapse0x17abe50() {
   return (neuron0x17aade0()*0.0160007);
}

double NNfunction_ss_sLdL::synapse0x17abe90() {
   return (neuron0x17ab120()*0.310418);
}

double NNfunction_ss_sLdL::synapse0x17ac210() {
   return (neuron0x17a6560()*0.0133406);
}

double NNfunction_ss_sLdL::synapse0x17ac250() {
   return (neuron0x17a68a0()*0.163408);
}

double NNfunction_ss_sLdL::synapse0x17ac290() {
   return (neuron0x17a6be0()*0.37611);
}

double NNfunction_ss_sLdL::synapse0x17ac2d0() {
   return (neuron0x17a6f20()*-0.323206);
}

double NNfunction_ss_sLdL::synapse0x17ac310() {
   return (neuron0x17a7260()*0.0457403);
}

double NNfunction_ss_sLdL::synapse0x17ac350() {
   return (neuron0x17a75a0()*-0.134671);
}

double NNfunction_ss_sLdL::synapse0x17ac390() {
   return (neuron0x17a78e0()*0.207777);
}

double NNfunction_ss_sLdL::synapse0x17ac3d0() {
   return (neuron0x17a7c20()*0.332413);
}

double NNfunction_ss_sLdL::synapse0x17ac410() {
   return (neuron0x17a7f60()*0.0655156);
}

double NNfunction_ss_sLdL::synapse0x17abcc0() {
   return (neuron0x17a82a0()*0.15668);
}

double NNfunction_ss_sLdL::synapse0x17abd00() {
   return (neuron0x17a85e0()*0.141483);
}

double NNfunction_ss_sLdL::synapse0x17abd40() {
   return (neuron0x17a8920()*-0.325692);
}

double NNfunction_ss_sLdL::synapse0x17abd80() {
   return (neuron0x17a8c60()*-0.414128);
}

double NNfunction_ss_sLdL::synapse0x17ac660() {
   return (neuron0x17a8fa0()*-0.0727244);
}

double NNfunction_ss_sLdL::synapse0x17ac6a0() {
   return (neuron0x17a92e0()*-0.0711039);
}

double NNfunction_ss_sLdL::synapse0x17ac6e0() {
   return (neuron0x17a9620()*0.308362);
}

double NNfunction_ss_sLdL::synapse0x17ac060() {
   return (neuron0x17a9960()*0.235069);
}

double NNfunction_ss_sLdL::synapse0x17ac0a0() {
   return (neuron0x17a9ec0()*0.18115);
}

double NNfunction_ss_sLdL::synapse0x17ac830() {
   return (neuron0x17aa0e0()*-0.132618);
}

double NNfunction_ss_sLdL::synapse0x17ac870() {
   return (neuron0x17aa420()*-0.0722255);
}

double NNfunction_ss_sLdL::synapse0x17ac8b0() {
   return (neuron0x17aa760()*-0.203125);
}

double NNfunction_ss_sLdL::synapse0x17ac8f0() {
   return (neuron0x17aaaa0()*0.105446);
}

double NNfunction_ss_sLdL::synapse0x17ac930() {
   return (neuron0x17aade0()*-0.0104662);
}

double NNfunction_ss_sLdL::synapse0x17ac970() {
   return (neuron0x17ab120()*-0.0558968);
}

double NNfunction_ss_sLdL::synapse0x17accf0() {
   return (neuron0x17a6560()*-0.00453889);
}

double NNfunction_ss_sLdL::synapse0x17acd30() {
   return (neuron0x17a68a0()*0.0970864);
}

double NNfunction_ss_sLdL::synapse0x17acd70() {
   return (neuron0x17a6be0()*-0.36943);
}

double NNfunction_ss_sLdL::synapse0x17acdb0() {
   return (neuron0x17a6f20()*0.114796);
}

double NNfunction_ss_sLdL::synapse0x17acdf0() {
   return (neuron0x17a7260()*-0.049011);
}

double NNfunction_ss_sLdL::synapse0x17ace30() {
   return (neuron0x17a75a0()*0.00945328);
}

double NNfunction_ss_sLdL::synapse0x17ace70() {
   return (neuron0x17a78e0()*-0.0754636);
}

double NNfunction_ss_sLdL::synapse0x17aceb0() {
   return (neuron0x17a7c20()*-0.0387873);
}

double NNfunction_ss_sLdL::synapse0x17acef0() {
   return (neuron0x17a7f60()*0.0919559);
}

double NNfunction_ss_sLdL::synapse0x17acf30() {
   return (neuron0x17a82a0()*-0.0553735);
}

double NNfunction_ss_sLdL::synapse0x17acf70() {
   return (neuron0x17a85e0()*0.00196664);
}

double NNfunction_ss_sLdL::synapse0x17acfb0() {
   return (neuron0x17a8920()*0.2273);
}

double NNfunction_ss_sLdL::synapse0x17acff0() {
   return (neuron0x17a8c60()*-0.0557254);
}

double NNfunction_ss_sLdL::synapse0x17ad030() {
   return (neuron0x17a8fa0()*0.200302);
}

double NNfunction_ss_sLdL::synapse0x17ad070() {
   return (neuron0x17a92e0()*-0.395024);
}

double NNfunction_ss_sLdL::synapse0x17ad0b0() {
   return (neuron0x17a9620()*-0.523445);
}

double NNfunction_ss_sLdL::synapse0x17acb40() {
   return (neuron0x17a9960()*0.291004);
}

double NNfunction_ss_sLdL::synapse0x17acb80() {
   return (neuron0x17a9ec0()*-0.275341);
}

double NNfunction_ss_sLdL::synapse0x1565ac0() {
   return (neuron0x17aa0e0()*-0.265423);
}

double NNfunction_ss_sLdL::synapse0x1565b00() {
   return (neuron0x17aa420()*0.00104578);
}

double NNfunction_ss_sLdL::synapse0x17955f0() {
   return (neuron0x17aa760()*0.041206);
}

double NNfunction_ss_sLdL::synapse0x1795630() {
   return (neuron0x17aaaa0()*-0.00490417);
}

double NNfunction_ss_sLdL::synapse0x1795670() {
   return (neuron0x17aade0()*-0.00537022);
}

double NNfunction_ss_sLdL::synapse0x17a64a0() {
   return (neuron0x17ab120()*0.076363);
}

double NNfunction_ss_sLdL::synapse0x17ac600() {
   return (neuron0x17a6560()*0.0289837);
}

double NNfunction_ss_sLdL::synapse0x17a64e0() {
   return (neuron0x17a68a0()*0.344841);
}

double NNfunction_ss_sLdL::synapse0x17a6520() {
   return (neuron0x17a6be0()*-0.96177);
}

double NNfunction_ss_sLdL::synapse0x17ad200() {
   return (neuron0x17a6f20()*0.182676);
}

double NNfunction_ss_sLdL::synapse0x17ad240() {
   return (neuron0x17a7260()*-0.153468);
}

double NNfunction_ss_sLdL::synapse0x17ad280() {
   return (neuron0x17a75a0()*-0.00110659);
}

double NNfunction_ss_sLdL::synapse0x17ad2c0() {
   return (neuron0x17a78e0()*-0.0399291);
}

double NNfunction_ss_sLdL::synapse0x17ad300() {
   return (neuron0x17a7c20()*-0.197797);
}

double NNfunction_ss_sLdL::synapse0x17ad340() {
   return (neuron0x17a7f60()*-0.224144);
}

double NNfunction_ss_sLdL::synapse0x17ad380() {
   return (neuron0x17a82a0()*0.065577);
}

double NNfunction_ss_sLdL::synapse0x17ad3c0() {
   return (neuron0x17a85e0()*-0.112411);
}

double NNfunction_ss_sLdL::synapse0x17ad400() {
   return (neuron0x17a8920()*0.0246076);
}

double NNfunction_ss_sLdL::synapse0x17ad440() {
   return (neuron0x17a8c60()*0.0990257);
}

double NNfunction_ss_sLdL::synapse0x17ad480() {
   return (neuron0x17a8fa0()*-0.318101);
}

double NNfunction_ss_sLdL::synapse0x17ad4c0() {
   return (neuron0x17a92e0()*0.353362);
}

double NNfunction_ss_sLdL::synapse0x17ad500() {
   return (neuron0x17a9620()*-0.323104);
}

double NNfunction_ss_sLdL::synapse0x17ac450() {
   return (neuron0x17a9960()*-0.130402);
}

double NNfunction_ss_sLdL::synapse0x17ac490() {
   return (neuron0x17a9ec0()*0.0635787);
}

double NNfunction_ss_sLdL::synapse0x17ad650() {
   return (neuron0x17aa0e0()*-0.22012);
}

double NNfunction_ss_sLdL::synapse0x17ad690() {
   return (neuron0x17aa420()*0.487197);
}

double NNfunction_ss_sLdL::synapse0x17ad6d0() {
   return (neuron0x17aa760()*-0.1627);
}

double NNfunction_ss_sLdL::synapse0x17ad710() {
   return (neuron0x17aaaa0()*-0.0683257);
}

double NNfunction_ss_sLdL::synapse0x17ad750() {
   return (neuron0x17aade0()*0.0934037);
}

double NNfunction_ss_sLdL::synapse0x17ad790() {
   return (neuron0x17ab120()*0.0120436);
}

double NNfunction_ss_sLdL::synapse0x17adb10() {
   return (neuron0x17a6560()*-0.00358325);
}

double NNfunction_ss_sLdL::synapse0x17adb50() {
   return (neuron0x17a68a0()*-0.00813258);
}

double NNfunction_ss_sLdL::synapse0x17adb90() {
   return (neuron0x17a6be0()*-0.0473357);
}

double NNfunction_ss_sLdL::synapse0x17adbd0() {
   return (neuron0x17a6f20()*-0.234175);
}

double NNfunction_ss_sLdL::synapse0x17adc10() {
   return (neuron0x17a7260()*0.0158658);
}

double NNfunction_ss_sLdL::synapse0x17adc50() {
   return (neuron0x17a75a0()*-0.0578942);
}

double NNfunction_ss_sLdL::synapse0x17adc90() {
   return (neuron0x17a78e0()*0.032404);
}

double NNfunction_ss_sLdL::synapse0x17adcd0() {
   return (neuron0x17a7c20()*0.0122992);
}

double NNfunction_ss_sLdL::synapse0x17add10() {
   return (neuron0x17a7f60()*-0.000269461);
}

double NNfunction_ss_sLdL::synapse0x17add50() {
   return (neuron0x17a82a0()*0.0514761);
}

double NNfunction_ss_sLdL::synapse0x17add90() {
   return (neuron0x17a85e0()*0.0225254);
}

double NNfunction_ss_sLdL::synapse0x17addd0() {
   return (neuron0x17a8920()*1.88336);
}

double NNfunction_ss_sLdL::synapse0x17ade10() {
   return (neuron0x17a8c60()*-1.11314);
}

double NNfunction_ss_sLdL::synapse0x17ade50() {
   return (neuron0x17a8fa0()*0.0446376);
}

double NNfunction_ss_sLdL::synapse0x17ade90() {
   return (neuron0x17a92e0()*-0.0289369);
}

double NNfunction_ss_sLdL::synapse0x17aded0() {
   return (neuron0x17a9620()*0.0698968);
}

double NNfunction_ss_sLdL::synapse0x17ad960() {
   return (neuron0x17a9960()*0.0383081);
}

double NNfunction_ss_sLdL::synapse0x17ad9a0() {
   return (neuron0x17a9ec0()*0.0408316);
}

double NNfunction_ss_sLdL::synapse0x17ae020() {
   return (neuron0x17aa0e0()*0.00619885);
}

double NNfunction_ss_sLdL::synapse0x17ae060() {
   return (neuron0x17aa420()*0.00357269);
}

double NNfunction_ss_sLdL::synapse0x17ae0a0() {
   return (neuron0x17aa760()*0.00442391);
}

double NNfunction_ss_sLdL::synapse0x17ae0e0() {
   return (neuron0x17aaaa0()*-0.0561311);
}

double NNfunction_ss_sLdL::synapse0x17ae120() {
   return (neuron0x17aade0()*0.0297096);
}

double NNfunction_ss_sLdL::synapse0x17ae160() {
   return (neuron0x17ab120()*0.0251883);
}

double NNfunction_ss_sLdL::synapse0x17ae4e0() {
   return (neuron0x17a6560()*0.100284);
}

double NNfunction_ss_sLdL::synapse0x17ae520() {
   return (neuron0x17a68a0()*0.543093);
}

double NNfunction_ss_sLdL::synapse0x17ae560() {
   return (neuron0x17a6be0()*-0.218419);
}

double NNfunction_ss_sLdL::synapse0x17ae5a0() {
   return (neuron0x17a6f20()*-0.698812);
}

double NNfunction_ss_sLdL::synapse0x17ae5e0() {
   return (neuron0x17a7260()*-0.109983);
}

double NNfunction_ss_sLdL::synapse0x17ae620() {
   return (neuron0x17a75a0()*-0.105333);
}

double NNfunction_ss_sLdL::synapse0x17ae660() {
   return (neuron0x17a78e0()*0.304595);
}

double NNfunction_ss_sLdL::synapse0x17ae6a0() {
   return (neuron0x17a7c20()*0.00410111);
}

double NNfunction_ss_sLdL::synapse0x17ae6e0() {
   return (neuron0x17a7f60()*0.503318);
}

double NNfunction_ss_sLdL::synapse0x1565e30() {
   return (neuron0x17a82a0()*0.11471);
}

double NNfunction_ss_sLdL::synapse0x1565e70() {
   return (neuron0x17a85e0()*0.273987);
}

double NNfunction_ss_sLdL::synapse0x1565eb0() {
   return (neuron0x17a8920()*0.122545);
}

double NNfunction_ss_sLdL::synapse0x1565ef0() {
   return (neuron0x17a8c60()*-0.358738);
}

double NNfunction_ss_sLdL::synapse0x1565f30() {
   return (neuron0x17a8fa0()*-0.446339);
}

double NNfunction_ss_sLdL::synapse0x1565f70() {
   return (neuron0x17a92e0()*0.511602);
}

double NNfunction_ss_sLdL::synapse0x1565fb0() {
   return (neuron0x17a9620()*-0.368143);
}

double NNfunction_ss_sLdL::synapse0x17ae330() {
   return (neuron0x17a9960()*-0.734104);
}

double NNfunction_ss_sLdL::synapse0x17ae370() {
   return (neuron0x17a9ec0()*0.0888395);
}

double NNfunction_ss_sLdL::synapse0x1566100() {
   return (neuron0x17aa0e0()*-0.100457);
}

double NNfunction_ss_sLdL::synapse0x1566140() {
   return (neuron0x17aa420()*-0.133767);
}

double NNfunction_ss_sLdL::synapse0x1566180() {
   return (neuron0x17aa760()*0.15687);
}

double NNfunction_ss_sLdL::synapse0x15661c0() {
   return (neuron0x17aaaa0()*0.447099);
}

double NNfunction_ss_sLdL::synapse0x1566200() {
   return (neuron0x17aade0()*-0.0858914);
}

double NNfunction_ss_sLdL::synapse0x17aef30() {
   return (neuron0x17ab120()*0.0350248);
}

double NNfunction_ss_sLdL::synapse0x17af2b0() {
   return (neuron0x17a6560()*0.120591);
}

double NNfunction_ss_sLdL::synapse0x17af2f0() {
   return (neuron0x17a68a0()*-0.441583);
}

double NNfunction_ss_sLdL::synapse0x17af330() {
   return (neuron0x17a6be0()*-1.12262);
}

double NNfunction_ss_sLdL::synapse0x17af370() {
   return (neuron0x17a6f20()*-0.419118);
}

double NNfunction_ss_sLdL::synapse0x17af3b0() {
   return (neuron0x17a7260()*-0.0698905);
}

double NNfunction_ss_sLdL::synapse0x17af3f0() {
   return (neuron0x17a75a0()*-0.197037);
}

double NNfunction_ss_sLdL::synapse0x17af430() {
   return (neuron0x17a78e0()*0.319291);
}

double NNfunction_ss_sLdL::synapse0x17af470() {
   return (neuron0x17a7c20()*0.28833);
}

double NNfunction_ss_sLdL::synapse0x17af4b0() {
   return (neuron0x17a7f60()*0.109062);
}

double NNfunction_ss_sLdL::synapse0x17af4f0() {
   return (neuron0x17a82a0()*-0.103344);
}

double NNfunction_ss_sLdL::synapse0x17af530() {
   return (neuron0x17a85e0()*0.069537);
}

double NNfunction_ss_sLdL::synapse0x17af570() {
   return (neuron0x17a8920()*-0.816062);
}

double NNfunction_ss_sLdL::synapse0x17af5b0() {
   return (neuron0x17a8c60()*-0.804054);
}

double NNfunction_ss_sLdL::synapse0x17af5f0() {
   return (neuron0x17a8fa0()*0.110332);
}

double NNfunction_ss_sLdL::synapse0x17af630() {
   return (neuron0x17a92e0()*0.0575796);
}

double NNfunction_ss_sLdL::synapse0x17af670() {
   return (neuron0x17a9620()*0.340501);
}

double NNfunction_ss_sLdL::synapse0x17af100() {
   return (neuron0x17a9960()*0.0513898);
}

double NNfunction_ss_sLdL::synapse0x17af140() {
   return (neuron0x17a9ec0()*0.100767);
}

double NNfunction_ss_sLdL::synapse0x17af7c0() {
   return (neuron0x17aa0e0()*-0.35935);
}

double NNfunction_ss_sLdL::synapse0x17af800() {
   return (neuron0x17aa420()*-0.193454);
}

double NNfunction_ss_sLdL::synapse0x17af840() {
   return (neuron0x17aa760()*0.00033968);
}

double NNfunction_ss_sLdL::synapse0x17af880() {
   return (neuron0x17aaaa0()*-0.0829712);
}

double NNfunction_ss_sLdL::synapse0x17af8c0() {
   return (neuron0x17aade0()*-0.244778);
}

double NNfunction_ss_sLdL::synapse0x17af900() {
   return (neuron0x17ab120()*-0.293432);
}

double NNfunction_ss_sLdL::synapse0x17afc80() {
   return (neuron0x17a6560()*0.584442);
}

double NNfunction_ss_sLdL::synapse0x17afcc0() {
   return (neuron0x17a68a0()*-0.0444848);
}

double NNfunction_ss_sLdL::synapse0x17afd00() {
   return (neuron0x17a6be0()*0.00614107);
}

double NNfunction_ss_sLdL::synapse0x17afd40() {
   return (neuron0x17a6f20()*-0.826221);
}

double NNfunction_ss_sLdL::synapse0x17afd80() {
   return (neuron0x17a7260()*0.290181);
}

double NNfunction_ss_sLdL::synapse0x17afdc0() {
   return (neuron0x17a75a0()*-0.427964);
}

double NNfunction_ss_sLdL::synapse0x17afe00() {
   return (neuron0x17a78e0()*-0.352578);
}

double NNfunction_ss_sLdL::synapse0x17afe40() {
   return (neuron0x17a7c20()*-0.667911);
}

double NNfunction_ss_sLdL::synapse0x17afe80() {
   return (neuron0x17a7f60()*0.374379);
}

double NNfunction_ss_sLdL::synapse0x17afec0() {
   return (neuron0x17a82a0()*-0.239529);
}

double NNfunction_ss_sLdL::synapse0x17aff00() {
   return (neuron0x17a85e0()*0.371921);
}

double NNfunction_ss_sLdL::synapse0x17aff40() {
   return (neuron0x17a8920()*0.528796);
}

double NNfunction_ss_sLdL::synapse0x17aff80() {
   return (neuron0x17a8c60()*0.603153);
}

double NNfunction_ss_sLdL::synapse0x17affc0() {
   return (neuron0x17a8fa0()*-0.119604);
}

double NNfunction_ss_sLdL::synapse0x17b0000() {
   return (neuron0x17a92e0()*0.122402);
}

double NNfunction_ss_sLdL::synapse0x17b0040() {
   return (neuron0x17a9620()*0.389641);
}

double NNfunction_ss_sLdL::synapse0x17afad0() {
   return (neuron0x17a9960()*-0.0619805);
}

double NNfunction_ss_sLdL::synapse0x17afb10() {
   return (neuron0x17a9ec0()*0.101349);
}

double NNfunction_ss_sLdL::synapse0x17b0190() {
   return (neuron0x17aa0e0()*-0.234559);
}

double NNfunction_ss_sLdL::synapse0x17b01d0() {
   return (neuron0x17aa420()*-0.130787);
}

double NNfunction_ss_sLdL::synapse0x17b0210() {
   return (neuron0x17aa760()*0.286489);
}

double NNfunction_ss_sLdL::synapse0x17b0250() {
   return (neuron0x17aaaa0()*-0.196895);
}

double NNfunction_ss_sLdL::synapse0x17b0290() {
   return (neuron0x17aade0()*-0.37341);
}

double NNfunction_ss_sLdL::synapse0x17b02d0() {
   return (neuron0x17ab120()*0.194518);
}

double NNfunction_ss_sLdL::synapse0x17a9db0() {
   return (neuron0x17a6560()*0.0955304);
}

double NNfunction_ss_sLdL::synapse0x17a9df0() {
   return (neuron0x17a68a0()*0.106565);
}

double NNfunction_ss_sLdL::synapse0x17a9e30() {
   return (neuron0x17a6be0()*0.222196);
}

double NNfunction_ss_sLdL::synapse0x17a9e70() {
   return (neuron0x17a6f20()*-0.980828);
}

double NNfunction_ss_sLdL::synapse0x17b0860() {
   return (neuron0x17a7260()*0.134779);
}

double NNfunction_ss_sLdL::synapse0x17b08a0() {
   return (neuron0x17a75a0()*0.113314);
}

double NNfunction_ss_sLdL::synapse0x17b08e0() {
   return (neuron0x17a78e0()*-0.0406941);
}

double NNfunction_ss_sLdL::synapse0x17b0920() {
   return (neuron0x17a7c20()*-0.129173);
}

double NNfunction_ss_sLdL::synapse0x17b0960() {
   return (neuron0x17a7f60()*0.113637);
}

double NNfunction_ss_sLdL::synapse0x17b09a0() {
   return (neuron0x17a82a0()*-0.0608797);
}

double NNfunction_ss_sLdL::synapse0x17b09e0() {
   return (neuron0x17a85e0()*0.0410667);
}

double NNfunction_ss_sLdL::synapse0x17b0a20() {
   return (neuron0x17a8920()*0.259328);
}

double NNfunction_ss_sLdL::synapse0x17b0a60() {
   return (neuron0x17a8c60()*0.281107);
}

double NNfunction_ss_sLdL::synapse0x17b0aa0() {
   return (neuron0x17a8fa0()*0.0768031);
}

double NNfunction_ss_sLdL::synapse0x17b0ae0() {
   return (neuron0x17a92e0()*-0.0290657);
}

double NNfunction_ss_sLdL::synapse0x17b0b20() {
   return (neuron0x17a9620()*0.0432093);
}

double NNfunction_ss_sLdL::synapse0x17b04a0() {
   return (neuron0x17a9960()*0.119501);
}

double NNfunction_ss_sLdL::synapse0x17b04e0() {
   return (neuron0x17a9ec0()*0.474322);
}

double NNfunction_ss_sLdL::synapse0x17b0c70() {
   return (neuron0x17aa0e0()*0.0888204);
}

double NNfunction_ss_sLdL::synapse0x17b0cb0() {
   return (neuron0x17aa420()*0.212962);
}

double NNfunction_ss_sLdL::synapse0x17b0cf0() {
   return (neuron0x17aa760()*0.241274);
}

double NNfunction_ss_sLdL::synapse0x17b0d30() {
   return (neuron0x17aaaa0()*0.3178);
}

double NNfunction_ss_sLdL::synapse0x17b0d70() {
   return (neuron0x17aade0()*-0.0764429);
}

double NNfunction_ss_sLdL::synapse0x17b0db0() {
   return (neuron0x17ab120()*0.0900321);
}

double NNfunction_ss_sLdL::synapse0x17b1130() {
   return (neuron0x17a6560()*0.0160987);
}

double NNfunction_ss_sLdL::synapse0x17b1170() {
   return (neuron0x17a68a0()*-0.00102542);
}

double NNfunction_ss_sLdL::synapse0x17b11b0() {
   return (neuron0x17a6be0()*0.0117976);
}

double NNfunction_ss_sLdL::synapse0x17b11f0() {
   return (neuron0x17a6f20()*1.13106);
}

double NNfunction_ss_sLdL::synapse0x17b1230() {
   return (neuron0x17a7260()*0.0040671);
}

double NNfunction_ss_sLdL::synapse0x17b1270() {
   return (neuron0x17a75a0()*-0.00132066);
}

double NNfunction_ss_sLdL::synapse0x17b12b0() {
   return (neuron0x17a78e0()*-0.00482477);
}

double NNfunction_ss_sLdL::synapse0x17b12f0() {
   return (neuron0x17a7c20()*-0.00519722);
}

double NNfunction_ss_sLdL::synapse0x17b1330() {
   return (neuron0x17a7f60()*0.00474828);
}

double NNfunction_ss_sLdL::synapse0x17b1370() {
   return (neuron0x17a82a0()*0.015263);
}

double NNfunction_ss_sLdL::synapse0x17b13b0() {
   return (neuron0x17a85e0()*0.0111652);
}

double NNfunction_ss_sLdL::synapse0x17b13f0() {
   return (neuron0x17a8920()*-0.0119351);
}

double NNfunction_ss_sLdL::synapse0x17b1430() {
   return (neuron0x17a8c60()*0.115178);
}

double NNfunction_ss_sLdL::synapse0x17b1470() {
   return (neuron0x17a8fa0()*-0.0299922);
}

double NNfunction_ss_sLdL::synapse0x17b14b0() {
   return (neuron0x17a92e0()*-0.00633003);
}

double NNfunction_ss_sLdL::synapse0x17b14f0() {
   return (neuron0x17a9620()*-0.0157589);
}

double NNfunction_ss_sLdL::synapse0x17b0f80() {
   return (neuron0x17a9960()*-0.0170516);
}

double NNfunction_ss_sLdL::synapse0x17b0fc0() {
   return (neuron0x17a9ec0()*0.00635462);
}

double NNfunction_ss_sLdL::synapse0x17b1640() {
   return (neuron0x17aa0e0()*0.00717795);
}

double NNfunction_ss_sLdL::synapse0x17b1680() {
   return (neuron0x17aa420()*-0.00973291);
}

double NNfunction_ss_sLdL::synapse0x17b16c0() {
   return (neuron0x17aa760()*-0.000604356);
}

double NNfunction_ss_sLdL::synapse0x17b1700() {
   return (neuron0x17aaaa0()*0.00410894);
}

double NNfunction_ss_sLdL::synapse0x17b1740() {
   return (neuron0x17aade0()*0.00649091);
}

double NNfunction_ss_sLdL::synapse0x17b1780() {
   return (neuron0x17ab120()*0.00312364);
}

double NNfunction_ss_sLdL::synapse0x17b1b00() {
   return (neuron0x17a6560()*-0.170026);
}

double NNfunction_ss_sLdL::synapse0x17b1b40() {
   return (neuron0x17a68a0()*0.380923);
}

double NNfunction_ss_sLdL::synapse0x17b1b80() {
   return (neuron0x17a6be0()*-0.167898);
}

double NNfunction_ss_sLdL::synapse0x17b1bc0() {
   return (neuron0x17a6f20()*-0.0760404);
}

double NNfunction_ss_sLdL::synapse0x17b1c00() {
   return (neuron0x17a7260()*0.932822);
}

double NNfunction_ss_sLdL::synapse0x17b1c40() {
   return (neuron0x17a75a0()*-0.109125);
}

double NNfunction_ss_sLdL::synapse0x17b1c80() {
   return (neuron0x17a78e0()*0.103644);
}

double NNfunction_ss_sLdL::synapse0x17b1cc0() {
   return (neuron0x17a7c20()*-0.249328);
}

double NNfunction_ss_sLdL::synapse0x17b1d00() {
   return (neuron0x17a7f60()*0.229472);
}

double NNfunction_ss_sLdL::synapse0x17b1d40() {
   return (neuron0x17a82a0()*0.708057);
}

double NNfunction_ss_sLdL::synapse0x17b1d80() {
   return (neuron0x17a85e0()*0.177483);
}

double NNfunction_ss_sLdL::synapse0x17b1dc0() {
   return (neuron0x17a8920()*0.17325);
}

double NNfunction_ss_sLdL::synapse0x17b1e00() {
   return (neuron0x17a8c60()*-0.440899);
}

double NNfunction_ss_sLdL::synapse0x17b1e40() {
   return (neuron0x17a8fa0()*-0.0377182);
}

double NNfunction_ss_sLdL::synapse0x17b1e80() {
   return (neuron0x17a92e0()*0.684526);
}

double NNfunction_ss_sLdL::synapse0x17b1ec0() {
   return (neuron0x17a9620()*1.08548);
}

double NNfunction_ss_sLdL::synapse0x17b1950() {
   return (neuron0x17a9960()*-0.158115);
}

double NNfunction_ss_sLdL::synapse0x17b1990() {
   return (neuron0x17a9ec0()*-0.488369);
}

double NNfunction_ss_sLdL::synapse0x17ae720() {
   return (neuron0x17aa0e0()*-0.384704);
}

double NNfunction_ss_sLdL::synapse0x17ae760() {
   return (neuron0x17aa420()*0.255277);
}

double NNfunction_ss_sLdL::synapse0x17ae7a0() {
   return (neuron0x17aa760()*-0.609636);
}

double NNfunction_ss_sLdL::synapse0x17ae7e0() {
   return (neuron0x17aaaa0()*0.524481);
}

double NNfunction_ss_sLdL::synapse0x17ae820() {
   return (neuron0x17aade0()*-0.252085);
}

double NNfunction_ss_sLdL::synapse0x17ae860() {
   return (neuron0x17ab120()*0.364484);
}

double NNfunction_ss_sLdL::synapse0x17aebe0() {
   return (neuron0x17a6560()*-0.00859851);
}

double NNfunction_ss_sLdL::synapse0x17aec20() {
   return (neuron0x17a68a0()*0.000481733);
}

double NNfunction_ss_sLdL::synapse0x17aec60() {
   return (neuron0x17a6be0()*0.0340232);
}

double NNfunction_ss_sLdL::synapse0x17aeca0() {
   return (neuron0x17a6f20()*0.111607);
}

double NNfunction_ss_sLdL::synapse0x17aece0() {
   return (neuron0x17a7260()*-0.00148511);
}

double NNfunction_ss_sLdL::synapse0x17aed20() {
   return (neuron0x17a75a0()*-0.00453985);
}

double NNfunction_ss_sLdL::synapse0x17aed60() {
   return (neuron0x17a78e0()*-0.000642264);
}

double NNfunction_ss_sLdL::synapse0x17aeda0() {
   return (neuron0x17a7c20()*-0.00428636);
}

double NNfunction_ss_sLdL::synapse0x17aede0() {
   return (neuron0x17a7f60()*-0.00222334);
}

double NNfunction_ss_sLdL::synapse0x17aee20() {
   return (neuron0x17a82a0()*0.00609474);
}

double NNfunction_ss_sLdL::synapse0x17aee60() {
   return (neuron0x17a85e0()*0.00218566);
}

double NNfunction_ss_sLdL::synapse0x17aeea0() {
   return (neuron0x17a8920()*1.67816);
}

double NNfunction_ss_sLdL::synapse0x17aeee0() {
   return (neuron0x17a8c60()*-0.29702);
}

double NNfunction_ss_sLdL::synapse0x17b3020() {
   return (neuron0x17a8fa0()*0.0275987);
}

double NNfunction_ss_sLdL::synapse0x17b3060() {
   return (neuron0x17a92e0()*-0.000442828);
}

double NNfunction_ss_sLdL::synapse0x17b30a0() {
   return (neuron0x17a9620()*-0.00109491);
}

double NNfunction_ss_sLdL::synapse0x17aea30() {
   return (neuron0x17a9960()*0.00640063);
}

double NNfunction_ss_sLdL::synapse0x17aea70() {
   return (neuron0x17a9ec0()*-0.00244775);
}

double NNfunction_ss_sLdL::synapse0x17b31f0() {
   return (neuron0x17aa0e0()*0.00113488);
}

double NNfunction_ss_sLdL::synapse0x17b3230() {
   return (neuron0x17aa420()*-0.00454643);
}

double NNfunction_ss_sLdL::synapse0x17b3270() {
   return (neuron0x17aa760()*0.0030274);
}

double NNfunction_ss_sLdL::synapse0x17b32b0() {
   return (neuron0x17aaaa0()*-0.00201198);
}

double NNfunction_ss_sLdL::synapse0x17b32f0() {
   return (neuron0x17aade0()*0.00562752);
}

double NNfunction_ss_sLdL::synapse0x17b3330() {
   return (neuron0x17ab120()*0.00855989);
}

double NNfunction_ss_sLdL::synapse0x17b36b0() {
   return (neuron0x17a6560()*0.0372267);
}

double NNfunction_ss_sLdL::synapse0x17b36f0() {
   return (neuron0x17a68a0()*0.0445834);
}

double NNfunction_ss_sLdL::synapse0x17b3730() {
   return (neuron0x17a6be0()*-0.455356);
}

double NNfunction_ss_sLdL::synapse0x17b3770() {
   return (neuron0x17a6f20()*-0.897826);
}

double NNfunction_ss_sLdL::synapse0x17b37b0() {
   return (neuron0x17a7260()*-0.212955);
}

double NNfunction_ss_sLdL::synapse0x17b37f0() {
   return (neuron0x17a75a0()*-0.138097);
}

double NNfunction_ss_sLdL::synapse0x17b3830() {
   return (neuron0x17a78e0()*-0.12693);
}

double NNfunction_ss_sLdL::synapse0x17b3870() {
   return (neuron0x17a7c20()*-0.0689434);
}

double NNfunction_ss_sLdL::synapse0x17b38b0() {
   return (neuron0x17a7f60()*-0.167243);
}

double NNfunction_ss_sLdL::synapse0x17b38f0() {
   return (neuron0x17a82a0()*0.33645);
}

double NNfunction_ss_sLdL::synapse0x17b3930() {
   return (neuron0x17a85e0()*-0.153324);
}

double NNfunction_ss_sLdL::synapse0x17b3970() {
   return (neuron0x17a8920()*0.0933688);
}

double NNfunction_ss_sLdL::synapse0x17b39b0() {
   return (neuron0x17a8c60()*-0.194601);
}

double NNfunction_ss_sLdL::synapse0x17b39f0() {
   return (neuron0x17a8fa0()*-0.0337739);
}

double NNfunction_ss_sLdL::synapse0x17b3a30() {
   return (neuron0x17a92e0()*-0.230157);
}

double NNfunction_ss_sLdL::synapse0x17b3a70() {
   return (neuron0x17a9620()*0.133934);
}

double NNfunction_ss_sLdL::synapse0x17b3500() {
   return (neuron0x17a9960()*0.0362519);
}

double NNfunction_ss_sLdL::synapse0x17b3540() {
   return (neuron0x17a9ec0()*-0.0391602);
}

double NNfunction_ss_sLdL::synapse0x17b3bc0() {
   return (neuron0x17aa0e0()*-0.0452412);
}

double NNfunction_ss_sLdL::synapse0x17b3c00() {
   return (neuron0x17aa420()*0.018188);
}

double NNfunction_ss_sLdL::synapse0x17b3c40() {
   return (neuron0x17aa760()*-0.174296);
}

double NNfunction_ss_sLdL::synapse0x17b3c80() {
   return (neuron0x17aaaa0()*-0.0139353);
}

double NNfunction_ss_sLdL::synapse0x17b3cc0() {
   return (neuron0x17aade0()*0.153705);
}

double NNfunction_ss_sLdL::synapse0x17b3d00() {
   return (neuron0x17ab120()*-0.0828343);
}

double NNfunction_ss_sLdL::synapse0x17b4080() {
   return (neuron0x17a6560()*-0.00845982);
}

double NNfunction_ss_sLdL::synapse0x17b40c0() {
   return (neuron0x17a68a0()*0.0107925);
}

double NNfunction_ss_sLdL::synapse0x17b4100() {
   return (neuron0x17a6be0()*0.0378347);
}

double NNfunction_ss_sLdL::synapse0x17b4140() {
   return (neuron0x17a6f20()*-3.60564);
}

double NNfunction_ss_sLdL::synapse0x17b4180() {
   return (neuron0x17a7260()*0.00681133);
}

double NNfunction_ss_sLdL::synapse0x17b41c0() {
   return (neuron0x17a75a0()*0.0153829);
}

double NNfunction_ss_sLdL::synapse0x17b4200() {
   return (neuron0x17a78e0()*0.00332136);
}

double NNfunction_ss_sLdL::synapse0x17b4240() {
   return (neuron0x17a7c20()*0.0144691);
}

double NNfunction_ss_sLdL::synapse0x17b4280() {
   return (neuron0x17a7f60()*-0.00943691);
}

double NNfunction_ss_sLdL::synapse0x17b42c0() {
   return (neuron0x17a82a0()*-0.00905244);
}

double NNfunction_ss_sLdL::synapse0x17b4300() {
   return (neuron0x17a85e0()*0.00451689);
}

double NNfunction_ss_sLdL::synapse0x17b4340() {
   return (neuron0x17a8920()*-0.0531403);
}

double NNfunction_ss_sLdL::synapse0x17b4380() {
   return (neuron0x17a8c60()*-0.21049);
}

double NNfunction_ss_sLdL::synapse0x17b43c0() {
   return (neuron0x17a8fa0()*-0.0270717);
}

double NNfunction_ss_sLdL::synapse0x17b4400() {
   return (neuron0x17a92e0()*0.0226895);
}

double NNfunction_ss_sLdL::synapse0x17b4440() {
   return (neuron0x17a9620()*0.0278288);
}

double NNfunction_ss_sLdL::synapse0x17b3ed0() {
   return (neuron0x17a9960()*-0.0314463);
}

double NNfunction_ss_sLdL::synapse0x17b3f10() {
   return (neuron0x17a9ec0()*0.039022);
}

double NNfunction_ss_sLdL::synapse0x17b4590() {
   return (neuron0x17aa0e0()*0.0251844);
}

double NNfunction_ss_sLdL::synapse0x17b45d0() {
   return (neuron0x17aa420()*0.0317739);
}

double NNfunction_ss_sLdL::synapse0x17b4610() {
   return (neuron0x17aa760()*-0.0137149);
}

double NNfunction_ss_sLdL::synapse0x17b4650() {
   return (neuron0x17aaaa0()*-0.0104);
}

double NNfunction_ss_sLdL::synapse0x17b4690() {
   return (neuron0x17aade0()*0.00753911);
}

double NNfunction_ss_sLdL::synapse0x17b46d0() {
   return (neuron0x17ab120()*0.00955711);
}

double NNfunction_ss_sLdL::synapse0x17b4a50() {
   return (neuron0x17a6560()*-0.00294751);
}

double NNfunction_ss_sLdL::synapse0x17b4a90() {
   return (neuron0x17a68a0()*0.0114352);
}

double NNfunction_ss_sLdL::synapse0x17b4ad0() {
   return (neuron0x17a6be0()*0.00967744);
}

double NNfunction_ss_sLdL::synapse0x17b4b10() {
   return (neuron0x17a6f20()*0.0084372);
}

double NNfunction_ss_sLdL::synapse0x17b4b50() {
   return (neuron0x17a7260()*-0.0332966);
}

double NNfunction_ss_sLdL::synapse0x17b4b90() {
   return (neuron0x17a75a0()*-0.000181405);
}

double NNfunction_ss_sLdL::synapse0x17b4bd0() {
   return (neuron0x17a78e0()*-0.0202478);
}

double NNfunction_ss_sLdL::synapse0x17b4c10() {
   return (neuron0x17a7c20()*-0.0256612);
}

double NNfunction_ss_sLdL::synapse0x17b4c50() {
   return (neuron0x17a7f60()*0.0291303);
}

double NNfunction_ss_sLdL::synapse0x17b4c90() {
   return (neuron0x17a82a0()*-0.0441419);
}

double NNfunction_ss_sLdL::synapse0x17b4cd0() {
   return (neuron0x17a85e0()*-0.0715337);
}

double NNfunction_ss_sLdL::synapse0x17b4d10() {
   return (neuron0x17a8920()*-0.231963);
}

double NNfunction_ss_sLdL::synapse0x17b4d50() {
   return (neuron0x17a8c60()*3.57756);
}

double NNfunction_ss_sLdL::synapse0x17b4d90() {
   return (neuron0x17a8fa0()*0.0149003);
}

double NNfunction_ss_sLdL::synapse0x17b4dd0() {
   return (neuron0x17a92e0()*0.0550505);
}

double NNfunction_ss_sLdL::synapse0x17b4e10() {
   return (neuron0x17a9620()*0.0456477);
}

double NNfunction_ss_sLdL::synapse0x17b48a0() {
   return (neuron0x17a9960()*-0.0114294);
}

double NNfunction_ss_sLdL::synapse0x17b48e0() {
   return (neuron0x17a9ec0()*-0.020673);
}

double NNfunction_ss_sLdL::synapse0x17b4f60() {
   return (neuron0x17aa0e0()*0.023304);
}

double NNfunction_ss_sLdL::synapse0x17b4fa0() {
   return (neuron0x17aa420()*-0.00169424);
}

double NNfunction_ss_sLdL::synapse0x17b4fe0() {
   return (neuron0x17aa760()*-0.0319679);
}

double NNfunction_ss_sLdL::synapse0x17b5020() {
   return (neuron0x17aaaa0()*-0.0256919);
}

double NNfunction_ss_sLdL::synapse0x17b5060() {
   return (neuron0x17aade0()*0.012014);
}

double NNfunction_ss_sLdL::synapse0x17b50a0() {
   return (neuron0x17ab120()*-0.0229505);
}

double NNfunction_ss_sLdL::synapse0x17b5420() {
   return (neuron0x17a6560()*-0.18569);
}

double NNfunction_ss_sLdL::synapse0x17a6780() {
   return (neuron0x17a68a0()*-0.360182);
}

double NNfunction_ss_sLdL::synapse0x17a67c0() {
   return (neuron0x17a6be0()*0.0650597);
}

double NNfunction_ss_sLdL::synapse0x17a6ac0() {
   return (neuron0x17a6f20()*-0.144283);
}

double NNfunction_ss_sLdL::synapse0x17a6b00() {
   return (neuron0x17a7260()*0.0963508);
}

double NNfunction_ss_sLdL::synapse0x17a6e00() {
   return (neuron0x17a75a0()*-0.0965689);
}

double NNfunction_ss_sLdL::synapse0x17a6e40() {
   return (neuron0x17a78e0()*-0.236497);
}

double NNfunction_ss_sLdL::synapse0x17a7140() {
   return (neuron0x17a7c20()*-0.00591861);
}

double NNfunction_ss_sLdL::synapse0x17a7180() {
   return (neuron0x17a7f60()*0.0813914);
}

double NNfunction_ss_sLdL::synapse0x17a7480() {
   return (neuron0x17a82a0()*0.452393);
}

double NNfunction_ss_sLdL::synapse0x17a74c0() {
   return (neuron0x17a85e0()*0.165625);
}

double NNfunction_ss_sLdL::synapse0x17a77c0() {
   return (neuron0x17a8920()*-0.578158);
}

double NNfunction_ss_sLdL::synapse0x17a7800() {
   return (neuron0x17a8c60()*-0.770015);
}

double NNfunction_ss_sLdL::synapse0x17a7b00() {
   return (neuron0x17a8fa0()*-0.15584);
}

double NNfunction_ss_sLdL::synapse0x17a7b40() {
   return (neuron0x17a92e0()*0.141322);
}

double NNfunction_ss_sLdL::synapse0x17a7e40() {
   return (neuron0x17a9620()*-0.00297567);
}

double NNfunction_ss_sLdL::synapse0x17a7e80() {
   return (neuron0x17a9960()*-0.0866562);
}

double NNfunction_ss_sLdL::synapse0x17a8180() {
   return (neuron0x17a9ec0()*-0.332564);
}

double NNfunction_ss_sLdL::synapse0x17a81c0() {
   return (neuron0x17aa0e0()*-0.325118);
}

double NNfunction_ss_sLdL::synapse0x17a84c0() {
   return (neuron0x17aa420()*-0.167921);
}

double NNfunction_ss_sLdL::synapse0x17a8500() {
   return (neuron0x17aa760()*-0.0371924);
}

double NNfunction_ss_sLdL::synapse0x17a8800() {
   return (neuron0x17aaaa0()*0.104253);
}

double NNfunction_ss_sLdL::synapse0x17a8840() {
   return (neuron0x17aade0()*-0.13841);
}

double NNfunction_ss_sLdL::synapse0x17a8b40() {
   return (neuron0x17ab120()*0.0838141);
}

double NNfunction_ss_sLdL::synapse0x17a8b80() {
   return (neuron0x17a6560()*-0.0148426);
}

double NNfunction_ss_sLdL::synapse0x17a9840() {
   return (neuron0x17a68a0()*0.0781427);
}

double NNfunction_ss_sLdL::synapse0x17a9880() {
   return (neuron0x17a6be0()*-0.15068);
}

double NNfunction_ss_sLdL::synapse0x17b5270() {
   return (neuron0x17a6f20()*3.66301);
}

double NNfunction_ss_sLdL::synapse0x17b52b0() {
   return (neuron0x17a7260()*0.00848209);
}

double NNfunction_ss_sLdL::synapse0x17a9b80() {
   return (neuron0x17a75a0()*-0.0172228);
}

double NNfunction_ss_sLdL::synapse0x17a9bc0() {
   return (neuron0x17a78e0()*0.0271991);
}

double NNfunction_ss_sLdL::synapse0x1557b50() {
   return (neuron0x17a7c20()*-0.00419853);
}

double NNfunction_ss_sLdL::synapse0x1557b90() {
   return (neuron0x17a7f60()*-0.00305652);
}

double NNfunction_ss_sLdL::synapse0x17aa300() {
   return (neuron0x17a82a0()*-0.0389667);
}

double NNfunction_ss_sLdL::synapse0x17aa340() {
   return (neuron0x17a85e0()*-0.0211266);
}

double NNfunction_ss_sLdL::synapse0x17aa640() {
   return (neuron0x17a8920()*-0.102773);
}

double NNfunction_ss_sLdL::synapse0x17aa680() {
   return (neuron0x17a8c60()*-0.112885);
}

double NNfunction_ss_sLdL::synapse0x17aa980() {
   return (neuron0x17a8fa0()*0.0117652);
}

double NNfunction_ss_sLdL::synapse0x17aa9c0() {
   return (neuron0x17a92e0()*0.0353637);
}

double NNfunction_ss_sLdL::synapse0x17aacc0() {
   return (neuron0x17a9620()*0.0584859);
}

double NNfunction_ss_sLdL::synapse0x17aad00() {
   return (neuron0x17a9960()*-0.0746361);
}

double NNfunction_ss_sLdL::synapse0x17ab000() {
   return (neuron0x17a9ec0()*-0.0880114);
}

double NNfunction_ss_sLdL::synapse0x17ab040() {
   return (neuron0x17aa0e0()*0.0199547);
}

double NNfunction_ss_sLdL::synapse0x17ab340() {
   return (neuron0x17aa420()*0.00813409);
}

double NNfunction_ss_sLdL::synapse0x17ab380() {
   return (neuron0x17aa760()*-0.0397206);
}

double NNfunction_ss_sLdL::synapse0x17a8e80() {
   return (neuron0x17aaaa0()*-0.000235994);
}

double NNfunction_ss_sLdL::synapse0x17a8ec0() {
   return (neuron0x17aade0()*-0.00328935);
}

double NNfunction_ss_sLdL::synapse0x17b7190() {
   return (neuron0x17ab120()*-0.0122122);
}

double NNfunction_ss_sLdL::synapse0x17b7510() {
   return (neuron0x17a6560()*-0.0844868);
}

double NNfunction_ss_sLdL::synapse0x17b7550() {
   return (neuron0x17a68a0()*-0.162206);
}

double NNfunction_ss_sLdL::synapse0x17b7590() {
   return (neuron0x17a6be0()*0.431023);
}

double NNfunction_ss_sLdL::synapse0x17b75d0() {
   return (neuron0x17a6f20()*-0.0418622);
}

double NNfunction_ss_sLdL::synapse0x17b7610() {
   return (neuron0x17a7260()*0.127676);
}

double NNfunction_ss_sLdL::synapse0x17b7650() {
   return (neuron0x17a75a0()*0.0173208);
}

double NNfunction_ss_sLdL::synapse0x17b7690() {
   return (neuron0x17a78e0()*0.271934);
}

double NNfunction_ss_sLdL::synapse0x17b76d0() {
   return (neuron0x17a7c20()*-0.450081);
}

double NNfunction_ss_sLdL::synapse0x17b7710() {
   return (neuron0x17a7f60()*-0.488901);
}

double NNfunction_ss_sLdL::synapse0x17b7750() {
   return (neuron0x17a82a0()*-0.138699);
}

double NNfunction_ss_sLdL::synapse0x17b7790() {
   return (neuron0x17a85e0()*0.488297);
}

double NNfunction_ss_sLdL::synapse0x17b77d0() {
   return (neuron0x17a8920()*1.06123);
}

double NNfunction_ss_sLdL::synapse0x17b7810() {
   return (neuron0x17a8c60()*0.934047);
}

double NNfunction_ss_sLdL::synapse0x17b7850() {
   return (neuron0x17a8fa0()*-0.225193);
}

double NNfunction_ss_sLdL::synapse0x17b7890() {
   return (neuron0x17a92e0()*0.0933861);
}

double NNfunction_ss_sLdL::synapse0x17b78d0() {
   return (neuron0x17a9620()*-0.0686382);
}

double NNfunction_ss_sLdL::synapse0x17b7360() {
   return (neuron0x17a9960()*0.429746);
}

double NNfunction_ss_sLdL::synapse0x17b73a0() {
   return (neuron0x17a9ec0()*0.0296836);
}

double NNfunction_ss_sLdL::synapse0x17b7a20() {
   return (neuron0x17aa0e0()*-0.29048);
}

double NNfunction_ss_sLdL::synapse0x17b7a60() {
   return (neuron0x17aa420()*0.500194);
}

double NNfunction_ss_sLdL::synapse0x17b7aa0() {
   return (neuron0x17aa760()*0.335134);
}

double NNfunction_ss_sLdL::synapse0x17b7ae0() {
   return (neuron0x17aaaa0()*0.063063);
}

double NNfunction_ss_sLdL::synapse0x17b7b20() {
   return (neuron0x17aade0()*0.46273);
}

double NNfunction_ss_sLdL::synapse0x17b7b60() {
   return (neuron0x17ab120()*-0.261052);
}

double NNfunction_ss_sLdL::synapse0x17b7ee0() {
   return (neuron0x17a6560()*-0.107476);
}

double NNfunction_ss_sLdL::synapse0x17b7f20() {
   return (neuron0x17a68a0()*0.0360216);
}

double NNfunction_ss_sLdL::synapse0x17b7f60() {
   return (neuron0x17a6be0()*0.527375);
}

double NNfunction_ss_sLdL::synapse0x17b7fa0() {
   return (neuron0x17a6f20()*0.520127);
}

double NNfunction_ss_sLdL::synapse0x17b7fe0() {
   return (neuron0x17a7260()*-0.176893);
}

double NNfunction_ss_sLdL::synapse0x17b8020() {
   return (neuron0x17a75a0()*-0.0377617);
}

double NNfunction_ss_sLdL::synapse0x17b8060() {
   return (neuron0x17a78e0()*0.0545649);
}

double NNfunction_ss_sLdL::synapse0x17b80a0() {
   return (neuron0x17a7c20()*0.109368);
}

double NNfunction_ss_sLdL::synapse0x17b80e0() {
   return (neuron0x17a7f60()*0.11367);
}

double NNfunction_ss_sLdL::synapse0x17b8120() {
   return (neuron0x17a82a0()*-0.0661382);
}

double NNfunction_ss_sLdL::synapse0x17b8160() {
   return (neuron0x17a85e0()*-0.128957);
}

double NNfunction_ss_sLdL::synapse0x17b81a0() {
   return (neuron0x17a8920()*0.64123);
}

double NNfunction_ss_sLdL::synapse0x17b81e0() {
   return (neuron0x17a8c60()*0.216088);
}

double NNfunction_ss_sLdL::synapse0x17b8220() {
   return (neuron0x17a8fa0()*0.000311689);
}

double NNfunction_ss_sLdL::synapse0x17b8260() {
   return (neuron0x17a92e0()*0.341721);
}

double NNfunction_ss_sLdL::synapse0x17b82a0() {
   return (neuron0x17a9620()*0.234335);
}

double NNfunction_ss_sLdL::synapse0x17b7d30() {
   return (neuron0x17a9960()*0.0194743);
}

double NNfunction_ss_sLdL::synapse0x17b7d70() {
   return (neuron0x17a9ec0()*-0.174212);
}

double NNfunction_ss_sLdL::synapse0x17b83f0() {
   return (neuron0x17aa0e0()*-0.194951);
}

double NNfunction_ss_sLdL::synapse0x17b8430() {
   return (neuron0x17aa420()*-0.00736095);
}

double NNfunction_ss_sLdL::synapse0x17b8470() {
   return (neuron0x17aa760()*-0.12092);
}

double NNfunction_ss_sLdL::synapse0x17b84b0() {
   return (neuron0x17aaaa0()*-0.0771286);
}

double NNfunction_ss_sLdL::synapse0x17b84f0() {
   return (neuron0x17aade0()*-0.0181715);
}

double NNfunction_ss_sLdL::synapse0x17b8530() {
   return (neuron0x17ab120()*0.0735243);
}

double NNfunction_ss_sLdL::synapse0x17b88b0() {
   return (neuron0x17a6560()*-0.267381);
}

double NNfunction_ss_sLdL::synapse0x17b88f0() {
   return (neuron0x17a68a0()*-0.115856);
}

double NNfunction_ss_sLdL::synapse0x17b8930() {
   return (neuron0x17a6be0()*-0.0790579);
}

double NNfunction_ss_sLdL::synapse0x17b8970() {
   return (neuron0x17a6f20()*0.275172);
}

double NNfunction_ss_sLdL::synapse0x17b89b0() {
   return (neuron0x17a7260()*0.0853114);
}

double NNfunction_ss_sLdL::synapse0x17b89f0() {
   return (neuron0x17a75a0()*0.0262162);
}

double NNfunction_ss_sLdL::synapse0x17b8a30() {
   return (neuron0x17a78e0()*0.0944102);
}

double NNfunction_ss_sLdL::synapse0x17b8a70() {
   return (neuron0x17a7c20()*-0.780702);
}

double NNfunction_ss_sLdL::synapse0x17b8ab0() {
   return (neuron0x17a7f60()*-0.0249874);
}

double NNfunction_ss_sLdL::synapse0x17b8af0() {
   return (neuron0x17a82a0()*-0.0580151);
}

double NNfunction_ss_sLdL::synapse0x17b8b30() {
   return (neuron0x17a85e0()*-0.0272605);
}

double NNfunction_ss_sLdL::synapse0x17b8b70() {
   return (neuron0x17a8920()*-0.582789);
}

double NNfunction_ss_sLdL::synapse0x17b8bb0() {
   return (neuron0x17a8c60()*-0.123169);
}

double NNfunction_ss_sLdL::synapse0x17b8bf0() {
   return (neuron0x17a8fa0()*0.275442);
}

double NNfunction_ss_sLdL::synapse0x17b8c30() {
   return (neuron0x17a92e0()*-0.0969355);
}

double NNfunction_ss_sLdL::synapse0x17b8c70() {
   return (neuron0x17a9620()*0.00104549);
}

double NNfunction_ss_sLdL::synapse0x17b8700() {
   return (neuron0x17a9960()*-0.425057);
}

double NNfunction_ss_sLdL::synapse0x17b8740() {
   return (neuron0x17a9ec0()*-0.267206);
}

double NNfunction_ss_sLdL::synapse0x17b8dc0() {
   return (neuron0x17aa0e0()*0.296892);
}

double NNfunction_ss_sLdL::synapse0x17b8e00() {
   return (neuron0x17aa420()*-0.123684);
}

double NNfunction_ss_sLdL::synapse0x17b8e40() {
   return (neuron0x17aa760()*0.0708558);
}

double NNfunction_ss_sLdL::synapse0x17b8e80() {
   return (neuron0x17aaaa0()*-0.30016);
}

double NNfunction_ss_sLdL::synapse0x17b8ec0() {
   return (neuron0x17aade0()*0.349015);
}

double NNfunction_ss_sLdL::synapse0x17b8f00() {
   return (neuron0x17ab120()*-0.182321);
}

double NNfunction_ss_sLdL::synapse0x17b9280() {
   return (neuron0x17a6560()*-0.121641);
}

double NNfunction_ss_sLdL::synapse0x17b92c0() {
   return (neuron0x17a68a0()*0.169354);
}

double NNfunction_ss_sLdL::synapse0x17b9300() {
   return (neuron0x17a6be0()*-0.837921);
}

double NNfunction_ss_sLdL::synapse0x17b9340() {
   return (neuron0x17a6f20()*0.299867);
}

double NNfunction_ss_sLdL::synapse0x17b9380() {
   return (neuron0x17a7260()*-0.329343);
}

double NNfunction_ss_sLdL::synapse0x17b93c0() {
   return (neuron0x17a75a0()*0.0413273);
}

double NNfunction_ss_sLdL::synapse0x17b9400() {
   return (neuron0x17a78e0()*0.350731);
}

double NNfunction_ss_sLdL::synapse0x17b9440() {
   return (neuron0x17a7c20()*-0.276711);
}

double NNfunction_ss_sLdL::synapse0x17b9480() {
   return (neuron0x17a7f60()*0.279108);
}

double NNfunction_ss_sLdL::synapse0x17b94c0() {
   return (neuron0x17a82a0()*-0.209903);
}

double NNfunction_ss_sLdL::synapse0x17b9500() {
   return (neuron0x17a85e0()*-0.290805);
}

double NNfunction_ss_sLdL::synapse0x17b9540() {
   return (neuron0x17a8920()*0.242239);
}

double NNfunction_ss_sLdL::synapse0x17b9580() {
   return (neuron0x17a8c60()*-0.111893);
}

double NNfunction_ss_sLdL::synapse0x17b95c0() {
   return (neuron0x17a8fa0()*-0.0545929);
}

double NNfunction_ss_sLdL::synapse0x17b9600() {
   return (neuron0x17a92e0()*-0.111212);
}

double NNfunction_ss_sLdL::synapse0x17b9640() {
   return (neuron0x17a9620()*0.756893);
}

double NNfunction_ss_sLdL::synapse0x17b90d0() {
   return (neuron0x17a9960()*-0.187833);
}

double NNfunction_ss_sLdL::synapse0x17b9110() {
   return (neuron0x17a9ec0()*0.791086);
}

double NNfunction_ss_sLdL::synapse0x17b9790() {
   return (neuron0x17aa0e0()*1.03166);
}

double NNfunction_ss_sLdL::synapse0x17b97d0() {
   return (neuron0x17aa420()*-0.394585);
}

double NNfunction_ss_sLdL::synapse0x17b9810() {
   return (neuron0x17aa760()*-0.127607);
}

double NNfunction_ss_sLdL::synapse0x17b9850() {
   return (neuron0x17aaaa0()*-0.0456172);
}

double NNfunction_ss_sLdL::synapse0x17b9890() {
   return (neuron0x17aade0()*0.312072);
}

double NNfunction_ss_sLdL::synapse0x17b98d0() {
   return (neuron0x17ab120()*-0.109366);
}

double NNfunction_ss_sLdL::synapse0x17b9c50() {
   return (neuron0x17a6560()*-0.00503596);
}

double NNfunction_ss_sLdL::synapse0x17b9c90() {
   return (neuron0x17a68a0()*0.021346);
}

double NNfunction_ss_sLdL::synapse0x17b9cd0() {
   return (neuron0x17a6be0()*-0.00772871);
}

double NNfunction_ss_sLdL::synapse0x17b9d10() {
   return (neuron0x17a6f20()*0.109098);
}

double NNfunction_ss_sLdL::synapse0x17b9d50() {
   return (neuron0x17a7260()*0.0219869);
}

double NNfunction_ss_sLdL::synapse0x17b9d90() {
   return (neuron0x17a75a0()*0.00736309);
}

double NNfunction_ss_sLdL::synapse0x17b9dd0() {
   return (neuron0x17a78e0()*0.0171262);
}

double NNfunction_ss_sLdL::synapse0x17b9e10() {
   return (neuron0x17a7c20()*0.00887884);
}

double NNfunction_ss_sLdL::synapse0x17b9e50() {
   return (neuron0x17a7f60()*0.0147951);
}

double NNfunction_ss_sLdL::synapse0x17b2010() {
   return (neuron0x17a82a0()*-0.0490227);
}

double NNfunction_ss_sLdL::synapse0x17b2050() {
   return (neuron0x17a85e0()*-0.0125538);
}

double NNfunction_ss_sLdL::synapse0x17b2090() {
   return (neuron0x17a8920()*0.417548);
}

double NNfunction_ss_sLdL::synapse0x17b20d0() {
   return (neuron0x17a8c60()*-2.45033);
}

double NNfunction_ss_sLdL::synapse0x17b2110() {
   return (neuron0x17a8fa0()*-0.026993);
}

double NNfunction_ss_sLdL::synapse0x17b2150() {
   return (neuron0x17a92e0()*0.0183137);
}

double NNfunction_ss_sLdL::synapse0x17b2190() {
   return (neuron0x17a9620()*-0.0288375);
}

double NNfunction_ss_sLdL::synapse0x17b9aa0() {
   return (neuron0x17a9960()*-0.0665524);
}

double NNfunction_ss_sLdL::synapse0x17b9ae0() {
   return (neuron0x17a9ec0()*-0.00202737);
}

double NNfunction_ss_sLdL::synapse0x17b22e0() {
   return (neuron0x17aa0e0()*-0.0057273);
}

double NNfunction_ss_sLdL::synapse0x17b2320() {
   return (neuron0x17aa420()*0.000429542);
}

double NNfunction_ss_sLdL::synapse0x17b2360() {
   return (neuron0x17aa760()*0.00401617);
}

double NNfunction_ss_sLdL::synapse0x17b23a0() {
   return (neuron0x17aaaa0()*-0.00939959);
}

double NNfunction_ss_sLdL::synapse0x17b23e0() {
   return (neuron0x17aade0()*-0.00703053);
}

double NNfunction_ss_sLdL::synapse0x17b2420() {
   return (neuron0x17ab120()*-0.00388677);
}

double NNfunction_ss_sLdL::synapse0x17b27a0() {
   return (neuron0x17a6560()*0.00696528);
}

double NNfunction_ss_sLdL::synapse0x17b27e0() {
   return (neuron0x17a68a0()*-0.00180625);
}

double NNfunction_ss_sLdL::synapse0x17b2820() {
   return (neuron0x17a6be0()*-0.045105);
}

double NNfunction_ss_sLdL::synapse0x17b2860() {
   return (neuron0x17a6f20()*-7.92357);
}

double NNfunction_ss_sLdL::synapse0x17b28a0() {
   return (neuron0x17a7260()*0.00127233);
}

double NNfunction_ss_sLdL::synapse0x17b28e0() {
   return (neuron0x17a75a0()*-0.0297263);
}

double NNfunction_ss_sLdL::synapse0x17b2920() {
   return (neuron0x17a78e0()*0.0265132);
}

double NNfunction_ss_sLdL::synapse0x17b2960() {
   return (neuron0x17a7c20()*0.0317411);
}

double NNfunction_ss_sLdL::synapse0x17b29a0() {
   return (neuron0x17a7f60()*0.00274973);
}

double NNfunction_ss_sLdL::synapse0x17b29e0() {
   return (neuron0x17a82a0()*-0.010969);
}

double NNfunction_ss_sLdL::synapse0x17b2a20() {
   return (neuron0x17a85e0()*-0.00266286);
}

double NNfunction_ss_sLdL::synapse0x17b2a60() {
   return (neuron0x17a8920()*-0.522701);
}

double NNfunction_ss_sLdL::synapse0x17b2aa0() {
   return (neuron0x17a8c60()*-1.16346);
}

double NNfunction_ss_sLdL::synapse0x17b2ae0() {
   return (neuron0x17a8fa0()*-0.0465518);
}

double NNfunction_ss_sLdL::synapse0x17b2b20() {
   return (neuron0x17a92e0()*-0.0165498);
}

double NNfunction_ss_sLdL::synapse0x17b2b60() {
   return (neuron0x17a9620()*0.00437557);
}

double NNfunction_ss_sLdL::synapse0x17b25f0() {
   return (neuron0x17a9960()*-0.0826766);
}

double NNfunction_ss_sLdL::synapse0x17b2630() {
   return (neuron0x17a9ec0()*0.0181666);
}

double NNfunction_ss_sLdL::synapse0x17b2cb0() {
   return (neuron0x17aa0e0()*0.0177167);
}

double NNfunction_ss_sLdL::synapse0x17b2cf0() {
   return (neuron0x17aa420()*-0.00506223);
}

double NNfunction_ss_sLdL::synapse0x17b2d30() {
   return (neuron0x17aa760()*0.00585828);
}

double NNfunction_ss_sLdL::synapse0x17b2d70() {
   return (neuron0x17aaaa0()*-0.000845064);
}

double NNfunction_ss_sLdL::synapse0x17b2db0() {
   return (neuron0x17aade0()*0.00865576);
}

double NNfunction_ss_sLdL::synapse0x17b2df0() {
   return (neuron0x17ab120()*0.0081409);
}

double NNfunction_ss_sLdL::synapse0x17b2fc0() {
   return (neuron0x17a6560()*-0.109852);
}

double NNfunction_ss_sLdL::synapse0x17bc050() {
   return (neuron0x17a68a0()*0.0205704);
}

double NNfunction_ss_sLdL::synapse0x17bc090() {
   return (neuron0x17a6be0()*-0.540002);
}

double NNfunction_ss_sLdL::synapse0x17bc0d0() {
   return (neuron0x17a6f20()*-1.17601);
}

double NNfunction_ss_sLdL::synapse0x17bc110() {
   return (neuron0x17a7260()*-0.0356839);
}

double NNfunction_ss_sLdL::synapse0x17bc150() {
   return (neuron0x17a75a0()*0.0350673);
}

double NNfunction_ss_sLdL::synapse0x17bc190() {
   return (neuron0x17a78e0()*-0.00874791);
}

double NNfunction_ss_sLdL::synapse0x17bc1d0() {
   return (neuron0x17a7c20()*0.023328);
}

double NNfunction_ss_sLdL::synapse0x17bc210() {
   return (neuron0x17a7f60()*-0.0156403);
}

double NNfunction_ss_sLdL::synapse0x17bc250() {
   return (neuron0x17a82a0()*-0.0885501);
}

double NNfunction_ss_sLdL::synapse0x17bc290() {
   return (neuron0x17a85e0()*-0.036586);
}

double NNfunction_ss_sLdL::synapse0x17bc2d0() {
   return (neuron0x17a8920()*-0.162358);
}

double NNfunction_ss_sLdL::synapse0x17bc310() {
   return (neuron0x17a8c60()*0.179024);
}

double NNfunction_ss_sLdL::synapse0x17bc350() {
   return (neuron0x17a8fa0()*-0.0536881);
}

double NNfunction_ss_sLdL::synapse0x17bc390() {
   return (neuron0x17a92e0()*0.0649349);
}

double NNfunction_ss_sLdL::synapse0x17bc3d0() {
   return (neuron0x17a9620()*0.0857545);
}

double NNfunction_ss_sLdL::synapse0x17bbea0() {
   return (neuron0x17a9960()*-0.0804436);
}

double NNfunction_ss_sLdL::synapse0x17bbee0() {
   return (neuron0x17a9ec0()*-0.0354056);
}

double NNfunction_ss_sLdL::synapse0x17bc520() {
   return (neuron0x17aa0e0()*0.0187095);
}

double NNfunction_ss_sLdL::synapse0x17bc560() {
   return (neuron0x17aa420()*0.0203625);
}

double NNfunction_ss_sLdL::synapse0x17bc5a0() {
   return (neuron0x17aa760()*-0.0332619);
}

double NNfunction_ss_sLdL::synapse0x17bc5e0() {
   return (neuron0x17aaaa0()*-0.0262211);
}

double NNfunction_ss_sLdL::synapse0x17bc620() {
   return (neuron0x17aade0()*-0.000833191);
}

double NNfunction_ss_sLdL::synapse0x17bc660() {
   return (neuron0x17ab120()*-0.00196352);
}

double NNfunction_ss_sLdL::synapse0x17bc9e0() {
   return (neuron0x17a6560()*-0.253585);
}

double NNfunction_ss_sLdL::synapse0x17bca20() {
   return (neuron0x17a68a0()*-0.148469);
}

double NNfunction_ss_sLdL::synapse0x17bca60() {
   return (neuron0x17a6be0()*-0.196343);
}

double NNfunction_ss_sLdL::synapse0x17bcaa0() {
   return (neuron0x17a6f20()*1.58266);
}

double NNfunction_ss_sLdL::synapse0x17bcae0() {
   return (neuron0x17a7260()*0.331283);
}

double NNfunction_ss_sLdL::synapse0x17bcb20() {
   return (neuron0x17a75a0()*-0.299796);
}

double NNfunction_ss_sLdL::synapse0x17bcb60() {
   return (neuron0x17a78e0()*0.223637);
}

double NNfunction_ss_sLdL::synapse0x17bcba0() {
   return (neuron0x17a7c20()*0.334457);
}

double NNfunction_ss_sLdL::synapse0x17bcbe0() {
   return (neuron0x17a7f60()*-0.0728383);
}

double NNfunction_ss_sLdL::synapse0x17bcc20() {
   return (neuron0x17a82a0()*-0.295011);
}

double NNfunction_ss_sLdL::synapse0x17bcc60() {
   return (neuron0x17a85e0()*0.0954861);
}

double NNfunction_ss_sLdL::synapse0x17bcca0() {
   return (neuron0x17a8920()*-0.8453);
}

double NNfunction_ss_sLdL::synapse0x17bcce0() {
   return (neuron0x17a8c60()*-1.76249);
}

double NNfunction_ss_sLdL::synapse0x17bcd20() {
   return (neuron0x17a8fa0()*0.0448371);
}

double NNfunction_ss_sLdL::synapse0x17bcd60() {
   return (neuron0x17a92e0()*0.145065);
}

double NNfunction_ss_sLdL::synapse0x17bcda0() {
   return (neuron0x17a9620()*-0.136679);
}

double NNfunction_ss_sLdL::synapse0x17bc830() {
   return (neuron0x17a9960()*-0.127388);
}

double NNfunction_ss_sLdL::synapse0x17bc870() {
   return (neuron0x17a9ec0()*-0.0608926);
}

double NNfunction_ss_sLdL::synapse0x17bcef0() {
   return (neuron0x17aa0e0()*0.26892);
}

double NNfunction_ss_sLdL::synapse0x17bcf30() {
   return (neuron0x17aa420()*-0.0550616);
}

double NNfunction_ss_sLdL::synapse0x17bcf70() {
   return (neuron0x17aa760()*-0.0450897);
}

double NNfunction_ss_sLdL::synapse0x17bcfb0() {
   return (neuron0x17aaaa0()*0.000194914);
}

double NNfunction_ss_sLdL::synapse0x17bcff0() {
   return (neuron0x17aade0()*0.0358966);
}

double NNfunction_ss_sLdL::synapse0x17bd030() {
   return (neuron0x17ab120()*0.163364);
}

double NNfunction_ss_sLdL::synapse0x17bd3b0() {
   return (neuron0x17a6560()*-0.170846);
}

double NNfunction_ss_sLdL::synapse0x17bd3f0() {
   return (neuron0x17a68a0()*-0.28903);
}

double NNfunction_ss_sLdL::synapse0x17bd430() {
   return (neuron0x17a6be0()*0.153159);
}

double NNfunction_ss_sLdL::synapse0x17bd470() {
   return (neuron0x17a6f20()*0.196978);
}

double NNfunction_ss_sLdL::synapse0x17bd4b0() {
   return (neuron0x17a7260()*-0.532658);
}

double NNfunction_ss_sLdL::synapse0x17bd4f0() {
   return (neuron0x17a75a0()*0.067335);
}

double NNfunction_ss_sLdL::synapse0x17bd530() {
   return (neuron0x17a78e0()*-0.563189);
}

double NNfunction_ss_sLdL::synapse0x17bd570() {
   return (neuron0x17a7c20()*0.25396);
}

double NNfunction_ss_sLdL::synapse0x17bd5b0() {
   return (neuron0x17a7f60()*-0.0775675);
}

double NNfunction_ss_sLdL::synapse0x17bd5f0() {
   return (neuron0x17a82a0()*-0.1712);
}

double NNfunction_ss_sLdL::synapse0x17bd630() {
   return (neuron0x17a85e0()*-0.551254);
}

double NNfunction_ss_sLdL::synapse0x17bd670() {
   return (neuron0x17a8920()*0.29477);
}

double NNfunction_ss_sLdL::synapse0x17bd6b0() {
   return (neuron0x17a8c60()*-0.490386);
}

double NNfunction_ss_sLdL::synapse0x17bd6f0() {
   return (neuron0x17a8fa0()*-0.529549);
}

double NNfunction_ss_sLdL::synapse0x17bd730() {
   return (neuron0x17a92e0()*1.29293);
}

double NNfunction_ss_sLdL::synapse0x17bd770() {
   return (neuron0x17a9620()*0.236196);
}

double NNfunction_ss_sLdL::synapse0x17bd200() {
   return (neuron0x17a9960()*-0.228572);
}

double NNfunction_ss_sLdL::synapse0x17bd240() {
   return (neuron0x17a9ec0()*-0.243518);
}

double NNfunction_ss_sLdL::synapse0x17bd8c0() {
   return (neuron0x17aa0e0()*-0.439238);
}

double NNfunction_ss_sLdL::synapse0x17bd900() {
   return (neuron0x17aa420()*0.164294);
}

double NNfunction_ss_sLdL::synapse0x17bd940() {
   return (neuron0x17aa760()*-0.114018);
}

double NNfunction_ss_sLdL::synapse0x17bd980() {
   return (neuron0x17aaaa0()*-0.467647);
}

double NNfunction_ss_sLdL::synapse0x17bd9c0() {
   return (neuron0x17aade0()*-0.0190476);
}

double NNfunction_ss_sLdL::synapse0x17bda00() {
   return (neuron0x17ab120()*0.36076);
}

double NNfunction_ss_sLdL::synapse0x17bdd80() {
   return (neuron0x17a6560()*0.166305);
}

double NNfunction_ss_sLdL::synapse0x17bddc0() {
   return (neuron0x17a68a0()*-0.321563);
}

double NNfunction_ss_sLdL::synapse0x17bde00() {
   return (neuron0x17a6be0()*-0.229318);
}

double NNfunction_ss_sLdL::synapse0x17bde40() {
   return (neuron0x17a6f20()*-0.413726);
}

double NNfunction_ss_sLdL::synapse0x17bde80() {
   return (neuron0x17a7260()*0.747915);
}

double NNfunction_ss_sLdL::synapse0x17bdec0() {
   return (neuron0x17a75a0()*-0.035865);
}

double NNfunction_ss_sLdL::synapse0x17bdf00() {
   return (neuron0x17a78e0()*0.215412);
}

double NNfunction_ss_sLdL::synapse0x17bdf40() {
   return (neuron0x17a7c20()*-0.0688176);
}

double NNfunction_ss_sLdL::synapse0x17bdf80() {
   return (neuron0x17a7f60()*0.0670212);
}

double NNfunction_ss_sLdL::synapse0x17bdfc0() {
   return (neuron0x17a82a0()*0.603172);
}

double NNfunction_ss_sLdL::synapse0x17be000() {
   return (neuron0x17a85e0()*-0.095604);
}

double NNfunction_ss_sLdL::synapse0x17be040() {
   return (neuron0x17a8920()*0.172494);
}

double NNfunction_ss_sLdL::synapse0x17be080() {
   return (neuron0x17a8c60()*0.793834);
}

double NNfunction_ss_sLdL::synapse0x17be0c0() {
   return (neuron0x17a8fa0()*0.105911);
}

double NNfunction_ss_sLdL::synapse0x17be100() {
   return (neuron0x17a92e0()*-0.106324);
}

double NNfunction_ss_sLdL::synapse0x17be140() {
   return (neuron0x17a9620()*-0.156416);
}

double NNfunction_ss_sLdL::synapse0x17bdbd0() {
   return (neuron0x17a9960()*-0.166922);
}

double NNfunction_ss_sLdL::synapse0x17bdc10() {
   return (neuron0x17a9ec0()*0.541097);
}

double NNfunction_ss_sLdL::synapse0x17be290() {
   return (neuron0x17aa0e0()*-0.0970221);
}

double NNfunction_ss_sLdL::synapse0x17be2d0() {
   return (neuron0x17aa420()*0.163882);
}

double NNfunction_ss_sLdL::synapse0x17be310() {
   return (neuron0x17aa760()*-0.384027);
}

double NNfunction_ss_sLdL::synapse0x17be350() {
   return (neuron0x17aaaa0()*0.0942807);
}

double NNfunction_ss_sLdL::synapse0x17be390() {
   return (neuron0x17aade0()*0.0710098);
}

double NNfunction_ss_sLdL::synapse0x17be3d0() {
   return (neuron0x17ab120()*-0.266085);
}

double NNfunction_ss_sLdL::synapse0x17be750() {
   return (neuron0x17a6560()*0.00581201);
}

double NNfunction_ss_sLdL::synapse0x17be790() {
   return (neuron0x17a68a0()*-0.007993);
}

double NNfunction_ss_sLdL::synapse0x17be7d0() {
   return (neuron0x17a6be0()*0.0105747);
}

double NNfunction_ss_sLdL::synapse0x17be810() {
   return (neuron0x17a6f20()*0.751711);
}

double NNfunction_ss_sLdL::synapse0x17be850() {
   return (neuron0x17a7260()*-0.00620473);
}

double NNfunction_ss_sLdL::synapse0x17be890() {
   return (neuron0x17a75a0()*0.0193568);
}

double NNfunction_ss_sLdL::synapse0x17be8d0() {
   return (neuron0x17a78e0()*-0.00708339);
}

double NNfunction_ss_sLdL::synapse0x17be910() {
   return (neuron0x17a7c20()*-0.0101517);
}

double NNfunction_ss_sLdL::synapse0x17be950() {
   return (neuron0x17a7f60()*0.0202734);
}

double NNfunction_ss_sLdL::synapse0x17be990() {
   return (neuron0x17a82a0()*-0.00632531);
}

double NNfunction_ss_sLdL::synapse0x17be9d0() {
   return (neuron0x17a85e0()*-0.00842501);
}

double NNfunction_ss_sLdL::synapse0x17bea10() {
   return (neuron0x17a8920()*-1.42518);
}

double NNfunction_ss_sLdL::synapse0x17bea50() {
   return (neuron0x17a8c60()*0.0265033);
}

double NNfunction_ss_sLdL::synapse0x17bea90() {
   return (neuron0x17a8fa0()*-0.027411);
}

double NNfunction_ss_sLdL::synapse0x17bead0() {
   return (neuron0x17a92e0()*-0.0133909);
}

double NNfunction_ss_sLdL::synapse0x17beb10() {
   return (neuron0x17a9620()*-0.0258558);
}

double NNfunction_ss_sLdL::synapse0x17be5a0() {
   return (neuron0x17a9960()*-0.00190769);
}

double NNfunction_ss_sLdL::synapse0x17be5e0() {
   return (neuron0x17a9ec0()*-0.0210269);
}

double NNfunction_ss_sLdL::synapse0x17bec60() {
   return (neuron0x17aa0e0()*-0.0216816);
}

double NNfunction_ss_sLdL::synapse0x17beca0() {
   return (neuron0x17aa420()*-0.000410378);
}

double NNfunction_ss_sLdL::synapse0x17bece0() {
   return (neuron0x17aa760()*0.0067797);
}

double NNfunction_ss_sLdL::synapse0x17bed20() {
   return (neuron0x17aaaa0()*0.00507476);
}

double NNfunction_ss_sLdL::synapse0x17bed60() {
   return (neuron0x17aade0()*-0.00437131);
}

double NNfunction_ss_sLdL::synapse0x17beda0() {
   return (neuron0x17ab120()*0.00511975);
}

double NNfunction_ss_sLdL::synapse0x17bf120() {
   return (neuron0x17a6560()*0.128026);
}

double NNfunction_ss_sLdL::synapse0x17bf160() {
   return (neuron0x17a68a0()*0.0519694);
}

double NNfunction_ss_sLdL::synapse0x17bf1a0() {
   return (neuron0x17a6be0()*-0.523631);
}

double NNfunction_ss_sLdL::synapse0x17bf1e0() {
   return (neuron0x17a6f20()*0.277516);
}

double NNfunction_ss_sLdL::synapse0x17bf220() {
   return (neuron0x17a7260()*0.170808);
}

double NNfunction_ss_sLdL::synapse0x17bf260() {
   return (neuron0x17a75a0()*0.252318);
}

double NNfunction_ss_sLdL::synapse0x17bf2a0() {
   return (neuron0x17a78e0()*0.0967816);
}

double NNfunction_ss_sLdL::synapse0x17bf2e0() {
   return (neuron0x17a7c20()*-0.0746601);
}

double NNfunction_ss_sLdL::synapse0x17bf320() {
   return (neuron0x17a7f60()*-0.366519);
}

double NNfunction_ss_sLdL::synapse0x17bf360() {
   return (neuron0x17a82a0()*-0.182277);
}

double NNfunction_ss_sLdL::synapse0x17bf3a0() {
   return (neuron0x17a85e0()*-0.737693);
}

double NNfunction_ss_sLdL::synapse0x17bf3e0() {
   return (neuron0x17a8920()*-0.238795);
}

double NNfunction_ss_sLdL::synapse0x17bf420() {
   return (neuron0x17a8c60()*-0.669626);
}

double NNfunction_ss_sLdL::synapse0x17bf460() {
   return (neuron0x17a8fa0()*0.491698);
}

double NNfunction_ss_sLdL::synapse0x17bf4a0() {
   return (neuron0x17a92e0()*-0.139747);
}

double NNfunction_ss_sLdL::synapse0x17bf4e0() {
   return (neuron0x17a9620()*0.131179);
}

double NNfunction_ss_sLdL::synapse0x17bef70() {
   return (neuron0x17a9960()*-0.187884);
}

double NNfunction_ss_sLdL::synapse0x17befb0() {
   return (neuron0x17a9ec0()*0.249792);
}

double NNfunction_ss_sLdL::synapse0x17bf630() {
   return (neuron0x17aa0e0()*-0.300094);
}

double NNfunction_ss_sLdL::synapse0x17bf670() {
   return (neuron0x17aa420()*0.346074);
}

double NNfunction_ss_sLdL::synapse0x17bf6b0() {
   return (neuron0x17aa760()*0.221569);
}

double NNfunction_ss_sLdL::synapse0x17bf6f0() {
   return (neuron0x17aaaa0()*0.53441);
}

double NNfunction_ss_sLdL::synapse0x17bf730() {
   return (neuron0x17aade0()*-0.144493);
}

double NNfunction_ss_sLdL::synapse0x17bf770() {
   return (neuron0x17ab120()*-0.0889644);
}

double NNfunction_ss_sLdL::synapse0x17bfaf0() {
   return (neuron0x17a6560()*0.244224);
}

double NNfunction_ss_sLdL::synapse0x17bfb30() {
   return (neuron0x17a68a0()*-0.0401438);
}

double NNfunction_ss_sLdL::synapse0x17bfb70() {
   return (neuron0x17a6be0()*0.0894361);
}

double NNfunction_ss_sLdL::synapse0x17bfbb0() {
   return (neuron0x17a6f20()*0.291586);
}

double NNfunction_ss_sLdL::synapse0x17bfbf0() {
   return (neuron0x17a7260()*0.135504);
}

double NNfunction_ss_sLdL::synapse0x17bfc30() {
   return (neuron0x17a75a0()*0.0332369);
}

double NNfunction_ss_sLdL::synapse0x17bfc70() {
   return (neuron0x17a78e0()*-0.0153732);
}

double NNfunction_ss_sLdL::synapse0x17bfcb0() {
   return (neuron0x17a7c20()*-0.0163575);
}

double NNfunction_ss_sLdL::synapse0x17bfcf0() {
   return (neuron0x17a7f60()*0.0855351);
}

double NNfunction_ss_sLdL::synapse0x17bfd30() {
   return (neuron0x17a82a0()*-0.0914657);
}

double NNfunction_ss_sLdL::synapse0x17bfd70() {
   return (neuron0x17a85e0()*-0.147312);
}

double NNfunction_ss_sLdL::synapse0x17bfdb0() {
   return (neuron0x17a8920()*-0.40266);
}

double NNfunction_ss_sLdL::synapse0x17bfdf0() {
   return (neuron0x17a8c60()*-0.508751);
}

double NNfunction_ss_sLdL::synapse0x17bfe30() {
   return (neuron0x17a8fa0()*-0.0335785);
}

double NNfunction_ss_sLdL::synapse0x17bfe70() {
   return (neuron0x17a92e0()*0.0258456);
}

double NNfunction_ss_sLdL::synapse0x17bfeb0() {
   return (neuron0x17a9620()*-0.0579087);
}

double NNfunction_ss_sLdL::synapse0x17bf940() {
   return (neuron0x17a9960()*-0.00169883);
}

double NNfunction_ss_sLdL::synapse0x17bf980() {
   return (neuron0x17a9ec0()*0.0350146);
}

double NNfunction_ss_sLdL::synapse0x17c0000() {
   return (neuron0x17aa0e0()*-0.221632);
}

double NNfunction_ss_sLdL::synapse0x17c0040() {
   return (neuron0x17aa420()*0.145616);
}

double NNfunction_ss_sLdL::synapse0x17c0080() {
   return (neuron0x17aa760()*-0.00172661);
}

double NNfunction_ss_sLdL::synapse0x17c00c0() {
   return (neuron0x17aaaa0()*0.00515993);
}

double NNfunction_ss_sLdL::synapse0x17c0100() {
   return (neuron0x17aade0()*0.0596737);
}

double NNfunction_ss_sLdL::synapse0x17c0140() {
   return (neuron0x17ab120()*-0.115909);
}

double NNfunction_ss_sLdL::synapse0x17c04c0() {
   return (neuron0x17a6560()*0.272328);
}

double NNfunction_ss_sLdL::synapse0x17c0500() {
   return (neuron0x17a68a0()*-0.282827);
}

double NNfunction_ss_sLdL::synapse0x17c0540() {
   return (neuron0x17a6be0()*-0.206115);
}

double NNfunction_ss_sLdL::synapse0x17c0580() {
   return (neuron0x17a6f20()*0.706203);
}

double NNfunction_ss_sLdL::synapse0x17c05c0() {
   return (neuron0x17a7260()*-0.786655);
}

double NNfunction_ss_sLdL::synapse0x17c0600() {
   return (neuron0x17a75a0()*-0.990773);
}

double NNfunction_ss_sLdL::synapse0x17c0640() {
   return (neuron0x17a78e0()*0.778994);
}

double NNfunction_ss_sLdL::synapse0x17c0680() {
   return (neuron0x17a7c20()*-0.182456);
}

double NNfunction_ss_sLdL::synapse0x17c06c0() {
   return (neuron0x17a7f60()*-0.473873);
}

double NNfunction_ss_sLdL::synapse0x17c0700() {
   return (neuron0x17a82a0()*0.46692);
}

double NNfunction_ss_sLdL::synapse0x17c0740() {
   return (neuron0x17a85e0()*0.00812844);
}

double NNfunction_ss_sLdL::synapse0x17c0780() {
   return (neuron0x17a8920()*0.268199);
}

double NNfunction_ss_sLdL::synapse0x17c07c0() {
   return (neuron0x17a8c60()*0.963812);
}

double NNfunction_ss_sLdL::synapse0x17c0800() {
   return (neuron0x17a8fa0()*0.707765);
}

double NNfunction_ss_sLdL::synapse0x17c0840() {
   return (neuron0x17a92e0()*0.198659);
}

double NNfunction_ss_sLdL::synapse0x17c0880() {
   return (neuron0x17a9620()*0.398614);
}

double NNfunction_ss_sLdL::synapse0x17c0310() {
   return (neuron0x17a9960()*-0.339902);
}

double NNfunction_ss_sLdL::synapse0x17c0350() {
   return (neuron0x17a9ec0()*-0.18063);
}

double NNfunction_ss_sLdL::synapse0x17c09d0() {
   return (neuron0x17aa0e0()*0.0406522);
}

double NNfunction_ss_sLdL::synapse0x17c0a10() {
   return (neuron0x17aa420()*0.187824);
}

double NNfunction_ss_sLdL::synapse0x17c0a50() {
   return (neuron0x17aa760()*-0.106759);
}

double NNfunction_ss_sLdL::synapse0x17c0a90() {
   return (neuron0x17aaaa0()*0.109112);
}

double NNfunction_ss_sLdL::synapse0x17c0ad0() {
   return (neuron0x17aade0()*-0.348143);
}

double NNfunction_ss_sLdL::synapse0x17c0b10() {
   return (neuron0x17ab120()*0.0880563);
}

double NNfunction_ss_sLdL::synapse0x17c0e90() {
   return (neuron0x17a6560()*0.17571);
}

double NNfunction_ss_sLdL::synapse0x17b5460() {
   return (neuron0x17a68a0()*-0.412144);
}

double NNfunction_ss_sLdL::synapse0x17b54a0() {
   return (neuron0x17a6be0()*0.377691);
}

double NNfunction_ss_sLdL::synapse0x17b54e0() {
   return (neuron0x17a6f20()*0.29027);
}

double NNfunction_ss_sLdL::synapse0x17b5730() {
   return (neuron0x17a7260()*0.715777);
}

double NNfunction_ss_sLdL::synapse0x17b5770() {
   return (neuron0x17a75a0()*0.282774);
}

double NNfunction_ss_sLdL::synapse0x17b57b0() {
   return (neuron0x17a78e0()*0.644976);
}

double NNfunction_ss_sLdL::synapse0x17b5a00() {
   return (neuron0x17a7c20()*-0.0768641);
}

double NNfunction_ss_sLdL::synapse0x17b5a40() {
   return (neuron0x17a7f60()*0.0538535);
}

double NNfunction_ss_sLdL::synapse0x17b5c90() {
   return (neuron0x17a82a0()*-0.0428747);
}

double NNfunction_ss_sLdL::synapse0x17b5cd0() {
   return (neuron0x17a85e0()*-0.0428605);
}

double NNfunction_ss_sLdL::synapse0x17b5d10() {
   return (neuron0x17a8920()*0.743863);
}

double NNfunction_ss_sLdL::synapse0x17b5f60() {
   return (neuron0x17a8c60()*-0.577566);
}

double NNfunction_ss_sLdL::synapse0x17b5fa0() {
   return (neuron0x17a8fa0()*-0.813836);
}

double NNfunction_ss_sLdL::synapse0x17b61f0() {
   return (neuron0x17a92e0()*-0.381073);
}

double NNfunction_ss_sLdL::synapse0x17b6230() {
   return (neuron0x17a9620()*-0.0583403);
}

double NNfunction_ss_sLdL::synapse0x17c0ce0() {
   return (neuron0x17a9960()*0.219706);
}

double NNfunction_ss_sLdL::synapse0x17c0d20() {
   return (neuron0x17a9ec0()*0.20689);
}

double NNfunction_ss_sLdL::synapse0x17b6380() {
   return (neuron0x17aa0e0()*-0.00863337);
}

double NNfunction_ss_sLdL::synapse0x17b6890() {
   return (neuron0x17aa420()*-0.147318);
}

double NNfunction_ss_sLdL::synapse0x17b68d0() {
   return (neuron0x17aa760()*-0.257574);
}

double NNfunction_ss_sLdL::synapse0x17b6910() {
   return (neuron0x17aaaa0()*-0.21895);
}

double NNfunction_ss_sLdL::synapse0x17b6b60() {
   return (neuron0x17aade0()*0.387664);
}

double NNfunction_ss_sLdL::synapse0x17b6ba0() {
   return (neuron0x17ab120()*-0.21643);
}

double NNfunction_ss_sLdL::synapse0x17b6450() {
   return (neuron0x17a6560()*-0.665668);
}

double NNfunction_ss_sLdL::synapse0x17b6490() {
   return (neuron0x17a68a0()*0.218867);
}

double NNfunction_ss_sLdL::synapse0x17b64d0() {
   return (neuron0x17a6be0()*-0.322038);
}

double NNfunction_ss_sLdL::synapse0x17b6510() {
   return (neuron0x17a6f20()*-0.184087);
}

double NNfunction_ss_sLdL::synapse0x17b6e90() {
   return (neuron0x17a7260()*0.0977231);
}

double NNfunction_ss_sLdL::synapse0x17c31e0() {
   return (neuron0x17a75a0()*-0.146659);
}

double NNfunction_ss_sLdL::synapse0x17c3220() {
   return (neuron0x17a78e0()*0.540589);
}

double NNfunction_ss_sLdL::synapse0x17c3260() {
   return (neuron0x17a7c20()*0.497978);
}

double NNfunction_ss_sLdL::synapse0x17c32a0() {
   return (neuron0x17a7f60()*0.429671);
}

double NNfunction_ss_sLdL::synapse0x17c32e0() {
   return (neuron0x17a82a0()*-0.444518);
}

double NNfunction_ss_sLdL::synapse0x17c3320() {
   return (neuron0x17a85e0()*-0.0282052);
}

double NNfunction_ss_sLdL::synapse0x17c3360() {
   return (neuron0x17a8920()*0.20613);
}

double NNfunction_ss_sLdL::synapse0x17c33a0() {
   return (neuron0x17a8c60()*-0.105053);
}

double NNfunction_ss_sLdL::synapse0x17c33e0() {
   return (neuron0x17a8fa0()*-0.281509);
}

double NNfunction_ss_sLdL::synapse0x17c3420() {
   return (neuron0x17a92e0()*0.588112);
}

double NNfunction_ss_sLdL::synapse0x17c3460() {
   return (neuron0x17a9620()*-0.296979);
}

double NNfunction_ss_sLdL::synapse0x17b6d70() {
   return (neuron0x17a9960()*-0.57089);
}

double NNfunction_ss_sLdL::synapse0x17b6db0() {
   return (neuron0x17a9ec0()*0.663211);
}

double NNfunction_ss_sLdL::synapse0x17c35b0() {
   return (neuron0x17aa0e0()*-0.447981);
}

double NNfunction_ss_sLdL::synapse0x17c35f0() {
   return (neuron0x17aa420()*-0.189872);
}

double NNfunction_ss_sLdL::synapse0x17c3630() {
   return (neuron0x17aa760()*-0.651317);
}

double NNfunction_ss_sLdL::synapse0x17c3670() {
   return (neuron0x17aaaa0()*0.42678);
}

double NNfunction_ss_sLdL::synapse0x17c36b0() {
   return (neuron0x17aade0()*0.237109);
}

double NNfunction_ss_sLdL::synapse0x17c36f0() {
   return (neuron0x17ab120()*-0.109745);
}

double NNfunction_ss_sLdL::synapse0x17c3a70() {
   return (neuron0x17a6560()*0.017727);
}

double NNfunction_ss_sLdL::synapse0x17c3ab0() {
   return (neuron0x17a68a0()*-0.0113063);
}

double NNfunction_ss_sLdL::synapse0x17c3af0() {
   return (neuron0x17a6be0()*-0.0552227);
}

double NNfunction_ss_sLdL::synapse0x17c3b30() {
   return (neuron0x17a6f20()*-0.108522);
}

double NNfunction_ss_sLdL::synapse0x17c3b70() {
   return (neuron0x17a7260()*0.00553447);
}

double NNfunction_ss_sLdL::synapse0x17c3bb0() {
   return (neuron0x17a75a0()*-0.00190199);
}

double NNfunction_ss_sLdL::synapse0x17c3bf0() {
   return (neuron0x17a78e0()*-0.00478106);
}

double NNfunction_ss_sLdL::synapse0x17c3c30() {
   return (neuron0x17a7c20()*0.00245688);
}

double NNfunction_ss_sLdL::synapse0x17c3c70() {
   return (neuron0x17a7f60()*-0.000462914);
}

double NNfunction_ss_sLdL::synapse0x17c3cb0() {
   return (neuron0x17a82a0()*0.0127688);
}

double NNfunction_ss_sLdL::synapse0x17c3cf0() {
   return (neuron0x17a85e0()*-0.00179464);
}

double NNfunction_ss_sLdL::synapse0x17c3d30() {
   return (neuron0x17a8920()*0.655006);
}

double NNfunction_ss_sLdL::synapse0x17c3d70() {
   return (neuron0x17a8c60()*0.248393);
}

double NNfunction_ss_sLdL::synapse0x17c3db0() {
   return (neuron0x17a8fa0()*0.00535595);
}

double NNfunction_ss_sLdL::synapse0x17c3df0() {
   return (neuron0x17a92e0()*0.00795077);
}

double NNfunction_ss_sLdL::synapse0x17c3e30() {
   return (neuron0x17a9620()*0.0204621);
}

double NNfunction_ss_sLdL::synapse0x17c38c0() {
   return (neuron0x17a9960()*0.0113697);
}

double NNfunction_ss_sLdL::synapse0x17c3900() {
   return (neuron0x17a9ec0()*0.0226554);
}

double NNfunction_ss_sLdL::synapse0x17c3f80() {
   return (neuron0x17aa0e0()*-0.00234845);
}

double NNfunction_ss_sLdL::synapse0x17c3fc0() {
   return (neuron0x17aa420()*0.0133782);
}

double NNfunction_ss_sLdL::synapse0x17c4000() {
   return (neuron0x17aa760()*0.00101121);
}

double NNfunction_ss_sLdL::synapse0x17c4040() {
   return (neuron0x17aaaa0()*-0.00394543);
}

double NNfunction_ss_sLdL::synapse0x17c4080() {
   return (neuron0x17aade0()*0.00126553);
}

double NNfunction_ss_sLdL::synapse0x17c40c0() {
   return (neuron0x17ab120()*-0.00630529);
}

double NNfunction_ss_sLdL::synapse0x17c4440() {
   return (neuron0x17a6560()*0.00543001);
}

double NNfunction_ss_sLdL::synapse0x17c4480() {
   return (neuron0x17a68a0()*-0.0303968);
}

double NNfunction_ss_sLdL::synapse0x17c44c0() {
   return (neuron0x17a6be0()*-0.56554);
}

double NNfunction_ss_sLdL::synapse0x17c4500() {
   return (neuron0x17a6f20()*1.13438);
}

double NNfunction_ss_sLdL::synapse0x17c4540() {
   return (neuron0x17a7260()*-0.167931);
}

double NNfunction_ss_sLdL::synapse0x17c4580() {
   return (neuron0x17a75a0()*-0.0141113);
}

double NNfunction_ss_sLdL::synapse0x17c45c0() {
   return (neuron0x17a78e0()*-0.103358);
}

double NNfunction_ss_sLdL::synapse0x17c4600() {
   return (neuron0x17a7c20()*0.0105308);
}

double NNfunction_ss_sLdL::synapse0x17c4640() {
   return (neuron0x17a7f60()*0.0612176);
}

double NNfunction_ss_sLdL::synapse0x17c4680() {
   return (neuron0x17a82a0()*0.118946);
}

double NNfunction_ss_sLdL::synapse0x17c46c0() {
   return (neuron0x17a85e0()*0.011148);
}

double NNfunction_ss_sLdL::synapse0x17c4700() {
   return (neuron0x17a8920()*0.69369);
}

double NNfunction_ss_sLdL::synapse0x17c4740() {
   return (neuron0x17a8c60()*0.356416);
}

double NNfunction_ss_sLdL::synapse0x17c4780() {
   return (neuron0x17a8fa0()*-0.0926753);
}

double NNfunction_ss_sLdL::synapse0x17c47c0() {
   return (neuron0x17a92e0()*-0.134834);
}

double NNfunction_ss_sLdL::synapse0x17c4800() {
   return (neuron0x17a9620()*-0.132075);
}

double NNfunction_ss_sLdL::synapse0x17c4290() {
   return (neuron0x17a9960()*0.0463414);
}

double NNfunction_ss_sLdL::synapse0x17c42d0() {
   return (neuron0x17a9ec0()*0.24332);
}

double NNfunction_ss_sLdL::synapse0x17c4950() {
   return (neuron0x17aa0e0()*0.0352433);
}

double NNfunction_ss_sLdL::synapse0x17c4990() {
   return (neuron0x17aa420()*-0.066263);
}

double NNfunction_ss_sLdL::synapse0x17c49d0() {
   return (neuron0x17aa760()*-0.00408316);
}

double NNfunction_ss_sLdL::synapse0x17c4a10() {
   return (neuron0x17aaaa0()*0.030192);
}

double NNfunction_ss_sLdL::synapse0x17c4a50() {
   return (neuron0x17aade0()*0.0398574);
}

double NNfunction_ss_sLdL::synapse0x17c4a90() {
   return (neuron0x17ab120()*-0.09005);
}

double NNfunction_ss_sLdL::synapse0x17c4e10() {
   return (neuron0x17a6560()*0.0409155);
}

double NNfunction_ss_sLdL::synapse0x17c4e50() {
   return (neuron0x17a68a0()*-0.341445);
}

double NNfunction_ss_sLdL::synapse0x17c4e90() {
   return (neuron0x17a6be0()*0.693173);
}

double NNfunction_ss_sLdL::synapse0x17c4ed0() {
   return (neuron0x17a6f20()*-0.292439);
}

double NNfunction_ss_sLdL::synapse0x17c4f10() {
   return (neuron0x17a7260()*-0.591406);
}

double NNfunction_ss_sLdL::synapse0x17c4f50() {
   return (neuron0x17a75a0()*-0.0907605);
}

double NNfunction_ss_sLdL::synapse0x17c4f90() {
   return (neuron0x17a78e0()*0.135638);
}

double NNfunction_ss_sLdL::synapse0x17c4fd0() {
   return (neuron0x17a7c20()*-0.265332);
}

double NNfunction_ss_sLdL::synapse0x17c5010() {
   return (neuron0x17a7f60()*0.0728622);
}

double NNfunction_ss_sLdL::synapse0x17c5050() {
   return (neuron0x17a82a0()*0.225042);
}

double NNfunction_ss_sLdL::synapse0x17c5090() {
   return (neuron0x17a85e0()*0.778215);
}

double NNfunction_ss_sLdL::synapse0x17c50d0() {
   return (neuron0x17a8920()*-0.465051);
}

double NNfunction_ss_sLdL::synapse0x17c5110() {
   return (neuron0x17a8c60()*-1.19345);
}

double NNfunction_ss_sLdL::synapse0x17c5150() {
   return (neuron0x17a8fa0()*-0.0124091);
}

double NNfunction_ss_sLdL::synapse0x17c5190() {
   return (neuron0x17a92e0()*-0.384827);
}

double NNfunction_ss_sLdL::synapse0x17c51d0() {
   return (neuron0x17a9620()*-0.372337);
}

double NNfunction_ss_sLdL::synapse0x17c4c60() {
   return (neuron0x17a9960()*0.426495);
}

double NNfunction_ss_sLdL::synapse0x17c4ca0() {
   return (neuron0x17a9ec0()*0.187146);
}

double NNfunction_ss_sLdL::synapse0x17c5320() {
   return (neuron0x17aa0e0()*-0.356294);
}

double NNfunction_ss_sLdL::synapse0x17c5360() {
   return (neuron0x17aa420()*-0.206696);
}

double NNfunction_ss_sLdL::synapse0x17c53a0() {
   return (neuron0x17aa760()*0.265789);
}

double NNfunction_ss_sLdL::synapse0x17c53e0() {
   return (neuron0x17aaaa0()*0.256374);
}

double NNfunction_ss_sLdL::synapse0x17c5420() {
   return (neuron0x17aade0()*-0.0723954);
}

double NNfunction_ss_sLdL::synapse0x17c5460() {
   return (neuron0x17ab120()*-0.134416);
}

double NNfunction_ss_sLdL::synapse0x17c57e0() {
   return (neuron0x17a6560()*-0.335448);
}

double NNfunction_ss_sLdL::synapse0x17c5820() {
   return (neuron0x17a68a0()*0.0162286);
}

double NNfunction_ss_sLdL::synapse0x17c5860() {
   return (neuron0x17a6be0()*1.01157);
}

double NNfunction_ss_sLdL::synapse0x17c58a0() {
   return (neuron0x17a6f20()*-0.473685);
}

double NNfunction_ss_sLdL::synapse0x17c58e0() {
   return (neuron0x17a7260()*0.601263);
}

double NNfunction_ss_sLdL::synapse0x17c5920() {
   return (neuron0x17a75a0()*-0.0494412);
}

double NNfunction_ss_sLdL::synapse0x17c5960() {
   return (neuron0x17a78e0()*0.00987975);
}

double NNfunction_ss_sLdL::synapse0x17c59a0() {
   return (neuron0x17a7c20()*0.441898);
}

double NNfunction_ss_sLdL::synapse0x17c59e0() {
   return (neuron0x17a7f60()*-0.154659);
}

double NNfunction_ss_sLdL::synapse0x17c5a20() {
   return (neuron0x17a82a0()*0.563624);
}

double NNfunction_ss_sLdL::synapse0x17c5a60() {
   return (neuron0x17a85e0()*0.112623);
}

double NNfunction_ss_sLdL::synapse0x17c5aa0() {
   return (neuron0x17a8920()*-0.524131);
}

double NNfunction_ss_sLdL::synapse0x17c5ae0() {
   return (neuron0x17a8c60()*-0.266512);
}

double NNfunction_ss_sLdL::synapse0x17c5b20() {
   return (neuron0x17a8fa0()*0.190733);
}

double NNfunction_ss_sLdL::synapse0x17c5b60() {
   return (neuron0x17a92e0()*0.394844);
}

double NNfunction_ss_sLdL::synapse0x17c5ba0() {
   return (neuron0x17a9620()*-0.86643);
}

double NNfunction_ss_sLdL::synapse0x17c5630() {
   return (neuron0x17a9960()*0.282237);
}

double NNfunction_ss_sLdL::synapse0x17c5670() {
   return (neuron0x17a9ec0()*-0.285733);
}

double NNfunction_ss_sLdL::synapse0x17c5cf0() {
   return (neuron0x17aa0e0()*0.0244125);
}

double NNfunction_ss_sLdL::synapse0x17c5d30() {
   return (neuron0x17aa420()*0.0466245);
}

double NNfunction_ss_sLdL::synapse0x17c5d70() {
   return (neuron0x17aa760()*-0.321483);
}

double NNfunction_ss_sLdL::synapse0x17c5db0() {
   return (neuron0x17aaaa0()*0.01402);
}

double NNfunction_ss_sLdL::synapse0x17c5df0() {
   return (neuron0x17aade0()*-0.111003);
}

double NNfunction_ss_sLdL::synapse0x17c5e30() {
   return (neuron0x17ab120()*0.163242);
}

double NNfunction_ss_sLdL::synapse0x17c61b0() {
   return (neuron0x17a6560()*0.493535);
}

double NNfunction_ss_sLdL::synapse0x17c61f0() {
   return (neuron0x17a68a0()*-0.369842);
}

double NNfunction_ss_sLdL::synapse0x17c6230() {
   return (neuron0x17a6be0()*-0.457125);
}

double NNfunction_ss_sLdL::synapse0x17c6270() {
   return (neuron0x17a6f20()*-0.769148);
}

double NNfunction_ss_sLdL::synapse0x17c62b0() {
   return (neuron0x17a7260()*0.418056);
}

double NNfunction_ss_sLdL::synapse0x17c62f0() {
   return (neuron0x17a75a0()*-0.0809286);
}

double NNfunction_ss_sLdL::synapse0x17c6330() {
   return (neuron0x17a78e0()*0.665643);
}

double NNfunction_ss_sLdL::synapse0x17c6370() {
   return (neuron0x17a7c20()*-0.288816);
}

double NNfunction_ss_sLdL::synapse0x17c63b0() {
   return (neuron0x17a7f60()*0.287496);
}

double NNfunction_ss_sLdL::synapse0x17c63f0() {
   return (neuron0x17a82a0()*0.252886);
}

double NNfunction_ss_sLdL::synapse0x17c6430() {
   return (neuron0x17a85e0()*0.0802681);
}

double NNfunction_ss_sLdL::synapse0x17c6470() {
   return (neuron0x17a8920()*-0.339403);
}

double NNfunction_ss_sLdL::synapse0x17c64b0() {
   return (neuron0x17a8c60()*0.112892);
}

double NNfunction_ss_sLdL::synapse0x17c64f0() {
   return (neuron0x17a8fa0()*-0.0178152);
}

double NNfunction_ss_sLdL::synapse0x17c6530() {
   return (neuron0x17a92e0()*0.528959);
}

double NNfunction_ss_sLdL::synapse0x17c6570() {
   return (neuron0x17a9620()*-0.675055);
}

double NNfunction_ss_sLdL::synapse0x17c6000() {
   return (neuron0x17a9960()*0.0528606);
}

double NNfunction_ss_sLdL::synapse0x17c6040() {
   return (neuron0x17a9ec0()*-0.37187);
}

double NNfunction_ss_sLdL::synapse0x17c66c0() {
   return (neuron0x17aa0e0()*-0.373201);
}

double NNfunction_ss_sLdL::synapse0x17c6700() {
   return (neuron0x17aa420()*0.239798);
}

double NNfunction_ss_sLdL::synapse0x17c6740() {
   return (neuron0x17aa760()*-0.0990968);
}

double NNfunction_ss_sLdL::synapse0x17c6780() {
   return (neuron0x17aaaa0()*0.0817077);
}

double NNfunction_ss_sLdL::synapse0x17c67c0() {
   return (neuron0x17aade0()*-0.0907947);
}

double NNfunction_ss_sLdL::synapse0x17c6800() {
   return (neuron0x17ab120()*-0.301312);
}

double NNfunction_ss_sLdL::synapse0x17c6b80() {
   return (neuron0x17a6560()*0.147899);
}

double NNfunction_ss_sLdL::synapse0x17c6bc0() {
   return (neuron0x17a68a0()*0.22626);
}

double NNfunction_ss_sLdL::synapse0x17c6c00() {
   return (neuron0x17a6be0()*-0.206794);
}

double NNfunction_ss_sLdL::synapse0x17c6c40() {
   return (neuron0x17a6f20()*1.83681);
}

double NNfunction_ss_sLdL::synapse0x17c6c80() {
   return (neuron0x17a7260()*0.365038);
}

double NNfunction_ss_sLdL::synapse0x17c6cc0() {
   return (neuron0x17a75a0()*0.122196);
}

double NNfunction_ss_sLdL::synapse0x17c6d00() {
   return (neuron0x17a78e0()*0.167528);
}

double NNfunction_ss_sLdL::synapse0x17c6d40() {
   return (neuron0x17a7c20()*-0.127782);
}

double NNfunction_ss_sLdL::synapse0x17c6d80() {
   return (neuron0x17a7f60()*0.226723);
}

double NNfunction_ss_sLdL::synapse0x17c6dc0() {
   return (neuron0x17a82a0()*-0.0764997);
}

double NNfunction_ss_sLdL::synapse0x17c6e00() {
   return (neuron0x17a85e0()*0.121352);
}

double NNfunction_ss_sLdL::synapse0x17c6e40() {
   return (neuron0x17a8920()*-0.61854);
}

double NNfunction_ss_sLdL::synapse0x17c6e80() {
   return (neuron0x17a8c60()*-0.638392);
}

double NNfunction_ss_sLdL::synapse0x17c6ec0() {
   return (neuron0x17a8fa0()*-0.303651);
}

double NNfunction_ss_sLdL::synapse0x17c6f00() {
   return (neuron0x17a92e0()*0.0394562);
}

double NNfunction_ss_sLdL::synapse0x17c6f40() {
   return (neuron0x17a9620()*0.287101);
}

double NNfunction_ss_sLdL::synapse0x17c69d0() {
   return (neuron0x17a9960()*-0.182914);
}

double NNfunction_ss_sLdL::synapse0x17c6a10() {
   return (neuron0x17a9ec0()*0.151052);
}

double NNfunction_ss_sLdL::synapse0x17c7090() {
   return (neuron0x17aa0e0()*-0.414253);
}

double NNfunction_ss_sLdL::synapse0x17c70d0() {
   return (neuron0x17aa420()*0.396269);
}

double NNfunction_ss_sLdL::synapse0x17c7110() {
   return (neuron0x17aa760()*-0.0130554);
}

double NNfunction_ss_sLdL::synapse0x17c7150() {
   return (neuron0x17aaaa0()*0.161149);
}

double NNfunction_ss_sLdL::synapse0x17c7190() {
   return (neuron0x17aade0()*-0.0798559);
}

double NNfunction_ss_sLdL::synapse0x17c71d0() {
   return (neuron0x17ab120()*-0.0197981);
}

double NNfunction_ss_sLdL::synapse0x17c7550() {
   return (neuron0x17a6560()*-0.155094);
}

double NNfunction_ss_sLdL::synapse0x17c7590() {
   return (neuron0x17a68a0()*0.414731);
}

double NNfunction_ss_sLdL::synapse0x17c75d0() {
   return (neuron0x17a6be0()*0.234677);
}

double NNfunction_ss_sLdL::synapse0x17c7610() {
   return (neuron0x17a6f20()*0.720945);
}

double NNfunction_ss_sLdL::synapse0x17c7650() {
   return (neuron0x17a7260()*-0.555188);
}

double NNfunction_ss_sLdL::synapse0x17c7690() {
   return (neuron0x17a75a0()*0.381916);
}

double NNfunction_ss_sLdL::synapse0x17c76d0() {
   return (neuron0x17a78e0()*0.900421);
}

double NNfunction_ss_sLdL::synapse0x17c7710() {
   return (neuron0x17a7c20()*-0.514629);
}

double NNfunction_ss_sLdL::synapse0x17c7750() {
   return (neuron0x17a7f60()*0.123343);
}

double NNfunction_ss_sLdL::synapse0x17c7790() {
   return (neuron0x17a82a0()*-0.0225699);
}

double NNfunction_ss_sLdL::synapse0x17c77d0() {
   return (neuron0x17a85e0()*0.358832);
}

double NNfunction_ss_sLdL::synapse0x17c7810() {
   return (neuron0x17a8920()*-0.426744);
}

double NNfunction_ss_sLdL::synapse0x17c7850() {
   return (neuron0x17a8c60()*0.153659);
}

double NNfunction_ss_sLdL::synapse0x17c7890() {
   return (neuron0x17a8fa0()*-0.210346);
}

double NNfunction_ss_sLdL::synapse0x17c78d0() {
   return (neuron0x17a92e0()*-0.463339);
}

double NNfunction_ss_sLdL::synapse0x17c7910() {
   return (neuron0x17a9620()*0.251283);
}

double NNfunction_ss_sLdL::synapse0x17c73a0() {
   return (neuron0x17a9960()*-0.547105);
}

double NNfunction_ss_sLdL::synapse0x17c73e0() {
   return (neuron0x17a9ec0()*0.223847);
}

double NNfunction_ss_sLdL::synapse0x17c7a60() {
   return (neuron0x17aa0e0()*0.692337);
}

double NNfunction_ss_sLdL::synapse0x17c7aa0() {
   return (neuron0x17aa420()*0.384962);
}

double NNfunction_ss_sLdL::synapse0x17c7ae0() {
   return (neuron0x17aa760()*0.121424);
}

double NNfunction_ss_sLdL::synapse0x17c7b20() {
   return (neuron0x17aaaa0()*-0.0994546);
}

double NNfunction_ss_sLdL::synapse0x17c7b60() {
   return (neuron0x17aade0()*-0.478068);
}

double NNfunction_ss_sLdL::synapse0x17c7ba0() {
   return (neuron0x17ab120()*0.0608824);
}

double NNfunction_ss_sLdL::synapse0x17b0650() {
   return (neuron0x17a6560()*-0.0132337);
}

double NNfunction_ss_sLdL::synapse0x17b0690() {
   return (neuron0x17a68a0()*-0.031665);
}

double NNfunction_ss_sLdL::synapse0x17b06d0() {
   return (neuron0x17a6be0()*0.0160127);
}

double NNfunction_ss_sLdL::synapse0x17b0710() {
   return (neuron0x17a6f20()*0.0788086);
}

double NNfunction_ss_sLdL::synapse0x17b0750() {
   return (neuron0x17a7260()*-0.00527715);
}

double NNfunction_ss_sLdL::synapse0x17b0790() {
   return (neuron0x17a75a0()*0.00388304);
}

double NNfunction_ss_sLdL::synapse0x17b07d0() {
   return (neuron0x17a78e0()*-0.032802);
}

double NNfunction_ss_sLdL::synapse0x17b0810() {
   return (neuron0x17a7c20()*-0.0188293);
}

double NNfunction_ss_sLdL::synapse0x17c8330() {
   return (neuron0x17a7f60()*0.0144802);
}

double NNfunction_ss_sLdL::synapse0x17c8370() {
   return (neuron0x17a82a0()*0.0454757);
}

double NNfunction_ss_sLdL::synapse0x17c83b0() {
   return (neuron0x17a85e0()*-0.060471);
}

double NNfunction_ss_sLdL::synapse0x17c83f0() {
   return (neuron0x17a8920()*1.95992);
}

double NNfunction_ss_sLdL::synapse0x17c8430() {
   return (neuron0x17a8c60()*0.701609);
}

double NNfunction_ss_sLdL::synapse0x17c8470() {
   return (neuron0x17a8fa0()*0.0520731);
}

double NNfunction_ss_sLdL::synapse0x17c84b0() {
   return (neuron0x17a92e0()*-0.0313793);
}

double NNfunction_ss_sLdL::synapse0x17c84f0() {
   return (neuron0x17a9620()*0.021494);
}

double NNfunction_ss_sLdL::synapse0x17c7d70() {
   return (neuron0x17a9960()*0.0632504);
}

double NNfunction_ss_sLdL::synapse0x17c7db0() {
   return (neuron0x17a9ec0()*-0.043934);
}

double NNfunction_ss_sLdL::synapse0x17c8640() {
   return (neuron0x17aa0e0()*-0.086155);
}

double NNfunction_ss_sLdL::synapse0x17c8680() {
   return (neuron0x17aa420()*-0.0389656);
}

double NNfunction_ss_sLdL::synapse0x17c86c0() {
   return (neuron0x17aa760()*0.0262726);
}

double NNfunction_ss_sLdL::synapse0x17c8700() {
   return (neuron0x17aaaa0()*-0.00779275);
}

double NNfunction_ss_sLdL::synapse0x17c8740() {
   return (neuron0x17aade0()*0.022863);
}

double NNfunction_ss_sLdL::synapse0x17c8780() {
   return (neuron0x17ab120()*0.0431521);
}

double NNfunction_ss_sLdL::synapse0x17c8b00() {
   return (neuron0x17a6560()*-0.332343);
}

double NNfunction_ss_sLdL::synapse0x17c8b40() {
   return (neuron0x17a68a0()*-0.0311806);
}

double NNfunction_ss_sLdL::synapse0x17c8b80() {
   return (neuron0x17a6be0()*-0.102903);
}

double NNfunction_ss_sLdL::synapse0x17c8bc0() {
   return (neuron0x17a6f20()*0.785487);
}

double NNfunction_ss_sLdL::synapse0x17c8c00() {
   return (neuron0x17a7260()*-0.0520161);
}

double NNfunction_ss_sLdL::synapse0x17c8c40() {
   return (neuron0x17a75a0()*0.0871732);
}

double NNfunction_ss_sLdL::synapse0x17c8c80() {
   return (neuron0x17a78e0()*-0.203722);
}

double NNfunction_ss_sLdL::synapse0x17c8cc0() {
   return (neuron0x17a7c20()*0.0520374);
}

double NNfunction_ss_sLdL::synapse0x17c8d00() {
   return (neuron0x17a7f60()*-0.0422575);
}

double NNfunction_ss_sLdL::synapse0x17c8d40() {
   return (neuron0x17a82a0()*0.151692);
}

double NNfunction_ss_sLdL::synapse0x17c8d80() {
   return (neuron0x17a85e0()*-0.0535594);
}

double NNfunction_ss_sLdL::synapse0x17c8dc0() {
   return (neuron0x17a8920()*-0.107502);
}

double NNfunction_ss_sLdL::synapse0x17c8e00() {
   return (neuron0x17a8c60()*-0.581256);
}

double NNfunction_ss_sLdL::synapse0x17c8e40() {
   return (neuron0x17a8fa0()*-0.143108);
}

double NNfunction_ss_sLdL::synapse0x17c8e80() {
   return (neuron0x17a92e0()*0.276815);
}

double NNfunction_ss_sLdL::synapse0x17c8ec0() {
   return (neuron0x17a9620()*0.237051);
}

double NNfunction_ss_sLdL::synapse0x17c8950() {
   return (neuron0x17a9960()*0.152056);
}

double NNfunction_ss_sLdL::synapse0x17c8990() {
   return (neuron0x17a9ec0()*0.0792346);
}

double NNfunction_ss_sLdL::synapse0x17c9010() {
   return (neuron0x17aa0e0()*0.771998);
}

double NNfunction_ss_sLdL::synapse0x17c9050() {
   return (neuron0x17aa420()*-0.144672);
}

double NNfunction_ss_sLdL::synapse0x17c9090() {
   return (neuron0x17aa760()*-0.113232);
}

double NNfunction_ss_sLdL::synapse0x17c90d0() {
   return (neuron0x17aaaa0()*-0.455598);
}

double NNfunction_ss_sLdL::synapse0x17c9110() {
   return (neuron0x17aade0()*-0.160047);
}

double NNfunction_ss_sLdL::synapse0x17c9150() {
   return (neuron0x17ab120()*-0.170529);
}

double NNfunction_ss_sLdL::synapse0x17c94d0() {
   return (neuron0x17a6560()*-0.231258);
}

double NNfunction_ss_sLdL::synapse0x17c9510() {
   return (neuron0x17a68a0()*-0.0125573);
}

double NNfunction_ss_sLdL::synapse0x17c9550() {
   return (neuron0x17a6be0()*-0.420669);
}

double NNfunction_ss_sLdL::synapse0x17c9590() {
   return (neuron0x17a6f20()*0.210457);
}

double NNfunction_ss_sLdL::synapse0x17c95d0() {
   return (neuron0x17a7260()*-0.0993826);
}

double NNfunction_ss_sLdL::synapse0x17c9610() {
   return (neuron0x17a75a0()*0.829965);
}

double NNfunction_ss_sLdL::synapse0x17c9650() {
   return (neuron0x17a78e0()*-0.340226);
}

double NNfunction_ss_sLdL::synapse0x17c9690() {
   return (neuron0x17a7c20()*0.0285349);
}

double NNfunction_ss_sLdL::synapse0x17c96d0() {
   return (neuron0x17a7f60()*0.344837);
}

double NNfunction_ss_sLdL::synapse0x17c9710() {
   return (neuron0x17a82a0()*-0.335019);
}

double NNfunction_ss_sLdL::synapse0x17c9750() {
   return (neuron0x17a85e0()*-0.423546);
}

double NNfunction_ss_sLdL::synapse0x17c9790() {
   return (neuron0x17a8920()*0.344647);
}

double NNfunction_ss_sLdL::synapse0x17c97d0() {
   return (neuron0x17a8c60()*-0.287992);
}

double NNfunction_ss_sLdL::synapse0x17c9810() {
   return (neuron0x17a8fa0()*0.213827);
}

double NNfunction_ss_sLdL::synapse0x17c9850() {
   return (neuron0x17a92e0()*0.405101);
}

double NNfunction_ss_sLdL::synapse0x17c9890() {
   return (neuron0x17a9620()*0.181441);
}

double NNfunction_ss_sLdL::synapse0x17c9320() {
   return (neuron0x17a9960()*0.113635);
}

double NNfunction_ss_sLdL::synapse0x17c9360() {
   return (neuron0x17a9ec0()*-0.0634856);
}

double NNfunction_ss_sLdL::synapse0x17b9e90() {
   return (neuron0x17aa0e0()*0.0935285);
}

double NNfunction_ss_sLdL::synapse0x17b9ed0() {
   return (neuron0x17aa420()*-0.0259558);
}

double NNfunction_ss_sLdL::synapse0x17b9f10() {
   return (neuron0x17aa760()*0.490588);
}

double NNfunction_ss_sLdL::synapse0x17b9f50() {
   return (neuron0x17aaaa0()*-0.471413);
}

double NNfunction_ss_sLdL::synapse0x17b9f90() {
   return (neuron0x17aade0()*-0.476422);
}

double NNfunction_ss_sLdL::synapse0x17b9fd0() {
   return (neuron0x17ab120()*-0.242998);
}

double NNfunction_ss_sLdL::synapse0x17ba350() {
   return (neuron0x17a6560()*-0.0471113);
}

double NNfunction_ss_sLdL::synapse0x17ba390() {
   return (neuron0x17a68a0()*-0.0168049);
}

double NNfunction_ss_sLdL::synapse0x17ba3d0() {
   return (neuron0x17a6be0()*1.37021);
}

double NNfunction_ss_sLdL::synapse0x17ba410() {
   return (neuron0x17a6f20()*0.0137982);
}

double NNfunction_ss_sLdL::synapse0x17ba450() {
   return (neuron0x17a7260()*-0.0446679);
}

double NNfunction_ss_sLdL::synapse0x17ba490() {
   return (neuron0x17a75a0()*0.0234043);
}

double NNfunction_ss_sLdL::synapse0x17ba4d0() {
   return (neuron0x17a78e0()*-0.055283);
}

double NNfunction_ss_sLdL::synapse0x17ba510() {
   return (neuron0x17a7c20()*0.00372785);
}

double NNfunction_ss_sLdL::synapse0x17ba550() {
   return (neuron0x17a7f60()*0.0421407);
}

double NNfunction_ss_sLdL::synapse0x17ba590() {
   return (neuron0x17a82a0()*-0.00822589);
}

double NNfunction_ss_sLdL::synapse0x17ba5d0() {
   return (neuron0x17a85e0()*0.014278);
}

double NNfunction_ss_sLdL::synapse0x17ba610() {
   return (neuron0x17a8920()*-0.0733173);
}

double NNfunction_ss_sLdL::synapse0x17ba650() {
   return (neuron0x17a8c60()*-0.0832792);
}

double NNfunction_ss_sLdL::synapse0x17ba690() {
   return (neuron0x17a8fa0()*0.00799952);
}

double NNfunction_ss_sLdL::synapse0x17ba6d0() {
   return (neuron0x17a92e0()*0.0219871);
}

double NNfunction_ss_sLdL::synapse0x17ba710() {
   return (neuron0x17a9620()*-0.0583429);
}

double NNfunction_ss_sLdL::synapse0x17ba1a0() {
   return (neuron0x17a9960()*0.0699306);
}

double NNfunction_ss_sLdL::synapse0x17ba1e0() {
   return (neuron0x17a9ec0()*0.0112603);
}

double NNfunction_ss_sLdL::synapse0x17ba860() {
   return (neuron0x17aa0e0()*0.012969);
}

double NNfunction_ss_sLdL::synapse0x17ba8a0() {
   return (neuron0x17aa420()*-0.000812957);
}

double NNfunction_ss_sLdL::synapse0x17ba8e0() {
   return (neuron0x17aa760()*-0.00952145);
}

double NNfunction_ss_sLdL::synapse0x17ba920() {
   return (neuron0x17aaaa0()*-0.00848421);
}

double NNfunction_ss_sLdL::synapse0x17ba960() {
   return (neuron0x17aade0()*0.0019316);
}

double NNfunction_ss_sLdL::synapse0x17ba9a0() {
   return (neuron0x17ab120()*-0.01759);
}

double NNfunction_ss_sLdL::synapse0x17bad20() {
   return (neuron0x17a6560()*-0.00708143);
}

double NNfunction_ss_sLdL::synapse0x17bad60() {
   return (neuron0x17a68a0()*-0.00597156);
}

double NNfunction_ss_sLdL::synapse0x17bada0() {
   return (neuron0x17a6be0()*-0.0325513);
}

double NNfunction_ss_sLdL::synapse0x17bade0() {
   return (neuron0x17a6f20()*3.62972);
}

double NNfunction_ss_sLdL::synapse0x17bae20() {
   return (neuron0x17a7260()*-0.00794179);
}

double NNfunction_ss_sLdL::synapse0x17bae60() {
   return (neuron0x17a75a0()*0.00235238);
}

double NNfunction_ss_sLdL::synapse0x17baea0() {
   return (neuron0x17a78e0()*-0.0283903);
}

double NNfunction_ss_sLdL::synapse0x17baee0() {
   return (neuron0x17a7c20()*-0.0183903);
}

double NNfunction_ss_sLdL::synapse0x17baf20() {
   return (neuron0x17a7f60()*-0.00177032);
}

double NNfunction_ss_sLdL::synapse0x17baf60() {
   return (neuron0x17a82a0()*0.0397212);
}

double NNfunction_ss_sLdL::synapse0x17bafa0() {
   return (neuron0x17a85e0()*0.0299096);
}

double NNfunction_ss_sLdL::synapse0x17bafe0() {
   return (neuron0x17a8920()*-0.717999);
}

double NNfunction_ss_sLdL::synapse0x17bb020() {
   return (neuron0x17a8c60()*-0.57333);
}

double NNfunction_ss_sLdL::synapse0x17bb060() {
   return (neuron0x17a8fa0()*0.0109927);
}

double NNfunction_ss_sLdL::synapse0x17bb0a0() {
   return (neuron0x17a92e0()*-0.0407525);
}

double NNfunction_ss_sLdL::synapse0x17bb0e0() {
   return (neuron0x17a9620()*-0.0396469);
}

double NNfunction_ss_sLdL::synapse0x17bab70() {
   return (neuron0x17a9960()*0.0125525);
}

double NNfunction_ss_sLdL::synapse0x17babb0() {
   return (neuron0x17a9ec0()*-0.036217);
}

double NNfunction_ss_sLdL::synapse0x17bb230() {
   return (neuron0x17aa0e0()*-0.0241299);
}

double NNfunction_ss_sLdL::synapse0x17bb270() {
   return (neuron0x17aa420()*-0.0155821);
}

double NNfunction_ss_sLdL::synapse0x17bb2b0() {
   return (neuron0x17aa760()*0.00503714);
}

double NNfunction_ss_sLdL::synapse0x17bb2f0() {
   return (neuron0x17aaaa0()*0.00287111);
}

double NNfunction_ss_sLdL::synapse0x17bb330() {
   return (neuron0x17aade0()*0.0070706);
}

double NNfunction_ss_sLdL::synapse0x17bb370() {
   return (neuron0x17ab120()*0.0203059);
}

double NNfunction_ss_sLdL::synapse0x17bb6f0() {
   return (neuron0x17a6560()*0.00530603);
}

double NNfunction_ss_sLdL::synapse0x17bb730() {
   return (neuron0x17a68a0()*0.09222);
}

double NNfunction_ss_sLdL::synapse0x17bb770() {
   return (neuron0x17a6be0()*-0.290695);
}

double NNfunction_ss_sLdL::synapse0x17bb7b0() {
   return (neuron0x17a6f20()*0.279404);
}

double NNfunction_ss_sLdL::synapse0x17bb7f0() {
   return (neuron0x17a7260()*0.0606586);
}

double NNfunction_ss_sLdL::synapse0x17bb830() {
   return (neuron0x17a75a0()*-0.00175826);
}

double NNfunction_ss_sLdL::synapse0x17bb870() {
   return (neuron0x17a78e0()*0.0820173);
}

double NNfunction_ss_sLdL::synapse0x17bb8b0() {
   return (neuron0x17a7c20()*0.103448);
}

double NNfunction_ss_sLdL::synapse0x17bb8f0() {
   return (neuron0x17a7f60()*0.0138156);
}

double NNfunction_ss_sLdL::synapse0x17bb930() {
   return (neuron0x17a82a0()*-0.0513094);
}

double NNfunction_ss_sLdL::synapse0x17bb970() {
   return (neuron0x17a85e0()*0.0348316);
}

double NNfunction_ss_sLdL::synapse0x17bb9b0() {
   return (neuron0x17a8920()*-0.586936);
}

double NNfunction_ss_sLdL::synapse0x17bb9f0() {
   return (neuron0x17a8c60()*-0.98532);
}

double NNfunction_ss_sLdL::synapse0x17bba30() {
   return (neuron0x17a8fa0()*-0.0814986);
}

double NNfunction_ss_sLdL::synapse0x17bba70() {
   return (neuron0x17a92e0()*0.0554604);
}

double NNfunction_ss_sLdL::synapse0x17bbab0() {
   return (neuron0x17a9620()*-0.0117358);
}

double NNfunction_ss_sLdL::synapse0x17bb540() {
   return (neuron0x17a9960()*-0.186567);
}

double NNfunction_ss_sLdL::synapse0x17bb580() {
   return (neuron0x17a9ec0()*0.0836217);
}

double NNfunction_ss_sLdL::synapse0x17bbc00() {
   return (neuron0x17aa0e0()*0.0824358);
}

double NNfunction_ss_sLdL::synapse0x17bbc40() {
   return (neuron0x17aa420()*0.000461482);
}

double NNfunction_ss_sLdL::synapse0x17bbc80() {
   return (neuron0x17aa760()*-0.020758);
}

double NNfunction_ss_sLdL::synapse0x17bbcc0() {
   return (neuron0x17aaaa0()*-0.00787484);
}

double NNfunction_ss_sLdL::synapse0x17bbd00() {
   return (neuron0x17aade0()*-0.0280896);
}

double NNfunction_ss_sLdL::synapse0x17bbd40() {
   return (neuron0x17ab120()*0.0665339);
}

double NNfunction_ss_sLdL::synapse0x17cdc10() {
   return (neuron0x17a6560()*0.00772895);
}

double NNfunction_ss_sLdL::synapse0x17cdc50() {
   return (neuron0x17a68a0()*0.0292342);
}

double NNfunction_ss_sLdL::synapse0x17cdc90() {
   return (neuron0x17a6be0()*-0.0602047);
}

double NNfunction_ss_sLdL::synapse0x17cdcd0() {
   return (neuron0x17a6f20()*19.3393);
}

double NNfunction_ss_sLdL::synapse0x17cdd10() {
   return (neuron0x17a7260()*0.0266512);
}

double NNfunction_ss_sLdL::synapse0x17cdd50() {
   return (neuron0x17a75a0()*-0.0151434);
}

double NNfunction_ss_sLdL::synapse0x17cdd90() {
   return (neuron0x17a78e0()*-0.0181983);
}

double NNfunction_ss_sLdL::synapse0x17cddd0() {
   return (neuron0x17a7c20()*-0.026779);
}

double NNfunction_ss_sLdL::synapse0x17cde10() {
   return (neuron0x17a7f60()*-0.00887792);
}

double NNfunction_ss_sLdL::synapse0x17cde50() {
   return (neuron0x17a82a0()*-0.0237803);
}

double NNfunction_ss_sLdL::synapse0x17cde90() {
   return (neuron0x17a85e0()*0.0209019);
}

double NNfunction_ss_sLdL::synapse0x17cded0() {
   return (neuron0x17a8920()*0.257141);
}

double NNfunction_ss_sLdL::synapse0x17cdf10() {
   return (neuron0x17a8c60()*0.34322);
}

double NNfunction_ss_sLdL::synapse0x17cdf50() {
   return (neuron0x17a8fa0()*-0.0506945);
}

double NNfunction_ss_sLdL::synapse0x17cdf90() {
   return (neuron0x17a92e0()*0.0255651);
}

double NNfunction_ss_sLdL::synapse0x17cdfd0() {
   return (neuron0x17a9620()*-0.0153586);
}

double NNfunction_ss_sLdL::synapse0x17bbd80() {
   return (neuron0x17a9960()*-0.0185201);
}

double NNfunction_ss_sLdL::synapse0x17bbdc0() {
   return (neuron0x17a9ec0()*0.000391213);
}

double NNfunction_ss_sLdL::synapse0x17ce120() {
   return (neuron0x17aa0e0()*0.0193247);
}

double NNfunction_ss_sLdL::synapse0x17ce160() {
   return (neuron0x17aa420()*0.0198688);
}

double NNfunction_ss_sLdL::synapse0x17ce1a0() {
   return (neuron0x17aa760()*-0.041405);
}

double NNfunction_ss_sLdL::synapse0x17ce1e0() {
   return (neuron0x17aaaa0()*-0.00453214);
}

double NNfunction_ss_sLdL::synapse0x17ce220() {
   return (neuron0x17aade0()*0.0128514);
}

double NNfunction_ss_sLdL::synapse0x17ce260() {
   return (neuron0x17ab120()*0.0360803);
}

double NNfunction_ss_sLdL::synapse0x17ce5e0() {
   return (neuron0x17a6560()*-0.0728311);
}

double NNfunction_ss_sLdL::synapse0x17ce620() {
   return (neuron0x17a68a0()*-0.346534);
}

double NNfunction_ss_sLdL::synapse0x17ce660() {
   return (neuron0x17a6be0()*0.113247);
}

double NNfunction_ss_sLdL::synapse0x17ce6a0() {
   return (neuron0x17a6f20()*0.0169833);
}

double NNfunction_ss_sLdL::synapse0x17ce6e0() {
   return (neuron0x17a7260()*-0.0421034);
}

double NNfunction_ss_sLdL::synapse0x17ce720() {
   return (neuron0x17a75a0()*0.311812);
}

double NNfunction_ss_sLdL::synapse0x17ce760() {
   return (neuron0x17a78e0()*-0.280903);
}

double NNfunction_ss_sLdL::synapse0x17ce7a0() {
   return (neuron0x17a7c20()*0.0257352);
}

double NNfunction_ss_sLdL::synapse0x17ce7e0() {
   return (neuron0x17a7f60()*0.106083);
}

double NNfunction_ss_sLdL::synapse0x17ce820() {
   return (neuron0x17a82a0()*0.1099);
}

double NNfunction_ss_sLdL::synapse0x17ce860() {
   return (neuron0x17a85e0()*-0.0322672);
}

double NNfunction_ss_sLdL::synapse0x17ce8a0() {
   return (neuron0x17a8920()*0.800734);
}

double NNfunction_ss_sLdL::synapse0x17ce8e0() {
   return (neuron0x17a8c60()*0.398659);
}

double NNfunction_ss_sLdL::synapse0x17ce920() {
   return (neuron0x17a8fa0()*-0.0733004);
}

double NNfunction_ss_sLdL::synapse0x17ce960() {
   return (neuron0x17a92e0()*-0.462939);
}

double NNfunction_ss_sLdL::synapse0x17ce9a0() {
   return (neuron0x17a9620()*0.705244);
}

double NNfunction_ss_sLdL::synapse0x17ce430() {
   return (neuron0x17a9960()*-0.247665);
}

double NNfunction_ss_sLdL::synapse0x17ce470() {
   return (neuron0x17a9ec0()*-0.581818);
}

double NNfunction_ss_sLdL::synapse0x17ceaf0() {
   return (neuron0x17aa0e0()*-0.70926);
}

double NNfunction_ss_sLdL::synapse0x17ceb30() {
   return (neuron0x17aa420()*-0.166564);
}

double NNfunction_ss_sLdL::synapse0x17ceb70() {
   return (neuron0x17aa760()*-0.0458858);
}

double NNfunction_ss_sLdL::synapse0x17cebb0() {
   return (neuron0x17aaaa0()*0.114612);
}

double NNfunction_ss_sLdL::synapse0x17cebf0() {
   return (neuron0x17aade0()*0.153875);
}

double NNfunction_ss_sLdL::synapse0x17cec30() {
   return (neuron0x17ab120()*0.300164);
}

double NNfunction_ss_sLdL::synapse0x17cefb0() {
   return (neuron0x17a6560()*0.000769184);
}

double NNfunction_ss_sLdL::synapse0x17ceff0() {
   return (neuron0x17a68a0()*-0.0127215);
}

double NNfunction_ss_sLdL::synapse0x17cf030() {
   return (neuron0x17a6be0()*-0.141009);
}

double NNfunction_ss_sLdL::synapse0x17cf070() {
   return (neuron0x17a6f20()*-2.3208);
}

double NNfunction_ss_sLdL::synapse0x17cf0b0() {
   return (neuron0x17a7260()*-0.0245148);
}

double NNfunction_ss_sLdL::synapse0x17cf0f0() {
   return (neuron0x17a75a0()*-0.0244128);
}

double NNfunction_ss_sLdL::synapse0x17cf130() {
   return (neuron0x17a78e0()*-0.00850989);
}

double NNfunction_ss_sLdL::synapse0x17cf170() {
   return (neuron0x17a7c20()*-0.0260813);
}

double NNfunction_ss_sLdL::synapse0x17cf1b0() {
   return (neuron0x17a7f60()*-0.000236499);
}

double NNfunction_ss_sLdL::synapse0x17cf1f0() {
   return (neuron0x17a82a0()*0.00784621);
}

double NNfunction_ss_sLdL::synapse0x17cf230() {
   return (neuron0x17a85e0()*0.00229893);
}

double NNfunction_ss_sLdL::synapse0x17cf270() {
   return (neuron0x17a8920()*-0.18794);
}

double NNfunction_ss_sLdL::synapse0x17cf2b0() {
   return (neuron0x17a8c60()*0.0703208);
}

double NNfunction_ss_sLdL::synapse0x17cf2f0() {
   return (neuron0x17a8fa0()*-0.0155336);
}

double NNfunction_ss_sLdL::synapse0x17cf330() {
   return (neuron0x17a92e0()*-0.0472835);
}

double NNfunction_ss_sLdL::synapse0x17cf370() {
   return (neuron0x17a9620()*-0.0319832);
}

double NNfunction_ss_sLdL::synapse0x17cee00() {
   return (neuron0x17a9960()*-0.00320486);
}

double NNfunction_ss_sLdL::synapse0x17cee40() {
   return (neuron0x17a9ec0()*-0.106584);
}

double NNfunction_ss_sLdL::synapse0x17cf4c0() {
   return (neuron0x17aa0e0()*-0.02576);
}

double NNfunction_ss_sLdL::synapse0x17cf500() {
   return (neuron0x17aa420()*-0.0752971);
}

double NNfunction_ss_sLdL::synapse0x17cf540() {
   return (neuron0x17aa760()*0.00886249);
}

double NNfunction_ss_sLdL::synapse0x17cf580() {
   return (neuron0x17aaaa0()*0.0114875);
}

double NNfunction_ss_sLdL::synapse0x17cf5c0() {
   return (neuron0x17aade0()*0.00119999);
}

double NNfunction_ss_sLdL::synapse0x17cf600() {
   return (neuron0x17ab120()*-0.0183562);
}

double NNfunction_ss_sLdL::synapse0x17cf980() {
   return (neuron0x17a6560()*-0.00700422);
}

double NNfunction_ss_sLdL::synapse0x17cf9c0() {
   return (neuron0x17a68a0()*-0.0100287);
}

double NNfunction_ss_sLdL::synapse0x17cfa00() {
   return (neuron0x17a6be0()*-0.0198054);
}

double NNfunction_ss_sLdL::synapse0x17cfa40() {
   return (neuron0x17a6f20()*0.223311);
}

double NNfunction_ss_sLdL::synapse0x17cfa80() {
   return (neuron0x17a7260()*-0.00839807);
}

double NNfunction_ss_sLdL::synapse0x17cfac0() {
   return (neuron0x17a75a0()*-0.00438991);
}

double NNfunction_ss_sLdL::synapse0x17cfb00() {
   return (neuron0x17a78e0()*0.000989394);
}

double NNfunction_ss_sLdL::synapse0x17cfb40() {
   return (neuron0x17a7c20()*-0.0191634);
}

double NNfunction_ss_sLdL::synapse0x17cfb80() {
   return (neuron0x17a7f60()*0.00689174);
}

double NNfunction_ss_sLdL::synapse0x17cfbc0() {
   return (neuron0x17a82a0()*0.0160871);
}

double NNfunction_ss_sLdL::synapse0x17cfc00() {
   return (neuron0x17a85e0()*0.0118399);
}

double NNfunction_ss_sLdL::synapse0x17cfc40() {
   return (neuron0x17a8920()*2.3948);
}

double NNfunction_ss_sLdL::synapse0x17cfc80() {
   return (neuron0x17a8c60()*-0.197222);
}

double NNfunction_ss_sLdL::synapse0x17cfcc0() {
   return (neuron0x17a8fa0()*0.0469489);
}

double NNfunction_ss_sLdL::synapse0x17cfd00() {
   return (neuron0x17a92e0()*0.00904099);
}

double NNfunction_ss_sLdL::synapse0x17cfd40() {
   return (neuron0x17a9620()*0.0269271);
}

double NNfunction_ss_sLdL::synapse0x17cf7d0() {
   return (neuron0x17a9960()*-0.00580781);
}

double NNfunction_ss_sLdL::synapse0x17cf810() {
   return (neuron0x17a9ec0()*0.0238893);
}

double NNfunction_ss_sLdL::synapse0x17cfe90() {
   return (neuron0x17aa0e0()*0.0231962);
}

double NNfunction_ss_sLdL::synapse0x17cfed0() {
   return (neuron0x17aa420()*0.0263463);
}

double NNfunction_ss_sLdL::synapse0x17cff10() {
   return (neuron0x17aa760()*0.00640245);
}

double NNfunction_ss_sLdL::synapse0x17cff50() {
   return (neuron0x17aaaa0()*-0.0220017);
}

double NNfunction_ss_sLdL::synapse0x17cff90() {
   return (neuron0x17aade0()*0.00245334);
}

double NNfunction_ss_sLdL::synapse0x17cffd0() {
   return (neuron0x17ab120()*0.0173185);
}

double NNfunction_ss_sLdL::synapse0x17ac570() {
   return (neuron0x17ab5c0()*-0.0428677);
}

double NNfunction_ss_sLdL::synapse0x17ac5b0() {
   return (neuron0x17abed0()*-0.174754);
}

double NNfunction_ss_sLdL::synapse0x17ada80() {
   return (neuron0x17ac9b0()*-0.0788277);
}

double NNfunction_ss_sLdL::synapse0x17adac0() {
   return (neuron0x1566240()*-0.031845);
}

double NNfunction_ss_sLdL::synapse0x17ae450() {
   return (neuron0x17ad7d0()*-0.00303456);
}

double NNfunction_ss_sLdL::synapse0x17ae490() {
   return (neuron0x17ae1a0()*0.0594816);
}

double NNfunction_ss_sLdL::synapse0x17af220() {
   return (neuron0x17aef70()*0.0188115);
}

double NNfunction_ss_sLdL::synapse0x17af260() {
   return (neuron0x17af940()*-0.00386172);
}

double NNfunction_ss_sLdL::synapse0x17afbf0() {
   return (neuron0x17b0310()*-0.0619636);
}

double NNfunction_ss_sLdL::synapse0x17afc30() {
   return (neuron0x17b0df0()*-1.57048);
}

double NNfunction_ss_sLdL::synapse0x17b05c0() {
   return (neuron0x17b17c0()*0.0195126);
}

double NNfunction_ss_sLdL::synapse0x17b0600() {
   return (neuron0x17ae8a0()*1.69244);
}

double NNfunction_ss_sLdL::synapse0x17b10a0() {
   return (neuron0x17b3370()*0.0555309);
}

double NNfunction_ss_sLdL::synapse0x17b10e0() {
   return (neuron0x17b3d40()*0.785353);
}

double NNfunction_ss_sLdL::synapse0x17b1a70() {
   return (neuron0x17b4710()*-0.0982824);
}

double NNfunction_ss_sLdL::synapse0x17b1ab0() {
   return (neuron0x17b50e0()*-0.10998);
}

double NNfunction_ss_sLdL::synapse0x17aeb50() {
   return (neuron0x17b6ef0()*0.132762);
}

double NNfunction_ss_sLdL::synapse0x17aeb90() {
   return (neuron0x17b71d0()*0.0049559);
}

double NNfunction_ss_sLdL::synapse0x17b3620() {
   return (neuron0x17b7ba0()*0.105039);
}

double NNfunction_ss_sLdL::synapse0x17b3660() {
   return (neuron0x17b8570()*-0.0732297);
}

double NNfunction_ss_sLdL::synapse0x17b3ff0() {
   return (neuron0x17b8f40()*-0.00289786);
}

double NNfunction_ss_sLdL::synapse0x17b4030() {
   return (neuron0x17b9910()*0.265301);
}

double NNfunction_ss_sLdL::synapse0x17b49c0() {
   return (neuron0x17b2460()*0.980389);
}

double NNfunction_ss_sLdL::synapse0x17b4a00() {
   return (neuron0x17b2e30()*-0.172699);
}

double NNfunction_ss_sLdL::synapse0x17b5390() {
   return (neuron0x17bc6a0()*0.0282404);
}

double NNfunction_ss_sLdL::synapse0x17b53d0() {
   return (neuron0x17bd070()*0.00810057);
}

double NNfunction_ss_sLdL::synapse0x17a9500() {
   return (neuron0x17bda40()*0.113245);
}

double NNfunction_ss_sLdL::synapse0x17a9540() {
   return (neuron0x17be410()*0.635241);
}

double NNfunction_ss_sLdL::synapse0x17b7480() {
   return (neuron0x17bede0()*-0.0299218);
}

double NNfunction_ss_sLdL::synapse0x17b74c0() {
   return (neuron0x17bf7b0()*-0.215738);
}

double NNfunction_ss_sLdL::synapse0x17b7e50() {
   return (neuron0x17c0180()*-0.027775);
}

double NNfunction_ss_sLdL::synapse0x17b7e90() {
   return (neuron0x17c0b50()*-0.0072313);
}

double NNfunction_ss_sLdL::synapse0x17b8820() {
   return (neuron0x17b6be0()*-0.0545179);
}

double NNfunction_ss_sLdL::synapse0x17b8860() {
   return (neuron0x17c3730()*-1.97125);
}

double NNfunction_ss_sLdL::synapse0x17b91f0() {
   return (neuron0x17c4100()*0.0106078);
}

double NNfunction_ss_sLdL::synapse0x17b9230() {
   return (neuron0x17c4ad0()*0.0203631);
}

double NNfunction_ss_sLdL::synapse0x17b9bc0() {
   return (neuron0x17c54a0()*-0.00698695);
}

double NNfunction_ss_sLdL::synapse0x17b9c00() {
   return (neuron0x17c5e70()*-0.00359245);
}

double NNfunction_ss_sLdL::synapse0x17b2710() {
   return (neuron0x17c6840()*0.0398138);
}

double NNfunction_ss_sLdL::synapse0x17b2750() {
   return (neuron0x17c7210()*-0.0347203);
}

double NNfunction_ss_sLdL::synapse0x17bbfc0() {
   return (neuron0x17c7be0()*-0.130223);
}

double NNfunction_ss_sLdL::synapse0x17bc000() {
   return (neuron0x17c87c0()*-0.0561817);
}

double NNfunction_ss_sLdL::synapse0x17bc950() {
   return (neuron0x17c9190()*0.00458175);
}

double NNfunction_ss_sLdL::synapse0x17bc990() {
   return (neuron0x17ba010()*-0.263401);
}

double NNfunction_ss_sLdL::synapse0x17bd320() {
   return (neuron0x17ba9e0()*0.690316);
}

double NNfunction_ss_sLdL::synapse0x17bd360() {
   return (neuron0x17bb3b0()*-0.586563);
}

double NNfunction_ss_sLdL::synapse0x17bdcf0() {
   return (neuron0x17cd9f0()*-0.637188);
}

double NNfunction_ss_sLdL::synapse0x17bdd30() {
   return (neuron0x17ce2a0()*-0.000482209);
}

double NNfunction_ss_sLdL::synapse0x17be6c0() {
   return (neuron0x17cec70()*-0.499496);
}

double NNfunction_ss_sLdL::synapse0x17be700() {
   return (neuron0x17cf640()*-0.907611);
}

double NNfunction_ss_sLdL::synapse0x17c0e00() {
   return (neuron0x17ab5c0()*-0.15369);
}

double NNfunction_ss_sLdL::synapse0x17c0e40() {
   return (neuron0x17abed0()*-0.45361);
}

double NNfunction_ss_sLdL::synapse0x17b63c0() {
   return (neuron0x17ac9b0()*-0.0759523);
}

double NNfunction_ss_sLdL::synapse0x17b6400() {
   return (neuron0x1566240()*-0.0733532);
}

double NNfunction_ss_sLdL::synapse0x17c39e0() {
   return (neuron0x17ad7d0()*-0.764342);
}

double NNfunction_ss_sLdL::synapse0x17c3a20() {
   return (neuron0x17ae1a0()*0.0665912);
}

double NNfunction_ss_sLdL::synapse0x17c43b0() {
   return (neuron0x17aef70()*-0.065733);
}

double NNfunction_ss_sLdL::synapse0x17c43f0() {
   return (neuron0x17af940()*0.0222899);
}

double NNfunction_ss_sLdL::synapse0x17c4d80() {
   return (neuron0x17b0310()*-0.147532);
}

double NNfunction_ss_sLdL::synapse0x17c4dc0() {
   return (neuron0x17b0df0()*0.0726112);
}

double NNfunction_ss_sLdL::synapse0x17c5750() {
   return (neuron0x17b17c0()*0.00250957);
}

double NNfunction_ss_sLdL::synapse0x17c5790() {
   return (neuron0x17ae8a0()*-0.82373);
}

double NNfunction_ss_sLdL::synapse0x17c6120() {
   return (neuron0x17b3370()*-0.125998);
}

double NNfunction_ss_sLdL::synapse0x17c6160() {
   return (neuron0x17b3d40()*0.279536);
}

double NNfunction_ss_sLdL::synapse0x17c6af0() {
   return (neuron0x17b4710()*-0.0679598);
}

double NNfunction_ss_sLdL::synapse0x17c6b30() {
   return (neuron0x17b50e0()*-0.217695);
}

double NNfunction_ss_sLdL::synapse0x17c74c0() {
   return (neuron0x17b6ef0()*0.329622);
}

double NNfunction_ss_sLdL::synapse0x17c7500() {
   return (neuron0x17b71d0()*0.0414235);
}

double NNfunction_ss_sLdL::synapse0x17c7e90() {
   return (neuron0x17b7ba0()*0.419956);
}

double NNfunction_ss_sLdL::synapse0x17c7ed0() {
   return (neuron0x17b8570()*-0.117465);
}

double NNfunction_ss_sLdL::synapse0x17c8a70() {
   return (neuron0x17b8f40()*-0.0302908);
}

double NNfunction_ss_sLdL::synapse0x17c8ab0() {
   return (neuron0x17b9910()*-0.254924);
}

double NNfunction_ss_sLdL::synapse0x17c9440() {
   return (neuron0x17b2460()*1.97827);
}

double NNfunction_ss_sLdL::synapse0x17c9480() {
   return (neuron0x17b2e30()*-0.0154246);
}

double NNfunction_ss_sLdL::synapse0x17ba2c0() {
   return (neuron0x17bc6a0()*-0.0383808);
}

double NNfunction_ss_sLdL::synapse0x17ba300() {
   return (neuron0x17bd070()*-0.052308);
}

double NNfunction_ss_sLdL::synapse0x17bac90() {
   return (neuron0x17bda40()*0.15821);
}

double NNfunction_ss_sLdL::synapse0x17bacd0() {
   return (neuron0x17be410()*-0.743304);
}

double NNfunction_ss_sLdL::synapse0x17bb660() {
   return (neuron0x17bede0()*0.0237817);
}

double NNfunction_ss_sLdL::synapse0x17bb6a0() {
   return (neuron0x17bf7b0()*-0.697925);
}

double NNfunction_ss_sLdL::synapse0x17cdb80() {
   return (neuron0x17c0180()*-0.0575452);
}

double NNfunction_ss_sLdL::synapse0x17cdbc0() {
   return (neuron0x17c0b50()*-0.0219227);
}

double NNfunction_ss_sLdL::synapse0x17ce550() {
   return (neuron0x17b6be0()*-0.037323);
}

double NNfunction_ss_sLdL::synapse0x17ce590() {
   return (neuron0x17c3730()*1.53952);
}

double NNfunction_ss_sLdL::synapse0x17cef20() {
   return (neuron0x17c4100()*0.189371);
}

double NNfunction_ss_sLdL::synapse0x17cef60() {
   return (neuron0x17c4ad0()*-0.0137632);
}

double NNfunction_ss_sLdL::synapse0x17cf8f0() {
   return (neuron0x17c54a0()*-0.0185187);
}

double NNfunction_ss_sLdL::synapse0x17cf930() {
   return (neuron0x17c5e70()*0.0563932);
}

double NNfunction_ss_sLdL::synapse0x17ab7e0() {
   return (neuron0x17c6840()*0.109035);
}

double NNfunction_ss_sLdL::synapse0x17ab820() {
   return (neuron0x17c7210()*-0.060566);
}

double NNfunction_ss_sLdL::synapse0x17bf090() {
   return (neuron0x17c7be0()*0.600738);
}

double NNfunction_ss_sLdL::synapse0x17bf0d0() {
   return (neuron0x17c87c0()*-0.01952);
}

double NNfunction_ss_sLdL::synapse0x17d0010() {
   return (neuron0x17c9190()*-0.0517533);
}

double NNfunction_ss_sLdL::synapse0x17d0050() {
   return (neuron0x17ba010()*-0.127618);
}

double NNfunction_ss_sLdL::synapse0x17d0090() {
   return (neuron0x17ba9e0()*0.396611);
}

double NNfunction_ss_sLdL::synapse0x17d00d0() {
   return (neuron0x17bb3b0()*-0.78777);
}

double NNfunction_ss_sLdL::synapse0x17d6f80() {
   return (neuron0x17cd9f0()*1.65123);
}

double NNfunction_ss_sLdL::synapse0x17d6fc0() {
   return (neuron0x17ce2a0()*0.0367058);
}

double NNfunction_ss_sLdL::synapse0x17d7000() {
   return (neuron0x17cec70()*-0.491526);
}

double NNfunction_ss_sLdL::synapse0x17d7040() {
   return (neuron0x17cf640()*-0.867197);
}

double NNfunction_ss_sLdL::synapse0x17d73c0() {
   return (neuron0x17ab5c0()*0.271639);
}

double NNfunction_ss_sLdL::synapse0x17d7400() {
   return (neuron0x17abed0()*0.21708);
}

double NNfunction_ss_sLdL::synapse0x17d7440() {
   return (neuron0x17ac9b0()*0.408507);
}

double NNfunction_ss_sLdL::synapse0x17d7480() {
   return (neuron0x1566240()*-0.0903923);
}

double NNfunction_ss_sLdL::synapse0x17d74c0() {
   return (neuron0x17ad7d0()*-0.883269);
}

double NNfunction_ss_sLdL::synapse0x17d7500() {
   return (neuron0x17ae1a0()*0.401067);
}

double NNfunction_ss_sLdL::synapse0x17d7540() {
   return (neuron0x17aef70()*-0.274664);
}

double NNfunction_ss_sLdL::synapse0x17d7580() {
   return (neuron0x17af940()*-1.1537);
}

double NNfunction_ss_sLdL::synapse0x17d75c0() {
   return (neuron0x17b0310()*-0.226865);
}

double NNfunction_ss_sLdL::synapse0x17d7600() {
   return (neuron0x17b0df0()*1.01975);
}

double NNfunction_ss_sLdL::synapse0x17d7640() {
   return (neuron0x17b17c0()*0.629908);
}

double NNfunction_ss_sLdL::synapse0x17d7680() {
   return (neuron0x17ae8a0()*0.611798);
}

double NNfunction_ss_sLdL::synapse0x17d76c0() {
   return (neuron0x17b3370()*-0.310834);
}

double NNfunction_ss_sLdL::synapse0x17d7700() {
   return (neuron0x17b3d40()*-2.81698);
}

double NNfunction_ss_sLdL::synapse0x17d7740() {
   return (neuron0x17b4710()*-1.2624);
}

double NNfunction_ss_sLdL::synapse0x17d7780() {
   return (neuron0x17b50e0()*-0.136998);
}

double NNfunction_ss_sLdL::synapse0x17d7210() {
   return (neuron0x17b6ef0()*1.11797);
}

double NNfunction_ss_sLdL::synapse0x17d7250() {
   return (neuron0x17b71d0()*-0.76048);
}

double NNfunction_ss_sLdL::synapse0x17d78d0() {
   return (neuron0x17b7ba0()*-0.134601);
}

double NNfunction_ss_sLdL::synapse0x17d7910() {
   return (neuron0x17b8570()*0.800878);
}

double NNfunction_ss_sLdL::synapse0x17d7950() {
   return (neuron0x17b8f40()*-0.0264658);
}

double NNfunction_ss_sLdL::synapse0x17d7990() {
   return (neuron0x17b9910()*0.668539);
}

double NNfunction_ss_sLdL::synapse0x17d79d0() {
   return (neuron0x17b2460()*-5.07449);
}

double NNfunction_ss_sLdL::synapse0x17d7a10() {
   return (neuron0x17b2e30()*-0.233327);
}

double NNfunction_ss_sLdL::synapse0x17d7a50() {
   return (neuron0x17bc6a0()*1.83544);
}

double NNfunction_ss_sLdL::synapse0x17d7a90() {
   return (neuron0x17bd070()*0.436572);
}

double NNfunction_ss_sLdL::synapse0x17d7ad0() {
   return (neuron0x17bda40()*0.364383);
}

double NNfunction_ss_sLdL::synapse0x17d7b10() {
   return (neuron0x17be410()*-0.462349);
}

double NNfunction_ss_sLdL::synapse0x17d7b50() {
   return (neuron0x17bede0()*-0.369132);
}

double NNfunction_ss_sLdL::synapse0x17d7b90() {
   return (neuron0x17bf7b0()*-0.851864);
}

double NNfunction_ss_sLdL::synapse0x17d7bd0() {
   return (neuron0x17c0180()*0.856005);
}

double NNfunction_ss_sLdL::synapse0x17d7c10() {
   return (neuron0x17c0b50()*0.851027);
}

double NNfunction_ss_sLdL::synapse0x17d77c0() {
   return (neuron0x17b6be0()*-0.848855);
}

double NNfunction_ss_sLdL::synapse0x17d7800() {
   return (neuron0x17c3730()*0.0204128);
}

double NNfunction_ss_sLdL::synapse0x17d7840() {
   return (neuron0x17c4100()*-0.00913169);
}

double NNfunction_ss_sLdL::synapse0x17d7880() {
   return (neuron0x17c4ad0()*0.871749);
}

double NNfunction_ss_sLdL::synapse0x17d7e60() {
   return (neuron0x17c54a0()*-1.30902);
}

double NNfunction_ss_sLdL::synapse0x17d7ea0() {
   return (neuron0x17c5e70()*-0.762817);
}

double NNfunction_ss_sLdL::synapse0x17d7ee0() {
   return (neuron0x17c6840()*1.72228);
}

double NNfunction_ss_sLdL::synapse0x17d7f20() {
   return (neuron0x17c7210()*-0.962292);
}

double NNfunction_ss_sLdL::synapse0x17d7f60() {
   return (neuron0x17c7be0()*-0.737903);
}

double NNfunction_ss_sLdL::synapse0x17d7fa0() {
   return (neuron0x17c87c0()*-0.816726);
}

double NNfunction_ss_sLdL::synapse0x17d7fe0() {
   return (neuron0x17c9190()*0.752298);
}

double NNfunction_ss_sLdL::synapse0x17d8020() {
   return (neuron0x17ba010()*0.637998);
}

double NNfunction_ss_sLdL::synapse0x17d8060() {
   return (neuron0x17ba9e0()*0.959624);
}

double NNfunction_ss_sLdL::synapse0x17d80a0() {
   return (neuron0x17bb3b0()*-0.687159);
}

double NNfunction_ss_sLdL::synapse0x17d80e0() {
   return (neuron0x17cd9f0()*7.70622);
}

double NNfunction_ss_sLdL::synapse0x17d8120() {
   return (neuron0x17ce2a0()*-1.06879);
}

double NNfunction_ss_sLdL::synapse0x17d8160() {
   return (neuron0x17cec70()*-1.20085);
}

double NNfunction_ss_sLdL::synapse0x17d81a0() {
   return (neuron0x17cf640()*-0.470032);
}

double NNfunction_ss_sLdL::synapse0x17d8520() {
   return (neuron0x17ab5c0()*1.16778);
}

double NNfunction_ss_sLdL::synapse0x17d8560() {
   return (neuron0x17abed0()*-0.85875);
}

double NNfunction_ss_sLdL::synapse0x17d85a0() {
   return (neuron0x17ac9b0()*1.49459);
}

double NNfunction_ss_sLdL::synapse0x17d85e0() {
   return (neuron0x1566240()*-0.977119);
}

double NNfunction_ss_sLdL::synapse0x17d8620() {
   return (neuron0x17ad7d0()*1.7175);
}

double NNfunction_ss_sLdL::synapse0x17d8660() {
   return (neuron0x17ae1a0()*1.23588);
}

double NNfunction_ss_sLdL::synapse0x17d86a0() {
   return (neuron0x17aef70()*1.26638);
}

double NNfunction_ss_sLdL::synapse0x17d86e0() {
   return (neuron0x17af940()*0.036179);
}

double NNfunction_ss_sLdL::synapse0x17d8720() {
   return (neuron0x17b0310()*-1.16245);
}

double NNfunction_ss_sLdL::synapse0x17d8760() {
   return (neuron0x17b0df0()*-1.02632);
}

double NNfunction_ss_sLdL::synapse0x17d87a0() {
   return (neuron0x17b17c0()*0.61589);
}

double NNfunction_ss_sLdL::synapse0x17d87e0() {
   return (neuron0x17ae8a0()*-0.805686);
}

double NNfunction_ss_sLdL::synapse0x17d8820() {
   return (neuron0x17b3370()*2.14314);
}

double NNfunction_ss_sLdL::synapse0x17d8860() {
   return (neuron0x17b3d40()*-4.56245);
}

double NNfunction_ss_sLdL::synapse0x17d88a0() {
   return (neuron0x17b4710()*1.24936);
}

double NNfunction_ss_sLdL::synapse0x17d88e0() {
   return (neuron0x17b50e0()*-1.74353);
}

double NNfunction_ss_sLdL::synapse0x17d8370() {
   return (neuron0x17b6ef0()*6.06787);
}

double NNfunction_ss_sLdL::synapse0x17d83b0() {
   return (neuron0x17b71d0()*0.205146);
}

double NNfunction_ss_sLdL::synapse0x17d8a30() {
   return (neuron0x17b7ba0()*-1.57302);
}

double NNfunction_ss_sLdL::synapse0x17d8a70() {
   return (neuron0x17b8570()*-1.06682);
}

double NNfunction_ss_sLdL::synapse0x17d8ab0() {
   return (neuron0x17b8f40()*0.887718);
}

double NNfunction_ss_sLdL::synapse0x17d8af0() {
   return (neuron0x17b9910()*-0.849819);
}

double NNfunction_ss_sLdL::synapse0x17d8b30() {
   return (neuron0x17b2460()*-3.86393);
}

double NNfunction_ss_sLdL::synapse0x17d8b70() {
   return (neuron0x17b2e30()*3.86359);
}

double NNfunction_ss_sLdL::synapse0x17d8bb0() {
   return (neuron0x17bc6a0()*0.862834);
}

double NNfunction_ss_sLdL::synapse0x17d8bf0() {
   return (neuron0x17bd070()*0.855623);
}

double NNfunction_ss_sLdL::synapse0x17d8c30() {
   return (neuron0x17bda40()*1.12436);
}

double NNfunction_ss_sLdL::synapse0x17d8c70() {
   return (neuron0x17be410()*-1.18357);
}

double NNfunction_ss_sLdL::synapse0x17d8cb0() {
   return (neuron0x17bede0()*0.037506);
}

double NNfunction_ss_sLdL::synapse0x17d8cf0() {
   return (neuron0x17bf7b0()*-1.76712);
}

double NNfunction_ss_sLdL::synapse0x17d8d30() {
   return (neuron0x17c0180()*-0.450994);
}

double NNfunction_ss_sLdL::synapse0x17d8d70() {
   return (neuron0x17c0b50()*-0.0561846);
}

double NNfunction_ss_sLdL::synapse0x17d8920() {
   return (neuron0x17b6be0()*-0.644167);
}

double NNfunction_ss_sLdL::synapse0x17d8960() {
   return (neuron0x17c3730()*1.32556);
}

double NNfunction_ss_sLdL::synapse0x17d89a0() {
   return (neuron0x17c4100()*-3.03665);
}

double NNfunction_ss_sLdL::synapse0x17d89e0() {
   return (neuron0x17c4ad0()*0.96529);
}

double NNfunction_ss_sLdL::synapse0x17d8fc0() {
   return (neuron0x17c54a0()*0.260852);
}

double NNfunction_ss_sLdL::synapse0x17d9000() {
   return (neuron0x17c5e70()*-0.533203);
}

double NNfunction_ss_sLdL::synapse0x17d9040() {
   return (neuron0x17c6840()*1.13169);
}

double NNfunction_ss_sLdL::synapse0x17d9080() {
   return (neuron0x17c7210()*-0.26847);
}

double NNfunction_ss_sLdL::synapse0x17d90c0() {
   return (neuron0x17c7be0()*0.710839);
}

double NNfunction_ss_sLdL::synapse0x17d9100() {
   return (neuron0x17c87c0()*-0.761856);
}

double NNfunction_ss_sLdL::synapse0x17d9140() {
   return (neuron0x17c9190()*0.125838);
}

double NNfunction_ss_sLdL::synapse0x17d9180() {
   return (neuron0x17ba010()*2.69952);
}

double NNfunction_ss_sLdL::synapse0x17d91c0() {
   return (neuron0x17ba9e0()*-1.2679);
}

double NNfunction_ss_sLdL::synapse0x17d9200() {
   return (neuron0x17bb3b0()*-2.0749);
}

double NNfunction_ss_sLdL::synapse0x17d9240() {
   return (neuron0x17cd9f0()*-3.00253);
}

double NNfunction_ss_sLdL::synapse0x17d9280() {
   return (neuron0x17ce2a0()*-0.845701);
}

double NNfunction_ss_sLdL::synapse0x17d92c0() {
   return (neuron0x17cec70()*1.25488);
}

double NNfunction_ss_sLdL::synapse0x17d9300() {
   return (neuron0x17cf640()*0.40988);
}

double NNfunction_ss_sLdL::synapse0x17d9680() {
   return (neuron0x17ab5c0()*-0.222068);
}

double NNfunction_ss_sLdL::synapse0x17d96c0() {
   return (neuron0x17abed0()*-0.918489);
}

double NNfunction_ss_sLdL::synapse0x17d9700() {
   return (neuron0x17ac9b0()*-0.59819);
}

double NNfunction_ss_sLdL::synapse0x17d9740() {
   return (neuron0x1566240()*-0.641638);
}

double NNfunction_ss_sLdL::synapse0x17d9780() {
   return (neuron0x17ad7d0()*0.743148);
}

double NNfunction_ss_sLdL::synapse0x17d97c0() {
   return (neuron0x17ae1a0()*-0.0944904);
}

double NNfunction_ss_sLdL::synapse0x17d9800() {
   return (neuron0x17aef70()*-0.416765);
}

double NNfunction_ss_sLdL::synapse0x17d9840() {
   return (neuron0x17af940()*0.190464);
}

double NNfunction_ss_sLdL::synapse0x17d9880() {
   return (neuron0x17b0310()*-1.07527);
}

double NNfunction_ss_sLdL::synapse0x17d98c0() {
   return (neuron0x17b0df0()*1.72879);
}

double NNfunction_ss_sLdL::synapse0x17d9900() {
   return (neuron0x17b17c0()*-0.0615853);
}

double NNfunction_ss_sLdL::synapse0x17d9940() {
   return (neuron0x17ae8a0()*-0.711396);
}

double NNfunction_ss_sLdL::synapse0x17d9980() {
   return (neuron0x17b3370()*-0.256888);
}

double NNfunction_ss_sLdL::synapse0x17d99c0() {
   return (neuron0x17b3d40()*-0.598251);
}

double NNfunction_ss_sLdL::synapse0x17d9a00() {
   return (neuron0x17b4710()*-1.21397);
}

double NNfunction_ss_sLdL::synapse0x17d9a40() {
   return (neuron0x17b50e0()*-0.081265);
}

double NNfunction_ss_sLdL::synapse0x17d94d0() {
   return (neuron0x17b6ef0()*1.38822);
}

double NNfunction_ss_sLdL::synapse0x17d9510() {
   return (neuron0x17b71d0()*0.276605);
}

double NNfunction_ss_sLdL::synapse0x17d9b90() {
   return (neuron0x17b7ba0()*0.614276);
}

double NNfunction_ss_sLdL::synapse0x17d9bd0() {
   return (neuron0x17b8570()*-0.42277);
}

double NNfunction_ss_sLdL::synapse0x17d9c10() {
   return (neuron0x17b8f40()*0.256608);
}

double NNfunction_ss_sLdL::synapse0x17d9c50() {
   return (neuron0x17b9910()*-0.750809);
}

double NNfunction_ss_sLdL::synapse0x17d9c90() {
   return (neuron0x17b2460()*0.41282);
}

double NNfunction_ss_sLdL::synapse0x17d9cd0() {
   return (neuron0x17b2e30()*-1.35318);
}

double NNfunction_ss_sLdL::synapse0x17d9d10() {
   return (neuron0x17bc6a0()*-0.0215547);
}

double NNfunction_ss_sLdL::synapse0x17d9d50() {
   return (neuron0x17bd070()*-0.0799398);
}

double NNfunction_ss_sLdL::synapse0x17d9d90() {
   return (neuron0x17bda40()*-0.293176);
}

double NNfunction_ss_sLdL::synapse0x17d9dd0() {
   return (neuron0x17be410()*0.950576);
}

double NNfunction_ss_sLdL::synapse0x17d9e10() {
   return (neuron0x17bede0()*0.663365);
}

double NNfunction_ss_sLdL::synapse0x17d9e50() {
   return (neuron0x17bf7b0()*0.42975);
}

double NNfunction_ss_sLdL::synapse0x17d9e90() {
   return (neuron0x17c0180()*-0.155153);
}

double NNfunction_ss_sLdL::synapse0x17d9ed0() {
   return (neuron0x17c0b50()*-0.275982);
}

double NNfunction_ss_sLdL::synapse0x17d9a80() {
   return (neuron0x17b6be0()*0.198035);
}

double NNfunction_ss_sLdL::synapse0x17d9ac0() {
   return (neuron0x17c3730()*0.124811);
}

double NNfunction_ss_sLdL::synapse0x17d9b00() {
   return (neuron0x17c4100()*0.769741);
}

double NNfunction_ss_sLdL::synapse0x17d9b40() {
   return (neuron0x17c4ad0()*0.24869);
}

double NNfunction_ss_sLdL::synapse0x17da120() {
   return (neuron0x17c54a0()*0.242451);
}

double NNfunction_ss_sLdL::synapse0x17da160() {
   return (neuron0x17c5e70()*0.255555);
}

double NNfunction_ss_sLdL::synapse0x17da1a0() {
   return (neuron0x17c6840()*0.748922);
}

double NNfunction_ss_sLdL::synapse0x17da1e0() {
   return (neuron0x17c7210()*0.100378);
}

double NNfunction_ss_sLdL::synapse0x17da220() {
   return (neuron0x17c7be0()*1.20352);
}

double NNfunction_ss_sLdL::synapse0x17da260() {
   return (neuron0x17c87c0()*0.73091);
}

double NNfunction_ss_sLdL::synapse0x17da2a0() {
   return (neuron0x17c9190()*-0.381072);
}

double NNfunction_ss_sLdL::synapse0x17da2e0() {
   return (neuron0x17ba010()*-0.857823);
}

double NNfunction_ss_sLdL::synapse0x17da320() {
   return (neuron0x17ba9e0()*2.1226);
}

double NNfunction_ss_sLdL::synapse0x17da360() {
   return (neuron0x17bb3b0()*-0.109543);
}

double NNfunction_ss_sLdL::synapse0x17da3a0() {
   return (neuron0x17cd9f0()*4.96379);
}

double NNfunction_ss_sLdL::synapse0x17da3e0() {
   return (neuron0x17ce2a0()*0.044116);
}

double NNfunction_ss_sLdL::synapse0x17da420() {
   return (neuron0x17cec70()*-2.96645);
}

double NNfunction_ss_sLdL::synapse0x17da460() {
   return (neuron0x17cf640()*-1.91061);
}

double NNfunction_ss_sLdL::synapse0x17ab580() {
   return (neuron0x17d6840()*8.50332);
}

double NNfunction_ss_sLdL::synapse0x17da6c0() {
   return (neuron0x17d6be0()*-4.03871);
}

double NNfunction_ss_sLdL::synapse0x17da700() {
   return (neuron0x17d7080()*-5.24527);
}

double NNfunction_ss_sLdL::synapse0x17da740() {
   return (neuron0x17d81e0()*-7.99996);
}

double NNfunction_ss_sLdL::synapse0x17da780() {
   return (neuron0x17d9340()*8.49132);
}

