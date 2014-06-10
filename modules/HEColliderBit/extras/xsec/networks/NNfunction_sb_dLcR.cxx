#include "NNfunction_sb_dLcR.h"
#include <cmath>

double NNfunction_sb_dLcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4661)/15.3188;
   input1 = (in1 - -0.470924)/1148.01;
   input2 = (in2 - 648.455)/616.137;
   input3 = (in3 - -56.4166)/827.164;
   input4 = (in4 - 1066.8)/957.579;
   input5 = (in5 - 890.272)/948.024;
   input6 = (in6 - 906.861)/954.455;
   input7 = (in7 - 918.66)/935.566;
   input8 = (in8 - 904.763)/956.762;
   input9 = (in9 - 882.55)/934.402;
   input10 = (in10 - 980.821)/946.306;
   input11 = (in11 - 365.857)/372.427;
   input12 = (in12 - 703.843)/852.423;
   input13 = (in13 - 497.897)/517.842;
   input14 = (in14 - 716.999)/819.689;
   input15 = (in15 - 388.767)/385.039;
   input16 = (in16 - 531.124)/560.82;
   input17 = (in17 - 750.712)/883.977;
   input18 = (in18 - 733.375)/878.947;
   input19 = (in19 - 787.808)/867.996;
   input20 = (in20 - -4.33377)/493.026;
   input21 = (in21 - 4.41821)/1160.5;
   input22 = (in22 - 10.7309)/1206.38;
   input23 = (in23 - -187.667)/593.455;
   switch(index) {
     case 0:
         return neuron0x17d84b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLcR::Value(int index, double* input) {
   input0 = (input[0] - 23.4661)/15.3188;
   input1 = (input[1] - -0.470924)/1148.01;
   input2 = (input[2] - 648.455)/616.137;
   input3 = (input[3] - -56.4166)/827.164;
   input4 = (input[4] - 1066.8)/957.579;
   input5 = (input[5] - 890.272)/948.024;
   input6 = (input[6] - 906.861)/954.455;
   input7 = (input[7] - 918.66)/935.566;
   input8 = (input[8] - 904.763)/956.762;
   input9 = (input[9] - 882.55)/934.402;
   input10 = (input[10] - 980.821)/946.306;
   input11 = (input[11] - 365.857)/372.427;
   input12 = (input[12] - 703.843)/852.423;
   input13 = (input[13] - 497.897)/517.842;
   input14 = (input[14] - 716.999)/819.689;
   input15 = (input[15] - 388.767)/385.039;
   input16 = (input[16] - 531.124)/560.82;
   input17 = (input[17] - 750.712)/883.977;
   input18 = (input[18] - 733.375)/878.947;
   input19 = (input[19] - 787.808)/867.996;
   input20 = (input[20] - -4.33377)/493.026;
   input21 = (input[21] - 4.41821)/1160.5;
   input22 = (input[22] - 10.7309)/1206.38;
   input23 = (input[23] - -187.667)/593.455;
   switch(index) {
     case 0:
         return neuron0x17d84b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLcR::neuron0x17a4570() {
   return input0;
}

double NNfunction_sb_dLcR::neuron0x17a48b0() {
   return input1;
}

double NNfunction_sb_dLcR::neuron0x17a4bf0() {
   return input2;
}

double NNfunction_sb_dLcR::neuron0x17a4f30() {
   return input3;
}

double NNfunction_sb_dLcR::neuron0x17a5270() {
   return input4;
}

double NNfunction_sb_dLcR::neuron0x17a55b0() {
   return input5;
}

double NNfunction_sb_dLcR::neuron0x17a58f0() {
   return input6;
}

double NNfunction_sb_dLcR::neuron0x17a5c30() {
   return input7;
}

double NNfunction_sb_dLcR::neuron0x17a5f70() {
   return input8;
}

double NNfunction_sb_dLcR::neuron0x17a62b0() {
   return input9;
}

double NNfunction_sb_dLcR::neuron0x17a65f0() {
   return input10;
}

double NNfunction_sb_dLcR::neuron0x17a6930() {
   return input11;
}

double NNfunction_sb_dLcR::neuron0x17a6c70() {
   return input12;
}

double NNfunction_sb_dLcR::neuron0x17a6fb0() {
   return input13;
}

double NNfunction_sb_dLcR::neuron0x17a72f0() {
   return input14;
}

double NNfunction_sb_dLcR::neuron0x17a7630() {
   return input15;
}

double NNfunction_sb_dLcR::neuron0x17a7970() {
   return input16;
}

double NNfunction_sb_dLcR::neuron0x17a7ed0() {
   return input17;
}

double NNfunction_sb_dLcR::neuron0x17a80f0() {
   return input18;
}

double NNfunction_sb_dLcR::neuron0x17a8430() {
   return input19;
}

double NNfunction_sb_dLcR::neuron0x17a8770() {
   return input20;
}

double NNfunction_sb_dLcR::neuron0x17a8ab0() {
   return input21;
}

double NNfunction_sb_dLcR::neuron0x17a8df0() {
   return input22;
}

double NNfunction_sb_dLcR::neuron0x17a9130() {
   return input23;
}

double NNfunction_sb_dLcR::input0x17a95d0() {
   double input = -1.1889;
   input += synapse0x15643e0();
   input += synapse0x17a4430();
   input += synapse0x17a4470();
   input += synapse0x17a9880();
   input += synapse0x17a98c0();
   input += synapse0x17a9900();
   input += synapse0x17a9940();
   input += synapse0x17a9980();
   input += synapse0x17a99c0();
   input += synapse0x17a9a00();
   input += synapse0x17a9a40();
   input += synapse0x17a9a80();
   input += synapse0x17a9ac0();
   input += synapse0x17a9b00();
   input += synapse0x17a9b40();
   input += synapse0x17a9b80();
   input += synapse0x17a43a0();
   input += synapse0x17a43e0();
   input += synapse0x1555c80();
   input += synapse0x1555cc0();
   input += synapse0x17a9de0();
   input += synapse0x17a9e20();
   input += synapse0x17a9e60();
   input += synapse0x17a9ea0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17a95d0() {
   double input = input0x17a95d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17a9ee0() {
   double input = 1.05762;
   input += synapse0x17aa220();
   input += synapse0x17aa260();
   input += synapse0x17aa2a0();
   input += synapse0x17aa2e0();
   input += synapse0x17aa320();
   input += synapse0x17aa360();
   input += synapse0x17aa3a0();
   input += synapse0x17aa3e0();
   input += synapse0x17aa420();
   input += synapse0x17a9cd0();
   input += synapse0x17a9d10();
   input += synapse0x17a9d50();
   input += synapse0x17a9d90();
   input += synapse0x17aa670();
   input += synapse0x17aa6b0();
   input += synapse0x17aa6f0();
   input += synapse0x17aa070();
   input += synapse0x17aa0b0();
   input += synapse0x17aa840();
   input += synapse0x17aa880();
   input += synapse0x17aa8c0();
   input += synapse0x17aa900();
   input += synapse0x17aa940();
   input += synapse0x17aa980();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17a9ee0() {
   double input = input0x17a9ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17aa9c0() {
   double input = -0.35807;
   input += synapse0x17aad00();
   input += synapse0x17aad40();
   input += synapse0x17aad80();
   input += synapse0x17aadc0();
   input += synapse0x17aae00();
   input += synapse0x17aae40();
   input += synapse0x17aae80();
   input += synapse0x17aaec0();
   input += synapse0x17aaf00();
   input += synapse0x17aaf40();
   input += synapse0x17aaf80();
   input += synapse0x17aafc0();
   input += synapse0x17ab000();
   input += synapse0x17ab040();
   input += synapse0x17ab080();
   input += synapse0x17ab0c0();
   input += synapse0x17aab50();
   input += synapse0x17aab90();
   input += synapse0x1563ad0();
   input += synapse0x1563b10();
   input += synapse0x1793600();
   input += synapse0x1793640();
   input += synapse0x1793680();
   input += synapse0x17a44b0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17aa9c0() {
   double input = input0x17aa9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1564250() {
   double input = 0.82365;
   input += synapse0x17aa610();
   input += synapse0x17a44f0();
   input += synapse0x17a4530();
   input += synapse0x17ab210();
   input += synapse0x17ab250();
   input += synapse0x17ab290();
   input += synapse0x17ab2d0();
   input += synapse0x17ab310();
   input += synapse0x17ab350();
   input += synapse0x17ab390();
   input += synapse0x17ab3d0();
   input += synapse0x17ab410();
   input += synapse0x17ab450();
   input += synapse0x17ab490();
   input += synapse0x17ab4d0();
   input += synapse0x17ab510();
   input += synapse0x17aa460();
   input += synapse0x17aa4a0();
   input += synapse0x17ab660();
   input += synapse0x17ab6a0();
   input += synapse0x17ab6e0();
   input += synapse0x17ab720();
   input += synapse0x17ab760();
   input += synapse0x17ab7a0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1564250() {
   double input = input0x1564250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17ab7e0() {
   double input = 0.919564;
   input += synapse0x17abb20();
   input += synapse0x17abb60();
   input += synapse0x17abba0();
   input += synapse0x17abbe0();
   input += synapse0x17abc20();
   input += synapse0x17abc60();
   input += synapse0x17abca0();
   input += synapse0x17abce0();
   input += synapse0x17abd20();
   input += synapse0x17abd60();
   input += synapse0x17abda0();
   input += synapse0x17abde0();
   input += synapse0x17abe20();
   input += synapse0x17abe60();
   input += synapse0x17abea0();
   input += synapse0x17abee0();
   input += synapse0x17ab970();
   input += synapse0x17ab9b0();
   input += synapse0x17ac030();
   input += synapse0x17ac070();
   input += synapse0x17ac0b0();
   input += synapse0x17ac0f0();
   input += synapse0x17ac130();
   input += synapse0x17ac170();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17ab7e0() {
   double input = input0x17ab7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17ac1b0() {
   double input = 0.565059;
   input += synapse0x17ac4f0();
   input += synapse0x17ac530();
   input += synapse0x17ac570();
   input += synapse0x17ac5b0();
   input += synapse0x17ac5f0();
   input += synapse0x17ac630();
   input += synapse0x17ac670();
   input += synapse0x17ac6b0();
   input += synapse0x17ac6f0();
   input += synapse0x1563e40();
   input += synapse0x1563e80();
   input += synapse0x1563ec0();
   input += synapse0x1563f00();
   input += synapse0x1563f40();
   input += synapse0x1563f80();
   input += synapse0x1563fc0();
   input += synapse0x17ac340();
   input += synapse0x17ac380();
   input += synapse0x1564110();
   input += synapse0x1564150();
   input += synapse0x1564190();
   input += synapse0x15641d0();
   input += synapse0x1564210();
   input += synapse0x17acf40();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17ac1b0() {
   double input = input0x17ac1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17acf80() {
   double input = 0.937801;
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
   input += synapse0x17ad540();
   input += synapse0x17ad580();
   input += synapse0x17ad5c0();
   input += synapse0x17ad600();
   input += synapse0x17ad640();
   input += synapse0x17ad680();
   input += synapse0x17ad110();
   input += synapse0x17ad150();
   input += synapse0x17ad7d0();
   input += synapse0x17ad810();
   input += synapse0x17ad850();
   input += synapse0x17ad890();
   input += synapse0x17ad8d0();
   input += synapse0x17ad910();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17acf80() {
   double input = input0x17acf80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17ad950() {
   double input = 2.06023;
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
   input += synapse0x17adf10();
   input += synapse0x17adf50();
   input += synapse0x17adf90();
   input += synapse0x17adfd0();
   input += synapse0x17ae010();
   input += synapse0x17ae050();
   input += synapse0x17adae0();
   input += synapse0x17adb20();
   input += synapse0x17ae1a0();
   input += synapse0x17ae1e0();
   input += synapse0x17ae220();
   input += synapse0x17ae260();
   input += synapse0x17ae2a0();
   input += synapse0x17ae2e0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17ad950() {
   double input = input0x17ad950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17ae320() {
   double input = -1.91122;
   input += synapse0x17a7dc0();
   input += synapse0x17a7e00();
   input += synapse0x17a7e40();
   input += synapse0x17a7e80();
   input += synapse0x17ae870();
   input += synapse0x17ae8b0();
   input += synapse0x17ae8f0();
   input += synapse0x17ae930();
   input += synapse0x17ae970();
   input += synapse0x17ae9b0();
   input += synapse0x17ae9f0();
   input += synapse0x17aea30();
   input += synapse0x17aea70();
   input += synapse0x17aeab0();
   input += synapse0x17aeaf0();
   input += synapse0x17aeb30();
   input += synapse0x17ae4b0();
   input += synapse0x17ae4f0();
   input += synapse0x17aec80();
   input += synapse0x17aecc0();
   input += synapse0x17aed00();
   input += synapse0x17aed40();
   input += synapse0x17aed80();
   input += synapse0x17aedc0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17ae320() {
   double input = input0x17ae320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17aee00() {
   double input = -1.65118;
   input += synapse0x17af140();
   input += synapse0x17af180();
   input += synapse0x17af1c0();
   input += synapse0x17af200();
   input += synapse0x17af240();
   input += synapse0x17af280();
   input += synapse0x17af2c0();
   input += synapse0x17af300();
   input += synapse0x17af340();
   input += synapse0x17af380();
   input += synapse0x17af3c0();
   input += synapse0x17af400();
   input += synapse0x17af440();
   input += synapse0x17af480();
   input += synapse0x17af4c0();
   input += synapse0x17af500();
   input += synapse0x17aef90();
   input += synapse0x17aefd0();
   input += synapse0x17af650();
   input += synapse0x17af690();
   input += synapse0x17af6d0();
   input += synapse0x17af710();
   input += synapse0x17af750();
   input += synapse0x17af790();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17aee00() {
   double input = input0x17aee00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17af7d0() {
   double input = -1.64966;
   input += synapse0x17afb10();
   input += synapse0x17afb50();
   input += synapse0x17afb90();
   input += synapse0x17afbd0();
   input += synapse0x17afc10();
   input += synapse0x17afc50();
   input += synapse0x17afc90();
   input += synapse0x17afcd0();
   input += synapse0x17afd10();
   input += synapse0x17afd50();
   input += synapse0x17afd90();
   input += synapse0x17afdd0();
   input += synapse0x17afe10();
   input += synapse0x17afe50();
   input += synapse0x17afe90();
   input += synapse0x17afed0();
   input += synapse0x17af960();
   input += synapse0x17af9a0();
   input += synapse0x17ac730();
   input += synapse0x17ac770();
   input += synapse0x17ac7b0();
   input += synapse0x17ac7f0();
   input += synapse0x17ac830();
   input += synapse0x17ac870();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17af7d0() {
   double input = input0x17af7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17ac8b0() {
   double input = 2.1536;
   input += synapse0x17acbf0();
   input += synapse0x17acc30();
   input += synapse0x17acc70();
   input += synapse0x17accb0();
   input += synapse0x17accf0();
   input += synapse0x17acd30();
   input += synapse0x17acd70();
   input += synapse0x17acdb0();
   input += synapse0x17acdf0();
   input += synapse0x17ace30();
   input += synapse0x17ace70();
   input += synapse0x17aceb0();
   input += synapse0x17acef0();
   input += synapse0x17b1030();
   input += synapse0x17b1070();
   input += synapse0x17b10b0();
   input += synapse0x17aca40();
   input += synapse0x17aca80();
   input += synapse0x17b1200();
   input += synapse0x17b1240();
   input += synapse0x17b1280();
   input += synapse0x17b12c0();
   input += synapse0x17b1300();
   input += synapse0x17b1340();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17ac8b0() {
   double input = input0x17ac8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17b1380() {
   double input = 0.371411;
   input += synapse0x17b16c0();
   input += synapse0x17b1700();
   input += synapse0x17b1740();
   input += synapse0x17b1780();
   input += synapse0x17b17c0();
   input += synapse0x17b1800();
   input += synapse0x17b1840();
   input += synapse0x17b1880();
   input += synapse0x17b18c0();
   input += synapse0x17b1900();
   input += synapse0x17b1940();
   input += synapse0x17b1980();
   input += synapse0x17b19c0();
   input += synapse0x17b1a00();
   input += synapse0x17b1a40();
   input += synapse0x17b1a80();
   input += synapse0x17b1510();
   input += synapse0x17b1550();
   input += synapse0x17b1bd0();
   input += synapse0x17b1c10();
   input += synapse0x17b1c50();
   input += synapse0x17b1c90();
   input += synapse0x17b1cd0();
   input += synapse0x17b1d10();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17b1380() {
   double input = input0x17b1380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17b1d50() {
   double input = 1.01717;
   input += synapse0x17b2090();
   input += synapse0x17b20d0();
   input += synapse0x17b2110();
   input += synapse0x17b2150();
   input += synapse0x17b2190();
   input += synapse0x17b21d0();
   input += synapse0x17b2210();
   input += synapse0x17b2250();
   input += synapse0x17b2290();
   input += synapse0x17b22d0();
   input += synapse0x17b2310();
   input += synapse0x17b2350();
   input += synapse0x17b2390();
   input += synapse0x17b23d0();
   input += synapse0x17b2410();
   input += synapse0x17b2450();
   input += synapse0x17b1ee0();
   input += synapse0x17b1f20();
   input += synapse0x17b25a0();
   input += synapse0x17b25e0();
   input += synapse0x17b2620();
   input += synapse0x17b2660();
   input += synapse0x17b26a0();
   input += synapse0x17b26e0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17b1d50() {
   double input = input0x17b1d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17b2720() {
   double input = -0.390264;
   input += synapse0x17b2a60();
   input += synapse0x17b2aa0();
   input += synapse0x17b2ae0();
   input += synapse0x17b2b20();
   input += synapse0x17b2b60();
   input += synapse0x17b2ba0();
   input += synapse0x17b2be0();
   input += synapse0x17b2c20();
   input += synapse0x17b2c60();
   input += synapse0x17b2ca0();
   input += synapse0x17b2ce0();
   input += synapse0x17b2d20();
   input += synapse0x17b2d60();
   input += synapse0x17b2da0();
   input += synapse0x17b2de0();
   input += synapse0x17b2e20();
   input += synapse0x17b28b0();
   input += synapse0x17b28f0();
   input += synapse0x17b2f70();
   input += synapse0x17b2fb0();
   input += synapse0x17b2ff0();
   input += synapse0x17b3030();
   input += synapse0x17b3070();
   input += synapse0x17b30b0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17b2720() {
   double input = input0x17b2720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17b30f0() {
   double input = -2.2517;
   input += synapse0x17b3430();
   input += synapse0x17a4790();
   input += synapse0x17a47d0();
   input += synapse0x17a4ad0();
   input += synapse0x17a4b10();
   input += synapse0x17a4e10();
   input += synapse0x17a4e50();
   input += synapse0x17a5150();
   input += synapse0x17a5190();
   input += synapse0x17a5490();
   input += synapse0x17a54d0();
   input += synapse0x17a57d0();
   input += synapse0x17a5810();
   input += synapse0x17a5b10();
   input += synapse0x17a5b50();
   input += synapse0x17a5e50();
   input += synapse0x17a5e90();
   input += synapse0x17a6190();
   input += synapse0x17a61d0();
   input += synapse0x17a64d0();
   input += synapse0x17a6510();
   input += synapse0x17a6810();
   input += synapse0x17a6850();
   input += synapse0x17a6b50();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17b30f0() {
   double input = input0x17b30f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17b4f00() {
   double input = -1.16591;
   input += synapse0x17a6b90();
   input += synapse0x17a7850();
   input += synapse0x17a7890();
   input += synapse0x17b3280();
   input += synapse0x17b32c0();
   input += synapse0x17a7b90();
   input += synapse0x17a7bd0();
   input += synapse0x1555b60();
   input += synapse0x1555ba0();
   input += synapse0x17a8310();
   input += synapse0x17a8350();
   input += synapse0x17a8650();
   input += synapse0x17a8690();
   input += synapse0x17a8990();
   input += synapse0x17a89d0();
   input += synapse0x17a8cd0();
   input += synapse0x17a8d10();
   input += synapse0x17a9010();
   input += synapse0x17a9050();
   input += synapse0x17a9350();
   input += synapse0x17a9390();
   input += synapse0x17a6e90();
   input += synapse0x17a6ed0();
   input += synapse0x17b51a0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17b4f00() {
   double input = input0x17b4f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17b51e0() {
   double input = -0.212721;
   input += synapse0x17b5520();
   input += synapse0x17b5560();
   input += synapse0x17b55a0();
   input += synapse0x17b55e0();
   input += synapse0x17b5620();
   input += synapse0x17b5660();
   input += synapse0x17b56a0();
   input += synapse0x17b56e0();
   input += synapse0x17b5720();
   input += synapse0x17b5760();
   input += synapse0x17b57a0();
   input += synapse0x17b57e0();
   input += synapse0x17b5820();
   input += synapse0x17b5860();
   input += synapse0x17b58a0();
   input += synapse0x17b58e0();
   input += synapse0x17b5370();
   input += synapse0x17b53b0();
   input += synapse0x17b5a30();
   input += synapse0x17b5a70();
   input += synapse0x17b5ab0();
   input += synapse0x17b5af0();
   input += synapse0x17b5b30();
   input += synapse0x17b5b70();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17b51e0() {
   double input = input0x17b51e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17b5bb0() {
   double input = -0.172216;
   input += synapse0x17b5ef0();
   input += synapse0x17b5f30();
   input += synapse0x17b5f70();
   input += synapse0x17b5fb0();
   input += synapse0x17b5ff0();
   input += synapse0x17b6030();
   input += synapse0x17b6070();
   input += synapse0x17b60b0();
   input += synapse0x17b60f0();
   input += synapse0x17b6130();
   input += synapse0x17b6170();
   input += synapse0x17b61b0();
   input += synapse0x17b61f0();
   input += synapse0x17b6230();
   input += synapse0x17b6270();
   input += synapse0x17b62b0();
   input += synapse0x17b5d40();
   input += synapse0x17b5d80();
   input += synapse0x17b6400();
   input += synapse0x17b6440();
   input += synapse0x17b6480();
   input += synapse0x17b64c0();
   input += synapse0x17b6500();
   input += synapse0x17b6540();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17b5bb0() {
   double input = input0x17b5bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17b6580() {
   double input = -0.49847;
   input += synapse0x17b68c0();
   input += synapse0x17b6900();
   input += synapse0x17b6940();
   input += synapse0x17b6980();
   input += synapse0x17b69c0();
   input += synapse0x17b6a00();
   input += synapse0x17b6a40();
   input += synapse0x17b6a80();
   input += synapse0x17b6ac0();
   input += synapse0x17b6b00();
   input += synapse0x17b6b40();
   input += synapse0x17b6b80();
   input += synapse0x17b6bc0();
   input += synapse0x17b6c00();
   input += synapse0x17b6c40();
   input += synapse0x17b6c80();
   input += synapse0x17b6710();
   input += synapse0x17b6750();
   input += synapse0x17b6dd0();
   input += synapse0x17b6e10();
   input += synapse0x17b6e50();
   input += synapse0x17b6e90();
   input += synapse0x17b6ed0();
   input += synapse0x17b6f10();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17b6580() {
   double input = input0x17b6580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17b6f50() {
   double input = 0.83156;
   input += synapse0x17b7290();
   input += synapse0x17b72d0();
   input += synapse0x17b7310();
   input += synapse0x17b7350();
   input += synapse0x17b7390();
   input += synapse0x17b73d0();
   input += synapse0x17b7410();
   input += synapse0x17b7450();
   input += synapse0x17b7490();
   input += synapse0x17b74d0();
   input += synapse0x17b7510();
   input += synapse0x17b7550();
   input += synapse0x17b7590();
   input += synapse0x17b75d0();
   input += synapse0x17b7610();
   input += synapse0x17b7650();
   input += synapse0x17b70e0();
   input += synapse0x17b7120();
   input += synapse0x17b77a0();
   input += synapse0x17b77e0();
   input += synapse0x17b7820();
   input += synapse0x17b7860();
   input += synapse0x17b78a0();
   input += synapse0x17b78e0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17b6f50() {
   double input = input0x17b6f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17b7920() {
   double input = -0.66663;
   input += synapse0x17b7c60();
   input += synapse0x17b7ca0();
   input += synapse0x17b7ce0();
   input += synapse0x17b7d20();
   input += synapse0x17b7d60();
   input += synapse0x17b7da0();
   input += synapse0x17b7de0();
   input += synapse0x17b7e20();
   input += synapse0x17b7e60();
   input += synapse0x17b0020();
   input += synapse0x17b0060();
   input += synapse0x17b00a0();
   input += synapse0x17b00e0();
   input += synapse0x17b0120();
   input += synapse0x17b0160();
   input += synapse0x17b01a0();
   input += synapse0x17b7ab0();
   input += synapse0x17b7af0();
   input += synapse0x17b02f0();
   input += synapse0x17b0330();
   input += synapse0x17b0370();
   input += synapse0x17b03b0();
   input += synapse0x17b03f0();
   input += synapse0x17b0430();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17b7920() {
   double input = input0x17b7920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17b0470() {
   double input = 0.304097;
   input += synapse0x17b07b0();
   input += synapse0x17b07f0();
   input += synapse0x17b0830();
   input += synapse0x17b0870();
   input += synapse0x17b08b0();
   input += synapse0x17b08f0();
   input += synapse0x17b0930();
   input += synapse0x17b0970();
   input += synapse0x17b09b0();
   input += synapse0x17b09f0();
   input += synapse0x17b0a30();
   input += synapse0x17b0a70();
   input += synapse0x17b0ab0();
   input += synapse0x17b0af0();
   input += synapse0x17b0b30();
   input += synapse0x17b0b70();
   input += synapse0x17b0600();
   input += synapse0x17b0640();
   input += synapse0x17b0cc0();
   input += synapse0x17b0d00();
   input += synapse0x17b0d40();
   input += synapse0x17b0d80();
   input += synapse0x17b0dc0();
   input += synapse0x17b0e00();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17b0470() {
   double input = input0x17b0470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17b0e40() {
   double input = -0.135598;
   input += synapse0x17b0fd0();
   input += synapse0x17ba060();
   input += synapse0x17ba0a0();
   input += synapse0x17ba0e0();
   input += synapse0x17ba120();
   input += synapse0x17ba160();
   input += synapse0x17ba1a0();
   input += synapse0x17ba1e0();
   input += synapse0x17ba220();
   input += synapse0x17ba260();
   input += synapse0x17ba2a0();
   input += synapse0x17ba2e0();
   input += synapse0x17ba320();
   input += synapse0x17ba360();
   input += synapse0x17ba3a0();
   input += synapse0x17ba3e0();
   input += synapse0x17b9eb0();
   input += synapse0x17b9ef0();
   input += synapse0x17ba530();
   input += synapse0x17ba570();
   input += synapse0x17ba5b0();
   input += synapse0x17ba5f0();
   input += synapse0x17ba630();
   input += synapse0x17ba670();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17b0e40() {
   double input = input0x17b0e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17ba6b0() {
   double input = 1.23981;
   input += synapse0x17ba9f0();
   input += synapse0x17baa30();
   input += synapse0x17baa70();
   input += synapse0x17baab0();
   input += synapse0x17baaf0();
   input += synapse0x17bab30();
   input += synapse0x17bab70();
   input += synapse0x17babb0();
   input += synapse0x17babf0();
   input += synapse0x17bac30();
   input += synapse0x17bac70();
   input += synapse0x17bacb0();
   input += synapse0x17bacf0();
   input += synapse0x17bad30();
   input += synapse0x17bad70();
   input += synapse0x17badb0();
   input += synapse0x17ba840();
   input += synapse0x17ba880();
   input += synapse0x17baf00();
   input += synapse0x17baf40();
   input += synapse0x17baf80();
   input += synapse0x17bafc0();
   input += synapse0x17bb000();
   input += synapse0x17bb040();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17ba6b0() {
   double input = input0x17ba6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17bb080() {
   double input = 0.456176;
   input += synapse0x17bb3c0();
   input += synapse0x17bb400();
   input += synapse0x17bb440();
   input += synapse0x17bb480();
   input += synapse0x17bb4c0();
   input += synapse0x17bb500();
   input += synapse0x17bb540();
   input += synapse0x17bb580();
   input += synapse0x17bb5c0();
   input += synapse0x17bb600();
   input += synapse0x17bb640();
   input += synapse0x17bb680();
   input += synapse0x17bb6c0();
   input += synapse0x17bb700();
   input += synapse0x17bb740();
   input += synapse0x17bb780();
   input += synapse0x17bb210();
   input += synapse0x17bb250();
   input += synapse0x17bb8d0();
   input += synapse0x17bb910();
   input += synapse0x17bb950();
   input += synapse0x17bb990();
   input += synapse0x17bb9d0();
   input += synapse0x17bba10();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17bb080() {
   double input = input0x17bb080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17bba50() {
   double input = 0.490249;
   input += synapse0x17bbd90();
   input += synapse0x17bbdd0();
   input += synapse0x17bbe10();
   input += synapse0x17bbe50();
   input += synapse0x17bbe90();
   input += synapse0x17bbed0();
   input += synapse0x17bbf10();
   input += synapse0x17bbf50();
   input += synapse0x17bbf90();
   input += synapse0x17bbfd0();
   input += synapse0x17bc010();
   input += synapse0x17bc050();
   input += synapse0x17bc090();
   input += synapse0x17bc0d0();
   input += synapse0x17bc110();
   input += synapse0x17bc150();
   input += synapse0x17bbbe0();
   input += synapse0x17bbc20();
   input += synapse0x17bc2a0();
   input += synapse0x17bc2e0();
   input += synapse0x17bc320();
   input += synapse0x17bc360();
   input += synapse0x17bc3a0();
   input += synapse0x17bc3e0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17bba50() {
   double input = input0x17bba50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17bc420() {
   double input = 2.35499;
   input += synapse0x17bc760();
   input += synapse0x17bc7a0();
   input += synapse0x17bc7e0();
   input += synapse0x17bc820();
   input += synapse0x17bc860();
   input += synapse0x17bc8a0();
   input += synapse0x17bc8e0();
   input += synapse0x17bc920();
   input += synapse0x17bc960();
   input += synapse0x17bc9a0();
   input += synapse0x17bc9e0();
   input += synapse0x17bca20();
   input += synapse0x17bca60();
   input += synapse0x17bcaa0();
   input += synapse0x17bcae0();
   input += synapse0x17bcb20();
   input += synapse0x17bc5b0();
   input += synapse0x17bc5f0();
   input += synapse0x17bcc70();
   input += synapse0x17bccb0();
   input += synapse0x17bccf0();
   input += synapse0x17bcd30();
   input += synapse0x17bcd70();
   input += synapse0x17bcdb0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17bc420() {
   double input = input0x17bc420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17bcdf0() {
   double input = -3.30021;
   input += synapse0x17bd130();
   input += synapse0x17bd170();
   input += synapse0x17bd1b0();
   input += synapse0x17bd1f0();
   input += synapse0x17bd230();
   input += synapse0x17bd270();
   input += synapse0x17bd2b0();
   input += synapse0x17bd2f0();
   input += synapse0x17bd330();
   input += synapse0x17bd370();
   input += synapse0x17bd3b0();
   input += synapse0x17bd3f0();
   input += synapse0x17bd430();
   input += synapse0x17bd470();
   input += synapse0x17bd4b0();
   input += synapse0x17bd4f0();
   input += synapse0x17bcf80();
   input += synapse0x17bcfc0();
   input += synapse0x17bd640();
   input += synapse0x17bd680();
   input += synapse0x17bd6c0();
   input += synapse0x17bd700();
   input += synapse0x17bd740();
   input += synapse0x17bd780();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17bcdf0() {
   double input = input0x17bcdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17bd7c0() {
   double input = -0.995656;
   input += synapse0x17bdb00();
   input += synapse0x17bdb40();
   input += synapse0x17bdb80();
   input += synapse0x17bdbc0();
   input += synapse0x17bdc00();
   input += synapse0x17bdc40();
   input += synapse0x17bdc80();
   input += synapse0x17bdcc0();
   input += synapse0x17bdd00();
   input += synapse0x17bdd40();
   input += synapse0x17bdd80();
   input += synapse0x17bddc0();
   input += synapse0x17bde00();
   input += synapse0x17bde40();
   input += synapse0x17bde80();
   input += synapse0x17bdec0();
   input += synapse0x17bd950();
   input += synapse0x17bd990();
   input += synapse0x17be010();
   input += synapse0x17be050();
   input += synapse0x17be090();
   input += synapse0x17be0d0();
   input += synapse0x17be110();
   input += synapse0x17be150();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17bd7c0() {
   double input = input0x17bd7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17be190() {
   double input = 0.181681;
   input += synapse0x17be4d0();
   input += synapse0x17be510();
   input += synapse0x17be550();
   input += synapse0x17be590();
   input += synapse0x17be5d0();
   input += synapse0x17be610();
   input += synapse0x17be650();
   input += synapse0x17be690();
   input += synapse0x17be6d0();
   input += synapse0x17be710();
   input += synapse0x17be750();
   input += synapse0x17be790();
   input += synapse0x17be7d0();
   input += synapse0x17be810();
   input += synapse0x17be850();
   input += synapse0x17be890();
   input += synapse0x17be320();
   input += synapse0x17be360();
   input += synapse0x17be9e0();
   input += synapse0x17bea20();
   input += synapse0x17bea60();
   input += synapse0x17beaa0();
   input += synapse0x17beae0();
   input += synapse0x17beb20();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17be190() {
   double input = input0x17be190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17beb60() {
   double input = -1.24219;
   input += synapse0x17beea0();
   input += synapse0x17b3470();
   input += synapse0x17b34b0();
   input += synapse0x17b34f0();
   input += synapse0x17b3740();
   input += synapse0x17b3780();
   input += synapse0x17b37c0();
   input += synapse0x17b3a10();
   input += synapse0x17b3a50();
   input += synapse0x17b3ca0();
   input += synapse0x17b3ce0();
   input += synapse0x17b3d20();
   input += synapse0x17b3f70();
   input += synapse0x17b3fb0();
   input += synapse0x17b4200();
   input += synapse0x17b4240();
   input += synapse0x17becf0();
   input += synapse0x17bed30();
   input += synapse0x17b4390();
   input += synapse0x17b48a0();
   input += synapse0x17b48e0();
   input += synapse0x17b4920();
   input += synapse0x17b4b70();
   input += synapse0x17b4bb0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17beb60() {
   double input = input0x17beb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17b4bf0() {
   double input = 1.33241;
   input += synapse0x17b4460();
   input += synapse0x17b44a0();
   input += synapse0x17b44e0();
   input += synapse0x17b4520();
   input += synapse0x17b4ea0();
   input += synapse0x17c11f0();
   input += synapse0x17c1230();
   input += synapse0x17c1270();
   input += synapse0x17c12b0();
   input += synapse0x17c12f0();
   input += synapse0x17c1330();
   input += synapse0x17c1370();
   input += synapse0x17c13b0();
   input += synapse0x17c13f0();
   input += synapse0x17c1430();
   input += synapse0x17c1470();
   input += synapse0x17b4d80();
   input += synapse0x17b4dc0();
   input += synapse0x17c15c0();
   input += synapse0x17c1600();
   input += synapse0x17c1640();
   input += synapse0x17c1680();
   input += synapse0x17c16c0();
   input += synapse0x17c1700();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17b4bf0() {
   double input = input0x17b4bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17c1740() {
   double input = -1.49322;
   input += synapse0x17c1a80();
   input += synapse0x17c1ac0();
   input += synapse0x17c1b00();
   input += synapse0x17c1b40();
   input += synapse0x17c1b80();
   input += synapse0x17c1bc0();
   input += synapse0x17c1c00();
   input += synapse0x17c1c40();
   input += synapse0x17c1c80();
   input += synapse0x17c1cc0();
   input += synapse0x17c1d00();
   input += synapse0x17c1d40();
   input += synapse0x17c1d80();
   input += synapse0x17c1dc0();
   input += synapse0x17c1e00();
   input += synapse0x17c1e40();
   input += synapse0x17c18d0();
   input += synapse0x17c1910();
   input += synapse0x17c1f90();
   input += synapse0x17c1fd0();
   input += synapse0x17c2010();
   input += synapse0x17c2050();
   input += synapse0x17c2090();
   input += synapse0x17c20d0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17c1740() {
   double input = input0x17c1740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17c2110() {
   double input = 1.82404;
   input += synapse0x17c2450();
   input += synapse0x17c2490();
   input += synapse0x17c24d0();
   input += synapse0x17c2510();
   input += synapse0x17c2550();
   input += synapse0x17c2590();
   input += synapse0x17c25d0();
   input += synapse0x17c2610();
   input += synapse0x17c2650();
   input += synapse0x17c2690();
   input += synapse0x17c26d0();
   input += synapse0x17c2710();
   input += synapse0x17c2750();
   input += synapse0x17c2790();
   input += synapse0x17c27d0();
   input += synapse0x17c2810();
   input += synapse0x17c22a0();
   input += synapse0x17c22e0();
   input += synapse0x17c2960();
   input += synapse0x17c29a0();
   input += synapse0x17c29e0();
   input += synapse0x17c2a20();
   input += synapse0x17c2a60();
   input += synapse0x17c2aa0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17c2110() {
   double input = input0x17c2110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17c2ae0() {
   double input = 0.101426;
   input += synapse0x17c2e20();
   input += synapse0x17c2e60();
   input += synapse0x17c2ea0();
   input += synapse0x17c2ee0();
   input += synapse0x17c2f20();
   input += synapse0x17c2f60();
   input += synapse0x17c2fa0();
   input += synapse0x17c2fe0();
   input += synapse0x17c3020();
   input += synapse0x17c3060();
   input += synapse0x17c30a0();
   input += synapse0x17c30e0();
   input += synapse0x17c3120();
   input += synapse0x17c3160();
   input += synapse0x17c31a0();
   input += synapse0x17c31e0();
   input += synapse0x17c2c70();
   input += synapse0x17c2cb0();
   input += synapse0x17c3330();
   input += synapse0x17c3370();
   input += synapse0x17c33b0();
   input += synapse0x17c33f0();
   input += synapse0x17c3430();
   input += synapse0x17c3470();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17c2ae0() {
   double input = input0x17c2ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17c34b0() {
   double input = -0.307829;
   input += synapse0x17c37f0();
   input += synapse0x17c3830();
   input += synapse0x17c3870();
   input += synapse0x17c38b0();
   input += synapse0x17c38f0();
   input += synapse0x17c3930();
   input += synapse0x17c3970();
   input += synapse0x17c39b0();
   input += synapse0x17c39f0();
   input += synapse0x17c3a30();
   input += synapse0x17c3a70();
   input += synapse0x17c3ab0();
   input += synapse0x17c3af0();
   input += synapse0x17c3b30();
   input += synapse0x17c3b70();
   input += synapse0x17c3bb0();
   input += synapse0x17c3640();
   input += synapse0x17c3680();
   input += synapse0x17c3d00();
   input += synapse0x17c3d40();
   input += synapse0x17c3d80();
   input += synapse0x17c3dc0();
   input += synapse0x17c3e00();
   input += synapse0x17c3e40();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17c34b0() {
   double input = input0x17c34b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17c3e80() {
   double input = 0.135577;
   input += synapse0x17c41c0();
   input += synapse0x17c4200();
   input += synapse0x17c4240();
   input += synapse0x17c4280();
   input += synapse0x17c42c0();
   input += synapse0x17c4300();
   input += synapse0x17c4340();
   input += synapse0x17c4380();
   input += synapse0x17c43c0();
   input += synapse0x17c4400();
   input += synapse0x17c4440();
   input += synapse0x17c4480();
   input += synapse0x17c44c0();
   input += synapse0x17c4500();
   input += synapse0x17c4540();
   input += synapse0x17c4580();
   input += synapse0x17c4010();
   input += synapse0x17c4050();
   input += synapse0x17c46d0();
   input += synapse0x17c4710();
   input += synapse0x17c4750();
   input += synapse0x17c4790();
   input += synapse0x17c47d0();
   input += synapse0x17c4810();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17c3e80() {
   double input = input0x17c3e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17c4850() {
   double input = -0.193095;
   input += synapse0x17c4b90();
   input += synapse0x17c4bd0();
   input += synapse0x17c4c10();
   input += synapse0x17c4c50();
   input += synapse0x17c4c90();
   input += synapse0x17c4cd0();
   input += synapse0x17c4d10();
   input += synapse0x17c4d50();
   input += synapse0x17c4d90();
   input += synapse0x17c4dd0();
   input += synapse0x17c4e10();
   input += synapse0x17c4e50();
   input += synapse0x17c4e90();
   input += synapse0x17c4ed0();
   input += synapse0x17c4f10();
   input += synapse0x17c4f50();
   input += synapse0x17c49e0();
   input += synapse0x17c4a20();
   input += synapse0x17c50a0();
   input += synapse0x17c50e0();
   input += synapse0x17c5120();
   input += synapse0x17c5160();
   input += synapse0x17c51a0();
   input += synapse0x17c51e0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17c4850() {
   double input = input0x17c4850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17c5220() {
   double input = 1.19556;
   input += synapse0x17c5560();
   input += synapse0x17c55a0();
   input += synapse0x17c55e0();
   input += synapse0x17c5620();
   input += synapse0x17c5660();
   input += synapse0x17c56a0();
   input += synapse0x17c56e0();
   input += synapse0x17c5720();
   input += synapse0x17c5760();
   input += synapse0x17c57a0();
   input += synapse0x17c57e0();
   input += synapse0x17c5820();
   input += synapse0x17c5860();
   input += synapse0x17c58a0();
   input += synapse0x17c58e0();
   input += synapse0x17c5920();
   input += synapse0x17c53b0();
   input += synapse0x17c53f0();
   input += synapse0x17c5a70();
   input += synapse0x17c5ab0();
   input += synapse0x17c5af0();
   input += synapse0x17c5b30();
   input += synapse0x17c5b70();
   input += synapse0x17c5bb0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17c5220() {
   double input = input0x17c5220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17c5bf0() {
   double input = 0.345717;
   input += synapse0x17ae660();
   input += synapse0x17ae6a0();
   input += synapse0x17ae6e0();
   input += synapse0x17ae720();
   input += synapse0x17ae760();
   input += synapse0x17ae7a0();
   input += synapse0x17ae7e0();
   input += synapse0x17ae820();
   input += synapse0x17c6340();
   input += synapse0x17c6380();
   input += synapse0x17c63c0();
   input += synapse0x17c6400();
   input += synapse0x17c6440();
   input += synapse0x17c6480();
   input += synapse0x17c64c0();
   input += synapse0x17c6500();
   input += synapse0x17c5d80();
   input += synapse0x17c5dc0();
   input += synapse0x17c6650();
   input += synapse0x17c6690();
   input += synapse0x17c66d0();
   input += synapse0x17c6710();
   input += synapse0x17c6750();
   input += synapse0x17c6790();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17c5bf0() {
   double input = input0x17c5bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17c67d0() {
   double input = 0.0998039;
   input += synapse0x17c6b10();
   input += synapse0x17c6b50();
   input += synapse0x17c6b90();
   input += synapse0x17c6bd0();
   input += synapse0x17c6c10();
   input += synapse0x17c6c50();
   input += synapse0x17c6c90();
   input += synapse0x17c6cd0();
   input += synapse0x17c6d10();
   input += synapse0x17c6d50();
   input += synapse0x17c6d90();
   input += synapse0x17c6dd0();
   input += synapse0x17c6e10();
   input += synapse0x17c6e50();
   input += synapse0x17c6e90();
   input += synapse0x17c6ed0();
   input += synapse0x17c6960();
   input += synapse0x17c69a0();
   input += synapse0x17c7020();
   input += synapse0x17c7060();
   input += synapse0x17c70a0();
   input += synapse0x17c70e0();
   input += synapse0x17c7120();
   input += synapse0x17c7160();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17c67d0() {
   double input = input0x17c67d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17c71a0() {
   double input = -0.399725;
   input += synapse0x17c74e0();
   input += synapse0x17c7520();
   input += synapse0x17c7560();
   input += synapse0x17c75a0();
   input += synapse0x17c75e0();
   input += synapse0x17c7620();
   input += synapse0x17c7660();
   input += synapse0x17c76a0();
   input += synapse0x17c76e0();
   input += synapse0x17c7720();
   input += synapse0x17c7760();
   input += synapse0x17c77a0();
   input += synapse0x17c77e0();
   input += synapse0x17c7820();
   input += synapse0x17c7860();
   input += synapse0x17c78a0();
   input += synapse0x17c7330();
   input += synapse0x17c7370();
   input += synapse0x17b7ea0();
   input += synapse0x17b7ee0();
   input += synapse0x17b7f20();
   input += synapse0x17b7f60();
   input += synapse0x17b7fa0();
   input += synapse0x17b7fe0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17c71a0() {
   double input = input0x17c71a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17b8020() {
   double input = -0.158238;
   input += synapse0x17b8360();
   input += synapse0x17b83a0();
   input += synapse0x17b83e0();
   input += synapse0x17b8420();
   input += synapse0x17b8460();
   input += synapse0x17b84a0();
   input += synapse0x17b84e0();
   input += synapse0x17b8520();
   input += synapse0x17b8560();
   input += synapse0x17b85a0();
   input += synapse0x17b85e0();
   input += synapse0x17b8620();
   input += synapse0x17b8660();
   input += synapse0x17b86a0();
   input += synapse0x17b86e0();
   input += synapse0x17b8720();
   input += synapse0x17b81b0();
   input += synapse0x17b81f0();
   input += synapse0x17b8870();
   input += synapse0x17b88b0();
   input += synapse0x17b88f0();
   input += synapse0x17b8930();
   input += synapse0x17b8970();
   input += synapse0x17b89b0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17b8020() {
   double input = input0x17b8020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17b89f0() {
   double input = -0.997214;
   input += synapse0x17b8d30();
   input += synapse0x17b8d70();
   input += synapse0x17b8db0();
   input += synapse0x17b8df0();
   input += synapse0x17b8e30();
   input += synapse0x17b8e70();
   input += synapse0x17b8eb0();
   input += synapse0x17b8ef0();
   input += synapse0x17b8f30();
   input += synapse0x17b8f70();
   input += synapse0x17b8fb0();
   input += synapse0x17b8ff0();
   input += synapse0x17b9030();
   input += synapse0x17b9070();
   input += synapse0x17b90b0();
   input += synapse0x17b90f0();
   input += synapse0x17b8b80();
   input += synapse0x17b8bc0();
   input += synapse0x17b9240();
   input += synapse0x17b9280();
   input += synapse0x17b92c0();
   input += synapse0x17b9300();
   input += synapse0x17b9340();
   input += synapse0x17b9380();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17b89f0() {
   double input = input0x17b89f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17b93c0() {
   double input = -1.30941;
   input += synapse0x17b9700();
   input += synapse0x17b9740();
   input += synapse0x17b9780();
   input += synapse0x17b97c0();
   input += synapse0x17b9800();
   input += synapse0x17b9840();
   input += synapse0x17b9880();
   input += synapse0x17b98c0();
   input += synapse0x17b9900();
   input += synapse0x17b9940();
   input += synapse0x17b9980();
   input += synapse0x17b99c0();
   input += synapse0x17b9a00();
   input += synapse0x17b9a40();
   input += synapse0x17b9a80();
   input += synapse0x17b9ac0();
   input += synapse0x17b9550();
   input += synapse0x17b9590();
   input += synapse0x17b9c10();
   input += synapse0x17b9c50();
   input += synapse0x17b9c90();
   input += synapse0x17b9cd0();
   input += synapse0x17b9d10();
   input += synapse0x17b9d50();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17b93c0() {
   double input = input0x17b93c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17cba00() {
   double input = 0.655326;
   input += synapse0x17cbc20();
   input += synapse0x17cbc60();
   input += synapse0x17cbca0();
   input += synapse0x17cbce0();
   input += synapse0x17cbd20();
   input += synapse0x17cbd60();
   input += synapse0x17cbda0();
   input += synapse0x17cbde0();
   input += synapse0x17cbe20();
   input += synapse0x17cbe60();
   input += synapse0x17cbea0();
   input += synapse0x17cbee0();
   input += synapse0x17cbf20();
   input += synapse0x17cbf60();
   input += synapse0x17cbfa0();
   input += synapse0x17cbfe0();
   input += synapse0x17b9d90();
   input += synapse0x17b9dd0();
   input += synapse0x17cc130();
   input += synapse0x17cc170();
   input += synapse0x17cc1b0();
   input += synapse0x17cc1f0();
   input += synapse0x17cc230();
   input += synapse0x17cc270();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17cba00() {
   double input = input0x17cba00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17cc2b0() {
   double input = -1.19699;
   input += synapse0x17cc5f0();
   input += synapse0x17cc630();
   input += synapse0x17cc670();
   input += synapse0x17cc6b0();
   input += synapse0x17cc6f0();
   input += synapse0x17cc730();
   input += synapse0x17cc770();
   input += synapse0x17cc7b0();
   input += synapse0x17cc7f0();
   input += synapse0x17cc830();
   input += synapse0x17cc870();
   input += synapse0x17cc8b0();
   input += synapse0x17cc8f0();
   input += synapse0x17cc930();
   input += synapse0x17cc970();
   input += synapse0x17cc9b0();
   input += synapse0x17cc440();
   input += synapse0x17cc480();
   input += synapse0x17ccb00();
   input += synapse0x17ccb40();
   input += synapse0x17ccb80();
   input += synapse0x17ccbc0();
   input += synapse0x17ccc00();
   input += synapse0x17ccc40();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17cc2b0() {
   double input = input0x17cc2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17ccc80() {
   double input = -0.0500052;
   input += synapse0x17ccfc0();
   input += synapse0x17cd000();
   input += synapse0x17cd040();
   input += synapse0x17cd080();
   input += synapse0x17cd0c0();
   input += synapse0x17cd100();
   input += synapse0x17cd140();
   input += synapse0x17cd180();
   input += synapse0x17cd1c0();
   input += synapse0x17cd200();
   input += synapse0x17cd240();
   input += synapse0x17cd280();
   input += synapse0x17cd2c0();
   input += synapse0x17cd300();
   input += synapse0x17cd340();
   input += synapse0x17cd380();
   input += synapse0x17cce10();
   input += synapse0x17cce50();
   input += synapse0x17cd4d0();
   input += synapse0x17cd510();
   input += synapse0x17cd550();
   input += synapse0x17cd590();
   input += synapse0x17cd5d0();
   input += synapse0x17cd610();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17ccc80() {
   double input = input0x17ccc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17cd650() {
   double input = -0.0358754;
   input += synapse0x17cd990();
   input += synapse0x17cd9d0();
   input += synapse0x17cda10();
   input += synapse0x17cda50();
   input += synapse0x17cda90();
   input += synapse0x17cdad0();
   input += synapse0x17cdb10();
   input += synapse0x17cdb50();
   input += synapse0x17cdb90();
   input += synapse0x17cdbd0();
   input += synapse0x17cdc10();
   input += synapse0x17cdc50();
   input += synapse0x17cdc90();
   input += synapse0x17cdcd0();
   input += synapse0x17cdd10();
   input += synapse0x17cdd50();
   input += synapse0x17cd7e0();
   input += synapse0x17cd820();
   input += synapse0x17cdea0();
   input += synapse0x17cdee0();
   input += synapse0x17cdf20();
   input += synapse0x17cdf60();
   input += synapse0x17cdfa0();
   input += synapse0x17cdfe0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17cd650() {
   double input = input0x17cd650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17d4850() {
   double input = -0.504538;
   input += synapse0x17aa580();
   input += synapse0x17aa5c0();
   input += synapse0x17aba90();
   input += synapse0x17abad0();
   input += synapse0x17ac460();
   input += synapse0x17ac4a0();
   input += synapse0x17ad230();
   input += synapse0x17ad270();
   input += synapse0x17adc00();
   input += synapse0x17adc40();
   input += synapse0x17ae5d0();
   input += synapse0x17ae610();
   input += synapse0x17af0b0();
   input += synapse0x17af0f0();
   input += synapse0x17afa80();
   input += synapse0x17afac0();
   input += synapse0x17acb60();
   input += synapse0x17acba0();
   input += synapse0x17b1630();
   input += synapse0x17b1670();
   input += synapse0x17b2000();
   input += synapse0x17b2040();
   input += synapse0x17b29d0();
   input += synapse0x17b2a10();
   input += synapse0x17b33a0();
   input += synapse0x17b33e0();
   input += synapse0x17a7510();
   input += synapse0x17a7550();
   input += synapse0x17b5490();
   input += synapse0x17b54d0();
   input += synapse0x17b5e60();
   input += synapse0x17b5ea0();
   input += synapse0x17b6830();
   input += synapse0x17b6870();
   input += synapse0x17b7200();
   input += synapse0x17b7240();
   input += synapse0x17b7bd0();
   input += synapse0x17b7c10();
   input += synapse0x17b0720();
   input += synapse0x17b0760();
   input += synapse0x17b9fd0();
   input += synapse0x17ba010();
   input += synapse0x17ba960();
   input += synapse0x17ba9a0();
   input += synapse0x17bb330();
   input += synapse0x17bb370();
   input += synapse0x17bbd00();
   input += synapse0x17bbd40();
   input += synapse0x17bc6d0();
   input += synapse0x17bc710();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17d4850() {
   double input = input0x17d4850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17d4bf0() {
   double input = -1.22545;
   input += synapse0x17bee10();
   input += synapse0x17bee50();
   input += synapse0x17b43d0();
   input += synapse0x17b4410();
   input += synapse0x17c19f0();
   input += synapse0x17c1a30();
   input += synapse0x17c23c0();
   input += synapse0x17c2400();
   input += synapse0x17c2d90();
   input += synapse0x17c2dd0();
   input += synapse0x17c3760();
   input += synapse0x17c37a0();
   input += synapse0x17c4130();
   input += synapse0x17c4170();
   input += synapse0x17c4b00();
   input += synapse0x17c4b40();
   input += synapse0x17c54d0();
   input += synapse0x17c5510();
   input += synapse0x17c5ea0();
   input += synapse0x17c5ee0();
   input += synapse0x17c6a80();
   input += synapse0x17c6ac0();
   input += synapse0x17c7450();
   input += synapse0x17c7490();
   input += synapse0x17b82d0();
   input += synapse0x17b8310();
   input += synapse0x17b8ca0();
   input += synapse0x17b8ce0();
   input += synapse0x17b9670();
   input += synapse0x17b96b0();
   input += synapse0x17cbb90();
   input += synapse0x17cbbd0();
   input += synapse0x17cc560();
   input += synapse0x17cc5a0();
   input += synapse0x17ccf30();
   input += synapse0x17ccf70();
   input += synapse0x17cd900();
   input += synapse0x17cd940();
   input += synapse0x17a97f0();
   input += synapse0x17a9830();
   input += synapse0x17bd0a0();
   input += synapse0x17bd0e0();
   input += synapse0x17ce020();
   input += synapse0x17ce060();
   input += synapse0x17ce0a0();
   input += synapse0x17ce0e0();
   input += synapse0x17d4f90();
   input += synapse0x17d4fd0();
   input += synapse0x17d5010();
   input += synapse0x17d5050();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17d4bf0() {
   double input = input0x17d4bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17d5090() {
   double input = -0.936452;
   input += synapse0x17d53d0();
   input += synapse0x17d5410();
   input += synapse0x17d5450();
   input += synapse0x17d5490();
   input += synapse0x17d54d0();
   input += synapse0x17d5510();
   input += synapse0x17d5550();
   input += synapse0x17d5590();
   input += synapse0x17d55d0();
   input += synapse0x17d5610();
   input += synapse0x17d5650();
   input += synapse0x17d5690();
   input += synapse0x17d56d0();
   input += synapse0x17d5710();
   input += synapse0x17d5750();
   input += synapse0x17d5790();
   input += synapse0x17d5220();
   input += synapse0x17d5260();
   input += synapse0x17d58e0();
   input += synapse0x17d5920();
   input += synapse0x17d5960();
   input += synapse0x17d59a0();
   input += synapse0x17d59e0();
   input += synapse0x17d5a20();
   input += synapse0x17d5a60();
   input += synapse0x17d5aa0();
   input += synapse0x17d5ae0();
   input += synapse0x17d5b20();
   input += synapse0x17d5b60();
   input += synapse0x17d5ba0();
   input += synapse0x17d5be0();
   input += synapse0x17d5c20();
   input += synapse0x17d57d0();
   input += synapse0x17d5810();
   input += synapse0x17d5850();
   input += synapse0x17d5890();
   input += synapse0x17d5e70();
   input += synapse0x17d5eb0();
   input += synapse0x17d5ef0();
   input += synapse0x17d5f30();
   input += synapse0x17d5f70();
   input += synapse0x17d5fb0();
   input += synapse0x17d5ff0();
   input += synapse0x17d6030();
   input += synapse0x17d6070();
   input += synapse0x17d60b0();
   input += synapse0x17d60f0();
   input += synapse0x17d6130();
   input += synapse0x17d6170();
   input += synapse0x17d61b0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17d5090() {
   double input = input0x17d5090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17d61f0() {
   double input = 0.703722;
   input += synapse0x17d6530();
   input += synapse0x17d6570();
   input += synapse0x17d65b0();
   input += synapse0x17d65f0();
   input += synapse0x17d6630();
   input += synapse0x17d6670();
   input += synapse0x17d66b0();
   input += synapse0x17d66f0();
   input += synapse0x17d6730();
   input += synapse0x17d6770();
   input += synapse0x17d67b0();
   input += synapse0x17d67f0();
   input += synapse0x17d6830();
   input += synapse0x17d6870();
   input += synapse0x17d68b0();
   input += synapse0x17d68f0();
   input += synapse0x17d6380();
   input += synapse0x17d63c0();
   input += synapse0x17d6a40();
   input += synapse0x17d6a80();
   input += synapse0x17d6ac0();
   input += synapse0x17d6b00();
   input += synapse0x17d6b40();
   input += synapse0x17d6b80();
   input += synapse0x17d6bc0();
   input += synapse0x17d6c00();
   input += synapse0x17d6c40();
   input += synapse0x17d6c80();
   input += synapse0x17d6cc0();
   input += synapse0x17d6d00();
   input += synapse0x17d6d40();
   input += synapse0x17d6d80();
   input += synapse0x17d6930();
   input += synapse0x17d6970();
   input += synapse0x17d69b0();
   input += synapse0x17d69f0();
   input += synapse0x17d6fd0();
   input += synapse0x17d7010();
   input += synapse0x17d7050();
   input += synapse0x17d7090();
   input += synapse0x17d70d0();
   input += synapse0x17d7110();
   input += synapse0x17d7150();
   input += synapse0x17d7190();
   input += synapse0x17d71d0();
   input += synapse0x17d7210();
   input += synapse0x17d7250();
   input += synapse0x17d7290();
   input += synapse0x17d72d0();
   input += synapse0x17d7310();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17d61f0() {
   double input = input0x17d61f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17d7350() {
   double input = 0.643844;
   input += synapse0x17d7690();
   input += synapse0x17d76d0();
   input += synapse0x17d7710();
   input += synapse0x17d7750();
   input += synapse0x17d7790();
   input += synapse0x17d77d0();
   input += synapse0x17d7810();
   input += synapse0x17d7850();
   input += synapse0x17d7890();
   input += synapse0x17d78d0();
   input += synapse0x17d7910();
   input += synapse0x17d7950();
   input += synapse0x17d7990();
   input += synapse0x17d79d0();
   input += synapse0x17d7a10();
   input += synapse0x17d7a50();
   input += synapse0x17d74e0();
   input += synapse0x17d7520();
   input += synapse0x17d7ba0();
   input += synapse0x17d7be0();
   input += synapse0x17d7c20();
   input += synapse0x17d7c60();
   input += synapse0x17d7ca0();
   input += synapse0x17d7ce0();
   input += synapse0x17d7d20();
   input += synapse0x17d7d60();
   input += synapse0x17d7da0();
   input += synapse0x17d7de0();
   input += synapse0x17d7e20();
   input += synapse0x17d7e60();
   input += synapse0x17d7ea0();
   input += synapse0x17d7ee0();
   input += synapse0x17d7a90();
   input += synapse0x17d7ad0();
   input += synapse0x17d7b10();
   input += synapse0x17d7b50();
   input += synapse0x17d8130();
   input += synapse0x17d8170();
   input += synapse0x17d81b0();
   input += synapse0x17d81f0();
   input += synapse0x17d8230();
   input += synapse0x17d8270();
   input += synapse0x17d82b0();
   input += synapse0x17d82f0();
   input += synapse0x17d8330();
   input += synapse0x17d8370();
   input += synapse0x17d83b0();
   input += synapse0x17d83f0();
   input += synapse0x17d8430();
   input += synapse0x17d8470();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17d7350() {
   double input = input0x17d7350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x17d84b0() {
   double input = 6.58383;
   input += synapse0x17a9590();
   input += synapse0x17d86d0();
   input += synapse0x17d8710();
   input += synapse0x17d8750();
   input += synapse0x17d8790();
   return input;
}

double NNfunction_sb_dLcR::neuron0x17d84b0() {
   double input = input0x17d84b0();
   return (input * 1)+0;
}

double NNfunction_sb_dLcR::synapse0x15643e0() {
   return (neuron0x17a4570()*-0.220066);
}

double NNfunction_sb_dLcR::synapse0x17a4430() {
   return (neuron0x17a48b0()*0.0474943);
}

double NNfunction_sb_dLcR::synapse0x17a4470() {
   return (neuron0x17a4bf0()*0.15095);
}

double NNfunction_sb_dLcR::synapse0x17a9880() {
   return (neuron0x17a4f30()*0.681336);
}

double NNfunction_sb_dLcR::synapse0x17a98c0() {
   return (neuron0x17a5270()*-1.1583);
}

double NNfunction_sb_dLcR::synapse0x17a9900() {
   return (neuron0x17a55b0()*0.0171374);
}

double NNfunction_sb_dLcR::synapse0x17a9940() {
   return (neuron0x17a58f0()*0.426043);
}

double NNfunction_sb_dLcR::synapse0x17a9980() {
   return (neuron0x17a5c30()*0.150019);
}

double NNfunction_sb_dLcR::synapse0x17a99c0() {
   return (neuron0x17a5f70()*0.0635021);
}

double NNfunction_sb_dLcR::synapse0x17a9a00() {
   return (neuron0x17a62b0()*0.227257);
}

double NNfunction_sb_dLcR::synapse0x17a9a40() {
   return (neuron0x17a65f0()*-0.356795);
}

double NNfunction_sb_dLcR::synapse0x17a9a80() {
   return (neuron0x17a6930()*0.21475);
}

double NNfunction_sb_dLcR::synapse0x17a9ac0() {
   return (neuron0x17a6c70()*-0.180516);
}

double NNfunction_sb_dLcR::synapse0x17a9b00() {
   return (neuron0x17a6fb0()*-0.0456018);
}

double NNfunction_sb_dLcR::synapse0x17a9b40() {
   return (neuron0x17a72f0()*0.0993554);
}

double NNfunction_sb_dLcR::synapse0x17a9b80() {
   return (neuron0x17a7630()*0.509951);
}

double NNfunction_sb_dLcR::synapse0x17a43a0() {
   return (neuron0x17a7970()*-0.182788);
}

double NNfunction_sb_dLcR::synapse0x17a43e0() {
   return (neuron0x17a7ed0()*-0.0606171);
}

double NNfunction_sb_dLcR::synapse0x1555c80() {
   return (neuron0x17a80f0()*0.00784459);
}

double NNfunction_sb_dLcR::synapse0x1555cc0() {
   return (neuron0x17a8430()*0.223427);
}

double NNfunction_sb_dLcR::synapse0x17a9de0() {
   return (neuron0x17a8770()*0.360514);
}

double NNfunction_sb_dLcR::synapse0x17a9e20() {
   return (neuron0x17a8ab0()*-0.0696214);
}

double NNfunction_sb_dLcR::synapse0x17a9e60() {
   return (neuron0x17a8df0()*-0.351424);
}

double NNfunction_sb_dLcR::synapse0x17a9ea0() {
   return (neuron0x17a9130()*-0.327675);
}

double NNfunction_sb_dLcR::synapse0x17aa220() {
   return (neuron0x17a4570()*-0.252721);
}

double NNfunction_sb_dLcR::synapse0x17aa260() {
   return (neuron0x17a48b0()*0.0451811);
}

double NNfunction_sb_dLcR::synapse0x17aa2a0() {
   return (neuron0x17a4bf0()*-0.424952);
}

double NNfunction_sb_dLcR::synapse0x17aa2e0() {
   return (neuron0x17a4f30()*-0.102935);
}

double NNfunction_sb_dLcR::synapse0x17aa320() {
   return (neuron0x17a5270()*-0.157912);
}

double NNfunction_sb_dLcR::synapse0x17aa360() {
   return (neuron0x17a55b0()*-0.0180085);
}

double NNfunction_sb_dLcR::synapse0x17aa3a0() {
   return (neuron0x17a58f0()*0.0942512);
}

double NNfunction_sb_dLcR::synapse0x17aa3e0() {
   return (neuron0x17a5c30()*0.0939861);
}

double NNfunction_sb_dLcR::synapse0x17aa420() {
   return (neuron0x17a5f70()*-0.265403);
}

double NNfunction_sb_dLcR::synapse0x17a9cd0() {
   return (neuron0x17a62b0()*0.0986962);
}

double NNfunction_sb_dLcR::synapse0x17a9d10() {
   return (neuron0x17a65f0()*-0.218981);
}

double NNfunction_sb_dLcR::synapse0x17a9d50() {
   return (neuron0x17a6930()*0.0151258);
}

double NNfunction_sb_dLcR::synapse0x17a9d90() {
   return (neuron0x17a6c70()*0.29369);
}

double NNfunction_sb_dLcR::synapse0x17aa670() {
   return (neuron0x17a6fb0()*0.0141035);
}

double NNfunction_sb_dLcR::synapse0x17aa6b0() {
   return (neuron0x17a72f0()*0.0695005);
}

double NNfunction_sb_dLcR::synapse0x17aa6f0() {
   return (neuron0x17a7630()*0.265827);
}

double NNfunction_sb_dLcR::synapse0x17aa070() {
   return (neuron0x17a7970()*0.259738);
}

double NNfunction_sb_dLcR::synapse0x17aa0b0() {
   return (neuron0x17a7ed0()*0.298139);
}

double NNfunction_sb_dLcR::synapse0x17aa840() {
   return (neuron0x17a80f0()*-0.473242);
}

double NNfunction_sb_dLcR::synapse0x17aa880() {
   return (neuron0x17a8430()*-0.425651);
}

double NNfunction_sb_dLcR::synapse0x17aa8c0() {
   return (neuron0x17a8770()*-0.123306);
}

double NNfunction_sb_dLcR::synapse0x17aa900() {
   return (neuron0x17a8ab0()*-0.0804075);
}

double NNfunction_sb_dLcR::synapse0x17aa940() {
   return (neuron0x17a8df0()*-0.107384);
}

double NNfunction_sb_dLcR::synapse0x17aa980() {
   return (neuron0x17a9130()*0.106817);
}

double NNfunction_sb_dLcR::synapse0x17aad00() {
   return (neuron0x17a4570()*0.102088);
}

double NNfunction_sb_dLcR::synapse0x17aad40() {
   return (neuron0x17a48b0()*0.234933);
}

double NNfunction_sb_dLcR::synapse0x17aad80() {
   return (neuron0x17a4bf0()*0.00883699);
}

double NNfunction_sb_dLcR::synapse0x17aadc0() {
   return (neuron0x17a4f30()*-0.526076);
}

double NNfunction_sb_dLcR::synapse0x17aae00() {
   return (neuron0x17a5270()*-0.231629);
}

double NNfunction_sb_dLcR::synapse0x17aae40() {
   return (neuron0x17a55b0()*-0.0924554);
}

double NNfunction_sb_dLcR::synapse0x17aae80() {
   return (neuron0x17a58f0()*-0.0451456);
}

double NNfunction_sb_dLcR::synapse0x17aaec0() {
   return (neuron0x17a5c30()*-0.00516545);
}

double NNfunction_sb_dLcR::synapse0x17aaf00() {
   return (neuron0x17a5f70()*-0.0531908);
}

double NNfunction_sb_dLcR::synapse0x17aaf40() {
   return (neuron0x17a62b0()*-0.113262);
}

double NNfunction_sb_dLcR::synapse0x17aaf80() {
   return (neuron0x17a65f0()*-0.376238);
}

double NNfunction_sb_dLcR::synapse0x17aafc0() {
   return (neuron0x17a6930()*0.308511);
}

double NNfunction_sb_dLcR::synapse0x17ab000() {
   return (neuron0x17a6c70()*0.362198);
}

double NNfunction_sb_dLcR::synapse0x17ab040() {
   return (neuron0x17a6fb0()*0.0566202);
}

double NNfunction_sb_dLcR::synapse0x17ab080() {
   return (neuron0x17a72f0()*-0.112261);
}

double NNfunction_sb_dLcR::synapse0x17ab0c0() {
   return (neuron0x17a7630()*0.412719);
}

double NNfunction_sb_dLcR::synapse0x17aab50() {
   return (neuron0x17a7970()*-0.0317994);
}

double NNfunction_sb_dLcR::synapse0x17aab90() {
   return (neuron0x17a7ed0()*-0.218236);
}

double NNfunction_sb_dLcR::synapse0x1563ad0() {
   return (neuron0x17a80f0()*-0.0161219);
}

double NNfunction_sb_dLcR::synapse0x1563b10() {
   return (neuron0x17a8430()*-0.300184);
}

double NNfunction_sb_dLcR::synapse0x1793600() {
   return (neuron0x17a8770()*0.0190502);
}

double NNfunction_sb_dLcR::synapse0x1793640() {
   return (neuron0x17a8ab0()*0.175712);
}

double NNfunction_sb_dLcR::synapse0x1793680() {
   return (neuron0x17a8df0()*-0.0922863);
}

double NNfunction_sb_dLcR::synapse0x17a44b0() {
   return (neuron0x17a9130()*-0.0825957);
}

double NNfunction_sb_dLcR::synapse0x17aa610() {
   return (neuron0x17a4570()*0.288819);
}

double NNfunction_sb_dLcR::synapse0x17a44f0() {
   return (neuron0x17a48b0()*0.00217979);
}

double NNfunction_sb_dLcR::synapse0x17a4530() {
   return (neuron0x17a4bf0()*0.207603);
}

double NNfunction_sb_dLcR::synapse0x17ab210() {
   return (neuron0x17a4f30()*-0.302808);
}

double NNfunction_sb_dLcR::synapse0x17ab250() {
   return (neuron0x17a5270()*-0.246015);
}

double NNfunction_sb_dLcR::synapse0x17ab290() {
   return (neuron0x17a55b0()*0.334392);
}

double NNfunction_sb_dLcR::synapse0x17ab2d0() {
   return (neuron0x17a58f0()*-0.117728);
}

double NNfunction_sb_dLcR::synapse0x17ab310() {
   return (neuron0x17a5c30()*0.113391);
}

double NNfunction_sb_dLcR::synapse0x17ab350() {
   return (neuron0x17a5f70()*-0.0505081);
}

double NNfunction_sb_dLcR::synapse0x17ab390() {
   return (neuron0x17a62b0()*0.554656);
}

double NNfunction_sb_dLcR::synapse0x17ab3d0() {
   return (neuron0x17a65f0()*0.581876);
}

double NNfunction_sb_dLcR::synapse0x17ab410() {
   return (neuron0x17a6930()*-0.552296);
}

double NNfunction_sb_dLcR::synapse0x17ab450() {
   return (neuron0x17a6c70()*0.00922208);
}

double NNfunction_sb_dLcR::synapse0x17ab490() {
   return (neuron0x17a6fb0()*0.208636);
}

double NNfunction_sb_dLcR::synapse0x17ab4d0() {
   return (neuron0x17a72f0()*0.434079);
}

double NNfunction_sb_dLcR::synapse0x17ab510() {
   return (neuron0x17a7630()*0.545583);
}

double NNfunction_sb_dLcR::synapse0x17aa460() {
   return (neuron0x17a7970()*-0.301239);
}

double NNfunction_sb_dLcR::synapse0x17aa4a0() {
   return (neuron0x17a7ed0()*1.06395);
}

double NNfunction_sb_dLcR::synapse0x17ab660() {
   return (neuron0x17a80f0()*-0.121586);
}

double NNfunction_sb_dLcR::synapse0x17ab6a0() {
   return (neuron0x17a8430()*0.155472);
}

double NNfunction_sb_dLcR::synapse0x17ab6e0() {
   return (neuron0x17a8770()*-0.647626);
}

double NNfunction_sb_dLcR::synapse0x17ab720() {
   return (neuron0x17a8ab0()*-0.0741661);
}

double NNfunction_sb_dLcR::synapse0x17ab760() {
   return (neuron0x17a8df0()*-0.150453);
}

double NNfunction_sb_dLcR::synapse0x17ab7a0() {
   return (neuron0x17a9130()*0.162777);
}

double NNfunction_sb_dLcR::synapse0x17abb20() {
   return (neuron0x17a4570()*0.0654308);
}

double NNfunction_sb_dLcR::synapse0x17abb60() {
   return (neuron0x17a48b0()*0.148567);
}

double NNfunction_sb_dLcR::synapse0x17abba0() {
   return (neuron0x17a4bf0()*-0.0127092);
}

double NNfunction_sb_dLcR::synapse0x17abbe0() {
   return (neuron0x17a4f30()*0.0345753);
}

double NNfunction_sb_dLcR::synapse0x17abc20() {
   return (neuron0x17a5270()*0.549);
}

double NNfunction_sb_dLcR::synapse0x17abc60() {
   return (neuron0x17a55b0()*-0.0811017);
}

double NNfunction_sb_dLcR::synapse0x17abca0() {
   return (neuron0x17a58f0()*-0.354385);
}

double NNfunction_sb_dLcR::synapse0x17abce0() {
   return (neuron0x17a5c30()*0.0205146);
}

double NNfunction_sb_dLcR::synapse0x17abd20() {
   return (neuron0x17a5f70()*-0.20275);
}

double NNfunction_sb_dLcR::synapse0x17abd60() {
   return (neuron0x17a62b0()*-0.303771);
}

double NNfunction_sb_dLcR::synapse0x17abda0() {
   return (neuron0x17a65f0()*0.557639);
}

double NNfunction_sb_dLcR::synapse0x17abde0() {
   return (neuron0x17a6930()*-0.131965);
}

double NNfunction_sb_dLcR::synapse0x17abe20() {
   return (neuron0x17a6c70()*0.213578);
}

double NNfunction_sb_dLcR::synapse0x17abe60() {
   return (neuron0x17a6fb0()*0.138223);
}

double NNfunction_sb_dLcR::synapse0x17abea0() {
   return (neuron0x17a72f0()*-0.281836);
}

double NNfunction_sb_dLcR::synapse0x17abee0() {
   return (neuron0x17a7630()*-0.315676);
}

double NNfunction_sb_dLcR::synapse0x17ab970() {
   return (neuron0x17a7970()*0.0776465);
}

double NNfunction_sb_dLcR::synapse0x17ab9b0() {
   return (neuron0x17a7ed0()*-0.208715);
}

double NNfunction_sb_dLcR::synapse0x17ac030() {
   return (neuron0x17a80f0()*-0.0326385);
}

double NNfunction_sb_dLcR::synapse0x17ac070() {
   return (neuron0x17a8430()*-0.318438);
}

double NNfunction_sb_dLcR::synapse0x17ac0b0() {
   return (neuron0x17a8770()*-0.353577);
}

double NNfunction_sb_dLcR::synapse0x17ac0f0() {
   return (neuron0x17a8ab0()*0.0579001);
}

double NNfunction_sb_dLcR::synapse0x17ac130() {
   return (neuron0x17a8df0()*0.146823);
}

double NNfunction_sb_dLcR::synapse0x17ac170() {
   return (neuron0x17a9130()*0.194527);
}

double NNfunction_sb_dLcR::synapse0x17ac4f0() {
   return (neuron0x17a4570()*-0.00679121);
}

double NNfunction_sb_dLcR::synapse0x17ac530() {
   return (neuron0x17a48b0()*0.0362421);
}

double NNfunction_sb_dLcR::synapse0x17ac570() {
   return (neuron0x17a4bf0()*-0.00370179);
}

double NNfunction_sb_dLcR::synapse0x17ac5b0() {
   return (neuron0x17a4f30()*-13.4272);
}

double NNfunction_sb_dLcR::synapse0x17ac5f0() {
   return (neuron0x17a5270()*-0.00323915);
}

double NNfunction_sb_dLcR::synapse0x17ac630() {
   return (neuron0x17a55b0()*-0.00386618);
}

double NNfunction_sb_dLcR::synapse0x17ac670() {
   return (neuron0x17a58f0()*-0.0135344);
}

double NNfunction_sb_dLcR::synapse0x17ac6b0() {
   return (neuron0x17a5c30()*0.0150034);
}

double NNfunction_sb_dLcR::synapse0x17ac6f0() {
   return (neuron0x17a5f70()*0.0131426);
}

double NNfunction_sb_dLcR::synapse0x1563e40() {
   return (neuron0x17a62b0()*-0.00618948);
}

double NNfunction_sb_dLcR::synapse0x1563e80() {
   return (neuron0x17a65f0()*0.0113569);
}

double NNfunction_sb_dLcR::synapse0x1563ec0() {
   return (neuron0x17a6930()*0.110053);
}

double NNfunction_sb_dLcR::synapse0x1563f00() {
   return (neuron0x17a6c70()*-0.00822131);
}

double NNfunction_sb_dLcR::synapse0x1563f40() {
   return (neuron0x17a6fb0()*0.00415437);
}

double NNfunction_sb_dLcR::synapse0x1563f80() {
   return (neuron0x17a72f0()*-0.0284644);
}

double NNfunction_sb_dLcR::synapse0x1563fc0() {
   return (neuron0x17a7630()*-0.0274046);
}

double NNfunction_sb_dLcR::synapse0x17ac340() {
   return (neuron0x17a7970()*0.0166515);
}

double NNfunction_sb_dLcR::synapse0x17ac380() {
   return (neuron0x17a7ed0()*0.0222682);
}

double NNfunction_sb_dLcR::synapse0x1564110() {
   return (neuron0x17a80f0()*0.0023823);
}

double NNfunction_sb_dLcR::synapse0x1564150() {
   return (neuron0x17a8430()*0.0230786);
}

double NNfunction_sb_dLcR::synapse0x1564190() {
   return (neuron0x17a8770()*-0.043086);
}

double NNfunction_sb_dLcR::synapse0x15641d0() {
   return (neuron0x17a8ab0()*-0.0235021);
}

double NNfunction_sb_dLcR::synapse0x1564210() {
   return (neuron0x17a8df0()*0.0219613);
}

double NNfunction_sb_dLcR::synapse0x17acf40() {
   return (neuron0x17a9130()*-0.0292541);
}

double NNfunction_sb_dLcR::synapse0x17ad2c0() {
   return (neuron0x17a4570()*-0.185672);
}

double NNfunction_sb_dLcR::synapse0x17ad300() {
   return (neuron0x17a48b0()*-0.0259776);
}

double NNfunction_sb_dLcR::synapse0x17ad340() {
   return (neuron0x17a4bf0()*-0.0371725);
}

double NNfunction_sb_dLcR::synapse0x17ad380() {
   return (neuron0x17a4f30()*-0.263978);
}

double NNfunction_sb_dLcR::synapse0x17ad3c0() {
   return (neuron0x17a5270()*-0.201796);
}

double NNfunction_sb_dLcR::synapse0x17ad400() {
   return (neuron0x17a55b0()*-0.305787);
}

double NNfunction_sb_dLcR::synapse0x17ad440() {
   return (neuron0x17a58f0()*-0.42781);
}

double NNfunction_sb_dLcR::synapse0x17ad480() {
   return (neuron0x17a5c30()*-0.0776325);
}

double NNfunction_sb_dLcR::synapse0x17ad4c0() {
   return (neuron0x17a5f70()*-0.0805461);
}

double NNfunction_sb_dLcR::synapse0x17ad500() {
   return (neuron0x17a62b0()*-0.100187);
}

double NNfunction_sb_dLcR::synapse0x17ad540() {
   return (neuron0x17a65f0()*0.219624);
}

double NNfunction_sb_dLcR::synapse0x17ad580() {
   return (neuron0x17a6930()*-0.533512);
}

double NNfunction_sb_dLcR::synapse0x17ad5c0() {
   return (neuron0x17a6c70()*-0.126031);
}

double NNfunction_sb_dLcR::synapse0x17ad600() {
   return (neuron0x17a6fb0()*-0.0824105);
}

double NNfunction_sb_dLcR::synapse0x17ad640() {
   return (neuron0x17a72f0()*-0.557551);
}

double NNfunction_sb_dLcR::synapse0x17ad680() {
   return (neuron0x17a7630()*-0.595777);
}

double NNfunction_sb_dLcR::synapse0x17ad110() {
   return (neuron0x17a7970()*-0.0805804);
}

double NNfunction_sb_dLcR::synapse0x17ad150() {
   return (neuron0x17a7ed0()*-0.253291);
}

double NNfunction_sb_dLcR::synapse0x17ad7d0() {
   return (neuron0x17a80f0()*-0.0529707);
}

double NNfunction_sb_dLcR::synapse0x17ad810() {
   return (neuron0x17a8430()*-0.166561);
}

double NNfunction_sb_dLcR::synapse0x17ad850() {
   return (neuron0x17a8770()*-0.00851313);
}

double NNfunction_sb_dLcR::synapse0x17ad890() {
   return (neuron0x17a8ab0()*-0.0662288);
}

double NNfunction_sb_dLcR::synapse0x17ad8d0() {
   return (neuron0x17a8df0()*0.132404);
}

double NNfunction_sb_dLcR::synapse0x17ad910() {
   return (neuron0x17a9130()*0.0759205);
}

double NNfunction_sb_dLcR::synapse0x17adc90() {
   return (neuron0x17a4570()*0.00345942);
}

double NNfunction_sb_dLcR::synapse0x17adcd0() {
   return (neuron0x17a48b0()*-0.0309577);
}

double NNfunction_sb_dLcR::synapse0x17add10() {
   return (neuron0x17a4bf0()*-0.13241);
}

double NNfunction_sb_dLcR::synapse0x17add50() {
   return (neuron0x17a4f30()*-0.335718);
}

double NNfunction_sb_dLcR::synapse0x17add90() {
   return (neuron0x17a5270()*0.0500212);
}

double NNfunction_sb_dLcR::synapse0x17addd0() {
   return (neuron0x17a55b0()*0.0204432);
}

double NNfunction_sb_dLcR::synapse0x17ade10() {
   return (neuron0x17a58f0()*0.00299064);
}

double NNfunction_sb_dLcR::synapse0x17ade50() {
   return (neuron0x17a5c30()*-0.0238269);
}

double NNfunction_sb_dLcR::synapse0x17ade90() {
   return (neuron0x17a5f70()*-0.00030458);
}

double NNfunction_sb_dLcR::synapse0x17aded0() {
   return (neuron0x17a62b0()*0.0281943);
}

double NNfunction_sb_dLcR::synapse0x17adf10() {
   return (neuron0x17a65f0()*0.000499172);
}

double NNfunction_sb_dLcR::synapse0x17adf50() {
   return (neuron0x17a6930()*-0.779033);
}

double NNfunction_sb_dLcR::synapse0x17adf90() {
   return (neuron0x17a6c70()*0.0570753);
}

double NNfunction_sb_dLcR::synapse0x17adfd0() {
   return (neuron0x17a6fb0()*-0.0157983);
}

double NNfunction_sb_dLcR::synapse0x17ae010() {
   return (neuron0x17a72f0()*0.00381745);
}

double NNfunction_sb_dLcR::synapse0x17ae050() {
   return (neuron0x17a7630()*-0.668049);
}

double NNfunction_sb_dLcR::synapse0x17adae0() {
   return (neuron0x17a7970()*-0.0366848);
}

double NNfunction_sb_dLcR::synapse0x17adb20() {
   return (neuron0x17a7ed0()*0.0650095);
}

double NNfunction_sb_dLcR::synapse0x17ae1a0() {
   return (neuron0x17a80f0()*0.00517539);
}

double NNfunction_sb_dLcR::synapse0x17ae1e0() {
   return (neuron0x17a8430()*0.0383107);
}

double NNfunction_sb_dLcR::synapse0x17ae220() {
   return (neuron0x17a8770()*-0.00558502);
}

double NNfunction_sb_dLcR::synapse0x17ae260() {
   return (neuron0x17a8ab0()*0.0476481);
}

double NNfunction_sb_dLcR::synapse0x17ae2a0() {
   return (neuron0x17a8df0()*-0.00451013);
}

double NNfunction_sb_dLcR::synapse0x17ae2e0() {
   return (neuron0x17a9130()*0.0340183);
}

double NNfunction_sb_dLcR::synapse0x17a7dc0() {
   return (neuron0x17a4570()*-0.0502849);
}

double NNfunction_sb_dLcR::synapse0x17a7e00() {
   return (neuron0x17a48b0()*-0.0315262);
}

double NNfunction_sb_dLcR::synapse0x17a7e40() {
   return (neuron0x17a4bf0()*-0.106507);
}

double NNfunction_sb_dLcR::synapse0x17a7e80() {
   return (neuron0x17a4f30()*1.11483);
}

double NNfunction_sb_dLcR::synapse0x17ae870() {
   return (neuron0x17a5270()*0.138162);
}

double NNfunction_sb_dLcR::synapse0x17ae8b0() {
   return (neuron0x17a55b0()*-0.0688097);
}

double NNfunction_sb_dLcR::synapse0x17ae8f0() {
   return (neuron0x17a58f0()*0.254614);
}

double NNfunction_sb_dLcR::synapse0x17ae930() {
   return (neuron0x17a5c30()*-0.00511309);
}

double NNfunction_sb_dLcR::synapse0x17ae970() {
   return (neuron0x17a5f70()*-0.274547);
}

double NNfunction_sb_dLcR::synapse0x17ae9b0() {
   return (neuron0x17a62b0()*0.029647);
}

double NNfunction_sb_dLcR::synapse0x17ae9f0() {
   return (neuron0x17a65f0()*-0.0795007);
}

double NNfunction_sb_dLcR::synapse0x17aea30() {
   return (neuron0x17a6930()*0.00791948);
}

double NNfunction_sb_dLcR::synapse0x17aea70() {
   return (neuron0x17a6c70()*-0.0624472);
}

double NNfunction_sb_dLcR::synapse0x17aeab0() {
   return (neuron0x17a6fb0()*0.0270805);
}

double NNfunction_sb_dLcR::synapse0x17aeaf0() {
   return (neuron0x17a72f0()*-0.00805603);
}

double NNfunction_sb_dLcR::synapse0x17aeb30() {
   return (neuron0x17a7630()*-0.348395);
}

double NNfunction_sb_dLcR::synapse0x17ae4b0() {
   return (neuron0x17a7970()*0.00783543);
}

double NNfunction_sb_dLcR::synapse0x17ae4f0() {
   return (neuron0x17a7ed0()*-0.125689);
}

double NNfunction_sb_dLcR::synapse0x17aec80() {
   return (neuron0x17a80f0()*-0.122929);
}

double NNfunction_sb_dLcR::synapse0x17aecc0() {
   return (neuron0x17a8430()*-0.0976988);
}

double NNfunction_sb_dLcR::synapse0x17aed00() {
   return (neuron0x17a8770()*0.0644108);
}

double NNfunction_sb_dLcR::synapse0x17aed40() {
   return (neuron0x17a8ab0()*0.128655);
}

double NNfunction_sb_dLcR::synapse0x17aed80() {
   return (neuron0x17a8df0()*-0.0605947);
}

double NNfunction_sb_dLcR::synapse0x17aedc0() {
   return (neuron0x17a9130()*0.199695);
}

double NNfunction_sb_dLcR::synapse0x17af140() {
   return (neuron0x17a4570()*0.00225828);
}

double NNfunction_sb_dLcR::synapse0x17af180() {
   return (neuron0x17a48b0()*0.0228734);
}

double NNfunction_sb_dLcR::synapse0x17af1c0() {
   return (neuron0x17a4bf0()*0.00738305);
}

double NNfunction_sb_dLcR::synapse0x17af200() {
   return (neuron0x17a4f30()*-3.6422);
}

double NNfunction_sb_dLcR::synapse0x17af240() {
   return (neuron0x17a5270()*0.0226561);
}

double NNfunction_sb_dLcR::synapse0x17af280() {
   return (neuron0x17a55b0()*0.000242143);
}

double NNfunction_sb_dLcR::synapse0x17af2c0() {
   return (neuron0x17a58f0()*0.00187544);
}

double NNfunction_sb_dLcR::synapse0x17af300() {
   return (neuron0x17a5c30()*0.00417273);
}

double NNfunction_sb_dLcR::synapse0x17af340() {
   return (neuron0x17a5f70()*-0.0131698);
}

double NNfunction_sb_dLcR::synapse0x17af380() {
   return (neuron0x17a62b0()*0.00115885);
}

double NNfunction_sb_dLcR::synapse0x17af3c0() {
   return (neuron0x17a65f0()*-0.00200173);
}

double NNfunction_sb_dLcR::synapse0x17af400() {
   return (neuron0x17a6930()*0.000286815);
}

double NNfunction_sb_dLcR::synapse0x17af440() {
   return (neuron0x17a6c70()*-0.0194936);
}

double NNfunction_sb_dLcR::synapse0x17af480() {
   return (neuron0x17a6fb0()*-0.00410739);
}

double NNfunction_sb_dLcR::synapse0x17af4c0() {
   return (neuron0x17a72f0()*-0.0119864);
}

double NNfunction_sb_dLcR::synapse0x17af500() {
   return (neuron0x17a7630()*0.303068);
}

double NNfunction_sb_dLcR::synapse0x17aef90() {
   return (neuron0x17a7970()*0.00112504);
}

double NNfunction_sb_dLcR::synapse0x17aefd0() {
   return (neuron0x17a7ed0()*-0.00727624);
}

double NNfunction_sb_dLcR::synapse0x17af650() {
   return (neuron0x17a80f0()*-0.0126776);
}

double NNfunction_sb_dLcR::synapse0x17af690() {
   return (neuron0x17a8430()*-0.00940337);
}

double NNfunction_sb_dLcR::synapse0x17af6d0() {
   return (neuron0x17a8770()*0.00836236);
}

double NNfunction_sb_dLcR::synapse0x17af710() {
   return (neuron0x17a8ab0()*0.00709078);
}

double NNfunction_sb_dLcR::synapse0x17af750() {
   return (neuron0x17a8df0()*-0.006768);
}

double NNfunction_sb_dLcR::synapse0x17af790() {
   return (neuron0x17a9130()*-0.00760866);
}

double NNfunction_sb_dLcR::synapse0x17afb10() {
   return (neuron0x17a4570()*0.334733);
}

double NNfunction_sb_dLcR::synapse0x17afb50() {
   return (neuron0x17a48b0()*0.0690994);
}

double NNfunction_sb_dLcR::synapse0x17afb90() {
   return (neuron0x17a4bf0()*0.0374106);
}

double NNfunction_sb_dLcR::synapse0x17afbd0() {
   return (neuron0x17a4f30()*1.37335);
}

double NNfunction_sb_dLcR::synapse0x17afc10() {
   return (neuron0x17a5270()*-0.155931);
}

double NNfunction_sb_dLcR::synapse0x17afc50() {
   return (neuron0x17a55b0()*-0.00701069);
}

double NNfunction_sb_dLcR::synapse0x17afc90() {
   return (neuron0x17a58f0()*-0.117323);
}

double NNfunction_sb_dLcR::synapse0x17afcd0() {
   return (neuron0x17a5c30()*-0.172612);
}

double NNfunction_sb_dLcR::synapse0x17afd10() {
   return (neuron0x17a5f70()*0.373335);
}

double NNfunction_sb_dLcR::synapse0x17afd50() {
   return (neuron0x17a62b0()*0.335192);
}

double NNfunction_sb_dLcR::synapse0x17afd90() {
   return (neuron0x17a65f0()*0.264303);
}

double NNfunction_sb_dLcR::synapse0x17afdd0() {
   return (neuron0x17a6930()*0.657195);
}

double NNfunction_sb_dLcR::synapse0x17afe10() {
   return (neuron0x17a6c70()*0.974053);
}

double NNfunction_sb_dLcR::synapse0x17afe50() {
   return (neuron0x17a6fb0()*-0.279615);
}

double NNfunction_sb_dLcR::synapse0x17afe90() {
   return (neuron0x17a72f0()*0.359002);
}

double NNfunction_sb_dLcR::synapse0x17afed0() {
   return (neuron0x17a7630()*0.462345);
}

double NNfunction_sb_dLcR::synapse0x17af960() {
   return (neuron0x17a7970()*-0.133782);
}

double NNfunction_sb_dLcR::synapse0x17af9a0() {
   return (neuron0x17a7ed0()*0.637964);
}

double NNfunction_sb_dLcR::synapse0x17ac730() {
   return (neuron0x17a80f0()*-0.183958);
}

double NNfunction_sb_dLcR::synapse0x17ac770() {
   return (neuron0x17a8430()*-0.423338);
}

double NNfunction_sb_dLcR::synapse0x17ac7b0() {
   return (neuron0x17a8770()*-0.329795);
}

double NNfunction_sb_dLcR::synapse0x17ac7f0() {
   return (neuron0x17a8ab0()*0.0240288);
}

double NNfunction_sb_dLcR::synapse0x17ac830() {
   return (neuron0x17a8df0()*-0.180243);
}

double NNfunction_sb_dLcR::synapse0x17ac870() {
   return (neuron0x17a9130()*-0.279415);
}

double NNfunction_sb_dLcR::synapse0x17acbf0() {
   return (neuron0x17a4570()*-0.0645813);
}

double NNfunction_sb_dLcR::synapse0x17acc30() {
   return (neuron0x17a48b0()*0.246811);
}

double NNfunction_sb_dLcR::synapse0x17acc70() {
   return (neuron0x17a4bf0()*0.106171);
}

double NNfunction_sb_dLcR::synapse0x17accb0() {
   return (neuron0x17a4f30()*1.22431);
}

double NNfunction_sb_dLcR::synapse0x17accf0() {
   return (neuron0x17a5270()*-0.138283);
}

double NNfunction_sb_dLcR::synapse0x17acd30() {
   return (neuron0x17a55b0()*-0.0806016);
}

double NNfunction_sb_dLcR::synapse0x17acd70() {
   return (neuron0x17a58f0()*-0.212027);
}

double NNfunction_sb_dLcR::synapse0x17acdb0() {
   return (neuron0x17a5c30()*0.0276336);
}

double NNfunction_sb_dLcR::synapse0x17acdf0() {
   return (neuron0x17a5f70()*0.0315458);
}

double NNfunction_sb_dLcR::synapse0x17ace30() {
   return (neuron0x17a62b0()*0.0577188);
}

double NNfunction_sb_dLcR::synapse0x17ace70() {
   return (neuron0x17a65f0()*0.064667);
}

double NNfunction_sb_dLcR::synapse0x17aceb0() {
   return (neuron0x17a6930()*-0.129728);
}

double NNfunction_sb_dLcR::synapse0x17acef0() {
   return (neuron0x17a6c70()*0.0615888);
}

double NNfunction_sb_dLcR::synapse0x17b1030() {
   return (neuron0x17a6fb0()*-0.0661685);
}

double NNfunction_sb_dLcR::synapse0x17b1070() {
   return (neuron0x17a72f0()*-0.123433);
}

double NNfunction_sb_dLcR::synapse0x17b10b0() {
   return (neuron0x17a7630()*-0.39981);
}

double NNfunction_sb_dLcR::synapse0x17aca40() {
   return (neuron0x17a7970()*-0.0886545);
}

double NNfunction_sb_dLcR::synapse0x17aca80() {
   return (neuron0x17a7ed0()*0.13089);
}

double NNfunction_sb_dLcR::synapse0x17b1200() {
   return (neuron0x17a80f0()*0.228788);
}

double NNfunction_sb_dLcR::synapse0x17b1240() {
   return (neuron0x17a8430()*0.159248);
}

double NNfunction_sb_dLcR::synapse0x17b1280() {
   return (neuron0x17a8770()*-0.0575344);
}

double NNfunction_sb_dLcR::synapse0x17b12c0() {
   return (neuron0x17a8ab0()*0.0127268);
}

double NNfunction_sb_dLcR::synapse0x17b1300() {
   return (neuron0x17a8df0()*-0.05989);
}

double NNfunction_sb_dLcR::synapse0x17b1340() {
   return (neuron0x17a9130()*-0.122148);
}

double NNfunction_sb_dLcR::synapse0x17b16c0() {
   return (neuron0x17a4570()*-0.157678);
}

double NNfunction_sb_dLcR::synapse0x17b1700() {
   return (neuron0x17a48b0()*0.0751877);
}

double NNfunction_sb_dLcR::synapse0x17b1740() {
   return (neuron0x17a4bf0()*0.549972);
}

double NNfunction_sb_dLcR::synapse0x17b1780() {
   return (neuron0x17a4f30()*-0.58527);
}

double NNfunction_sb_dLcR::synapse0x17b17c0() {
   return (neuron0x17a5270()*-0.516126);
}

double NNfunction_sb_dLcR::synapse0x17b1800() {
   return (neuron0x17a55b0()*0.150151);
}

double NNfunction_sb_dLcR::synapse0x17b1840() {
   return (neuron0x17a58f0()*-0.302157);
}

double NNfunction_sb_dLcR::synapse0x17b1880() {
   return (neuron0x17a5c30()*0.0113891);
}

double NNfunction_sb_dLcR::synapse0x17b18c0() {
   return (neuron0x17a5f70()*-0.257163);
}

double NNfunction_sb_dLcR::synapse0x17b1900() {
   return (neuron0x17a62b0()*-0.280954);
}

double NNfunction_sb_dLcR::synapse0x17b1940() {
   return (neuron0x17a65f0()*-0.16681);
}

double NNfunction_sb_dLcR::synapse0x17b1980() {
   return (neuron0x17a6930()*1.0739);
}

double NNfunction_sb_dLcR::synapse0x17b19c0() {
   return (neuron0x17a6c70()*-0.0961983);
}

double NNfunction_sb_dLcR::synapse0x17b1a00() {
   return (neuron0x17a6fb0()*-0.559507);
}

double NNfunction_sb_dLcR::synapse0x17b1a40() {
   return (neuron0x17a72f0()*0.457202);
}

double NNfunction_sb_dLcR::synapse0x17b1a80() {
   return (neuron0x17a7630()*0.642612);
}

double NNfunction_sb_dLcR::synapse0x17b1510() {
   return (neuron0x17a7970()*-0.475664);
}

double NNfunction_sb_dLcR::synapse0x17b1550() {
   return (neuron0x17a7ed0()*-0.578497);
}

double NNfunction_sb_dLcR::synapse0x17b1bd0() {
   return (neuron0x17a80f0()*0.207161);
}

double NNfunction_sb_dLcR::synapse0x17b1c10() {
   return (neuron0x17a8430()*0.593375);
}

double NNfunction_sb_dLcR::synapse0x17b1c50() {
   return (neuron0x17a8770()*0.262054);
}

double NNfunction_sb_dLcR::synapse0x17b1c90() {
   return (neuron0x17a8ab0()*-0.0143498);
}

double NNfunction_sb_dLcR::synapse0x17b1cd0() {
   return (neuron0x17a8df0()*-0.283289);
}

double NNfunction_sb_dLcR::synapse0x17b1d10() {
   return (neuron0x17a9130()*-0.52256);
}

double NNfunction_sb_dLcR::synapse0x17b2090() {
   return (neuron0x17a4570()*0.134236);
}

double NNfunction_sb_dLcR::synapse0x17b20d0() {
   return (neuron0x17a48b0()*0.50181);
}

double NNfunction_sb_dLcR::synapse0x17b2110() {
   return (neuron0x17a4bf0()*-0.683789);
}

double NNfunction_sb_dLcR::synapse0x17b2150() {
   return (neuron0x17a4f30()*0.686508);
}

double NNfunction_sb_dLcR::synapse0x17b2190() {
   return (neuron0x17a5270()*0.0237132);
}

double NNfunction_sb_dLcR::synapse0x17b21d0() {
   return (neuron0x17a55b0()*-0.103434);
}

double NNfunction_sb_dLcR::synapse0x17b2210() {
   return (neuron0x17a58f0()*-0.154269);
}

double NNfunction_sb_dLcR::synapse0x17b2250() {
   return (neuron0x17a5c30()*0.383877);
}

double NNfunction_sb_dLcR::synapse0x17b2290() {
   return (neuron0x17a5f70()*-0.448397);
}

double NNfunction_sb_dLcR::synapse0x17b22d0() {
   return (neuron0x17a62b0()*0.117768);
}

double NNfunction_sb_dLcR::synapse0x17b2310() {
   return (neuron0x17a65f0()*0.335043);
}

double NNfunction_sb_dLcR::synapse0x17b2350() {
   return (neuron0x17a6930()*0.94316);
}

double NNfunction_sb_dLcR::synapse0x17b2390() {
   return (neuron0x17a6c70()*0.177515);
}

double NNfunction_sb_dLcR::synapse0x17b23d0() {
   return (neuron0x17a6fb0()*0.286664);
}

double NNfunction_sb_dLcR::synapse0x17b2410() {
   return (neuron0x17a72f0()*0.284449);
}

double NNfunction_sb_dLcR::synapse0x17b2450() {
   return (neuron0x17a7630()*-0.0290083);
}

double NNfunction_sb_dLcR::synapse0x17b1ee0() {
   return (neuron0x17a7970()*-0.00668799);
}

double NNfunction_sb_dLcR::synapse0x17b1f20() {
   return (neuron0x17a7ed0()*0.694518);
}

double NNfunction_sb_dLcR::synapse0x17b25a0() {
   return (neuron0x17a80f0()*1.01323);
}

double NNfunction_sb_dLcR::synapse0x17b25e0() {
   return (neuron0x17a8430()*-0.0979067);
}

double NNfunction_sb_dLcR::synapse0x17b2620() {
   return (neuron0x17a8770()*0.635247);
}

double NNfunction_sb_dLcR::synapse0x17b2660() {
   return (neuron0x17a8ab0()*0.128526);
}

double NNfunction_sb_dLcR::synapse0x17b26a0() {
   return (neuron0x17a8df0()*0.172702);
}

double NNfunction_sb_dLcR::synapse0x17b26e0() {
   return (neuron0x17a9130()*0.326119);
}

double NNfunction_sb_dLcR::synapse0x17b2a60() {
   return (neuron0x17a4570()*0.648741);
}

double NNfunction_sb_dLcR::synapse0x17b2aa0() {
   return (neuron0x17a48b0()*0.212124);
}

double NNfunction_sb_dLcR::synapse0x17b2ae0() {
   return (neuron0x17a4bf0()*0.17682);
}

double NNfunction_sb_dLcR::synapse0x17b2b20() {
   return (neuron0x17a4f30()*-0.225176);
}

double NNfunction_sb_dLcR::synapse0x17b2b60() {
   return (neuron0x17a5270()*0.314725);
}

double NNfunction_sb_dLcR::synapse0x17b2ba0() {
   return (neuron0x17a55b0()*-0.00817992);
}

double NNfunction_sb_dLcR::synapse0x17b2be0() {
   return (neuron0x17a58f0()*-0.0157613);
}

double NNfunction_sb_dLcR::synapse0x17b2c20() {
   return (neuron0x17a5c30()*0.0695466);
}

double NNfunction_sb_dLcR::synapse0x17b2c60() {
   return (neuron0x17a5f70()*-0.125619);
}

double NNfunction_sb_dLcR::synapse0x17b2ca0() {
   return (neuron0x17a62b0()*0.0908483);
}

double NNfunction_sb_dLcR::synapse0x17b2ce0() {
   return (neuron0x17a65f0()*0.097073);
}

double NNfunction_sb_dLcR::synapse0x17b2d20() {
   return (neuron0x17a6930()*0.128557);
}

double NNfunction_sb_dLcR::synapse0x17b2d60() {
   return (neuron0x17a6c70()*-0.121582);
}

double NNfunction_sb_dLcR::synapse0x17b2da0() {
   return (neuron0x17a6fb0()*-0.331776);
}

double NNfunction_sb_dLcR::synapse0x17b2de0() {
   return (neuron0x17a72f0()*-0.0999207);
}

double NNfunction_sb_dLcR::synapse0x17b2e20() {
   return (neuron0x17a7630()*-0.377234);
}

double NNfunction_sb_dLcR::synapse0x17b28b0() {
   return (neuron0x17a7970()*0.0501704);
}

double NNfunction_sb_dLcR::synapse0x17b28f0() {
   return (neuron0x17a7ed0()*0.126997);
}

double NNfunction_sb_dLcR::synapse0x17b2f70() {
   return (neuron0x17a80f0()*-0.398165);
}

double NNfunction_sb_dLcR::synapse0x17b2fb0() {
   return (neuron0x17a8430()*0.209733);
}

double NNfunction_sb_dLcR::synapse0x17b2ff0() {
   return (neuron0x17a8770()*0.0262153);
}

double NNfunction_sb_dLcR::synapse0x17b3030() {
   return (neuron0x17a8ab0()*0.155971);
}

double NNfunction_sb_dLcR::synapse0x17b3070() {
   return (neuron0x17a8df0()*0.0330854);
}

double NNfunction_sb_dLcR::synapse0x17b30b0() {
   return (neuron0x17a9130()*0.195689);
}

double NNfunction_sb_dLcR::synapse0x17b3430() {
   return (neuron0x17a4570()*0.179012);
}

double NNfunction_sb_dLcR::synapse0x17a4790() {
   return (neuron0x17a48b0()*-0.223698);
}

double NNfunction_sb_dLcR::synapse0x17a47d0() {
   return (neuron0x17a4bf0()*0.122154);
}

double NNfunction_sb_dLcR::synapse0x17a4ad0() {
   return (neuron0x17a4f30()*2.02852);
}

double NNfunction_sb_dLcR::synapse0x17a4b10() {
   return (neuron0x17a5270()*0.0458271);
}

double NNfunction_sb_dLcR::synapse0x17a4e10() {
   return (neuron0x17a55b0()*0.314779);
}

double NNfunction_sb_dLcR::synapse0x17a4e50() {
   return (neuron0x17a58f0()*-0.00347821);
}

double NNfunction_sb_dLcR::synapse0x17a5150() {
   return (neuron0x17a5c30()*0.335445);
}

double NNfunction_sb_dLcR::synapse0x17a5190() {
   return (neuron0x17a5f70()*-0.0286698);
}

double NNfunction_sb_dLcR::synapse0x17a5490() {
   return (neuron0x17a62b0()*0.224731);
}

double NNfunction_sb_dLcR::synapse0x17a54d0() {
   return (neuron0x17a65f0()*0.138489);
}

double NNfunction_sb_dLcR::synapse0x17a57d0() {
   return (neuron0x17a6930()*0.616441);
}

double NNfunction_sb_dLcR::synapse0x17a5810() {
   return (neuron0x17a6c70()*0.00781032);
}

double NNfunction_sb_dLcR::synapse0x17a5b10() {
   return (neuron0x17a6fb0()*0.197586);
}

double NNfunction_sb_dLcR::synapse0x17a5b50() {
   return (neuron0x17a72f0()*0.030834);
}

double NNfunction_sb_dLcR::synapse0x17a5e50() {
   return (neuron0x17a7630()*1.29395);
}

double NNfunction_sb_dLcR::synapse0x17a5e90() {
   return (neuron0x17a7970()*0.0742348);
}

double NNfunction_sb_dLcR::synapse0x17a6190() {
   return (neuron0x17a7ed0()*0.598712);
}

double NNfunction_sb_dLcR::synapse0x17a61d0() {
   return (neuron0x17a80f0()*-0.11338);
}

double NNfunction_sb_dLcR::synapse0x17a64d0() {
   return (neuron0x17a8430()*-0.0696589);
}

double NNfunction_sb_dLcR::synapse0x17a6510() {
   return (neuron0x17a8770()*-0.139593);
}

double NNfunction_sb_dLcR::synapse0x17a6810() {
   return (neuron0x17a8ab0()*-0.0432537);
}

double NNfunction_sb_dLcR::synapse0x17a6850() {
   return (neuron0x17a8df0()*-0.04074);
}

double NNfunction_sb_dLcR::synapse0x17a6b50() {
   return (neuron0x17a9130()*0.322603);
}

double NNfunction_sb_dLcR::synapse0x17a6b90() {
   return (neuron0x17a4570()*-0.0709333);
}

double NNfunction_sb_dLcR::synapse0x17a7850() {
   return (neuron0x17a48b0()*-0.0124757);
}

double NNfunction_sb_dLcR::synapse0x17a7890() {
   return (neuron0x17a4bf0()*0.0901802);
}

double NNfunction_sb_dLcR::synapse0x17b3280() {
   return (neuron0x17a4f30()*0.0979926);
}

double NNfunction_sb_dLcR::synapse0x17b32c0() {
   return (neuron0x17a5270()*-0.255594);
}

double NNfunction_sb_dLcR::synapse0x17a7b90() {
   return (neuron0x17a55b0()*0.059669);
}

double NNfunction_sb_dLcR::synapse0x17a7bd0() {
   return (neuron0x17a58f0()*-0.176512);
}

double NNfunction_sb_dLcR::synapse0x1555b60() {
   return (neuron0x17a5c30()*-0.171136);
}

double NNfunction_sb_dLcR::synapse0x1555ba0() {
   return (neuron0x17a5f70()*0.0436188);
}

double NNfunction_sb_dLcR::synapse0x17a8310() {
   return (neuron0x17a62b0()*0.00115768);
}

double NNfunction_sb_dLcR::synapse0x17a8350() {
   return (neuron0x17a65f0()*-0.00977184);
}

double NNfunction_sb_dLcR::synapse0x17a8650() {
   return (neuron0x17a6930()*0.220807);
}

double NNfunction_sb_dLcR::synapse0x17a8690() {
   return (neuron0x17a6c70()*-0.0484846);
}

double NNfunction_sb_dLcR::synapse0x17a8990() {
   return (neuron0x17a6fb0()*0.105302);
}

double NNfunction_sb_dLcR::synapse0x17a89d0() {
   return (neuron0x17a72f0()*0.11884);
}

double NNfunction_sb_dLcR::synapse0x17a8cd0() {
   return (neuron0x17a7630()*0.882612);
}

double NNfunction_sb_dLcR::synapse0x17a8d10() {
   return (neuron0x17a7970()*0.127426);
}

double NNfunction_sb_dLcR::synapse0x17a9010() {
   return (neuron0x17a7ed0()*0.151327);
}

double NNfunction_sb_dLcR::synapse0x17a9050() {
   return (neuron0x17a80f0()*-0.0370139);
}

double NNfunction_sb_dLcR::synapse0x17a9350() {
   return (neuron0x17a8430()*-0.00764383);
}

double NNfunction_sb_dLcR::synapse0x17a9390() {
   return (neuron0x17a8770()*-0.0993556);
}

double NNfunction_sb_dLcR::synapse0x17a6e90() {
   return (neuron0x17a8ab0()*-0.0108972);
}

double NNfunction_sb_dLcR::synapse0x17a6ed0() {
   return (neuron0x17a8df0()*-0.0171494);
}

double NNfunction_sb_dLcR::synapse0x17b51a0() {
   return (neuron0x17a9130()*0.0681328);
}

double NNfunction_sb_dLcR::synapse0x17b5520() {
   return (neuron0x17a4570()*6.47158e-05);
}

double NNfunction_sb_dLcR::synapse0x17b5560() {
   return (neuron0x17a48b0()*-0.0350007);
}

double NNfunction_sb_dLcR::synapse0x17b55a0() {
   return (neuron0x17a4bf0()*-0.00258573);
}

double NNfunction_sb_dLcR::synapse0x17b55e0() {
   return (neuron0x17a4f30()*19.9678);
}

double NNfunction_sb_dLcR::synapse0x17b5620() {
   return (neuron0x17a5270()*0.0169659);
}

double NNfunction_sb_dLcR::synapse0x17b5660() {
   return (neuron0x17a55b0()*-0.0142764);
}

double NNfunction_sb_dLcR::synapse0x17b56a0() {
   return (neuron0x17a58f0()*0.028448);
}

double NNfunction_sb_dLcR::synapse0x17b56e0() {
   return (neuron0x17a5c30()*-0.0196669);
}

double NNfunction_sb_dLcR::synapse0x17b5720() {
   return (neuron0x17a5f70()*-0.0222469);
}

double NNfunction_sb_dLcR::synapse0x17b5760() {
   return (neuron0x17a62b0()*0.0223426);
}

double NNfunction_sb_dLcR::synapse0x17b57a0() {
   return (neuron0x17a65f0()*-0.00578189);
}

double NNfunction_sb_dLcR::synapse0x17b57e0() {
   return (neuron0x17a6930()*0.0222273);
}

double NNfunction_sb_dLcR::synapse0x17b5820() {
   return (neuron0x17a6c70()*0.0097374);
}

double NNfunction_sb_dLcR::synapse0x17b5860() {
   return (neuron0x17a6fb0()*0.0111877);
}

double NNfunction_sb_dLcR::synapse0x17b58a0() {
   return (neuron0x17a72f0()*0.0308979);
}

double NNfunction_sb_dLcR::synapse0x17b58e0() {
   return (neuron0x17a7630()*0.125809);
}

double NNfunction_sb_dLcR::synapse0x17b5370() {
   return (neuron0x17a7970()*-0.00875182);
}

double NNfunction_sb_dLcR::synapse0x17b53b0() {
   return (neuron0x17a7ed0()*-0.0165939);
}

double NNfunction_sb_dLcR::synapse0x17b5a30() {
   return (neuron0x17a80f0()*-0.0120457);
}

double NNfunction_sb_dLcR::synapse0x17b5a70() {
   return (neuron0x17a8430()*-0.02624);
}

double NNfunction_sb_dLcR::synapse0x17b5ab0() {
   return (neuron0x17a8770()*0.0345854);
}

double NNfunction_sb_dLcR::synapse0x17b5af0() {
   return (neuron0x17a8ab0()*0.029808);
}

double NNfunction_sb_dLcR::synapse0x17b5b30() {
   return (neuron0x17a8df0()*-0.0159164);
}

double NNfunction_sb_dLcR::synapse0x17b5b70() {
   return (neuron0x17a9130()*0.034782);
}

double NNfunction_sb_dLcR::synapse0x17b5ef0() {
   return (neuron0x17a4570()*0.157394);
}

double NNfunction_sb_dLcR::synapse0x17b5f30() {
   return (neuron0x17a48b0()*-0.0298763);
}

double NNfunction_sb_dLcR::synapse0x17b5f70() {
   return (neuron0x17a4bf0()*-0.395593);
}

double NNfunction_sb_dLcR::synapse0x17b5fb0() {
   return (neuron0x17a4f30()*0.770707);
}

double NNfunction_sb_dLcR::synapse0x17b5ff0() {
   return (neuron0x17a5270()*-0.0204564);
}

double NNfunction_sb_dLcR::synapse0x17b6030() {
   return (neuron0x17a55b0()*-0.0830393);
}

double NNfunction_sb_dLcR::synapse0x17b6070() {
   return (neuron0x17a58f0()*-0.565453);
}

double NNfunction_sb_dLcR::synapse0x17b60b0() {
   return (neuron0x17a5c30()*0.539322);
}

double NNfunction_sb_dLcR::synapse0x17b60f0() {
   return (neuron0x17a5f70()*0.37995);
}

double NNfunction_sb_dLcR::synapse0x17b6130() {
   return (neuron0x17a62b0()*-0.224585);
}

double NNfunction_sb_dLcR::synapse0x17b6170() {
   return (neuron0x17a65f0()*-0.223165);
}

double NNfunction_sb_dLcR::synapse0x17b61b0() {
   return (neuron0x17a6930()*-0.089664);
}

double NNfunction_sb_dLcR::synapse0x17b61f0() {
   return (neuron0x17a6c70()*-0.055607);
}

double NNfunction_sb_dLcR::synapse0x17b6230() {
   return (neuron0x17a6fb0()*-0.108314);
}

double NNfunction_sb_dLcR::synapse0x17b6270() {
   return (neuron0x17a72f0()*0.12326);
}

double NNfunction_sb_dLcR::synapse0x17b62b0() {
   return (neuron0x17a7630()*-0.811921);
}

double NNfunction_sb_dLcR::synapse0x17b5d40() {
   return (neuron0x17a7970()*0.154715);
}

double NNfunction_sb_dLcR::synapse0x17b5d80() {
   return (neuron0x17a7ed0()*0.0911081);
}

double NNfunction_sb_dLcR::synapse0x17b6400() {
   return (neuron0x17a80f0()*-0.0918357);
}

double NNfunction_sb_dLcR::synapse0x17b6440() {
   return (neuron0x17a8430()*0.239934);
}

double NNfunction_sb_dLcR::synapse0x17b6480() {
   return (neuron0x17a8770()*0.155283);
}

double NNfunction_sb_dLcR::synapse0x17b64c0() {
   return (neuron0x17a8ab0()*0.301791);
}

double NNfunction_sb_dLcR::synapse0x17b6500() {
   return (neuron0x17a8df0()*0.0965305);
}

double NNfunction_sb_dLcR::synapse0x17b6540() {
   return (neuron0x17a9130()*-0.14187);
}

double NNfunction_sb_dLcR::synapse0x17b68c0() {
   return (neuron0x17a4570()*-0.17165);
}

double NNfunction_sb_dLcR::synapse0x17b6900() {
   return (neuron0x17a48b0()*0.686287);
}

double NNfunction_sb_dLcR::synapse0x17b6940() {
   return (neuron0x17a4bf0()*0.0900089);
}

double NNfunction_sb_dLcR::synapse0x17b6980() {
   return (neuron0x17a4f30()*0.44795);
}

double NNfunction_sb_dLcR::synapse0x17b69c0() {
   return (neuron0x17a5270()*0.0735591);
}

double NNfunction_sb_dLcR::synapse0x17b6a00() {
   return (neuron0x17a55b0()*0.0673686);
}

double NNfunction_sb_dLcR::synapse0x17b6a40() {
   return (neuron0x17a58f0()*-0.00868977);
}

double NNfunction_sb_dLcR::synapse0x17b6a80() {
   return (neuron0x17a5c30()*0.236938);
}

double NNfunction_sb_dLcR::synapse0x17b6ac0() {
   return (neuron0x17a5f70()*-0.156082);
}

double NNfunction_sb_dLcR::synapse0x17b6b00() {
   return (neuron0x17a62b0()*-0.0649745);
}

double NNfunction_sb_dLcR::synapse0x17b6b40() {
   return (neuron0x17a65f0()*-0.069319);
}

double NNfunction_sb_dLcR::synapse0x17b6b80() {
   return (neuron0x17a6930()*1.05815);
}

double NNfunction_sb_dLcR::synapse0x17b6bc0() {
   return (neuron0x17a6c70()*0.234179);
}

double NNfunction_sb_dLcR::synapse0x17b6c00() {
   return (neuron0x17a6fb0()*-0.43259);
}

double NNfunction_sb_dLcR::synapse0x17b6c40() {
   return (neuron0x17a72f0()*-0.0408344);
}

double NNfunction_sb_dLcR::synapse0x17b6c80() {
   return (neuron0x17a7630()*0.672267);
}

double NNfunction_sb_dLcR::synapse0x17b6710() {
   return (neuron0x17a7970()*-0.149876);
}

double NNfunction_sb_dLcR::synapse0x17b6750() {
   return (neuron0x17a7ed0()*-0.565455);
}

double NNfunction_sb_dLcR::synapse0x17b6dd0() {
   return (neuron0x17a80f0()*-0.110731);
}

double NNfunction_sb_dLcR::synapse0x17b6e10() {
   return (neuron0x17a8430()*0.54532);
}

double NNfunction_sb_dLcR::synapse0x17b6e50() {
   return (neuron0x17a8770()*0.0742926);
}

double NNfunction_sb_dLcR::synapse0x17b6e90() {
   return (neuron0x17a8ab0()*0.0374213);
}

double NNfunction_sb_dLcR::synapse0x17b6ed0() {
   return (neuron0x17a8df0()*-0.0105707);
}

double NNfunction_sb_dLcR::synapse0x17b6f10() {
   return (neuron0x17a9130()*-0.489702);
}

double NNfunction_sb_dLcR::synapse0x17b7290() {
   return (neuron0x17a4570()*0.0567829);
}

double NNfunction_sb_dLcR::synapse0x17b72d0() {
   return (neuron0x17a48b0()*-0.295337);
}

double NNfunction_sb_dLcR::synapse0x17b7310() {
   return (neuron0x17a4bf0()*-0.204327);
}

double NNfunction_sb_dLcR::synapse0x17b7350() {
   return (neuron0x17a4f30()*-0.2078);
}

double NNfunction_sb_dLcR::synapse0x17b7390() {
   return (neuron0x17a5270()*0.0439926);
}

double NNfunction_sb_dLcR::synapse0x17b73d0() {
   return (neuron0x17a55b0()*0.039968);
}

double NNfunction_sb_dLcR::synapse0x17b7410() {
   return (neuron0x17a58f0()*0.0325818);
}

double NNfunction_sb_dLcR::synapse0x17b7450() {
   return (neuron0x17a5c30()*0.0955946);
}

double NNfunction_sb_dLcR::synapse0x17b7490() {
   return (neuron0x17a5f70()*0.04337);
}

double NNfunction_sb_dLcR::synapse0x17b74d0() {
   return (neuron0x17a62b0()*-0.116754);
}

double NNfunction_sb_dLcR::synapse0x17b7510() {
   return (neuron0x17a65f0()*0.0490233);
}

double NNfunction_sb_dLcR::synapse0x17b7550() {
   return (neuron0x17a6930()*-0.281503);
}

double NNfunction_sb_dLcR::synapse0x17b7590() {
   return (neuron0x17a6c70()*0.69448);
}

double NNfunction_sb_dLcR::synapse0x17b75d0() {
   return (neuron0x17a6fb0()*-0.560498);
}

double NNfunction_sb_dLcR::synapse0x17b7610() {
   return (neuron0x17a72f0()*0.173569);
}

double NNfunction_sb_dLcR::synapse0x17b7650() {
   return (neuron0x17a7630()*-0.502272);
}

double NNfunction_sb_dLcR::synapse0x17b70e0() {
   return (neuron0x17a7970()*-0.00682635);
}

double NNfunction_sb_dLcR::synapse0x17b7120() {
   return (neuron0x17a7ed0()*0.00517453);
}

double NNfunction_sb_dLcR::synapse0x17b77a0() {
   return (neuron0x17a80f0()*0.50785);
}

double NNfunction_sb_dLcR::synapse0x17b77e0() {
   return (neuron0x17a8430()*0.0821582);
}

double NNfunction_sb_dLcR::synapse0x17b7820() {
   return (neuron0x17a8770()*0.04411);
}

double NNfunction_sb_dLcR::synapse0x17b7860() {
   return (neuron0x17a8ab0()*0.0803887);
}

double NNfunction_sb_dLcR::synapse0x17b78a0() {
   return (neuron0x17a8df0()*0.00633617);
}

double NNfunction_sb_dLcR::synapse0x17b78e0() {
   return (neuron0x17a9130()*-0.00746932);
}

double NNfunction_sb_dLcR::synapse0x17b7c60() {
   return (neuron0x17a4570()*-0.300204);
}

double NNfunction_sb_dLcR::synapse0x17b7ca0() {
   return (neuron0x17a48b0()*-0.183899);
}

double NNfunction_sb_dLcR::synapse0x17b7ce0() {
   return (neuron0x17a4bf0()*0.170377);
}

double NNfunction_sb_dLcR::synapse0x17b7d20() {
   return (neuron0x17a4f30()*0.780179);
}

double NNfunction_sb_dLcR::synapse0x17b7d60() {
   return (neuron0x17a5270()*-0.689488);
}

double NNfunction_sb_dLcR::synapse0x17b7da0() {
   return (neuron0x17a55b0()*0.425923);
}

double NNfunction_sb_dLcR::synapse0x17b7de0() {
   return (neuron0x17a58f0()*0.54587);
}

double NNfunction_sb_dLcR::synapse0x17b7e20() {
   return (neuron0x17a5c30()*-0.31077);
}

double NNfunction_sb_dLcR::synapse0x17b7e60() {
   return (neuron0x17a5f70()*0.166344);
}

double NNfunction_sb_dLcR::synapse0x17b0020() {
   return (neuron0x17a62b0()*0.0387765);
}

double NNfunction_sb_dLcR::synapse0x17b0060() {
   return (neuron0x17a65f0()*0.265799);
}

double NNfunction_sb_dLcR::synapse0x17b00a0() {
   return (neuron0x17a6930()*-0.185545);
}

double NNfunction_sb_dLcR::synapse0x17b00e0() {
   return (neuron0x17a6c70()*-0.851743);
}

double NNfunction_sb_dLcR::synapse0x17b0120() {
   return (neuron0x17a6fb0()*0.236932);
}

double NNfunction_sb_dLcR::synapse0x17b0160() {
   return (neuron0x17a72f0()*-0.248122);
}

double NNfunction_sb_dLcR::synapse0x17b01a0() {
   return (neuron0x17a7630()*0.266108);
}

double NNfunction_sb_dLcR::synapse0x17b7ab0() {
   return (neuron0x17a7970()*0.866665);
}

double NNfunction_sb_dLcR::synapse0x17b7af0() {
   return (neuron0x17a7ed0()*-0.0331514);
}

double NNfunction_sb_dLcR::synapse0x17b02f0() {
   return (neuron0x17a80f0()*0.0791085);
}

double NNfunction_sb_dLcR::synapse0x17b0330() {
   return (neuron0x17a8430()*0.18714);
}

double NNfunction_sb_dLcR::synapse0x17b0370() {
   return (neuron0x17a8770()*-0.372054);
}

double NNfunction_sb_dLcR::synapse0x17b03b0() {
   return (neuron0x17a8ab0()*0.1623);
}

double NNfunction_sb_dLcR::synapse0x17b03f0() {
   return (neuron0x17a8df0()*-0.691643);
}

double NNfunction_sb_dLcR::synapse0x17b0430() {
   return (neuron0x17a9130()*0.0586278);
}

double NNfunction_sb_dLcR::synapse0x17b07b0() {
   return (neuron0x17a4570()*0.131542);
}

double NNfunction_sb_dLcR::synapse0x17b07f0() {
   return (neuron0x17a48b0()*0.204913);
}

double NNfunction_sb_dLcR::synapse0x17b0830() {
   return (neuron0x17a4bf0()*-0.337465);
}

double NNfunction_sb_dLcR::synapse0x17b0870() {
   return (neuron0x17a4f30()*0.113161);
}

double NNfunction_sb_dLcR::synapse0x17b08b0() {
   return (neuron0x17a5270()*-0.160754);
}

double NNfunction_sb_dLcR::synapse0x17b08f0() {
   return (neuron0x17a55b0()*0.0683198);
}

double NNfunction_sb_dLcR::synapse0x17b0930() {
   return (neuron0x17a58f0()*0.144125);
}

double NNfunction_sb_dLcR::synapse0x17b0970() {
   return (neuron0x17a5c30()*0.158404);
}

double NNfunction_sb_dLcR::synapse0x17b09b0() {
   return (neuron0x17a5f70()*-0.286217);
}

double NNfunction_sb_dLcR::synapse0x17b09f0() {
   return (neuron0x17a62b0()*0.386844);
}

double NNfunction_sb_dLcR::synapse0x17b0a30() {
   return (neuron0x17a65f0()*0.415492);
}

double NNfunction_sb_dLcR::synapse0x17b0a70() {
   return (neuron0x17a6930()*-0.794408);
}

double NNfunction_sb_dLcR::synapse0x17b0ab0() {
   return (neuron0x17a6c70()*0.76023);
}

double NNfunction_sb_dLcR::synapse0x17b0af0() {
   return (neuron0x17a6fb0()*0.339377);
}

double NNfunction_sb_dLcR::synapse0x17b0b30() {
   return (neuron0x17a72f0()*-0.136093);
}

double NNfunction_sb_dLcR::synapse0x17b0b70() {
   return (neuron0x17a7630()*-1.06453);
}

double NNfunction_sb_dLcR::synapse0x17b0600() {
   return (neuron0x17a7970()*0.0251577);
}

double NNfunction_sb_dLcR::synapse0x17b0640() {
   return (neuron0x17a7ed0()*-0.409653);
}

double NNfunction_sb_dLcR::synapse0x17b0cc0() {
   return (neuron0x17a80f0()*-0.255283);
}

double NNfunction_sb_dLcR::synapse0x17b0d00() {
   return (neuron0x17a8430()*0.468811);
}

double NNfunction_sb_dLcR::synapse0x17b0d40() {
   return (neuron0x17a8770()*0.2835);
}

double NNfunction_sb_dLcR::synapse0x17b0d80() {
   return (neuron0x17a8ab0()*-0.237855);
}

double NNfunction_sb_dLcR::synapse0x17b0dc0() {
   return (neuron0x17a8df0()*-0.284072);
}

double NNfunction_sb_dLcR::synapse0x17b0e00() {
   return (neuron0x17a9130()*0.0432575);
}

double NNfunction_sb_dLcR::synapse0x17b0fd0() {
   return (neuron0x17a4570()*-0.0299102);
}

double NNfunction_sb_dLcR::synapse0x17ba060() {
   return (neuron0x17a48b0()*-0.0301577);
}

double NNfunction_sb_dLcR::synapse0x17ba0a0() {
   return (neuron0x17a4bf0()*0.00297287);
}

double NNfunction_sb_dLcR::synapse0x17ba0e0() {
   return (neuron0x17a4f30()*7.6228);
}

double NNfunction_sb_dLcR::synapse0x17ba120() {
   return (neuron0x17a5270()*-0.00847606);
}

double NNfunction_sb_dLcR::synapse0x17ba160() {
   return (neuron0x17a55b0()*0.016252);
}

double NNfunction_sb_dLcR::synapse0x17ba1a0() {
   return (neuron0x17a58f0()*-0.012822);
}

double NNfunction_sb_dLcR::synapse0x17ba1e0() {
   return (neuron0x17a5c30()*-0.0155972);
}

double NNfunction_sb_dLcR::synapse0x17ba220() {
   return (neuron0x17a5f70()*0.0298861);
}

double NNfunction_sb_dLcR::synapse0x17ba260() {
   return (neuron0x17a62b0()*-0.0284068);
}

double NNfunction_sb_dLcR::synapse0x17ba2a0() {
   return (neuron0x17a65f0()*-0.0152545);
}

double NNfunction_sb_dLcR::synapse0x17ba2e0() {
   return (neuron0x17a6930()*0.779687);
}

double NNfunction_sb_dLcR::synapse0x17ba320() {
   return (neuron0x17a6c70()*0.00365391);
}

double NNfunction_sb_dLcR::synapse0x17ba360() {
   return (neuron0x17a6fb0()*0.014705);
}

double NNfunction_sb_dLcR::synapse0x17ba3a0() {
   return (neuron0x17a72f0()*0.00314793);
}

double NNfunction_sb_dLcR::synapse0x17ba3e0() {
   return (neuron0x17a7630()*0.228717);
}

double NNfunction_sb_dLcR::synapse0x17b9eb0() {
   return (neuron0x17a7970()*-0.0257587);
}

double NNfunction_sb_dLcR::synapse0x17b9ef0() {
   return (neuron0x17a7ed0()*0.00110875);
}

double NNfunction_sb_dLcR::synapse0x17ba530() {
   return (neuron0x17a80f0()*-0.0174756);
}

double NNfunction_sb_dLcR::synapse0x17ba570() {
   return (neuron0x17a8430()*0.0103994);
}

double NNfunction_sb_dLcR::synapse0x17ba5b0() {
   return (neuron0x17a8770()*0.0145143);
}

double NNfunction_sb_dLcR::synapse0x17ba5f0() {
   return (neuron0x17a8ab0()*0.00203319);
}

double NNfunction_sb_dLcR::synapse0x17ba630() {
   return (neuron0x17a8df0()*-0.0263065);
}

double NNfunction_sb_dLcR::synapse0x17ba670() {
   return (neuron0x17a9130()*0.0253271);
}

double NNfunction_sb_dLcR::synapse0x17ba9f0() {
   return (neuron0x17a4570()*-0.0145162);
}

double NNfunction_sb_dLcR::synapse0x17baa30() {
   return (neuron0x17a48b0()*0.00324976);
}

double NNfunction_sb_dLcR::synapse0x17baa70() {
   return (neuron0x17a4bf0()*0.0138111);
}

double NNfunction_sb_dLcR::synapse0x17baab0() {
   return (neuron0x17a4f30()*0.0925184);
}

double NNfunction_sb_dLcR::synapse0x17baaf0() {
   return (neuron0x17a5270()*-0.0160039);
}

double NNfunction_sb_dLcR::synapse0x17bab30() {
   return (neuron0x17a55b0()*0.0279462);
}

double NNfunction_sb_dLcR::synapse0x17bab70() {
   return (neuron0x17a58f0()*-0.00480378);
}

double NNfunction_sb_dLcR::synapse0x17babb0() {
   return (neuron0x17a5c30()*-0.0128142);
}

double NNfunction_sb_dLcR::synapse0x17babf0() {
   return (neuron0x17a5f70()*-0.00963816);
}

double NNfunction_sb_dLcR::synapse0x17bac30() {
   return (neuron0x17a62b0()*-0.0335053);
}

double NNfunction_sb_dLcR::synapse0x17bac70() {
   return (neuron0x17a65f0()*-0.0100451);
}

double NNfunction_sb_dLcR::synapse0x17bacb0() {
   return (neuron0x17a6930()*-0.945904);
}

double NNfunction_sb_dLcR::synapse0x17bacf0() {
   return (neuron0x17a6c70()*0.011306);
}

double NNfunction_sb_dLcR::synapse0x17bad30() {
   return (neuron0x17a6fb0()*-0.00936157);
}

double NNfunction_sb_dLcR::synapse0x17bad70() {
   return (neuron0x17a72f0()*0.0372264);
}

double NNfunction_sb_dLcR::synapse0x17badb0() {
   return (neuron0x17a7630()*-0.817173);
}

double NNfunction_sb_dLcR::synapse0x17ba840() {
   return (neuron0x17a7970()*0.00611487);
}

double NNfunction_sb_dLcR::synapse0x17ba880() {
   return (neuron0x17a7ed0()*-0.00944376);
}

double NNfunction_sb_dLcR::synapse0x17baf00() {
   return (neuron0x17a80f0()*0.00841528);
}

double NNfunction_sb_dLcR::synapse0x17baf40() {
   return (neuron0x17a8430()*-0.008728);
}

double NNfunction_sb_dLcR::synapse0x17baf80() {
   return (neuron0x17a8770()*0.0106905);
}

double NNfunction_sb_dLcR::synapse0x17bafc0() {
   return (neuron0x17a8ab0()*-0.0145599);
}

double NNfunction_sb_dLcR::synapse0x17bb000() {
   return (neuron0x17a8df0()*0.0247433);
}

double NNfunction_sb_dLcR::synapse0x17bb040() {
   return (neuron0x17a9130()*0.00250602);
}

double NNfunction_sb_dLcR::synapse0x17bb3c0() {
   return (neuron0x17a4570()*0.0151157);
}

double NNfunction_sb_dLcR::synapse0x17bb400() {
   return (neuron0x17a48b0()*-0.0291264);
}

double NNfunction_sb_dLcR::synapse0x17bb440() {
   return (neuron0x17a4bf0()*0.0281403);
}

double NNfunction_sb_dLcR::synapse0x17bb480() {
   return (neuron0x17a4f30()*-0.452227);
}

double NNfunction_sb_dLcR::synapse0x17bb4c0() {
   return (neuron0x17a5270()*0.00209893);
}

double NNfunction_sb_dLcR::synapse0x17bb500() {
   return (neuron0x17a55b0()*-0.224013);
}

double NNfunction_sb_dLcR::synapse0x17bb540() {
   return (neuron0x17a58f0()*0.0356375);
}

double NNfunction_sb_dLcR::synapse0x17bb580() {
   return (neuron0x17a5c30()*-0.103237);
}

double NNfunction_sb_dLcR::synapse0x17bb5c0() {
   return (neuron0x17a5f70()*-0.0915916);
}

double NNfunction_sb_dLcR::synapse0x17bb600() {
   return (neuron0x17a62b0()*0.0662383);
}

double NNfunction_sb_dLcR::synapse0x17bb640() {
   return (neuron0x17a65f0()*-0.0676009);
}

double NNfunction_sb_dLcR::synapse0x17bb680() {
   return (neuron0x17a6930()*1.81337);
}

double NNfunction_sb_dLcR::synapse0x17bb6c0() {
   return (neuron0x17a6c70()*-0.0885447);
}

double NNfunction_sb_dLcR::synapse0x17bb700() {
   return (neuron0x17a6fb0()*0.0203513);
}

double NNfunction_sb_dLcR::synapse0x17bb740() {
   return (neuron0x17a72f0()*0.0247326);
}

double NNfunction_sb_dLcR::synapse0x17bb780() {
   return (neuron0x17a7630()*0.654979);
}

double NNfunction_sb_dLcR::synapse0x17bb210() {
   return (neuron0x17a7970()*-0.130726);
}

double NNfunction_sb_dLcR::synapse0x17bb250() {
   return (neuron0x17a7ed0()*0.116882);
}

double NNfunction_sb_dLcR::synapse0x17bb8d0() {
   return (neuron0x17a80f0()*-0.135568);
}

double NNfunction_sb_dLcR::synapse0x17bb910() {
   return (neuron0x17a8430()*-0.0534255);
}

double NNfunction_sb_dLcR::synapse0x17bb950() {
   return (neuron0x17a8770()*-0.0925614);
}

double NNfunction_sb_dLcR::synapse0x17bb990() {
   return (neuron0x17a8ab0()*0.0721199);
}

double NNfunction_sb_dLcR::synapse0x17bb9d0() {
   return (neuron0x17a8df0()*-0.14031);
}

double NNfunction_sb_dLcR::synapse0x17bba10() {
   return (neuron0x17a9130()*0.0710919);
}

double NNfunction_sb_dLcR::synapse0x17bbd90() {
   return (neuron0x17a4570()*0.303397);
}

double NNfunction_sb_dLcR::synapse0x17bbdd0() {
   return (neuron0x17a48b0()*-0.150302);
}

double NNfunction_sb_dLcR::synapse0x17bbe10() {
   return (neuron0x17a4bf0()*-0.66414);
}

double NNfunction_sb_dLcR::synapse0x17bbe50() {
   return (neuron0x17a4f30()*0.00184806);
}

double NNfunction_sb_dLcR::synapse0x17bbe90() {
   return (neuron0x17a5270()*0.340151);
}

double NNfunction_sb_dLcR::synapse0x17bbed0() {
   return (neuron0x17a55b0()*-0.360721);
}

double NNfunction_sb_dLcR::synapse0x17bbf10() {
   return (neuron0x17a58f0()*-0.00180569);
}

double NNfunction_sb_dLcR::synapse0x17bbf50() {
   return (neuron0x17a5c30()*-0.145547);
}

double NNfunction_sb_dLcR::synapse0x17bbf90() {
   return (neuron0x17a5f70()*-0.20689);
}

double NNfunction_sb_dLcR::synapse0x17bbfd0() {
   return (neuron0x17a62b0()*0.361579);
}

double NNfunction_sb_dLcR::synapse0x17bc010() {
   return (neuron0x17a65f0()*0.1438);
}

double NNfunction_sb_dLcR::synapse0x17bc050() {
   return (neuron0x17a6930()*0.286983);
}

double NNfunction_sb_dLcR::synapse0x17bc090() {
   return (neuron0x17a6c70()*0.302433);
}

double NNfunction_sb_dLcR::synapse0x17bc0d0() {
   return (neuron0x17a6fb0()*-0.583481);
}

double NNfunction_sb_dLcR::synapse0x17bc110() {
   return (neuron0x17a72f0()*0.421571);
}

double NNfunction_sb_dLcR::synapse0x17bc150() {
   return (neuron0x17a7630()*-0.548326);
}

double NNfunction_sb_dLcR::synapse0x17bbbe0() {
   return (neuron0x17a7970()*-0.711823);
}

double NNfunction_sb_dLcR::synapse0x17bbc20() {
   return (neuron0x17a7ed0()*0.0159443);
}

double NNfunction_sb_dLcR::synapse0x17bc2a0() {
   return (neuron0x17a80f0()*-0.769689);
}

double NNfunction_sb_dLcR::synapse0x17bc2e0() {
   return (neuron0x17a8430()*-0.458593);
}

double NNfunction_sb_dLcR::synapse0x17bc320() {
   return (neuron0x17a8770()*-0.207642);
}

double NNfunction_sb_dLcR::synapse0x17bc360() {
   return (neuron0x17a8ab0()*0.938444);
}

double NNfunction_sb_dLcR::synapse0x17bc3a0() {
   return (neuron0x17a8df0()*-0.313202);
}

double NNfunction_sb_dLcR::synapse0x17bc3e0() {
   return (neuron0x17a9130()*0.538907);
}

double NNfunction_sb_dLcR::synapse0x17bc760() {
   return (neuron0x17a4570()*0.0197913);
}

double NNfunction_sb_dLcR::synapse0x17bc7a0() {
   return (neuron0x17a48b0()*-0.0566772);
}

double NNfunction_sb_dLcR::synapse0x17bc7e0() {
   return (neuron0x17a4bf0()*0.0100505);
}

double NNfunction_sb_dLcR::synapse0x17bc820() {
   return (neuron0x17a4f30()*-1.91854);
}

double NNfunction_sb_dLcR::synapse0x17bc860() {
   return (neuron0x17a5270()*-0.086088);
}

double NNfunction_sb_dLcR::synapse0x17bc8a0() {
   return (neuron0x17a55b0()*0.0336219);
}

double NNfunction_sb_dLcR::synapse0x17bc8e0() {
   return (neuron0x17a58f0()*-0.0516966);
}

double NNfunction_sb_dLcR::synapse0x17bc920() {
   return (neuron0x17a5c30()*-0.0148597);
}

double NNfunction_sb_dLcR::synapse0x17bc960() {
   return (neuron0x17a5f70()*0.0866054);
}

double NNfunction_sb_dLcR::synapse0x17bc9a0() {
   return (neuron0x17a62b0()*0.0147733);
}

double NNfunction_sb_dLcR::synapse0x17bc9e0() {
   return (neuron0x17a65f0()*0.0275605);
}

double NNfunction_sb_dLcR::synapse0x17bca20() {
   return (neuron0x17a6930()*0.248815);
}

double NNfunction_sb_dLcR::synapse0x17bca60() {
   return (neuron0x17a6c70()*0.0377686);
}

double NNfunction_sb_dLcR::synapse0x17bcaa0() {
   return (neuron0x17a6fb0()*0.0044061);
}

double NNfunction_sb_dLcR::synapse0x17bcae0() {
   return (neuron0x17a72f0()*0.0373796);
}

double NNfunction_sb_dLcR::synapse0x17bcb20() {
   return (neuron0x17a7630()*-0.102132);
}

double NNfunction_sb_dLcR::synapse0x17bc5b0() {
   return (neuron0x17a7970()*0.0390222);
}

double NNfunction_sb_dLcR::synapse0x17bc5f0() {
   return (neuron0x17a7ed0()*0.0797985);
}

double NNfunction_sb_dLcR::synapse0x17bcc70() {
   return (neuron0x17a80f0()*0.0281922);
}

double NNfunction_sb_dLcR::synapse0x17bccb0() {
   return (neuron0x17a8430()*0.0725206);
}

double NNfunction_sb_dLcR::synapse0x17bccf0() {
   return (neuron0x17a8770()*-0.0494976);
}

double NNfunction_sb_dLcR::synapse0x17bcd30() {
   return (neuron0x17a8ab0()*-0.0345319);
}

double NNfunction_sb_dLcR::synapse0x17bcd70() {
   return (neuron0x17a8df0()*0.00914938);
}

double NNfunction_sb_dLcR::synapse0x17bcdb0() {
   return (neuron0x17a9130()*-0.0335338);
}

double NNfunction_sb_dLcR::synapse0x17bd130() {
   return (neuron0x17a4570()*-0.0284959);
}

double NNfunction_sb_dLcR::synapse0x17bd170() {
   return (neuron0x17a48b0()*0.203882);
}

double NNfunction_sb_dLcR::synapse0x17bd1b0() {
   return (neuron0x17a4bf0()*0.075139);
}

double NNfunction_sb_dLcR::synapse0x17bd1f0() {
   return (neuron0x17a4f30()*-1.6064);
}

double NNfunction_sb_dLcR::synapse0x17bd230() {
   return (neuron0x17a5270()*-0.00155326);
}

double NNfunction_sb_dLcR::synapse0x17bd270() {
   return (neuron0x17a55b0()*-0.0880974);
}

double NNfunction_sb_dLcR::synapse0x17bd2b0() {
   return (neuron0x17a58f0()*-0.0638952);
}

double NNfunction_sb_dLcR::synapse0x17bd2f0() {
   return (neuron0x17a5c30()*0.00540949);
}

double NNfunction_sb_dLcR::synapse0x17bd330() {
   return (neuron0x17a5f70()*0.0694685);
}

double NNfunction_sb_dLcR::synapse0x17bd370() {
   return (neuron0x17a62b0()*0.0586179);
}

double NNfunction_sb_dLcR::synapse0x17bd3b0() {
   return (neuron0x17a65f0()*0.126761);
}

double NNfunction_sb_dLcR::synapse0x17bd3f0() {
   return (neuron0x17a6930()*-0.898035);
}

double NNfunction_sb_dLcR::synapse0x17bd430() {
   return (neuron0x17a6c70()*-0.00588233);
}

double NNfunction_sb_dLcR::synapse0x17bd470() {
   return (neuron0x17a6fb0()*-0.06876);
}

double NNfunction_sb_dLcR::synapse0x17bd4b0() {
   return (neuron0x17a72f0()*-0.101057);
}

double NNfunction_sb_dLcR::synapse0x17bd4f0() {
   return (neuron0x17a7630()*0.10718);
}

double NNfunction_sb_dLcR::synapse0x17bcf80() {
   return (neuron0x17a7970()*-0.0264498);
}

double NNfunction_sb_dLcR::synapse0x17bcfc0() {
   return (neuron0x17a7ed0()*0.0491388);
}

double NNfunction_sb_dLcR::synapse0x17bd640() {
   return (neuron0x17a80f0()*0.126323);
}

double NNfunction_sb_dLcR::synapse0x17bd680() {
   return (neuron0x17a8430()*0.0552159);
}

double NNfunction_sb_dLcR::synapse0x17bd6c0() {
   return (neuron0x17a8770()*-0.011367);
}

double NNfunction_sb_dLcR::synapse0x17bd700() {
   return (neuron0x17a8ab0()*-0.0759024);
}

double NNfunction_sb_dLcR::synapse0x17bd740() {
   return (neuron0x17a8df0()*0.06114);
}

double NNfunction_sb_dLcR::synapse0x17bd780() {
   return (neuron0x17a9130()*-0.140544);
}

double NNfunction_sb_dLcR::synapse0x17bdb00() {
   return (neuron0x17a4570()*-0.0105375);
}

double NNfunction_sb_dLcR::synapse0x17bdb40() {
   return (neuron0x17a48b0()*0.00237785);
}

double NNfunction_sb_dLcR::synapse0x17bdb80() {
   return (neuron0x17a4bf0()*-0.00197683);
}

double NNfunction_sb_dLcR::synapse0x17bdbc0() {
   return (neuron0x17a4f30()*-0.0234039);
}

double NNfunction_sb_dLcR::synapse0x17bdc00() {
   return (neuron0x17a5270()*-0.0123346);
}

double NNfunction_sb_dLcR::synapse0x17bdc40() {
   return (neuron0x17a55b0()*-0.00156957);
}

double NNfunction_sb_dLcR::synapse0x17bdc80() {
   return (neuron0x17a58f0()*0.0056053);
}

double NNfunction_sb_dLcR::synapse0x17bdcc0() {
   return (neuron0x17a5c30()*-0.0091956);
}

double NNfunction_sb_dLcR::synapse0x17bdd00() {
   return (neuron0x17a5f70()*-0.00447936);
}

double NNfunction_sb_dLcR::synapse0x17bdd40() {
   return (neuron0x17a62b0()*-0.00648484);
}

double NNfunction_sb_dLcR::synapse0x17bdd80() {
   return (neuron0x17a65f0()*-0.0058135);
}

double NNfunction_sb_dLcR::synapse0x17bddc0() {
   return (neuron0x17a6930()*0.925097);
}

double NNfunction_sb_dLcR::synapse0x17bde00() {
   return (neuron0x17a6c70()*0.0031565);
}

double NNfunction_sb_dLcR::synapse0x17bde40() {
   return (neuron0x17a6fb0()*0.00965332);
}

double NNfunction_sb_dLcR::synapse0x17bde80() {
   return (neuron0x17a72f0()*0.0231467);
}

double NNfunction_sb_dLcR::synapse0x17bdec0() {
   return (neuron0x17a7630()*-0.739378);
}

double NNfunction_sb_dLcR::synapse0x17bd950() {
   return (neuron0x17a7970()*0.00487442);
}

double NNfunction_sb_dLcR::synapse0x17bd990() {
   return (neuron0x17a7ed0()*0.0182804);
}

double NNfunction_sb_dLcR::synapse0x17be010() {
   return (neuron0x17a80f0()*-0.00769791);
}

double NNfunction_sb_dLcR::synapse0x17be050() {
   return (neuron0x17a8430()*-0.009603);
}

double NNfunction_sb_dLcR::synapse0x17be090() {
   return (neuron0x17a8770()*-0.0130061);
}

double NNfunction_sb_dLcR::synapse0x17be0d0() {
   return (neuron0x17a8ab0()*0.00283959);
}

double NNfunction_sb_dLcR::synapse0x17be110() {
   return (neuron0x17a8df0()*-0.000296909);
}

double NNfunction_sb_dLcR::synapse0x17be150() {
   return (neuron0x17a9130()*0.00538157);
}

double NNfunction_sb_dLcR::synapse0x17be4d0() {
   return (neuron0x17a4570()*-0.609089);
}

double NNfunction_sb_dLcR::synapse0x17be510() {
   return (neuron0x17a48b0()*0.239351);
}

double NNfunction_sb_dLcR::synapse0x17be550() {
   return (neuron0x17a4bf0()*-0.0905701);
}

double NNfunction_sb_dLcR::synapse0x17be590() {
   return (neuron0x17a4f30()*-0.00562743);
}

double NNfunction_sb_dLcR::synapse0x17be5d0() {
   return (neuron0x17a5270()*0.454489);
}

double NNfunction_sb_dLcR::synapse0x17be610() {
   return (neuron0x17a55b0()*-0.0688834);
}

double NNfunction_sb_dLcR::synapse0x17be650() {
   return (neuron0x17a58f0()*-0.247142);
}

double NNfunction_sb_dLcR::synapse0x17be690() {
   return (neuron0x17a5c30()*-0.265287);
}

double NNfunction_sb_dLcR::synapse0x17be6d0() {
   return (neuron0x17a5f70()*-1.03097);
}

double NNfunction_sb_dLcR::synapse0x17be710() {
   return (neuron0x17a62b0()*-0.474455);
}

double NNfunction_sb_dLcR::synapse0x17be750() {
   return (neuron0x17a65f0()*-0.521503);
}

double NNfunction_sb_dLcR::synapse0x17be790() {
   return (neuron0x17a6930()*-0.864849);
}

double NNfunction_sb_dLcR::synapse0x17be7d0() {
   return (neuron0x17a6c70()*-0.000683335);
}

double NNfunction_sb_dLcR::synapse0x17be810() {
   return (neuron0x17a6fb0()*-0.181359);
}

double NNfunction_sb_dLcR::synapse0x17be850() {
   return (neuron0x17a72f0()*0.270825);
}

double NNfunction_sb_dLcR::synapse0x17be890() {
   return (neuron0x17a7630()*0.307695);
}

double NNfunction_sb_dLcR::synapse0x17be320() {
   return (neuron0x17a7970()*-0.112987);
}

double NNfunction_sb_dLcR::synapse0x17be360() {
   return (neuron0x17a7ed0()*-0.509584);
}

double NNfunction_sb_dLcR::synapse0x17be9e0() {
   return (neuron0x17a80f0()*-0.675147);
}

double NNfunction_sb_dLcR::synapse0x17bea20() {
   return (neuron0x17a8430()*-0.103579);
}

double NNfunction_sb_dLcR::synapse0x17bea60() {
   return (neuron0x17a8770()*0.218335);
}

double NNfunction_sb_dLcR::synapse0x17beaa0() {
   return (neuron0x17a8ab0()*0.246787);
}

double NNfunction_sb_dLcR::synapse0x17beae0() {
   return (neuron0x17a8df0()*-0.0277478);
}

double NNfunction_sb_dLcR::synapse0x17beb20() {
   return (neuron0x17a9130()*-0.0766468);
}

double NNfunction_sb_dLcR::synapse0x17beea0() {
   return (neuron0x17a4570()*-0.00700379);
}

double NNfunction_sb_dLcR::synapse0x17b3470() {
   return (neuron0x17a48b0()*-0.159546);
}

double NNfunction_sb_dLcR::synapse0x17b34b0() {
   return (neuron0x17a4bf0()*0.479956);
}

double NNfunction_sb_dLcR::synapse0x17b34f0() {
   return (neuron0x17a4f30()*0.0416671);
}

double NNfunction_sb_dLcR::synapse0x17b3740() {
   return (neuron0x17a5270()*-0.0202337);
}

double NNfunction_sb_dLcR::synapse0x17b3780() {
   return (neuron0x17a55b0()*-0.00979633);
}

double NNfunction_sb_dLcR::synapse0x17b37c0() {
   return (neuron0x17a58f0()*0.00188205);
}

double NNfunction_sb_dLcR::synapse0x17b3a10() {
   return (neuron0x17a5c30()*-0.0139497);
}

double NNfunction_sb_dLcR::synapse0x17b3a50() {
   return (neuron0x17a5f70()*0.00894946);
}

double NNfunction_sb_dLcR::synapse0x17b3ca0() {
   return (neuron0x17a62b0()*0.00437742);
}

double NNfunction_sb_dLcR::synapse0x17b3ce0() {
   return (neuron0x17a65f0()*0.000204752);
}

double NNfunction_sb_dLcR::synapse0x17b3d20() {
   return (neuron0x17a6930()*0.0396352);
}

double NNfunction_sb_dLcR::synapse0x17b3f70() {
   return (neuron0x17a6c70()*0.0854081);
}

double NNfunction_sb_dLcR::synapse0x17b3fb0() {
   return (neuron0x17a6fb0()*0.0297133);
}

double NNfunction_sb_dLcR::synapse0x17b4200() {
   return (neuron0x17a72f0()*0.0262454);
}

double NNfunction_sb_dLcR::synapse0x17b4240() {
   return (neuron0x17a7630()*0.149431);
}

double NNfunction_sb_dLcR::synapse0x17becf0() {
   return (neuron0x17a7970()*0.00576065);
}

double NNfunction_sb_dLcR::synapse0x17bed30() {
   return (neuron0x17a7ed0()*0.0393011);
}

double NNfunction_sb_dLcR::synapse0x17b4390() {
   return (neuron0x17a80f0()*-0.0161728);
}

double NNfunction_sb_dLcR::synapse0x17b48a0() {
   return (neuron0x17a8430()*-0.0129729);
}

double NNfunction_sb_dLcR::synapse0x17b48e0() {
   return (neuron0x17a8770()*0.0039213);
}

double NNfunction_sb_dLcR::synapse0x17b4920() {
   return (neuron0x17a8ab0()*-0.00237251);
}

double NNfunction_sb_dLcR::synapse0x17b4b70() {
   return (neuron0x17a8df0()*-0.014181);
}

double NNfunction_sb_dLcR::synapse0x17b4bb0() {
   return (neuron0x17a9130()*0.0355798);
}

double NNfunction_sb_dLcR::synapse0x17b4460() {
   return (neuron0x17a4570()*0.0282881);
}

double NNfunction_sb_dLcR::synapse0x17b44a0() {
   return (neuron0x17a48b0()*0.0803877);
}

double NNfunction_sb_dLcR::synapse0x17b44e0() {
   return (neuron0x17a4bf0()*-0.0201513);
}

double NNfunction_sb_dLcR::synapse0x17b4520() {
   return (neuron0x17a4f30()*-0.0520207);
}

double NNfunction_sb_dLcR::synapse0x17b4ea0() {
   return (neuron0x17a5270()*0.0208813);
}

double NNfunction_sb_dLcR::synapse0x17c11f0() {
   return (neuron0x17a55b0()*-0.628941);
}

double NNfunction_sb_dLcR::synapse0x17c1230() {
   return (neuron0x17a58f0()*-0.145415);
}

double NNfunction_sb_dLcR::synapse0x17c1270() {
   return (neuron0x17a5c30()*0.00525824);
}

double NNfunction_sb_dLcR::synapse0x17c12b0() {
   return (neuron0x17a5f70()*0.0401321);
}

double NNfunction_sb_dLcR::synapse0x17c12f0() {
   return (neuron0x17a62b0()*0.00890093);
}

double NNfunction_sb_dLcR::synapse0x17c1330() {
   return (neuron0x17a65f0()*0.00175224);
}

double NNfunction_sb_dLcR::synapse0x17c1370() {
   return (neuron0x17a6930()*0.18593);
}

double NNfunction_sb_dLcR::synapse0x17c13b0() {
   return (neuron0x17a6c70()*-0.0320713);
}

double NNfunction_sb_dLcR::synapse0x17c13f0() {
   return (neuron0x17a6fb0()*0.0557665);
}

double NNfunction_sb_dLcR::synapse0x17c1430() {
   return (neuron0x17a72f0()*-0.0688964);
}

double NNfunction_sb_dLcR::synapse0x17c1470() {
   return (neuron0x17a7630()*2.82471);
}

double NNfunction_sb_dLcR::synapse0x17b4d80() {
   return (neuron0x17a7970()*-0.0007244);
}

double NNfunction_sb_dLcR::synapse0x17b4dc0() {
   return (neuron0x17a7ed0()*0.0974718);
}

double NNfunction_sb_dLcR::synapse0x17c15c0() {
   return (neuron0x17a80f0()*-0.0830709);
}

double NNfunction_sb_dLcR::synapse0x17c1600() {
   return (neuron0x17a8430()*0.0148406);
}

double NNfunction_sb_dLcR::synapse0x17c1640() {
   return (neuron0x17a8770()*-0.0905421);
}

double NNfunction_sb_dLcR::synapse0x17c1680() {
   return (neuron0x17a8ab0()*0.0254666);
}

double NNfunction_sb_dLcR::synapse0x17c16c0() {
   return (neuron0x17a8df0()*-0.0396478);
}

double NNfunction_sb_dLcR::synapse0x17c1700() {
   return (neuron0x17a9130()*-0.0188078);
}

double NNfunction_sb_dLcR::synapse0x17c1a80() {
   return (neuron0x17a4570()*-0.00588566);
}

double NNfunction_sb_dLcR::synapse0x17c1ac0() {
   return (neuron0x17a48b0()*0.374857);
}

double NNfunction_sb_dLcR::synapse0x17c1b00() {
   return (neuron0x17a4bf0()*0.333735);
}

double NNfunction_sb_dLcR::synapse0x17c1b40() {
   return (neuron0x17a4f30()*0.277609);
}

double NNfunction_sb_dLcR::synapse0x17c1b80() {
   return (neuron0x17a5270()*-0.0348962);
}

double NNfunction_sb_dLcR::synapse0x17c1bc0() {
   return (neuron0x17a55b0()*-0.0047684);
}

double NNfunction_sb_dLcR::synapse0x17c1c00() {
   return (neuron0x17a58f0()*-0.00297031);
}

double NNfunction_sb_dLcR::synapse0x17c1c40() {
   return (neuron0x17a5c30()*-0.0032732);
}

double NNfunction_sb_dLcR::synapse0x17c1c80() {
   return (neuron0x17a5f70()*-0.00696429);
}

double NNfunction_sb_dLcR::synapse0x17c1cc0() {
   return (neuron0x17a62b0()*-0.0347431);
}

double NNfunction_sb_dLcR::synapse0x17c1d00() {
   return (neuron0x17a65f0()*0.0151591);
}

double NNfunction_sb_dLcR::synapse0x17c1d40() {
   return (neuron0x17a6930()*-0.0854656);
}

double NNfunction_sb_dLcR::synapse0x17c1d80() {
   return (neuron0x17a6c70()*0.0558414);
}

double NNfunction_sb_dLcR::synapse0x17c1dc0() {
   return (neuron0x17a6fb0()*-0.0360285);
}

double NNfunction_sb_dLcR::synapse0x17c1e00() {
   return (neuron0x17a72f0()*0.032254);
}

double NNfunction_sb_dLcR::synapse0x17c1e40() {
   return (neuron0x17a7630()*-0.0170825);
}

double NNfunction_sb_dLcR::synapse0x17c18d0() {
   return (neuron0x17a7970()*-0.00455287);
}

double NNfunction_sb_dLcR::synapse0x17c1910() {
   return (neuron0x17a7ed0()*0.0235218);
}

double NNfunction_sb_dLcR::synapse0x17c1f90() {
   return (neuron0x17a80f0()*0.145504);
}

double NNfunction_sb_dLcR::synapse0x17c1fd0() {
   return (neuron0x17a8430()*-0.0766307);
}

double NNfunction_sb_dLcR::synapse0x17c2010() {
   return (neuron0x17a8770()*0.00685825);
}

double NNfunction_sb_dLcR::synapse0x17c2050() {
   return (neuron0x17a8ab0()*-0.0487042);
}

double NNfunction_sb_dLcR::synapse0x17c2090() {
   return (neuron0x17a8df0()*-0.0257881);
}

double NNfunction_sb_dLcR::synapse0x17c20d0() {
   return (neuron0x17a9130()*-0.0311213);
}

double NNfunction_sb_dLcR::synapse0x17c2450() {
   return (neuron0x17a4570()*-0.108151);
}

double NNfunction_sb_dLcR::synapse0x17c2490() {
   return (neuron0x17a48b0()*-0.175526);
}

double NNfunction_sb_dLcR::synapse0x17c24d0() {
   return (neuron0x17a4bf0()*-0.142057);
}

double NNfunction_sb_dLcR::synapse0x17c2510() {
   return (neuron0x17a4f30()*-1.2825);
}

double NNfunction_sb_dLcR::synapse0x17c2550() {
   return (neuron0x17a5270()*-0.0727744);
}

double NNfunction_sb_dLcR::synapse0x17c2590() {
   return (neuron0x17a55b0()*-0.0252671);
}

double NNfunction_sb_dLcR::synapse0x17c25d0() {
   return (neuron0x17a58f0()*0.454421);
}

double NNfunction_sb_dLcR::synapse0x17c2610() {
   return (neuron0x17a5c30()*-0.175269);
}

double NNfunction_sb_dLcR::synapse0x17c2650() {
   return (neuron0x17a5f70()*-0.0233004);
}

double NNfunction_sb_dLcR::synapse0x17c2690() {
   return (neuron0x17a62b0()*-0.0280669);
}

double NNfunction_sb_dLcR::synapse0x17c26d0() {
   return (neuron0x17a65f0()*-0.178919);
}

double NNfunction_sb_dLcR::synapse0x17c2710() {
   return (neuron0x17a6930()*-0.247019);
}

double NNfunction_sb_dLcR::synapse0x17c2750() {
   return (neuron0x17a6c70()*0.0281316);
}

double NNfunction_sb_dLcR::synapse0x17c2790() {
   return (neuron0x17a6fb0()*0.0582195);
}

double NNfunction_sb_dLcR::synapse0x17c27d0() {
   return (neuron0x17a72f0()*0.268468);
}

double NNfunction_sb_dLcR::synapse0x17c2810() {
   return (neuron0x17a7630()*0.0753128);
}

double NNfunction_sb_dLcR::synapse0x17c22a0() {
   return (neuron0x17a7970()*0.0718862);
}

double NNfunction_sb_dLcR::synapse0x17c22e0() {
   return (neuron0x17a7ed0()*0.0157779);
}

double NNfunction_sb_dLcR::synapse0x17c2960() {
   return (neuron0x17a80f0()*-0.214356);
}

double NNfunction_sb_dLcR::synapse0x17c29a0() {
   return (neuron0x17a8430()*0.0435623);
}

double NNfunction_sb_dLcR::synapse0x17c29e0() {
   return (neuron0x17a8770()*0.0266063);
}

double NNfunction_sb_dLcR::synapse0x17c2a20() {
   return (neuron0x17a8ab0()*-0.0867016);
}

double NNfunction_sb_dLcR::synapse0x17c2a60() {
   return (neuron0x17a8df0()*0.176686);
}

double NNfunction_sb_dLcR::synapse0x17c2aa0() {
   return (neuron0x17a9130()*0.169788);
}

double NNfunction_sb_dLcR::synapse0x17c2e20() {
   return (neuron0x17a4570()*-0.209321);
}

double NNfunction_sb_dLcR::synapse0x17c2e60() {
   return (neuron0x17a48b0()*-0.464933);
}

double NNfunction_sb_dLcR::synapse0x17c2ea0() {
   return (neuron0x17a4bf0()*-0.639403);
}

double NNfunction_sb_dLcR::synapse0x17c2ee0() {
   return (neuron0x17a4f30()*-0.252026);
}

double NNfunction_sb_dLcR::synapse0x17c2f20() {
   return (neuron0x17a5270()*0.0484679);
}

double NNfunction_sb_dLcR::synapse0x17c2f60() {
   return (neuron0x17a55b0()*0.00934);
}

double NNfunction_sb_dLcR::synapse0x17c2fa0() {
   return (neuron0x17a58f0()*0.0742949);
}

double NNfunction_sb_dLcR::synapse0x17c2fe0() {
   return (neuron0x17a5c30()*-0.0981729);
}

double NNfunction_sb_dLcR::synapse0x17c3020() {
   return (neuron0x17a5f70()*0.0127302);
}

double NNfunction_sb_dLcR::synapse0x17c3060() {
   return (neuron0x17a62b0()*-0.0201521);
}

double NNfunction_sb_dLcR::synapse0x17c30a0() {
   return (neuron0x17a65f0()*-0.2409);
}

double NNfunction_sb_dLcR::synapse0x17c30e0() {
   return (neuron0x17a6930()*-0.0163152);
}

double NNfunction_sb_dLcR::synapse0x17c3120() {
   return (neuron0x17a6c70()*0.151873);
}

double NNfunction_sb_dLcR::synapse0x17c3160() {
   return (neuron0x17a6fb0()*0.0127506);
}

double NNfunction_sb_dLcR::synapse0x17c31a0() {
   return (neuron0x17a72f0()*-0.00688542);
}

double NNfunction_sb_dLcR::synapse0x17c31e0() {
   return (neuron0x17a7630()*-0.604141);
}

double NNfunction_sb_dLcR::synapse0x17c2c70() {
   return (neuron0x17a7970()*-0.00712794);
}

double NNfunction_sb_dLcR::synapse0x17c2cb0() {
   return (neuron0x17a7ed0()*0.274695);
}

double NNfunction_sb_dLcR::synapse0x17c3330() {
   return (neuron0x17a80f0()*-0.38375);
}

double NNfunction_sb_dLcR::synapse0x17c3370() {
   return (neuron0x17a8430()*-0.901021);
}

double NNfunction_sb_dLcR::synapse0x17c33b0() {
   return (neuron0x17a8770()*0.0559651);
}

double NNfunction_sb_dLcR::synapse0x17c33f0() {
   return (neuron0x17a8ab0()*0.121853);
}

double NNfunction_sb_dLcR::synapse0x17c3430() {
   return (neuron0x17a8df0()*-0.351639);
}

double NNfunction_sb_dLcR::synapse0x17c3470() {
   return (neuron0x17a9130()*0.199851);
}

double NNfunction_sb_dLcR::synapse0x17c37f0() {
   return (neuron0x17a4570()*0.0921528);
}

double NNfunction_sb_dLcR::synapse0x17c3830() {
   return (neuron0x17a48b0()*0.201729);
}

double NNfunction_sb_dLcR::synapse0x17c3870() {
   return (neuron0x17a4bf0()*-0.0843207);
}

double NNfunction_sb_dLcR::synapse0x17c38b0() {
   return (neuron0x17a4f30()*0.0974576);
}

double NNfunction_sb_dLcR::synapse0x17c38f0() {
   return (neuron0x17a5270()*0.0617246);
}

double NNfunction_sb_dLcR::synapse0x17c3930() {
   return (neuron0x17a55b0()*-0.610111);
}

double NNfunction_sb_dLcR::synapse0x17c3970() {
   return (neuron0x17a58f0()*-0.447486);
}

double NNfunction_sb_dLcR::synapse0x17c39b0() {
   return (neuron0x17a5c30()*0.73857);
}

double NNfunction_sb_dLcR::synapse0x17c39f0() {
   return (neuron0x17a5f70()*0.0946923);
}

double NNfunction_sb_dLcR::synapse0x17c3a30() {
   return (neuron0x17a62b0()*-0.209394);
}

double NNfunction_sb_dLcR::synapse0x17c3a70() {
   return (neuron0x17a65f0()*0.0186993);
}

double NNfunction_sb_dLcR::synapse0x17c3ab0() {
   return (neuron0x17a6930()*-0.342751);
}

double NNfunction_sb_dLcR::synapse0x17c3af0() {
   return (neuron0x17a6c70()*0.475627);
}

double NNfunction_sb_dLcR::synapse0x17c3b30() {
   return (neuron0x17a6fb0()*-0.133736);
}

double NNfunction_sb_dLcR::synapse0x17c3b70() {
   return (neuron0x17a72f0()*0.222649);
}

double NNfunction_sb_dLcR::synapse0x17c3bb0() {
   return (neuron0x17a7630()*-1.54076);
}

double NNfunction_sb_dLcR::synapse0x17c3640() {
   return (neuron0x17a7970()*-0.0347549);
}

double NNfunction_sb_dLcR::synapse0x17c3680() {
   return (neuron0x17a7ed0()*-0.19288);
}

double NNfunction_sb_dLcR::synapse0x17c3d00() {
   return (neuron0x17a80f0()*0.0751996);
}

double NNfunction_sb_dLcR::synapse0x17c3d40() {
   return (neuron0x17a8430()*0.0784573);
}

double NNfunction_sb_dLcR::synapse0x17c3d80() {
   return (neuron0x17a8770()*0.368104);
}

double NNfunction_sb_dLcR::synapse0x17c3dc0() {
   return (neuron0x17a8ab0()*-0.0712489);
}

double NNfunction_sb_dLcR::synapse0x17c3e00() {
   return (neuron0x17a8df0()*0.287338);
}

double NNfunction_sb_dLcR::synapse0x17c3e40() {
   return (neuron0x17a9130()*-0.0913486);
}

double NNfunction_sb_dLcR::synapse0x17c41c0() {
   return (neuron0x17a4570()*-0.194241);
}

double NNfunction_sb_dLcR::synapse0x17c4200() {
   return (neuron0x17a48b0()*0.00932513);
}

double NNfunction_sb_dLcR::synapse0x17c4240() {
   return (neuron0x17a4bf0()*-0.241319);
}

double NNfunction_sb_dLcR::synapse0x17c4280() {
   return (neuron0x17a4f30()*-0.82126);
}

double NNfunction_sb_dLcR::synapse0x17c42c0() {
   return (neuron0x17a5270()*-0.346971);
}

double NNfunction_sb_dLcR::synapse0x17c4300() {
   return (neuron0x17a55b0()*0.321571);
}

double NNfunction_sb_dLcR::synapse0x17c4340() {
   return (neuron0x17a58f0()*-0.0395274);
}

double NNfunction_sb_dLcR::synapse0x17c4380() {
   return (neuron0x17a5c30()*1.18126);
}

double NNfunction_sb_dLcR::synapse0x17c43c0() {
   return (neuron0x17a5f70()*-0.312339);
}

double NNfunction_sb_dLcR::synapse0x17c4400() {
   return (neuron0x17a62b0()*0.00683012);
}

double NNfunction_sb_dLcR::synapse0x17c4440() {
   return (neuron0x17a65f0()*0.14388);
}

double NNfunction_sb_dLcR::synapse0x17c4480() {
   return (neuron0x17a6930()*0.369208);
}

double NNfunction_sb_dLcR::synapse0x17c44c0() {
   return (neuron0x17a6c70()*-0.113126);
}

double NNfunction_sb_dLcR::synapse0x17c4500() {
   return (neuron0x17a6fb0()*0.131883);
}

double NNfunction_sb_dLcR::synapse0x17c4540() {
   return (neuron0x17a72f0()*0.0780082);
}

double NNfunction_sb_dLcR::synapse0x17c4580() {
   return (neuron0x17a7630()*-0.575187);
}

double NNfunction_sb_dLcR::synapse0x17c4010() {
   return (neuron0x17a7970()*0.373278);
}

double NNfunction_sb_dLcR::synapse0x17c4050() {
   return (neuron0x17a7ed0()*0.146107);
}

double NNfunction_sb_dLcR::synapse0x17c46d0() {
   return (neuron0x17a80f0()*0.0465707);
}

double NNfunction_sb_dLcR::synapse0x17c4710() {
   return (neuron0x17a8430()*-0.193967);
}

double NNfunction_sb_dLcR::synapse0x17c4750() {
   return (neuron0x17a8770()*-0.252622);
}

double NNfunction_sb_dLcR::synapse0x17c4790() {
   return (neuron0x17a8ab0()*-0.0862839);
}

double NNfunction_sb_dLcR::synapse0x17c47d0() {
   return (neuron0x17a8df0()*0.136276);
}

double NNfunction_sb_dLcR::synapse0x17c4810() {
   return (neuron0x17a9130()*-0.0468753);
}

double NNfunction_sb_dLcR::synapse0x17c4b90() {
   return (neuron0x17a4570()*-0.398251);
}

double NNfunction_sb_dLcR::synapse0x17c4bd0() {
   return (neuron0x17a48b0()*0.0740619);
}

double NNfunction_sb_dLcR::synapse0x17c4c10() {
   return (neuron0x17a4bf0()*-0.454575);
}

double NNfunction_sb_dLcR::synapse0x17c4c50() {
   return (neuron0x17a4f30()*-0.195735);
}

double NNfunction_sb_dLcR::synapse0x17c4c90() {
   return (neuron0x17a5270()*0.0730799);
}

double NNfunction_sb_dLcR::synapse0x17c4cd0() {
   return (neuron0x17a55b0()*0.026086);
}

double NNfunction_sb_dLcR::synapse0x17c4d10() {
   return (neuron0x17a58f0()*0.152231);
}

double NNfunction_sb_dLcR::synapse0x17c4d50() {
   return (neuron0x17a5c30()*0.0774378);
}

double NNfunction_sb_dLcR::synapse0x17c4d90() {
   return (neuron0x17a5f70()*-0.726229);
}

double NNfunction_sb_dLcR::synapse0x17c4dd0() {
   return (neuron0x17a62b0()*0.41407);
}

double NNfunction_sb_dLcR::synapse0x17c4e10() {
   return (neuron0x17a65f0()*0.200452);
}

double NNfunction_sb_dLcR::synapse0x17c4e50() {
   return (neuron0x17a6930()*0.536687);
}

double NNfunction_sb_dLcR::synapse0x17c4e90() {
   return (neuron0x17a6c70()*-0.0346649);
}

double NNfunction_sb_dLcR::synapse0x17c4ed0() {
   return (neuron0x17a6fb0()*-0.294063);
}

double NNfunction_sb_dLcR::synapse0x17c4f10() {
   return (neuron0x17a72f0()*-0.0575381);
}

double NNfunction_sb_dLcR::synapse0x17c4f50() {
   return (neuron0x17a7630()*-0.451698);
}

double NNfunction_sb_dLcR::synapse0x17c49e0() {
   return (neuron0x17a7970()*0.335256);
}

double NNfunction_sb_dLcR::synapse0x17c4a20() {
   return (neuron0x17a7ed0()*-0.395296);
}

double NNfunction_sb_dLcR::synapse0x17c50a0() {
   return (neuron0x17a80f0()*0.403171);
}

double NNfunction_sb_dLcR::synapse0x17c50e0() {
   return (neuron0x17a8430()*0.230474);
}

double NNfunction_sb_dLcR::synapse0x17c5120() {
   return (neuron0x17a8770()*0.0991877);
}

double NNfunction_sb_dLcR::synapse0x17c5160() {
   return (neuron0x17a8ab0()*0.735649);
}

double NNfunction_sb_dLcR::synapse0x17c51a0() {
   return (neuron0x17a8df0()*-0.854252);
}

double NNfunction_sb_dLcR::synapse0x17c51e0() {
   return (neuron0x17a9130()*0.144845);
}

double NNfunction_sb_dLcR::synapse0x17c5560() {
   return (neuron0x17a4570()*0.0169515);
}

double NNfunction_sb_dLcR::synapse0x17c55a0() {
   return (neuron0x17a48b0()*0.0184576);
}

double NNfunction_sb_dLcR::synapse0x17c55e0() {
   return (neuron0x17a4bf0()*-0.00594651);
}

double NNfunction_sb_dLcR::synapse0x17c5620() {
   return (neuron0x17a4f30()*-10.2975);
}

double NNfunction_sb_dLcR::synapse0x17c5660() {
   return (neuron0x17a5270()*-0.00652085);
}

double NNfunction_sb_dLcR::synapse0x17c56a0() {
   return (neuron0x17a55b0()*-0.03145);
}

double NNfunction_sb_dLcR::synapse0x17c56e0() {
   return (neuron0x17a58f0()*-0.0365192);
}

double NNfunction_sb_dLcR::synapse0x17c5720() {
   return (neuron0x17a5c30()*-0.00758589);
}

double NNfunction_sb_dLcR::synapse0x17c5760() {
   return (neuron0x17a5f70()*-0.00400194);
}

double NNfunction_sb_dLcR::synapse0x17c57a0() {
   return (neuron0x17a62b0()*0.0244007);
}

double NNfunction_sb_dLcR::synapse0x17c57e0() {
   return (neuron0x17a65f0()*0.0174339);
}

double NNfunction_sb_dLcR::synapse0x17c5820() {
   return (neuron0x17a6930()*0.0755899);
}

double NNfunction_sb_dLcR::synapse0x17c5860() {
   return (neuron0x17a6c70()*0.000830532);
}

double NNfunction_sb_dLcR::synapse0x17c58a0() {
   return (neuron0x17a6fb0()*-0.0347297);
}

double NNfunction_sb_dLcR::synapse0x17c58e0() {
   return (neuron0x17a72f0()*-0.0535135);
}

double NNfunction_sb_dLcR::synapse0x17c5920() {
   return (neuron0x17a7630()*-0.414732);
}

double NNfunction_sb_dLcR::synapse0x17c53b0() {
   return (neuron0x17a7970()*0.0165218);
}

double NNfunction_sb_dLcR::synapse0x17c53f0() {
   return (neuron0x17a7ed0()*0.0129265);
}

double NNfunction_sb_dLcR::synapse0x17c5a70() {
   return (neuron0x17a80f0()*0.016253);
}

double NNfunction_sb_dLcR::synapse0x17c5ab0() {
   return (neuron0x17a8430()*0.013452);
}

double NNfunction_sb_dLcR::synapse0x17c5af0() {
   return (neuron0x17a8770()*-0.044769);
}

double NNfunction_sb_dLcR::synapse0x17c5b30() {
   return (neuron0x17a8ab0()*0.00553879);
}

double NNfunction_sb_dLcR::synapse0x17c5b70() {
   return (neuron0x17a8df0()*0.0600371);
}

double NNfunction_sb_dLcR::synapse0x17c5bb0() {
   return (neuron0x17a9130()*-0.0243005);
}

double NNfunction_sb_dLcR::synapse0x17ae660() {
   return (neuron0x17a4570()*-0.0317885);
}

double NNfunction_sb_dLcR::synapse0x17ae6a0() {
   return (neuron0x17a48b0()*0.0148086);
}

double NNfunction_sb_dLcR::synapse0x17ae6e0() {
   return (neuron0x17a4bf0()*-0.816507);
}

double NNfunction_sb_dLcR::synapse0x17ae720() {
   return (neuron0x17a4f30()*0.00463257);
}

double NNfunction_sb_dLcR::synapse0x17ae760() {
   return (neuron0x17a5270()*-0.0118402);
}

double NNfunction_sb_dLcR::synapse0x17ae7a0() {
   return (neuron0x17a55b0()*-0.0108632);
}

double NNfunction_sb_dLcR::synapse0x17ae7e0() {
   return (neuron0x17a58f0()*-0.00986414);
}

double NNfunction_sb_dLcR::synapse0x17ae820() {
   return (neuron0x17a5c30()*-0.0100324);
}

double NNfunction_sb_dLcR::synapse0x17c6340() {
   return (neuron0x17a5f70()*0.00144481);
}

double NNfunction_sb_dLcR::synapse0x17c6380() {
   return (neuron0x17a62b0()*0.014299);
}

double NNfunction_sb_dLcR::synapse0x17c63c0() {
   return (neuron0x17a65f0()*0.0112424);
}

double NNfunction_sb_dLcR::synapse0x17c6400() {
   return (neuron0x17a6930()*0.429125);
}

double NNfunction_sb_dLcR::synapse0x17c6440() {
   return (neuron0x17a6c70()*0.0538614);
}

double NNfunction_sb_dLcR::synapse0x17c6480() {
   return (neuron0x17a6fb0()*0.00751004);
}

double NNfunction_sb_dLcR::synapse0x17c64c0() {
   return (neuron0x17a72f0()*0.00413398);
}

double NNfunction_sb_dLcR::synapse0x17c6500() {
   return (neuron0x17a7630()*-0.089819);
}

double NNfunction_sb_dLcR::synapse0x17c5d80() {
   return (neuron0x17a7970()*-0.0177475);
}

double NNfunction_sb_dLcR::synapse0x17c5dc0() {
   return (neuron0x17a7ed0()*0.033409);
}

double NNfunction_sb_dLcR::synapse0x17c6650() {
   return (neuron0x17a80f0()*0.0448345);
}

double NNfunction_sb_dLcR::synapse0x17c6690() {
   return (neuron0x17a8430()*0.0315795);
}

double NNfunction_sb_dLcR::synapse0x17c66d0() {
   return (neuron0x17a8770()*-0.0272933);
}

double NNfunction_sb_dLcR::synapse0x17c6710() {
   return (neuron0x17a8ab0()*-0.0122983);
}

double NNfunction_sb_dLcR::synapse0x17c6750() {
   return (neuron0x17a8df0()*0.0238018);
}

double NNfunction_sb_dLcR::synapse0x17c6790() {
   return (neuron0x17a9130()*-0.0049123);
}

double NNfunction_sb_dLcR::synapse0x17c6b10() {
   return (neuron0x17a4570()*-0.129864);
}

double NNfunction_sb_dLcR::synapse0x17c6b50() {
   return (neuron0x17a48b0()*0.297285);
}

double NNfunction_sb_dLcR::synapse0x17c6b90() {
   return (neuron0x17a4bf0()*0.0624936);
}

double NNfunction_sb_dLcR::synapse0x17c6bd0() {
   return (neuron0x17a4f30()*0.0193601);
}

double NNfunction_sb_dLcR::synapse0x17c6c10() {
   return (neuron0x17a5270()*0.101153);
}

double NNfunction_sb_dLcR::synapse0x17c6c50() {
   return (neuron0x17a55b0()*0.416083);
}

double NNfunction_sb_dLcR::synapse0x17c6c90() {
   return (neuron0x17a58f0()*-0.14917);
}

double NNfunction_sb_dLcR::synapse0x17c6cd0() {
   return (neuron0x17a5c30()*0.221794);
}

double NNfunction_sb_dLcR::synapse0x17c6d10() {
   return (neuron0x17a5f70()*0.0938099);
}

double NNfunction_sb_dLcR::synapse0x17c6d50() {
   return (neuron0x17a62b0()*-0.0786603);
}

double NNfunction_sb_dLcR::synapse0x17c6d90() {
   return (neuron0x17a65f0()*0.13152);
}

double NNfunction_sb_dLcR::synapse0x17c6dd0() {
   return (neuron0x17a6930()*1.07716);
}

double NNfunction_sb_dLcR::synapse0x17c6e10() {
   return (neuron0x17a6c70()*0.222872);
}

double NNfunction_sb_dLcR::synapse0x17c6e50() {
   return (neuron0x17a6fb0()*-0.0257642);
}

double NNfunction_sb_dLcR::synapse0x17c6e90() {
   return (neuron0x17a72f0()*-0.300365);
}

double NNfunction_sb_dLcR::synapse0x17c6ed0() {
   return (neuron0x17a7630()*0.625309);
}

double NNfunction_sb_dLcR::synapse0x17c6960() {
   return (neuron0x17a7970()*0.32426);
}

double NNfunction_sb_dLcR::synapse0x17c69a0() {
   return (neuron0x17a7ed0()*0.136671);
}

double NNfunction_sb_dLcR::synapse0x17c7020() {
   return (neuron0x17a80f0()*0.00847582);
}

double NNfunction_sb_dLcR::synapse0x17c7060() {
   return (neuron0x17a8430()*0.0688027);
}

double NNfunction_sb_dLcR::synapse0x17c70a0() {
   return (neuron0x17a8770()*0.150852);
}

double NNfunction_sb_dLcR::synapse0x17c70e0() {
   return (neuron0x17a8ab0()*-0.288821);
}

double NNfunction_sb_dLcR::synapse0x17c7120() {
   return (neuron0x17a8df0()*-0.0871856);
}

double NNfunction_sb_dLcR::synapse0x17c7160() {
   return (neuron0x17a9130()*-0.392342);
}

double NNfunction_sb_dLcR::synapse0x17c74e0() {
   return (neuron0x17a4570()*0.0368635);
}

double NNfunction_sb_dLcR::synapse0x17c7520() {
   return (neuron0x17a48b0()*-0.646979);
}

double NNfunction_sb_dLcR::synapse0x17c7560() {
   return (neuron0x17a4bf0()*0.169115);
}

double NNfunction_sb_dLcR::synapse0x17c75a0() {
   return (neuron0x17a4f30()*-0.570982);
}

double NNfunction_sb_dLcR::synapse0x17c75e0() {
   return (neuron0x17a5270()*-0.188877);
}

double NNfunction_sb_dLcR::synapse0x17c7620() {
   return (neuron0x17a55b0()*0.413379);
}

double NNfunction_sb_dLcR::synapse0x17c7660() {
   return (neuron0x17a58f0()*-0.184085);
}

double NNfunction_sb_dLcR::synapse0x17c76a0() {
   return (neuron0x17a5c30()*-0.0322872);
}

double NNfunction_sb_dLcR::synapse0x17c76e0() {
   return (neuron0x17a5f70()*-0.889482);
}

double NNfunction_sb_dLcR::synapse0x17c7720() {
   return (neuron0x17a62b0()*0.0409406);
}

double NNfunction_sb_dLcR::synapse0x17c7760() {
   return (neuron0x17a65f0()*0.287363);
}

double NNfunction_sb_dLcR::synapse0x17c77a0() {
   return (neuron0x17a6930()*0.381979);
}

double NNfunction_sb_dLcR::synapse0x17c77e0() {
   return (neuron0x17a6c70()*-0.468337);
}

double NNfunction_sb_dLcR::synapse0x17c7820() {
   return (neuron0x17a6fb0()*-0.561728);
}

double NNfunction_sb_dLcR::synapse0x17c7860() {
   return (neuron0x17a72f0()*-0.106361);
}

double NNfunction_sb_dLcR::synapse0x17c78a0() {
   return (neuron0x17a7630()*0.101767);
}

double NNfunction_sb_dLcR::synapse0x17c7330() {
   return (neuron0x17a7970()*0.00281673);
}

double NNfunction_sb_dLcR::synapse0x17c7370() {
   return (neuron0x17a7ed0()*0.120646);
}

double NNfunction_sb_dLcR::synapse0x17b7ea0() {
   return (neuron0x17a80f0()*0.227127);
}

double NNfunction_sb_dLcR::synapse0x17b7ee0() {
   return (neuron0x17a8430()*0.0752427);
}

double NNfunction_sb_dLcR::synapse0x17b7f20() {
   return (neuron0x17a8770()*0.0913047);
}

double NNfunction_sb_dLcR::synapse0x17b7f60() {
   return (neuron0x17a8ab0()*0.293999);
}

double NNfunction_sb_dLcR::synapse0x17b7fa0() {
   return (neuron0x17a8df0()*0.0483867);
}

double NNfunction_sb_dLcR::synapse0x17b7fe0() {
   return (neuron0x17a9130()*-0.243492);
}

double NNfunction_sb_dLcR::synapse0x17b8360() {
   return (neuron0x17a4570()*0.259978);
}

double NNfunction_sb_dLcR::synapse0x17b83a0() {
   return (neuron0x17a48b0()*0.00855408);
}

double NNfunction_sb_dLcR::synapse0x17b83e0() {
   return (neuron0x17a4bf0()*0.0699236);
}

double NNfunction_sb_dLcR::synapse0x17b8420() {
   return (neuron0x17a4f30()*0.719859);
}

double NNfunction_sb_dLcR::synapse0x17b8460() {
   return (neuron0x17a5270()*-0.0611764);
}

double NNfunction_sb_dLcR::synapse0x17b84a0() {
   return (neuron0x17a55b0()*0.0370847);
}

double NNfunction_sb_dLcR::synapse0x17b84e0() {
   return (neuron0x17a58f0()*0.433308);
}

double NNfunction_sb_dLcR::synapse0x17b8520() {
   return (neuron0x17a5c30()*-0.271858);
}

double NNfunction_sb_dLcR::synapse0x17b8560() {
   return (neuron0x17a5f70()*-0.134206);
}

double NNfunction_sb_dLcR::synapse0x17b85a0() {
   return (neuron0x17a62b0()*-0.131469);
}

double NNfunction_sb_dLcR::synapse0x17b85e0() {
   return (neuron0x17a65f0()*-0.173185);
}

double NNfunction_sb_dLcR::synapse0x17b8620() {
   return (neuron0x17a6930()*0.102149);
}

double NNfunction_sb_dLcR::synapse0x17b8660() {
   return (neuron0x17a6c70()*-0.00996756);
}

double NNfunction_sb_dLcR::synapse0x17b86a0() {
   return (neuron0x17a6fb0()*-0.20456);
}

double NNfunction_sb_dLcR::synapse0x17b86e0() {
   return (neuron0x17a72f0()*-0.0536979);
}

double NNfunction_sb_dLcR::synapse0x17b8720() {
   return (neuron0x17a7630()*-0.118875);
}

double NNfunction_sb_dLcR::synapse0x17b81b0() {
   return (neuron0x17a7970()*0.127081);
}

double NNfunction_sb_dLcR::synapse0x17b81f0() {
   return (neuron0x17a7ed0()*-0.0999146);
}

double NNfunction_sb_dLcR::synapse0x17b8870() {
   return (neuron0x17a80f0()*-0.0795307);
}

double NNfunction_sb_dLcR::synapse0x17b88b0() {
   return (neuron0x17a8430()*-0.0166274);
}

double NNfunction_sb_dLcR::synapse0x17b88f0() {
   return (neuron0x17a8770()*-0.0182367);
}

double NNfunction_sb_dLcR::synapse0x17b8930() {
   return (neuron0x17a8ab0()*0.00397104);
}

double NNfunction_sb_dLcR::synapse0x17b8970() {
   return (neuron0x17a8df0()*0.263621);
}

double NNfunction_sb_dLcR::synapse0x17b89b0() {
   return (neuron0x17a9130()*0.096074);
}

double NNfunction_sb_dLcR::synapse0x17b8d30() {
   return (neuron0x17a4570()*-0.0540763);
}

double NNfunction_sb_dLcR::synapse0x17b8d70() {
   return (neuron0x17a48b0()*0.0486684);
}

double NNfunction_sb_dLcR::synapse0x17b8db0() {
   return (neuron0x17a4bf0()*0.0439982);
}

double NNfunction_sb_dLcR::synapse0x17b8df0() {
   return (neuron0x17a4f30()*-1.10133);
}

double NNfunction_sb_dLcR::synapse0x17b8e30() {
   return (neuron0x17a5270()*0.061337);
}

double NNfunction_sb_dLcR::synapse0x17b8e70() {
   return (neuron0x17a55b0()*0.13252);
}

double NNfunction_sb_dLcR::synapse0x17b8eb0() {
   return (neuron0x17a58f0()*-0.0613508);
}

double NNfunction_sb_dLcR::synapse0x17b8ef0() {
   return (neuron0x17a5c30()*-0.0365722);
}

double NNfunction_sb_dLcR::synapse0x17b8f30() {
   return (neuron0x17a5f70()*0.0241131);
}

double NNfunction_sb_dLcR::synapse0x17b8f70() {
   return (neuron0x17a62b0()*-0.23438);
}

double NNfunction_sb_dLcR::synapse0x17b8fb0() {
   return (neuron0x17a65f0()*-0.0154232);
}

double NNfunction_sb_dLcR::synapse0x17b8ff0() {
   return (neuron0x17a6930()*0.0617718);
}

double NNfunction_sb_dLcR::synapse0x17b9030() {
   return (neuron0x17a6c70()*0.196972);
}

double NNfunction_sb_dLcR::synapse0x17b9070() {
   return (neuron0x17a6fb0()*0.0800025);
}

double NNfunction_sb_dLcR::synapse0x17b90b0() {
   return (neuron0x17a72f0()*0.0362965);
}

double NNfunction_sb_dLcR::synapse0x17b90f0() {
   return (neuron0x17a7630()*1.03574);
}

double NNfunction_sb_dLcR::synapse0x17b8b80() {
   return (neuron0x17a7970()*-0.025968);
}

double NNfunction_sb_dLcR::synapse0x17b8bc0() {
   return (neuron0x17a7ed0()*0.328777);
}

double NNfunction_sb_dLcR::synapse0x17b9240() {
   return (neuron0x17a80f0()*-0.0246352);
}

double NNfunction_sb_dLcR::synapse0x17b9280() {
   return (neuron0x17a8430()*0.281523);
}

double NNfunction_sb_dLcR::synapse0x17b92c0() {
   return (neuron0x17a8770()*-0.143966);
}

double NNfunction_sb_dLcR::synapse0x17b9300() {
   return (neuron0x17a8ab0()*0.0178259);
}

double NNfunction_sb_dLcR::synapse0x17b9340() {
   return (neuron0x17a8df0()*-0.0853067);
}

double NNfunction_sb_dLcR::synapse0x17b9380() {
   return (neuron0x17a9130()*0.0705075);
}

double NNfunction_sb_dLcR::synapse0x17b9700() {
   return (neuron0x17a4570()*0.0535021);
}

double NNfunction_sb_dLcR::synapse0x17b9740() {
   return (neuron0x17a48b0()*0.0150491);
}

double NNfunction_sb_dLcR::synapse0x17b9780() {
   return (neuron0x17a4bf0()*0.0444829);
}

double NNfunction_sb_dLcR::synapse0x17b97c0() {
   return (neuron0x17a4f30()*-1.15495);
}

double NNfunction_sb_dLcR::synapse0x17b9800() {
   return (neuron0x17a5270()*-0.072403);
}

double NNfunction_sb_dLcR::synapse0x17b9840() {
   return (neuron0x17a55b0()*-0.0214212);
}

double NNfunction_sb_dLcR::synapse0x17b9880() {
   return (neuron0x17a58f0()*0.0256518);
}

double NNfunction_sb_dLcR::synapse0x17b98c0() {
   return (neuron0x17a5c30()*-0.0264867);
}

double NNfunction_sb_dLcR::synapse0x17b9900() {
   return (neuron0x17a5f70()*0.132466);
}

double NNfunction_sb_dLcR::synapse0x17b9940() {
   return (neuron0x17a62b0()*0.124177);
}

double NNfunction_sb_dLcR::synapse0x17b9980() {
   return (neuron0x17a65f0()*0.122421);
}

double NNfunction_sb_dLcR::synapse0x17b99c0() {
   return (neuron0x17a6930()*0.717095);
}

double NNfunction_sb_dLcR::synapse0x17b9a00() {
   return (neuron0x17a6c70()*0.0144288);
}

double NNfunction_sb_dLcR::synapse0x17b9a40() {
   return (neuron0x17a6fb0()*-0.00125152);
}

double NNfunction_sb_dLcR::synapse0x17b9a80() {
   return (neuron0x17a72f0()*0.0167162);
}

double NNfunction_sb_dLcR::synapse0x17b9ac0() {
   return (neuron0x17a7630()*-0.0862175);
}

double NNfunction_sb_dLcR::synapse0x17b9550() {
   return (neuron0x17a7970()*0.138623);
}

double NNfunction_sb_dLcR::synapse0x17b9590() {
   return (neuron0x17a7ed0()*0.0907863);
}

double NNfunction_sb_dLcR::synapse0x17b9c10() {
   return (neuron0x17a80f0()*0.0259556);
}

double NNfunction_sb_dLcR::synapse0x17b9c50() {
   return (neuron0x17a8430()*0.0745729);
}

double NNfunction_sb_dLcR::synapse0x17b9c90() {
   return (neuron0x17a8770()*-0.0697588);
}

double NNfunction_sb_dLcR::synapse0x17b9cd0() {
   return (neuron0x17a8ab0()*-0.0072836);
}

double NNfunction_sb_dLcR::synapse0x17b9d10() {
   return (neuron0x17a8df0()*0.00650636);
}

double NNfunction_sb_dLcR::synapse0x17b9d50() {
   return (neuron0x17a9130()*-0.0537902);
}

double NNfunction_sb_dLcR::synapse0x17cbc20() {
   return (neuron0x17a4570()*0.71691);
}

double NNfunction_sb_dLcR::synapse0x17cbc60() {
   return (neuron0x17a48b0()*-0.222201);
}

double NNfunction_sb_dLcR::synapse0x17cbca0() {
   return (neuron0x17a4bf0()*0.230079);
}

double NNfunction_sb_dLcR::synapse0x17cbce0() {
   return (neuron0x17a4f30()*-1.26893);
}

double NNfunction_sb_dLcR::synapse0x17cbd20() {
   return (neuron0x17a5270()*0.58769);
}

double NNfunction_sb_dLcR::synapse0x17cbd60() {
   return (neuron0x17a55b0()*0.444251);
}

double NNfunction_sb_dLcR::synapse0x17cbda0() {
   return (neuron0x17a58f0()*0.009004);
}

double NNfunction_sb_dLcR::synapse0x17cbde0() {
   return (neuron0x17a5c30()*-0.102516);
}

double NNfunction_sb_dLcR::synapse0x17cbe20() {
   return (neuron0x17a5f70()*0.578509);
}

double NNfunction_sb_dLcR::synapse0x17cbe60() {
   return (neuron0x17a62b0()*-0.0494531);
}

double NNfunction_sb_dLcR::synapse0x17cbea0() {
   return (neuron0x17a65f0()*0.151595);
}

double NNfunction_sb_dLcR::synapse0x17cbee0() {
   return (neuron0x17a6930()*0.473842);
}

double NNfunction_sb_dLcR::synapse0x17cbf20() {
   return (neuron0x17a6c70()*-0.207667);
}

double NNfunction_sb_dLcR::synapse0x17cbf60() {
   return (neuron0x17a6fb0()*-0.0386081);
}

double NNfunction_sb_dLcR::synapse0x17cbfa0() {
   return (neuron0x17a72f0()*-0.194367);
}

double NNfunction_sb_dLcR::synapse0x17cbfe0() {
   return (neuron0x17a7630()*-0.32758);
}

double NNfunction_sb_dLcR::synapse0x17b9d90() {
   return (neuron0x17a7970()*-0.579517);
}

double NNfunction_sb_dLcR::synapse0x17b9dd0() {
   return (neuron0x17a7ed0()*-0.316906);
}

double NNfunction_sb_dLcR::synapse0x17cc130() {
   return (neuron0x17a80f0()*0.538036);
}

double NNfunction_sb_dLcR::synapse0x17cc170() {
   return (neuron0x17a8430()*-0.194016);
}

double NNfunction_sb_dLcR::synapse0x17cc1b0() {
   return (neuron0x17a8770()*0.14159);
}

double NNfunction_sb_dLcR::synapse0x17cc1f0() {
   return (neuron0x17a8ab0()*-0.146187);
}

double NNfunction_sb_dLcR::synapse0x17cc230() {
   return (neuron0x17a8df0()*0.149102);
}

double NNfunction_sb_dLcR::synapse0x17cc270() {
   return (neuron0x17a9130()*0.102618);
}

double NNfunction_sb_dLcR::synapse0x17cc5f0() {
   return (neuron0x17a4570()*-0.0126116);
}

double NNfunction_sb_dLcR::synapse0x17cc630() {
   return (neuron0x17a48b0()*0.00287734);
}

double NNfunction_sb_dLcR::synapse0x17cc670() {
   return (neuron0x17a4bf0()*0.170075);
}

double NNfunction_sb_dLcR::synapse0x17cc6b0() {
   return (neuron0x17a4f30()*0.0473167);
}

double NNfunction_sb_dLcR::synapse0x17cc6f0() {
   return (neuron0x17a5270()*0.0062885);
}

double NNfunction_sb_dLcR::synapse0x17cc730() {
   return (neuron0x17a55b0()*-0.0164672);
}

double NNfunction_sb_dLcR::synapse0x17cc770() {
   return (neuron0x17a58f0()*-0.00285123);
}

double NNfunction_sb_dLcR::synapse0x17cc7b0() {
   return (neuron0x17a5c30()*0.0247744);
}

double NNfunction_sb_dLcR::synapse0x17cc7f0() {
   return (neuron0x17a5f70()*0.0125009);
}

double NNfunction_sb_dLcR::synapse0x17cc830() {
   return (neuron0x17a62b0()*-0.00172028);
}

double NNfunction_sb_dLcR::synapse0x17cc870() {
   return (neuron0x17a65f0()*0.0166179);
}

double NNfunction_sb_dLcR::synapse0x17cc8b0() {
   return (neuron0x17a6930()*-0.0559231);
}

double NNfunction_sb_dLcR::synapse0x17cc8f0() {
   return (neuron0x17a6c70()*-0.576542);
}

double NNfunction_sb_dLcR::synapse0x17cc930() {
   return (neuron0x17a6fb0()*0.0514415);
}

double NNfunction_sb_dLcR::synapse0x17cc970() {
   return (neuron0x17a72f0()*-0.270127);
}

double NNfunction_sb_dLcR::synapse0x17cc9b0() {
   return (neuron0x17a7630()*0.13482);
}

double NNfunction_sb_dLcR::synapse0x17cc440() {
   return (neuron0x17a7970()*0.102643);
}

double NNfunction_sb_dLcR::synapse0x17cc480() {
   return (neuron0x17a7ed0()*-0.355806);
}

double NNfunction_sb_dLcR::synapse0x17ccb00() {
   return (neuron0x17a80f0()*-0.290188);
}

double NNfunction_sb_dLcR::synapse0x17ccb40() {
   return (neuron0x17a8430()*-0.0238252);
}

double NNfunction_sb_dLcR::synapse0x17ccb80() {
   return (neuron0x17a8770()*-0.0113568);
}

double NNfunction_sb_dLcR::synapse0x17ccbc0() {
   return (neuron0x17a8ab0()*-0.0504878);
}

double NNfunction_sb_dLcR::synapse0x17ccc00() {
   return (neuron0x17a8df0()*-0.00293305);
}

double NNfunction_sb_dLcR::synapse0x17ccc40() {
   return (neuron0x17a9130()*-0.0167477);
}

double NNfunction_sb_dLcR::synapse0x17ccfc0() {
   return (neuron0x17a4570()*0.0037305);
}

double NNfunction_sb_dLcR::synapse0x17cd000() {
   return (neuron0x17a48b0()*-0.0134097);
}

double NNfunction_sb_dLcR::synapse0x17cd040() {
   return (neuron0x17a4bf0()*0.0396322);
}

double NNfunction_sb_dLcR::synapse0x17cd080() {
   return (neuron0x17a4f30()*0.0511333);
}

double NNfunction_sb_dLcR::synapse0x17cd0c0() {
   return (neuron0x17a5270()*-0.0154838);
}

double NNfunction_sb_dLcR::synapse0x17cd100() {
   return (neuron0x17a55b0()*-0.0373722);
}

double NNfunction_sb_dLcR::synapse0x17cd140() {
   return (neuron0x17a58f0()*-0.0120933);
}

double NNfunction_sb_dLcR::synapse0x17cd180() {
   return (neuron0x17a5c30()*-0.0137134);
}

double NNfunction_sb_dLcR::synapse0x17cd1c0() {
   return (neuron0x17a5f70()*-0.00220012);
}

double NNfunction_sb_dLcR::synapse0x17cd200() {
   return (neuron0x17a62b0()*0.00630983);
}

double NNfunction_sb_dLcR::synapse0x17cd240() {
   return (neuron0x17a65f0()*-0.0114278);
}

double NNfunction_sb_dLcR::synapse0x17cd280() {
   return (neuron0x17a6930()*0.505725);
}

double NNfunction_sb_dLcR::synapse0x17cd2c0() {
   return (neuron0x17a6c70()*-0.0177467);
}

double NNfunction_sb_dLcR::synapse0x17cd300() {
   return (neuron0x17a6fb0()*-0.000236932);
}

double NNfunction_sb_dLcR::synapse0x17cd340() {
   return (neuron0x17a72f0()*0.0212744);
}

double NNfunction_sb_dLcR::synapse0x17cd380() {
   return (neuron0x17a7630()*-1.60079);
}

double NNfunction_sb_dLcR::synapse0x17cce10() {
   return (neuron0x17a7970()*-0.0167082);
}

double NNfunction_sb_dLcR::synapse0x17cce50() {
   return (neuron0x17a7ed0()*0.006292);
}

double NNfunction_sb_dLcR::synapse0x17cd4d0() {
   return (neuron0x17a80f0()*-0.0140192);
}

double NNfunction_sb_dLcR::synapse0x17cd510() {
   return (neuron0x17a8430()*-0.0179203);
}

double NNfunction_sb_dLcR::synapse0x17cd550() {
   return (neuron0x17a8770()*0.00375402);
}

double NNfunction_sb_dLcR::synapse0x17cd590() {
   return (neuron0x17a8ab0()*0.014778);
}

double NNfunction_sb_dLcR::synapse0x17cd5d0() {
   return (neuron0x17a8df0()*-0.0125524);
}

double NNfunction_sb_dLcR::synapse0x17cd610() {
   return (neuron0x17a9130()*0.00332582);
}

double NNfunction_sb_dLcR::synapse0x17cd990() {
   return (neuron0x17a4570()*0.159107);
}

double NNfunction_sb_dLcR::synapse0x17cd9d0() {
   return (neuron0x17a48b0()*-0.222383);
}

double NNfunction_sb_dLcR::synapse0x17cda10() {
   return (neuron0x17a4bf0()*0.372114);
}

double NNfunction_sb_dLcR::synapse0x17cda50() {
   return (neuron0x17a4f30()*-0.406124);
}

double NNfunction_sb_dLcR::synapse0x17cda90() {
   return (neuron0x17a5270()*0.392065);
}

double NNfunction_sb_dLcR::synapse0x17cdad0() {
   return (neuron0x17a55b0()*-0.0790272);
}

double NNfunction_sb_dLcR::synapse0x17cdb10() {
   return (neuron0x17a58f0()*-0.00531406);
}

double NNfunction_sb_dLcR::synapse0x17cdb50() {
   return (neuron0x17a5c30()*-0.511534);
}

double NNfunction_sb_dLcR::synapse0x17cdb90() {
   return (neuron0x17a5f70()*0.16505);
}

double NNfunction_sb_dLcR::synapse0x17cdbd0() {
   return (neuron0x17a62b0()*-0.133406);
}

double NNfunction_sb_dLcR::synapse0x17cdc10() {
   return (neuron0x17a65f0()*-0.473157);
}

double NNfunction_sb_dLcR::synapse0x17cdc50() {
   return (neuron0x17a6930()*0.10399);
}

double NNfunction_sb_dLcR::synapse0x17cdc90() {
   return (neuron0x17a6c70()*-0.251188);
}

double NNfunction_sb_dLcR::synapse0x17cdcd0() {
   return (neuron0x17a6fb0()*0.0492475);
}

double NNfunction_sb_dLcR::synapse0x17cdd10() {
   return (neuron0x17a72f0()*-0.476845);
}

double NNfunction_sb_dLcR::synapse0x17cdd50() {
   return (neuron0x17a7630()*0.0274907);
}

double NNfunction_sb_dLcR::synapse0x17cd7e0() {
   return (neuron0x17a7970()*0.40025);
}

double NNfunction_sb_dLcR::synapse0x17cd820() {
   return (neuron0x17a7ed0()*-0.228461);
}

double NNfunction_sb_dLcR::synapse0x17cdea0() {
   return (neuron0x17a80f0()*-0.437409);
}

double NNfunction_sb_dLcR::synapse0x17cdee0() {
   return (neuron0x17a8430()*-0.100589);
}

double NNfunction_sb_dLcR::synapse0x17cdf20() {
   return (neuron0x17a8770()*-0.118596);
}

double NNfunction_sb_dLcR::synapse0x17cdf60() {
   return (neuron0x17a8ab0()*0.3271);
}

double NNfunction_sb_dLcR::synapse0x17cdfa0() {
   return (neuron0x17a8df0()*0.2473);
}

double NNfunction_sb_dLcR::synapse0x17cdfe0() {
   return (neuron0x17a9130()*-0.241672);
}

double NNfunction_sb_dLcR::synapse0x17aa580() {
   return (neuron0x17a95d0()*-1.22488);
}

double NNfunction_sb_dLcR::synapse0x17aa5c0() {
   return (neuron0x17a9ee0()*-1.08401);
}

double NNfunction_sb_dLcR::synapse0x17aba90() {
   return (neuron0x17aa9c0()*1.49348);
}

double NNfunction_sb_dLcR::synapse0x17abad0() {
   return (neuron0x1564250()*-0.418501);
}

double NNfunction_sb_dLcR::synapse0x17ac460() {
   return (neuron0x17ab7e0()*-1.55716);
}

double NNfunction_sb_dLcR::synapse0x17ac4a0() {
   return (neuron0x17ac1b0()*-7.09219);
}

double NNfunction_sb_dLcR::synapse0x17ad230() {
   return (neuron0x17acf80()*1.27244);
}

double NNfunction_sb_dLcR::synapse0x17ad270() {
   return (neuron0x17ad950()*1.41678);
}

double NNfunction_sb_dLcR::synapse0x17adc00() {
   return (neuron0x17ae320()*-1.27294);
}

double NNfunction_sb_dLcR::synapse0x17adc40() {
   return (neuron0x17aee00()*-6.44884);
}

double NNfunction_sb_dLcR::synapse0x17ae5d0() {
   return (neuron0x17af7d0()*0.433906);
}

double NNfunction_sb_dLcR::synapse0x17ae610() {
   return (neuron0x17ac8b0()*-2.92006);
}

double NNfunction_sb_dLcR::synapse0x17af0b0() {
   return (neuron0x17b1380()*-0.608204);
}

double NNfunction_sb_dLcR::synapse0x17af0f0() {
   return (neuron0x17b1d50()*-0.499859);
}

double NNfunction_sb_dLcR::synapse0x17afa80() {
   return (neuron0x17b2720()*1.1649);
}

double NNfunction_sb_dLcR::synapse0x17afac0() {
   return (neuron0x17b30f0()*-0.170939);
}

double NNfunction_sb_dLcR::synapse0x17acb60() {
   return (neuron0x17b4f00()*-1.93382);
}

double NNfunction_sb_dLcR::synapse0x17acba0() {
   return (neuron0x17b51e0()*-2.80674);
}

double NNfunction_sb_dLcR::synapse0x17b1630() {
   return (neuron0x17b5bb0()*-0.743144);
}

double NNfunction_sb_dLcR::synapse0x17b1670() {
   return (neuron0x17b6580()*0.502966);
}

double NNfunction_sb_dLcR::synapse0x17b2000() {
   return (neuron0x17b6f50()*-0.882781);
}

double NNfunction_sb_dLcR::synapse0x17b2040() {
   return (neuron0x17b7920()*0.586771);
}

double NNfunction_sb_dLcR::synapse0x17b29d0() {
   return (neuron0x17b0470()*-0.443627);
}

double NNfunction_sb_dLcR::synapse0x17b2a10() {
   return (neuron0x17b0e40()*0.590637);
}

double NNfunction_sb_dLcR::synapse0x17b33a0() {
   return (neuron0x17ba6b0()*0.378022);
}

double NNfunction_sb_dLcR::synapse0x17b33e0() {
   return (neuron0x17bb080()*-0.221367);
}

double NNfunction_sb_dLcR::synapse0x17a7510() {
   return (neuron0x17bba50()*-0.341971);
}

double NNfunction_sb_dLcR::synapse0x17a7550() {
   return (neuron0x17bc420()*1.63685);
}

double NNfunction_sb_dLcR::synapse0x17b5490() {
   return (neuron0x17bcdf0()*3.19851);
}

double NNfunction_sb_dLcR::synapse0x17b54d0() {
   return (neuron0x17bd7c0()*-0.278743);
}

double NNfunction_sb_dLcR::synapse0x17b5e60() {
   return (neuron0x17be190()*0.34615);
}

double NNfunction_sb_dLcR::synapse0x17b5ea0() {
   return (neuron0x17beb60()*0.819516);
}

double NNfunction_sb_dLcR::synapse0x17b6830() {
   return (neuron0x17b4bf0()*-0.756125);
}

double NNfunction_sb_dLcR::synapse0x17b6870() {
   return (neuron0x17c1740()*1.48822);
}

double NNfunction_sb_dLcR::synapse0x17b7200() {
   return (neuron0x17c2110()*1.75376);
}

double NNfunction_sb_dLcR::synapse0x17b7240() {
   return (neuron0x17c2ae0()*0.41509);
}

double NNfunction_sb_dLcR::synapse0x17b7bd0() {
   return (neuron0x17c34b0()*0.511451);
}

double NNfunction_sb_dLcR::synapse0x17b7c10() {
   return (neuron0x17c3e80()*0.226087);
}

double NNfunction_sb_dLcR::synapse0x17b0720() {
   return (neuron0x17c4850()*-0.0404697);
}

double NNfunction_sb_dLcR::synapse0x17b0760() {
   return (neuron0x17c5220()*5.14249);
}

double NNfunction_sb_dLcR::synapse0x17b9fd0() {
   return (neuron0x17c5bf0()*1.08635);
}

double NNfunction_sb_dLcR::synapse0x17ba010() {
   return (neuron0x17c67d0()*-0.818028);
}

double NNfunction_sb_dLcR::synapse0x17ba960() {
   return (neuron0x17c71a0()*0.592189);
}

double NNfunction_sb_dLcR::synapse0x17ba9a0() {
   return (neuron0x17b8020()*-1.72499);
}

double NNfunction_sb_dLcR::synapse0x17bb330() {
   return (neuron0x17b89f0()*1.722);
}

double NNfunction_sb_dLcR::synapse0x17bb370() {
   return (neuron0x17b93c0()*1.79252);
}

double NNfunction_sb_dLcR::synapse0x17bbd00() {
   return (neuron0x17cba00()*-0.153903);
}

double NNfunction_sb_dLcR::synapse0x17bbd40() {
   return (neuron0x17cc2b0()*-0.687528);
}

double NNfunction_sb_dLcR::synapse0x17bc6d0() {
   return (neuron0x17ccc80()*1.22066);
}

double NNfunction_sb_dLcR::synapse0x17bc710() {
   return (neuron0x17cd650()*-0.810175);
}

double NNfunction_sb_dLcR::synapse0x17bee10() {
   return (neuron0x17a95d0()*-0.0479976);
}

double NNfunction_sb_dLcR::synapse0x17bee50() {
   return (neuron0x17a9ee0()*-0.0396791);
}

double NNfunction_sb_dLcR::synapse0x17b43d0() {
   return (neuron0x17aa9c0()*-0.0442631);
}

double NNfunction_sb_dLcR::synapse0x17b4410() {
   return (neuron0x1564250()*-0.0175287);
}

double NNfunction_sb_dLcR::synapse0x17c19f0() {
   return (neuron0x17ab7e0()*-0.0676907);
}

double NNfunction_sb_dLcR::synapse0x17c1a30() {
   return (neuron0x17ac1b0()*3.27103);
}

double NNfunction_sb_dLcR::synapse0x17c23c0() {
   return (neuron0x17acf80()*0.146665);
}

double NNfunction_sb_dLcR::synapse0x17c2400() {
   return (neuron0x17ad950()*-1.36125);
}

double NNfunction_sb_dLcR::synapse0x17c2d90() {
   return (neuron0x17ae320()*-0.0417511);
}

double NNfunction_sb_dLcR::synapse0x17c2dd0() {
   return (neuron0x17aee00()*0.342434);
}

double NNfunction_sb_dLcR::synapse0x17c3760() {
   return (neuron0x17af7d0()*0.0508111);
}

double NNfunction_sb_dLcR::synapse0x17c37a0() {
   return (neuron0x17ac8b0()*-0.272208);
}

double NNfunction_sb_dLcR::synapse0x17c4130() {
   return (neuron0x17b1380()*-0.0454021);
}

double NNfunction_sb_dLcR::synapse0x17c4170() {
   return (neuron0x17b1d50()*-0.030966);
}

double NNfunction_sb_dLcR::synapse0x17c4b00() {
   return (neuron0x17b2720()*0.0779959);
}

double NNfunction_sb_dLcR::synapse0x17c4b40() {
   return (neuron0x17b30f0()*0.130832);
}

double NNfunction_sb_dLcR::synapse0x17c54d0() {
   return (neuron0x17b4f00()*0.0362631);
}

double NNfunction_sb_dLcR::synapse0x17c5510() {
   return (neuron0x17b51e0()*3.73666);
}

double NNfunction_sb_dLcR::synapse0x17c5ea0() {
   return (neuron0x17b5bb0()*-0.111379);
}

double NNfunction_sb_dLcR::synapse0x17c5ee0() {
   return (neuron0x17b6580()*0.125818);
}

double NNfunction_sb_dLcR::synapse0x17c6a80() {
   return (neuron0x17b6f50()*-0.082519);
}

double NNfunction_sb_dLcR::synapse0x17c6ac0() {
   return (neuron0x17b7920()*0.0689755);
}

double NNfunction_sb_dLcR::synapse0x17c7450() {
   return (neuron0x17b0470()*-0.0683354);
}

double NNfunction_sb_dLcR::synapse0x17c7490() {
   return (neuron0x17b0e40()*1.04484);
}

double NNfunction_sb_dLcR::synapse0x17b82d0() {
   return (neuron0x17ba6b0()*-1.50474);
}

double NNfunction_sb_dLcR::synapse0x17b8310() {
   return (neuron0x17bb080()*-0.56265);
}

double NNfunction_sb_dLcR::synapse0x17b8ca0() {
   return (neuron0x17bba50()*-0.0255151);
}

double NNfunction_sb_dLcR::synapse0x17b8ce0() {
   return (neuron0x17bc420()*0.065109);
}

double NNfunction_sb_dLcR::synapse0x17b9670() {
   return (neuron0x17bcdf0()*0.349731);
}

double NNfunction_sb_dLcR::synapse0x17b96b0() {
   return (neuron0x17bd7c0()*0.751174);
}

double NNfunction_sb_dLcR::synapse0x17cbb90() {
   return (neuron0x17be190()*0.0281269);
}

double NNfunction_sb_dLcR::synapse0x17cbbd0() {
   return (neuron0x17beb60()*-0.855256);
}

double NNfunction_sb_dLcR::synapse0x17cc560() {
   return (neuron0x17b4bf0()*-0.280711);
}

double NNfunction_sb_dLcR::synapse0x17cc5a0() {
   return (neuron0x17c1740()*-0.383576);
}

double NNfunction_sb_dLcR::synapse0x17ccf30() {
   return (neuron0x17c2110()*0.0830962);
}

double NNfunction_sb_dLcR::synapse0x17ccf70() {
   return (neuron0x17c2ae0()*0.0659663);
}

double NNfunction_sb_dLcR::synapse0x17cd900() {
   return (neuron0x17c34b0()*0.171643);
}

double NNfunction_sb_dLcR::synapse0x17cd940() {
   return (neuron0x17c3e80()*-0.0758265);
}

double NNfunction_sb_dLcR::synapse0x17a97f0() {
   return (neuron0x17c4850()*0.0130742);
}

double NNfunction_sb_dLcR::synapse0x17a9830() {
   return (neuron0x17c5220()*1.32283);
}

double NNfunction_sb_dLcR::synapse0x17bd0a0() {
   return (neuron0x17c5bf0()*-0.50487);
}

double NNfunction_sb_dLcR::synapse0x17bd0e0() {
   return (neuron0x17c67d0()*-0.210283);
}

double NNfunction_sb_dLcR::synapse0x17ce020() {
   return (neuron0x17c71a0()*0.0122395);
}

double NNfunction_sb_dLcR::synapse0x17ce060() {
   return (neuron0x17b8020()*-0.106573);
}

double NNfunction_sb_dLcR::synapse0x17ce0a0() {
   return (neuron0x17b89f0()*0.124717);
}

double NNfunction_sb_dLcR::synapse0x17ce0e0() {
   return (neuron0x17b93c0()*-0.215205);
}

double NNfunction_sb_dLcR::synapse0x17d4f90() {
   return (neuron0x17cba00()*-0.0478164);
}

double NNfunction_sb_dLcR::synapse0x17d4fd0() {
   return (neuron0x17cc2b0()*-0.834848);
}

double NNfunction_sb_dLcR::synapse0x17d5010() {
   return (neuron0x17ccc80()*-0.871834);
}

double NNfunction_sb_dLcR::synapse0x17d5050() {
   return (neuron0x17cd650()*0.0163013);
}

double NNfunction_sb_dLcR::synapse0x17d53d0() {
   return (neuron0x17a95d0()*-0.318457);
}

double NNfunction_sb_dLcR::synapse0x17d5410() {
   return (neuron0x17a9ee0()*-0.34784);
}

double NNfunction_sb_dLcR::synapse0x17d5450() {
   return (neuron0x17aa9c0()*0.0985391);
}

double NNfunction_sb_dLcR::synapse0x17d5490() {
   return (neuron0x1564250()*-0.386782);
}

double NNfunction_sb_dLcR::synapse0x17d54d0() {
   return (neuron0x17ab7e0()*-0.336752);
}

double NNfunction_sb_dLcR::synapse0x17d5510() {
   return (neuron0x17ac1b0()*-0.397121);
}

double NNfunction_sb_dLcR::synapse0x17d5550() {
   return (neuron0x17acf80()*-0.735548);
}

double NNfunction_sb_dLcR::synapse0x17d5590() {
   return (neuron0x17ad950()*-1.20732);
}

double NNfunction_sb_dLcR::synapse0x17d55d0() {
   return (neuron0x17ae320()*-0.813859);
}

double NNfunction_sb_dLcR::synapse0x17d5610() {
   return (neuron0x17aee00()*0.183923);
}

double NNfunction_sb_dLcR::synapse0x17d5650() {
   return (neuron0x17af7d0()*-0.241037);
}

double NNfunction_sb_dLcR::synapse0x17d5690() {
   return (neuron0x17ac8b0()*-0.602038);
}

double NNfunction_sb_dLcR::synapse0x17d56d0() {
   return (neuron0x17b1380()*0.19984);
}

double NNfunction_sb_dLcR::synapse0x17d5710() {
   return (neuron0x17b1d50()*-0.36714);
}

double NNfunction_sb_dLcR::synapse0x17d5750() {
   return (neuron0x17b2720()*0.517109);
}

double NNfunction_sb_dLcR::synapse0x17d5790() {
   return (neuron0x17b30f0()*0.0802034);
}

double NNfunction_sb_dLcR::synapse0x17d5220() {
   return (neuron0x17b4f00()*0.369065);
}

double NNfunction_sb_dLcR::synapse0x17d5260() {
   return (neuron0x17b51e0()*0.223019);
}

double NNfunction_sb_dLcR::synapse0x17d58e0() {
   return (neuron0x17b5bb0()*-0.0763459);
}

double NNfunction_sb_dLcR::synapse0x17d5920() {
   return (neuron0x17b6580()*-0.173242);
}

double NNfunction_sb_dLcR::synapse0x17d5960() {
   return (neuron0x17b6f50()*-0.380672);
}

double NNfunction_sb_dLcR::synapse0x17d59a0() {
   return (neuron0x17b7920()*-0.611269);
}

double NNfunction_sb_dLcR::synapse0x17d59e0() {
   return (neuron0x17b0470()*-0.450224);
}

double NNfunction_sb_dLcR::synapse0x17d5a20() {
   return (neuron0x17b0e40()*0.336847);
}

double NNfunction_sb_dLcR::synapse0x17d5a60() {
   return (neuron0x17ba6b0()*-1.47963);
}

double NNfunction_sb_dLcR::synapse0x17d5aa0() {
   return (neuron0x17bb080()*0.444299);
}

double NNfunction_sb_dLcR::synapse0x17d5ae0() {
   return (neuron0x17bba50()*-0.130364);
}

double NNfunction_sb_dLcR::synapse0x17d5b20() {
   return (neuron0x17bc420()*-0.158493);
}

double NNfunction_sb_dLcR::synapse0x17d5b60() {
   return (neuron0x17bcdf0()*-0.301756);
}

double NNfunction_sb_dLcR::synapse0x17d5ba0() {
   return (neuron0x17bd7c0()*0.431107);
}

double NNfunction_sb_dLcR::synapse0x17d5be0() {
   return (neuron0x17be190()*-0.977522);
}

double NNfunction_sb_dLcR::synapse0x17d5c20() {
   return (neuron0x17beb60()*-0.400014);
}

double NNfunction_sb_dLcR::synapse0x17d57d0() {
   return (neuron0x17b4bf0()*-0.272847);
}

double NNfunction_sb_dLcR::synapse0x17d5810() {
   return (neuron0x17c1740()*-0.756191);
}

double NNfunction_sb_dLcR::synapse0x17d5850() {
   return (neuron0x17c2110()*0.312542);
}

double NNfunction_sb_dLcR::synapse0x17d5890() {
   return (neuron0x17c2ae0()*-0.372788);
}

double NNfunction_sb_dLcR::synapse0x17d5e70() {
   return (neuron0x17c34b0()*-0.707924);
}

double NNfunction_sb_dLcR::synapse0x17d5eb0() {
   return (neuron0x17c3e80()*-0.539725);
}

double NNfunction_sb_dLcR::synapse0x17d5ef0() {
   return (neuron0x17c4850()*0.793869);
}

double NNfunction_sb_dLcR::synapse0x17d5f30() {
   return (neuron0x17c5220()*-0.813737);
}

double NNfunction_sb_dLcR::synapse0x17d5f70() {
   return (neuron0x17c5bf0()*-0.15785);
}

double NNfunction_sb_dLcR::synapse0x17d5fb0() {
   return (neuron0x17c67d0()*0.767917);
}

double NNfunction_sb_dLcR::synapse0x17d5ff0() {
   return (neuron0x17c71a0()*0.415992);
}

double NNfunction_sb_dLcR::synapse0x17d6030() {
   return (neuron0x17b8020()*-0.556962);
}

double NNfunction_sb_dLcR::synapse0x17d6070() {
   return (neuron0x17b89f0()*-0.547288);
}

double NNfunction_sb_dLcR::synapse0x17d60b0() {
   return (neuron0x17b93c0()*0.696536);
}

double NNfunction_sb_dLcR::synapse0x17d60f0() {
   return (neuron0x17cba00()*0.165093);
}

double NNfunction_sb_dLcR::synapse0x17d6130() {
   return (neuron0x17cc2b0()*-0.929037);
}

double NNfunction_sb_dLcR::synapse0x17d6170() {
   return (neuron0x17ccc80()*-0.644424);
}

double NNfunction_sb_dLcR::synapse0x17d61b0() {
   return (neuron0x17cd650()*0.520563);
}

double NNfunction_sb_dLcR::synapse0x17d6530() {
   return (neuron0x17a95d0()*0.823275);
}

double NNfunction_sb_dLcR::synapse0x17d6570() {
   return (neuron0x17a9ee0()*1.44858);
}

double NNfunction_sb_dLcR::synapse0x17d65b0() {
   return (neuron0x17aa9c0()*0.138045);
}

double NNfunction_sb_dLcR::synapse0x17d65f0() {
   return (neuron0x1564250()*1.54981);
}

double NNfunction_sb_dLcR::synapse0x17d6630() {
   return (neuron0x17ab7e0()*0.515621);
}

double NNfunction_sb_dLcR::synapse0x17d6670() {
   return (neuron0x17ac1b0()*0.62272);
}

double NNfunction_sb_dLcR::synapse0x17d66b0() {
   return (neuron0x17acf80()*0.397975);
}

double NNfunction_sb_dLcR::synapse0x17d66f0() {
   return (neuron0x17ad950()*0.258923);
}

double NNfunction_sb_dLcR::synapse0x17d6730() {
   return (neuron0x17ae320()*-2.771);
}

double NNfunction_sb_dLcR::synapse0x17d6770() {
   return (neuron0x17aee00()*1.07841);
}

double NNfunction_sb_dLcR::synapse0x17d67b0() {
   return (neuron0x17af7d0()*-2.13533);
}

double NNfunction_sb_dLcR::synapse0x17d67f0() {
   return (neuron0x17ac8b0()*0.324715);
}

double NNfunction_sb_dLcR::synapse0x17d6830() {
   return (neuron0x17b1380()*0.886158);
}

double NNfunction_sb_dLcR::synapse0x17d6870() {
   return (neuron0x17b1d50()*1.18344);
}

double NNfunction_sb_dLcR::synapse0x17d68b0() {
   return (neuron0x17b2720()*1.23363);
}

double NNfunction_sb_dLcR::synapse0x17d68f0() {
   return (neuron0x17b30f0()*-3.34146);
}

double NNfunction_sb_dLcR::synapse0x17d6380() {
   return (neuron0x17b4f00()*1.406);
}

double NNfunction_sb_dLcR::synapse0x17d63c0() {
   return (neuron0x17b51e0()*0.98645);
}

double NNfunction_sb_dLcR::synapse0x17d6a40() {
   return (neuron0x17b5bb0()*-1.28629);
}

double NNfunction_sb_dLcR::synapse0x17d6a80() {
   return (neuron0x17b6580()*-1.47846);
}

double NNfunction_sb_dLcR::synapse0x17d6ac0() {
   return (neuron0x17b6f50()*0.855692);
}

double NNfunction_sb_dLcR::synapse0x17d6b00() {
   return (neuron0x17b7920()*-0.927987);
}

double NNfunction_sb_dLcR::synapse0x17d6b40() {
   return (neuron0x17b0470()*0.61341);
}

double NNfunction_sb_dLcR::synapse0x17d6b80() {
   return (neuron0x17b0e40()*-0.390514);
}

double NNfunction_sb_dLcR::synapse0x17d6bc0() {
   return (neuron0x17ba6b0()*-0.28988);
}

double NNfunction_sb_dLcR::synapse0x17d6c00() {
   return (neuron0x17bb080()*2.37009);
}

double NNfunction_sb_dLcR::synapse0x17d6c40() {
   return (neuron0x17bba50()*0.746608);
}

double NNfunction_sb_dLcR::synapse0x17d6c80() {
   return (neuron0x17bc420()*1.19054);
}

double NNfunction_sb_dLcR::synapse0x17d6cc0() {
   return (neuron0x17bcdf0()*-0.826484);
}

double NNfunction_sb_dLcR::synapse0x17d6d00() {
   return (neuron0x17bd7c0()*0.596723);
}

double NNfunction_sb_dLcR::synapse0x17d6d40() {
   return (neuron0x17be190()*0.328374);
}

double NNfunction_sb_dLcR::synapse0x17d6d80() {
   return (neuron0x17beb60()*-0.308215);
}

double NNfunction_sb_dLcR::synapse0x17d6930() {
   return (neuron0x17b4bf0()*1.62427);
}

double NNfunction_sb_dLcR::synapse0x17d6970() {
   return (neuron0x17c1740()*-0.580039);
}

double NNfunction_sb_dLcR::synapse0x17d69b0() {
   return (neuron0x17c2110()*2.52307);
}

double NNfunction_sb_dLcR::synapse0x17d69f0() {
   return (neuron0x17c2ae0()*0.303105);
}

double NNfunction_sb_dLcR::synapse0x17d6fd0() {
   return (neuron0x17c34b0()*-1.0369);
}

double NNfunction_sb_dLcR::synapse0x17d7010() {
   return (neuron0x17c3e80()*2.26839);
}

double NNfunction_sb_dLcR::synapse0x17d7050() {
   return (neuron0x17c4850()*1.19467);
}

double NNfunction_sb_dLcR::synapse0x17d7090() {
   return (neuron0x17c5220()*0.357555);
}

double NNfunction_sb_dLcR::synapse0x17d70d0() {
   return (neuron0x17c5bf0()*-2.02595);
}

double NNfunction_sb_dLcR::synapse0x17d7110() {
   return (neuron0x17c67d0()*1.94179);
}

double NNfunction_sb_dLcR::synapse0x17d7150() {
   return (neuron0x17c71a0()*-1.10691);
}

double NNfunction_sb_dLcR::synapse0x17d7190() {
   return (neuron0x17b8020()*-1.30614);
}

double NNfunction_sb_dLcR::synapse0x17d71d0() {
   return (neuron0x17b89f0()*0.106243);
}

double NNfunction_sb_dLcR::synapse0x17d7210() {
   return (neuron0x17b93c0()*-0.366359);
}

double NNfunction_sb_dLcR::synapse0x17d7250() {
   return (neuron0x17cba00()*2.07224);
}

double NNfunction_sb_dLcR::synapse0x17d7290() {
   return (neuron0x17cc2b0()*-1.30448);
}

double NNfunction_sb_dLcR::synapse0x17d72d0() {
   return (neuron0x17ccc80()*-1.16702);
}

double NNfunction_sb_dLcR::synapse0x17d7310() {
   return (neuron0x17cd650()*2.24709);
}

double NNfunction_sb_dLcR::synapse0x17d7690() {
   return (neuron0x17a95d0()*-0.116);
}

double NNfunction_sb_dLcR::synapse0x17d76d0() {
   return (neuron0x17a9ee0()*-0.0391206);
}

double NNfunction_sb_dLcR::synapse0x17d7710() {
   return (neuron0x17aa9c0()*0.314492);
}

double NNfunction_sb_dLcR::synapse0x17d7750() {
   return (neuron0x1564250()*-0.0418009);
}

double NNfunction_sb_dLcR::synapse0x17d7790() {
   return (neuron0x17ab7e0()*-0.132457);
}

double NNfunction_sb_dLcR::synapse0x17d77d0() {
   return (neuron0x17ac1b0()*1.51504);
}

double NNfunction_sb_dLcR::synapse0x17d7810() {
   return (neuron0x17acf80()*-0.0488938);
}

double NNfunction_sb_dLcR::synapse0x17d7850() {
   return (neuron0x17ad950()*-0.8072);
}

double NNfunction_sb_dLcR::synapse0x17d7890() {
   return (neuron0x17ae320()*-1.00667);
}

double NNfunction_sb_dLcR::synapse0x17d78d0() {
   return (neuron0x17aee00()*0.0904047);
}

double NNfunction_sb_dLcR::synapse0x17d7910() {
   return (neuron0x17af7d0()*-0.00808615);
}

double NNfunction_sb_dLcR::synapse0x17d7950() {
   return (neuron0x17ac8b0()*-0.487911);
}

double NNfunction_sb_dLcR::synapse0x17d7990() {
   return (neuron0x17b1380()*-0.0733971);
}

double NNfunction_sb_dLcR::synapse0x17d79d0() {
   return (neuron0x17b1d50()*-0.0379047);
}

double NNfunction_sb_dLcR::synapse0x17d7a10() {
   return (neuron0x17b2720()*0.0125022);
}

double NNfunction_sb_dLcR::synapse0x17d7a50() {
   return (neuron0x17b30f0()*-0.134991);
}

double NNfunction_sb_dLcR::synapse0x17d74e0() {
   return (neuron0x17b4f00()*0.433508);
}

double NNfunction_sb_dLcR::synapse0x17d7520() {
   return (neuron0x17b51e0()*0.753287);
}

double NNfunction_sb_dLcR::synapse0x17d7ba0() {
   return (neuron0x17b5bb0()*0.0244733);
}

double NNfunction_sb_dLcR::synapse0x17d7be0() {
   return (neuron0x17b6580()*-0.164361);
}

double NNfunction_sb_dLcR::synapse0x17d7c20() {
   return (neuron0x17b6f50()*0.262904);
}

double NNfunction_sb_dLcR::synapse0x17d7c60() {
   return (neuron0x17b7920()*-0.00849785);
}

double NNfunction_sb_dLcR::synapse0x17d7ca0() {
   return (neuron0x17b0470()*0.0967295);
}

double NNfunction_sb_dLcR::synapse0x17d7ce0() {
   return (neuron0x17b0e40()*3.95382);
}

double NNfunction_sb_dLcR::synapse0x17d7d20() {
   return (neuron0x17ba6b0()*-1.90331);
}

double NNfunction_sb_dLcR::synapse0x17d7d60() {
   return (neuron0x17bb080()*0.716287);
}

double NNfunction_sb_dLcR::synapse0x17d7da0() {
   return (neuron0x17bba50()*-0.034314);
}

double NNfunction_sb_dLcR::synapse0x17d7de0() {
   return (neuron0x17bc420()*-2.3669);
}

double NNfunction_sb_dLcR::synapse0x17d7e20() {
   return (neuron0x17bcdf0()*0.686022);
}

double NNfunction_sb_dLcR::synapse0x17d7e60() {
   return (neuron0x17bd7c0()*3.93135);
}

double NNfunction_sb_dLcR::synapse0x17d7ea0() {
   return (neuron0x17be190()*-0.00377851);
}

double NNfunction_sb_dLcR::synapse0x17d7ee0() {
   return (neuron0x17beb60()*-1.05306);
}

double NNfunction_sb_dLcR::synapse0x17d7a90() {
   return (neuron0x17b4bf0()*0.428224);
}

double NNfunction_sb_dLcR::synapse0x17d7ad0() {
   return (neuron0x17c1740()*-0.669864);
}

double NNfunction_sb_dLcR::synapse0x17d7b10() {
   return (neuron0x17c2110()*0.328203);
}

double NNfunction_sb_dLcR::synapse0x17d7b50() {
   return (neuron0x17c2ae0()*-0.158943);
}

double NNfunction_sb_dLcR::synapse0x17d8130() {
   return (neuron0x17c34b0()*-0.210814);
}

double NNfunction_sb_dLcR::synapse0x17d8170() {
   return (neuron0x17c3e80()*0.101851);
}

double NNfunction_sb_dLcR::synapse0x17d81b0() {
   return (neuron0x17c4850()*0.0194647);
}

double NNfunction_sb_dLcR::synapse0x17d81f0() {
   return (neuron0x17c5220()*2.92074);
}

double NNfunction_sb_dLcR::synapse0x17d8230() {
   return (neuron0x17c5bf0()*-0.880302);
}

double NNfunction_sb_dLcR::synapse0x17d8270() {
   return (neuron0x17c67d0()*0.190703);
}

double NNfunction_sb_dLcR::synapse0x17d82b0() {
   return (neuron0x17c71a0()*0.0253219);
}

double NNfunction_sb_dLcR::synapse0x17d82f0() {
   return (neuron0x17b8020()*-0.11958);
}

double NNfunction_sb_dLcR::synapse0x17d8330() {
   return (neuron0x17b89f0()*-0.0390761);
}

double NNfunction_sb_dLcR::synapse0x17d8370() {
   return (neuron0x17b93c0()*-0.305976);
}

double NNfunction_sb_dLcR::synapse0x17d83b0() {
   return (neuron0x17cba00()*0.0477551);
}

double NNfunction_sb_dLcR::synapse0x17d83f0() {
   return (neuron0x17cc2b0()*0.00724794);
}

double NNfunction_sb_dLcR::synapse0x17d8430() {
   return (neuron0x17ccc80()*-0.944869);
}

double NNfunction_sb_dLcR::synapse0x17d8470() {
   return (neuron0x17cd650()*-0.21917);
}

double NNfunction_sb_dLcR::synapse0x17a9590() {
   return (neuron0x17d4850()*10.7137);
}

double NNfunction_sb_dLcR::synapse0x17d86d0() {
   return (neuron0x17d4bf0()*-4.70692);
}

double NNfunction_sb_dLcR::synapse0x17d8710() {
   return (neuron0x17d5090()*-2.07106);
}

double NNfunction_sb_dLcR::synapse0x17d8750() {
   return (neuron0x17d61f0()*-3.69011);
}

double NNfunction_sb_dLcR::synapse0x17d8790() {
   return (neuron0x17d7350()*-3.91646);
}

