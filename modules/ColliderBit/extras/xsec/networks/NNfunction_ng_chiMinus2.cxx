#include "NNfunction_ng_chiMinus2.h"
#include <cmath>

double NNfunction_ng_chiMinus2::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.9221)/15.0129;
   input1 = (in1 - 21.3981)/952.256;
   input2 = (in2 - 370.12)/408.921;
   input3 = (in3 - 130.656)/618.434;
   input4 = (in4 - 909.359)/810.668;
   input5 = (in5 - 856.647)/845.71;
   input6 = (in6 - 862.933)/844.958;
   input7 = (in7 - 856.852)/824.532;
   input8 = (in8 - 874.575)/870.442;
   input9 = (in9 - 866.652)/859.76;
   input10 = (in10 - 873.098)/846.797;
   input11 = (in11 - 656.808)/648.739;
   input12 = (in12 - 771.625)/762.595;
   input13 = (in13 - 565.784)/483.801;
   input14 = (in14 - 774.548)/726.79;
   input15 = (in15 - 776.805)/729.38;
   input16 = (in16 - 547.384)/488.755;
   input17 = (in17 - 805.739)/798.693;
   input18 = (in18 - 804.32)/797.896;
   input19 = (in19 - 792.259)/749.384;
   input20 = (in20 - -104.682)/433.041;
   input21 = (in21 - -134.375)/966.816;
   input22 = (in22 - 5.28053)/1008.74;
   input23 = (in23 - -31.7602)/290.949;
   switch(index) {
     case 0:
         return neuron0x2ad0530();
     default:
         return 0.;
   }
}

double NNfunction_ng_chiMinus2::Value(int index, double* input) {
   input0 = (input[0] - 23.9221)/15.0129;
   input1 = (input[1] - 21.3981)/952.256;
   input2 = (input[2] - 370.12)/408.921;
   input3 = (input[3] - 130.656)/618.434;
   input4 = (input[4] - 909.359)/810.668;
   input5 = (input[5] - 856.647)/845.71;
   input6 = (input[6] - 862.933)/844.958;
   input7 = (input[7] - 856.852)/824.532;
   input8 = (input[8] - 874.575)/870.442;
   input9 = (input[9] - 866.652)/859.76;
   input10 = (input[10] - 873.098)/846.797;
   input11 = (input[11] - 656.808)/648.739;
   input12 = (input[12] - 771.625)/762.595;
   input13 = (input[13] - 565.784)/483.801;
   input14 = (input[14] - 774.548)/726.79;
   input15 = (input[15] - 776.805)/729.38;
   input16 = (input[16] - 547.384)/488.755;
   input17 = (input[17] - 805.739)/798.693;
   input18 = (input[18] - 804.32)/797.896;
   input19 = (input[19] - 792.259)/749.384;
   input20 = (input[20] - -104.682)/433.041;
   input21 = (input[21] - -134.375)/966.816;
   input22 = (input[22] - 5.28053)/1008.74;
   input23 = (input[23] - -31.7602)/290.949;
   switch(index) {
     case 0:
         return neuron0x2ad0530();
     default:
         return 0.;
   }
}

double NNfunction_ng_chiMinus2::neuron0x2a9b5a0() {
   return input0;
}

double NNfunction_ng_chiMinus2::neuron0x2a9b850() {
   return input1;
}

double NNfunction_ng_chiMinus2::neuron0x2a9bb90() {
   return input2;
}

double NNfunction_ng_chiMinus2::neuron0x2a9bed0() {
   return input3;
}

double NNfunction_ng_chiMinus2::neuron0x2a9c210() {
   return input4;
}

double NNfunction_ng_chiMinus2::neuron0x2a9c550() {
   return input5;
}

double NNfunction_ng_chiMinus2::neuron0x2a9c890() {
   return input6;
}

double NNfunction_ng_chiMinus2::neuron0x2a9cbd0() {
   return input7;
}

double NNfunction_ng_chiMinus2::neuron0x2a9cf10() {
   return input8;
}

double NNfunction_ng_chiMinus2::neuron0x2a9d250() {
   return input9;
}

double NNfunction_ng_chiMinus2::neuron0x2a9d590() {
   return input10;
}

double NNfunction_ng_chiMinus2::neuron0x2a9d8d0() {
   return input11;
}

double NNfunction_ng_chiMinus2::neuron0x2a9dc10() {
   return input12;
}

double NNfunction_ng_chiMinus2::neuron0x2a9df50() {
   return input13;
}

double NNfunction_ng_chiMinus2::neuron0x2a9e290() {
   return input14;
}

double NNfunction_ng_chiMinus2::neuron0x2a9e5d0() {
   return input15;
}

double NNfunction_ng_chiMinus2::neuron0x2a9e910() {
   return input16;
}

double NNfunction_ng_chiMinus2::neuron0x2a9ee70() {
   return input17;
}

double NNfunction_ng_chiMinus2::neuron0x2a9f1b0() {
   return input18;
}

double NNfunction_ng_chiMinus2::neuron0x2a9f4f0() {
   return input19;
}

double NNfunction_ng_chiMinus2::neuron0x2a9f830() {
   return input20;
}

double NNfunction_ng_chiMinus2::neuron0x2a9fb70() {
   return input21;
}

double NNfunction_ng_chiMinus2::neuron0x2a9feb0() {
   return input22;
}

double NNfunction_ng_chiMinus2::neuron0x2aa01f0() {
   return input23;
}

double NNfunction_ng_chiMinus2::input0x2aa0660() {
   double input = 1.15327;
   input += synapse0x2aa09a0();
   input += synapse0x2aa09e0();
   input += synapse0x2aa0a20();
   input += synapse0x2aa0a60();
   input += synapse0x2aa0aa0();
   input += synapse0x2aa0ae0();
   input += synapse0x2aa0b20();
   input += synapse0x2aa0b60();
   input += synapse0x2aa0ba0();
   input += synapse0x2aa0be0();
   input += synapse0x2aa0c20();
   input += synapse0x2aa0c60();
   input += synapse0x2aa0ca0();
   input += synapse0x2aa0ce0();
   input += synapse0x2aa0d20();
   input += synapse0x2aa0d60();
   input += synapse0x2aa07f0();
   input += synapse0x2aa0830();
   input += synapse0x2857900();
   input += synapse0x2857940();
   input += synapse0x2aa0da0();
   input += synapse0x2aa0de0();
   input += synapse0x2aa0e20();
   input += synapse0x2aa0e60();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aa0660() {
   double input = input0x2aa0660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aa0ea0() {
   double input = -0.700828;
   input += synapse0x2aa11e0();
   input += synapse0x2aa1220();
   input += synapse0x2aa1260();
   input += synapse0x2aa12a0();
   input += synapse0x2aa12e0();
   input += synapse0x2aa1320();
   input += synapse0x2aa1360();
   input += synapse0x2aa13a0();
   input += synapse0x2aa13e0();
   input += synapse0x2857750();
   input += synapse0x2857790();
   input += synapse0x28577d0();
   input += synapse0x2857810();
   input += synapse0x2aa1630();
   input += synapse0x2aa1670();
   input += synapse0x2aa16b0();
   input += synapse0x2aa1030();
   input += synapse0x2aa1070();
   input += synapse0x2aa1800();
   input += synapse0x2aa1840();
   input += synapse0x2aa1880();
   input += synapse0x2aa18c0();
   input += synapse0x2aa1900();
   input += synapse0x2aa1940();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aa0ea0() {
   double input = input0x2aa0ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aa1980() {
   double input = 0.356516;
   input += synapse0x2aa1cc0();
   input += synapse0x2aa1d00();
   input += synapse0x2aa1d40();
   input += synapse0x2aa1d80();
   input += synapse0x2aa1dc0();
   input += synapse0x2aa1e00();
   input += synapse0x2aa1e40();
   input += synapse0x2aa1e80();
   input += synapse0x2aa1ec0();
   input += synapse0x2aa1f00();
   input += synapse0x2aa1f40();
   input += synapse0x2aa1f80();
   input += synapse0x2aa1fc0();
   input += synapse0x2aa2000();
   input += synapse0x2aa2040();
   input += synapse0x2aa2080();
   input += synapse0x2aa1b10();
   input += synapse0x2aa1b50();
   input += synapse0x17cff10();
   input += synapse0x2865650();
   input += synapse0x2865690();
   input += synapse0x2aa3fb0();
   input += synapse0x2aa3ff0();
   input += synapse0x2a9b2e0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aa1980() {
   double input = input0x2aa1980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aa1420() {
   double input = -1.55403;
   input += synapse0x2a9b3b0();
   input += synapse0x2865ed0();
   input += synapse0x2aa15b0();
   input += synapse0x2aa15f0();
   input += synapse0x2aa21d0();
   input += synapse0x2aa2210();
   input += synapse0x2aa2250();
   input += synapse0x2aa2290();
   input += synapse0x2aa22d0();
   input += synapse0x2aa2310();
   input += synapse0x2aa2350();
   input += synapse0x2aa2390();
   input += synapse0x2aa23d0();
   input += synapse0x2aa2410();
   input += synapse0x2aa2450();
   input += synapse0x2aa2490();
   input += synapse0x2a9b320();
   input += synapse0x2a9b360();
   input += synapse0x2aa25e0();
   input += synapse0x2aa2620();
   input += synapse0x2aa2660();
   input += synapse0x2aa26a0();
   input += synapse0x2aa26e0();
   input += synapse0x2aa2720();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aa1420() {
   double input = input0x2aa1420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aa2760() {
   double input = -1.08647;
   input += synapse0x2aa2aa0();
   input += synapse0x2aa2ae0();
   input += synapse0x2aa2b20();
   input += synapse0x2aa2b60();
   input += synapse0x2aa2ba0();
   input += synapse0x2aa2be0();
   input += synapse0x2aa2c20();
   input += synapse0x2aa2c60();
   input += synapse0x2aa2ca0();
   input += synapse0x2aa2ce0();
   input += synapse0x2aa2d20();
   input += synapse0x2aa2d60();
   input += synapse0x2aa2da0();
   input += synapse0x2aa2de0();
   input += synapse0x2aa2e20();
   input += synapse0x2aa2e60();
   input += synapse0x2aa2fb0();
   input += synapse0x2aa28f0();
   input += synapse0x2aa2930();
   input += synapse0x2aa40f0();
   input += synapse0x2aa4130();
   input += synapse0x2aa4170();
   input += synapse0x2aa41b0();
   input += synapse0x2aa41f0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aa2760() {
   double input = input0x2aa2760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aa4230() {
   double input = -0.0351647;
   input += synapse0x2aa4570();
   input += synapse0x2aa45b0();
   input += synapse0x2aa45f0();
   input += synapse0x2aa4630();
   input += synapse0x2aa4670();
   input += synapse0x2aa46b0();
   input += synapse0x2aa46f0();
   input += synapse0x2aa4730();
   input += synapse0x2aa4770();
   input += synapse0x28659a0();
   input += synapse0x28659e0();
   input += synapse0x2865a20();
   input += synapse0x2865a60();
   input += synapse0x2865aa0();
   input += synapse0x2865ae0();
   input += synapse0x2865b20();
   input += synapse0x2aa43c0();
   input += synapse0x2aa4400();
   input += synapse0x2865c70();
   input += synapse0x2865cb0();
   input += synapse0x2865cf0();
   input += synapse0x2865d30();
   input += synapse0x2865d70();
   input += synapse0x2aa4fc0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aa4230() {
   double input = input0x2aa4230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aa5000() {
   double input = 0.533315;
   input += synapse0x2aa5340();
   input += synapse0x2aa5380();
   input += synapse0x2aa53c0();
   input += synapse0x2aa5400();
   input += synapse0x2aa5440();
   input += synapse0x2aa5480();
   input += synapse0x2aa54c0();
   input += synapse0x2aa5500();
   input += synapse0x2aa5540();
   input += synapse0x2aa5580();
   input += synapse0x2aa55c0();
   input += synapse0x2aa5600();
   input += synapse0x2aa5640();
   input += synapse0x2aa5680();
   input += synapse0x2aa56c0();
   input += synapse0x2aa5700();
   input += synapse0x2aa5190();
   input += synapse0x2aa51d0();
   input += synapse0x2aa5850();
   input += synapse0x2aa5890();
   input += synapse0x2aa58d0();
   input += synapse0x2aa5910();
   input += synapse0x2aa5950();
   input += synapse0x2aa5990();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aa5000() {
   double input = input0x2aa5000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aa59d0() {
   double input = -1.05331;
   input += synapse0x2aa5d10();
   input += synapse0x2aa5d50();
   input += synapse0x2aa5d90();
   input += synapse0x2aa5dd0();
   input += synapse0x2aa5e10();
   input += synapse0x2aa5e50();
   input += synapse0x2aa5e90();
   input += synapse0x2aa5ed0();
   input += synapse0x2aa5f10();
   input += synapse0x2aa5f50();
   input += synapse0x2aa5f90();
   input += synapse0x2aa5fd0();
   input += synapse0x2aa6010();
   input += synapse0x2aa6050();
   input += synapse0x2aa6090();
   input += synapse0x2aa60d0();
   input += synapse0x2aa5b60();
   input += synapse0x2aa5ba0();
   input += synapse0x2aa6220();
   input += synapse0x2aa6260();
   input += synapse0x2aa62a0();
   input += synapse0x2aa62e0();
   input += synapse0x2aa6320();
   input += synapse0x2aa6360();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aa59d0() {
   double input = input0x2aa59d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aa63a0() {
   double input = -0.217846;
   input += synapse0x2a9ed60();
   input += synapse0x2a9eda0();
   input += synapse0x2a9ede0();
   input += synapse0x2a9ee20();
   input += synapse0x2aa68f0();
   input += synapse0x2aa6930();
   input += synapse0x2aa6970();
   input += synapse0x2aa69b0();
   input += synapse0x2aa69f0();
   input += synapse0x2aa6a30();
   input += synapse0x2aa6a70();
   input += synapse0x2aa6ab0();
   input += synapse0x2aa6af0();
   input += synapse0x2aa6b30();
   input += synapse0x2aa6b70();
   input += synapse0x2aa6bb0();
   input += synapse0x2aa6530();
   input += synapse0x2aa6570();
   input += synapse0x2aa6d00();
   input += synapse0x2aa6d40();
   input += synapse0x2aa6d80();
   input += synapse0x2aa6dc0();
   input += synapse0x2aa6e00();
   input += synapse0x2aa6e40();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aa63a0() {
   double input = input0x2aa63a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aa6e80() {
   double input = -1.70801;
   input += synapse0x2aa71c0();
   input += synapse0x2aa7200();
   input += synapse0x2aa7240();
   input += synapse0x2aa7280();
   input += synapse0x2aa72c0();
   input += synapse0x2aa7300();
   input += synapse0x2aa7340();
   input += synapse0x2aa7380();
   input += synapse0x2aa73c0();
   input += synapse0x2aa7400();
   input += synapse0x2aa7440();
   input += synapse0x2aa7480();
   input += synapse0x2aa74c0();
   input += synapse0x2aa7500();
   input += synapse0x2aa7540();
   input += synapse0x2aa7580();
   input += synapse0x2aa7010();
   input += synapse0x2aa7050();
   input += synapse0x2aa76d0();
   input += synapse0x2aa7710();
   input += synapse0x2aa7750();
   input += synapse0x2aa7790();
   input += synapse0x2aa77d0();
   input += synapse0x2aa7810();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aa6e80() {
   double input = input0x2aa6e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aa7850() {
   double input = 1.8795;
   input += synapse0x2aa7b90();
   input += synapse0x2aa7bd0();
   input += synapse0x2aa7c10();
   input += synapse0x2aa7c50();
   input += synapse0x2aa7c90();
   input += synapse0x2aa7cd0();
   input += synapse0x2aa7d10();
   input += synapse0x2aa7d50();
   input += synapse0x2aa7d90();
   input += synapse0x2aa7dd0();
   input += synapse0x2aa7e10();
   input += synapse0x2aa7e50();
   input += synapse0x2aa7e90();
   input += synapse0x2aa7ed0();
   input += synapse0x2aa7f10();
   input += synapse0x2aa7f50();
   input += synapse0x2aa79e0();
   input += synapse0x2aa7a20();
   input += synapse0x2aa47b0();
   input += synapse0x2aa47f0();
   input += synapse0x2aa4830();
   input += synapse0x2aa4870();
   input += synapse0x2aa48b0();
   input += synapse0x2aa48f0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aa7850() {
   double input = input0x2aa7850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aa4930() {
   double input = -1.97705;
   input += synapse0x2aa4c70();
   input += synapse0x2aa4cb0();
   input += synapse0x2aa4cf0();
   input += synapse0x2aa4d30();
   input += synapse0x2aa4d70();
   input += synapse0x2aa4db0();
   input += synapse0x2aa4df0();
   input += synapse0x2aa4e30();
   input += synapse0x2aa4e70();
   input += synapse0x2aa4eb0();
   input += synapse0x2aa4ef0();
   input += synapse0x2aa4f30();
   input += synapse0x2aa4f70();
   input += synapse0x2aa90b0();
   input += synapse0x2aa90f0();
   input += synapse0x2aa9130();
   input += synapse0x2aa4ac0();
   input += synapse0x2aa4b00();
   input += synapse0x2aa9280();
   input += synapse0x2aa92c0();
   input += synapse0x2aa9300();
   input += synapse0x2aa9340();
   input += synapse0x2aa9380();
   input += synapse0x2aa93c0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aa4930() {
   double input = input0x2aa4930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aa9400() {
   double input = -0.300734;
   input += synapse0x2aa9740();
   input += synapse0x2aa9780();
   input += synapse0x2aa97c0();
   input += synapse0x2aa9800();
   input += synapse0x2aa9840();
   input += synapse0x2aa9880();
   input += synapse0x2aa98c0();
   input += synapse0x2aa9900();
   input += synapse0x2aa9940();
   input += synapse0x2aa9980();
   input += synapse0x2aa99c0();
   input += synapse0x2aa9a00();
   input += synapse0x2aa9a40();
   input += synapse0x2aa9a80();
   input += synapse0x2aa9ac0();
   input += synapse0x2aa9b00();
   input += synapse0x2aa9590();
   input += synapse0x2aa95d0();
   input += synapse0x2aa9c50();
   input += synapse0x2aa9c90();
   input += synapse0x2aa9cd0();
   input += synapse0x2aa9d10();
   input += synapse0x2aa9d50();
   input += synapse0x2aa9d90();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aa9400() {
   double input = input0x2aa9400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aa9dd0() {
   double input = -0.834762;
   input += synapse0x2aaa110();
   input += synapse0x2aaa150();
   input += synapse0x2aaa190();
   input += synapse0x2aaa1d0();
   input += synapse0x2aaa210();
   input += synapse0x2aaa250();
   input += synapse0x2aaa290();
   input += synapse0x2aaa2d0();
   input += synapse0x2aaa310();
   input += synapse0x2aaa350();
   input += synapse0x2aaa390();
   input += synapse0x2aaa3d0();
   input += synapse0x2aaa410();
   input += synapse0x2aaa450();
   input += synapse0x2aaa490();
   input += synapse0x2aaa4d0();
   input += synapse0x2aa9f60();
   input += synapse0x2aa9fa0();
   input += synapse0x2aaa620();
   input += synapse0x2aaa660();
   input += synapse0x2aaa6a0();
   input += synapse0x2aaa6e0();
   input += synapse0x2aaa720();
   input += synapse0x2aaa760();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aa9dd0() {
   double input = input0x2aa9dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aaa7a0() {
   double input = -1.06834;
   input += synapse0x2aaaae0();
   input += synapse0x2aaab20();
   input += synapse0x2aaab60();
   input += synapse0x2aaaba0();
   input += synapse0x2aaabe0();
   input += synapse0x2aaac20();
   input += synapse0x2aaac60();
   input += synapse0x2aaaca0();
   input += synapse0x2aaace0();
   input += synapse0x2aaad20();
   input += synapse0x2aaad60();
   input += synapse0x2aaada0();
   input += synapse0x2aaade0();
   input += synapse0x2aaae20();
   input += synapse0x2aaae60();
   input += synapse0x2aaaea0();
   input += synapse0x2aaa930();
   input += synapse0x2aaa970();
   input += synapse0x2aaaff0();
   input += synapse0x2aab030();
   input += synapse0x2aab070();
   input += synapse0x2aab0b0();
   input += synapse0x2aab0f0();
   input += synapse0x2aab130();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aaa7a0() {
   double input = input0x2aaa7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aab170() {
   double input = 0.681532;
   input += synapse0x2aab4b0();
   input += synapse0x2a9b730();
   input += synapse0x2a9b770();
   input += synapse0x2a9ba70();
   input += synapse0x2a9bab0();
   input += synapse0x2a9bdb0();
   input += synapse0x2a9bdf0();
   input += synapse0x2a9c0f0();
   input += synapse0x2a9c130();
   input += synapse0x2a9c430();
   input += synapse0x2a9c470();
   input += synapse0x2a9c770();
   input += synapse0x2a9c7b0();
   input += synapse0x2a9cab0();
   input += synapse0x2a9caf0();
   input += synapse0x2a9cdf0();
   input += synapse0x2a9ce30();
   input += synapse0x2a9d130();
   input += synapse0x2a9d170();
   input += synapse0x2a9d470();
   input += synapse0x2a9d4b0();
   input += synapse0x2a9d7b0();
   input += synapse0x2a9d7f0();
   input += synapse0x2a9daf0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aab170() {
   double input = input0x2aab170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aacf80() {
   double input = 0.517667;
   input += synapse0x2a9db30();
   input += synapse0x2a9e7f0();
   input += synapse0x2a9e830();
   input += synapse0x2aab300();
   input += synapse0x2aab340();
   input += synapse0x2a9eb30();
   input += synapse0x2a9eb70();
   input += synapse0x2a9f090();
   input += synapse0x2a9f0d0();
   input += synapse0x2a9f3d0();
   input += synapse0x2a9f410();
   input += synapse0x2a9f710();
   input += synapse0x2a9f750();
   input += synapse0x2a9fa50();
   input += synapse0x2a9fa90();
   input += synapse0x2a9fd90();
   input += synapse0x2a9fdd0();
   input += synapse0x2aa00d0();
   input += synapse0x2aa0110();
   input += synapse0x2aa0410();
   input += synapse0x2aa0450();
   input += synapse0x2a9de30();
   input += synapse0x2a9de70();
   input += synapse0x2aad220();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aacf80() {
   double input = input0x2aacf80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aad260() {
   double input = 0.391979;
   input += synapse0x2aad5a0();
   input += synapse0x2aad5e0();
   input += synapse0x2aad620();
   input += synapse0x2aad660();
   input += synapse0x2aad6a0();
   input += synapse0x2aad6e0();
   input += synapse0x2aad720();
   input += synapse0x2aad760();
   input += synapse0x2aad7a0();
   input += synapse0x2aad7e0();
   input += synapse0x2aad820();
   input += synapse0x2aad860();
   input += synapse0x2aad8a0();
   input += synapse0x2aad8e0();
   input += synapse0x2aad920();
   input += synapse0x2aad960();
   input += synapse0x2aad3f0();
   input += synapse0x2aad430();
   input += synapse0x2aadab0();
   input += synapse0x2aadaf0();
   input += synapse0x2aadb30();
   input += synapse0x2aadb70();
   input += synapse0x2aadbb0();
   input += synapse0x2aadbf0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aad260() {
   double input = input0x2aad260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aadc30() {
   double input = -0.262902;
   input += synapse0x2aadf70();
   input += synapse0x2aadfb0();
   input += synapse0x2aadff0();
   input += synapse0x2aae030();
   input += synapse0x2aae070();
   input += synapse0x2aae0b0();
   input += synapse0x2aae0f0();
   input += synapse0x2aae130();
   input += synapse0x2aae170();
   input += synapse0x2aae1b0();
   input += synapse0x2aae1f0();
   input += synapse0x2aae230();
   input += synapse0x2aae270();
   input += synapse0x2aae2b0();
   input += synapse0x2aae2f0();
   input += synapse0x2aae330();
   input += synapse0x2aaddc0();
   input += synapse0x2aade00();
   input += synapse0x2aae480();
   input += synapse0x2aae4c0();
   input += synapse0x2aae500();
   input += synapse0x2aae540();
   input += synapse0x2aae580();
   input += synapse0x2aae5c0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aadc30() {
   double input = input0x2aadc30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aae600() {
   double input = 0.198709;
   input += synapse0x2aae940();
   input += synapse0x2aae980();
   input += synapse0x2aae9c0();
   input += synapse0x2aaea00();
   input += synapse0x2aaea40();
   input += synapse0x2aaea80();
   input += synapse0x2aaeac0();
   input += synapse0x2aaeb00();
   input += synapse0x2aaeb40();
   input += synapse0x2aaeb80();
   input += synapse0x2aaebc0();
   input += synapse0x2aaec00();
   input += synapse0x2aaec40();
   input += synapse0x2aaec80();
   input += synapse0x2aaecc0();
   input += synapse0x2aaed00();
   input += synapse0x2aae790();
   input += synapse0x2aae7d0();
   input += synapse0x2aaee50();
   input += synapse0x2aaee90();
   input += synapse0x2aaeed0();
   input += synapse0x2aaef10();
   input += synapse0x2aaef50();
   input += synapse0x2aaef90();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aae600() {
   double input = input0x2aae600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aaefd0() {
   double input = 0.289049;
   input += synapse0x2aaf310();
   input += synapse0x2aaf350();
   input += synapse0x2aaf390();
   input += synapse0x2aaf3d0();
   input += synapse0x2aaf410();
   input += synapse0x2aaf450();
   input += synapse0x2aaf490();
   input += synapse0x2aaf4d0();
   input += synapse0x2aaf510();
   input += synapse0x2aaf550();
   input += synapse0x2aaf590();
   input += synapse0x2aaf5d0();
   input += synapse0x2aaf610();
   input += synapse0x2aaf650();
   input += synapse0x2aaf690();
   input += synapse0x2aaf6d0();
   input += synapse0x2aaf160();
   input += synapse0x2aaf1a0();
   input += synapse0x2aaf820();
   input += synapse0x2aaf860();
   input += synapse0x2aaf8a0();
   input += synapse0x2aaf8e0();
   input += synapse0x2aaf920();
   input += synapse0x2aaf960();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aaefd0() {
   double input = input0x2aaefd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aaf9a0() {
   double input = 2.24938;
   input += synapse0x2aafce0();
   input += synapse0x2aafd20();
   input += synapse0x2aafd60();
   input += synapse0x2aafda0();
   input += synapse0x2aafde0();
   input += synapse0x2aafe20();
   input += synapse0x2aafe60();
   input += synapse0x2aafea0();
   input += synapse0x2aafee0();
   input += synapse0x2aa80a0();
   input += synapse0x2aa80e0();
   input += synapse0x2aa8120();
   input += synapse0x2aa8160();
   input += synapse0x2aa81a0();
   input += synapse0x2aa81e0();
   input += synapse0x2aa8220();
   input += synapse0x2aafb30();
   input += synapse0x2aafb70();
   input += synapse0x2aa8370();
   input += synapse0x2aa83b0();
   input += synapse0x2aa83f0();
   input += synapse0x2aa8430();
   input += synapse0x2aa8470();
   input += synapse0x2aa84b0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aaf9a0() {
   double input = input0x2aaf9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aa84f0() {
   double input = 0.235131;
   input += synapse0x2aa8830();
   input += synapse0x2aa8870();
   input += synapse0x2aa88b0();
   input += synapse0x2aa88f0();
   input += synapse0x2aa8930();
   input += synapse0x2aa8970();
   input += synapse0x2aa89b0();
   input += synapse0x2aa89f0();
   input += synapse0x2aa8a30();
   input += synapse0x2aa8a70();
   input += synapse0x2aa8ab0();
   input += synapse0x2aa8af0();
   input += synapse0x2aa8b30();
   input += synapse0x2aa8b70();
   input += synapse0x2aa8bb0();
   input += synapse0x2aa8bf0();
   input += synapse0x2aa8680();
   input += synapse0x2aa86c0();
   input += synapse0x2aa8d40();
   input += synapse0x2aa8d80();
   input += synapse0x2aa8dc0();
   input += synapse0x2aa8e00();
   input += synapse0x2aa8e40();
   input += synapse0x2aa8e80();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aa84f0() {
   double input = input0x2aa84f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aa8ec0() {
   double input = 2.04164;
   input += synapse0x2aa9050();
   input += synapse0x2ab20e0();
   input += synapse0x2ab2120();
   input += synapse0x2ab2160();
   input += synapse0x2ab21a0();
   input += synapse0x2ab21e0();
   input += synapse0x2ab2220();
   input += synapse0x2ab2260();
   input += synapse0x2ab22a0();
   input += synapse0x2ab22e0();
   input += synapse0x2ab2320();
   input += synapse0x2ab2360();
   input += synapse0x2ab23a0();
   input += synapse0x2ab23e0();
   input += synapse0x2ab2420();
   input += synapse0x2ab2460();
   input += synapse0x2ab1f30();
   input += synapse0x2ab1f70();
   input += synapse0x2ab25b0();
   input += synapse0x2ab25f0();
   input += synapse0x2ab2630();
   input += synapse0x2ab2670();
   input += synapse0x2ab26b0();
   input += synapse0x2ab26f0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aa8ec0() {
   double input = input0x2aa8ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2ab2730() {
   double input = 0.14556;
   input += synapse0x2ab2a70();
   input += synapse0x2ab2ab0();
   input += synapse0x2ab2af0();
   input += synapse0x2ab2b30();
   input += synapse0x2ab2b70();
   input += synapse0x2ab2bb0();
   input += synapse0x2ab2bf0();
   input += synapse0x2ab2c30();
   input += synapse0x2ab2c70();
   input += synapse0x2ab2cb0();
   input += synapse0x2ab2cf0();
   input += synapse0x2ab2d30();
   input += synapse0x2ab2d70();
   input += synapse0x2ab2db0();
   input += synapse0x2ab2df0();
   input += synapse0x2ab2e30();
   input += synapse0x2ab28c0();
   input += synapse0x2ab2900();
   input += synapse0x2ab2f80();
   input += synapse0x2ab2fc0();
   input += synapse0x2ab3000();
   input += synapse0x2ab3040();
   input += synapse0x2ab3080();
   input += synapse0x2ab30c0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2ab2730() {
   double input = input0x2ab2730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2ab3100() {
   double input = 0.660132;
   input += synapse0x2ab3440();
   input += synapse0x2ab3480();
   input += synapse0x2ab34c0();
   input += synapse0x2ab3500();
   input += synapse0x2ab3540();
   input += synapse0x2ab3580();
   input += synapse0x2ab35c0();
   input += synapse0x2ab3600();
   input += synapse0x2ab3640();
   input += synapse0x2ab3680();
   input += synapse0x2ab36c0();
   input += synapse0x2ab3700();
   input += synapse0x2ab3740();
   input += synapse0x2ab3780();
   input += synapse0x2ab37c0();
   input += synapse0x2ab3800();
   input += synapse0x2ab3290();
   input += synapse0x2ab32d0();
   input += synapse0x2ab3950();
   input += synapse0x2ab3990();
   input += synapse0x2ab39d0();
   input += synapse0x2ab3a10();
   input += synapse0x2ab3a50();
   input += synapse0x2ab3a90();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2ab3100() {
   double input = input0x2ab3100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2ab3ad0() {
   double input = -0.424993;
   input += synapse0x2ab3e10();
   input += synapse0x2ab3e50();
   input += synapse0x2ab3e90();
   input += synapse0x2ab3ed0();
   input += synapse0x2ab3f10();
   input += synapse0x2ab3f50();
   input += synapse0x2ab3f90();
   input += synapse0x2ab3fd0();
   input += synapse0x2ab4010();
   input += synapse0x2ab4050();
   input += synapse0x2ab4090();
   input += synapse0x2ab40d0();
   input += synapse0x2ab4110();
   input += synapse0x2ab4150();
   input += synapse0x2ab4190();
   input += synapse0x2ab41d0();
   input += synapse0x2ab3c60();
   input += synapse0x2ab3ca0();
   input += synapse0x2ab4320();
   input += synapse0x2ab4360();
   input += synapse0x2ab43a0();
   input += synapse0x2ab43e0();
   input += synapse0x2ab4420();
   input += synapse0x2ab4460();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2ab3ad0() {
   double input = input0x2ab3ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2ab44a0() {
   double input = 0.283631;
   input += synapse0x2ab47e0();
   input += synapse0x2ab4820();
   input += synapse0x2ab4860();
   input += synapse0x2ab48a0();
   input += synapse0x2ab48e0();
   input += synapse0x2ab4920();
   input += synapse0x2ab4960();
   input += synapse0x2ab49a0();
   input += synapse0x2ab49e0();
   input += synapse0x2ab4a20();
   input += synapse0x2ab4a60();
   input += synapse0x2ab4aa0();
   input += synapse0x2ab4ae0();
   input += synapse0x2ab4b20();
   input += synapse0x2ab4b60();
   input += synapse0x2ab4ba0();
   input += synapse0x2ab4630();
   input += synapse0x2ab4670();
   input += synapse0x2ab4cf0();
   input += synapse0x2ab4d30();
   input += synapse0x2ab4d70();
   input += synapse0x2ab4db0();
   input += synapse0x2ab4df0();
   input += synapse0x2ab4e30();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2ab44a0() {
   double input = input0x2ab44a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2ab4e70() {
   double input = 1.85535;
   input += synapse0x2ab51b0();
   input += synapse0x2ab51f0();
   input += synapse0x2ab5230();
   input += synapse0x2ab5270();
   input += synapse0x2ab52b0();
   input += synapse0x2ab52f0();
   input += synapse0x2ab5330();
   input += synapse0x2ab5370();
   input += synapse0x2ab53b0();
   input += synapse0x2ab53f0();
   input += synapse0x2ab5430();
   input += synapse0x2ab5470();
   input += synapse0x2ab54b0();
   input += synapse0x2ab54f0();
   input += synapse0x2ab5530();
   input += synapse0x2ab5570();
   input += synapse0x2ab5000();
   input += synapse0x2ab5040();
   input += synapse0x2ab56c0();
   input += synapse0x2ab5700();
   input += synapse0x2ab5740();
   input += synapse0x2ab5780();
   input += synapse0x2ab57c0();
   input += synapse0x2ab5800();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2ab4e70() {
   double input = input0x2ab4e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2ab5840() {
   double input = -0.0323303;
   input += synapse0x2ab5b80();
   input += synapse0x2ab5bc0();
   input += synapse0x2ab5c00();
   input += synapse0x2ab5c40();
   input += synapse0x2ab5c80();
   input += synapse0x2ab5cc0();
   input += synapse0x2ab5d00();
   input += synapse0x2ab5d40();
   input += synapse0x2ab5d80();
   input += synapse0x2ab5dc0();
   input += synapse0x2ab5e00();
   input += synapse0x2ab5e40();
   input += synapse0x2ab5e80();
   input += synapse0x2ab5ec0();
   input += synapse0x2ab5f00();
   input += synapse0x2ab5f40();
   input += synapse0x2ab59d0();
   input += synapse0x2ab5a10();
   input += synapse0x2ab6090();
   input += synapse0x2ab60d0();
   input += synapse0x2ab6110();
   input += synapse0x2ab6150();
   input += synapse0x2ab6190();
   input += synapse0x2ab61d0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2ab5840() {
   double input = input0x2ab5840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2ab6210() {
   double input = -1.55649;
   input += synapse0x2ab6550();
   input += synapse0x2ab6590();
   input += synapse0x2ab65d0();
   input += synapse0x2ab6610();
   input += synapse0x2ab6650();
   input += synapse0x2ab6690();
   input += synapse0x2ab66d0();
   input += synapse0x2ab6710();
   input += synapse0x2ab6750();
   input += synapse0x2ab6790();
   input += synapse0x2ab67d0();
   input += synapse0x2ab6810();
   input += synapse0x2ab6850();
   input += synapse0x2ab6890();
   input += synapse0x2ab68d0();
   input += synapse0x2ab6910();
   input += synapse0x2ab63a0();
   input += synapse0x2ab63e0();
   input += synapse0x2ab6a60();
   input += synapse0x2ab6aa0();
   input += synapse0x2ab6ae0();
   input += synapse0x2ab6b20();
   input += synapse0x2ab6b60();
   input += synapse0x2ab6ba0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2ab6210() {
   double input = input0x2ab6210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2ab6be0() {
   double input = 0.00760341;
   input += synapse0x2ab6f20();
   input += synapse0x2aab4f0();
   input += synapse0x2aab530();
   input += synapse0x2aab570();
   input += synapse0x2aab7c0();
   input += synapse0x2aab800();
   input += synapse0x2aab840();
   input += synapse0x2aaba90();
   input += synapse0x2aabad0();
   input += synapse0x2aabd20();
   input += synapse0x2aabd60();
   input += synapse0x2aabda0();
   input += synapse0x2aabff0();
   input += synapse0x2aac030();
   input += synapse0x2aac280();
   input += synapse0x2aac2c0();
   input += synapse0x2ab6d70();
   input += synapse0x2ab6db0();
   input += synapse0x2aac410();
   input += synapse0x2aac920();
   input += synapse0x2aac960();
   input += synapse0x2aac9a0();
   input += synapse0x2aacbf0();
   input += synapse0x2aacc30();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2ab6be0() {
   double input = input0x2ab6be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aacc70() {
   double input = -0.243321;
   input += synapse0x2aac4e0();
   input += synapse0x2aac520();
   input += synapse0x2aac560();
   input += synapse0x2aac5a0();
   input += synapse0x2aacf20();
   input += synapse0x2ab9270();
   input += synapse0x2ab92b0();
   input += synapse0x2ab92f0();
   input += synapse0x2ab9330();
   input += synapse0x2ab9370();
   input += synapse0x2ab93b0();
   input += synapse0x2ab93f0();
   input += synapse0x2ab9430();
   input += synapse0x2ab9470();
   input += synapse0x2ab94b0();
   input += synapse0x2ab94f0();
   input += synapse0x2aace00();
   input += synapse0x2aace40();
   input += synapse0x2ab9640();
   input += synapse0x2ab9680();
   input += synapse0x2ab96c0();
   input += synapse0x2ab9700();
   input += synapse0x2ab9740();
   input += synapse0x2ab9780();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aacc70() {
   double input = input0x2aacc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2ab97c0() {
   double input = 0.325699;
   input += synapse0x2ab9b00();
   input += synapse0x2ab9b40();
   input += synapse0x2ab9b80();
   input += synapse0x2ab9bc0();
   input += synapse0x2ab9c00();
   input += synapse0x2ab9c40();
   input += synapse0x2ab9c80();
   input += synapse0x2ab9cc0();
   input += synapse0x2ab9d00();
   input += synapse0x2ab9d40();
   input += synapse0x2ab9d80();
   input += synapse0x2ab9dc0();
   input += synapse0x2ab9e00();
   input += synapse0x2ab9e40();
   input += synapse0x2ab9e80();
   input += synapse0x2ab9ec0();
   input += synapse0x2ab9950();
   input += synapse0x2ab9990();
   input += synapse0x2aba010();
   input += synapse0x2aba050();
   input += synapse0x2aba090();
   input += synapse0x2aba0d0();
   input += synapse0x2aba110();
   input += synapse0x2aba150();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2ab97c0() {
   double input = input0x2ab97c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2aba190() {
   double input = 0.601501;
   input += synapse0x2aba4d0();
   input += synapse0x2aba510();
   input += synapse0x2aba550();
   input += synapse0x2aba590();
   input += synapse0x2aba5d0();
   input += synapse0x2aba610();
   input += synapse0x2aba650();
   input += synapse0x2aba690();
   input += synapse0x2aba6d0();
   input += synapse0x2aba710();
   input += synapse0x2aba750();
   input += synapse0x2aba790();
   input += synapse0x2aba7d0();
   input += synapse0x2aba810();
   input += synapse0x2aba850();
   input += synapse0x2aba890();
   input += synapse0x2aba320();
   input += synapse0x2aba360();
   input += synapse0x2aba9e0();
   input += synapse0x2abaa20();
   input += synapse0x2abaa60();
   input += synapse0x2abaaa0();
   input += synapse0x2abaae0();
   input += synapse0x2abab20();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2aba190() {
   double input = input0x2aba190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2abab60() {
   double input = -2.43933;
   input += synapse0x2abaea0();
   input += synapse0x2abaee0();
   input += synapse0x2abaf20();
   input += synapse0x2abaf60();
   input += synapse0x2abafa0();
   input += synapse0x2abafe0();
   input += synapse0x2abb020();
   input += synapse0x2abb060();
   input += synapse0x2abb0a0();
   input += synapse0x2abb0e0();
   input += synapse0x2abb120();
   input += synapse0x2abb160();
   input += synapse0x2abb1a0();
   input += synapse0x2abb1e0();
   input += synapse0x2abb220();
   input += synapse0x2abb260();
   input += synapse0x2abacf0();
   input += synapse0x2abad30();
   input += synapse0x2abb3b0();
   input += synapse0x2abb3f0();
   input += synapse0x2abb430();
   input += synapse0x2abb470();
   input += synapse0x2abb4b0();
   input += synapse0x2abb4f0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2abab60() {
   double input = input0x2abab60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2abb530() {
   double input = 1.7252;
   input += synapse0x2abb870();
   input += synapse0x2abb8b0();
   input += synapse0x2abb8f0();
   input += synapse0x2abb930();
   input += synapse0x2abb970();
   input += synapse0x2abb9b0();
   input += synapse0x2abb9f0();
   input += synapse0x2abba30();
   input += synapse0x2abba70();
   input += synapse0x2abbab0();
   input += synapse0x2abbaf0();
   input += synapse0x2abbb30();
   input += synapse0x2abbb70();
   input += synapse0x2abbbb0();
   input += synapse0x2abbbf0();
   input += synapse0x2abbc30();
   input += synapse0x2abb6c0();
   input += synapse0x2abb700();
   input += synapse0x2abbd80();
   input += synapse0x2abbdc0();
   input += synapse0x2abbe00();
   input += synapse0x2abbe40();
   input += synapse0x2abbe80();
   input += synapse0x2abbec0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2abb530() {
   double input = input0x2abb530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2abbf00() {
   double input = 0.0585576;
   input += synapse0x2abc240();
   input += synapse0x2abc280();
   input += synapse0x2abc2c0();
   input += synapse0x2abc300();
   input += synapse0x2abc340();
   input += synapse0x2abc380();
   input += synapse0x2abc3c0();
   input += synapse0x2abc400();
   input += synapse0x2abc440();
   input += synapse0x2abc480();
   input += synapse0x2abc4c0();
   input += synapse0x2abc500();
   input += synapse0x2abc540();
   input += synapse0x2abc580();
   input += synapse0x2abc5c0();
   input += synapse0x2abc600();
   input += synapse0x2abc090();
   input += synapse0x2abc0d0();
   input += synapse0x2abc750();
   input += synapse0x2abc790();
   input += synapse0x2abc7d0();
   input += synapse0x2abc810();
   input += synapse0x2abc850();
   input += synapse0x2abc890();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2abbf00() {
   double input = input0x2abbf00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2abc8d0() {
   double input = -0.910281;
   input += synapse0x2abcc10();
   input += synapse0x2abcc50();
   input += synapse0x2abcc90();
   input += synapse0x2abccd0();
   input += synapse0x2abcd10();
   input += synapse0x2abcd50();
   input += synapse0x2abcd90();
   input += synapse0x2abcdd0();
   input += synapse0x2abce10();
   input += synapse0x2abce50();
   input += synapse0x2abce90();
   input += synapse0x2abced0();
   input += synapse0x2abcf10();
   input += synapse0x2abcf50();
   input += synapse0x2abcf90();
   input += synapse0x2abcfd0();
   input += synapse0x2abca60();
   input += synapse0x2abcaa0();
   input += synapse0x2abd120();
   input += synapse0x2abd160();
   input += synapse0x2abd1a0();
   input += synapse0x2abd1e0();
   input += synapse0x2abd220();
   input += synapse0x2abd260();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2abc8d0() {
   double input = input0x2abc8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2abd2a0() {
   double input = 0.341518;
   input += synapse0x2abd5e0();
   input += synapse0x2abd620();
   input += synapse0x2abd660();
   input += synapse0x2abd6a0();
   input += synapse0x2abd6e0();
   input += synapse0x2abd720();
   input += synapse0x2abd760();
   input += synapse0x2abd7a0();
   input += synapse0x2abd7e0();
   input += synapse0x2abd820();
   input += synapse0x2abd860();
   input += synapse0x2abd8a0();
   input += synapse0x2abd8e0();
   input += synapse0x2abd920();
   input += synapse0x2abd960();
   input += synapse0x2abd9a0();
   input += synapse0x2abd430();
   input += synapse0x2abd470();
   input += synapse0x2abdaf0();
   input += synapse0x2abdb30();
   input += synapse0x2abdb70();
   input += synapse0x2abdbb0();
   input += synapse0x2abdbf0();
   input += synapse0x2abdc30();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2abd2a0() {
   double input = input0x2abd2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2abdc70() {
   double input = -2.45484;
   input += synapse0x2aa66e0();
   input += synapse0x2aa6720();
   input += synapse0x2aa6760();
   input += synapse0x2aa67a0();
   input += synapse0x2aa67e0();
   input += synapse0x2aa6820();
   input += synapse0x2aa6860();
   input += synapse0x2aa68a0();
   input += synapse0x2abe3c0();
   input += synapse0x2abe400();
   input += synapse0x2abe440();
   input += synapse0x2abe480();
   input += synapse0x2abe4c0();
   input += synapse0x2abe500();
   input += synapse0x2abe540();
   input += synapse0x2abe580();
   input += synapse0x2abde00();
   input += synapse0x2abde40();
   input += synapse0x2abe6d0();
   input += synapse0x2abe710();
   input += synapse0x2abe750();
   input += synapse0x2abe790();
   input += synapse0x2abe7d0();
   input += synapse0x2abe810();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2abdc70() {
   double input = input0x2abdc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2abe850() {
   double input = 0.432385;
   input += synapse0x2abeb90();
   input += synapse0x2abebd0();
   input += synapse0x2abec10();
   input += synapse0x2abec50();
   input += synapse0x2abec90();
   input += synapse0x2abecd0();
   input += synapse0x2abed10();
   input += synapse0x2abed50();
   input += synapse0x2abed90();
   input += synapse0x2abedd0();
   input += synapse0x2abee10();
   input += synapse0x2abee50();
   input += synapse0x2abee90();
   input += synapse0x2abeed0();
   input += synapse0x2abef10();
   input += synapse0x2abef50();
   input += synapse0x2abe9e0();
   input += synapse0x2abea20();
   input += synapse0x2abf0a0();
   input += synapse0x2abf0e0();
   input += synapse0x2abf120();
   input += synapse0x2abf160();
   input += synapse0x2abf1a0();
   input += synapse0x2abf1e0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2abe850() {
   double input = input0x2abe850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2abf220() {
   double input = -1.39558;
   input += synapse0x2abf560();
   input += synapse0x2abf5a0();
   input += synapse0x2abf5e0();
   input += synapse0x2abf620();
   input += synapse0x2abf660();
   input += synapse0x2abf6a0();
   input += synapse0x2abf6e0();
   input += synapse0x2abf720();
   input += synapse0x2abf760();
   input += synapse0x2abf7a0();
   input += synapse0x2abf7e0();
   input += synapse0x2abf820();
   input += synapse0x2abf860();
   input += synapse0x2abf8a0();
   input += synapse0x2abf8e0();
   input += synapse0x2abf920();
   input += synapse0x2abf3b0();
   input += synapse0x2abf3f0();
   input += synapse0x2aaff20();
   input += synapse0x2aaff60();
   input += synapse0x2aaffa0();
   input += synapse0x2aaffe0();
   input += synapse0x2ab0020();
   input += synapse0x2ab0060();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2abf220() {
   double input = input0x2abf220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2ab00a0() {
   double input = 0.304534;
   input += synapse0x2ab03e0();
   input += synapse0x2ab0420();
   input += synapse0x2ab0460();
   input += synapse0x2ab04a0();
   input += synapse0x2ab04e0();
   input += synapse0x2ab0520();
   input += synapse0x2ab0560();
   input += synapse0x2ab05a0();
   input += synapse0x2ab05e0();
   input += synapse0x2ab0620();
   input += synapse0x2ab0660();
   input += synapse0x2ab06a0();
   input += synapse0x2ab06e0();
   input += synapse0x2ab0720();
   input += synapse0x2ab0760();
   input += synapse0x2ab07a0();
   input += synapse0x2ab0230();
   input += synapse0x2ab0270();
   input += synapse0x2ab08f0();
   input += synapse0x2ab0930();
   input += synapse0x2ab0970();
   input += synapse0x2ab09b0();
   input += synapse0x2ab09f0();
   input += synapse0x2ab0a30();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2ab00a0() {
   double input = input0x2ab00a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2ab0a70() {
   double input = -0.286334;
   input += synapse0x2ab0db0();
   input += synapse0x2ab0df0();
   input += synapse0x2ab0e30();
   input += synapse0x2ab0e70();
   input += synapse0x2ab0eb0();
   input += synapse0x2ab0ef0();
   input += synapse0x2ab0f30();
   input += synapse0x2ab0f70();
   input += synapse0x2ab0fb0();
   input += synapse0x2ab0ff0();
   input += synapse0x2ab1030();
   input += synapse0x2ab1070();
   input += synapse0x2ab10b0();
   input += synapse0x2ab10f0();
   input += synapse0x2ab1130();
   input += synapse0x2ab1170();
   input += synapse0x2ab0c00();
   input += synapse0x2ab0c40();
   input += synapse0x2ab12c0();
   input += synapse0x2ab1300();
   input += synapse0x2ab1340();
   input += synapse0x2ab1380();
   input += synapse0x2ab13c0();
   input += synapse0x2ab1400();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2ab0a70() {
   double input = input0x2ab0a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2ab1440() {
   double input = 0.545341;
   input += synapse0x2ab1780();
   input += synapse0x2ab17c0();
   input += synapse0x2ab1800();
   input += synapse0x2ab1840();
   input += synapse0x2ab1880();
   input += synapse0x2ab18c0();
   input += synapse0x2ab1900();
   input += synapse0x2ab1940();
   input += synapse0x2ab1980();
   input += synapse0x2ab19c0();
   input += synapse0x2ab1a00();
   input += synapse0x2ab1a40();
   input += synapse0x2ab1a80();
   input += synapse0x2ab1ac0();
   input += synapse0x2ab1b00();
   input += synapse0x2ab1b40();
   input += synapse0x2ab15d0();
   input += synapse0x2ab1610();
   input += synapse0x2ab1c90();
   input += synapse0x2ab1cd0();
   input += synapse0x2ab1d10();
   input += synapse0x2ab1d50();
   input += synapse0x2ab1d90();
   input += synapse0x2ab1dd0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2ab1440() {
   double input = input0x2ab1440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2ac3a80() {
   double input = 1.27471;
   input += synapse0x2ac3ca0();
   input += synapse0x2ac3ce0();
   input += synapse0x2ac3d20();
   input += synapse0x2ac3d60();
   input += synapse0x2ac3da0();
   input += synapse0x2ac3de0();
   input += synapse0x2ac3e20();
   input += synapse0x2ac3e60();
   input += synapse0x2ac3ea0();
   input += synapse0x2ac3ee0();
   input += synapse0x2ac3f20();
   input += synapse0x2ac3f60();
   input += synapse0x2ac3fa0();
   input += synapse0x2ac3fe0();
   input += synapse0x2ac4020();
   input += synapse0x2ac4060();
   input += synapse0x2ab1e10();
   input += synapse0x2ab1e50();
   input += synapse0x2ac41b0();
   input += synapse0x2ac41f0();
   input += synapse0x2ac4230();
   input += synapse0x2ac4270();
   input += synapse0x2ac42b0();
   input += synapse0x2ac42f0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2ac3a80() {
   double input = input0x2ac3a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2ac4330() {
   double input = -0.408288;
   input += synapse0x2ac4670();
   input += synapse0x2ac46b0();
   input += synapse0x2ac46f0();
   input += synapse0x2ac4730();
   input += synapse0x2ac4770();
   input += synapse0x2ac47b0();
   input += synapse0x2ac47f0();
   input += synapse0x2ac4830();
   input += synapse0x2ac4870();
   input += synapse0x2ac48b0();
   input += synapse0x2ac48f0();
   input += synapse0x2ac4930();
   input += synapse0x2ac4970();
   input += synapse0x2ac49b0();
   input += synapse0x2ac49f0();
   input += synapse0x2ac4a30();
   input += synapse0x2ac44c0();
   input += synapse0x2ac4500();
   input += synapse0x2ac4b80();
   input += synapse0x2ac4bc0();
   input += synapse0x2ac4c00();
   input += synapse0x2ac4c40();
   input += synapse0x2ac4c80();
   input += synapse0x2ac4cc0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2ac4330() {
   double input = input0x2ac4330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2ac4d00() {
   double input = -0.576777;
   input += synapse0x2ac5040();
   input += synapse0x2ac5080();
   input += synapse0x2ac50c0();
   input += synapse0x2ac5100();
   input += synapse0x2ac5140();
   input += synapse0x2ac5180();
   input += synapse0x2ac51c0();
   input += synapse0x2ac5200();
   input += synapse0x2ac5240();
   input += synapse0x2ac5280();
   input += synapse0x2ac52c0();
   input += synapse0x2ac5300();
   input += synapse0x2ac5340();
   input += synapse0x2ac5380();
   input += synapse0x2ac53c0();
   input += synapse0x2ac5400();
   input += synapse0x2ac4e90();
   input += synapse0x2ac4ed0();
   input += synapse0x2ac5550();
   input += synapse0x2ac5590();
   input += synapse0x2ac55d0();
   input += synapse0x2ac5610();
   input += synapse0x2ac5650();
   input += synapse0x2ac5690();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2ac4d00() {
   double input = input0x2ac4d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2ac56d0() {
   double input = -0.6809;
   input += synapse0x2ac5a10();
   input += synapse0x2ac5a50();
   input += synapse0x2ac5a90();
   input += synapse0x2ac5ad0();
   input += synapse0x2ac5b10();
   input += synapse0x2ac5b50();
   input += synapse0x2ac5b90();
   input += synapse0x2ac5bd0();
   input += synapse0x2ac5c10();
   input += synapse0x2ac5c50();
   input += synapse0x2ac5c90();
   input += synapse0x2ac5cd0();
   input += synapse0x2ac5d10();
   input += synapse0x2ac5d50();
   input += synapse0x2ac5d90();
   input += synapse0x2ac5dd0();
   input += synapse0x2ac5860();
   input += synapse0x2ac58a0();
   input += synapse0x2ac5f20();
   input += synapse0x2ac5f60();
   input += synapse0x2ac5fa0();
   input += synapse0x2ac5fe0();
   input += synapse0x2ac6020();
   input += synapse0x2ac6060();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2ac56d0() {
   double input = input0x2ac56d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2acc8d0() {
   double input = -0.184303;
   input += synapse0x2865e40();
   input += synapse0x2865e80();
   input += synapse0x2aa2a10();
   input += synapse0x2aa2a50();
   input += synapse0x2aa44e0();
   input += synapse0x2aa4520();
   input += synapse0x2aa52b0();
   input += synapse0x2aa52f0();
   input += synapse0x2aa5c80();
   input += synapse0x2aa5cc0();
   input += synapse0x2aa6650();
   input += synapse0x2aa6690();
   input += synapse0x2aa7130();
   input += synapse0x2aa7170();
   input += synapse0x2aa7b00();
   input += synapse0x2aa7b40();
   input += synapse0x2aa4be0();
   input += synapse0x2aa4c20();
   input += synapse0x2aa96b0();
   input += synapse0x2aa96f0();
   input += synapse0x2aaa080();
   input += synapse0x2aaa0c0();
   input += synapse0x2aaaa50();
   input += synapse0x2aaaa90();
   input += synapse0x2aab420();
   input += synapse0x2aab460();
   input += synapse0x2a9e4b0();
   input += synapse0x2a9e4f0();
   input += synapse0x2aad510();
   input += synapse0x2aad550();
   input += synapse0x2aadee0();
   input += synapse0x2aadf20();
   input += synapse0x2aae8b0();
   input += synapse0x2aae8f0();
   input += synapse0x2aaf280();
   input += synapse0x2aaf2c0();
   input += synapse0x2aafc50();
   input += synapse0x2aafc90();
   input += synapse0x2aa87a0();
   input += synapse0x2aa87e0();
   input += synapse0x2ab2050();
   input += synapse0x2ab2090();
   input += synapse0x2ab29e0();
   input += synapse0x2ab2a20();
   input += synapse0x2ab33b0();
   input += synapse0x2ab33f0();
   input += synapse0x2ab3d80();
   input += synapse0x2ab3dc0();
   input += synapse0x2ab4750();
   input += synapse0x2ab4790();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2acc8d0() {
   double input = input0x2acc8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2accc70() {
   double input = -0.238476;
   input += synapse0x2ab6e90();
   input += synapse0x2ab6ed0();
   input += synapse0x2aac450();
   input += synapse0x2aac490();
   input += synapse0x2ab9a70();
   input += synapse0x2ab9ab0();
   input += synapse0x2aba440();
   input += synapse0x2aba480();
   input += synapse0x2abae10();
   input += synapse0x2abae50();
   input += synapse0x2abb7e0();
   input += synapse0x2abb820();
   input += synapse0x2abc1b0();
   input += synapse0x2abc1f0();
   input += synapse0x2abcb80();
   input += synapse0x2abcbc0();
   input += synapse0x2abd550();
   input += synapse0x2abd590();
   input += synapse0x2abdf20();
   input += synapse0x2abdf60();
   input += synapse0x2abeb00();
   input += synapse0x2abeb40();
   input += synapse0x2abf4d0();
   input += synapse0x2abf510();
   input += synapse0x2ab0350();
   input += synapse0x2ab0390();
   input += synapse0x2ab0d20();
   input += synapse0x2ab0d60();
   input += synapse0x2ab16f0();
   input += synapse0x2ab1730();
   input += synapse0x2ac3c10();
   input += synapse0x2ac3c50();
   input += synapse0x2ac45e0();
   input += synapse0x2ac4620();
   input += synapse0x2ac4fb0();
   input += synapse0x2ac4ff0();
   input += synapse0x2ac5980();
   input += synapse0x2ac59c0();
   input += synapse0x2aa0910();
   input += synapse0x2aa0950();
   input += synapse0x2ab5120();
   input += synapse0x2ab5160();
   input += synapse0x2ac60a0();
   input += synapse0x2ac60e0();
   input += synapse0x2ac6120();
   input += synapse0x2ac6160();
   input += synapse0x2acd010();
   input += synapse0x2acd050();
   input += synapse0x2acd090();
   input += synapse0x2acd0d0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2accc70() {
   double input = input0x2accc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2acd110() {
   double input = -0.148129;
   input += synapse0x2acd450();
   input += synapse0x2acd490();
   input += synapse0x2acd4d0();
   input += synapse0x2acd510();
   input += synapse0x2acd550();
   input += synapse0x2acd590();
   input += synapse0x2acd5d0();
   input += synapse0x2acd610();
   input += synapse0x2acd650();
   input += synapse0x2acd690();
   input += synapse0x2acd6d0();
   input += synapse0x2acd710();
   input += synapse0x2acd750();
   input += synapse0x2acd790();
   input += synapse0x2acd7d0();
   input += synapse0x2acd810();
   input += synapse0x2acd2a0();
   input += synapse0x2acd2e0();
   input += synapse0x2acd960();
   input += synapse0x2acd9a0();
   input += synapse0x2acd9e0();
   input += synapse0x2acda20();
   input += synapse0x2acda60();
   input += synapse0x2acdaa0();
   input += synapse0x2acdae0();
   input += synapse0x2acdb20();
   input += synapse0x2acdb60();
   input += synapse0x2acdba0();
   input += synapse0x2acdbe0();
   input += synapse0x2acdc20();
   input += synapse0x2acdc60();
   input += synapse0x2acdca0();
   input += synapse0x2acd850();
   input += synapse0x2acd890();
   input += synapse0x2acd8d0();
   input += synapse0x2acd910();
   input += synapse0x2acdef0();
   input += synapse0x2acdf30();
   input += synapse0x2acdf70();
   input += synapse0x2acdfb0();
   input += synapse0x2acdff0();
   input += synapse0x2ace030();
   input += synapse0x2ace070();
   input += synapse0x2ace0b0();
   input += synapse0x2ace0f0();
   input += synapse0x2ace130();
   input += synapse0x2ace170();
   input += synapse0x2ace1b0();
   input += synapse0x2ace1f0();
   input += synapse0x2ace230();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2acd110() {
   double input = input0x2acd110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2ace270() {
   double input = -0.135224;
   input += synapse0x2ace5b0();
   input += synapse0x2ace5f0();
   input += synapse0x2ace630();
   input += synapse0x2ace670();
   input += synapse0x2ace6b0();
   input += synapse0x2ace6f0();
   input += synapse0x2ace730();
   input += synapse0x2ace770();
   input += synapse0x2ace7b0();
   input += synapse0x2ace7f0();
   input += synapse0x2ace830();
   input += synapse0x2ace870();
   input += synapse0x2ace8b0();
   input += synapse0x2ace8f0();
   input += synapse0x2ace930();
   input += synapse0x2ace970();
   input += synapse0x2ace400();
   input += synapse0x2ace440();
   input += synapse0x2aceac0();
   input += synapse0x2aceb00();
   input += synapse0x2aceb40();
   input += synapse0x2aceb80();
   input += synapse0x2acebc0();
   input += synapse0x2acec00();
   input += synapse0x2acec40();
   input += synapse0x2acec80();
   input += synapse0x2acecc0();
   input += synapse0x2aced00();
   input += synapse0x2aced40();
   input += synapse0x2aced80();
   input += synapse0x2acedc0();
   input += synapse0x2acee00();
   input += synapse0x2ace9b0();
   input += synapse0x2ace9f0();
   input += synapse0x2acea30();
   input += synapse0x2acea70();
   input += synapse0x2acf050();
   input += synapse0x2acf090();
   input += synapse0x2acf0d0();
   input += synapse0x2acf110();
   input += synapse0x2acf150();
   input += synapse0x2acf190();
   input += synapse0x2acf1d0();
   input += synapse0x2acf210();
   input += synapse0x2acf250();
   input += synapse0x2acf290();
   input += synapse0x2acf2d0();
   input += synapse0x2acf310();
   input += synapse0x2acf350();
   input += synapse0x2acf390();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2ace270() {
   double input = input0x2ace270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2acf3d0() {
   double input = -0.44962;
   input += synapse0x2acf710();
   input += synapse0x2acf750();
   input += synapse0x2acf790();
   input += synapse0x2acf7d0();
   input += synapse0x2acf810();
   input += synapse0x2acf850();
   input += synapse0x2acf890();
   input += synapse0x2acf8d0();
   input += synapse0x2acf910();
   input += synapse0x2acf950();
   input += synapse0x2acf990();
   input += synapse0x2acf9d0();
   input += synapse0x2acfa10();
   input += synapse0x2acfa50();
   input += synapse0x2acfa90();
   input += synapse0x2acfad0();
   input += synapse0x2acf560();
   input += synapse0x2acf5a0();
   input += synapse0x2acfc20();
   input += synapse0x2acfc60();
   input += synapse0x2acfca0();
   input += synapse0x2acfce0();
   input += synapse0x2acfd20();
   input += synapse0x2acfd60();
   input += synapse0x2acfda0();
   input += synapse0x2acfde0();
   input += synapse0x2acfe20();
   input += synapse0x2acfe60();
   input += synapse0x2acfea0();
   input += synapse0x2acfee0();
   input += synapse0x2acff20();
   input += synapse0x2acff60();
   input += synapse0x2acfb10();
   input += synapse0x2acfb50();
   input += synapse0x2acfb90();
   input += synapse0x2acfbd0();
   input += synapse0x2ad01b0();
   input += synapse0x2ad01f0();
   input += synapse0x2ad0230();
   input += synapse0x2ad0270();
   input += synapse0x2ad02b0();
   input += synapse0x2ad02f0();
   input += synapse0x2ad0330();
   input += synapse0x2ad0370();
   input += synapse0x2ad03b0();
   input += synapse0x2ad03f0();
   input += synapse0x2ad0430();
   input += synapse0x2ad0470();
   input += synapse0x2ad04b0();
   input += synapse0x2ad04f0();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2acf3d0() {
   double input = input0x2acf3d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiMinus2::input0x2ad0530() {
   double input = 4.44717;
   input += synapse0x2ad0750();
   input += synapse0x2ad0790();
   input += synapse0x2ad07d0();
   input += synapse0x2ad0810();
   input += synapse0x2ad0850();
   return input;
}

double NNfunction_ng_chiMinus2::neuron0x2ad0530() {
   double input = input0x2ad0530();
   return (input * 1)+0;
}

double NNfunction_ng_chiMinus2::synapse0x2aa09a0() {
   return (neuron0x2a9b5a0()*-0.0016716);
}

double NNfunction_ng_chiMinus2::synapse0x2aa09e0() {
   return (neuron0x2a9b850()*0.005768);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0a20() {
   return (neuron0x2a9bb90()*-0.0196867);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0a60() {
   return (neuron0x2a9bed0()*11.0874);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0aa0() {
   return (neuron0x2a9c210()*-0.0050129);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0ae0() {
   return (neuron0x2a9c550()*-0.00904757);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0b20() {
   return (neuron0x2a9c890()*0.00785909);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0b60() {
   return (neuron0x2a9cbd0()*-0.0128236);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0ba0() {
   return (neuron0x2a9cf10()*0.0109868);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0be0() {
   return (neuron0x2a9d250()*0.0106621);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0c20() {
   return (neuron0x2a9d590()*0.0221173);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0c60() {
   return (neuron0x2a9d8d0()*-0.0372631);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0ca0() {
   return (neuron0x2a9dc10()*0.0136161);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0ce0() {
   return (neuron0x2a9df50()*0.00078971);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0d20() {
   return (neuron0x2a9e290()*0.000468756);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0d60() {
   return (neuron0x2a9e5d0()*-0.016495);
}

double NNfunction_ng_chiMinus2::synapse0x2aa07f0() {
   return (neuron0x2a9e910()*0.0109857);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0830() {
   return (neuron0x2a9ee70()*0.0101225);
}

double NNfunction_ng_chiMinus2::synapse0x2857900() {
   return (neuron0x2a9f1b0()*0.0127384);
}

double NNfunction_ng_chiMinus2::synapse0x2857940() {
   return (neuron0x2a9f4f0()*0.00656251);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0da0() {
   return (neuron0x2a9f830()*-0.00515476);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0de0() {
   return (neuron0x2a9fb70()*0.0017034);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0e20() {
   return (neuron0x2a9feb0()*-0.00245288);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0e60() {
   return (neuron0x2aa01f0()*0.0375167);
}

double NNfunction_ng_chiMinus2::synapse0x2aa11e0() {
   return (neuron0x2a9b5a0()*0.0379486);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1220() {
   return (neuron0x2a9b850()*0.0385244);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1260() {
   return (neuron0x2a9bb90()*-0.193245);
}

double NNfunction_ng_chiMinus2::synapse0x2aa12a0() {
   return (neuron0x2a9bed0()*-1.22079);
}

double NNfunction_ng_chiMinus2::synapse0x2aa12e0() {
   return (neuron0x2a9c210()*-0.10571);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1320() {
   return (neuron0x2a9c550()*0.0480619);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1360() {
   return (neuron0x2a9c890()*0.0169867);
}

double NNfunction_ng_chiMinus2::synapse0x2aa13a0() {
   return (neuron0x2a9cbd0()*0.131828);
}

double NNfunction_ng_chiMinus2::synapse0x2aa13e0() {
   return (neuron0x2a9cf10()*0.0293931);
}

double NNfunction_ng_chiMinus2::synapse0x2857750() {
   return (neuron0x2a9d250()*-0.022058);
}

double NNfunction_ng_chiMinus2::synapse0x2857790() {
   return (neuron0x2a9d590()*0.0520849);
}

double NNfunction_ng_chiMinus2::synapse0x28577d0() {
   return (neuron0x2a9d8d0()*0.541436);
}

double NNfunction_ng_chiMinus2::synapse0x2857810() {
   return (neuron0x2a9dc10()*-0.492167);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1630() {
   return (neuron0x2a9df50()*0.0503025);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1670() {
   return (neuron0x2a9e290()*0.08989);
}

double NNfunction_ng_chiMinus2::synapse0x2aa16b0() {
   return (neuron0x2a9e5d0()*0.177071);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1030() {
   return (neuron0x2a9e910()*0.0847033);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1070() {
   return (neuron0x2a9ee70()*0.0778696);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1800() {
   return (neuron0x2a9f1b0()*0.0918187);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1840() {
   return (neuron0x2a9f4f0()*-0.101339);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1880() {
   return (neuron0x2a9f830()*-0.0346698);
}

double NNfunction_ng_chiMinus2::synapse0x2aa18c0() {
   return (neuron0x2a9fb70()*-0.0639998);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1900() {
   return (neuron0x2a9feb0()*-0.0254876);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1940() {
   return (neuron0x2aa01f0()*-0.105726);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1cc0() {
   return (neuron0x2a9b5a0()*0.367186);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1d00() {
   return (neuron0x2a9b850()*0.318339);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1d40() {
   return (neuron0x2a9bb90()*0.431737);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1d80() {
   return (neuron0x2a9bed0()*0.478511);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1dc0() {
   return (neuron0x2a9c210()*-0.355583);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1e00() {
   return (neuron0x2a9c550()*0.345352);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1e40() {
   return (neuron0x2a9c890()*-0.219546);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1e80() {
   return (neuron0x2a9cbd0()*-0.217178);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1ec0() {
   return (neuron0x2a9cf10()*-0.351691);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1f00() {
   return (neuron0x2a9d250()*0.00785762);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1f40() {
   return (neuron0x2a9d590()*-0.382387);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1f80() {
   return (neuron0x2a9d8d0()*0.566972);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1fc0() {
   return (neuron0x2a9dc10()*-0.0560336);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2000() {
   return (neuron0x2a9df50()*-0.256484);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2040() {
   return (neuron0x2a9e290()*-0.0990359);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2080() {
   return (neuron0x2a9e5d0()*-0.340953);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1b10() {
   return (neuron0x2a9e910()*0.137868);
}

double NNfunction_ng_chiMinus2::synapse0x2aa1b50() {
   return (neuron0x2a9ee70()*-0.506778);
}

double NNfunction_ng_chiMinus2::synapse0x17cff10() {
   return (neuron0x2a9f1b0()*0.113176);
}

double NNfunction_ng_chiMinus2::synapse0x2865650() {
   return (neuron0x2a9f4f0()*0.184904);
}

double NNfunction_ng_chiMinus2::synapse0x2865690() {
   return (neuron0x2a9f830()*0.0839365);
}

double NNfunction_ng_chiMinus2::synapse0x2aa3fb0() {
   return (neuron0x2a9fb70()*0.56009);
}

double NNfunction_ng_chiMinus2::synapse0x2aa3ff0() {
   return (neuron0x2a9feb0()*-0.31933);
}

double NNfunction_ng_chiMinus2::synapse0x2a9b2e0() {
   return (neuron0x2aa01f0()*-0.320834);
}

double NNfunction_ng_chiMinus2::synapse0x2a9b3b0() {
   return (neuron0x2a9b5a0()*0.0102881);
}

double NNfunction_ng_chiMinus2::synapse0x2865ed0() {
   return (neuron0x2a9b850()*0.00637337);
}

double NNfunction_ng_chiMinus2::synapse0x2aa15b0() {
   return (neuron0x2a9bb90()*-0.214478);
}

double NNfunction_ng_chiMinus2::synapse0x2aa15f0() {
   return (neuron0x2a9bed0()*-2.37515);
}

double NNfunction_ng_chiMinus2::synapse0x2aa21d0() {
   return (neuron0x2a9c210()*-0.0226136);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2210() {
   return (neuron0x2a9c550()*-0.00455389);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2250() {
   return (neuron0x2a9c890()*0.00740621);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2290() {
   return (neuron0x2a9cbd0()*0.00215496);
}

double NNfunction_ng_chiMinus2::synapse0x2aa22d0() {
   return (neuron0x2a9cf10()*0.00692648);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2310() {
   return (neuron0x2a9d250()*-0.00189244);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2350() {
   return (neuron0x2a9d590()*0.00652811);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2390() {
   return (neuron0x2a9d8d0()*0.0281328);
}

double NNfunction_ng_chiMinus2::synapse0x2aa23d0() {
   return (neuron0x2a9dc10()*-0.0725037);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2410() {
   return (neuron0x2a9df50()*-0.00917381);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2450() {
   return (neuron0x2a9e290()*-0.0131349);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2490() {
   return (neuron0x2a9e5d0()*-0.0231162);
}

double NNfunction_ng_chiMinus2::synapse0x2a9b320() {
   return (neuron0x2a9e910()*0.00207141);
}

double NNfunction_ng_chiMinus2::synapse0x2a9b360() {
   return (neuron0x2a9ee70()*-0.0123783);
}

double NNfunction_ng_chiMinus2::synapse0x2aa25e0() {
   return (neuron0x2a9f1b0()*-0.013424);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2620() {
   return (neuron0x2a9f4f0()*-0.0123858);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2660() {
   return (neuron0x2a9f830()*-0.00122645);
}

double NNfunction_ng_chiMinus2::synapse0x2aa26a0() {
   return (neuron0x2a9fb70()*-0.00703194);
}

double NNfunction_ng_chiMinus2::synapse0x2aa26e0() {
   return (neuron0x2a9feb0()*0.00215381);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2720() {
   return (neuron0x2aa01f0()*-0.171937);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2aa0() {
   return (neuron0x2a9b5a0()*-0.0477136);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2ae0() {
   return (neuron0x2a9b850()*0.155868);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2b20() {
   return (neuron0x2a9bb90()*0.0597671);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2b60() {
   return (neuron0x2a9bed0()*1.03486);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2ba0() {
   return (neuron0x2a9c210()*0.0364249);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2be0() {
   return (neuron0x2a9c550()*-0.069539);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2c20() {
   return (neuron0x2a9c890()*0.183062);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2c60() {
   return (neuron0x2a9cbd0()*0.49863);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2ca0() {
   return (neuron0x2a9cf10()*-0.00749283);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2ce0() {
   return (neuron0x2a9d250()*-0.0647021);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2d20() {
   return (neuron0x2a9d590()*0.0838875);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2d60() {
   return (neuron0x2a9d8d0()*0.0394998);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2da0() {
   return (neuron0x2a9dc10()*0.161259);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2de0() {
   return (neuron0x2a9df50()*0.420132);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2e20() {
   return (neuron0x2a9e290()*-0.140838);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2e60() {
   return (neuron0x2a9e5d0()*0.348478);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2fb0() {
   return (neuron0x2a9e910()*0.492055);
}

double NNfunction_ng_chiMinus2::synapse0x2aa28f0() {
   return (neuron0x2a9ee70()*0.00408558);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2930() {
   return (neuron0x2a9f1b0()*-0.156367);
}

double NNfunction_ng_chiMinus2::synapse0x2aa40f0() {
   return (neuron0x2a9f4f0()*-0.475295);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4130() {
   return (neuron0x2a9f830()*-0.439844);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4170() {
   return (neuron0x2a9fb70()*-0.657195);
}

double NNfunction_ng_chiMinus2::synapse0x2aa41b0() {
   return (neuron0x2a9feb0()*-0.245232);
}

double NNfunction_ng_chiMinus2::synapse0x2aa41f0() {
   return (neuron0x2aa01f0()*0.2246);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4570() {
   return (neuron0x2a9b5a0()*0.232856);
}

double NNfunction_ng_chiMinus2::synapse0x2aa45b0() {
   return (neuron0x2a9b850()*0.348978);
}

double NNfunction_ng_chiMinus2::synapse0x2aa45f0() {
   return (neuron0x2a9bb90()*-0.836579);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4630() {
   return (neuron0x2a9bed0()*-0.0277537);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4670() {
   return (neuron0x2a9c210()*-0.703506);
}

double NNfunction_ng_chiMinus2::synapse0x2aa46b0() {
   return (neuron0x2a9c550()*-0.259429);
}

double NNfunction_ng_chiMinus2::synapse0x2aa46f0() {
   return (neuron0x2a9c890()*0.138863);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4730() {
   return (neuron0x2a9cbd0()*0.347096);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4770() {
   return (neuron0x2a9cf10()*0.451987);
}

double NNfunction_ng_chiMinus2::synapse0x28659a0() {
   return (neuron0x2a9d250()*0.403342);
}

double NNfunction_ng_chiMinus2::synapse0x28659e0() {
   return (neuron0x2a9d590()*-0.766659);
}

double NNfunction_ng_chiMinus2::synapse0x2865a20() {
   return (neuron0x2a9d8d0()*-0.642243);
}

double NNfunction_ng_chiMinus2::synapse0x2865a60() {
   return (neuron0x2a9dc10()*0.0497655);
}

double NNfunction_ng_chiMinus2::synapse0x2865aa0() {
   return (neuron0x2a9df50()*0.55238);
}

double NNfunction_ng_chiMinus2::synapse0x2865ae0() {
   return (neuron0x2a9e290()*-0.0141397);
}

double NNfunction_ng_chiMinus2::synapse0x2865b20() {
   return (neuron0x2a9e5d0()*0.0403526);
}

double NNfunction_ng_chiMinus2::synapse0x2aa43c0() {
   return (neuron0x2a9e910()*0.151938);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4400() {
   return (neuron0x2a9ee70()*-0.217084);
}

double NNfunction_ng_chiMinus2::synapse0x2865c70() {
   return (neuron0x2a9f1b0()*0.388115);
}

double NNfunction_ng_chiMinus2::synapse0x2865cb0() {
   return (neuron0x2a9f4f0()*-0.0877918);
}

double NNfunction_ng_chiMinus2::synapse0x2865cf0() {
   return (neuron0x2a9f830()*-0.739732);
}

double NNfunction_ng_chiMinus2::synapse0x2865d30() {
   return (neuron0x2a9fb70()*0.19525);
}

double NNfunction_ng_chiMinus2::synapse0x2865d70() {
   return (neuron0x2a9feb0()*0.344026);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4fc0() {
   return (neuron0x2aa01f0()*-0.14884);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5340() {
   return (neuron0x2a9b5a0()*0.0461981);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5380() {
   return (neuron0x2a9b850()*0.0165073);
}

double NNfunction_ng_chiMinus2::synapse0x2aa53c0() {
   return (neuron0x2a9bb90()*0.341038);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5400() {
   return (neuron0x2a9bed0()*0.0974926);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5440() {
   return (neuron0x2a9c210()*-3.10162e-05);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5480() {
   return (neuron0x2a9c550()*0.0357342);
}

double NNfunction_ng_chiMinus2::synapse0x2aa54c0() {
   return (neuron0x2a9c890()*-0.0102379);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5500() {
   return (neuron0x2a9cbd0()*-0.0656711);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5540() {
   return (neuron0x2a9cf10()*0.0254755);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5580() {
   return (neuron0x2a9d250()*0.0511699);
}

double NNfunction_ng_chiMinus2::synapse0x2aa55c0() {
   return (neuron0x2a9d590()*0.0526709);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5600() {
   return (neuron0x2a9d8d0()*0.422664);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5640() {
   return (neuron0x2a9dc10()*0.0148386);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5680() {
   return (neuron0x2a9df50()*0.034827);
}

double NNfunction_ng_chiMinus2::synapse0x2aa56c0() {
   return (neuron0x2a9e290()*0.117397);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5700() {
   return (neuron0x2a9e5d0()*0.0147331);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5190() {
   return (neuron0x2a9e910()*0.0263856);
}

double NNfunction_ng_chiMinus2::synapse0x2aa51d0() {
   return (neuron0x2a9ee70()*0.130739);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5850() {
   return (neuron0x2a9f1b0()*0.0608248);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5890() {
   return (neuron0x2a9f4f0()*0.0288364);
}

double NNfunction_ng_chiMinus2::synapse0x2aa58d0() {
   return (neuron0x2a9f830()*-0.0382283);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5910() {
   return (neuron0x2a9fb70()*-0.00441115);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5950() {
   return (neuron0x2a9feb0()*0.0153123);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5990() {
   return (neuron0x2aa01f0()*0.0519607);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5d10() {
   return (neuron0x2a9b5a0()*-0.00817773);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5d50() {
   return (neuron0x2a9b850()*-0.0467235);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5d90() {
   return (neuron0x2a9bb90()*-0.0749326);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5dd0() {
   return (neuron0x2a9bed0()*1.5693);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5e10() {
   return (neuron0x2a9c210()*0.00944483);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5e50() {
   return (neuron0x2a9c550()*0.058414);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5e90() {
   return (neuron0x2a9c890()*-0.0963109);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5ed0() {
   return (neuron0x2a9cbd0()*0.0718771);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5f10() {
   return (neuron0x2a9cf10()*0.00320892);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5f50() {
   return (neuron0x2a9d250()*-0.0382742);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5f90() {
   return (neuron0x2a9d590()*-0.022777);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5fd0() {
   return (neuron0x2a9d8d0()*0.8927);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6010() {
   return (neuron0x2a9dc10()*-0.558636);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6050() {
   return (neuron0x2a9df50()*0.0221179);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6090() {
   return (neuron0x2a9e290()*0.0208329);
}

double NNfunction_ng_chiMinus2::synapse0x2aa60d0() {
   return (neuron0x2a9e5d0()*0.0340445);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5b60() {
   return (neuron0x2a9e910()*-0.041442);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5ba0() {
   return (neuron0x2a9ee70()*-0.035731);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6220() {
   return (neuron0x2a9f1b0()*0.0256212);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6260() {
   return (neuron0x2a9f4f0()*0.0325011);
}

double NNfunction_ng_chiMinus2::synapse0x2aa62a0() {
   return (neuron0x2a9f830()*0.030132);
}

double NNfunction_ng_chiMinus2::synapse0x2aa62e0() {
   return (neuron0x2a9fb70()*-0.00740905);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6320() {
   return (neuron0x2a9feb0()*-0.00517717);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6360() {
   return (neuron0x2aa01f0()*-0.799742);
}

double NNfunction_ng_chiMinus2::synapse0x2a9ed60() {
   return (neuron0x2a9b5a0()*-0.00726212);
}

double NNfunction_ng_chiMinus2::synapse0x2a9eda0() {
   return (neuron0x2a9b850()*0.00436516);
}

double NNfunction_ng_chiMinus2::synapse0x2a9ede0() {
   return (neuron0x2a9bb90()*0.505767);
}

double NNfunction_ng_chiMinus2::synapse0x2a9ee20() {
   return (neuron0x2a9bed0()*-0.110536);
}

double NNfunction_ng_chiMinus2::synapse0x2aa68f0() {
   return (neuron0x2a9c210()*-0.00756705);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6930() {
   return (neuron0x2a9c550()*-0.0014716);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6970() {
   return (neuron0x2a9c890()*0.00758001);
}

double NNfunction_ng_chiMinus2::synapse0x2aa69b0() {
   return (neuron0x2a9cbd0()*-0.00801049);
}

double NNfunction_ng_chiMinus2::synapse0x2aa69f0() {
   return (neuron0x2a9cf10()*-0.00770371);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6a30() {
   return (neuron0x2a9d250()*-0.0124501);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6a70() {
   return (neuron0x2a9d590()*-0.00689486);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6ab0() {
   return (neuron0x2a9d8d0()*-0.0281055);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6af0() {
   return (neuron0x2a9dc10()*0.040871);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6b30() {
   return (neuron0x2a9df50()*0.00599301);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6b70() {
   return (neuron0x2a9e290()*0.00391883);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6bb0() {
   return (neuron0x2a9e5d0()*0.000745302);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6530() {
   return (neuron0x2a9e910()*-0.00984796);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6570() {
   return (neuron0x2a9ee70()*-0.00396126);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6d00() {
   return (neuron0x2a9f1b0()*0.00668331);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6d40() {
   return (neuron0x2a9f4f0()*-0.00692401);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6d80() {
   return (neuron0x2a9f830()*-0.0138193);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6dc0() {
   return (neuron0x2a9fb70()*-0.00382445);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6e00() {
   return (neuron0x2a9feb0()*-0.00231431);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6e40() {
   return (neuron0x2aa01f0()*0.797363);
}

double NNfunction_ng_chiMinus2::synapse0x2aa71c0() {
   return (neuron0x2a9b5a0()*-0.00339158);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7200() {
   return (neuron0x2a9b850()*-0.00337129);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7240() {
   return (neuron0x2a9bb90()*0.25817);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7280() {
   return (neuron0x2a9bed0()*-0.982689);
}

double NNfunction_ng_chiMinus2::synapse0x2aa72c0() {
   return (neuron0x2a9c210()*0.00682247);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7300() {
   return (neuron0x2a9c550()*-0.00467115);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7340() {
   return (neuron0x2a9c890()*-0.000428858);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7380() {
   return (neuron0x2a9cbd0()*-0.0156325);
}

double NNfunction_ng_chiMinus2::synapse0x2aa73c0() {
   return (neuron0x2a9cf10()*-0.01119);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7400() {
   return (neuron0x2a9d250()*-0.000874106);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7440() {
   return (neuron0x2a9d590()*-0.00805887);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7480() {
   return (neuron0x2a9d8d0()*-0.0660052);
}

double NNfunction_ng_chiMinus2::synapse0x2aa74c0() {
   return (neuron0x2a9dc10()*-0.0021492);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7500() {
   return (neuron0x2a9df50()*-0.0133734);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7540() {
   return (neuron0x2a9e290()*0.0348119);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7580() {
   return (neuron0x2a9e5d0()*0.00257244);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7010() {
   return (neuron0x2a9e910()*-0.0183411);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7050() {
   return (neuron0x2a9ee70()*0.0144542);
}

double NNfunction_ng_chiMinus2::synapse0x2aa76d0() {
   return (neuron0x2a9f1b0()*0.00873852);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7710() {
   return (neuron0x2a9f4f0()*0.00607132);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7750() {
   return (neuron0x2a9f830()*0.0128547);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7790() {
   return (neuron0x2a9fb70()*-0.00433415);
}

double NNfunction_ng_chiMinus2::synapse0x2aa77d0() {
   return (neuron0x2a9feb0()*0.00853858);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7810() {
   return (neuron0x2aa01f0()*-0.0696176);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7b90() {
   return (neuron0x2a9b5a0()*-0.0157516);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7bd0() {
   return (neuron0x2a9b850()*-0.0130646);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7c10() {
   return (neuron0x2a9bb90()*0.0648181);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7c50() {
   return (neuron0x2a9bed0()*-1.36971);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7c90() {
   return (neuron0x2a9c210()*0.004064);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7cd0() {
   return (neuron0x2a9c550()*-0.011972);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7d10() {
   return (neuron0x2a9c890()*-0.0258828);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7d50() {
   return (neuron0x2a9cbd0()*0.00388137);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7d90() {
   return (neuron0x2a9cf10()*0.00381779);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7dd0() {
   return (neuron0x2a9d250()*-0.0274064);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7e10() {
   return (neuron0x2a9d590()*0.00317232);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7e50() {
   return (neuron0x2a9d8d0()*2.1495);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7e90() {
   return (neuron0x2a9dc10()*-0.540623);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7ed0() {
   return (neuron0x2a9df50()*0.0468003);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7f10() {
   return (neuron0x2a9e290()*-0.0307939);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7f50() {
   return (neuron0x2a9e5d0()*0.0556108);
}

double NNfunction_ng_chiMinus2::synapse0x2aa79e0() {
   return (neuron0x2a9e910()*0.0033669);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7a20() {
   return (neuron0x2a9ee70()*-0.0865453);
}

double NNfunction_ng_chiMinus2::synapse0x2aa47b0() {
   return (neuron0x2a9f1b0()*-0.0267837);
}

double NNfunction_ng_chiMinus2::synapse0x2aa47f0() {
   return (neuron0x2a9f4f0()*0.0447817);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4830() {
   return (neuron0x2a9f830()*-0.000646357);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4870() {
   return (neuron0x2a9fb70()*0.0370435);
}

double NNfunction_ng_chiMinus2::synapse0x2aa48b0() {
   return (neuron0x2a9feb0()*-0.000852509);
}

double NNfunction_ng_chiMinus2::synapse0x2aa48f0() {
   return (neuron0x2aa01f0()*0.231256);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4c70() {
   return (neuron0x2a9b5a0()*-0.0160996);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4cb0() {
   return (neuron0x2a9b850()*0.0049859);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4cf0() {
   return (neuron0x2a9bb90()*-3.02456);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4d30() {
   return (neuron0x2a9bed0()*0.00405043);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4d70() {
   return (neuron0x2a9c210()*-0.0144554);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4db0() {
   return (neuron0x2a9c550()*-0.00549504);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4df0() {
   return (neuron0x2a9c890()*-0.00996592);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4e30() {
   return (neuron0x2a9cbd0()*-0.00393803);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4e70() {
   return (neuron0x2a9cf10()*0.00479616);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4eb0() {
   return (neuron0x2a9d250()*-0.0191575);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4ef0() {
   return (neuron0x2a9d590()*-0.0114331);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4f30() {
   return (neuron0x2a9d8d0()*0.0372607);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4f70() {
   return (neuron0x2a9dc10()*-0.0202484);
}

double NNfunction_ng_chiMinus2::synapse0x2aa90b0() {
   return (neuron0x2a9df50()*0.0101472);
}

double NNfunction_ng_chiMinus2::synapse0x2aa90f0() {
   return (neuron0x2a9e290()*0.00314184);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9130() {
   return (neuron0x2a9e5d0()*0.000985703);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4ac0() {
   return (neuron0x2a9e910()*0.0113635);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4b00() {
   return (neuron0x2a9ee70()*0.0066495);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9280() {
   return (neuron0x2a9f1b0()*-0.00586785);
}

double NNfunction_ng_chiMinus2::synapse0x2aa92c0() {
   return (neuron0x2a9f4f0()*0.00540567);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9300() {
   return (neuron0x2a9f830()*0.00452769);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9340() {
   return (neuron0x2a9fb70()*-0.00757459);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9380() {
   return (neuron0x2a9feb0()*-0.00325605);
}

double NNfunction_ng_chiMinus2::synapse0x2aa93c0() {
   return (neuron0x2aa01f0()*2.78152);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9740() {
   return (neuron0x2a9b5a0()*0.212287);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9780() {
   return (neuron0x2a9b850()*0.352885);
}

double NNfunction_ng_chiMinus2::synapse0x2aa97c0() {
   return (neuron0x2a9bb90()*-0.146363);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9800() {
   return (neuron0x2a9bed0()*-0.333739);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9840() {
   return (neuron0x2a9c210()*-0.094138);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9880() {
   return (neuron0x2a9c550()*0.282273);
}

double NNfunction_ng_chiMinus2::synapse0x2aa98c0() {
   return (neuron0x2a9c890()*-0.269644);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9900() {
   return (neuron0x2a9cbd0()*0.490302);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9940() {
   return (neuron0x2a9cf10()*0.243812);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9980() {
   return (neuron0x2a9d250()*0.353407);
}

double NNfunction_ng_chiMinus2::synapse0x2aa99c0() {
   return (neuron0x2a9d590()*0.237961);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9a00() {
   return (neuron0x2a9d8d0()*-0.382569);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9a40() {
   return (neuron0x2a9dc10()*0.112656);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9a80() {
   return (neuron0x2a9df50()*0.510779);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9ac0() {
   return (neuron0x2a9e290()*0.144907);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9b00() {
   return (neuron0x2a9e5d0()*0.318456);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9590() {
   return (neuron0x2a9e910()*-0.363112);
}

double NNfunction_ng_chiMinus2::synapse0x2aa95d0() {
   return (neuron0x2a9ee70()*0.0129154);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9c50() {
   return (neuron0x2a9f1b0()*0.549928);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9c90() {
   return (neuron0x2a9f4f0()*-0.322909);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9cd0() {
   return (neuron0x2a9f830()*-0.208479);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9d10() {
   return (neuron0x2a9fb70()*0.207321);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9d50() {
   return (neuron0x2a9feb0()*-0.17818);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9d90() {
   return (neuron0x2aa01f0()*0.138121);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa110() {
   return (neuron0x2a9b5a0()*0.0296426);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa150() {
   return (neuron0x2a9b850()*-0.0272995);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa190() {
   return (neuron0x2a9bb90()*-1.77465);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa1d0() {
   return (neuron0x2a9bed0()*2.56837);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa210() {
   return (neuron0x2a9c210()*-0.0586018);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa250() {
   return (neuron0x2a9c550()*0.0337856);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa290() {
   return (neuron0x2a9c890()*-0.00446747);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa2d0() {
   return (neuron0x2a9cbd0()*-0.0205546);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa310() {
   return (neuron0x2a9cf10()*-0.0509353);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa350() {
   return (neuron0x2a9d250()*-0.0133579);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa390() {
   return (neuron0x2a9d590()*-0.0136987);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa3d0() {
   return (neuron0x2a9d8d0()*0.483242);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa410() {
   return (neuron0x2a9dc10()*0.12008);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa450() {
   return (neuron0x2a9df50()*0.0681177);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa490() {
   return (neuron0x2a9e290()*0.0595521);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa4d0() {
   return (neuron0x2a9e5d0()*0.118294);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9f60() {
   return (neuron0x2a9e910()*-0.00403632);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9fa0() {
   return (neuron0x2a9ee70()*0.107359);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa620() {
   return (neuron0x2a9f1b0()*0.051723);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa660() {
   return (neuron0x2a9f4f0()*0.0153378);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa6a0() {
   return (neuron0x2a9f830()*-0.00772702);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa6e0() {
   return (neuron0x2a9fb70()*-0.0565869);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa720() {
   return (neuron0x2a9feb0()*-0.011948);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa760() {
   return (neuron0x2aa01f0()*-0.0554984);
}

double NNfunction_ng_chiMinus2::synapse0x2aaaae0() {
   return (neuron0x2a9b5a0()*-0.187457);
}

double NNfunction_ng_chiMinus2::synapse0x2aaab20() {
   return (neuron0x2a9b850()*-0.0824365);
}

double NNfunction_ng_chiMinus2::synapse0x2aaab60() {
   return (neuron0x2a9bb90()*0.491114);
}

double NNfunction_ng_chiMinus2::synapse0x2aaaba0() {
   return (neuron0x2a9bed0()*1.0747);
}

double NNfunction_ng_chiMinus2::synapse0x2aaabe0() {
   return (neuron0x2a9c210()*-0.0111677);
}

double NNfunction_ng_chiMinus2::synapse0x2aaac20() {
   return (neuron0x2a9c550()*0.0835999);
}

double NNfunction_ng_chiMinus2::synapse0x2aaac60() {
   return (neuron0x2a9c890()*0.104134);
}

double NNfunction_ng_chiMinus2::synapse0x2aaaca0() {
   return (neuron0x2a9cbd0()*0.04498);
}

double NNfunction_ng_chiMinus2::synapse0x2aaace0() {
   return (neuron0x2a9cf10()*0.0559101);
}

double NNfunction_ng_chiMinus2::synapse0x2aaad20() {
   return (neuron0x2a9d250()*0.16447);
}

double NNfunction_ng_chiMinus2::synapse0x2aaad60() {
   return (neuron0x2a9d590()*0.156649);
}

double NNfunction_ng_chiMinus2::synapse0x2aaada0() {
   return (neuron0x2a9d8d0()*0.483899);
}

double NNfunction_ng_chiMinus2::synapse0x2aaade0() {
   return (neuron0x2a9dc10()*0.527292);
}

double NNfunction_ng_chiMinus2::synapse0x2aaae20() {
   return (neuron0x2a9df50()*0.112089);
}

double NNfunction_ng_chiMinus2::synapse0x2aaae60() {
   return (neuron0x2a9e290()*-0.0413961);
}

double NNfunction_ng_chiMinus2::synapse0x2aaaea0() {
   return (neuron0x2a9e5d0()*0.0491422);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa930() {
   return (neuron0x2a9e910()*0.149387);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa970() {
   return (neuron0x2a9ee70()*0.255729);
}

double NNfunction_ng_chiMinus2::synapse0x2aaaff0() {
   return (neuron0x2a9f1b0()*0.0687873);
}

double NNfunction_ng_chiMinus2::synapse0x2aab030() {
   return (neuron0x2a9f4f0()*0.0569808);
}

double NNfunction_ng_chiMinus2::synapse0x2aab070() {
   return (neuron0x2a9f830()*-0.0438401);
}

double NNfunction_ng_chiMinus2::synapse0x2aab0b0() {
   return (neuron0x2a9fb70()*0.111817);
}

double NNfunction_ng_chiMinus2::synapse0x2aab0f0() {
   return (neuron0x2a9feb0()*-0.0362355);
}

double NNfunction_ng_chiMinus2::synapse0x2aab130() {
   return (neuron0x2aa01f0()*1.27996);
}

double NNfunction_ng_chiMinus2::synapse0x2aab4b0() {
   return (neuron0x2a9b5a0()*-0.0100863);
}

double NNfunction_ng_chiMinus2::synapse0x2a9b730() {
   return (neuron0x2a9b850()*0.00246686);
}

double NNfunction_ng_chiMinus2::synapse0x2a9b770() {
   return (neuron0x2a9bb90()*0.165172);
}

double NNfunction_ng_chiMinus2::synapse0x2a9ba70() {
   return (neuron0x2a9bed0()*-3.96433);
}

double NNfunction_ng_chiMinus2::synapse0x2a9bab0() {
   return (neuron0x2a9c210()*0.0349101);
}

double NNfunction_ng_chiMinus2::synapse0x2a9bdb0() {
   return (neuron0x2a9c550()*0.00853867);
}

double NNfunction_ng_chiMinus2::synapse0x2a9bdf0() {
   return (neuron0x2a9c890()*0.0325403);
}

double NNfunction_ng_chiMinus2::synapse0x2a9c0f0() {
   return (neuron0x2a9cbd0()*-0.00694982);
}

double NNfunction_ng_chiMinus2::synapse0x2a9c130() {
   return (neuron0x2a9cf10()*0.00787279);
}

double NNfunction_ng_chiMinus2::synapse0x2a9c430() {
   return (neuron0x2a9d250()*0.0146016);
}

double NNfunction_ng_chiMinus2::synapse0x2a9c470() {
   return (neuron0x2a9d590()*0.0275673);
}

double NNfunction_ng_chiMinus2::synapse0x2a9c770() {
   return (neuron0x2a9d8d0()*0.132473);
}

double NNfunction_ng_chiMinus2::synapse0x2a9c7b0() {
   return (neuron0x2a9dc10()*-0.184129);
}

double NNfunction_ng_chiMinus2::synapse0x2a9cab0() {
   return (neuron0x2a9df50()*0.0157921);
}

double NNfunction_ng_chiMinus2::synapse0x2a9caf0() {
   return (neuron0x2a9e290()*0.00478696);
}

double NNfunction_ng_chiMinus2::synapse0x2a9cdf0() {
   return (neuron0x2a9e5d0()*-0.0499112);
}

double NNfunction_ng_chiMinus2::synapse0x2a9ce30() {
   return (neuron0x2a9e910()*-0.0172114);
}

double NNfunction_ng_chiMinus2::synapse0x2a9d130() {
   return (neuron0x2a9ee70()*-0.007594);
}

double NNfunction_ng_chiMinus2::synapse0x2a9d170() {
   return (neuron0x2a9f1b0()*-0.0341305);
}

double NNfunction_ng_chiMinus2::synapse0x2a9d470() {
   return (neuron0x2a9f4f0()*0.014605);
}

double NNfunction_ng_chiMinus2::synapse0x2a9d4b0() {
   return (neuron0x2a9f830()*0.0176385);
}

double NNfunction_ng_chiMinus2::synapse0x2a9d7b0() {
   return (neuron0x2a9fb70()*-0.00984724);
}

double NNfunction_ng_chiMinus2::synapse0x2a9d7f0() {
   return (neuron0x2a9feb0()*-0.000386091);
}

double NNfunction_ng_chiMinus2::synapse0x2a9daf0() {
   return (neuron0x2aa01f0()*0.304974);
}

double NNfunction_ng_chiMinus2::synapse0x2a9db30() {
   return (neuron0x2a9b5a0()*0.356348);
}

double NNfunction_ng_chiMinus2::synapse0x2a9e7f0() {
   return (neuron0x2a9b850()*-0.360217);
}

double NNfunction_ng_chiMinus2::synapse0x2a9e830() {
   return (neuron0x2a9bb90()*-0.0409935);
}

double NNfunction_ng_chiMinus2::synapse0x2aab300() {
   return (neuron0x2a9bed0()*-0.0648853);
}

double NNfunction_ng_chiMinus2::synapse0x2aab340() {
   return (neuron0x2a9c210()*0.185263);
}

double NNfunction_ng_chiMinus2::synapse0x2a9eb30() {
   return (neuron0x2a9c550()*0.322831);
}

double NNfunction_ng_chiMinus2::synapse0x2a9eb70() {
   return (neuron0x2a9c890()*-0.402815);
}

double NNfunction_ng_chiMinus2::synapse0x2a9f090() {
   return (neuron0x2a9cbd0()*0.472498);
}

double NNfunction_ng_chiMinus2::synapse0x2a9f0d0() {
   return (neuron0x2a9cf10()*-0.25072);
}

double NNfunction_ng_chiMinus2::synapse0x2a9f3d0() {
   return (neuron0x2a9d250()*0.266981);
}

double NNfunction_ng_chiMinus2::synapse0x2a9f410() {
   return (neuron0x2a9d590()*-0.00040647);
}

double NNfunction_ng_chiMinus2::synapse0x2a9f710() {
   return (neuron0x2a9d8d0()*0.247045);
}

double NNfunction_ng_chiMinus2::synapse0x2a9f750() {
   return (neuron0x2a9dc10()*0.0288552);
}

double NNfunction_ng_chiMinus2::synapse0x2a9fa50() {
   return (neuron0x2a9df50()*-0.280268);
}

double NNfunction_ng_chiMinus2::synapse0x2a9fa90() {
   return (neuron0x2a9e290()*-0.188443);
}

double NNfunction_ng_chiMinus2::synapse0x2a9fd90() {
   return (neuron0x2a9e5d0()*0.534609);
}

double NNfunction_ng_chiMinus2::synapse0x2a9fdd0() {
   return (neuron0x2a9e910()*0.184215);
}

double NNfunction_ng_chiMinus2::synapse0x2aa00d0() {
   return (neuron0x2a9ee70()*0.108007);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0110() {
   return (neuron0x2a9f1b0()*-0.160442);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0410() {
   return (neuron0x2a9f4f0()*-0.26474);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0450() {
   return (neuron0x2a9f830()*-0.438357);
}

double NNfunction_ng_chiMinus2::synapse0x2a9de30() {
   return (neuron0x2a9fb70()*0.181842);
}

double NNfunction_ng_chiMinus2::synapse0x2a9de70() {
   return (neuron0x2a9feb0()*0.405977);
}

double NNfunction_ng_chiMinus2::synapse0x2aad220() {
   return (neuron0x2aa01f0()*-0.0623665);
}

double NNfunction_ng_chiMinus2::synapse0x2aad5a0() {
   return (neuron0x2a9b5a0()*-0.0592336);
}

double NNfunction_ng_chiMinus2::synapse0x2aad5e0() {
   return (neuron0x2a9b850()*-0.0789055);
}

double NNfunction_ng_chiMinus2::synapse0x2aad620() {
   return (neuron0x2a9bb90()*0.333742);
}

double NNfunction_ng_chiMinus2::synapse0x2aad660() {
   return (neuron0x2a9bed0()*-2.16025);
}

double NNfunction_ng_chiMinus2::synapse0x2aad6a0() {
   return (neuron0x2a9c210()*0.0441645);
}

double NNfunction_ng_chiMinus2::synapse0x2aad6e0() {
   return (neuron0x2a9c550()*0.0191861);
}

double NNfunction_ng_chiMinus2::synapse0x2aad720() {
   return (neuron0x2a9c890()*-0.0879604);
}

double NNfunction_ng_chiMinus2::synapse0x2aad760() {
   return (neuron0x2a9cbd0()*0.0743441);
}

double NNfunction_ng_chiMinus2::synapse0x2aad7a0() {
   return (neuron0x2a9cf10()*0.0253999);
}

double NNfunction_ng_chiMinus2::synapse0x2aad7e0() {
   return (neuron0x2a9d250()*-0.106955);
}

double NNfunction_ng_chiMinus2::synapse0x2aad820() {
   return (neuron0x2a9d590()*-0.0905797);
}

double NNfunction_ng_chiMinus2::synapse0x2aad860() {
   return (neuron0x2a9d8d0()*-0.199252);
}

double NNfunction_ng_chiMinus2::synapse0x2aad8a0() {
   return (neuron0x2a9dc10()*0.0953094);
}

double NNfunction_ng_chiMinus2::synapse0x2aad8e0() {
   return (neuron0x2a9df50()*-0.320309);
}

double NNfunction_ng_chiMinus2::synapse0x2aad920() {
   return (neuron0x2a9e290()*-0.070552);
}

double NNfunction_ng_chiMinus2::synapse0x2aad960() {
   return (neuron0x2a9e5d0()*0.161643);
}

double NNfunction_ng_chiMinus2::synapse0x2aad3f0() {
   return (neuron0x2a9e910()*-0.537028);
}

double NNfunction_ng_chiMinus2::synapse0x2aad430() {
   return (neuron0x2a9ee70()*0.0726442);
}

double NNfunction_ng_chiMinus2::synapse0x2aadab0() {
   return (neuron0x2a9f1b0()*0.076817);
}

double NNfunction_ng_chiMinus2::synapse0x2aadaf0() {
   return (neuron0x2a9f4f0()*0.13295);
}

double NNfunction_ng_chiMinus2::synapse0x2aadb30() {
   return (neuron0x2a9f830()*0.0172189);
}

double NNfunction_ng_chiMinus2::synapse0x2aadb70() {
   return (neuron0x2a9fb70()*-0.179461);
}

double NNfunction_ng_chiMinus2::synapse0x2aadbb0() {
   return (neuron0x2a9feb0()*-0.0809362);
}

double NNfunction_ng_chiMinus2::synapse0x2aadbf0() {
   return (neuron0x2aa01f0()*-0.327258);
}

double NNfunction_ng_chiMinus2::synapse0x2aadf70() {
   return (neuron0x2a9b5a0()*0.0420345);
}

double NNfunction_ng_chiMinus2::synapse0x2aadfb0() {
   return (neuron0x2a9b850()*0.0416229);
}

double NNfunction_ng_chiMinus2::synapse0x2aadff0() {
   return (neuron0x2a9bb90()*0.30391);
}

double NNfunction_ng_chiMinus2::synapse0x2aae030() {
   return (neuron0x2a9bed0()*1.38545);
}

double NNfunction_ng_chiMinus2::synapse0x2aae070() {
   return (neuron0x2a9c210()*-0.0569192);
}

double NNfunction_ng_chiMinus2::synapse0x2aae0b0() {
   return (neuron0x2a9c550()*0.0291468);
}

double NNfunction_ng_chiMinus2::synapse0x2aae0f0() {
   return (neuron0x2a9c890()*-0.00225242);
}

double NNfunction_ng_chiMinus2::synapse0x2aae130() {
   return (neuron0x2a9cbd0()*0.0304159);
}

double NNfunction_ng_chiMinus2::synapse0x2aae170() {
   return (neuron0x2a9cf10()*0.0289712);
}

double NNfunction_ng_chiMinus2::synapse0x2aae1b0() {
   return (neuron0x2a9d250()*0.0324104);
}

double NNfunction_ng_chiMinus2::synapse0x2aae1f0() {
   return (neuron0x2a9d590()*0.0876245);
}

double NNfunction_ng_chiMinus2::synapse0x2aae230() {
   return (neuron0x2a9d8d0()*2.74257);
}

double NNfunction_ng_chiMinus2::synapse0x2aae270() {
   return (neuron0x2a9dc10()*-0.107527);
}

double NNfunction_ng_chiMinus2::synapse0x2aae2b0() {
   return (neuron0x2a9df50()*-0.0947701);
}

double NNfunction_ng_chiMinus2::synapse0x2aae2f0() {
   return (neuron0x2a9e290()*-0.0449609);
}

double NNfunction_ng_chiMinus2::synapse0x2aae330() {
   return (neuron0x2a9e5d0()*0.00116527);
}

double NNfunction_ng_chiMinus2::synapse0x2aaddc0() {
   return (neuron0x2a9e910()*-0.0759509);
}

double NNfunction_ng_chiMinus2::synapse0x2aade00() {
   return (neuron0x2a9ee70()*0.0777286);
}

double NNfunction_ng_chiMinus2::synapse0x2aae480() {
   return (neuron0x2a9f1b0()*0.0316529);
}

double NNfunction_ng_chiMinus2::synapse0x2aae4c0() {
   return (neuron0x2a9f4f0()*-0.0614153);
}

double NNfunction_ng_chiMinus2::synapse0x2aae500() {
   return (neuron0x2a9f830()*0.0295465);
}

double NNfunction_ng_chiMinus2::synapse0x2aae540() {
   return (neuron0x2a9fb70()*-0.0552265);
}

double NNfunction_ng_chiMinus2::synapse0x2aae580() {
   return (neuron0x2a9feb0()*-0.0245216);
}

double NNfunction_ng_chiMinus2::synapse0x2aae5c0() {
   return (neuron0x2aa01f0()*0.148868);
}

double NNfunction_ng_chiMinus2::synapse0x2aae940() {
   return (neuron0x2a9b5a0()*-0.00988714);
}

double NNfunction_ng_chiMinus2::synapse0x2aae980() {
   return (neuron0x2a9b850()*0.0100031);
}

double NNfunction_ng_chiMinus2::synapse0x2aae9c0() {
   return (neuron0x2a9bb90()*0.356175);
}

double NNfunction_ng_chiMinus2::synapse0x2aaea00() {
   return (neuron0x2a9bed0()*-3.01081);
}

double NNfunction_ng_chiMinus2::synapse0x2aaea40() {
   return (neuron0x2a9c210()*0.0410897);
}

double NNfunction_ng_chiMinus2::synapse0x2aaea80() {
   return (neuron0x2a9c550()*0.00286096);
}

double NNfunction_ng_chiMinus2::synapse0x2aaeac0() {
   return (neuron0x2a9c890()*-0.0290214);
}

double NNfunction_ng_chiMinus2::synapse0x2aaeb00() {
   return (neuron0x2a9cbd0()*0.0422884);
}

double NNfunction_ng_chiMinus2::synapse0x2aaeb40() {
   return (neuron0x2a9cf10()*0.050362);
}

double NNfunction_ng_chiMinus2::synapse0x2aaeb80() {
   return (neuron0x2a9d250()*-0.0636808);
}

double NNfunction_ng_chiMinus2::synapse0x2aaebc0() {
   return (neuron0x2a9d590()*0.0205492);
}

double NNfunction_ng_chiMinus2::synapse0x2aaec00() {
   return (neuron0x2a9d8d0()*-0.229997);
}

double NNfunction_ng_chiMinus2::synapse0x2aaec40() {
   return (neuron0x2a9dc10()*0.687432);
}

double NNfunction_ng_chiMinus2::synapse0x2aaec80() {
   return (neuron0x2a9df50()*0.00990805);
}

double NNfunction_ng_chiMinus2::synapse0x2aaecc0() {
   return (neuron0x2a9e290()*-0.0236779);
}

double NNfunction_ng_chiMinus2::synapse0x2aaed00() {
   return (neuron0x2a9e5d0()*-0.105798);
}

double NNfunction_ng_chiMinus2::synapse0x2aae790() {
   return (neuron0x2a9e910()*-0.00542972);
}

double NNfunction_ng_chiMinus2::synapse0x2aae7d0() {
   return (neuron0x2a9ee70()*-0.142578);
}

double NNfunction_ng_chiMinus2::synapse0x2aaee50() {
   return (neuron0x2a9f1b0()*-0.0836874);
}

double NNfunction_ng_chiMinus2::synapse0x2aaee90() {
   return (neuron0x2a9f4f0()*-0.0249046);
}

double NNfunction_ng_chiMinus2::synapse0x2aaeed0() {
   return (neuron0x2a9f830()*-0.00506611);
}

double NNfunction_ng_chiMinus2::synapse0x2aaef10() {
   return (neuron0x2a9fb70()*0.0298225);
}

double NNfunction_ng_chiMinus2::synapse0x2aaef50() {
   return (neuron0x2a9feb0()*0.0544885);
}

double NNfunction_ng_chiMinus2::synapse0x2aaef90() {
   return (neuron0x2aa01f0()*-0.230187);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf310() {
   return (neuron0x2a9b5a0()*-0.065463);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf350() {
   return (neuron0x2a9b850()*-0.0129946);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf390() {
   return (neuron0x2a9bb90()*0.100755);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf3d0() {
   return (neuron0x2a9bed0()*-0.803398);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf410() {
   return (neuron0x2a9c210()*0.0162942);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf450() {
   return (neuron0x2a9c550()*0.024724);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf490() {
   return (neuron0x2a9c890()*0.0481749);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf4d0() {
   return (neuron0x2a9cbd0()*0.0621263);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf510() {
   return (neuron0x2a9cf10()*0.0256636);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf550() {
   return (neuron0x2a9d250()*0.00284598);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf590() {
   return (neuron0x2a9d590()*0.0621025);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf5d0() {
   return (neuron0x2a9d8d0()*0.406014);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf610() {
   return (neuron0x2a9dc10()*0.255518);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf650() {
   return (neuron0x2a9df50()*-0.0245077);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf690() {
   return (neuron0x2a9e290()*-0.0439658);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf6d0() {
   return (neuron0x2a9e5d0()*-0.0224676);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf160() {
   return (neuron0x2a9e910()*0.0345113);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf1a0() {
   return (neuron0x2a9ee70()*-0.0377336);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf820() {
   return (neuron0x2a9f1b0()*-0.0110522);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf860() {
   return (neuron0x2a9f4f0()*-0.016855);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf8a0() {
   return (neuron0x2a9f830()*0.0326196);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf8e0() {
   return (neuron0x2a9fb70()*0.03726);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf920() {
   return (neuron0x2a9feb0()*-0.0310844);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf960() {
   return (neuron0x2aa01f0()*0.19151);
}

double NNfunction_ng_chiMinus2::synapse0x2aafce0() {
   return (neuron0x2a9b5a0()*-0.0106082);
}

double NNfunction_ng_chiMinus2::synapse0x2aafd20() {
   return (neuron0x2a9b850()*-0.000618448);
}

double NNfunction_ng_chiMinus2::synapse0x2aafd60() {
   return (neuron0x2a9bb90()*-0.0162142);
}

double NNfunction_ng_chiMinus2::synapse0x2aafda0() {
   return (neuron0x2a9bed0()*0.157581);
}

double NNfunction_ng_chiMinus2::synapse0x2aafde0() {
   return (neuron0x2a9c210()*-0.00284705);
}

double NNfunction_ng_chiMinus2::synapse0x2aafe20() {
   return (neuron0x2a9c550()*-0.000983245);
}

double NNfunction_ng_chiMinus2::synapse0x2aafe60() {
   return (neuron0x2a9c890()*-0.00563197);
}

double NNfunction_ng_chiMinus2::synapse0x2aafea0() {
   return (neuron0x2a9cbd0()*-0.00808134);
}

double NNfunction_ng_chiMinus2::synapse0x2aafee0() {
   return (neuron0x2a9cf10()*-0.00694395);
}

double NNfunction_ng_chiMinus2::synapse0x2aa80a0() {
   return (neuron0x2a9d250()*-0.00868563);
}

double NNfunction_ng_chiMinus2::synapse0x2aa80e0() {
   return (neuron0x2a9d590()*-0.00220782);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8120() {
   return (neuron0x2a9d8d0()*-0.0545591);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8160() {
   return (neuron0x2a9dc10()*-0.00302776);
}

double NNfunction_ng_chiMinus2::synapse0x2aa81a0() {
   return (neuron0x2a9df50()*-0.00378863);
}

double NNfunction_ng_chiMinus2::synapse0x2aa81e0() {
   return (neuron0x2a9e290()*0.0103374);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8220() {
   return (neuron0x2a9e5d0()*0.00194508);
}

double NNfunction_ng_chiMinus2::synapse0x2aafb30() {
   return (neuron0x2a9e910()*-0.00736364);
}

double NNfunction_ng_chiMinus2::synapse0x2aafb70() {
   return (neuron0x2a9ee70()*-0.00099743);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8370() {
   return (neuron0x2a9f1b0()*-0.00383191);
}

double NNfunction_ng_chiMinus2::synapse0x2aa83b0() {
   return (neuron0x2a9f4f0()*-0.000917148);
}

double NNfunction_ng_chiMinus2::synapse0x2aa83f0() {
   return (neuron0x2a9f830()*-0.00681324);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8430() {
   return (neuron0x2a9fb70()*-0.00452079);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8470() {
   return (neuron0x2a9feb0()*0.00252206);
}

double NNfunction_ng_chiMinus2::synapse0x2aa84b0() {
   return (neuron0x2aa01f0()*0.853535);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8830() {
   return (neuron0x2a9b5a0()*0.433994);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8870() {
   return (neuron0x2a9b850()*-0.111758);
}

double NNfunction_ng_chiMinus2::synapse0x2aa88b0() {
   return (neuron0x2a9bb90()*-0.532058);
}

double NNfunction_ng_chiMinus2::synapse0x2aa88f0() {
   return (neuron0x2a9bed0()*-0.313805);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8930() {
   return (neuron0x2a9c210()*0.600327);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8970() {
   return (neuron0x2a9c550()*0.286249);
}

double NNfunction_ng_chiMinus2::synapse0x2aa89b0() {
   return (neuron0x2a9c890()*-0.035305);
}

double NNfunction_ng_chiMinus2::synapse0x2aa89f0() {
   return (neuron0x2a9cbd0()*-0.103367);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8a30() {
   return (neuron0x2a9cf10()*0.19905);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8a70() {
   return (neuron0x2a9d250()*0.329105);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8ab0() {
   return (neuron0x2a9d590()*0.231103);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8af0() {
   return (neuron0x2a9d8d0()*-0.779721);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8b30() {
   return (neuron0x2a9dc10()*0.0676141);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8b70() {
   return (neuron0x2a9df50()*0.100531);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8bb0() {
   return (neuron0x2a9e290()*-0.273749);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8bf0() {
   return (neuron0x2a9e5d0()*-0.454166);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8680() {
   return (neuron0x2a9e910()*-0.335816);
}

double NNfunction_ng_chiMinus2::synapse0x2aa86c0() {
   return (neuron0x2a9ee70()*0.519388);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8d40() {
   return (neuron0x2a9f1b0()*-0.482313);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8d80() {
   return (neuron0x2a9f4f0()*0.339701);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8dc0() {
   return (neuron0x2a9f830()*0.529546);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8e00() {
   return (neuron0x2a9fb70()*-0.0670954);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8e40() {
   return (neuron0x2a9feb0()*0.360886);
}

double NNfunction_ng_chiMinus2::synapse0x2aa8e80() {
   return (neuron0x2aa01f0()*-0.299353);
}

double NNfunction_ng_chiMinus2::synapse0x2aa9050() {
   return (neuron0x2a9b5a0()*-0.000454227);
}

double NNfunction_ng_chiMinus2::synapse0x2ab20e0() {
   return (neuron0x2a9b850()*-0.00110306);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2120() {
   return (neuron0x2a9bb90()*-0.202269);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2160() {
   return (neuron0x2a9bed0()*-1.48834);
}

double NNfunction_ng_chiMinus2::synapse0x2ab21a0() {
   return (neuron0x2a9c210()*-0.00534681);
}

double NNfunction_ng_chiMinus2::synapse0x2ab21e0() {
   return (neuron0x2a9c550()*-0.00531328);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2220() {
   return (neuron0x2a9c890()*0.00558675);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2260() {
   return (neuron0x2a9cbd0()*0.00132514);
}

double NNfunction_ng_chiMinus2::synapse0x2ab22a0() {
   return (neuron0x2a9cf10()*0.00236629);
}

double NNfunction_ng_chiMinus2::synapse0x2ab22e0() {
   return (neuron0x2a9d250()*-0.00808695);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2320() {
   return (neuron0x2a9d590()*0.000873855);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2360() {
   return (neuron0x2a9d8d0()*0.0239786);
}

double NNfunction_ng_chiMinus2::synapse0x2ab23a0() {
   return (neuron0x2a9dc10()*-0.0647105);
}

double NNfunction_ng_chiMinus2::synapse0x2ab23e0() {
   return (neuron0x2a9df50()*0.0028974);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2420() {
   return (neuron0x2a9e290()*-0.00583258);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2460() {
   return (neuron0x2a9e5d0()*-0.00116566);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1f30() {
   return (neuron0x2a9e910()*0.0113835);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1f70() {
   return (neuron0x2a9ee70()*-0.00180581);
}

double NNfunction_ng_chiMinus2::synapse0x2ab25b0() {
   return (neuron0x2a9f1b0()*-0.00609039);
}

double NNfunction_ng_chiMinus2::synapse0x2ab25f0() {
   return (neuron0x2a9f4f0()*0.003334);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2630() {
   return (neuron0x2a9f830()*0.00270845);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2670() {
   return (neuron0x2a9fb70()*0.0106968);
}

double NNfunction_ng_chiMinus2::synapse0x2ab26b0() {
   return (neuron0x2a9feb0()*-0.00158462);
}

double NNfunction_ng_chiMinus2::synapse0x2ab26f0() {
   return (neuron0x2aa01f0()*0.168);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2a70() {
   return (neuron0x2a9b5a0()*0.202247);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2ab0() {
   return (neuron0x2a9b850()*0.127377);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2af0() {
   return (neuron0x2a9bb90()*-0.416626);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2b30() {
   return (neuron0x2a9bed0()*-1.37389);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2b70() {
   return (neuron0x2a9c210()*-0.203217);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2bb0() {
   return (neuron0x2a9c550()*-0.112767);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2bf0() {
   return (neuron0x2a9c890()*0.29947);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2c30() {
   return (neuron0x2a9cbd0()*0.227351);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2c70() {
   return (neuron0x2a9cf10()*0.230805);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2cb0() {
   return (neuron0x2a9d250()*0.18649);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2cf0() {
   return (neuron0x2a9d590()*0.423001);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2d30() {
   return (neuron0x2a9d8d0()*-0.754452);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2d70() {
   return (neuron0x2a9dc10()*-0.661237);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2db0() {
   return (neuron0x2a9df50()*0.210061);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2df0() {
   return (neuron0x2a9e290()*0.0961482);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2e30() {
   return (neuron0x2a9e5d0()*0.153414);
}

double NNfunction_ng_chiMinus2::synapse0x2ab28c0() {
   return (neuron0x2a9e910()*0.271988);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2900() {
   return (neuron0x2a9ee70()*-0.158933);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2f80() {
   return (neuron0x2a9f1b0()*0.141188);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2fc0() {
   return (neuron0x2a9f4f0()*0.0773569);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3000() {
   return (neuron0x2a9f830()*-0.0900308);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3040() {
   return (neuron0x2a9fb70()*-0.159597);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3080() {
   return (neuron0x2a9feb0()*-0.0886961);
}

double NNfunction_ng_chiMinus2::synapse0x2ab30c0() {
   return (neuron0x2aa01f0()*-0.696606);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3440() {
   return (neuron0x2a9b5a0()*-0.358236);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3480() {
   return (neuron0x2a9b850()*-0.156996);
}

double NNfunction_ng_chiMinus2::synapse0x2ab34c0() {
   return (neuron0x2a9bb90()*0.148685);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3500() {
   return (neuron0x2a9bed0()*-0.634091);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3540() {
   return (neuron0x2a9c210()*-0.0635071);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3580() {
   return (neuron0x2a9c550()*0.241893);
}

double NNfunction_ng_chiMinus2::synapse0x2ab35c0() {
   return (neuron0x2a9c890()*0.0907755);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3600() {
   return (neuron0x2a9cbd0()*0.167941);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3640() {
   return (neuron0x2a9cf10()*0.156264);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3680() {
   return (neuron0x2a9d250()*-0.0566889);
}

double NNfunction_ng_chiMinus2::synapse0x2ab36c0() {
   return (neuron0x2a9d590()*-0.055784);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3700() {
   return (neuron0x2a9d8d0()*-0.0964619);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3740() {
   return (neuron0x2a9dc10()*-0.0811786);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3780() {
   return (neuron0x2a9df50()*0.435553);
}

double NNfunction_ng_chiMinus2::synapse0x2ab37c0() {
   return (neuron0x2a9e290()*-0.00916695);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3800() {
   return (neuron0x2a9e5d0()*0.259745);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3290() {
   return (neuron0x2a9e910()*0.392772);
}

double NNfunction_ng_chiMinus2::synapse0x2ab32d0() {
   return (neuron0x2a9ee70()*0.0368282);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3950() {
   return (neuron0x2a9f1b0()*-0.0582942);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3990() {
   return (neuron0x2a9f4f0()*-0.335141);
}

double NNfunction_ng_chiMinus2::synapse0x2ab39d0() {
   return (neuron0x2a9f830()*0.245477);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3a10() {
   return (neuron0x2a9fb70()*-0.0676968);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3a50() {
   return (neuron0x2a9feb0()*-0.00733055);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3a90() {
   return (neuron0x2aa01f0()*-0.0354609);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3e10() {
   return (neuron0x2a9b5a0()*-0.20117);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3e50() {
   return (neuron0x2a9b850()*0.152264);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3e90() {
   return (neuron0x2a9bb90()*-0.218812);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3ed0() {
   return (neuron0x2a9bed0()*-0.447823);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3f10() {
   return (neuron0x2a9c210()*-0.102591);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3f50() {
   return (neuron0x2a9c550()*-0.0303313);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3f90() {
   return (neuron0x2a9c890()*-0.0966212);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3fd0() {
   return (neuron0x2a9cbd0()*-0.253326);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4010() {
   return (neuron0x2a9cf10()*0.152499);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4050() {
   return (neuron0x2a9d250()*-0.0410945);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4090() {
   return (neuron0x2a9d590()*-0.0169253);
}

double NNfunction_ng_chiMinus2::synapse0x2ab40d0() {
   return (neuron0x2a9d8d0()*-0.641732);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4110() {
   return (neuron0x2a9dc10()*0.170129);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4150() {
   return (neuron0x2a9df50()*-0.0327664);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4190() {
   return (neuron0x2a9e290()*0.0538239);
}

double NNfunction_ng_chiMinus2::synapse0x2ab41d0() {
   return (neuron0x2a9e5d0()*-0.334612);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3c60() {
   return (neuron0x2a9e910()*-0.0546761);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3ca0() {
   return (neuron0x2a9ee70()*0.0747317);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4320() {
   return (neuron0x2a9f1b0()*-0.268001);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4360() {
   return (neuron0x2a9f4f0()*0.0282892);
}

double NNfunction_ng_chiMinus2::synapse0x2ab43a0() {
   return (neuron0x2a9f830()*-0.00719856);
}

double NNfunction_ng_chiMinus2::synapse0x2ab43e0() {
   return (neuron0x2a9fb70()*-0.104238);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4420() {
   return (neuron0x2a9feb0()*-0.0465516);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4460() {
   return (neuron0x2aa01f0()*-0.0464991);
}

double NNfunction_ng_chiMinus2::synapse0x2ab47e0() {
   return (neuron0x2a9b5a0()*0.238482);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4820() {
   return (neuron0x2a9b850()*0.0695186);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4860() {
   return (neuron0x2a9bb90()*-0.576338);
}

double NNfunction_ng_chiMinus2::synapse0x2ab48a0() {
   return (neuron0x2a9bed0()*0.378977);
}

double NNfunction_ng_chiMinus2::synapse0x2ab48e0() {
   return (neuron0x2a9c210()*0.0117037);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4920() {
   return (neuron0x2a9c550()*-0.0812013);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4960() {
   return (neuron0x2a9c890()*-0.00795167);
}

double NNfunction_ng_chiMinus2::synapse0x2ab49a0() {
   return (neuron0x2a9cbd0()*0.0178923);
}

double NNfunction_ng_chiMinus2::synapse0x2ab49e0() {
   return (neuron0x2a9cf10()*0.0785049);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4a20() {
   return (neuron0x2a9d250()*-0.27248);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4a60() {
   return (neuron0x2a9d590()*0.361022);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4aa0() {
   return (neuron0x2a9d8d0()*-0.458607);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4ae0() {
   return (neuron0x2a9dc10()*0.554819);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4b20() {
   return (neuron0x2a9df50()*0.317272);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4b60() {
   return (neuron0x2a9e290()*-0.297914);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4ba0() {
   return (neuron0x2a9e5d0()*-0.184985);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4630() {
   return (neuron0x2a9e910()*-0.0759468);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4670() {
   return (neuron0x2a9ee70()*-0.225975);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4cf0() {
   return (neuron0x2a9f1b0()*-0.0575202);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4d30() {
   return (neuron0x2a9f4f0()*0.199483);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4d70() {
   return (neuron0x2a9f830()*-0.368037);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4db0() {
   return (neuron0x2a9fb70()*-0.090202);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4df0() {
   return (neuron0x2a9feb0()*-0.00296255);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4e30() {
   return (neuron0x2aa01f0()*-0.200958);
}

double NNfunction_ng_chiMinus2::synapse0x2ab51b0() {
   return (neuron0x2a9b5a0()*0.0326398);
}

double NNfunction_ng_chiMinus2::synapse0x2ab51f0() {
   return (neuron0x2a9b850()*0.0285123);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5230() {
   return (neuron0x2a9bb90()*0.189885);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5270() {
   return (neuron0x2a9bed0()*-0.747685);
}

double NNfunction_ng_chiMinus2::synapse0x2ab52b0() {
   return (neuron0x2a9c210()*0.0530756);
}

double NNfunction_ng_chiMinus2::synapse0x2ab52f0() {
   return (neuron0x2a9c550()*-0.0151858);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5330() {
   return (neuron0x2a9c890()*-0.07677);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5370() {
   return (neuron0x2a9cbd0()*-0.053073);
}

double NNfunction_ng_chiMinus2::synapse0x2ab53b0() {
   return (neuron0x2a9cf10()*-0.0147808);
}

double NNfunction_ng_chiMinus2::synapse0x2ab53f0() {
   return (neuron0x2a9d250()*-0.0244622);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5430() {
   return (neuron0x2a9d590()*-0.0619544);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5470() {
   return (neuron0x2a9d8d0()*-0.219084);
}

double NNfunction_ng_chiMinus2::synapse0x2ab54b0() {
   return (neuron0x2a9dc10()*1.98402);
}

double NNfunction_ng_chiMinus2::synapse0x2ab54f0() {
   return (neuron0x2a9df50()*0.0177917);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5530() {
   return (neuron0x2a9e290()*0.00113562);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5570() {
   return (neuron0x2a9e5d0()*0.00782857);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5000() {
   return (neuron0x2a9e910()*-0.0422066);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5040() {
   return (neuron0x2a9ee70()*-0.0338899);
}

double NNfunction_ng_chiMinus2::synapse0x2ab56c0() {
   return (neuron0x2a9f1b0()*-0.0523131);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5700() {
   return (neuron0x2a9f4f0()*0.0859733);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5740() {
   return (neuron0x2a9f830()*-0.0149636);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5780() {
   return (neuron0x2a9fb70()*0.0175914);
}

double NNfunction_ng_chiMinus2::synapse0x2ab57c0() {
   return (neuron0x2a9feb0()*0.000641533);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5800() {
   return (neuron0x2aa01f0()*0.107153);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5b80() {
   return (neuron0x2a9b5a0()*-0.0107706);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5bc0() {
   return (neuron0x2a9b850()*-0.131061);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5c00() {
   return (neuron0x2a9bb90()*-0.0184967);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5c40() {
   return (neuron0x2a9bed0()*-1.40872);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5c80() {
   return (neuron0x2a9c210()*-0.110369);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5cc0() {
   return (neuron0x2a9c550()*0.246474);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5d00() {
   return (neuron0x2a9c890()*0.0648253);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5d40() {
   return (neuron0x2a9cbd0()*-0.107783);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5d80() {
   return (neuron0x2a9cf10()*-0.303248);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5dc0() {
   return (neuron0x2a9d250()*0.217723);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5e00() {
   return (neuron0x2a9d590()*0.0123327);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5e40() {
   return (neuron0x2a9d8d0()*-0.237319);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5e80() {
   return (neuron0x2a9dc10()*-0.034065);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5ec0() {
   return (neuron0x2a9df50()*-0.327602);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5f00() {
   return (neuron0x2a9e290()*0.240505);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5f40() {
   return (neuron0x2a9e5d0()*-0.415782);
}

double NNfunction_ng_chiMinus2::synapse0x2ab59d0() {
   return (neuron0x2a9e910()*-0.0579518);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5a10() {
   return (neuron0x2a9ee70()*-0.0817775);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6090() {
   return (neuron0x2a9f1b0()*0.174604);
}

double NNfunction_ng_chiMinus2::synapse0x2ab60d0() {
   return (neuron0x2a9f4f0()*-0.140053);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6110() {
   return (neuron0x2a9f830()*0.401038);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6150() {
   return (neuron0x2a9fb70()*0.205565);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6190() {
   return (neuron0x2a9feb0()*-0.0523871);
}

double NNfunction_ng_chiMinus2::synapse0x2ab61d0() {
   return (neuron0x2aa01f0()*-0.218525);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6550() {
   return (neuron0x2a9b5a0()*0.0151802);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6590() {
   return (neuron0x2a9b850()*-0.00937237);
}

double NNfunction_ng_chiMinus2::synapse0x2ab65d0() {
   return (neuron0x2a9bb90()*-0.22699);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6610() {
   return (neuron0x2a9bed0()*-7.55886);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6650() {
   return (neuron0x2a9c210()*-0.00149613);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6690() {
   return (neuron0x2a9c550()*0.00844992);
}

double NNfunction_ng_chiMinus2::synapse0x2ab66d0() {
   return (neuron0x2a9c890()*-0.00103812);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6710() {
   return (neuron0x2a9cbd0()*-0.00175864);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6750() {
   return (neuron0x2a9cf10()*-0.00555446);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6790() {
   return (neuron0x2a9d250()*-0.00328404);
}

double NNfunction_ng_chiMinus2::synapse0x2ab67d0() {
   return (neuron0x2a9d590()*-0.0134982);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6810() {
   return (neuron0x2a9d8d0()*0.102579);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6850() {
   return (neuron0x2a9dc10()*-0.0655758);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6890() {
   return (neuron0x2a9df50()*-0.0068902);
}

double NNfunction_ng_chiMinus2::synapse0x2ab68d0() {
   return (neuron0x2a9e290()*0.00718453);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6910() {
   return (neuron0x2a9e5d0()*0.0145443);
}

double NNfunction_ng_chiMinus2::synapse0x2ab63a0() {
   return (neuron0x2a9e910()*-0.0125879);
}

double NNfunction_ng_chiMinus2::synapse0x2ab63e0() {
   return (neuron0x2a9ee70()*0.00167794);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6a60() {
   return (neuron0x2a9f1b0()*-0.00174021);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6aa0() {
   return (neuron0x2a9f4f0()*-0.00593667);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6ae0() {
   return (neuron0x2a9f830()*-0.00134172);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6b20() {
   return (neuron0x2a9fb70()*-0.00422612);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6b60() {
   return (neuron0x2a9feb0()*-0.00514373);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6ba0() {
   return (neuron0x2aa01f0()*-0.052246);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6f20() {
   return (neuron0x2a9b5a0()*0.467799);
}

double NNfunction_ng_chiMinus2::synapse0x2aab4f0() {
   return (neuron0x2a9b850()*-0.296365);
}

double NNfunction_ng_chiMinus2::synapse0x2aab530() {
   return (neuron0x2a9bb90()*0.49846);
}

double NNfunction_ng_chiMinus2::synapse0x2aab570() {
   return (neuron0x2a9bed0()*0.140158);
}

double NNfunction_ng_chiMinus2::synapse0x2aab7c0() {
   return (neuron0x2a9c210()*-0.169434);
}

double NNfunction_ng_chiMinus2::synapse0x2aab800() {
   return (neuron0x2a9c550()*0.00283214);
}

double NNfunction_ng_chiMinus2::synapse0x2aab840() {
   return (neuron0x2a9c890()*0.0578184);
}

double NNfunction_ng_chiMinus2::synapse0x2aaba90() {
   return (neuron0x2a9cbd0()*-0.124386);
}

double NNfunction_ng_chiMinus2::synapse0x2aabad0() {
   return (neuron0x2a9cf10()*0.0557031);
}

double NNfunction_ng_chiMinus2::synapse0x2aabd20() {
   return (neuron0x2a9d250()*0.437911);
}

double NNfunction_ng_chiMinus2::synapse0x2aabd60() {
   return (neuron0x2a9d590()*0.16965);
}

double NNfunction_ng_chiMinus2::synapse0x2aabda0() {
   return (neuron0x2a9d8d0()*0.234877);
}

double NNfunction_ng_chiMinus2::synapse0x2aabff0() {
   return (neuron0x2a9dc10()*-0.168525);
}

double NNfunction_ng_chiMinus2::synapse0x2aac030() {
   return (neuron0x2a9df50()*-0.0685002);
}

double NNfunction_ng_chiMinus2::synapse0x2aac280() {
   return (neuron0x2a9e290()*-0.396389);
}

double NNfunction_ng_chiMinus2::synapse0x2aac2c0() {
   return (neuron0x2a9e5d0()*0.259645);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6d70() {
   return (neuron0x2a9e910()*-0.0361105);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6db0() {
   return (neuron0x2a9ee70()*0.363755);
}

double NNfunction_ng_chiMinus2::synapse0x2aac410() {
   return (neuron0x2a9f1b0()*-0.0454571);
}

double NNfunction_ng_chiMinus2::synapse0x2aac920() {
   return (neuron0x2a9f4f0()*-0.0129555);
}

double NNfunction_ng_chiMinus2::synapse0x2aac960() {
   return (neuron0x2a9f830()*0.435887);
}

double NNfunction_ng_chiMinus2::synapse0x2aac9a0() {
   return (neuron0x2a9fb70()*-0.217083);
}

double NNfunction_ng_chiMinus2::synapse0x2aacbf0() {
   return (neuron0x2a9feb0()*-0.36949);
}

double NNfunction_ng_chiMinus2::synapse0x2aacc30() {
   return (neuron0x2aa01f0()*-0.399719);
}

double NNfunction_ng_chiMinus2::synapse0x2aac4e0() {
   return (neuron0x2a9b5a0()*0.132753);
}

double NNfunction_ng_chiMinus2::synapse0x2aac520() {
   return (neuron0x2a9b850()*-0.0134898);
}

double NNfunction_ng_chiMinus2::synapse0x2aac560() {
   return (neuron0x2a9bb90()*-0.209716);
}

double NNfunction_ng_chiMinus2::synapse0x2aac5a0() {
   return (neuron0x2a9bed0()*0.698863);
}

double NNfunction_ng_chiMinus2::synapse0x2aacf20() {
   return (neuron0x2a9c210()*-0.109752);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9270() {
   return (neuron0x2a9c550()*0.171706);
}

double NNfunction_ng_chiMinus2::synapse0x2ab92b0() {
   return (neuron0x2a9c890()*0.213922);
}

double NNfunction_ng_chiMinus2::synapse0x2ab92f0() {
   return (neuron0x2a9cbd0()*0.0479749);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9330() {
   return (neuron0x2a9cf10()*0.059119);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9370() {
   return (neuron0x2a9d250()*-0.0586464);
}

double NNfunction_ng_chiMinus2::synapse0x2ab93b0() {
   return (neuron0x2a9d590()*-0.077264);
}

double NNfunction_ng_chiMinus2::synapse0x2ab93f0() {
   return (neuron0x2a9d8d0()*0.464558);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9430() {
   return (neuron0x2a9dc10()*0.42591);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9470() {
   return (neuron0x2a9df50()*0.161197);
}

double NNfunction_ng_chiMinus2::synapse0x2ab94b0() {
   return (neuron0x2a9e290()*0.588143);
}

double NNfunction_ng_chiMinus2::synapse0x2ab94f0() {
   return (neuron0x2a9e5d0()*0.320252);
}

double NNfunction_ng_chiMinus2::synapse0x2aace00() {
   return (neuron0x2a9e910()*0.12275);
}

double NNfunction_ng_chiMinus2::synapse0x2aace40() {
   return (neuron0x2a9ee70()*0.507496);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9640() {
   return (neuron0x2a9f1b0()*0.633341);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9680() {
   return (neuron0x2a9f4f0()*-0.0471756);
}

double NNfunction_ng_chiMinus2::synapse0x2ab96c0() {
   return (neuron0x2a9f830()*0.202933);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9700() {
   return (neuron0x2a9fb70()*0.0914559);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9740() {
   return (neuron0x2a9feb0()*-0.0272089);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9780() {
   return (neuron0x2aa01f0()*-0.120783);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9b00() {
   return (neuron0x2a9b5a0()*-0.0754586);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9b40() {
   return (neuron0x2a9b850()*-0.0154901);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9b80() {
   return (neuron0x2a9bb90()*-1.85886);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9bc0() {
   return (neuron0x2a9bed0()*-0.0820814);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9c00() {
   return (neuron0x2a9c210()*-0.10425);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9c40() {
   return (neuron0x2a9c550()*-0.00623033);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9c80() {
   return (neuron0x2a9c890()*-0.0543052);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9cc0() {
   return (neuron0x2a9cbd0()*-0.0565978);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9d00() {
   return (neuron0x2a9cf10()*-0.0959103);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9d40() {
   return (neuron0x2a9d250()*-0.00268975);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9d80() {
   return (neuron0x2a9d590()*-0.0166379);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9dc0() {
   return (neuron0x2a9d8d0()*-0.515118);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9e00() {
   return (neuron0x2a9dc10()*0.0896838);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9e40() {
   return (neuron0x2a9df50()*-0.133054);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9e80() {
   return (neuron0x2a9e290()*0.400583);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9ec0() {
   return (neuron0x2a9e5d0()*0.108422);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9950() {
   return (neuron0x2a9e910()*-0.19382);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9990() {
   return (neuron0x2a9ee70()*0.157648);
}

double NNfunction_ng_chiMinus2::synapse0x2aba010() {
   return (neuron0x2a9f1b0()*0.0913993);
}

double NNfunction_ng_chiMinus2::synapse0x2aba050() {
   return (neuron0x2a9f4f0()*-0.0595411);
}

double NNfunction_ng_chiMinus2::synapse0x2aba090() {
   return (neuron0x2a9f830()*0.137824);
}

double NNfunction_ng_chiMinus2::synapse0x2aba0d0() {
   return (neuron0x2a9fb70()*-0.052765);
}

double NNfunction_ng_chiMinus2::synapse0x2aba110() {
   return (neuron0x2a9feb0()*0.00296544);
}

double NNfunction_ng_chiMinus2::synapse0x2aba150() {
   return (neuron0x2aa01f0()*-0.18182);
}

double NNfunction_ng_chiMinus2::synapse0x2aba4d0() {
   return (neuron0x2a9b5a0()*-0.0251748);
}

double NNfunction_ng_chiMinus2::synapse0x2aba510() {
   return (neuron0x2a9b850()*0.0452004);
}

double NNfunction_ng_chiMinus2::synapse0x2aba550() {
   return (neuron0x2a9bb90()*0.949818);
}

double NNfunction_ng_chiMinus2::synapse0x2aba590() {
   return (neuron0x2a9bed0()*-1.37778);
}

double NNfunction_ng_chiMinus2::synapse0x2aba5d0() {
   return (neuron0x2a9c210()*0.366668);
}

double NNfunction_ng_chiMinus2::synapse0x2aba610() {
   return (neuron0x2a9c550()*-0.0613954);
}

double NNfunction_ng_chiMinus2::synapse0x2aba650() {
   return (neuron0x2a9c890()*0.0326681);
}

double NNfunction_ng_chiMinus2::synapse0x2aba690() {
   return (neuron0x2a9cbd0()*0.179263);
}

double NNfunction_ng_chiMinus2::synapse0x2aba6d0() {
   return (neuron0x2a9cf10()*-0.0424247);
}

double NNfunction_ng_chiMinus2::synapse0x2aba710() {
   return (neuron0x2a9d250()*0.101526);
}

double NNfunction_ng_chiMinus2::synapse0x2aba750() {
   return (neuron0x2a9d590()*-0.0786775);
}

double NNfunction_ng_chiMinus2::synapse0x2aba790() {
   return (neuron0x2a9d8d0()*0.00735538);
}

double NNfunction_ng_chiMinus2::synapse0x2aba7d0() {
   return (neuron0x2a9dc10()*-0.570129);
}

double NNfunction_ng_chiMinus2::synapse0x2aba810() {
   return (neuron0x2a9df50()*-0.197696);
}

double NNfunction_ng_chiMinus2::synapse0x2aba850() {
   return (neuron0x2a9e290()*0.0646389);
}

double NNfunction_ng_chiMinus2::synapse0x2aba890() {
   return (neuron0x2a9e5d0()*-0.255912);
}

double NNfunction_ng_chiMinus2::synapse0x2aba320() {
   return (neuron0x2a9e910()*0.115306);
}

double NNfunction_ng_chiMinus2::synapse0x2aba360() {
   return (neuron0x2a9ee70()*-0.101244);
}

double NNfunction_ng_chiMinus2::synapse0x2aba9e0() {
   return (neuron0x2a9f1b0()*0.0839783);
}

double NNfunction_ng_chiMinus2::synapse0x2abaa20() {
   return (neuron0x2a9f4f0()*0.0278817);
}

double NNfunction_ng_chiMinus2::synapse0x2abaa60() {
   return (neuron0x2a9f830()*0.165782);
}

double NNfunction_ng_chiMinus2::synapse0x2abaaa0() {
   return (neuron0x2a9fb70()*0.111718);
}

double NNfunction_ng_chiMinus2::synapse0x2abaae0() {
   return (neuron0x2a9feb0()*-0.0381513);
}

double NNfunction_ng_chiMinus2::synapse0x2abab20() {
   return (neuron0x2aa01f0()*0.00961444);
}

double NNfunction_ng_chiMinus2::synapse0x2abaea0() {
   return (neuron0x2a9b5a0()*0.00338152);
}

double NNfunction_ng_chiMinus2::synapse0x2abaee0() {
   return (neuron0x2a9b850()*0.00363409);
}

double NNfunction_ng_chiMinus2::synapse0x2abaf20() {
   return (neuron0x2a9bb90()*-2.80463);
}

double NNfunction_ng_chiMinus2::synapse0x2abaf60() {
   return (neuron0x2a9bed0()*0.00702259);
}

double NNfunction_ng_chiMinus2::synapse0x2abafa0() {
   return (neuron0x2a9c210()*-0.0257853);
}

double NNfunction_ng_chiMinus2::synapse0x2abafe0() {
   return (neuron0x2a9c550()*-0.00453722);
}

double NNfunction_ng_chiMinus2::synapse0x2abb020() {
   return (neuron0x2a9c890()*-0.0185613);
}

double NNfunction_ng_chiMinus2::synapse0x2abb060() {
   return (neuron0x2a9cbd0()*-0.00187168);
}

double NNfunction_ng_chiMinus2::synapse0x2abb0a0() {
   return (neuron0x2a9cf10()*0.00303075);
}

double NNfunction_ng_chiMinus2::synapse0x2abb0e0() {
   return (neuron0x2a9d250()*-0.0230343);
}

double NNfunction_ng_chiMinus2::synapse0x2abb120() {
   return (neuron0x2a9d590()*-0.0112779);
}

double NNfunction_ng_chiMinus2::synapse0x2abb160() {
   return (neuron0x2a9d8d0()*0.039792);
}

double NNfunction_ng_chiMinus2::synapse0x2abb1a0() {
   return (neuron0x2a9dc10()*-0.0603651);
}

double NNfunction_ng_chiMinus2::synapse0x2abb1e0() {
   return (neuron0x2a9df50()*-0.00256068);
}

double NNfunction_ng_chiMinus2::synapse0x2abb220() {
   return (neuron0x2a9e290()*-0.00182178);
}

double NNfunction_ng_chiMinus2::synapse0x2abb260() {
   return (neuron0x2a9e5d0()*0.000149429);
}

double NNfunction_ng_chiMinus2::synapse0x2abacf0() {
   return (neuron0x2a9e910()*0.004859);
}

double NNfunction_ng_chiMinus2::synapse0x2abad30() {
   return (neuron0x2a9ee70()*0.0142373);
}

double NNfunction_ng_chiMinus2::synapse0x2abb3b0() {
   return (neuron0x2a9f1b0()*-0.00909536);
}

double NNfunction_ng_chiMinus2::synapse0x2abb3f0() {
   return (neuron0x2a9f4f0()*0.00539657);
}

double NNfunction_ng_chiMinus2::synapse0x2abb430() {
   return (neuron0x2a9f830()*0.0050567);
}

double NNfunction_ng_chiMinus2::synapse0x2abb470() {
   return (neuron0x2a9fb70()*-0.0116104);
}

double NNfunction_ng_chiMinus2::synapse0x2abb4b0() {
   return (neuron0x2a9feb0()*-0.00458166);
}

double NNfunction_ng_chiMinus2::synapse0x2abb4f0() {
   return (neuron0x2aa01f0()*1.84848);
}

double NNfunction_ng_chiMinus2::synapse0x2abb870() {
   return (neuron0x2a9b5a0()*0.0148819);
}

double NNfunction_ng_chiMinus2::synapse0x2abb8b0() {
   return (neuron0x2a9b850()*0.00653926);
}

double NNfunction_ng_chiMinus2::synapse0x2abb8f0() {
   return (neuron0x2a9bb90()*3.59651);
}

double NNfunction_ng_chiMinus2::synapse0x2abb930() {
   return (neuron0x2a9bed0()*-0.0386911);
}

double NNfunction_ng_chiMinus2::synapse0x2abb970() {
   return (neuron0x2a9c210()*0.0157788);
}

double NNfunction_ng_chiMinus2::synapse0x2abb9b0() {
   return (neuron0x2a9c550()*0.0141665);
}

double NNfunction_ng_chiMinus2::synapse0x2abb9f0() {
   return (neuron0x2a9c890()*0.0145063);
}

double NNfunction_ng_chiMinus2::synapse0x2abba30() {
   return (neuron0x2a9cbd0()*0.011272);
}

double NNfunction_ng_chiMinus2::synapse0x2abba70() {
   return (neuron0x2a9cf10()*0.00983034);
}

double NNfunction_ng_chiMinus2::synapse0x2abbab0() {
   return (neuron0x2a9d250()*0.0129044);
}

double NNfunction_ng_chiMinus2::synapse0x2abbaf0() {
   return (neuron0x2a9d590()*0.0125924);
}

double NNfunction_ng_chiMinus2::synapse0x2abbb30() {
   return (neuron0x2a9d8d0()*-0.000162224);
}

double NNfunction_ng_chiMinus2::synapse0x2abbb70() {
   return (neuron0x2a9dc10()*0.0350523);
}

double NNfunction_ng_chiMinus2::synapse0x2abbbb0() {
   return (neuron0x2a9df50()*-0.00324232);
}

double NNfunction_ng_chiMinus2::synapse0x2abbbf0() {
   return (neuron0x2a9e290()*0.00756604);
}

double NNfunction_ng_chiMinus2::synapse0x2abbc30() {
   return (neuron0x2a9e5d0()*0.00120623);
}

double NNfunction_ng_chiMinus2::synapse0x2abb6c0() {
   return (neuron0x2a9e910()*-0.0152466);
}

double NNfunction_ng_chiMinus2::synapse0x2abb700() {
   return (neuron0x2a9ee70()*0.00252144);
}

double NNfunction_ng_chiMinus2::synapse0x2abbd80() {
   return (neuron0x2a9f1b0()*0.00845111);
}

double NNfunction_ng_chiMinus2::synapse0x2abbdc0() {
   return (neuron0x2a9f4f0()*0.000720387);
}

double NNfunction_ng_chiMinus2::synapse0x2abbe00() {
   return (neuron0x2a9f830()*0.0273405);
}

double NNfunction_ng_chiMinus2::synapse0x2abbe40() {
   return (neuron0x2a9fb70()*0.00488189);
}

double NNfunction_ng_chiMinus2::synapse0x2abbe80() {
   return (neuron0x2a9feb0()*0.000572401);
}

double NNfunction_ng_chiMinus2::synapse0x2abbec0() {
   return (neuron0x2aa01f0()*2.93297);
}

double NNfunction_ng_chiMinus2::synapse0x2abc240() {
   return (neuron0x2a9b5a0()*-0.0618806);
}

double NNfunction_ng_chiMinus2::synapse0x2abc280() {
   return (neuron0x2a9b850()*0.0313653);
}

double NNfunction_ng_chiMinus2::synapse0x2abc2c0() {
   return (neuron0x2a9bb90()*-0.0802103);
}

double NNfunction_ng_chiMinus2::synapse0x2abc300() {
   return (neuron0x2a9bed0()*3.74855);
}

double NNfunction_ng_chiMinus2::synapse0x2abc340() {
   return (neuron0x2a9c210()*0.0463346);
}

double NNfunction_ng_chiMinus2::synapse0x2abc380() {
   return (neuron0x2a9c550()*0.0125111);
}

double NNfunction_ng_chiMinus2::synapse0x2abc3c0() {
   return (neuron0x2a9c890()*-0.0285262);
}

double NNfunction_ng_chiMinus2::synapse0x2abc400() {
   return (neuron0x2a9cbd0()*-0.0123041);
}

double NNfunction_ng_chiMinus2::synapse0x2abc440() {
   return (neuron0x2a9cf10()*-0.00790367);
}

double NNfunction_ng_chiMinus2::synapse0x2abc480() {
   return (neuron0x2a9d250()*0.00270469);
}

double NNfunction_ng_chiMinus2::synapse0x2abc4c0() {
   return (neuron0x2a9d590()*0.0415577);
}

double NNfunction_ng_chiMinus2::synapse0x2abc500() {
   return (neuron0x2a9d8d0()*0.430997);
}

double NNfunction_ng_chiMinus2::synapse0x2abc540() {
   return (neuron0x2a9dc10()*-0.361723);
}

double NNfunction_ng_chiMinus2::synapse0x2abc580() {
   return (neuron0x2a9df50()*-0.0383226);
}

double NNfunction_ng_chiMinus2::synapse0x2abc5c0() {
   return (neuron0x2a9e290()*-0.0999305);
}

double NNfunction_ng_chiMinus2::synapse0x2abc600() {
   return (neuron0x2a9e5d0()*-0.139736);
}

double NNfunction_ng_chiMinus2::synapse0x2abc090() {
   return (neuron0x2a9e910()*-0.0309319);
}

double NNfunction_ng_chiMinus2::synapse0x2abc0d0() {
   return (neuron0x2a9ee70()*-0.137264);
}

double NNfunction_ng_chiMinus2::synapse0x2abc750() {
   return (neuron0x2a9f1b0()*-0.173045);
}

double NNfunction_ng_chiMinus2::synapse0x2abc790() {
   return (neuron0x2a9f4f0()*-0.0126412);
}

double NNfunction_ng_chiMinus2::synapse0x2abc7d0() {
   return (neuron0x2a9f830()*0.00655714);
}

double NNfunction_ng_chiMinus2::synapse0x2abc810() {
   return (neuron0x2a9fb70()*-0.0122753);
}

double NNfunction_ng_chiMinus2::synapse0x2abc850() {
   return (neuron0x2a9feb0()*0.0403291);
}

double NNfunction_ng_chiMinus2::synapse0x2abc890() {
   return (neuron0x2aa01f0()*-0.0673765);
}

double NNfunction_ng_chiMinus2::synapse0x2abcc10() {
   return (neuron0x2a9b5a0()*-0.295078);
}

double NNfunction_ng_chiMinus2::synapse0x2abcc50() {
   return (neuron0x2a9b850()*0.177597);
}

double NNfunction_ng_chiMinus2::synapse0x2abcc90() {
   return (neuron0x2a9bb90()*0.257259);
}

double NNfunction_ng_chiMinus2::synapse0x2abccd0() {
   return (neuron0x2a9bed0()*-0.474513);
}

double NNfunction_ng_chiMinus2::synapse0x2abcd10() {
   return (neuron0x2a9c210()*-0.369412);
}

double NNfunction_ng_chiMinus2::synapse0x2abcd50() {
   return (neuron0x2a9c550()*0.142706);
}

double NNfunction_ng_chiMinus2::synapse0x2abcd90() {
   return (neuron0x2a9c890()*0.214198);
}

double NNfunction_ng_chiMinus2::synapse0x2abcdd0() {
   return (neuron0x2a9cbd0()*-0.0625817);
}

double NNfunction_ng_chiMinus2::synapse0x2abce10() {
   return (neuron0x2a9cf10()*0.171117);
}

double NNfunction_ng_chiMinus2::synapse0x2abce50() {
   return (neuron0x2a9d250()*0.272114);
}

double NNfunction_ng_chiMinus2::synapse0x2abce90() {
   return (neuron0x2a9d590()*-0.140262);
}

double NNfunction_ng_chiMinus2::synapse0x2abced0() {
   return (neuron0x2a9d8d0()*0.526985);
}

double NNfunction_ng_chiMinus2::synapse0x2abcf10() {
   return (neuron0x2a9dc10()*-0.179314);
}

double NNfunction_ng_chiMinus2::synapse0x2abcf50() {
   return (neuron0x2a9df50()*-0.129193);
}

double NNfunction_ng_chiMinus2::synapse0x2abcf90() {
   return (neuron0x2a9e290()*0.173268);
}

double NNfunction_ng_chiMinus2::synapse0x2abcfd0() {
   return (neuron0x2a9e5d0()*0.482365);
}

double NNfunction_ng_chiMinus2::synapse0x2abca60() {
   return (neuron0x2a9e910()*0.27536);
}

double NNfunction_ng_chiMinus2::synapse0x2abcaa0() {
   return (neuron0x2a9ee70()*0.459585);
}

double NNfunction_ng_chiMinus2::synapse0x2abd120() {
   return (neuron0x2a9f1b0()*-0.0810723);
}

double NNfunction_ng_chiMinus2::synapse0x2abd160() {
   return (neuron0x2a9f4f0()*-0.0281122);
}

double NNfunction_ng_chiMinus2::synapse0x2abd1a0() {
   return (neuron0x2a9f830()*-0.208357);
}

double NNfunction_ng_chiMinus2::synapse0x2abd1e0() {
   return (neuron0x2a9fb70()*-0.126222);
}

double NNfunction_ng_chiMinus2::synapse0x2abd220() {
   return (neuron0x2a9feb0()*0.20751);
}

double NNfunction_ng_chiMinus2::synapse0x2abd260() {
   return (neuron0x2aa01f0()*-0.622148);
}

double NNfunction_ng_chiMinus2::synapse0x2abd5e0() {
   return (neuron0x2a9b5a0()*-0.00314142);
}

double NNfunction_ng_chiMinus2::synapse0x2abd620() {
   return (neuron0x2a9b850()*0.00955407);
}

double NNfunction_ng_chiMinus2::synapse0x2abd660() {
   return (neuron0x2a9bb90()*0.129274);
}

double NNfunction_ng_chiMinus2::synapse0x2abd6a0() {
   return (neuron0x2a9bed0()*0.472765);
}

double NNfunction_ng_chiMinus2::synapse0x2abd6e0() {
   return (neuron0x2a9c210()*-0.0182317);
}

double NNfunction_ng_chiMinus2::synapse0x2abd720() {
   return (neuron0x2a9c550()*0.00917041);
}

double NNfunction_ng_chiMinus2::synapse0x2abd760() {
   return (neuron0x2a9c890()*0.00908529);
}

double NNfunction_ng_chiMinus2::synapse0x2abd7a0() {
   return (neuron0x2a9cbd0()*0.0137804);
}

double NNfunction_ng_chiMinus2::synapse0x2abd7e0() {
   return (neuron0x2a9cf10()*0.00870063);
}

double NNfunction_ng_chiMinus2::synapse0x2abd820() {
   return (neuron0x2a9d250()*0.0341527);
}

double NNfunction_ng_chiMinus2::synapse0x2abd860() {
   return (neuron0x2a9d590()*0.0047771);
}

double NNfunction_ng_chiMinus2::synapse0x2abd8a0() {
   return (neuron0x2a9d8d0()*1.31422);
}

double NNfunction_ng_chiMinus2::synapse0x2abd8e0() {
   return (neuron0x2a9dc10()*-0.174168);
}

double NNfunction_ng_chiMinus2::synapse0x2abd920() {
   return (neuron0x2a9df50()*-0.0364673);
}

double NNfunction_ng_chiMinus2::synapse0x2abd960() {
   return (neuron0x2a9e290()*0.0183216);
}

double NNfunction_ng_chiMinus2::synapse0x2abd9a0() {
   return (neuron0x2a9e5d0()*0.00979132);
}

double NNfunction_ng_chiMinus2::synapse0x2abd430() {
   return (neuron0x2a9e910()*-0.0196606);
}

double NNfunction_ng_chiMinus2::synapse0x2abd470() {
   return (neuron0x2a9ee70()*0.00199113);
}

double NNfunction_ng_chiMinus2::synapse0x2abdaf0() {
   return (neuron0x2a9f1b0()*0.0108434);
}

double NNfunction_ng_chiMinus2::synapse0x2abdb30() {
   return (neuron0x2a9f4f0()*-0.0231257);
}

double NNfunction_ng_chiMinus2::synapse0x2abdb70() {
   return (neuron0x2a9f830()*0.012579);
}

double NNfunction_ng_chiMinus2::synapse0x2abdbb0() {
   return (neuron0x2a9fb70()*-0.0142798);
}

double NNfunction_ng_chiMinus2::synapse0x2abdbf0() {
   return (neuron0x2a9feb0()*-0.0136085);
}

double NNfunction_ng_chiMinus2::synapse0x2abdc30() {
   return (neuron0x2aa01f0()*0.228023);
}

double NNfunction_ng_chiMinus2::synapse0x2aa66e0() {
   return (neuron0x2a9b5a0()*-0.0295083);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6720() {
   return (neuron0x2a9b850()*-0.00516123);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6760() {
   return (neuron0x2a9bb90()*-3.57783);
}

double NNfunction_ng_chiMinus2::synapse0x2aa67a0() {
   return (neuron0x2a9bed0()*0.0545487);
}

double NNfunction_ng_chiMinus2::synapse0x2aa67e0() {
   return (neuron0x2a9c210()*-0.00879065);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6820() {
   return (neuron0x2a9c550()*-0.00899136);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6860() {
   return (neuron0x2a9c890()*-0.0133699);
}

double NNfunction_ng_chiMinus2::synapse0x2aa68a0() {
   return (neuron0x2a9cbd0()*-0.0073253);
}

double NNfunction_ng_chiMinus2::synapse0x2abe3c0() {
   return (neuron0x2a9cf10()*-0.0108925);
}

double NNfunction_ng_chiMinus2::synapse0x2abe400() {
   return (neuron0x2a9d250()*-0.00666733);
}

double NNfunction_ng_chiMinus2::synapse0x2abe440() {
   return (neuron0x2a9d590()*-0.0124731);
}

double NNfunction_ng_chiMinus2::synapse0x2abe480() {
   return (neuron0x2a9d8d0()*-0.0101649);
}

double NNfunction_ng_chiMinus2::synapse0x2abe4c0() {
   return (neuron0x2a9dc10()*-0.071783);
}

double NNfunction_ng_chiMinus2::synapse0x2abe500() {
   return (neuron0x2a9df50()*-0.00268159);
}

double NNfunction_ng_chiMinus2::synapse0x2abe540() {
   return (neuron0x2a9e290()*-0.00544503);
}

double NNfunction_ng_chiMinus2::synapse0x2abe580() {
   return (neuron0x2a9e5d0()*0.000726417);
}

double NNfunction_ng_chiMinus2::synapse0x2abde00() {
   return (neuron0x2a9e910()*0.0175084);
}

double NNfunction_ng_chiMinus2::synapse0x2abde40() {
   return (neuron0x2a9ee70()*-0.00201187);
}

double NNfunction_ng_chiMinus2::synapse0x2abe6d0() {
   return (neuron0x2a9f1b0()*-0.0176536);
}

double NNfunction_ng_chiMinus2::synapse0x2abe710() {
   return (neuron0x2a9f4f0()*-0.00955959);
}

double NNfunction_ng_chiMinus2::synapse0x2abe750() {
   return (neuron0x2a9f830()*-0.0235237);
}

double NNfunction_ng_chiMinus2::synapse0x2abe790() {
   return (neuron0x2a9fb70()*-0.00596061);
}

double NNfunction_ng_chiMinus2::synapse0x2abe7d0() {
   return (neuron0x2a9feb0()*-0.00351888);
}

double NNfunction_ng_chiMinus2::synapse0x2abe810() {
   return (neuron0x2aa01f0()*-2.07704);
}

double NNfunction_ng_chiMinus2::synapse0x2abeb90() {
   return (neuron0x2a9b5a0()*0.126168);
}

double NNfunction_ng_chiMinus2::synapse0x2abebd0() {
   return (neuron0x2a9b850()*0.00944745);
}

double NNfunction_ng_chiMinus2::synapse0x2abec10() {
   return (neuron0x2a9bb90()*0.598915);
}

double NNfunction_ng_chiMinus2::synapse0x2abec50() {
   return (neuron0x2a9bed0()*0.991056);
}

double NNfunction_ng_chiMinus2::synapse0x2abec90() {
   return (neuron0x2a9c210()*-0.0713942);
}

double NNfunction_ng_chiMinus2::synapse0x2abecd0() {
   return (neuron0x2a9c550()*-0.00292944);
}

double NNfunction_ng_chiMinus2::synapse0x2abed10() {
   return (neuron0x2a9c890()*-0.0116176);
}

double NNfunction_ng_chiMinus2::synapse0x2abed50() {
   return (neuron0x2a9cbd0()*-0.0167557);
}

double NNfunction_ng_chiMinus2::synapse0x2abed90() {
   return (neuron0x2a9cf10()*-0.027359);
}

double NNfunction_ng_chiMinus2::synapse0x2abedd0() {
   return (neuron0x2a9d250()*-0.196467);
}

double NNfunction_ng_chiMinus2::synapse0x2abee10() {
   return (neuron0x2a9d590()*0.0424981);
}

double NNfunction_ng_chiMinus2::synapse0x2abee50() {
   return (neuron0x2a9d8d0()*1.34196);
}

double NNfunction_ng_chiMinus2::synapse0x2abee90() {
   return (neuron0x2a9dc10()*0.608602);
}

double NNfunction_ng_chiMinus2::synapse0x2abeed0() {
   return (neuron0x2a9df50()*0.0295461);
}

double NNfunction_ng_chiMinus2::synapse0x2abef10() {
   return (neuron0x2a9e290()*-0.132064);
}

double NNfunction_ng_chiMinus2::synapse0x2abef50() {
   return (neuron0x2a9e5d0()*-0.0610021);
}

double NNfunction_ng_chiMinus2::synapse0x2abe9e0() {
   return (neuron0x2a9e910()*-0.116169);
}

double NNfunction_ng_chiMinus2::synapse0x2abea20() {
   return (neuron0x2a9ee70()*-0.121878);
}

double NNfunction_ng_chiMinus2::synapse0x2abf0a0() {
   return (neuron0x2a9f1b0()*0.00127822);
}

double NNfunction_ng_chiMinus2::synapse0x2abf0e0() {
   return (neuron0x2a9f4f0()*0.00577336);
}

double NNfunction_ng_chiMinus2::synapse0x2abf120() {
   return (neuron0x2a9f830()*-0.0307198);
}

double NNfunction_ng_chiMinus2::synapse0x2abf160() {
   return (neuron0x2a9fb70()*-0.106683);
}

double NNfunction_ng_chiMinus2::synapse0x2abf1a0() {
   return (neuron0x2a9feb0()*-0.0238374);
}

double NNfunction_ng_chiMinus2::synapse0x2abf1e0() {
   return (neuron0x2aa01f0()*-0.225467);
}

double NNfunction_ng_chiMinus2::synapse0x2abf560() {
   return (neuron0x2a9b5a0()*-0.00310719);
}

double NNfunction_ng_chiMinus2::synapse0x2abf5a0() {
   return (neuron0x2a9b850()*-0.00684744);
}

double NNfunction_ng_chiMinus2::synapse0x2abf5e0() {
   return (neuron0x2a9bb90()*0.0690922);
}

double NNfunction_ng_chiMinus2::synapse0x2abf620() {
   return (neuron0x2a9bed0()*-0.250345);
}

double NNfunction_ng_chiMinus2::synapse0x2abf660() {
   return (neuron0x2a9c210()*0.0232185);
}

double NNfunction_ng_chiMinus2::synapse0x2abf6a0() {
   return (neuron0x2a9c550()*0.00134525);
}

double NNfunction_ng_chiMinus2::synapse0x2abf6e0() {
   return (neuron0x2a9c890()*0.0101615);
}

double NNfunction_ng_chiMinus2::synapse0x2abf720() {
   return (neuron0x2a9cbd0()*0.0322106);
}

double NNfunction_ng_chiMinus2::synapse0x2abf760() {
   return (neuron0x2a9cf10()*0.023223);
}

double NNfunction_ng_chiMinus2::synapse0x2abf7a0() {
   return (neuron0x2a9d250()*0.0318032);
}

double NNfunction_ng_chiMinus2::synapse0x2abf7e0() {
   return (neuron0x2a9d590()*0.0200733);
}

double NNfunction_ng_chiMinus2::synapse0x2abf820() {
   return (neuron0x2a9d8d0()*0.335008);
}

double NNfunction_ng_chiMinus2::synapse0x2abf860() {
   return (neuron0x2a9dc10()*0.057211);
}

double NNfunction_ng_chiMinus2::synapse0x2abf8a0() {
   return (neuron0x2a9df50()*0.00651623);
}

double NNfunction_ng_chiMinus2::synapse0x2abf8e0() {
   return (neuron0x2a9e290()*-0.0313812);
}

double NNfunction_ng_chiMinus2::synapse0x2abf920() {
   return (neuron0x2a9e5d0()*-0.00770829);
}

double NNfunction_ng_chiMinus2::synapse0x2abf3b0() {
   return (neuron0x2a9e910()*0.025524);
}

double NNfunction_ng_chiMinus2::synapse0x2abf3f0() {
   return (neuron0x2a9ee70()*-0.0134237);
}

double NNfunction_ng_chiMinus2::synapse0x2aaff20() {
   return (neuron0x2a9f1b0()*-0.000571753);
}

double NNfunction_ng_chiMinus2::synapse0x2aaff60() {
   return (neuron0x2a9f4f0()*-0.000651466);
}

double NNfunction_ng_chiMinus2::synapse0x2aaffa0() {
   return (neuron0x2a9f830()*0.0144643);
}

double NNfunction_ng_chiMinus2::synapse0x2aaffe0() {
   return (neuron0x2a9fb70()*0.014822);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0020() {
   return (neuron0x2a9feb0()*-0.00126066);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0060() {
   return (neuron0x2aa01f0()*0.576731);
}

double NNfunction_ng_chiMinus2::synapse0x2ab03e0() {
   return (neuron0x2a9b5a0()*-0.179315);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0420() {
   return (neuron0x2a9b850()*-0.192266);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0460() {
   return (neuron0x2a9bb90()*0.0606275);
}

double NNfunction_ng_chiMinus2::synapse0x2ab04a0() {
   return (neuron0x2a9bed0()*-0.610537);
}

double NNfunction_ng_chiMinus2::synapse0x2ab04e0() {
   return (neuron0x2a9c210()*0.059709);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0520() {
   return (neuron0x2a9c550()*0.169855);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0560() {
   return (neuron0x2a9c890()*0.090081);
}

double NNfunction_ng_chiMinus2::synapse0x2ab05a0() {
   return (neuron0x2a9cbd0()*-0.215763);
}

double NNfunction_ng_chiMinus2::synapse0x2ab05e0() {
   return (neuron0x2a9cf10()*-0.127548);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0620() {
   return (neuron0x2a9d250()*-0.258705);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0660() {
   return (neuron0x2a9d590()*-0.0750008);
}

double NNfunction_ng_chiMinus2::synapse0x2ab06a0() {
   return (neuron0x2a9d8d0()*0.378325);
}

double NNfunction_ng_chiMinus2::synapse0x2ab06e0() {
   return (neuron0x2a9dc10()*-0.169213);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0720() {
   return (neuron0x2a9df50()*0.174104);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0760() {
   return (neuron0x2a9e290()*0.133133);
}

double NNfunction_ng_chiMinus2::synapse0x2ab07a0() {
   return (neuron0x2a9e5d0()*-0.0357508);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0230() {
   return (neuron0x2a9e910()*-0.201085);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0270() {
   return (neuron0x2a9ee70()*0.378339);
}

double NNfunction_ng_chiMinus2::synapse0x2ab08f0() {
   return (neuron0x2a9f1b0()*0.134366);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0930() {
   return (neuron0x2a9f4f0()*-0.033947);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0970() {
   return (neuron0x2a9f830()*-0.188238);
}

double NNfunction_ng_chiMinus2::synapse0x2ab09b0() {
   return (neuron0x2a9fb70()*0.00638744);
}

double NNfunction_ng_chiMinus2::synapse0x2ab09f0() {
   return (neuron0x2a9feb0()*-0.168363);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0a30() {
   return (neuron0x2aa01f0()*0.188422);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0db0() {
   return (neuron0x2a9b5a0()*0.0238781);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0df0() {
   return (neuron0x2a9b850()*0.0408729);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0e30() {
   return (neuron0x2a9bb90()*-0.0891284);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0e70() {
   return (neuron0x2a9bed0()*0.0586842);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0eb0() {
   return (neuron0x2a9c210()*-0.0357404);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0ef0() {
   return (neuron0x2a9c550()*0.0680532);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0f30() {
   return (neuron0x2a9c890()*0.00877686);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0f70() {
   return (neuron0x2a9cbd0()*-0.0534889);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0fb0() {
   return (neuron0x2a9cf10()*-0.00480038);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0ff0() {
   return (neuron0x2a9d250()*0.123563);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1030() {
   return (neuron0x2a9d590()*0.03459);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1070() {
   return (neuron0x2a9d8d0()*-0.369539);
}

double NNfunction_ng_chiMinus2::synapse0x2ab10b0() {
   return (neuron0x2a9dc10()*0.0398727);
}

double NNfunction_ng_chiMinus2::synapse0x2ab10f0() {
   return (neuron0x2a9df50()*-0.133813);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1130() {
   return (neuron0x2a9e290()*0.0791498);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1170() {
   return (neuron0x2a9e5d0()*-0.0153571);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0c00() {
   return (neuron0x2a9e910()*-0.105495);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0c40() {
   return (neuron0x2a9ee70()*0.114801);
}

double NNfunction_ng_chiMinus2::synapse0x2ab12c0() {
   return (neuron0x2a9f1b0()*0.0398814);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1300() {
   return (neuron0x2a9f4f0()*-0.0491691);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1340() {
   return (neuron0x2a9f830()*-0.0783112);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1380() {
   return (neuron0x2a9fb70()*-0.0440326);
}

double NNfunction_ng_chiMinus2::synapse0x2ab13c0() {
   return (neuron0x2a9feb0()*-0.0120053);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1400() {
   return (neuron0x2aa01f0()*-0.158171);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1780() {
   return (neuron0x2a9b5a0()*0.0473517);
}

double NNfunction_ng_chiMinus2::synapse0x2ab17c0() {
   return (neuron0x2a9b850()*-0.0378416);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1800() {
   return (neuron0x2a9bb90()*0.129375);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1840() {
   return (neuron0x2a9bed0()*0.49144);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1880() {
   return (neuron0x2a9c210()*0.00513989);
}

double NNfunction_ng_chiMinus2::synapse0x2ab18c0() {
   return (neuron0x2a9c550()*-0.0471558);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1900() {
   return (neuron0x2a9c890()*0.0348564);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1940() {
   return (neuron0x2a9cbd0()*0.0105488);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1980() {
   return (neuron0x2a9cf10()*0.0567097);
}

double NNfunction_ng_chiMinus2::synapse0x2ab19c0() {
   return (neuron0x2a9d250()*-0.0333346);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1a00() {
   return (neuron0x2a9d590()*0.0480785);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1a40() {
   return (neuron0x2a9d8d0()*-0.756162);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1a80() {
   return (neuron0x2a9dc10()*0.196704);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1ac0() {
   return (neuron0x2a9df50()*-0.0493163);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1b00() {
   return (neuron0x2a9e290()*0.0312969);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1b40() {
   return (neuron0x2a9e5d0()*-0.0766254);
}

double NNfunction_ng_chiMinus2::synapse0x2ab15d0() {
   return (neuron0x2a9e910()*-0.00297199);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1610() {
   return (neuron0x2a9ee70()*-0.0699486);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1c90() {
   return (neuron0x2a9f1b0()*0.0106703);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1cd0() {
   return (neuron0x2a9f4f0()*0.00622291);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1d10() {
   return (neuron0x2a9f830()*0.0618436);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1d50() {
   return (neuron0x2a9fb70()*0.0664153);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1d90() {
   return (neuron0x2a9feb0()*0.0356878);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1dd0() {
   return (neuron0x2aa01f0()*-0.522616);
}

double NNfunction_ng_chiMinus2::synapse0x2ac3ca0() {
   return (neuron0x2a9b5a0()*-0.0216358);
}

double NNfunction_ng_chiMinus2::synapse0x2ac3ce0() {
   return (neuron0x2a9b850()*-0.00286974);
}

double NNfunction_ng_chiMinus2::synapse0x2ac3d20() {
   return (neuron0x2a9bb90()*-0.0314503);
}

double NNfunction_ng_chiMinus2::synapse0x2ac3d60() {
   return (neuron0x2a9bed0()*-4.44346);
}

double NNfunction_ng_chiMinus2::synapse0x2ac3da0() {
   return (neuron0x2a9c210()*-0.0124128);
}

double NNfunction_ng_chiMinus2::synapse0x2ac3de0() {
   return (neuron0x2a9c550()*0.00270949);
}

double NNfunction_ng_chiMinus2::synapse0x2ac3e20() {
   return (neuron0x2a9c890()*-0.0507861);
}

double NNfunction_ng_chiMinus2::synapse0x2ac3e60() {
   return (neuron0x2a9cbd0()*-0.0139907);
}

double NNfunction_ng_chiMinus2::synapse0x2ac3ea0() {
   return (neuron0x2a9cf10()*-0.0449505);
}

double NNfunction_ng_chiMinus2::synapse0x2ac3ee0() {
   return (neuron0x2a9d250()*-0.0111178);
}

double NNfunction_ng_chiMinus2::synapse0x2ac3f20() {
   return (neuron0x2a9d590()*-0.00998295);
}

double NNfunction_ng_chiMinus2::synapse0x2ac3f60() {
   return (neuron0x2a9d8d0()*-0.106653);
}

double NNfunction_ng_chiMinus2::synapse0x2ac3fa0() {
   return (neuron0x2a9dc10()*-0.132523);
}

double NNfunction_ng_chiMinus2::synapse0x2ac3fe0() {
   return (neuron0x2a9df50()*-0.017024);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4020() {
   return (neuron0x2a9e290()*-0.0385266);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4060() {
   return (neuron0x2a9e5d0()*0.0631764);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1e10() {
   return (neuron0x2a9e910()*0.00790035);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1e50() {
   return (neuron0x2a9ee70()*0.000398011);
}

double NNfunction_ng_chiMinus2::synapse0x2ac41b0() {
   return (neuron0x2a9f1b0()*0.0319268);
}

double NNfunction_ng_chiMinus2::synapse0x2ac41f0() {
   return (neuron0x2a9f4f0()*-0.00364629);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4230() {
   return (neuron0x2a9f830()*-0.010827);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4270() {
   return (neuron0x2a9fb70()*0.00923947);
}

double NNfunction_ng_chiMinus2::synapse0x2ac42b0() {
   return (neuron0x2a9feb0()*0.0118694);
}

double NNfunction_ng_chiMinus2::synapse0x2ac42f0() {
   return (neuron0x2aa01f0()*-0.314124);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4670() {
   return (neuron0x2a9b5a0()*-0.0232382);
}

double NNfunction_ng_chiMinus2::synapse0x2ac46b0() {
   return (neuron0x2a9b850()*0.0525473);
}

double NNfunction_ng_chiMinus2::synapse0x2ac46f0() {
   return (neuron0x2a9bb90()*-1.24883);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4730() {
   return (neuron0x2a9bed0()*-2.03568);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4770() {
   return (neuron0x2a9c210()*-0.104452);
}

double NNfunction_ng_chiMinus2::synapse0x2ac47b0() {
   return (neuron0x2a9c550()*0.0076862);
}

double NNfunction_ng_chiMinus2::synapse0x2ac47f0() {
   return (neuron0x2a9c890()*0.0187441);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4830() {
   return (neuron0x2a9cbd0()*0.041063);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4870() {
   return (neuron0x2a9cf10()*-0.0484375);
}

double NNfunction_ng_chiMinus2::synapse0x2ac48b0() {
   return (neuron0x2a9d250()*-0.0386147);
}

double NNfunction_ng_chiMinus2::synapse0x2ac48f0() {
   return (neuron0x2a9d590()*-0.00790506);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4930() {
   return (neuron0x2a9d8d0()*0.0921777);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4970() {
   return (neuron0x2a9dc10()*1.2117);
}

double NNfunction_ng_chiMinus2::synapse0x2ac49b0() {
   return (neuron0x2a9df50()*0.0145963);
}

double NNfunction_ng_chiMinus2::synapse0x2ac49f0() {
   return (neuron0x2a9e290()*0.0562207);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4a30() {
   return (neuron0x2a9e5d0()*0.114749);
}

double NNfunction_ng_chiMinus2::synapse0x2ac44c0() {
   return (neuron0x2a9e910()*0.0911849);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4500() {
   return (neuron0x2a9ee70()*0.125751);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4b80() {
   return (neuron0x2a9f1b0()*0.108264);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4bc0() {
   return (neuron0x2a9f4f0()*-0.0816912);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4c00() {
   return (neuron0x2a9f830()*-0.0235588);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4c40() {
   return (neuron0x2a9fb70()*-0.0320289);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4c80() {
   return (neuron0x2a9feb0()*-0.00364095);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4cc0() {
   return (neuron0x2aa01f0()*0.227548);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5040() {
   return (neuron0x2a9b5a0()*0.0235155);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5080() {
   return (neuron0x2a9b850()*-0.0142379);
}

double NNfunction_ng_chiMinus2::synapse0x2ac50c0() {
   return (neuron0x2a9bb90()*0.154667);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5100() {
   return (neuron0x2a9bed0()*1.57282);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5140() {
   return (neuron0x2a9c210()*0.0566941);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5180() {
   return (neuron0x2a9c550()*0.0757359);
}

double NNfunction_ng_chiMinus2::synapse0x2ac51c0() {
   return (neuron0x2a9c890()*0.00439346);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5200() {
   return (neuron0x2a9cbd0()*0.0559866);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5240() {
   return (neuron0x2a9cf10()*0.00794521);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5280() {
   return (neuron0x2a9d250()*0.0333577);
}

double NNfunction_ng_chiMinus2::synapse0x2ac52c0() {
   return (neuron0x2a9d590()*0.0675514);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5300() {
   return (neuron0x2a9d8d0()*-1.27282);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5340() {
   return (neuron0x2a9dc10()*-0.274768);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5380() {
   return (neuron0x2a9df50()*-0.0948648);
}

double NNfunction_ng_chiMinus2::synapse0x2ac53c0() {
   return (neuron0x2a9e290()*-0.0155109);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5400() {
   return (neuron0x2a9e5d0()*0.0512313);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4e90() {
   return (neuron0x2a9e910()*-0.0424648);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4ed0() {
   return (neuron0x2a9ee70()*-0.0332374);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5550() {
   return (neuron0x2a9f1b0()*0.044012);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5590() {
   return (neuron0x2a9f4f0()*-0.0336454);
}

double NNfunction_ng_chiMinus2::synapse0x2ac55d0() {
   return (neuron0x2a9f830()*0.0331145);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5610() {
   return (neuron0x2a9fb70()*0.00944983);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5650() {
   return (neuron0x2a9feb0()*-0.024672);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5690() {
   return (neuron0x2aa01f0()*-0.346783);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5a10() {
   return (neuron0x2a9b5a0()*0.0185806);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5a50() {
   return (neuron0x2a9b850()*-0.00197611);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5a90() {
   return (neuron0x2a9bb90()*0.519674);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5ad0() {
   return (neuron0x2a9bed0()*0.0283382);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5b10() {
   return (neuron0x2a9c210()*-0.00607289);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5b50() {
   return (neuron0x2a9c550()*-0.00116344);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5b90() {
   return (neuron0x2a9c890()*-0.0117322);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5bd0() {
   return (neuron0x2a9cbd0()*0.00177748);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5c10() {
   return (neuron0x2a9cf10()*0.00595471);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5c50() {
   return (neuron0x2a9d250()*-0.0101942);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5c90() {
   return (neuron0x2a9d590()*-0.0018554);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5cd0() {
   return (neuron0x2a9d8d0()*-0.0284181);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5d10() {
   return (neuron0x2a9dc10()*0.000253229);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5d50() {
   return (neuron0x2a9df50()*-0.000443332);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5d90() {
   return (neuron0x2a9e290()*0.00316494);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5dd0() {
   return (neuron0x2a9e5d0()*0.0073151);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5860() {
   return (neuron0x2a9e910()*-0.00614082);
}

double NNfunction_ng_chiMinus2::synapse0x2ac58a0() {
   return (neuron0x2a9ee70()*0.00966404);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5f20() {
   return (neuron0x2a9f1b0()*0.00427413);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5f60() {
   return (neuron0x2a9f4f0()*0.00704078);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5fa0() {
   return (neuron0x2a9f830()*0.00311749);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5fe0() {
   return (neuron0x2a9fb70()*-0.000914763);
}

double NNfunction_ng_chiMinus2::synapse0x2ac6020() {
   return (neuron0x2a9feb0()*-0.000342222);
}

double NNfunction_ng_chiMinus2::synapse0x2ac6060() {
   return (neuron0x2aa01f0()*-1.38265);
}

double NNfunction_ng_chiMinus2::synapse0x2865e40() {
   return (neuron0x2aa0660()*-1.2252);
}

double NNfunction_ng_chiMinus2::synapse0x2865e80() {
   return (neuron0x2aa0ea0()*-0.0862532);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2a10() {
   return (neuron0x2aa1980()*0.036593);
}

double NNfunction_ng_chiMinus2::synapse0x2aa2a50() {
   return (neuron0x2aa1420()*-1.20466);
}

double NNfunction_ng_chiMinus2::synapse0x2aa44e0() {
   return (neuron0x2aa2760()*-0.0781387);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4520() {
   return (neuron0x2aa4230()*0.024614);
}

double NNfunction_ng_chiMinus2::synapse0x2aa52b0() {
   return (neuron0x2aa5000()*-0.48993);
}

double NNfunction_ng_chiMinus2::synapse0x2aa52f0() {
   return (neuron0x2aa59d0()*0.197137);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5c80() {
   return (neuron0x2aa63a0()*-2.01043);
}

double NNfunction_ng_chiMinus2::synapse0x2aa5cc0() {
   return (neuron0x2aa6e80()*-0.667447);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6650() {
   return (neuron0x2aa7850()*-0.979108);
}

double NNfunction_ng_chiMinus2::synapse0x2aa6690() {
   return (neuron0x2aa4930()*-0.694806);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7130() {
   return (neuron0x2aa9400()*-0.0914746);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7170() {
   return (neuron0x2aa9dd0()*-0.269318);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7b00() {
   return (neuron0x2aaa7a0()*-0.234114);
}

double NNfunction_ng_chiMinus2::synapse0x2aa7b40() {
   return (neuron0x2aab170()*0.910356);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4be0() {
   return (neuron0x2aacf80()*-0.0272757);
}

double NNfunction_ng_chiMinus2::synapse0x2aa4c20() {
   return (neuron0x2aad260()*-0.248909);
}

double NNfunction_ng_chiMinus2::synapse0x2aa96b0() {
   return (neuron0x2aadc30()*-0.0320143);
}

double NNfunction_ng_chiMinus2::synapse0x2aa96f0() {
   return (neuron0x2aae600()*0.111058);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa080() {
   return (neuron0x2aaefd0()*-0.345933);
}

double NNfunction_ng_chiMinus2::synapse0x2aaa0c0() {
   return (neuron0x2aaf9a0()*0.612436);
}

double NNfunction_ng_chiMinus2::synapse0x2aaaa50() {
   return (neuron0x2aa84f0()*-0.0784876);
}

double NNfunction_ng_chiMinus2::synapse0x2aaaa90() {
   return (neuron0x2aa8ec0()*0.470763);
}

double NNfunction_ng_chiMinus2::synapse0x2aab420() {
   return (neuron0x2ab2730()*-0.0175124);
}

double NNfunction_ng_chiMinus2::synapse0x2aab460() {
   return (neuron0x2ab3100()*-0.0542919);
}

double NNfunction_ng_chiMinus2::synapse0x2a9e4b0() {
   return (neuron0x2ab3ad0()*-0.0168526);
}

double NNfunction_ng_chiMinus2::synapse0x2a9e4f0() {
   return (neuron0x2ab44a0()*0.233479);
}

double NNfunction_ng_chiMinus2::synapse0x2aad510() {
   return (neuron0x2ab4e70()*-0.164808);
}

double NNfunction_ng_chiMinus2::synapse0x2aad550() {
   return (neuron0x2ab5840()*-0.129253);
}

double NNfunction_ng_chiMinus2::synapse0x2aadee0() {
   return (neuron0x2ab6210()*-1.11597);
}

double NNfunction_ng_chiMinus2::synapse0x2aadf20() {
   return (neuron0x2ab6be0()*-0.0591491);
}

double NNfunction_ng_chiMinus2::synapse0x2aae8b0() {
   return (neuron0x2aacc70()*0.0387879);
}

double NNfunction_ng_chiMinus2::synapse0x2aae8f0() {
   return (neuron0x2ab97c0()*0.561782);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf280() {
   return (neuron0x2aba190()*-0.251203);
}

double NNfunction_ng_chiMinus2::synapse0x2aaf2c0() {
   return (neuron0x2abab60()*-0.20241);
}

double NNfunction_ng_chiMinus2::synapse0x2aafc50() {
   return (neuron0x2abb530()*0.893067);
}

double NNfunction_ng_chiMinus2::synapse0x2aafc90() {
   return (neuron0x2abbf00()*-0.897389);
}

double NNfunction_ng_chiMinus2::synapse0x2aa87a0() {
   return (neuron0x2abc8d0()*0.115361);
}

double NNfunction_ng_chiMinus2::synapse0x2aa87e0() {
   return (neuron0x2abd2a0()*-0.195048);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2050() {
   return (neuron0x2abdc70()*-0.393229);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2090() {
   return (neuron0x2abe850()*-0.0803637);
}

double NNfunction_ng_chiMinus2::synapse0x2ab29e0() {
   return (neuron0x2abf220()*-0.162189);
}

double NNfunction_ng_chiMinus2::synapse0x2ab2a20() {
   return (neuron0x2ab00a0()*0.0350167);
}

double NNfunction_ng_chiMinus2::synapse0x2ab33b0() {
   return (neuron0x2ab0a70()*0.215525);
}

double NNfunction_ng_chiMinus2::synapse0x2ab33f0() {
   return (neuron0x2ab1440()*0.30283);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3d80() {
   return (neuron0x2ac3a80()*1.10531);
}

double NNfunction_ng_chiMinus2::synapse0x2ab3dc0() {
   return (neuron0x2ac4330()*-0.215896);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4750() {
   return (neuron0x2ac4d00()*0.760378);
}

double NNfunction_ng_chiMinus2::synapse0x2ab4790() {
   return (neuron0x2ac56d0()*-0.789464);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6e90() {
   return (neuron0x2aa0660()*1.20042);
}

double NNfunction_ng_chiMinus2::synapse0x2ab6ed0() {
   return (neuron0x2aa0ea0()*0.120904);
}

double NNfunction_ng_chiMinus2::synapse0x2aac450() {
   return (neuron0x2aa1980()*-0.129766);
}

double NNfunction_ng_chiMinus2::synapse0x2aac490() {
   return (neuron0x2aa1420()*-0.366777);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9a70() {
   return (neuron0x2aa2760()*0.0629188);
}

double NNfunction_ng_chiMinus2::synapse0x2ab9ab0() {
   return (neuron0x2aa4230()*-0.121973);
}

double NNfunction_ng_chiMinus2::synapse0x2aba440() {
   return (neuron0x2aa5000()*-0.577073);
}

double NNfunction_ng_chiMinus2::synapse0x2aba480() {
   return (neuron0x2aa59d0()*0.0984584);
}

double NNfunction_ng_chiMinus2::synapse0x2abae10() {
   return (neuron0x2aa63a0()*-0.124572);
}

double NNfunction_ng_chiMinus2::synapse0x2abae50() {
   return (neuron0x2aa6e80()*-0.692087);
}

double NNfunction_ng_chiMinus2::synapse0x2abb7e0() {
   return (neuron0x2aa7850()*-0.00120167);
}

double NNfunction_ng_chiMinus2::synapse0x2abb820() {
   return (neuron0x2aa4930()*-0.288098);
}

double NNfunction_ng_chiMinus2::synapse0x2abc1b0() {
   return (neuron0x2aa9400()*-0.113594);
}

double NNfunction_ng_chiMinus2::synapse0x2abc1f0() {
   return (neuron0x2aa9dd0()*0.788723);
}

double NNfunction_ng_chiMinus2::synapse0x2abcb80() {
   return (neuron0x2aaa7a0()*0.516054);
}

double NNfunction_ng_chiMinus2::synapse0x2abcbc0() {
   return (neuron0x2aab170()*-1.6997);
}

double NNfunction_ng_chiMinus2::synapse0x2abd550() {
   return (neuron0x2aacf80()*-0.0587039);
}

double NNfunction_ng_chiMinus2::synapse0x2abd590() {
   return (neuron0x2aad260()*-1.17655);
}

double NNfunction_ng_chiMinus2::synapse0x2abdf20() {
   return (neuron0x2aadc30()*-0.0391272);
}

double NNfunction_ng_chiMinus2::synapse0x2abdf60() {
   return (neuron0x2aae600()*-0.803296);
}

double NNfunction_ng_chiMinus2::synapse0x2abeb00() {
   return (neuron0x2aaefd0()*-0.247239);
}

double NNfunction_ng_chiMinus2::synapse0x2abeb40() {
   return (neuron0x2aaf9a0()*-0.19007);
}

double NNfunction_ng_chiMinus2::synapse0x2abf4d0() {
   return (neuron0x2aa84f0()*0.0433097);
}

double NNfunction_ng_chiMinus2::synapse0x2abf510() {
   return (neuron0x2aa8ec0()*-1.73145);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0350() {
   return (neuron0x2ab2730()*-0.0912318);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0390() {
   return (neuron0x2ab3100()*-0.451221);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0d20() {
   return (neuron0x2ab3ad0()*-0.0389024);
}

double NNfunction_ng_chiMinus2::synapse0x2ab0d60() {
   return (neuron0x2ab44a0()*-0.57866);
}

double NNfunction_ng_chiMinus2::synapse0x2ab16f0() {
   return (neuron0x2ab4e70()*-0.953648);
}

double NNfunction_ng_chiMinus2::synapse0x2ab1730() {
   return (neuron0x2ab5840()*-0.327986);
}

double NNfunction_ng_chiMinus2::synapse0x2ac3c10() {
   return (neuron0x2ab6210()*-0.64677);
}

double NNfunction_ng_chiMinus2::synapse0x2ac3c50() {
   return (neuron0x2ab6be0()*-0.0449498);
}

double NNfunction_ng_chiMinus2::synapse0x2ac45e0() {
   return (neuron0x2aacc70()*0.592139);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4620() {
   return (neuron0x2ab97c0()*-0.434203);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4fb0() {
   return (neuron0x2aba190()*-0.351538);
}

double NNfunction_ng_chiMinus2::synapse0x2ac4ff0() {
   return (neuron0x2abab60()*0.641197);
}

double NNfunction_ng_chiMinus2::synapse0x2ac5980() {
   return (neuron0x2abb530()*0.85175);
}

double NNfunction_ng_chiMinus2::synapse0x2ac59c0() {
   return (neuron0x2abbf00()*0.625246);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0910() {
   return (neuron0x2abc8d0()*-0.368494);
}

double NNfunction_ng_chiMinus2::synapse0x2aa0950() {
   return (neuron0x2abd2a0()*-0.37043);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5120() {
   return (neuron0x2abdc70()*-0.747662);
}

double NNfunction_ng_chiMinus2::synapse0x2ab5160() {
   return (neuron0x2abe850()*-0.338919);
}

double NNfunction_ng_chiMinus2::synapse0x2ac60a0() {
   return (neuron0x2abf220()*-1.02959);
}

double NNfunction_ng_chiMinus2::synapse0x2ac60e0() {
   return (neuron0x2ab00a0()*-0.437262);
}

double NNfunction_ng_chiMinus2::synapse0x2ac6120() {
   return (neuron0x2ab0a70()*0.0287444);
}

double NNfunction_ng_chiMinus2::synapse0x2ac6160() {
   return (neuron0x2ab1440()*-0.363578);
}

double NNfunction_ng_chiMinus2::synapse0x2acd010() {
   return (neuron0x2ac3a80()*-2.37897);
}

double NNfunction_ng_chiMinus2::synapse0x2acd050() {
   return (neuron0x2ac4330()*-0.179313);
}

double NNfunction_ng_chiMinus2::synapse0x2acd090() {
   return (neuron0x2ac4d00()*-0.395056);
}

double NNfunction_ng_chiMinus2::synapse0x2acd0d0() {
   return (neuron0x2ac56d0()*0.33906);
}

double NNfunction_ng_chiMinus2::synapse0x2acd450() {
   return (neuron0x2aa0660()*1.90147);
}

double NNfunction_ng_chiMinus2::synapse0x2acd490() {
   return (neuron0x2aa0ea0()*-0.3554);
}

double NNfunction_ng_chiMinus2::synapse0x2acd4d0() {
   return (neuron0x2aa1980()*-0.0100651);
}

double NNfunction_ng_chiMinus2::synapse0x2acd510() {
   return (neuron0x2aa1420()*1.37913);
}

double NNfunction_ng_chiMinus2::synapse0x2acd550() {
   return (neuron0x2aa2760()*-0.10936);
}

double NNfunction_ng_chiMinus2::synapse0x2acd590() {
   return (neuron0x2aa4230()*0.0151883);
}

double NNfunction_ng_chiMinus2::synapse0x2acd5d0() {
   return (neuron0x2aa5000()*0.836091);
}

double NNfunction_ng_chiMinus2::synapse0x2acd610() {
   return (neuron0x2aa59d0()*-0.434727);
}

double NNfunction_ng_chiMinus2::synapse0x2acd650() {
   return (neuron0x2aa63a0()*2.94864);
}

double NNfunction_ng_chiMinus2::synapse0x2acd690() {
   return (neuron0x2aa6e80()*-0.433074);
}

double NNfunction_ng_chiMinus2::synapse0x2acd6d0() {
   return (neuron0x2aa7850()*-0.118825);
}

double NNfunction_ng_chiMinus2::synapse0x2acd710() {
   return (neuron0x2aa4930()*-1.339);
}

double NNfunction_ng_chiMinus2::synapse0x2acd750() {
   return (neuron0x2aa9400()*-0.00239332);
}

double NNfunction_ng_chiMinus2::synapse0x2acd790() {
   return (neuron0x2aa9dd0()*0.730646);
}

double NNfunction_ng_chiMinus2::synapse0x2acd7d0() {
   return (neuron0x2aaa7a0()*-0.0309922);
}

double NNfunction_ng_chiMinus2::synapse0x2acd810() {
   return (neuron0x2aab170()*-0.907802);
}

double NNfunction_ng_chiMinus2::synapse0x2acd2a0() {
   return (neuron0x2aacf80()*-0.019039);
}

double NNfunction_ng_chiMinus2::synapse0x2acd2e0() {
   return (neuron0x2aad260()*-0.0241113);
}

double NNfunction_ng_chiMinus2::synapse0x2acd960() {
   return (neuron0x2aadc30()*-0.210489);
}

double NNfunction_ng_chiMinus2::synapse0x2acd9a0() {
   return (neuron0x2aae600()*-0.0753689);
}

double NNfunction_ng_chiMinus2::synapse0x2acd9e0() {
   return (neuron0x2aaefd0()*0.585097);
}

double NNfunction_ng_chiMinus2::synapse0x2acda20() {
   return (neuron0x2aaf9a0()*-3.45832);
}

double NNfunction_ng_chiMinus2::synapse0x2acda60() {
   return (neuron0x2aa84f0()*-0.0335274);
}

double NNfunction_ng_chiMinus2::synapse0x2acdaa0() {
   return (neuron0x2aa8ec0()*-1.24657);
}

double NNfunction_ng_chiMinus2::synapse0x2acdae0() {
   return (neuron0x2ab2730()*-0.0167065);
}

double NNfunction_ng_chiMinus2::synapse0x2acdb20() {
   return (neuron0x2ab3100()*0.091442);
}

double NNfunction_ng_chiMinus2::synapse0x2acdb60() {
   return (neuron0x2ab3ad0()*-0.203486);
}

double NNfunction_ng_chiMinus2::synapse0x2acdba0() {
   return (neuron0x2ab44a0()*-0.0319395);
}

double NNfunction_ng_chiMinus2::synapse0x2acdbe0() {
   return (neuron0x2ab4e70()*-0.45237);
}

double NNfunction_ng_chiMinus2::synapse0x2acdc20() {
   return (neuron0x2ab5840()*-0.150812);
}

double NNfunction_ng_chiMinus2::synapse0x2acdc60() {
   return (neuron0x2ab6210()*2.67341);
}

double NNfunction_ng_chiMinus2::synapse0x2acdca0() {
   return (neuron0x2ab6be0()*-0.0297767);
}

double NNfunction_ng_chiMinus2::synapse0x2acd850() {
   return (neuron0x2aacc70()*-0.0561806);
}

double NNfunction_ng_chiMinus2::synapse0x2acd890() {
   return (neuron0x2ab97c0()*0.29559);
}

double NNfunction_ng_chiMinus2::synapse0x2acd8d0() {
   return (neuron0x2aba190()*0.235215);
}

double NNfunction_ng_chiMinus2::synapse0x2acd910() {
   return (neuron0x2abab60()*0.946063);
}

double NNfunction_ng_chiMinus2::synapse0x2acdef0() {
   return (neuron0x2abb530()*1.9524);
}

double NNfunction_ng_chiMinus2::synapse0x2acdf30() {
   return (neuron0x2abbf00()*0.586614);
}

double NNfunction_ng_chiMinus2::synapse0x2acdf70() {
   return (neuron0x2abc8d0()*-0.031533);
}

double NNfunction_ng_chiMinus2::synapse0x2acdfb0() {
   return (neuron0x2abd2a0()*0.482516);
}

double NNfunction_ng_chiMinus2::synapse0x2acdff0() {
   return (neuron0x2abdc70()*0.964732);
}

double NNfunction_ng_chiMinus2::synapse0x2ace030() {
   return (neuron0x2abe850()*0.275192);
}

double NNfunction_ng_chiMinus2::synapse0x2ace070() {
   return (neuron0x2abf220()*0.904577);
}

double NNfunction_ng_chiMinus2::synapse0x2ace0b0() {
   return (neuron0x2ab00a0()*-0.0868745);
}

double NNfunction_ng_chiMinus2::synapse0x2ace0f0() {
   return (neuron0x2ab0a70()*-0.0200585);
}

double NNfunction_ng_chiMinus2::synapse0x2ace130() {
   return (neuron0x2ab1440()*-0.121975);
}

double NNfunction_ng_chiMinus2::synapse0x2ace170() {
   return (neuron0x2ac3a80()*0.524562);
}

double NNfunction_ng_chiMinus2::synapse0x2ace1b0() {
   return (neuron0x2ac4330()*-0.402623);
}

double NNfunction_ng_chiMinus2::synapse0x2ace1f0() {
   return (neuron0x2ac4d00()*-0.582059);
}

double NNfunction_ng_chiMinus2::synapse0x2ace230() {
   return (neuron0x2ac56d0()*2.29878);
}

double NNfunction_ng_chiMinus2::synapse0x2ace5b0() {
   return (neuron0x2aa0660()*-2.44981);
}

double NNfunction_ng_chiMinus2::synapse0x2ace5f0() {
   return (neuron0x2aa0ea0()*0.714799);
}

double NNfunction_ng_chiMinus2::synapse0x2ace630() {
   return (neuron0x2aa1980()*0.0765032);
}

double NNfunction_ng_chiMinus2::synapse0x2ace670() {
   return (neuron0x2aa1420()*0.674082);
}

double NNfunction_ng_chiMinus2::synapse0x2ace6b0() {
   return (neuron0x2aa2760()*-0.0711427);
}

double NNfunction_ng_chiMinus2::synapse0x2ace6f0() {
   return (neuron0x2aa4230()*0.0700264);
}

double NNfunction_ng_chiMinus2::synapse0x2ace730() {
   return (neuron0x2aa5000()*0.0749752);
}

double NNfunction_ng_chiMinus2::synapse0x2ace770() {
   return (neuron0x2aa59d0()*0.580848);
}

double NNfunction_ng_chiMinus2::synapse0x2ace7b0() {
   return (neuron0x2aa63a0()*-2.3229);
}

double NNfunction_ng_chiMinus2::synapse0x2ace7f0() {
   return (neuron0x2aa6e80()*0.0361292);
}

double NNfunction_ng_chiMinus2::synapse0x2ace830() {
   return (neuron0x2aa7850()*-1.54206);
}

double NNfunction_ng_chiMinus2::synapse0x2ace870() {
   return (neuron0x2aa4930()*1.06161);
}

double NNfunction_ng_chiMinus2::synapse0x2ace8b0() {
   return (neuron0x2aa9400()*-0.0142692);
}

double NNfunction_ng_chiMinus2::synapse0x2ace8f0() {
   return (neuron0x2aa9dd0()*-0.145936);
}

double NNfunction_ng_chiMinus2::synapse0x2ace930() {
   return (neuron0x2aaa7a0()*-0.401388);
}

double NNfunction_ng_chiMinus2::synapse0x2ace970() {
   return (neuron0x2aab170()*1.21772);
}

double NNfunction_ng_chiMinus2::synapse0x2ace400() {
   return (neuron0x2aacf80()*0.0445554);
}

double NNfunction_ng_chiMinus2::synapse0x2ace440() {
   return (neuron0x2aad260()*-0.242551);
}

double NNfunction_ng_chiMinus2::synapse0x2aceac0() {
   return (neuron0x2aadc30()*0.622673);
}

double NNfunction_ng_chiMinus2::synapse0x2aceb00() {
   return (neuron0x2aae600()*-1.50842);
}

double NNfunction_ng_chiMinus2::synapse0x2aceb40() {
   return (neuron0x2aaefd0()*0.809914);
}

double NNfunction_ng_chiMinus2::synapse0x2aceb80() {
   return (neuron0x2aaf9a0()*2.48264);
}

double NNfunction_ng_chiMinus2::synapse0x2acebc0() {
   return (neuron0x2aa84f0()*-0.0198028);
}

double NNfunction_ng_chiMinus2::synapse0x2acec00() {
   return (neuron0x2aa8ec0()*0.638231);
}

double NNfunction_ng_chiMinus2::synapse0x2acec40() {
   return (neuron0x2ab2730()*-0.195916);
}

double NNfunction_ng_chiMinus2::synapse0x2acec80() {
   return (neuron0x2ab3100()*-0.189434);
}

double NNfunction_ng_chiMinus2::synapse0x2acecc0() {
   return (neuron0x2ab3ad0()*0.050685);
}

double NNfunction_ng_chiMinus2::synapse0x2aced00() {
   return (neuron0x2ab44a0()*-0.0131829);
}

double NNfunction_ng_chiMinus2::synapse0x2aced40() {
   return (neuron0x2ab4e70()*-1.42125);
}

double NNfunction_ng_chiMinus2::synapse0x2aced80() {
   return (neuron0x2ab5840()*-0.283384);
}

double NNfunction_ng_chiMinus2::synapse0x2acedc0() {
   return (neuron0x2ab6210()*-2.0116);
}

double NNfunction_ng_chiMinus2::synapse0x2acee00() {
   return (neuron0x2ab6be0()*0.0145873);
}

double NNfunction_ng_chiMinus2::synapse0x2ace9b0() {
   return (neuron0x2aacc70()*0.00533143);
}

double NNfunction_ng_chiMinus2::synapse0x2ace9f0() {
   return (neuron0x2ab97c0()*0.216762);
}

double NNfunction_ng_chiMinus2::synapse0x2acea30() {
   return (neuron0x2aba190()*0.0764762);
}

double NNfunction_ng_chiMinus2::synapse0x2acea70() {
   return (neuron0x2abab60()*-0.360681);
}

double NNfunction_ng_chiMinus2::synapse0x2acf050() {
   return (neuron0x2abb530()*-1.34567);
}

double NNfunction_ng_chiMinus2::synapse0x2acf090() {
   return (neuron0x2abbf00()*0.576636);
}

double NNfunction_ng_chiMinus2::synapse0x2acf0d0() {
   return (neuron0x2abc8d0()*0.0564233);
}

double NNfunction_ng_chiMinus2::synapse0x2acf110() {
   return (neuron0x2abd2a0()*-0.778475);
}

double NNfunction_ng_chiMinus2::synapse0x2acf150() {
   return (neuron0x2abdc70()*-0.601516);
}

double NNfunction_ng_chiMinus2::synapse0x2acf190() {
   return (neuron0x2abe850()*0.113086);
}

double NNfunction_ng_chiMinus2::synapse0x2acf1d0() {
   return (neuron0x2abf220()*-0.394383);
}

double NNfunction_ng_chiMinus2::synapse0x2acf210() {
   return (neuron0x2ab00a0()*0.120054);
}

double NNfunction_ng_chiMinus2::synapse0x2acf250() {
   return (neuron0x2ab0a70()*-0.163863);
}

double NNfunction_ng_chiMinus2::synapse0x2acf290() {
   return (neuron0x2ab1440()*-0.212943);
}

double NNfunction_ng_chiMinus2::synapse0x2acf2d0() {
   return (neuron0x2ac3a80()*1.53314);
}

double NNfunction_ng_chiMinus2::synapse0x2acf310() {
   return (neuron0x2ac4330()*-1.3584);
}

double NNfunction_ng_chiMinus2::synapse0x2acf350() {
   return (neuron0x2ac4d00()*-1.112);
}

double NNfunction_ng_chiMinus2::synapse0x2acf390() {
   return (neuron0x2ac56d0()*-1.72584);
}

double NNfunction_ng_chiMinus2::synapse0x2acf710() {
   return (neuron0x2aa0660()*0.303659);
}

double NNfunction_ng_chiMinus2::synapse0x2acf750() {
   return (neuron0x2aa0ea0()*0.085009);
}

double NNfunction_ng_chiMinus2::synapse0x2acf790() {
   return (neuron0x2aa1980()*0.0365921);
}

double NNfunction_ng_chiMinus2::synapse0x2acf7d0() {
   return (neuron0x2aa1420()*0.592447);
}

double NNfunction_ng_chiMinus2::synapse0x2acf810() {
   return (neuron0x2aa2760()*-0.0123143);
}

double NNfunction_ng_chiMinus2::synapse0x2acf850() {
   return (neuron0x2aa4230()*0.0224552);
}

double NNfunction_ng_chiMinus2::synapse0x2acf890() {
   return (neuron0x2aa5000()*0.350794);
}

double NNfunction_ng_chiMinus2::synapse0x2acf8d0() {
   return (neuron0x2aa59d0()*0.178558);
}

double NNfunction_ng_chiMinus2::synapse0x2acf910() {
   return (neuron0x2aa63a0()*1.55804);
}

double NNfunction_ng_chiMinus2::synapse0x2acf950() {
   return (neuron0x2aa6e80()*1.8804);
}

double NNfunction_ng_chiMinus2::synapse0x2acf990() {
   return (neuron0x2aa7850()*-0.115022);
}

double NNfunction_ng_chiMinus2::synapse0x2acf9d0() {
   return (neuron0x2aa4930()*-0.994669);
}

double NNfunction_ng_chiMinus2::synapse0x2acfa10() {
   return (neuron0x2aa9400()*-0.028335);
}

double NNfunction_ng_chiMinus2::synapse0x2acfa50() {
   return (neuron0x2aa9dd0()*-0.0862523);
}

double NNfunction_ng_chiMinus2::synapse0x2acfa90() {
   return (neuron0x2aaa7a0()*-0.0764517);
}

double NNfunction_ng_chiMinus2::synapse0x2acfad0() {
   return (neuron0x2aab170()*-0.110578);
}

double NNfunction_ng_chiMinus2::synapse0x2acf560() {
   return (neuron0x2aacf80()*0.0157785);
}

double NNfunction_ng_chiMinus2::synapse0x2acf5a0() {
   return (neuron0x2aad260()*-0.0924589);
}

double NNfunction_ng_chiMinus2::synapse0x2acfc20() {
   return (neuron0x2aadc30()*0.0171828);
}

double NNfunction_ng_chiMinus2::synapse0x2acfc60() {
   return (neuron0x2aae600()*-0.290658);
}

double NNfunction_ng_chiMinus2::synapse0x2acfca0() {
   return (neuron0x2aaefd0()*0.350082);
}

double NNfunction_ng_chiMinus2::synapse0x2acfce0() {
   return (neuron0x2aaf9a0()*-1.99025);
}

double NNfunction_ng_chiMinus2::synapse0x2acfd20() {
   return (neuron0x2aa84f0()*-0.00920349);
}

double NNfunction_ng_chiMinus2::synapse0x2acfd60() {
   return (neuron0x2aa8ec0()*-1.71621);
}

double NNfunction_ng_chiMinus2::synapse0x2acfda0() {
   return (neuron0x2ab2730()*-0.0494487);
}

double NNfunction_ng_chiMinus2::synapse0x2acfde0() {
   return (neuron0x2ab3100()*-0.0330945);
}

double NNfunction_ng_chiMinus2::synapse0x2acfe20() {
   return (neuron0x2ab3ad0()*0.00706364);
}

double NNfunction_ng_chiMinus2::synapse0x2acfe60() {
   return (neuron0x2ab44a0()*0.0911711);
}

double NNfunction_ng_chiMinus2::synapse0x2acfea0() {
   return (neuron0x2ab4e70()*0.0609612);
}

double NNfunction_ng_chiMinus2::synapse0x2acfee0() {
   return (neuron0x2ab5840()*-0.0423188);
}

double NNfunction_ng_chiMinus2::synapse0x2acff20() {
   return (neuron0x2ab6210()*0.490408);
}

double NNfunction_ng_chiMinus2::synapse0x2acff60() {
   return (neuron0x2ab6be0()*-0.0057953);
}

double NNfunction_ng_chiMinus2::synapse0x2acfb10() {
   return (neuron0x2aacc70()*-0.0503029);
}

double NNfunction_ng_chiMinus2::synapse0x2acfb50() {
   return (neuron0x2ab97c0()*0.18912);
}

double NNfunction_ng_chiMinus2::synapse0x2acfb90() {
   return (neuron0x2aba190()*-0.0667971);
}

double NNfunction_ng_chiMinus2::synapse0x2acfbd0() {
   return (neuron0x2abab60()*1.91402);
}

double NNfunction_ng_chiMinus2::synapse0x2ad01b0() {
   return (neuron0x2abb530()*0.535346);
}

double NNfunction_ng_chiMinus2::synapse0x2ad01f0() {
   return (neuron0x2abbf00()*0.0689961);
}

double NNfunction_ng_chiMinus2::synapse0x2ad0230() {
   return (neuron0x2abc8d0()*0.0533615);
}

double NNfunction_ng_chiMinus2::synapse0x2ad0270() {
   return (neuron0x2abd2a0()*0.431817);
}

double NNfunction_ng_chiMinus2::synapse0x2ad02b0() {
   return (neuron0x2abdc70()*1.7234);
}

double NNfunction_ng_chiMinus2::synapse0x2ad02f0() {
   return (neuron0x2abe850()*0.00876643);
}

double NNfunction_ng_chiMinus2::synapse0x2ad0330() {
   return (neuron0x2abf220()*1.50781);
}

double NNfunction_ng_chiMinus2::synapse0x2ad0370() {
   return (neuron0x2ab00a0()*0.0553014);
}

double NNfunction_ng_chiMinus2::synapse0x2ad03b0() {
   return (neuron0x2ab0a70()*-0.354383);
}

double NNfunction_ng_chiMinus2::synapse0x2ad03f0() {
   return (neuron0x2ab1440()*-0.219721);
}

double NNfunction_ng_chiMinus2::synapse0x2ad0430() {
   return (neuron0x2ac3a80()*-0.362263);
}

double NNfunction_ng_chiMinus2::synapse0x2ad0470() {
   return (neuron0x2ac4330()*-0.061248);
}

double NNfunction_ng_chiMinus2::synapse0x2ad04b0() {
   return (neuron0x2ac4d00()*0.106191);
}

double NNfunction_ng_chiMinus2::synapse0x2ad04f0() {
   return (neuron0x2ac56d0()*0.707181);
}

double NNfunction_ng_chiMinus2::synapse0x2ad0750() {
   return (neuron0x2acc8d0()*2.68178);
}

double NNfunction_ng_chiMinus2::synapse0x2ad0790() {
   return (neuron0x2accc70()*-1.01738);
}

double NNfunction_ng_chiMinus2::synapse0x2ad07d0() {
   return (neuron0x2acd110()*-5.83168);
}

double NNfunction_ng_chiMinus2::synapse0x2ad0810() {
   return (neuron0x2ace270()*5.95218);
}

double NNfunction_ng_chiMinus2::synapse0x2ad0850() {
   return (neuron0x2acf3d0()*-5.20077);
}

