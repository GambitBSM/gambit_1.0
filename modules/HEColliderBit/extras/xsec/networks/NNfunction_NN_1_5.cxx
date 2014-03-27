#include "NNfunction_NN_1_5.h"
#include <cmath>

double NNfunction_NN_1_5::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.2926)/15.2582;
   input1 = (in1 - 1.933)/1202.11;
   input2 = (in2 - 687.271)/599.734;
   input3 = (in3 - -44.8062)/834.841;
   input4 = (in4 - 1122.13)/987.396;
   input5 = (in5 - 907.341)/963.013;
   input6 = (in6 - 913.441)/960.799;
   input7 = (in7 - 932.803)/942.208;
   input8 = (in8 - 930.843)/976.938;
   input9 = (in9 - 916.495)/962.087;
   input10 = (in10 - 990.983)/955.683;
   input11 = (in11 - 712.605)/861.575;
   input12 = (in12 - 734.687)/875.845;
   input13 = (in13 - 503.812)/521.391;
   input14 = (in14 - 743.082)/834.184;
   input15 = (in15 - 737.718)/834.012;
   input16 = (in16 - 538.398)/570.921;
   input17 = (in17 - 764.429)/904.387;
   input18 = (in18 - 758.875)/903.745;
   input19 = (in19 - 813.47)/883.485;
   input20 = (in20 - -1.88925)/484.052;
   input21 = (in21 - -0.337239)/1157.89;
   input22 = (in22 - -3.28239)/1210.97;
   input23 = (in23 - -194.417)/584.855;
   switch(index) {
     case 0:
         return neuron0x2d9cf10();
     default:
         return 0.;
   }
}

double NNfunction_NN_1_5::Value(int index, double* input) {
   input0 = (input[0] - 23.2926)/15.2582;
   input1 = (input[1] - 1.933)/1202.11;
   input2 = (input[2] - 687.271)/599.734;
   input3 = (input[3] - -44.8062)/834.841;
   input4 = (input[4] - 1122.13)/987.396;
   input5 = (input[5] - 907.341)/963.013;
   input6 = (input[6] - 913.441)/960.799;
   input7 = (input[7] - 932.803)/942.208;
   input8 = (input[8] - 930.843)/976.938;
   input9 = (input[9] - 916.495)/962.087;
   input10 = (input[10] - 990.983)/955.683;
   input11 = (input[11] - 712.605)/861.575;
   input12 = (input[12] - 734.687)/875.845;
   input13 = (input[13] - 503.812)/521.391;
   input14 = (input[14] - 743.082)/834.184;
   input15 = (input[15] - 737.718)/834.012;
   input16 = (input[16] - 538.398)/570.921;
   input17 = (input[17] - 764.429)/904.387;
   input18 = (input[18] - 758.875)/903.745;
   input19 = (input[19] - 813.47)/883.485;
   input20 = (input[20] - -1.88925)/484.052;
   input21 = (input[21] - -0.337239)/1157.89;
   input22 = (input[22] - -3.28239)/1210.97;
   input23 = (input[23] - -194.417)/584.855;
   switch(index) {
     case 0:
         return neuron0x2d9cf10();
     default:
         return 0.;
   }
}

double NNfunction_NN_1_5::neuron0x2d67f80() {
   return input0;
}

double NNfunction_NN_1_5::neuron0x2d68230() {
   return input1;
}

double NNfunction_NN_1_5::neuron0x2d68570() {
   return input2;
}

double NNfunction_NN_1_5::neuron0x2d688b0() {
   return input3;
}

double NNfunction_NN_1_5::neuron0x2d68bf0() {
   return input4;
}

double NNfunction_NN_1_5::neuron0x2d68f30() {
   return input5;
}

double NNfunction_NN_1_5::neuron0x2d69270() {
   return input6;
}

double NNfunction_NN_1_5::neuron0x2d695b0() {
   return input7;
}

double NNfunction_NN_1_5::neuron0x2d698f0() {
   return input8;
}

double NNfunction_NN_1_5::neuron0x2d69c30() {
   return input9;
}

double NNfunction_NN_1_5::neuron0x2d69f70() {
   return input10;
}

double NNfunction_NN_1_5::neuron0x2d6a2b0() {
   return input11;
}

double NNfunction_NN_1_5::neuron0x2d6a5f0() {
   return input12;
}

double NNfunction_NN_1_5::neuron0x2d6a930() {
   return input13;
}

double NNfunction_NN_1_5::neuron0x2d6ac70() {
   return input14;
}

double NNfunction_NN_1_5::neuron0x2d6afb0() {
   return input15;
}

double NNfunction_NN_1_5::neuron0x2d6b2f0() {
   return input16;
}

double NNfunction_NN_1_5::neuron0x2d6b850() {
   return input17;
}

double NNfunction_NN_1_5::neuron0x2d6bb90() {
   return input18;
}

double NNfunction_NN_1_5::neuron0x2d6bed0() {
   return input19;
}

double NNfunction_NN_1_5::neuron0x2d6c210() {
   return input20;
}

double NNfunction_NN_1_5::neuron0x2d6c550() {
   return input21;
}

double NNfunction_NN_1_5::neuron0x2d6c890() {
   return input22;
}

double NNfunction_NN_1_5::neuron0x2d6cbd0() {
   return input23;
}

double NNfunction_NN_1_5::input0x2d6d040() {
   double input = 0.200628;
   input += synapse0x2d6d380();
   input += synapse0x2d6d3c0();
   input += synapse0x2d6d400();
   input += synapse0x2d6d440();
   input += synapse0x2d6d480();
   input += synapse0x2d6d4c0();
   input += synapse0x2d6d500();
   input += synapse0x2d6d540();
   input += synapse0x2d6d580();
   input += synapse0x2d6d5c0();
   input += synapse0x2d6d600();
   input += synapse0x2d6d640();
   input += synapse0x2d6d680();
   input += synapse0x2d6d6c0();
   input += synapse0x2d6d700();
   input += synapse0x2d6d740();
   input += synapse0x2d6d1d0();
   input += synapse0x2d6d210();
   input += synapse0x2b1a6b0();
   input += synapse0x2b1a6f0();
   input += synapse0x2d6d780();
   input += synapse0x2d6d7c0();
   input += synapse0x2d6d800();
   input += synapse0x2d6d840();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d6d040() {
   double input = input0x2d6d040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d6d880() {
   double input = -0.375642;
   input += synapse0x2d6dbc0();
   input += synapse0x2d6dc00();
   input += synapse0x2d6dc40();
   input += synapse0x2d6dc80();
   input += synapse0x2d6dcc0();
   input += synapse0x2d6dd00();
   input += synapse0x2d6dd40();
   input += synapse0x2d6dd80();
   input += synapse0x2d6ddc0();
   input += synapse0x2b1a500();
   input += synapse0x2b1a540();
   input += synapse0x2b1a580();
   input += synapse0x2b1a5c0();
   input += synapse0x2d6e010();
   input += synapse0x2d6e050();
   input += synapse0x2d6e090();
   input += synapse0x2d6da10();
   input += synapse0x2d6da50();
   input += synapse0x2d6e1e0();
   input += synapse0x2d6e220();
   input += synapse0x2d6e260();
   input += synapse0x2d6e2a0();
   input += synapse0x2d6e2e0();
   input += synapse0x2d6e320();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d6d880() {
   double input = input0x2d6d880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d6e360() {
   double input = -0.10394;
   input += synapse0x2d6e6a0();
   input += synapse0x2d6e6e0();
   input += synapse0x2d6e720();
   input += synapse0x2d6e760();
   input += synapse0x2d6e7a0();
   input += synapse0x2d6e7e0();
   input += synapse0x2d6e820();
   input += synapse0x2d6e860();
   input += synapse0x2d6e8a0();
   input += synapse0x2d6e8e0();
   input += synapse0x2d6e920();
   input += synapse0x2d6e960();
   input += synapse0x2d6e9a0();
   input += synapse0x2d6e9e0();
   input += synapse0x2d6ea20();
   input += synapse0x2d6ea60();
   input += synapse0x2d6e4f0();
   input += synapse0x2d6e530();
   input += synapse0x2b284d0();
   input += synapse0x2b28510();
   input += synapse0x2d70990();
   input += synapse0x2d709d0();
   input += synapse0x2d67cc0();
   input += synapse0x2d67d00();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d6e360() {
   double input = input0x2d6e360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2b28c70() {
   double input = -0.6424;
   input += synapse0x2b28e00();
   input += synapse0x2d6df20();
   input += synapse0x2d6df60();
   input += synapse0x2d6dfa0();
   input += synapse0x2d6ebb0();
   input += synapse0x2d6ebf0();
   input += synapse0x2d6ec30();
   input += synapse0x2d6ec70();
   input += synapse0x2d6ecb0();
   input += synapse0x2d6ecf0();
   input += synapse0x2d6ed30();
   input += synapse0x2d6ed70();
   input += synapse0x2d6edb0();
   input += synapse0x2d6edf0();
   input += synapse0x2d6ee30();
   input += synapse0x2d6ee70();
   input += synapse0x2d67d40();
   input += synapse0x2d67d80();
   input += synapse0x2d6efc0();
   input += synapse0x2d6f000();
   input += synapse0x2d6f040();
   input += synapse0x2d6f080();
   input += synapse0x2d6f0c0();
   input += synapse0x2d6f100();
   return input;
}

double NNfunction_NN_1_5::neuron0x2b28c70() {
   double input = input0x2b28c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d6f140() {
   double input = 0.303301;
   input += synapse0x2d6f480();
   input += synapse0x2d6f4c0();
   input += synapse0x2d6f500();
   input += synapse0x2d6f540();
   input += synapse0x2d6f580();
   input += synapse0x2d6f5c0();
   input += synapse0x2d6f600();
   input += synapse0x2d6f640();
   input += synapse0x2d6f680();
   input += synapse0x2d6f6c0();
   input += synapse0x2d6f700();
   input += synapse0x2d6f740();
   input += synapse0x2d6f780();
   input += synapse0x2d6f7c0();
   input += synapse0x2d6f800();
   input += synapse0x2d6f840();
   input += synapse0x2d6f990();
   input += synapse0x2d6f2d0();
   input += synapse0x2d6f310();
   input += synapse0x2d70ad0();
   input += synapse0x2d70b10();
   input += synapse0x2d70b50();
   input += synapse0x2d70b90();
   input += synapse0x2d70bd0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d6f140() {
   double input = input0x2d6f140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d70c10() {
   double input = 1.33898;
   input += synapse0x2d70f50();
   input += synapse0x2d70f90();
   input += synapse0x2d70fd0();
   input += synapse0x2d71010();
   input += synapse0x2d71050();
   input += synapse0x2d71090();
   input += synapse0x2d710d0();
   input += synapse0x2d71110();
   input += synapse0x2d71150();
   input += synapse0x2b28860();
   input += synapse0x2b288a0();
   input += synapse0x2b288e0();
   input += synapse0x2b28920();
   input += synapse0x2b28960();
   input += synapse0x2b289a0();
   input += synapse0x2b289e0();
   input += synapse0x2d70da0();
   input += synapse0x2d70de0();
   input += synapse0x2b28b30();
   input += synapse0x2b28b70();
   input += synapse0x2b28bb0();
   input += synapse0x2b28bf0();
   input += synapse0x2b28c30();
   input += synapse0x2d719a0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d70c10() {
   double input = input0x2d70c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d719e0() {
   double input = 0.0135276;
   input += synapse0x2d71d20();
   input += synapse0x2d71d60();
   input += synapse0x2d71da0();
   input += synapse0x2d71de0();
   input += synapse0x2d71e20();
   input += synapse0x2d71e60();
   input += synapse0x2d71ea0();
   input += synapse0x2d71ee0();
   input += synapse0x2d71f20();
   input += synapse0x2d71f60();
   input += synapse0x2d71fa0();
   input += synapse0x2d71fe0();
   input += synapse0x2d72020();
   input += synapse0x2d72060();
   input += synapse0x2d720a0();
   input += synapse0x2d720e0();
   input += synapse0x2d71b70();
   input += synapse0x2d71bb0();
   input += synapse0x2d72230();
   input += synapse0x2d72270();
   input += synapse0x2d722b0();
   input += synapse0x2d722f0();
   input += synapse0x2d72330();
   input += synapse0x2d72370();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d719e0() {
   double input = input0x2d719e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d723b0() {
   double input = 0.696798;
   input += synapse0x2d726f0();
   input += synapse0x2d72730();
   input += synapse0x2d72770();
   input += synapse0x2d727b0();
   input += synapse0x2d727f0();
   input += synapse0x2d72830();
   input += synapse0x2d72870();
   input += synapse0x2d728b0();
   input += synapse0x2d728f0();
   input += synapse0x2d72930();
   input += synapse0x2d72970();
   input += synapse0x2d729b0();
   input += synapse0x2d729f0();
   input += synapse0x2d72a30();
   input += synapse0x2d72a70();
   input += synapse0x2d72ab0();
   input += synapse0x2d72540();
   input += synapse0x2d72580();
   input += synapse0x2d72c00();
   input += synapse0x2d72c40();
   input += synapse0x2d72c80();
   input += synapse0x2d72cc0();
   input += synapse0x2d72d00();
   input += synapse0x2d72d40();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d723b0() {
   double input = input0x2d723b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d72d80() {
   double input = 1.41024;
   input += synapse0x2d6b740();
   input += synapse0x2d6b780();
   input += synapse0x2d6b7c0();
   input += synapse0x2d6b800();
   input += synapse0x2d732d0();
   input += synapse0x2d73310();
   input += synapse0x2d73350();
   input += synapse0x2d73390();
   input += synapse0x2d733d0();
   input += synapse0x2d73410();
   input += synapse0x2d73450();
   input += synapse0x2d73490();
   input += synapse0x2d734d0();
   input += synapse0x2d73510();
   input += synapse0x2d73550();
   input += synapse0x2d73590();
   input += synapse0x2d72f10();
   input += synapse0x2d72f50();
   input += synapse0x2d736e0();
   input += synapse0x2d73720();
   input += synapse0x2d73760();
   input += synapse0x2d737a0();
   input += synapse0x2d737e0();
   input += synapse0x2d73820();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d72d80() {
   double input = input0x2d72d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d73860() {
   double input = 1.1402;
   input += synapse0x2d73ba0();
   input += synapse0x2d73be0();
   input += synapse0x2d73c20();
   input += synapse0x2d73c60();
   input += synapse0x2d73ca0();
   input += synapse0x2d73ce0();
   input += synapse0x2d73d20();
   input += synapse0x2d73d60();
   input += synapse0x2d73da0();
   input += synapse0x2d73de0();
   input += synapse0x2d73e20();
   input += synapse0x2d73e60();
   input += synapse0x2d73ea0();
   input += synapse0x2d73ee0();
   input += synapse0x2d73f20();
   input += synapse0x2d73f60();
   input += synapse0x2d739f0();
   input += synapse0x2d73a30();
   input += synapse0x2d740b0();
   input += synapse0x2d740f0();
   input += synapse0x2d74130();
   input += synapse0x2d74170();
   input += synapse0x2d741b0();
   input += synapse0x2d741f0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d73860() {
   double input = input0x2d73860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d74230() {
   double input = 2.64295;
   input += synapse0x2d74570();
   input += synapse0x2d745b0();
   input += synapse0x2d745f0();
   input += synapse0x2d74630();
   input += synapse0x2d74670();
   input += synapse0x2d746b0();
   input += synapse0x2d746f0();
   input += synapse0x2d74730();
   input += synapse0x2d74770();
   input += synapse0x2d747b0();
   input += synapse0x2d747f0();
   input += synapse0x2d74830();
   input += synapse0x2d74870();
   input += synapse0x2d748b0();
   input += synapse0x2d748f0();
   input += synapse0x2d74930();
   input += synapse0x2d743c0();
   input += synapse0x2d74400();
   input += synapse0x2d71190();
   input += synapse0x2d711d0();
   input += synapse0x2d71210();
   input += synapse0x2d71250();
   input += synapse0x2d71290();
   input += synapse0x2d712d0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d74230() {
   double input = input0x2d74230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d71310() {
   double input = -3.99334;
   input += synapse0x2d71650();
   input += synapse0x2d71690();
   input += synapse0x2d716d0();
   input += synapse0x2d71710();
   input += synapse0x2d71750();
   input += synapse0x2d71790();
   input += synapse0x2d717d0();
   input += synapse0x2d71810();
   input += synapse0x2d71850();
   input += synapse0x2d71890();
   input += synapse0x2d718d0();
   input += synapse0x2d71910();
   input += synapse0x2d71950();
   input += synapse0x2d75a90();
   input += synapse0x2d75ad0();
   input += synapse0x2d75b10();
   input += synapse0x2d714a0();
   input += synapse0x2d714e0();
   input += synapse0x2d75c60();
   input += synapse0x2d75ca0();
   input += synapse0x2d75ce0();
   input += synapse0x2d75d20();
   input += synapse0x2d75d60();
   input += synapse0x2d75da0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d71310() {
   double input = input0x2d71310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d75de0() {
   double input = 0.645244;
   input += synapse0x2d76120();
   input += synapse0x2d76160();
   input += synapse0x2d761a0();
   input += synapse0x2d761e0();
   input += synapse0x2d76220();
   input += synapse0x2d76260();
   input += synapse0x2d762a0();
   input += synapse0x2d762e0();
   input += synapse0x2d76320();
   input += synapse0x2d76360();
   input += synapse0x2d763a0();
   input += synapse0x2d763e0();
   input += synapse0x2d76420();
   input += synapse0x2d76460();
   input += synapse0x2d764a0();
   input += synapse0x2d764e0();
   input += synapse0x2d75f70();
   input += synapse0x2d75fb0();
   input += synapse0x2d76630();
   input += synapse0x2d76670();
   input += synapse0x2d766b0();
   input += synapse0x2d766f0();
   input += synapse0x2d76730();
   input += synapse0x2d76770();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d75de0() {
   double input = input0x2d75de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d767b0() {
   double input = -0.596653;
   input += synapse0x2d76af0();
   input += synapse0x2d76b30();
   input += synapse0x2d76b70();
   input += synapse0x2d76bb0();
   input += synapse0x2d76bf0();
   input += synapse0x2d76c30();
   input += synapse0x2d76c70();
   input += synapse0x2d76cb0();
   input += synapse0x2d76cf0();
   input += synapse0x2d76d30();
   input += synapse0x2d76d70();
   input += synapse0x2d76db0();
   input += synapse0x2d76df0();
   input += synapse0x2d76e30();
   input += synapse0x2d76e70();
   input += synapse0x2d76eb0();
   input += synapse0x2d76940();
   input += synapse0x2d76980();
   input += synapse0x2d77000();
   input += synapse0x2d77040();
   input += synapse0x2d77080();
   input += synapse0x2d770c0();
   input += synapse0x2d77100();
   input += synapse0x2d77140();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d767b0() {
   double input = input0x2d767b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d77180() {
   double input = -0.71984;
   input += synapse0x2d774c0();
   input += synapse0x2d77500();
   input += synapse0x2d77540();
   input += synapse0x2d77580();
   input += synapse0x2d775c0();
   input += synapse0x2d77600();
   input += synapse0x2d77640();
   input += synapse0x2d77680();
   input += synapse0x2d776c0();
   input += synapse0x2d77700();
   input += synapse0x2d77740();
   input += synapse0x2d77780();
   input += synapse0x2d777c0();
   input += synapse0x2d77800();
   input += synapse0x2d77840();
   input += synapse0x2d77880();
   input += synapse0x2d77310();
   input += synapse0x2d77350();
   input += synapse0x2d779d0();
   input += synapse0x2d77a10();
   input += synapse0x2d77a50();
   input += synapse0x2d77a90();
   input += synapse0x2d77ad0();
   input += synapse0x2d77b10();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d77180() {
   double input = input0x2d77180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d77b50() {
   double input = -2.88273;
   input += synapse0x2d77e90();
   input += synapse0x2d68110();
   input += synapse0x2d68150();
   input += synapse0x2d68450();
   input += synapse0x2d68490();
   input += synapse0x2d68790();
   input += synapse0x2d687d0();
   input += synapse0x2d68ad0();
   input += synapse0x2d68b10();
   input += synapse0x2d68e10();
   input += synapse0x2d68e50();
   input += synapse0x2d69150();
   input += synapse0x2d69190();
   input += synapse0x2d69490();
   input += synapse0x2d694d0();
   input += synapse0x2d697d0();
   input += synapse0x2d69810();
   input += synapse0x2d69b10();
   input += synapse0x2d69b50();
   input += synapse0x2d69e50();
   input += synapse0x2d69e90();
   input += synapse0x2d6a190();
   input += synapse0x2d6a1d0();
   input += synapse0x2d6a4d0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d77b50() {
   double input = input0x2d77b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d79960() {
   double input = -1.22139;
   input += synapse0x2d6a510();
   input += synapse0x2d6b1d0();
   input += synapse0x2d6b210();
   input += synapse0x2d77ce0();
   input += synapse0x2d77d20();
   input += synapse0x2d6b510();
   input += synapse0x2d6b550();
   input += synapse0x2d6ba70();
   input += synapse0x2d6bab0();
   input += synapse0x2d6bdb0();
   input += synapse0x2d6bdf0();
   input += synapse0x2d6c0f0();
   input += synapse0x2d6c130();
   input += synapse0x2d6c430();
   input += synapse0x2d6c470();
   input += synapse0x2d6c770();
   input += synapse0x2d6c7b0();
   input += synapse0x2d6cab0();
   input += synapse0x2d6caf0();
   input += synapse0x2d6cdf0();
   input += synapse0x2d6ce30();
   input += synapse0x2d6a810();
   input += synapse0x2d6a850();
   input += synapse0x2d79c00();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d79960() {
   double input = input0x2d79960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d79c40() {
   double input = 3.59555;
   input += synapse0x2d79f80();
   input += synapse0x2d79fc0();
   input += synapse0x2d7a000();
   input += synapse0x2d7a040();
   input += synapse0x2d7a080();
   input += synapse0x2d7a0c0();
   input += synapse0x2d7a100();
   input += synapse0x2d7a140();
   input += synapse0x2d7a180();
   input += synapse0x2d7a1c0();
   input += synapse0x2d7a200();
   input += synapse0x2d7a240();
   input += synapse0x2d7a280();
   input += synapse0x2d7a2c0();
   input += synapse0x2d7a300();
   input += synapse0x2d7a340();
   input += synapse0x2d79dd0();
   input += synapse0x2d79e10();
   input += synapse0x2d7a490();
   input += synapse0x2d7a4d0();
   input += synapse0x2d7a510();
   input += synapse0x2d7a550();
   input += synapse0x2d7a590();
   input += synapse0x2d7a5d0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d79c40() {
   double input = input0x2d79c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d7a610() {
   double input = -0.506549;
   input += synapse0x2d7a950();
   input += synapse0x2d7a990();
   input += synapse0x2d7a9d0();
   input += synapse0x2d7aa10();
   input += synapse0x2d7aa50();
   input += synapse0x2d7aa90();
   input += synapse0x2d7aad0();
   input += synapse0x2d7ab10();
   input += synapse0x2d7ab50();
   input += synapse0x2d7ab90();
   input += synapse0x2d7abd0();
   input += synapse0x2d7ac10();
   input += synapse0x2d7ac50();
   input += synapse0x2d7ac90();
   input += synapse0x2d7acd0();
   input += synapse0x2d7ad10();
   input += synapse0x2d7a7a0();
   input += synapse0x2d7a7e0();
   input += synapse0x2d7ae60();
   input += synapse0x2d7aea0();
   input += synapse0x2d7aee0();
   input += synapse0x2d7af20();
   input += synapse0x2d7af60();
   input += synapse0x2d7afa0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d7a610() {
   double input = input0x2d7a610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d7afe0() {
   double input = 0.0502335;
   input += synapse0x2d7b320();
   input += synapse0x2d7b360();
   input += synapse0x2d7b3a0();
   input += synapse0x2d7b3e0();
   input += synapse0x2d7b420();
   input += synapse0x2d7b460();
   input += synapse0x2d7b4a0();
   input += synapse0x2d7b4e0();
   input += synapse0x2d7b520();
   input += synapse0x2d7b560();
   input += synapse0x2d7b5a0();
   input += synapse0x2d7b5e0();
   input += synapse0x2d7b620();
   input += synapse0x2d7b660();
   input += synapse0x2d7b6a0();
   input += synapse0x2d7b6e0();
   input += synapse0x2d7b170();
   input += synapse0x2d7b1b0();
   input += synapse0x2d7b830();
   input += synapse0x2d7b870();
   input += synapse0x2d7b8b0();
   input += synapse0x2d7b8f0();
   input += synapse0x2d7b930();
   input += synapse0x2d7b970();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d7afe0() {
   double input = input0x2d7afe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d7b9b0() {
   double input = 0.227507;
   input += synapse0x2d7bcf0();
   input += synapse0x2d7bd30();
   input += synapse0x2d7bd70();
   input += synapse0x2d7bdb0();
   input += synapse0x2d7bdf0();
   input += synapse0x2d7be30();
   input += synapse0x2d7be70();
   input += synapse0x2d7beb0();
   input += synapse0x2d7bef0();
   input += synapse0x2d7bf30();
   input += synapse0x2d7bf70();
   input += synapse0x2d7bfb0();
   input += synapse0x2d7bff0();
   input += synapse0x2d7c030();
   input += synapse0x2d7c070();
   input += synapse0x2d7c0b0();
   input += synapse0x2d7bb40();
   input += synapse0x2d7bb80();
   input += synapse0x2d7c200();
   input += synapse0x2d7c240();
   input += synapse0x2d7c280();
   input += synapse0x2d7c2c0();
   input += synapse0x2d7c300();
   input += synapse0x2d7c340();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d7b9b0() {
   double input = input0x2d7b9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d7c380() {
   double input = 0.331842;
   input += synapse0x2d7c6c0();
   input += synapse0x2d7c700();
   input += synapse0x2d7c740();
   input += synapse0x2d7c780();
   input += synapse0x2d7c7c0();
   input += synapse0x2d7c800();
   input += synapse0x2d7c840();
   input += synapse0x2d7c880();
   input += synapse0x2d7c8c0();
   input += synapse0x2d74a80();
   input += synapse0x2d74ac0();
   input += synapse0x2d74b00();
   input += synapse0x2d74b40();
   input += synapse0x2d74b80();
   input += synapse0x2d74bc0();
   input += synapse0x2d74c00();
   input += synapse0x2d7c510();
   input += synapse0x2d7c550();
   input += synapse0x2d74d50();
   input += synapse0x2d74d90();
   input += synapse0x2d74dd0();
   input += synapse0x2d74e10();
   input += synapse0x2d74e50();
   input += synapse0x2d74e90();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d7c380() {
   double input = input0x2d7c380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d74ed0() {
   double input = 0.364326;
   input += synapse0x2d75210();
   input += synapse0x2d75250();
   input += synapse0x2d75290();
   input += synapse0x2d752d0();
   input += synapse0x2d75310();
   input += synapse0x2d75350();
   input += synapse0x2d75390();
   input += synapse0x2d753d0();
   input += synapse0x2d75410();
   input += synapse0x2d75450();
   input += synapse0x2d75490();
   input += synapse0x2d754d0();
   input += synapse0x2d75510();
   input += synapse0x2d75550();
   input += synapse0x2d75590();
   input += synapse0x2d755d0();
   input += synapse0x2d75060();
   input += synapse0x2d750a0();
   input += synapse0x2d75720();
   input += synapse0x2d75760();
   input += synapse0x2d757a0();
   input += synapse0x2d757e0();
   input += synapse0x2d75820();
   input += synapse0x2d75860();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d74ed0() {
   double input = input0x2d74ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d758a0() {
   double input = 2.61123;
   input += synapse0x2d75a30();
   input += synapse0x2d7eac0();
   input += synapse0x2d7eb00();
   input += synapse0x2d7eb40();
   input += synapse0x2d7eb80();
   input += synapse0x2d7ebc0();
   input += synapse0x2d7ec00();
   input += synapse0x2d7ec40();
   input += synapse0x2d7ec80();
   input += synapse0x2d7ecc0();
   input += synapse0x2d7ed00();
   input += synapse0x2d7ed40();
   input += synapse0x2d7ed80();
   input += synapse0x2d7edc0();
   input += synapse0x2d7ee00();
   input += synapse0x2d7ee40();
   input += synapse0x2d7e910();
   input += synapse0x2d7e950();
   input += synapse0x2d7ef90();
   input += synapse0x2d7efd0();
   input += synapse0x2d7f010();
   input += synapse0x2d7f050();
   input += synapse0x2d7f090();
   input += synapse0x2d7f0d0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d758a0() {
   double input = input0x2d758a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d7f110() {
   double input = 0.0102591;
   input += synapse0x2d7f450();
   input += synapse0x2d7f490();
   input += synapse0x2d7f4d0();
   input += synapse0x2d7f510();
   input += synapse0x2d7f550();
   input += synapse0x2d7f590();
   input += synapse0x2d7f5d0();
   input += synapse0x2d7f610();
   input += synapse0x2d7f650();
   input += synapse0x2d7f690();
   input += synapse0x2d7f6d0();
   input += synapse0x2d7f710();
   input += synapse0x2d7f750();
   input += synapse0x2d7f790();
   input += synapse0x2d7f7d0();
   input += synapse0x2d7f810();
   input += synapse0x2d7f2a0();
   input += synapse0x2d7f2e0();
   input += synapse0x2d7f960();
   input += synapse0x2d7f9a0();
   input += synapse0x2d7f9e0();
   input += synapse0x2d7fa20();
   input += synapse0x2d7fa60();
   input += synapse0x2d7faa0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d7f110() {
   double input = input0x2d7f110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d7fae0() {
   double input = -0.096983;
   input += synapse0x2d7fe20();
   input += synapse0x2d7fe60();
   input += synapse0x2d7fea0();
   input += synapse0x2d7fee0();
   input += synapse0x2d7ff20();
   input += synapse0x2d7ff60();
   input += synapse0x2d7ffa0();
   input += synapse0x2d7ffe0();
   input += synapse0x2d80020();
   input += synapse0x2d80060();
   input += synapse0x2d800a0();
   input += synapse0x2d800e0();
   input += synapse0x2d80120();
   input += synapse0x2d80160();
   input += synapse0x2d801a0();
   input += synapse0x2d801e0();
   input += synapse0x2d7fc70();
   input += synapse0x2d7fcb0();
   input += synapse0x2d80330();
   input += synapse0x2d80370();
   input += synapse0x2d803b0();
   input += synapse0x2d803f0();
   input += synapse0x2d80430();
   input += synapse0x2d80470();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d7fae0() {
   double input = input0x2d7fae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d804b0() {
   double input = -1.30425;
   input += synapse0x2d807f0();
   input += synapse0x2d80830();
   input += synapse0x2d80870();
   input += synapse0x2d808b0();
   input += synapse0x2d808f0();
   input += synapse0x2d80930();
   input += synapse0x2d80970();
   input += synapse0x2d809b0();
   input += synapse0x2d809f0();
   input += synapse0x2d80a30();
   input += synapse0x2d80a70();
   input += synapse0x2d80ab0();
   input += synapse0x2d80af0();
   input += synapse0x2d80b30();
   input += synapse0x2d80b70();
   input += synapse0x2d80bb0();
   input += synapse0x2d80640();
   input += synapse0x2d80680();
   input += synapse0x2d80d00();
   input += synapse0x2d80d40();
   input += synapse0x2d80d80();
   input += synapse0x2d80dc0();
   input += synapse0x2d80e00();
   input += synapse0x2d80e40();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d804b0() {
   double input = input0x2d804b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d80e80() {
   double input = 0.343122;
   input += synapse0x2d811c0();
   input += synapse0x2d81200();
   input += synapse0x2d81240();
   input += synapse0x2d81280();
   input += synapse0x2d812c0();
   input += synapse0x2d81300();
   input += synapse0x2d81340();
   input += synapse0x2d81380();
   input += synapse0x2d813c0();
   input += synapse0x2d81400();
   input += synapse0x2d81440();
   input += synapse0x2d81480();
   input += synapse0x2d814c0();
   input += synapse0x2d81500();
   input += synapse0x2d81540();
   input += synapse0x2d81580();
   input += synapse0x2d81010();
   input += synapse0x2d81050();
   input += synapse0x2d816d0();
   input += synapse0x2d81710();
   input += synapse0x2d81750();
   input += synapse0x2d81790();
   input += synapse0x2d817d0();
   input += synapse0x2d81810();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d80e80() {
   double input = input0x2d80e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d81850() {
   double input = 0.179207;
   input += synapse0x2d81b90();
   input += synapse0x2d81bd0();
   input += synapse0x2d81c10();
   input += synapse0x2d81c50();
   input += synapse0x2d81c90();
   input += synapse0x2d81cd0();
   input += synapse0x2d81d10();
   input += synapse0x2d81d50();
   input += synapse0x2d81d90();
   input += synapse0x2d81dd0();
   input += synapse0x2d81e10();
   input += synapse0x2d81e50();
   input += synapse0x2d81e90();
   input += synapse0x2d81ed0();
   input += synapse0x2d81f10();
   input += synapse0x2d81f50();
   input += synapse0x2d819e0();
   input += synapse0x2d81a20();
   input += synapse0x2d820a0();
   input += synapse0x2d820e0();
   input += synapse0x2d82120();
   input += synapse0x2d82160();
   input += synapse0x2d821a0();
   input += synapse0x2d821e0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d81850() {
   double input = input0x2d81850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d82220() {
   double input = 3.93003;
   input += synapse0x2d82560();
   input += synapse0x2d825a0();
   input += synapse0x2d825e0();
   input += synapse0x2d82620();
   input += synapse0x2d82660();
   input += synapse0x2d826a0();
   input += synapse0x2d826e0();
   input += synapse0x2d82720();
   input += synapse0x2d82760();
   input += synapse0x2d827a0();
   input += synapse0x2d827e0();
   input += synapse0x2d82820();
   input += synapse0x2d82860();
   input += synapse0x2d828a0();
   input += synapse0x2d828e0();
   input += synapse0x2d82920();
   input += synapse0x2d823b0();
   input += synapse0x2d823f0();
   input += synapse0x2d82a70();
   input += synapse0x2d82ab0();
   input += synapse0x2d82af0();
   input += synapse0x2d82b30();
   input += synapse0x2d82b70();
   input += synapse0x2d82bb0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d82220() {
   double input = input0x2d82220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d82bf0() {
   double input = 1.37807;
   input += synapse0x2d82f30();
   input += synapse0x2d82f70();
   input += synapse0x2d82fb0();
   input += synapse0x2d82ff0();
   input += synapse0x2d83030();
   input += synapse0x2d83070();
   input += synapse0x2d830b0();
   input += synapse0x2d830f0();
   input += synapse0x2d83130();
   input += synapse0x2d83170();
   input += synapse0x2d831b0();
   input += synapse0x2d831f0();
   input += synapse0x2d83230();
   input += synapse0x2d83270();
   input += synapse0x2d832b0();
   input += synapse0x2d832f0();
   input += synapse0x2d82d80();
   input += synapse0x2d82dc0();
   input += synapse0x2d83440();
   input += synapse0x2d83480();
   input += synapse0x2d834c0();
   input += synapse0x2d83500();
   input += synapse0x2d83540();
   input += synapse0x2d83580();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d82bf0() {
   double input = input0x2d82bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d835c0() {
   double input = 0.495221;
   input += synapse0x2d83900();
   input += synapse0x2d77ed0();
   input += synapse0x2d77f10();
   input += synapse0x2d77f50();
   input += synapse0x2d781a0();
   input += synapse0x2d781e0();
   input += synapse0x2d78220();
   input += synapse0x2d78470();
   input += synapse0x2d784b0();
   input += synapse0x2d78700();
   input += synapse0x2d78740();
   input += synapse0x2d78780();
   input += synapse0x2d789d0();
   input += synapse0x2d78a10();
   input += synapse0x2d78c60();
   input += synapse0x2d78ca0();
   input += synapse0x2d83750();
   input += synapse0x2d83790();
   input += synapse0x2d78df0();
   input += synapse0x2d79300();
   input += synapse0x2d79340();
   input += synapse0x2d79380();
   input += synapse0x2d795d0();
   input += synapse0x2d79610();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d835c0() {
   double input = input0x2d835c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d79650() {
   double input = 1.6521;
   input += synapse0x2d78ec0();
   input += synapse0x2d78f00();
   input += synapse0x2d78f40();
   input += synapse0x2d78f80();
   input += synapse0x2d79900();
   input += synapse0x2d85c50();
   input += synapse0x2d85c90();
   input += synapse0x2d85cd0();
   input += synapse0x2d85d10();
   input += synapse0x2d85d50();
   input += synapse0x2d85d90();
   input += synapse0x2d85dd0();
   input += synapse0x2d85e10();
   input += synapse0x2d85e50();
   input += synapse0x2d85e90();
   input += synapse0x2d85ed0();
   input += synapse0x2d797e0();
   input += synapse0x2d79820();
   input += synapse0x2d86020();
   input += synapse0x2d86060();
   input += synapse0x2d860a0();
   input += synapse0x2d860e0();
   input += synapse0x2d86120();
   input += synapse0x2d86160();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d79650() {
   double input = input0x2d79650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d861a0() {
   double input = -4.60381;
   input += synapse0x2d864e0();
   input += synapse0x2d86520();
   input += synapse0x2d86560();
   input += synapse0x2d865a0();
   input += synapse0x2d865e0();
   input += synapse0x2d86620();
   input += synapse0x2d86660();
   input += synapse0x2d866a0();
   input += synapse0x2d866e0();
   input += synapse0x2d86720();
   input += synapse0x2d86760();
   input += synapse0x2d867a0();
   input += synapse0x2d867e0();
   input += synapse0x2d86820();
   input += synapse0x2d86860();
   input += synapse0x2d868a0();
   input += synapse0x2d86330();
   input += synapse0x2d86370();
   input += synapse0x2d869f0();
   input += synapse0x2d86a30();
   input += synapse0x2d86a70();
   input += synapse0x2d86ab0();
   input += synapse0x2d86af0();
   input += synapse0x2d86b30();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d861a0() {
   double input = input0x2d861a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d86b70() {
   double input = 3.49959;
   input += synapse0x2d86eb0();
   input += synapse0x2d86ef0();
   input += synapse0x2d86f30();
   input += synapse0x2d86f70();
   input += synapse0x2d86fb0();
   input += synapse0x2d86ff0();
   input += synapse0x2d87030();
   input += synapse0x2d87070();
   input += synapse0x2d870b0();
   input += synapse0x2d870f0();
   input += synapse0x2d87130();
   input += synapse0x2d87170();
   input += synapse0x2d871b0();
   input += synapse0x2d871f0();
   input += synapse0x2d87230();
   input += synapse0x2d87270();
   input += synapse0x2d86d00();
   input += synapse0x2d86d40();
   input += synapse0x2d873c0();
   input += synapse0x2d87400();
   input += synapse0x2d87440();
   input += synapse0x2d87480();
   input += synapse0x2d874c0();
   input += synapse0x2d87500();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d86b70() {
   double input = input0x2d86b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d87540() {
   double input = 15.7849;
   input += synapse0x2d87880();
   input += synapse0x2d878c0();
   input += synapse0x2d87900();
   input += synapse0x2d87940();
   input += synapse0x2d87980();
   input += synapse0x2d879c0();
   input += synapse0x2d87a00();
   input += synapse0x2d87a40();
   input += synapse0x2d87a80();
   input += synapse0x2d87ac0();
   input += synapse0x2d87b00();
   input += synapse0x2d87b40();
   input += synapse0x2d87b80();
   input += synapse0x2d87bc0();
   input += synapse0x2d87c00();
   input += synapse0x2d87c40();
   input += synapse0x2d876d0();
   input += synapse0x2d87710();
   input += synapse0x2d87d90();
   input += synapse0x2d87dd0();
   input += synapse0x2d87e10();
   input += synapse0x2d87e50();
   input += synapse0x2d87e90();
   input += synapse0x2d87ed0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d87540() {
   double input = input0x2d87540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d87f10() {
   double input = 1.3901;
   input += synapse0x2d88250();
   input += synapse0x2d88290();
   input += synapse0x2d882d0();
   input += synapse0x2d88310();
   input += synapse0x2d88350();
   input += synapse0x2d88390();
   input += synapse0x2d883d0();
   input += synapse0x2d88410();
   input += synapse0x2d88450();
   input += synapse0x2d88490();
   input += synapse0x2d884d0();
   input += synapse0x2d88510();
   input += synapse0x2d88550();
   input += synapse0x2d88590();
   input += synapse0x2d885d0();
   input += synapse0x2d88610();
   input += synapse0x2d880a0();
   input += synapse0x2d880e0();
   input += synapse0x2d88760();
   input += synapse0x2d887a0();
   input += synapse0x2d887e0();
   input += synapse0x2d88820();
   input += synapse0x2d88860();
   input += synapse0x2d888a0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d87f10() {
   double input = input0x2d87f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d888e0() {
   double input = 2.13198;
   input += synapse0x2d88c20();
   input += synapse0x2d88c60();
   input += synapse0x2d88ca0();
   input += synapse0x2d88ce0();
   input += synapse0x2d88d20();
   input += synapse0x2d88d60();
   input += synapse0x2d88da0();
   input += synapse0x2d88de0();
   input += synapse0x2d88e20();
   input += synapse0x2d88e60();
   input += synapse0x2d88ea0();
   input += synapse0x2d88ee0();
   input += synapse0x2d88f20();
   input += synapse0x2d88f60();
   input += synapse0x2d88fa0();
   input += synapse0x2d88fe0();
   input += synapse0x2d88a70();
   input += synapse0x2d88ab0();
   input += synapse0x2d89130();
   input += synapse0x2d89170();
   input += synapse0x2d891b0();
   input += synapse0x2d891f0();
   input += synapse0x2d89230();
   input += synapse0x2d89270();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d888e0() {
   double input = input0x2d888e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d892b0() {
   double input = -0.242622;
   input += synapse0x2d895f0();
   input += synapse0x2d89630();
   input += synapse0x2d89670();
   input += synapse0x2d896b0();
   input += synapse0x2d896f0();
   input += synapse0x2d89730();
   input += synapse0x2d89770();
   input += synapse0x2d897b0();
   input += synapse0x2d897f0();
   input += synapse0x2d89830();
   input += synapse0x2d89870();
   input += synapse0x2d898b0();
   input += synapse0x2d898f0();
   input += synapse0x2d89930();
   input += synapse0x2d89970();
   input += synapse0x2d899b0();
   input += synapse0x2d89440();
   input += synapse0x2d89480();
   input += synapse0x2d89b00();
   input += synapse0x2d89b40();
   input += synapse0x2d89b80();
   input += synapse0x2d89bc0();
   input += synapse0x2d89c00();
   input += synapse0x2d89c40();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d892b0() {
   double input = input0x2d892b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d89c80() {
   double input = -0.0546046;
   input += synapse0x2d89fc0();
   input += synapse0x2d8a000();
   input += synapse0x2d8a040();
   input += synapse0x2d8a080();
   input += synapse0x2d8a0c0();
   input += synapse0x2d8a100();
   input += synapse0x2d8a140();
   input += synapse0x2d8a180();
   input += synapse0x2d8a1c0();
   input += synapse0x2d8a200();
   input += synapse0x2d8a240();
   input += synapse0x2d8a280();
   input += synapse0x2d8a2c0();
   input += synapse0x2d8a300();
   input += synapse0x2d8a340();
   input += synapse0x2d8a380();
   input += synapse0x2d89e10();
   input += synapse0x2d89e50();
   input += synapse0x2d8a4d0();
   input += synapse0x2d8a510();
   input += synapse0x2d8a550();
   input += synapse0x2d8a590();
   input += synapse0x2d8a5d0();
   input += synapse0x2d8a610();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d89c80() {
   double input = input0x2d89c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d8a650() {
   double input = -1.86044;
   input += synapse0x2d730c0();
   input += synapse0x2d73100();
   input += synapse0x2d73140();
   input += synapse0x2d73180();
   input += synapse0x2d731c0();
   input += synapse0x2d73200();
   input += synapse0x2d73240();
   input += synapse0x2d73280();
   input += synapse0x2d8ada0();
   input += synapse0x2d8ade0();
   input += synapse0x2d8ae20();
   input += synapse0x2d8ae60();
   input += synapse0x2d8aea0();
   input += synapse0x2d8aee0();
   input += synapse0x2d8af20();
   input += synapse0x2d8af60();
   input += synapse0x2d8a7e0();
   input += synapse0x2d8a820();
   input += synapse0x2d8b0b0();
   input += synapse0x2d8b0f0();
   input += synapse0x2d8b130();
   input += synapse0x2d8b170();
   input += synapse0x2d8b1b0();
   input += synapse0x2d8b1f0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d8a650() {
   double input = input0x2d8a650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d8b230() {
   double input = 0.445496;
   input += synapse0x2d8b570();
   input += synapse0x2d8b5b0();
   input += synapse0x2d8b5f0();
   input += synapse0x2d8b630();
   input += synapse0x2d8b670();
   input += synapse0x2d8b6b0();
   input += synapse0x2d8b6f0();
   input += synapse0x2d8b730();
   input += synapse0x2d8b770();
   input += synapse0x2d8b7b0();
   input += synapse0x2d8b7f0();
   input += synapse0x2d8b830();
   input += synapse0x2d8b870();
   input += synapse0x2d8b8b0();
   input += synapse0x2d8b8f0();
   input += synapse0x2d8b930();
   input += synapse0x2d8b3c0();
   input += synapse0x2d8b400();
   input += synapse0x2d8ba80();
   input += synapse0x2d8bac0();
   input += synapse0x2d8bb00();
   input += synapse0x2d8bb40();
   input += synapse0x2d8bb80();
   input += synapse0x2d8bbc0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d8b230() {
   double input = input0x2d8b230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d8bc00() {
   double input = 1.95191;
   input += synapse0x2d8bf40();
   input += synapse0x2d8bf80();
   input += synapse0x2d8bfc0();
   input += synapse0x2d8c000();
   input += synapse0x2d8c040();
   input += synapse0x2d8c080();
   input += synapse0x2d8c0c0();
   input += synapse0x2d8c100();
   input += synapse0x2d8c140();
   input += synapse0x2d8c180();
   input += synapse0x2d8c1c0();
   input += synapse0x2d8c200();
   input += synapse0x2d8c240();
   input += synapse0x2d8c280();
   input += synapse0x2d8c2c0();
   input += synapse0x2d8c300();
   input += synapse0x2d8bd90();
   input += synapse0x2d8bdd0();
   input += synapse0x2d7c900();
   input += synapse0x2d7c940();
   input += synapse0x2d7c980();
   input += synapse0x2d7c9c0();
   input += synapse0x2d7ca00();
   input += synapse0x2d7ca40();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d8bc00() {
   double input = input0x2d8bc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d7ca80() {
   double input = -3.2995;
   input += synapse0x2d7cdc0();
   input += synapse0x2d7ce00();
   input += synapse0x2d7ce40();
   input += synapse0x2d7ce80();
   input += synapse0x2d7cec0();
   input += synapse0x2d7cf00();
   input += synapse0x2d7cf40();
   input += synapse0x2d7cf80();
   input += synapse0x2d7cfc0();
   input += synapse0x2d7d000();
   input += synapse0x2d7d040();
   input += synapse0x2d7d080();
   input += synapse0x2d7d0c0();
   input += synapse0x2d7d100();
   input += synapse0x2d7d140();
   input += synapse0x2d7d180();
   input += synapse0x2d7cc10();
   input += synapse0x2d7cc50();
   input += synapse0x2d7d2d0();
   input += synapse0x2d7d310();
   input += synapse0x2d7d350();
   input += synapse0x2d7d390();
   input += synapse0x2d7d3d0();
   input += synapse0x2d7d410();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d7ca80() {
   double input = input0x2d7ca80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d7d450() {
   double input = 0.727093;
   input += synapse0x2d7d790();
   input += synapse0x2d7d7d0();
   input += synapse0x2d7d810();
   input += synapse0x2d7d850();
   input += synapse0x2d7d890();
   input += synapse0x2d7d8d0();
   input += synapse0x2d7d910();
   input += synapse0x2d7d950();
   input += synapse0x2d7d990();
   input += synapse0x2d7d9d0();
   input += synapse0x2d7da10();
   input += synapse0x2d7da50();
   input += synapse0x2d7da90();
   input += synapse0x2d7dad0();
   input += synapse0x2d7db10();
   input += synapse0x2d7db50();
   input += synapse0x2d7d5e0();
   input += synapse0x2d7d620();
   input += synapse0x2d7dca0();
   input += synapse0x2d7dce0();
   input += synapse0x2d7dd20();
   input += synapse0x2d7dd60();
   input += synapse0x2d7dda0();
   input += synapse0x2d7dde0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d7d450() {
   double input = input0x2d7d450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d7de20() {
   double input = 2.02875;
   input += synapse0x2d7e160();
   input += synapse0x2d7e1a0();
   input += synapse0x2d7e1e0();
   input += synapse0x2d7e220();
   input += synapse0x2d7e260();
   input += synapse0x2d7e2a0();
   input += synapse0x2d7e2e0();
   input += synapse0x2d7e320();
   input += synapse0x2d7e360();
   input += synapse0x2d7e3a0();
   input += synapse0x2d7e3e0();
   input += synapse0x2d7e420();
   input += synapse0x2d7e460();
   input += synapse0x2d7e4a0();
   input += synapse0x2d7e4e0();
   input += synapse0x2d7e520();
   input += synapse0x2d7dfb0();
   input += synapse0x2d7dff0();
   input += synapse0x2d7e670();
   input += synapse0x2d7e6b0();
   input += synapse0x2d7e6f0();
   input += synapse0x2d7e730();
   input += synapse0x2d7e770();
   input += synapse0x2d7e7b0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d7de20() {
   double input = input0x2d7de20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d90460() {
   double input = 0.166085;
   input += synapse0x2d90680();
   input += synapse0x2d906c0();
   input += synapse0x2d90700();
   input += synapse0x2d90740();
   input += synapse0x2d90780();
   input += synapse0x2d907c0();
   input += synapse0x2d90800();
   input += synapse0x2d90840();
   input += synapse0x2d90880();
   input += synapse0x2d908c0();
   input += synapse0x2d90900();
   input += synapse0x2d90940();
   input += synapse0x2d90980();
   input += synapse0x2d909c0();
   input += synapse0x2d90a00();
   input += synapse0x2d90a40();
   input += synapse0x2d7e7f0();
   input += synapse0x2d7e830();
   input += synapse0x2d90b90();
   input += synapse0x2d90bd0();
   input += synapse0x2d90c10();
   input += synapse0x2d90c50();
   input += synapse0x2d90c90();
   input += synapse0x2d90cd0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d90460() {
   double input = input0x2d90460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d90d10() {
   double input = -1.5572;
   input += synapse0x2d91050();
   input += synapse0x2d91090();
   input += synapse0x2d910d0();
   input += synapse0x2d91110();
   input += synapse0x2d91150();
   input += synapse0x2d91190();
   input += synapse0x2d911d0();
   input += synapse0x2d91210();
   input += synapse0x2d91250();
   input += synapse0x2d91290();
   input += synapse0x2d912d0();
   input += synapse0x2d91310();
   input += synapse0x2d91350();
   input += synapse0x2d91390();
   input += synapse0x2d913d0();
   input += synapse0x2d91410();
   input += synapse0x2d90ea0();
   input += synapse0x2d90ee0();
   input += synapse0x2d91560();
   input += synapse0x2d915a0();
   input += synapse0x2d915e0();
   input += synapse0x2d91620();
   input += synapse0x2d91660();
   input += synapse0x2d916a0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d90d10() {
   double input = input0x2d90d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d916e0() {
   double input = 7.59875;
   input += synapse0x2d91a20();
   input += synapse0x2d91a60();
   input += synapse0x2d91aa0();
   input += synapse0x2d91ae0();
   input += synapse0x2d91b20();
   input += synapse0x2d91b60();
   input += synapse0x2d91ba0();
   input += synapse0x2d91be0();
   input += synapse0x2d91c20();
   input += synapse0x2d91c60();
   input += synapse0x2d91ca0();
   input += synapse0x2d91ce0();
   input += synapse0x2d91d20();
   input += synapse0x2d91d60();
   input += synapse0x2d91da0();
   input += synapse0x2d91de0();
   input += synapse0x2d91870();
   input += synapse0x2d918b0();
   input += synapse0x2d91f30();
   input += synapse0x2d91f70();
   input += synapse0x2d91fb0();
   input += synapse0x2d91ff0();
   input += synapse0x2d92030();
   input += synapse0x2d92070();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d916e0() {
   double input = input0x2d916e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d920b0() {
   double input = 0.219181;
   input += synapse0x2d923f0();
   input += synapse0x2d92430();
   input += synapse0x2d92470();
   input += synapse0x2d924b0();
   input += synapse0x2d924f0();
   input += synapse0x2d92530();
   input += synapse0x2d92570();
   input += synapse0x2d925b0();
   input += synapse0x2d925f0();
   input += synapse0x2d92630();
   input += synapse0x2d92670();
   input += synapse0x2d926b0();
   input += synapse0x2d926f0();
   input += synapse0x2d92730();
   input += synapse0x2d92770();
   input += synapse0x2d927b0();
   input += synapse0x2d92240();
   input += synapse0x2d92280();
   input += synapse0x2d92900();
   input += synapse0x2d92940();
   input += synapse0x2d92980();
   input += synapse0x2d929c0();
   input += synapse0x2d92a00();
   input += synapse0x2d92a40();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d920b0() {
   double input = input0x2d920b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d992b0() {
   double input = 0.90271;
   input += synapse0x2d6de90();
   input += synapse0x2d6ded0();
   input += synapse0x2d6f3f0();
   input += synapse0x2d6f430();
   input += synapse0x2d70ec0();
   input += synapse0x2d70f00();
   input += synapse0x2d71c90();
   input += synapse0x2d71cd0();
   input += synapse0x2d72660();
   input += synapse0x2d726a0();
   input += synapse0x2d73030();
   input += synapse0x2d73070();
   input += synapse0x2d73b10();
   input += synapse0x2d73b50();
   input += synapse0x2d744e0();
   input += synapse0x2d74520();
   input += synapse0x2d715c0();
   input += synapse0x2d71600();
   input += synapse0x2d76090();
   input += synapse0x2d760d0();
   input += synapse0x2d76a60();
   input += synapse0x2d76aa0();
   input += synapse0x2d77430();
   input += synapse0x2d77470();
   input += synapse0x2d77e00();
   input += synapse0x2d77e40();
   input += synapse0x2d6ae90();
   input += synapse0x2d6aed0();
   input += synapse0x2d79ef0();
   input += synapse0x2d79f30();
   input += synapse0x2d7a8c0();
   input += synapse0x2d7a900();
   input += synapse0x2d7b290();
   input += synapse0x2d7b2d0();
   input += synapse0x2d7bc60();
   input += synapse0x2d7bca0();
   input += synapse0x2d7c630();
   input += synapse0x2d7c670();
   input += synapse0x2d75180();
   input += synapse0x2d751c0();
   input += synapse0x2d7ea30();
   input += synapse0x2d7ea70();
   input += synapse0x2d7f3c0();
   input += synapse0x2d7f400();
   input += synapse0x2d7fd90();
   input += synapse0x2d7fdd0();
   input += synapse0x2d80760();
   input += synapse0x2d807a0();
   input += synapse0x2d81130();
   input += synapse0x2d81170();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d992b0() {
   double input = input0x2d992b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d99650() {
   double input = 0.0450629;
   input += synapse0x2d83870();
   input += synapse0x2d838b0();
   input += synapse0x2d78e30();
   input += synapse0x2d78e70();
   input += synapse0x2d86450();
   input += synapse0x2d86490();
   input += synapse0x2d86e20();
   input += synapse0x2d86e60();
   input += synapse0x2d877f0();
   input += synapse0x2d87830();
   input += synapse0x2d881c0();
   input += synapse0x2d88200();
   input += synapse0x2d88b90();
   input += synapse0x2d88bd0();
   input += synapse0x2d89560();
   input += synapse0x2d895a0();
   input += synapse0x2d89f30();
   input += synapse0x2d89f70();
   input += synapse0x2d8a900();
   input += synapse0x2d8a940();
   input += synapse0x2d8b4e0();
   input += synapse0x2d8b520();
   input += synapse0x2d8beb0();
   input += synapse0x2d8bef0();
   input += synapse0x2d7cd30();
   input += synapse0x2d7cd70();
   input += synapse0x2d7d700();
   input += synapse0x2d7d740();
   input += synapse0x2d7e0d0();
   input += synapse0x2d7e110();
   input += synapse0x2d905f0();
   input += synapse0x2d90630();
   input += synapse0x2d90fc0();
   input += synapse0x2d91000();
   input += synapse0x2d91990();
   input += synapse0x2d919d0();
   input += synapse0x2d92360();
   input += synapse0x2d923a0();
   input += synapse0x2d6d2f0();
   input += synapse0x2d6d330();
   input += synapse0x2d81b00();
   input += synapse0x2d81b40();
   input += synapse0x2d92a80();
   input += synapse0x2d92ac0();
   input += synapse0x2d92b00();
   input += synapse0x2d92b40();
   input += synapse0x2d999f0();
   input += synapse0x2d99a30();
   input += synapse0x2d99a70();
   input += synapse0x2d99ab0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d99650() {
   double input = input0x2d99650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d99af0() {
   double input = -1.64127;
   input += synapse0x2d99e30();
   input += synapse0x2d99e70();
   input += synapse0x2d99eb0();
   input += synapse0x2d99ef0();
   input += synapse0x2d99f30();
   input += synapse0x2d99f70();
   input += synapse0x2d99fb0();
   input += synapse0x2d99ff0();
   input += synapse0x2d9a030();
   input += synapse0x2d9a070();
   input += synapse0x2d9a0b0();
   input += synapse0x2d9a0f0();
   input += synapse0x2d9a130();
   input += synapse0x2d9a170();
   input += synapse0x2d9a1b0();
   input += synapse0x2d9a1f0();
   input += synapse0x2d99c80();
   input += synapse0x2d99cc0();
   input += synapse0x2d9a340();
   input += synapse0x2d9a380();
   input += synapse0x2d9a3c0();
   input += synapse0x2d9a400();
   input += synapse0x2d9a440();
   input += synapse0x2d9a480();
   input += synapse0x2d9a4c0();
   input += synapse0x2d9a500();
   input += synapse0x2d9a540();
   input += synapse0x2d9a580();
   input += synapse0x2d9a5c0();
   input += synapse0x2d9a600();
   input += synapse0x2d9a640();
   input += synapse0x2d9a680();
   input += synapse0x2d9a230();
   input += synapse0x2d9a270();
   input += synapse0x2d9a2b0();
   input += synapse0x2d9a2f0();
   input += synapse0x2d9a8d0();
   input += synapse0x2d9a910();
   input += synapse0x2d9a950();
   input += synapse0x2d9a990();
   input += synapse0x2d9a9d0();
   input += synapse0x2d9aa10();
   input += synapse0x2d9aa50();
   input += synapse0x2d9aa90();
   input += synapse0x2d9aad0();
   input += synapse0x2d9ab10();
   input += synapse0x2d9ab50();
   input += synapse0x2d9ab90();
   input += synapse0x2d9abd0();
   input += synapse0x2d9ac10();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d99af0() {
   double input = input0x2d99af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d9ac50() {
   double input = -2.27524;
   input += synapse0x2d9af90();
   input += synapse0x2d9afd0();
   input += synapse0x2d9b010();
   input += synapse0x2d9b050();
   input += synapse0x2d9b090();
   input += synapse0x2d9b0d0();
   input += synapse0x2d9b110();
   input += synapse0x2d9b150();
   input += synapse0x2d9b190();
   input += synapse0x2d9b1d0();
   input += synapse0x2d9b210();
   input += synapse0x2d9b250();
   input += synapse0x2d9b290();
   input += synapse0x2d9b2d0();
   input += synapse0x2d9b310();
   input += synapse0x2d9b350();
   input += synapse0x2d9ade0();
   input += synapse0x2d9ae20();
   input += synapse0x2d9b4a0();
   input += synapse0x2d9b4e0();
   input += synapse0x2d9b520();
   input += synapse0x2d9b560();
   input += synapse0x2d9b5a0();
   input += synapse0x2d9b5e0();
   input += synapse0x2d9b620();
   input += synapse0x2d9b660();
   input += synapse0x2d9b6a0();
   input += synapse0x2d9b6e0();
   input += synapse0x2d9b720();
   input += synapse0x2d9b760();
   input += synapse0x2d9b7a0();
   input += synapse0x2d9b7e0();
   input += synapse0x2d9b390();
   input += synapse0x2d9b3d0();
   input += synapse0x2d9b410();
   input += synapse0x2d9b450();
   input += synapse0x2d9ba30();
   input += synapse0x2d9ba70();
   input += synapse0x2d9bab0();
   input += synapse0x2d9baf0();
   input += synapse0x2d9bb30();
   input += synapse0x2d9bb70();
   input += synapse0x2d9bbb0();
   input += synapse0x2d9bbf0();
   input += synapse0x2d9bc30();
   input += synapse0x2d9bc70();
   input += synapse0x2d9bcb0();
   input += synapse0x2d9bcf0();
   input += synapse0x2d9bd30();
   input += synapse0x2d9bd70();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d9ac50() {
   double input = input0x2d9ac50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d9bdb0() {
   double input = 0.0357771;
   input += synapse0x2d9c0f0();
   input += synapse0x2d9c130();
   input += synapse0x2d9c170();
   input += synapse0x2d9c1b0();
   input += synapse0x2d9c1f0();
   input += synapse0x2d9c230();
   input += synapse0x2d9c270();
   input += synapse0x2d9c2b0();
   input += synapse0x2d9c2f0();
   input += synapse0x2d9c330();
   input += synapse0x2d9c370();
   input += synapse0x2d9c3b0();
   input += synapse0x2d9c3f0();
   input += synapse0x2d9c430();
   input += synapse0x2d9c470();
   input += synapse0x2d9c4b0();
   input += synapse0x2d9bf40();
   input += synapse0x2d9bf80();
   input += synapse0x2d9c600();
   input += synapse0x2d9c640();
   input += synapse0x2d9c680();
   input += synapse0x2d9c6c0();
   input += synapse0x2d9c700();
   input += synapse0x2d9c740();
   input += synapse0x2d9c780();
   input += synapse0x2d9c7c0();
   input += synapse0x2d9c800();
   input += synapse0x2d9c840();
   input += synapse0x2d9c880();
   input += synapse0x2d9c8c0();
   input += synapse0x2d9c900();
   input += synapse0x2d9c940();
   input += synapse0x2d9c4f0();
   input += synapse0x2d9c530();
   input += synapse0x2d9c570();
   input += synapse0x2d9c5b0();
   input += synapse0x2d9cb90();
   input += synapse0x2d9cbd0();
   input += synapse0x2d9cc10();
   input += synapse0x2d9cc50();
   input += synapse0x2d9cc90();
   input += synapse0x2d9ccd0();
   input += synapse0x2d9cd10();
   input += synapse0x2d9cd50();
   input += synapse0x2d9cd90();
   input += synapse0x2d9cdd0();
   input += synapse0x2d9ce10();
   input += synapse0x2d9ce50();
   input += synapse0x2d9ce90();
   input += synapse0x2d9ced0();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d9bdb0() {
   double input = input0x2d9bdb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_5::input0x2d9cf10() {
   double input = 0.610905;
   input += synapse0x2d9d130();
   input += synapse0x2d9d170();
   input += synapse0x2d9d1b0();
   input += synapse0x2d9d1f0();
   input += synapse0x2d9d230();
   return input;
}

double NNfunction_NN_1_5::neuron0x2d9cf10() {
   double input = input0x2d9cf10();
   return (input * 1)+0;
}

double NNfunction_NN_1_5::synapse0x2d6d380() {
   return (neuron0x2d67f80()*0.295064);
}

double NNfunction_NN_1_5::synapse0x2d6d3c0() {
   return (neuron0x2d68230()*0.829573);
}

double NNfunction_NN_1_5::synapse0x2d6d400() {
   return (neuron0x2d68570()*0.369832);
}

double NNfunction_NN_1_5::synapse0x2d6d440() {
   return (neuron0x2d688b0()*0.0555758);
}

double NNfunction_NN_1_5::synapse0x2d6d480() {
   return (neuron0x2d68bf0()*-0.364631);
}

double NNfunction_NN_1_5::synapse0x2d6d4c0() {
   return (neuron0x2d68f30()*0.190844);
}

double NNfunction_NN_1_5::synapse0x2d6d500() {
   return (neuron0x2d69270()*0.105977);
}

double NNfunction_NN_1_5::synapse0x2d6d540() {
   return (neuron0x2d695b0()*0.585881);
}

double NNfunction_NN_1_5::synapse0x2d6d580() {
   return (neuron0x2d698f0()*-0.229401);
}

double NNfunction_NN_1_5::synapse0x2d6d5c0() {
   return (neuron0x2d69c30()*-0.659958);
}

double NNfunction_NN_1_5::synapse0x2d6d600() {
   return (neuron0x2d69f70()*-0.0416833);
}

double NNfunction_NN_1_5::synapse0x2d6d640() {
   return (neuron0x2d6a2b0()*0.0333321);
}

double NNfunction_NN_1_5::synapse0x2d6d680() {
   return (neuron0x2d6a5f0()*-0.156919);
}

double NNfunction_NN_1_5::synapse0x2d6d6c0() {
   return (neuron0x2d6a930()*0.0112282);
}

double NNfunction_NN_1_5::synapse0x2d6d700() {
   return (neuron0x2d6ac70()*0.184946);
}

double NNfunction_NN_1_5::synapse0x2d6d740() {
   return (neuron0x2d6afb0()*0.137153);
}

double NNfunction_NN_1_5::synapse0x2d6d1d0() {
   return (neuron0x2d6b2f0()*0.120784);
}

double NNfunction_NN_1_5::synapse0x2d6d210() {
   return (neuron0x2d6b850()*-0.0979491);
}

double NNfunction_NN_1_5::synapse0x2b1a6b0() {
   return (neuron0x2d6bb90()*-0.0202404);
}

double NNfunction_NN_1_5::synapse0x2b1a6f0() {
   return (neuron0x2d6bed0()*-0.0366396);
}

double NNfunction_NN_1_5::synapse0x2d6d780() {
   return (neuron0x2d6c210()*0.0190735);
}

double NNfunction_NN_1_5::synapse0x2d6d7c0() {
   return (neuron0x2d6c550()*-0.160589);
}

double NNfunction_NN_1_5::synapse0x2d6d800() {
   return (neuron0x2d6c890()*-0.323059);
}

double NNfunction_NN_1_5::synapse0x2d6d840() {
   return (neuron0x2d6cbd0()*1.13572);
}

double NNfunction_NN_1_5::synapse0x2d6dbc0() {
   return (neuron0x2d67f80()*0.0230747);
}

double NNfunction_NN_1_5::synapse0x2d6dc00() {
   return (neuron0x2d68230()*0.00184638);
}

double NNfunction_NN_1_5::synapse0x2d6dc40() {
   return (neuron0x2d68570()*0.317193);
}

double NNfunction_NN_1_5::synapse0x2d6dc80() {
   return (neuron0x2d688b0()*0.00289211);
}

double NNfunction_NN_1_5::synapse0x2d6dcc0() {
   return (neuron0x2d68bf0()*-0.0109383);
}

double NNfunction_NN_1_5::synapse0x2d6dd00() {
   return (neuron0x2d68f30()*0.00440311);
}

double NNfunction_NN_1_5::synapse0x2d6dd40() {
   return (neuron0x2d69270()*0.00150022);
}

double NNfunction_NN_1_5::synapse0x2d6dd80() {
   return (neuron0x2d695b0()*0.0123912);
}

double NNfunction_NN_1_5::synapse0x2d6ddc0() {
   return (neuron0x2d698f0()*0.00887071);
}

double NNfunction_NN_1_5::synapse0x2b1a500() {
   return (neuron0x2d69c30()*0.00787138);
}

double NNfunction_NN_1_5::synapse0x2b1a540() {
   return (neuron0x2d69f70()*0.0104547);
}

double NNfunction_NN_1_5::synapse0x2b1a580() {
   return (neuron0x2d6a2b0()*0.199488);
}

double NNfunction_NN_1_5::synapse0x2b1a5c0() {
   return (neuron0x2d6a5f0()*0.0166721);
}

double NNfunction_NN_1_5::synapse0x2d6e010() {
   return (neuron0x2d6a930()*-0.00266274);
}

double NNfunction_NN_1_5::synapse0x2d6e050() {
   return (neuron0x2d6ac70()*-0.00811852);
}

double NNfunction_NN_1_5::synapse0x2d6e090() {
   return (neuron0x2d6afb0()*-0.0162339);
}

double NNfunction_NN_1_5::synapse0x2d6da10() {
   return (neuron0x2d6b2f0()*-0.00557515);
}

double NNfunction_NN_1_5::synapse0x2d6da50() {
   return (neuron0x2d6b850()*0.00469853);
}

double NNfunction_NN_1_5::synapse0x2d6e1e0() {
   return (neuron0x2d6bb90()*0.0321802);
}

double NNfunction_NN_1_5::synapse0x2d6e220() {
   return (neuron0x2d6bed0()*0.0161093);
}

double NNfunction_NN_1_5::synapse0x2d6e260() {
   return (neuron0x2d6c210()*0.000929878);
}

double NNfunction_NN_1_5::synapse0x2d6e2a0() {
   return (neuron0x2d6c550()*-0.00853485);
}

double NNfunction_NN_1_5::synapse0x2d6e2e0() {
   return (neuron0x2d6c890()*-0.00522686);
}

double NNfunction_NN_1_5::synapse0x2d6e320() {
   return (neuron0x2d6cbd0()*-0.0582098);
}

double NNfunction_NN_1_5::synapse0x2d6e6a0() {
   return (neuron0x2d67f80()*0.139978);
}

double NNfunction_NN_1_5::synapse0x2d6e6e0() {
   return (neuron0x2d68230()*-0.03918);
}

double NNfunction_NN_1_5::synapse0x2d6e720() {
   return (neuron0x2d68570()*-0.00537838);
}

double NNfunction_NN_1_5::synapse0x2d6e760() {
   return (neuron0x2d688b0()*-0.510803);
}

double NNfunction_NN_1_5::synapse0x2d6e7a0() {
   return (neuron0x2d68bf0()*-0.244346);
}

double NNfunction_NN_1_5::synapse0x2d6e7e0() {
   return (neuron0x2d68f30()*-0.470638);
}

double NNfunction_NN_1_5::synapse0x2d6e820() {
   return (neuron0x2d69270()*0.190333);
}

double NNfunction_NN_1_5::synapse0x2d6e860() {
   return (neuron0x2d695b0()*0.0546446);
}

double NNfunction_NN_1_5::synapse0x2d6e8a0() {
   return (neuron0x2d698f0()*0.0801891);
}

double NNfunction_NN_1_5::synapse0x2d6e8e0() {
   return (neuron0x2d69c30()*0.0948433);
}

double NNfunction_NN_1_5::synapse0x2d6e920() {
   return (neuron0x2d69f70()*-0.274449);
}

double NNfunction_NN_1_5::synapse0x2d6e960() {
   return (neuron0x2d6a2b0()*-0.170168);
}

double NNfunction_NN_1_5::synapse0x2d6e9a0() {
   return (neuron0x2d6a5f0()*0.837799);
}

double NNfunction_NN_1_5::synapse0x2d6e9e0() {
   return (neuron0x2d6a930()*-0.83091);
}

double NNfunction_NN_1_5::synapse0x2d6ea20() {
   return (neuron0x2d6ac70()*-0.38797);
}

double NNfunction_NN_1_5::synapse0x2d6ea60() {
   return (neuron0x2d6afb0()*-0.597177);
}

double NNfunction_NN_1_5::synapse0x2d6e4f0() {
   return (neuron0x2d6b2f0()*0.286865);
}

double NNfunction_NN_1_5::synapse0x2d6e530() {
   return (neuron0x2d6b850()*0.153597);
}

double NNfunction_NN_1_5::synapse0x2b284d0() {
   return (neuron0x2d6bb90()*0.618408);
}

double NNfunction_NN_1_5::synapse0x2b28510() {
   return (neuron0x2d6bed0()*-0.524792);
}

double NNfunction_NN_1_5::synapse0x2d70990() {
   return (neuron0x2d6c210()*0.104726);
}

double NNfunction_NN_1_5::synapse0x2d709d0() {
   return (neuron0x2d6c550()*-0.320148);
}

double NNfunction_NN_1_5::synapse0x2d67cc0() {
   return (neuron0x2d6c890()*-0.0155301);
}

double NNfunction_NN_1_5::synapse0x2d67d00() {
   return (neuron0x2d6cbd0()*0.876974);
}

double NNfunction_NN_1_5::synapse0x2b28e00() {
   return (neuron0x2d67f80()*0.0356075);
}

double NNfunction_NN_1_5::synapse0x2d6df20() {
   return (neuron0x2d68230()*0.00130522);
}

double NNfunction_NN_1_5::synapse0x2d6df60() {
   return (neuron0x2d68570()*0.344464);
}

double NNfunction_NN_1_5::synapse0x2d6dfa0() {
   return (neuron0x2d688b0()*-0.00993589);
}

double NNfunction_NN_1_5::synapse0x2d6ebb0() {
   return (neuron0x2d68bf0()*-0.00362127);
}

double NNfunction_NN_1_5::synapse0x2d6ebf0() {
   return (neuron0x2d68f30()*0.00660563);
}

double NNfunction_NN_1_5::synapse0x2d6ec30() {
   return (neuron0x2d69270()*-0.00155316);
}

double NNfunction_NN_1_5::synapse0x2d6ec70() {
   return (neuron0x2d695b0()*0.00342178);
}

double NNfunction_NN_1_5::synapse0x2d6ecb0() {
   return (neuron0x2d698f0()*-0.00522519);
}

double NNfunction_NN_1_5::synapse0x2d6ecf0() {
   return (neuron0x2d69c30()*0.00721313);
}

double NNfunction_NN_1_5::synapse0x2d6ed30() {
   return (neuron0x2d69f70()*0.0192634);
}

double NNfunction_NN_1_5::synapse0x2d6ed70() {
   return (neuron0x2d6a2b0()*0.0867386);
}

double NNfunction_NN_1_5::synapse0x2d6edb0() {
   return (neuron0x2d6a5f0()*0.0100873);
}

double NNfunction_NN_1_5::synapse0x2d6edf0() {
   return (neuron0x2d6a930()*0.00432495);
}

double NNfunction_NN_1_5::synapse0x2d6ee30() {
   return (neuron0x2d6ac70()*-0.00677412);
}

double NNfunction_NN_1_5::synapse0x2d6ee70() {
   return (neuron0x2d6afb0()*-0.00792226);
}

double NNfunction_NN_1_5::synapse0x2d67d40() {
   return (neuron0x2d6b2f0()*-0.0176856);
}

double NNfunction_NN_1_5::synapse0x2d67d80() {
   return (neuron0x2d6b850()*-0.00614176);
}

double NNfunction_NN_1_5::synapse0x2d6efc0() {
   return (neuron0x2d6bb90()*0.0213757);
}

double NNfunction_NN_1_5::synapse0x2d6f000() {
   return (neuron0x2d6bed0()*0.0332382);
}

double NNfunction_NN_1_5::synapse0x2d6f040() {
   return (neuron0x2d6c210()*0.00271994);
}

double NNfunction_NN_1_5::synapse0x2d6f080() {
   return (neuron0x2d6c550()*0.00450114);
}

double NNfunction_NN_1_5::synapse0x2d6f0c0() {
   return (neuron0x2d6c890()*0.00137103);
}

double NNfunction_NN_1_5::synapse0x2d6f100() {
   return (neuron0x2d6cbd0()*4.16812);
}

double NNfunction_NN_1_5::synapse0x2d6f480() {
   return (neuron0x2d67f80()*0.564489);
}

double NNfunction_NN_1_5::synapse0x2d6f4c0() {
   return (neuron0x2d68230()*-0.234172);
}

double NNfunction_NN_1_5::synapse0x2d6f500() {
   return (neuron0x2d68570()*-0.433509);
}

double NNfunction_NN_1_5::synapse0x2d6f540() {
   return (neuron0x2d688b0()*-0.264907);
}

double NNfunction_NN_1_5::synapse0x2d6f580() {
   return (neuron0x2d68bf0()*-0.650152);
}

double NNfunction_NN_1_5::synapse0x2d6f5c0() {
   return (neuron0x2d68f30()*-0.287191);
}

double NNfunction_NN_1_5::synapse0x2d6f600() {
   return (neuron0x2d69270()*0.134396);
}

double NNfunction_NN_1_5::synapse0x2d6f640() {
   return (neuron0x2d695b0()*-0.785147);
}

double NNfunction_NN_1_5::synapse0x2d6f680() {
   return (neuron0x2d698f0()*0.0757056);
}

double NNfunction_NN_1_5::synapse0x2d6f6c0() {
   return (neuron0x2d69c30()*0.197445);
}

double NNfunction_NN_1_5::synapse0x2d6f700() {
   return (neuron0x2d69f70()*0.370811);
}

double NNfunction_NN_1_5::synapse0x2d6f740() {
   return (neuron0x2d6a2b0()*-0.413984);
}

double NNfunction_NN_1_5::synapse0x2d6f780() {
   return (neuron0x2d6a5f0()*-0.0545663);
}

double NNfunction_NN_1_5::synapse0x2d6f7c0() {
   return (neuron0x2d6a930()*0.522337);
}

double NNfunction_NN_1_5::synapse0x2d6f800() {
   return (neuron0x2d6ac70()*0.0229437);
}

double NNfunction_NN_1_5::synapse0x2d6f840() {
   return (neuron0x2d6afb0()*0.388925);
}

double NNfunction_NN_1_5::synapse0x2d6f990() {
   return (neuron0x2d6b2f0()*0.248786);
}

double NNfunction_NN_1_5::synapse0x2d6f2d0() {
   return (neuron0x2d6b850()*0.143985);
}

double NNfunction_NN_1_5::synapse0x2d6f310() {
   return (neuron0x2d6bb90()*0.25678);
}

double NNfunction_NN_1_5::synapse0x2d70ad0() {
   return (neuron0x2d6bed0()*0.677612);
}

double NNfunction_NN_1_5::synapse0x2d70b10() {
   return (neuron0x2d6c210()*0.819334);
}

double NNfunction_NN_1_5::synapse0x2d70b50() {
   return (neuron0x2d6c550()*0.479051);
}

double NNfunction_NN_1_5::synapse0x2d70b90() {
   return (neuron0x2d6c890()*0.706782);
}

double NNfunction_NN_1_5::synapse0x2d70bd0() {
   return (neuron0x2d6cbd0()*-1.43635);
}

double NNfunction_NN_1_5::synapse0x2d70f50() {
   return (neuron0x2d67f80()*-0.0353499);
}

double NNfunction_NN_1_5::synapse0x2d70f90() {
   return (neuron0x2d68230()*-0.0634207);
}

double NNfunction_NN_1_5::synapse0x2d70fd0() {
   return (neuron0x2d68570()*2.02874);
}

double NNfunction_NN_1_5::synapse0x2d71010() {
   return (neuron0x2d688b0()*0.0886855);
}

double NNfunction_NN_1_5::synapse0x2d71050() {
   return (neuron0x2d68bf0()*-0.067583);
}

double NNfunction_NN_1_5::synapse0x2d71090() {
   return (neuron0x2d68f30()*0.000655868);
}

double NNfunction_NN_1_5::synapse0x2d710d0() {
   return (neuron0x2d69270()*-0.00549915);
}

double NNfunction_NN_1_5::synapse0x2d71110() {
   return (neuron0x2d695b0()*-0.0296666);
}

double NNfunction_NN_1_5::synapse0x2d71150() {
   return (neuron0x2d698f0()*0.0636876);
}

double NNfunction_NN_1_5::synapse0x2b28860() {
   return (neuron0x2d69c30()*-0.122176);
}

double NNfunction_NN_1_5::synapse0x2b288a0() {
   return (neuron0x2d69f70()*0.1151);
}

double NNfunction_NN_1_5::synapse0x2b288e0() {
   return (neuron0x2d6a2b0()*-1.82719);
}

double NNfunction_NN_1_5::synapse0x2b28920() {
   return (neuron0x2d6a5f0()*-0.0186108);
}

double NNfunction_NN_1_5::synapse0x2b28960() {
   return (neuron0x2d6a930()*-0.0823791);
}

double NNfunction_NN_1_5::synapse0x2b289a0() {
   return (neuron0x2d6ac70()*0.103445);
}

double NNfunction_NN_1_5::synapse0x2b289e0() {
   return (neuron0x2d6afb0()*0.0766076);
}

double NNfunction_NN_1_5::synapse0x2d70da0() {
   return (neuron0x2d6b2f0()*-0.0941368);
}

double NNfunction_NN_1_5::synapse0x2d70de0() {
   return (neuron0x2d6b850()*0.0401285);
}

double NNfunction_NN_1_5::synapse0x2b28b30() {
   return (neuron0x2d6bb90()*0.025059);
}

double NNfunction_NN_1_5::synapse0x2b28b70() {
   return (neuron0x2d6bed0()*0.0941509);
}

double NNfunction_NN_1_5::synapse0x2b28bb0() {
   return (neuron0x2d6c210()*-0.0339765);
}

double NNfunction_NN_1_5::synapse0x2b28bf0() {
   return (neuron0x2d6c550()*-0.0571201);
}

double NNfunction_NN_1_5::synapse0x2b28c30() {
   return (neuron0x2d6c890()*-0.0663237);
}

double NNfunction_NN_1_5::synapse0x2d719a0() {
   return (neuron0x2d6cbd0()*1.50064);
}

double NNfunction_NN_1_5::synapse0x2d71d20() {
   return (neuron0x2d67f80()*0.0532574);
}

double NNfunction_NN_1_5::synapse0x2d71d60() {
   return (neuron0x2d68230()*-0.218015);
}

double NNfunction_NN_1_5::synapse0x2d71da0() {
   return (neuron0x2d68570()*-0.193596);
}

double NNfunction_NN_1_5::synapse0x2d71de0() {
   return (neuron0x2d688b0()*-0.0984629);
}

double NNfunction_NN_1_5::synapse0x2d71e20() {
   return (neuron0x2d68bf0()*0.64151);
}

double NNfunction_NN_1_5::synapse0x2d71e60() {
   return (neuron0x2d68f30()*-0.0129727);
}

double NNfunction_NN_1_5::synapse0x2d71ea0() {
   return (neuron0x2d69270()*0.306845);
}

double NNfunction_NN_1_5::synapse0x2d71ee0() {
   return (neuron0x2d695b0()*-0.298874);
}

double NNfunction_NN_1_5::synapse0x2d71f20() {
   return (neuron0x2d698f0()*0.286312);
}

double NNfunction_NN_1_5::synapse0x2d71f60() {
   return (neuron0x2d69c30()*-0.067326);
}

double NNfunction_NN_1_5::synapse0x2d71fa0() {
   return (neuron0x2d69f70()*0.127286);
}

double NNfunction_NN_1_5::synapse0x2d71fe0() {
   return (neuron0x2d6a2b0()*0.679978);
}

double NNfunction_NN_1_5::synapse0x2d72020() {
   return (neuron0x2d6a5f0()*-0.275968);
}

double NNfunction_NN_1_5::synapse0x2d72060() {
   return (neuron0x2d6a930()*-0.0624685);
}

double NNfunction_NN_1_5::synapse0x2d720a0() {
   return (neuron0x2d6ac70()*0.534389);
}

double NNfunction_NN_1_5::synapse0x2d720e0() {
   return (neuron0x2d6afb0()*0.000142459);
}

double NNfunction_NN_1_5::synapse0x2d71b70() {
   return (neuron0x2d6b2f0()*0.103959);
}

double NNfunction_NN_1_5::synapse0x2d71bb0() {
   return (neuron0x2d6b850()*-0.793964);
}

double NNfunction_NN_1_5::synapse0x2d72230() {
   return (neuron0x2d6bb90()*0.278842);
}

double NNfunction_NN_1_5::synapse0x2d72270() {
   return (neuron0x2d6bed0()*-0.00691505);
}

double NNfunction_NN_1_5::synapse0x2d722b0() {
   return (neuron0x2d6c210()*-0.126031);
}

double NNfunction_NN_1_5::synapse0x2d722f0() {
   return (neuron0x2d6c550()*-0.0643657);
}

double NNfunction_NN_1_5::synapse0x2d72330() {
   return (neuron0x2d6c890()*0.0432883);
}

double NNfunction_NN_1_5::synapse0x2d72370() {
   return (neuron0x2d6cbd0()*0.209996);
}

double NNfunction_NN_1_5::synapse0x2d726f0() {
   return (neuron0x2d67f80()*-0.0629456);
}

double NNfunction_NN_1_5::synapse0x2d72730() {
   return (neuron0x2d68230()*-10.6178);
}

double NNfunction_NN_1_5::synapse0x2d72770() {
   return (neuron0x2d68570()*0.144421);
}

double NNfunction_NN_1_5::synapse0x2d727b0() {
   return (neuron0x2d688b0()*0.0255417);
}

double NNfunction_NN_1_5::synapse0x2d727f0() {
   return (neuron0x2d68bf0()*0.00401367);
}

double NNfunction_NN_1_5::synapse0x2d72830() {
   return (neuron0x2d68f30()*-0.0280244);
}

double NNfunction_NN_1_5::synapse0x2d72870() {
   return (neuron0x2d69270()*0.00071435);
}

double NNfunction_NN_1_5::synapse0x2d728b0() {
   return (neuron0x2d695b0()*-0.0104558);
}

double NNfunction_NN_1_5::synapse0x2d728f0() {
   return (neuron0x2d698f0()*0.012207);
}

double NNfunction_NN_1_5::synapse0x2d72930() {
   return (neuron0x2d69c30()*-0.00275291);
}

double NNfunction_NN_1_5::synapse0x2d72970() {
   return (neuron0x2d69f70()*-0.0061573);
}

double NNfunction_NN_1_5::synapse0x2d729b0() {
   return (neuron0x2d6a2b0()*0.0440389);
}

double NNfunction_NN_1_5::synapse0x2d729f0() {
   return (neuron0x2d6a5f0()*-0.0040715);
}

double NNfunction_NN_1_5::synapse0x2d72a30() {
   return (neuron0x2d6a930()*-0.0181254);
}

double NNfunction_NN_1_5::synapse0x2d72a70() {
   return (neuron0x2d6ac70()*-0.0136736);
}

double NNfunction_NN_1_5::synapse0x2d72ab0() {
   return (neuron0x2d6afb0()*-0.017524);
}

double NNfunction_NN_1_5::synapse0x2d72540() {
   return (neuron0x2d6b2f0()*0.0197312);
}

double NNfunction_NN_1_5::synapse0x2d72580() {
   return (neuron0x2d6b850()*0.0102796);
}

double NNfunction_NN_1_5::synapse0x2d72c00() {
   return (neuron0x2d6bb90()*0.0102474);
}

double NNfunction_NN_1_5::synapse0x2d72c40() {
   return (neuron0x2d6bed0()*0.00937686);
}

double NNfunction_NN_1_5::synapse0x2d72c80() {
   return (neuron0x2d6c210()*0.00275283);
}

double NNfunction_NN_1_5::synapse0x2d72cc0() {
   return (neuron0x2d6c550()*-0.00966404);
}

double NNfunction_NN_1_5::synapse0x2d72d00() {
   return (neuron0x2d6c890()*0.0124357);
}

double NNfunction_NN_1_5::synapse0x2d72d40() {
   return (neuron0x2d6cbd0()*-3.36483);
}

double NNfunction_NN_1_5::synapse0x2d6b740() {
   return (neuron0x2d67f80()*0.0116799);
}

double NNfunction_NN_1_5::synapse0x2d6b780() {
   return (neuron0x2d68230()*-19.4211);
}

double NNfunction_NN_1_5::synapse0x2d6b7c0() {
   return (neuron0x2d68570()*2.40058);
}

double NNfunction_NN_1_5::synapse0x2d6b800() {
   return (neuron0x2d688b0()*0.03042);
}

double NNfunction_NN_1_5::synapse0x2d732d0() {
   return (neuron0x2d68bf0()*0.0186995);
}

double NNfunction_NN_1_5::synapse0x2d73310() {
   return (neuron0x2d68f30()*-0.047199);
}

double NNfunction_NN_1_5::synapse0x2d73350() {
   return (neuron0x2d69270()*0.0470131);
}

double NNfunction_NN_1_5::synapse0x2d73390() {
   return (neuron0x2d695b0()*-0.0281397);
}

double NNfunction_NN_1_5::synapse0x2d733d0() {
   return (neuron0x2d698f0()*0.032684);
}

double NNfunction_NN_1_5::synapse0x2d73410() {
   return (neuron0x2d69c30()*0.0050798);
}

double NNfunction_NN_1_5::synapse0x2d73450() {
   return (neuron0x2d69f70()*0.0197212);
}

double NNfunction_NN_1_5::synapse0x2d73490() {
   return (neuron0x2d6a2b0()*-0.295468);
}

double NNfunction_NN_1_5::synapse0x2d734d0() {
   return (neuron0x2d6a5f0()*-0.051597);
}

double NNfunction_NN_1_5::synapse0x2d73510() {
   return (neuron0x2d6a930()*0.0279146);
}

double NNfunction_NN_1_5::synapse0x2d73550() {
   return (neuron0x2d6ac70()*-0.00170568);
}

double NNfunction_NN_1_5::synapse0x2d73590() {
   return (neuron0x2d6afb0()*-0.0220812);
}

double NNfunction_NN_1_5::synapse0x2d72f10() {
   return (neuron0x2d6b2f0()*-0.0103164);
}

double NNfunction_NN_1_5::synapse0x2d72f50() {
   return (neuron0x2d6b850()*-0.0301849);
}

double NNfunction_NN_1_5::synapse0x2d736e0() {
   return (neuron0x2d6bb90()*0.0471347);
}

double NNfunction_NN_1_5::synapse0x2d73720() {
   return (neuron0x2d6bed0()*-0.019646);
}

double NNfunction_NN_1_5::synapse0x2d73760() {
   return (neuron0x2d6c210()*0.0274847);
}

double NNfunction_NN_1_5::synapse0x2d737a0() {
   return (neuron0x2d6c550()*0.00225);
}

double NNfunction_NN_1_5::synapse0x2d737e0() {
   return (neuron0x2d6c890()*-0.00660806);
}

double NNfunction_NN_1_5::synapse0x2d73820() {
   return (neuron0x2d6cbd0()*-0.0212616);
}

double NNfunction_NN_1_5::synapse0x2d73ba0() {
   return (neuron0x2d67f80()*-0.0322226);
}

double NNfunction_NN_1_5::synapse0x2d73be0() {
   return (neuron0x2d68230()*-7.87401);
}

double NNfunction_NN_1_5::synapse0x2d73c20() {
   return (neuron0x2d68570()*-0.159011);
}

double NNfunction_NN_1_5::synapse0x2d73c60() {
   return (neuron0x2d688b0()*0.0299207);
}

double NNfunction_NN_1_5::synapse0x2d73ca0() {
   return (neuron0x2d68bf0()*0.00912488);
}

double NNfunction_NN_1_5::synapse0x2d73ce0() {
   return (neuron0x2d68f30()*-0.0265301);
}

double NNfunction_NN_1_5::synapse0x2d73d20() {
   return (neuron0x2d69270()*0.00218522);
}

double NNfunction_NN_1_5::synapse0x2d73d60() {
   return (neuron0x2d695b0()*-0.0072737);
}

double NNfunction_NN_1_5::synapse0x2d73da0() {
   return (neuron0x2d698f0()*0.038174);
}

double NNfunction_NN_1_5::synapse0x2d73de0() {
   return (neuron0x2d69c30()*-0.0290358);
}

double NNfunction_NN_1_5::synapse0x2d73e20() {
   return (neuron0x2d69f70()*0.000835864);
}

double NNfunction_NN_1_5::synapse0x2d73e60() {
   return (neuron0x2d6a2b0()*-0.179028);
}

double NNfunction_NN_1_5::synapse0x2d73ea0() {
   return (neuron0x2d6a5f0()*-0.0456918);
}

double NNfunction_NN_1_5::synapse0x2d73ee0() {
   return (neuron0x2d6a930()*-0.00969682);
}

double NNfunction_NN_1_5::synapse0x2d73f20() {
   return (neuron0x2d6ac70()*-0.0240949);
}

double NNfunction_NN_1_5::synapse0x2d73f60() {
   return (neuron0x2d6afb0()*-0.0346664);
}

double NNfunction_NN_1_5::synapse0x2d739f0() {
   return (neuron0x2d6b2f0()*0.0137709);
}

double NNfunction_NN_1_5::synapse0x2d73a30() {
   return (neuron0x2d6b850()*0.0603486);
}

double NNfunction_NN_1_5::synapse0x2d740b0() {
   return (neuron0x2d6bb90()*0.00402044);
}

double NNfunction_NN_1_5::synapse0x2d740f0() {
   return (neuron0x2d6bed0()*0.0226756);
}

double NNfunction_NN_1_5::synapse0x2d74130() {
   return (neuron0x2d6c210()*-0.0175739);
}

double NNfunction_NN_1_5::synapse0x2d74170() {
   return (neuron0x2d6c550()*-0.0338415);
}

double NNfunction_NN_1_5::synapse0x2d741b0() {
   return (neuron0x2d6c890()*0.0184009);
}

double NNfunction_NN_1_5::synapse0x2d741f0() {
   return (neuron0x2d6cbd0()*-0.0699552);
}

double NNfunction_NN_1_5::synapse0x2d74570() {
   return (neuron0x2d67f80()*0.103575);
}

double NNfunction_NN_1_5::synapse0x2d745b0() {
   return (neuron0x2d68230()*-0.176281);
}

double NNfunction_NN_1_5::synapse0x2d745f0() {
   return (neuron0x2d68570()*1.49159);
}

double NNfunction_NN_1_5::synapse0x2d74630() {
   return (neuron0x2d688b0()*0.12657);
}

double NNfunction_NN_1_5::synapse0x2d74670() {
   return (neuron0x2d68bf0()*-0.0798048);
}

double NNfunction_NN_1_5::synapse0x2d746b0() {
   return (neuron0x2d68f30()*0.00138237);
}

double NNfunction_NN_1_5::synapse0x2d746f0() {
   return (neuron0x2d69270()*-0.0253818);
}

double NNfunction_NN_1_5::synapse0x2d74730() {
   return (neuron0x2d695b0()*-0.0543324);
}

double NNfunction_NN_1_5::synapse0x2d74770() {
   return (neuron0x2d698f0()*0.0252443);
}

double NNfunction_NN_1_5::synapse0x2d747b0() {
   return (neuron0x2d69c30()*0.101303);
}

double NNfunction_NN_1_5::synapse0x2d747f0() {
   return (neuron0x2d69f70()*-0.128997);
}

double NNfunction_NN_1_5::synapse0x2d74830() {
   return (neuron0x2d6a2b0()*-2.31592);
}

double NNfunction_NN_1_5::synapse0x2d74870() {
   return (neuron0x2d6a5f0()*0.0922654);
}

double NNfunction_NN_1_5::synapse0x2d748b0() {
   return (neuron0x2d6a930()*0.0140682);
}

double NNfunction_NN_1_5::synapse0x2d748f0() {
   return (neuron0x2d6ac70()*-0.00500922);
}

double NNfunction_NN_1_5::synapse0x2d74930() {
   return (neuron0x2d6afb0()*-0.108088);
}

double NNfunction_NN_1_5::synapse0x2d743c0() {
   return (neuron0x2d6b2f0()*-0.0234992);
}

double NNfunction_NN_1_5::synapse0x2d74400() {
   return (neuron0x2d6b850()*-0.0735232);
}

double NNfunction_NN_1_5::synapse0x2d71190() {
   return (neuron0x2d6bb90()*0.101869);
}

double NNfunction_NN_1_5::synapse0x2d711d0() {
   return (neuron0x2d6bed0()*0.123122);
}

double NNfunction_NN_1_5::synapse0x2d71210() {
   return (neuron0x2d6c210()*0.078759);
}

double NNfunction_NN_1_5::synapse0x2d71250() {
   return (neuron0x2d6c550()*-0.035152);
}

double NNfunction_NN_1_5::synapse0x2d71290() {
   return (neuron0x2d6c890()*-0.0147229);
}

double NNfunction_NN_1_5::synapse0x2d712d0() {
   return (neuron0x2d6cbd0()*0.0183523);
}

double NNfunction_NN_1_5::synapse0x2d71650() {
   return (neuron0x2d67f80()*-0.0293458);
}

double NNfunction_NN_1_5::synapse0x2d71690() {
   return (neuron0x2d68230()*-0.0795955);
}

double NNfunction_NN_1_5::synapse0x2d716d0() {
   return (neuron0x2d68570()*-2.61459);
}

double NNfunction_NN_1_5::synapse0x2d71710() {
   return (neuron0x2d688b0()*-0.0244468);
}

double NNfunction_NN_1_5::synapse0x2d71750() {
   return (neuron0x2d68bf0()*-0.0287699);
}

double NNfunction_NN_1_5::synapse0x2d71790() {
   return (neuron0x2d68f30()*-0.0499481);
}

double NNfunction_NN_1_5::synapse0x2d717d0() {
   return (neuron0x2d69270()*0.0193197);
}

double NNfunction_NN_1_5::synapse0x2d71810() {
   return (neuron0x2d695b0()*-0.0655907);
}

double NNfunction_NN_1_5::synapse0x2d71850() {
   return (neuron0x2d698f0()*0.0135974);
}

double NNfunction_NN_1_5::synapse0x2d71890() {
   return (neuron0x2d69c30()*0.0433747);
}

double NNfunction_NN_1_5::synapse0x2d718d0() {
   return (neuron0x2d69f70()*0.012577);
}

double NNfunction_NN_1_5::synapse0x2d71910() {
   return (neuron0x2d6a2b0()*0.696666);
}

double NNfunction_NN_1_5::synapse0x2d71950() {
   return (neuron0x2d6a5f0()*-0.0125107);
}

double NNfunction_NN_1_5::synapse0x2d75a90() {
   return (neuron0x2d6a930()*0.0247001);
}

double NNfunction_NN_1_5::synapse0x2d75ad0() {
   return (neuron0x2d6ac70()*0.000480187);
}

double NNfunction_NN_1_5::synapse0x2d75b10() {
   return (neuron0x2d6afb0()*-0.0405117);
}

double NNfunction_NN_1_5::synapse0x2d714a0() {
   return (neuron0x2d6b2f0()*-0.0207367);
}

double NNfunction_NN_1_5::synapse0x2d714e0() {
   return (neuron0x2d6b850()*-0.0184454);
}

double NNfunction_NN_1_5::synapse0x2d75c60() {
   return (neuron0x2d6bb90()*0.0547392);
}

double NNfunction_NN_1_5::synapse0x2d75ca0() {
   return (neuron0x2d6bed0()*0.00888652);
}

double NNfunction_NN_1_5::synapse0x2d75ce0() {
   return (neuron0x2d6c210()*0.051945);
}

double NNfunction_NN_1_5::synapse0x2d75d20() {
   return (neuron0x2d6c550()*-0.0233671);
}

double NNfunction_NN_1_5::synapse0x2d75d60() {
   return (neuron0x2d6c890()*0.00585917);
}

double NNfunction_NN_1_5::synapse0x2d75da0() {
   return (neuron0x2d6cbd0()*0.0506255);
}

double NNfunction_NN_1_5::synapse0x2d76120() {
   return (neuron0x2d67f80()*0.0495264);
}

double NNfunction_NN_1_5::synapse0x2d76160() {
   return (neuron0x2d68230()*0.000613077);
}

double NNfunction_NN_1_5::synapse0x2d761a0() {
   return (neuron0x2d68570()*1.02409);
}

double NNfunction_NN_1_5::synapse0x2d761e0() {
   return (neuron0x2d688b0()*0.00848755);
}

double NNfunction_NN_1_5::synapse0x2d76220() {
   return (neuron0x2d68bf0()*0.00495292);
}

double NNfunction_NN_1_5::synapse0x2d76260() {
   return (neuron0x2d68f30()*0.0179769);
}

double NNfunction_NN_1_5::synapse0x2d762a0() {
   return (neuron0x2d69270()*-0.0332224);
}

double NNfunction_NN_1_5::synapse0x2d762e0() {
   return (neuron0x2d695b0()*-0.0130497);
}

double NNfunction_NN_1_5::synapse0x2d76320() {
   return (neuron0x2d698f0()*-0.0455964);
}

double NNfunction_NN_1_5::synapse0x2d76360() {
   return (neuron0x2d69c30()*0.0318815);
}

double NNfunction_NN_1_5::synapse0x2d763a0() {
   return (neuron0x2d69f70()*0.0121802);
}

double NNfunction_NN_1_5::synapse0x2d763e0() {
   return (neuron0x2d6a2b0()*1.13587);
}

double NNfunction_NN_1_5::synapse0x2d76420() {
   return (neuron0x2d6a5f0()*0.02107);
}

double NNfunction_NN_1_5::synapse0x2d76460() {
   return (neuron0x2d6a930()*-0.00507937);
}

double NNfunction_NN_1_5::synapse0x2d764a0() {
   return (neuron0x2d6ac70()*-0.0328305);
}

double NNfunction_NN_1_5::synapse0x2d764e0() {
   return (neuron0x2d6afb0()*-0.0206193);
}

double NNfunction_NN_1_5::synapse0x2d75f70() {
   return (neuron0x2d6b2f0()*-0.0267612);
}

double NNfunction_NN_1_5::synapse0x2d75fb0() {
   return (neuron0x2d6b850()*0.0359504);
}

double NNfunction_NN_1_5::synapse0x2d76630() {
   return (neuron0x2d6bb90()*0.0453752);
}

double NNfunction_NN_1_5::synapse0x2d76670() {
   return (neuron0x2d6bed0()*0.0439522);
}

double NNfunction_NN_1_5::synapse0x2d766b0() {
   return (neuron0x2d6c210()*-0.00704052);
}

double NNfunction_NN_1_5::synapse0x2d766f0() {
   return (neuron0x2d6c550()*0.0286932);
}

double NNfunction_NN_1_5::synapse0x2d76730() {
   return (neuron0x2d6c890()*0.0314291);
}

double NNfunction_NN_1_5::synapse0x2d76770() {
   return (neuron0x2d6cbd0()*4.28955);
}

double NNfunction_NN_1_5::synapse0x2d76af0() {
   return (neuron0x2d67f80()*0.207386);
}

double NNfunction_NN_1_5::synapse0x2d76b30() {
   return (neuron0x2d68230()*-0.182094);
}

double NNfunction_NN_1_5::synapse0x2d76b70() {
   return (neuron0x2d68570()*-0.430694);
}

double NNfunction_NN_1_5::synapse0x2d76bb0() {
   return (neuron0x2d688b0()*-0.976222);
}

double NNfunction_NN_1_5::synapse0x2d76bf0() {
   return (neuron0x2d68bf0()*0.0587548);
}

double NNfunction_NN_1_5::synapse0x2d76c30() {
   return (neuron0x2d68f30()*-0.0237411);
}

double NNfunction_NN_1_5::synapse0x2d76c70() {
   return (neuron0x2d69270()*-0.038133);
}

double NNfunction_NN_1_5::synapse0x2d76cb0() {
   return (neuron0x2d695b0()*0.546299);
}

double NNfunction_NN_1_5::synapse0x2d76cf0() {
   return (neuron0x2d698f0()*-0.113678);
}

double NNfunction_NN_1_5::synapse0x2d76d30() {
   return (neuron0x2d69c30()*-0.157169);
}

double NNfunction_NN_1_5::synapse0x2d76d70() {
   return (neuron0x2d69f70()*0.0662869);
}

double NNfunction_NN_1_5::synapse0x2d76db0() {
   return (neuron0x2d6a2b0()*0.79002);
}

double NNfunction_NN_1_5::synapse0x2d76df0() {
   return (neuron0x2d6a5f0()*-0.14332);
}

double NNfunction_NN_1_5::synapse0x2d76e30() {
   return (neuron0x2d6a930()*-0.147476);
}

double NNfunction_NN_1_5::synapse0x2d76e70() {
   return (neuron0x2d6ac70()*-0.234912);
}

double NNfunction_NN_1_5::synapse0x2d76eb0() {
   return (neuron0x2d6afb0()*0.169796);
}

double NNfunction_NN_1_5::synapse0x2d76940() {
   return (neuron0x2d6b2f0()*-0.0327042);
}

double NNfunction_NN_1_5::synapse0x2d76980() {
   return (neuron0x2d6b850()*0.354773);
}

double NNfunction_NN_1_5::synapse0x2d77000() {
   return (neuron0x2d6bb90()*-0.177233);
}

double NNfunction_NN_1_5::synapse0x2d77040() {
   return (neuron0x2d6bed0()*0.197058);
}

double NNfunction_NN_1_5::synapse0x2d77080() {
   return (neuron0x2d6c210()*-0.283577);
}

double NNfunction_NN_1_5::synapse0x2d770c0() {
   return (neuron0x2d6c550()*-0.0208521);
}

double NNfunction_NN_1_5::synapse0x2d77100() {
   return (neuron0x2d6c890()*0.0537314);
}

double NNfunction_NN_1_5::synapse0x2d77140() {
   return (neuron0x2d6cbd0()*-0.161585);
}

double NNfunction_NN_1_5::synapse0x2d774c0() {
   return (neuron0x2d67f80()*0.0421082);
}

double NNfunction_NN_1_5::synapse0x2d77500() {
   return (neuron0x2d68230()*-0.105565);
}

double NNfunction_NN_1_5::synapse0x2d77540() {
   return (neuron0x2d68570()*-1.1408);
}

double NNfunction_NN_1_5::synapse0x2d77580() {
   return (neuron0x2d688b0()*-0.137066);
}

double NNfunction_NN_1_5::synapse0x2d775c0() {
   return (neuron0x2d68bf0()*0.0584741);
}

double NNfunction_NN_1_5::synapse0x2d77600() {
   return (neuron0x2d68f30()*-0.134484);
}

double NNfunction_NN_1_5::synapse0x2d77640() {
   return (neuron0x2d69270()*-0.0595117);
}

double NNfunction_NN_1_5::synapse0x2d77680() {
   return (neuron0x2d695b0()*-0.343378);
}

double NNfunction_NN_1_5::synapse0x2d776c0() {
   return (neuron0x2d698f0()*0.120342);
}

double NNfunction_NN_1_5::synapse0x2d77700() {
   return (neuron0x2d69c30()*-0.203738);
}

double NNfunction_NN_1_5::synapse0x2d77740() {
   return (neuron0x2d69f70()*0.151291);
}

double NNfunction_NN_1_5::synapse0x2d77780() {
   return (neuron0x2d6a2b0()*0.00874453);
}

double NNfunction_NN_1_5::synapse0x2d777c0() {
   return (neuron0x2d6a5f0()*0.0208906);
}

double NNfunction_NN_1_5::synapse0x2d77800() {
   return (neuron0x2d6a930()*0.101176);
}

double NNfunction_NN_1_5::synapse0x2d77840() {
   return (neuron0x2d6ac70()*0.176586);
}

double NNfunction_NN_1_5::synapse0x2d77880() {
   return (neuron0x2d6afb0()*-0.018653);
}

double NNfunction_NN_1_5::synapse0x2d77310() {
   return (neuron0x2d6b2f0()*0.11666);
}

double NNfunction_NN_1_5::synapse0x2d77350() {
   return (neuron0x2d6b850()*-0.089036);
}

double NNfunction_NN_1_5::synapse0x2d779d0() {
   return (neuron0x2d6bb90()*0.0101659);
}

double NNfunction_NN_1_5::synapse0x2d77a10() {
   return (neuron0x2d6bed0()*0.0370701);
}

double NNfunction_NN_1_5::synapse0x2d77a50() {
   return (neuron0x2d6c210()*0.142589);
}

double NNfunction_NN_1_5::synapse0x2d77a90() {
   return (neuron0x2d6c550()*-0.0799859);
}

double NNfunction_NN_1_5::synapse0x2d77ad0() {
   return (neuron0x2d6c890()*-0.0799978);
}

double NNfunction_NN_1_5::synapse0x2d77b10() {
   return (neuron0x2d6cbd0()*1.07097);
}

double NNfunction_NN_1_5::synapse0x2d77e90() {
   return (neuron0x2d67f80()*0.038477);
}

double NNfunction_NN_1_5::synapse0x2d68110() {
   return (neuron0x2d68230()*0.0177593);
}

double NNfunction_NN_1_5::synapse0x2d68150() {
   return (neuron0x2d68570()*-3.35429);
}

double NNfunction_NN_1_5::synapse0x2d68450() {
   return (neuron0x2d688b0()*-0.0213589);
}

double NNfunction_NN_1_5::synapse0x2d68490() {
   return (neuron0x2d68bf0()*0.0231513);
}

double NNfunction_NN_1_5::synapse0x2d68790() {
   return (neuron0x2d68f30()*0.00182977);
}

double NNfunction_NN_1_5::synapse0x2d687d0() {
   return (neuron0x2d69270()*0.0022422);
}

double NNfunction_NN_1_5::synapse0x2d68ad0() {
   return (neuron0x2d695b0()*0.0166063);
}

double NNfunction_NN_1_5::synapse0x2d68b10() {
   return (neuron0x2d698f0()*-0.0375721);
}

double NNfunction_NN_1_5::synapse0x2d68e10() {
   return (neuron0x2d69c30()*0.0156231);
}

double NNfunction_NN_1_5::synapse0x2d68e50() {
   return (neuron0x2d69f70()*-0.00213328);
}

double NNfunction_NN_1_5::synapse0x2d69150() {
   return (neuron0x2d6a2b0()*-0.117769);
}

double NNfunction_NN_1_5::synapse0x2d69190() {
   return (neuron0x2d6a5f0()*-0.00770721);
}

double NNfunction_NN_1_5::synapse0x2d69490() {
   return (neuron0x2d6a930()*-0.028983);
}

double NNfunction_NN_1_5::synapse0x2d694d0() {
   return (neuron0x2d6ac70()*0.026725);
}

double NNfunction_NN_1_5::synapse0x2d697d0() {
   return (neuron0x2d6afb0()*0.00251124);
}

double NNfunction_NN_1_5::synapse0x2d69810() {
   return (neuron0x2d6b2f0()*0.0172351);
}

double NNfunction_NN_1_5::synapse0x2d69b10() {
   return (neuron0x2d6b850()*0.0144458);
}

double NNfunction_NN_1_5::synapse0x2d69b50() {
   return (neuron0x2d6bb90()*-0.0148883);
}

double NNfunction_NN_1_5::synapse0x2d69e50() {
   return (neuron0x2d6bed0()*0.00964458);
}

double NNfunction_NN_1_5::synapse0x2d69e90() {
   return (neuron0x2d6c210()*-0.032267);
}

double NNfunction_NN_1_5::synapse0x2d6a190() {
   return (neuron0x2d6c550()*0.0278843);
}

double NNfunction_NN_1_5::synapse0x2d6a1d0() {
   return (neuron0x2d6c890()*-0.000685149);
}

double NNfunction_NN_1_5::synapse0x2d6a4d0() {
   return (neuron0x2d6cbd0()*-5.50593);
}

double NNfunction_NN_1_5::synapse0x2d6a510() {
   return (neuron0x2d67f80()*0.00801016);
}

double NNfunction_NN_1_5::synapse0x2d6b1d0() {
   return (neuron0x2d68230()*5.88397);
}

double NNfunction_NN_1_5::synapse0x2d6b210() {
   return (neuron0x2d68570()*-0.515634);
}

double NNfunction_NN_1_5::synapse0x2d77ce0() {
   return (neuron0x2d688b0()*-0.0289089);
}

double NNfunction_NN_1_5::synapse0x2d77d20() {
   return (neuron0x2d68bf0()*0.0162108);
}

double NNfunction_NN_1_5::synapse0x2d6b510() {
   return (neuron0x2d68f30()*-0.0277001);
}

double NNfunction_NN_1_5::synapse0x2d6b550() {
   return (neuron0x2d69270()*-0.00545385);
}

double NNfunction_NN_1_5::synapse0x2d6ba70() {
   return (neuron0x2d695b0()*-0.0367563);
}

double NNfunction_NN_1_5::synapse0x2d6bab0() {
   return (neuron0x2d698f0()*-0.0225626);
}

double NNfunction_NN_1_5::synapse0x2d6bdb0() {
   return (neuron0x2d69c30()*0.045422);
}

double NNfunction_NN_1_5::synapse0x2d6bdf0() {
   return (neuron0x2d69f70()*0.0548179);
}

double NNfunction_NN_1_5::synapse0x2d6c0f0() {
   return (neuron0x2d6a2b0()*0.569294);
}

double NNfunction_NN_1_5::synapse0x2d6c130() {
   return (neuron0x2d6a5f0()*0.067271);
}

double NNfunction_NN_1_5::synapse0x2d6c430() {
   return (neuron0x2d6a930()*-0.0104469);
}

double NNfunction_NN_1_5::synapse0x2d6c470() {
   return (neuron0x2d6ac70()*0.0230902);
}

double NNfunction_NN_1_5::synapse0x2d6c770() {
   return (neuron0x2d6afb0()*-0.000515951);
}

double NNfunction_NN_1_5::synapse0x2d6c7b0() {
   return (neuron0x2d6b2f0()*-0.0236403);
}

double NNfunction_NN_1_5::synapse0x2d6cab0() {
   return (neuron0x2d6b850()*-0.0259298);
}

double NNfunction_NN_1_5::synapse0x2d6caf0() {
   return (neuron0x2d6bb90()*0.0346637);
}

double NNfunction_NN_1_5::synapse0x2d6cdf0() {
   return (neuron0x2d6bed0()*-0.0358203);
}

double NNfunction_NN_1_5::synapse0x2d6ce30() {
   return (neuron0x2d6c210()*0.0326568);
}

double NNfunction_NN_1_5::synapse0x2d6a810() {
   return (neuron0x2d6c550()*0.0637144);
}

double NNfunction_NN_1_5::synapse0x2d6a850() {
   return (neuron0x2d6c890()*-0.0720942);
}

double NNfunction_NN_1_5::synapse0x2d79c00() {
   return (neuron0x2d6cbd0()*0.0530456);
}

double NNfunction_NN_1_5::synapse0x2d79f80() {
   return (neuron0x2d67f80()*0.0339799);
}

double NNfunction_NN_1_5::synapse0x2d79fc0() {
   return (neuron0x2d68230()*0.00308236);
}

double NNfunction_NN_1_5::synapse0x2d7a000() {
   return (neuron0x2d68570()*1.22024);
}

double NNfunction_NN_1_5::synapse0x2d7a040() {
   return (neuron0x2d688b0()*0.00509896);
}

double NNfunction_NN_1_5::synapse0x2d7a080() {
   return (neuron0x2d68bf0()*-0.012854);
}

double NNfunction_NN_1_5::synapse0x2d7a0c0() {
   return (neuron0x2d68f30()*-0.0100007);
}

double NNfunction_NN_1_5::synapse0x2d7a100() {
   return (neuron0x2d69270()*0.0254626);
}

double NNfunction_NN_1_5::synapse0x2d7a140() {
   return (neuron0x2d695b0()*0.0132428);
}

double NNfunction_NN_1_5::synapse0x2d7a180() {
   return (neuron0x2d698f0()*0.0164793);
}

double NNfunction_NN_1_5::synapse0x2d7a1c0() {
   return (neuron0x2d69c30()*0.0216278);
}

double NNfunction_NN_1_5::synapse0x2d7a200() {
   return (neuron0x2d69f70()*-0.00103709);
}

double NNfunction_NN_1_5::synapse0x2d7a240() {
   return (neuron0x2d6a2b0()*-0.0178377);
}

double NNfunction_NN_1_5::synapse0x2d7a280() {
   return (neuron0x2d6a5f0()*0.00273855);
}

double NNfunction_NN_1_5::synapse0x2d7a2c0() {
   return (neuron0x2d6a930()*0.0131128);
}

double NNfunction_NN_1_5::synapse0x2d7a300() {
   return (neuron0x2d6ac70()*-0.00780585);
}

double NNfunction_NN_1_5::synapse0x2d7a340() {
   return (neuron0x2d6afb0()*-0.00629588);
}

double NNfunction_NN_1_5::synapse0x2d79dd0() {
   return (neuron0x2d6b2f0()*-0.023991);
}

double NNfunction_NN_1_5::synapse0x2d79e10() {
   return (neuron0x2d6b850()*-0.0102665);
}

double NNfunction_NN_1_5::synapse0x2d7a490() {
   return (neuron0x2d6bb90()*0.0173528);
}

double NNfunction_NN_1_5::synapse0x2d7a4d0() {
   return (neuron0x2d6bed0()*-0.00583965);
}

double NNfunction_NN_1_5::synapse0x2d7a510() {
   return (neuron0x2d6c210()*0.0356294);
}

double NNfunction_NN_1_5::synapse0x2d7a550() {
   return (neuron0x2d6c550()*0.00758822);
}

double NNfunction_NN_1_5::synapse0x2d7a590() {
   return (neuron0x2d6c890()*-0.0265254);
}

double NNfunction_NN_1_5::synapse0x2d7a5d0() {
   return (neuron0x2d6cbd0()*-3.0046);
}

double NNfunction_NN_1_5::synapse0x2d7a950() {
   return (neuron0x2d67f80()*-0.38518);
}

double NNfunction_NN_1_5::synapse0x2d7a990() {
   return (neuron0x2d68230()*0.387206);
}

double NNfunction_NN_1_5::synapse0x2d7a9d0() {
   return (neuron0x2d68570()*0.399333);
}

double NNfunction_NN_1_5::synapse0x2d7aa10() {
   return (neuron0x2d688b0()*0.354485);
}

double NNfunction_NN_1_5::synapse0x2d7aa50() {
   return (neuron0x2d68bf0()*-0.14747);
}

double NNfunction_NN_1_5::synapse0x2d7aa90() {
   return (neuron0x2d68f30()*-0.0990864);
}

double NNfunction_NN_1_5::synapse0x2d7aad0() {
   return (neuron0x2d69270()*-0.28839);
}

double NNfunction_NN_1_5::synapse0x2d7ab10() {
   return (neuron0x2d695b0()*-0.555381);
}

double NNfunction_NN_1_5::synapse0x2d7ab50() {
   return (neuron0x2d698f0()*-0.290873);
}

double NNfunction_NN_1_5::synapse0x2d7ab90() {
   return (neuron0x2d69c30()*0.961251);
}

double NNfunction_NN_1_5::synapse0x2d7abd0() {
   return (neuron0x2d69f70()*-0.647177);
}

double NNfunction_NN_1_5::synapse0x2d7ac10() {
   return (neuron0x2d6a2b0()*-0.176182);
}

double NNfunction_NN_1_5::synapse0x2d7ac50() {
   return (neuron0x2d6a5f0()*0.692027);
}

double NNfunction_NN_1_5::synapse0x2d7ac90() {
   return (neuron0x2d6a930()*0.165491);
}

double NNfunction_NN_1_5::synapse0x2d7acd0() {
   return (neuron0x2d6ac70()*-0.422514);
}

double NNfunction_NN_1_5::synapse0x2d7ad10() {
   return (neuron0x2d6afb0()*0.0807823);
}

double NNfunction_NN_1_5::synapse0x2d7a7a0() {
   return (neuron0x2d6b2f0()*-0.892519);
}

double NNfunction_NN_1_5::synapse0x2d7a7e0() {
   return (neuron0x2d6b850()*-0.0607081);
}

double NNfunction_NN_1_5::synapse0x2d7ae60() {
   return (neuron0x2d6bb90()*-0.757275);
}

double NNfunction_NN_1_5::synapse0x2d7aea0() {
   return (neuron0x2d6bed0()*-0.215562);
}

double NNfunction_NN_1_5::synapse0x2d7aee0() {
   return (neuron0x2d6c210()*0.066125);
}

double NNfunction_NN_1_5::synapse0x2d7af20() {
   return (neuron0x2d6c550()*0.203811);
}

double NNfunction_NN_1_5::synapse0x2d7af60() {
   return (neuron0x2d6c890()*-0.0830703);
}

double NNfunction_NN_1_5::synapse0x2d7afa0() {
   return (neuron0x2d6cbd0()*0.166547);
}

double NNfunction_NN_1_5::synapse0x2d7b320() {
   return (neuron0x2d67f80()*-0.0459582);
}

double NNfunction_NN_1_5::synapse0x2d7b360() {
   return (neuron0x2d68230()*-0.0190029);
}

double NNfunction_NN_1_5::synapse0x2d7b3a0() {
   return (neuron0x2d68570()*0.267544);
}

double NNfunction_NN_1_5::synapse0x2d7b3e0() {
   return (neuron0x2d688b0()*-0.24718);
}

double NNfunction_NN_1_5::synapse0x2d7b420() {
   return (neuron0x2d68bf0()*0.218956);
}

double NNfunction_NN_1_5::synapse0x2d7b460() {
   return (neuron0x2d68f30()*-0.0633319);
}

double NNfunction_NN_1_5::synapse0x2d7b4a0() {
   return (neuron0x2d69270()*-0.144328);
}

double NNfunction_NN_1_5::synapse0x2d7b4e0() {
   return (neuron0x2d695b0()*0.355649);
}

double NNfunction_NN_1_5::synapse0x2d7b520() {
   return (neuron0x2d698f0()*-0.00621855);
}

double NNfunction_NN_1_5::synapse0x2d7b560() {
   return (neuron0x2d69c30()*-0.0456196);
}

double NNfunction_NN_1_5::synapse0x2d7b5a0() {
   return (neuron0x2d69f70()*-0.431);
}

double NNfunction_NN_1_5::synapse0x2d7b5e0() {
   return (neuron0x2d6a2b0()*0.223813);
}

double NNfunction_NN_1_5::synapse0x2d7b620() {
   return (neuron0x2d6a5f0()*0.0530416);
}

double NNfunction_NN_1_5::synapse0x2d7b660() {
   return (neuron0x2d6a930()*-0.459052);
}

double NNfunction_NN_1_5::synapse0x2d7b6a0() {
   return (neuron0x2d6ac70()*-0.0091379);
}

double NNfunction_NN_1_5::synapse0x2d7b6e0() {
   return (neuron0x2d6afb0()*-0.060551);
}

double NNfunction_NN_1_5::synapse0x2d7b170() {
   return (neuron0x2d6b2f0()*-0.207742);
}

double NNfunction_NN_1_5::synapse0x2d7b1b0() {
   return (neuron0x2d6b850()*-0.15121);
}

double NNfunction_NN_1_5::synapse0x2d7b830() {
   return (neuron0x2d6bb90()*-0.0872798);
}

double NNfunction_NN_1_5::synapse0x2d7b870() {
   return (neuron0x2d6bed0()*-0.10112);
}

double NNfunction_NN_1_5::synapse0x2d7b8b0() {
   return (neuron0x2d6c210()*-0.334031);
}

double NNfunction_NN_1_5::synapse0x2d7b8f0() {
   return (neuron0x2d6c550()*-0.0129644);
}

double NNfunction_NN_1_5::synapse0x2d7b930() {
   return (neuron0x2d6c890()*-0.550005);
}

double NNfunction_NN_1_5::synapse0x2d7b970() {
   return (neuron0x2d6cbd0()*0.562486);
}

double NNfunction_NN_1_5::synapse0x2d7bcf0() {
   return (neuron0x2d67f80()*-0.166755);
}

double NNfunction_NN_1_5::synapse0x2d7bd30() {
   return (neuron0x2d68230()*5.24019);
}

double NNfunction_NN_1_5::synapse0x2d7bd70() {
   return (neuron0x2d68570()*-0.24369);
}

double NNfunction_NN_1_5::synapse0x2d7bdb0() {
   return (neuron0x2d688b0()*0.0855653);
}

double NNfunction_NN_1_5::synapse0x2d7bdf0() {
   return (neuron0x2d68bf0()*0.00544169);
}

double NNfunction_NN_1_5::synapse0x2d7be30() {
   return (neuron0x2d68f30()*-0.135703);
}

double NNfunction_NN_1_5::synapse0x2d7be70() {
   return (neuron0x2d69270()*0.0665292);
}

double NNfunction_NN_1_5::synapse0x2d7beb0() {
   return (neuron0x2d695b0()*-0.064556);
}

double NNfunction_NN_1_5::synapse0x2d7bef0() {
   return (neuron0x2d698f0()*-0.00428798);
}

double NNfunction_NN_1_5::synapse0x2d7bf30() {
   return (neuron0x2d69c30()*0.0179892);
}

double NNfunction_NN_1_5::synapse0x2d7bf70() {
   return (neuron0x2d69f70()*0.0724364);
}

double NNfunction_NN_1_5::synapse0x2d7bfb0() {
   return (neuron0x2d6a2b0()*1.1763);
}

double NNfunction_NN_1_5::synapse0x2d7bff0() {
   return (neuron0x2d6a5f0()*0.053277);
}

double NNfunction_NN_1_5::synapse0x2d7c030() {
   return (neuron0x2d6a930()*-0.0718327);
}

double NNfunction_NN_1_5::synapse0x2d7c070() {
   return (neuron0x2d6ac70()*0.0702949);
}

double NNfunction_NN_1_5::synapse0x2d7c0b0() {
   return (neuron0x2d6afb0()*0.00131273);
}

double NNfunction_NN_1_5::synapse0x2d7bb40() {
   return (neuron0x2d6b2f0()*-0.015933);
}

double NNfunction_NN_1_5::synapse0x2d7bb80() {
   return (neuron0x2d6b850()*-0.0229831);
}

double NNfunction_NN_1_5::synapse0x2d7c200() {
   return (neuron0x2d6bb90()*0.0334107);
}

double NNfunction_NN_1_5::synapse0x2d7c240() {
   return (neuron0x2d6bed0()*0.0303062);
}

double NNfunction_NN_1_5::synapse0x2d7c280() {
   return (neuron0x2d6c210()*0.0473158);
}

double NNfunction_NN_1_5::synapse0x2d7c2c0() {
   return (neuron0x2d6c550()*0.0781886);
}

double NNfunction_NN_1_5::synapse0x2d7c300() {
   return (neuron0x2d6c890()*-0.104473);
}

double NNfunction_NN_1_5::synapse0x2d7c340() {
   return (neuron0x2d6cbd0()*0.0305873);
}

double NNfunction_NN_1_5::synapse0x2d7c6c0() {
   return (neuron0x2d67f80()*0.15707);
}

double NNfunction_NN_1_5::synapse0x2d7c700() {
   return (neuron0x2d68230()*0.342077);
}

double NNfunction_NN_1_5::synapse0x2d7c740() {
   return (neuron0x2d68570()*0.332378);
}

double NNfunction_NN_1_5::synapse0x2d7c780() {
   return (neuron0x2d688b0()*-1.32194);
}

double NNfunction_NN_1_5::synapse0x2d7c7c0() {
   return (neuron0x2d68bf0()*0.549649);
}

double NNfunction_NN_1_5::synapse0x2d7c800() {
   return (neuron0x2d68f30()*0.519612);
}

double NNfunction_NN_1_5::synapse0x2d7c840() {
   return (neuron0x2d69270()*0.0105994);
}

double NNfunction_NN_1_5::synapse0x2d7c880() {
   return (neuron0x2d695b0()*0.123908);
}

double NNfunction_NN_1_5::synapse0x2d7c8c0() {
   return (neuron0x2d698f0()*-0.284097);
}

double NNfunction_NN_1_5::synapse0x2d74a80() {
   return (neuron0x2d69c30()*0.233135);
}

double NNfunction_NN_1_5::synapse0x2d74ac0() {
   return (neuron0x2d69f70()*-0.585369);
}

double NNfunction_NN_1_5::synapse0x2d74b00() {
   return (neuron0x2d6a2b0()*-0.202385);
}

double NNfunction_NN_1_5::synapse0x2d74b40() {
   return (neuron0x2d6a5f0()*-0.343361);
}

double NNfunction_NN_1_5::synapse0x2d74b80() {
   return (neuron0x2d6a930()*-0.582153);
}

double NNfunction_NN_1_5::synapse0x2d74bc0() {
   return (neuron0x2d6ac70()*-0.00235094);
}

double NNfunction_NN_1_5::synapse0x2d74c00() {
   return (neuron0x2d6afb0()*0.690569);
}

double NNfunction_NN_1_5::synapse0x2d7c510() {
   return (neuron0x2d6b2f0()*0.173875);
}

double NNfunction_NN_1_5::synapse0x2d7c550() {
   return (neuron0x2d6b850()*-0.195072);
}

double NNfunction_NN_1_5::synapse0x2d74d50() {
   return (neuron0x2d6bb90()*-0.077637);
}

double NNfunction_NN_1_5::synapse0x2d74d90() {
   return (neuron0x2d6bed0()*-0.0268183);
}

double NNfunction_NN_1_5::synapse0x2d74dd0() {
   return (neuron0x2d6c210()*0.745063);
}

double NNfunction_NN_1_5::synapse0x2d74e10() {
   return (neuron0x2d6c550()*0.102408);
}

double NNfunction_NN_1_5::synapse0x2d74e50() {
   return (neuron0x2d6c890()*-0.967155);
}

double NNfunction_NN_1_5::synapse0x2d74e90() {
   return (neuron0x2d6cbd0()*-1.59395);
}

double NNfunction_NN_1_5::synapse0x2d75210() {
   return (neuron0x2d67f80()*0.00125422);
}

double NNfunction_NN_1_5::synapse0x2d75250() {
   return (neuron0x2d68230()*0.307787);
}

double NNfunction_NN_1_5::synapse0x2d75290() {
   return (neuron0x2d68570()*0.319303);
}

double NNfunction_NN_1_5::synapse0x2d752d0() {
   return (neuron0x2d688b0()*-0.0404316);
}

double NNfunction_NN_1_5::synapse0x2d75310() {
   return (neuron0x2d68bf0()*0.113195);
}

double NNfunction_NN_1_5::synapse0x2d75350() {
   return (neuron0x2d68f30()*-0.14779);
}

double NNfunction_NN_1_5::synapse0x2d75390() {
   return (neuron0x2d69270()*-0.0465477);
}

double NNfunction_NN_1_5::synapse0x2d753d0() {
   return (neuron0x2d695b0()*0.0804965);
}

double NNfunction_NN_1_5::synapse0x2d75410() {
   return (neuron0x2d698f0()*-0.311551);
}

double NNfunction_NN_1_5::synapse0x2d75450() {
   return (neuron0x2d69c30()*0.327169);
}

double NNfunction_NN_1_5::synapse0x2d75490() {
   return (neuron0x2d69f70()*0.0643967);
}

double NNfunction_NN_1_5::synapse0x2d754d0() {
   return (neuron0x2d6a2b0()*-1.01907);
}

double NNfunction_NN_1_5::synapse0x2d75510() {
   return (neuron0x2d6a5f0()*0.608578);
}

double NNfunction_NN_1_5::synapse0x2d75550() {
   return (neuron0x2d6a930()*-0.135926);
}

double NNfunction_NN_1_5::synapse0x2d75590() {
   return (neuron0x2d6ac70()*-0.0975875);
}

double NNfunction_NN_1_5::synapse0x2d755d0() {
   return (neuron0x2d6afb0()*-0.176057);
}

double NNfunction_NN_1_5::synapse0x2d75060() {
   return (neuron0x2d6b2f0()*0.0667587);
}

double NNfunction_NN_1_5::synapse0x2d750a0() {
   return (neuron0x2d6b850()*0.475514);
}

double NNfunction_NN_1_5::synapse0x2d75720() {
   return (neuron0x2d6bb90()*-0.0610115);
}

double NNfunction_NN_1_5::synapse0x2d75760() {
   return (neuron0x2d6bed0()*-0.0411495);
}

double NNfunction_NN_1_5::synapse0x2d757a0() {
   return (neuron0x2d6c210()*-0.222981);
}

double NNfunction_NN_1_5::synapse0x2d757e0() {
   return (neuron0x2d6c550()*0.137404);
}

double NNfunction_NN_1_5::synapse0x2d75820() {
   return (neuron0x2d6c890()*0.298555);
}

double NNfunction_NN_1_5::synapse0x2d75860() {
   return (neuron0x2d6cbd0()*-1.01262);
}

double NNfunction_NN_1_5::synapse0x2d75a30() {
   return (neuron0x2d67f80()*-0.102079);
}

double NNfunction_NN_1_5::synapse0x2d7eac0() {
   return (neuron0x2d68230()*-0.0124161);
}

double NNfunction_NN_1_5::synapse0x2d7eb00() {
   return (neuron0x2d68570()*5.94536);
}

double NNfunction_NN_1_5::synapse0x2d7eb40() {
   return (neuron0x2d688b0()*0.0580001);
}

double NNfunction_NN_1_5::synapse0x2d7eb80() {
   return (neuron0x2d68bf0()*0.0419172);
}

double NNfunction_NN_1_5::synapse0x2d7ebc0() {
   return (neuron0x2d68f30()*0.0808952);
}

double NNfunction_NN_1_5::synapse0x2d7ec00() {
   return (neuron0x2d69270()*0.045807);
}

double NNfunction_NN_1_5::synapse0x2d7ec40() {
   return (neuron0x2d695b0()*0.0509812);
}

double NNfunction_NN_1_5::synapse0x2d7ec80() {
   return (neuron0x2d698f0()*-0.0432799);
}

double NNfunction_NN_1_5::synapse0x2d7ecc0() {
   return (neuron0x2d69c30()*-0.0850977);
}

double NNfunction_NN_1_5::synapse0x2d7ed00() {
   return (neuron0x2d69f70()*-0.0587093);
}

double NNfunction_NN_1_5::synapse0x2d7ed40() {
   return (neuron0x2d6a2b0()*-4.83333);
}

double NNfunction_NN_1_5::synapse0x2d7ed80() {
   return (neuron0x2d6a5f0()*0.0374836);
}

double NNfunction_NN_1_5::synapse0x2d7edc0() {
   return (neuron0x2d6a930()*0.0502608);
}

double NNfunction_NN_1_5::synapse0x2d7ee00() {
   return (neuron0x2d6ac70()*0.0412936);
}

double NNfunction_NN_1_5::synapse0x2d7ee40() {
   return (neuron0x2d6afb0()*0.047044);
}

double NNfunction_NN_1_5::synapse0x2d7e910() {
   return (neuron0x2d6b2f0()*-0.0620341);
}

double NNfunction_NN_1_5::synapse0x2d7e950() {
   return (neuron0x2d6b850()*0.00192841);
}

double NNfunction_NN_1_5::synapse0x2d7ef90() {
   return (neuron0x2d6bb90()*-0.0175736);
}

double NNfunction_NN_1_5::synapse0x2d7efd0() {
   return (neuron0x2d6bed0()*0.0552533);
}

double NNfunction_NN_1_5::synapse0x2d7f010() {
   return (neuron0x2d6c210()*0.0936108);
}

double NNfunction_NN_1_5::synapse0x2d7f050() {
   return (neuron0x2d6c550()*0.0592821);
}

double NNfunction_NN_1_5::synapse0x2d7f090() {
   return (neuron0x2d6c890()*0.0177537);
}

double NNfunction_NN_1_5::synapse0x2d7f0d0() {
   return (neuron0x2d6cbd0()*-0.116409);
}

double NNfunction_NN_1_5::synapse0x2d7f450() {
   return (neuron0x2d67f80()*0.0459171);
}

double NNfunction_NN_1_5::synapse0x2d7f490() {
   return (neuron0x2d68230()*-0.358665);
}

double NNfunction_NN_1_5::synapse0x2d7f4d0() {
   return (neuron0x2d68570()*-0.32601);
}

double NNfunction_NN_1_5::synapse0x2d7f510() {
   return (neuron0x2d688b0()*0.239734);
}

double NNfunction_NN_1_5::synapse0x2d7f550() {
   return (neuron0x2d68bf0()*-0.195951);
}

double NNfunction_NN_1_5::synapse0x2d7f590() {
   return (neuron0x2d68f30()*-0.459259);
}

double NNfunction_NN_1_5::synapse0x2d7f5d0() {
   return (neuron0x2d69270()*0.201385);
}

double NNfunction_NN_1_5::synapse0x2d7f610() {
   return (neuron0x2d695b0()*-0.134459);
}

double NNfunction_NN_1_5::synapse0x2d7f650() {
   return (neuron0x2d698f0()*0.0344643);
}

double NNfunction_NN_1_5::synapse0x2d7f690() {
   return (neuron0x2d69c30()*-0.212434);
}

double NNfunction_NN_1_5::synapse0x2d7f6d0() {
   return (neuron0x2d69f70()*0.582767);
}

double NNfunction_NN_1_5::synapse0x2d7f710() {
   return (neuron0x2d6a2b0()*0.164209);
}

double NNfunction_NN_1_5::synapse0x2d7f750() {
   return (neuron0x2d6a5f0()*0.107397);
}

double NNfunction_NN_1_5::synapse0x2d7f790() {
   return (neuron0x2d6a930()*0.605087);
}

double NNfunction_NN_1_5::synapse0x2d7f7d0() {
   return (neuron0x2d6ac70()*0.31103);
}

double NNfunction_NN_1_5::synapse0x2d7f810() {
   return (neuron0x2d6afb0()*-0.244072);
}

double NNfunction_NN_1_5::synapse0x2d7f2a0() {
   return (neuron0x2d6b2f0()*-0.120188);
}

double NNfunction_NN_1_5::synapse0x2d7f2e0() {
   return (neuron0x2d6b850()*-0.277675);
}

double NNfunction_NN_1_5::synapse0x2d7f960() {
   return (neuron0x2d6bb90()*-0.0500703);
}

double NNfunction_NN_1_5::synapse0x2d7f9a0() {
   return (neuron0x2d6bed0()*0.118733);
}

double NNfunction_NN_1_5::synapse0x2d7f9e0() {
   return (neuron0x2d6c210()*-0.486172);
}

double NNfunction_NN_1_5::synapse0x2d7fa20() {
   return (neuron0x2d6c550()*0.0597918);
}

double NNfunction_NN_1_5::synapse0x2d7fa60() {
   return (neuron0x2d6c890()*0.667754);
}

double NNfunction_NN_1_5::synapse0x2d7faa0() {
   return (neuron0x2d6cbd0()*1.67304);
}

double NNfunction_NN_1_5::synapse0x2d7fe20() {
   return (neuron0x2d67f80()*0.323913);
}

double NNfunction_NN_1_5::synapse0x2d7fe60() {
   return (neuron0x2d68230()*-0.0325628);
}

double NNfunction_NN_1_5::synapse0x2d7fea0() {
   return (neuron0x2d68570()*0.512415);
}

double NNfunction_NN_1_5::synapse0x2d7fee0() {
   return (neuron0x2d688b0()*0.069528);
}

double NNfunction_NN_1_5::synapse0x2d7ff20() {
   return (neuron0x2d68bf0()*-1.00241);
}

double NNfunction_NN_1_5::synapse0x2d7ff60() {
   return (neuron0x2d68f30()*0.259594);
}

double NNfunction_NN_1_5::synapse0x2d7ffa0() {
   return (neuron0x2d69270()*-0.406306);
}

double NNfunction_NN_1_5::synapse0x2d7ffe0() {
   return (neuron0x2d695b0()*-0.334342);
}

double NNfunction_NN_1_5::synapse0x2d80020() {
   return (neuron0x2d698f0()*-0.385987);
}

double NNfunction_NN_1_5::synapse0x2d80060() {
   return (neuron0x2d69c30()*-0.516407);
}

double NNfunction_NN_1_5::synapse0x2d800a0() {
   return (neuron0x2d69f70()*-0.270278);
}

double NNfunction_NN_1_5::synapse0x2d800e0() {
   return (neuron0x2d6a2b0()*0.00697657);
}

double NNfunction_NN_1_5::synapse0x2d80120() {
   return (neuron0x2d6a5f0()*-0.0543144);
}

double NNfunction_NN_1_5::synapse0x2d80160() {
   return (neuron0x2d6a930()*-0.344172);
}

double NNfunction_NN_1_5::synapse0x2d801a0() {
   return (neuron0x2d6ac70()*0.174432);
}

double NNfunction_NN_1_5::synapse0x2d801e0() {
   return (neuron0x2d6afb0()*-0.350804);
}

double NNfunction_NN_1_5::synapse0x2d7fc70() {
   return (neuron0x2d6b2f0()*0.0258545);
}

double NNfunction_NN_1_5::synapse0x2d7fcb0() {
   return (neuron0x2d6b850()*-1.20612);
}

double NNfunction_NN_1_5::synapse0x2d80330() {
   return (neuron0x2d6bb90()*0.176636);
}

double NNfunction_NN_1_5::synapse0x2d80370() {
   return (neuron0x2d6bed0()*-0.708108);
}

double NNfunction_NN_1_5::synapse0x2d803b0() {
   return (neuron0x2d6c210()*0.266933);
}

double NNfunction_NN_1_5::synapse0x2d803f0() {
   return (neuron0x2d6c550()*0.0237083);
}

double NNfunction_NN_1_5::synapse0x2d80430() {
   return (neuron0x2d6c890()*0.753221);
}

double NNfunction_NN_1_5::synapse0x2d80470() {
   return (neuron0x2d6cbd0()*-0.791246);
}

double NNfunction_NN_1_5::synapse0x2d807f0() {
   return (neuron0x2d67f80()*0.151296);
}

double NNfunction_NN_1_5::synapse0x2d80830() {
   return (neuron0x2d68230()*-0.0233524);
}

double NNfunction_NN_1_5::synapse0x2d80870() {
   return (neuron0x2d68570()*-2.61878);
}

double NNfunction_NN_1_5::synapse0x2d808b0() {
   return (neuron0x2d688b0()*-0.0533428);
}

double NNfunction_NN_1_5::synapse0x2d808f0() {
   return (neuron0x2d68bf0()*-0.0674687);
}

double NNfunction_NN_1_5::synapse0x2d80930() {
   return (neuron0x2d68f30()*-0.0949834);
}

double NNfunction_NN_1_5::synapse0x2d80970() {
   return (neuron0x2d69270()*-0.0605934);
}

double NNfunction_NN_1_5::synapse0x2d809b0() {
   return (neuron0x2d695b0()*-0.078954);
}

double NNfunction_NN_1_5::synapse0x2d809f0() {
   return (neuron0x2d698f0()*0.0561204);
}

double NNfunction_NN_1_5::synapse0x2d80a30() {
   return (neuron0x2d69c30()*0.038892);
}

double NNfunction_NN_1_5::synapse0x2d80a70() {
   return (neuron0x2d69f70()*0.0577131);
}

double NNfunction_NN_1_5::synapse0x2d80ab0() {
   return (neuron0x2d6a2b0()*-1.13279);
}

double NNfunction_NN_1_5::synapse0x2d80af0() {
   return (neuron0x2d6a5f0()*-0.137585);
}

double NNfunction_NN_1_5::synapse0x2d80b30() {
   return (neuron0x2d6a930()*0.0421865);
}

double NNfunction_NN_1_5::synapse0x2d80b70() {
   return (neuron0x2d6ac70()*-0.0840767);
}

double NNfunction_NN_1_5::synapse0x2d80bb0() {
   return (neuron0x2d6afb0()*-0.0760688);
}

double NNfunction_NN_1_5::synapse0x2d80640() {
   return (neuron0x2d6b2f0()*0.00139321);
}

double NNfunction_NN_1_5::synapse0x2d80680() {
   return (neuron0x2d6b850()*-0.0804988);
}

double NNfunction_NN_1_5::synapse0x2d80d00() {
   return (neuron0x2d6bb90()*0.128009);
}

double NNfunction_NN_1_5::synapse0x2d80d40() {
   return (neuron0x2d6bed0()*0.0978345);
}

double NNfunction_NN_1_5::synapse0x2d80d80() {
   return (neuron0x2d6c210()*-0.0259313);
}

double NNfunction_NN_1_5::synapse0x2d80dc0() {
   return (neuron0x2d6c550()*0.0453661);
}

double NNfunction_NN_1_5::synapse0x2d80e00() {
   return (neuron0x2d6c890()*-0.0521189);
}

double NNfunction_NN_1_5::synapse0x2d80e40() {
   return (neuron0x2d6cbd0()*0.132268);
}

double NNfunction_NN_1_5::synapse0x2d811c0() {
   return (neuron0x2d67f80()*-0.28736);
}

double NNfunction_NN_1_5::synapse0x2d81200() {
   return (neuron0x2d68230()*0.000626784);
}

double NNfunction_NN_1_5::synapse0x2d81240() {
   return (neuron0x2d68570()*0.52631);
}

double NNfunction_NN_1_5::synapse0x2d81280() {
   return (neuron0x2d688b0()*0.10112);
}

double NNfunction_NN_1_5::synapse0x2d812c0() {
   return (neuron0x2d68bf0()*-0.229054);
}

double NNfunction_NN_1_5::synapse0x2d81300() {
   return (neuron0x2d68f30()*0.488976);
}

double NNfunction_NN_1_5::synapse0x2d81340() {
   return (neuron0x2d69270()*0.571078);
}

double NNfunction_NN_1_5::synapse0x2d81380() {
   return (neuron0x2d695b0()*-0.276301);
}

double NNfunction_NN_1_5::synapse0x2d813c0() {
   return (neuron0x2d698f0()*0.576748);
}

double NNfunction_NN_1_5::synapse0x2d81400() {
   return (neuron0x2d69c30()*-0.426152);
}

double NNfunction_NN_1_5::synapse0x2d81440() {
   return (neuron0x2d69f70()*-0.148522);
}

double NNfunction_NN_1_5::synapse0x2d81480() {
   return (neuron0x2d6a2b0()*0.00878109);
}

double NNfunction_NN_1_5::synapse0x2d814c0() {
   return (neuron0x2d6a5f0()*0.382363);
}

double NNfunction_NN_1_5::synapse0x2d81500() {
   return (neuron0x2d6a930()*0.022686);
}

double NNfunction_NN_1_5::synapse0x2d81540() {
   return (neuron0x2d6ac70()*0.0720763);
}

double NNfunction_NN_1_5::synapse0x2d81580() {
   return (neuron0x2d6afb0()*0.065854);
}

double NNfunction_NN_1_5::synapse0x2d81010() {
   return (neuron0x2d6b2f0()*-0.56521);
}

double NNfunction_NN_1_5::synapse0x2d81050() {
   return (neuron0x2d6b850()*-0.544384);
}

double NNfunction_NN_1_5::synapse0x2d816d0() {
   return (neuron0x2d6bb90()*-0.0943612);
}

double NNfunction_NN_1_5::synapse0x2d81710() {
   return (neuron0x2d6bed0()*0.314888);
}

double NNfunction_NN_1_5::synapse0x2d81750() {
   return (neuron0x2d6c210()*0.0294901);
}

double NNfunction_NN_1_5::synapse0x2d81790() {
   return (neuron0x2d6c550()*0.633475);
}

double NNfunction_NN_1_5::synapse0x2d817d0() {
   return (neuron0x2d6c890()*-0.296297);
}

double NNfunction_NN_1_5::synapse0x2d81810() {
   return (neuron0x2d6cbd0()*0.286302);
}

double NNfunction_NN_1_5::synapse0x2d81b90() {
   return (neuron0x2d67f80()*0.13698);
}

double NNfunction_NN_1_5::synapse0x2d81bd0() {
   return (neuron0x2d68230()*0.0569437);
}

double NNfunction_NN_1_5::synapse0x2d81c10() {
   return (neuron0x2d68570()*0.107284);
}

double NNfunction_NN_1_5::synapse0x2d81c50() {
   return (neuron0x2d688b0()*-0.095523);
}

double NNfunction_NN_1_5::synapse0x2d81c90() {
   return (neuron0x2d68bf0()*0.149992);
}

double NNfunction_NN_1_5::synapse0x2d81cd0() {
   return (neuron0x2d68f30()*0.0337976);
}

double NNfunction_NN_1_5::synapse0x2d81d10() {
   return (neuron0x2d69270()*0.0468984);
}

double NNfunction_NN_1_5::synapse0x2d81d50() {
   return (neuron0x2d695b0()*-0.0116314);
}

double NNfunction_NN_1_5::synapse0x2d81d90() {
   return (neuron0x2d698f0()*-0.23963);
}

double NNfunction_NN_1_5::synapse0x2d81dd0() {
   return (neuron0x2d69c30()*0.0456551);
}

double NNfunction_NN_1_5::synapse0x2d81e10() {
   return (neuron0x2d69f70()*0.086978);
}

double NNfunction_NN_1_5::synapse0x2d81e50() {
   return (neuron0x2d6a2b0()*-0.127046);
}

double NNfunction_NN_1_5::synapse0x2d81e90() {
   return (neuron0x2d6a5f0()*-0.323849);
}

double NNfunction_NN_1_5::synapse0x2d81ed0() {
   return (neuron0x2d6a930()*-0.0207753);
}

double NNfunction_NN_1_5::synapse0x2d81f10() {
   return (neuron0x2d6ac70()*0.0548414);
}

double NNfunction_NN_1_5::synapse0x2d81f50() {
   return (neuron0x2d6afb0()*0.208961);
}

double NNfunction_NN_1_5::synapse0x2d819e0() {
   return (neuron0x2d6b2f0()*-0.28247);
}

double NNfunction_NN_1_5::synapse0x2d81a20() {
   return (neuron0x2d6b850()*-0.191875);
}

double NNfunction_NN_1_5::synapse0x2d820a0() {
   return (neuron0x2d6bb90()*-0.0747536);
}

double NNfunction_NN_1_5::synapse0x2d820e0() {
   return (neuron0x2d6bed0()*0.167284);
}

double NNfunction_NN_1_5::synapse0x2d82120() {
   return (neuron0x2d6c210()*-0.0340436);
}

double NNfunction_NN_1_5::synapse0x2d82160() {
   return (neuron0x2d6c550()*0.111629);
}

double NNfunction_NN_1_5::synapse0x2d821a0() {
   return (neuron0x2d6c890()*0.230307);
}

double NNfunction_NN_1_5::synapse0x2d821e0() {
   return (neuron0x2d6cbd0()*-1.18283);
}

double NNfunction_NN_1_5::synapse0x2d82560() {
   return (neuron0x2d67f80()*0.0932238);
}

double NNfunction_NN_1_5::synapse0x2d825a0() {
   return (neuron0x2d68230()*-0.000179422);
}

double NNfunction_NN_1_5::synapse0x2d825e0() {
   return (neuron0x2d68570()*1.68566);
}

double NNfunction_NN_1_5::synapse0x2d82620() {
   return (neuron0x2d688b0()*-0.0166096);
}

double NNfunction_NN_1_5::synapse0x2d82660() {
   return (neuron0x2d68bf0()*0.00735051);
}

double NNfunction_NN_1_5::synapse0x2d826a0() {
   return (neuron0x2d68f30()*-0.0155633);
}

double NNfunction_NN_1_5::synapse0x2d826e0() {
   return (neuron0x2d69270()*0.031849);
}

double NNfunction_NN_1_5::synapse0x2d82720() {
   return (neuron0x2d695b0()*0.0098414);
}

double NNfunction_NN_1_5::synapse0x2d82760() {
   return (neuron0x2d698f0()*-0.00239428);
}

double NNfunction_NN_1_5::synapse0x2d827a0() {
   return (neuron0x2d69c30()*-0.00753541);
}

double NNfunction_NN_1_5::synapse0x2d827e0() {
   return (neuron0x2d69f70()*-0.00233495);
}

double NNfunction_NN_1_5::synapse0x2d82820() {
   return (neuron0x2d6a2b0()*-0.189664);
}

double NNfunction_NN_1_5::synapse0x2d82860() {
   return (neuron0x2d6a5f0()*0.0281709);
}

double NNfunction_NN_1_5::synapse0x2d828a0() {
   return (neuron0x2d6a930()*-0.00416886);
}

double NNfunction_NN_1_5::synapse0x2d828e0() {
   return (neuron0x2d6ac70()*0.00326009);
}

double NNfunction_NN_1_5::synapse0x2d82920() {
   return (neuron0x2d6afb0()*0.0248411);
}

double NNfunction_NN_1_5::synapse0x2d823b0() {
   return (neuron0x2d6b2f0()*-0.0497596);
}

double NNfunction_NN_1_5::synapse0x2d823f0() {
   return (neuron0x2d6b850()*-0.00987822);
}

double NNfunction_NN_1_5::synapse0x2d82a70() {
   return (neuron0x2d6bb90()*-0.0176142);
}

double NNfunction_NN_1_5::synapse0x2d82ab0() {
   return (neuron0x2d6bed0()*-0.0242414);
}

double NNfunction_NN_1_5::synapse0x2d82af0() {
   return (neuron0x2d6c210()*0.029371);
}

double NNfunction_NN_1_5::synapse0x2d82b30() {
   return (neuron0x2d6c550()*0.0096861);
}

double NNfunction_NN_1_5::synapse0x2d82b70() {
   return (neuron0x2d6c890()*-0.0157555);
}

double NNfunction_NN_1_5::synapse0x2d82bb0() {
   return (neuron0x2d6cbd0()*-5.1598);
}

double NNfunction_NN_1_5::synapse0x2d82f30() {
   return (neuron0x2d67f80()*-0.221844);
}

double NNfunction_NN_1_5::synapse0x2d82f70() {
   return (neuron0x2d68230()*-2.66945);
}

double NNfunction_NN_1_5::synapse0x2d82fb0() {
   return (neuron0x2d68570()*0.830809);
}

double NNfunction_NN_1_5::synapse0x2d82ff0() {
   return (neuron0x2d688b0()*-0.0403642);
}

double NNfunction_NN_1_5::synapse0x2d83030() {
   return (neuron0x2d68bf0()*0.212879);
}

double NNfunction_NN_1_5::synapse0x2d83070() {
   return (neuron0x2d68f30()*-0.0100881);
}

double NNfunction_NN_1_5::synapse0x2d830b0() {
   return (neuron0x2d69270()*-0.0548287);
}

double NNfunction_NN_1_5::synapse0x2d830f0() {
   return (neuron0x2d695b0()*0.0241086);
}

double NNfunction_NN_1_5::synapse0x2d83130() {
   return (neuron0x2d698f0()*0.299292);
}

double NNfunction_NN_1_5::synapse0x2d83170() {
   return (neuron0x2d69c30()*0.156468);
}

double NNfunction_NN_1_5::synapse0x2d831b0() {
   return (neuron0x2d69f70()*0.182543);
}

double NNfunction_NN_1_5::synapse0x2d831f0() {
   return (neuron0x2d6a2b0()*-1.10558);
}

double NNfunction_NN_1_5::synapse0x2d83230() {
   return (neuron0x2d6a5f0()*-0.202726);
}

double NNfunction_NN_1_5::synapse0x2d83270() {
   return (neuron0x2d6a930()*0.0699232);
}

double NNfunction_NN_1_5::synapse0x2d832b0() {
   return (neuron0x2d6ac70()*-0.00409189);
}

double NNfunction_NN_1_5::synapse0x2d832f0() {
   return (neuron0x2d6afb0()*0.110412);
}

double NNfunction_NN_1_5::synapse0x2d82d80() {
   return (neuron0x2d6b2f0()*-0.0894908);
}

double NNfunction_NN_1_5::synapse0x2d82dc0() {
   return (neuron0x2d6b850()*0.214514);
}

double NNfunction_NN_1_5::synapse0x2d83440() {
   return (neuron0x2d6bb90()*0.139942);
}

double NNfunction_NN_1_5::synapse0x2d83480() {
   return (neuron0x2d6bed0()*0.0894442);
}

double NNfunction_NN_1_5::synapse0x2d834c0() {
   return (neuron0x2d6c210()*0.0268141);
}

double NNfunction_NN_1_5::synapse0x2d83500() {
   return (neuron0x2d6c550()*-0.118113);
}

double NNfunction_NN_1_5::synapse0x2d83540() {
   return (neuron0x2d6c890()*-0.170103);
}

double NNfunction_NN_1_5::synapse0x2d83580() {
   return (neuron0x2d6cbd0()*-2.95032);
}

double NNfunction_NN_1_5::synapse0x2d83900() {
   return (neuron0x2d67f80()*0.408744);
}

double NNfunction_NN_1_5::synapse0x2d77ed0() {
   return (neuron0x2d68230()*-0.0254886);
}

double NNfunction_NN_1_5::synapse0x2d77f10() {
   return (neuron0x2d68570()*0.556085);
}

double NNfunction_NN_1_5::synapse0x2d77f50() {
   return (neuron0x2d688b0()*0.41772);
}

double NNfunction_NN_1_5::synapse0x2d781a0() {
   return (neuron0x2d68bf0()*-0.0218807);
}

double NNfunction_NN_1_5::synapse0x2d781e0() {
   return (neuron0x2d68f30()*0.17285);
}

double NNfunction_NN_1_5::synapse0x2d78220() {
   return (neuron0x2d69270()*-0.235935);
}

double NNfunction_NN_1_5::synapse0x2d78470() {
   return (neuron0x2d695b0()*0.369769);
}

double NNfunction_NN_1_5::synapse0x2d784b0() {
   return (neuron0x2d698f0()*-0.142643);
}

double NNfunction_NN_1_5::synapse0x2d78700() {
   return (neuron0x2d69c30()*-0.375947);
}

double NNfunction_NN_1_5::synapse0x2d78740() {
   return (neuron0x2d69f70()*-0.0413381);
}

double NNfunction_NN_1_5::synapse0x2d78780() {
   return (neuron0x2d6a2b0()*-0.0353795);
}

double NNfunction_NN_1_5::synapse0x2d789d0() {
   return (neuron0x2d6a5f0()*-0.0453011);
}

double NNfunction_NN_1_5::synapse0x2d78a10() {
   return (neuron0x2d6a930()*-0.457841);
}

double NNfunction_NN_1_5::synapse0x2d78c60() {
   return (neuron0x2d6ac70()*-0.220251);
}

double NNfunction_NN_1_5::synapse0x2d78ca0() {
   return (neuron0x2d6afb0()*0.132744);
}

double NNfunction_NN_1_5::synapse0x2d83750() {
   return (neuron0x2d6b2f0()*-0.0361997);
}

double NNfunction_NN_1_5::synapse0x2d83790() {
   return (neuron0x2d6b850()*0.221603);
}

double NNfunction_NN_1_5::synapse0x2d78df0() {
   return (neuron0x2d6bb90()*0.297058);
}

double NNfunction_NN_1_5::synapse0x2d79300() {
   return (neuron0x2d6bed0()*0.451718);
}

double NNfunction_NN_1_5::synapse0x2d79340() {
   return (neuron0x2d6c210()*0.111806);
}

double NNfunction_NN_1_5::synapse0x2d79380() {
   return (neuron0x2d6c550()*-0.179258);
}

double NNfunction_NN_1_5::synapse0x2d795d0() {
   return (neuron0x2d6c890()*0.298192);
}

double NNfunction_NN_1_5::synapse0x2d79610() {
   return (neuron0x2d6cbd0()*1.67075);
}

double NNfunction_NN_1_5::synapse0x2d78ec0() {
   return (neuron0x2d67f80()*-0.538003);
}

double NNfunction_NN_1_5::synapse0x2d78f00() {
   return (neuron0x2d68230()*0.0533864);
}

double NNfunction_NN_1_5::synapse0x2d78f40() {
   return (neuron0x2d68570()*1.76541);
}

double NNfunction_NN_1_5::synapse0x2d78f80() {
   return (neuron0x2d688b0()*-0.0457871);
}

double NNfunction_NN_1_5::synapse0x2d79900() {
   return (neuron0x2d68bf0()*-0.025878);
}

double NNfunction_NN_1_5::synapse0x2d85c50() {
   return (neuron0x2d68f30()*-0.123775);
}

double NNfunction_NN_1_5::synapse0x2d85c90() {
   return (neuron0x2d69270()*-0.140252);
}

double NNfunction_NN_1_5::synapse0x2d85cd0() {
   return (neuron0x2d695b0()*-0.046464);
}

double NNfunction_NN_1_5::synapse0x2d85d10() {
   return (neuron0x2d698f0()*0.104882);
}

double NNfunction_NN_1_5::synapse0x2d85d50() {
   return (neuron0x2d69c30()*0.196554);
}

double NNfunction_NN_1_5::synapse0x2d85d90() {
   return (neuron0x2d69f70()*-0.0554151);
}

double NNfunction_NN_1_5::synapse0x2d85dd0() {
   return (neuron0x2d6a2b0()*0.477091);
}

double NNfunction_NN_1_5::synapse0x2d85e10() {
   return (neuron0x2d6a5f0()*-0.175789);
}

double NNfunction_NN_1_5::synapse0x2d85e50() {
   return (neuron0x2d6a930()*-0.0666831);
}

double NNfunction_NN_1_5::synapse0x2d85e90() {
   return (neuron0x2d6ac70()*-0.229614);
}

double NNfunction_NN_1_5::synapse0x2d85ed0() {
   return (neuron0x2d6afb0()*-0.143161);
}

double NNfunction_NN_1_5::synapse0x2d797e0() {
   return (neuron0x2d6b2f0()*0.160818);
}

double NNfunction_NN_1_5::synapse0x2d79820() {
   return (neuron0x2d6b850()*0.168273);
}

double NNfunction_NN_1_5::synapse0x2d86020() {
   return (neuron0x2d6bb90()*0.195385);
}

double NNfunction_NN_1_5::synapse0x2d86060() {
   return (neuron0x2d6bed0()*-0.138762);
}

double NNfunction_NN_1_5::synapse0x2d860a0() {
   return (neuron0x2d6c210()*0.0197499);
}

double NNfunction_NN_1_5::synapse0x2d860e0() {
   return (neuron0x2d6c550()*-0.103216);
}

double NNfunction_NN_1_5::synapse0x2d86120() {
   return (neuron0x2d6c890()*-0.118347);
}

double NNfunction_NN_1_5::synapse0x2d86160() {
   return (neuron0x2d6cbd0()*0.387866);
}

double NNfunction_NN_1_5::synapse0x2d864e0() {
   return (neuron0x2d67f80()*0.028387);
}

double NNfunction_NN_1_5::synapse0x2d86520() {
   return (neuron0x2d68230()*0.00737692);
}

double NNfunction_NN_1_5::synapse0x2d86560() {
   return (neuron0x2d68570()*0.0414157);
}

double NNfunction_NN_1_5::synapse0x2d865a0() {
   return (neuron0x2d688b0()*-2.32217e-05);
}

double NNfunction_NN_1_5::synapse0x2d865e0() {
   return (neuron0x2d68bf0()*0.00107766);
}

double NNfunction_NN_1_5::synapse0x2d86620() {
   return (neuron0x2d68f30()*-0.00786492);
}

double NNfunction_NN_1_5::synapse0x2d86660() {
   return (neuron0x2d69270()*0.00306251);
}

double NNfunction_NN_1_5::synapse0x2d866a0() {
   return (neuron0x2d695b0()*0.00291501);
}

double NNfunction_NN_1_5::synapse0x2d866e0() {
   return (neuron0x2d698f0()*-0.00611167);
}

double NNfunction_NN_1_5::synapse0x2d86720() {
   return (neuron0x2d69c30()*0.00506289);
}

double NNfunction_NN_1_5::synapse0x2d86760() {
   return (neuron0x2d69f70()*-0.00148578);
}

double NNfunction_NN_1_5::synapse0x2d867a0() {
   return (neuron0x2d6a2b0()*0.00415138);
}

double NNfunction_NN_1_5::synapse0x2d867e0() {
   return (neuron0x2d6a5f0()*-0.00465418);
}

double NNfunction_NN_1_5::synapse0x2d86820() {
   return (neuron0x2d6a930()*-0.00783166);
}

double NNfunction_NN_1_5::synapse0x2d86860() {
   return (neuron0x2d6ac70()*-0.00419367);
}

double NNfunction_NN_1_5::synapse0x2d868a0() {
   return (neuron0x2d6afb0()*0.000322868);
}

double NNfunction_NN_1_5::synapse0x2d86330() {
   return (neuron0x2d6b2f0()*-0.0123608);
}

double NNfunction_NN_1_5::synapse0x2d86370() {
   return (neuron0x2d6b850()*-0.00630829);
}

double NNfunction_NN_1_5::synapse0x2d869f0() {
   return (neuron0x2d6bb90()*0.0143735);
}

double NNfunction_NN_1_5::synapse0x2d86a30() {
   return (neuron0x2d6bed0()*0.0128976);
}

double NNfunction_NN_1_5::synapse0x2d86a70() {
   return (neuron0x2d6c210()*-0.00191108);
}

double NNfunction_NN_1_5::synapse0x2d86ab0() {
   return (neuron0x2d6c550()*-0.00475052);
}

double NNfunction_NN_1_5::synapse0x2d86af0() {
   return (neuron0x2d6c890()*0.00722299);
}

double NNfunction_NN_1_5::synapse0x2d86b30() {
   return (neuron0x2d6cbd0()*15.1664);
}

double NNfunction_NN_1_5::synapse0x2d86eb0() {
   return (neuron0x2d67f80()*-0.0128337);
}

double NNfunction_NN_1_5::synapse0x2d86ef0() {
   return (neuron0x2d68230()*-0.004148);
}

double NNfunction_NN_1_5::synapse0x2d86f30() {
   return (neuron0x2d68570()*0.0105318);
}

double NNfunction_NN_1_5::synapse0x2d86f70() {
   return (neuron0x2d688b0()*0.00221147);
}

double NNfunction_NN_1_5::synapse0x2d86fb0() {
   return (neuron0x2d68bf0()*-0.00555409);
}

double NNfunction_NN_1_5::synapse0x2d86ff0() {
   return (neuron0x2d68f30()*0.00832785);
}

double NNfunction_NN_1_5::synapse0x2d87030() {
   return (neuron0x2d69270()*-0.00169667);
}

double NNfunction_NN_1_5::synapse0x2d87070() {
   return (neuron0x2d695b0()*-0.000879172);
}

double NNfunction_NN_1_5::synapse0x2d870b0() {
   return (neuron0x2d698f0()*0.000824987);
}

double NNfunction_NN_1_5::synapse0x2d870f0() {
   return (neuron0x2d69c30()*-0.00571538);
}

double NNfunction_NN_1_5::synapse0x2d87130() {
   return (neuron0x2d69f70()*-0.0059637);
}

double NNfunction_NN_1_5::synapse0x2d87170() {
   return (neuron0x2d6a2b0()*0.0340871);
}

double NNfunction_NN_1_5::synapse0x2d871b0() {
   return (neuron0x2d6a5f0()*0.0080305);
}

double NNfunction_NN_1_5::synapse0x2d871f0() {
   return (neuron0x2d6a930()*0.00531053);
}

double NNfunction_NN_1_5::synapse0x2d87230() {
   return (neuron0x2d6ac70()*0.00426646);
}

double NNfunction_NN_1_5::synapse0x2d87270() {
   return (neuron0x2d6afb0()*0.000565604);
}

double NNfunction_NN_1_5::synapse0x2d86d00() {
   return (neuron0x2d6b2f0()*0.010536);
}

double NNfunction_NN_1_5::synapse0x2d86d40() {
   return (neuron0x2d6b850()*0.00578189);
}

double NNfunction_NN_1_5::synapse0x2d873c0() {
   return (neuron0x2d6bb90()*-0.0126342);
}

double NNfunction_NN_1_5::synapse0x2d87400() {
   return (neuron0x2d6bed0()*-0.0128685);
}

double NNfunction_NN_1_5::synapse0x2d87440() {
   return (neuron0x2d6c210()*-0.00113503);
}

double NNfunction_NN_1_5::synapse0x2d87480() {
   return (neuron0x2d6c550()*0.00305458);
}

double NNfunction_NN_1_5::synapse0x2d874c0() {
   return (neuron0x2d6c890()*-0.00438703);
}

double NNfunction_NN_1_5::synapse0x2d87500() {
   return (neuron0x2d6cbd0()*-10.7576);
}

double NNfunction_NN_1_5::synapse0x2d87880() {
   return (neuron0x2d67f80()*-0.0178211);
}

double NNfunction_NN_1_5::synapse0x2d878c0() {
   return (neuron0x2d68230()*-0.00870143);
}

double NNfunction_NN_1_5::synapse0x2d87900() {
   return (neuron0x2d68570()*13.317);
}

double NNfunction_NN_1_5::synapse0x2d87940() {
   return (neuron0x2d688b0()*-0.0284405);
}

double NNfunction_NN_1_5::synapse0x2d87980() {
   return (neuron0x2d68bf0()*-0.0114042);
}

double NNfunction_NN_1_5::synapse0x2d879c0() {
   return (neuron0x2d68f30()*0.0123444);
}

double NNfunction_NN_1_5::synapse0x2d87a00() {
   return (neuron0x2d69270()*-0.00672341);
}

double NNfunction_NN_1_5::synapse0x2d87a40() {
   return (neuron0x2d695b0()*0.00405294);
}

double NNfunction_NN_1_5::synapse0x2d87a80() {
   return (neuron0x2d698f0()*-0.00364406);
}

double NNfunction_NN_1_5::synapse0x2d87ac0() {
   return (neuron0x2d69c30()*-0.00167538);
}

double NNfunction_NN_1_5::synapse0x2d87b00() {
   return (neuron0x2d69f70()*-0.00034677);
}

double NNfunction_NN_1_5::synapse0x2d87b40() {
   return (neuron0x2d6a2b0()*-0.0784657);
}

double NNfunction_NN_1_5::synapse0x2d87b80() {
   return (neuron0x2d6a5f0()*0.000463377);
}

double NNfunction_NN_1_5::synapse0x2d87bc0() {
   return (neuron0x2d6a930()*0.0110876);
}

double NNfunction_NN_1_5::synapse0x2d87c00() {
   return (neuron0x2d6ac70()*0.0047787);
}

double NNfunction_NN_1_5::synapse0x2d87c40() {
   return (neuron0x2d6afb0()*-0.0008255);
}

double NNfunction_NN_1_5::synapse0x2d876d0() {
   return (neuron0x2d6b2f0()*0.0135273);
}

double NNfunction_NN_1_5::synapse0x2d87710() {
   return (neuron0x2d6b850()*0.00914859);
}

double NNfunction_NN_1_5::synapse0x2d87d90() {
   return (neuron0x2d6bb90()*-0.00872124);
}

double NNfunction_NN_1_5::synapse0x2d87dd0() {
   return (neuron0x2d6bed0()*-0.0141246);
}

double NNfunction_NN_1_5::synapse0x2d87e10() {
   return (neuron0x2d6c210()*-0.00307624);
}

double NNfunction_NN_1_5::synapse0x2d87e50() {
   return (neuron0x2d6c550()*-0.0128396);
}

double NNfunction_NN_1_5::synapse0x2d87e90() {
   return (neuron0x2d6c890()*0.00661842);
}

double NNfunction_NN_1_5::synapse0x2d87ed0() {
   return (neuron0x2d6cbd0()*-0.0198593);
}

double NNfunction_NN_1_5::synapse0x2d88250() {
   return (neuron0x2d67f80()*0.0511234);
}

double NNfunction_NN_1_5::synapse0x2d88290() {
   return (neuron0x2d68230()*-16.5681);
}

double NNfunction_NN_1_5::synapse0x2d882d0() {
   return (neuron0x2d68570()*1.13547);
}

double NNfunction_NN_1_5::synapse0x2d88310() {
   return (neuron0x2d688b0()*0.0191336);
}

double NNfunction_NN_1_5::synapse0x2d88350() {
   return (neuron0x2d68bf0()*0.00903277);
}

double NNfunction_NN_1_5::synapse0x2d88390() {
   return (neuron0x2d68f30()*-0.0318675);
}

double NNfunction_NN_1_5::synapse0x2d883d0() {
   return (neuron0x2d69270()*0.0147354);
}

double NNfunction_NN_1_5::synapse0x2d88410() {
   return (neuron0x2d695b0()*-0.0220729);
}

double NNfunction_NN_1_5::synapse0x2d88450() {
   return (neuron0x2d698f0()*0.0221189);
}

double NNfunction_NN_1_5::synapse0x2d88490() {
   return (neuron0x2d69c30()*0.0091563);
}

double NNfunction_NN_1_5::synapse0x2d884d0() {
   return (neuron0x2d69f70()*0.0138509);
}

double NNfunction_NN_1_5::synapse0x2d88510() {
   return (neuron0x2d6a2b0()*0.351378);
}

double NNfunction_NN_1_5::synapse0x2d88550() {
   return (neuron0x2d6a5f0()*-0.015888);
}

double NNfunction_NN_1_5::synapse0x2d88590() {
   return (neuron0x2d6a930()*0.0455558);
}

double NNfunction_NN_1_5::synapse0x2d885d0() {
   return (neuron0x2d6ac70()*-0.027887);
}

double NNfunction_NN_1_5::synapse0x2d88610() {
   return (neuron0x2d6afb0()*-0.0384921);
}

double NNfunction_NN_1_5::synapse0x2d880a0() {
   return (neuron0x2d6b2f0()*-0.0100794);
}

double NNfunction_NN_1_5::synapse0x2d880e0() {
   return (neuron0x2d6b850()*-0.0100406);
}

double NNfunction_NN_1_5::synapse0x2d88760() {
   return (neuron0x2d6bb90()*0.0435857);
}

double NNfunction_NN_1_5::synapse0x2d887a0() {
   return (neuron0x2d6bed0()*-0.0140026);
}

double NNfunction_NN_1_5::synapse0x2d887e0() {
   return (neuron0x2d6c210()*0.022478);
}

double NNfunction_NN_1_5::synapse0x2d88820() {
   return (neuron0x2d6c550()*-0.00590887);
}

double NNfunction_NN_1_5::synapse0x2d88860() {
   return (neuron0x2d6c890()*-0.0194618);
}

double NNfunction_NN_1_5::synapse0x2d888a0() {
   return (neuron0x2d6cbd0()*0.00238185);
}

double NNfunction_NN_1_5::synapse0x2d88c20() {
   return (neuron0x2d67f80()*-0.0716302);
}

double NNfunction_NN_1_5::synapse0x2d88c60() {
   return (neuron0x2d68230()*-0.0204927);
}

double NNfunction_NN_1_5::synapse0x2d88ca0() {
   return (neuron0x2d68570()*4.39726);
}

double NNfunction_NN_1_5::synapse0x2d88ce0() {
   return (neuron0x2d688b0()*0.0103399);
}

double NNfunction_NN_1_5::synapse0x2d88d20() {
   return (neuron0x2d68bf0()*-0.0155644);
}

double NNfunction_NN_1_5::synapse0x2d88d60() {
   return (neuron0x2d68f30()*-0.0424341);
}

double NNfunction_NN_1_5::synapse0x2d88da0() {
   return (neuron0x2d69270()*-0.0277065);
}

double NNfunction_NN_1_5::synapse0x2d88de0() {
   return (neuron0x2d695b0()*-0.0138397);
}

double NNfunction_NN_1_5::synapse0x2d88e20() {
   return (neuron0x2d698f0()*0.0518429);
}

double NNfunction_NN_1_5::synapse0x2d88e60() {
   return (neuron0x2d69c30()*-0.0157305);
}

double NNfunction_NN_1_5::synapse0x2d88ea0() {
   return (neuron0x2d69f70()*0.0154341);
}

double NNfunction_NN_1_5::synapse0x2d88ee0() {
   return (neuron0x2d6a2b0()*0.186942);
}

double NNfunction_NN_1_5::synapse0x2d88f20() {
   return (neuron0x2d6a5f0()*-0.027548);
}

double NNfunction_NN_1_5::synapse0x2d88f60() {
   return (neuron0x2d6a930()*0.00457766);
}

double NNfunction_NN_1_5::synapse0x2d88fa0() {
   return (neuron0x2d6ac70()*-0.0373445);
}

double NNfunction_NN_1_5::synapse0x2d88fe0() {
   return (neuron0x2d6afb0()*0.00896132);
}

double NNfunction_NN_1_5::synapse0x2d88a70() {
   return (neuron0x2d6b2f0()*-0.00192916);
}

double NNfunction_NN_1_5::synapse0x2d88ab0() {
   return (neuron0x2d6b850()*0.0143067);
}

double NNfunction_NN_1_5::synapse0x2d89130() {
   return (neuron0x2d6bb90()*-0.0353187);
}

double NNfunction_NN_1_5::synapse0x2d89170() {
   return (neuron0x2d6bed0()*-0.0313537);
}

double NNfunction_NN_1_5::synapse0x2d891b0() {
   return (neuron0x2d6c210()*0.0232834);
}

double NNfunction_NN_1_5::synapse0x2d891f0() {
   return (neuron0x2d6c550()*-0.0463343);
}

double NNfunction_NN_1_5::synapse0x2d89230() {
   return (neuron0x2d6c890()*-0.0204066);
}

double NNfunction_NN_1_5::synapse0x2d89270() {
   return (neuron0x2d6cbd0()*6.16748);
}

double NNfunction_NN_1_5::synapse0x2d895f0() {
   return (neuron0x2d67f80()*-0.219874);
}

double NNfunction_NN_1_5::synapse0x2d89630() {
   return (neuron0x2d68230()*0.100241);
}

double NNfunction_NN_1_5::synapse0x2d89670() {
   return (neuron0x2d68570()*1.20542);
}

double NNfunction_NN_1_5::synapse0x2d896b0() {
   return (neuron0x2d688b0()*-0.202161);
}

double NNfunction_NN_1_5::synapse0x2d896f0() {
   return (neuron0x2d68bf0()*-0.170493);
}

double NNfunction_NN_1_5::synapse0x2d89730() {
   return (neuron0x2d68f30()*0.24417);
}

double NNfunction_NN_1_5::synapse0x2d89770() {
   return (neuron0x2d69270()*-0.250838);
}

double NNfunction_NN_1_5::synapse0x2d897b0() {
   return (neuron0x2d695b0()*-0.300661);
}

double NNfunction_NN_1_5::synapse0x2d897f0() {
   return (neuron0x2d698f0()*-0.535044);
}

double NNfunction_NN_1_5::synapse0x2d89830() {
   return (neuron0x2d69c30()*0.141459);
}

double NNfunction_NN_1_5::synapse0x2d89870() {
   return (neuron0x2d69f70()*0.0806771);
}

double NNfunction_NN_1_5::synapse0x2d898b0() {
   return (neuron0x2d6a2b0()*-0.340251);
}

double NNfunction_NN_1_5::synapse0x2d898f0() {
   return (neuron0x2d6a5f0()*-0.424315);
}

double NNfunction_NN_1_5::synapse0x2d89930() {
   return (neuron0x2d6a930()*-0.457265);
}

double NNfunction_NN_1_5::synapse0x2d89970() {
   return (neuron0x2d6ac70()*0.692878);
}

double NNfunction_NN_1_5::synapse0x2d899b0() {
   return (neuron0x2d6afb0()*-0.0592932);
}

double NNfunction_NN_1_5::synapse0x2d89440() {
   return (neuron0x2d6b2f0()*-0.127812);
}

double NNfunction_NN_1_5::synapse0x2d89480() {
   return (neuron0x2d6b850()*-1.31756);
}

double NNfunction_NN_1_5::synapse0x2d89b00() {
   return (neuron0x2d6bb90()*0.115092);
}

double NNfunction_NN_1_5::synapse0x2d89b40() {
   return (neuron0x2d6bed0()*-0.351653);
}

double NNfunction_NN_1_5::synapse0x2d89b80() {
   return (neuron0x2d6c210()*0.269555);
}

double NNfunction_NN_1_5::synapse0x2d89bc0() {
   return (neuron0x2d6c550()*-0.0264226);
}

double NNfunction_NN_1_5::synapse0x2d89c00() {
   return (neuron0x2d6c890()*0.564032);
}

double NNfunction_NN_1_5::synapse0x2d89c40() {
   return (neuron0x2d6cbd0()*-1.24);
}

double NNfunction_NN_1_5::synapse0x2d89fc0() {
   return (neuron0x2d67f80()*0.166935);
}

double NNfunction_NN_1_5::synapse0x2d8a000() {
   return (neuron0x2d68230()*0.0941612);
}

double NNfunction_NN_1_5::synapse0x2d8a040() {
   return (neuron0x2d68570()*1.38182);
}

double NNfunction_NN_1_5::synapse0x2d8a080() {
   return (neuron0x2d688b0()*-0.0450474);
}

double NNfunction_NN_1_5::synapse0x2d8a0c0() {
   return (neuron0x2d68bf0()*-0.141593);
}

double NNfunction_NN_1_5::synapse0x2d8a100() {
   return (neuron0x2d68f30()*-0.0884146);
}

double NNfunction_NN_1_5::synapse0x2d8a140() {
   return (neuron0x2d69270()*0.50601);
}

double NNfunction_NN_1_5::synapse0x2d8a180() {
   return (neuron0x2d695b0()*-0.413115);
}

double NNfunction_NN_1_5::synapse0x2d8a1c0() {
   return (neuron0x2d698f0()*0.474148);
}

double NNfunction_NN_1_5::synapse0x2d8a200() {
   return (neuron0x2d69c30()*-0.192047);
}

double NNfunction_NN_1_5::synapse0x2d8a240() {
   return (neuron0x2d69f70()*-0.0161949);
}

double NNfunction_NN_1_5::synapse0x2d8a280() {
   return (neuron0x2d6a2b0()*0.362656);
}

double NNfunction_NN_1_5::synapse0x2d8a2c0() {
   return (neuron0x2d6a5f0()*1.32736);
}

double NNfunction_NN_1_5::synapse0x2d8a300() {
   return (neuron0x2d6a930()*0.545719);
}

double NNfunction_NN_1_5::synapse0x2d8a340() {
   return (neuron0x2d6ac70()*-0.0893861);
}

double NNfunction_NN_1_5::synapse0x2d8a380() {
   return (neuron0x2d6afb0()*-0.0983743);
}

double NNfunction_NN_1_5::synapse0x2d89e10() {
   return (neuron0x2d6b2f0()*-0.0954363);
}

double NNfunction_NN_1_5::synapse0x2d89e50() {
   return (neuron0x2d6b850()*-0.668439);
}

double NNfunction_NN_1_5::synapse0x2d8a4d0() {
   return (neuron0x2d6bb90()*0.771635);
}

double NNfunction_NN_1_5::synapse0x2d8a510() {
   return (neuron0x2d6bed0()*0.0375767);
}

double NNfunction_NN_1_5::synapse0x2d8a550() {
   return (neuron0x2d6c210()*0.255948);
}

double NNfunction_NN_1_5::synapse0x2d8a590() {
   return (neuron0x2d6c550()*0.154217);
}

double NNfunction_NN_1_5::synapse0x2d8a5d0() {
   return (neuron0x2d6c890()*-0.402085);
}

double NNfunction_NN_1_5::synapse0x2d8a610() {
   return (neuron0x2d6cbd0()*-0.226072);
}

double NNfunction_NN_1_5::synapse0x2d730c0() {
   return (neuron0x2d67f80()*-0.0788244);
}

double NNfunction_NN_1_5::synapse0x2d73100() {
   return (neuron0x2d68230()*-14.0733);
}

double NNfunction_NN_1_5::synapse0x2d73140() {
   return (neuron0x2d68570()*0.276219);
}

double NNfunction_NN_1_5::synapse0x2d73180() {
   return (neuron0x2d688b0()*0.0141516);
}

double NNfunction_NN_1_5::synapse0x2d731c0() {
   return (neuron0x2d68bf0()*-0.0119184);
}

double NNfunction_NN_1_5::synapse0x2d73200() {
   return (neuron0x2d68f30()*-0.0123108);
}

double NNfunction_NN_1_5::synapse0x2d73240() {
   return (neuron0x2d69270()*0.000546662);
}

double NNfunction_NN_1_5::synapse0x2d73280() {
   return (neuron0x2d695b0()*0.00137361);
}

double NNfunction_NN_1_5::synapse0x2d8ada0() {
   return (neuron0x2d698f0()*0.00941408);
}

double NNfunction_NN_1_5::synapse0x2d8ade0() {
   return (neuron0x2d69c30()*-0.0141985);
}

double NNfunction_NN_1_5::synapse0x2d8ae20() {
   return (neuron0x2d69f70()*-0.0194914);
}

double NNfunction_NN_1_5::synapse0x2d8ae60() {
   return (neuron0x2d6a2b0()*0.103353);
}

double NNfunction_NN_1_5::synapse0x2d8aea0() {
   return (neuron0x2d6a5f0()*-0.00531995);
}

double NNfunction_NN_1_5::synapse0x2d8aee0() {
   return (neuron0x2d6a930()*-0.0209644);
}

double NNfunction_NN_1_5::synapse0x2d8af20() {
   return (neuron0x2d6ac70()*-0.00297749);
}

double NNfunction_NN_1_5::synapse0x2d8af60() {
   return (neuron0x2d6afb0()*-0.00397145);
}

double NNfunction_NN_1_5::synapse0x2d8a7e0() {
   return (neuron0x2d6b2f0()*-0.00479699);
}

double NNfunction_NN_1_5::synapse0x2d8a820() {
   return (neuron0x2d6b850()*0.0201661);
}

double NNfunction_NN_1_5::synapse0x2d8b0b0() {
   return (neuron0x2d6bb90()*0.00575598);
}

double NNfunction_NN_1_5::synapse0x2d8b0f0() {
   return (neuron0x2d6bed0()*-0.0144485);
}

double NNfunction_NN_1_5::synapse0x2d8b130() {
   return (neuron0x2d6c210()*0.0122523);
}

double NNfunction_NN_1_5::synapse0x2d8b170() {
   return (neuron0x2d6c550()*-0.0174861);
}

double NNfunction_NN_1_5::synapse0x2d8b1b0() {
   return (neuron0x2d6c890()*0.00697288);
}

double NNfunction_NN_1_5::synapse0x2d8b1f0() {
   return (neuron0x2d6cbd0()*4.60292);
}

double NNfunction_NN_1_5::synapse0x2d8b570() {
   return (neuron0x2d67f80()*-0.0725375);
}

double NNfunction_NN_1_5::synapse0x2d8b5b0() {
   return (neuron0x2d68230()*-0.036673);
}

double NNfunction_NN_1_5::synapse0x2d8b5f0() {
   return (neuron0x2d68570()*-0.296456);
}

double NNfunction_NN_1_5::synapse0x2d8b630() {
   return (neuron0x2d688b0()*-0.0574444);
}

double NNfunction_NN_1_5::synapse0x2d8b670() {
   return (neuron0x2d68bf0()*0.0475506);
}

double NNfunction_NN_1_5::synapse0x2d8b6b0() {
   return (neuron0x2d68f30()*-0.0471833);
}

double NNfunction_NN_1_5::synapse0x2d8b6f0() {
   return (neuron0x2d69270()*0.119854);
}

double NNfunction_NN_1_5::synapse0x2d8b730() {
   return (neuron0x2d695b0()*-0.170907);
}

double NNfunction_NN_1_5::synapse0x2d8b770() {
   return (neuron0x2d698f0()*0.0698935);
}

double NNfunction_NN_1_5::synapse0x2d8b7b0() {
   return (neuron0x2d69c30()*0.0026644);
}

double NNfunction_NN_1_5::synapse0x2d8b7f0() {
   return (neuron0x2d69f70()*-0.0235795);
}

double NNfunction_NN_1_5::synapse0x2d8b830() {
   return (neuron0x2d6a2b0()*1.21275);
}

double NNfunction_NN_1_5::synapse0x2d8b870() {
   return (neuron0x2d6a5f0()*0.00471493);
}

double NNfunction_NN_1_5::synapse0x2d8b8b0() {
   return (neuron0x2d6a930()*0.141963);
}

double NNfunction_NN_1_5::synapse0x2d8b8f0() {
   return (neuron0x2d6ac70()*0.0396671);
}

double NNfunction_NN_1_5::synapse0x2d8b930() {
   return (neuron0x2d6afb0()*-0.0252762);
}

double NNfunction_NN_1_5::synapse0x2d8b3c0() {
   return (neuron0x2d6b2f0()*-0.0788807);
}

double NNfunction_NN_1_5::synapse0x2d8b400() {
   return (neuron0x2d6b850()*-0.0324246);
}

double NNfunction_NN_1_5::synapse0x2d8ba80() {
   return (neuron0x2d6bb90()*-0.108003);
}

double NNfunction_NN_1_5::synapse0x2d8bac0() {
   return (neuron0x2d6bed0()*-0.18917);
}

double NNfunction_NN_1_5::synapse0x2d8bb00() {
   return (neuron0x2d6c210()*0.0224019);
}

double NNfunction_NN_1_5::synapse0x2d8bb40() {
   return (neuron0x2d6c550()*-0.0151614);
}

double NNfunction_NN_1_5::synapse0x2d8bb80() {
   return (neuron0x2d6c890()*-0.000147294);
}

double NNfunction_NN_1_5::synapse0x2d8bbc0() {
   return (neuron0x2d6cbd0()*-1.28768);
}

double NNfunction_NN_1_5::synapse0x2d8bf40() {
   return (neuron0x2d67f80()*0.00224065);
}

double NNfunction_NN_1_5::synapse0x2d8bf80() {
   return (neuron0x2d68230()*0.00192599);
}

double NNfunction_NN_1_5::synapse0x2d8bfc0() {
   return (neuron0x2d68570()*0.0972382);
}

double NNfunction_NN_1_5::synapse0x2d8c000() {
   return (neuron0x2d688b0()*0.0250627);
}

double NNfunction_NN_1_5::synapse0x2d8c040() {
   return (neuron0x2d68bf0()*-0.00371302);
}

double NNfunction_NN_1_5::synapse0x2d8c080() {
   return (neuron0x2d68f30()*0.00884325);
}

double NNfunction_NN_1_5::synapse0x2d8c0c0() {
   return (neuron0x2d69270()*-0.00581715);
}

double NNfunction_NN_1_5::synapse0x2d8c100() {
   return (neuron0x2d695b0()*0.0125893);
}

double NNfunction_NN_1_5::synapse0x2d8c140() {
   return (neuron0x2d698f0()*0.0106475);
}

double NNfunction_NN_1_5::synapse0x2d8c180() {
   return (neuron0x2d69c30()*0.020333);
}

double NNfunction_NN_1_5::synapse0x2d8c1c0() {
   return (neuron0x2d69f70()*0.0101154);
}

double NNfunction_NN_1_5::synapse0x2d8c200() {
   return (neuron0x2d6a2b0()*0.0777725);
}

double NNfunction_NN_1_5::synapse0x2d8c240() {
   return (neuron0x2d6a5f0()*-0.0017777);
}

double NNfunction_NN_1_5::synapse0x2d8c280() {
   return (neuron0x2d6a930()*0.0101449);
}

double NNfunction_NN_1_5::synapse0x2d8c2c0() {
   return (neuron0x2d6ac70()*0.00228197);
}

double NNfunction_NN_1_5::synapse0x2d8c300() {
   return (neuron0x2d6afb0()*-0.00599518);
}

double NNfunction_NN_1_5::synapse0x2d8bd90() {
   return (neuron0x2d6b2f0()*0.0133693);
}

double NNfunction_NN_1_5::synapse0x2d8bdd0() {
   return (neuron0x2d6b850()*-0.00310106);
}

double NNfunction_NN_1_5::synapse0x2d7c900() {
   return (neuron0x2d6bb90()*0.026087);
}

double NNfunction_NN_1_5::synapse0x2d7c940() {
   return (neuron0x2d6bed0()*0.0174131);
}

double NNfunction_NN_1_5::synapse0x2d7c980() {
   return (neuron0x2d6c210()*0.00503616);
}

double NNfunction_NN_1_5::synapse0x2d7c9c0() {
   return (neuron0x2d6c550()*-0.00360605);
}

double NNfunction_NN_1_5::synapse0x2d7ca00() {
   return (neuron0x2d6c890()*-0.00537172);
}

double NNfunction_NN_1_5::synapse0x2d7ca40() {
   return (neuron0x2d6cbd0()*-2.55555);
}

double NNfunction_NN_1_5::synapse0x2d7cdc0() {
   return (neuron0x2d67f80()*-0.0583478);
}

double NNfunction_NN_1_5::synapse0x2d7ce00() {
   return (neuron0x2d68230()*0.0540081);
}

double NNfunction_NN_1_5::synapse0x2d7ce40() {
   return (neuron0x2d68570()*-0.869031);
}

double NNfunction_NN_1_5::synapse0x2d7ce80() {
   return (neuron0x2d688b0()*-0.107506);
}

double NNfunction_NN_1_5::synapse0x2d7cec0() {
   return (neuron0x2d68bf0()*0.0077186);
}

double NNfunction_NN_1_5::synapse0x2d7cf00() {
   return (neuron0x2d68f30()*0.189108);
}

double NNfunction_NN_1_5::synapse0x2d7cf40() {
   return (neuron0x2d69270()*-0.105045);
}

double NNfunction_NN_1_5::synapse0x2d7cf80() {
   return (neuron0x2d695b0()*0.0886706);
}

double NNfunction_NN_1_5::synapse0x2d7cfc0() {
   return (neuron0x2d698f0()*-0.00508926);
}

double NNfunction_NN_1_5::synapse0x2d7d000() {
   return (neuron0x2d69c30()*-0.0634774);
}

double NNfunction_NN_1_5::synapse0x2d7d040() {
   return (neuron0x2d69f70()*-0.0576093);
}

double NNfunction_NN_1_5::synapse0x2d7d080() {
   return (neuron0x2d6a2b0()*-0.232067);
}

double NNfunction_NN_1_5::synapse0x2d7d0c0() {
   return (neuron0x2d6a5f0()*0.143801);
}

double NNfunction_NN_1_5::synapse0x2d7d100() {
   return (neuron0x2d6a930()*-0.0275069);
}

double NNfunction_NN_1_5::synapse0x2d7d140() {
   return (neuron0x2d6ac70()*-0.0873765);
}

double NNfunction_NN_1_5::synapse0x2d7d180() {
   return (neuron0x2d6afb0()*-0.0382665);
}

double NNfunction_NN_1_5::synapse0x2d7cc10() {
   return (neuron0x2d6b2f0()*0.120781);
}

double NNfunction_NN_1_5::synapse0x2d7cc50() {
   return (neuron0x2d6b850()*0.0989451);
}

double NNfunction_NN_1_5::synapse0x2d7d2d0() {
   return (neuron0x2d6bb90()*-0.0453972);
}

double NNfunction_NN_1_5::synapse0x2d7d310() {
   return (neuron0x2d6bed0()*0.184857);
}

double NNfunction_NN_1_5::synapse0x2d7d350() {
   return (neuron0x2d6c210()*0.00587797);
}

double NNfunction_NN_1_5::synapse0x2d7d390() {
   return (neuron0x2d6c550()*0.0531978);
}

double NNfunction_NN_1_5::synapse0x2d7d3d0() {
   return (neuron0x2d6c890()*0.124929);
}

double NNfunction_NN_1_5::synapse0x2d7d410() {
   return (neuron0x2d6cbd0()*-0.000652107);
}

double NNfunction_NN_1_5::synapse0x2d7d790() {
   return (neuron0x2d67f80()*0.367898);
}

double NNfunction_NN_1_5::synapse0x2d7d7d0() {
   return (neuron0x2d68230()*0.285092);
}

double NNfunction_NN_1_5::synapse0x2d7d810() {
   return (neuron0x2d68570()*-1.03188);
}

double NNfunction_NN_1_5::synapse0x2d7d850() {
   return (neuron0x2d688b0()*-0.570501);
}

double NNfunction_NN_1_5::synapse0x2d7d890() {
   return (neuron0x2d68bf0()*0.147809);
}

double NNfunction_NN_1_5::synapse0x2d7d8d0() {
   return (neuron0x2d68f30()*-0.395422);
}

double NNfunction_NN_1_5::synapse0x2d7d910() {
   return (neuron0x2d69270()*0.333131);
}

double NNfunction_NN_1_5::synapse0x2d7d950() {
   return (neuron0x2d695b0()*-0.443601);
}

double NNfunction_NN_1_5::synapse0x2d7d990() {
   return (neuron0x2d698f0()*-0.357583);
}

double NNfunction_NN_1_5::synapse0x2d7d9d0() {
   return (neuron0x2d69c30()*0.458318);
}

double NNfunction_NN_1_5::synapse0x2d7da10() {
   return (neuron0x2d69f70()*0.500912);
}

double NNfunction_NN_1_5::synapse0x2d7da50() {
   return (neuron0x2d6a2b0()*-0.194755);
}

double NNfunction_NN_1_5::synapse0x2d7da90() {
   return (neuron0x2d6a5f0()*0.112108);
}

double NNfunction_NN_1_5::synapse0x2d7dad0() {
   return (neuron0x2d6a930()*-0.0333674);
}

double NNfunction_NN_1_5::synapse0x2d7db10() {
   return (neuron0x2d6ac70()*0.219012);
}

double NNfunction_NN_1_5::synapse0x2d7db50() {
   return (neuron0x2d6afb0()*-0.106996);
}

double NNfunction_NN_1_5::synapse0x2d7d5e0() {
   return (neuron0x2d6b2f0()*-0.326999);
}

double NNfunction_NN_1_5::synapse0x2d7d620() {
   return (neuron0x2d6b850()*-0.258577);
}

double NNfunction_NN_1_5::synapse0x2d7dca0() {
   return (neuron0x2d6bb90()*-0.0124659);
}

double NNfunction_NN_1_5::synapse0x2d7dce0() {
   return (neuron0x2d6bed0()*0.00760846);
}

double NNfunction_NN_1_5::synapse0x2d7dd20() {
   return (neuron0x2d6c210()*-0.27103);
}

double NNfunction_NN_1_5::synapse0x2d7dd60() {
   return (neuron0x2d6c550()*-0.0121228);
}

double NNfunction_NN_1_5::synapse0x2d7dda0() {
   return (neuron0x2d6c890()*0.266679);
}

double NNfunction_NN_1_5::synapse0x2d7dde0() {
   return (neuron0x2d6cbd0()*-0.65607);
}

double NNfunction_NN_1_5::synapse0x2d7e160() {
   return (neuron0x2d67f80()*0.295041);
}

double NNfunction_NN_1_5::synapse0x2d7e1a0() {
   return (neuron0x2d68230()*-0.0651819);
}

double NNfunction_NN_1_5::synapse0x2d7e1e0() {
   return (neuron0x2d68570()*3.05473);
}

double NNfunction_NN_1_5::synapse0x2d7e220() {
   return (neuron0x2d688b0()*0.0421629);
}

double NNfunction_NN_1_5::synapse0x2d7e260() {
   return (neuron0x2d68bf0()*-0.0519109);
}

double NNfunction_NN_1_5::synapse0x2d7e2a0() {
   return (neuron0x2d68f30()*0.016351);
}

double NNfunction_NN_1_5::synapse0x2d7e2e0() {
   return (neuron0x2d69270()*0.018055);
}

double NNfunction_NN_1_5::synapse0x2d7e320() {
   return (neuron0x2d695b0()*0.0601249);
}

double NNfunction_NN_1_5::synapse0x2d7e360() {
   return (neuron0x2d698f0()*0.0781936);
}

double NNfunction_NN_1_5::synapse0x2d7e3a0() {
   return (neuron0x2d69c30()*-0.0556026);
}

double NNfunction_NN_1_5::synapse0x2d7e3e0() {
   return (neuron0x2d69f70()*0.0113254);
}

double NNfunction_NN_1_5::synapse0x2d7e420() {
   return (neuron0x2d6a2b0()*0.429461);
}

double NNfunction_NN_1_5::synapse0x2d7e460() {
   return (neuron0x2d6a5f0()*0.0248949);
}

double NNfunction_NN_1_5::synapse0x2d7e4a0() {
   return (neuron0x2d6a930()*-0.054836);
}

double NNfunction_NN_1_5::synapse0x2d7e4e0() {
   return (neuron0x2d6ac70()*-0.00646103);
}

double NNfunction_NN_1_5::synapse0x2d7e520() {
   return (neuron0x2d6afb0()*0.0143265);
}

double NNfunction_NN_1_5::synapse0x2d7dfb0() {
   return (neuron0x2d6b2f0()*-0.108744);
}

double NNfunction_NN_1_5::synapse0x2d7dff0() {
   return (neuron0x2d6b850()*0.0819084);
}

double NNfunction_NN_1_5::synapse0x2d7e670() {
   return (neuron0x2d6bb90()*0.0112427);
}

double NNfunction_NN_1_5::synapse0x2d7e6b0() {
   return (neuron0x2d6bed0()*0.121784);
}

double NNfunction_NN_1_5::synapse0x2d7e6f0() {
   return (neuron0x2d6c210()*-0.080843);
}

double NNfunction_NN_1_5::synapse0x2d7e730() {
   return (neuron0x2d6c550()*-0.0260132);
}

double NNfunction_NN_1_5::synapse0x2d7e770() {
   return (neuron0x2d6c890()*0.0708246);
}

double NNfunction_NN_1_5::synapse0x2d7e7b0() {
   return (neuron0x2d6cbd0()*1.45323);
}

double NNfunction_NN_1_5::synapse0x2d90680() {
   return (neuron0x2d67f80()*-0.856866);
}

double NNfunction_NN_1_5::synapse0x2d906c0() {
   return (neuron0x2d68230()*-0.190516);
}

double NNfunction_NN_1_5::synapse0x2d90700() {
   return (neuron0x2d68570()*0.0623022);
}

double NNfunction_NN_1_5::synapse0x2d90740() {
   return (neuron0x2d688b0()*0.243269);
}

double NNfunction_NN_1_5::synapse0x2d90780() {
   return (neuron0x2d68bf0()*-0.426906);
}

double NNfunction_NN_1_5::synapse0x2d907c0() {
   return (neuron0x2d68f30()*0.200925);
}

double NNfunction_NN_1_5::synapse0x2d90800() {
   return (neuron0x2d69270()*0.653876);
}

double NNfunction_NN_1_5::synapse0x2d90840() {
   return (neuron0x2d695b0()*0.228155);
}

double NNfunction_NN_1_5::synapse0x2d90880() {
   return (neuron0x2d698f0()*0.511338);
}

double NNfunction_NN_1_5::synapse0x2d908c0() {
   return (neuron0x2d69c30()*-0.243926);
}

double NNfunction_NN_1_5::synapse0x2d90900() {
   return (neuron0x2d69f70()*0.0170811);
}

double NNfunction_NN_1_5::synapse0x2d90940() {
   return (neuron0x2d6a2b0()*-0.270732);
}

double NNfunction_NN_1_5::synapse0x2d90980() {
   return (neuron0x2d6a5f0()*-0.128565);
}

double NNfunction_NN_1_5::synapse0x2d909c0() {
   return (neuron0x2d6a930()*-0.178627);
}

double NNfunction_NN_1_5::synapse0x2d90a00() {
   return (neuron0x2d6ac70()*-0.288297);
}

double NNfunction_NN_1_5::synapse0x2d90a40() {
   return (neuron0x2d6afb0()*0.252288);
}

double NNfunction_NN_1_5::synapse0x2d7e7f0() {
   return (neuron0x2d6b2f0()*-0.538727);
}

double NNfunction_NN_1_5::synapse0x2d7e830() {
   return (neuron0x2d6b850()*0.256939);
}

double NNfunction_NN_1_5::synapse0x2d90b90() {
   return (neuron0x2d6bb90()*0.00217558);
}

double NNfunction_NN_1_5::synapse0x2d90bd0() {
   return (neuron0x2d6bed0()*-0.439679);
}

double NNfunction_NN_1_5::synapse0x2d90c10() {
   return (neuron0x2d6c210()*0.0668089);
}

double NNfunction_NN_1_5::synapse0x2d90c50() {
   return (neuron0x2d6c550()*-0.0832426);
}

double NNfunction_NN_1_5::synapse0x2d90c90() {
   return (neuron0x2d6c890()*0.0610879);
}

double NNfunction_NN_1_5::synapse0x2d90cd0() {
   return (neuron0x2d6cbd0()*0.102069);
}

double NNfunction_NN_1_5::synapse0x2d91050() {
   return (neuron0x2d67f80()*-0.0590052);
}

double NNfunction_NN_1_5::synapse0x2d91090() {
   return (neuron0x2d68230()*0.00563083);
}

double NNfunction_NN_1_5::synapse0x2d910d0() {
   return (neuron0x2d68570()*-0.433048);
}

double NNfunction_NN_1_5::synapse0x2d91110() {
   return (neuron0x2d688b0()*-0.00221665);
}

double NNfunction_NN_1_5::synapse0x2d91150() {
   return (neuron0x2d68bf0()*0.00500729);
}

double NNfunction_NN_1_5::synapse0x2d91190() {
   return (neuron0x2d68f30()*-3.861e-05);
}

double NNfunction_NN_1_5::synapse0x2d911d0() {
   return (neuron0x2d69270()*0.00497764);
}

double NNfunction_NN_1_5::synapse0x2d91210() {
   return (neuron0x2d695b0()*-0.010878);
}

double NNfunction_NN_1_5::synapse0x2d91250() {
   return (neuron0x2d698f0()*0.0106606);
}

double NNfunction_NN_1_5::synapse0x2d91290() {
   return (neuron0x2d69c30()*-0.00865718);
}

double NNfunction_NN_1_5::synapse0x2d912d0() {
   return (neuron0x2d69f70()*-0.0015976);
}

double NNfunction_NN_1_5::synapse0x2d91310() {
   return (neuron0x2d6a2b0()*-0.629118);
}

double NNfunction_NN_1_5::synapse0x2d91350() {
   return (neuron0x2d6a5f0()*-0.0106413);
}

double NNfunction_NN_1_5::synapse0x2d91390() {
   return (neuron0x2d6a930()*0.0191323);
}

double NNfunction_NN_1_5::synapse0x2d913d0() {
   return (neuron0x2d6ac70()*0.0174048);
}

double NNfunction_NN_1_5::synapse0x2d91410() {
   return (neuron0x2d6afb0()*0.00997721);
}

double NNfunction_NN_1_5::synapse0x2d90ea0() {
   return (neuron0x2d6b2f0()*0.0324548);
}

double NNfunction_NN_1_5::synapse0x2d90ee0() {
   return (neuron0x2d6b850()*-0.0103015);
}

double NNfunction_NN_1_5::synapse0x2d91560() {
   return (neuron0x2d6bb90()*-0.032616);
}

double NNfunction_NN_1_5::synapse0x2d915a0() {
   return (neuron0x2d6bed0()*-0.0305983);
}

double NNfunction_NN_1_5::synapse0x2d915e0() {
   return (neuron0x2d6c210()*0.0076108);
}

double NNfunction_NN_1_5::synapse0x2d91620() {
   return (neuron0x2d6c550()*-0.0058989);
}

double NNfunction_NN_1_5::synapse0x2d91660() {
   return (neuron0x2d6c890()*-0.0142848);
}

double NNfunction_NN_1_5::synapse0x2d916a0() {
   return (neuron0x2d6cbd0()*-3.59615);
}

double NNfunction_NN_1_5::synapse0x2d91a20() {
   return (neuron0x2d67f80()*2.74325);
}

double NNfunction_NN_1_5::synapse0x2d91a60() {
   return (neuron0x2d68230()*0.0207242);
}

double NNfunction_NN_1_5::synapse0x2d91aa0() {
   return (neuron0x2d68570()*3.20007);
}

double NNfunction_NN_1_5::synapse0x2d91ae0() {
   return (neuron0x2d688b0()*-0.026375);
}

double NNfunction_NN_1_5::synapse0x2d91b20() {
   return (neuron0x2d68bf0()*-0.0117807);
}

double NNfunction_NN_1_5::synapse0x2d91b60() {
   return (neuron0x2d68f30()*0.0229003);
}

double NNfunction_NN_1_5::synapse0x2d91ba0() {
   return (neuron0x2d69270()*-0.0418256);
}

double NNfunction_NN_1_5::synapse0x2d91be0() {
   return (neuron0x2d695b0()*-0.00785048);
}

double NNfunction_NN_1_5::synapse0x2d91c20() {
   return (neuron0x2d698f0()*0.0614432);
}

double NNfunction_NN_1_5::synapse0x2d91c60() {
   return (neuron0x2d69c30()*-0.0256859);
}

double NNfunction_NN_1_5::synapse0x2d91ca0() {
   return (neuron0x2d69f70()*-0.0051951);
}

double NNfunction_NN_1_5::synapse0x2d91ce0() {
   return (neuron0x2d6a2b0()*-0.0121007);
}

double NNfunction_NN_1_5::synapse0x2d91d20() {
   return (neuron0x2d6a5f0()*0.0080228);
}

double NNfunction_NN_1_5::synapse0x2d91d60() {
   return (neuron0x2d6a930()*0.0451634);
}

double NNfunction_NN_1_5::synapse0x2d91da0() {
   return (neuron0x2d6ac70()*-0.00646019);
}

double NNfunction_NN_1_5::synapse0x2d91de0() {
   return (neuron0x2d6afb0()*0.0184524);
}

double NNfunction_NN_1_5::synapse0x2d91870() {
   return (neuron0x2d6b2f0()*0.0308161);
}

double NNfunction_NN_1_5::synapse0x2d918b0() {
   return (neuron0x2d6b850()*0.0213484);
}

double NNfunction_NN_1_5::synapse0x2d91f30() {
   return (neuron0x2d6bb90()*-0.0394007);
}

double NNfunction_NN_1_5::synapse0x2d91f70() {
   return (neuron0x2d6bed0()*0.0284561);
}

double NNfunction_NN_1_5::synapse0x2d91fb0() {
   return (neuron0x2d6c210()*-0.0190376);
}

double NNfunction_NN_1_5::synapse0x2d91ff0() {
   return (neuron0x2d6c550()*0.0180584);
}

double NNfunction_NN_1_5::synapse0x2d92030() {
   return (neuron0x2d6c890()*0.0103361);
}

double NNfunction_NN_1_5::synapse0x2d92070() {
   return (neuron0x2d6cbd0()*-0.116233);
}

double NNfunction_NN_1_5::synapse0x2d923f0() {
   return (neuron0x2d67f80()*0.511654);
}

double NNfunction_NN_1_5::synapse0x2d92430() {
   return (neuron0x2d68230()*0.0572996);
}

double NNfunction_NN_1_5::synapse0x2d92470() {
   return (neuron0x2d68570()*0.0503782);
}

double NNfunction_NN_1_5::synapse0x2d924b0() {
   return (neuron0x2d688b0()*-0.0707712);
}

double NNfunction_NN_1_5::synapse0x2d924f0() {
   return (neuron0x2d68bf0()*0.676025);
}

double NNfunction_NN_1_5::synapse0x2d92530() {
   return (neuron0x2d68f30()*0.200126);
}

double NNfunction_NN_1_5::synapse0x2d92570() {
   return (neuron0x2d69270()*-0.059266);
}

double NNfunction_NN_1_5::synapse0x2d925b0() {
   return (neuron0x2d695b0()*0.200194);
}

double NNfunction_NN_1_5::synapse0x2d925f0() {
   return (neuron0x2d698f0()*-0.277602);
}

double NNfunction_NN_1_5::synapse0x2d92630() {
   return (neuron0x2d69c30()*0.178888);
}

double NNfunction_NN_1_5::synapse0x2d92670() {
   return (neuron0x2d69f70()*-0.487154);
}

double NNfunction_NN_1_5::synapse0x2d926b0() {
   return (neuron0x2d6a2b0()*-0.192738);
}

double NNfunction_NN_1_5::synapse0x2d926f0() {
   return (neuron0x2d6a5f0()*0.503562);
}

double NNfunction_NN_1_5::synapse0x2d92730() {
   return (neuron0x2d6a930()*-0.428164);
}

double NNfunction_NN_1_5::synapse0x2d92770() {
   return (neuron0x2d6ac70()*-0.289102);
}

double NNfunction_NN_1_5::synapse0x2d927b0() {
   return (neuron0x2d6afb0()*-0.537676);
}

double NNfunction_NN_1_5::synapse0x2d92240() {
   return (neuron0x2d6b2f0()*0.265377);
}

double NNfunction_NN_1_5::synapse0x2d92280() {
   return (neuron0x2d6b850()*0.0578288);
}

double NNfunction_NN_1_5::synapse0x2d92900() {
   return (neuron0x2d6bb90()*-0.188012);
}

double NNfunction_NN_1_5::synapse0x2d92940() {
   return (neuron0x2d6bed0()*-0.137451);
}

double NNfunction_NN_1_5::synapse0x2d92980() {
   return (neuron0x2d6c210()*-0.203604);
}

double NNfunction_NN_1_5::synapse0x2d929c0() {
   return (neuron0x2d6c550()*0.170379);
}

double NNfunction_NN_1_5::synapse0x2d92a00() {
   return (neuron0x2d6c890()*0.492185);
}

double NNfunction_NN_1_5::synapse0x2d92a40() {
   return (neuron0x2d6cbd0()*-0.68165);
}

double NNfunction_NN_1_5::synapse0x2d6de90() {
   return (neuron0x2d6d040()*0.337417);
}

double NNfunction_NN_1_5::synapse0x2d6ded0() {
   return (neuron0x2d6d880()*-0.0572022);
}

double NNfunction_NN_1_5::synapse0x2d6f3f0() {
   return (neuron0x2d6e360()*0.0124081);
}

double NNfunction_NN_1_5::synapse0x2d6f430() {
   return (neuron0x2b28c70()*0.650899);
}

double NNfunction_NN_1_5::synapse0x2d70ec0() {
   return (neuron0x2d6f140()*0.504116);
}

double NNfunction_NN_1_5::synapse0x2d70f00() {
   return (neuron0x2d70c10()*0.227203);
}

double NNfunction_NN_1_5::synapse0x2d71c90() {
   return (neuron0x2d719e0()*0.682652);
}

double NNfunction_NN_1_5::synapse0x2d71cd0() {
   return (neuron0x2d723b0()*0.0622757);
}

double NNfunction_NN_1_5::synapse0x2d72660() {
   return (neuron0x2d72d80()*-0.220794);
}

double NNfunction_NN_1_5::synapse0x2d726a0() {
   return (neuron0x2d73860()*0.665674);
}

double NNfunction_NN_1_5::synapse0x2d73030() {
   return (neuron0x2d74230()*0.23038);
}

double NNfunction_NN_1_5::synapse0x2d73070() {
   return (neuron0x2d71310()*0.101598);
}

double NNfunction_NN_1_5::synapse0x2d73b10() {
   return (neuron0x2d75de0()*0.294032);
}

double NNfunction_NN_1_5::synapse0x2d73b50() {
   return (neuron0x2d767b0()*0.630512);
}

double NNfunction_NN_1_5::synapse0x2d744e0() {
   return (neuron0x2d77180()*-0.0738594);
}

double NNfunction_NN_1_5::synapse0x2d74520() {
   return (neuron0x2d77b50()*0.560809);
}

double NNfunction_NN_1_5::synapse0x2d715c0() {
   return (neuron0x2d79960()*0.206257);
}

double NNfunction_NN_1_5::synapse0x2d71600() {
   return (neuron0x2d79c40()*0.0550189);
}

double NNfunction_NN_1_5::synapse0x2d76090() {
   return (neuron0x2d7a610()*0.331699);
}

double NNfunction_NN_1_5::synapse0x2d760d0() {
   return (neuron0x2d7afe0()*0.0573332);
}

double NNfunction_NN_1_5::synapse0x2d76a60() {
   return (neuron0x2d7b9b0()*-0.218022);
}

double NNfunction_NN_1_5::synapse0x2d76aa0() {
   return (neuron0x2d7c380()*0.68351);
}

double NNfunction_NN_1_5::synapse0x2d77430() {
   return (neuron0x2d74ed0()*0.331513);
}

double NNfunction_NN_1_5::synapse0x2d77470() {
   return (neuron0x2d758a0()*0.310667);
}

double NNfunction_NN_1_5::synapse0x2d77e00() {
   return (neuron0x2d7f110()*0.593687);
}

double NNfunction_NN_1_5::synapse0x2d77e40() {
   return (neuron0x2d7fae0()*0.477222);
}

double NNfunction_NN_1_5::synapse0x2d6ae90() {
   return (neuron0x2d804b0()*0.341895);
}

double NNfunction_NN_1_5::synapse0x2d6aed0() {
   return (neuron0x2d80e80()*0.13453);
}

double NNfunction_NN_1_5::synapse0x2d79ef0() {
   return (neuron0x2d81850()*0.405262);
}

double NNfunction_NN_1_5::synapse0x2d79f30() {
   return (neuron0x2d82220()*0.472397);
}

double NNfunction_NN_1_5::synapse0x2d7a8c0() {
   return (neuron0x2d82bf0()*0.601556);
}

double NNfunction_NN_1_5::synapse0x2d7a900() {
   return (neuron0x2d835c0()*0.688593);
}

double NNfunction_NN_1_5::synapse0x2d7b290() {
   return (neuron0x2d79650()*0.00321604);
}

double NNfunction_NN_1_5::synapse0x2d7b2d0() {
   return (neuron0x2d861a0()*0.455671);
}

double NNfunction_NN_1_5::synapse0x2d7bc60() {
   return (neuron0x2d86b70()*0.556907);
}

double NNfunction_NN_1_5::synapse0x2d7bca0() {
   return (neuron0x2d87540()*-0.116804);
}

double NNfunction_NN_1_5::synapse0x2d7c630() {
   return (neuron0x2d87f10()*-0.181779);
}

double NNfunction_NN_1_5::synapse0x2d7c670() {
   return (neuron0x2d888e0()*0.352181);
}

double NNfunction_NN_1_5::synapse0x2d75180() {
   return (neuron0x2d892b0()*0.28685);
}

double NNfunction_NN_1_5::synapse0x2d751c0() {
   return (neuron0x2d89c80()*-0.0511343);
}

double NNfunction_NN_1_5::synapse0x2d7ea30() {
   return (neuron0x2d8a650()*0.456737);
}

double NNfunction_NN_1_5::synapse0x2d7ea70() {
   return (neuron0x2d8b230()*-0.0827316);
}

double NNfunction_NN_1_5::synapse0x2d7f3c0() {
   return (neuron0x2d8bc00()*0.4687);
}

double NNfunction_NN_1_5::synapse0x2d7f400() {
   return (neuron0x2d7ca80()*0.287778);
}

double NNfunction_NN_1_5::synapse0x2d7fd90() {
   return (neuron0x2d7d450()*0.420062);
}

double NNfunction_NN_1_5::synapse0x2d7fdd0() {
   return (neuron0x2d7de20()*-0.238201);
}

double NNfunction_NN_1_5::synapse0x2d80760() {
   return (neuron0x2d90460()*-0.0820928);
}

double NNfunction_NN_1_5::synapse0x2d807a0() {
   return (neuron0x2d90d10()*0.444814);
}

double NNfunction_NN_1_5::synapse0x2d81130() {
   return (neuron0x2d916e0()*0.740859);
}

double NNfunction_NN_1_5::synapse0x2d81170() {
   return (neuron0x2d920b0()*0.377173);
}

double NNfunction_NN_1_5::synapse0x2d83870() {
   return (neuron0x2d6d040()*-0.0647051);
}

double NNfunction_NN_1_5::synapse0x2d838b0() {
   return (neuron0x2d6d880()*-0.822732);
}

double NNfunction_NN_1_5::synapse0x2d78e30() {
   return (neuron0x2d6e360()*0.0744301);
}

double NNfunction_NN_1_5::synapse0x2d78e70() {
   return (neuron0x2b28c70()*0.299939);
}

double NNfunction_NN_1_5::synapse0x2d86450() {
   return (neuron0x2d6f140()*-0.0880136);
}

double NNfunction_NN_1_5::synapse0x2d86490() {
   return (neuron0x2d70c10()*-0.285642);
}

double NNfunction_NN_1_5::synapse0x2d86e20() {
   return (neuron0x2d719e0()*0.0855741);
}

double NNfunction_NN_1_5::synapse0x2d86e60() {
   return (neuron0x2d723b0()*-2.20747);
}

double NNfunction_NN_1_5::synapse0x2d877f0() {
   return (neuron0x2d72d80()*-2.64803);
}

double NNfunction_NN_1_5::synapse0x2d87830() {
   return (neuron0x2d73860()*-0.391244);
}

double NNfunction_NN_1_5::synapse0x2d881c0() {
   return (neuron0x2d74230()*0.252868);
}

double NNfunction_NN_1_5::synapse0x2d88200() {
   return (neuron0x2d71310()*-1.60777);
}

double NNfunction_NN_1_5::synapse0x2d88b90() {
   return (neuron0x2d75de0()*-0.829761);
}

double NNfunction_NN_1_5::synapse0x2d88bd0() {
   return (neuron0x2d767b0()*0.198411);
}

double NNfunction_NN_1_5::synapse0x2d89560() {
   return (neuron0x2d77180()*0.317783);
}

double NNfunction_NN_1_5::synapse0x2d895a0() {
   return (neuron0x2d77b50()*-2.32389);
}

double NNfunction_NN_1_5::synapse0x2d89f30() {
   return (neuron0x2d79960()*-1.00552);
}

double NNfunction_NN_1_5::synapse0x2d89f70() {
   return (neuron0x2d79c40()*-0.641098);
}

double NNfunction_NN_1_5::synapse0x2d8a900() {
   return (neuron0x2d7a610()*0.0463485);
}

double NNfunction_NN_1_5::synapse0x2d8a940() {
   return (neuron0x2d7afe0()*-0.204406);
}

double NNfunction_NN_1_5::synapse0x2d8b4e0() {
   return (neuron0x2d7b9b0()*0.43544);
}

double NNfunction_NN_1_5::synapse0x2d8b520() {
   return (neuron0x2d7c380()*-0.125269);
}

double NNfunction_NN_1_5::synapse0x2d8beb0() {
   return (neuron0x2d74ed0()*0.0503737);
}

double NNfunction_NN_1_5::synapse0x2d8bef0() {
   return (neuron0x2d758a0()*0.54316);
}

double NNfunction_NN_1_5::synapse0x2d7cd30() {
   return (neuron0x2d7f110()*-0.174915);
}

double NNfunction_NN_1_5::synapse0x2d7cd70() {
   return (neuron0x2d7fae0()*0.0553376);
}

double NNfunction_NN_1_5::synapse0x2d7d700() {
   return (neuron0x2d804b0()*-0.689042);
}

double NNfunction_NN_1_5::synapse0x2d7d740() {
   return (neuron0x2d80e80()*0.105446);
}

double NNfunction_NN_1_5::synapse0x2d7e0d0() {
   return (neuron0x2d81850()*0.190767);
}

double NNfunction_NN_1_5::synapse0x2d7e110() {
   return (neuron0x2d82220()*-1.04151);
}

double NNfunction_NN_1_5::synapse0x2d905f0() {
   return (neuron0x2d82bf0()*-0.0621199);
}

double NNfunction_NN_1_5::synapse0x2d90630() {
   return (neuron0x2d835c0()*-0.188759);
}

double NNfunction_NN_1_5::synapse0x2d90fc0() {
   return (neuron0x2d79650()*0.335197);
}

double NNfunction_NN_1_5::synapse0x2d91000() {
   return (neuron0x2d861a0()*1.86106);
}

double NNfunction_NN_1_5::synapse0x2d91990() {
   return (neuron0x2d86b70()*-0.150396);
}

double NNfunction_NN_1_5::synapse0x2d919d0() {
   return (neuron0x2d87540()*3.9951);
}

double NNfunction_NN_1_5::synapse0x2d92360() {
   return (neuron0x2d87f10()*3.46237);
}

double NNfunction_NN_1_5::synapse0x2d923a0() {
   return (neuron0x2d888e0()*-1.8543);
}

double NNfunction_NN_1_5::synapse0x2d6d2f0() {
   return (neuron0x2d892b0()*-0.0628577);
}

double NNfunction_NN_1_5::synapse0x2d6d330() {
   return (neuron0x2d89c80()*-0.0314633);
}

double NNfunction_NN_1_5::synapse0x2d81b00() {
   return (neuron0x2d8a650()*1.25431);
}

double NNfunction_NN_1_5::synapse0x2d81b40() {
   return (neuron0x2d8b230()*-0.629362);
}

double NNfunction_NN_1_5::synapse0x2d92a80() {
   return (neuron0x2d8bc00()*-0.693237);
}

double NNfunction_NN_1_5::synapse0x2d92ac0() {
   return (neuron0x2d7ca80()*-1.50921);
}

double NNfunction_NN_1_5::synapse0x2d92b00() {
   return (neuron0x2d7d450()*-0.0711954);
}

double NNfunction_NN_1_5::synapse0x2d92b40() {
   return (neuron0x2d7de20()*0.186466);
}

double NNfunction_NN_1_5::synapse0x2d999f0() {
   return (neuron0x2d90460()*-0.0931679);
}

double NNfunction_NN_1_5::synapse0x2d99a30() {
   return (neuron0x2d90d10()*-2.17434);
}

double NNfunction_NN_1_5::synapse0x2d99a70() {
   return (neuron0x2d916e0()*1.20352);
}

double NNfunction_NN_1_5::synapse0x2d99ab0() {
   return (neuron0x2d920b0()*-0.0736595);
}

double NNfunction_NN_1_5::synapse0x2d99e30() {
   return (neuron0x2d6d040()*0.32105);
}

double NNfunction_NN_1_5::synapse0x2d99e70() {
   return (neuron0x2d6d880()*2.29073);
}

double NNfunction_NN_1_5::synapse0x2d99eb0() {
   return (neuron0x2d6e360()*0.32851);
}

double NNfunction_NN_1_5::synapse0x2d99ef0() {
   return (neuron0x2b28c70()*-3.09414);
}

double NNfunction_NN_1_5::synapse0x2d99f30() {
   return (neuron0x2d6f140()*-0.325361);
}

double NNfunction_NN_1_5::synapse0x2d99f70() {
   return (neuron0x2d70c10()*-0.713565);
}

double NNfunction_NN_1_5::synapse0x2d99fb0() {
   return (neuron0x2d719e0()*0.469147);
}

double NNfunction_NN_1_5::synapse0x2d99ff0() {
   return (neuron0x2d723b0()*0.364755);
}

double NNfunction_NN_1_5::synapse0x2d9a030() {
   return (neuron0x2d72d80()*-4.67184);
}

double NNfunction_NN_1_5::synapse0x2d9a070() {
   return (neuron0x2d73860()*-0.794843);
}

double NNfunction_NN_1_5::synapse0x2d9a0b0() {
   return (neuron0x2d74230()*1.05277);
}

double NNfunction_NN_1_5::synapse0x2d9a0f0() {
   return (neuron0x2d71310()*-2.27983);
}

double NNfunction_NN_1_5::synapse0x2d9a130() {
   return (neuron0x2d75de0()*-0.706778);
}

double NNfunction_NN_1_5::synapse0x2d9a170() {
   return (neuron0x2d767b0()*0.461587);
}

double NNfunction_NN_1_5::synapse0x2d9a1b0() {
   return (neuron0x2d77180()*0.775992);
}

double NNfunction_NN_1_5::synapse0x2d9a1f0() {
   return (neuron0x2d77b50()*-2.93194);
}

double NNfunction_NN_1_5::synapse0x2d99c80() {
   return (neuron0x2d79960()*-1.37432);
}

double NNfunction_NN_1_5::synapse0x2d99cc0() {
   return (neuron0x2d79c40()*1.87978);
}

double NNfunction_NN_1_5::synapse0x2d9a340() {
   return (neuron0x2d7a610()*0.242751);
}

double NNfunction_NN_1_5::synapse0x2d9a380() {
   return (neuron0x2d7afe0()*-0.673758);
}

double NNfunction_NN_1_5::synapse0x2d9a3c0() {
   return (neuron0x2d7b9b0()*0.857818);
}

double NNfunction_NN_1_5::synapse0x2d9a400() {
   return (neuron0x2d7c380()*-0.326255);
}

double NNfunction_NN_1_5::synapse0x2d9a440() {
   return (neuron0x2d74ed0()*0.609866);
}

double NNfunction_NN_1_5::synapse0x2d9a480() {
   return (neuron0x2d758a0()*0.273786);
}

double NNfunction_NN_1_5::synapse0x2d9a4c0() {
   return (neuron0x2d7f110()*-0.54035);
}

double NNfunction_NN_1_5::synapse0x2d9a500() {
   return (neuron0x2d7fae0()*0.298795);
}

double NNfunction_NN_1_5::synapse0x2d9a540() {
   return (neuron0x2d804b0()*-1.06737);
}

double NNfunction_NN_1_5::synapse0x2d9a580() {
   return (neuron0x2d80e80()*0.353683);
}

double NNfunction_NN_1_5::synapse0x2d9a5c0() {
   return (neuron0x2d81850()*1.12252);
}

double NNfunction_NN_1_5::synapse0x2d9a600() {
   return (neuron0x2d82220()*-1.35287);
}

double NNfunction_NN_1_5::synapse0x2d9a640() {
   return (neuron0x2d82bf0()*0.352629);
}

double NNfunction_NN_1_5::synapse0x2d9a680() {
   return (neuron0x2d835c0()*-0.491913);
}

double NNfunction_NN_1_5::synapse0x2d9a230() {
   return (neuron0x2d79650()*0.546175);
}

double NNfunction_NN_1_5::synapse0x2d9a270() {
   return (neuron0x2d861a0()*-1.529);
}

double NNfunction_NN_1_5::synapse0x2d9a2b0() {
   return (neuron0x2d86b70()*-3.45388);
}

double NNfunction_NN_1_5::synapse0x2d9a2f0() {
   return (neuron0x2d87540()*8.79627);
}

double NNfunction_NN_1_5::synapse0x2d9a8d0() {
   return (neuron0x2d87f10()*4.85939);
}

double NNfunction_NN_1_5::synapse0x2d9a910() {
   return (neuron0x2d888e0()*-2.05986);
}

double NNfunction_NN_1_5::synapse0x2d9a950() {
   return (neuron0x2d892b0()*-0.372743);
}

double NNfunction_NN_1_5::synapse0x2d9a990() {
   return (neuron0x2d89c80()*-0.219922);
}

double NNfunction_NN_1_5::synapse0x2d9a9d0() {
   return (neuron0x2d8a650()*-0.353447);
}

double NNfunction_NN_1_5::synapse0x2d9aa10() {
   return (neuron0x2d8b230()*-0.712023);
}

double NNfunction_NN_1_5::synapse0x2d9aa50() {
   return (neuron0x2d8bc00()*-1.74474);
}

double NNfunction_NN_1_5::synapse0x2d9aa90() {
   return (neuron0x2d7ca80()*-1.63515);
}

double NNfunction_NN_1_5::synapse0x2d9aad0() {
   return (neuron0x2d7d450()*-0.33126);
}

double NNfunction_NN_1_5::synapse0x2d9ab10() {
   return (neuron0x2d7de20()*0.764418);
}

double NNfunction_NN_1_5::synapse0x2d9ab50() {
   return (neuron0x2d90460()*-0.362116);
}

double NNfunction_NN_1_5::synapse0x2d9ab90() {
   return (neuron0x2d90d10()*-0.522597);
}

double NNfunction_NN_1_5::synapse0x2d9abd0() {
   return (neuron0x2d916e0()*-0.00768386);
}

double NNfunction_NN_1_5::synapse0x2d9ac10() {
   return (neuron0x2d920b0()*-0.356881);
}

double NNfunction_NN_1_5::synapse0x2d9af90() {
   return (neuron0x2d6d040()*-0.108818);
}

double NNfunction_NN_1_5::synapse0x2d9afd0() {
   return (neuron0x2d6d880()*-0.855958);
}

double NNfunction_NN_1_5::synapse0x2d9b010() {
   return (neuron0x2d6e360()*-0.17751);
}

double NNfunction_NN_1_5::synapse0x2d9b050() {
   return (neuron0x2b28c70()*0.0213157);
}

double NNfunction_NN_1_5::synapse0x2d9b090() {
   return (neuron0x2d6f140()*0.0834369);
}

double NNfunction_NN_1_5::synapse0x2d9b0d0() {
   return (neuron0x2d70c10()*0.41581);
}

double NNfunction_NN_1_5::synapse0x2d9b110() {
   return (neuron0x2d719e0()*-0.128183);
}

double NNfunction_NN_1_5::synapse0x2d9b150() {
   return (neuron0x2d723b0()*-0.448603);
}

double NNfunction_NN_1_5::synapse0x2d9b190() {
   return (neuron0x2d72d80()*1.94916);
}

double NNfunction_NN_1_5::synapse0x2d9b1d0() {
   return (neuron0x2d73860()*0.654828);
}

double NNfunction_NN_1_5::synapse0x2d9b210() {
   return (neuron0x2d74230()*-0.343121);
}

double NNfunction_NN_1_5::synapse0x2d9b250() {
   return (neuron0x2d71310()*1.24673);
}

double NNfunction_NN_1_5::synapse0x2d9b290() {
   return (neuron0x2d75de0()*0.233787);
}

double NNfunction_NN_1_5::synapse0x2d9b2d0() {
   return (neuron0x2d767b0()*-0.154563);
}

double NNfunction_NN_1_5::synapse0x2d9b310() {
   return (neuron0x2d77180()*-0.606994);
}

double NNfunction_NN_1_5::synapse0x2d9b350() {
   return (neuron0x2d77b50()*-1.38295);
}

double NNfunction_NN_1_5::synapse0x2d9ade0() {
   return (neuron0x2d79960()*0.721199);
}

double NNfunction_NN_1_5::synapse0x2d9ae20() {
   return (neuron0x2d79c40()*-1.03007);
}

double NNfunction_NN_1_5::synapse0x2d9b4a0() {
   return (neuron0x2d7a610()*-0.111456);
}

double NNfunction_NN_1_5::synapse0x2d9b4e0() {
   return (neuron0x2d7afe0()*0.0752703);
}

double NNfunction_NN_1_5::synapse0x2d9b520() {
   return (neuron0x2d7b9b0()*-0.0969926);
}

double NNfunction_NN_1_5::synapse0x2d9b560() {
   return (neuron0x2d7c380()*0.124838);
}

double NNfunction_NN_1_5::synapse0x2d9b5a0() {
   return (neuron0x2d74ed0()*-0.206736);
}

double NNfunction_NN_1_5::synapse0x2d9b5e0() {
   return (neuron0x2d758a0()*-0.482222);
}

double NNfunction_NN_1_5::synapse0x2d9b620() {
   return (neuron0x2d7f110()*0.171339);
}

double NNfunction_NN_1_5::synapse0x2d9b660() {
   return (neuron0x2d7fae0()*-0.0996524);
}

double NNfunction_NN_1_5::synapse0x2d9b6a0() {
   return (neuron0x2d804b0()*0.353143);
}

double NNfunction_NN_1_5::synapse0x2d9b6e0() {
   return (neuron0x2d80e80()*-0.10875);
}

double NNfunction_NN_1_5::synapse0x2d9b720() {
   return (neuron0x2d81850()*-0.705794);
}

double NNfunction_NN_1_5::synapse0x2d9b760() {
   return (neuron0x2d82220()*1.08473);
}

double NNfunction_NN_1_5::synapse0x2d9b7a0() {
   return (neuron0x2d82bf0()*-0.00025937);
}

double NNfunction_NN_1_5::synapse0x2d9b7e0() {
   return (neuron0x2d835c0()*0.164996);
}

double NNfunction_NN_1_5::synapse0x2d9b390() {
   return (neuron0x2d79650()*-0.410012);
}

double NNfunction_NN_1_5::synapse0x2d9b3d0() {
   return (neuron0x2d861a0()*3.78242);
}

double NNfunction_NN_1_5::synapse0x2d9b410() {
   return (neuron0x2d86b70()*-2.98318);
}

double NNfunction_NN_1_5::synapse0x2d9b450() {
   return (neuron0x2d87540()*-1.52705);
}

double NNfunction_NN_1_5::synapse0x2d9ba30() {
   return (neuron0x2d87f10()*-2.03004);
}

double NNfunction_NN_1_5::synapse0x2d9ba70() {
   return (neuron0x2d888e0()*1.29739);
}

double NNfunction_NN_1_5::synapse0x2d9bab0() {
   return (neuron0x2d892b0()*0.151229);
}

double NNfunction_NN_1_5::synapse0x2d9baf0() {
   return (neuron0x2d89c80()*0.0722407);
}

double NNfunction_NN_1_5::synapse0x2d9bb30() {
   return (neuron0x2d8a650()*0.444);
}

double NNfunction_NN_1_5::synapse0x2d9bb70() {
   return (neuron0x2d8b230()*0.275494);
}

double NNfunction_NN_1_5::synapse0x2d9bbb0() {
   return (neuron0x2d8bc00()*-2.22616);
}

double NNfunction_NN_1_5::synapse0x2d9bbf0() {
   return (neuron0x2d7ca80()*0.63224);
}

double NNfunction_NN_1_5::synapse0x2d9bc30() {
   return (neuron0x2d7d450()*0.0891428);
}

double NNfunction_NN_1_5::synapse0x2d9bc70() {
   return (neuron0x2d7de20()*-0.632493);
}

double NNfunction_NN_1_5::synapse0x2d9bcb0() {
   return (neuron0x2d90460()*0.036297);
}

double NNfunction_NN_1_5::synapse0x2d9bcf0() {
   return (neuron0x2d90d10()*-0.703741);
}

double NNfunction_NN_1_5::synapse0x2d9bd30() {
   return (neuron0x2d916e0()*2.49672);
}

double NNfunction_NN_1_5::synapse0x2d9bd70() {
   return (neuron0x2d920b0()*0.0872094);
}

double NNfunction_NN_1_5::synapse0x2d9c0f0() {
   return (neuron0x2d6d040()*0.784616);
}

double NNfunction_NN_1_5::synapse0x2d9c130() {
   return (neuron0x2d6d880()*-0.179148);
}

double NNfunction_NN_1_5::synapse0x2d9c170() {
   return (neuron0x2d6e360()*0.510723);
}

double NNfunction_NN_1_5::synapse0x2d9c1b0() {
   return (neuron0x2b28c70()*-1.63742);
}

double NNfunction_NN_1_5::synapse0x2d9c1f0() {
   return (neuron0x2d6f140()*-0.467602);
}

double NNfunction_NN_1_5::synapse0x2d9c230() {
   return (neuron0x2d70c10()*-0.343053);
}

double NNfunction_NN_1_5::synapse0x2d9c270() {
   return (neuron0x2d719e0()*0.758918);
}

double NNfunction_NN_1_5::synapse0x2d9c2b0() {
   return (neuron0x2d723b0()*2.52149);
}

double NNfunction_NN_1_5::synapse0x2d9c2f0() {
   return (neuron0x2d72d80()*-3.31069);
}

double NNfunction_NN_1_5::synapse0x2d9c330() {
   return (neuron0x2d73860()*0.921337);
}

double NNfunction_NN_1_5::synapse0x2d9c370() {
   return (neuron0x2d74230()*1.52377);
}

double NNfunction_NN_1_5::synapse0x2d9c3b0() {
   return (neuron0x2d71310()*-0.526762);
}

double NNfunction_NN_1_5::synapse0x2d9c3f0() {
   return (neuron0x2d75de0()*-0.943343);
}

double NNfunction_NN_1_5::synapse0x2d9c430() {
   return (neuron0x2d767b0()*0.490356);
}

double NNfunction_NN_1_5::synapse0x2d9c470() {
   return (neuron0x2d77180()*0.599372);
}

double NNfunction_NN_1_5::synapse0x2d9c4b0() {
   return (neuron0x2d77b50()*-0.509364);
}

double NNfunction_NN_1_5::synapse0x2d9bf40() {
   return (neuron0x2d79960()*-0.0661686);
}

double NNfunction_NN_1_5::synapse0x2d9bf80() {
   return (neuron0x2d79c40()*-0.368409);
}

double NNfunction_NN_1_5::synapse0x2d9c600() {
   return (neuron0x2d7a610()*0.362447);
}

double NNfunction_NN_1_5::synapse0x2d9c640() {
   return (neuron0x2d7afe0()*-0.934634);
}

double NNfunction_NN_1_5::synapse0x2d9c680() {
   return (neuron0x2d7b9b0()*0.863022);
}

double NNfunction_NN_1_5::synapse0x2d9c6c0() {
   return (neuron0x2d7c380()*-0.365698);
}

double NNfunction_NN_1_5::synapse0x2d9c700() {
   return (neuron0x2d74ed0()*1.10799);
}

double NNfunction_NN_1_5::synapse0x2d9c740() {
   return (neuron0x2d758a0()*-0.977465);
}

double NNfunction_NN_1_5::synapse0x2d9c780() {
   return (neuron0x2d7f110()*-0.699102);
}

double NNfunction_NN_1_5::synapse0x2d9c7c0() {
   return (neuron0x2d7fae0()*0.477025);
}

double NNfunction_NN_1_5::synapse0x2d9c800() {
   return (neuron0x2d804b0()*-0.703641);
}

double NNfunction_NN_1_5::synapse0x2d9c840() {
   return (neuron0x2d80e80()*0.463006);
}

double NNfunction_NN_1_5::synapse0x2d9c880() {
   return (neuron0x2d81850()*1.49819);
}

double NNfunction_NN_1_5::synapse0x2d9c8c0() {
   return (neuron0x2d82220()*1.83001);
}

double NNfunction_NN_1_5::synapse0x2d9c900() {
   return (neuron0x2d82bf0()*0.795249);
}

double NNfunction_NN_1_5::synapse0x2d9c940() {
   return (neuron0x2d835c0()*-0.535496);
}

double NNfunction_NN_1_5::synapse0x2d9c4f0() {
   return (neuron0x2d79650()*0.490729);
}

double NNfunction_NN_1_5::synapse0x2d9c530() {
   return (neuron0x2d861a0()*2.11625);
}

double NNfunction_NN_1_5::synapse0x2d9c570() {
   return (neuron0x2d86b70()*-0.847501);
}

double NNfunction_NN_1_5::synapse0x2d9c5b0() {
   return (neuron0x2d87540()*-3.10507);
}

double NNfunction_NN_1_5::synapse0x2d9cb90() {
   return (neuron0x2d87f10()*2.28449);
}

double NNfunction_NN_1_5::synapse0x2d9cbd0() {
   return (neuron0x2d888e0()*0.250588);
}

double NNfunction_NN_1_5::synapse0x2d9cc10() {
   return (neuron0x2d892b0()*-0.574981);
}

double NNfunction_NN_1_5::synapse0x2d9cc50() {
   return (neuron0x2d89c80()*-0.371705);
}

double NNfunction_NN_1_5::synapse0x2d9cc90() {
   return (neuron0x2d8a650()*-1.84151);
}

double NNfunction_NN_1_5::synapse0x2d9ccd0() {
   return (neuron0x2d8b230()*0.312206);
}

double NNfunction_NN_1_5::synapse0x2d9cd10() {
   return (neuron0x2d8bc00()*1.69034);
}

double NNfunction_NN_1_5::synapse0x2d9cd50() {
   return (neuron0x2d7ca80()*0.0869199);
}

double NNfunction_NN_1_5::synapse0x2d9cd90() {
   return (neuron0x2d7d450()*-0.511472);
}

double NNfunction_NN_1_5::synapse0x2d9cdd0() {
   return (neuron0x2d7de20()*0.652235);
}

double NNfunction_NN_1_5::synapse0x2d9ce10() {
   return (neuron0x2d90460()*-0.494804);
}

double NNfunction_NN_1_5::synapse0x2d9ce50() {
   return (neuron0x2d90d10()*-1.0085);
}

double NNfunction_NN_1_5::synapse0x2d9ce90() {
   return (neuron0x2d916e0()*-0.138591);
}

double NNfunction_NN_1_5::synapse0x2d9ced0() {
   return (neuron0x2d920b0()*-0.562057);
}

double NNfunction_NN_1_5::synapse0x2d9d130() {
   return (neuron0x2d992b0()*-0.986676);
}

double NNfunction_NN_1_5::synapse0x2d9d170() {
   return (neuron0x2d99650()*8.99756);
}

double NNfunction_NN_1_5::synapse0x2d9d1b0() {
   return (neuron0x2d99af0()*-8.85532);
}

double NNfunction_NN_1_5::synapse0x2d9d1f0() {
   return (neuron0x2d9ac50()*-5.843);
}

double NNfunction_NN_1_5::synapse0x2d9d230() {
   return (neuron0x2d9bdb0()*3.95698);
}

