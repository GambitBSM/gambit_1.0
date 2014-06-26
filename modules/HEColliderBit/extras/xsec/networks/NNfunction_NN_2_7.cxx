#include "NNfunction_NN_2_7.h"
#include <cmath>

double NNfunction_NN_2_7::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4748)/15.2502;
   input1 = (in1 - -1.0173)/1127.73;
   input2 = (in2 - 641.456)/614.549;
   input3 = (in3 - -36.5499)/839.1;
   input4 = (in4 - 1098.9)/972.413;
   input5 = (in5 - 911.077)/961.13;
   input6 = (in6 - 916.398)/959.855;
   input7 = (in7 - 934.404)/942.941;
   input8 = (in8 - 927.245)/972.579;
   input9 = (in9 - 913.888)/960.311;
   input10 = (in10 - 982.874)/953.307;
   input11 = (in11 - 715.734)/866.596;
   input12 = (in12 - 731.949)/875.014;
   input13 = (in13 - 496.106)/515.832;
   input14 = (in14 - 743.038)/834.727;
   input15 = (in15 - 738.052)/832.958;
   input16 = (in16 - 541.023)/572.574;
   input17 = (in17 - 761.47)/901.688;
   input18 = (in18 - 757.842)/902.656;
   input19 = (in19 - 798.362)/875.915;
   input20 = (in20 - -2.37264)/485.365;
   input21 = (in21 - -2.57252)/1149.91;
   input22 = (in22 - 2.40785)/1203.76;
   input23 = (in23 - -133.569)/459.634;
   switch(index) {
     case 0:
         return neuron0x1d8e680();
     default:
         return 0.;
   }
}

double NNfunction_NN_2_7::Value(int index, double* input) {
   input0 = (input[0] - 23.4748)/15.2502;
   input1 = (input[1] - -1.0173)/1127.73;
   input2 = (input[2] - 641.456)/614.549;
   input3 = (input[3] - -36.5499)/839.1;
   input4 = (input[4] - 1098.9)/972.413;
   input5 = (input[5] - 911.077)/961.13;
   input6 = (input[6] - 916.398)/959.855;
   input7 = (input[7] - 934.404)/942.941;
   input8 = (input[8] - 927.245)/972.579;
   input9 = (input[9] - 913.888)/960.311;
   input10 = (input[10] - 982.874)/953.307;
   input11 = (input[11] - 715.734)/866.596;
   input12 = (input[12] - 731.949)/875.014;
   input13 = (input[13] - 496.106)/515.832;
   input14 = (input[14] - 743.038)/834.727;
   input15 = (input[15] - 738.052)/832.958;
   input16 = (input[16] - 541.023)/572.574;
   input17 = (input[17] - 761.47)/901.688;
   input18 = (input[18] - 757.842)/902.656;
   input19 = (input[19] - 798.362)/875.915;
   input20 = (input[20] - -2.37264)/485.365;
   input21 = (input[21] - -2.57252)/1149.91;
   input22 = (input[22] - 2.40785)/1203.76;
   input23 = (input[23] - -133.569)/459.634;
   switch(index) {
     case 0:
         return neuron0x1d8e680();
     default:
         return 0.;
   }
}

double NNfunction_NN_2_7::neuron0x1d5a740() {
   return input0;
}

double NNfunction_NN_2_7::neuron0x1d5aa80() {
   return input1;
}

double NNfunction_NN_2_7::neuron0x1d5adc0() {
   return input2;
}

double NNfunction_NN_2_7::neuron0x1d5b100() {
   return input3;
}

double NNfunction_NN_2_7::neuron0x1d5b440() {
   return input4;
}

double NNfunction_NN_2_7::neuron0x1d5b780() {
   return input5;
}

double NNfunction_NN_2_7::neuron0x1d5bac0() {
   return input6;
}

double NNfunction_NN_2_7::neuron0x1d5be00() {
   return input7;
}

double NNfunction_NN_2_7::neuron0x1d5c140() {
   return input8;
}

double NNfunction_NN_2_7::neuron0x1d5c480() {
   return input9;
}

double NNfunction_NN_2_7::neuron0x1d5c7c0() {
   return input10;
}

double NNfunction_NN_2_7::neuron0x1d5cb00() {
   return input11;
}

double NNfunction_NN_2_7::neuron0x1d5ce40() {
   return input12;
}

double NNfunction_NN_2_7::neuron0x1d5d180() {
   return input13;
}

double NNfunction_NN_2_7::neuron0x1d5d4c0() {
   return input14;
}

double NNfunction_NN_2_7::neuron0x1d5d800() {
   return input15;
}

double NNfunction_NN_2_7::neuron0x1d5db40() {
   return input16;
}

double NNfunction_NN_2_7::neuron0x1d5e0a0() {
   return input17;
}

double NNfunction_NN_2_7::neuron0x1d5e2c0() {
   return input18;
}

double NNfunction_NN_2_7::neuron0x1d5e600() {
   return input19;
}

double NNfunction_NN_2_7::neuron0x1d5e940() {
   return input20;
}

double NNfunction_NN_2_7::neuron0x1d5ec80() {
   return input21;
}

double NNfunction_NN_2_7::neuron0x1d5efc0() {
   return input22;
}

double NNfunction_NN_2_7::neuron0x1d5f300() {
   return input23;
}

double NNfunction_NN_2_7::input0x1d5f7a0() {
   double input = -0.164816;
   input += synapse0x1b1a5b0();
   input += synapse0x1d5a600();
   input += synapse0x1d5a640();
   input += synapse0x1d5fa50();
   input += synapse0x1d5fa90();
   input += synapse0x1d5fad0();
   input += synapse0x1d5fb10();
   input += synapse0x1d5fb50();
   input += synapse0x1d5fb90();
   input += synapse0x1d5fbd0();
   input += synapse0x1d5fc10();
   input += synapse0x1d5fc50();
   input += synapse0x1d5fc90();
   input += synapse0x1d5fcd0();
   input += synapse0x1d5fd10();
   input += synapse0x1d5fd50();
   input += synapse0x1d5a570();
   input += synapse0x1d5a5b0();
   input += synapse0x1b0be10();
   input += synapse0x1b0be50();
   input += synapse0x1d5ffb0();
   input += synapse0x1d5fff0();
   input += synapse0x1d60030();
   input += synapse0x1d60070();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d5f7a0() {
   double input = input0x1d5f7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d600b0() {
   double input = 0.632032;
   input += synapse0x1d603f0();
   input += synapse0x1d60430();
   input += synapse0x1d60470();
   input += synapse0x1d604b0();
   input += synapse0x1d604f0();
   input += synapse0x1d60530();
   input += synapse0x1d60570();
   input += synapse0x1d605b0();
   input += synapse0x1d605f0();
   input += synapse0x1d5fea0();
   input += synapse0x1d5fee0();
   input += synapse0x1d5ff20();
   input += synapse0x1d5ff60();
   input += synapse0x1d60840();
   input += synapse0x1d60880();
   input += synapse0x1d608c0();
   input += synapse0x1d60240();
   input += synapse0x1d60280();
   input += synapse0x1d60a10();
   input += synapse0x1d60a50();
   input += synapse0x1d60a90();
   input += synapse0x1d60ad0();
   input += synapse0x1d60b10();
   input += synapse0x1d60b50();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d600b0() {
   double input = input0x1d600b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d60b90() {
   double input = 1.64342;
   input += synapse0x1d60ed0();
   input += synapse0x1d60f10();
   input += synapse0x1d60f50();
   input += synapse0x1d60f90();
   input += synapse0x1d60fd0();
   input += synapse0x1d61010();
   input += synapse0x1d61050();
   input += synapse0x1d61090();
   input += synapse0x1d610d0();
   input += synapse0x1d61110();
   input += synapse0x1d61150();
   input += synapse0x1d61190();
   input += synapse0x1d611d0();
   input += synapse0x1d61210();
   input += synapse0x1d61250();
   input += synapse0x1d61290();
   input += synapse0x1d60d20();
   input += synapse0x1d60d60();
   input += synapse0x1b19c80();
   input += synapse0x1b19cc0();
   input += synapse0x1d497d0();
   input += synapse0x1d49810();
   input += synapse0x1d49850();
   input += synapse0x1d5a680();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d60b90() {
   double input = input0x1d60b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1b1a420() {
   double input = -4.44607;
   input += synapse0x1d607e0();
   input += synapse0x1d5a6c0();
   input += synapse0x1d5a700();
   input += synapse0x1d613e0();
   input += synapse0x1d61420();
   input += synapse0x1d61460();
   input += synapse0x1d614a0();
   input += synapse0x1d614e0();
   input += synapse0x1d61520();
   input += synapse0x1d61560();
   input += synapse0x1d615a0();
   input += synapse0x1d615e0();
   input += synapse0x1d61620();
   input += synapse0x1d61660();
   input += synapse0x1d616a0();
   input += synapse0x1d616e0();
   input += synapse0x1d60630();
   input += synapse0x1d60670();
   input += synapse0x1d61830();
   input += synapse0x1d61870();
   input += synapse0x1d618b0();
   input += synapse0x1d618f0();
   input += synapse0x1d61930();
   input += synapse0x1d61970();
   return input;
}

double NNfunction_NN_2_7::neuron0x1b1a420() {
   double input = input0x1b1a420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d619b0() {
   double input = -0.392712;
   input += synapse0x1d61cf0();
   input += synapse0x1d61d30();
   input += synapse0x1d61d70();
   input += synapse0x1d61db0();
   input += synapse0x1d61df0();
   input += synapse0x1d61e30();
   input += synapse0x1d61e70();
   input += synapse0x1d61eb0();
   input += synapse0x1d61ef0();
   input += synapse0x1d61f30();
   input += synapse0x1d61f70();
   input += synapse0x1d61fb0();
   input += synapse0x1d61ff0();
   input += synapse0x1d62030();
   input += synapse0x1d62070();
   input += synapse0x1d620b0();
   input += synapse0x1d61b40();
   input += synapse0x1d61b80();
   input += synapse0x1d62200();
   input += synapse0x1d62240();
   input += synapse0x1d62280();
   input += synapse0x1d622c0();
   input += synapse0x1d62300();
   input += synapse0x1d62340();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d619b0() {
   double input = input0x1d619b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d62380() {
   double input = 0.509381;
   input += synapse0x1d626c0();
   input += synapse0x1d62700();
   input += synapse0x1d62740();
   input += synapse0x1d62780();
   input += synapse0x1d627c0();
   input += synapse0x1d62800();
   input += synapse0x1d62840();
   input += synapse0x1d62880();
   input += synapse0x1d628c0();
   input += synapse0x1b1a010();
   input += synapse0x1b1a050();
   input += synapse0x1b1a090();
   input += synapse0x1b1a0d0();
   input += synapse0x1b1a110();
   input += synapse0x1b1a150();
   input += synapse0x1b1a190();
   input += synapse0x1d62510();
   input += synapse0x1d62550();
   input += synapse0x1b1a2e0();
   input += synapse0x1b1a320();
   input += synapse0x1b1a360();
   input += synapse0x1b1a3a0();
   input += synapse0x1b1a3e0();
   input += synapse0x1d63110();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d62380() {
   double input = input0x1d62380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d63150() {
   double input = 2.45047;
   input += synapse0x1d63490();
   input += synapse0x1d634d0();
   input += synapse0x1d63510();
   input += synapse0x1d63550();
   input += synapse0x1d63590();
   input += synapse0x1d635d0();
   input += synapse0x1d63610();
   input += synapse0x1d63650();
   input += synapse0x1d63690();
   input += synapse0x1d636d0();
   input += synapse0x1d63710();
   input += synapse0x1d63750();
   input += synapse0x1d63790();
   input += synapse0x1d637d0();
   input += synapse0x1d63810();
   input += synapse0x1d63850();
   input += synapse0x1d632e0();
   input += synapse0x1d63320();
   input += synapse0x1d639a0();
   input += synapse0x1d639e0();
   input += synapse0x1d63a20();
   input += synapse0x1d63a60();
   input += synapse0x1d63aa0();
   input += synapse0x1d63ae0();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d63150() {
   double input = input0x1d63150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d63b20() {
   double input = 4.13532;
   input += synapse0x1d63e60();
   input += synapse0x1d63ea0();
   input += synapse0x1d63ee0();
   input += synapse0x1d63f20();
   input += synapse0x1d63f60();
   input += synapse0x1d63fa0();
   input += synapse0x1d63fe0();
   input += synapse0x1d64020();
   input += synapse0x1d64060();
   input += synapse0x1d640a0();
   input += synapse0x1d640e0();
   input += synapse0x1d64120();
   input += synapse0x1d64160();
   input += synapse0x1d641a0();
   input += synapse0x1d641e0();
   input += synapse0x1d64220();
   input += synapse0x1d63cb0();
   input += synapse0x1d63cf0();
   input += synapse0x1d64370();
   input += synapse0x1d643b0();
   input += synapse0x1d643f0();
   input += synapse0x1d64430();
   input += synapse0x1d64470();
   input += synapse0x1d644b0();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d63b20() {
   double input = input0x1d63b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d644f0() {
   double input = 0.342276;
   input += synapse0x1d5df90();
   input += synapse0x1d5dfd0();
   input += synapse0x1d5e010();
   input += synapse0x1d5e050();
   input += synapse0x1d64a40();
   input += synapse0x1d64a80();
   input += synapse0x1d64ac0();
   input += synapse0x1d64b00();
   input += synapse0x1d64b40();
   input += synapse0x1d64b80();
   input += synapse0x1d64bc0();
   input += synapse0x1d64c00();
   input += synapse0x1d64c40();
   input += synapse0x1d64c80();
   input += synapse0x1d64cc0();
   input += synapse0x1d64d00();
   input += synapse0x1d64680();
   input += synapse0x1d646c0();
   input += synapse0x1d64e50();
   input += synapse0x1d64e90();
   input += synapse0x1d64ed0();
   input += synapse0x1d64f10();
   input += synapse0x1d64f50();
   input += synapse0x1d64f90();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d644f0() {
   double input = input0x1d644f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d64fd0() {
   double input = 0.0198347;
   input += synapse0x1d65310();
   input += synapse0x1d65350();
   input += synapse0x1d65390();
   input += synapse0x1d653d0();
   input += synapse0x1d65410();
   input += synapse0x1d65450();
   input += synapse0x1d65490();
   input += synapse0x1d654d0();
   input += synapse0x1d65510();
   input += synapse0x1d65550();
   input += synapse0x1d65590();
   input += synapse0x1d655d0();
   input += synapse0x1d65610();
   input += synapse0x1d65650();
   input += synapse0x1d65690();
   input += synapse0x1d656d0();
   input += synapse0x1d65160();
   input += synapse0x1d651a0();
   input += synapse0x1d65820();
   input += synapse0x1d65860();
   input += synapse0x1d658a0();
   input += synapse0x1d658e0();
   input += synapse0x1d65920();
   input += synapse0x1d65960();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d64fd0() {
   double input = input0x1d64fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d659a0() {
   double input = 0.584639;
   input += synapse0x1d65ce0();
   input += synapse0x1d65d20();
   input += synapse0x1d65d60();
   input += synapse0x1d65da0();
   input += synapse0x1d65de0();
   input += synapse0x1d65e20();
   input += synapse0x1d65e60();
   input += synapse0x1d65ea0();
   input += synapse0x1d65ee0();
   input += synapse0x1d65f20();
   input += synapse0x1d65f60();
   input += synapse0x1d65fa0();
   input += synapse0x1d65fe0();
   input += synapse0x1d66020();
   input += synapse0x1d66060();
   input += synapse0x1d660a0();
   input += synapse0x1d65b30();
   input += synapse0x1d65b70();
   input += synapse0x1d62900();
   input += synapse0x1d62940();
   input += synapse0x1d62980();
   input += synapse0x1d629c0();
   input += synapse0x1d62a00();
   input += synapse0x1d62a40();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d659a0() {
   double input = input0x1d659a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d62a80() {
   double input = 0.253029;
   input += synapse0x1d62dc0();
   input += synapse0x1d62e00();
   input += synapse0x1d62e40();
   input += synapse0x1d62e80();
   input += synapse0x1d62ec0();
   input += synapse0x1d62f00();
   input += synapse0x1d62f40();
   input += synapse0x1d62f80();
   input += synapse0x1d62fc0();
   input += synapse0x1d63000();
   input += synapse0x1d63040();
   input += synapse0x1d63080();
   input += synapse0x1d630c0();
   input += synapse0x1d67200();
   input += synapse0x1d67240();
   input += synapse0x1d67280();
   input += synapse0x1d62c10();
   input += synapse0x1d62c50();
   input += synapse0x1d673d0();
   input += synapse0x1d67410();
   input += synapse0x1d67450();
   input += synapse0x1d67490();
   input += synapse0x1d674d0();
   input += synapse0x1d67510();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d62a80() {
   double input = input0x1d62a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d67550() {
   double input = -0.394922;
   input += synapse0x1d67890();
   input += synapse0x1d678d0();
   input += synapse0x1d67910();
   input += synapse0x1d67950();
   input += synapse0x1d67990();
   input += synapse0x1d679d0();
   input += synapse0x1d67a10();
   input += synapse0x1d67a50();
   input += synapse0x1d67a90();
   input += synapse0x1d67ad0();
   input += synapse0x1d67b10();
   input += synapse0x1d67b50();
   input += synapse0x1d67b90();
   input += synapse0x1d67bd0();
   input += synapse0x1d67c10();
   input += synapse0x1d67c50();
   input += synapse0x1d676e0();
   input += synapse0x1d67720();
   input += synapse0x1d67da0();
   input += synapse0x1d67de0();
   input += synapse0x1d67e20();
   input += synapse0x1d67e60();
   input += synapse0x1d67ea0();
   input += synapse0x1d67ee0();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d67550() {
   double input = input0x1d67550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d67f20() {
   double input = -1.39114;
   input += synapse0x1d68260();
   input += synapse0x1d682a0();
   input += synapse0x1d682e0();
   input += synapse0x1d68320();
   input += synapse0x1d68360();
   input += synapse0x1d683a0();
   input += synapse0x1d683e0();
   input += synapse0x1d68420();
   input += synapse0x1d68460();
   input += synapse0x1d684a0();
   input += synapse0x1d684e0();
   input += synapse0x1d68520();
   input += synapse0x1d68560();
   input += synapse0x1d685a0();
   input += synapse0x1d685e0();
   input += synapse0x1d68620();
   input += synapse0x1d680b0();
   input += synapse0x1d680f0();
   input += synapse0x1d68770();
   input += synapse0x1d687b0();
   input += synapse0x1d687f0();
   input += synapse0x1d68830();
   input += synapse0x1d68870();
   input += synapse0x1d688b0();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d67f20() {
   double input = input0x1d67f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d688f0() {
   double input = 0.18062;
   input += synapse0x1d68c30();
   input += synapse0x1d68c70();
   input += synapse0x1d68cb0();
   input += synapse0x1d68cf0();
   input += synapse0x1d68d30();
   input += synapse0x1d68d70();
   input += synapse0x1d68db0();
   input += synapse0x1d68df0();
   input += synapse0x1d68e30();
   input += synapse0x1d68e70();
   input += synapse0x1d68eb0();
   input += synapse0x1d68ef0();
   input += synapse0x1d68f30();
   input += synapse0x1d68f70();
   input += synapse0x1d68fb0();
   input += synapse0x1d68ff0();
   input += synapse0x1d68a80();
   input += synapse0x1d68ac0();
   input += synapse0x1d69140();
   input += synapse0x1d69180();
   input += synapse0x1d691c0();
   input += synapse0x1d69200();
   input += synapse0x1d69240();
   input += synapse0x1d69280();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d688f0() {
   double input = input0x1d688f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d692c0() {
   double input = 3.1322;
   input += synapse0x1d69600();
   input += synapse0x1d5a960();
   input += synapse0x1d5a9a0();
   input += synapse0x1d5aca0();
   input += synapse0x1d5ace0();
   input += synapse0x1d5afe0();
   input += synapse0x1d5b020();
   input += synapse0x1d5b320();
   input += synapse0x1d5b360();
   input += synapse0x1d5b660();
   input += synapse0x1d5b6a0();
   input += synapse0x1d5b9a0();
   input += synapse0x1d5b9e0();
   input += synapse0x1d5bce0();
   input += synapse0x1d5bd20();
   input += synapse0x1d5c020();
   input += synapse0x1d5c060();
   input += synapse0x1d5c360();
   input += synapse0x1d5c3a0();
   input += synapse0x1d5c6a0();
   input += synapse0x1d5c6e0();
   input += synapse0x1d5c9e0();
   input += synapse0x1d5ca20();
   input += synapse0x1d5cd20();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d692c0() {
   double input = input0x1d692c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d6b0d0() {
   double input = 0.633145;
   input += synapse0x1d5cd60();
   input += synapse0x1d5da20();
   input += synapse0x1d5da60();
   input += synapse0x1d69450();
   input += synapse0x1d69490();
   input += synapse0x1d5dd60();
   input += synapse0x1d5dda0();
   input += synapse0x1b0bcf0();
   input += synapse0x1b0bd30();
   input += synapse0x1d5e4e0();
   input += synapse0x1d5e520();
   input += synapse0x1d5e820();
   input += synapse0x1d5e860();
   input += synapse0x1d5eb60();
   input += synapse0x1d5eba0();
   input += synapse0x1d5eea0();
   input += synapse0x1d5eee0();
   input += synapse0x1d5f1e0();
   input += synapse0x1d5f220();
   input += synapse0x1d5f520();
   input += synapse0x1d5f560();
   input += synapse0x1d5d060();
   input += synapse0x1d5d0a0();
   input += synapse0x1d6b370();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d6b0d0() {
   double input = input0x1d6b0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d6b3b0() {
   double input = -0.747662;
   input += synapse0x1d6b6f0();
   input += synapse0x1d6b730();
   input += synapse0x1d6b770();
   input += synapse0x1d6b7b0();
   input += synapse0x1d6b7f0();
   input += synapse0x1d6b830();
   input += synapse0x1d6b870();
   input += synapse0x1d6b8b0();
   input += synapse0x1d6b8f0();
   input += synapse0x1d6b930();
   input += synapse0x1d6b970();
   input += synapse0x1d6b9b0();
   input += synapse0x1d6b9f0();
   input += synapse0x1d6ba30();
   input += synapse0x1d6ba70();
   input += synapse0x1d6bab0();
   input += synapse0x1d6b540();
   input += synapse0x1d6b580();
   input += synapse0x1d6bc00();
   input += synapse0x1d6bc40();
   input += synapse0x1d6bc80();
   input += synapse0x1d6bcc0();
   input += synapse0x1d6bd00();
   input += synapse0x1d6bd40();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d6b3b0() {
   double input = input0x1d6b3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d6bd80() {
   double input = 0.633132;
   input += synapse0x1d6c0c0();
   input += synapse0x1d6c100();
   input += synapse0x1d6c140();
   input += synapse0x1d6c180();
   input += synapse0x1d6c1c0();
   input += synapse0x1d6c200();
   input += synapse0x1d6c240();
   input += synapse0x1d6c280();
   input += synapse0x1d6c2c0();
   input += synapse0x1d6c300();
   input += synapse0x1d6c340();
   input += synapse0x1d6c380();
   input += synapse0x1d6c3c0();
   input += synapse0x1d6c400();
   input += synapse0x1d6c440();
   input += synapse0x1d6c480();
   input += synapse0x1d6bf10();
   input += synapse0x1d6bf50();
   input += synapse0x1d6c5d0();
   input += synapse0x1d6c610();
   input += synapse0x1d6c650();
   input += synapse0x1d6c690();
   input += synapse0x1d6c6d0();
   input += synapse0x1d6c710();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d6bd80() {
   double input = input0x1d6bd80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d6c750() {
   double input = 0.0127478;
   input += synapse0x1d6ca90();
   input += synapse0x1d6cad0();
   input += synapse0x1d6cb10();
   input += synapse0x1d6cb50();
   input += synapse0x1d6cb90();
   input += synapse0x1d6cbd0();
   input += synapse0x1d6cc10();
   input += synapse0x1d6cc50();
   input += synapse0x1d6cc90();
   input += synapse0x1d6ccd0();
   input += synapse0x1d6cd10();
   input += synapse0x1d6cd50();
   input += synapse0x1d6cd90();
   input += synapse0x1d6cdd0();
   input += synapse0x1d6ce10();
   input += synapse0x1d6ce50();
   input += synapse0x1d6c8e0();
   input += synapse0x1d6c920();
   input += synapse0x1d6cfa0();
   input += synapse0x1d6cfe0();
   input += synapse0x1d6d020();
   input += synapse0x1d6d060();
   input += synapse0x1d6d0a0();
   input += synapse0x1d6d0e0();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d6c750() {
   double input = input0x1d6c750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d6d120() {
   double input = -6.91539;
   input += synapse0x1d6d460();
   input += synapse0x1d6d4a0();
   input += synapse0x1d6d4e0();
   input += synapse0x1d6d520();
   input += synapse0x1d6d560();
   input += synapse0x1d6d5a0();
   input += synapse0x1d6d5e0();
   input += synapse0x1d6d620();
   input += synapse0x1d6d660();
   input += synapse0x1d6d6a0();
   input += synapse0x1d6d6e0();
   input += synapse0x1d6d720();
   input += synapse0x1d6d760();
   input += synapse0x1d6d7a0();
   input += synapse0x1d6d7e0();
   input += synapse0x1d6d820();
   input += synapse0x1d6d2b0();
   input += synapse0x1d6d2f0();
   input += synapse0x1d6d970();
   input += synapse0x1d6d9b0();
   input += synapse0x1d6d9f0();
   input += synapse0x1d6da30();
   input += synapse0x1d6da70();
   input += synapse0x1d6dab0();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d6d120() {
   double input = input0x1d6d120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d6daf0() {
   double input = -0.483232;
   input += synapse0x1d6de30();
   input += synapse0x1d6de70();
   input += synapse0x1d6deb0();
   input += synapse0x1d6def0();
   input += synapse0x1d6df30();
   input += synapse0x1d6df70();
   input += synapse0x1d6dfb0();
   input += synapse0x1d6dff0();
   input += synapse0x1d6e030();
   input += synapse0x1d661f0();
   input += synapse0x1d66230();
   input += synapse0x1d66270();
   input += synapse0x1d662b0();
   input += synapse0x1d662f0();
   input += synapse0x1d66330();
   input += synapse0x1d66370();
   input += synapse0x1d6dc80();
   input += synapse0x1d6dcc0();
   input += synapse0x1d664c0();
   input += synapse0x1d66500();
   input += synapse0x1d66540();
   input += synapse0x1d66580();
   input += synapse0x1d665c0();
   input += synapse0x1d66600();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d6daf0() {
   double input = input0x1d6daf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d66640() {
   double input = 0.685034;
   input += synapse0x1d66980();
   input += synapse0x1d669c0();
   input += synapse0x1d66a00();
   input += synapse0x1d66a40();
   input += synapse0x1d66a80();
   input += synapse0x1d66ac0();
   input += synapse0x1d66b00();
   input += synapse0x1d66b40();
   input += synapse0x1d66b80();
   input += synapse0x1d66bc0();
   input += synapse0x1d66c00();
   input += synapse0x1d66c40();
   input += synapse0x1d66c80();
   input += synapse0x1d66cc0();
   input += synapse0x1d66d00();
   input += synapse0x1d66d40();
   input += synapse0x1d667d0();
   input += synapse0x1d66810();
   input += synapse0x1d66e90();
   input += synapse0x1d66ed0();
   input += synapse0x1d66f10();
   input += synapse0x1d66f50();
   input += synapse0x1d66f90();
   input += synapse0x1d66fd0();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d66640() {
   double input = input0x1d66640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d67010() {
   double input = 0.899857;
   input += synapse0x1d671a0();
   input += synapse0x1d70230();
   input += synapse0x1d70270();
   input += synapse0x1d702b0();
   input += synapse0x1d702f0();
   input += synapse0x1d70330();
   input += synapse0x1d70370();
   input += synapse0x1d703b0();
   input += synapse0x1d703f0();
   input += synapse0x1d70430();
   input += synapse0x1d70470();
   input += synapse0x1d704b0();
   input += synapse0x1d704f0();
   input += synapse0x1d70530();
   input += synapse0x1d70570();
   input += synapse0x1d705b0();
   input += synapse0x1d70080();
   input += synapse0x1d700c0();
   input += synapse0x1d70700();
   input += synapse0x1d70740();
   input += synapse0x1d70780();
   input += synapse0x1d707c0();
   input += synapse0x1d70800();
   input += synapse0x1d70840();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d67010() {
   double input = input0x1d67010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d70880() {
   double input = 0.904593;
   input += synapse0x1d70bc0();
   input += synapse0x1d70c00();
   input += synapse0x1d70c40();
   input += synapse0x1d70c80();
   input += synapse0x1d70cc0();
   input += synapse0x1d70d00();
   input += synapse0x1d70d40();
   input += synapse0x1d70d80();
   input += synapse0x1d70dc0();
   input += synapse0x1d70e00();
   input += synapse0x1d70e40();
   input += synapse0x1d70e80();
   input += synapse0x1d70ec0();
   input += synapse0x1d70f00();
   input += synapse0x1d70f40();
   input += synapse0x1d70f80();
   input += synapse0x1d70a10();
   input += synapse0x1d70a50();
   input += synapse0x1d710d0();
   input += synapse0x1d71110();
   input += synapse0x1d71150();
   input += synapse0x1d71190();
   input += synapse0x1d711d0();
   input += synapse0x1d71210();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d70880() {
   double input = input0x1d70880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d71250() {
   double input = -0.369361;
   input += synapse0x1d71590();
   input += synapse0x1d715d0();
   input += synapse0x1d71610();
   input += synapse0x1d71650();
   input += synapse0x1d71690();
   input += synapse0x1d716d0();
   input += synapse0x1d71710();
   input += synapse0x1d71750();
   input += synapse0x1d71790();
   input += synapse0x1d717d0();
   input += synapse0x1d71810();
   input += synapse0x1d71850();
   input += synapse0x1d71890();
   input += synapse0x1d718d0();
   input += synapse0x1d71910();
   input += synapse0x1d71950();
   input += synapse0x1d713e0();
   input += synapse0x1d71420();
   input += synapse0x1d71aa0();
   input += synapse0x1d71ae0();
   input += synapse0x1d71b20();
   input += synapse0x1d71b60();
   input += synapse0x1d71ba0();
   input += synapse0x1d71be0();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d71250() {
   double input = input0x1d71250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d71c20() {
   double input = 1.87713;
   input += synapse0x1d71f60();
   input += synapse0x1d71fa0();
   input += synapse0x1d71fe0();
   input += synapse0x1d72020();
   input += synapse0x1d72060();
   input += synapse0x1d720a0();
   input += synapse0x1d720e0();
   input += synapse0x1d72120();
   input += synapse0x1d72160();
   input += synapse0x1d721a0();
   input += synapse0x1d721e0();
   input += synapse0x1d72220();
   input += synapse0x1d72260();
   input += synapse0x1d722a0();
   input += synapse0x1d722e0();
   input += synapse0x1d72320();
   input += synapse0x1d71db0();
   input += synapse0x1d71df0();
   input += synapse0x1d72470();
   input += synapse0x1d724b0();
   input += synapse0x1d724f0();
   input += synapse0x1d72530();
   input += synapse0x1d72570();
   input += synapse0x1d725b0();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d71c20() {
   double input = input0x1d71c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d725f0() {
   double input = 2.33352;
   input += synapse0x1d72930();
   input += synapse0x1d72970();
   input += synapse0x1d729b0();
   input += synapse0x1d729f0();
   input += synapse0x1d72a30();
   input += synapse0x1d72a70();
   input += synapse0x1d72ab0();
   input += synapse0x1d72af0();
   input += synapse0x1d72b30();
   input += synapse0x1d72b70();
   input += synapse0x1d72bb0();
   input += synapse0x1d72bf0();
   input += synapse0x1d72c30();
   input += synapse0x1d72c70();
   input += synapse0x1d72cb0();
   input += synapse0x1d72cf0();
   input += synapse0x1d72780();
   input += synapse0x1d727c0();
   input += synapse0x1d72e40();
   input += synapse0x1d72e80();
   input += synapse0x1d72ec0();
   input += synapse0x1d72f00();
   input += synapse0x1d72f40();
   input += synapse0x1d72f80();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d725f0() {
   double input = input0x1d725f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d72fc0() {
   double input = 0.351451;
   input += synapse0x1d73300();
   input += synapse0x1d73340();
   input += synapse0x1d73380();
   input += synapse0x1d733c0();
   input += synapse0x1d73400();
   input += synapse0x1d73440();
   input += synapse0x1d73480();
   input += synapse0x1d734c0();
   input += synapse0x1d73500();
   input += synapse0x1d73540();
   input += synapse0x1d73580();
   input += synapse0x1d735c0();
   input += synapse0x1d73600();
   input += synapse0x1d73640();
   input += synapse0x1d73680();
   input += synapse0x1d736c0();
   input += synapse0x1d73150();
   input += synapse0x1d73190();
   input += synapse0x1d73810();
   input += synapse0x1d73850();
   input += synapse0x1d73890();
   input += synapse0x1d738d0();
   input += synapse0x1d73910();
   input += synapse0x1d73950();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d72fc0() {
   double input = input0x1d72fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d73990() {
   double input = 5.06717;
   input += synapse0x1d73cd0();
   input += synapse0x1d73d10();
   input += synapse0x1d73d50();
   input += synapse0x1d73d90();
   input += synapse0x1d73dd0();
   input += synapse0x1d73e10();
   input += synapse0x1d73e50();
   input += synapse0x1d73e90();
   input += synapse0x1d73ed0();
   input += synapse0x1d73f10();
   input += synapse0x1d73f50();
   input += synapse0x1d73f90();
   input += synapse0x1d73fd0();
   input += synapse0x1d74010();
   input += synapse0x1d74050();
   input += synapse0x1d74090();
   input += synapse0x1d73b20();
   input += synapse0x1d73b60();
   input += synapse0x1d741e0();
   input += synapse0x1d74220();
   input += synapse0x1d74260();
   input += synapse0x1d742a0();
   input += synapse0x1d742e0();
   input += synapse0x1d74320();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d73990() {
   double input = input0x1d73990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d74360() {
   double input = -0.139193;
   input += synapse0x1d746a0();
   input += synapse0x1d746e0();
   input += synapse0x1d74720();
   input += synapse0x1d74760();
   input += synapse0x1d747a0();
   input += synapse0x1d747e0();
   input += synapse0x1d74820();
   input += synapse0x1d74860();
   input += synapse0x1d748a0();
   input += synapse0x1d748e0();
   input += synapse0x1d74920();
   input += synapse0x1d74960();
   input += synapse0x1d749a0();
   input += synapse0x1d749e0();
   input += synapse0x1d74a20();
   input += synapse0x1d74a60();
   input += synapse0x1d744f0();
   input += synapse0x1d74530();
   input += synapse0x1d74bb0();
   input += synapse0x1d74bf0();
   input += synapse0x1d74c30();
   input += synapse0x1d74c70();
   input += synapse0x1d74cb0();
   input += synapse0x1d74cf0();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d74360() {
   double input = input0x1d74360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d74d30() {
   double input = 5.12232;
   input += synapse0x1d75070();
   input += synapse0x1d69640();
   input += synapse0x1d69680();
   input += synapse0x1d696c0();
   input += synapse0x1d69910();
   input += synapse0x1d69950();
   input += synapse0x1d69990();
   input += synapse0x1d69be0();
   input += synapse0x1d69c20();
   input += synapse0x1d69e70();
   input += synapse0x1d69eb0();
   input += synapse0x1d69ef0();
   input += synapse0x1d6a140();
   input += synapse0x1d6a180();
   input += synapse0x1d6a3d0();
   input += synapse0x1d6a410();
   input += synapse0x1d74ec0();
   input += synapse0x1d74f00();
   input += synapse0x1d6a560();
   input += synapse0x1d6aa70();
   input += synapse0x1d6aab0();
   input += synapse0x1d6aaf0();
   input += synapse0x1d6ad40();
   input += synapse0x1d6ad80();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d74d30() {
   double input = input0x1d74d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d6adc0() {
   double input = 0.406818;
   input += synapse0x1d6a630();
   input += synapse0x1d6a670();
   input += synapse0x1d6a6b0();
   input += synapse0x1d6a6f0();
   input += synapse0x1d6b070();
   input += synapse0x1d773c0();
   input += synapse0x1d77400();
   input += synapse0x1d77440();
   input += synapse0x1d77480();
   input += synapse0x1d774c0();
   input += synapse0x1d77500();
   input += synapse0x1d77540();
   input += synapse0x1d77580();
   input += synapse0x1d775c0();
   input += synapse0x1d77600();
   input += synapse0x1d77640();
   input += synapse0x1d6af50();
   input += synapse0x1d6af90();
   input += synapse0x1d77790();
   input += synapse0x1d777d0();
   input += synapse0x1d77810();
   input += synapse0x1d77850();
   input += synapse0x1d77890();
   input += synapse0x1d778d0();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d6adc0() {
   double input = input0x1d6adc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d77910() {
   double input = 0.105008;
   input += synapse0x1d77c50();
   input += synapse0x1d77c90();
   input += synapse0x1d77cd0();
   input += synapse0x1d77d10();
   input += synapse0x1d77d50();
   input += synapse0x1d77d90();
   input += synapse0x1d77dd0();
   input += synapse0x1d77e10();
   input += synapse0x1d77e50();
   input += synapse0x1d77e90();
   input += synapse0x1d77ed0();
   input += synapse0x1d77f10();
   input += synapse0x1d77f50();
   input += synapse0x1d77f90();
   input += synapse0x1d77fd0();
   input += synapse0x1d78010();
   input += synapse0x1d77aa0();
   input += synapse0x1d77ae0();
   input += synapse0x1d78160();
   input += synapse0x1d781a0();
   input += synapse0x1d781e0();
   input += synapse0x1d78220();
   input += synapse0x1d78260();
   input += synapse0x1d782a0();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d77910() {
   double input = input0x1d77910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d782e0() {
   double input = 0.86682;
   input += synapse0x1d78620();
   input += synapse0x1d78660();
   input += synapse0x1d786a0();
   input += synapse0x1d786e0();
   input += synapse0x1d78720();
   input += synapse0x1d78760();
   input += synapse0x1d787a0();
   input += synapse0x1d787e0();
   input += synapse0x1d78820();
   input += synapse0x1d78860();
   input += synapse0x1d788a0();
   input += synapse0x1d788e0();
   input += synapse0x1d78920();
   input += synapse0x1d78960();
   input += synapse0x1d789a0();
   input += synapse0x1d789e0();
   input += synapse0x1d78470();
   input += synapse0x1d784b0();
   input += synapse0x1d78b30();
   input += synapse0x1d78b70();
   input += synapse0x1d78bb0();
   input += synapse0x1d78bf0();
   input += synapse0x1d78c30();
   input += synapse0x1d78c70();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d782e0() {
   double input = input0x1d782e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d78cb0() {
   double input = -4.75036;
   input += synapse0x1d78ff0();
   input += synapse0x1d79030();
   input += synapse0x1d79070();
   input += synapse0x1d790b0();
   input += synapse0x1d790f0();
   input += synapse0x1d79130();
   input += synapse0x1d79170();
   input += synapse0x1d791b0();
   input += synapse0x1d791f0();
   input += synapse0x1d79230();
   input += synapse0x1d79270();
   input += synapse0x1d792b0();
   input += synapse0x1d792f0();
   input += synapse0x1d79330();
   input += synapse0x1d79370();
   input += synapse0x1d793b0();
   input += synapse0x1d78e40();
   input += synapse0x1d78e80();
   input += synapse0x1d79500();
   input += synapse0x1d79540();
   input += synapse0x1d79580();
   input += synapse0x1d795c0();
   input += synapse0x1d79600();
   input += synapse0x1d79640();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d78cb0() {
   double input = input0x1d78cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d79680() {
   double input = 1.5186;
   input += synapse0x1d799c0();
   input += synapse0x1d79a00();
   input += synapse0x1d79a40();
   input += synapse0x1d79a80();
   input += synapse0x1d79ac0();
   input += synapse0x1d79b00();
   input += synapse0x1d79b40();
   input += synapse0x1d79b80();
   input += synapse0x1d79bc0();
   input += synapse0x1d79c00();
   input += synapse0x1d79c40();
   input += synapse0x1d79c80();
   input += synapse0x1d79cc0();
   input += synapse0x1d79d00();
   input += synapse0x1d79d40();
   input += synapse0x1d79d80();
   input += synapse0x1d79810();
   input += synapse0x1d79850();
   input += synapse0x1d79ed0();
   input += synapse0x1d79f10();
   input += synapse0x1d79f50();
   input += synapse0x1d79f90();
   input += synapse0x1d79fd0();
   input += synapse0x1d7a010();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d79680() {
   double input = input0x1d79680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d7a050() {
   double input = -0.580918;
   input += synapse0x1d7a390();
   input += synapse0x1d7a3d0();
   input += synapse0x1d7a410();
   input += synapse0x1d7a450();
   input += synapse0x1d7a490();
   input += synapse0x1d7a4d0();
   input += synapse0x1d7a510();
   input += synapse0x1d7a550();
   input += synapse0x1d7a590();
   input += synapse0x1d7a5d0();
   input += synapse0x1d7a610();
   input += synapse0x1d7a650();
   input += synapse0x1d7a690();
   input += synapse0x1d7a6d0();
   input += synapse0x1d7a710();
   input += synapse0x1d7a750();
   input += synapse0x1d7a1e0();
   input += synapse0x1d7a220();
   input += synapse0x1d7a8a0();
   input += synapse0x1d7a8e0();
   input += synapse0x1d7a920();
   input += synapse0x1d7a960();
   input += synapse0x1d7a9a0();
   input += synapse0x1d7a9e0();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d7a050() {
   double input = input0x1d7a050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d7aa20() {
   double input = -0.259241;
   input += synapse0x1d7ad60();
   input += synapse0x1d7ada0();
   input += synapse0x1d7ade0();
   input += synapse0x1d7ae20();
   input += synapse0x1d7ae60();
   input += synapse0x1d7aea0();
   input += synapse0x1d7aee0();
   input += synapse0x1d7af20();
   input += synapse0x1d7af60();
   input += synapse0x1d7afa0();
   input += synapse0x1d7afe0();
   input += synapse0x1d7b020();
   input += synapse0x1d7b060();
   input += synapse0x1d7b0a0();
   input += synapse0x1d7b0e0();
   input += synapse0x1d7b120();
   input += synapse0x1d7abb0();
   input += synapse0x1d7abf0();
   input += synapse0x1d7b270();
   input += synapse0x1d7b2b0();
   input += synapse0x1d7b2f0();
   input += synapse0x1d7b330();
   input += synapse0x1d7b370();
   input += synapse0x1d7b3b0();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d7aa20() {
   double input = input0x1d7aa20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d7b3f0() {
   double input = -0.24228;
   input += synapse0x1d7b730();
   input += synapse0x1d7b770();
   input += synapse0x1d7b7b0();
   input += synapse0x1d7b7f0();
   input += synapse0x1d7b830();
   input += synapse0x1d7b870();
   input += synapse0x1d7b8b0();
   input += synapse0x1d7b8f0();
   input += synapse0x1d7b930();
   input += synapse0x1d7b970();
   input += synapse0x1d7b9b0();
   input += synapse0x1d7b9f0();
   input += synapse0x1d7ba30();
   input += synapse0x1d7ba70();
   input += synapse0x1d7bab0();
   input += synapse0x1d7baf0();
   input += synapse0x1d7b580();
   input += synapse0x1d7b5c0();
   input += synapse0x1d7bc40();
   input += synapse0x1d7bc80();
   input += synapse0x1d7bcc0();
   input += synapse0x1d7bd00();
   input += synapse0x1d7bd40();
   input += synapse0x1d7bd80();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d7b3f0() {
   double input = input0x1d7b3f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d7bdc0() {
   double input = -0.706922;
   input += synapse0x1d64830();
   input += synapse0x1d64870();
   input += synapse0x1d648b0();
   input += synapse0x1d648f0();
   input += synapse0x1d64930();
   input += synapse0x1d64970();
   input += synapse0x1d649b0();
   input += synapse0x1d649f0();
   input += synapse0x1d7c510();
   input += synapse0x1d7c550();
   input += synapse0x1d7c590();
   input += synapse0x1d7c5d0();
   input += synapse0x1d7c610();
   input += synapse0x1d7c650();
   input += synapse0x1d7c690();
   input += synapse0x1d7c6d0();
   input += synapse0x1d7bf50();
   input += synapse0x1d7bf90();
   input += synapse0x1d7c820();
   input += synapse0x1d7c860();
   input += synapse0x1d7c8a0();
   input += synapse0x1d7c8e0();
   input += synapse0x1d7c920();
   input += synapse0x1d7c960();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d7bdc0() {
   double input = input0x1d7bdc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d7c9a0() {
   double input = -0.54571;
   input += synapse0x1d7cce0();
   input += synapse0x1d7cd20();
   input += synapse0x1d7cd60();
   input += synapse0x1d7cda0();
   input += synapse0x1d7cde0();
   input += synapse0x1d7ce20();
   input += synapse0x1d7ce60();
   input += synapse0x1d7cea0();
   input += synapse0x1d7cee0();
   input += synapse0x1d7cf20();
   input += synapse0x1d7cf60();
   input += synapse0x1d7cfa0();
   input += synapse0x1d7cfe0();
   input += synapse0x1d7d020();
   input += synapse0x1d7d060();
   input += synapse0x1d7d0a0();
   input += synapse0x1d7cb30();
   input += synapse0x1d7cb70();
   input += synapse0x1d7d1f0();
   input += synapse0x1d7d230();
   input += synapse0x1d7d270();
   input += synapse0x1d7d2b0();
   input += synapse0x1d7d2f0();
   input += synapse0x1d7d330();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d7c9a0() {
   double input = input0x1d7c9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d7d370() {
   double input = 0.197891;
   input += synapse0x1d7d6b0();
   input += synapse0x1d7d6f0();
   input += synapse0x1d7d730();
   input += synapse0x1d7d770();
   input += synapse0x1d7d7b0();
   input += synapse0x1d7d7f0();
   input += synapse0x1d7d830();
   input += synapse0x1d7d870();
   input += synapse0x1d7d8b0();
   input += synapse0x1d7d8f0();
   input += synapse0x1d7d930();
   input += synapse0x1d7d970();
   input += synapse0x1d7d9b0();
   input += synapse0x1d7d9f0();
   input += synapse0x1d7da30();
   input += synapse0x1d7da70();
   input += synapse0x1d7d500();
   input += synapse0x1d7d540();
   input += synapse0x1d6e070();
   input += synapse0x1d6e0b0();
   input += synapse0x1d6e0f0();
   input += synapse0x1d6e130();
   input += synapse0x1d6e170();
   input += synapse0x1d6e1b0();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d7d370() {
   double input = input0x1d7d370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d6e1f0() {
   double input = 3.8385;
   input += synapse0x1d6e530();
   input += synapse0x1d6e570();
   input += synapse0x1d6e5b0();
   input += synapse0x1d6e5f0();
   input += synapse0x1d6e630();
   input += synapse0x1d6e670();
   input += synapse0x1d6e6b0();
   input += synapse0x1d6e6f0();
   input += synapse0x1d6e730();
   input += synapse0x1d6e770();
   input += synapse0x1d6e7b0();
   input += synapse0x1d6e7f0();
   input += synapse0x1d6e830();
   input += synapse0x1d6e870();
   input += synapse0x1d6e8b0();
   input += synapse0x1d6e8f0();
   input += synapse0x1d6e380();
   input += synapse0x1d6e3c0();
   input += synapse0x1d6ea40();
   input += synapse0x1d6ea80();
   input += synapse0x1d6eac0();
   input += synapse0x1d6eb00();
   input += synapse0x1d6eb40();
   input += synapse0x1d6eb80();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d6e1f0() {
   double input = input0x1d6e1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d6ebc0() {
   double input = 2.78427;
   input += synapse0x1d6ef00();
   input += synapse0x1d6ef40();
   input += synapse0x1d6ef80();
   input += synapse0x1d6efc0();
   input += synapse0x1d6f000();
   input += synapse0x1d6f040();
   input += synapse0x1d6f080();
   input += synapse0x1d6f0c0();
   input += synapse0x1d6f100();
   input += synapse0x1d6f140();
   input += synapse0x1d6f180();
   input += synapse0x1d6f1c0();
   input += synapse0x1d6f200();
   input += synapse0x1d6f240();
   input += synapse0x1d6f280();
   input += synapse0x1d6f2c0();
   input += synapse0x1d6ed50();
   input += synapse0x1d6ed90();
   input += synapse0x1d6f410();
   input += synapse0x1d6f450();
   input += synapse0x1d6f490();
   input += synapse0x1d6f4d0();
   input += synapse0x1d6f510();
   input += synapse0x1d6f550();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d6ebc0() {
   double input = input0x1d6ebc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d6f590() {
   double input = 2.70319;
   input += synapse0x1d6f8d0();
   input += synapse0x1d6f910();
   input += synapse0x1d6f950();
   input += synapse0x1d6f990();
   input += synapse0x1d6f9d0();
   input += synapse0x1d6fa10();
   input += synapse0x1d6fa50();
   input += synapse0x1d6fa90();
   input += synapse0x1d6fad0();
   input += synapse0x1d6fb10();
   input += synapse0x1d6fb50();
   input += synapse0x1d6fb90();
   input += synapse0x1d6fbd0();
   input += synapse0x1d6fc10();
   input += synapse0x1d6fc50();
   input += synapse0x1d6fc90();
   input += synapse0x1d6f720();
   input += synapse0x1d6f760();
   input += synapse0x1d6fde0();
   input += synapse0x1d6fe20();
   input += synapse0x1d6fe60();
   input += synapse0x1d6fea0();
   input += synapse0x1d6fee0();
   input += synapse0x1d6ff20();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d6f590() {
   double input = input0x1d6f590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d81bd0() {
   double input = -0.0254818;
   input += synapse0x1d81df0();
   input += synapse0x1d81e30();
   input += synapse0x1d81e70();
   input += synapse0x1d81eb0();
   input += synapse0x1d81ef0();
   input += synapse0x1d81f30();
   input += synapse0x1d81f70();
   input += synapse0x1d81fb0();
   input += synapse0x1d81ff0();
   input += synapse0x1d82030();
   input += synapse0x1d82070();
   input += synapse0x1d820b0();
   input += synapse0x1d820f0();
   input += synapse0x1d82130();
   input += synapse0x1d82170();
   input += synapse0x1d821b0();
   input += synapse0x1d6ff60();
   input += synapse0x1d6ffa0();
   input += synapse0x1d82300();
   input += synapse0x1d82340();
   input += synapse0x1d82380();
   input += synapse0x1d823c0();
   input += synapse0x1d82400();
   input += synapse0x1d82440();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d81bd0() {
   double input = input0x1d81bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d82480() {
   double input = 0.69513;
   input += synapse0x1d827c0();
   input += synapse0x1d82800();
   input += synapse0x1d82840();
   input += synapse0x1d82880();
   input += synapse0x1d828c0();
   input += synapse0x1d82900();
   input += synapse0x1d82940();
   input += synapse0x1d82980();
   input += synapse0x1d829c0();
   input += synapse0x1d82a00();
   input += synapse0x1d82a40();
   input += synapse0x1d82a80();
   input += synapse0x1d82ac0();
   input += synapse0x1d82b00();
   input += synapse0x1d82b40();
   input += synapse0x1d82b80();
   input += synapse0x1d82610();
   input += synapse0x1d82650();
   input += synapse0x1d82cd0();
   input += synapse0x1d82d10();
   input += synapse0x1d82d50();
   input += synapse0x1d82d90();
   input += synapse0x1d82dd0();
   input += synapse0x1d82e10();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d82480() {
   double input = input0x1d82480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d82e50() {
   double input = 0.846139;
   input += synapse0x1d83190();
   input += synapse0x1d831d0();
   input += synapse0x1d83210();
   input += synapse0x1d83250();
   input += synapse0x1d83290();
   input += synapse0x1d832d0();
   input += synapse0x1d83310();
   input += synapse0x1d83350();
   input += synapse0x1d83390();
   input += synapse0x1d833d0();
   input += synapse0x1d83410();
   input += synapse0x1d83450();
   input += synapse0x1d83490();
   input += synapse0x1d834d0();
   input += synapse0x1d83510();
   input += synapse0x1d83550();
   input += synapse0x1d82fe0();
   input += synapse0x1d83020();
   input += synapse0x1d836a0();
   input += synapse0x1d836e0();
   input += synapse0x1d83720();
   input += synapse0x1d83760();
   input += synapse0x1d837a0();
   input += synapse0x1d837e0();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d82e50() {
   double input = input0x1d82e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d83820() {
   double input = -0.00650581;
   input += synapse0x1d83b60();
   input += synapse0x1d83ba0();
   input += synapse0x1d83be0();
   input += synapse0x1d83c20();
   input += synapse0x1d83c60();
   input += synapse0x1d83ca0();
   input += synapse0x1d83ce0();
   input += synapse0x1d83d20();
   input += synapse0x1d83d60();
   input += synapse0x1d83da0();
   input += synapse0x1d83de0();
   input += synapse0x1d83e20();
   input += synapse0x1d83e60();
   input += synapse0x1d83ea0();
   input += synapse0x1d83ee0();
   input += synapse0x1d83f20();
   input += synapse0x1d839b0();
   input += synapse0x1d839f0();
   input += synapse0x1d84070();
   input += synapse0x1d840b0();
   input += synapse0x1d840f0();
   input += synapse0x1d84130();
   input += synapse0x1d84170();
   input += synapse0x1d841b0();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d83820() {
   double input = input0x1d83820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d8aa20() {
   double input = -0.707034;
   input += synapse0x1d60750();
   input += synapse0x1d60790();
   input += synapse0x1d61c60();
   input += synapse0x1d61ca0();
   input += synapse0x1d62630();
   input += synapse0x1d62670();
   input += synapse0x1d63400();
   input += synapse0x1d63440();
   input += synapse0x1d63dd0();
   input += synapse0x1d63e10();
   input += synapse0x1d647a0();
   input += synapse0x1d647e0();
   input += synapse0x1d65280();
   input += synapse0x1d652c0();
   input += synapse0x1d65c50();
   input += synapse0x1d65c90();
   input += synapse0x1d62d30();
   input += synapse0x1d62d70();
   input += synapse0x1d67800();
   input += synapse0x1d67840();
   input += synapse0x1d681d0();
   input += synapse0x1d68210();
   input += synapse0x1d68ba0();
   input += synapse0x1d68be0();
   input += synapse0x1d69570();
   input += synapse0x1d695b0();
   input += synapse0x1d5d6e0();
   input += synapse0x1d5d720();
   input += synapse0x1d6b660();
   input += synapse0x1d6b6a0();
   input += synapse0x1d6c030();
   input += synapse0x1d6c070();
   input += synapse0x1d6ca00();
   input += synapse0x1d6ca40();
   input += synapse0x1d6d3d0();
   input += synapse0x1d6d410();
   input += synapse0x1d6dda0();
   input += synapse0x1d6dde0();
   input += synapse0x1d668f0();
   input += synapse0x1d66930();
   input += synapse0x1d701a0();
   input += synapse0x1d701e0();
   input += synapse0x1d70b30();
   input += synapse0x1d70b70();
   input += synapse0x1d71500();
   input += synapse0x1d71540();
   input += synapse0x1d71ed0();
   input += synapse0x1d71f10();
   input += synapse0x1d728a0();
   input += synapse0x1d728e0();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d8aa20() {
   double input = input0x1d8aa20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d8adc0() {
   double input = 0.893809;
   input += synapse0x1d74fe0();
   input += synapse0x1d75020();
   input += synapse0x1d6a5a0();
   input += synapse0x1d6a5e0();
   input += synapse0x1d77bc0();
   input += synapse0x1d77c00();
   input += synapse0x1d78590();
   input += synapse0x1d785d0();
   input += synapse0x1d78f60();
   input += synapse0x1d78fa0();
   input += synapse0x1d79930();
   input += synapse0x1d79970();
   input += synapse0x1d7a300();
   input += synapse0x1d7a340();
   input += synapse0x1d7acd0();
   input += synapse0x1d7ad10();
   input += synapse0x1d7b6a0();
   input += synapse0x1d7b6e0();
   input += synapse0x1d7c070();
   input += synapse0x1d7c0b0();
   input += synapse0x1d7cc50();
   input += synapse0x1d7cc90();
   input += synapse0x1d7d620();
   input += synapse0x1d7d660();
   input += synapse0x1d6e4a0();
   input += synapse0x1d6e4e0();
   input += synapse0x1d6ee70();
   input += synapse0x1d6eeb0();
   input += synapse0x1d6f840();
   input += synapse0x1d6f880();
   input += synapse0x1d81d60();
   input += synapse0x1d81da0();
   input += synapse0x1d82730();
   input += synapse0x1d82770();
   input += synapse0x1d83100();
   input += synapse0x1d83140();
   input += synapse0x1d83ad0();
   input += synapse0x1d83b10();
   input += synapse0x1d5f9c0();
   input += synapse0x1d5fa00();
   input += synapse0x1d73270();
   input += synapse0x1d732b0();
   input += synapse0x1d841f0();
   input += synapse0x1d84230();
   input += synapse0x1d84270();
   input += synapse0x1d842b0();
   input += synapse0x1d8b160();
   input += synapse0x1d8b1a0();
   input += synapse0x1d8b1e0();
   input += synapse0x1d8b220();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d8adc0() {
   double input = input0x1d8adc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d8b260() {
   double input = -1.61051;
   input += synapse0x1d8b5a0();
   input += synapse0x1d8b5e0();
   input += synapse0x1d8b620();
   input += synapse0x1d8b660();
   input += synapse0x1d8b6a0();
   input += synapse0x1d8b6e0();
   input += synapse0x1d8b720();
   input += synapse0x1d8b760();
   input += synapse0x1d8b7a0();
   input += synapse0x1d8b7e0();
   input += synapse0x1d8b820();
   input += synapse0x1d8b860();
   input += synapse0x1d8b8a0();
   input += synapse0x1d8b8e0();
   input += synapse0x1d8b920();
   input += synapse0x1d8b960();
   input += synapse0x1d8b3f0();
   input += synapse0x1d8b430();
   input += synapse0x1d8bab0();
   input += synapse0x1d8baf0();
   input += synapse0x1d8bb30();
   input += synapse0x1d8bb70();
   input += synapse0x1d8bbb0();
   input += synapse0x1d8bbf0();
   input += synapse0x1d8bc30();
   input += synapse0x1d8bc70();
   input += synapse0x1d8bcb0();
   input += synapse0x1d8bcf0();
   input += synapse0x1d8bd30();
   input += synapse0x1d8bd70();
   input += synapse0x1d8bdb0();
   input += synapse0x1d8bdf0();
   input += synapse0x1d8b9a0();
   input += synapse0x1d8b9e0();
   input += synapse0x1d8ba20();
   input += synapse0x1d8ba60();
   input += synapse0x1d8c040();
   input += synapse0x1d8c080();
   input += synapse0x1d8c0c0();
   input += synapse0x1d8c100();
   input += synapse0x1d8c140();
   input += synapse0x1d8c180();
   input += synapse0x1d8c1c0();
   input += synapse0x1d8c200();
   input += synapse0x1d8c240();
   input += synapse0x1d8c280();
   input += synapse0x1d8c2c0();
   input += synapse0x1d8c300();
   input += synapse0x1d8c340();
   input += synapse0x1d8c380();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d8b260() {
   double input = input0x1d8b260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d8c3c0() {
   double input = 1.53687;
   input += synapse0x1d8c700();
   input += synapse0x1d8c740();
   input += synapse0x1d8c780();
   input += synapse0x1d8c7c0();
   input += synapse0x1d8c800();
   input += synapse0x1d8c840();
   input += synapse0x1d8c880();
   input += synapse0x1d8c8c0();
   input += synapse0x1d8c900();
   input += synapse0x1d8c940();
   input += synapse0x1d8c980();
   input += synapse0x1d8c9c0();
   input += synapse0x1d8ca00();
   input += synapse0x1d8ca40();
   input += synapse0x1d8ca80();
   input += synapse0x1d8cac0();
   input += synapse0x1d8c550();
   input += synapse0x1d8c590();
   input += synapse0x1d8cc10();
   input += synapse0x1d8cc50();
   input += synapse0x1d8cc90();
   input += synapse0x1d8ccd0();
   input += synapse0x1d8cd10();
   input += synapse0x1d8cd50();
   input += synapse0x1d8cd90();
   input += synapse0x1d8cdd0();
   input += synapse0x1d8ce10();
   input += synapse0x1d8ce50();
   input += synapse0x1d8ce90();
   input += synapse0x1d8ced0();
   input += synapse0x1d8cf10();
   input += synapse0x1d8cf50();
   input += synapse0x1d8cb00();
   input += synapse0x1d8cb40();
   input += synapse0x1d8cb80();
   input += synapse0x1d8cbc0();
   input += synapse0x1d8d1a0();
   input += synapse0x1d8d1e0();
   input += synapse0x1d8d220();
   input += synapse0x1d8d260();
   input += synapse0x1d8d2a0();
   input += synapse0x1d8d2e0();
   input += synapse0x1d8d320();
   input += synapse0x1d8d360();
   input += synapse0x1d8d3a0();
   input += synapse0x1d8d3e0();
   input += synapse0x1d8d420();
   input += synapse0x1d8d460();
   input += synapse0x1d8d4a0();
   input += synapse0x1d8d4e0();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d8c3c0() {
   double input = input0x1d8c3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d8d520() {
   double input = 0.372563;
   input += synapse0x1d8d860();
   input += synapse0x1d8d8a0();
   input += synapse0x1d8d8e0();
   input += synapse0x1d8d920();
   input += synapse0x1d8d960();
   input += synapse0x1d8d9a0();
   input += synapse0x1d8d9e0();
   input += synapse0x1d8da20();
   input += synapse0x1d8da60();
   input += synapse0x1d8daa0();
   input += synapse0x1d8dae0();
   input += synapse0x1d8db20();
   input += synapse0x1d8db60();
   input += synapse0x1d8dba0();
   input += synapse0x1d8dbe0();
   input += synapse0x1d8dc20();
   input += synapse0x1d8d6b0();
   input += synapse0x1d8d6f0();
   input += synapse0x1d8dd70();
   input += synapse0x1d8ddb0();
   input += synapse0x1d8ddf0();
   input += synapse0x1d8de30();
   input += synapse0x1d8de70();
   input += synapse0x1d8deb0();
   input += synapse0x1d8def0();
   input += synapse0x1d8df30();
   input += synapse0x1d8df70();
   input += synapse0x1d8dfb0();
   input += synapse0x1d8dff0();
   input += synapse0x1d8e030();
   input += synapse0x1d8e070();
   input += synapse0x1d8e0b0();
   input += synapse0x1d8dc60();
   input += synapse0x1d8dca0();
   input += synapse0x1d8dce0();
   input += synapse0x1d8dd20();
   input += synapse0x1d8e300();
   input += synapse0x1d8e340();
   input += synapse0x1d8e380();
   input += synapse0x1d8e3c0();
   input += synapse0x1d8e400();
   input += synapse0x1d8e440();
   input += synapse0x1d8e480();
   input += synapse0x1d8e4c0();
   input += synapse0x1d8e500();
   input += synapse0x1d8e540();
   input += synapse0x1d8e580();
   input += synapse0x1d8e5c0();
   input += synapse0x1d8e600();
   input += synapse0x1d8e640();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d8d520() {
   double input = input0x1d8d520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_7::input0x1d8e680() {
   double input = -8.33372;
   input += synapse0x1d5f760();
   input += synapse0x1d8e8a0();
   input += synapse0x1d8e8e0();
   input += synapse0x1d8e920();
   input += synapse0x1d8e960();
   return input;
}

double NNfunction_NN_2_7::neuron0x1d8e680() {
   double input = input0x1d8e680();
   return (input * 1)+0;
}

double NNfunction_NN_2_7::synapse0x1b1a5b0() {
   return (neuron0x1d5a740()*0.0749227);
}

double NNfunction_NN_2_7::synapse0x1d5a600() {
   return (neuron0x1d5aa80()*-1.58549);
}

double NNfunction_NN_2_7::synapse0x1d5a640() {
   return (neuron0x1d5adc0()*0.396663);
}

double NNfunction_NN_2_7::synapse0x1d5fa50() {
   return (neuron0x1d5b100()*-0.227316);
}

double NNfunction_NN_2_7::synapse0x1d5fa90() {
   return (neuron0x1d5b440()*0.592374);
}

double NNfunction_NN_2_7::synapse0x1d5fad0() {
   return (neuron0x1d5b780()*-0.386375);
}

double NNfunction_NN_2_7::synapse0x1d5fb10() {
   return (neuron0x1d5bac0()*-0.517693);
}

double NNfunction_NN_2_7::synapse0x1d5fb50() {
   return (neuron0x1d5be00()*-0.1473);
}

double NNfunction_NN_2_7::synapse0x1d5fb90() {
   return (neuron0x1d5c140()*-0.111753);
}

double NNfunction_NN_2_7::synapse0x1d5fbd0() {
   return (neuron0x1d5c480()*-0.572926);
}

double NNfunction_NN_2_7::synapse0x1d5fc10() {
   return (neuron0x1d5c7c0()*-0.234934);
}

double NNfunction_NN_2_7::synapse0x1d5fc50() {
   return (neuron0x1d5cb00()*0.117714);
}

double NNfunction_NN_2_7::synapse0x1d5fc90() {
   return (neuron0x1d5ce40()*-0.0701343);
}

double NNfunction_NN_2_7::synapse0x1d5fcd0() {
   return (neuron0x1d5d180()*0.33133);
}

double NNfunction_NN_2_7::synapse0x1d5fd10() {
   return (neuron0x1d5d4c0()*-0.0135221);
}

double NNfunction_NN_2_7::synapse0x1d5fd50() {
   return (neuron0x1d5d800()*0.408029);
}

double NNfunction_NN_2_7::synapse0x1d5a570() {
   return (neuron0x1d5db40()*-0.188373);
}

double NNfunction_NN_2_7::synapse0x1d5a5b0() {
   return (neuron0x1d5e0a0()*-0.407815);
}

double NNfunction_NN_2_7::synapse0x1b0be10() {
   return (neuron0x1d5e2c0()*-0.252309);
}

double NNfunction_NN_2_7::synapse0x1b0be50() {
   return (neuron0x1d5e600()*0.349703);
}

double NNfunction_NN_2_7::synapse0x1d5ffb0() {
   return (neuron0x1d5e940()*0.0221541);
}

double NNfunction_NN_2_7::synapse0x1d5fff0() {
   return (neuron0x1d5ec80()*-0.22877);
}

double NNfunction_NN_2_7::synapse0x1d60030() {
   return (neuron0x1d5efc0()*0.215391);
}

double NNfunction_NN_2_7::synapse0x1d60070() {
   return (neuron0x1d5f300()*0.151767);
}

double NNfunction_NN_2_7::synapse0x1d603f0() {
   return (neuron0x1d5a740()*0.581326);
}

double NNfunction_NN_2_7::synapse0x1d60430() {
   return (neuron0x1d5aa80()*0.451143);
}

double NNfunction_NN_2_7::synapse0x1d60470() {
   return (neuron0x1d5adc0()*-1.68492);
}

double NNfunction_NN_2_7::synapse0x1d604b0() {
   return (neuron0x1d5b100()*0.268343);
}

double NNfunction_NN_2_7::synapse0x1d604f0() {
   return (neuron0x1d5b440()*0.351004);
}

double NNfunction_NN_2_7::synapse0x1d60530() {
   return (neuron0x1d5b780()*-0.491123);
}

double NNfunction_NN_2_7::synapse0x1d60570() {
   return (neuron0x1d5bac0()*-0.13679);
}

double NNfunction_NN_2_7::synapse0x1d605b0() {
   return (neuron0x1d5be00()*-0.0151274);
}

double NNfunction_NN_2_7::synapse0x1d605f0() {
   return (neuron0x1d5c140()*0.620798);
}

double NNfunction_NN_2_7::synapse0x1d5fea0() {
   return (neuron0x1d5c480()*0.309091);
}

double NNfunction_NN_2_7::synapse0x1d5fee0() {
   return (neuron0x1d5c7c0()*-0.489559);
}

double NNfunction_NN_2_7::synapse0x1d5ff20() {
   return (neuron0x1d5cb00()*0.220033);
}

double NNfunction_NN_2_7::synapse0x1d5ff60() {
   return (neuron0x1d5ce40()*-0.0565124);
}

double NNfunction_NN_2_7::synapse0x1d60840() {
   return (neuron0x1d5d180()*0.186546);
}

double NNfunction_NN_2_7::synapse0x1d60880() {
   return (neuron0x1d5d4c0()*-0.10984);
}

double NNfunction_NN_2_7::synapse0x1d608c0() {
   return (neuron0x1d5d800()*0.0109582);
}

double NNfunction_NN_2_7::synapse0x1d60240() {
   return (neuron0x1d5db40()*-0.052065);
}

double NNfunction_NN_2_7::synapse0x1d60280() {
   return (neuron0x1d5e0a0()*-0.512049);
}

double NNfunction_NN_2_7::synapse0x1d60a10() {
   return (neuron0x1d5e2c0()*-0.194404);
}

double NNfunction_NN_2_7::synapse0x1d60a50() {
   return (neuron0x1d5e600()*0.337067);
}

double NNfunction_NN_2_7::synapse0x1d60a90() {
   return (neuron0x1d5e940()*0.459506);
}

double NNfunction_NN_2_7::synapse0x1d60ad0() {
   return (neuron0x1d5ec80()*0.0876158);
}

double NNfunction_NN_2_7::synapse0x1d60b10() {
   return (neuron0x1d5efc0()*-0.242655);
}

double NNfunction_NN_2_7::synapse0x1d60b50() {
   return (neuron0x1d5f300()*1.34063);
}

double NNfunction_NN_2_7::synapse0x1d60ed0() {
   return (neuron0x1d5a740()*0.71552);
}

double NNfunction_NN_2_7::synapse0x1d60f10() {
   return (neuron0x1d5aa80()*-0.153218);
}

double NNfunction_NN_2_7::synapse0x1d60f50() {
   return (neuron0x1d5adc0()*-0.3365);
}

double NNfunction_NN_2_7::synapse0x1d60f90() {
   return (neuron0x1d5b100()*0.294912);
}

double NNfunction_NN_2_7::synapse0x1d60fd0() {
   return (neuron0x1d5b440()*0.418824);
}

double NNfunction_NN_2_7::synapse0x1d61010() {
   return (neuron0x1d5b780()*-0.541938);
}

double NNfunction_NN_2_7::synapse0x1d61050() {
   return (neuron0x1d5bac0()*-0.125348);
}

double NNfunction_NN_2_7::synapse0x1d61090() {
   return (neuron0x1d5be00()*-0.154367);
}

double NNfunction_NN_2_7::synapse0x1d610d0() {
   return (neuron0x1d5c140()*0.746848);
}

double NNfunction_NN_2_7::synapse0x1d61110() {
   return (neuron0x1d5c480()*0.329381);
}

double NNfunction_NN_2_7::synapse0x1d61150() {
   return (neuron0x1d5c7c0()*-0.488864);
}

double NNfunction_NN_2_7::synapse0x1d61190() {
   return (neuron0x1d5cb00()*-0.122751);
}

double NNfunction_NN_2_7::synapse0x1d611d0() {
   return (neuron0x1d5ce40()*-0.16794);
}

double NNfunction_NN_2_7::synapse0x1d61210() {
   return (neuron0x1d5d180()*0.171117);
}

double NNfunction_NN_2_7::synapse0x1d61250() {
   return (neuron0x1d5d4c0()*-0.253509);
}

double NNfunction_NN_2_7::synapse0x1d61290() {
   return (neuron0x1d5d800()*-0.00636228);
}

double NNfunction_NN_2_7::synapse0x1d60d20() {
   return (neuron0x1d5db40()*0.0301746);
}

double NNfunction_NN_2_7::synapse0x1d60d60() {
   return (neuron0x1d5e0a0()*-0.615701);
}

double NNfunction_NN_2_7::synapse0x1b19c80() {
   return (neuron0x1d5e2c0()*-0.164456);
}

double NNfunction_NN_2_7::synapse0x1b19cc0() {
   return (neuron0x1d5e600()*0.260812);
}

double NNfunction_NN_2_7::synapse0x1d497d0() {
   return (neuron0x1d5e940()*0.48915);
}

double NNfunction_NN_2_7::synapse0x1d49810() {
   return (neuron0x1d5ec80()*0.100601);
}

double NNfunction_NN_2_7::synapse0x1d49850() {
   return (neuron0x1d5efc0()*-0.138748);
}

double NNfunction_NN_2_7::synapse0x1d5a680() {
   return (neuron0x1d5f300()*1.5633);
}

double NNfunction_NN_2_7::synapse0x1d607e0() {
   return (neuron0x1d5a740()*0.00582126);
}

double NNfunction_NN_2_7::synapse0x1d5a6c0() {
   return (neuron0x1d5aa80()*-16.6733);
}

double NNfunction_NN_2_7::synapse0x1d5a700() {
   return (neuron0x1d5adc0()*-5.53025);
}

double NNfunction_NN_2_7::synapse0x1d613e0() {
   return (neuron0x1d5b100()*-0.00604557);
}

double NNfunction_NN_2_7::synapse0x1d61420() {
   return (neuron0x1d5b440()*0.00973757);
}

double NNfunction_NN_2_7::synapse0x1d61460() {
   return (neuron0x1d5b780()*-0.00157518);
}

double NNfunction_NN_2_7::synapse0x1d614a0() {
   return (neuron0x1d5bac0()*0.0483788);
}

double NNfunction_NN_2_7::synapse0x1d614e0() {
   return (neuron0x1d5be00()*-0.043057);
}

double NNfunction_NN_2_7::synapse0x1d61520() {
   return (neuron0x1d5c140()*0.0374241);
}

double NNfunction_NN_2_7::synapse0x1d61560() {
   return (neuron0x1d5c480()*0.00915691);
}

double NNfunction_NN_2_7::synapse0x1d615a0() {
   return (neuron0x1d5c7c0()*0.0263891);
}

double NNfunction_NN_2_7::synapse0x1d615e0() {
   return (neuron0x1d5cb00()*0.00284697);
}

double NNfunction_NN_2_7::synapse0x1d61620() {
   return (neuron0x1d5ce40()*-0.0345031);
}

double NNfunction_NN_2_7::synapse0x1d61660() {
   return (neuron0x1d5d180()*0.00194382);
}

double NNfunction_NN_2_7::synapse0x1d616a0() {
   return (neuron0x1d5d4c0()*-0.012381);
}

double NNfunction_NN_2_7::synapse0x1d616e0() {
   return (neuron0x1d5d800()*-0.00515037);
}

double NNfunction_NN_2_7::synapse0x1d60630() {
   return (neuron0x1d5db40()*0.00187089);
}

double NNfunction_NN_2_7::synapse0x1d60670() {
   return (neuron0x1d5e0a0()*-0.0114655);
}

double NNfunction_NN_2_7::synapse0x1d61830() {
   return (neuron0x1d5e2c0()*0.0221654);
}

double NNfunction_NN_2_7::synapse0x1d61870() {
   return (neuron0x1d5e600()*0.00512235);
}

double NNfunction_NN_2_7::synapse0x1d618b0() {
   return (neuron0x1d5e940()*0.0386469);
}

double NNfunction_NN_2_7::synapse0x1d618f0() {
   return (neuron0x1d5ec80()*0.034368);
}

double NNfunction_NN_2_7::synapse0x1d61930() {
   return (neuron0x1d5efc0()*-0.0202581);
}

double NNfunction_NN_2_7::synapse0x1d61970() {
   return (neuron0x1d5f300()*0.0407223);
}

double NNfunction_NN_2_7::synapse0x1d61cf0() {
   return (neuron0x1d5a740()*-0.00447891);
}

double NNfunction_NN_2_7::synapse0x1d61d30() {
   return (neuron0x1d5aa80()*-0.0808261);
}

double NNfunction_NN_2_7::synapse0x1d61d70() {
   return (neuron0x1d5adc0()*-0.864233);
}

double NNfunction_NN_2_7::synapse0x1d61db0() {
   return (neuron0x1d5b100()*-0.0206376);
}

double NNfunction_NN_2_7::synapse0x1d61df0() {
   return (neuron0x1d5b440()*-0.238566);
}

double NNfunction_NN_2_7::synapse0x1d61e30() {
   return (neuron0x1d5b780()*0.213582);
}

double NNfunction_NN_2_7::synapse0x1d61e70() {
   return (neuron0x1d5bac0()*-0.231471);
}

double NNfunction_NN_2_7::synapse0x1d61eb0() {
   return (neuron0x1d5be00()*-0.0978765);
}

double NNfunction_NN_2_7::synapse0x1d61ef0() {
   return (neuron0x1d5c140()*0.515897);
}

double NNfunction_NN_2_7::synapse0x1d61f30() {
   return (neuron0x1d5c480()*-0.0762239);
}

double NNfunction_NN_2_7::synapse0x1d61f70() {
   return (neuron0x1d5c7c0()*-0.229831);
}

double NNfunction_NN_2_7::synapse0x1d61fb0() {
   return (neuron0x1d5cb00()*-0.146428);
}

double NNfunction_NN_2_7::synapse0x1d61ff0() {
   return (neuron0x1d5ce40()*-0.0187407);
}

double NNfunction_NN_2_7::synapse0x1d62030() {
   return (neuron0x1d5d180()*-0.0908749);
}

double NNfunction_NN_2_7::synapse0x1d62070() {
   return (neuron0x1d5d4c0()*-0.239248);
}

double NNfunction_NN_2_7::synapse0x1d620b0() {
   return (neuron0x1d5d800()*-0.0643056);
}

double NNfunction_NN_2_7::synapse0x1d61b40() {
   return (neuron0x1d5db40()*0.333471);
}

double NNfunction_NN_2_7::synapse0x1d61b80() {
   return (neuron0x1d5e0a0()*-0.249659);
}

double NNfunction_NN_2_7::synapse0x1d62200() {
   return (neuron0x1d5e2c0()*0.103679);
}

double NNfunction_NN_2_7::synapse0x1d62240() {
   return (neuron0x1d5e600()*-0.0934659);
}

double NNfunction_NN_2_7::synapse0x1d62280() {
   return (neuron0x1d5e940()*0.151283);
}

double NNfunction_NN_2_7::synapse0x1d622c0() {
   return (neuron0x1d5ec80()*-0.265592);
}

double NNfunction_NN_2_7::synapse0x1d62300() {
   return (neuron0x1d5efc0()*0.272505);
}

double NNfunction_NN_2_7::synapse0x1d62340() {
   return (neuron0x1d5f300()*0.808218);
}

double NNfunction_NN_2_7::synapse0x1d626c0() {
   return (neuron0x1d5a740()*-0.369445);
}

double NNfunction_NN_2_7::synapse0x1d62700() {
   return (neuron0x1d5aa80()*0.030085);
}

double NNfunction_NN_2_7::synapse0x1d62740() {
   return (neuron0x1d5adc0()*-0.325828);
}

double NNfunction_NN_2_7::synapse0x1d62780() {
   return (neuron0x1d5b100()*-0.0102687);
}

double NNfunction_NN_2_7::synapse0x1d627c0() {
   return (neuron0x1d5b440()*0.00150511);
}

double NNfunction_NN_2_7::synapse0x1d62800() {
   return (neuron0x1d5b780()*0.00643211);
}

double NNfunction_NN_2_7::synapse0x1d62840() {
   return (neuron0x1d5bac0()*0.00718145);
}

double NNfunction_NN_2_7::synapse0x1d62880() {
   return (neuron0x1d5be00()*0.00762601);
}

double NNfunction_NN_2_7::synapse0x1d628c0() {
   return (neuron0x1d5c140()*-0.00522268);
}

double NNfunction_NN_2_7::synapse0x1b1a010() {
   return (neuron0x1d5c480()*0.00368103);
}

double NNfunction_NN_2_7::synapse0x1b1a050() {
   return (neuron0x1d5c7c0()*0.0190573);
}

double NNfunction_NN_2_7::synapse0x1b1a090() {
   return (neuron0x1d5cb00()*0.0374854);
}

double NNfunction_NN_2_7::synapse0x1b1a0d0() {
   return (neuron0x1d5ce40()*0.0100895);
}

double NNfunction_NN_2_7::synapse0x1b1a110() {
   return (neuron0x1d5d180()*0.00382342);
}

double NNfunction_NN_2_7::synapse0x1b1a150() {
   return (neuron0x1d5d4c0()*-0.00272962);
}

double NNfunction_NN_2_7::synapse0x1b1a190() {
   return (neuron0x1d5d800()*0.00749535);
}

double NNfunction_NN_2_7::synapse0x1d62510() {
   return (neuron0x1d5db40()*0.0432452);
}

double NNfunction_NN_2_7::synapse0x1d62550() {
   return (neuron0x1d5e0a0()*0.0204751);
}

double NNfunction_NN_2_7::synapse0x1b1a2e0() {
   return (neuron0x1d5e2c0()*-2.62843e-05);
}

double NNfunction_NN_2_7::synapse0x1b1a320() {
   return (neuron0x1d5e600()*-0.0251087);
}

double NNfunction_NN_2_7::synapse0x1b1a360() {
   return (neuron0x1d5e940()*0.0509551);
}

double NNfunction_NN_2_7::synapse0x1b1a3a0() {
   return (neuron0x1d5ec80()*-0.00809484);
}

double NNfunction_NN_2_7::synapse0x1b1a3e0() {
   return (neuron0x1d5efc0()*-0.0191994);
}

double NNfunction_NN_2_7::synapse0x1d63110() {
   return (neuron0x1d5f300()*2.14319);
}

double NNfunction_NN_2_7::synapse0x1d63490() {
   return (neuron0x1d5a740()*-0.0732216);
}

double NNfunction_NN_2_7::synapse0x1d634d0() {
   return (neuron0x1d5aa80()*-0.0361699);
}

double NNfunction_NN_2_7::synapse0x1d63510() {
   return (neuron0x1d5adc0()*1.38938);
}

double NNfunction_NN_2_7::synapse0x1d63550() {
   return (neuron0x1d5b100()*-0.0180271);
}

double NNfunction_NN_2_7::synapse0x1d63590() {
   return (neuron0x1d5b440()*0.0105964);
}

double NNfunction_NN_2_7::synapse0x1d635d0() {
   return (neuron0x1d5b780()*-0.0114496);
}

double NNfunction_NN_2_7::synapse0x1d63610() {
   return (neuron0x1d5bac0()*0.0259244);
}

double NNfunction_NN_2_7::synapse0x1d63650() {
   return (neuron0x1d5be00()*-0.00142623);
}

double NNfunction_NN_2_7::synapse0x1d63690() {
   return (neuron0x1d5c140()*-0.00673014);
}

double NNfunction_NN_2_7::synapse0x1d636d0() {
   return (neuron0x1d5c480()*-0.00331249);
}

double NNfunction_NN_2_7::synapse0x1d63710() {
   return (neuron0x1d5c7c0()*0.0141275);
}

double NNfunction_NN_2_7::synapse0x1d63750() {
   return (neuron0x1d5cb00()*0.141258);
}

double NNfunction_NN_2_7::synapse0x1d63790() {
   return (neuron0x1d5ce40()*0.0119794);
}

double NNfunction_NN_2_7::synapse0x1d637d0() {
   return (neuron0x1d5d180()*-0.017355);
}

double NNfunction_NN_2_7::synapse0x1d63810() {
   return (neuron0x1d5d4c0()*-0.0136879);
}

double NNfunction_NN_2_7::synapse0x1d63850() {
   return (neuron0x1d5d800()*-0.0428277);
}

double NNfunction_NN_2_7::synapse0x1d632e0() {
   return (neuron0x1d5db40()*-0.0176366);
}

double NNfunction_NN_2_7::synapse0x1d63320() {
   return (neuron0x1d5e0a0()*0.0258448);
}

double NNfunction_NN_2_7::synapse0x1d639a0() {
   return (neuron0x1d5e2c0()*0.0155143);
}

double NNfunction_NN_2_7::synapse0x1d639e0() {
   return (neuron0x1d5e600()*0.0078379);
}

double NNfunction_NN_2_7::synapse0x1d63a20() {
   return (neuron0x1d5e940()*0.016508);
}

double NNfunction_NN_2_7::synapse0x1d63a60() {
   return (neuron0x1d5ec80()*-0.0197263);
}

double NNfunction_NN_2_7::synapse0x1d63aa0() {
   return (neuron0x1d5efc0()*0.00146449);
}

double NNfunction_NN_2_7::synapse0x1d63ae0() {
   return (neuron0x1d5f300()*-3.81531);
}

double NNfunction_NN_2_7::synapse0x1d63e60() {
   return (neuron0x1d5a740()*-0.0389907);
}

double NNfunction_NN_2_7::synapse0x1d63ea0() {
   return (neuron0x1d5aa80()*0.287266);
}

double NNfunction_NN_2_7::synapse0x1d63ee0() {
   return (neuron0x1d5adc0()*0.00251893);
}

double NNfunction_NN_2_7::synapse0x1d63f20() {
   return (neuron0x1d5b100()*-0.0122703);
}

double NNfunction_NN_2_7::synapse0x1d63f60() {
   return (neuron0x1d5b440()*-0.00709514);
}

double NNfunction_NN_2_7::synapse0x1d63fa0() {
   return (neuron0x1d5b780()*-0.0197137);
}

double NNfunction_NN_2_7::synapse0x1d63fe0() {
   return (neuron0x1d5bac0()*-0.0525107);
}

double NNfunction_NN_2_7::synapse0x1d64020() {
   return (neuron0x1d5be00()*0.0396265);
}

double NNfunction_NN_2_7::synapse0x1d64060() {
   return (neuron0x1d5c140()*-0.0226627);
}

double NNfunction_NN_2_7::synapse0x1d640a0() {
   return (neuron0x1d5c480()*0.0135727);
}

double NNfunction_NN_2_7::synapse0x1d640e0() {
   return (neuron0x1d5c7c0()*0.0195882);
}

double NNfunction_NN_2_7::synapse0x1d64120() {
   return (neuron0x1d5cb00()*0.254018);
}

double NNfunction_NN_2_7::synapse0x1d64160() {
   return (neuron0x1d5ce40()*0.0136818);
}

double NNfunction_NN_2_7::synapse0x1d641a0() {
   return (neuron0x1d5d180()*-0.0851725);
}

double NNfunction_NN_2_7::synapse0x1d641e0() {
   return (neuron0x1d5d4c0()*0.0671555);
}

double NNfunction_NN_2_7::synapse0x1d64220() {
   return (neuron0x1d5d800()*-0.0448333);
}

double NNfunction_NN_2_7::synapse0x1d63cb0() {
   return (neuron0x1d5db40()*-0.107392);
}

double NNfunction_NN_2_7::synapse0x1d63cf0() {
   return (neuron0x1d5e0a0()*0.010357);
}

double NNfunction_NN_2_7::synapse0x1d64370() {
   return (neuron0x1d5e2c0()*0.0674894);
}

double NNfunction_NN_2_7::synapse0x1d643b0() {
   return (neuron0x1d5e600()*0.107177);
}

double NNfunction_NN_2_7::synapse0x1d643f0() {
   return (neuron0x1d5e940()*-0.093214);
}

double NNfunction_NN_2_7::synapse0x1d64430() {
   return (neuron0x1d5ec80()*0.0199366);
}

double NNfunction_NN_2_7::synapse0x1d64470() {
   return (neuron0x1d5efc0()*-0.0108635);
}

double NNfunction_NN_2_7::synapse0x1d644b0() {
   return (neuron0x1d5f300()*3.32499);
}

double NNfunction_NN_2_7::synapse0x1d5df90() {
   return (neuron0x1d5a740()*-0.0134847);
}

double NNfunction_NN_2_7::synapse0x1d5dfd0() {
   return (neuron0x1d5aa80()*-0.241682);
}

double NNfunction_NN_2_7::synapse0x1d5e010() {
   return (neuron0x1d5adc0()*0.960423);
}

double NNfunction_NN_2_7::synapse0x1d5e050() {
   return (neuron0x1d5b100()*-0.516607);
}

double NNfunction_NN_2_7::synapse0x1d64a40() {
   return (neuron0x1d5b440()*0.497517);
}

double NNfunction_NN_2_7::synapse0x1d64a80() {
   return (neuron0x1d5b780()*-0.334609);
}

double NNfunction_NN_2_7::synapse0x1d64ac0() {
   return (neuron0x1d5bac0()*0.46642);
}

double NNfunction_NN_2_7::synapse0x1d64b00() {
   return (neuron0x1d5be00()*0.196933);
}

double NNfunction_NN_2_7::synapse0x1d64b40() {
   return (neuron0x1d5c140()*0.422805);
}

double NNfunction_NN_2_7::synapse0x1d64b80() {
   return (neuron0x1d5c480()*0.277319);
}

double NNfunction_NN_2_7::synapse0x1d64bc0() {
   return (neuron0x1d5c7c0()*-0.159623);
}

double NNfunction_NN_2_7::synapse0x1d64c00() {
   return (neuron0x1d5cb00()*0.0091446);
}

double NNfunction_NN_2_7::synapse0x1d64c40() {
   return (neuron0x1d5ce40()*0.233199);
}

double NNfunction_NN_2_7::synapse0x1d64c80() {
   return (neuron0x1d5d180()*-0.404396);
}

double NNfunction_NN_2_7::synapse0x1d64cc0() {
   return (neuron0x1d5d4c0()*0.781639);
}

double NNfunction_NN_2_7::synapse0x1d64d00() {
   return (neuron0x1d5d800()*-0.184602);
}

double NNfunction_NN_2_7::synapse0x1d64680() {
   return (neuron0x1d5db40()*0.295489);
}

double NNfunction_NN_2_7::synapse0x1d646c0() {
   return (neuron0x1d5e0a0()*0.167354);
}

double NNfunction_NN_2_7::synapse0x1d64e50() {
   return (neuron0x1d5e2c0()*-0.33196);
}

double NNfunction_NN_2_7::synapse0x1d64e90() {
   return (neuron0x1d5e600()*0.0573062);
}

double NNfunction_NN_2_7::synapse0x1d64ed0() {
   return (neuron0x1d5e940()*-0.0111494);
}

double NNfunction_NN_2_7::synapse0x1d64f10() {
   return (neuron0x1d5ec80()*0.0245487);
}

double NNfunction_NN_2_7::synapse0x1d64f50() {
   return (neuron0x1d5efc0()*-0.52179);
}

double NNfunction_NN_2_7::synapse0x1d64f90() {
   return (neuron0x1d5f300()*0.707875);
}

double NNfunction_NN_2_7::synapse0x1d65310() {
   return (neuron0x1d5a740()*0.162264);
}

double NNfunction_NN_2_7::synapse0x1d65350() {
   return (neuron0x1d5aa80()*1.00476);
}

double NNfunction_NN_2_7::synapse0x1d65390() {
   return (neuron0x1d5adc0()*-0.270871);
}

double NNfunction_NN_2_7::synapse0x1d653d0() {
   return (neuron0x1d5b100()*0.119022);
}

double NNfunction_NN_2_7::synapse0x1d65410() {
   return (neuron0x1d5b440()*0.096184);
}

double NNfunction_NN_2_7::synapse0x1d65450() {
   return (neuron0x1d5b780()*-0.381118);
}

double NNfunction_NN_2_7::synapse0x1d65490() {
   return (neuron0x1d5bac0()*0.0474303);
}

double NNfunction_NN_2_7::synapse0x1d654d0() {
   return (neuron0x1d5be00()*-0.0699013);
}

double NNfunction_NN_2_7::synapse0x1d65510() {
   return (neuron0x1d5c140()*-0.124736);
}

double NNfunction_NN_2_7::synapse0x1d65550() {
   return (neuron0x1d5c480()*0.00119304);
}

double NNfunction_NN_2_7::synapse0x1d65590() {
   return (neuron0x1d5c7c0()*-0.444681);
}

double NNfunction_NN_2_7::synapse0x1d655d0() {
   return (neuron0x1d5cb00()*-0.60213);
}

double NNfunction_NN_2_7::synapse0x1d65610() {
   return (neuron0x1d5ce40()*-1.29652);
}

double NNfunction_NN_2_7::synapse0x1d65650() {
   return (neuron0x1d5d180()*-0.571197);
}

double NNfunction_NN_2_7::synapse0x1d65690() {
   return (neuron0x1d5d4c0()*0.0521074);
}

double NNfunction_NN_2_7::synapse0x1d656d0() {
   return (neuron0x1d5d800()*0.0953408);
}

double NNfunction_NN_2_7::synapse0x1d65160() {
   return (neuron0x1d5db40()*0.513684);
}

double NNfunction_NN_2_7::synapse0x1d651a0() {
   return (neuron0x1d5e0a0()*-0.76086);
}

double NNfunction_NN_2_7::synapse0x1d65820() {
   return (neuron0x1d5e2c0()*-0.115744);
}

double NNfunction_NN_2_7::synapse0x1d65860() {
   return (neuron0x1d5e600()*0.581435);
}

double NNfunction_NN_2_7::synapse0x1d658a0() {
   return (neuron0x1d5e940()*-0.337931);
}

double NNfunction_NN_2_7::synapse0x1d658e0() {
   return (neuron0x1d5ec80()*-0.0738911);
}

double NNfunction_NN_2_7::synapse0x1d65920() {
   return (neuron0x1d5efc0()*0.169284);
}

double NNfunction_NN_2_7::synapse0x1d65960() {
   return (neuron0x1d5f300()*2.22831);
}

double NNfunction_NN_2_7::synapse0x1d65ce0() {
   return (neuron0x1d5a740()*0.00215209);
}

double NNfunction_NN_2_7::synapse0x1d65d20() {
   return (neuron0x1d5aa80()*6.93133e-05);
}

double NNfunction_NN_2_7::synapse0x1d65d60() {
   return (neuron0x1d5adc0()*-0.6084);
}

double NNfunction_NN_2_7::synapse0x1d65da0() {
   return (neuron0x1d5b100()*-0.0151446);
}

double NNfunction_NN_2_7::synapse0x1d65de0() {
   return (neuron0x1d5b440()*0.0117162);
}

double NNfunction_NN_2_7::synapse0x1d65e20() {
   return (neuron0x1d5b780()*-0.0117371);
}

double NNfunction_NN_2_7::synapse0x1d65e60() {
   return (neuron0x1d5bac0()*0.0247841);
}

double NNfunction_NN_2_7::synapse0x1d65ea0() {
   return (neuron0x1d5be00()*0.0289286);
}

double NNfunction_NN_2_7::synapse0x1d65ee0() {
   return (neuron0x1d5c140()*0.019344);
}

double NNfunction_NN_2_7::synapse0x1d65f20() {
   return (neuron0x1d5c480()*0.00458477);
}

double NNfunction_NN_2_7::synapse0x1d65f60() {
   return (neuron0x1d5c7c0()*0.0443968);
}

double NNfunction_NN_2_7::synapse0x1d65fa0() {
   return (neuron0x1d5cb00()*-0.383102);
}

double NNfunction_NN_2_7::synapse0x1d65fe0() {
   return (neuron0x1d5ce40()*0.0173353);
}

double NNfunction_NN_2_7::synapse0x1d66020() {
   return (neuron0x1d5d180()*0.00165882);
}

double NNfunction_NN_2_7::synapse0x1d66060() {
   return (neuron0x1d5d4c0()*-0.0144468);
}

double NNfunction_NN_2_7::synapse0x1d660a0() {
   return (neuron0x1d5d800()*-0.0254257);
}

double NNfunction_NN_2_7::synapse0x1d65b30() {
   return (neuron0x1d5db40()*0.0187798);
}

double NNfunction_NN_2_7::synapse0x1d65b70() {
   return (neuron0x1d5e0a0()*-0.0174851);
}

double NNfunction_NN_2_7::synapse0x1d62900() {
   return (neuron0x1d5e2c0()*-0.0701491);
}

double NNfunction_NN_2_7::synapse0x1d62940() {
   return (neuron0x1d5e600()*-0.00868792);
}

double NNfunction_NN_2_7::synapse0x1d62980() {
   return (neuron0x1d5e940()*0.00488344);
}

double NNfunction_NN_2_7::synapse0x1d629c0() {
   return (neuron0x1d5ec80()*-0.0255391);
}

double NNfunction_NN_2_7::synapse0x1d62a00() {
   return (neuron0x1d5efc0()*-0.0168155);
}

double NNfunction_NN_2_7::synapse0x1d62a40() {
   return (neuron0x1d5f300()*-1.15301);
}

double NNfunction_NN_2_7::synapse0x1d62dc0() {
   return (neuron0x1d5a740()*-0.251657);
}

double NNfunction_NN_2_7::synapse0x1d62e00() {
   return (neuron0x1d5aa80()*0.308065);
}

double NNfunction_NN_2_7::synapse0x1d62e40() {
   return (neuron0x1d5adc0()*0.620697);
}

double NNfunction_NN_2_7::synapse0x1d62e80() {
   return (neuron0x1d5b100()*0.174048);
}

double NNfunction_NN_2_7::synapse0x1d62ec0() {
   return (neuron0x1d5b440()*0.250288);
}

double NNfunction_NN_2_7::synapse0x1d62f00() {
   return (neuron0x1d5b780()*-0.206073);
}

double NNfunction_NN_2_7::synapse0x1d62f40() {
   return (neuron0x1d5bac0()*0.393917);
}

double NNfunction_NN_2_7::synapse0x1d62f80() {
   return (neuron0x1d5be00()*0.176277);
}

double NNfunction_NN_2_7::synapse0x1d62fc0() {
   return (neuron0x1d5c140()*-0.0559538);
}

double NNfunction_NN_2_7::synapse0x1d63000() {
   return (neuron0x1d5c480()*0.220503);
}

double NNfunction_NN_2_7::synapse0x1d63040() {
   return (neuron0x1d5c7c0()*-0.0316724);
}

double NNfunction_NN_2_7::synapse0x1d63080() {
   return (neuron0x1d5cb00()*-0.0469223);
}

double NNfunction_NN_2_7::synapse0x1d630c0() {
   return (neuron0x1d5ce40()*-0.194771);
}

double NNfunction_NN_2_7::synapse0x1d67200() {
   return (neuron0x1d5d180()*-0.153275);
}

double NNfunction_NN_2_7::synapse0x1d67240() {
   return (neuron0x1d5d4c0()*0.151118);
}

double NNfunction_NN_2_7::synapse0x1d67280() {
   return (neuron0x1d5d800()*0.493658);
}

double NNfunction_NN_2_7::synapse0x1d62c10() {
   return (neuron0x1d5db40()*-0.147844);
}

double NNfunction_NN_2_7::synapse0x1d62c50() {
   return (neuron0x1d5e0a0()*0.148676);
}

double NNfunction_NN_2_7::synapse0x1d673d0() {
   return (neuron0x1d5e2c0()*-0.0743852);
}

double NNfunction_NN_2_7::synapse0x1d67410() {
   return (neuron0x1d5e600()*0.292996);
}

double NNfunction_NN_2_7::synapse0x1d67450() {
   return (neuron0x1d5e940()*0.391152);
}

double NNfunction_NN_2_7::synapse0x1d67490() {
   return (neuron0x1d5ec80()*0.398019);
}

double NNfunction_NN_2_7::synapse0x1d674d0() {
   return (neuron0x1d5efc0()*-0.168876);
}

double NNfunction_NN_2_7::synapse0x1d67510() {
   return (neuron0x1d5f300()*-1.86831);
}

double NNfunction_NN_2_7::synapse0x1d67890() {
   return (neuron0x1d5a740()*0.231457);
}

double NNfunction_NN_2_7::synapse0x1d678d0() {
   return (neuron0x1d5aa80()*0.125213);
}

double NNfunction_NN_2_7::synapse0x1d67910() {
   return (neuron0x1d5adc0()*0.019106);
}

double NNfunction_NN_2_7::synapse0x1d67950() {
   return (neuron0x1d5b100()*-0.207768);
}

double NNfunction_NN_2_7::synapse0x1d67990() {
   return (neuron0x1d5b440()*-0.762012);
}

double NNfunction_NN_2_7::synapse0x1d679d0() {
   return (neuron0x1d5b780()*0.355932);
}

double NNfunction_NN_2_7::synapse0x1d67a10() {
   return (neuron0x1d5bac0()*-0.663552);
}

double NNfunction_NN_2_7::synapse0x1d67a50() {
   return (neuron0x1d5be00()*0.11788);
}

double NNfunction_NN_2_7::synapse0x1d67a90() {
   return (neuron0x1d5c140()*0.248551);
}

double NNfunction_NN_2_7::synapse0x1d67ad0() {
   return (neuron0x1d5c480()*-0.0830974);
}

double NNfunction_NN_2_7::synapse0x1d67b10() {
   return (neuron0x1d5c7c0()*-0.270252);
}

double NNfunction_NN_2_7::synapse0x1d67b50() {
   return (neuron0x1d5cb00()*-0.0767523);
}

double NNfunction_NN_2_7::synapse0x1d67b90() {
   return (neuron0x1d5ce40()*0.479269);
}

double NNfunction_NN_2_7::synapse0x1d67bd0() {
   return (neuron0x1d5d180()*0.38782);
}

double NNfunction_NN_2_7::synapse0x1d67c10() {
   return (neuron0x1d5d4c0()*0.31886);
}

double NNfunction_NN_2_7::synapse0x1d67c50() {
   return (neuron0x1d5d800()*-0.504954);
}

double NNfunction_NN_2_7::synapse0x1d676e0() {
   return (neuron0x1d5db40()*-0.045816);
}

double NNfunction_NN_2_7::synapse0x1d67720() {
   return (neuron0x1d5e0a0()*0.181208);
}

double NNfunction_NN_2_7::synapse0x1d67da0() {
   return (neuron0x1d5e2c0()*-0.46505);
}

double NNfunction_NN_2_7::synapse0x1d67de0() {
   return (neuron0x1d5e600()*-0.0490596);
}

double NNfunction_NN_2_7::synapse0x1d67e20() {
   return (neuron0x1d5e940()*-0.126771);
}

double NNfunction_NN_2_7::synapse0x1d67e60() {
   return (neuron0x1d5ec80()*0.0178142);
}

double NNfunction_NN_2_7::synapse0x1d67ea0() {
   return (neuron0x1d5efc0()*0.0864993);
}

double NNfunction_NN_2_7::synapse0x1d67ee0() {
   return (neuron0x1d5f300()*1.36991);
}

double NNfunction_NN_2_7::synapse0x1d68260() {
   return (neuron0x1d5a740()*0.0494244);
}

double NNfunction_NN_2_7::synapse0x1d682a0() {
   return (neuron0x1d5aa80()*1.66315);
}

double NNfunction_NN_2_7::synapse0x1d682e0() {
   return (neuron0x1d5adc0()*-0.640163);
}

double NNfunction_NN_2_7::synapse0x1d68320() {
   return (neuron0x1d5b100()*-0.0247641);
}

double NNfunction_NN_2_7::synapse0x1d68360() {
   return (neuron0x1d5b440()*0.0666742);
}

double NNfunction_NN_2_7::synapse0x1d683a0() {
   return (neuron0x1d5b780()*-0.015607);
}

double NNfunction_NN_2_7::synapse0x1d683e0() {
   return (neuron0x1d5bac0()*0.0705451);
}

double NNfunction_NN_2_7::synapse0x1d68420() {
   return (neuron0x1d5be00()*-0.0681008);
}

double NNfunction_NN_2_7::synapse0x1d68460() {
   return (neuron0x1d5c140()*0.0788854);
}

double NNfunction_NN_2_7::synapse0x1d684a0() {
   return (neuron0x1d5c480()*0.0119528);
}

double NNfunction_NN_2_7::synapse0x1d684e0() {
   return (neuron0x1d5c7c0()*0.0184346);
}

double NNfunction_NN_2_7::synapse0x1d68520() {
   return (neuron0x1d5cb00()*-1.29434);
}

double NNfunction_NN_2_7::synapse0x1d68560() {
   return (neuron0x1d5ce40()*-0.125125);
}

double NNfunction_NN_2_7::synapse0x1d685a0() {
   return (neuron0x1d5d180()*-0.00657253);
}

double NNfunction_NN_2_7::synapse0x1d685e0() {
   return (neuron0x1d5d4c0()*-0.0894945);
}

double NNfunction_NN_2_7::synapse0x1d68620() {
   return (neuron0x1d5d800()*0.0563722);
}

double NNfunction_NN_2_7::synapse0x1d680b0() {
   return (neuron0x1d5db40()*-0.0223998);
}

double NNfunction_NN_2_7::synapse0x1d680f0() {
   return (neuron0x1d5e0a0()*-0.146533);
}

double NNfunction_NN_2_7::synapse0x1d68770() {
   return (neuron0x1d5e2c0()*-0.000792153);
}

double NNfunction_NN_2_7::synapse0x1d687b0() {
   return (neuron0x1d5e600()*-0.0589785);
}

double NNfunction_NN_2_7::synapse0x1d687f0() {
   return (neuron0x1d5e940()*0.0994126);
}

double NNfunction_NN_2_7::synapse0x1d68830() {
   return (neuron0x1d5ec80()*0.070198);
}

double NNfunction_NN_2_7::synapse0x1d68870() {
   return (neuron0x1d5efc0()*0.00789672);
}

double NNfunction_NN_2_7::synapse0x1d688b0() {
   return (neuron0x1d5f300()*-0.0908066);
}

double NNfunction_NN_2_7::synapse0x1d68c30() {
   return (neuron0x1d5a740()*-0.0253836);
}

double NNfunction_NN_2_7::synapse0x1d68c70() {
   return (neuron0x1d5aa80()*-4.98262);
}

double NNfunction_NN_2_7::synapse0x1d68cb0() {
   return (neuron0x1d5adc0()*-2.4067);
}

double NNfunction_NN_2_7::synapse0x1d68cf0() {
   return (neuron0x1d5b100()*-0.0748328);
}

double NNfunction_NN_2_7::synapse0x1d68d30() {
   return (neuron0x1d5b440()*0.012886);
}

double NNfunction_NN_2_7::synapse0x1d68d70() {
   return (neuron0x1d5b780()*-0.0556539);
}

double NNfunction_NN_2_7::synapse0x1d68db0() {
   return (neuron0x1d5bac0()*-0.0106987);
}

double NNfunction_NN_2_7::synapse0x1d68df0() {
   return (neuron0x1d5be00()*0.0284293);
}

double NNfunction_NN_2_7::synapse0x1d68e30() {
   return (neuron0x1d5c140()*-0.0305117);
}

double NNfunction_NN_2_7::synapse0x1d68e70() {
   return (neuron0x1d5c480()*-0.0067417);
}

double NNfunction_NN_2_7::synapse0x1d68eb0() {
   return (neuron0x1d5c7c0()*-0.0387124);
}

double NNfunction_NN_2_7::synapse0x1d68ef0() {
   return (neuron0x1d5cb00()*0.847472);
}

double NNfunction_NN_2_7::synapse0x1d68f30() {
   return (neuron0x1d5ce40()*0.0876984);
}

double NNfunction_NN_2_7::synapse0x1d68f70() {
   return (neuron0x1d5d180()*-0.0189059);
}

double NNfunction_NN_2_7::synapse0x1d68fb0() {
   return (neuron0x1d5d4c0()*0.0771922);
}

double NNfunction_NN_2_7::synapse0x1d68ff0() {
   return (neuron0x1d5d800()*0.00165745);
}

double NNfunction_NN_2_7::synapse0x1d68a80() {
   return (neuron0x1d5db40()*-0.0244653);
}

double NNfunction_NN_2_7::synapse0x1d68ac0() {
   return (neuron0x1d5e0a0()*-0.038729);
}

double NNfunction_NN_2_7::synapse0x1d69140() {
   return (neuron0x1d5e2c0()*-0.012311);
}

double NNfunction_NN_2_7::synapse0x1d69180() {
   return (neuron0x1d5e600()*0.0455366);
}

double NNfunction_NN_2_7::synapse0x1d691c0() {
   return (neuron0x1d5e940()*0.011305);
}

double NNfunction_NN_2_7::synapse0x1d69200() {
   return (neuron0x1d5ec80()*0.0330977);
}

double NNfunction_NN_2_7::synapse0x1d69240() {
   return (neuron0x1d5efc0()*-0.0392462);
}

double NNfunction_NN_2_7::synapse0x1d69280() {
   return (neuron0x1d5f300()*-0.0623786);
}

double NNfunction_NN_2_7::synapse0x1d69600() {
   return (neuron0x1d5a740()*-0.0471344);
}

double NNfunction_NN_2_7::synapse0x1d5a960() {
   return (neuron0x1d5aa80()*-0.00168307);
}

double NNfunction_NN_2_7::synapse0x1d5a9a0() {
   return (neuron0x1d5adc0()*0.00334101);
}

double NNfunction_NN_2_7::synapse0x1d5aca0() {
   return (neuron0x1d5b100()*-0.009011);
}

double NNfunction_NN_2_7::synapse0x1d5ace0() {
   return (neuron0x1d5b440()*-0.00387524);
}

double NNfunction_NN_2_7::synapse0x1d5afe0() {
   return (neuron0x1d5b780()*0.00274503);
}

double NNfunction_NN_2_7::synapse0x1d5b020() {
   return (neuron0x1d5bac0()*0.00718745);
}

double NNfunction_NN_2_7::synapse0x1d5b320() {
   return (neuron0x1d5be00()*-3.72104e-05);
}

double NNfunction_NN_2_7::synapse0x1d5b360() {
   return (neuron0x1d5c140()*-0.000376804);
}

double NNfunction_NN_2_7::synapse0x1d5b660() {
   return (neuron0x1d5c480()*-0.000809816);
}

double NNfunction_NN_2_7::synapse0x1d5b6a0() {
   return (neuron0x1d5c7c0()*0.00664174);
}

double NNfunction_NN_2_7::synapse0x1d5b9a0() {
   return (neuron0x1d5cb00()*0.0246603);
}

double NNfunction_NN_2_7::synapse0x1d5b9e0() {
   return (neuron0x1d5ce40()*0.00248001);
}

double NNfunction_NN_2_7::synapse0x1d5bce0() {
   return (neuron0x1d5d180()*-0.00258178);
}

double NNfunction_NN_2_7::synapse0x1d5bd20() {
   return (neuron0x1d5d4c0()*-0.0053027);
}

double NNfunction_NN_2_7::synapse0x1d5c020() {
   return (neuron0x1d5d800()*-0.00635725);
}

double NNfunction_NN_2_7::synapse0x1d5c060() {
   return (neuron0x1d5db40()*0.0107314);
}

double NNfunction_NN_2_7::synapse0x1d5c360() {
   return (neuron0x1d5e0a0()*0.00441444);
}

double NNfunction_NN_2_7::synapse0x1d5c3a0() {
   return (neuron0x1d5e2c0()*-0.000521135);
}

double NNfunction_NN_2_7::synapse0x1d5c6a0() {
   return (neuron0x1d5e600()*-0.00332393);
}

double NNfunction_NN_2_7::synapse0x1d5c6e0() {
   return (neuron0x1d5e940()*0.0123494);
}

double NNfunction_NN_2_7::synapse0x1d5c9e0() {
   return (neuron0x1d5ec80()*-0.000247055);
}

double NNfunction_NN_2_7::synapse0x1d5ca20() {
   return (neuron0x1d5efc0()*0.000463896);
}

double NNfunction_NN_2_7::synapse0x1d5cd20() {
   return (neuron0x1d5f300()*-11.3493);
}

double NNfunction_NN_2_7::synapse0x1d5cd60() {
   return (neuron0x1d5a740()*0.291751);
}

double NNfunction_NN_2_7::synapse0x1d5da20() {
   return (neuron0x1d5aa80()*0.345399);
}

double NNfunction_NN_2_7::synapse0x1d5da60() {
   return (neuron0x1d5adc0()*-1.05068);
}

double NNfunction_NN_2_7::synapse0x1d69450() {
   return (neuron0x1d5b100()*0.282904);
}

double NNfunction_NN_2_7::synapse0x1d69490() {
   return (neuron0x1d5b440()*-0.00891834);
}

double NNfunction_NN_2_7::synapse0x1d5dd60() {
   return (neuron0x1d5b780()*-0.216875);
}

double NNfunction_NN_2_7::synapse0x1d5dda0() {
   return (neuron0x1d5bac0()*0.305062);
}

double NNfunction_NN_2_7::synapse0x1b0bcf0() {
   return (neuron0x1d5be00()*-0.107027);
}

double NNfunction_NN_2_7::synapse0x1b0bd30() {
   return (neuron0x1d5c140()*0.0990331);
}

double NNfunction_NN_2_7::synapse0x1d5e4e0() {
   return (neuron0x1d5c480()*-0.306913);
}

double NNfunction_NN_2_7::synapse0x1d5e520() {
   return (neuron0x1d5c7c0()*0.38855);
}

double NNfunction_NN_2_7::synapse0x1d5e820() {
   return (neuron0x1d5cb00()*0.200933);
}

double NNfunction_NN_2_7::synapse0x1d5e860() {
   return (neuron0x1d5ce40()*-0.0253592);
}

double NNfunction_NN_2_7::synapse0x1d5eb60() {
   return (neuron0x1d5d180()*0.262144);
}

double NNfunction_NN_2_7::synapse0x1d5eba0() {
   return (neuron0x1d5d4c0()*0.437177);
}

double NNfunction_NN_2_7::synapse0x1d5eea0() {
   return (neuron0x1d5d800()*-0.726039);
}

double NNfunction_NN_2_7::synapse0x1d5eee0() {
   return (neuron0x1d5db40()*0.356437);
}

double NNfunction_NN_2_7::synapse0x1d5f1e0() {
   return (neuron0x1d5e0a0()*0.0950192);
}

double NNfunction_NN_2_7::synapse0x1d5f220() {
   return (neuron0x1d5e2c0()*-0.205417);
}

double NNfunction_NN_2_7::synapse0x1d5f520() {
   return (neuron0x1d5e600()*-0.134655);
}

double NNfunction_NN_2_7::synapse0x1d5f560() {
   return (neuron0x1d5e940()*-0.672618);
}

double NNfunction_NN_2_7::synapse0x1d5d060() {
   return (neuron0x1d5ec80()*-0.345825);
}

double NNfunction_NN_2_7::synapse0x1d5d0a0() {
   return (neuron0x1d5efc0()*0.162451);
}

double NNfunction_NN_2_7::synapse0x1d6b370() {
   return (neuron0x1d5f300()*2.11416);
}

double NNfunction_NN_2_7::synapse0x1d6b6f0() {
   return (neuron0x1d5a740()*-0.473598);
}

double NNfunction_NN_2_7::synapse0x1d6b730() {
   return (neuron0x1d5aa80()*-0.0069211);
}

double NNfunction_NN_2_7::synapse0x1d6b770() {
   return (neuron0x1d5adc0()*-0.0198045);
}

double NNfunction_NN_2_7::synapse0x1d6b7b0() {
   return (neuron0x1d5b100()*0.0173813);
}

double NNfunction_NN_2_7::synapse0x1d6b7f0() {
   return (neuron0x1d5b440()*0.0193794);
}

double NNfunction_NN_2_7::synapse0x1d6b830() {
   return (neuron0x1d5b780()*0.00971576);
}

double NNfunction_NN_2_7::synapse0x1d6b870() {
   return (neuron0x1d5bac0()*-0.0134555);
}

double NNfunction_NN_2_7::synapse0x1d6b8b0() {
   return (neuron0x1d5be00()*0.00315639);
}

double NNfunction_NN_2_7::synapse0x1d6b8f0() {
   return (neuron0x1d5c140()*0.00195235);
}

double NNfunction_NN_2_7::synapse0x1d6b930() {
   return (neuron0x1d5c480()*-0.0231369);
}

double NNfunction_NN_2_7::synapse0x1d6b970() {
   return (neuron0x1d5c7c0()*-0.0160122);
}

double NNfunction_NN_2_7::synapse0x1d6b9b0() {
   return (neuron0x1d5cb00()*-0.0078861);
}

double NNfunction_NN_2_7::synapse0x1d6b9f0() {
   return (neuron0x1d5ce40()*-0.00862539);
}

double NNfunction_NN_2_7::synapse0x1d6ba30() {
   return (neuron0x1d5d180()*-0.00551059);
}

double NNfunction_NN_2_7::synapse0x1d6ba70() {
   return (neuron0x1d5d4c0()*0.00320483);
}

double NNfunction_NN_2_7::synapse0x1d6bab0() {
   return (neuron0x1d5d800()*0.0170559);
}

double NNfunction_NN_2_7::synapse0x1d6b540() {
   return (neuron0x1d5db40()*-0.0352361);
}

double NNfunction_NN_2_7::synapse0x1d6b580() {
   return (neuron0x1d5e0a0()*0.0248965);
}

double NNfunction_NN_2_7::synapse0x1d6bc00() {
   return (neuron0x1d5e2c0()*0.0107422);
}

double NNfunction_NN_2_7::synapse0x1d6bc40() {
   return (neuron0x1d5e600()*0.00762235);
}

double NNfunction_NN_2_7::synapse0x1d6bc80() {
   return (neuron0x1d5e940()*0.0218651);
}

double NNfunction_NN_2_7::synapse0x1d6bcc0() {
   return (neuron0x1d5ec80()*-0.00302315);
}

double NNfunction_NN_2_7::synapse0x1d6bd00() {
   return (neuron0x1d5efc0()*-0.0316153);
}

double NNfunction_NN_2_7::synapse0x1d6bd40() {
   return (neuron0x1d5f300()*-1.30314);
}

double NNfunction_NN_2_7::synapse0x1d6c0c0() {
   return (neuron0x1d5a740()*0.230121);
}

double NNfunction_NN_2_7::synapse0x1d6c100() {
   return (neuron0x1d5aa80()*1.15733);
}

double NNfunction_NN_2_7::synapse0x1d6c140() {
   return (neuron0x1d5adc0()*0.134758);
}

double NNfunction_NN_2_7::synapse0x1d6c180() {
   return (neuron0x1d5b100()*-0.145065);
}

double NNfunction_NN_2_7::synapse0x1d6c1c0() {
   return (neuron0x1d5b440()*-0.078648);
}

double NNfunction_NN_2_7::synapse0x1d6c200() {
   return (neuron0x1d5b780()*0.056418);
}

double NNfunction_NN_2_7::synapse0x1d6c240() {
   return (neuron0x1d5bac0()*-0.395872);
}

double NNfunction_NN_2_7::synapse0x1d6c280() {
   return (neuron0x1d5be00()*-0.267434);
}

double NNfunction_NN_2_7::synapse0x1d6c2c0() {
   return (neuron0x1d5c140()*0.0390902);
}

double NNfunction_NN_2_7::synapse0x1d6c300() {
   return (neuron0x1d5c480()*0.249703);
}

double NNfunction_NN_2_7::synapse0x1d6c340() {
   return (neuron0x1d5c7c0()*-0.0678234);
}

double NNfunction_NN_2_7::synapse0x1d6c380() {
   return (neuron0x1d5cb00()*-0.125642);
}

double NNfunction_NN_2_7::synapse0x1d6c3c0() {
   return (neuron0x1d5ce40()*0.334563);
}

double NNfunction_NN_2_7::synapse0x1d6c400() {
   return (neuron0x1d5d180()*0.107196);
}

double NNfunction_NN_2_7::synapse0x1d6c440() {
   return (neuron0x1d5d4c0()*0.0867259);
}

double NNfunction_NN_2_7::synapse0x1d6c480() {
   return (neuron0x1d5d800()*-0.0211907);
}

double NNfunction_NN_2_7::synapse0x1d6bf10() {
   return (neuron0x1d5db40()*-0.471147);
}

double NNfunction_NN_2_7::synapse0x1d6bf50() {
   return (neuron0x1d5e0a0()*0.214305);
}

double NNfunction_NN_2_7::synapse0x1d6c5d0() {
   return (neuron0x1d5e2c0()*-0.289415);
}

double NNfunction_NN_2_7::synapse0x1d6c610() {
   return (neuron0x1d5e600()*0.133505);
}

double NNfunction_NN_2_7::synapse0x1d6c650() {
   return (neuron0x1d5e940()*-0.134968);
}

double NNfunction_NN_2_7::synapse0x1d6c690() {
   return (neuron0x1d5ec80()*0.0706374);
}

double NNfunction_NN_2_7::synapse0x1d6c6d0() {
   return (neuron0x1d5efc0()*-0.128563);
}

double NNfunction_NN_2_7::synapse0x1d6c710() {
   return (neuron0x1d5f300()*-1.72742);
}

double NNfunction_NN_2_7::synapse0x1d6ca90() {
   return (neuron0x1d5a740()*-0.368202);
}

double NNfunction_NN_2_7::synapse0x1d6cad0() {
   return (neuron0x1d5aa80()*1.26378);
}

double NNfunction_NN_2_7::synapse0x1d6cb10() {
   return (neuron0x1d5adc0()*0.207771);
}

double NNfunction_NN_2_7::synapse0x1d6cb50() {
   return (neuron0x1d5b100()*0.378549);
}

double NNfunction_NN_2_7::synapse0x1d6cb90() {
   return (neuron0x1d5b440()*-0.140699);
}

double NNfunction_NN_2_7::synapse0x1d6cbd0() {
   return (neuron0x1d5b780()*0.134757);
}

double NNfunction_NN_2_7::synapse0x1d6cc10() {
   return (neuron0x1d5bac0()*0.149477);
}

double NNfunction_NN_2_7::synapse0x1d6cc50() {
   return (neuron0x1d5be00()*-0.0401508);
}

double NNfunction_NN_2_7::synapse0x1d6cc90() {
   return (neuron0x1d5c140()*-0.627585);
}

double NNfunction_NN_2_7::synapse0x1d6ccd0() {
   return (neuron0x1d5c480()*-0.0228242);
}

double NNfunction_NN_2_7::synapse0x1d6cd10() {
   return (neuron0x1d5c7c0()*0.188406);
}

double NNfunction_NN_2_7::synapse0x1d6cd50() {
   return (neuron0x1d5cb00()*-0.0580909);
}

double NNfunction_NN_2_7::synapse0x1d6cd90() {
   return (neuron0x1d5ce40()*0.143142);
}

double NNfunction_NN_2_7::synapse0x1d6cdd0() {
   return (neuron0x1d5d180()*0.227316);
}

double NNfunction_NN_2_7::synapse0x1d6ce10() {
   return (neuron0x1d5d4c0()*-0.464924);
}

double NNfunction_NN_2_7::synapse0x1d6ce50() {
   return (neuron0x1d5d800()*0.172405);
}

double NNfunction_NN_2_7::synapse0x1d6c8e0() {
   return (neuron0x1d5db40()*-0.319583);
}

double NNfunction_NN_2_7::synapse0x1d6c920() {
   return (neuron0x1d5e0a0()*0.0785468);
}

double NNfunction_NN_2_7::synapse0x1d6cfa0() {
   return (neuron0x1d5e2c0()*0.291435);
}

double NNfunction_NN_2_7::synapse0x1d6cfe0() {
   return (neuron0x1d5e600()*-0.262107);
}

double NNfunction_NN_2_7::synapse0x1d6d020() {
   return (neuron0x1d5e940()*0.204752);
}

double NNfunction_NN_2_7::synapse0x1d6d060() {
   return (neuron0x1d5ec80()*-0.00543407);
}

double NNfunction_NN_2_7::synapse0x1d6d0a0() {
   return (neuron0x1d5efc0()*0.173637);
}

double NNfunction_NN_2_7::synapse0x1d6d0e0() {
   return (neuron0x1d5f300()*-0.991994);
}

double NNfunction_NN_2_7::synapse0x1d6d460() {
   return (neuron0x1d5a740()*0.08156);
}

double NNfunction_NN_2_7::synapse0x1d6d4a0() {
   return (neuron0x1d5aa80()*1.36399);
}

double NNfunction_NN_2_7::synapse0x1d6d4e0() {
   return (neuron0x1d5adc0()*-6.11961);
}

double NNfunction_NN_2_7::synapse0x1d6d520() {
   return (neuron0x1d5b100()*0.0800889);
}

double NNfunction_NN_2_7::synapse0x1d6d560() {
   return (neuron0x1d5b440()*-0.0113308);
}

double NNfunction_NN_2_7::synapse0x1d6d5a0() {
   return (neuron0x1d5b780()*0.0415759);
}

double NNfunction_NN_2_7::synapse0x1d6d5e0() {
   return (neuron0x1d5bac0()*-0.00443611);
}

double NNfunction_NN_2_7::synapse0x1d6d620() {
   return (neuron0x1d5be00()*-0.0405004);
}

double NNfunction_NN_2_7::synapse0x1d6d660() {
   return (neuron0x1d5c140()*-0.00737122);
}

double NNfunction_NN_2_7::synapse0x1d6d6a0() {
   return (neuron0x1d5c480()*0.049444);
}

double NNfunction_NN_2_7::synapse0x1d6d6e0() {
   return (neuron0x1d5c7c0()*0.0179417);
}

double NNfunction_NN_2_7::synapse0x1d6d720() {
   return (neuron0x1d5cb00()*0.563007);
}

double NNfunction_NN_2_7::synapse0x1d6d760() {
   return (neuron0x1d5ce40()*0.0551627);
}

double NNfunction_NN_2_7::synapse0x1d6d7a0() {
   return (neuron0x1d5d180()*0.0220982);
}

double NNfunction_NN_2_7::synapse0x1d6d7e0() {
   return (neuron0x1d5d4c0()*-0.0363273);
}

double NNfunction_NN_2_7::synapse0x1d6d820() {
   return (neuron0x1d5d800()*-0.0404791);
}

double NNfunction_NN_2_7::synapse0x1d6d2b0() {
   return (neuron0x1d5db40()*0.0439632);
}

double NNfunction_NN_2_7::synapse0x1d6d2f0() {
   return (neuron0x1d5e0a0()*0.0303553);
}

double NNfunction_NN_2_7::synapse0x1d6d970() {
   return (neuron0x1d5e2c0()*0.0474097);
}

double NNfunction_NN_2_7::synapse0x1d6d9b0() {
   return (neuron0x1d5e600()*-0.0109711);
}

double NNfunction_NN_2_7::synapse0x1d6d9f0() {
   return (neuron0x1d5e940()*-0.00506992);
}

double NNfunction_NN_2_7::synapse0x1d6da30() {
   return (neuron0x1d5ec80()*-0.0130457);
}

double NNfunction_NN_2_7::synapse0x1d6da70() {
   return (neuron0x1d5efc0()*0.00385742);
}

double NNfunction_NN_2_7::synapse0x1d6dab0() {
   return (neuron0x1d5f300()*0.0879664);
}

double NNfunction_NN_2_7::synapse0x1d6de30() {
   return (neuron0x1d5a740()*0.118309);
}

double NNfunction_NN_2_7::synapse0x1d6de70() {
   return (neuron0x1d5aa80()*1.13825);
}

double NNfunction_NN_2_7::synapse0x1d6deb0() {
   return (neuron0x1d5adc0()*0.141079);
}

double NNfunction_NN_2_7::synapse0x1d6def0() {
   return (neuron0x1d5b100()*-0.0810845);
}

double NNfunction_NN_2_7::synapse0x1d6df30() {
   return (neuron0x1d5b440()*-0.0204807);
}

double NNfunction_NN_2_7::synapse0x1d6df70() {
   return (neuron0x1d5b780()*0.458693);
}

double NNfunction_NN_2_7::synapse0x1d6dfb0() {
   return (neuron0x1d5bac0()*0.246364);
}

double NNfunction_NN_2_7::synapse0x1d6dff0() {
   return (neuron0x1d5be00()*-0.105323);
}

double NNfunction_NN_2_7::synapse0x1d6e030() {
   return (neuron0x1d5c140()*-0.256552);
}

double NNfunction_NN_2_7::synapse0x1d661f0() {
   return (neuron0x1d5c480()*-0.460751);
}

double NNfunction_NN_2_7::synapse0x1d66230() {
   return (neuron0x1d5c7c0()*-0.0170038);
}

double NNfunction_NN_2_7::synapse0x1d66270() {
   return (neuron0x1d5cb00()*0.549088);
}

double NNfunction_NN_2_7::synapse0x1d662b0() {
   return (neuron0x1d5ce40()*-0.188948);
}

double NNfunction_NN_2_7::synapse0x1d662f0() {
   return (neuron0x1d5d180()*-0.0723926);
}

double NNfunction_NN_2_7::synapse0x1d66330() {
   return (neuron0x1d5d4c0()*-0.237566);
}

double NNfunction_NN_2_7::synapse0x1d66370() {
   return (neuron0x1d5d800()*-0.112126);
}

double NNfunction_NN_2_7::synapse0x1d6dc80() {
   return (neuron0x1d5db40()*-0.318796);
}

double NNfunction_NN_2_7::synapse0x1d6dcc0() {
   return (neuron0x1d5e0a0()*0.203702);
}

double NNfunction_NN_2_7::synapse0x1d664c0() {
   return (neuron0x1d5e2c0()*-0.00722684);
}

double NNfunction_NN_2_7::synapse0x1d66500() {
   return (neuron0x1d5e600()*0.136182);
}

double NNfunction_NN_2_7::synapse0x1d66540() {
   return (neuron0x1d5e940()*0.181449);
}

double NNfunction_NN_2_7::synapse0x1d66580() {
   return (neuron0x1d5ec80()*0.152881);
}

double NNfunction_NN_2_7::synapse0x1d665c0() {
   return (neuron0x1d5efc0()*-0.275678);
}

double NNfunction_NN_2_7::synapse0x1d66600() {
   return (neuron0x1d5f300()*0.061929);
}

double NNfunction_NN_2_7::synapse0x1d66980() {
   return (neuron0x1d5a740()*-0.633932);
}

double NNfunction_NN_2_7::synapse0x1d669c0() {
   return (neuron0x1d5aa80()*-0.646031);
}

double NNfunction_NN_2_7::synapse0x1d66a00() {
   return (neuron0x1d5adc0()*-0.325059);
}

double NNfunction_NN_2_7::synapse0x1d66a40() {
   return (neuron0x1d5b100()*-0.646525);
}

double NNfunction_NN_2_7::synapse0x1d66a80() {
   return (neuron0x1d5b440()*-0.322226);
}

double NNfunction_NN_2_7::synapse0x1d66ac0() {
   return (neuron0x1d5b780()*-0.377564);
}

double NNfunction_NN_2_7::synapse0x1d66b00() {
   return (neuron0x1d5bac0()*-0.267257);
}

double NNfunction_NN_2_7::synapse0x1d66b40() {
   return (neuron0x1d5be00()*-0.274513);
}

double NNfunction_NN_2_7::synapse0x1d66b80() {
   return (neuron0x1d5c140()*0.280875);
}

double NNfunction_NN_2_7::synapse0x1d66bc0() {
   return (neuron0x1d5c480()*0.994289);
}

double NNfunction_NN_2_7::synapse0x1d66c00() {
   return (neuron0x1d5c7c0()*0.0959814);
}

double NNfunction_NN_2_7::synapse0x1d66c40() {
   return (neuron0x1d5cb00()*-1.47347);
}

double NNfunction_NN_2_7::synapse0x1d66c80() {
   return (neuron0x1d5ce40()*-0.44752);
}

double NNfunction_NN_2_7::synapse0x1d66cc0() {
   return (neuron0x1d5d180()*0.117157);
}

double NNfunction_NN_2_7::synapse0x1d66d00() {
   return (neuron0x1d5d4c0()*-0.190979);
}

double NNfunction_NN_2_7::synapse0x1d66d40() {
   return (neuron0x1d5d800()*-0.622198);
}

double NNfunction_NN_2_7::synapse0x1d667d0() {
   return (neuron0x1d5db40()*-0.709978);
}

double NNfunction_NN_2_7::synapse0x1d66810() {
   return (neuron0x1d5e0a0()*-0.171621);
}

double NNfunction_NN_2_7::synapse0x1d66e90() {
   return (neuron0x1d5e2c0()*-0.518939);
}

double NNfunction_NN_2_7::synapse0x1d66ed0() {
   return (neuron0x1d5e600()*0.666333);
}

double NNfunction_NN_2_7::synapse0x1d66f10() {
   return (neuron0x1d5e940()*0.024184);
}

double NNfunction_NN_2_7::synapse0x1d66f50() {
   return (neuron0x1d5ec80()*-0.215303);
}

double NNfunction_NN_2_7::synapse0x1d66f90() {
   return (neuron0x1d5efc0()*0.383821);
}

double NNfunction_NN_2_7::synapse0x1d66fd0() {
   return (neuron0x1d5f300()*-0.745039);
}

double NNfunction_NN_2_7::synapse0x1d671a0() {
   return (neuron0x1d5a740()*-0.0339091);
}

double NNfunction_NN_2_7::synapse0x1d70230() {
   return (neuron0x1d5aa80()*0.039599);
}

double NNfunction_NN_2_7::synapse0x1d70270() {
   return (neuron0x1d5adc0()*-0.726895);
}

double NNfunction_NN_2_7::synapse0x1d702b0() {
   return (neuron0x1d5b100()*-0.027184);
}

double NNfunction_NN_2_7::synapse0x1d702f0() {
   return (neuron0x1d5b440()*0.0102422);
}

double NNfunction_NN_2_7::synapse0x1d70330() {
   return (neuron0x1d5b780()*0.000144406);
}

double NNfunction_NN_2_7::synapse0x1d70370() {
   return (neuron0x1d5bac0()*0.0266074);
}

double NNfunction_NN_2_7::synapse0x1d703b0() {
   return (neuron0x1d5be00()*0.0235903);
}

double NNfunction_NN_2_7::synapse0x1d703f0() {
   return (neuron0x1d5c140()*0.0182893);
}

double NNfunction_NN_2_7::synapse0x1d70430() {
   return (neuron0x1d5c480()*0.0104927);
}

double NNfunction_NN_2_7::synapse0x1d70470() {
   return (neuron0x1d5c7c0()*0.0236876);
}

double NNfunction_NN_2_7::synapse0x1d704b0() {
   return (neuron0x1d5cb00()*-0.174221);
}

double NNfunction_NN_2_7::synapse0x1d704f0() {
   return (neuron0x1d5ce40()*0.015502);
}

double NNfunction_NN_2_7::synapse0x1d70530() {
   return (neuron0x1d5d180()*0.00247736);
}

double NNfunction_NN_2_7::synapse0x1d70570() {
   return (neuron0x1d5d4c0()*-0.00183942);
}

double NNfunction_NN_2_7::synapse0x1d705b0() {
   return (neuron0x1d5d800()*-0.0154968);
}

double NNfunction_NN_2_7::synapse0x1d70080() {
   return (neuron0x1d5db40()*0.0404502);
}

double NNfunction_NN_2_7::synapse0x1d700c0() {
   return (neuron0x1d5e0a0()*-0.00377898);
}

double NNfunction_NN_2_7::synapse0x1d70700() {
   return (neuron0x1d5e2c0()*-0.0432102);
}

double NNfunction_NN_2_7::synapse0x1d70740() {
   return (neuron0x1d5e600()*-0.0135798);
}

double NNfunction_NN_2_7::synapse0x1d70780() {
   return (neuron0x1d5e940()*0.0300219);
}

double NNfunction_NN_2_7::synapse0x1d707c0() {
   return (neuron0x1d5ec80()*-0.021156);
}

double NNfunction_NN_2_7::synapse0x1d70800() {
   return (neuron0x1d5efc0()*-0.00959337);
}

double NNfunction_NN_2_7::synapse0x1d70840() {
   return (neuron0x1d5f300()*-1.74476);
}

double NNfunction_NN_2_7::synapse0x1d70bc0() {
   return (neuron0x1d5a740()*-0.0933812);
}

double NNfunction_NN_2_7::synapse0x1d70c00() {
   return (neuron0x1d5aa80()*0.0183048);
}

double NNfunction_NN_2_7::synapse0x1d70c40() {
   return (neuron0x1d5adc0()*0.472475);
}

double NNfunction_NN_2_7::synapse0x1d70c80() {
   return (neuron0x1d5b100()*0.128133);
}

double NNfunction_NN_2_7::synapse0x1d70cc0() {
   return (neuron0x1d5b440()*0.027698);
}

double NNfunction_NN_2_7::synapse0x1d70d00() {
   return (neuron0x1d5b780()*-0.220181);
}

double NNfunction_NN_2_7::synapse0x1d70d40() {
   return (neuron0x1d5bac0()*0.250906);
}

double NNfunction_NN_2_7::synapse0x1d70d80() {
   return (neuron0x1d5be00()*-0.0963197);
}

double NNfunction_NN_2_7::synapse0x1d70dc0() {
   return (neuron0x1d5c140()*-0.297731);
}

double NNfunction_NN_2_7::synapse0x1d70e00() {
   return (neuron0x1d5c480()*0.164784);
}

double NNfunction_NN_2_7::synapse0x1d70e40() {
   return (neuron0x1d5c7c0()*0.242883);
}

double NNfunction_NN_2_7::synapse0x1d70e80() {
   return (neuron0x1d5cb00()*0.881363);
}

double NNfunction_NN_2_7::synapse0x1d70ec0() {
   return (neuron0x1d5ce40()*-0.185724);
}

double NNfunction_NN_2_7::synapse0x1d70f00() {
   return (neuron0x1d5d180()*-0.252407);
}

double NNfunction_NN_2_7::synapse0x1d70f40() {
   return (neuron0x1d5d4c0()*0.103139);
}

double NNfunction_NN_2_7::synapse0x1d70f80() {
   return (neuron0x1d5d800()*-0.367655);
}

double NNfunction_NN_2_7::synapse0x1d70a10() {
   return (neuron0x1d5db40()*-0.121641);
}

double NNfunction_NN_2_7::synapse0x1d70a50() {
   return (neuron0x1d5e0a0()*0.137297);
}

double NNfunction_NN_2_7::synapse0x1d710d0() {
   return (neuron0x1d5e2c0()*-0.0955074);
}

double NNfunction_NN_2_7::synapse0x1d71110() {
   return (neuron0x1d5e600()*0.169746);
}

double NNfunction_NN_2_7::synapse0x1d71150() {
   return (neuron0x1d5e940()*-0.248309);
}

double NNfunction_NN_2_7::synapse0x1d71190() {
   return (neuron0x1d5ec80()*0.190829);
}

double NNfunction_NN_2_7::synapse0x1d711d0() {
   return (neuron0x1d5efc0()*-0.290705);
}

double NNfunction_NN_2_7::synapse0x1d71210() {
   return (neuron0x1d5f300()*2.08598);
}

double NNfunction_NN_2_7::synapse0x1d71590() {
   return (neuron0x1d5a740()*-0.0366583);
}

double NNfunction_NN_2_7::synapse0x1d715d0() {
   return (neuron0x1d5aa80()*-2.7253);
}

double NNfunction_NN_2_7::synapse0x1d71610() {
   return (neuron0x1d5adc0()*1.69901);
}

double NNfunction_NN_2_7::synapse0x1d71650() {
   return (neuron0x1d5b100()*0.127475);
}

double NNfunction_NN_2_7::synapse0x1d71690() {
   return (neuron0x1d5b440()*-0.121577);
}

double NNfunction_NN_2_7::synapse0x1d716d0() {
   return (neuron0x1d5b780()*-0.121114);
}

double NNfunction_NN_2_7::synapse0x1d71710() {
   return (neuron0x1d5bac0()*0.0368373);
}

double NNfunction_NN_2_7::synapse0x1d71750() {
   return (neuron0x1d5be00()*0.0252361);
}

double NNfunction_NN_2_7::synapse0x1d71790() {
   return (neuron0x1d5c140()*0.0596761);
}

double NNfunction_NN_2_7::synapse0x1d717d0() {
   return (neuron0x1d5c480()*-0.0116479);
}

double NNfunction_NN_2_7::synapse0x1d71810() {
   return (neuron0x1d5c7c0()*0.0579838);
}

double NNfunction_NN_2_7::synapse0x1d71850() {
   return (neuron0x1d5cb00()*0.212857);
}

double NNfunction_NN_2_7::synapse0x1d71890() {
   return (neuron0x1d5ce40()*0.119648);
}

double NNfunction_NN_2_7::synapse0x1d718d0() {
   return (neuron0x1d5d180()*0.10311);
}

double NNfunction_NN_2_7::synapse0x1d71910() {
   return (neuron0x1d5d4c0()*-0.0190621);
}

double NNfunction_NN_2_7::synapse0x1d71950() {
   return (neuron0x1d5d800()*-0.0190438);
}

double NNfunction_NN_2_7::synapse0x1d713e0() {
   return (neuron0x1d5db40()*0.0335154);
}

double NNfunction_NN_2_7::synapse0x1d71420() {
   return (neuron0x1d5e0a0()*0.13335);
}

double NNfunction_NN_2_7::synapse0x1d71aa0() {
   return (neuron0x1d5e2c0()*0.054784);
}

double NNfunction_NN_2_7::synapse0x1d71ae0() {
   return (neuron0x1d5e600()*-0.00747682);
}

double NNfunction_NN_2_7::synapse0x1d71b20() {
   return (neuron0x1d5e940()*-0.0292429);
}

double NNfunction_NN_2_7::synapse0x1d71b60() {
   return (neuron0x1d5ec80()*0.0188712);
}

double NNfunction_NN_2_7::synapse0x1d71ba0() {
   return (neuron0x1d5efc0()*0.0136885);
}

double NNfunction_NN_2_7::synapse0x1d71be0() {
   return (neuron0x1d5f300()*0.0263896);
}

double NNfunction_NN_2_7::synapse0x1d71f60() {
   return (neuron0x1d5a740()*-0.0209514);
}

double NNfunction_NN_2_7::synapse0x1d71fa0() {
   return (neuron0x1d5aa80()*8.13147);
}

double NNfunction_NN_2_7::synapse0x1d71fe0() {
   return (neuron0x1d5adc0()*-0.691221);
}

double NNfunction_NN_2_7::synapse0x1d72020() {
   return (neuron0x1d5b100()*-0.0605071);
}

double NNfunction_NN_2_7::synapse0x1d72060() {
   return (neuron0x1d5b440()*0.078876);
}

double NNfunction_NN_2_7::synapse0x1d720a0() {
   return (neuron0x1d5b780()*0.115378);
}

double NNfunction_NN_2_7::synapse0x1d720e0() {
   return (neuron0x1d5bac0()*0.0169503);
}

double NNfunction_NN_2_7::synapse0x1d72120() {
   return (neuron0x1d5be00()*-0.0665131);
}

double NNfunction_NN_2_7::synapse0x1d72160() {
   return (neuron0x1d5c140()*0.0644944);
}

double NNfunction_NN_2_7::synapse0x1d721a0() {
   return (neuron0x1d5c480()*-0.00309816);
}

double NNfunction_NN_2_7::synapse0x1d721e0() {
   return (neuron0x1d5c7c0()*-0.0689881);
}

double NNfunction_NN_2_7::synapse0x1d72220() {
   return (neuron0x1d5cb00()*-0.0903478);
}

double NNfunction_NN_2_7::synapse0x1d72260() {
   return (neuron0x1d5ce40()*-0.0264048);
}

double NNfunction_NN_2_7::synapse0x1d722a0() {
   return (neuron0x1d5d180()*0.101647);
}

double NNfunction_NN_2_7::synapse0x1d722e0() {
   return (neuron0x1d5d4c0()*-0.0582048);
}

double NNfunction_NN_2_7::synapse0x1d72320() {
   return (neuron0x1d5d800()*0.0333533);
}

double NNfunction_NN_2_7::synapse0x1d71db0() {
   return (neuron0x1d5db40()*0.100655);
}

double NNfunction_NN_2_7::synapse0x1d71df0() {
   return (neuron0x1d5e0a0()*0.0149842);
}

double NNfunction_NN_2_7::synapse0x1d72470() {
   return (neuron0x1d5e2c0()*-0.0446519);
}

double NNfunction_NN_2_7::synapse0x1d724b0() {
   return (neuron0x1d5e600()*-0.0924943);
}

double NNfunction_NN_2_7::synapse0x1d724f0() {
   return (neuron0x1d5e940()*0.113372);
}

double NNfunction_NN_2_7::synapse0x1d72530() {
   return (neuron0x1d5ec80()*-0.0535555);
}

double NNfunction_NN_2_7::synapse0x1d72570() {
   return (neuron0x1d5efc0()*-0.096647);
}

double NNfunction_NN_2_7::synapse0x1d725b0() {
   return (neuron0x1d5f300()*-2.28054);
}

double NNfunction_NN_2_7::synapse0x1d72930() {
   return (neuron0x1d5a740()*-0.0231123);
}

double NNfunction_NN_2_7::synapse0x1d72970() {
   return (neuron0x1d5aa80()*-1.5611);
}

double NNfunction_NN_2_7::synapse0x1d729b0() {
   return (neuron0x1d5adc0()*2.41843);
}

double NNfunction_NN_2_7::synapse0x1d729f0() {
   return (neuron0x1d5b100()*-0.0377948);
}

double NNfunction_NN_2_7::synapse0x1d72a30() {
   return (neuron0x1d5b440()*-0.084299);
}

double NNfunction_NN_2_7::synapse0x1d72a70() {
   return (neuron0x1d5b780()*-0.037867);
}

double NNfunction_NN_2_7::synapse0x1d72ab0() {
   return (neuron0x1d5bac0()*-0.0485266);
}

double NNfunction_NN_2_7::synapse0x1d72af0() {
   return (neuron0x1d5be00()*0.109056);
}

double NNfunction_NN_2_7::synapse0x1d72b30() {
   return (neuron0x1d5c140()*-0.0782731);
}

double NNfunction_NN_2_7::synapse0x1d72b70() {
   return (neuron0x1d5c480()*0.0367727);
}

double NNfunction_NN_2_7::synapse0x1d72bb0() {
   return (neuron0x1d5c7c0()*0.0374848);
}

double NNfunction_NN_2_7::synapse0x1d72bf0() {
   return (neuron0x1d5cb00()*-0.00352607);
}

double NNfunction_NN_2_7::synapse0x1d72c30() {
   return (neuron0x1d5ce40()*-0.0182852);
}

double NNfunction_NN_2_7::synapse0x1d72c70() {
   return (neuron0x1d5d180()*-0.0915436);
}

double NNfunction_NN_2_7::synapse0x1d72cb0() {
   return (neuron0x1d5d4c0()*0.0399395);
}

double NNfunction_NN_2_7::synapse0x1d72cf0() {
   return (neuron0x1d5d800()*-0.0342414);
}

double NNfunction_NN_2_7::synapse0x1d72780() {
   return (neuron0x1d5db40()*-0.00527737);
}

double NNfunction_NN_2_7::synapse0x1d727c0() {
   return (neuron0x1d5e0a0()*-0.0434988);
}

double NNfunction_NN_2_7::synapse0x1d72e40() {
   return (neuron0x1d5e2c0()*0.0688952);
}

double NNfunction_NN_2_7::synapse0x1d72e80() {
   return (neuron0x1d5e600()*0.0544479);
}

double NNfunction_NN_2_7::synapse0x1d72ec0() {
   return (neuron0x1d5e940()*-0.0985856);
}

double NNfunction_NN_2_7::synapse0x1d72f00() {
   return (neuron0x1d5ec80()*-0.0345314);
}

double NNfunction_NN_2_7::synapse0x1d72f40() {
   return (neuron0x1d5efc0()*0.0165944);
}

double NNfunction_NN_2_7::synapse0x1d72f80() {
   return (neuron0x1d5f300()*5.2569);
}

double NNfunction_NN_2_7::synapse0x1d73300() {
   return (neuron0x1d5a740()*0.0411958);
}

double NNfunction_NN_2_7::synapse0x1d73340() {
   return (neuron0x1d5aa80()*0.15032);
}

double NNfunction_NN_2_7::synapse0x1d73380() {
   return (neuron0x1d5adc0()*-0.469861);
}

double NNfunction_NN_2_7::synapse0x1d733c0() {
   return (neuron0x1d5b100()*0.0783021);
}

double NNfunction_NN_2_7::synapse0x1d73400() {
   return (neuron0x1d5b440()*0.633117);
}

double NNfunction_NN_2_7::synapse0x1d73440() {
   return (neuron0x1d5b780()*0.222497);
}

double NNfunction_NN_2_7::synapse0x1d73480() {
   return (neuron0x1d5bac0()*0.603714);
}

double NNfunction_NN_2_7::synapse0x1d734c0() {
   return (neuron0x1d5be00()*-0.673117);
}

double NNfunction_NN_2_7::synapse0x1d73500() {
   return (neuron0x1d5c140()*0.217758);
}

double NNfunction_NN_2_7::synapse0x1d73540() {
   return (neuron0x1d5c480()*0.480408);
}

double NNfunction_NN_2_7::synapse0x1d73580() {
   return (neuron0x1d5c7c0()*-0.43009);
}

double NNfunction_NN_2_7::synapse0x1d735c0() {
   return (neuron0x1d5cb00()*-0.434521);
}

double NNfunction_NN_2_7::synapse0x1d73600() {
   return (neuron0x1d5ce40()*-0.707091);
}

double NNfunction_NN_2_7::synapse0x1d73640() {
   return (neuron0x1d5d180()*-0.303842);
}

double NNfunction_NN_2_7::synapse0x1d73680() {
   return (neuron0x1d5d4c0()*-0.0318573);
}

double NNfunction_NN_2_7::synapse0x1d736c0() {
   return (neuron0x1d5d800()*-0.0444427);
}

double NNfunction_NN_2_7::synapse0x1d73150() {
   return (neuron0x1d5db40()*0.330788);
}

double NNfunction_NN_2_7::synapse0x1d73190() {
   return (neuron0x1d5e0a0()*0.275477);
}

double NNfunction_NN_2_7::synapse0x1d73810() {
   return (neuron0x1d5e2c0()*0.205643);
}

double NNfunction_NN_2_7::synapse0x1d73850() {
   return (neuron0x1d5e600()*-0.0467763);
}

double NNfunction_NN_2_7::synapse0x1d73890() {
   return (neuron0x1d5e940()*-0.250467);
}

double NNfunction_NN_2_7::synapse0x1d738d0() {
   return (neuron0x1d5ec80()*-0.205521);
}

double NNfunction_NN_2_7::synapse0x1d73910() {
   return (neuron0x1d5efc0()*-0.00996489);
}

double NNfunction_NN_2_7::synapse0x1d73950() {
   return (neuron0x1d5f300()*-0.464028);
}

double NNfunction_NN_2_7::synapse0x1d73cd0() {
   return (neuron0x1d5a740()*0.197134);
}

double NNfunction_NN_2_7::synapse0x1d73d10() {
   return (neuron0x1d5aa80()*-0.000708915);
}

double NNfunction_NN_2_7::synapse0x1d73d50() {
   return (neuron0x1d5adc0()*5.01254);
}

double NNfunction_NN_2_7::synapse0x1d73d90() {
   return (neuron0x1d5b100()*0.0385557);
}

double NNfunction_NN_2_7::synapse0x1d73dd0() {
   return (neuron0x1d5b440()*-0.00994061);
}

double NNfunction_NN_2_7::synapse0x1d73e10() {
   return (neuron0x1d5b780()*-0.0116146);
}

double NNfunction_NN_2_7::synapse0x1d73e50() {
   return (neuron0x1d5bac0()*-0.0275706);
}

double NNfunction_NN_2_7::synapse0x1d73e90() {
   return (neuron0x1d5be00()*-0.0299131);
}

double NNfunction_NN_2_7::synapse0x1d73ed0() {
   return (neuron0x1d5c140()*-0.0188645);
}

double NNfunction_NN_2_7::synapse0x1d73f10() {
   return (neuron0x1d5c480()*-0.0243765);
}

double NNfunction_NN_2_7::synapse0x1d73f50() {
   return (neuron0x1d5c7c0()*-0.0195291);
}

double NNfunction_NN_2_7::synapse0x1d73f90() {
   return (neuron0x1d5cb00()*0.335326);
}

double NNfunction_NN_2_7::synapse0x1d73fd0() {
   return (neuron0x1d5ce40()*0.0311835);
}

double NNfunction_NN_2_7::synapse0x1d74010() {
   return (neuron0x1d5d180()*0.00360932);
}

double NNfunction_NN_2_7::synapse0x1d74050() {
   return (neuron0x1d5d4c0()*0.0124496);
}

double NNfunction_NN_2_7::synapse0x1d74090() {
   return (neuron0x1d5d800()*0.0261388);
}

double NNfunction_NN_2_7::synapse0x1d73b20() {
   return (neuron0x1d5db40()*-0.0520673);
}

double NNfunction_NN_2_7::synapse0x1d73b60() {
   return (neuron0x1d5e0a0()*-0.000278705);
}

double NNfunction_NN_2_7::synapse0x1d741e0() {
   return (neuron0x1d5e2c0()*0.0353319);
}

double NNfunction_NN_2_7::synapse0x1d74220() {
   return (neuron0x1d5e600()*0.0191821);
}

double NNfunction_NN_2_7::synapse0x1d74260() {
   return (neuron0x1d5e940()*-0.0394775);
}

double NNfunction_NN_2_7::synapse0x1d742a0() {
   return (neuron0x1d5ec80()*0.0317282);
}

double NNfunction_NN_2_7::synapse0x1d742e0() {
   return (neuron0x1d5efc0()*-0.00702174);
}

double NNfunction_NN_2_7::synapse0x1d74320() {
   return (neuron0x1d5f300()*7.21893);
}

double NNfunction_NN_2_7::synapse0x1d746a0() {
   return (neuron0x1d5a740()*-0.120511);
}

double NNfunction_NN_2_7::synapse0x1d746e0() {
   return (neuron0x1d5aa80()*0.777027);
}

double NNfunction_NN_2_7::synapse0x1d74720() {
   return (neuron0x1d5adc0()*0.205854);
}

double NNfunction_NN_2_7::synapse0x1d74760() {
   return (neuron0x1d5b100()*-0.247382);
}

double NNfunction_NN_2_7::synapse0x1d747a0() {
   return (neuron0x1d5b440()*-0.115837);
}

double NNfunction_NN_2_7::synapse0x1d747e0() {
   return (neuron0x1d5b780()*0.0426418);
}

double NNfunction_NN_2_7::synapse0x1d74820() {
   return (neuron0x1d5bac0()*-0.405689);
}

double NNfunction_NN_2_7::synapse0x1d74860() {
   return (neuron0x1d5be00()*0.585071);
}

double NNfunction_NN_2_7::synapse0x1d748a0() {
   return (neuron0x1d5c140()*0.00813263);
}

double NNfunction_NN_2_7::synapse0x1d748e0() {
   return (neuron0x1d5c480()*-0.19066);
}

double NNfunction_NN_2_7::synapse0x1d74920() {
   return (neuron0x1d5c7c0()*-0.349461);
}

double NNfunction_NN_2_7::synapse0x1d74960() {
   return (neuron0x1d5cb00()*0.445122);
}

double NNfunction_NN_2_7::synapse0x1d749a0() {
   return (neuron0x1d5ce40()*0.0443013);
}

double NNfunction_NN_2_7::synapse0x1d749e0() {
   return (neuron0x1d5d180()*-0.154306);
}

double NNfunction_NN_2_7::synapse0x1d74a20() {
   return (neuron0x1d5d4c0()*0.218854);
}

double NNfunction_NN_2_7::synapse0x1d74a60() {
   return (neuron0x1d5d800()*0.0617597);
}

double NNfunction_NN_2_7::synapse0x1d744f0() {
   return (neuron0x1d5db40()*0.059213);
}

double NNfunction_NN_2_7::synapse0x1d74530() {
   return (neuron0x1d5e0a0()*-0.00613679);
}

double NNfunction_NN_2_7::synapse0x1d74bb0() {
   return (neuron0x1d5e2c0()*0.18193);
}

double NNfunction_NN_2_7::synapse0x1d74bf0() {
   return (neuron0x1d5e600()*0.0255758);
}

double NNfunction_NN_2_7::synapse0x1d74c30() {
   return (neuron0x1d5e940()*-0.0305794);
}

double NNfunction_NN_2_7::synapse0x1d74c70() {
   return (neuron0x1d5ec80()*-0.268123);
}

double NNfunction_NN_2_7::synapse0x1d74cb0() {
   return (neuron0x1d5efc0()*0.366676);
}

double NNfunction_NN_2_7::synapse0x1d74cf0() {
   return (neuron0x1d5f300()*0.265053);
}

double NNfunction_NN_2_7::synapse0x1d75070() {
   return (neuron0x1d5a740()*-0.0328937);
}

double NNfunction_NN_2_7::synapse0x1d69640() {
   return (neuron0x1d5aa80()*-16.5719);
}

double NNfunction_NN_2_7::synapse0x1d69680() {
   return (neuron0x1d5adc0()*5.77505);
}

double NNfunction_NN_2_7::synapse0x1d696c0() {
   return (neuron0x1d5b100()*-0.0253983);
}

double NNfunction_NN_2_7::synapse0x1d69910() {
   return (neuron0x1d5b440()*-0.00760916);
}

double NNfunction_NN_2_7::synapse0x1d69950() {
   return (neuron0x1d5b780()*0.0348492);
}

double NNfunction_NN_2_7::synapse0x1d69990() {
   return (neuron0x1d5bac0()*-0.0329779);
}

double NNfunction_NN_2_7::synapse0x1d69be0() {
   return (neuron0x1d5be00()*-0.00410942);
}

double NNfunction_NN_2_7::synapse0x1d69c20() {
   return (neuron0x1d5c140()*-0.0071569);
}

double NNfunction_NN_2_7::synapse0x1d69e70() {
   return (neuron0x1d5c480()*-0.00022283);
}

double NNfunction_NN_2_7::synapse0x1d69eb0() {
   return (neuron0x1d5c7c0()*-0.00205098);
}

double NNfunction_NN_2_7::synapse0x1d69ef0() {
   return (neuron0x1d5cb00()*0.0556468);
}

double NNfunction_NN_2_7::synapse0x1d6a140() {
   return (neuron0x1d5ce40()*-0.00806373);
}

double NNfunction_NN_2_7::synapse0x1d6a180() {
   return (neuron0x1d5d180()*6.74454e-05);
}

double NNfunction_NN_2_7::synapse0x1d6a3d0() {
   return (neuron0x1d5d4c0()*-0.00334816);
}

double NNfunction_NN_2_7::synapse0x1d6a410() {
   return (neuron0x1d5d800()*0.00190822);
}

double NNfunction_NN_2_7::synapse0x1d74ec0() {
   return (neuron0x1d5db40()*0.029805);
}

double NNfunction_NN_2_7::synapse0x1d74f00() {
   return (neuron0x1d5e0a0()*-0.0108519);
}

double NNfunction_NN_2_7::synapse0x1d6a560() {
   return (neuron0x1d5e2c0()*-0.024732);
}

double NNfunction_NN_2_7::synapse0x1d6aa70() {
   return (neuron0x1d5e600()*-0.0379497);
}

double NNfunction_NN_2_7::synapse0x1d6aab0() {
   return (neuron0x1d5e940()*-0.0170231);
}

double NNfunction_NN_2_7::synapse0x1d6aaf0() {
   return (neuron0x1d5ec80()*-0.0517593);
}

double NNfunction_NN_2_7::synapse0x1d6ad40() {
   return (neuron0x1d5efc0()*0.0158948);
}

double NNfunction_NN_2_7::synapse0x1d6ad80() {
   return (neuron0x1d5f300()*0.023706);
}

double NNfunction_NN_2_7::synapse0x1d6a630() {
   return (neuron0x1d5a740()*0.116937);
}

double NNfunction_NN_2_7::synapse0x1d6a670() {
   return (neuron0x1d5aa80()*-0.50453);
}

double NNfunction_NN_2_7::synapse0x1d6a6b0() {
   return (neuron0x1d5adc0()*-0.0508008);
}

double NNfunction_NN_2_7::synapse0x1d6a6f0() {
   return (neuron0x1d5b100()*-0.108319);
}

double NNfunction_NN_2_7::synapse0x1d6b070() {
   return (neuron0x1d5b440()*0.534759);
}

double NNfunction_NN_2_7::synapse0x1d773c0() {
   return (neuron0x1d5b780()*-0.228842);
}

double NNfunction_NN_2_7::synapse0x1d77400() {
   return (neuron0x1d5bac0()*0.248652);
}

double NNfunction_NN_2_7::synapse0x1d77440() {
   return (neuron0x1d5be00()*-0.110749);
}

double NNfunction_NN_2_7::synapse0x1d77480() {
   return (neuron0x1d5c140()*-0.288399);
}

double NNfunction_NN_2_7::synapse0x1d774c0() {
   return (neuron0x1d5c480()*0.00288674);
}

double NNfunction_NN_2_7::synapse0x1d77500() {
   return (neuron0x1d5c7c0()*0.224643);
}

double NNfunction_NN_2_7::synapse0x1d77540() {
   return (neuron0x1d5cb00()*-0.0460864);
}

double NNfunction_NN_2_7::synapse0x1d77580() {
   return (neuron0x1d5ce40()*-0.0684858);
}

double NNfunction_NN_2_7::synapse0x1d775c0() {
   return (neuron0x1d5d180()*-0.0976152);
}

double NNfunction_NN_2_7::synapse0x1d77600() {
   return (neuron0x1d5d4c0()*-0.239604);
}

double NNfunction_NN_2_7::synapse0x1d77640() {
   return (neuron0x1d5d800()*0.169686);
}

double NNfunction_NN_2_7::synapse0x1d6af50() {
   return (neuron0x1d5db40()*-0.0504472);
}

double NNfunction_NN_2_7::synapse0x1d6af90() {
   return (neuron0x1d5e0a0()*-0.291166);
}

double NNfunction_NN_2_7::synapse0x1d77790() {
   return (neuron0x1d5e2c0()*0.0596024);
}

double NNfunction_NN_2_7::synapse0x1d777d0() {
   return (neuron0x1d5e600()*0.0475141);
}

double NNfunction_NN_2_7::synapse0x1d77810() {
   return (neuron0x1d5e940()*0.0662912);
}

double NNfunction_NN_2_7::synapse0x1d77850() {
   return (neuron0x1d5ec80()*0.0972002);
}

double NNfunction_NN_2_7::synapse0x1d77890() {
   return (neuron0x1d5efc0()*-0.233826);
}

double NNfunction_NN_2_7::synapse0x1d778d0() {
   return (neuron0x1d5f300()*-0.90061);
}

double NNfunction_NN_2_7::synapse0x1d77c50() {
   return (neuron0x1d5a740()*0.116929);
}

double NNfunction_NN_2_7::synapse0x1d77c90() {
   return (neuron0x1d5aa80()*0.442097);
}

double NNfunction_NN_2_7::synapse0x1d77cd0() {
   return (neuron0x1d5adc0()*-0.0588122);
}

double NNfunction_NN_2_7::synapse0x1d77d10() {
   return (neuron0x1d5b100()*-0.143119);
}

double NNfunction_NN_2_7::synapse0x1d77d50() {
   return (neuron0x1d5b440()*-0.090099);
}

double NNfunction_NN_2_7::synapse0x1d77d90() {
   return (neuron0x1d5b780()*0.0405111);
}

double NNfunction_NN_2_7::synapse0x1d77dd0() {
   return (neuron0x1d5bac0()*0.31978);
}

double NNfunction_NN_2_7::synapse0x1d77e10() {
   return (neuron0x1d5be00()*-0.546129);
}

double NNfunction_NN_2_7::synapse0x1d77e50() {
   return (neuron0x1d5c140()*0.485638);
}

double NNfunction_NN_2_7::synapse0x1d77e90() {
   return (neuron0x1d5c480()*-0.0622419);
}

double NNfunction_NN_2_7::synapse0x1d77ed0() {
   return (neuron0x1d5c7c0()*0.120807);
}

double NNfunction_NN_2_7::synapse0x1d77f10() {
   return (neuron0x1d5cb00()*-0.0459257);
}

double NNfunction_NN_2_7::synapse0x1d77f50() {
   return (neuron0x1d5ce40()*0.262165);
}

double NNfunction_NN_2_7::synapse0x1d77f90() {
   return (neuron0x1d5d180()*0.148374);
}

double NNfunction_NN_2_7::synapse0x1d77fd0() {
   return (neuron0x1d5d4c0()*0.213986);
}

double NNfunction_NN_2_7::synapse0x1d78010() {
   return (neuron0x1d5d800()*-0.0872189);
}

double NNfunction_NN_2_7::synapse0x1d77aa0() {
   return (neuron0x1d5db40()*0.0236026);
}

double NNfunction_NN_2_7::synapse0x1d77ae0() {
   return (neuron0x1d5e0a0()*0.371566);
}

double NNfunction_NN_2_7::synapse0x1d78160() {
   return (neuron0x1d5e2c0()*0.459259);
}

double NNfunction_NN_2_7::synapse0x1d781a0() {
   return (neuron0x1d5e600()*-0.461587);
}

double NNfunction_NN_2_7::synapse0x1d781e0() {
   return (neuron0x1d5e940()*0.284528);
}

double NNfunction_NN_2_7::synapse0x1d78220() {
   return (neuron0x1d5ec80()*0.564975);
}

double NNfunction_NN_2_7::synapse0x1d78260() {
   return (neuron0x1d5efc0()*-0.153481);
}

double NNfunction_NN_2_7::synapse0x1d782a0() {
   return (neuron0x1d5f300()*-0.983564);
}

double NNfunction_NN_2_7::synapse0x1d78620() {
   return (neuron0x1d5a740()*0.0512834);
}

double NNfunction_NN_2_7::synapse0x1d78660() {
   return (neuron0x1d5aa80()*0.0771531);
}

double NNfunction_NN_2_7::synapse0x1d786a0() {
   return (neuron0x1d5adc0()*-0.822945);
}

double NNfunction_NN_2_7::synapse0x1d786e0() {
   return (neuron0x1d5b100()*0.057446);
}

double NNfunction_NN_2_7::synapse0x1d78720() {
   return (neuron0x1d5b440()*0.114437);
}

double NNfunction_NN_2_7::synapse0x1d78760() {
   return (neuron0x1d5b780()*0.12892);
}

double NNfunction_NN_2_7::synapse0x1d787a0() {
   return (neuron0x1d5bac0()*0.043927);
}

double NNfunction_NN_2_7::synapse0x1d787e0() {
   return (neuron0x1d5be00()*0.214171);
}

double NNfunction_NN_2_7::synapse0x1d78820() {
   return (neuron0x1d5c140()*0.199415);
}

double NNfunction_NN_2_7::synapse0x1d78860() {
   return (neuron0x1d5c480()*-0.442428);
}

double NNfunction_NN_2_7::synapse0x1d788a0() {
   return (neuron0x1d5c7c0()*-0.133158);
}

double NNfunction_NN_2_7::synapse0x1d788e0() {
   return (neuron0x1d5cb00()*-0.208767);
}

double NNfunction_NN_2_7::synapse0x1d78920() {
   return (neuron0x1d5ce40()*-0.282604);
}

double NNfunction_NN_2_7::synapse0x1d78960() {
   return (neuron0x1d5d180()*0.172665);
}

double NNfunction_NN_2_7::synapse0x1d789a0() {
   return (neuron0x1d5d4c0()*0.142991);
}

double NNfunction_NN_2_7::synapse0x1d789e0() {
   return (neuron0x1d5d800()*0.126231);
}

double NNfunction_NN_2_7::synapse0x1d78470() {
   return (neuron0x1d5db40()*0.184158);
}

double NNfunction_NN_2_7::synapse0x1d784b0() {
   return (neuron0x1d5e0a0()*-0.138408);
}

double NNfunction_NN_2_7::synapse0x1d78b30() {
   return (neuron0x1d5e2c0()*-0.23462);
}

double NNfunction_NN_2_7::synapse0x1d78b70() {
   return (neuron0x1d5e600()*0.112068);
}

double NNfunction_NN_2_7::synapse0x1d78bb0() {
   return (neuron0x1d5e940()*-0.0798646);
}

double NNfunction_NN_2_7::synapse0x1d78bf0() {
   return (neuron0x1d5ec80()*-0.215834);
}

double NNfunction_NN_2_7::synapse0x1d78c30() {
   return (neuron0x1d5efc0()*-0.151276);
}

double NNfunction_NN_2_7::synapse0x1d78c70() {
   return (neuron0x1d5f300()*-1.43313);
}

double NNfunction_NN_2_7::synapse0x1d78ff0() {
   return (neuron0x1d5a740()*0.0848898);
}

double NNfunction_NN_2_7::synapse0x1d79030() {
   return (neuron0x1d5aa80()*0.110834);
}

double NNfunction_NN_2_7::synapse0x1d79070() {
   return (neuron0x1d5adc0()*0.290641);
}

double NNfunction_NN_2_7::synapse0x1d790b0() {
   return (neuron0x1d5b100()*0.00370263);
}

double NNfunction_NN_2_7::synapse0x1d790f0() {
   return (neuron0x1d5b440()*-0.00940461);
}

double NNfunction_NN_2_7::synapse0x1d79130() {
   return (neuron0x1d5b780()*-0.00745867);
}

double NNfunction_NN_2_7::synapse0x1d79170() {
   return (neuron0x1d5bac0()*-0.0151069);
}

double NNfunction_NN_2_7::synapse0x1d791b0() {
   return (neuron0x1d5be00()*-0.00608526);
}

double NNfunction_NN_2_7::synapse0x1d791f0() {
   return (neuron0x1d5c140()*0.000836665);
}

double NNfunction_NN_2_7::synapse0x1d79230() {
   return (neuron0x1d5c480()*0.00163022);
}

double NNfunction_NN_2_7::synapse0x1d79270() {
   return (neuron0x1d5c7c0()*0.0169825);
}

double NNfunction_NN_2_7::synapse0x1d792b0() {
   return (neuron0x1d5cb00()*0.0252734);
}

double NNfunction_NN_2_7::synapse0x1d792f0() {
   return (neuron0x1d5ce40()*0.0062264);
}

double NNfunction_NN_2_7::synapse0x1d79330() {
   return (neuron0x1d5d180()*0.00755467);
}

double NNfunction_NN_2_7::synapse0x1d79370() {
   return (neuron0x1d5d4c0()*-0.00144158);
}

double NNfunction_NN_2_7::synapse0x1d793b0() {
   return (neuron0x1d5d800()*-0.0132993);
}

double NNfunction_NN_2_7::synapse0x1d78e40() {
   return (neuron0x1d5db40()*-0.00382221);
}

double NNfunction_NN_2_7::synapse0x1d78e80() {
   return (neuron0x1d5e0a0()*0.00695047);
}

double NNfunction_NN_2_7::synapse0x1d79500() {
   return (neuron0x1d5e2c0()*0.0132662);
}

double NNfunction_NN_2_7::synapse0x1d79540() {
   return (neuron0x1d5e600()*0.0394624);
}

double NNfunction_NN_2_7::synapse0x1d79580() {
   return (neuron0x1d5e940()*-0.0281123);
}

double NNfunction_NN_2_7::synapse0x1d795c0() {
   return (neuron0x1d5ec80()*0.00996709);
}

double NNfunction_NN_2_7::synapse0x1d79600() {
   return (neuron0x1d5efc0()*-0.00388383);
}

double NNfunction_NN_2_7::synapse0x1d79640() {
   return (neuron0x1d5f300()*-3.6387);
}

double NNfunction_NN_2_7::synapse0x1d799c0() {
   return (neuron0x1d5a740()*0.0412537);
}

double NNfunction_NN_2_7::synapse0x1d79a00() {
   return (neuron0x1d5aa80()*-2.48329);
}

double NNfunction_NN_2_7::synapse0x1d79a40() {
   return (neuron0x1d5adc0()*1.45986);
}

double NNfunction_NN_2_7::synapse0x1d79a80() {
   return (neuron0x1d5b100()*0.100826);
}

double NNfunction_NN_2_7::synapse0x1d79ac0() {
   return (neuron0x1d5b440()*-0.0557426);
}

double NNfunction_NN_2_7::synapse0x1d79b00() {
   return (neuron0x1d5b780()*0.0261337);
}

double NNfunction_NN_2_7::synapse0x1d79b40() {
   return (neuron0x1d5bac0()*0.0824112);
}

double NNfunction_NN_2_7::synapse0x1d79b80() {
   return (neuron0x1d5be00()*0.00300505);
}

double NNfunction_NN_2_7::synapse0x1d79bc0() {
   return (neuron0x1d5c140()*0.0172983);
}

double NNfunction_NN_2_7::synapse0x1d79c00() {
   return (neuron0x1d5c480()*-0.0834894);
}

double NNfunction_NN_2_7::synapse0x1d79c40() {
   return (neuron0x1d5c7c0()*0.0649359);
}

double NNfunction_NN_2_7::synapse0x1d79c80() {
   return (neuron0x1d5cb00()*0.333392);
}

double NNfunction_NN_2_7::synapse0x1d79cc0() {
   return (neuron0x1d5ce40()*0.112988);
}

double NNfunction_NN_2_7::synapse0x1d79d00() {
   return (neuron0x1d5d180()*0.0887701);
}

double NNfunction_NN_2_7::synapse0x1d79d40() {
   return (neuron0x1d5d4c0()*-0.100315);
}

double NNfunction_NN_2_7::synapse0x1d79d80() {
   return (neuron0x1d5d800()*0.00149421);
}

double NNfunction_NN_2_7::synapse0x1d79810() {
   return (neuron0x1d5db40()*0.0202004);
}

double NNfunction_NN_2_7::synapse0x1d79850() {
   return (neuron0x1d5e0a0()*0.144283);
}

double NNfunction_NN_2_7::synapse0x1d79ed0() {
   return (neuron0x1d5e2c0()*0.0408364);
}

double NNfunction_NN_2_7::synapse0x1d79f10() {
   return (neuron0x1d5e600()*-0.0346623);
}

double NNfunction_NN_2_7::synapse0x1d79f50() {
   return (neuron0x1d5e940()*0.0104228);
}

double NNfunction_NN_2_7::synapse0x1d79f90() {
   return (neuron0x1d5ec80()*0.0100521);
}

double NNfunction_NN_2_7::synapse0x1d79fd0() {
   return (neuron0x1d5efc0()*-0.0625464);
}

double NNfunction_NN_2_7::synapse0x1d7a010() {
   return (neuron0x1d5f300()*-2.0998);
}

double NNfunction_NN_2_7::synapse0x1d7a390() {
   return (neuron0x1d5a740()*-0.625152);
}

double NNfunction_NN_2_7::synapse0x1d7a3d0() {
   return (neuron0x1d5aa80()*0.744672);
}

double NNfunction_NN_2_7::synapse0x1d7a410() {
   return (neuron0x1d5adc0()*-1.09217);
}

double NNfunction_NN_2_7::synapse0x1d7a450() {
   return (neuron0x1d5b100()*0.205381);
}

double NNfunction_NN_2_7::synapse0x1d7a490() {
   return (neuron0x1d5b440()*-0.142589);
}

double NNfunction_NN_2_7::synapse0x1d7a4d0() {
   return (neuron0x1d5b780()*-0.12229);
}

double NNfunction_NN_2_7::synapse0x1d7a510() {
   return (neuron0x1d5bac0()*-0.173109);
}

double NNfunction_NN_2_7::synapse0x1d7a550() {
   return (neuron0x1d5be00()*0.468461);
}

double NNfunction_NN_2_7::synapse0x1d7a590() {
   return (neuron0x1d5c140()*-0.259677);
}

double NNfunction_NN_2_7::synapse0x1d7a5d0() {
   return (neuron0x1d5c480()*-0.0312495);
}

double NNfunction_NN_2_7::synapse0x1d7a610() {
   return (neuron0x1d5c7c0()*-0.011028);
}

double NNfunction_NN_2_7::synapse0x1d7a650() {
   return (neuron0x1d5cb00()*-0.0524725);
}

double NNfunction_NN_2_7::synapse0x1d7a690() {
   return (neuron0x1d5ce40()*-0.0480605);
}

double NNfunction_NN_2_7::synapse0x1d7a6d0() {
   return (neuron0x1d5d180()*0.0457714);
}

double NNfunction_NN_2_7::synapse0x1d7a710() {
   return (neuron0x1d5d4c0()*-0.537356);
}

double NNfunction_NN_2_7::synapse0x1d7a750() {
   return (neuron0x1d5d800()*0.26622);
}

double NNfunction_NN_2_7::synapse0x1d7a1e0() {
   return (neuron0x1d5db40()*0.361507);
}

double NNfunction_NN_2_7::synapse0x1d7a220() {
   return (neuron0x1d5e0a0()*-0.027677);
}

double NNfunction_NN_2_7::synapse0x1d7a8a0() {
   return (neuron0x1d5e2c0()*-0.0982364);
}

double NNfunction_NN_2_7::synapse0x1d7a8e0() {
   return (neuron0x1d5e600()*0.242996);
}

double NNfunction_NN_2_7::synapse0x1d7a920() {
   return (neuron0x1d5e940()*0.257687);
}

double NNfunction_NN_2_7::synapse0x1d7a960() {
   return (neuron0x1d5ec80()*-0.181549);
}

double NNfunction_NN_2_7::synapse0x1d7a9a0() {
   return (neuron0x1d5efc0()*0.284212);
}

double NNfunction_NN_2_7::synapse0x1d7a9e0() {
   return (neuron0x1d5f300()*-0.195718);
}

double NNfunction_NN_2_7::synapse0x1d7ad60() {
   return (neuron0x1d5a740()*-0.316947);
}

double NNfunction_NN_2_7::synapse0x1d7ada0() {
   return (neuron0x1d5aa80()*-0.171129);
}

double NNfunction_NN_2_7::synapse0x1d7ade0() {
   return (neuron0x1d5adc0()*0.111874);
}

double NNfunction_NN_2_7::synapse0x1d7ae20() {
   return (neuron0x1d5b100()*0.237332);
}

double NNfunction_NN_2_7::synapse0x1d7ae60() {
   return (neuron0x1d5b440()*0.107005);
}

double NNfunction_NN_2_7::synapse0x1d7aea0() {
   return (neuron0x1d5b780()*0.0959714);
}

double NNfunction_NN_2_7::synapse0x1d7aee0() {
   return (neuron0x1d5bac0()*0.51445);
}

double NNfunction_NN_2_7::synapse0x1d7af20() {
   return (neuron0x1d5be00()*-0.350949);
}

double NNfunction_NN_2_7::synapse0x1d7af60() {
   return (neuron0x1d5c140()*0.523981);
}

double NNfunction_NN_2_7::synapse0x1d7afa0() {
   return (neuron0x1d5c480()*-0.172774);
}

double NNfunction_NN_2_7::synapse0x1d7afe0() {
   return (neuron0x1d5c7c0()*-0.103861);
}

double NNfunction_NN_2_7::synapse0x1d7b020() {
   return (neuron0x1d5cb00()*-0.314543);
}

double NNfunction_NN_2_7::synapse0x1d7b060() {
   return (neuron0x1d5ce40()*0.4613);
}

double NNfunction_NN_2_7::synapse0x1d7b0a0() {
   return (neuron0x1d5d180()*-0.0800929);
}

double NNfunction_NN_2_7::synapse0x1d7b0e0() {
   return (neuron0x1d5d4c0()*0.560481);
}

double NNfunction_NN_2_7::synapse0x1d7b120() {
   return (neuron0x1d5d800()*0.0343172);
}

double NNfunction_NN_2_7::synapse0x1d7abb0() {
   return (neuron0x1d5db40()*-0.192776);
}

double NNfunction_NN_2_7::synapse0x1d7abf0() {
   return (neuron0x1d5e0a0()*0.929505);
}

double NNfunction_NN_2_7::synapse0x1d7b270() {
   return (neuron0x1d5e2c0()*0.354792);
}

double NNfunction_NN_2_7::synapse0x1d7b2b0() {
   return (neuron0x1d5e600()*-0.0828464);
}

double NNfunction_NN_2_7::synapse0x1d7b2f0() {
   return (neuron0x1d5e940()*0.276017);
}

double NNfunction_NN_2_7::synapse0x1d7b330() {
   return (neuron0x1d5ec80()*0.0972091);
}

double NNfunction_NN_2_7::synapse0x1d7b370() {
   return (neuron0x1d5efc0()*-0.39857);
}

double NNfunction_NN_2_7::synapse0x1d7b3b0() {
   return (neuron0x1d5f300()*0.909311);
}

double NNfunction_NN_2_7::synapse0x1d7b730() {
   return (neuron0x1d5a740()*-0.320882);
}

double NNfunction_NN_2_7::synapse0x1d7b770() {
   return (neuron0x1d5aa80()*-0.799901);
}

double NNfunction_NN_2_7::synapse0x1d7b7b0() {
   return (neuron0x1d5adc0()*-0.207305);
}

double NNfunction_NN_2_7::synapse0x1d7b7f0() {
   return (neuron0x1d5b100()*-0.425548);
}

double NNfunction_NN_2_7::synapse0x1d7b830() {
   return (neuron0x1d5b440()*-0.142056);
}

double NNfunction_NN_2_7::synapse0x1d7b870() {
   return (neuron0x1d5b780()*0.473857);
}

double NNfunction_NN_2_7::synapse0x1d7b8b0() {
   return (neuron0x1d5bac0()*-0.201884);
}

double NNfunction_NN_2_7::synapse0x1d7b8f0() {
   return (neuron0x1d5be00()*0.152093);
}

double NNfunction_NN_2_7::synapse0x1d7b930() {
   return (neuron0x1d5c140()*0.334379);
}

double NNfunction_NN_2_7::synapse0x1d7b970() {
   return (neuron0x1d5c480()*0.169871);
}

double NNfunction_NN_2_7::synapse0x1d7b9b0() {
   return (neuron0x1d5c7c0()*0.0155881);
}

double NNfunction_NN_2_7::synapse0x1d7b9f0() {
   return (neuron0x1d5cb00()*-0.000190086);
}

double NNfunction_NN_2_7::synapse0x1d7ba30() {
   return (neuron0x1d5ce40()*0.332279);
}

double NNfunction_NN_2_7::synapse0x1d7ba70() {
   return (neuron0x1d5d180()*-0.166537);
}

double NNfunction_NN_2_7::synapse0x1d7bab0() {
   return (neuron0x1d5d4c0()*-0.473045);
}

double NNfunction_NN_2_7::synapse0x1d7baf0() {
   return (neuron0x1d5d800()*0.397231);
}

double NNfunction_NN_2_7::synapse0x1d7b580() {
   return (neuron0x1d5db40()*-0.106725);
}

double NNfunction_NN_2_7::synapse0x1d7b5c0() {
   return (neuron0x1d5e0a0()*-0.0201795);
}

double NNfunction_NN_2_7::synapse0x1d7bc40() {
   return (neuron0x1d5e2c0()*-0.321681);
}

double NNfunction_NN_2_7::synapse0x1d7bc80() {
   return (neuron0x1d5e600()*-0.142425);
}

double NNfunction_NN_2_7::synapse0x1d7bcc0() {
   return (neuron0x1d5e940()*0.554537);
}

double NNfunction_NN_2_7::synapse0x1d7bd00() {
   return (neuron0x1d5ec80()*0.212399);
}

double NNfunction_NN_2_7::synapse0x1d7bd40() {
   return (neuron0x1d5efc0()*-0.152238);
}

double NNfunction_NN_2_7::synapse0x1d7bd80() {
   return (neuron0x1d5f300()*-0.103993);
}

double NNfunction_NN_2_7::synapse0x1d64830() {
   return (neuron0x1d5a740()*-0.0558161);
}

double NNfunction_NN_2_7::synapse0x1d64870() {
   return (neuron0x1d5aa80()*8.85956);
}

double NNfunction_NN_2_7::synapse0x1d648b0() {
   return (neuron0x1d5adc0()*2.04992);
}

double NNfunction_NN_2_7::synapse0x1d648f0() {
   return (neuron0x1d5b100()*0.043564);
}

double NNfunction_NN_2_7::synapse0x1d64930() {
   return (neuron0x1d5b440()*-0.128875);
}

double NNfunction_NN_2_7::synapse0x1d64970() {
   return (neuron0x1d5b780()*0.0342226);
}

double NNfunction_NN_2_7::synapse0x1d649b0() {
   return (neuron0x1d5bac0()*-0.0732497);
}

double NNfunction_NN_2_7::synapse0x1d649f0() {
   return (neuron0x1d5be00()*0.0186786);
}

double NNfunction_NN_2_7::synapse0x1d7c510() {
   return (neuron0x1d5c140()*-0.0522974);
}

double NNfunction_NN_2_7::synapse0x1d7c550() {
   return (neuron0x1d5c480()*0.0472322);
}

double NNfunction_NN_2_7::synapse0x1d7c590() {
   return (neuron0x1d5c7c0()*-0.0492056);
}

double NNfunction_NN_2_7::synapse0x1d7c5d0() {
   return (neuron0x1d5cb00()*0.156919);
}

double NNfunction_NN_2_7::synapse0x1d7c610() {
   return (neuron0x1d5ce40()*0.0662531);
}

double NNfunction_NN_2_7::synapse0x1d7c650() {
   return (neuron0x1d5d180()*-0.0208371);
}

double NNfunction_NN_2_7::synapse0x1d7c690() {
   return (neuron0x1d5d4c0()*-0.000715911);
}

double NNfunction_NN_2_7::synapse0x1d7c6d0() {
   return (neuron0x1d5d800()*-0.0517043);
}

double NNfunction_NN_2_7::synapse0x1d7bf50() {
   return (neuron0x1d5db40()*0.0974307);
}

double NNfunction_NN_2_7::synapse0x1d7bf90() {
   return (neuron0x1d5e0a0()*-0.00244677);
}

double NNfunction_NN_2_7::synapse0x1d7c820() {
   return (neuron0x1d5e2c0()*0.0431087);
}

double NNfunction_NN_2_7::synapse0x1d7c860() {
   return (neuron0x1d5e600()*-0.076395);
}

double NNfunction_NN_2_7::synapse0x1d7c8a0() {
   return (neuron0x1d5e940()*-0.0632261);
}

double NNfunction_NN_2_7::synapse0x1d7c8e0() {
   return (neuron0x1d5ec80()*-0.111731);
}

double NNfunction_NN_2_7::synapse0x1d7c920() {
   return (neuron0x1d5efc0()*0.077883);
}

double NNfunction_NN_2_7::synapse0x1d7c960() {
   return (neuron0x1d5f300()*2.02233);
}

double NNfunction_NN_2_7::synapse0x1d7cce0() {
   return (neuron0x1d5a740()*0.234835);
}

double NNfunction_NN_2_7::synapse0x1d7cd20() {
   return (neuron0x1d5aa80()*-0.917617);
}

double NNfunction_NN_2_7::synapse0x1d7cd60() {
   return (neuron0x1d5adc0()*-1.10465);
}

double NNfunction_NN_2_7::synapse0x1d7cda0() {
   return (neuron0x1d5b100()*0.463413);
}

double NNfunction_NN_2_7::synapse0x1d7cde0() {
   return (neuron0x1d5b440()*0.242532);
}

double NNfunction_NN_2_7::synapse0x1d7ce20() {
   return (neuron0x1d5b780()*-0.689137);
}

double NNfunction_NN_2_7::synapse0x1d7ce60() {
   return (neuron0x1d5bac0()*0.269398);
}

double NNfunction_NN_2_7::synapse0x1d7cea0() {
   return (neuron0x1d5be00()*-0.84058);
}

double NNfunction_NN_2_7::synapse0x1d7cee0() {
   return (neuron0x1d5c140()*0.414252);
}

double NNfunction_NN_2_7::synapse0x1d7cf20() {
   return (neuron0x1d5c480()*0.615387);
}

double NNfunction_NN_2_7::synapse0x1d7cf60() {
   return (neuron0x1d5c7c0()*-0.335104);
}

double NNfunction_NN_2_7::synapse0x1d7cfa0() {
   return (neuron0x1d5cb00()*-0.758152);
}

double NNfunction_NN_2_7::synapse0x1d7cfe0() {
   return (neuron0x1d5ce40()*0.538869);
}

double NNfunction_NN_2_7::synapse0x1d7d020() {
   return (neuron0x1d5d180()*0.734429);
}

double NNfunction_NN_2_7::synapse0x1d7d060() {
   return (neuron0x1d5d4c0()*0.0723732);
}

double NNfunction_NN_2_7::synapse0x1d7d0a0() {
   return (neuron0x1d5d800()*0.113612);
}

double NNfunction_NN_2_7::synapse0x1d7cb30() {
   return (neuron0x1d5db40()*-0.376146);
}

double NNfunction_NN_2_7::synapse0x1d7cb70() {
   return (neuron0x1d5e0a0()*-0.220377);
}

double NNfunction_NN_2_7::synapse0x1d7d1f0() {
   return (neuron0x1d5e2c0()*0.342368);
}

double NNfunction_NN_2_7::synapse0x1d7d230() {
   return (neuron0x1d5e600()*0.406925);
}

double NNfunction_NN_2_7::synapse0x1d7d270() {
   return (neuron0x1d5e940()*0.115268);
}

double NNfunction_NN_2_7::synapse0x1d7d2b0() {
   return (neuron0x1d5ec80()*0.764591);
}

double NNfunction_NN_2_7::synapse0x1d7d2f0() {
   return (neuron0x1d5efc0()*0.253242);
}

double NNfunction_NN_2_7::synapse0x1d7d330() {
   return (neuron0x1d5f300()*0.0640318);
}

double NNfunction_NN_2_7::synapse0x1d7d6b0() {
   return (neuron0x1d5a740()*-0.0914646);
}

double NNfunction_NN_2_7::synapse0x1d7d6f0() {
   return (neuron0x1d5aa80()*-1.05176);
}

double NNfunction_NN_2_7::synapse0x1d7d730() {
   return (neuron0x1d5adc0()*-0.484069);
}

double NNfunction_NN_2_7::synapse0x1d7d770() {
   return (neuron0x1d5b100()*-0.363137);
}

double NNfunction_NN_2_7::synapse0x1d7d7b0() {
   return (neuron0x1d5b440()*-0.165786);
}

double NNfunction_NN_2_7::synapse0x1d7d7f0() {
   return (neuron0x1d5b780()*-0.294396);
}

double NNfunction_NN_2_7::synapse0x1d7d830() {
   return (neuron0x1d5bac0()*-0.856311);
}

double NNfunction_NN_2_7::synapse0x1d7d870() {
   return (neuron0x1d5be00()*-0.268833);
}

double NNfunction_NN_2_7::synapse0x1d7d8b0() {
   return (neuron0x1d5c140()*0.331606);
}

double NNfunction_NN_2_7::synapse0x1d7d8f0() {
   return (neuron0x1d5c480()*0.861456);
}

double NNfunction_NN_2_7::synapse0x1d7d930() {
   return (neuron0x1d5c7c0()*-0.378668);
}

double NNfunction_NN_2_7::synapse0x1d7d970() {
   return (neuron0x1d5cb00()*-1.05981);
}

double NNfunction_NN_2_7::synapse0x1d7d9b0() {
   return (neuron0x1d5ce40()*0.0767168);
}

double NNfunction_NN_2_7::synapse0x1d7d9f0() {
   return (neuron0x1d5d180()*0.269308);
}

double NNfunction_NN_2_7::synapse0x1d7da30() {
   return (neuron0x1d5d4c0()*0.0473667);
}

double NNfunction_NN_2_7::synapse0x1d7da70() {
   return (neuron0x1d5d800()*0.0448615);
}

double NNfunction_NN_2_7::synapse0x1d7d500() {
   return (neuron0x1d5db40()*-0.870151);
}

double NNfunction_NN_2_7::synapse0x1d7d540() {
   return (neuron0x1d5e0a0()*-0.292376);
}

double NNfunction_NN_2_7::synapse0x1d6e070() {
   return (neuron0x1d5e2c0()*-0.614929);
}

double NNfunction_NN_2_7::synapse0x1d6e0b0() {
   return (neuron0x1d5e600()*0.378709);
}

double NNfunction_NN_2_7::synapse0x1d6e0f0() {
   return (neuron0x1d5e940()*-0.165933);
}

double NNfunction_NN_2_7::synapse0x1d6e130() {
   return (neuron0x1d5ec80()*0.0468281);
}

double NNfunction_NN_2_7::synapse0x1d6e170() {
   return (neuron0x1d5efc0()*0.548458);
}

double NNfunction_NN_2_7::synapse0x1d6e1b0() {
   return (neuron0x1d5f300()*-1.39397);
}

double NNfunction_NN_2_7::synapse0x1d6e530() {
   return (neuron0x1d5a740()*0.00481369);
}

double NNfunction_NN_2_7::synapse0x1d6e570() {
   return (neuron0x1d5aa80()*-11.311);
}

double NNfunction_NN_2_7::synapse0x1d6e5b0() {
   return (neuron0x1d5adc0()*3.41108);
}

double NNfunction_NN_2_7::synapse0x1d6e5f0() {
   return (neuron0x1d5b100()*-0.00215319);
}

double NNfunction_NN_2_7::synapse0x1d6e630() {
   return (neuron0x1d5b440()*0.00465211);
}

double NNfunction_NN_2_7::synapse0x1d6e670() {
   return (neuron0x1d5b780()*0.0469732);
}

double NNfunction_NN_2_7::synapse0x1d6e6b0() {
   return (neuron0x1d5bac0()*-0.0399293);
}

double NNfunction_NN_2_7::synapse0x1d6e6f0() {
   return (neuron0x1d5be00()*-0.00975648);
}

double NNfunction_NN_2_7::synapse0x1d6e730() {
   return (neuron0x1d5c140()*-0.0217673);
}

double NNfunction_NN_2_7::synapse0x1d6e770() {
   return (neuron0x1d5c480()*0.00374554);
}

double NNfunction_NN_2_7::synapse0x1d6e7b0() {
   return (neuron0x1d5c7c0()*-0.00631018);
}

double NNfunction_NN_2_7::synapse0x1d6e7f0() {
   return (neuron0x1d5cb00()*0.256475);
}

double NNfunction_NN_2_7::synapse0x1d6e830() {
   return (neuron0x1d5ce40()*-0.00317217);
}

double NNfunction_NN_2_7::synapse0x1d6e870() {
   return (neuron0x1d5d180()*0.00169149);
}

double NNfunction_NN_2_7::synapse0x1d6e8b0() {
   return (neuron0x1d5d4c0()*-0.012159);
}

double NNfunction_NN_2_7::synapse0x1d6e8f0() {
   return (neuron0x1d5d800()*-0.0163614);
}

double NNfunction_NN_2_7::synapse0x1d6e380() {
   return (neuron0x1d5db40()*0.0291764);
}

double NNfunction_NN_2_7::synapse0x1d6e3c0() {
   return (neuron0x1d5e0a0()*0.00557323);
}

double NNfunction_NN_2_7::synapse0x1d6ea40() {
   return (neuron0x1d5e2c0()*0.000143961);
}

double NNfunction_NN_2_7::synapse0x1d6ea80() {
   return (neuron0x1d5e600()*-0.0274469);
}

double NNfunction_NN_2_7::synapse0x1d6eac0() {
   return (neuron0x1d5e940()*-0.0214856);
}

double NNfunction_NN_2_7::synapse0x1d6eb00() {
   return (neuron0x1d5ec80()*-0.0443801);
}

double NNfunction_NN_2_7::synapse0x1d6eb40() {
   return (neuron0x1d5efc0()*0.0168103);
}

double NNfunction_NN_2_7::synapse0x1d6eb80() {
   return (neuron0x1d5f300()*0.0591992);
}

double NNfunction_NN_2_7::synapse0x1d6ef00() {
   return (neuron0x1d5a740()*0.0131077);
}

double NNfunction_NN_2_7::synapse0x1d6ef40() {
   return (neuron0x1d5aa80()*11.1307);
}

double NNfunction_NN_2_7::synapse0x1d6ef80() {
   return (neuron0x1d5adc0()*2.60568);
}

double NNfunction_NN_2_7::synapse0x1d6efc0() {
   return (neuron0x1d5b100()*0.00372271);
}

double NNfunction_NN_2_7::synapse0x1d6f000() {
   return (neuron0x1d5b440()*-0.0137691);
}

double NNfunction_NN_2_7::synapse0x1d6f040() {
   return (neuron0x1d5b780()*0.0144565);
}

double NNfunction_NN_2_7::synapse0x1d6f080() {
   return (neuron0x1d5bac0()*-0.0326601);
}

double NNfunction_NN_2_7::synapse0x1d6f0c0() {
   return (neuron0x1d5be00()*0.0420998);
}

double NNfunction_NN_2_7::synapse0x1d6f100() {
   return (neuron0x1d5c140()*-0.0163822);
}

double NNfunction_NN_2_7::synapse0x1d6f140() {
   return (neuron0x1d5c480()*0.0116096);
}

double NNfunction_NN_2_7::synapse0x1d6f180() {
   return (neuron0x1d5c7c0()*-0.0453286);
}

double NNfunction_NN_2_7::synapse0x1d6f1c0() {
   return (neuron0x1d5cb00()*0.396001);
}

double NNfunction_NN_2_7::synapse0x1d6f200() {
   return (neuron0x1d5ce40()*0.0597169);
}

double NNfunction_NN_2_7::synapse0x1d6f240() {
   return (neuron0x1d5d180()*-0.00874595);
}

double NNfunction_NN_2_7::synapse0x1d6f280() {
   return (neuron0x1d5d4c0()*0.0164568);
}

double NNfunction_NN_2_7::synapse0x1d6f2c0() {
   return (neuron0x1d5d800()*-0.00307233);
}

double NNfunction_NN_2_7::synapse0x1d6ed50() {
   return (neuron0x1d5db40()*0.011611);
}

double NNfunction_NN_2_7::synapse0x1d6ed90() {
   return (neuron0x1d5e0a0()*0.0251376);
}

double NNfunction_NN_2_7::synapse0x1d6f410() {
   return (neuron0x1d5e2c0()*-0.0136822);
}

double NNfunction_NN_2_7::synapse0x1d6f450() {
   return (neuron0x1d5e600()*0.00944784);
}

double NNfunction_NN_2_7::synapse0x1d6f490() {
   return (neuron0x1d5e940()*-0.0331625);
}

double NNfunction_NN_2_7::synapse0x1d6f4d0() {
   return (neuron0x1d5ec80()*-0.0290143);
}

double NNfunction_NN_2_7::synapse0x1d6f510() {
   return (neuron0x1d5efc0()*0.00982219);
}

double NNfunction_NN_2_7::synapse0x1d6f550() {
   return (neuron0x1d5f300()*0.0164098);
}

double NNfunction_NN_2_7::synapse0x1d6f8d0() {
   return (neuron0x1d5a740()*-0.0345008);
}

double NNfunction_NN_2_7::synapse0x1d6f910() {
   return (neuron0x1d5aa80()*-0.00290009);
}

double NNfunction_NN_2_7::synapse0x1d6f950() {
   return (neuron0x1d5adc0()*0.404246);
}

double NNfunction_NN_2_7::synapse0x1d6f990() {
   return (neuron0x1d5b100()*-0.018016);
}

double NNfunction_NN_2_7::synapse0x1d6f9d0() {
   return (neuron0x1d5b440()*-0.000737483);
}

double NNfunction_NN_2_7::synapse0x1d6fa10() {
   return (neuron0x1d5b780()*0.00398626);
}

double NNfunction_NN_2_7::synapse0x1d6fa50() {
   return (neuron0x1d5bac0()*0.00127532);
}

double NNfunction_NN_2_7::synapse0x1d6fa90() {
   return (neuron0x1d5be00()*0.00657152);
}

double NNfunction_NN_2_7::synapse0x1d6fad0() {
   return (neuron0x1d5c140()*-0.00520322);
}

double NNfunction_NN_2_7::synapse0x1d6fb10() {
   return (neuron0x1d5c480()*9.80819e-06);
}

double NNfunction_NN_2_7::synapse0x1d6fb50() {
   return (neuron0x1d5c7c0()*0.00718542);
}

double NNfunction_NN_2_7::synapse0x1d6fb90() {
   return (neuron0x1d5cb00()*0.0822968);
}

double NNfunction_NN_2_7::synapse0x1d6fbd0() {
   return (neuron0x1d5ce40()*0.0116447);
}

double NNfunction_NN_2_7::synapse0x1d6fc10() {
   return (neuron0x1d5d180()*0.00332894);
}

double NNfunction_NN_2_7::synapse0x1d6fc50() {
   return (neuron0x1d5d4c0()*0.000915318);
}

double NNfunction_NN_2_7::synapse0x1d6fc90() {
   return (neuron0x1d5d800()*-0.00848413);
}

double NNfunction_NN_2_7::synapse0x1d6f720() {
   return (neuron0x1d5db40()*0.00689361);
}

double NNfunction_NN_2_7::synapse0x1d6f760() {
   return (neuron0x1d5e0a0()*0.0084169);
}

double NNfunction_NN_2_7::synapse0x1d6fde0() {
   return (neuron0x1d5e2c0()*0.00452638);
}

double NNfunction_NN_2_7::synapse0x1d6fe20() {
   return (neuron0x1d5e600()*-0.00325497);
}

double NNfunction_NN_2_7::synapse0x1d6fe60() {
   return (neuron0x1d5e940()*0.0168434);
}

double NNfunction_NN_2_7::synapse0x1d6fea0() {
   return (neuron0x1d5ec80()*-0.0046068);
}

double NNfunction_NN_2_7::synapse0x1d6fee0() {
   return (neuron0x1d5efc0()*0.00209987);
}

double NNfunction_NN_2_7::synapse0x1d6ff20() {
   return (neuron0x1d5f300()*-3.76466);
}

double NNfunction_NN_2_7::synapse0x1d81df0() {
   return (neuron0x1d5a740()*-0.289835);
}

double NNfunction_NN_2_7::synapse0x1d81e30() {
   return (neuron0x1d5aa80()*1.29762);
}

double NNfunction_NN_2_7::synapse0x1d81e70() {
   return (neuron0x1d5adc0()*0.268814);
}

double NNfunction_NN_2_7::synapse0x1d81eb0() {
   return (neuron0x1d5b100()*0.179203);
}

double NNfunction_NN_2_7::synapse0x1d81ef0() {
   return (neuron0x1d5b440()*-0.088339);
}

double NNfunction_NN_2_7::synapse0x1d81f30() {
   return (neuron0x1d5b780()*-0.0113632);
}

double NNfunction_NN_2_7::synapse0x1d81f70() {
   return (neuron0x1d5bac0()*-0.162286);
}

double NNfunction_NN_2_7::synapse0x1d81fb0() {
   return (neuron0x1d5be00()*0.66464);
}

double NNfunction_NN_2_7::synapse0x1d81ff0() {
   return (neuron0x1d5c140()*-0.377254);
}

double NNfunction_NN_2_7::synapse0x1d82030() {
   return (neuron0x1d5c480()*0.0878619);
}

double NNfunction_NN_2_7::synapse0x1d82070() {
   return (neuron0x1d5c7c0()*0.114397);
}

double NNfunction_NN_2_7::synapse0x1d820b0() {
   return (neuron0x1d5cb00()*0.0478988);
}

double NNfunction_NN_2_7::synapse0x1d820f0() {
   return (neuron0x1d5ce40()*-0.273959);
}

double NNfunction_NN_2_7::synapse0x1d82130() {
   return (neuron0x1d5d180()*-0.336056);
}

double NNfunction_NN_2_7::synapse0x1d82170() {
   return (neuron0x1d5d4c0()*-0.480857);
}

double NNfunction_NN_2_7::synapse0x1d821b0() {
   return (neuron0x1d5d800()*0.293807);
}

double NNfunction_NN_2_7::synapse0x1d6ff60() {
   return (neuron0x1d5db40()*0.591822);
}

double NNfunction_NN_2_7::synapse0x1d6ffa0() {
   return (neuron0x1d5e0a0()*-0.440998);
}

double NNfunction_NN_2_7::synapse0x1d82300() {
   return (neuron0x1d5e2c0()*-0.311337);
}

double NNfunction_NN_2_7::synapse0x1d82340() {
   return (neuron0x1d5e600()*0.0427794);
}

double NNfunction_NN_2_7::synapse0x1d82380() {
   return (neuron0x1d5e940()*0.0903297);
}

double NNfunction_NN_2_7::synapse0x1d823c0() {
   return (neuron0x1d5ec80()*-0.475803);
}

double NNfunction_NN_2_7::synapse0x1d82400() {
   return (neuron0x1d5efc0()*0.33865);
}

double NNfunction_NN_2_7::synapse0x1d82440() {
   return (neuron0x1d5f300()*-0.276893);
}

double NNfunction_NN_2_7::synapse0x1d827c0() {
   return (neuron0x1d5a740()*0.110249);
}

double NNfunction_NN_2_7::synapse0x1d82800() {
   return (neuron0x1d5aa80()*-1.31765);
}

double NNfunction_NN_2_7::synapse0x1d82840() {
   return (neuron0x1d5adc0()*0.519119);
}

double NNfunction_NN_2_7::synapse0x1d82880() {
   return (neuron0x1d5b100()*0.0812463);
}

double NNfunction_NN_2_7::synapse0x1d828c0() {
   return (neuron0x1d5b440()*-0.295556);
}

double NNfunction_NN_2_7::synapse0x1d82900() {
   return (neuron0x1d5b780()*-0.0527098);
}

double NNfunction_NN_2_7::synapse0x1d82940() {
   return (neuron0x1d5bac0()*-0.757581);
}

double NNfunction_NN_2_7::synapse0x1d82980() {
   return (neuron0x1d5be00()*-0.00892783);
}

double NNfunction_NN_2_7::synapse0x1d829c0() {
   return (neuron0x1d5c140()*-0.237231);
}

double NNfunction_NN_2_7::synapse0x1d82a00() {
   return (neuron0x1d5c480()*0.156934);
}

double NNfunction_NN_2_7::synapse0x1d82a40() {
   return (neuron0x1d5c7c0()*0.0809225);
}

double NNfunction_NN_2_7::synapse0x1d82a80() {
   return (neuron0x1d5cb00()*0.0316206);
}

double NNfunction_NN_2_7::synapse0x1d82ac0() {
   return (neuron0x1d5ce40()*-0.523026);
}

double NNfunction_NN_2_7::synapse0x1d82b00() {
   return (neuron0x1d5d180()*0.199623);
}

double NNfunction_NN_2_7::synapse0x1d82b40() {
   return (neuron0x1d5d4c0()*-0.59361);
}

double NNfunction_NN_2_7::synapse0x1d82b80() {
   return (neuron0x1d5d800()*-0.0544109);
}

double NNfunction_NN_2_7::synapse0x1d82610() {
   return (neuron0x1d5db40()*-0.0522738);
}

double NNfunction_NN_2_7::synapse0x1d82650() {
   return (neuron0x1d5e0a0()*-0.432725);
}

double NNfunction_NN_2_7::synapse0x1d82cd0() {
   return (neuron0x1d5e2c0()*-0.105738);
}

double NNfunction_NN_2_7::synapse0x1d82d10() {
   return (neuron0x1d5e600()*0.0415515);
}

double NNfunction_NN_2_7::synapse0x1d82d50() {
   return (neuron0x1d5e940()*-0.0839898);
}

double NNfunction_NN_2_7::synapse0x1d82d90() {
   return (neuron0x1d5ec80()*0.203388);
}

double NNfunction_NN_2_7::synapse0x1d82dd0() {
   return (neuron0x1d5efc0()*0.482818);
}

double NNfunction_NN_2_7::synapse0x1d82e10() {
   return (neuron0x1d5f300()*-0.712834);
}

double NNfunction_NN_2_7::synapse0x1d83190() {
   return (neuron0x1d5a740()*-0.0355294);
}

double NNfunction_NN_2_7::synapse0x1d831d0() {
   return (neuron0x1d5aa80()*-0.0279699);
}

double NNfunction_NN_2_7::synapse0x1d83210() {
   return (neuron0x1d5adc0()*0.644777);
}

double NNfunction_NN_2_7::synapse0x1d83250() {
   return (neuron0x1d5b100()*-0.00151327);
}

double NNfunction_NN_2_7::synapse0x1d83290() {
   return (neuron0x1d5b440()*-0.00309619);
}

double NNfunction_NN_2_7::synapse0x1d832d0() {
   return (neuron0x1d5b780()*0.00420988);
}

double NNfunction_NN_2_7::synapse0x1d83310() {
   return (neuron0x1d5bac0()*-0.00921651);
}

double NNfunction_NN_2_7::synapse0x1d83350() {
   return (neuron0x1d5be00()*-2.4555e-05);
}

double NNfunction_NN_2_7::synapse0x1d83390() {
   return (neuron0x1d5c140()*-0.00521057);
}

double NNfunction_NN_2_7::synapse0x1d833d0() {
   return (neuron0x1d5c480()*-0.00703938);
}

double NNfunction_NN_2_7::synapse0x1d83410() {
   return (neuron0x1d5c7c0()*-0.00238468);
}

double NNfunction_NN_2_7::synapse0x1d83450() {
   return (neuron0x1d5cb00()*0.0355041);
}

double NNfunction_NN_2_7::synapse0x1d83490() {
   return (neuron0x1d5ce40()*0.00866304);
}

double NNfunction_NN_2_7::synapse0x1d834d0() {
   return (neuron0x1d5d180()*0.00478777);
}

double NNfunction_NN_2_7::synapse0x1d83510() {
   return (neuron0x1d5d4c0()*-0.0046832);
}

double NNfunction_NN_2_7::synapse0x1d83550() {
   return (neuron0x1d5d800()*-0.00137171);
}

double NNfunction_NN_2_7::synapse0x1d82fe0() {
   return (neuron0x1d5db40()*0.00349761);
}

double NNfunction_NN_2_7::synapse0x1d83020() {
   return (neuron0x1d5e0a0()*0.00242796);
}

double NNfunction_NN_2_7::synapse0x1d836a0() {
   return (neuron0x1d5e2c0()*0.00794083);
}

double NNfunction_NN_2_7::synapse0x1d836e0() {
   return (neuron0x1d5e600()*0.00908359);
}

double NNfunction_NN_2_7::synapse0x1d83720() {
   return (neuron0x1d5e940()*-0.00545813);
}

double NNfunction_NN_2_7::synapse0x1d83760() {
   return (neuron0x1d5ec80()*-0.00378647);
}

double NNfunction_NN_2_7::synapse0x1d837a0() {
   return (neuron0x1d5efc0()*0.000629499);
}

double NNfunction_NN_2_7::synapse0x1d837e0() {
   return (neuron0x1d5f300()*-3.55439);
}

double NNfunction_NN_2_7::synapse0x1d83b60() {
   return (neuron0x1d5a740()*-0.0145635);
}

double NNfunction_NN_2_7::synapse0x1d83ba0() {
   return (neuron0x1d5aa80()*-2.11177);
}

double NNfunction_NN_2_7::synapse0x1d83be0() {
   return (neuron0x1d5adc0()*0.419885);
}

double NNfunction_NN_2_7::synapse0x1d83c20() {
   return (neuron0x1d5b100()*0.0600296);
}

double NNfunction_NN_2_7::synapse0x1d83c60() {
   return (neuron0x1d5b440()*0.152737);
}

double NNfunction_NN_2_7::synapse0x1d83ca0() {
   return (neuron0x1d5b780()*-0.128614);
}

double NNfunction_NN_2_7::synapse0x1d83ce0() {
   return (neuron0x1d5bac0()*0.220065);
}

double NNfunction_NN_2_7::synapse0x1d83d20() {
   return (neuron0x1d5be00()*0.179079);
}

double NNfunction_NN_2_7::synapse0x1d83d60() {
   return (neuron0x1d5c140()*-0.661984);
}

double NNfunction_NN_2_7::synapse0x1d83da0() {
   return (neuron0x1d5c480()*0.533803);
}

double NNfunction_NN_2_7::synapse0x1d83de0() {
   return (neuron0x1d5c7c0()*0.293404);
}

double NNfunction_NN_2_7::synapse0x1d83e20() {
   return (neuron0x1d5cb00()*-0.0440939);
}

double NNfunction_NN_2_7::synapse0x1d83e60() {
   return (neuron0x1d5ce40()*-0.179286);
}

double NNfunction_NN_2_7::synapse0x1d83ea0() {
   return (neuron0x1d5d180()*-0.16749);
}

double NNfunction_NN_2_7::synapse0x1d83ee0() {
   return (neuron0x1d5d4c0()*0.275258);
}

double NNfunction_NN_2_7::synapse0x1d83f20() {
   return (neuron0x1d5d800()*-0.111595);
}

double NNfunction_NN_2_7::synapse0x1d839b0() {
   return (neuron0x1d5db40()*0.0864185);
}

double NNfunction_NN_2_7::synapse0x1d839f0() {
   return (neuron0x1d5e0a0()*-0.120505);
}

double NNfunction_NN_2_7::synapse0x1d84070() {
   return (neuron0x1d5e2c0()*-0.0294421);
}

double NNfunction_NN_2_7::synapse0x1d840b0() {
   return (neuron0x1d5e600()*-0.312204);
}

double NNfunction_NN_2_7::synapse0x1d840f0() {
   return (neuron0x1d5e940()*-0.403696);
}

double NNfunction_NN_2_7::synapse0x1d84130() {
   return (neuron0x1d5ec80()*0.047259);
}

double NNfunction_NN_2_7::synapse0x1d84170() {
   return (neuron0x1d5efc0()*-0.0959014);
}

double NNfunction_NN_2_7::synapse0x1d841b0() {
   return (neuron0x1d5f300()*-0.313251);
}

double NNfunction_NN_2_7::synapse0x1d60750() {
   return (neuron0x1d5f7a0()*-0.611032);
}

double NNfunction_NN_2_7::synapse0x1d60790() {
   return (neuron0x1d600b0()*-1.74048);
}

double NNfunction_NN_2_7::synapse0x1d61c60() {
   return (neuron0x1d60b90()*1.58929);
}

double NNfunction_NN_2_7::synapse0x1d61ca0() {
   return (neuron0x1b1a420()*5.70531);
}

double NNfunction_NN_2_7::synapse0x1d62630() {
   return (neuron0x1d619b0()*-1.37612);
}

double NNfunction_NN_2_7::synapse0x1d62670() {
   return (neuron0x1d62380()*-0.56863);
}

double NNfunction_NN_2_7::synapse0x1d63400() {
   return (neuron0x1d63150()*-2.30961);
}

double NNfunction_NN_2_7::synapse0x1d63440() {
   return (neuron0x1d63b20()*-1.71337);
}

double NNfunction_NN_2_7::synapse0x1d63dd0() {
   return (neuron0x1d644f0()*-0.97451);
}

double NNfunction_NN_2_7::synapse0x1d63e10() {
   return (neuron0x1d64fd0()*-0.598119);
}

double NNfunction_NN_2_7::synapse0x1d647a0() {
   return (neuron0x1d659a0()*0.0161105);
}

double NNfunction_NN_2_7::synapse0x1d647e0() {
   return (neuron0x1d62a80()*-1.03075);
}

double NNfunction_NN_2_7::synapse0x1d65280() {
   return (neuron0x1d67550()*-0.890387);
}

double NNfunction_NN_2_7::synapse0x1d652c0() {
   return (neuron0x1d67f20()*2.63014);
}

double NNfunction_NN_2_7::synapse0x1d65c50() {
   return (neuron0x1d688f0()*4.18723);
}

double NNfunction_NN_2_7::synapse0x1d65c90() {
   return (neuron0x1d692c0()*0.131193);
}

double NNfunction_NN_2_7::synapse0x1d62d30() {
   return (neuron0x1d6b0d0()*-0.642207);
}

double NNfunction_NN_2_7::synapse0x1d62d70() {
   return (neuron0x1d6b3b0()*-0.0583442);
}

double NNfunction_NN_2_7::synapse0x1d67800() {
   return (neuron0x1d6bd80()*-1.2207);
}

double NNfunction_NN_2_7::synapse0x1d67840() {
   return (neuron0x1d6c750()*-1.01972);
}

double NNfunction_NN_2_7::synapse0x1d681d0() {
   return (neuron0x1d6d120()*-5.31455);
}

double NNfunction_NN_2_7::synapse0x1d68210() {
   return (neuron0x1d6daf0()*-1.13556);
}

double NNfunction_NN_2_7::synapse0x1d68ba0() {
   return (neuron0x1d66640()*-0.407817);
}

double NNfunction_NN_2_7::synapse0x1d68be0() {
   return (neuron0x1d67010()*-1.43531);
}

double NNfunction_NN_2_7::synapse0x1d69570() {
   return (neuron0x1d70880()*0.906751);
}

double NNfunction_NN_2_7::synapse0x1d695b0() {
   return (neuron0x1d71250()*-3.41583);
}

double NNfunction_NN_2_7::synapse0x1d5d6e0() {
   return (neuron0x1d71c20()*2.46557);
}

double NNfunction_NN_2_7::synapse0x1d5d720() {
   return (neuron0x1d725f0()*-2.8028);
}

double NNfunction_NN_2_7::synapse0x1d6b660() {
   return (neuron0x1d72fc0()*-0.459709);
}

double NNfunction_NN_2_7::synapse0x1d6b6a0() {
   return (neuron0x1d73990()*-0.845649);
}

double NNfunction_NN_2_7::synapse0x1d6c030() {
   return (neuron0x1d74360()*-1.118);
}

double NNfunction_NN_2_7::synapse0x1d6c070() {
   return (neuron0x1d74d30()*-6.63102);
}

double NNfunction_NN_2_7::synapse0x1d6ca00() {
   return (neuron0x1d6adc0()*-1.88218);
}

double NNfunction_NN_2_7::synapse0x1d6ca40() {
   return (neuron0x1d77910()*-0.670727);
}

double NNfunction_NN_2_7::synapse0x1d6d3d0() {
   return (neuron0x1d782e0()*-1.17898);
}

double NNfunction_NN_2_7::synapse0x1d6d410() {
   return (neuron0x1d78cb0()*-1.08674);
}

double NNfunction_NN_2_7::synapse0x1d6dda0() {
   return (neuron0x1d79680()*-1.3761);
}

double NNfunction_NN_2_7::synapse0x1d6dde0() {
   return (neuron0x1d7a050()*1.14042);
}

double NNfunction_NN_2_7::synapse0x1d668f0() {
   return (neuron0x1d7aa20()*-0.757166);
}

double NNfunction_NN_2_7::synapse0x1d66930() {
   return (neuron0x1d7b3f0()*-0.662837);
}

double NNfunction_NN_2_7::synapse0x1d701a0() {
   return (neuron0x1d7bdc0()*-1.81935);
}

double NNfunction_NN_2_7::synapse0x1d701e0() {
   return (neuron0x1d7c9a0()*-0.616634);
}

double NNfunction_NN_2_7::synapse0x1d70b30() {
   return (neuron0x1d7d370()*0.597814);
}

double NNfunction_NN_2_7::synapse0x1d70b70() {
   return (neuron0x1d6e1f0()*9.63973);
}

double NNfunction_NN_2_7::synapse0x1d71500() {
   return (neuron0x1d6ebc0()*8.05681);
}

double NNfunction_NN_2_7::synapse0x1d71540() {
   return (neuron0x1d6f590()*-2.36247);
}

double NNfunction_NN_2_7::synapse0x1d71ed0() {
   return (neuron0x1d81bd0()*-1.01727);
}

double NNfunction_NN_2_7::synapse0x1d71f10() {
   return (neuron0x1d82480()*-1.32587);
}

double NNfunction_NN_2_7::synapse0x1d728a0() {
   return (neuron0x1d82e50()*1.95188);
}

double NNfunction_NN_2_7::synapse0x1d728e0() {
   return (neuron0x1d83820()*-0.933894);
}

double NNfunction_NN_2_7::synapse0x1d74fe0() {
   return (neuron0x1d5f7a0()*1.31675);
}

double NNfunction_NN_2_7::synapse0x1d75020() {
   return (neuron0x1d600b0()*0.172722);
}

double NNfunction_NN_2_7::synapse0x1d6a5a0() {
   return (neuron0x1d60b90()*0.0905818);
}

double NNfunction_NN_2_7::synapse0x1d6a5e0() {
   return (neuron0x1b1a420()*-0.458918);
}

double NNfunction_NN_2_7::synapse0x1d77bc0() {
   return (neuron0x1d619b0()*0.298366);
}

double NNfunction_NN_2_7::synapse0x1d77c00() {
   return (neuron0x1d62380()*0.100123);
}

double NNfunction_NN_2_7::synapse0x1d78590() {
   return (neuron0x1d63150()*0.571142);
}

double NNfunction_NN_2_7::synapse0x1d785d0() {
   return (neuron0x1d63b20()*0.15259);
}

double NNfunction_NN_2_7::synapse0x1d78f60() {
   return (neuron0x1d644f0()*0.1439);
}

double NNfunction_NN_2_7::synapse0x1d78fa0() {
   return (neuron0x1d64fd0()*0.0294185);
}

double NNfunction_NN_2_7::synapse0x1d79930() {
   return (neuron0x1d659a0()*0.171771);
}

double NNfunction_NN_2_7::synapse0x1d79970() {
   return (neuron0x1d62a80()*-0.0233142);
}

double NNfunction_NN_2_7::synapse0x1d7a300() {
   return (neuron0x1d67550()*-0.147789);
}

double NNfunction_NN_2_7::synapse0x1d7a340() {
   return (neuron0x1d67f20()*-1.54001);
}

double NNfunction_NN_2_7::synapse0x1d7acd0() {
   return (neuron0x1d688f0()*0.615557);
}

double NNfunction_NN_2_7::synapse0x1d7ad10() {
   return (neuron0x1d692c0()*-0.132074);
}

double NNfunction_NN_2_7::synapse0x1d7b6a0() {
   return (neuron0x1d6b0d0()*-0.0908254);
}

double NNfunction_NN_2_7::synapse0x1d7b6e0() {
   return (neuron0x1d6b3b0()*0.389426);
}

double NNfunction_NN_2_7::synapse0x1d7c070() {
   return (neuron0x1d6bd80()*0.012165);
}

double NNfunction_NN_2_7::synapse0x1d7c0b0() {
   return (neuron0x1d6c750()*-0.310879);
}

double NNfunction_NN_2_7::synapse0x1d7cc50() {
   return (neuron0x1d6d120()*-1.16461);
}

double NNfunction_NN_2_7::synapse0x1d7cc90() {
   return (neuron0x1d6daf0()*-0.389684);
}

double NNfunction_NN_2_7::synapse0x1d7d620() {
   return (neuron0x1d66640()*0.526935);
}

double NNfunction_NN_2_7::synapse0x1d7d660() {
   return (neuron0x1d67010()*0.0716182);
}

double NNfunction_NN_2_7::synapse0x1d6e4a0() {
   return (neuron0x1d70880()*0.0028136);
}

double NNfunction_NN_2_7::synapse0x1d6e4e0() {
   return (neuron0x1d71250()*0.791386);
}

double NNfunction_NN_2_7::synapse0x1d6ee70() {
   return (neuron0x1d71c20()*-1.69186);
}

double NNfunction_NN_2_7::synapse0x1d6eeb0() {
   return (neuron0x1d725f0()*0.639309);
}

double NNfunction_NN_2_7::synapse0x1d6f840() {
   return (neuron0x1d72fc0()*-0.224395);
}

double NNfunction_NN_2_7::synapse0x1d6f880() {
   return (neuron0x1d73990()*-0.0683308);
}

double NNfunction_NN_2_7::synapse0x1d81d60() {
   return (neuron0x1d74360()*-0.197561);
}

double NNfunction_NN_2_7::synapse0x1d81da0() {
   return (neuron0x1d74d30()*4.58897);
}

double NNfunction_NN_2_7::synapse0x1d82730() {
   return (neuron0x1d6adc0()*0.396021);
}

double NNfunction_NN_2_7::synapse0x1d82770() {
   return (neuron0x1d77910()*-0.102972);
}

double NNfunction_NN_2_7::synapse0x1d83100() {
   return (neuron0x1d782e0()*0.228158);
}

double NNfunction_NN_2_7::synapse0x1d83140() {
   return (neuron0x1d78cb0()*-0.467687);
}

double NNfunction_NN_2_7::synapse0x1d83ad0() {
   return (neuron0x1d79680()*0.602889);
}

double NNfunction_NN_2_7::synapse0x1d83b10() {
   return (neuron0x1d7a050()*-0.631127);
}

double NNfunction_NN_2_7::synapse0x1d5f9c0() {
   return (neuron0x1d7aa20()*0.350098);
}

double NNfunction_NN_2_7::synapse0x1d5fa00() {
   return (neuron0x1d7b3f0()*0.580919);
}

double NNfunction_NN_2_7::synapse0x1d73270() {
   return (neuron0x1d7bdc0()*-1.60684);
}

double NNfunction_NN_2_7::synapse0x1d732b0() {
   return (neuron0x1d7c9a0()*-0.311125);
}

double NNfunction_NN_2_7::synapse0x1d841f0() {
   return (neuron0x1d7d370()*0.696185);
}

double NNfunction_NN_2_7::synapse0x1d84230() {
   return (neuron0x1d6e1f0()*3.02189);
}

double NNfunction_NN_2_7::synapse0x1d84270() {
   return (neuron0x1d6ebc0()*-3.34408);
}

double NNfunction_NN_2_7::synapse0x1d842b0() {
   return (neuron0x1d6f590()*0.447939);
}

double NNfunction_NN_2_7::synapse0x1d8b160() {
   return (neuron0x1d81bd0()*-0.640797);
}

double NNfunction_NN_2_7::synapse0x1d8b1a0() {
   return (neuron0x1d82480()*0.6657);
}

double NNfunction_NN_2_7::synapse0x1d8b1e0() {
   return (neuron0x1d82e50()*-0.956856);
}

double NNfunction_NN_2_7::synapse0x1d8b220() {
   return (neuron0x1d83820()*1.37118);
}

double NNfunction_NN_2_7::synapse0x1d8b5a0() {
   return (neuron0x1d5f7a0()*0.00505412);
}

double NNfunction_NN_2_7::synapse0x1d8b5e0() {
   return (neuron0x1d600b0()*0.00222798);
}

double NNfunction_NN_2_7::synapse0x1d8b620() {
   return (neuron0x1d60b90()*0.011377);
}

double NNfunction_NN_2_7::synapse0x1d8b660() {
   return (neuron0x1b1a420()*-0.0213354);
}

double NNfunction_NN_2_7::synapse0x1d8b6a0() {
   return (neuron0x1d619b0()*0.0149626);
}

double NNfunction_NN_2_7::synapse0x1d8b6e0() {
   return (neuron0x1d62380()*1.01112);
}

double NNfunction_NN_2_7::synapse0x1d8b720() {
   return (neuron0x1d63150()*0.295357);
}

double NNfunction_NN_2_7::synapse0x1d8b760() {
   return (neuron0x1d63b20()*1.24431);
}

double NNfunction_NN_2_7::synapse0x1d8b7a0() {
   return (neuron0x1d644f0()*-0.00712167);
}

double NNfunction_NN_2_7::synapse0x1d8b7e0() {
   return (neuron0x1d64fd0()*0.000631809);
}

double NNfunction_NN_2_7::synapse0x1d8b820() {
   return (neuron0x1d659a0()*0.883834);
}

double NNfunction_NN_2_7::synapse0x1d8b860() {
   return (neuron0x1d62a80()*0.00687191);
}

double NNfunction_NN_2_7::synapse0x1d8b8a0() {
   return (neuron0x1d67550()*0.0161348);
}

double NNfunction_NN_2_7::synapse0x1d8b8e0() {
   return (neuron0x1d67f20()*-0.0251922);
}

double NNfunction_NN_2_7::synapse0x1d8b920() {
   return (neuron0x1d688f0()*-0.00298279);
}

double NNfunction_NN_2_7::synapse0x1d8b960() {
   return (neuron0x1d692c0()*-2.58913);
}

double NNfunction_NN_2_7::synapse0x1d8b3f0() {
   return (neuron0x1d6b0d0()*-0.0171224);
}

double NNfunction_NN_2_7::synapse0x1d8b430() {
   return (neuron0x1d6b3b0()*-0.780727);
}

double NNfunction_NN_2_7::synapse0x1d8bab0() {
   return (neuron0x1d6bd80()*0.0103022);
}

double NNfunction_NN_2_7::synapse0x1d8baf0() {
   return (neuron0x1d6c750()*0.00389398);
}

double NNfunction_NN_2_7::synapse0x1d8bb30() {
   return (neuron0x1d6d120()*0.0364559);
}

double NNfunction_NN_2_7::synapse0x1d8bb70() {
   return (neuron0x1d6daf0()*0.0310608);
}

double NNfunction_NN_2_7::synapse0x1d8bbb0() {
   return (neuron0x1d66640()*0.00347875);
}

double NNfunction_NN_2_7::synapse0x1d8bbf0() {
   return (neuron0x1d67010()*-1.61633);
}

double NNfunction_NN_2_7::synapse0x1d8bc30() {
   return (neuron0x1d70880()*-0.00250224);
}

double NNfunction_NN_2_7::synapse0x1d8bc70() {
   return (neuron0x1d71250()*0.0324528);
}

double NNfunction_NN_2_7::synapse0x1d8bcb0() {
   return (neuron0x1d71c20()*-0.053208);
}

double NNfunction_NN_2_7::synapse0x1d8bcf0() {
   return (neuron0x1d725f0()*0.110408);
}

double NNfunction_NN_2_7::synapse0x1d8bd30() {
   return (neuron0x1d72fc0()*0.0214146);
}

double NNfunction_NN_2_7::synapse0x1d8bd70() {
   return (neuron0x1d73990()*0.098122);
}

double NNfunction_NN_2_7::synapse0x1d8bdb0() {
   return (neuron0x1d74360()*0.012536);
}

double NNfunction_NN_2_7::synapse0x1d8bdf0() {
   return (neuron0x1d74d30()*0.36959);
}

double NNfunction_NN_2_7::synapse0x1d8b9a0() {
   return (neuron0x1d6adc0()*0.00216177);
}

double NNfunction_NN_2_7::synapse0x1d8b9e0() {
   return (neuron0x1d77910()*-0.00144793);
}

double NNfunction_NN_2_7::synapse0x1d8ba20() {
   return (neuron0x1d782e0()*0.0395791);
}

double NNfunction_NN_2_7::synapse0x1d8ba60() {
   return (neuron0x1d78cb0()*-3.96323);
}

double NNfunction_NN_2_7::synapse0x1d8c040() {
   return (neuron0x1d79680()*-0.0694219);
}

double NNfunction_NN_2_7::synapse0x1d8c080() {
   return (neuron0x1d7a050()*0.0034711);
}

double NNfunction_NN_2_7::synapse0x1d8c0c0() {
   return (neuron0x1d7aa20()*0.0130962);
}

double NNfunction_NN_2_7::synapse0x1d8c100() {
   return (neuron0x1d7b3f0()*-0.00142322);
}

double NNfunction_NN_2_7::synapse0x1d8c140() {
   return (neuron0x1d7bdc0()*0.00742669);
}

double NNfunction_NN_2_7::synapse0x1d8c180() {
   return (neuron0x1d7c9a0()*0.00956292);
}

double NNfunction_NN_2_7::synapse0x1d8c1c0() {
   return (neuron0x1d7d370()*-0.00317518);
}

double NNfunction_NN_2_7::synapse0x1d8c200() {
   return (neuron0x1d6e1f0()*-0.308168);
}

double NNfunction_NN_2_7::synapse0x1d8c240() {
   return (neuron0x1d6ebc0()*-0.0130925);
}

double NNfunction_NN_2_7::synapse0x1d8c280() {
   return (neuron0x1d6f590()*3.08929);
}

double NNfunction_NN_2_7::synapse0x1d8c2c0() {
   return (neuron0x1d81bd0()*-6.80236e-05);
}

double NNfunction_NN_2_7::synapse0x1d8c300() {
   return (neuron0x1d82480()*-0.00416521);
}

double NNfunction_NN_2_7::synapse0x1d8c340() {
   return (neuron0x1d82e50()*-1.39334);
}

double NNfunction_NN_2_7::synapse0x1d8c380() {
   return (neuron0x1d83820()*-0.0130613);
}

double NNfunction_NN_2_7::synapse0x1d8c700() {
   return (neuron0x1d5f7a0()*-0.0883424);
}

double NNfunction_NN_2_7::synapse0x1d8c740() {
   return (neuron0x1d600b0()*-0.0359629);
}

double NNfunction_NN_2_7::synapse0x1d8c780() {
   return (neuron0x1d60b90()*0.364746);
}

double NNfunction_NN_2_7::synapse0x1d8c7c0() {
   return (neuron0x1b1a420()*0.997914);
}

double NNfunction_NN_2_7::synapse0x1d8c800() {
   return (neuron0x1d619b0()*0.207602);
}

double NNfunction_NN_2_7::synapse0x1d8c840() {
   return (neuron0x1d62380()*-0.734783);
}

double NNfunction_NN_2_7::synapse0x1d8c880() {
   return (neuron0x1d63150()*1.47555);
}

double NNfunction_NN_2_7::synapse0x1d8c8c0() {
   return (neuron0x1d63b20()*-0.366377);
}

double NNfunction_NN_2_7::synapse0x1d8c900() {
   return (neuron0x1d644f0()*1.28608);
}

double NNfunction_NN_2_7::synapse0x1d8c940() {
   return (neuron0x1d64fd0()*0.453185);
}

double NNfunction_NN_2_7::synapse0x1d8c980() {
   return (neuron0x1d659a0()*1.39828);
}

double NNfunction_NN_2_7::synapse0x1d8c9c0() {
   return (neuron0x1d62a80()*1.01141);
}

double NNfunction_NN_2_7::synapse0x1d8ca00() {
   return (neuron0x1d67550()*0.302485);
}

double NNfunction_NN_2_7::synapse0x1d8ca40() {
   return (neuron0x1d67f20()*1.09613);
}

double NNfunction_NN_2_7::synapse0x1d8ca80() {
   return (neuron0x1d688f0()*0.688674);
}

double NNfunction_NN_2_7::synapse0x1d8cac0() {
   return (neuron0x1d692c0()*1.10232);
}

double NNfunction_NN_2_7::synapse0x1d8c550() {
   return (neuron0x1d6b0d0()*0.543459);
}

double NNfunction_NN_2_7::synapse0x1d8c590() {
   return (neuron0x1d6b3b0()*1.23079);
}

double NNfunction_NN_2_7::synapse0x1d8cc10() {
   return (neuron0x1d6bd80()*1.00481);
}

double NNfunction_NN_2_7::synapse0x1d8cc50() {
   return (neuron0x1d6c750()*1.02027);
}

double NNfunction_NN_2_7::synapse0x1d8cc90() {
   return (neuron0x1d6d120()*-0.00185003);
}

double NNfunction_NN_2_7::synapse0x1d8ccd0() {
   return (neuron0x1d6daf0()*-0.0144981);
}

double NNfunction_NN_2_7::synapse0x1d8cd10() {
   return (neuron0x1d66640()*1.02032);
}

double NNfunction_NN_2_7::synapse0x1d8cd50() {
   return (neuron0x1d67010()*1.32029);
}

double NNfunction_NN_2_7::synapse0x1d8cd90() {
   return (neuron0x1d70880()*0.524923);
}

double NNfunction_NN_2_7::synapse0x1d8cdd0() {
   return (neuron0x1d71250()*0.383833);
}

double NNfunction_NN_2_7::synapse0x1d8ce10() {
   return (neuron0x1d71c20()*1.03725);
}

double NNfunction_NN_2_7::synapse0x1d8ce50() {
   return (neuron0x1d725f0()*0.391485);
}

double NNfunction_NN_2_7::synapse0x1d8ce90() {
   return (neuron0x1d72fc0()*0.312127);
}

double NNfunction_NN_2_7::synapse0x1d8ced0() {
   return (neuron0x1d73990()*-0.123216);
}

double NNfunction_NN_2_7::synapse0x1d8cf10() {
   return (neuron0x1d74360()*0.550398);
}

double NNfunction_NN_2_7::synapse0x1d8cf50() {
   return (neuron0x1d74d30()*-0.483623);
}

double NNfunction_NN_2_7::synapse0x1d8cb00() {
   return (neuron0x1d6adc0()*1.42971);
}

double NNfunction_NN_2_7::synapse0x1d8cb40() {
   return (neuron0x1d77910()*0.132109);
}

double NNfunction_NN_2_7::synapse0x1d8cb80() {
   return (neuron0x1d782e0()*1.22105);
}

double NNfunction_NN_2_7::synapse0x1d8cbc0() {
   return (neuron0x1d78cb0()*1.45423);
}

double NNfunction_NN_2_7::synapse0x1d8d1a0() {
   return (neuron0x1d79680()*1.0159);
}

double NNfunction_NN_2_7::synapse0x1d8d1e0() {
   return (neuron0x1d7a050()*-0.132509);
}

double NNfunction_NN_2_7::synapse0x1d8d220() {
   return (neuron0x1d7aa20()*-0.528283);
}

double NNfunction_NN_2_7::synapse0x1d8d260() {
   return (neuron0x1d7b3f0()*0.00532847);
}

double NNfunction_NN_2_7::synapse0x1d8d2a0() {
   return (neuron0x1d7bdc0()*1.2879);
}

double NNfunction_NN_2_7::synapse0x1d8d2e0() {
   return (neuron0x1d7c9a0()*0.128363);
}

double NNfunction_NN_2_7::synapse0x1d8d320() {
   return (neuron0x1d7d370()*0.229482);
}

double NNfunction_NN_2_7::synapse0x1d8d360() {
   return (neuron0x1d6e1f0()*0.642152);
}

double NNfunction_NN_2_7::synapse0x1d8d3a0() {
   return (neuron0x1d6ebc0()*1.05109);
}

double NNfunction_NN_2_7::synapse0x1d8d3e0() {
   return (neuron0x1d6f590()*0.621634);
}

double NNfunction_NN_2_7::synapse0x1d8d420() {
   return (neuron0x1d81bd0()*1.18361);
}

double NNfunction_NN_2_7::synapse0x1d8d460() {
   return (neuron0x1d82480()*0.400389);
}

double NNfunction_NN_2_7::synapse0x1d8d4a0() {
   return (neuron0x1d82e50()*1.41078);
}

double NNfunction_NN_2_7::synapse0x1d8d4e0() {
   return (neuron0x1d83820()*0.158298);
}

double NNfunction_NN_2_7::synapse0x1d8d860() {
   return (neuron0x1d5f7a0()*0.020032);
}

double NNfunction_NN_2_7::synapse0x1d8d8a0() {
   return (neuron0x1d600b0()*0.016761);
}

double NNfunction_NN_2_7::synapse0x1d8d8e0() {
   return (neuron0x1d60b90()*-0.0187056);
}

double NNfunction_NN_2_7::synapse0x1d8d920() {
   return (neuron0x1b1a420()*-0.116744);
}

double NNfunction_NN_2_7::synapse0x1d8d960() {
   return (neuron0x1d619b0()*0.00731421);
}

double NNfunction_NN_2_7::synapse0x1d8d9a0() {
   return (neuron0x1d62380()*-0.878049);
}

double NNfunction_NN_2_7::synapse0x1d8d9e0() {
   return (neuron0x1d63150()*-0.93717);
}

double NNfunction_NN_2_7::synapse0x1d8da20() {
   return (neuron0x1d63b20()*-2.8092);
}

double NNfunction_NN_2_7::synapse0x1d8da60() {
   return (neuron0x1d644f0()*0.0296579);
}

double NNfunction_NN_2_7::synapse0x1d8daa0() {
   return (neuron0x1d64fd0()*0.0126893);
}

double NNfunction_NN_2_7::synapse0x1d8dae0() {
   return (neuron0x1d659a0()*0.556426);
}

double NNfunction_NN_2_7::synapse0x1d8db20() {
   return (neuron0x1d62a80()*-0.00490279);
}

double NNfunction_NN_2_7::synapse0x1d8db60() {
   return (neuron0x1d67550()*-0.0232714);
}

double NNfunction_NN_2_7::synapse0x1d8dba0() {
   return (neuron0x1d67f20()*0.0841728);
}

double NNfunction_NN_2_7::synapse0x1d8dbe0() {
   return (neuron0x1d688f0()*0.0631254);
}

double NNfunction_NN_2_7::synapse0x1d8dc20() {
   return (neuron0x1d692c0()*4.60497);
}

double NNfunction_NN_2_7::synapse0x1d8d6b0() {
   return (neuron0x1d6b0d0()*0.0199933);
}

double NNfunction_NN_2_7::synapse0x1d8d6f0() {
   return (neuron0x1d6b3b0()*0.861196);
}

double NNfunction_NN_2_7::synapse0x1d8dd70() {
   return (neuron0x1d6bd80()*-0.00349878);
}

double NNfunction_NN_2_7::synapse0x1d8ddb0() {
   return (neuron0x1d6c750()*-0.00808438);
}

double NNfunction_NN_2_7::synapse0x1d8ddf0() {
   return (neuron0x1d6d120()*0.0702099);
}

double NNfunction_NN_2_7::synapse0x1d8de30() {
   return (neuron0x1d6daf0()*-0.0295496);
}

double NNfunction_NN_2_7::synapse0x1d8de70() {
   return (neuron0x1d66640()*0.001655);
}

double NNfunction_NN_2_7::synapse0x1d8deb0() {
   return (neuron0x1d67010()*-0.774841);
}

double NNfunction_NN_2_7::synapse0x1d8def0() {
   return (neuron0x1d70880()*0.0191162);
}

double NNfunction_NN_2_7::synapse0x1d8df30() {
   return (neuron0x1d71250()*-0.219168);
}

double NNfunction_NN_2_7::synapse0x1d8df70() {
   return (neuron0x1d71c20()*-0.107361);
}

double NNfunction_NN_2_7::synapse0x1d8dfb0() {
   return (neuron0x1d725f0()*0.0102219);
}

double NNfunction_NN_2_7::synapse0x1d8dff0() {
   return (neuron0x1d72fc0()*0.0141398);
}

double NNfunction_NN_2_7::synapse0x1d8e030() {
   return (neuron0x1d73990()*2.78013);
}

double NNfunction_NN_2_7::synapse0x1d8e070() {
   return (neuron0x1d74360()*-0.00831022);
}

double NNfunction_NN_2_7::synapse0x1d8e0b0() {
   return (neuron0x1d74d30()*0.170189);
}

double NNfunction_NN_2_7::synapse0x1d8dc60() {
   return (neuron0x1d6adc0()*-0.0519961);
}

double NNfunction_NN_2_7::synapse0x1d8dca0() {
   return (neuron0x1d77910()*-0.00643467);
}

double NNfunction_NN_2_7::synapse0x1d8dce0() {
   return (neuron0x1d782e0()*-0.0448612);
}

double NNfunction_NN_2_7::synapse0x1d8dd20() {
   return (neuron0x1d78cb0()*1.68112);
}

double NNfunction_NN_2_7::synapse0x1d8e300() {
   return (neuron0x1d79680()*0.302358);
}

double NNfunction_NN_2_7::synapse0x1d8e340() {
   return (neuron0x1d7a050()*0.0135581);
}

double NNfunction_NN_2_7::synapse0x1d8e380() {
   return (neuron0x1d7aa20()*-0.0139293);
}

double NNfunction_NN_2_7::synapse0x1d8e3c0() {
   return (neuron0x1d7b3f0()*0.00598363);
}

double NNfunction_NN_2_7::synapse0x1d8e400() {
   return (neuron0x1d7bdc0()*0.183633);
}

double NNfunction_NN_2_7::synapse0x1d8e440() {
   return (neuron0x1d7c9a0()*0.0114755);
}

double NNfunction_NN_2_7::synapse0x1d8e480() {
   return (neuron0x1d7d370()*-0.0119518);
}

double NNfunction_NN_2_7::synapse0x1d8e4c0() {
   return (neuron0x1d6e1f0()*-0.206977);
}

double NNfunction_NN_2_7::synapse0x1d8e500() {
   return (neuron0x1d6ebc0()*-0.174226);
}

double NNfunction_NN_2_7::synapse0x1d8e540() {
   return (neuron0x1d6f590()*1.5195);
}

double NNfunction_NN_2_7::synapse0x1d8e580() {
   return (neuron0x1d81bd0()*0.00259813);
}

double NNfunction_NN_2_7::synapse0x1d8e5c0() {
   return (neuron0x1d82480()*-0.0112471);
}

double NNfunction_NN_2_7::synapse0x1d8e600() {
   return (neuron0x1d82e50()*-0.672882);
}

double NNfunction_NN_2_7::synapse0x1d8e640() {
   return (neuron0x1d83820()*-0.00170768);
}

double NNfunction_NN_2_7::synapse0x1d5f760() {
   return (neuron0x1d8aa20()*12.1482);
}

double NNfunction_NN_2_7::synapse0x1d8e8a0() {
   return (neuron0x1d8adc0()*-0.16888);
}

double NNfunction_NN_2_7::synapse0x1d8e8e0() {
   return (neuron0x1d8b260()*9.9273);
}

double NNfunction_NN_2_7::synapse0x1d8e920() {
   return (neuron0x1d8c3c0()*-6.65995);
}

double NNfunction_NN_2_7::synapse0x1d8e960() {
   return (neuron0x1d8d520()*11.3796);
}

