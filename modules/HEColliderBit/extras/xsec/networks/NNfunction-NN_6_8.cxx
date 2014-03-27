#include "NNfunction-NN_6_8.h"
#include <cmath>

double NNfunction-NN_6_8::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.3992)/15.1824;
   input1 = (in1 - -8.26766)/1193.58;
   input2 = (in2 - 291.96)/249.375;
   input3 = (in3 - -23.7357)/842.93;
   input4 = (in4 - 1073.31)/932.86;
   input5 = (in5 - 911.998)/951.425;
   input6 = (in6 - 919.498)/949.65;
   input7 = (in7 - 936.059)/930.62;
   input8 = (in8 - 933.408)/976.685;
   input9 = (in9 - 919.195)/964.496;
   input10 = (in10 - 971.095)/952.341;
   input11 = (in11 - 713.652)/877.293;
   input12 = (in12 - 733.895)/874.029;
   input13 = (in13 - 502.089)/522.353;
   input14 = (in14 - 710.131)/806.548;
   input15 = (in15 - 712.532)/808.486;
   input16 = (in16 - 525.094)/561.81;
   input17 = (in17 - 762.879)/904.84;
   input18 = (in18 - 761.499)/905.538;
   input19 = (in19 - 775.349)/865.499;
   input20 = (in20 - -4.9164)/489.453;
   input21 = (in21 - -7.5595)/1140.91;
   input22 = (in22 - 1.75125)/1194.85;
   input23 = (in23 - -52.292)/254.669;
   switch(index) {
     case 0:
         return neuron0x2b35a70();
     default:
         return 0.;
   }
}

double NNfunction-NN_6_8::Value(int index, double* input) {
   input0 = (input[0] - 23.3992)/15.1824;
   input1 = (input[1] - -8.26766)/1193.58;
   input2 = (input[2] - 291.96)/249.375;
   input3 = (input[3] - -23.7357)/842.93;
   input4 = (input[4] - 1073.31)/932.86;
   input5 = (input[5] - 911.998)/951.425;
   input6 = (input[6] - 919.498)/949.65;
   input7 = (input[7] - 936.059)/930.62;
   input8 = (input[8] - 933.408)/976.685;
   input9 = (input[9] - 919.195)/964.496;
   input10 = (input[10] - 971.095)/952.341;
   input11 = (input[11] - 713.652)/877.293;
   input12 = (input[12] - 733.895)/874.029;
   input13 = (input[13] - 502.089)/522.353;
   input14 = (input[14] - 710.131)/806.548;
   input15 = (input[15] - 712.532)/808.486;
   input16 = (input[16] - 525.094)/561.81;
   input17 = (input[17] - 762.879)/904.84;
   input18 = (input[18] - 761.499)/905.538;
   input19 = (input[19] - 775.349)/865.499;
   input20 = (input[20] - -4.9164)/489.453;
   input21 = (input[21] - -7.5595)/1140.91;
   input22 = (input[22] - 1.75125)/1194.85;
   input23 = (input[23] - -52.292)/254.669;
   switch(index) {
     case 0:
         return neuron0x2b35a70();
     default:
         return 0.;
   }
}

double NNfunction-NN_6_8::neuron0x2b01b30() {
   return input0;
}

double NNfunction-NN_6_8::neuron0x2b01e70() {
   return input1;
}

double NNfunction-NN_6_8::neuron0x2b021b0() {
   return input2;
}

double NNfunction-NN_6_8::neuron0x2b024f0() {
   return input3;
}

double NNfunction-NN_6_8::neuron0x2b02830() {
   return input4;
}

double NNfunction-NN_6_8::neuron0x2b02b70() {
   return input5;
}

double NNfunction-NN_6_8::neuron0x2b02eb0() {
   return input6;
}

double NNfunction-NN_6_8::neuron0x2b031f0() {
   return input7;
}

double NNfunction-NN_6_8::neuron0x2b03530() {
   return input8;
}

double NNfunction-NN_6_8::neuron0x2b03870() {
   return input9;
}

double NNfunction-NN_6_8::neuron0x2b03bb0() {
   return input10;
}

double NNfunction-NN_6_8::neuron0x2b03ef0() {
   return input11;
}

double NNfunction-NN_6_8::neuron0x2b04230() {
   return input12;
}

double NNfunction-NN_6_8::neuron0x2b04570() {
   return input13;
}

double NNfunction-NN_6_8::neuron0x2b048b0() {
   return input14;
}

double NNfunction-NN_6_8::neuron0x2b04bf0() {
   return input15;
}

double NNfunction-NN_6_8::neuron0x2b04f30() {
   return input16;
}

double NNfunction-NN_6_8::neuron0x2b05490() {
   return input17;
}

double NNfunction-NN_6_8::neuron0x2b056b0() {
   return input18;
}

double NNfunction-NN_6_8::neuron0x2b059f0() {
   return input19;
}

double NNfunction-NN_6_8::neuron0x2b05d30() {
   return input20;
}

double NNfunction-NN_6_8::neuron0x2b06070() {
   return input21;
}

double NNfunction-NN_6_8::neuron0x2b063b0() {
   return input22;
}

double NNfunction-NN_6_8::neuron0x2b066f0() {
   return input23;
}

double NNfunction-NN_6_8::input0x2b06b90() {
   double input = 0.101667;
   input += synapse0x28c19a0();
   input += synapse0x2b019f0();
   input += synapse0x2b01a30();
   input += synapse0x2b06e40();
   input += synapse0x2b06e80();
   input += synapse0x2b06ec0();
   input += synapse0x2b06f00();
   input += synapse0x2b06f40();
   input += synapse0x2b06f80();
   input += synapse0x2b06fc0();
   input += synapse0x2b07000();
   input += synapse0x2b07040();
   input += synapse0x2b07080();
   input += synapse0x2b070c0();
   input += synapse0x2b07100();
   input += synapse0x2b07140();
   input += synapse0x2b01960();
   input += synapse0x2b019a0();
   input += synapse0x28b3200();
   input += synapse0x28b3240();
   input += synapse0x2b073a0();
   input += synapse0x2b073e0();
   input += synapse0x2b07420();
   input += synapse0x2b07460();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b06b90() {
   double input = input0x2b06b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b074a0() {
   double input = 0.581773;
   input += synapse0x2b077e0();
   input += synapse0x2b07820();
   input += synapse0x2b07860();
   input += synapse0x2b078a0();
   input += synapse0x2b078e0();
   input += synapse0x2b07920();
   input += synapse0x2b07960();
   input += synapse0x2b079a0();
   input += synapse0x2b079e0();
   input += synapse0x2b07290();
   input += synapse0x2b072d0();
   input += synapse0x2b07310();
   input += synapse0x2b07350();
   input += synapse0x2b07c30();
   input += synapse0x2b07c70();
   input += synapse0x2b07cb0();
   input += synapse0x2b07630();
   input += synapse0x2b07670();
   input += synapse0x2b07e00();
   input += synapse0x2b07e40();
   input += synapse0x2b07e80();
   input += synapse0x2b07ec0();
   input += synapse0x2b07f00();
   input += synapse0x2b07f40();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b074a0() {
   double input = input0x2b074a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b07f80() {
   double input = 0.458293;
   input += synapse0x2b082c0();
   input += synapse0x2b08300();
   input += synapse0x2b08340();
   input += synapse0x2b08380();
   input += synapse0x2b083c0();
   input += synapse0x2b08400();
   input += synapse0x2b08440();
   input += synapse0x2b08480();
   input += synapse0x2b084c0();
   input += synapse0x2b08500();
   input += synapse0x2b08540();
   input += synapse0x2b08580();
   input += synapse0x2b085c0();
   input += synapse0x2b08600();
   input += synapse0x2b08640();
   input += synapse0x2b08680();
   input += synapse0x2b08110();
   input += synapse0x2b08150();
   input += synapse0x28c1070();
   input += synapse0x28c10b0();
   input += synapse0x2af0bc0();
   input += synapse0x2af0c00();
   input += synapse0x2af0c40();
   input += synapse0x2b01a70();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b07f80() {
   double input = input0x2b07f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x28c1810() {
   double input = -0.632843;
   input += synapse0x2b07bd0();
   input += synapse0x2b01ab0();
   input += synapse0x2b01af0();
   input += synapse0x2b087d0();
   input += synapse0x2b08810();
   input += synapse0x2b08850();
   input += synapse0x2b08890();
   input += synapse0x2b088d0();
   input += synapse0x2b08910();
   input += synapse0x2b08950();
   input += synapse0x2b08990();
   input += synapse0x2b089d0();
   input += synapse0x2b08a10();
   input += synapse0x2b08a50();
   input += synapse0x2b08a90();
   input += synapse0x2b08ad0();
   input += synapse0x2b07a20();
   input += synapse0x2b07a60();
   input += synapse0x2b08c20();
   input += synapse0x2b08c60();
   input += synapse0x2b08ca0();
   input += synapse0x2b08ce0();
   input += synapse0x2b08d20();
   input += synapse0x2b08d60();
   return input;
}

double NNfunction-NN_6_8::neuron0x28c1810() {
   double input = input0x28c1810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b08da0() {
   double input = -1.41248;
   input += synapse0x2b090e0();
   input += synapse0x2b09120();
   input += synapse0x2b09160();
   input += synapse0x2b091a0();
   input += synapse0x2b091e0();
   input += synapse0x2b09220();
   input += synapse0x2b09260();
   input += synapse0x2b092a0();
   input += synapse0x2b092e0();
   input += synapse0x2b09320();
   input += synapse0x2b09360();
   input += synapse0x2b093a0();
   input += synapse0x2b093e0();
   input += synapse0x2b09420();
   input += synapse0x2b09460();
   input += synapse0x2b094a0();
   input += synapse0x2b08f30();
   input += synapse0x2b08f70();
   input += synapse0x2b095f0();
   input += synapse0x2b09630();
   input += synapse0x2b09670();
   input += synapse0x2b096b0();
   input += synapse0x2b096f0();
   input += synapse0x2b09730();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b08da0() {
   double input = input0x2b08da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b09770() {
   double input = -0.596742;
   input += synapse0x2b09ab0();
   input += synapse0x2b09af0();
   input += synapse0x2b09b30();
   input += synapse0x2b09b70();
   input += synapse0x2b09bb0();
   input += synapse0x2b09bf0();
   input += synapse0x2b09c30();
   input += synapse0x2b09c70();
   input += synapse0x2b09cb0();
   input += synapse0x28c1400();
   input += synapse0x28c1440();
   input += synapse0x28c1480();
   input += synapse0x28c14c0();
   input += synapse0x28c1500();
   input += synapse0x28c1540();
   input += synapse0x28c1580();
   input += synapse0x2b09900();
   input += synapse0x2b09940();
   input += synapse0x28c16d0();
   input += synapse0x28c1710();
   input += synapse0x28c1750();
   input += synapse0x28c1790();
   input += synapse0x28c17d0();
   input += synapse0x2b0a500();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b09770() {
   double input = input0x2b09770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b0a540() {
   double input = -0.232912;
   input += synapse0x2b0a880();
   input += synapse0x2b0a8c0();
   input += synapse0x2b0a900();
   input += synapse0x2b0a940();
   input += synapse0x2b0a980();
   input += synapse0x2b0a9c0();
   input += synapse0x2b0aa00();
   input += synapse0x2b0aa40();
   input += synapse0x2b0aa80();
   input += synapse0x2b0aac0();
   input += synapse0x2b0ab00();
   input += synapse0x2b0ab40();
   input += synapse0x2b0ab80();
   input += synapse0x2b0abc0();
   input += synapse0x2b0ac00();
   input += synapse0x2b0ac40();
   input += synapse0x2b0a6d0();
   input += synapse0x2b0a710();
   input += synapse0x2b0ad90();
   input += synapse0x2b0add0();
   input += synapse0x2b0ae10();
   input += synapse0x2b0ae50();
   input += synapse0x2b0ae90();
   input += synapse0x2b0aed0();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b0a540() {
   double input = input0x2b0a540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b0af10() {
   double input = -1.69031;
   input += synapse0x2b0b250();
   input += synapse0x2b0b290();
   input += synapse0x2b0b2d0();
   input += synapse0x2b0b310();
   input += synapse0x2b0b350();
   input += synapse0x2b0b390();
   input += synapse0x2b0b3d0();
   input += synapse0x2b0b410();
   input += synapse0x2b0b450();
   input += synapse0x2b0b490();
   input += synapse0x2b0b4d0();
   input += synapse0x2b0b510();
   input += synapse0x2b0b550();
   input += synapse0x2b0b590();
   input += synapse0x2b0b5d0();
   input += synapse0x2b0b610();
   input += synapse0x2b0b0a0();
   input += synapse0x2b0b0e0();
   input += synapse0x2b0b760();
   input += synapse0x2b0b7a0();
   input += synapse0x2b0b7e0();
   input += synapse0x2b0b820();
   input += synapse0x2b0b860();
   input += synapse0x2b0b8a0();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b0af10() {
   double input = input0x2b0af10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b0b8e0() {
   double input = 0.123845;
   input += synapse0x2b05380();
   input += synapse0x2b053c0();
   input += synapse0x2b05400();
   input += synapse0x2b05440();
   input += synapse0x2b0be30();
   input += synapse0x2b0be70();
   input += synapse0x2b0beb0();
   input += synapse0x2b0bef0();
   input += synapse0x2b0bf30();
   input += synapse0x2b0bf70();
   input += synapse0x2b0bfb0();
   input += synapse0x2b0bff0();
   input += synapse0x2b0c030();
   input += synapse0x2b0c070();
   input += synapse0x2b0c0b0();
   input += synapse0x2b0c0f0();
   input += synapse0x2b0ba70();
   input += synapse0x2b0bab0();
   input += synapse0x2b0c240();
   input += synapse0x2b0c280();
   input += synapse0x2b0c2c0();
   input += synapse0x2b0c300();
   input += synapse0x2b0c340();
   input += synapse0x2b0c380();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b0b8e0() {
   double input = input0x2b0b8e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b0c3c0() {
   double input = -1.81995;
   input += synapse0x2b0c700();
   input += synapse0x2b0c740();
   input += synapse0x2b0c780();
   input += synapse0x2b0c7c0();
   input += synapse0x2b0c800();
   input += synapse0x2b0c840();
   input += synapse0x2b0c880();
   input += synapse0x2b0c8c0();
   input += synapse0x2b0c900();
   input += synapse0x2b0c940();
   input += synapse0x2b0c980();
   input += synapse0x2b0c9c0();
   input += synapse0x2b0ca00();
   input += synapse0x2b0ca40();
   input += synapse0x2b0ca80();
   input += synapse0x2b0cac0();
   input += synapse0x2b0c550();
   input += synapse0x2b0c590();
   input += synapse0x2b0cc10();
   input += synapse0x2b0cc50();
   input += synapse0x2b0cc90();
   input += synapse0x2b0ccd0();
   input += synapse0x2b0cd10();
   input += synapse0x2b0cd50();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b0c3c0() {
   double input = input0x2b0c3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b0cd90() {
   double input = 0.278896;
   input += synapse0x2b0d0d0();
   input += synapse0x2b0d110();
   input += synapse0x2b0d150();
   input += synapse0x2b0d190();
   input += synapse0x2b0d1d0();
   input += synapse0x2b0d210();
   input += synapse0x2b0d250();
   input += synapse0x2b0d290();
   input += synapse0x2b0d2d0();
   input += synapse0x2b0d310();
   input += synapse0x2b0d350();
   input += synapse0x2b0d390();
   input += synapse0x2b0d3d0();
   input += synapse0x2b0d410();
   input += synapse0x2b0d450();
   input += synapse0x2b0d490();
   input += synapse0x2b0cf20();
   input += synapse0x2b0cf60();
   input += synapse0x2b09cf0();
   input += synapse0x2b09d30();
   input += synapse0x2b09d70();
   input += synapse0x2b09db0();
   input += synapse0x2b09df0();
   input += synapse0x2b09e30();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b0cd90() {
   double input = input0x2b0cd90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b09e70() {
   double input = 0.374296;
   input += synapse0x2b0a1b0();
   input += synapse0x2b0a1f0();
   input += synapse0x2b0a230();
   input += synapse0x2b0a270();
   input += synapse0x2b0a2b0();
   input += synapse0x2b0a2f0();
   input += synapse0x2b0a330();
   input += synapse0x2b0a370();
   input += synapse0x2b0a3b0();
   input += synapse0x2b0a3f0();
   input += synapse0x2b0a430();
   input += synapse0x2b0a470();
   input += synapse0x2b0a4b0();
   input += synapse0x2b0e5f0();
   input += synapse0x2b0e630();
   input += synapse0x2b0e670();
   input += synapse0x2b0a000();
   input += synapse0x2b0a040();
   input += synapse0x2b0e7c0();
   input += synapse0x2b0e800();
   input += synapse0x2b0e840();
   input += synapse0x2b0e880();
   input += synapse0x2b0e8c0();
   input += synapse0x2b0e900();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b09e70() {
   double input = input0x2b09e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b0e940() {
   double input = -2.97566;
   input += synapse0x2b0ec80();
   input += synapse0x2b0ecc0();
   input += synapse0x2b0ed00();
   input += synapse0x2b0ed40();
   input += synapse0x2b0ed80();
   input += synapse0x2b0edc0();
   input += synapse0x2b0ee00();
   input += synapse0x2b0ee40();
   input += synapse0x2b0ee80();
   input += synapse0x2b0eec0();
   input += synapse0x2b0ef00();
   input += synapse0x2b0ef40();
   input += synapse0x2b0ef80();
   input += synapse0x2b0efc0();
   input += synapse0x2b0f000();
   input += synapse0x2b0f040();
   input += synapse0x2b0ead0();
   input += synapse0x2b0eb10();
   input += synapse0x2b0f190();
   input += synapse0x2b0f1d0();
   input += synapse0x2b0f210();
   input += synapse0x2b0f250();
   input += synapse0x2b0f290();
   input += synapse0x2b0f2d0();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b0e940() {
   double input = input0x2b0e940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b0f310() {
   double input = 1.33452;
   input += synapse0x2b0f650();
   input += synapse0x2b0f690();
   input += synapse0x2b0f6d0();
   input += synapse0x2b0f710();
   input += synapse0x2b0f750();
   input += synapse0x2b0f790();
   input += synapse0x2b0f7d0();
   input += synapse0x2b0f810();
   input += synapse0x2b0f850();
   input += synapse0x2b0f890();
   input += synapse0x2b0f8d0();
   input += synapse0x2b0f910();
   input += synapse0x2b0f950();
   input += synapse0x2b0f990();
   input += synapse0x2b0f9d0();
   input += synapse0x2b0fa10();
   input += synapse0x2b0f4a0();
   input += synapse0x2b0f4e0();
   input += synapse0x2b0fb60();
   input += synapse0x2b0fba0();
   input += synapse0x2b0fbe0();
   input += synapse0x2b0fc20();
   input += synapse0x2b0fc60();
   input += synapse0x2b0fca0();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b0f310() {
   double input = input0x2b0f310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b0fce0() {
   double input = 1.11334;
   input += synapse0x2b10020();
   input += synapse0x2b10060();
   input += synapse0x2b100a0();
   input += synapse0x2b100e0();
   input += synapse0x2b10120();
   input += synapse0x2b10160();
   input += synapse0x2b101a0();
   input += synapse0x2b101e0();
   input += synapse0x2b10220();
   input += synapse0x2b10260();
   input += synapse0x2b102a0();
   input += synapse0x2b102e0();
   input += synapse0x2b10320();
   input += synapse0x2b10360();
   input += synapse0x2b103a0();
   input += synapse0x2b103e0();
   input += synapse0x2b0fe70();
   input += synapse0x2b0feb0();
   input += synapse0x2b10530();
   input += synapse0x2b10570();
   input += synapse0x2b105b0();
   input += synapse0x2b105f0();
   input += synapse0x2b10630();
   input += synapse0x2b10670();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b0fce0() {
   double input = input0x2b0fce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b106b0() {
   double input = -2.4823;
   input += synapse0x2b109f0();
   input += synapse0x2b01d50();
   input += synapse0x2b01d90();
   input += synapse0x2b02090();
   input += synapse0x2b020d0();
   input += synapse0x2b023d0();
   input += synapse0x2b02410();
   input += synapse0x2b02710();
   input += synapse0x2b02750();
   input += synapse0x2b02a50();
   input += synapse0x2b02a90();
   input += synapse0x2b02d90();
   input += synapse0x2b02dd0();
   input += synapse0x2b030d0();
   input += synapse0x2b03110();
   input += synapse0x2b03410();
   input += synapse0x2b03450();
   input += synapse0x2b03750();
   input += synapse0x2b03790();
   input += synapse0x2b03a90();
   input += synapse0x2b03ad0();
   input += synapse0x2b03dd0();
   input += synapse0x2b03e10();
   input += synapse0x2b04110();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b106b0() {
   double input = input0x2b106b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b124c0() {
   double input = 2.08372;
   input += synapse0x2b04150();
   input += synapse0x2b04e10();
   input += synapse0x2b04e50();
   input += synapse0x2b10840();
   input += synapse0x2b10880();
   input += synapse0x2b05150();
   input += synapse0x2b05190();
   input += synapse0x28b30e0();
   input += synapse0x28b3120();
   input += synapse0x2b058d0();
   input += synapse0x2b05910();
   input += synapse0x2b05c10();
   input += synapse0x2b05c50();
   input += synapse0x2b05f50();
   input += synapse0x2b05f90();
   input += synapse0x2b06290();
   input += synapse0x2b062d0();
   input += synapse0x2b065d0();
   input += synapse0x2b06610();
   input += synapse0x2b06910();
   input += synapse0x2b06950();
   input += synapse0x2b04450();
   input += synapse0x2b04490();
   input += synapse0x2b12760();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b124c0() {
   double input = input0x2b124c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b127a0() {
   double input = 0.369549;
   input += synapse0x2b12ae0();
   input += synapse0x2b12b20();
   input += synapse0x2b12b60();
   input += synapse0x2b12ba0();
   input += synapse0x2b12be0();
   input += synapse0x2b12c20();
   input += synapse0x2b12c60();
   input += synapse0x2b12ca0();
   input += synapse0x2b12ce0();
   input += synapse0x2b12d20();
   input += synapse0x2b12d60();
   input += synapse0x2b12da0();
   input += synapse0x2b12de0();
   input += synapse0x2b12e20();
   input += synapse0x2b12e60();
   input += synapse0x2b12ea0();
   input += synapse0x2b12930();
   input += synapse0x2b12970();
   input += synapse0x2b12ff0();
   input += synapse0x2b13030();
   input += synapse0x2b13070();
   input += synapse0x2b130b0();
   input += synapse0x2b130f0();
   input += synapse0x2b13130();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b127a0() {
   double input = input0x2b127a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b13170() {
   double input = -2.07651;
   input += synapse0x2b134b0();
   input += synapse0x2b134f0();
   input += synapse0x2b13530();
   input += synapse0x2b13570();
   input += synapse0x2b135b0();
   input += synapse0x2b135f0();
   input += synapse0x2b13630();
   input += synapse0x2b13670();
   input += synapse0x2b136b0();
   input += synapse0x2b136f0();
   input += synapse0x2b13730();
   input += synapse0x2b13770();
   input += synapse0x2b137b0();
   input += synapse0x2b137f0();
   input += synapse0x2b13830();
   input += synapse0x2b13870();
   input += synapse0x2b13300();
   input += synapse0x2b13340();
   input += synapse0x2b139c0();
   input += synapse0x2b13a00();
   input += synapse0x2b13a40();
   input += synapse0x2b13a80();
   input += synapse0x2b13ac0();
   input += synapse0x2b13b00();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b13170() {
   double input = input0x2b13170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b13b40() {
   double input = -0.719361;
   input += synapse0x2b13e80();
   input += synapse0x2b13ec0();
   input += synapse0x2b13f00();
   input += synapse0x2b13f40();
   input += synapse0x2b13f80();
   input += synapse0x2b13fc0();
   input += synapse0x2b14000();
   input += synapse0x2b14040();
   input += synapse0x2b14080();
   input += synapse0x2b140c0();
   input += synapse0x2b14100();
   input += synapse0x2b14140();
   input += synapse0x2b14180();
   input += synapse0x2b141c0();
   input += synapse0x2b14200();
   input += synapse0x2b14240();
   input += synapse0x2b13cd0();
   input += synapse0x2b13d10();
   input += synapse0x2b14390();
   input += synapse0x2b143d0();
   input += synapse0x2b14410();
   input += synapse0x2b14450();
   input += synapse0x2b14490();
   input += synapse0x2b144d0();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b13b40() {
   double input = input0x2b13b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b14510() {
   double input = -1.26068;
   input += synapse0x2b14850();
   input += synapse0x2b14890();
   input += synapse0x2b148d0();
   input += synapse0x2b14910();
   input += synapse0x2b14950();
   input += synapse0x2b14990();
   input += synapse0x2b149d0();
   input += synapse0x2b14a10();
   input += synapse0x2b14a50();
   input += synapse0x2b14a90();
   input += synapse0x2b14ad0();
   input += synapse0x2b14b10();
   input += synapse0x2b14b50();
   input += synapse0x2b14b90();
   input += synapse0x2b14bd0();
   input += synapse0x2b14c10();
   input += synapse0x2b146a0();
   input += synapse0x2b146e0();
   input += synapse0x2b14d60();
   input += synapse0x2b14da0();
   input += synapse0x2b14de0();
   input += synapse0x2b14e20();
   input += synapse0x2b14e60();
   input += synapse0x2b14ea0();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b14510() {
   double input = input0x2b14510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b14ee0() {
   double input = -0.257907;
   input += synapse0x2b15220();
   input += synapse0x2b15260();
   input += synapse0x2b152a0();
   input += synapse0x2b152e0();
   input += synapse0x2b15320();
   input += synapse0x2b15360();
   input += synapse0x2b153a0();
   input += synapse0x2b153e0();
   input += synapse0x2b15420();
   input += synapse0x2b0d5e0();
   input += synapse0x2b0d620();
   input += synapse0x2b0d660();
   input += synapse0x2b0d6a0();
   input += synapse0x2b0d6e0();
   input += synapse0x2b0d720();
   input += synapse0x2b0d760();
   input += synapse0x2b15070();
   input += synapse0x2b150b0();
   input += synapse0x2b0d8b0();
   input += synapse0x2b0d8f0();
   input += synapse0x2b0d930();
   input += synapse0x2b0d970();
   input += synapse0x2b0d9b0();
   input += synapse0x2b0d9f0();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b14ee0() {
   double input = input0x2b14ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b0da30() {
   double input = 0.37356;
   input += synapse0x2b0dd70();
   input += synapse0x2b0ddb0();
   input += synapse0x2b0ddf0();
   input += synapse0x2b0de30();
   input += synapse0x2b0de70();
   input += synapse0x2b0deb0();
   input += synapse0x2b0def0();
   input += synapse0x2b0df30();
   input += synapse0x2b0df70();
   input += synapse0x2b0dfb0();
   input += synapse0x2b0dff0();
   input += synapse0x2b0e030();
   input += synapse0x2b0e070();
   input += synapse0x2b0e0b0();
   input += synapse0x2b0e0f0();
   input += synapse0x2b0e130();
   input += synapse0x2b0dbc0();
   input += synapse0x2b0dc00();
   input += synapse0x2b0e280();
   input += synapse0x2b0e2c0();
   input += synapse0x2b0e300();
   input += synapse0x2b0e340();
   input += synapse0x2b0e380();
   input += synapse0x2b0e3c0();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b0da30() {
   double input = input0x2b0da30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b0e400() {
   double input = -0.682132;
   input += synapse0x2b0e590();
   input += synapse0x2b17620();
   input += synapse0x2b17660();
   input += synapse0x2b176a0();
   input += synapse0x2b176e0();
   input += synapse0x2b17720();
   input += synapse0x2b17760();
   input += synapse0x2b177a0();
   input += synapse0x2b177e0();
   input += synapse0x2b17820();
   input += synapse0x2b17860();
   input += synapse0x2b178a0();
   input += synapse0x2b178e0();
   input += synapse0x2b17920();
   input += synapse0x2b17960();
   input += synapse0x2b179a0();
   input += synapse0x2b17470();
   input += synapse0x2b174b0();
   input += synapse0x2b17af0();
   input += synapse0x2b17b30();
   input += synapse0x2b17b70();
   input += synapse0x2b17bb0();
   input += synapse0x2b17bf0();
   input += synapse0x2b17c30();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b0e400() {
   double input = input0x2b0e400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b17c70() {
   double input = -2.93447;
   input += synapse0x2b17fb0();
   input += synapse0x2b17ff0();
   input += synapse0x2b18030();
   input += synapse0x2b18070();
   input += synapse0x2b180b0();
   input += synapse0x2b180f0();
   input += synapse0x2b18130();
   input += synapse0x2b18170();
   input += synapse0x2b181b0();
   input += synapse0x2b181f0();
   input += synapse0x2b18230();
   input += synapse0x2b18270();
   input += synapse0x2b182b0();
   input += synapse0x2b182f0();
   input += synapse0x2b18330();
   input += synapse0x2b18370();
   input += synapse0x2b17e00();
   input += synapse0x2b17e40();
   input += synapse0x2b184c0();
   input += synapse0x2b18500();
   input += synapse0x2b18540();
   input += synapse0x2b18580();
   input += synapse0x2b185c0();
   input += synapse0x2b18600();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b17c70() {
   double input = input0x2b17c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b18640() {
   double input = -0.27247;
   input += synapse0x2b18980();
   input += synapse0x2b189c0();
   input += synapse0x2b18a00();
   input += synapse0x2b18a40();
   input += synapse0x2b18a80();
   input += synapse0x2b18ac0();
   input += synapse0x2b18b00();
   input += synapse0x2b18b40();
   input += synapse0x2b18b80();
   input += synapse0x2b18bc0();
   input += synapse0x2b18c00();
   input += synapse0x2b18c40();
   input += synapse0x2b18c80();
   input += synapse0x2b18cc0();
   input += synapse0x2b18d00();
   input += synapse0x2b18d40();
   input += synapse0x2b187d0();
   input += synapse0x2b18810();
   input += synapse0x2b18e90();
   input += synapse0x2b18ed0();
   input += synapse0x2b18f10();
   input += synapse0x2b18f50();
   input += synapse0x2b18f90();
   input += synapse0x2b18fd0();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b18640() {
   double input = input0x2b18640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b19010() {
   double input = -0.448811;
   input += synapse0x2b19350();
   input += synapse0x2b19390();
   input += synapse0x2b193d0();
   input += synapse0x2b19410();
   input += synapse0x2b19450();
   input += synapse0x2b19490();
   input += synapse0x2b194d0();
   input += synapse0x2b19510();
   input += synapse0x2b19550();
   input += synapse0x2b19590();
   input += synapse0x2b195d0();
   input += synapse0x2b19610();
   input += synapse0x2b19650();
   input += synapse0x2b19690();
   input += synapse0x2b196d0();
   input += synapse0x2b19710();
   input += synapse0x2b191a0();
   input += synapse0x2b191e0();
   input += synapse0x2b19860();
   input += synapse0x2b198a0();
   input += synapse0x2b198e0();
   input += synapse0x2b19920();
   input += synapse0x2b19960();
   input += synapse0x2b199a0();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b19010() {
   double input = input0x2b19010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b199e0() {
   double input = 0.140759;
   input += synapse0x2b19d20();
   input += synapse0x2b19d60();
   input += synapse0x2b19da0();
   input += synapse0x2b19de0();
   input += synapse0x2b19e20();
   input += synapse0x2b19e60();
   input += synapse0x2b19ea0();
   input += synapse0x2b19ee0();
   input += synapse0x2b19f20();
   input += synapse0x2b19f60();
   input += synapse0x2b19fa0();
   input += synapse0x2b19fe0();
   input += synapse0x2b1a020();
   input += synapse0x2b1a060();
   input += synapse0x2b1a0a0();
   input += synapse0x2b1a0e0();
   input += synapse0x2b19b70();
   input += synapse0x2b19bb0();
   input += synapse0x2b1a230();
   input += synapse0x2b1a270();
   input += synapse0x2b1a2b0();
   input += synapse0x2b1a2f0();
   input += synapse0x2b1a330();
   input += synapse0x2b1a370();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b199e0() {
   double input = input0x2b199e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b1a3b0() {
   double input = 2.44204;
   input += synapse0x2b1a6f0();
   input += synapse0x2b1a730();
   input += synapse0x2b1a770();
   input += synapse0x2b1a7b0();
   input += synapse0x2b1a7f0();
   input += synapse0x2b1a830();
   input += synapse0x2b1a870();
   input += synapse0x2b1a8b0();
   input += synapse0x2b1a8f0();
   input += synapse0x2b1a930();
   input += synapse0x2b1a970();
   input += synapse0x2b1a9b0();
   input += synapse0x2b1a9f0();
   input += synapse0x2b1aa30();
   input += synapse0x2b1aa70();
   input += synapse0x2b1aab0();
   input += synapse0x2b1a540();
   input += synapse0x2b1a580();
   input += synapse0x2b1ac00();
   input += synapse0x2b1ac40();
   input += synapse0x2b1ac80();
   input += synapse0x2b1acc0();
   input += synapse0x2b1ad00();
   input += synapse0x2b1ad40();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b1a3b0() {
   double input = input0x2b1a3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b1ad80() {
   double input = -2.07638;
   input += synapse0x2b1b0c0();
   input += synapse0x2b1b100();
   input += synapse0x2b1b140();
   input += synapse0x2b1b180();
   input += synapse0x2b1b1c0();
   input += synapse0x2b1b200();
   input += synapse0x2b1b240();
   input += synapse0x2b1b280();
   input += synapse0x2b1b2c0();
   input += synapse0x2b1b300();
   input += synapse0x2b1b340();
   input += synapse0x2b1b380();
   input += synapse0x2b1b3c0();
   input += synapse0x2b1b400();
   input += synapse0x2b1b440();
   input += synapse0x2b1b480();
   input += synapse0x2b1af10();
   input += synapse0x2b1af50();
   input += synapse0x2b1b5d0();
   input += synapse0x2b1b610();
   input += synapse0x2b1b650();
   input += synapse0x2b1b690();
   input += synapse0x2b1b6d0();
   input += synapse0x2b1b710();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b1ad80() {
   double input = input0x2b1ad80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b1b750() {
   double input = 0.16129;
   input += synapse0x2b1ba90();
   input += synapse0x2b1bad0();
   input += synapse0x2b1bb10();
   input += synapse0x2b1bb50();
   input += synapse0x2b1bb90();
   input += synapse0x2b1bbd0();
   input += synapse0x2b1bc10();
   input += synapse0x2b1bc50();
   input += synapse0x2b1bc90();
   input += synapse0x2b1bcd0();
   input += synapse0x2b1bd10();
   input += synapse0x2b1bd50();
   input += synapse0x2b1bd90();
   input += synapse0x2b1bdd0();
   input += synapse0x2b1be10();
   input += synapse0x2b1be50();
   input += synapse0x2b1b8e0();
   input += synapse0x2b1b920();
   input += synapse0x2b1bfa0();
   input += synapse0x2b1bfe0();
   input += synapse0x2b1c020();
   input += synapse0x2b1c060();
   input += synapse0x2b1c0a0();
   input += synapse0x2b1c0e0();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b1b750() {
   double input = input0x2b1b750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b1c120() {
   double input = -0.612445;
   input += synapse0x2b1c460();
   input += synapse0x2b10a30();
   input += synapse0x2b10a70();
   input += synapse0x2b10ab0();
   input += synapse0x2b10d00();
   input += synapse0x2b10d40();
   input += synapse0x2b10d80();
   input += synapse0x2b10fd0();
   input += synapse0x2b11010();
   input += synapse0x2b11260();
   input += synapse0x2b112a0();
   input += synapse0x2b112e0();
   input += synapse0x2b11530();
   input += synapse0x2b11570();
   input += synapse0x2b117c0();
   input += synapse0x2b11800();
   input += synapse0x2b1c2b0();
   input += synapse0x2b1c2f0();
   input += synapse0x2b11950();
   input += synapse0x2b11e60();
   input += synapse0x2b11ea0();
   input += synapse0x2b11ee0();
   input += synapse0x2b12130();
   input += synapse0x2b12170();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b1c120() {
   double input = input0x2b1c120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b121b0() {
   double input = 0.780247;
   input += synapse0x2b11a20();
   input += synapse0x2b11a60();
   input += synapse0x2b11aa0();
   input += synapse0x2b11ae0();
   input += synapse0x2b12460();
   input += synapse0x2b1e7b0();
   input += synapse0x2b1e7f0();
   input += synapse0x2b1e830();
   input += synapse0x2b1e870();
   input += synapse0x2b1e8b0();
   input += synapse0x2b1e8f0();
   input += synapse0x2b1e930();
   input += synapse0x2b1e970();
   input += synapse0x2b1e9b0();
   input += synapse0x2b1e9f0();
   input += synapse0x2b1ea30();
   input += synapse0x2b12340();
   input += synapse0x2b12380();
   input += synapse0x2b1eb80();
   input += synapse0x2b1ebc0();
   input += synapse0x2b1ec00();
   input += synapse0x2b1ec40();
   input += synapse0x2b1ec80();
   input += synapse0x2b1ecc0();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b121b0() {
   double input = input0x2b121b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b1ed00() {
   double input = -0.615987;
   input += synapse0x2b1f040();
   input += synapse0x2b1f080();
   input += synapse0x2b1f0c0();
   input += synapse0x2b1f100();
   input += synapse0x2b1f140();
   input += synapse0x2b1f180();
   input += synapse0x2b1f1c0();
   input += synapse0x2b1f200();
   input += synapse0x2b1f240();
   input += synapse0x2b1f280();
   input += synapse0x2b1f2c0();
   input += synapse0x2b1f300();
   input += synapse0x2b1f340();
   input += synapse0x2b1f380();
   input += synapse0x2b1f3c0();
   input += synapse0x2b1f400();
   input += synapse0x2b1ee90();
   input += synapse0x2b1eed0();
   input += synapse0x2b1f550();
   input += synapse0x2b1f590();
   input += synapse0x2b1f5d0();
   input += synapse0x2b1f610();
   input += synapse0x2b1f650();
   input += synapse0x2b1f690();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b1ed00() {
   double input = input0x2b1ed00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b1f6d0() {
   double input = 1.04876;
   input += synapse0x2b1fa10();
   input += synapse0x2b1fa50();
   input += synapse0x2b1fa90();
   input += synapse0x2b1fad0();
   input += synapse0x2b1fb10();
   input += synapse0x2b1fb50();
   input += synapse0x2b1fb90();
   input += synapse0x2b1fbd0();
   input += synapse0x2b1fc10();
   input += synapse0x2b1fc50();
   input += synapse0x2b1fc90();
   input += synapse0x2b1fcd0();
   input += synapse0x2b1fd10();
   input += synapse0x2b1fd50();
   input += synapse0x2b1fd90();
   input += synapse0x2b1fdd0();
   input += synapse0x2b1f860();
   input += synapse0x2b1f8a0();
   input += synapse0x2b1ff20();
   input += synapse0x2b1ff60();
   input += synapse0x2b1ffa0();
   input += synapse0x2b1ffe0();
   input += synapse0x2b20020();
   input += synapse0x2b20060();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b1f6d0() {
   double input = input0x2b1f6d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b200a0() {
   double input = -0.332142;
   input += synapse0x2b203e0();
   input += synapse0x2b20420();
   input += synapse0x2b20460();
   input += synapse0x2b204a0();
   input += synapse0x2b204e0();
   input += synapse0x2b20520();
   input += synapse0x2b20560();
   input += synapse0x2b205a0();
   input += synapse0x2b205e0();
   input += synapse0x2b20620();
   input += synapse0x2b20660();
   input += synapse0x2b206a0();
   input += synapse0x2b206e0();
   input += synapse0x2b20720();
   input += synapse0x2b20760();
   input += synapse0x2b207a0();
   input += synapse0x2b20230();
   input += synapse0x2b20270();
   input += synapse0x2b208f0();
   input += synapse0x2b20930();
   input += synapse0x2b20970();
   input += synapse0x2b209b0();
   input += synapse0x2b209f0();
   input += synapse0x2b20a30();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b200a0() {
   double input = input0x2b200a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b20a70() {
   double input = 0.206207;
   input += synapse0x2b20db0();
   input += synapse0x2b20df0();
   input += synapse0x2b20e30();
   input += synapse0x2b20e70();
   input += synapse0x2b20eb0();
   input += synapse0x2b20ef0();
   input += synapse0x2b20f30();
   input += synapse0x2b20f70();
   input += synapse0x2b20fb0();
   input += synapse0x2b20ff0();
   input += synapse0x2b21030();
   input += synapse0x2b21070();
   input += synapse0x2b210b0();
   input += synapse0x2b210f0();
   input += synapse0x2b21130();
   input += synapse0x2b21170();
   input += synapse0x2b20c00();
   input += synapse0x2b20c40();
   input += synapse0x2b212c0();
   input += synapse0x2b21300();
   input += synapse0x2b21340();
   input += synapse0x2b21380();
   input += synapse0x2b213c0();
   input += synapse0x2b21400();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b20a70() {
   double input = input0x2b20a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b21440() {
   double input = 3.1908;
   input += synapse0x2b21780();
   input += synapse0x2b217c0();
   input += synapse0x2b21800();
   input += synapse0x2b21840();
   input += synapse0x2b21880();
   input += synapse0x2b218c0();
   input += synapse0x2b21900();
   input += synapse0x2b21940();
   input += synapse0x2b21980();
   input += synapse0x2b219c0();
   input += synapse0x2b21a00();
   input += synapse0x2b21a40();
   input += synapse0x2b21a80();
   input += synapse0x2b21ac0();
   input += synapse0x2b21b00();
   input += synapse0x2b21b40();
   input += synapse0x2b215d0();
   input += synapse0x2b21610();
   input += synapse0x2b21c90();
   input += synapse0x2b21cd0();
   input += synapse0x2b21d10();
   input += synapse0x2b21d50();
   input += synapse0x2b21d90();
   input += synapse0x2b21dd0();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b21440() {
   double input = input0x2b21440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b21e10() {
   double input = 0.889078;
   input += synapse0x2b22150();
   input += synapse0x2b22190();
   input += synapse0x2b221d0();
   input += synapse0x2b22210();
   input += synapse0x2b22250();
   input += synapse0x2b22290();
   input += synapse0x2b222d0();
   input += synapse0x2b22310();
   input += synapse0x2b22350();
   input += synapse0x2b22390();
   input += synapse0x2b223d0();
   input += synapse0x2b22410();
   input += synapse0x2b22450();
   input += synapse0x2b22490();
   input += synapse0x2b224d0();
   input += synapse0x2b22510();
   input += synapse0x2b21fa0();
   input += synapse0x2b21fe0();
   input += synapse0x2b22660();
   input += synapse0x2b226a0();
   input += synapse0x2b226e0();
   input += synapse0x2b22720();
   input += synapse0x2b22760();
   input += synapse0x2b227a0();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b21e10() {
   double input = input0x2b21e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b227e0() {
   double input = 0.55768;
   input += synapse0x2b22b20();
   input += synapse0x2b22b60();
   input += synapse0x2b22ba0();
   input += synapse0x2b22be0();
   input += synapse0x2b22c20();
   input += synapse0x2b22c60();
   input += synapse0x2b22ca0();
   input += synapse0x2b22ce0();
   input += synapse0x2b22d20();
   input += synapse0x2b22d60();
   input += synapse0x2b22da0();
   input += synapse0x2b22de0();
   input += synapse0x2b22e20();
   input += synapse0x2b22e60();
   input += synapse0x2b22ea0();
   input += synapse0x2b22ee0();
   input += synapse0x2b22970();
   input += synapse0x2b229b0();
   input += synapse0x2b23030();
   input += synapse0x2b23070();
   input += synapse0x2b230b0();
   input += synapse0x2b230f0();
   input += synapse0x2b23130();
   input += synapse0x2b23170();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b227e0() {
   double input = input0x2b227e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b231b0() {
   double input = -2.57671;
   input += synapse0x2b0bc20();
   input += synapse0x2b0bc60();
   input += synapse0x2b0bca0();
   input += synapse0x2b0bce0();
   input += synapse0x2b0bd20();
   input += synapse0x2b0bd60();
   input += synapse0x2b0bda0();
   input += synapse0x2b0bde0();
   input += synapse0x2b23900();
   input += synapse0x2b23940();
   input += synapse0x2b23980();
   input += synapse0x2b239c0();
   input += synapse0x2b23a00();
   input += synapse0x2b23a40();
   input += synapse0x2b23a80();
   input += synapse0x2b23ac0();
   input += synapse0x2b23340();
   input += synapse0x2b23380();
   input += synapse0x2b23c10();
   input += synapse0x2b23c50();
   input += synapse0x2b23c90();
   input += synapse0x2b23cd0();
   input += synapse0x2b23d10();
   input += synapse0x2b23d50();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b231b0() {
   double input = input0x2b231b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b23d90() {
   double input = 0.529562;
   input += synapse0x2b240d0();
   input += synapse0x2b24110();
   input += synapse0x2b24150();
   input += synapse0x2b24190();
   input += synapse0x2b241d0();
   input += synapse0x2b24210();
   input += synapse0x2b24250();
   input += synapse0x2b24290();
   input += synapse0x2b242d0();
   input += synapse0x2b24310();
   input += synapse0x2b24350();
   input += synapse0x2b24390();
   input += synapse0x2b243d0();
   input += synapse0x2b24410();
   input += synapse0x2b24450();
   input += synapse0x2b24490();
   input += synapse0x2b23f20();
   input += synapse0x2b23f60();
   input += synapse0x2b245e0();
   input += synapse0x2b24620();
   input += synapse0x2b24660();
   input += synapse0x2b246a0();
   input += synapse0x2b246e0();
   input += synapse0x2b24720();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b23d90() {
   double input = input0x2b23d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b24760() {
   double input = -0.571329;
   input += synapse0x2b24aa0();
   input += synapse0x2b24ae0();
   input += synapse0x2b24b20();
   input += synapse0x2b24b60();
   input += synapse0x2b24ba0();
   input += synapse0x2b24be0();
   input += synapse0x2b24c20();
   input += synapse0x2b24c60();
   input += synapse0x2b24ca0();
   input += synapse0x2b24ce0();
   input += synapse0x2b24d20();
   input += synapse0x2b24d60();
   input += synapse0x2b24da0();
   input += synapse0x2b24de0();
   input += synapse0x2b24e20();
   input += synapse0x2b24e60();
   input += synapse0x2b248f0();
   input += synapse0x2b24930();
   input += synapse0x2b15460();
   input += synapse0x2b154a0();
   input += synapse0x2b154e0();
   input += synapse0x2b15520();
   input += synapse0x2b15560();
   input += synapse0x2b155a0();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b24760() {
   double input = input0x2b24760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b155e0() {
   double input = -2.08972;
   input += synapse0x2b15920();
   input += synapse0x2b15960();
   input += synapse0x2b159a0();
   input += synapse0x2b159e0();
   input += synapse0x2b15a20();
   input += synapse0x2b15a60();
   input += synapse0x2b15aa0();
   input += synapse0x2b15ae0();
   input += synapse0x2b15b20();
   input += synapse0x2b15b60();
   input += synapse0x2b15ba0();
   input += synapse0x2b15be0();
   input += synapse0x2b15c20();
   input += synapse0x2b15c60();
   input += synapse0x2b15ca0();
   input += synapse0x2b15ce0();
   input += synapse0x2b15770();
   input += synapse0x2b157b0();
   input += synapse0x2b15e30();
   input += synapse0x2b15e70();
   input += synapse0x2b15eb0();
   input += synapse0x2b15ef0();
   input += synapse0x2b15f30();
   input += synapse0x2b15f70();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b155e0() {
   double input = input0x2b155e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b15fb0() {
   double input = -0.547331;
   input += synapse0x2b162f0();
   input += synapse0x2b16330();
   input += synapse0x2b16370();
   input += synapse0x2b163b0();
   input += synapse0x2b163f0();
   input += synapse0x2b16430();
   input += synapse0x2b16470();
   input += synapse0x2b164b0();
   input += synapse0x2b164f0();
   input += synapse0x2b16530();
   input += synapse0x2b16570();
   input += synapse0x2b165b0();
   input += synapse0x2b165f0();
   input += synapse0x2b16630();
   input += synapse0x2b16670();
   input += synapse0x2b166b0();
   input += synapse0x2b16140();
   input += synapse0x2b16180();
   input += synapse0x2b16800();
   input += synapse0x2b16840();
   input += synapse0x2b16880();
   input += synapse0x2b168c0();
   input += synapse0x2b16900();
   input += synapse0x2b16940();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b15fb0() {
   double input = input0x2b15fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b16980() {
   double input = -0.375555;
   input += synapse0x2b16cc0();
   input += synapse0x2b16d00();
   input += synapse0x2b16d40();
   input += synapse0x2b16d80();
   input += synapse0x2b16dc0();
   input += synapse0x2b16e00();
   input += synapse0x2b16e40();
   input += synapse0x2b16e80();
   input += synapse0x2b16ec0();
   input += synapse0x2b16f00();
   input += synapse0x2b16f40();
   input += synapse0x2b16f80();
   input += synapse0x2b16fc0();
   input += synapse0x2b17000();
   input += synapse0x2b17040();
   input += synapse0x2b17080();
   input += synapse0x2b16b10();
   input += synapse0x2b16b50();
   input += synapse0x2b171d0();
   input += synapse0x2b17210();
   input += synapse0x2b17250();
   input += synapse0x2b17290();
   input += synapse0x2b172d0();
   input += synapse0x2b17310();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b16980() {
   double input = input0x2b16980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b28fc0() {
   double input = -1.81336;
   input += synapse0x2b291e0();
   input += synapse0x2b29220();
   input += synapse0x2b29260();
   input += synapse0x2b292a0();
   input += synapse0x2b292e0();
   input += synapse0x2b29320();
   input += synapse0x2b29360();
   input += synapse0x2b293a0();
   input += synapse0x2b293e0();
   input += synapse0x2b29420();
   input += synapse0x2b29460();
   input += synapse0x2b294a0();
   input += synapse0x2b294e0();
   input += synapse0x2b29520();
   input += synapse0x2b29560();
   input += synapse0x2b295a0();
   input += synapse0x2b17350();
   input += synapse0x2b17390();
   input += synapse0x2b296f0();
   input += synapse0x2b29730();
   input += synapse0x2b29770();
   input += synapse0x2b297b0();
   input += synapse0x2b297f0();
   input += synapse0x2b29830();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b28fc0() {
   double input = input0x2b28fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b29870() {
   double input = -0.400961;
   input += synapse0x2b29bb0();
   input += synapse0x2b29bf0();
   input += synapse0x2b29c30();
   input += synapse0x2b29c70();
   input += synapse0x2b29cb0();
   input += synapse0x2b29cf0();
   input += synapse0x2b29d30();
   input += synapse0x2b29d70();
   input += synapse0x2b29db0();
   input += synapse0x2b29df0();
   input += synapse0x2b29e30();
   input += synapse0x2b29e70();
   input += synapse0x2b29eb0();
   input += synapse0x2b29ef0();
   input += synapse0x2b29f30();
   input += synapse0x2b29f70();
   input += synapse0x2b29a00();
   input += synapse0x2b29a40();
   input += synapse0x2b2a0c0();
   input += synapse0x2b2a100();
   input += synapse0x2b2a140();
   input += synapse0x2b2a180();
   input += synapse0x2b2a1c0();
   input += synapse0x2b2a200();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b29870() {
   double input = input0x2b29870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b2a240() {
   double input = -0.680056;
   input += synapse0x2b2a580();
   input += synapse0x2b2a5c0();
   input += synapse0x2b2a600();
   input += synapse0x2b2a640();
   input += synapse0x2b2a680();
   input += synapse0x2b2a6c0();
   input += synapse0x2b2a700();
   input += synapse0x2b2a740();
   input += synapse0x2b2a780();
   input += synapse0x2b2a7c0();
   input += synapse0x2b2a800();
   input += synapse0x2b2a840();
   input += synapse0x2b2a880();
   input += synapse0x2b2a8c0();
   input += synapse0x2b2a900();
   input += synapse0x2b2a940();
   input += synapse0x2b2a3d0();
   input += synapse0x2b2a410();
   input += synapse0x2b2aa90();
   input += synapse0x2b2aad0();
   input += synapse0x2b2ab10();
   input += synapse0x2b2ab50();
   input += synapse0x2b2ab90();
   input += synapse0x2b2abd0();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b2a240() {
   double input = input0x2b2a240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b2ac10() {
   double input = 0.502445;
   input += synapse0x2b2af50();
   input += synapse0x2b2af90();
   input += synapse0x2b2afd0();
   input += synapse0x2b2b010();
   input += synapse0x2b2b050();
   input += synapse0x2b2b090();
   input += synapse0x2b2b0d0();
   input += synapse0x2b2b110();
   input += synapse0x2b2b150();
   input += synapse0x2b2b190();
   input += synapse0x2b2b1d0();
   input += synapse0x2b2b210();
   input += synapse0x2b2b250();
   input += synapse0x2b2b290();
   input += synapse0x2b2b2d0();
   input += synapse0x2b2b310();
   input += synapse0x2b2ada0();
   input += synapse0x2b2ade0();
   input += synapse0x2b2b460();
   input += synapse0x2b2b4a0();
   input += synapse0x2b2b4e0();
   input += synapse0x2b2b520();
   input += synapse0x2b2b560();
   input += synapse0x2b2b5a0();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b2ac10() {
   double input = input0x2b2ac10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b31e10() {
   double input = -0.326614;
   input += synapse0x2b07b40();
   input += synapse0x2b07b80();
   input += synapse0x2b09050();
   input += synapse0x2b09090();
   input += synapse0x2b09a20();
   input += synapse0x2b09a60();
   input += synapse0x2b0a7f0();
   input += synapse0x2b0a830();
   input += synapse0x2b0b1c0();
   input += synapse0x2b0b200();
   input += synapse0x2b0bb90();
   input += synapse0x2b0bbd0();
   input += synapse0x2b0c670();
   input += synapse0x2b0c6b0();
   input += synapse0x2b0d040();
   input += synapse0x2b0d080();
   input += synapse0x2b0a120();
   input += synapse0x2b0a160();
   input += synapse0x2b0ebf0();
   input += synapse0x2b0ec30();
   input += synapse0x2b0f5c0();
   input += synapse0x2b0f600();
   input += synapse0x2b0ff90();
   input += synapse0x2b0ffd0();
   input += synapse0x2b10960();
   input += synapse0x2b109a0();
   input += synapse0x2b04ad0();
   input += synapse0x2b04b10();
   input += synapse0x2b12a50();
   input += synapse0x2b12a90();
   input += synapse0x2b13420();
   input += synapse0x2b13460();
   input += synapse0x2b13df0();
   input += synapse0x2b13e30();
   input += synapse0x2b147c0();
   input += synapse0x2b14800();
   input += synapse0x2b15190();
   input += synapse0x2b151d0();
   input += synapse0x2b0dce0();
   input += synapse0x2b0dd20();
   input += synapse0x2b17590();
   input += synapse0x2b175d0();
   input += synapse0x2b17f20();
   input += synapse0x2b17f60();
   input += synapse0x2b188f0();
   input += synapse0x2b18930();
   input += synapse0x2b192c0();
   input += synapse0x2b19300();
   input += synapse0x2b19c90();
   input += synapse0x2b19cd0();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b31e10() {
   double input = input0x2b31e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b321b0() {
   double input = 0.598583;
   input += synapse0x2b1c3d0();
   input += synapse0x2b1c410();
   input += synapse0x2b11990();
   input += synapse0x2b119d0();
   input += synapse0x2b1efb0();
   input += synapse0x2b1eff0();
   input += synapse0x2b1f980();
   input += synapse0x2b1f9c0();
   input += synapse0x2b20350();
   input += synapse0x2b20390();
   input += synapse0x2b20d20();
   input += synapse0x2b20d60();
   input += synapse0x2b216f0();
   input += synapse0x2b21730();
   input += synapse0x2b220c0();
   input += synapse0x2b22100();
   input += synapse0x2b22a90();
   input += synapse0x2b22ad0();
   input += synapse0x2b23460();
   input += synapse0x2b234a0();
   input += synapse0x2b24040();
   input += synapse0x2b24080();
   input += synapse0x2b24a10();
   input += synapse0x2b24a50();
   input += synapse0x2b15890();
   input += synapse0x2b158d0();
   input += synapse0x2b16260();
   input += synapse0x2b162a0();
   input += synapse0x2b16c30();
   input += synapse0x2b16c70();
   input += synapse0x2b29150();
   input += synapse0x2b29190();
   input += synapse0x2b29b20();
   input += synapse0x2b29b60();
   input += synapse0x2b2a4f0();
   input += synapse0x2b2a530();
   input += synapse0x2b2aec0();
   input += synapse0x2b2af00();
   input += synapse0x2b06db0();
   input += synapse0x2b06df0();
   input += synapse0x2b1a660();
   input += synapse0x2b1a6a0();
   input += synapse0x2b2b5e0();
   input += synapse0x2b2b620();
   input += synapse0x2b2b660();
   input += synapse0x2b2b6a0();
   input += synapse0x2b32550();
   input += synapse0x2b32590();
   input += synapse0x2b325d0();
   input += synapse0x2b32610();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b321b0() {
   double input = input0x2b321b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b32650() {
   double input = -1.39515;
   input += synapse0x2b32990();
   input += synapse0x2b329d0();
   input += synapse0x2b32a10();
   input += synapse0x2b32a50();
   input += synapse0x2b32a90();
   input += synapse0x2b32ad0();
   input += synapse0x2b32b10();
   input += synapse0x2b32b50();
   input += synapse0x2b32b90();
   input += synapse0x2b32bd0();
   input += synapse0x2b32c10();
   input += synapse0x2b32c50();
   input += synapse0x2b32c90();
   input += synapse0x2b32cd0();
   input += synapse0x2b32d10();
   input += synapse0x2b32d50();
   input += synapse0x2b327e0();
   input += synapse0x2b32820();
   input += synapse0x2b32ea0();
   input += synapse0x2b32ee0();
   input += synapse0x2b32f20();
   input += synapse0x2b32f60();
   input += synapse0x2b32fa0();
   input += synapse0x2b32fe0();
   input += synapse0x2b33020();
   input += synapse0x2b33060();
   input += synapse0x2b330a0();
   input += synapse0x2b330e0();
   input += synapse0x2b33120();
   input += synapse0x2b33160();
   input += synapse0x2b331a0();
   input += synapse0x2b331e0();
   input += synapse0x2b32d90();
   input += synapse0x2b32dd0();
   input += synapse0x2b32e10();
   input += synapse0x2b32e50();
   input += synapse0x2b33430();
   input += synapse0x2b33470();
   input += synapse0x2b334b0();
   input += synapse0x2b334f0();
   input += synapse0x2b33530();
   input += synapse0x2b33570();
   input += synapse0x2b335b0();
   input += synapse0x2b335f0();
   input += synapse0x2b33630();
   input += synapse0x2b33670();
   input += synapse0x2b336b0();
   input += synapse0x2b336f0();
   input += synapse0x2b33730();
   input += synapse0x2b33770();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b32650() {
   double input = input0x2b32650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b337b0() {
   double input = 0.140745;
   input += synapse0x2b33af0();
   input += synapse0x2b33b30();
   input += synapse0x2b33b70();
   input += synapse0x2b33bb0();
   input += synapse0x2b33bf0();
   input += synapse0x2b33c30();
   input += synapse0x2b33c70();
   input += synapse0x2b33cb0();
   input += synapse0x2b33cf0();
   input += synapse0x2b33d30();
   input += synapse0x2b33d70();
   input += synapse0x2b33db0();
   input += synapse0x2b33df0();
   input += synapse0x2b33e30();
   input += synapse0x2b33e70();
   input += synapse0x2b33eb0();
   input += synapse0x2b33940();
   input += synapse0x2b33980();
   input += synapse0x2b34000();
   input += synapse0x2b34040();
   input += synapse0x2b34080();
   input += synapse0x2b340c0();
   input += synapse0x2b34100();
   input += synapse0x2b34140();
   input += synapse0x2b34180();
   input += synapse0x2b341c0();
   input += synapse0x2b34200();
   input += synapse0x2b34240();
   input += synapse0x2b34280();
   input += synapse0x2b342c0();
   input += synapse0x2b34300();
   input += synapse0x2b34340();
   input += synapse0x2b33ef0();
   input += synapse0x2b33f30();
   input += synapse0x2b33f70();
   input += synapse0x2b33fb0();
   input += synapse0x2b34590();
   input += synapse0x2b345d0();
   input += synapse0x2b34610();
   input += synapse0x2b34650();
   input += synapse0x2b34690();
   input += synapse0x2b346d0();
   input += synapse0x2b34710();
   input += synapse0x2b34750();
   input += synapse0x2b34790();
   input += synapse0x2b347d0();
   input += synapse0x2b34810();
   input += synapse0x2b34850();
   input += synapse0x2b34890();
   input += synapse0x2b348d0();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b337b0() {
   double input = input0x2b337b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b34910() {
   double input = 0.119828;
   input += synapse0x2b34c50();
   input += synapse0x2b34c90();
   input += synapse0x2b34cd0();
   input += synapse0x2b34d10();
   input += synapse0x2b34d50();
   input += synapse0x2b34d90();
   input += synapse0x2b34dd0();
   input += synapse0x2b34e10();
   input += synapse0x2b34e50();
   input += synapse0x2b34e90();
   input += synapse0x2b34ed0();
   input += synapse0x2b34f10();
   input += synapse0x2b34f50();
   input += synapse0x2b34f90();
   input += synapse0x2b34fd0();
   input += synapse0x2b35010();
   input += synapse0x2b34aa0();
   input += synapse0x2b34ae0();
   input += synapse0x2b35160();
   input += synapse0x2b351a0();
   input += synapse0x2b351e0();
   input += synapse0x2b35220();
   input += synapse0x2b35260();
   input += synapse0x2b352a0();
   input += synapse0x2b352e0();
   input += synapse0x2b35320();
   input += synapse0x2b35360();
   input += synapse0x2b353a0();
   input += synapse0x2b353e0();
   input += synapse0x2b35420();
   input += synapse0x2b35460();
   input += synapse0x2b354a0();
   input += synapse0x2b35050();
   input += synapse0x2b35090();
   input += synapse0x2b350d0();
   input += synapse0x2b35110();
   input += synapse0x2b356f0();
   input += synapse0x2b35730();
   input += synapse0x2b35770();
   input += synapse0x2b357b0();
   input += synapse0x2b357f0();
   input += synapse0x2b35830();
   input += synapse0x2b35870();
   input += synapse0x2b358b0();
   input += synapse0x2b358f0();
   input += synapse0x2b35930();
   input += synapse0x2b35970();
   input += synapse0x2b359b0();
   input += synapse0x2b359f0();
   input += synapse0x2b35a30();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b34910() {
   double input = input0x2b34910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_8::input0x2b35a70() {
   double input = -1.70681;
   input += synapse0x2b06b50();
   input += synapse0x2b35c90();
   input += synapse0x2b35cd0();
   input += synapse0x2b35d10();
   input += synapse0x2b35d50();
   return input;
}

double NNfunction-NN_6_8::neuron0x2b35a70() {
   double input = input0x2b35a70();
   return (input * 1)+0;
}

double NNfunction-NN_6_8::synapse0x28c19a0() {
   return (neuron0x2b01b30()*-0.0774735);
}

double NNfunction-NN_6_8::synapse0x2b019f0() {
   return (neuron0x2b01e70()*0.0595109);
}

double NNfunction-NN_6_8::synapse0x2b01a30() {
   return (neuron0x2b021b0()*-0.306828);
}

double NNfunction-NN_6_8::synapse0x2b06e40() {
   return (neuron0x2b024f0()*0.0953173);
}

double NNfunction-NN_6_8::synapse0x2b06e80() {
   return (neuron0x2b02830()*0.0807872);
}

double NNfunction-NN_6_8::synapse0x2b06ec0() {
   return (neuron0x2b02b70()*0.0202029);
}

double NNfunction-NN_6_8::synapse0x2b06f00() {
   return (neuron0x2b02eb0()*-0.0664987);
}

double NNfunction-NN_6_8::synapse0x2b06f40() {
   return (neuron0x2b031f0()*-0.101718);
}

double NNfunction-NN_6_8::synapse0x2b06f80() {
   return (neuron0x2b03530()*0.0623125);
}

double NNfunction-NN_6_8::synapse0x2b06fc0() {
   return (neuron0x2b03870()*0.0873009);
}

double NNfunction-NN_6_8::synapse0x2b07000() {
   return (neuron0x2b03bb0()*0.0873696);
}

double NNfunction-NN_6_8::synapse0x2b07040() {
   return (neuron0x2b03ef0()*-0.546018);
}

double NNfunction-NN_6_8::synapse0x2b07080() {
   return (neuron0x2b04230()*-0.179439);
}

double NNfunction-NN_6_8::synapse0x2b070c0() {
   return (neuron0x2b04570()*0.0482031);
}

double NNfunction-NN_6_8::synapse0x2b07100() {
   return (neuron0x2b048b0()*-0.0410232);
}

double NNfunction-NN_6_8::synapse0x2b07140() {
   return (neuron0x2b04bf0()*-0.0710896);
}

double NNfunction-NN_6_8::synapse0x2b01960() {
   return (neuron0x2b04f30()*-0.048103);
}

double NNfunction-NN_6_8::synapse0x2b019a0() {
   return (neuron0x2b05490()*0.00144515);
}

double NNfunction-NN_6_8::synapse0x28b3200() {
   return (neuron0x2b056b0()*-0.0637099);
}

double NNfunction-NN_6_8::synapse0x28b3240() {
   return (neuron0x2b059f0()*-0.00384472);
}

double NNfunction-NN_6_8::synapse0x2b073a0() {
   return (neuron0x2b05d30()*0.00724175);
}

double NNfunction-NN_6_8::synapse0x2b073e0() {
   return (neuron0x2b06070()*-0.0220129);
}

double NNfunction-NN_6_8::synapse0x2b07420() {
   return (neuron0x2b063b0()*0.0739624);
}

double NNfunction-NN_6_8::synapse0x2b07460() {
   return (neuron0x2b066f0()*-0.685365);
}

double NNfunction-NN_6_8::synapse0x2b077e0() {
   return (neuron0x2b01b30()*0.571602);
}

double NNfunction-NN_6_8::synapse0x2b07820() {
   return (neuron0x2b01e70()*-0.0403022);
}

double NNfunction-NN_6_8::synapse0x2b07860() {
   return (neuron0x2b021b0()*0.61534);
}

double NNfunction-NN_6_8::synapse0x2b078a0() {
   return (neuron0x2b024f0()*0.0455158);
}

double NNfunction-NN_6_8::synapse0x2b078e0() {
   return (neuron0x2b02830()*-0.0619618);
}

double NNfunction-NN_6_8::synapse0x2b07920() {
   return (neuron0x2b02b70()*-0.00308354);
}

double NNfunction-NN_6_8::synapse0x2b07960() {
   return (neuron0x2b02eb0()*0.0156984);
}

double NNfunction-NN_6_8::synapse0x2b079a0() {
   return (neuron0x2b031f0()*-0.0388946);
}

double NNfunction-NN_6_8::synapse0x2b079e0() {
   return (neuron0x2b03530()*0.0503129);
}

double NNfunction-NN_6_8::synapse0x2b07290() {
   return (neuron0x2b03870()*-0.0185943);
}

double NNfunction-NN_6_8::synapse0x2b072d0() {
   return (neuron0x2b03bb0()*-0.0646414);
}

double NNfunction-NN_6_8::synapse0x2b07310() {
   return (neuron0x2b03ef0()*-0.356763);
}

double NNfunction-NN_6_8::synapse0x2b07350() {
   return (neuron0x2b04230()*-0.0369342);
}

double NNfunction-NN_6_8::synapse0x2b07c30() {
   return (neuron0x2b04570()*0.0308053);
}

double NNfunction-NN_6_8::synapse0x2b07c70() {
   return (neuron0x2b048b0()*-0.037322);
}

double NNfunction-NN_6_8::synapse0x2b07cb0() {
   return (neuron0x2b04bf0()*0.00887663);
}

double NNfunction-NN_6_8::synapse0x2b07630() {
   return (neuron0x2b04f30()*0.0480367);
}

double NNfunction-NN_6_8::synapse0x2b07670() {
   return (neuron0x2b05490()*-0.0249279);
}

double NNfunction-NN_6_8::synapse0x2b07e00() {
   return (neuron0x2b056b0()*-0.00567753);
}

double NNfunction-NN_6_8::synapse0x2b07e40() {
   return (neuron0x2b059f0()*0.0553278);
}

double NNfunction-NN_6_8::synapse0x2b07e80() {
   return (neuron0x2b05d30()*-0.0869525);
}

double NNfunction-NN_6_8::synapse0x2b07ec0() {
   return (neuron0x2b06070()*0.0132038);
}

double NNfunction-NN_6_8::synapse0x2b07f00() {
   return (neuron0x2b063b0()*-0.0245997);
}

double NNfunction-NN_6_8::synapse0x2b07f40() {
   return (neuron0x2b066f0()*-0.165858);
}

double NNfunction-NN_6_8::synapse0x2b082c0() {
   return (neuron0x2b01b30()*0.00819729);
}

double NNfunction-NN_6_8::synapse0x2b08300() {
   return (neuron0x2b01e70()*-0.0203505);
}

double NNfunction-NN_6_8::synapse0x2b08340() {
   return (neuron0x2b021b0()*0.239236);
}

double NNfunction-NN_6_8::synapse0x2b08380() {
   return (neuron0x2b024f0()*-0.457373);
}

double NNfunction-NN_6_8::synapse0x2b083c0() {
   return (neuron0x2b02830()*0.0323566);
}

double NNfunction-NN_6_8::synapse0x2b08400() {
   return (neuron0x2b02b70()*0.0371835);
}

double NNfunction-NN_6_8::synapse0x2b08440() {
   return (neuron0x2b02eb0()*0.0289256);
}

double NNfunction-NN_6_8::synapse0x2b08480() {
   return (neuron0x2b031f0()*0.0168487);
}

double NNfunction-NN_6_8::synapse0x2b084c0() {
   return (neuron0x2b03530()*-0.0185699);
}

double NNfunction-NN_6_8::synapse0x2b08500() {
   return (neuron0x2b03870()*0.0271497);
}

double NNfunction-NN_6_8::synapse0x2b08540() {
   return (neuron0x2b03bb0()*0.0284809);
}

double NNfunction-NN_6_8::synapse0x2b08580() {
   return (neuron0x2b03ef0()*-0.467397);
}

double NNfunction-NN_6_8::synapse0x2b085c0() {
   return (neuron0x2b04230()*-0.00927268);
}

double NNfunction-NN_6_8::synapse0x2b08600() {
   return (neuron0x2b04570()*3.63224e-06);
}

double NNfunction-NN_6_8::synapse0x2b08640() {
   return (neuron0x2b048b0()*0.0246708);
}

double NNfunction-NN_6_8::synapse0x2b08680() {
   return (neuron0x2b04bf0()*-0.0104859);
}

double NNfunction-NN_6_8::synapse0x2b08110() {
   return (neuron0x2b04f30()*0.00804121);
}

double NNfunction-NN_6_8::synapse0x2b08150() {
   return (neuron0x2b05490()*0.0180485);
}

double NNfunction-NN_6_8::synapse0x28c1070() {
   return (neuron0x2b056b0()*-0.00704454);
}

double NNfunction-NN_6_8::synapse0x28c10b0() {
   return (neuron0x2b059f0()*-0.00729165);
}

double NNfunction-NN_6_8::synapse0x2af0bc0() {
   return (neuron0x2b05d30()*0.0540455);
}

double NNfunction-NN_6_8::synapse0x2af0c00() {
   return (neuron0x2b06070()*-0.0171951);
}

double NNfunction-NN_6_8::synapse0x2af0c40() {
   return (neuron0x2b063b0()*-0.00483232);
}

double NNfunction-NN_6_8::synapse0x2b01a70() {
   return (neuron0x2b066f0()*-0.676545);
}

double NNfunction-NN_6_8::synapse0x2b07bd0() {
   return (neuron0x2b01b30()*0.0167316);
}

double NNfunction-NN_6_8::synapse0x2b01ab0() {
   return (neuron0x2b01e70()*0.0160161);
}

double NNfunction-NN_6_8::synapse0x2b01af0() {
   return (neuron0x2b021b0()*-0.0593735);
}

double NNfunction-NN_6_8::synapse0x2b087d0() {
   return (neuron0x2b024f0()*3.2178);
}

double NNfunction-NN_6_8::synapse0x2b08810() {
   return (neuron0x2b02830()*-0.000490647);
}

double NNfunction-NN_6_8::synapse0x2b08850() {
   return (neuron0x2b02b70()*-0.00673177);
}

double NNfunction-NN_6_8::synapse0x2b08890() {
   return (neuron0x2b02eb0()*0.00129881);
}

double NNfunction-NN_6_8::synapse0x2b088d0() {
   return (neuron0x2b031f0()*-0.00591192);
}

double NNfunction-NN_6_8::synapse0x2b08910() {
   return (neuron0x2b03530()*0.0121646);
}

double NNfunction-NN_6_8::synapse0x2b08950() {
   return (neuron0x2b03870()*0.0226015);
}

double NNfunction-NN_6_8::synapse0x2b08990() {
   return (neuron0x2b03bb0()*0.00690769);
}

double NNfunction-NN_6_8::synapse0x2b089d0() {
   return (neuron0x2b03ef0()*0.243834);
}

double NNfunction-NN_6_8::synapse0x2b08a10() {
   return (neuron0x2b04230()*0.06114);
}

double NNfunction-NN_6_8::synapse0x2b08a50() {
   return (neuron0x2b04570()*0.0301223);
}

double NNfunction-NN_6_8::synapse0x2b08a90() {
   return (neuron0x2b048b0()*0.00444952);
}

double NNfunction-NN_6_8::synapse0x2b08ad0() {
   return (neuron0x2b04bf0()*-0.00382235);
}

double NNfunction-NN_6_8::synapse0x2b07a20() {
   return (neuron0x2b04f30()*0.00351726);
}

double NNfunction-NN_6_8::synapse0x2b07a60() {
   return (neuron0x2b05490()*0.00806749);
}

double NNfunction-NN_6_8::synapse0x2b08c20() {
   return (neuron0x2b056b0()*0.0244693);
}

double NNfunction-NN_6_8::synapse0x2b08c60() {
   return (neuron0x2b059f0()*-0.0164283);
}

double NNfunction-NN_6_8::synapse0x2b08ca0() {
   return (neuron0x2b05d30()*-0.0149884);
}

double NNfunction-NN_6_8::synapse0x2b08ce0() {
   return (neuron0x2b06070()*-0.00783612);
}

double NNfunction-NN_6_8::synapse0x2b08d20() {
   return (neuron0x2b063b0()*-0.00852703);
}

double NNfunction-NN_6_8::synapse0x2b08d60() {
   return (neuron0x2b066f0()*0.00083163);
}

double NNfunction-NN_6_8::synapse0x2b090e0() {
   return (neuron0x2b01b30()*-0.0052103);
}

double NNfunction-NN_6_8::synapse0x2b09120() {
   return (neuron0x2b01e70()*-0.0027125);
}

double NNfunction-NN_6_8::synapse0x2b09160() {
   return (neuron0x2b021b0()*0.0870476);
}

double NNfunction-NN_6_8::synapse0x2b091a0() {
   return (neuron0x2b024f0()*-0.131063);
}

double NNfunction-NN_6_8::synapse0x2b091e0() {
   return (neuron0x2b02830()*-0.00930664);
}

double NNfunction-NN_6_8::synapse0x2b09220() {
   return (neuron0x2b02b70()*0.00473883);
}

double NNfunction-NN_6_8::synapse0x2b09260() {
   return (neuron0x2b02eb0()*-0.00103868);
}

double NNfunction-NN_6_8::synapse0x2b092a0() {
   return (neuron0x2b031f0()*0.00554772);
}

double NNfunction-NN_6_8::synapse0x2b092e0() {
   return (neuron0x2b03530()*-0.00728588);
}

double NNfunction-NN_6_8::synapse0x2b09320() {
   return (neuron0x2b03870()*0.00785624);
}

double NNfunction-NN_6_8::synapse0x2b09360() {
   return (neuron0x2b03bb0()*0.00861641);
}

double NNfunction-NN_6_8::synapse0x2b093a0() {
   return (neuron0x2b03ef0()*0.275796);
}

double NNfunction-NN_6_8::synapse0x2b093e0() {
   return (neuron0x2b04230()*0.00906735);
}

double NNfunction-NN_6_8::synapse0x2b09420() {
   return (neuron0x2b04570()*-0.0135787);
}

double NNfunction-NN_6_8::synapse0x2b09460() {
   return (neuron0x2b048b0()*0.00860615);
}

double NNfunction-NN_6_8::synapse0x2b094a0() {
   return (neuron0x2b04bf0()*-0.00377566);
}

double NNfunction-NN_6_8::synapse0x2b08f30() {
   return (neuron0x2b04f30()*0.00351143);
}

double NNfunction-NN_6_8::synapse0x2b08f70() {
   return (neuron0x2b05490()*0.0195207);
}

double NNfunction-NN_6_8::synapse0x2b095f0() {
   return (neuron0x2b056b0()*-0.00463819);
}

double NNfunction-NN_6_8::synapse0x2b09630() {
   return (neuron0x2b059f0()*0.0101648);
}

double NNfunction-NN_6_8::synapse0x2b09670() {
   return (neuron0x2b05d30()*-0.0113334);
}

double NNfunction-NN_6_8::synapse0x2b096b0() {
   return (neuron0x2b06070()*0.0141111);
}

double NNfunction-NN_6_8::synapse0x2b096f0() {
   return (neuron0x2b063b0()*-0.0208232);
}

double NNfunction-NN_6_8::synapse0x2b09730() {
   return (neuron0x2b066f0()*-0.557547);
}

double NNfunction-NN_6_8::synapse0x2b09ab0() {
   return (neuron0x2b01b30()*-0.246287);
}

double NNfunction-NN_6_8::synapse0x2b09af0() {
   return (neuron0x2b01e70()*0.0711147);
}

double NNfunction-NN_6_8::synapse0x2b09b30() {
   return (neuron0x2b021b0()*0.243488);
}

double NNfunction-NN_6_8::synapse0x2b09b70() {
   return (neuron0x2b024f0()*-0.414228);
}

double NNfunction-NN_6_8::synapse0x2b09bb0() {
   return (neuron0x2b02830()*0.198232);
}

double NNfunction-NN_6_8::synapse0x2b09bf0() {
   return (neuron0x2b02b70()*-0.0270602);
}

double NNfunction-NN_6_8::synapse0x2b09c30() {
   return (neuron0x2b02eb0()*0.0602188);
}

double NNfunction-NN_6_8::synapse0x2b09c70() {
   return (neuron0x2b031f0()*0.0844184);
}

double NNfunction-NN_6_8::synapse0x2b09cb0() {
   return (neuron0x2b03530()*0.0139704);
}

double NNfunction-NN_6_8::synapse0x28c1400() {
   return (neuron0x2b03870()*0.0689038);
}

double NNfunction-NN_6_8::synapse0x28c1440() {
   return (neuron0x2b03bb0()*-0.233039);
}

double NNfunction-NN_6_8::synapse0x28c1480() {
   return (neuron0x2b03ef0()*-0.00381059);
}

double NNfunction-NN_6_8::synapse0x28c14c0() {
   return (neuron0x2b04230()*-0.134763);
}

double NNfunction-NN_6_8::synapse0x28c1500() {
   return (neuron0x2b04570()*0.249789);
}

double NNfunction-NN_6_8::synapse0x28c1540() {
   return (neuron0x2b048b0()*-0.00761892);
}

double NNfunction-NN_6_8::synapse0x28c1580() {
   return (neuron0x2b04bf0()*-0.140481);
}

double NNfunction-NN_6_8::synapse0x2b09900() {
   return (neuron0x2b04f30()*-0.259265);
}

double NNfunction-NN_6_8::synapse0x2b09940() {
   return (neuron0x2b05490()*0.0422986);
}

double NNfunction-NN_6_8::synapse0x28c16d0() {
   return (neuron0x2b056b0()*-0.21541);
}

double NNfunction-NN_6_8::synapse0x28c1710() {
   return (neuron0x2b059f0()*0.152253);
}

double NNfunction-NN_6_8::synapse0x28c1750() {
   return (neuron0x2b05d30()*0.0847993);
}

double NNfunction-NN_6_8::synapse0x28c1790() {
   return (neuron0x2b06070()*-0.104759);
}

double NNfunction-NN_6_8::synapse0x28c17d0() {
   return (neuron0x2b063b0()*0.0339901);
}

double NNfunction-NN_6_8::synapse0x2b0a500() {
   return (neuron0x2b066f0()*0.607846);
}

double NNfunction-NN_6_8::synapse0x2b0a880() {
   return (neuron0x2b01b30()*0.0079488);
}

double NNfunction-NN_6_8::synapse0x2b0a8c0() {
   return (neuron0x2b01e70()*-0.00677419);
}

double NNfunction-NN_6_8::synapse0x2b0a900() {
   return (neuron0x2b021b0()*0.728864);
}

double NNfunction-NN_6_8::synapse0x2b0a940() {
   return (neuron0x2b024f0()*0.0427558);
}

double NNfunction-NN_6_8::synapse0x2b0a980() {
   return (neuron0x2b02830()*-0.0176672);
}

double NNfunction-NN_6_8::synapse0x2b0a9c0() {
   return (neuron0x2b02b70()*0.00267361);
}

double NNfunction-NN_6_8::synapse0x2b0aa00() {
   return (neuron0x2b02eb0()*-0.000622914);
}

double NNfunction-NN_6_8::synapse0x2b0aa40() {
   return (neuron0x2b031f0()*0.00778586);
}

double NNfunction-NN_6_8::synapse0x2b0aa80() {
   return (neuron0x2b03530()*0.00713638);
}

double NNfunction-NN_6_8::synapse0x2b0aac0() {
   return (neuron0x2b03870()*0.000914485);
}

double NNfunction-NN_6_8::synapse0x2b0ab00() {
   return (neuron0x2b03bb0()*-0.00662951);
}

double NNfunction-NN_6_8::synapse0x2b0ab40() {
   return (neuron0x2b03ef0()*-0.0107981);
}

double NNfunction-NN_6_8::synapse0x2b0ab80() {
   return (neuron0x2b04230()*0.0239614);
}

double NNfunction-NN_6_8::synapse0x2b0abc0() {
   return (neuron0x2b04570()*-0.00400276);
}

double NNfunction-NN_6_8::synapse0x2b0ac00() {
   return (neuron0x2b048b0()*-0.00960635);
}

double NNfunction-NN_6_8::synapse0x2b0ac40() {
   return (neuron0x2b04bf0()*-0.0120628);
}

double NNfunction-NN_6_8::synapse0x2b0a6d0() {
   return (neuron0x2b04f30()*0.0074639);
}

double NNfunction-NN_6_8::synapse0x2b0a710() {
   return (neuron0x2b05490()*-0.0117593);
}

double NNfunction-NN_6_8::synapse0x2b0ad90() {
   return (neuron0x2b056b0()*-0.00104662);
}

double NNfunction-NN_6_8::synapse0x2b0add0() {
   return (neuron0x2b059f0()*-0.00835369);
}

double NNfunction-NN_6_8::synapse0x2b0ae10() {
   return (neuron0x2b05d30()*0.011145);
}

double NNfunction-NN_6_8::synapse0x2b0ae50() {
   return (neuron0x2b06070()*0.0148214);
}

double NNfunction-NN_6_8::synapse0x2b0ae90() {
   return (neuron0x2b063b0()*-0.00426715);
}

double NNfunction-NN_6_8::synapse0x2b0aed0() {
   return (neuron0x2b066f0()*-1.572);
}

double NNfunction-NN_6_8::synapse0x2b0b250() {
   return (neuron0x2b01b30()*-0.0261711);
}

double NNfunction-NN_6_8::synapse0x2b0b290() {
   return (neuron0x2b01e70()*0.00779774);
}

double NNfunction-NN_6_8::synapse0x2b0b2d0() {
   return (neuron0x2b021b0()*0.738245);
}

double NNfunction-NN_6_8::synapse0x2b0b310() {
   return (neuron0x2b024f0()*0.0352421);
}

double NNfunction-NN_6_8::synapse0x2b0b350() {
   return (neuron0x2b02830()*-0.0182063);
}

double NNfunction-NN_6_8::synapse0x2b0b390() {
   return (neuron0x2b02b70()*-0.00640048);
}

double NNfunction-NN_6_8::synapse0x2b0b3d0() {
   return (neuron0x2b02eb0()*0.00317683);
}

double NNfunction-NN_6_8::synapse0x2b0b410() {
   return (neuron0x2b031f0()*0.00523414);
}

double NNfunction-NN_6_8::synapse0x2b0b450() {
   return (neuron0x2b03530()*0.00621492);
}

double NNfunction-NN_6_8::synapse0x2b0b490() {
   return (neuron0x2b03870()*0.00301323);
}

double NNfunction-NN_6_8::synapse0x2b0b4d0() {
   return (neuron0x2b03bb0()*0.00311811);
}

double NNfunction-NN_6_8::synapse0x2b0b510() {
   return (neuron0x2b03ef0()*-2.83034);
}

double NNfunction-NN_6_8::synapse0x2b0b550() {
   return (neuron0x2b04230()*0.0444518);
}

double NNfunction-NN_6_8::synapse0x2b0b590() {
   return (neuron0x2b04570()*-0.00765017);
}

double NNfunction-NN_6_8::synapse0x2b0b5d0() {
   return (neuron0x2b048b0()*0.0158171);
}

double NNfunction-NN_6_8::synapse0x2b0b610() {
   return (neuron0x2b04bf0()*0.032352);
}

double NNfunction-NN_6_8::synapse0x2b0b0a0() {
   return (neuron0x2b04f30()*-0.0123995);
}

double NNfunction-NN_6_8::synapse0x2b0b0e0() {
   return (neuron0x2b05490()*0.019716);
}

double NNfunction-NN_6_8::synapse0x2b0b760() {
   return (neuron0x2b056b0()*0.0268727);
}

double NNfunction-NN_6_8::synapse0x2b0b7a0() {
   return (neuron0x2b059f0()*0.0109607);
}

double NNfunction-NN_6_8::synapse0x2b0b7e0() {
   return (neuron0x2b05d30()*0.00900999);
}

double NNfunction-NN_6_8::synapse0x2b0b820() {
   return (neuron0x2b06070()*0.00294391);
}

double NNfunction-NN_6_8::synapse0x2b0b860() {
   return (neuron0x2b063b0()*-0.00392594);
}

double NNfunction-NN_6_8::synapse0x2b0b8a0() {
   return (neuron0x2b066f0()*1.0314);
}

double NNfunction-NN_6_8::synapse0x2b05380() {
   return (neuron0x2b01b30()*-0.144396);
}

double NNfunction-NN_6_8::synapse0x2b053c0() {
   return (neuron0x2b01e70()*0.0506614);
}

double NNfunction-NN_6_8::synapse0x2b05400() {
   return (neuron0x2b021b0()*0.821528);
}

double NNfunction-NN_6_8::synapse0x2b05440() {
   return (neuron0x2b024f0()*0.0687828);
}

double NNfunction-NN_6_8::synapse0x2b0be30() {
   return (neuron0x2b02830()*-0.0421229);
}

double NNfunction-NN_6_8::synapse0x2b0be70() {
   return (neuron0x2b02b70()*0.0697088);
}

double NNfunction-NN_6_8::synapse0x2b0beb0() {
   return (neuron0x2b02eb0()*-0.0792226);
}

double NNfunction-NN_6_8::synapse0x2b0bef0() {
   return (neuron0x2b031f0()*0.0357011);
}

double NNfunction-NN_6_8::synapse0x2b0bf30() {
   return (neuron0x2b03530()*0.0243672);
}

double NNfunction-NN_6_8::synapse0x2b0bf70() {
   return (neuron0x2b03870()*-0.00401066);
}

double NNfunction-NN_6_8::synapse0x2b0bfb0() {
   return (neuron0x2b03bb0()*-0.0177724);
}

double NNfunction-NN_6_8::synapse0x2b0bff0() {
   return (neuron0x2b03ef0()*-0.620786);
}

double NNfunction-NN_6_8::synapse0x2b0c030() {
   return (neuron0x2b04230()*0.0307063);
}

double NNfunction-NN_6_8::synapse0x2b0c070() {
   return (neuron0x2b04570()*9.2834e-05);
}

double NNfunction-NN_6_8::synapse0x2b0c0b0() {
   return (neuron0x2b048b0()*0.0828707);
}

double NNfunction-NN_6_8::synapse0x2b0c0f0() {
   return (neuron0x2b04bf0()*0.0556709);
}

double NNfunction-NN_6_8::synapse0x2b0ba70() {
   return (neuron0x2b04f30()*-0.0332027);
}

double NNfunction-NN_6_8::synapse0x2b0bab0() {
   return (neuron0x2b05490()*0.137828);
}

double NNfunction-NN_6_8::synapse0x2b0c240() {
   return (neuron0x2b056b0()*0.0189292);
}

double NNfunction-NN_6_8::synapse0x2b0c280() {
   return (neuron0x2b059f0()*0.0106138);
}

double NNfunction-NN_6_8::synapse0x2b0c2c0() {
   return (neuron0x2b05d30()*0.0059806);
}

double NNfunction-NN_6_8::synapse0x2b0c300() {
   return (neuron0x2b06070()*0.0269684);
}

double NNfunction-NN_6_8::synapse0x2b0c340() {
   return (neuron0x2b063b0()*-0.0235954);
}

double NNfunction-NN_6_8::synapse0x2b0c380() {
   return (neuron0x2b066f0()*0.17422);
}

double NNfunction-NN_6_8::synapse0x2b0c700() {
   return (neuron0x2b01b30()*-0.0718168);
}

double NNfunction-NN_6_8::synapse0x2b0c740() {
   return (neuron0x2b01e70()*0.0181639);
}

double NNfunction-NN_6_8::synapse0x2b0c780() {
   return (neuron0x2b021b0()*-1.92086);
}

double NNfunction-NN_6_8::synapse0x2b0c7c0() {
   return (neuron0x2b024f0()*-0.0389279);
}

double NNfunction-NN_6_8::synapse0x2b0c800() {
   return (neuron0x2b02830()*-0.00485988);
}

double NNfunction-NN_6_8::synapse0x2b0c840() {
   return (neuron0x2b02b70()*0.0157654);
}

double NNfunction-NN_6_8::synapse0x2b0c880() {
   return (neuron0x2b02eb0()*0.003786);
}

double NNfunction-NN_6_8::synapse0x2b0c8c0() {
   return (neuron0x2b031f0()*0.0084739);
}

double NNfunction-NN_6_8::synapse0x2b0c900() {
   return (neuron0x2b03530()*0.00691744);
}

double NNfunction-NN_6_8::synapse0x2b0c940() {
   return (neuron0x2b03870()*-0.0117825);
}

double NNfunction-NN_6_8::synapse0x2b0c980() {
   return (neuron0x2b03bb0()*-0.0157659);
}

double NNfunction-NN_6_8::synapse0x2b0c9c0() {
   return (neuron0x2b03ef0()*0.34112);
}

double NNfunction-NN_6_8::synapse0x2b0ca00() {
   return (neuron0x2b04230()*0.0815473);
}

double NNfunction-NN_6_8::synapse0x2b0ca40() {
   return (neuron0x2b04570()*0.0142386);
}

double NNfunction-NN_6_8::synapse0x2b0ca80() {
   return (neuron0x2b048b0()*0.0226175);
}

double NNfunction-NN_6_8::synapse0x2b0cac0() {
   return (neuron0x2b04bf0()*0.0271094);
}

double NNfunction-NN_6_8::synapse0x2b0c550() {
   return (neuron0x2b04f30()*0.00285878);
}

double NNfunction-NN_6_8::synapse0x2b0c590() {
   return (neuron0x2b05490()*0.0322877);
}

double NNfunction-NN_6_8::synapse0x2b0cc10() {
   return (neuron0x2b056b0()*0.0203009);
}

double NNfunction-NN_6_8::synapse0x2b0cc50() {
   return (neuron0x2b059f0()*0.0143486);
}

double NNfunction-NN_6_8::synapse0x2b0cc90() {
   return (neuron0x2b05d30()*0.00234446);
}

double NNfunction-NN_6_8::synapse0x2b0ccd0() {
   return (neuron0x2b06070()*-0.00870464);
}

double NNfunction-NN_6_8::synapse0x2b0cd10() {
   return (neuron0x2b063b0()*-0.00136695);
}

double NNfunction-NN_6_8::synapse0x2b0cd50() {
   return (neuron0x2b066f0()*-2.1248);
}

double NNfunction-NN_6_8::synapse0x2b0d0d0() {
   return (neuron0x2b01b30()*0.00213103);
}

double NNfunction-NN_6_8::synapse0x2b0d110() {
   return (neuron0x2b01e70()*0.00467199);
}

double NNfunction-NN_6_8::synapse0x2b0d150() {
   return (neuron0x2b021b0()*-2.56664);
}

double NNfunction-NN_6_8::synapse0x2b0d190() {
   return (neuron0x2b024f0()*0.0169599);
}

double NNfunction-NN_6_8::synapse0x2b0d1d0() {
   return (neuron0x2b02830()*0.00746348);
}

double NNfunction-NN_6_8::synapse0x2b0d210() {
   return (neuron0x2b02b70()*-0.0155117);
}

double NNfunction-NN_6_8::synapse0x2b0d250() {
   return (neuron0x2b02eb0()*-0.0133101);
}

double NNfunction-NN_6_8::synapse0x2b0d290() {
   return (neuron0x2b031f0()*-0.00378493);
}

double NNfunction-NN_6_8::synapse0x2b0d2d0() {
   return (neuron0x2b03530()*0.00124878);
}

double NNfunction-NN_6_8::synapse0x2b0d310() {
   return (neuron0x2b03870()*0.0126233);
}

double NNfunction-NN_6_8::synapse0x2b0d350() {
   return (neuron0x2b03bb0()*0.0138689);
}

double NNfunction-NN_6_8::synapse0x2b0d390() {
   return (neuron0x2b03ef0()*3.36082);
}

double NNfunction-NN_6_8::synapse0x2b0d3d0() {
   return (neuron0x2b04230()*0.00297266);
}

double NNfunction-NN_6_8::synapse0x2b0d410() {
   return (neuron0x2b04570()*-0.00253173);
}

double NNfunction-NN_6_8::synapse0x2b0d450() {
   return (neuron0x2b048b0()*-0.00812551);
}

double NNfunction-NN_6_8::synapse0x2b0d490() {
   return (neuron0x2b04bf0()*-0.00681376);
}

double NNfunction-NN_6_8::synapse0x2b0cf20() {
   return (neuron0x2b04f30()*-0.00258716);
}

double NNfunction-NN_6_8::synapse0x2b0cf60() {
   return (neuron0x2b05490()*0.00388262);
}

double NNfunction-NN_6_8::synapse0x2b09cf0() {
   return (neuron0x2b056b0()*0.0075837);
}

double NNfunction-NN_6_8::synapse0x2b09d30() {
   return (neuron0x2b059f0()*-0.00118442);
}

double NNfunction-NN_6_8::synapse0x2b09d70() {
   return (neuron0x2b05d30()*0.00280822);
}

double NNfunction-NN_6_8::synapse0x2b09db0() {
   return (neuron0x2b06070()*-0.00234142);
}

double NNfunction-NN_6_8::synapse0x2b09df0() {
   return (neuron0x2b063b0()*0.00496712);
}

double NNfunction-NN_6_8::synapse0x2b09e30() {
   return (neuron0x2b066f0()*0.740763);
}

double NNfunction-NN_6_8::synapse0x2b0a1b0() {
   return (neuron0x2b01b30()*0.182373);
}

double NNfunction-NN_6_8::synapse0x2b0a1f0() {
   return (neuron0x2b01e70()*0.0704919);
}

double NNfunction-NN_6_8::synapse0x2b0a230() {
   return (neuron0x2b021b0()*0.318336);
}

double NNfunction-NN_6_8::synapse0x2b0a270() {
   return (neuron0x2b024f0()*0.529177);
}

double NNfunction-NN_6_8::synapse0x2b0a2b0() {
   return (neuron0x2b02830()*0.257178);
}

double NNfunction-NN_6_8::synapse0x2b0a2f0() {
   return (neuron0x2b02b70()*0.111716);
}

double NNfunction-NN_6_8::synapse0x2b0a330() {
   return (neuron0x2b02eb0()*0.200656);
}

double NNfunction-NN_6_8::synapse0x2b0a370() {
   return (neuron0x2b031f0()*-0.143135);
}

double NNfunction-NN_6_8::synapse0x2b0a3b0() {
   return (neuron0x2b03530()*-0.0602834);
}

double NNfunction-NN_6_8::synapse0x2b0a3f0() {
   return (neuron0x2b03870()*-0.168643);
}

double NNfunction-NN_6_8::synapse0x2b0a430() {
   return (neuron0x2b03bb0()*0.138121);
}

double NNfunction-NN_6_8::synapse0x2b0a470() {
   return (neuron0x2b03ef0()*-0.379542);
}

double NNfunction-NN_6_8::synapse0x2b0a4b0() {
   return (neuron0x2b04230()*-0.173511);
}

double NNfunction-NN_6_8::synapse0x2b0e5f0() {
   return (neuron0x2b04570()*0.0352316);
}

double NNfunction-NN_6_8::synapse0x2b0e630() {
   return (neuron0x2b048b0()*-0.0611971);
}

double NNfunction-NN_6_8::synapse0x2b0e670() {
   return (neuron0x2b04bf0()*0.0119903);
}

double NNfunction-NN_6_8::synapse0x2b0a000() {
   return (neuron0x2b04f30()*0.305654);
}

double NNfunction-NN_6_8::synapse0x2b0a040() {
   return (neuron0x2b05490()*-0.144001);
}

double NNfunction-NN_6_8::synapse0x2b0e7c0() {
   return (neuron0x2b056b0()*-0.207377);
}

double NNfunction-NN_6_8::synapse0x2b0e800() {
   return (neuron0x2b059f0()*0.120051);
}

double NNfunction-NN_6_8::synapse0x2b0e840() {
   return (neuron0x2b05d30()*0.0284985);
}

double NNfunction-NN_6_8::synapse0x2b0e880() {
   return (neuron0x2b06070()*-0.187339);
}

double NNfunction-NN_6_8::synapse0x2b0e8c0() {
   return (neuron0x2b063b0()*0.0720953);
}

double NNfunction-NN_6_8::synapse0x2b0e900() {
   return (neuron0x2b066f0()*0.0941741);
}

double NNfunction-NN_6_8::synapse0x2b0ec80() {
   return (neuron0x2b01b30()*0.0598488);
}

double NNfunction-NN_6_8::synapse0x2b0ecc0() {
   return (neuron0x2b01e70()*-0.014027);
}

double NNfunction-NN_6_8::synapse0x2b0ed00() {
   return (neuron0x2b021b0()*-2.94488);
}

double NNfunction-NN_6_8::synapse0x2b0ed40() {
   return (neuron0x2b024f0()*0.0553844);
}

double NNfunction-NN_6_8::synapse0x2b0ed80() {
   return (neuron0x2b02830()*0.00392045);
}

double NNfunction-NN_6_8::synapse0x2b0edc0() {
   return (neuron0x2b02b70()*-0.0322436);
}

double NNfunction-NN_6_8::synapse0x2b0ee00() {
   return (neuron0x2b02eb0()*-0.0218312);
}

double NNfunction-NN_6_8::synapse0x2b0ee40() {
   return (neuron0x2b031f0()*-0.0119109);
}

double NNfunction-NN_6_8::synapse0x2b0ee80() {
   return (neuron0x2b03530()*-0.00306039);
}

double NNfunction-NN_6_8::synapse0x2b0eec0() {
   return (neuron0x2b03870()*-0.00115983);
}

double NNfunction-NN_6_8::synapse0x2b0ef00() {
   return (neuron0x2b03bb0()*0.00525556);
}

double NNfunction-NN_6_8::synapse0x2b0ef40() {
   return (neuron0x2b03ef0()*-0.0991184);
}

double NNfunction-NN_6_8::synapse0x2b0ef80() {
   return (neuron0x2b04230()*-0.054698);
}

double NNfunction-NN_6_8::synapse0x2b0efc0() {
   return (neuron0x2b04570()*-0.0130086);
}

double NNfunction-NN_6_8::synapse0x2b0f000() {
   return (neuron0x2b048b0()*-0.0185512);
}

double NNfunction-NN_6_8::synapse0x2b0f040() {
   return (neuron0x2b04bf0()*-0.0104248);
}

double NNfunction-NN_6_8::synapse0x2b0ead0() {
   return (neuron0x2b04f30()*-0.0214933);
}

double NNfunction-NN_6_8::synapse0x2b0eb10() {
   return (neuron0x2b05490()*-0.0213921);
}

double NNfunction-NN_6_8::synapse0x2b0f190() {
   return (neuron0x2b056b0()*-0.00244151);
}

double NNfunction-NN_6_8::synapse0x2b0f1d0() {
   return (neuron0x2b059f0()*-0.0184075);
}

double NNfunction-NN_6_8::synapse0x2b0f210() {
   return (neuron0x2b05d30()*-0.00869857);
}

double NNfunction-NN_6_8::synapse0x2b0f250() {
   return (neuron0x2b06070()*0.0045914);
}

double NNfunction-NN_6_8::synapse0x2b0f290() {
   return (neuron0x2b063b0()*0.00720545);
}

double NNfunction-NN_6_8::synapse0x2b0f2d0() {
   return (neuron0x2b066f0()*-3.04017);
}

double NNfunction-NN_6_8::synapse0x2b0f650() {
   return (neuron0x2b01b30()*0.0511011);
}

double NNfunction-NN_6_8::synapse0x2b0f690() {
   return (neuron0x2b01e70()*0.00937941);
}

double NNfunction-NN_6_8::synapse0x2b0f6d0() {
   return (neuron0x2b021b0()*-1.28875);
}

double NNfunction-NN_6_8::synapse0x2b0f710() {
   return (neuron0x2b024f0()*0.18326);
}

double NNfunction-NN_6_8::synapse0x2b0f750() {
   return (neuron0x2b02830()*0.0200752);
}

double NNfunction-NN_6_8::synapse0x2b0f790() {
   return (neuron0x2b02b70()*-0.00518977);
}

double NNfunction-NN_6_8::synapse0x2b0f7d0() {
   return (neuron0x2b02eb0()*-0.0218608);
}

double NNfunction-NN_6_8::synapse0x2b0f810() {
   return (neuron0x2b031f0()*-0.00595435);
}

double NNfunction-NN_6_8::synapse0x2b0f850() {
   return (neuron0x2b03530()*0.0159024);
}

double NNfunction-NN_6_8::synapse0x2b0f890() {
   return (neuron0x2b03870()*-0.0087225);
}

double NNfunction-NN_6_8::synapse0x2b0f8d0() {
   return (neuron0x2b03bb0()*0.017767);
}

double NNfunction-NN_6_8::synapse0x2b0f910() {
   return (neuron0x2b03ef0()*0.592064);
}

double NNfunction-NN_6_8::synapse0x2b0f950() {
   return (neuron0x2b04230()*0.755142);
}

double NNfunction-NN_6_8::synapse0x2b0f990() {
   return (neuron0x2b04570()*-0.0813988);
}

double NNfunction-NN_6_8::synapse0x2b0f9d0() {
   return (neuron0x2b048b0()*0.36791);
}

double NNfunction-NN_6_8::synapse0x2b0fa10() {
   return (neuron0x2b04bf0()*0.381339);
}

double NNfunction-NN_6_8::synapse0x2b0f4a0() {
   return (neuron0x2b04f30()*-0.0674384);
}

double NNfunction-NN_6_8::synapse0x2b0f4e0() {
   return (neuron0x2b05490()*0.376862);
}

double NNfunction-NN_6_8::synapse0x2b0fb60() {
   return (neuron0x2b056b0()*0.40655);
}

double NNfunction-NN_6_8::synapse0x2b0fba0() {
   return (neuron0x2b059f0()*-0.00607329);
}

double NNfunction-NN_6_8::synapse0x2b0fbe0() {
   return (neuron0x2b05d30()*0.0728079);
}

double NNfunction-NN_6_8::synapse0x2b0fc20() {
   return (neuron0x2b06070()*0.0149288);
}

double NNfunction-NN_6_8::synapse0x2b0fc60() {
   return (neuron0x2b063b0()*-0.0133598);
}

double NNfunction-NN_6_8::synapse0x2b0fca0() {
   return (neuron0x2b066f0()*0.167941);
}

double NNfunction-NN_6_8::synapse0x2b10020() {
   return (neuron0x2b01b30()*-0.0189717);
}

double NNfunction-NN_6_8::synapse0x2b10060() {
   return (neuron0x2b01e70()*0.0320301);
}

double NNfunction-NN_6_8::synapse0x2b100a0() {
   return (neuron0x2b021b0()*-0.674741);
}

double NNfunction-NN_6_8::synapse0x2b100e0() {
   return (neuron0x2b024f0()*0.0767915);
}

double NNfunction-NN_6_8::synapse0x2b10120() {
   return (neuron0x2b02830()*0.005006);
}

double NNfunction-NN_6_8::synapse0x2b10160() {
   return (neuron0x2b02b70()*-0.0748573);
}

double NNfunction-NN_6_8::synapse0x2b101a0() {
   return (neuron0x2b02eb0()*-0.0226618);
}

double NNfunction-NN_6_8::synapse0x2b101e0() {
   return (neuron0x2b031f0()*-0.0364704);
}

double NNfunction-NN_6_8::synapse0x2b10220() {
   return (neuron0x2b03530()*-0.00424983);
}

double NNfunction-NN_6_8::synapse0x2b10260() {
   return (neuron0x2b03870()*0.0084176);
}

double NNfunction-NN_6_8::synapse0x2b102a0() {
   return (neuron0x2b03bb0()*0.013695);
}

double NNfunction-NN_6_8::synapse0x2b102e0() {
   return (neuron0x2b03ef0()*1.54979);
}

double NNfunction-NN_6_8::synapse0x2b10320() {
   return (neuron0x2b04230()*0.0857762);
}

double NNfunction-NN_6_8::synapse0x2b10360() {
   return (neuron0x2b04570()*0.0673803);
}

double NNfunction-NN_6_8::synapse0x2b103a0() {
   return (neuron0x2b048b0()*-0.0164053);
}

double NNfunction-NN_6_8::synapse0x2b103e0() {
   return (neuron0x2b04bf0()*0.0142429);
}

double NNfunction-NN_6_8::synapse0x2b0fe70() {
   return (neuron0x2b04f30()*-0.0395011);
}

double NNfunction-NN_6_8::synapse0x2b0feb0() {
   return (neuron0x2b05490()*0.0300782);
}

double NNfunction-NN_6_8::synapse0x2b10530() {
   return (neuron0x2b056b0()*0.0277298);
}

double NNfunction-NN_6_8::synapse0x2b10570() {
   return (neuron0x2b059f0()*0.066596);
}

double NNfunction-NN_6_8::synapse0x2b105b0() {
   return (neuron0x2b05d30()*-0.00160003);
}

double NNfunction-NN_6_8::synapse0x2b105f0() {
   return (neuron0x2b06070()*-0.0587014);
}

double NNfunction-NN_6_8::synapse0x2b10630() {
   return (neuron0x2b063b0()*0.0234441);
}

double NNfunction-NN_6_8::synapse0x2b10670() {
   return (neuron0x2b066f0()*0.923423);
}

double NNfunction-NN_6_8::synapse0x2b109f0() {
   return (neuron0x2b01b30()*0.0234259);
}

double NNfunction-NN_6_8::synapse0x2b01d50() {
   return (neuron0x2b01e70()*-0.00567252);
}

double NNfunction-NN_6_8::synapse0x2b01d90() {
   return (neuron0x2b021b0()*-0.772129);
}

double NNfunction-NN_6_8::synapse0x2b02090() {
   return (neuron0x2b024f0()*0.0405588);
}

double NNfunction-NN_6_8::synapse0x2b020d0() {
   return (neuron0x2b02830()*-0.00151895);
}

double NNfunction-NN_6_8::synapse0x2b023d0() {
   return (neuron0x2b02b70()*0.00906723);
}

double NNfunction-NN_6_8::synapse0x2b02410() {
   return (neuron0x2b02eb0()*0.00310975);
}

double NNfunction-NN_6_8::synapse0x2b02710() {
   return (neuron0x2b031f0()*0.000457477);
}

double NNfunction-NN_6_8::synapse0x2b02750() {
   return (neuron0x2b03530()*-0.00703877);
}

double NNfunction-NN_6_8::synapse0x2b02a50() {
   return (neuron0x2b03870()*0.00313301);
}

double NNfunction-NN_6_8::synapse0x2b02a90() {
   return (neuron0x2b03bb0()*-0.00526138);
}

double NNfunction-NN_6_8::synapse0x2b02d90() {
   return (neuron0x2b03ef0()*-0.0145436);
}

double NNfunction-NN_6_8::synapse0x2b02dd0() {
   return (neuron0x2b04230()*0.00765195);
}

double NNfunction-NN_6_8::synapse0x2b030d0() {
   return (neuron0x2b04570()*0.00105881);
}

double NNfunction-NN_6_8::synapse0x2b03110() {
   return (neuron0x2b048b0()*0.00684073);
}

double NNfunction-NN_6_8::synapse0x2b03410() {
   return (neuron0x2b04bf0()*0.0104231);
}

double NNfunction-NN_6_8::synapse0x2b03450() {
   return (neuron0x2b04f30()*0.0166785);
}

double NNfunction-NN_6_8::synapse0x2b03750() {
   return (neuron0x2b05490()*-0.00368992);
}

double NNfunction-NN_6_8::synapse0x2b03790() {
   return (neuron0x2b056b0()*-0.00582349);
}

double NNfunction-NN_6_8::synapse0x2b03a90() {
   return (neuron0x2b059f0()*0.00258412);
}

double NNfunction-NN_6_8::synapse0x2b03ad0() {
   return (neuron0x2b05d30()*0.0143766);
}

double NNfunction-NN_6_8::synapse0x2b03dd0() {
   return (neuron0x2b06070()*0.00770905);
}

double NNfunction-NN_6_8::synapse0x2b03e10() {
   return (neuron0x2b063b0()*-0.004279);
}

double NNfunction-NN_6_8::synapse0x2b04110() {
   return (neuron0x2b066f0()*1.11128);
}

double NNfunction-NN_6_8::synapse0x2b04150() {
   return (neuron0x2b01b30()*-0.00390697);
}

double NNfunction-NN_6_8::synapse0x2b04e10() {
   return (neuron0x2b01e70()*-0.00621511);
}

double NNfunction-NN_6_8::synapse0x2b04e50() {
   return (neuron0x2b021b0()*-1.77339);
}

double NNfunction-NN_6_8::synapse0x2b10840() {
   return (neuron0x2b024f0()*0.00851831);
}

double NNfunction-NN_6_8::synapse0x2b10880() {
   return (neuron0x2b02830()*0.00597358);
}

double NNfunction-NN_6_8::synapse0x2b05150() {
   return (neuron0x2b02b70()*-0.00983795);
}

double NNfunction-NN_6_8::synapse0x2b05190() {
   return (neuron0x2b02eb0()*-0.00760772);
}

double NNfunction-NN_6_8::synapse0x28b30e0() {
   return (neuron0x2b031f0()*-0.00764719);
}

double NNfunction-NN_6_8::synapse0x28b3120() {
   return (neuron0x2b03530()*0.0123774);
}

double NNfunction-NN_6_8::synapse0x2b058d0() {
   return (neuron0x2b03870()*0.00770863);
}

double NNfunction-NN_6_8::synapse0x2b05910() {
   return (neuron0x2b03bb0()*0.00219376);
}

double NNfunction-NN_6_8::synapse0x2b05c10() {
   return (neuron0x2b03ef0()*5.45207);
}

double NNfunction-NN_6_8::synapse0x2b05c50() {
   return (neuron0x2b04230()*-0.0143313);
}

double NNfunction-NN_6_8::synapse0x2b05f50() {
   return (neuron0x2b04570()*-0.0208223);
}

double NNfunction-NN_6_8::synapse0x2b05f90() {
   return (neuron0x2b048b0()*-0.0172404);
}

double NNfunction-NN_6_8::synapse0x2b06290() {
   return (neuron0x2b04bf0()*-0.0197484);
}

double NNfunction-NN_6_8::synapse0x2b062d0() {
   return (neuron0x2b04f30()*0.00434165);
}

double NNfunction-NN_6_8::synapse0x2b065d0() {
   return (neuron0x2b05490()*0.00954968);
}

double NNfunction-NN_6_8::synapse0x2b06610() {
   return (neuron0x2b056b0()*0.00250362);
}

double NNfunction-NN_6_8::synapse0x2b06910() {
   return (neuron0x2b059f0()*-0.000934032);
}

double NNfunction-NN_6_8::synapse0x2b06950() {
   return (neuron0x2b05d30()*0.00535345);
}

double NNfunction-NN_6_8::synapse0x2b04450() {
   return (neuron0x2b06070()*-0.00376899);
}

double NNfunction-NN_6_8::synapse0x2b04490() {
   return (neuron0x2b063b0()*-0.000897531);
}

double NNfunction-NN_6_8::synapse0x2b12760() {
   return (neuron0x2b066f0()*0.115198);
}

double NNfunction-NN_6_8::synapse0x2b12ae0() {
   return (neuron0x2b01b30()*0.0122613);
}

double NNfunction-NN_6_8::synapse0x2b12b20() {
   return (neuron0x2b01e70()*-0.00826167);
}

double NNfunction-NN_6_8::synapse0x2b12b60() {
   return (neuron0x2b021b0()*-0.152567);
}

double NNfunction-NN_6_8::synapse0x2b12ba0() {
   return (neuron0x2b024f0()*2.82022);
}

double NNfunction-NN_6_8::synapse0x2b12be0() {
   return (neuron0x2b02830()*0.00254607);
}

double NNfunction-NN_6_8::synapse0x2b12c20() {
   return (neuron0x2b02b70()*0.0163242);
}

double NNfunction-NN_6_8::synapse0x2b12c60() {
   return (neuron0x2b02eb0()*0.0176878);
}

double NNfunction-NN_6_8::synapse0x2b12ca0() {
   return (neuron0x2b031f0()*-0.00105352);
}

double NNfunction-NN_6_8::synapse0x2b12ce0() {
   return (neuron0x2b03530()*-0.00213994);
}

double NNfunction-NN_6_8::synapse0x2b12d20() {
   return (neuron0x2b03870()*0.00558932);
}

double NNfunction-NN_6_8::synapse0x2b12d60() {
   return (neuron0x2b03bb0()*0.00371347);
}

double NNfunction-NN_6_8::synapse0x2b12da0() {
   return (neuron0x2b03ef0()*-0.35019);
}

double NNfunction-NN_6_8::synapse0x2b12de0() {
   return (neuron0x2b04230()*0.0542756);
}

double NNfunction-NN_6_8::synapse0x2b12e20() {
   return (neuron0x2b04570()*-0.0293341);
}

double NNfunction-NN_6_8::synapse0x2b12e60() {
   return (neuron0x2b048b0()*0.0392974);
}

double NNfunction-NN_6_8::synapse0x2b12ea0() {
   return (neuron0x2b04bf0()*0.0360629);
}

double NNfunction-NN_6_8::synapse0x2b12930() {
   return (neuron0x2b04f30()*-0.0410836);
}

double NNfunction-NN_6_8::synapse0x2b12970() {
   return (neuron0x2b05490()*0.0272597);
}

double NNfunction-NN_6_8::synapse0x2b12ff0() {
   return (neuron0x2b056b0()*0.0491981);
}

double NNfunction-NN_6_8::synapse0x2b13030() {
   return (neuron0x2b059f0()*-0.0330219);
}

double NNfunction-NN_6_8::synapse0x2b13070() {
   return (neuron0x2b05d30()*-0.00390339);
}

double NNfunction-NN_6_8::synapse0x2b130b0() {
   return (neuron0x2b06070()*-0.0104544);
}

double NNfunction-NN_6_8::synapse0x2b130f0() {
   return (neuron0x2b063b0()*-0.00297593);
}

double NNfunction-NN_6_8::synapse0x2b13130() {
   return (neuron0x2b066f0()*0.197082);
}

double NNfunction-NN_6_8::synapse0x2b134b0() {
   return (neuron0x2b01b30()*-0.00755301);
}

double NNfunction-NN_6_8::synapse0x2b134f0() {
   return (neuron0x2b01e70()*0.0053851);
}

double NNfunction-NN_6_8::synapse0x2b13530() {
   return (neuron0x2b021b0()*0.440889);
}

double NNfunction-NN_6_8::synapse0x2b13570() {
   return (neuron0x2b024f0()*0.00552784);
}

double NNfunction-NN_6_8::synapse0x2b135b0() {
   return (neuron0x2b02830()*0.00601805);
}

double NNfunction-NN_6_8::synapse0x2b135f0() {
   return (neuron0x2b02b70()*-0.00322799);
}

double NNfunction-NN_6_8::synapse0x2b13630() {
   return (neuron0x2b02eb0()*0.00642394);
}

double NNfunction-NN_6_8::synapse0x2b13670() {
   return (neuron0x2b031f0()*0.00123912);
}

double NNfunction-NN_6_8::synapse0x2b136b0() {
   return (neuron0x2b03530()*0.000782737);
}

double NNfunction-NN_6_8::synapse0x2b136f0() {
   return (neuron0x2b03870()*0.00612186);
}

double NNfunction-NN_6_8::synapse0x2b13730() {
   return (neuron0x2b03bb0()*0.00366145);
}

double NNfunction-NN_6_8::synapse0x2b13770() {
   return (neuron0x2b03ef0()*-3.4131);
}

double NNfunction-NN_6_8::synapse0x2b137b0() {
   return (neuron0x2b04230()*0.0305029);
}

double NNfunction-NN_6_8::synapse0x2b137f0() {
   return (neuron0x2b04570()*0.0226925);
}

double NNfunction-NN_6_8::synapse0x2b13830() {
   return (neuron0x2b048b0()*0.00361089);
}

double NNfunction-NN_6_8::synapse0x2b13870() {
   return (neuron0x2b04bf0()*0.00333401);
}

double NNfunction-NN_6_8::synapse0x2b13300() {
   return (neuron0x2b04f30()*-0.0086631);
}

double NNfunction-NN_6_8::synapse0x2b13340() {
   return (neuron0x2b05490()*0.00767102);
}

double NNfunction-NN_6_8::synapse0x2b139c0() {
   return (neuron0x2b056b0()*0.0043053);
}

double NNfunction-NN_6_8::synapse0x2b13a00() {
   return (neuron0x2b059f0()*0.0132878);
}

double NNfunction-NN_6_8::synapse0x2b13a40() {
   return (neuron0x2b05d30()*-0.0119721);
}

double NNfunction-NN_6_8::synapse0x2b13a80() {
   return (neuron0x2b06070()*-0.0138073);
}

double NNfunction-NN_6_8::synapse0x2b13ac0() {
   return (neuron0x2b063b0()*-0.00599056);
}

double NNfunction-NN_6_8::synapse0x2b13b00() {
   return (neuron0x2b066f0()*-0.386349);
}

double NNfunction-NN_6_8::synapse0x2b13e80() {
   return (neuron0x2b01b30()*-0.0762328);
}

double NNfunction-NN_6_8::synapse0x2b13ec0() {
   return (neuron0x2b01e70()*0.0252752);
}

double NNfunction-NN_6_8::synapse0x2b13f00() {
   return (neuron0x2b021b0()*-0.0415705);
}

double NNfunction-NN_6_8::synapse0x2b13f40() {
   return (neuron0x2b024f0()*0.17767);
}

double NNfunction-NN_6_8::synapse0x2b13f80() {
   return (neuron0x2b02830()*-0.0537464);
}

double NNfunction-NN_6_8::synapse0x2b13fc0() {
   return (neuron0x2b02b70()*-0.0100375);
}

double NNfunction-NN_6_8::synapse0x2b14000() {
   return (neuron0x2b02eb0()*0.0273141);
}

double NNfunction-NN_6_8::synapse0x2b14040() {
   return (neuron0x2b031f0()*-0.0111104);
}

double NNfunction-NN_6_8::synapse0x2b14080() {
   return (neuron0x2b03530()*-0.00192339);
}

double NNfunction-NN_6_8::synapse0x2b140c0() {
   return (neuron0x2b03870()*0.056866);
}

double NNfunction-NN_6_8::synapse0x2b14100() {
   return (neuron0x2b03bb0()*-0.110792);
}

double NNfunction-NN_6_8::synapse0x2b14140() {
   return (neuron0x2b03ef0()*0.083828);
}

double NNfunction-NN_6_8::synapse0x2b14180() {
   return (neuron0x2b04230()*0.0134095);
}

double NNfunction-NN_6_8::synapse0x2b141c0() {
   return (neuron0x2b04570()*0.0599989);
}

double NNfunction-NN_6_8::synapse0x2b14200() {
   return (neuron0x2b048b0()*-0.0964728);
}

double NNfunction-NN_6_8::synapse0x2b14240() {
   return (neuron0x2b04bf0()*0.0363648);
}

double NNfunction-NN_6_8::synapse0x2b13cd0() {
   return (neuron0x2b04f30()*-0.0792242);
}

double NNfunction-NN_6_8::synapse0x2b13d10() {
   return (neuron0x2b05490()*-0.00189095);
}

double NNfunction-NN_6_8::synapse0x2b14390() {
   return (neuron0x2b056b0()*0.168125);
}

double NNfunction-NN_6_8::synapse0x2b143d0() {
   return (neuron0x2b059f0()*-0.0964414);
}

double NNfunction-NN_6_8::synapse0x2b14410() {
   return (neuron0x2b05d30()*0.100045);
}

double NNfunction-NN_6_8::synapse0x2b14450() {
   return (neuron0x2b06070()*0.126551);
}

double NNfunction-NN_6_8::synapse0x2b14490() {
   return (neuron0x2b063b0()*0.0612333);
}

double NNfunction-NN_6_8::synapse0x2b144d0() {
   return (neuron0x2b066f0()*-0.857262);
}

double NNfunction-NN_6_8::synapse0x2b14850() {
   return (neuron0x2b01b30()*-0.0210853);
}

double NNfunction-NN_6_8::synapse0x2b14890() {
   return (neuron0x2b01e70()*0.00700705);
}

double NNfunction-NN_6_8::synapse0x2b148d0() {
   return (neuron0x2b021b0()*0.344959);
}

double NNfunction-NN_6_8::synapse0x2b14910() {
   return (neuron0x2b024f0()*0.06547);
}

double NNfunction-NN_6_8::synapse0x2b14950() {
   return (neuron0x2b02830()*-0.0190458);
}

double NNfunction-NN_6_8::synapse0x2b14990() {
   return (neuron0x2b02b70()*-0.0198404);
}

double NNfunction-NN_6_8::synapse0x2b149d0() {
   return (neuron0x2b02eb0()*-0.00612559);
}

double NNfunction-NN_6_8::synapse0x2b14a10() {
   return (neuron0x2b031f0()*-0.00367529);
}

double NNfunction-NN_6_8::synapse0x2b14a50() {
   return (neuron0x2b03530()*-0.00145465);
}

double NNfunction-NN_6_8::synapse0x2b14a90() {
   return (neuron0x2b03870()*-0.00708964);
}

double NNfunction-NN_6_8::synapse0x2b14ad0() {
   return (neuron0x2b03bb0()*-0.00962497);
}

double NNfunction-NN_6_8::synapse0x2b14b10() {
   return (neuron0x2b03ef0()*0.165567);
}

double NNfunction-NN_6_8::synapse0x2b14b50() {
   return (neuron0x2b04230()*0.01087);
}

double NNfunction-NN_6_8::synapse0x2b14b90() {
   return (neuron0x2b04570()*0.00815443);
}

double NNfunction-NN_6_8::synapse0x2b14bd0() {
   return (neuron0x2b048b0()*-0.000865951);
}

double NNfunction-NN_6_8::synapse0x2b14c10() {
   return (neuron0x2b04bf0()*0.00316298);
}

double NNfunction-NN_6_8::synapse0x2b146a0() {
   return (neuron0x2b04f30()*-0.0188599);
}

double NNfunction-NN_6_8::synapse0x2b146e0() {
   return (neuron0x2b05490()*-0.00725435);
}

double NNfunction-NN_6_8::synapse0x2b14d60() {
   return (neuron0x2b056b0()*0.0100908);
}

double NNfunction-NN_6_8::synapse0x2b14da0() {
   return (neuron0x2b059f0()*0.00224286);
}

double NNfunction-NN_6_8::synapse0x2b14de0() {
   return (neuron0x2b05d30()*-0.00033085);
}

double NNfunction-NN_6_8::synapse0x2b14e20() {
   return (neuron0x2b06070()*-0.0172645);
}

double NNfunction-NN_6_8::synapse0x2b14e60() {
   return (neuron0x2b063b0()*0.00270436);
}

double NNfunction-NN_6_8::synapse0x2b14ea0() {
   return (neuron0x2b066f0()*0.579603);
}

double NNfunction-NN_6_8::synapse0x2b15220() {
   return (neuron0x2b01b30()*-0.0814686);
}

double NNfunction-NN_6_8::synapse0x2b15260() {
   return (neuron0x2b01e70()*-0.0223689);
}

double NNfunction-NN_6_8::synapse0x2b152a0() {
   return (neuron0x2b021b0()*0.785523);
}

double NNfunction-NN_6_8::synapse0x2b152e0() {
   return (neuron0x2b024f0()*-0.121683);
}

double NNfunction-NN_6_8::synapse0x2b15320() {
   return (neuron0x2b02830()*-0.00645823);
}

double NNfunction-NN_6_8::synapse0x2b15360() {
   return (neuron0x2b02b70()*-0.0400034);
}

double NNfunction-NN_6_8::synapse0x2b153a0() {
   return (neuron0x2b02eb0()*0.0181421);
}

double NNfunction-NN_6_8::synapse0x2b153e0() {
   return (neuron0x2b031f0()*-0.0287407);
}

double NNfunction-NN_6_8::synapse0x2b15420() {
   return (neuron0x2b03530()*0.00529078);
}

double NNfunction-NN_6_8::synapse0x2b0d5e0() {
   return (neuron0x2b03870()*-0.0187355);
}

double NNfunction-NN_6_8::synapse0x2b0d620() {
   return (neuron0x2b03bb0()*0.0164113);
}

double NNfunction-NN_6_8::synapse0x2b0d660() {
   return (neuron0x2b03ef0()*-0.527196);
}

double NNfunction-NN_6_8::synapse0x2b0d6a0() {
   return (neuron0x2b04230()*0.113582);
}

double NNfunction-NN_6_8::synapse0x2b0d6e0() {
   return (neuron0x2b04570()*0.00740099);
}

double NNfunction-NN_6_8::synapse0x2b0d720() {
   return (neuron0x2b048b0()*-0.0340439);
}

double NNfunction-NN_6_8::synapse0x2b0d760() {
   return (neuron0x2b04bf0()*-0.0312325);
}

double NNfunction-NN_6_8::synapse0x2b15070() {
   return (neuron0x2b04f30()*-0.00868093);
}

double NNfunction-NN_6_8::synapse0x2b150b0() {
   return (neuron0x2b05490()*-0.0147179);
}

double NNfunction-NN_6_8::synapse0x2b0d8b0() {
   return (neuron0x2b056b0()*-0.036937);
}

double NNfunction-NN_6_8::synapse0x2b0d8f0() {
   return (neuron0x2b059f0()*-0.00737238);
}

double NNfunction-NN_6_8::synapse0x2b0d930() {
   return (neuron0x2b05d30()*-0.00255457);
}

double NNfunction-NN_6_8::synapse0x2b0d970() {
   return (neuron0x2b06070()*-0.00708887);
}

double NNfunction-NN_6_8::synapse0x2b0d9b0() {
   return (neuron0x2b063b0()*0.0359204);
}

double NNfunction-NN_6_8::synapse0x2b0d9f0() {
   return (neuron0x2b066f0()*0.815828);
}

double NNfunction-NN_6_8::synapse0x2b0dd70() {
   return (neuron0x2b01b30()*0.0522909);
}

double NNfunction-NN_6_8::synapse0x2b0ddb0() {
   return (neuron0x2b01e70()*0.0129125);
}

double NNfunction-NN_6_8::synapse0x2b0ddf0() {
   return (neuron0x2b021b0()*0.223458);
}

double NNfunction-NN_6_8::synapse0x2b0de30() {
   return (neuron0x2b024f0()*-0.525207);
}

double NNfunction-NN_6_8::synapse0x2b0de70() {
   return (neuron0x2b02830()*0.0758631);
}

double NNfunction-NN_6_8::synapse0x2b0deb0() {
   return (neuron0x2b02b70()*0.0167991);
}

double NNfunction-NN_6_8::synapse0x2b0def0() {
   return (neuron0x2b02eb0()*-0.00320207);
}

double NNfunction-NN_6_8::synapse0x2b0df30() {
   return (neuron0x2b031f0()*-0.0085893);
}

double NNfunction-NN_6_8::synapse0x2b0df70() {
   return (neuron0x2b03530()*0.00147395);
}

double NNfunction-NN_6_8::synapse0x2b0dfb0() {
   return (neuron0x2b03870()*-0.0207302);
}

double NNfunction-NN_6_8::synapse0x2b0dff0() {
   return (neuron0x2b03bb0()*0.0245379);
}

double NNfunction-NN_6_8::synapse0x2b0e030() {
   return (neuron0x2b03ef0()*-0.0291441);
}

double NNfunction-NN_6_8::synapse0x2b0e070() {
   return (neuron0x2b04230()*0.0281911);
}

double NNfunction-NN_6_8::synapse0x2b0e0b0() {
   return (neuron0x2b04570()*0.0439047);
}

double NNfunction-NN_6_8::synapse0x2b0e0f0() {
   return (neuron0x2b048b0()*0.0301347);
}

double NNfunction-NN_6_8::synapse0x2b0e130() {
   return (neuron0x2b04bf0()*0.0570467);
}

double NNfunction-NN_6_8::synapse0x2b0dbc0() {
   return (neuron0x2b04f30()*0.0602227);
}

double NNfunction-NN_6_8::synapse0x2b0dc00() {
   return (neuron0x2b05490()*0.0337613);
}

double NNfunction-NN_6_8::synapse0x2b0e280() {
   return (neuron0x2b056b0()*0.0282998);
}

double NNfunction-NN_6_8::synapse0x2b0e2c0() {
   return (neuron0x2b059f0()*0.0114368);
}

double NNfunction-NN_6_8::synapse0x2b0e300() {
   return (neuron0x2b05d30()*-0.0285135);
}

double NNfunction-NN_6_8::synapse0x2b0e340() {
   return (neuron0x2b06070()*-0.00933466);
}

double NNfunction-NN_6_8::synapse0x2b0e380() {
   return (neuron0x2b063b0()*-0.022232);
}

double NNfunction-NN_6_8::synapse0x2b0e3c0() {
   return (neuron0x2b066f0()*0.25406);
}

double NNfunction-NN_6_8::synapse0x2b0e590() {
   return (neuron0x2b01b30()*-0.0585486);
}

double NNfunction-NN_6_8::synapse0x2b17620() {
   return (neuron0x2b01e70()*0.00152257);
}

double NNfunction-NN_6_8::synapse0x2b17660() {
   return (neuron0x2b021b0()*-0.240073);
}

double NNfunction-NN_6_8::synapse0x2b176a0() {
   return (neuron0x2b024f0()*0.0300695);
}

double NNfunction-NN_6_8::synapse0x2b176e0() {
   return (neuron0x2b02830()*0.0306787);
}

double NNfunction-NN_6_8::synapse0x2b17720() {
   return (neuron0x2b02b70()*-0.0154469);
}

double NNfunction-NN_6_8::synapse0x2b17760() {
   return (neuron0x2b02eb0()*-0.000925372);
}

double NNfunction-NN_6_8::synapse0x2b177a0() {
   return (neuron0x2b031f0()*-0.013167);
}

double NNfunction-NN_6_8::synapse0x2b177e0() {
   return (neuron0x2b03530()*0.0535994);
}

double NNfunction-NN_6_8::synapse0x2b17820() {
   return (neuron0x2b03870()*-0.0323368);
}

double NNfunction-NN_6_8::synapse0x2b17860() {
   return (neuron0x2b03bb0()*0.0333927);
}

double NNfunction-NN_6_8::synapse0x2b178a0() {
   return (neuron0x2b03ef0()*0.498977);
}

double NNfunction-NN_6_8::synapse0x2b178e0() {
   return (neuron0x2b04230()*-0.0740443);
}

double NNfunction-NN_6_8::synapse0x2b17920() {
   return (neuron0x2b04570()*0.0676134);
}

double NNfunction-NN_6_8::synapse0x2b17960() {
   return (neuron0x2b048b0()*-0.0736792);
}

double NNfunction-NN_6_8::synapse0x2b179a0() {
   return (neuron0x2b04bf0()*-0.046093);
}

double NNfunction-NN_6_8::synapse0x2b17470() {
   return (neuron0x2b04f30()*0.0958859);
}

double NNfunction-NN_6_8::synapse0x2b174b0() {
   return (neuron0x2b05490()*-0.0754026);
}

double NNfunction-NN_6_8::synapse0x2b17af0() {
   return (neuron0x2b056b0()*-0.0820392);
}

double NNfunction-NN_6_8::synapse0x2b17b30() {
   return (neuron0x2b059f0()*-0.0164176);
}

double NNfunction-NN_6_8::synapse0x2b17b70() {
   return (neuron0x2b05d30()*0.0543738);
}

double NNfunction-NN_6_8::synapse0x2b17bb0() {
   return (neuron0x2b06070()*-0.0149897);
}

double NNfunction-NN_6_8::synapse0x2b17bf0() {
   return (neuron0x2b063b0()*-0.00498707);
}

double NNfunction-NN_6_8::synapse0x2b17c30() {
   return (neuron0x2b066f0()*-1.19205);
}

double NNfunction-NN_6_8::synapse0x2b17fb0() {
   return (neuron0x2b01b30()*-0.00715105);
}

double NNfunction-NN_6_8::synapse0x2b17ff0() {
   return (neuron0x2b01e70()*0.0057939);
}

double NNfunction-NN_6_8::synapse0x2b18030() {
   return (neuron0x2b021b0()*-0.624666);
}

double NNfunction-NN_6_8::synapse0x2b18070() {
   return (neuron0x2b024f0()*0.00364224);
}

double NNfunction-NN_6_8::synapse0x2b180b0() {
   return (neuron0x2b02830()*0.00164777);
}

double NNfunction-NN_6_8::synapse0x2b180f0() {
   return (neuron0x2b02b70()*-0.00719852);
}

double NNfunction-NN_6_8::synapse0x2b18130() {
   return (neuron0x2b02eb0()*-0.00517302);
}

double NNfunction-NN_6_8::synapse0x2b18170() {
   return (neuron0x2b031f0()*-0.00749899);
}

double NNfunction-NN_6_8::synapse0x2b181b0() {
   return (neuron0x2b03530()*0.00791523);
}

double NNfunction-NN_6_8::synapse0x2b181f0() {
   return (neuron0x2b03870()*0.00430127);
}

double NNfunction-NN_6_8::synapse0x2b18230() {
   return (neuron0x2b03bb0()*0.0134868);
}

double NNfunction-NN_6_8::synapse0x2b18270() {
   return (neuron0x2b03ef0()*-2.70688);
}

double NNfunction-NN_6_8::synapse0x2b182b0() {
   return (neuron0x2b04230()*0.00696819);
}

double NNfunction-NN_6_8::synapse0x2b182f0() {
   return (neuron0x2b04570()*0.00226844);
}

double NNfunction-NN_6_8::synapse0x2b18330() {
   return (neuron0x2b048b0()*-0.00435398);
}

double NNfunction-NN_6_8::synapse0x2b18370() {
   return (neuron0x2b04bf0()*-0.013517);
}

double NNfunction-NN_6_8::synapse0x2b17e00() {
   return (neuron0x2b04f30()*-0.00499266);
}

double NNfunction-NN_6_8::synapse0x2b17e40() {
   return (neuron0x2b05490()*0.00537555);
}

double NNfunction-NN_6_8::synapse0x2b184c0() {
   return (neuron0x2b056b0()*-0.00188602);
}

double NNfunction-NN_6_8::synapse0x2b18500() {
   return (neuron0x2b059f0()*0.00215218);
}

double NNfunction-NN_6_8::synapse0x2b18540() {
   return (neuron0x2b05d30()*-0.00302473);
}

double NNfunction-NN_6_8::synapse0x2b18580() {
   return (neuron0x2b06070()*-0.00654029);
}

double NNfunction-NN_6_8::synapse0x2b185c0() {
   return (neuron0x2b063b0()*-0.00105023);
}

double NNfunction-NN_6_8::synapse0x2b18600() {
   return (neuron0x2b066f0()*0.385195);
}

double NNfunction-NN_6_8::synapse0x2b18980() {
   return (neuron0x2b01b30()*0.381764);
}

double NNfunction-NN_6_8::synapse0x2b189c0() {
   return (neuron0x2b01e70()*-0.00501224);
}

double NNfunction-NN_6_8::synapse0x2b18a00() {
   return (neuron0x2b021b0()*0.307916);
}

double NNfunction-NN_6_8::synapse0x2b18a40() {
   return (neuron0x2b024f0()*-0.0355749);
}

double NNfunction-NN_6_8::synapse0x2b18a80() {
   return (neuron0x2b02830()*0.0147332);
}

double NNfunction-NN_6_8::synapse0x2b18ac0() {
   return (neuron0x2b02b70()*-0.0113276);
}

double NNfunction-NN_6_8::synapse0x2b18b00() {
   return (neuron0x2b02eb0()*-0.0058144);
}

double NNfunction-NN_6_8::synapse0x2b18b40() {
   return (neuron0x2b031f0()*0.0124983);
}

double NNfunction-NN_6_8::synapse0x2b18b80() {
   return (neuron0x2b03530()*-0.00768719);
}

double NNfunction-NN_6_8::synapse0x2b18bc0() {
   return (neuron0x2b03870()*-0.00467264);
}

double NNfunction-NN_6_8::synapse0x2b18c00() {
   return (neuron0x2b03bb0()*-0.0159909);
}

double NNfunction-NN_6_8::synapse0x2b18c40() {
   return (neuron0x2b03ef0()*0.108287);
}

double NNfunction-NN_6_8::synapse0x2b18c80() {
   return (neuron0x2b04230()*-0.0131123);
}

double NNfunction-NN_6_8::synapse0x2b18cc0() {
   return (neuron0x2b04570()*-0.00808073);
}

double NNfunction-NN_6_8::synapse0x2b18d00() {
   return (neuron0x2b048b0()*-0.00812186);
}

double NNfunction-NN_6_8::synapse0x2b18d40() {
   return (neuron0x2b04bf0()*0.00621819);
}

double NNfunction-NN_6_8::synapse0x2b187d0() {
   return (neuron0x2b04f30()*0.0270645);
}

double NNfunction-NN_6_8::synapse0x2b18810() {
   return (neuron0x2b05490()*-0.0230527);
}

double NNfunction-NN_6_8::synapse0x2b18e90() {
   return (neuron0x2b056b0()*0.0127694);
}

double NNfunction-NN_6_8::synapse0x2b18ed0() {
   return (neuron0x2b059f0()*-0.0156225);
}

double NNfunction-NN_6_8::synapse0x2b18f10() {
   return (neuron0x2b05d30()*0.0285778);
}

double NNfunction-NN_6_8::synapse0x2b18f50() {
   return (neuron0x2b06070()*0.0265121);
}

double NNfunction-NN_6_8::synapse0x2b18f90() {
   return (neuron0x2b063b0()*-0.00262073);
}

double NNfunction-NN_6_8::synapse0x2b18fd0() {
   return (neuron0x2b066f0()*1.57531);
}

double NNfunction-NN_6_8::synapse0x2b19350() {
   return (neuron0x2b01b30()*0.0381623);
}

double NNfunction-NN_6_8::synapse0x2b19390() {
   return (neuron0x2b01e70()*-0.000948756);
}

double NNfunction-NN_6_8::synapse0x2b193d0() {
   return (neuron0x2b021b0()*1.48977);
}

double NNfunction-NN_6_8::synapse0x2b19410() {
   return (neuron0x2b024f0()*0.0458355);
}

double NNfunction-NN_6_8::synapse0x2b19450() {
   return (neuron0x2b02830()*-0.0263823);
}

double NNfunction-NN_6_8::synapse0x2b19490() {
   return (neuron0x2b02b70()*-0.0233721);
}

double NNfunction-NN_6_8::synapse0x2b194d0() {
   return (neuron0x2b02eb0()*-0.00420193);
}

double NNfunction-NN_6_8::synapse0x2b19510() {
   return (neuron0x2b031f0()*0.00584284);
}

double NNfunction-NN_6_8::synapse0x2b19550() {
   return (neuron0x2b03530()*-0.00747374);
}

double NNfunction-NN_6_8::synapse0x2b19590() {
   return (neuron0x2b03870()*0.0226387);
}

double NNfunction-NN_6_8::synapse0x2b195d0() {
   return (neuron0x2b03bb0()*0.0136215);
}

double NNfunction-NN_6_8::synapse0x2b19610() {
   return (neuron0x2b03ef0()*-0.0423658);
}

double NNfunction-NN_6_8::synapse0x2b19650() {
   return (neuron0x2b04230()*-0.017298);
}

double NNfunction-NN_6_8::synapse0x2b19690() {
   return (neuron0x2b04570()*-0.0101472);
}

double NNfunction-NN_6_8::synapse0x2b196d0() {
   return (neuron0x2b048b0()*-0.00135265);
}

double NNfunction-NN_6_8::synapse0x2b19710() {
   return (neuron0x2b04bf0()*-0.0179294);
}

double NNfunction-NN_6_8::synapse0x2b191a0() {
   return (neuron0x2b04f30()*-0.000714409);
}

double NNfunction-NN_6_8::synapse0x2b191e0() {
   return (neuron0x2b05490()*-0.01317);
}

double NNfunction-NN_6_8::synapse0x2b19860() {
   return (neuron0x2b056b0()*0.0122336);
}

double NNfunction-NN_6_8::synapse0x2b198a0() {
   return (neuron0x2b059f0()*-0.00847381);
}

double NNfunction-NN_6_8::synapse0x2b198e0() {
   return (neuron0x2b05d30()*-0.00168092);
}

double NNfunction-NN_6_8::synapse0x2b19920() {
   return (neuron0x2b06070()*0.00797407);
}

double NNfunction-NN_6_8::synapse0x2b19960() {
   return (neuron0x2b063b0()*0.00491881);
}

double NNfunction-NN_6_8::synapse0x2b199a0() {
   return (neuron0x2b066f0()*1.96825);
}

double NNfunction-NN_6_8::synapse0x2b19d20() {
   return (neuron0x2b01b30()*-0.23566);
}

double NNfunction-NN_6_8::synapse0x2b19d60() {
   return (neuron0x2b01e70()*0.346759);
}

double NNfunction-NN_6_8::synapse0x2b19da0() {
   return (neuron0x2b021b0()*0.633245);
}

double NNfunction-NN_6_8::synapse0x2b19de0() {
   return (neuron0x2b024f0()*0.346973);
}

double NNfunction-NN_6_8::synapse0x2b19e20() {
   return (neuron0x2b02830()*0.203613);
}

double NNfunction-NN_6_8::synapse0x2b19e60() {
   return (neuron0x2b02b70()*-0.493256);
}

double NNfunction-NN_6_8::synapse0x2b19ea0() {
   return (neuron0x2b02eb0()*0.478189);
}

double NNfunction-NN_6_8::synapse0x2b19ee0() {
   return (neuron0x2b031f0()*-0.37513);
}

double NNfunction-NN_6_8::synapse0x2b19f20() {
   return (neuron0x2b03530()*-0.132807);
}

double NNfunction-NN_6_8::synapse0x2b19f60() {
   return (neuron0x2b03870()*0.00249634);
}

double NNfunction-NN_6_8::synapse0x2b19fa0() {
   return (neuron0x2b03bb0()*0.162198);
}

double NNfunction-NN_6_8::synapse0x2b19fe0() {
   return (neuron0x2b03ef0()*-0.483153);
}

double NNfunction-NN_6_8::synapse0x2b1a020() {
   return (neuron0x2b04230()*0.0535893);
}

double NNfunction-NN_6_8::synapse0x2b1a060() {
   return (neuron0x2b04570()*-0.622791);
}

double NNfunction-NN_6_8::synapse0x2b1a0a0() {
   return (neuron0x2b048b0()*0.217947);
}

double NNfunction-NN_6_8::synapse0x2b1a0e0() {
   return (neuron0x2b04bf0()*0.278345);
}

double NNfunction-NN_6_8::synapse0x2b19b70() {
   return (neuron0x2b04f30()*0.309989);
}

double NNfunction-NN_6_8::synapse0x2b19bb0() {
   return (neuron0x2b05490()*0.218607);
}

double NNfunction-NN_6_8::synapse0x2b1a230() {
   return (neuron0x2b056b0()*0.419148);
}

double NNfunction-NN_6_8::synapse0x2b1a270() {
   return (neuron0x2b059f0()*0.326897);
}

double NNfunction-NN_6_8::synapse0x2b1a2b0() {
   return (neuron0x2b05d30()*0.278074);
}

double NNfunction-NN_6_8::synapse0x2b1a2f0() {
   return (neuron0x2b06070()*0.201222);
}

double NNfunction-NN_6_8::synapse0x2b1a330() {
   return (neuron0x2b063b0()*-0.0668083);
}

double NNfunction-NN_6_8::synapse0x2b1a370() {
   return (neuron0x2b066f0()*-0.436555);
}

double NNfunction-NN_6_8::synapse0x2b1a6f0() {
   return (neuron0x2b01b30()*0.0197813);
}

double NNfunction-NN_6_8::synapse0x2b1a730() {
   return (neuron0x2b01e70()*0.0013175);
}

double NNfunction-NN_6_8::synapse0x2b1a770() {
   return (neuron0x2b021b0()*0.344288);
}

double NNfunction-NN_6_8::synapse0x2b1a7b0() {
   return (neuron0x2b024f0()*-0.0163571);
}

double NNfunction-NN_6_8::synapse0x2b1a7f0() {
   return (neuron0x2b02830()*0.00115606);
}

double NNfunction-NN_6_8::synapse0x2b1a830() {
   return (neuron0x2b02b70()*-0.00949369);
}

double NNfunction-NN_6_8::synapse0x2b1a870() {
   return (neuron0x2b02eb0()*-0.00335973);
}

double NNfunction-NN_6_8::synapse0x2b1a8b0() {
   return (neuron0x2b031f0()*-8.42653e-05);
}

double NNfunction-NN_6_8::synapse0x2b1a8f0() {
   return (neuron0x2b03530()*-0.00393285);
}

double NNfunction-NN_6_8::synapse0x2b1a930() {
   return (neuron0x2b03870()*0.00693594);
}

double NNfunction-NN_6_8::synapse0x2b1a970() {
   return (neuron0x2b03bb0()*0.0168374);
}

double NNfunction-NN_6_8::synapse0x2b1a9b0() {
   return (neuron0x2b03ef0()*0.513305);
}

double NNfunction-NN_6_8::synapse0x2b1a9f0() {
   return (neuron0x2b04230()*-0.00443008);
}

double NNfunction-NN_6_8::synapse0x2b1aa30() {
   return (neuron0x2b04570()*0.00116061);
}

double NNfunction-NN_6_8::synapse0x2b1aa70() {
   return (neuron0x2b048b0()*-0.00250006);
}

double NNfunction-NN_6_8::synapse0x2b1aab0() {
   return (neuron0x2b04bf0()*-0.0035231);
}

double NNfunction-NN_6_8::synapse0x2b1a540() {
   return (neuron0x2b04f30()*0.00940048);
}

double NNfunction-NN_6_8::synapse0x2b1a580() {
   return (neuron0x2b05490()*0.00992192);
}

double NNfunction-NN_6_8::synapse0x2b1ac00() {
   return (neuron0x2b056b0()*-0.00219246);
}

double NNfunction-NN_6_8::synapse0x2b1ac40() {
   return (neuron0x2b059f0()*0.00203471);
}

double NNfunction-NN_6_8::synapse0x2b1ac80() {
   return (neuron0x2b05d30()*0.00269134);
}

double NNfunction-NN_6_8::synapse0x2b1acc0() {
   return (neuron0x2b06070()*0.00366898);
}

double NNfunction-NN_6_8::synapse0x2b1ad00() {
   return (neuron0x2b063b0()*-0.000256542);
}

double NNfunction-NN_6_8::synapse0x2b1ad40() {
   return (neuron0x2b066f0()*1.28727);
}

double NNfunction-NN_6_8::synapse0x2b1b0c0() {
   return (neuron0x2b01b30()*-0.00376108);
}

double NNfunction-NN_6_8::synapse0x2b1b100() {
   return (neuron0x2b01e70()*-0.0119334);
}

double NNfunction-NN_6_8::synapse0x2b1b140() {
   return (neuron0x2b021b0()*0.520531);
}

double NNfunction-NN_6_8::synapse0x2b1b180() {
   return (neuron0x2b024f0()*-0.00154826);
}

double NNfunction-NN_6_8::synapse0x2b1b1c0() {
   return (neuron0x2b02830()*0.00110301);
}

double NNfunction-NN_6_8::synapse0x2b1b200() {
   return (neuron0x2b02b70()*-0.000475573);
}

double NNfunction-NN_6_8::synapse0x2b1b240() {
   return (neuron0x2b02eb0()*0.000382549);
}

double NNfunction-NN_6_8::synapse0x2b1b280() {
   return (neuron0x2b031f0()*0.00193035);
}

double NNfunction-NN_6_8::synapse0x2b1b2c0() {
   return (neuron0x2b03530()*0.000602808);
}

double NNfunction-NN_6_8::synapse0x2b1b300() {
   return (neuron0x2b03870()*0.00967223);
}

double NNfunction-NN_6_8::synapse0x2b1b340() {
   return (neuron0x2b03bb0()*0.00744069);
}

double NNfunction-NN_6_8::synapse0x2b1b380() {
   return (neuron0x2b03ef0()*-0.476178);
}

double NNfunction-NN_6_8::synapse0x2b1b3c0() {
   return (neuron0x2b04230()*-0.0268209);
}

double NNfunction-NN_6_8::synapse0x2b1b400() {
   return (neuron0x2b04570()*-0.00200802);
}

double NNfunction-NN_6_8::synapse0x2b1b440() {
   return (neuron0x2b048b0()*-0.0206352);
}

double NNfunction-NN_6_8::synapse0x2b1b480() {
   return (neuron0x2b04bf0()*-0.0241459);
}

double NNfunction-NN_6_8::synapse0x2b1af10() {
   return (neuron0x2b04f30()*0.00256282);
}

double NNfunction-NN_6_8::synapse0x2b1af50() {
   return (neuron0x2b05490()*-0.0207908);
}

double NNfunction-NN_6_8::synapse0x2b1b5d0() {
   return (neuron0x2b056b0()*-0.0194988);
}

double NNfunction-NN_6_8::synapse0x2b1b610() {
   return (neuron0x2b059f0()*-0.0106673);
}

double NNfunction-NN_6_8::synapse0x2b1b650() {
   return (neuron0x2b05d30()*-0.0119408);
}

double NNfunction-NN_6_8::synapse0x2b1b690() {
   return (neuron0x2b06070()*0.00956115);
}

double NNfunction-NN_6_8::synapse0x2b1b6d0() {
   return (neuron0x2b063b0()*-0.00105193);
}

double NNfunction-NN_6_8::synapse0x2b1b710() {
   return (neuron0x2b066f0()*0.592587);
}

double NNfunction-NN_6_8::synapse0x2b1ba90() {
   return (neuron0x2b01b30()*-0.19099);
}

double NNfunction-NN_6_8::synapse0x2b1bad0() {
   return (neuron0x2b01e70()*0.155784);
}

double NNfunction-NN_6_8::synapse0x2b1bb10() {
   return (neuron0x2b021b0()*0.704441);
}

double NNfunction-NN_6_8::synapse0x2b1bb50() {
   return (neuron0x2b024f0()*-0.54103);
}

double NNfunction-NN_6_8::synapse0x2b1bb90() {
   return (neuron0x2b02830()*0.0759921);
}

double NNfunction-NN_6_8::synapse0x2b1bbd0() {
   return (neuron0x2b02b70()*0.0598036);
}

double NNfunction-NN_6_8::synapse0x2b1bc10() {
   return (neuron0x2b02eb0()*0.0942595);
}

double NNfunction-NN_6_8::synapse0x2b1bc50() {
   return (neuron0x2b031f0()*-0.202271);
}

double NNfunction-NN_6_8::synapse0x2b1bc90() {
   return (neuron0x2b03530()*0.0336069);
}

double NNfunction-NN_6_8::synapse0x2b1bcd0() {
   return (neuron0x2b03870()*0.0761398);
}

double NNfunction-NN_6_8::synapse0x2b1bd10() {
   return (neuron0x2b03bb0()*0.0194726);
}

double NNfunction-NN_6_8::synapse0x2b1bd50() {
   return (neuron0x2b03ef0()*-0.373092);
}

double NNfunction-NN_6_8::synapse0x2b1bd90() {
   return (neuron0x2b04230()*0.0549721);
}

double NNfunction-NN_6_8::synapse0x2b1bdd0() {
   return (neuron0x2b04570()*-0.227907);
}

double NNfunction-NN_6_8::synapse0x2b1be10() {
   return (neuron0x2b048b0()*0.479862);
}

double NNfunction-NN_6_8::synapse0x2b1be50() {
   return (neuron0x2b04bf0()*0.192849);
}

double NNfunction-NN_6_8::synapse0x2b1b8e0() {
   return (neuron0x2b04f30()*0.103985);
}

double NNfunction-NN_6_8::synapse0x2b1b920() {
   return (neuron0x2b05490()*-0.260333);
}

double NNfunction-NN_6_8::synapse0x2b1bfa0() {
   return (neuron0x2b056b0()*0.276372);
}

double NNfunction-NN_6_8::synapse0x2b1bfe0() {
   return (neuron0x2b059f0()*0.190758);
}

double NNfunction-NN_6_8::synapse0x2b1c020() {
   return (neuron0x2b05d30()*-0.198903);
}

double NNfunction-NN_6_8::synapse0x2b1c060() {
   return (neuron0x2b06070()*0.0642692);
}

double NNfunction-NN_6_8::synapse0x2b1c0a0() {
   return (neuron0x2b063b0()*-0.0462957);
}

double NNfunction-NN_6_8::synapse0x2b1c0e0() {
   return (neuron0x2b066f0()*-0.66737);
}

double NNfunction-NN_6_8::synapse0x2b1c460() {
   return (neuron0x2b01b30()*0.0541732);
}

double NNfunction-NN_6_8::synapse0x2b10a30() {
   return (neuron0x2b01e70()*-0.0560357);
}

double NNfunction-NN_6_8::synapse0x2b10a70() {
   return (neuron0x2b021b0()*-0.787916);
}

double NNfunction-NN_6_8::synapse0x2b10ab0() {
   return (neuron0x2b024f0()*0.0147472);
}

double NNfunction-NN_6_8::synapse0x2b10d00() {
   return (neuron0x2b02830()*0.10735);
}

double NNfunction-NN_6_8::synapse0x2b10d40() {
   return (neuron0x2b02b70()*0.121042);
}

double NNfunction-NN_6_8::synapse0x2b10d80() {
   return (neuron0x2b02eb0()*0.0532475);
}

double NNfunction-NN_6_8::synapse0x2b10fd0() {
   return (neuron0x2b031f0()*0.0117506);
}

double NNfunction-NN_6_8::synapse0x2b11010() {
   return (neuron0x2b03530()*0.166183);
}

double NNfunction-NN_6_8::synapse0x2b11260() {
   return (neuron0x2b03870()*-0.0468059);
}

double NNfunction-NN_6_8::synapse0x2b112a0() {
   return (neuron0x2b03bb0()*0.0193791);
}

double NNfunction-NN_6_8::synapse0x2b112e0() {
   return (neuron0x2b03ef0()*0.00456023);
}

double NNfunction-NN_6_8::synapse0x2b11530() {
   return (neuron0x2b04230()*-0.0961294);
}

double NNfunction-NN_6_8::synapse0x2b11570() {
   return (neuron0x2b04570()*0.1101);
}

double NNfunction-NN_6_8::synapse0x2b117c0() {
   return (neuron0x2b048b0()*-0.058983);
}

double NNfunction-NN_6_8::synapse0x2b11800() {
   return (neuron0x2b04bf0()*-0.140226);
}

double NNfunction-NN_6_8::synapse0x2b1c2b0() {
   return (neuron0x2b04f30()*0.0528478);
}

double NNfunction-NN_6_8::synapse0x2b1c2f0() {
   return (neuron0x2b05490()*0.29687);
}

double NNfunction-NN_6_8::synapse0x2b11950() {
   return (neuron0x2b056b0()*-0.0225228);
}

double NNfunction-NN_6_8::synapse0x2b11e60() {
   return (neuron0x2b059f0()*0.101645);
}

double NNfunction-NN_6_8::synapse0x2b11ea0() {
   return (neuron0x2b05d30()*-0.100884);
}

double NNfunction-NN_6_8::synapse0x2b11ee0() {
   return (neuron0x2b06070()*0.139904);
}

double NNfunction-NN_6_8::synapse0x2b12130() {
   return (neuron0x2b063b0()*0.12493);
}

double NNfunction-NN_6_8::synapse0x2b12170() {
   return (neuron0x2b066f0()*0.416905);
}

double NNfunction-NN_6_8::synapse0x2b11a20() {
   return (neuron0x2b01b30()*-0.059946);
}

double NNfunction-NN_6_8::synapse0x2b11a60() {
   return (neuron0x2b01e70()*-0.00759534);
}

double NNfunction-NN_6_8::synapse0x2b11aa0() {
   return (neuron0x2b021b0()*-1.45972);
}

double NNfunction-NN_6_8::synapse0x2b11ae0() {
   return (neuron0x2b024f0()*0.0402124);
}

double NNfunction-NN_6_8::synapse0x2b12460() {
   return (neuron0x2b02830()*-0.00442599);
}

double NNfunction-NN_6_8::synapse0x2b1e7b0() {
   return (neuron0x2b02b70()*0.0186851);
}

double NNfunction-NN_6_8::synapse0x2b1e7f0() {
   return (neuron0x2b02eb0()*0.0247665);
}

double NNfunction-NN_6_8::synapse0x2b1e830() {
   return (neuron0x2b031f0()*0.0105426);
}

double NNfunction-NN_6_8::synapse0x2b1e870() {
   return (neuron0x2b03530()*-0.00218169);
}

double NNfunction-NN_6_8::synapse0x2b1e8b0() {
   return (neuron0x2b03870()*-0.00128151);
}

double NNfunction-NN_6_8::synapse0x2b1e8f0() {
   return (neuron0x2b03bb0()*-0.0239522);
}

double NNfunction-NN_6_8::synapse0x2b1e930() {
   return (neuron0x2b03ef0()*0.0970092);
}

double NNfunction-NN_6_8::synapse0x2b1e970() {
   return (neuron0x2b04230()*0.126188);
}

double NNfunction-NN_6_8::synapse0x2b1e9b0() {
   return (neuron0x2b04570()*-0.00199574);
}

double NNfunction-NN_6_8::synapse0x2b1e9f0() {
   return (neuron0x2b048b0()*0.0864668);
}

double NNfunction-NN_6_8::synapse0x2b1ea30() {
   return (neuron0x2b04bf0()*0.0718249);
}

double NNfunction-NN_6_8::synapse0x2b12340() {
   return (neuron0x2b04f30()*-0.000829479);
}

double NNfunction-NN_6_8::synapse0x2b12380() {
   return (neuron0x2b05490()*0.109701);
}

double NNfunction-NN_6_8::synapse0x2b1eb80() {
   return (neuron0x2b056b0()*0.092489);
}

double NNfunction-NN_6_8::synapse0x2b1ebc0() {
   return (neuron0x2b059f0()*0.020192);
}

double NNfunction-NN_6_8::synapse0x2b1ec00() {
   return (neuron0x2b05d30()*-0.0459138);
}

double NNfunction-NN_6_8::synapse0x2b1ec40() {
   return (neuron0x2b06070()*-0.008731);
}

double NNfunction-NN_6_8::synapse0x2b1ec80() {
   return (neuron0x2b063b0()*0.0179772);
}

double NNfunction-NN_6_8::synapse0x2b1ecc0() {
   return (neuron0x2b066f0()*0.900454);
}

double NNfunction-NN_6_8::synapse0x2b1f040() {
   return (neuron0x2b01b30()*0.188613);
}

double NNfunction-NN_6_8::synapse0x2b1f080() {
   return (neuron0x2b01e70()*0.0154452);
}

double NNfunction-NN_6_8::synapse0x2b1f0c0() {
   return (neuron0x2b021b0()*0.0824648);
}

double NNfunction-NN_6_8::synapse0x2b1f100() {
   return (neuron0x2b024f0()*0.0144811);
}

double NNfunction-NN_6_8::synapse0x2b1f140() {
   return (neuron0x2b02830()*-0.00199959);
}

double NNfunction-NN_6_8::synapse0x2b1f180() {
   return (neuron0x2b02b70()*-0.00173413);
}

double NNfunction-NN_6_8::synapse0x2b1f1c0() {
   return (neuron0x2b02eb0()*-0.00116195);
}

double NNfunction-NN_6_8::synapse0x2b1f200() {
   return (neuron0x2b031f0()*0.00725891);
}

double NNfunction-NN_6_8::synapse0x2b1f240() {
   return (neuron0x2b03530()*0.00367138);
}

double NNfunction-NN_6_8::synapse0x2b1f280() {
   return (neuron0x2b03870()*0.00364281);
}

double NNfunction-NN_6_8::synapse0x2b1f2c0() {
   return (neuron0x2b03bb0()*-0.00750415);
}

double NNfunction-NN_6_8::synapse0x2b1f300() {
   return (neuron0x2b03ef0()*-0.118421);
}

double NNfunction-NN_6_8::synapse0x2b1f340() {
   return (neuron0x2b04230()*-0.00798726);
}

double NNfunction-NN_6_8::synapse0x2b1f380() {
   return (neuron0x2b04570()*-0.00141298);
}

double NNfunction-NN_6_8::synapse0x2b1f3c0() {
   return (neuron0x2b048b0()*0.0105226);
}

double NNfunction-NN_6_8::synapse0x2b1f400() {
   return (neuron0x2b04bf0()*-0.00668019);
}

double NNfunction-NN_6_8::synapse0x2b1ee90() {
   return (neuron0x2b04f30()*-0.0190394);
}

double NNfunction-NN_6_8::synapse0x2b1eed0() {
   return (neuron0x2b05490()*-0.00943347);
}

double NNfunction-NN_6_8::synapse0x2b1f550() {
   return (neuron0x2b056b0()*-0.0149557);
}

double NNfunction-NN_6_8::synapse0x2b1f590() {
   return (neuron0x2b059f0()*0.00805843);
}

double NNfunction-NN_6_8::synapse0x2b1f5d0() {
   return (neuron0x2b05d30()*0.00686169);
}

double NNfunction-NN_6_8::synapse0x2b1f610() {
   return (neuron0x2b06070()*-0.0126529);
}

double NNfunction-NN_6_8::synapse0x2b1f650() {
   return (neuron0x2b063b0()*-0.000357782);
}

double NNfunction-NN_6_8::synapse0x2b1f690() {
   return (neuron0x2b066f0()*-1.3204);
}

double NNfunction-NN_6_8::synapse0x2b1fa10() {
   return (neuron0x2b01b30()*0.020628);
}

double NNfunction-NN_6_8::synapse0x2b1fa50() {
   return (neuron0x2b01e70()*0.0123989);
}

double NNfunction-NN_6_8::synapse0x2b1fa90() {
   return (neuron0x2b021b0()*-2.59116);
}

double NNfunction-NN_6_8::synapse0x2b1fad0() {
   return (neuron0x2b024f0()*0.0185181);
}

double NNfunction-NN_6_8::synapse0x2b1fb10() {
   return (neuron0x2b02830()*0.00245607);
}

double NNfunction-NN_6_8::synapse0x2b1fb50() {
   return (neuron0x2b02b70()*0.00666895);
}

double NNfunction-NN_6_8::synapse0x2b1fb90() {
   return (neuron0x2b02eb0()*-0.0135596);
}

double NNfunction-NN_6_8::synapse0x2b1fbd0() {
   return (neuron0x2b031f0()*0.00408595);
}

double NNfunction-NN_6_8::synapse0x2b1fc10() {
   return (neuron0x2b03530()*0.000939468);
}

double NNfunction-NN_6_8::synapse0x2b1fc50() {
   return (neuron0x2b03870()*0.0252548);
}

double NNfunction-NN_6_8::synapse0x2b1fc90() {
   return (neuron0x2b03bb0()*0.0209599);
}

double NNfunction-NN_6_8::synapse0x2b1fcd0() {
   return (neuron0x2b03ef0()*1.91383);
}

double NNfunction-NN_6_8::synapse0x2b1fd10() {
   return (neuron0x2b04230()*0.0471975);
}

double NNfunction-NN_6_8::synapse0x2b1fd50() {
   return (neuron0x2b04570()*0.00171374);
}

double NNfunction-NN_6_8::synapse0x2b1fd90() {
   return (neuron0x2b048b0()*0.0399072);
}

double NNfunction-NN_6_8::synapse0x2b1fdd0() {
   return (neuron0x2b04bf0()*0.0413018);
}

double NNfunction-NN_6_8::synapse0x2b1f860() {
   return (neuron0x2b04f30()*0.0160925);
}

double NNfunction-NN_6_8::synapse0x2b1f8a0() {
   return (neuron0x2b05490()*0.0664515);
}

double NNfunction-NN_6_8::synapse0x2b1ff20() {
   return (neuron0x2b056b0()*0.0538471);
}

double NNfunction-NN_6_8::synapse0x2b1ff60() {
   return (neuron0x2b059f0()*-0.00708863);
}

double NNfunction-NN_6_8::synapse0x2b1ffa0() {
   return (neuron0x2b05d30()*0.0140254);
}

double NNfunction-NN_6_8::synapse0x2b1ffe0() {
   return (neuron0x2b06070()*-0.00384251);
}

double NNfunction-NN_6_8::synapse0x2b20020() {
   return (neuron0x2b063b0()*0.00123446);
}

double NNfunction-NN_6_8::synapse0x2b20060() {
   return (neuron0x2b066f0()*0.903068);
}

double NNfunction-NN_6_8::synapse0x2b203e0() {
   return (neuron0x2b01b30()*0.0112687);
}

double NNfunction-NN_6_8::synapse0x2b20420() {
   return (neuron0x2b01e70()*0.0030783);
}

double NNfunction-NN_6_8::synapse0x2b20460() {
   return (neuron0x2b021b0()*1.12887);
}

double NNfunction-NN_6_8::synapse0x2b204a0() {
   return (neuron0x2b024f0()*-0.0202576);
}

double NNfunction-NN_6_8::synapse0x2b204e0() {
   return (neuron0x2b02830()*0.000191307);
}

double NNfunction-NN_6_8::synapse0x2b20520() {
   return (neuron0x2b02b70()*0.0238958);
}

double NNfunction-NN_6_8::synapse0x2b20560() {
   return (neuron0x2b02eb0()*0.0111567);
}

double NNfunction-NN_6_8::synapse0x2b205a0() {
   return (neuron0x2b031f0()*0.0308101);
}

double NNfunction-NN_6_8::synapse0x2b205e0() {
   return (neuron0x2b03530()*-0.0081066);
}

double NNfunction-NN_6_8::synapse0x2b20620() {
   return (neuron0x2b03870()*-0.00759644);
}

double NNfunction-NN_6_8::synapse0x2b20660() {
   return (neuron0x2b03bb0()*-0.00252009);
}

double NNfunction-NN_6_8::synapse0x2b206a0() {
   return (neuron0x2b03ef0()*0.582348);
}

double NNfunction-NN_6_8::synapse0x2b206e0() {
   return (neuron0x2b04230()*0.0692146);
}

double NNfunction-NN_6_8::synapse0x2b20720() {
   return (neuron0x2b04570()*0.00639509);
}

double NNfunction-NN_6_8::synapse0x2b20760() {
   return (neuron0x2b048b0()*0.0396543);
}

double NNfunction-NN_6_8::synapse0x2b207a0() {
   return (neuron0x2b04bf0()*0.0446611);
}

double NNfunction-NN_6_8::synapse0x2b20230() {
   return (neuron0x2b04f30()*0.00107939);
}

double NNfunction-NN_6_8::synapse0x2b20270() {
   return (neuron0x2b05490()*0.0285744);
}

double NNfunction-NN_6_8::synapse0x2b208f0() {
   return (neuron0x2b056b0()*0.0300535);
}

double NNfunction-NN_6_8::synapse0x2b20930() {
   return (neuron0x2b059f0()*0.00680026);
}

double NNfunction-NN_6_8::synapse0x2b20970() {
   return (neuron0x2b05d30()*0.000940967);
}

double NNfunction-NN_6_8::synapse0x2b209b0() {
   return (neuron0x2b06070()*0.0113404);
}

double NNfunction-NN_6_8::synapse0x2b209f0() {
   return (neuron0x2b063b0()*0.00730993);
}

double NNfunction-NN_6_8::synapse0x2b20a30() {
   return (neuron0x2b066f0()*-0.0937014);
}

double NNfunction-NN_6_8::synapse0x2b20db0() {
   return (neuron0x2b01b30()*0.0137633);
}

double NNfunction-NN_6_8::synapse0x2b20df0() {
   return (neuron0x2b01e70()*-0.00150157);
}

double NNfunction-NN_6_8::synapse0x2b20e30() {
   return (neuron0x2b021b0()*1.34137);
}

double NNfunction-NN_6_8::synapse0x2b20e70() {
   return (neuron0x2b024f0()*0.0407974);
}

double NNfunction-NN_6_8::synapse0x2b20eb0() {
   return (neuron0x2b02830()*0.000516732);
}

double NNfunction-NN_6_8::synapse0x2b20ef0() {
   return (neuron0x2b02b70()*-0.00197992);
}

double NNfunction-NN_6_8::synapse0x2b20f30() {
   return (neuron0x2b02eb0()*-0.00595429);
}

double NNfunction-NN_6_8::synapse0x2b20f70() {
   return (neuron0x2b031f0()*-0.00540305);
}

double NNfunction-NN_6_8::synapse0x2b20fb0() {
   return (neuron0x2b03530()*0.0148952);
}

double NNfunction-NN_6_8::synapse0x2b20ff0() {
   return (neuron0x2b03870()*-0.00131801);
}

double NNfunction-NN_6_8::synapse0x2b21030() {
   return (neuron0x2b03bb0()*0.00451281);
}

double NNfunction-NN_6_8::synapse0x2b21070() {
   return (neuron0x2b03ef0()*-0.742039);
}

double NNfunction-NN_6_8::synapse0x2b210b0() {
   return (neuron0x2b04230()*-0.71327);
}

double NNfunction-NN_6_8::synapse0x2b210f0() {
   return (neuron0x2b04570()*0.0600821);
}

double NNfunction-NN_6_8::synapse0x2b21130() {
   return (neuron0x2b048b0()*-0.329106);
}

double NNfunction-NN_6_8::synapse0x2b21170() {
   return (neuron0x2b04bf0()*-0.339148);
}

double NNfunction-NN_6_8::synapse0x2b20c00() {
   return (neuron0x2b04f30()*0.0384202);
}

double NNfunction-NN_6_8::synapse0x2b20c40() {
   return (neuron0x2b05490()*-0.346425);
}

double NNfunction-NN_6_8::synapse0x2b212c0() {
   return (neuron0x2b056b0()*-0.352916);
}

double NNfunction-NN_6_8::synapse0x2b21300() {
   return (neuron0x2b059f0()*0.00972533);
}

double NNfunction-NN_6_8::synapse0x2b21340() {
   return (neuron0x2b05d30()*-0.0203331);
}

double NNfunction-NN_6_8::synapse0x2b21380() {
   return (neuron0x2b06070()*0.000813973);
}

double NNfunction-NN_6_8::synapse0x2b213c0() {
   return (neuron0x2b063b0()*-0.0165437);
}

double NNfunction-NN_6_8::synapse0x2b21400() {
   return (neuron0x2b066f0()*-0.394421);
}

double NNfunction-NN_6_8::synapse0x2b21780() {
   return (neuron0x2b01b30()*-0.182034);
}

double NNfunction-NN_6_8::synapse0x2b217c0() {
   return (neuron0x2b01e70()*-0.011128);
}

double NNfunction-NN_6_8::synapse0x2b21800() {
   return (neuron0x2b021b0()*2.11038);
}

double NNfunction-NN_6_8::synapse0x2b21840() {
   return (neuron0x2b024f0()*-0.000320591);
}

double NNfunction-NN_6_8::synapse0x2b21880() {
   return (neuron0x2b02830()*-0.0066958);
}

double NNfunction-NN_6_8::synapse0x2b218c0() {
   return (neuron0x2b02b70()*-0.00450686);
}

double NNfunction-NN_6_8::synapse0x2b21900() {
   return (neuron0x2b02eb0()*0.00855851);
}

double NNfunction-NN_6_8::synapse0x2b21940() {
   return (neuron0x2b031f0()*0.000202033);
}

double NNfunction-NN_6_8::synapse0x2b21980() {
   return (neuron0x2b03530()*0.000188491);
}

double NNfunction-NN_6_8::synapse0x2b219c0() {
   return (neuron0x2b03870()*-0.00825367);
}

double NNfunction-NN_6_8::synapse0x2b21a00() {
   return (neuron0x2b03bb0()*-0.014548);
}

double NNfunction-NN_6_8::synapse0x2b21a40() {
   return (neuron0x2b03ef0()*-0.0433098);
}

double NNfunction-NN_6_8::synapse0x2b21a80() {
   return (neuron0x2b04230()*0.00300903);
}

double NNfunction-NN_6_8::synapse0x2b21ac0() {
   return (neuron0x2b04570()*-0.0135483);
}

double NNfunction-NN_6_8::synapse0x2b21b00() {
   return (neuron0x2b048b0()*-0.0115991);
}

double NNfunction-NN_6_8::synapse0x2b21b40() {
   return (neuron0x2b04bf0()*-0.0186668);
}

double NNfunction-NN_6_8::synapse0x2b215d0() {
   return (neuron0x2b04f30()*-0.00240537);
}

double NNfunction-NN_6_8::synapse0x2b21610() {
   return (neuron0x2b05490()*-0.0156807);
}

double NNfunction-NN_6_8::synapse0x2b21c90() {
   return (neuron0x2b056b0()*-0.00571409);
}

double NNfunction-NN_6_8::synapse0x2b21cd0() {
   return (neuron0x2b059f0()*0.00282338);
}

double NNfunction-NN_6_8::synapse0x2b21d10() {
   return (neuron0x2b05d30()*-0.00944689);
}

double NNfunction-NN_6_8::synapse0x2b21d50() {
   return (neuron0x2b06070()*-0.00582586);
}

double NNfunction-NN_6_8::synapse0x2b21d90() {
   return (neuron0x2b063b0()*-0.00663119);
}

double NNfunction-NN_6_8::synapse0x2b21dd0() {
   return (neuron0x2b066f0()*-2.69682);
}

double NNfunction-NN_6_8::synapse0x2b22150() {
   return (neuron0x2b01b30()*-0.0777282);
}

double NNfunction-NN_6_8::synapse0x2b22190() {
   return (neuron0x2b01e70()*0.0167452);
}

double NNfunction-NN_6_8::synapse0x2b221d0() {
   return (neuron0x2b021b0()*-0.575022);
}

double NNfunction-NN_6_8::synapse0x2b22210() {
   return (neuron0x2b024f0()*0.0102478);
}

double NNfunction-NN_6_8::synapse0x2b22250() {
   return (neuron0x2b02830()*-0.0142075);
}

double NNfunction-NN_6_8::synapse0x2b22290() {
   return (neuron0x2b02b70()*-0.00361298);
}

double NNfunction-NN_6_8::synapse0x2b222d0() {
   return (neuron0x2b02eb0()*-0.0100739);
}

double NNfunction-NN_6_8::synapse0x2b22310() {
   return (neuron0x2b031f0()*-0.000911095);
}

double NNfunction-NN_6_8::synapse0x2b22350() {
   return (neuron0x2b03530()*0.0196025);
}

double NNfunction-NN_6_8::synapse0x2b22390() {
   return (neuron0x2b03870()*-0.00115247);
}

double NNfunction-NN_6_8::synapse0x2b223d0() {
   return (neuron0x2b03bb0()*-0.0100996);
}

double NNfunction-NN_6_8::synapse0x2b22410() {
   return (neuron0x2b03ef0()*0.169044);
}

double NNfunction-NN_6_8::synapse0x2b22450() {
   return (neuron0x2b04230()*0.0633105);
}

double NNfunction-NN_6_8::synapse0x2b22490() {
   return (neuron0x2b04570()*0.0263286);
}

double NNfunction-NN_6_8::synapse0x2b224d0() {
   return (neuron0x2b048b0()*0.0100014);
}

double NNfunction-NN_6_8::synapse0x2b22510() {
   return (neuron0x2b04bf0()*0.00347564);
}

double NNfunction-NN_6_8::synapse0x2b21fa0() {
   return (neuron0x2b04f30()*-0.00669704);
}

double NNfunction-NN_6_8::synapse0x2b21fe0() {
   return (neuron0x2b05490()*0.0138171);
}

double NNfunction-NN_6_8::synapse0x2b22660() {
   return (neuron0x2b056b0()*0.00152076);
}

double NNfunction-NN_6_8::synapse0x2b226a0() {
   return (neuron0x2b059f0()*0.0136692);
}

double NNfunction-NN_6_8::synapse0x2b226e0() {
   return (neuron0x2b05d30()*-0.00865002);
}

double NNfunction-NN_6_8::synapse0x2b22720() {
   return (neuron0x2b06070()*-0.00758172);
}

double NNfunction-NN_6_8::synapse0x2b22760() {
   return (neuron0x2b063b0()*0.0172975);
}

double NNfunction-NN_6_8::synapse0x2b227a0() {
   return (neuron0x2b066f0()*-1.6891);
}

double NNfunction-NN_6_8::synapse0x2b22b20() {
   return (neuron0x2b01b30()*-0.0084963);
}

double NNfunction-NN_6_8::synapse0x2b22b60() {
   return (neuron0x2b01e70()*-0.0134405);
}

double NNfunction-NN_6_8::synapse0x2b22ba0() {
   return (neuron0x2b021b0()*0.00433473);
}

double NNfunction-NN_6_8::synapse0x2b22be0() {
   return (neuron0x2b024f0()*0.171126);
}

double NNfunction-NN_6_8::synapse0x2b22c20() {
   return (neuron0x2b02830()*-0.0323347);
}

double NNfunction-NN_6_8::synapse0x2b22c60() {
   return (neuron0x2b02b70()*-0.00790221);
}

double NNfunction-NN_6_8::synapse0x2b22ca0() {
   return (neuron0x2b02eb0()*-0.00168989);
}

double NNfunction-NN_6_8::synapse0x2b22ce0() {
   return (neuron0x2b031f0()*-0.0142531);
}

double NNfunction-NN_6_8::synapse0x2b22d20() {
   return (neuron0x2b03530()*-0.0169566);
}

double NNfunction-NN_6_8::synapse0x2b22d60() {
   return (neuron0x2b03870()*0.0150728);
}

double NNfunction-NN_6_8::synapse0x2b22da0() {
   return (neuron0x2b03bb0()*-0.0165411);
}

double NNfunction-NN_6_8::synapse0x2b22de0() {
   return (neuron0x2b03ef0()*-0.519288);
}

double NNfunction-NN_6_8::synapse0x2b22e20() {
   return (neuron0x2b04230()*-0.0567195);
}

double NNfunction-NN_6_8::synapse0x2b22e60() {
   return (neuron0x2b04570()*-0.0239175);
}

double NNfunction-NN_6_8::synapse0x2b22ea0() {
   return (neuron0x2b048b0()*-0.0151547);
}

double NNfunction-NN_6_8::synapse0x2b22ee0() {
   return (neuron0x2b04bf0()*-0.0161481);
}

double NNfunction-NN_6_8::synapse0x2b22970() {
   return (neuron0x2b04f30()*-0.0229553);
}

double NNfunction-NN_6_8::synapse0x2b229b0() {
   return (neuron0x2b05490()*-0.0367451);
}

double NNfunction-NN_6_8::synapse0x2b23030() {
   return (neuron0x2b056b0()*-0.0136137);
}

double NNfunction-NN_6_8::synapse0x2b23070() {
   return (neuron0x2b059f0()*-0.0341651);
}

double NNfunction-NN_6_8::synapse0x2b230b0() {
   return (neuron0x2b05d30()*0.00736251);
}

double NNfunction-NN_6_8::synapse0x2b230f0() {
   return (neuron0x2b06070()*0.00558142);
}

double NNfunction-NN_6_8::synapse0x2b23130() {
   return (neuron0x2b063b0()*-0.0326555);
}

double NNfunction-NN_6_8::synapse0x2b23170() {
   return (neuron0x2b066f0()*0.221396);
}

double NNfunction-NN_6_8::synapse0x2b0bc20() {
   return (neuron0x2b01b30()*0.0126775);
}

double NNfunction-NN_6_8::synapse0x2b0bc60() {
   return (neuron0x2b01e70()*0.00207387);
}

double NNfunction-NN_6_8::synapse0x2b0bca0() {
   return (neuron0x2b021b0()*1.75767);
}

double NNfunction-NN_6_8::synapse0x2b0bce0() {
   return (neuron0x2b024f0()*-0.0161726);
}

double NNfunction-NN_6_8::synapse0x2b0bd20() {
   return (neuron0x2b02830()*-0.00534133);
}

double NNfunction-NN_6_8::synapse0x2b0bd60() {
   return (neuron0x2b02b70()*0.0122787);
}

double NNfunction-NN_6_8::synapse0x2b0bda0() {
   return (neuron0x2b02eb0()*0.00227298);
}

double NNfunction-NN_6_8::synapse0x2b0bde0() {
   return (neuron0x2b031f0()*0.000295721);
}

double NNfunction-NN_6_8::synapse0x2b23900() {
   return (neuron0x2b03530()*-0.0109228);
}

double NNfunction-NN_6_8::synapse0x2b23940() {
   return (neuron0x2b03870()*-0.0082959);
}

double NNfunction-NN_6_8::synapse0x2b23980() {
   return (neuron0x2b03bb0()*0.00269406);
}

double NNfunction-NN_6_8::synapse0x2b239c0() {
   return (neuron0x2b03ef0()*-4.69054);
}

double NNfunction-NN_6_8::synapse0x2b23a00() {
   return (neuron0x2b04230()*0.00579726);
}

double NNfunction-NN_6_8::synapse0x2b23a40() {
   return (neuron0x2b04570()*0.0136036);
}

double NNfunction-NN_6_8::synapse0x2b23a80() {
   return (neuron0x2b048b0()*0.00333571);
}

double NNfunction-NN_6_8::synapse0x2b23ac0() {
   return (neuron0x2b04bf0()*0.00512801);
}

double NNfunction-NN_6_8::synapse0x2b23340() {
   return (neuron0x2b04f30()*-6.29174e-05);
}

double NNfunction-NN_6_8::synapse0x2b23380() {
   return (neuron0x2b05490()*-0.0163939);
}

double NNfunction-NN_6_8::synapse0x2b23c10() {
   return (neuron0x2b056b0()*-0.0139519);
}

double NNfunction-NN_6_8::synapse0x2b23c50() {
   return (neuron0x2b059f0()*-0.00618934);
}

double NNfunction-NN_6_8::synapse0x2b23c90() {
   return (neuron0x2b05d30()*0.000867888);
}

double NNfunction-NN_6_8::synapse0x2b23cd0() {
   return (neuron0x2b06070()*0.00553412);
}

double NNfunction-NN_6_8::synapse0x2b23d10() {
   return (neuron0x2b063b0()*0.0058267);
}

double NNfunction-NN_6_8::synapse0x2b23d50() {
   return (neuron0x2b066f0()*0.125941);
}

double NNfunction-NN_6_8::synapse0x2b240d0() {
   return (neuron0x2b01b30()*0.221434);
}

double NNfunction-NN_6_8::synapse0x2b24110() {
   return (neuron0x2b01e70()*0.240998);
}

double NNfunction-NN_6_8::synapse0x2b24150() {
   return (neuron0x2b021b0()*-0.458066);
}

double NNfunction-NN_6_8::synapse0x2b24190() {
   return (neuron0x2b024f0()*-0.436649);
}

double NNfunction-NN_6_8::synapse0x2b241d0() {
   return (neuron0x2b02830()*-0.305356);
}

double NNfunction-NN_6_8::synapse0x2b24210() {
   return (neuron0x2b02b70()*-0.270314);
}

double NNfunction-NN_6_8::synapse0x2b24250() {
   return (neuron0x2b02eb0()*-0.222165);
}

double NNfunction-NN_6_8::synapse0x2b24290() {
   return (neuron0x2b031f0()*-0.19245);
}

double NNfunction-NN_6_8::synapse0x2b242d0() {
   return (neuron0x2b03530()*0.0410258);
}

double NNfunction-NN_6_8::synapse0x2b24310() {
   return (neuron0x2b03870()*-0.0893767);
}

double NNfunction-NN_6_8::synapse0x2b24350() {
   return (neuron0x2b03bb0()*0.0107414);
}

double NNfunction-NN_6_8::synapse0x2b24390() {
   return (neuron0x2b03ef0()*-0.242337);
}

double NNfunction-NN_6_8::synapse0x2b243d0() {
   return (neuron0x2b04230()*-0.0988292);
}

double NNfunction-NN_6_8::synapse0x2b24410() {
   return (neuron0x2b04570()*-0.348663);
}

double NNfunction-NN_6_8::synapse0x2b24450() {
   return (neuron0x2b048b0()*-0.383924);
}

double NNfunction-NN_6_8::synapse0x2b24490() {
   return (neuron0x2b04bf0()*0.309576);
}

double NNfunction-NN_6_8::synapse0x2b23f20() {
   return (neuron0x2b04f30()*0.333898);
}

double NNfunction-NN_6_8::synapse0x2b23f60() {
   return (neuron0x2b05490()*0.163327);
}

double NNfunction-NN_6_8::synapse0x2b245e0() {
   return (neuron0x2b056b0()*-0.0768808);
}

double NNfunction-NN_6_8::synapse0x2b24620() {
   return (neuron0x2b059f0()*0.316161);
}

double NNfunction-NN_6_8::synapse0x2b24660() {
   return (neuron0x2b05d30()*0.276663);
}

double NNfunction-NN_6_8::synapse0x2b246a0() {
   return (neuron0x2b06070()*-0.251304);
}

double NNfunction-NN_6_8::synapse0x2b246e0() {
   return (neuron0x2b063b0()*-0.177445);
}

double NNfunction-NN_6_8::synapse0x2b24720() {
   return (neuron0x2b066f0()*-0.24276);
}

double NNfunction-NN_6_8::synapse0x2b24aa0() {
   return (neuron0x2b01b30()*0.000849779);
}

double NNfunction-NN_6_8::synapse0x2b24ae0() {
   return (neuron0x2b01e70()*0.0138437);
}

double NNfunction-NN_6_8::synapse0x2b24b20() {
   return (neuron0x2b021b0()*-0.0535055);
}

double NNfunction-NN_6_8::synapse0x2b24b60() {
   return (neuron0x2b024f0()*-1.10135);
}

double NNfunction-NN_6_8::synapse0x2b24ba0() {
   return (neuron0x2b02830()*-0.00262534);
}

double NNfunction-NN_6_8::synapse0x2b24be0() {
   return (neuron0x2b02b70()*-0.0120303);
}

double NNfunction-NN_6_8::synapse0x2b24c20() {
   return (neuron0x2b02eb0()*-0.0187071);
}

double NNfunction-NN_6_8::synapse0x2b24c60() {
   return (neuron0x2b031f0()*0.00308097);
}

double NNfunction-NN_6_8::synapse0x2b24ca0() {
   return (neuron0x2b03530()*0.00708189);
}

double NNfunction-NN_6_8::synapse0x2b24ce0() {
   return (neuron0x2b03870()*0.000168507);
}

double NNfunction-NN_6_8::synapse0x2b24d20() {
   return (neuron0x2b03bb0()*-0.00324364);
}

double NNfunction-NN_6_8::synapse0x2b24d60() {
   return (neuron0x2b03ef0()*0.519959);
}

double NNfunction-NN_6_8::synapse0x2b24da0() {
   return (neuron0x2b04230()*0.0213981);
}

double NNfunction-NN_6_8::synapse0x2b24de0() {
   return (neuron0x2b04570()*0.0147724);
}

double NNfunction-NN_6_8::synapse0x2b24e20() {
   return (neuron0x2b048b0()*0.000755676);
}

double NNfunction-NN_6_8::synapse0x2b24e60() {
   return (neuron0x2b04bf0()*-0.000811226);
}

double NNfunction-NN_6_8::synapse0x2b248f0() {
   return (neuron0x2b04f30()*0.0253002);
}

double NNfunction-NN_6_8::synapse0x2b24930() {
   return (neuron0x2b05490()*0.0227726);
}

double NNfunction-NN_6_8::synapse0x2b15460() {
   return (neuron0x2b056b0()*-0.00485576);
}

double NNfunction-NN_6_8::synapse0x2b154a0() {
   return (neuron0x2b059f0()*0.0305285);
}

double NNfunction-NN_6_8::synapse0x2b154e0() {
   return (neuron0x2b05d30()*-0.0160617);
}

double NNfunction-NN_6_8::synapse0x2b15520() {
   return (neuron0x2b06070()*0.00824524);
}

double NNfunction-NN_6_8::synapse0x2b15560() {
   return (neuron0x2b063b0()*0.00504354);
}

double NNfunction-NN_6_8::synapse0x2b155a0() {
   return (neuron0x2b066f0()*-0.220109);
}

double NNfunction-NN_6_8::synapse0x2b15920() {
   return (neuron0x2b01b30()*-0.25426);
}

double NNfunction-NN_6_8::synapse0x2b15960() {
   return (neuron0x2b01e70()*-0.00440437);
}

double NNfunction-NN_6_8::synapse0x2b159a0() {
   return (neuron0x2b021b0()*-1.4073);
}

double NNfunction-NN_6_8::synapse0x2b159e0() {
   return (neuron0x2b024f0()*-0.00358822);
}

double NNfunction-NN_6_8::synapse0x2b15a20() {
   return (neuron0x2b02830()*0.0031757);
}

double NNfunction-NN_6_8::synapse0x2b15a60() {
   return (neuron0x2b02b70()*-0.0336493);
}

double NNfunction-NN_6_8::synapse0x2b15aa0() {
   return (neuron0x2b02eb0()*-0.0116898);
}

double NNfunction-NN_6_8::synapse0x2b15ae0() {
   return (neuron0x2b031f0()*-0.00862743);
}

double NNfunction-NN_6_8::synapse0x2b15b20() {
   return (neuron0x2b03530()*0.0135026);
}

double NNfunction-NN_6_8::synapse0x2b15b60() {
   return (neuron0x2b03870()*-0.00943099);
}

double NNfunction-NN_6_8::synapse0x2b15ba0() {
   return (neuron0x2b03bb0()*-0.001645);
}

double NNfunction-NN_6_8::synapse0x2b15be0() {
   return (neuron0x2b03ef0()*0.111565);
}

double NNfunction-NN_6_8::synapse0x2b15c20() {
   return (neuron0x2b04230()*-0.00577174);
}

double NNfunction-NN_6_8::synapse0x2b15c60() {
   return (neuron0x2b04570()*0.00490132);
}

double NNfunction-NN_6_8::synapse0x2b15ca0() {
   return (neuron0x2b048b0()*-0.0162398);
}

double NNfunction-NN_6_8::synapse0x2b15ce0() {
   return (neuron0x2b04bf0()*-0.0219491);
}

double NNfunction-NN_6_8::synapse0x2b15770() {
   return (neuron0x2b04f30()*0.00205163);
}

double NNfunction-NN_6_8::synapse0x2b157b0() {
   return (neuron0x2b05490()*0.000888257);
}

double NNfunction-NN_6_8::synapse0x2b15e30() {
   return (neuron0x2b056b0()*0.00584736);
}

double NNfunction-NN_6_8::synapse0x2b15e70() {
   return (neuron0x2b059f0()*0.00234542);
}

double NNfunction-NN_6_8::synapse0x2b15eb0() {
   return (neuron0x2b05d30()*0.00220826);
}

double NNfunction-NN_6_8::synapse0x2b15ef0() {
   return (neuron0x2b06070()*-0.0124088);
}

double NNfunction-NN_6_8::synapse0x2b15f30() {
   return (neuron0x2b063b0()*0.00136506);
}

double NNfunction-NN_6_8::synapse0x2b15f70() {
   return (neuron0x2b066f0()*2.01666);
}

double NNfunction-NN_6_8::synapse0x2b162f0() {
   return (neuron0x2b01b30()*0.203576);
}

double NNfunction-NN_6_8::synapse0x2b16330() {
   return (neuron0x2b01e70()*0.0442049);
}

double NNfunction-NN_6_8::synapse0x2b16370() {
   return (neuron0x2b021b0()*0.270657);
}

double NNfunction-NN_6_8::synapse0x2b163b0() {
   return (neuron0x2b024f0()*-0.0906783);
}

double NNfunction-NN_6_8::synapse0x2b163f0() {
   return (neuron0x2b02830()*0.0204583);
}

double NNfunction-NN_6_8::synapse0x2b16430() {
   return (neuron0x2b02b70()*0.193403);
}

double NNfunction-NN_6_8::synapse0x2b16470() {
   return (neuron0x2b02eb0()*-0.0389715);
}

double NNfunction-NN_6_8::synapse0x2b164b0() {
   return (neuron0x2b031f0()*-0.112978);
}

double NNfunction-NN_6_8::synapse0x2b164f0() {
   return (neuron0x2b03530()*-0.0171903);
}

double NNfunction-NN_6_8::synapse0x2b16530() {
   return (neuron0x2b03870()*0.00795003);
}

double NNfunction-NN_6_8::synapse0x2b16570() {
   return (neuron0x2b03bb0()*-0.157435);
}

double NNfunction-NN_6_8::synapse0x2b165b0() {
   return (neuron0x2b03ef0()*0.217471);
}

double NNfunction-NN_6_8::synapse0x2b165f0() {
   return (neuron0x2b04230()*-0.0200081);
}

double NNfunction-NN_6_8::synapse0x2b16630() {
   return (neuron0x2b04570()*0.327081);
}

double NNfunction-NN_6_8::synapse0x2b16670() {
   return (neuron0x2b048b0()*0.056258);
}

double NNfunction-NN_6_8::synapse0x2b166b0() {
   return (neuron0x2b04bf0()*0.105839);
}

double NNfunction-NN_6_8::synapse0x2b16140() {
   return (neuron0x2b04f30()*0.101296);
}

double NNfunction-NN_6_8::synapse0x2b16180() {
   return (neuron0x2b05490()*-0.0592154);
}

double NNfunction-NN_6_8::synapse0x2b16800() {
   return (neuron0x2b056b0()*0.00269449);
}

double NNfunction-NN_6_8::synapse0x2b16840() {
   return (neuron0x2b059f0()*-0.0865383);
}

double NNfunction-NN_6_8::synapse0x2b16880() {
   return (neuron0x2b05d30()*0.0815749);
}

double NNfunction-NN_6_8::synapse0x2b168c0() {
   return (neuron0x2b06070()*-0.152091);
}

double NNfunction-NN_6_8::synapse0x2b16900() {
   return (neuron0x2b063b0()*0.0541577);
}

double NNfunction-NN_6_8::synapse0x2b16940() {
   return (neuron0x2b066f0()*-0.471907);
}

double NNfunction-NN_6_8::synapse0x2b16cc0() {
   return (neuron0x2b01b30()*-0.0162877);
}

double NNfunction-NN_6_8::synapse0x2b16d00() {
   return (neuron0x2b01e70()*0.0272298);
}

double NNfunction-NN_6_8::synapse0x2b16d40() {
   return (neuron0x2b021b0()*0.48071);
}

double NNfunction-NN_6_8::synapse0x2b16d80() {
   return (neuron0x2b024f0()*0.0781326);
}

double NNfunction-NN_6_8::synapse0x2b16dc0() {
   return (neuron0x2b02830()*0.0218134);
}

double NNfunction-NN_6_8::synapse0x2b16e00() {
   return (neuron0x2b02b70()*0.0112399);
}

double NNfunction-NN_6_8::synapse0x2b16e40() {
   return (neuron0x2b02eb0()*-0.0152933);
}

double NNfunction-NN_6_8::synapse0x2b16e80() {
   return (neuron0x2b031f0()*-0.00754412);
}

double NNfunction-NN_6_8::synapse0x2b16ec0() {
   return (neuron0x2b03530()*0.0262858);
}

double NNfunction-NN_6_8::synapse0x2b16f00() {
   return (neuron0x2b03870()*-0.00503077);
}

double NNfunction-NN_6_8::synapse0x2b16f40() {
   return (neuron0x2b03bb0()*-0.0115519);
}

double NNfunction-NN_6_8::synapse0x2b16f80() {
   return (neuron0x2b03ef0()*0.407948);
}

double NNfunction-NN_6_8::synapse0x2b16fc0() {
   return (neuron0x2b04230()*0.0504952);
}

double NNfunction-NN_6_8::synapse0x2b17000() {
   return (neuron0x2b04570()*0.009939);
}

double NNfunction-NN_6_8::synapse0x2b17040() {
   return (neuron0x2b048b0()*0.00306194);
}

double NNfunction-NN_6_8::synapse0x2b17080() {
   return (neuron0x2b04bf0()*0.0299752);
}

double NNfunction-NN_6_8::synapse0x2b16b10() {
   return (neuron0x2b04f30()*-0.0107958);
}

double NNfunction-NN_6_8::synapse0x2b16b50() {
   return (neuron0x2b05490()*0.0105844);
}

double NNfunction-NN_6_8::synapse0x2b171d0() {
   return (neuron0x2b056b0()*0.00661953);
}

double NNfunction-NN_6_8::synapse0x2b17210() {
   return (neuron0x2b059f0()*-0.000476989);
}

double NNfunction-NN_6_8::synapse0x2b17250() {
   return (neuron0x2b05d30()*-0.00763409);
}

double NNfunction-NN_6_8::synapse0x2b17290() {
   return (neuron0x2b06070()*0.001028);
}

double NNfunction-NN_6_8::synapse0x2b172d0() {
   return (neuron0x2b063b0()*0.0224641);
}

double NNfunction-NN_6_8::synapse0x2b17310() {
   return (neuron0x2b066f0()*0.960374);
}

double NNfunction-NN_6_8::synapse0x2b291e0() {
   return (neuron0x2b01b30()*-0.0322151);
}

double NNfunction-NN_6_8::synapse0x2b29220() {
   return (neuron0x2b01e70()*-0.00291297);
}

double NNfunction-NN_6_8::synapse0x2b29260() {
   return (neuron0x2b021b0()*-3.12197);
}

double NNfunction-NN_6_8::synapse0x2b292a0() {
   return (neuron0x2b024f0()*-0.00135783);
}

double NNfunction-NN_6_8::synapse0x2b292e0() {
   return (neuron0x2b02830()*0.00267141);
}

double NNfunction-NN_6_8::synapse0x2b29320() {
   return (neuron0x2b02b70()*-0.00156568);
}

double NNfunction-NN_6_8::synapse0x2b29360() {
   return (neuron0x2b02eb0()*-0.00442057);
}

double NNfunction-NN_6_8::synapse0x2b293a0() {
   return (neuron0x2b031f0()*-0.00887726);
}

double NNfunction-NN_6_8::synapse0x2b293e0() {
   return (neuron0x2b03530()*0.0116381);
}

double NNfunction-NN_6_8::synapse0x2b29420() {
   return (neuron0x2b03870()*-0.0129377);
}

double NNfunction-NN_6_8::synapse0x2b29460() {
   return (neuron0x2b03bb0()*-0.00497661);
}

double NNfunction-NN_6_8::synapse0x2b294a0() {
   return (neuron0x2b03ef0()*-0.0380069);
}

double NNfunction-NN_6_8::synapse0x2b294e0() {
   return (neuron0x2b04230()*0.0138017);
}

double NNfunction-NN_6_8::synapse0x2b29520() {
   return (neuron0x2b04570()*0.010178);
}

double NNfunction-NN_6_8::synapse0x2b29560() {
   return (neuron0x2b048b0()*-0.00821832);
}

double NNfunction-NN_6_8::synapse0x2b295a0() {
   return (neuron0x2b04bf0()*-0.0029885);
}

double NNfunction-NN_6_8::synapse0x2b17350() {
   return (neuron0x2b04f30()*0.00662816);
}

double NNfunction-NN_6_8::synapse0x2b17390() {
   return (neuron0x2b05490()*-0.0137193);
}

double NNfunction-NN_6_8::synapse0x2b296f0() {
   return (neuron0x2b056b0()*-0.00147544);
}

double NNfunction-NN_6_8::synapse0x2b29730() {
   return (neuron0x2b059f0()*0.00411289);
}

double NNfunction-NN_6_8::synapse0x2b29770() {
   return (neuron0x2b05d30()*-0.00329124);
}

double NNfunction-NN_6_8::synapse0x2b297b0() {
   return (neuron0x2b06070()*0.00272004);
}

double NNfunction-NN_6_8::synapse0x2b297f0() {
   return (neuron0x2b063b0()*0.0091524);
}

double NNfunction-NN_6_8::synapse0x2b29830() {
   return (neuron0x2b066f0()*-3.67179);
}

double NNfunction-NN_6_8::synapse0x2b29bb0() {
   return (neuron0x2b01b30()*-0.0441256);
}

double NNfunction-NN_6_8::synapse0x2b29bf0() {
   return (neuron0x2b01e70()*-0.0207225);
}

double NNfunction-NN_6_8::synapse0x2b29c30() {
   return (neuron0x2b021b0()*-0.676133);
}

double NNfunction-NN_6_8::synapse0x2b29c70() {
   return (neuron0x2b024f0()*-0.0904583);
}

double NNfunction-NN_6_8::synapse0x2b29cb0() {
   return (neuron0x2b02830()*-0.0708464);
}

double NNfunction-NN_6_8::synapse0x2b29cf0() {
   return (neuron0x2b02b70()*0.0256015);
}

double NNfunction-NN_6_8::synapse0x2b29d30() {
   return (neuron0x2b02eb0()*0.0161956);
}

double NNfunction-NN_6_8::synapse0x2b29d70() {
   return (neuron0x2b031f0()*-0.00702067);
}

double NNfunction-NN_6_8::synapse0x2b29db0() {
   return (neuron0x2b03530()*-0.0185316);
}

double NNfunction-NN_6_8::synapse0x2b29df0() {
   return (neuron0x2b03870()*0.00418);
}

double NNfunction-NN_6_8::synapse0x2b29e30() {
   return (neuron0x2b03bb0()*-0.00211695);
}

double NNfunction-NN_6_8::synapse0x2b29e70() {
   return (neuron0x2b03ef0()*0.0721636);
}

double NNfunction-NN_6_8::synapse0x2b29eb0() {
   return (neuron0x2b04230()*0.0293123);
}

double NNfunction-NN_6_8::synapse0x2b29ef0() {
   return (neuron0x2b04570()*-0.0411359);
}

double NNfunction-NN_6_8::synapse0x2b29f30() {
   return (neuron0x2b048b0()*0.044542);
}

double NNfunction-NN_6_8::synapse0x2b29f70() {
   return (neuron0x2b04bf0()*0.0254367);
}

double NNfunction-NN_6_8::synapse0x2b29a00() {
   return (neuron0x2b04f30()*-0.0555678);
}

double NNfunction-NN_6_8::synapse0x2b29a40() {
   return (neuron0x2b05490()*0.0305012);
}

double NNfunction-NN_6_8::synapse0x2b2a0c0() {
   return (neuron0x2b056b0()*0.021389);
}

double NNfunction-NN_6_8::synapse0x2b2a100() {
   return (neuron0x2b059f0()*0.00813437);
}

double NNfunction-NN_6_8::synapse0x2b2a140() {
   return (neuron0x2b05d30()*-0.0158854);
}

double NNfunction-NN_6_8::synapse0x2b2a180() {
   return (neuron0x2b06070()*-0.0163013);
}

double NNfunction-NN_6_8::synapse0x2b2a1c0() {
   return (neuron0x2b063b0()*0.0127942);
}

double NNfunction-NN_6_8::synapse0x2b2a200() {
   return (neuron0x2b066f0()*0.557504);
}

double NNfunction-NN_6_8::synapse0x2b2a580() {
   return (neuron0x2b01b30()*0.0473074);
}

double NNfunction-NN_6_8::synapse0x2b2a5c0() {
   return (neuron0x2b01e70()*0.00515978);
}

double NNfunction-NN_6_8::synapse0x2b2a600() {
   return (neuron0x2b021b0()*-0.649672);
}

double NNfunction-NN_6_8::synapse0x2b2a640() {
   return (neuron0x2b024f0()*0.0774959);
}

double NNfunction-NN_6_8::synapse0x2b2a680() {
   return (neuron0x2b02830()*0.0409823);
}

double NNfunction-NN_6_8::synapse0x2b2a6c0() {
   return (neuron0x2b02b70()*-0.0108604);
}

double NNfunction-NN_6_8::synapse0x2b2a700() {
   return (neuron0x2b02eb0()*-0.00262705);
}

double NNfunction-NN_6_8::synapse0x2b2a740() {
   return (neuron0x2b031f0()*4.76608e-05);
}

double NNfunction-NN_6_8::synapse0x2b2a780() {
   return (neuron0x2b03530()*0.0119694);
}

double NNfunction-NN_6_8::synapse0x2b2a7c0() {
   return (neuron0x2b03870()*0.013884);
}

double NNfunction-NN_6_8::synapse0x2b2a800() {
   return (neuron0x2b03bb0()*-0.00269843);
}

double NNfunction-NN_6_8::synapse0x2b2a840() {
   return (neuron0x2b03ef0()*-0.404534);
}

double NNfunction-NN_6_8::synapse0x2b2a880() {
   return (neuron0x2b04230()*0.0249814);
}

double NNfunction-NN_6_8::synapse0x2b2a8c0() {
   return (neuron0x2b04570()*0.0179358);
}

double NNfunction-NN_6_8::synapse0x2b2a900() {
   return (neuron0x2b048b0()*-0.0130348);
}

double NNfunction-NN_6_8::synapse0x2b2a940() {
   return (neuron0x2b04bf0()*-0.0240644);
}

double NNfunction-NN_6_8::synapse0x2b2a3d0() {
   return (neuron0x2b04f30()*0.0110835);
}

double NNfunction-NN_6_8::synapse0x2b2a410() {
   return (neuron0x2b05490()*-0.00598227);
}

double NNfunction-NN_6_8::synapse0x2b2aa90() {
   return (neuron0x2b056b0()*0.00975634);
}

double NNfunction-NN_6_8::synapse0x2b2aad0() {
   return (neuron0x2b059f0()*-0.0080162);
}

double NNfunction-NN_6_8::synapse0x2b2ab10() {
   return (neuron0x2b05d30()*0.000510539);
}

double NNfunction-NN_6_8::synapse0x2b2ab50() {
   return (neuron0x2b06070()*-0.0110733);
}

double NNfunction-NN_6_8::synapse0x2b2ab90() {
   return (neuron0x2b063b0()*-0.0027045);
}

double NNfunction-NN_6_8::synapse0x2b2abd0() {
   return (neuron0x2b066f0()*0.420668);
}

double NNfunction-NN_6_8::synapse0x2b2af50() {
   return (neuron0x2b01b30()*0.084551);
}

double NNfunction-NN_6_8::synapse0x2b2af90() {
   return (neuron0x2b01e70()*0.139003);
}

double NNfunction-NN_6_8::synapse0x2b2afd0() {
   return (neuron0x2b021b0()*-0.311856);
}

double NNfunction-NN_6_8::synapse0x2b2b010() {
   return (neuron0x2b024f0()*0.47975);
}

double NNfunction-NN_6_8::synapse0x2b2b050() {
   return (neuron0x2b02830()*0.124581);
}

double NNfunction-NN_6_8::synapse0x2b2b090() {
   return (neuron0x2b02b70()*-0.119623);
}

double NNfunction-NN_6_8::synapse0x2b2b0d0() {
   return (neuron0x2b02eb0()*0.0501479);
}

double NNfunction-NN_6_8::synapse0x2b2b110() {
   return (neuron0x2b031f0()*-0.229313);
}

double NNfunction-NN_6_8::synapse0x2b2b150() {
   return (neuron0x2b03530()*0.211163);
}

double NNfunction-NN_6_8::synapse0x2b2b190() {
   return (neuron0x2b03870()*0.0303602);
}

double NNfunction-NN_6_8::synapse0x2b2b1d0() {
   return (neuron0x2b03bb0()*-0.0660403);
}

double NNfunction-NN_6_8::synapse0x2b2b210() {
   return (neuron0x2b03ef0()*-0.353988);
}

double NNfunction-NN_6_8::synapse0x2b2b250() {
   return (neuron0x2b04230()*-0.115886);
}

double NNfunction-NN_6_8::synapse0x2b2b290() {
   return (neuron0x2b04570()*0.26237);
}

double NNfunction-NN_6_8::synapse0x2b2b2d0() {
   return (neuron0x2b048b0()*0.256167);
}

double NNfunction-NN_6_8::synapse0x2b2b310() {
   return (neuron0x2b04bf0()*-0.0672879);
}

double NNfunction-NN_6_8::synapse0x2b2ada0() {
   return (neuron0x2b04f30()*-0.49737);
}

double NNfunction-NN_6_8::synapse0x2b2ade0() {
   return (neuron0x2b05490()*0.15366);
}

double NNfunction-NN_6_8::synapse0x2b2b460() {
   return (neuron0x2b056b0()*-0.0500022);
}

double NNfunction-NN_6_8::synapse0x2b2b4a0() {
   return (neuron0x2b059f0()*0.0102099);
}

double NNfunction-NN_6_8::synapse0x2b2b4e0() {
   return (neuron0x2b05d30()*-0.199684);
}

double NNfunction-NN_6_8::synapse0x2b2b520() {
   return (neuron0x2b06070()*-0.0965932);
}

double NNfunction-NN_6_8::synapse0x2b2b560() {
   return (neuron0x2b063b0()*0.0523197);
}

double NNfunction-NN_6_8::synapse0x2b2b5a0() {
   return (neuron0x2b066f0()*-0.392557);
}

double NNfunction-NN_6_8::synapse0x2b07b40() {
   return (neuron0x2b06b90()*-0.309478);
}

double NNfunction-NN_6_8::synapse0x2b07b80() {
   return (neuron0x2b074a0()*-0.301393);
}

double NNfunction-NN_6_8::synapse0x2b09050() {
   return (neuron0x2b07f80()*0.088051);
}

double NNfunction-NN_6_8::synapse0x2b09090() {
   return (neuron0x28c1810()*-0.567203);
}

double NNfunction-NN_6_8::synapse0x2b09a20() {
   return (neuron0x2b08da0()*-0.245411);
}

double NNfunction-NN_6_8::synapse0x2b09a60() {
   return (neuron0x2b09770()*-0.0250162);
}

double NNfunction-NN_6_8::synapse0x2b0a7f0() {
   return (neuron0x2b0a540()*-0.487486);
}

double NNfunction-NN_6_8::synapse0x2b0a830() {
   return (neuron0x2b0af10()*-0.0796298);
}

double NNfunction-NN_6_8::synapse0x2b0b1c0() {
   return (neuron0x2b0b8e0()*-0.293202);
}

double NNfunction-NN_6_8::synapse0x2b0b200() {
   return (neuron0x2b0c3c0()*-0.139369);
}

double NNfunction-NN_6_8::synapse0x2b0bb90() {
   return (neuron0x2b0cd90()*-0.714603);
}

double NNfunction-NN_6_8::synapse0x2b0bbd0() {
   return (neuron0x2b09e70()*-0.673136);
}

double NNfunction-NN_6_8::synapse0x2b0c670() {
   return (neuron0x2b0e940()*-1.35205e-05);
}

double NNfunction-NN_6_8::synapse0x2b0c6b0() {
   return (neuron0x2b0f310()*0.542695);
}

double NNfunction-NN_6_8::synapse0x2b0d040() {
   return (neuron0x2b0fce0()*-0.0118472);
}

double NNfunction-NN_6_8::synapse0x2b0d080() {
   return (neuron0x2b106b0()*0.00900925);
}

double NNfunction-NN_6_8::synapse0x2b0a120() {
   return (neuron0x2b124c0()*-0.0402569);
}

double NNfunction-NN_6_8::synapse0x2b0a160() {
   return (neuron0x2b127a0()*-0.548097);
}

double NNfunction-NN_6_8::synapse0x2b0ebf0() {
   return (neuron0x2b13170()*0.683347);
}

double NNfunction-NN_6_8::synapse0x2b0ec30() {
   return (neuron0x2b13b40()*0.422928);
}

double NNfunction-NN_6_8::synapse0x2b0f5c0() {
   return (neuron0x2b14510()*-0.308539);
}

double NNfunction-NN_6_8::synapse0x2b0f600() {
   return (neuron0x2b14ee0()*0.11549);
}

double NNfunction-NN_6_8::synapse0x2b0ff90() {
   return (neuron0x2b0da30()*-0.229664);
}

double NNfunction-NN_6_8::synapse0x2b0ffd0() {
   return (neuron0x2b0e400()*-0.405222);
}

double NNfunction-NN_6_8::synapse0x2b10960() {
   return (neuron0x2b17c70()*-0.380245);
}

double NNfunction-NN_6_8::synapse0x2b109a0() {
   return (neuron0x2b18640()*-0.356307);
}

double NNfunction-NN_6_8::synapse0x2b04ad0() {
   return (neuron0x2b19010()*-0.268987);
}

double NNfunction-NN_6_8::synapse0x2b04b10() {
   return (neuron0x2b199e0()*0.137188);
}

double NNfunction-NN_6_8::synapse0x2b12a50() {
   return (neuron0x2b1a3b0()*-0.409755);
}

double NNfunction-NN_6_8::synapse0x2b12a90() {
   return (neuron0x2b1ad80()*0.266059);
}

double NNfunction-NN_6_8::synapse0x2b13420() {
   return (neuron0x2b1b750()*-0.306426);
}

double NNfunction-NN_6_8::synapse0x2b13460() {
   return (neuron0x2b1c120()*0.183059);
}

double NNfunction-NN_6_8::synapse0x2b13df0() {
   return (neuron0x2b121b0()*0.00380615);
}

double NNfunction-NN_6_8::synapse0x2b13e30() {
   return (neuron0x2b1ed00()*-0.573604);
}

double NNfunction-NN_6_8::synapse0x2b147c0() {
   return (neuron0x2b1f6d0()*0.159203);
}

double NNfunction-NN_6_8::synapse0x2b14800() {
   return (neuron0x2b200a0()*0.0126039);
}

double NNfunction-NN_6_8::synapse0x2b15190() {
   return (neuron0x2b20a70()*-0.662776);
}

double NNfunction-NN_6_8::synapse0x2b151d0() {
   return (neuron0x2b21440()*0.551575);
}

double NNfunction-NN_6_8::synapse0x2b0dce0() {
   return (neuron0x2b21e10()*-0.583918);
}

double NNfunction-NN_6_8::synapse0x2b0dd20() {
   return (neuron0x2b227e0()*-0.434007);
}

double NNfunction-NN_6_8::synapse0x2b17590() {
   return (neuron0x2b231b0()*-0.459957);
}

double NNfunction-NN_6_8::synapse0x2b175d0() {
   return (neuron0x2b23d90()*0.120601);
}

double NNfunction-NN_6_8::synapse0x2b17f20() {
   return (neuron0x2b24760()*0.338361);
}

double NNfunction-NN_6_8::synapse0x2b17f60() {
   return (neuron0x2b155e0()*-0.342392);
}

double NNfunction-NN_6_8::synapse0x2b188f0() {
   return (neuron0x2b15fb0()*-0.0361186);
}

double NNfunction-NN_6_8::synapse0x2b18930() {
   return (neuron0x2b16980()*-0.450221);
}

double NNfunction-NN_6_8::synapse0x2b192c0() {
   return (neuron0x2b28fc0()*0.0128108);
}

double NNfunction-NN_6_8::synapse0x2b19300() {
   return (neuron0x2b29870()*-0.602336);
}

double NNfunction-NN_6_8::synapse0x2b19c90() {
   return (neuron0x2b2a240()*-0.58713);
}

double NNfunction-NN_6_8::synapse0x2b19cd0() {
   return (neuron0x2b2ac10()*-0.494082);
}

double NNfunction-NN_6_8::synapse0x2b1c3d0() {
   return (neuron0x2b06b90()*-0.186817);
}

double NNfunction-NN_6_8::synapse0x2b1c410() {
   return (neuron0x2b074a0()*0.0467014);
}

double NNfunction-NN_6_8::synapse0x2b11990() {
   return (neuron0x2b07f80()*0.535272);
}

double NNfunction-NN_6_8::synapse0x2b119d0() {
   return (neuron0x28c1810()*0.684734);
}

double NNfunction-NN_6_8::synapse0x2b1efb0() {
   return (neuron0x2b08da0()*1.55402);
}

double NNfunction-NN_6_8::synapse0x2b1eff0() {
   return (neuron0x2b09770()*0.0320109);
}

double NNfunction-NN_6_8::synapse0x2b1f980() {
   return (neuron0x2b0a540()*0.458297);
}

double NNfunction-NN_6_8::synapse0x2b1f9c0() {
   return (neuron0x2b0af10()*-0.356744);
}

double NNfunction-NN_6_8::synapse0x2b20350() {
   return (neuron0x2b0b8e0()*0.111562);
}

double NNfunction-NN_6_8::synapse0x2b20390() {
   return (neuron0x2b0c3c0()*-1.52342);
}

double NNfunction-NN_6_8::synapse0x2b20d20() {
   return (neuron0x2b0cd90()*0.130695);
}

double NNfunction-NN_6_8::synapse0x2b20d60() {
   return (neuron0x2b09e70()*-0.0163764);
}

double NNfunction-NN_6_8::synapse0x2b216f0() {
   return (neuron0x2b0e940()*-1.11881);
}

double NNfunction-NN_6_8::synapse0x2b21730() {
   return (neuron0x2b0f310()*0.168719);
}

double NNfunction-NN_6_8::synapse0x2b220c0() {
   return (neuron0x2b0fce0()*-0.0919193);
}

double NNfunction-NN_6_8::synapse0x2b22100() {
   return (neuron0x2b106b0()*-0.924854);
}

double NNfunction-NN_6_8::synapse0x2b22a90() {
   return (neuron0x2b124c0()*-0.954647);
}

double NNfunction-NN_6_8::synapse0x2b22ad0() {
   return (neuron0x2b127a0()*-0.956974);
}

double NNfunction-NN_6_8::synapse0x2b23460() {
   return (neuron0x2b13170()*-0.472885);
}

double NNfunction-NN_6_8::synapse0x2b234a0() {
   return (neuron0x2b13b40()*0.170204);
}

double NNfunction-NN_6_8::synapse0x2b24040() {
   return (neuron0x2b14510()*0.155997);
}

double NNfunction-NN_6_8::synapse0x2b24080() {
   return (neuron0x2b14ee0()*0.7341);
}

double NNfunction-NN_6_8::synapse0x2b24a10() {
   return (neuron0x2b0da30()*0.225387);
}

double NNfunction-NN_6_8::synapse0x2b24a50() {
   return (neuron0x2b0e400()*-0.234668);
}

double NNfunction-NN_6_8::synapse0x2b15890() {
   return (neuron0x2b17c70()*0.920016);
}

double NNfunction-NN_6_8::synapse0x2b158d0() {
   return (neuron0x2b18640()*-0.270454);
}

double NNfunction-NN_6_8::synapse0x2b16260() {
   return (neuron0x2b19010()*-0.00647863);
}

double NNfunction-NN_6_8::synapse0x2b162a0() {
   return (neuron0x2b199e0()*-0.0318526);
}

double NNfunction-NN_6_8::synapse0x2b16c30() {
   return (neuron0x2b1a3b0()*-0.565795);
}

double NNfunction-NN_6_8::synapse0x2b16c70() {
   return (neuron0x2b1ad80()*1.53611);
}

double NNfunction-NN_6_8::synapse0x2b29150() {
   return (neuron0x2b1b750()*0.0305362);
}

double NNfunction-NN_6_8::synapse0x2b29190() {
   return (neuron0x2b1c120()*-0.12762);
}

double NNfunction-NN_6_8::synapse0x2b29b20() {
   return (neuron0x2b121b0()*0.439988);
}

double NNfunction-NN_6_8::synapse0x2b29b60() {
   return (neuron0x2b1ed00()*0.681945);
}

double NNfunction-NN_6_8::synapse0x2b2a4f0() {
   return (neuron0x2b1f6d0()*-0.173922);
}

double NNfunction-NN_6_8::synapse0x2b2a530() {
   return (neuron0x2b200a0()*-0.654888);
}

double NNfunction-NN_6_8::synapse0x2b2aec0() {
   return (neuron0x2b20a70()*0.255799);
}

double NNfunction-NN_6_8::synapse0x2b2af00() {
   return (neuron0x2b21440()*0.971971);
}

double NNfunction-NN_6_8::synapse0x2b06db0() {
   return (neuron0x2b21e10()*-0.807577);
}

double NNfunction-NN_6_8::synapse0x2b06df0() {
   return (neuron0x2b227e0()*-1.01974);
}

double NNfunction-NN_6_8::synapse0x2b1a660() {
   return (neuron0x2b231b0()*0.262533);
}

double NNfunction-NN_6_8::synapse0x2b1a6a0() {
   return (neuron0x2b23d90()*0.012702);
}

double NNfunction-NN_6_8::synapse0x2b2b5e0() {
   return (neuron0x2b24760()*-1.12618);
}

double NNfunction-NN_6_8::synapse0x2b2b620() {
   return (neuron0x2b155e0()*-0.558986);
}

double NNfunction-NN_6_8::synapse0x2b2b660() {
   return (neuron0x2b15fb0()*0.0826467);
}

double NNfunction-NN_6_8::synapse0x2b2b6a0() {
   return (neuron0x2b16980()*0.50429);
}

double NNfunction-NN_6_8::synapse0x2b32550() {
   return (neuron0x2b28fc0()*0.882223);
}

double NNfunction-NN_6_8::synapse0x2b32590() {
   return (neuron0x2b29870()*-0.843197);
}

double NNfunction-NN_6_8::synapse0x2b325d0() {
   return (neuron0x2b2a240()*-1.53431);
}

double NNfunction-NN_6_8::synapse0x2b32610() {
   return (neuron0x2b2ac10()*0.0142012);
}

double NNfunction-NN_6_8::synapse0x2b32990() {
   return (neuron0x2b06b90()*0.0924644);
}

double NNfunction-NN_6_8::synapse0x2b329d0() {
   return (neuron0x2b074a0()*-0.185615);
}

double NNfunction-NN_6_8::synapse0x2b32a10() {
   return (neuron0x2b07f80()*-0.313814);
}

double NNfunction-NN_6_8::synapse0x2b32a50() {
   return (neuron0x28c1810()*-0.78494);
}

double NNfunction-NN_6_8::synapse0x2b32a90() {
   return (neuron0x2b08da0()*0.215749);
}

double NNfunction-NN_6_8::synapse0x2b32ad0() {
   return (neuron0x2b09770()*-0.130684);
}

double NNfunction-NN_6_8::synapse0x2b32b10() {
   return (neuron0x2b0a540()*-0.0992379);
}

double NNfunction-NN_6_8::synapse0x2b32b50() {
   return (neuron0x2b0af10()*0.261536);
}

double NNfunction-NN_6_8::synapse0x2b32b90() {
   return (neuron0x2b0b8e0()*-0.716278);
}

double NNfunction-NN_6_8::synapse0x2b32bd0() {
   return (neuron0x2b0c3c0()*0.909445);
}

double NNfunction-NN_6_8::synapse0x2b32c10() {
   return (neuron0x2b0cd90()*-0.210045);
}

double NNfunction-NN_6_8::synapse0x2b32c50() {
   return (neuron0x2b09e70()*-0.157741);
}

double NNfunction-NN_6_8::synapse0x2b32c90() {
   return (neuron0x2b0e940()*1.67345);
}

double NNfunction-NN_6_8::synapse0x2b32cd0() {
   return (neuron0x2b0f310()*-0.259656);
}

double NNfunction-NN_6_8::synapse0x2b32d10() {
   return (neuron0x2b0fce0()*-0.0837167);
}

double NNfunction-NN_6_8::synapse0x2b32d50() {
   return (neuron0x2b106b0()*-0.294411);
}

double NNfunction-NN_6_8::synapse0x2b327e0() {
   return (neuron0x2b124c0()*1.56874);
}

double NNfunction-NN_6_8::synapse0x2b32820() {
   return (neuron0x2b127a0()*0.950515);
}

double NNfunction-NN_6_8::synapse0x2b32ea0() {
   return (neuron0x2b13170()*0.93163);
}

double NNfunction-NN_6_8::synapse0x2b32ee0() {
   return (neuron0x2b13b40()*-0.273382);
}

double NNfunction-NN_6_8::synapse0x2b32f20() {
   return (neuron0x2b14510()*-0.590822);
}

double NNfunction-NN_6_8::synapse0x2b32f60() {
   return (neuron0x2b14ee0()*-0.83351);
}

double NNfunction-NN_6_8::synapse0x2b32fa0() {
   return (neuron0x2b0da30()*-0.449682);
}

double NNfunction-NN_6_8::synapse0x2b32fe0() {
   return (neuron0x2b0e400()*-0.435575);
}

double NNfunction-NN_6_8::synapse0x2b33020() {
   return (neuron0x2b17c70()*0.557488);
}

double NNfunction-NN_6_8::synapse0x2b33060() {
   return (neuron0x2b18640()*-1.25697);
}

double NNfunction-NN_6_8::synapse0x2b330a0() {
   return (neuron0x2b19010()*-0.555041);
}

double NNfunction-NN_6_8::synapse0x2b330e0() {
   return (neuron0x2b199e0()*0.0667575);
}

double NNfunction-NN_6_8::synapse0x2b33120() {
   return (neuron0x2b1a3b0()*-1.02534);
}

double NNfunction-NN_6_8::synapse0x2b33160() {
   return (neuron0x2b1ad80()*-1.04147);
}

double NNfunction-NN_6_8::synapse0x2b331a0() {
   return (neuron0x2b1b750()*-0.0693266);
}

double NNfunction-NN_6_8::synapse0x2b331e0() {
   return (neuron0x2b1c120()*0.120612);
}

double NNfunction-NN_6_8::synapse0x2b32d90() {
   return (neuron0x2b121b0()*-0.435178);
}

double NNfunction-NN_6_8::synapse0x2b32dd0() {
   return (neuron0x2b1ed00()*-0.107765);
}

double NNfunction-NN_6_8::synapse0x2b32e10() {
   return (neuron0x2b1f6d0()*0.34091);
}

double NNfunction-NN_6_8::synapse0x2b32e50() {
   return (neuron0x2b200a0()*0.108995);
}

double NNfunction-NN_6_8::synapse0x2b33430() {
   return (neuron0x2b20a70()*-0.32499);
}

double NNfunction-NN_6_8::synapse0x2b33470() {
   return (neuron0x2b21440()*0.519584);
}

double NNfunction-NN_6_8::synapse0x2b334b0() {
   return (neuron0x2b21e10()*-0.156719);
}

double NNfunction-NN_6_8::synapse0x2b334f0() {
   return (neuron0x2b227e0()*-0.591628);
}

double NNfunction-NN_6_8::synapse0x2b33530() {
   return (neuron0x2b231b0()*-0.61193);
}

double NNfunction-NN_6_8::synapse0x2b33570() {
   return (neuron0x2b23d90()*0.0189958);
}

double NNfunction-NN_6_8::synapse0x2b335b0() {
   return (neuron0x2b24760()*0.393306);
}

double NNfunction-NN_6_8::synapse0x2b335f0() {
   return (neuron0x2b155e0()*-1.88677);
}

double NNfunction-NN_6_8::synapse0x2b33630() {
   return (neuron0x2b15fb0()*0.198286);
}

double NNfunction-NN_6_8::synapse0x2b33670() {
   return (neuron0x2b16980()*-1.20023);
}

double NNfunction-NN_6_8::synapse0x2b336b0() {
   return (neuron0x2b28fc0()*0.138686);
}

double NNfunction-NN_6_8::synapse0x2b336f0() {
   return (neuron0x2b29870()*-1.09671);
}

double NNfunction-NN_6_8::synapse0x2b33730() {
   return (neuron0x2b2a240()*-0.447842);
}

double NNfunction-NN_6_8::synapse0x2b33770() {
   return (neuron0x2b2ac10()*0.0355125);
}

double NNfunction-NN_6_8::synapse0x2b33af0() {
   return (neuron0x2b06b90()*0.105449);
}

double NNfunction-NN_6_8::synapse0x2b33b30() {
   return (neuron0x2b074a0()*0.31786);
}

double NNfunction-NN_6_8::synapse0x2b33b70() {
   return (neuron0x2b07f80()*0.299326);
}

double NNfunction-NN_6_8::synapse0x2b33bb0() {
   return (neuron0x28c1810()*0.313834);
}

double NNfunction-NN_6_8::synapse0x2b33bf0() {
   return (neuron0x2b08da0()*0.907917);
}

double NNfunction-NN_6_8::synapse0x2b33c30() {
   return (neuron0x2b09770()*0.033717);
}

double NNfunction-NN_6_8::synapse0x2b33c70() {
   return (neuron0x2b0a540()*-0.673956);
}

double NNfunction-NN_6_8::synapse0x2b33cb0() {
   return (neuron0x2b0af10()*-0.157179);
}

double NNfunction-NN_6_8::synapse0x2b33cf0() {
   return (neuron0x2b0b8e0()*0.21171);
}

double NNfunction-NN_6_8::synapse0x2b33d30() {
   return (neuron0x2b0c3c0()*0.842121);
}

double NNfunction-NN_6_8::synapse0x2b33d70() {
   return (neuron0x2b0cd90()*1.41403);
}

double NNfunction-NN_6_8::synapse0x2b33db0() {
   return (neuron0x2b09e70()*0.0767725);
}

double NNfunction-NN_6_8::synapse0x2b33df0() {
   return (neuron0x2b0e940()*1.66113);
}

double NNfunction-NN_6_8::synapse0x2b33e30() {
   return (neuron0x2b0f310()*0.0161693);
}

double NNfunction-NN_6_8::synapse0x2b33e70() {
   return (neuron0x2b0fce0()*-0.465882);
}

double NNfunction-NN_6_8::synapse0x2b33eb0() {
   return (neuron0x2b106b0()*-1.65685);
}

double NNfunction-NN_6_8::synapse0x2b33940() {
   return (neuron0x2b124c0()*0.594409);
}

double NNfunction-NN_6_8::synapse0x2b33980() {
   return (neuron0x2b127a0()*-0.389761);
}

double NNfunction-NN_6_8::synapse0x2b34000() {
   return (neuron0x2b13170()*1.25192);
}

double NNfunction-NN_6_8::synapse0x2b34040() {
   return (neuron0x2b13b40()*0.0757367);
}

double NNfunction-NN_6_8::synapse0x2b34080() {
   return (neuron0x2b14510()*-1.04943);
}

double NNfunction-NN_6_8::synapse0x2b340c0() {
   return (neuron0x2b14ee0()*0.167215);
}

double NNfunction-NN_6_8::synapse0x2b34100() {
   return (neuron0x2b0da30()*0.0364948);
}

double NNfunction-NN_6_8::synapse0x2b34140() {
   return (neuron0x2b0e400()*0.0862123);
}

double NNfunction-NN_6_8::synapse0x2b34180() {
   return (neuron0x2b17c70()*-0.631238);
}

double NNfunction-NN_6_8::synapse0x2b341c0() {
   return (neuron0x2b18640()*-0.0329009);
}

double NNfunction-NN_6_8::synapse0x2b34200() {
   return (neuron0x2b19010()*0.859354);
}

double NNfunction-NN_6_8::synapse0x2b34240() {
   return (neuron0x2b199e0()*0.00430852);
}

double NNfunction-NN_6_8::synapse0x2b34280() {
   return (neuron0x2b1a3b0()*-0.123241);
}

double NNfunction-NN_6_8::synapse0x2b342c0() {
   return (neuron0x2b1ad80()*-0.705509);
}

double NNfunction-NN_6_8::synapse0x2b34300() {
   return (neuron0x2b1b750()*-0.0181357);
}

double NNfunction-NN_6_8::synapse0x2b34340() {
   return (neuron0x2b1c120()*-0.0965035);
}

double NNfunction-NN_6_8::synapse0x2b33ef0() {
   return (neuron0x2b121b0()*-0.134864);
}

double NNfunction-NN_6_8::synapse0x2b33f30() {
   return (neuron0x2b1ed00()*0.379234);
}

double NNfunction-NN_6_8::synapse0x2b33f70() {
   return (neuron0x2b1f6d0()*-1.27488);
}

double NNfunction-NN_6_8::synapse0x2b33fb0() {
   return (neuron0x2b200a0()*0.479625);
}

double NNfunction-NN_6_8::synapse0x2b34590() {
   return (neuron0x2b20a70()*-0.119642);
}

double NNfunction-NN_6_8::synapse0x2b345d0() {
   return (neuron0x2b21440()*1.38209);
}

double NNfunction-NN_6_8::synapse0x2b34610() {
   return (neuron0x2b21e10()*0.473092);
}

double NNfunction-NN_6_8::synapse0x2b34650() {
   return (neuron0x2b227e0()*0.0340184);
}

double NNfunction-NN_6_8::synapse0x2b34690() {
   return (neuron0x2b231b0()*0.759795);
}

double NNfunction-NN_6_8::synapse0x2b346d0() {
   return (neuron0x2b23d90()*-0.0104094);
}

double NNfunction-NN_6_8::synapse0x2b34710() {
   return (neuron0x2b24760()*-0.452457);
}

double NNfunction-NN_6_8::synapse0x2b34750() {
   return (neuron0x2b155e0()*-0.565908);
}

double NNfunction-NN_6_8::synapse0x2b34790() {
   return (neuron0x2b15fb0()*0.0475257);
}

double NNfunction-NN_6_8::synapse0x2b347d0() {
   return (neuron0x2b16980()*-0.453115);
}

double NNfunction-NN_6_8::synapse0x2b34810() {
   return (neuron0x2b28fc0()*-0.614578);
}

double NNfunction-NN_6_8::synapse0x2b34850() {
   return (neuron0x2b29870()*-0.461415);
}

double NNfunction-NN_6_8::synapse0x2b34890() {
   return (neuron0x2b2a240()*-0.869033);
}

double NNfunction-NN_6_8::synapse0x2b348d0() {
   return (neuron0x2b2ac10()*-0.0468101);
}

double NNfunction-NN_6_8::synapse0x2b34c50() {
   return (neuron0x2b06b90()*-0.0596039);
}

double NNfunction-NN_6_8::synapse0x2b34c90() {
   return (neuron0x2b074a0()*0.12143);
}

double NNfunction-NN_6_8::synapse0x2b34cd0() {
   return (neuron0x2b07f80()*0.376715);
}

double NNfunction-NN_6_8::synapse0x2b34d10() {
   return (neuron0x28c1810()*0.102506);
}

double NNfunction-NN_6_8::synapse0x2b34d50() {
   return (neuron0x2b08da0()*1.12225);
}

double NNfunction-NN_6_8::synapse0x2b34d90() {
   return (neuron0x2b09770()*0.0377761);
}

double NNfunction-NN_6_8::synapse0x2b34dd0() {
   return (neuron0x2b0a540()*0.806433);
}

double NNfunction-NN_6_8::synapse0x2b34e10() {
   return (neuron0x2b0af10()*-0.489156);
}

double NNfunction-NN_6_8::synapse0x2b34e50() {
   return (neuron0x2b0b8e0()*0.225962);
}

double NNfunction-NN_6_8::synapse0x2b34e90() {
   return (neuron0x2b0c3c0()*1.00501);
}

double NNfunction-NN_6_8::synapse0x2b34ed0() {
   return (neuron0x2b0cd90()*-0.178223);
}

double NNfunction-NN_6_8::synapse0x2b34f10() {
   return (neuron0x2b09e70()*0.0691806);
}

double NNfunction-NN_6_8::synapse0x2b34f50() {
   return (neuron0x2b0e940()*2.85359);
}

double NNfunction-NN_6_8::synapse0x2b34f90() {
   return (neuron0x2b0f310()*0.144592);
}

double NNfunction-NN_6_8::synapse0x2b34fd0() {
   return (neuron0x2b0fce0()*0.315427);
}

double NNfunction-NN_6_8::synapse0x2b35010() {
   return (neuron0x2b106b0()*1.37314);
}

double NNfunction-NN_6_8::synapse0x2b34aa0() {
   return (neuron0x2b124c0()*-0.902336);
}

double NNfunction-NN_6_8::synapse0x2b34ae0() {
   return (neuron0x2b127a0()*-0.0842308);
}

double NNfunction-NN_6_8::synapse0x2b35160() {
   return (neuron0x2b13170()*-0.456189);
}

double NNfunction-NN_6_8::synapse0x2b351a0() {
   return (neuron0x2b13b40()*0.112523);
}

double NNfunction-NN_6_8::synapse0x2b351e0() {
   return (neuron0x2b14510()*1.6629);
}

double NNfunction-NN_6_8::synapse0x2b35220() {
   return (neuron0x2b14ee0()*-0.176669);
}

double NNfunction-NN_6_8::synapse0x2b35260() {
   return (neuron0x2b0da30()*0.460097);
}

double NNfunction-NN_6_8::synapse0x2b352a0() {
   return (neuron0x2b0e400()*0.388587);
}

double NNfunction-NN_6_8::synapse0x2b352e0() {
   return (neuron0x2b17c70()*0.812496);
}

double NNfunction-NN_6_8::synapse0x2b35320() {
   return (neuron0x2b18640()*-0.573837);
}

double NNfunction-NN_6_8::synapse0x2b35360() {
   return (neuron0x2b19010()*1.40687);
}

double NNfunction-NN_6_8::synapse0x2b353a0() {
   return (neuron0x2b199e0()*0.0175762);
}

double NNfunction-NN_6_8::synapse0x2b353e0() {
   return (neuron0x2b1a3b0()*-2.33856);
}

double NNfunction-NN_6_8::synapse0x2b35420() {
   return (neuron0x2b1ad80()*1.72361);
}

double NNfunction-NN_6_8::synapse0x2b35460() {
   return (neuron0x2b1b750()*-0.019105);
}

double NNfunction-NN_6_8::synapse0x2b354a0() {
   return (neuron0x2b1c120()*0.0419713);
}

double NNfunction-NN_6_8::synapse0x2b35050() {
   return (neuron0x2b121b0()*0.301503);
}

double NNfunction-NN_6_8::synapse0x2b35090() {
   return (neuron0x2b1ed00()*0.806285);
}

double NNfunction-NN_6_8::synapse0x2b350d0() {
   return (neuron0x2b1f6d0()*0.174372);
}

double NNfunction-NN_6_8::synapse0x2b35110() {
   return (neuron0x2b200a0()*-0.318248);
}

double NNfunction-NN_6_8::synapse0x2b356f0() {
   return (neuron0x2b20a70()*-0.041643);
}

double NNfunction-NN_6_8::synapse0x2b35730() {
   return (neuron0x2b21440()*1.87853);
}

double NNfunction-NN_6_8::synapse0x2b35770() {
   return (neuron0x2b21e10()*-0.437078);
}

double NNfunction-NN_6_8::synapse0x2b357b0() {
   return (neuron0x2b227e0()*-0.378003);
}

double NNfunction-NN_6_8::synapse0x2b357f0() {
   return (neuron0x2b231b0()*-2.1382);
}

double NNfunction-NN_6_8::synapse0x2b35830() {
   return (neuron0x2b23d90()*-0.0268859);
}

double NNfunction-NN_6_8::synapse0x2b35870() {
   return (neuron0x2b24760()*-0.156961);
}

double NNfunction-NN_6_8::synapse0x2b358b0() {
   return (neuron0x2b155e0()*-1.36568);
}

double NNfunction-NN_6_8::synapse0x2b358f0() {
   return (neuron0x2b15fb0()*-0.000514558);
}

double NNfunction-NN_6_8::synapse0x2b35930() {
   return (neuron0x2b16980()*0.443865);
}

double NNfunction-NN_6_8::synapse0x2b35970() {
   return (neuron0x2b28fc0()*-1.88578);
}

double NNfunction-NN_6_8::synapse0x2b359b0() {
   return (neuron0x2b29870()*0.00881132);
}

double NNfunction-NN_6_8::synapse0x2b359f0() {
   return (neuron0x2b2a240()*-0.319139);
}

double NNfunction-NN_6_8::synapse0x2b35a30() {
   return (neuron0x2b2ac10()*-0.0534501);
}

double NNfunction-NN_6_8::synapse0x2b06b50() {
   return (neuron0x2b31e10()*0.353447);
}

double NNfunction-NN_6_8::synapse0x2b35c90() {
   return (neuron0x2b321b0()*-5.69896);
}

double NNfunction-NN_6_8::synapse0x2b35cd0() {
   return (neuron0x2b32650()*-3.05347);
}

double NNfunction-NN_6_8::synapse0x2b35d10() {
   return (neuron0x2b337b0()*6.20891);
}

double NNfunction-NN_6_8::synapse0x2b35d50() {
   return (neuron0x2b34910()*-4.80811);
}

