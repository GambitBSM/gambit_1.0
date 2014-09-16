#include "NNfunction_nn_chi4_chi4.h"
#include <cmath>

double NNfunction_nn_chi4_chi4::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 25.2896)/14.9211;
   input1 = (in1 - 20.83)/187.591;
   input2 = (in2 - 198.657)/176.104;
   input3 = (in3 - 108.502)/698.945;
   input4 = (in4 - 898.14)/821.366;
   input5 = (in5 - 889.215)/876.874;
   input6 = (in6 - 891.632)/875.656;
   input7 = (in7 - 883.884)/854.517;
   input8 = (in8 - 888.761)/892.693;
   input9 = (in9 - 876.307)/882.671;
   input10 = (in10 - 877.656)/863.008;
   input11 = (in11 - 673.005)/725.942;
   input12 = (in12 - 770.215)/796.532;
   input13 = (in13 - 566.141)/521.238;
   input14 = (in14 - 716.377)/733.519;
   input15 = (in15 - 766.155)/757.06;
   input16 = (in16 - 543.538)/513.311;
   input17 = (in17 - 779.521)/809.8;
   input18 = (in18 - 783.318)/815.101;
   input19 = (in19 - 765.547)/771.76;
   input20 = (in20 - -85.0297)/416.877;
   input21 = (in21 - -105.141)/925.519;
   input22 = (in22 - 10.638)/965.578;
   input23 = (in23 - 4.46257)/163.062;
   switch(index) {
     case 0:
         return neuron0x2223700();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi4_chi4::Value(int index, double* input) {
   input0 = (input[0] - 25.2896)/14.9211;
   input1 = (input[1] - 20.83)/187.591;
   input2 = (input[2] - 198.657)/176.104;
   input3 = (input[3] - 108.502)/698.945;
   input4 = (input[4] - 898.14)/821.366;
   input5 = (input[5] - 889.215)/876.874;
   input6 = (input[6] - 891.632)/875.656;
   input7 = (input[7] - 883.884)/854.517;
   input8 = (input[8] - 888.761)/892.693;
   input9 = (input[9] - 876.307)/882.671;
   input10 = (input[10] - 877.656)/863.008;
   input11 = (input[11] - 673.005)/725.942;
   input12 = (input[12] - 770.215)/796.532;
   input13 = (input[13] - 566.141)/521.238;
   input14 = (input[14] - 716.377)/733.519;
   input15 = (input[15] - 766.155)/757.06;
   input16 = (input[16] - 543.538)/513.311;
   input17 = (input[17] - 779.521)/809.8;
   input18 = (input[18] - 783.318)/815.101;
   input19 = (input[19] - 765.547)/771.76;
   input20 = (input[20] - -85.0297)/416.877;
   input21 = (input[21] - -105.141)/925.519;
   input22 = (input[22] - 10.638)/965.578;
   input23 = (input[23] - 4.46257)/163.062;
   switch(index) {
     case 0:
         return neuron0x2223700();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi4_chi4::neuron0x21ef8c0() {
   return input0;
}

double NNfunction_nn_chi4_chi4::neuron0x21efb70() {
   return input1;
}

double NNfunction_nn_chi4_chi4::neuron0x21efeb0() {
   return input2;
}

double NNfunction_nn_chi4_chi4::neuron0x21f01f0() {
   return input3;
}

double NNfunction_nn_chi4_chi4::neuron0x21f0530() {
   return input4;
}

double NNfunction_nn_chi4_chi4::neuron0x21f0870() {
   return input5;
}

double NNfunction_nn_chi4_chi4::neuron0x21f0bb0() {
   return input6;
}

double NNfunction_nn_chi4_chi4::neuron0x21f0ef0() {
   return input7;
}

double NNfunction_nn_chi4_chi4::neuron0x21f1230() {
   return input8;
}

double NNfunction_nn_chi4_chi4::neuron0x21f1570() {
   return input9;
}

double NNfunction_nn_chi4_chi4::neuron0x21f18b0() {
   return input10;
}

double NNfunction_nn_chi4_chi4::neuron0x21f1bf0() {
   return input11;
}

double NNfunction_nn_chi4_chi4::neuron0x21f1f30() {
   return input12;
}

double NNfunction_nn_chi4_chi4::neuron0x21f2270() {
   return input13;
}

double NNfunction_nn_chi4_chi4::neuron0x21f25b0() {
   return input14;
}

double NNfunction_nn_chi4_chi4::neuron0x21f28f0() {
   return input15;
}

double NNfunction_nn_chi4_chi4::neuron0x21f2c30() {
   return input16;
}

double NNfunction_nn_chi4_chi4::neuron0x21f3190() {
   return input17;
}

double NNfunction_nn_chi4_chi4::neuron0x21f33b0() {
   return input18;
}

double NNfunction_nn_chi4_chi4::neuron0x21f36f0() {
   return input19;
}

double NNfunction_nn_chi4_chi4::neuron0x21f3a30() {
   return input20;
}

double NNfunction_nn_chi4_chi4::neuron0x21f3d70() {
   return input21;
}

double NNfunction_nn_chi4_chi4::neuron0x21f40b0() {
   return input22;
}

double NNfunction_nn_chi4_chi4::neuron0x21f43f0() {
   return input23;
}

double NNfunction_nn_chi4_chi4::input0x21f4860() {
   double input = -0.614917;
   input += synapse0x21ef840();
   input += synapse0x21ef880();
   input += synapse0x21f4b10();
   input += synapse0x21f4b50();
   input += synapse0x21f4b90();
   input += synapse0x21f4bd0();
   input += synapse0x21f4c10();
   input += synapse0x21f4c50();
   input += synapse0x21f4c90();
   input += synapse0x21f4cd0();
   input += synapse0x21f4d10();
   input += synapse0x21f4d50();
   input += synapse0x21f4d90();
   input += synapse0x21f4dd0();
   input += synapse0x21f4e10();
   input += synapse0x21f4e50();
   input += synapse0x21ef7b0();
   input += synapse0x21ef7f0();
   input += synapse0x1faa9b0();
   input += synapse0x1faa9f0();
   input += synapse0x21f50b0();
   input += synapse0x21f50f0();
   input += synapse0x21f5130();
   input += synapse0x21f5170();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x21f4860() {
   double input = input0x21f4860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x21f51b0() {
   double input = 0.222296;
   input += synapse0x21f54f0();
   input += synapse0x21f5530();
   input += synapse0x21f5570();
   input += synapse0x21f55b0();
   input += synapse0x21f55f0();
   input += synapse0x21f5630();
   input += synapse0x21f5670();
   input += synapse0x21f56b0();
   input += synapse0x21f56f0();
   input += synapse0x21f4fa0();
   input += synapse0x21f4fe0();
   input += synapse0x21f5020();
   input += synapse0x21f5060();
   input += synapse0x21f5940();
   input += synapse0x21f5980();
   input += synapse0x21f59c0();
   input += synapse0x21f5340();
   input += synapse0x21f5380();
   input += synapse0x21f5b10();
   input += synapse0x21f5b50();
   input += synapse0x21f5b90();
   input += synapse0x21f5bd0();
   input += synapse0x21f5c10();
   input += synapse0x21f5c50();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x21f51b0() {
   double input = input0x21f51b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x21f5c90() {
   double input = -0.855608;
   input += synapse0x21f5fd0();
   input += synapse0x21f6010();
   input += synapse0x21f6050();
   input += synapse0x21f6090();
   input += synapse0x21f60d0();
   input += synapse0x21f6110();
   input += synapse0x21f6150();
   input += synapse0x21f6190();
   input += synapse0x21f61d0();
   input += synapse0x21f6210();
   input += synapse0x21f6250();
   input += synapse0x21f6290();
   input += synapse0x21f62d0();
   input += synapse0x21f6310();
   input += synapse0x21f6350();
   input += synapse0x21f6390();
   input += synapse0x21f5e20();
   input += synapse0x21f5e60();
   input += synapse0x21de930();
   input += synapse0x1fb8880();
   input += synapse0x1fb88c0();
   input += synapse0x20d3dd0();
   input += synapse0x20d3e10();
   input += synapse0x21ef620();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x21f5c90() {
   double input = input0x21f5c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x1fb8fe0() {
   double input = -0.838594;
   input += synapse0x1fb9170();
   input += synapse0x21f5850();
   input += synapse0x21f5890();
   input += synapse0x21f58d0();
   input += synapse0x21f64e0();
   input += synapse0x21f6520();
   input += synapse0x21f6560();
   input += synapse0x21f65a0();
   input += synapse0x21f65e0();
   input += synapse0x21f6620();
   input += synapse0x21f6660();
   input += synapse0x21f66a0();
   input += synapse0x21f66e0();
   input += synapse0x21f6720();
   input += synapse0x21f6760();
   input += synapse0x21f67a0();
   input += synapse0x21ef660();
   input += synapse0x21ef6a0();
   input += synapse0x21ef6e0();
   input += synapse0x21f68f0();
   input += synapse0x21f6930();
   input += synapse0x21f6970();
   input += synapse0x21f69b0();
   input += synapse0x21f69f0();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x1fb8fe0() {
   double input = input0x1fb8fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x21f6a30() {
   double input = 0.856954;
   input += synapse0x21f6d70();
   input += synapse0x21f6db0();
   input += synapse0x21f6df0();
   input += synapse0x21f6e30();
   input += synapse0x21f6e70();
   input += synapse0x21f6eb0();
   input += synapse0x21f6ef0();
   input += synapse0x21f6f30();
   input += synapse0x21f6f70();
   input += synapse0x21f6fb0();
   input += synapse0x21f6ff0();
   input += synapse0x21f7030();
   input += synapse0x21f7070();
   input += synapse0x21f70b0();
   input += synapse0x21f70f0();
   input += synapse0x21f7130();
   input += synapse0x21f6bc0();
   input += synapse0x21f6c00();
   input += synapse0x21f7280();
   input += synapse0x21f72c0();
   input += synapse0x21f7300();
   input += synapse0x21f7340();
   input += synapse0x21f7380();
   input += synapse0x21f73c0();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x21f6a30() {
   double input = input0x21f6a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x21f7400() {
   double input = 1.2231;
   input += synapse0x21f7740();
   input += synapse0x21f7780();
   input += synapse0x21f77c0();
   input += synapse0x21f7800();
   input += synapse0x21f7840();
   input += synapse0x21f7880();
   input += synapse0x21f78c0();
   input += synapse0x21f7900();
   input += synapse0x21f7940();
   input += synapse0x1fb8bd0();
   input += synapse0x1fb8c10();
   input += synapse0x1fb8c50();
   input += synapse0x1fb8c90();
   input += synapse0x1fb8cd0();
   input += synapse0x1fb8d10();
   input += synapse0x1fb8d50();
   input += synapse0x21f7590();
   input += synapse0x21f75d0();
   input += synapse0x1fb8ea0();
   input += synapse0x1fb8ee0();
   input += synapse0x1fb8f20();
   input += synapse0x1fb8f60();
   input += synapse0x1fb8fa0();
   input += synapse0x21f8190();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x21f7400() {
   double input = input0x21f7400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x21f81d0() {
   double input = 0.919354;
   input += synapse0x21f8510();
   input += synapse0x21f8550();
   input += synapse0x21f8590();
   input += synapse0x21f85d0();
   input += synapse0x21f8610();
   input += synapse0x21f8650();
   input += synapse0x21f8690();
   input += synapse0x21f86d0();
   input += synapse0x21f8710();
   input += synapse0x21f8750();
   input += synapse0x21f8790();
   input += synapse0x21f87d0();
   input += synapse0x21f8810();
   input += synapse0x21f8850();
   input += synapse0x21f8890();
   input += synapse0x21f88d0();
   input += synapse0x21f8360();
   input += synapse0x21f83a0();
   input += synapse0x21f8a20();
   input += synapse0x21f8a60();
   input += synapse0x21f8aa0();
   input += synapse0x21f8ae0();
   input += synapse0x21f8b20();
   input += synapse0x21f8b60();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x21f81d0() {
   double input = input0x21f81d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x21f8ba0() {
   double input = -1.00488;
   input += synapse0x21f8ee0();
   input += synapse0x21f8f20();
   input += synapse0x21f8f60();
   input += synapse0x21f8fa0();
   input += synapse0x21f8fe0();
   input += synapse0x21f9020();
   input += synapse0x21f9060();
   input += synapse0x21f90a0();
   input += synapse0x21f90e0();
   input += synapse0x21f9120();
   input += synapse0x21f9160();
   input += synapse0x21f91a0();
   input += synapse0x21f91e0();
   input += synapse0x21f9220();
   input += synapse0x21f9260();
   input += synapse0x21f92a0();
   input += synapse0x21f8d30();
   input += synapse0x21f8d70();
   input += synapse0x21f93f0();
   input += synapse0x21f9430();
   input += synapse0x21f9470();
   input += synapse0x21f94b0();
   input += synapse0x21f94f0();
   input += synapse0x21f9530();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x21f8ba0() {
   double input = input0x21f8ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x21f9570() {
   double input = 2.27314;
   input += synapse0x21f3080();
   input += synapse0x21f30c0();
   input += synapse0x21f3100();
   input += synapse0x21f3140();
   input += synapse0x21f9ac0();
   input += synapse0x21f9b00();
   input += synapse0x21f9b40();
   input += synapse0x21f9b80();
   input += synapse0x21f9bc0();
   input += synapse0x21f9c00();
   input += synapse0x21f9c40();
   input += synapse0x21f9c80();
   input += synapse0x21f9cc0();
   input += synapse0x21f9d00();
   input += synapse0x21f9d40();
   input += synapse0x21f9d80();
   input += synapse0x21f9700();
   input += synapse0x21f9740();
   input += synapse0x21f9ed0();
   input += synapse0x21f9f10();
   input += synapse0x21f9f50();
   input += synapse0x21f9f90();
   input += synapse0x21f9fd0();
   input += synapse0x21fa010();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x21f9570() {
   double input = input0x21f9570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x21fa050() {
   double input = 0.159537;
   input += synapse0x21fa390();
   input += synapse0x21fa3d0();
   input += synapse0x21fa410();
   input += synapse0x21fa450();
   input += synapse0x21fa490();
   input += synapse0x21fa4d0();
   input += synapse0x21fa510();
   input += synapse0x21fa550();
   input += synapse0x21fa590();
   input += synapse0x21fa5d0();
   input += synapse0x21fa610();
   input += synapse0x21fa650();
   input += synapse0x21fa690();
   input += synapse0x21fa6d0();
   input += synapse0x21fa710();
   input += synapse0x21fa750();
   input += synapse0x21fa1e0();
   input += synapse0x21fa220();
   input += synapse0x21fa8a0();
   input += synapse0x21fa8e0();
   input += synapse0x21fa920();
   input += synapse0x21fa960();
   input += synapse0x21fa9a0();
   input += synapse0x21fa9e0();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x21fa050() {
   double input = input0x21fa050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x21faa20() {
   double input = -0.643805;
   input += synapse0x21fad60();
   input += synapse0x21fada0();
   input += synapse0x21fade0();
   input += synapse0x21fae20();
   input += synapse0x21fae60();
   input += synapse0x21faea0();
   input += synapse0x21faee0();
   input += synapse0x21faf20();
   input += synapse0x21faf60();
   input += synapse0x21fafa0();
   input += synapse0x21fafe0();
   input += synapse0x21fb020();
   input += synapse0x21fb060();
   input += synapse0x21fb0a0();
   input += synapse0x21fb0e0();
   input += synapse0x21fb120();
   input += synapse0x21fabb0();
   input += synapse0x21fabf0();
   input += synapse0x21f7980();
   input += synapse0x21f79c0();
   input += synapse0x21f7a00();
   input += synapse0x21f7a40();
   input += synapse0x21f7a80();
   input += synapse0x21f7ac0();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x21faa20() {
   double input = input0x21faa20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x21f7b00() {
   double input = -1.1519;
   input += synapse0x21f7e40();
   input += synapse0x21f7e80();
   input += synapse0x21f7ec0();
   input += synapse0x21f7f00();
   input += synapse0x21f7f40();
   input += synapse0x21f7f80();
   input += synapse0x21f7fc0();
   input += synapse0x21f8000();
   input += synapse0x21f8040();
   input += synapse0x21f8080();
   input += synapse0x21f80c0();
   input += synapse0x21f8100();
   input += synapse0x21f8140();
   input += synapse0x21fc280();
   input += synapse0x21fc2c0();
   input += synapse0x21fc300();
   input += synapse0x21f7c90();
   input += synapse0x21f7cd0();
   input += synapse0x21fc450();
   input += synapse0x21fc490();
   input += synapse0x21fc4d0();
   input += synapse0x21fc510();
   input += synapse0x21fc550();
   input += synapse0x21fc590();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x21f7b00() {
   double input = input0x21f7b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x21fc5d0() {
   double input = 1.35047;
   input += synapse0x21fc910();
   input += synapse0x21fc950();
   input += synapse0x21fc990();
   input += synapse0x21fc9d0();
   input += synapse0x21fca10();
   input += synapse0x21fca50();
   input += synapse0x21fca90();
   input += synapse0x21fcad0();
   input += synapse0x21fcb10();
   input += synapse0x21fcb50();
   input += synapse0x21fcb90();
   input += synapse0x21fcbd0();
   input += synapse0x21fcc10();
   input += synapse0x21fcc50();
   input += synapse0x21fcc90();
   input += synapse0x21fccd0();
   input += synapse0x21fc760();
   input += synapse0x21fc7a0();
   input += synapse0x21fce20();
   input += synapse0x21fce60();
   input += synapse0x21fcea0();
   input += synapse0x21fcee0();
   input += synapse0x21fcf20();
   input += synapse0x21fcf60();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x21fc5d0() {
   double input = input0x21fc5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x21fcfa0() {
   double input = -1.14753;
   input += synapse0x21fd2e0();
   input += synapse0x21fd320();
   input += synapse0x21fd360();
   input += synapse0x21fd3a0();
   input += synapse0x21fd3e0();
   input += synapse0x21fd420();
   input += synapse0x21fd460();
   input += synapse0x21fd4a0();
   input += synapse0x21fd4e0();
   input += synapse0x21fd520();
   input += synapse0x21fd560();
   input += synapse0x21fd5a0();
   input += synapse0x21fd5e0();
   input += synapse0x21fd620();
   input += synapse0x21fd660();
   input += synapse0x21fd6a0();
   input += synapse0x21fd130();
   input += synapse0x21fd170();
   input += synapse0x21fd7f0();
   input += synapse0x21fd830();
   input += synapse0x21fd870();
   input += synapse0x21fd8b0();
   input += synapse0x21fd8f0();
   input += synapse0x21fd930();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x21fcfa0() {
   double input = input0x21fcfa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x21fd970() {
   double input = -0.120134;
   input += synapse0x21fdcb0();
   input += synapse0x21fdcf0();
   input += synapse0x21fdd30();
   input += synapse0x21fdd70();
   input += synapse0x21fddb0();
   input += synapse0x21fddf0();
   input += synapse0x21fde30();
   input += synapse0x21fde70();
   input += synapse0x21fdeb0();
   input += synapse0x21fdef0();
   input += synapse0x21fdf30();
   input += synapse0x21fdf70();
   input += synapse0x21fdfb0();
   input += synapse0x21fdff0();
   input += synapse0x21fe030();
   input += synapse0x21fe070();
   input += synapse0x21fdb00();
   input += synapse0x21fdb40();
   input += synapse0x21fe1c0();
   input += synapse0x21fe200();
   input += synapse0x21fe240();
   input += synapse0x21fe280();
   input += synapse0x21fe2c0();
   input += synapse0x21fe300();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x21fd970() {
   double input = input0x21fd970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x21fe340() {
   double input = -2.4688;
   input += synapse0x21fe680();
   input += synapse0x21efa50();
   input += synapse0x21efa90();
   input += synapse0x21efd90();
   input += synapse0x21efdd0();
   input += synapse0x21f00d0();
   input += synapse0x21f0110();
   input += synapse0x21f0410();
   input += synapse0x21f0450();
   input += synapse0x21f0750();
   input += synapse0x21f0790();
   input += synapse0x21f0a90();
   input += synapse0x21f0ad0();
   input += synapse0x21f0dd0();
   input += synapse0x21f0e10();
   input += synapse0x21f1110();
   input += synapse0x21f1150();
   input += synapse0x21f1450();
   input += synapse0x21f1490();
   input += synapse0x21f1790();
   input += synapse0x21f17d0();
   input += synapse0x21f1ad0();
   input += synapse0x21f1b10();
   input += synapse0x21f1e10();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x21fe340() {
   double input = input0x21fe340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2200150() {
   double input = -0.749214;
   input += synapse0x21f1e50();
   input += synapse0x21f2b10();
   input += synapse0x21f2b50();
   input += synapse0x21fe4d0();
   input += synapse0x21fe510();
   input += synapse0x21f2e50();
   input += synapse0x21f2e90();
   input += synapse0x1faa890();
   input += synapse0x1faa8d0();
   input += synapse0x21f35d0();
   input += synapse0x21f3610();
   input += synapse0x21f3910();
   input += synapse0x21f3950();
   input += synapse0x21f3c50();
   input += synapse0x21f3c90();
   input += synapse0x21f3f90();
   input += synapse0x21f3fd0();
   input += synapse0x21f42d0();
   input += synapse0x21f4310();
   input += synapse0x21f4610();
   input += synapse0x21f4650();
   input += synapse0x21f2150();
   input += synapse0x21f2190();
   input += synapse0x22003f0();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2200150() {
   double input = input0x2200150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2200430() {
   double input = -0.0351614;
   input += synapse0x2200770();
   input += synapse0x22007b0();
   input += synapse0x22007f0();
   input += synapse0x2200830();
   input += synapse0x2200870();
   input += synapse0x22008b0();
   input += synapse0x22008f0();
   input += synapse0x2200930();
   input += synapse0x2200970();
   input += synapse0x22009b0();
   input += synapse0x22009f0();
   input += synapse0x2200a30();
   input += synapse0x2200a70();
   input += synapse0x2200ab0();
   input += synapse0x2200af0();
   input += synapse0x2200b30();
   input += synapse0x22005c0();
   input += synapse0x2200600();
   input += synapse0x2200c80();
   input += synapse0x2200cc0();
   input += synapse0x2200d00();
   input += synapse0x2200d40();
   input += synapse0x2200d80();
   input += synapse0x2200dc0();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2200430() {
   double input = input0x2200430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2200e00() {
   double input = -0.113868;
   input += synapse0x2201140();
   input += synapse0x2201180();
   input += synapse0x22011c0();
   input += synapse0x2201200();
   input += synapse0x2201240();
   input += synapse0x2201280();
   input += synapse0x22012c0();
   input += synapse0x2201300();
   input += synapse0x2201340();
   input += synapse0x2201380();
   input += synapse0x22013c0();
   input += synapse0x2201400();
   input += synapse0x2201440();
   input += synapse0x2201480();
   input += synapse0x22014c0();
   input += synapse0x2201500();
   input += synapse0x2200f90();
   input += synapse0x2200fd0();
   input += synapse0x2201650();
   input += synapse0x2201690();
   input += synapse0x22016d0();
   input += synapse0x2201710();
   input += synapse0x2201750();
   input += synapse0x2201790();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2200e00() {
   double input = input0x2200e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x22017d0() {
   double input = -0.440668;
   input += synapse0x2201b10();
   input += synapse0x2201b50();
   input += synapse0x2201b90();
   input += synapse0x2201bd0();
   input += synapse0x2201c10();
   input += synapse0x2201c50();
   input += synapse0x2201c90();
   input += synapse0x2201cd0();
   input += synapse0x2201d10();
   input += synapse0x2201d50();
   input += synapse0x2201d90();
   input += synapse0x2201dd0();
   input += synapse0x2201e10();
   input += synapse0x2201e50();
   input += synapse0x2201e90();
   input += synapse0x2201ed0();
   input += synapse0x2201960();
   input += synapse0x22019a0();
   input += synapse0x2202020();
   input += synapse0x2202060();
   input += synapse0x22020a0();
   input += synapse0x22020e0();
   input += synapse0x2202120();
   input += synapse0x2202160();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x22017d0() {
   double input = input0x22017d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x22021a0() {
   double input = -0.841912;
   input += synapse0x22024e0();
   input += synapse0x2202520();
   input += synapse0x2202560();
   input += synapse0x22025a0();
   input += synapse0x22025e0();
   input += synapse0x2202620();
   input += synapse0x2202660();
   input += synapse0x22026a0();
   input += synapse0x22026e0();
   input += synapse0x2202720();
   input += synapse0x2202760();
   input += synapse0x22027a0();
   input += synapse0x22027e0();
   input += synapse0x2202820();
   input += synapse0x2202860();
   input += synapse0x22028a0();
   input += synapse0x2202330();
   input += synapse0x2202370();
   input += synapse0x22029f0();
   input += synapse0x2202a30();
   input += synapse0x2202a70();
   input += synapse0x2202ab0();
   input += synapse0x2202af0();
   input += synapse0x2202b30();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x22021a0() {
   double input = input0x22021a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2202b70() {
   double input = 0.510144;
   input += synapse0x2202eb0();
   input += synapse0x2202ef0();
   input += synapse0x2202f30();
   input += synapse0x2202f70();
   input += synapse0x2202fb0();
   input += synapse0x2202ff0();
   input += synapse0x2203030();
   input += synapse0x2203070();
   input += synapse0x22030b0();
   input += synapse0x21fb270();
   input += synapse0x21fb2b0();
   input += synapse0x21fb2f0();
   input += synapse0x21fb330();
   input += synapse0x21fb370();
   input += synapse0x21fb3b0();
   input += synapse0x21fb3f0();
   input += synapse0x2202d00();
   input += synapse0x2202d40();
   input += synapse0x21fb540();
   input += synapse0x21fb580();
   input += synapse0x21fb5c0();
   input += synapse0x21fb600();
   input += synapse0x21fb640();
   input += synapse0x21fb680();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2202b70() {
   double input = input0x2202b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x21fb6c0() {
   double input = -1.98711;
   input += synapse0x21fba00();
   input += synapse0x21fba40();
   input += synapse0x21fba80();
   input += synapse0x21fbac0();
   input += synapse0x21fbb00();
   input += synapse0x21fbb40();
   input += synapse0x21fbb80();
   input += synapse0x21fbbc0();
   input += synapse0x21fbc00();
   input += synapse0x21fbc40();
   input += synapse0x21fbc80();
   input += synapse0x21fbcc0();
   input += synapse0x21fbd00();
   input += synapse0x21fbd40();
   input += synapse0x21fbd80();
   input += synapse0x21fbdc0();
   input += synapse0x21fb850();
   input += synapse0x21fb890();
   input += synapse0x21fbf10();
   input += synapse0x21fbf50();
   input += synapse0x21fbf90();
   input += synapse0x21fbfd0();
   input += synapse0x21fc010();
   input += synapse0x21fc050();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x21fb6c0() {
   double input = input0x21fb6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x21fc090() {
   double input = 11.2161;
   input += synapse0x21fc220();
   input += synapse0x22052b0();
   input += synapse0x22052f0();
   input += synapse0x2205330();
   input += synapse0x2205370();
   input += synapse0x22053b0();
   input += synapse0x22053f0();
   input += synapse0x2205430();
   input += synapse0x2205470();
   input += synapse0x22054b0();
   input += synapse0x22054f0();
   input += synapse0x2205530();
   input += synapse0x2205570();
   input += synapse0x22055b0();
   input += synapse0x22055f0();
   input += synapse0x2205630();
   input += synapse0x2205100();
   input += synapse0x2205140();
   input += synapse0x2205780();
   input += synapse0x22057c0();
   input += synapse0x2205800();
   input += synapse0x2205840();
   input += synapse0x2205880();
   input += synapse0x22058c0();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x21fc090() {
   double input = input0x21fc090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2205900() {
   double input = 2.35633;
   input += synapse0x2205c40();
   input += synapse0x2205c80();
   input += synapse0x2205cc0();
   input += synapse0x2205d00();
   input += synapse0x2205d40();
   input += synapse0x2205d80();
   input += synapse0x2205dc0();
   input += synapse0x2205e00();
   input += synapse0x2205e40();
   input += synapse0x2205e80();
   input += synapse0x2205ec0();
   input += synapse0x2205f00();
   input += synapse0x2205f40();
   input += synapse0x2205f80();
   input += synapse0x2205fc0();
   input += synapse0x2206000();
   input += synapse0x2205a90();
   input += synapse0x2205ad0();
   input += synapse0x2206150();
   input += synapse0x2206190();
   input += synapse0x22061d0();
   input += synapse0x2206210();
   input += synapse0x2206250();
   input += synapse0x2206290();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2205900() {
   double input = input0x2205900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x22062d0() {
   double input = -1.05935;
   input += synapse0x2206610();
   input += synapse0x2206650();
   input += synapse0x2206690();
   input += synapse0x22066d0();
   input += synapse0x2206710();
   input += synapse0x2206750();
   input += synapse0x2206790();
   input += synapse0x22067d0();
   input += synapse0x2206810();
   input += synapse0x2206850();
   input += synapse0x2206890();
   input += synapse0x22068d0();
   input += synapse0x2206910();
   input += synapse0x2206950();
   input += synapse0x2206990();
   input += synapse0x22069d0();
   input += synapse0x2206460();
   input += synapse0x22064a0();
   input += synapse0x2206b20();
   input += synapse0x2206b60();
   input += synapse0x2206ba0();
   input += synapse0x2206be0();
   input += synapse0x2206c20();
   input += synapse0x2206c60();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x22062d0() {
   double input = input0x22062d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2206ca0() {
   double input = -7.30877;
   input += synapse0x2206fe0();
   input += synapse0x2207020();
   input += synapse0x2207060();
   input += synapse0x22070a0();
   input += synapse0x22070e0();
   input += synapse0x2207120();
   input += synapse0x2207160();
   input += synapse0x22071a0();
   input += synapse0x22071e0();
   input += synapse0x2207220();
   input += synapse0x2207260();
   input += synapse0x22072a0();
   input += synapse0x22072e0();
   input += synapse0x2207320();
   input += synapse0x2207360();
   input += synapse0x22073a0();
   input += synapse0x2206e30();
   input += synapse0x2206e70();
   input += synapse0x22074f0();
   input += synapse0x2207530();
   input += synapse0x2207570();
   input += synapse0x22075b0();
   input += synapse0x22075f0();
   input += synapse0x2207630();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2206ca0() {
   double input = input0x2206ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2207670() {
   double input = -0.984504;
   input += synapse0x22079b0();
   input += synapse0x22079f0();
   input += synapse0x2207a30();
   input += synapse0x2207a70();
   input += synapse0x2207ab0();
   input += synapse0x2207af0();
   input += synapse0x2207b30();
   input += synapse0x2207b70();
   input += synapse0x2207bb0();
   input += synapse0x2207bf0();
   input += synapse0x2207c30();
   input += synapse0x2207c70();
   input += synapse0x2207cb0();
   input += synapse0x2207cf0();
   input += synapse0x2207d30();
   input += synapse0x2207d70();
   input += synapse0x2207800();
   input += synapse0x2207840();
   input += synapse0x2207ec0();
   input += synapse0x2207f00();
   input += synapse0x2207f40();
   input += synapse0x2207f80();
   input += synapse0x2207fc0();
   input += synapse0x2208000();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2207670() {
   double input = input0x2207670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2208040() {
   double input = -2.21698;
   input += synapse0x2208380();
   input += synapse0x22083c0();
   input += synapse0x2208400();
   input += synapse0x2208440();
   input += synapse0x2208480();
   input += synapse0x22084c0();
   input += synapse0x2208500();
   input += synapse0x2208540();
   input += synapse0x2208580();
   input += synapse0x22085c0();
   input += synapse0x2208600();
   input += synapse0x2208640();
   input += synapse0x2208680();
   input += synapse0x22086c0();
   input += synapse0x2208700();
   input += synapse0x2208740();
   input += synapse0x22081d0();
   input += synapse0x2208210();
   input += synapse0x2208890();
   input += synapse0x22088d0();
   input += synapse0x2208910();
   input += synapse0x2208950();
   input += synapse0x2208990();
   input += synapse0x22089d0();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2208040() {
   double input = input0x2208040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2208a10() {
   double input = 0.133742;
   input += synapse0x2208d50();
   input += synapse0x2208d90();
   input += synapse0x2208dd0();
   input += synapse0x2208e10();
   input += synapse0x2208e50();
   input += synapse0x2208e90();
   input += synapse0x2208ed0();
   input += synapse0x2208f10();
   input += synapse0x2208f50();
   input += synapse0x2208f90();
   input += synapse0x2208fd0();
   input += synapse0x2209010();
   input += synapse0x2209050();
   input += synapse0x2209090();
   input += synapse0x22090d0();
   input += synapse0x2209110();
   input += synapse0x2208ba0();
   input += synapse0x2208be0();
   input += synapse0x2209260();
   input += synapse0x22092a0();
   input += synapse0x22092e0();
   input += synapse0x2209320();
   input += synapse0x2209360();
   input += synapse0x22093a0();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2208a10() {
   double input = input0x2208a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x22093e0() {
   double input = 2.0681;
   input += synapse0x2209720();
   input += synapse0x2209760();
   input += synapse0x22097a0();
   input += synapse0x22097e0();
   input += synapse0x2209820();
   input += synapse0x2209860();
   input += synapse0x22098a0();
   input += synapse0x22098e0();
   input += synapse0x2209920();
   input += synapse0x2209960();
   input += synapse0x22099a0();
   input += synapse0x22099e0();
   input += synapse0x2209a20();
   input += synapse0x2209a60();
   input += synapse0x2209aa0();
   input += synapse0x2209ae0();
   input += synapse0x2209570();
   input += synapse0x22095b0();
   input += synapse0x2209c30();
   input += synapse0x2209c70();
   input += synapse0x2209cb0();
   input += synapse0x2209cf0();
   input += synapse0x2209d30();
   input += synapse0x2209d70();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x22093e0() {
   double input = input0x22093e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2209db0() {
   double input = 5.17904;
   input += synapse0x220a0f0();
   input += synapse0x21fe6c0();
   input += synapse0x21fe700();
   input += synapse0x21fe740();
   input += synapse0x21fe990();
   input += synapse0x21fe9d0();
   input += synapse0x21fea10();
   input += synapse0x21fec60();
   input += synapse0x21feca0();
   input += synapse0x21feef0();
   input += synapse0x21fef30();
   input += synapse0x21fef70();
   input += synapse0x21ff1c0();
   input += synapse0x21ff200();
   input += synapse0x21ff450();
   input += synapse0x21ff490();
   input += synapse0x2209f40();
   input += synapse0x2209f80();
   input += synapse0x21ff5e0();
   input += synapse0x21ffaf0();
   input += synapse0x21ffb30();
   input += synapse0x21ffb70();
   input += synapse0x21ffdc0();
   input += synapse0x21ffe00();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2209db0() {
   double input = input0x2209db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x21ffe40() {
   double input = -0.23786;
   input += synapse0x21ff6b0();
   input += synapse0x21ff6f0();
   input += synapse0x21ff730();
   input += synapse0x21ff770();
   input += synapse0x22000f0();
   input += synapse0x220c440();
   input += synapse0x220c480();
   input += synapse0x220c4c0();
   input += synapse0x220c500();
   input += synapse0x220c540();
   input += synapse0x220c580();
   input += synapse0x220c5c0();
   input += synapse0x220c600();
   input += synapse0x220c640();
   input += synapse0x220c680();
   input += synapse0x220c6c0();
   input += synapse0x21fffd0();
   input += synapse0x2200010();
   input += synapse0x220c810();
   input += synapse0x220c850();
   input += synapse0x220c890();
   input += synapse0x220c8d0();
   input += synapse0x220c910();
   input += synapse0x220c950();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x21ffe40() {
   double input = input0x21ffe40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x220c990() {
   double input = -5.69907;
   input += synapse0x220ccd0();
   input += synapse0x220cd10();
   input += synapse0x220cd50();
   input += synapse0x220cd90();
   input += synapse0x220cdd0();
   input += synapse0x220ce10();
   input += synapse0x220ce50();
   input += synapse0x220ce90();
   input += synapse0x220ced0();
   input += synapse0x220cf10();
   input += synapse0x220cf50();
   input += synapse0x220cf90();
   input += synapse0x220cfd0();
   input += synapse0x220d010();
   input += synapse0x220d050();
   input += synapse0x220d090();
   input += synapse0x220cb20();
   input += synapse0x220cb60();
   input += synapse0x220d1e0();
   input += synapse0x220d220();
   input += synapse0x220d260();
   input += synapse0x220d2a0();
   input += synapse0x220d2e0();
   input += synapse0x220d320();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x220c990() {
   double input = input0x220c990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x220d360() {
   double input = 2.73637;
   input += synapse0x220d6a0();
   input += synapse0x220d6e0();
   input += synapse0x220d720();
   input += synapse0x220d760();
   input += synapse0x220d7a0();
   input += synapse0x220d7e0();
   input += synapse0x220d820();
   input += synapse0x220d860();
   input += synapse0x220d8a0();
   input += synapse0x220d8e0();
   input += synapse0x220d920();
   input += synapse0x220d960();
   input += synapse0x220d9a0();
   input += synapse0x220d9e0();
   input += synapse0x220da20();
   input += synapse0x220da60();
   input += synapse0x220d4f0();
   input += synapse0x220d530();
   input += synapse0x220dbb0();
   input += synapse0x220dbf0();
   input += synapse0x220dc30();
   input += synapse0x220dc70();
   input += synapse0x220dcb0();
   input += synapse0x220dcf0();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x220d360() {
   double input = input0x220d360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x220dd30() {
   double input = -0.105199;
   input += synapse0x220e070();
   input += synapse0x220e0b0();
   input += synapse0x220e0f0();
   input += synapse0x220e130();
   input += synapse0x220e170();
   input += synapse0x220e1b0();
   input += synapse0x220e1f0();
   input += synapse0x220e230();
   input += synapse0x220e270();
   input += synapse0x220e2b0();
   input += synapse0x220e2f0();
   input += synapse0x220e330();
   input += synapse0x220e370();
   input += synapse0x220e3b0();
   input += synapse0x220e3f0();
   input += synapse0x220e430();
   input += synapse0x220dec0();
   input += synapse0x220df00();
   input += synapse0x220e580();
   input += synapse0x220e5c0();
   input += synapse0x220e600();
   input += synapse0x220e640();
   input += synapse0x220e680();
   input += synapse0x220e6c0();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x220dd30() {
   double input = input0x220dd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x220e700() {
   double input = -2.06518;
   input += synapse0x220ea40();
   input += synapse0x220ea80();
   input += synapse0x220eac0();
   input += synapse0x220eb00();
   input += synapse0x220eb40();
   input += synapse0x220eb80();
   input += synapse0x220ebc0();
   input += synapse0x220ec00();
   input += synapse0x220ec40();
   input += synapse0x220ec80();
   input += synapse0x220ecc0();
   input += synapse0x220ed00();
   input += synapse0x220ed40();
   input += synapse0x220ed80();
   input += synapse0x220edc0();
   input += synapse0x220ee00();
   input += synapse0x220e890();
   input += synapse0x220e8d0();
   input += synapse0x220ef50();
   input += synapse0x220ef90();
   input += synapse0x220efd0();
   input += synapse0x220f010();
   input += synapse0x220f050();
   input += synapse0x220f090();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x220e700() {
   double input = input0x220e700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x220f0d0() {
   double input = 10.8459;
   input += synapse0x220f410();
   input += synapse0x220f450();
   input += synapse0x220f490();
   input += synapse0x220f4d0();
   input += synapse0x220f510();
   input += synapse0x220f550();
   input += synapse0x220f590();
   input += synapse0x220f5d0();
   input += synapse0x220f610();
   input += synapse0x220f650();
   input += synapse0x220f690();
   input += synapse0x220f6d0();
   input += synapse0x220f710();
   input += synapse0x220f750();
   input += synapse0x220f790();
   input += synapse0x220f7d0();
   input += synapse0x220f260();
   input += synapse0x220f2a0();
   input += synapse0x220f920();
   input += synapse0x220f960();
   input += synapse0x220f9a0();
   input += synapse0x220f9e0();
   input += synapse0x220fa20();
   input += synapse0x220fa60();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x220f0d0() {
   double input = input0x220f0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x220faa0() {
   double input = -0.0284875;
   input += synapse0x220fde0();
   input += synapse0x220fe20();
   input += synapse0x220fe60();
   input += synapse0x220fea0();
   input += synapse0x220fee0();
   input += synapse0x220ff20();
   input += synapse0x220ff60();
   input += synapse0x220ffa0();
   input += synapse0x220ffe0();
   input += synapse0x2210020();
   input += synapse0x2210060();
   input += synapse0x22100a0();
   input += synapse0x22100e0();
   input += synapse0x2210120();
   input += synapse0x2210160();
   input += synapse0x22101a0();
   input += synapse0x220fc30();
   input += synapse0x220fc70();
   input += synapse0x22102f0();
   input += synapse0x2210330();
   input += synapse0x2210370();
   input += synapse0x22103b0();
   input += synapse0x22103f0();
   input += synapse0x2210430();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x220faa0() {
   double input = input0x220faa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2210470() {
   double input = -2.1755;
   input += synapse0x22107b0();
   input += synapse0x22107f0();
   input += synapse0x2210830();
   input += synapse0x2210870();
   input += synapse0x22108b0();
   input += synapse0x22108f0();
   input += synapse0x2210930();
   input += synapse0x2210970();
   input += synapse0x22109b0();
   input += synapse0x22109f0();
   input += synapse0x2210a30();
   input += synapse0x2210a70();
   input += synapse0x2210ab0();
   input += synapse0x2210af0();
   input += synapse0x2210b30();
   input += synapse0x2210b70();
   input += synapse0x2210600();
   input += synapse0x2210640();
   input += synapse0x2210cc0();
   input += synapse0x2210d00();
   input += synapse0x2210d40();
   input += synapse0x2210d80();
   input += synapse0x2210dc0();
   input += synapse0x2210e00();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2210470() {
   double input = input0x2210470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2210e40() {
   double input = 1.18727;
   input += synapse0x21f98b0();
   input += synapse0x21f98f0();
   input += synapse0x21f9930();
   input += synapse0x21f9970();
   input += synapse0x21f99b0();
   input += synapse0x21f99f0();
   input += synapse0x21f9a30();
   input += synapse0x21f9a70();
   input += synapse0x2211590();
   input += synapse0x22115d0();
   input += synapse0x2211610();
   input += synapse0x2211650();
   input += synapse0x2211690();
   input += synapse0x22116d0();
   input += synapse0x2211710();
   input += synapse0x2211750();
   input += synapse0x2210fd0();
   input += synapse0x2211010();
   input += synapse0x22118a0();
   input += synapse0x22118e0();
   input += synapse0x2211920();
   input += synapse0x2211960();
   input += synapse0x22119a0();
   input += synapse0x22119e0();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2210e40() {
   double input = input0x2210e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2211a20() {
   double input = -0.9955;
   input += synapse0x2211d60();
   input += synapse0x2211da0();
   input += synapse0x2211de0();
   input += synapse0x2211e20();
   input += synapse0x2211e60();
   input += synapse0x2211ea0();
   input += synapse0x2211ee0();
   input += synapse0x2211f20();
   input += synapse0x2211f60();
   input += synapse0x2211fa0();
   input += synapse0x2211fe0();
   input += synapse0x2212020();
   input += synapse0x2212060();
   input += synapse0x22120a0();
   input += synapse0x22120e0();
   input += synapse0x2212120();
   input += synapse0x2211bb0();
   input += synapse0x2211bf0();
   input += synapse0x2212270();
   input += synapse0x22122b0();
   input += synapse0x22122f0();
   input += synapse0x2212330();
   input += synapse0x2212370();
   input += synapse0x22123b0();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2211a20() {
   double input = input0x2211a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x22123f0() {
   double input = -0.457038;
   input += synapse0x2212730();
   input += synapse0x2212770();
   input += synapse0x22127b0();
   input += synapse0x22127f0();
   input += synapse0x2212830();
   input += synapse0x2212870();
   input += synapse0x22128b0();
   input += synapse0x22128f0();
   input += synapse0x2212930();
   input += synapse0x2212970();
   input += synapse0x22129b0();
   input += synapse0x22129f0();
   input += synapse0x2212a30();
   input += synapse0x2212a70();
   input += synapse0x2212ab0();
   input += synapse0x2212af0();
   input += synapse0x2212580();
   input += synapse0x22125c0();
   input += synapse0x22030f0();
   input += synapse0x2203130();
   input += synapse0x2203170();
   input += synapse0x22031b0();
   input += synapse0x22031f0();
   input += synapse0x2203230();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x22123f0() {
   double input = input0x22123f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2203270() {
   double input = -1.56585;
   input += synapse0x22035b0();
   input += synapse0x22035f0();
   input += synapse0x2203630();
   input += synapse0x2203670();
   input += synapse0x22036b0();
   input += synapse0x22036f0();
   input += synapse0x2203730();
   input += synapse0x2203770();
   input += synapse0x22037b0();
   input += synapse0x22037f0();
   input += synapse0x2203830();
   input += synapse0x2203870();
   input += synapse0x22038b0();
   input += synapse0x22038f0();
   input += synapse0x2203930();
   input += synapse0x2203970();
   input += synapse0x2203400();
   input += synapse0x2203440();
   input += synapse0x2203ac0();
   input += synapse0x2203b00();
   input += synapse0x2203b40();
   input += synapse0x2203b80();
   input += synapse0x2203bc0();
   input += synapse0x2203c00();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2203270() {
   double input = input0x2203270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2203c40() {
   double input = 1.86598;
   input += synapse0x2203f80();
   input += synapse0x2203fc0();
   input += synapse0x2204000();
   input += synapse0x2204040();
   input += synapse0x2204080();
   input += synapse0x22040c0();
   input += synapse0x2204100();
   input += synapse0x2204140();
   input += synapse0x2204180();
   input += synapse0x22041c0();
   input += synapse0x2204200();
   input += synapse0x2204240();
   input += synapse0x2204280();
   input += synapse0x22042c0();
   input += synapse0x2204300();
   input += synapse0x2204340();
   input += synapse0x2203dd0();
   input += synapse0x2203e10();
   input += synapse0x2204490();
   input += synapse0x22044d0();
   input += synapse0x2204510();
   input += synapse0x2204550();
   input += synapse0x2204590();
   input += synapse0x22045d0();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2203c40() {
   double input = input0x2203c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2204610() {
   double input = -0.0998572;
   input += synapse0x2204950();
   input += synapse0x2204990();
   input += synapse0x22049d0();
   input += synapse0x2204a10();
   input += synapse0x2204a50();
   input += synapse0x2204a90();
   input += synapse0x2204ad0();
   input += synapse0x2204b10();
   input += synapse0x2204b50();
   input += synapse0x2204b90();
   input += synapse0x2204bd0();
   input += synapse0x2204c10();
   input += synapse0x2204c50();
   input += synapse0x2204c90();
   input += synapse0x2204cd0();
   input += synapse0x2204d10();
   input += synapse0x22047a0();
   input += synapse0x22047e0();
   input += synapse0x2204e60();
   input += synapse0x2204ea0();
   input += synapse0x2204ee0();
   input += synapse0x2204f20();
   input += synapse0x2204f60();
   input += synapse0x2204fa0();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2204610() {
   double input = input0x2204610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2216c50() {
   double input = -2.57592;
   input += synapse0x2216e70();
   input += synapse0x2216eb0();
   input += synapse0x2216ef0();
   input += synapse0x2216f30();
   input += synapse0x2216f70();
   input += synapse0x2216fb0();
   input += synapse0x2216ff0();
   input += synapse0x2217030();
   input += synapse0x2217070();
   input += synapse0x22170b0();
   input += synapse0x22170f0();
   input += synapse0x2217130();
   input += synapse0x2217170();
   input += synapse0x22171b0();
   input += synapse0x22171f0();
   input += synapse0x2217230();
   input += synapse0x2204fe0();
   input += synapse0x2205020();
   input += synapse0x2217380();
   input += synapse0x22173c0();
   input += synapse0x2217400();
   input += synapse0x2217440();
   input += synapse0x2217480();
   input += synapse0x22174c0();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2216c50() {
   double input = input0x2216c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2217500() {
   double input = -1.98131;
   input += synapse0x2217840();
   input += synapse0x2217880();
   input += synapse0x22178c0();
   input += synapse0x2217900();
   input += synapse0x2217940();
   input += synapse0x2217980();
   input += synapse0x22179c0();
   input += synapse0x2217a00();
   input += synapse0x2217a40();
   input += synapse0x2217a80();
   input += synapse0x2217ac0();
   input += synapse0x2217b00();
   input += synapse0x2217b40();
   input += synapse0x2217b80();
   input += synapse0x2217bc0();
   input += synapse0x2217c00();
   input += synapse0x2217690();
   input += synapse0x22176d0();
   input += synapse0x2217d50();
   input += synapse0x2217d90();
   input += synapse0x2217dd0();
   input += synapse0x2217e10();
   input += synapse0x2217e50();
   input += synapse0x2217e90();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2217500() {
   double input = input0x2217500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2217ed0() {
   double input = 0.745675;
   input += synapse0x2218210();
   input += synapse0x2218250();
   input += synapse0x2218290();
   input += synapse0x22182d0();
   input += synapse0x2218310();
   input += synapse0x2218350();
   input += synapse0x2218390();
   input += synapse0x22183d0();
   input += synapse0x2218410();
   input += synapse0x2218450();
   input += synapse0x2218490();
   input += synapse0x22184d0();
   input += synapse0x2218510();
   input += synapse0x2218550();
   input += synapse0x2218590();
   input += synapse0x22185d0();
   input += synapse0x2218060();
   input += synapse0x22180a0();
   input += synapse0x2218720();
   input += synapse0x2218760();
   input += synapse0x22187a0();
   input += synapse0x22187e0();
   input += synapse0x2218820();
   input += synapse0x2218860();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2217ed0() {
   double input = input0x2217ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x22188a0() {
   double input = 0.49285;
   input += synapse0x2218be0();
   input += synapse0x2218c20();
   input += synapse0x2218c60();
   input += synapse0x2218ca0();
   input += synapse0x2218ce0();
   input += synapse0x2218d20();
   input += synapse0x2218d60();
   input += synapse0x2218da0();
   input += synapse0x2218de0();
   input += synapse0x2218e20();
   input += synapse0x2218e60();
   input += synapse0x2218ea0();
   input += synapse0x2218ee0();
   input += synapse0x2218f20();
   input += synapse0x2218f60();
   input += synapse0x2218fa0();
   input += synapse0x2218a30();
   input += synapse0x2218a70();
   input += synapse0x22190f0();
   input += synapse0x2219130();
   input += synapse0x2219170();
   input += synapse0x22191b0();
   input += synapse0x22191f0();
   input += synapse0x2219230();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x22188a0() {
   double input = input0x22188a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x221faa0() {
   double input = 0.414038;
   input += synapse0x21f57c0();
   input += synapse0x21f5800();
   input += synapse0x21f6ce0();
   input += synapse0x21f6d20();
   input += synapse0x21f76b0();
   input += synapse0x21f76f0();
   input += synapse0x21f8480();
   input += synapse0x21f84c0();
   input += synapse0x21f8e50();
   input += synapse0x21f8e90();
   input += synapse0x21f9820();
   input += synapse0x21f9860();
   input += synapse0x21fa300();
   input += synapse0x21fa340();
   input += synapse0x21facd0();
   input += synapse0x21fad10();
   input += synapse0x21f7db0();
   input += synapse0x21f7df0();
   input += synapse0x21fc880();
   input += synapse0x21fc8c0();
   input += synapse0x21fd250();
   input += synapse0x21fd290();
   input += synapse0x21fdc20();
   input += synapse0x21fdc60();
   input += synapse0x21fe5f0();
   input += synapse0x21fe630();
   input += synapse0x21f27d0();
   input += synapse0x21f2810();
   input += synapse0x22006e0();
   input += synapse0x2200720();
   input += synapse0x22010b0();
   input += synapse0x22010f0();
   input += synapse0x2201a80();
   input += synapse0x2201ac0();
   input += synapse0x2202450();
   input += synapse0x2202490();
   input += synapse0x2202e20();
   input += synapse0x2202e60();
   input += synapse0x21fb970();
   input += synapse0x21fb9b0();
   input += synapse0x2205220();
   input += synapse0x2205260();
   input += synapse0x2205bb0();
   input += synapse0x2205bf0();
   input += synapse0x2206580();
   input += synapse0x22065c0();
   input += synapse0x2206f50();
   input += synapse0x2206f90();
   input += synapse0x2207920();
   input += synapse0x2207960();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x221faa0() {
   double input = input0x221faa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x221fe40() {
   double input = 2.27009;
   input += synapse0x220a060();
   input += synapse0x220a0a0();
   input += synapse0x21ff620();
   input += synapse0x21ff660();
   input += synapse0x220cc40();
   input += synapse0x220cc80();
   input += synapse0x220d610();
   input += synapse0x220d650();
   input += synapse0x220dfe0();
   input += synapse0x220e020();
   input += synapse0x220e9b0();
   input += synapse0x220e9f0();
   input += synapse0x220f380();
   input += synapse0x220f3c0();
   input += synapse0x220fd50();
   input += synapse0x220fd90();
   input += synapse0x2210720();
   input += synapse0x2210760();
   input += synapse0x22110f0();
   input += synapse0x2211130();
   input += synapse0x2211cd0();
   input += synapse0x2211d10();
   input += synapse0x22126a0();
   input += synapse0x22126e0();
   input += synapse0x2203520();
   input += synapse0x2203560();
   input += synapse0x2203ef0();
   input += synapse0x2203f30();
   input += synapse0x22048c0();
   input += synapse0x2204900();
   input += synapse0x2216de0();
   input += synapse0x2216e20();
   input += synapse0x22177b0();
   input += synapse0x22177f0();
   input += synapse0x2218180();
   input += synapse0x22181c0();
   input += synapse0x2218b50();
   input += synapse0x2218b90();
   input += synapse0x21f4a80();
   input += synapse0x21f4ac0();
   input += synapse0x22082f0();
   input += synapse0x2208330();
   input += synapse0x2219270();
   input += synapse0x22192b0();
   input += synapse0x22192f0();
   input += synapse0x2219330();
   input += synapse0x22201e0();
   input += synapse0x2220220();
   input += synapse0x2220260();
   input += synapse0x22202a0();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x221fe40() {
   double input = input0x221fe40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x22202e0() {
   double input = 1.27719;
   input += synapse0x2220620();
   input += synapse0x2220660();
   input += synapse0x22206a0();
   input += synapse0x22206e0();
   input += synapse0x2220720();
   input += synapse0x2220760();
   input += synapse0x22207a0();
   input += synapse0x22207e0();
   input += synapse0x2220820();
   input += synapse0x2220860();
   input += synapse0x22208a0();
   input += synapse0x22208e0();
   input += synapse0x2220920();
   input += synapse0x2220960();
   input += synapse0x22209a0();
   input += synapse0x22209e0();
   input += synapse0x2220470();
   input += synapse0x22204b0();
   input += synapse0x2220b30();
   input += synapse0x2220b70();
   input += synapse0x2220bb0();
   input += synapse0x2220bf0();
   input += synapse0x2220c30();
   input += synapse0x2220c70();
   input += synapse0x2220cb0();
   input += synapse0x2220cf0();
   input += synapse0x2220d30();
   input += synapse0x2220d70();
   input += synapse0x2220db0();
   input += synapse0x2220df0();
   input += synapse0x2220e30();
   input += synapse0x2220e70();
   input += synapse0x2220a20();
   input += synapse0x2220a60();
   input += synapse0x2220aa0();
   input += synapse0x2220ae0();
   input += synapse0x22210c0();
   input += synapse0x2221100();
   input += synapse0x2221140();
   input += synapse0x2221180();
   input += synapse0x22211c0();
   input += synapse0x2221200();
   input += synapse0x2221240();
   input += synapse0x2221280();
   input += synapse0x22212c0();
   input += synapse0x2221300();
   input += synapse0x2221340();
   input += synapse0x2221380();
   input += synapse0x22213c0();
   input += synapse0x2221400();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x22202e0() {
   double input = input0x22202e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2221440() {
   double input = -1.02958;
   input += synapse0x2221780();
   input += synapse0x22217c0();
   input += synapse0x2221800();
   input += synapse0x2221840();
   input += synapse0x2221880();
   input += synapse0x22218c0();
   input += synapse0x2221900();
   input += synapse0x2221940();
   input += synapse0x2221980();
   input += synapse0x22219c0();
   input += synapse0x2221a00();
   input += synapse0x2221a40();
   input += synapse0x2221a80();
   input += synapse0x2221ac0();
   input += synapse0x2221b00();
   input += synapse0x2221b40();
   input += synapse0x22215d0();
   input += synapse0x2221610();
   input += synapse0x2221c90();
   input += synapse0x2221cd0();
   input += synapse0x2221d10();
   input += synapse0x2221d50();
   input += synapse0x2221d90();
   input += synapse0x2221dd0();
   input += synapse0x2221e10();
   input += synapse0x2221e50();
   input += synapse0x2221e90();
   input += synapse0x2221ed0();
   input += synapse0x2221f10();
   input += synapse0x2221f50();
   input += synapse0x2221f90();
   input += synapse0x2221fd0();
   input += synapse0x2221b80();
   input += synapse0x2221bc0();
   input += synapse0x2221c00();
   input += synapse0x2221c40();
   input += synapse0x2222220();
   input += synapse0x2222260();
   input += synapse0x22222a0();
   input += synapse0x22222e0();
   input += synapse0x2222320();
   input += synapse0x2222360();
   input += synapse0x22223a0();
   input += synapse0x22223e0();
   input += synapse0x2222420();
   input += synapse0x2222460();
   input += synapse0x22224a0();
   input += synapse0x22224e0();
   input += synapse0x2222520();
   input += synapse0x2222560();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2221440() {
   double input = input0x2221440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x22225a0() {
   double input = 1.92931;
   input += synapse0x22228e0();
   input += synapse0x2222920();
   input += synapse0x2222960();
   input += synapse0x22229a0();
   input += synapse0x22229e0();
   input += synapse0x2222a20();
   input += synapse0x2222a60();
   input += synapse0x2222aa0();
   input += synapse0x2222ae0();
   input += synapse0x2222b20();
   input += synapse0x2222b60();
   input += synapse0x2222ba0();
   input += synapse0x2222be0();
   input += synapse0x2222c20();
   input += synapse0x2222c60();
   input += synapse0x2222ca0();
   input += synapse0x2222730();
   input += synapse0x2222770();
   input += synapse0x2222df0();
   input += synapse0x2222e30();
   input += synapse0x2222e70();
   input += synapse0x2222eb0();
   input += synapse0x2222ef0();
   input += synapse0x2222f30();
   input += synapse0x2222f70();
   input += synapse0x2222fb0();
   input += synapse0x2222ff0();
   input += synapse0x2223030();
   input += synapse0x2223070();
   input += synapse0x22230b0();
   input += synapse0x22230f0();
   input += synapse0x2223130();
   input += synapse0x2222ce0();
   input += synapse0x2222d20();
   input += synapse0x2222d60();
   input += synapse0x2222da0();
   input += synapse0x2223380();
   input += synapse0x22233c0();
   input += synapse0x2223400();
   input += synapse0x2223440();
   input += synapse0x2223480();
   input += synapse0x22234c0();
   input += synapse0x2223500();
   input += synapse0x2223540();
   input += synapse0x2223580();
   input += synapse0x22235c0();
   input += synapse0x2223600();
   input += synapse0x2223640();
   input += synapse0x2223680();
   input += synapse0x22236c0();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x22225a0() {
   double input = input0x22225a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi4_chi4::input0x2223700() {
   double input = -3.28415;
   input += synapse0x2223920();
   input += synapse0x2223960();
   input += synapse0x22239a0();
   input += synapse0x22239e0();
   input += synapse0x2223a20();
   return input;
}

double NNfunction_nn_chi4_chi4::neuron0x2223700() {
   double input = input0x2223700();
   return (input * 1)+0;
}

double NNfunction_nn_chi4_chi4::synapse0x21ef840() {
   return (neuron0x21ef8c0()*0.000759393);
}

double NNfunction_nn_chi4_chi4::synapse0x21ef880() {
   return (neuron0x21efb70()*-1.22682);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4b10() {
   return (neuron0x21efeb0()*2.02935);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4b50() {
   return (neuron0x21f01f0()*-0.0023839);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4b90() {
   return (neuron0x21f0530()*0.023277);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4bd0() {
   return (neuron0x21f0870()*-0.00361665);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4c10() {
   return (neuron0x21f0bb0()*0.00240253);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4c50() {
   return (neuron0x21f0ef0()*-0.0228236);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4c90() {
   return (neuron0x21f1230()*-0.0440891);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4cd0() {
   return (neuron0x21f1570()*-0.047866);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4d10() {
   return (neuron0x21f18b0()*0.0298529);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4d50() {
   return (neuron0x21f1bf0()*-0.0490578);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4d90() {
   return (neuron0x21f1f30()*0.0313918);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4dd0() {
   return (neuron0x21f2270()*0.0958705);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4e10() {
   return (neuron0x21f25b0()*0.0937072);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4e50() {
   return (neuron0x21f28f0()*0.0478507);
}

double NNfunction_nn_chi4_chi4::synapse0x21ef7b0() {
   return (neuron0x21f2c30()*-0.00548051);
}

double NNfunction_nn_chi4_chi4::synapse0x21ef7f0() {
   return (neuron0x21f3190()*0.0485938);
}

double NNfunction_nn_chi4_chi4::synapse0x1faa9b0() {
   return (neuron0x21f33b0()*0.0349494);
}

double NNfunction_nn_chi4_chi4::synapse0x1faa9f0() {
   return (neuron0x21f36f0()*0.0392701);
}

double NNfunction_nn_chi4_chi4::synapse0x21f50b0() {
   return (neuron0x21f3a30()*0.0194458);
}

double NNfunction_nn_chi4_chi4::synapse0x21f50f0() {
   return (neuron0x21f3d70()*9.4828e-05);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5130() {
   return (neuron0x21f40b0()*-0.032335);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5170() {
   return (neuron0x21f43f0()*-0.685127);
}

double NNfunction_nn_chi4_chi4::synapse0x21f54f0() {
   return (neuron0x21ef8c0()*-0.277037);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5530() {
   return (neuron0x21efb70()*-0.516645);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5570() {
   return (neuron0x21efeb0()*-1.17303);
}

double NNfunction_nn_chi4_chi4::synapse0x21f55b0() {
   return (neuron0x21f01f0()*0.0887185);
}

double NNfunction_nn_chi4_chi4::synapse0x21f55f0() {
   return (neuron0x21f0530()*-0.333909);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5630() {
   return (neuron0x21f0870()*0.116901);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5670() {
   return (neuron0x21f0bb0()*-0.140399);
}

double NNfunction_nn_chi4_chi4::synapse0x21f56b0() {
   return (neuron0x21f0ef0()*0.096689);
}

double NNfunction_nn_chi4_chi4::synapse0x21f56f0() {
   return (neuron0x21f1230()*0.13075);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4fa0() {
   return (neuron0x21f1570()*-0.227039);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4fe0() {
   return (neuron0x21f18b0()*-0.112254);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5020() {
   return (neuron0x21f1bf0()*-1.65328);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5060() {
   return (neuron0x21f1f30()*-0.348592);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5940() {
   return (neuron0x21f2270()*0.00952894);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5980() {
   return (neuron0x21f25b0()*0.329867);
}

double NNfunction_nn_chi4_chi4::synapse0x21f59c0() {
   return (neuron0x21f28f0()*0.0825241);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5340() {
   return (neuron0x21f2c30()*-0.0647788);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5380() {
   return (neuron0x21f3190()*-0.331388);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5b10() {
   return (neuron0x21f33b0()*-0.0857286);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5b50() {
   return (neuron0x21f36f0()*-0.136456);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5b90() {
   return (neuron0x21f3a30()*-0.0156741);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5bd0() {
   return (neuron0x21f3d70()*0.0748338);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5c10() {
   return (neuron0x21f40b0()*0.0811826);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5c50() {
   return (neuron0x21f43f0()*2.47077);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5fd0() {
   return (neuron0x21ef8c0()*-0.0163216);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6010() {
   return (neuron0x21efb70()*-0.748469);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6050() {
   return (neuron0x21efeb0()*-0.273662);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6090() {
   return (neuron0x21f01f0()*0.014398);
}

double NNfunction_nn_chi4_chi4::synapse0x21f60d0() {
   return (neuron0x21f0530()*-0.00601084);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6110() {
   return (neuron0x21f0870()*0.0054473);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6150() {
   return (neuron0x21f0bb0()*-0.105347);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6190() {
   return (neuron0x21f0ef0()*0.0791084);
}

double NNfunction_nn_chi4_chi4::synapse0x21f61d0() {
   return (neuron0x21f1230()*-0.000325187);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6210() {
   return (neuron0x21f1570()*0.0114829);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6250() {
   return (neuron0x21f18b0()*-0.00883617);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6290() {
   return (neuron0x21f1bf0()*0.061523);
}

double NNfunction_nn_chi4_chi4::synapse0x21f62d0() {
   return (neuron0x21f1f30()*0.0456353);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6310() {
   return (neuron0x21f2270()*-0.0103997);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6350() {
   return (neuron0x21f25b0()*0.749586);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6390() {
   return (neuron0x21f28f0()*0.0259856);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5e20() {
   return (neuron0x21f2c30()*0.070692);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5e60() {
   return (neuron0x21f3190()*-0.0327437);
}

double NNfunction_nn_chi4_chi4::synapse0x21de930() {
   return (neuron0x21f33b0()*-0.0185666);
}

double NNfunction_nn_chi4_chi4::synapse0x1fb8880() {
   return (neuron0x21f36f0()*0.0432772);
}

double NNfunction_nn_chi4_chi4::synapse0x1fb88c0() {
   return (neuron0x21f3a30()*-0.0705926);
}

double NNfunction_nn_chi4_chi4::synapse0x20d3dd0() {
   return (neuron0x21f3d70()*-0.0164771);
}

double NNfunction_nn_chi4_chi4::synapse0x20d3e10() {
   return (neuron0x21f40b0()*-0.0687382);
}

double NNfunction_nn_chi4_chi4::synapse0x21ef620() {
   return (neuron0x21f43f0()*-0.6348);
}

double NNfunction_nn_chi4_chi4::synapse0x1fb9170() {
   return (neuron0x21ef8c0()*0.028018);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5850() {
   return (neuron0x21efb70()*0.0342799);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5890() {
   return (neuron0x21efeb0()*-0.211233);
}

double NNfunction_nn_chi4_chi4::synapse0x21f58d0() {
   return (neuron0x21f01f0()*0.644221);
}

double NNfunction_nn_chi4_chi4::synapse0x21f64e0() {
   return (neuron0x21f0530()*-0.015251);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6520() {
   return (neuron0x21f0870()*-0.00682174);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6560() {
   return (neuron0x21f0bb0()*-0.0202131);
}

double NNfunction_nn_chi4_chi4::synapse0x21f65a0() {
   return (neuron0x21f0ef0()*0.00612224);
}

double NNfunction_nn_chi4_chi4::synapse0x21f65e0() {
   return (neuron0x21f1230()*0.0315688);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6620() {
   return (neuron0x21f1570()*0.0370856);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6660() {
   return (neuron0x21f18b0()*0.0425886);
}

double NNfunction_nn_chi4_chi4::synapse0x21f66a0() {
   return (neuron0x21f1bf0()*0.268664);
}

double NNfunction_nn_chi4_chi4::synapse0x21f66e0() {
   return (neuron0x21f1f30()*0.0881156);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6720() {
   return (neuron0x21f2270()*-0.0523463);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6760() {
   return (neuron0x21f25b0()*0.0416152);
}

double NNfunction_nn_chi4_chi4::synapse0x21f67a0() {
   return (neuron0x21f28f0()*0.0602437);
}

double NNfunction_nn_chi4_chi4::synapse0x21ef660() {
   return (neuron0x21f2c30()*-0.0450918);
}

double NNfunction_nn_chi4_chi4::synapse0x21ef6a0() {
   return (neuron0x21f3190()*0.0702195);
}

double NNfunction_nn_chi4_chi4::synapse0x21ef6e0() {
   return (neuron0x21f33b0()*0.0527064);
}

double NNfunction_nn_chi4_chi4::synapse0x21f68f0() {
   return (neuron0x21f36f0()*-0.0186262);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6930() {
   return (neuron0x21f3a30()*0.00152561);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6970() {
   return (neuron0x21f3d70()*0.00242758);
}

double NNfunction_nn_chi4_chi4::synapse0x21f69b0() {
   return (neuron0x21f40b0()*0.0425059);
}

double NNfunction_nn_chi4_chi4::synapse0x21f69f0() {
   return (neuron0x21f43f0()*0.0484514);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6d70() {
   return (neuron0x21ef8c0()*-0.0775784);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6db0() {
   return (neuron0x21efb70()*-0.491909);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6df0() {
   return (neuron0x21efeb0()*-1.40559);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6e30() {
   return (neuron0x21f01f0()*0.0371029);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6e70() {
   return (neuron0x21f0530()*-0.0629923);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6eb0() {
   return (neuron0x21f0870()*0.0143203);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6ef0() {
   return (neuron0x21f0bb0()*-0.111487);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6f30() {
   return (neuron0x21f0ef0()*-0.0850796);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6f70() {
   return (neuron0x21f1230()*0.0345425);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6fb0() {
   return (neuron0x21f1570()*0.0486866);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6ff0() {
   return (neuron0x21f18b0()*0.0155698);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7030() {
   return (neuron0x21f1bf0()*-0.00442451);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7070() {
   return (neuron0x21f1f30()*-0.0548031);
}

double NNfunction_nn_chi4_chi4::synapse0x21f70b0() {
   return (neuron0x21f2270()*-0.0471206);
}

double NNfunction_nn_chi4_chi4::synapse0x21f70f0() {
   return (neuron0x21f25b0()*0.277782);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7130() {
   return (neuron0x21f28f0()*0.0339705);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6bc0() {
   return (neuron0x21f2c30()*0.0109743);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6c00() {
   return (neuron0x21f3190()*-0.0110193);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7280() {
   return (neuron0x21f33b0()*-0.0840815);
}

double NNfunction_nn_chi4_chi4::synapse0x21f72c0() {
   return (neuron0x21f36f0()*0.0209111);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7300() {
   return (neuron0x21f3a30()*0.00236859);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7340() {
   return (neuron0x21f3d70()*0.000900184);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7380() {
   return (neuron0x21f40b0()*-0.0687914);
}

double NNfunction_nn_chi4_chi4::synapse0x21f73c0() {
   return (neuron0x21f43f0()*0.697621);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7740() {
   return (neuron0x21ef8c0()*0.0721077);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7780() {
   return (neuron0x21efb70()*-2.0344);
}

double NNfunction_nn_chi4_chi4::synapse0x21f77c0() {
   return (neuron0x21efeb0()*0.642325);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7800() {
   return (neuron0x21f01f0()*-0.00587756);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7840() {
   return (neuron0x21f0530()*0.00633219);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7880() {
   return (neuron0x21f0870()*0.0157249);
}

double NNfunction_nn_chi4_chi4::synapse0x21f78c0() {
   return (neuron0x21f0bb0()*0.00932459);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7900() {
   return (neuron0x21f0ef0()*0.00995837);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7940() {
   return (neuron0x21f1230()*0.0253262);
}

double NNfunction_nn_chi4_chi4::synapse0x1fb8bd0() {
   return (neuron0x21f1570()*0.00536966);
}

double NNfunction_nn_chi4_chi4::synapse0x1fb8c10() {
   return (neuron0x21f18b0()*0.04007);
}

double NNfunction_nn_chi4_chi4::synapse0x1fb8c50() {
   return (neuron0x21f1bf0()*-0.00826745);
}

double NNfunction_nn_chi4_chi4::synapse0x1fb8c90() {
   return (neuron0x21f1f30()*0.0304777);
}

double NNfunction_nn_chi4_chi4::synapse0x1fb8cd0() {
   return (neuron0x21f2270()*0.00442868);
}

double NNfunction_nn_chi4_chi4::synapse0x1fb8d10() {
   return (neuron0x21f25b0()*0.0954924);
}

double NNfunction_nn_chi4_chi4::synapse0x1fb8d50() {
   return (neuron0x21f28f0()*0.0356481);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7590() {
   return (neuron0x21f2c30()*-0.0239746);
}

double NNfunction_nn_chi4_chi4::synapse0x21f75d0() {
   return (neuron0x21f3190()*-0.0256253);
}

double NNfunction_nn_chi4_chi4::synapse0x1fb8ea0() {
   return (neuron0x21f33b0()*0.00166297);
}

double NNfunction_nn_chi4_chi4::synapse0x1fb8ee0() {
   return (neuron0x21f36f0()*0.0168443);
}

double NNfunction_nn_chi4_chi4::synapse0x1fb8f20() {
   return (neuron0x21f3a30()*-0.0207109);
}

double NNfunction_nn_chi4_chi4::synapse0x1fb8f60() {
   return (neuron0x21f3d70()*-0.0421384);
}

double NNfunction_nn_chi4_chi4::synapse0x1fb8fa0() {
   return (neuron0x21f40b0()*0.00965006);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8190() {
   return (neuron0x21f43f0()*2.53907);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8510() {
   return (neuron0x21ef8c0()*0.0705056);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8550() {
   return (neuron0x21efb70()*-1.78392);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8590() {
   return (neuron0x21efeb0()*0.867883);
}

double NNfunction_nn_chi4_chi4::synapse0x21f85d0() {
   return (neuron0x21f01f0()*-0.00951516);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8610() {
   return (neuron0x21f0530()*0.00703584);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8650() {
   return (neuron0x21f0870()*0.0161938);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8690() {
   return (neuron0x21f0bb0()*0.0112248);
}

double NNfunction_nn_chi4_chi4::synapse0x21f86d0() {
   return (neuron0x21f0ef0()*0.00436908);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8710() {
   return (neuron0x21f1230()*0.0366742);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8750() {
   return (neuron0x21f1570()*0.0175057);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8790() {
   return (neuron0x21f18b0()*0.0447649);
}

double NNfunction_nn_chi4_chi4::synapse0x21f87d0() {
   return (neuron0x21f1bf0()*-0.0272094);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8810() {
   return (neuron0x21f1f30()*0.0406138);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8850() {
   return (neuron0x21f2270()*-0.0115521);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8890() {
   return (neuron0x21f25b0()*0.161959);
}

double NNfunction_nn_chi4_chi4::synapse0x21f88d0() {
   return (neuron0x21f28f0()*0.0334771);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8360() {
   return (neuron0x21f2c30()*-0.0288883);
}

double NNfunction_nn_chi4_chi4::synapse0x21f83a0() {
   return (neuron0x21f3190()*-0.0145591);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8a20() {
   return (neuron0x21f33b0()*0.00456323);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8a60() {
   return (neuron0x21f36f0()*0.0163969);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8aa0() {
   return (neuron0x21f3a30()*-0.0172395);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8ae0() {
   return (neuron0x21f3d70()*-0.0475381);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8b20() {
   return (neuron0x21f40b0()*-0.000562691);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8b60() {
   return (neuron0x21f43f0()*2.49123);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8ee0() {
   return (neuron0x21ef8c0()*0.0302222);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8f20() {
   return (neuron0x21efb70()*0.0171428);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8f60() {
   return (neuron0x21efeb0()*-0.20277);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8fa0() {
   return (neuron0x21f01f0()*-0.515063);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8fe0() {
   return (neuron0x21f0530()*-0.0123425);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9020() {
   return (neuron0x21f0870()*-0.0292921);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9060() {
   return (neuron0x21f0bb0()*-0.0126499);
}

double NNfunction_nn_chi4_chi4::synapse0x21f90a0() {
   return (neuron0x21f0ef0()*0.0214275);
}

double NNfunction_nn_chi4_chi4::synapse0x21f90e0() {
   return (neuron0x21f1230()*0.0173358);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9120() {
   return (neuron0x21f1570()*0.0404524);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9160() {
   return (neuron0x21f18b0()*0.033365);
}

double NNfunction_nn_chi4_chi4::synapse0x21f91a0() {
   return (neuron0x21f1bf0()*0.283535);
}

double NNfunction_nn_chi4_chi4::synapse0x21f91e0() {
   return (neuron0x21f1f30()*0.0719482);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9220() {
   return (neuron0x21f2270()*-0.0279614);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9260() {
   return (neuron0x21f25b0()*0.0363278);
}

double NNfunction_nn_chi4_chi4::synapse0x21f92a0() {
   return (neuron0x21f28f0()*0.0607769);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8d30() {
   return (neuron0x21f2c30()*-0.0215031);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8d70() {
   return (neuron0x21f3190()*0.0506061);
}

double NNfunction_nn_chi4_chi4::synapse0x21f93f0() {
   return (neuron0x21f33b0()*0.0463992);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9430() {
   return (neuron0x21f36f0()*-0.0102804);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9470() {
   return (neuron0x21f3a30()*0.0139944);
}

double NNfunction_nn_chi4_chi4::synapse0x21f94b0() {
   return (neuron0x21f3d70()*-0.00318119);
}

double NNfunction_nn_chi4_chi4::synapse0x21f94f0() {
   return (neuron0x21f40b0()*0.0376065);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9530() {
   return (neuron0x21f43f0()*0.0486427);
}

double NNfunction_nn_chi4_chi4::synapse0x21f3080() {
   return (neuron0x21ef8c0()*-0.0507827);
}

double NNfunction_nn_chi4_chi4::synapse0x21f30c0() {
   return (neuron0x21efb70()*-3.91565);
}

double NNfunction_nn_chi4_chi4::synapse0x21f3100() {
   return (neuron0x21efeb0()*2.69346);
}

double NNfunction_nn_chi4_chi4::synapse0x21f3140() {
   return (neuron0x21f01f0()*0.0201894);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9ac0() {
   return (neuron0x21f0530()*0.0397487);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9b00() {
   return (neuron0x21f0870()*-0.0293299);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9b40() {
   return (neuron0x21f0bb0()*-0.0368682);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9b80() {
   return (neuron0x21f0ef0()*-0.0218881);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9bc0() {
   return (neuron0x21f1230()*-0.0616739);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9c00() {
   return (neuron0x21f1570()*0.0167435);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9c40() {
   return (neuron0x21f18b0()*0.0414623);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9c80() {
   return (neuron0x21f1bf0()*-0.108592);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9cc0() {
   return (neuron0x21f1f30()*0.08523);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9d00() {
   return (neuron0x21f2270()*0.044945);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9d40() {
   return (neuron0x21f25b0()*-0.0119736);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9d80() {
   return (neuron0x21f28f0()*0.0748061);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9700() {
   return (neuron0x21f2c30()*-0.0216842);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9740() {
   return (neuron0x21f3190()*-0.0645302);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9ed0() {
   return (neuron0x21f33b0()*0.058095);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9f10() {
   return (neuron0x21f36f0()*0.000928002);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9f50() {
   return (neuron0x21f3a30()*0.0338379);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9f90() {
   return (neuron0x21f3d70()*-0.034484);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9fd0() {
   return (neuron0x21f40b0()*-0.0624982);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa010() {
   return (neuron0x21f43f0()*-0.723476);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa390() {
   return (neuron0x21ef8c0()*0.0463286);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa3d0() {
   return (neuron0x21efb70()*2.29691);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa410() {
   return (neuron0x21efeb0()*-1.28798);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa450() {
   return (neuron0x21f01f0()*0.0267076);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa490() {
   return (neuron0x21f0530()*-0.0344849);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa4d0() {
   return (neuron0x21f0870()*0.00646996);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa510() {
   return (neuron0x21f0bb0()*0.0315738);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa550() {
   return (neuron0x21f0ef0()*0.0744779);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa590() {
   return (neuron0x21f1230()*0.0155533);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa5d0() {
   return (neuron0x21f1570()*-0.0399896);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa610() {
   return (neuron0x21f18b0()*0.0160049);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa650() {
   return (neuron0x21f1bf0()*1.29761);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa690() {
   return (neuron0x21f1f30()*-0.145496);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa6d0() {
   return (neuron0x21f2270()*0.0222443);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa710() {
   return (neuron0x21f25b0()*0.0276054);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa750() {
   return (neuron0x21f28f0()*0.0301822);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa1e0() {
   return (neuron0x21f2c30()*-0.0244978);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa220() {
   return (neuron0x21f3190()*0.0131055);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa8a0() {
   return (neuron0x21f33b0()*-0.0542626);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa8e0() {
   return (neuron0x21f36f0()*0.0393115);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa920() {
   return (neuron0x21f3a30()*-0.0952419);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa960() {
   return (neuron0x21f3d70()*0.06979);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa9a0() {
   return (neuron0x21f40b0()*0.0278978);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa9e0() {
   return (neuron0x21f43f0()*0.431586);
}

double NNfunction_nn_chi4_chi4::synapse0x21fad60() {
   return (neuron0x21ef8c0()*-0.503677);
}

double NNfunction_nn_chi4_chi4::synapse0x21fada0() {
   return (neuron0x21efb70()*0.552338);
}

double NNfunction_nn_chi4_chi4::synapse0x21fade0() {
   return (neuron0x21efeb0()*-0.837567);
}

double NNfunction_nn_chi4_chi4::synapse0x21fae20() {
   return (neuron0x21f01f0()*-0.232012);
}

double NNfunction_nn_chi4_chi4::synapse0x21fae60() {
   return (neuron0x21f0530()*-0.874776);
}

double NNfunction_nn_chi4_chi4::synapse0x21faea0() {
   return (neuron0x21f0870()*0.366584);
}

double NNfunction_nn_chi4_chi4::synapse0x21faee0() {
   return (neuron0x21f0bb0()*-0.562931);
}

double NNfunction_nn_chi4_chi4::synapse0x21faf20() {
   return (neuron0x21f0ef0()*-0.0882313);
}

double NNfunction_nn_chi4_chi4::synapse0x21faf60() {
   return (neuron0x21f1230()*-0.280504);
}

double NNfunction_nn_chi4_chi4::synapse0x21fafa0() {
   return (neuron0x21f1570()*-0.189043);
}

double NNfunction_nn_chi4_chi4::synapse0x21fafe0() {
   return (neuron0x21f18b0()*-0.337777);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb020() {
   return (neuron0x21f1bf0()*-1.2043);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb060() {
   return (neuron0x21f1f30()*0.528803);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb0a0() {
   return (neuron0x21f2270()*-1.18786);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb0e0() {
   return (neuron0x21f25b0()*0.0854211);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb120() {
   return (neuron0x21f28f0()*0.990302);
}

double NNfunction_nn_chi4_chi4::synapse0x21fabb0() {
   return (neuron0x21f2c30()*-0.0977139);
}

double NNfunction_nn_chi4_chi4::synapse0x21fabf0() {
   return (neuron0x21f3190()*-0.754817);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7980() {
   return (neuron0x21f33b0()*0.643405);
}

double NNfunction_nn_chi4_chi4::synapse0x21f79c0() {
   return (neuron0x21f36f0()*-1.64837);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7a00() {
   return (neuron0x21f3a30()*-0.21052);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7a40() {
   return (neuron0x21f3d70()*0.683355);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7a80() {
   return (neuron0x21f40b0()*0.300586);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7ac0() {
   return (neuron0x21f43f0()*0.405904);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7e40() {
   return (neuron0x21ef8c0()*0.178348);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7e80() {
   return (neuron0x21efb70()*-3.80738);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7ec0() {
   return (neuron0x21efeb0()*-0.710494);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7f00() {
   return (neuron0x21f01f0()*-0.0803937);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7f40() {
   return (neuron0x21f0530()*0.0636114);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7f80() {
   return (neuron0x21f0870()*-0.03567);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7fc0() {
   return (neuron0x21f0bb0()*-0.00498565);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8000() {
   return (neuron0x21f0ef0()*0.0996027);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8040() {
   return (neuron0x21f1230()*-0.00931783);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8080() {
   return (neuron0x21f1570()*0.0081806);
}

double NNfunction_nn_chi4_chi4::synapse0x21f80c0() {
   return (neuron0x21f18b0()*0.0190873);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8100() {
   return (neuron0x21f1bf0()*0.129973);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8140() {
   return (neuron0x21f1f30()*0.00727481);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc280() {
   return (neuron0x21f2270()*0.00721932);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc2c0() {
   return (neuron0x21f25b0()*-0.596295);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc300() {
   return (neuron0x21f28f0()*0.0546293);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7c90() {
   return (neuron0x21f2c30()*-0.00861096);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7cd0() {
   return (neuron0x21f3190()*0.0312526);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc450() {
   return (neuron0x21f33b0()*-0.0027772);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc490() {
   return (neuron0x21f36f0()*-0.00887536);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc4d0() {
   return (neuron0x21f3a30()*0.0551938);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc510() {
   return (neuron0x21f3d70()*0.00790379);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc550() {
   return (neuron0x21f40b0()*-0.0569557);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc590() {
   return (neuron0x21f43f0()*-2.41939);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc910() {
   return (neuron0x21ef8c0()*-1.17521);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc950() {
   return (neuron0x21efb70()*0.955292);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc990() {
   return (neuron0x21efeb0()*-0.617664);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc9d0() {
   return (neuron0x21f01f0()*0.556582);
}

double NNfunction_nn_chi4_chi4::synapse0x21fca10() {
   return (neuron0x21f0530()*-0.442207);
}

double NNfunction_nn_chi4_chi4::synapse0x21fca50() {
   return (neuron0x21f0870()*1.13202);
}

double NNfunction_nn_chi4_chi4::synapse0x21fca90() {
   return (neuron0x21f0bb0()*0.800574);
}

double NNfunction_nn_chi4_chi4::synapse0x21fcad0() {
   return (neuron0x21f0ef0()*-0.526941);
}

double NNfunction_nn_chi4_chi4::synapse0x21fcb10() {
   return (neuron0x21f1230()*0.305772);
}

double NNfunction_nn_chi4_chi4::synapse0x21fcb50() {
   return (neuron0x21f1570()*-0.0195247);
}

double NNfunction_nn_chi4_chi4::synapse0x21fcb90() {
   return (neuron0x21f18b0()*-0.00558813);
}

double NNfunction_nn_chi4_chi4::synapse0x21fcbd0() {
   return (neuron0x21f1bf0()*0.00382699);
}

double NNfunction_nn_chi4_chi4::synapse0x21fcc10() {
   return (neuron0x21f1f30()*0.132302);
}

double NNfunction_nn_chi4_chi4::synapse0x21fcc50() {
   return (neuron0x21f2270()*-0.818215);
}

double NNfunction_nn_chi4_chi4::synapse0x21fcc90() {
   return (neuron0x21f25b0()*-0.478158);
}

double NNfunction_nn_chi4_chi4::synapse0x21fccd0() {
   return (neuron0x21f28f0()*-0.519119);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc760() {
   return (neuron0x21f2c30()*-0.941775);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc7a0() {
   return (neuron0x21f3190()*-0.125938);
}

double NNfunction_nn_chi4_chi4::synapse0x21fce20() {
   return (neuron0x21f33b0()*0.519025);
}

double NNfunction_nn_chi4_chi4::synapse0x21fce60() {
   return (neuron0x21f36f0()*-0.0461184);
}

double NNfunction_nn_chi4_chi4::synapse0x21fcea0() {
   return (neuron0x21f3a30()*-1.05191);
}

double NNfunction_nn_chi4_chi4::synapse0x21fcee0() {
   return (neuron0x21f3d70()*0.326437);
}

double NNfunction_nn_chi4_chi4::synapse0x21fcf20() {
   return (neuron0x21f40b0()*0.377727);
}

double NNfunction_nn_chi4_chi4::synapse0x21fcf60() {
   return (neuron0x21f43f0()*0.521582);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd2e0() {
   return (neuron0x21ef8c0()*0.0261989);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd320() {
   return (neuron0x21efb70()*-0.048271);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd360() {
   return (neuron0x21efeb0()*-3.05117);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd3a0() {
   return (neuron0x21f01f0()*-0.0235618);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd3e0() {
   return (neuron0x21f0530()*-0.014543);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd420() {
   return (neuron0x21f0870()*-0.0143812);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd460() {
   return (neuron0x21f0bb0()*-0.0180709);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd4a0() {
   return (neuron0x21f0ef0()*-0.035962);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd4e0() {
   return (neuron0x21f1230()*-0.0247178);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd520() {
   return (neuron0x21f1570()*0.00899155);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd560() {
   return (neuron0x21f18b0()*-0.0119219);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd5a0() {
   return (neuron0x21f1bf0()*0.922505);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd5e0() {
   return (neuron0x21f1f30()*0.102504);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd620() {
   return (neuron0x21f2270()*-0.00778378);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd660() {
   return (neuron0x21f25b0()*-0.00444684);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd6a0() {
   return (neuron0x21f28f0()*0.0155612);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd130() {
   return (neuron0x21f2c30()*0.00477692);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd170() {
   return (neuron0x21f3190()*-0.0117529);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd7f0() {
   return (neuron0x21f33b0()*0.0292188);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd830() {
   return (neuron0x21f36f0()*0.0136097);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd870() {
   return (neuron0x21f3a30()*0.0122896);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd8b0() {
   return (neuron0x21f3d70()*0.016461);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd8f0() {
   return (neuron0x21f40b0()*0.00232667);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd930() {
   return (neuron0x21f43f0()*-0.177826);
}

double NNfunction_nn_chi4_chi4::synapse0x21fdcb0() {
   return (neuron0x21ef8c0()*0.0277833);
}

double NNfunction_nn_chi4_chi4::synapse0x21fdcf0() {
   return (neuron0x21efb70()*0.484462);
}

double NNfunction_nn_chi4_chi4::synapse0x21fdd30() {
   return (neuron0x21efeb0()*0.304575);
}

double NNfunction_nn_chi4_chi4::synapse0x21fdd70() {
   return (neuron0x21f01f0()*-0.0215099);
}

double NNfunction_nn_chi4_chi4::synapse0x21fddb0() {
   return (neuron0x21f0530()*0.0384389);
}

double NNfunction_nn_chi4_chi4::synapse0x21fddf0() {
   return (neuron0x21f0870()*0.00228556);
}

double NNfunction_nn_chi4_chi4::synapse0x21fde30() {
   return (neuron0x21f0bb0()*-3.02329e-05);
}

double NNfunction_nn_chi4_chi4::synapse0x21fde70() {
   return (neuron0x21f0ef0()*0.0330805);
}

double NNfunction_nn_chi4_chi4::synapse0x21fdeb0() {
   return (neuron0x21f1230()*-0.0112767);
}

double NNfunction_nn_chi4_chi4::synapse0x21fdef0() {
   return (neuron0x21f1570()*0.00211108);
}

double NNfunction_nn_chi4_chi4::synapse0x21fdf30() {
   return (neuron0x21f18b0()*-0.007297);
}

double NNfunction_nn_chi4_chi4::synapse0x21fdf70() {
   return (neuron0x21f1bf0()*-0.040707);
}

double NNfunction_nn_chi4_chi4::synapse0x21fdfb0() {
   return (neuron0x21f1f30()*0.0819145);
}

double NNfunction_nn_chi4_chi4::synapse0x21fdff0() {
   return (neuron0x21f2270()*0.0540514);
}

double NNfunction_nn_chi4_chi4::synapse0x21fe030() {
   return (neuron0x21f25b0()*0.193884);
}

double NNfunction_nn_chi4_chi4::synapse0x21fe070() {
   return (neuron0x21f28f0()*0.0207462);
}

double NNfunction_nn_chi4_chi4::synapse0x21fdb00() {
   return (neuron0x21f2c30()*-0.00349101);
}

double NNfunction_nn_chi4_chi4::synapse0x21fdb40() {
   return (neuron0x21f3190()*0.0108285);
}

double NNfunction_nn_chi4_chi4::synapse0x21fe1c0() {
   return (neuron0x21f33b0()*0.0206426);
}

double NNfunction_nn_chi4_chi4::synapse0x21fe200() {
   return (neuron0x21f36f0()*0.0185578);
}

double NNfunction_nn_chi4_chi4::synapse0x21fe240() {
   return (neuron0x21f3a30()*-0.0165727);
}

double NNfunction_nn_chi4_chi4::synapse0x21fe280() {
   return (neuron0x21f3d70()*-0.0244146);
}

double NNfunction_nn_chi4_chi4::synapse0x21fe2c0() {
   return (neuron0x21f40b0()*-0.0165565);
}

double NNfunction_nn_chi4_chi4::synapse0x21fe300() {
   return (neuron0x21f43f0()*-0.193489);
}

double NNfunction_nn_chi4_chi4::synapse0x21fe680() {
   return (neuron0x21ef8c0()*0.0749446);
}

double NNfunction_nn_chi4_chi4::synapse0x21efa50() {
   return (neuron0x21efb70()*0.00580543);
}

double NNfunction_nn_chi4_chi4::synapse0x21efa90() {
   return (neuron0x21efeb0()*0.337848);
}

double NNfunction_nn_chi4_chi4::synapse0x21efd90() {
   return (neuron0x21f01f0()*0.00640744);
}

double NNfunction_nn_chi4_chi4::synapse0x21efdd0() {
   return (neuron0x21f0530()*0.0239251);
}

double NNfunction_nn_chi4_chi4::synapse0x21f00d0() {
   return (neuron0x21f0870()*-0.0554026);
}

double NNfunction_nn_chi4_chi4::synapse0x21f0110() {
   return (neuron0x21f0bb0()*-0.0390864);
}

double NNfunction_nn_chi4_chi4::synapse0x21f0410() {
   return (neuron0x21f0ef0()*0.0322379);
}

double NNfunction_nn_chi4_chi4::synapse0x21f0450() {
   return (neuron0x21f1230()*0.00741906);
}

double NNfunction_nn_chi4_chi4::synapse0x21f0750() {
   return (neuron0x21f1570()*0.0956063);
}

double NNfunction_nn_chi4_chi4::synapse0x21f0790() {
   return (neuron0x21f18b0()*1.16681e-05);
}

double NNfunction_nn_chi4_chi4::synapse0x21f0a90() {
   return (neuron0x21f1bf0()*-4.34705);
}

double NNfunction_nn_chi4_chi4::synapse0x21f0ad0() {
   return (neuron0x21f1f30()*-0.132025);
}

double NNfunction_nn_chi4_chi4::synapse0x21f0dd0() {
   return (neuron0x21f2270()*-0.00730756);
}

double NNfunction_nn_chi4_chi4::synapse0x21f0e10() {
   return (neuron0x21f25b0()*0.0595177);
}

double NNfunction_nn_chi4_chi4::synapse0x21f1110() {
   return (neuron0x21f28f0()*0.00122572);
}

double NNfunction_nn_chi4_chi4::synapse0x21f1150() {
   return (neuron0x21f2c30()*0.0182582);
}

double NNfunction_nn_chi4_chi4::synapse0x21f1450() {
   return (neuron0x21f3190()*-0.0106867);
}

double NNfunction_nn_chi4_chi4::synapse0x21f1490() {
   return (neuron0x21f33b0()*0.0242563);
}

double NNfunction_nn_chi4_chi4::synapse0x21f1790() {
   return (neuron0x21f36f0()*-0.0373818);
}

double NNfunction_nn_chi4_chi4::synapse0x21f17d0() {
   return (neuron0x21f3a30()*-0.0752424);
}

double NNfunction_nn_chi4_chi4::synapse0x21f1ad0() {
   return (neuron0x21f3d70()*-0.00885621);
}

double NNfunction_nn_chi4_chi4::synapse0x21f1b10() {
   return (neuron0x21f40b0()*-0.0148172);
}

double NNfunction_nn_chi4_chi4::synapse0x21f1e10() {
   return (neuron0x21f43f0()*0.111585);
}

double NNfunction_nn_chi4_chi4::synapse0x21f1e50() {
   return (neuron0x21ef8c0()*0.0487592);
}

double NNfunction_nn_chi4_chi4::synapse0x21f2b10() {
   return (neuron0x21efb70()*-0.0386975);
}

double NNfunction_nn_chi4_chi4::synapse0x21f2b50() {
   return (neuron0x21efeb0()*0.579486);
}

double NNfunction_nn_chi4_chi4::synapse0x21fe4d0() {
   return (neuron0x21f01f0()*-0.00924768);
}

double NNfunction_nn_chi4_chi4::synapse0x21fe510() {
   return (neuron0x21f0530()*-0.0117193);
}

double NNfunction_nn_chi4_chi4::synapse0x21f2e50() {
   return (neuron0x21f0870()*0.00389589);
}

double NNfunction_nn_chi4_chi4::synapse0x21f2e90() {
   return (neuron0x21f0bb0()*-0.00900609);
}

double NNfunction_nn_chi4_chi4::synapse0x1faa890() {
   return (neuron0x21f0ef0()*0.021035);
}

double NNfunction_nn_chi4_chi4::synapse0x1faa8d0() {
   return (neuron0x21f1230()*0.0176227);
}

double NNfunction_nn_chi4_chi4::synapse0x21f35d0() {
   return (neuron0x21f1570()*0.0165887);
}

double NNfunction_nn_chi4_chi4::synapse0x21f3610() {
   return (neuron0x21f18b0()*0.00559759);
}

double NNfunction_nn_chi4_chi4::synapse0x21f3910() {
   return (neuron0x21f1bf0()*0.519056);
}

double NNfunction_nn_chi4_chi4::synapse0x21f3950() {
   return (neuron0x21f1f30()*0.0146701);
}

double NNfunction_nn_chi4_chi4::synapse0x21f3c50() {
   return (neuron0x21f2270()*-0.016498);
}

double NNfunction_nn_chi4_chi4::synapse0x21f3c90() {
   return (neuron0x21f25b0()*-0.0198611);
}

double NNfunction_nn_chi4_chi4::synapse0x21f3f90() {
   return (neuron0x21f28f0()*0.0342023);
}

double NNfunction_nn_chi4_chi4::synapse0x21f3fd0() {
   return (neuron0x21f2c30()*-0.00959612);
}

double NNfunction_nn_chi4_chi4::synapse0x21f42d0() {
   return (neuron0x21f3190()*0.0151251);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4310() {
   return (neuron0x21f33b0()*0.0184248);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4610() {
   return (neuron0x21f36f0()*-0.0130627);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4650() {
   return (neuron0x21f3a30()*-0.00492166);
}

double NNfunction_nn_chi4_chi4::synapse0x21f2150() {
   return (neuron0x21f3d70()*0.00694408);
}

double NNfunction_nn_chi4_chi4::synapse0x21f2190() {
   return (neuron0x21f40b0()*0.0204035);
}

double NNfunction_nn_chi4_chi4::synapse0x22003f0() {
   return (neuron0x21f43f0()*0.0727254);
}

double NNfunction_nn_chi4_chi4::synapse0x2200770() {
   return (neuron0x21ef8c0()*-0.273745);
}

double NNfunction_nn_chi4_chi4::synapse0x22007b0() {
   return (neuron0x21efb70()*-0.190433);
}

double NNfunction_nn_chi4_chi4::synapse0x22007f0() {
   return (neuron0x21efeb0()*0.0908654);
}

double NNfunction_nn_chi4_chi4::synapse0x2200830() {
   return (neuron0x21f01f0()*-0.216596);
}

double NNfunction_nn_chi4_chi4::synapse0x2200870() {
   return (neuron0x21f0530()*-0.112205);
}

double NNfunction_nn_chi4_chi4::synapse0x22008b0() {
   return (neuron0x21f0870()*-0.109003);
}

double NNfunction_nn_chi4_chi4::synapse0x22008f0() {
   return (neuron0x21f0bb0()*-0.1367);
}

double NNfunction_nn_chi4_chi4::synapse0x2200930() {
   return (neuron0x21f0ef0()*-0.303108);
}

double NNfunction_nn_chi4_chi4::synapse0x2200970() {
   return (neuron0x21f1230()*-0.31328);
}

double NNfunction_nn_chi4_chi4::synapse0x22009b0() {
   return (neuron0x21f1570()*-0.279021);
}

double NNfunction_nn_chi4_chi4::synapse0x22009f0() {
   return (neuron0x21f18b0()*0.187712);
}

double NNfunction_nn_chi4_chi4::synapse0x2200a30() {
   return (neuron0x21f1bf0()*-0.300347);
}

double NNfunction_nn_chi4_chi4::synapse0x2200a70() {
   return (neuron0x21f1f30()*-0.469981);
}

double NNfunction_nn_chi4_chi4::synapse0x2200ab0() {
   return (neuron0x21f2270()*0.128898);
}

double NNfunction_nn_chi4_chi4::synapse0x2200af0() {
   return (neuron0x21f25b0()*0.0550377);
}

double NNfunction_nn_chi4_chi4::synapse0x2200b30() {
   return (neuron0x21f28f0()*0.0139219);
}

double NNfunction_nn_chi4_chi4::synapse0x22005c0() {
   return (neuron0x21f2c30()*-0.0202536);
}

double NNfunction_nn_chi4_chi4::synapse0x2200600() {
   return (neuron0x21f3190()*-0.278529);
}

double NNfunction_nn_chi4_chi4::synapse0x2200c80() {
   return (neuron0x21f33b0()*0.317761);
}

double NNfunction_nn_chi4_chi4::synapse0x2200cc0() {
   return (neuron0x21f36f0()*-0.000613692);
}

double NNfunction_nn_chi4_chi4::synapse0x2200d00() {
   return (neuron0x21f3a30()*0.222333);
}

double NNfunction_nn_chi4_chi4::synapse0x2200d40() {
   return (neuron0x21f3d70()*0.0243812);
}

double NNfunction_nn_chi4_chi4::synapse0x2200d80() {
   return (neuron0x21f40b0()*0.118803);
}

double NNfunction_nn_chi4_chi4::synapse0x2200dc0() {
   return (neuron0x21f43f0()*-0.608469);
}

double NNfunction_nn_chi4_chi4::synapse0x2201140() {
   return (neuron0x21ef8c0()*0.00384141);
}

double NNfunction_nn_chi4_chi4::synapse0x2201180() {
   return (neuron0x21efb70()*-0.057251);
}

double NNfunction_nn_chi4_chi4::synapse0x22011c0() {
   return (neuron0x21efeb0()*-0.151843);
}

double NNfunction_nn_chi4_chi4::synapse0x2201200() {
   return (neuron0x21f01f0()*2.15666);
}

double NNfunction_nn_chi4_chi4::synapse0x2201240() {
   return (neuron0x21f0530()*-0.005211);
}

double NNfunction_nn_chi4_chi4::synapse0x2201280() {
   return (neuron0x21f0870()*0.00784167);
}

double NNfunction_nn_chi4_chi4::synapse0x22012c0() {
   return (neuron0x21f0bb0()*-0.0309261);
}

double NNfunction_nn_chi4_chi4::synapse0x2201300() {
   return (neuron0x21f0ef0()*-0.0152902);
}

double NNfunction_nn_chi4_chi4::synapse0x2201340() {
   return (neuron0x21f1230()*0.00668711);
}

double NNfunction_nn_chi4_chi4::synapse0x2201380() {
   return (neuron0x21f1570()*-0.0290882);
}

double NNfunction_nn_chi4_chi4::synapse0x22013c0() {
   return (neuron0x21f18b0()*-0.00637123);
}

double NNfunction_nn_chi4_chi4::synapse0x2201400() {
   return (neuron0x21f1bf0()*0.0252496);
}

double NNfunction_nn_chi4_chi4::synapse0x2201440() {
   return (neuron0x21f1f30()*0.0113964);
}

double NNfunction_nn_chi4_chi4::synapse0x2201480() {
   return (neuron0x21f2270()*0.0053081);
}

double NNfunction_nn_chi4_chi4::synapse0x22014c0() {
   return (neuron0x21f25b0()*0.0276637);
}

double NNfunction_nn_chi4_chi4::synapse0x2201500() {
   return (neuron0x21f28f0()*0.0395532);
}

double NNfunction_nn_chi4_chi4::synapse0x2200f90() {
   return (neuron0x21f2c30()*-0.00641312);
}

double NNfunction_nn_chi4_chi4::synapse0x2200fd0() {
   return (neuron0x21f3190()*0.0332335);
}

double NNfunction_nn_chi4_chi4::synapse0x2201650() {
   return (neuron0x21f33b0()*0.0169331);
}

double NNfunction_nn_chi4_chi4::synapse0x2201690() {
   return (neuron0x21f36f0()*0.00148524);
}

double NNfunction_nn_chi4_chi4::synapse0x22016d0() {
   return (neuron0x21f3a30()*0.00121009);
}

double NNfunction_nn_chi4_chi4::synapse0x2201710() {
   return (neuron0x21f3d70()*0.0141425);
}

double NNfunction_nn_chi4_chi4::synapse0x2201750() {
   return (neuron0x21f40b0()*0.0127097);
}

double NNfunction_nn_chi4_chi4::synapse0x2201790() {
   return (neuron0x21f43f0()*0.0166575);
}

double NNfunction_nn_chi4_chi4::synapse0x2201b10() {
   return (neuron0x21ef8c0()*0.676619);
}

double NNfunction_nn_chi4_chi4::synapse0x2201b50() {
   return (neuron0x21efb70()*0.229664);
}

double NNfunction_nn_chi4_chi4::synapse0x2201b90() {
   return (neuron0x21efeb0()*-0.500324);
}

double NNfunction_nn_chi4_chi4::synapse0x2201bd0() {
   return (neuron0x21f01f0()*0.211111);
}

double NNfunction_nn_chi4_chi4::synapse0x2201c10() {
   return (neuron0x21f0530()*0.166523);
}

double NNfunction_nn_chi4_chi4::synapse0x2201c50() {
   return (neuron0x21f0870()*-0.384791);
}

double NNfunction_nn_chi4_chi4::synapse0x2201c90() {
   return (neuron0x21f0bb0()*0.0544085);
}

double NNfunction_nn_chi4_chi4::synapse0x2201cd0() {
   return (neuron0x21f0ef0()*-1.0358);
}

double NNfunction_nn_chi4_chi4::synapse0x2201d10() {
   return (neuron0x21f1230()*-0.307001);
}

double NNfunction_nn_chi4_chi4::synapse0x2201d50() {
   return (neuron0x21f1570()*-0.401631);
}

double NNfunction_nn_chi4_chi4::synapse0x2201d90() {
   return (neuron0x21f18b0()*-0.204475);
}

double NNfunction_nn_chi4_chi4::synapse0x2201dd0() {
   return (neuron0x21f1bf0()*-1.22568);
}

double NNfunction_nn_chi4_chi4::synapse0x2201e10() {
   return (neuron0x21f1f30()*0.574184);
}

double NNfunction_nn_chi4_chi4::synapse0x2201e50() {
   return (neuron0x21f2270()*0.436764);
}

double NNfunction_nn_chi4_chi4::synapse0x2201e90() {
   return (neuron0x21f25b0()*0.410764);
}

double NNfunction_nn_chi4_chi4::synapse0x2201ed0() {
   return (neuron0x21f28f0()*-0.900453);
}

double NNfunction_nn_chi4_chi4::synapse0x2201960() {
   return (neuron0x21f2c30()*-0.0808499);
}

double NNfunction_nn_chi4_chi4::synapse0x22019a0() {
   return (neuron0x21f3190()*0.244743);
}

double NNfunction_nn_chi4_chi4::synapse0x2202020() {
   return (neuron0x21f33b0()*0.0454361);
}

double NNfunction_nn_chi4_chi4::synapse0x2202060() {
   return (neuron0x21f36f0()*-0.189327);
}

double NNfunction_nn_chi4_chi4::synapse0x22020a0() {
   return (neuron0x21f3a30()*-0.523631);
}

double NNfunction_nn_chi4_chi4::synapse0x22020e0() {
   return (neuron0x21f3d70()*-0.439806);
}

double NNfunction_nn_chi4_chi4::synapse0x2202120() {
   return (neuron0x21f40b0()*0.254753);
}

double NNfunction_nn_chi4_chi4::synapse0x2202160() {
   return (neuron0x21f43f0()*0.4944);
}

double NNfunction_nn_chi4_chi4::synapse0x22024e0() {
   return (neuron0x21ef8c0()*0.0979863);
}

double NNfunction_nn_chi4_chi4::synapse0x2202520() {
   return (neuron0x21efb70()*0.742662);
}

double NNfunction_nn_chi4_chi4::synapse0x2202560() {
   return (neuron0x21efeb0()*1.61988);
}

double NNfunction_nn_chi4_chi4::synapse0x22025a0() {
   return (neuron0x21f01f0()*-0.156223);
}

double NNfunction_nn_chi4_chi4::synapse0x22025e0() {
   return (neuron0x21f0530()*0.0600687);
}

double NNfunction_nn_chi4_chi4::synapse0x2202620() {
   return (neuron0x21f0870()*-0.0667516);
}

double NNfunction_nn_chi4_chi4::synapse0x2202660() {
   return (neuron0x21f0bb0()*0.109035);
}

double NNfunction_nn_chi4_chi4::synapse0x22026a0() {
   return (neuron0x21f0ef0()*0.179126);
}

double NNfunction_nn_chi4_chi4::synapse0x22026e0() {
   return (neuron0x21f1230()*-0.0834472);
}

double NNfunction_nn_chi4_chi4::synapse0x2202720() {
   return (neuron0x21f1570()*-0.0832393);
}

double NNfunction_nn_chi4_chi4::synapse0x2202760() {
   return (neuron0x21f18b0()*0.0281629);
}

double NNfunction_nn_chi4_chi4::synapse0x22027a0() {
   return (neuron0x21f1bf0()*-0.096711);
}

double NNfunction_nn_chi4_chi4::synapse0x22027e0() {
   return (neuron0x21f1f30()*0.29527);
}

double NNfunction_nn_chi4_chi4::synapse0x2202820() {
   return (neuron0x21f2270()*0.0633982);
}

double NNfunction_nn_chi4_chi4::synapse0x2202860() {
   return (neuron0x21f25b0()*-2.30747);
}

double NNfunction_nn_chi4_chi4::synapse0x22028a0() {
   return (neuron0x21f28f0()*-0.0571114);
}

double NNfunction_nn_chi4_chi4::synapse0x2202330() {
   return (neuron0x21f2c30()*0.0307308);
}

double NNfunction_nn_chi4_chi4::synapse0x2202370() {
   return (neuron0x21f3190()*0.251538);
}

double NNfunction_nn_chi4_chi4::synapse0x22029f0() {
   return (neuron0x21f33b0()*0.143363);
}

double NNfunction_nn_chi4_chi4::synapse0x2202a30() {
   return (neuron0x21f36f0()*-0.0480259);
}

double NNfunction_nn_chi4_chi4::synapse0x2202a70() {
   return (neuron0x21f3a30()*-0.0584001);
}

double NNfunction_nn_chi4_chi4::synapse0x2202ab0() {
   return (neuron0x21f3d70()*-0.0732796);
}

double NNfunction_nn_chi4_chi4::synapse0x2202af0() {
   return (neuron0x21f40b0()*-0.0489297);
}

double NNfunction_nn_chi4_chi4::synapse0x2202b30() {
   return (neuron0x21f43f0()*-0.285412);
}

double NNfunction_nn_chi4_chi4::synapse0x2202eb0() {
   return (neuron0x21ef8c0()*0.0126181);
}

double NNfunction_nn_chi4_chi4::synapse0x2202ef0() {
   return (neuron0x21efb70()*-2.27004);
}

double NNfunction_nn_chi4_chi4::synapse0x2202f30() {
   return (neuron0x21efeb0()*0.951982);
}

double NNfunction_nn_chi4_chi4::synapse0x2202f70() {
   return (neuron0x21f01f0()*0.00906565);
}

double NNfunction_nn_chi4_chi4::synapse0x2202fb0() {
   return (neuron0x21f0530()*-0.0190426);
}

double NNfunction_nn_chi4_chi4::synapse0x2202ff0() {
   return (neuron0x21f0870()*-0.0293774);
}

double NNfunction_nn_chi4_chi4::synapse0x2203030() {
   return (neuron0x21f0bb0()*-0.0328449);
}

double NNfunction_nn_chi4_chi4::synapse0x2203070() {
   return (neuron0x21f0ef0()*-0.00940875);
}

double NNfunction_nn_chi4_chi4::synapse0x22030b0() {
   return (neuron0x21f1230()*-0.00157305);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb270() {
   return (neuron0x21f1570()*-0.0252677);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb2b0() {
   return (neuron0x21f18b0()*0.030025);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb2f0() {
   return (neuron0x21f1bf0()*-0.0755628);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb330() {
   return (neuron0x21f1f30()*0.0494092);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb370() {
   return (neuron0x21f2270()*-0.0610425);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb3b0() {
   return (neuron0x21f25b0()*0.82809);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb3f0() {
   return (neuron0x21f28f0()*0.038106);
}

double NNfunction_nn_chi4_chi4::synapse0x2202d00() {
   return (neuron0x21f2c30()*0.0780243);
}

double NNfunction_nn_chi4_chi4::synapse0x2202d40() {
   return (neuron0x21f3190()*-0.0838772);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb540() {
   return (neuron0x21f33b0()*0.00581702);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb580() {
   return (neuron0x21f36f0()*0.0190434);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb5c0() {
   return (neuron0x21f3a30()*-0.0170137);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb600() {
   return (neuron0x21f3d70()*0.0249506);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb640() {
   return (neuron0x21f40b0()*-0.00186608);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb680() {
   return (neuron0x21f43f0()*0.840743);
}

double NNfunction_nn_chi4_chi4::synapse0x21fba00() {
   return (neuron0x21ef8c0()*0.0820477);
}

double NNfunction_nn_chi4_chi4::synapse0x21fba40() {
   return (neuron0x21efb70()*0.22285);
}

double NNfunction_nn_chi4_chi4::synapse0x21fba80() {
   return (neuron0x21efeb0()*0.0282172);
}

double NNfunction_nn_chi4_chi4::synapse0x21fbac0() {
   return (neuron0x21f01f0()*-0.0585971);
}

double NNfunction_nn_chi4_chi4::synapse0x21fbb00() {
   return (neuron0x21f0530()*0.0992766);
}

double NNfunction_nn_chi4_chi4::synapse0x21fbb40() {
   return (neuron0x21f0870()*-0.00963249);
}

double NNfunction_nn_chi4_chi4::synapse0x21fbb80() {
   return (neuron0x21f0bb0()*0.0507512);
}

double NNfunction_nn_chi4_chi4::synapse0x21fbbc0() {
   return (neuron0x21f0ef0()*0.0917461);
}

double NNfunction_nn_chi4_chi4::synapse0x21fbc00() {
   return (neuron0x21f1230()*-0.0548543);
}

double NNfunction_nn_chi4_chi4::synapse0x21fbc40() {
   return (neuron0x21f1570()*-0.115975);
}

double NNfunction_nn_chi4_chi4::synapse0x21fbc80() {
   return (neuron0x21f18b0()*-0.100495);
}

double NNfunction_nn_chi4_chi4::synapse0x21fbcc0() {
   return (neuron0x21f1bf0()*-0.129027);
}

double NNfunction_nn_chi4_chi4::synapse0x21fbd00() {
   return (neuron0x21f1f30()*-0.00604834);
}

double NNfunction_nn_chi4_chi4::synapse0x21fbd40() {
   return (neuron0x21f2270()*0.00561976);
}

double NNfunction_nn_chi4_chi4::synapse0x21fbd80() {
   return (neuron0x21f25b0()*1.74371);
}

double NNfunction_nn_chi4_chi4::synapse0x21fbdc0() {
   return (neuron0x21f28f0()*-0.0191721);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb850() {
   return (neuron0x21f2c30()*0.00867351);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb890() {
   return (neuron0x21f3190()*-0.114674);
}

double NNfunction_nn_chi4_chi4::synapse0x21fbf10() {
   return (neuron0x21f33b0()*-0.0350385);
}

double NNfunction_nn_chi4_chi4::synapse0x21fbf50() {
   return (neuron0x21f36f0()*-0.0773885);
}

double NNfunction_nn_chi4_chi4::synapse0x21fbf90() {
   return (neuron0x21f3a30()*0.0461277);
}

double NNfunction_nn_chi4_chi4::synapse0x21fbfd0() {
   return (neuron0x21f3d70()*-0.0230858);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc010() {
   return (neuron0x21f40b0()*-0.00833567);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc050() {
   return (neuron0x21f43f0()*-0.208045);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc220() {
   return (neuron0x21ef8c0()*-0.0474965);
}

double NNfunction_nn_chi4_chi4::synapse0x22052b0() {
   return (neuron0x21efb70()*7.95802);
}

double NNfunction_nn_chi4_chi4::synapse0x22052f0() {
   return (neuron0x21efeb0()*7.07159);
}

double NNfunction_nn_chi4_chi4::synapse0x2205330() {
   return (neuron0x21f01f0()*-0.0469358);
}

double NNfunction_nn_chi4_chi4::synapse0x2205370() {
   return (neuron0x21f0530()*0.0412892);
}

double NNfunction_nn_chi4_chi4::synapse0x22053b0() {
   return (neuron0x21f0870()*0.0551902);
}

double NNfunction_nn_chi4_chi4::synapse0x22053f0() {
   return (neuron0x21f0bb0()*-0.0535505);
}

double NNfunction_nn_chi4_chi4::synapse0x2205430() {
   return (neuron0x21f0ef0()*0.042765);
}

double NNfunction_nn_chi4_chi4::synapse0x2205470() {
   return (neuron0x21f1230()*0.0316484);
}

double NNfunction_nn_chi4_chi4::synapse0x22054b0() {
   return (neuron0x21f1570()*-0.0154484);
}

double NNfunction_nn_chi4_chi4::synapse0x22054f0() {
   return (neuron0x21f18b0()*-0.101352);
}

double NNfunction_nn_chi4_chi4::synapse0x2205530() {
   return (neuron0x21f1bf0()*0.267129);
}

double NNfunction_nn_chi4_chi4::synapse0x2205570() {
   return (neuron0x21f1f30()*0.117788);
}

double NNfunction_nn_chi4_chi4::synapse0x22055b0() {
   return (neuron0x21f2270()*0.036087);
}

double NNfunction_nn_chi4_chi4::synapse0x22055f0() {
   return (neuron0x21f25b0()*0.0108185);
}

double NNfunction_nn_chi4_chi4::synapse0x2205630() {
   return (neuron0x21f28f0()*0.0138532);
}

double NNfunction_nn_chi4_chi4::synapse0x2205100() {
   return (neuron0x21f2c30()*-0.10205);
}

double NNfunction_nn_chi4_chi4::synapse0x2205140() {
   return (neuron0x21f3190()*0.00868246);
}

double NNfunction_nn_chi4_chi4::synapse0x2205780() {
   return (neuron0x21f33b0()*0.0217138);
}

double NNfunction_nn_chi4_chi4::synapse0x22057c0() {
   return (neuron0x21f36f0()*0.000682567);
}

double NNfunction_nn_chi4_chi4::synapse0x2205800() {
   return (neuron0x21f3a30()*-0.0343896);
}

double NNfunction_nn_chi4_chi4::synapse0x2205840() {
   return (neuron0x21f3d70()*0.0238332);
}

double NNfunction_nn_chi4_chi4::synapse0x2205880() {
   return (neuron0x21f40b0()*-0.00130688);
}

double NNfunction_nn_chi4_chi4::synapse0x22058c0() {
   return (neuron0x21f43f0()*0.0277847);
}

double NNfunction_nn_chi4_chi4::synapse0x2205c40() {
   return (neuron0x21ef8c0()*-0.0185587);
}

double NNfunction_nn_chi4_chi4::synapse0x2205c80() {
   return (neuron0x21efb70()*2.20809);
}

double NNfunction_nn_chi4_chi4::synapse0x2205cc0() {
   return (neuron0x21efeb0()*2.15393);
}

double NNfunction_nn_chi4_chi4::synapse0x2205d00() {
   return (neuron0x21f01f0()*0.00566681);
}

double NNfunction_nn_chi4_chi4::synapse0x2205d40() {
   return (neuron0x21f0530()*0.0295929);
}

double NNfunction_nn_chi4_chi4::synapse0x2205d80() {
   return (neuron0x21f0870()*0.0600011);
}

double NNfunction_nn_chi4_chi4::synapse0x2205dc0() {
   return (neuron0x21f0bb0()*0.0293717);
}

double NNfunction_nn_chi4_chi4::synapse0x2205e00() {
   return (neuron0x21f0ef0()*-0.0233049);
}

double NNfunction_nn_chi4_chi4::synapse0x2205e40() {
   return (neuron0x21f1230()*0.0784066);
}

double NNfunction_nn_chi4_chi4::synapse0x2205e80() {
   return (neuron0x21f1570()*0.00622461);
}

double NNfunction_nn_chi4_chi4::synapse0x2205ec0() {
   return (neuron0x21f18b0()*0.0501945);
}

double NNfunction_nn_chi4_chi4::synapse0x2205f00() {
   return (neuron0x21f1bf0()*0.157025);
}

double NNfunction_nn_chi4_chi4::synapse0x2205f40() {
   return (neuron0x21f1f30()*0.155809);
}

double NNfunction_nn_chi4_chi4::synapse0x2205f80() {
   return (neuron0x21f2270()*-0.0532994);
}

double NNfunction_nn_chi4_chi4::synapse0x2205fc0() {
   return (neuron0x21f25b0()*-0.117446);
}

double NNfunction_nn_chi4_chi4::synapse0x2206000() {
   return (neuron0x21f28f0()*-0.015274);
}

double NNfunction_nn_chi4_chi4::synapse0x2205a90() {
   return (neuron0x21f2c30()*-0.0655185);
}

double NNfunction_nn_chi4_chi4::synapse0x2205ad0() {
   return (neuron0x21f3190()*-0.00737207);
}

double NNfunction_nn_chi4_chi4::synapse0x2206150() {
   return (neuron0x21f33b0()*0.0298361);
}

double NNfunction_nn_chi4_chi4::synapse0x2206190() {
   return (neuron0x21f36f0()*-0.00688694);
}

double NNfunction_nn_chi4_chi4::synapse0x22061d0() {
   return (neuron0x21f3a30()*0.0156047);
}

double NNfunction_nn_chi4_chi4::synapse0x2206210() {
   return (neuron0x21f3d70()*-0.043438);
}

double NNfunction_nn_chi4_chi4::synapse0x2206250() {
   return (neuron0x21f40b0()*0.064818);
}

double NNfunction_nn_chi4_chi4::synapse0x2206290() {
   return (neuron0x21f43f0()*0.199221);
}

double NNfunction_nn_chi4_chi4::synapse0x2206610() {
   return (neuron0x21ef8c0()*0.00353448);
}

double NNfunction_nn_chi4_chi4::synapse0x2206650() {
   return (neuron0x21efb70()*-0.415727);
}

double NNfunction_nn_chi4_chi4::synapse0x2206690() {
   return (neuron0x21efeb0()*1.72197);
}

double NNfunction_nn_chi4_chi4::synapse0x22066d0() {
   return (neuron0x21f01f0()*-0.0708216);
}

double NNfunction_nn_chi4_chi4::synapse0x2206710() {
   return (neuron0x21f0530()*-0.00805449);
}

double NNfunction_nn_chi4_chi4::synapse0x2206750() {
   return (neuron0x21f0870()*0.0064637);
}

double NNfunction_nn_chi4_chi4::synapse0x2206790() {
   return (neuron0x21f0bb0()*0.0339707);
}

double NNfunction_nn_chi4_chi4::synapse0x22067d0() {
   return (neuron0x21f0ef0()*0.0184363);
}

double NNfunction_nn_chi4_chi4::synapse0x2206810() {
   return (neuron0x21f1230()*-0.0242891);
}

double NNfunction_nn_chi4_chi4::synapse0x2206850() {
   return (neuron0x21f1570()*-0.0574146);
}

double NNfunction_nn_chi4_chi4::synapse0x2206890() {
   return (neuron0x21f18b0()*-0.0269324);
}

double NNfunction_nn_chi4_chi4::synapse0x22068d0() {
   return (neuron0x21f1bf0()*-0.607155);
}

double NNfunction_nn_chi4_chi4::synapse0x2206910() {
   return (neuron0x21f1f30()*-0.0920594);
}

double NNfunction_nn_chi4_chi4::synapse0x2206950() {
   return (neuron0x21f2270()*0.0717848);
}

double NNfunction_nn_chi4_chi4::synapse0x2206990() {
   return (neuron0x21f25b0()*0.0625213);
}

double NNfunction_nn_chi4_chi4::synapse0x22069d0() {
   return (neuron0x21f28f0()*0.0268031);
}

double NNfunction_nn_chi4_chi4::synapse0x2206460() {
   return (neuron0x21f2c30()*0.0373088);
}

double NNfunction_nn_chi4_chi4::synapse0x22064a0() {
   return (neuron0x21f3190()*0.0275107);
}

double NNfunction_nn_chi4_chi4::synapse0x2206b20() {
   return (neuron0x21f33b0()*0.0289466);
}

double NNfunction_nn_chi4_chi4::synapse0x2206b60() {
   return (neuron0x21f36f0()*-0.00164228);
}

double NNfunction_nn_chi4_chi4::synapse0x2206ba0() {
   return (neuron0x21f3a30()*0.00345446);
}

double NNfunction_nn_chi4_chi4::synapse0x2206be0() {
   return (neuron0x21f3d70()*0.0216334);
}

double NNfunction_nn_chi4_chi4::synapse0x2206c20() {
   return (neuron0x21f40b0()*0.00507712);
}

double NNfunction_nn_chi4_chi4::synapse0x2206c60() {
   return (neuron0x21f43f0()*-0.253777);
}

double NNfunction_nn_chi4_chi4::synapse0x2206fe0() {
   return (neuron0x21ef8c0()*-0.00444762);
}

double NNfunction_nn_chi4_chi4::synapse0x2207020() {
   return (neuron0x21efb70()*5.91362);
}

double NNfunction_nn_chi4_chi4::synapse0x2207060() {
   return (neuron0x21efeb0()*-3.73952);
}

double NNfunction_nn_chi4_chi4::synapse0x22070a0() {
   return (neuron0x21f01f0()*0.0242778);
}

double NNfunction_nn_chi4_chi4::synapse0x22070e0() {
   return (neuron0x21f0530()*-0.0405602);
}

double NNfunction_nn_chi4_chi4::synapse0x2207120() {
   return (neuron0x21f0870()*-0.0815504);
}

double NNfunction_nn_chi4_chi4::synapse0x2207160() {
   return (neuron0x21f0bb0()*-0.0472912);
}

double NNfunction_nn_chi4_chi4::synapse0x22071a0() {
   return (neuron0x21f0ef0()*-0.0438376);
}

double NNfunction_nn_chi4_chi4::synapse0x22071e0() {
   return (neuron0x21f1230()*-0.0202938);
}

double NNfunction_nn_chi4_chi4::synapse0x2207220() {
   return (neuron0x21f1570()*0.0399035);
}

double NNfunction_nn_chi4_chi4::synapse0x2207260() {
   return (neuron0x21f18b0()*0.0619825);
}

double NNfunction_nn_chi4_chi4::synapse0x22072a0() {
   return (neuron0x21f1bf0()*0.131894);
}

double NNfunction_nn_chi4_chi4::synapse0x22072e0() {
   return (neuron0x21f1f30()*-0.00832354);
}

double NNfunction_nn_chi4_chi4::synapse0x2207320() {
   return (neuron0x21f2270()*-0.0332782);
}

double NNfunction_nn_chi4_chi4::synapse0x2207360() {
   return (neuron0x21f25b0()*-0.227939);
}

double NNfunction_nn_chi4_chi4::synapse0x22073a0() {
   return (neuron0x21f28f0()*0.0491482);
}

double NNfunction_nn_chi4_chi4::synapse0x2206e30() {
   return (neuron0x21f2c30()*-0.04166);
}

double NNfunction_nn_chi4_chi4::synapse0x2206e70() {
   return (neuron0x21f3190()*-0.014469);
}

double NNfunction_nn_chi4_chi4::synapse0x22074f0() {
   return (neuron0x21f33b0()*0.0402637);
}

double NNfunction_nn_chi4_chi4::synapse0x2207530() {
   return (neuron0x21f36f0()*0.0671857);
}

double NNfunction_nn_chi4_chi4::synapse0x2207570() {
   return (neuron0x21f3a30()*-0.0196932);
}

double NNfunction_nn_chi4_chi4::synapse0x22075b0() {
   return (neuron0x21f3d70()*0.0161918);
}

double NNfunction_nn_chi4_chi4::synapse0x22075f0() {
   return (neuron0x21f40b0()*-0.00292143);
}

double NNfunction_nn_chi4_chi4::synapse0x2207630() {
   return (neuron0x21f43f0()*-0.541284);
}

double NNfunction_nn_chi4_chi4::synapse0x22079b0() {
   return (neuron0x21ef8c0()*0.158833);
}

double NNfunction_nn_chi4_chi4::synapse0x22079f0() {
   return (neuron0x21efb70()*1.78927);
}

double NNfunction_nn_chi4_chi4::synapse0x2207a30() {
   return (neuron0x21efeb0()*-2.37546);
}

double NNfunction_nn_chi4_chi4::synapse0x2207a70() {
   return (neuron0x21f01f0()*0.0621473);
}

double NNfunction_nn_chi4_chi4::synapse0x2207ab0() {
   return (neuron0x21f0530()*-0.00220525);
}

double NNfunction_nn_chi4_chi4::synapse0x2207af0() {
   return (neuron0x21f0870()*-0.00467162);
}

double NNfunction_nn_chi4_chi4::synapse0x2207b30() {
   return (neuron0x21f0bb0()*0.0147314);
}

double NNfunction_nn_chi4_chi4::synapse0x2207b70() {
   return (neuron0x21f0ef0()*0.0555218);
}

double NNfunction_nn_chi4_chi4::synapse0x2207bb0() {
   return (neuron0x21f1230()*0.0152244);
}

double NNfunction_nn_chi4_chi4::synapse0x2207bf0() {
   return (neuron0x21f1570()*0.0052323);
}

double NNfunction_nn_chi4_chi4::synapse0x2207c30() {
   return (neuron0x21f18b0()*0.107037);
}

double NNfunction_nn_chi4_chi4::synapse0x2207c70() {
   return (neuron0x21f1bf0()*-0.211452);
}

double NNfunction_nn_chi4_chi4::synapse0x2207cb0() {
   return (neuron0x21f1f30()*-0.0574214);
}

double NNfunction_nn_chi4_chi4::synapse0x2207cf0() {
   return (neuron0x21f2270()*0.0528934);
}

double NNfunction_nn_chi4_chi4::synapse0x2207d30() {
   return (neuron0x21f25b0()*-0.0513645);
}

double NNfunction_nn_chi4_chi4::synapse0x2207d70() {
   return (neuron0x21f28f0()*0.020188);
}

double NNfunction_nn_chi4_chi4::synapse0x2207800() {
   return (neuron0x21f2c30()*-0.0251087);
}

double NNfunction_nn_chi4_chi4::synapse0x2207840() {
   return (neuron0x21f3190()*0.120037);
}

double NNfunction_nn_chi4_chi4::synapse0x2207ec0() {
   return (neuron0x21f33b0()*-0.0454586);
}

double NNfunction_nn_chi4_chi4::synapse0x2207f00() {
   return (neuron0x21f36f0()*0.0373801);
}

double NNfunction_nn_chi4_chi4::synapse0x2207f40() {
   return (neuron0x21f3a30()*0.0580573);
}

double NNfunction_nn_chi4_chi4::synapse0x2207f80() {
   return (neuron0x21f3d70()*-0.00626197);
}

double NNfunction_nn_chi4_chi4::synapse0x2207fc0() {
   return (neuron0x21f40b0()*0.0498477);
}

double NNfunction_nn_chi4_chi4::synapse0x2208000() {
   return (neuron0x21f43f0()*-0.965205);
}

double NNfunction_nn_chi4_chi4::synapse0x2208380() {
   return (neuron0x21ef8c0()*0.033795);
}

double NNfunction_nn_chi4_chi4::synapse0x22083c0() {
   return (neuron0x21efb70()*-0.040181);
}

double NNfunction_nn_chi4_chi4::synapse0x2208400() {
   return (neuron0x21efeb0()*-2.79676);
}

double NNfunction_nn_chi4_chi4::synapse0x2208440() {
   return (neuron0x21f01f0()*-0.010469);
}

double NNfunction_nn_chi4_chi4::synapse0x2208480() {
   return (neuron0x21f0530()*-0.0233465);
}

double NNfunction_nn_chi4_chi4::synapse0x22084c0() {
   return (neuron0x21f0870()*-0.0216714);
}

double NNfunction_nn_chi4_chi4::synapse0x2208500() {
   return (neuron0x21f0bb0()*-0.020713);
}

double NNfunction_nn_chi4_chi4::synapse0x2208540() {
   return (neuron0x21f0ef0()*-0.0146703);
}

double NNfunction_nn_chi4_chi4::synapse0x2208580() {
   return (neuron0x21f1230()*0.00167208);
}

double NNfunction_nn_chi4_chi4::synapse0x22085c0() {
   return (neuron0x21f1570()*0.0161241);
}

double NNfunction_nn_chi4_chi4::synapse0x2208600() {
   return (neuron0x21f18b0()*-0.00829539);
}

double NNfunction_nn_chi4_chi4::synapse0x2208640() {
   return (neuron0x21f1bf0()*1.16443);
}

double NNfunction_nn_chi4_chi4::synapse0x2208680() {
   return (neuron0x21f1f30()*-0.278417);
}

double NNfunction_nn_chi4_chi4::synapse0x22086c0() {
   return (neuron0x21f2270()*-0.021542);
}

double NNfunction_nn_chi4_chi4::synapse0x2208700() {
   return (neuron0x21f25b0()*0.0390633);
}

double NNfunction_nn_chi4_chi4::synapse0x2208740() {
   return (neuron0x21f28f0()*0.0644082);
}

double NNfunction_nn_chi4_chi4::synapse0x22081d0() {
   return (neuron0x21f2c30()*0.0272664);
}

double NNfunction_nn_chi4_chi4::synapse0x2208210() {
   return (neuron0x21f3190()*0.00127289);
}

double NNfunction_nn_chi4_chi4::synapse0x2208890() {
   return (neuron0x21f33b0()*0.0190857);
}

double NNfunction_nn_chi4_chi4::synapse0x22088d0() {
   return (neuron0x21f36f0()*-0.0104807);
}

double NNfunction_nn_chi4_chi4::synapse0x2208910() {
   return (neuron0x21f3a30()*-0.0127981);
}

double NNfunction_nn_chi4_chi4::synapse0x2208950() {
   return (neuron0x21f3d70()*0.0262116);
}

double NNfunction_nn_chi4_chi4::synapse0x2208990() {
   return (neuron0x21f40b0()*0.043118);
}

double NNfunction_nn_chi4_chi4::synapse0x22089d0() {
   return (neuron0x21f43f0()*-0.317915);
}

double NNfunction_nn_chi4_chi4::synapse0x2208d50() {
   return (neuron0x21ef8c0()*-0.0433582);
}

double NNfunction_nn_chi4_chi4::synapse0x2208d90() {
   return (neuron0x21efb70()*-0.199802);
}

double NNfunction_nn_chi4_chi4::synapse0x2208dd0() {
   return (neuron0x21efeb0()*0.155244);
}

double NNfunction_nn_chi4_chi4::synapse0x2208e10() {
   return (neuron0x21f01f0()*0.041383);
}

double NNfunction_nn_chi4_chi4::synapse0x2208e50() {
   return (neuron0x21f0530()*-0.00986663);
}

double NNfunction_nn_chi4_chi4::synapse0x2208e90() {
   return (neuron0x21f0870()*-0.0291309);
}

double NNfunction_nn_chi4_chi4::synapse0x2208ed0() {
   return (neuron0x21f0bb0()*-0.0766104);
}

double NNfunction_nn_chi4_chi4::synapse0x2208f10() {
   return (neuron0x21f0ef0()*0.048728);
}

double NNfunction_nn_chi4_chi4::synapse0x2208f50() {
   return (neuron0x21f1230()*-0.00882394);
}

double NNfunction_nn_chi4_chi4::synapse0x2208f90() {
   return (neuron0x21f1570()*0.00708881);
}

double NNfunction_nn_chi4_chi4::synapse0x2208fd0() {
   return (neuron0x21f18b0()*-0.0312028);
}

double NNfunction_nn_chi4_chi4::synapse0x2209010() {
   return (neuron0x21f1bf0()*0.135798);
}

double NNfunction_nn_chi4_chi4::synapse0x2209050() {
   return (neuron0x21f1f30()*0.0385542);
}

double NNfunction_nn_chi4_chi4::synapse0x2209090() {
   return (neuron0x21f2270()*0.0806601);
}

double NNfunction_nn_chi4_chi4::synapse0x22090d0() {
   return (neuron0x21f25b0()*-0.174394);
}

double NNfunction_nn_chi4_chi4::synapse0x2209110() {
   return (neuron0x21f28f0()*-0.0203743);
}

double NNfunction_nn_chi4_chi4::synapse0x2208ba0() {
   return (neuron0x21f2c30()*0.108844);
}

double NNfunction_nn_chi4_chi4::synapse0x2208be0() {
   return (neuron0x21f3190()*-0.0379702);
}

double NNfunction_nn_chi4_chi4::synapse0x2209260() {
   return (neuron0x21f33b0()*-0.050465);
}

double NNfunction_nn_chi4_chi4::synapse0x22092a0() {
   return (neuron0x21f36f0()*0.0525407);
}

double NNfunction_nn_chi4_chi4::synapse0x22092e0() {
   return (neuron0x21f3a30()*-0.0499105);
}

double NNfunction_nn_chi4_chi4::synapse0x2209320() {
   return (neuron0x21f3d70()*-0.00999426);
}

double NNfunction_nn_chi4_chi4::synapse0x2209360() {
   return (neuron0x21f40b0()*-0.0798458);
}

double NNfunction_nn_chi4_chi4::synapse0x22093a0() {
   return (neuron0x21f43f0()*-0.915883);
}

double NNfunction_nn_chi4_chi4::synapse0x2209720() {
   return (neuron0x21ef8c0()*-0.36642);
}

double NNfunction_nn_chi4_chi4::synapse0x2209760() {
   return (neuron0x21efb70()*1.7205);
}

double NNfunction_nn_chi4_chi4::synapse0x22097a0() {
   return (neuron0x21efeb0()*-0.391714);
}

double NNfunction_nn_chi4_chi4::synapse0x22097e0() {
   return (neuron0x21f01f0()*0.894337);
}

double NNfunction_nn_chi4_chi4::synapse0x2209820() {
   return (neuron0x21f0530()*-1.03237);
}

double NNfunction_nn_chi4_chi4::synapse0x2209860() {
   return (neuron0x21f0870()*1.22214);
}

double NNfunction_nn_chi4_chi4::synapse0x22098a0() {
   return (neuron0x21f0bb0()*1.19154);
}

double NNfunction_nn_chi4_chi4::synapse0x22098e0() {
   return (neuron0x21f0ef0()*-0.723789);
}

double NNfunction_nn_chi4_chi4::synapse0x2209920() {
   return (neuron0x21f1230()*0.777957);
}

double NNfunction_nn_chi4_chi4::synapse0x2209960() {
   return (neuron0x21f1570()*0.117358);
}

double NNfunction_nn_chi4_chi4::synapse0x22099a0() {
   return (neuron0x21f18b0()*-0.375901);
}

double NNfunction_nn_chi4_chi4::synapse0x22099e0() {
   return (neuron0x21f1bf0()*0.148691);
}

double NNfunction_nn_chi4_chi4::synapse0x2209a20() {
   return (neuron0x21f1f30()*-0.355121);
}

double NNfunction_nn_chi4_chi4::synapse0x2209a60() {
   return (neuron0x21f2270()*-0.217524);
}

double NNfunction_nn_chi4_chi4::synapse0x2209aa0() {
   return (neuron0x21f25b0()*-0.832181);
}

double NNfunction_nn_chi4_chi4::synapse0x2209ae0() {
   return (neuron0x21f28f0()*-0.329477);
}

double NNfunction_nn_chi4_chi4::synapse0x2209570() {
   return (neuron0x21f2c30()*-0.587661);
}

double NNfunction_nn_chi4_chi4::synapse0x22095b0() {
   return (neuron0x21f3190()*-0.64859);
}

double NNfunction_nn_chi4_chi4::synapse0x2209c30() {
   return (neuron0x21f33b0()*1.04254);
}

double NNfunction_nn_chi4_chi4::synapse0x2209c70() {
   return (neuron0x21f36f0()*-0.280283);
}

double NNfunction_nn_chi4_chi4::synapse0x2209cb0() {
   return (neuron0x21f3a30()*-1.01151);
}

double NNfunction_nn_chi4_chi4::synapse0x2209cf0() {
   return (neuron0x21f3d70()*0.0196582);
}

double NNfunction_nn_chi4_chi4::synapse0x2209d30() {
   return (neuron0x21f40b0()*1.32859);
}

double NNfunction_nn_chi4_chi4::synapse0x2209d70() {
   return (neuron0x21f43f0()*-0.528705);
}

double NNfunction_nn_chi4_chi4::synapse0x220a0f0() {
   return (neuron0x21ef8c0()*-0.0179368);
}

double NNfunction_nn_chi4_chi4::synapse0x21fe6c0() {
   return (neuron0x21efb70()*-0.287003);
}

double NNfunction_nn_chi4_chi4::synapse0x21fe700() {
   return (neuron0x21efeb0()*0.116266);
}

double NNfunction_nn_chi4_chi4::synapse0x21fe740() {
   return (neuron0x21f01f0()*-0.102792);
}

double NNfunction_nn_chi4_chi4::synapse0x21fe990() {
   return (neuron0x21f0530()*-0.0375072);
}

double NNfunction_nn_chi4_chi4::synapse0x21fe9d0() {
   return (neuron0x21f0870()*-0.0759915);
}

double NNfunction_nn_chi4_chi4::synapse0x21fea10() {
   return (neuron0x21f0bb0()*-0.0316736);
}

double NNfunction_nn_chi4_chi4::synapse0x21fec60() {
   return (neuron0x21f0ef0()*-0.0255649);
}

double NNfunction_nn_chi4_chi4::synapse0x21feca0() {
   return (neuron0x21f1230()*0.0179873);
}

double NNfunction_nn_chi4_chi4::synapse0x21feef0() {
   return (neuron0x21f1570()*-0.0473662);
}

double NNfunction_nn_chi4_chi4::synapse0x21fef30() {
   return (neuron0x21f18b0()*0.0512079);
}

double NNfunction_nn_chi4_chi4::synapse0x21fef70() {
   return (neuron0x21f1bf0()*-1.19745);
}

double NNfunction_nn_chi4_chi4::synapse0x21ff1c0() {
   return (neuron0x21f1f30()*3.18514);
}

double NNfunction_nn_chi4_chi4::synapse0x21ff200() {
   return (neuron0x21f2270()*-0.0224913);
}

double NNfunction_nn_chi4_chi4::synapse0x21ff450() {
   return (neuron0x21f25b0()*0.0546849);
}

double NNfunction_nn_chi4_chi4::synapse0x21ff490() {
   return (neuron0x21f28f0()*0.112361);
}

double NNfunction_nn_chi4_chi4::synapse0x2209f40() {
   return (neuron0x21f2c30()*0.0508396);
}

double NNfunction_nn_chi4_chi4::synapse0x2209f80() {
   return (neuron0x21f3190()*0.0657019);
}

double NNfunction_nn_chi4_chi4::synapse0x21ff5e0() {
   return (neuron0x21f33b0()*0.00654762);
}

double NNfunction_nn_chi4_chi4::synapse0x21ffaf0() {
   return (neuron0x21f36f0()*0.00898194);
}

double NNfunction_nn_chi4_chi4::synapse0x21ffb30() {
   return (neuron0x21f3a30()*0.0227245);
}

double NNfunction_nn_chi4_chi4::synapse0x21ffb70() {
   return (neuron0x21f3d70()*0.0259865);
}

double NNfunction_nn_chi4_chi4::synapse0x21ffdc0() {
   return (neuron0x21f40b0()*0.0680605);
}

double NNfunction_nn_chi4_chi4::synapse0x21ffe00() {
   return (neuron0x21f43f0()*0.0414926);
}

double NNfunction_nn_chi4_chi4::synapse0x21ff6b0() {
   return (neuron0x21ef8c0()*-0.26995);
}

double NNfunction_nn_chi4_chi4::synapse0x21ff6f0() {
   return (neuron0x21efb70()*-0.0819176);
}

double NNfunction_nn_chi4_chi4::synapse0x21ff730() {
   return (neuron0x21efeb0()*0.377731);
}

double NNfunction_nn_chi4_chi4::synapse0x21ff770() {
   return (neuron0x21f01f0()*-0.0949791);
}

double NNfunction_nn_chi4_chi4::synapse0x22000f0() {
   return (neuron0x21f0530()*-0.00153569);
}

double NNfunction_nn_chi4_chi4::synapse0x220c440() {
   return (neuron0x21f0870()*-0.0848143);
}

double NNfunction_nn_chi4_chi4::synapse0x220c480() {
   return (neuron0x21f0bb0()*0.0380356);
}

double NNfunction_nn_chi4_chi4::synapse0x220c4c0() {
   return (neuron0x21f0ef0()*-0.14365);
}

double NNfunction_nn_chi4_chi4::synapse0x220c500() {
   return (neuron0x21f1230()*-0.0915247);
}

double NNfunction_nn_chi4_chi4::synapse0x220c540() {
   return (neuron0x21f1570()*0.0503911);
}

double NNfunction_nn_chi4_chi4::synapse0x220c580() {
   return (neuron0x21f18b0()*0.105901);
}

double NNfunction_nn_chi4_chi4::synapse0x220c5c0() {
   return (neuron0x21f1bf0()*0.380421);
}

double NNfunction_nn_chi4_chi4::synapse0x220c600() {
   return (neuron0x21f1f30()*0.0275577);
}

double NNfunction_nn_chi4_chi4::synapse0x220c640() {
   return (neuron0x21f2270()*-0.0833014);
}

double NNfunction_nn_chi4_chi4::synapse0x220c680() {
   return (neuron0x21f25b0()*0.0155506);
}

double NNfunction_nn_chi4_chi4::synapse0x220c6c0() {
   return (neuron0x21f28f0()*-0.0474698);
}

double NNfunction_nn_chi4_chi4::synapse0x21fffd0() {
   return (neuron0x21f2c30()*0.00193999);
}

double NNfunction_nn_chi4_chi4::synapse0x2200010() {
   return (neuron0x21f3190()*0.102725);
}

double NNfunction_nn_chi4_chi4::synapse0x220c810() {
   return (neuron0x21f33b0()*0.124319);
}

double NNfunction_nn_chi4_chi4::synapse0x220c850() {
   return (neuron0x21f36f0()*-0.0113742);
}

double NNfunction_nn_chi4_chi4::synapse0x220c890() {
   return (neuron0x21f3a30()*0.0737332);
}

double NNfunction_nn_chi4_chi4::synapse0x220c8d0() {
   return (neuron0x21f3d70()*-0.0133534);
}

double NNfunction_nn_chi4_chi4::synapse0x220c910() {
   return (neuron0x21f40b0()*0.0193895);
}

double NNfunction_nn_chi4_chi4::synapse0x220c950() {
   return (neuron0x21f43f0()*-0.469936);
}

double NNfunction_nn_chi4_chi4::synapse0x220ccd0() {
   return (neuron0x21ef8c0()*-0.111222);
}

double NNfunction_nn_chi4_chi4::synapse0x220cd10() {
   return (neuron0x21efb70()*0.12415);
}

double NNfunction_nn_chi4_chi4::synapse0x220cd50() {
   return (neuron0x21efeb0()*-2.97165);
}

double NNfunction_nn_chi4_chi4::synapse0x220cd90() {
   return (neuron0x21f01f0()*0.0126264);
}

double NNfunction_nn_chi4_chi4::synapse0x220cdd0() {
   return (neuron0x21f0530()*0.0164255);
}

double NNfunction_nn_chi4_chi4::synapse0x220ce10() {
   return (neuron0x21f0870()*0.00058424);
}

double NNfunction_nn_chi4_chi4::synapse0x220ce50() {
   return (neuron0x21f0bb0()*-0.0323068);
}

double NNfunction_nn_chi4_chi4::synapse0x220ce90() {
   return (neuron0x21f0ef0()*-0.00257155);
}

double NNfunction_nn_chi4_chi4::synapse0x220ced0() {
   return (neuron0x21f1230()*0.0263721);
}

double NNfunction_nn_chi4_chi4::synapse0x220cf10() {
   return (neuron0x21f1570()*0.0167599);
}

double NNfunction_nn_chi4_chi4::synapse0x220cf50() {
   return (neuron0x21f18b0()*-0.0243593);
}

double NNfunction_nn_chi4_chi4::synapse0x220cf90() {
   return (neuron0x21f1bf0()*-0.0247235);
}

double NNfunction_nn_chi4_chi4::synapse0x220cfd0() {
   return (neuron0x21f1f30()*-0.0721084);
}

double NNfunction_nn_chi4_chi4::synapse0x220d010() {
   return (neuron0x21f2270()*-0.0367279);
}

double NNfunction_nn_chi4_chi4::synapse0x220d050() {
   return (neuron0x21f25b0()*0.0123006);
}

double NNfunction_nn_chi4_chi4::synapse0x220d090() {
   return (neuron0x21f28f0()*0.0224757);
}

double NNfunction_nn_chi4_chi4::synapse0x220cb20() {
   return (neuron0x21f2c30()*-0.0425701);
}

double NNfunction_nn_chi4_chi4::synapse0x220cb60() {
   return (neuron0x21f3190()*-0.0233213);
}

double NNfunction_nn_chi4_chi4::synapse0x220d1e0() {
   return (neuron0x21f33b0()*0.0051618);
}

double NNfunction_nn_chi4_chi4::synapse0x220d220() {
   return (neuron0x21f36f0()*-0.00386411);
}

double NNfunction_nn_chi4_chi4::synapse0x220d260() {
   return (neuron0x21f3a30()*-0.0206762);
}

double NNfunction_nn_chi4_chi4::synapse0x220d2a0() {
   return (neuron0x21f3d70()*-0.0120845);
}

double NNfunction_nn_chi4_chi4::synapse0x220d2e0() {
   return (neuron0x21f40b0()*0.0271779);
}

double NNfunction_nn_chi4_chi4::synapse0x220d320() {
   return (neuron0x21f43f0()*-3.06298);
}

double NNfunction_nn_chi4_chi4::synapse0x220d6a0() {
   return (neuron0x21ef8c0()*-0.0628952);
}

double NNfunction_nn_chi4_chi4::synapse0x220d6e0() {
   return (neuron0x21efb70()*-3.05849);
}

double NNfunction_nn_chi4_chi4::synapse0x220d720() {
   return (neuron0x21efeb0()*3.52783);
}

double NNfunction_nn_chi4_chi4::synapse0x220d760() {
   return (neuron0x21f01f0()*0.0134883);
}

double NNfunction_nn_chi4_chi4::synapse0x220d7a0() {
   return (neuron0x21f0530()*0.0247502);
}

double NNfunction_nn_chi4_chi4::synapse0x220d7e0() {
   return (neuron0x21f0870()*-0.00150756);
}

double NNfunction_nn_chi4_chi4::synapse0x220d820() {
   return (neuron0x21f0bb0()*-0.019125);
}

double NNfunction_nn_chi4_chi4::synapse0x220d860() {
   return (neuron0x21f0ef0()*-0.0403414);
}

double NNfunction_nn_chi4_chi4::synapse0x220d8a0() {
   return (neuron0x21f1230()*-0.0706245);
}

double NNfunction_nn_chi4_chi4::synapse0x220d8e0() {
   return (neuron0x21f1570()*-0.0196744);
}

double NNfunction_nn_chi4_chi4::synapse0x220d920() {
   return (neuron0x21f18b0()*0.0248067);
}

double NNfunction_nn_chi4_chi4::synapse0x220d960() {
   return (neuron0x21f1bf0()*-0.0158979);
}

double NNfunction_nn_chi4_chi4::synapse0x220d9a0() {
   return (neuron0x21f1f30()*0.0798226);
}

double NNfunction_nn_chi4_chi4::synapse0x220d9e0() {
   return (neuron0x21f2270()*0.0660111);
}

double NNfunction_nn_chi4_chi4::synapse0x220da20() {
   return (neuron0x21f25b0()*0.0125266);
}

double NNfunction_nn_chi4_chi4::synapse0x220da60() {
   return (neuron0x21f28f0()*-0.0116521);
}

double NNfunction_nn_chi4_chi4::synapse0x220d4f0() {
   return (neuron0x21f2c30()*0.0853133);
}

double NNfunction_nn_chi4_chi4::synapse0x220d530() {
   return (neuron0x21f3190()*-0.111069);
}

double NNfunction_nn_chi4_chi4::synapse0x220dbb0() {
   return (neuron0x21f33b0()*-0.0294607);
}

double NNfunction_nn_chi4_chi4::synapse0x220dbf0() {
   return (neuron0x21f36f0()*0.0461911);
}

double NNfunction_nn_chi4_chi4::synapse0x220dc30() {
   return (neuron0x21f3a30()*0.00835518);
}

double NNfunction_nn_chi4_chi4::synapse0x220dc70() {
   return (neuron0x21f3d70()*0.0149351);
}

double NNfunction_nn_chi4_chi4::synapse0x220dcb0() {
   return (neuron0x21f40b0()*-0.0353155);
}

double NNfunction_nn_chi4_chi4::synapse0x220dcf0() {
   return (neuron0x21f43f0()*-0.43418);
}

double NNfunction_nn_chi4_chi4::synapse0x220e070() {
   return (neuron0x21ef8c0()*0.180479);
}

double NNfunction_nn_chi4_chi4::synapse0x220e0b0() {
   return (neuron0x21efb70()*-1.07471);
}

double NNfunction_nn_chi4_chi4::synapse0x220e0f0() {
   return (neuron0x21efeb0()*0.681763);
}

double NNfunction_nn_chi4_chi4::synapse0x220e130() {
   return (neuron0x21f01f0()*-0.184168);
}

double NNfunction_nn_chi4_chi4::synapse0x220e170() {
   return (neuron0x21f0530()*0.226631);
}

double NNfunction_nn_chi4_chi4::synapse0x220e1b0() {
   return (neuron0x21f0870()*-0.0317599);
}

double NNfunction_nn_chi4_chi4::synapse0x220e1f0() {
   return (neuron0x21f0bb0()*-0.0225309);
}

double NNfunction_nn_chi4_chi4::synapse0x220e230() {
   return (neuron0x21f0ef0()*-0.0410969);
}

double NNfunction_nn_chi4_chi4::synapse0x220e270() {
   return (neuron0x21f1230()*0.0394947);
}

double NNfunction_nn_chi4_chi4::synapse0x220e2b0() {
   return (neuron0x21f1570()*0.36681);
}

double NNfunction_nn_chi4_chi4::synapse0x220e2f0() {
   return (neuron0x21f18b0()*0.0675609);
}

double NNfunction_nn_chi4_chi4::synapse0x220e330() {
   return (neuron0x21f1bf0()*0.847245);
}

double NNfunction_nn_chi4_chi4::synapse0x220e370() {
   return (neuron0x21f1f30()*0.31657);
}

double NNfunction_nn_chi4_chi4::synapse0x220e3b0() {
   return (neuron0x21f2270()*-0.133362);
}

double NNfunction_nn_chi4_chi4::synapse0x220e3f0() {
   return (neuron0x21f25b0()*-0.175855);
}

double NNfunction_nn_chi4_chi4::synapse0x220e430() {
   return (neuron0x21f28f0()*-0.115455);
}

double NNfunction_nn_chi4_chi4::synapse0x220dec0() {
   return (neuron0x21f2c30()*0.339041);
}

double NNfunction_nn_chi4_chi4::synapse0x220df00() {
   return (neuron0x21f3190()*0.232454);
}

double NNfunction_nn_chi4_chi4::synapse0x220e580() {
   return (neuron0x21f33b0()*-0.0488772);
}

double NNfunction_nn_chi4_chi4::synapse0x220e5c0() {
   return (neuron0x21f36f0()*0.251037);
}

double NNfunction_nn_chi4_chi4::synapse0x220e600() {
   return (neuron0x21f3a30()*-0.137066);
}

double NNfunction_nn_chi4_chi4::synapse0x220e640() {
   return (neuron0x21f3d70()*-0.0310882);
}

double NNfunction_nn_chi4_chi4::synapse0x220e680() {
   return (neuron0x21f40b0()*0.0555197);
}

double NNfunction_nn_chi4_chi4::synapse0x220e6c0() {
   return (neuron0x21f43f0()*-0.589427);
}

double NNfunction_nn_chi4_chi4::synapse0x220ea40() {
   return (neuron0x21ef8c0()*0.117442);
}

double NNfunction_nn_chi4_chi4::synapse0x220ea80() {
   return (neuron0x21efb70()*-4.45599);
}

double NNfunction_nn_chi4_chi4::synapse0x220eac0() {
   return (neuron0x21efeb0()*-0.629633);
}

double NNfunction_nn_chi4_chi4::synapse0x220eb00() {
   return (neuron0x21f01f0()*-0.00309394);
}

double NNfunction_nn_chi4_chi4::synapse0x220eb40() {
   return (neuron0x21f0530()*-0.0147672);
}

double NNfunction_nn_chi4_chi4::synapse0x220eb80() {
   return (neuron0x21f0870()*-0.0414659);
}

double NNfunction_nn_chi4_chi4::synapse0x220ebc0() {
   return (neuron0x21f0bb0()*-0.012284);
}

double NNfunction_nn_chi4_chi4::synapse0x220ec00() {
   return (neuron0x21f0ef0()*0.0108449);
}

double NNfunction_nn_chi4_chi4::synapse0x220ec40() {
   return (neuron0x21f1230()*-0.0333542);
}

double NNfunction_nn_chi4_chi4::synapse0x220ec80() {
   return (neuron0x21f1570()*-0.0159489);
}

double NNfunction_nn_chi4_chi4::synapse0x220ecc0() {
   return (neuron0x21f18b0()*0.0546714);
}

double NNfunction_nn_chi4_chi4::synapse0x220ed00() {
   return (neuron0x21f1bf0()*0.0197218);
}

double NNfunction_nn_chi4_chi4::synapse0x220ed40() {
   return (neuron0x21f1f30()*0.0393995);
}

double NNfunction_nn_chi4_chi4::synapse0x220ed80() {
   return (neuron0x21f2270()*0.0534531);
}

double NNfunction_nn_chi4_chi4::synapse0x220edc0() {
   return (neuron0x21f25b0()*0.113318);
}

double NNfunction_nn_chi4_chi4::synapse0x220ee00() {
   return (neuron0x21f28f0()*0.0136669);
}

double NNfunction_nn_chi4_chi4::synapse0x220e890() {
   return (neuron0x21f2c30()*0.049625);
}

double NNfunction_nn_chi4_chi4::synapse0x220e8d0() {
   return (neuron0x21f3190()*-0.0110498);
}

double NNfunction_nn_chi4_chi4::synapse0x220ef50() {
   return (neuron0x21f33b0()*-0.0696937);
}

double NNfunction_nn_chi4_chi4::synapse0x220ef90() {
   return (neuron0x21f36f0()*-0.000489143);
}

double NNfunction_nn_chi4_chi4::synapse0x220efd0() {
   return (neuron0x21f3a30()*-0.00137041);
}

double NNfunction_nn_chi4_chi4::synapse0x220f010() {
   return (neuron0x21f3d70()*0.0217778);
}

double NNfunction_nn_chi4_chi4::synapse0x220f050() {
   return (neuron0x21f40b0()*-0.0671997);
}

double NNfunction_nn_chi4_chi4::synapse0x220f090() {
   return (neuron0x21f43f0()*-3.52273);
}

double NNfunction_nn_chi4_chi4::synapse0x220f410() {
   return (neuron0x21ef8c0()*-0.0869096);
}

double NNfunction_nn_chi4_chi4::synapse0x220f450() {
   return (neuron0x21efb70()*8.82422);
}

double NNfunction_nn_chi4_chi4::synapse0x220f490() {
   return (neuron0x21efeb0()*7.37933);
}

double NNfunction_nn_chi4_chi4::synapse0x220f4d0() {
   return (neuron0x21f01f0()*-0.0466916);
}

double NNfunction_nn_chi4_chi4::synapse0x220f510() {
   return (neuron0x21f0530()*0.0486632);
}

double NNfunction_nn_chi4_chi4::synapse0x220f550() {
   return (neuron0x21f0870()*0.0646337);
}

double NNfunction_nn_chi4_chi4::synapse0x220f590() {
   return (neuron0x21f0bb0()*-0.0624337);
}

double NNfunction_nn_chi4_chi4::synapse0x220f5d0() {
   return (neuron0x21f0ef0()*0.0313644);
}

double NNfunction_nn_chi4_chi4::synapse0x220f610() {
   return (neuron0x21f1230()*0.0446301);
}

double NNfunction_nn_chi4_chi4::synapse0x220f650() {
   return (neuron0x21f1570()*-0.0184196);
}

double NNfunction_nn_chi4_chi4::synapse0x220f690() {
   return (neuron0x21f18b0()*-0.112834);
}

double NNfunction_nn_chi4_chi4::synapse0x220f6d0() {
   return (neuron0x21f1bf0()*0.207191);
}

double NNfunction_nn_chi4_chi4::synapse0x220f710() {
   return (neuron0x21f1f30()*0.143021);
}

double NNfunction_nn_chi4_chi4::synapse0x220f750() {
   return (neuron0x21f2270()*0.0408768);
}

double NNfunction_nn_chi4_chi4::synapse0x220f790() {
   return (neuron0x21f25b0()*-0.0303511);
}

double NNfunction_nn_chi4_chi4::synapse0x220f7d0() {
   return (neuron0x21f28f0()*0.0186739);
}

double NNfunction_nn_chi4_chi4::synapse0x220f260() {
   return (neuron0x21f2c30()*-0.116478);
}

double NNfunction_nn_chi4_chi4::synapse0x220f2a0() {
   return (neuron0x21f3190()*0.000340582);
}

double NNfunction_nn_chi4_chi4::synapse0x220f920() {
   return (neuron0x21f33b0()*0.0314596);
}

double NNfunction_nn_chi4_chi4::synapse0x220f960() {
   return (neuron0x21f36f0()*0.0158952);
}

double NNfunction_nn_chi4_chi4::synapse0x220f9a0() {
   return (neuron0x21f3a30()*-0.0441506);
}

double NNfunction_nn_chi4_chi4::synapse0x220f9e0() {
   return (neuron0x21f3d70()*0.0235582);
}

double NNfunction_nn_chi4_chi4::synapse0x220fa20() {
   return (neuron0x21f40b0()*0.005265);
}

double NNfunction_nn_chi4_chi4::synapse0x220fa60() {
   return (neuron0x21f43f0()*0.0216673);
}

double NNfunction_nn_chi4_chi4::synapse0x220fde0() {
   return (neuron0x21ef8c0()*0.723643);
}

double NNfunction_nn_chi4_chi4::synapse0x220fe20() {
   return (neuron0x21efb70()*-0.683931);
}

double NNfunction_nn_chi4_chi4::synapse0x220fe60() {
   return (neuron0x21efeb0()*-0.271202);
}

double NNfunction_nn_chi4_chi4::synapse0x220fea0() {
   return (neuron0x21f01f0()*0.409903);
}

double NNfunction_nn_chi4_chi4::synapse0x220fee0() {
   return (neuron0x21f0530()*-0.78857);
}

double NNfunction_nn_chi4_chi4::synapse0x220ff20() {
   return (neuron0x21f0870()*-0.542678);
}

double NNfunction_nn_chi4_chi4::synapse0x220ff60() {
   return (neuron0x21f0bb0()*0.674162);
}

double NNfunction_nn_chi4_chi4::synapse0x220ffa0() {
   return (neuron0x21f0ef0()*0.489046);
}

double NNfunction_nn_chi4_chi4::synapse0x220ffe0() {
   return (neuron0x21f1230()*0.247119);
}

double NNfunction_nn_chi4_chi4::synapse0x2210020() {
   return (neuron0x21f1570()*1.1675);
}

double NNfunction_nn_chi4_chi4::synapse0x2210060() {
   return (neuron0x21f18b0()*0.185677);
}

double NNfunction_nn_chi4_chi4::synapse0x22100a0() {
   return (neuron0x21f1bf0()*-1.9896);
}

double NNfunction_nn_chi4_chi4::synapse0x22100e0() {
   return (neuron0x21f1f30()*0.095106);
}

double NNfunction_nn_chi4_chi4::synapse0x2210120() {
   return (neuron0x21f2270()*0.214606);
}

double NNfunction_nn_chi4_chi4::synapse0x2210160() {
   return (neuron0x21f25b0()*-0.595752);
}

double NNfunction_nn_chi4_chi4::synapse0x22101a0() {
   return (neuron0x21f28f0()*-1.35921);
}

double NNfunction_nn_chi4_chi4::synapse0x220fc30() {
   return (neuron0x21f2c30()*-1.39005);
}

double NNfunction_nn_chi4_chi4::synapse0x220fc70() {
   return (neuron0x21f3190()*0.0160414);
}

double NNfunction_nn_chi4_chi4::synapse0x22102f0() {
   return (neuron0x21f33b0()*0.265926);
}

double NNfunction_nn_chi4_chi4::synapse0x2210330() {
   return (neuron0x21f36f0()*-0.862156);
}

double NNfunction_nn_chi4_chi4::synapse0x2210370() {
   return (neuron0x21f3a30()*-0.365483);
}

double NNfunction_nn_chi4_chi4::synapse0x22103b0() {
   return (neuron0x21f3d70()*-0.0944649);
}

double NNfunction_nn_chi4_chi4::synapse0x22103f0() {
   return (neuron0x21f40b0()*0.411102);
}

double NNfunction_nn_chi4_chi4::synapse0x2210430() {
   return (neuron0x21f43f0()*0.556233);
}

double NNfunction_nn_chi4_chi4::synapse0x22107b0() {
   return (neuron0x21ef8c0()*0.0551399);
}

double NNfunction_nn_chi4_chi4::synapse0x22107f0() {
   return (neuron0x21efb70()*-2.35263);
}

double NNfunction_nn_chi4_chi4::synapse0x2210830() {
   return (neuron0x21efeb0()*-2.40824);
}

double NNfunction_nn_chi4_chi4::synapse0x2210870() {
   return (neuron0x21f01f0()*0.00182174);
}

double NNfunction_nn_chi4_chi4::synapse0x22108b0() {
   return (neuron0x21f0530()*-0.0258478);
}

double NNfunction_nn_chi4_chi4::synapse0x22108f0() {
   return (neuron0x21f0870()*-0.0906465);
}

double NNfunction_nn_chi4_chi4::synapse0x2210930() {
   return (neuron0x21f0bb0()*-0.050855);
}

double NNfunction_nn_chi4_chi4::synapse0x2210970() {
   return (neuron0x21f0ef0()*0.0868109);
}

double NNfunction_nn_chi4_chi4::synapse0x22109b0() {
   return (neuron0x21f1230()*-0.0753437);
}

double NNfunction_nn_chi4_chi4::synapse0x22109f0() {
   return (neuron0x21f1570()*-0.00674113);
}

double NNfunction_nn_chi4_chi4::synapse0x2210a30() {
   return (neuron0x21f18b0()*-0.0698889);
}

double NNfunction_nn_chi4_chi4::synapse0x2210a70() {
   return (neuron0x21f1bf0()*-0.286261);
}

double NNfunction_nn_chi4_chi4::synapse0x2210ab0() {
   return (neuron0x21f1f30()*-0.40537);
}

double NNfunction_nn_chi4_chi4::synapse0x2210af0() {
   return (neuron0x21f2270()*0.0445328);
}

double NNfunction_nn_chi4_chi4::synapse0x2210b30() {
   return (neuron0x21f25b0()*0.136549);
}

double NNfunction_nn_chi4_chi4::synapse0x2210b70() {
   return (neuron0x21f28f0()*0.0118875);
}

double NNfunction_nn_chi4_chi4::synapse0x2210600() {
   return (neuron0x21f2c30()*0.0825134);
}

double NNfunction_nn_chi4_chi4::synapse0x2210640() {
   return (neuron0x21f3190()*0.0323424);
}

double NNfunction_nn_chi4_chi4::synapse0x2210cc0() {
   return (neuron0x21f33b0()*-0.0258797);
}

double NNfunction_nn_chi4_chi4::synapse0x2210d00() {
   return (neuron0x21f36f0()*-0.014917);
}

double NNfunction_nn_chi4_chi4::synapse0x2210d40() {
   return (neuron0x21f3a30()*-0.0264897);
}

double NNfunction_nn_chi4_chi4::synapse0x2210d80() {
   return (neuron0x21f3d70()*0.0789126);
}

double NNfunction_nn_chi4_chi4::synapse0x2210dc0() {
   return (neuron0x21f40b0()*-0.0589436);
}

double NNfunction_nn_chi4_chi4::synapse0x2210e00() {
   return (neuron0x21f43f0()*-0.378047);
}

double NNfunction_nn_chi4_chi4::synapse0x21f98b0() {
   return (neuron0x21ef8c0()*0.106988);
}

double NNfunction_nn_chi4_chi4::synapse0x21f98f0() {
   return (neuron0x21efb70()*2.01634);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9930() {
   return (neuron0x21efeb0()*0.177142);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9970() {
   return (neuron0x21f01f0()*0.00596447);
}

double NNfunction_nn_chi4_chi4::synapse0x21f99b0() {
   return (neuron0x21f0530()*0.054232);
}

double NNfunction_nn_chi4_chi4::synapse0x21f99f0() {
   return (neuron0x21f0870()*-9.19322e-05);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9a30() {
   return (neuron0x21f0bb0()*0.00909196);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9a70() {
   return (neuron0x21f0ef0()*-0.00577169);
}

double NNfunction_nn_chi4_chi4::synapse0x2211590() {
   return (neuron0x21f1230()*-0.00633308);
}

double NNfunction_nn_chi4_chi4::synapse0x22115d0() {
   return (neuron0x21f1570()*-0.00115783);
}

double NNfunction_nn_chi4_chi4::synapse0x2211610() {
   return (neuron0x21f18b0()*0.0113565);
}

double NNfunction_nn_chi4_chi4::synapse0x2211650() {
   return (neuron0x21f1bf0()*-0.021102);
}

double NNfunction_nn_chi4_chi4::synapse0x2211690() {
   return (neuron0x21f1f30()*0.0187469);
}

double NNfunction_nn_chi4_chi4::synapse0x22116d0() {
   return (neuron0x21f2270()*0.060089);
}

double NNfunction_nn_chi4_chi4::synapse0x2211710() {
   return (neuron0x21f25b0()*0.0389065);
}

double NNfunction_nn_chi4_chi4::synapse0x2211750() {
   return (neuron0x21f28f0()*0.0199221);
}

double NNfunction_nn_chi4_chi4::synapse0x2210fd0() {
   return (neuron0x21f2c30()*-0.0361965);
}

double NNfunction_nn_chi4_chi4::synapse0x2211010() {
   return (neuron0x21f3190()*0.0336351);
}

double NNfunction_nn_chi4_chi4::synapse0x22118a0() {
   return (neuron0x21f33b0()*-0.0049739);
}

double NNfunction_nn_chi4_chi4::synapse0x22118e0() {
   return (neuron0x21f36f0()*0.0120078);
}

double NNfunction_nn_chi4_chi4::synapse0x2211920() {
   return (neuron0x21f3a30()*0.0267801);
}

double NNfunction_nn_chi4_chi4::synapse0x2211960() {
   return (neuron0x21f3d70()*-0.0281615);
}

double NNfunction_nn_chi4_chi4::synapse0x22119a0() {
   return (neuron0x21f40b0()*-0.0109557);
}

double NNfunction_nn_chi4_chi4::synapse0x22119e0() {
   return (neuron0x21f43f0()*-1.9782);
}

double NNfunction_nn_chi4_chi4::synapse0x2211d60() {
   return (neuron0x21ef8c0()*-1.43542);
}

double NNfunction_nn_chi4_chi4::synapse0x2211da0() {
   return (neuron0x21efb70()*0.22863);
}

double NNfunction_nn_chi4_chi4::synapse0x2211de0() {
   return (neuron0x21efeb0()*-0.789668);
}

double NNfunction_nn_chi4_chi4::synapse0x2211e20() {
   return (neuron0x21f01f0()*-0.644372);
}

double NNfunction_nn_chi4_chi4::synapse0x2211e60() {
   return (neuron0x21f0530()*0.85173);
}

double NNfunction_nn_chi4_chi4::synapse0x2211ea0() {
   return (neuron0x21f0870()*0.662837);
}

double NNfunction_nn_chi4_chi4::synapse0x2211ee0() {
   return (neuron0x21f0bb0()*0.546011);
}

double NNfunction_nn_chi4_chi4::synapse0x2211f20() {
   return (neuron0x21f0ef0()*-0.111134);
}

double NNfunction_nn_chi4_chi4::synapse0x2211f60() {
   return (neuron0x21f1230()*-0.308811);
}

double NNfunction_nn_chi4_chi4::synapse0x2211fa0() {
   return (neuron0x21f1570()*1.47212);
}

double NNfunction_nn_chi4_chi4::synapse0x2211fe0() {
   return (neuron0x21f18b0()*0.187889);
}

double NNfunction_nn_chi4_chi4::synapse0x2212020() {
   return (neuron0x21f1bf0()*0.473059);
}

double NNfunction_nn_chi4_chi4::synapse0x2212060() {
   return (neuron0x21f1f30()*0.209642);
}

double NNfunction_nn_chi4_chi4::synapse0x22120a0() {
   return (neuron0x21f2270()*0.436879);
}

double NNfunction_nn_chi4_chi4::synapse0x22120e0() {
   return (neuron0x21f25b0()*0.866608);
}

double NNfunction_nn_chi4_chi4::synapse0x2212120() {
   return (neuron0x21f28f0()*0.994158);
}

double NNfunction_nn_chi4_chi4::synapse0x2211bb0() {
   return (neuron0x21f2c30()*0.363433);
}

double NNfunction_nn_chi4_chi4::synapse0x2211bf0() {
   return (neuron0x21f3190()*-0.488997);
}

double NNfunction_nn_chi4_chi4::synapse0x2212270() {
   return (neuron0x21f33b0()*0.892822);
}

double NNfunction_nn_chi4_chi4::synapse0x22122b0() {
   return (neuron0x21f36f0()*0.884354);
}

double NNfunction_nn_chi4_chi4::synapse0x22122f0() {
   return (neuron0x21f3a30()*-0.731452);
}

double NNfunction_nn_chi4_chi4::synapse0x2212330() {
   return (neuron0x21f3d70()*-0.0684416);
}

double NNfunction_nn_chi4_chi4::synapse0x2212370() {
   return (neuron0x21f40b0()*1.0978);
}

double NNfunction_nn_chi4_chi4::synapse0x22123b0() {
   return (neuron0x21f43f0()*-0.793349);
}

double NNfunction_nn_chi4_chi4::synapse0x2212730() {
   return (neuron0x21ef8c0()*0.0127203);
}

double NNfunction_nn_chi4_chi4::synapse0x2212770() {
   return (neuron0x21efb70()*0.416559);
}

double NNfunction_nn_chi4_chi4::synapse0x22127b0() {
   return (neuron0x21efeb0()*-0.75014);
}

double NNfunction_nn_chi4_chi4::synapse0x22127f0() {
   return (neuron0x21f01f0()*0.00259623);
}

double NNfunction_nn_chi4_chi4::synapse0x2212830() {
   return (neuron0x21f0530()*-0.0265241);
}

double NNfunction_nn_chi4_chi4::synapse0x2212870() {
   return (neuron0x21f0870()*-0.0187204);
}

double NNfunction_nn_chi4_chi4::synapse0x22128b0() {
   return (neuron0x21f0bb0()*-0.0165792);
}

double NNfunction_nn_chi4_chi4::synapse0x22128f0() {
   return (neuron0x21f0ef0()*0.0548913);
}

double NNfunction_nn_chi4_chi4::synapse0x2212930() {
   return (neuron0x21f1230()*0.00265929);
}

double NNfunction_nn_chi4_chi4::synapse0x2212970() {
   return (neuron0x21f1570()*-0.0237243);
}

double NNfunction_nn_chi4_chi4::synapse0x22129b0() {
   return (neuron0x21f18b0()*-0.0101274);
}

double NNfunction_nn_chi4_chi4::synapse0x22129f0() {
   return (neuron0x21f1bf0()*-0.0728945);
}

double NNfunction_nn_chi4_chi4::synapse0x2212a30() {
   return (neuron0x21f1f30()*-0.0405175);
}

double NNfunction_nn_chi4_chi4::synapse0x2212a70() {
   return (neuron0x21f2270()*-0.0397215);
}

double NNfunction_nn_chi4_chi4::synapse0x2212ab0() {
   return (neuron0x21f25b0()*0.69101);
}

double NNfunction_nn_chi4_chi4::synapse0x2212af0() {
   return (neuron0x21f28f0()*0.0251281);
}

double NNfunction_nn_chi4_chi4::synapse0x2212580() {
   return (neuron0x21f2c30()*0.0436567);
}

double NNfunction_nn_chi4_chi4::synapse0x22125c0() {
   return (neuron0x21f3190()*-0.0158588);
}

double NNfunction_nn_chi4_chi4::synapse0x22030f0() {
   return (neuron0x21f33b0()*-0.00798052);
}

double NNfunction_nn_chi4_chi4::synapse0x2203130() {
   return (neuron0x21f36f0()*-0.0197716);
}

double NNfunction_nn_chi4_chi4::synapse0x2203170() {
   return (neuron0x21f3a30()*0.000668938);
}

double NNfunction_nn_chi4_chi4::synapse0x22031b0() {
   return (neuron0x21f3d70()*0.0317926);
}

double NNfunction_nn_chi4_chi4::synapse0x22031f0() {
   return (neuron0x21f40b0()*0.0274284);
}

double NNfunction_nn_chi4_chi4::synapse0x2203230() {
   return (neuron0x21f43f0()*-0.426326);
}

double NNfunction_nn_chi4_chi4::synapse0x22035b0() {
   return (neuron0x21ef8c0()*0.0882653);
}

double NNfunction_nn_chi4_chi4::synapse0x22035f0() {
   return (neuron0x21efb70()*-2.97439);
}

double NNfunction_nn_chi4_chi4::synapse0x2203630() {
   return (neuron0x21efeb0()*-1.64631);
}

double NNfunction_nn_chi4_chi4::synapse0x2203670() {
   return (neuron0x21f01f0()*0.0722712);
}

double NNfunction_nn_chi4_chi4::synapse0x22036b0() {
   return (neuron0x21f0530()*-0.0395602);
}

double NNfunction_nn_chi4_chi4::synapse0x22036f0() {
   return (neuron0x21f0870()*0.00505792);
}

double NNfunction_nn_chi4_chi4::synapse0x2203730() {
   return (neuron0x21f0bb0()*-0.0430031);
}

double NNfunction_nn_chi4_chi4::synapse0x2203770() {
   return (neuron0x21f0ef0()*-0.0625859);
}

double NNfunction_nn_chi4_chi4::synapse0x22037b0() {
   return (neuron0x21f1230()*0.00532157);
}

double NNfunction_nn_chi4_chi4::synapse0x22037f0() {
   return (neuron0x21f1570()*0.000690056);
}

double NNfunction_nn_chi4_chi4::synapse0x2203830() {
   return (neuron0x21f18b0()*-0.0736435);
}

double NNfunction_nn_chi4_chi4::synapse0x2203870() {
   return (neuron0x21f1bf0()*0.0132773);
}

double NNfunction_nn_chi4_chi4::synapse0x22038b0() {
   return (neuron0x21f1f30()*-0.0318214);
}

double NNfunction_nn_chi4_chi4::synapse0x22038f0() {
   return (neuron0x21f2270()*0.0402189);
}

double NNfunction_nn_chi4_chi4::synapse0x2203930() {
   return (neuron0x21f25b0()*0.0708053);
}

double NNfunction_nn_chi4_chi4::synapse0x2203970() {
   return (neuron0x21f28f0()*0.0549549);
}

double NNfunction_nn_chi4_chi4::synapse0x2203400() {
   return (neuron0x21f2c30()*0.108524);
}

double NNfunction_nn_chi4_chi4::synapse0x2203440() {
   return (neuron0x21f3190()*-0.0419723);
}

double NNfunction_nn_chi4_chi4::synapse0x2203ac0() {
   return (neuron0x21f33b0()*0.00328414);
}

double NNfunction_nn_chi4_chi4::synapse0x2203b00() {
   return (neuron0x21f36f0()*0.0343305);
}

double NNfunction_nn_chi4_chi4::synapse0x2203b40() {
   return (neuron0x21f3a30()*0.0293175);
}

double NNfunction_nn_chi4_chi4::synapse0x2203b80() {
   return (neuron0x21f3d70()*0.0233752);
}

double NNfunction_nn_chi4_chi4::synapse0x2203bc0() {
   return (neuron0x21f40b0()*-0.0412821);
}

double NNfunction_nn_chi4_chi4::synapse0x2203c00() {
   return (neuron0x21f43f0()*1.45221);
}

double NNfunction_nn_chi4_chi4::synapse0x2203f80() {
   return (neuron0x21ef8c0()*-0.0416361);
}

double NNfunction_nn_chi4_chi4::synapse0x2203fc0() {
   return (neuron0x21efb70()*0.493576);
}

double NNfunction_nn_chi4_chi4::synapse0x2204000() {
   return (neuron0x21efeb0()*2.2829);
}

double NNfunction_nn_chi4_chi4::synapse0x2204040() {
   return (neuron0x21f01f0()*0.0418856);
}

double NNfunction_nn_chi4_chi4::synapse0x2204080() {
   return (neuron0x21f0530()*0.00128834);
}

double NNfunction_nn_chi4_chi4::synapse0x22040c0() {
   return (neuron0x21f0870()*0.0143299);
}

double NNfunction_nn_chi4_chi4::synapse0x2204100() {
   return (neuron0x21f0bb0()*-0.0271825);
}

double NNfunction_nn_chi4_chi4::synapse0x2204140() {
   return (neuron0x21f0ef0()*0.0284611);
}

double NNfunction_nn_chi4_chi4::synapse0x2204180() {
   return (neuron0x21f1230()*0.0651993);
}

double NNfunction_nn_chi4_chi4::synapse0x22041c0() {
   return (neuron0x21f1570()*0.0261957);
}

double NNfunction_nn_chi4_chi4::synapse0x2204200() {
   return (neuron0x21f18b0()*0.0024354);
}

double NNfunction_nn_chi4_chi4::synapse0x2204240() {
   return (neuron0x21f1bf0()*-0.138747);
}

double NNfunction_nn_chi4_chi4::synapse0x2204280() {
   return (neuron0x21f1f30()*-0.101175);
}

double NNfunction_nn_chi4_chi4::synapse0x22042c0() {
   return (neuron0x21f2270()*-0.0401556);
}

double NNfunction_nn_chi4_chi4::synapse0x2204300() {
   return (neuron0x21f25b0()*-0.0833631);
}

double NNfunction_nn_chi4_chi4::synapse0x2204340() {
   return (neuron0x21f28f0()*0.0466381);
}

double NNfunction_nn_chi4_chi4::synapse0x2203dd0() {
   return (neuron0x21f2c30()*0.000230262);
}

double NNfunction_nn_chi4_chi4::synapse0x2203e10() {
   return (neuron0x21f3190()*-0.000840855);
}

double NNfunction_nn_chi4_chi4::synapse0x2204490() {
   return (neuron0x21f33b0()*-0.0163694);
}

double NNfunction_nn_chi4_chi4::synapse0x22044d0() {
   return (neuron0x21f36f0()*-0.010184);
}

double NNfunction_nn_chi4_chi4::synapse0x2204510() {
   return (neuron0x21f3a30()*0.0045864);
}

double NNfunction_nn_chi4_chi4::synapse0x2204550() {
   return (neuron0x21f3d70()*-0.0198124);
}

double NNfunction_nn_chi4_chi4::synapse0x2204590() {
   return (neuron0x21f40b0()*0.0506188);
}

double NNfunction_nn_chi4_chi4::synapse0x22045d0() {
   return (neuron0x21f43f0()*0.580794);
}

double NNfunction_nn_chi4_chi4::synapse0x2204950() {
   return (neuron0x21ef8c0()*-0.0607323);
}

double NNfunction_nn_chi4_chi4::synapse0x2204990() {
   return (neuron0x21efb70()*1.21724);
}

double NNfunction_nn_chi4_chi4::synapse0x22049d0() {
   return (neuron0x21efeb0()*0.929222);
}

double NNfunction_nn_chi4_chi4::synapse0x2204a10() {
   return (neuron0x21f01f0()*0.0252887);
}

double NNfunction_nn_chi4_chi4::synapse0x2204a50() {
   return (neuron0x21f0530()*-0.0392319);
}

double NNfunction_nn_chi4_chi4::synapse0x2204a90() {
   return (neuron0x21f0870()*0.0610801);
}

double NNfunction_nn_chi4_chi4::synapse0x2204ad0() {
   return (neuron0x21f0bb0()*0.0812143);
}

double NNfunction_nn_chi4_chi4::synapse0x2204b10() {
   return (neuron0x21f0ef0()*0.0160167);
}

double NNfunction_nn_chi4_chi4::synapse0x2204b50() {
   return (neuron0x21f1230()*-0.0772748);
}

double NNfunction_nn_chi4_chi4::synapse0x2204b90() {
   return (neuron0x21f1570()*-0.0218516);
}

double NNfunction_nn_chi4_chi4::synapse0x2204bd0() {
   return (neuron0x21f18b0()*-0.0299086);
}

double NNfunction_nn_chi4_chi4::synapse0x2204c10() {
   return (neuron0x21f1bf0()*-1.99095);
}

double NNfunction_nn_chi4_chi4::synapse0x2204c50() {
   return (neuron0x21f1f30()*0.295162);
}

double NNfunction_nn_chi4_chi4::synapse0x2204c90() {
   return (neuron0x21f2270()*0.0956853);
}

double NNfunction_nn_chi4_chi4::synapse0x2204cd0() {
   return (neuron0x21f25b0()*0.0100354);
}

double NNfunction_nn_chi4_chi4::synapse0x2204d10() {
   return (neuron0x21f28f0()*-0.0614025);
}

double NNfunction_nn_chi4_chi4::synapse0x22047a0() {
   return (neuron0x21f2c30()*0.00293368);
}

double NNfunction_nn_chi4_chi4::synapse0x22047e0() {
   return (neuron0x21f3190()*-0.0267122);
}

double NNfunction_nn_chi4_chi4::synapse0x2204e60() {
   return (neuron0x21f33b0()*-0.0327205);
}

double NNfunction_nn_chi4_chi4::synapse0x2204ea0() {
   return (neuron0x21f36f0()*0.0551553);
}

double NNfunction_nn_chi4_chi4::synapse0x2204ee0() {
   return (neuron0x21f3a30()*-0.0576024);
}

double NNfunction_nn_chi4_chi4::synapse0x2204f20() {
   return (neuron0x21f3d70()*-0.00321037);
}

double NNfunction_nn_chi4_chi4::synapse0x2204f60() {
   return (neuron0x21f40b0()*-0.0959296);
}

double NNfunction_nn_chi4_chi4::synapse0x2204fa0() {
   return (neuron0x21f43f0()*-0.596281);
}

double NNfunction_nn_chi4_chi4::synapse0x2216e70() {
   return (neuron0x21ef8c0()*0.160216);
}

double NNfunction_nn_chi4_chi4::synapse0x2216eb0() {
   return (neuron0x21efb70()*-0.184144);
}

double NNfunction_nn_chi4_chi4::synapse0x2216ef0() {
   return (neuron0x21efeb0()*-2.09377);
}

double NNfunction_nn_chi4_chi4::synapse0x2216f30() {
   return (neuron0x21f01f0()*-0.0345798);
}

double NNfunction_nn_chi4_chi4::synapse0x2216f70() {
   return (neuron0x21f0530()*-0.0315864);
}

double NNfunction_nn_chi4_chi4::synapse0x2216fb0() {
   return (neuron0x21f0870()*-0.0194586);
}

double NNfunction_nn_chi4_chi4::synapse0x2216ff0() {
   return (neuron0x21f0bb0()*0.0323268);
}

double NNfunction_nn_chi4_chi4::synapse0x2217030() {
   return (neuron0x21f0ef0()*0.00524475);
}

double NNfunction_nn_chi4_chi4::synapse0x2217070() {
   return (neuron0x21f1230()*-0.0366914);
}

double NNfunction_nn_chi4_chi4::synapse0x22170b0() {
   return (neuron0x21f1570()*-0.0218074);
}

double NNfunction_nn_chi4_chi4::synapse0x22170f0() {
   return (neuron0x21f18b0()*0.0237703);
}

double NNfunction_nn_chi4_chi4::synapse0x2217130() {
   return (neuron0x21f1bf0()*-0.201464);
}

double NNfunction_nn_chi4_chi4::synapse0x2217170() {
   return (neuron0x21f1f30()*-0.065482);
}

double NNfunction_nn_chi4_chi4::synapse0x22171b0() {
   return (neuron0x21f2270()*0.018245);
}

double NNfunction_nn_chi4_chi4::synapse0x22171f0() {
   return (neuron0x21f25b0()*0.060915);
}

double NNfunction_nn_chi4_chi4::synapse0x2217230() {
   return (neuron0x21f28f0()*-0.0387306);
}

double NNfunction_nn_chi4_chi4::synapse0x2204fe0() {
   return (neuron0x21f2c30()*0.0201987);
}

double NNfunction_nn_chi4_chi4::synapse0x2205020() {
   return (neuron0x21f3190()*0.0399698);
}

double NNfunction_nn_chi4_chi4::synapse0x2217380() {
   return (neuron0x21f33b0()*0.00544886);
}

double NNfunction_nn_chi4_chi4::synapse0x22173c0() {
   return (neuron0x21f36f0()*-0.00966246);
}

double NNfunction_nn_chi4_chi4::synapse0x2217400() {
   return (neuron0x21f3a30()*0.00715007);
}

double NNfunction_nn_chi4_chi4::synapse0x2217440() {
   return (neuron0x21f3d70()*0.0320919);
}

double NNfunction_nn_chi4_chi4::synapse0x2217480() {
   return (neuron0x21f40b0()*-0.00761617);
}

double NNfunction_nn_chi4_chi4::synapse0x22174c0() {
   return (neuron0x21f43f0()*-1.23078);
}

double NNfunction_nn_chi4_chi4::synapse0x2217840() {
   return (neuron0x21ef8c0()*-0.00734148);
}

double NNfunction_nn_chi4_chi4::synapse0x2217880() {
   return (neuron0x21efb70()*-0.96809);
}

double NNfunction_nn_chi4_chi4::synapse0x22178c0() {
   return (neuron0x21efeb0()*0.15864);
}

double NNfunction_nn_chi4_chi4::synapse0x2217900() {
   return (neuron0x21f01f0()*-0.0142397);
}

double NNfunction_nn_chi4_chi4::synapse0x2217940() {
   return (neuron0x21f0530()*0.00349879);
}

double NNfunction_nn_chi4_chi4::synapse0x2217980() {
   return (neuron0x21f0870()*-0.0078639);
}

double NNfunction_nn_chi4_chi4::synapse0x22179c0() {
   return (neuron0x21f0bb0()*0.0113355);
}

double NNfunction_nn_chi4_chi4::synapse0x2217a00() {
   return (neuron0x21f0ef0()*-0.0367666);
}

double NNfunction_nn_chi4_chi4::synapse0x2217a40() {
   return (neuron0x21f1230()*-0.00908547);
}

double NNfunction_nn_chi4_chi4::synapse0x2217a80() {
   return (neuron0x21f1570()*-0.012725);
}

double NNfunction_nn_chi4_chi4::synapse0x2217ac0() {
   return (neuron0x21f18b0()*0.026509);
}

double NNfunction_nn_chi4_chi4::synapse0x2217b00() {
   return (neuron0x21f1bf0()*0.0755792);
}

double NNfunction_nn_chi4_chi4::synapse0x2217b40() {
   return (neuron0x21f1f30()*0.0510908);
}

double NNfunction_nn_chi4_chi4::synapse0x2217b80() {
   return (neuron0x21f2270()*0.0132764);
}

double NNfunction_nn_chi4_chi4::synapse0x2217bc0() {
   return (neuron0x21f25b0()*-0.175603);
}

double NNfunction_nn_chi4_chi4::synapse0x2217c00() {
   return (neuron0x21f28f0()*-0.00537484);
}

double NNfunction_nn_chi4_chi4::synapse0x2217690() {
   return (neuron0x21f2c30()*-0.0196398);
}

double NNfunction_nn_chi4_chi4::synapse0x22176d0() {
   return (neuron0x21f3190()*-0.00822778);
}

double NNfunction_nn_chi4_chi4::synapse0x2217d50() {
   return (neuron0x21f33b0()*0.00976787);
}

double NNfunction_nn_chi4_chi4::synapse0x2217d90() {
   return (neuron0x21f36f0()*0.00302296);
}

double NNfunction_nn_chi4_chi4::synapse0x2217dd0() {
   return (neuron0x21f3a30()*0.0328553);
}

double NNfunction_nn_chi4_chi4::synapse0x2217e10() {
   return (neuron0x21f3d70()*-0.00225497);
}

double NNfunction_nn_chi4_chi4::synapse0x2217e50() {
   return (neuron0x21f40b0()*-0.00593385);
}

double NNfunction_nn_chi4_chi4::synapse0x2217e90() {
   return (neuron0x21f43f0()*0.945127);
}

double NNfunction_nn_chi4_chi4::synapse0x2218210() {
   return (neuron0x21ef8c0()*-0.022331);
}

double NNfunction_nn_chi4_chi4::synapse0x2218250() {
   return (neuron0x21efb70()*-0.0244708);
}

double NNfunction_nn_chi4_chi4::synapse0x2218290() {
   return (neuron0x21efeb0()*0.00851426);
}

double NNfunction_nn_chi4_chi4::synapse0x22182d0() {
   return (neuron0x21f01f0()*2.28906);
}

double NNfunction_nn_chi4_chi4::synapse0x2218310() {
   return (neuron0x21f0530()*0.00804945);
}

double NNfunction_nn_chi4_chi4::synapse0x2218350() {
   return (neuron0x21f0870()*0.00106035);
}

double NNfunction_nn_chi4_chi4::synapse0x2218390() {
   return (neuron0x21f0bb0()*-0.0146537);
}

double NNfunction_nn_chi4_chi4::synapse0x22183d0() {
   return (neuron0x21f0ef0()*0.000499525);
}

double NNfunction_nn_chi4_chi4::synapse0x2218410() {
   return (neuron0x21f1230()*-0.0166199);
}

double NNfunction_nn_chi4_chi4::synapse0x2218450() {
   return (neuron0x21f1570()*-0.00216512);
}

double NNfunction_nn_chi4_chi4::synapse0x2218490() {
   return (neuron0x21f18b0()*-0.0103663);
}

double NNfunction_nn_chi4_chi4::synapse0x22184d0() {
   return (neuron0x21f1bf0()*-0.206202);
}

double NNfunction_nn_chi4_chi4::synapse0x2218510() {
   return (neuron0x21f1f30()*-0.0105281);
}

double NNfunction_nn_chi4_chi4::synapse0x2218550() {
   return (neuron0x21f2270()*-0.0326275);
}

double NNfunction_nn_chi4_chi4::synapse0x2218590() {
   return (neuron0x21f25b0()*-0.00545665);
}

double NNfunction_nn_chi4_chi4::synapse0x22185d0() {
   return (neuron0x21f28f0()*0.0132528);
}

double NNfunction_nn_chi4_chi4::synapse0x2218060() {
   return (neuron0x21f2c30()*-0.0333931);
}

double NNfunction_nn_chi4_chi4::synapse0x22180a0() {
   return (neuron0x21f3190()*0.00387434);
}

double NNfunction_nn_chi4_chi4::synapse0x2218720() {
   return (neuron0x21f33b0()*0.0211153);
}

double NNfunction_nn_chi4_chi4::synapse0x2218760() {
   return (neuron0x21f36f0()*0.000920923);
}

double NNfunction_nn_chi4_chi4::synapse0x22187a0() {
   return (neuron0x21f3a30()*0.00393052);
}

double NNfunction_nn_chi4_chi4::synapse0x22187e0() {
   return (neuron0x21f3d70()*-0.00443431);
}

double NNfunction_nn_chi4_chi4::synapse0x2218820() {
   return (neuron0x21f40b0()*0.0240405);
}

double NNfunction_nn_chi4_chi4::synapse0x2218860() {
   return (neuron0x21f43f0()*-0.0118426);
}

double NNfunction_nn_chi4_chi4::synapse0x2218be0() {
   return (neuron0x21ef8c0()*0.183286);
}

double NNfunction_nn_chi4_chi4::synapse0x2218c20() {
   return (neuron0x21efb70()*-0.570053);
}

double NNfunction_nn_chi4_chi4::synapse0x2218c60() {
   return (neuron0x21efeb0()*0.370558);
}

double NNfunction_nn_chi4_chi4::synapse0x2218ca0() {
   return (neuron0x21f01f0()*0.325856);
}

double NNfunction_nn_chi4_chi4::synapse0x2218ce0() {
   return (neuron0x21f0530()*-0.638213);
}

double NNfunction_nn_chi4_chi4::synapse0x2218d20() {
   return (neuron0x21f0870()*-0.338298);
}

double NNfunction_nn_chi4_chi4::synapse0x2218d60() {
   return (neuron0x21f0bb0()*-0.269093);
}

double NNfunction_nn_chi4_chi4::synapse0x2218da0() {
   return (neuron0x21f0ef0()*-0.408833);
}

double NNfunction_nn_chi4_chi4::synapse0x2218de0() {
   return (neuron0x21f1230()*0.209976);
}

double NNfunction_nn_chi4_chi4::synapse0x2218e20() {
   return (neuron0x21f1570()*0.337275);
}

double NNfunction_nn_chi4_chi4::synapse0x2218e60() {
   return (neuron0x21f18b0()*-0.0730258);
}

double NNfunction_nn_chi4_chi4::synapse0x2218ea0() {
   return (neuron0x21f1bf0()*0.830379);
}

double NNfunction_nn_chi4_chi4::synapse0x2218ee0() {
   return (neuron0x21f1f30()*0.408305);
}

double NNfunction_nn_chi4_chi4::synapse0x2218f20() {
   return (neuron0x21f2270()*0.74419);
}

double NNfunction_nn_chi4_chi4::synapse0x2218f60() {
   return (neuron0x21f25b0()*0.288861);
}

double NNfunction_nn_chi4_chi4::synapse0x2218fa0() {
   return (neuron0x21f28f0()*-0.278542);
}

double NNfunction_nn_chi4_chi4::synapse0x2218a30() {
   return (neuron0x21f2c30()*-0.934942);
}

double NNfunction_nn_chi4_chi4::synapse0x2218a70() {
   return (neuron0x21f3190()*-0.293626);
}

double NNfunction_nn_chi4_chi4::synapse0x22190f0() {
   return (neuron0x21f33b0()*0.0620623);
}

double NNfunction_nn_chi4_chi4::synapse0x2219130() {
   return (neuron0x21f36f0()*-0.906672);
}

double NNfunction_nn_chi4_chi4::synapse0x2219170() {
   return (neuron0x21f3a30()*0.0152594);
}

double NNfunction_nn_chi4_chi4::synapse0x22191b0() {
   return (neuron0x21f3d70()*-0.066347);
}

double NNfunction_nn_chi4_chi4::synapse0x22191f0() {
   return (neuron0x21f40b0()*-0.044631);
}

double NNfunction_nn_chi4_chi4::synapse0x2219230() {
   return (neuron0x21f43f0()*-0.703135);
}

double NNfunction_nn_chi4_chi4::synapse0x21f57c0() {
   return (neuron0x21f4860()*-1.00896);
}

double NNfunction_nn_chi4_chi4::synapse0x21f5800() {
   return (neuron0x21f51b0()*0.0341727);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6ce0() {
   return (neuron0x21f5c90()*-2.8435);
}

double NNfunction_nn_chi4_chi4::synapse0x21f6d20() {
   return (neuron0x1fb8fe0()*0.92211);
}

double NNfunction_nn_chi4_chi4::synapse0x21f76b0() {
   return (neuron0x21f6a30()*1.45319);
}

double NNfunction_nn_chi4_chi4::synapse0x21f76f0() {
   return (neuron0x21f7400()*2.28487);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8480() {
   return (neuron0x21f81d0()*-2.95259);
}

double NNfunction_nn_chi4_chi4::synapse0x21f84c0() {
   return (neuron0x21f8ba0()*1.07718);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8e50() {
   return (neuron0x21f9570()*1.12393);
}

double NNfunction_nn_chi4_chi4::synapse0x21f8e90() {
   return (neuron0x21fa050()*0.341582);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9820() {
   return (neuron0x21faa20()*0.0869702);
}

double NNfunction_nn_chi4_chi4::synapse0x21f9860() {
   return (neuron0x21f7b00()*-3.01994);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa300() {
   return (neuron0x21fc5d0()*0.161493);
}

double NNfunction_nn_chi4_chi4::synapse0x21fa340() {
   return (neuron0x21fcfa0()*0.168723);
}

double NNfunction_nn_chi4_chi4::synapse0x21facd0() {
   return (neuron0x21fd970()*-1.07214);
}

double NNfunction_nn_chi4_chi4::synapse0x21fad10() {
   return (neuron0x21fe340()*0.00599429);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7db0() {
   return (neuron0x2200150()*0.0139245);
}

double NNfunction_nn_chi4_chi4::synapse0x21f7df0() {
   return (neuron0x2200430()*0.502164);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc880() {
   return (neuron0x2200e00()*-0.771162);
}

double NNfunction_nn_chi4_chi4::synapse0x21fc8c0() {
   return (neuron0x22017d0()*-0.104649);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd250() {
   return (neuron0x22021a0()*0.735124);
}

double NNfunction_nn_chi4_chi4::synapse0x21fd290() {
   return (neuron0x2202b70()*2.93557);
}

double NNfunction_nn_chi4_chi4::synapse0x21fdc20() {
   return (neuron0x21fb6c0()*2.20949);
}

double NNfunction_nn_chi4_chi4::synapse0x21fdc60() {
   return (neuron0x21fc090()*-0.181792);
}

double NNfunction_nn_chi4_chi4::synapse0x21fe5f0() {
   return (neuron0x2205900()*1.07722);
}

double NNfunction_nn_chi4_chi4::synapse0x21fe630() {
   return (neuron0x22062d0()*-0.77996);
}

double NNfunction_nn_chi4_chi4::synapse0x21f27d0() {
   return (neuron0x2206ca0()*3.78884);
}

double NNfunction_nn_chi4_chi4::synapse0x21f2810() {
   return (neuron0x2207670()*0.125084);
}

double NNfunction_nn_chi4_chi4::synapse0x22006e0() {
   return (neuron0x2208040()*-0.477042);
}

double NNfunction_nn_chi4_chi4::synapse0x2200720() {
   return (neuron0x2208a10()*2.88959);
}

double NNfunction_nn_chi4_chi4::synapse0x22010b0() {
   return (neuron0x22093e0()*-0.13081);
}

double NNfunction_nn_chi4_chi4::synapse0x22010f0() {
   return (neuron0x2209db0()*0.142781);
}

double NNfunction_nn_chi4_chi4::synapse0x2201a80() {
   return (neuron0x21ffe40()*-0.931664);
}

double NNfunction_nn_chi4_chi4::synapse0x2201ac0() {
   return (neuron0x220c990()*-0.778906);
}

double NNfunction_nn_chi4_chi4::synapse0x2202450() {
   return (neuron0x220d360()*-3.32389);
}

double NNfunction_nn_chi4_chi4::synapse0x2202490() {
   return (neuron0x220dd30()*0.161834);
}

double NNfunction_nn_chi4_chi4::synapse0x2202e20() {
   return (neuron0x220e700()*0.978234);
}

double NNfunction_nn_chi4_chi4::synapse0x2202e60() {
   return (neuron0x220f0d0()*-5.26207);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb970() {
   return (neuron0x220faa0()*0.0605867);
}

double NNfunction_nn_chi4_chi4::synapse0x21fb9b0() {
   return (neuron0x2210470()*0.228287);
}

double NNfunction_nn_chi4_chi4::synapse0x2205220() {
   return (neuron0x2210e40()*-0.0326736);
}

double NNfunction_nn_chi4_chi4::synapse0x2205260() {
   return (neuron0x2211a20()*0.00667304);
}

double NNfunction_nn_chi4_chi4::synapse0x2205bb0() {
   return (neuron0x22123f0()*-3.90104);
}

double NNfunction_nn_chi4_chi4::synapse0x2205bf0() {
   return (neuron0x2203270()*0.949634);
}

double NNfunction_nn_chi4_chi4::synapse0x2206580() {
   return (neuron0x2203c40()*0.550961);
}

double NNfunction_nn_chi4_chi4::synapse0x22065c0() {
   return (neuron0x2204610()*-0.2656);
}

double NNfunction_nn_chi4_chi4::synapse0x2206f50() {
   return (neuron0x2216c50()*0.502027);
}

double NNfunction_nn_chi4_chi4::synapse0x2206f90() {
   return (neuron0x2217500()*-1.74097);
}

double NNfunction_nn_chi4_chi4::synapse0x2207920() {
   return (neuron0x2217ed0()*0.711236);
}

double NNfunction_nn_chi4_chi4::synapse0x2207960() {
   return (neuron0x22188a0()*-0.144821);
}

double NNfunction_nn_chi4_chi4::synapse0x220a060() {
   return (neuron0x21f4860()*1.05223);
}

double NNfunction_nn_chi4_chi4::synapse0x220a0a0() {
   return (neuron0x21f51b0()*0.23909);
}

double NNfunction_nn_chi4_chi4::synapse0x21ff620() {
   return (neuron0x21f5c90()*0.182793);
}

double NNfunction_nn_chi4_chi4::synapse0x21ff660() {
   return (neuron0x1fb8fe0()*-1.62491);
}

double NNfunction_nn_chi4_chi4::synapse0x220cc40() {
   return (neuron0x21f6a30()*-0.785221);
}

double NNfunction_nn_chi4_chi4::synapse0x220cc80() {
   return (neuron0x21f7400()*-2.65948);
}

double NNfunction_nn_chi4_chi4::synapse0x220d610() {
   return (neuron0x21f81d0()*2.62013);
}

double NNfunction_nn_chi4_chi4::synapse0x220d650() {
   return (neuron0x21f8ba0()*-2.36088);
}

double NNfunction_nn_chi4_chi4::synapse0x220dfe0() {
   return (neuron0x21f9570()*1.80725);
}

double NNfunction_nn_chi4_chi4::synapse0x220e020() {
   return (neuron0x21fa050()*1.26331);
}

double NNfunction_nn_chi4_chi4::synapse0x220e9b0() {
   return (neuron0x21faa20()*0.0513417);
}

double NNfunction_nn_chi4_chi4::synapse0x220e9f0() {
   return (neuron0x21f7b00()*-0.0862553);
}

double NNfunction_nn_chi4_chi4::synapse0x220f380() {
   return (neuron0x21fc5d0()*-0.187042);
}

double NNfunction_nn_chi4_chi4::synapse0x220f3c0() {
   return (neuron0x21fcfa0()*2.00104);
}

double NNfunction_nn_chi4_chi4::synapse0x220fd50() {
   return (neuron0x21fd970()*1.1225);
}

double NNfunction_nn_chi4_chi4::synapse0x220fd90() {
   return (neuron0x21fe340()*-0.0712894);
}

double NNfunction_nn_chi4_chi4::synapse0x2210720() {
   return (neuron0x2200150()*2.48369);
}

double NNfunction_nn_chi4_chi4::synapse0x2210760() {
   return (neuron0x2200430()*-0.00425159);
}

double NNfunction_nn_chi4_chi4::synapse0x22110f0() {
   return (neuron0x2200e00()*1.60321);
}

double NNfunction_nn_chi4_chi4::synapse0x2211130() {
   return (neuron0x22017d0()*-0.114803);
}

double NNfunction_nn_chi4_chi4::synapse0x2211cd0() {
   return (neuron0x22021a0()*-0.0387987);
}

double NNfunction_nn_chi4_chi4::synapse0x2211d10() {
   return (neuron0x2202b70()*-0.355957);
}

double NNfunction_nn_chi4_chi4::synapse0x22126a0() {
   return (neuron0x21fb6c0()*0.065081);
}

double NNfunction_nn_chi4_chi4::synapse0x22126e0() {
   return (neuron0x21fc090()*-4.90609);
}

double NNfunction_nn_chi4_chi4::synapse0x2203520() {
   return (neuron0x2205900()*-1.02992);
}

double NNfunction_nn_chi4_chi4::synapse0x2203560() {
   return (neuron0x22062d0()*-0.681232);
}

double NNfunction_nn_chi4_chi4::synapse0x2203ef0() {
   return (neuron0x2206ca0()*1.06015);
}

double NNfunction_nn_chi4_chi4::synapse0x2203f30() {
   return (neuron0x2207670()*-0.521002);
}

double NNfunction_nn_chi4_chi4::synapse0x22048c0() {
   return (neuron0x2208040()*-1.70656);
}

double NNfunction_nn_chi4_chi4::synapse0x2204900() {
   return (neuron0x2208a10()*-1.05814);
}

double NNfunction_nn_chi4_chi4::synapse0x2216de0() {
   return (neuron0x22093e0()*0.181845);
}

double NNfunction_nn_chi4_chi4::synapse0x2216e20() {
   return (neuron0x2209db0()*0.110555);
}

double NNfunction_nn_chi4_chi4::synapse0x22177b0() {
   return (neuron0x21ffe40()*0.393508);
}

double NNfunction_nn_chi4_chi4::synapse0x22177f0() {
   return (neuron0x220c990()*0.765742);
}

double NNfunction_nn_chi4_chi4::synapse0x2218180() {
   return (neuron0x220d360()*-0.625155);
}

double NNfunction_nn_chi4_chi4::synapse0x22181c0() {
   return (neuron0x220dd30()*0.69991);
}

double NNfunction_nn_chi4_chi4::synapse0x2218b50() {
   return (neuron0x220e700()*0.116384);
}

double NNfunction_nn_chi4_chi4::synapse0x2218b90() {
   return (neuron0x220f0d0()*3.66631);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4a80() {
   return (neuron0x220faa0()*-0.115142);
}

double NNfunction_nn_chi4_chi4::synapse0x21f4ac0() {
   return (neuron0x2210470()*0.132319);
}

double NNfunction_nn_chi4_chi4::synapse0x22082f0() {
   return (neuron0x2210e40()*-0.84007);
}

double NNfunction_nn_chi4_chi4::synapse0x2208330() {
   return (neuron0x2211a20()*-0.138921);
}

double NNfunction_nn_chi4_chi4::synapse0x2219270() {
   return (neuron0x22123f0()*-0.345015);
}

double NNfunction_nn_chi4_chi4::synapse0x22192b0() {
   return (neuron0x2203270()*-1.47118);
}

double NNfunction_nn_chi4_chi4::synapse0x22192f0() {
   return (neuron0x2203c40()*2.29669);
}

double NNfunction_nn_chi4_chi4::synapse0x2219330() {
   return (neuron0x2204610()*-0.516371);
}

double NNfunction_nn_chi4_chi4::synapse0x22201e0() {
   return (neuron0x2216c50()*1.02106);
}

double NNfunction_nn_chi4_chi4::synapse0x2220220() {
   return (neuron0x2217500()*0.673346);
}

double NNfunction_nn_chi4_chi4::synapse0x2220260() {
   return (neuron0x2217ed0()*-1.56507);
}

double NNfunction_nn_chi4_chi4::synapse0x22202a0() {
   return (neuron0x22188a0()*0.160727);
}

double NNfunction_nn_chi4_chi4::synapse0x2220620() {
   return (neuron0x21f4860()*3.33528);
}

double NNfunction_nn_chi4_chi4::synapse0x2220660() {
   return (neuron0x21f51b0()*0.0183165);
}

double NNfunction_nn_chi4_chi4::synapse0x22206a0() {
   return (neuron0x21f5c90()*1.19735);
}

double NNfunction_nn_chi4_chi4::synapse0x22206e0() {
   return (neuron0x1fb8fe0()*-0.335381);
}

double NNfunction_nn_chi4_chi4::synapse0x2220720() {
   return (neuron0x21f6a30()*-1.96702);
}

double NNfunction_nn_chi4_chi4::synapse0x2220760() {
   return (neuron0x21f7400()*0.94174);
}

double NNfunction_nn_chi4_chi4::synapse0x22207a0() {
   return (neuron0x21f81d0()*-0.288986);
}

double NNfunction_nn_chi4_chi4::synapse0x22207e0() {
   return (neuron0x21f8ba0()*-0.425192);
}

double NNfunction_nn_chi4_chi4::synapse0x2220820() {
   return (neuron0x21f9570()*0.757867);
}

double NNfunction_nn_chi4_chi4::synapse0x2220860() {
   return (neuron0x21fa050()*-0.168136);
}

double NNfunction_nn_chi4_chi4::synapse0x22208a0() {
   return (neuron0x21faa20()*-0.0908123);
}

double NNfunction_nn_chi4_chi4::synapse0x22208e0() {
   return (neuron0x21f7b00()*1.01083);
}

double NNfunction_nn_chi4_chi4::synapse0x2220920() {
   return (neuron0x21fc5d0()*-0.152624);
}

double NNfunction_nn_chi4_chi4::synapse0x2220960() {
   return (neuron0x21fcfa0()*1.30908);
}

double NNfunction_nn_chi4_chi4::synapse0x22209a0() {
   return (neuron0x21fd970()*-3.23863);
}

double NNfunction_nn_chi4_chi4::synapse0x22209e0() {
   return (neuron0x21fe340()*-0.105065);
}

double NNfunction_nn_chi4_chi4::synapse0x2220470() {
   return (neuron0x2200150()*1.03713);
}

double NNfunction_nn_chi4_chi4::synapse0x22204b0() {
   return (neuron0x2200430()*-0.141691);
}

double NNfunction_nn_chi4_chi4::synapse0x2220b30() {
   return (neuron0x2200e00()*0.327648);
}

double NNfunction_nn_chi4_chi4::synapse0x2220b70() {
   return (neuron0x22017d0()*-0.0439184);
}

double NNfunction_nn_chi4_chi4::synapse0x2220bb0() {
   return (neuron0x22021a0()*-0.247707);
}

double NNfunction_nn_chi4_chi4::synapse0x2220bf0() {
   return (neuron0x2202b70()*-0.110364);
}

double NNfunction_nn_chi4_chi4::synapse0x2220c30() {
   return (neuron0x21fb6c0()*-0.434115);
}

double NNfunction_nn_chi4_chi4::synapse0x2220c70() {
   return (neuron0x21fc090()*-2.59099);
}

double NNfunction_nn_chi4_chi4::synapse0x2220cb0() {
   return (neuron0x2205900()*0.776056);
}

double NNfunction_nn_chi4_chi4::synapse0x2220cf0() {
   return (neuron0x22062d0()*-0.7584);
}

double NNfunction_nn_chi4_chi4::synapse0x2220d30() {
   return (neuron0x2206ca0()*-1.95681);
}

double NNfunction_nn_chi4_chi4::synapse0x2220d70() {
   return (neuron0x2207670()*-1.05708);
}

double NNfunction_nn_chi4_chi4::synapse0x2220db0() {
   return (neuron0x2208040()*-0.935384);
}

double NNfunction_nn_chi4_chi4::synapse0x2220df0() {
   return (neuron0x2208a10()*-0.690632);
}

double NNfunction_nn_chi4_chi4::synapse0x2220e30() {
   return (neuron0x22093e0()*0.143221);
}

double NNfunction_nn_chi4_chi4::synapse0x2220e70() {
   return (neuron0x2209db0()*0.360983);
}

double NNfunction_nn_chi4_chi4::synapse0x2220a20() {
   return (neuron0x21ffe40()*0.142227);
}

double NNfunction_nn_chi4_chi4::synapse0x2220a60() {
   return (neuron0x220c990()*2.73859);
}

double NNfunction_nn_chi4_chi4::synapse0x2220aa0() {
   return (neuron0x220d360()*0.726722);
}

double NNfunction_nn_chi4_chi4::synapse0x2220ae0() {
   return (neuron0x220dd30()*0.169899);
}

double NNfunction_nn_chi4_chi4::synapse0x22210c0() {
   return (neuron0x220e700()*2.52474);
}

double NNfunction_nn_chi4_chi4::synapse0x2221100() {
   return (neuron0x220f0d0()*2.87495);
}

double NNfunction_nn_chi4_chi4::synapse0x2221140() {
   return (neuron0x220faa0()*-0.0675234);
}

double NNfunction_nn_chi4_chi4::synapse0x2221180() {
   return (neuron0x2210470()*0.711305);
}

double NNfunction_nn_chi4_chi4::synapse0x22211c0() {
   return (neuron0x2210e40()*2.0455);
}

double NNfunction_nn_chi4_chi4::synapse0x2221200() {
   return (neuron0x2211a20()*-0.0474599);
}

double NNfunction_nn_chi4_chi4::synapse0x2221240() {
   return (neuron0x22123f0()*0.0311074);
}

double NNfunction_nn_chi4_chi4::synapse0x2221280() {
   return (neuron0x2203270()*-1.12196);
}

double NNfunction_nn_chi4_chi4::synapse0x22212c0() {
   return (neuron0x2203c40()*0.923045);
}

double NNfunction_nn_chi4_chi4::synapse0x2221300() {
   return (neuron0x2204610()*0.209329);
}

double NNfunction_nn_chi4_chi4::synapse0x2221340() {
   return (neuron0x2216c50()*0.787156);
}

double NNfunction_nn_chi4_chi4::synapse0x2221380() {
   return (neuron0x2217500()*-3.0668);
}

double NNfunction_nn_chi4_chi4::synapse0x22213c0() {
   return (neuron0x2217ed0()*-0.347892);
}

double NNfunction_nn_chi4_chi4::synapse0x2221400() {
   return (neuron0x22188a0()*0.110223);
}

double NNfunction_nn_chi4_chi4::synapse0x2221780() {
   return (neuron0x21f4860()*-0.416644);
}

double NNfunction_nn_chi4_chi4::synapse0x22217c0() {
   return (neuron0x21f51b0()*-1.37175);
}

double NNfunction_nn_chi4_chi4::synapse0x2221800() {
   return (neuron0x21f5c90()*0.596077);
}

double NNfunction_nn_chi4_chi4::synapse0x2221840() {
   return (neuron0x1fb8fe0()*-1.60517);
}

double NNfunction_nn_chi4_chi4::synapse0x2221880() {
   return (neuron0x21f6a30()*-1.36009);
}

double NNfunction_nn_chi4_chi4::synapse0x22218c0() {
   return (neuron0x21f7400()*-1.90773);
}

double NNfunction_nn_chi4_chi4::synapse0x2221900() {
   return (neuron0x21f81d0()*0.29953);
}

double NNfunction_nn_chi4_chi4::synapse0x2221940() {
   return (neuron0x21f8ba0()*-0.818478);
}

double NNfunction_nn_chi4_chi4::synapse0x2221980() {
   return (neuron0x21f9570()*-0.0960147);
}

double NNfunction_nn_chi4_chi4::synapse0x22219c0() {
   return (neuron0x21fa050()*0.631455);
}

double NNfunction_nn_chi4_chi4::synapse0x2221a00() {
   return (neuron0x21faa20()*-0.130514);
}

double NNfunction_nn_chi4_chi4::synapse0x2221a40() {
   return (neuron0x21f7b00()*0.0281788);
}

double NNfunction_nn_chi4_chi4::synapse0x2221a80() {
   return (neuron0x21fc5d0()*-0.353188);
}

double NNfunction_nn_chi4_chi4::synapse0x2221ac0() {
   return (neuron0x21fcfa0()*-0.128058);
}

double NNfunction_nn_chi4_chi4::synapse0x2221b00() {
   return (neuron0x21fd970()*0.0232279);
}

double NNfunction_nn_chi4_chi4::synapse0x2221b40() {
   return (neuron0x21fe340()*-0.816604);
}

double NNfunction_nn_chi4_chi4::synapse0x22215d0() {
   return (neuron0x2200150()*-0.463893);
}

double NNfunction_nn_chi4_chi4::synapse0x2221610() {
   return (neuron0x2200430()*-0.264276);
}

double NNfunction_nn_chi4_chi4::synapse0x2221c90() {
   return (neuron0x2200e00()*-0.13393);
}

double NNfunction_nn_chi4_chi4::synapse0x2221cd0() {
   return (neuron0x22017d0()*-1.58009);
}

double NNfunction_nn_chi4_chi4::synapse0x2221d10() {
   return (neuron0x22021a0()*-0.180367);
}

double NNfunction_nn_chi4_chi4::synapse0x2221d50() {
   return (neuron0x2202b70()*-0.938642);
}

double NNfunction_nn_chi4_chi4::synapse0x2221d90() {
   return (neuron0x21fb6c0()*0.358822);
}

double NNfunction_nn_chi4_chi4::synapse0x2221dd0() {
   return (neuron0x21fc090()*0.0453417);
}

double NNfunction_nn_chi4_chi4::synapse0x2221e10() {
   return (neuron0x2205900()*-1.00929);
}

double NNfunction_nn_chi4_chi4::synapse0x2221e50() {
   return (neuron0x22062d0()*-1.05504);
}

double NNfunction_nn_chi4_chi4::synapse0x2221e90() {
   return (neuron0x2206ca0()*-0.625258);
}

double NNfunction_nn_chi4_chi4::synapse0x2221ed0() {
   return (neuron0x2207670()*-0.785645);
}

double NNfunction_nn_chi4_chi4::synapse0x2221f10() {
   return (neuron0x2208040()*-0.668502);
}

double NNfunction_nn_chi4_chi4::synapse0x2221f50() {
   return (neuron0x2208a10()*-0.764954);
}

double NNfunction_nn_chi4_chi4::synapse0x2221f90() {
   return (neuron0x22093e0()*0.5103);
}

double NNfunction_nn_chi4_chi4::synapse0x2221fd0() {
   return (neuron0x2209db0()*0.496231);
}

double NNfunction_nn_chi4_chi4::synapse0x2221b80() {
   return (neuron0x21ffe40()*-0.160817);
}

double NNfunction_nn_chi4_chi4::synapse0x2221bc0() {
   return (neuron0x220c990()*-0.93919);
}

double NNfunction_nn_chi4_chi4::synapse0x2221c00() {
   return (neuron0x220d360()*-0.95026);
}

double NNfunction_nn_chi4_chi4::synapse0x2221c40() {
   return (neuron0x220dd30()*0.472784);
}

double NNfunction_nn_chi4_chi4::synapse0x2222220() {
   return (neuron0x220e700()*0.159116);
}

double NNfunction_nn_chi4_chi4::synapse0x2222260() {
   return (neuron0x220f0d0()*0.528335);
}

double NNfunction_nn_chi4_chi4::synapse0x22222a0() {
   return (neuron0x220faa0()*-0.000697107);
}

double NNfunction_nn_chi4_chi4::synapse0x22222e0() {
   return (neuron0x2210470()*-1.64923);
}

double NNfunction_nn_chi4_chi4::synapse0x2222320() {
   return (neuron0x2210e40()*-0.176445);
}

double NNfunction_nn_chi4_chi4::synapse0x2222360() {
   return (neuron0x2211a20()*-0.144433);
}

double NNfunction_nn_chi4_chi4::synapse0x22223a0() {
   return (neuron0x22123f0()*-0.305977);
}

double NNfunction_nn_chi4_chi4::synapse0x22223e0() {
   return (neuron0x2203270()*-1.62872);
}

double NNfunction_nn_chi4_chi4::synapse0x2222420() {
   return (neuron0x2203c40()*-0.179695);
}

double NNfunction_nn_chi4_chi4::synapse0x2222460() {
   return (neuron0x2204610()*-0.397936);
}

double NNfunction_nn_chi4_chi4::synapse0x22224a0() {
   return (neuron0x2216c50()*0.0185987);
}

double NNfunction_nn_chi4_chi4::synapse0x22224e0() {
   return (neuron0x2217500()*-0.281209);
}

double NNfunction_nn_chi4_chi4::synapse0x2222520() {
   return (neuron0x2217ed0()*0.164857);
}

double NNfunction_nn_chi4_chi4::synapse0x2222560() {
   return (neuron0x22188a0()*-0.421965);
}

double NNfunction_nn_chi4_chi4::synapse0x22228e0() {
   return (neuron0x21f4860()*0.331453);
}

double NNfunction_nn_chi4_chi4::synapse0x2222920() {
   return (neuron0x21f51b0()*0.129123);
}

double NNfunction_nn_chi4_chi4::synapse0x2222960() {
   return (neuron0x21f5c90()*-0.0103766);
}

double NNfunction_nn_chi4_chi4::synapse0x22229a0() {
   return (neuron0x1fb8fe0()*-1.26342);
}

double NNfunction_nn_chi4_chi4::synapse0x22229e0() {
   return (neuron0x21f6a30()*-0.146976);
}

double NNfunction_nn_chi4_chi4::synapse0x2222a20() {
   return (neuron0x21f7400()*0.522232);
}

double NNfunction_nn_chi4_chi4::synapse0x2222a60() {
   return (neuron0x21f81d0()*-0.45462);
}

double NNfunction_nn_chi4_chi4::synapse0x2222aa0() {
   return (neuron0x21f8ba0()*-1.58491);
}

double NNfunction_nn_chi4_chi4::synapse0x2222ae0() {
   return (neuron0x21f9570()*-0.3149);
}

double NNfunction_nn_chi4_chi4::synapse0x2222b20() {
   return (neuron0x21fa050()*0.0120024);
}

double NNfunction_nn_chi4_chi4::synapse0x2222b60() {
   return (neuron0x21faa20()*-0.0492126);
}

double NNfunction_nn_chi4_chi4::synapse0x2222ba0() {
   return (neuron0x21f7b00()*-0.051841);
}

double NNfunction_nn_chi4_chi4::synapse0x2222be0() {
   return (neuron0x21fc5d0()*0.0221584);
}

double NNfunction_nn_chi4_chi4::synapse0x2222c20() {
   return (neuron0x21fcfa0()*1.42428);
}

double NNfunction_nn_chi4_chi4::synapse0x2222c60() {
   return (neuron0x21fd970()*1.0864);
}

double NNfunction_nn_chi4_chi4::synapse0x2222ca0() {
   return (neuron0x21fe340()*-0.447089);
}

double NNfunction_nn_chi4_chi4::synapse0x2222730() {
   return (neuron0x2200150()*4.3053);
}

double NNfunction_nn_chi4_chi4::synapse0x2222770() {
   return (neuron0x2200430()*-0.127216);
}

double NNfunction_nn_chi4_chi4::synapse0x2222df0() {
   return (neuron0x2200e00()*0.610083);
}

double NNfunction_nn_chi4_chi4::synapse0x2222e30() {
   return (neuron0x22017d0()*0.000444015);
}

double NNfunction_nn_chi4_chi4::synapse0x2222e70() {
   return (neuron0x22021a0()*0.031216);
}

double NNfunction_nn_chi4_chi4::synapse0x2222eb0() {
   return (neuron0x2202b70()*0.191576);
}

double NNfunction_nn_chi4_chi4::synapse0x2222ef0() {
   return (neuron0x21fb6c0()*0.0166895);
}

double NNfunction_nn_chi4_chi4::synapse0x2222f30() {
   return (neuron0x21fc090()*-6.01606);
}

double NNfunction_nn_chi4_chi4::synapse0x2222f70() {
   return (neuron0x2205900()*-1.91675);
}

double NNfunction_nn_chi4_chi4::synapse0x2222fb0() {
   return (neuron0x22062d0()*-0.757905);
}

double NNfunction_nn_chi4_chi4::synapse0x2222ff0() {
   return (neuron0x2206ca0()*-0.386664);
}

double NNfunction_nn_chi4_chi4::synapse0x2223030() {
   return (neuron0x2207670()*-0.163144);
}

double NNfunction_nn_chi4_chi4::synapse0x2223070() {
   return (neuron0x2208040()*-1.55526);
}

double NNfunction_nn_chi4_chi4::synapse0x22230b0() {
   return (neuron0x2208a10()*0.319486);
}

double NNfunction_nn_chi4_chi4::synapse0x22230f0() {
   return (neuron0x22093e0()*-0.0326025);
}

double NNfunction_nn_chi4_chi4::synapse0x2223130() {
   return (neuron0x2209db0()*0.841908);
}

double NNfunction_nn_chi4_chi4::synapse0x2222ce0() {
   return (neuron0x21ffe40()*0.730374);
}

double NNfunction_nn_chi4_chi4::synapse0x2222d20() {
   return (neuron0x220c990()*3.03526);
}

double NNfunction_nn_chi4_chi4::synapse0x2222d60() {
   return (neuron0x220d360()*-0.00543303);
}

double NNfunction_nn_chi4_chi4::synapse0x2222da0() {
   return (neuron0x220dd30()*-0.131947);
}

double NNfunction_nn_chi4_chi4::synapse0x2223380() {
   return (neuron0x220e700()*-0.0303185);
}

double NNfunction_nn_chi4_chi4::synapse0x22233c0() {
   return (neuron0x220f0d0()*0.840436);
}

double NNfunction_nn_chi4_chi4::synapse0x2223400() {
   return (neuron0x220faa0()*-0.0071906);
}

double NNfunction_nn_chi4_chi4::synapse0x2223440() {
   return (neuron0x2210470()*-1.28901);
}

double NNfunction_nn_chi4_chi4::synapse0x2223480() {
   return (neuron0x2210e40()*0.0529027);
}

double NNfunction_nn_chi4_chi4::synapse0x22234c0() {
   return (neuron0x2211a20()*0.027286);
}

double NNfunction_nn_chi4_chi4::synapse0x2223500() {
   return (neuron0x22123f0()*-0.0693159);
}

double NNfunction_nn_chi4_chi4::synapse0x2223540() {
   return (neuron0x2203270()*0.0733067);
}

double NNfunction_nn_chi4_chi4::synapse0x2223580() {
   return (neuron0x2203c40()*2.61216);
}

double NNfunction_nn_chi4_chi4::synapse0x22235c0() {
   return (neuron0x2204610()*-0.171687);
}

double NNfunction_nn_chi4_chi4::synapse0x2223600() {
   return (neuron0x2216c50()*3.34368);
}

double NNfunction_nn_chi4_chi4::synapse0x2223640() {
   return (neuron0x2217500()*0.031832);
}

double NNfunction_nn_chi4_chi4::synapse0x2223680() {
   return (neuron0x2217ed0()*-0.563963);
}

double NNfunction_nn_chi4_chi4::synapse0x22236c0() {
   return (neuron0x22188a0()*0.0244489);
}

double NNfunction_nn_chi4_chi4::synapse0x2223920() {
   return (neuron0x221faa0()*3.8277);
}

double NNfunction_nn_chi4_chi4::synapse0x2223960() {
   return (neuron0x221fe40()*-4.23422);
}

double NNfunction_nn_chi4_chi4::synapse0x22239a0() {
   return (neuron0x22202e0()*5.71757);
}

double NNfunction_nn_chi4_chi4::synapse0x22239e0() {
   return (neuron0x2221440()*0.599956);
}

double NNfunction_nn_chi4_chi4::synapse0x2223a20() {
   return (neuron0x22225a0()*-3.23287);
}

