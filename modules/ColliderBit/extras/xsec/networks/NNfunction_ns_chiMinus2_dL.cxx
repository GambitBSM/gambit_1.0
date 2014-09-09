#include "NNfunction_ns_chiMinus2_dL.h"
#include <cmath>

double NNfunction_ns_chiMinus2_dL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5986)/15.0889;
   input1 = (in1 - 11.5631)/1020.84;
   input2 = (in2 - 378.399)/387.619;
   input3 = (in3 - 74.5393)/742.897;
   input4 = (in4 - 883.984)/857.982;
   input5 = (in5 - 769.47)/859.146;
   input6 = (in6 - 768.127)/854.226;
   input7 = (in7 - 773.037)/839.222;
   input8 = (in8 - 791.109)/889.02;
   input9 = (in9 - 783.427)/878.76;
   input10 = (in10 - 809.791)/880.055;
   input11 = (in11 - 312.46)/241.3;
   input12 = (in12 - 675.996)/768.769;
   input13 = (in13 - 474.19)/448.027;
   input14 = (in14 - 657.426)/702.224;
   input15 = (in15 - 662.569)/709.15;
   input16 = (in16 - 477.78)/484.629;
   input17 = (in17 - 702.651)/801.678;
   input18 = (in18 - 704.762)/804.622;
   input19 = (in19 - 706.372)/767.535;
   input20 = (in20 - -63.8979)/439.175;
   input21 = (in21 - -84.83)/1022.03;
   input22 = (in22 - 8.5519)/1052.35;
   input23 = (in23 - -41.0945)/273.114;
   switch(index) {
     case 0:
         return neuron0x2515c20();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiMinus2_dL::Value(int index, double* input) {
   input0 = (input[0] - 23.5986)/15.0889;
   input1 = (input[1] - 11.5631)/1020.84;
   input2 = (input[2] - 378.399)/387.619;
   input3 = (input[3] - 74.5393)/742.897;
   input4 = (input[4] - 883.984)/857.982;
   input5 = (input[5] - 769.47)/859.146;
   input6 = (input[6] - 768.127)/854.226;
   input7 = (input[7] - 773.037)/839.222;
   input8 = (input[8] - 791.109)/889.02;
   input9 = (input[9] - 783.427)/878.76;
   input10 = (input[10] - 809.791)/880.055;
   input11 = (input[11] - 312.46)/241.3;
   input12 = (input[12] - 675.996)/768.769;
   input13 = (input[13] - 474.19)/448.027;
   input14 = (input[14] - 657.426)/702.224;
   input15 = (input[15] - 662.569)/709.15;
   input16 = (input[16] - 477.78)/484.629;
   input17 = (input[17] - 702.651)/801.678;
   input18 = (input[18] - 704.762)/804.622;
   input19 = (input[19] - 706.372)/767.535;
   input20 = (input[20] - -63.8979)/439.175;
   input21 = (input[21] - -84.83)/1022.03;
   input22 = (input[22] - 8.5519)/1052.35;
   input23 = (input[23] - -41.0945)/273.114;
   switch(index) {
     case 0:
         return neuron0x2515c20();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e0c90() {
   return input0;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e0f40() {
   return input1;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e1280() {
   return input2;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e15c0() {
   return input3;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e1900() {
   return input4;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e1c40() {
   return input5;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e1f80() {
   return input6;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e22c0() {
   return input7;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e2600() {
   return input8;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e2940() {
   return input9;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e2c80() {
   return input10;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e2fc0() {
   return input11;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e3300() {
   return input12;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e3640() {
   return input13;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e3980() {
   return input14;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e3cc0() {
   return input15;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e4000() {
   return input16;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e4560() {
   return input17;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e48a0() {
   return input18;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e4be0() {
   return input19;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e4f20() {
   return input20;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e5260() {
   return input21;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e55a0() {
   return input22;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e58e0() {
   return input23;
}

double NNfunction_ns_chiMinus2_dL::input0x24e5d50() {
   double input = 0.326801;
   input += synapse0x24e6090();
   input += synapse0x24e60d0();
   input += synapse0x24e6110();
   input += synapse0x24e6150();
   input += synapse0x24e6190();
   input += synapse0x24e61d0();
   input += synapse0x24e6210();
   input += synapse0x24e6250();
   input += synapse0x24e6290();
   input += synapse0x24e62d0();
   input += synapse0x24e6310();
   input += synapse0x24e6350();
   input += synapse0x24e6390();
   input += synapse0x24e63d0();
   input += synapse0x24e6410();
   input += synapse0x24e6450();
   input += synapse0x24e5ee0();
   input += synapse0x24e5f20();
   input += synapse0x229ce10();
   input += synapse0x229ce50();
   input += synapse0x24e6490();
   input += synapse0x24e64d0();
   input += synapse0x24e6510();
   input += synapse0x24e6550();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e5d50() {
   double input = input0x24e5d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24e6590() {
   double input = 0.489162;
   input += synapse0x24e68d0();
   input += synapse0x24e6910();
   input += synapse0x24e6950();
   input += synapse0x24e6990();
   input += synapse0x24e69d0();
   input += synapse0x24e6a10();
   input += synapse0x24e6a50();
   input += synapse0x24e6a90();
   input += synapse0x24e6ad0();
   input += synapse0x229cc60();
   input += synapse0x229cca0();
   input += synapse0x229cce0();
   input += synapse0x229cd20();
   input += synapse0x24e6d20();
   input += synapse0x24e6d60();
   input += synapse0x24e6da0();
   input += synapse0x24e6720();
   input += synapse0x24e6760();
   input += synapse0x24e6ef0();
   input += synapse0x24e6f30();
   input += synapse0x24e6f70();
   input += synapse0x24e6fb0();
   input += synapse0x24e6ff0();
   input += synapse0x24e7030();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e6590() {
   double input = input0x24e6590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24e7070() {
   double input = 0.0658716;
   input += synapse0x24e73b0();
   input += synapse0x24e73f0();
   input += synapse0x24e7430();
   input += synapse0x24e7470();
   input += synapse0x24e74b0();
   input += synapse0x24e74f0();
   input += synapse0x24e7530();
   input += synapse0x24e7570();
   input += synapse0x24e75b0();
   input += synapse0x24e75f0();
   input += synapse0x24e7630();
   input += synapse0x24e7670();
   input += synapse0x24e76b0();
   input += synapse0x24e76f0();
   input += synapse0x24e7730();
   input += synapse0x24e7770();
   input += synapse0x24e7200();
   input += synapse0x24e7240();
   input += synapse0x229d500();
   input += synapse0x22aadd0();
   input += synapse0x22aae10();
   input += synapse0x24e96a0();
   input += synapse0x24e96e0();
   input += synapse0x24e09d0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e7070() {
   double input = input0x24e7070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24e6b10() {
   double input = -0.193968;
   input += synapse0x24e0aa0();
   input += synapse0x22ab650();
   input += synapse0x24e6ca0();
   input += synapse0x24e6ce0();
   input += synapse0x24e78c0();
   input += synapse0x24e7900();
   input += synapse0x24e7940();
   input += synapse0x24e7980();
   input += synapse0x24e79c0();
   input += synapse0x24e7a00();
   input += synapse0x24e7a40();
   input += synapse0x24e7a80();
   input += synapse0x24e7ac0();
   input += synapse0x24e7b00();
   input += synapse0x24e7b40();
   input += synapse0x24e7b80();
   input += synapse0x24e0a10();
   input += synapse0x24e0a50();
   input += synapse0x24e7cd0();
   input += synapse0x24e7d10();
   input += synapse0x24e7d50();
   input += synapse0x24e7d90();
   input += synapse0x24e7dd0();
   input += synapse0x24e7e10();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e6b10() {
   double input = input0x24e6b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24e7e50() {
   double input = 6.48304;
   input += synapse0x24e8190();
   input += synapse0x24e81d0();
   input += synapse0x24e8210();
   input += synapse0x24e8250();
   input += synapse0x24e8290();
   input += synapse0x24e82d0();
   input += synapse0x24e8310();
   input += synapse0x24e8350();
   input += synapse0x24e8390();
   input += synapse0x24e83d0();
   input += synapse0x24e8410();
   input += synapse0x24e8450();
   input += synapse0x24e8490();
   input += synapse0x24e84d0();
   input += synapse0x24e8510();
   input += synapse0x24e8550();
   input += synapse0x24e86a0();
   input += synapse0x24e7fe0();
   input += synapse0x24e8020();
   input += synapse0x24e97e0();
   input += synapse0x24e9820();
   input += synapse0x24e9860();
   input += synapse0x24e98a0();
   input += synapse0x24e98e0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e7e50() {
   double input = input0x24e7e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24e9920() {
   double input = -0.00693309;
   input += synapse0x24e9c60();
   input += synapse0x24e9ca0();
   input += synapse0x24e9ce0();
   input += synapse0x24e9d20();
   input += synapse0x24e9d60();
   input += synapse0x24e9da0();
   input += synapse0x24e9de0();
   input += synapse0x24e9e20();
   input += synapse0x24e9e60();
   input += synapse0x22ab120();
   input += synapse0x22ab160();
   input += synapse0x22ab1a0();
   input += synapse0x22ab1e0();
   input += synapse0x22ab220();
   input += synapse0x22ab260();
   input += synapse0x22ab2a0();
   input += synapse0x24e9ab0();
   input += synapse0x24e9af0();
   input += synapse0x22ab3f0();
   input += synapse0x22ab430();
   input += synapse0x22ab470();
   input += synapse0x22ab4b0();
   input += synapse0x22ab4f0();
   input += synapse0x24ea6b0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24e9920() {
   double input = input0x24e9920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24ea6f0() {
   double input = 1.59228;
   input += synapse0x24eaa30();
   input += synapse0x24eaa70();
   input += synapse0x24eaab0();
   input += synapse0x24eaaf0();
   input += synapse0x24eab30();
   input += synapse0x24eab70();
   input += synapse0x24eabb0();
   input += synapse0x24eabf0();
   input += synapse0x24eac30();
   input += synapse0x24eac70();
   input += synapse0x24eacb0();
   input += synapse0x24eacf0();
   input += synapse0x24ead30();
   input += synapse0x24ead70();
   input += synapse0x24eadb0();
   input += synapse0x24eadf0();
   input += synapse0x24ea880();
   input += synapse0x24ea8c0();
   input += synapse0x24eaf40();
   input += synapse0x24eaf80();
   input += synapse0x24eafc0();
   input += synapse0x24eb000();
   input += synapse0x24eb040();
   input += synapse0x24eb080();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24ea6f0() {
   double input = input0x24ea6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24eb0c0() {
   double input = -0.051779;
   input += synapse0x24eb400();
   input += synapse0x24eb440();
   input += synapse0x24eb480();
   input += synapse0x24eb4c0();
   input += synapse0x24eb500();
   input += synapse0x24eb540();
   input += synapse0x24eb580();
   input += synapse0x24eb5c0();
   input += synapse0x24eb600();
   input += synapse0x24eb640();
   input += synapse0x24eb680();
   input += synapse0x24eb6c0();
   input += synapse0x24eb700();
   input += synapse0x24eb740();
   input += synapse0x24eb780();
   input += synapse0x24eb7c0();
   input += synapse0x24eb250();
   input += synapse0x24eb290();
   input += synapse0x24eb910();
   input += synapse0x24eb950();
   input += synapse0x24eb990();
   input += synapse0x24eb9d0();
   input += synapse0x24eba10();
   input += synapse0x24eba50();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24eb0c0() {
   double input = input0x24eb0c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24eba90() {
   double input = -0.367108;
   input += synapse0x24e4450();
   input += synapse0x24e4490();
   input += synapse0x24e44d0();
   input += synapse0x24e4510();
   input += synapse0x24ebfe0();
   input += synapse0x24ec020();
   input += synapse0x24ec060();
   input += synapse0x24ec0a0();
   input += synapse0x24ec0e0();
   input += synapse0x24ec120();
   input += synapse0x24ec160();
   input += synapse0x24ec1a0();
   input += synapse0x24ec1e0();
   input += synapse0x24ec220();
   input += synapse0x24ec260();
   input += synapse0x24ec2a0();
   input += synapse0x24ebc20();
   input += synapse0x24ebc60();
   input += synapse0x24ec3f0();
   input += synapse0x24ec430();
   input += synapse0x24ec470();
   input += synapse0x24ec4b0();
   input += synapse0x24ec4f0();
   input += synapse0x24ec530();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24eba90() {
   double input = input0x24eba90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24ec570() {
   double input = -0.0162892;
   input += synapse0x24ec8b0();
   input += synapse0x24ec8f0();
   input += synapse0x24ec930();
   input += synapse0x24ec970();
   input += synapse0x24ec9b0();
   input += synapse0x24ec9f0();
   input += synapse0x24eca30();
   input += synapse0x24eca70();
   input += synapse0x24ecab0();
   input += synapse0x24ecaf0();
   input += synapse0x24ecb30();
   input += synapse0x24ecb70();
   input += synapse0x24ecbb0();
   input += synapse0x24ecbf0();
   input += synapse0x24ecc30();
   input += synapse0x24ecc70();
   input += synapse0x24ec700();
   input += synapse0x24ec740();
   input += synapse0x24ecdc0();
   input += synapse0x24ece00();
   input += synapse0x24ece40();
   input += synapse0x24ece80();
   input += synapse0x24ecec0();
   input += synapse0x24ecf00();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24ec570() {
   double input = input0x24ec570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24ecf40() {
   double input = -0.161786;
   input += synapse0x24ed280();
   input += synapse0x24ed2c0();
   input += synapse0x24ed300();
   input += synapse0x24ed340();
   input += synapse0x24ed380();
   input += synapse0x24ed3c0();
   input += synapse0x24ed400();
   input += synapse0x24ed440();
   input += synapse0x24ed480();
   input += synapse0x24ed4c0();
   input += synapse0x24ed500();
   input += synapse0x24ed540();
   input += synapse0x24ed580();
   input += synapse0x24ed5c0();
   input += synapse0x24ed600();
   input += synapse0x24ed640();
   input += synapse0x24ed0d0();
   input += synapse0x24ed110();
   input += synapse0x24e9ea0();
   input += synapse0x24e9ee0();
   input += synapse0x24e9f20();
   input += synapse0x24e9f60();
   input += synapse0x24e9fa0();
   input += synapse0x24e9fe0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24ecf40() {
   double input = input0x24ecf40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24ea020() {
   double input = -0.537655;
   input += synapse0x24ea360();
   input += synapse0x24ea3a0();
   input += synapse0x24ea3e0();
   input += synapse0x24ea420();
   input += synapse0x24ea460();
   input += synapse0x24ea4a0();
   input += synapse0x24ea4e0();
   input += synapse0x24ea520();
   input += synapse0x24ea560();
   input += synapse0x24ea5a0();
   input += synapse0x24ea5e0();
   input += synapse0x24ea620();
   input += synapse0x24ea660();
   input += synapse0x24ee7a0();
   input += synapse0x24ee7e0();
   input += synapse0x24ee820();
   input += synapse0x24ea1b0();
   input += synapse0x24ea1f0();
   input += synapse0x24ee970();
   input += synapse0x24ee9b0();
   input += synapse0x24ee9f0();
   input += synapse0x24eea30();
   input += synapse0x24eea70();
   input += synapse0x24eeab0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24ea020() {
   double input = input0x24ea020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24eeaf0() {
   double input = 0.58333;
   input += synapse0x24eee30();
   input += synapse0x24eee70();
   input += synapse0x24eeeb0();
   input += synapse0x24eeef0();
   input += synapse0x24eef30();
   input += synapse0x24eef70();
   input += synapse0x24eefb0();
   input += synapse0x24eeff0();
   input += synapse0x24ef030();
   input += synapse0x24ef070();
   input += synapse0x24ef0b0();
   input += synapse0x24ef0f0();
   input += synapse0x24ef130();
   input += synapse0x24ef170();
   input += synapse0x24ef1b0();
   input += synapse0x24ef1f0();
   input += synapse0x24eec80();
   input += synapse0x24eecc0();
   input += synapse0x24ef340();
   input += synapse0x24ef380();
   input += synapse0x24ef3c0();
   input += synapse0x24ef400();
   input += synapse0x24ef440();
   input += synapse0x24ef480();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24eeaf0() {
   double input = input0x24eeaf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24ef4c0() {
   double input = -1.93615;
   input += synapse0x24ef800();
   input += synapse0x24ef840();
   input += synapse0x24ef880();
   input += synapse0x24ef8c0();
   input += synapse0x24ef900();
   input += synapse0x24ef940();
   input += synapse0x24ef980();
   input += synapse0x24ef9c0();
   input += synapse0x24efa00();
   input += synapse0x24efa40();
   input += synapse0x24efa80();
   input += synapse0x24efac0();
   input += synapse0x24efb00();
   input += synapse0x24efb40();
   input += synapse0x24efb80();
   input += synapse0x24efbc0();
   input += synapse0x24ef650();
   input += synapse0x24ef690();
   input += synapse0x24efd10();
   input += synapse0x24efd50();
   input += synapse0x24efd90();
   input += synapse0x24efdd0();
   input += synapse0x24efe10();
   input += synapse0x24efe50();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24ef4c0() {
   double input = input0x24ef4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24efe90() {
   double input = 2.12648;
   input += synapse0x24f01d0();
   input += synapse0x24f0210();
   input += synapse0x24f0250();
   input += synapse0x24f0290();
   input += synapse0x24f02d0();
   input += synapse0x24f0310();
   input += synapse0x24f0350();
   input += synapse0x24f0390();
   input += synapse0x24f03d0();
   input += synapse0x24f0410();
   input += synapse0x24f0450();
   input += synapse0x24f0490();
   input += synapse0x24f04d0();
   input += synapse0x24f0510();
   input += synapse0x24f0550();
   input += synapse0x24f0590();
   input += synapse0x24f0020();
   input += synapse0x24f0060();
   input += synapse0x24f06e0();
   input += synapse0x24f0720();
   input += synapse0x24f0760();
   input += synapse0x24f07a0();
   input += synapse0x24f07e0();
   input += synapse0x24f0820();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24efe90() {
   double input = input0x24efe90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24f0860() {
   double input = -3.1582;
   input += synapse0x24f0ba0();
   input += synapse0x24e0e20();
   input += synapse0x24e0e60();
   input += synapse0x24e1160();
   input += synapse0x24e11a0();
   input += synapse0x24e14a0();
   input += synapse0x24e14e0();
   input += synapse0x24e17e0();
   input += synapse0x24e1820();
   input += synapse0x24e1b20();
   input += synapse0x24e1b60();
   input += synapse0x24e1e60();
   input += synapse0x24e1ea0();
   input += synapse0x24e21a0();
   input += synapse0x24e21e0();
   input += synapse0x24e24e0();
   input += synapse0x24e2520();
   input += synapse0x24e2820();
   input += synapse0x24e2860();
   input += synapse0x24e2b60();
   input += synapse0x24e2ba0();
   input += synapse0x24e2ea0();
   input += synapse0x24e2ee0();
   input += synapse0x24e31e0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24f0860() {
   double input = input0x24f0860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24f2670() {
   double input = 3.38011;
   input += synapse0x24e3220();
   input += synapse0x24e3ee0();
   input += synapse0x24e3f20();
   input += synapse0x24f09f0();
   input += synapse0x24f0a30();
   input += synapse0x24e4220();
   input += synapse0x24e4260();
   input += synapse0x24e4780();
   input += synapse0x24e47c0();
   input += synapse0x24e4ac0();
   input += synapse0x24e4b00();
   input += synapse0x24e4e00();
   input += synapse0x24e4e40();
   input += synapse0x24e5140();
   input += synapse0x24e5180();
   input += synapse0x24e5480();
   input += synapse0x24e54c0();
   input += synapse0x24e57c0();
   input += synapse0x24e5800();
   input += synapse0x24e5b00();
   input += synapse0x24e5b40();
   input += synapse0x24e3520();
   input += synapse0x24e3560();
   input += synapse0x24f2910();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24f2670() {
   double input = input0x24f2670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24f2950() {
   double input = -0.342792;
   input += synapse0x24f2c90();
   input += synapse0x24f2cd0();
   input += synapse0x24f2d10();
   input += synapse0x24f2d50();
   input += synapse0x24f2d90();
   input += synapse0x24f2dd0();
   input += synapse0x24f2e10();
   input += synapse0x24f2e50();
   input += synapse0x24f2e90();
   input += synapse0x24f2ed0();
   input += synapse0x24f2f10();
   input += synapse0x24f2f50();
   input += synapse0x24f2f90();
   input += synapse0x24f2fd0();
   input += synapse0x24f3010();
   input += synapse0x24f3050();
   input += synapse0x24f2ae0();
   input += synapse0x24f2b20();
   input += synapse0x24f31a0();
   input += synapse0x24f31e0();
   input += synapse0x24f3220();
   input += synapse0x24f3260();
   input += synapse0x24f32a0();
   input += synapse0x24f32e0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24f2950() {
   double input = input0x24f2950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24f3320() {
   double input = -0.26838;
   input += synapse0x24f3660();
   input += synapse0x24f36a0();
   input += synapse0x24f36e0();
   input += synapse0x24f3720();
   input += synapse0x24f3760();
   input += synapse0x24f37a0();
   input += synapse0x24f37e0();
   input += synapse0x24f3820();
   input += synapse0x24f3860();
   input += synapse0x24f38a0();
   input += synapse0x24f38e0();
   input += synapse0x24f3920();
   input += synapse0x24f3960();
   input += synapse0x24f39a0();
   input += synapse0x24f39e0();
   input += synapse0x24f3a20();
   input += synapse0x24f34b0();
   input += synapse0x24f34f0();
   input += synapse0x24f3b70();
   input += synapse0x24f3bb0();
   input += synapse0x24f3bf0();
   input += synapse0x24f3c30();
   input += synapse0x24f3c70();
   input += synapse0x24f3cb0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24f3320() {
   double input = input0x24f3320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24f3cf0() {
   double input = 0.5092;
   input += synapse0x24f4030();
   input += synapse0x24f4070();
   input += synapse0x24f40b0();
   input += synapse0x24f40f0();
   input += synapse0x24f4130();
   input += synapse0x24f4170();
   input += synapse0x24f41b0();
   input += synapse0x24f41f0();
   input += synapse0x24f4230();
   input += synapse0x24f4270();
   input += synapse0x24f42b0();
   input += synapse0x24f42f0();
   input += synapse0x24f4330();
   input += synapse0x24f4370();
   input += synapse0x24f43b0();
   input += synapse0x24f43f0();
   input += synapse0x24f3e80();
   input += synapse0x24f3ec0();
   input += synapse0x24f4540();
   input += synapse0x24f4580();
   input += synapse0x24f45c0();
   input += synapse0x24f4600();
   input += synapse0x24f4640();
   input += synapse0x24f4680();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24f3cf0() {
   double input = input0x24f3cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24f46c0() {
   double input = 2.69281;
   input += synapse0x24f4a00();
   input += synapse0x24f4a40();
   input += synapse0x24f4a80();
   input += synapse0x24f4ac0();
   input += synapse0x24f4b00();
   input += synapse0x24f4b40();
   input += synapse0x24f4b80();
   input += synapse0x24f4bc0();
   input += synapse0x24f4c00();
   input += synapse0x24f4c40();
   input += synapse0x24f4c80();
   input += synapse0x24f4cc0();
   input += synapse0x24f4d00();
   input += synapse0x24f4d40();
   input += synapse0x24f4d80();
   input += synapse0x24f4dc0();
   input += synapse0x24f4850();
   input += synapse0x24f4890();
   input += synapse0x24f4f10();
   input += synapse0x24f4f50();
   input += synapse0x24f4f90();
   input += synapse0x24f4fd0();
   input += synapse0x24f5010();
   input += synapse0x24f5050();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24f46c0() {
   double input = input0x24f46c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24f5090() {
   double input = -0.386976;
   input += synapse0x24f53d0();
   input += synapse0x24f5410();
   input += synapse0x24f5450();
   input += synapse0x24f5490();
   input += synapse0x24f54d0();
   input += synapse0x24f5510();
   input += synapse0x24f5550();
   input += synapse0x24f5590();
   input += synapse0x24f55d0();
   input += synapse0x24ed790();
   input += synapse0x24ed7d0();
   input += synapse0x24ed810();
   input += synapse0x24ed850();
   input += synapse0x24ed890();
   input += synapse0x24ed8d0();
   input += synapse0x24ed910();
   input += synapse0x24f5220();
   input += synapse0x24f5260();
   input += synapse0x24eda60();
   input += synapse0x24edaa0();
   input += synapse0x24edae0();
   input += synapse0x24edb20();
   input += synapse0x24edb60();
   input += synapse0x24edba0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24f5090() {
   double input = input0x24f5090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24edbe0() {
   double input = -1.15935;
   input += synapse0x24edf20();
   input += synapse0x24edf60();
   input += synapse0x24edfa0();
   input += synapse0x24edfe0();
   input += synapse0x24ee020();
   input += synapse0x24ee060();
   input += synapse0x24ee0a0();
   input += synapse0x24ee0e0();
   input += synapse0x24ee120();
   input += synapse0x24ee160();
   input += synapse0x24ee1a0();
   input += synapse0x24ee1e0();
   input += synapse0x24ee220();
   input += synapse0x24ee260();
   input += synapse0x24ee2a0();
   input += synapse0x24ee2e0();
   input += synapse0x24edd70();
   input += synapse0x24eddb0();
   input += synapse0x24ee430();
   input += synapse0x24ee470();
   input += synapse0x24ee4b0();
   input += synapse0x24ee4f0();
   input += synapse0x24ee530();
   input += synapse0x24ee570();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24edbe0() {
   double input = input0x24edbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24ee5b0() {
   double input = -0.0592423;
   input += synapse0x24ee740();
   input += synapse0x24f77d0();
   input += synapse0x24f7810();
   input += synapse0x24f7850();
   input += synapse0x24f7890();
   input += synapse0x24f78d0();
   input += synapse0x24f7910();
   input += synapse0x24f7950();
   input += synapse0x24f7990();
   input += synapse0x24f79d0();
   input += synapse0x24f7a10();
   input += synapse0x24f7a50();
   input += synapse0x24f7a90();
   input += synapse0x24f7ad0();
   input += synapse0x24f7b10();
   input += synapse0x24f7b50();
   input += synapse0x24f7620();
   input += synapse0x24f7660();
   input += synapse0x24f7ca0();
   input += synapse0x24f7ce0();
   input += synapse0x24f7d20();
   input += synapse0x24f7d60();
   input += synapse0x24f7da0();
   input += synapse0x24f7de0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24ee5b0() {
   double input = input0x24ee5b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24f7e20() {
   double input = -0.248236;
   input += synapse0x24f8160();
   input += synapse0x24f81a0();
   input += synapse0x24f81e0();
   input += synapse0x24f8220();
   input += synapse0x24f8260();
   input += synapse0x24f82a0();
   input += synapse0x24f82e0();
   input += synapse0x24f8320();
   input += synapse0x24f8360();
   input += synapse0x24f83a0();
   input += synapse0x24f83e0();
   input += synapse0x24f8420();
   input += synapse0x24f8460();
   input += synapse0x24f84a0();
   input += synapse0x24f84e0();
   input += synapse0x24f8520();
   input += synapse0x24f7fb0();
   input += synapse0x24f7ff0();
   input += synapse0x24f8670();
   input += synapse0x24f86b0();
   input += synapse0x24f86f0();
   input += synapse0x24f8730();
   input += synapse0x24f8770();
   input += synapse0x24f87b0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24f7e20() {
   double input = input0x24f7e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24f87f0() {
   double input = 0.368631;
   input += synapse0x24f8b30();
   input += synapse0x24f8b70();
   input += synapse0x24f8bb0();
   input += synapse0x24f8bf0();
   input += synapse0x24f8c30();
   input += synapse0x24f8c70();
   input += synapse0x24f8cb0();
   input += synapse0x24f8cf0();
   input += synapse0x24f8d30();
   input += synapse0x24f8d70();
   input += synapse0x24f8db0();
   input += synapse0x24f8df0();
   input += synapse0x24f8e30();
   input += synapse0x24f8e70();
   input += synapse0x24f8eb0();
   input += synapse0x24f8ef0();
   input += synapse0x24f8980();
   input += synapse0x24f89c0();
   input += synapse0x24f9040();
   input += synapse0x24f9080();
   input += synapse0x24f90c0();
   input += synapse0x24f9100();
   input += synapse0x24f9140();
   input += synapse0x24f9180();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24f87f0() {
   double input = input0x24f87f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24f91c0() {
   double input = -0.577884;
   input += synapse0x24f9500();
   input += synapse0x24f9540();
   input += synapse0x24f9580();
   input += synapse0x24f95c0();
   input += synapse0x24f9600();
   input += synapse0x24f9640();
   input += synapse0x24f9680();
   input += synapse0x24f96c0();
   input += synapse0x24f9700();
   input += synapse0x24f9740();
   input += synapse0x24f9780();
   input += synapse0x24f97c0();
   input += synapse0x24f9800();
   input += synapse0x24f9840();
   input += synapse0x24f9880();
   input += synapse0x24f98c0();
   input += synapse0x24f9350();
   input += synapse0x24f9390();
   input += synapse0x24f9a10();
   input += synapse0x24f9a50();
   input += synapse0x24f9a90();
   input += synapse0x24f9ad0();
   input += synapse0x24f9b10();
   input += synapse0x24f9b50();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24f91c0() {
   double input = input0x24f91c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24f9b90() {
   double input = -0.310291;
   input += synapse0x24f9ed0();
   input += synapse0x24f9f10();
   input += synapse0x24f9f50();
   input += synapse0x24f9f90();
   input += synapse0x24f9fd0();
   input += synapse0x24fa010();
   input += synapse0x24fa050();
   input += synapse0x24fa090();
   input += synapse0x24fa0d0();
   input += synapse0x24fa110();
   input += synapse0x24fa150();
   input += synapse0x24fa190();
   input += synapse0x24fa1d0();
   input += synapse0x24fa210();
   input += synapse0x24fa250();
   input += synapse0x24fa290();
   input += synapse0x24f9d20();
   input += synapse0x24f9d60();
   input += synapse0x24fa3e0();
   input += synapse0x24fa420();
   input += synapse0x24fa460();
   input += synapse0x24fa4a0();
   input += synapse0x24fa4e0();
   input += synapse0x24fa520();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24f9b90() {
   double input = input0x24f9b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24fa560() {
   double input = 0.204768;
   input += synapse0x24fa8a0();
   input += synapse0x24fa8e0();
   input += synapse0x24fa920();
   input += synapse0x24fa960();
   input += synapse0x24fa9a0();
   input += synapse0x24fa9e0();
   input += synapse0x24faa20();
   input += synapse0x24faa60();
   input += synapse0x24faaa0();
   input += synapse0x24faae0();
   input += synapse0x24fab20();
   input += synapse0x24fab60();
   input += synapse0x24faba0();
   input += synapse0x24fabe0();
   input += synapse0x24fac20();
   input += synapse0x24fac60();
   input += synapse0x24fa6f0();
   input += synapse0x24fa730();
   input += synapse0x24fadb0();
   input += synapse0x24fadf0();
   input += synapse0x24fae30();
   input += synapse0x24fae70();
   input += synapse0x24faeb0();
   input += synapse0x24faef0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24fa560() {
   double input = input0x24fa560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24faf30() {
   double input = -0.986578;
   input += synapse0x24fb270();
   input += synapse0x24fb2b0();
   input += synapse0x24fb2f0();
   input += synapse0x24fb330();
   input += synapse0x24fb370();
   input += synapse0x24fb3b0();
   input += synapse0x24fb3f0();
   input += synapse0x24fb430();
   input += synapse0x24fb470();
   input += synapse0x24fb4b0();
   input += synapse0x24fb4f0();
   input += synapse0x24fb530();
   input += synapse0x24fb570();
   input += synapse0x24fb5b0();
   input += synapse0x24fb5f0();
   input += synapse0x24fb630();
   input += synapse0x24fb0c0();
   input += synapse0x24fb100();
   input += synapse0x24fb780();
   input += synapse0x24fb7c0();
   input += synapse0x24fb800();
   input += synapse0x24fb840();
   input += synapse0x24fb880();
   input += synapse0x24fb8c0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24faf30() {
   double input = input0x24faf30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24fb900() {
   double input = 2.84543;
   input += synapse0x24fbc40();
   input += synapse0x24fbc80();
   input += synapse0x24fbcc0();
   input += synapse0x24fbd00();
   input += synapse0x24fbd40();
   input += synapse0x24fbd80();
   input += synapse0x24fbdc0();
   input += synapse0x24fbe00();
   input += synapse0x24fbe40();
   input += synapse0x24fbe80();
   input += synapse0x24fbec0();
   input += synapse0x24fbf00();
   input += synapse0x24fbf40();
   input += synapse0x24fbf80();
   input += synapse0x24fbfc0();
   input += synapse0x24fc000();
   input += synapse0x24fba90();
   input += synapse0x24fbad0();
   input += synapse0x24fc150();
   input += synapse0x24fc190();
   input += synapse0x24fc1d0();
   input += synapse0x24fc210();
   input += synapse0x24fc250();
   input += synapse0x24fc290();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24fb900() {
   double input = input0x24fb900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24fc2d0() {
   double input = -0.821599;
   input += synapse0x24fc610();
   input += synapse0x24f0be0();
   input += synapse0x24f0c20();
   input += synapse0x24f0c60();
   input += synapse0x24f0eb0();
   input += synapse0x24f0ef0();
   input += synapse0x24f0f30();
   input += synapse0x24f1180();
   input += synapse0x24f11c0();
   input += synapse0x24f1410();
   input += synapse0x24f1450();
   input += synapse0x24f1490();
   input += synapse0x24f16e0();
   input += synapse0x24f1720();
   input += synapse0x24f1970();
   input += synapse0x24f19b0();
   input += synapse0x24fc460();
   input += synapse0x24fc4a0();
   input += synapse0x24f1b00();
   input += synapse0x24f2010();
   input += synapse0x24f2050();
   input += synapse0x24f2090();
   input += synapse0x24f22e0();
   input += synapse0x24f2320();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24fc2d0() {
   double input = input0x24fc2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24f2360() {
   double input = -1.58621;
   input += synapse0x24f1bd0();
   input += synapse0x24f1c10();
   input += synapse0x24f1c50();
   input += synapse0x24f1c90();
   input += synapse0x24f2610();
   input += synapse0x24fe960();
   input += synapse0x24fe9a0();
   input += synapse0x24fe9e0();
   input += synapse0x24fea20();
   input += synapse0x24fea60();
   input += synapse0x24feaa0();
   input += synapse0x24feae0();
   input += synapse0x24feb20();
   input += synapse0x24feb60();
   input += synapse0x24feba0();
   input += synapse0x24febe0();
   input += synapse0x24f24f0();
   input += synapse0x24f2530();
   input += synapse0x24fed30();
   input += synapse0x24fed70();
   input += synapse0x24fedb0();
   input += synapse0x24fedf0();
   input += synapse0x24fee30();
   input += synapse0x24fee70();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24f2360() {
   double input = input0x24f2360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24feeb0() {
   double input = 0.00469147;
   input += synapse0x24ff1f0();
   input += synapse0x24ff230();
   input += synapse0x24ff270();
   input += synapse0x24ff2b0();
   input += synapse0x24ff2f0();
   input += synapse0x24ff330();
   input += synapse0x24ff370();
   input += synapse0x24ff3b0();
   input += synapse0x24ff3f0();
   input += synapse0x24ff430();
   input += synapse0x24ff470();
   input += synapse0x24ff4b0();
   input += synapse0x24ff4f0();
   input += synapse0x24ff530();
   input += synapse0x24ff570();
   input += synapse0x24ff5b0();
   input += synapse0x24ff040();
   input += synapse0x24ff080();
   input += synapse0x24ff700();
   input += synapse0x24ff740();
   input += synapse0x24ff780();
   input += synapse0x24ff7c0();
   input += synapse0x24ff800();
   input += synapse0x24ff840();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24feeb0() {
   double input = input0x24feeb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24ff880() {
   double input = 0.333131;
   input += synapse0x24ffbc0();
   input += synapse0x24ffc00();
   input += synapse0x24ffc40();
   input += synapse0x24ffc80();
   input += synapse0x24ffcc0();
   input += synapse0x24ffd00();
   input += synapse0x24ffd40();
   input += synapse0x24ffd80();
   input += synapse0x24ffdc0();
   input += synapse0x24ffe00();
   input += synapse0x24ffe40();
   input += synapse0x24ffe80();
   input += synapse0x24ffec0();
   input += synapse0x24fff00();
   input += synapse0x24fff40();
   input += synapse0x24fff80();
   input += synapse0x24ffa10();
   input += synapse0x24ffa50();
   input += synapse0x25000d0();
   input += synapse0x2500110();
   input += synapse0x2500150();
   input += synapse0x2500190();
   input += synapse0x25001d0();
   input += synapse0x2500210();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24ff880() {
   double input = input0x24ff880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x2500250() {
   double input = 0.0615778;
   input += synapse0x2500590();
   input += synapse0x25005d0();
   input += synapse0x2500610();
   input += synapse0x2500650();
   input += synapse0x2500690();
   input += synapse0x25006d0();
   input += synapse0x2500710();
   input += synapse0x2500750();
   input += synapse0x2500790();
   input += synapse0x25007d0();
   input += synapse0x2500810();
   input += synapse0x2500850();
   input += synapse0x2500890();
   input += synapse0x25008d0();
   input += synapse0x2500910();
   input += synapse0x2500950();
   input += synapse0x25003e0();
   input += synapse0x2500420();
   input += synapse0x2500aa0();
   input += synapse0x2500ae0();
   input += synapse0x2500b20();
   input += synapse0x2500b60();
   input += synapse0x2500ba0();
   input += synapse0x2500be0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x2500250() {
   double input = input0x2500250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x2500c20() {
   double input = 0.0021876;
   input += synapse0x2500f60();
   input += synapse0x2500fa0();
   input += synapse0x2500fe0();
   input += synapse0x2501020();
   input += synapse0x2501060();
   input += synapse0x25010a0();
   input += synapse0x25010e0();
   input += synapse0x2501120();
   input += synapse0x2501160();
   input += synapse0x25011a0();
   input += synapse0x25011e0();
   input += synapse0x2501220();
   input += synapse0x2501260();
   input += synapse0x25012a0();
   input += synapse0x25012e0();
   input += synapse0x2501320();
   input += synapse0x2500db0();
   input += synapse0x2500df0();
   input += synapse0x2501470();
   input += synapse0x25014b0();
   input += synapse0x25014f0();
   input += synapse0x2501530();
   input += synapse0x2501570();
   input += synapse0x25015b0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x2500c20() {
   double input = input0x2500c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x25015f0() {
   double input = 0.765691;
   input += synapse0x2501930();
   input += synapse0x2501970();
   input += synapse0x25019b0();
   input += synapse0x25019f0();
   input += synapse0x2501a30();
   input += synapse0x2501a70();
   input += synapse0x2501ab0();
   input += synapse0x2501af0();
   input += synapse0x2501b30();
   input += synapse0x2501b70();
   input += synapse0x2501bb0();
   input += synapse0x2501bf0();
   input += synapse0x2501c30();
   input += synapse0x2501c70();
   input += synapse0x2501cb0();
   input += synapse0x2501cf0();
   input += synapse0x2501780();
   input += synapse0x25017c0();
   input += synapse0x2501e40();
   input += synapse0x2501e80();
   input += synapse0x2501ec0();
   input += synapse0x2501f00();
   input += synapse0x2501f40();
   input += synapse0x2501f80();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x25015f0() {
   double input = input0x25015f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x2501fc0() {
   double input = 0.203861;
   input += synapse0x2502300();
   input += synapse0x2502340();
   input += synapse0x2502380();
   input += synapse0x25023c0();
   input += synapse0x2502400();
   input += synapse0x2502440();
   input += synapse0x2502480();
   input += synapse0x25024c0();
   input += synapse0x2502500();
   input += synapse0x2502540();
   input += synapse0x2502580();
   input += synapse0x25025c0();
   input += synapse0x2502600();
   input += synapse0x2502640();
   input += synapse0x2502680();
   input += synapse0x25026c0();
   input += synapse0x2502150();
   input += synapse0x2502190();
   input += synapse0x2502810();
   input += synapse0x2502850();
   input += synapse0x2502890();
   input += synapse0x25028d0();
   input += synapse0x2502910();
   input += synapse0x2502950();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x2501fc0() {
   double input = input0x2501fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x2502990() {
   double input = -0.395471;
   input += synapse0x2502cd0();
   input += synapse0x2502d10();
   input += synapse0x2502d50();
   input += synapse0x2502d90();
   input += synapse0x2502dd0();
   input += synapse0x2502e10();
   input += synapse0x2502e50();
   input += synapse0x2502e90();
   input += synapse0x2502ed0();
   input += synapse0x2502f10();
   input += synapse0x2502f50();
   input += synapse0x2502f90();
   input += synapse0x2502fd0();
   input += synapse0x2503010();
   input += synapse0x2503050();
   input += synapse0x2503090();
   input += synapse0x2502b20();
   input += synapse0x2502b60();
   input += synapse0x25031e0();
   input += synapse0x2503220();
   input += synapse0x2503260();
   input += synapse0x25032a0();
   input += synapse0x25032e0();
   input += synapse0x2503320();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x2502990() {
   double input = input0x2502990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x2503360() {
   double input = -1.28857;
   input += synapse0x24ebdd0();
   input += synapse0x24ebe10();
   input += synapse0x24ebe50();
   input += synapse0x24ebe90();
   input += synapse0x24ebed0();
   input += synapse0x24ebf10();
   input += synapse0x24ebf50();
   input += synapse0x24ebf90();
   input += synapse0x2503ab0();
   input += synapse0x2503af0();
   input += synapse0x2503b30();
   input += synapse0x2503b70();
   input += synapse0x2503bb0();
   input += synapse0x2503bf0();
   input += synapse0x2503c30();
   input += synapse0x2503c70();
   input += synapse0x25034f0();
   input += synapse0x2503530();
   input += synapse0x2503dc0();
   input += synapse0x2503e00();
   input += synapse0x2503e40();
   input += synapse0x2503e80();
   input += synapse0x2503ec0();
   input += synapse0x2503f00();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x2503360() {
   double input = input0x2503360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x2503f40() {
   double input = 0.875355;
   input += synapse0x2504280();
   input += synapse0x25042c0();
   input += synapse0x2504300();
   input += synapse0x2504340();
   input += synapse0x2504380();
   input += synapse0x25043c0();
   input += synapse0x2504400();
   input += synapse0x2504440();
   input += synapse0x2504480();
   input += synapse0x25044c0();
   input += synapse0x2504500();
   input += synapse0x2504540();
   input += synapse0x2504580();
   input += synapse0x25045c0();
   input += synapse0x2504600();
   input += synapse0x2504640();
   input += synapse0x25040d0();
   input += synapse0x2504110();
   input += synapse0x2504790();
   input += synapse0x25047d0();
   input += synapse0x2504810();
   input += synapse0x2504850();
   input += synapse0x2504890();
   input += synapse0x25048d0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x2503f40() {
   double input = input0x2503f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x2504910() {
   double input = 3.28553;
   input += synapse0x2504c50();
   input += synapse0x2504c90();
   input += synapse0x2504cd0();
   input += synapse0x2504d10();
   input += synapse0x2504d50();
   input += synapse0x2504d90();
   input += synapse0x2504dd0();
   input += synapse0x2504e10();
   input += synapse0x2504e50();
   input += synapse0x2504e90();
   input += synapse0x2504ed0();
   input += synapse0x2504f10();
   input += synapse0x2504f50();
   input += synapse0x2504f90();
   input += synapse0x2504fd0();
   input += synapse0x2505010();
   input += synapse0x2504aa0();
   input += synapse0x2504ae0();
   input += synapse0x24f5610();
   input += synapse0x24f5650();
   input += synapse0x24f5690();
   input += synapse0x24f56d0();
   input += synapse0x24f5710();
   input += synapse0x24f5750();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x2504910() {
   double input = input0x2504910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24f5790() {
   double input = -0.587355;
   input += synapse0x24f5ad0();
   input += synapse0x24f5b10();
   input += synapse0x24f5b50();
   input += synapse0x24f5b90();
   input += synapse0x24f5bd0();
   input += synapse0x24f5c10();
   input += synapse0x24f5c50();
   input += synapse0x24f5c90();
   input += synapse0x24f5cd0();
   input += synapse0x24f5d10();
   input += synapse0x24f5d50();
   input += synapse0x24f5d90();
   input += synapse0x24f5dd0();
   input += synapse0x24f5e10();
   input += synapse0x24f5e50();
   input += synapse0x24f5e90();
   input += synapse0x24f5920();
   input += synapse0x24f5960();
   input += synapse0x24f5fe0();
   input += synapse0x24f6020();
   input += synapse0x24f6060();
   input += synapse0x24f60a0();
   input += synapse0x24f60e0();
   input += synapse0x24f6120();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24f5790() {
   double input = input0x24f5790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24f6160() {
   double input = -0.189388;
   input += synapse0x24f64a0();
   input += synapse0x24f64e0();
   input += synapse0x24f6520();
   input += synapse0x24f6560();
   input += synapse0x24f65a0();
   input += synapse0x24f65e0();
   input += synapse0x24f6620();
   input += synapse0x24f6660();
   input += synapse0x24f66a0();
   input += synapse0x24f66e0();
   input += synapse0x24f6720();
   input += synapse0x24f6760();
   input += synapse0x24f67a0();
   input += synapse0x24f67e0();
   input += synapse0x24f6820();
   input += synapse0x24f6860();
   input += synapse0x24f62f0();
   input += synapse0x24f6330();
   input += synapse0x24f69b0();
   input += synapse0x24f69f0();
   input += synapse0x24f6a30();
   input += synapse0x24f6a70();
   input += synapse0x24f6ab0();
   input += synapse0x24f6af0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24f6160() {
   double input = input0x24f6160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x24f6b30() {
   double input = 0.442004;
   input += synapse0x24f6e70();
   input += synapse0x24f6eb0();
   input += synapse0x24f6ef0();
   input += synapse0x24f6f30();
   input += synapse0x24f6f70();
   input += synapse0x24f6fb0();
   input += synapse0x24f6ff0();
   input += synapse0x24f7030();
   input += synapse0x24f7070();
   input += synapse0x24f70b0();
   input += synapse0x24f70f0();
   input += synapse0x24f7130();
   input += synapse0x24f7170();
   input += synapse0x24f71b0();
   input += synapse0x24f71f0();
   input += synapse0x24f7230();
   input += synapse0x24f6cc0();
   input += synapse0x24f6d00();
   input += synapse0x24f7380();
   input += synapse0x24f73c0();
   input += synapse0x24f7400();
   input += synapse0x24f7440();
   input += synapse0x24f7480();
   input += synapse0x24f74c0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x24f6b30() {
   double input = input0x24f6b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x2509170() {
   double input = -0.415338;
   input += synapse0x2509390();
   input += synapse0x25093d0();
   input += synapse0x2509410();
   input += synapse0x2509450();
   input += synapse0x2509490();
   input += synapse0x25094d0();
   input += synapse0x2509510();
   input += synapse0x2509550();
   input += synapse0x2509590();
   input += synapse0x25095d0();
   input += synapse0x2509610();
   input += synapse0x2509650();
   input += synapse0x2509690();
   input += synapse0x25096d0();
   input += synapse0x2509710();
   input += synapse0x2509750();
   input += synapse0x24f7500();
   input += synapse0x24f7540();
   input += synapse0x25098a0();
   input += synapse0x25098e0();
   input += synapse0x2509920();
   input += synapse0x2509960();
   input += synapse0x25099a0();
   input += synapse0x25099e0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x2509170() {
   double input = input0x2509170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x2509a20() {
   double input = 0.0606458;
   input += synapse0x2509d60();
   input += synapse0x2509da0();
   input += synapse0x2509de0();
   input += synapse0x2509e20();
   input += synapse0x2509e60();
   input += synapse0x2509ea0();
   input += synapse0x2509ee0();
   input += synapse0x2509f20();
   input += synapse0x2509f60();
   input += synapse0x2509fa0();
   input += synapse0x2509fe0();
   input += synapse0x250a020();
   input += synapse0x250a060();
   input += synapse0x250a0a0();
   input += synapse0x250a0e0();
   input += synapse0x250a120();
   input += synapse0x2509bb0();
   input += synapse0x2509bf0();
   input += synapse0x250a270();
   input += synapse0x250a2b0();
   input += synapse0x250a2f0();
   input += synapse0x250a330();
   input += synapse0x250a370();
   input += synapse0x250a3b0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x2509a20() {
   double input = input0x2509a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x250a3f0() {
   double input = -1.83891;
   input += synapse0x250a730();
   input += synapse0x250a770();
   input += synapse0x250a7b0();
   input += synapse0x250a7f0();
   input += synapse0x250a830();
   input += synapse0x250a870();
   input += synapse0x250a8b0();
   input += synapse0x250a8f0();
   input += synapse0x250a930();
   input += synapse0x250a970();
   input += synapse0x250a9b0();
   input += synapse0x250a9f0();
   input += synapse0x250aa30();
   input += synapse0x250aa70();
   input += synapse0x250aab0();
   input += synapse0x250aaf0();
   input += synapse0x250a580();
   input += synapse0x250a5c0();
   input += synapse0x250ac40();
   input += synapse0x250ac80();
   input += synapse0x250acc0();
   input += synapse0x250ad00();
   input += synapse0x250ad40();
   input += synapse0x250ad80();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x250a3f0() {
   double input = input0x250a3f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x250adc0() {
   double input = -0.185192;
   input += synapse0x250b100();
   input += synapse0x250b140();
   input += synapse0x250b180();
   input += synapse0x250b1c0();
   input += synapse0x250b200();
   input += synapse0x250b240();
   input += synapse0x250b280();
   input += synapse0x250b2c0();
   input += synapse0x250b300();
   input += synapse0x250b340();
   input += synapse0x250b380();
   input += synapse0x250b3c0();
   input += synapse0x250b400();
   input += synapse0x250b440();
   input += synapse0x250b480();
   input += synapse0x250b4c0();
   input += synapse0x250af50();
   input += synapse0x250af90();
   input += synapse0x250b610();
   input += synapse0x250b650();
   input += synapse0x250b690();
   input += synapse0x250b6d0();
   input += synapse0x250b710();
   input += synapse0x250b750();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x250adc0() {
   double input = input0x250adc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x2511fc0() {
   double input = -0.319038;
   input += synapse0x22ab5c0();
   input += synapse0x22ab600();
   input += synapse0x24e8100();
   input += synapse0x24e8140();
   input += synapse0x24e9bd0();
   input += synapse0x24e9c10();
   input += synapse0x24ea9a0();
   input += synapse0x24ea9e0();
   input += synapse0x24eb370();
   input += synapse0x24eb3b0();
   input += synapse0x24ebd40();
   input += synapse0x24ebd80();
   input += synapse0x24ec820();
   input += synapse0x24ec860();
   input += synapse0x24ed1f0();
   input += synapse0x24ed230();
   input += synapse0x24ea2d0();
   input += synapse0x24ea310();
   input += synapse0x24eeda0();
   input += synapse0x24eede0();
   input += synapse0x24ef770();
   input += synapse0x24ef7b0();
   input += synapse0x24f0140();
   input += synapse0x24f0180();
   input += synapse0x24f0b10();
   input += synapse0x24f0b50();
   input += synapse0x24e3ba0();
   input += synapse0x24e3be0();
   input += synapse0x24f2c00();
   input += synapse0x24f2c40();
   input += synapse0x24f35d0();
   input += synapse0x24f3610();
   input += synapse0x24f3fa0();
   input += synapse0x24f3fe0();
   input += synapse0x24f4970();
   input += synapse0x24f49b0();
   input += synapse0x24f5340();
   input += synapse0x24f5380();
   input += synapse0x24ede90();
   input += synapse0x24eded0();
   input += synapse0x24f7740();
   input += synapse0x24f7780();
   input += synapse0x24f80d0();
   input += synapse0x24f8110();
   input += synapse0x24f8aa0();
   input += synapse0x24f8ae0();
   input += synapse0x24f9470();
   input += synapse0x24f94b0();
   input += synapse0x24f9e40();
   input += synapse0x24f9e80();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x2511fc0() {
   double input = input0x2511fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x2512360() {
   double input = 0.420748;
   input += synapse0x24fc580();
   input += synapse0x24fc5c0();
   input += synapse0x24f1b40();
   input += synapse0x24f1b80();
   input += synapse0x24ff160();
   input += synapse0x24ff1a0();
   input += synapse0x24ffb30();
   input += synapse0x24ffb70();
   input += synapse0x2500500();
   input += synapse0x2500540();
   input += synapse0x2500ed0();
   input += synapse0x2500f10();
   input += synapse0x25018a0();
   input += synapse0x25018e0();
   input += synapse0x2502270();
   input += synapse0x25022b0();
   input += synapse0x2502c40();
   input += synapse0x2502c80();
   input += synapse0x2503610();
   input += synapse0x2503650();
   input += synapse0x25041f0();
   input += synapse0x2504230();
   input += synapse0x2504bc0();
   input += synapse0x2504c00();
   input += synapse0x24f5a40();
   input += synapse0x24f5a80();
   input += synapse0x24f6410();
   input += synapse0x24f6450();
   input += synapse0x24f6de0();
   input += synapse0x24f6e20();
   input += synapse0x2509300();
   input += synapse0x2509340();
   input += synapse0x2509cd0();
   input += synapse0x2509d10();
   input += synapse0x250a6a0();
   input += synapse0x250a6e0();
   input += synapse0x250b070();
   input += synapse0x250b0b0();
   input += synapse0x24e6000();
   input += synapse0x24e6040();
   input += synapse0x24fa810();
   input += synapse0x24fa850();
   input += synapse0x250b790();
   input += synapse0x250b7d0();
   input += synapse0x250b810();
   input += synapse0x250b850();
   input += synapse0x2512700();
   input += synapse0x2512740();
   input += synapse0x2512780();
   input += synapse0x25127c0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x2512360() {
   double input = input0x2512360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x2512800() {
   double input = 0.188076;
   input += synapse0x2512b40();
   input += synapse0x2512b80();
   input += synapse0x2512bc0();
   input += synapse0x2512c00();
   input += synapse0x2512c40();
   input += synapse0x2512c80();
   input += synapse0x2512cc0();
   input += synapse0x2512d00();
   input += synapse0x2512d40();
   input += synapse0x2512d80();
   input += synapse0x2512dc0();
   input += synapse0x2512e00();
   input += synapse0x2512e40();
   input += synapse0x2512e80();
   input += synapse0x2512ec0();
   input += synapse0x2512f00();
   input += synapse0x2512990();
   input += synapse0x25129d0();
   input += synapse0x2513050();
   input += synapse0x2513090();
   input += synapse0x25130d0();
   input += synapse0x2513110();
   input += synapse0x2513150();
   input += synapse0x2513190();
   input += synapse0x25131d0();
   input += synapse0x2513210();
   input += synapse0x2513250();
   input += synapse0x2513290();
   input += synapse0x25132d0();
   input += synapse0x2513310();
   input += synapse0x2513350();
   input += synapse0x2513390();
   input += synapse0x2512f40();
   input += synapse0x2512f80();
   input += synapse0x2512fc0();
   input += synapse0x2513000();
   input += synapse0x25135e0();
   input += synapse0x2513620();
   input += synapse0x2513660();
   input += synapse0x25136a0();
   input += synapse0x25136e0();
   input += synapse0x2513720();
   input += synapse0x2513760();
   input += synapse0x25137a0();
   input += synapse0x25137e0();
   input += synapse0x2513820();
   input += synapse0x2513860();
   input += synapse0x25138a0();
   input += synapse0x25138e0();
   input += synapse0x2513920();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x2512800() {
   double input = input0x2512800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x2513960() {
   double input = -0.153445;
   input += synapse0x2513ca0();
   input += synapse0x2513ce0();
   input += synapse0x2513d20();
   input += synapse0x2513d60();
   input += synapse0x2513da0();
   input += synapse0x2513de0();
   input += synapse0x2513e20();
   input += synapse0x2513e60();
   input += synapse0x2513ea0();
   input += synapse0x2513ee0();
   input += synapse0x2513f20();
   input += synapse0x2513f60();
   input += synapse0x2513fa0();
   input += synapse0x2513fe0();
   input += synapse0x2514020();
   input += synapse0x2514060();
   input += synapse0x2513af0();
   input += synapse0x2513b30();
   input += synapse0x25141b0();
   input += synapse0x25141f0();
   input += synapse0x2514230();
   input += synapse0x2514270();
   input += synapse0x25142b0();
   input += synapse0x25142f0();
   input += synapse0x2514330();
   input += synapse0x2514370();
   input += synapse0x25143b0();
   input += synapse0x25143f0();
   input += synapse0x2514430();
   input += synapse0x2514470();
   input += synapse0x25144b0();
   input += synapse0x25144f0();
   input += synapse0x25140a0();
   input += synapse0x25140e0();
   input += synapse0x2514120();
   input += synapse0x2514160();
   input += synapse0x2514740();
   input += synapse0x2514780();
   input += synapse0x25147c0();
   input += synapse0x2514800();
   input += synapse0x2514840();
   input += synapse0x2514880();
   input += synapse0x25148c0();
   input += synapse0x2514900();
   input += synapse0x2514940();
   input += synapse0x2514980();
   input += synapse0x25149c0();
   input += synapse0x2514a00();
   input += synapse0x2514a40();
   input += synapse0x2514a80();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x2513960() {
   double input = input0x2513960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x2514ac0() {
   double input = 0.205688;
   input += synapse0x2514e00();
   input += synapse0x2514e40();
   input += synapse0x2514e80();
   input += synapse0x2514ec0();
   input += synapse0x2514f00();
   input += synapse0x2514f40();
   input += synapse0x2514f80();
   input += synapse0x2514fc0();
   input += synapse0x2515000();
   input += synapse0x2515040();
   input += synapse0x2515080();
   input += synapse0x25150c0();
   input += synapse0x2515100();
   input += synapse0x2515140();
   input += synapse0x2515180();
   input += synapse0x25151c0();
   input += synapse0x2514c50();
   input += synapse0x2514c90();
   input += synapse0x2515310();
   input += synapse0x2515350();
   input += synapse0x2515390();
   input += synapse0x25153d0();
   input += synapse0x2515410();
   input += synapse0x2515450();
   input += synapse0x2515490();
   input += synapse0x25154d0();
   input += synapse0x2515510();
   input += synapse0x2515550();
   input += synapse0x2515590();
   input += synapse0x25155d0();
   input += synapse0x2515610();
   input += synapse0x2515650();
   input += synapse0x2515200();
   input += synapse0x2515240();
   input += synapse0x2515280();
   input += synapse0x25152c0();
   input += synapse0x25158a0();
   input += synapse0x25158e0();
   input += synapse0x2515920();
   input += synapse0x2515960();
   input += synapse0x25159a0();
   input += synapse0x25159e0();
   input += synapse0x2515a20();
   input += synapse0x2515a60();
   input += synapse0x2515aa0();
   input += synapse0x2515ae0();
   input += synapse0x2515b20();
   input += synapse0x2515b60();
   input += synapse0x2515ba0();
   input += synapse0x2515be0();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x2514ac0() {
   double input = input0x2514ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::input0x2515c20() {
   double input = 4.15591;
   input += synapse0x2515e40();
   input += synapse0x2515e80();
   input += synapse0x2515ec0();
   input += synapse0x2515f00();
   input += synapse0x2515f40();
   return input;
}

double NNfunction_ns_chiMinus2_dL::neuron0x2515c20() {
   double input = input0x2515c20();
   return (input * 1)+0;
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6090() {
   return (neuron0x24e0c90()*-0.00269435);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e60d0() {
   return (neuron0x24e0f40()*0.000346651);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6110() {
   return (neuron0x24e1280()*0.991698);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6150() {
   return (neuron0x24e15c0()*0.00609633);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6190() {
   return (neuron0x24e1900()*0.00479262);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e61d0() {
   return (neuron0x24e1c40()*0.00258596);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6210() {
   return (neuron0x24e1f80()*0.00225473);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6250() {
   return (neuron0x24e22c0()*-0.000320186);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6290() {
   return (neuron0x24e2600()*-0.00442671);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e62d0() {
   return (neuron0x24e2940()*-0.00274933);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6310() {
   return (neuron0x24e2c80()*-0.00162435);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6350() {
   return (neuron0x24e2fc0()*-0.0235788);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6390() {
   return (neuron0x24e3300()*-0.000182936);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e63d0() {
   return (neuron0x24e3640()*0.0069005);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6410() {
   return (neuron0x24e3980()*0.00419666);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6450() {
   return (neuron0x24e3cc0()*0.00485997);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e5ee0() {
   return (neuron0x24e4000()*0.00132052);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e5f20() {
   return (neuron0x24e4560()*-0.00448316);
}

double NNfunction_ns_chiMinus2_dL::synapse0x229ce10() {
   return (neuron0x24e48a0()*0.0016365);
}

double NNfunction_ns_chiMinus2_dL::synapse0x229ce50() {
   return (neuron0x24e4be0()*0.00477592);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6490() {
   return (neuron0x24e4f20()*7.71553e-05);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e64d0() {
   return (neuron0x24e5260()*-0.000400068);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6510() {
   return (neuron0x24e55a0()*-0.00184269);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6550() {
   return (neuron0x24e58e0()*-1.01358);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e68d0() {
   return (neuron0x24e0c90()*-0.0768385);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6910() {
   return (neuron0x24e0f40()*0.0546204);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6950() {
   return (neuron0x24e1280()*-0.0698339);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6990() {
   return (neuron0x24e15c0()*-0.570938);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e69d0() {
   return (neuron0x24e1900()*-0.15339);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6a10() {
   return (neuron0x24e1c40()*-0.189553);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6a50() {
   return (neuron0x24e1f80()*0.620429);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6a90() {
   return (neuron0x24e22c0()*0.0929368);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6ad0() {
   return (neuron0x24e2600()*-0.0899329);
}

double NNfunction_ns_chiMinus2_dL::synapse0x229cc60() {
   return (neuron0x24e2940()*0.153958);
}

double NNfunction_ns_chiMinus2_dL::synapse0x229cca0() {
   return (neuron0x24e2c80()*0.0529338);
}

double NNfunction_ns_chiMinus2_dL::synapse0x229cce0() {
   return (neuron0x24e2fc0()*0.0788195);
}

double NNfunction_ns_chiMinus2_dL::synapse0x229cd20() {
   return (neuron0x24e3300()*0.317891);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6d20() {
   return (neuron0x24e3640()*-0.0370471);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6d60() {
   return (neuron0x24e3980()*-0.196075);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6da0() {
   return (neuron0x24e3cc0()*-0.169779);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6720() {
   return (neuron0x24e4000()*-0.232241);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6760() {
   return (neuron0x24e4560()*-0.335511);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6ef0() {
   return (neuron0x24e48a0()*-0.0181028);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6f30() {
   return (neuron0x24e4be0()*0.199163);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6f70() {
   return (neuron0x24e4f20()*-0.0026479);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6fb0() {
   return (neuron0x24e5260()*-0.0931126);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6ff0() {
   return (neuron0x24e55a0()*-0.0135408);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7030() {
   return (neuron0x24e58e0()*0.00499557);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e73b0() {
   return (neuron0x24e0c90()*0.0309142);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e73f0() {
   return (neuron0x24e0f40()*-0.255578);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7430() {
   return (neuron0x24e1280()*-0.0552195);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7470() {
   return (neuron0x24e15c0()*0.416558);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e74b0() {
   return (neuron0x24e1900()*0.130816);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e74f0() {
   return (neuron0x24e1c40()*-0.0629057);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7530() {
   return (neuron0x24e1f80()*0.146699);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7570() {
   return (neuron0x24e22c0()*0.13147);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e75b0() {
   return (neuron0x24e2600()*-0.0684318);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e75f0() {
   return (neuron0x24e2940()*-0.267772);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7630() {
   return (neuron0x24e2c80()*-0.0223634);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7670() {
   return (neuron0x24e2fc0()*0.390634);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e76b0() {
   return (neuron0x24e3300()*0.146493);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e76f0() {
   return (neuron0x24e3640()*-0.0833442);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7730() {
   return (neuron0x24e3980()*0.195656);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7770() {
   return (neuron0x24e3cc0()*-0.0335606);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7200() {
   return (neuron0x24e4000()*-0.215531);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7240() {
   return (neuron0x24e4560()*0.220022);
}

double NNfunction_ns_chiMinus2_dL::synapse0x229d500() {
   return (neuron0x24e48a0()*-0.164223);
}

double NNfunction_ns_chiMinus2_dL::synapse0x22aadd0() {
   return (neuron0x24e4be0()*-0.0289022);
}

double NNfunction_ns_chiMinus2_dL::synapse0x22aae10() {
   return (neuron0x24e4f20()*0.194947);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e96a0() {
   return (neuron0x24e5260()*0.0397875);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e96e0() {
   return (neuron0x24e55a0()*-0.125622);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e09d0() {
   return (neuron0x24e58e0()*-0.260294);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e0aa0() {
   return (neuron0x24e0c90()*0.0316243);
}

double NNfunction_ns_chiMinus2_dL::synapse0x22ab650() {
   return (neuron0x24e0f40()*0.0195158);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6ca0() {
   return (neuron0x24e1280()*0.409533);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6ce0() {
   return (neuron0x24e15c0()*-0.544202);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e78c0() {
   return (neuron0x24e1900()*-0.0187852);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7900() {
   return (neuron0x24e1c40()*-0.0177488);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7940() {
   return (neuron0x24e1f80()*-0.000376151);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7980() {
   return (neuron0x24e22c0()*0.0051325);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e79c0() {
   return (neuron0x24e2600()*-0.00187559);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7a00() {
   return (neuron0x24e2940()*0.00936792);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7a40() {
   return (neuron0x24e2c80()*-0.00731041);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7a80() {
   return (neuron0x24e2fc0()*-0.454812);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7ac0() {
   return (neuron0x24e3300()*-0.0361053);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7b00() {
   return (neuron0x24e3640()*0.0567872);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7b40() {
   return (neuron0x24e3980()*-0.0231664);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7b80() {
   return (neuron0x24e3cc0()*-0.00652367);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e0a10() {
   return (neuron0x24e4000()*0.0806519);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e0a50() {
   return (neuron0x24e4560()*-0.0208642);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7cd0() {
   return (neuron0x24e48a0()*0.00116468);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7d10() {
   return (neuron0x24e4be0()*-0.00867943);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7d50() {
   return (neuron0x24e4f20()*0.014664);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7d90() {
   return (neuron0x24e5260()*-0.0105545);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7dd0() {
   return (neuron0x24e55a0()*-0.0021725);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7e10() {
   return (neuron0x24e58e0()*0.0945654);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e8190() {
   return (neuron0x24e0c90()*-0.00178052);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e81d0() {
   return (neuron0x24e0f40()*0.00611048);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e8210() {
   return (neuron0x24e1280()*-0.00966203);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e8250() {
   return (neuron0x24e15c0()*2.42903);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e8290() {
   return (neuron0x24e1900()*-0.0104698);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e82d0() {
   return (neuron0x24e1c40()*-0.00128107);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e8310() {
   return (neuron0x24e1f80()*-0.00460275);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e8350() {
   return (neuron0x24e22c0()*-0.0118446);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e8390() {
   return (neuron0x24e2600()*-0.00674818);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e83d0() {
   return (neuron0x24e2940()*0.000183717);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e8410() {
   return (neuron0x24e2c80()*0.00391705);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e8450() {
   return (neuron0x24e2fc0()*0.145316);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e8490() {
   return (neuron0x24e3300()*0.0122234);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e84d0() {
   return (neuron0x24e3640()*0.0220192);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e8510() {
   return (neuron0x24e3980()*0.00355063);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e8550() {
   return (neuron0x24e3cc0()*-0.00616111);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e86a0() {
   return (neuron0x24e4000()*0.0124305);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e7fe0() {
   return (neuron0x24e4560()*0.00822408);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e8020() {
   return (neuron0x24e48a0()*0.01605);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e97e0() {
   return (neuron0x24e4be0()*0.0119907);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9820() {
   return (neuron0x24e4f20()*0.0086663);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9860() {
   return (neuron0x24e5260()*-0.00137866);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e98a0() {
   return (neuron0x24e55a0()*-0.000954083);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e98e0() {
   return (neuron0x24e58e0()*-0.00742513);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9c60() {
   return (neuron0x24e0c90()*-0.219309);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9ca0() {
   return (neuron0x24e0f40()*0.399574);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9ce0() {
   return (neuron0x24e1280()*-0.278086);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9d20() {
   return (neuron0x24e15c0()*0.239912);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9d60() {
   return (neuron0x24e1900()*0.327447);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9da0() {
   return (neuron0x24e1c40()*0.129823);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9de0() {
   return (neuron0x24e1f80()*-0.120182);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9e20() {
   return (neuron0x24e22c0()*-0.344859);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9e60() {
   return (neuron0x24e2600()*0.377204);
}

double NNfunction_ns_chiMinus2_dL::synapse0x22ab120() {
   return (neuron0x24e2940()*0.0354334);
}

double NNfunction_ns_chiMinus2_dL::synapse0x22ab160() {
   return (neuron0x24e2c80()*-0.265689);
}

double NNfunction_ns_chiMinus2_dL::synapse0x22ab1a0() {
   return (neuron0x24e2fc0()*0.227905);
}

double NNfunction_ns_chiMinus2_dL::synapse0x22ab1e0() {
   return (neuron0x24e3300()*0.431637);
}

double NNfunction_ns_chiMinus2_dL::synapse0x22ab220() {
   return (neuron0x24e3640()*0.0585887);
}

double NNfunction_ns_chiMinus2_dL::synapse0x22ab260() {
   return (neuron0x24e3980()*-0.131716);
}

double NNfunction_ns_chiMinus2_dL::synapse0x22ab2a0() {
   return (neuron0x24e3cc0()*-0.281522);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9ab0() {
   return (neuron0x24e4000()*0.277705);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9af0() {
   return (neuron0x24e4560()*-0.00387948);
}

double NNfunction_ns_chiMinus2_dL::synapse0x22ab3f0() {
   return (neuron0x24e48a0()*0.386274);
}

double NNfunction_ns_chiMinus2_dL::synapse0x22ab430() {
   return (neuron0x24e4be0()*0.0186653);
}

double NNfunction_ns_chiMinus2_dL::synapse0x22ab470() {
   return (neuron0x24e4f20()*-0.148949);
}

double NNfunction_ns_chiMinus2_dL::synapse0x22ab4b0() {
   return (neuron0x24e5260()*0.434433);
}

double NNfunction_ns_chiMinus2_dL::synapse0x22ab4f0() {
   return (neuron0x24e55a0()*-0.0169876);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea6b0() {
   return (neuron0x24e58e0()*-0.256848);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eaa30() {
   return (neuron0x24e0c90()*-0.00543017);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eaa70() {
   return (neuron0x24e0f40()*-0.00286506);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eaab0() {
   return (neuron0x24e1280()*0.0164154);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eaaf0() {
   return (neuron0x24e15c0()*4.18069);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eab30() {
   return (neuron0x24e1900()*0.00615022);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eab70() {
   return (neuron0x24e1c40()*0.000493231);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eabb0() {
   return (neuron0x24e1f80()*0.0027622);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eabf0() {
   return (neuron0x24e22c0()*0.0178631);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eac30() {
   return (neuron0x24e2600()*0.0102898);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eac70() {
   return (neuron0x24e2940()*0.0067144);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eacb0() {
   return (neuron0x24e2c80()*-0.0034987);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eacf0() {
   return (neuron0x24e2fc0()*-0.303863);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ead30() {
   return (neuron0x24e3300()*0.00363276);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ead70() {
   return (neuron0x24e3640()*-0.0569625);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eadb0() {
   return (neuron0x24e3980()*0.00898483);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eadf0() {
   return (neuron0x24e3cc0()*0.0190964);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea880() {
   return (neuron0x24e4000()*-0.0504282);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea8c0() {
   return (neuron0x24e4560()*-0.00270572);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eaf40() {
   return (neuron0x24e48a0()*-0.0049079);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eaf80() {
   return (neuron0x24e4be0()*0.00260109);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eafc0() {
   return (neuron0x24e4f20()*-0.00478934);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb000() {
   return (neuron0x24e5260()*-0.00585045);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb040() {
   return (neuron0x24e55a0()*0.000236737);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb080() {
   return (neuron0x24e58e0()*0.0344412);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb400() {
   return (neuron0x24e0c90()*0.305406);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb440() {
   return (neuron0x24e0f40()*-0.381265);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb480() {
   return (neuron0x24e1280()*0.383434);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb4c0() {
   return (neuron0x24e15c0()*-0.212653);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb500() {
   return (neuron0x24e1900()*0.0269525);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb540() {
   return (neuron0x24e1c40()*-0.273399);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb580() {
   return (neuron0x24e1f80()*-0.111702);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb5c0() {
   return (neuron0x24e22c0()*0.237544);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb600() {
   return (neuron0x24e2600()*0.0198209);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb640() {
   return (neuron0x24e2940()*-0.001605);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb680() {
   return (neuron0x24e2c80()*-0.347854);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb6c0() {
   return (neuron0x24e2fc0()*-0.179039);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb700() {
   return (neuron0x24e3300()*0.0953792);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb740() {
   return (neuron0x24e3640()*-0.100466);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb780() {
   return (neuron0x24e3980()*0.296461);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb7c0() {
   return (neuron0x24e3cc0()*-0.474679);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb250() {
   return (neuron0x24e4000()*0.369472);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb290() {
   return (neuron0x24e4560()*-0.541094);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb910() {
   return (neuron0x24e48a0()*-0.253215);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb950() {
   return (neuron0x24e4be0()*0.396033);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb990() {
   return (neuron0x24e4f20()*-0.441642);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb9d0() {
   return (neuron0x24e5260()*0.446531);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eba10() {
   return (neuron0x24e55a0()*0.454526);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eba50() {
   return (neuron0x24e58e0()*-0.0959504);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e4450() {
   return (neuron0x24e0c90()*-0.0102368);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e4490() {
   return (neuron0x24e0f40()*0.000967491);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e44d0() {
   return (neuron0x24e1280()*-0.999775);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e4510() {
   return (neuron0x24e15c0()*-0.00937289);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ebfe0() {
   return (neuron0x24e1900()*-0.00525824);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec020() {
   return (neuron0x24e1c40()*-0.00879211);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec060() {
   return (neuron0x24e1f80()*-0.00206496);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec0a0() {
   return (neuron0x24e22c0()*-0.00151103);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec0e0() {
   return (neuron0x24e2600()*0.000634937);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec120() {
   return (neuron0x24e2940()*-0.00258289);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec160() {
   return (neuron0x24e2c80()*-0.00314733);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec1a0() {
   return (neuron0x24e2fc0()*-0.0218585);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec1e0() {
   return (neuron0x24e3300()*-0.00157519);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec220() {
   return (neuron0x24e3640()*-0.0073871);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec260() {
   return (neuron0x24e3980()*-0.00129132);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec2a0() {
   return (neuron0x24e3cc0()*-0.0116154);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ebc20() {
   return (neuron0x24e4000()*-0.00120645);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ebc60() {
   return (neuron0x24e4560()*0.00188354);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec3f0() {
   return (neuron0x24e48a0()*0.00350995);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec430() {
   return (neuron0x24e4be0()*-0.00386901);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec470() {
   return (neuron0x24e4f20()*0.000605866);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec4b0() {
   return (neuron0x24e5260()*-0.00185921);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec4f0() {
   return (neuron0x24e55a0()*-0.0011514);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec530() {
   return (neuron0x24e58e0()*-0.935044);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec8b0() {
   return (neuron0x24e0c90()*-0.336337);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec8f0() {
   return (neuron0x24e0f40()*-0.433539);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec930() {
   return (neuron0x24e1280()*-0.123382);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec970() {
   return (neuron0x24e15c0()*0.124728);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec9b0() {
   return (neuron0x24e1900()*-0.0621711);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec9f0() {
   return (neuron0x24e1c40()*0.348101);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eca30() {
   return (neuron0x24e1f80()*-0.564134);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eca70() {
   return (neuron0x24e22c0()*0.0989303);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ecab0() {
   return (neuron0x24e2600()*0.447037);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ecaf0() {
   return (neuron0x24e2940()*0.16065);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ecb30() {
   return (neuron0x24e2c80()*-0.283654);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ecb70() {
   return (neuron0x24e2fc0()*-0.164998);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ecbb0() {
   return (neuron0x24e3300()*-0.317245);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ecbf0() {
   return (neuron0x24e3640()*0.389417);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ecc30() {
   return (neuron0x24e3980()*-0.0396726);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ecc70() {
   return (neuron0x24e3cc0()*0.0184075);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec700() {
   return (neuron0x24e4000()*0.487602);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec740() {
   return (neuron0x24e4560()*0.482885);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ecdc0() {
   return (neuron0x24e48a0()*0.245754);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ece00() {
   return (neuron0x24e4be0()*0.339212);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ece40() {
   return (neuron0x24e4f20()*-0.171404);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ece80() {
   return (neuron0x24e5260()*-0.30922);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ecec0() {
   return (neuron0x24e55a0()*0.213118);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ecf00() {
   return (neuron0x24e58e0()*-0.31746);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed280() {
   return (neuron0x24e0c90()*-0.0915662);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed2c0() {
   return (neuron0x24e0f40()*-0.222162);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed300() {
   return (neuron0x24e1280()*-0.259185);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed340() {
   return (neuron0x24e15c0()*-0.322734);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed380() {
   return (neuron0x24e1900()*0.310145);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed3c0() {
   return (neuron0x24e1c40()*-0.21582);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed400() {
   return (neuron0x24e1f80()*-0.185019);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed440() {
   return (neuron0x24e22c0()*0.144526);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed480() {
   return (neuron0x24e2600()*0.0221191);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed4c0() {
   return (neuron0x24e2940()*0.172466);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed500() {
   return (neuron0x24e2c80()*0.13393);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed540() {
   return (neuron0x24e2fc0()*-0.292614);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed580() {
   return (neuron0x24e3300()*0.0268875);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed5c0() {
   return (neuron0x24e3640()*0.215092);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed600() {
   return (neuron0x24e3980()*-0.165427);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed640() {
   return (neuron0x24e3cc0()*-0.00909346);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed0d0() {
   return (neuron0x24e4000()*0.0653469);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed110() {
   return (neuron0x24e4560()*0.133103);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9ea0() {
   return (neuron0x24e48a0()*-0.0373163);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9ee0() {
   return (neuron0x24e4be0()*0.0658927);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9f20() {
   return (neuron0x24e4f20()*-0.0252676);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9f60() {
   return (neuron0x24e5260()*-0.0079851);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9fa0() {
   return (neuron0x24e55a0()*-0.0269852);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9fe0() {
   return (neuron0x24e58e0()*0.371508);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea360() {
   return (neuron0x24e0c90()*0.0853463);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea3a0() {
   return (neuron0x24e0f40()*-0.220152);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea3e0() {
   return (neuron0x24e1280()*0.318875);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea420() {
   return (neuron0x24e15c0()*-0.580569);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea460() {
   return (neuron0x24e1900()*-0.76439);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea4a0() {
   return (neuron0x24e1c40()*0.159415);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea4e0() {
   return (neuron0x24e1f80()*-0.276735);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea520() {
   return (neuron0x24e22c0()*-0.167043);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea560() {
   return (neuron0x24e2600()*0.0191464);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea5a0() {
   return (neuron0x24e2940()*-0.0631719);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea5e0() {
   return (neuron0x24e2c80()*-0.0545809);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea620() {
   return (neuron0x24e2fc0()*0.166731);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea660() {
   return (neuron0x24e3300()*-0.0849426);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee7a0() {
   return (neuron0x24e3640()*-0.0146233);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee7e0() {
   return (neuron0x24e3980()*-0.417785);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee820() {
   return (neuron0x24e3cc0()*-0.635525);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea1b0() {
   return (neuron0x24e4000()*0.153088);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea1f0() {
   return (neuron0x24e4560()*-0.0365091);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee970() {
   return (neuron0x24e48a0()*0.0677693);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee9b0() {
   return (neuron0x24e4be0()*0.0151626);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee9f0() {
   return (neuron0x24e4f20()*-0.0585313);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eea30() {
   return (neuron0x24e5260()*-0.117374);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eea70() {
   return (neuron0x24e55a0()*-0.131908);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eeab0() {
   return (neuron0x24e58e0()*0.159747);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eee30() {
   return (neuron0x24e0c90()*-0.000104021);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eee70() {
   return (neuron0x24e0f40()*0.00295457);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eeeb0() {
   return (neuron0x24e1280()*0.977946);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eeef0() {
   return (neuron0x24e15c0()*-0.0740393);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eef30() {
   return (neuron0x24e1900()*0.0100041);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eef70() {
   return (neuron0x24e1c40()*0.00335226);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eefb0() {
   return (neuron0x24e1f80()*0.00690844);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eeff0() {
   return (neuron0x24e22c0()*0.00245557);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef030() {
   return (neuron0x24e2600()*-0.000314053);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef070() {
   return (neuron0x24e2940()*0.00625865);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef0b0() {
   return (neuron0x24e2c80()*0.00650334);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef0f0() {
   return (neuron0x24e2fc0()*-0.0293674);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef130() {
   return (neuron0x24e3300()*0.013836);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef170() {
   return (neuron0x24e3640()*0.00241898);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef1b0() {
   return (neuron0x24e3980()*0.00377747);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef1f0() {
   return (neuron0x24e3cc0()*0.00717832);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eec80() {
   return (neuron0x24e4000()*0.00921269);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eecc0() {
   return (neuron0x24e4560()*0.00229521);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef340() {
   return (neuron0x24e48a0()*0.010347);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef380() {
   return (neuron0x24e4be0()*0.00871454);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef3c0() {
   return (neuron0x24e4f20()*0.00818794);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef400() {
   return (neuron0x24e5260()*-0.00148099);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef440() {
   return (neuron0x24e55a0()*-0.00505461);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef480() {
   return (neuron0x24e58e0()*-0.0560598);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef800() {
   return (neuron0x24e0c90()*-0.0224186);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef840() {
   return (neuron0x24e0f40()*-0.00250725);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef880() {
   return (neuron0x24e1280()*-0.533263);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef8c0() {
   return (neuron0x24e15c0()*-0.0803074);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef900() {
   return (neuron0x24e1900()*0.00284939);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef940() {
   return (neuron0x24e1c40()*-0.00939281);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef980() {
   return (neuron0x24e1f80()*-0.00121172);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef9c0() {
   return (neuron0x24e22c0()*0.000218919);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24efa00() {
   return (neuron0x24e2600()*0.00470275);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24efa40() {
   return (neuron0x24e2940()*0.0107049);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24efa80() {
   return (neuron0x24e2c80()*0.00396989);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24efac0() {
   return (neuron0x24e2fc0()*0.252995);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24efb00() {
   return (neuron0x24e3300()*0.00453159);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24efb40() {
   return (neuron0x24e3640()*-0.00445742);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24efb80() {
   return (neuron0x24e3980()*0.00132641);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24efbc0() {
   return (neuron0x24e3cc0()*-0.0128907);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef650() {
   return (neuron0x24e4000()*0.0106061);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef690() {
   return (neuron0x24e4560()*0.00906844);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24efd10() {
   return (neuron0x24e48a0()*0.00818887);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24efd50() {
   return (neuron0x24e4be0()*0.00662638);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24efd90() {
   return (neuron0x24e4f20()*0.00373622);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24efdd0() {
   return (neuron0x24e5260()*-0.000975426);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24efe10() {
   return (neuron0x24e55a0()*-0.00184962);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24efe50() {
   return (neuron0x24e58e0()*-0.822451);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f01d0() {
   return (neuron0x24e0c90()*0.000246749);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0210() {
   return (neuron0x24e0f40()*0.000538143);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0250() {
   return (neuron0x24e1280()*-0.11128);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0290() {
   return (neuron0x24e15c0()*0.0781216);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f02d0() {
   return (neuron0x24e1900()*-0.00224302);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0310() {
   return (neuron0x24e1c40()*-0.00399394);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0350() {
   return (neuron0x24e1f80()*0.0028685);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0390() {
   return (neuron0x24e22c0()*0.0112361);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f03d0() {
   return (neuron0x24e2600()*-0.00309553);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0410() {
   return (neuron0x24e2940()*0.0050173);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0450() {
   return (neuron0x24e2c80()*0.00295937);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0490() {
   return (neuron0x24e2fc0()*1.09004);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f04d0() {
   return (neuron0x24e3300()*0.00433961);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0510() {
   return (neuron0x24e3640()*0.00640845);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0550() {
   return (neuron0x24e3980()*0.00826366);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0590() {
   return (neuron0x24e3cc0()*0.00556102);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0020() {
   return (neuron0x24e4000()*0.00944545);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0060() {
   return (neuron0x24e4560()*-0.00122003);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f06e0() {
   return (neuron0x24e48a0()*6.00422e-05);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0720() {
   return (neuron0x24e4be0()*-0.00615564);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0760() {
   return (neuron0x24e4f20()*-0.00135906);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f07a0() {
   return (neuron0x24e5260()*-0.00189487);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f07e0() {
   return (neuron0x24e55a0()*-0.00239695);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0820() {
   return (neuron0x24e58e0()*-0.00945282);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0ba0() {
   return (neuron0x24e0c90()*0.00422499);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e0e20() {
   return (neuron0x24e0f40()*0.00127145);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e0e60() {
   return (neuron0x24e1280()*-3.55188);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e1160() {
   return (neuron0x24e15c0()*0.0102698);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e11a0() {
   return (neuron0x24e1900()*-0.0108668);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e14a0() {
   return (neuron0x24e1c40()*-0.00686022);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e14e0() {
   return (neuron0x24e1f80()*-0.00440474);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e17e0() {
   return (neuron0x24e22c0()*-0.00430013);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e1820() {
   return (neuron0x24e2600()*0.000309046);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e1b20() {
   return (neuron0x24e2940()*-0.0061904);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e1b60() {
   return (neuron0x24e2c80()*-0.00846143);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e1e60() {
   return (neuron0x24e2fc0()*-0.00674381);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e1ea0() {
   return (neuron0x24e3300()*-0.00997844);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e21a0() {
   return (neuron0x24e3640()*-0.00169075);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e21e0() {
   return (neuron0x24e3980()*0.00452215);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e24e0() {
   return (neuron0x24e3cc0()*-0.00686816);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e2520() {
   return (neuron0x24e4000()*-0.00327641);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e2820() {
   return (neuron0x24e4560()*0.00164166);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e2860() {
   return (neuron0x24e48a0()*-0.00210327);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e2b60() {
   return (neuron0x24e4be0()*-0.00427351);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e2ba0() {
   return (neuron0x24e4f20()*-4.89647e-07);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e2ea0() {
   return (neuron0x24e5260()*0.00255794);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e2ee0() {
   return (neuron0x24e55a0()*0.000134542);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e31e0() {
   return (neuron0x24e58e0()*-2.7154);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e3220() {
   return (neuron0x24e0c90()*0.00815231);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e3ee0() {
   return (neuron0x24e0f40()*0.00686917);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e3f20() {
   return (neuron0x24e1280()*3.14833);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f09f0() {
   return (neuron0x24e15c0()*-0.0104607);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0a30() {
   return (neuron0x24e1900()*0.00886775);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e4220() {
   return (neuron0x24e1c40()*0.0112918);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e4260() {
   return (neuron0x24e1f80()*0.00874512);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e4780() {
   return (neuron0x24e22c0()*0.00573023);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e47c0() {
   return (neuron0x24e2600()*0.00186065);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e4ac0() {
   return (neuron0x24e2940()*0.0100979);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e4b00() {
   return (neuron0x24e2c80()*0.00913806);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e4e00() {
   return (neuron0x24e2fc0()*-0.00869107);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e4e40() {
   return (neuron0x24e3300()*0.00600648);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e5140() {
   return (neuron0x24e3640()*0.00882647);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e5180() {
   return (neuron0x24e3980()*-0.00344011);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e5480() {
   return (neuron0x24e3cc0()*0.0117381);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e54c0() {
   return (neuron0x24e4000()*0.00995509);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e57c0() {
   return (neuron0x24e4560()*0.000129079);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e5800() {
   return (neuron0x24e48a0()*-0.00465854);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e5b00() {
   return (neuron0x24e4be0()*-0.00313214);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e5b40() {
   return (neuron0x24e4f20()*-5.07082e-05);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e3520() {
   return (neuron0x24e5260()*-0.00182108);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e3560() {
   return (neuron0x24e55a0()*0.00244101);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2910() {
   return (neuron0x24e58e0()*-2.33905);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2c90() {
   return (neuron0x24e0c90()*0.17439);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2cd0() {
   return (neuron0x24e0f40()*-0.198451);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2d10() {
   return (neuron0x24e1280()*0.349398);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2d50() {
   return (neuron0x24e15c0()*-0.644738);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2d90() {
   return (neuron0x24e1900()*-0.515);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2dd0() {
   return (neuron0x24e1c40()*-0.386074);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2e10() {
   return (neuron0x24e1f80()*-0.111588);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2e50() {
   return (neuron0x24e22c0()*-0.245864);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2e90() {
   return (neuron0x24e2600()*-0.0579252);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2ed0() {
   return (neuron0x24e2940()*-0.265645);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2f10() {
   return (neuron0x24e2c80()*0.0110986);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2f50() {
   return (neuron0x24e2fc0()*-0.240893);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2f90() {
   return (neuron0x24e3300()*0.13096);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2fd0() {
   return (neuron0x24e3640()*0.280531);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3010() {
   return (neuron0x24e3980()*-0.13584);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3050() {
   return (neuron0x24e3cc0()*0.337824);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2ae0() {
   return (neuron0x24e4000()*-0.262753);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2b20() {
   return (neuron0x24e4560()*0.0689745);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f31a0() {
   return (neuron0x24e48a0()*-0.083693);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f31e0() {
   return (neuron0x24e4be0()*0.0799654);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3220() {
   return (neuron0x24e4f20()*0.322301);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3260() {
   return (neuron0x24e5260()*-0.173662);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f32a0() {
   return (neuron0x24e55a0()*0.161119);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f32e0() {
   return (neuron0x24e58e0()*-0.0924816);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3660() {
   return (neuron0x24e0c90()*0.29925);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f36a0() {
   return (neuron0x24e0f40()*-0.288232);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f36e0() {
   return (neuron0x24e1280()*-0.389452);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3720() {
   return (neuron0x24e15c0()*-0.331659);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3760() {
   return (neuron0x24e1900()*0.221071);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f37a0() {
   return (neuron0x24e1c40()*0.100613);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f37e0() {
   return (neuron0x24e1f80()*0.212945);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3820() {
   return (neuron0x24e22c0()*-0.0589004);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3860() {
   return (neuron0x24e2600()*0.292289);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f38a0() {
   return (neuron0x24e2940()*-0.230155);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f38e0() {
   return (neuron0x24e2c80()*-0.0133844);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3920() {
   return (neuron0x24e2fc0()*-0.170446);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3960() {
   return (neuron0x24e3300()*-0.0138261);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f39a0() {
   return (neuron0x24e3640()*-0.112217);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f39e0() {
   return (neuron0x24e3980()*-0.534465);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3a20() {
   return (neuron0x24e3cc0()*-0.188881);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f34b0() {
   return (neuron0x24e4000()*-0.256817);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f34f0() {
   return (neuron0x24e4560()*0.152051);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3b70() {
   return (neuron0x24e48a0()*-0.256761);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3bb0() {
   return (neuron0x24e4be0()*0.275464);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3bf0() {
   return (neuron0x24e4f20()*-0.00577213);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3c30() {
   return (neuron0x24e5260()*0.00114478);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3c70() {
   return (neuron0x24e55a0()*-0.194154);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3cb0() {
   return (neuron0x24e58e0()*-0.0757674);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4030() {
   return (neuron0x24e0c90()*-0.000273149);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4070() {
   return (neuron0x24e0f40()*0.00277828);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f40b0() {
   return (neuron0x24e1280()*-0.0146027);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f40f0() {
   return (neuron0x24e15c0()*-2.19056);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4130() {
   return (neuron0x24e1900()*0.00167303);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4170() {
   return (neuron0x24e1c40()*0.00166942);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f41b0() {
   return (neuron0x24e1f80()*0.00229281);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f41f0() {
   return (neuron0x24e22c0()*0.00188673);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4230() {
   return (neuron0x24e2600()*-0.00132505);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4270() {
   return (neuron0x24e2940()*0.00257204);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f42b0() {
   return (neuron0x24e2c80()*3.42255e-05);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f42f0() {
   return (neuron0x24e2fc0()*-0.217442);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4330() {
   return (neuron0x24e3300()*0.0108816);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4370() {
   return (neuron0x24e3640()*-0.0226895);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f43b0() {
   return (neuron0x24e3980()*0.00157423);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f43f0() {
   return (neuron0x24e3cc0()*0.00604298);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3e80() {
   return (neuron0x24e4000()*-0.023716);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3ec0() {
   return (neuron0x24e4560()*0.00514073);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4540() {
   return (neuron0x24e48a0()*0.00550392);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4580() {
   return (neuron0x24e4be0()*-0.000290003);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f45c0() {
   return (neuron0x24e4f20()*0.00042071);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4600() {
   return (neuron0x24e5260()*0.00240896);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4640() {
   return (neuron0x24e55a0()*-3.68634e-05);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4680() {
   return (neuron0x24e58e0()*0.00409789);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4a00() {
   return (neuron0x24e0c90()*0.0715046);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4a40() {
   return (neuron0x24e0f40()*-0.00601128);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4a80() {
   return (neuron0x24e1280()*3.85071);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4ac0() {
   return (neuron0x24e15c0()*-0.00832678);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4b00() {
   return (neuron0x24e1900()*0.00444603);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4b40() {
   return (neuron0x24e1c40()*0.00823846);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4b80() {
   return (neuron0x24e1f80()*-0.000581166);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4bc0() {
   return (neuron0x24e22c0()*0.00543263);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4c00() {
   return (neuron0x24e2600()*0.00418698);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4c40() {
   return (neuron0x24e2940()*0.00459176);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4c80() {
   return (neuron0x24e2c80()*-0.0153059);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4cc0() {
   return (neuron0x24e2fc0()*-0.12761);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4d00() {
   return (neuron0x24e3300()*0.0265774);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4d40() {
   return (neuron0x24e3640()*0.0158431);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4d80() {
   return (neuron0x24e3980()*0.00770436);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4dc0() {
   return (neuron0x24e3cc0()*-0.00639206);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4850() {
   return (neuron0x24e4000()*-0.0321671);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4890() {
   return (neuron0x24e4560()*-0.0108585);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4f10() {
   return (neuron0x24e48a0()*0.0095183);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4f50() {
   return (neuron0x24e4be0()*-0.00460551);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4f90() {
   return (neuron0x24e4f20()*-0.0194317);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4fd0() {
   return (neuron0x24e5260()*0.00905092);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5010() {
   return (neuron0x24e55a0()*0.00269811);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5050() {
   return (neuron0x24e58e0()*2.26876);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f53d0() {
   return (neuron0x24e0c90()*-0.119096);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5410() {
   return (neuron0x24e0f40()*-0.0191784);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5450() {
   return (neuron0x24e1280()*0.129115);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5490() {
   return (neuron0x24e15c0()*0.431743);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f54d0() {
   return (neuron0x24e1900()*0.0615507);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5510() {
   return (neuron0x24e1c40()*0.149346);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5550() {
   return (neuron0x24e1f80()*-0.00258616);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5590() {
   return (neuron0x24e22c0()*0.0577004);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f55d0() {
   return (neuron0x24e2600()*-0.0902731);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed790() {
   return (neuron0x24e2940()*-0.222118);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed7d0() {
   return (neuron0x24e2c80()*-0.186411);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed810() {
   return (neuron0x24e2fc0()*-0.0394041);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed850() {
   return (neuron0x24e3300()*-0.611021);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed890() {
   return (neuron0x24e3640()*0.63553);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed8d0() {
   return (neuron0x24e3980()*-0.0285997);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed910() {
   return (neuron0x24e3cc0()*-0.245091);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5220() {
   return (neuron0x24e4000()*0.522455);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5260() {
   return (neuron0x24e4560()*-0.0393167);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eda60() {
   return (neuron0x24e48a0()*-0.160922);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24edaa0() {
   return (neuron0x24e4be0()*0.1502);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24edae0() {
   return (neuron0x24e4f20()*-0.0127102);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24edb20() {
   return (neuron0x24e5260()*-0.114234);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24edb60() {
   return (neuron0x24e55a0()*-0.0581394);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24edba0() {
   return (neuron0x24e58e0()*0.45399);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24edf20() {
   return (neuron0x24e0c90()*0.00351592);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24edf60() {
   return (neuron0x24e0f40()*-0.00117922);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24edfa0() {
   return (neuron0x24e1280()*0.026454);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24edfe0() {
   return (neuron0x24e15c0()*-0.0610441);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee020() {
   return (neuron0x24e1900()*0.000347406);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee060() {
   return (neuron0x24e1c40()*-0.00315689);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee0a0() {
   return (neuron0x24e1f80()*8.94354e-05);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee0e0() {
   return (neuron0x24e22c0()*0.00251618);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee120() {
   return (neuron0x24e2600()*0.00483948);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee160() {
   return (neuron0x24e2940()*0.00926303);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee1a0() {
   return (neuron0x24e2c80()*0.00736331);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee1e0() {
   return (neuron0x24e2fc0()*0.244117);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee220() {
   return (neuron0x24e3300()*0.00328742);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee260() {
   return (neuron0x24e3640()*0.00382945);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee2a0() {
   return (neuron0x24e3980()*-0.00415217);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee2e0() {
   return (neuron0x24e3cc0()*-0.00224733);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24edd70() {
   return (neuron0x24e4000()*0.00659038);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eddb0() {
   return (neuron0x24e4560()*0.00503485);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee430() {
   return (neuron0x24e48a0()*0.00243989);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee470() {
   return (neuron0x24e4be0()*0.00222941);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee4b0() {
   return (neuron0x24e4f20()*0.00085589);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee4f0() {
   return (neuron0x24e5260()*-0.000302009);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee530() {
   return (neuron0x24e55a0()*-0.000437735);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee570() {
   return (neuron0x24e58e0()*0.544638);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ee740() {
   return (neuron0x24e0c90()*0.0720133);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f77d0() {
   return (neuron0x24e0f40()*-0.0137258);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7810() {
   return (neuron0x24e1280()*-0.178765);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7850() {
   return (neuron0x24e15c0()*-0.199544);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7890() {
   return (neuron0x24e1900()*-0.299552);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f78d0() {
   return (neuron0x24e1c40()*0.0738194);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7910() {
   return (neuron0x24e1f80()*-0.0375564);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7950() {
   return (neuron0x24e22c0()*-0.163536);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7990() {
   return (neuron0x24e2600()*0.345793);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f79d0() {
   return (neuron0x24e2940()*0.286661);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7a10() {
   return (neuron0x24e2c80()*-0.0654426);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7a50() {
   return (neuron0x24e2fc0()*-0.697656);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7a90() {
   return (neuron0x24e3300()*0.204222);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7ad0() {
   return (neuron0x24e3640()*0.53879);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7b10() {
   return (neuron0x24e3980()*-0.179981);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7b50() {
   return (neuron0x24e3cc0()*-0.121511);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7620() {
   return (neuron0x24e4000()*0.193386);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7660() {
   return (neuron0x24e4560()*0.454185);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7ca0() {
   return (neuron0x24e48a0()*0.405266);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7ce0() {
   return (neuron0x24e4be0()*0.200404);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7d20() {
   return (neuron0x24e4f20()*0.285662);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7d60() {
   return (neuron0x24e5260()*0.035766);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7da0() {
   return (neuron0x24e55a0()*0.0386658);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7de0() {
   return (neuron0x24e58e0()*-0.189725);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8160() {
   return (neuron0x24e0c90()*0.110731);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f81a0() {
   return (neuron0x24e0f40()*0.0661561);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f81e0() {
   return (neuron0x24e1280()*0.126458);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8220() {
   return (neuron0x24e15c0()*0.35239);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8260() {
   return (neuron0x24e1900()*0.197778);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f82a0() {
   return (neuron0x24e1c40()*0.205594);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f82e0() {
   return (neuron0x24e1f80()*0.22774);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8320() {
   return (neuron0x24e22c0()*-0.227107);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8360() {
   return (neuron0x24e2600()*-0.0224922);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f83a0() {
   return (neuron0x24e2940()*0.223815);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f83e0() {
   return (neuron0x24e2c80()*-0.221215);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8420() {
   return (neuron0x24e2fc0()*-0.467779);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8460() {
   return (neuron0x24e3300()*-0.11725);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f84a0() {
   return (neuron0x24e3640()*-0.359209);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f84e0() {
   return (neuron0x24e3980()*0.116944);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8520() {
   return (neuron0x24e3cc0()*-0.288264);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7fb0() {
   return (neuron0x24e4000()*-0.430346);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7ff0() {
   return (neuron0x24e4560()*0.00566762);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8670() {
   return (neuron0x24e48a0()*-0.38988);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f86b0() {
   return (neuron0x24e4be0()*-0.280426);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f86f0() {
   return (neuron0x24e4f20()*-0.234257);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8730() {
   return (neuron0x24e5260()*-0.284453);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8770() {
   return (neuron0x24e55a0()*0.0130749);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f87b0() {
   return (neuron0x24e58e0()*0.00500762);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8b30() {
   return (neuron0x24e0c90()*0.189951);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8b70() {
   return (neuron0x24e0f40()*-0.182141);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8bb0() {
   return (neuron0x24e1280()*0.202951);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8bf0() {
   return (neuron0x24e15c0()*-0.676805);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8c30() {
   return (neuron0x24e1900()*-0.0662968);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8c70() {
   return (neuron0x24e1c40()*0.0829265);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8cb0() {
   return (neuron0x24e1f80()*0.17368);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8cf0() {
   return (neuron0x24e22c0()*-0.124794);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8d30() {
   return (neuron0x24e2600()*-0.0482781);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8d70() {
   return (neuron0x24e2940()*-0.459927);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8db0() {
   return (neuron0x24e2c80()*0.0958489);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8df0() {
   return (neuron0x24e2fc0()*0.292742);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8e30() {
   return (neuron0x24e3300()*0.0361124);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8e70() {
   return (neuron0x24e3640()*0.442004);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8eb0() {
   return (neuron0x24e3980()*-0.143654);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8ef0() {
   return (neuron0x24e3cc0()*-0.263951);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8980() {
   return (neuron0x24e4000()*0.281229);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f89c0() {
   return (neuron0x24e4560()*-0.00873034);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9040() {
   return (neuron0x24e48a0()*-0.208907);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9080() {
   return (neuron0x24e4be0()*0.0424568);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f90c0() {
   return (neuron0x24e4f20()*-0.325906);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9100() {
   return (neuron0x24e5260()*0.105034);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9140() {
   return (neuron0x24e55a0()*-0.0574644);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9180() {
   return (neuron0x24e58e0()*0.234308);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9500() {
   return (neuron0x24e0c90()*-0.110574);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9540() {
   return (neuron0x24e0f40()*0.403536);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9580() {
   return (neuron0x24e1280()*0.345334);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f95c0() {
   return (neuron0x24e15c0()*0.0896287);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9600() {
   return (neuron0x24e1900()*0.342585);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9640() {
   return (neuron0x24e1c40()*-0.0264332);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9680() {
   return (neuron0x24e1f80()*-0.124496);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f96c0() {
   return (neuron0x24e22c0()*0.161952);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9700() {
   return (neuron0x24e2600()*-0.156753);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9740() {
   return (neuron0x24e2940()*-0.196638);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9780() {
   return (neuron0x24e2c80()*-0.167041);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f97c0() {
   return (neuron0x24e2fc0()*0.0149218);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9800() {
   return (neuron0x24e3300()*0.26168);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9840() {
   return (neuron0x24e3640()*0.0650419);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9880() {
   return (neuron0x24e3980()*0.185267);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f98c0() {
   return (neuron0x24e3cc0()*-0.572498);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9350() {
   return (neuron0x24e4000()*-0.109041);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9390() {
   return (neuron0x24e4560()*-0.16603);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9a10() {
   return (neuron0x24e48a0()*0.0733679);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9a50() {
   return (neuron0x24e4be0()*0.206219);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9a90() {
   return (neuron0x24e4f20()*-0.161887);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9ad0() {
   return (neuron0x24e5260()*-0.189204);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9b10() {
   return (neuron0x24e55a0()*-0.153687);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9b50() {
   return (neuron0x24e58e0()*-0.350375);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9ed0() {
   return (neuron0x24e0c90()*-0.294698);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9f10() {
   return (neuron0x24e0f40()*0.124427);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9f50() {
   return (neuron0x24e1280()*0.0933661);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9f90() {
   return (neuron0x24e15c0()*-0.39762);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9fd0() {
   return (neuron0x24e1900()*-0.311724);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa010() {
   return (neuron0x24e1c40()*0.0723751);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa050() {
   return (neuron0x24e1f80()*0.139467);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa090() {
   return (neuron0x24e22c0()*0.312326);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa0d0() {
   return (neuron0x24e2600()*0.178101);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa110() {
   return (neuron0x24e2940()*0.285963);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa150() {
   return (neuron0x24e2c80()*-0.36332);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa190() {
   return (neuron0x24e2fc0()*0.519177);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa1d0() {
   return (neuron0x24e3300()*0.429836);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa210() {
   return (neuron0x24e3640()*0.331485);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa250() {
   return (neuron0x24e3980()*0.449042);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa290() {
   return (neuron0x24e3cc0()*-0.441909);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9d20() {
   return (neuron0x24e4000()*-0.55551);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9d60() {
   return (neuron0x24e4560()*-0.299404);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa3e0() {
   return (neuron0x24e48a0()*-0.40552);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa420() {
   return (neuron0x24e4be0()*0.0402237);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa460() {
   return (neuron0x24e4f20()*-0.396763);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa4a0() {
   return (neuron0x24e5260()*0.109912);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa4e0() {
   return (neuron0x24e55a0()*0.0294004);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa520() {
   return (neuron0x24e58e0()*0.0156866);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa8a0() {
   return (neuron0x24e0c90()*0.153817);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa8e0() {
   return (neuron0x24e0f40()*-0.280998);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa920() {
   return (neuron0x24e1280()*-0.0269871);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa960() {
   return (neuron0x24e15c0()*0.411283);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa9a0() {
   return (neuron0x24e1900()*-0.180715);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa9e0() {
   return (neuron0x24e1c40()*-0.262498);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24faa20() {
   return (neuron0x24e1f80()*-0.38021);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24faa60() {
   return (neuron0x24e22c0()*0.384003);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24faaa0() {
   return (neuron0x24e2600()*0.229023);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24faae0() {
   return (neuron0x24e2940()*0.0696539);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fab20() {
   return (neuron0x24e2c80()*0.427686);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fab60() {
   return (neuron0x24e2fc0()*-0.049619);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24faba0() {
   return (neuron0x24e3300()*0.0112811);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fabe0() {
   return (neuron0x24e3640()*0.312093);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fac20() {
   return (neuron0x24e3980()*0.180301);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fac60() {
   return (neuron0x24e3cc0()*-0.174554);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa6f0() {
   return (neuron0x24e4000()*-0.182795);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa730() {
   return (neuron0x24e4560()*0.275928);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fadb0() {
   return (neuron0x24e48a0()*-0.487264);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fadf0() {
   return (neuron0x24e4be0()*0.301161);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fae30() {
   return (neuron0x24e4f20()*0.388958);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fae70() {
   return (neuron0x24e5260()*0.265239);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24faeb0() {
   return (neuron0x24e55a0()*0.0253398);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24faef0() {
   return (neuron0x24e58e0()*-0.319827);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb270() {
   return (neuron0x24e0c90()*0.00543961);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb2b0() {
   return (neuron0x24e0f40()*-0.0108655);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb2f0() {
   return (neuron0x24e1280()*0.00255779);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb330() {
   return (neuron0x24e15c0()*0.629122);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb370() {
   return (neuron0x24e1900()*-0.0126253);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb3b0() {
   return (neuron0x24e1c40()*-0.023291);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb3f0() {
   return (neuron0x24e1f80()*0.0297562);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb430() {
   return (neuron0x24e22c0()*0.0406707);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb470() {
   return (neuron0x24e2600()*-0.000505987);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb4b0() {
   return (neuron0x24e2940()*0.0193244);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb4f0() {
   return (neuron0x24e2c80()*0.0132549);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb530() {
   return (neuron0x24e2fc0()*0.287622);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb570() {
   return (neuron0x24e3300()*-0.0539113);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb5b0() {
   return (neuron0x24e3640()*0.0265724);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb5f0() {
   return (neuron0x24e3980()*0.0277682);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb630() {
   return (neuron0x24e3cc0()*-0.0309711);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb0c0() {
   return (neuron0x24e4000()*0.0612428);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb100() {
   return (neuron0x24e4560()*-0.00865657);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb780() {
   return (neuron0x24e48a0()*-0.0190147);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb7c0() {
   return (neuron0x24e4be0()*-0.00451022);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb800() {
   return (neuron0x24e4f20()*0.00202263);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb840() {
   return (neuron0x24e5260()*-0.00272649);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb880() {
   return (neuron0x24e55a0()*-0.00036694);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fb8c0() {
   return (neuron0x24e58e0()*-0.0248916);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fbc40() {
   return (neuron0x24e0c90()*0.0296785);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fbc80() {
   return (neuron0x24e0f40()*-0.00283324);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fbcc0() {
   return (neuron0x24e1280()*3.91005);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fbd00() {
   return (neuron0x24e15c0()*-0.00616209);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fbd40() {
   return (neuron0x24e1900()*0.00964984);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fbd80() {
   return (neuron0x24e1c40()*0.00832261);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fbdc0() {
   return (neuron0x24e1f80()*0.00303119);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fbe00() {
   return (neuron0x24e22c0()*0.00707116);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fbe40() {
   return (neuron0x24e2600()*0.0012963);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fbe80() {
   return (neuron0x24e2940()*0.00452744);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fbec0() {
   return (neuron0x24e2c80()*0.00316222);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fbf00() {
   return (neuron0x24e2fc0()*-0.0175058);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fbf40() {
   return (neuron0x24e3300()*0.0146727);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fbf80() {
   return (neuron0x24e3640()*0.000821611);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fbfc0() {
   return (neuron0x24e3980()*-0.00327941);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fc000() {
   return (neuron0x24e3cc0()*0.00250237);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fba90() {
   return (neuron0x24e4000()*-0.0107283);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fbad0() {
   return (neuron0x24e4560()*-0.00480526);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fc150() {
   return (neuron0x24e48a0()*0.00482684);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fc190() {
   return (neuron0x24e4be0()*0.00188058);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fc1d0() {
   return (neuron0x24e4f20()*-0.00432909);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fc210() {
   return (neuron0x24e5260()*0.000572482);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fc250() {
   return (neuron0x24e55a0()*0.000887036);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fc290() {
   return (neuron0x24e58e0()*2.90098);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fc610() {
   return (neuron0x24e0c90()*0.134891);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0be0() {
   return (neuron0x24e0f40()*-0.0232135);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0c20() {
   return (neuron0x24e1280()*-0.107263);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0c60() {
   return (neuron0x24e15c0()*-0.380922);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0eb0() {
   return (neuron0x24e1900()*-0.0560624);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0ef0() {
   return (neuron0x24e1c40()*-0.0406784);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0f30() {
   return (neuron0x24e1f80()*-0.0739802);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f1180() {
   return (neuron0x24e22c0()*-0.0541185);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f11c0() {
   return (neuron0x24e2600()*0.176025);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f1410() {
   return (neuron0x24e2940()*-0.382879);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f1450() {
   return (neuron0x24e2c80()*0.179805);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f1490() {
   return (neuron0x24e2fc0()*0.20736);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f16e0() {
   return (neuron0x24e3300()*-0.206789);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f1720() {
   return (neuron0x24e3640()*-0.276673);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f1970() {
   return (neuron0x24e3980()*-0.140143);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f19b0() {
   return (neuron0x24e3cc0()*-0.0878146);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fc460() {
   return (neuron0x24e4000()*-0.268472);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fc4a0() {
   return (neuron0x24e4560()*-0.33601);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f1b00() {
   return (neuron0x24e48a0()*-0.21832);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2010() {
   return (neuron0x24e4be0()*-0.44898);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2050() {
   return (neuron0x24e4f20()*-0.0687501);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2090() {
   return (neuron0x24e5260()*-0.0658918);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f22e0() {
   return (neuron0x24e55a0()*-0.0400373);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2320() {
   return (neuron0x24e58e0()*-0.115539);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f1bd0() {
   return (neuron0x24e0c90()*0.00135789);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f1c10() {
   return (neuron0x24e0f40()*-0.000559221);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f1c50() {
   return (neuron0x24e1280()*0.517874);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f1c90() {
   return (neuron0x24e15c0()*-0.0214261);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2610() {
   return (neuron0x24e1900()*0.002454);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fe960() {
   return (neuron0x24e1c40()*0.00273449);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fe9a0() {
   return (neuron0x24e1f80()*0.00210142);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fe9e0() {
   return (neuron0x24e22c0()*0.00593169);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fea20() {
   return (neuron0x24e2600()*-0.00128148);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fea60() {
   return (neuron0x24e2940()*-0.000971337);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24feaa0() {
   return (neuron0x24e2c80()*-0.000559227);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24feae0() {
   return (neuron0x24e2fc0()*0.0999649);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24feb20() {
   return (neuron0x24e3300()*-0.00170009);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24feb60() {
   return (neuron0x24e3640()*0.00762497);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24feba0() {
   return (neuron0x24e3980()*-0.00190105);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24febe0() {
   return (neuron0x24e3cc0()*0.00239143);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f24f0() {
   return (neuron0x24e4000()*0.00032357);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2530() {
   return (neuron0x24e4560()*-0.00722367);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fed30() {
   return (neuron0x24e48a0()*-0.00905536);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fed70() {
   return (neuron0x24e4be0()*-0.00206685);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fedb0() {
   return (neuron0x24e4f20()*-0.00912751);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fedf0() {
   return (neuron0x24e5260()*0.00175689);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fee30() {
   return (neuron0x24e55a0()*-0.00060964);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fee70() {
   return (neuron0x24e58e0()*-0.694056);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff1f0() {
   return (neuron0x24e0c90()*-0.156843);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff230() {
   return (neuron0x24e0f40()*0.0519348);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff270() {
   return (neuron0x24e1280()*0.204678);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff2b0() {
   return (neuron0x24e15c0()*-0.123837);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff2f0() {
   return (neuron0x24e1900()*-0.0756796);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff330() {
   return (neuron0x24e1c40()*0.0735651);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff370() {
   return (neuron0x24e1f80()*-0.00630229);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff3b0() {
   return (neuron0x24e22c0()*-0.0962574);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff3f0() {
   return (neuron0x24e2600()*-0.0733785);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff430() {
   return (neuron0x24e2940()*0.0880217);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff470() {
   return (neuron0x24e2c80()*-0.892477);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff4b0() {
   return (neuron0x24e2fc0()*0.437461);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff4f0() {
   return (neuron0x24e3300()*0.211769);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff530() {
   return (neuron0x24e3640()*-0.177972);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff570() {
   return (neuron0x24e3980()*-0.0179031);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff5b0() {
   return (neuron0x24e3cc0()*-0.0849954);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff040() {
   return (neuron0x24e4000()*-0.251603);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff080() {
   return (neuron0x24e4560()*-0.105361);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff700() {
   return (neuron0x24e48a0()*0.0608331);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff740() {
   return (neuron0x24e4be0()*-0.150339);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff780() {
   return (neuron0x24e4f20()*-0.0722773);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff7c0() {
   return (neuron0x24e5260()*-0.0463718);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff800() {
   return (neuron0x24e55a0()*-0.0201655);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff840() {
   return (neuron0x24e58e0()*0.492543);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ffbc0() {
   return (neuron0x24e0c90()*-0.0646822);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ffc00() {
   return (neuron0x24e0f40()*-0.0801493);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ffc40() {
   return (neuron0x24e1280()*0.166125);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ffc80() {
   return (neuron0x24e15c0()*-0.345585);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ffcc0() {
   return (neuron0x24e1900()*0.246451);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ffd00() {
   return (neuron0x24e1c40()*0.521653);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ffd40() {
   return (neuron0x24e1f80()*0.625152);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ffd80() {
   return (neuron0x24e22c0()*-0.0467112);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ffdc0() {
   return (neuron0x24e2600()*-0.0958916);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ffe00() {
   return (neuron0x24e2940()*0.238945);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ffe40() {
   return (neuron0x24e2c80()*0.313185);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ffe80() {
   return (neuron0x24e2fc0()*-0.125343);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ffec0() {
   return (neuron0x24e3300()*-0.178754);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fff00() {
   return (neuron0x24e3640()*0.126761);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fff40() {
   return (neuron0x24e3980()*0.0984097);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fff80() {
   return (neuron0x24e3cc0()*-0.179823);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ffa10() {
   return (neuron0x24e4000()*0.456171);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ffa50() {
   return (neuron0x24e4560()*-0.0280917);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25000d0() {
   return (neuron0x24e48a0()*-0.0236999);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500110() {
   return (neuron0x24e4be0()*0.0365836);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500150() {
   return (neuron0x24e4f20()*0.216066);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500190() {
   return (neuron0x24e5260()*0.0452018);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25001d0() {
   return (neuron0x24e55a0()*-0.0480718);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500210() {
   return (neuron0x24e58e0()*-0.32896);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500590() {
   return (neuron0x24e0c90()*-0.0103732);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25005d0() {
   return (neuron0x24e0f40()*0.161078);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500610() {
   return (neuron0x24e1280()*0.426487);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500650() {
   return (neuron0x24e15c0()*-0.145366);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500690() {
   return (neuron0x24e1900()*-0.2372);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25006d0() {
   return (neuron0x24e1c40()*-0.0894225);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500710() {
   return (neuron0x24e1f80()*0.235305);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500750() {
   return (neuron0x24e22c0()*0.11383);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500790() {
   return (neuron0x24e2600()*0.0742175);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25007d0() {
   return (neuron0x24e2940()*-0.097099);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500810() {
   return (neuron0x24e2c80()*0.0882048);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500850() {
   return (neuron0x24e2fc0()*0.26279);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500890() {
   return (neuron0x24e3300()*0.0106234);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25008d0() {
   return (neuron0x24e3640()*0.677306);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500910() {
   return (neuron0x24e3980()*0.0634321);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500950() {
   return (neuron0x24e3cc0()*-0.640269);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25003e0() {
   return (neuron0x24e4000()*-0.263799);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500420() {
   return (neuron0x24e4560()*0.0671447);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500aa0() {
   return (neuron0x24e48a0()*0.258477);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500ae0() {
   return (neuron0x24e4be0()*-0.173438);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500b20() {
   return (neuron0x24e4f20()*0.227955);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500b60() {
   return (neuron0x24e5260()*0.314015);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500ba0() {
   return (neuron0x24e55a0()*0.25514);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500be0() {
   return (neuron0x24e58e0()*0.615978);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500f60() {
   return (neuron0x24e0c90()*0.133541);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500fa0() {
   return (neuron0x24e0f40()*-0.161601);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500fe0() {
   return (neuron0x24e1280()*0.119458);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501020() {
   return (neuron0x24e15c0()*0.0783946);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501060() {
   return (neuron0x24e1900()*-0.252705);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25010a0() {
   return (neuron0x24e1c40()*-0.388906);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25010e0() {
   return (neuron0x24e1f80()*0.416184);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501120() {
   return (neuron0x24e22c0()*0.31552);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501160() {
   return (neuron0x24e2600()*-0.213598);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25011a0() {
   return (neuron0x24e2940()*-0.415055);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25011e0() {
   return (neuron0x24e2c80()*0.301733);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501220() {
   return (neuron0x24e2fc0()*-0.530633);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501260() {
   return (neuron0x24e3300()*-0.084516);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25012a0() {
   return (neuron0x24e3640()*-0.09004);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25012e0() {
   return (neuron0x24e3980()*-0.20435);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501320() {
   return (neuron0x24e3cc0()*-0.0244722);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500db0() {
   return (neuron0x24e4000()*-0.374115);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500df0() {
   return (neuron0x24e4560()*-0.0840593);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501470() {
   return (neuron0x24e48a0()*-0.481354);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25014b0() {
   return (neuron0x24e4be0()*0.0171116);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25014f0() {
   return (neuron0x24e4f20()*0.0694626);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501530() {
   return (neuron0x24e5260()*0.0715438);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501570() {
   return (neuron0x24e55a0()*0.0112671);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25015b0() {
   return (neuron0x24e58e0()*-0.011095);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501930() {
   return (neuron0x24e0c90()*-0.110493);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501970() {
   return (neuron0x24e0f40()*-0.209333);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25019b0() {
   return (neuron0x24e1280()*0.276995);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25019f0() {
   return (neuron0x24e15c0()*-0.62063);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501a30() {
   return (neuron0x24e1900()*0.275273);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501a70() {
   return (neuron0x24e1c40()*-0.261304);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501ab0() {
   return (neuron0x24e1f80()*0.198873);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501af0() {
   return (neuron0x24e22c0()*-0.0688251);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501b30() {
   return (neuron0x24e2600()*0.0691891);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501b70() {
   return (neuron0x24e2940()*0.158258);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501bb0() {
   return (neuron0x24e2c80()*-0.0441638);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501bf0() {
   return (neuron0x24e2fc0()*0.0104688);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501c30() {
   return (neuron0x24e3300()*-0.0639563);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501c70() {
   return (neuron0x24e3640()*-0.173837);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501cb0() {
   return (neuron0x24e3980()*0.152921);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501cf0() {
   return (neuron0x24e3cc0()*-0.223907);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501780() {
   return (neuron0x24e4000()*-0.319063);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25017c0() {
   return (neuron0x24e4560()*0.33384);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501e40() {
   return (neuron0x24e48a0()*0.357818);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501e80() {
   return (neuron0x24e4be0()*0.308078);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501ec0() {
   return (neuron0x24e4f20()*0.22643);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501f00() {
   return (neuron0x24e5260()*-0.0197087);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501f40() {
   return (neuron0x24e55a0()*0.00515293);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2501f80() {
   return (neuron0x24e58e0()*-0.12396);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502300() {
   return (neuron0x24e0c90()*0.193458);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502340() {
   return (neuron0x24e0f40()*-0.048089);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502380() {
   return (neuron0x24e1280()*-0.167253);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25023c0() {
   return (neuron0x24e15c0()*-0.195246);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502400() {
   return (neuron0x24e1900()*-0.137009);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502440() {
   return (neuron0x24e1c40()*0.250882);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502480() {
   return (neuron0x24e1f80()*-0.251019);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25024c0() {
   return (neuron0x24e22c0()*0.265811);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502500() {
   return (neuron0x24e2600()*0.00205652);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502540() {
   return (neuron0x24e2940()*0.0427564);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502580() {
   return (neuron0x24e2c80()*-0.443576);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25025c0() {
   return (neuron0x24e2fc0()*-0.647704);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502600() {
   return (neuron0x24e3300()*-0.285114);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502640() {
   return (neuron0x24e3640()*-0.27421);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502680() {
   return (neuron0x24e3980()*-0.125286);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25026c0() {
   return (neuron0x24e3cc0()*-0.284822);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502150() {
   return (neuron0x24e4000()*0.283559);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502190() {
   return (neuron0x24e4560()*-0.427977);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502810() {
   return (neuron0x24e48a0()*0.0271144);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502850() {
   return (neuron0x24e4be0()*0.24864);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502890() {
   return (neuron0x24e4f20()*-0.0764104);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25028d0() {
   return (neuron0x24e5260()*0.0481249);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502910() {
   return (neuron0x24e55a0()*-0.078714);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502950() {
   return (neuron0x24e58e0()*-0.237401);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502cd0() {
   return (neuron0x24e0c90()*0.0780876);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502d10() {
   return (neuron0x24e0f40()*-0.0926255);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502d50() {
   return (neuron0x24e1280()*0.354948);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502d90() {
   return (neuron0x24e15c0()*0.492048);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502dd0() {
   return (neuron0x24e1900()*0.203455);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502e10() {
   return (neuron0x24e1c40()*0.0640013);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502e50() {
   return (neuron0x24e1f80()*-0.185639);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502e90() {
   return (neuron0x24e22c0()*-0.19194);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502ed0() {
   return (neuron0x24e2600()*0.0370564);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502f10() {
   return (neuron0x24e2940()*0.0507534);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502f50() {
   return (neuron0x24e2c80()*-0.0369804);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502f90() {
   return (neuron0x24e2fc0()*0.358179);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502fd0() {
   return (neuron0x24e3300()*0.116834);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503010() {
   return (neuron0x24e3640()*-0.0215845);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503050() {
   return (neuron0x24e3980()*-0.280791);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503090() {
   return (neuron0x24e3cc0()*-0.427389);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502b20() {
   return (neuron0x24e4000()*0.0373779);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502b60() {
   return (neuron0x24e4560()*-0.0032694);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25031e0() {
   return (neuron0x24e48a0()*-0.0288256);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503220() {
   return (neuron0x24e4be0()*-0.0192936);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503260() {
   return (neuron0x24e4f20()*-0.0412443);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25032a0() {
   return (neuron0x24e5260()*0.00229629);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25032e0() {
   return (neuron0x24e55a0()*0.0410075);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503320() {
   return (neuron0x24e58e0()*0.124622);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ebdd0() {
   return (neuron0x24e0c90()*-0.0169542);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ebe10() {
   return (neuron0x24e0f40()*0.00820807);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ebe50() {
   return (neuron0x24e1280()*0.405776);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ebe90() {
   return (neuron0x24e15c0()*0.568873);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ebed0() {
   return (neuron0x24e1900()*-0.0103996);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ebf10() {
   return (neuron0x24e1c40()*0.105457);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ebf50() {
   return (neuron0x24e1f80()*0.0234937);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ebf90() {
   return (neuron0x24e22c0()*-0.11644);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503ab0() {
   return (neuron0x24e2600()*0.00238261);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503af0() {
   return (neuron0x24e2940()*0.00311546);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503b30() {
   return (neuron0x24e2c80()*-0.0425175);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503b70() {
   return (neuron0x24e2fc0()*0.17354);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503bb0() {
   return (neuron0x24e3300()*0.189731);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503bf0() {
   return (neuron0x24e3640()*-0.148499);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503c30() {
   return (neuron0x24e3980()*0.0881736);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503c70() {
   return (neuron0x24e3cc0()*0.181932);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25034f0() {
   return (neuron0x24e4000()*-0.290156);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503530() {
   return (neuron0x24e4560()*0.0647128);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503dc0() {
   return (neuron0x24e48a0()*0.0535775);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503e00() {
   return (neuron0x24e4be0()*0.0670868);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503e40() {
   return (neuron0x24e4f20()*-0.0032967);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503e80() {
   return (neuron0x24e5260()*0.0128218);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503ec0() {
   return (neuron0x24e55a0()*-0.00381403);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503f00() {
   return (neuron0x24e58e0()*0.149207);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504280() {
   return (neuron0x24e0c90()*-0.00717243);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25042c0() {
   return (neuron0x24e0f40()*-0.00447136);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504300() {
   return (neuron0x24e1280()*0.127871);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504340() {
   return (neuron0x24e15c0()*0.062926);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504380() {
   return (neuron0x24e1900()*0.00230064);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25043c0() {
   return (neuron0x24e1c40()*0.00497059);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504400() {
   return (neuron0x24e1f80()*-0.00170906);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504440() {
   return (neuron0x24e22c0()*0.00494802);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504480() {
   return (neuron0x24e2600()*-0.00556914);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25044c0() {
   return (neuron0x24e2940()*0.000404479);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504500() {
   return (neuron0x24e2c80()*0.00328063);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504540() {
   return (neuron0x24e2fc0()*2.01124);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504580() {
   return (neuron0x24e3300()*0.0123441);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25045c0() {
   return (neuron0x24e3640()*0.00461824);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504600() {
   return (neuron0x24e3980()*-0.002602);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504640() {
   return (neuron0x24e3cc0()*0.00355288);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25040d0() {
   return (neuron0x24e4000()*0.00225661);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504110() {
   return (neuron0x24e4560()*-0.00160191);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504790() {
   return (neuron0x24e48a0()*-0.000386646);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25047d0() {
   return (neuron0x24e4be0()*0.00171111);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504810() {
   return (neuron0x24e4f20()*-0.00241818);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504850() {
   return (neuron0x24e5260()*0.0106328);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504890() {
   return (neuron0x24e55a0()*0.00498679);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25048d0() {
   return (neuron0x24e58e0()*0.00148548);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504c50() {
   return (neuron0x24e0c90()*0.00249057);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504c90() {
   return (neuron0x24e0f40()*0.00944869);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504cd0() {
   return (neuron0x24e1280()*3.55385);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504d10() {
   return (neuron0x24e15c0()*-0.00770775);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504d50() {
   return (neuron0x24e1900()*0.00747818);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504d90() {
   return (neuron0x24e1c40()*0.0137456);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504dd0() {
   return (neuron0x24e1f80()*0.0108435);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504e10() {
   return (neuron0x24e22c0()*0.00394069);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504e50() {
   return (neuron0x24e2600()*0.00230521);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504e90() {
   return (neuron0x24e2940()*0.00906086);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504ed0() {
   return (neuron0x24e2c80()*0.00785953);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504f10() {
   return (neuron0x24e2fc0()*0.0194567);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504f50() {
   return (neuron0x24e3300()*0.00833094);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504f90() {
   return (neuron0x24e3640()*0.00258173);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504fd0() {
   return (neuron0x24e3980()*-0.00307103);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2505010() {
   return (neuron0x24e3cc0()*0.00994267);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504aa0() {
   return (neuron0x24e4000()*0.00512777);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504ae0() {
   return (neuron0x24e4560()*-0.00101168);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5610() {
   return (neuron0x24e48a0()*-0.00741466);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5650() {
   return (neuron0x24e4be0()*-0.00451248);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5690() {
   return (neuron0x24e4f20()*0.000172321);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f56d0() {
   return (neuron0x24e5260()*0.000388061);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5710() {
   return (neuron0x24e55a0()*0.0027161);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5750() {
   return (neuron0x24e58e0()*-2.6889);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5ad0() {
   return (neuron0x24e0c90()*-0.0675424);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5b10() {
   return (neuron0x24e0f40()*0.058631);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5b50() {
   return (neuron0x24e1280()*0.123149);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5b90() {
   return (neuron0x24e15c0()*0.409051);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5bd0() {
   return (neuron0x24e1900()*0.0781633);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5c10() {
   return (neuron0x24e1c40()*-0.0768899);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5c50() {
   return (neuron0x24e1f80()*0.125719);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5c90() {
   return (neuron0x24e22c0()*0.112266);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5cd0() {
   return (neuron0x24e2600()*0.00938104);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5d10() {
   return (neuron0x24e2940()*-0.0523993);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5d50() {
   return (neuron0x24e2c80()*-0.00617164);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5d90() {
   return (neuron0x24e2fc0()*0.198457);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5dd0() {
   return (neuron0x24e3300()*-0.0215362);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5e10() {
   return (neuron0x24e3640()*0.107758);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5e50() {
   return (neuron0x24e3980()*-0.725154);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5e90() {
   return (neuron0x24e3cc0()*0.224364);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5920() {
   return (neuron0x24e4000()*0.0247944);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5960() {
   return (neuron0x24e4560()*0.00372914);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5fe0() {
   return (neuron0x24e48a0()*0.0542316);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6020() {
   return (neuron0x24e4be0()*0.0156915);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6060() {
   return (neuron0x24e4f20()*0.0370362);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f60a0() {
   return (neuron0x24e5260()*0.0220041);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f60e0() {
   return (neuron0x24e55a0()*0.0064569);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6120() {
   return (neuron0x24e58e0()*0.0784532);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f64a0() {
   return (neuron0x24e0c90()*-0.0333167);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f64e0() {
   return (neuron0x24e0f40()*0.0302279);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6520() {
   return (neuron0x24e1280()*-0.174892);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6560() {
   return (neuron0x24e15c0()*0.0226219);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f65a0() {
   return (neuron0x24e1900()*-0.0789573);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f65e0() {
   return (neuron0x24e1c40()*-0.0926294);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6620() {
   return (neuron0x24e1f80()*-0.0858032);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6660() {
   return (neuron0x24e22c0()*-0.0363966);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f66a0() {
   return (neuron0x24e2600()*-0.0508082);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f66e0() {
   return (neuron0x24e2940()*-0.843246);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6720() {
   return (neuron0x24e2c80()*-0.225402);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6760() {
   return (neuron0x24e2fc0()*0.364026);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f67a0() {
   return (neuron0x24e3300()*0.0280222);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f67e0() {
   return (neuron0x24e3640()*0.219511);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6820() {
   return (neuron0x24e3980()*0.0597078);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6860() {
   return (neuron0x24e3cc0()*0.0476865);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f62f0() {
   return (neuron0x24e4000()*0.00321082);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6330() {
   return (neuron0x24e4560()*0.120002);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f69b0() {
   return (neuron0x24e48a0()*0.0873862);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f69f0() {
   return (neuron0x24e4be0()*0.17986);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6a30() {
   return (neuron0x24e4f20()*-0.00104566);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6a70() {
   return (neuron0x24e5260()*-0.0460433);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6ab0() {
   return (neuron0x24e55a0()*-0.0418291);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6af0() {
   return (neuron0x24e58e0()*0.00777917);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6e70() {
   return (neuron0x24e0c90()*0.00548579);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6eb0() {
   return (neuron0x24e0f40()*-0.000550022);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6ef0() {
   return (neuron0x24e1280()*-0.204171);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6f30() {
   return (neuron0x24e15c0()*0.0915069);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6f70() {
   return (neuron0x24e1900()*0.00260982);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6fb0() {
   return (neuron0x24e1c40()*0.00797236);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6ff0() {
   return (neuron0x24e1f80()*0.00408729);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7030() {
   return (neuron0x24e22c0()*0.00450814);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7070() {
   return (neuron0x24e2600()*-0.0149775);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f70b0() {
   return (neuron0x24e2940()*-0.0160056);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f70f0() {
   return (neuron0x24e2c80()*-0.0108661);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7130() {
   return (neuron0x24e2fc0()*-1.10188);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7170() {
   return (neuron0x24e3300()*0.000799023);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f71b0() {
   return (neuron0x24e3640()*-0.0103618);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f71f0() {
   return (neuron0x24e3980()*0.0148802);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7230() {
   return (neuron0x24e3cc0()*0.00701691);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6cc0() {
   return (neuron0x24e4000()*-0.0118459);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6d00() {
   return (neuron0x24e4560()*-0.00917294);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7380() {
   return (neuron0x24e48a0()*-0.0105306);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f73c0() {
   return (neuron0x24e4be0()*0.00212037);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7400() {
   return (neuron0x24e4f20()*-0.00688999);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7440() {
   return (neuron0x24e5260()*0.00674512);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7480() {
   return (neuron0x24e55a0()*0.00068473);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f74c0() {
   return (neuron0x24e58e0()*0.0507494);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509390() {
   return (neuron0x24e0c90()*-0.136103);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25093d0() {
   return (neuron0x24e0f40()*0.0724035);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509410() {
   return (neuron0x24e1280()*0.0411067);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509450() {
   return (neuron0x24e15c0()*0.134255);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509490() {
   return (neuron0x24e1900()*0.174334);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25094d0() {
   return (neuron0x24e1c40()*-0.654321);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509510() {
   return (neuron0x24e1f80()*0.253151);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509550() {
   return (neuron0x24e22c0()*-0.566908);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509590() {
   return (neuron0x24e2600()*0.00543542);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25095d0() {
   return (neuron0x24e2940()*-0.236782);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509610() {
   return (neuron0x24e2c80()*0.120044);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509650() {
   return (neuron0x24e2fc0()*-0.154339);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509690() {
   return (neuron0x24e3300()*-0.262127);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25096d0() {
   return (neuron0x24e3640()*0.0808201);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509710() {
   return (neuron0x24e3980()*0.227546);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509750() {
   return (neuron0x24e3cc0()*0.12523);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7500() {
   return (neuron0x24e4000()*-0.0829579);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7540() {
   return (neuron0x24e4560()*-0.140906);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25098a0() {
   return (neuron0x24e48a0()*-0.158477);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25098e0() {
   return (neuron0x24e4be0()*-0.21576);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509920() {
   return (neuron0x24e4f20()*-0.0598344);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509960() {
   return (neuron0x24e5260()*0.074684);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25099a0() {
   return (neuron0x24e55a0()*0.0488481);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25099e0() {
   return (neuron0x24e58e0()*0.0903242);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509d60() {
   return (neuron0x24e0c90()*-0.225174);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509da0() {
   return (neuron0x24e0f40()*0.3192);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509de0() {
   return (neuron0x24e1280()*-0.321641);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509e20() {
   return (neuron0x24e15c0()*-0.0746409);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509e60() {
   return (neuron0x24e1900()*-0.193413);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509ea0() {
   return (neuron0x24e1c40()*-0.237584);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509ee0() {
   return (neuron0x24e1f80()*0.083301);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509f20() {
   return (neuron0x24e22c0()*-0.0398944);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509f60() {
   return (neuron0x24e2600()*-0.137963);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509fa0() {
   return (neuron0x24e2940()*0.177455);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509fe0() {
   return (neuron0x24e2c80()*0.264261);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a020() {
   return (neuron0x24e2fc0()*0.0160404);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a060() {
   return (neuron0x24e3300()*-0.387697);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a0a0() {
   return (neuron0x24e3640()*-0.170531);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a0e0() {
   return (neuron0x24e3980()*-0.0269294);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a120() {
   return (neuron0x24e3cc0()*-0.136346);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509bb0() {
   return (neuron0x24e4000()*-0.200776);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509bf0() {
   return (neuron0x24e4560()*0.274039);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a270() {
   return (neuron0x24e48a0()*-0.199801);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a2b0() {
   return (neuron0x24e4be0()*-0.412562);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a2f0() {
   return (neuron0x24e4f20()*0.036178);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a330() {
   return (neuron0x24e5260()*-0.000160391);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a370() {
   return (neuron0x24e55a0()*0.0430082);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a3b0() {
   return (neuron0x24e58e0()*-0.217214);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a730() {
   return (neuron0x24e0c90()*-0.00295087);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a770() {
   return (neuron0x24e0f40()*-0.00435919);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a7b0() {
   return (neuron0x24e1280()*0.18454);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a7f0() {
   return (neuron0x24e15c0()*1.03842);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a830() {
   return (neuron0x24e1900()*0.00681065);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a870() {
   return (neuron0x24e1c40()*-0.0236821);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a8b0() {
   return (neuron0x24e1f80()*0.0274875);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a8f0() {
   return (neuron0x24e22c0()*0.0395016);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a930() {
   return (neuron0x24e2600()*-0.0123936);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a970() {
   return (neuron0x24e2940()*0.0174882);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a9b0() {
   return (neuron0x24e2c80()*0.016098);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a9f0() {
   return (neuron0x24e2fc0()*0.0469948);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250aa30() {
   return (neuron0x24e3300()*-0.0207333);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250aa70() {
   return (neuron0x24e3640()*0.0262384);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250aab0() {
   return (neuron0x24e3980()*0.0231557);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250aaf0() {
   return (neuron0x24e3cc0()*-0.000947154);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a580() {
   return (neuron0x24e4000()*0.0287988);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a5c0() {
   return (neuron0x24e4560()*-0.00245134);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250ac40() {
   return (neuron0x24e48a0()*0.000326456);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250ac80() {
   return (neuron0x24e4be0()*0.0134023);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250acc0() {
   return (neuron0x24e4f20()*-0.00105989);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250ad00() {
   return (neuron0x24e5260()*-0.0017572);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250ad40() {
   return (neuron0x24e55a0()*-0.00760048);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250ad80() {
   return (neuron0x24e58e0()*-0.0219567);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b100() {
   return (neuron0x24e0c90()*0.219862);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b140() {
   return (neuron0x24e0f40()*0.489458);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b180() {
   return (neuron0x24e1280()*0.424562);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b1c0() {
   return (neuron0x24e15c0()*-0.137168);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b200() {
   return (neuron0x24e1900()*-0.296412);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b240() {
   return (neuron0x24e1c40()*0.371888);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b280() {
   return (neuron0x24e1f80()*0.411918);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b2c0() {
   return (neuron0x24e22c0()*-0.530053);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b300() {
   return (neuron0x24e2600()*0.255597);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b340() {
   return (neuron0x24e2940()*-0.255787);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b380() {
   return (neuron0x24e2c80()*0.438728);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b3c0() {
   return (neuron0x24e2fc0()*-0.238552);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b400() {
   return (neuron0x24e3300()*0.0596532);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b440() {
   return (neuron0x24e3640()*-0.0244143);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b480() {
   return (neuron0x24e3980()*0.432972);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b4c0() {
   return (neuron0x24e3cc0()*-0.286629);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250af50() {
   return (neuron0x24e4000()*0.134996);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250af90() {
   return (neuron0x24e4560()*0.122763);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b610() {
   return (neuron0x24e48a0()*-0.50809);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b650() {
   return (neuron0x24e4be0()*0.206427);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b690() {
   return (neuron0x24e4f20()*-0.0733618);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b6d0() {
   return (neuron0x24e5260()*0.438597);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b710() {
   return (neuron0x24e55a0()*-0.443744);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b750() {
   return (neuron0x24e58e0()*0.175756);
}

double NNfunction_ns_chiMinus2_dL::synapse0x22ab5c0() {
   return (neuron0x24e5d50()*0.283093);
}

double NNfunction_ns_chiMinus2_dL::synapse0x22ab600() {
   return (neuron0x24e6590()*-0.0222027);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e8100() {
   return (neuron0x24e7070()*0.262125);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e8140() {
   return (neuron0x24e6b10()*-0.229411);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9bd0() {
   return (neuron0x24e7e50()*0.00238442);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e9c10() {
   return (neuron0x24e9920()*-0.272833);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea9a0() {
   return (neuron0x24ea6f0()*-0.180284);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea9e0() {
   return (neuron0x24eb0c0()*0.107437);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb370() {
   return (neuron0x24eba90()*-0.146206);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eb3b0() {
   return (neuron0x24ec570()*0.101541);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ebd40() {
   return (neuron0x24ecf40()*0.224406);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ebd80() {
   return (neuron0x24ea020()*-0.341108);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec820() {
   return (neuron0x24eeaf0()*0.164404);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ec860() {
   return (neuron0x24ef4c0()*0.125766);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed1f0() {
   return (neuron0x24efe90()*0.303352);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ed230() {
   return (neuron0x24f0860()*-0.115092);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea2d0() {
   return (neuron0x24f2670()*-0.333426);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ea310() {
   return (neuron0x24f2950()*-0.24158);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eeda0() {
   return (neuron0x24f3320()*0.24913);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eede0() {
   return (neuron0x24f3cf0()*-0.346633);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef770() {
   return (neuron0x24f46c0()*0.118012);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ef7b0() {
   return (neuron0x24f5090()*-0.313896);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0140() {
   return (neuron0x24edbe0()*-0.433926);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0180() {
   return (neuron0x24ee5b0()*-0.53441);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0b10() {
   return (neuron0x24f7e20()*-0.495961);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f0b50() {
   return (neuron0x24f87f0()*-0.5029);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e3ba0() {
   return (neuron0x24f91c0()*0.347087);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e3be0() {
   return (neuron0x24f9b90()*-0.00819445);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2c00() {
   return (neuron0x24fa560()*-0.109095);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f2c40() {
   return (neuron0x24faf30()*-0.2091);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f35d0() {
   return (neuron0x24fb900()*0.181614);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3610() {
   return (neuron0x24fc2d0()*-0.295991);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3fa0() {
   return (neuron0x24f2360()*-0.537949);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f3fe0() {
   return (neuron0x24feeb0()*-0.146197);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f4970() {
   return (neuron0x24ff880()*-0.477991);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f49b0() {
   return (neuron0x2500250()*-0.170667);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5340() {
   return (neuron0x2500c20()*-0.108623);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5380() {
   return (neuron0x25015f0()*0.126672);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ede90() {
   return (neuron0x2501fc0()*-0.236925);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24eded0() {
   return (neuron0x2502990()*-0.301484);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7740() {
   return (neuron0x2503360()*0.401712);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f7780() {
   return (neuron0x2503f40()*0.0669111);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f80d0() {
   return (neuron0x2504910()*0.489787);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8110() {
   return (neuron0x24f5790()*0.225399);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8aa0() {
   return (neuron0x24f6160()*-0.241284);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f8ae0() {
   return (neuron0x24f6b30()*0.304834);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9470() {
   return (neuron0x2509170()*-0.124666);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f94b0() {
   return (neuron0x2509a20()*-0.233849);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9e40() {
   return (neuron0x250a3f0()*-0.743914);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f9e80() {
   return (neuron0x250adc0()*-0.00403173);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fc580() {
   return (neuron0x24e5d50()*1.51258);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fc5c0() {
   return (neuron0x24e6590()*0.225278);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f1b40() {
   return (neuron0x24e7070()*-0.380677);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f1b80() {
   return (neuron0x24e6b10()*1.22572);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff160() {
   return (neuron0x24e7e50()*4.44561);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ff1a0() {
   return (neuron0x24e9920()*0.0262877);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ffb30() {
   return (neuron0x24ea6f0()*-1.62169);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24ffb70() {
   return (neuron0x24eb0c0()*-0.00522901);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500500() {
   return (neuron0x24eba90()*-0.915052);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500540() {
   return (neuron0x24ec570()*-0.0232424);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500ed0() {
   return (neuron0x24ecf40()*0.454712);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2500f10() {
   return (neuron0x24ea020()*-0.123754);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25018a0() {
   return (neuron0x24eeaf0()*0.514345);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25018e0() {
   return (neuron0x24ef4c0()*1.47045);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502270() {
   return (neuron0x24efe90()*-1.47098);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25022b0() {
   return (neuron0x24f0860()*1.74351);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502c40() {
   return (neuron0x24f2670()*-1.63661);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2502c80() {
   return (neuron0x24f2950()*-0.0596954);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503610() {
   return (neuron0x24f3320()*0.0439234);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2503650() {
   return (neuron0x24f3cf0()*-4.69568);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25041f0() {
   return (neuron0x24f46c0()*0.193757);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504230() {
   return (neuron0x24f5090()*-0.198538);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504bc0() {
   return (neuron0x24edbe0()*2.4769);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2504c00() {
   return (neuron0x24ee5b0()*0.0585703);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5a40() {
   return (neuron0x24f7e20()*0.0450548);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f5a80() {
   return (neuron0x24f87f0()*0.0832829);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6410() {
   return (neuron0x24f91c0()*-0.158437);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6450() {
   return (neuron0x24f9b90()*0.00517152);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6de0() {
   return (neuron0x24fa560()*0.0802907);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24f6e20() {
   return (neuron0x24faf30()*-2.5404);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509300() {
   return (neuron0x24fb900()*1.29519);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509340() {
   return (neuron0x24fc2d0()*0.361935);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509cd0() {
   return (neuron0x24f2360()*0.0985284);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2509d10() {
   return (neuron0x24feeb0()*0.266172);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a6a0() {
   return (neuron0x24ff880()*0.173805);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250a6e0() {
   return (neuron0x2500250()*-0.160989);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b070() {
   return (neuron0x2500c20()*0.0269054);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b0b0() {
   return (neuron0x25015f0()*0.243804);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6000() {
   return (neuron0x2501fc0()*-0.0437268);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24e6040() {
   return (neuron0x2502990()*-0.446988);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa810() {
   return (neuron0x2503360()*-1.2811);
}

double NNfunction_ns_chiMinus2_dL::synapse0x24fa850() {
   return (neuron0x2503f40()*3.01187);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b790() {
   return (neuron0x2504910()*1.14016);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b7d0() {
   return (neuron0x24f5790()*-0.462791);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b810() {
   return (neuron0x24f6160()*0.300237);
}

double NNfunction_ns_chiMinus2_dL::synapse0x250b850() {
   return (neuron0x24f6b30()*-0.83594);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512700() {
   return (neuron0x2509170()*-0.204768);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512740() {
   return (neuron0x2509a20()*0.21922);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512780() {
   return (neuron0x250a3f0()*-2.13199);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25127c0() {
   return (neuron0x250adc0()*0.0266931);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512b40() {
   return (neuron0x24e5d50()*1.35673);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512b80() {
   return (neuron0x24e6590()*-0.0140403);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512bc0() {
   return (neuron0x24e7070()*0.0838338);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512c00() {
   return (neuron0x24e6b10()*0.166337);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512c40() {
   return (neuron0x24e7e50()*0.423936);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512c80() {
   return (neuron0x24e9920()*-0.00481214);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512cc0() {
   return (neuron0x24ea6f0()*-0.0828863);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512d00() {
   return (neuron0x24eb0c0()*0.0124314);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512d40() {
   return (neuron0x24eba90()*-1.28068);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512d80() {
   return (neuron0x24ec570()*-0.00195198);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512dc0() {
   return (neuron0x24ecf40()*-0.0560743);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512e00() {
   return (neuron0x24ea020()*-0.00128017);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512e40() {
   return (neuron0x24eeaf0()*-1.53135);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512e80() {
   return (neuron0x24ef4c0()*1.53325);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512ec0() {
   return (neuron0x24efe90()*-1.70294);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512f00() {
   return (neuron0x24f0860()*1.99483);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512990() {
   return (neuron0x24f2670()*-2.311);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25129d0() {
   return (neuron0x24f2950()*-0.0148697);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513050() {
   return (neuron0x24f3320()*-0.00842135);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513090() {
   return (neuron0x24f3cf0()*-0.23431);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25130d0() {
   return (neuron0x24f46c0()*-0.699208);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513110() {
   return (neuron0x24f5090()*-0.0160617);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513150() {
   return (neuron0x24edbe0()*3.18955);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513190() {
   return (neuron0x24ee5b0()*-0.0463959);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25131d0() {
   return (neuron0x24f7e20()*-0.00457372);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513210() {
   return (neuron0x24f87f0()*-0.0467127);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513250() {
   return (neuron0x24f91c0()*0.0171176);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513290() {
   return (neuron0x24f9b90()*0.00169571);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25132d0() {
   return (neuron0x24fa560()*-0.018208);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513310() {
   return (neuron0x24faf30()*-0.497531);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513350() {
   return (neuron0x24fb900()*2.02316);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513390() {
   return (neuron0x24fc2d0()*-0.0137422);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512f40() {
   return (neuron0x24f2360()*1.52703);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512f80() {
   return (neuron0x24feeb0()*-0.00699766);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2512fc0() {
   return (neuron0x24ff880()*-0.0223749);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513000() {
   return (neuron0x2500250()*0.00803271);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25135e0() {
   return (neuron0x2500c20()*0.0104707);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513620() {
   return (neuron0x25015f0()*0.00616506);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513660() {
   return (neuron0x2501fc0()*-0.0228461);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25136a0() {
   return (neuron0x2502990()*-0.00557412);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25136e0() {
   return (neuron0x2503360()*0.0417171);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513720() {
   return (neuron0x2503f40()*0.226578);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513760() {
   return (neuron0x2504910()*1.72411);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25137a0() {
   return (neuron0x24f5790()*0.00906324);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25137e0() {
   return (neuron0x24f6160()*0.00384855);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513820() {
   return (neuron0x24f6b30()*-0.71467);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513860() {
   return (neuron0x2509170()*-0.021137);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25138a0() {
   return (neuron0x2509a20()*-0.0321092);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25138e0() {
   return (neuron0x250a3f0()*0.502468);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513920() {
   return (neuron0x250adc0()*-0.00498813);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513ca0() {
   return (neuron0x24e5d50()*0.186179);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513ce0() {
   return (neuron0x24e6590()*-0.0808958);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513d20() {
   return (neuron0x24e7070()*0.225565);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513d60() {
   return (neuron0x24e6b10()*-0.448123);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513da0() {
   return (neuron0x24e7e50()*0.261027);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513de0() {
   return (neuron0x24e9920()*0.203001);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513e20() {
   return (neuron0x24ea6f0()*-0.0477001);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513e60() {
   return (neuron0x24eb0c0()*0.176667);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513ea0() {
   return (neuron0x24eba90()*0.0965648);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513ee0() {
   return (neuron0x24ec570()*-0.174659);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513f20() {
   return (neuron0x24ecf40()*0.179833);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513f60() {
   return (neuron0x24ea020()*0.279884);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513fa0() {
   return (neuron0x24eeaf0()*-0.16478);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513fe0() {
   return (neuron0x24ef4c0()*-0.459897);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514020() {
   return (neuron0x24efe90()*0.149083);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514060() {
   return (neuron0x24f0860()*-0.00530327);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513af0() {
   return (neuron0x24f2670()*-0.779866);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2513b30() {
   return (neuron0x24f2950()*-0.0451726);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25141b0() {
   return (neuron0x24f3320()*-0.0635661);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25141f0() {
   return (neuron0x24f3cf0()*-0.0630363);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514230() {
   return (neuron0x24f46c0()*-0.547705);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514270() {
   return (neuron0x24f5090()*-0.361055);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25142b0() {
   return (neuron0x24edbe0()*-0.538716);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25142f0() {
   return (neuron0x24ee5b0()*0.21824);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514330() {
   return (neuron0x24f7e20()*0.328494);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514370() {
   return (neuron0x24f87f0()*-0.262861);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25143b0() {
   return (neuron0x24f91c0()*0.0889694);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25143f0() {
   return (neuron0x24f9b90()*0.0482077);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514430() {
   return (neuron0x24fa560()*-0.0764898);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514470() {
   return (neuron0x24faf30()*0.178333);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25144b0() {
   return (neuron0x24fb900()*-1.16049);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25144f0() {
   return (neuron0x24fc2d0()*0.272459);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25140a0() {
   return (neuron0x24f2360()*-0.279275);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25140e0() {
   return (neuron0x24feeb0()*0.00529524);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514120() {
   return (neuron0x24ff880()*-0.0402151);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514160() {
   return (neuron0x2500250()*-0.00955699);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514740() {
   return (neuron0x2500c20()*0.325294);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514780() {
   return (neuron0x25015f0()*0.237482);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25147c0() {
   return (neuron0x2501fc0()*-0.218092);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514800() {
   return (neuron0x2502990()*-0.0831212);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514840() {
   return (neuron0x2503360()*-0.0192403);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514880() {
   return (neuron0x2503f40()*0.112226);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25148c0() {
   return (neuron0x2504910()*-1.14793);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514900() {
   return (neuron0x24f5790()*-0.144274);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514940() {
   return (neuron0x24f6160()*0.322738);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514980() {
   return (neuron0x24f6b30()*0.155374);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25149c0() {
   return (neuron0x2509170()*-0.369157);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514a00() {
   return (neuron0x2509a20()*-0.0703927);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514a40() {
   return (neuron0x250a3f0()*-0.520749);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514a80() {
   return (neuron0x250adc0()*-0.0395788);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514e00() {
   return (neuron0x24e5d50()*0.629486);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514e40() {
   return (neuron0x24e6590()*0.490734);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514e80() {
   return (neuron0x24e7070()*0.532819);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514ec0() {
   return (neuron0x24e6b10()*0.0946196);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514f00() {
   return (neuron0x24e7e50()*0.585534);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514f40() {
   return (neuron0x24e9920()*0.642622);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514f80() {
   return (neuron0x24ea6f0()*0.202851);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514fc0() {
   return (neuron0x24eb0c0()*0.636755);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515000() {
   return (neuron0x24eba90()*0.488381);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515040() {
   return (neuron0x24ec570()*0.253929);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515080() {
   return (neuron0x24ecf40()*0.17487);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25150c0() {
   return (neuron0x24ea020()*0.575723);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515100() {
   return (neuron0x24eeaf0()*0.401408);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515140() {
   return (neuron0x24ef4c0()*-0.100438);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515180() {
   return (neuron0x24efe90()*0.488061);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25151c0() {
   return (neuron0x24f0860()*-0.156495);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514c50() {
   return (neuron0x24f2670()*0.503969);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2514c90() {
   return (neuron0x24f2950()*0.217521);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515310() {
   return (neuron0x24f3320()*0.117801);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515350() {
   return (neuron0x24f3cf0()*-0.100442);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515390() {
   return (neuron0x24f46c0()*0.57661);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25153d0() {
   return (neuron0x24f5090()*0.304089);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515410() {
   return (neuron0x24edbe0()*0.266239);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515450() {
   return (neuron0x24ee5b0()*-0.0126694);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515490() {
   return (neuron0x24f7e20()*0.50864);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25154d0() {
   return (neuron0x24f87f0()*-0.0330806);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515510() {
   return (neuron0x24f91c0()*-0.0693105);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515550() {
   return (neuron0x24f9b90()*0.00122398);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515590() {
   return (neuron0x24fa560()*0.510076);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25155d0() {
   return (neuron0x24faf30()*0.0881178);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515610() {
   return (neuron0x24fb900()*0.620245);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515650() {
   return (neuron0x24fc2d0()*0.34898);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515200() {
   return (neuron0x24f2360()*0.188194);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515240() {
   return (neuron0x24feeb0()*0.0748914);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515280() {
   return (neuron0x24ff880()*0.342535);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25152c0() {
   return (neuron0x2500250()*0.471406);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25158a0() {
   return (neuron0x2500c20()*0.246423);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25158e0() {
   return (neuron0x25015f0()*0.13774);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515920() {
   return (neuron0x2501fc0()*0.428267);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515960() {
   return (neuron0x2502990()*0.636691);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25159a0() {
   return (neuron0x2503360()*0.437721);
}

double NNfunction_ns_chiMinus2_dL::synapse0x25159e0() {
   return (neuron0x2503f40()*0.193525);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515a20() {
   return (neuron0x2504910()*0.558294);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515a60() {
   return (neuron0x24f5790()*0.0651734);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515aa0() {
   return (neuron0x24f6160()*0.604276);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515ae0() {
   return (neuron0x24f6b30()*0.547956);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515b20() {
   return (neuron0x2509170()*-0.32343);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515b60() {
   return (neuron0x2509a20()*0.432708);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515ba0() {
   return (neuron0x250a3f0()*0.569641);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515be0() {
   return (neuron0x250adc0()*0.192096);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515e40() {
   return (neuron0x2511fc0()*0.619281);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515e80() {
   return (neuron0x2512360()*-6.83493);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515ec0() {
   return (neuron0x2512800()*-8.60643);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515f00() {
   return (neuron0x2513960()*1.15563);
}

double NNfunction_ns_chiMinus2_dL::synapse0x2515f40() {
   return (neuron0x2514ac0()*4.34109);
}

