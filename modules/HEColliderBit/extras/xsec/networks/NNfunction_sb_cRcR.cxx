#include "NNfunction_sb_cRcR.h"
#include <cmath>

double NNfunction_sb_cRcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4599)/15.3235;
   input1 = (in1 - 0.413361)/1162.74;
   input2 = (in2 - 648.09)/621.378;
   input3 = (in3 - -61.051)/831.989;
   input4 = (in4 - 1089.79)/973.726;
   input5 = (in5 - 909.934)/960.55;
   input6 = (in6 - 926.321)/972.348;
   input7 = (in7 - 933.396)/948.086;
   input8 = (in8 - 899.846)/950.256;
   input9 = (in9 - 888.397)/934.961;
   input10 = (in10 - 984.674)/944.403;
   input11 = (in11 - 708.326)/853.188;
   input12 = (in12 - 704.669)/853.482;
   input13 = (in13 - 505.658)/522.251;
   input14 = (in14 - 743.778)/845.006;
   input15 = (in15 - 332.714)/292.66;
   input16 = (in16 - 545.18)/577.674;
   input17 = (in17 - 745.637)/877.709;
   input18 = (in18 - 730.402)/873.557;
   input19 = (in19 - 791.665)/868.654;
   input20 = (in20 - -3.67514)/497.634;
   input21 = (in21 - 1.2812)/1156.27;
   input22 = (in22 - 0.817181)/1205.24;
   input23 = (in23 - -190.548)/609.775;
   switch(index) {
     case 0:
         return neuron0x2c0e4b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cRcR::Value(int index, double* input) {
   input0 = (input[0] - 23.4599)/15.3235;
   input1 = (input[1] - 0.413361)/1162.74;
   input2 = (input[2] - 648.09)/621.378;
   input3 = (input[3] - -61.051)/831.989;
   input4 = (input[4] - 1089.79)/973.726;
   input5 = (input[5] - 909.934)/960.55;
   input6 = (input[6] - 926.321)/972.348;
   input7 = (input[7] - 933.396)/948.086;
   input8 = (input[8] - 899.846)/950.256;
   input9 = (input[9] - 888.397)/934.961;
   input10 = (input[10] - 984.674)/944.403;
   input11 = (input[11] - 708.326)/853.188;
   input12 = (input[12] - 704.669)/853.482;
   input13 = (input[13] - 505.658)/522.251;
   input14 = (input[14] - 743.778)/845.006;
   input15 = (input[15] - 332.714)/292.66;
   input16 = (input[16] - 545.18)/577.674;
   input17 = (input[17] - 745.637)/877.709;
   input18 = (input[18] - 730.402)/873.557;
   input19 = (input[19] - 791.665)/868.654;
   input20 = (input[20] - -3.67514)/497.634;
   input21 = (input[21] - 1.2812)/1156.27;
   input22 = (input[22] - 0.817181)/1205.24;
   input23 = (input[23] - -190.548)/609.775;
   switch(index) {
     case 0:
         return neuron0x2c0e4b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cRcR::neuron0x2bda570() {
   return input0;
}

double NNfunction_sb_cRcR::neuron0x2bda8b0() {
   return input1;
}

double NNfunction_sb_cRcR::neuron0x2bdabf0() {
   return input2;
}

double NNfunction_sb_cRcR::neuron0x2bdaf30() {
   return input3;
}

double NNfunction_sb_cRcR::neuron0x2bdb270() {
   return input4;
}

double NNfunction_sb_cRcR::neuron0x2bdb5b0() {
   return input5;
}

double NNfunction_sb_cRcR::neuron0x2bdb8f0() {
   return input6;
}

double NNfunction_sb_cRcR::neuron0x2bdbc30() {
   return input7;
}

double NNfunction_sb_cRcR::neuron0x2bdbf70() {
   return input8;
}

double NNfunction_sb_cRcR::neuron0x2bdc2b0() {
   return input9;
}

double NNfunction_sb_cRcR::neuron0x2bdc5f0() {
   return input10;
}

double NNfunction_sb_cRcR::neuron0x2bdc930() {
   return input11;
}

double NNfunction_sb_cRcR::neuron0x2bdcc70() {
   return input12;
}

double NNfunction_sb_cRcR::neuron0x2bdcfb0() {
   return input13;
}

double NNfunction_sb_cRcR::neuron0x2bdd2f0() {
   return input14;
}

double NNfunction_sb_cRcR::neuron0x2bdd630() {
   return input15;
}

double NNfunction_sb_cRcR::neuron0x2bdd970() {
   return input16;
}

double NNfunction_sb_cRcR::neuron0x2bdded0() {
   return input17;
}

double NNfunction_sb_cRcR::neuron0x2bde0f0() {
   return input18;
}

double NNfunction_sb_cRcR::neuron0x2bde430() {
   return input19;
}

double NNfunction_sb_cRcR::neuron0x2bde770() {
   return input20;
}

double NNfunction_sb_cRcR::neuron0x2bdeab0() {
   return input21;
}

double NNfunction_sb_cRcR::neuron0x2bdedf0() {
   return input22;
}

double NNfunction_sb_cRcR::neuron0x2bdf130() {
   return input23;
}

double NNfunction_sb_cRcR::input0x2bdf5d0() {
   double input = 1.88015;
   input += synapse0x299a3e0();
   input += synapse0x2bda430();
   input += synapse0x2bda470();
   input += synapse0x2bdf880();
   input += synapse0x2bdf8c0();
   input += synapse0x2bdf900();
   input += synapse0x2bdf940();
   input += synapse0x2bdf980();
   input += synapse0x2bdf9c0();
   input += synapse0x2bdfa00();
   input += synapse0x2bdfa40();
   input += synapse0x2bdfa80();
   input += synapse0x2bdfac0();
   input += synapse0x2bdfb00();
   input += synapse0x2bdfb40();
   input += synapse0x2bdfb80();
   input += synapse0x2bda3a0();
   input += synapse0x2bda3e0();
   input += synapse0x298bc80();
   input += synapse0x298bcc0();
   input += synapse0x2bdfde0();
   input += synapse0x2bdfe20();
   input += synapse0x2bdfe60();
   input += synapse0x2bdfea0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bdf5d0() {
   double input = input0x2bdf5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bdfee0() {
   double input = 1.23199;
   input += synapse0x2be0220();
   input += synapse0x2be0260();
   input += synapse0x2be02a0();
   input += synapse0x2be02e0();
   input += synapse0x2be0320();
   input += synapse0x2be0360();
   input += synapse0x2be03a0();
   input += synapse0x2be03e0();
   input += synapse0x2be0420();
   input += synapse0x2bdfcd0();
   input += synapse0x2bdfd10();
   input += synapse0x2bdfd50();
   input += synapse0x2bdfd90();
   input += synapse0x2be0670();
   input += synapse0x2be06b0();
   input += synapse0x2be06f0();
   input += synapse0x2be0070();
   input += synapse0x2be00b0();
   input += synapse0x2be0840();
   input += synapse0x2be0880();
   input += synapse0x2be08c0();
   input += synapse0x2be0900();
   input += synapse0x2be0940();
   input += synapse0x2be0980();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bdfee0() {
   double input = input0x2bdfee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2be09c0() {
   double input = 0.510614;
   input += synapse0x2be0d00();
   input += synapse0x2be0d40();
   input += synapse0x2be0d80();
   input += synapse0x2be0dc0();
   input += synapse0x2be0e00();
   input += synapse0x2be0e40();
   input += synapse0x2be0e80();
   input += synapse0x2be0ec0();
   input += synapse0x2be0f00();
   input += synapse0x2be0f40();
   input += synapse0x2be0f80();
   input += synapse0x2be0fc0();
   input += synapse0x2be1000();
   input += synapse0x2be1040();
   input += synapse0x2be1080();
   input += synapse0x2be10c0();
   input += synapse0x2be0b50();
   input += synapse0x2be0b90();
   input += synapse0x2999ad0();
   input += synapse0x2999b10();
   input += synapse0x2bc9600();
   input += synapse0x2bc9640();
   input += synapse0x2bc9680();
   input += synapse0x2bda4b0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2be09c0() {
   double input = input0x2be09c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x299a250() {
   double input = 1.25809;
   input += synapse0x2be0610();
   input += synapse0x2bda4f0();
   input += synapse0x2bda530();
   input += synapse0x2be1210();
   input += synapse0x2be1250();
   input += synapse0x2be1290();
   input += synapse0x2be12d0();
   input += synapse0x2be1310();
   input += synapse0x2be1350();
   input += synapse0x2be1390();
   input += synapse0x2be13d0();
   input += synapse0x2be1410();
   input += synapse0x2be1450();
   input += synapse0x2be1490();
   input += synapse0x2be14d0();
   input += synapse0x2be1510();
   input += synapse0x2be0460();
   input += synapse0x2be04a0();
   input += synapse0x2be1660();
   input += synapse0x2be16a0();
   input += synapse0x2be16e0();
   input += synapse0x2be1720();
   input += synapse0x2be1760();
   input += synapse0x2be17a0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x299a250() {
   double input = input0x299a250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2be17e0() {
   double input = 0.231491;
   input += synapse0x2be1b20();
   input += synapse0x2be1b60();
   input += synapse0x2be1ba0();
   input += synapse0x2be1be0();
   input += synapse0x2be1c20();
   input += synapse0x2be1c60();
   input += synapse0x2be1ca0();
   input += synapse0x2be1ce0();
   input += synapse0x2be1d20();
   input += synapse0x2be1d60();
   input += synapse0x2be1da0();
   input += synapse0x2be1de0();
   input += synapse0x2be1e20();
   input += synapse0x2be1e60();
   input += synapse0x2be1ea0();
   input += synapse0x2be1ee0();
   input += synapse0x2be1970();
   input += synapse0x2be19b0();
   input += synapse0x2be2030();
   input += synapse0x2be2070();
   input += synapse0x2be20b0();
   input += synapse0x2be20f0();
   input += synapse0x2be2130();
   input += synapse0x2be2170();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2be17e0() {
   double input = input0x2be17e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2be21b0() {
   double input = 0.182651;
   input += synapse0x2be24f0();
   input += synapse0x2be2530();
   input += synapse0x2be2570();
   input += synapse0x2be25b0();
   input += synapse0x2be25f0();
   input += synapse0x2be2630();
   input += synapse0x2be2670();
   input += synapse0x2be26b0();
   input += synapse0x2be26f0();
   input += synapse0x2999e40();
   input += synapse0x2999e80();
   input += synapse0x2999ec0();
   input += synapse0x2999f00();
   input += synapse0x2999f40();
   input += synapse0x2999f80();
   input += synapse0x2999fc0();
   input += synapse0x2be2340();
   input += synapse0x2be2380();
   input += synapse0x299a110();
   input += synapse0x299a150();
   input += synapse0x299a190();
   input += synapse0x299a1d0();
   input += synapse0x299a210();
   input += synapse0x2be2f40();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2be21b0() {
   double input = input0x2be21b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2be2f80() {
   double input = 0.716104;
   input += synapse0x2be32c0();
   input += synapse0x2be3300();
   input += synapse0x2be3340();
   input += synapse0x2be3380();
   input += synapse0x2be33c0();
   input += synapse0x2be3400();
   input += synapse0x2be3440();
   input += synapse0x2be3480();
   input += synapse0x2be34c0();
   input += synapse0x2be3500();
   input += synapse0x2be3540();
   input += synapse0x2be3580();
   input += synapse0x2be35c0();
   input += synapse0x2be3600();
   input += synapse0x2be3640();
   input += synapse0x2be3680();
   input += synapse0x2be3110();
   input += synapse0x2be3150();
   input += synapse0x2be37d0();
   input += synapse0x2be3810();
   input += synapse0x2be3850();
   input += synapse0x2be3890();
   input += synapse0x2be38d0();
   input += synapse0x2be3910();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2be2f80() {
   double input = input0x2be2f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2be3950() {
   double input = 0.55502;
   input += synapse0x2be3c90();
   input += synapse0x2be3cd0();
   input += synapse0x2be3d10();
   input += synapse0x2be3d50();
   input += synapse0x2be3d90();
   input += synapse0x2be3dd0();
   input += synapse0x2be3e10();
   input += synapse0x2be3e50();
   input += synapse0x2be3e90();
   input += synapse0x2be3ed0();
   input += synapse0x2be3f10();
   input += synapse0x2be3f50();
   input += synapse0x2be3f90();
   input += synapse0x2be3fd0();
   input += synapse0x2be4010();
   input += synapse0x2be4050();
   input += synapse0x2be3ae0();
   input += synapse0x2be3b20();
   input += synapse0x2be41a0();
   input += synapse0x2be41e0();
   input += synapse0x2be4220();
   input += synapse0x2be4260();
   input += synapse0x2be42a0();
   input += synapse0x2be42e0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2be3950() {
   double input = input0x2be3950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2be4320() {
   double input = 0.120464;
   input += synapse0x2bdddc0();
   input += synapse0x2bdde00();
   input += synapse0x2bdde40();
   input += synapse0x2bdde80();
   input += synapse0x2be4870();
   input += synapse0x2be48b0();
   input += synapse0x2be48f0();
   input += synapse0x2be4930();
   input += synapse0x2be4970();
   input += synapse0x2be49b0();
   input += synapse0x2be49f0();
   input += synapse0x2be4a30();
   input += synapse0x2be4a70();
   input += synapse0x2be4ab0();
   input += synapse0x2be4af0();
   input += synapse0x2be4b30();
   input += synapse0x2be44b0();
   input += synapse0x2be44f0();
   input += synapse0x2be4c80();
   input += synapse0x2be4cc0();
   input += synapse0x2be4d00();
   input += synapse0x2be4d40();
   input += synapse0x2be4d80();
   input += synapse0x2be4dc0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2be4320() {
   double input = input0x2be4320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2be4e00() {
   double input = 3.02935;
   input += synapse0x2be5140();
   input += synapse0x2be5180();
   input += synapse0x2be51c0();
   input += synapse0x2be5200();
   input += synapse0x2be5240();
   input += synapse0x2be5280();
   input += synapse0x2be52c0();
   input += synapse0x2be5300();
   input += synapse0x2be5340();
   input += synapse0x2be5380();
   input += synapse0x2be53c0();
   input += synapse0x2be5400();
   input += synapse0x2be5440();
   input += synapse0x2be5480();
   input += synapse0x2be54c0();
   input += synapse0x2be5500();
   input += synapse0x2be4f90();
   input += synapse0x2be4fd0();
   input += synapse0x2be5650();
   input += synapse0x2be5690();
   input += synapse0x2be56d0();
   input += synapse0x2be5710();
   input += synapse0x2be5750();
   input += synapse0x2be5790();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2be4e00() {
   double input = input0x2be4e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2be57d0() {
   double input = -0.742473;
   input += synapse0x2be5b10();
   input += synapse0x2be5b50();
   input += synapse0x2be5b90();
   input += synapse0x2be5bd0();
   input += synapse0x2be5c10();
   input += synapse0x2be5c50();
   input += synapse0x2be5c90();
   input += synapse0x2be5cd0();
   input += synapse0x2be5d10();
   input += synapse0x2be5d50();
   input += synapse0x2be5d90();
   input += synapse0x2be5dd0();
   input += synapse0x2be5e10();
   input += synapse0x2be5e50();
   input += synapse0x2be5e90();
   input += synapse0x2be5ed0();
   input += synapse0x2be5960();
   input += synapse0x2be59a0();
   input += synapse0x2be2730();
   input += synapse0x2be2770();
   input += synapse0x2be27b0();
   input += synapse0x2be27f0();
   input += synapse0x2be2830();
   input += synapse0x2be2870();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2be57d0() {
   double input = input0x2be57d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2be28b0() {
   double input = -0.308767;
   input += synapse0x2be2bf0();
   input += synapse0x2be2c30();
   input += synapse0x2be2c70();
   input += synapse0x2be2cb0();
   input += synapse0x2be2cf0();
   input += synapse0x2be2d30();
   input += synapse0x2be2d70();
   input += synapse0x2be2db0();
   input += synapse0x2be2df0();
   input += synapse0x2be2e30();
   input += synapse0x2be2e70();
   input += synapse0x2be2eb0();
   input += synapse0x2be2ef0();
   input += synapse0x2be7030();
   input += synapse0x2be7070();
   input += synapse0x2be70b0();
   input += synapse0x2be2a40();
   input += synapse0x2be2a80();
   input += synapse0x2be7200();
   input += synapse0x2be7240();
   input += synapse0x2be7280();
   input += synapse0x2be72c0();
   input += synapse0x2be7300();
   input += synapse0x2be7340();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2be28b0() {
   double input = input0x2be28b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2be7380() {
   double input = -1.71287;
   input += synapse0x2be76c0();
   input += synapse0x2be7700();
   input += synapse0x2be7740();
   input += synapse0x2be7780();
   input += synapse0x2be77c0();
   input += synapse0x2be7800();
   input += synapse0x2be7840();
   input += synapse0x2be7880();
   input += synapse0x2be78c0();
   input += synapse0x2be7900();
   input += synapse0x2be7940();
   input += synapse0x2be7980();
   input += synapse0x2be79c0();
   input += synapse0x2be7a00();
   input += synapse0x2be7a40();
   input += synapse0x2be7a80();
   input += synapse0x2be7510();
   input += synapse0x2be7550();
   input += synapse0x2be7bd0();
   input += synapse0x2be7c10();
   input += synapse0x2be7c50();
   input += synapse0x2be7c90();
   input += synapse0x2be7cd0();
   input += synapse0x2be7d10();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2be7380() {
   double input = input0x2be7380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2be7d50() {
   double input = 1.12142;
   input += synapse0x2be8090();
   input += synapse0x2be80d0();
   input += synapse0x2be8110();
   input += synapse0x2be8150();
   input += synapse0x2be8190();
   input += synapse0x2be81d0();
   input += synapse0x2be8210();
   input += synapse0x2be8250();
   input += synapse0x2be8290();
   input += synapse0x2be82d0();
   input += synapse0x2be8310();
   input += synapse0x2be8350();
   input += synapse0x2be8390();
   input += synapse0x2be83d0();
   input += synapse0x2be8410();
   input += synapse0x2be8450();
   input += synapse0x2be7ee0();
   input += synapse0x2be7f20();
   input += synapse0x2be85a0();
   input += synapse0x2be85e0();
   input += synapse0x2be8620();
   input += synapse0x2be8660();
   input += synapse0x2be86a0();
   input += synapse0x2be86e0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2be7d50() {
   double input = input0x2be7d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2be8720() {
   double input = 0.647062;
   input += synapse0x2be8a60();
   input += synapse0x2be8aa0();
   input += synapse0x2be8ae0();
   input += synapse0x2be8b20();
   input += synapse0x2be8b60();
   input += synapse0x2be8ba0();
   input += synapse0x2be8be0();
   input += synapse0x2be8c20();
   input += synapse0x2be8c60();
   input += synapse0x2be8ca0();
   input += synapse0x2be8ce0();
   input += synapse0x2be8d20();
   input += synapse0x2be8d60();
   input += synapse0x2be8da0();
   input += synapse0x2be8de0();
   input += synapse0x2be8e20();
   input += synapse0x2be88b0();
   input += synapse0x2be88f0();
   input += synapse0x2be8f70();
   input += synapse0x2be8fb0();
   input += synapse0x2be8ff0();
   input += synapse0x2be9030();
   input += synapse0x2be9070();
   input += synapse0x2be90b0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2be8720() {
   double input = input0x2be8720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2be90f0() {
   double input = 0.197035;
   input += synapse0x2be9430();
   input += synapse0x2bda790();
   input += synapse0x2bda7d0();
   input += synapse0x2bdaad0();
   input += synapse0x2bdab10();
   input += synapse0x2bdae10();
   input += synapse0x2bdae50();
   input += synapse0x2bdb150();
   input += synapse0x2bdb190();
   input += synapse0x2bdb490();
   input += synapse0x2bdb4d0();
   input += synapse0x2bdb7d0();
   input += synapse0x2bdb810();
   input += synapse0x2bdbb10();
   input += synapse0x2bdbb50();
   input += synapse0x2bdbe50();
   input += synapse0x2bdbe90();
   input += synapse0x2bdc190();
   input += synapse0x2bdc1d0();
   input += synapse0x2bdc4d0();
   input += synapse0x2bdc510();
   input += synapse0x2bdc810();
   input += synapse0x2bdc850();
   input += synapse0x2bdcb50();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2be90f0() {
   double input = input0x2be90f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2beaf00() {
   double input = -0.0677657;
   input += synapse0x2bdcb90();
   input += synapse0x2bdd850();
   input += synapse0x2bdd890();
   input += synapse0x2be9280();
   input += synapse0x2be92c0();
   input += synapse0x2bddb90();
   input += synapse0x2bddbd0();
   input += synapse0x298bb60();
   input += synapse0x298bba0();
   input += synapse0x2bde310();
   input += synapse0x2bde350();
   input += synapse0x2bde650();
   input += synapse0x2bde690();
   input += synapse0x2bde990();
   input += synapse0x2bde9d0();
   input += synapse0x2bdecd0();
   input += synapse0x2bded10();
   input += synapse0x2bdf010();
   input += synapse0x2bdf050();
   input += synapse0x2bdf350();
   input += synapse0x2bdf390();
   input += synapse0x2bdce90();
   input += synapse0x2bdced0();
   input += synapse0x2beb1a0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2beaf00() {
   double input = input0x2beaf00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2beb1e0() {
   double input = 3.32097;
   input += synapse0x2beb520();
   input += synapse0x2beb560();
   input += synapse0x2beb5a0();
   input += synapse0x2beb5e0();
   input += synapse0x2beb620();
   input += synapse0x2beb660();
   input += synapse0x2beb6a0();
   input += synapse0x2beb6e0();
   input += synapse0x2beb720();
   input += synapse0x2beb760();
   input += synapse0x2beb7a0();
   input += synapse0x2beb7e0();
   input += synapse0x2beb820();
   input += synapse0x2beb860();
   input += synapse0x2beb8a0();
   input += synapse0x2beb8e0();
   input += synapse0x2beb370();
   input += synapse0x2beb3b0();
   input += synapse0x2beba30();
   input += synapse0x2beba70();
   input += synapse0x2bebab0();
   input += synapse0x2bebaf0();
   input += synapse0x2bebb30();
   input += synapse0x2bebb70();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2beb1e0() {
   double input = input0x2beb1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bebbb0() {
   double input = -2.88666;
   input += synapse0x2bebef0();
   input += synapse0x2bebf30();
   input += synapse0x2bebf70();
   input += synapse0x2bebfb0();
   input += synapse0x2bebff0();
   input += synapse0x2bec030();
   input += synapse0x2bec070();
   input += synapse0x2bec0b0();
   input += synapse0x2bec0f0();
   input += synapse0x2bec130();
   input += synapse0x2bec170();
   input += synapse0x2bec1b0();
   input += synapse0x2bec1f0();
   input += synapse0x2bec230();
   input += synapse0x2bec270();
   input += synapse0x2bec2b0();
   input += synapse0x2bebd40();
   input += synapse0x2bebd80();
   input += synapse0x2bec400();
   input += synapse0x2bec440();
   input += synapse0x2bec480();
   input += synapse0x2bec4c0();
   input += synapse0x2bec500();
   input += synapse0x2bec540();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bebbb0() {
   double input = input0x2bebbb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bec580() {
   double input = 2.02801;
   input += synapse0x2bec8c0();
   input += synapse0x2bec900();
   input += synapse0x2bec940();
   input += synapse0x2bec980();
   input += synapse0x2bec9c0();
   input += synapse0x2beca00();
   input += synapse0x2beca40();
   input += synapse0x2beca80();
   input += synapse0x2becac0();
   input += synapse0x2becb00();
   input += synapse0x2becb40();
   input += synapse0x2becb80();
   input += synapse0x2becbc0();
   input += synapse0x2becc00();
   input += synapse0x2becc40();
   input += synapse0x2becc80();
   input += synapse0x2bec710();
   input += synapse0x2bec750();
   input += synapse0x2becdd0();
   input += synapse0x2bece10();
   input += synapse0x2bece50();
   input += synapse0x2bece90();
   input += synapse0x2beced0();
   input += synapse0x2becf10();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bec580() {
   double input = input0x2bec580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2becf50() {
   double input = 1.7958;
   input += synapse0x2bed290();
   input += synapse0x2bed2d0();
   input += synapse0x2bed310();
   input += synapse0x2bed350();
   input += synapse0x2bed390();
   input += synapse0x2bed3d0();
   input += synapse0x2bed410();
   input += synapse0x2bed450();
   input += synapse0x2bed490();
   input += synapse0x2bed4d0();
   input += synapse0x2bed510();
   input += synapse0x2bed550();
   input += synapse0x2bed590();
   input += synapse0x2bed5d0();
   input += synapse0x2bed610();
   input += synapse0x2bed650();
   input += synapse0x2bed0e0();
   input += synapse0x2bed120();
   input += synapse0x2bed7a0();
   input += synapse0x2bed7e0();
   input += synapse0x2bed820();
   input += synapse0x2bed860();
   input += synapse0x2bed8a0();
   input += synapse0x2bed8e0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2becf50() {
   double input = input0x2becf50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bed920() {
   double input = 0.564591;
   input += synapse0x2bedc60();
   input += synapse0x2bedca0();
   input += synapse0x2bedce0();
   input += synapse0x2bedd20();
   input += synapse0x2bedd60();
   input += synapse0x2bedda0();
   input += synapse0x2bedde0();
   input += synapse0x2bede20();
   input += synapse0x2bede60();
   input += synapse0x2be6020();
   input += synapse0x2be6060();
   input += synapse0x2be60a0();
   input += synapse0x2be60e0();
   input += synapse0x2be6120();
   input += synapse0x2be6160();
   input += synapse0x2be61a0();
   input += synapse0x2bedab0();
   input += synapse0x2bedaf0();
   input += synapse0x2be62f0();
   input += synapse0x2be6330();
   input += synapse0x2be6370();
   input += synapse0x2be63b0();
   input += synapse0x2be63f0();
   input += synapse0x2be6430();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bed920() {
   double input = input0x2bed920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2be6470() {
   double input = -0.780262;
   input += synapse0x2be67b0();
   input += synapse0x2be67f0();
   input += synapse0x2be6830();
   input += synapse0x2be6870();
   input += synapse0x2be68b0();
   input += synapse0x2be68f0();
   input += synapse0x2be6930();
   input += synapse0x2be6970();
   input += synapse0x2be69b0();
   input += synapse0x2be69f0();
   input += synapse0x2be6a30();
   input += synapse0x2be6a70();
   input += synapse0x2be6ab0();
   input += synapse0x2be6af0();
   input += synapse0x2be6b30();
   input += synapse0x2be6b70();
   input += synapse0x2be6600();
   input += synapse0x2be6640();
   input += synapse0x2be6cc0();
   input += synapse0x2be6d00();
   input += synapse0x2be6d40();
   input += synapse0x2be6d80();
   input += synapse0x2be6dc0();
   input += synapse0x2be6e00();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2be6470() {
   double input = input0x2be6470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2be6e40() {
   double input = -3.22229;
   input += synapse0x2be6fd0();
   input += synapse0x2bf0060();
   input += synapse0x2bf00a0();
   input += synapse0x2bf00e0();
   input += synapse0x2bf0120();
   input += synapse0x2bf0160();
   input += synapse0x2bf01a0();
   input += synapse0x2bf01e0();
   input += synapse0x2bf0220();
   input += synapse0x2bf0260();
   input += synapse0x2bf02a0();
   input += synapse0x2bf02e0();
   input += synapse0x2bf0320();
   input += synapse0x2bf0360();
   input += synapse0x2bf03a0();
   input += synapse0x2bf03e0();
   input += synapse0x2befeb0();
   input += synapse0x2befef0();
   input += synapse0x2bf0530();
   input += synapse0x2bf0570();
   input += synapse0x2bf05b0();
   input += synapse0x2bf05f0();
   input += synapse0x2bf0630();
   input += synapse0x2bf0670();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2be6e40() {
   double input = input0x2be6e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bf06b0() {
   double input = -0.814883;
   input += synapse0x2bf09f0();
   input += synapse0x2bf0a30();
   input += synapse0x2bf0a70();
   input += synapse0x2bf0ab0();
   input += synapse0x2bf0af0();
   input += synapse0x2bf0b30();
   input += synapse0x2bf0b70();
   input += synapse0x2bf0bb0();
   input += synapse0x2bf0bf0();
   input += synapse0x2bf0c30();
   input += synapse0x2bf0c70();
   input += synapse0x2bf0cb0();
   input += synapse0x2bf0cf0();
   input += synapse0x2bf0d30();
   input += synapse0x2bf0d70();
   input += synapse0x2bf0db0();
   input += synapse0x2bf0840();
   input += synapse0x2bf0880();
   input += synapse0x2bf0f00();
   input += synapse0x2bf0f40();
   input += synapse0x2bf0f80();
   input += synapse0x2bf0fc0();
   input += synapse0x2bf1000();
   input += synapse0x2bf1040();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bf06b0() {
   double input = input0x2bf06b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bf1080() {
   double input = 0.0325454;
   input += synapse0x2bf13c0();
   input += synapse0x2bf1400();
   input += synapse0x2bf1440();
   input += synapse0x2bf1480();
   input += synapse0x2bf14c0();
   input += synapse0x2bf1500();
   input += synapse0x2bf1540();
   input += synapse0x2bf1580();
   input += synapse0x2bf15c0();
   input += synapse0x2bf1600();
   input += synapse0x2bf1640();
   input += synapse0x2bf1680();
   input += synapse0x2bf16c0();
   input += synapse0x2bf1700();
   input += synapse0x2bf1740();
   input += synapse0x2bf1780();
   input += synapse0x2bf1210();
   input += synapse0x2bf1250();
   input += synapse0x2bf18d0();
   input += synapse0x2bf1910();
   input += synapse0x2bf1950();
   input += synapse0x2bf1990();
   input += synapse0x2bf19d0();
   input += synapse0x2bf1a10();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bf1080() {
   double input = input0x2bf1080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bf1a50() {
   double input = -0.973026;
   input += synapse0x2bf1d90();
   input += synapse0x2bf1dd0();
   input += synapse0x2bf1e10();
   input += synapse0x2bf1e50();
   input += synapse0x2bf1e90();
   input += synapse0x2bf1ed0();
   input += synapse0x2bf1f10();
   input += synapse0x2bf1f50();
   input += synapse0x2bf1f90();
   input += synapse0x2bf1fd0();
   input += synapse0x2bf2010();
   input += synapse0x2bf2050();
   input += synapse0x2bf2090();
   input += synapse0x2bf20d0();
   input += synapse0x2bf2110();
   input += synapse0x2bf2150();
   input += synapse0x2bf1be0();
   input += synapse0x2bf1c20();
   input += synapse0x2bf22a0();
   input += synapse0x2bf22e0();
   input += synapse0x2bf2320();
   input += synapse0x2bf2360();
   input += synapse0x2bf23a0();
   input += synapse0x2bf23e0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bf1a50() {
   double input = input0x2bf1a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bf2420() {
   double input = 1.4471;
   input += synapse0x2bf2760();
   input += synapse0x2bf27a0();
   input += synapse0x2bf27e0();
   input += synapse0x2bf2820();
   input += synapse0x2bf2860();
   input += synapse0x2bf28a0();
   input += synapse0x2bf28e0();
   input += synapse0x2bf2920();
   input += synapse0x2bf2960();
   input += synapse0x2bf29a0();
   input += synapse0x2bf29e0();
   input += synapse0x2bf2a20();
   input += synapse0x2bf2a60();
   input += synapse0x2bf2aa0();
   input += synapse0x2bf2ae0();
   input += synapse0x2bf2b20();
   input += synapse0x2bf25b0();
   input += synapse0x2bf25f0();
   input += synapse0x2bf2c70();
   input += synapse0x2bf2cb0();
   input += synapse0x2bf2cf0();
   input += synapse0x2bf2d30();
   input += synapse0x2bf2d70();
   input += synapse0x2bf2db0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bf2420() {
   double input = input0x2bf2420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bf2df0() {
   double input = -2.96054;
   input += synapse0x2bf3130();
   input += synapse0x2bf3170();
   input += synapse0x2bf31b0();
   input += synapse0x2bf31f0();
   input += synapse0x2bf3230();
   input += synapse0x2bf3270();
   input += synapse0x2bf32b0();
   input += synapse0x2bf32f0();
   input += synapse0x2bf3330();
   input += synapse0x2bf3370();
   input += synapse0x2bf33b0();
   input += synapse0x2bf33f0();
   input += synapse0x2bf3430();
   input += synapse0x2bf3470();
   input += synapse0x2bf34b0();
   input += synapse0x2bf34f0();
   input += synapse0x2bf2f80();
   input += synapse0x2bf2fc0();
   input += synapse0x2bf3640();
   input += synapse0x2bf3680();
   input += synapse0x2bf36c0();
   input += synapse0x2bf3700();
   input += synapse0x2bf3740();
   input += synapse0x2bf3780();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bf2df0() {
   double input = input0x2bf2df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bf37c0() {
   double input = 2.15085;
   input += synapse0x2bf3b00();
   input += synapse0x2bf3b40();
   input += synapse0x2bf3b80();
   input += synapse0x2bf3bc0();
   input += synapse0x2bf3c00();
   input += synapse0x2bf3c40();
   input += synapse0x2bf3c80();
   input += synapse0x2bf3cc0();
   input += synapse0x2bf3d00();
   input += synapse0x2bf3d40();
   input += synapse0x2bf3d80();
   input += synapse0x2bf3dc0();
   input += synapse0x2bf3e00();
   input += synapse0x2bf3e40();
   input += synapse0x2bf3e80();
   input += synapse0x2bf3ec0();
   input += synapse0x2bf3950();
   input += synapse0x2bf3990();
   input += synapse0x2bf4010();
   input += synapse0x2bf4050();
   input += synapse0x2bf4090();
   input += synapse0x2bf40d0();
   input += synapse0x2bf4110();
   input += synapse0x2bf4150();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bf37c0() {
   double input = input0x2bf37c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bf4190() {
   double input = -5.10172;
   input += synapse0x2bf44d0();
   input += synapse0x2bf4510();
   input += synapse0x2bf4550();
   input += synapse0x2bf4590();
   input += synapse0x2bf45d0();
   input += synapse0x2bf4610();
   input += synapse0x2bf4650();
   input += synapse0x2bf4690();
   input += synapse0x2bf46d0();
   input += synapse0x2bf4710();
   input += synapse0x2bf4750();
   input += synapse0x2bf4790();
   input += synapse0x2bf47d0();
   input += synapse0x2bf4810();
   input += synapse0x2bf4850();
   input += synapse0x2bf4890();
   input += synapse0x2bf4320();
   input += synapse0x2bf4360();
   input += synapse0x2bf49e0();
   input += synapse0x2bf4a20();
   input += synapse0x2bf4a60();
   input += synapse0x2bf4aa0();
   input += synapse0x2bf4ae0();
   input += synapse0x2bf4b20();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bf4190() {
   double input = input0x2bf4190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bf4b60() {
   double input = -2.3607;
   input += synapse0x2bf4ea0();
   input += synapse0x2be9470();
   input += synapse0x2be94b0();
   input += synapse0x2be94f0();
   input += synapse0x2be9740();
   input += synapse0x2be9780();
   input += synapse0x2be97c0();
   input += synapse0x2be9a10();
   input += synapse0x2be9a50();
   input += synapse0x2be9ca0();
   input += synapse0x2be9ce0();
   input += synapse0x2be9d20();
   input += synapse0x2be9f70();
   input += synapse0x2be9fb0();
   input += synapse0x2bea200();
   input += synapse0x2bea240();
   input += synapse0x2bf4cf0();
   input += synapse0x2bf4d30();
   input += synapse0x2bea390();
   input += synapse0x2bea8a0();
   input += synapse0x2bea8e0();
   input += synapse0x2bea920();
   input += synapse0x2beab70();
   input += synapse0x2beabb0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bf4b60() {
   double input = input0x2bf4b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2beabf0() {
   double input = 0.623078;
   input += synapse0x2bea460();
   input += synapse0x2bea4a0();
   input += synapse0x2bea4e0();
   input += synapse0x2bea520();
   input += synapse0x2beaea0();
   input += synapse0x2bf71f0();
   input += synapse0x2bf7230();
   input += synapse0x2bf7270();
   input += synapse0x2bf72b0();
   input += synapse0x2bf72f0();
   input += synapse0x2bf7330();
   input += synapse0x2bf7370();
   input += synapse0x2bf73b0();
   input += synapse0x2bf73f0();
   input += synapse0x2bf7430();
   input += synapse0x2bf7470();
   input += synapse0x2bead80();
   input += synapse0x2beadc0();
   input += synapse0x2bf75c0();
   input += synapse0x2bf7600();
   input += synapse0x2bf7640();
   input += synapse0x2bf7680();
   input += synapse0x2bf76c0();
   input += synapse0x2bf7700();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2beabf0() {
   double input = input0x2beabf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bf7740() {
   double input = -0.404081;
   input += synapse0x2bf7a80();
   input += synapse0x2bf7ac0();
   input += synapse0x2bf7b00();
   input += synapse0x2bf7b40();
   input += synapse0x2bf7b80();
   input += synapse0x2bf7bc0();
   input += synapse0x2bf7c00();
   input += synapse0x2bf7c40();
   input += synapse0x2bf7c80();
   input += synapse0x2bf7cc0();
   input += synapse0x2bf7d00();
   input += synapse0x2bf7d40();
   input += synapse0x2bf7d80();
   input += synapse0x2bf7dc0();
   input += synapse0x2bf7e00();
   input += synapse0x2bf7e40();
   input += synapse0x2bf78d0();
   input += synapse0x2bf7910();
   input += synapse0x2bf7f90();
   input += synapse0x2bf7fd0();
   input += synapse0x2bf8010();
   input += synapse0x2bf8050();
   input += synapse0x2bf8090();
   input += synapse0x2bf80d0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bf7740() {
   double input = input0x2bf7740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bf8110() {
   double input = 0.159446;
   input += synapse0x2bf8450();
   input += synapse0x2bf8490();
   input += synapse0x2bf84d0();
   input += synapse0x2bf8510();
   input += synapse0x2bf8550();
   input += synapse0x2bf8590();
   input += synapse0x2bf85d0();
   input += synapse0x2bf8610();
   input += synapse0x2bf8650();
   input += synapse0x2bf8690();
   input += synapse0x2bf86d0();
   input += synapse0x2bf8710();
   input += synapse0x2bf8750();
   input += synapse0x2bf8790();
   input += synapse0x2bf87d0();
   input += synapse0x2bf8810();
   input += synapse0x2bf82a0();
   input += synapse0x2bf82e0();
   input += synapse0x2bf8960();
   input += synapse0x2bf89a0();
   input += synapse0x2bf89e0();
   input += synapse0x2bf8a20();
   input += synapse0x2bf8a60();
   input += synapse0x2bf8aa0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bf8110() {
   double input = input0x2bf8110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bf8ae0() {
   double input = -0.592825;
   input += synapse0x2bf8e20();
   input += synapse0x2bf8e60();
   input += synapse0x2bf8ea0();
   input += synapse0x2bf8ee0();
   input += synapse0x2bf8f20();
   input += synapse0x2bf8f60();
   input += synapse0x2bf8fa0();
   input += synapse0x2bf8fe0();
   input += synapse0x2bf9020();
   input += synapse0x2bf9060();
   input += synapse0x2bf90a0();
   input += synapse0x2bf90e0();
   input += synapse0x2bf9120();
   input += synapse0x2bf9160();
   input += synapse0x2bf91a0();
   input += synapse0x2bf91e0();
   input += synapse0x2bf8c70();
   input += synapse0x2bf8cb0();
   input += synapse0x2bf9330();
   input += synapse0x2bf9370();
   input += synapse0x2bf93b0();
   input += synapse0x2bf93f0();
   input += synapse0x2bf9430();
   input += synapse0x2bf9470();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bf8ae0() {
   double input = input0x2bf8ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bf94b0() {
   double input = 0.29795;
   input += synapse0x2bf97f0();
   input += synapse0x2bf9830();
   input += synapse0x2bf9870();
   input += synapse0x2bf98b0();
   input += synapse0x2bf98f0();
   input += synapse0x2bf9930();
   input += synapse0x2bf9970();
   input += synapse0x2bf99b0();
   input += synapse0x2bf99f0();
   input += synapse0x2bf9a30();
   input += synapse0x2bf9a70();
   input += synapse0x2bf9ab0();
   input += synapse0x2bf9af0();
   input += synapse0x2bf9b30();
   input += synapse0x2bf9b70();
   input += synapse0x2bf9bb0();
   input += synapse0x2bf9640();
   input += synapse0x2bf9680();
   input += synapse0x2bf9d00();
   input += synapse0x2bf9d40();
   input += synapse0x2bf9d80();
   input += synapse0x2bf9dc0();
   input += synapse0x2bf9e00();
   input += synapse0x2bf9e40();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bf94b0() {
   double input = input0x2bf94b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bf9e80() {
   double input = 0.618617;
   input += synapse0x2bfa1c0();
   input += synapse0x2bfa200();
   input += synapse0x2bfa240();
   input += synapse0x2bfa280();
   input += synapse0x2bfa2c0();
   input += synapse0x2bfa300();
   input += synapse0x2bfa340();
   input += synapse0x2bfa380();
   input += synapse0x2bfa3c0();
   input += synapse0x2bfa400();
   input += synapse0x2bfa440();
   input += synapse0x2bfa480();
   input += synapse0x2bfa4c0();
   input += synapse0x2bfa500();
   input += synapse0x2bfa540();
   input += synapse0x2bfa580();
   input += synapse0x2bfa010();
   input += synapse0x2bfa050();
   input += synapse0x2bfa6d0();
   input += synapse0x2bfa710();
   input += synapse0x2bfa750();
   input += synapse0x2bfa790();
   input += synapse0x2bfa7d0();
   input += synapse0x2bfa810();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bf9e80() {
   double input = input0x2bf9e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bfa850() {
   double input = 1.38811;
   input += synapse0x2bfab90();
   input += synapse0x2bfabd0();
   input += synapse0x2bfac10();
   input += synapse0x2bfac50();
   input += synapse0x2bfac90();
   input += synapse0x2bfacd0();
   input += synapse0x2bfad10();
   input += synapse0x2bfad50();
   input += synapse0x2bfad90();
   input += synapse0x2bfadd0();
   input += synapse0x2bfae10();
   input += synapse0x2bfae50();
   input += synapse0x2bfae90();
   input += synapse0x2bfaed0();
   input += synapse0x2bfaf10();
   input += synapse0x2bfaf50();
   input += synapse0x2bfa9e0();
   input += synapse0x2bfaa20();
   input += synapse0x2bfb0a0();
   input += synapse0x2bfb0e0();
   input += synapse0x2bfb120();
   input += synapse0x2bfb160();
   input += synapse0x2bfb1a0();
   input += synapse0x2bfb1e0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bfa850() {
   double input = input0x2bfa850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bfb220() {
   double input = -1.05906;
   input += synapse0x2bfb560();
   input += synapse0x2bfb5a0();
   input += synapse0x2bfb5e0();
   input += synapse0x2bfb620();
   input += synapse0x2bfb660();
   input += synapse0x2bfb6a0();
   input += synapse0x2bfb6e0();
   input += synapse0x2bfb720();
   input += synapse0x2bfb760();
   input += synapse0x2bfb7a0();
   input += synapse0x2bfb7e0();
   input += synapse0x2bfb820();
   input += synapse0x2bfb860();
   input += synapse0x2bfb8a0();
   input += synapse0x2bfb8e0();
   input += synapse0x2bfb920();
   input += synapse0x2bfb3b0();
   input += synapse0x2bfb3f0();
   input += synapse0x2bfba70();
   input += synapse0x2bfbab0();
   input += synapse0x2bfbaf0();
   input += synapse0x2bfbb30();
   input += synapse0x2bfbb70();
   input += synapse0x2bfbbb0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bfb220() {
   double input = input0x2bfb220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bfbbf0() {
   double input = 1.56794;
   input += synapse0x2be4660();
   input += synapse0x2be46a0();
   input += synapse0x2be46e0();
   input += synapse0x2be4720();
   input += synapse0x2be4760();
   input += synapse0x2be47a0();
   input += synapse0x2be47e0();
   input += synapse0x2be4820();
   input += synapse0x2bfc340();
   input += synapse0x2bfc380();
   input += synapse0x2bfc3c0();
   input += synapse0x2bfc400();
   input += synapse0x2bfc440();
   input += synapse0x2bfc480();
   input += synapse0x2bfc4c0();
   input += synapse0x2bfc500();
   input += synapse0x2bfbd80();
   input += synapse0x2bfbdc0();
   input += synapse0x2bfc650();
   input += synapse0x2bfc690();
   input += synapse0x2bfc6d0();
   input += synapse0x2bfc710();
   input += synapse0x2bfc750();
   input += synapse0x2bfc790();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bfbbf0() {
   double input = input0x2bfbbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bfc7d0() {
   double input = 1.50802;
   input += synapse0x2bfcb10();
   input += synapse0x2bfcb50();
   input += synapse0x2bfcb90();
   input += synapse0x2bfcbd0();
   input += synapse0x2bfcc10();
   input += synapse0x2bfcc50();
   input += synapse0x2bfcc90();
   input += synapse0x2bfccd0();
   input += synapse0x2bfcd10();
   input += synapse0x2bfcd50();
   input += synapse0x2bfcd90();
   input += synapse0x2bfcdd0();
   input += synapse0x2bfce10();
   input += synapse0x2bfce50();
   input += synapse0x2bfce90();
   input += synapse0x2bfced0();
   input += synapse0x2bfc960();
   input += synapse0x2bfc9a0();
   input += synapse0x2bfd020();
   input += synapse0x2bfd060();
   input += synapse0x2bfd0a0();
   input += synapse0x2bfd0e0();
   input += synapse0x2bfd120();
   input += synapse0x2bfd160();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bfc7d0() {
   double input = input0x2bfc7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bfd1a0() {
   double input = -0.262876;
   input += synapse0x2bfd4e0();
   input += synapse0x2bfd520();
   input += synapse0x2bfd560();
   input += synapse0x2bfd5a0();
   input += synapse0x2bfd5e0();
   input += synapse0x2bfd620();
   input += synapse0x2bfd660();
   input += synapse0x2bfd6a0();
   input += synapse0x2bfd6e0();
   input += synapse0x2bfd720();
   input += synapse0x2bfd760();
   input += synapse0x2bfd7a0();
   input += synapse0x2bfd7e0();
   input += synapse0x2bfd820();
   input += synapse0x2bfd860();
   input += synapse0x2bfd8a0();
   input += synapse0x2bfd330();
   input += synapse0x2bfd370();
   input += synapse0x2bedea0();
   input += synapse0x2bedee0();
   input += synapse0x2bedf20();
   input += synapse0x2bedf60();
   input += synapse0x2bedfa0();
   input += synapse0x2bedfe0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bfd1a0() {
   double input = input0x2bfd1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bee020() {
   double input = 0.839148;
   input += synapse0x2bee360();
   input += synapse0x2bee3a0();
   input += synapse0x2bee3e0();
   input += synapse0x2bee420();
   input += synapse0x2bee460();
   input += synapse0x2bee4a0();
   input += synapse0x2bee4e0();
   input += synapse0x2bee520();
   input += synapse0x2bee560();
   input += synapse0x2bee5a0();
   input += synapse0x2bee5e0();
   input += synapse0x2bee620();
   input += synapse0x2bee660();
   input += synapse0x2bee6a0();
   input += synapse0x2bee6e0();
   input += synapse0x2bee720();
   input += synapse0x2bee1b0();
   input += synapse0x2bee1f0();
   input += synapse0x2bee870();
   input += synapse0x2bee8b0();
   input += synapse0x2bee8f0();
   input += synapse0x2bee930();
   input += synapse0x2bee970();
   input += synapse0x2bee9b0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bee020() {
   double input = input0x2bee020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bee9f0() {
   double input = -0.491555;
   input += synapse0x2beed30();
   input += synapse0x2beed70();
   input += synapse0x2beedb0();
   input += synapse0x2beedf0();
   input += synapse0x2beee30();
   input += synapse0x2beee70();
   input += synapse0x2beeeb0();
   input += synapse0x2beeef0();
   input += synapse0x2beef30();
   input += synapse0x2beef70();
   input += synapse0x2beefb0();
   input += synapse0x2beeff0();
   input += synapse0x2bef030();
   input += synapse0x2bef070();
   input += synapse0x2bef0b0();
   input += synapse0x2bef0f0();
   input += synapse0x2beeb80();
   input += synapse0x2beebc0();
   input += synapse0x2bef240();
   input += synapse0x2bef280();
   input += synapse0x2bef2c0();
   input += synapse0x2bef300();
   input += synapse0x2bef340();
   input += synapse0x2bef380();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bee9f0() {
   double input = input0x2bee9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2bef3c0() {
   double input = -0.0112824;
   input += synapse0x2bef700();
   input += synapse0x2bef740();
   input += synapse0x2bef780();
   input += synapse0x2bef7c0();
   input += synapse0x2bef800();
   input += synapse0x2bef840();
   input += synapse0x2bef880();
   input += synapse0x2bef8c0();
   input += synapse0x2bef900();
   input += synapse0x2bef940();
   input += synapse0x2bef980();
   input += synapse0x2bef9c0();
   input += synapse0x2befa00();
   input += synapse0x2befa40();
   input += synapse0x2befa80();
   input += synapse0x2befac0();
   input += synapse0x2bef550();
   input += synapse0x2bef590();
   input += synapse0x2befc10();
   input += synapse0x2befc50();
   input += synapse0x2befc90();
   input += synapse0x2befcd0();
   input += synapse0x2befd10();
   input += synapse0x2befd50();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2bef3c0() {
   double input = input0x2bef3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2c01a00() {
   double input = 2.10409;
   input += synapse0x2c01c20();
   input += synapse0x2c01c60();
   input += synapse0x2c01ca0();
   input += synapse0x2c01ce0();
   input += synapse0x2c01d20();
   input += synapse0x2c01d60();
   input += synapse0x2c01da0();
   input += synapse0x2c01de0();
   input += synapse0x2c01e20();
   input += synapse0x2c01e60();
   input += synapse0x2c01ea0();
   input += synapse0x2c01ee0();
   input += synapse0x2c01f20();
   input += synapse0x2c01f60();
   input += synapse0x2c01fa0();
   input += synapse0x2c01fe0();
   input += synapse0x2befd90();
   input += synapse0x2befdd0();
   input += synapse0x2c02130();
   input += synapse0x2c02170();
   input += synapse0x2c021b0();
   input += synapse0x2c021f0();
   input += synapse0x2c02230();
   input += synapse0x2c02270();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2c01a00() {
   double input = input0x2c01a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2c022b0() {
   double input = 1.04964;
   input += synapse0x2c025f0();
   input += synapse0x2c02630();
   input += synapse0x2c02670();
   input += synapse0x2c026b0();
   input += synapse0x2c026f0();
   input += synapse0x2c02730();
   input += synapse0x2c02770();
   input += synapse0x2c027b0();
   input += synapse0x2c027f0();
   input += synapse0x2c02830();
   input += synapse0x2c02870();
   input += synapse0x2c028b0();
   input += synapse0x2c028f0();
   input += synapse0x2c02930();
   input += synapse0x2c02970();
   input += synapse0x2c029b0();
   input += synapse0x2c02440();
   input += synapse0x2c02480();
   input += synapse0x2c02b00();
   input += synapse0x2c02b40();
   input += synapse0x2c02b80();
   input += synapse0x2c02bc0();
   input += synapse0x2c02c00();
   input += synapse0x2c02c40();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2c022b0() {
   double input = input0x2c022b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2c02c80() {
   double input = 0.635953;
   input += synapse0x2c02fc0();
   input += synapse0x2c03000();
   input += synapse0x2c03040();
   input += synapse0x2c03080();
   input += synapse0x2c030c0();
   input += synapse0x2c03100();
   input += synapse0x2c03140();
   input += synapse0x2c03180();
   input += synapse0x2c031c0();
   input += synapse0x2c03200();
   input += synapse0x2c03240();
   input += synapse0x2c03280();
   input += synapse0x2c032c0();
   input += synapse0x2c03300();
   input += synapse0x2c03340();
   input += synapse0x2c03380();
   input += synapse0x2c02e10();
   input += synapse0x2c02e50();
   input += synapse0x2c034d0();
   input += synapse0x2c03510();
   input += synapse0x2c03550();
   input += synapse0x2c03590();
   input += synapse0x2c035d0();
   input += synapse0x2c03610();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2c02c80() {
   double input = input0x2c02c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2c03650() {
   double input = 0.399654;
   input += synapse0x2c03990();
   input += synapse0x2c039d0();
   input += synapse0x2c03a10();
   input += synapse0x2c03a50();
   input += synapse0x2c03a90();
   input += synapse0x2c03ad0();
   input += synapse0x2c03b10();
   input += synapse0x2c03b50();
   input += synapse0x2c03b90();
   input += synapse0x2c03bd0();
   input += synapse0x2c03c10();
   input += synapse0x2c03c50();
   input += synapse0x2c03c90();
   input += synapse0x2c03cd0();
   input += synapse0x2c03d10();
   input += synapse0x2c03d50();
   input += synapse0x2c037e0();
   input += synapse0x2c03820();
   input += synapse0x2c03ea0();
   input += synapse0x2c03ee0();
   input += synapse0x2c03f20();
   input += synapse0x2c03f60();
   input += synapse0x2c03fa0();
   input += synapse0x2c03fe0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2c03650() {
   double input = input0x2c03650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2c0a850() {
   double input = 0.627516;
   input += synapse0x2be0580();
   input += synapse0x2be05c0();
   input += synapse0x2be1a90();
   input += synapse0x2be1ad0();
   input += synapse0x2be2460();
   input += synapse0x2be24a0();
   input += synapse0x2be3230();
   input += synapse0x2be3270();
   input += synapse0x2be3c00();
   input += synapse0x2be3c40();
   input += synapse0x2be45d0();
   input += synapse0x2be4610();
   input += synapse0x2be50b0();
   input += synapse0x2be50f0();
   input += synapse0x2be5a80();
   input += synapse0x2be5ac0();
   input += synapse0x2be2b60();
   input += synapse0x2be2ba0();
   input += synapse0x2be7630();
   input += synapse0x2be7670();
   input += synapse0x2be8000();
   input += synapse0x2be8040();
   input += synapse0x2be89d0();
   input += synapse0x2be8a10();
   input += synapse0x2be93a0();
   input += synapse0x2be93e0();
   input += synapse0x2bdd510();
   input += synapse0x2bdd550();
   input += synapse0x2beb490();
   input += synapse0x2beb4d0();
   input += synapse0x2bebe60();
   input += synapse0x2bebea0();
   input += synapse0x2bec830();
   input += synapse0x2bec870();
   input += synapse0x2bed200();
   input += synapse0x2bed240();
   input += synapse0x2bedbd0();
   input += synapse0x2bedc10();
   input += synapse0x2be6720();
   input += synapse0x2be6760();
   input += synapse0x2beffd0();
   input += synapse0x2bf0010();
   input += synapse0x2bf0960();
   input += synapse0x2bf09a0();
   input += synapse0x2bf1330();
   input += synapse0x2bf1370();
   input += synapse0x2bf1d00();
   input += synapse0x2bf1d40();
   input += synapse0x2bf26d0();
   input += synapse0x2bf2710();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2c0a850() {
   double input = input0x2c0a850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2c0abf0() {
   double input = 0.842634;
   input += synapse0x2bf4e10();
   input += synapse0x2bf4e50();
   input += synapse0x2bea3d0();
   input += synapse0x2bea410();
   input += synapse0x2bf79f0();
   input += synapse0x2bf7a30();
   input += synapse0x2bf83c0();
   input += synapse0x2bf8400();
   input += synapse0x2bf8d90();
   input += synapse0x2bf8dd0();
   input += synapse0x2bf9760();
   input += synapse0x2bf97a0();
   input += synapse0x2bfa130();
   input += synapse0x2bfa170();
   input += synapse0x2bfab00();
   input += synapse0x2bfab40();
   input += synapse0x2bfb4d0();
   input += synapse0x2bfb510();
   input += synapse0x2bfbea0();
   input += synapse0x2bfbee0();
   input += synapse0x2bfca80();
   input += synapse0x2bfcac0();
   input += synapse0x2bfd450();
   input += synapse0x2bfd490();
   input += synapse0x2bee2d0();
   input += synapse0x2bee310();
   input += synapse0x2beeca0();
   input += synapse0x2beece0();
   input += synapse0x2bef670();
   input += synapse0x2bef6b0();
   input += synapse0x2c01b90();
   input += synapse0x2c01bd0();
   input += synapse0x2c02560();
   input += synapse0x2c025a0();
   input += synapse0x2c02f30();
   input += synapse0x2c02f70();
   input += synapse0x2c03900();
   input += synapse0x2c03940();
   input += synapse0x2bdf7f0();
   input += synapse0x2bdf830();
   input += synapse0x2bf30a0();
   input += synapse0x2bf30e0();
   input += synapse0x2c04020();
   input += synapse0x2c04060();
   input += synapse0x2c040a0();
   input += synapse0x2c040e0();
   input += synapse0x2c0af90();
   input += synapse0x2c0afd0();
   input += synapse0x2c0b010();
   input += synapse0x2c0b050();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2c0abf0() {
   double input = input0x2c0abf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2c0b090() {
   double input = 0.197794;
   input += synapse0x2c0b3d0();
   input += synapse0x2c0b410();
   input += synapse0x2c0b450();
   input += synapse0x2c0b490();
   input += synapse0x2c0b4d0();
   input += synapse0x2c0b510();
   input += synapse0x2c0b550();
   input += synapse0x2c0b590();
   input += synapse0x2c0b5d0();
   input += synapse0x2c0b610();
   input += synapse0x2c0b650();
   input += synapse0x2c0b690();
   input += synapse0x2c0b6d0();
   input += synapse0x2c0b710();
   input += synapse0x2c0b750();
   input += synapse0x2c0b790();
   input += synapse0x2c0b220();
   input += synapse0x2c0b260();
   input += synapse0x2c0b8e0();
   input += synapse0x2c0b920();
   input += synapse0x2c0b960();
   input += synapse0x2c0b9a0();
   input += synapse0x2c0b9e0();
   input += synapse0x2c0ba20();
   input += synapse0x2c0ba60();
   input += synapse0x2c0baa0();
   input += synapse0x2c0bae0();
   input += synapse0x2c0bb20();
   input += synapse0x2c0bb60();
   input += synapse0x2c0bba0();
   input += synapse0x2c0bbe0();
   input += synapse0x2c0bc20();
   input += synapse0x2c0b7d0();
   input += synapse0x2c0b810();
   input += synapse0x2c0b850();
   input += synapse0x2c0b890();
   input += synapse0x2c0be70();
   input += synapse0x2c0beb0();
   input += synapse0x2c0bef0();
   input += synapse0x2c0bf30();
   input += synapse0x2c0bf70();
   input += synapse0x2c0bfb0();
   input += synapse0x2c0bff0();
   input += synapse0x2c0c030();
   input += synapse0x2c0c070();
   input += synapse0x2c0c0b0();
   input += synapse0x2c0c0f0();
   input += synapse0x2c0c130();
   input += synapse0x2c0c170();
   input += synapse0x2c0c1b0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2c0b090() {
   double input = input0x2c0b090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2c0c1f0() {
   double input = 0.596817;
   input += synapse0x2c0c530();
   input += synapse0x2c0c570();
   input += synapse0x2c0c5b0();
   input += synapse0x2c0c5f0();
   input += synapse0x2c0c630();
   input += synapse0x2c0c670();
   input += synapse0x2c0c6b0();
   input += synapse0x2c0c6f0();
   input += synapse0x2c0c730();
   input += synapse0x2c0c770();
   input += synapse0x2c0c7b0();
   input += synapse0x2c0c7f0();
   input += synapse0x2c0c830();
   input += synapse0x2c0c870();
   input += synapse0x2c0c8b0();
   input += synapse0x2c0c8f0();
   input += synapse0x2c0c380();
   input += synapse0x2c0c3c0();
   input += synapse0x2c0ca40();
   input += synapse0x2c0ca80();
   input += synapse0x2c0cac0();
   input += synapse0x2c0cb00();
   input += synapse0x2c0cb40();
   input += synapse0x2c0cb80();
   input += synapse0x2c0cbc0();
   input += synapse0x2c0cc00();
   input += synapse0x2c0cc40();
   input += synapse0x2c0cc80();
   input += synapse0x2c0ccc0();
   input += synapse0x2c0cd00();
   input += synapse0x2c0cd40();
   input += synapse0x2c0cd80();
   input += synapse0x2c0c930();
   input += synapse0x2c0c970();
   input += synapse0x2c0c9b0();
   input += synapse0x2c0c9f0();
   input += synapse0x2c0cfd0();
   input += synapse0x2c0d010();
   input += synapse0x2c0d050();
   input += synapse0x2c0d090();
   input += synapse0x2c0d0d0();
   input += synapse0x2c0d110();
   input += synapse0x2c0d150();
   input += synapse0x2c0d190();
   input += synapse0x2c0d1d0();
   input += synapse0x2c0d210();
   input += synapse0x2c0d250();
   input += synapse0x2c0d290();
   input += synapse0x2c0d2d0();
   input += synapse0x2c0d310();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2c0c1f0() {
   double input = input0x2c0c1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2c0d350() {
   double input = -0.19457;
   input += synapse0x2c0d690();
   input += synapse0x2c0d6d0();
   input += synapse0x2c0d710();
   input += synapse0x2c0d750();
   input += synapse0x2c0d790();
   input += synapse0x2c0d7d0();
   input += synapse0x2c0d810();
   input += synapse0x2c0d850();
   input += synapse0x2c0d890();
   input += synapse0x2c0d8d0();
   input += synapse0x2c0d910();
   input += synapse0x2c0d950();
   input += synapse0x2c0d990();
   input += synapse0x2c0d9d0();
   input += synapse0x2c0da10();
   input += synapse0x2c0da50();
   input += synapse0x2c0d4e0();
   input += synapse0x2c0d520();
   input += synapse0x2c0dba0();
   input += synapse0x2c0dbe0();
   input += synapse0x2c0dc20();
   input += synapse0x2c0dc60();
   input += synapse0x2c0dca0();
   input += synapse0x2c0dce0();
   input += synapse0x2c0dd20();
   input += synapse0x2c0dd60();
   input += synapse0x2c0dda0();
   input += synapse0x2c0dde0();
   input += synapse0x2c0de20();
   input += synapse0x2c0de60();
   input += synapse0x2c0dea0();
   input += synapse0x2c0dee0();
   input += synapse0x2c0da90();
   input += synapse0x2c0dad0();
   input += synapse0x2c0db10();
   input += synapse0x2c0db50();
   input += synapse0x2c0e130();
   input += synapse0x2c0e170();
   input += synapse0x2c0e1b0();
   input += synapse0x2c0e1f0();
   input += synapse0x2c0e230();
   input += synapse0x2c0e270();
   input += synapse0x2c0e2b0();
   input += synapse0x2c0e2f0();
   input += synapse0x2c0e330();
   input += synapse0x2c0e370();
   input += synapse0x2c0e3b0();
   input += synapse0x2c0e3f0();
   input += synapse0x2c0e430();
   input += synapse0x2c0e470();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2c0d350() {
   double input = input0x2c0d350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x2c0e4b0() {
   double input = 6.33487;
   input += synapse0x2bdf590();
   input += synapse0x2c0e6d0();
   input += synapse0x2c0e710();
   input += synapse0x2c0e750();
   input += synapse0x2c0e790();
   return input;
}

double NNfunction_sb_cRcR::neuron0x2c0e4b0() {
   double input = input0x2c0e4b0();
   return (input * 1)+0;
}

double NNfunction_sb_cRcR::synapse0x299a3e0() {
   return (neuron0x2bda570()*0.012782);
}

double NNfunction_sb_cRcR::synapse0x2bda430() {
   return (neuron0x2bda8b0()*0.0710759);
}

double NNfunction_sb_cRcR::synapse0x2bda470() {
   return (neuron0x2bdabf0()*0.0498941);
}

double NNfunction_sb_cRcR::synapse0x2bdf880() {
   return (neuron0x2bdaf30()*0.594011);
}

double NNfunction_sb_cRcR::synapse0x2bdf8c0() {
   return (neuron0x2bdb270()*0.0701018);
}

double NNfunction_sb_cRcR::synapse0x2bdf900() {
   return (neuron0x2bdb5b0()*0.0981517);
}

double NNfunction_sb_cRcR::synapse0x2bdf940() {
   return (neuron0x2bdb8f0()*0.104729);
}

double NNfunction_sb_cRcR::synapse0x2bdf980() {
   return (neuron0x2bdbc30()*0.0287049);
}

double NNfunction_sb_cRcR::synapse0x2bdf9c0() {
   return (neuron0x2bdbf70()*-0.08855);
}

double NNfunction_sb_cRcR::synapse0x2bdfa00() {
   return (neuron0x2bdc2b0()*-0.225139);
}

double NNfunction_sb_cRcR::synapse0x2bdfa40() {
   return (neuron0x2bdc5f0()*-0.240883);
}

double NNfunction_sb_cRcR::synapse0x2bdfa80() {
   return (neuron0x2bdc930()*0.117933);
}

double NNfunction_sb_cRcR::synapse0x2bdfac0() {
   return (neuron0x2bdcc70()*-0.055375);
}

double NNfunction_sb_cRcR::synapse0x2bdfb00() {
   return (neuron0x2bdcfb0()*0.181975);
}

double NNfunction_sb_cRcR::synapse0x2bdfb40() {
   return (neuron0x2bdd2f0()*0.0078121);
}

double NNfunction_sb_cRcR::synapse0x2bdfb80() {
   return (neuron0x2bdd630()*0.109367);
}

double NNfunction_sb_cRcR::synapse0x2bda3a0() {
   return (neuron0x2bdd970()*0.0926067);
}

double NNfunction_sb_cRcR::synapse0x2bda3e0() {
   return (neuron0x2bdded0()*-0.451339);
}

double NNfunction_sb_cRcR::synapse0x298bc80() {
   return (neuron0x2bde0f0()*-0.276242);
}

double NNfunction_sb_cRcR::synapse0x298bcc0() {
   return (neuron0x2bde430()*-0.154966);
}

double NNfunction_sb_cRcR::synapse0x2bdfde0() {
   return (neuron0x2bde770()*0.029004);
}

double NNfunction_sb_cRcR::synapse0x2bdfe20() {
   return (neuron0x2bdeab0()*-0.00166069);
}

double NNfunction_sb_cRcR::synapse0x2bdfe60() {
   return (neuron0x2bdedf0()*0.00767755);
}

double NNfunction_sb_cRcR::synapse0x2bdfea0() {
   return (neuron0x2bdf130()*-0.00669849);
}

double NNfunction_sb_cRcR::synapse0x2be0220() {
   return (neuron0x2bda570()*-0.643285);
}

double NNfunction_sb_cRcR::synapse0x2be0260() {
   return (neuron0x2bda8b0()*0.167397);
}

double NNfunction_sb_cRcR::synapse0x2be02a0() {
   return (neuron0x2bdabf0()*0.27076);
}

double NNfunction_sb_cRcR::synapse0x2be02e0() {
   return (neuron0x2bdaf30()*-1.47765);
}

double NNfunction_sb_cRcR::synapse0x2be0320() {
   return (neuron0x2bdb270()*0.17853);
}

double NNfunction_sb_cRcR::synapse0x2be0360() {
   return (neuron0x2bdb5b0()*-1.46353);
}

double NNfunction_sb_cRcR::synapse0x2be03a0() {
   return (neuron0x2bdb8f0()*1.08951);
}

double NNfunction_sb_cRcR::synapse0x2be03e0() {
   return (neuron0x2bdbc30()*0.242248);
}

double NNfunction_sb_cRcR::synapse0x2be0420() {
   return (neuron0x2bdbf70()*-0.264117);
}

double NNfunction_sb_cRcR::synapse0x2bdfcd0() {
   return (neuron0x2bdc2b0()*-0.408147);
}

double NNfunction_sb_cRcR::synapse0x2bdfd10() {
   return (neuron0x2bdc5f0()*0.0681769);
}

double NNfunction_sb_cRcR::synapse0x2bdfd50() {
   return (neuron0x2bdc930()*0.294867);
}

double NNfunction_sb_cRcR::synapse0x2bdfd90() {
   return (neuron0x2bdcc70()*-0.214915);
}

double NNfunction_sb_cRcR::synapse0x2be0670() {
   return (neuron0x2bdcfb0()*0.498607);
}

double NNfunction_sb_cRcR::synapse0x2be06b0() {
   return (neuron0x2bdd2f0()*1.02542);
}

double NNfunction_sb_cRcR::synapse0x2be06f0() {
   return (neuron0x2bdd630()*-0.493792);
}

double NNfunction_sb_cRcR::synapse0x2be0070() {
   return (neuron0x2bdd970()*-0.540136);
}

double NNfunction_sb_cRcR::synapse0x2be00b0() {
   return (neuron0x2bdded0()*-0.203698);
}

double NNfunction_sb_cRcR::synapse0x2be0840() {
   return (neuron0x2bde0f0()*0.652352);
}

double NNfunction_sb_cRcR::synapse0x2be0880() {
   return (neuron0x2bde430()*-0.59807);
}

double NNfunction_sb_cRcR::synapse0x2be08c0() {
   return (neuron0x2bde770()*0.482911);
}

double NNfunction_sb_cRcR::synapse0x2be0900() {
   return (neuron0x2bdeab0()*0.534047);
}

double NNfunction_sb_cRcR::synapse0x2be0940() {
   return (neuron0x2bdedf0()*-0.468491);
}

double NNfunction_sb_cRcR::synapse0x2be0980() {
   return (neuron0x2bdf130()*0.363803);
}

double NNfunction_sb_cRcR::synapse0x2be0d00() {
   return (neuron0x2bda570()*-0.0353345);
}

double NNfunction_sb_cRcR::synapse0x2be0d40() {
   return (neuron0x2bda8b0()*0.0823325);
}

double NNfunction_sb_cRcR::synapse0x2be0d80() {
   return (neuron0x2bdabf0()*0.0507115);
}

double NNfunction_sb_cRcR::synapse0x2be0dc0() {
   return (neuron0x2bdaf30()*0.224746);
}

double NNfunction_sb_cRcR::synapse0x2be0e00() {
   return (neuron0x2bdb270()*-0.114132);
}

double NNfunction_sb_cRcR::synapse0x2be0e40() {
   return (neuron0x2bdb5b0()*0.0628819);
}

double NNfunction_sb_cRcR::synapse0x2be0e80() {
   return (neuron0x2bdb8f0()*0.0354337);
}

double NNfunction_sb_cRcR::synapse0x2be0ec0() {
   return (neuron0x2bdbc30()*-0.0663168);
}

double NNfunction_sb_cRcR::synapse0x2be0f00() {
   return (neuron0x2bdbf70()*0.477112);
}

double NNfunction_sb_cRcR::synapse0x2be0f40() {
   return (neuron0x2bdc2b0()*-0.233305);
}

double NNfunction_sb_cRcR::synapse0x2be0f80() {
   return (neuron0x2bdc5f0()*0.971173);
}

double NNfunction_sb_cRcR::synapse0x2be0fc0() {
   return (neuron0x2bdc930()*0.933994);
}

double NNfunction_sb_cRcR::synapse0x2be1000() {
   return (neuron0x2bdcc70()*-0.0998753);
}

double NNfunction_sb_cRcR::synapse0x2be1040() {
   return (neuron0x2bdcfb0()*-0.117531);
}

double NNfunction_sb_cRcR::synapse0x2be1080() {
   return (neuron0x2bdd2f0()*0.0905397);
}

double NNfunction_sb_cRcR::synapse0x2be10c0() {
   return (neuron0x2bdd630()*-0.378398);
}

double NNfunction_sb_cRcR::synapse0x2be0b50() {
   return (neuron0x2bdd970()*0.11312);
}

double NNfunction_sb_cRcR::synapse0x2be0b90() {
   return (neuron0x2bdded0()*-0.133074);
}

double NNfunction_sb_cRcR::synapse0x2999ad0() {
   return (neuron0x2bde0f0()*-0.0719027);
}

double NNfunction_sb_cRcR::synapse0x2999b10() {
   return (neuron0x2bde430()*-0.118661);
}

double NNfunction_sb_cRcR::synapse0x2bc9600() {
   return (neuron0x2bde770()*0.0693033);
}

double NNfunction_sb_cRcR::synapse0x2bc9640() {
   return (neuron0x2bdeab0()*0.0492614);
}

double NNfunction_sb_cRcR::synapse0x2bc9680() {
   return (neuron0x2bdedf0()*-0.081063);
}

double NNfunction_sb_cRcR::synapse0x2bda4b0() {
   return (neuron0x2bdf130()*-0.0114998);
}

double NNfunction_sb_cRcR::synapse0x2be0610() {
   return (neuron0x2bda570()*-0.052329);
}

double NNfunction_sb_cRcR::synapse0x2bda4f0() {
   return (neuron0x2bda8b0()*-0.500722);
}

double NNfunction_sb_cRcR::synapse0x2bda530() {
   return (neuron0x2bdabf0()*0.0715094);
}

double NNfunction_sb_cRcR::synapse0x2be1210() {
   return (neuron0x2bdaf30()*-0.860527);
}

double NNfunction_sb_cRcR::synapse0x2be1250() {
   return (neuron0x2bdb270()*0.47559);
}

double NNfunction_sb_cRcR::synapse0x2be1290() {
   return (neuron0x2bdb5b0()*0.0128125);
}

double NNfunction_sb_cRcR::synapse0x2be12d0() {
   return (neuron0x2bdb8f0()*0.307778);
}

double NNfunction_sb_cRcR::synapse0x2be1310() {
   return (neuron0x2bdbc30()*0.0669033);
}

double NNfunction_sb_cRcR::synapse0x2be1350() {
   return (neuron0x2bdbf70()*-0.0988013);
}

double NNfunction_sb_cRcR::synapse0x2be1390() {
   return (neuron0x2bdc2b0()*0.944457);
}

double NNfunction_sb_cRcR::synapse0x2be13d0() {
   return (neuron0x2bdc5f0()*-0.0210166);
}

double NNfunction_sb_cRcR::synapse0x2be1410() {
   return (neuron0x2bdc930()*-0.317295);
}

double NNfunction_sb_cRcR::synapse0x2be1450() {
   return (neuron0x2bdcc70()*0.919262);
}

double NNfunction_sb_cRcR::synapse0x2be1490() {
   return (neuron0x2bdcfb0()*0.0386332);
}

double NNfunction_sb_cRcR::synapse0x2be14d0() {
   return (neuron0x2bdd2f0()*0.194668);
}

double NNfunction_sb_cRcR::synapse0x2be1510() {
   return (neuron0x2bdd630()*-0.260765);
}

double NNfunction_sb_cRcR::synapse0x2be0460() {
   return (neuron0x2bdd970()*0.414362);
}

double NNfunction_sb_cRcR::synapse0x2be04a0() {
   return (neuron0x2bdded0()*-0.239644);
}

double NNfunction_sb_cRcR::synapse0x2be1660() {
   return (neuron0x2bde0f0()*-0.316819);
}

double NNfunction_sb_cRcR::synapse0x2be16a0() {
   return (neuron0x2bde430()*0.0774521);
}

double NNfunction_sb_cRcR::synapse0x2be16e0() {
   return (neuron0x2bde770()*-0.11273);
}

double NNfunction_sb_cRcR::synapse0x2be1720() {
   return (neuron0x2bdeab0()*0.00988635);
}

double NNfunction_sb_cRcR::synapse0x2be1760() {
   return (neuron0x2bdedf0()*-0.0916346);
}

double NNfunction_sb_cRcR::synapse0x2be17a0() {
   return (neuron0x2bdf130()*0.149262);
}

double NNfunction_sb_cRcR::synapse0x2be1b20() {
   return (neuron0x2bda570()*0.0122028);
}

double NNfunction_sb_cRcR::synapse0x2be1b60() {
   return (neuron0x2bda8b0()*-0.0063472);
}

double NNfunction_sb_cRcR::synapse0x2be1ba0() {
   return (neuron0x2bdabf0()*-0.150054);
}

double NNfunction_sb_cRcR::synapse0x2be1be0() {
   return (neuron0x2bdaf30()*0.0527817);
}

double NNfunction_sb_cRcR::synapse0x2be1c20() {
   return (neuron0x2bdb270()*-0.227231);
}

double NNfunction_sb_cRcR::synapse0x2be1c60() {
   return (neuron0x2bdb5b0()*0.115337);
}

double NNfunction_sb_cRcR::synapse0x2be1ca0() {
   return (neuron0x2bdb8f0()*0.110006);
}

double NNfunction_sb_cRcR::synapse0x2be1ce0() {
   return (neuron0x2bdbc30()*0.0402164);
}

double NNfunction_sb_cRcR::synapse0x2be1d20() {
   return (neuron0x2bdbf70()*-0.062013);
}

double NNfunction_sb_cRcR::synapse0x2be1d60() {
   return (neuron0x2bdc2b0()*0.0397031);
}

double NNfunction_sb_cRcR::synapse0x2be1da0() {
   return (neuron0x2bdc5f0()*-0.0435316);
}

double NNfunction_sb_cRcR::synapse0x2be1de0() {
   return (neuron0x2bdc930()*-0.0379852);
}

double NNfunction_sb_cRcR::synapse0x2be1e20() {
   return (neuron0x2bdcc70()*-0.179645);
}

double NNfunction_sb_cRcR::synapse0x2be1e60() {
   return (neuron0x2bdcfb0()*-0.269347);
}

double NNfunction_sb_cRcR::synapse0x2be1ea0() {
   return (neuron0x2bdd2f0()*-1.3796);
}

double NNfunction_sb_cRcR::synapse0x2be1ee0() {
   return (neuron0x2bdd630()*0.0586301);
}

double NNfunction_sb_cRcR::synapse0x2be1970() {
   return (neuron0x2bdd970()*-0.171119);
}

double NNfunction_sb_cRcR::synapse0x2be19b0() {
   return (neuron0x2bdded0()*0.0155406);
}

double NNfunction_sb_cRcR::synapse0x2be2030() {
   return (neuron0x2bde0f0()*-0.28175);
}

double NNfunction_sb_cRcR::synapse0x2be2070() {
   return (neuron0x2bde430()*-0.0311573);
}

double NNfunction_sb_cRcR::synapse0x2be20b0() {
   return (neuron0x2bde770()*-0.0639044);
}

double NNfunction_sb_cRcR::synapse0x2be20f0() {
   return (neuron0x2bdeab0()*-0.00274636);
}

double NNfunction_sb_cRcR::synapse0x2be2130() {
   return (neuron0x2bdedf0()*0.0564589);
}

double NNfunction_sb_cRcR::synapse0x2be2170() {
   return (neuron0x2bdf130()*-0.00396229);
}

double NNfunction_sb_cRcR::synapse0x2be24f0() {
   return (neuron0x2bda570()*0.0766541);
}

double NNfunction_sb_cRcR::synapse0x2be2530() {
   return (neuron0x2bda8b0()*0.1087);
}

double NNfunction_sb_cRcR::synapse0x2be2570() {
   return (neuron0x2bdabf0()*0.134615);
}

double NNfunction_sb_cRcR::synapse0x2be25b0() {
   return (neuron0x2bdaf30()*-0.194309);
}

double NNfunction_sb_cRcR::synapse0x2be25f0() {
   return (neuron0x2bdb270()*-0.020488);
}

double NNfunction_sb_cRcR::synapse0x2be2630() {
   return (neuron0x2bdb5b0()*-0.042375);
}

double NNfunction_sb_cRcR::synapse0x2be2670() {
   return (neuron0x2bdb8f0()*-0.161769);
}

double NNfunction_sb_cRcR::synapse0x2be26b0() {
   return (neuron0x2bdbc30()*-0.133937);
}

double NNfunction_sb_cRcR::synapse0x2be26f0() {
   return (neuron0x2bdbf70()*0.0680646);
}

double NNfunction_sb_cRcR::synapse0x2999e40() {
   return (neuron0x2bdc2b0()*0.0261104);
}

double NNfunction_sb_cRcR::synapse0x2999e80() {
   return (neuron0x2bdc5f0()*0.0813802);
}

double NNfunction_sb_cRcR::synapse0x2999ec0() {
   return (neuron0x2bdc930()*0.029542);
}

double NNfunction_sb_cRcR::synapse0x2999f00() {
   return (neuron0x2bdcc70()*0.0119243);
}

double NNfunction_sb_cRcR::synapse0x2999f40() {
   return (neuron0x2bdcfb0()*0.195122);
}

double NNfunction_sb_cRcR::synapse0x2999f80() {
   return (neuron0x2bdd2f0()*-0.20742);
}

double NNfunction_sb_cRcR::synapse0x2999fc0() {
   return (neuron0x2bdd630()*0.227386);
}

double NNfunction_sb_cRcR::synapse0x2be2340() {
   return (neuron0x2bdd970()*0.673748);
}

double NNfunction_sb_cRcR::synapse0x2be2380() {
   return (neuron0x2bdded0()*0.0733892);
}

double NNfunction_sb_cRcR::synapse0x299a110() {
   return (neuron0x2bde0f0()*0.0257846);
}

double NNfunction_sb_cRcR::synapse0x299a150() {
   return (neuron0x2bde430()*0.0170768);
}

double NNfunction_sb_cRcR::synapse0x299a190() {
   return (neuron0x2bde770()*0.00138107);
}

double NNfunction_sb_cRcR::synapse0x299a1d0() {
   return (neuron0x2bdeab0()*0.0441431);
}

double NNfunction_sb_cRcR::synapse0x299a210() {
   return (neuron0x2bdedf0()*-0.0891125);
}

double NNfunction_sb_cRcR::synapse0x2be2f40() {
   return (neuron0x2bdf130()*-0.0350356);
}

double NNfunction_sb_cRcR::synapse0x2be32c0() {
   return (neuron0x2bda570()*-0.239436);
}

double NNfunction_sb_cRcR::synapse0x2be3300() {
   return (neuron0x2bda8b0()*0.0687823);
}

double NNfunction_sb_cRcR::synapse0x2be3340() {
   return (neuron0x2bdabf0()*0.0681432);
}

double NNfunction_sb_cRcR::synapse0x2be3380() {
   return (neuron0x2bdaf30()*-0.706086);
}

double NNfunction_sb_cRcR::synapse0x2be33c0() {
   return (neuron0x2bdb270()*0.0499545);
}

double NNfunction_sb_cRcR::synapse0x2be3400() {
   return (neuron0x2bdb5b0()*1.70519);
}

double NNfunction_sb_cRcR::synapse0x2be3440() {
   return (neuron0x2bdb8f0()*-0.135794);
}

double NNfunction_sb_cRcR::synapse0x2be3480() {
   return (neuron0x2bdbc30()*-0.0581993);
}

double NNfunction_sb_cRcR::synapse0x2be34c0() {
   return (neuron0x2bdbf70()*0.472021);
}

double NNfunction_sb_cRcR::synapse0x2be3500() {
   return (neuron0x2bdc2b0()*0.839852);
}

double NNfunction_sb_cRcR::synapse0x2be3540() {
   return (neuron0x2bdc5f0()*0.00435122);
}

double NNfunction_sb_cRcR::synapse0x2be3580() {
   return (neuron0x2bdc930()*0.279902);
}

double NNfunction_sb_cRcR::synapse0x2be35c0() {
   return (neuron0x2bdcc70()*-1.36198);
}

double NNfunction_sb_cRcR::synapse0x2be3600() {
   return (neuron0x2bdcfb0()*0.90565);
}

double NNfunction_sb_cRcR::synapse0x2be3640() {
   return (neuron0x2bdd2f0()*0.984336);
}

double NNfunction_sb_cRcR::synapse0x2be3680() {
   return (neuron0x2bdd630()*-0.0952357);
}

double NNfunction_sb_cRcR::synapse0x2be3110() {
   return (neuron0x2bdd970()*0.187332);
}

double NNfunction_sb_cRcR::synapse0x2be3150() {
   return (neuron0x2bdded0()*-0.491044);
}

double NNfunction_sb_cRcR::synapse0x2be37d0() {
   return (neuron0x2bde0f0()*-0.012917);
}

double NNfunction_sb_cRcR::synapse0x2be3810() {
   return (neuron0x2bde430()*0.185016);
}

double NNfunction_sb_cRcR::synapse0x2be3850() {
   return (neuron0x2bde770()*0.0503226);
}

double NNfunction_sb_cRcR::synapse0x2be3890() {
   return (neuron0x2bdeab0()*-0.231472);
}

double NNfunction_sb_cRcR::synapse0x2be38d0() {
   return (neuron0x2bdedf0()*-0.527257);
}

double NNfunction_sb_cRcR::synapse0x2be3910() {
   return (neuron0x2bdf130()*-0.547402);
}

double NNfunction_sb_cRcR::synapse0x2be3c90() {
   return (neuron0x2bda570()*0.116058);
}

double NNfunction_sb_cRcR::synapse0x2be3cd0() {
   return (neuron0x2bda8b0()*0.0242468);
}

double NNfunction_sb_cRcR::synapse0x2be3d10() {
   return (neuron0x2bdabf0()*0.254562);
}

double NNfunction_sb_cRcR::synapse0x2be3d50() {
   return (neuron0x2bdaf30()*-0.221954);
}

double NNfunction_sb_cRcR::synapse0x2be3d90() {
   return (neuron0x2bdb270()*0.452261);
}

double NNfunction_sb_cRcR::synapse0x2be3dd0() {
   return (neuron0x2bdb5b0()*0.103835);
}

double NNfunction_sb_cRcR::synapse0x2be3e10() {
   return (neuron0x2bdb8f0()*0.00223017);
}

double NNfunction_sb_cRcR::synapse0x2be3e50() {
   return (neuron0x2bdbc30()*0.544551);
}

double NNfunction_sb_cRcR::synapse0x2be3e90() {
   return (neuron0x2bdbf70()*0.222505);
}

double NNfunction_sb_cRcR::synapse0x2be3ed0() {
   return (neuron0x2bdc2b0()*-0.103563);
}

double NNfunction_sb_cRcR::synapse0x2be3f10() {
   return (neuron0x2bdc5f0()*-0.151171);
}

double NNfunction_sb_cRcR::synapse0x2be3f50() {
   return (neuron0x2bdc930()*-0.313438);
}

double NNfunction_sb_cRcR::synapse0x2be3f90() {
   return (neuron0x2bdcc70()*-0.34594);
}

double NNfunction_sb_cRcR::synapse0x2be3fd0() {
   return (neuron0x2bdcfb0()*-0.192451);
}

double NNfunction_sb_cRcR::synapse0x2be4010() {
   return (neuron0x2bdd2f0()*-0.575841);
}

double NNfunction_sb_cRcR::synapse0x2be4050() {
   return (neuron0x2bdd630()*-2.47723);
}

double NNfunction_sb_cRcR::synapse0x2be3ae0() {
   return (neuron0x2bdd970()*-0.337599);
}

double NNfunction_sb_cRcR::synapse0x2be3b20() {
   return (neuron0x2bdded0()*-0.0842577);
}

double NNfunction_sb_cRcR::synapse0x2be41a0() {
   return (neuron0x2bde0f0()*-0.352556);
}

double NNfunction_sb_cRcR::synapse0x2be41e0() {
   return (neuron0x2bde430()*-0.085937);
}

double NNfunction_sb_cRcR::synapse0x2be4220() {
   return (neuron0x2bde770()*0.214375);
}

double NNfunction_sb_cRcR::synapse0x2be4260() {
   return (neuron0x2bdeab0()*0.0438123);
}

double NNfunction_sb_cRcR::synapse0x2be42a0() {
   return (neuron0x2bdedf0()*-0.0329381);
}

double NNfunction_sb_cRcR::synapse0x2be42e0() {
   return (neuron0x2bdf130()*-0.0193012);
}

double NNfunction_sb_cRcR::synapse0x2bdddc0() {
   return (neuron0x2bda570()*0.00587315);
}

double NNfunction_sb_cRcR::synapse0x2bdde00() {
   return (neuron0x2bda8b0()*-0.00685246);
}

double NNfunction_sb_cRcR::synapse0x2bdde40() {
   return (neuron0x2bdabf0()*0.0156081);
}

double NNfunction_sb_cRcR::synapse0x2bdde80() {
   return (neuron0x2bdaf30()*0.0355043);
}

double NNfunction_sb_cRcR::synapse0x2be4870() {
   return (neuron0x2bdb270()*0.021458);
}

double NNfunction_sb_cRcR::synapse0x2be48b0() {
   return (neuron0x2bdb5b0()*-0.0128789);
}

double NNfunction_sb_cRcR::synapse0x2be48f0() {
   return (neuron0x2bdb8f0()*-0.00387273);
}

double NNfunction_sb_cRcR::synapse0x2be4930() {
   return (neuron0x2bdbc30()*-0.00742762);
}

double NNfunction_sb_cRcR::synapse0x2be4970() {
   return (neuron0x2bdbf70()*0.00800522);
}

double NNfunction_sb_cRcR::synapse0x2be49b0() {
   return (neuron0x2bdc2b0()*-0.0056833);
}

double NNfunction_sb_cRcR::synapse0x2be49f0() {
   return (neuron0x2bdc5f0()*-0.00925526);
}

double NNfunction_sb_cRcR::synapse0x2be4a30() {
   return (neuron0x2bdc930()*-0.0305393);
}

double NNfunction_sb_cRcR::synapse0x2be4a70() {
   return (neuron0x2bdcc70()*-0.0424155);
}

double NNfunction_sb_cRcR::synapse0x2be4ab0() {
   return (neuron0x2bdcfb0()*0.0057079);
}

double NNfunction_sb_cRcR::synapse0x2be4af0() {
   return (neuron0x2bdd2f0()*-0.0237779);
}

double NNfunction_sb_cRcR::synapse0x2be4b30() {
   return (neuron0x2bdd630()*2.59986);
}

double NNfunction_sb_cRcR::synapse0x2be44b0() {
   return (neuron0x2bdd970()*-0.00934616);
}

double NNfunction_sb_cRcR::synapse0x2be44f0() {
   return (neuron0x2bdded0()*-0.0147652);
}

double NNfunction_sb_cRcR::synapse0x2be4c80() {
   return (neuron0x2bde0f0()*-0.0232431);
}

double NNfunction_sb_cRcR::synapse0x2be4cc0() {
   return (neuron0x2bde430()*-0.00520752);
}

double NNfunction_sb_cRcR::synapse0x2be4d00() {
   return (neuron0x2bde770()*0.00973668);
}

double NNfunction_sb_cRcR::synapse0x2be4d40() {
   return (neuron0x2bdeab0()*-0.00104486);
}

double NNfunction_sb_cRcR::synapse0x2be4d80() {
   return (neuron0x2bdedf0()*-0.0026285);
}

double NNfunction_sb_cRcR::synapse0x2be4dc0() {
   return (neuron0x2bdf130()*-0.0197703);
}

double NNfunction_sb_cRcR::synapse0x2be5140() {
   return (neuron0x2bda570()*-0.0548295);
}

double NNfunction_sb_cRcR::synapse0x2be5180() {
   return (neuron0x2bda8b0()*-0.877125);
}

double NNfunction_sb_cRcR::synapse0x2be51c0() {
   return (neuron0x2bdabf0()*0.0699608);
}

double NNfunction_sb_cRcR::synapse0x2be5200() {
   return (neuron0x2bdaf30()*0.466082);
}

double NNfunction_sb_cRcR::synapse0x2be5240() {
   return (neuron0x2bdb270()*-0.0646822);
}

double NNfunction_sb_cRcR::synapse0x2be5280() {
   return (neuron0x2bdb5b0()*-0.0762677);
}

double NNfunction_sb_cRcR::synapse0x2be52c0() {
   return (neuron0x2bdb8f0()*-0.121928);
}

double NNfunction_sb_cRcR::synapse0x2be5300() {
   return (neuron0x2bdbc30()*-0.0532195);
}

double NNfunction_sb_cRcR::synapse0x2be5340() {
   return (neuron0x2bdbf70()*-0.679232);
}

double NNfunction_sb_cRcR::synapse0x2be5380() {
   return (neuron0x2bdc2b0()*0.158858);
}

double NNfunction_sb_cRcR::synapse0x2be53c0() {
   return (neuron0x2bdc5f0()*-0.259528);
}

double NNfunction_sb_cRcR::synapse0x2be5400() {
   return (neuron0x2bdc930()*0.269674);
}

double NNfunction_sb_cRcR::synapse0x2be5440() {
   return (neuron0x2bdcc70()*0.137235);
}

double NNfunction_sb_cRcR::synapse0x2be5480() {
   return (neuron0x2bdcfb0()*-0.277752);
}

double NNfunction_sb_cRcR::synapse0x2be54c0() {
   return (neuron0x2bdd2f0()*-0.0888594);
}

double NNfunction_sb_cRcR::synapse0x2be5500() {
   return (neuron0x2bdd630()*0.0826082);
}

double NNfunction_sb_cRcR::synapse0x2be4f90() {
   return (neuron0x2bdd970()*-0.169657);
}

double NNfunction_sb_cRcR::synapse0x2be4fd0() {
   return (neuron0x2bdded0()*0.0520614);
}

double NNfunction_sb_cRcR::synapse0x2be5650() {
   return (neuron0x2bde0f0()*0.017605);
}

double NNfunction_sb_cRcR::synapse0x2be5690() {
   return (neuron0x2bde430()*-0.121761);
}

double NNfunction_sb_cRcR::synapse0x2be56d0() {
   return (neuron0x2bde770()*0.0163705);
}

double NNfunction_sb_cRcR::synapse0x2be5710() {
   return (neuron0x2bdeab0()*0.0239977);
}

double NNfunction_sb_cRcR::synapse0x2be5750() {
   return (neuron0x2bdedf0()*-0.0330613);
}

double NNfunction_sb_cRcR::synapse0x2be5790() {
   return (neuron0x2bdf130()*-0.012295);
}

double NNfunction_sb_cRcR::synapse0x2be5b10() {
   return (neuron0x2bda570()*0.097374);
}

double NNfunction_sb_cRcR::synapse0x2be5b50() {
   return (neuron0x2bda8b0()*-0.185519);
}

double NNfunction_sb_cRcR::synapse0x2be5b90() {
   return (neuron0x2bdabf0()*-0.25586);
}

double NNfunction_sb_cRcR::synapse0x2be5bd0() {
   return (neuron0x2bdaf30()*0.36437);
}

double NNfunction_sb_cRcR::synapse0x2be5c10() {
   return (neuron0x2bdb270()*-0.95658);
}

double NNfunction_sb_cRcR::synapse0x2be5c50() {
   return (neuron0x2bdb5b0()*0.274897);
}

double NNfunction_sb_cRcR::synapse0x2be5c90() {
   return (neuron0x2bdb8f0()*-0.12836);
}

double NNfunction_sb_cRcR::synapse0x2be5cd0() {
   return (neuron0x2bdbc30()*-0.108013);
}

double NNfunction_sb_cRcR::synapse0x2be5d10() {
   return (neuron0x2bdbf70()*-0.112581);
}

double NNfunction_sb_cRcR::synapse0x2be5d50() {
   return (neuron0x2bdc2b0()*-0.0455778);
}

double NNfunction_sb_cRcR::synapse0x2be5d90() {
   return (neuron0x2bdc5f0()*0.081281);
}

double NNfunction_sb_cRcR::synapse0x2be5dd0() {
   return (neuron0x2bdc930()*0.0627418);
}

double NNfunction_sb_cRcR::synapse0x2be5e10() {
   return (neuron0x2bdcc70()*0.0126941);
}

double NNfunction_sb_cRcR::synapse0x2be5e50() {
   return (neuron0x2bdcfb0()*-0.338348);
}

double NNfunction_sb_cRcR::synapse0x2be5e90() {
   return (neuron0x2bdd2f0()*-0.846403);
}

double NNfunction_sb_cRcR::synapse0x2be5ed0() {
   return (neuron0x2bdd630()*1.63446);
}

double NNfunction_sb_cRcR::synapse0x2be5960() {
   return (neuron0x2bdd970()*0.27749);
}

double NNfunction_sb_cRcR::synapse0x2be59a0() {
   return (neuron0x2bdded0()*0.108958);
}

double NNfunction_sb_cRcR::synapse0x2be2730() {
   return (neuron0x2bde0f0()*0.0703325);
}

double NNfunction_sb_cRcR::synapse0x2be2770() {
   return (neuron0x2bde430()*-0.0630716);
}

double NNfunction_sb_cRcR::synapse0x2be27b0() {
   return (neuron0x2bde770()*-0.163426);
}

double NNfunction_sb_cRcR::synapse0x2be27f0() {
   return (neuron0x2bdeab0()*0.0140804);
}

double NNfunction_sb_cRcR::synapse0x2be2830() {
   return (neuron0x2bdedf0()*0.0431006);
}

double NNfunction_sb_cRcR::synapse0x2be2870() {
   return (neuron0x2bdf130()*0.181086);
}

double NNfunction_sb_cRcR::synapse0x2be2bf0() {
   return (neuron0x2bda570()*-0.0138152);
}

double NNfunction_sb_cRcR::synapse0x2be2c30() {
   return (neuron0x2bda8b0()*-0.00243531);
}

double NNfunction_sb_cRcR::synapse0x2be2c70() {
   return (neuron0x2bdabf0()*0.0617709);
}

double NNfunction_sb_cRcR::synapse0x2be2cb0() {
   return (neuron0x2bdaf30()*-0.141711);
}

double NNfunction_sb_cRcR::synapse0x2be2cf0() {
   return (neuron0x2bdb270()*0.080046);
}

double NNfunction_sb_cRcR::synapse0x2be2d30() {
   return (neuron0x2bdb5b0()*0.0765255);
}

double NNfunction_sb_cRcR::synapse0x2be2d70() {
   return (neuron0x2bdb8f0()*-1.25972);
}

double NNfunction_sb_cRcR::synapse0x2be2db0() {
   return (neuron0x2bdbc30()*-0.0115818);
}

double NNfunction_sb_cRcR::synapse0x2be2df0() {
   return (neuron0x2bdbf70()*-0.0611174);
}

double NNfunction_sb_cRcR::synapse0x2be2e30() {
   return (neuron0x2bdc2b0()*-0.0539512);
}

double NNfunction_sb_cRcR::synapse0x2be2e70() {
   return (neuron0x2bdc5f0()*-0.0316179);
}

double NNfunction_sb_cRcR::synapse0x2be2eb0() {
   return (neuron0x2bdc930()*0.00286119);
}

double NNfunction_sb_cRcR::synapse0x2be2ef0() {
   return (neuron0x2bdcc70()*-0.00154369);
}

double NNfunction_sb_cRcR::synapse0x2be7030() {
   return (neuron0x2bdcfb0()*-0.0702669);
}

double NNfunction_sb_cRcR::synapse0x2be7070() {
   return (neuron0x2bdd2f0()*0.0914381);
}

double NNfunction_sb_cRcR::synapse0x2be70b0() {
   return (neuron0x2bdd630()*0.106603);
}

double NNfunction_sb_cRcR::synapse0x2be2a40() {
   return (neuron0x2bdd970()*-0.102057);
}

double NNfunction_sb_cRcR::synapse0x2be2a80() {
   return (neuron0x2bdded0()*0.0370419);
}

double NNfunction_sb_cRcR::synapse0x2be7200() {
   return (neuron0x2bde0f0()*-0.067148);
}

double NNfunction_sb_cRcR::synapse0x2be7240() {
   return (neuron0x2bde430()*-0.000644895);
}

double NNfunction_sb_cRcR::synapse0x2be7280() {
   return (neuron0x2bde770()*0.0501624);
}

double NNfunction_sb_cRcR::synapse0x2be72c0() {
   return (neuron0x2bdeab0()*-0.00377852);
}

double NNfunction_sb_cRcR::synapse0x2be7300() {
   return (neuron0x2bdedf0()*-0.0167236);
}

double NNfunction_sb_cRcR::synapse0x2be7340() {
   return (neuron0x2bdf130()*-0.0175614);
}

double NNfunction_sb_cRcR::synapse0x2be76c0() {
   return (neuron0x2bda570()*-0.0163851);
}

double NNfunction_sb_cRcR::synapse0x2be7700() {
   return (neuron0x2bda8b0()*0.607978);
}

double NNfunction_sb_cRcR::synapse0x2be7740() {
   return (neuron0x2bdabf0()*0.00350004);
}

double NNfunction_sb_cRcR::synapse0x2be7780() {
   return (neuron0x2bdaf30()*-0.425604);
}

double NNfunction_sb_cRcR::synapse0x2be77c0() {
   return (neuron0x2bdb270()*-0.0263123);
}

double NNfunction_sb_cRcR::synapse0x2be7800() {
   return (neuron0x2bdb5b0()*-0.112612);
}

double NNfunction_sb_cRcR::synapse0x2be7840() {
   return (neuron0x2bdb8f0()*-0.0183644);
}

double NNfunction_sb_cRcR::synapse0x2be7880() {
   return (neuron0x2bdbc30()*-0.0363075);
}

double NNfunction_sb_cRcR::synapse0x2be78c0() {
   return (neuron0x2bdbf70()*-0.727952);
}

double NNfunction_sb_cRcR::synapse0x2be7900() {
   return (neuron0x2bdc2b0()*0.43706);
}

double NNfunction_sb_cRcR::synapse0x2be7940() {
   return (neuron0x2bdc5f0()*0.271165);
}

double NNfunction_sb_cRcR::synapse0x2be7980() {
   return (neuron0x2bdc930()*0.0793694);
}

double NNfunction_sb_cRcR::synapse0x2be79c0() {
   return (neuron0x2bdcc70()*-0.0146312);
}

double NNfunction_sb_cRcR::synapse0x2be7a00() {
   return (neuron0x2bdcfb0()*0.150793);
}

double NNfunction_sb_cRcR::synapse0x2be7a40() {
   return (neuron0x2bdd2f0()*0.0585987);
}

double NNfunction_sb_cRcR::synapse0x2be7a80() {
   return (neuron0x2bdd630()*0.201155);
}

double NNfunction_sb_cRcR::synapse0x2be7510() {
   return (neuron0x2bdd970()*0.080191);
}

double NNfunction_sb_cRcR::synapse0x2be7550() {
   return (neuron0x2bdded0()*-0.154262);
}

double NNfunction_sb_cRcR::synapse0x2be7bd0() {
   return (neuron0x2bde0f0()*0.139114);
}

double NNfunction_sb_cRcR::synapse0x2be7c10() {
   return (neuron0x2bde430()*0.0188157);
}

double NNfunction_sb_cRcR::synapse0x2be7c50() {
   return (neuron0x2bde770()*0.0350431);
}

double NNfunction_sb_cRcR::synapse0x2be7c90() {
   return (neuron0x2bdeab0()*-0.0165234);
}

double NNfunction_sb_cRcR::synapse0x2be7cd0() {
   return (neuron0x2bdedf0()*0.00922158);
}

double NNfunction_sb_cRcR::synapse0x2be7d10() {
   return (neuron0x2bdf130()*-0.0157755);
}

double NNfunction_sb_cRcR::synapse0x2be8090() {
   return (neuron0x2bda570()*0.00834679);
}

double NNfunction_sb_cRcR::synapse0x2be80d0() {
   return (neuron0x2bda8b0()*-0.0663802);
}

double NNfunction_sb_cRcR::synapse0x2be8110() {
   return (neuron0x2bdabf0()*-0.003684);
}

double NNfunction_sb_cRcR::synapse0x2be8150() {
   return (neuron0x2bdaf30()*-0.226725);
}

double NNfunction_sb_cRcR::synapse0x2be8190() {
   return (neuron0x2bdb270()*0.176975);
}

double NNfunction_sb_cRcR::synapse0x2be81d0() {
   return (neuron0x2bdb5b0()*0.54556);
}

double NNfunction_sb_cRcR::synapse0x2be8210() {
   return (neuron0x2bdb8f0()*-0.00714511);
}

double NNfunction_sb_cRcR::synapse0x2be8250() {
   return (neuron0x2bdbc30()*-0.409882);
}

double NNfunction_sb_cRcR::synapse0x2be8290() {
   return (neuron0x2bdbf70()*0.0341041);
}

double NNfunction_sb_cRcR::synapse0x2be82d0() {
   return (neuron0x2bdc2b0()*-0.0497316);
}

double NNfunction_sb_cRcR::synapse0x2be8310() {
   return (neuron0x2bdc5f0()*0.0292735);
}

double NNfunction_sb_cRcR::synapse0x2be8350() {
   return (neuron0x2bdc930()*0.0759767);
}

double NNfunction_sb_cRcR::synapse0x2be8390() {
   return (neuron0x2bdcc70()*0.0244026);
}

double NNfunction_sb_cRcR::synapse0x2be83d0() {
   return (neuron0x2bdcfb0()*-0.0489451);
}

double NNfunction_sb_cRcR::synapse0x2be8410() {
   return (neuron0x2bdd2f0()*-0.155937);
}

double NNfunction_sb_cRcR::synapse0x2be8450() {
   return (neuron0x2bdd630()*-0.582104);
}

double NNfunction_sb_cRcR::synapse0x2be7ee0() {
   return (neuron0x2bdd970()*-0.141967);
}

double NNfunction_sb_cRcR::synapse0x2be7f20() {
   return (neuron0x2bdded0()*-0.0498997);
}

double NNfunction_sb_cRcR::synapse0x2be85a0() {
   return (neuron0x2bde0f0()*-0.0338755);
}

double NNfunction_sb_cRcR::synapse0x2be85e0() {
   return (neuron0x2bde430()*0.0250399);
}

double NNfunction_sb_cRcR::synapse0x2be8620() {
   return (neuron0x2bde770()*-0.0283442);
}

double NNfunction_sb_cRcR::synapse0x2be8660() {
   return (neuron0x2bdeab0()*-0.00298717);
}

double NNfunction_sb_cRcR::synapse0x2be86a0() {
   return (neuron0x2bdedf0()*0.00423399);
}

double NNfunction_sb_cRcR::synapse0x2be86e0() {
   return (neuron0x2bdf130()*-0.0521134);
}

double NNfunction_sb_cRcR::synapse0x2be8a60() {
   return (neuron0x2bda570()*0.664616);
}

double NNfunction_sb_cRcR::synapse0x2be8aa0() {
   return (neuron0x2bda8b0()*0.146956);
}

double NNfunction_sb_cRcR::synapse0x2be8ae0() {
   return (neuron0x2bdabf0()*-1.36596);
}

double NNfunction_sb_cRcR::synapse0x2be8b20() {
   return (neuron0x2bdaf30()*-1.68021);
}

double NNfunction_sb_cRcR::synapse0x2be8b60() {
   return (neuron0x2bdb270()*0.182943);
}

double NNfunction_sb_cRcR::synapse0x2be8ba0() {
   return (neuron0x2bdb5b0()*-0.550635);
}

double NNfunction_sb_cRcR::synapse0x2be8be0() {
   return (neuron0x2bdb8f0()*-0.543015);
}

double NNfunction_sb_cRcR::synapse0x2be8c20() {
   return (neuron0x2bdbc30()*0.221356);
}

double NNfunction_sb_cRcR::synapse0x2be8c60() {
   return (neuron0x2bdbf70()*-0.177936);
}

double NNfunction_sb_cRcR::synapse0x2be8ca0() {
   return (neuron0x2bdc2b0()*-0.27322);
}

double NNfunction_sb_cRcR::synapse0x2be8ce0() {
   return (neuron0x2bdc5f0()*-0.14263);
}

double NNfunction_sb_cRcR::synapse0x2be8d20() {
   return (neuron0x2bdc930()*-0.607251);
}

double NNfunction_sb_cRcR::synapse0x2be8d60() {
   return (neuron0x2bdcc70()*0.201712);
}

double NNfunction_sb_cRcR::synapse0x2be8da0() {
   return (neuron0x2bdcfb0()*-0.27875);
}

double NNfunction_sb_cRcR::synapse0x2be8de0() {
   return (neuron0x2bdd2f0()*-0.228137);
}

double NNfunction_sb_cRcR::synapse0x2be8e20() {
   return (neuron0x2bdd630()*-2.17214);
}

double NNfunction_sb_cRcR::synapse0x2be88b0() {
   return (neuron0x2bdd970()*0.581275);
}

double NNfunction_sb_cRcR::synapse0x2be88f0() {
   return (neuron0x2bdded0()*-0.055213);
}

double NNfunction_sb_cRcR::synapse0x2be8f70() {
   return (neuron0x2bde0f0()*-0.0400471);
}

double NNfunction_sb_cRcR::synapse0x2be8fb0() {
   return (neuron0x2bde430()*0.0395891);
}

double NNfunction_sb_cRcR::synapse0x2be8ff0() {
   return (neuron0x2bde770()*-0.0130749);
}

double NNfunction_sb_cRcR::synapse0x2be9030() {
   return (neuron0x2bdeab0()*0.279686);
}

double NNfunction_sb_cRcR::synapse0x2be9070() {
   return (neuron0x2bdedf0()*-0.000850606);
}

double NNfunction_sb_cRcR::synapse0x2be90b0() {
   return (neuron0x2bdf130()*-0.031526);
}

double NNfunction_sb_cRcR::synapse0x2be9430() {
   return (neuron0x2bda570()*-0.145466);
}

double NNfunction_sb_cRcR::synapse0x2bda790() {
   return (neuron0x2bda8b0()*-0.408042);
}

double NNfunction_sb_cRcR::synapse0x2bda7d0() {
   return (neuron0x2bdabf0()*-0.95943);
}

double NNfunction_sb_cRcR::synapse0x2bdaad0() {
   return (neuron0x2bdaf30()*0.819937);
}

double NNfunction_sb_cRcR::synapse0x2bdab10() {
   return (neuron0x2bdb270()*0.429575);
}

double NNfunction_sb_cRcR::synapse0x2bdae10() {
   return (neuron0x2bdb5b0()*-0.126283);
}

double NNfunction_sb_cRcR::synapse0x2bdae50() {
   return (neuron0x2bdb8f0()*0.112766);
}

double NNfunction_sb_cRcR::synapse0x2bdb150() {
   return (neuron0x2bdbc30()*0.409549);
}

double NNfunction_sb_cRcR::synapse0x2bdb190() {
   return (neuron0x2bdbf70()*-0.505162);
}

double NNfunction_sb_cRcR::synapse0x2bdb490() {
   return (neuron0x2bdc2b0()*-0.332584);
}

double NNfunction_sb_cRcR::synapse0x2bdb4d0() {
   return (neuron0x2bdc5f0()*0.0504645);
}

double NNfunction_sb_cRcR::synapse0x2bdb7d0() {
   return (neuron0x2bdc930()*-0.219201);
}

double NNfunction_sb_cRcR::synapse0x2bdb810() {
   return (neuron0x2bdcc70()*-0.458107);
}

double NNfunction_sb_cRcR::synapse0x2bdbb10() {
   return (neuron0x2bdcfb0()*-0.214724);
}

double NNfunction_sb_cRcR::synapse0x2bdbb50() {
   return (neuron0x2bdd2f0()*0.434723);
}

double NNfunction_sb_cRcR::synapse0x2bdbe50() {
   return (neuron0x2bdd630()*-0.698987);
}

double NNfunction_sb_cRcR::synapse0x2bdbe90() {
   return (neuron0x2bdd970()*0.526535);
}

double NNfunction_sb_cRcR::synapse0x2bdc190() {
   return (neuron0x2bdded0()*-0.408809);
}

double NNfunction_sb_cRcR::synapse0x2bdc1d0() {
   return (neuron0x2bde0f0()*-0.202271);
}

double NNfunction_sb_cRcR::synapse0x2bdc4d0() {
   return (neuron0x2bde430()*-0.205512);
}

double NNfunction_sb_cRcR::synapse0x2bdc510() {
   return (neuron0x2bde770()*0.452302);
}

double NNfunction_sb_cRcR::synapse0x2bdc810() {
   return (neuron0x2bdeab0()*0.474679);
}

double NNfunction_sb_cRcR::synapse0x2bdc850() {
   return (neuron0x2bdedf0()*0.342072);
}

double NNfunction_sb_cRcR::synapse0x2bdcb50() {
   return (neuron0x2bdf130()*-0.167171);
}

double NNfunction_sb_cRcR::synapse0x2bdcb90() {
   return (neuron0x2bda570()*-0.216156);
}

double NNfunction_sb_cRcR::synapse0x2bdd850() {
   return (neuron0x2bda8b0()*-0.330502);
}

double NNfunction_sb_cRcR::synapse0x2bdd890() {
   return (neuron0x2bdabf0()*0.186579);
}

double NNfunction_sb_cRcR::synapse0x2be9280() {
   return (neuron0x2bdaf30()*-0.0741438);
}

double NNfunction_sb_cRcR::synapse0x2be92c0() {
   return (neuron0x2bdb270()*-0.59107);
}

double NNfunction_sb_cRcR::synapse0x2bddb90() {
   return (neuron0x2bdb5b0()*-0.318375);
}

double NNfunction_sb_cRcR::synapse0x2bddbd0() {
   return (neuron0x2bdb8f0()*0.464446);
}

double NNfunction_sb_cRcR::synapse0x298bb60() {
   return (neuron0x2bdbc30()*0.10088);
}

double NNfunction_sb_cRcR::synapse0x298bba0() {
   return (neuron0x2bdbf70()*-0.0155909);
}

double NNfunction_sb_cRcR::synapse0x2bde310() {
   return (neuron0x2bdc2b0()*0.699714);
}

double NNfunction_sb_cRcR::synapse0x2bde350() {
   return (neuron0x2bdc5f0()*0.549636);
}

double NNfunction_sb_cRcR::synapse0x2bde650() {
   return (neuron0x2bdc930()*-0.474788);
}

double NNfunction_sb_cRcR::synapse0x2bde690() {
   return (neuron0x2bdcc70()*-1.53731);
}

double NNfunction_sb_cRcR::synapse0x2bde990() {
   return (neuron0x2bdcfb0()*0.260774);
}

double NNfunction_sb_cRcR::synapse0x2bde9d0() {
   return (neuron0x2bdd2f0()*-0.570817);
}

double NNfunction_sb_cRcR::synapse0x2bdecd0() {
   return (neuron0x2bdd630()*-0.948552);
}

double NNfunction_sb_cRcR::synapse0x2bded10() {
   return (neuron0x2bdd970()*0.465996);
}

double NNfunction_sb_cRcR::synapse0x2bdf010() {
   return (neuron0x2bdded0()*-0.497781);
}

double NNfunction_sb_cRcR::synapse0x2bdf050() {
   return (neuron0x2bde0f0()*-0.727285);
}

double NNfunction_sb_cRcR::synapse0x2bdf350() {
   return (neuron0x2bde430()*-0.0920419);
}

double NNfunction_sb_cRcR::synapse0x2bdf390() {
   return (neuron0x2bde770()*0.124738);
}

double NNfunction_sb_cRcR::synapse0x2bdce90() {
   return (neuron0x2bdeab0()*-0.112637);
}

double NNfunction_sb_cRcR::synapse0x2bdced0() {
   return (neuron0x2bdedf0()*0.456863);
}

double NNfunction_sb_cRcR::synapse0x2beb1a0() {
   return (neuron0x2bdf130()*-0.283368);
}

double NNfunction_sb_cRcR::synapse0x2beb520() {
   return (neuron0x2bda570()*0.0280335);
}

double NNfunction_sb_cRcR::synapse0x2beb560() {
   return (neuron0x2bda8b0()*0.660288);
}

double NNfunction_sb_cRcR::synapse0x2beb5a0() {
   return (neuron0x2bdabf0()*0.0727025);
}

double NNfunction_sb_cRcR::synapse0x2beb5e0() {
   return (neuron0x2bdaf30()*1.98199);
}

double NNfunction_sb_cRcR::synapse0x2beb620() {
   return (neuron0x2bdb270()*-0.0632955);
}

double NNfunction_sb_cRcR::synapse0x2beb660() {
   return (neuron0x2bdb5b0()*-0.0254363);
}

double NNfunction_sb_cRcR::synapse0x2beb6a0() {
   return (neuron0x2bdb8f0()*0.0195519);
}

double NNfunction_sb_cRcR::synapse0x2beb6e0() {
   return (neuron0x2bdbc30()*-0.0729983);
}

double NNfunction_sb_cRcR::synapse0x2beb720() {
   return (neuron0x2bdbf70()*-0.10989);
}

double NNfunction_sb_cRcR::synapse0x2beb760() {
   return (neuron0x2bdc2b0()*0.0950939);
}

double NNfunction_sb_cRcR::synapse0x2beb7a0() {
   return (neuron0x2bdc5f0()*-0.0268808);
}

double NNfunction_sb_cRcR::synapse0x2beb7e0() {
   return (neuron0x2bdc930()*-0.152173);
}

double NNfunction_sb_cRcR::synapse0x2beb820() {
   return (neuron0x2bdcc70()*-0.0325481);
}

double NNfunction_sb_cRcR::synapse0x2beb860() {
   return (neuron0x2bdcfb0()*-0.0857207);
}

double NNfunction_sb_cRcR::synapse0x2beb8a0() {
   return (neuron0x2bdd2f0()*0.0485862);
}

double NNfunction_sb_cRcR::synapse0x2beb8e0() {
   return (neuron0x2bdd630()*-0.411973);
}

double NNfunction_sb_cRcR::synapse0x2beb370() {
   return (neuron0x2bdd970()*-0.11063);
}

double NNfunction_sb_cRcR::synapse0x2beb3b0() {
   return (neuron0x2bdded0()*-0.16623);
}

double NNfunction_sb_cRcR::synapse0x2beba30() {
   return (neuron0x2bde0f0()*0.00177945);
}

double NNfunction_sb_cRcR::synapse0x2beba70() {
   return (neuron0x2bde430()*-0.0385395);
}

double NNfunction_sb_cRcR::synapse0x2bebab0() {
   return (neuron0x2bde770()*0.00557237);
}

double NNfunction_sb_cRcR::synapse0x2bebaf0() {
   return (neuron0x2bdeab0()*0.000643255);
}

double NNfunction_sb_cRcR::synapse0x2bebb30() {
   return (neuron0x2bdedf0()*-0.061682);
}

double NNfunction_sb_cRcR::synapse0x2bebb70() {
   return (neuron0x2bdf130()*-0.00997101);
}

double NNfunction_sb_cRcR::synapse0x2bebef0() {
   return (neuron0x2bda570()*0.00434922);
}

double NNfunction_sb_cRcR::synapse0x2bebf30() {
   return (neuron0x2bda8b0()*0.156826);
}

double NNfunction_sb_cRcR::synapse0x2bebf70() {
   return (neuron0x2bdabf0()*0.0279141);
}

double NNfunction_sb_cRcR::synapse0x2bebfb0() {
   return (neuron0x2bdaf30()*-4.28149);
}

double NNfunction_sb_cRcR::synapse0x2bebff0() {
   return (neuron0x2bdb270()*-0.01448);
}

double NNfunction_sb_cRcR::synapse0x2bec030() {
   return (neuron0x2bdb5b0()*-0.0238215);
}

double NNfunction_sb_cRcR::synapse0x2bec070() {
   return (neuron0x2bdb8f0()*-0.00108606);
}

double NNfunction_sb_cRcR::synapse0x2bec0b0() {
   return (neuron0x2bdbc30()*-0.0152219);
}

double NNfunction_sb_cRcR::synapse0x2bec0f0() {
   return (neuron0x2bdbf70()*-0.0104159);
}

double NNfunction_sb_cRcR::synapse0x2bec130() {
   return (neuron0x2bdc2b0()*-0.0111501);
}

double NNfunction_sb_cRcR::synapse0x2bec170() {
   return (neuron0x2bdc5f0()*-0.0247391);
}

double NNfunction_sb_cRcR::synapse0x2bec1b0() {
   return (neuron0x2bdc930()*-0.0384553);
}

double NNfunction_sb_cRcR::synapse0x2bec1f0() {
   return (neuron0x2bdcc70()*-0.0578249);
}

double NNfunction_sb_cRcR::synapse0x2bec230() {
   return (neuron0x2bdcfb0()*-0.0194949);
}

double NNfunction_sb_cRcR::synapse0x2bec270() {
   return (neuron0x2bdd2f0()*-0.015629);
}

double NNfunction_sb_cRcR::synapse0x2bec2b0() {
   return (neuron0x2bdd630()*0.150894);
}

double NNfunction_sb_cRcR::synapse0x2bebd40() {
   return (neuron0x2bdd970()*-0.0214936);
}

double NNfunction_sb_cRcR::synapse0x2bebd80() {
   return (neuron0x2bdded0()*-0.0731395);
}

double NNfunction_sb_cRcR::synapse0x2bec400() {
   return (neuron0x2bde0f0()*-0.0158599);
}

double NNfunction_sb_cRcR::synapse0x2bec440() {
   return (neuron0x2bde430()*-0.0323047);
}

double NNfunction_sb_cRcR::synapse0x2bec480() {
   return (neuron0x2bde770()*-0.00718645);
}

double NNfunction_sb_cRcR::synapse0x2bec4c0() {
   return (neuron0x2bdeab0()*0.0027919);
}

double NNfunction_sb_cRcR::synapse0x2bec500() {
   return (neuron0x2bdedf0()*-0.00403205);
}

double NNfunction_sb_cRcR::synapse0x2bec540() {
   return (neuron0x2bdf130()*-0.0178666);
}

double NNfunction_sb_cRcR::synapse0x2bec8c0() {
   return (neuron0x2bda570()*0.109648);
}

double NNfunction_sb_cRcR::synapse0x2bec900() {
   return (neuron0x2bda8b0()*-0.665124);
}

double NNfunction_sb_cRcR::synapse0x2bec940() {
   return (neuron0x2bdabf0()*-0.0940467);
}

double NNfunction_sb_cRcR::synapse0x2bec980() {
   return (neuron0x2bdaf30()*-0.621652);
}

double NNfunction_sb_cRcR::synapse0x2bec9c0() {
   return (neuron0x2bdb270()*-0.00786612);
}

double NNfunction_sb_cRcR::synapse0x2beca00() {
   return (neuron0x2bdb5b0()*0.254398);
}

double NNfunction_sb_cRcR::synapse0x2beca40() {
   return (neuron0x2bdb8f0()*0.107945);
}

double NNfunction_sb_cRcR::synapse0x2beca80() {
   return (neuron0x2bdbc30()*-0.156305);
}

double NNfunction_sb_cRcR::synapse0x2becac0() {
   return (neuron0x2bdbf70()*-0.525087);
}

double NNfunction_sb_cRcR::synapse0x2becb00() {
   return (neuron0x2bdc2b0()*-0.099959);
}

double NNfunction_sb_cRcR::synapse0x2becb40() {
   return (neuron0x2bdc5f0()*0.383048);
}

double NNfunction_sb_cRcR::synapse0x2becb80() {
   return (neuron0x2bdc930()*0.48337);
}

double NNfunction_sb_cRcR::synapse0x2becbc0() {
   return (neuron0x2bdcc70()*-0.453733);
}

double NNfunction_sb_cRcR::synapse0x2becc00() {
   return (neuron0x2bdcfb0()*-0.0988505);
}

double NNfunction_sb_cRcR::synapse0x2becc40() {
   return (neuron0x2bdd2f0()*-0.0407141);
}

double NNfunction_sb_cRcR::synapse0x2becc80() {
   return (neuron0x2bdd630()*-0.418248);
}

double NNfunction_sb_cRcR::synapse0x2bec710() {
   return (neuron0x2bdd970()*-0.0706696);
}

double NNfunction_sb_cRcR::synapse0x2bec750() {
   return (neuron0x2bdded0()*-0.127022);
}

double NNfunction_sb_cRcR::synapse0x2becdd0() {
   return (neuron0x2bde0f0()*0.105652);
}

double NNfunction_sb_cRcR::synapse0x2bece10() {
   return (neuron0x2bde430()*0.148274);
}

double NNfunction_sb_cRcR::synapse0x2bece50() {
   return (neuron0x2bde770()*-0.152425);
}

double NNfunction_sb_cRcR::synapse0x2bece90() {
   return (neuron0x2bdeab0()*-0.0451333);
}

double NNfunction_sb_cRcR::synapse0x2beced0() {
   return (neuron0x2bdedf0()*0.0125013);
}

double NNfunction_sb_cRcR::synapse0x2becf10() {
   return (neuron0x2bdf130()*0.0477312);
}

double NNfunction_sb_cRcR::synapse0x2bed290() {
   return (neuron0x2bda570()*-0.0280068);
}

double NNfunction_sb_cRcR::synapse0x2bed2d0() {
   return (neuron0x2bda8b0()*0.0281451);
}

double NNfunction_sb_cRcR::synapse0x2bed310() {
   return (neuron0x2bdabf0()*-0.0196134);
}

double NNfunction_sb_cRcR::synapse0x2bed350() {
   return (neuron0x2bdaf30()*-0.248732);
}

double NNfunction_sb_cRcR::synapse0x2bed390() {
   return (neuron0x2bdb270()*0.0529788);
}

double NNfunction_sb_cRcR::synapse0x2bed3d0() {
   return (neuron0x2bdb5b0()*-0.41308);
}

double NNfunction_sb_cRcR::synapse0x2bed410() {
   return (neuron0x2bdb8f0()*-0.176176);
}

double NNfunction_sb_cRcR::synapse0x2bed450() {
   return (neuron0x2bdbc30()*0.010927);
}

double NNfunction_sb_cRcR::synapse0x2bed490() {
   return (neuron0x2bdbf70()*-0.0430343);
}

double NNfunction_sb_cRcR::synapse0x2bed4d0() {
   return (neuron0x2bdc2b0()*-0.0236096);
}

double NNfunction_sb_cRcR::synapse0x2bed510() {
   return (neuron0x2bdc5f0()*0.0176179);
}

double NNfunction_sb_cRcR::synapse0x2bed550() {
   return (neuron0x2bdc930()*0.0585258);
}

double NNfunction_sb_cRcR::synapse0x2bed590() {
   return (neuron0x2bdcc70()*0.146248);
}

double NNfunction_sb_cRcR::synapse0x2bed5d0() {
   return (neuron0x2bdcfb0()*-0.0982589);
}

double NNfunction_sb_cRcR::synapse0x2bed610() {
   return (neuron0x2bdd2f0()*-0.261611);
}

double NNfunction_sb_cRcR::synapse0x2bed650() {
   return (neuron0x2bdd630()*-0.379974);
}

double NNfunction_sb_cRcR::synapse0x2bed0e0() {
   return (neuron0x2bdd970()*-0.273591);
}

double NNfunction_sb_cRcR::synapse0x2bed120() {
   return (neuron0x2bdded0()*-0.0710891);
}

double NNfunction_sb_cRcR::synapse0x2bed7a0() {
   return (neuron0x2bde0f0()*0.128244);
}

double NNfunction_sb_cRcR::synapse0x2bed7e0() {
   return (neuron0x2bde430()*0.0811049);
}

double NNfunction_sb_cRcR::synapse0x2bed820() {
   return (neuron0x2bde770()*-0.0289637);
}

double NNfunction_sb_cRcR::synapse0x2bed860() {
   return (neuron0x2bdeab0()*0.0145916);
}

double NNfunction_sb_cRcR::synapse0x2bed8a0() {
   return (neuron0x2bdedf0()*-0.0172905);
}

double NNfunction_sb_cRcR::synapse0x2bed8e0() {
   return (neuron0x2bdf130()*-0.0125601);
}

double NNfunction_sb_cRcR::synapse0x2bedc60() {
   return (neuron0x2bda570()*-0.154999);
}

double NNfunction_sb_cRcR::synapse0x2bedca0() {
   return (neuron0x2bda8b0()*0.0546434);
}

double NNfunction_sb_cRcR::synapse0x2bedce0() {
   return (neuron0x2bdabf0()*0.10809);
}

double NNfunction_sb_cRcR::synapse0x2bedd20() {
   return (neuron0x2bdaf30()*-0.395116);
}

double NNfunction_sb_cRcR::synapse0x2bedd60() {
   return (neuron0x2bdb270()*0.111035);
}

double NNfunction_sb_cRcR::synapse0x2bedda0() {
   return (neuron0x2bdb5b0()*-0.457293);
}

double NNfunction_sb_cRcR::synapse0x2bedde0() {
   return (neuron0x2bdb8f0()*-0.390488);
}

double NNfunction_sb_cRcR::synapse0x2bede20() {
   return (neuron0x2bdbc30()*0.156502);
}

double NNfunction_sb_cRcR::synapse0x2bede60() {
   return (neuron0x2bdbf70()*0.65206);
}

double NNfunction_sb_cRcR::synapse0x2be6020() {
   return (neuron0x2bdc2b0()*1.92729);
}

double NNfunction_sb_cRcR::synapse0x2be6060() {
   return (neuron0x2bdc5f0()*0.300125);
}

double NNfunction_sb_cRcR::synapse0x2be60a0() {
   return (neuron0x2bdc930()*-0.26713);
}

double NNfunction_sb_cRcR::synapse0x2be60e0() {
   return (neuron0x2bdcc70()*-0.509623);
}

double NNfunction_sb_cRcR::synapse0x2be6120() {
   return (neuron0x2bdcfb0()*-0.209056);
}

double NNfunction_sb_cRcR::synapse0x2be6160() {
   return (neuron0x2bdd2f0()*-0.121807);
}

double NNfunction_sb_cRcR::synapse0x2be61a0() {
   return (neuron0x2bdd630()*0.229702);
}

double NNfunction_sb_cRcR::synapse0x2bedab0() {
   return (neuron0x2bdd970()*-0.511264);
}

double NNfunction_sb_cRcR::synapse0x2bedaf0() {
   return (neuron0x2bdded0()*-0.483815);
}

double NNfunction_sb_cRcR::synapse0x2be62f0() {
   return (neuron0x2bde0f0()*0.310046);
}

double NNfunction_sb_cRcR::synapse0x2be6330() {
   return (neuron0x2bde430()*-0.0465821);
}

double NNfunction_sb_cRcR::synapse0x2be6370() {
   return (neuron0x2bde770()*-0.128813);
}

double NNfunction_sb_cRcR::synapse0x2be63b0() {
   return (neuron0x2bdeab0()*0.292193);
}

double NNfunction_sb_cRcR::synapse0x2be63f0() {
   return (neuron0x2bdedf0()*0.190604);
}

double NNfunction_sb_cRcR::synapse0x2be6430() {
   return (neuron0x2bdf130()*-0.692663);
}

double NNfunction_sb_cRcR::synapse0x2be67b0() {
   return (neuron0x2bda570()*1.05316);
}

double NNfunction_sb_cRcR::synapse0x2be67f0() {
   return (neuron0x2bda8b0()*0.753225);
}

double NNfunction_sb_cRcR::synapse0x2be6830() {
   return (neuron0x2bdabf0()*-0.108215);
}

double NNfunction_sb_cRcR::synapse0x2be6870() {
   return (neuron0x2bdaf30()*-0.371565);
}

double NNfunction_sb_cRcR::synapse0x2be68b0() {
   return (neuron0x2bdb270()*-0.102868);
}

double NNfunction_sb_cRcR::synapse0x2be68f0() {
   return (neuron0x2bdb5b0()*-0.667208);
}

double NNfunction_sb_cRcR::synapse0x2be6930() {
   return (neuron0x2bdb8f0()*0.118245);
}

double NNfunction_sb_cRcR::synapse0x2be6970() {
   return (neuron0x2bdbc30()*0.066376);
}

double NNfunction_sb_cRcR::synapse0x2be69b0() {
   return (neuron0x2bdbf70()*0.0120231);
}

double NNfunction_sb_cRcR::synapse0x2be69f0() {
   return (neuron0x2bdc2b0()*-1.5343);
}

double NNfunction_sb_cRcR::synapse0x2be6a30() {
   return (neuron0x2bdc5f0()*0.446389);
}

double NNfunction_sb_cRcR::synapse0x2be6a70() {
   return (neuron0x2bdc930()*-0.240443);
}

double NNfunction_sb_cRcR::synapse0x2be6ab0() {
   return (neuron0x2bdcc70()*-0.517221);
}

double NNfunction_sb_cRcR::synapse0x2be6af0() {
   return (neuron0x2bdcfb0()*-0.466614);
}

double NNfunction_sb_cRcR::synapse0x2be6b30() {
   return (neuron0x2bdd2f0()*-0.259633);
}

double NNfunction_sb_cRcR::synapse0x2be6b70() {
   return (neuron0x2bdd630()*-0.634453);
}

double NNfunction_sb_cRcR::synapse0x2be6600() {
   return (neuron0x2bdd970()*0.00346599);
}

double NNfunction_sb_cRcR::synapse0x2be6640() {
   return (neuron0x2bdded0()*-0.631039);
}

double NNfunction_sb_cRcR::synapse0x2be6cc0() {
   return (neuron0x2bde0f0()*-0.752773);
}

double NNfunction_sb_cRcR::synapse0x2be6d00() {
   return (neuron0x2bde430()*-0.103148);
}

double NNfunction_sb_cRcR::synapse0x2be6d40() {
   return (neuron0x2bde770()*0.178406);
}

double NNfunction_sb_cRcR::synapse0x2be6d80() {
   return (neuron0x2bdeab0()*0.726698);
}

double NNfunction_sb_cRcR::synapse0x2be6dc0() {
   return (neuron0x2bdedf0()*-0.289141);
}

double NNfunction_sb_cRcR::synapse0x2be6e00() {
   return (neuron0x2bdf130()*0.178108);
}

double NNfunction_sb_cRcR::synapse0x2be6fd0() {
   return (neuron0x2bda570()*0.00501851);
}

double NNfunction_sb_cRcR::synapse0x2bf0060() {
   return (neuron0x2bda8b0()*0.00816167);
}

double NNfunction_sb_cRcR::synapse0x2bf00a0() {
   return (neuron0x2bdabf0()*-0.0408631);
}

double NNfunction_sb_cRcR::synapse0x2bf00e0() {
   return (neuron0x2bdaf30()*-0.0310157);
}

double NNfunction_sb_cRcR::synapse0x2bf0120() {
   return (neuron0x2bdb270()*-0.0649815);
}

double NNfunction_sb_cRcR::synapse0x2bf0160() {
   return (neuron0x2bdb5b0()*0.0212975);
}

double NNfunction_sb_cRcR::synapse0x2bf01a0() {
   return (neuron0x2bdb8f0()*-0.0192237);
}

double NNfunction_sb_cRcR::synapse0x2bf01e0() {
   return (neuron0x2bdbc30()*-0.0126369);
}

double NNfunction_sb_cRcR::synapse0x2bf0220() {
   return (neuron0x2bdbf70()*0.00744838);
}

double NNfunction_sb_cRcR::synapse0x2bf0260() {
   return (neuron0x2bdc2b0()*0.00722769);
}

double NNfunction_sb_cRcR::synapse0x2bf02a0() {
   return (neuron0x2bdc5f0()*0.027757);
}

double NNfunction_sb_cRcR::synapse0x2bf02e0() {
   return (neuron0x2bdc930()*0.0430718);
}

double NNfunction_sb_cRcR::synapse0x2bf0320() {
   return (neuron0x2bdcc70()*0.0298265);
}

double NNfunction_sb_cRcR::synapse0x2bf0360() {
   return (neuron0x2bdcfb0()*-0.0250665);
}

double NNfunction_sb_cRcR::synapse0x2bf03a0() {
   return (neuron0x2bdd2f0()*0.0432705);
}

double NNfunction_sb_cRcR::synapse0x2bf03e0() {
   return (neuron0x2bdd630()*-5.46918);
}

double NNfunction_sb_cRcR::synapse0x2befeb0() {
   return (neuron0x2bdd970()*-0.0152249);
}

double NNfunction_sb_cRcR::synapse0x2befef0() {
   return (neuron0x2bdded0()*0.0348268);
}

double NNfunction_sb_cRcR::synapse0x2bf0530() {
   return (neuron0x2bde0f0()*0.0389055);
}

double NNfunction_sb_cRcR::synapse0x2bf0570() {
   return (neuron0x2bde430()*0.0589221);
}

double NNfunction_sb_cRcR::synapse0x2bf05b0() {
   return (neuron0x2bde770()*-0.0181628);
}

double NNfunction_sb_cRcR::synapse0x2bf05f0() {
   return (neuron0x2bdeab0()*-0.00492339);
}

double NNfunction_sb_cRcR::synapse0x2bf0630() {
   return (neuron0x2bdedf0()*0.00692736);
}

double NNfunction_sb_cRcR::synapse0x2bf0670() {
   return (neuron0x2bdf130()*-0.00507846);
}

double NNfunction_sb_cRcR::synapse0x2bf09f0() {
   return (neuron0x2bda570()*0.0201495);
}

double NNfunction_sb_cRcR::synapse0x2bf0a30() {
   return (neuron0x2bda8b0()*0.172234);
}

double NNfunction_sb_cRcR::synapse0x2bf0a70() {
   return (neuron0x2bdabf0()*0.0382676);
}

double NNfunction_sb_cRcR::synapse0x2bf0ab0() {
   return (neuron0x2bdaf30()*-7.90462);
}

double NNfunction_sb_cRcR::synapse0x2bf0af0() {
   return (neuron0x2bdb270()*0.00715186);
}

double NNfunction_sb_cRcR::synapse0x2bf0b30() {
   return (neuron0x2bdb5b0()*0.0768321);
}

double NNfunction_sb_cRcR::synapse0x2bf0b70() {
   return (neuron0x2bdb8f0()*-0.0113832);
}

double NNfunction_sb_cRcR::synapse0x2bf0bb0() {
   return (neuron0x2bdbc30()*-0.0552419);
}

double NNfunction_sb_cRcR::synapse0x2bf0bf0() {
   return (neuron0x2bdbf70()*0.0324022);
}

double NNfunction_sb_cRcR::synapse0x2bf0c30() {
   return (neuron0x2bdc2b0()*0.0240878);
}

double NNfunction_sb_cRcR::synapse0x2bf0c70() {
   return (neuron0x2bdc5f0()*-0.0272717);
}

double NNfunction_sb_cRcR::synapse0x2bf0cb0() {
   return (neuron0x2bdc930()*-0.0243643);
}

double NNfunction_sb_cRcR::synapse0x2bf0cf0() {
   return (neuron0x2bdcc70()*-0.0276668);
}

double NNfunction_sb_cRcR::synapse0x2bf0d30() {
   return (neuron0x2bdcfb0()*0.132602);
}

double NNfunction_sb_cRcR::synapse0x2bf0d70() {
   return (neuron0x2bdd2f0()*-0.00214903);
}

double NNfunction_sb_cRcR::synapse0x2bf0db0() {
   return (neuron0x2bdd630()*0.512439);
}

double NNfunction_sb_cRcR::synapse0x2bf0840() {
   return (neuron0x2bdd970()*-0.0199327);
}

double NNfunction_sb_cRcR::synapse0x2bf0880() {
   return (neuron0x2bdded0()*-0.0108263);
}

double NNfunction_sb_cRcR::synapse0x2bf0f00() {
   return (neuron0x2bde0f0()*-0.052781);
}

double NNfunction_sb_cRcR::synapse0x2bf0f40() {
   return (neuron0x2bde430()*-0.00505898);
}

double NNfunction_sb_cRcR::synapse0x2bf0f80() {
   return (neuron0x2bde770()*0.00309807);
}

double NNfunction_sb_cRcR::synapse0x2bf0fc0() {
   return (neuron0x2bdeab0()*0.00974855);
}

double NNfunction_sb_cRcR::synapse0x2bf1000() {
   return (neuron0x2bdedf0()*-0.00209471);
}

double NNfunction_sb_cRcR::synapse0x2bf1040() {
   return (neuron0x2bdf130()*-0.0298616);
}

double NNfunction_sb_cRcR::synapse0x2bf13c0() {
   return (neuron0x2bda570()*0.0200968);
}

double NNfunction_sb_cRcR::synapse0x2bf1400() {
   return (neuron0x2bda8b0()*0.0341055);
}

double NNfunction_sb_cRcR::synapse0x2bf1440() {
   return (neuron0x2bdabf0()*-0.0450761);
}

double NNfunction_sb_cRcR::synapse0x2bf1480() {
   return (neuron0x2bdaf30()*-0.167184);
}

double NNfunction_sb_cRcR::synapse0x2bf14c0() {
   return (neuron0x2bdb270()*-0.0113761);
}

double NNfunction_sb_cRcR::synapse0x2bf1500() {
   return (neuron0x2bdb5b0()*0.0651557);
}

double NNfunction_sb_cRcR::synapse0x2bf1540() {
   return (neuron0x2bdb8f0()*-0.0322048);
}

double NNfunction_sb_cRcR::synapse0x2bf1580() {
   return (neuron0x2bdbc30()*-0.000857277);
}

double NNfunction_sb_cRcR::synapse0x2bf15c0() {
   return (neuron0x2bdbf70()*-0.0153814);
}

double NNfunction_sb_cRcR::synapse0x2bf1600() {
   return (neuron0x2bdc2b0()*0.0244025);
}

double NNfunction_sb_cRcR::synapse0x2bf1640() {
   return (neuron0x2bdc5f0()*0.0854607);
}

double NNfunction_sb_cRcR::synapse0x2bf1680() {
   return (neuron0x2bdc930()*0.0935579);
}

double NNfunction_sb_cRcR::synapse0x2bf16c0() {
   return (neuron0x2bdcc70()*0.049098);
}

double NNfunction_sb_cRcR::synapse0x2bf1700() {
   return (neuron0x2bdcfb0()*0.104216);
}

double NNfunction_sb_cRcR::synapse0x2bf1740() {
   return (neuron0x2bdd2f0()*-0.0283201);
}

double NNfunction_sb_cRcR::synapse0x2bf1780() {
   return (neuron0x2bdd630()*0.424325);
}

double NNfunction_sb_cRcR::synapse0x2bf1210() {
   return (neuron0x2bdd970()*0.0326242);
}

double NNfunction_sb_cRcR::synapse0x2bf1250() {
   return (neuron0x2bdded0()*0.104726);
}

double NNfunction_sb_cRcR::synapse0x2bf18d0() {
   return (neuron0x2bde0f0()*0.0915802);
}

double NNfunction_sb_cRcR::synapse0x2bf1910() {
   return (neuron0x2bde430()*-1.12477);
}

double NNfunction_sb_cRcR::synapse0x2bf1950() {
   return (neuron0x2bde770()*0.0369121);
}

double NNfunction_sb_cRcR::synapse0x2bf1990() {
   return (neuron0x2bdeab0()*-0.0508058);
}

double NNfunction_sb_cRcR::synapse0x2bf19d0() {
   return (neuron0x2bdedf0()*0.0253244);
}

double NNfunction_sb_cRcR::synapse0x2bf1a10() {
   return (neuron0x2bdf130()*-0.0111486);
}

double NNfunction_sb_cRcR::synapse0x2bf1d90() {
   return (neuron0x2bda570()*-0.0347581);
}

double NNfunction_sb_cRcR::synapse0x2bf1dd0() {
   return (neuron0x2bda8b0()*0.440206);
}

double NNfunction_sb_cRcR::synapse0x2bf1e10() {
   return (neuron0x2bdabf0()*-0.00706273);
}

double NNfunction_sb_cRcR::synapse0x2bf1e50() {
   return (neuron0x2bdaf30()*-0.372465);
}

double NNfunction_sb_cRcR::synapse0x2bf1e90() {
   return (neuron0x2bdb270()*-0.0311827);
}

double NNfunction_sb_cRcR::synapse0x2bf1ed0() {
   return (neuron0x2bdb5b0()*-0.196672);
}

double NNfunction_sb_cRcR::synapse0x2bf1f10() {
   return (neuron0x2bdb8f0()*-0.179618);
}

double NNfunction_sb_cRcR::synapse0x2bf1f50() {
   return (neuron0x2bdbc30()*-0.0877481);
}

double NNfunction_sb_cRcR::synapse0x2bf1f90() {
   return (neuron0x2bdbf70()*-0.453718);
}

double NNfunction_sb_cRcR::synapse0x2bf1fd0() {
   return (neuron0x2bdc2b0()*-0.732321);
}

double NNfunction_sb_cRcR::synapse0x2bf2010() {
   return (neuron0x2bdc5f0()*0.1019);
}

double NNfunction_sb_cRcR::synapse0x2bf2050() {
   return (neuron0x2bdc930()*-0.00151581);
}

double NNfunction_sb_cRcR::synapse0x2bf2090() {
   return (neuron0x2bdcc70()*0.208214);
}

double NNfunction_sb_cRcR::synapse0x2bf20d0() {
   return (neuron0x2bdcfb0()*-0.167724);
}

double NNfunction_sb_cRcR::synapse0x2bf2110() {
   return (neuron0x2bdd2f0()*-0.0825187);
}

double NNfunction_sb_cRcR::synapse0x2bf2150() {
   return (neuron0x2bdd630()*0.076896);
}

double NNfunction_sb_cRcR::synapse0x2bf1be0() {
   return (neuron0x2bdd970()*-0.172765);
}

double NNfunction_sb_cRcR::synapse0x2bf1c20() {
   return (neuron0x2bdded0()*0.0549267);
}

double NNfunction_sb_cRcR::synapse0x2bf22a0() {
   return (neuron0x2bde0f0()*0.138);
}

double NNfunction_sb_cRcR::synapse0x2bf22e0() {
   return (neuron0x2bde430()*0.162667);
}

double NNfunction_sb_cRcR::synapse0x2bf2320() {
   return (neuron0x2bde770()*-0.0436155);
}

double NNfunction_sb_cRcR::synapse0x2bf2360() {
   return (neuron0x2bdeab0()*0.00492241);
}

double NNfunction_sb_cRcR::synapse0x2bf23a0() {
   return (neuron0x2bdedf0()*-0.0317827);
}

double NNfunction_sb_cRcR::synapse0x2bf23e0() {
   return (neuron0x2bdf130()*0.00900106);
}

double NNfunction_sb_cRcR::synapse0x2bf2760() {
   return (neuron0x2bda570()*-0.00423938);
}

double NNfunction_sb_cRcR::synapse0x2bf27a0() {
   return (neuron0x2bda8b0()*0.0011968);
}

double NNfunction_sb_cRcR::synapse0x2bf27e0() {
   return (neuron0x2bdabf0()*0.00430498);
}

double NNfunction_sb_cRcR::synapse0x2bf2820() {
   return (neuron0x2bdaf30()*-0.0298801);
}

double NNfunction_sb_cRcR::synapse0x2bf2860() {
   return (neuron0x2bdb270()*-0.00234526);
}

double NNfunction_sb_cRcR::synapse0x2bf28a0() {
   return (neuron0x2bdb5b0()*-0.0106031);
}

double NNfunction_sb_cRcR::synapse0x2bf28e0() {
   return (neuron0x2bdb8f0()*-0.00164661);
}

double NNfunction_sb_cRcR::synapse0x2bf2920() {
   return (neuron0x2bdbc30()*0.013695);
}

double NNfunction_sb_cRcR::synapse0x2bf2960() {
   return (neuron0x2bdbf70()*-0.000548711);
}

double NNfunction_sb_cRcR::synapse0x2bf29a0() {
   return (neuron0x2bdc2b0()*-0.00646249);
}

double NNfunction_sb_cRcR::synapse0x2bf29e0() {
   return (neuron0x2bdc5f0()*-0.00147837);
}

double NNfunction_sb_cRcR::synapse0x2bf2a20() {
   return (neuron0x2bdc930()*0.0419829);
}

double NNfunction_sb_cRcR::synapse0x2bf2a60() {
   return (neuron0x2bdcc70()*0.038632);
}

double NNfunction_sb_cRcR::synapse0x2bf2aa0() {
   return (neuron0x2bdcfb0()*0.00438438);
}

double NNfunction_sb_cRcR::synapse0x2bf2ae0() {
   return (neuron0x2bdd2f0()*0.0248186);
}

double NNfunction_sb_cRcR::synapse0x2bf2b20() {
   return (neuron0x2bdd630()*-0.88758);
}

double NNfunction_sb_cRcR::synapse0x2bf25b0() {
   return (neuron0x2bdd970()*0.00560951);
}

double NNfunction_sb_cRcR::synapse0x2bf25f0() {
   return (neuron0x2bdded0()*0.0201019);
}

double NNfunction_sb_cRcR::synapse0x2bf2c70() {
   return (neuron0x2bde0f0()*0.0243219);
}

double NNfunction_sb_cRcR::synapse0x2bf2cb0() {
   return (neuron0x2bde430()*0.00992694);
}

double NNfunction_sb_cRcR::synapse0x2bf2cf0() {
   return (neuron0x2bde770()*0.0022708);
}

double NNfunction_sb_cRcR::synapse0x2bf2d30() {
   return (neuron0x2bdeab0()*-2.088e-05);
}

double NNfunction_sb_cRcR::synapse0x2bf2d70() {
   return (neuron0x2bdedf0()*-0.00394566);
}

double NNfunction_sb_cRcR::synapse0x2bf2db0() {
   return (neuron0x2bdf130()*-0.00146881);
}

double NNfunction_sb_cRcR::synapse0x2bf3130() {
   return (neuron0x2bda570()*-0.467208);
}

double NNfunction_sb_cRcR::synapse0x2bf3170() {
   return (neuron0x2bda8b0()*-0.00290007);
}

double NNfunction_sb_cRcR::synapse0x2bf31b0() {
   return (neuron0x2bdabf0()*-0.162526);
}

double NNfunction_sb_cRcR::synapse0x2bf31f0() {
   return (neuron0x2bdaf30()*1.2559);
}

double NNfunction_sb_cRcR::synapse0x2bf3230() {
   return (neuron0x2bdb270()*-0.0295511);
}

double NNfunction_sb_cRcR::synapse0x2bf3270() {
   return (neuron0x2bdb5b0()*-0.139643);
}

double NNfunction_sb_cRcR::synapse0x2bf32b0() {
   return (neuron0x2bdb8f0()*-0.0223591);
}

double NNfunction_sb_cRcR::synapse0x2bf32f0() {
   return (neuron0x2bdbc30()*-0.0301488);
}

double NNfunction_sb_cRcR::synapse0x2bf3330() {
   return (neuron0x2bdbf70()*0.113231);
}

double NNfunction_sb_cRcR::synapse0x2bf3370() {
   return (neuron0x2bdc2b0()*0.0885969);
}

double NNfunction_sb_cRcR::synapse0x2bf33b0() {
   return (neuron0x2bdc5f0()*0.235787);
}

double NNfunction_sb_cRcR::synapse0x2bf33f0() {
   return (neuron0x2bdc930()*0.425127);
}

double NNfunction_sb_cRcR::synapse0x2bf3430() {
   return (neuron0x2bdcc70()*0.316683);
}

double NNfunction_sb_cRcR::synapse0x2bf3470() {
   return (neuron0x2bdcfb0()*0.053815);
}

double NNfunction_sb_cRcR::synapse0x2bf34b0() {
   return (neuron0x2bdd2f0()*0.108636);
}

double NNfunction_sb_cRcR::synapse0x2bf34f0() {
   return (neuron0x2bdd630()*-0.765643);
}

double NNfunction_sb_cRcR::synapse0x2bf2f80() {
   return (neuron0x2bdd970()*-0.401885);
}

double NNfunction_sb_cRcR::synapse0x2bf2fc0() {
   return (neuron0x2bdded0()*-0.219799);
}

double NNfunction_sb_cRcR::synapse0x2bf3640() {
   return (neuron0x2bde0f0()*0.0972299);
}

double NNfunction_sb_cRcR::synapse0x2bf3680() {
   return (neuron0x2bde430()*0.394026);
}

double NNfunction_sb_cRcR::synapse0x2bf36c0() {
   return (neuron0x2bde770()*-0.0429273);
}

double NNfunction_sb_cRcR::synapse0x2bf3700() {
   return (neuron0x2bdeab0()*-0.0997956);
}

double NNfunction_sb_cRcR::synapse0x2bf3740() {
   return (neuron0x2bdedf0()*-0.138903);
}

double NNfunction_sb_cRcR::synapse0x2bf3780() {
   return (neuron0x2bdf130()*-0.143238);
}

double NNfunction_sb_cRcR::synapse0x2bf3b00() {
   return (neuron0x2bda570()*0.123408);
}

double NNfunction_sb_cRcR::synapse0x2bf3b40() {
   return (neuron0x2bda8b0()*1.00564);
}

double NNfunction_sb_cRcR::synapse0x2bf3b80() {
   return (neuron0x2bdabf0()*-0.348197);
}

double NNfunction_sb_cRcR::synapse0x2bf3bc0() {
   return (neuron0x2bdaf30()*-1.00475);
}

double NNfunction_sb_cRcR::synapse0x2bf3c00() {
   return (neuron0x2bdb270()*0.0135974);
}

double NNfunction_sb_cRcR::synapse0x2bf3c40() {
   return (neuron0x2bdb5b0()*0.328567);
}

double NNfunction_sb_cRcR::synapse0x2bf3c80() {
   return (neuron0x2bdb8f0()*0.269183);
}

double NNfunction_sb_cRcR::synapse0x2bf3cc0() {
   return (neuron0x2bdbc30()*-0.0157781);
}

double NNfunction_sb_cRcR::synapse0x2bf3d00() {
   return (neuron0x2bdbf70()*-0.034037);
}

double NNfunction_sb_cRcR::synapse0x2bf3d40() {
   return (neuron0x2bdc2b0()*-0.396549);
}

double NNfunction_sb_cRcR::synapse0x2bf3d80() {
   return (neuron0x2bdc5f0()*-0.803719);
}

double NNfunction_sb_cRcR::synapse0x2bf3dc0() {
   return (neuron0x2bdc930()*0.120494);
}

double NNfunction_sb_cRcR::synapse0x2bf3e00() {
   return (neuron0x2bdcc70()*0.550321);
}

double NNfunction_sb_cRcR::synapse0x2bf3e40() {
   return (neuron0x2bdcfb0()*-0.590392);
}

double NNfunction_sb_cRcR::synapse0x2bf3e80() {
   return (neuron0x2bdd2f0()*-0.0852447);
}

double NNfunction_sb_cRcR::synapse0x2bf3ec0() {
   return (neuron0x2bdd630()*-0.983401);
}

double NNfunction_sb_cRcR::synapse0x2bf3950() {
   return (neuron0x2bdd970()*-0.0475341);
}

double NNfunction_sb_cRcR::synapse0x2bf3990() {
   return (neuron0x2bdded0()*0.753429);
}

double NNfunction_sb_cRcR::synapse0x2bf4010() {
   return (neuron0x2bde0f0()*-0.273773);
}

double NNfunction_sb_cRcR::synapse0x2bf4050() {
   return (neuron0x2bde430()*-0.0564336);
}

double NNfunction_sb_cRcR::synapse0x2bf4090() {
   return (neuron0x2bde770()*0.0335205);
}

double NNfunction_sb_cRcR::synapse0x2bf40d0() {
   return (neuron0x2bdeab0()*-0.0953208);
}

double NNfunction_sb_cRcR::synapse0x2bf4110() {
   return (neuron0x2bdedf0()*-0.0180835);
}

double NNfunction_sb_cRcR::synapse0x2bf4150() {
   return (neuron0x2bdf130()*-0.233035);
}

double NNfunction_sb_cRcR::synapse0x2bf44d0() {
   return (neuron0x2bda570()*0.0321134);
}

double NNfunction_sb_cRcR::synapse0x2bf4510() {
   return (neuron0x2bda8b0()*-0.275437);
}

double NNfunction_sb_cRcR::synapse0x2bf4550() {
   return (neuron0x2bdabf0()*-0.0498113);
}

double NNfunction_sb_cRcR::synapse0x2bf4590() {
   return (neuron0x2bdaf30()*2.71283);
}

double NNfunction_sb_cRcR::synapse0x2bf45d0() {
   return (neuron0x2bdb270()*-0.0367829);
}

double NNfunction_sb_cRcR::synapse0x2bf4610() {
   return (neuron0x2bdb5b0()*-0.0197248);
}

double NNfunction_sb_cRcR::synapse0x2bf4650() {
   return (neuron0x2bdb8f0()*-0.00159407);
}

double NNfunction_sb_cRcR::synapse0x2bf4690() {
   return (neuron0x2bdbc30()*0.00583683);
}

double NNfunction_sb_cRcR::synapse0x2bf46d0() {
   return (neuron0x2bdbf70()*-0.0224257);
}

double NNfunction_sb_cRcR::synapse0x2bf4710() {
   return (neuron0x2bdc2b0()*0.0224486);
}

double NNfunction_sb_cRcR::synapse0x2bf4750() {
   return (neuron0x2bdc5f0()*0.0782693);
}

double NNfunction_sb_cRcR::synapse0x2bf4790() {
   return (neuron0x2bdc930()*-0.0301593);
}

double NNfunction_sb_cRcR::synapse0x2bf47d0() {
   return (neuron0x2bdcc70()*0.0696616);
}

double NNfunction_sb_cRcR::synapse0x2bf4810() {
   return (neuron0x2bdcfb0()*0.0190547);
}

double NNfunction_sb_cRcR::synapse0x2bf4850() {
   return (neuron0x2bdd2f0()*-0.0105558);
}

double NNfunction_sb_cRcR::synapse0x2bf4890() {
   return (neuron0x2bdd630()*0.233778);
}

double NNfunction_sb_cRcR::synapse0x2bf4320() {
   return (neuron0x2bdd970()*0.0860437);
}

double NNfunction_sb_cRcR::synapse0x2bf4360() {
   return (neuron0x2bdded0()*0.128093);
}

double NNfunction_sb_cRcR::synapse0x2bf49e0() {
   return (neuron0x2bde0f0()*0.042184);
}

double NNfunction_sb_cRcR::synapse0x2bf4a20() {
   return (neuron0x2bde430()*0.0628727);
}

double NNfunction_sb_cRcR::synapse0x2bf4a60() {
   return (neuron0x2bde770()*0.0157112);
}

double NNfunction_sb_cRcR::synapse0x2bf4aa0() {
   return (neuron0x2bdeab0()*0.00595503);
}

double NNfunction_sb_cRcR::synapse0x2bf4ae0() {
   return (neuron0x2bdedf0()*0.00578811);
}

double NNfunction_sb_cRcR::synapse0x2bf4b20() {
   return (neuron0x2bdf130()*0.0466382);
}

double NNfunction_sb_cRcR::synapse0x2bf4ea0() {
   return (neuron0x2bda570()*-0.00827768);
}

double NNfunction_sb_cRcR::synapse0x2be9470() {
   return (neuron0x2bda8b0()*-0.0749119);
}

double NNfunction_sb_cRcR::synapse0x2be94b0() {
   return (neuron0x2bdabf0()*-0.0768371);
}

double NNfunction_sb_cRcR::synapse0x2be94f0() {
   return (neuron0x2bdaf30()*0.141994);
}

double NNfunction_sb_cRcR::synapse0x2be9740() {
   return (neuron0x2bdb270()*0.875329);
}

double NNfunction_sb_cRcR::synapse0x2be9780() {
   return (neuron0x2bdb5b0()*-0.0983323);
}

double NNfunction_sb_cRcR::synapse0x2be97c0() {
   return (neuron0x2bdb8f0()*0.0602398);
}

double NNfunction_sb_cRcR::synapse0x2be9a10() {
   return (neuron0x2bdbc30()*0.0533697);
}

double NNfunction_sb_cRcR::synapse0x2be9a50() {
   return (neuron0x2bdbf70()*-0.024826);
}

double NNfunction_sb_cRcR::synapse0x2be9ca0() {
   return (neuron0x2bdc2b0()*0.0511948);
}

double NNfunction_sb_cRcR::synapse0x2be9ce0() {
   return (neuron0x2bdc5f0()*-0.0598631);
}

double NNfunction_sb_cRcR::synapse0x2be9d20() {
   return (neuron0x2bdc930()*0.0121064);
}

double NNfunction_sb_cRcR::synapse0x2be9f70() {
   return (neuron0x2bdcc70()*0.031692);
}

double NNfunction_sb_cRcR::synapse0x2be9fb0() {
   return (neuron0x2bdcfb0()*-0.0160066);
}

double NNfunction_sb_cRcR::synapse0x2bea200() {
   return (neuron0x2bdd2f0()*-0.181949);
}

double NNfunction_sb_cRcR::synapse0x2bea240() {
   return (neuron0x2bdd630()*0.450006);
}

double NNfunction_sb_cRcR::synapse0x2bf4cf0() {
   return (neuron0x2bdd970()*0.317123);
}

double NNfunction_sb_cRcR::synapse0x2bf4d30() {
   return (neuron0x2bdded0()*0.022944);
}

double NNfunction_sb_cRcR::synapse0x2bea390() {
   return (neuron0x2bde0f0()*0.150002);
}

double NNfunction_sb_cRcR::synapse0x2bea8a0() {
   return (neuron0x2bde430()*-0.0440909);
}

double NNfunction_sb_cRcR::synapse0x2bea8e0() {
   return (neuron0x2bde770()*-0.0502829);
}

double NNfunction_sb_cRcR::synapse0x2bea920() {
   return (neuron0x2bdeab0()*0.0255185);
}

double NNfunction_sb_cRcR::synapse0x2beab70() {
   return (neuron0x2bdedf0()*0.0233066);
}

double NNfunction_sb_cRcR::synapse0x2beabb0() {
   return (neuron0x2bdf130()*0.028713);
}

double NNfunction_sb_cRcR::synapse0x2bea460() {
   return (neuron0x2bda570()*0.106002);
}

double NNfunction_sb_cRcR::synapse0x2bea4a0() {
   return (neuron0x2bda8b0()*0.874544);
}

double NNfunction_sb_cRcR::synapse0x2bea4e0() {
   return (neuron0x2bdabf0()*0.66306);
}

double NNfunction_sb_cRcR::synapse0x2bea520() {
   return (neuron0x2bdaf30()*1.18929);
}

double NNfunction_sb_cRcR::synapse0x2beaea0() {
   return (neuron0x2bdb270()*-0.102668);
}

double NNfunction_sb_cRcR::synapse0x2bf71f0() {
   return (neuron0x2bdb5b0()*0.0221802);
}

double NNfunction_sb_cRcR::synapse0x2bf7230() {
   return (neuron0x2bdb8f0()*0.460736);
}

double NNfunction_sb_cRcR::synapse0x2bf7270() {
   return (neuron0x2bdbc30()*-0.198238);
}

double NNfunction_sb_cRcR::synapse0x2bf72b0() {
   return (neuron0x2bdbf70()*0.15756);
}

double NNfunction_sb_cRcR::synapse0x2bf72f0() {
   return (neuron0x2bdc2b0()*0.247682);
}

double NNfunction_sb_cRcR::synapse0x2bf7330() {
   return (neuron0x2bdc5f0()*-0.254119);
}

double NNfunction_sb_cRcR::synapse0x2bf7370() {
   return (neuron0x2bdc930()*-0.271066);
}

double NNfunction_sb_cRcR::synapse0x2bf73b0() {
   return (neuron0x2bdcc70()*-0.528112);
}

double NNfunction_sb_cRcR::synapse0x2bf73f0() {
   return (neuron0x2bdcfb0()*0.60732);
}

double NNfunction_sb_cRcR::synapse0x2bf7430() {
   return (neuron0x2bdd2f0()*-0.169649);
}

double NNfunction_sb_cRcR::synapse0x2bf7470() {
   return (neuron0x2bdd630()*-0.694327);
}

double NNfunction_sb_cRcR::synapse0x2bead80() {
   return (neuron0x2bdd970()*0.0684955);
}

double NNfunction_sb_cRcR::synapse0x2beadc0() {
   return (neuron0x2bdded0()*-0.851488);
}

double NNfunction_sb_cRcR::synapse0x2bf75c0() {
   return (neuron0x2bde0f0()*0.045555);
}

double NNfunction_sb_cRcR::synapse0x2bf7600() {
   return (neuron0x2bde430()*-0.30524);
}

double NNfunction_sb_cRcR::synapse0x2bf7640() {
   return (neuron0x2bde770()*-0.114732);
}

double NNfunction_sb_cRcR::synapse0x2bf7680() {
   return (neuron0x2bdeab0()*-0.216268);
}

double NNfunction_sb_cRcR::synapse0x2bf76c0() {
   return (neuron0x2bdedf0()*-0.286497);
}

double NNfunction_sb_cRcR::synapse0x2bf7700() {
   return (neuron0x2bdf130()*-0.354681);
}

double NNfunction_sb_cRcR::synapse0x2bf7a80() {
   return (neuron0x2bda570()*-0.22303);
}

double NNfunction_sb_cRcR::synapse0x2bf7ac0() {
   return (neuron0x2bda8b0()*-0.943042);
}

double NNfunction_sb_cRcR::synapse0x2bf7b00() {
   return (neuron0x2bdabf0()*-0.00504612);
}

double NNfunction_sb_cRcR::synapse0x2bf7b40() {
   return (neuron0x2bdaf30()*-1.17861);
}

double NNfunction_sb_cRcR::synapse0x2bf7b80() {
   return (neuron0x2bdb270()*-0.246139);
}

double NNfunction_sb_cRcR::synapse0x2bf7bc0() {
   return (neuron0x2bdb5b0()*-0.314365);
}

double NNfunction_sb_cRcR::synapse0x2bf7c00() {
   return (neuron0x2bdb8f0()*-0.379871);
}

double NNfunction_sb_cRcR::synapse0x2bf7c40() {
   return (neuron0x2bdbc30()*0.0522815);
}

double NNfunction_sb_cRcR::synapse0x2bf7c80() {
   return (neuron0x2bdbf70()*0.174334);
}

double NNfunction_sb_cRcR::synapse0x2bf7cc0() {
   return (neuron0x2bdc2b0()*0.143439);
}

double NNfunction_sb_cRcR::synapse0x2bf7d00() {
   return (neuron0x2bdc5f0()*0.272822);
}

double NNfunction_sb_cRcR::synapse0x2bf7d40() {
   return (neuron0x2bdc930()*0.173465);
}

double NNfunction_sb_cRcR::synapse0x2bf7d80() {
   return (neuron0x2bdcc70()*-0.0569722);
}

double NNfunction_sb_cRcR::synapse0x2bf7dc0() {
   return (neuron0x2bdcfb0()*-0.332208);
}

double NNfunction_sb_cRcR::synapse0x2bf7e00() {
   return (neuron0x2bdd2f0()*-0.250835);
}

double NNfunction_sb_cRcR::synapse0x2bf7e40() {
   return (neuron0x2bdd630()*-1.26198);
}

double NNfunction_sb_cRcR::synapse0x2bf78d0() {
   return (neuron0x2bdd970()*-0.108106);
}

double NNfunction_sb_cRcR::synapse0x2bf7910() {
   return (neuron0x2bdded0()*-0.189126);
}

double NNfunction_sb_cRcR::synapse0x2bf7f90() {
   return (neuron0x2bde0f0()*0.143714);
}

double NNfunction_sb_cRcR::synapse0x2bf7fd0() {
   return (neuron0x2bde430()*0.0752272);
}

double NNfunction_sb_cRcR::synapse0x2bf8010() {
   return (neuron0x2bde770()*-0.18496);
}

double NNfunction_sb_cRcR::synapse0x2bf8050() {
   return (neuron0x2bdeab0()*0.183659);
}

double NNfunction_sb_cRcR::synapse0x2bf8090() {
   return (neuron0x2bdedf0()*-0.115582);
}

double NNfunction_sb_cRcR::synapse0x2bf80d0() {
   return (neuron0x2bdf130()*0.0873079);
}

double NNfunction_sb_cRcR::synapse0x2bf8450() {
   return (neuron0x2bda570()*0.0846666);
}

double NNfunction_sb_cRcR::synapse0x2bf8490() {
   return (neuron0x2bda8b0()*-0.155997);
}

double NNfunction_sb_cRcR::synapse0x2bf84d0() {
   return (neuron0x2bdabf0()*-0.0344396);
}

double NNfunction_sb_cRcR::synapse0x2bf8510() {
   return (neuron0x2bdaf30()*-0.137395);
}

double NNfunction_sb_cRcR::synapse0x2bf8550() {
   return (neuron0x2bdb270()*0.0935195);
}

double NNfunction_sb_cRcR::synapse0x2bf8590() {
   return (neuron0x2bdb5b0()*-0.142202);
}

double NNfunction_sb_cRcR::synapse0x2bf85d0() {
   return (neuron0x2bdb8f0()*0.0294541);
}

double NNfunction_sb_cRcR::synapse0x2bf8610() {
   return (neuron0x2bdbc30()*-0.248958);
}

double NNfunction_sb_cRcR::synapse0x2bf8650() {
   return (neuron0x2bdbf70()*-0.292298);
}

double NNfunction_sb_cRcR::synapse0x2bf8690() {
   return (neuron0x2bdc2b0()*0.204008);
}

double NNfunction_sb_cRcR::synapse0x2bf86d0() {
   return (neuron0x2bdc5f0()*0.134153);
}

double NNfunction_sb_cRcR::synapse0x2bf8710() {
   return (neuron0x2bdc930()*-0.109369);
}

double NNfunction_sb_cRcR::synapse0x2bf8750() {
   return (neuron0x2bdcc70()*-0.679132);
}

double NNfunction_sb_cRcR::synapse0x2bf8790() {
   return (neuron0x2bdcfb0()*-0.0589999);
}

double NNfunction_sb_cRcR::synapse0x2bf87d0() {
   return (neuron0x2bdd2f0()*1.36826);
}

double NNfunction_sb_cRcR::synapse0x2bf8810() {
   return (neuron0x2bdd630()*-0.054325);
}

double NNfunction_sb_cRcR::synapse0x2bf82a0() {
   return (neuron0x2bdd970()*0.379949);
}

double NNfunction_sb_cRcR::synapse0x2bf82e0() {
   return (neuron0x2bdded0()*-0.00742497);
}

double NNfunction_sb_cRcR::synapse0x2bf8960() {
   return (neuron0x2bde0f0()*-0.160174);
}

double NNfunction_sb_cRcR::synapse0x2bf89a0() {
   return (neuron0x2bde430()*0.0802775);
}

double NNfunction_sb_cRcR::synapse0x2bf89e0() {
   return (neuron0x2bde770()*-0.137869);
}

double NNfunction_sb_cRcR::synapse0x2bf8a20() {
   return (neuron0x2bdeab0()*-0.0782707);
}

double NNfunction_sb_cRcR::synapse0x2bf8a60() {
   return (neuron0x2bdedf0()*0.248498);
}

double NNfunction_sb_cRcR::synapse0x2bf8aa0() {
   return (neuron0x2bdf130()*-0.0618943);
}

double NNfunction_sb_cRcR::synapse0x2bf8e20() {
   return (neuron0x2bda570()*0.0268701);
}

double NNfunction_sb_cRcR::synapse0x2bf8e60() {
   return (neuron0x2bda8b0()*-0.333925);
}

double NNfunction_sb_cRcR::synapse0x2bf8ea0() {
   return (neuron0x2bdabf0()*0.260522);
}

double NNfunction_sb_cRcR::synapse0x2bf8ee0() {
   return (neuron0x2bdaf30()*0.0673033);
}

double NNfunction_sb_cRcR::synapse0x2bf8f20() {
   return (neuron0x2bdb270()*-0.853625);
}

double NNfunction_sb_cRcR::synapse0x2bf8f60() {
   return (neuron0x2bdb5b0()*-0.525034);
}

double NNfunction_sb_cRcR::synapse0x2bf8fa0() {
   return (neuron0x2bdb8f0()*-0.904287);
}

double NNfunction_sb_cRcR::synapse0x2bf8fe0() {
   return (neuron0x2bdbc30()*0.461448);
}

double NNfunction_sb_cRcR::synapse0x2bf9020() {
   return (neuron0x2bdbf70()*-0.237457);
}

double NNfunction_sb_cRcR::synapse0x2bf9060() {
   return (neuron0x2bdc2b0()*-0.18014);
}

double NNfunction_sb_cRcR::synapse0x2bf90a0() {
   return (neuron0x2bdc5f0()*-0.0837122);
}

double NNfunction_sb_cRcR::synapse0x2bf90e0() {
   return (neuron0x2bdc930()*0.0798704);
}

double NNfunction_sb_cRcR::synapse0x2bf9120() {
   return (neuron0x2bdcc70()*0.00808638);
}

double NNfunction_sb_cRcR::synapse0x2bf9160() {
   return (neuron0x2bdcfb0()*0.371845);
}

double NNfunction_sb_cRcR::synapse0x2bf91a0() {
   return (neuron0x2bdd2f0()*-0.0330049);
}

double NNfunction_sb_cRcR::synapse0x2bf91e0() {
   return (neuron0x2bdd630()*0.236587);
}

double NNfunction_sb_cRcR::synapse0x2bf8c70() {
   return (neuron0x2bdd970()*-0.41912);
}

double NNfunction_sb_cRcR::synapse0x2bf8cb0() {
   return (neuron0x2bdded0()*-0.361291);
}

double NNfunction_sb_cRcR::synapse0x2bf9330() {
   return (neuron0x2bde0f0()*-0.319928);
}

double NNfunction_sb_cRcR::synapse0x2bf9370() {
   return (neuron0x2bde430()*-0.205154);
}

double NNfunction_sb_cRcR::synapse0x2bf93b0() {
   return (neuron0x2bde770()*-0.194589);
}

double NNfunction_sb_cRcR::synapse0x2bf93f0() {
   return (neuron0x2bdeab0()*0.183858);
}

double NNfunction_sb_cRcR::synapse0x2bf9430() {
   return (neuron0x2bdedf0()*0.210476);
}

double NNfunction_sb_cRcR::synapse0x2bf9470() {
   return (neuron0x2bdf130()*-0.331792);
}

double NNfunction_sb_cRcR::synapse0x2bf97f0() {
   return (neuron0x2bda570()*0.0513254);
}

double NNfunction_sb_cRcR::synapse0x2bf9830() {
   return (neuron0x2bda8b0()*-1.3575);
}

double NNfunction_sb_cRcR::synapse0x2bf9870() {
   return (neuron0x2bdabf0()*0.211501);
}

double NNfunction_sb_cRcR::synapse0x2bf98b0() {
   return (neuron0x2bdaf30()*-0.311265);
}

double NNfunction_sb_cRcR::synapse0x2bf98f0() {
   return (neuron0x2bdb270()*-0.492973);
}

double NNfunction_sb_cRcR::synapse0x2bf9930() {
   return (neuron0x2bdb5b0()*0.257223);
}

double NNfunction_sb_cRcR::synapse0x2bf9970() {
   return (neuron0x2bdb8f0()*-0.0983436);
}

double NNfunction_sb_cRcR::synapse0x2bf99b0() {
   return (neuron0x2bdbc30()*-0.232629);
}

double NNfunction_sb_cRcR::synapse0x2bf99f0() {
   return (neuron0x2bdbf70()*-0.429001);
}

double NNfunction_sb_cRcR::synapse0x2bf9a30() {
   return (neuron0x2bdc2b0()*-1.11192);
}

double NNfunction_sb_cRcR::synapse0x2bf9a70() {
   return (neuron0x2bdc5f0()*-0.771393);
}

double NNfunction_sb_cRcR::synapse0x2bf9ab0() {
   return (neuron0x2bdc930()*-0.525964);
}

double NNfunction_sb_cRcR::synapse0x2bf9af0() {
   return (neuron0x2bdcc70()*0.106904);
}

double NNfunction_sb_cRcR::synapse0x2bf9b30() {
   return (neuron0x2bdcfb0()*-0.442056);
}

double NNfunction_sb_cRcR::synapse0x2bf9b70() {
   return (neuron0x2bdd2f0()*-0.327846);
}

double NNfunction_sb_cRcR::synapse0x2bf9bb0() {
   return (neuron0x2bdd630()*0.170028);
}

double NNfunction_sb_cRcR::synapse0x2bf9640() {
   return (neuron0x2bdd970()*-0.256325);
}

double NNfunction_sb_cRcR::synapse0x2bf9680() {
   return (neuron0x2bdded0()*0.132875);
}

double NNfunction_sb_cRcR::synapse0x2bf9d00() {
   return (neuron0x2bde0f0()*-0.438653);
}

double NNfunction_sb_cRcR::synapse0x2bf9d40() {
   return (neuron0x2bde430()*0.32926);
}

double NNfunction_sb_cRcR::synapse0x2bf9d80() {
   return (neuron0x2bde770()*-0.173351);
}

double NNfunction_sb_cRcR::synapse0x2bf9dc0() {
   return (neuron0x2bdeab0()*-0.0415614);
}

double NNfunction_sb_cRcR::synapse0x2bf9e00() {
   return (neuron0x2bdedf0()*0.518767);
}

double NNfunction_sb_cRcR::synapse0x2bf9e40() {
   return (neuron0x2bdf130()*-0.3019);
}

double NNfunction_sb_cRcR::synapse0x2bfa1c0() {
   return (neuron0x2bda570()*-0.195132);
}

double NNfunction_sb_cRcR::synapse0x2bfa200() {
   return (neuron0x2bda8b0()*-0.0144528);
}

double NNfunction_sb_cRcR::synapse0x2bfa240() {
   return (neuron0x2bdabf0()*-0.722577);
}

double NNfunction_sb_cRcR::synapse0x2bfa280() {
   return (neuron0x2bdaf30()*0.557633);
}

double NNfunction_sb_cRcR::synapse0x2bfa2c0() {
   return (neuron0x2bdb270()*0.083658);
}

double NNfunction_sb_cRcR::synapse0x2bfa300() {
   return (neuron0x2bdb5b0()*-0.387323);
}

double NNfunction_sb_cRcR::synapse0x2bfa340() {
   return (neuron0x2bdb8f0()*-0.363137);
}

double NNfunction_sb_cRcR::synapse0x2bfa380() {
   return (neuron0x2bdbc30()*1.05361);
}

double NNfunction_sb_cRcR::synapse0x2bfa3c0() {
   return (neuron0x2bdbf70()*0.581508);
}

double NNfunction_sb_cRcR::synapse0x2bfa400() {
   return (neuron0x2bdc2b0()*0.196496);
}

double NNfunction_sb_cRcR::synapse0x2bfa440() {
   return (neuron0x2bdc5f0()*-0.265203);
}

double NNfunction_sb_cRcR::synapse0x2bfa480() {
   return (neuron0x2bdc930()*0.110396);
}

double NNfunction_sb_cRcR::synapse0x2bfa4c0() {
   return (neuron0x2bdcc70()*-0.586524);
}

double NNfunction_sb_cRcR::synapse0x2bfa500() {
   return (neuron0x2bdcfb0()*-0.0489015);
}

double NNfunction_sb_cRcR::synapse0x2bfa540() {
   return (neuron0x2bdd2f0()*-0.211665);
}

double NNfunction_sb_cRcR::synapse0x2bfa580() {
   return (neuron0x2bdd630()*3.50732);
}

double NNfunction_sb_cRcR::synapse0x2bfa010() {
   return (neuron0x2bdd970()*-0.328568);
}

double NNfunction_sb_cRcR::synapse0x2bfa050() {
   return (neuron0x2bdded0()*-0.0240254);
}

double NNfunction_sb_cRcR::synapse0x2bfa6d0() {
   return (neuron0x2bde0f0()*0.286853);
}

double NNfunction_sb_cRcR::synapse0x2bfa710() {
   return (neuron0x2bde430()*0.705734);
}

double NNfunction_sb_cRcR::synapse0x2bfa750() {
   return (neuron0x2bde770()*-0.0963014);
}

double NNfunction_sb_cRcR::synapse0x2bfa790() {
   return (neuron0x2bdeab0()*-0.371874);
}

double NNfunction_sb_cRcR::synapse0x2bfa7d0() {
   return (neuron0x2bdedf0()*0.0808961);
}

double NNfunction_sb_cRcR::synapse0x2bfa810() {
   return (neuron0x2bdf130()*0.0933504);
}

double NNfunction_sb_cRcR::synapse0x2bfab90() {
   return (neuron0x2bda570()*-0.0147527);
}

double NNfunction_sb_cRcR::synapse0x2bfabd0() {
   return (neuron0x2bda8b0()*0.0158133);
}

double NNfunction_sb_cRcR::synapse0x2bfac10() {
   return (neuron0x2bdabf0()*0.0119619);
}

double NNfunction_sb_cRcR::synapse0x2bfac50() {
   return (neuron0x2bdaf30()*0.00891348);
}

double NNfunction_sb_cRcR::synapse0x2bfac90() {
   return (neuron0x2bdb270()*-0.00981951);
}

double NNfunction_sb_cRcR::synapse0x2bfacd0() {
   return (neuron0x2bdb5b0()*-0.0279057);
}

double NNfunction_sb_cRcR::synapse0x2bfad10() {
   return (neuron0x2bdb8f0()*0.0239552);
}

double NNfunction_sb_cRcR::synapse0x2bfad50() {
   return (neuron0x2bdbc30()*0.0290355);
}

double NNfunction_sb_cRcR::synapse0x2bfad90() {
   return (neuron0x2bdbf70()*-0.0616249);
}

double NNfunction_sb_cRcR::synapse0x2bfadd0() {
   return (neuron0x2bdc2b0()*-0.00550626);
}

double NNfunction_sb_cRcR::synapse0x2bfae10() {
   return (neuron0x2bdc5f0()*-0.112323);
}

double NNfunction_sb_cRcR::synapse0x2bfae50() {
   return (neuron0x2bdc930()*0.66845);
}

double NNfunction_sb_cRcR::synapse0x2bfae90() {
   return (neuron0x2bdcc70()*0.537211);
}

double NNfunction_sb_cRcR::synapse0x2bfaed0() {
   return (neuron0x2bdcfb0()*0.00728325);
}

double NNfunction_sb_cRcR::synapse0x2bfaf10() {
   return (neuron0x2bdd2f0()*0.209423);
}

double NNfunction_sb_cRcR::synapse0x2bfaf50() {
   return (neuron0x2bdd630()*-0.00572205);
}

double NNfunction_sb_cRcR::synapse0x2bfa9e0() {
   return (neuron0x2bdd970()*-0.0174058);
}

double NNfunction_sb_cRcR::synapse0x2bfaa20() {
   return (neuron0x2bdded0()*0.418814);
}

double NNfunction_sb_cRcR::synapse0x2bfb0a0() {
   return (neuron0x2bde0f0()*0.296481);
}

double NNfunction_sb_cRcR::synapse0x2bfb0e0() {
   return (neuron0x2bde430()*0.00550769);
}

double NNfunction_sb_cRcR::synapse0x2bfb120() {
   return (neuron0x2bde770()*0.00335174);
}

double NNfunction_sb_cRcR::synapse0x2bfb160() {
   return (neuron0x2bdeab0()*-0.0099669);
}

double NNfunction_sb_cRcR::synapse0x2bfb1a0() {
   return (neuron0x2bdedf0()*0.0077767);
}

double NNfunction_sb_cRcR::synapse0x2bfb1e0() {
   return (neuron0x2bdf130()*0.0160383);
}

double NNfunction_sb_cRcR::synapse0x2bfb560() {
   return (neuron0x2bda570()*0.446852);
}

double NNfunction_sb_cRcR::synapse0x2bfb5a0() {
   return (neuron0x2bda8b0()*-0.328164);
}

double NNfunction_sb_cRcR::synapse0x2bfb5e0() {
   return (neuron0x2bdabf0()*-0.210665);
}

double NNfunction_sb_cRcR::synapse0x2bfb620() {
   return (neuron0x2bdaf30()*0.096209);
}

double NNfunction_sb_cRcR::synapse0x2bfb660() {
   return (neuron0x2bdb270()*0.649873);
}

double NNfunction_sb_cRcR::synapse0x2bfb6a0() {
   return (neuron0x2bdb5b0()*0.955374);
}

double NNfunction_sb_cRcR::synapse0x2bfb6e0() {
   return (neuron0x2bdb8f0()*-0.592339);
}

double NNfunction_sb_cRcR::synapse0x2bfb720() {
   return (neuron0x2bdbc30()*-0.655233);
}

double NNfunction_sb_cRcR::synapse0x2bfb760() {
   return (neuron0x2bdbf70()*0.521071);
}

double NNfunction_sb_cRcR::synapse0x2bfb7a0() {
   return (neuron0x2bdc2b0()*0.196791);
}

double NNfunction_sb_cRcR::synapse0x2bfb7e0() {
   return (neuron0x2bdc5f0()*0.096119);
}

double NNfunction_sb_cRcR::synapse0x2bfb820() {
   return (neuron0x2bdc930()*-0.772011);
}

double NNfunction_sb_cRcR::synapse0x2bfb860() {
   return (neuron0x2bdcc70()*-0.688399);
}

double NNfunction_sb_cRcR::synapse0x2bfb8a0() {
   return (neuron0x2bdcfb0()*0.244984);
}

double NNfunction_sb_cRcR::synapse0x2bfb8e0() {
   return (neuron0x2bdd2f0()*0.339473);
}

double NNfunction_sb_cRcR::synapse0x2bfb920() {
   return (neuron0x2bdd630()*2.60072);
}

double NNfunction_sb_cRcR::synapse0x2bfb3b0() {
   return (neuron0x2bdd970()*-1.03052);
}

double NNfunction_sb_cRcR::synapse0x2bfb3f0() {
   return (neuron0x2bdded0()*-0.783567);
}

double NNfunction_sb_cRcR::synapse0x2bfba70() {
   return (neuron0x2bde0f0()*-0.210276);
}

double NNfunction_sb_cRcR::synapse0x2bfbab0() {
   return (neuron0x2bde430()*0.352713);
}

double NNfunction_sb_cRcR::synapse0x2bfbaf0() {
   return (neuron0x2bde770()*-0.706964);
}

double NNfunction_sb_cRcR::synapse0x2bfbb30() {
   return (neuron0x2bdeab0()*0.0328128);
}

double NNfunction_sb_cRcR::synapse0x2bfbb70() {
   return (neuron0x2bdedf0()*0.0475519);
}

double NNfunction_sb_cRcR::synapse0x2bfbbb0() {
   return (neuron0x2bdf130()*0.48062);
}

double NNfunction_sb_cRcR::synapse0x2be4660() {
   return (neuron0x2bda570()*0.00766764);
}

double NNfunction_sb_cRcR::synapse0x2be46a0() {
   return (neuron0x2bda8b0()*0.180093);
}

double NNfunction_sb_cRcR::synapse0x2be46e0() {
   return (neuron0x2bdabf0()*-0.00693438);
}

double NNfunction_sb_cRcR::synapse0x2be4720() {
   return (neuron0x2bdaf30()*0.662789);
}

double NNfunction_sb_cRcR::synapse0x2be4760() {
   return (neuron0x2bdb270()*0.0258134);
}

double NNfunction_sb_cRcR::synapse0x2be47a0() {
   return (neuron0x2bdb5b0()*0.109837);
}

double NNfunction_sb_cRcR::synapse0x2be47e0() {
   return (neuron0x2bdb8f0()*0.102282);
}

double NNfunction_sb_cRcR::synapse0x2be4820() {
   return (neuron0x2bdbc30()*0.0843294);
}

double NNfunction_sb_cRcR::synapse0x2bfc340() {
   return (neuron0x2bdbf70()*-0.14417);
}

double NNfunction_sb_cRcR::synapse0x2bfc380() {
   return (neuron0x2bdc2b0()*-0.0242895);
}

double NNfunction_sb_cRcR::synapse0x2bfc3c0() {
   return (neuron0x2bdc5f0()*0.0834874);
}

double NNfunction_sb_cRcR::synapse0x2bfc400() {
   return (neuron0x2bdc930()*-0.150706);
}

double NNfunction_sb_cRcR::synapse0x2bfc440() {
   return (neuron0x2bdcc70()*-0.254955);
}

double NNfunction_sb_cRcR::synapse0x2bfc480() {
   return (neuron0x2bdcfb0()*0.145888);
}

double NNfunction_sb_cRcR::synapse0x2bfc4c0() {
   return (neuron0x2bdd2f0()*0.0632436);
}

double NNfunction_sb_cRcR::synapse0x2bfc500() {
   return (neuron0x2bdd630()*0.123947);
}

double NNfunction_sb_cRcR::synapse0x2bfbd80() {
   return (neuron0x2bdd970()*0.16973);
}

double NNfunction_sb_cRcR::synapse0x2bfbdc0() {
   return (neuron0x2bdded0()*0.456673);
}

double NNfunction_sb_cRcR::synapse0x2bfc650() {
   return (neuron0x2bde0f0()*-0.183638);
}

double NNfunction_sb_cRcR::synapse0x2bfc690() {
   return (neuron0x2bde430()*-0.0899853);
}

double NNfunction_sb_cRcR::synapse0x2bfc6d0() {
   return (neuron0x2bde770()*-0.0061391);
}

double NNfunction_sb_cRcR::synapse0x2bfc710() {
   return (neuron0x2bdeab0()*-0.0197665);
}

double NNfunction_sb_cRcR::synapse0x2bfc750() {
   return (neuron0x2bdedf0()*-0.0128634);
}

double NNfunction_sb_cRcR::synapse0x2bfc790() {
   return (neuron0x2bdf130()*-0.0363688);
}

double NNfunction_sb_cRcR::synapse0x2bfcb10() {
   return (neuron0x2bda570()*0.0188952);
}

double NNfunction_sb_cRcR::synapse0x2bfcb50() {
   return (neuron0x2bda8b0()*-0.354086);
}

double NNfunction_sb_cRcR::synapse0x2bfcb90() {
   return (neuron0x2bdabf0()*-0.0556174);
}

double NNfunction_sb_cRcR::synapse0x2bfcbd0() {
   return (neuron0x2bdaf30()*-2.76971);
}

double NNfunction_sb_cRcR::synapse0x2bfcc10() {
   return (neuron0x2bdb270()*-0.0109618);
}

double NNfunction_sb_cRcR::synapse0x2bfcc50() {
   return (neuron0x2bdb5b0()*-0.0310694);
}

double NNfunction_sb_cRcR::synapse0x2bfcc90() {
   return (neuron0x2bdb8f0()*0.0014986);
}

double NNfunction_sb_cRcR::synapse0x2bfccd0() {
   return (neuron0x2bdbc30()*0.0305739);
}

double NNfunction_sb_cRcR::synapse0x2bfcd10() {
   return (neuron0x2bdbf70()*0.00185885);
}

double NNfunction_sb_cRcR::synapse0x2bfcd50() {
   return (neuron0x2bdc2b0()*-0.00652986);
}

double NNfunction_sb_cRcR::synapse0x2bfcd90() {
   return (neuron0x2bdc5f0()*0.0813101);
}

double NNfunction_sb_cRcR::synapse0x2bfcdd0() {
   return (neuron0x2bdc930()*0.0268951);
}

double NNfunction_sb_cRcR::synapse0x2bfce10() {
   return (neuron0x2bdcc70()*0.0777048);
}

double NNfunction_sb_cRcR::synapse0x2bfce50() {
   return (neuron0x2bdcfb0()*-0.0370624);
}

double NNfunction_sb_cRcR::synapse0x2bfce90() {
   return (neuron0x2bdd2f0()*0.0102525);
}

double NNfunction_sb_cRcR::synapse0x2bfced0() {
   return (neuron0x2bdd630()*-0.204003);
}

double NNfunction_sb_cRcR::synapse0x2bfc960() {
   return (neuron0x2bdd970()*0.0381498);
}

double NNfunction_sb_cRcR::synapse0x2bfc9a0() {
   return (neuron0x2bdded0()*0.118248);
}

double NNfunction_sb_cRcR::synapse0x2bfd020() {
   return (neuron0x2bde0f0()*0.0697627);
}

double NNfunction_sb_cRcR::synapse0x2bfd060() {
   return (neuron0x2bde430()*0.0693798);
}

double NNfunction_sb_cRcR::synapse0x2bfd0a0() {
   return (neuron0x2bde770()*0.00530666);
}

double NNfunction_sb_cRcR::synapse0x2bfd0e0() {
   return (neuron0x2bdeab0()*-0.000463043);
}

double NNfunction_sb_cRcR::synapse0x2bfd120() {
   return (neuron0x2bdedf0()*0.0295878);
}

double NNfunction_sb_cRcR::synapse0x2bfd160() {
   return (neuron0x2bdf130()*0.0412074);
}

double NNfunction_sb_cRcR::synapse0x2bfd4e0() {
   return (neuron0x2bda570()*-0.0197207);
}

double NNfunction_sb_cRcR::synapse0x2bfd520() {
   return (neuron0x2bda8b0()*0.0320496);
}

double NNfunction_sb_cRcR::synapse0x2bfd560() {
   return (neuron0x2bdabf0()*0.0597106);
}

double NNfunction_sb_cRcR::synapse0x2bfd5a0() {
   return (neuron0x2bdaf30()*-0.410479);
}

double NNfunction_sb_cRcR::synapse0x2bfd5e0() {
   return (neuron0x2bdb270()*-0.139158);
}

double NNfunction_sb_cRcR::synapse0x2bfd620() {
   return (neuron0x2bdb5b0()*0.0424952);
}

double NNfunction_sb_cRcR::synapse0x2bfd660() {
   return (neuron0x2bdb8f0()*-0.133331);
}

double NNfunction_sb_cRcR::synapse0x2bfd6a0() {
   return (neuron0x2bdbc30()*-0.0143916);
}

double NNfunction_sb_cRcR::synapse0x2bfd6e0() {
   return (neuron0x2bdbf70()*-0.0647286);
}

double NNfunction_sb_cRcR::synapse0x2bfd720() {
   return (neuron0x2bdc2b0()*0.0844636);
}

double NNfunction_sb_cRcR::synapse0x2bfd760() {
   return (neuron0x2bdc5f0()*0.0015482);
}

double NNfunction_sb_cRcR::synapse0x2bfd7a0() {
   return (neuron0x2bdc930()*0.201632);
}

double NNfunction_sb_cRcR::synapse0x2bfd7e0() {
   return (neuron0x2bdcc70()*0.0483997);
}

double NNfunction_sb_cRcR::synapse0x2bfd820() {
   return (neuron0x2bdcfb0()*-0.0133295);
}

double NNfunction_sb_cRcR::synapse0x2bfd860() {
   return (neuron0x2bdd2f0()*-0.0487461);
}

double NNfunction_sb_cRcR::synapse0x2bfd8a0() {
   return (neuron0x2bdd630()*0.32268);
}

double NNfunction_sb_cRcR::synapse0x2bfd330() {
   return (neuron0x2bdd970()*-0.129147);
}

double NNfunction_sb_cRcR::synapse0x2bfd370() {
   return (neuron0x2bdded0()*0.152952);
}

double NNfunction_sb_cRcR::synapse0x2bedea0() {
   return (neuron0x2bde0f0()*-0.936511);
}

double NNfunction_sb_cRcR::synapse0x2bedee0() {
   return (neuron0x2bde430()*0.0690738);
}

double NNfunction_sb_cRcR::synapse0x2bedf20() {
   return (neuron0x2bde770()*0.0625867);
}

double NNfunction_sb_cRcR::synapse0x2bedf60() {
   return (neuron0x2bdeab0()*-0.0440988);
}

double NNfunction_sb_cRcR::synapse0x2bedfa0() {
   return (neuron0x2bdedf0()*-0.0138434);
}

double NNfunction_sb_cRcR::synapse0x2bedfe0() {
   return (neuron0x2bdf130()*0.0215904);
}

double NNfunction_sb_cRcR::synapse0x2bee360() {
   return (neuron0x2bda570()*-0.00483969);
}

double NNfunction_sb_cRcR::synapse0x2bee3a0() {
   return (neuron0x2bda8b0()*0.0969226);
}

double NNfunction_sb_cRcR::synapse0x2bee3e0() {
   return (neuron0x2bdabf0()*-0.0296883);
}

double NNfunction_sb_cRcR::synapse0x2bee420() {
   return (neuron0x2bdaf30()*0.185538);
}

double NNfunction_sb_cRcR::synapse0x2bee460() {
   return (neuron0x2bdb270()*0.0464547);
}

double NNfunction_sb_cRcR::synapse0x2bee4a0() {
   return (neuron0x2bdb5b0()*0.750476);
}

double NNfunction_sb_cRcR::synapse0x2bee4e0() {
   return (neuron0x2bdb8f0()*0.0817983);
}

double NNfunction_sb_cRcR::synapse0x2bee520() {
   return (neuron0x2bdbc30()*1.13035);
}

double NNfunction_sb_cRcR::synapse0x2bee560() {
   return (neuron0x2bdbf70()*0.113559);
}

double NNfunction_sb_cRcR::synapse0x2bee5a0() {
   return (neuron0x2bdc2b0()*0.123333);
}

double NNfunction_sb_cRcR::synapse0x2bee5e0() {
   return (neuron0x2bdc5f0()*-0.0367746);
}

double NNfunction_sb_cRcR::synapse0x2bee620() {
   return (neuron0x2bdc930()*0.067516);
}

double NNfunction_sb_cRcR::synapse0x2bee660() {
   return (neuron0x2bdcc70()*0.15771);
}

double NNfunction_sb_cRcR::synapse0x2bee6a0() {
   return (neuron0x2bdcfb0()*0.109771);
}

double NNfunction_sb_cRcR::synapse0x2bee6e0() {
   return (neuron0x2bdd2f0()*0.101846);
}

double NNfunction_sb_cRcR::synapse0x2bee720() {
   return (neuron0x2bdd630()*0.024258);
}

double NNfunction_sb_cRcR::synapse0x2bee1b0() {
   return (neuron0x2bdd970()*0.11093);
}

double NNfunction_sb_cRcR::synapse0x2bee1f0() {
   return (neuron0x2bdded0()*-0.00775972);
}

double NNfunction_sb_cRcR::synapse0x2bee870() {
   return (neuron0x2bde0f0()*0.0926964);
}

double NNfunction_sb_cRcR::synapse0x2bee8b0() {
   return (neuron0x2bde430()*-0.0860541);
}

double NNfunction_sb_cRcR::synapse0x2bee8f0() {
   return (neuron0x2bde770()*-0.128486);
}

double NNfunction_sb_cRcR::synapse0x2bee930() {
   return (neuron0x2bdeab0()*0.0208557);
}

double NNfunction_sb_cRcR::synapse0x2bee970() {
   return (neuron0x2bdedf0()*0.0481313);
}

double NNfunction_sb_cRcR::synapse0x2bee9b0() {
   return (neuron0x2bdf130()*-0.0145039);
}

double NNfunction_sb_cRcR::synapse0x2beed30() {
   return (neuron0x2bda570()*0.247447);
}

double NNfunction_sb_cRcR::synapse0x2beed70() {
   return (neuron0x2bda8b0()*-0.452967);
}

double NNfunction_sb_cRcR::synapse0x2beedb0() {
   return (neuron0x2bdabf0()*-0.157908);
}

double NNfunction_sb_cRcR::synapse0x2beedf0() {
   return (neuron0x2bdaf30()*0.331093);
}

double NNfunction_sb_cRcR::synapse0x2beee30() {
   return (neuron0x2bdb270()*-0.311571);
}

double NNfunction_sb_cRcR::synapse0x2beee70() {
   return (neuron0x2bdb5b0()*-0.89293);
}

double NNfunction_sb_cRcR::synapse0x2beeeb0() {
   return (neuron0x2bdb8f0()*0.246213);
}

double NNfunction_sb_cRcR::synapse0x2beeef0() {
   return (neuron0x2bdbc30()*0.304415);
}

double NNfunction_sb_cRcR::synapse0x2beef30() {
   return (neuron0x2bdbf70()*-0.881698);
}

double NNfunction_sb_cRcR::synapse0x2beef70() {
   return (neuron0x2bdc2b0()*-0.913519);
}

double NNfunction_sb_cRcR::synapse0x2beefb0() {
   return (neuron0x2bdc5f0()*0.208647);
}

double NNfunction_sb_cRcR::synapse0x2beeff0() {
   return (neuron0x2bdc930()*-0.638746);
}

double NNfunction_sb_cRcR::synapse0x2bef030() {
   return (neuron0x2bdcc70()*0.633559);
}

double NNfunction_sb_cRcR::synapse0x2bef070() {
   return (neuron0x2bdcfb0()*-0.408711);
}

double NNfunction_sb_cRcR::synapse0x2bef0b0() {
   return (neuron0x2bdd2f0()*-0.444092);
}

double NNfunction_sb_cRcR::synapse0x2bef0f0() {
   return (neuron0x2bdd630()*1.26239);
}

double NNfunction_sb_cRcR::synapse0x2beeb80() {
   return (neuron0x2bdd970()*0.607691);
}

double NNfunction_sb_cRcR::synapse0x2beebc0() {
   return (neuron0x2bdded0()*0.129654);
}

double NNfunction_sb_cRcR::synapse0x2bef240() {
   return (neuron0x2bde0f0()*-0.0166442);
}

double NNfunction_sb_cRcR::synapse0x2bef280() {
   return (neuron0x2bde430()*-0.467396);
}

double NNfunction_sb_cRcR::synapse0x2bef2c0() {
   return (neuron0x2bde770()*0.142865);
}

double NNfunction_sb_cRcR::synapse0x2bef300() {
   return (neuron0x2bdeab0()*0.528485);
}

double NNfunction_sb_cRcR::synapse0x2bef340() {
   return (neuron0x2bdedf0()*-0.057677);
}

double NNfunction_sb_cRcR::synapse0x2bef380() {
   return (neuron0x2bdf130()*0.615946);
}

double NNfunction_sb_cRcR::synapse0x2bef700() {
   return (neuron0x2bda570()*-0.486789);
}

double NNfunction_sb_cRcR::synapse0x2bef740() {
   return (neuron0x2bda8b0()*-0.169813);
}

double NNfunction_sb_cRcR::synapse0x2bef780() {
   return (neuron0x2bdabf0()*0.517433);
}

double NNfunction_sb_cRcR::synapse0x2bef7c0() {
   return (neuron0x2bdaf30()*0.618707);
}

double NNfunction_sb_cRcR::synapse0x2bef800() {
   return (neuron0x2bdb270()*-0.0926551);
}

double NNfunction_sb_cRcR::synapse0x2bef840() {
   return (neuron0x2bdb5b0()*-0.642034);
}

double NNfunction_sb_cRcR::synapse0x2bef880() {
   return (neuron0x2bdb8f0()*0.151844);
}

double NNfunction_sb_cRcR::synapse0x2bef8c0() {
   return (neuron0x2bdbc30()*0.15776);
}

double NNfunction_sb_cRcR::synapse0x2bef900() {
   return (neuron0x2bdbf70()*-0.0693373);
}

double NNfunction_sb_cRcR::synapse0x2bef940() {
   return (neuron0x2bdc2b0()*0.744819);
}

double NNfunction_sb_cRcR::synapse0x2bef980() {
   return (neuron0x2bdc5f0()*0.781092);
}

double NNfunction_sb_cRcR::synapse0x2bef9c0() {
   return (neuron0x2bdc930()*-0.864555);
}

double NNfunction_sb_cRcR::synapse0x2befa00() {
   return (neuron0x2bdcc70()*-0.310313);
}

double NNfunction_sb_cRcR::synapse0x2befa40() {
   return (neuron0x2bdcfb0()*-0.296933);
}

double NNfunction_sb_cRcR::synapse0x2befa80() {
   return (neuron0x2bdd2f0()*-0.129978);
}

double NNfunction_sb_cRcR::synapse0x2befac0() {
   return (neuron0x2bdd630()*-1.33049);
}

double NNfunction_sb_cRcR::synapse0x2bef550() {
   return (neuron0x2bdd970()*0.631884);
}

double NNfunction_sb_cRcR::synapse0x2bef590() {
   return (neuron0x2bdded0()*0.994368);
}

double NNfunction_sb_cRcR::synapse0x2befc10() {
   return (neuron0x2bde0f0()*-0.581358);
}

double NNfunction_sb_cRcR::synapse0x2befc50() {
   return (neuron0x2bde430()*-0.0186929);
}

double NNfunction_sb_cRcR::synapse0x2befc90() {
   return (neuron0x2bde770()*-0.176283);
}

double NNfunction_sb_cRcR::synapse0x2befcd0() {
   return (neuron0x2bdeab0()*0.183781);
}

double NNfunction_sb_cRcR::synapse0x2befd10() {
   return (neuron0x2bdedf0()*-0.206049);
}

double NNfunction_sb_cRcR::synapse0x2befd50() {
   return (neuron0x2bdf130()*0.287121);
}

double NNfunction_sb_cRcR::synapse0x2c01c20() {
   return (neuron0x2bda570()*-0.0880563);
}

double NNfunction_sb_cRcR::synapse0x2c01c60() {
   return (neuron0x2bda8b0()*-0.558318);
}

double NNfunction_sb_cRcR::synapse0x2c01ca0() {
   return (neuron0x2bdabf0()*0.082725);
}

double NNfunction_sb_cRcR::synapse0x2c01ce0() {
   return (neuron0x2bdaf30()*-0.833635);
}

double NNfunction_sb_cRcR::synapse0x2c01d20() {
   return (neuron0x2bdb270()*-0.131183);
}

double NNfunction_sb_cRcR::synapse0x2c01d60() {
   return (neuron0x2bdb5b0()*-0.082947);
}

double NNfunction_sb_cRcR::synapse0x2c01da0() {
   return (neuron0x2bdb8f0()*0.0182774);
}

double NNfunction_sb_cRcR::synapse0x2c01de0() {
   return (neuron0x2bdbc30()*-0.10804);
}

double NNfunction_sb_cRcR::synapse0x2c01e20() {
   return (neuron0x2bdbf70()*-0.193235);
}

double NNfunction_sb_cRcR::synapse0x2c01e60() {
   return (neuron0x2bdc2b0()*-0.281069);
}

double NNfunction_sb_cRcR::synapse0x2c01ea0() {
   return (neuron0x2bdc5f0()*0.324215);
}

double NNfunction_sb_cRcR::synapse0x2c01ee0() {
   return (neuron0x2bdc930()*-0.504866);
}

double NNfunction_sb_cRcR::synapse0x2c01f20() {
   return (neuron0x2bdcc70()*-0.140498);
}

double NNfunction_sb_cRcR::synapse0x2c01f60() {
   return (neuron0x2bdcfb0()*0.400641);
}

double NNfunction_sb_cRcR::synapse0x2c01fa0() {
   return (neuron0x2bdd2f0()*0.0706478);
}

double NNfunction_sb_cRcR::synapse0x2c01fe0() {
   return (neuron0x2bdd630()*-0.159606);
}

double NNfunction_sb_cRcR::synapse0x2befd90() {
   return (neuron0x2bdd970()*0.159883);
}

double NNfunction_sb_cRcR::synapse0x2befdd0() {
   return (neuron0x2bdded0()*0.143838);
}

double NNfunction_sb_cRcR::synapse0x2c02130() {
   return (neuron0x2bde0f0()*-0.0299268);
}

double NNfunction_sb_cRcR::synapse0x2c02170() {
   return (neuron0x2bde430()*0.0535816);
}

double NNfunction_sb_cRcR::synapse0x2c021b0() {
   return (neuron0x2bde770()*0.0695733);
}

double NNfunction_sb_cRcR::synapse0x2c021f0() {
   return (neuron0x2bdeab0()*-0.0947937);
}

double NNfunction_sb_cRcR::synapse0x2c02230() {
   return (neuron0x2bdedf0()*-0.0919715);
}

double NNfunction_sb_cRcR::synapse0x2c02270() {
   return (neuron0x2bdf130()*-0.0869676);
}

double NNfunction_sb_cRcR::synapse0x2c025f0() {
   return (neuron0x2bda570()*-0.550332);
}

double NNfunction_sb_cRcR::synapse0x2c02630() {
   return (neuron0x2bda8b0()*0.19793);
}

double NNfunction_sb_cRcR::synapse0x2c02670() {
   return (neuron0x2bdabf0()*0.0779986);
}

double NNfunction_sb_cRcR::synapse0x2c026b0() {
   return (neuron0x2bdaf30()*-1.36177);
}

double NNfunction_sb_cRcR::synapse0x2c026f0() {
   return (neuron0x2bdb270()*-0.395575);
}

double NNfunction_sb_cRcR::synapse0x2c02730() {
   return (neuron0x2bdb5b0()*0.634419);
}

double NNfunction_sb_cRcR::synapse0x2c02770() {
   return (neuron0x2bdb8f0()*-0.306928);
}

double NNfunction_sb_cRcR::synapse0x2c027b0() {
   return (neuron0x2bdbc30()*0.741121);
}

double NNfunction_sb_cRcR::synapse0x2c027f0() {
   return (neuron0x2bdbf70()*0.315723);
}

double NNfunction_sb_cRcR::synapse0x2c02830() {
   return (neuron0x2bdc2b0()*-0.0343);
}

double NNfunction_sb_cRcR::synapse0x2c02870() {
   return (neuron0x2bdc5f0()*0.0665525);
}

double NNfunction_sb_cRcR::synapse0x2c028b0() {
   return (neuron0x2bdc930()*-0.110752);
}

double NNfunction_sb_cRcR::synapse0x2c028f0() {
   return (neuron0x2bdcc70()*0.083632);
}

double NNfunction_sb_cRcR::synapse0x2c02930() {
   return (neuron0x2bdcfb0()*-0.247657);
}

double NNfunction_sb_cRcR::synapse0x2c02970() {
   return (neuron0x2bdd2f0()*0.244239);
}

double NNfunction_sb_cRcR::synapse0x2c029b0() {
   return (neuron0x2bdd630()*-0.624573);
}

double NNfunction_sb_cRcR::synapse0x2c02440() {
   return (neuron0x2bdd970()*-0.253377);
}

double NNfunction_sb_cRcR::synapse0x2c02480() {
   return (neuron0x2bdded0()*0.212165);
}

double NNfunction_sb_cRcR::synapse0x2c02b00() {
   return (neuron0x2bde0f0()*-0.44232);
}

double NNfunction_sb_cRcR::synapse0x2c02b40() {
   return (neuron0x2bde430()*0.0190316);
}

double NNfunction_sb_cRcR::synapse0x2c02b80() {
   return (neuron0x2bde770()*-0.315839);
}

double NNfunction_sb_cRcR::synapse0x2c02bc0() {
   return (neuron0x2bdeab0()*-0.275327);
}

double NNfunction_sb_cRcR::synapse0x2c02c00() {
   return (neuron0x2bdedf0()*0.0175046);
}

double NNfunction_sb_cRcR::synapse0x2c02c40() {
   return (neuron0x2bdf130()*0.142088);
}

double NNfunction_sb_cRcR::synapse0x2c02fc0() {
   return (neuron0x2bda570()*0.0333234);
}

double NNfunction_sb_cRcR::synapse0x2c03000() {
   return (neuron0x2bda8b0()*-0.0843721);
}

double NNfunction_sb_cRcR::synapse0x2c03040() {
   return (neuron0x2bdabf0()*-0.015612);
}

double NNfunction_sb_cRcR::synapse0x2c03080() {
   return (neuron0x2bdaf30()*0.129654);
}

double NNfunction_sb_cRcR::synapse0x2c030c0() {
   return (neuron0x2bdb270()*-0.0788477);
}

double NNfunction_sb_cRcR::synapse0x2c03100() {
   return (neuron0x2bdb5b0()*0.0756258);
}

double NNfunction_sb_cRcR::synapse0x2c03140() {
   return (neuron0x2bdb8f0()*0.0192912);
}

double NNfunction_sb_cRcR::synapse0x2c03180() {
   return (neuron0x2bdbc30()*-0.0240484);
}

double NNfunction_sb_cRcR::synapse0x2c031c0() {
   return (neuron0x2bdbf70()*-0.0596924);
}

double NNfunction_sb_cRcR::synapse0x2c03200() {
   return (neuron0x2bdc2b0()*0.0215659);
}

double NNfunction_sb_cRcR::synapse0x2c03240() {
   return (neuron0x2bdc5f0()*0.594784);
}

double NNfunction_sb_cRcR::synapse0x2c03280() {
   return (neuron0x2bdc930()*-0.249103);
}

double NNfunction_sb_cRcR::synapse0x2c032c0() {
   return (neuron0x2bdcc70()*0.774061);
}

double NNfunction_sb_cRcR::synapse0x2c03300() {
   return (neuron0x2bdcfb0()*-0.0570238);
}

double NNfunction_sb_cRcR::synapse0x2c03340() {
   return (neuron0x2bdd2f0()*-0.0164072);
}

double NNfunction_sb_cRcR::synapse0x2c03380() {
   return (neuron0x2bdd630()*-0.529245);
}

double NNfunction_sb_cRcR::synapse0x2c02e10() {
   return (neuron0x2bdd970()*0.0119664);
}

double NNfunction_sb_cRcR::synapse0x2c02e50() {
   return (neuron0x2bdded0()*-0.144341);
}

double NNfunction_sb_cRcR::synapse0x2c034d0() {
   return (neuron0x2bde0f0()*-0.119407);
}

double NNfunction_sb_cRcR::synapse0x2c03510() {
   return (neuron0x2bde430()*-0.0392345);
}

double NNfunction_sb_cRcR::synapse0x2c03550() {
   return (neuron0x2bde770()*-0.0523376);
}

double NNfunction_sb_cRcR::synapse0x2c03590() {
   return (neuron0x2bdeab0()*0.0303607);
}

double NNfunction_sb_cRcR::synapse0x2c035d0() {
   return (neuron0x2bdedf0()*0.0331282);
}

double NNfunction_sb_cRcR::synapse0x2c03610() {
   return (neuron0x2bdf130()*-0.0561487);
}

double NNfunction_sb_cRcR::synapse0x2c03990() {
   return (neuron0x2bda570()*0.089131);
}

double NNfunction_sb_cRcR::synapse0x2c039d0() {
   return (neuron0x2bda8b0()*-0.0599437);
}

double NNfunction_sb_cRcR::synapse0x2c03a10() {
   return (neuron0x2bdabf0()*-0.188337);
}

double NNfunction_sb_cRcR::synapse0x2c03a50() {
   return (neuron0x2bdaf30()*-1.16822);
}

double NNfunction_sb_cRcR::synapse0x2c03a90() {
   return (neuron0x2bdb270()*0.113438);
}

double NNfunction_sb_cRcR::synapse0x2c03ad0() {
   return (neuron0x2bdb5b0()*0.226459);
}

double NNfunction_sb_cRcR::synapse0x2c03b10() {
   return (neuron0x2bdb8f0()*-0.0883933);
}

double NNfunction_sb_cRcR::synapse0x2c03b50() {
   return (neuron0x2bdbc30()*-0.952106);
}

double NNfunction_sb_cRcR::synapse0x2c03b90() {
   return (neuron0x2bdbf70()*0.620256);
}

double NNfunction_sb_cRcR::synapse0x2c03bd0() {
   return (neuron0x2bdc2b0()*0.0244023);
}

double NNfunction_sb_cRcR::synapse0x2c03c10() {
   return (neuron0x2bdc5f0()*-0.204858);
}

double NNfunction_sb_cRcR::synapse0x2c03c50() {
   return (neuron0x2bdc930()*0.916865);
}

double NNfunction_sb_cRcR::synapse0x2c03c90() {
   return (neuron0x2bdcc70()*0.124291);
}

double NNfunction_sb_cRcR::synapse0x2c03cd0() {
   return (neuron0x2bdcfb0()*0.569361);
}

double NNfunction_sb_cRcR::synapse0x2c03d10() {
   return (neuron0x2bdd2f0()*0.12641);
}

double NNfunction_sb_cRcR::synapse0x2c03d50() {
   return (neuron0x2bdd630()*-1.99782);
}

double NNfunction_sb_cRcR::synapse0x2c037e0() {
   return (neuron0x2bdd970()*-0.0885573);
}

double NNfunction_sb_cRcR::synapse0x2c03820() {
   return (neuron0x2bdded0()*0.183396);
}

double NNfunction_sb_cRcR::synapse0x2c03ea0() {
   return (neuron0x2bde0f0()*-0.0379525);
}

double NNfunction_sb_cRcR::synapse0x2c03ee0() {
   return (neuron0x2bde430()*0.737503);
}

double NNfunction_sb_cRcR::synapse0x2c03f20() {
   return (neuron0x2bde770()*-0.178972);
}

double NNfunction_sb_cRcR::synapse0x2c03f60() {
   return (neuron0x2bdeab0()*-0.508787);
}

double NNfunction_sb_cRcR::synapse0x2c03fa0() {
   return (neuron0x2bdedf0()*0.628792);
}

double NNfunction_sb_cRcR::synapse0x2c03fe0() {
   return (neuron0x2bdf130()*-0.574782);
}

double NNfunction_sb_cRcR::synapse0x2be0580() {
   return (neuron0x2bdf5d0()*-2.58669);
}

double NNfunction_sb_cRcR::synapse0x2be05c0() {
   return (neuron0x2bdfee0()*0.516751);
}

double NNfunction_sb_cRcR::synapse0x2be1a90() {
   return (neuron0x2be09c0()*-2.77198);
}

double NNfunction_sb_cRcR::synapse0x2be1ad0() {
   return (neuron0x299a250()*-0.226657);
}

double NNfunction_sb_cRcR::synapse0x2be2460() {
   return (neuron0x2be17e0()*-2.3976);
}

double NNfunction_sb_cRcR::synapse0x2be24a0() {
   return (neuron0x2be21b0()*2.00877);
}

double NNfunction_sb_cRcR::synapse0x2be3230() {
   return (neuron0x2be2f80()*2.07296);
}

double NNfunction_sb_cRcR::synapse0x2be3270() {
   return (neuron0x2be3950()*3.03982);
}

double NNfunction_sb_cRcR::synapse0x2be3c00() {
   return (neuron0x2be4320()*-2.29794);
}

double NNfunction_sb_cRcR::synapse0x2be3c40() {
   return (neuron0x2be4e00()*-4.17022);
}

double NNfunction_sb_cRcR::synapse0x2be45d0() {
   return (neuron0x2be57d0()*-2.61091);
}

double NNfunction_sb_cRcR::synapse0x2be4610() {
   return (neuron0x2be28b0()*-1.77722);
}

double NNfunction_sb_cRcR::synapse0x2be50b0() {
   return (neuron0x2be7380()*5.77461);
}

double NNfunction_sb_cRcR::synapse0x2be50f0() {
   return (neuron0x2be7d50()*1.82038);
}

double NNfunction_sb_cRcR::synapse0x2be5a80() {
   return (neuron0x2be8720()*2.70586);
}

double NNfunction_sb_cRcR::synapse0x2be5ac0() {
   return (neuron0x2be90f0()*-2.96506);
}

double NNfunction_sb_cRcR::synapse0x2be2b60() {
   return (neuron0x2beaf00()*1.80131);
}

double NNfunction_sb_cRcR::synapse0x2be2ba0() {
   return (neuron0x2beb1e0()*-6.26896);
}

double NNfunction_sb_cRcR::synapse0x2be7630() {
   return (neuron0x2bebbb0()*-9.29023);
}

double NNfunction_sb_cRcR::synapse0x2be7670() {
   return (neuron0x2bec580()*-2.34547);
}

double NNfunction_sb_cRcR::synapse0x2be8000() {
   return (neuron0x2becf50()*1.73553);
}

double NNfunction_sb_cRcR::synapse0x2be8040() {
   return (neuron0x2bed920()*1.71013);
}

double NNfunction_sb_cRcR::synapse0x2be89d0() {
   return (neuron0x2be6470()*1.46578);
}

double NNfunction_sb_cRcR::synapse0x2be8a10() {
   return (neuron0x2be6e40()*3.66574);
}

double NNfunction_sb_cRcR::synapse0x2be93a0() {
   return (neuron0x2bf06b0()*-6.16262);
}

double NNfunction_sb_cRcR::synapse0x2be93e0() {
   return (neuron0x2bf1080()*2.69923);
}

double NNfunction_sb_cRcR::synapse0x2bdd510() {
   return (neuron0x2bf1a50()*4.30326);
}

double NNfunction_sb_cRcR::synapse0x2bdd550() {
   return (neuron0x2bf2420()*0.472922);
}

double NNfunction_sb_cRcR::synapse0x2beb490() {
   return (neuron0x2bf2df0()*0.371401);
}

double NNfunction_sb_cRcR::synapse0x2beb4d0() {
   return (neuron0x2bf37c0()*-2.51156);
}

double NNfunction_sb_cRcR::synapse0x2bebe60() {
   return (neuron0x2bf4190()*-0.0906752);
}

double NNfunction_sb_cRcR::synapse0x2bebea0() {
   return (neuron0x2bf4b60()*-2.75089);
}

double NNfunction_sb_cRcR::synapse0x2bec830() {
   return (neuron0x2beabf0()*-2.75015);
}

double NNfunction_sb_cRcR::synapse0x2bec870() {
   return (neuron0x2bf7740()*3.66371);
}

double NNfunction_sb_cRcR::synapse0x2bed200() {
   return (neuron0x2bf8110()*-0.431548);
}

double NNfunction_sb_cRcR::synapse0x2bed240() {
   return (neuron0x2bf8ae0()*-2.90327);
}

double NNfunction_sb_cRcR::synapse0x2bedbd0() {
   return (neuron0x2bf94b0()*1.36766);
}

double NNfunction_sb_cRcR::synapse0x2bedc10() {
   return (neuron0x2bf9e80()*-2.10072);
}

double NNfunction_sb_cRcR::synapse0x2be6720() {
   return (neuron0x2bfa850()*-1.50116);
}

double NNfunction_sb_cRcR::synapse0x2be6760() {
   return (neuron0x2bfb220()*-1.31477);
}

double NNfunction_sb_cRcR::synapse0x2beffd0() {
   return (neuron0x2bfbbf0()*-3.81243);
}

double NNfunction_sb_cRcR::synapse0x2bf0010() {
   return (neuron0x2bfc7d0()*5.66946);
}

double NNfunction_sb_cRcR::synapse0x2bf0960() {
   return (neuron0x2bfd1a0()*3.79791);
}

double NNfunction_sb_cRcR::synapse0x2bf09a0() {
   return (neuron0x2bee020()*2.05714);
}

double NNfunction_sb_cRcR::synapse0x2bf1330() {
   return (neuron0x2bee9f0()*2.38737);
}

double NNfunction_sb_cRcR::synapse0x2bf1370() {
   return (neuron0x2bef3c0()*-1.86193);
}

double NNfunction_sb_cRcR::synapse0x2bf1d00() {
   return (neuron0x2c01a00()*-2.66016);
}

double NNfunction_sb_cRcR::synapse0x2bf1d40() {
   return (neuron0x2c022b0()*2.05217);
}

double NNfunction_sb_cRcR::synapse0x2bf26d0() {
   return (neuron0x2c02c80()*-2.9535);
}

double NNfunction_sb_cRcR::synapse0x2bf2710() {
   return (neuron0x2c03650()*2.64793);
}

double NNfunction_sb_cRcR::synapse0x2bf4e10() {
   return (neuron0x2bdf5d0()*-0.00544207);
}

double NNfunction_sb_cRcR::synapse0x2bf4e50() {
   return (neuron0x2bdfee0()*-0.0975083);
}

double NNfunction_sb_cRcR::synapse0x2bea3d0() {
   return (neuron0x2be09c0()*0.300088);
}

double NNfunction_sb_cRcR::synapse0x2bea410() {
   return (neuron0x299a250()*-0.206079);
}

double NNfunction_sb_cRcR::synapse0x2bf79f0() {
   return (neuron0x2be17e0()*0.192885);
}

double NNfunction_sb_cRcR::synapse0x2bf7a30() {
   return (neuron0x2be21b0()*-0.58261);
}

double NNfunction_sb_cRcR::synapse0x2bf83c0() {
   return (neuron0x2be2f80()*-0.0666868);
}

double NNfunction_sb_cRcR::synapse0x2bf8400() {
   return (neuron0x2be3950()*-0.0631127);
}

double NNfunction_sb_cRcR::synapse0x2bf8d90() {
   return (neuron0x2be4320()*0.462401);
}

double NNfunction_sb_cRcR::synapse0x2bf8dd0() {
   return (neuron0x2be4e00()*-0.297133);
}

double NNfunction_sb_cRcR::synapse0x2bf9760() {
   return (neuron0x2be57d0()*0.353854);
}

double NNfunction_sb_cRcR::synapse0x2bf97a0() {
   return (neuron0x2be28b0()*0.111433);
}

double NNfunction_sb_cRcR::synapse0x2bfa130() {
   return (neuron0x2be7380()*-0.124885);
}

double NNfunction_sb_cRcR::synapse0x2bfa170() {
   return (neuron0x2be7d50()*-0.512024);
}

double NNfunction_sb_cRcR::synapse0x2bfab00() {
   return (neuron0x2be8720()*-0.162303);
}

double NNfunction_sb_cRcR::synapse0x2bfab40() {
   return (neuron0x2be90f0()*0.167308);
}

double NNfunction_sb_cRcR::synapse0x2bfb4d0() {
   return (neuron0x2beaf00()*-0.281414);
}

double NNfunction_sb_cRcR::synapse0x2bfb510() {
   return (neuron0x2beb1e0()*0.318072);
}

double NNfunction_sb_cRcR::synapse0x2bfbea0() {
   return (neuron0x2bebbb0()*1.48951);
}

double NNfunction_sb_cRcR::synapse0x2bfbee0() {
   return (neuron0x2bec580()*-0.0466518);
}

double NNfunction_sb_cRcR::synapse0x2bfca80() {
   return (neuron0x2becf50()*-0.870412);
}

double NNfunction_sb_cRcR::synapse0x2bfcac0() {
   return (neuron0x2bed920()*-0.0702834);
}

double NNfunction_sb_cRcR::synapse0x2bfd450() {
   return (neuron0x2be6470()*-0.246324);
}

double NNfunction_sb_cRcR::synapse0x2bfd490() {
   return (neuron0x2be6e40()*-0.0883883);
}

double NNfunction_sb_cRcR::synapse0x2bee2d0() {
   return (neuron0x2bf06b0()*0.773095);
}

double NNfunction_sb_cRcR::synapse0x2bee310() {
   return (neuron0x2bf1080()*-0.269096);
}

double NNfunction_sb_cRcR::synapse0x2beeca0() {
   return (neuron0x2bf1a50()*-0.693281);
}

double NNfunction_sb_cRcR::synapse0x2beece0() {
   return (neuron0x2bf2420()*-0.288262);
}

double NNfunction_sb_cRcR::synapse0x2bef670() {
   return (neuron0x2bf2df0()*0.138604);
}

double NNfunction_sb_cRcR::synapse0x2bef6b0() {
   return (neuron0x2bf37c0()*0.0044305);
}

double NNfunction_sb_cRcR::synapse0x2c01b90() {
   return (neuron0x2bf4190()*-1.93202);
}

double NNfunction_sb_cRcR::synapse0x2c01bd0() {
   return (neuron0x2bf4b60()*0.58991);
}

double NNfunction_sb_cRcR::synapse0x2c02560() {
   return (neuron0x2beabf0()*0.144298);
}

double NNfunction_sb_cRcR::synapse0x2c025a0() {
   return (neuron0x2bf7740()*-0.177539);
}

double NNfunction_sb_cRcR::synapse0x2c02f30() {
   return (neuron0x2bf8110()*0.12551);
}

double NNfunction_sb_cRcR::synapse0x2c02f70() {
   return (neuron0x2bf8ae0()*0.0914264);
}

double NNfunction_sb_cRcR::synapse0x2c03900() {
   return (neuron0x2bf94b0()*0.113685);
}

double NNfunction_sb_cRcR::synapse0x2c03940() {
   return (neuron0x2bf9e80()*0.114108);
}

double NNfunction_sb_cRcR::synapse0x2bdf7f0() {
   return (neuron0x2bfa850()*1.52736);
}

double NNfunction_sb_cRcR::synapse0x2bdf830() {
   return (neuron0x2bfb220()*0.207295);
}

double NNfunction_sb_cRcR::synapse0x2bf30a0() {
   return (neuron0x2bfbbf0()*0.737117);
}

double NNfunction_sb_cRcR::synapse0x2bf30e0() {
   return (neuron0x2bfc7d0()*-1.06113);
}

double NNfunction_sb_cRcR::synapse0x2c04020() {
   return (neuron0x2bfd1a0()*-0.0120053);
}

double NNfunction_sb_cRcR::synapse0x2c04060() {
   return (neuron0x2bee020()*-0.253911);
}

double NNfunction_sb_cRcR::synapse0x2c040a0() {
   return (neuron0x2bee9f0()*0.0348283);
}

double NNfunction_sb_cRcR::synapse0x2c040e0() {
   return (neuron0x2bef3c0()*-0.0439332);
}

double NNfunction_sb_cRcR::synapse0x2c0af90() {
   return (neuron0x2c01a00()*0.0281372);
}

double NNfunction_sb_cRcR::synapse0x2c0afd0() {
   return (neuron0x2c022b0()*-0.192017);
}

double NNfunction_sb_cRcR::synapse0x2c0b010() {
   return (neuron0x2c02c80()*0.500086);
}

double NNfunction_sb_cRcR::synapse0x2c0b050() {
   return (neuron0x2c03650()*-0.35007);
}

double NNfunction_sb_cRcR::synapse0x2c0b3d0() {
   return (neuron0x2bdf5d0()*2.7997);
}

double NNfunction_sb_cRcR::synapse0x2c0b410() {
   return (neuron0x2bdfee0()*0.118777);
}

double NNfunction_sb_cRcR::synapse0x2c0b450() {
   return (neuron0x2be09c0()*0.552942);
}

double NNfunction_sb_cRcR::synapse0x2c0b490() {
   return (neuron0x299a250()*0.499074);
}

double NNfunction_sb_cRcR::synapse0x2c0b4d0() {
   return (neuron0x2be17e0()*0.677963);
}

double NNfunction_sb_cRcR::synapse0x2c0b510() {
   return (neuron0x2be21b0()*-1.83179);
}

double NNfunction_sb_cRcR::synapse0x2c0b550() {
   return (neuron0x2be2f80()*0.0958931);
}

double NNfunction_sb_cRcR::synapse0x2c0b590() {
   return (neuron0x2be3950()*-0.534549);
}

double NNfunction_sb_cRcR::synapse0x2c0b5d0() {
   return (neuron0x2be4320()*1.27051);
}

double NNfunction_sb_cRcR::synapse0x2c0b610() {
   return (neuron0x2be4e00()*1.20483);
}

double NNfunction_sb_cRcR::synapse0x2c0b650() {
   return (neuron0x2be57d0()*0.415542);
}

double NNfunction_sb_cRcR::synapse0x2c0b690() {
   return (neuron0x2be28b0()*1.33209);
}

double NNfunction_sb_cRcR::synapse0x2c0b6d0() {
   return (neuron0x2be7380()*-1.21557);
}

double NNfunction_sb_cRcR::synapse0x2c0b710() {
   return (neuron0x2be7d50()*-2.58534);
}

double NNfunction_sb_cRcR::synapse0x2c0b750() {
   return (neuron0x2be8720()*0.207056);
}

double NNfunction_sb_cRcR::synapse0x2c0b790() {
   return (neuron0x2be90f0()*-0.240422);
}

double NNfunction_sb_cRcR::synapse0x2c0b220() {
   return (neuron0x2beaf00()*0.212133);
}

double NNfunction_sb_cRcR::synapse0x2c0b260() {
   return (neuron0x2beb1e0()*2.1807);
}

double NNfunction_sb_cRcR::synapse0x2c0b8e0() {
   return (neuron0x2bebbb0()*2.76986);
}

double NNfunction_sb_cRcR::synapse0x2c0b920() {
   return (neuron0x2bec580()*0.81048);
}

double NNfunction_sb_cRcR::synapse0x2c0b960() {
   return (neuron0x2becf50()*-2.6172);
}

double NNfunction_sb_cRcR::synapse0x2c0b9a0() {
   return (neuron0x2bed920()*0.18113);
}

double NNfunction_sb_cRcR::synapse0x2c0b9e0() {
   return (neuron0x2be6470()*0.170693);
}

double NNfunction_sb_cRcR::synapse0x2c0ba20() {
   return (neuron0x2be6e40()*-1.15427);
}

double NNfunction_sb_cRcR::synapse0x2c0ba60() {
   return (neuron0x2bf06b0()*1.41102);
}

double NNfunction_sb_cRcR::synapse0x2c0baa0() {
   return (neuron0x2bf1080()*-1.08144);
}

double NNfunction_sb_cRcR::synapse0x2c0bae0() {
   return (neuron0x2bf1a50()*-0.950322);
}

double NNfunction_sb_cRcR::synapse0x2c0bb20() {
   return (neuron0x2bf2420()*-1.69653);
}

double NNfunction_sb_cRcR::synapse0x2c0bb60() {
   return (neuron0x2bf2df0()*-0.694194);
}

double NNfunction_sb_cRcR::synapse0x2c0bba0() {
   return (neuron0x2bf37c0()*0.117543);
}

double NNfunction_sb_cRcR::synapse0x2c0bbe0() {
   return (neuron0x2bf4190()*-4.37354);
}

double NNfunction_sb_cRcR::synapse0x2c0bc20() {
   return (neuron0x2bf4b60()*1.58479);
}

double NNfunction_sb_cRcR::synapse0x2c0b7d0() {
   return (neuron0x2beabf0()*-0.223816);
}

double NNfunction_sb_cRcR::synapse0x2c0b810() {
   return (neuron0x2bf7740()*-0.0984962);
}

double NNfunction_sb_cRcR::synapse0x2c0b850() {
   return (neuron0x2bf8110()*-0.551131);
}

double NNfunction_sb_cRcR::synapse0x2c0b890() {
   return (neuron0x2bf8ae0()*-0.119604);
}

double NNfunction_sb_cRcR::synapse0x2c0be70() {
   return (neuron0x2bf94b0()*-0.13224);
}

double NNfunction_sb_cRcR::synapse0x2c0beb0() {
   return (neuron0x2bf9e80()*-0.162035);
}

double NNfunction_sb_cRcR::synapse0x2c0bef0() {
   return (neuron0x2bfa850()*1.76095);
}

double NNfunction_sb_cRcR::synapse0x2c0bf30() {
   return (neuron0x2bfb220()*-0.0597119);
}

double NNfunction_sb_cRcR::synapse0x2c0bf70() {
   return (neuron0x2bfbbf0()*2.54111);
}

double NNfunction_sb_cRcR::synapse0x2c0bfb0() {
   return (neuron0x2bfc7d0()*-3.0768);
}

double NNfunction_sb_cRcR::synapse0x2c0bff0() {
   return (neuron0x2bfd1a0()*-1.73651);
}

double NNfunction_sb_cRcR::synapse0x2c0c030() {
   return (neuron0x2bee020()*-0.872798);
}

double NNfunction_sb_cRcR::synapse0x2c0c070() {
   return (neuron0x2bee9f0()*0.0117607);
}

double NNfunction_sb_cRcR::synapse0x2c0c0b0() {
   return (neuron0x2bef3c0()*0.00293745);
}

double NNfunction_sb_cRcR::synapse0x2c0c0f0() {
   return (neuron0x2c01a00()*1.07949);
}

double NNfunction_sb_cRcR::synapse0x2c0c130() {
   return (neuron0x2c022b0()*0.128107);
}

double NNfunction_sb_cRcR::synapse0x2c0c170() {
   return (neuron0x2c02c80()*1.01575);
}

double NNfunction_sb_cRcR::synapse0x2c0c1b0() {
   return (neuron0x2c03650()*0.350776);
}

double NNfunction_sb_cRcR::synapse0x2c0c530() {
   return (neuron0x2bdf5d0()*-0.0231683);
}

double NNfunction_sb_cRcR::synapse0x2c0c570() {
   return (neuron0x2bdfee0()*-0.00249);
}

double NNfunction_sb_cRcR::synapse0x2c0c5b0() {
   return (neuron0x2be09c0()*-0.00677519);
}

double NNfunction_sb_cRcR::synapse0x2c0c5f0() {
   return (neuron0x299a250()*-0.022896);
}

double NNfunction_sb_cRcR::synapse0x2c0c630() {
   return (neuron0x2be17e0()*0.0333005);
}

double NNfunction_sb_cRcR::synapse0x2c0c670() {
   return (neuron0x2be21b0()*-0.039248);
}

double NNfunction_sb_cRcR::synapse0x2c0c6b0() {
   return (neuron0x2be2f80()*-0.00857809);
}

double NNfunction_sb_cRcR::synapse0x2c0c6f0() {
   return (neuron0x2be3950()*0.000321508);
}

double NNfunction_sb_cRcR::synapse0x2c0c730() {
   return (neuron0x2be4320()*-1.20666);
}

double NNfunction_sb_cRcR::synapse0x2c0c770() {
   return (neuron0x2be4e00()*-0.0528981);
}

double NNfunction_sb_cRcR::synapse0x2c0c7b0() {
   return (neuron0x2be57d0()*0.0564999);
}

double NNfunction_sb_cRcR::synapse0x2c0c7f0() {
   return (neuron0x2be28b0()*-0.0067302);
}

double NNfunction_sb_cRcR::synapse0x2c0c830() {
   return (neuron0x2be7380()*0.0186562);
}

double NNfunction_sb_cRcR::synapse0x2c0c870() {
   return (neuron0x2be7d50()*0.0339953);
}

double NNfunction_sb_cRcR::synapse0x2c0c8b0() {
   return (neuron0x2be8720()*-0.00818153);
}

double NNfunction_sb_cRcR::synapse0x2c0c8f0() {
   return (neuron0x2be90f0()*0.00214309);
}

double NNfunction_sb_cRcR::synapse0x2c0c380() {
   return (neuron0x2beaf00()*-0.00339658);
}

double NNfunction_sb_cRcR::synapse0x2c0c3c0() {
   return (neuron0x2beb1e0()*0.0358496);
}

double NNfunction_sb_cRcR::synapse0x2c0ca40() {
   return (neuron0x2bebbb0()*-0.0413808);
}

double NNfunction_sb_cRcR::synapse0x2c0ca80() {
   return (neuron0x2bec580()*-0.0174018);
}

double NNfunction_sb_cRcR::synapse0x2c0cac0() {
   return (neuron0x2becf50()*0.0063522);
}

double NNfunction_sb_cRcR::synapse0x2c0cb00() {
   return (neuron0x2bed920()*-0.00208562);
}

double NNfunction_sb_cRcR::synapse0x2c0cb40() {
   return (neuron0x2be6470()*-0.0187772);
}

double NNfunction_sb_cRcR::synapse0x2c0cb80() {
   return (neuron0x2be6e40()*1.11518);
}

double NNfunction_sb_cRcR::synapse0x2c0cbc0() {
   return (neuron0x2bf06b0()*0.0481592);
}

double NNfunction_sb_cRcR::synapse0x2c0cc00() {
   return (neuron0x2bf1080()*0.014159);
}

double NNfunction_sb_cRcR::synapse0x2c0cc40() {
   return (neuron0x2bf1a50()*-0.0574144);
}

double NNfunction_sb_cRcR::synapse0x2c0cc80() {
   return (neuron0x2bf2420()*2.60656);
}

double NNfunction_sb_cRcR::synapse0x2c0ccc0() {
   return (neuron0x2bf2df0()*0.0227826);
}

double NNfunction_sb_cRcR::synapse0x2c0cd00() {
   return (neuron0x2bf37c0()*0.000661496);
}

double NNfunction_sb_cRcR::synapse0x2c0cd40() {
   return (neuron0x2bf4190()*-0.130616);
}

double NNfunction_sb_cRcR::synapse0x2c0cd80() {
   return (neuron0x2bf4b60()*0.0528143);
}

double NNfunction_sb_cRcR::synapse0x2c0c930() {
   return (neuron0x2beabf0()*0.00824378);
}

double NNfunction_sb_cRcR::synapse0x2c0c970() {
   return (neuron0x2bf7740()*-0.030178);
}

double NNfunction_sb_cRcR::synapse0x2c0c9b0() {
   return (neuron0x2bf8110()*0.0323148);
}

double NNfunction_sb_cRcR::synapse0x2c0c9f0() {
   return (neuron0x2bf8ae0()*-0.0040599);
}

double NNfunction_sb_cRcR::synapse0x2c0cfd0() {
   return (neuron0x2bf94b0()*0.0193841);
}

double NNfunction_sb_cRcR::synapse0x2c0d010() {
   return (neuron0x2bf9e80()*0.0078177);
}

double NNfunction_sb_cRcR::synapse0x2c0d050() {
   return (neuron0x2bfa850()*-0.34841);
}

double NNfunction_sb_cRcR::synapse0x2c0d090() {
   return (neuron0x2bfb220()*0.0299534);
}

double NNfunction_sb_cRcR::synapse0x2c0d0d0() {
   return (neuron0x2bfbbf0()*0.0452093);
}

double NNfunction_sb_cRcR::synapse0x2c0d110() {
   return (neuron0x2bfc7d0()*-0.00926795);
}

double NNfunction_sb_cRcR::synapse0x2c0d150() {
   return (neuron0x2bfd1a0()*0.0393047);
}

double NNfunction_sb_cRcR::synapse0x2c0d190() {
   return (neuron0x2bee020()*-0.00887038);
}

double NNfunction_sb_cRcR::synapse0x2c0d1d0() {
   return (neuron0x2bee9f0()*0.00935427);
}

double NNfunction_sb_cRcR::synapse0x2c0d210() {
   return (neuron0x2bef3c0()*-0.00258426);
}

double NNfunction_sb_cRcR::synapse0x2c0d250() {
   return (neuron0x2c01a00()*-0.0141025);
}

double NNfunction_sb_cRcR::synapse0x2c0d290() {
   return (neuron0x2c022b0()*-0.0186927);
}

double NNfunction_sb_cRcR::synapse0x2c0d2d0() {
   return (neuron0x2c02c80()*-0.00161055);
}

double NNfunction_sb_cRcR::synapse0x2c0d310() {
   return (neuron0x2c03650()*-0.0307783);
}

double NNfunction_sb_cRcR::synapse0x2c0d690() {
   return (neuron0x2bdf5d0()*0.189098);
}

double NNfunction_sb_cRcR::synapse0x2c0d6d0() {
   return (neuron0x2bdfee0()*3.07138);
}

double NNfunction_sb_cRcR::synapse0x2c0d710() {
   return (neuron0x2be09c0()*1.29192);
}

double NNfunction_sb_cRcR::synapse0x2c0d750() {
   return (neuron0x299a250()*2.71188);
}

double NNfunction_sb_cRcR::synapse0x2c0d790() {
   return (neuron0x2be17e0()*-0.36468);
}

double NNfunction_sb_cRcR::synapse0x2c0d7d0() {
   return (neuron0x2be21b0()*0.769937);
}

double NNfunction_sb_cRcR::synapse0x2c0d810() {
   return (neuron0x2be2f80()*1.10069);
}

double NNfunction_sb_cRcR::synapse0x2c0d850() {
   return (neuron0x2be3950()*-1.13946);
}

double NNfunction_sb_cRcR::synapse0x2c0d890() {
   return (neuron0x2be4320()*2.62937);
}

double NNfunction_sb_cRcR::synapse0x2c0d8d0() {
   return (neuron0x2be4e00()*0.881423);
}

double NNfunction_sb_cRcR::synapse0x2c0d910() {
   return (neuron0x2be57d0()*1.70345);
}

double NNfunction_sb_cRcR::synapse0x2c0d950() {
   return (neuron0x2be28b0()*1.25641);
}

double NNfunction_sb_cRcR::synapse0x2c0d990() {
   return (neuron0x2be7380()*-0.959962);
}

double NNfunction_sb_cRcR::synapse0x2c0d9d0() {
   return (neuron0x2be7d50()*-0.657922);
}

double NNfunction_sb_cRcR::synapse0x2c0da10() {
   return (neuron0x2be8720()*1.20226);
}

double NNfunction_sb_cRcR::synapse0x2c0da50() {
   return (neuron0x2be90f0()*-0.772266);
}

double NNfunction_sb_cRcR::synapse0x2c0d4e0() {
   return (neuron0x2beaf00()*0.395989);
}

double NNfunction_sb_cRcR::synapse0x2c0d520() {
   return (neuron0x2beb1e0()*1.82107);
}

double NNfunction_sb_cRcR::synapse0x2c0dba0() {
   return (neuron0x2bebbb0()*-0.0885382);
}

double NNfunction_sb_cRcR::synapse0x2c0dbe0() {
   return (neuron0x2bec580()*3.05147);
}

double NNfunction_sb_cRcR::synapse0x2c0dc20() {
   return (neuron0x2becf50()*-0.766891);
}

double NNfunction_sb_cRcR::synapse0x2c0dc60() {
   return (neuron0x2bed920()*1.89597);
}

double NNfunction_sb_cRcR::synapse0x2c0dca0() {
   return (neuron0x2be6470()*0.821354);
}

double NNfunction_sb_cRcR::synapse0x2c0dce0() {
   return (neuron0x2be6e40()*-2.43797);
}

double NNfunction_sb_cRcR::synapse0x2c0dd20() {
   return (neuron0x2bf06b0()*0.134631);
}

double NNfunction_sb_cRcR::synapse0x2c0dd60() {
   return (neuron0x2bf1080()*-0.293445);
}

double NNfunction_sb_cRcR::synapse0x2c0dda0() {
   return (neuron0x2bf1a50()*0.832866);
}

double NNfunction_sb_cRcR::synapse0x2c0dde0() {
   return (neuron0x2bf2420()*-1.0274);
}

double NNfunction_sb_cRcR::synapse0x2c0de20() {
   return (neuron0x2bf2df0()*-3.36855);
}

double NNfunction_sb_cRcR::synapse0x2c0de60() {
   return (neuron0x2bf37c0()*2.42722);
}

double NNfunction_sb_cRcR::synapse0x2c0dea0() {
   return (neuron0x2bf4190()*-5.48227);
}

double NNfunction_sb_cRcR::synapse0x2c0dee0() {
   return (neuron0x2bf4b60()*0.699131);
}

double NNfunction_sb_cRcR::synapse0x2c0da90() {
   return (neuron0x2beabf0()*-0.965024);
}

double NNfunction_sb_cRcR::synapse0x2c0dad0() {
   return (neuron0x2bf7740()*-0.407226);
}

double NNfunction_sb_cRcR::synapse0x2c0db10() {
   return (neuron0x2bf8110()*-2.01442);
}

double NNfunction_sb_cRcR::synapse0x2c0db50() {
   return (neuron0x2bf8ae0()*-1.87421);
}

double NNfunction_sb_cRcR::synapse0x2c0e130() {
   return (neuron0x2bf94b0()*1.44466);
}

double NNfunction_sb_cRcR::synapse0x2c0e170() {
   return (neuron0x2bf9e80()*1.09079);
}

double NNfunction_sb_cRcR::synapse0x2c0e1b0() {
   return (neuron0x2bfa850()*1.89248);
}

double NNfunction_sb_cRcR::synapse0x2c0e1f0() {
   return (neuron0x2bfb220()*0.824918);
}

double NNfunction_sb_cRcR::synapse0x2c0e230() {
   return (neuron0x2bfbbf0()*0.0175181);
}

double NNfunction_sb_cRcR::synapse0x2c0e270() {
   return (neuron0x2bfc7d0()*-1.88116);
}

double NNfunction_sb_cRcR::synapse0x2c0e2b0() {
   return (neuron0x2bfd1a0()*0.961305);
}

double NNfunction_sb_cRcR::synapse0x2c0e2f0() {
   return (neuron0x2bee020()*-2.11938);
}

double NNfunction_sb_cRcR::synapse0x2c0e330() {
   return (neuron0x2bee9f0()*-0.705167);
}

double NNfunction_sb_cRcR::synapse0x2c0e370() {
   return (neuron0x2bef3c0()*-1.44154);
}

double NNfunction_sb_cRcR::synapse0x2c0e3b0() {
   return (neuron0x2c01a00()*3.09017);
}

double NNfunction_sb_cRcR::synapse0x2c0e3f0() {
   return (neuron0x2c022b0()*3.34832);
}

double NNfunction_sb_cRcR::synapse0x2c0e430() {
   return (neuron0x2c02c80()*0.427102);
}

double NNfunction_sb_cRcR::synapse0x2c0e470() {
   return (neuron0x2c03650()*-0.462225);
}

double NNfunction_sb_cRcR::synapse0x2bdf590() {
   return (neuron0x2c0a850()*12.4087);
}

double NNfunction_sb_cRcR::synapse0x2c0e6d0() {
   return (neuron0x2c0abf0()*-1.47954);
}

double NNfunction_sb_cRcR::synapse0x2c0e710() {
   return (neuron0x2c0b090()*-6.70812);
}

double NNfunction_sb_cRcR::synapse0x2c0e750() {
   return (neuron0x2c0c1f0()*8.42082);
}

double NNfunction_sb_cRcR::synapse0x2c0e790() {
   return (neuron0x2c0d350()*-6.45085);
}

