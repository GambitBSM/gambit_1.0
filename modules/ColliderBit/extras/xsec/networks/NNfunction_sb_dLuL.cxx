#include "NNfunction_sb_dLuL.h"
#include <cmath>

double NNfunction_sb_dLuL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5255)/15.3158;
   input1 = (in1 - -1.65916)/1151.78;
   input2 = (in2 - 664.134)/623.947;
   input3 = (in3 - -55.1757)/816.857;
   input4 = (in4 - 1058.78)/952.453;
   input5 = (in5 - 891.445)/943.778;
   input6 = (in6 - 908.853)/950.208;
   input7 = (in7 - 922.247)/931.894;
   input8 = (in8 - 929.55)/977.975;
   input9 = (in9 - 900.604)/953.031;
   input10 = (in10 - 989.673)/958.259;
   input11 = (in11 - 323.846)/292.56;
   input12 = (in12 - 730.101)/877.263;
   input13 = (in13 - 508.612)/525.823;
   input14 = (in14 - 718.499)/815.817;
   input15 = (in15 - 723.079)/817.656;
   input16 = (in16 - 539.167)/564.932;
   input17 = (in17 - 768.424)/906.972;
   input18 = (in18 - 754.018)/901.286;
   input19 = (in19 - 805.155)/882.361;
   input20 = (in20 - -3.98674)/494.335;
   input21 = (in21 - 2.63384)/1162.65;
   input22 = (in22 - 9.35518)/1206.07;
   input23 = (in23 - -192.986)/596.302;
   switch(index) {
     case 0:
         return neuron0x22d4020();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLuL::Value(int index, double* input) {
   input0 = (input[0] - 23.5255)/15.3158;
   input1 = (input[1] - -1.65916)/1151.78;
   input2 = (input[2] - 664.134)/623.947;
   input3 = (input[3] - -55.1757)/816.857;
   input4 = (input[4] - 1058.78)/952.453;
   input5 = (input[5] - 891.445)/943.778;
   input6 = (input[6] - 908.853)/950.208;
   input7 = (input[7] - 922.247)/931.894;
   input8 = (input[8] - 929.55)/977.975;
   input9 = (input[9] - 900.604)/953.031;
   input10 = (input[10] - 989.673)/958.259;
   input11 = (input[11] - 323.846)/292.56;
   input12 = (input[12] - 730.101)/877.263;
   input13 = (input[13] - 508.612)/525.823;
   input14 = (input[14] - 718.499)/815.817;
   input15 = (input[15] - 723.079)/817.656;
   input16 = (input[16] - 539.167)/564.932;
   input17 = (input[17] - 768.424)/906.972;
   input18 = (input[18] - 754.018)/901.286;
   input19 = (input[19] - 805.155)/882.361;
   input20 = (input[20] - -3.98674)/494.335;
   input21 = (input[21] - 2.63384)/1162.65;
   input22 = (input[22] - 9.35518)/1206.07;
   input23 = (input[23] - -192.986)/596.302;
   switch(index) {
     case 0:
         return neuron0x22d4020();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLuL::neuron0x229f090() {
   return input0;
}

double NNfunction_sb_dLuL::neuron0x229f340() {
   return input1;
}

double NNfunction_sb_dLuL::neuron0x229f680() {
   return input2;
}

double NNfunction_sb_dLuL::neuron0x229f9c0() {
   return input3;
}

double NNfunction_sb_dLuL::neuron0x229fd00() {
   return input4;
}

double NNfunction_sb_dLuL::neuron0x22a0040() {
   return input5;
}

double NNfunction_sb_dLuL::neuron0x22a0380() {
   return input6;
}

double NNfunction_sb_dLuL::neuron0x22a06c0() {
   return input7;
}

double NNfunction_sb_dLuL::neuron0x22a0a00() {
   return input8;
}

double NNfunction_sb_dLuL::neuron0x22a0d40() {
   return input9;
}

double NNfunction_sb_dLuL::neuron0x22a1080() {
   return input10;
}

double NNfunction_sb_dLuL::neuron0x22a13c0() {
   return input11;
}

double NNfunction_sb_dLuL::neuron0x22a1700() {
   return input12;
}

double NNfunction_sb_dLuL::neuron0x22a1a40() {
   return input13;
}

double NNfunction_sb_dLuL::neuron0x22a1d80() {
   return input14;
}

double NNfunction_sb_dLuL::neuron0x22a20c0() {
   return input15;
}

double NNfunction_sb_dLuL::neuron0x22a2400() {
   return input16;
}

double NNfunction_sb_dLuL::neuron0x22a2960() {
   return input17;
}

double NNfunction_sb_dLuL::neuron0x22a2ca0() {
   return input18;
}

double NNfunction_sb_dLuL::neuron0x22a2fe0() {
   return input19;
}

double NNfunction_sb_dLuL::neuron0x22a3320() {
   return input20;
}

double NNfunction_sb_dLuL::neuron0x22a3660() {
   return input21;
}

double NNfunction_sb_dLuL::neuron0x22a39a0() {
   return input22;
}

double NNfunction_sb_dLuL::neuron0x22a3ce0() {
   return input23;
}

double NNfunction_sb_dLuL::input0x22a4150() {
   double input = -0.174498;
   input += synapse0x22a4490();
   input += synapse0x22a44d0();
   input += synapse0x22a4510();
   input += synapse0x22a4550();
   input += synapse0x22a4590();
   input += synapse0x22a45d0();
   input += synapse0x22a4610();
   input += synapse0x22a4650();
   input += synapse0x22a4690();
   input += synapse0x22a46d0();
   input += synapse0x22a4710();
   input += synapse0x22a4750();
   input += synapse0x22a4790();
   input += synapse0x22a47d0();
   input += synapse0x22a4810();
   input += synapse0x22a4850();
   input += synapse0x22a42e0();
   input += synapse0x22a4320();
   input += synapse0x205b230();
   input += synapse0x205b270();
   input += synapse0x22a4890();
   input += synapse0x22a48d0();
   input += synapse0x22a4910();
   input += synapse0x22a4950();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22a4150() {
   double input = input0x22a4150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22a4990() {
   double input = -0.673054;
   input += synapse0x22a4cd0();
   input += synapse0x22a4d10();
   input += synapse0x22a4d50();
   input += synapse0x22a4d90();
   input += synapse0x22a4dd0();
   input += synapse0x22a4e10();
   input += synapse0x22a4e50();
   input += synapse0x22a4e90();
   input += synapse0x22a4ed0();
   input += synapse0x205b080();
   input += synapse0x205b0c0();
   input += synapse0x205b100();
   input += synapse0x205b140();
   input += synapse0x22a5120();
   input += synapse0x22a5160();
   input += synapse0x22a51a0();
   input += synapse0x22a4b20();
   input += synapse0x22a4b60();
   input += synapse0x22a52f0();
   input += synapse0x22a5330();
   input += synapse0x22a5370();
   input += synapse0x22a53b0();
   input += synapse0x22a53f0();
   input += synapse0x22a5430();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22a4990() {
   double input = input0x22a4990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22a5470() {
   double input = -1.02616;
   input += synapse0x22a57b0();
   input += synapse0x22a57f0();
   input += synapse0x22a5830();
   input += synapse0x22a5870();
   input += synapse0x22a58b0();
   input += synapse0x22a58f0();
   input += synapse0x22a5930();
   input += synapse0x22a5970();
   input += synapse0x22a59b0();
   input += synapse0x22a59f0();
   input += synapse0x22a5a30();
   input += synapse0x22a5a70();
   input += synapse0x22a5ab0();
   input += synapse0x22a5af0();
   input += synapse0x22a5b30();
   input += synapse0x22a5b70();
   input += synapse0x22a5600();
   input += synapse0x22a5640();
   input += synapse0x2069130();
   input += synapse0x2069170();
   input += synapse0x22a7aa0();
   input += synapse0x22a7ae0();
   input += synapse0x229edd0();
   input += synapse0x229ee10();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22a5470() {
   double input = input0x22a5470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x2069890() {
   double input = -1.29345;
   input += synapse0x2069a20();
   input += synapse0x22a5030();
   input += synapse0x22a5070();
   input += synapse0x22a50b0();
   input += synapse0x22a5cc0();
   input += synapse0x22a5d00();
   input += synapse0x22a5d40();
   input += synapse0x22a5d80();
   input += synapse0x22a5dc0();
   input += synapse0x22a5e00();
   input += synapse0x22a5e40();
   input += synapse0x22a5e80();
   input += synapse0x22a5ec0();
   input += synapse0x22a5f00();
   input += synapse0x22a5f40();
   input += synapse0x22a5f80();
   input += synapse0x229ee50();
   input += synapse0x229ee90();
   input += synapse0x22a60d0();
   input += synapse0x22a6110();
   input += synapse0x22a6150();
   input += synapse0x22a6190();
   input += synapse0x22a61d0();
   input += synapse0x22a6210();
   return input;
}

double NNfunction_sb_dLuL::neuron0x2069890() {
   double input = input0x2069890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22a6250() {
   double input = -1.40512;
   input += synapse0x22a6590();
   input += synapse0x22a65d0();
   input += synapse0x22a6610();
   input += synapse0x22a6650();
   input += synapse0x22a6690();
   input += synapse0x22a66d0();
   input += synapse0x22a6710();
   input += synapse0x22a6750();
   input += synapse0x22a6790();
   input += synapse0x22a67d0();
   input += synapse0x22a6810();
   input += synapse0x22a6850();
   input += synapse0x22a6890();
   input += synapse0x22a68d0();
   input += synapse0x22a6910();
   input += synapse0x22a6950();
   input += synapse0x22a6aa0();
   input += synapse0x22a63e0();
   input += synapse0x22a6420();
   input += synapse0x22a7be0();
   input += synapse0x22a7c20();
   input += synapse0x22a7c60();
   input += synapse0x22a7ca0();
   input += synapse0x22a7ce0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22a6250() {
   double input = input0x22a6250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22a7d20() {
   double input = -1.0155;
   input += synapse0x22a8060();
   input += synapse0x22a80a0();
   input += synapse0x22a80e0();
   input += synapse0x22a8120();
   input += synapse0x22a8160();
   input += synapse0x22a81a0();
   input += synapse0x22a81e0();
   input += synapse0x22a8220();
   input += synapse0x22a8260();
   input += synapse0x2069480();
   input += synapse0x20694c0();
   input += synapse0x2069500();
   input += synapse0x2069540();
   input += synapse0x2069580();
   input += synapse0x20695c0();
   input += synapse0x2069600();
   input += synapse0x22a7eb0();
   input += synapse0x22a7ef0();
   input += synapse0x2069750();
   input += synapse0x2069790();
   input += synapse0x20697d0();
   input += synapse0x2069810();
   input += synapse0x2069850();
   input += synapse0x22a8ab0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22a7d20() {
   double input = input0x22a7d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22a8af0() {
   double input = 0.0499622;
   input += synapse0x22a8e30();
   input += synapse0x22a8e70();
   input += synapse0x22a8eb0();
   input += synapse0x22a8ef0();
   input += synapse0x22a8f30();
   input += synapse0x22a8f70();
   input += synapse0x22a8fb0();
   input += synapse0x22a8ff0();
   input += synapse0x22a9030();
   input += synapse0x22a9070();
   input += synapse0x22a90b0();
   input += synapse0x22a90f0();
   input += synapse0x22a9130();
   input += synapse0x22a9170();
   input += synapse0x22a91b0();
   input += synapse0x22a91f0();
   input += synapse0x22a8c80();
   input += synapse0x22a8cc0();
   input += synapse0x22a9340();
   input += synapse0x22a9380();
   input += synapse0x22a93c0();
   input += synapse0x22a9400();
   input += synapse0x22a9440();
   input += synapse0x22a9480();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22a8af0() {
   double input = input0x22a8af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22a94c0() {
   double input = -1.94631;
   input += synapse0x22a9800();
   input += synapse0x22a9840();
   input += synapse0x22a9880();
   input += synapse0x22a98c0();
   input += synapse0x22a9900();
   input += synapse0x22a9940();
   input += synapse0x22a9980();
   input += synapse0x22a99c0();
   input += synapse0x22a9a00();
   input += synapse0x22a9a40();
   input += synapse0x22a9a80();
   input += synapse0x22a9ac0();
   input += synapse0x22a9b00();
   input += synapse0x22a9b40();
   input += synapse0x22a9b80();
   input += synapse0x22a9bc0();
   input += synapse0x22a9650();
   input += synapse0x22a9690();
   input += synapse0x22a9d10();
   input += synapse0x22a9d50();
   input += synapse0x22a9d90();
   input += synapse0x22a9dd0();
   input += synapse0x22a9e10();
   input += synapse0x22a9e50();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22a94c0() {
   double input = input0x22a94c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22a9e90() {
   double input = -0.868996;
   input += synapse0x22a2850();
   input += synapse0x22a2890();
   input += synapse0x22a28d0();
   input += synapse0x22a2910();
   input += synapse0x22aa3e0();
   input += synapse0x22aa420();
   input += synapse0x22aa460();
   input += synapse0x22aa4a0();
   input += synapse0x22aa4e0();
   input += synapse0x22aa520();
   input += synapse0x22aa560();
   input += synapse0x22aa5a0();
   input += synapse0x22aa5e0();
   input += synapse0x22aa620();
   input += synapse0x22aa660();
   input += synapse0x22aa6a0();
   input += synapse0x22aa020();
   input += synapse0x22aa060();
   input += synapse0x22aa7f0();
   input += synapse0x22aa830();
   input += synapse0x22aa870();
   input += synapse0x22aa8b0();
   input += synapse0x22aa8f0();
   input += synapse0x22aa930();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22a9e90() {
   double input = input0x22a9e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22aa970() {
   double input = -0.695833;
   input += synapse0x22aacb0();
   input += synapse0x22aacf0();
   input += synapse0x22aad30();
   input += synapse0x22aad70();
   input += synapse0x22aadb0();
   input += synapse0x22aadf0();
   input += synapse0x22aae30();
   input += synapse0x22aae70();
   input += synapse0x22aaeb0();
   input += synapse0x22aaef0();
   input += synapse0x22aaf30();
   input += synapse0x22aaf70();
   input += synapse0x22aafb0();
   input += synapse0x22aaff0();
   input += synapse0x22ab030();
   input += synapse0x22ab070();
   input += synapse0x22aab00();
   input += synapse0x22aab40();
   input += synapse0x22ab1c0();
   input += synapse0x22ab200();
   input += synapse0x22ab240();
   input += synapse0x22ab280();
   input += synapse0x22ab2c0();
   input += synapse0x22ab300();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22aa970() {
   double input = input0x22aa970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22ab340() {
   double input = -0.767563;
   input += synapse0x22ab680();
   input += synapse0x22ab6c0();
   input += synapse0x22ab700();
   input += synapse0x22ab740();
   input += synapse0x22ab780();
   input += synapse0x22ab7c0();
   input += synapse0x22ab800();
   input += synapse0x22ab840();
   input += synapse0x22ab880();
   input += synapse0x22ab8c0();
   input += synapse0x22ab900();
   input += synapse0x22ab940();
   input += synapse0x22ab980();
   input += synapse0x22ab9c0();
   input += synapse0x22aba00();
   input += synapse0x22aba40();
   input += synapse0x22ab4d0();
   input += synapse0x22ab510();
   input += synapse0x22a82a0();
   input += synapse0x22a82e0();
   input += synapse0x22a8320();
   input += synapse0x22a8360();
   input += synapse0x22a83a0();
   input += synapse0x22a83e0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22ab340() {
   double input = input0x22ab340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22a8420() {
   double input = 0.525904;
   input += synapse0x22a8760();
   input += synapse0x22a87a0();
   input += synapse0x22a87e0();
   input += synapse0x22a8820();
   input += synapse0x22a8860();
   input += synapse0x22a88a0();
   input += synapse0x22a88e0();
   input += synapse0x22a8920();
   input += synapse0x22a8960();
   input += synapse0x22a89a0();
   input += synapse0x22a89e0();
   input += synapse0x22a8a20();
   input += synapse0x22a8a60();
   input += synapse0x22acba0();
   input += synapse0x22acbe0();
   input += synapse0x22acc20();
   input += synapse0x22a85b0();
   input += synapse0x22a85f0();
   input += synapse0x22acd70();
   input += synapse0x22acdb0();
   input += synapse0x22acdf0();
   input += synapse0x22ace30();
   input += synapse0x22ace70();
   input += synapse0x22aceb0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22a8420() {
   double input = input0x22a8420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22acef0() {
   double input = 0.405752;
   input += synapse0x22ad230();
   input += synapse0x22ad270();
   input += synapse0x22ad2b0();
   input += synapse0x22ad2f0();
   input += synapse0x22ad330();
   input += synapse0x22ad370();
   input += synapse0x22ad3b0();
   input += synapse0x22ad3f0();
   input += synapse0x22ad430();
   input += synapse0x22ad470();
   input += synapse0x22ad4b0();
   input += synapse0x22ad4f0();
   input += synapse0x22ad530();
   input += synapse0x22ad570();
   input += synapse0x22ad5b0();
   input += synapse0x22ad5f0();
   input += synapse0x22ad080();
   input += synapse0x22ad0c0();
   input += synapse0x22ad740();
   input += synapse0x22ad780();
   input += synapse0x22ad7c0();
   input += synapse0x22ad800();
   input += synapse0x22ad840();
   input += synapse0x22ad880();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22acef0() {
   double input = input0x22acef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22ad8c0() {
   double input = -0.218496;
   input += synapse0x22adc00();
   input += synapse0x22adc40();
   input += synapse0x22adc80();
   input += synapse0x22adcc0();
   input += synapse0x22add00();
   input += synapse0x22add40();
   input += synapse0x22add80();
   input += synapse0x22addc0();
   input += synapse0x22ade00();
   input += synapse0x22ade40();
   input += synapse0x22ade80();
   input += synapse0x22adec0();
   input += synapse0x22adf00();
   input += synapse0x22adf40();
   input += synapse0x22adf80();
   input += synapse0x22adfc0();
   input += synapse0x22ada50();
   input += synapse0x22ada90();
   input += synapse0x22ae110();
   input += synapse0x22ae150();
   input += synapse0x22ae190();
   input += synapse0x22ae1d0();
   input += synapse0x22ae210();
   input += synapse0x22ae250();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22ad8c0() {
   double input = input0x22ad8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22ae290() {
   double input = 0.392835;
   input += synapse0x22ae5d0();
   input += synapse0x22ae610();
   input += synapse0x22ae650();
   input += synapse0x22ae690();
   input += synapse0x22ae6d0();
   input += synapse0x22ae710();
   input += synapse0x22ae750();
   input += synapse0x22ae790();
   input += synapse0x22ae7d0();
   input += synapse0x22ae810();
   input += synapse0x22ae850();
   input += synapse0x22ae890();
   input += synapse0x22ae8d0();
   input += synapse0x22ae910();
   input += synapse0x22ae950();
   input += synapse0x22ae990();
   input += synapse0x22ae420();
   input += synapse0x22ae460();
   input += synapse0x22aeae0();
   input += synapse0x22aeb20();
   input += synapse0x22aeb60();
   input += synapse0x22aeba0();
   input += synapse0x22aebe0();
   input += synapse0x22aec20();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22ae290() {
   double input = input0x22ae290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22aec60() {
   double input = 0.50764;
   input += synapse0x22aefa0();
   input += synapse0x229f220();
   input += synapse0x229f260();
   input += synapse0x229f560();
   input += synapse0x229f5a0();
   input += synapse0x229f8a0();
   input += synapse0x229f8e0();
   input += synapse0x229fbe0();
   input += synapse0x229fc20();
   input += synapse0x229ff20();
   input += synapse0x229ff60();
   input += synapse0x22a0260();
   input += synapse0x22a02a0();
   input += synapse0x22a05a0();
   input += synapse0x22a05e0();
   input += synapse0x22a08e0();
   input += synapse0x22a0920();
   input += synapse0x22a0c20();
   input += synapse0x22a0c60();
   input += synapse0x22a0f60();
   input += synapse0x22a0fa0();
   input += synapse0x22a12a0();
   input += synapse0x22a12e0();
   input += synapse0x22a15e0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22aec60() {
   double input = input0x22aec60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22b0a70() {
   double input = 1.24275;
   input += synapse0x22a1620();
   input += synapse0x22a22e0();
   input += synapse0x22a2320();
   input += synapse0x22aedf0();
   input += synapse0x22aee30();
   input += synapse0x22a2620();
   input += synapse0x22a2660();
   input += synapse0x22a2b80();
   input += synapse0x22a2bc0();
   input += synapse0x22a2ec0();
   input += synapse0x22a2f00();
   input += synapse0x22a3200();
   input += synapse0x22a3240();
   input += synapse0x22a3540();
   input += synapse0x22a3580();
   input += synapse0x22a3880();
   input += synapse0x22a38c0();
   input += synapse0x22a3bc0();
   input += synapse0x22a3c00();
   input += synapse0x22a3f00();
   input += synapse0x22a3f40();
   input += synapse0x22a1920();
   input += synapse0x22a1960();
   input += synapse0x22b0d10();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22b0a70() {
   double input = input0x22b0a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22b0d50() {
   double input = -1.32455;
   input += synapse0x22b1090();
   input += synapse0x22b10d0();
   input += synapse0x22b1110();
   input += synapse0x22b1150();
   input += synapse0x22b1190();
   input += synapse0x22b11d0();
   input += synapse0x22b1210();
   input += synapse0x22b1250();
   input += synapse0x22b1290();
   input += synapse0x22b12d0();
   input += synapse0x22b1310();
   input += synapse0x22b1350();
   input += synapse0x22b1390();
   input += synapse0x22b13d0();
   input += synapse0x22b1410();
   input += synapse0x22b1450();
   input += synapse0x22b0ee0();
   input += synapse0x22b0f20();
   input += synapse0x22b15a0();
   input += synapse0x22b15e0();
   input += synapse0x22b1620();
   input += synapse0x22b1660();
   input += synapse0x22b16a0();
   input += synapse0x22b16e0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22b0d50() {
   double input = input0x22b0d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22b1720() {
   double input = -0.741667;
   input += synapse0x22b1a60();
   input += synapse0x22b1aa0();
   input += synapse0x22b1ae0();
   input += synapse0x22b1b20();
   input += synapse0x22b1b60();
   input += synapse0x22b1ba0();
   input += synapse0x22b1be0();
   input += synapse0x22b1c20();
   input += synapse0x22b1c60();
   input += synapse0x22b1ca0();
   input += synapse0x22b1ce0();
   input += synapse0x22b1d20();
   input += synapse0x22b1d60();
   input += synapse0x22b1da0();
   input += synapse0x22b1de0();
   input += synapse0x22b1e20();
   input += synapse0x22b18b0();
   input += synapse0x22b18f0();
   input += synapse0x22b1f70();
   input += synapse0x22b1fb0();
   input += synapse0x22b1ff0();
   input += synapse0x22b2030();
   input += synapse0x22b2070();
   input += synapse0x22b20b0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22b1720() {
   double input = input0x22b1720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22b20f0() {
   double input = 0.52432;
   input += synapse0x22b2430();
   input += synapse0x22b2470();
   input += synapse0x22b24b0();
   input += synapse0x22b24f0();
   input += synapse0x22b2530();
   input += synapse0x22b2570();
   input += synapse0x22b25b0();
   input += synapse0x22b25f0();
   input += synapse0x22b2630();
   input += synapse0x22b2670();
   input += synapse0x22b26b0();
   input += synapse0x22b26f0();
   input += synapse0x22b2730();
   input += synapse0x22b2770();
   input += synapse0x22b27b0();
   input += synapse0x22b27f0();
   input += synapse0x22b2280();
   input += synapse0x22b22c0();
   input += synapse0x22b2940();
   input += synapse0x22b2980();
   input += synapse0x22b29c0();
   input += synapse0x22b2a00();
   input += synapse0x22b2a40();
   input += synapse0x22b2a80();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22b20f0() {
   double input = input0x22b20f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22b2ac0() {
   double input = 0.454633;
   input += synapse0x22b2e00();
   input += synapse0x22b2e40();
   input += synapse0x22b2e80();
   input += synapse0x22b2ec0();
   input += synapse0x22b2f00();
   input += synapse0x22b2f40();
   input += synapse0x22b2f80();
   input += synapse0x22b2fc0();
   input += synapse0x22b3000();
   input += synapse0x22b3040();
   input += synapse0x22b3080();
   input += synapse0x22b30c0();
   input += synapse0x22b3100();
   input += synapse0x22b3140();
   input += synapse0x22b3180();
   input += synapse0x22b31c0();
   input += synapse0x22b2c50();
   input += synapse0x22b2c90();
   input += synapse0x22b3310();
   input += synapse0x22b3350();
   input += synapse0x22b3390();
   input += synapse0x22b33d0();
   input += synapse0x22b3410();
   input += synapse0x22b3450();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22b2ac0() {
   double input = input0x22b2ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22b3490() {
   double input = 4.40716;
   input += synapse0x22b37d0();
   input += synapse0x22b3810();
   input += synapse0x22b3850();
   input += synapse0x22b3890();
   input += synapse0x22b38d0();
   input += synapse0x22b3910();
   input += synapse0x22b3950();
   input += synapse0x22b3990();
   input += synapse0x22b39d0();
   input += synapse0x22abb90();
   input += synapse0x22abbd0();
   input += synapse0x22abc10();
   input += synapse0x22abc50();
   input += synapse0x22abc90();
   input += synapse0x22abcd0();
   input += synapse0x22abd10();
   input += synapse0x22b3620();
   input += synapse0x22b3660();
   input += synapse0x22abe60();
   input += synapse0x22abea0();
   input += synapse0x22abee0();
   input += synapse0x22abf20();
   input += synapse0x22abf60();
   input += synapse0x22abfa0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22b3490() {
   double input = input0x22b3490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22abfe0() {
   double input = 0.88053;
   input += synapse0x22ac320();
   input += synapse0x22ac360();
   input += synapse0x22ac3a0();
   input += synapse0x22ac3e0();
   input += synapse0x22ac420();
   input += synapse0x22ac460();
   input += synapse0x22ac4a0();
   input += synapse0x22ac4e0();
   input += synapse0x22ac520();
   input += synapse0x22ac560();
   input += synapse0x22ac5a0();
   input += synapse0x22ac5e0();
   input += synapse0x22ac620();
   input += synapse0x22ac660();
   input += synapse0x22ac6a0();
   input += synapse0x22ac6e0();
   input += synapse0x22ac170();
   input += synapse0x22ac1b0();
   input += synapse0x22ac830();
   input += synapse0x22ac870();
   input += synapse0x22ac8b0();
   input += synapse0x22ac8f0();
   input += synapse0x22ac930();
   input += synapse0x22ac970();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22abfe0() {
   double input = input0x22abfe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22ac9b0() {
   double input = 1.63993;
   input += synapse0x22acb40();
   input += synapse0x22b5bd0();
   input += synapse0x22b5c10();
   input += synapse0x22b5c50();
   input += synapse0x22b5c90();
   input += synapse0x22b5cd0();
   input += synapse0x22b5d10();
   input += synapse0x22b5d50();
   input += synapse0x22b5d90();
   input += synapse0x22b5dd0();
   input += synapse0x22b5e10();
   input += synapse0x22b5e50();
   input += synapse0x22b5e90();
   input += synapse0x22b5ed0();
   input += synapse0x22b5f10();
   input += synapse0x22b5f50();
   input += synapse0x22b5a20();
   input += synapse0x22b5a60();
   input += synapse0x22b60a0();
   input += synapse0x22b60e0();
   input += synapse0x22b6120();
   input += synapse0x22b6160();
   input += synapse0x22b61a0();
   input += synapse0x22b61e0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22ac9b0() {
   double input = input0x22ac9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22b6220() {
   double input = 0.415975;
   input += synapse0x22b6560();
   input += synapse0x22b65a0();
   input += synapse0x22b65e0();
   input += synapse0x22b6620();
   input += synapse0x22b6660();
   input += synapse0x22b66a0();
   input += synapse0x22b66e0();
   input += synapse0x22b6720();
   input += synapse0x22b6760();
   input += synapse0x22b67a0();
   input += synapse0x22b67e0();
   input += synapse0x22b6820();
   input += synapse0x22b6860();
   input += synapse0x22b68a0();
   input += synapse0x22b68e0();
   input += synapse0x22b6920();
   input += synapse0x22b63b0();
   input += synapse0x22b63f0();
   input += synapse0x22b6a70();
   input += synapse0x22b6ab0();
   input += synapse0x22b6af0();
   input += synapse0x22b6b30();
   input += synapse0x22b6b70();
   input += synapse0x22b6bb0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22b6220() {
   double input = input0x22b6220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22b6bf0() {
   double input = -0.64838;
   input += synapse0x22b6f30();
   input += synapse0x22b6f70();
   input += synapse0x22b6fb0();
   input += synapse0x22b6ff0();
   input += synapse0x22b7030();
   input += synapse0x22b7070();
   input += synapse0x22b70b0();
   input += synapse0x22b70f0();
   input += synapse0x22b7130();
   input += synapse0x22b7170();
   input += synapse0x22b71b0();
   input += synapse0x22b71f0();
   input += synapse0x22b7230();
   input += synapse0x22b7270();
   input += synapse0x22b72b0();
   input += synapse0x22b72f0();
   input += synapse0x22b6d80();
   input += synapse0x22b6dc0();
   input += synapse0x22b7440();
   input += synapse0x22b7480();
   input += synapse0x22b74c0();
   input += synapse0x22b7500();
   input += synapse0x22b7540();
   input += synapse0x22b7580();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22b6bf0() {
   double input = input0x22b6bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22b75c0() {
   double input = -0.676826;
   input += synapse0x22b7900();
   input += synapse0x22b7940();
   input += synapse0x22b7980();
   input += synapse0x22b79c0();
   input += synapse0x22b7a00();
   input += synapse0x22b7a40();
   input += synapse0x22b7a80();
   input += synapse0x22b7ac0();
   input += synapse0x22b7b00();
   input += synapse0x22b7b40();
   input += synapse0x22b7b80();
   input += synapse0x22b7bc0();
   input += synapse0x22b7c00();
   input += synapse0x22b7c40();
   input += synapse0x22b7c80();
   input += synapse0x22b7cc0();
   input += synapse0x22b7750();
   input += synapse0x22b7790();
   input += synapse0x22b7e10();
   input += synapse0x22b7e50();
   input += synapse0x22b7e90();
   input += synapse0x22b7ed0();
   input += synapse0x22b7f10();
   input += synapse0x22b7f50();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22b75c0() {
   double input = input0x22b75c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22b7f90() {
   double input = 1.70079;
   input += synapse0x22b82d0();
   input += synapse0x22b8310();
   input += synapse0x22b8350();
   input += synapse0x22b8390();
   input += synapse0x22b83d0();
   input += synapse0x22b8410();
   input += synapse0x22b8450();
   input += synapse0x22b8490();
   input += synapse0x22b84d0();
   input += synapse0x22b8510();
   input += synapse0x22b8550();
   input += synapse0x22b8590();
   input += synapse0x22b85d0();
   input += synapse0x22b8610();
   input += synapse0x22b8650();
   input += synapse0x22b8690();
   input += synapse0x22b8120();
   input += synapse0x22b8160();
   input += synapse0x22b87e0();
   input += synapse0x22b8820();
   input += synapse0x22b8860();
   input += synapse0x22b88a0();
   input += synapse0x22b88e0();
   input += synapse0x22b8920();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22b7f90() {
   double input = input0x22b7f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22b8960() {
   double input = 1.12921;
   input += synapse0x22b8ca0();
   input += synapse0x22b8ce0();
   input += synapse0x22b8d20();
   input += synapse0x22b8d60();
   input += synapse0x22b8da0();
   input += synapse0x22b8de0();
   input += synapse0x22b8e20();
   input += synapse0x22b8e60();
   input += synapse0x22b8ea0();
   input += synapse0x22b8ee0();
   input += synapse0x22b8f20();
   input += synapse0x22b8f60();
   input += synapse0x22b8fa0();
   input += synapse0x22b8fe0();
   input += synapse0x22b9020();
   input += synapse0x22b9060();
   input += synapse0x22b8af0();
   input += synapse0x22b8b30();
   input += synapse0x22b91b0();
   input += synapse0x22b91f0();
   input += synapse0x22b9230();
   input += synapse0x22b9270();
   input += synapse0x22b92b0();
   input += synapse0x22b92f0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22b8960() {
   double input = input0x22b8960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22b9330() {
   double input = 0.355612;
   input += synapse0x22b9670();
   input += synapse0x22b96b0();
   input += synapse0x22b96f0();
   input += synapse0x22b9730();
   input += synapse0x22b9770();
   input += synapse0x22b97b0();
   input += synapse0x22b97f0();
   input += synapse0x22b9830();
   input += synapse0x22b9870();
   input += synapse0x22b98b0();
   input += synapse0x22b98f0();
   input += synapse0x22b9930();
   input += synapse0x22b9970();
   input += synapse0x22b99b0();
   input += synapse0x22b99f0();
   input += synapse0x22b9a30();
   input += synapse0x22b94c0();
   input += synapse0x22b9500();
   input += synapse0x22b9b80();
   input += synapse0x22b9bc0();
   input += synapse0x22b9c00();
   input += synapse0x22b9c40();
   input += synapse0x22b9c80();
   input += synapse0x22b9cc0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22b9330() {
   double input = input0x22b9330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22b9d00() {
   double input = 1.95996;
   input += synapse0x22ba040();
   input += synapse0x22ba080();
   input += synapse0x22ba0c0();
   input += synapse0x22ba100();
   input += synapse0x22ba140();
   input += synapse0x22ba180();
   input += synapse0x22ba1c0();
   input += synapse0x22ba200();
   input += synapse0x22ba240();
   input += synapse0x22ba280();
   input += synapse0x22ba2c0();
   input += synapse0x22ba300();
   input += synapse0x22ba340();
   input += synapse0x22ba380();
   input += synapse0x22ba3c0();
   input += synapse0x22ba400();
   input += synapse0x22b9e90();
   input += synapse0x22b9ed0();
   input += synapse0x22ba550();
   input += synapse0x22ba590();
   input += synapse0x22ba5d0();
   input += synapse0x22ba610();
   input += synapse0x22ba650();
   input += synapse0x22ba690();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22b9d00() {
   double input = input0x22b9d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22ba6d0() {
   double input = -0.0102025;
   input += synapse0x22baa10();
   input += synapse0x22aefe0();
   input += synapse0x22af020();
   input += synapse0x22af060();
   input += synapse0x22af2b0();
   input += synapse0x22af2f0();
   input += synapse0x22af330();
   input += synapse0x22af580();
   input += synapse0x22af5c0();
   input += synapse0x22af810();
   input += synapse0x22af850();
   input += synapse0x22af890();
   input += synapse0x22afae0();
   input += synapse0x22afb20();
   input += synapse0x22afd70();
   input += synapse0x22afdb0();
   input += synapse0x22ba860();
   input += synapse0x22ba8a0();
   input += synapse0x22aff00();
   input += synapse0x22b0410();
   input += synapse0x22b0450();
   input += synapse0x22b0490();
   input += synapse0x22b06e0();
   input += synapse0x22b0720();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22ba6d0() {
   double input = input0x22ba6d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22b0760() {
   double input = 0.295196;
   input += synapse0x22affd0();
   input += synapse0x22b0010();
   input += synapse0x22b0050();
   input += synapse0x22b0090();
   input += synapse0x22b0a10();
   input += synapse0x22bcd60();
   input += synapse0x22bcda0();
   input += synapse0x22bcde0();
   input += synapse0x22bce20();
   input += synapse0x22bce60();
   input += synapse0x22bcea0();
   input += synapse0x22bcee0();
   input += synapse0x22bcf20();
   input += synapse0x22bcf60();
   input += synapse0x22bcfa0();
   input += synapse0x22bcfe0();
   input += synapse0x22b08f0();
   input += synapse0x22b0930();
   input += synapse0x22bd130();
   input += synapse0x22bd170();
   input += synapse0x22bd1b0();
   input += synapse0x22bd1f0();
   input += synapse0x22bd230();
   input += synapse0x22bd270();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22b0760() {
   double input = input0x22b0760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22bd2b0() {
   double input = 0.623924;
   input += synapse0x22bd5f0();
   input += synapse0x22bd630();
   input += synapse0x22bd670();
   input += synapse0x22bd6b0();
   input += synapse0x22bd6f0();
   input += synapse0x22bd730();
   input += synapse0x22bd770();
   input += synapse0x22bd7b0();
   input += synapse0x22bd7f0();
   input += synapse0x22bd830();
   input += synapse0x22bd870();
   input += synapse0x22bd8b0();
   input += synapse0x22bd8f0();
   input += synapse0x22bd930();
   input += synapse0x22bd970();
   input += synapse0x22bd9b0();
   input += synapse0x22bd440();
   input += synapse0x22bd480();
   input += synapse0x22bdb00();
   input += synapse0x22bdb40();
   input += synapse0x22bdb80();
   input += synapse0x22bdbc0();
   input += synapse0x22bdc00();
   input += synapse0x22bdc40();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22bd2b0() {
   double input = input0x22bd2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22bdc80() {
   double input = -0.454976;
   input += synapse0x22bdfc0();
   input += synapse0x22be000();
   input += synapse0x22be040();
   input += synapse0x22be080();
   input += synapse0x22be0c0();
   input += synapse0x22be100();
   input += synapse0x22be140();
   input += synapse0x22be180();
   input += synapse0x22be1c0();
   input += synapse0x22be200();
   input += synapse0x22be240();
   input += synapse0x22be280();
   input += synapse0x22be2c0();
   input += synapse0x22be300();
   input += synapse0x22be340();
   input += synapse0x22be380();
   input += synapse0x22bde10();
   input += synapse0x22bde50();
   input += synapse0x22be4d0();
   input += synapse0x22be510();
   input += synapse0x22be550();
   input += synapse0x22be590();
   input += synapse0x22be5d0();
   input += synapse0x22be610();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22bdc80() {
   double input = input0x22bdc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22be650() {
   double input = 0.476212;
   input += synapse0x22be990();
   input += synapse0x22be9d0();
   input += synapse0x22bea10();
   input += synapse0x22bea50();
   input += synapse0x22bea90();
   input += synapse0x22bead0();
   input += synapse0x22beb10();
   input += synapse0x22beb50();
   input += synapse0x22beb90();
   input += synapse0x22bebd0();
   input += synapse0x22bec10();
   input += synapse0x22bec50();
   input += synapse0x22bec90();
   input += synapse0x22becd0();
   input += synapse0x22bed10();
   input += synapse0x22bed50();
   input += synapse0x22be7e0();
   input += synapse0x22be820();
   input += synapse0x22beea0();
   input += synapse0x22beee0();
   input += synapse0x22bef20();
   input += synapse0x22bef60();
   input += synapse0x22befa0();
   input += synapse0x22befe0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22be650() {
   double input = input0x22be650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22bf020() {
   double input = 0.0391913;
   input += synapse0x22bf360();
   input += synapse0x22bf3a0();
   input += synapse0x22bf3e0();
   input += synapse0x22bf420();
   input += synapse0x22bf460();
   input += synapse0x22bf4a0();
   input += synapse0x22bf4e0();
   input += synapse0x22bf520();
   input += synapse0x22bf560();
   input += synapse0x22bf5a0();
   input += synapse0x22bf5e0();
   input += synapse0x22bf620();
   input += synapse0x22bf660();
   input += synapse0x22bf6a0();
   input += synapse0x22bf6e0();
   input += synapse0x22bf720();
   input += synapse0x22bf1b0();
   input += synapse0x22bf1f0();
   input += synapse0x22bf870();
   input += synapse0x22bf8b0();
   input += synapse0x22bf8f0();
   input += synapse0x22bf930();
   input += synapse0x22bf970();
   input += synapse0x22bf9b0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22bf020() {
   double input = input0x22bf020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22bf9f0() {
   double input = 1.90818;
   input += synapse0x22bfd30();
   input += synapse0x22bfd70();
   input += synapse0x22bfdb0();
   input += synapse0x22bfdf0();
   input += synapse0x22bfe30();
   input += synapse0x22bfe70();
   input += synapse0x22bfeb0();
   input += synapse0x22bfef0();
   input += synapse0x22bff30();
   input += synapse0x22bff70();
   input += synapse0x22bffb0();
   input += synapse0x22bfff0();
   input += synapse0x22c0030();
   input += synapse0x22c0070();
   input += synapse0x22c00b0();
   input += synapse0x22c00f0();
   input += synapse0x22bfb80();
   input += synapse0x22bfbc0();
   input += synapse0x22c0240();
   input += synapse0x22c0280();
   input += synapse0x22c02c0();
   input += synapse0x22c0300();
   input += synapse0x22c0340();
   input += synapse0x22c0380();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22bf9f0() {
   double input = input0x22bf9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22c03c0() {
   double input = -1.09086;
   input += synapse0x22c0700();
   input += synapse0x22c0740();
   input += synapse0x22c0780();
   input += synapse0x22c07c0();
   input += synapse0x22c0800();
   input += synapse0x22c0840();
   input += synapse0x22c0880();
   input += synapse0x22c08c0();
   input += synapse0x22c0900();
   input += synapse0x22c0940();
   input += synapse0x22c0980();
   input += synapse0x22c09c0();
   input += synapse0x22c0a00();
   input += synapse0x22c0a40();
   input += synapse0x22c0a80();
   input += synapse0x22c0ac0();
   input += synapse0x22c0550();
   input += synapse0x22c0590();
   input += synapse0x22c0c10();
   input += synapse0x22c0c50();
   input += synapse0x22c0c90();
   input += synapse0x22c0cd0();
   input += synapse0x22c0d10();
   input += synapse0x22c0d50();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22c03c0() {
   double input = input0x22c03c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22c0d90() {
   double input = -0.290411;
   input += synapse0x22c10d0();
   input += synapse0x22c1110();
   input += synapse0x22c1150();
   input += synapse0x22c1190();
   input += synapse0x22c11d0();
   input += synapse0x22c1210();
   input += synapse0x22c1250();
   input += synapse0x22c1290();
   input += synapse0x22c12d0();
   input += synapse0x22c1310();
   input += synapse0x22c1350();
   input += synapse0x22c1390();
   input += synapse0x22c13d0();
   input += synapse0x22c1410();
   input += synapse0x22c1450();
   input += synapse0x22c1490();
   input += synapse0x22c0f20();
   input += synapse0x22c0f60();
   input += synapse0x22c15e0();
   input += synapse0x22c1620();
   input += synapse0x22c1660();
   input += synapse0x22c16a0();
   input += synapse0x22c16e0();
   input += synapse0x22c1720();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22c0d90() {
   double input = input0x22c0d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22c1760() {
   double input = 1.12504;
   input += synapse0x22aa1d0();
   input += synapse0x22aa210();
   input += synapse0x22aa250();
   input += synapse0x22aa290();
   input += synapse0x22aa2d0();
   input += synapse0x22aa310();
   input += synapse0x22aa350();
   input += synapse0x22aa390();
   input += synapse0x22c1eb0();
   input += synapse0x22c1ef0();
   input += synapse0x22c1f30();
   input += synapse0x22c1f70();
   input += synapse0x22c1fb0();
   input += synapse0x22c1ff0();
   input += synapse0x22c2030();
   input += synapse0x22c2070();
   input += synapse0x22c18f0();
   input += synapse0x22c1930();
   input += synapse0x22c21c0();
   input += synapse0x22c2200();
   input += synapse0x22c2240();
   input += synapse0x22c2280();
   input += synapse0x22c22c0();
   input += synapse0x22c2300();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22c1760() {
   double input = input0x22c1760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22c2340() {
   double input = 2.33478;
   input += synapse0x22c2680();
   input += synapse0x22c26c0();
   input += synapse0x22c2700();
   input += synapse0x22c2740();
   input += synapse0x22c2780();
   input += synapse0x22c27c0();
   input += synapse0x22c2800();
   input += synapse0x22c2840();
   input += synapse0x22c2880();
   input += synapse0x22c28c0();
   input += synapse0x22c2900();
   input += synapse0x22c2940();
   input += synapse0x22c2980();
   input += synapse0x22c29c0();
   input += synapse0x22c2a00();
   input += synapse0x22c2a40();
   input += synapse0x22c24d0();
   input += synapse0x22c2510();
   input += synapse0x22c2b90();
   input += synapse0x22c2bd0();
   input += synapse0x22c2c10();
   input += synapse0x22c2c50();
   input += synapse0x22c2c90();
   input += synapse0x22c2cd0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22c2340() {
   double input = input0x22c2340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22c2d10() {
   double input = 1.02915;
   input += synapse0x22c3050();
   input += synapse0x22c3090();
   input += synapse0x22c30d0();
   input += synapse0x22c3110();
   input += synapse0x22c3150();
   input += synapse0x22c3190();
   input += synapse0x22c31d0();
   input += synapse0x22c3210();
   input += synapse0x22c3250();
   input += synapse0x22c3290();
   input += synapse0x22c32d0();
   input += synapse0x22c3310();
   input += synapse0x22c3350();
   input += synapse0x22c3390();
   input += synapse0x22c33d0();
   input += synapse0x22c3410();
   input += synapse0x22c2ea0();
   input += synapse0x22c2ee0();
   input += synapse0x22b3a10();
   input += synapse0x22b3a50();
   input += synapse0x22b3a90();
   input += synapse0x22b3ad0();
   input += synapse0x22b3b10();
   input += synapse0x22b3b50();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22c2d10() {
   double input = input0x22c2d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22b3b90() {
   double input = -0.208439;
   input += synapse0x22b3ed0();
   input += synapse0x22b3f10();
   input += synapse0x22b3f50();
   input += synapse0x22b3f90();
   input += synapse0x22b3fd0();
   input += synapse0x22b4010();
   input += synapse0x22b4050();
   input += synapse0x22b4090();
   input += synapse0x22b40d0();
   input += synapse0x22b4110();
   input += synapse0x22b4150();
   input += synapse0x22b4190();
   input += synapse0x22b41d0();
   input += synapse0x22b4210();
   input += synapse0x22b4250();
   input += synapse0x22b4290();
   input += synapse0x22b3d20();
   input += synapse0x22b3d60();
   input += synapse0x22b43e0();
   input += synapse0x22b4420();
   input += synapse0x22b4460();
   input += synapse0x22b44a0();
   input += synapse0x22b44e0();
   input += synapse0x22b4520();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22b3b90() {
   double input = input0x22b3b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22b4560() {
   double input = -0.297738;
   input += synapse0x22b48a0();
   input += synapse0x22b48e0();
   input += synapse0x22b4920();
   input += synapse0x22b4960();
   input += synapse0x22b49a0();
   input += synapse0x22b49e0();
   input += synapse0x22b4a20();
   input += synapse0x22b4a60();
   input += synapse0x22b4aa0();
   input += synapse0x22b4ae0();
   input += synapse0x22b4b20();
   input += synapse0x22b4b60();
   input += synapse0x22b4ba0();
   input += synapse0x22b4be0();
   input += synapse0x22b4c20();
   input += synapse0x22b4c60();
   input += synapse0x22b46f0();
   input += synapse0x22b4730();
   input += synapse0x22b4db0();
   input += synapse0x22b4df0();
   input += synapse0x22b4e30();
   input += synapse0x22b4e70();
   input += synapse0x22b4eb0();
   input += synapse0x22b4ef0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22b4560() {
   double input = input0x22b4560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22b4f30() {
   double input = -4.47311;
   input += synapse0x22b5270();
   input += synapse0x22b52b0();
   input += synapse0x22b52f0();
   input += synapse0x22b5330();
   input += synapse0x22b5370();
   input += synapse0x22b53b0();
   input += synapse0x22b53f0();
   input += synapse0x22b5430();
   input += synapse0x22b5470();
   input += synapse0x22b54b0();
   input += synapse0x22b54f0();
   input += synapse0x22b5530();
   input += synapse0x22b5570();
   input += synapse0x22b55b0();
   input += synapse0x22b55f0();
   input += synapse0x22b5630();
   input += synapse0x22b50c0();
   input += synapse0x22b5100();
   input += synapse0x22b5780();
   input += synapse0x22b57c0();
   input += synapse0x22b5800();
   input += synapse0x22b5840();
   input += synapse0x22b5880();
   input += synapse0x22b58c0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22b4f30() {
   double input = input0x22b4f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22c7570() {
   double input = -0.500783;
   input += synapse0x22c7790();
   input += synapse0x22c77d0();
   input += synapse0x22c7810();
   input += synapse0x22c7850();
   input += synapse0x22c7890();
   input += synapse0x22c78d0();
   input += synapse0x22c7910();
   input += synapse0x22c7950();
   input += synapse0x22c7990();
   input += synapse0x22c79d0();
   input += synapse0x22c7a10();
   input += synapse0x22c7a50();
   input += synapse0x22c7a90();
   input += synapse0x22c7ad0();
   input += synapse0x22c7b10();
   input += synapse0x22c7b50();
   input += synapse0x22b5900();
   input += synapse0x22b5940();
   input += synapse0x22c7ca0();
   input += synapse0x22c7ce0();
   input += synapse0x22c7d20();
   input += synapse0x22c7d60();
   input += synapse0x22c7da0();
   input += synapse0x22c7de0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22c7570() {
   double input = input0x22c7570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22c7e20() {
   double input = -0.135573;
   input += synapse0x22c8160();
   input += synapse0x22c81a0();
   input += synapse0x22c81e0();
   input += synapse0x22c8220();
   input += synapse0x22c8260();
   input += synapse0x22c82a0();
   input += synapse0x22c82e0();
   input += synapse0x22c8320();
   input += synapse0x22c8360();
   input += synapse0x22c83a0();
   input += synapse0x22c83e0();
   input += synapse0x22c8420();
   input += synapse0x22c8460();
   input += synapse0x22c84a0();
   input += synapse0x22c84e0();
   input += synapse0x22c8520();
   input += synapse0x22c7fb0();
   input += synapse0x22c7ff0();
   input += synapse0x22c8670();
   input += synapse0x22c86b0();
   input += synapse0x22c86f0();
   input += synapse0x22c8730();
   input += synapse0x22c8770();
   input += synapse0x22c87b0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22c7e20() {
   double input = input0x22c7e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22c87f0() {
   double input = -2.46792;
   input += synapse0x22c8b30();
   input += synapse0x22c8b70();
   input += synapse0x22c8bb0();
   input += synapse0x22c8bf0();
   input += synapse0x22c8c30();
   input += synapse0x22c8c70();
   input += synapse0x22c8cb0();
   input += synapse0x22c8cf0();
   input += synapse0x22c8d30();
   input += synapse0x22c8d70();
   input += synapse0x22c8db0();
   input += synapse0x22c8df0();
   input += synapse0x22c8e30();
   input += synapse0x22c8e70();
   input += synapse0x22c8eb0();
   input += synapse0x22c8ef0();
   input += synapse0x22c8980();
   input += synapse0x22c89c0();
   input += synapse0x22c9040();
   input += synapse0x22c9080();
   input += synapse0x22c90c0();
   input += synapse0x22c9100();
   input += synapse0x22c9140();
   input += synapse0x22c9180();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22c87f0() {
   double input = input0x22c87f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22c91c0() {
   double input = -0.641926;
   input += synapse0x22c9500();
   input += synapse0x22c9540();
   input += synapse0x22c9580();
   input += synapse0x22c95c0();
   input += synapse0x22c9600();
   input += synapse0x22c9640();
   input += synapse0x22c9680();
   input += synapse0x22c96c0();
   input += synapse0x22c9700();
   input += synapse0x22c9740();
   input += synapse0x22c9780();
   input += synapse0x22c97c0();
   input += synapse0x22c9800();
   input += synapse0x22c9840();
   input += synapse0x22c9880();
   input += synapse0x22c98c0();
   input += synapse0x22c9350();
   input += synapse0x22c9390();
   input += synapse0x22c9a10();
   input += synapse0x22c9a50();
   input += synapse0x22c9a90();
   input += synapse0x22c9ad0();
   input += synapse0x22c9b10();
   input += synapse0x22c9b50();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22c91c0() {
   double input = input0x22c91c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22d03c0() {
   double input = -0.962272;
   input += synapse0x22a4fa0();
   input += synapse0x22a4fe0();
   input += synapse0x22a6500();
   input += synapse0x22a6540();
   input += synapse0x22a7fd0();
   input += synapse0x22a8010();
   input += synapse0x22a8da0();
   input += synapse0x22a8de0();
   input += synapse0x22a9770();
   input += synapse0x22a97b0();
   input += synapse0x22aa140();
   input += synapse0x22aa180();
   input += synapse0x22aac20();
   input += synapse0x22aac60();
   input += synapse0x22ab5f0();
   input += synapse0x22ab630();
   input += synapse0x22a86d0();
   input += synapse0x22a8710();
   input += synapse0x22ad1a0();
   input += synapse0x22ad1e0();
   input += synapse0x22adb70();
   input += synapse0x22adbb0();
   input += synapse0x22ae540();
   input += synapse0x22ae580();
   input += synapse0x22aef10();
   input += synapse0x22aef50();
   input += synapse0x22a1fa0();
   input += synapse0x22a1fe0();
   input += synapse0x22b1000();
   input += synapse0x22b1040();
   input += synapse0x22b19d0();
   input += synapse0x22b1a10();
   input += synapse0x22b23a0();
   input += synapse0x22b23e0();
   input += synapse0x22b2d70();
   input += synapse0x22b2db0();
   input += synapse0x22b3740();
   input += synapse0x22b3780();
   input += synapse0x22ac290();
   input += synapse0x22ac2d0();
   input += synapse0x22b5b40();
   input += synapse0x22b5b80();
   input += synapse0x22b64d0();
   input += synapse0x22b6510();
   input += synapse0x22b6ea0();
   input += synapse0x22b6ee0();
   input += synapse0x22b7870();
   input += synapse0x22b78b0();
   input += synapse0x22b8240();
   input += synapse0x22b8280();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22d03c0() {
   double input = input0x22d03c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22d0760() {
   double input = -0.69392;
   input += synapse0x22ba980();
   input += synapse0x22ba9c0();
   input += synapse0x22aff40();
   input += synapse0x22aff80();
   input += synapse0x22bd560();
   input += synapse0x22bd5a0();
   input += synapse0x22bdf30();
   input += synapse0x22bdf70();
   input += synapse0x22be900();
   input += synapse0x22be940();
   input += synapse0x22bf2d0();
   input += synapse0x22bf310();
   input += synapse0x22bfca0();
   input += synapse0x22bfce0();
   input += synapse0x22c0670();
   input += synapse0x22c06b0();
   input += synapse0x22c1040();
   input += synapse0x22c1080();
   input += synapse0x22c1a10();
   input += synapse0x22c1a50();
   input += synapse0x22c25f0();
   input += synapse0x22c2630();
   input += synapse0x22c2fc0();
   input += synapse0x22c3000();
   input += synapse0x22b3e40();
   input += synapse0x22b3e80();
   input += synapse0x22b4810();
   input += synapse0x22b4850();
   input += synapse0x22b51e0();
   input += synapse0x22b5220();
   input += synapse0x22c7700();
   input += synapse0x22c7740();
   input += synapse0x22c80d0();
   input += synapse0x22c8110();
   input += synapse0x22c8aa0();
   input += synapse0x22c8ae0();
   input += synapse0x22c9470();
   input += synapse0x22c94b0();
   input += synapse0x22a4400();
   input += synapse0x22a4440();
   input += synapse0x22b8c10();
   input += synapse0x22b8c50();
   input += synapse0x22c9b90();
   input += synapse0x22c9bd0();
   input += synapse0x22c9c10();
   input += synapse0x22c9c50();
   input += synapse0x22d0b00();
   input += synapse0x22d0b40();
   input += synapse0x22d0b80();
   input += synapse0x22d0bc0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22d0760() {
   double input = input0x22d0760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22d0c00() {
   double input = -0.154596;
   input += synapse0x22d0f40();
   input += synapse0x22d0f80();
   input += synapse0x22d0fc0();
   input += synapse0x22d1000();
   input += synapse0x22d1040();
   input += synapse0x22d1080();
   input += synapse0x22d10c0();
   input += synapse0x22d1100();
   input += synapse0x22d1140();
   input += synapse0x22d1180();
   input += synapse0x22d11c0();
   input += synapse0x22d1200();
   input += synapse0x22d1240();
   input += synapse0x22d1280();
   input += synapse0x22d12c0();
   input += synapse0x22d1300();
   input += synapse0x22d0d90();
   input += synapse0x22d0dd0();
   input += synapse0x22d1450();
   input += synapse0x22d1490();
   input += synapse0x22d14d0();
   input += synapse0x22d1510();
   input += synapse0x22d1550();
   input += synapse0x22d1590();
   input += synapse0x22d15d0();
   input += synapse0x22d1610();
   input += synapse0x22d1650();
   input += synapse0x22d1690();
   input += synapse0x22d16d0();
   input += synapse0x22d1710();
   input += synapse0x22d1750();
   input += synapse0x22d1790();
   input += synapse0x22d1340();
   input += synapse0x22d1380();
   input += synapse0x22d13c0();
   input += synapse0x22d1400();
   input += synapse0x22d19e0();
   input += synapse0x22d1a20();
   input += synapse0x22d1a60();
   input += synapse0x22d1aa0();
   input += synapse0x22d1ae0();
   input += synapse0x22d1b20();
   input += synapse0x22d1b60();
   input += synapse0x22d1ba0();
   input += synapse0x22d1be0();
   input += synapse0x22d1c20();
   input += synapse0x22d1c60();
   input += synapse0x22d1ca0();
   input += synapse0x22d1ce0();
   input += synapse0x22d1d20();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22d0c00() {
   double input = input0x22d0c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22d1d60() {
   double input = -0.187211;
   input += synapse0x22d20a0();
   input += synapse0x22d20e0();
   input += synapse0x22d2120();
   input += synapse0x22d2160();
   input += synapse0x22d21a0();
   input += synapse0x22d21e0();
   input += synapse0x22d2220();
   input += synapse0x22d2260();
   input += synapse0x22d22a0();
   input += synapse0x22d22e0();
   input += synapse0x22d2320();
   input += synapse0x22d2360();
   input += synapse0x22d23a0();
   input += synapse0x22d23e0();
   input += synapse0x22d2420();
   input += synapse0x22d2460();
   input += synapse0x22d1ef0();
   input += synapse0x22d1f30();
   input += synapse0x22d25b0();
   input += synapse0x22d25f0();
   input += synapse0x22d2630();
   input += synapse0x22d2670();
   input += synapse0x22d26b0();
   input += synapse0x22d26f0();
   input += synapse0x22d2730();
   input += synapse0x22d2770();
   input += synapse0x22d27b0();
   input += synapse0x22d27f0();
   input += synapse0x22d2830();
   input += synapse0x22d2870();
   input += synapse0x22d28b0();
   input += synapse0x22d28f0();
   input += synapse0x22d24a0();
   input += synapse0x22d24e0();
   input += synapse0x22d2520();
   input += synapse0x22d2560();
   input += synapse0x22d2b40();
   input += synapse0x22d2b80();
   input += synapse0x22d2bc0();
   input += synapse0x22d2c00();
   input += synapse0x22d2c40();
   input += synapse0x22d2c80();
   input += synapse0x22d2cc0();
   input += synapse0x22d2d00();
   input += synapse0x22d2d40();
   input += synapse0x22d2d80();
   input += synapse0x22d2dc0();
   input += synapse0x22d2e00();
   input += synapse0x22d2e40();
   input += synapse0x22d2e80();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22d1d60() {
   double input = input0x22d1d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22d2ec0() {
   double input = -0.780588;
   input += synapse0x22d3200();
   input += synapse0x22d3240();
   input += synapse0x22d3280();
   input += synapse0x22d32c0();
   input += synapse0x22d3300();
   input += synapse0x22d3340();
   input += synapse0x22d3380();
   input += synapse0x22d33c0();
   input += synapse0x22d3400();
   input += synapse0x22d3440();
   input += synapse0x22d3480();
   input += synapse0x22d34c0();
   input += synapse0x22d3500();
   input += synapse0x22d3540();
   input += synapse0x22d3580();
   input += synapse0x22d35c0();
   input += synapse0x22d3050();
   input += synapse0x22d3090();
   input += synapse0x22d3710();
   input += synapse0x22d3750();
   input += synapse0x22d3790();
   input += synapse0x22d37d0();
   input += synapse0x22d3810();
   input += synapse0x22d3850();
   input += synapse0x22d3890();
   input += synapse0x22d38d0();
   input += synapse0x22d3910();
   input += synapse0x22d3950();
   input += synapse0x22d3990();
   input += synapse0x22d39d0();
   input += synapse0x22d3a10();
   input += synapse0x22d3a50();
   input += synapse0x22d3600();
   input += synapse0x22d3640();
   input += synapse0x22d3680();
   input += synapse0x22d36c0();
   input += synapse0x22d3ca0();
   input += synapse0x22d3ce0();
   input += synapse0x22d3d20();
   input += synapse0x22d3d60();
   input += synapse0x22d3da0();
   input += synapse0x22d3de0();
   input += synapse0x22d3e20();
   input += synapse0x22d3e60();
   input += synapse0x22d3ea0();
   input += synapse0x22d3ee0();
   input += synapse0x22d3f20();
   input += synapse0x22d3f60();
   input += synapse0x22d3fa0();
   input += synapse0x22d3fe0();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22d2ec0() {
   double input = input0x22d2ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuL::input0x22d4020() {
   double input = 5.01324;
   input += synapse0x22d4240();
   input += synapse0x22d4280();
   input += synapse0x22d42c0();
   input += synapse0x22d4300();
   input += synapse0x22d4340();
   return input;
}

double NNfunction_sb_dLuL::neuron0x22d4020() {
   double input = input0x22d4020();
   return (input * 1)+0;
}

double NNfunction_sb_dLuL::synapse0x22a4490() {
   return (neuron0x229f090()*0.0269907);
}

double NNfunction_sb_dLuL::synapse0x22a44d0() {
   return (neuron0x229f340()*-0.00940972);
}

double NNfunction_sb_dLuL::synapse0x22a4510() {
   return (neuron0x229f680()*1.39668);
}

double NNfunction_sb_dLuL::synapse0x22a4550() {
   return (neuron0x229f9c0()*0.206403);
}

double NNfunction_sb_dLuL::synapse0x22a4590() {
   return (neuron0x229fd00()*-0.0717868);
}

double NNfunction_sb_dLuL::synapse0x22a45d0() {
   return (neuron0x22a0040()*-0.0452185);
}

double NNfunction_sb_dLuL::synapse0x22a4610() {
   return (neuron0x22a0380()*-0.0189583);
}

double NNfunction_sb_dLuL::synapse0x22a4650() {
   return (neuron0x22a06c0()*0.00975283);
}

double NNfunction_sb_dLuL::synapse0x22a4690() {
   return (neuron0x22a0a00()*0.0442941);
}

double NNfunction_sb_dLuL::synapse0x22a46d0() {
   return (neuron0x22a0d40()*0.0386047);
}

double NNfunction_sb_dLuL::synapse0x22a4710() {
   return (neuron0x22a1080()*0.00555668);
}

double NNfunction_sb_dLuL::synapse0x22a4750() {
   return (neuron0x22a13c0()*-0.375272);
}

double NNfunction_sb_dLuL::synapse0x22a4790() {
   return (neuron0x22a1700()*0.0240031);
}

double NNfunction_sb_dLuL::synapse0x22a47d0() {
   return (neuron0x22a1a40()*0.051551);
}

double NNfunction_sb_dLuL::synapse0x22a4810() {
   return (neuron0x22a1d80()*0.096662);
}

double NNfunction_sb_dLuL::synapse0x22a4850() {
   return (neuron0x22a20c0()*-0.0313893);
}

double NNfunction_sb_dLuL::synapse0x22a42e0() {
   return (neuron0x22a2400()*0.0413269);
}

double NNfunction_sb_dLuL::synapse0x22a4320() {
   return (neuron0x22a2960()*-0.0355635);
}

double NNfunction_sb_dLuL::synapse0x205b230() {
   return (neuron0x22a2ca0()*-0.0443899);
}

double NNfunction_sb_dLuL::synapse0x205b270() {
   return (neuron0x22a2fe0()*-0.00851987);
}

double NNfunction_sb_dLuL::synapse0x22a4890() {
   return (neuron0x22a3320()*0.00998126);
}

double NNfunction_sb_dLuL::synapse0x22a48d0() {
   return (neuron0x22a3660()*0.0178345);
}

double NNfunction_sb_dLuL::synapse0x22a4910() {
   return (neuron0x22a39a0()*0.0289048);
}

double NNfunction_sb_dLuL::synapse0x22a4950() {
   return (neuron0x22a3ce0()*-0.0177306);
}

double NNfunction_sb_dLuL::synapse0x22a4cd0() {
   return (neuron0x229f090()*0.767859);
}

double NNfunction_sb_dLuL::synapse0x22a4d10() {
   return (neuron0x229f340()*0.592195);
}

double NNfunction_sb_dLuL::synapse0x22a4d50() {
   return (neuron0x229f680()*-0.628429);
}

double NNfunction_sb_dLuL::synapse0x22a4d90() {
   return (neuron0x229f9c0()*-0.188722);
}

double NNfunction_sb_dLuL::synapse0x22a4dd0() {
   return (neuron0x229fd00()*-0.290228);
}

double NNfunction_sb_dLuL::synapse0x22a4e10() {
   return (neuron0x22a0040()*0.0415964);
}

double NNfunction_sb_dLuL::synapse0x22a4e50() {
   return (neuron0x22a0380()*0.173377);
}

double NNfunction_sb_dLuL::synapse0x22a4e90() {
   return (neuron0x22a06c0()*-0.478691);
}

double NNfunction_sb_dLuL::synapse0x22a4ed0() {
   return (neuron0x22a0a00()*-0.898532);
}

double NNfunction_sb_dLuL::synapse0x205b080() {
   return (neuron0x22a0d40()*0.118581);
}

double NNfunction_sb_dLuL::synapse0x205b0c0() {
   return (neuron0x22a1080()*-0.268722);
}

double NNfunction_sb_dLuL::synapse0x205b100() {
   return (neuron0x22a13c0()*0.16344);
}

double NNfunction_sb_dLuL::synapse0x205b140() {
   return (neuron0x22a1700()*0.529826);
}

double NNfunction_sb_dLuL::synapse0x22a5120() {
   return (neuron0x22a1a40()*-0.407406);
}

double NNfunction_sb_dLuL::synapse0x22a5160() {
   return (neuron0x22a1d80()*1.01711);
}

double NNfunction_sb_dLuL::synapse0x22a51a0() {
   return (neuron0x22a20c0()*0.966181);
}

double NNfunction_sb_dLuL::synapse0x22a4b20() {
   return (neuron0x22a2400()*-0.287957);
}

double NNfunction_sb_dLuL::synapse0x22a4b60() {
   return (neuron0x22a2960()*0.291452);
}

double NNfunction_sb_dLuL::synapse0x22a52f0() {
   return (neuron0x22a2ca0()*0.693178);
}

double NNfunction_sb_dLuL::synapse0x22a5330() {
   return (neuron0x22a2fe0()*-1.10222);
}

double NNfunction_sb_dLuL::synapse0x22a5370() {
   return (neuron0x22a3320()*-1.63936);
}

double NNfunction_sb_dLuL::synapse0x22a53b0() {
   return (neuron0x22a3660()*0.744431);
}

double NNfunction_sb_dLuL::synapse0x22a53f0() {
   return (neuron0x22a39a0()*-0.85987);
}

double NNfunction_sb_dLuL::synapse0x22a5430() {
   return (neuron0x22a3ce0()*0.60322);
}

double NNfunction_sb_dLuL::synapse0x22a57b0() {
   return (neuron0x229f090()*0.758338);
}

double NNfunction_sb_dLuL::synapse0x22a57f0() {
   return (neuron0x229f340()*0.189853);
}

double NNfunction_sb_dLuL::synapse0x22a5830() {
   return (neuron0x229f680()*0.0762143);
}

double NNfunction_sb_dLuL::synapse0x22a5870() {
   return (neuron0x229f9c0()*1.42854);
}

double NNfunction_sb_dLuL::synapse0x22a58b0() {
   return (neuron0x229fd00()*0.369309);
}

double NNfunction_sb_dLuL::synapse0x22a58f0() {
   return (neuron0x22a0040()*-0.622683);
}

double NNfunction_sb_dLuL::synapse0x22a5930() {
   return (neuron0x22a0380()*-0.506878);
}

double NNfunction_sb_dLuL::synapse0x22a5970() {
   return (neuron0x22a06c0()*0.0434596);
}

double NNfunction_sb_dLuL::synapse0x22a59b0() {
   return (neuron0x22a0a00()*0.468393);
}

double NNfunction_sb_dLuL::synapse0x22a59f0() {
   return (neuron0x22a0d40()*-0.0196307);
}

double NNfunction_sb_dLuL::synapse0x22a5a30() {
   return (neuron0x22a1080()*0.300699);
}

double NNfunction_sb_dLuL::synapse0x22a5a70() {
   return (neuron0x22a13c0()*0.239987);
}

double NNfunction_sb_dLuL::synapse0x22a5ab0() {
   return (neuron0x22a1700()*0.0699786);
}

double NNfunction_sb_dLuL::synapse0x22a5af0() {
   return (neuron0x22a1a40()*0.728718);
}

double NNfunction_sb_dLuL::synapse0x22a5b30() {
   return (neuron0x22a1d80()*0.830145);
}

double NNfunction_sb_dLuL::synapse0x22a5b70() {
   return (neuron0x22a20c0()*0.194069);
}

double NNfunction_sb_dLuL::synapse0x22a5600() {
   return (neuron0x22a2400()*0.0449494);
}

double NNfunction_sb_dLuL::synapse0x22a5640() {
   return (neuron0x22a2960()*0.760682);
}

double NNfunction_sb_dLuL::synapse0x2069130() {
   return (neuron0x22a2ca0()*0.189553);
}

double NNfunction_sb_dLuL::synapse0x2069170() {
   return (neuron0x22a2fe0()*-0.62636);
}

double NNfunction_sb_dLuL::synapse0x22a7aa0() {
   return (neuron0x22a3320()*-0.371782);
}

double NNfunction_sb_dLuL::synapse0x22a7ae0() {
   return (neuron0x22a3660()*0.251325);
}

double NNfunction_sb_dLuL::synapse0x229edd0() {
   return (neuron0x22a39a0()*0.129757);
}

double NNfunction_sb_dLuL::synapse0x229ee10() {
   return (neuron0x22a3ce0()*-0.0674649);
}

double NNfunction_sb_dLuL::synapse0x2069a20() {
   return (neuron0x229f090()*0.32542);
}

double NNfunction_sb_dLuL::synapse0x22a5030() {
   return (neuron0x229f340()*0.00597274);
}

double NNfunction_sb_dLuL::synapse0x22a5070() {
   return (neuron0x229f680()*-0.160243);
}

double NNfunction_sb_dLuL::synapse0x22a50b0() {
   return (neuron0x229f9c0()*0.497771);
}

double NNfunction_sb_dLuL::synapse0x22a5cc0() {
   return (neuron0x229fd00()*-0.40069);
}

double NNfunction_sb_dLuL::synapse0x22a5d00() {
   return (neuron0x22a0040()*-0.0814287);
}

double NNfunction_sb_dLuL::synapse0x22a5d40() {
   return (neuron0x22a0380()*0.102802);
}

double NNfunction_sb_dLuL::synapse0x22a5d80() {
   return (neuron0x22a06c0()*-0.299058);
}

double NNfunction_sb_dLuL::synapse0x22a5dc0() {
   return (neuron0x22a0a00()*0.552719);
}

double NNfunction_sb_dLuL::synapse0x22a5e00() {
   return (neuron0x22a0d40()*1.23114);
}

double NNfunction_sb_dLuL::synapse0x22a5e40() {
   return (neuron0x22a1080()*0.487477);
}

double NNfunction_sb_dLuL::synapse0x22a5e80() {
   return (neuron0x22a13c0()*-1.03549);
}

double NNfunction_sb_dLuL::synapse0x22a5ec0() {
   return (neuron0x22a1700()*-0.292387);
}

double NNfunction_sb_dLuL::synapse0x22a5f00() {
   return (neuron0x22a1a40()*0.620275);
}

double NNfunction_sb_dLuL::synapse0x22a5f40() {
   return (neuron0x22a1d80()*-0.518996);
}

double NNfunction_sb_dLuL::synapse0x22a5f80() {
   return (neuron0x22a20c0()*0.837605);
}

double NNfunction_sb_dLuL::synapse0x229ee50() {
   return (neuron0x22a2400()*-0.403357);
}

double NNfunction_sb_dLuL::synapse0x229ee90() {
   return (neuron0x22a2960()*-0.469079);
}

double NNfunction_sb_dLuL::synapse0x22a60d0() {
   return (neuron0x22a2ca0()*0.37975);
}

double NNfunction_sb_dLuL::synapse0x22a6110() {
   return (neuron0x22a2fe0()*0.290735);
}

double NNfunction_sb_dLuL::synapse0x22a6150() {
   return (neuron0x22a3320()*-1.0825);
}

double NNfunction_sb_dLuL::synapse0x22a6190() {
   return (neuron0x22a3660()*0.510754);
}

double NNfunction_sb_dLuL::synapse0x22a61d0() {
   return (neuron0x22a39a0()*-0.130031);
}

double NNfunction_sb_dLuL::synapse0x22a6210() {
   return (neuron0x22a3ce0()*-0.585664);
}

double NNfunction_sb_dLuL::synapse0x22a6590() {
   return (neuron0x229f090()*0.151338);
}

double NNfunction_sb_dLuL::synapse0x22a65d0() {
   return (neuron0x229f340()*-0.764384);
}

double NNfunction_sb_dLuL::synapse0x22a6610() {
   return (neuron0x229f680()*1.45714);
}

double NNfunction_sb_dLuL::synapse0x22a6650() {
   return (neuron0x229f9c0()*0.12174);
}

double NNfunction_sb_dLuL::synapse0x22a6690() {
   return (neuron0x229fd00()*0.343653);
}

double NNfunction_sb_dLuL::synapse0x22a66d0() {
   return (neuron0x22a0040()*-0.0337103);
}

double NNfunction_sb_dLuL::synapse0x22a6710() {
   return (neuron0x22a0380()*0.0877247);
}

double NNfunction_sb_dLuL::synapse0x22a6750() {
   return (neuron0x22a06c0()*0.556373);
}

double NNfunction_sb_dLuL::synapse0x22a6790() {
   return (neuron0x22a0a00()*0.0565087);
}

double NNfunction_sb_dLuL::synapse0x22a67d0() {
   return (neuron0x22a0d40()*-0.616517);
}

double NNfunction_sb_dLuL::synapse0x22a6810() {
   return (neuron0x22a1080()*-0.0265894);
}

double NNfunction_sb_dLuL::synapse0x22a6850() {
   return (neuron0x22a13c0()*1.18066);
}

double NNfunction_sb_dLuL::synapse0x22a6890() {
   return (neuron0x22a1700()*0.0225074);
}

double NNfunction_sb_dLuL::synapse0x22a68d0() {
   return (neuron0x22a1a40()*-0.383947);
}

double NNfunction_sb_dLuL::synapse0x22a6910() {
   return (neuron0x22a1d80()*-0.129941);
}

double NNfunction_sb_dLuL::synapse0x22a6950() {
   return (neuron0x22a20c0()*0.715108);
}

double NNfunction_sb_dLuL::synapse0x22a6aa0() {
   return (neuron0x22a2400()*0.0794215);
}

double NNfunction_sb_dLuL::synapse0x22a63e0() {
   return (neuron0x22a2960()*0.135487);
}

double NNfunction_sb_dLuL::synapse0x22a6420() {
   return (neuron0x22a2ca0()*0.0797253);
}

double NNfunction_sb_dLuL::synapse0x22a7be0() {
   return (neuron0x22a2fe0()*0.403719);
}

double NNfunction_sb_dLuL::synapse0x22a7c20() {
   return (neuron0x22a3320()*-0.36071);
}

double NNfunction_sb_dLuL::synapse0x22a7c60() {
   return (neuron0x22a3660()*-0.172511);
}

double NNfunction_sb_dLuL::synapse0x22a7ca0() {
   return (neuron0x22a39a0()*-0.376427);
}

double NNfunction_sb_dLuL::synapse0x22a7ce0() {
   return (neuron0x22a3ce0()*1.0662);
}

double NNfunction_sb_dLuL::synapse0x22a8060() {
   return (neuron0x229f090()*0.0377278);
}

double NNfunction_sb_dLuL::synapse0x22a80a0() {
   return (neuron0x229f340()*0.0113448);
}

double NNfunction_sb_dLuL::synapse0x22a80e0() {
   return (neuron0x229f680()*-0.0515659);
}

double NNfunction_sb_dLuL::synapse0x22a8120() {
   return (neuron0x229f9c0()*0.732804);
}

double NNfunction_sb_dLuL::synapse0x22a8160() {
   return (neuron0x229fd00()*0.407382);
}

double NNfunction_sb_dLuL::synapse0x22a81a0() {
   return (neuron0x22a0040()*0.769701);
}

double NNfunction_sb_dLuL::synapse0x22a81e0() {
   return (neuron0x22a0380()*0.419459);
}

double NNfunction_sb_dLuL::synapse0x22a8220() {
   return (neuron0x22a06c0()*-0.141704);
}

double NNfunction_sb_dLuL::synapse0x22a8260() {
   return (neuron0x22a0a00()*-0.660838);
}

double NNfunction_sb_dLuL::synapse0x2069480() {
   return (neuron0x22a0d40()*-0.38509);
}

double NNfunction_sb_dLuL::synapse0x20694c0() {
   return (neuron0x22a1080()*-0.442063);
}

double NNfunction_sb_dLuL::synapse0x2069500() {
   return (neuron0x22a13c0()*-1.18574);
}

double NNfunction_sb_dLuL::synapse0x2069540() {
   return (neuron0x22a1700()*0.997113);
}

double NNfunction_sb_dLuL::synapse0x2069580() {
   return (neuron0x22a1a40()*0.926717);
}

double NNfunction_sb_dLuL::synapse0x20695c0() {
   return (neuron0x22a1d80()*-0.384009);
}

double NNfunction_sb_dLuL::synapse0x2069600() {
   return (neuron0x22a20c0()*0.0239657);
}

double NNfunction_sb_dLuL::synapse0x22a7eb0() {
   return (neuron0x22a2400()*-0.55376);
}

double NNfunction_sb_dLuL::synapse0x22a7ef0() {
   return (neuron0x22a2960()*0.602538);
}

double NNfunction_sb_dLuL::synapse0x2069750() {
   return (neuron0x22a2ca0()*-0.374174);
}

double NNfunction_sb_dLuL::synapse0x2069790() {
   return (neuron0x22a2fe0()*-0.49075);
}

double NNfunction_sb_dLuL::synapse0x20697d0() {
   return (neuron0x22a3320()*-0.0764893);
}

double NNfunction_sb_dLuL::synapse0x2069810() {
   return (neuron0x22a3660()*-0.933752);
}

double NNfunction_sb_dLuL::synapse0x2069850() {
   return (neuron0x22a39a0()*0.788616);
}

double NNfunction_sb_dLuL::synapse0x22a8ab0() {
   return (neuron0x22a3ce0()*-0.384247);
}

double NNfunction_sb_dLuL::synapse0x22a8e30() {
   return (neuron0x229f090()*1.78921);
}

double NNfunction_sb_dLuL::synapse0x22a8e70() {
   return (neuron0x229f340()*-0.628771);
}

double NNfunction_sb_dLuL::synapse0x22a8eb0() {
   return (neuron0x229f680()*0.177081);
}

double NNfunction_sb_dLuL::synapse0x22a8ef0() {
   return (neuron0x229f9c0()*0.121191);
}

double NNfunction_sb_dLuL::synapse0x22a8f30() {
   return (neuron0x229fd00()*-0.0739856);
}

double NNfunction_sb_dLuL::synapse0x22a8f70() {
   return (neuron0x22a0040()*0.481044);
}

double NNfunction_sb_dLuL::synapse0x22a8fb0() {
   return (neuron0x22a0380()*0.379033);
}

double NNfunction_sb_dLuL::synapse0x22a8ff0() {
   return (neuron0x22a06c0()*-0.215276);
}

double NNfunction_sb_dLuL::synapse0x22a9030() {
   return (neuron0x22a0a00()*-0.0687064);
}

double NNfunction_sb_dLuL::synapse0x22a9070() {
   return (neuron0x22a0d40()*0.412491);
}

double NNfunction_sb_dLuL::synapse0x22a90b0() {
   return (neuron0x22a1080()*-0.622601);
}

double NNfunction_sb_dLuL::synapse0x22a90f0() {
   return (neuron0x22a13c0()*0.691118);
}

double NNfunction_sb_dLuL::synapse0x22a9130() {
   return (neuron0x22a1700()*0.0654241);
}

double NNfunction_sb_dLuL::synapse0x22a9170() {
   return (neuron0x22a1a40()*-0.509365);
}

double NNfunction_sb_dLuL::synapse0x22a91b0() {
   return (neuron0x22a1d80()*-0.203334);
}

double NNfunction_sb_dLuL::synapse0x22a91f0() {
   return (neuron0x22a20c0()*-0.0110406);
}

double NNfunction_sb_dLuL::synapse0x22a8c80() {
   return (neuron0x22a2400()*-0.11166);
}

double NNfunction_sb_dLuL::synapse0x22a8cc0() {
   return (neuron0x22a2960()*0.773897);
}

double NNfunction_sb_dLuL::synapse0x22a9340() {
   return (neuron0x22a2ca0()*0.505345);
}

double NNfunction_sb_dLuL::synapse0x22a9380() {
   return (neuron0x22a2fe0()*0.918343);
}

double NNfunction_sb_dLuL::synapse0x22a93c0() {
   return (neuron0x22a3320()*0.0540725);
}

double NNfunction_sb_dLuL::synapse0x22a9400() {
   return (neuron0x22a3660()*-0.158127);
}

double NNfunction_sb_dLuL::synapse0x22a9440() {
   return (neuron0x22a39a0()*-0.00476657);
}

double NNfunction_sb_dLuL::synapse0x22a9480() {
   return (neuron0x22a3ce0()*-0.583001);
}

double NNfunction_sb_dLuL::synapse0x22a9800() {
   return (neuron0x229f090()*0.0398417);
}

double NNfunction_sb_dLuL::synapse0x22a9840() {
   return (neuron0x229f340()*0.0758672);
}

double NNfunction_sb_dLuL::synapse0x22a9880() {
   return (neuron0x229f680()*-0.0179237);
}

double NNfunction_sb_dLuL::synapse0x22a98c0() {
   return (neuron0x229f9c0()*0.749351);
}

double NNfunction_sb_dLuL::synapse0x22a9900() {
   return (neuron0x229fd00()*0.0445283);
}

double NNfunction_sb_dLuL::synapse0x22a9940() {
   return (neuron0x22a0040()*0.00509944);
}

double NNfunction_sb_dLuL::synapse0x22a9980() {
   return (neuron0x22a0380()*-0.015866);
}

double NNfunction_sb_dLuL::synapse0x22a99c0() {
   return (neuron0x22a06c0()*-0.0357536);
}

double NNfunction_sb_dLuL::synapse0x22a9a00() {
   return (neuron0x22a0a00()*0.0103498);
}

double NNfunction_sb_dLuL::synapse0x22a9a40() {
   return (neuron0x22a0d40()*-0.0454908);
}

double NNfunction_sb_dLuL::synapse0x22a9a80() {
   return (neuron0x22a1080()*-0.00404492);
}

double NNfunction_sb_dLuL::synapse0x22a9ac0() {
   return (neuron0x22a13c0()*-0.053083);
}

double NNfunction_sb_dLuL::synapse0x22a9b00() {
   return (neuron0x22a1700()*0.219402);
}

double NNfunction_sb_dLuL::synapse0x22a9b40() {
   return (neuron0x22a1a40()*-0.0770819);
}

double NNfunction_sb_dLuL::synapse0x22a9b80() {
   return (neuron0x22a1d80()*0.203903);
}

double NNfunction_sb_dLuL::synapse0x22a9bc0() {
   return (neuron0x22a20c0()*0.160192);
}

double NNfunction_sb_dLuL::synapse0x22a9650() {
   return (neuron0x22a2400()*-0.0993018);
}

double NNfunction_sb_dLuL::synapse0x22a9690() {
   return (neuron0x22a2960()*0.116919);
}

double NNfunction_sb_dLuL::synapse0x22a9d10() {
   return (neuron0x22a2ca0()*0.106753);
}

double NNfunction_sb_dLuL::synapse0x22a9d50() {
   return (neuron0x22a2fe0()*0.0606207);
}

double NNfunction_sb_dLuL::synapse0x22a9d90() {
   return (neuron0x22a3320()*0.00617165);
}

double NNfunction_sb_dLuL::synapse0x22a9dd0() {
   return (neuron0x22a3660()*-0.0148723);
}

double NNfunction_sb_dLuL::synapse0x22a9e10() {
   return (neuron0x22a39a0()*0.0112711);
}

double NNfunction_sb_dLuL::synapse0x22a9e50() {
   return (neuron0x22a3ce0()*0.0121086);
}

double NNfunction_sb_dLuL::synapse0x22a2850() {
   return (neuron0x229f090()*-0.542406);
}

double NNfunction_sb_dLuL::synapse0x22a2890() {
   return (neuron0x229f340()*-1.12223);
}

double NNfunction_sb_dLuL::synapse0x22a28d0() {
   return (neuron0x229f680()*0.29378);
}

double NNfunction_sb_dLuL::synapse0x22a2910() {
   return (neuron0x229f9c0()*0.69126);
}

double NNfunction_sb_dLuL::synapse0x22aa3e0() {
   return (neuron0x229fd00()*1.01162);
}

double NNfunction_sb_dLuL::synapse0x22aa420() {
   return (neuron0x22a0040()*-0.375434);
}

double NNfunction_sb_dLuL::synapse0x22aa460() {
   return (neuron0x22a0380()*-0.396299);
}

double NNfunction_sb_dLuL::synapse0x22aa4a0() {
   return (neuron0x22a06c0()*-0.757682);
}

double NNfunction_sb_dLuL::synapse0x22aa4e0() {
   return (neuron0x22a0a00()*0.962795);
}

double NNfunction_sb_dLuL::synapse0x22aa520() {
   return (neuron0x22a0d40()*0.312891);
}

double NNfunction_sb_dLuL::synapse0x22aa560() {
   return (neuron0x22a1080()*-0.428715);
}

double NNfunction_sb_dLuL::synapse0x22aa5a0() {
   return (neuron0x22a13c0()*0.262761);
}

double NNfunction_sb_dLuL::synapse0x22aa5e0() {
   return (neuron0x22a1700()*0.109181);
}

double NNfunction_sb_dLuL::synapse0x22aa620() {
   return (neuron0x22a1a40()*-0.592944);
}

double NNfunction_sb_dLuL::synapse0x22aa660() {
   return (neuron0x22a1d80()*-0.872704);
}

double NNfunction_sb_dLuL::synapse0x22aa6a0() {
   return (neuron0x22a20c0()*-0.286255);
}

double NNfunction_sb_dLuL::synapse0x22aa020() {
   return (neuron0x22a2400()*-0.639294);
}

double NNfunction_sb_dLuL::synapse0x22aa060() {
   return (neuron0x22a2960()*0.26698);
}

double NNfunction_sb_dLuL::synapse0x22aa7f0() {
   return (neuron0x22a2ca0()*-1.24838);
}

double NNfunction_sb_dLuL::synapse0x22aa830() {
   return (neuron0x22a2fe0()*0.32202);
}

double NNfunction_sb_dLuL::synapse0x22aa870() {
   return (neuron0x22a3320()*0.275429);
}

double NNfunction_sb_dLuL::synapse0x22aa8b0() {
   return (neuron0x22a3660()*0.856164);
}

double NNfunction_sb_dLuL::synapse0x22aa8f0() {
   return (neuron0x22a39a0()*0.121084);
}

double NNfunction_sb_dLuL::synapse0x22aa930() {
   return (neuron0x22a3ce0()*0.000995246);
}

double NNfunction_sb_dLuL::synapse0x22aacb0() {
   return (neuron0x229f090()*0.0469634);
}

double NNfunction_sb_dLuL::synapse0x22aacf0() {
   return (neuron0x229f340()*0.00801555);
}

double NNfunction_sb_dLuL::synapse0x22aad30() {
   return (neuron0x229f680()*0.0183127);
}

double NNfunction_sb_dLuL::synapse0x22aad70() {
   return (neuron0x229f9c0()*-11.0972);
}

double NNfunction_sb_dLuL::synapse0x22aadb0() {
   return (neuron0x229fd00()*0.0283548);
}

double NNfunction_sb_dLuL::synapse0x22aadf0() {
   return (neuron0x22a0040()*0.0122902);
}

double NNfunction_sb_dLuL::synapse0x22aae30() {
   return (neuron0x22a0380()*-0.0121555);
}

double NNfunction_sb_dLuL::synapse0x22aae70() {
   return (neuron0x22a06c0()*-0.0466833);
}

double NNfunction_sb_dLuL::synapse0x22aaeb0() {
   return (neuron0x22a0a00()*-0.019459);
}

double NNfunction_sb_dLuL::synapse0x22aaef0() {
   return (neuron0x22a0d40()*-0.0241821);
}

double NNfunction_sb_dLuL::synapse0x22aaf30() {
   return (neuron0x22a1080()*-0.00542434);
}

double NNfunction_sb_dLuL::synapse0x22aaf70() {
   return (neuron0x22a13c0()*0.029441);
}

double NNfunction_sb_dLuL::synapse0x22aafb0() {
   return (neuron0x22a1700()*0.0294425);
}

double NNfunction_sb_dLuL::synapse0x22aaff0() {
   return (neuron0x22a1a40()*-0.0221465);
}

double NNfunction_sb_dLuL::synapse0x22ab030() {
   return (neuron0x22a1d80()*0.0173734);
}

double NNfunction_sb_dLuL::synapse0x22ab070() {
   return (neuron0x22a20c0()*-0.0418921);
}

double NNfunction_sb_dLuL::synapse0x22aab00() {
   return (neuron0x22a2400()*0.00114843);
}

double NNfunction_sb_dLuL::synapse0x22aab40() {
   return (neuron0x22a2960()*0.03031);
}

double NNfunction_sb_dLuL::synapse0x22ab1c0() {
   return (neuron0x22a2ca0()*0.0129318);
}

double NNfunction_sb_dLuL::synapse0x22ab200() {
   return (neuron0x22a2fe0()*-0.00656955);
}

double NNfunction_sb_dLuL::synapse0x22ab240() {
   return (neuron0x22a3320()*-0.0233847);
}

double NNfunction_sb_dLuL::synapse0x22ab280() {
   return (neuron0x22a3660()*-0.000274546);
}

double NNfunction_sb_dLuL::synapse0x22ab2c0() {
   return (neuron0x22a39a0()*0.0271737);
}

double NNfunction_sb_dLuL::synapse0x22ab300() {
   return (neuron0x22a3ce0()*-0.000615497);
}

double NNfunction_sb_dLuL::synapse0x22ab680() {
   return (neuron0x229f090()*-0.189779);
}

double NNfunction_sb_dLuL::synapse0x22ab6c0() {
   return (neuron0x229f340()*0.32648);
}

double NNfunction_sb_dLuL::synapse0x22ab700() {
   return (neuron0x229f680()*-1.35801);
}

double NNfunction_sb_dLuL::synapse0x22ab740() {
   return (neuron0x229f9c0()*-0.735535);
}

double NNfunction_sb_dLuL::synapse0x22ab780() {
   return (neuron0x229fd00()*0.0455442);
}

double NNfunction_sb_dLuL::synapse0x22ab7c0() {
   return (neuron0x22a0040()*0.474669);
}

double NNfunction_sb_dLuL::synapse0x22ab800() {
   return (neuron0x22a0380()*-0.215483);
}

double NNfunction_sb_dLuL::synapse0x22ab840() {
   return (neuron0x22a06c0()*0.289777);
}

double NNfunction_sb_dLuL::synapse0x22ab880() {
   return (neuron0x22a0a00()*-0.639507);
}

double NNfunction_sb_dLuL::synapse0x22ab8c0() {
   return (neuron0x22a0d40()*0.00976963);
}

double NNfunction_sb_dLuL::synapse0x22ab900() {
   return (neuron0x22a1080()*0.129288);
}

double NNfunction_sb_dLuL::synapse0x22ab940() {
   return (neuron0x22a13c0()*0.0163573);
}

double NNfunction_sb_dLuL::synapse0x22ab980() {
   return (neuron0x22a1700()*-0.592574);
}

double NNfunction_sb_dLuL::synapse0x22ab9c0() {
   return (neuron0x22a1a40()*-0.139744);
}

double NNfunction_sb_dLuL::synapse0x22aba00() {
   return (neuron0x22a1d80()*0.122144);
}

double NNfunction_sb_dLuL::synapse0x22aba40() {
   return (neuron0x22a20c0()*-0.300387);
}

double NNfunction_sb_dLuL::synapse0x22ab4d0() {
   return (neuron0x22a2400()*0.113368);
}

double NNfunction_sb_dLuL::synapse0x22ab510() {
   return (neuron0x22a2960()*-0.691669);
}

double NNfunction_sb_dLuL::synapse0x22a82a0() {
   return (neuron0x22a2ca0()*-0.14755);
}

double NNfunction_sb_dLuL::synapse0x22a82e0() {
   return (neuron0x22a2fe0()*-0.492108);
}

double NNfunction_sb_dLuL::synapse0x22a8320() {
   return (neuron0x22a3320()*0.754506);
}

double NNfunction_sb_dLuL::synapse0x22a8360() {
   return (neuron0x22a3660()*0.643828);
}

double NNfunction_sb_dLuL::synapse0x22a83a0() {
   return (neuron0x22a39a0()*-0.636866);
}

double NNfunction_sb_dLuL::synapse0x22a83e0() {
   return (neuron0x22a3ce0()*0.614);
}

double NNfunction_sb_dLuL::synapse0x22a8760() {
   return (neuron0x229f090()*-0.878876);
}

double NNfunction_sb_dLuL::synapse0x22a87a0() {
   return (neuron0x229f340()*-0.383881);
}

double NNfunction_sb_dLuL::synapse0x22a87e0() {
   return (neuron0x229f680()*-0.424846);
}

double NNfunction_sb_dLuL::synapse0x22a8820() {
   return (neuron0x229f9c0()*-0.643976);
}

double NNfunction_sb_dLuL::synapse0x22a8860() {
   return (neuron0x229fd00()*0.508833);
}

double NNfunction_sb_dLuL::synapse0x22a88a0() {
   return (neuron0x22a0040()*-0.471206);
}

double NNfunction_sb_dLuL::synapse0x22a88e0() {
   return (neuron0x22a0380()*0.140049);
}

double NNfunction_sb_dLuL::synapse0x22a8920() {
   return (neuron0x22a06c0()*-0.0427204);
}

double NNfunction_sb_dLuL::synapse0x22a8960() {
   return (neuron0x22a0a00()*0.854514);
}

double NNfunction_sb_dLuL::synapse0x22a89a0() {
   return (neuron0x22a0d40()*0.150639);
}

double NNfunction_sb_dLuL::synapse0x22a89e0() {
   return (neuron0x22a1080()*0.262325);
}

double NNfunction_sb_dLuL::synapse0x22a8a20() {
   return (neuron0x22a13c0()*-0.160369);
}

double NNfunction_sb_dLuL::synapse0x22a8a60() {
   return (neuron0x22a1700()*0.0876298);
}

double NNfunction_sb_dLuL::synapse0x22acba0() {
   return (neuron0x22a1a40()*1.19096);
}

double NNfunction_sb_dLuL::synapse0x22acbe0() {
   return (neuron0x22a1d80()*-0.0100729);
}

double NNfunction_sb_dLuL::synapse0x22acc20() {
   return (neuron0x22a20c0()*-0.212782);
}

double NNfunction_sb_dLuL::synapse0x22a85b0() {
   return (neuron0x22a2400()*-0.55234);
}

double NNfunction_sb_dLuL::synapse0x22a85f0() {
   return (neuron0x22a2960()*0.102219);
}

double NNfunction_sb_dLuL::synapse0x22acd70() {
   return (neuron0x22a2ca0()*-0.205982);
}

double NNfunction_sb_dLuL::synapse0x22acdb0() {
   return (neuron0x22a2fe0()*-0.343898);
}

double NNfunction_sb_dLuL::synapse0x22acdf0() {
   return (neuron0x22a3320()*-0.225501);
}

double NNfunction_sb_dLuL::synapse0x22ace30() {
   return (neuron0x22a3660()*-0.576359);
}

double NNfunction_sb_dLuL::synapse0x22ace70() {
   return (neuron0x22a39a0()*0.187293);
}

double NNfunction_sb_dLuL::synapse0x22aceb0() {
   return (neuron0x22a3ce0()*-0.709794);
}

double NNfunction_sb_dLuL::synapse0x22ad230() {
   return (neuron0x229f090()*-0.0330457);
}

double NNfunction_sb_dLuL::synapse0x22ad270() {
   return (neuron0x229f340()*-0.0452758);
}

double NNfunction_sb_dLuL::synapse0x22ad2b0() {
   return (neuron0x229f680()*-0.0139648);
}

double NNfunction_sb_dLuL::synapse0x22ad2f0() {
   return (neuron0x229f9c0()*0.479173);
}

double NNfunction_sb_dLuL::synapse0x22ad330() {
   return (neuron0x229fd00()*-0.0215615);
}

double NNfunction_sb_dLuL::synapse0x22ad370() {
   return (neuron0x22a0040()*0.00284639);
}

double NNfunction_sb_dLuL::synapse0x22ad3b0() {
   return (neuron0x22a0380()*0.00512048);
}

double NNfunction_sb_dLuL::synapse0x22ad3f0() {
   return (neuron0x22a06c0()*-0.000685766);
}

double NNfunction_sb_dLuL::synapse0x22ad430() {
   return (neuron0x22a0a00()*0.0256679);
}

double NNfunction_sb_dLuL::synapse0x22ad470() {
   return (neuron0x22a0d40()*0.0125023);
}

double NNfunction_sb_dLuL::synapse0x22ad4b0() {
   return (neuron0x22a1080()*-0.020655);
}

double NNfunction_sb_dLuL::synapse0x22ad4f0() {
   return (neuron0x22a13c0()*0.764154);
}

double NNfunction_sb_dLuL::synapse0x22ad530() {
   return (neuron0x22a1700()*-0.0189411);
}

double NNfunction_sb_dLuL::synapse0x22ad570() {
   return (neuron0x22a1a40()*0.00250001);
}

double NNfunction_sb_dLuL::synapse0x22ad5b0() {
   return (neuron0x22a1d80()*-0.000567672);
}

double NNfunction_sb_dLuL::synapse0x22ad5f0() {
   return (neuron0x22a20c0()*-0.00999107);
}

double NNfunction_sb_dLuL::synapse0x22ad080() {
   return (neuron0x22a2400()*0.0274255);
}

double NNfunction_sb_dLuL::synapse0x22ad0c0() {
   return (neuron0x22a2960()*-0.024059);
}

double NNfunction_sb_dLuL::synapse0x22ad740() {
   return (neuron0x22a2ca0()*-6.07307e-05);
}

double NNfunction_sb_dLuL::synapse0x22ad780() {
   return (neuron0x22a2fe0()*-0.0347138);
}

double NNfunction_sb_dLuL::synapse0x22ad7c0() {
   return (neuron0x22a3320()*0.00655879);
}

double NNfunction_sb_dLuL::synapse0x22ad800() {
   return (neuron0x22a3660()*0.0248265);
}

double NNfunction_sb_dLuL::synapse0x22ad840() {
   return (neuron0x22a39a0()*-0.0176523);
}

double NNfunction_sb_dLuL::synapse0x22ad880() {
   return (neuron0x22a3ce0()*-0.0339037);
}

double NNfunction_sb_dLuL::synapse0x22adc00() {
   return (neuron0x229f090()*0.268792);
}

double NNfunction_sb_dLuL::synapse0x22adc40() {
   return (neuron0x229f340()*-0.0585729);
}

double NNfunction_sb_dLuL::synapse0x22adc80() {
   return (neuron0x229f680()*0.616001);
}

double NNfunction_sb_dLuL::synapse0x22adcc0() {
   return (neuron0x229f9c0()*-0.418154);
}

double NNfunction_sb_dLuL::synapse0x22add00() {
   return (neuron0x229fd00()*-0.265432);
}

double NNfunction_sb_dLuL::synapse0x22add40() {
   return (neuron0x22a0040()*0.00292443);
}

double NNfunction_sb_dLuL::synapse0x22add80() {
   return (neuron0x22a0380()*0.842102);
}

double NNfunction_sb_dLuL::synapse0x22addc0() {
   return (neuron0x22a06c0()*0.0381854);
}

double NNfunction_sb_dLuL::synapse0x22ade00() {
   return (neuron0x22a0a00()*0.052439);
}

double NNfunction_sb_dLuL::synapse0x22ade40() {
   return (neuron0x22a0d40()*-0.00878157);
}

double NNfunction_sb_dLuL::synapse0x22ade80() {
   return (neuron0x22a1080()*0.654473);
}

double NNfunction_sb_dLuL::synapse0x22adec0() {
   return (neuron0x22a13c0()*0.290847);
}

double NNfunction_sb_dLuL::synapse0x22adf00() {
   return (neuron0x22a1700()*0.172035);
}

double NNfunction_sb_dLuL::synapse0x22adf40() {
   return (neuron0x22a1a40()*-0.0997182);
}

double NNfunction_sb_dLuL::synapse0x22adf80() {
   return (neuron0x22a1d80()*-0.0730898);
}

double NNfunction_sb_dLuL::synapse0x22adfc0() {
   return (neuron0x22a20c0()*-0.410035);
}

double NNfunction_sb_dLuL::synapse0x22ada50() {
   return (neuron0x22a2400()*-0.0950938);
}

double NNfunction_sb_dLuL::synapse0x22ada90() {
   return (neuron0x22a2960()*-0.270249);
}

double NNfunction_sb_dLuL::synapse0x22ae110() {
   return (neuron0x22a2ca0()*-0.384081);
}

double NNfunction_sb_dLuL::synapse0x22ae150() {
   return (neuron0x22a2fe0()*0.346685);
}

double NNfunction_sb_dLuL::synapse0x22ae190() {
   return (neuron0x22a3320()*0.29045);
}

double NNfunction_sb_dLuL::synapse0x22ae1d0() {
   return (neuron0x22a3660()*-0.299472);
}

double NNfunction_sb_dLuL::synapse0x22ae210() {
   return (neuron0x22a39a0()*0.0587483);
}

double NNfunction_sb_dLuL::synapse0x22ae250() {
   return (neuron0x22a3ce0()*0.353839);
}

double NNfunction_sb_dLuL::synapse0x22ae5d0() {
   return (neuron0x229f090()*0.128815);
}

double NNfunction_sb_dLuL::synapse0x22ae610() {
   return (neuron0x229f340()*0.0797119);
}

double NNfunction_sb_dLuL::synapse0x22ae650() {
   return (neuron0x229f680()*-0.0862569);
}

double NNfunction_sb_dLuL::synapse0x22ae690() {
   return (neuron0x229f9c0()*-0.690203);
}

double NNfunction_sb_dLuL::synapse0x22ae6d0() {
   return (neuron0x229fd00()*-0.378399);
}

double NNfunction_sb_dLuL::synapse0x22ae710() {
   return (neuron0x22a0040()*-0.00677078);
}

double NNfunction_sb_dLuL::synapse0x22ae750() {
   return (neuron0x22a0380()*-0.0841019);
}

double NNfunction_sb_dLuL::synapse0x22ae790() {
   return (neuron0x22a06c0()*0.332954);
}

double NNfunction_sb_dLuL::synapse0x22ae7d0() {
   return (neuron0x22a0a00()*0.39114);
}

double NNfunction_sb_dLuL::synapse0x22ae810() {
   return (neuron0x22a0d40()*-0.757859);
}

double NNfunction_sb_dLuL::synapse0x22ae850() {
   return (neuron0x22a1080()*0.393741);
}

double NNfunction_sb_dLuL::synapse0x22ae890() {
   return (neuron0x22a13c0()*0.532445);
}

double NNfunction_sb_dLuL::synapse0x22ae8d0() {
   return (neuron0x22a1700()*-0.693314);
}

double NNfunction_sb_dLuL::synapse0x22ae910() {
   return (neuron0x22a1a40()*-0.939275);
}

double NNfunction_sb_dLuL::synapse0x22ae950() {
   return (neuron0x22a1d80()*-0.0354516);
}

double NNfunction_sb_dLuL::synapse0x22ae990() {
   return (neuron0x22a20c0()*0.115309);
}

double NNfunction_sb_dLuL::synapse0x22ae420() {
   return (neuron0x22a2400()*0.858455);
}

double NNfunction_sb_dLuL::synapse0x22ae460() {
   return (neuron0x22a2960()*0.0928579);
}

double NNfunction_sb_dLuL::synapse0x22aeae0() {
   return (neuron0x22a2ca0()*1.11698);
}

double NNfunction_sb_dLuL::synapse0x22aeb20() {
   return (neuron0x22a2fe0()*0.0749747);
}

double NNfunction_sb_dLuL::synapse0x22aeb60() {
   return (neuron0x22a3320()*0.138956);
}

double NNfunction_sb_dLuL::synapse0x22aeba0() {
   return (neuron0x22a3660()*0.505846);
}

double NNfunction_sb_dLuL::synapse0x22aebe0() {
   return (neuron0x22a39a0()*-0.966601);
}

double NNfunction_sb_dLuL::synapse0x22aec20() {
   return (neuron0x22a3ce0()*0.196364);
}

double NNfunction_sb_dLuL::synapse0x22aefa0() {
   return (neuron0x229f090()*-0.0871569);
}

double NNfunction_sb_dLuL::synapse0x229f220() {
   return (neuron0x229f340()*-0.249228);
}

double NNfunction_sb_dLuL::synapse0x229f260() {
   return (neuron0x229f680()*0.564182);
}

double NNfunction_sb_dLuL::synapse0x229f560() {
   return (neuron0x229f9c0()*1.77947);
}

double NNfunction_sb_dLuL::synapse0x229f5a0() {
   return (neuron0x229fd00()*0.808421);
}

double NNfunction_sb_dLuL::synapse0x229f8a0() {
   return (neuron0x22a0040()*0.911648);
}

double NNfunction_sb_dLuL::synapse0x229f8e0() {
   return (neuron0x22a0380()*0.601202);
}

double NNfunction_sb_dLuL::synapse0x229fbe0() {
   return (neuron0x22a06c0()*-0.268475);
}

double NNfunction_sb_dLuL::synapse0x229fc20() {
   return (neuron0x22a0a00()*0.335797);
}

double NNfunction_sb_dLuL::synapse0x229ff20() {
   return (neuron0x22a0d40()*-0.477511);
}

double NNfunction_sb_dLuL::synapse0x229ff60() {
   return (neuron0x22a1080()*0.0881043);
}

double NNfunction_sb_dLuL::synapse0x22a0260() {
   return (neuron0x22a13c0()*-1.42284);
}

double NNfunction_sb_dLuL::synapse0x22a02a0() {
   return (neuron0x22a1700()*-0.280719);
}

double NNfunction_sb_dLuL::synapse0x22a05a0() {
   return (neuron0x22a1a40()*0.0141735);
}

double NNfunction_sb_dLuL::synapse0x22a05e0() {
   return (neuron0x22a1d80()*-0.0595042);
}

double NNfunction_sb_dLuL::synapse0x22a08e0() {
   return (neuron0x22a20c0()*-0.477755);
}

double NNfunction_sb_dLuL::synapse0x22a0920() {
   return (neuron0x22a2400()*0.957958);
}

double NNfunction_sb_dLuL::synapse0x22a0c20() {
   return (neuron0x22a2960()*-0.302664);
}

double NNfunction_sb_dLuL::synapse0x22a0c60() {
   return (neuron0x22a2ca0()*-0.318709);
}

double NNfunction_sb_dLuL::synapse0x22a0f60() {
   return (neuron0x22a2fe0()*0.157286);
}

double NNfunction_sb_dLuL::synapse0x22a0fa0() {
   return (neuron0x22a3320()*0.192618);
}

double NNfunction_sb_dLuL::synapse0x22a12a0() {
   return (neuron0x22a3660()*-0.120926);
}

double NNfunction_sb_dLuL::synapse0x22a12e0() {
   return (neuron0x22a39a0()*-0.472777);
}

double NNfunction_sb_dLuL::synapse0x22a15e0() {
   return (neuron0x22a3ce0()*-0.0538763);
}

double NNfunction_sb_dLuL::synapse0x22a1620() {
   return (neuron0x229f090()*-0.0342222);
}

double NNfunction_sb_dLuL::synapse0x22a22e0() {
   return (neuron0x229f340()*-0.0542714);
}

double NNfunction_sb_dLuL::synapse0x22a2320() {
   return (neuron0x229f680()*0.00382285);
}

double NNfunction_sb_dLuL::synapse0x22aedf0() {
   return (neuron0x229f9c0()*-0.468687);
}

double NNfunction_sb_dLuL::synapse0x22aee30() {
   return (neuron0x229fd00()*-0.0232032);
}

double NNfunction_sb_dLuL::synapse0x22a2620() {
   return (neuron0x22a0040()*0.00400057);
}

double NNfunction_sb_dLuL::synapse0x22a2660() {
   return (neuron0x22a0380()*0.0117368);
}

double NNfunction_sb_dLuL::synapse0x22a2b80() {
   return (neuron0x22a06c0()*0.0246364);
}

double NNfunction_sb_dLuL::synapse0x22a2bc0() {
   return (neuron0x22a0a00()*-0.00772894);
}

double NNfunction_sb_dLuL::synapse0x22a2ec0() {
   return (neuron0x22a0d40()*0.0402659);
}

double NNfunction_sb_dLuL::synapse0x22a2f00() {
   return (neuron0x22a1080()*-0.00321521);
}

double NNfunction_sb_dLuL::synapse0x22a3200() {
   return (neuron0x22a13c0()*0.132038);
}

double NNfunction_sb_dLuL::synapse0x22a3240() {
   return (neuron0x22a1700()*0.359871);
}

double NNfunction_sb_dLuL::synapse0x22a3540() {
   return (neuron0x22a1a40()*-0.0173769);
}

double NNfunction_sb_dLuL::synapse0x22a3580() {
   return (neuron0x22a1d80()*0.110283);
}

double NNfunction_sb_dLuL::synapse0x22a3880() {
   return (neuron0x22a20c0()*0.171798);
}

double NNfunction_sb_dLuL::synapse0x22a38c0() {
   return (neuron0x22a2400()*0.0237005);
}

double NNfunction_sb_dLuL::synapse0x22a3bc0() {
   return (neuron0x22a2960()*0.185045);
}

double NNfunction_sb_dLuL::synapse0x22a3c00() {
   return (neuron0x22a2ca0()*0.180797);
}

double NNfunction_sb_dLuL::synapse0x22a3f00() {
   return (neuron0x22a2fe0()*-0.0492495);
}

double NNfunction_sb_dLuL::synapse0x22a3f40() {
   return (neuron0x22a3320()*-0.0101432);
}

double NNfunction_sb_dLuL::synapse0x22a1920() {
   return (neuron0x22a3660()*0.0214463);
}

double NNfunction_sb_dLuL::synapse0x22a1960() {
   return (neuron0x22a39a0()*-0.0179511);
}

double NNfunction_sb_dLuL::synapse0x22b0d10() {
   return (neuron0x22a3ce0()*-0.0176335);
}

double NNfunction_sb_dLuL::synapse0x22b1090() {
   return (neuron0x229f090()*0.0295555);
}

double NNfunction_sb_dLuL::synapse0x22b10d0() {
   return (neuron0x229f340()*0.00906532);
}

double NNfunction_sb_dLuL::synapse0x22b1110() {
   return (neuron0x229f680()*0.00313227);
}

double NNfunction_sb_dLuL::synapse0x22b1150() {
   return (neuron0x229f9c0()*-0.11518);
}

double NNfunction_sb_dLuL::synapse0x22b1190() {
   return (neuron0x229fd00()*0.0064693);
}

double NNfunction_sb_dLuL::synapse0x22b11d0() {
   return (neuron0x22a0040()*0.00110295);
}

double NNfunction_sb_dLuL::synapse0x22b1210() {
   return (neuron0x22a0380()*-0.0139503);
}

double NNfunction_sb_dLuL::synapse0x22b1250() {
   return (neuron0x22a06c0()*0.000438949);
}

double NNfunction_sb_dLuL::synapse0x22b1290() {
   return (neuron0x22a0a00()*-0.0126253);
}

double NNfunction_sb_dLuL::synapse0x22b12d0() {
   return (neuron0x22a0d40()*-0.0096622);
}

double NNfunction_sb_dLuL::synapse0x22b1310() {
   return (neuron0x22a1080()*-0.027229);
}

double NNfunction_sb_dLuL::synapse0x22b1350() {
   return (neuron0x22a13c0()*0.851342);
}

double NNfunction_sb_dLuL::synapse0x22b1390() {
   return (neuron0x22a1700()*0.0403794);
}

double NNfunction_sb_dLuL::synapse0x22b13d0() {
   return (neuron0x22a1a40()*0.00638906);
}

double NNfunction_sb_dLuL::synapse0x22b1410() {
   return (neuron0x22a1d80()*0.0177585);
}

double NNfunction_sb_dLuL::synapse0x22b1450() {
   return (neuron0x22a20c0()*0.0155084);
}

double NNfunction_sb_dLuL::synapse0x22b0ee0() {
   return (neuron0x22a2400()*0.00988113);
}

double NNfunction_sb_dLuL::synapse0x22b0f20() {
   return (neuron0x22a2960()*0.0247821);
}

double NNfunction_sb_dLuL::synapse0x22b15a0() {
   return (neuron0x22a2ca0()*0.0150486);
}

double NNfunction_sb_dLuL::synapse0x22b15e0() {
   return (neuron0x22a2fe0()*-0.00304931);
}

double NNfunction_sb_dLuL::synapse0x22b1620() {
   return (neuron0x22a3320()*-0.00482743);
}

double NNfunction_sb_dLuL::synapse0x22b1660() {
   return (neuron0x22a3660()*0.0041098);
}

double NNfunction_sb_dLuL::synapse0x22b16a0() {
   return (neuron0x22a39a0()*-0.00889339);
}

double NNfunction_sb_dLuL::synapse0x22b16e0() {
   return (neuron0x22a3ce0()*0.0332194);
}

double NNfunction_sb_dLuL::synapse0x22b1a60() {
   return (neuron0x229f090()*-0.34129);
}

double NNfunction_sb_dLuL::synapse0x22b1aa0() {
   return (neuron0x229f340()*0.0769062);
}

double NNfunction_sb_dLuL::synapse0x22b1ae0() {
   return (neuron0x229f680()*-0.819101);
}

double NNfunction_sb_dLuL::synapse0x22b1b20() {
   return (neuron0x229f9c0()*0.899202);
}

double NNfunction_sb_dLuL::synapse0x22b1b60() {
   return (neuron0x229fd00()*-0.276678);
}

double NNfunction_sb_dLuL::synapse0x22b1ba0() {
   return (neuron0x22a0040()*0.357285);
}

double NNfunction_sb_dLuL::synapse0x22b1be0() {
   return (neuron0x22a0380()*0.402341);
}

double NNfunction_sb_dLuL::synapse0x22b1c20() {
   return (neuron0x22a06c0()*0.687154);
}

double NNfunction_sb_dLuL::synapse0x22b1c60() {
   return (neuron0x22a0a00()*-0.325331);
}

double NNfunction_sb_dLuL::synapse0x22b1ca0() {
   return (neuron0x22a0d40()*0.902344);
}

double NNfunction_sb_dLuL::synapse0x22b1ce0() {
   return (neuron0x22a1080()*0.340945);
}

double NNfunction_sb_dLuL::synapse0x22b1d20() {
   return (neuron0x22a13c0()*1.21865);
}

double NNfunction_sb_dLuL::synapse0x22b1d60() {
   return (neuron0x22a1700()*0.159054);
}

double NNfunction_sb_dLuL::synapse0x22b1da0() {
   return (neuron0x22a1a40()*0.36124);
}

double NNfunction_sb_dLuL::synapse0x22b1de0() {
   return (neuron0x22a1d80()*0.441949);
}

double NNfunction_sb_dLuL::synapse0x22b1e20() {
   return (neuron0x22a20c0()*-0.321725);
}

double NNfunction_sb_dLuL::synapse0x22b18b0() {
   return (neuron0x22a2400()*0.197181);
}

double NNfunction_sb_dLuL::synapse0x22b18f0() {
   return (neuron0x22a2960()*-0.515558);
}

double NNfunction_sb_dLuL::synapse0x22b1f70() {
   return (neuron0x22a2ca0()*0.553523);
}

double NNfunction_sb_dLuL::synapse0x22b1fb0() {
   return (neuron0x22a2fe0()*-0.27458);
}

double NNfunction_sb_dLuL::synapse0x22b1ff0() {
   return (neuron0x22a3320()*0.113458);
}

double NNfunction_sb_dLuL::synapse0x22b2030() {
   return (neuron0x22a3660()*0.269215);
}

double NNfunction_sb_dLuL::synapse0x22b2070() {
   return (neuron0x22a39a0()*-0.283815);
}

double NNfunction_sb_dLuL::synapse0x22b20b0() {
   return (neuron0x22a3ce0()*0.768409);
}

double NNfunction_sb_dLuL::synapse0x22b2430() {
   return (neuron0x229f090()*0.0364156);
}

double NNfunction_sb_dLuL::synapse0x22b2470() {
   return (neuron0x229f340()*0.211297);
}

double NNfunction_sb_dLuL::synapse0x22b24b0() {
   return (neuron0x229f680()*0.900506);
}

double NNfunction_sb_dLuL::synapse0x22b24f0() {
   return (neuron0x229f9c0()*1.38427);
}

double NNfunction_sb_dLuL::synapse0x22b2530() {
   return (neuron0x229fd00()*0.159119);
}

double NNfunction_sb_dLuL::synapse0x22b2570() {
   return (neuron0x22a0040()*-0.132518);
}

double NNfunction_sb_dLuL::synapse0x22b25b0() {
   return (neuron0x22a0380()*0.219993);
}

double NNfunction_sb_dLuL::synapse0x22b25f0() {
   return (neuron0x22a06c0()*0.172981);
}

double NNfunction_sb_dLuL::synapse0x22b2630() {
   return (neuron0x22a0a00()*-0.235377);
}

double NNfunction_sb_dLuL::synapse0x22b2670() {
   return (neuron0x22a0d40()*0.147243);
}

double NNfunction_sb_dLuL::synapse0x22b26b0() {
   return (neuron0x22a1080()*0.189217);
}

double NNfunction_sb_dLuL::synapse0x22b26f0() {
   return (neuron0x22a13c0()*-1.34074);
}

double NNfunction_sb_dLuL::synapse0x22b2730() {
   return (neuron0x22a1700()*0.796145);
}

double NNfunction_sb_dLuL::synapse0x22b2770() {
   return (neuron0x22a1a40()*0.42248);
}

double NNfunction_sb_dLuL::synapse0x22b27b0() {
   return (neuron0x22a1d80()*-0.0275919);
}

double NNfunction_sb_dLuL::synapse0x22b27f0() {
   return (neuron0x22a20c0()*0.122439);
}

double NNfunction_sb_dLuL::synapse0x22b2280() {
   return (neuron0x22a2400()*0.209777);
}

double NNfunction_sb_dLuL::synapse0x22b22c0() {
   return (neuron0x22a2960()*0.25333);
}

double NNfunction_sb_dLuL::synapse0x22b2940() {
   return (neuron0x22a2ca0()*-0.225372);
}

double NNfunction_sb_dLuL::synapse0x22b2980() {
   return (neuron0x22a2fe0()*-0.490326);
}

double NNfunction_sb_dLuL::synapse0x22b29c0() {
   return (neuron0x22a3320()*-0.168814);
}

double NNfunction_sb_dLuL::synapse0x22b2a00() {
   return (neuron0x22a3660()*-0.251863);
}

double NNfunction_sb_dLuL::synapse0x22b2a40() {
   return (neuron0x22a39a0()*0.417532);
}

double NNfunction_sb_dLuL::synapse0x22b2a80() {
   return (neuron0x22a3ce0()*0.553303);
}

double NNfunction_sb_dLuL::synapse0x22b2e00() {
   return (neuron0x229f090()*-0.153427);
}

double NNfunction_sb_dLuL::synapse0x22b2e40() {
   return (neuron0x229f340()*0.418583);
}

double NNfunction_sb_dLuL::synapse0x22b2e80() {
   return (neuron0x229f680()*-0.0200353);
}

double NNfunction_sb_dLuL::synapse0x22b2ec0() {
   return (neuron0x229f9c0()*-0.0466985);
}

double NNfunction_sb_dLuL::synapse0x22b2f00() {
   return (neuron0x229fd00()*-0.120501);
}

double NNfunction_sb_dLuL::synapse0x22b2f40() {
   return (neuron0x22a0040()*-0.967551);
}

double NNfunction_sb_dLuL::synapse0x22b2f80() {
   return (neuron0x22a0380()*-0.231338);
}

double NNfunction_sb_dLuL::synapse0x22b2fc0() {
   return (neuron0x22a06c0()*-0.470525);
}

double NNfunction_sb_dLuL::synapse0x22b3000() {
   return (neuron0x22a0a00()*-1.17471);
}

double NNfunction_sb_dLuL::synapse0x22b3040() {
   return (neuron0x22a0d40()*0.800905);
}

double NNfunction_sb_dLuL::synapse0x22b3080() {
   return (neuron0x22a1080()*-0.0587205);
}

double NNfunction_sb_dLuL::synapse0x22b30c0() {
   return (neuron0x22a13c0()*0.174006);
}

double NNfunction_sb_dLuL::synapse0x22b3100() {
   return (neuron0x22a1700()*-0.332464);
}

double NNfunction_sb_dLuL::synapse0x22b3140() {
   return (neuron0x22a1a40()*0.00459069);
}

double NNfunction_sb_dLuL::synapse0x22b3180() {
   return (neuron0x22a1d80()*-0.437702);
}

double NNfunction_sb_dLuL::synapse0x22b31c0() {
   return (neuron0x22a20c0()*0.360578);
}

double NNfunction_sb_dLuL::synapse0x22b2c50() {
   return (neuron0x22a2400()*0.0466128);
}

double NNfunction_sb_dLuL::synapse0x22b2c90() {
   return (neuron0x22a2960()*0.146362);
}

double NNfunction_sb_dLuL::synapse0x22b3310() {
   return (neuron0x22a2ca0()*0.42999);
}

double NNfunction_sb_dLuL::synapse0x22b3350() {
   return (neuron0x22a2fe0()*1.07771);
}

double NNfunction_sb_dLuL::synapse0x22b3390() {
   return (neuron0x22a3320()*-1.33304);
}

double NNfunction_sb_dLuL::synapse0x22b33d0() {
   return (neuron0x22a3660()*-0.0903378);
}

double NNfunction_sb_dLuL::synapse0x22b3410() {
   return (neuron0x22a39a0()*0.256739);
}

double NNfunction_sb_dLuL::synapse0x22b3450() {
   return (neuron0x22a3ce0()*0.46704);
}

double NNfunction_sb_dLuL::synapse0x22b37d0() {
   return (neuron0x229f090()*-0.0925748);
}

double NNfunction_sb_dLuL::synapse0x22b3810() {
   return (neuron0x229f340()*-0.0772991);
}

double NNfunction_sb_dLuL::synapse0x22b3850() {
   return (neuron0x229f680()*0.0683931);
}

double NNfunction_sb_dLuL::synapse0x22b3890() {
   return (neuron0x229f9c0()*-2.76129);
}

double NNfunction_sb_dLuL::synapse0x22b38d0() {
   return (neuron0x229fd00()*-0.0680261);
}

double NNfunction_sb_dLuL::synapse0x22b3910() {
   return (neuron0x22a0040()*-0.00907876);
}

double NNfunction_sb_dLuL::synapse0x22b3950() {
   return (neuron0x22a0380()*0.0173345);
}

double NNfunction_sb_dLuL::synapse0x22b3990() {
   return (neuron0x22a06c0()*0.0212646);
}

double NNfunction_sb_dLuL::synapse0x22b39d0() {
   return (neuron0x22a0a00()*-0.00809434);
}

double NNfunction_sb_dLuL::synapse0x22abb90() {
   return (neuron0x22a0d40()*0.0412321);
}

double NNfunction_sb_dLuL::synapse0x22abbd0() {
   return (neuron0x22a1080()*0.0325688);
}

double NNfunction_sb_dLuL::synapse0x22abc10() {
   return (neuron0x22a13c0()*0.059891);
}

double NNfunction_sb_dLuL::synapse0x22abc50() {
   return (neuron0x22a1700()*-0.0679336);
}

double NNfunction_sb_dLuL::synapse0x22abc90() {
   return (neuron0x22a1a40()*0.0369508);
}

double NNfunction_sb_dLuL::synapse0x22abcd0() {
   return (neuron0x22a1d80()*-0.121065);
}

double NNfunction_sb_dLuL::synapse0x22abd10() {
   return (neuron0x22a20c0()*-0.0586166);
}

double NNfunction_sb_dLuL::synapse0x22b3620() {
   return (neuron0x22a2400()*0.0455921);
}

double NNfunction_sb_dLuL::synapse0x22b3660() {
   return (neuron0x22a2960()*-0.0405251);
}

double NNfunction_sb_dLuL::synapse0x22abe60() {
   return (neuron0x22a2ca0()*-0.0355868);
}

double NNfunction_sb_dLuL::synapse0x22abea0() {
   return (neuron0x22a2fe0()*-0.0679815);
}

double NNfunction_sb_dLuL::synapse0x22abee0() {
   return (neuron0x22a3320()*-0.00815043);
}

double NNfunction_sb_dLuL::synapse0x22abf20() {
   return (neuron0x22a3660()*0.00423762);
}

double NNfunction_sb_dLuL::synapse0x22abf60() {
   return (neuron0x22a39a0()*-0.0172132);
}

double NNfunction_sb_dLuL::synapse0x22abfa0() {
   return (neuron0x22a3ce0()*-0.0382795);
}

double NNfunction_sb_dLuL::synapse0x22ac320() {
   return (neuron0x229f090()*-0.0448143);
}

double NNfunction_sb_dLuL::synapse0x22ac360() {
   return (neuron0x229f340()*0.0692936);
}

double NNfunction_sb_dLuL::synapse0x22ac3a0() {
   return (neuron0x229f680()*1.14495);
}

double NNfunction_sb_dLuL::synapse0x22ac3e0() {
   return (neuron0x229f9c0()*0.977839);
}

double NNfunction_sb_dLuL::synapse0x22ac420() {
   return (neuron0x229fd00()*-0.194704);
}

double NNfunction_sb_dLuL::synapse0x22ac460() {
   return (neuron0x22a0040()*-0.246266);
}

double NNfunction_sb_dLuL::synapse0x22ac4a0() {
   return (neuron0x22a0380()*0.581902);
}

double NNfunction_sb_dLuL::synapse0x22ac4e0() {
   return (neuron0x22a06c0()*-0.496631);
}

double NNfunction_sb_dLuL::synapse0x22ac520() {
   return (neuron0x22a0a00()*1.09013);
}

double NNfunction_sb_dLuL::synapse0x22ac560() {
   return (neuron0x22a0d40()*-0.30924);
}

double NNfunction_sb_dLuL::synapse0x22ac5a0() {
   return (neuron0x22a1080()*0.385689);
}

double NNfunction_sb_dLuL::synapse0x22ac5e0() {
   return (neuron0x22a13c0()*0.177339);
}

double NNfunction_sb_dLuL::synapse0x22ac620() {
   return (neuron0x22a1700()*-0.267543);
}

double NNfunction_sb_dLuL::synapse0x22ac660() {
   return (neuron0x22a1a40()*0.681719);
}

double NNfunction_sb_dLuL::synapse0x22ac6a0() {
   return (neuron0x22a1d80()*0.242634);
}

double NNfunction_sb_dLuL::synapse0x22ac6e0() {
   return (neuron0x22a20c0()*-0.971875);
}

double NNfunction_sb_dLuL::synapse0x22ac170() {
   return (neuron0x22a2400()*-0.455624);
}

double NNfunction_sb_dLuL::synapse0x22ac1b0() {
   return (neuron0x22a2960()*-1.11335);
}

double NNfunction_sb_dLuL::synapse0x22ac830() {
   return (neuron0x22a2ca0()*-0.101087);
}

double NNfunction_sb_dLuL::synapse0x22ac870() {
   return (neuron0x22a2fe0()*-0.62954);
}

double NNfunction_sb_dLuL::synapse0x22ac8b0() {
   return (neuron0x22a3320()*0.40543);
}

double NNfunction_sb_dLuL::synapse0x22ac8f0() {
   return (neuron0x22a3660()*-0.250471);
}

double NNfunction_sb_dLuL::synapse0x22ac930() {
   return (neuron0x22a39a0()*-0.568191);
}

double NNfunction_sb_dLuL::synapse0x22ac970() {
   return (neuron0x22a3ce0()*1.06407);
}

double NNfunction_sb_dLuL::synapse0x22acb40() {
   return (neuron0x229f090()*0.949273);
}

double NNfunction_sb_dLuL::synapse0x22b5bd0() {
   return (neuron0x229f340()*-0.500296);
}

double NNfunction_sb_dLuL::synapse0x22b5c10() {
   return (neuron0x229f680()*-0.589737);
}

double NNfunction_sb_dLuL::synapse0x22b5c50() {
   return (neuron0x229f9c0()*-0.676439);
}

double NNfunction_sb_dLuL::synapse0x22b5c90() {
   return (neuron0x229fd00()*0.37338);
}

double NNfunction_sb_dLuL::synapse0x22b5cd0() {
   return (neuron0x22a0040()*-0.851186);
}

double NNfunction_sb_dLuL::synapse0x22b5d10() {
   return (neuron0x22a0380()*-0.534894);
}

double NNfunction_sb_dLuL::synapse0x22b5d50() {
   return (neuron0x22a06c0()*-0.353837);
}

double NNfunction_sb_dLuL::synapse0x22b5d90() {
   return (neuron0x22a0a00()*0.203472);
}

double NNfunction_sb_dLuL::synapse0x22b5dd0() {
   return (neuron0x22a0d40()*-0.139202);
}

double NNfunction_sb_dLuL::synapse0x22b5e10() {
   return (neuron0x22a1080()*-0.971226);
}

double NNfunction_sb_dLuL::synapse0x22b5e50() {
   return (neuron0x22a13c0()*0.8321);
}

double NNfunction_sb_dLuL::synapse0x22b5e90() {
   return (neuron0x22a1700()*-0.467628);
}

double NNfunction_sb_dLuL::synapse0x22b5ed0() {
   return (neuron0x22a1a40()*-0.148122);
}

double NNfunction_sb_dLuL::synapse0x22b5f10() {
   return (neuron0x22a1d80()*-0.809931);
}

double NNfunction_sb_dLuL::synapse0x22b5f50() {
   return (neuron0x22a20c0()*1.14288);
}

double NNfunction_sb_dLuL::synapse0x22b5a20() {
   return (neuron0x22a2400()*-0.210836);
}

double NNfunction_sb_dLuL::synapse0x22b5a60() {
   return (neuron0x22a2960()*0.643217);
}

double NNfunction_sb_dLuL::synapse0x22b60a0() {
   return (neuron0x22a2ca0()*-0.0709929);
}

double NNfunction_sb_dLuL::synapse0x22b60e0() {
   return (neuron0x22a2fe0()*-0.380436);
}

double NNfunction_sb_dLuL::synapse0x22b6120() {
   return (neuron0x22a3320()*-0.298004);
}

double NNfunction_sb_dLuL::synapse0x22b6160() {
   return (neuron0x22a3660()*0.0876846);
}

double NNfunction_sb_dLuL::synapse0x22b61a0() {
   return (neuron0x22a39a0()*0.647344);
}

double NNfunction_sb_dLuL::synapse0x22b61e0() {
   return (neuron0x22a3ce0()*-0.564852);
}

double NNfunction_sb_dLuL::synapse0x22b6560() {
   return (neuron0x229f090()*0.037057);
}

double NNfunction_sb_dLuL::synapse0x22b65a0() {
   return (neuron0x229f340()*0.00804526);
}

double NNfunction_sb_dLuL::synapse0x22b65e0() {
   return (neuron0x229f680()*0.0430719);
}

double NNfunction_sb_dLuL::synapse0x22b6620() {
   return (neuron0x229f9c0()*-1.95546);
}

double NNfunction_sb_dLuL::synapse0x22b6660() {
   return (neuron0x229fd00()*-0.00210603);
}

double NNfunction_sb_dLuL::synapse0x22b66a0() {
   return (neuron0x22a0040()*-0.00432301);
}

double NNfunction_sb_dLuL::synapse0x22b66e0() {
   return (neuron0x22a0380()*0.013449);
}

double NNfunction_sb_dLuL::synapse0x22b6720() {
   return (neuron0x22a06c0()*-0.0157761);
}

double NNfunction_sb_dLuL::synapse0x22b6760() {
   return (neuron0x22a0a00()*0.0235563);
}

double NNfunction_sb_dLuL::synapse0x22b67a0() {
   return (neuron0x22a0d40()*-0.0144689);
}

double NNfunction_sb_dLuL::synapse0x22b67e0() {
   return (neuron0x22a1080()*-0.00147448);
}

double NNfunction_sb_dLuL::synapse0x22b6820() {
   return (neuron0x22a13c0()*0.555065);
}

double NNfunction_sb_dLuL::synapse0x22b6860() {
   return (neuron0x22a1700()*0.0125318);
}

double NNfunction_sb_dLuL::synapse0x22b68a0() {
   return (neuron0x22a1a40()*0.043628);
}

double NNfunction_sb_dLuL::synapse0x22b68e0() {
   return (neuron0x22a1d80()*0.00648322);
}

double NNfunction_sb_dLuL::synapse0x22b6920() {
   return (neuron0x22a20c0()*-0.0207671);
}

double NNfunction_sb_dLuL::synapse0x22b63b0() {
   return (neuron0x22a2400()*0.0101928);
}

double NNfunction_sb_dLuL::synapse0x22b63f0() {
   return (neuron0x22a2960()*0.0141872);
}

double NNfunction_sb_dLuL::synapse0x22b6a70() {
   return (neuron0x22a2ca0()*0.0227406);
}

double NNfunction_sb_dLuL::synapse0x22b6ab0() {
   return (neuron0x22a2fe0()*0.00933699);
}

double NNfunction_sb_dLuL::synapse0x22b6af0() {
   return (neuron0x22a3320()*-0.00661987);
}

double NNfunction_sb_dLuL::synapse0x22b6b30() {
   return (neuron0x22a3660()*0.000522935);
}

double NNfunction_sb_dLuL::synapse0x22b6b70() {
   return (neuron0x22a39a0()*0.020135);
}

double NNfunction_sb_dLuL::synapse0x22b6bb0() {
   return (neuron0x22a3ce0()*0.0112877);
}

double NNfunction_sb_dLuL::synapse0x22b6f30() {
   return (neuron0x229f090()*0.000800569);
}

double NNfunction_sb_dLuL::synapse0x22b6f70() {
   return (neuron0x229f340()*0.0288263);
}

double NNfunction_sb_dLuL::synapse0x22b6fb0() {
   return (neuron0x229f680()*-0.0138622);
}

double NNfunction_sb_dLuL::synapse0x22b6ff0() {
   return (neuron0x229f9c0()*-0.0962812);
}

double NNfunction_sb_dLuL::synapse0x22b7030() {
   return (neuron0x229fd00()*0.00674386);
}

double NNfunction_sb_dLuL::synapse0x22b7070() {
   return (neuron0x22a0040()*0.0211127);
}

double NNfunction_sb_dLuL::synapse0x22b70b0() {
   return (neuron0x22a0380()*0.000625097);
}

double NNfunction_sb_dLuL::synapse0x22b70f0() {
   return (neuron0x22a06c0()*-0.00901691);
}

double NNfunction_sb_dLuL::synapse0x22b7130() {
   return (neuron0x22a0a00()*0.000142285);
}

double NNfunction_sb_dLuL::synapse0x22b7170() {
   return (neuron0x22a0d40()*0.00615798);
}

double NNfunction_sb_dLuL::synapse0x22b71b0() {
   return (neuron0x22a1080()*0.0225276);
}

double NNfunction_sb_dLuL::synapse0x22b71f0() {
   return (neuron0x22a13c0()*-2.76773);
}

double NNfunction_sb_dLuL::synapse0x22b7230() {
   return (neuron0x22a1700()*0.00519406);
}

double NNfunction_sb_dLuL::synapse0x22b7270() {
   return (neuron0x22a1a40()*-0.0268338);
}

double NNfunction_sb_dLuL::synapse0x22b72b0() {
   return (neuron0x22a1d80()*-0.0223599);
}

double NNfunction_sb_dLuL::synapse0x22b72f0() {
   return (neuron0x22a20c0()*-0.0542447);
}

double NNfunction_sb_dLuL::synapse0x22b6d80() {
   return (neuron0x22a2400()*-0.0191851);
}

double NNfunction_sb_dLuL::synapse0x22b6dc0() {
   return (neuron0x22a2960()*0.0191646);
}

double NNfunction_sb_dLuL::synapse0x22b7440() {
   return (neuron0x22a2ca0()*0.0224079);
}

double NNfunction_sb_dLuL::synapse0x22b7480() {
   return (neuron0x22a2fe0()*0.065965);
}

double NNfunction_sb_dLuL::synapse0x22b74c0() {
   return (neuron0x22a3320()*0.0364784);
}

double NNfunction_sb_dLuL::synapse0x22b7500() {
   return (neuron0x22a3660()*-0.0297922);
}

double NNfunction_sb_dLuL::synapse0x22b7540() {
   return (neuron0x22a39a0()*-0.00875401);
}

double NNfunction_sb_dLuL::synapse0x22b7580() {
   return (neuron0x22a3ce0()*-0.033669);
}

double NNfunction_sb_dLuL::synapse0x22b7900() {
   return (neuron0x229f090()*-0.00811507);
}

double NNfunction_sb_dLuL::synapse0x22b7940() {
   return (neuron0x229f340()*0.00563654);
}

double NNfunction_sb_dLuL::synapse0x22b7980() {
   return (neuron0x229f680()*0.0243826);
}

double NNfunction_sb_dLuL::synapse0x22b79c0() {
   return (neuron0x229f9c0()*6.94346);
}

double NNfunction_sb_dLuL::synapse0x22b7a00() {
   return (neuron0x229fd00()*0.0152279);
}

double NNfunction_sb_dLuL::synapse0x22b7a40() {
   return (neuron0x22a0040()*-0.00698962);
}

double NNfunction_sb_dLuL::synapse0x22b7a80() {
   return (neuron0x22a0380()*0.0188388);
}

double NNfunction_sb_dLuL::synapse0x22b7ac0() {
   return (neuron0x22a06c0()*0.0109985);
}

double NNfunction_sb_dLuL::synapse0x22b7b00() {
   return (neuron0x22a0a00()*0.0083072);
}

double NNfunction_sb_dLuL::synapse0x22b7b40() {
   return (neuron0x22a0d40()*-0.00221866);
}

double NNfunction_sb_dLuL::synapse0x22b7b80() {
   return (neuron0x22a1080()*0.0192776);
}

double NNfunction_sb_dLuL::synapse0x22b7bc0() {
   return (neuron0x22a13c0()*0.345643);
}

double NNfunction_sb_dLuL::synapse0x22b7c00() {
   return (neuron0x22a1700()*-0.00148158);
}

double NNfunction_sb_dLuL::synapse0x22b7c40() {
   return (neuron0x22a1a40()*0.013287);
}

double NNfunction_sb_dLuL::synapse0x22b7c80() {
   return (neuron0x22a1d80()*-0.00489506);
}

double NNfunction_sb_dLuL::synapse0x22b7cc0() {
   return (neuron0x22a20c0()*0.00355943);
}

double NNfunction_sb_dLuL::synapse0x22b7750() {
   return (neuron0x22a2400()*-0.0104519);
}

double NNfunction_sb_dLuL::synapse0x22b7790() {
   return (neuron0x22a2960()*-0.013966);
}

double NNfunction_sb_dLuL::synapse0x22b7e10() {
   return (neuron0x22a2ca0()*0.0106285);
}

double NNfunction_sb_dLuL::synapse0x22b7e50() {
   return (neuron0x22a2fe0()*0.0232914);
}

double NNfunction_sb_dLuL::synapse0x22b7e90() {
   return (neuron0x22a3320()*0.00210458);
}

double NNfunction_sb_dLuL::synapse0x22b7ed0() {
   return (neuron0x22a3660()*-0.014701);
}

double NNfunction_sb_dLuL::synapse0x22b7f10() {
   return (neuron0x22a39a0()*0.00773584);
}

double NNfunction_sb_dLuL::synapse0x22b7f50() {
   return (neuron0x22a3ce0()*0.000367452);
}

double NNfunction_sb_dLuL::synapse0x22b82d0() {
   return (neuron0x229f090()*0.28315);
}

double NNfunction_sb_dLuL::synapse0x22b8310() {
   return (neuron0x229f340()*0.086893);
}

double NNfunction_sb_dLuL::synapse0x22b8350() {
   return (neuron0x229f680()*0.0819376);
}

double NNfunction_sb_dLuL::synapse0x22b8390() {
   return (neuron0x229f9c0()*-3.51328);
}

double NNfunction_sb_dLuL::synapse0x22b83d0() {
   return (neuron0x229fd00()*0.447978);
}

double NNfunction_sb_dLuL::synapse0x22b8410() {
   return (neuron0x22a0040()*0.0715818);
}

double NNfunction_sb_dLuL::synapse0x22b8450() {
   return (neuron0x22a0380()*-0.0973597);
}

double NNfunction_sb_dLuL::synapse0x22b8490() {
   return (neuron0x22a06c0()*0.0521885);
}

double NNfunction_sb_dLuL::synapse0x22b84d0() {
   return (neuron0x22a0a00()*-0.1185);
}

double NNfunction_sb_dLuL::synapse0x22b8510() {
   return (neuron0x22a0d40()*-0.150002);
}

double NNfunction_sb_dLuL::synapse0x22b8550() {
   return (neuron0x22a1080()*-0.215386);
}

double NNfunction_sb_dLuL::synapse0x22b8590() {
   return (neuron0x22a13c0()*-0.14268);
}

double NNfunction_sb_dLuL::synapse0x22b85d0() {
   return (neuron0x22a1700()*0.323815);
}

double NNfunction_sb_dLuL::synapse0x22b8610() {
   return (neuron0x22a1a40()*0.207194);
}

double NNfunction_sb_dLuL::synapse0x22b8650() {
   return (neuron0x22a1d80()*0.0955453);
}

double NNfunction_sb_dLuL::synapse0x22b8690() {
   return (neuron0x22a20c0()*0.178893);
}

double NNfunction_sb_dLuL::synapse0x22b8120() {
   return (neuron0x22a2400()*0.41044);
}

double NNfunction_sb_dLuL::synapse0x22b8160() {
   return (neuron0x22a2960()*0.0977434);
}

double NNfunction_sb_dLuL::synapse0x22b87e0() {
   return (neuron0x22a2ca0()*0.42963);
}

double NNfunction_sb_dLuL::synapse0x22b8820() {
   return (neuron0x22a2fe0()*0.46171);
}

double NNfunction_sb_dLuL::synapse0x22b8860() {
   return (neuron0x22a3320()*-0.0580252);
}

double NNfunction_sb_dLuL::synapse0x22b88a0() {
   return (neuron0x22a3660()*0.202907);
}

double NNfunction_sb_dLuL::synapse0x22b88e0() {
   return (neuron0x22a39a0()*0.304469);
}

double NNfunction_sb_dLuL::synapse0x22b8920() {
   return (neuron0x22a3ce0()*-0.0311659);
}

double NNfunction_sb_dLuL::synapse0x22b8ca0() {
   return (neuron0x229f090()*1.10194);
}

double NNfunction_sb_dLuL::synapse0x22b8ce0() {
   return (neuron0x229f340()*0.0278659);
}

double NNfunction_sb_dLuL::synapse0x22b8d20() {
   return (neuron0x229f680()*-0.738621);
}

double NNfunction_sb_dLuL::synapse0x22b8d60() {
   return (neuron0x229f9c0()*0.498545);
}

double NNfunction_sb_dLuL::synapse0x22b8da0() {
   return (neuron0x229fd00()*0.517819);
}

double NNfunction_sb_dLuL::synapse0x22b8de0() {
   return (neuron0x22a0040()*0.0263126);
}

double NNfunction_sb_dLuL::synapse0x22b8e20() {
   return (neuron0x22a0380()*0.053114);
}

double NNfunction_sb_dLuL::synapse0x22b8e60() {
   return (neuron0x22a06c0()*-0.18943);
}

double NNfunction_sb_dLuL::synapse0x22b8ea0() {
   return (neuron0x22a0a00()*0.0874216);
}

double NNfunction_sb_dLuL::synapse0x22b8ee0() {
   return (neuron0x22a0d40()*-0.282981);
}

double NNfunction_sb_dLuL::synapse0x22b8f20() {
   return (neuron0x22a1080()*-0.188282);
}

double NNfunction_sb_dLuL::synapse0x22b8f60() {
   return (neuron0x22a13c0()*-0.529822);
}

double NNfunction_sb_dLuL::synapse0x22b8fa0() {
   return (neuron0x22a1700()*0.723821);
}

double NNfunction_sb_dLuL::synapse0x22b8fe0() {
   return (neuron0x22a1a40()*-0.646481);
}

double NNfunction_sb_dLuL::synapse0x22b9020() {
   return (neuron0x22a1d80()*0.0821436);
}

double NNfunction_sb_dLuL::synapse0x22b9060() {
   return (neuron0x22a20c0()*-0.179579);
}

double NNfunction_sb_dLuL::synapse0x22b8af0() {
   return (neuron0x22a2400()*0.987715);
}

double NNfunction_sb_dLuL::synapse0x22b8b30() {
   return (neuron0x22a2960()*-0.317611);
}

double NNfunction_sb_dLuL::synapse0x22b91b0() {
   return (neuron0x22a2ca0()*0.178986);
}

double NNfunction_sb_dLuL::synapse0x22b91f0() {
   return (neuron0x22a2fe0()*-0.0796912);
}

double NNfunction_sb_dLuL::synapse0x22b9230() {
   return (neuron0x22a3320()*0.183467);
}

double NNfunction_sb_dLuL::synapse0x22b9270() {
   return (neuron0x22a3660()*0.845552);
}

double NNfunction_sb_dLuL::synapse0x22b92b0() {
   return (neuron0x22a39a0()*0.0582232);
}

double NNfunction_sb_dLuL::synapse0x22b92f0() {
   return (neuron0x22a3ce0()*0.392653);
}

double NNfunction_sb_dLuL::synapse0x22b9670() {
   return (neuron0x229f090()*-0.281515);
}

double NNfunction_sb_dLuL::synapse0x22b96b0() {
   return (neuron0x229f340()*-0.437856);
}

double NNfunction_sb_dLuL::synapse0x22b96f0() {
   return (neuron0x229f680()*0.272113);
}

double NNfunction_sb_dLuL::synapse0x22b9730() {
   return (neuron0x229f9c0()*-0.804038);
}

double NNfunction_sb_dLuL::synapse0x22b9770() {
   return (neuron0x229fd00()*-1.10752);
}

double NNfunction_sb_dLuL::synapse0x22b97b0() {
   return (neuron0x22a0040()*-0.512885);
}

double NNfunction_sb_dLuL::synapse0x22b97f0() {
   return (neuron0x22a0380()*-0.910341);
}

double NNfunction_sb_dLuL::synapse0x22b9830() {
   return (neuron0x22a06c0()*0.628363);
}

double NNfunction_sb_dLuL::synapse0x22b9870() {
   return (neuron0x22a0a00()*0.501098);
}

double NNfunction_sb_dLuL::synapse0x22b98b0() {
   return (neuron0x22a0d40()*0.441016);
}

double NNfunction_sb_dLuL::synapse0x22b98f0() {
   return (neuron0x22a1080()*-0.216361);
}

double NNfunction_sb_dLuL::synapse0x22b9930() {
   return (neuron0x22a13c0()*-0.169158);
}

double NNfunction_sb_dLuL::synapse0x22b9970() {
   return (neuron0x22a1700()*-0.600087);
}

double NNfunction_sb_dLuL::synapse0x22b99b0() {
   return (neuron0x22a1a40()*0.768221);
}

double NNfunction_sb_dLuL::synapse0x22b99f0() {
   return (neuron0x22a1d80()*0.154083);
}

double NNfunction_sb_dLuL::synapse0x22b9a30() {
   return (neuron0x22a20c0()*-0.552825);
}

double NNfunction_sb_dLuL::synapse0x22b94c0() {
   return (neuron0x22a2400()*-0.120719);
}

double NNfunction_sb_dLuL::synapse0x22b9500() {
   return (neuron0x22a2960()*0.0454654);
}

double NNfunction_sb_dLuL::synapse0x22b9b80() {
   return (neuron0x22a2ca0()*0.38346);
}

double NNfunction_sb_dLuL::synapse0x22b9bc0() {
   return (neuron0x22a2fe0()*-0.237796);
}

double NNfunction_sb_dLuL::synapse0x22b9c00() {
   return (neuron0x22a3320()*-0.0641265);
}

double NNfunction_sb_dLuL::synapse0x22b9c40() {
   return (neuron0x22a3660()*0.337923);
}

double NNfunction_sb_dLuL::synapse0x22b9c80() {
   return (neuron0x22a39a0()*-0.423193);
}

double NNfunction_sb_dLuL::synapse0x22b9cc0() {
   return (neuron0x22a3ce0()*-0.619477);
}

double NNfunction_sb_dLuL::synapse0x22ba040() {
   return (neuron0x229f090()*-0.0195843);
}

double NNfunction_sb_dLuL::synapse0x22ba080() {
   return (neuron0x229f340()*-0.0148017);
}

double NNfunction_sb_dLuL::synapse0x22ba0c0() {
   return (neuron0x229f680()*0.0603633);
}

double NNfunction_sb_dLuL::synapse0x22ba100() {
   return (neuron0x229f9c0()*-3.47291);
}

double NNfunction_sb_dLuL::synapse0x22ba140() {
   return (neuron0x229fd00()*-0.0222001);
}

double NNfunction_sb_dLuL::synapse0x22ba180() {
   return (neuron0x22a0040()*-0.00874576);
}

double NNfunction_sb_dLuL::synapse0x22ba1c0() {
   return (neuron0x22a0380()*0.0151042);
}

double NNfunction_sb_dLuL::synapse0x22ba200() {
   return (neuron0x22a06c0()*0.00477038);
}

double NNfunction_sb_dLuL::synapse0x22ba240() {
   return (neuron0x22a0a00()*0.00622804);
}

double NNfunction_sb_dLuL::synapse0x22ba280() {
   return (neuron0x22a0d40()*0.0122597);
}

double NNfunction_sb_dLuL::synapse0x22ba2c0() {
   return (neuron0x22a1080()*0.0108714);
}

double NNfunction_sb_dLuL::synapse0x22ba300() {
   return (neuron0x22a13c0()*-0.156521);
}

double NNfunction_sb_dLuL::synapse0x22ba340() {
   return (neuron0x22a1700()*-0.0170055);
}

double NNfunction_sb_dLuL::synapse0x22ba380() {
   return (neuron0x22a1a40()*0.0171411);
}

double NNfunction_sb_dLuL::synapse0x22ba3c0() {
   return (neuron0x22a1d80()*-0.0349394);
}

double NNfunction_sb_dLuL::synapse0x22ba400() {
   return (neuron0x22a20c0()*-0.0174828);
}

double NNfunction_sb_dLuL::synapse0x22b9e90() {
   return (neuron0x22a2400()*0.00264265);
}

double NNfunction_sb_dLuL::synapse0x22b9ed0() {
   return (neuron0x22a2960()*-0.00334489);
}

double NNfunction_sb_dLuL::synapse0x22ba550() {
   return (neuron0x22a2ca0()*-0.0065308);
}

double NNfunction_sb_dLuL::synapse0x22ba590() {
   return (neuron0x22a2fe0()*-0.0244033);
}

double NNfunction_sb_dLuL::synapse0x22ba5d0() {
   return (neuron0x22a3320()*-0.00276989);
}

double NNfunction_sb_dLuL::synapse0x22ba610() {
   return (neuron0x22a3660()*-0.00140902);
}

double NNfunction_sb_dLuL::synapse0x22ba650() {
   return (neuron0x22a39a0()*-0.00982808);
}

double NNfunction_sb_dLuL::synapse0x22ba690() {
   return (neuron0x22a3ce0()*-0.00284002);
}

double NNfunction_sb_dLuL::synapse0x22baa10() {
   return (neuron0x229f090()*0.134561);
}

double NNfunction_sb_dLuL::synapse0x22aefe0() {
   return (neuron0x229f340()*0.420543);
}

double NNfunction_sb_dLuL::synapse0x22af020() {
   return (neuron0x229f680()*-0.158375);
}

double NNfunction_sb_dLuL::synapse0x22af060() {
   return (neuron0x229f9c0()*-0.519073);
}

double NNfunction_sb_dLuL::synapse0x22af2b0() {
   return (neuron0x229fd00()*-0.416385);
}

double NNfunction_sb_dLuL::synapse0x22af2f0() {
   return (neuron0x22a0040()*0.244644);
}

double NNfunction_sb_dLuL::synapse0x22af330() {
   return (neuron0x22a0380()*-0.0857737);
}

double NNfunction_sb_dLuL::synapse0x22af580() {
   return (neuron0x22a06c0()*-0.358573);
}

double NNfunction_sb_dLuL::synapse0x22af5c0() {
   return (neuron0x22a0a00()*0.663492);
}

double NNfunction_sb_dLuL::synapse0x22af810() {
   return (neuron0x22a0d40()*-0.0765146);
}

double NNfunction_sb_dLuL::synapse0x22af850() {
   return (neuron0x22a1080()*-0.333996);
}

double NNfunction_sb_dLuL::synapse0x22af890() {
   return (neuron0x22a13c0()*-0.543002);
}

double NNfunction_sb_dLuL::synapse0x22afae0() {
   return (neuron0x22a1700()*0.576802);
}

double NNfunction_sb_dLuL::synapse0x22afb20() {
   return (neuron0x22a1a40()*0.210118);
}

double NNfunction_sb_dLuL::synapse0x22afd70() {
   return (neuron0x22a1d80()*0.0563482);
}

double NNfunction_sb_dLuL::synapse0x22afdb0() {
   return (neuron0x22a20c0()*-0.174263);
}

double NNfunction_sb_dLuL::synapse0x22ba860() {
   return (neuron0x22a2400()*-0.713119);
}

double NNfunction_sb_dLuL::synapse0x22ba8a0() {
   return (neuron0x22a2960()*-0.715751);
}

double NNfunction_sb_dLuL::synapse0x22aff00() {
   return (neuron0x22a2ca0()*0.290236);
}

double NNfunction_sb_dLuL::synapse0x22b0410() {
   return (neuron0x22a2fe0()*0.0266139);
}

double NNfunction_sb_dLuL::synapse0x22b0450() {
   return (neuron0x22a3320()*-0.0286579);
}

double NNfunction_sb_dLuL::synapse0x22b0490() {
   return (neuron0x22a3660()*0.12446);
}

double NNfunction_sb_dLuL::synapse0x22b06e0() {
   return (neuron0x22a39a0()*-0.341791);
}

double NNfunction_sb_dLuL::synapse0x22b0720() {
   return (neuron0x22a3ce0()*0.260802);
}

double NNfunction_sb_dLuL::synapse0x22affd0() {
   return (neuron0x229f090()*-0.400335);
}

double NNfunction_sb_dLuL::synapse0x22b0010() {
   return (neuron0x229f340()*0.18084);
}

double NNfunction_sb_dLuL::synapse0x22b0050() {
   return (neuron0x229f680()*-0.580359);
}

double NNfunction_sb_dLuL::synapse0x22b0090() {
   return (neuron0x229f9c0()*1.37002);
}

double NNfunction_sb_dLuL::synapse0x22b0a10() {
   return (neuron0x229fd00()*-0.495429);
}

double NNfunction_sb_dLuL::synapse0x22bcd60() {
   return (neuron0x22a0040()*-0.00953294);
}

double NNfunction_sb_dLuL::synapse0x22bcda0() {
   return (neuron0x22a0380()*-0.719288);
}

double NNfunction_sb_dLuL::synapse0x22bcde0() {
   return (neuron0x22a06c0()*-0.566651);
}

double NNfunction_sb_dLuL::synapse0x22bce20() {
   return (neuron0x22a0a00()*0.354395);
}

double NNfunction_sb_dLuL::synapse0x22bce60() {
   return (neuron0x22a0d40()*-0.168994);
}

double NNfunction_sb_dLuL::synapse0x22bcea0() {
   return (neuron0x22a1080()*-0.148377);
}

double NNfunction_sb_dLuL::synapse0x22bcee0() {
   return (neuron0x22a13c0()*-0.294784);
}

double NNfunction_sb_dLuL::synapse0x22bcf20() {
   return (neuron0x22a1700()*0.235173);
}

double NNfunction_sb_dLuL::synapse0x22bcf60() {
   return (neuron0x22a1a40()*-0.0752789);
}

double NNfunction_sb_dLuL::synapse0x22bcfa0() {
   return (neuron0x22a1d80()*-0.734138);
}

double NNfunction_sb_dLuL::synapse0x22bcfe0() {
   return (neuron0x22a20c0()*-0.356294);
}

double NNfunction_sb_dLuL::synapse0x22b08f0() {
   return (neuron0x22a2400()*-0.441832);
}

double NNfunction_sb_dLuL::synapse0x22b0930() {
   return (neuron0x22a2960()*0.264514);
}

double NNfunction_sb_dLuL::synapse0x22bd130() {
   return (neuron0x22a2ca0()*-1.15706);
}

double NNfunction_sb_dLuL::synapse0x22bd170() {
   return (neuron0x22a2fe0()*-0.234974);
}

double NNfunction_sb_dLuL::synapse0x22bd1b0() {
   return (neuron0x22a3320()*-0.294633);
}

double NNfunction_sb_dLuL::synapse0x22bd1f0() {
   return (neuron0x22a3660()*-0.188916);
}

double NNfunction_sb_dLuL::synapse0x22bd230() {
   return (neuron0x22a39a0()*-0.596252);
}

double NNfunction_sb_dLuL::synapse0x22bd270() {
   return (neuron0x22a3ce0()*0.199584);
}

double NNfunction_sb_dLuL::synapse0x22bd5f0() {
   return (neuron0x229f090()*-0.382481);
}

double NNfunction_sb_dLuL::synapse0x22bd630() {
   return (neuron0x229f340()*0.69051);
}

double NNfunction_sb_dLuL::synapse0x22bd670() {
   return (neuron0x229f680()*-0.359745);
}

double NNfunction_sb_dLuL::synapse0x22bd6b0() {
   return (neuron0x229f9c0()*-0.443942);
}

double NNfunction_sb_dLuL::synapse0x22bd6f0() {
   return (neuron0x229fd00()*0.954854);
}

double NNfunction_sb_dLuL::synapse0x22bd730() {
   return (neuron0x22a0040()*0.416874);
}

double NNfunction_sb_dLuL::synapse0x22bd770() {
   return (neuron0x22a0380()*-0.373209);
}

double NNfunction_sb_dLuL::synapse0x22bd7b0() {
   return (neuron0x22a06c0()*0.0366229);
}

double NNfunction_sb_dLuL::synapse0x22bd7f0() {
   return (neuron0x22a0a00()*0.119837);
}

double NNfunction_sb_dLuL::synapse0x22bd830() {
   return (neuron0x22a0d40()*0.180447);
}

double NNfunction_sb_dLuL::synapse0x22bd870() {
   return (neuron0x22a1080()*0.303139);
}

double NNfunction_sb_dLuL::synapse0x22bd8b0() {
   return (neuron0x22a13c0()*0.750622);
}

double NNfunction_sb_dLuL::synapse0x22bd8f0() {
   return (neuron0x22a1700()*-0.163116);
}

double NNfunction_sb_dLuL::synapse0x22bd930() {
   return (neuron0x22a1a40()*0.256123);
}

double NNfunction_sb_dLuL::synapse0x22bd970() {
   return (neuron0x22a1d80()*-0.270142);
}

double NNfunction_sb_dLuL::synapse0x22bd9b0() {
   return (neuron0x22a20c0()*-0.32685);
}

double NNfunction_sb_dLuL::synapse0x22bd440() {
   return (neuron0x22a2400()*-0.499796);
}

double NNfunction_sb_dLuL::synapse0x22bd480() {
   return (neuron0x22a2960()*-0.217003);
}

double NNfunction_sb_dLuL::synapse0x22bdb00() {
   return (neuron0x22a2ca0()*-1.13017);
}

double NNfunction_sb_dLuL::synapse0x22bdb40() {
   return (neuron0x22a2fe0()*0.35245);
}

double NNfunction_sb_dLuL::synapse0x22bdb80() {
   return (neuron0x22a3320()*-0.408782);
}

double NNfunction_sb_dLuL::synapse0x22bdbc0() {
   return (neuron0x22a3660()*0.963968);
}

double NNfunction_sb_dLuL::synapse0x22bdc00() {
   return (neuron0x22a39a0()*-0.00341287);
}

double NNfunction_sb_dLuL::synapse0x22bdc40() {
   return (neuron0x22a3ce0()*0.607173);
}

double NNfunction_sb_dLuL::synapse0x22bdfc0() {
   return (neuron0x229f090()*-1.36509);
}

double NNfunction_sb_dLuL::synapse0x22be000() {
   return (neuron0x229f340()*0.38424);
}

double NNfunction_sb_dLuL::synapse0x22be040() {
   return (neuron0x229f680()*-0.129491);
}

double NNfunction_sb_dLuL::synapse0x22be080() {
   return (neuron0x229f9c0()*0.861356);
}

double NNfunction_sb_dLuL::synapse0x22be0c0() {
   return (neuron0x229fd00()*-0.23998);
}

double NNfunction_sb_dLuL::synapse0x22be100() {
   return (neuron0x22a0040()*0.182371);
}

double NNfunction_sb_dLuL::synapse0x22be140() {
   return (neuron0x22a0380()*-0.168505);
}

double NNfunction_sb_dLuL::synapse0x22be180() {
   return (neuron0x22a06c0()*1.04104);
}

double NNfunction_sb_dLuL::synapse0x22be1c0() {
   return (neuron0x22a0a00()*0.0652736);
}

double NNfunction_sb_dLuL::synapse0x22be200() {
   return (neuron0x22a0d40()*0.161522);
}

double NNfunction_sb_dLuL::synapse0x22be240() {
   return (neuron0x22a1080()*0.28978);
}

double NNfunction_sb_dLuL::synapse0x22be280() {
   return (neuron0x22a13c0()*-0.489708);
}

double NNfunction_sb_dLuL::synapse0x22be2c0() {
   return (neuron0x22a1700()*-0.271881);
}

double NNfunction_sb_dLuL::synapse0x22be300() {
   return (neuron0x22a1a40()*-0.519138);
}

double NNfunction_sb_dLuL::synapse0x22be340() {
   return (neuron0x22a1d80()*-0.300335);
}

double NNfunction_sb_dLuL::synapse0x22be380() {
   return (neuron0x22a20c0()*-1.13974);
}

double NNfunction_sb_dLuL::synapse0x22bde10() {
   return (neuron0x22a2400()*-0.11584);
}

double NNfunction_sb_dLuL::synapse0x22bde50() {
   return (neuron0x22a2960()*-0.23961);
}

double NNfunction_sb_dLuL::synapse0x22be4d0() {
   return (neuron0x22a2ca0()*0.190424);
}

double NNfunction_sb_dLuL::synapse0x22be510() {
   return (neuron0x22a2fe0()*-0.367408);
}

double NNfunction_sb_dLuL::synapse0x22be550() {
   return (neuron0x22a3320()*0.00505078);
}

double NNfunction_sb_dLuL::synapse0x22be590() {
   return (neuron0x22a3660()*0.237619);
}

double NNfunction_sb_dLuL::synapse0x22be5d0() {
   return (neuron0x22a39a0()*0.514037);
}

double NNfunction_sb_dLuL::synapse0x22be610() {
   return (neuron0x22a3ce0()*-0.141252);
}

double NNfunction_sb_dLuL::synapse0x22be990() {
   return (neuron0x229f090()*0.150281);
}

double NNfunction_sb_dLuL::synapse0x22be9d0() {
   return (neuron0x229f340()*-0.307004);
}

double NNfunction_sb_dLuL::synapse0x22bea10() {
   return (neuron0x229f680()*1.36064);
}

double NNfunction_sb_dLuL::synapse0x22bea50() {
   return (neuron0x229f9c0()*-0.656713);
}

double NNfunction_sb_dLuL::synapse0x22bea90() {
   return (neuron0x229fd00()*-0.118025);
}

double NNfunction_sb_dLuL::synapse0x22bead0() {
   return (neuron0x22a0040()*0.126842);
}

double NNfunction_sb_dLuL::synapse0x22beb10() {
   return (neuron0x22a0380()*0.017544);
}

double NNfunction_sb_dLuL::synapse0x22beb50() {
   return (neuron0x22a06c0()*0.628203);
}

double NNfunction_sb_dLuL::synapse0x22beb90() {
   return (neuron0x22a0a00()*0.257613);
}

double NNfunction_sb_dLuL::synapse0x22bebd0() {
   return (neuron0x22a0d40()*0.11149);
}

double NNfunction_sb_dLuL::synapse0x22bec10() {
   return (neuron0x22a1080()*-0.124103);
}

double NNfunction_sb_dLuL::synapse0x22bec50() {
   return (neuron0x22a13c0()*0.428329);
}

double NNfunction_sb_dLuL::synapse0x22bec90() {
   return (neuron0x22a1700()*0.264672);
}

double NNfunction_sb_dLuL::synapse0x22becd0() {
   return (neuron0x22a1a40()*0.633984);
}

double NNfunction_sb_dLuL::synapse0x22bed10() {
   return (neuron0x22a1d80()*1.88137);
}

double NNfunction_sb_dLuL::synapse0x22bed50() {
   return (neuron0x22a20c0()*0.696532);
}

double NNfunction_sb_dLuL::synapse0x22be7e0() {
   return (neuron0x22a2400()*-0.421716);
}

double NNfunction_sb_dLuL::synapse0x22be820() {
   return (neuron0x22a2960()*0.052776);
}

double NNfunction_sb_dLuL::synapse0x22beea0() {
   return (neuron0x22a2ca0()*0.0803249);
}

double NNfunction_sb_dLuL::synapse0x22beee0() {
   return (neuron0x22a2fe0()*0.186961);
}

double NNfunction_sb_dLuL::synapse0x22bef20() {
   return (neuron0x22a3320()*0.463391);
}

double NNfunction_sb_dLuL::synapse0x22bef60() {
   return (neuron0x22a3660()*-0.461999);
}

double NNfunction_sb_dLuL::synapse0x22befa0() {
   return (neuron0x22a39a0()*-0.283422);
}

double NNfunction_sb_dLuL::synapse0x22befe0() {
   return (neuron0x22a3ce0()*0.0474661);
}

double NNfunction_sb_dLuL::synapse0x22bf360() {
   return (neuron0x229f090()*0.338373);
}

double NNfunction_sb_dLuL::synapse0x22bf3a0() {
   return (neuron0x229f340()*0.971944);
}

double NNfunction_sb_dLuL::synapse0x22bf3e0() {
   return (neuron0x229f680()*-0.111736);
}

double NNfunction_sb_dLuL::synapse0x22bf420() {
   return (neuron0x229f9c0()*0.603775);
}

double NNfunction_sb_dLuL::synapse0x22bf460() {
   return (neuron0x229fd00()*-1.13324);
}

double NNfunction_sb_dLuL::synapse0x22bf4a0() {
   return (neuron0x22a0040()*0.77924);
}

double NNfunction_sb_dLuL::synapse0x22bf4e0() {
   return (neuron0x22a0380()*-0.0838007);
}

double NNfunction_sb_dLuL::synapse0x22bf520() {
   return (neuron0x22a06c0()*-0.538553);
}

double NNfunction_sb_dLuL::synapse0x22bf560() {
   return (neuron0x22a0a00()*-0.760071);
}

double NNfunction_sb_dLuL::synapse0x22bf5a0() {
   return (neuron0x22a0d40()*0.505199);
}

double NNfunction_sb_dLuL::synapse0x22bf5e0() {
   return (neuron0x22a1080()*-0.142444);
}

double NNfunction_sb_dLuL::synapse0x22bf620() {
   return (neuron0x22a13c0()*-0.308285);
}

double NNfunction_sb_dLuL::synapse0x22bf660() {
   return (neuron0x22a1700()*1.42141);
}

double NNfunction_sb_dLuL::synapse0x22bf6a0() {
   return (neuron0x22a1a40()*0.540772);
}

double NNfunction_sb_dLuL::synapse0x22bf6e0() {
   return (neuron0x22a1d80()*-0.254978);
}

double NNfunction_sb_dLuL::synapse0x22bf720() {
   return (neuron0x22a20c0()*0.168755);
}

double NNfunction_sb_dLuL::synapse0x22bf1b0() {
   return (neuron0x22a2400()*-0.323807);
}

double NNfunction_sb_dLuL::synapse0x22bf1f0() {
   return (neuron0x22a2960()*-0.822264);
}

double NNfunction_sb_dLuL::synapse0x22bf870() {
   return (neuron0x22a2ca0()*0.417019);
}

double NNfunction_sb_dLuL::synapse0x22bf8b0() {
   return (neuron0x22a2fe0()*-0.644581);
}

double NNfunction_sb_dLuL::synapse0x22bf8f0() {
   return (neuron0x22a3320()*-0.273042);
}

double NNfunction_sb_dLuL::synapse0x22bf930() {
   return (neuron0x22a3660()*-0.678959);
}

double NNfunction_sb_dLuL::synapse0x22bf970() {
   return (neuron0x22a39a0()*0.647987);
}

double NNfunction_sb_dLuL::synapse0x22bf9b0() {
   return (neuron0x22a3ce0()*-0.336867);
}

double NNfunction_sb_dLuL::synapse0x22bfd30() {
   return (neuron0x229f090()*-0.0350932);
}

double NNfunction_sb_dLuL::synapse0x22bfd70() {
   return (neuron0x229f340()*-0.0206058);
}

double NNfunction_sb_dLuL::synapse0x22bfdb0() {
   return (neuron0x229f680()*-0.805643);
}

double NNfunction_sb_dLuL::synapse0x22bfdf0() {
   return (neuron0x229f9c0()*0.441452);
}

double NNfunction_sb_dLuL::synapse0x22bfe30() {
   return (neuron0x229fd00()*0.00663731);
}

double NNfunction_sb_dLuL::synapse0x22bfe70() {
   return (neuron0x22a0040()*0.0227831);
}

double NNfunction_sb_dLuL::synapse0x22bfeb0() {
   return (neuron0x22a0380()*0.0155827);
}

double NNfunction_sb_dLuL::synapse0x22bfef0() {
   return (neuron0x22a06c0()*-0.00369208);
}

double NNfunction_sb_dLuL::synapse0x22bff30() {
   return (neuron0x22a0a00()*0.031151);
}

double NNfunction_sb_dLuL::synapse0x22bff70() {
   return (neuron0x22a0d40()*-0.0278504);
}

double NNfunction_sb_dLuL::synapse0x22bffb0() {
   return (neuron0x22a1080()*-0.0295408);
}

double NNfunction_sb_dLuL::synapse0x22bfff0() {
   return (neuron0x22a13c0()*-0.0377443);
}

double NNfunction_sb_dLuL::synapse0x22c0030() {
   return (neuron0x22a1700()*0.00951778);
}

double NNfunction_sb_dLuL::synapse0x22c0070() {
   return (neuron0x22a1a40()*-0.0270622);
}

double NNfunction_sb_dLuL::synapse0x22c00b0() {
   return (neuron0x22a1d80()*0.0517865);
}

double NNfunction_sb_dLuL::synapse0x22c00f0() {
   return (neuron0x22a20c0()*-0.0384979);
}

double NNfunction_sb_dLuL::synapse0x22bfb80() {
   return (neuron0x22a2400()*-0.0401121);
}

double NNfunction_sb_dLuL::synapse0x22bfbc0() {
   return (neuron0x22a2960()*-0.0072063);
}

double NNfunction_sb_dLuL::synapse0x22c0240() {
   return (neuron0x22a2ca0()*0.0441976);
}

double NNfunction_sb_dLuL::synapse0x22c0280() {
   return (neuron0x22a2fe0()*0.0117724);
}

double NNfunction_sb_dLuL::synapse0x22c02c0() {
   return (neuron0x22a3320()*-0.000970477);
}

double NNfunction_sb_dLuL::synapse0x22c0300() {
   return (neuron0x22a3660()*-0.00660984);
}

double NNfunction_sb_dLuL::synapse0x22c0340() {
   return (neuron0x22a39a0()*-0.0343857);
}

double NNfunction_sb_dLuL::synapse0x22c0380() {
   return (neuron0x22a3ce0()*0.0360457);
}

double NNfunction_sb_dLuL::synapse0x22c0700() {
   return (neuron0x229f090()*-0.813614);
}

double NNfunction_sb_dLuL::synapse0x22c0740() {
   return (neuron0x229f340()*0.526178);
}

double NNfunction_sb_dLuL::synapse0x22c0780() {
   return (neuron0x229f680()*0.592425);
}

double NNfunction_sb_dLuL::synapse0x22c07c0() {
   return (neuron0x229f9c0()*0.686002);
}

double NNfunction_sb_dLuL::synapse0x22c0800() {
   return (neuron0x229fd00()*-0.396289);
}

double NNfunction_sb_dLuL::synapse0x22c0840() {
   return (neuron0x22a0040()*-0.45129);
}

double NNfunction_sb_dLuL::synapse0x22c0880() {
   return (neuron0x22a0380()*0.0841445);
}

double NNfunction_sb_dLuL::synapse0x22c08c0() {
   return (neuron0x22a06c0()*0.303328);
}

double NNfunction_sb_dLuL::synapse0x22c0900() {
   return (neuron0x22a0a00()*-0.556161);
}

double NNfunction_sb_dLuL::synapse0x22c0940() {
   return (neuron0x22a0d40()*0.022738);
}

double NNfunction_sb_dLuL::synapse0x22c0980() {
   return (neuron0x22a1080()*0.107179);
}

double NNfunction_sb_dLuL::synapse0x22c09c0() {
   return (neuron0x22a13c0()*-1.0776);
}

double NNfunction_sb_dLuL::synapse0x22c0a00() {
   return (neuron0x22a1700()*-0.527169);
}

double NNfunction_sb_dLuL::synapse0x22c0a40() {
   return (neuron0x22a1a40()*0.136682);
}

double NNfunction_sb_dLuL::synapse0x22c0a80() {
   return (neuron0x22a1d80()*-1.12208);
}

double NNfunction_sb_dLuL::synapse0x22c0ac0() {
   return (neuron0x22a20c0()*0.570546);
}

double NNfunction_sb_dLuL::synapse0x22c0550() {
   return (neuron0x22a2400()*0.144427);
}

double NNfunction_sb_dLuL::synapse0x22c0590() {
   return (neuron0x22a2960()*-0.183919);
}

double NNfunction_sb_dLuL::synapse0x22c0c10() {
   return (neuron0x22a2ca0()*-1.04897);
}

double NNfunction_sb_dLuL::synapse0x22c0c50() {
   return (neuron0x22a2fe0()*0.465761);
}

double NNfunction_sb_dLuL::synapse0x22c0c90() {
   return (neuron0x22a3320()*0.892887);
}

double NNfunction_sb_dLuL::synapse0x22c0cd0() {
   return (neuron0x22a3660()*-0.730481);
}

double NNfunction_sb_dLuL::synapse0x22c0d10() {
   return (neuron0x22a39a0()*-0.0302247);
}

double NNfunction_sb_dLuL::synapse0x22c0d50() {
   return (neuron0x22a3ce0()*-0.467607);
}

double NNfunction_sb_dLuL::synapse0x22c10d0() {
   return (neuron0x229f090()*-0.0211974);
}

double NNfunction_sb_dLuL::synapse0x22c1110() {
   return (neuron0x229f340()*0.0109729);
}

double NNfunction_sb_dLuL::synapse0x22c1150() {
   return (neuron0x229f680()*-0.0478632);
}

double NNfunction_sb_dLuL::synapse0x22c1190() {
   return (neuron0x229f9c0()*-3.84628);
}

double NNfunction_sb_dLuL::synapse0x22c11d0() {
   return (neuron0x229fd00()*-0.0177773);
}

double NNfunction_sb_dLuL::synapse0x22c1210() {
   return (neuron0x22a0040()*-0.00368092);
}

double NNfunction_sb_dLuL::synapse0x22c1250() {
   return (neuron0x22a0380()*-0.00633957);
}

double NNfunction_sb_dLuL::synapse0x22c1290() {
   return (neuron0x22a06c0()*0.0181666);
}

double NNfunction_sb_dLuL::synapse0x22c12d0() {
   return (neuron0x22a0a00()*-0.00331878);
}

double NNfunction_sb_dLuL::synapse0x22c1310() {
   return (neuron0x22a0d40()*0.0216593);
}

double NNfunction_sb_dLuL::synapse0x22c1350() {
   return (neuron0x22a1080()*0.00733324);
}

double NNfunction_sb_dLuL::synapse0x22c1390() {
   return (neuron0x22a13c0()*0.18601);
}

double NNfunction_sb_dLuL::synapse0x22c13d0() {
   return (neuron0x22a1700()*-0.0474294);
}

double NNfunction_sb_dLuL::synapse0x22c1410() {
   return (neuron0x22a1a40()*-0.0319134);
}

double NNfunction_sb_dLuL::synapse0x22c1450() {
   return (neuron0x22a1d80()*-0.0114423);
}

double NNfunction_sb_dLuL::synapse0x22c1490() {
   return (neuron0x22a20c0()*0.0324608);
}

double NNfunction_sb_dLuL::synapse0x22c0f20() {
   return (neuron0x22a2400()*-0.0227409);
}

double NNfunction_sb_dLuL::synapse0x22c0f60() {
   return (neuron0x22a2960()*-0.0251287);
}

double NNfunction_sb_dLuL::synapse0x22c15e0() {
   return (neuron0x22a2ca0()*-0.0549452);
}

double NNfunction_sb_dLuL::synapse0x22c1620() {
   return (neuron0x22a2fe0()*-0.0204229);
}

double NNfunction_sb_dLuL::synapse0x22c1660() {
   return (neuron0x22a3320()*0.0180682);
}

double NNfunction_sb_dLuL::synapse0x22c16a0() {
   return (neuron0x22a3660()*0.000578102);
}

double NNfunction_sb_dLuL::synapse0x22c16e0() {
   return (neuron0x22a39a0()*-0.00863084);
}

double NNfunction_sb_dLuL::synapse0x22c1720() {
   return (neuron0x22a3ce0()*-0.0182786);
}

double NNfunction_sb_dLuL::synapse0x22aa1d0() {
   return (neuron0x229f090()*0.356727);
}

double NNfunction_sb_dLuL::synapse0x22aa210() {
   return (neuron0x229f340()*-0.390737);
}

double NNfunction_sb_dLuL::synapse0x22aa250() {
   return (neuron0x229f680()*-0.76202);
}

double NNfunction_sb_dLuL::synapse0x22aa290() {
   return (neuron0x229f9c0()*0.55273);
}

double NNfunction_sb_dLuL::synapse0x22aa2d0() {
   return (neuron0x229fd00()*0.0606569);
}

double NNfunction_sb_dLuL::synapse0x22aa310() {
   return (neuron0x22a0040()*-0.365194);
}

double NNfunction_sb_dLuL::synapse0x22aa350() {
   return (neuron0x22a0380()*-0.809018);
}

double NNfunction_sb_dLuL::synapse0x22aa390() {
   return (neuron0x22a06c0()*-0.329277);
}

double NNfunction_sb_dLuL::synapse0x22c1eb0() {
   return (neuron0x22a0a00()*0.182317);
}

double NNfunction_sb_dLuL::synapse0x22c1ef0() {
   return (neuron0x22a0d40()*-0.291929);
}

double NNfunction_sb_dLuL::synapse0x22c1f30() {
   return (neuron0x22a1080()*0.555253);
}

double NNfunction_sb_dLuL::synapse0x22c1f70() {
   return (neuron0x22a13c0()*-0.158923);
}

double NNfunction_sb_dLuL::synapse0x22c1fb0() {
   return (neuron0x22a1700()*-0.0589544);
}

double NNfunction_sb_dLuL::synapse0x22c1ff0() {
   return (neuron0x22a1a40()*-0.718961);
}

double NNfunction_sb_dLuL::synapse0x22c2030() {
   return (neuron0x22a1d80()*0.572851);
}

double NNfunction_sb_dLuL::synapse0x22c2070() {
   return (neuron0x22a20c0()*0.0689021);
}

double NNfunction_sb_dLuL::synapse0x22c18f0() {
   return (neuron0x22a2400()*-0.646781);
}

double NNfunction_sb_dLuL::synapse0x22c1930() {
   return (neuron0x22a2960()*-0.171314);
}

double NNfunction_sb_dLuL::synapse0x22c21c0() {
   return (neuron0x22a2ca0()*0.299296);
}

double NNfunction_sb_dLuL::synapse0x22c2200() {
   return (neuron0x22a2fe0()*0.6251);
}

double NNfunction_sb_dLuL::synapse0x22c2240() {
   return (neuron0x22a3320()*0.908044);
}

double NNfunction_sb_dLuL::synapse0x22c2280() {
   return (neuron0x22a3660()*0.266106);
}

double NNfunction_sb_dLuL::synapse0x22c22c0() {
   return (neuron0x22a39a0()*-0.290741);
}

double NNfunction_sb_dLuL::synapse0x22c2300() {
   return (neuron0x22a3ce0()*-0.39964);
}

double NNfunction_sb_dLuL::synapse0x22c2680() {
   return (neuron0x229f090()*-0.343296);
}

double NNfunction_sb_dLuL::synapse0x22c26c0() {
   return (neuron0x229f340()*-0.995791);
}

double NNfunction_sb_dLuL::synapse0x22c2700() {
   return (neuron0x229f680()*-0.720646);
}

double NNfunction_sb_dLuL::synapse0x22c2740() {
   return (neuron0x229f9c0()*-0.1704);
}

double NNfunction_sb_dLuL::synapse0x22c2780() {
   return (neuron0x229fd00()*0.119499);
}

double NNfunction_sb_dLuL::synapse0x22c27c0() {
   return (neuron0x22a0040()*0.164159);
}

double NNfunction_sb_dLuL::synapse0x22c2800() {
   return (neuron0x22a0380()*0.0723211);
}

double NNfunction_sb_dLuL::synapse0x22c2840() {
   return (neuron0x22a06c0()*0.35243);
}

double NNfunction_sb_dLuL::synapse0x22c2880() {
   return (neuron0x22a0a00()*-0.31694);
}

double NNfunction_sb_dLuL::synapse0x22c28c0() {
   return (neuron0x22a0d40()*0.87448);
}

double NNfunction_sb_dLuL::synapse0x22c2900() {
   return (neuron0x22a1080()*0.0303737);
}

double NNfunction_sb_dLuL::synapse0x22c2940() {
   return (neuron0x22a13c0()*0.332436);
}

double NNfunction_sb_dLuL::synapse0x22c2980() {
   return (neuron0x22a1700()*0.655138);
}

double NNfunction_sb_dLuL::synapse0x22c29c0() {
   return (neuron0x22a1a40()*-0.197863);
}

double NNfunction_sb_dLuL::synapse0x22c2a00() {
   return (neuron0x22a1d80()*0.52185);
}

double NNfunction_sb_dLuL::synapse0x22c2a40() {
   return (neuron0x22a20c0()*0.977611);
}

double NNfunction_sb_dLuL::synapse0x22c24d0() {
   return (neuron0x22a2400()*-0.228572);
}

double NNfunction_sb_dLuL::synapse0x22c2510() {
   return (neuron0x22a2960()*0.513497);
}

double NNfunction_sb_dLuL::synapse0x22c2b90() {
   return (neuron0x22a2ca0()*1.06384);
}

double NNfunction_sb_dLuL::synapse0x22c2bd0() {
   return (neuron0x22a2fe0()*-0.389739);
}

double NNfunction_sb_dLuL::synapse0x22c2c10() {
   return (neuron0x22a3320()*0.815111);
}

double NNfunction_sb_dLuL::synapse0x22c2c50() {
   return (neuron0x22a3660()*0.00636378);
}

double NNfunction_sb_dLuL::synapse0x22c2c90() {
   return (neuron0x22a39a0()*-0.313765);
}

double NNfunction_sb_dLuL::synapse0x22c2cd0() {
   return (neuron0x22a3ce0()*-0.149836);
}

double NNfunction_sb_dLuL::synapse0x22c3050() {
   return (neuron0x229f090()*-0.350921);
}

double NNfunction_sb_dLuL::synapse0x22c3090() {
   return (neuron0x229f340()*-0.502215);
}

double NNfunction_sb_dLuL::synapse0x22c30d0() {
   return (neuron0x229f680()*-1.25474);
}

double NNfunction_sb_dLuL::synapse0x22c3110() {
   return (neuron0x229f9c0()*0.308504);
}

double NNfunction_sb_dLuL::synapse0x22c3150() {
   return (neuron0x229fd00()*-0.267003);
}

double NNfunction_sb_dLuL::synapse0x22c3190() {
   return (neuron0x22a0040()*-0.367216);
}

double NNfunction_sb_dLuL::synapse0x22c31d0() {
   return (neuron0x22a0380()*0.429925);
}

double NNfunction_sb_dLuL::synapse0x22c3210() {
   return (neuron0x22a06c0()*0.975307);
}

double NNfunction_sb_dLuL::synapse0x22c3250() {
   return (neuron0x22a0a00()*0.908266);
}

double NNfunction_sb_dLuL::synapse0x22c3290() {
   return (neuron0x22a0d40()*-0.0783341);
}

double NNfunction_sb_dLuL::synapse0x22c32d0() {
   return (neuron0x22a1080()*0.0852557);
}

double NNfunction_sb_dLuL::synapse0x22c3310() {
   return (neuron0x22a13c0()*-0.760029);
}

double NNfunction_sb_dLuL::synapse0x22c3350() {
   return (neuron0x22a1700()*-0.413823);
}

double NNfunction_sb_dLuL::synapse0x22c3390() {
   return (neuron0x22a1a40()*0.887274);
}

double NNfunction_sb_dLuL::synapse0x22c33d0() {
   return (neuron0x22a1d80()*-0.4491);
}

double NNfunction_sb_dLuL::synapse0x22c3410() {
   return (neuron0x22a20c0()*-0.497432);
}

double NNfunction_sb_dLuL::synapse0x22c2ea0() {
   return (neuron0x22a2400()*0.286683);
}

double NNfunction_sb_dLuL::synapse0x22c2ee0() {
   return (neuron0x22a2960()*-0.21195);
}

double NNfunction_sb_dLuL::synapse0x22b3a10() {
   return (neuron0x22a2ca0()*-0.252011);
}

double NNfunction_sb_dLuL::synapse0x22b3a50() {
   return (neuron0x22a2fe0()*-0.00672398);
}

double NNfunction_sb_dLuL::synapse0x22b3a90() {
   return (neuron0x22a3320()*0.112335);
}

double NNfunction_sb_dLuL::synapse0x22b3ad0() {
   return (neuron0x22a3660()*0.159638);
}

double NNfunction_sb_dLuL::synapse0x22b3b10() {
   return (neuron0x22a39a0()*-0.574667);
}

double NNfunction_sb_dLuL::synapse0x22b3b50() {
   return (neuron0x22a3ce0()*0.00507461);
}

double NNfunction_sb_dLuL::synapse0x22b3ed0() {
   return (neuron0x229f090()*1.11302);
}

double NNfunction_sb_dLuL::synapse0x22b3f10() {
   return (neuron0x229f340()*-0.274866);
}

double NNfunction_sb_dLuL::synapse0x22b3f50() {
   return (neuron0x229f680()*-1.88097);
}

double NNfunction_sb_dLuL::synapse0x22b3f90() {
   return (neuron0x229f9c0()*-0.217478);
}

double NNfunction_sb_dLuL::synapse0x22b3fd0() {
   return (neuron0x229fd00()*-0.814719);
}

double NNfunction_sb_dLuL::synapse0x22b4010() {
   return (neuron0x22a0040()*-0.613954);
}

double NNfunction_sb_dLuL::synapse0x22b4050() {
   return (neuron0x22a0380()*0.0633615);
}

double NNfunction_sb_dLuL::synapse0x22b4090() {
   return (neuron0x22a06c0()*0.106017);
}

double NNfunction_sb_dLuL::synapse0x22b40d0() {
   return (neuron0x22a0a00()*-0.253421);
}

double NNfunction_sb_dLuL::synapse0x22b4110() {
   return (neuron0x22a0d40()*0.02015);
}

double NNfunction_sb_dLuL::synapse0x22b4150() {
   return (neuron0x22a1080()*-0.0574439);
}

double NNfunction_sb_dLuL::synapse0x22b4190() {
   return (neuron0x22a13c0()*0.756736);
}

double NNfunction_sb_dLuL::synapse0x22b41d0() {
   return (neuron0x22a1700()*0.627268);
}

double NNfunction_sb_dLuL::synapse0x22b4210() {
   return (neuron0x22a1a40()*-0.552191);
}

double NNfunction_sb_dLuL::synapse0x22b4250() {
   return (neuron0x22a1d80()*0.481454);
}

double NNfunction_sb_dLuL::synapse0x22b4290() {
   return (neuron0x22a20c0()*-0.705211);
}

double NNfunction_sb_dLuL::synapse0x22b3d20() {
   return (neuron0x22a2400()*0.17515);
}

double NNfunction_sb_dLuL::synapse0x22b3d60() {
   return (neuron0x22a2960()*-0.0255835);
}

double NNfunction_sb_dLuL::synapse0x22b43e0() {
   return (neuron0x22a2ca0()*-0.893041);
}

double NNfunction_sb_dLuL::synapse0x22b4420() {
   return (neuron0x22a2fe0()*-0.331951);
}

double NNfunction_sb_dLuL::synapse0x22b4460() {
   return (neuron0x22a3320()*0.46995);
}

double NNfunction_sb_dLuL::synapse0x22b44a0() {
   return (neuron0x22a3660()*-0.170602);
}

double NNfunction_sb_dLuL::synapse0x22b44e0() {
   return (neuron0x22a39a0()*0.363463);
}

double NNfunction_sb_dLuL::synapse0x22b4520() {
   return (neuron0x22a3ce0()*0.0759838);
}

double NNfunction_sb_dLuL::synapse0x22b48a0() {
   return (neuron0x229f090()*0.211883);
}

double NNfunction_sb_dLuL::synapse0x22b48e0() {
   return (neuron0x229f340()*0.022382);
}

double NNfunction_sb_dLuL::synapse0x22b4920() {
   return (neuron0x229f680()*0.148197);
}

double NNfunction_sb_dLuL::synapse0x22b4960() {
   return (neuron0x229f9c0()*0.370316);
}

double NNfunction_sb_dLuL::synapse0x22b49a0() {
   return (neuron0x229fd00()*0.0665501);
}

double NNfunction_sb_dLuL::synapse0x22b49e0() {
   return (neuron0x22a0040()*-0.00397232);
}

double NNfunction_sb_dLuL::synapse0x22b4a20() {
   return (neuron0x22a0380()*-0.0146826);
}

double NNfunction_sb_dLuL::synapse0x22b4a60() {
   return (neuron0x22a06c0()*0.0573585);
}

double NNfunction_sb_dLuL::synapse0x22b4aa0() {
   return (neuron0x22a0a00()*-0.0882864);
}

double NNfunction_sb_dLuL::synapse0x22b4ae0() {
   return (neuron0x22a0d40()*-0.0339173);
}

double NNfunction_sb_dLuL::synapse0x22b4b20() {
   return (neuron0x22a1080()*-0.0778698);
}

double NNfunction_sb_dLuL::synapse0x22b4b60() {
   return (neuron0x22a13c0()*-0.466476);
}

double NNfunction_sb_dLuL::synapse0x22b4ba0() {
   return (neuron0x22a1700()*0.195081);
}

double NNfunction_sb_dLuL::synapse0x22b4be0() {
   return (neuron0x22a1a40()*0.0910204);
}

double NNfunction_sb_dLuL::synapse0x22b4c20() {
   return (neuron0x22a1d80()*0.0337852);
}

double NNfunction_sb_dLuL::synapse0x22b4c60() {
   return (neuron0x22a20c0()*0.0154445);
}

double NNfunction_sb_dLuL::synapse0x22b46f0() {
   return (neuron0x22a2400()*0.07726);
}

double NNfunction_sb_dLuL::synapse0x22b4730() {
   return (neuron0x22a2960()*0.0962262);
}

double NNfunction_sb_dLuL::synapse0x22b4db0() {
   return (neuron0x22a2ca0()*0.0607255);
}

double NNfunction_sb_dLuL::synapse0x22b4df0() {
   return (neuron0x22a2fe0()*-0.0290199);
}

double NNfunction_sb_dLuL::synapse0x22b4e30() {
   return (neuron0x22a3320()*-0.0533657);
}

double NNfunction_sb_dLuL::synapse0x22b4e70() {
   return (neuron0x22a3660()*-0.0121008);
}

double NNfunction_sb_dLuL::synapse0x22b4eb0() {
   return (neuron0x22a39a0()*0.0490537);
}

double NNfunction_sb_dLuL::synapse0x22b4ef0() {
   return (neuron0x22a3ce0()*0.214823);
}

double NNfunction_sb_dLuL::synapse0x22b5270() {
   return (neuron0x229f090()*0.151685);
}

double NNfunction_sb_dLuL::synapse0x22b52b0() {
   return (neuron0x229f340()*0.00403004);
}

double NNfunction_sb_dLuL::synapse0x22b52f0() {
   return (neuron0x229f680()*-0.0511169);
}

double NNfunction_sb_dLuL::synapse0x22b5330() {
   return (neuron0x229f9c0()*-2.88136);
}

double NNfunction_sb_dLuL::synapse0x22b5370() {
   return (neuron0x229fd00()*0.0208603);
}

double NNfunction_sb_dLuL::synapse0x22b53b0() {
   return (neuron0x22a0040()*0.0547016);
}

double NNfunction_sb_dLuL::synapse0x22b53f0() {
   return (neuron0x22a0380()*0.0451574);
}

double NNfunction_sb_dLuL::synapse0x22b5430() {
   return (neuron0x22a06c0()*0.0268019);
}

double NNfunction_sb_dLuL::synapse0x22b5470() {
   return (neuron0x22a0a00()*0.00471841);
}

double NNfunction_sb_dLuL::synapse0x22b54b0() {
   return (neuron0x22a0d40()*0.0383804);
}

double NNfunction_sb_dLuL::synapse0x22b54f0() {
   return (neuron0x22a1080()*-0.0734841);
}

double NNfunction_sb_dLuL::synapse0x22b5530() {
   return (neuron0x22a13c0()*1.21781);
}

double NNfunction_sb_dLuL::synapse0x22b5570() {
   return (neuron0x22a1700()*0.0140993);
}

double NNfunction_sb_dLuL::synapse0x22b55b0() {
   return (neuron0x22a1a40()*-0.037241);
}

double NNfunction_sb_dLuL::synapse0x22b55f0() {
   return (neuron0x22a1d80()*0.0586333);
}

double NNfunction_sb_dLuL::synapse0x22b5630() {
   return (neuron0x22a20c0()*-0.0174861);
}

double NNfunction_sb_dLuL::synapse0x22b50c0() {
   return (neuron0x22a2400()*-0.00548936);
}

double NNfunction_sb_dLuL::synapse0x22b5100() {
   return (neuron0x22a2960()*0.0261788);
}

double NNfunction_sb_dLuL::synapse0x22b5780() {
   return (neuron0x22a2ca0()*0.00172332);
}

double NNfunction_sb_dLuL::synapse0x22b57c0() {
   return (neuron0x22a2fe0()*0.0385199);
}

double NNfunction_sb_dLuL::synapse0x22b5800() {
   return (neuron0x22a3320()*0.00757397);
}

double NNfunction_sb_dLuL::synapse0x22b5840() {
   return (neuron0x22a3660()*-0.00676013);
}

double NNfunction_sb_dLuL::synapse0x22b5880() {
   return (neuron0x22a39a0()*0.0596773);
}

double NNfunction_sb_dLuL::synapse0x22b58c0() {
   return (neuron0x22a3ce0()*-0.0447705);
}

double NNfunction_sb_dLuL::synapse0x22c7790() {
   return (neuron0x229f090()*0.0405773);
}

double NNfunction_sb_dLuL::synapse0x22c77d0() {
   return (neuron0x229f340()*0.0628574);
}

double NNfunction_sb_dLuL::synapse0x22c7810() {
   return (neuron0x229f680()*0.0990532);
}

double NNfunction_sb_dLuL::synapse0x22c7850() {
   return (neuron0x229f9c0()*-2.22284);
}

double NNfunction_sb_dLuL::synapse0x22c7890() {
   return (neuron0x229fd00()*-0.0423172);
}

double NNfunction_sb_dLuL::synapse0x22c78d0() {
   return (neuron0x22a0040()*-0.00784365);
}

double NNfunction_sb_dLuL::synapse0x22c7910() {
   return (neuron0x22a0380()*0.0160043);
}

double NNfunction_sb_dLuL::synapse0x22c7950() {
   return (neuron0x22a06c0()*0.0456454);
}

double NNfunction_sb_dLuL::synapse0x22c7990() {
   return (neuron0x22a0a00()*-0.0246461);
}

double NNfunction_sb_dLuL::synapse0x22c79d0() {
   return (neuron0x22a0d40()*0.0333589);
}

double NNfunction_sb_dLuL::synapse0x22c7a10() {
   return (neuron0x22a1080()*0.0213435);
}

double NNfunction_sb_dLuL::synapse0x22c7a50() {
   return (neuron0x22a13c0()*-1.25487);
}

double NNfunction_sb_dLuL::synapse0x22c7a90() {
   return (neuron0x22a1700()*0.0504914);
}

double NNfunction_sb_dLuL::synapse0x22c7ad0() {
   return (neuron0x22a1a40()*-0.0634153);
}

double NNfunction_sb_dLuL::synapse0x22c7b10() {
   return (neuron0x22a1d80()*0.00411807);
}

double NNfunction_sb_dLuL::synapse0x22c7b50() {
   return (neuron0x22a20c0()*0.0534075);
}

double NNfunction_sb_dLuL::synapse0x22b5900() {
   return (neuron0x22a2400()*-0.108137);
}

double NNfunction_sb_dLuL::synapse0x22b5940() {
   return (neuron0x22a2960()*0.0484928);
}

double NNfunction_sb_dLuL::synapse0x22c7ca0() {
   return (neuron0x22a2ca0()*-0.0123132);
}

double NNfunction_sb_dLuL::synapse0x22c7ce0() {
   return (neuron0x22a2fe0()*-0.0433574);
}

double NNfunction_sb_dLuL::synapse0x22c7d20() {
   return (neuron0x22a3320()*0.00611731);
}

double NNfunction_sb_dLuL::synapse0x22c7d60() {
   return (neuron0x22a3660()*-0.0405967);
}

double NNfunction_sb_dLuL::synapse0x22c7da0() {
   return (neuron0x22a39a0()*-0.00377329);
}

double NNfunction_sb_dLuL::synapse0x22c7de0() {
   return (neuron0x22a3ce0()*0.0449274);
}

double NNfunction_sb_dLuL::synapse0x22c8160() {
   return (neuron0x229f090()*0.565189);
}

double NNfunction_sb_dLuL::synapse0x22c81a0() {
   return (neuron0x229f340()*0.27845);
}

double NNfunction_sb_dLuL::synapse0x22c81e0() {
   return (neuron0x229f680()*-1.02396);
}

double NNfunction_sb_dLuL::synapse0x22c8220() {
   return (neuron0x229f9c0()*-0.175511);
}

double NNfunction_sb_dLuL::synapse0x22c8260() {
   return (neuron0x229fd00()*1.31114);
}

double NNfunction_sb_dLuL::synapse0x22c82a0() {
   return (neuron0x22a0040()*0.319686);
}

double NNfunction_sb_dLuL::synapse0x22c82e0() {
   return (neuron0x22a0380()*-0.298282);
}

double NNfunction_sb_dLuL::synapse0x22c8320() {
   return (neuron0x22a06c0()*-0.0590124);
}

double NNfunction_sb_dLuL::synapse0x22c8360() {
   return (neuron0x22a0a00()*0.441323);
}

double NNfunction_sb_dLuL::synapse0x22c83a0() {
   return (neuron0x22a0d40()*0.964228);
}

double NNfunction_sb_dLuL::synapse0x22c83e0() {
   return (neuron0x22a1080()*-0.116398);
}

double NNfunction_sb_dLuL::synapse0x22c8420() {
   return (neuron0x22a13c0()*0.365692);
}

double NNfunction_sb_dLuL::synapse0x22c8460() {
   return (neuron0x22a1700()*-0.0798612);
}

double NNfunction_sb_dLuL::synapse0x22c84a0() {
   return (neuron0x22a1a40()*-0.162889);
}

double NNfunction_sb_dLuL::synapse0x22c84e0() {
   return (neuron0x22a1d80()*0.471088);
}

double NNfunction_sb_dLuL::synapse0x22c8520() {
   return (neuron0x22a20c0()*-0.167714);
}

double NNfunction_sb_dLuL::synapse0x22c7fb0() {
   return (neuron0x22a2400()*-0.0856428);
}

double NNfunction_sb_dLuL::synapse0x22c7ff0() {
   return (neuron0x22a2960()*0.09724);
}

double NNfunction_sb_dLuL::synapse0x22c8670() {
   return (neuron0x22a2ca0()*0.421162);
}

double NNfunction_sb_dLuL::synapse0x22c86b0() {
   return (neuron0x22a2fe0()*0.448737);
}

double NNfunction_sb_dLuL::synapse0x22c86f0() {
   return (neuron0x22a3320()*0.400567);
}

double NNfunction_sb_dLuL::synapse0x22c8730() {
   return (neuron0x22a3660()*0.404233);
}

double NNfunction_sb_dLuL::synapse0x22c8770() {
   return (neuron0x22a39a0()*-0.182267);
}

double NNfunction_sb_dLuL::synapse0x22c87b0() {
   return (neuron0x22a3ce0()*0.424648);
}

double NNfunction_sb_dLuL::synapse0x22c8b30() {
   return (neuron0x229f090()*-0.309971);
}

double NNfunction_sb_dLuL::synapse0x22c8b70() {
   return (neuron0x229f340()*0.00448756);
}

double NNfunction_sb_dLuL::synapse0x22c8bb0() {
   return (neuron0x229f680()*-0.0868325);
}

double NNfunction_sb_dLuL::synapse0x22c8bf0() {
   return (neuron0x229f9c0()*-4.32591);
}

double NNfunction_sb_dLuL::synapse0x22c8c30() {
   return (neuron0x229fd00()*0.030307);
}

double NNfunction_sb_dLuL::synapse0x22c8c70() {
   return (neuron0x22a0040()*-0.505534);
}

double NNfunction_sb_dLuL::synapse0x22c8cb0() {
   return (neuron0x22a0380()*-0.0920487);
}

double NNfunction_sb_dLuL::synapse0x22c8cf0() {
   return (neuron0x22a06c0()*-0.000475218);
}

double NNfunction_sb_dLuL::synapse0x22c8d30() {
   return (neuron0x22a0a00()*0.234391);
}

double NNfunction_sb_dLuL::synapse0x22c8d70() {
   return (neuron0x22a0d40()*-0.245341);
}

double NNfunction_sb_dLuL::synapse0x22c8db0() {
   return (neuron0x22a1080()*0.0227137);
}

double NNfunction_sb_dLuL::synapse0x22c8df0() {
   return (neuron0x22a13c0()*0.381035);
}

double NNfunction_sb_dLuL::synapse0x22c8e30() {
   return (neuron0x22a1700()*-0.0507995);
}

double NNfunction_sb_dLuL::synapse0x22c8e70() {
   return (neuron0x22a1a40()*0.55314);
}

double NNfunction_sb_dLuL::synapse0x22c8eb0() {
   return (neuron0x22a1d80()*-0.220419);
}

double NNfunction_sb_dLuL::synapse0x22c8ef0() {
   return (neuron0x22a20c0()*0.0874846);
}

double NNfunction_sb_dLuL::synapse0x22c8980() {
   return (neuron0x22a2400()*0.30765);
}

double NNfunction_sb_dLuL::synapse0x22c89c0() {
   return (neuron0x22a2960()*0.142988);
}

double NNfunction_sb_dLuL::synapse0x22c9040() {
   return (neuron0x22a2ca0()*0.240165);
}

double NNfunction_sb_dLuL::synapse0x22c9080() {
   return (neuron0x22a2fe0()*-0.260836);
}

double NNfunction_sb_dLuL::synapse0x22c90c0() {
   return (neuron0x22a3320()*-0.0447564);
}

double NNfunction_sb_dLuL::synapse0x22c9100() {
   return (neuron0x22a3660()*0.0680547);
}

double NNfunction_sb_dLuL::synapse0x22c9140() {
   return (neuron0x22a39a0()*-0.166036);
}

double NNfunction_sb_dLuL::synapse0x22c9180() {
   return (neuron0x22a3ce0()*0.25759);
}

double NNfunction_sb_dLuL::synapse0x22c9500() {
   return (neuron0x229f090()*-0.0595406);
}

double NNfunction_sb_dLuL::synapse0x22c9540() {
   return (neuron0x229f340()*0.0673853);
}

double NNfunction_sb_dLuL::synapse0x22c9580() {
   return (neuron0x229f680()*-0.473294);
}

double NNfunction_sb_dLuL::synapse0x22c95c0() {
   return (neuron0x229f9c0()*1.42949);
}

double NNfunction_sb_dLuL::synapse0x22c9600() {
   return (neuron0x229fd00()*-0.424822);
}

double NNfunction_sb_dLuL::synapse0x22c9640() {
   return (neuron0x22a0040()*-0.294018);
}

double NNfunction_sb_dLuL::synapse0x22c9680() {
   return (neuron0x22a0380()*-0.0751781);
}

double NNfunction_sb_dLuL::synapse0x22c96c0() {
   return (neuron0x22a06c0()*0.202907);
}

double NNfunction_sb_dLuL::synapse0x22c9700() {
   return (neuron0x22a0a00()*1.23289);
}

double NNfunction_sb_dLuL::synapse0x22c9740() {
   return (neuron0x22a0d40()*-0.084408);
}

double NNfunction_sb_dLuL::synapse0x22c9780() {
   return (neuron0x22a1080()*0.0299632);
}

double NNfunction_sb_dLuL::synapse0x22c97c0() {
   return (neuron0x22a13c0()*0.640747);
}

double NNfunction_sb_dLuL::synapse0x22c9800() {
   return (neuron0x22a1700()*0.0600124);
}

double NNfunction_sb_dLuL::synapse0x22c9840() {
   return (neuron0x22a1a40()*0.514016);
}

double NNfunction_sb_dLuL::synapse0x22c9880() {
   return (neuron0x22a1d80()*-0.375561);
}

double NNfunction_sb_dLuL::synapse0x22c98c0() {
   return (neuron0x22a20c0()*0.3756);
}

double NNfunction_sb_dLuL::synapse0x22c9350() {
   return (neuron0x22a2400()*0.185862);
}

double NNfunction_sb_dLuL::synapse0x22c9390() {
   return (neuron0x22a2960()*-0.0993558);
}

double NNfunction_sb_dLuL::synapse0x22c9a10() {
   return (neuron0x22a2ca0()*-0.148381);
}

double NNfunction_sb_dLuL::synapse0x22c9a50() {
   return (neuron0x22a2fe0()*0.317066);
}

double NNfunction_sb_dLuL::synapse0x22c9a90() {
   return (neuron0x22a3320()*0.365161);
}

double NNfunction_sb_dLuL::synapse0x22c9ad0() {
   return (neuron0x22a3660()*0.0120992);
}

double NNfunction_sb_dLuL::synapse0x22c9b10() {
   return (neuron0x22a39a0()*0.0291857);
}

double NNfunction_sb_dLuL::synapse0x22c9b50() {
   return (neuron0x22a3ce0()*-0.32104);
}

double NNfunction_sb_dLuL::synapse0x22a4fa0() {
   return (neuron0x22a4150()*-0.432567);
}

double NNfunction_sb_dLuL::synapse0x22a4fe0() {
   return (neuron0x22a4990()*-0.00902075);
}

double NNfunction_sb_dLuL::synapse0x22a6500() {
   return (neuron0x22a5470()*0.0352464);
}

double NNfunction_sb_dLuL::synapse0x22a6540() {
   return (neuron0x2069890()*0.00071534);
}

double NNfunction_sb_dLuL::synapse0x22a7fd0() {
   return (neuron0x22a6250()*0.0269393);
}

double NNfunction_sb_dLuL::synapse0x22a8010() {
   return (neuron0x22a7d20()*-0.0364138);
}

double NNfunction_sb_dLuL::synapse0x22a8da0() {
   return (neuron0x22a8af0()*0.026329);
}

double NNfunction_sb_dLuL::synapse0x22a8de0() {
   return (neuron0x22a94c0()*1.24268);
}

double NNfunction_sb_dLuL::synapse0x22a9770() {
   return (neuron0x22a9e90()*-0.0125723);
}

double NNfunction_sb_dLuL::synapse0x22a97b0() {
   return (neuron0x22aa970()*-0.357444);
}

double NNfunction_sb_dLuL::synapse0x22aa140() {
   return (neuron0x22ab340()*-0.0298635);
}

double NNfunction_sb_dLuL::synapse0x22aa180() {
   return (neuron0x22a8420()*-0.0240572);
}

double NNfunction_sb_dLuL::synapse0x22aac20() {
   return (neuron0x22acef0()*2.3654);
}

double NNfunction_sb_dLuL::synapse0x22aac60() {
   return (neuron0x22ad8c0()*-0.0132047);
}

double NNfunction_sb_dLuL::synapse0x22ab5f0() {
   return (neuron0x22ae290()*-0.0320607);
}

double NNfunction_sb_dLuL::synapse0x22ab630() {
   return (neuron0x22aec60()*-0.00217929);
}

double NNfunction_sb_dLuL::synapse0x22a86d0() {
   return (neuron0x22b0a70()*-0.985566);
}

double NNfunction_sb_dLuL::synapse0x22a8710() {
   return (neuron0x22b0d50()*-1.84606);
}

double NNfunction_sb_dLuL::synapse0x22ad1a0() {
   return (neuron0x22b1720()*0.0106873);
}

double NNfunction_sb_dLuL::synapse0x22ad1e0() {
   return (neuron0x22b20f0()*-0.00141908);
}

double NNfunction_sb_dLuL::synapse0x22adb70() {
   return (neuron0x22b2ac0()*0.0202067);
}

double NNfunction_sb_dLuL::synapse0x22adbb0() {
   return (neuron0x22b3490()*0.677562);
}

double NNfunction_sb_dLuL::synapse0x22ae540() {
   return (neuron0x22abfe0()*0.0463223);
}

double NNfunction_sb_dLuL::synapse0x22ae580() {
   return (neuron0x22ac9b0()*-0.0189089);
}

double NNfunction_sb_dLuL::synapse0x22aef10() {
   return (neuron0x22b6220()*-1.17188);
}

double NNfunction_sb_dLuL::synapse0x22aef50() {
   return (neuron0x22b6bf0()*0.510469);
}

double NNfunction_sb_dLuL::synapse0x22a1fa0() {
   return (neuron0x22b75c0()*-1.60355);
}

double NNfunction_sb_dLuL::synapse0x22a1fe0() {
   return (neuron0x22b7f90()*0.131552);
}

double NNfunction_sb_dLuL::synapse0x22b1000() {
   return (neuron0x22b8960()*-0.0129194);
}

double NNfunction_sb_dLuL::synapse0x22b1040() {
   return (neuron0x22b9330()*-0.0456473);
}

double NNfunction_sb_dLuL::synapse0x22b19d0() {
   return (neuron0x22b9d00()*1.51434);
}

double NNfunction_sb_dLuL::synapse0x22b1a10() {
   return (neuron0x22ba6d0()*-0.0668716);
}

double NNfunction_sb_dLuL::synapse0x22b23a0() {
   return (neuron0x22b0760()*0.0391152);
}

double NNfunction_sb_dLuL::synapse0x22b23e0() {
   return (neuron0x22bd2b0()*0.0480636);
}

double NNfunction_sb_dLuL::synapse0x22b2d70() {
   return (neuron0x22bdc80()*0.0311547);
}

double NNfunction_sb_dLuL::synapse0x22b2db0() {
   return (neuron0x22be650()*0.0167624);
}

double NNfunction_sb_dLuL::synapse0x22b3740() {
   return (neuron0x22bf020()*0.0369084);
}

double NNfunction_sb_dLuL::synapse0x22b3780() {
   return (neuron0x22bf9f0()*-0.833953);
}

double NNfunction_sb_dLuL::synapse0x22ac290() {
   return (neuron0x22c03c0()*-0.0166784);
}

double NNfunction_sb_dLuL::synapse0x22ac2d0() {
   return (neuron0x22c0d90()*-1.25244);
}

double NNfunction_sb_dLuL::synapse0x22b5b40() {
   return (neuron0x22c1760()*0.0127067);
}

double NNfunction_sb_dLuL::synapse0x22b5b80() {
   return (neuron0x22c2340()*0.0405338);
}

double NNfunction_sb_dLuL::synapse0x22b64d0() {
   return (neuron0x22c2d10()*0.0227733);
}

double NNfunction_sb_dLuL::synapse0x22b6510() {
   return (neuron0x22b3b90()*-0.00368785);
}

double NNfunction_sb_dLuL::synapse0x22b6ea0() {
   return (neuron0x22b4560()*0.181517);
}

double NNfunction_sb_dLuL::synapse0x22b6ee0() {
   return (neuron0x22b4f30()*-0.0523924);
}

double NNfunction_sb_dLuL::synapse0x22b7870() {
   return (neuron0x22c7570()*0.584476);
}

double NNfunction_sb_dLuL::synapse0x22b78b0() {
   return (neuron0x22c7e20()*-0.0481675);
}

double NNfunction_sb_dLuL::synapse0x22b8240() {
   return (neuron0x22c87f0()*0.0846893);
}

double NNfunction_sb_dLuL::synapse0x22b8280() {
   return (neuron0x22c91c0()*0.0288654);
}

double NNfunction_sb_dLuL::synapse0x22ba980() {
   return (neuron0x22a4150()*3.15707);
}

double NNfunction_sb_dLuL::synapse0x22ba9c0() {
   return (neuron0x22a4990()*-0.336731);
}

double NNfunction_sb_dLuL::synapse0x22aff40() {
   return (neuron0x22a5470()*0.905463);
}

double NNfunction_sb_dLuL::synapse0x22aff80() {
   return (neuron0x2069890()*-1.06851);
}

double NNfunction_sb_dLuL::synapse0x22bd560() {
   return (neuron0x22a6250()*-1.23756);
}

double NNfunction_sb_dLuL::synapse0x22bd5a0() {
   return (neuron0x22a7d20()*-1.54549);
}

double NNfunction_sb_dLuL::synapse0x22bdf30() {
   return (neuron0x22a8af0()*2.18825);
}

double NNfunction_sb_dLuL::synapse0x22bdf70() {
   return (neuron0x22a94c0()*-0.591403);
}

double NNfunction_sb_dLuL::synapse0x22be900() {
   return (neuron0x22a9e90()*-1.34149);
}

double NNfunction_sb_dLuL::synapse0x22be940() {
   return (neuron0x22aa970()*7.29619);
}

double NNfunction_sb_dLuL::synapse0x22bf2d0() {
   return (neuron0x22ab340()*-1.28032);
}

double NNfunction_sb_dLuL::synapse0x22bf310() {
   return (neuron0x22a8420()*-1.44124);
}

double NNfunction_sb_dLuL::synapse0x22bfca0() {
   return (neuron0x22acef0()*1.19674);
}

double NNfunction_sb_dLuL::synapse0x22bfce0() {
   return (neuron0x22ad8c0()*-2.2126);
}

double NNfunction_sb_dLuL::synapse0x22c0670() {
   return (neuron0x22ae290()*-1.64144);
}

double NNfunction_sb_dLuL::synapse0x22c06b0() {
   return (neuron0x22aec60()*1.46083);
}

double NNfunction_sb_dLuL::synapse0x22c1040() {
   return (neuron0x22b0a70()*-0.765289);
}

double NNfunction_sb_dLuL::synapse0x22c1080() {
   return (neuron0x22b0d50()*1.13692);
}

double NNfunction_sb_dLuL::synapse0x22c1a10() {
   return (neuron0x22b1720()*1.43099);
}

double NNfunction_sb_dLuL::synapse0x22c1a50() {
   return (neuron0x22b20f0()*-0.416697);
}

double NNfunction_sb_dLuL::synapse0x22c25f0() {
   return (neuron0x22b2ac0()*1.33605);
}

double NNfunction_sb_dLuL::synapse0x22c2630() {
   return (neuron0x22b3490()*-1.68133);
}

double NNfunction_sb_dLuL::synapse0x22c2fc0() {
   return (neuron0x22abfe0()*1.57374);
}

double NNfunction_sb_dLuL::synapse0x22c3000() {
   return (neuron0x22ac9b0()*0.926149);
}

double NNfunction_sb_dLuL::synapse0x22b3e40() {
   return (neuron0x22b6220()*-0.124141);
}

double NNfunction_sb_dLuL::synapse0x22b3e80() {
   return (neuron0x22b6bf0()*-2.75889);
}

double NNfunction_sb_dLuL::synapse0x22b4810() {
   return (neuron0x22b75c0()*4.80641);
}

double NNfunction_sb_dLuL::synapse0x22b4850() {
   return (neuron0x22b7f90()*-2.72207);
}

double NNfunction_sb_dLuL::synapse0x22b51e0() {
   return (neuron0x22b8960()*1.29574);
}

double NNfunction_sb_dLuL::synapse0x22b5220() {
   return (neuron0x22b9330()*-2.23729);
}

double NNfunction_sb_dLuL::synapse0x22c7700() {
   return (neuron0x22b9d00()*-2.6562);
}

double NNfunction_sb_dLuL::synapse0x22c7740() {
   return (neuron0x22ba6d0()*-2.54382);
}

double NNfunction_sb_dLuL::synapse0x22c80d0() {
   return (neuron0x22b0760()*1.89663);
}

double NNfunction_sb_dLuL::synapse0x22c8110() {
   return (neuron0x22bd2b0()*1.79833);
}

double NNfunction_sb_dLuL::synapse0x22c8aa0() {
   return (neuron0x22bdc80()*1.3988);
}

double NNfunction_sb_dLuL::synapse0x22c8ae0() {
   return (neuron0x22be650()*1.29364);
}

double NNfunction_sb_dLuL::synapse0x22c9470() {
   return (neuron0x22bf020()*1.58933);
}

double NNfunction_sb_dLuL::synapse0x22c94b0() {
   return (neuron0x22bf9f0()*3.26674);
}

double NNfunction_sb_dLuL::synapse0x22a4400() {
   return (neuron0x22c03c0()*-0.695592);
}

double NNfunction_sb_dLuL::synapse0x22a4440() {
   return (neuron0x22c0d90()*3.20756);
}

double NNfunction_sb_dLuL::synapse0x22b8c10() {
   return (neuron0x22c1760()*1.38657);
}

double NNfunction_sb_dLuL::synapse0x22b8c50() {
   return (neuron0x22c2340()*1.9244);
}

double NNfunction_sb_dLuL::synapse0x22c9b90() {
   return (neuron0x22c2d10()*2.26673);
}

double NNfunction_sb_dLuL::synapse0x22c9bd0() {
   return (neuron0x22b3b90()*-1.39325);
}

double NNfunction_sb_dLuL::synapse0x22c9c10() {
   return (neuron0x22b4560()*-0.350161);
}

double NNfunction_sb_dLuL::synapse0x22c9c50() {
   return (neuron0x22b4f30()*-5.58489);
}

double NNfunction_sb_dLuL::synapse0x22d0b00() {
   return (neuron0x22c7570()*-3.11569);
}

double NNfunction_sb_dLuL::synapse0x22d0b40() {
   return (neuron0x22c7e20()*-1.80537);
}

double NNfunction_sb_dLuL::synapse0x22d0b80() {
   return (neuron0x22c87f0()*4.37671);
}

double NNfunction_sb_dLuL::synapse0x22d0bc0() {
   return (neuron0x22c91c0()*1.74947);
}

double NNfunction_sb_dLuL::synapse0x22d0f40() {
   return (neuron0x22a4150()*-0.318359);
}

double NNfunction_sb_dLuL::synapse0x22d0f80() {
   return (neuron0x22a4990()*-0.0130499);
}

double NNfunction_sb_dLuL::synapse0x22d0fc0() {
   return (neuron0x22a5470()*0.0752975);
}

double NNfunction_sb_dLuL::synapse0x22d1000() {
   return (neuron0x2069890()*0.0139547);
}

double NNfunction_sb_dLuL::synapse0x22d1040() {
   return (neuron0x22a6250()*0.0696045);
}

double NNfunction_sb_dLuL::synapse0x22d1080() {
   return (neuron0x22a7d20()*-0.0215288);
}

double NNfunction_sb_dLuL::synapse0x22d10c0() {
   return (neuron0x22a8af0()*0.0171419);
}

double NNfunction_sb_dLuL::synapse0x22d1100() {
   return (neuron0x22a94c0()*-0.897708);
}

double NNfunction_sb_dLuL::synapse0x22d1140() {
   return (neuron0x22a9e90()*-0.0205914);
}

double NNfunction_sb_dLuL::synapse0x22d1180() {
   return (neuron0x22aa970()*0.802251);
}

double NNfunction_sb_dLuL::synapse0x22d11c0() {
   return (neuron0x22ab340()*-0.0665025);
}

double NNfunction_sb_dLuL::synapse0x22d1200() {
   return (neuron0x22a8420()*-0.040095);
}

double NNfunction_sb_dLuL::synapse0x22d1240() {
   return (neuron0x22acef0()*0.541017);
}

double NNfunction_sb_dLuL::synapse0x22d1280() {
   return (neuron0x22ad8c0()*-0.00483432);
}

double NNfunction_sb_dLuL::synapse0x22d12c0() {
   return (neuron0x22ae290()*-0.043566);
}

double NNfunction_sb_dLuL::synapse0x22d1300() {
   return (neuron0x22aec60()*0.0115792);
}

double NNfunction_sb_dLuL::synapse0x22d0d90() {
   return (neuron0x22b0a70()*0.423277);
}

double NNfunction_sb_dLuL::synapse0x22d0dd0() {
   return (neuron0x22b0d50()*1.68581);
}

double NNfunction_sb_dLuL::synapse0x22d1450() {
   return (neuron0x22b1720()*0.00588175);
}

double NNfunction_sb_dLuL::synapse0x22d1490() {
   return (neuron0x22b20f0()*0.0819218);
}

double NNfunction_sb_dLuL::synapse0x22d14d0() {
   return (neuron0x22b2ac0()*0.0307436);
}

double NNfunction_sb_dLuL::synapse0x22d1510() {
   return (neuron0x22b3490()*-1.477);
}

double NNfunction_sb_dLuL::synapse0x22d1550() {
   return (neuron0x22abfe0()*0.091976);
}

double NNfunction_sb_dLuL::synapse0x22d1590() {
   return (neuron0x22ac9b0()*-0.0409839);
}

double NNfunction_sb_dLuL::synapse0x22d15d0() {
   return (neuron0x22b6220()*0.201583);
}

double NNfunction_sb_dLuL::synapse0x22d1610() {
   return (neuron0x22b6bf0()*0.0114321);
}

double NNfunction_sb_dLuL::synapse0x22d1650() {
   return (neuron0x22b75c0()*0.597485);
}

double NNfunction_sb_dLuL::synapse0x22d1690() {
   return (neuron0x22b7f90()*0.119856);
}

double NNfunction_sb_dLuL::synapse0x22d16d0() {
   return (neuron0x22b8960()*-0.0280559);
}

double NNfunction_sb_dLuL::synapse0x22d1710() {
   return (neuron0x22b9330()*-0.0514395);
}

double NNfunction_sb_dLuL::synapse0x22d1750() {
   return (neuron0x22b9d00()*-1.47252);
}

double NNfunction_sb_dLuL::synapse0x22d1790() {
   return (neuron0x22ba6d0()*-0.0672966);
}

double NNfunction_sb_dLuL::synapse0x22d1340() {
   return (neuron0x22b0760()*0.0178752);
}

double NNfunction_sb_dLuL::synapse0x22d1380() {
   return (neuron0x22bd2b0()*0.0590146);
}

double NNfunction_sb_dLuL::synapse0x22d13c0() {
   return (neuron0x22bdc80()*0.0649551);
}

double NNfunction_sb_dLuL::synapse0x22d1400() {
   return (neuron0x22be650()*0.0315814);
}

double NNfunction_sb_dLuL::synapse0x22d19e0() {
   return (neuron0x22bf020()*0.0437485);
}

double NNfunction_sb_dLuL::synapse0x22d1a20() {
   return (neuron0x22bf9f0()*-0.611323);
}

double NNfunction_sb_dLuL::synapse0x22d1a60() {
   return (neuron0x22c03c0()*-0.0227786);
}

double NNfunction_sb_dLuL::synapse0x22d1aa0() {
   return (neuron0x22c0d90()*0.182014);
}

double NNfunction_sb_dLuL::synapse0x22d1ae0() {
   return (neuron0x22c1760()*0.0616009);
}

double NNfunction_sb_dLuL::synapse0x22d1b20() {
   return (neuron0x22c2340()*0.05611);
}

double NNfunction_sb_dLuL::synapse0x22d1b60() {
   return (neuron0x22c2d10()*-0.00907426);
}

double NNfunction_sb_dLuL::synapse0x22d1ba0() {
   return (neuron0x22b3b90()*-0.0139418);
}

double NNfunction_sb_dLuL::synapse0x22d1be0() {
   return (neuron0x22b4560()*-0.846043);
}

double NNfunction_sb_dLuL::synapse0x22d1c20() {
   return (neuron0x22b4f30()*0.500193);
}

double NNfunction_sb_dLuL::synapse0x22d1c60() {
   return (neuron0x22c7570()*0.115277);
}

double NNfunction_sb_dLuL::synapse0x22d1ca0() {
   return (neuron0x22c7e20()*-0.0777726);
}

double NNfunction_sb_dLuL::synapse0x22d1ce0() {
   return (neuron0x22c87f0()*0.122928);
}

double NNfunction_sb_dLuL::synapse0x22d1d20() {
   return (neuron0x22c91c0()*0.0436735);
}

double NNfunction_sb_dLuL::synapse0x22d20a0() {
   return (neuron0x22a4150()*0.604354);
}

double NNfunction_sb_dLuL::synapse0x22d20e0() {
   return (neuron0x22a4990()*0.312321);
}

double NNfunction_sb_dLuL::synapse0x22d2120() {
   return (neuron0x22a5470()*-0.495677);
}

double NNfunction_sb_dLuL::synapse0x22d2160() {
   return (neuron0x2069890()*-0.172078);
}

double NNfunction_sb_dLuL::synapse0x22d21a0() {
   return (neuron0x22a6250()*0.154451);
}

double NNfunction_sb_dLuL::synapse0x22d21e0() {
   return (neuron0x22a7d20()*-0.0952249);
}

double NNfunction_sb_dLuL::synapse0x22d2220() {
   return (neuron0x22a8af0()*0.00150763);
}

double NNfunction_sb_dLuL::synapse0x22d2260() {
   return (neuron0x22a94c0()*0.0828328);
}

double NNfunction_sb_dLuL::synapse0x22d22a0() {
   return (neuron0x22a9e90()*-0.0200506);
}

double NNfunction_sb_dLuL::synapse0x22d22e0() {
   return (neuron0x22aa970()*3.74916);
}

double NNfunction_sb_dLuL::synapse0x22d2320() {
   return (neuron0x22ab340()*0.193407);
}

double NNfunction_sb_dLuL::synapse0x22d2360() {
   return (neuron0x22a8420()*0.498015);
}

double NNfunction_sb_dLuL::synapse0x22d23a0() {
   return (neuron0x22acef0()*-0.698028);
}

double NNfunction_sb_dLuL::synapse0x22d23e0() {
   return (neuron0x22ad8c0()*0.363528);
}

double NNfunction_sb_dLuL::synapse0x22d2420() {
   return (neuron0x22ae290()*0.229444);
}

double NNfunction_sb_dLuL::synapse0x22d2460() {
   return (neuron0x22aec60()*-0.571244);
}

double NNfunction_sb_dLuL::synapse0x22d1ef0() {
   return (neuron0x22b0a70()*0.0548472);
}

double NNfunction_sb_dLuL::synapse0x22d1f30() {
   return (neuron0x22b0d50()*0.0689171);
}

double NNfunction_sb_dLuL::synapse0x22d25b0() {
   return (neuron0x22b1720()*-0.0793785);
}

double NNfunction_sb_dLuL::synapse0x22d25f0() {
   return (neuron0x22b20f0()*-0.716418);
}

double NNfunction_sb_dLuL::synapse0x22d2630() {
   return (neuron0x22b2ac0()*-0.541692);
}

double NNfunction_sb_dLuL::synapse0x22d2670() {
   return (neuron0x22b3490()*1.0025);
}

double NNfunction_sb_dLuL::synapse0x22d26b0() {
   return (neuron0x22abfe0()*-0.296239);
}

double NNfunction_sb_dLuL::synapse0x22d26f0() {
   return (neuron0x22ac9b0()*0.00536356);
}

double NNfunction_sb_dLuL::synapse0x22d2730() {
   return (neuron0x22b6220()*1.79312);
}

double NNfunction_sb_dLuL::synapse0x22d2770() {
   return (neuron0x22b6bf0()*-1.81146);
}

double NNfunction_sb_dLuL::synapse0x22d27b0() {
   return (neuron0x22b75c0()*-1.08825);
}

double NNfunction_sb_dLuL::synapse0x22d27f0() {
   return (neuron0x22b7f90()*0.871369);
}

double NNfunction_sb_dLuL::synapse0x22d2830() {
   return (neuron0x22b8960()*-0.536728);
}

double NNfunction_sb_dLuL::synapse0x22d2870() {
   return (neuron0x22b9330()*-0.00496898);
}

double NNfunction_sb_dLuL::synapse0x22d28b0() {
   return (neuron0x22b9d00()*0.246531);
}

double NNfunction_sb_dLuL::synapse0x22d28f0() {
   return (neuron0x22ba6d0()*-0.100866);
}

double NNfunction_sb_dLuL::synapse0x22d24a0() {
   return (neuron0x22b0760()*0.0780008);
}

double NNfunction_sb_dLuL::synapse0x22d24e0() {
   return (neuron0x22bd2b0()*0.0922541);
}

double NNfunction_sb_dLuL::synapse0x22d2520() {
   return (neuron0x22bdc80()*-0.337904);
}

double NNfunction_sb_dLuL::synapse0x22d2560() {
   return (neuron0x22be650()*-0.365776);
}

double NNfunction_sb_dLuL::synapse0x22d2b40() {
   return (neuron0x22bf020()*0.000496848);
}

double NNfunction_sb_dLuL::synapse0x22d2b80() {
   return (neuron0x22bf9f0()*-1.26256);
}

double NNfunction_sb_dLuL::synapse0x22d2bc0() {
   return (neuron0x22c03c0()*0.0431357);
}

double NNfunction_sb_dLuL::synapse0x22d2c00() {
   return (neuron0x22c0d90()*2.52715);
}

double NNfunction_sb_dLuL::synapse0x22d2c40() {
   return (neuron0x22c1760()*-0.560061);
}

double NNfunction_sb_dLuL::synapse0x22d2c80() {
   return (neuron0x22c2340()*-0.107793);
}

double NNfunction_sb_dLuL::synapse0x22d2cc0() {
   return (neuron0x22c2d10()*-0.151981);
}

double NNfunction_sb_dLuL::synapse0x22d2d00() {
   return (neuron0x22b3b90()*0.632354);
}

double NNfunction_sb_dLuL::synapse0x22d2d40() {
   return (neuron0x22b4560()*-0.70214);
}

double NNfunction_sb_dLuL::synapse0x22d2d80() {
   return (neuron0x22b4f30()*1.07717);
}

double NNfunction_sb_dLuL::synapse0x22d2dc0() {
   return (neuron0x22c7570()*-0.414585);
}

double NNfunction_sb_dLuL::synapse0x22d2e00() {
   return (neuron0x22c7e20()*0.440095);
}

double NNfunction_sb_dLuL::synapse0x22d2e40() {
   return (neuron0x22c87f0()*1.99104);
}

double NNfunction_sb_dLuL::synapse0x22d2e80() {
   return (neuron0x22c91c0()*-0.465701);
}

double NNfunction_sb_dLuL::synapse0x22d3200() {
   return (neuron0x22a4150()*-1.68523);
}

double NNfunction_sb_dLuL::synapse0x22d3240() {
   return (neuron0x22a4990()*1.63008);
}

double NNfunction_sb_dLuL::synapse0x22d3280() {
   return (neuron0x22a5470()*2.22868);
}

double NNfunction_sb_dLuL::synapse0x22d32c0() {
   return (neuron0x2069890()*2.10716);
}

double NNfunction_sb_dLuL::synapse0x22d3300() {
   return (neuron0x22a6250()*2.55783);
}

double NNfunction_sb_dLuL::synapse0x22d3340() {
   return (neuron0x22a7d20()*1.60837);
}

double NNfunction_sb_dLuL::synapse0x22d3380() {
   return (neuron0x22a8af0()*0.568062);
}

double NNfunction_sb_dLuL::synapse0x22d33c0() {
   return (neuron0x22a94c0()*3.21967);
}

double NNfunction_sb_dLuL::synapse0x22d3400() {
   return (neuron0x22a9e90()*1.8383);
}

double NNfunction_sb_dLuL::synapse0x22d3440() {
   return (neuron0x22aa970()*-0.429089);
}

double NNfunction_sb_dLuL::synapse0x22d3480() {
   return (neuron0x22ab340()*-1.51705);
}

double NNfunction_sb_dLuL::synapse0x22d34c0() {
   return (neuron0x22a8420()*-2.40421);
}

double NNfunction_sb_dLuL::synapse0x22d3500() {
   return (neuron0x22acef0()*1.81817);
}

double NNfunction_sb_dLuL::synapse0x22d3540() {
   return (neuron0x22ad8c0()*-2.22068);
}

double NNfunction_sb_dLuL::synapse0x22d3580() {
   return (neuron0x22ae290()*-2.00856);
}

double NNfunction_sb_dLuL::synapse0x22d35c0() {
   return (neuron0x22aec60()*0.0317504);
}

double NNfunction_sb_dLuL::synapse0x22d3050() {
   return (neuron0x22b0a70()*-2.12451);
}

double NNfunction_sb_dLuL::synapse0x22d3090() {
   return (neuron0x22b0d50()*-0.293841);
}

double NNfunction_sb_dLuL::synapse0x22d3710() {
   return (neuron0x22b1720()*1.98975);
}

double NNfunction_sb_dLuL::synapse0x22d3750() {
   return (neuron0x22b20f0()*-1.84098);
}

double NNfunction_sb_dLuL::synapse0x22d3790() {
   return (neuron0x22b2ac0()*-1.85872);
}

double NNfunction_sb_dLuL::synapse0x22d37d0() {
   return (neuron0x22b3490()*-3.08521);
}

double NNfunction_sb_dLuL::synapse0x22d3810() {
   return (neuron0x22abfe0()*1.76556);
}

double NNfunction_sb_dLuL::synapse0x22d3850() {
   return (neuron0x22ac9b0()*-2.53334);
}

double NNfunction_sb_dLuL::synapse0x22d3890() {
   return (neuron0x22b6220()*-0.819083);
}

double NNfunction_sb_dLuL::synapse0x22d38d0() {
   return (neuron0x22b6bf0()*0.14859);
}

double NNfunction_sb_dLuL::synapse0x22d3910() {
   return (neuron0x22b75c0()*-1.31765);
}

double NNfunction_sb_dLuL::synapse0x22d3950() {
   return (neuron0x22b7f90()*0.403727);
}

double NNfunction_sb_dLuL::synapse0x22d3990() {
   return (neuron0x22b8960()*-1.64559);
}

double NNfunction_sb_dLuL::synapse0x22d39d0() {
   return (neuron0x22b9330()*-0.166148);
}

double NNfunction_sb_dLuL::synapse0x22d3a10() {
   return (neuron0x22b9d00()*-0.414824);
}

double NNfunction_sb_dLuL::synapse0x22d3a50() {
   return (neuron0x22ba6d0()*-0.282926);
}

double NNfunction_sb_dLuL::synapse0x22d3600() {
   return (neuron0x22b0760()*-1.24087);
}

double NNfunction_sb_dLuL::synapse0x22d3640() {
   return (neuron0x22bd2b0()*-2.15774);
}

double NNfunction_sb_dLuL::synapse0x22d3680() {
   return (neuron0x22bdc80()*1.70487);
}

double NNfunction_sb_dLuL::synapse0x22d36c0() {
   return (neuron0x22be650()*-2.83232);
}

double NNfunction_sb_dLuL::synapse0x22d3ca0() {
   return (neuron0x22bf020()*-1.30945);
}

double NNfunction_sb_dLuL::synapse0x22d3ce0() {
   return (neuron0x22bf9f0()*-1.27594);
}

double NNfunction_sb_dLuL::synapse0x22d3d20() {
   return (neuron0x22c03c0()*2.6663);
}

double NNfunction_sb_dLuL::synapse0x22d3d60() {
   return (neuron0x22c0d90()*-0.38739);
}

double NNfunction_sb_dLuL::synapse0x22d3da0() {
   return (neuron0x22c1760()*1.46118);
}

double NNfunction_sb_dLuL::synapse0x22d3de0() {
   return (neuron0x22c2340()*-1.85579);
}

double NNfunction_sb_dLuL::synapse0x22d3e20() {
   return (neuron0x22c2d10()*-0.269586);
}

double NNfunction_sb_dLuL::synapse0x22d3e60() {
   return (neuron0x22b3b90()*0.508224);
}

double NNfunction_sb_dLuL::synapse0x22d3ea0() {
   return (neuron0x22b4560()*0.66515);
}

double NNfunction_sb_dLuL::synapse0x22d3ee0() {
   return (neuron0x22b4f30()*-0.441779);
}

double NNfunction_sb_dLuL::synapse0x22d3f20() {
   return (neuron0x22c7570()*-0.413947);
}

double NNfunction_sb_dLuL::synapse0x22d3f60() {
   return (neuron0x22c7e20()*0.312555);
}

double NNfunction_sb_dLuL::synapse0x22d3fa0() {
   return (neuron0x22c87f0()*-0.188931);
}

double NNfunction_sb_dLuL::synapse0x22d3fe0() {
   return (neuron0x22c91c0()*0.499107);
}

double NNfunction_sb_dLuL::synapse0x22d4240() {
   return (neuron0x22d03c0()*8.70466);
}

double NNfunction_sb_dLuL::synapse0x22d4280() {
   return (neuron0x22d0760()*-6.98169);
}

double NNfunction_sb_dLuL::synapse0x22d42c0() {
   return (neuron0x22d0c00()*-4.30035);
}

double NNfunction_sb_dLuL::synapse0x22d4300() {
   return (neuron0x22d1d60()*-0.638291);
}

double NNfunction_sb_dLuL::synapse0x22d4340() {
   return (neuron0x22d2ec0()*6.64998);
}

