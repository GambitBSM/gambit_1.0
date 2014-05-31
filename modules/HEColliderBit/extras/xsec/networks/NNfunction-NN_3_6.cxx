#include "NNfunction-NN_3_6.h"
#include <cmath>

double NNfunction-NN_3_6::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.3893)/15.1742;
   input1 = (in1 - -11.9899)/1229.31;
   input2 = (in2 - 266.223)/237.293;
   input3 = (in3 - -23.3575)/842.102;
   input4 = (in4 - 1073.5)/932.552;
   input5 = (in5 - 917.626)/954.096;
   input6 = (in6 - 922.712)/950.351;
   input7 = (in7 - 940.835)/930.93;
   input8 = (in8 - 933.087)/976.543;
   input9 = (in9 - 919.478)/964.366;
   input10 = (in10 - 971.788)/954.07;
   input11 = (in11 - 696.861)/866.194;
   input12 = (in12 - 736.379)/876.624;
   input13 = (in13 - 503.84)/522.641;
   input14 = (in14 - 707.294)/804.628;
   input15 = (in15 - 708.747)/806.459;
   input16 = (in16 - 524.646)/561.561;
   input17 = (in17 - 764.036)/906.08;
   input18 = (in18 - 764.454)/909.26;
   input19 = (in19 - 779.406)/868.451;
   input20 = (in20 - -5.62142)/488.554;
   input21 = (in21 - -6.9827)/1142.76;
   input22 = (in22 - 1.81489)/1195.3;
   input23 = (in23 - -48.8648)/265.59;
   switch(index) {
     case 0:
         return neuron0x1aec9a0();
     default:
         return 0.;
   }
}

double NNfunction-NN_3_6::Value(int index, double* input) {
   input0 = (input[0] - 23.3893)/15.1742;
   input1 = (input[1] - -11.9899)/1229.31;
   input2 = (input[2] - 266.223)/237.293;
   input3 = (input[3] - -23.3575)/842.102;
   input4 = (input[4] - 1073.5)/932.552;
   input5 = (input[5] - 917.626)/954.096;
   input6 = (input[6] - 922.712)/950.351;
   input7 = (input[7] - 940.835)/930.93;
   input8 = (input[8] - 933.087)/976.543;
   input9 = (input[9] - 919.478)/964.366;
   input10 = (input[10] - 971.788)/954.07;
   input11 = (input[11] - 696.861)/866.194;
   input12 = (input[12] - 736.379)/876.624;
   input13 = (input[13] - 503.84)/522.641;
   input14 = (input[14] - 707.294)/804.628;
   input15 = (input[15] - 708.747)/806.459;
   input16 = (input[16] - 524.646)/561.561;
   input17 = (input[17] - 764.036)/906.08;
   input18 = (input[18] - 764.454)/909.26;
   input19 = (input[19] - 779.406)/868.451;
   input20 = (input[20] - -5.62142)/488.554;
   input21 = (input[21] - -6.9827)/1142.76;
   input22 = (input[22] - 1.81489)/1195.3;
   input23 = (input[23] - -48.8648)/265.59;
   switch(index) {
     case 0:
         return neuron0x1aec9a0();
     default:
         return 0.;
   }
}

double NNfunction-NN_3_6::neuron0x1ab8a60() {
   return input0;
}

double NNfunction-NN_3_6::neuron0x1ab8da0() {
   return input1;
}

double NNfunction-NN_3_6::neuron0x1ab90e0() {
   return input2;
}

double NNfunction-NN_3_6::neuron0x1ab9420() {
   return input3;
}

double NNfunction-NN_3_6::neuron0x1ab9760() {
   return input4;
}

double NNfunction-NN_3_6::neuron0x1ab9aa0() {
   return input5;
}

double NNfunction-NN_3_6::neuron0x1ab9de0() {
   return input6;
}

double NNfunction-NN_3_6::neuron0x1aba120() {
   return input7;
}

double NNfunction-NN_3_6::neuron0x1aba460() {
   return input8;
}

double NNfunction-NN_3_6::neuron0x1aba7a0() {
   return input9;
}

double NNfunction-NN_3_6::neuron0x1abaae0() {
   return input10;
}

double NNfunction-NN_3_6::neuron0x1abae20() {
   return input11;
}

double NNfunction-NN_3_6::neuron0x1abb160() {
   return input12;
}

double NNfunction-NN_3_6::neuron0x1abb4a0() {
   return input13;
}

double NNfunction-NN_3_6::neuron0x1abb7e0() {
   return input14;
}

double NNfunction-NN_3_6::neuron0x1abbb20() {
   return input15;
}

double NNfunction-NN_3_6::neuron0x1abbe60() {
   return input16;
}

double NNfunction-NN_3_6::neuron0x1abc3c0() {
   return input17;
}

double NNfunction-NN_3_6::neuron0x1abc5e0() {
   return input18;
}

double NNfunction-NN_3_6::neuron0x1abc920() {
   return input19;
}

double NNfunction-NN_3_6::neuron0x1abcc60() {
   return input20;
}

double NNfunction-NN_3_6::neuron0x1abcfa0() {
   return input21;
}

double NNfunction-NN_3_6::neuron0x1abd2e0() {
   return input22;
}

double NNfunction-NN_3_6::neuron0x1abd620() {
   return input23;
}

double NNfunction-NN_3_6::input0x1abdac0() {
   double input = -4.35215;
   input += synapse0x18788d0();
   input += synapse0x1ab8920();
   input += synapse0x1ab8960();
   input += synapse0x1abdd70();
   input += synapse0x1abddb0();
   input += synapse0x1abddf0();
   input += synapse0x1abde30();
   input += synapse0x1abde70();
   input += synapse0x1abdeb0();
   input += synapse0x1abdef0();
   input += synapse0x1abdf30();
   input += synapse0x1abdf70();
   input += synapse0x1abdfb0();
   input += synapse0x1abdff0();
   input += synapse0x1abe030();
   input += synapse0x1abe070();
   input += synapse0x1ab8890();
   input += synapse0x1ab88d0();
   input += synapse0x186a170();
   input += synapse0x186a1b0();
   input += synapse0x1abe2d0();
   input += synapse0x1abe310();
   input += synapse0x1abe350();
   input += synapse0x1abe390();
   return input;
}

double NNfunction-NN_3_6::neuron0x1abdac0() {
   double input = input0x1abdac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1abe3d0() {
   double input = 1.15697;
   input += synapse0x1abe710();
   input += synapse0x1abe750();
   input += synapse0x1abe790();
   input += synapse0x1abe7d0();
   input += synapse0x1abe810();
   input += synapse0x1abe850();
   input += synapse0x1abe890();
   input += synapse0x1abe8d0();
   input += synapse0x1abe910();
   input += synapse0x1abe1c0();
   input += synapse0x1abe200();
   input += synapse0x1abe240();
   input += synapse0x1abe280();
   input += synapse0x1abeb60();
   input += synapse0x1abeba0();
   input += synapse0x1abebe0();
   input += synapse0x1abe560();
   input += synapse0x1abe5a0();
   input += synapse0x1abed30();
   input += synapse0x1abed70();
   input += synapse0x1abedb0();
   input += synapse0x1abedf0();
   input += synapse0x1abee30();
   input += synapse0x1abee70();
   return input;
}

double NNfunction-NN_3_6::neuron0x1abe3d0() {
   double input = input0x1abe3d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1abeeb0() {
   double input = 0.84745;
   input += synapse0x1abf1f0();
   input += synapse0x1abf230();
   input += synapse0x1abf270();
   input += synapse0x1abf2b0();
   input += synapse0x1abf2f0();
   input += synapse0x1abf330();
   input += synapse0x1abf370();
   input += synapse0x1abf3b0();
   input += synapse0x1abf3f0();
   input += synapse0x1abf430();
   input += synapse0x1abf470();
   input += synapse0x1abf4b0();
   input += synapse0x1abf4f0();
   input += synapse0x1abf530();
   input += synapse0x1abf570();
   input += synapse0x1abf5b0();
   input += synapse0x1abf040();
   input += synapse0x1abf080();
   input += synapse0x1877fc0();
   input += synapse0x1878000();
   input += synapse0x1aa7af0();
   input += synapse0x1aa7b30();
   input += synapse0x1aa7b70();
   input += synapse0x1ab89a0();
   return input;
}

double NNfunction-NN_3_6::neuron0x1abeeb0() {
   double input = input0x1abeeb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1878740() {
   double input = 0.0490698;
   input += synapse0x1abeb00();
   input += synapse0x1ab89e0();
   input += synapse0x1ab8a20();
   input += synapse0x1abf700();
   input += synapse0x1abf740();
   input += synapse0x1abf780();
   input += synapse0x1abf7c0();
   input += synapse0x1abf800();
   input += synapse0x1abf840();
   input += synapse0x1abf880();
   input += synapse0x1abf8c0();
   input += synapse0x1abf900();
   input += synapse0x1abf940();
   input += synapse0x1abf980();
   input += synapse0x1abf9c0();
   input += synapse0x1abfa00();
   input += synapse0x1abe950();
   input += synapse0x1abe990();
   input += synapse0x1abfb50();
   input += synapse0x1abfb90();
   input += synapse0x1abfbd0();
   input += synapse0x1abfc10();
   input += synapse0x1abfc50();
   input += synapse0x1abfc90();
   return input;
}

double NNfunction-NN_3_6::neuron0x1878740() {
   double input = input0x1878740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1abfcd0() {
   double input = -0.359614;
   input += synapse0x1ac0010();
   input += synapse0x1ac0050();
   input += synapse0x1ac0090();
   input += synapse0x1ac00d0();
   input += synapse0x1ac0110();
   input += synapse0x1ac0150();
   input += synapse0x1ac0190();
   input += synapse0x1ac01d0();
   input += synapse0x1ac0210();
   input += synapse0x1ac0250();
   input += synapse0x1ac0290();
   input += synapse0x1ac02d0();
   input += synapse0x1ac0310();
   input += synapse0x1ac0350();
   input += synapse0x1ac0390();
   input += synapse0x1ac03d0();
   input += synapse0x1abfe60();
   input += synapse0x1abfea0();
   input += synapse0x1ac0520();
   input += synapse0x1ac0560();
   input += synapse0x1ac05a0();
   input += synapse0x1ac05e0();
   input += synapse0x1ac0620();
   input += synapse0x1ac0660();
   return input;
}

double NNfunction-NN_3_6::neuron0x1abfcd0() {
   double input = input0x1abfcd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ac06a0() {
   double input = 1.33324;
   input += synapse0x1ac09e0();
   input += synapse0x1ac0a20();
   input += synapse0x1ac0a60();
   input += synapse0x1ac0aa0();
   input += synapse0x1ac0ae0();
   input += synapse0x1ac0b20();
   input += synapse0x1ac0b60();
   input += synapse0x1ac0ba0();
   input += synapse0x1ac0be0();
   input += synapse0x1878330();
   input += synapse0x1878370();
   input += synapse0x18783b0();
   input += synapse0x18783f0();
   input += synapse0x1878430();
   input += synapse0x1878470();
   input += synapse0x18784b0();
   input += synapse0x1ac0830();
   input += synapse0x1ac0870();
   input += synapse0x1878600();
   input += synapse0x1878640();
   input += synapse0x1878680();
   input += synapse0x18786c0();
   input += synapse0x1878700();
   input += synapse0x1ac1430();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ac06a0() {
   double input = input0x1ac06a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ac1470() {
   double input = 0.345809;
   input += synapse0x1ac17b0();
   input += synapse0x1ac17f0();
   input += synapse0x1ac1830();
   input += synapse0x1ac1870();
   input += synapse0x1ac18b0();
   input += synapse0x1ac18f0();
   input += synapse0x1ac1930();
   input += synapse0x1ac1970();
   input += synapse0x1ac19b0();
   input += synapse0x1ac19f0();
   input += synapse0x1ac1a30();
   input += synapse0x1ac1a70();
   input += synapse0x1ac1ab0();
   input += synapse0x1ac1af0();
   input += synapse0x1ac1b30();
   input += synapse0x1ac1b70();
   input += synapse0x1ac1600();
   input += synapse0x1ac1640();
   input += synapse0x1ac1cc0();
   input += synapse0x1ac1d00();
   input += synapse0x1ac1d40();
   input += synapse0x1ac1d80();
   input += synapse0x1ac1dc0();
   input += synapse0x1ac1e00();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ac1470() {
   double input = input0x1ac1470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ac1e40() {
   double input = 5.80854;
   input += synapse0x1ac2180();
   input += synapse0x1ac21c0();
   input += synapse0x1ac2200();
   input += synapse0x1ac2240();
   input += synapse0x1ac2280();
   input += synapse0x1ac22c0();
   input += synapse0x1ac2300();
   input += synapse0x1ac2340();
   input += synapse0x1ac2380();
   input += synapse0x1ac23c0();
   input += synapse0x1ac2400();
   input += synapse0x1ac2440();
   input += synapse0x1ac2480();
   input += synapse0x1ac24c0();
   input += synapse0x1ac2500();
   input += synapse0x1ac2540();
   input += synapse0x1ac1fd0();
   input += synapse0x1ac2010();
   input += synapse0x1ac2690();
   input += synapse0x1ac26d0();
   input += synapse0x1ac2710();
   input += synapse0x1ac2750();
   input += synapse0x1ac2790();
   input += synapse0x1ac27d0();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ac1e40() {
   double input = input0x1ac1e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ac2810() {
   double input = 1.81231;
   input += synapse0x1abc2b0();
   input += synapse0x1abc2f0();
   input += synapse0x1abc330();
   input += synapse0x1abc370();
   input += synapse0x1ac2d60();
   input += synapse0x1ac2da0();
   input += synapse0x1ac2de0();
   input += synapse0x1ac2e20();
   input += synapse0x1ac2e60();
   input += synapse0x1ac2ea0();
   input += synapse0x1ac2ee0();
   input += synapse0x1ac2f20();
   input += synapse0x1ac2f60();
   input += synapse0x1ac2fa0();
   input += synapse0x1ac2fe0();
   input += synapse0x1ac3020();
   input += synapse0x1ac29a0();
   input += synapse0x1ac29e0();
   input += synapse0x1ac3170();
   input += synapse0x1ac31b0();
   input += synapse0x1ac31f0();
   input += synapse0x1ac3230();
   input += synapse0x1ac3270();
   input += synapse0x1ac32b0();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ac2810() {
   double input = input0x1ac2810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ac32f0() {
   double input = -2.15961;
   input += synapse0x1ac3630();
   input += synapse0x1ac3670();
   input += synapse0x1ac36b0();
   input += synapse0x1ac36f0();
   input += synapse0x1ac3730();
   input += synapse0x1ac3770();
   input += synapse0x1ac37b0();
   input += synapse0x1ac37f0();
   input += synapse0x1ac3830();
   input += synapse0x1ac3870();
   input += synapse0x1ac38b0();
   input += synapse0x1ac38f0();
   input += synapse0x1ac3930();
   input += synapse0x1ac3970();
   input += synapse0x1ac39b0();
   input += synapse0x1ac39f0();
   input += synapse0x1ac3480();
   input += synapse0x1ac34c0();
   input += synapse0x1ac3b40();
   input += synapse0x1ac3b80();
   input += synapse0x1ac3bc0();
   input += synapse0x1ac3c00();
   input += synapse0x1ac3c40();
   input += synapse0x1ac3c80();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ac32f0() {
   double input = input0x1ac32f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ac3cc0() {
   double input = 4.79679;
   input += synapse0x1ac4000();
   input += synapse0x1ac4040();
   input += synapse0x1ac4080();
   input += synapse0x1ac40c0();
   input += synapse0x1ac4100();
   input += synapse0x1ac4140();
   input += synapse0x1ac4180();
   input += synapse0x1ac41c0();
   input += synapse0x1ac4200();
   input += synapse0x1ac4240();
   input += synapse0x1ac4280();
   input += synapse0x1ac42c0();
   input += synapse0x1ac4300();
   input += synapse0x1ac4340();
   input += synapse0x1ac4380();
   input += synapse0x1ac43c0();
   input += synapse0x1ac3e50();
   input += synapse0x1ac3e90();
   input += synapse0x1ac0c20();
   input += synapse0x1ac0c60();
   input += synapse0x1ac0ca0();
   input += synapse0x1ac0ce0();
   input += synapse0x1ac0d20();
   input += synapse0x1ac0d60();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ac3cc0() {
   double input = input0x1ac3cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ac0da0() {
   double input = 2.42207;
   input += synapse0x1ac10e0();
   input += synapse0x1ac1120();
   input += synapse0x1ac1160();
   input += synapse0x1ac11a0();
   input += synapse0x1ac11e0();
   input += synapse0x1ac1220();
   input += synapse0x1ac1260();
   input += synapse0x1ac12a0();
   input += synapse0x1ac12e0();
   input += synapse0x1ac1320();
   input += synapse0x1ac1360();
   input += synapse0x1ac13a0();
   input += synapse0x1ac13e0();
   input += synapse0x1ac5520();
   input += synapse0x1ac5560();
   input += synapse0x1ac55a0();
   input += synapse0x1ac0f30();
   input += synapse0x1ac0f70();
   input += synapse0x1ac56f0();
   input += synapse0x1ac5730();
   input += synapse0x1ac5770();
   input += synapse0x1ac57b0();
   input += synapse0x1ac57f0();
   input += synapse0x1ac5830();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ac0da0() {
   double input = input0x1ac0da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ac5870() {
   double input = 0.182561;
   input += synapse0x1ac5bb0();
   input += synapse0x1ac5bf0();
   input += synapse0x1ac5c30();
   input += synapse0x1ac5c70();
   input += synapse0x1ac5cb0();
   input += synapse0x1ac5cf0();
   input += synapse0x1ac5d30();
   input += synapse0x1ac5d70();
   input += synapse0x1ac5db0();
   input += synapse0x1ac5df0();
   input += synapse0x1ac5e30();
   input += synapse0x1ac5e70();
   input += synapse0x1ac5eb0();
   input += synapse0x1ac5ef0();
   input += synapse0x1ac5f30();
   input += synapse0x1ac5f70();
   input += synapse0x1ac5a00();
   input += synapse0x1ac5a40();
   input += synapse0x1ac60c0();
   input += synapse0x1ac6100();
   input += synapse0x1ac6140();
   input += synapse0x1ac6180();
   input += synapse0x1ac61c0();
   input += synapse0x1ac6200();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ac5870() {
   double input = input0x1ac5870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ac6240() {
   double input = -0.434437;
   input += synapse0x1ac6580();
   input += synapse0x1ac65c0();
   input += synapse0x1ac6600();
   input += synapse0x1ac6640();
   input += synapse0x1ac6680();
   input += synapse0x1ac66c0();
   input += synapse0x1ac6700();
   input += synapse0x1ac6740();
   input += synapse0x1ac6780();
   input += synapse0x1ac67c0();
   input += synapse0x1ac6800();
   input += synapse0x1ac6840();
   input += synapse0x1ac6880();
   input += synapse0x1ac68c0();
   input += synapse0x1ac6900();
   input += synapse0x1ac6940();
   input += synapse0x1ac63d0();
   input += synapse0x1ac6410();
   input += synapse0x1ac6a90();
   input += synapse0x1ac6ad0();
   input += synapse0x1ac6b10();
   input += synapse0x1ac6b50();
   input += synapse0x1ac6b90();
   input += synapse0x1ac6bd0();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ac6240() {
   double input = input0x1ac6240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ac6c10() {
   double input = 0.644372;
   input += synapse0x1ac6f50();
   input += synapse0x1ac6f90();
   input += synapse0x1ac6fd0();
   input += synapse0x1ac7010();
   input += synapse0x1ac7050();
   input += synapse0x1ac7090();
   input += synapse0x1ac70d0();
   input += synapse0x1ac7110();
   input += synapse0x1ac7150();
   input += synapse0x1ac7190();
   input += synapse0x1ac71d0();
   input += synapse0x1ac7210();
   input += synapse0x1ac7250();
   input += synapse0x1ac7290();
   input += synapse0x1ac72d0();
   input += synapse0x1ac7310();
   input += synapse0x1ac6da0();
   input += synapse0x1ac6de0();
   input += synapse0x1ac7460();
   input += synapse0x1ac74a0();
   input += synapse0x1ac74e0();
   input += synapse0x1ac7520();
   input += synapse0x1ac7560();
   input += synapse0x1ac75a0();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ac6c10() {
   double input = input0x1ac6c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ac75e0() {
   double input = -2.52325;
   input += synapse0x1ac7920();
   input += synapse0x1ab8c80();
   input += synapse0x1ab8cc0();
   input += synapse0x1ab8fc0();
   input += synapse0x1ab9000();
   input += synapse0x1ab9300();
   input += synapse0x1ab9340();
   input += synapse0x1ab9640();
   input += synapse0x1ab9680();
   input += synapse0x1ab9980();
   input += synapse0x1ab99c0();
   input += synapse0x1ab9cc0();
   input += synapse0x1ab9d00();
   input += synapse0x1aba000();
   input += synapse0x1aba040();
   input += synapse0x1aba340();
   input += synapse0x1aba380();
   input += synapse0x1aba680();
   input += synapse0x1aba6c0();
   input += synapse0x1aba9c0();
   input += synapse0x1abaa00();
   input += synapse0x1abad00();
   input += synapse0x1abad40();
   input += synapse0x1abb040();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ac75e0() {
   double input = input0x1ac75e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ac93f0() {
   double input = 0.266441;
   input += synapse0x1abb080();
   input += synapse0x1abbd40();
   input += synapse0x1abbd80();
   input += synapse0x1ac7770();
   input += synapse0x1ac77b0();
   input += synapse0x1abc080();
   input += synapse0x1abc0c0();
   input += synapse0x186a050();
   input += synapse0x186a090();
   input += synapse0x1abc800();
   input += synapse0x1abc840();
   input += synapse0x1abcb40();
   input += synapse0x1abcb80();
   input += synapse0x1abce80();
   input += synapse0x1abcec0();
   input += synapse0x1abd1c0();
   input += synapse0x1abd200();
   input += synapse0x1abd500();
   input += synapse0x1abd540();
   input += synapse0x1abd840();
   input += synapse0x1abd880();
   input += synapse0x1abb380();
   input += synapse0x1abb3c0();
   input += synapse0x1ac9690();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ac93f0() {
   double input = input0x1ac93f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ac96d0() {
   double input = 0.720237;
   input += synapse0x1ac9a10();
   input += synapse0x1ac9a50();
   input += synapse0x1ac9a90();
   input += synapse0x1ac9ad0();
   input += synapse0x1ac9b10();
   input += synapse0x1ac9b50();
   input += synapse0x1ac9b90();
   input += synapse0x1ac9bd0();
   input += synapse0x1ac9c10();
   input += synapse0x1ac9c50();
   input += synapse0x1ac9c90();
   input += synapse0x1ac9cd0();
   input += synapse0x1ac9d10();
   input += synapse0x1ac9d50();
   input += synapse0x1ac9d90();
   input += synapse0x1ac9dd0();
   input += synapse0x1ac9860();
   input += synapse0x1ac98a0();
   input += synapse0x1ac9f20();
   input += synapse0x1ac9f60();
   input += synapse0x1ac9fa0();
   input += synapse0x1ac9fe0();
   input += synapse0x1aca020();
   input += synapse0x1aca060();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ac96d0() {
   double input = input0x1ac96d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1aca0a0() {
   double input = 0.222657;
   input += synapse0x1aca3e0();
   input += synapse0x1aca420();
   input += synapse0x1aca460();
   input += synapse0x1aca4a0();
   input += synapse0x1aca4e0();
   input += synapse0x1aca520();
   input += synapse0x1aca560();
   input += synapse0x1aca5a0();
   input += synapse0x1aca5e0();
   input += synapse0x1aca620();
   input += synapse0x1aca660();
   input += synapse0x1aca6a0();
   input += synapse0x1aca6e0();
   input += synapse0x1aca720();
   input += synapse0x1aca760();
   input += synapse0x1aca7a0();
   input += synapse0x1aca230();
   input += synapse0x1aca270();
   input += synapse0x1aca8f0();
   input += synapse0x1aca930();
   input += synapse0x1aca970();
   input += synapse0x1aca9b0();
   input += synapse0x1aca9f0();
   input += synapse0x1acaa30();
   return input;
}

double NNfunction-NN_3_6::neuron0x1aca0a0() {
   double input = input0x1aca0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1acaa70() {
   double input = -1.0267;
   input += synapse0x1acadb0();
   input += synapse0x1acadf0();
   input += synapse0x1acae30();
   input += synapse0x1acae70();
   input += synapse0x1acaeb0();
   input += synapse0x1acaef0();
   input += synapse0x1acaf30();
   input += synapse0x1acaf70();
   input += synapse0x1acafb0();
   input += synapse0x1acaff0();
   input += synapse0x1acb030();
   input += synapse0x1acb070();
   input += synapse0x1acb0b0();
   input += synapse0x1acb0f0();
   input += synapse0x1acb130();
   input += synapse0x1acb170();
   input += synapse0x1acac00();
   input += synapse0x1acac40();
   input += synapse0x1acb2c0();
   input += synapse0x1acb300();
   input += synapse0x1acb340();
   input += synapse0x1acb380();
   input += synapse0x1acb3c0();
   input += synapse0x1acb400();
   return input;
}

double NNfunction-NN_3_6::neuron0x1acaa70() {
   double input = input0x1acaa70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1acb440() {
   double input = -2.16287;
   input += synapse0x1acb780();
   input += synapse0x1acb7c0();
   input += synapse0x1acb800();
   input += synapse0x1acb840();
   input += synapse0x1acb880();
   input += synapse0x1acb8c0();
   input += synapse0x1acb900();
   input += synapse0x1acb940();
   input += synapse0x1acb980();
   input += synapse0x1acb9c0();
   input += synapse0x1acba00();
   input += synapse0x1acba40();
   input += synapse0x1acba80();
   input += synapse0x1acbac0();
   input += synapse0x1acbb00();
   input += synapse0x1acbb40();
   input += synapse0x1acb5d0();
   input += synapse0x1acb610();
   input += synapse0x1acbc90();
   input += synapse0x1acbcd0();
   input += synapse0x1acbd10();
   input += synapse0x1acbd50();
   input += synapse0x1acbd90();
   input += synapse0x1acbdd0();
   return input;
}

double NNfunction-NN_3_6::neuron0x1acb440() {
   double input = input0x1acb440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1acbe10() {
   double input = 0.331562;
   input += synapse0x1acc150();
   input += synapse0x1acc190();
   input += synapse0x1acc1d0();
   input += synapse0x1acc210();
   input += synapse0x1acc250();
   input += synapse0x1acc290();
   input += synapse0x1acc2d0();
   input += synapse0x1acc310();
   input += synapse0x1acc350();
   input += synapse0x1ac4510();
   input += synapse0x1ac4550();
   input += synapse0x1ac4590();
   input += synapse0x1ac45d0();
   input += synapse0x1ac4610();
   input += synapse0x1ac4650();
   input += synapse0x1ac4690();
   input += synapse0x1acbfa0();
   input += synapse0x1acbfe0();
   input += synapse0x1ac47e0();
   input += synapse0x1ac4820();
   input += synapse0x1ac4860();
   input += synapse0x1ac48a0();
   input += synapse0x1ac48e0();
   input += synapse0x1ac4920();
   return input;
}

double NNfunction-NN_3_6::neuron0x1acbe10() {
   double input = input0x1acbe10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ac4960() {
   double input = -0.671202;
   input += synapse0x1ac4ca0();
   input += synapse0x1ac4ce0();
   input += synapse0x1ac4d20();
   input += synapse0x1ac4d60();
   input += synapse0x1ac4da0();
   input += synapse0x1ac4de0();
   input += synapse0x1ac4e20();
   input += synapse0x1ac4e60();
   input += synapse0x1ac4ea0();
   input += synapse0x1ac4ee0();
   input += synapse0x1ac4f20();
   input += synapse0x1ac4f60();
   input += synapse0x1ac4fa0();
   input += synapse0x1ac4fe0();
   input += synapse0x1ac5020();
   input += synapse0x1ac5060();
   input += synapse0x1ac4af0();
   input += synapse0x1ac4b30();
   input += synapse0x1ac51b0();
   input += synapse0x1ac51f0();
   input += synapse0x1ac5230();
   input += synapse0x1ac5270();
   input += synapse0x1ac52b0();
   input += synapse0x1ac52f0();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ac4960() {
   double input = input0x1ac4960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ac5330() {
   double input = -2.77966;
   input += synapse0x1ac54c0();
   input += synapse0x1ace550();
   input += synapse0x1ace590();
   input += synapse0x1ace5d0();
   input += synapse0x1ace610();
   input += synapse0x1ace650();
   input += synapse0x1ace690();
   input += synapse0x1ace6d0();
   input += synapse0x1ace710();
   input += synapse0x1ace750();
   input += synapse0x1ace790();
   input += synapse0x1ace7d0();
   input += synapse0x1ace810();
   input += synapse0x1ace850();
   input += synapse0x1ace890();
   input += synapse0x1ace8d0();
   input += synapse0x1ace3a0();
   input += synapse0x1ace3e0();
   input += synapse0x1acea20();
   input += synapse0x1acea60();
   input += synapse0x1aceaa0();
   input += synapse0x1aceae0();
   input += synapse0x1aceb20();
   input += synapse0x1aceb60();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ac5330() {
   double input = input0x1ac5330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1aceba0() {
   double input = 0.0166504;
   input += synapse0x1aceee0();
   input += synapse0x1acef20();
   input += synapse0x1acef60();
   input += synapse0x1acefa0();
   input += synapse0x1acefe0();
   input += synapse0x1acf020();
   input += synapse0x1acf060();
   input += synapse0x1acf0a0();
   input += synapse0x1acf0e0();
   input += synapse0x1acf120();
   input += synapse0x1acf160();
   input += synapse0x1acf1a0();
   input += synapse0x1acf1e0();
   input += synapse0x1acf220();
   input += synapse0x1acf260();
   input += synapse0x1acf2a0();
   input += synapse0x1aced30();
   input += synapse0x1aced70();
   input += synapse0x1acf3f0();
   input += synapse0x1acf430();
   input += synapse0x1acf470();
   input += synapse0x1acf4b0();
   input += synapse0x1acf4f0();
   input += synapse0x1acf530();
   return input;
}

double NNfunction-NN_3_6::neuron0x1aceba0() {
   double input = input0x1aceba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1acf570() {
   double input = 0.101576;
   input += synapse0x1acf8b0();
   input += synapse0x1acf8f0();
   input += synapse0x1acf930();
   input += synapse0x1acf970();
   input += synapse0x1acf9b0();
   input += synapse0x1acf9f0();
   input += synapse0x1acfa30();
   input += synapse0x1acfa70();
   input += synapse0x1acfab0();
   input += synapse0x1acfaf0();
   input += synapse0x1acfb30();
   input += synapse0x1acfb70();
   input += synapse0x1acfbb0();
   input += synapse0x1acfbf0();
   input += synapse0x1acfc30();
   input += synapse0x1acfc70();
   input += synapse0x1acf700();
   input += synapse0x1acf740();
   input += synapse0x1acfdc0();
   input += synapse0x1acfe00();
   input += synapse0x1acfe40();
   input += synapse0x1acfe80();
   input += synapse0x1acfec0();
   input += synapse0x1acff00();
   return input;
}

double NNfunction-NN_3_6::neuron0x1acf570() {
   double input = input0x1acf570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1acff40() {
   double input = 1.19774;
   input += synapse0x1ad0280();
   input += synapse0x1ad02c0();
   input += synapse0x1ad0300();
   input += synapse0x1ad0340();
   input += synapse0x1ad0380();
   input += synapse0x1ad03c0();
   input += synapse0x1ad0400();
   input += synapse0x1ad0440();
   input += synapse0x1ad0480();
   input += synapse0x1ad04c0();
   input += synapse0x1ad0500();
   input += synapse0x1ad0540();
   input += synapse0x1ad0580();
   input += synapse0x1ad05c0();
   input += synapse0x1ad0600();
   input += synapse0x1ad0640();
   input += synapse0x1ad00d0();
   input += synapse0x1ad0110();
   input += synapse0x1ad0790();
   input += synapse0x1ad07d0();
   input += synapse0x1ad0810();
   input += synapse0x1ad0850();
   input += synapse0x1ad0890();
   input += synapse0x1ad08d0();
   return input;
}

double NNfunction-NN_3_6::neuron0x1acff40() {
   double input = input0x1acff40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ad0910() {
   double input = 0.843852;
   input += synapse0x1ad0c50();
   input += synapse0x1ad0c90();
   input += synapse0x1ad0cd0();
   input += synapse0x1ad0d10();
   input += synapse0x1ad0d50();
   input += synapse0x1ad0d90();
   input += synapse0x1ad0dd0();
   input += synapse0x1ad0e10();
   input += synapse0x1ad0e50();
   input += synapse0x1ad0e90();
   input += synapse0x1ad0ed0();
   input += synapse0x1ad0f10();
   input += synapse0x1ad0f50();
   input += synapse0x1ad0f90();
   input += synapse0x1ad0fd0();
   input += synapse0x1ad1010();
   input += synapse0x1ad0aa0();
   input += synapse0x1ad0ae0();
   input += synapse0x1ad1160();
   input += synapse0x1ad11a0();
   input += synapse0x1ad11e0();
   input += synapse0x1ad1220();
   input += synapse0x1ad1260();
   input += synapse0x1ad12a0();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ad0910() {
   double input = input0x1ad0910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ad12e0() {
   double input = -0.82954;
   input += synapse0x1ad1620();
   input += synapse0x1ad1660();
   input += synapse0x1ad16a0();
   input += synapse0x1ad16e0();
   input += synapse0x1ad1720();
   input += synapse0x1ad1760();
   input += synapse0x1ad17a0();
   input += synapse0x1ad17e0();
   input += synapse0x1ad1820();
   input += synapse0x1ad1860();
   input += synapse0x1ad18a0();
   input += synapse0x1ad18e0();
   input += synapse0x1ad1920();
   input += synapse0x1ad1960();
   input += synapse0x1ad19a0();
   input += synapse0x1ad19e0();
   input += synapse0x1ad1470();
   input += synapse0x1ad14b0();
   input += synapse0x1ad1b30();
   input += synapse0x1ad1b70();
   input += synapse0x1ad1bb0();
   input += synapse0x1ad1bf0();
   input += synapse0x1ad1c30();
   input += synapse0x1ad1c70();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ad12e0() {
   double input = input0x1ad12e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ad1cb0() {
   double input = 4.18058;
   input += synapse0x1ad1ff0();
   input += synapse0x1ad2030();
   input += synapse0x1ad2070();
   input += synapse0x1ad20b0();
   input += synapse0x1ad20f0();
   input += synapse0x1ad2130();
   input += synapse0x1ad2170();
   input += synapse0x1ad21b0();
   input += synapse0x1ad21f0();
   input += synapse0x1ad2230();
   input += synapse0x1ad2270();
   input += synapse0x1ad22b0();
   input += synapse0x1ad22f0();
   input += synapse0x1ad2330();
   input += synapse0x1ad2370();
   input += synapse0x1ad23b0();
   input += synapse0x1ad1e40();
   input += synapse0x1ad1e80();
   input += synapse0x1ad2500();
   input += synapse0x1ad2540();
   input += synapse0x1ad2580();
   input += synapse0x1ad25c0();
   input += synapse0x1ad2600();
   input += synapse0x1ad2640();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ad1cb0() {
   double input = input0x1ad1cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ad2680() {
   double input = -1.32677;
   input += synapse0x1ad29c0();
   input += synapse0x1ad2a00();
   input += synapse0x1ad2a40();
   input += synapse0x1ad2a80();
   input += synapse0x1ad2ac0();
   input += synapse0x1ad2b00();
   input += synapse0x1ad2b40();
   input += synapse0x1ad2b80();
   input += synapse0x1ad2bc0();
   input += synapse0x1ad2c00();
   input += synapse0x1ad2c40();
   input += synapse0x1ad2c80();
   input += synapse0x1ad2cc0();
   input += synapse0x1ad2d00();
   input += synapse0x1ad2d40();
   input += synapse0x1ad2d80();
   input += synapse0x1ad2810();
   input += synapse0x1ad2850();
   input += synapse0x1ad2ed0();
   input += synapse0x1ad2f10();
   input += synapse0x1ad2f50();
   input += synapse0x1ad2f90();
   input += synapse0x1ad2fd0();
   input += synapse0x1ad3010();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ad2680() {
   double input = input0x1ad2680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ad3050() {
   double input = 0.437826;
   input += synapse0x1ad3390();
   input += synapse0x1ac7960();
   input += synapse0x1ac79a0();
   input += synapse0x1ac79e0();
   input += synapse0x1ac7c30();
   input += synapse0x1ac7c70();
   input += synapse0x1ac7cb0();
   input += synapse0x1ac7f00();
   input += synapse0x1ac7f40();
   input += synapse0x1ac8190();
   input += synapse0x1ac81d0();
   input += synapse0x1ac8210();
   input += synapse0x1ac8460();
   input += synapse0x1ac84a0();
   input += synapse0x1ac86f0();
   input += synapse0x1ac8730();
   input += synapse0x1ad31e0();
   input += synapse0x1ad3220();
   input += synapse0x1ac8880();
   input += synapse0x1ac8d90();
   input += synapse0x1ac8dd0();
   input += synapse0x1ac8e10();
   input += synapse0x1ac9060();
   input += synapse0x1ac90a0();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ad3050() {
   double input = input0x1ad3050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ac90e0() {
   double input = -2.84786;
   input += synapse0x1ac8950();
   input += synapse0x1ac8990();
   input += synapse0x1ac89d0();
   input += synapse0x1ac8a10();
   input += synapse0x1ac9390();
   input += synapse0x1ad56e0();
   input += synapse0x1ad5720();
   input += synapse0x1ad5760();
   input += synapse0x1ad57a0();
   input += synapse0x1ad57e0();
   input += synapse0x1ad5820();
   input += synapse0x1ad5860();
   input += synapse0x1ad58a0();
   input += synapse0x1ad58e0();
   input += synapse0x1ad5920();
   input += synapse0x1ad5960();
   input += synapse0x1ac9270();
   input += synapse0x1ac92b0();
   input += synapse0x1ad5ab0();
   input += synapse0x1ad5af0();
   input += synapse0x1ad5b30();
   input += synapse0x1ad5b70();
   input += synapse0x1ad5bb0();
   input += synapse0x1ad5bf0();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ac90e0() {
   double input = input0x1ac90e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ad5c30() {
   double input = 0.946634;
   input += synapse0x1ad5f70();
   input += synapse0x1ad5fb0();
   input += synapse0x1ad5ff0();
   input += synapse0x1ad6030();
   input += synapse0x1ad6070();
   input += synapse0x1ad60b0();
   input += synapse0x1ad60f0();
   input += synapse0x1ad6130();
   input += synapse0x1ad6170();
   input += synapse0x1ad61b0();
   input += synapse0x1ad61f0();
   input += synapse0x1ad6230();
   input += synapse0x1ad6270();
   input += synapse0x1ad62b0();
   input += synapse0x1ad62f0();
   input += synapse0x1ad6330();
   input += synapse0x1ad5dc0();
   input += synapse0x1ad5e00();
   input += synapse0x1ad6480();
   input += synapse0x1ad64c0();
   input += synapse0x1ad6500();
   input += synapse0x1ad6540();
   input += synapse0x1ad6580();
   input += synapse0x1ad65c0();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ad5c30() {
   double input = input0x1ad5c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ad6600() {
   double input = -0.184579;
   input += synapse0x1ad6940();
   input += synapse0x1ad6980();
   input += synapse0x1ad69c0();
   input += synapse0x1ad6a00();
   input += synapse0x1ad6a40();
   input += synapse0x1ad6a80();
   input += synapse0x1ad6ac0();
   input += synapse0x1ad6b00();
   input += synapse0x1ad6b40();
   input += synapse0x1ad6b80();
   input += synapse0x1ad6bc0();
   input += synapse0x1ad6c00();
   input += synapse0x1ad6c40();
   input += synapse0x1ad6c80();
   input += synapse0x1ad6cc0();
   input += synapse0x1ad6d00();
   input += synapse0x1ad6790();
   input += synapse0x1ad67d0();
   input += synapse0x1ad6e50();
   input += synapse0x1ad6e90();
   input += synapse0x1ad6ed0();
   input += synapse0x1ad6f10();
   input += synapse0x1ad6f50();
   input += synapse0x1ad6f90();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ad6600() {
   double input = input0x1ad6600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ad6fd0() {
   double input = -1.13491;
   input += synapse0x1ad7310();
   input += synapse0x1ad7350();
   input += synapse0x1ad7390();
   input += synapse0x1ad73d0();
   input += synapse0x1ad7410();
   input += synapse0x1ad7450();
   input += synapse0x1ad7490();
   input += synapse0x1ad74d0();
   input += synapse0x1ad7510();
   input += synapse0x1ad7550();
   input += synapse0x1ad7590();
   input += synapse0x1ad75d0();
   input += synapse0x1ad7610();
   input += synapse0x1ad7650();
   input += synapse0x1ad7690();
   input += synapse0x1ad76d0();
   input += synapse0x1ad7160();
   input += synapse0x1ad71a0();
   input += synapse0x1ad7820();
   input += synapse0x1ad7860();
   input += synapse0x1ad78a0();
   input += synapse0x1ad78e0();
   input += synapse0x1ad7920();
   input += synapse0x1ad7960();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ad6fd0() {
   double input = input0x1ad6fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ad79a0() {
   double input = 0.355258;
   input += synapse0x1ad7ce0();
   input += synapse0x1ad7d20();
   input += synapse0x1ad7d60();
   input += synapse0x1ad7da0();
   input += synapse0x1ad7de0();
   input += synapse0x1ad7e20();
   input += synapse0x1ad7e60();
   input += synapse0x1ad7ea0();
   input += synapse0x1ad7ee0();
   input += synapse0x1ad7f20();
   input += synapse0x1ad7f60();
   input += synapse0x1ad7fa0();
   input += synapse0x1ad7fe0();
   input += synapse0x1ad8020();
   input += synapse0x1ad8060();
   input += synapse0x1ad80a0();
   input += synapse0x1ad7b30();
   input += synapse0x1ad7b70();
   input += synapse0x1ad81f0();
   input += synapse0x1ad8230();
   input += synapse0x1ad8270();
   input += synapse0x1ad82b0();
   input += synapse0x1ad82f0();
   input += synapse0x1ad8330();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ad79a0() {
   double input = input0x1ad79a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ad8370() {
   double input = -2.78682;
   input += synapse0x1ad86b0();
   input += synapse0x1ad86f0();
   input += synapse0x1ad8730();
   input += synapse0x1ad8770();
   input += synapse0x1ad87b0();
   input += synapse0x1ad87f0();
   input += synapse0x1ad8830();
   input += synapse0x1ad8870();
   input += synapse0x1ad88b0();
   input += synapse0x1ad88f0();
   input += synapse0x1ad8930();
   input += synapse0x1ad8970();
   input += synapse0x1ad89b0();
   input += synapse0x1ad89f0();
   input += synapse0x1ad8a30();
   input += synapse0x1ad8a70();
   input += synapse0x1ad8500();
   input += synapse0x1ad8540();
   input += synapse0x1ad8bc0();
   input += synapse0x1ad8c00();
   input += synapse0x1ad8c40();
   input += synapse0x1ad8c80();
   input += synapse0x1ad8cc0();
   input += synapse0x1ad8d00();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ad8370() {
   double input = input0x1ad8370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ad8d40() {
   double input = -0.534551;
   input += synapse0x1ad9080();
   input += synapse0x1ad90c0();
   input += synapse0x1ad9100();
   input += synapse0x1ad9140();
   input += synapse0x1ad9180();
   input += synapse0x1ad91c0();
   input += synapse0x1ad9200();
   input += synapse0x1ad9240();
   input += synapse0x1ad9280();
   input += synapse0x1ad92c0();
   input += synapse0x1ad9300();
   input += synapse0x1ad9340();
   input += synapse0x1ad9380();
   input += synapse0x1ad93c0();
   input += synapse0x1ad9400();
   input += synapse0x1ad9440();
   input += synapse0x1ad8ed0();
   input += synapse0x1ad8f10();
   input += synapse0x1ad9590();
   input += synapse0x1ad95d0();
   input += synapse0x1ad9610();
   input += synapse0x1ad9650();
   input += synapse0x1ad9690();
   input += synapse0x1ad96d0();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ad8d40() {
   double input = input0x1ad8d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ad9710() {
   double input = -0.458887;
   input += synapse0x1ad9a50();
   input += synapse0x1ad9a90();
   input += synapse0x1ad9ad0();
   input += synapse0x1ad9b10();
   input += synapse0x1ad9b50();
   input += synapse0x1ad9b90();
   input += synapse0x1ad9bd0();
   input += synapse0x1ad9c10();
   input += synapse0x1ad9c50();
   input += synapse0x1ad9c90();
   input += synapse0x1ad9cd0();
   input += synapse0x1ad9d10();
   input += synapse0x1ad9d50();
   input += synapse0x1ad9d90();
   input += synapse0x1ad9dd0();
   input += synapse0x1ad9e10();
   input += synapse0x1ad98a0();
   input += synapse0x1ad98e0();
   input += synapse0x1ad9f60();
   input += synapse0x1ad9fa0();
   input += synapse0x1ad9fe0();
   input += synapse0x1ada020();
   input += synapse0x1ada060();
   input += synapse0x1ada0a0();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ad9710() {
   double input = input0x1ad9710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ada0e0() {
   double input = 1.64916;
   input += synapse0x1ac2b50();
   input += synapse0x1ac2b90();
   input += synapse0x1ac2bd0();
   input += synapse0x1ac2c10();
   input += synapse0x1ac2c50();
   input += synapse0x1ac2c90();
   input += synapse0x1ac2cd0();
   input += synapse0x1ac2d10();
   input += synapse0x1ada830();
   input += synapse0x1ada870();
   input += synapse0x1ada8b0();
   input += synapse0x1ada8f0();
   input += synapse0x1ada930();
   input += synapse0x1ada970();
   input += synapse0x1ada9b0();
   input += synapse0x1ada9f0();
   input += synapse0x1ada270();
   input += synapse0x1ada2b0();
   input += synapse0x1adab40();
   input += synapse0x1adab80();
   input += synapse0x1adabc0();
   input += synapse0x1adac00();
   input += synapse0x1adac40();
   input += synapse0x1adac80();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ada0e0() {
   double input = input0x1ada0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1adacc0() {
   double input = 0.227493;
   input += synapse0x1adb000();
   input += synapse0x1adb040();
   input += synapse0x1adb080();
   input += synapse0x1adb0c0();
   input += synapse0x1adb100();
   input += synapse0x1adb140();
   input += synapse0x1adb180();
   input += synapse0x1adb1c0();
   input += synapse0x1adb200();
   input += synapse0x1adb240();
   input += synapse0x1adb280();
   input += synapse0x1adb2c0();
   input += synapse0x1adb300();
   input += synapse0x1adb340();
   input += synapse0x1adb380();
   input += synapse0x1adb3c0();
   input += synapse0x1adae50();
   input += synapse0x1adae90();
   input += synapse0x1adb510();
   input += synapse0x1adb550();
   input += synapse0x1adb590();
   input += synapse0x1adb5d0();
   input += synapse0x1adb610();
   input += synapse0x1adb650();
   return input;
}

double NNfunction-NN_3_6::neuron0x1adacc0() {
   double input = input0x1adacc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1adb690() {
   double input = -1.11318;
   input += synapse0x1adb9d0();
   input += synapse0x1adba10();
   input += synapse0x1adba50();
   input += synapse0x1adba90();
   input += synapse0x1adbad0();
   input += synapse0x1adbb10();
   input += synapse0x1adbb50();
   input += synapse0x1adbb90();
   input += synapse0x1adbbd0();
   input += synapse0x1adbc10();
   input += synapse0x1adbc50();
   input += synapse0x1adbc90();
   input += synapse0x1adbcd0();
   input += synapse0x1adbd10();
   input += synapse0x1adbd50();
   input += synapse0x1adbd90();
   input += synapse0x1adb820();
   input += synapse0x1adb860();
   input += synapse0x1acc390();
   input += synapse0x1acc3d0();
   input += synapse0x1acc410();
   input += synapse0x1acc450();
   input += synapse0x1acc490();
   input += synapse0x1acc4d0();
   return input;
}

double NNfunction-NN_3_6::neuron0x1adb690() {
   double input = input0x1adb690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1acc510() {
   double input = -0.713831;
   input += synapse0x1acc850();
   input += synapse0x1acc890();
   input += synapse0x1acc8d0();
   input += synapse0x1acc910();
   input += synapse0x1acc950();
   input += synapse0x1acc990();
   input += synapse0x1acc9d0();
   input += synapse0x1acca10();
   input += synapse0x1acca50();
   input += synapse0x1acca90();
   input += synapse0x1accad0();
   input += synapse0x1accb10();
   input += synapse0x1accb50();
   input += synapse0x1accb90();
   input += synapse0x1accbd0();
   input += synapse0x1accc10();
   input += synapse0x1acc6a0();
   input += synapse0x1acc6e0();
   input += synapse0x1accd60();
   input += synapse0x1accda0();
   input += synapse0x1accde0();
   input += synapse0x1acce20();
   input += synapse0x1acce60();
   input += synapse0x1accea0();
   return input;
}

double NNfunction-NN_3_6::neuron0x1acc510() {
   double input = input0x1acc510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1accee0() {
   double input = 0.272829;
   input += synapse0x1acd220();
   input += synapse0x1acd260();
   input += synapse0x1acd2a0();
   input += synapse0x1acd2e0();
   input += synapse0x1acd320();
   input += synapse0x1acd360();
   input += synapse0x1acd3a0();
   input += synapse0x1acd3e0();
   input += synapse0x1acd420();
   input += synapse0x1acd460();
   input += synapse0x1acd4a0();
   input += synapse0x1acd4e0();
   input += synapse0x1acd520();
   input += synapse0x1acd560();
   input += synapse0x1acd5a0();
   input += synapse0x1acd5e0();
   input += synapse0x1acd070();
   input += synapse0x1acd0b0();
   input += synapse0x1acd730();
   input += synapse0x1acd770();
   input += synapse0x1acd7b0();
   input += synapse0x1acd7f0();
   input += synapse0x1acd830();
   input += synapse0x1acd870();
   return input;
}

double NNfunction-NN_3_6::neuron0x1accee0() {
   double input = input0x1accee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1acd8b0() {
   double input = -0.285654;
   input += synapse0x1acdbf0();
   input += synapse0x1acdc30();
   input += synapse0x1acdc70();
   input += synapse0x1acdcb0();
   input += synapse0x1acdcf0();
   input += synapse0x1acdd30();
   input += synapse0x1acdd70();
   input += synapse0x1acddb0();
   input += synapse0x1acddf0();
   input += synapse0x1acde30();
   input += synapse0x1acde70();
   input += synapse0x1acdeb0();
   input += synapse0x1acdef0();
   input += synapse0x1acdf30();
   input += synapse0x1acdf70();
   input += synapse0x1acdfb0();
   input += synapse0x1acda40();
   input += synapse0x1acda80();
   input += synapse0x1ace100();
   input += synapse0x1ace140();
   input += synapse0x1ace180();
   input += synapse0x1ace1c0();
   input += synapse0x1ace200();
   input += synapse0x1ace240();
   return input;
}

double NNfunction-NN_3_6::neuron0x1acd8b0() {
   double input = input0x1acd8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1adfef0() {
   double input = -0.946377;
   input += synapse0x1ae0110();
   input += synapse0x1ae0150();
   input += synapse0x1ae0190();
   input += synapse0x1ae01d0();
   input += synapse0x1ae0210();
   input += synapse0x1ae0250();
   input += synapse0x1ae0290();
   input += synapse0x1ae02d0();
   input += synapse0x1ae0310();
   input += synapse0x1ae0350();
   input += synapse0x1ae0390();
   input += synapse0x1ae03d0();
   input += synapse0x1ae0410();
   input += synapse0x1ae0450();
   input += synapse0x1ae0490();
   input += synapse0x1ae04d0();
   input += synapse0x1ace280();
   input += synapse0x1ace2c0();
   input += synapse0x1ae0620();
   input += synapse0x1ae0660();
   input += synapse0x1ae06a0();
   input += synapse0x1ae06e0();
   input += synapse0x1ae0720();
   input += synapse0x1ae0760();
   return input;
}

double NNfunction-NN_3_6::neuron0x1adfef0() {
   double input = input0x1adfef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ae07a0() {
   double input = 1.18122;
   input += synapse0x1ae0ae0();
   input += synapse0x1ae0b20();
   input += synapse0x1ae0b60();
   input += synapse0x1ae0ba0();
   input += synapse0x1ae0be0();
   input += synapse0x1ae0c20();
   input += synapse0x1ae0c60();
   input += synapse0x1ae0ca0();
   input += synapse0x1ae0ce0();
   input += synapse0x1ae0d20();
   input += synapse0x1ae0d60();
   input += synapse0x1ae0da0();
   input += synapse0x1ae0de0();
   input += synapse0x1ae0e20();
   input += synapse0x1ae0e60();
   input += synapse0x1ae0ea0();
   input += synapse0x1ae0930();
   input += synapse0x1ae0970();
   input += synapse0x1ae0ff0();
   input += synapse0x1ae1030();
   input += synapse0x1ae1070();
   input += synapse0x1ae10b0();
   input += synapse0x1ae10f0();
   input += synapse0x1ae1130();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ae07a0() {
   double input = input0x1ae07a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ae1170() {
   double input = -3.84358;
   input += synapse0x1ae14b0();
   input += synapse0x1ae14f0();
   input += synapse0x1ae1530();
   input += synapse0x1ae1570();
   input += synapse0x1ae15b0();
   input += synapse0x1ae15f0();
   input += synapse0x1ae1630();
   input += synapse0x1ae1670();
   input += synapse0x1ae16b0();
   input += synapse0x1ae16f0();
   input += synapse0x1ae1730();
   input += synapse0x1ae1770();
   input += synapse0x1ae17b0();
   input += synapse0x1ae17f0();
   input += synapse0x1ae1830();
   input += synapse0x1ae1870();
   input += synapse0x1ae1300();
   input += synapse0x1ae1340();
   input += synapse0x1ae19c0();
   input += synapse0x1ae1a00();
   input += synapse0x1ae1a40();
   input += synapse0x1ae1a80();
   input += synapse0x1ae1ac0();
   input += synapse0x1ae1b00();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ae1170() {
   double input = input0x1ae1170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ae1b40() {
   double input = 3.28969;
   input += synapse0x1ae1e80();
   input += synapse0x1ae1ec0();
   input += synapse0x1ae1f00();
   input += synapse0x1ae1f40();
   input += synapse0x1ae1f80();
   input += synapse0x1ae1fc0();
   input += synapse0x1ae2000();
   input += synapse0x1ae2040();
   input += synapse0x1ae2080();
   input += synapse0x1ae20c0();
   input += synapse0x1ae2100();
   input += synapse0x1ae2140();
   input += synapse0x1ae2180();
   input += synapse0x1ae21c0();
   input += synapse0x1ae2200();
   input += synapse0x1ae2240();
   input += synapse0x1ae1cd0();
   input += synapse0x1ae1d10();
   input += synapse0x1ae2390();
   input += synapse0x1ae23d0();
   input += synapse0x1ae2410();
   input += synapse0x1ae2450();
   input += synapse0x1ae2490();
   input += synapse0x1ae24d0();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ae1b40() {
   double input = input0x1ae1b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ae8d40() {
   double input = -0.228662;
   input += synapse0x1abea70();
   input += synapse0x1abeab0();
   input += synapse0x1abff80();
   input += synapse0x1abffc0();
   input += synapse0x1ac0950();
   input += synapse0x1ac0990();
   input += synapse0x1ac1720();
   input += synapse0x1ac1760();
   input += synapse0x1ac20f0();
   input += synapse0x1ac2130();
   input += synapse0x1ac2ac0();
   input += synapse0x1ac2b00();
   input += synapse0x1ac35a0();
   input += synapse0x1ac35e0();
   input += synapse0x1ac3f70();
   input += synapse0x1ac3fb0();
   input += synapse0x1ac1050();
   input += synapse0x1ac1090();
   input += synapse0x1ac5b20();
   input += synapse0x1ac5b60();
   input += synapse0x1ac64f0();
   input += synapse0x1ac6530();
   input += synapse0x1ac6ec0();
   input += synapse0x1ac6f00();
   input += synapse0x1ac7890();
   input += synapse0x1ac78d0();
   input += synapse0x1abba00();
   input += synapse0x1abba40();
   input += synapse0x1ac9980();
   input += synapse0x1ac99c0();
   input += synapse0x1aca350();
   input += synapse0x1aca390();
   input += synapse0x1acad20();
   input += synapse0x1acad60();
   input += synapse0x1acb6f0();
   input += synapse0x1acb730();
   input += synapse0x1acc0c0();
   input += synapse0x1acc100();
   input += synapse0x1ac4c10();
   input += synapse0x1ac4c50();
   input += synapse0x1ace4c0();
   input += synapse0x1ace500();
   input += synapse0x1acee50();
   input += synapse0x1acee90();
   input += synapse0x1acf820();
   input += synapse0x1acf860();
   input += synapse0x1ad01f0();
   input += synapse0x1ad0230();
   input += synapse0x1ad0bc0();
   input += synapse0x1ad0c00();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ae8d40() {
   double input = input0x1ae8d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ae90e0() {
   double input = 0.611104;
   input += synapse0x1ad3300();
   input += synapse0x1ad3340();
   input += synapse0x1ac88c0();
   input += synapse0x1ac8900();
   input += synapse0x1ad5ee0();
   input += synapse0x1ad5f20();
   input += synapse0x1ad68b0();
   input += synapse0x1ad68f0();
   input += synapse0x1ad7280();
   input += synapse0x1ad72c0();
   input += synapse0x1ad7c50();
   input += synapse0x1ad7c90();
   input += synapse0x1ad8620();
   input += synapse0x1ad8660();
   input += synapse0x1ad8ff0();
   input += synapse0x1ad9030();
   input += synapse0x1ad99c0();
   input += synapse0x1ad9a00();
   input += synapse0x1ada390();
   input += synapse0x1ada3d0();
   input += synapse0x1adaf70();
   input += synapse0x1adafb0();
   input += synapse0x1adb940();
   input += synapse0x1adb980();
   input += synapse0x1acc7c0();
   input += synapse0x1acc800();
   input += synapse0x1acd190();
   input += synapse0x1acd1d0();
   input += synapse0x1acdb60();
   input += synapse0x1acdba0();
   input += synapse0x1ae0080();
   input += synapse0x1ae00c0();
   input += synapse0x1ae0a50();
   input += synapse0x1ae0a90();
   input += synapse0x1ae1420();
   input += synapse0x1ae1460();
   input += synapse0x1ae1df0();
   input += synapse0x1ae1e30();
   input += synapse0x1abdce0();
   input += synapse0x1abdd20();
   input += synapse0x1ad1590();
   input += synapse0x1ad15d0();
   input += synapse0x1ae2510();
   input += synapse0x1ae2550();
   input += synapse0x1ae2590();
   input += synapse0x1ae25d0();
   input += synapse0x1ae9480();
   input += synapse0x1ae94c0();
   input += synapse0x1ae9500();
   input += synapse0x1ae9540();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ae90e0() {
   double input = input0x1ae90e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1ae9580() {
   double input = -0.52769;
   input += synapse0x1ae98c0();
   input += synapse0x1ae9900();
   input += synapse0x1ae9940();
   input += synapse0x1ae9980();
   input += synapse0x1ae99c0();
   input += synapse0x1ae9a00();
   input += synapse0x1ae9a40();
   input += synapse0x1ae9a80();
   input += synapse0x1ae9ac0();
   input += synapse0x1ae9b00();
   input += synapse0x1ae9b40();
   input += synapse0x1ae9b80();
   input += synapse0x1ae9bc0();
   input += synapse0x1ae9c00();
   input += synapse0x1ae9c40();
   input += synapse0x1ae9c80();
   input += synapse0x1ae9710();
   input += synapse0x1ae9750();
   input += synapse0x1ae9dd0();
   input += synapse0x1ae9e10();
   input += synapse0x1ae9e50();
   input += synapse0x1ae9e90();
   input += synapse0x1ae9ed0();
   input += synapse0x1ae9f10();
   input += synapse0x1ae9f50();
   input += synapse0x1ae9f90();
   input += synapse0x1ae9fd0();
   input += synapse0x1aea010();
   input += synapse0x1aea050();
   input += synapse0x1aea090();
   input += synapse0x1aea0d0();
   input += synapse0x1aea110();
   input += synapse0x1ae9cc0();
   input += synapse0x1ae9d00();
   input += synapse0x1ae9d40();
   input += synapse0x1ae9d80();
   input += synapse0x1aea360();
   input += synapse0x1aea3a0();
   input += synapse0x1aea3e0();
   input += synapse0x1aea420();
   input += synapse0x1aea460();
   input += synapse0x1aea4a0();
   input += synapse0x1aea4e0();
   input += synapse0x1aea520();
   input += synapse0x1aea560();
   input += synapse0x1aea5a0();
   input += synapse0x1aea5e0();
   input += synapse0x1aea620();
   input += synapse0x1aea660();
   input += synapse0x1aea6a0();
   return input;
}

double NNfunction-NN_3_6::neuron0x1ae9580() {
   double input = input0x1ae9580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1aea6e0() {
   double input = -0.679615;
   input += synapse0x1aeaa20();
   input += synapse0x1aeaa60();
   input += synapse0x1aeaaa0();
   input += synapse0x1aeaae0();
   input += synapse0x1aeab20();
   input += synapse0x1aeab60();
   input += synapse0x1aeaba0();
   input += synapse0x1aeabe0();
   input += synapse0x1aeac20();
   input += synapse0x1aeac60();
   input += synapse0x1aeaca0();
   input += synapse0x1aeace0();
   input += synapse0x1aead20();
   input += synapse0x1aead60();
   input += synapse0x1aeada0();
   input += synapse0x1aeade0();
   input += synapse0x1aea870();
   input += synapse0x1aea8b0();
   input += synapse0x1aeaf30();
   input += synapse0x1aeaf70();
   input += synapse0x1aeafb0();
   input += synapse0x1aeaff0();
   input += synapse0x1aeb030();
   input += synapse0x1aeb070();
   input += synapse0x1aeb0b0();
   input += synapse0x1aeb0f0();
   input += synapse0x1aeb130();
   input += synapse0x1aeb170();
   input += synapse0x1aeb1b0();
   input += synapse0x1aeb1f0();
   input += synapse0x1aeb230();
   input += synapse0x1aeb270();
   input += synapse0x1aeae20();
   input += synapse0x1aeae60();
   input += synapse0x1aeaea0();
   input += synapse0x1aeaee0();
   input += synapse0x1aeb4c0();
   input += synapse0x1aeb500();
   input += synapse0x1aeb540();
   input += synapse0x1aeb580();
   input += synapse0x1aeb5c0();
   input += synapse0x1aeb600();
   input += synapse0x1aeb640();
   input += synapse0x1aeb680();
   input += synapse0x1aeb6c0();
   input += synapse0x1aeb700();
   input += synapse0x1aeb740();
   input += synapse0x1aeb780();
   input += synapse0x1aeb7c0();
   input += synapse0x1aeb800();
   return input;
}

double NNfunction-NN_3_6::neuron0x1aea6e0() {
   double input = input0x1aea6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1aeb840() {
   double input = 0.35464;
   input += synapse0x1aebb80();
   input += synapse0x1aebbc0();
   input += synapse0x1aebc00();
   input += synapse0x1aebc40();
   input += synapse0x1aebc80();
   input += synapse0x1aebcc0();
   input += synapse0x1aebd00();
   input += synapse0x1aebd40();
   input += synapse0x1aebd80();
   input += synapse0x1aebdc0();
   input += synapse0x1aebe00();
   input += synapse0x1aebe40();
   input += synapse0x1aebe80();
   input += synapse0x1aebec0();
   input += synapse0x1aebf00();
   input += synapse0x1aebf40();
   input += synapse0x1aeb9d0();
   input += synapse0x1aeba10();
   input += synapse0x1aec090();
   input += synapse0x1aec0d0();
   input += synapse0x1aec110();
   input += synapse0x1aec150();
   input += synapse0x1aec190();
   input += synapse0x1aec1d0();
   input += synapse0x1aec210();
   input += synapse0x1aec250();
   input += synapse0x1aec290();
   input += synapse0x1aec2d0();
   input += synapse0x1aec310();
   input += synapse0x1aec350();
   input += synapse0x1aec390();
   input += synapse0x1aec3d0();
   input += synapse0x1aebf80();
   input += synapse0x1aebfc0();
   input += synapse0x1aec000();
   input += synapse0x1aec040();
   input += synapse0x1aec620();
   input += synapse0x1aec660();
   input += synapse0x1aec6a0();
   input += synapse0x1aec6e0();
   input += synapse0x1aec720();
   input += synapse0x1aec760();
   input += synapse0x1aec7a0();
   input += synapse0x1aec7e0();
   input += synapse0x1aec820();
   input += synapse0x1aec860();
   input += synapse0x1aec8a0();
   input += synapse0x1aec8e0();
   input += synapse0x1aec920();
   input += synapse0x1aec960();
   return input;
}

double NNfunction-NN_3_6::neuron0x1aeb840() {
   double input = input0x1aeb840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_6::input0x1aec9a0() {
   double input = 6.72668;
   input += synapse0x1abda80();
   input += synapse0x1aecbc0();
   input += synapse0x1aecc00();
   input += synapse0x1aecc40();
   input += synapse0x1aecc80();
   return input;
}

double NNfunction-NN_3_6::neuron0x1aec9a0() {
   double input = input0x1aec9a0();
   return (input * 1)+0;
}

double NNfunction-NN_3_6::synapse0x18788d0() {
   return (neuron0x1ab8a60()*-0.0167949);
}

double NNfunction-NN_3_6::synapse0x1ab8920() {
   return (neuron0x1ab8da0()*0.00368922);
}

double NNfunction-NN_3_6::synapse0x1ab8960() {
   return (neuron0x1ab90e0()*2.95417);
}

double NNfunction-NN_3_6::synapse0x1abdd70() {
   return (neuron0x1ab9420()*-0.00366426);
}

double NNfunction-NN_3_6::synapse0x1abddb0() {
   return (neuron0x1ab9760()*-0.00559793);
}

double NNfunction-NN_3_6::synapse0x1abddf0() {
   return (neuron0x1ab9aa0()*0.0245685);
}

double NNfunction-NN_3_6::synapse0x1abde30() {
   return (neuron0x1ab9de0()*0.0203403);
}

double NNfunction-NN_3_6::synapse0x1abde70() {
   return (neuron0x1aba120()*0.0273877);
}

double NNfunction-NN_3_6::synapse0x1abdeb0() {
   return (neuron0x1aba460()*-0.00749612);
}

double NNfunction-NN_3_6::synapse0x1abdef0() {
   return (neuron0x1aba7a0()*-0.0203077);
}

double NNfunction-NN_3_6::synapse0x1abdf30() {
   return (neuron0x1abaae0()*-0.0237829);
}

double NNfunction-NN_3_6::synapse0x1abdf70() {
   return (neuron0x1abae20()*-8.19441);
}

double NNfunction-NN_3_6::synapse0x1abdfb0() {
   return (neuron0x1abb160()*0.0209909);
}

double NNfunction-NN_3_6::synapse0x1abdff0() {
   return (neuron0x1abb4a0()*0.0281338);
}

double NNfunction-NN_3_6::synapse0x1abe030() {
   return (neuron0x1abb7e0()*0.0362486);
}

double NNfunction-NN_3_6::synapse0x1abe070() {
   return (neuron0x1abbb20()*0.0565227);
}

double NNfunction-NN_3_6::synapse0x1ab8890() {
   return (neuron0x1abbe60()*0.00551688);
}

double NNfunction-NN_3_6::synapse0x1ab88d0() {
   return (neuron0x1abc3c0()*0.0148782);
}

double NNfunction-NN_3_6::synapse0x186a170() {
   return (neuron0x1abc5e0()*0.00218853);
}

double NNfunction-NN_3_6::synapse0x186a1b0() {
   return (neuron0x1abc920()*0.00585627);
}

double NNfunction-NN_3_6::synapse0x1abe2d0() {
   return (neuron0x1abcc60()*-0.00439137);
}

double NNfunction-NN_3_6::synapse0x1abe310() {
   return (neuron0x1abcfa0()*-0.0067179);
}

double NNfunction-NN_3_6::synapse0x1abe350() {
   return (neuron0x1abd2e0()*0.0038875);
}

double NNfunction-NN_3_6::synapse0x1abe390() {
   return (neuron0x1abd620()*0.297098);
}

double NNfunction-NN_3_6::synapse0x1abe710() {
   return (neuron0x1ab8a60()*-0.0137702);
}

double NNfunction-NN_3_6::synapse0x1abe750() {
   return (neuron0x1ab8da0()*-0.0653534);
}

double NNfunction-NN_3_6::synapse0x1abe790() {
   return (neuron0x1ab90e0()*-0.0799398);
}

double NNfunction-NN_3_6::synapse0x1abe7d0() {
   return (neuron0x1ab9420()*-1.14118);
}

double NNfunction-NN_3_6::synapse0x1abe810() {
   return (neuron0x1ab9760()*-0.0959898);
}

double NNfunction-NN_3_6::synapse0x1abe850() {
   return (neuron0x1ab9aa0()*0.0433312);
}

double NNfunction-NN_3_6::synapse0x1abe890() {
   return (neuron0x1ab9de0()*-0.00631281);
}

double NNfunction-NN_3_6::synapse0x1abe8d0() {
   return (neuron0x1aba120()*-0.0104636);
}

double NNfunction-NN_3_6::synapse0x1abe910() {
   return (neuron0x1aba460()*0.00608701);
}

double NNfunction-NN_3_6::synapse0x1abe1c0() {
   return (neuron0x1aba7a0()*0.0470235);
}

double NNfunction-NN_3_6::synapse0x1abe200() {
   return (neuron0x1abaae0()*0.0140211);
}

double NNfunction-NN_3_6::synapse0x1abe240() {
   return (neuron0x1abae20()*-0.679604);
}

double NNfunction-NN_3_6::synapse0x1abe280() {
   return (neuron0x1abb160()*0.0335545);
}

double NNfunction-NN_3_6::synapse0x1abeb60() {
   return (neuron0x1abb4a0()*0.0447217);
}

double NNfunction-NN_3_6::synapse0x1abeba0() {
   return (neuron0x1abb7e0()*0.0513906);
}

double NNfunction-NN_3_6::synapse0x1abebe0() {
   return (neuron0x1abbb20()*-0.0322741);
}

double NNfunction-NN_3_6::synapse0x1abe560() {
   return (neuron0x1abbe60()*0.0124269);
}

double NNfunction-NN_3_6::synapse0x1abe5a0() {
   return (neuron0x1abc3c0()*0.0255115);
}

double NNfunction-NN_3_6::synapse0x1abed30() {
   return (neuron0x1abc5e0()*0.05863);
}

double NNfunction-NN_3_6::synapse0x1abed70() {
   return (neuron0x1abc920()*0.00975513);
}

double NNfunction-NN_3_6::synapse0x1abedb0() {
   return (neuron0x1abcc60()*0.0261347);
}

double NNfunction-NN_3_6::synapse0x1abedf0() {
   return (neuron0x1abcfa0()*-0.0148414);
}

double NNfunction-NN_3_6::synapse0x1abee30() {
   return (neuron0x1abd2e0()*0.0372651);
}

double NNfunction-NN_3_6::synapse0x1abee70() {
   return (neuron0x1abd620()*0.115435);
}

double NNfunction-NN_3_6::synapse0x1abf1f0() {
   return (neuron0x1ab8a60()*0.0249521);
}

double NNfunction-NN_3_6::synapse0x1abf230() {
   return (neuron0x1ab8da0()*-0.0103729);
}

double NNfunction-NN_3_6::synapse0x1abf270() {
   return (neuron0x1ab90e0()*-0.276683);
}

double NNfunction-NN_3_6::synapse0x1abf2b0() {
   return (neuron0x1ab9420()*4.03491);
}

double NNfunction-NN_3_6::synapse0x1abf2f0() {
   return (neuron0x1ab9760()*-0.00247492);
}

double NNfunction-NN_3_6::synapse0x1abf330() {
   return (neuron0x1ab9aa0()*-0.00255854);
}

double NNfunction-NN_3_6::synapse0x1abf370() {
   return (neuron0x1ab9de0()*0.0543085);
}

double NNfunction-NN_3_6::synapse0x1abf3b0() {
   return (neuron0x1aba120()*0.0525822);
}

double NNfunction-NN_3_6::synapse0x1abf3f0() {
   return (neuron0x1aba460()*-0.00703335);
}

double NNfunction-NN_3_6::synapse0x1abf430() {
   return (neuron0x1aba7a0()*0.0122485);
}

double NNfunction-NN_3_6::synapse0x1abf470() {
   return (neuron0x1abaae0()*-0.000795201);
}

double NNfunction-NN_3_6::synapse0x1abf4b0() {
   return (neuron0x1abae20()*-0.521996);
}

double NNfunction-NN_3_6::synapse0x1abf4f0() {
   return (neuron0x1abb160()*0.152526);
}

double NNfunction-NN_3_6::synapse0x1abf530() {
   return (neuron0x1abb4a0()*-0.0374715);
}

double NNfunction-NN_3_6::synapse0x1abf570() {
   return (neuron0x1abb7e0()*0.0308383);
}

double NNfunction-NN_3_6::synapse0x1abf5b0() {
   return (neuron0x1abbb20()*0.0670048);
}

double NNfunction-NN_3_6::synapse0x1abf040() {
   return (neuron0x1abbe60()*-0.0787662);
}

double NNfunction-NN_3_6::synapse0x1abf080() {
   return (neuron0x1abc3c0()*0.009005);
}

double NNfunction-NN_3_6::synapse0x1877fc0() {
   return (neuron0x1abc5e0()*0.127132);
}

double NNfunction-NN_3_6::synapse0x1878000() {
   return (neuron0x1abc920()*-0.0409824);
}

double NNfunction-NN_3_6::synapse0x1aa7af0() {
   return (neuron0x1abcc60()*-0.0195168);
}

double NNfunction-NN_3_6::synapse0x1aa7b30() {
   return (neuron0x1abcfa0()*-0.00589269);
}

double NNfunction-NN_3_6::synapse0x1aa7b70() {
   return (neuron0x1abd2e0()*0.00750556);
}

double NNfunction-NN_3_6::synapse0x1ab89a0() {
   return (neuron0x1abd620()*0.127454);
}

double NNfunction-NN_3_6::synapse0x1abeb00() {
   return (neuron0x1ab8a60()*0.453403);
}

double NNfunction-NN_3_6::synapse0x1ab89e0() {
   return (neuron0x1ab8da0()*-0.440189);
}

double NNfunction-NN_3_6::synapse0x1ab8a20() {
   return (neuron0x1ab90e0()*-0.521779);
}

double NNfunction-NN_3_6::synapse0x1abf700() {
   return (neuron0x1ab9420()*-0.473802);
}

double NNfunction-NN_3_6::synapse0x1abf740() {
   return (neuron0x1ab9760()*-0.410536);
}

double NNfunction-NN_3_6::synapse0x1abf780() {
   return (neuron0x1ab9aa0()*-0.288847);
}

double NNfunction-NN_3_6::synapse0x1abf7c0() {
   return (neuron0x1ab9de0()*-0.240025);
}

double NNfunction-NN_3_6::synapse0x1abf800() {
   return (neuron0x1aba120()*-0.465174);
}

double NNfunction-NN_3_6::synapse0x1abf840() {
   return (neuron0x1aba460()*0.650845);
}

double NNfunction-NN_3_6::synapse0x1abf880() {
   return (neuron0x1aba7a0()*-0.368542);
}

double NNfunction-NN_3_6::synapse0x1abf8c0() {
   return (neuron0x1abaae0()*-0.0438551);
}

double NNfunction-NN_3_6::synapse0x1abf900() {
   return (neuron0x1abae20()*-0.70801);
}

double NNfunction-NN_3_6::synapse0x1abf940() {
   return (neuron0x1abb160()*0.58284);
}

double NNfunction-NN_3_6::synapse0x1abf980() {
   return (neuron0x1abb4a0()*0.456115);
}

double NNfunction-NN_3_6::synapse0x1abf9c0() {
   return (neuron0x1abb7e0()*0.236691);
}

double NNfunction-NN_3_6::synapse0x1abfa00() {
   return (neuron0x1abbb20()*-0.373744);
}

double NNfunction-NN_3_6::synapse0x1abe950() {
   return (neuron0x1abbe60()*-1.00602);
}

double NNfunction-NN_3_6::synapse0x1abe990() {
   return (neuron0x1abc3c0()*0.484006);
}

double NNfunction-NN_3_6::synapse0x1abfb50() {
   return (neuron0x1abc5e0()*0.21961);
}

double NNfunction-NN_3_6::synapse0x1abfb90() {
   return (neuron0x1abc920()*0.0696753);
}

double NNfunction-NN_3_6::synapse0x1abfbd0() {
   return (neuron0x1abcc60()*0.363515);
}

double NNfunction-NN_3_6::synapse0x1abfc10() {
   return (neuron0x1abcfa0()*0.0400731);
}

double NNfunction-NN_3_6::synapse0x1abfc50() {
   return (neuron0x1abd2e0()*-0.097436);
}

double NNfunction-NN_3_6::synapse0x1abfc90() {
   return (neuron0x1abd620()*-0.136182);
}

double NNfunction-NN_3_6::synapse0x1ac0010() {
   return (neuron0x1ab8a60()*0.201822);
}

double NNfunction-NN_3_6::synapse0x1ac0050() {
   return (neuron0x1ab8da0()*-0.0283645);
}

double NNfunction-NN_3_6::synapse0x1ac0090() {
   return (neuron0x1ab90e0()*-0.0662409);
}

double NNfunction-NN_3_6::synapse0x1ac00d0() {
   return (neuron0x1ab9420()*-0.722924);
}

double NNfunction-NN_3_6::synapse0x1ac0110() {
   return (neuron0x1ab9760()*0.249956);
}

double NNfunction-NN_3_6::synapse0x1ac0150() {
   return (neuron0x1ab9aa0()*-0.0774002);
}

double NNfunction-NN_3_6::synapse0x1ac0190() {
   return (neuron0x1ab9de0()*-0.466167);
}

double NNfunction-NN_3_6::synapse0x1ac01d0() {
   return (neuron0x1aba120()*-0.163272);
}

double NNfunction-NN_3_6::synapse0x1ac0210() {
   return (neuron0x1aba460()*0.0648414);
}

double NNfunction-NN_3_6::synapse0x1ac0250() {
   return (neuron0x1aba7a0()*-0.304903);
}

double NNfunction-NN_3_6::synapse0x1ac0290() {
   return (neuron0x1abaae0()*-0.17116);
}

double NNfunction-NN_3_6::synapse0x1ac02d0() {
   return (neuron0x1abae20()*-0.231328);
}

double NNfunction-NN_3_6::synapse0x1ac0310() {
   return (neuron0x1abb160()*0.563467);
}

double NNfunction-NN_3_6::synapse0x1ac0350() {
   return (neuron0x1abb4a0()*0.411727);
}

double NNfunction-NN_3_6::synapse0x1ac0390() {
   return (neuron0x1abb7e0()*-0.066621);
}

double NNfunction-NN_3_6::synapse0x1ac03d0() {
   return (neuron0x1abbb20()*0.403266);
}

double NNfunction-NN_3_6::synapse0x1abfe60() {
   return (neuron0x1abbe60()*0.107137);
}

double NNfunction-NN_3_6::synapse0x1abfea0() {
   return (neuron0x1abc3c0()*0.709608);
}

double NNfunction-NN_3_6::synapse0x1ac0520() {
   return (neuron0x1abc5e0()*0.440667);
}

double NNfunction-NN_3_6::synapse0x1ac0560() {
   return (neuron0x1abc920()*-0.0206553);
}

double NNfunction-NN_3_6::synapse0x1ac05a0() {
   return (neuron0x1abcc60()*-0.523969);
}

double NNfunction-NN_3_6::synapse0x1ac05e0() {
   return (neuron0x1abcfa0()*0.292363);
}

double NNfunction-NN_3_6::synapse0x1ac0620() {
   return (neuron0x1abd2e0()*-0.308086);
}

double NNfunction-NN_3_6::synapse0x1ac0660() {
   return (neuron0x1abd620()*0.802561);
}

double NNfunction-NN_3_6::synapse0x1ac09e0() {
   return (neuron0x1ab8a60()*0.0300824);
}

double NNfunction-NN_3_6::synapse0x1ac0a20() {
   return (neuron0x1ab8da0()*-0.118269);
}

double NNfunction-NN_3_6::synapse0x1ac0a60() {
   return (neuron0x1ab90e0()*0.772417);
}

double NNfunction-NN_3_6::synapse0x1ac0aa0() {
   return (neuron0x1ab9420()*-0.11681);
}

double NNfunction-NN_3_6::synapse0x1ac0ae0() {
   return (neuron0x1ab9760()*0.0121263);
}

double NNfunction-NN_3_6::synapse0x1ac0b20() {
   return (neuron0x1ab9aa0()*-0.0170603);
}

double NNfunction-NN_3_6::synapse0x1ac0b60() {
   return (neuron0x1ab9de0()*0.062855);
}

double NNfunction-NN_3_6::synapse0x1ac0ba0() {
   return (neuron0x1aba120()*0.030773);
}

double NNfunction-NN_3_6::synapse0x1ac0be0() {
   return (neuron0x1aba460()*-0.062352);
}

double NNfunction-NN_3_6::synapse0x1878330() {
   return (neuron0x1aba7a0()*0.0529353);
}

double NNfunction-NN_3_6::synapse0x1878370() {
   return (neuron0x1abaae0()*0.0247561);
}

double NNfunction-NN_3_6::synapse0x18783b0() {
   return (neuron0x1abae20()*0.320025);
}

double NNfunction-NN_3_6::synapse0x18783f0() {
   return (neuron0x1abb160()*-0.130295);
}

double NNfunction-NN_3_6::synapse0x1878430() {
   return (neuron0x1abb4a0()*-0.0212907);
}

double NNfunction-NN_3_6::synapse0x1878470() {
   return (neuron0x1abb7e0()*-0.0301366);
}

double NNfunction-NN_3_6::synapse0x18784b0() {
   return (neuron0x1abbb20()*0.00927111);
}

double NNfunction-NN_3_6::synapse0x1ac0830() {
   return (neuron0x1abbe60()*-0.0191414);
}

double NNfunction-NN_3_6::synapse0x1ac0870() {
   return (neuron0x1abc3c0()*0.0112722);
}

double NNfunction-NN_3_6::synapse0x1878600() {
   return (neuron0x1abc5e0()*0.0109457);
}

double NNfunction-NN_3_6::synapse0x1878640() {
   return (neuron0x1abc920()*0.0283179);
}

double NNfunction-NN_3_6::synapse0x1878680() {
   return (neuron0x1abcc60()*-0.0296836);
}

double NNfunction-NN_3_6::synapse0x18786c0() {
   return (neuron0x1abcfa0()*0.0872028);
}

double NNfunction-NN_3_6::synapse0x1878700() {
   return (neuron0x1abd2e0()*0.0260599);
}

double NNfunction-NN_3_6::synapse0x1ac1430() {
   return (neuron0x1abd620()*-0.415661);
}

double NNfunction-NN_3_6::synapse0x1ac17b0() {
   return (neuron0x1ab8a60()*-0.0134266);
}

double NNfunction-NN_3_6::synapse0x1ac17f0() {
   return (neuron0x1ab8da0()*-0.12793);
}

double NNfunction-NN_3_6::synapse0x1ac1830() {
   return (neuron0x1ab90e0()*-0.911497);
}

double NNfunction-NN_3_6::synapse0x1ac1870() {
   return (neuron0x1ab9420()*-0.444152);
}

double NNfunction-NN_3_6::synapse0x1ac18b0() {
   return (neuron0x1ab9760()*0.0817347);
}

double NNfunction-NN_3_6::synapse0x1ac18f0() {
   return (neuron0x1ab9aa0()*-0.161497);
}

double NNfunction-NN_3_6::synapse0x1ac1930() {
   return (neuron0x1ab9de0()*-0.164226);
}

double NNfunction-NN_3_6::synapse0x1ac1970() {
   return (neuron0x1aba120()*-0.0509442);
}

double NNfunction-NN_3_6::synapse0x1ac19b0() {
   return (neuron0x1aba460()*-0.452759);
}

double NNfunction-NN_3_6::synapse0x1ac19f0() {
   return (neuron0x1aba7a0()*-0.283447);
}

double NNfunction-NN_3_6::synapse0x1ac1a30() {
   return (neuron0x1abaae0()*0.0926859);
}

double NNfunction-NN_3_6::synapse0x1ac1a70() {
   return (neuron0x1abae20()*0.281374);
}

double NNfunction-NN_3_6::synapse0x1ac1ab0() {
   return (neuron0x1abb160()*-0.666668);
}

double NNfunction-NN_3_6::synapse0x1ac1af0() {
   return (neuron0x1abb4a0()*0.413395);
}

double NNfunction-NN_3_6::synapse0x1ac1b30() {
   return (neuron0x1abb7e0()*-0.229468);
}

double NNfunction-NN_3_6::synapse0x1ac1b70() {
   return (neuron0x1abbb20()*-0.812677);
}

double NNfunction-NN_3_6::synapse0x1ac1600() {
   return (neuron0x1abbe60()*0.402185);
}

double NNfunction-NN_3_6::synapse0x1ac1640() {
   return (neuron0x1abc3c0()*-0.465847);
}

double NNfunction-NN_3_6::synapse0x1ac1cc0() {
   return (neuron0x1abc5e0()*-0.0678838);
}

double NNfunction-NN_3_6::synapse0x1ac1d00() {
   return (neuron0x1abc920()*-0.0708252);
}

double NNfunction-NN_3_6::synapse0x1ac1d40() {
   return (neuron0x1abcc60()*-0.52096);
}

double NNfunction-NN_3_6::synapse0x1ac1d80() {
   return (neuron0x1abcfa0()*0.155514);
}

double NNfunction-NN_3_6::synapse0x1ac1dc0() {
   return (neuron0x1abd2e0()*-0.609741);
}

double NNfunction-NN_3_6::synapse0x1ac1e00() {
   return (neuron0x1abd620()*0.449125);
}

double NNfunction-NN_3_6::synapse0x1ac2180() {
   return (neuron0x1ab8a60()*0.0149903);
}

double NNfunction-NN_3_6::synapse0x1ac21c0() {
   return (neuron0x1ab8da0()*-0.00101169);
}

double NNfunction-NN_3_6::synapse0x1ac2200() {
   return (neuron0x1ab90e0()*-2.26555);
}

double NNfunction-NN_3_6::synapse0x1ac2240() {
   return (neuron0x1ab9420()*0.00371642);
}

double NNfunction-NN_3_6::synapse0x1ac2280() {
   return (neuron0x1ab9760()*0.007689);
}

double NNfunction-NN_3_6::synapse0x1ac22c0() {
   return (neuron0x1ab9aa0()*-0.0242117);
}

double NNfunction-NN_3_6::synapse0x1ac2300() {
   return (neuron0x1ab9de0()*-0.0212715);
}

double NNfunction-NN_3_6::synapse0x1ac2340() {
   return (neuron0x1aba120()*-0.0171506);
}

double NNfunction-NN_3_6::synapse0x1ac2380() {
   return (neuron0x1aba460()*0.0141696);
}

double NNfunction-NN_3_6::synapse0x1ac23c0() {
   return (neuron0x1aba7a0()*0.0119377);
}

double NNfunction-NN_3_6::synapse0x1ac2400() {
   return (neuron0x1abaae0()*0.0256955);
}

double NNfunction-NN_3_6::synapse0x1ac2440() {
   return (neuron0x1abae20()*9.1235);
}

double NNfunction-NN_3_6::synapse0x1ac2480() {
   return (neuron0x1abb160()*-0.0699707);
}

double NNfunction-NN_3_6::synapse0x1ac24c0() {
   return (neuron0x1abb4a0()*-0.0321857);
}

double NNfunction-NN_3_6::synapse0x1ac2500() {
   return (neuron0x1abb7e0()*-0.0354095);
}

double NNfunction-NN_3_6::synapse0x1ac2540() {
   return (neuron0x1abbb20()*-0.0578546);
}

double NNfunction-NN_3_6::synapse0x1ac1fd0() {
   return (neuron0x1abbe60()*-0.00576491);
}

double NNfunction-NN_3_6::synapse0x1ac2010() {
   return (neuron0x1abc3c0()*-0.0203922);
}

double NNfunction-NN_3_6::synapse0x1ac2690() {
   return (neuron0x1abc5e0()*-0.00212822);
}

double NNfunction-NN_3_6::synapse0x1ac26d0() {
   return (neuron0x1abc920()*-0.00248641);
}

double NNfunction-NN_3_6::synapse0x1ac2710() {
   return (neuron0x1abcc60()*0.0153029);
}

double NNfunction-NN_3_6::synapse0x1ac2750() {
   return (neuron0x1abcfa0()*0.00691003);
}

double NNfunction-NN_3_6::synapse0x1ac2790() {
   return (neuron0x1abd2e0()*-0.000366065);
}

double NNfunction-NN_3_6::synapse0x1ac27d0() {
   return (neuron0x1abd620()*0.0747394);
}

double NNfunction-NN_3_6::synapse0x1abc2b0() {
   return (neuron0x1ab8a60()*0.225419);
}

double NNfunction-NN_3_6::synapse0x1abc2f0() {
   return (neuron0x1ab8da0()*-11.7019);
}

double NNfunction-NN_3_6::synapse0x1abc330() {
   return (neuron0x1ab90e0()*0.476701);
}

double NNfunction-NN_3_6::synapse0x1abc370() {
   return (neuron0x1ab9420()*0.0901118);
}

double NNfunction-NN_3_6::synapse0x1ac2d60() {
   return (neuron0x1ab9760()*0.0167213);
}

double NNfunction-NN_3_6::synapse0x1ac2da0() {
   return (neuron0x1ab9aa0()*0.0138365);
}

double NNfunction-NN_3_6::synapse0x1ac2de0() {
   return (neuron0x1ab9de0()*0.0498693);
}

double NNfunction-NN_3_6::synapse0x1ac2e20() {
   return (neuron0x1aba120()*0.0425094);
}

double NNfunction-NN_3_6::synapse0x1ac2e60() {
   return (neuron0x1aba460()*-0.0283516);
}

double NNfunction-NN_3_6::synapse0x1ac2ea0() {
   return (neuron0x1aba7a0()*-0.0812102);
}

double NNfunction-NN_3_6::synapse0x1ac2ee0() {
   return (neuron0x1abaae0()*0.0795802);
}

double NNfunction-NN_3_6::synapse0x1ac2f20() {
   return (neuron0x1abae20()*1.06555);
}

double NNfunction-NN_3_6::synapse0x1ac2f60() {
   return (neuron0x1abb160()*0.0599508);
}

double NNfunction-NN_3_6::synapse0x1ac2fa0() {
   return (neuron0x1abb4a0()*-0.0680014);
}

double NNfunction-NN_3_6::synapse0x1ac2fe0() {
   return (neuron0x1abb7e0()*-0.0687144);
}

double NNfunction-NN_3_6::synapse0x1ac3020() {
   return (neuron0x1abbb20()*0.00211698);
}

double NNfunction-NN_3_6::synapse0x1ac29a0() {
   return (neuron0x1abbe60()*0.0169948);
}

double NNfunction-NN_3_6::synapse0x1ac29e0() {
   return (neuron0x1abc3c0()*0.0121655);
}

double NNfunction-NN_3_6::synapse0x1ac3170() {
   return (neuron0x1abc5e0()*-0.0778262);
}

double NNfunction-NN_3_6::synapse0x1ac31b0() {
   return (neuron0x1abc920()*-0.0187707);
}

double NNfunction-NN_3_6::synapse0x1ac31f0() {
   return (neuron0x1abcc60()*0.0329232);
}

double NNfunction-NN_3_6::synapse0x1ac3230() {
   return (neuron0x1abcfa0()*0.0400293);
}

double NNfunction-NN_3_6::synapse0x1ac3270() {
   return (neuron0x1abd2e0()*0.0685526);
}

double NNfunction-NN_3_6::synapse0x1ac32b0() {
   return (neuron0x1abd620()*-2.42305);
}

double NNfunction-NN_3_6::synapse0x1ac3630() {
   return (neuron0x1ab8a60()*-0.0102938);
}

double NNfunction-NN_3_6::synapse0x1ac3670() {
   return (neuron0x1ab8da0()*-0.00297256);
}

double NNfunction-NN_3_6::synapse0x1ac36b0() {
   return (neuron0x1ab90e0()*1.15428);
}

double NNfunction-NN_3_6::synapse0x1ac36f0() {
   return (neuron0x1ab9420()*-0.148063);
}

double NNfunction-NN_3_6::synapse0x1ac3730() {
   return (neuron0x1ab9760()*0.0152345);
}

double NNfunction-NN_3_6::synapse0x1ac3770() {
   return (neuron0x1ab9aa0()*0.0329142);
}

double NNfunction-NN_3_6::synapse0x1ac37b0() {
   return (neuron0x1ab9de0()*0.00503385);
}

double NNfunction-NN_3_6::synapse0x1ac37f0() {
   return (neuron0x1aba120()*0.0419177);
}

double NNfunction-NN_3_6::synapse0x1ac3830() {
   return (neuron0x1aba460()*-0.0246924);
}

double NNfunction-NN_3_6::synapse0x1ac3870() {
   return (neuron0x1aba7a0()*-0.0199773);
}

double NNfunction-NN_3_6::synapse0x1ac38b0() {
   return (neuron0x1abaae0()*-0.0297392);
}

double NNfunction-NN_3_6::synapse0x1ac38f0() {
   return (neuron0x1abae20()*-0.348293);
}

double NNfunction-NN_3_6::synapse0x1ac3930() {
   return (neuron0x1abb160()*-0.301984);
}

double NNfunction-NN_3_6::synapse0x1ac3970() {
   return (neuron0x1abb4a0()*0.0223988);
}

double NNfunction-NN_3_6::synapse0x1ac39b0() {
   return (neuron0x1abb7e0()*-0.159418);
}

double NNfunction-NN_3_6::synapse0x1ac39f0() {
   return (neuron0x1abbb20()*-0.161244);
}

double NNfunction-NN_3_6::synapse0x1ac3480() {
   return (neuron0x1abbe60()*-0.0229736);
}

double NNfunction-NN_3_6::synapse0x1ac34c0() {
   return (neuron0x1abc3c0()*-0.216156);
}

double NNfunction-NN_3_6::synapse0x1ac3b40() {
   return (neuron0x1abc5e0()*-0.242814);
}

double NNfunction-NN_3_6::synapse0x1ac3b80() {
   return (neuron0x1abc920()*-0.0186994);
}

double NNfunction-NN_3_6::synapse0x1ac3bc0() {
   return (neuron0x1abcc60()*-0.0401032);
}

double NNfunction-NN_3_6::synapse0x1ac3c00() {
   return (neuron0x1abcfa0()*-0.0055801);
}

double NNfunction-NN_3_6::synapse0x1ac3c40() {
   return (neuron0x1abd2e0()*0.00700051);
}

double NNfunction-NN_3_6::synapse0x1ac3c80() {
   return (neuron0x1abd620()*0.0617182);
}

double NNfunction-NN_3_6::synapse0x1ac4000() {
   return (neuron0x1ab8a60()*0.0664647);
}

double NNfunction-NN_3_6::synapse0x1ac4040() {
   return (neuron0x1ab8da0()*21.2979);
}

double NNfunction-NN_3_6::synapse0x1ac4080() {
   return (neuron0x1ab90e0()*2.37225);
}

double NNfunction-NN_3_6::synapse0x1ac40c0() {
   return (neuron0x1ab9420()*0.0080288);
}

double NNfunction-NN_3_6::synapse0x1ac4100() {
   return (neuron0x1ab9760()*0.0915599);
}

double NNfunction-NN_3_6::synapse0x1ac4140() {
   return (neuron0x1ab9aa0()*0.0259635);
}

double NNfunction-NN_3_6::synapse0x1ac4180() {
   return (neuron0x1ab9de0()*0.0465343);
}

double NNfunction-NN_3_6::synapse0x1ac41c0() {
   return (neuron0x1aba120()*-0.0252101);
}

double NNfunction-NN_3_6::synapse0x1ac4200() {
   return (neuron0x1aba460()*-0.015513);
}

double NNfunction-NN_3_6::synapse0x1ac4240() {
   return (neuron0x1aba7a0()*0.0191406);
}

double NNfunction-NN_3_6::synapse0x1ac4280() {
   return (neuron0x1abaae0()*-0.0247045);
}

double NNfunction-NN_3_6::synapse0x1ac42c0() {
   return (neuron0x1abae20()*-0.0230148);
}

double NNfunction-NN_3_6::synapse0x1ac4300() {
   return (neuron0x1abb160()*-0.0482367);
}

double NNfunction-NN_3_6::synapse0x1ac4340() {
   return (neuron0x1abb4a0()*0.0326779);
}

double NNfunction-NN_3_6::synapse0x1ac4380() {
   return (neuron0x1abb7e0()*-0.0226667);
}

double NNfunction-NN_3_6::synapse0x1ac43c0() {
   return (neuron0x1abbb20()*0.0311441);
}

double NNfunction-NN_3_6::synapse0x1ac3e50() {
   return (neuron0x1abbe60()*-0.0998767);
}

double NNfunction-NN_3_6::synapse0x1ac3e90() {
   return (neuron0x1abc3c0()*-0.00868182);
}

double NNfunction-NN_3_6::synapse0x1ac0c20() {
   return (neuron0x1abc5e0()*0.0365525);
}

double NNfunction-NN_3_6::synapse0x1ac0c60() {
   return (neuron0x1abc920()*0.057546);
}

double NNfunction-NN_3_6::synapse0x1ac0ca0() {
   return (neuron0x1abcc60()*-0.0508438);
}

double NNfunction-NN_3_6::synapse0x1ac0ce0() {
   return (neuron0x1abcfa0()*0.00616275);
}

double NNfunction-NN_3_6::synapse0x1ac0d20() {
   return (neuron0x1abd2e0()*-0.00548883);
}

double NNfunction-NN_3_6::synapse0x1ac0d60() {
   return (neuron0x1abd620()*-0.195562);
}

double NNfunction-NN_3_6::synapse0x1ac10e0() {
   return (neuron0x1ab8a60()*-0.0250917);
}

double NNfunction-NN_3_6::synapse0x1ac1120() {
   return (neuron0x1ab8da0()*0.168947);
}

double NNfunction-NN_3_6::synapse0x1ac1160() {
   return (neuron0x1ab90e0()*3.33829);
}

double NNfunction-NN_3_6::synapse0x1ac11a0() {
   return (neuron0x1ab9420()*-0.0687743);
}

double NNfunction-NN_3_6::synapse0x1ac11e0() {
   return (neuron0x1ab9760()*0.0327035);
}

double NNfunction-NN_3_6::synapse0x1ac1220() {
   return (neuron0x1ab9aa0()*0.0393166);
}

double NNfunction-NN_3_6::synapse0x1ac1260() {
   return (neuron0x1ab9de0()*0.0275525);
}

double NNfunction-NN_3_6::synapse0x1ac12a0() {
   return (neuron0x1aba120()*-0.022666);
}

double NNfunction-NN_3_6::synapse0x1ac12e0() {
   return (neuron0x1aba460()*0.017516);
}

double NNfunction-NN_3_6::synapse0x1ac1320() {
   return (neuron0x1aba7a0()*-0.133422);
}

double NNfunction-NN_3_6::synapse0x1ac1360() {
   return (neuron0x1abaae0()*-0.0303982);
}

double NNfunction-NN_3_6::synapse0x1ac13a0() {
   return (neuron0x1abae20()*0.969627);
}

double NNfunction-NN_3_6::synapse0x1ac13e0() {
   return (neuron0x1abb160()*-0.138157);
}

double NNfunction-NN_3_6::synapse0x1ac5520() {
   return (neuron0x1abb4a0()*-0.0572137);
}

double NNfunction-NN_3_6::synapse0x1ac5560() {
   return (neuron0x1abb7e0()*-0.0498559);
}

double NNfunction-NN_3_6::synapse0x1ac55a0() {
   return (neuron0x1abbb20()*-0.0820465);
}

double NNfunction-NN_3_6::synapse0x1ac0f30() {
   return (neuron0x1abbe60()*-0.013185);
}

double NNfunction-NN_3_6::synapse0x1ac0f70() {
   return (neuron0x1abc3c0()*-0.0954411);
}

double NNfunction-NN_3_6::synapse0x1ac56f0() {
   return (neuron0x1abc5e0()*-0.0904312);
}

double NNfunction-NN_3_6::synapse0x1ac5730() {
   return (neuron0x1abc920()*-0.00375074);
}

double NNfunction-NN_3_6::synapse0x1ac5770() {
   return (neuron0x1abcc60()*-0.0300642);
}

double NNfunction-NN_3_6::synapse0x1ac57b0() {
   return (neuron0x1abcfa0()*0.115211);
}

double NNfunction-NN_3_6::synapse0x1ac57f0() {
   return (neuron0x1abd2e0()*-0.0133556);
}

double NNfunction-NN_3_6::synapse0x1ac5830() {
   return (neuron0x1abd620()*-0.930118);
}

double NNfunction-NN_3_6::synapse0x1ac5bb0() {
   return (neuron0x1ab8a60()*1.06777);
}

double NNfunction-NN_3_6::synapse0x1ac5bf0() {
   return (neuron0x1ab8da0()*-0.0595086);
}

double NNfunction-NN_3_6::synapse0x1ac5c30() {
   return (neuron0x1ab90e0()*0.215829);
}

double NNfunction-NN_3_6::synapse0x1ac5c70() {
   return (neuron0x1ab9420()*0.352463);
}

double NNfunction-NN_3_6::synapse0x1ac5cb0() {
   return (neuron0x1ab9760()*0.709696);
}

double NNfunction-NN_3_6::synapse0x1ac5cf0() {
   return (neuron0x1ab9aa0()*0.279061);
}

double NNfunction-NN_3_6::synapse0x1ac5d30() {
   return (neuron0x1ab9de0()*-0.665351);
}

double NNfunction-NN_3_6::synapse0x1ac5d70() {
   return (neuron0x1aba120()*0.629582);
}

double NNfunction-NN_3_6::synapse0x1ac5db0() {
   return (neuron0x1aba460()*0.335451);
}

double NNfunction-NN_3_6::synapse0x1ac5df0() {
   return (neuron0x1aba7a0()*0.064217);
}

double NNfunction-NN_3_6::synapse0x1ac5e30() {
   return (neuron0x1abaae0()*0.774746);
}

double NNfunction-NN_3_6::synapse0x1ac5e70() {
   return (neuron0x1abae20()*-0.0175594);
}

double NNfunction-NN_3_6::synapse0x1ac5eb0() {
   return (neuron0x1abb160()*0.480089);
}

double NNfunction-NN_3_6::synapse0x1ac5ef0() {
   return (neuron0x1abb4a0()*-0.0363995);
}

double NNfunction-NN_3_6::synapse0x1ac5f30() {
   return (neuron0x1abb7e0()*0.341745);
}

double NNfunction-NN_3_6::synapse0x1ac5f70() {
   return (neuron0x1abbb20()*0.134491);
}

double NNfunction-NN_3_6::synapse0x1ac5a00() {
   return (neuron0x1abbe60()*-0.0532692);
}

double NNfunction-NN_3_6::synapse0x1ac5a40() {
   return (neuron0x1abc3c0()*-0.776959);
}

double NNfunction-NN_3_6::synapse0x1ac60c0() {
   return (neuron0x1abc5e0()*0.225312);
}

double NNfunction-NN_3_6::synapse0x1ac6100() {
   return (neuron0x1abc920()*0.404279);
}

double NNfunction-NN_3_6::synapse0x1ac6140() {
   return (neuron0x1abcc60()*-0.31451);
}

double NNfunction-NN_3_6::synapse0x1ac6180() {
   return (neuron0x1abcfa0()*-0.388723);
}

double NNfunction-NN_3_6::synapse0x1ac61c0() {
   return (neuron0x1abd2e0()*-0.438785);
}

double NNfunction-NN_3_6::synapse0x1ac6200() {
   return (neuron0x1abd620()*0.419422);
}

double NNfunction-NN_3_6::synapse0x1ac6580() {
   return (neuron0x1ab8a60()*-0.803209);
}

double NNfunction-NN_3_6::synapse0x1ac65c0() {
   return (neuron0x1ab8da0()*0.0386976);
}

double NNfunction-NN_3_6::synapse0x1ac6600() {
   return (neuron0x1ab90e0()*-0.341674);
}

double NNfunction-NN_3_6::synapse0x1ac6640() {
   return (neuron0x1ab9420()*-0.263334);
}

double NNfunction-NN_3_6::synapse0x1ac6680() {
   return (neuron0x1ab9760()*-0.161764);
}

double NNfunction-NN_3_6::synapse0x1ac66c0() {
   return (neuron0x1ab9aa0()*-0.105609);
}

double NNfunction-NN_3_6::synapse0x1ac6700() {
   return (neuron0x1ab9de0()*-0.252086);
}

double NNfunction-NN_3_6::synapse0x1ac6740() {
   return (neuron0x1aba120()*-0.397139);
}

double NNfunction-NN_3_6::synapse0x1ac6780() {
   return (neuron0x1aba460()*0.100911);
}

double NNfunction-NN_3_6::synapse0x1ac67c0() {
   return (neuron0x1aba7a0()*-0.630607);
}

double NNfunction-NN_3_6::synapse0x1ac6800() {
   return (neuron0x1abaae0()*0.143111);
}

double NNfunction-NN_3_6::synapse0x1ac6840() {
   return (neuron0x1abae20()*-0.293162);
}

double NNfunction-NN_3_6::synapse0x1ac6880() {
   return (neuron0x1abb160()*-0.685848);
}

double NNfunction-NN_3_6::synapse0x1ac68c0() {
   return (neuron0x1abb4a0()*-0.17182);
}

double NNfunction-NN_3_6::synapse0x1ac6900() {
   return (neuron0x1abb7e0()*0.245622);
}

double NNfunction-NN_3_6::synapse0x1ac6940() {
   return (neuron0x1abbb20()*0.174378);
}

double NNfunction-NN_3_6::synapse0x1ac63d0() {
   return (neuron0x1abbe60()*-0.57543);
}

double NNfunction-NN_3_6::synapse0x1ac6410() {
   return (neuron0x1abc3c0()*0.308258);
}

double NNfunction-NN_3_6::synapse0x1ac6a90() {
   return (neuron0x1abc5e0()*0.613978);
}

double NNfunction-NN_3_6::synapse0x1ac6ad0() {
   return (neuron0x1abc920()*0.0549477);
}

double NNfunction-NN_3_6::synapse0x1ac6b10() {
   return (neuron0x1abcc60()*-0.202242);
}

double NNfunction-NN_3_6::synapse0x1ac6b50() {
   return (neuron0x1abcfa0()*-0.446386);
}

double NNfunction-NN_3_6::synapse0x1ac6b90() {
   return (neuron0x1abd2e0()*0.453062);
}

double NNfunction-NN_3_6::synapse0x1ac6bd0() {
   return (neuron0x1abd620()*-0.457469);
}

double NNfunction-NN_3_6::synapse0x1ac6f50() {
   return (neuron0x1ab8a60()*0.38263);
}

double NNfunction-NN_3_6::synapse0x1ac6f90() {
   return (neuron0x1ab8da0()*0.158107);
}

double NNfunction-NN_3_6::synapse0x1ac6fd0() {
   return (neuron0x1ab90e0()*0.197889);
}

double NNfunction-NN_3_6::synapse0x1ac7010() {
   return (neuron0x1ab9420()*0.1557);
}

double NNfunction-NN_3_6::synapse0x1ac7050() {
   return (neuron0x1ab9760()*-0.174184);
}

double NNfunction-NN_3_6::synapse0x1ac7090() {
   return (neuron0x1ab9aa0()*0.386419);
}

double NNfunction-NN_3_6::synapse0x1ac70d0() {
   return (neuron0x1ab9de0()*0.21187);
}

double NNfunction-NN_3_6::synapse0x1ac7110() {
   return (neuron0x1aba120()*0.21052);
}

double NNfunction-NN_3_6::synapse0x1ac7150() {
   return (neuron0x1aba460()*0.367299);
}

double NNfunction-NN_3_6::synapse0x1ac7190() {
   return (neuron0x1aba7a0()*-0.174048);
}

double NNfunction-NN_3_6::synapse0x1ac71d0() {
   return (neuron0x1abaae0()*0.757467);
}

double NNfunction-NN_3_6::synapse0x1ac7210() {
   return (neuron0x1abae20()*-0.363873);
}

double NNfunction-NN_3_6::synapse0x1ac7250() {
   return (neuron0x1abb160()*0.504643);
}

double NNfunction-NN_3_6::synapse0x1ac7290() {
   return (neuron0x1abb4a0()*0.0940836);
}

double NNfunction-NN_3_6::synapse0x1ac72d0() {
   return (neuron0x1abb7e0()*-0.0502323);
}

double NNfunction-NN_3_6::synapse0x1ac7310() {
   return (neuron0x1abbb20()*-0.0131291);
}

double NNfunction-NN_3_6::synapse0x1ac6da0() {
   return (neuron0x1abbe60()*-0.225822);
}

double NNfunction-NN_3_6::synapse0x1ac6de0() {
   return (neuron0x1abc3c0()*0.846735);
}

double NNfunction-NN_3_6::synapse0x1ac7460() {
   return (neuron0x1abc5e0()*0.0313608);
}

double NNfunction-NN_3_6::synapse0x1ac74a0() {
   return (neuron0x1abc920()*0.144813);
}

double NNfunction-NN_3_6::synapse0x1ac74e0() {
   return (neuron0x1abcc60()*-0.177079);
}

double NNfunction-NN_3_6::synapse0x1ac7520() {
   return (neuron0x1abcfa0()*-0.424159);
}

double NNfunction-NN_3_6::synapse0x1ac7560() {
   return (neuron0x1abd2e0()*-0.0557571);
}

double NNfunction-NN_3_6::synapse0x1ac75a0() {
   return (neuron0x1abd620()*1.09073);
}

double NNfunction-NN_3_6::synapse0x1ac7920() {
   return (neuron0x1ab8a60()*0.0551373);
}

double NNfunction-NN_3_6::synapse0x1ab8c80() {
   return (neuron0x1ab8da0()*0.00389327);
}

double NNfunction-NN_3_6::synapse0x1ab8cc0() {
   return (neuron0x1ab90e0()*-2.56283);
}

double NNfunction-NN_3_6::synapse0x1ab8fc0() {
   return (neuron0x1ab9420()*-0.0151268);
}

double NNfunction-NN_3_6::synapse0x1ab9000() {
   return (neuron0x1ab9760()*0.017386);
}

double NNfunction-NN_3_6::synapse0x1ab9300() {
   return (neuron0x1ab9aa0()*0.0146655);
}

double NNfunction-NN_3_6::synapse0x1ab9340() {
   return (neuron0x1ab9de0()*-0.00582007);
}

double NNfunction-NN_3_6::synapse0x1ab9640() {
   return (neuron0x1aba120()*-0.00375332);
}

double NNfunction-NN_3_6::synapse0x1ab9680() {
   return (neuron0x1aba460()*0.00536018);
}

double NNfunction-NN_3_6::synapse0x1ab9980() {
   return (neuron0x1aba7a0()*-0.00158619);
}

double NNfunction-NN_3_6::synapse0x1ab99c0() {
   return (neuron0x1abaae0()*0.0159611);
}

double NNfunction-NN_3_6::synapse0x1ab9cc0() {
   return (neuron0x1abae20()*-0.167372);
}

double NNfunction-NN_3_6::synapse0x1ab9d00() {
   return (neuron0x1abb160()*0.0120718);
}

double NNfunction-NN_3_6::synapse0x1aba000() {
   return (neuron0x1abb4a0()*-0.0104635);
}

double NNfunction-NN_3_6::synapse0x1aba040() {
   return (neuron0x1abb7e0()*0.00543539);
}

double NNfunction-NN_3_6::synapse0x1aba340() {
   return (neuron0x1abbb20()*-0.018036);
}

double NNfunction-NN_3_6::synapse0x1aba380() {
   return (neuron0x1abbe60()*-0.00270853);
}

double NNfunction-NN_3_6::synapse0x1aba680() {
   return (neuron0x1abc3c0()*-0.0199006);
}

double NNfunction-NN_3_6::synapse0x1aba6c0() {
   return (neuron0x1abc5e0()*-0.0415193);
}

double NNfunction-NN_3_6::synapse0x1aba9c0() {
   return (neuron0x1abc920()*-0.0138982);
}

double NNfunction-NN_3_6::synapse0x1abaa00() {
   return (neuron0x1abcc60()*-0.00946278);
}

double NNfunction-NN_3_6::synapse0x1abad00() {
   return (neuron0x1abcfa0()*0.000227469);
}

double NNfunction-NN_3_6::synapse0x1abad40() {
   return (neuron0x1abd2e0()*-0.0037681);
}

double NNfunction-NN_3_6::synapse0x1abb040() {
   return (neuron0x1abd620()*-3.15167);
}

double NNfunction-NN_3_6::synapse0x1abb080() {
   return (neuron0x1ab8a60()*0.48893);
}

double NNfunction-NN_3_6::synapse0x1abbd40() {
   return (neuron0x1ab8da0()*-0.0890263);
}

double NNfunction-NN_3_6::synapse0x1abbd80() {
   return (neuron0x1ab90e0()*-0.0692917);
}

double NNfunction-NN_3_6::synapse0x1ac7770() {
   return (neuron0x1ab9420()*0.245131);
}

double NNfunction-NN_3_6::synapse0x1ac77b0() {
   return (neuron0x1ab9760()*0.303479);
}

double NNfunction-NN_3_6::synapse0x1abc080() {
   return (neuron0x1ab9aa0()*-0.299456);
}

double NNfunction-NN_3_6::synapse0x1abc0c0() {
   return (neuron0x1ab9de0()*0.221225);
}

double NNfunction-NN_3_6::synapse0x186a050() {
   return (neuron0x1aba120()*-0.5253);
}

double NNfunction-NN_3_6::synapse0x186a090() {
   return (neuron0x1aba460()*-0.377268);
}

double NNfunction-NN_3_6::synapse0x1abc800() {
   return (neuron0x1aba7a0()*-1.01625);
}

double NNfunction-NN_3_6::synapse0x1abc840() {
   return (neuron0x1abaae0()*-0.311918);
}

double NNfunction-NN_3_6::synapse0x1abcb40() {
   return (neuron0x1abae20()*0.0880652);
}

double NNfunction-NN_3_6::synapse0x1abcb80() {
   return (neuron0x1abb160()*-0.349969);
}

double NNfunction-NN_3_6::synapse0x1abce80() {
   return (neuron0x1abb4a0()*0.217413);
}

double NNfunction-NN_3_6::synapse0x1abcec0() {
   return (neuron0x1abb7e0()*-0.399304);
}

double NNfunction-NN_3_6::synapse0x1abd1c0() {
   return (neuron0x1abbb20()*0.0348143);
}

double NNfunction-NN_3_6::synapse0x1abd200() {
   return (neuron0x1abbe60()*0.1994);
}

double NNfunction-NN_3_6::synapse0x1abd500() {
   return (neuron0x1abc3c0()*0.634032);
}

double NNfunction-NN_3_6::synapse0x1abd540() {
   return (neuron0x1abc5e0()*-0.890124);
}

double NNfunction-NN_3_6::synapse0x1abd840() {
   return (neuron0x1abc920()*0.192573);
}

double NNfunction-NN_3_6::synapse0x1abd880() {
   return (neuron0x1abcc60()*0.472734);
}

double NNfunction-NN_3_6::synapse0x1abb380() {
   return (neuron0x1abcfa0()*0.0558853);
}

double NNfunction-NN_3_6::synapse0x1abb3c0() {
   return (neuron0x1abd2e0()*-0.236521);
}

double NNfunction-NN_3_6::synapse0x1ac9690() {
   return (neuron0x1abd620()*0.186278);
}

double NNfunction-NN_3_6::synapse0x1ac9a10() {
   return (neuron0x1ab8a60()*0.000996726);
}

double NNfunction-NN_3_6::synapse0x1ac9a50() {
   return (neuron0x1ab8da0()*-0.00655198);
}

double NNfunction-NN_3_6::synapse0x1ac9a90() {
   return (neuron0x1ab90e0()*1.01233);
}

double NNfunction-NN_3_6::synapse0x1ac9ad0() {
   return (neuron0x1ab9420()*0.0161319);
}

double NNfunction-NN_3_6::synapse0x1ac9b10() {
   return (neuron0x1ab9760()*0.0101854);
}

double NNfunction-NN_3_6::synapse0x1ac9b50() {
   return (neuron0x1ab9aa0()*-0.0126975);
}

double NNfunction-NN_3_6::synapse0x1ac9b90() {
   return (neuron0x1ab9de0()*0.0207032);
}

double NNfunction-NN_3_6::synapse0x1ac9bd0() {
   return (neuron0x1aba120()*-0.00366886);
}

double NNfunction-NN_3_6::synapse0x1ac9c10() {
   return (neuron0x1aba460()*-0.0139887);
}

double NNfunction-NN_3_6::synapse0x1ac9c50() {
   return (neuron0x1aba7a0()*0.00650687);
}

double NNfunction-NN_3_6::synapse0x1ac9c90() {
   return (neuron0x1abaae0()*-0.00796794);
}

double NNfunction-NN_3_6::synapse0x1ac9cd0() {
   return (neuron0x1abae20()*0.303447);
}

double NNfunction-NN_3_6::synapse0x1ac9d10() {
   return (neuron0x1abb160()*-0.057671);
}

double NNfunction-NN_3_6::synapse0x1ac9d50() {
   return (neuron0x1abb4a0()*-0.0201228);
}

double NNfunction-NN_3_6::synapse0x1ac9d90() {
   return (neuron0x1abb7e0()*-0.0153179);
}

double NNfunction-NN_3_6::synapse0x1ac9dd0() {
   return (neuron0x1abbb20()*0.00395271);
}

double NNfunction-NN_3_6::synapse0x1ac9860() {
   return (neuron0x1abbe60()*-0.0181899);
}

double NNfunction-NN_3_6::synapse0x1ac98a0() {
   return (neuron0x1abc3c0()*0.0168438);
}

double NNfunction-NN_3_6::synapse0x1ac9f20() {
   return (neuron0x1abc5e0()*0.0126378);
}

double NNfunction-NN_3_6::synapse0x1ac9f60() {
   return (neuron0x1abc920()*-0.00017619);
}

double NNfunction-NN_3_6::synapse0x1ac9fa0() {
   return (neuron0x1abcc60()*0.000826124);
}

double NNfunction-NN_3_6::synapse0x1ac9fe0() {
   return (neuron0x1abcfa0()*-0.0016979);
}

double NNfunction-NN_3_6::synapse0x1aca020() {
   return (neuron0x1abd2e0()*-0.00728577);
}

double NNfunction-NN_3_6::synapse0x1aca060() {
   return (neuron0x1abd620()*1.39848);
}

double NNfunction-NN_3_6::synapse0x1aca3e0() {
   return (neuron0x1ab8a60()*0.416377);
}

double NNfunction-NN_3_6::synapse0x1aca420() {
   return (neuron0x1ab8da0()*0.111943);
}

double NNfunction-NN_3_6::synapse0x1aca460() {
   return (neuron0x1ab90e0()*1.09128);
}

double NNfunction-NN_3_6::synapse0x1aca4a0() {
   return (neuron0x1ab9420()*0.296049);
}

double NNfunction-NN_3_6::synapse0x1aca4e0() {
   return (neuron0x1ab9760()*0.246528);
}

double NNfunction-NN_3_6::synapse0x1aca520() {
   return (neuron0x1ab9aa0()*0.270802);
}

double NNfunction-NN_3_6::synapse0x1aca560() {
   return (neuron0x1ab9de0()*-0.0162008);
}

double NNfunction-NN_3_6::synapse0x1aca5a0() {
   return (neuron0x1aba120()*0.254598);
}

double NNfunction-NN_3_6::synapse0x1aca5e0() {
   return (neuron0x1aba460()*-0.0670854);
}

double NNfunction-NN_3_6::synapse0x1aca620() {
   return (neuron0x1aba7a0()*0.082971);
}

double NNfunction-NN_3_6::synapse0x1aca660() {
   return (neuron0x1abaae0()*-0.452676);
}

double NNfunction-NN_3_6::synapse0x1aca6a0() {
   return (neuron0x1abae20()*-1.25274);
}

double NNfunction-NN_3_6::synapse0x1aca6e0() {
   return (neuron0x1abb160()*-0.150398);
}

double NNfunction-NN_3_6::synapse0x1aca720() {
   return (neuron0x1abb4a0()*-0.127813);
}

double NNfunction-NN_3_6::synapse0x1aca760() {
   return (neuron0x1abb7e0()*-0.300577);
}

double NNfunction-NN_3_6::synapse0x1aca7a0() {
   return (neuron0x1abbb20()*-0.111603);
}

double NNfunction-NN_3_6::synapse0x1aca230() {
   return (neuron0x1abbe60()*0.304481);
}

double NNfunction-NN_3_6::synapse0x1aca270() {
   return (neuron0x1abc3c0()*-0.64489);
}

double NNfunction-NN_3_6::synapse0x1aca8f0() {
   return (neuron0x1abc5e0()*-0.617677);
}

double NNfunction-NN_3_6::synapse0x1aca930() {
   return (neuron0x1abc920()*-0.385661);
}

double NNfunction-NN_3_6::synapse0x1aca970() {
   return (neuron0x1abcc60()*-0.388855);
}

double NNfunction-NN_3_6::synapse0x1aca9b0() {
   return (neuron0x1abcfa0()*0.0376189);
}

double NNfunction-NN_3_6::synapse0x1aca9f0() {
   return (neuron0x1abd2e0()*0.0696698);
}

double NNfunction-NN_3_6::synapse0x1acaa30() {
   return (neuron0x1abd620()*-0.48737);
}

double NNfunction-NN_3_6::synapse0x1acadb0() {
   return (neuron0x1ab8a60()*-0.141864);
}

double NNfunction-NN_3_6::synapse0x1acadf0() {
   return (neuron0x1ab8da0()*0.32904);
}

double NNfunction-NN_3_6::synapse0x1acae30() {
   return (neuron0x1ab90e0()*0.220473);
}

double NNfunction-NN_3_6::synapse0x1acae70() {
   return (neuron0x1ab9420()*0.288518);
}

double NNfunction-NN_3_6::synapse0x1acaeb0() {
   return (neuron0x1ab9760()*0.296921);
}

double NNfunction-NN_3_6::synapse0x1acaef0() {
   return (neuron0x1ab9aa0()*0.720063);
}

double NNfunction-NN_3_6::synapse0x1acaf30() {
   return (neuron0x1ab9de0()*0.381627);
}

double NNfunction-NN_3_6::synapse0x1acaf70() {
   return (neuron0x1aba120()*0.605614);
}

double NNfunction-NN_3_6::synapse0x1acafb0() {
   return (neuron0x1aba460()*-0.103299);
}

double NNfunction-NN_3_6::synapse0x1acaff0() {
   return (neuron0x1aba7a0()*0.461299);
}

double NNfunction-NN_3_6::synapse0x1acb030() {
   return (neuron0x1abaae0()*0.204082);
}

double NNfunction-NN_3_6::synapse0x1acb070() {
   return (neuron0x1abae20()*0.497213);
}

double NNfunction-NN_3_6::synapse0x1acb0b0() {
   return (neuron0x1abb160()*0.06947);
}

double NNfunction-NN_3_6::synapse0x1acb0f0() {
   return (neuron0x1abb4a0()*0.149487);
}

double NNfunction-NN_3_6::synapse0x1acb130() {
   return (neuron0x1abb7e0()*0.0892804);
}

double NNfunction-NN_3_6::synapse0x1acb170() {
   return (neuron0x1abbb20()*-0.416662);
}

double NNfunction-NN_3_6::synapse0x1acac00() {
   return (neuron0x1abbe60()*-0.196276);
}

double NNfunction-NN_3_6::synapse0x1acac40() {
   return (neuron0x1abc3c0()*-0.562607);
}

double NNfunction-NN_3_6::synapse0x1acb2c0() {
   return (neuron0x1abc5e0()*-0.413189);
}

double NNfunction-NN_3_6::synapse0x1acb300() {
   return (neuron0x1abc920()*0.0366245);
}

double NNfunction-NN_3_6::synapse0x1acb340() {
   return (neuron0x1abcc60()*-0.137665);
}

double NNfunction-NN_3_6::synapse0x1acb380() {
   return (neuron0x1abcfa0()*0.11528);
}

double NNfunction-NN_3_6::synapse0x1acb3c0() {
   return (neuron0x1abd2e0()*0.325971);
}

double NNfunction-NN_3_6::synapse0x1acb400() {
   return (neuron0x1abd620()*0.791693);
}

double NNfunction-NN_3_6::synapse0x1acb780() {
   return (neuron0x1ab8a60()*0.019043);
}

double NNfunction-NN_3_6::synapse0x1acb7c0() {
   return (neuron0x1ab8da0()*0.0110703);
}

double NNfunction-NN_3_6::synapse0x1acb800() {
   return (neuron0x1ab90e0()*0.103383);
}

double NNfunction-NN_3_6::synapse0x1acb840() {
   return (neuron0x1ab9420()*-0.0123963);
}

double NNfunction-NN_3_6::synapse0x1acb880() {
   return (neuron0x1ab9760()*0.0131628);
}

double NNfunction-NN_3_6::synapse0x1acb8c0() {
   return (neuron0x1ab9aa0()*-0.00914939);
}

double NNfunction-NN_3_6::synapse0x1acb900() {
   return (neuron0x1ab9de0()*0.0129365);
}

double NNfunction-NN_3_6::synapse0x1acb940() {
   return (neuron0x1aba120()*0.0015045);
}

double NNfunction-NN_3_6::synapse0x1acb980() {
   return (neuron0x1aba460()*-0.00336909);
}

double NNfunction-NN_3_6::synapse0x1acb9c0() {
   return (neuron0x1aba7a0()*0.00810794);
}

double NNfunction-NN_3_6::synapse0x1acba00() {
   return (neuron0x1abaae0()*-0.000919288);
}

double NNfunction-NN_3_6::synapse0x1acba40() {
   return (neuron0x1abae20()*0.174966);
}

double NNfunction-NN_3_6::synapse0x1acba80() {
   return (neuron0x1abb160()*-0.042218);
}

double NNfunction-NN_3_6::synapse0x1acbac0() {
   return (neuron0x1abb4a0()*0.000863696);
}

double NNfunction-NN_3_6::synapse0x1acbb00() {
   return (neuron0x1abb7e0()*-0.0190896);
}

double NNfunction-NN_3_6::synapse0x1acbb40() {
   return (neuron0x1abbb20()*-0.00261386);
}

double NNfunction-NN_3_6::synapse0x1acb5d0() {
   return (neuron0x1abbe60()*0.00931538);
}

double NNfunction-NN_3_6::synapse0x1acb610() {
   return (neuron0x1abc3c0()*0.00914806);
}

double NNfunction-NN_3_6::synapse0x1acbc90() {
   return (neuron0x1abc5e0()*0.00607408);
}

double NNfunction-NN_3_6::synapse0x1acbcd0() {
   return (neuron0x1abc920()*0.00370567);
}

double NNfunction-NN_3_6::synapse0x1acbd10() {
   return (neuron0x1abcc60()*0.003376);
}

double NNfunction-NN_3_6::synapse0x1acbd50() {
   return (neuron0x1abcfa0()*0.0147079);
}

double NNfunction-NN_3_6::synapse0x1acbd90() {
   return (neuron0x1abd2e0()*-0.00818488);
}

double NNfunction-NN_3_6::synapse0x1acbdd0() {
   return (neuron0x1abd620()*0.881356);
}

double NNfunction-NN_3_6::synapse0x1acc150() {
   return (neuron0x1ab8a60()*0.159508);
}

double NNfunction-NN_3_6::synapse0x1acc190() {
   return (neuron0x1ab8da0()*-0.284759);
}

double NNfunction-NN_3_6::synapse0x1acc1d0() {
   return (neuron0x1ab90e0()*1.22593);
}

double NNfunction-NN_3_6::synapse0x1acc210() {
   return (neuron0x1ab9420()*0.469479);
}

double NNfunction-NN_3_6::synapse0x1acc250() {
   return (neuron0x1ab9760()*-0.170019);
}

double NNfunction-NN_3_6::synapse0x1acc290() {
   return (neuron0x1ab9aa0()*0.122638);
}

double NNfunction-NN_3_6::synapse0x1acc2d0() {
   return (neuron0x1ab9de0()*-0.222684);
}

double NNfunction-NN_3_6::synapse0x1acc310() {
   return (neuron0x1aba120()*0.180115);
}

double NNfunction-NN_3_6::synapse0x1acc350() {
   return (neuron0x1aba460()*0.29157);
}

double NNfunction-NN_3_6::synapse0x1ac4510() {
   return (neuron0x1aba7a0()*0.253739);
}

double NNfunction-NN_3_6::synapse0x1ac4550() {
   return (neuron0x1abaae0()*-0.655543);
}

double NNfunction-NN_3_6::synapse0x1ac4590() {
   return (neuron0x1abae20()*0.590759);
}

double NNfunction-NN_3_6::synapse0x1ac45d0() {
   return (neuron0x1abb160()*0.456551);
}

double NNfunction-NN_3_6::synapse0x1ac4610() {
   return (neuron0x1abb4a0()*-0.159607);
}

double NNfunction-NN_3_6::synapse0x1ac4650() {
   return (neuron0x1abb7e0()*-0.0882165);
}

double NNfunction-NN_3_6::synapse0x1ac4690() {
   return (neuron0x1abbb20()*0.169194);
}

double NNfunction-NN_3_6::synapse0x1acbfa0() {
   return (neuron0x1abbe60()*0.0739495);
}

double NNfunction-NN_3_6::synapse0x1acbfe0() {
   return (neuron0x1abc3c0()*-0.277877);
}

double NNfunction-NN_3_6::synapse0x1ac47e0() {
   return (neuron0x1abc5e0()*0.602906);
}

double NNfunction-NN_3_6::synapse0x1ac4820() {
   return (neuron0x1abc920()*-0.288704);
}

double NNfunction-NN_3_6::synapse0x1ac4860() {
   return (neuron0x1abcc60()*-0.27153);
}

double NNfunction-NN_3_6::synapse0x1ac48a0() {
   return (neuron0x1abcfa0()*-0.397135);
}

double NNfunction-NN_3_6::synapse0x1ac48e0() {
   return (neuron0x1abd2e0()*-0.0852347);
}

double NNfunction-NN_3_6::synapse0x1ac4920() {
   return (neuron0x1abd620()*0.119966);
}

double NNfunction-NN_3_6::synapse0x1ac4ca0() {
   return (neuron0x1ab8a60()*0.092673);
}

double NNfunction-NN_3_6::synapse0x1ac4ce0() {
   return (neuron0x1ab8da0()*0.110487);
}

double NNfunction-NN_3_6::synapse0x1ac4d20() {
   return (neuron0x1ab90e0()*-1.96518);
}

double NNfunction-NN_3_6::synapse0x1ac4d60() {
   return (neuron0x1ab9420()*0.00928428);
}

double NNfunction-NN_3_6::synapse0x1ac4da0() {
   return (neuron0x1ab9760()*0.0155884);
}

double NNfunction-NN_3_6::synapse0x1ac4de0() {
   return (neuron0x1ab9aa0()*-0.031148);
}

double NNfunction-NN_3_6::synapse0x1ac4e20() {
   return (neuron0x1ab9de0()*-0.0194281);
}

double NNfunction-NN_3_6::synapse0x1ac4e60() {
   return (neuron0x1aba120()*-0.0248548);
}

double NNfunction-NN_3_6::synapse0x1ac4ea0() {
   return (neuron0x1aba460()*0.0411153);
}

double NNfunction-NN_3_6::synapse0x1ac4ee0() {
   return (neuron0x1aba7a0()*-0.0173632);
}

double NNfunction-NN_3_6::synapse0x1ac4f20() {
   return (neuron0x1abaae0()*0.00864542);
}

double NNfunction-NN_3_6::synapse0x1ac4f60() {
   return (neuron0x1abae20()*1.96656);
}

double NNfunction-NN_3_6::synapse0x1ac4fa0() {
   return (neuron0x1abb160()*0.0459744);
}

double NNfunction-NN_3_6::synapse0x1ac4fe0() {
   return (neuron0x1abb4a0()*0.0237998);
}

double NNfunction-NN_3_6::synapse0x1ac5020() {
   return (neuron0x1abb7e0()*0.00173485);
}

double NNfunction-NN_3_6::synapse0x1ac5060() {
   return (neuron0x1abbb20()*0.0567679);
}

double NNfunction-NN_3_6::synapse0x1ac4af0() {
   return (neuron0x1abbe60()*0.00480695);
}

double NNfunction-NN_3_6::synapse0x1ac4b30() {
   return (neuron0x1abc3c0()*0.0321283);
}

double NNfunction-NN_3_6::synapse0x1ac51b0() {
   return (neuron0x1abc5e0()*0.061842);
}

double NNfunction-NN_3_6::synapse0x1ac51f0() {
   return (neuron0x1abc920()*-0.0151382);
}

double NNfunction-NN_3_6::synapse0x1ac5230() {
   return (neuron0x1abcc60()*0.0396191);
}

double NNfunction-NN_3_6::synapse0x1ac5270() {
   return (neuron0x1abcfa0()*0.0541888);
}

double NNfunction-NN_3_6::synapse0x1ac52b0() {
   return (neuron0x1abd2e0()*0.0400415);
}

double NNfunction-NN_3_6::synapse0x1ac52f0() {
   return (neuron0x1abd620()*-3.3021);
}

double NNfunction-NN_3_6::synapse0x1ac54c0() {
   return (neuron0x1ab8a60()*-0.0184025);
}

double NNfunction-NN_3_6::synapse0x1ace550() {
   return (neuron0x1ab8da0()*0.113429);
}

double NNfunction-NN_3_6::synapse0x1ace590() {
   return (neuron0x1ab90e0()*3.0438);
}

double NNfunction-NN_3_6::synapse0x1ace5d0() {
   return (neuron0x1ab9420()*-0.0490745);
}

double NNfunction-NN_3_6::synapse0x1ace610() {
   return (neuron0x1ab9760()*0.0290643);
}

double NNfunction-NN_3_6::synapse0x1ace650() {
   return (neuron0x1ab9aa0()*0.0914233);
}

double NNfunction-NN_3_6::synapse0x1ace690() {
   return (neuron0x1ab9de0()*-0.0102235);
}

double NNfunction-NN_3_6::synapse0x1ace6d0() {
   return (neuron0x1aba120()*0.0729971);
}

double NNfunction-NN_3_6::synapse0x1ace710() {
   return (neuron0x1aba460()*-0.0203531);
}

double NNfunction-NN_3_6::synapse0x1ace750() {
   return (neuron0x1aba7a0()*-0.0220178);
}

double NNfunction-NN_3_6::synapse0x1ace790() {
   return (neuron0x1abaae0()*0.00841306);
}

double NNfunction-NN_3_6::synapse0x1ace7d0() {
   return (neuron0x1abae20()*-3.16992);
}

double NNfunction-NN_3_6::synapse0x1ace810() {
   return (neuron0x1abb160()*0.0934787);
}

double NNfunction-NN_3_6::synapse0x1ace850() {
   return (neuron0x1abb4a0()*0.00703916);
}

double NNfunction-NN_3_6::synapse0x1ace890() {
   return (neuron0x1abb7e0()*-0.000969366);
}

double NNfunction-NN_3_6::synapse0x1ace8d0() {
   return (neuron0x1abbb20()*0.00287861);
}

double NNfunction-NN_3_6::synapse0x1ace3a0() {
   return (neuron0x1abbe60()*0.047903);
}

double NNfunction-NN_3_6::synapse0x1ace3e0() {
   return (neuron0x1abc3c0()*-0.0633726);
}

double NNfunction-NN_3_6::synapse0x1acea20() {
   return (neuron0x1abc5e0()*-0.0664951);
}

double NNfunction-NN_3_6::synapse0x1acea60() {
   return (neuron0x1abc920()*-0.00590533);
}

double NNfunction-NN_3_6::synapse0x1aceaa0() {
   return (neuron0x1abcc60()*0.018149);
}

double NNfunction-NN_3_6::synapse0x1aceae0() {
   return (neuron0x1abcfa0()*0.0354598);
}

double NNfunction-NN_3_6::synapse0x1aceb20() {
   return (neuron0x1abd2e0()*0.0426488);
}

double NNfunction-NN_3_6::synapse0x1aceb60() {
   return (neuron0x1abd620()*1.38705);
}

double NNfunction-NN_3_6::synapse0x1aceee0() {
   return (neuron0x1ab8a60()*-0.868762);
}

double NNfunction-NN_3_6::synapse0x1acef20() {
   return (neuron0x1ab8da0()*0.0931326);
}

double NNfunction-NN_3_6::synapse0x1acef60() {
   return (neuron0x1ab90e0()*-0.542438);
}

double NNfunction-NN_3_6::synapse0x1acefa0() {
   return (neuron0x1ab9420()*-0.181125);
}

double NNfunction-NN_3_6::synapse0x1acefe0() {
   return (neuron0x1ab9760()*0.127837);
}

double NNfunction-NN_3_6::synapse0x1acf020() {
   return (neuron0x1ab9aa0()*-0.0538065);
}

double NNfunction-NN_3_6::synapse0x1acf060() {
   return (neuron0x1ab9de0()*0.647951);
}

double NNfunction-NN_3_6::synapse0x1acf0a0() {
   return (neuron0x1aba120()*-0.0428364);
}

double NNfunction-NN_3_6::synapse0x1acf0e0() {
   return (neuron0x1aba460()*0.0382438);
}

double NNfunction-NN_3_6::synapse0x1acf120() {
   return (neuron0x1aba7a0()*-0.4953);
}

double NNfunction-NN_3_6::synapse0x1acf160() {
   return (neuron0x1abaae0()*0.432575);
}

double NNfunction-NN_3_6::synapse0x1acf1a0() {
   return (neuron0x1abae20()*-0.202361);
}

double NNfunction-NN_3_6::synapse0x1acf1e0() {
   return (neuron0x1abb160()*0.00638361);
}

double NNfunction-NN_3_6::synapse0x1acf220() {
   return (neuron0x1abb4a0()*0.115041);
}

double NNfunction-NN_3_6::synapse0x1acf260() {
   return (neuron0x1abb7e0()*0.34204);
}

double NNfunction-NN_3_6::synapse0x1acf2a0() {
   return (neuron0x1abbb20()*0.202661);
}

double NNfunction-NN_3_6::synapse0x1aced30() {
   return (neuron0x1abbe60()*-0.31033);
}

double NNfunction-NN_3_6::synapse0x1aced70() {
   return (neuron0x1abc3c0()*0.0977486);
}

double NNfunction-NN_3_6::synapse0x1acf3f0() {
   return (neuron0x1abc5e0()*0.255716);
}

double NNfunction-NN_3_6::synapse0x1acf430() {
   return (neuron0x1abc920()*0.268079);
}

double NNfunction-NN_3_6::synapse0x1acf470() {
   return (neuron0x1abcc60()*-0.376234);
}

double NNfunction-NN_3_6::synapse0x1acf4b0() {
   return (neuron0x1abcfa0()*-0.273221);
}

double NNfunction-NN_3_6::synapse0x1acf4f0() {
   return (neuron0x1abd2e0()*-0.041889);
}

double NNfunction-NN_3_6::synapse0x1acf530() {
   return (neuron0x1abd620()*-0.0890593);
}

double NNfunction-NN_3_6::synapse0x1acf8b0() {
   return (neuron0x1ab8a60()*-1.02);
}

double NNfunction-NN_3_6::synapse0x1acf8f0() {
   return (neuron0x1ab8da0()*-0.0861247);
}

double NNfunction-NN_3_6::synapse0x1acf930() {
   return (neuron0x1ab90e0()*0.0893832);
}

double NNfunction-NN_3_6::synapse0x1acf970() {
   return (neuron0x1ab9420()*-0.141478);
}

double NNfunction-NN_3_6::synapse0x1acf9b0() {
   return (neuron0x1ab9760()*-0.0676013);
}

double NNfunction-NN_3_6::synapse0x1acf9f0() {
   return (neuron0x1ab9aa0()*0.273404);
}

double NNfunction-NN_3_6::synapse0x1acfa30() {
   return (neuron0x1ab9de0()*0.320418);
}

double NNfunction-NN_3_6::synapse0x1acfa70() {
   return (neuron0x1aba120()*-0.160146);
}

double NNfunction-NN_3_6::synapse0x1acfab0() {
   return (neuron0x1aba460()*0.212409);
}

double NNfunction-NN_3_6::synapse0x1acfaf0() {
   return (neuron0x1aba7a0()*0.165291);
}

double NNfunction-NN_3_6::synapse0x1acfb30() {
   return (neuron0x1abaae0()*-0.535564);
}

double NNfunction-NN_3_6::synapse0x1acfb70() {
   return (neuron0x1abae20()*-0.0400588);
}

double NNfunction-NN_3_6::synapse0x1acfbb0() {
   return (neuron0x1abb160()*-0.430682);
}

double NNfunction-NN_3_6::synapse0x1acfbf0() {
   return (neuron0x1abb4a0()*-0.93296);
}

double NNfunction-NN_3_6::synapse0x1acfc30() {
   return (neuron0x1abb7e0()*0.152016);
}

double NNfunction-NN_3_6::synapse0x1acfc70() {
   return (neuron0x1abbb20()*-0.236905);
}

double NNfunction-NN_3_6::synapse0x1acf700() {
   return (neuron0x1abbe60()*0.987597);
}

double NNfunction-NN_3_6::synapse0x1acf740() {
   return (neuron0x1abc3c0()*0.028897);
}

double NNfunction-NN_3_6::synapse0x1acfdc0() {
   return (neuron0x1abc5e0()*0.416761);
}

double NNfunction-NN_3_6::synapse0x1acfe00() {
   return (neuron0x1abc920()*-0.136531);
}

double NNfunction-NN_3_6::synapse0x1acfe40() {
   return (neuron0x1abcc60()*0.803758);
}

double NNfunction-NN_3_6::synapse0x1acfe80() {
   return (neuron0x1abcfa0()*-0.541347);
}

double NNfunction-NN_3_6::synapse0x1acfec0() {
   return (neuron0x1abd2e0()*-0.847498);
}

double NNfunction-NN_3_6::synapse0x1acff00() {
   return (neuron0x1abd620()*-0.570068);
}

double NNfunction-NN_3_6::synapse0x1ad0280() {
   return (neuron0x1ab8a60()*-0.281124);
}

double NNfunction-NN_3_6::synapse0x1ad02c0() {
   return (neuron0x1ab8da0()*-0.165965);
}

double NNfunction-NN_3_6::synapse0x1ad0300() {
   return (neuron0x1ab90e0()*0.407549);
}

double NNfunction-NN_3_6::synapse0x1ad0340() {
   return (neuron0x1ab9420()*0.326689);
}

double NNfunction-NN_3_6::synapse0x1ad0380() {
   return (neuron0x1ab9760()*-0.270721);
}

double NNfunction-NN_3_6::synapse0x1ad03c0() {
   return (neuron0x1ab9aa0()*-0.0415273);
}

double NNfunction-NN_3_6::synapse0x1ad0400() {
   return (neuron0x1ab9de0()*0.0834237);
}

double NNfunction-NN_3_6::synapse0x1ad0440() {
   return (neuron0x1aba120()*-0.495773);
}

double NNfunction-NN_3_6::synapse0x1ad0480() {
   return (neuron0x1aba460()*0.232691);
}

double NNfunction-NN_3_6::synapse0x1ad04c0() {
   return (neuron0x1aba7a0()*0.0343693);
}

double NNfunction-NN_3_6::synapse0x1ad0500() {
   return (neuron0x1abaae0()*-0.142187);
}

double NNfunction-NN_3_6::synapse0x1ad0540() {
   return (neuron0x1abae20()*-0.968617);
}

double NNfunction-NN_3_6::synapse0x1ad0580() {
   return (neuron0x1abb160()*0.00291675);
}

double NNfunction-NN_3_6::synapse0x1ad05c0() {
   return (neuron0x1abb4a0()*0.304195);
}

double NNfunction-NN_3_6::synapse0x1ad0600() {
   return (neuron0x1abb7e0()*0.405156);
}

double NNfunction-NN_3_6::synapse0x1ad0640() {
   return (neuron0x1abbb20()*-0.00766473);
}

double NNfunction-NN_3_6::synapse0x1ad00d0() {
   return (neuron0x1abbe60()*-0.262495);
}

double NNfunction-NN_3_6::synapse0x1ad0110() {
   return (neuron0x1abc3c0()*-0.0718429);
}

double NNfunction-NN_3_6::synapse0x1ad0790() {
   return (neuron0x1abc5e0()*0.355556);
}

double NNfunction-NN_3_6::synapse0x1ad07d0() {
   return (neuron0x1abc920()*-0.0102302);
}

double NNfunction-NN_3_6::synapse0x1ad0810() {
   return (neuron0x1abcc60()*-0.447157);
}

double NNfunction-NN_3_6::synapse0x1ad0850() {
   return (neuron0x1abcfa0()*0.0714919);
}

double NNfunction-NN_3_6::synapse0x1ad0890() {
   return (neuron0x1abd2e0()*0.485033);
}

double NNfunction-NN_3_6::synapse0x1ad08d0() {
   return (neuron0x1abd620()*0.113917);
}

double NNfunction-NN_3_6::synapse0x1ad0c50() {
   return (neuron0x1ab8a60()*-0.0213417);
}

double NNfunction-NN_3_6::synapse0x1ad0c90() {
   return (neuron0x1ab8da0()*0.00397443);
}

double NNfunction-NN_3_6::synapse0x1ad0cd0() {
   return (neuron0x1ab90e0()*1.0319);
}

double NNfunction-NN_3_6::synapse0x1ad0d10() {
   return (neuron0x1ab9420()*0.255979);
}

double NNfunction-NN_3_6::synapse0x1ad0d50() {
   return (neuron0x1ab9760()*0.00690134);
}

double NNfunction-NN_3_6::synapse0x1ad0d90() {
   return (neuron0x1ab9aa0()*-0.0498746);
}

double NNfunction-NN_3_6::synapse0x1ad0dd0() {
   return (neuron0x1ab9de0()*-0.0315058);
}

double NNfunction-NN_3_6::synapse0x1ad0e10() {
   return (neuron0x1aba120()*-0.00679611);
}

double NNfunction-NN_3_6::synapse0x1ad0e50() {
   return (neuron0x1aba460()*0.0383826);
}

double NNfunction-NN_3_6::synapse0x1ad0e90() {
   return (neuron0x1aba7a0()*-0.0114167);
}

double NNfunction-NN_3_6::synapse0x1ad0ed0() {
   return (neuron0x1abaae0()*-0.0101352);
}

double NNfunction-NN_3_6::synapse0x1ad0f10() {
   return (neuron0x1abae20()*-0.0301855);
}

double NNfunction-NN_3_6::synapse0x1ad0f50() {
   return (neuron0x1abb160()*0.0612334);
}

double NNfunction-NN_3_6::synapse0x1ad0f90() {
   return (neuron0x1abb4a0()*0.043923);
}

double NNfunction-NN_3_6::synapse0x1ad0fd0() {
   return (neuron0x1abb7e0()*0.00661086);
}

double NNfunction-NN_3_6::synapse0x1ad1010() {
   return (neuron0x1abbb20()*-0.0336822);
}

double NNfunction-NN_3_6::synapse0x1ad0aa0() {
   return (neuron0x1abbe60()*0.00146121);
}

double NNfunction-NN_3_6::synapse0x1ad0ae0() {
   return (neuron0x1abc3c0()*-0.0151789);
}

double NNfunction-NN_3_6::synapse0x1ad1160() {
   return (neuron0x1abc5e0()*0.0337382);
}

double NNfunction-NN_3_6::synapse0x1ad11a0() {
   return (neuron0x1abc920()*-0.00642702);
}

double NNfunction-NN_3_6::synapse0x1ad11e0() {
   return (neuron0x1abcc60()*0.0718324);
}

double NNfunction-NN_3_6::synapse0x1ad1220() {
   return (neuron0x1abcfa0()*-0.038248);
}

double NNfunction-NN_3_6::synapse0x1ad1260() {
   return (neuron0x1abd2e0()*-0.051393);
}

double NNfunction-NN_3_6::synapse0x1ad12a0() {
   return (neuron0x1abd620()*-0.325083);
}

double NNfunction-NN_3_6::synapse0x1ad1620() {
   return (neuron0x1ab8a60()*-0.0343051);
}

double NNfunction-NN_3_6::synapse0x1ad1660() {
   return (neuron0x1ab8da0()*-0.139362);
}

double NNfunction-NN_3_6::synapse0x1ad16a0() {
   return (neuron0x1ab90e0()*0.323114);
}

double NNfunction-NN_3_6::synapse0x1ad16e0() {
   return (neuron0x1ab9420()*-0.00762119);
}

double NNfunction-NN_3_6::synapse0x1ad1720() {
   return (neuron0x1ab9760()*-0.00601553);
}

double NNfunction-NN_3_6::synapse0x1ad1760() {
   return (neuron0x1ab9aa0()*0.0179974);
}

double NNfunction-NN_3_6::synapse0x1ad17a0() {
   return (neuron0x1ab9de0()*-0.0104619);
}

double NNfunction-NN_3_6::synapse0x1ad17e0() {
   return (neuron0x1aba120()*0.00888719);
}

double NNfunction-NN_3_6::synapse0x1ad1820() {
   return (neuron0x1aba460()*0.0173466);
}

double NNfunction-NN_3_6::synapse0x1ad1860() {
   return (neuron0x1aba7a0()*-0.0263535);
}

double NNfunction-NN_3_6::synapse0x1ad18a0() {
   return (neuron0x1abaae0()*-0.00528093);
}

double NNfunction-NN_3_6::synapse0x1ad18e0() {
   return (neuron0x1abae20()*-0.561611);
}

double NNfunction-NN_3_6::synapse0x1ad1920() {
   return (neuron0x1abb160()*0.00568118);
}

double NNfunction-NN_3_6::synapse0x1ad1960() {
   return (neuron0x1abb4a0()*-0.0081038);
}

double NNfunction-NN_3_6::synapse0x1ad19a0() {
   return (neuron0x1abb7e0()*0.0205539);
}

double NNfunction-NN_3_6::synapse0x1ad19e0() {
   return (neuron0x1abbb20()*0.00569356);
}

double NNfunction-NN_3_6::synapse0x1ad1470() {
   return (neuron0x1abbe60()*-0.0163924);
}

double NNfunction-NN_3_6::synapse0x1ad14b0() {
   return (neuron0x1abc3c0()*0.0183763);
}

double NNfunction-NN_3_6::synapse0x1ad1b30() {
   return (neuron0x1abc5e0()*-0.0573142);
}

double NNfunction-NN_3_6::synapse0x1ad1b70() {
   return (neuron0x1abc920()*-0.011929);
}

double NNfunction-NN_3_6::synapse0x1ad1bb0() {
   return (neuron0x1abcc60()*0.0149628);
}

double NNfunction-NN_3_6::synapse0x1ad1bf0() {
   return (neuron0x1abcfa0()*-0.0630437);
}

double NNfunction-NN_3_6::synapse0x1ad1c30() {
   return (neuron0x1abd2e0()*-0.010292);
}

double NNfunction-NN_3_6::synapse0x1ad1c70() {
   return (neuron0x1abd620()*4.07675);
}

double NNfunction-NN_3_6::synapse0x1ad1ff0() {
   return (neuron0x1ab8a60()*0.00111547);
}

double NNfunction-NN_3_6::synapse0x1ad2030() {
   return (neuron0x1ab8da0()*-0.107788);
}

double NNfunction-NN_3_6::synapse0x1ad2070() {
   return (neuron0x1ab90e0()*3.02126);
}

double NNfunction-NN_3_6::synapse0x1ad20b0() {
   return (neuron0x1ab9420()*-0.00137937);
}

double NNfunction-NN_3_6::synapse0x1ad20f0() {
   return (neuron0x1ab9760()*-0.0482011);
}

double NNfunction-NN_3_6::synapse0x1ad2130() {
   return (neuron0x1ab9aa0()*0.0416682);
}

double NNfunction-NN_3_6::synapse0x1ad2170() {
   return (neuron0x1ab9de0()*0.0467414);
}

double NNfunction-NN_3_6::synapse0x1ad21b0() {
   return (neuron0x1aba120()*-0.023126);
}

double NNfunction-NN_3_6::synapse0x1ad21f0() {
   return (neuron0x1aba460()*-0.0124389);
}

double NNfunction-NN_3_6::synapse0x1ad2230() {
   return (neuron0x1aba7a0()*0.00441723);
}

double NNfunction-NN_3_6::synapse0x1ad2270() {
   return (neuron0x1abaae0()*0.000747769);
}

double NNfunction-NN_3_6::synapse0x1ad22b0() {
   return (neuron0x1abae20()*-0.0469617);
}

double NNfunction-NN_3_6::synapse0x1ad22f0() {
   return (neuron0x1abb160()*0.0153507);
}

double NNfunction-NN_3_6::synapse0x1ad2330() {
   return (neuron0x1abb4a0()*-0.00570034);
}

double NNfunction-NN_3_6::synapse0x1ad2370() {
   return (neuron0x1abb7e0()*-0.00930084);
}

double NNfunction-NN_3_6::synapse0x1ad23b0() {
   return (neuron0x1abbb20()*0.0268318);
}

double NNfunction-NN_3_6::synapse0x1ad1e40() {
   return (neuron0x1abbe60()*-0.0260235);
}

double NNfunction-NN_3_6::synapse0x1ad1e80() {
   return (neuron0x1abc3c0()*-0.0110778);
}

double NNfunction-NN_3_6::synapse0x1ad2500() {
   return (neuron0x1abc5e0()*-0.0173932);
}

double NNfunction-NN_3_6::synapse0x1ad2540() {
   return (neuron0x1abc920()*0.00304668);
}

double NNfunction-NN_3_6::synapse0x1ad2580() {
   return (neuron0x1abcc60()*-0.0163563);
}

double NNfunction-NN_3_6::synapse0x1ad25c0() {
   return (neuron0x1abcfa0()*-0.0415577);
}

double NNfunction-NN_3_6::synapse0x1ad2600() {
   return (neuron0x1abd2e0()*0.0269927);
}

double NNfunction-NN_3_6::synapse0x1ad2640() {
   return (neuron0x1abd620()*-4.83776);
}

double NNfunction-NN_3_6::synapse0x1ad29c0() {
   return (neuron0x1ab8a60()*0.0256418);
}

double NNfunction-NN_3_6::synapse0x1ad2a00() {
   return (neuron0x1ab8da0()*-0.114655);
}

double NNfunction-NN_3_6::synapse0x1ad2a40() {
   return (neuron0x1ab90e0()*-1.06508);
}

double NNfunction-NN_3_6::synapse0x1ad2a80() {
   return (neuron0x1ab9420()*-0.0189438);
}

double NNfunction-NN_3_6::synapse0x1ad2ac0() {
   return (neuron0x1ab9760()*-0.0299395);
}

double NNfunction-NN_3_6::synapse0x1ad2b00() {
   return (neuron0x1ab9aa0()*-0.0468946);
}

double NNfunction-NN_3_6::synapse0x1ad2b40() {
   return (neuron0x1ab9de0()*-0.00967855);
}

double NNfunction-NN_3_6::synapse0x1ad2b80() {
   return (neuron0x1aba120()*-0.00895134);
}

double NNfunction-NN_3_6::synapse0x1ad2bc0() {
   return (neuron0x1aba460()*0.00759055);
}

double NNfunction-NN_3_6::synapse0x1ad2c00() {
   return (neuron0x1aba7a0()*-0.00250892);
}

double NNfunction-NN_3_6::synapse0x1ad2c40() {
   return (neuron0x1abaae0()*0.0147933);
}

double NNfunction-NN_3_6::synapse0x1ad2c80() {
   return (neuron0x1abae20()*0.239654);
}

double NNfunction-NN_3_6::synapse0x1ad2cc0() {
   return (neuron0x1abb160()*0.00681584);
}

double NNfunction-NN_3_6::synapse0x1ad2d00() {
   return (neuron0x1abb4a0()*0.0280593);
}

double NNfunction-NN_3_6::synapse0x1ad2d40() {
   return (neuron0x1abb7e0()*-0.00056078);
}

double NNfunction-NN_3_6::synapse0x1ad2d80() {
   return (neuron0x1abbb20()*-0.0249502);
}

double NNfunction-NN_3_6::synapse0x1ad2810() {
   return (neuron0x1abbe60()*-0.0284333);
}

double NNfunction-NN_3_6::synapse0x1ad2850() {
   return (neuron0x1abc3c0()*0.0376793);
}

double NNfunction-NN_3_6::synapse0x1ad2ed0() {
   return (neuron0x1abc5e0()*-0.00555029);
}

double NNfunction-NN_3_6::synapse0x1ad2f10() {
   return (neuron0x1abc920()*0.00547579);
}

double NNfunction-NN_3_6::synapse0x1ad2f50() {
   return (neuron0x1abcc60()*0.0246656);
}

double NNfunction-NN_3_6::synapse0x1ad2f90() {
   return (neuron0x1abcfa0()*0.00947049);
}

double NNfunction-NN_3_6::synapse0x1ad2fd0() {
   return (neuron0x1abd2e0()*0.0174067);
}

double NNfunction-NN_3_6::synapse0x1ad3010() {
   return (neuron0x1abd620()*2.21645);
}

double NNfunction-NN_3_6::synapse0x1ad3390() {
   return (neuron0x1ab8a60()*0.00339577);
}

double NNfunction-NN_3_6::synapse0x1ac7960() {
   return (neuron0x1ab8da0()*0.0618109);
}

double NNfunction-NN_3_6::synapse0x1ac79a0() {
   return (neuron0x1ab90e0()*-1.56836);
}

double NNfunction-NN_3_6::synapse0x1ac79e0() {
   return (neuron0x1ab9420()*0.0206641);
}

double NNfunction-NN_3_6::synapse0x1ac7c30() {
   return (neuron0x1ab9760()*0.028836);
}

double NNfunction-NN_3_6::synapse0x1ac7c70() {
   return (neuron0x1ab9aa0()*0.0305634);
}

double NNfunction-NN_3_6::synapse0x1ac7cb0() {
   return (neuron0x1ab9de0()*-0.0109264);
}

double NNfunction-NN_3_6::synapse0x1ac7f00() {
   return (neuron0x1aba120()*-0.00126619);
}

double NNfunction-NN_3_6::synapse0x1ac7f40() {
   return (neuron0x1aba460()*0.0336787);
}

double NNfunction-NN_3_6::synapse0x1ac8190() {
   return (neuron0x1aba7a0()*-0.0163921);
}

double NNfunction-NN_3_6::synapse0x1ac81d0() {
   return (neuron0x1abaae0()*-0.000184502);
}

double NNfunction-NN_3_6::synapse0x1ac8210() {
   return (neuron0x1abae20()*1.34563);
}

double NNfunction-NN_3_6::synapse0x1ac8460() {
   return (neuron0x1abb160()*0.030854);
}

double NNfunction-NN_3_6::synapse0x1ac84a0() {
   return (neuron0x1abb4a0()*0.00102119);
}

double NNfunction-NN_3_6::synapse0x1ac86f0() {
   return (neuron0x1abb7e0()*0.0439536);
}

double NNfunction-NN_3_6::synapse0x1ac8730() {
   return (neuron0x1abbb20()*0.0308541);
}

double NNfunction-NN_3_6::synapse0x1ad31e0() {
   return (neuron0x1abbe60()*0.0257971);
}

double NNfunction-NN_3_6::synapse0x1ad3220() {
   return (neuron0x1abc3c0()*0.0503792);
}

double NNfunction-NN_3_6::synapse0x1ac8880() {
   return (neuron0x1abc5e0()*-0.00533781);
}

double NNfunction-NN_3_6::synapse0x1ac8d90() {
   return (neuron0x1abc920()*0.00787981);
}

double NNfunction-NN_3_6::synapse0x1ac8dd0() {
   return (neuron0x1abcc60()*0.0109531);
}

double NNfunction-NN_3_6::synapse0x1ac8e10() {
   return (neuron0x1abcfa0()*-0.0129998);
}

double NNfunction-NN_3_6::synapse0x1ac9060() {
   return (neuron0x1abd2e0()*-0.00436555);
}

double NNfunction-NN_3_6::synapse0x1ac90a0() {
   return (neuron0x1abd620()*-2.3418);
}

double NNfunction-NN_3_6::synapse0x1ac8950() {
   return (neuron0x1ab8a60()*0.00758141);
}

double NNfunction-NN_3_6::synapse0x1ac8990() {
   return (neuron0x1ab8da0()*0.0502982);
}

double NNfunction-NN_3_6::synapse0x1ac89d0() {
   return (neuron0x1ab90e0()*-1.0307);
}

double NNfunction-NN_3_6::synapse0x1ac8a10() {
   return (neuron0x1ab9420()*-0.0179344);
}

double NNfunction-NN_3_6::synapse0x1ac9390() {
   return (neuron0x1ab9760()*0.00314815);
}

double NNfunction-NN_3_6::synapse0x1ad56e0() {
   return (neuron0x1ab9aa0()*-0.00553788);
}

double NNfunction-NN_3_6::synapse0x1ad5720() {
   return (neuron0x1ab9de0()*0.00179339);
}

double NNfunction-NN_3_6::synapse0x1ad5760() {
   return (neuron0x1aba120()*0.00148134);
}

double NNfunction-NN_3_6::synapse0x1ad57a0() {
   return (neuron0x1aba460()*0.000445051);
}

double NNfunction-NN_3_6::synapse0x1ad57e0() {
   return (neuron0x1aba7a0()*0.00216319);
}

double NNfunction-NN_3_6::synapse0x1ad5820() {
   return (neuron0x1abaae0()*-0.0147943);
}

double NNfunction-NN_3_6::synapse0x1ad5860() {
   return (neuron0x1abae20()*-0.0444532);
}

double NNfunction-NN_3_6::synapse0x1ad58a0() {
   return (neuron0x1abb160()*-0.0384267);
}

double NNfunction-NN_3_6::synapse0x1ad58e0() {
   return (neuron0x1abb4a0()*-0.021935);
}

double NNfunction-NN_3_6::synapse0x1ad5920() {
   return (neuron0x1abb7e0()*-0.0159323);
}

double NNfunction-NN_3_6::synapse0x1ad5960() {
   return (neuron0x1abbb20()*-0.00110404);
}

double NNfunction-NN_3_6::synapse0x1ac9270() {
   return (neuron0x1abbe60()*0.00955731);
}

double NNfunction-NN_3_6::synapse0x1ac92b0() {
   return (neuron0x1abc3c0()*-0.0231168);
}

double NNfunction-NN_3_6::synapse0x1ad5ab0() {
   return (neuron0x1abc5e0()*-0.00302734);
}

double NNfunction-NN_3_6::synapse0x1ad5af0() {
   return (neuron0x1abc920()*0.00332124);
}

double NNfunction-NN_3_6::synapse0x1ad5b30() {
   return (neuron0x1abcc60()*-0.00845251);
}

double NNfunction-NN_3_6::synapse0x1ad5b70() {
   return (neuron0x1abcfa0()*-0.00156365);
}

double NNfunction-NN_3_6::synapse0x1ad5bb0() {
   return (neuron0x1abd2e0()*-0.0027356);
}

double NNfunction-NN_3_6::synapse0x1ad5bf0() {
   return (neuron0x1abd620()*-1.11995);
}

double NNfunction-NN_3_6::synapse0x1ad5f70() {
   return (neuron0x1ab8a60()*-0.0417876);
}

double NNfunction-NN_3_6::synapse0x1ad5fb0() {
   return (neuron0x1ab8da0()*-0.180274);
}

double NNfunction-NN_3_6::synapse0x1ad5ff0() {
   return (neuron0x1ab90e0()*-0.337095);
}

double NNfunction-NN_3_6::synapse0x1ad6030() {
   return (neuron0x1ab9420()*0.0206152);
}

double NNfunction-NN_3_6::synapse0x1ad6070() {
   return (neuron0x1ab9760()*0.407659);
}

double NNfunction-NN_3_6::synapse0x1ad60b0() {
   return (neuron0x1ab9aa0()*0.378044);
}

double NNfunction-NN_3_6::synapse0x1ad60f0() {
   return (neuron0x1ab9de0()*0.157878);
}

double NNfunction-NN_3_6::synapse0x1ad6130() {
   return (neuron0x1aba120()*-0.00085702);
}

double NNfunction-NN_3_6::synapse0x1ad6170() {
   return (neuron0x1aba460()*0.185761);
}

double NNfunction-NN_3_6::synapse0x1ad61b0() {
   return (neuron0x1aba7a0()*0.0890122);
}

double NNfunction-NN_3_6::synapse0x1ad61f0() {
   return (neuron0x1abaae0()*-0.237525);
}

double NNfunction-NN_3_6::synapse0x1ad6230() {
   return (neuron0x1abae20()*-0.077594);
}

double NNfunction-NN_3_6::synapse0x1ad6270() {
   return (neuron0x1abb160()*0.205913);
}

double NNfunction-NN_3_6::synapse0x1ad62b0() {
   return (neuron0x1abb4a0()*0.0490222);
}

double NNfunction-NN_3_6::synapse0x1ad62f0() {
   return (neuron0x1abb7e0()*0.253948);
}

double NNfunction-NN_3_6::synapse0x1ad6330() {
   return (neuron0x1abbb20()*0.083049);
}

double NNfunction-NN_3_6::synapse0x1ad5dc0() {
   return (neuron0x1abbe60()*0.293482);
}

double NNfunction-NN_3_6::synapse0x1ad5e00() {
   return (neuron0x1abc3c0()*0.100411);
}

double NNfunction-NN_3_6::synapse0x1ad6480() {
   return (neuron0x1abc5e0()*0.13198);
}

double NNfunction-NN_3_6::synapse0x1ad64c0() {
   return (neuron0x1abc920()*0.251506);
}

double NNfunction-NN_3_6::synapse0x1ad6500() {
   return (neuron0x1abcc60()*0.0405546);
}

double NNfunction-NN_3_6::synapse0x1ad6540() {
   return (neuron0x1abcfa0()*0.256583);
}

double NNfunction-NN_3_6::synapse0x1ad6580() {
   return (neuron0x1abd2e0()*-0.196398);
}

double NNfunction-NN_3_6::synapse0x1ad65c0() {
   return (neuron0x1abd620()*0.370479);
}

double NNfunction-NN_3_6::synapse0x1ad6940() {
   return (neuron0x1ab8a60()*-0.59041);
}

double NNfunction-NN_3_6::synapse0x1ad6980() {
   return (neuron0x1ab8da0()*-0.101569);
}

double NNfunction-NN_3_6::synapse0x1ad69c0() {
   return (neuron0x1ab90e0()*-0.198598);
}

double NNfunction-NN_3_6::synapse0x1ad6a00() {
   return (neuron0x1ab9420()*0.603647);
}

double NNfunction-NN_3_6::synapse0x1ad6a40() {
   return (neuron0x1ab9760()*0.11779);
}

double NNfunction-NN_3_6::synapse0x1ad6a80() {
   return (neuron0x1ab9aa0()*0.605444);
}

double NNfunction-NN_3_6::synapse0x1ad6ac0() {
   return (neuron0x1ab9de0()*-0.455108);
}

double NNfunction-NN_3_6::synapse0x1ad6b00() {
   return (neuron0x1aba120()*-0.492275);
}

double NNfunction-NN_3_6::synapse0x1ad6b40() {
   return (neuron0x1aba460()*-0.632659);
}

double NNfunction-NN_3_6::synapse0x1ad6b80() {
   return (neuron0x1aba7a0()*0.304575);
}

double NNfunction-NN_3_6::synapse0x1ad6bc0() {
   return (neuron0x1abaae0()*0.214275);
}

double NNfunction-NN_3_6::synapse0x1ad6c00() {
   return (neuron0x1abae20()*-0.373484);
}

double NNfunction-NN_3_6::synapse0x1ad6c40() {
   return (neuron0x1abb160()*-0.28093);
}

double NNfunction-NN_3_6::synapse0x1ad6c80() {
   return (neuron0x1abb4a0()*0.252556);
}

double NNfunction-NN_3_6::synapse0x1ad6cc0() {
   return (neuron0x1abb7e0()*-0.185501);
}

double NNfunction-NN_3_6::synapse0x1ad6d00() {
   return (neuron0x1abbb20()*0.760926);
}

double NNfunction-NN_3_6::synapse0x1ad6790() {
   return (neuron0x1abbe60()*0.386401);
}

double NNfunction-NN_3_6::synapse0x1ad67d0() {
   return (neuron0x1abc3c0()*0.080451);
}

double NNfunction-NN_3_6::synapse0x1ad6e50() {
   return (neuron0x1abc5e0()*-0.257351);
}

double NNfunction-NN_3_6::synapse0x1ad6e90() {
   return (neuron0x1abc920()*0.561675);
}

double NNfunction-NN_3_6::synapse0x1ad6ed0() {
   return (neuron0x1abcc60()*0.290836);
}

double NNfunction-NN_3_6::synapse0x1ad6f10() {
   return (neuron0x1abcfa0()*0.0184295);
}

double NNfunction-NN_3_6::synapse0x1ad6f50() {
   return (neuron0x1abd2e0()*-0.0490888);
}

double NNfunction-NN_3_6::synapse0x1ad6f90() {
   return (neuron0x1abd620()*-0.159375);
}

double NNfunction-NN_3_6::synapse0x1ad7310() {
   return (neuron0x1ab8a60()*-0.0270074);
}

double NNfunction-NN_3_6::synapse0x1ad7350() {
   return (neuron0x1ab8da0()*-0.124706);
}

double NNfunction-NN_3_6::synapse0x1ad7390() {
   return (neuron0x1ab90e0()*-0.294008);
}

double NNfunction-NN_3_6::synapse0x1ad73d0() {
   return (neuron0x1ab9420()*0.0123733);
}

double NNfunction-NN_3_6::synapse0x1ad7410() {
   return (neuron0x1ab9760()*-0.0400415);
}

double NNfunction-NN_3_6::synapse0x1ad7450() {
   return (neuron0x1ab9aa0()*-0.0109329);
}

double NNfunction-NN_3_6::synapse0x1ad7490() {
   return (neuron0x1ab9de0()*-0.00622779);
}

double NNfunction-NN_3_6::synapse0x1ad74d0() {
   return (neuron0x1aba120()*0.00457807);
}

double NNfunction-NN_3_6::synapse0x1ad7510() {
   return (neuron0x1aba460()*-0.069485);
}

double NNfunction-NN_3_6::synapse0x1ad7550() {
   return (neuron0x1aba7a0()*0.0933915);
}

double NNfunction-NN_3_6::synapse0x1ad7590() {
   return (neuron0x1abaae0()*0.0609739);
}

double NNfunction-NN_3_6::synapse0x1ad75d0() {
   return (neuron0x1abae20()*-4.22595);
}

double NNfunction-NN_3_6::synapse0x1ad7610() {
   return (neuron0x1abb160()*-0.0133015);
}

double NNfunction-NN_3_6::synapse0x1ad7650() {
   return (neuron0x1abb4a0()*0.104028);
}

double NNfunction-NN_3_6::synapse0x1ad7690() {
   return (neuron0x1abb7e0()*-0.00668485);
}

double NNfunction-NN_3_6::synapse0x1ad76d0() {
   return (neuron0x1abbb20()*-0.0230507);
}

double NNfunction-NN_3_6::synapse0x1ad7160() {
   return (neuron0x1abbe60()*0.0415341);
}

double NNfunction-NN_3_6::synapse0x1ad71a0() {
   return (neuron0x1abc3c0()*0.0177523);
}

double NNfunction-NN_3_6::synapse0x1ad7820() {
   return (neuron0x1abc5e0()*0.0242441);
}

double NNfunction-NN_3_6::synapse0x1ad7860() {
   return (neuron0x1abc920()*0.0410848);
}

double NNfunction-NN_3_6::synapse0x1ad78a0() {
   return (neuron0x1abcc60()*0.0386009);
}

double NNfunction-NN_3_6::synapse0x1ad78e0() {
   return (neuron0x1abcfa0()*0.0894332);
}

double NNfunction-NN_3_6::synapse0x1ad7920() {
   return (neuron0x1abd2e0()*0.0250886);
}

double NNfunction-NN_3_6::synapse0x1ad7960() {
   return (neuron0x1abd620()*-2.94292);
}

double NNfunction-NN_3_6::synapse0x1ad7ce0() {
   return (neuron0x1ab8a60()*0.884552);
}

double NNfunction-NN_3_6::synapse0x1ad7d20() {
   return (neuron0x1ab8da0()*0.0994221);
}

double NNfunction-NN_3_6::synapse0x1ad7d60() {
   return (neuron0x1ab90e0()*0.201908);
}

double NNfunction-NN_3_6::synapse0x1ad7da0() {
   return (neuron0x1ab9420()*0.85149);
}

double NNfunction-NN_3_6::synapse0x1ad7de0() {
   return (neuron0x1ab9760()*0.0389066);
}

double NNfunction-NN_3_6::synapse0x1ad7e20() {
   return (neuron0x1ab9aa0()*-0.506355);
}

double NNfunction-NN_3_6::synapse0x1ad7e60() {
   return (neuron0x1ab9de0()*0.0538021);
}

double NNfunction-NN_3_6::synapse0x1ad7ea0() {
   return (neuron0x1aba120()*-0.178976);
}

double NNfunction-NN_3_6::synapse0x1ad7ee0() {
   return (neuron0x1aba460()*0.692149);
}

double NNfunction-NN_3_6::synapse0x1ad7f20() {
   return (neuron0x1aba7a0()*0.473753);
}

double NNfunction-NN_3_6::synapse0x1ad7f60() {
   return (neuron0x1abaae0()*-0.136096);
}

double NNfunction-NN_3_6::synapse0x1ad7fa0() {
   return (neuron0x1abae20()*0.357293);
}

double NNfunction-NN_3_6::synapse0x1ad7fe0() {
   return (neuron0x1abb160()*0.312558);
}

double NNfunction-NN_3_6::synapse0x1ad8020() {
   return (neuron0x1abb4a0()*0.219867);
}

double NNfunction-NN_3_6::synapse0x1ad8060() {
   return (neuron0x1abb7e0()*0.152256);
}

double NNfunction-NN_3_6::synapse0x1ad80a0() {
   return (neuron0x1abbb20()*0.0749423);
}

double NNfunction-NN_3_6::synapse0x1ad7b30() {
   return (neuron0x1abbe60()*0.233486);
}

double NNfunction-NN_3_6::synapse0x1ad7b70() {
   return (neuron0x1abc3c0()*0.866115);
}

double NNfunction-NN_3_6::synapse0x1ad81f0() {
   return (neuron0x1abc5e0()*0.432231);
}

double NNfunction-NN_3_6::synapse0x1ad8230() {
   return (neuron0x1abc920()*0.387369);
}

double NNfunction-NN_3_6::synapse0x1ad8270() {
   return (neuron0x1abcc60()*-0.277254);
}

double NNfunction-NN_3_6::synapse0x1ad82b0() {
   return (neuron0x1abcfa0()*-0.0820929);
}

double NNfunction-NN_3_6::synapse0x1ad82f0() {
   return (neuron0x1abd2e0()*0.782563);
}

double NNfunction-NN_3_6::synapse0x1ad8330() {
   return (neuron0x1abd620()*0.560781);
}

double NNfunction-NN_3_6::synapse0x1ad86b0() {
   return (neuron0x1ab8a60()*0.0482914);
}

double NNfunction-NN_3_6::synapse0x1ad86f0() {
   return (neuron0x1ab8da0()*0.0436038);
}

double NNfunction-NN_3_6::synapse0x1ad8730() {
   return (neuron0x1ab90e0()*-4.29559);
}

double NNfunction-NN_3_6::synapse0x1ad8770() {
   return (neuron0x1ab9420()*0.00136708);
}

double NNfunction-NN_3_6::synapse0x1ad87b0() {
   return (neuron0x1ab9760()*0.0493134);
}

double NNfunction-NN_3_6::synapse0x1ad87f0() {
   return (neuron0x1ab9aa0()*0.0262776);
}

double NNfunction-NN_3_6::synapse0x1ad8830() {
   return (neuron0x1ab9de0()*0.00850894);
}

double NNfunction-NN_3_6::synapse0x1ad8870() {
   return (neuron0x1aba120()*-0.00877527);
}

double NNfunction-NN_3_6::synapse0x1ad88b0() {
   return (neuron0x1aba460()*0.00335621);
}

double NNfunction-NN_3_6::synapse0x1ad88f0() {
   return (neuron0x1aba7a0()*-0.00633033);
}

double NNfunction-NN_3_6::synapse0x1ad8930() {
   return (neuron0x1abaae0()*0.0221087);
}

double NNfunction-NN_3_6::synapse0x1ad8970() {
   return (neuron0x1abae20()*0.281602);
}

double NNfunction-NN_3_6::synapse0x1ad89b0() {
   return (neuron0x1abb160()*0.031584);
}

double NNfunction-NN_3_6::synapse0x1ad89f0() {
   return (neuron0x1abb4a0()*-0.0150713);
}

double NNfunction-NN_3_6::synapse0x1ad8a30() {
   return (neuron0x1abb7e0()*0.0107071);
}

double NNfunction-NN_3_6::synapse0x1ad8a70() {
   return (neuron0x1abbb20()*-0.0280064);
}

double NNfunction-NN_3_6::synapse0x1ad8500() {
   return (neuron0x1abbe60()*0.00985965);
}

double NNfunction-NN_3_6::synapse0x1ad8540() {
   return (neuron0x1abc3c0()*-0.0227884);
}

double NNfunction-NN_3_6::synapse0x1ad8bc0() {
   return (neuron0x1abc5e0()*-0.054662);
}

double NNfunction-NN_3_6::synapse0x1ad8c00() {
   return (neuron0x1abc920()*-0.0336282);
}

double NNfunction-NN_3_6::synapse0x1ad8c40() {
   return (neuron0x1abcc60()*-0.00651462);
}

double NNfunction-NN_3_6::synapse0x1ad8c80() {
   return (neuron0x1abcfa0()*-0.00121476);
}

double NNfunction-NN_3_6::synapse0x1ad8cc0() {
   return (neuron0x1abd2e0()*0.0146825);
}

double NNfunction-NN_3_6::synapse0x1ad8d00() {
   return (neuron0x1abd620()*-4.57178);
}

double NNfunction-NN_3_6::synapse0x1ad9080() {
   return (neuron0x1ab8a60()*0.0273328);
}

double NNfunction-NN_3_6::synapse0x1ad90c0() {
   return (neuron0x1ab8da0()*0.0873589);
}

double NNfunction-NN_3_6::synapse0x1ad9100() {
   return (neuron0x1ab90e0()*-0.460633);
}

double NNfunction-NN_3_6::synapse0x1ad9140() {
   return (neuron0x1ab9420()*-0.0305037);
}

double NNfunction-NN_3_6::synapse0x1ad9180() {
   return (neuron0x1ab9760()*0.0280999);
}

double NNfunction-NN_3_6::synapse0x1ad91c0() {
   return (neuron0x1ab9aa0()*0.0375742);
}

double NNfunction-NN_3_6::synapse0x1ad9200() {
   return (neuron0x1ab9de0()*0.0227006);
}

double NNfunction-NN_3_6::synapse0x1ad9240() {
   return (neuron0x1aba120()*-0.00572806);
}

double NNfunction-NN_3_6::synapse0x1ad9280() {
   return (neuron0x1aba460()*-0.00638239);
}

double NNfunction-NN_3_6::synapse0x1ad92c0() {
   return (neuron0x1aba7a0()*-0.0123308);
}

double NNfunction-NN_3_6::synapse0x1ad9300() {
   return (neuron0x1abaae0()*-0.0144014);
}

double NNfunction-NN_3_6::synapse0x1ad9340() {
   return (neuron0x1abae20()*0.138857);
}

double NNfunction-NN_3_6::synapse0x1ad9380() {
   return (neuron0x1abb160()*-0.0849563);
}

double NNfunction-NN_3_6::synapse0x1ad93c0() {
   return (neuron0x1abb4a0()*-0.0374611);
}

double NNfunction-NN_3_6::synapse0x1ad9400() {
   return (neuron0x1abb7e0()*-0.0332528);
}

double NNfunction-NN_3_6::synapse0x1ad9440() {
   return (neuron0x1abbb20()*0.00834399);
}

double NNfunction-NN_3_6::synapse0x1ad8ed0() {
   return (neuron0x1abbe60()*0.0163357);
}

double NNfunction-NN_3_6::synapse0x1ad8f10() {
   return (neuron0x1abc3c0()*-0.0155151);
}

double NNfunction-NN_3_6::synapse0x1ad9590() {
   return (neuron0x1abc5e0()*-0.0278758);
}

double NNfunction-NN_3_6::synapse0x1ad95d0() {
   return (neuron0x1abc920()*-0.00772676);
}

double NNfunction-NN_3_6::synapse0x1ad9610() {
   return (neuron0x1abcc60()*-0.0319039);
}

double NNfunction-NN_3_6::synapse0x1ad9650() {
   return (neuron0x1abcfa0()*0.00483181);
}

double NNfunction-NN_3_6::synapse0x1ad9690() {
   return (neuron0x1abd2e0()*-0.00943778);
}

double NNfunction-NN_3_6::synapse0x1ad96d0() {
   return (neuron0x1abd620()*0.526575);
}

double NNfunction-NN_3_6::synapse0x1ad9a50() {
   return (neuron0x1ab8a60()*-0.267055);
}

double NNfunction-NN_3_6::synapse0x1ad9a90() {
   return (neuron0x1ab8da0()*0.122803);
}

double NNfunction-NN_3_6::synapse0x1ad9ad0() {
   return (neuron0x1ab90e0()*0.115033);
}

double NNfunction-NN_3_6::synapse0x1ad9b10() {
   return (neuron0x1ab9420()*0.212664);
}

double NNfunction-NN_3_6::synapse0x1ad9b50() {
   return (neuron0x1ab9760()*-0.779997);
}

double NNfunction-NN_3_6::synapse0x1ad9b90() {
   return (neuron0x1ab9aa0()*0.172961);
}

double NNfunction-NN_3_6::synapse0x1ad9bd0() {
   return (neuron0x1ab9de0()*0.544584);
}

double NNfunction-NN_3_6::synapse0x1ad9c10() {
   return (neuron0x1aba120()*0.5132);
}

double NNfunction-NN_3_6::synapse0x1ad9c50() {
   return (neuron0x1aba460()*0.0906102);
}

double NNfunction-NN_3_6::synapse0x1ad9c90() {
   return (neuron0x1aba7a0()*0.177871);
}

double NNfunction-NN_3_6::synapse0x1ad9cd0() {
   return (neuron0x1abaae0()*0.243808);
}

double NNfunction-NN_3_6::synapse0x1ad9d10() {
   return (neuron0x1abae20()*0.480013);
}

double NNfunction-NN_3_6::synapse0x1ad9d50() {
   return (neuron0x1abb160()*0.0633);
}

double NNfunction-NN_3_6::synapse0x1ad9d90() {
   return (neuron0x1abb4a0()*-0.574808);
}

double NNfunction-NN_3_6::synapse0x1ad9dd0() {
   return (neuron0x1abb7e0()*0.491262);
}

double NNfunction-NN_3_6::synapse0x1ad9e10() {
   return (neuron0x1abbb20()*0.0682866);
}

double NNfunction-NN_3_6::synapse0x1ad98a0() {
   return (neuron0x1abbe60()*-0.0488801);
}

double NNfunction-NN_3_6::synapse0x1ad98e0() {
   return (neuron0x1abc3c0()*-0.256601);
}

double NNfunction-NN_3_6::synapse0x1ad9f60() {
   return (neuron0x1abc5e0()*0.416246);
}

double NNfunction-NN_3_6::synapse0x1ad9fa0() {
   return (neuron0x1abc920()*0.0584351);
}

double NNfunction-NN_3_6::synapse0x1ad9fe0() {
   return (neuron0x1abcc60()*0.16889);
}

double NNfunction-NN_3_6::synapse0x1ada020() {
   return (neuron0x1abcfa0()*-0.00946727);
}

double NNfunction-NN_3_6::synapse0x1ada060() {
   return (neuron0x1abd2e0()*0.26076);
}

double NNfunction-NN_3_6::synapse0x1ada0a0() {
   return (neuron0x1abd620()*-0.782544);
}

double NNfunction-NN_3_6::synapse0x1ac2b50() {
   return (neuron0x1ab8a60()*0.0605564);
}

double NNfunction-NN_3_6::synapse0x1ac2b90() {
   return (neuron0x1ab8da0()*-0.0826226);
}

double NNfunction-NN_3_6::synapse0x1ac2bd0() {
   return (neuron0x1ab90e0()*0.146953);
}

double NNfunction-NN_3_6::synapse0x1ac2c10() {
   return (neuron0x1ab9420()*1.59158);
}

double NNfunction-NN_3_6::synapse0x1ac2c50() {
   return (neuron0x1ab9760()*-0.0100866);
}

double NNfunction-NN_3_6::synapse0x1ac2c90() {
   return (neuron0x1ab9aa0()*0.0300039);
}

double NNfunction-NN_3_6::synapse0x1ac2cd0() {
   return (neuron0x1ab9de0()*-0.0157615);
}

double NNfunction-NN_3_6::synapse0x1ac2d10() {
   return (neuron0x1aba120()*0.0434008);
}

double NNfunction-NN_3_6::synapse0x1ada830() {
   return (neuron0x1aba460()*0.0390113);
}

double NNfunction-NN_3_6::synapse0x1ada870() {
   return (neuron0x1aba7a0()*0.0313329);
}

double NNfunction-NN_3_6::synapse0x1ada8b0() {
   return (neuron0x1abaae0()*-0.0619864);
}

double NNfunction-NN_3_6::synapse0x1ada8f0() {
   return (neuron0x1abae20()*-0.991646);
}

double NNfunction-NN_3_6::synapse0x1ada930() {
   return (neuron0x1abb160()*0.115499);
}

double NNfunction-NN_3_6::synapse0x1ada970() {
   return (neuron0x1abb4a0()*0.0115108);
}

double NNfunction-NN_3_6::synapse0x1ada9b0() {
   return (neuron0x1abb7e0()*0.00519349);
}

double NNfunction-NN_3_6::synapse0x1ada9f0() {
   return (neuron0x1abbb20()*-0.0404822);
}

double NNfunction-NN_3_6::synapse0x1ada270() {
   return (neuron0x1abbe60()*-0.0282264);
}

double NNfunction-NN_3_6::synapse0x1ada2b0() {
   return (neuron0x1abc3c0()*-0.145393);
}

double NNfunction-NN_3_6::synapse0x1adab40() {
   return (neuron0x1abc5e0()*0.0634193);
}

double NNfunction-NN_3_6::synapse0x1adab80() {
   return (neuron0x1abc920()*0.0139015);
}

double NNfunction-NN_3_6::synapse0x1adabc0() {
   return (neuron0x1abcc60()*0.0408478);
}

double NNfunction-NN_3_6::synapse0x1adac00() {
   return (neuron0x1abcfa0()*0.0360124);
}

double NNfunction-NN_3_6::synapse0x1adac40() {
   return (neuron0x1abd2e0()*-0.0675834);
}

double NNfunction-NN_3_6::synapse0x1adac80() {
   return (neuron0x1abd620()*0.108804);
}

double NNfunction-NN_3_6::synapse0x1adb000() {
   return (neuron0x1ab8a60()*-0.77689);
}

double NNfunction-NN_3_6::synapse0x1adb040() {
   return (neuron0x1ab8da0()*-0.0252118);
}

double NNfunction-NN_3_6::synapse0x1adb080() {
   return (neuron0x1ab90e0()*-0.515951);
}

double NNfunction-NN_3_6::synapse0x1adb0c0() {
   return (neuron0x1ab9420()*-0.645849);
}

double NNfunction-NN_3_6::synapse0x1adb100() {
   return (neuron0x1ab9760()*-0.232635);
}

double NNfunction-NN_3_6::synapse0x1adb140() {
   return (neuron0x1ab9aa0()*0.176582);
}

double NNfunction-NN_3_6::synapse0x1adb180() {
   return (neuron0x1ab9de0()*0.185128);
}

double NNfunction-NN_3_6::synapse0x1adb1c0() {
   return (neuron0x1aba120()*-0.464025);
}

double NNfunction-NN_3_6::synapse0x1adb200() {
   return (neuron0x1aba460()*-0.227755);
}

double NNfunction-NN_3_6::synapse0x1adb240() {
   return (neuron0x1aba7a0()*-0.560993);
}

double NNfunction-NN_3_6::synapse0x1adb280() {
   return (neuron0x1abaae0()*0.396992);
}

double NNfunction-NN_3_6::synapse0x1adb2c0() {
   return (neuron0x1abae20()*0.42161);
}

double NNfunction-NN_3_6::synapse0x1adb300() {
   return (neuron0x1abb160()*-0.746464);
}

double NNfunction-NN_3_6::synapse0x1adb340() {
   return (neuron0x1abb4a0()*-0.234397);
}

double NNfunction-NN_3_6::synapse0x1adb380() {
   return (neuron0x1abb7e0()*0.259269);
}

double NNfunction-NN_3_6::synapse0x1adb3c0() {
   return (neuron0x1abbb20()*0.153472);
}

double NNfunction-NN_3_6::synapse0x1adae50() {
   return (neuron0x1abbe60()*-0.539479);
}

double NNfunction-NN_3_6::synapse0x1adae90() {
   return (neuron0x1abc3c0()*0.934969);
}

double NNfunction-NN_3_6::synapse0x1adb510() {
   return (neuron0x1abc5e0()*-0.0983796);
}

double NNfunction-NN_3_6::synapse0x1adb550() {
   return (neuron0x1abc920()*-0.370974);
}

double NNfunction-NN_3_6::synapse0x1adb590() {
   return (neuron0x1abcc60()*0.0810663);
}

double NNfunction-NN_3_6::synapse0x1adb5d0() {
   return (neuron0x1abcfa0()*0.310808);
}

double NNfunction-NN_3_6::synapse0x1adb610() {
   return (neuron0x1abd2e0()*0.561348);
}

double NNfunction-NN_3_6::synapse0x1adb650() {
   return (neuron0x1abd620()*-0.539462);
}

double NNfunction-NN_3_6::synapse0x1adb9d0() {
   return (neuron0x1ab8a60()*0.0407415);
}

double NNfunction-NN_3_6::synapse0x1adba10() {
   return (neuron0x1ab8da0()*10.006);
}

double NNfunction-NN_3_6::synapse0x1adba50() {
   return (neuron0x1ab90e0()*-2.20656);
}

double NNfunction-NN_3_6::synapse0x1adba90() {
   return (neuron0x1ab9420()*0.0487228);
}

double NNfunction-NN_3_6::synapse0x1adbad0() {
   return (neuron0x1ab9760()*0.00958159);
}

double NNfunction-NN_3_6::synapse0x1adbb10() {
   return (neuron0x1ab9aa0()*-0.0377816);
}

double NNfunction-NN_3_6::synapse0x1adbb50() {
   return (neuron0x1ab9de0()*0.0280593);
}

double NNfunction-NN_3_6::synapse0x1adbb90() {
   return (neuron0x1aba120()*-0.0427245);
}

double NNfunction-NN_3_6::synapse0x1adbbd0() {
   return (neuron0x1aba460()*-0.0365035);
}

double NNfunction-NN_3_6::synapse0x1adbc10() {
   return (neuron0x1aba7a0()*0.0466245);
}

double NNfunction-NN_3_6::synapse0x1adbc50() {
   return (neuron0x1abaae0()*-0.00207942);
}

double NNfunction-NN_3_6::synapse0x1adbc90() {
   return (neuron0x1abae20()*-0.136045);
}

double NNfunction-NN_3_6::synapse0x1adbcd0() {
   return (neuron0x1abb160()*-0.0515125);
}

double NNfunction-NN_3_6::synapse0x1adbd10() {
   return (neuron0x1abb4a0()*0.017666);
}

double NNfunction-NN_3_6::synapse0x1adbd50() {
   return (neuron0x1abb7e0()*-0.0117307);
}

double NNfunction-NN_3_6::synapse0x1adbd90() {
   return (neuron0x1abbb20()*0.003935);
}

double NNfunction-NN_3_6::synapse0x1adb820() {
   return (neuron0x1abbe60()*-0.06836);
}

double NNfunction-NN_3_6::synapse0x1adb860() {
   return (neuron0x1abc3c0()*0.0938321);
}

double NNfunction-NN_3_6::synapse0x1acc390() {
   return (neuron0x1abc5e0()*0.00888576);
}

double NNfunction-NN_3_6::synapse0x1acc3d0() {
   return (neuron0x1abc920()*0.0528327);
}

double NNfunction-NN_3_6::synapse0x1acc410() {
   return (neuron0x1abcc60()*-0.0136232);
}

double NNfunction-NN_3_6::synapse0x1acc450() {
   return (neuron0x1abcfa0()*-0.00921763);
}

double NNfunction-NN_3_6::synapse0x1acc490() {
   return (neuron0x1abd2e0()*-0.0150378);
}

double NNfunction-NN_3_6::synapse0x1acc4d0() {
   return (neuron0x1abd620()*-0.0404938);
}

double NNfunction-NN_3_6::synapse0x1acc850() {
   return (neuron0x1ab8a60()*0.00211384);
}

double NNfunction-NN_3_6::synapse0x1acc890() {
   return (neuron0x1ab8da0()*0.000595212);
}

double NNfunction-NN_3_6::synapse0x1acc8d0() {
   return (neuron0x1ab90e0()*0.177456);
}

double NNfunction-NN_3_6::synapse0x1acc910() {
   return (neuron0x1ab9420()*3.40218);
}

double NNfunction-NN_3_6::synapse0x1acc950() {
   return (neuron0x1ab9760()*0.0255617);
}

double NNfunction-NN_3_6::synapse0x1acc990() {
   return (neuron0x1ab9aa0()*0.00240997);
}

double NNfunction-NN_3_6::synapse0x1acc9d0() {
   return (neuron0x1ab9de0()*0.00279221);
}

double NNfunction-NN_3_6::synapse0x1acca10() {
   return (neuron0x1aba120()*0.0466636);
}

double NNfunction-NN_3_6::synapse0x1acca50() {
   return (neuron0x1aba460()*0.0236332);
}

double NNfunction-NN_3_6::synapse0x1acca90() {
   return (neuron0x1aba7a0()*-0.00505267);
}

double NNfunction-NN_3_6::synapse0x1accad0() {
   return (neuron0x1abaae0()*0.00336887);
}

double NNfunction-NN_3_6::synapse0x1accb10() {
   return (neuron0x1abae20()*0.480867);
}

double NNfunction-NN_3_6::synapse0x1accb50() {
   return (neuron0x1abb160()*0.0684735);
}

double NNfunction-NN_3_6::synapse0x1accb90() {
   return (neuron0x1abb4a0()*0.0389445);
}

double NNfunction-NN_3_6::synapse0x1accbd0() {
   return (neuron0x1abb7e0()*-0.031597);
}

double NNfunction-NN_3_6::synapse0x1accc10() {
   return (neuron0x1abbb20()*0.00649541);
}

double NNfunction-NN_3_6::synapse0x1acc6a0() {
   return (neuron0x1abbe60()*-0.0324746);
}

double NNfunction-NN_3_6::synapse0x1acc6e0() {
   return (neuron0x1abc3c0()*-0.0400914);
}

double NNfunction-NN_3_6::synapse0x1accd60() {
   return (neuron0x1abc5e0()*0.0706808);
}

double NNfunction-NN_3_6::synapse0x1accda0() {
   return (neuron0x1abc920()*-0.0305927);
}

double NNfunction-NN_3_6::synapse0x1accde0() {
   return (neuron0x1abcc60()*-0.0606769);
}

double NNfunction-NN_3_6::synapse0x1acce20() {
   return (neuron0x1abcfa0()*0.0198894);
}

double NNfunction-NN_3_6::synapse0x1acce60() {
   return (neuron0x1abd2e0()*-0.0397323);
}

double NNfunction-NN_3_6::synapse0x1accea0() {
   return (neuron0x1abd620()*-0.0505763);
}

double NNfunction-NN_3_6::synapse0x1acd220() {
   return (neuron0x1ab8a60()*0.199128);
}

double NNfunction-NN_3_6::synapse0x1acd260() {
   return (neuron0x1ab8da0()*-0.22767);
}

double NNfunction-NN_3_6::synapse0x1acd2a0() {
   return (neuron0x1ab90e0()*-1.29231);
}

double NNfunction-NN_3_6::synapse0x1acd2e0() {
   return (neuron0x1ab9420()*0.311495);
}

double NNfunction-NN_3_6::synapse0x1acd320() {
   return (neuron0x1ab9760()*0.18953);
}

double NNfunction-NN_3_6::synapse0x1acd360() {
   return (neuron0x1ab9aa0()*-0.426014);
}

double NNfunction-NN_3_6::synapse0x1acd3a0() {
   return (neuron0x1ab9de0()*0.267537);
}

double NNfunction-NN_3_6::synapse0x1acd3e0() {
   return (neuron0x1aba120()*0.00713171);
}

double NNfunction-NN_3_6::synapse0x1acd420() {
   return (neuron0x1aba460()*-0.836654);
}

double NNfunction-NN_3_6::synapse0x1acd460() {
   return (neuron0x1aba7a0()*-0.891139);
}

double NNfunction-NN_3_6::synapse0x1acd4a0() {
   return (neuron0x1abaae0()*0.0030894);
}

double NNfunction-NN_3_6::synapse0x1acd4e0() {
   return (neuron0x1abae20()*0.306913);
}

double NNfunction-NN_3_6::synapse0x1acd520() {
   return (neuron0x1abb160()*-0.356156);
}

double NNfunction-NN_3_6::synapse0x1acd560() {
   return (neuron0x1abb4a0()*0.246736);
}

double NNfunction-NN_3_6::synapse0x1acd5a0() {
   return (neuron0x1abb7e0()*-0.0624068);
}

double NNfunction-NN_3_6::synapse0x1acd5e0() {
   return (neuron0x1abbb20()*-0.0921518);
}

double NNfunction-NN_3_6::synapse0x1acd070() {
   return (neuron0x1abbe60()*0.169167);
}

double NNfunction-NN_3_6::synapse0x1acd0b0() {
   return (neuron0x1abc3c0()*-0.0723681);
}

double NNfunction-NN_3_6::synapse0x1acd730() {
   return (neuron0x1abc5e0()*-0.303204);
}

double NNfunction-NN_3_6::synapse0x1acd770() {
   return (neuron0x1abc920()*0.345394);
}

double NNfunction-NN_3_6::synapse0x1acd7b0() {
   return (neuron0x1abcc60()*-0.370829);
}

double NNfunction-NN_3_6::synapse0x1acd7f0() {
   return (neuron0x1abcfa0()*-0.127551);
}

double NNfunction-NN_3_6::synapse0x1acd830() {
   return (neuron0x1abd2e0()*-0.876485);
}

double NNfunction-NN_3_6::synapse0x1acd870() {
   return (neuron0x1abd620()*0.469852);
}

double NNfunction-NN_3_6::synapse0x1acdbf0() {
   return (neuron0x1ab8a60()*0.0462774);
}

double NNfunction-NN_3_6::synapse0x1acdc30() {
   return (neuron0x1ab8da0()*0.108145);
}

double NNfunction-NN_3_6::synapse0x1acdc70() {
   return (neuron0x1ab90e0()*1.33542);
}

double NNfunction-NN_3_6::synapse0x1acdcb0() {
   return (neuron0x1ab9420()*-0.0700031);
}

double NNfunction-NN_3_6::synapse0x1acdcf0() {
   return (neuron0x1ab9760()*0.0242746);
}

double NNfunction-NN_3_6::synapse0x1acdd30() {
   return (neuron0x1ab9aa0()*0.0820413);
}

double NNfunction-NN_3_6::synapse0x1acdd70() {
   return (neuron0x1ab9de0()*-0.0183372);
}

double NNfunction-NN_3_6::synapse0x1acddb0() {
   return (neuron0x1aba120()*-0.00141001);
}

double NNfunction-NN_3_6::synapse0x1acddf0() {
   return (neuron0x1aba460()*0.0518125);
}

double NNfunction-NN_3_6::synapse0x1acde30() {
   return (neuron0x1aba7a0()*0.0177507);
}

double NNfunction-NN_3_6::synapse0x1acde70() {
   return (neuron0x1abaae0()*-0.100782);
}

double NNfunction-NN_3_6::synapse0x1acdeb0() {
   return (neuron0x1abae20()*0.011574);
}

double NNfunction-NN_3_6::synapse0x1acdef0() {
   return (neuron0x1abb160()*0.0282967);
}

double NNfunction-NN_3_6::synapse0x1acdf30() {
   return (neuron0x1abb4a0()*0.0156295);
}

double NNfunction-NN_3_6::synapse0x1acdf70() {
   return (neuron0x1abb7e0()*-0.0186404);
}

double NNfunction-NN_3_6::synapse0x1acdfb0() {
   return (neuron0x1abbb20()*-0.00355725);
}

double NNfunction-NN_3_6::synapse0x1acda40() {
   return (neuron0x1abbe60()*0.0397229);
}

double NNfunction-NN_3_6::synapse0x1acda80() {
   return (neuron0x1abc3c0()*-0.0501031);
}

double NNfunction-NN_3_6::synapse0x1ace100() {
   return (neuron0x1abc5e0()*-0.0357085);
}

double NNfunction-NN_3_6::synapse0x1ace140() {
   return (neuron0x1abc920()*-0.0693242);
}

double NNfunction-NN_3_6::synapse0x1ace180() {
   return (neuron0x1abcc60()*-0.0674377);
}

double NNfunction-NN_3_6::synapse0x1ace1c0() {
   return (neuron0x1abcfa0()*0.01865);
}

double NNfunction-NN_3_6::synapse0x1ace200() {
   return (neuron0x1abd2e0()*-0.032344);
}

double NNfunction-NN_3_6::synapse0x1ace240() {
   return (neuron0x1abd620()*-0.463134);
}

double NNfunction-NN_3_6::synapse0x1ae0110() {
   return (neuron0x1ab8a60()*-0.0230906);
}

double NNfunction-NN_3_6::synapse0x1ae0150() {
   return (neuron0x1ab8da0()*0.0261512);
}

double NNfunction-NN_3_6::synapse0x1ae0190() {
   return (neuron0x1ab90e0()*-4.00466);
}

double NNfunction-NN_3_6::synapse0x1ae01d0() {
   return (neuron0x1ab9420()*-0.00164467);
}

double NNfunction-NN_3_6::synapse0x1ae0210() {
   return (neuron0x1ab9760()*-0.0470635);
}

double NNfunction-NN_3_6::synapse0x1ae0250() {
   return (neuron0x1ab9aa0()*-0.0408091);
}

double NNfunction-NN_3_6::synapse0x1ae0290() {
   return (neuron0x1ab9de0()*-0.028057);
}

double NNfunction-NN_3_6::synapse0x1ae02d0() {
   return (neuron0x1aba120()*-0.00942887);
}

double NNfunction-NN_3_6::synapse0x1ae0310() {
   return (neuron0x1aba460()*0.0311193);
}

double NNfunction-NN_3_6::synapse0x1ae0350() {
   return (neuron0x1aba7a0()*-0.0297876);
}

double NNfunction-NN_3_6::synapse0x1ae0390() {
   return (neuron0x1abaae0()*0.0148266);
}

double NNfunction-NN_3_6::synapse0x1ae03d0() {
   return (neuron0x1abae20()*2.65834);
}

double NNfunction-NN_3_6::synapse0x1ae0410() {
   return (neuron0x1abb160()*-0.0347153);
}

double NNfunction-NN_3_6::synapse0x1ae0450() {
   return (neuron0x1abb4a0()*0.0210321);
}

double NNfunction-NN_3_6::synapse0x1ae0490() {
   return (neuron0x1abb7e0()*-0.00100575);
}

double NNfunction-NN_3_6::synapse0x1ae04d0() {
   return (neuron0x1abbb20()*0.0769125);
}

double NNfunction-NN_3_6::synapse0x1ace280() {
   return (neuron0x1abbe60()*-0.00827736);
}

double NNfunction-NN_3_6::synapse0x1ace2c0() {
   return (neuron0x1abc3c0()*0.0564644);
}

double NNfunction-NN_3_6::synapse0x1ae0620() {
   return (neuron0x1abc5e0()*0.04543);
}

double NNfunction-NN_3_6::synapse0x1ae0660() {
   return (neuron0x1abc920()*0.0096797);
}

double NNfunction-NN_3_6::synapse0x1ae06a0() {
   return (neuron0x1abcc60()*0.0486387);
}

double NNfunction-NN_3_6::synapse0x1ae06e0() {
   return (neuron0x1abcfa0()*0.0360813);
}

double NNfunction-NN_3_6::synapse0x1ae0720() {
   return (neuron0x1abd2e0()*0.00726681);
}

double NNfunction-NN_3_6::synapse0x1ae0760() {
   return (neuron0x1abd620()*-3.52317);
}

double NNfunction-NN_3_6::synapse0x1ae0ae0() {
   return (neuron0x1ab8a60()*-0.0328092);
}

double NNfunction-NN_3_6::synapse0x1ae0b20() {
   return (neuron0x1ab8da0()*-0.0488633);
}

double NNfunction-NN_3_6::synapse0x1ae0b60() {
   return (neuron0x1ab90e0()*-0.41717);
}

double NNfunction-NN_3_6::synapse0x1ae0ba0() {
   return (neuron0x1ab9420()*-0.248299);
}

double NNfunction-NN_3_6::synapse0x1ae0be0() {
   return (neuron0x1ab9760()*-0.017018);
}

double NNfunction-NN_3_6::synapse0x1ae0c20() {
   return (neuron0x1ab9aa0()*-0.0517461);
}

double NNfunction-NN_3_6::synapse0x1ae0c60() {
   return (neuron0x1ab9de0()*-0.038345);
}

double NNfunction-NN_3_6::synapse0x1ae0ca0() {
   return (neuron0x1aba120()*-0.0427887);
}

double NNfunction-NN_3_6::synapse0x1ae0ce0() {
   return (neuron0x1aba460()*0.0499223);
}

double NNfunction-NN_3_6::synapse0x1ae0d20() {
   return (neuron0x1aba7a0()*0.019172);
}

double NNfunction-NN_3_6::synapse0x1ae0d60() {
   return (neuron0x1abaae0()*-0.0846905);
}

double NNfunction-NN_3_6::synapse0x1ae0da0() {
   return (neuron0x1abae20()*0.00520524);
}

double NNfunction-NN_3_6::synapse0x1ae0de0() {
   return (neuron0x1abb160()*0.00190869);
}

double NNfunction-NN_3_6::synapse0x1ae0e20() {
   return (neuron0x1abb4a0()*-0.0171022);
}

double NNfunction-NN_3_6::synapse0x1ae0e60() {
   return (neuron0x1abb7e0()*0.0245061);
}

double NNfunction-NN_3_6::synapse0x1ae0ea0() {
   return (neuron0x1abbb20()*0.0240447);
}

double NNfunction-NN_3_6::synapse0x1ae0930() {
   return (neuron0x1abbe60()*-0.061511);
}

double NNfunction-NN_3_6::synapse0x1ae0970() {
   return (neuron0x1abc3c0()*-0.0137464);
}

double NNfunction-NN_3_6::synapse0x1ae0ff0() {
   return (neuron0x1abc5e0()*0.0686282);
}

double NNfunction-NN_3_6::synapse0x1ae1030() {
   return (neuron0x1abc920()*-0.0266034);
}

double NNfunction-NN_3_6::synapse0x1ae1070() {
   return (neuron0x1abcc60()*-0.0445853);
}

double NNfunction-NN_3_6::synapse0x1ae10b0() {
   return (neuron0x1abcfa0()*0.00941487);
}

double NNfunction-NN_3_6::synapse0x1ae10f0() {
   return (neuron0x1abd2e0()*0.00470544);
}

double NNfunction-NN_3_6::synapse0x1ae1130() {
   return (neuron0x1abd620()*0.453882);
}

double NNfunction-NN_3_6::synapse0x1ae14b0() {
   return (neuron0x1ab8a60()*-0.0676869);
}

double NNfunction-NN_3_6::synapse0x1ae14f0() {
   return (neuron0x1ab8da0()*-0.00796351);
}

double NNfunction-NN_3_6::synapse0x1ae1530() {
   return (neuron0x1ab90e0()*2.79497);
}

double NNfunction-NN_3_6::synapse0x1ae1570() {
   return (neuron0x1ab9420()*-0.297497);
}

double NNfunction-NN_3_6::synapse0x1ae15b0() {
   return (neuron0x1ab9760()*0.00425895);
}

double NNfunction-NN_3_6::synapse0x1ae15f0() {
   return (neuron0x1ab9aa0()*0.0320227);
}

double NNfunction-NN_3_6::synapse0x1ae1630() {
   return (neuron0x1ab9de0()*0.0210019);
}

double NNfunction-NN_3_6::synapse0x1ae1670() {
   return (neuron0x1aba120()*0.0930747);
}

double NNfunction-NN_3_6::synapse0x1ae16b0() {
   return (neuron0x1aba460()*-0.0471292);
}

double NNfunction-NN_3_6::synapse0x1ae16f0() {
   return (neuron0x1aba7a0()*-0.047604);
}

double NNfunction-NN_3_6::synapse0x1ae1730() {
   return (neuron0x1abaae0()*-0.0399539);
}

double NNfunction-NN_3_6::synapse0x1ae1770() {
   return (neuron0x1abae20()*-1.46834);
}

double NNfunction-NN_3_6::synapse0x1ae17b0() {
   return (neuron0x1abb160()*-1.58826);
}

double NNfunction-NN_3_6::synapse0x1ae17f0() {
   return (neuron0x1abb4a0()*0.0451035);
}

double NNfunction-NN_3_6::synapse0x1ae1830() {
   return (neuron0x1abb7e0()*-0.762241);
}

double NNfunction-NN_3_6::synapse0x1ae1870() {
   return (neuron0x1abbb20()*-0.820718);
}

double NNfunction-NN_3_6::synapse0x1ae1300() {
   return (neuron0x1abbe60()*-0.0352169);
}

double NNfunction-NN_3_6::synapse0x1ae1340() {
   return (neuron0x1abc3c0()*-0.950295);
}

double NNfunction-NN_3_6::synapse0x1ae19c0() {
   return (neuron0x1abc5e0()*-0.993542);
}

double NNfunction-NN_3_6::synapse0x1ae1a00() {
   return (neuron0x1abc920()*-0.01876);
}

double NNfunction-NN_3_6::synapse0x1ae1a40() {
   return (neuron0x1abcc60()*-0.0186223);
}

double NNfunction-NN_3_6::synapse0x1ae1a80() {
   return (neuron0x1abcfa0()*0.00413202);
}

double NNfunction-NN_3_6::synapse0x1ae1ac0() {
   return (neuron0x1abd2e0()*0.0187593);
}

double NNfunction-NN_3_6::synapse0x1ae1b00() {
   return (neuron0x1abd620()*0.0546469);
}

double NNfunction-NN_3_6::synapse0x1ae1e80() {
   return (neuron0x1ab8a60()*0.0247577);
}

double NNfunction-NN_3_6::synapse0x1ae1ec0() {
   return (neuron0x1ab8da0()*0.0723252);
}

double NNfunction-NN_3_6::synapse0x1ae1f00() {
   return (neuron0x1ab90e0()*-0.599479);
}

double NNfunction-NN_3_6::synapse0x1ae1f40() {
   return (neuron0x1ab9420()*0.0381003);
}

double NNfunction-NN_3_6::synapse0x1ae1f80() {
   return (neuron0x1ab9760()*-0.010709);
}

double NNfunction-NN_3_6::synapse0x1ae1fc0() {
   return (neuron0x1ab9aa0()*-0.0193702);
}

double NNfunction-NN_3_6::synapse0x1ae2000() {
   return (neuron0x1ab9de0()*0.0123817);
}

double NNfunction-NN_3_6::synapse0x1ae2040() {
   return (neuron0x1aba120()*0.0233517);
}

double NNfunction-NN_3_6::synapse0x1ae2080() {
   return (neuron0x1aba460()*-0.0314395);
}

double NNfunction-NN_3_6::synapse0x1ae20c0() {
   return (neuron0x1aba7a0()*0.0104615);
}

double NNfunction-NN_3_6::synapse0x1ae2100() {
   return (neuron0x1abaae0()*0.0346058);
}

double NNfunction-NN_3_6::synapse0x1ae2140() {
   return (neuron0x1abae20()*-0.0692763);
}

double NNfunction-NN_3_6::synapse0x1ae2180() {
   return (neuron0x1abb160()*-0.115076);
}

double NNfunction-NN_3_6::synapse0x1ae21c0() {
   return (neuron0x1abb4a0()*-0.00227475);
}

double NNfunction-NN_3_6::synapse0x1ae2200() {
   return (neuron0x1abb7e0()*-0.0405921);
}

double NNfunction-NN_3_6::synapse0x1ae2240() {
   return (neuron0x1abbb20()*-0.0662253);
}

double NNfunction-NN_3_6::synapse0x1ae1cd0() {
   return (neuron0x1abbe60()*-0.0033343);
}

double NNfunction-NN_3_6::synapse0x1ae1d10() {
   return (neuron0x1abc3c0()*-0.0334665);
}

double NNfunction-NN_3_6::synapse0x1ae2390() {
   return (neuron0x1abc5e0()*-0.0499997);
}

double NNfunction-NN_3_6::synapse0x1ae23d0() {
   return (neuron0x1abc920()*0.0135399);
}

double NNfunction-NN_3_6::synapse0x1ae2410() {
   return (neuron0x1abcc60()*0.00881169);
}

double NNfunction-NN_3_6::synapse0x1ae2450() {
   return (neuron0x1abcfa0()*-0.0226961);
}

double NNfunction-NN_3_6::synapse0x1ae2490() {
   return (neuron0x1abd2e0()*0.00864113);
}

double NNfunction-NN_3_6::synapse0x1ae24d0() {
   return (neuron0x1abd620()*0.530732);
}

double NNfunction-NN_3_6::synapse0x1abea70() {
   return (neuron0x1abdac0()*2.01346);
}

double NNfunction-NN_3_6::synapse0x1abeab0() {
   return (neuron0x1abe3d0()*-1.37737);
}

double NNfunction-NN_3_6::synapse0x1abff80() {
   return (neuron0x1abeeb0()*2.06966);
}

double NNfunction-NN_3_6::synapse0x1abffc0() {
   return (neuron0x1878740()*-0.217384);
}

double NNfunction-NN_3_6::synapse0x1ac0950() {
   return (neuron0x1abfcd0()*-0.367604);
}

double NNfunction-NN_3_6::synapse0x1ac0990() {
   return (neuron0x1ac06a0()*-0.402329);
}

double NNfunction-NN_3_6::synapse0x1ac1720() {
   return (neuron0x1ac1470()*-0.18081);
}

double NNfunction-NN_3_6::synapse0x1ac1760() {
   return (neuron0x1ac1e40()*0.636845);
}

double NNfunction-NN_3_6::synapse0x1ac20f0() {
   return (neuron0x1ac2810()*1.35117);
}

double NNfunction-NN_3_6::synapse0x1ac2130() {
   return (neuron0x1ac32f0()*0.673384);
}

double NNfunction-NN_3_6::synapse0x1ac2ac0() {
   return (neuron0x1ac3cc0()*1.16885);
}

double NNfunction-NN_3_6::synapse0x1ac2b00() {
   return (neuron0x1ac0da0()*0.898306);
}

double NNfunction-NN_3_6::synapse0x1ac35a0() {
   return (neuron0x1ac5870()*-0.243387);
}

double NNfunction-NN_3_6::synapse0x1ac35e0() {
   return (neuron0x1ac6240()*0.360302);
}

double NNfunction-NN_3_6::synapse0x1ac3f70() {
   return (neuron0x1ac6c10()*0.381729);
}

double NNfunction-NN_3_6::synapse0x1ac3fb0() {
   return (neuron0x1ac75e0()*1.08119);
}

double NNfunction-NN_3_6::synapse0x1ac1050() {
   return (neuron0x1ac93f0()*-0.327493);
}

double NNfunction-NN_3_6::synapse0x1ac1090() {
   return (neuron0x1ac96d0()*0.725258);
}

double NNfunction-NN_3_6::synapse0x1ac5b20() {
   return (neuron0x1aca0a0()*-0.35063);
}

double NNfunction-NN_3_6::synapse0x1ac5b60() {
   return (neuron0x1acaa70()*-0.332368);
}

double NNfunction-NN_3_6::synapse0x1ac64f0() {
   return (neuron0x1acb440()*0.949719);
}

double NNfunction-NN_3_6::synapse0x1ac6530() {
   return (neuron0x1acbe10()*-0.138884);
}

double NNfunction-NN_3_6::synapse0x1ac6ec0() {
   return (neuron0x1ac4960()*0.386312);
}

double NNfunction-NN_3_6::synapse0x1ac6f00() {
   return (neuron0x1ac5330()*1.02014);
}

double NNfunction-NN_3_6::synapse0x1ac7890() {
   return (neuron0x1aceba0()*-0.446273);
}

double NNfunction-NN_3_6::synapse0x1ac78d0() {
   return (neuron0x1acf570()*-0.265111);
}

double NNfunction-NN_3_6::synapse0x1abba00() {
   return (neuron0x1acff40()*0.185556);
}

double NNfunction-NN_3_6::synapse0x1abba40() {
   return (neuron0x1ad0910()*0.271848);
}

double NNfunction-NN_3_6::synapse0x1ac9980() {
   return (neuron0x1ad12e0()*0.645223);
}

double NNfunction-NN_3_6::synapse0x1ac99c0() {
   return (neuron0x1ad1cb0()*1.95409);
}

double NNfunction-NN_3_6::synapse0x1aca350() {
   return (neuron0x1ad2680()*-1.04885);
}

double NNfunction-NN_3_6::synapse0x1aca390() {
   return (neuron0x1ad3050()*-0.743331);
}

double NNfunction-NN_3_6::synapse0x1acad20() {
   return (neuron0x1ac90e0()*0.788011);
}

double NNfunction-NN_3_6::synapse0x1acad60() {
   return (neuron0x1ad5c30()*0.800389);
}

double NNfunction-NN_3_6::synapse0x1acb6f0() {
   return (neuron0x1ad6600()*-0.252119);
}

double NNfunction-NN_3_6::synapse0x1acb730() {
   return (neuron0x1ad6fd0()*0.916031);
}

double NNfunction-NN_3_6::synapse0x1acc0c0() {
   return (neuron0x1ad79a0()*-0.328239);
}

double NNfunction-NN_3_6::synapse0x1acc100() {
   return (neuron0x1ad8370()*-1.0399);
}

double NNfunction-NN_3_6::synapse0x1ac4c10() {
   return (neuron0x1ad8d40()*-0.817505);
}

double NNfunction-NN_3_6::synapse0x1ac4c50() {
   return (neuron0x1ad9710()*-0.25088);
}

double NNfunction-NN_3_6::synapse0x1ace4c0() {
   return (neuron0x1ada0e0()*-1.36898);
}

double NNfunction-NN_3_6::synapse0x1ace500() {
   return (neuron0x1adacc0()*-0.347075);
}

double NNfunction-NN_3_6::synapse0x1acee50() {
   return (neuron0x1adb690()*0.108707);
}

double NNfunction-NN_3_6::synapse0x1acee90() {
   return (neuron0x1acc510()*-2.12971);
}

double NNfunction-NN_3_6::synapse0x1acf820() {
   return (neuron0x1accee0()*0.197575);
}

double NNfunction-NN_3_6::synapse0x1acf860() {
   return (neuron0x1acd8b0()*0.528873);
}

double NNfunction-NN_3_6::synapse0x1ad01f0() {
   return (neuron0x1adfef0()*-0.0685651);
}

double NNfunction-NN_3_6::synapse0x1ad0230() {
   return (neuron0x1ae07a0()*-0.580811);
}

double NNfunction-NN_3_6::synapse0x1ad0bc0() {
   return (neuron0x1ae1170()*0.223344);
}

double NNfunction-NN_3_6::synapse0x1ad0c00() {
   return (neuron0x1ae1b40()*-1.28661);
}

double NNfunction-NN_3_6::synapse0x1ad3300() {
   return (neuron0x1abdac0()*-0.203981);
}

double NNfunction-NN_3_6::synapse0x1ad3340() {
   return (neuron0x1abe3d0()*0.728303);
}

double NNfunction-NN_3_6::synapse0x1ac88c0() {
   return (neuron0x1abeeb0()*-0.730709);
}

double NNfunction-NN_3_6::synapse0x1ac8900() {
   return (neuron0x1878740()*-0.0672206);
}

double NNfunction-NN_3_6::synapse0x1ad5ee0() {
   return (neuron0x1abfcd0()*-0.0238006);
}

double NNfunction-NN_3_6::synapse0x1ad5f20() {
   return (neuron0x1ac06a0()*0.4004);
}

double NNfunction-NN_3_6::synapse0x1ad68b0() {
   return (neuron0x1ac1470()*-0.199597);
}

double NNfunction-NN_3_6::synapse0x1ad68f0() {
   return (neuron0x1ac1e40()*0.100481);
}

double NNfunction-NN_3_6::synapse0x1ad7280() {
   return (neuron0x1ac2810()*-0.578613);
}

double NNfunction-NN_3_6::synapse0x1ad72c0() {
   return (neuron0x1ac32f0()*-0.153037);
}

double NNfunction-NN_3_6::synapse0x1ad7c50() {
   return (neuron0x1ac3cc0()*-0.517222);
}

double NNfunction-NN_3_6::synapse0x1ad7c90() {
   return (neuron0x1ac0da0()*-0.742401);
}

double NNfunction-NN_3_6::synapse0x1ad8620() {
   return (neuron0x1ac5870()*-0.0796382);
}

double NNfunction-NN_3_6::synapse0x1ad8660() {
   return (neuron0x1ac6240()*0.0941173);
}

double NNfunction-NN_3_6::synapse0x1ad8ff0() {
   return (neuron0x1ac6c10()*-0.0192202);
}

double NNfunction-NN_3_6::synapse0x1ad9030() {
   return (neuron0x1ac75e0()*0.954188);
}

double NNfunction-NN_3_6::synapse0x1ad99c0() {
   return (neuron0x1ac93f0()*-0.0877959);
}

double NNfunction-NN_3_6::synapse0x1ad9a00() {
   return (neuron0x1ac96d0()*0.913495);
}

double NNfunction-NN_3_6::synapse0x1ada390() {
   return (neuron0x1aca0a0()*-0.121825);
}

double NNfunction-NN_3_6::synapse0x1ada3d0() {
   return (neuron0x1acaa70()*0.00474892);
}

double NNfunction-NN_3_6::synapse0x1adaf70() {
   return (neuron0x1acb440()*2.51542);
}

double NNfunction-NN_3_6::synapse0x1adafb0() {
   return (neuron0x1acbe10()*-0.157168);
}

double NNfunction-NN_3_6::synapse0x1adb940() {
   return (neuron0x1ac4960()*-0.740026);
}

double NNfunction-NN_3_6::synapse0x1adb980() {
   return (neuron0x1ac5330()*0.157029);
}

double NNfunction-NN_3_6::synapse0x1acc7c0() {
   return (neuron0x1aceba0()*-0.0352704);
}

double NNfunction-NN_3_6::synapse0x1acc800() {
   return (neuron0x1acf570()*-0.0470025);
}

double NNfunction-NN_3_6::synapse0x1acd190() {
   return (neuron0x1acff40()*0.0631908);
}

double NNfunction-NN_3_6::synapse0x1acd1d0() {
   return (neuron0x1ad0910()*0.408293);
}

double NNfunction-NN_3_6::synapse0x1acdb60() {
   return (neuron0x1ad12e0()*-0.857098);
}

double NNfunction-NN_3_6::synapse0x1acdba0() {
   return (neuron0x1ad1cb0()*1.45691);
}

double NNfunction-NN_3_6::synapse0x1ae0080() {
   return (neuron0x1ad2680()*1.07017);
}

double NNfunction-NN_3_6::synapse0x1ae00c0() {
   return (neuron0x1ad3050()*1.21104);
}

double NNfunction-NN_3_6::synapse0x1ae0a50() {
   return (neuron0x1ac90e0()*3.27326);
}

double NNfunction-NN_3_6::synapse0x1ae0a90() {
   return (neuron0x1ad5c30()*-0.120214);
}

double NNfunction-NN_3_6::synapse0x1ae1420() {
   return (neuron0x1ad6600()*-0.0740855);
}

double NNfunction-NN_3_6::synapse0x1ae1460() {
   return (neuron0x1ad6fd0()*-0.661635);
}

double NNfunction-NN_3_6::synapse0x1ae1df0() {
   return (neuron0x1ad79a0()*-0.0619966);
}

double NNfunction-NN_3_6::synapse0x1ae1e30() {
   return (neuron0x1ad8370()*-1.20802);
}

double NNfunction-NN_3_6::synapse0x1abdce0() {
   return (neuron0x1ad8d40()*-0.680888);
}

double NNfunction-NN_3_6::synapse0x1abdd20() {
   return (neuron0x1ad9710()*-0.140316);
}

double NNfunction-NN_3_6::synapse0x1ad1590() {
   return (neuron0x1ada0e0()*0.416209);
}

double NNfunction-NN_3_6::synapse0x1ad15d0() {
   return (neuron0x1adacc0()*-0.0679113);
}

double NNfunction-NN_3_6::synapse0x1ae2510() {
   return (neuron0x1adb690()*-0.230711);
}

double NNfunction-NN_3_6::synapse0x1ae2550() {
   return (neuron0x1acc510()*0.801059);
}

double NNfunction-NN_3_6::synapse0x1ae2590() {
   return (neuron0x1accee0()*0.134196);
}

double NNfunction-NN_3_6::synapse0x1ae25d0() {
   return (neuron0x1acd8b0()*1.2782);
}

double NNfunction-NN_3_6::synapse0x1ae9480() {
   return (neuron0x1adfef0()*-0.444675);
}

double NNfunction-NN_3_6::synapse0x1ae94c0() {
   return (neuron0x1ae07a0()*-1.09862);
}

double NNfunction-NN_3_6::synapse0x1ae9500() {
   return (neuron0x1ae1170()*0.00233873);
}

double NNfunction-NN_3_6::synapse0x1ae9540() {
   return (neuron0x1ae1b40()*-1.284);
}

double NNfunction-NN_3_6::synapse0x1ae98c0() {
   return (neuron0x1abdac0()*1.58901);
}

double NNfunction-NN_3_6::synapse0x1ae9900() {
   return (neuron0x1abe3d0()*-0.416191);
}

double NNfunction-NN_3_6::synapse0x1ae9940() {
   return (neuron0x1abeeb0()*0.204541);
}

double NNfunction-NN_3_6::synapse0x1ae9980() {
   return (neuron0x1878740()*0.570949);
}

double NNfunction-NN_3_6::synapse0x1ae99c0() {
   return (neuron0x1abfcd0()*0.794367);
}

double NNfunction-NN_3_6::synapse0x1ae9a00() {
   return (neuron0x1ac06a0()*-0.250548);
}

double NNfunction-NN_3_6::synapse0x1ae9a40() {
   return (neuron0x1ac1470()*0.689346);
}

double NNfunction-NN_3_6::synapse0x1ae9a80() {
   return (neuron0x1ac1e40()*0.612594);
}

double NNfunction-NN_3_6::synapse0x1ae9ac0() {
   return (neuron0x1ac2810()*-1.05705);
}

double NNfunction-NN_3_6::synapse0x1ae9b00() {
   return (neuron0x1ac32f0()*-0.47075);
}

double NNfunction-NN_3_6::synapse0x1ae9b40() {
   return (neuron0x1ac3cc0()*-5.11364);
}

double NNfunction-NN_3_6::synapse0x1ae9b80() {
   return (neuron0x1ac0da0()*1.03278);
}

double NNfunction-NN_3_6::synapse0x1ae9bc0() {
   return (neuron0x1ac5870()*0.624829);
}

double NNfunction-NN_3_6::synapse0x1ae9c00() {
   return (neuron0x1ac6240()*-0.665985);
}

double NNfunction-NN_3_6::synapse0x1ae9c40() {
   return (neuron0x1ac6c10()*-0.665199);
}

double NNfunction-NN_3_6::synapse0x1ae9c80() {
   return (neuron0x1ac75e0()*1.68641);
}

double NNfunction-NN_3_6::synapse0x1ae9710() {
   return (neuron0x1ac93f0()*0.7173);
}

double NNfunction-NN_3_6::synapse0x1ae9750() {
   return (neuron0x1ac96d0()*-0.365087);
}

double NNfunction-NN_3_6::synapse0x1ae9dd0() {
   return (neuron0x1aca0a0()*0.737438);
}

double NNfunction-NN_3_6::synapse0x1ae9e10() {
   return (neuron0x1acaa70()*0.648214);
}

double NNfunction-NN_3_6::synapse0x1ae9e50() {
   return (neuron0x1acb440()*-0.324298);
}

double NNfunction-NN_3_6::synapse0x1ae9e90() {
   return (neuron0x1acbe10()*0.636145);
}

double NNfunction-NN_3_6::synapse0x1ae9ed0() {
   return (neuron0x1ac4960()*1.26059);
}

double NNfunction-NN_3_6::synapse0x1ae9f10() {
   return (neuron0x1ac5330()*-2.54205);
}

double NNfunction-NN_3_6::synapse0x1ae9f50() {
   return (neuron0x1aceba0()*0.765843);
}

double NNfunction-NN_3_6::synapse0x1ae9f90() {
   return (neuron0x1acf570()*0.491477);
}

double NNfunction-NN_3_6::synapse0x1ae9fd0() {
   return (neuron0x1acff40()*-0.481631);
}

double NNfunction-NN_3_6::synapse0x1aea010() {
   return (neuron0x1ad0910()*-0.107819);
}

double NNfunction-NN_3_6::synapse0x1aea050() {
   return (neuron0x1ad12e0()*1.2938);
}

double NNfunction-NN_3_6::synapse0x1aea090() {
   return (neuron0x1ad1cb0()*-0.6118);
}

double NNfunction-NN_3_6::synapse0x1aea0d0() {
   return (neuron0x1ad2680()*-0.373077);
}

double NNfunction-NN_3_6::synapse0x1aea110() {
   return (neuron0x1ad3050()*-1.43254);
}

double NNfunction-NN_3_6::synapse0x1ae9cc0() {
   return (neuron0x1ac90e0()*0.623273);
}

double NNfunction-NN_3_6::synapse0x1ae9d00() {
   return (neuron0x1ad5c30()*-0.920587);
}

double NNfunction-NN_3_6::synapse0x1ae9d40() {
   return (neuron0x1ad6600()*0.569147);
}

double NNfunction-NN_3_6::synapse0x1ae9d80() {
   return (neuron0x1ad6fd0()*0.662013);
}

double NNfunction-NN_3_6::synapse0x1aea360() {
   return (neuron0x1ad79a0()*0.631194);
}

double NNfunction-NN_3_6::synapse0x1aea3a0() {
   return (neuron0x1ad8370()*0.323513);
}

double NNfunction-NN_3_6::synapse0x1aea3e0() {
   return (neuron0x1ad8d40()*-1.4805);
}

double NNfunction-NN_3_6::synapse0x1aea420() {
   return (neuron0x1ad9710()*0.759433);
}

double NNfunction-NN_3_6::synapse0x1aea460() {
   return (neuron0x1ada0e0()*-0.129654);
}

double NNfunction-NN_3_6::synapse0x1aea4a0() {
   return (neuron0x1adacc0()*0.767905);
}

double NNfunction-NN_3_6::synapse0x1aea4e0() {
   return (neuron0x1adb690()*4.39928);
}

double NNfunction-NN_3_6::synapse0x1aea520() {
   return (neuron0x1acc510()*-0.296559);
}

double NNfunction-NN_3_6::synapse0x1aea560() {
   return (neuron0x1accee0()*-0.630726);
}

double NNfunction-NN_3_6::synapse0x1aea5a0() {
   return (neuron0x1acd8b0()*-1.35171);
}

double NNfunction-NN_3_6::synapse0x1aea5e0() {
   return (neuron0x1adfef0()*0.175606);
}

double NNfunction-NN_3_6::synapse0x1aea620() {
   return (neuron0x1ae07a0()*0.505787);
}

double NNfunction-NN_3_6::synapse0x1aea660() {
   return (neuron0x1ae1170()*0.330756);
}

double NNfunction-NN_3_6::synapse0x1aea6a0() {
   return (neuron0x1ae1b40()*-1.4479);
}

double NNfunction-NN_3_6::synapse0x1aeaa20() {
   return (neuron0x1abdac0()*-2.18013);
}

double NNfunction-NN_3_6::synapse0x1aeaa60() {
   return (neuron0x1abe3d0()*-0.476384);
}

double NNfunction-NN_3_6::synapse0x1aeaaa0() {
   return (neuron0x1abeeb0()*0.319802);
}

double NNfunction-NN_3_6::synapse0x1aeaae0() {
   return (neuron0x1878740()*0.016265);
}

double NNfunction-NN_3_6::synapse0x1aeab20() {
   return (neuron0x1abfcd0()*0.019838);
}

double NNfunction-NN_3_6::synapse0x1aeab60() {
   return (neuron0x1ac06a0()*-1.73713);
}

double NNfunction-NN_3_6::synapse0x1aeaba0() {
   return (neuron0x1ac1470()*0.0865055);
}

double NNfunction-NN_3_6::synapse0x1aeabe0() {
   return (neuron0x1ac1e40()*-1.73534);
}

double NNfunction-NN_3_6::synapse0x1aeac20() {
   return (neuron0x1ac2810()*0.249113);
}

double NNfunction-NN_3_6::synapse0x1aeac60() {
   return (neuron0x1ac32f0()*-1.15128);
}

double NNfunction-NN_3_6::synapse0x1aeaca0() {
   return (neuron0x1ac3cc0()*0.160571);
}

double NNfunction-NN_3_6::synapse0x1aeace0() {
   return (neuron0x1ac0da0()*0.285353);
}

double NNfunction-NN_3_6::synapse0x1aead20() {
   return (neuron0x1ac5870()*0.02778);
}

double NNfunction-NN_3_6::synapse0x1aead60() {
   return (neuron0x1ac6240()*-0.0409376);
}

double NNfunction-NN_3_6::synapse0x1aeada0() {
   return (neuron0x1ac6c10()*-0.00857917);
}

double NNfunction-NN_3_6::synapse0x1aeade0() {
   return (neuron0x1ac75e0()*-1.6086);
}

double NNfunction-NN_3_6::synapse0x1aea870() {
   return (neuron0x1ac93f0()*0.0119632);
}

double NNfunction-NN_3_6::synapse0x1aea8b0() {
   return (neuron0x1ac96d0()*0.230344);
}

double NNfunction-NN_3_6::synapse0x1aeaf30() {
   return (neuron0x1aca0a0()*0.129512);
}

double NNfunction-NN_3_6::synapse0x1aeaf70() {
   return (neuron0x1acaa70()*0.0761229);
}

double NNfunction-NN_3_6::synapse0x1aeafb0() {
   return (neuron0x1acb440()*0.354877);
}

double NNfunction-NN_3_6::synapse0x1aeaff0() {
   return (neuron0x1acbe10()*-0.012234);
}

double NNfunction-NN_3_6::synapse0x1aeb030() {
   return (neuron0x1ac4960()*-0.321534);
}

double NNfunction-NN_3_6::synapse0x1aeb070() {
   return (neuron0x1ac5330()*0.0310021);
}

double NNfunction-NN_3_6::synapse0x1aeb0b0() {
   return (neuron0x1aceba0()*0.0282823);
}

double NNfunction-NN_3_6::synapse0x1aeb0f0() {
   return (neuron0x1acf570()*4.54428e-05);
}

double NNfunction-NN_3_6::synapse0x1aeb130() {
   return (neuron0x1acff40()*-0.0470965);
}

double NNfunction-NN_3_6::synapse0x1aeb170() {
   return (neuron0x1ad0910()*-0.903543);
}

double NNfunction-NN_3_6::synapse0x1aeb1b0() {
   return (neuron0x1ad12e0()*1.03676);
}

double NNfunction-NN_3_6::synapse0x1aeb1f0() {
   return (neuron0x1ad1cb0()*-0.887166);
}

double NNfunction-NN_3_6::synapse0x1aeb230() {
   return (neuron0x1ad2680()*0.796979);
}

double NNfunction-NN_3_6::synapse0x1aeb270() {
   return (neuron0x1ad3050()*-1.57083);
}

double NNfunction-NN_3_6::synapse0x1aeae20() {
   return (neuron0x1ac90e0()*-1.35614);
}

double NNfunction-NN_3_6::synapse0x1aeae60() {
   return (neuron0x1ad5c30()*0.125334);
}

double NNfunction-NN_3_6::synapse0x1aeaea0() {
   return (neuron0x1ad6600()*0.0513167);
}

double NNfunction-NN_3_6::synapse0x1aeaee0() {
   return (neuron0x1ad6fd0()*0.182474);
}

double NNfunction-NN_3_6::synapse0x1aeb4c0() {
   return (neuron0x1ad79a0()*0.00517676);
}

double NNfunction-NN_3_6::synapse0x1aeb500() {
   return (neuron0x1ad8370()*0.453848);
}

double NNfunction-NN_3_6::synapse0x1aeb540() {
   return (neuron0x1ad8d40()*1.21274);
}

double NNfunction-NN_3_6::synapse0x1aeb580() {
   return (neuron0x1ad9710()*0.0843528);
}

double NNfunction-NN_3_6::synapse0x1aeb5c0() {
   return (neuron0x1ada0e0()*-0.180378);
}

double NNfunction-NN_3_6::synapse0x1aeb600() {
   return (neuron0x1adacc0()*-0.00641177);
}

double NNfunction-NN_3_6::synapse0x1aeb640() {
   return (neuron0x1adb690()*-0.000438311);
}

double NNfunction-NN_3_6::synapse0x1aeb680() {
   return (neuron0x1acc510()*-0.347473);
}

double NNfunction-NN_3_6::synapse0x1aeb6c0() {
   return (neuron0x1accee0()*-0.0418604);
}

double NNfunction-NN_3_6::synapse0x1aeb700() {
   return (neuron0x1acd8b0()*-0.950623);
}

double NNfunction-NN_3_6::synapse0x1aeb740() {
   return (neuron0x1adfef0()*1.42157);
}

double NNfunction-NN_3_6::synapse0x1aeb780() {
   return (neuron0x1ae07a0()*1.13412);
}

double NNfunction-NN_3_6::synapse0x1aeb7c0() {
   return (neuron0x1ae1170()*0.186207);
}

double NNfunction-NN_3_6::synapse0x1aeb800() {
   return (neuron0x1ae1b40()*0.305005);
}

double NNfunction-NN_3_6::synapse0x1aebb80() {
   return (neuron0x1abdac0()*1.40741);
}

double NNfunction-NN_3_6::synapse0x1aebbc0() {
   return (neuron0x1abe3d0()*0.112414);
}

double NNfunction-NN_3_6::synapse0x1aebc00() {
   return (neuron0x1abeeb0()*-0.236775);
}

double NNfunction-NN_3_6::synapse0x1aebc40() {
   return (neuron0x1878740()*-0.388236);
}

double NNfunction-NN_3_6::synapse0x1aebc80() {
   return (neuron0x1abfcd0()*-0.590727);
}

double NNfunction-NN_3_6::synapse0x1aebcc0() {
   return (neuron0x1ac06a0()*-0.280259);
}

double NNfunction-NN_3_6::synapse0x1aebd00() {
   return (neuron0x1ac1470()*-0.353173);
}

double NNfunction-NN_3_6::synapse0x1aebd40() {
   return (neuron0x1ac1e40()*2.13241);
}

double NNfunction-NN_3_6::synapse0x1aebd80() {
   return (neuron0x1ac2810()*1.15989);
}

double NNfunction-NN_3_6::synapse0x1aebdc0() {
   return (neuron0x1ac32f0()*2.24159);
}

double NNfunction-NN_3_6::synapse0x1aebe00() {
   return (neuron0x1ac3cc0()*5.06946);
}

double NNfunction-NN_3_6::synapse0x1aebe40() {
   return (neuron0x1ac0da0()*-0.220786);
}

double NNfunction-NN_3_6::synapse0x1aebe80() {
   return (neuron0x1ac5870()*-0.392627);
}

double NNfunction-NN_3_6::synapse0x1aebec0() {
   return (neuron0x1ac6240()*0.385196);
}

double NNfunction-NN_3_6::synapse0x1aebf00() {
   return (neuron0x1ac6c10()*0.51467);
}

double NNfunction-NN_3_6::synapse0x1aebf40() {
   return (neuron0x1ac75e0()*-1.09532);
}

double NNfunction-NN_3_6::synapse0x1aeb9d0() {
   return (neuron0x1ac93f0()*-0.459584);
}

double NNfunction-NN_3_6::synapse0x1aeba10() {
   return (neuron0x1ac96d0()*1.38088);
}

double NNfunction-NN_3_6::synapse0x1aec090() {
   return (neuron0x1aca0a0()*-0.502057);
}

double NNfunction-NN_3_6::synapse0x1aec0d0() {
   return (neuron0x1acaa70()*-0.546529);
}

double NNfunction-NN_3_6::synapse0x1aec110() {
   return (neuron0x1acb440()*0.960008);
}

double NNfunction-NN_3_6::synapse0x1aec150() {
   return (neuron0x1acbe10()*-0.345169);
}

double NNfunction-NN_3_6::synapse0x1aec190() {
   return (neuron0x1ac4960()*0.292091);
}

double NNfunction-NN_3_6::synapse0x1aec1d0() {
   return (neuron0x1ac5330()*1.64563);
}

double NNfunction-NN_3_6::synapse0x1aec210() {
   return (neuron0x1aceba0()*-0.516077);
}

double NNfunction-NN_3_6::synapse0x1aec250() {
   return (neuron0x1acf570()*-0.293065);
}

double NNfunction-NN_3_6::synapse0x1aec290() {
   return (neuron0x1acff40()*0.360113);
}

double NNfunction-NN_3_6::synapse0x1aec2d0() {
   return (neuron0x1ad0910()*-1.37844);
}

double NNfunction-NN_3_6::synapse0x1aec310() {
   return (neuron0x1ad12e0()*-0.130775);
}

double NNfunction-NN_3_6::synapse0x1aec350() {
   return (neuron0x1ad1cb0()*-2.06487);
}

double NNfunction-NN_3_6::synapse0x1aec390() {
   return (neuron0x1ad2680()*-2.05007);
}

double NNfunction-NN_3_6::synapse0x1aec3d0() {
   return (neuron0x1ad3050()*0.174494);
}

double NNfunction-NN_3_6::synapse0x1aebf80() {
   return (neuron0x1ac90e0()*-1.10564);
}

double NNfunction-NN_3_6::synapse0x1aebfc0() {
   return (neuron0x1ad5c30()*0.694677);
}

double NNfunction-NN_3_6::synapse0x1aec000() {
   return (neuron0x1ad6600()*-0.364275);
}

double NNfunction-NN_3_6::synapse0x1aec040() {
   return (neuron0x1ad6fd0()*-0.121355);
}

double NNfunction-NN_3_6::synapse0x1aec620() {
   return (neuron0x1ad79a0()*-0.387389);
}

double NNfunction-NN_3_6::synapse0x1aec660() {
   return (neuron0x1ad8370()*0.762288);
}

double NNfunction-NN_3_6::synapse0x1aec6a0() {
   return (neuron0x1ad8d40()*-0.961003);
}

double NNfunction-NN_3_6::synapse0x1aec6e0() {
   return (neuron0x1ad9710()*-0.4809);
}

double NNfunction-NN_3_6::synapse0x1aec720() {
   return (neuron0x1ada0e0()*0.187251);
}

double NNfunction-NN_3_6::synapse0x1aec760() {
   return (neuron0x1adacc0()*-0.496);
}

double NNfunction-NN_3_6::synapse0x1aec7a0() {
   return (neuron0x1adb690()*-3.93038);
}

double NNfunction-NN_3_6::synapse0x1aec7e0() {
   return (neuron0x1acc510()*0.282885);
}

double NNfunction-NN_3_6::synapse0x1aec820() {
   return (neuron0x1accee0()*0.365176);
}

double NNfunction-NN_3_6::synapse0x1aec860() {
   return (neuron0x1acd8b0()*0.207438);
}

double NNfunction-NN_3_6::synapse0x1aec8a0() {
   return (neuron0x1adfef0()*-0.560103);
}

double NNfunction-NN_3_6::synapse0x1aec8e0() {
   return (neuron0x1ae07a0()*-0.138934);
}

double NNfunction-NN_3_6::synapse0x1aec920() {
   return (neuron0x1ae1170()*-0.953268);
}

double NNfunction-NN_3_6::synapse0x1aec960() {
   return (neuron0x1ae1b40()*-0.00997664);
}

double NNfunction-NN_3_6::synapse0x1abda80() {
   return (neuron0x1ae8d40()*-2.53026);
}

double NNfunction-NN_3_6::synapse0x1aecbc0() {
   return (neuron0x1ae90e0()*-5.22686);
}

double NNfunction-NN_3_6::synapse0x1aecc00() {
   return (neuron0x1ae9580()*-3.83699);
}

double NNfunction-NN_3_6::synapse0x1aecc40() {
   return (neuron0x1aea6e0()*-3.86969);
}

double NNfunction-NN_3_6::synapse0x1aecc80() {
   return (neuron0x1aeb840()*-4.07289);
}

