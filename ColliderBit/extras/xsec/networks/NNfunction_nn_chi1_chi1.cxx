#include "NNfunction_nn_chi1_chi1.h"
#include <cmath>

double NNfunction_nn_chi1_chi1::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.159)/14.9894;
   input1 = (in1 - 69.4393)/790.794;
   input2 = (in2 - 409.782)/453.529;
   input3 = (in3 - 296.413)/712.103;
   input4 = (in4 - 1017.51)/818.505;
   input5 = (in5 - 921.949)/846.106;
   input6 = (in6 - 926.775)/845.802;
   input7 = (in7 - 918.626)/824.176;
   input8 = (in8 - 919.947)/859.953;
   input9 = (in9 - 914.194)/854.85;
   input10 = (in10 - 905.969)/831.226;
   input11 = (in11 - 916.82)/775.332;
   input12 = (in12 - 933.49)/787.726;
   input13 = (in13 - 714.682)/541.857;
   input14 = (in14 - 919.228)/757.261;
   input15 = (in15 - 927.336)/763.679;
   input16 = (in16 - 625.479)/489.686;
   input17 = (in17 - 939.989)/798.564;
   input18 = (in18 - 939.491)/801.586;
   input19 = (in19 - 935.785)/759.649;
   input20 = (in20 - -236.791)/480.026;
   input21 = (in21 - -303.464)/1019.06;
   input22 = (in22 - -14.1691)/1019.98;
   input23 = (in23 - -39.7596)/611.206;
   switch(index) {
     case 0:
         return neuron0x23da390();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi1_chi1::Value(int index, double* input) {
   input0 = (input[0] - 23.159)/14.9894;
   input1 = (input[1] - 69.4393)/790.794;
   input2 = (input[2] - 409.782)/453.529;
   input3 = (input[3] - 296.413)/712.103;
   input4 = (input[4] - 1017.51)/818.505;
   input5 = (input[5] - 921.949)/846.106;
   input6 = (input[6] - 926.775)/845.802;
   input7 = (input[7] - 918.626)/824.176;
   input8 = (input[8] - 919.947)/859.953;
   input9 = (input[9] - 914.194)/854.85;
   input10 = (input[10] - 905.969)/831.226;
   input11 = (input[11] - 916.82)/775.332;
   input12 = (input[12] - 933.49)/787.726;
   input13 = (input[13] - 714.682)/541.857;
   input14 = (input[14] - 919.228)/757.261;
   input15 = (input[15] - 927.336)/763.679;
   input16 = (input[16] - 625.479)/489.686;
   input17 = (input[17] - 939.989)/798.564;
   input18 = (input[18] - 939.491)/801.586;
   input19 = (input[19] - 935.785)/759.649;
   input20 = (input[20] - -236.791)/480.026;
   input21 = (input[21] - -303.464)/1019.06;
   input22 = (input[22] - -14.1691)/1019.98;
   input23 = (input[23] - -39.7596)/611.206;
   switch(index) {
     case 0:
         return neuron0x23da390();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi1_chi1::neuron0x23a5400() {
   return input0;
}

double NNfunction_nn_chi1_chi1::neuron0x23a56b0() {
   return input1;
}

double NNfunction_nn_chi1_chi1::neuron0x23a59f0() {
   return input2;
}

double NNfunction_nn_chi1_chi1::neuron0x23a5d30() {
   return input3;
}

double NNfunction_nn_chi1_chi1::neuron0x23a6070() {
   return input4;
}

double NNfunction_nn_chi1_chi1::neuron0x23a63b0() {
   return input5;
}

double NNfunction_nn_chi1_chi1::neuron0x23a66f0() {
   return input6;
}

double NNfunction_nn_chi1_chi1::neuron0x23a6a30() {
   return input7;
}

double NNfunction_nn_chi1_chi1::neuron0x23a6d70() {
   return input8;
}

double NNfunction_nn_chi1_chi1::neuron0x23a70b0() {
   return input9;
}

double NNfunction_nn_chi1_chi1::neuron0x23a73f0() {
   return input10;
}

double NNfunction_nn_chi1_chi1::neuron0x23a7730() {
   return input11;
}

double NNfunction_nn_chi1_chi1::neuron0x23a7a70() {
   return input12;
}

double NNfunction_nn_chi1_chi1::neuron0x23a7db0() {
   return input13;
}

double NNfunction_nn_chi1_chi1::neuron0x23a80f0() {
   return input14;
}

double NNfunction_nn_chi1_chi1::neuron0x23a8430() {
   return input15;
}

double NNfunction_nn_chi1_chi1::neuron0x23a8770() {
   return input16;
}

double NNfunction_nn_chi1_chi1::neuron0x23a8cd0() {
   return input17;
}

double NNfunction_nn_chi1_chi1::neuron0x23a9010() {
   return input18;
}

double NNfunction_nn_chi1_chi1::neuron0x23a9350() {
   return input19;
}

double NNfunction_nn_chi1_chi1::neuron0x23a9690() {
   return input20;
}

double NNfunction_nn_chi1_chi1::neuron0x23a99d0() {
   return input21;
}

double NNfunction_nn_chi1_chi1::neuron0x23a9d10() {
   return input22;
}

double NNfunction_nn_chi1_chi1::neuron0x23aa050() {
   return input23;
}

double NNfunction_nn_chi1_chi1::input0x23aa4c0() {
   double input = -0.385164;
   input += synapse0x23aa800();
   input += synapse0x23aa840();
   input += synapse0x23aa880();
   input += synapse0x23aa8c0();
   input += synapse0x23aa900();
   input += synapse0x23aa940();
   input += synapse0x23aa980();
   input += synapse0x23aa9c0();
   input += synapse0x23aaa00();
   input += synapse0x23aaa40();
   input += synapse0x23aaa80();
   input += synapse0x23aaac0();
   input += synapse0x23aab00();
   input += synapse0x23aab40();
   input += synapse0x23aab80();
   input += synapse0x23aabc0();
   input += synapse0x23aa650();
   input += synapse0x23aa690();
   input += synapse0x2161740();
   input += synapse0x2161780();
   input += synapse0x23aac00();
   input += synapse0x23aac40();
   input += synapse0x23aac80();
   input += synapse0x23aacc0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23aa4c0() {
   double input = input0x23aa4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23aad00() {
   double input = 1.49571;
   input += synapse0x23ab040();
   input += synapse0x23ab080();
   input += synapse0x23ab0c0();
   input += synapse0x23ab100();
   input += synapse0x23ab140();
   input += synapse0x23ab180();
   input += synapse0x23ab1c0();
   input += synapse0x23ab200();
   input += synapse0x23ab240();
   input += synapse0x2161590();
   input += synapse0x21615d0();
   input += synapse0x2161610();
   input += synapse0x2161650();
   input += synapse0x23ab490();
   input += synapse0x23ab4d0();
   input += synapse0x23ab510();
   input += synapse0x23aae90();
   input += synapse0x23aaed0();
   input += synapse0x23ab660();
   input += synapse0x23ab6a0();
   input += synapse0x23ab6e0();
   input += synapse0x23ab720();
   input += synapse0x23ab760();
   input += synapse0x23ab7a0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23aad00() {
   double input = input0x23aad00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23ab7e0() {
   double input = -1.05985;
   input += synapse0x23abb20();
   input += synapse0x23abb60();
   input += synapse0x23abba0();
   input += synapse0x23abbe0();
   input += synapse0x23abc20();
   input += synapse0x23abc60();
   input += synapse0x23abca0();
   input += synapse0x23abce0();
   input += synapse0x23abd20();
   input += synapse0x23abd60();
   input += synapse0x23abda0();
   input += synapse0x23abde0();
   input += synapse0x23abe20();
   input += synapse0x23abe60();
   input += synapse0x23abea0();
   input += synapse0x23abee0();
   input += synapse0x23ab970();
   input += synapse0x23ab9b0();
   input += synapse0x216f4a0();
   input += synapse0x216f4e0();
   input += synapse0x23ade10();
   input += synapse0x23ade50();
   input += synapse0x23a5140();
   input += synapse0x23a5180();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23ab7e0() {
   double input = input0x23ab7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x216fc00() {
   double input = -0.196068;
   input += synapse0x216fd90();
   input += synapse0x23ab3a0();
   input += synapse0x23ab3e0();
   input += synapse0x23ab420();
   input += synapse0x23ac030();
   input += synapse0x23ac070();
   input += synapse0x23ac0b0();
   input += synapse0x23ac0f0();
   input += synapse0x23ac130();
   input += synapse0x23ac170();
   input += synapse0x23ac1b0();
   input += synapse0x23ac1f0();
   input += synapse0x23ac230();
   input += synapse0x23ac270();
   input += synapse0x23ac2b0();
   input += synapse0x23ac2f0();
   input += synapse0x23a51c0();
   input += synapse0x23a5200();
   input += synapse0x23ac440();
   input += synapse0x23ac480();
   input += synapse0x23ac4c0();
   input += synapse0x23ac500();
   input += synapse0x23ac540();
   input += synapse0x23ac580();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x216fc00() {
   double input = input0x216fc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23ac5c0() {
   double input = -0.470258;
   input += synapse0x23ac900();
   input += synapse0x23ac940();
   input += synapse0x23ac980();
   input += synapse0x23ac9c0();
   input += synapse0x23aca00();
   input += synapse0x23aca40();
   input += synapse0x23aca80();
   input += synapse0x23acac0();
   input += synapse0x23acb00();
   input += synapse0x23acb40();
   input += synapse0x23acb80();
   input += synapse0x23acbc0();
   input += synapse0x23acc00();
   input += synapse0x23acc40();
   input += synapse0x23acc80();
   input += synapse0x23accc0();
   input += synapse0x23ace10();
   input += synapse0x23ac750();
   input += synapse0x23ac790();
   input += synapse0x23adf50();
   input += synapse0x23adf90();
   input += synapse0x23adfd0();
   input += synapse0x23ae010();
   input += synapse0x23ae050();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23ac5c0() {
   double input = input0x23ac5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23ae090() {
   double input = 0.879327;
   input += synapse0x23ae3d0();
   input += synapse0x23ae410();
   input += synapse0x23ae450();
   input += synapse0x23ae490();
   input += synapse0x23ae4d0();
   input += synapse0x23ae510();
   input += synapse0x23ae550();
   input += synapse0x23ae590();
   input += synapse0x23ae5d0();
   input += synapse0x216f7f0();
   input += synapse0x216f830();
   input += synapse0x216f870();
   input += synapse0x216f8b0();
   input += synapse0x216f8f0();
   input += synapse0x216f930();
   input += synapse0x216f970();
   input += synapse0x23ae220();
   input += synapse0x23ae260();
   input += synapse0x216fac0();
   input += synapse0x216fb00();
   input += synapse0x216fb40();
   input += synapse0x216fb80();
   input += synapse0x216fbc0();
   input += synapse0x23aee20();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23ae090() {
   double input = input0x23ae090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23aee60() {
   double input = 0.734061;
   input += synapse0x23af1a0();
   input += synapse0x23af1e0();
   input += synapse0x23af220();
   input += synapse0x23af260();
   input += synapse0x23af2a0();
   input += synapse0x23af2e0();
   input += synapse0x23af320();
   input += synapse0x23af360();
   input += synapse0x23af3a0();
   input += synapse0x23af3e0();
   input += synapse0x23af420();
   input += synapse0x23af460();
   input += synapse0x23af4a0();
   input += synapse0x23af4e0();
   input += synapse0x23af520();
   input += synapse0x23af560();
   input += synapse0x23aeff0();
   input += synapse0x23af030();
   input += synapse0x23af6b0();
   input += synapse0x23af6f0();
   input += synapse0x23af730();
   input += synapse0x23af770();
   input += synapse0x23af7b0();
   input += synapse0x23af7f0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23aee60() {
   double input = input0x23aee60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23af830() {
   double input = -0.963371;
   input += synapse0x23afb70();
   input += synapse0x23afbb0();
   input += synapse0x23afbf0();
   input += synapse0x23afc30();
   input += synapse0x23afc70();
   input += synapse0x23afcb0();
   input += synapse0x23afcf0();
   input += synapse0x23afd30();
   input += synapse0x23afd70();
   input += synapse0x23afdb0();
   input += synapse0x23afdf0();
   input += synapse0x23afe30();
   input += synapse0x23afe70();
   input += synapse0x23afeb0();
   input += synapse0x23afef0();
   input += synapse0x23aff30();
   input += synapse0x23af9c0();
   input += synapse0x23afa00();
   input += synapse0x23b0080();
   input += synapse0x23b00c0();
   input += synapse0x23b0100();
   input += synapse0x23b0140();
   input += synapse0x23b0180();
   input += synapse0x23b01c0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23af830() {
   double input = input0x23af830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23b0200() {
   double input = -0.43563;
   input += synapse0x23a8bc0();
   input += synapse0x23a8c00();
   input += synapse0x23a8c40();
   input += synapse0x23a8c80();
   input += synapse0x23b0750();
   input += synapse0x23b0790();
   input += synapse0x23b07d0();
   input += synapse0x23b0810();
   input += synapse0x23b0850();
   input += synapse0x23b0890();
   input += synapse0x23b08d0();
   input += synapse0x23b0910();
   input += synapse0x23b0950();
   input += synapse0x23b0990();
   input += synapse0x23b09d0();
   input += synapse0x23b0a10();
   input += synapse0x23b0390();
   input += synapse0x23b03d0();
   input += synapse0x23b0b60();
   input += synapse0x23b0ba0();
   input += synapse0x23b0be0();
   input += synapse0x23b0c20();
   input += synapse0x23b0c60();
   input += synapse0x23b0ca0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23b0200() {
   double input = input0x23b0200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23b0ce0() {
   double input = 0.505696;
   input += synapse0x23b1020();
   input += synapse0x23b1060();
   input += synapse0x23b10a0();
   input += synapse0x23b10e0();
   input += synapse0x23b1120();
   input += synapse0x23b1160();
   input += synapse0x23b11a0();
   input += synapse0x23b11e0();
   input += synapse0x23b1220();
   input += synapse0x23b1260();
   input += synapse0x23b12a0();
   input += synapse0x23b12e0();
   input += synapse0x23b1320();
   input += synapse0x23b1360();
   input += synapse0x23b13a0();
   input += synapse0x23b13e0();
   input += synapse0x23b0e70();
   input += synapse0x23b0eb0();
   input += synapse0x23b1530();
   input += synapse0x23b1570();
   input += synapse0x23b15b0();
   input += synapse0x23b15f0();
   input += synapse0x23b1630();
   input += synapse0x23b1670();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23b0ce0() {
   double input = input0x23b0ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23b16b0() {
   double input = -0.315783;
   input += synapse0x23b19f0();
   input += synapse0x23b1a30();
   input += synapse0x23b1a70();
   input += synapse0x23b1ab0();
   input += synapse0x23b1af0();
   input += synapse0x23b1b30();
   input += synapse0x23b1b70();
   input += synapse0x23b1bb0();
   input += synapse0x23b1bf0();
   input += synapse0x23b1c30();
   input += synapse0x23b1c70();
   input += synapse0x23b1cb0();
   input += synapse0x23b1cf0();
   input += synapse0x23b1d30();
   input += synapse0x23b1d70();
   input += synapse0x23b1db0();
   input += synapse0x23b1840();
   input += synapse0x23b1880();
   input += synapse0x23ae610();
   input += synapse0x23ae650();
   input += synapse0x23ae690();
   input += synapse0x23ae6d0();
   input += synapse0x23ae710();
   input += synapse0x23ae750();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23b16b0() {
   double input = input0x23b16b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23ae790() {
   double input = -2.11908;
   input += synapse0x23aead0();
   input += synapse0x23aeb10();
   input += synapse0x23aeb50();
   input += synapse0x23aeb90();
   input += synapse0x23aebd0();
   input += synapse0x23aec10();
   input += synapse0x23aec50();
   input += synapse0x23aec90();
   input += synapse0x23aecd0();
   input += synapse0x23aed10();
   input += synapse0x23aed50();
   input += synapse0x23aed90();
   input += synapse0x23aedd0();
   input += synapse0x23b2f10();
   input += synapse0x23b2f50();
   input += synapse0x23b2f90();
   input += synapse0x23ae920();
   input += synapse0x23ae960();
   input += synapse0x23b30e0();
   input += synapse0x23b3120();
   input += synapse0x23b3160();
   input += synapse0x23b31a0();
   input += synapse0x23b31e0();
   input += synapse0x23b3220();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23ae790() {
   double input = input0x23ae790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23b3260() {
   double input = -0.737049;
   input += synapse0x23b35a0();
   input += synapse0x23b35e0();
   input += synapse0x23b3620();
   input += synapse0x23b3660();
   input += synapse0x23b36a0();
   input += synapse0x23b36e0();
   input += synapse0x23b3720();
   input += synapse0x23b3760();
   input += synapse0x23b37a0();
   input += synapse0x23b37e0();
   input += synapse0x23b3820();
   input += synapse0x23b3860();
   input += synapse0x23b38a0();
   input += synapse0x23b38e0();
   input += synapse0x23b3920();
   input += synapse0x23b3960();
   input += synapse0x23b33f0();
   input += synapse0x23b3430();
   input += synapse0x23b3ab0();
   input += synapse0x23b3af0();
   input += synapse0x23b3b30();
   input += synapse0x23b3b70();
   input += synapse0x23b3bb0();
   input += synapse0x23b3bf0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23b3260() {
   double input = input0x23b3260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23b3c30() {
   double input = 1.2825;
   input += synapse0x23b3f70();
   input += synapse0x23b3fb0();
   input += synapse0x23b3ff0();
   input += synapse0x23b4030();
   input += synapse0x23b4070();
   input += synapse0x23b40b0();
   input += synapse0x23b40f0();
   input += synapse0x23b4130();
   input += synapse0x23b4170();
   input += synapse0x23b41b0();
   input += synapse0x23b41f0();
   input += synapse0x23b4230();
   input += synapse0x23b4270();
   input += synapse0x23b42b0();
   input += synapse0x23b42f0();
   input += synapse0x23b4330();
   input += synapse0x23b3dc0();
   input += synapse0x23b3e00();
   input += synapse0x23b4480();
   input += synapse0x23b44c0();
   input += synapse0x23b4500();
   input += synapse0x23b4540();
   input += synapse0x23b4580();
   input += synapse0x23b45c0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23b3c30() {
   double input = input0x23b3c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23b4600() {
   double input = -1.74401;
   input += synapse0x23b4940();
   input += synapse0x23b4980();
   input += synapse0x23b49c0();
   input += synapse0x23b4a00();
   input += synapse0x23b4a40();
   input += synapse0x23b4a80();
   input += synapse0x23b4ac0();
   input += synapse0x23b4b00();
   input += synapse0x23b4b40();
   input += synapse0x23b4b80();
   input += synapse0x23b4bc0();
   input += synapse0x23b4c00();
   input += synapse0x23b4c40();
   input += synapse0x23b4c80();
   input += synapse0x23b4cc0();
   input += synapse0x23b4d00();
   input += synapse0x23b4790();
   input += synapse0x23b47d0();
   input += synapse0x23b4e50();
   input += synapse0x23b4e90();
   input += synapse0x23b4ed0();
   input += synapse0x23b4f10();
   input += synapse0x23b4f50();
   input += synapse0x23b4f90();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23b4600() {
   double input = input0x23b4600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23b4fd0() {
   double input = -2.1422;
   input += synapse0x23b5310();
   input += synapse0x23a5590();
   input += synapse0x23a55d0();
   input += synapse0x23a58d0();
   input += synapse0x23a5910();
   input += synapse0x23a5c10();
   input += synapse0x23a5c50();
   input += synapse0x23a5f50();
   input += synapse0x23a5f90();
   input += synapse0x23a6290();
   input += synapse0x23a62d0();
   input += synapse0x23a65d0();
   input += synapse0x23a6610();
   input += synapse0x23a6910();
   input += synapse0x23a6950();
   input += synapse0x23a6c50();
   input += synapse0x23a6c90();
   input += synapse0x23a6f90();
   input += synapse0x23a6fd0();
   input += synapse0x23a72d0();
   input += synapse0x23a7310();
   input += synapse0x23a7610();
   input += synapse0x23a7650();
   input += synapse0x23a7950();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23b4fd0() {
   double input = input0x23b4fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23b6de0() {
   double input = -0.889765;
   input += synapse0x23a7990();
   input += synapse0x23a8650();
   input += synapse0x23a8690();
   input += synapse0x23b5160();
   input += synapse0x23b51a0();
   input += synapse0x23a8990();
   input += synapse0x23a89d0();
   input += synapse0x23a8ef0();
   input += synapse0x23a8f30();
   input += synapse0x23a9230();
   input += synapse0x23a9270();
   input += synapse0x23a9570();
   input += synapse0x23a95b0();
   input += synapse0x23a98b0();
   input += synapse0x23a98f0();
   input += synapse0x23a9bf0();
   input += synapse0x23a9c30();
   input += synapse0x23a9f30();
   input += synapse0x23a9f70();
   input += synapse0x23aa270();
   input += synapse0x23aa2b0();
   input += synapse0x23a7c90();
   input += synapse0x23a7cd0();
   input += synapse0x23b7080();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23b6de0() {
   double input = input0x23b6de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23b70c0() {
   double input = 0.15223;
   input += synapse0x23b7400();
   input += synapse0x23b7440();
   input += synapse0x23b7480();
   input += synapse0x23b74c0();
   input += synapse0x23b7500();
   input += synapse0x23b7540();
   input += synapse0x23b7580();
   input += synapse0x23b75c0();
   input += synapse0x23b7600();
   input += synapse0x23b7640();
   input += synapse0x23b7680();
   input += synapse0x23b76c0();
   input += synapse0x23b7700();
   input += synapse0x23b7740();
   input += synapse0x23b7780();
   input += synapse0x23b77c0();
   input += synapse0x23b7250();
   input += synapse0x23b7290();
   input += synapse0x23b7910();
   input += synapse0x23b7950();
   input += synapse0x23b7990();
   input += synapse0x23b79d0();
   input += synapse0x23b7a10();
   input += synapse0x23b7a50();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23b70c0() {
   double input = input0x23b70c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23b7a90() {
   double input = 0.266378;
   input += synapse0x23b7dd0();
   input += synapse0x23b7e10();
   input += synapse0x23b7e50();
   input += synapse0x23b7e90();
   input += synapse0x23b7ed0();
   input += synapse0x23b7f10();
   input += synapse0x23b7f50();
   input += synapse0x23b7f90();
   input += synapse0x23b7fd0();
   input += synapse0x23b8010();
   input += synapse0x23b8050();
   input += synapse0x23b8090();
   input += synapse0x23b80d0();
   input += synapse0x23b8110();
   input += synapse0x23b8150();
   input += synapse0x23b8190();
   input += synapse0x23b7c20();
   input += synapse0x23b7c60();
   input += synapse0x23b82e0();
   input += synapse0x23b8320();
   input += synapse0x23b8360();
   input += synapse0x23b83a0();
   input += synapse0x23b83e0();
   input += synapse0x23b8420();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23b7a90() {
   double input = input0x23b7a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23b8460() {
   double input = 2.6546;
   input += synapse0x23b87a0();
   input += synapse0x23b87e0();
   input += synapse0x23b8820();
   input += synapse0x23b8860();
   input += synapse0x23b88a0();
   input += synapse0x23b88e0();
   input += synapse0x23b8920();
   input += synapse0x23b8960();
   input += synapse0x23b89a0();
   input += synapse0x23b89e0();
   input += synapse0x23b8a20();
   input += synapse0x23b8a60();
   input += synapse0x23b8aa0();
   input += synapse0x23b8ae0();
   input += synapse0x23b8b20();
   input += synapse0x23b8b60();
   input += synapse0x23b85f0();
   input += synapse0x23b8630();
   input += synapse0x23b8cb0();
   input += synapse0x23b8cf0();
   input += synapse0x23b8d30();
   input += synapse0x23b8d70();
   input += synapse0x23b8db0();
   input += synapse0x23b8df0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23b8460() {
   double input = input0x23b8460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23b8e30() {
   double input = 0.445645;
   input += synapse0x23b9170();
   input += synapse0x23b91b0();
   input += synapse0x23b91f0();
   input += synapse0x23b9230();
   input += synapse0x23b9270();
   input += synapse0x23b92b0();
   input += synapse0x23b92f0();
   input += synapse0x23b9330();
   input += synapse0x23b9370();
   input += synapse0x23b93b0();
   input += synapse0x23b93f0();
   input += synapse0x23b9430();
   input += synapse0x23b9470();
   input += synapse0x23b94b0();
   input += synapse0x23b94f0();
   input += synapse0x23b9530();
   input += synapse0x23b8fc0();
   input += synapse0x23b9000();
   input += synapse0x23b9680();
   input += synapse0x23b96c0();
   input += synapse0x23b9700();
   input += synapse0x23b9740();
   input += synapse0x23b9780();
   input += synapse0x23b97c0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23b8e30() {
   double input = input0x23b8e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23b9800() {
   double input = 1.62715;
   input += synapse0x23b9b40();
   input += synapse0x23b9b80();
   input += synapse0x23b9bc0();
   input += synapse0x23b9c00();
   input += synapse0x23b9c40();
   input += synapse0x23b9c80();
   input += synapse0x23b9cc0();
   input += synapse0x23b9d00();
   input += synapse0x23b9d40();
   input += synapse0x23b1f00();
   input += synapse0x23b1f40();
   input += synapse0x23b1f80();
   input += synapse0x23b1fc0();
   input += synapse0x23b2000();
   input += synapse0x23b2040();
   input += synapse0x23b2080();
   input += synapse0x23b9990();
   input += synapse0x23b99d0();
   input += synapse0x23b21d0();
   input += synapse0x23b2210();
   input += synapse0x23b2250();
   input += synapse0x23b2290();
   input += synapse0x23b22d0();
   input += synapse0x23b2310();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23b9800() {
   double input = input0x23b9800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23b2350() {
   double input = -0.608574;
   input += synapse0x23b2690();
   input += synapse0x23b26d0();
   input += synapse0x23b2710();
   input += synapse0x23b2750();
   input += synapse0x23b2790();
   input += synapse0x23b27d0();
   input += synapse0x23b2810();
   input += synapse0x23b2850();
   input += synapse0x23b2890();
   input += synapse0x23b28d0();
   input += synapse0x23b2910();
   input += synapse0x23b2950();
   input += synapse0x23b2990();
   input += synapse0x23b29d0();
   input += synapse0x23b2a10();
   input += synapse0x23b2a50();
   input += synapse0x23b24e0();
   input += synapse0x23b2520();
   input += synapse0x23b2ba0();
   input += synapse0x23b2be0();
   input += synapse0x23b2c20();
   input += synapse0x23b2c60();
   input += synapse0x23b2ca0();
   input += synapse0x23b2ce0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23b2350() {
   double input = input0x23b2350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23b2d20() {
   double input = -2.35546;
   input += synapse0x23b2eb0();
   input += synapse0x23bbf40();
   input += synapse0x23bbf80();
   input += synapse0x23bbfc0();
   input += synapse0x23bc000();
   input += synapse0x23bc040();
   input += synapse0x23bc080();
   input += synapse0x23bc0c0();
   input += synapse0x23bc100();
   input += synapse0x23bc140();
   input += synapse0x23bc180();
   input += synapse0x23bc1c0();
   input += synapse0x23bc200();
   input += synapse0x23bc240();
   input += synapse0x23bc280();
   input += synapse0x23bc2c0();
   input += synapse0x23bbd90();
   input += synapse0x23bbdd0();
   input += synapse0x23bc410();
   input += synapse0x23bc450();
   input += synapse0x23bc490();
   input += synapse0x23bc4d0();
   input += synapse0x23bc510();
   input += synapse0x23bc550();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23b2d20() {
   double input = input0x23b2d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23bc590() {
   double input = 0.747637;
   input += synapse0x23bc8d0();
   input += synapse0x23bc910();
   input += synapse0x23bc950();
   input += synapse0x23bc990();
   input += synapse0x23bc9d0();
   input += synapse0x23bca10();
   input += synapse0x23bca50();
   input += synapse0x23bca90();
   input += synapse0x23bcad0();
   input += synapse0x23bcb10();
   input += synapse0x23bcb50();
   input += synapse0x23bcb90();
   input += synapse0x23bcbd0();
   input += synapse0x23bcc10();
   input += synapse0x23bcc50();
   input += synapse0x23bcc90();
   input += synapse0x23bc720();
   input += synapse0x23bc760();
   input += synapse0x23bcde0();
   input += synapse0x23bce20();
   input += synapse0x23bce60();
   input += synapse0x23bcea0();
   input += synapse0x23bcee0();
   input += synapse0x23bcf20();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23bc590() {
   double input = input0x23bc590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23bcf60() {
   double input = -0.524199;
   input += synapse0x23bd2a0();
   input += synapse0x23bd2e0();
   input += synapse0x23bd320();
   input += synapse0x23bd360();
   input += synapse0x23bd3a0();
   input += synapse0x23bd3e0();
   input += synapse0x23bd420();
   input += synapse0x23bd460();
   input += synapse0x23bd4a0();
   input += synapse0x23bd4e0();
   input += synapse0x23bd520();
   input += synapse0x23bd560();
   input += synapse0x23bd5a0();
   input += synapse0x23bd5e0();
   input += synapse0x23bd620();
   input += synapse0x23bd660();
   input += synapse0x23bd0f0();
   input += synapse0x23bd130();
   input += synapse0x23bd7b0();
   input += synapse0x23bd7f0();
   input += synapse0x23bd830();
   input += synapse0x23bd870();
   input += synapse0x23bd8b0();
   input += synapse0x23bd8f0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23bcf60() {
   double input = input0x23bcf60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23bd930() {
   double input = 2.22569;
   input += synapse0x23bdc70();
   input += synapse0x23bdcb0();
   input += synapse0x23bdcf0();
   input += synapse0x23bdd30();
   input += synapse0x23bdd70();
   input += synapse0x23bddb0();
   input += synapse0x23bddf0();
   input += synapse0x23bde30();
   input += synapse0x23bde70();
   input += synapse0x23bdeb0();
   input += synapse0x23bdef0();
   input += synapse0x23bdf30();
   input += synapse0x23bdf70();
   input += synapse0x23bdfb0();
   input += synapse0x23bdff0();
   input += synapse0x23be030();
   input += synapse0x23bdac0();
   input += synapse0x23bdb00();
   input += synapse0x23be180();
   input += synapse0x23be1c0();
   input += synapse0x23be200();
   input += synapse0x23be240();
   input += synapse0x23be280();
   input += synapse0x23be2c0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23bd930() {
   double input = input0x23bd930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23be300() {
   double input = -0.00135435;
   input += synapse0x23be640();
   input += synapse0x23be680();
   input += synapse0x23be6c0();
   input += synapse0x23be700();
   input += synapse0x23be740();
   input += synapse0x23be780();
   input += synapse0x23be7c0();
   input += synapse0x23be800();
   input += synapse0x23be840();
   input += synapse0x23be880();
   input += synapse0x23be8c0();
   input += synapse0x23be900();
   input += synapse0x23be940();
   input += synapse0x23be980();
   input += synapse0x23be9c0();
   input += synapse0x23bea00();
   input += synapse0x23be490();
   input += synapse0x23be4d0();
   input += synapse0x23beb50();
   input += synapse0x23beb90();
   input += synapse0x23bebd0();
   input += synapse0x23bec10();
   input += synapse0x23bec50();
   input += synapse0x23bec90();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23be300() {
   double input = input0x23be300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23becd0() {
   double input = 1.46497;
   input += synapse0x23bf010();
   input += synapse0x23bf050();
   input += synapse0x23bf090();
   input += synapse0x23bf0d0();
   input += synapse0x23bf110();
   input += synapse0x23bf150();
   input += synapse0x23bf190();
   input += synapse0x23bf1d0();
   input += synapse0x23bf210();
   input += synapse0x23bf250();
   input += synapse0x23bf290();
   input += synapse0x23bf2d0();
   input += synapse0x23bf310();
   input += synapse0x23bf350();
   input += synapse0x23bf390();
   input += synapse0x23bf3d0();
   input += synapse0x23bee60();
   input += synapse0x23beea0();
   input += synapse0x23bf520();
   input += synapse0x23bf560();
   input += synapse0x23bf5a0();
   input += synapse0x23bf5e0();
   input += synapse0x23bf620();
   input += synapse0x23bf660();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23becd0() {
   double input = input0x23becd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23bf6a0() {
   double input = 0.52948;
   input += synapse0x23bf9e0();
   input += synapse0x23bfa20();
   input += synapse0x23bfa60();
   input += synapse0x23bfaa0();
   input += synapse0x23bfae0();
   input += synapse0x23bfb20();
   input += synapse0x23bfb60();
   input += synapse0x23bfba0();
   input += synapse0x23bfbe0();
   input += synapse0x23bfc20();
   input += synapse0x23bfc60();
   input += synapse0x23bfca0();
   input += synapse0x23bfce0();
   input += synapse0x23bfd20();
   input += synapse0x23bfd60();
   input += synapse0x23bfda0();
   input += synapse0x23bf830();
   input += synapse0x23bf870();
   input += synapse0x23bfef0();
   input += synapse0x23bff30();
   input += synapse0x23bff70();
   input += synapse0x23bffb0();
   input += synapse0x23bfff0();
   input += synapse0x23c0030();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23bf6a0() {
   double input = input0x23bf6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23c0070() {
   double input = -0.0796264;
   input += synapse0x23c03b0();
   input += synapse0x23c03f0();
   input += synapse0x23c0430();
   input += synapse0x23c0470();
   input += synapse0x23c04b0();
   input += synapse0x23c04f0();
   input += synapse0x23c0530();
   input += synapse0x23c0570();
   input += synapse0x23c05b0();
   input += synapse0x23c05f0();
   input += synapse0x23c0630();
   input += synapse0x23c0670();
   input += synapse0x23c06b0();
   input += synapse0x23c06f0();
   input += synapse0x23c0730();
   input += synapse0x23c0770();
   input += synapse0x23c0200();
   input += synapse0x23c0240();
   input += synapse0x23c08c0();
   input += synapse0x23c0900();
   input += synapse0x23c0940();
   input += synapse0x23c0980();
   input += synapse0x23c09c0();
   input += synapse0x23c0a00();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23c0070() {
   double input = input0x23c0070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23c0a40() {
   double input = -0.673106;
   input += synapse0x23c0d80();
   input += synapse0x23b5350();
   input += synapse0x23b5390();
   input += synapse0x23b53d0();
   input += synapse0x23b5620();
   input += synapse0x23b5660();
   input += synapse0x23b56a0();
   input += synapse0x23b58f0();
   input += synapse0x23b5930();
   input += synapse0x23b5b80();
   input += synapse0x23b5bc0();
   input += synapse0x23b5c00();
   input += synapse0x23b5e50();
   input += synapse0x23b5e90();
   input += synapse0x23b60e0();
   input += synapse0x23b6120();
   input += synapse0x23c0bd0();
   input += synapse0x23c0c10();
   input += synapse0x23b6270();
   input += synapse0x23b6780();
   input += synapse0x23b67c0();
   input += synapse0x23b6800();
   input += synapse0x23b6a50();
   input += synapse0x23b6a90();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23c0a40() {
   double input = input0x23c0a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23b6ad0() {
   double input = -8.37003;
   input += synapse0x23b6340();
   input += synapse0x23b6380();
   input += synapse0x23b63c0();
   input += synapse0x23b6400();
   input += synapse0x23b6d80();
   input += synapse0x23c30d0();
   input += synapse0x23c3110();
   input += synapse0x23c3150();
   input += synapse0x23c3190();
   input += synapse0x23c31d0();
   input += synapse0x23c3210();
   input += synapse0x23c3250();
   input += synapse0x23c3290();
   input += synapse0x23c32d0();
   input += synapse0x23c3310();
   input += synapse0x23c3350();
   input += synapse0x23b6c60();
   input += synapse0x23b6ca0();
   input += synapse0x23c34a0();
   input += synapse0x23c34e0();
   input += synapse0x23c3520();
   input += synapse0x23c3560();
   input += synapse0x23c35a0();
   input += synapse0x23c35e0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23b6ad0() {
   double input = input0x23b6ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23c3620() {
   double input = -2.25709;
   input += synapse0x23c3960();
   input += synapse0x23c39a0();
   input += synapse0x23c39e0();
   input += synapse0x23c3a20();
   input += synapse0x23c3a60();
   input += synapse0x23c3aa0();
   input += synapse0x23c3ae0();
   input += synapse0x23c3b20();
   input += synapse0x23c3b60();
   input += synapse0x23c3ba0();
   input += synapse0x23c3be0();
   input += synapse0x23c3c20();
   input += synapse0x23c3c60();
   input += synapse0x23c3ca0();
   input += synapse0x23c3ce0();
   input += synapse0x23c3d20();
   input += synapse0x23c37b0();
   input += synapse0x23c37f0();
   input += synapse0x23c3e70();
   input += synapse0x23c3eb0();
   input += synapse0x23c3ef0();
   input += synapse0x23c3f30();
   input += synapse0x23c3f70();
   input += synapse0x23c3fb0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23c3620() {
   double input = input0x23c3620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23c3ff0() {
   double input = -2.34418;
   input += synapse0x23c4330();
   input += synapse0x23c4370();
   input += synapse0x23c43b0();
   input += synapse0x23c43f0();
   input += synapse0x23c4430();
   input += synapse0x23c4470();
   input += synapse0x23c44b0();
   input += synapse0x23c44f0();
   input += synapse0x23c4530();
   input += synapse0x23c4570();
   input += synapse0x23c45b0();
   input += synapse0x23c45f0();
   input += synapse0x23c4630();
   input += synapse0x23c4670();
   input += synapse0x23c46b0();
   input += synapse0x23c46f0();
   input += synapse0x23c4180();
   input += synapse0x23c41c0();
   input += synapse0x23c4840();
   input += synapse0x23c4880();
   input += synapse0x23c48c0();
   input += synapse0x23c4900();
   input += synapse0x23c4940();
   input += synapse0x23c4980();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23c3ff0() {
   double input = input0x23c3ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23c49c0() {
   double input = 0.207483;
   input += synapse0x23c4d00();
   input += synapse0x23c4d40();
   input += synapse0x23c4d80();
   input += synapse0x23c4dc0();
   input += synapse0x23c4e00();
   input += synapse0x23c4e40();
   input += synapse0x23c4e80();
   input += synapse0x23c4ec0();
   input += synapse0x23c4f00();
   input += synapse0x23c4f40();
   input += synapse0x23c4f80();
   input += synapse0x23c4fc0();
   input += synapse0x23c5000();
   input += synapse0x23c5040();
   input += synapse0x23c5080();
   input += synapse0x23c50c0();
   input += synapse0x23c4b50();
   input += synapse0x23c4b90();
   input += synapse0x23c5210();
   input += synapse0x23c5250();
   input += synapse0x23c5290();
   input += synapse0x23c52d0();
   input += synapse0x23c5310();
   input += synapse0x23c5350();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23c49c0() {
   double input = input0x23c49c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23c5390() {
   double input = -1.18191;
   input += synapse0x23c56d0();
   input += synapse0x23c5710();
   input += synapse0x23c5750();
   input += synapse0x23c5790();
   input += synapse0x23c57d0();
   input += synapse0x23c5810();
   input += synapse0x23c5850();
   input += synapse0x23c5890();
   input += synapse0x23c58d0();
   input += synapse0x23c5910();
   input += synapse0x23c5950();
   input += synapse0x23c5990();
   input += synapse0x23c59d0();
   input += synapse0x23c5a10();
   input += synapse0x23c5a50();
   input += synapse0x23c5a90();
   input += synapse0x23c5520();
   input += synapse0x23c5560();
   input += synapse0x23c5be0();
   input += synapse0x23c5c20();
   input += synapse0x23c5c60();
   input += synapse0x23c5ca0();
   input += synapse0x23c5ce0();
   input += synapse0x23c5d20();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23c5390() {
   double input = input0x23c5390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23c5d60() {
   double input = 1.33869;
   input += synapse0x23c60a0();
   input += synapse0x23c60e0();
   input += synapse0x23c6120();
   input += synapse0x23c6160();
   input += synapse0x23c61a0();
   input += synapse0x23c61e0();
   input += synapse0x23c6220();
   input += synapse0x23c6260();
   input += synapse0x23c62a0();
   input += synapse0x23c62e0();
   input += synapse0x23c6320();
   input += synapse0x23c6360();
   input += synapse0x23c63a0();
   input += synapse0x23c63e0();
   input += synapse0x23c6420();
   input += synapse0x23c6460();
   input += synapse0x23c5ef0();
   input += synapse0x23c5f30();
   input += synapse0x23c65b0();
   input += synapse0x23c65f0();
   input += synapse0x23c6630();
   input += synapse0x23c6670();
   input += synapse0x23c66b0();
   input += synapse0x23c66f0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23c5d60() {
   double input = input0x23c5d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23c6730() {
   double input = 2.25689;
   input += synapse0x23c6a70();
   input += synapse0x23c6ab0();
   input += synapse0x23c6af0();
   input += synapse0x23c6b30();
   input += synapse0x23c6b70();
   input += synapse0x23c6bb0();
   input += synapse0x23c6bf0();
   input += synapse0x23c6c30();
   input += synapse0x23c6c70();
   input += synapse0x23c6cb0();
   input += synapse0x23c6cf0();
   input += synapse0x23c6d30();
   input += synapse0x23c6d70();
   input += synapse0x23c6db0();
   input += synapse0x23c6df0();
   input += synapse0x23c6e30();
   input += synapse0x23c68c0();
   input += synapse0x23c6900();
   input += synapse0x23c6f80();
   input += synapse0x23c6fc0();
   input += synapse0x23c7000();
   input += synapse0x23c7040();
   input += synapse0x23c7080();
   input += synapse0x23c70c0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23c6730() {
   double input = input0x23c6730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23c7100() {
   double input = -0.234167;
   input += synapse0x23c7440();
   input += synapse0x23c7480();
   input += synapse0x23c74c0();
   input += synapse0x23c7500();
   input += synapse0x23c7540();
   input += synapse0x23c7580();
   input += synapse0x23c75c0();
   input += synapse0x23c7600();
   input += synapse0x23c7640();
   input += synapse0x23c7680();
   input += synapse0x23c76c0();
   input += synapse0x23c7700();
   input += synapse0x23c7740();
   input += synapse0x23c7780();
   input += synapse0x23c77c0();
   input += synapse0x23c7800();
   input += synapse0x23c7290();
   input += synapse0x23c72d0();
   input += synapse0x23c7950();
   input += synapse0x23c7990();
   input += synapse0x23c79d0();
   input += synapse0x23c7a10();
   input += synapse0x23c7a50();
   input += synapse0x23c7a90();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23c7100() {
   double input = input0x23c7100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23c7ad0() {
   double input = -5.80325;
   input += synapse0x23b0540();
   input += synapse0x23b0580();
   input += synapse0x23b05c0();
   input += synapse0x23b0600();
   input += synapse0x23b0640();
   input += synapse0x23b0680();
   input += synapse0x23b06c0();
   input += synapse0x23b0700();
   input += synapse0x23c8220();
   input += synapse0x23c8260();
   input += synapse0x23c82a0();
   input += synapse0x23c82e0();
   input += synapse0x23c8320();
   input += synapse0x23c8360();
   input += synapse0x23c83a0();
   input += synapse0x23c83e0();
   input += synapse0x23c7c60();
   input += synapse0x23c7ca0();
   input += synapse0x23c8530();
   input += synapse0x23c8570();
   input += synapse0x23c85b0();
   input += synapse0x23c85f0();
   input += synapse0x23c8630();
   input += synapse0x23c8670();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23c7ad0() {
   double input = input0x23c7ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23c86b0() {
   double input = -0.636033;
   input += synapse0x23c89f0();
   input += synapse0x23c8a30();
   input += synapse0x23c8a70();
   input += synapse0x23c8ab0();
   input += synapse0x23c8af0();
   input += synapse0x23c8b30();
   input += synapse0x23c8b70();
   input += synapse0x23c8bb0();
   input += synapse0x23c8bf0();
   input += synapse0x23c8c30();
   input += synapse0x23c8c70();
   input += synapse0x23c8cb0();
   input += synapse0x23c8cf0();
   input += synapse0x23c8d30();
   input += synapse0x23c8d70();
   input += synapse0x23c8db0();
   input += synapse0x23c8840();
   input += synapse0x23c8880();
   input += synapse0x23c8f00();
   input += synapse0x23c8f40();
   input += synapse0x23c8f80();
   input += synapse0x23c8fc0();
   input += synapse0x23c9000();
   input += synapse0x23c9040();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23c86b0() {
   double input = input0x23c86b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23c9080() {
   double input = -0.00950688;
   input += synapse0x23c93c0();
   input += synapse0x23c9400();
   input += synapse0x23c9440();
   input += synapse0x23c9480();
   input += synapse0x23c94c0();
   input += synapse0x23c9500();
   input += synapse0x23c9540();
   input += synapse0x23c9580();
   input += synapse0x23c95c0();
   input += synapse0x23c9600();
   input += synapse0x23c9640();
   input += synapse0x23c9680();
   input += synapse0x23c96c0();
   input += synapse0x23c9700();
   input += synapse0x23c9740();
   input += synapse0x23c9780();
   input += synapse0x23c9210();
   input += synapse0x23c9250();
   input += synapse0x23b9d80();
   input += synapse0x23b9dc0();
   input += synapse0x23b9e00();
   input += synapse0x23b9e40();
   input += synapse0x23b9e80();
   input += synapse0x23b9ec0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23c9080() {
   double input = input0x23c9080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23b9f00() {
   double input = 2.70084;
   input += synapse0x23ba240();
   input += synapse0x23ba280();
   input += synapse0x23ba2c0();
   input += synapse0x23ba300();
   input += synapse0x23ba340();
   input += synapse0x23ba380();
   input += synapse0x23ba3c0();
   input += synapse0x23ba400();
   input += synapse0x23ba440();
   input += synapse0x23ba480();
   input += synapse0x23ba4c0();
   input += synapse0x23ba500();
   input += synapse0x23ba540();
   input += synapse0x23ba580();
   input += synapse0x23ba5c0();
   input += synapse0x23ba600();
   input += synapse0x23ba090();
   input += synapse0x23ba0d0();
   input += synapse0x23ba750();
   input += synapse0x23ba790();
   input += synapse0x23ba7d0();
   input += synapse0x23ba810();
   input += synapse0x23ba850();
   input += synapse0x23ba890();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23b9f00() {
   double input = input0x23b9f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23ba8d0() {
   double input = 0.821513;
   input += synapse0x23bac10();
   input += synapse0x23bac50();
   input += synapse0x23bac90();
   input += synapse0x23bacd0();
   input += synapse0x23bad10();
   input += synapse0x23bad50();
   input += synapse0x23bad90();
   input += synapse0x23badd0();
   input += synapse0x23bae10();
   input += synapse0x23bae50();
   input += synapse0x23bae90();
   input += synapse0x23baed0();
   input += synapse0x23baf10();
   input += synapse0x23baf50();
   input += synapse0x23baf90();
   input += synapse0x23bafd0();
   input += synapse0x23baa60();
   input += synapse0x23baaa0();
   input += synapse0x23bb120();
   input += synapse0x23bb160();
   input += synapse0x23bb1a0();
   input += synapse0x23bb1e0();
   input += synapse0x23bb220();
   input += synapse0x23bb260();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23ba8d0() {
   double input = input0x23ba8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23bb2a0() {
   double input = 2.05573;
   input += synapse0x23bb5e0();
   input += synapse0x23bb620();
   input += synapse0x23bb660();
   input += synapse0x23bb6a0();
   input += synapse0x23bb6e0();
   input += synapse0x23bb720();
   input += synapse0x23bb760();
   input += synapse0x23bb7a0();
   input += synapse0x23bb7e0();
   input += synapse0x23bb820();
   input += synapse0x23bb860();
   input += synapse0x23bb8a0();
   input += synapse0x23bb8e0();
   input += synapse0x23bb920();
   input += synapse0x23bb960();
   input += synapse0x23bb9a0();
   input += synapse0x23bb430();
   input += synapse0x23bb470();
   input += synapse0x23bbaf0();
   input += synapse0x23bbb30();
   input += synapse0x23bbb70();
   input += synapse0x23bbbb0();
   input += synapse0x23bbbf0();
   input += synapse0x23bbc30();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23bb2a0() {
   double input = input0x23bb2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23cd8e0() {
   double input = -1.89976;
   input += synapse0x23cdb00();
   input += synapse0x23cdb40();
   input += synapse0x23cdb80();
   input += synapse0x23cdbc0();
   input += synapse0x23cdc00();
   input += synapse0x23cdc40();
   input += synapse0x23cdc80();
   input += synapse0x23cdcc0();
   input += synapse0x23cdd00();
   input += synapse0x23cdd40();
   input += synapse0x23cdd80();
   input += synapse0x23cddc0();
   input += synapse0x23cde00();
   input += synapse0x23cde40();
   input += synapse0x23cde80();
   input += synapse0x23cdec0();
   input += synapse0x23bbc70();
   input += synapse0x23bbcb0();
   input += synapse0x23ce010();
   input += synapse0x23ce050();
   input += synapse0x23ce090();
   input += synapse0x23ce0d0();
   input += synapse0x23ce110();
   input += synapse0x23ce150();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23cd8e0() {
   double input = input0x23cd8e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23ce190() {
   double input = 0.333121;
   input += synapse0x23ce4d0();
   input += synapse0x23ce510();
   input += synapse0x23ce550();
   input += synapse0x23ce590();
   input += synapse0x23ce5d0();
   input += synapse0x23ce610();
   input += synapse0x23ce650();
   input += synapse0x23ce690();
   input += synapse0x23ce6d0();
   input += synapse0x23ce710();
   input += synapse0x23ce750();
   input += synapse0x23ce790();
   input += synapse0x23ce7d0();
   input += synapse0x23ce810();
   input += synapse0x23ce850();
   input += synapse0x23ce890();
   input += synapse0x23ce320();
   input += synapse0x23ce360();
   input += synapse0x23ce9e0();
   input += synapse0x23cea20();
   input += synapse0x23cea60();
   input += synapse0x23ceaa0();
   input += synapse0x23ceae0();
   input += synapse0x23ceb20();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23ce190() {
   double input = input0x23ce190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23ceb60() {
   double input = -0.921346;
   input += synapse0x23ceea0();
   input += synapse0x23ceee0();
   input += synapse0x23cef20();
   input += synapse0x23cef60();
   input += synapse0x23cefa0();
   input += synapse0x23cefe0();
   input += synapse0x23cf020();
   input += synapse0x23cf060();
   input += synapse0x23cf0a0();
   input += synapse0x23cf0e0();
   input += synapse0x23cf120();
   input += synapse0x23cf160();
   input += synapse0x23cf1a0();
   input += synapse0x23cf1e0();
   input += synapse0x23cf220();
   input += synapse0x23cf260();
   input += synapse0x23cecf0();
   input += synapse0x23ced30();
   input += synapse0x23cf3b0();
   input += synapse0x23cf3f0();
   input += synapse0x23cf430();
   input += synapse0x23cf470();
   input += synapse0x23cf4b0();
   input += synapse0x23cf4f0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23ceb60() {
   double input = input0x23ceb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23cf530() {
   double input = 1.46946;
   input += synapse0x23cf870();
   input += synapse0x23cf8b0();
   input += synapse0x23cf8f0();
   input += synapse0x23cf930();
   input += synapse0x23cf970();
   input += synapse0x23cf9b0();
   input += synapse0x23cf9f0();
   input += synapse0x23cfa30();
   input += synapse0x23cfa70();
   input += synapse0x23cfab0();
   input += synapse0x23cfaf0();
   input += synapse0x23cfb30();
   input += synapse0x23cfb70();
   input += synapse0x23cfbb0();
   input += synapse0x23cfbf0();
   input += synapse0x23cfc30();
   input += synapse0x23cf6c0();
   input += synapse0x23cf700();
   input += synapse0x23cfd80();
   input += synapse0x23cfdc0();
   input += synapse0x23cfe00();
   input += synapse0x23cfe40();
   input += synapse0x23cfe80();
   input += synapse0x23cfec0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23cf530() {
   double input = input0x23cf530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23d6730() {
   double input = -4.26436;
   input += synapse0x23ab310();
   input += synapse0x23ab350();
   input += synapse0x23ac870();
   input += synapse0x23ac8b0();
   input += synapse0x23ae340();
   input += synapse0x23ae380();
   input += synapse0x23af110();
   input += synapse0x23af150();
   input += synapse0x23afae0();
   input += synapse0x23afb20();
   input += synapse0x23b04b0();
   input += synapse0x23b04f0();
   input += synapse0x23b0f90();
   input += synapse0x23b0fd0();
   input += synapse0x23b1960();
   input += synapse0x23b19a0();
   input += synapse0x23aea40();
   input += synapse0x23aea80();
   input += synapse0x23b3510();
   input += synapse0x23b3550();
   input += synapse0x23b3ee0();
   input += synapse0x23b3f20();
   input += synapse0x23b48b0();
   input += synapse0x23b48f0();
   input += synapse0x23b5280();
   input += synapse0x23b52c0();
   input += synapse0x23a8310();
   input += synapse0x23a8350();
   input += synapse0x23b7370();
   input += synapse0x23b73b0();
   input += synapse0x23b7d40();
   input += synapse0x23b7d80();
   input += synapse0x23b8710();
   input += synapse0x23b8750();
   input += synapse0x23b90e0();
   input += synapse0x23b9120();
   input += synapse0x23b9ab0();
   input += synapse0x23b9af0();
   input += synapse0x23b2600();
   input += synapse0x23b2640();
   input += synapse0x23bbeb0();
   input += synapse0x23bbef0();
   input += synapse0x23bc840();
   input += synapse0x23bc880();
   input += synapse0x23bd210();
   input += synapse0x23bd250();
   input += synapse0x23bdbe0();
   input += synapse0x23bdc20();
   input += synapse0x23be5b0();
   input += synapse0x23be5f0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23d6730() {
   double input = input0x23d6730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23d6ad0() {
   double input = 0.139572;
   input += synapse0x23c0cf0();
   input += synapse0x23c0d30();
   input += synapse0x23b62b0();
   input += synapse0x23b62f0();
   input += synapse0x23c38d0();
   input += synapse0x23c3910();
   input += synapse0x23c42a0();
   input += synapse0x23c42e0();
   input += synapse0x23c4c70();
   input += synapse0x23c4cb0();
   input += synapse0x23c5640();
   input += synapse0x23c5680();
   input += synapse0x23c6010();
   input += synapse0x23c6050();
   input += synapse0x23c69e0();
   input += synapse0x23c6a20();
   input += synapse0x23c73b0();
   input += synapse0x23c73f0();
   input += synapse0x23c7d80();
   input += synapse0x23c7dc0();
   input += synapse0x23c8960();
   input += synapse0x23c89a0();
   input += synapse0x23c9330();
   input += synapse0x23c9370();
   input += synapse0x23ba1b0();
   input += synapse0x23ba1f0();
   input += synapse0x23bab80();
   input += synapse0x23babc0();
   input += synapse0x23bb550();
   input += synapse0x23bb590();
   input += synapse0x23cda70();
   input += synapse0x23cdab0();
   input += synapse0x23ce440();
   input += synapse0x23ce480();
   input += synapse0x23cee10();
   input += synapse0x23cee50();
   input += synapse0x23cf7e0();
   input += synapse0x23cf820();
   input += synapse0x23aa770();
   input += synapse0x23aa7b0();
   input += synapse0x23bef80();
   input += synapse0x23befc0();
   input += synapse0x23cff00();
   input += synapse0x23cff40();
   input += synapse0x23cff80();
   input += synapse0x23cffc0();
   input += synapse0x23d6e70();
   input += synapse0x23d6eb0();
   input += synapse0x23d6ef0();
   input += synapse0x23d6f30();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23d6ad0() {
   double input = input0x23d6ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23d6f70() {
   double input = 6.55321;
   input += synapse0x23d72b0();
   input += synapse0x23d72f0();
   input += synapse0x23d7330();
   input += synapse0x23d7370();
   input += synapse0x23d73b0();
   input += synapse0x23d73f0();
   input += synapse0x23d7430();
   input += synapse0x23d7470();
   input += synapse0x23d74b0();
   input += synapse0x23d74f0();
   input += synapse0x23d7530();
   input += synapse0x23d7570();
   input += synapse0x23d75b0();
   input += synapse0x23d75f0();
   input += synapse0x23d7630();
   input += synapse0x23d7670();
   input += synapse0x23d7100();
   input += synapse0x23d7140();
   input += synapse0x23d77c0();
   input += synapse0x23d7800();
   input += synapse0x23d7840();
   input += synapse0x23d7880();
   input += synapse0x23d78c0();
   input += synapse0x23d7900();
   input += synapse0x23d7940();
   input += synapse0x23d7980();
   input += synapse0x23d79c0();
   input += synapse0x23d7a00();
   input += synapse0x23d7a40();
   input += synapse0x23d7a80();
   input += synapse0x23d7ac0();
   input += synapse0x23d7b00();
   input += synapse0x23d76b0();
   input += synapse0x23d76f0();
   input += synapse0x23d7730();
   input += synapse0x23d7770();
   input += synapse0x23d7d50();
   input += synapse0x23d7d90();
   input += synapse0x23d7dd0();
   input += synapse0x23d7e10();
   input += synapse0x23d7e50();
   input += synapse0x23d7e90();
   input += synapse0x23d7ed0();
   input += synapse0x23d7f10();
   input += synapse0x23d7f50();
   input += synapse0x23d7f90();
   input += synapse0x23d7fd0();
   input += synapse0x23d8010();
   input += synapse0x23d8050();
   input += synapse0x23d8090();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23d6f70() {
   double input = input0x23d6f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23d80d0() {
   double input = -0.828484;
   input += synapse0x23d8410();
   input += synapse0x23d8450();
   input += synapse0x23d8490();
   input += synapse0x23d84d0();
   input += synapse0x23d8510();
   input += synapse0x23d8550();
   input += synapse0x23d8590();
   input += synapse0x23d85d0();
   input += synapse0x23d8610();
   input += synapse0x23d8650();
   input += synapse0x23d8690();
   input += synapse0x23d86d0();
   input += synapse0x23d8710();
   input += synapse0x23d8750();
   input += synapse0x23d8790();
   input += synapse0x23d87d0();
   input += synapse0x23d8260();
   input += synapse0x23d82a0();
   input += synapse0x23d8920();
   input += synapse0x23d8960();
   input += synapse0x23d89a0();
   input += synapse0x23d89e0();
   input += synapse0x23d8a20();
   input += synapse0x23d8a60();
   input += synapse0x23d8aa0();
   input += synapse0x23d8ae0();
   input += synapse0x23d8b20();
   input += synapse0x23d8b60();
   input += synapse0x23d8ba0();
   input += synapse0x23d8be0();
   input += synapse0x23d8c20();
   input += synapse0x23d8c60();
   input += synapse0x23d8810();
   input += synapse0x23d8850();
   input += synapse0x23d8890();
   input += synapse0x23d88d0();
   input += synapse0x23d8eb0();
   input += synapse0x23d8ef0();
   input += synapse0x23d8f30();
   input += synapse0x23d8f70();
   input += synapse0x23d8fb0();
   input += synapse0x23d8ff0();
   input += synapse0x23d9030();
   input += synapse0x23d9070();
   input += synapse0x23d90b0();
   input += synapse0x23d90f0();
   input += synapse0x23d9130();
   input += synapse0x23d9170();
   input += synapse0x23d91b0();
   input += synapse0x23d91f0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23d80d0() {
   double input = input0x23d80d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23d9230() {
   double input = -1.12899;
   input += synapse0x23d9570();
   input += synapse0x23d95b0();
   input += synapse0x23d95f0();
   input += synapse0x23d9630();
   input += synapse0x23d9670();
   input += synapse0x23d96b0();
   input += synapse0x23d96f0();
   input += synapse0x23d9730();
   input += synapse0x23d9770();
   input += synapse0x23d97b0();
   input += synapse0x23d97f0();
   input += synapse0x23d9830();
   input += synapse0x23d9870();
   input += synapse0x23d98b0();
   input += synapse0x23d98f0();
   input += synapse0x23d9930();
   input += synapse0x23d93c0();
   input += synapse0x23d9400();
   input += synapse0x23d9a80();
   input += synapse0x23d9ac0();
   input += synapse0x23d9b00();
   input += synapse0x23d9b40();
   input += synapse0x23d9b80();
   input += synapse0x23d9bc0();
   input += synapse0x23d9c00();
   input += synapse0x23d9c40();
   input += synapse0x23d9c80();
   input += synapse0x23d9cc0();
   input += synapse0x23d9d00();
   input += synapse0x23d9d40();
   input += synapse0x23d9d80();
   input += synapse0x23d9dc0();
   input += synapse0x23d9970();
   input += synapse0x23d99b0();
   input += synapse0x23d99f0();
   input += synapse0x23d9a30();
   input += synapse0x23da010();
   input += synapse0x23da050();
   input += synapse0x23da090();
   input += synapse0x23da0d0();
   input += synapse0x23da110();
   input += synapse0x23da150();
   input += synapse0x23da190();
   input += synapse0x23da1d0();
   input += synapse0x23da210();
   input += synapse0x23da250();
   input += synapse0x23da290();
   input += synapse0x23da2d0();
   input += synapse0x23da310();
   input += synapse0x23da350();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23d9230() {
   double input = input0x23d9230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi1::input0x23da390() {
   double input = 8.44996;
   input += synapse0x23da5b0();
   input += synapse0x23da5f0();
   input += synapse0x23da630();
   input += synapse0x23da670();
   input += synapse0x23da6b0();
   return input;
}

double NNfunction_nn_chi1_chi1::neuron0x23da390() {
   double input = input0x23da390();
   return (input * 1)+0;
}

double NNfunction_nn_chi1_chi1::synapse0x23aa800() {
   return (neuron0x23a5400()*-0.011915);
}

double NNfunction_nn_chi1_chi1::synapse0x23aa840() {
   return (neuron0x23a56b0()*-0.157503);
}

double NNfunction_nn_chi1_chi1::synapse0x23aa880() {
   return (neuron0x23a59f0()*0.599733);
}

double NNfunction_nn_chi1_chi1::synapse0x23aa8c0() {
   return (neuron0x23a5d30()*0.0277032);
}

double NNfunction_nn_chi1_chi1::synapse0x23aa900() {
   return (neuron0x23a6070()*0.0186315);
}

double NNfunction_nn_chi1_chi1::synapse0x23aa940() {
   return (neuron0x23a63b0()*-0.0138814);
}

double NNfunction_nn_chi1_chi1::synapse0x23aa980() {
   return (neuron0x23a66f0()*-0.0158507);
}

double NNfunction_nn_chi1_chi1::synapse0x23aa9c0() {
   return (neuron0x23a6a30()*-0.0269469);
}

double NNfunction_nn_chi1_chi1::synapse0x23aaa00() {
   return (neuron0x23a6d70()*-0.000983112);
}

double NNfunction_nn_chi1_chi1::synapse0x23aaa40() {
   return (neuron0x23a70b0()*0.0261524);
}

double NNfunction_nn_chi1_chi1::synapse0x23aaa80() {
   return (neuron0x23a73f0()*-0.0024304);
}

double NNfunction_nn_chi1_chi1::synapse0x23aaac0() {
   return (neuron0x23a7730()*0.149772);
}

double NNfunction_nn_chi1_chi1::synapse0x23aab00() {
   return (neuron0x23a7a70()*0.0279285);
}

double NNfunction_nn_chi1_chi1::synapse0x23aab40() {
   return (neuron0x23a7db0()*0.0161457);
}

double NNfunction_nn_chi1_chi1::synapse0x23aab80() {
   return (neuron0x23a80f0()*-1.69922);
}

double NNfunction_nn_chi1_chi1::synapse0x23aabc0() {
   return (neuron0x23a8430()*0.057225);
}

double NNfunction_nn_chi1_chi1::synapse0x23aa650() {
   return (neuron0x23a8770()*0.00524392);
}

double NNfunction_nn_chi1_chi1::synapse0x23aa690() {
   return (neuron0x23a8cd0()*0.117989);
}

double NNfunction_nn_chi1_chi1::synapse0x2161740() {
   return (neuron0x23a9010()*0.0411749);
}

double NNfunction_nn_chi1_chi1::synapse0x2161780() {
   return (neuron0x23a9350()*-0.0125732);
}

double NNfunction_nn_chi1_chi1::synapse0x23aac00() {
   return (neuron0x23a9690()*-0.00692092);
}

double NNfunction_nn_chi1_chi1::synapse0x23aac40() {
   return (neuron0x23a99d0()*-0.0235839);
}

double NNfunction_nn_chi1_chi1::synapse0x23aac80() {
   return (neuron0x23a9d10()*-0.00716841);
}

double NNfunction_nn_chi1_chi1::synapse0x23aacc0() {
   return (neuron0x23aa050()*-0.0414184);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab040() {
   return (neuron0x23a5400()*-0.0146743);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab080() {
   return (neuron0x23a56b0()*9.69308);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab0c0() {
   return (neuron0x23a59f0()*1.46745);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab100() {
   return (neuron0x23a5d30()*0.00770764);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab140() {
   return (neuron0x23a6070()*0.0059962);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab180() {
   return (neuron0x23a63b0()*-0.0137051);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab1c0() {
   return (neuron0x23a66f0()*0.0209747);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab200() {
   return (neuron0x23a6a30()*-0.00710007);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab240() {
   return (neuron0x23a6d70()*0.0240357);
}

double NNfunction_nn_chi1_chi1::synapse0x2161590() {
   return (neuron0x23a70b0()*0.00318226);
}

double NNfunction_nn_chi1_chi1::synapse0x21615d0() {
   return (neuron0x23a73f0()*-0.00174536);
}

double NNfunction_nn_chi1_chi1::synapse0x2161610() {
   return (neuron0x23a7730()*0.192843);
}

double NNfunction_nn_chi1_chi1::synapse0x2161650() {
   return (neuron0x23a7a70()*0.0167304);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab490() {
   return (neuron0x23a7db0()*-0.00353793);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab4d0() {
   return (neuron0x23a80f0()*-0.219013);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab510() {
   return (neuron0x23a8430()*-0.0225403);
}

double NNfunction_nn_chi1_chi1::synapse0x23aae90() {
   return (neuron0x23a8770()*-0.0132328);
}

double NNfunction_nn_chi1_chi1::synapse0x23aaed0() {
   return (neuron0x23a8cd0()*-0.0494516);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab660() {
   return (neuron0x23a9010()*0.0026078);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab6a0() {
   return (neuron0x23a9350()*0.0134366);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab6e0() {
   return (neuron0x23a9690()*0.0524833);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab720() {
   return (neuron0x23a99d0()*0.0150725);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab760() {
   return (neuron0x23a9d10()*-0.0072744);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab7a0() {
   return (neuron0x23aa050()*0.00822354);
}

double NNfunction_nn_chi1_chi1::synapse0x23abb20() {
   return (neuron0x23a5400()*0.0123172);
}

double NNfunction_nn_chi1_chi1::synapse0x23abb60() {
   return (neuron0x23a56b0()*0.0519511);
}

double NNfunction_nn_chi1_chi1::synapse0x23abba0() {
   return (neuron0x23a59f0()*-0.000921992);
}

double NNfunction_nn_chi1_chi1::synapse0x23abbe0() {
   return (neuron0x23a5d30()*-0.0308348);
}

double NNfunction_nn_chi1_chi1::synapse0x23abc20() {
   return (neuron0x23a6070()*-0.0263117);
}

double NNfunction_nn_chi1_chi1::synapse0x23abc60() {
   return (neuron0x23a63b0()*0.0206979);
}

double NNfunction_nn_chi1_chi1::synapse0x23abca0() {
   return (neuron0x23a66f0()*0.00789301);
}

double NNfunction_nn_chi1_chi1::synapse0x23abce0() {
   return (neuron0x23a6a30()*-0.0023197);
}

double NNfunction_nn_chi1_chi1::synapse0x23abd20() {
   return (neuron0x23a6d70()*0.00213394);
}

double NNfunction_nn_chi1_chi1::synapse0x23abd60() {
   return (neuron0x23a70b0()*-0.0063452);
}

double NNfunction_nn_chi1_chi1::synapse0x23abda0() {
   return (neuron0x23a73f0()*-0.0340606);
}

double NNfunction_nn_chi1_chi1::synapse0x23abde0() {
   return (neuron0x23a7730()*-0.199475);
}

double NNfunction_nn_chi1_chi1::synapse0x23abe20() {
   return (neuron0x23a7a70()*-0.0837285);
}

double NNfunction_nn_chi1_chi1::synapse0x23abe60() {
   return (neuron0x23a7db0()*-0.0169665);
}

double NNfunction_nn_chi1_chi1::synapse0x23abea0() {
   return (neuron0x23a80f0()*0.743278);
}

double NNfunction_nn_chi1_chi1::synapse0x23abee0() {
   return (neuron0x23a8430()*-0.0848647);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab970() {
   return (neuron0x23a8770()*0.040821);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab9b0() {
   return (neuron0x23a8cd0()*-0.194121);
}

double NNfunction_nn_chi1_chi1::synapse0x216f4a0() {
   return (neuron0x23a9010()*-0.0474165);
}

double NNfunction_nn_chi1_chi1::synapse0x216f4e0() {
   return (neuron0x23a9350()*-0.0531968);
}

double NNfunction_nn_chi1_chi1::synapse0x23ade10() {
   return (neuron0x23a9690()*0.0280625);
}

double NNfunction_nn_chi1_chi1::synapse0x23ade50() {
   return (neuron0x23a99d0()*-0.0272478);
}

double NNfunction_nn_chi1_chi1::synapse0x23a5140() {
   return (neuron0x23a9d10()*-0.0214582);
}

double NNfunction_nn_chi1_chi1::synapse0x23a5180() {
   return (neuron0x23aa050()*0.00299224);
}

double NNfunction_nn_chi1_chi1::synapse0x216fd90() {
   return (neuron0x23a5400()*0.206165);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab3a0() {
   return (neuron0x23a56b0()*0.40999);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab3e0() {
   return (neuron0x23a59f0()*-1.52755);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab420() {
   return (neuron0x23a5d30()*0.888195);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac030() {
   return (neuron0x23a6070()*0.520938);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac070() {
   return (neuron0x23a63b0()*-0.0193244);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac0b0() {
   return (neuron0x23a66f0()*-0.51283);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac0f0() {
   return (neuron0x23a6a30()*0.324467);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac130() {
   return (neuron0x23a6d70()*-0.265667);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac170() {
   return (neuron0x23a70b0()*0.297392);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac1b0() {
   return (neuron0x23a73f0()*-0.93638);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac1f0() {
   return (neuron0x23a7730()*0.194108);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac230() {
   return (neuron0x23a7a70()*-0.176105);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac270() {
   return (neuron0x23a7db0()*0.308592);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac2b0() {
   return (neuron0x23a80f0()*-0.262445);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac2f0() {
   return (neuron0x23a8430()*-0.26081);
}

double NNfunction_nn_chi1_chi1::synapse0x23a51c0() {
   return (neuron0x23a8770()*-0.224667);
}

double NNfunction_nn_chi1_chi1::synapse0x23a5200() {
   return (neuron0x23a8cd0()*0.382367);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac440() {
   return (neuron0x23a9010()*-0.517401);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac480() {
   return (neuron0x23a9350()*0.341565);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac4c0() {
   return (neuron0x23a9690()*-1.30633);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac500() {
   return (neuron0x23a99d0()*-1.0822);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac540() {
   return (neuron0x23a9d10()*-0.560786);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac580() {
   return (neuron0x23aa050()*0.199845);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac900() {
   return (neuron0x23a5400()*0.0131979);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac940() {
   return (neuron0x23a56b0()*-5.12271);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac980() {
   return (neuron0x23a59f0()*2.5222);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac9c0() {
   return (neuron0x23a5d30()*0.107531);
}

double NNfunction_nn_chi1_chi1::synapse0x23aca00() {
   return (neuron0x23a6070()*0.00234418);
}

double NNfunction_nn_chi1_chi1::synapse0x23aca40() {
   return (neuron0x23a63b0()*0.00369727);
}

double NNfunction_nn_chi1_chi1::synapse0x23aca80() {
   return (neuron0x23a66f0()*-0.0198394);
}

double NNfunction_nn_chi1_chi1::synapse0x23acac0() {
   return (neuron0x23a6a30()*-0.0690222);
}

double NNfunction_nn_chi1_chi1::synapse0x23acb00() {
   return (neuron0x23a6d70()*-0.00174903);
}

double NNfunction_nn_chi1_chi1::synapse0x23acb40() {
   return (neuron0x23a70b0()*0.0729697);
}

double NNfunction_nn_chi1_chi1::synapse0x23acb80() {
   return (neuron0x23a73f0()*0.012534);
}

double NNfunction_nn_chi1_chi1::synapse0x23acbc0() {
   return (neuron0x23a7730()*0.0758759);
}

double NNfunction_nn_chi1_chi1::synapse0x23acc00() {
   return (neuron0x23a7a70()*0.0566066);
}

double NNfunction_nn_chi1_chi1::synapse0x23acc40() {
   return (neuron0x23a7db0()*0.0404704);
}

double NNfunction_nn_chi1_chi1::synapse0x23acc80() {
   return (neuron0x23a80f0()*-0.137026);
}

double NNfunction_nn_chi1_chi1::synapse0x23accc0() {
   return (neuron0x23a8430()*0.0311193);
}

double NNfunction_nn_chi1_chi1::synapse0x23ace10() {
   return (neuron0x23a8770()*-0.0483491);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac750() {
   return (neuron0x23a8cd0()*0.00933512);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac790() {
   return (neuron0x23a9010()*0.00864873);
}

double NNfunction_nn_chi1_chi1::synapse0x23adf50() {
   return (neuron0x23a9350()*-0.0118024);
}

double NNfunction_nn_chi1_chi1::synapse0x23adf90() {
   return (neuron0x23a9690()*0.0268617);
}

double NNfunction_nn_chi1_chi1::synapse0x23adfd0() {
   return (neuron0x23a99d0()*-0.0827425);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae010() {
   return (neuron0x23a9d10()*0.0485486);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae050() {
   return (neuron0x23aa050()*0.0372789);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae3d0() {
   return (neuron0x23a5400()*-0.840849);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae410() {
   return (neuron0x23a56b0()*-0.889349);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae450() {
   return (neuron0x23a59f0()*-0.0334324);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae490() {
   return (neuron0x23a5d30()*0.785728);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae4d0() {
   return (neuron0x23a6070()*-0.265984);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae510() {
   return (neuron0x23a63b0()*0.690916);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae550() {
   return (neuron0x23a66f0()*-0.673735);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae590() {
   return (neuron0x23a6a30()*0.79974);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae5d0() {
   return (neuron0x23a6d70()*-1.15085);
}

double NNfunction_nn_chi1_chi1::synapse0x216f7f0() {
   return (neuron0x23a70b0()*0.616226);
}

double NNfunction_nn_chi1_chi1::synapse0x216f830() {
   return (neuron0x23a73f0()*-0.442811);
}

double NNfunction_nn_chi1_chi1::synapse0x216f870() {
   return (neuron0x23a7730()*-0.874584);
}

double NNfunction_nn_chi1_chi1::synapse0x216f8b0() {
   return (neuron0x23a7a70()*-0.162359);
}

double NNfunction_nn_chi1_chi1::synapse0x216f8f0() {
   return (neuron0x23a7db0()*-0.412926);
}

double NNfunction_nn_chi1_chi1::synapse0x216f930() {
   return (neuron0x23a80f0()*0.216399);
}

double NNfunction_nn_chi1_chi1::synapse0x216f970() {
   return (neuron0x23a8430()*0.0558796);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae220() {
   return (neuron0x23a8770()*-1.22706);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae260() {
   return (neuron0x23a8cd0()*2.02687);
}

double NNfunction_nn_chi1_chi1::synapse0x216fac0() {
   return (neuron0x23a9010()*1.10998);
}

double NNfunction_nn_chi1_chi1::synapse0x216fb00() {
   return (neuron0x23a9350()*-0.602948);
}

double NNfunction_nn_chi1_chi1::synapse0x216fb40() {
   return (neuron0x23a9690()*-0.741208);
}

double NNfunction_nn_chi1_chi1::synapse0x216fb80() {
   return (neuron0x23a99d0()*-0.0854299);
}

double NNfunction_nn_chi1_chi1::synapse0x216fbc0() {
   return (neuron0x23a9d10()*0.674026);
}

double NNfunction_nn_chi1_chi1::synapse0x23aee20() {
   return (neuron0x23aa050()*0.0365277);
}

double NNfunction_nn_chi1_chi1::synapse0x23af1a0() {
   return (neuron0x23a5400()*0.166493);
}

double NNfunction_nn_chi1_chi1::synapse0x23af1e0() {
   return (neuron0x23a56b0()*-0.983006);
}

double NNfunction_nn_chi1_chi1::synapse0x23af220() {
   return (neuron0x23a59f0()*0.677358);
}

double NNfunction_nn_chi1_chi1::synapse0x23af260() {
   return (neuron0x23a5d30()*2.14562);
}

double NNfunction_nn_chi1_chi1::synapse0x23af2a0() {
   return (neuron0x23a6070()*-0.6508);
}

double NNfunction_nn_chi1_chi1::synapse0x23af2e0() {
   return (neuron0x23a63b0()*0.615475);
}

double NNfunction_nn_chi1_chi1::synapse0x23af320() {
   return (neuron0x23a66f0()*-0.620624);
}

double NNfunction_nn_chi1_chi1::synapse0x23af360() {
   return (neuron0x23a6a30()*0.292862);
}

double NNfunction_nn_chi1_chi1::synapse0x23af3a0() {
   return (neuron0x23a6d70()*0.287309);
}

double NNfunction_nn_chi1_chi1::synapse0x23af3e0() {
   return (neuron0x23a70b0()*1.1577);
}

double NNfunction_nn_chi1_chi1::synapse0x23af420() {
   return (neuron0x23a73f0()*0.225077);
}

double NNfunction_nn_chi1_chi1::synapse0x23af460() {
   return (neuron0x23a7730()*0.607166);
}

double NNfunction_nn_chi1_chi1::synapse0x23af4a0() {
   return (neuron0x23a7a70()*0.691181);
}

double NNfunction_nn_chi1_chi1::synapse0x23af4e0() {
   return (neuron0x23a7db0()*1.13495);
}

double NNfunction_nn_chi1_chi1::synapse0x23af520() {
   return (neuron0x23a80f0()*0.0744832);
}

double NNfunction_nn_chi1_chi1::synapse0x23af560() {
   return (neuron0x23a8430()*-1.02219);
}

double NNfunction_nn_chi1_chi1::synapse0x23aeff0() {
   return (neuron0x23a8770()*-0.509746);
}

double NNfunction_nn_chi1_chi1::synapse0x23af030() {
   return (neuron0x23a8cd0()*-0.363933);
}

double NNfunction_nn_chi1_chi1::synapse0x23af6b0() {
   return (neuron0x23a9010()*-1.43405);
}

double NNfunction_nn_chi1_chi1::synapse0x23af6f0() {
   return (neuron0x23a9350()*0.432684);
}

double NNfunction_nn_chi1_chi1::synapse0x23af730() {
   return (neuron0x23a9690()*-1.53077);
}

double NNfunction_nn_chi1_chi1::synapse0x23af770() {
   return (neuron0x23a99d0()*-0.751998);
}

double NNfunction_nn_chi1_chi1::synapse0x23af7b0() {
   return (neuron0x23a9d10()*-0.19956);
}

double NNfunction_nn_chi1_chi1::synapse0x23af7f0() {
   return (neuron0x23aa050()*0.742135);
}

double NNfunction_nn_chi1_chi1::synapse0x23afb70() {
   return (neuron0x23a5400()*0.0312758);
}

double NNfunction_nn_chi1_chi1::synapse0x23afbb0() {
   return (neuron0x23a56b0()*0.0668745);
}

double NNfunction_nn_chi1_chi1::synapse0x23afbf0() {
   return (neuron0x23a59f0()*0.739552);
}

double NNfunction_nn_chi1_chi1::synapse0x23afc30() {
   return (neuron0x23a5d30()*-0.0127547);
}

double NNfunction_nn_chi1_chi1::synapse0x23afc70() {
   return (neuron0x23a6070()*-0.0079961);
}

double NNfunction_nn_chi1_chi1::synapse0x23afcb0() {
   return (neuron0x23a63b0()*0.0329192);
}

double NNfunction_nn_chi1_chi1::synapse0x23afcf0() {
   return (neuron0x23a66f0()*0.0284065);
}

double NNfunction_nn_chi1_chi1::synapse0x23afd30() {
   return (neuron0x23a6a30()*-0.00451557);
}

double NNfunction_nn_chi1_chi1::synapse0x23afd70() {
   return (neuron0x23a6d70()*0.00411574);
}

double NNfunction_nn_chi1_chi1::synapse0x23afdb0() {
   return (neuron0x23a70b0()*-0.0267445);
}

double NNfunction_nn_chi1_chi1::synapse0x23afdf0() {
   return (neuron0x23a73f0()*-0.0377542);
}

double NNfunction_nn_chi1_chi1::synapse0x23afe30() {
   return (neuron0x23a7730()*-0.144447);
}

double NNfunction_nn_chi1_chi1::synapse0x23afe70() {
   return (neuron0x23a7a70()*-0.0521433);
}

double NNfunction_nn_chi1_chi1::synapse0x23afeb0() {
   return (neuron0x23a7db0()*-0.000357212);
}

double NNfunction_nn_chi1_chi1::synapse0x23afef0() {
   return (neuron0x23a80f0()*1.03437);
}

double NNfunction_nn_chi1_chi1::synapse0x23aff30() {
   return (neuron0x23a8430()*-0.0936155);
}

double NNfunction_nn_chi1_chi1::synapse0x23af9c0() {
   return (neuron0x23a8770()*0.0622694);
}

double NNfunction_nn_chi1_chi1::synapse0x23afa00() {
   return (neuron0x23a8cd0()*-0.230542);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0080() {
   return (neuron0x23a9010()*-0.0729915);
}

double NNfunction_nn_chi1_chi1::synapse0x23b00c0() {
   return (neuron0x23a9350()*-0.0796726);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0100() {
   return (neuron0x23a9690()*0.0384736);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0140() {
   return (neuron0x23a99d0()*-0.0338873);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0180() {
   return (neuron0x23a9d10()*-0.0154504);
}

double NNfunction_nn_chi1_chi1::synapse0x23b01c0() {
   return (neuron0x23aa050()*-0.0165136);
}

double NNfunction_nn_chi1_chi1::synapse0x23a8bc0() {
   return (neuron0x23a5400()*0.131658);
}

double NNfunction_nn_chi1_chi1::synapse0x23a8c00() {
   return (neuron0x23a56b0()*0.0483557);
}

double NNfunction_nn_chi1_chi1::synapse0x23a8c40() {
   return (neuron0x23a59f0()*-0.120526);
}

double NNfunction_nn_chi1_chi1::synapse0x23a8c80() {
   return (neuron0x23a5d30()*-2.19545);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0750() {
   return (neuron0x23a6070()*0.0350647);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0790() {
   return (neuron0x23a63b0()*-0.0176127);
}

double NNfunction_nn_chi1_chi1::synapse0x23b07d0() {
   return (neuron0x23a66f0()*0.00692021);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0810() {
   return (neuron0x23a6a30()*-0.015884);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0850() {
   return (neuron0x23a6d70()*0.0333109);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0890() {
   return (neuron0x23a70b0()*0.0738551);
}

double NNfunction_nn_chi1_chi1::synapse0x23b08d0() {
   return (neuron0x23a73f0()*0.00562216);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0910() {
   return (neuron0x23a7730()*-0.101477);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0950() {
   return (neuron0x23a7a70()*0.166738);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0990() {
   return (neuron0x23a7db0()*0.305654);
}

double NNfunction_nn_chi1_chi1::synapse0x23b09d0() {
   return (neuron0x23a80f0()*0.30998);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0a10() {
   return (neuron0x23a8430()*0.157617);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0390() {
   return (neuron0x23a8770()*0.086548);
}

double NNfunction_nn_chi1_chi1::synapse0x23b03d0() {
   return (neuron0x23a8cd0()*-0.0308769);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0b60() {
   return (neuron0x23a9010()*0.0566655);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0ba0() {
   return (neuron0x23a9350()*0.0364366);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0be0() {
   return (neuron0x23a9690()*0.0539626);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0c20() {
   return (neuron0x23a99d0()*0.0259108);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0c60() {
   return (neuron0x23a9d10()*0.0258579);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0ca0() {
   return (neuron0x23aa050()*0.101069);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1020() {
   return (neuron0x23a5400()*-0.493638);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1060() {
   return (neuron0x23a56b0()*2.67121);
}

double NNfunction_nn_chi1_chi1::synapse0x23b10a0() {
   return (neuron0x23a59f0()*2.38481);
}

double NNfunction_nn_chi1_chi1::synapse0x23b10e0() {
   return (neuron0x23a5d30()*-0.512556);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1120() {
   return (neuron0x23a6070()*-0.174271);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1160() {
   return (neuron0x23a63b0()*-0.00349094);
}

double NNfunction_nn_chi1_chi1::synapse0x23b11a0() {
   return (neuron0x23a66f0()*-0.665936);
}

double NNfunction_nn_chi1_chi1::synapse0x23b11e0() {
   return (neuron0x23a6a30()*-0.0542232);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1220() {
   return (neuron0x23a6d70()*0.0882203);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1260() {
   return (neuron0x23a70b0()*0.213656);
}

double NNfunction_nn_chi1_chi1::synapse0x23b12a0() {
   return (neuron0x23a73f0()*-0.442528);
}

double NNfunction_nn_chi1_chi1::synapse0x23b12e0() {
   return (neuron0x23a7730()*2.08144);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1320() {
   return (neuron0x23a7a70()*-0.418294);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1360() {
   return (neuron0x23a7db0()*-0.121815);
}

double NNfunction_nn_chi1_chi1::synapse0x23b13a0() {
   return (neuron0x23a80f0()*-0.0882825);
}

double NNfunction_nn_chi1_chi1::synapse0x23b13e0() {
   return (neuron0x23a8430()*0.292958);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0e70() {
   return (neuron0x23a8770()*-0.970185);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0eb0() {
   return (neuron0x23a8cd0()*1.38241);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1530() {
   return (neuron0x23a9010()*-1.04542);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1570() {
   return (neuron0x23a9350()*-0.342451);
}

double NNfunction_nn_chi1_chi1::synapse0x23b15b0() {
   return (neuron0x23a9690()*0.332827);
}

double NNfunction_nn_chi1_chi1::synapse0x23b15f0() {
   return (neuron0x23a99d0()*0.757758);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1630() {
   return (neuron0x23a9d10()*0.110387);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1670() {
   return (neuron0x23aa050()*0.0941844);
}

double NNfunction_nn_chi1_chi1::synapse0x23b19f0() {
   return (neuron0x23a5400()*-0.22047);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1a30() {
   return (neuron0x23a56b0()*0.0182752);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1a70() {
   return (neuron0x23a59f0()*0.142115);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1ab0() {
   return (neuron0x23a5d30()*6.52016);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1af0() {
   return (neuron0x23a6070()*-0.0354805);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1b30() {
   return (neuron0x23a63b0()*-0.00526774);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1b70() {
   return (neuron0x23a66f0()*-0.155583);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1bb0() {
   return (neuron0x23a6a30()*0.0155702);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1bf0() {
   return (neuron0x23a6d70()*-0.0524129);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1c30() {
   return (neuron0x23a70b0()*-0.213195);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1c70() {
   return (neuron0x23a73f0()*-0.104219);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1cb0() {
   return (neuron0x23a7730()*0.434666);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1cf0() {
   return (neuron0x23a7a70()*-0.197571);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1d30() {
   return (neuron0x23a7db0()*-0.251246);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1d70() {
   return (neuron0x23a80f0()*-0.182809);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1db0() {
   return (neuron0x23a8430()*-0.251742);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1840() {
   return (neuron0x23a8770()*0.0075954);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1880() {
   return (neuron0x23a8cd0()*-0.046781);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae610() {
   return (neuron0x23a9010()*-0.14027);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae650() {
   return (neuron0x23a9350()*-0.105793);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae690() {
   return (neuron0x23a9690()*-0.148526);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae6d0() {
   return (neuron0x23a99d0()*-0.0184957);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae710() {
   return (neuron0x23a9d10()*0.0779994);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae750() {
   return (neuron0x23aa050()*-0.0481355);
}

double NNfunction_nn_chi1_chi1::synapse0x23aead0() {
   return (neuron0x23a5400()*-0.156794);
}

double NNfunction_nn_chi1_chi1::synapse0x23aeb10() {
   return (neuron0x23a56b0()*-0.978674);
}

double NNfunction_nn_chi1_chi1::synapse0x23aeb50() {
   return (neuron0x23a59f0()*-1.69658);
}

double NNfunction_nn_chi1_chi1::synapse0x23aeb90() {
   return (neuron0x23a5d30()*-3.24949);
}

double NNfunction_nn_chi1_chi1::synapse0x23aebd0() {
   return (neuron0x23a6070()*-0.686132);
}

double NNfunction_nn_chi1_chi1::synapse0x23aec10() {
   return (neuron0x23a63b0()*0.705059);
}

double NNfunction_nn_chi1_chi1::synapse0x23aec50() {
   return (neuron0x23a66f0()*-0.121541);
}

double NNfunction_nn_chi1_chi1::synapse0x23aec90() {
   return (neuron0x23a6a30()*-1.74822);
}

double NNfunction_nn_chi1_chi1::synapse0x23aecd0() {
   return (neuron0x23a6d70()*-0.0292897);
}

double NNfunction_nn_chi1_chi1::synapse0x23aed10() {
   return (neuron0x23a70b0()*1.51889);
}

double NNfunction_nn_chi1_chi1::synapse0x23aed50() {
   return (neuron0x23a73f0()*-0.157049);
}

double NNfunction_nn_chi1_chi1::synapse0x23aed90() {
   return (neuron0x23a7730()*-1.04004);
}

double NNfunction_nn_chi1_chi1::synapse0x23aedd0() {
   return (neuron0x23a7a70()*-3.20168);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2f10() {
   return (neuron0x23a7db0()*-0.0256583);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2f50() {
   return (neuron0x23a80f0()*0.407417);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2f90() {
   return (neuron0x23a8430()*1.14709);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae920() {
   return (neuron0x23a8770()*0.0306001);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae960() {
   return (neuron0x23a8cd0()*0.391794);
}

double NNfunction_nn_chi1_chi1::synapse0x23b30e0() {
   return (neuron0x23a9010()*0.307067);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3120() {
   return (neuron0x23a9350()*0.702997);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3160() {
   return (neuron0x23a9690()*0.800877);
}

double NNfunction_nn_chi1_chi1::synapse0x23b31a0() {
   return (neuron0x23a99d0()*-0.794795);
}

double NNfunction_nn_chi1_chi1::synapse0x23b31e0() {
   return (neuron0x23a9d10()*-2.94669);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3220() {
   return (neuron0x23aa050()*0.0812793);
}

double NNfunction_nn_chi1_chi1::synapse0x23b35a0() {
   return (neuron0x23a5400()*-0.408005);
}

double NNfunction_nn_chi1_chi1::synapse0x23b35e0() {
   return (neuron0x23a56b0()*0.140991);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3620() {
   return (neuron0x23a59f0()*-0.478437);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3660() {
   return (neuron0x23a5d30()*0.458076);
}

double NNfunction_nn_chi1_chi1::synapse0x23b36a0() {
   return (neuron0x23a6070()*0.180164);
}

double NNfunction_nn_chi1_chi1::synapse0x23b36e0() {
   return (neuron0x23a63b0()*-0.118011);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3720() {
   return (neuron0x23a66f0()*-0.162261);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3760() {
   return (neuron0x23a6a30()*0.0712639);
}

double NNfunction_nn_chi1_chi1::synapse0x23b37a0() {
   return (neuron0x23a6d70()*0.0052462);
}

double NNfunction_nn_chi1_chi1::synapse0x23b37e0() {
   return (neuron0x23a70b0()*0.3576);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3820() {
   return (neuron0x23a73f0()*-0.452587);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3860() {
   return (neuron0x23a7730()*-0.355621);
}

double NNfunction_nn_chi1_chi1::synapse0x23b38a0() {
   return (neuron0x23a7a70()*0.40764);
}

double NNfunction_nn_chi1_chi1::synapse0x23b38e0() {
   return (neuron0x23a7db0()*-1.57182);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3920() {
   return (neuron0x23a80f0()*0.811503);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3960() {
   return (neuron0x23a8430()*-0.476929);
}

double NNfunction_nn_chi1_chi1::synapse0x23b33f0() {
   return (neuron0x23a8770()*-1.51412);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3430() {
   return (neuron0x23a8cd0()*0.0315853);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3ab0() {
   return (neuron0x23a9010()*-0.151056);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3af0() {
   return (neuron0x23a9350()*-0.213664);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3b30() {
   return (neuron0x23a9690()*-1.29937);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3b70() {
   return (neuron0x23a99d0()*0.176935);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3bb0() {
   return (neuron0x23a9d10()*0.350824);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3bf0() {
   return (neuron0x23aa050()*0.407784);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3f70() {
   return (neuron0x23a5400()*0.0153007);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3fb0() {
   return (neuron0x23a56b0()*-0.0189443);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3ff0() {
   return (neuron0x23a59f0()*4.42217);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4030() {
   return (neuron0x23a5d30()*-0.0650319);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4070() {
   return (neuron0x23a6070()*-0.078944);
}

double NNfunction_nn_chi1_chi1::synapse0x23b40b0() {
   return (neuron0x23a63b0()*0.0497675);
}

double NNfunction_nn_chi1_chi1::synapse0x23b40f0() {
   return (neuron0x23a66f0()*0.00913277);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4130() {
   return (neuron0x23a6a30()*-0.0048773);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4170() {
   return (neuron0x23a6d70()*0.00538994);
}

double NNfunction_nn_chi1_chi1::synapse0x23b41b0() {
   return (neuron0x23a70b0()*-0.0138344);
}

double NNfunction_nn_chi1_chi1::synapse0x23b41f0() {
   return (neuron0x23a73f0()*-0.0407341);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4230() {
   return (neuron0x23a7730()*1.09595);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4270() {
   return (neuron0x23a7a70()*0.215667);
}

double NNfunction_nn_chi1_chi1::synapse0x23b42b0() {
   return (neuron0x23a7db0()*-0.0443638);
}

double NNfunction_nn_chi1_chi1::synapse0x23b42f0() {
   return (neuron0x23a80f0()*-0.0453611);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4330() {
   return (neuron0x23a8430()*-0.114277);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3dc0() {
   return (neuron0x23a8770()*0.0460397);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3e00() {
   return (neuron0x23a8cd0()*-0.22705);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4480() {
   return (neuron0x23a9010()*-0.0444722);
}

double NNfunction_nn_chi1_chi1::synapse0x23b44c0() {
   return (neuron0x23a9350()*-0.0254365);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4500() {
   return (neuron0x23a9690()*0.0221774);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4540() {
   return (neuron0x23a99d0()*-0.027548);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4580() {
   return (neuron0x23a9d10()*-0.0162185);
}

double NNfunction_nn_chi1_chi1::synapse0x23b45c0() {
   return (neuron0x23aa050()*0.0897076);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4940() {
   return (neuron0x23a5400()*-0.00948627);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4980() {
   return (neuron0x23a56b0()*-0.0257807);
}

double NNfunction_nn_chi1_chi1::synapse0x23b49c0() {
   return (neuron0x23a59f0()*-1.3532);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4a00() {
   return (neuron0x23a5d30()*-0.00898234);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4a40() {
   return (neuron0x23a6070()*0.0655252);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4a80() {
   return (neuron0x23a63b0()*-0.00985424);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4ac0() {
   return (neuron0x23a66f0()*0.0499862);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4b00() {
   return (neuron0x23a6a30()*0.00391836);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4b40() {
   return (neuron0x23a6d70()*-0.0337783);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4b80() {
   return (neuron0x23a70b0()*0.0188034);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4bc0() {
   return (neuron0x23a73f0()*0.0301587);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4c00() {
   return (neuron0x23a7730()*-1.58012);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4c40() {
   return (neuron0x23a7a70()*0.428162);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4c80() {
   return (neuron0x23a7db0()*0.0590609);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4cc0() {
   return (neuron0x23a80f0()*-0.0809523);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4d00() {
   return (neuron0x23a8430()*0.0817513);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4790() {
   return (neuron0x23a8770()*-0.00145106);
}

double NNfunction_nn_chi1_chi1::synapse0x23b47d0() {
   return (neuron0x23a8cd0()*0.175209);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4e50() {
   return (neuron0x23a9010()*-0.00673356);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4e90() {
   return (neuron0x23a9350()*-0.0170249);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4ed0() {
   return (neuron0x23a9690()*0.044871);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4f10() {
   return (neuron0x23a99d0()*-0.00387311);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4f50() {
   return (neuron0x23a9d10()*0.0251716);
}

double NNfunction_nn_chi1_chi1::synapse0x23b4f90() {
   return (neuron0x23aa050()*0.0467615);
}

double NNfunction_nn_chi1_chi1::synapse0x23b5310() {
   return (neuron0x23a5400()*0.0476938);
}

double NNfunction_nn_chi1_chi1::synapse0x23a5590() {
   return (neuron0x23a56b0()*-0.0382682);
}

double NNfunction_nn_chi1_chi1::synapse0x23a55d0() {
   return (neuron0x23a59f0()*0.61155);
}

double NNfunction_nn_chi1_chi1::synapse0x23a58d0() {
   return (neuron0x23a5d30()*0.0197801);
}

double NNfunction_nn_chi1_chi1::synapse0x23a5910() {
   return (neuron0x23a6070()*0.0489999);
}

double NNfunction_nn_chi1_chi1::synapse0x23a5c10() {
   return (neuron0x23a63b0()*0.0353588);
}

double NNfunction_nn_chi1_chi1::synapse0x23a5c50() {
   return (neuron0x23a66f0()*0.0340644);
}

double NNfunction_nn_chi1_chi1::synapse0x23a5f50() {
   return (neuron0x23a6a30()*-0.0109443);
}

double NNfunction_nn_chi1_chi1::synapse0x23a5f90() {
   return (neuron0x23a6d70()*0.00472925);
}

double NNfunction_nn_chi1_chi1::synapse0x23a6290() {
   return (neuron0x23a70b0()*-0.015377);
}

double NNfunction_nn_chi1_chi1::synapse0x23a62d0() {
   return (neuron0x23a73f0()*0.00438441);
}

double NNfunction_nn_chi1_chi1::synapse0x23a65d0() {
   return (neuron0x23a7730()*0.0652087);
}

double NNfunction_nn_chi1_chi1::synapse0x23a6610() {
   return (neuron0x23a7a70()*0.0133593);
}

double NNfunction_nn_chi1_chi1::synapse0x23a6910() {
   return (neuron0x23a7db0()*0.0262368);
}

double NNfunction_nn_chi1_chi1::synapse0x23a6950() {
   return (neuron0x23a80f0()*-0.0155514);
}

double NNfunction_nn_chi1_chi1::synapse0x23a6c50() {
   return (neuron0x23a8430()*0.0410937);
}

double NNfunction_nn_chi1_chi1::synapse0x23a6c90() {
   return (neuron0x23a8770()*0.088087);
}

double NNfunction_nn_chi1_chi1::synapse0x23a6f90() {
   return (neuron0x23a8cd0()*0.0713951);
}

double NNfunction_nn_chi1_chi1::synapse0x23a6fd0() {
   return (neuron0x23a9010()*0.0236709);
}

double NNfunction_nn_chi1_chi1::synapse0x23a72d0() {
   return (neuron0x23a9350()*-0.0270093);
}

double NNfunction_nn_chi1_chi1::synapse0x23a7310() {
   return (neuron0x23a9690()*0.046645);
}

double NNfunction_nn_chi1_chi1::synapse0x23a7610() {
   return (neuron0x23a99d0()*0.0183582);
}

double NNfunction_nn_chi1_chi1::synapse0x23a7650() {
   return (neuron0x23a9d10()*0.0163885);
}

double NNfunction_nn_chi1_chi1::synapse0x23a7950() {
   return (neuron0x23aa050()*0.119375);
}

double NNfunction_nn_chi1_chi1::synapse0x23a7990() {
   return (neuron0x23a5400()*-0.0203775);
}

double NNfunction_nn_chi1_chi1::synapse0x23a8650() {
   return (neuron0x23a56b0()*-0.0339799);
}

double NNfunction_nn_chi1_chi1::synapse0x23a8690() {
   return (neuron0x23a59f0()*0.102495);
}

double NNfunction_nn_chi1_chi1::synapse0x23b5160() {
   return (neuron0x23a5d30()*0.00279833);
}

double NNfunction_nn_chi1_chi1::synapse0x23b51a0() {
   return (neuron0x23a6070()*-0.00686191);
}

double NNfunction_nn_chi1_chi1::synapse0x23a8990() {
   return (neuron0x23a63b0()*-0.0137787);
}

double NNfunction_nn_chi1_chi1::synapse0x23a89d0() {
   return (neuron0x23a66f0()*-0.0101495);
}

double NNfunction_nn_chi1_chi1::synapse0x23a8ef0() {
   return (neuron0x23a6a30()*0.00919943);
}

double NNfunction_nn_chi1_chi1::synapse0x23a8f30() {
   return (neuron0x23a6d70()*0.0152776);
}

double NNfunction_nn_chi1_chi1::synapse0x23a9230() {
   return (neuron0x23a70b0()*0.00574508);
}

double NNfunction_nn_chi1_chi1::synapse0x23a9270() {
   return (neuron0x23a73f0()*0.00688993);
}

double NNfunction_nn_chi1_chi1::synapse0x23a9570() {
   return (neuron0x23a7730()*-0.0304727);
}

double NNfunction_nn_chi1_chi1::synapse0x23a95b0() {
   return (neuron0x23a7a70()*-0.0235355);
}

double NNfunction_nn_chi1_chi1::synapse0x23a98b0() {
   return (neuron0x23a7db0()*-0.0105825);
}

double NNfunction_nn_chi1_chi1::synapse0x23a98f0() {
   return (neuron0x23a80f0()*-0.503511);
}

double NNfunction_nn_chi1_chi1::synapse0x23a9bf0() {
   return (neuron0x23a8430()*-0.0387862);
}

double NNfunction_nn_chi1_chi1::synapse0x23a9c30() {
   return (neuron0x23a8770()*0.00414946);
}

double NNfunction_nn_chi1_chi1::synapse0x23a9f30() {
   return (neuron0x23a8cd0()*-0.0185354);
}

double NNfunction_nn_chi1_chi1::synapse0x23a9f70() {
   return (neuron0x23a9010()*-0.0262984);
}

double NNfunction_nn_chi1_chi1::synapse0x23aa270() {
   return (neuron0x23a9350()*-0.00202655);
}

double NNfunction_nn_chi1_chi1::synapse0x23aa2b0() {
   return (neuron0x23a9690()*-0.0245755);
}

double NNfunction_nn_chi1_chi1::synapse0x23a7c90() {
   return (neuron0x23a99d0()*-0.0092916);
}

double NNfunction_nn_chi1_chi1::synapse0x23a7cd0() {
   return (neuron0x23a9d10()*0.00425623);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7080() {
   return (neuron0x23aa050()*7.13082);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7400() {
   return (neuron0x23a5400()*-0.0419371);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7440() {
   return (neuron0x23a56b0()*0.0152812);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7480() {
   return (neuron0x23a59f0()*1.01628);
}

double NNfunction_nn_chi1_chi1::synapse0x23b74c0() {
   return (neuron0x23a5d30()*0.000581613);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7500() {
   return (neuron0x23a6070()*-0.0137405);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7540() {
   return (neuron0x23a63b0()*-0.0103597);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7580() {
   return (neuron0x23a66f0()*-0.00202468);
}

double NNfunction_nn_chi1_chi1::synapse0x23b75c0() {
   return (neuron0x23a6a30()*0.0092457);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7600() {
   return (neuron0x23a6d70()*0.00566026);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7640() {
   return (neuron0x23a70b0()*-0.00581049);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7680() {
   return (neuron0x23a73f0()*0.00288906);
}

double NNfunction_nn_chi1_chi1::synapse0x23b76c0() {
   return (neuron0x23a7730()*-0.0542312);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7700() {
   return (neuron0x23a7a70()*-0.00443905);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7740() {
   return (neuron0x23a7db0()*0.00736867);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7780() {
   return (neuron0x23a80f0()*-0.394431);
}

double NNfunction_nn_chi1_chi1::synapse0x23b77c0() {
   return (neuron0x23a8430()*-0.0240425);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7250() {
   return (neuron0x23a8770()*0.00501144);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7290() {
   return (neuron0x23a8cd0()*-0.0292026);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7910() {
   return (neuron0x23a9010()*-0.00560255);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7950() {
   return (neuron0x23a9350()*0.0109349);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7990() {
   return (neuron0x23a9690()*0.0107524);
}

double NNfunction_nn_chi1_chi1::synapse0x23b79d0() {
   return (neuron0x23a99d0()*0.000488147);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7a10() {
   return (neuron0x23a9d10()*-0.0042711);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7a50() {
   return (neuron0x23aa050()*-7.56594);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7dd0() {
   return (neuron0x23a5400()*0.0714118);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7e10() {
   return (neuron0x23a56b0()*-0.0883209);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7e50() {
   return (neuron0x23a59f0()*0.863329);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7e90() {
   return (neuron0x23a5d30()*0.198402);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7ed0() {
   return (neuron0x23a6070()*-0.363996);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7f10() {
   return (neuron0x23a63b0()*-0.00593297);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7f50() {
   return (neuron0x23a66f0()*0.0226297);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7f90() {
   return (neuron0x23a6a30()*-0.395291);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7fd0() {
   return (neuron0x23a6d70()*-0.0969944);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8010() {
   return (neuron0x23a70b0()*-0.112963);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8050() {
   return (neuron0x23a73f0()*0.104524);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8090() {
   return (neuron0x23a7730()*-1.52823);
}

double NNfunction_nn_chi1_chi1::synapse0x23b80d0() {
   return (neuron0x23a7a70()*0.537665);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8110() {
   return (neuron0x23a7db0()*0.557516);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8150() {
   return (neuron0x23a80f0()*-0.20186);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8190() {
   return (neuron0x23a8430()*-0.0398769);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7c20() {
   return (neuron0x23a8770()*0.703345);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7c60() {
   return (neuron0x23a8cd0()*-0.549958);
}

double NNfunction_nn_chi1_chi1::synapse0x23b82e0() {
   return (neuron0x23a9010()*-0.0215476);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8320() {
   return (neuron0x23a9350()*-0.188354);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8360() {
   return (neuron0x23a9690()*0.246349);
}

double NNfunction_nn_chi1_chi1::synapse0x23b83a0() {
   return (neuron0x23a99d0()*-0.304575);
}

double NNfunction_nn_chi1_chi1::synapse0x23b83e0() {
   return (neuron0x23a9d10()*0.0691175);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8420() {
   return (neuron0x23aa050()*-0.25873);
}

double NNfunction_nn_chi1_chi1::synapse0x23b87a0() {
   return (neuron0x23a5400()*0.130596);
}

double NNfunction_nn_chi1_chi1::synapse0x23b87e0() {
   return (neuron0x23a56b0()*0.291876);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8820() {
   return (neuron0x23a59f0()*3.32447);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8860() {
   return (neuron0x23a5d30()*0.357545);
}

double NNfunction_nn_chi1_chi1::synapse0x23b88a0() {
   return (neuron0x23a6070()*0.0217953);
}

double NNfunction_nn_chi1_chi1::synapse0x23b88e0() {
   return (neuron0x23a63b0()*-0.138683);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8920() {
   return (neuron0x23a66f0()*-0.171924);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8960() {
   return (neuron0x23a6a30()*-0.0703768);
}

double NNfunction_nn_chi1_chi1::synapse0x23b89a0() {
   return (neuron0x23a6d70()*0.194257);
}

double NNfunction_nn_chi1_chi1::synapse0x23b89e0() {
   return (neuron0x23a70b0()*-0.193994);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8a20() {
   return (neuron0x23a73f0()*-0.185103);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8a60() {
   return (neuron0x23a7730()*0.411262);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8aa0() {
   return (neuron0x23a7a70()*-0.743533);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8ae0() {
   return (neuron0x23a7db0()*0.123492);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8b20() {
   return (neuron0x23a80f0()*1.6448);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8b60() {
   return (neuron0x23a8430()*0.115105);
}

double NNfunction_nn_chi1_chi1::synapse0x23b85f0() {
   return (neuron0x23a8770()*-0.08231);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8630() {
   return (neuron0x23a8cd0()*-0.0358826);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8cb0() {
   return (neuron0x23a9010()*-0.166221);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8cf0() {
   return (neuron0x23a9350()*0.14936);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8d30() {
   return (neuron0x23a9690()*-0.312015);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8d70() {
   return (neuron0x23a99d0()*0.0521669);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8db0() {
   return (neuron0x23a9d10()*0.0451314);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8df0() {
   return (neuron0x23aa050()*0.0140563);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9170() {
   return (neuron0x23a5400()*-0.0842775);
}

double NNfunction_nn_chi1_chi1::synapse0x23b91b0() {
   return (neuron0x23a56b0()*-0.0251332);
}

double NNfunction_nn_chi1_chi1::synapse0x23b91f0() {
   return (neuron0x23a59f0()*-0.532626);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9230() {
   return (neuron0x23a5d30()*0.00465663);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9270() {
   return (neuron0x23a6070()*-0.0133823);
}

double NNfunction_nn_chi1_chi1::synapse0x23b92b0() {
   return (neuron0x23a63b0()*-0.0122326);
}

double NNfunction_nn_chi1_chi1::synapse0x23b92f0() {
   return (neuron0x23a66f0()*-0.00457258);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9330() {
   return (neuron0x23a6a30()*0.0185672);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9370() {
   return (neuron0x23a6d70()*-0.0271511);
}

double NNfunction_nn_chi1_chi1::synapse0x23b93b0() {
   return (neuron0x23a70b0()*-0.00428319);
}

double NNfunction_nn_chi1_chi1::synapse0x23b93f0() {
   return (neuron0x23a73f0()*0.00320699);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9430() {
   return (neuron0x23a7730()*0.246888);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9470() {
   return (neuron0x23a7a70()*0.0257405);
}

double NNfunction_nn_chi1_chi1::synapse0x23b94b0() {
   return (neuron0x23a7db0()*-0.0148851);
}

double NNfunction_nn_chi1_chi1::synapse0x23b94f0() {
   return (neuron0x23a80f0()*0.132047);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9530() {
   return (neuron0x23a8430()*-0.00498697);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8fc0() {
   return (neuron0x23a8770()*-0.0174311);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9000() {
   return (neuron0x23a8cd0()*-0.0250616);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9680() {
   return (neuron0x23a9010()*-0.00588058);
}

double NNfunction_nn_chi1_chi1::synapse0x23b96c0() {
   return (neuron0x23a9350()*0.018364);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9700() {
   return (neuron0x23a9690()*-0.0357683);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9740() {
   return (neuron0x23a99d0()*-0.0173572);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9780() {
   return (neuron0x23a9d10()*0.0106046);
}

double NNfunction_nn_chi1_chi1::synapse0x23b97c0() {
   return (neuron0x23aa050()*-5.49416);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9b40() {
   return (neuron0x23a5400()*0.084411);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9b80() {
   return (neuron0x23a56b0()*1.05544);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9bc0() {
   return (neuron0x23a59f0()*0.735197);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9c00() {
   return (neuron0x23a5d30()*0.710732);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9c40() {
   return (neuron0x23a6070()*0.107929);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9c80() {
   return (neuron0x23a63b0()*0.302478);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9cc0() {
   return (neuron0x23a66f0()*0.0365325);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9d00() {
   return (neuron0x23a6a30()*-0.0149707);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9d40() {
   return (neuron0x23a6d70()*0.175177);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1f00() {
   return (neuron0x23a70b0()*0.247449);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1f40() {
   return (neuron0x23a73f0()*-0.245057);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1f80() {
   return (neuron0x23a7730()*1.00971);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1fc0() {
   return (neuron0x23a7a70()*-0.165587);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2000() {
   return (neuron0x23a7db0()*0.531666);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2040() {
   return (neuron0x23a80f0()*0.484663);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2080() {
   return (neuron0x23a8430()*0.0301103);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9990() {
   return (neuron0x23a8770()*-0.157659);
}

double NNfunction_nn_chi1_chi1::synapse0x23b99d0() {
   return (neuron0x23a8cd0()*0.618312);
}

double NNfunction_nn_chi1_chi1::synapse0x23b21d0() {
   return (neuron0x23a9010()*0.213259);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2210() {
   return (neuron0x23a9350()*-0.00407795);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2250() {
   return (neuron0x23a9690()*-0.343998);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2290() {
   return (neuron0x23a99d0()*-0.498652);
}

double NNfunction_nn_chi1_chi1::synapse0x23b22d0() {
   return (neuron0x23a9d10()*-0.0539649);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2310() {
   return (neuron0x23aa050()*-0.44794);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2690() {
   return (neuron0x23a5400()*0.00851011);
}

double NNfunction_nn_chi1_chi1::synapse0x23b26d0() {
   return (neuron0x23a56b0()*-10.3803);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2710() {
   return (neuron0x23a59f0()*0.65312);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2750() {
   return (neuron0x23a5d30()*-0.0045928);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2790() {
   return (neuron0x23a6070()*0.00980785);
}

double NNfunction_nn_chi1_chi1::synapse0x23b27d0() {
   return (neuron0x23a63b0()*0.00257266);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2810() {
   return (neuron0x23a66f0()*0.000416627);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2850() {
   return (neuron0x23a6a30()*-0.0145075);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2890() {
   return (neuron0x23a6d70()*0.00214205);
}

double NNfunction_nn_chi1_chi1::synapse0x23b28d0() {
   return (neuron0x23a70b0()*-0.00330171);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2910() {
   return (neuron0x23a73f0()*-0.00270538);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2950() {
   return (neuron0x23a7730()*0.147838);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2990() {
   return (neuron0x23a7a70()*0.0148127);
}

double NNfunction_nn_chi1_chi1::synapse0x23b29d0() {
   return (neuron0x23a7db0()*0.000919605);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2a10() {
   return (neuron0x23a80f0()*0.0103006);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2a50() {
   return (neuron0x23a8430()*-0.0226692);
}

double NNfunction_nn_chi1_chi1::synapse0x23b24e0() {
   return (neuron0x23a8770()*-0.00890721);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2520() {
   return (neuron0x23a8cd0()*-0.00541049);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2ba0() {
   return (neuron0x23a9010()*-0.00491819);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2be0() {
   return (neuron0x23a9350()*0.00127038);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2c20() {
   return (neuron0x23a9690()*0.0138495);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2c60() {
   return (neuron0x23a99d0()*-0.0154462);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2ca0() {
   return (neuron0x23a9d10()*0.00314395);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2ce0() {
   return (neuron0x23aa050()*-0.010408);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2eb0() {
   return (neuron0x23a5400()*0.0410579);
}

double NNfunction_nn_chi1_chi1::synapse0x23bbf40() {
   return (neuron0x23a56b0()*-10.1838);
}

double NNfunction_nn_chi1_chi1::synapse0x23bbf80() {
   return (neuron0x23a59f0()*-0.231751);
}

double NNfunction_nn_chi1_chi1::synapse0x23bbfc0() {
   return (neuron0x23a5d30()*0.042864);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc000() {
   return (neuron0x23a6070()*-0.0216503);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc040() {
   return (neuron0x23a63b0()*0.0228309);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc080() {
   return (neuron0x23a66f0()*-0.0320997);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc0c0() {
   return (neuron0x23a6a30()*-0.0073265);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc100() {
   return (neuron0x23a6d70()*-0.0317459);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc140() {
   return (neuron0x23a70b0()*0.0125897);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc180() {
   return (neuron0x23a73f0()*-0.00377793);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc1c0() {
   return (neuron0x23a7730()*0.27508);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc200() {
   return (neuron0x23a7a70()*-0.0136479);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc240() {
   return (neuron0x23a7db0()*-0.0116717);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc280() {
   return (neuron0x23a80f0()*-0.452498);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc2c0() {
   return (neuron0x23a8430()*0.0460123);
}

double NNfunction_nn_chi1_chi1::synapse0x23bbd90() {
   return (neuron0x23a8770()*0.0500608);
}

double NNfunction_nn_chi1_chi1::synapse0x23bbdd0() {
   return (neuron0x23a8cd0()*0.0111453);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc410() {
   return (neuron0x23a9010()*0.00987906);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc450() {
   return (neuron0x23a9350()*-0.0617982);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc490() {
   return (neuron0x23a9690()*-0.0532969);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc4d0() {
   return (neuron0x23a99d0()*-0.0226004);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc510() {
   return (neuron0x23a9d10()*0.00594617);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc550() {
   return (neuron0x23aa050()*0.091872);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc8d0() {
   return (neuron0x23a5400()*0.08409);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc910() {
   return (neuron0x23a56b0()*0.610084);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc950() {
   return (neuron0x23a59f0()*-1.71808);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc990() {
   return (neuron0x23a5d30()*1.15749);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc9d0() {
   return (neuron0x23a6070()*-0.320893);
}

double NNfunction_nn_chi1_chi1::synapse0x23bca10() {
   return (neuron0x23a63b0()*-1.32155);
}

double NNfunction_nn_chi1_chi1::synapse0x23bca50() {
   return (neuron0x23a66f0()*0.231715);
}

double NNfunction_nn_chi1_chi1::synapse0x23bca90() {
   return (neuron0x23a6a30()*-0.166453);
}

double NNfunction_nn_chi1_chi1::synapse0x23bcad0() {
   return (neuron0x23a6d70()*0.335517);
}

double NNfunction_nn_chi1_chi1::synapse0x23bcb10() {
   return (neuron0x23a70b0()*-0.314239);
}

double NNfunction_nn_chi1_chi1::synapse0x23bcb50() {
   return (neuron0x23a73f0()*-0.208026);
}

double NNfunction_nn_chi1_chi1::synapse0x23bcb90() {
   return (neuron0x23a7730()*-0.264843);
}

double NNfunction_nn_chi1_chi1::synapse0x23bcbd0() {
   return (neuron0x23a7a70()*2.46759);
}

double NNfunction_nn_chi1_chi1::synapse0x23bcc10() {
   return (neuron0x23a7db0()*-0.44072);
}

double NNfunction_nn_chi1_chi1::synapse0x23bcc50() {
   return (neuron0x23a80f0()*-0.522217);
}

double NNfunction_nn_chi1_chi1::synapse0x23bcc90() {
   return (neuron0x23a8430()*0.443579);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc720() {
   return (neuron0x23a8770()*-0.401834);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc760() {
   return (neuron0x23a8cd0()*0.613606);
}

double NNfunction_nn_chi1_chi1::synapse0x23bcde0() {
   return (neuron0x23a9010()*0.627427);
}

double NNfunction_nn_chi1_chi1::synapse0x23bce20() {
   return (neuron0x23a9350()*0.14074);
}

double NNfunction_nn_chi1_chi1::synapse0x23bce60() {
   return (neuron0x23a9690()*-0.556072);
}

double NNfunction_nn_chi1_chi1::synapse0x23bcea0() {
   return (neuron0x23a99d0()*-0.389289);
}

double NNfunction_nn_chi1_chi1::synapse0x23bcee0() {
   return (neuron0x23a9d10()*1.41754);
}

double NNfunction_nn_chi1_chi1::synapse0x23bcf20() {
   return (neuron0x23aa050()*0.395648);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd2a0() {
   return (neuron0x23a5400()*0.197834);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd2e0() {
   return (neuron0x23a56b0()*-0.986362);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd320() {
   return (neuron0x23a59f0()*0.481838);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd360() {
   return (neuron0x23a5d30()*-1.90557);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd3a0() {
   return (neuron0x23a6070()*-0.641687);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd3e0() {
   return (neuron0x23a63b0()*0.388045);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd420() {
   return (neuron0x23a66f0()*-0.184583);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd460() {
   return (neuron0x23a6a30()*0.49249);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd4a0() {
   return (neuron0x23a6d70()*-0.644939);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd4e0() {
   return (neuron0x23a70b0()*-0.770486);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd520() {
   return (neuron0x23a73f0()*1.49364);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd560() {
   return (neuron0x23a7730()*-1.80826);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd5a0() {
   return (neuron0x23a7a70()*-0.484183);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd5e0() {
   return (neuron0x23a7db0()*0.209736);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd620() {
   return (neuron0x23a80f0()*-0.243021);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd660() {
   return (neuron0x23a8430()*-0.417343);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd0f0() {
   return (neuron0x23a8770()*0.985991);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd130() {
   return (neuron0x23a8cd0()*-1.28049);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd7b0() {
   return (neuron0x23a9010()*-0.311819);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd7f0() {
   return (neuron0x23a9350()*0.00447957);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd830() {
   return (neuron0x23a9690()*0.34144);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd870() {
   return (neuron0x23a99d0()*0.816803);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd8b0() {
   return (neuron0x23a9d10()*0.387007);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd8f0() {
   return (neuron0x23aa050()*0.249645);
}

double NNfunction_nn_chi1_chi1::synapse0x23bdc70() {
   return (neuron0x23a5400()*0.091074);
}

double NNfunction_nn_chi1_chi1::synapse0x23bdcb0() {
   return (neuron0x23a56b0()*-0.00849973);
}

double NNfunction_nn_chi1_chi1::synapse0x23bdcf0() {
   return (neuron0x23a59f0()*3.97548);
}

double NNfunction_nn_chi1_chi1::synapse0x23bdd30() {
   return (neuron0x23a5d30()*0.0200688);
}

double NNfunction_nn_chi1_chi1::synapse0x23bdd70() {
   return (neuron0x23a6070()*-0.0557216);
}

double NNfunction_nn_chi1_chi1::synapse0x23bddb0() {
   return (neuron0x23a63b0()*0.0289731);
}

double NNfunction_nn_chi1_chi1::synapse0x23bddf0() {
   return (neuron0x23a66f0()*0.00834178);
}

double NNfunction_nn_chi1_chi1::synapse0x23bde30() {
   return (neuron0x23a6a30()*-0.0385918);
}

double NNfunction_nn_chi1_chi1::synapse0x23bde70() {
   return (neuron0x23a6d70()*0.0754963);
}

double NNfunction_nn_chi1_chi1::synapse0x23bdeb0() {
   return (neuron0x23a70b0()*0.0543691);
}

double NNfunction_nn_chi1_chi1::synapse0x23bdef0() {
   return (neuron0x23a73f0()*-0.0298795);
}

double NNfunction_nn_chi1_chi1::synapse0x23bdf30() {
   return (neuron0x23a7730()*0.881657);
}

double NNfunction_nn_chi1_chi1::synapse0x23bdf70() {
   return (neuron0x23a7a70()*0.0642511);
}

double NNfunction_nn_chi1_chi1::synapse0x23bdfb0() {
   return (neuron0x23a7db0()*-0.103789);
}

double NNfunction_nn_chi1_chi1::synapse0x23bdff0() {
   return (neuron0x23a80f0()*-0.363227);
}

double NNfunction_nn_chi1_chi1::synapse0x23be030() {
   return (neuron0x23a8430()*-0.044376);
}

double NNfunction_nn_chi1_chi1::synapse0x23bdac0() {
   return (neuron0x23a8770()*0.0271237);
}

double NNfunction_nn_chi1_chi1::synapse0x23bdb00() {
   return (neuron0x23a8cd0()*-0.0726654);
}

double NNfunction_nn_chi1_chi1::synapse0x23be180() {
   return (neuron0x23a9010()*0.0288593);
}

double NNfunction_nn_chi1_chi1::synapse0x23be1c0() {
   return (neuron0x23a9350()*-0.0293568);
}

double NNfunction_nn_chi1_chi1::synapse0x23be200() {
   return (neuron0x23a9690()*0.0394699);
}

double NNfunction_nn_chi1_chi1::synapse0x23be240() {
   return (neuron0x23a99d0()*0.0244841);
}

double NNfunction_nn_chi1_chi1::synapse0x23be280() {
   return (neuron0x23a9d10()*0.0185563);
}

double NNfunction_nn_chi1_chi1::synapse0x23be2c0() {
   return (neuron0x23aa050()*-0.0757398);
}

double NNfunction_nn_chi1_chi1::synapse0x23be640() {
   return (neuron0x23a5400()*-0.00173916);
}

double NNfunction_nn_chi1_chi1::synapse0x23be680() {
   return (neuron0x23a56b0()*0.0258933);
}

double NNfunction_nn_chi1_chi1::synapse0x23be6c0() {
   return (neuron0x23a59f0()*-0.0552721);
}

double NNfunction_nn_chi1_chi1::synapse0x23be700() {
   return (neuron0x23a5d30()*0.0221107);
}

double NNfunction_nn_chi1_chi1::synapse0x23be740() {
   return (neuron0x23a6070()*-0.00510678);
}

double NNfunction_nn_chi1_chi1::synapse0x23be780() {
   return (neuron0x23a63b0()*-0.00619367);
}

double NNfunction_nn_chi1_chi1::synapse0x23be7c0() {
   return (neuron0x23a66f0()*-0.00527);
}

double NNfunction_nn_chi1_chi1::synapse0x23be800() {
   return (neuron0x23a6a30()*0.00453813);
}

double NNfunction_nn_chi1_chi1::synapse0x23be840() {
   return (neuron0x23a6d70()*-0.0054101);
}

double NNfunction_nn_chi1_chi1::synapse0x23be880() {
   return (neuron0x23a70b0()*0.00362956);
}

double NNfunction_nn_chi1_chi1::synapse0x23be8c0() {
   return (neuron0x23a73f0()*0.000981392);
}

double NNfunction_nn_chi1_chi1::synapse0x23be900() {
   return (neuron0x23a7730()*0.024612);
}

double NNfunction_nn_chi1_chi1::synapse0x23be940() {
   return (neuron0x23a7a70()*0.0125661);
}

double NNfunction_nn_chi1_chi1::synapse0x23be980() {
   return (neuron0x23a7db0()*-0.00739208);
}

double NNfunction_nn_chi1_chi1::synapse0x23be9c0() {
   return (neuron0x23a80f0()*0.364719);
}

double NNfunction_nn_chi1_chi1::synapse0x23bea00() {
   return (neuron0x23a8430()*0.0164081);
}

double NNfunction_nn_chi1_chi1::synapse0x23be490() {
   return (neuron0x23a8770()*-0.0275602);
}

double NNfunction_nn_chi1_chi1::synapse0x23be4d0() {
   return (neuron0x23a8cd0()*0.0221427);
}

double NNfunction_nn_chi1_chi1::synapse0x23beb50() {
   return (neuron0x23a9010()*-0.000767147);
}

double NNfunction_nn_chi1_chi1::synapse0x23beb90() {
   return (neuron0x23a9350()*0.00982852);
}

double NNfunction_nn_chi1_chi1::synapse0x23bebd0() {
   return (neuron0x23a9690()*-0.012965);
}

double NNfunction_nn_chi1_chi1::synapse0x23bec10() {
   return (neuron0x23a99d0()*0.00143726);
}

double NNfunction_nn_chi1_chi1::synapse0x23bec50() {
   return (neuron0x23a9d10()*-0.000406407);
}

double NNfunction_nn_chi1_chi1::synapse0x23bec90() {
   return (neuron0x23aa050()*-0.00340056);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf010() {
   return (neuron0x23a5400()*0.0421023);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf050() {
   return (neuron0x23a56b0()*0.210233);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf090() {
   return (neuron0x23a59f0()*0.470732);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf0d0() {
   return (neuron0x23a5d30()*0.00872581);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf110() {
   return (neuron0x23a6070()*0.0170842);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf150() {
   return (neuron0x23a63b0()*0.013966);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf190() {
   return (neuron0x23a66f0()*0.0208625);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf1d0() {
   return (neuron0x23a6a30()*0.0149471);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf210() {
   return (neuron0x23a6d70()*0.0139421);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf250() {
   return (neuron0x23a70b0()*-0.0354863);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf290() {
   return (neuron0x23a73f0()*-8.96038e-05);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf2d0() {
   return (neuron0x23a7730()*-0.00258915);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf310() {
   return (neuron0x23a7a70()*-0.0193853);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf350() {
   return (neuron0x23a7db0()*-0.00675225);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf390() {
   return (neuron0x23a80f0()*1.99234);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf3d0() {
   return (neuron0x23a8430()*-0.0743461);
}

double NNfunction_nn_chi1_chi1::synapse0x23bee60() {
   return (neuron0x23a8770()*-0.0091309);
}

double NNfunction_nn_chi1_chi1::synapse0x23beea0() {
   return (neuron0x23a8cd0()*-0.145976);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf520() {
   return (neuron0x23a9010()*-0.0510583);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf560() {
   return (neuron0x23a9350()*-0.00465014);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf5a0() {
   return (neuron0x23a9690()*0.010019);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf5e0() {
   return (neuron0x23a99d0()*0.00790847);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf620() {
   return (neuron0x23a9d10()*-0.00971226);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf660() {
   return (neuron0x23aa050()*0.044774);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf9e0() {
   return (neuron0x23a5400()*0.0466475);
}

double NNfunction_nn_chi1_chi1::synapse0x23bfa20() {
   return (neuron0x23a56b0()*-0.384959);
}

double NNfunction_nn_chi1_chi1::synapse0x23bfa60() {
   return (neuron0x23a59f0()*-1.89472);
}

double NNfunction_nn_chi1_chi1::synapse0x23bfaa0() {
   return (neuron0x23a5d30()*1.0171);
}

double NNfunction_nn_chi1_chi1::synapse0x23bfae0() {
   return (neuron0x23a6070()*-0.301305);
}

double NNfunction_nn_chi1_chi1::synapse0x23bfb20() {
   return (neuron0x23a63b0()*-0.0952878);
}

double NNfunction_nn_chi1_chi1::synapse0x23bfb60() {
   return (neuron0x23a66f0()*-0.231829);
}

double NNfunction_nn_chi1_chi1::synapse0x23bfba0() {
   return (neuron0x23a6a30()*-1.48387);
}

double NNfunction_nn_chi1_chi1::synapse0x23bfbe0() {
   return (neuron0x23a6d70()*0.429805);
}

double NNfunction_nn_chi1_chi1::synapse0x23bfc20() {
   return (neuron0x23a70b0()*-0.307592);
}

double NNfunction_nn_chi1_chi1::synapse0x23bfc60() {
   return (neuron0x23a73f0()*0.255812);
}

double NNfunction_nn_chi1_chi1::synapse0x23bfca0() {
   return (neuron0x23a7730()*0.246969);
}

double NNfunction_nn_chi1_chi1::synapse0x23bfce0() {
   return (neuron0x23a7a70()*-1.06233);
}

double NNfunction_nn_chi1_chi1::synapse0x23bfd20() {
   return (neuron0x23a7db0()*-0.450096);
}

double NNfunction_nn_chi1_chi1::synapse0x23bfd60() {
   return (neuron0x23a80f0()*1.56901);
}

double NNfunction_nn_chi1_chi1::synapse0x23bfda0() {
   return (neuron0x23a8430()*0.326708);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf830() {
   return (neuron0x23a8770()*-0.361195);
}

double NNfunction_nn_chi1_chi1::synapse0x23bf870() {
   return (neuron0x23a8cd0()*0.686716);
}

double NNfunction_nn_chi1_chi1::synapse0x23bfef0() {
   return (neuron0x23a9010()*0.300736);
}

double NNfunction_nn_chi1_chi1::synapse0x23bff30() {
   return (neuron0x23a9350()*0.287081);
}

double NNfunction_nn_chi1_chi1::synapse0x23bff70() {
   return (neuron0x23a9690()*0.889573);
}

double NNfunction_nn_chi1_chi1::synapse0x23bffb0() {
   return (neuron0x23a99d0()*0.196214);
}

double NNfunction_nn_chi1_chi1::synapse0x23bfff0() {
   return (neuron0x23a9d10()*0.720605);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0030() {
   return (neuron0x23aa050()*0.0704327);
}

double NNfunction_nn_chi1_chi1::synapse0x23c03b0() {
   return (neuron0x23a5400()*-0.258001);
}

double NNfunction_nn_chi1_chi1::synapse0x23c03f0() {
   return (neuron0x23a56b0()*-0.388475);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0430() {
   return (neuron0x23a59f0()*1.15706);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0470() {
   return (neuron0x23a5d30()*0.18188);
}

double NNfunction_nn_chi1_chi1::synapse0x23c04b0() {
   return (neuron0x23a6070()*-0.136236);
}

double NNfunction_nn_chi1_chi1::synapse0x23c04f0() {
   return (neuron0x23a63b0()*-0.560177);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0530() {
   return (neuron0x23a66f0()*-0.471256);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0570() {
   return (neuron0x23a6a30()*0.412772);
}

double NNfunction_nn_chi1_chi1::synapse0x23c05b0() {
   return (neuron0x23a6d70()*-0.813174);
}

double NNfunction_nn_chi1_chi1::synapse0x23c05f0() {
   return (neuron0x23a70b0()*0.426432);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0630() {
   return (neuron0x23a73f0()*-0.307443);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0670() {
   return (neuron0x23a7730()*0.791802);
}

double NNfunction_nn_chi1_chi1::synapse0x23c06b0() {
   return (neuron0x23a7a70()*0.797222);
}

double NNfunction_nn_chi1_chi1::synapse0x23c06f0() {
   return (neuron0x23a7db0()*0.269298);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0730() {
   return (neuron0x23a80f0()*0.094696);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0770() {
   return (neuron0x23a8430()*0.413246);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0200() {
   return (neuron0x23a8770()*0.690197);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0240() {
   return (neuron0x23a8cd0()*0.0550308);
}

double NNfunction_nn_chi1_chi1::synapse0x23c08c0() {
   return (neuron0x23a9010()*-1.03636);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0900() {
   return (neuron0x23a9350()*-0.917088);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0940() {
   return (neuron0x23a9690()*0.0377107);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0980() {
   return (neuron0x23a99d0()*1.72042);
}

double NNfunction_nn_chi1_chi1::synapse0x23c09c0() {
   return (neuron0x23a9d10()*-1.49509);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0a00() {
   return (neuron0x23aa050()*0.390916);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0d80() {
   return (neuron0x23a5400()*0.00433258);
}

double NNfunction_nn_chi1_chi1::synapse0x23b5350() {
   return (neuron0x23a56b0()*0.00901281);
}

double NNfunction_nn_chi1_chi1::synapse0x23b5390() {
   return (neuron0x23a59f0()*0.163453);
}

double NNfunction_nn_chi1_chi1::synapse0x23b53d0() {
   return (neuron0x23a5d30()*0.00627851);
}

double NNfunction_nn_chi1_chi1::synapse0x23b5620() {
   return (neuron0x23a6070()*-0.00767105);
}

double NNfunction_nn_chi1_chi1::synapse0x23b5660() {
   return (neuron0x23a63b0()*-0.0119268);
}

double NNfunction_nn_chi1_chi1::synapse0x23b56a0() {
   return (neuron0x23a66f0()*-0.00215169);
}

double NNfunction_nn_chi1_chi1::synapse0x23b58f0() {
   return (neuron0x23a6a30()*0.00896248);
}

double NNfunction_nn_chi1_chi1::synapse0x23b5930() {
   return (neuron0x23a6d70()*-0.00378898);
}

double NNfunction_nn_chi1_chi1::synapse0x23b5b80() {
   return (neuron0x23a70b0()*-0.00300424);
}

double NNfunction_nn_chi1_chi1::synapse0x23b5bc0() {
   return (neuron0x23a73f0()*0.00621635);
}

double NNfunction_nn_chi1_chi1::synapse0x23b5c00() {
   return (neuron0x23a7730()*-0.030292);
}

double NNfunction_nn_chi1_chi1::synapse0x23b5e50() {
   return (neuron0x23a7a70()*-0.00587314);
}

double NNfunction_nn_chi1_chi1::synapse0x23b5e90() {
   return (neuron0x23a7db0()*0.00647115);
}

double NNfunction_nn_chi1_chi1::synapse0x23b60e0() {
   return (neuron0x23a80f0()*-0.344897);
}

double NNfunction_nn_chi1_chi1::synapse0x23b6120() {
   return (neuron0x23a8430()*-0.0237137);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0bd0() {
   return (neuron0x23a8770()*0.00724292);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0c10() {
   return (neuron0x23a8cd0()*-0.0269248);
}

double NNfunction_nn_chi1_chi1::synapse0x23b6270() {
   return (neuron0x23a9010()*-0.000583554);
}

double NNfunction_nn_chi1_chi1::synapse0x23b6780() {
   return (neuron0x23a9350()*0.00642446);
}

double NNfunction_nn_chi1_chi1::synapse0x23b67c0() {
   return (neuron0x23a9690()*0.025608);
}

double NNfunction_nn_chi1_chi1::synapse0x23b6800() {
   return (neuron0x23a99d0()*0.00444282);
}

double NNfunction_nn_chi1_chi1::synapse0x23b6a50() {
   return (neuron0x23a9d10()*-0.00449953);
}

double NNfunction_nn_chi1_chi1::synapse0x23b6a90() {
   return (neuron0x23aa050()*-7.52177);
}

double NNfunction_nn_chi1_chi1::synapse0x23b6340() {
   return (neuron0x23a5400()*-0.0307749);
}

double NNfunction_nn_chi1_chi1::synapse0x23b6380() {
   return (neuron0x23a56b0()*0.0358072);
}

double NNfunction_nn_chi1_chi1::synapse0x23b63c0() {
   return (neuron0x23a59f0()*-5.26584);
}

double NNfunction_nn_chi1_chi1::synapse0x23b6400() {
   return (neuron0x23a5d30()*0.00495222);
}

double NNfunction_nn_chi1_chi1::synapse0x23b6d80() {
   return (neuron0x23a6070()*0.0229726);
}

double NNfunction_nn_chi1_chi1::synapse0x23c30d0() {
   return (neuron0x23a63b0()*0.0126109);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3110() {
   return (neuron0x23a66f0()*4.92939e-05);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3150() {
   return (neuron0x23a6a30()*0.00990708);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3190() {
   return (neuron0x23a6d70()*-0.00731837);
}

double NNfunction_nn_chi1_chi1::synapse0x23c31d0() {
   return (neuron0x23a70b0()*0.0312803);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3210() {
   return (neuron0x23a73f0()*-0.0260909);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3250() {
   return (neuron0x23a7730()*0.611291);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3290() {
   return (neuron0x23a7a70()*-2.64605);
}

double NNfunction_nn_chi1_chi1::synapse0x23c32d0() {
   return (neuron0x23a7db0()*-0.00379901);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3310() {
   return (neuron0x23a80f0()*0.0727024);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3350() {
   return (neuron0x23a8430()*0.0339173);
}

double NNfunction_nn_chi1_chi1::synapse0x23b6c60() {
   return (neuron0x23a8770()*-0.00838055);
}

double NNfunction_nn_chi1_chi1::synapse0x23b6ca0() {
   return (neuron0x23a8cd0()*0.0664534);
}

double NNfunction_nn_chi1_chi1::synapse0x23c34a0() {
   return (neuron0x23a9010()*0.000605957);
}

double NNfunction_nn_chi1_chi1::synapse0x23c34e0() {
   return (neuron0x23a9350()*0.0288525);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3520() {
   return (neuron0x23a9690()*-0.0165216);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3560() {
   return (neuron0x23a99d0()*0.000337265);
}

double NNfunction_nn_chi1_chi1::synapse0x23c35a0() {
   return (neuron0x23a9d10()*0.00879587);
}

double NNfunction_nn_chi1_chi1::synapse0x23c35e0() {
   return (neuron0x23aa050()*0.0140721);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3960() {
   return (neuron0x23a5400()*0.0379515);
}

double NNfunction_nn_chi1_chi1::synapse0x23c39a0() {
   return (neuron0x23a56b0()*0.0571566);
}

double NNfunction_nn_chi1_chi1::synapse0x23c39e0() {
   return (neuron0x23a59f0()*-3.66255);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3a20() {
   return (neuron0x23a5d30()*0.040883);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3a60() {
   return (neuron0x23a6070()*-0.00881537);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3aa0() {
   return (neuron0x23a63b0()*0.0328261);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3ae0() {
   return (neuron0x23a66f0()*-0.0299908);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3b20() {
   return (neuron0x23a6a30()*0.0695238);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3b60() {
   return (neuron0x23a6d70()*-0.0850064);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3ba0() {
   return (neuron0x23a70b0()*-0.17564);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3be0() {
   return (neuron0x23a73f0()*-0.0561468);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3c20() {
   return (neuron0x23a7730()*0.0917052);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3c60() {
   return (neuron0x23a7a70()*0.0590409);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3ca0() {
   return (neuron0x23a7db0()*0.0494042);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3ce0() {
   return (neuron0x23a80f0()*-0.640649);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3d20() {
   return (neuron0x23a8430()*0.0548115);
}

double NNfunction_nn_chi1_chi1::synapse0x23c37b0() {
   return (neuron0x23a8770()*-0.145665);
}

double NNfunction_nn_chi1_chi1::synapse0x23c37f0() {
   return (neuron0x23a8cd0()*0.0535509);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3e70() {
   return (neuron0x23a9010()*-0.0801842);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3eb0() {
   return (neuron0x23a9350()*-0.0361425);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3ef0() {
   return (neuron0x23a9690()*-0.0711858);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3f30() {
   return (neuron0x23a99d0()*-0.000380669);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3f70() {
   return (neuron0x23a9d10()*0.133078);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3fb0() {
   return (neuron0x23aa050()*-4.20925);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4330() {
   return (neuron0x23a5400()*0.044124);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4370() {
   return (neuron0x23a56b0()*-0.0171756);
}

double NNfunction_nn_chi1_chi1::synapse0x23c43b0() {
   return (neuron0x23a59f0()*-0.15667);
}

double NNfunction_nn_chi1_chi1::synapse0x23c43f0() {
   return (neuron0x23a5d30()*-0.00825701);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4430() {
   return (neuron0x23a6070()*0.00332904);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4470() {
   return (neuron0x23a63b0()*0.00928405);
}

double NNfunction_nn_chi1_chi1::synapse0x23c44b0() {
   return (neuron0x23a66f0()*0.00695462);
}

double NNfunction_nn_chi1_chi1::synapse0x23c44f0() {
   return (neuron0x23a6a30()*-0.00580571);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4530() {
   return (neuron0x23a6d70()*-0.00426957);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4570() {
   return (neuron0x23a70b0()*2.15381e-05);
}

double NNfunction_nn_chi1_chi1::synapse0x23c45b0() {
   return (neuron0x23a73f0()*-1.50207e-05);
}

double NNfunction_nn_chi1_chi1::synapse0x23c45f0() {
   return (neuron0x23a7730()*0.0210109);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4630() {
   return (neuron0x23a7a70()*0.0157406);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4670() {
   return (neuron0x23a7db0()*0.020174);
}

double NNfunction_nn_chi1_chi1::synapse0x23c46b0() {
   return (neuron0x23a80f0()*-0.00480734);
}

double NNfunction_nn_chi1_chi1::synapse0x23c46f0() {
   return (neuron0x23a8430()*0.00821793);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4180() {
   return (neuron0x23a8770()*0.00724489);
}

double NNfunction_nn_chi1_chi1::synapse0x23c41c0() {
   return (neuron0x23a8cd0()*0.00427888);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4840() {
   return (neuron0x23a9010()*0.0214999);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4880() {
   return (neuron0x23a9350()*0.00259588);
}

double NNfunction_nn_chi1_chi1::synapse0x23c48c0() {
   return (neuron0x23a9690()*0.0306232);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4900() {
   return (neuron0x23a99d0()*0.0128014);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4940() {
   return (neuron0x23a9d10()*-0.000550557);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4980() {
   return (neuron0x23aa050()*19.5859);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4d00() {
   return (neuron0x23a5400()*-0.389596);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4d40() {
   return (neuron0x23a56b0()*0.960865);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4d80() {
   return (neuron0x23a59f0()*0.528841);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4dc0() {
   return (neuron0x23a5d30()*-0.137965);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4e00() {
   return (neuron0x23a6070()*0.81152);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4e40() {
   return (neuron0x23a63b0()*0.926298);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4e80() {
   return (neuron0x23a66f0()*-0.778416);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4ec0() {
   return (neuron0x23a6a30()*-1.59382);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4f00() {
   return (neuron0x23a6d70()*-1.343);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4f40() {
   return (neuron0x23a70b0()*0.521479);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4f80() {
   return (neuron0x23a73f0()*-0.462044);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4fc0() {
   return (neuron0x23a7730()*1.3054);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5000() {
   return (neuron0x23a7a70()*0.897374);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5040() {
   return (neuron0x23a7db0()*-0.846257);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5080() {
   return (neuron0x23a80f0()*-0.0162256);
}

double NNfunction_nn_chi1_chi1::synapse0x23c50c0() {
   return (neuron0x23a8430()*-0.90523);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4b50() {
   return (neuron0x23a8770()*0.220759);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4b90() {
   return (neuron0x23a8cd0()*0.168139);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5210() {
   return (neuron0x23a9010()*0.676842);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5250() {
   return (neuron0x23a9350()*0.761159);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5290() {
   return (neuron0x23a9690()*-0.24396);
}

double NNfunction_nn_chi1_chi1::synapse0x23c52d0() {
   return (neuron0x23a99d0()*-2.21888);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5310() {
   return (neuron0x23a9d10()*-2.6261);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5350() {
   return (neuron0x23aa050()*-0.321341);
}

double NNfunction_nn_chi1_chi1::synapse0x23c56d0() {
   return (neuron0x23a5400()*0.0127971);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5710() {
   return (neuron0x23a56b0()*-6.87662);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5750() {
   return (neuron0x23a59f0()*-1.13709);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5790() {
   return (neuron0x23a5d30()*0.0134956);
}

double NNfunction_nn_chi1_chi1::synapse0x23c57d0() {
   return (neuron0x23a6070()*0.0129804);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5810() {
   return (neuron0x23a63b0()*0.00693116);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5850() {
   return (neuron0x23a66f0()*-0.0258174);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5890() {
   return (neuron0x23a6a30()*-0.000823993);
}

double NNfunction_nn_chi1_chi1::synapse0x23c58d0() {
   return (neuron0x23a6d70()*-0.0210934);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5910() {
   return (neuron0x23a70b0()*-0.0152033);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5950() {
   return (neuron0x23a73f0()*0.00071604);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5990() {
   return (neuron0x23a7730()*-0.209059);
}

double NNfunction_nn_chi1_chi1::synapse0x23c59d0() {
   return (neuron0x23a7a70()*-0.0187941);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5a10() {
   return (neuron0x23a7db0()*0.0279717);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5a50() {
   return (neuron0x23a80f0()*0.281774);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5a90() {
   return (neuron0x23a8430()*0.0149277);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5520() {
   return (neuron0x23a8770()*-0.0189095);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5560() {
   return (neuron0x23a8cd0()*0.0323174);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5be0() {
   return (neuron0x23a9010()*-0.0154522);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5c20() {
   return (neuron0x23a9350()*-0.0062896);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5c60() {
   return (neuron0x23a9690()*-0.0139399);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5ca0() {
   return (neuron0x23a99d0()*-0.0116001);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5ce0() {
   return (neuron0x23a9d10()*-0.00322291);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5d20() {
   return (neuron0x23aa050()*0.021444);
}

double NNfunction_nn_chi1_chi1::synapse0x23c60a0() {
   return (neuron0x23a5400()*-0.562892);
}

double NNfunction_nn_chi1_chi1::synapse0x23c60e0() {
   return (neuron0x23a56b0()*-0.13231);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6120() {
   return (neuron0x23a59f0()*-0.259243);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6160() {
   return (neuron0x23a5d30()*1.58644);
}

double NNfunction_nn_chi1_chi1::synapse0x23c61a0() {
   return (neuron0x23a6070()*-0.615996);
}

double NNfunction_nn_chi1_chi1::synapse0x23c61e0() {
   return (neuron0x23a63b0()*1.69594);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6220() {
   return (neuron0x23a66f0()*-0.866446);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6260() {
   return (neuron0x23a6a30()*0.219699);
}

double NNfunction_nn_chi1_chi1::synapse0x23c62a0() {
   return (neuron0x23a6d70()*-0.656594);
}

double NNfunction_nn_chi1_chi1::synapse0x23c62e0() {
   return (neuron0x23a70b0()*-0.489436);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6320() {
   return (neuron0x23a73f0()*-0.298677);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6360() {
   return (neuron0x23a7730()*-0.802977);
}

double NNfunction_nn_chi1_chi1::synapse0x23c63a0() {
   return (neuron0x23a7a70()*0.90132);
}

double NNfunction_nn_chi1_chi1::synapse0x23c63e0() {
   return (neuron0x23a7db0()*1.00922);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6420() {
   return (neuron0x23a80f0()*0.955395);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6460() {
   return (neuron0x23a8430()*0.336007);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5ef0() {
   return (neuron0x23a8770()*0.544165);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5f30() {
   return (neuron0x23a8cd0()*-0.59997);
}

double NNfunction_nn_chi1_chi1::synapse0x23c65b0() {
   return (neuron0x23a9010()*-1.84413);
}

double NNfunction_nn_chi1_chi1::synapse0x23c65f0() {
   return (neuron0x23a9350()*0.181158);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6630() {
   return (neuron0x23a9690()*1.10381);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6670() {
   return (neuron0x23a99d0()*1.00845);
}

double NNfunction_nn_chi1_chi1::synapse0x23c66b0() {
   return (neuron0x23a9d10()*1.49984);
}

double NNfunction_nn_chi1_chi1::synapse0x23c66f0() {
   return (neuron0x23aa050()*0.477105);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6a70() {
   return (neuron0x23a5400()*1.33641);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6ab0() {
   return (neuron0x23a56b0()*-0.00084913);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6af0() {
   return (neuron0x23a59f0()*-0.44885);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6b30() {
   return (neuron0x23a5d30()*0.146601);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6b70() {
   return (neuron0x23a6070()*0.0827848);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6bb0() {
   return (neuron0x23a63b0()*-0.1498);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6bf0() {
   return (neuron0x23a66f0()*0.0760709);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6c30() {
   return (neuron0x23a6a30()*0.0655868);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6c70() {
   return (neuron0x23a6d70()*0.0600554);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6cb0() {
   return (neuron0x23a70b0()*-0.161751);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6cf0() {
   return (neuron0x23a73f0()*0.221306);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6d30() {
   return (neuron0x23a7730()*-0.522434);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6d70() {
   return (neuron0x23a7a70()*0.269581);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6db0() {
   return (neuron0x23a7db0()*0.0837023);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6df0() {
   return (neuron0x23a80f0()*-0.00116678);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6e30() {
   return (neuron0x23a8430()*0.214264);
}

double NNfunction_nn_chi1_chi1::synapse0x23c68c0() {
   return (neuron0x23a8770()*-0.0505728);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6900() {
   return (neuron0x23a8cd0()*0.136089);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6f80() {
   return (neuron0x23a9010()*0.179458);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6fc0() {
   return (neuron0x23a9350()*0.258379);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7000() {
   return (neuron0x23a9690()*-0.299031);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7040() {
   return (neuron0x23a99d0()*-0.037862);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7080() {
   return (neuron0x23a9d10()*-0.0500562);
}

double NNfunction_nn_chi1_chi1::synapse0x23c70c0() {
   return (neuron0x23aa050()*1.05334);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7440() {
   return (neuron0x23a5400()*0.0293609);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7480() {
   return (neuron0x23a56b0()*0.024699);
}

double NNfunction_nn_chi1_chi1::synapse0x23c74c0() {
   return (neuron0x23a59f0()*0.138512);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7500() {
   return (neuron0x23a5d30()*0.0105914);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7540() {
   return (neuron0x23a6070()*-0.0200657);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7580() {
   return (neuron0x23a63b0()*-0.0150411);
}

double NNfunction_nn_chi1_chi1::synapse0x23c75c0() {
   return (neuron0x23a66f0()*-0.00763113);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7600() {
   return (neuron0x23a6a30()*0.0129207);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7640() {
   return (neuron0x23a6d70()*0.0130686);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7680() {
   return (neuron0x23a70b0()*-0.00147492);
}

double NNfunction_nn_chi1_chi1::synapse0x23c76c0() {
   return (neuron0x23a73f0()*0.00913837);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7700() {
   return (neuron0x23a7730()*-0.0361203);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7740() {
   return (neuron0x23a7a70()*-0.0160253);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7780() {
   return (neuron0x23a7db0()*-0.021092);
}

double NNfunction_nn_chi1_chi1::synapse0x23c77c0() {
   return (neuron0x23a80f0()*0.023885);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7800() {
   return (neuron0x23a8430()*-0.0279877);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7290() {
   return (neuron0x23a8770()*-0.00736156);
}

double NNfunction_nn_chi1_chi1::synapse0x23c72d0() {
   return (neuron0x23a8cd0()*-0.00793275);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7950() {
   return (neuron0x23a9010()*-0.0178119);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7990() {
   return (neuron0x23a9350()*0.0167205);
}

double NNfunction_nn_chi1_chi1::synapse0x23c79d0() {
   return (neuron0x23a9690()*-0.0536675);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7a10() {
   return (neuron0x23a99d0()*-0.0102894);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7a50() {
   return (neuron0x23a9d10()*-0.00794052);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7a90() {
   return (neuron0x23aa050()*22.3976);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0540() {
   return (neuron0x23a5400()*0.0231239);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0580() {
   return (neuron0x23a56b0()*0.01233);
}

double NNfunction_nn_chi1_chi1::synapse0x23b05c0() {
   return (neuron0x23a59f0()*-3.88543);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0600() {
   return (neuron0x23a5d30()*0.0247099);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0640() {
   return (neuron0x23a6070()*0.0177882);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0680() {
   return (neuron0x23a63b0()*0.0251336);
}

double NNfunction_nn_chi1_chi1::synapse0x23b06c0() {
   return (neuron0x23a66f0()*0.00729067);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0700() {
   return (neuron0x23a6a30()*0.00110117);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8220() {
   return (neuron0x23a6d70()*-0.0142647);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8260() {
   return (neuron0x23a70b0()*-0.0100585);
}

double NNfunction_nn_chi1_chi1::synapse0x23c82a0() {
   return (neuron0x23a73f0()*-0.00587641);
}

double NNfunction_nn_chi1_chi1::synapse0x23c82e0() {
   return (neuron0x23a7730()*-1.90445);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8320() {
   return (neuron0x23a7a70()*0.0615946);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8360() {
   return (neuron0x23a7db0()*0.00121258);
}

double NNfunction_nn_chi1_chi1::synapse0x23c83a0() {
   return (neuron0x23a80f0()*-0.0111778);
}

double NNfunction_nn_chi1_chi1::synapse0x23c83e0() {
   return (neuron0x23a8430()*0.046512);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7c60() {
   return (neuron0x23a8770()*-0.00952383);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7ca0() {
   return (neuron0x23a8cd0()*0.0142447);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8530() {
   return (neuron0x23a9010()*-0.00312932);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8570() {
   return (neuron0x23a9350()*-0.0091319);
}

double NNfunction_nn_chi1_chi1::synapse0x23c85b0() {
   return (neuron0x23a9690()*-0.0128943);
}

double NNfunction_nn_chi1_chi1::synapse0x23c85f0() {
   return (neuron0x23a99d0()*0.0242613);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8630() {
   return (neuron0x23a9d10()*0.0102441);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8670() {
   return (neuron0x23aa050()*0.00168042);
}

double NNfunction_nn_chi1_chi1::synapse0x23c89f0() {
   return (neuron0x23a5400()*0.373691);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8a30() {
   return (neuron0x23a56b0()*-0.353414);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8a70() {
   return (neuron0x23a59f0()*-0.242246);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8ab0() {
   return (neuron0x23a5d30()*-0.548912);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8af0() {
   return (neuron0x23a6070()*0.399253);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8b30() {
   return (neuron0x23a63b0()*1.09995);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8b70() {
   return (neuron0x23a66f0()*-0.244438);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8bb0() {
   return (neuron0x23a6a30()*-0.0992774);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8bf0() {
   return (neuron0x23a6d70()*0.160224);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8c30() {
   return (neuron0x23a70b0()*-0.468042);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8c70() {
   return (neuron0x23a73f0()*-0.305811);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8cb0() {
   return (neuron0x23a7730()*-0.0377118);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8cf0() {
   return (neuron0x23a7a70()*-1.08963);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8d30() {
   return (neuron0x23a7db0()*0.825413);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8d70() {
   return (neuron0x23a80f0()*-0.144812);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8db0() {
   return (neuron0x23a8430()*0.167949);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8840() {
   return (neuron0x23a8770()*1.21945);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8880() {
   return (neuron0x23a8cd0()*0.306539);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8f00() {
   return (neuron0x23a9010()*0.101499);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8f40() {
   return (neuron0x23a9350()*-0.439404);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8f80() {
   return (neuron0x23a9690()*0.28187);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8fc0() {
   return (neuron0x23a99d0()*0.0165004);
}

double NNfunction_nn_chi1_chi1::synapse0x23c9000() {
   return (neuron0x23a9d10()*-0.759307);
}

double NNfunction_nn_chi1_chi1::synapse0x23c9040() {
   return (neuron0x23aa050()*-0.651987);
}

double NNfunction_nn_chi1_chi1::synapse0x23c93c0() {
   return (neuron0x23a5400()*1.02565);
}

double NNfunction_nn_chi1_chi1::synapse0x23c9400() {
   return (neuron0x23a56b0()*-0.118483);
}

double NNfunction_nn_chi1_chi1::synapse0x23c9440() {
   return (neuron0x23a59f0()*-0.52337);
}

double NNfunction_nn_chi1_chi1::synapse0x23c9480() {
   return (neuron0x23a5d30()*-2.03532);
}

double NNfunction_nn_chi1_chi1::synapse0x23c94c0() {
   return (neuron0x23a6070()*0.509759);
}

double NNfunction_nn_chi1_chi1::synapse0x23c9500() {
   return (neuron0x23a63b0()*0.723092);
}

double NNfunction_nn_chi1_chi1::synapse0x23c9540() {
   return (neuron0x23a66f0()*0.973217);
}

double NNfunction_nn_chi1_chi1::synapse0x23c9580() {
   return (neuron0x23a6a30()*-0.813287);
}

double NNfunction_nn_chi1_chi1::synapse0x23c95c0() {
   return (neuron0x23a6d70()*0.208581);
}

double NNfunction_nn_chi1_chi1::synapse0x23c9600() {
   return (neuron0x23a70b0()*0.367755);
}

double NNfunction_nn_chi1_chi1::synapse0x23c9640() {
   return (neuron0x23a73f0()*0.761977);
}

double NNfunction_nn_chi1_chi1::synapse0x23c9680() {
   return (neuron0x23a7730()*-0.0796796);
}

double NNfunction_nn_chi1_chi1::synapse0x23c96c0() {
   return (neuron0x23a7a70()*1.22311);
}

double NNfunction_nn_chi1_chi1::synapse0x23c9700() {
   return (neuron0x23a7db0()*0.0723087);
}

double NNfunction_nn_chi1_chi1::synapse0x23c9740() {
   return (neuron0x23a80f0()*0.498521);
}

double NNfunction_nn_chi1_chi1::synapse0x23c9780() {
   return (neuron0x23a8430()*-0.685461);
}

double NNfunction_nn_chi1_chi1::synapse0x23c9210() {
   return (neuron0x23a8770()*0.106803);
}

double NNfunction_nn_chi1_chi1::synapse0x23c9250() {
   return (neuron0x23a8cd0()*-0.623609);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9d80() {
   return (neuron0x23a9010()*0.278679);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9dc0() {
   return (neuron0x23a9350()*-1.49705);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9e00() {
   return (neuron0x23a9690()*1.50996);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9e40() {
   return (neuron0x23a99d0()*0.823615);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9e80() {
   return (neuron0x23a9d10()*0.421985);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9ec0() {
   return (neuron0x23aa050()*-0.484074);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba240() {
   return (neuron0x23a5400()*0.00628108);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba280() {
   return (neuron0x23a56b0()*-0.0517378);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba2c0() {
   return (neuron0x23a59f0()*3.98043);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba300() {
   return (neuron0x23a5d30()*-0.0116983);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba340() {
   return (neuron0x23a6070()*0.0259924);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba380() {
   return (neuron0x23a63b0()*0.0166349);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba3c0() {
   return (neuron0x23a66f0()*0.0047016);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba400() {
   return (neuron0x23a6a30()*0.0238458);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba440() {
   return (neuron0x23a6d70()*-0.0640659);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba480() {
   return (neuron0x23a70b0()*-0.015077);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba4c0() {
   return (neuron0x23a73f0()*-0.0180775);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba500() {
   return (neuron0x23a7730()*-0.206605);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba540() {
   return (neuron0x23a7a70()*-0.122102);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba580() {
   return (neuron0x23a7db0()*-0.0241);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba5c0() {
   return (neuron0x23a80f0()*0.0505006);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba600() {
   return (neuron0x23a8430()*-0.00136531);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba090() {
   return (neuron0x23a8770()*-0.0298431);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba0d0() {
   return (neuron0x23a8cd0()*-0.0755011);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba750() {
   return (neuron0x23a9010()*-0.0267646);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba790() {
   return (neuron0x23a9350()*-0.0258083);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba7d0() {
   return (neuron0x23a9690()*0.000530812);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba810() {
   return (neuron0x23a99d0()*-0.00211308);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba850() {
   return (neuron0x23a9d10()*0.0108167);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba890() {
   return (neuron0x23aa050()*-4.97293);
}

double NNfunction_nn_chi1_chi1::synapse0x23bac10() {
   return (neuron0x23a5400()*0.0226895);
}

double NNfunction_nn_chi1_chi1::synapse0x23bac50() {
   return (neuron0x23a56b0()*0.265056);
}

double NNfunction_nn_chi1_chi1::synapse0x23bac90() {
   return (neuron0x23a59f0()*-0.488143);
}

double NNfunction_nn_chi1_chi1::synapse0x23bacd0() {
   return (neuron0x23a5d30()*-2.72066);
}

double NNfunction_nn_chi1_chi1::synapse0x23bad10() {
   return (neuron0x23a6070()*0.867433);
}

double NNfunction_nn_chi1_chi1::synapse0x23bad50() {
   return (neuron0x23a63b0()*0.685434);
}

double NNfunction_nn_chi1_chi1::synapse0x23bad90() {
   return (neuron0x23a66f0()*0.834492);
}

double NNfunction_nn_chi1_chi1::synapse0x23badd0() {
   return (neuron0x23a6a30()*-0.00422889);
}

double NNfunction_nn_chi1_chi1::synapse0x23bae10() {
   return (neuron0x23a6d70()*0.398679);
}

double NNfunction_nn_chi1_chi1::synapse0x23bae50() {
   return (neuron0x23a70b0()*0.0397818);
}

double NNfunction_nn_chi1_chi1::synapse0x23bae90() {
   return (neuron0x23a73f0()*0.151708);
}

double NNfunction_nn_chi1_chi1::synapse0x23baed0() {
   return (neuron0x23a7730()*-1.01205);
}

double NNfunction_nn_chi1_chi1::synapse0x23baf10() {
   return (neuron0x23a7a70()*-0.114678);
}

double NNfunction_nn_chi1_chi1::synapse0x23baf50() {
   return (neuron0x23a7db0()*-0.172147);
}

double NNfunction_nn_chi1_chi1::synapse0x23baf90() {
   return (neuron0x23a80f0()*-0.253876);
}

double NNfunction_nn_chi1_chi1::synapse0x23bafd0() {
   return (neuron0x23a8430()*-0.0736594);
}

double NNfunction_nn_chi1_chi1::synapse0x23baa60() {
   return (neuron0x23a8770()*0.210393);
}

double NNfunction_nn_chi1_chi1::synapse0x23baaa0() {
   return (neuron0x23a8cd0()*-0.0695157);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb120() {
   return (neuron0x23a9010()*0.1934);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb160() {
   return (neuron0x23a9350()*-0.630917);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb1a0() {
   return (neuron0x23a9690()*0.589568);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb1e0() {
   return (neuron0x23a99d0()*0.60716);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb220() {
   return (neuron0x23a9d10()*-0.789016);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb260() {
   return (neuron0x23aa050()*0.217041);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb5e0() {
   return (neuron0x23a5400()*-0.0152928);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb620() {
   return (neuron0x23a56b0()*10.7923);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb660() {
   return (neuron0x23a59f0()*0.705306);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb6a0() {
   return (neuron0x23a5d30()*-0.0112761);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb6e0() {
   return (neuron0x23a6070()*-0.00991043);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb720() {
   return (neuron0x23a63b0()*0.000959079);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb760() {
   return (neuron0x23a66f0()*0.00536155);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb7a0() {
   return (neuron0x23a6a30()*0.00167147);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb7e0() {
   return (neuron0x23a6d70()*-0.00135475);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb820() {
   return (neuron0x23a70b0()*0.0192447);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb860() {
   return (neuron0x23a73f0()*0.00616132);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb8a0() {
   return (neuron0x23a7730()*0.173216);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb8e0() {
   return (neuron0x23a7a70()*0.0117014);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb920() {
   return (neuron0x23a7db0()*-0.00940975);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb960() {
   return (neuron0x23a80f0()*-0.149365);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb9a0() {
   return (neuron0x23a8430()*-0.00482488);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb430() {
   return (neuron0x23a8770()*0.00771109);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb470() {
   return (neuron0x23a8cd0()*-0.00963665);
}

double NNfunction_nn_chi1_chi1::synapse0x23bbaf0() {
   return (neuron0x23a9010()*0.00562026);
}

double NNfunction_nn_chi1_chi1::synapse0x23bbb30() {
   return (neuron0x23a9350()*-0.00960165);
}

double NNfunction_nn_chi1_chi1::synapse0x23bbb70() {
   return (neuron0x23a9690()*0.00482139);
}

double NNfunction_nn_chi1_chi1::synapse0x23bbbb0() {
   return (neuron0x23a99d0()*0.00680756);
}

double NNfunction_nn_chi1_chi1::synapse0x23bbbf0() {
   return (neuron0x23a9d10()*0.00482427);
}

double NNfunction_nn_chi1_chi1::synapse0x23bbc30() {
   return (neuron0x23aa050()*-0.00203287);
}

double NNfunction_nn_chi1_chi1::synapse0x23cdb00() {
   return (neuron0x23a5400()*-2.61139);
}

double NNfunction_nn_chi1_chi1::synapse0x23cdb40() {
   return (neuron0x23a56b0()*0.965813);
}

double NNfunction_nn_chi1_chi1::synapse0x23cdb80() {
   return (neuron0x23a59f0()*2.9746);
}

double NNfunction_nn_chi1_chi1::synapse0x23cdbc0() {
   return (neuron0x23a5d30()*-0.914358);
}

double NNfunction_nn_chi1_chi1::synapse0x23cdc00() {
   return (neuron0x23a6070()*0.768991);
}

double NNfunction_nn_chi1_chi1::synapse0x23cdc40() {
   return (neuron0x23a63b0()*0.541838);
}

double NNfunction_nn_chi1_chi1::synapse0x23cdc80() {
   return (neuron0x23a66f0()*0.615879);
}

double NNfunction_nn_chi1_chi1::synapse0x23cdcc0() {
   return (neuron0x23a6a30()*-0.487649);
}

double NNfunction_nn_chi1_chi1::synapse0x23cdd00() {
   return (neuron0x23a6d70()*-0.392566);
}

double NNfunction_nn_chi1_chi1::synapse0x23cdd40() {
   return (neuron0x23a70b0()*0.0203267);
}

double NNfunction_nn_chi1_chi1::synapse0x23cdd80() {
   return (neuron0x23a73f0()*-0.401707);
}

double NNfunction_nn_chi1_chi1::synapse0x23cddc0() {
   return (neuron0x23a7730()*1.14944);
}

double NNfunction_nn_chi1_chi1::synapse0x23cde00() {
   return (neuron0x23a7a70()*-0.364662);
}

double NNfunction_nn_chi1_chi1::synapse0x23cde40() {
   return (neuron0x23a7db0()*-0.962966);
}

double NNfunction_nn_chi1_chi1::synapse0x23cde80() {
   return (neuron0x23a80f0()*-0.732528);
}

double NNfunction_nn_chi1_chi1::synapse0x23cdec0() {
   return (neuron0x23a8430()*0.198544);
}

double NNfunction_nn_chi1_chi1::synapse0x23bbc70() {
   return (neuron0x23a8770()*0.830797);
}

double NNfunction_nn_chi1_chi1::synapse0x23bbcb0() {
   return (neuron0x23a8cd0()*-0.388113);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce010() {
   return (neuron0x23a9010()*-0.0131419);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce050() {
   return (neuron0x23a9350()*-0.699069);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce090() {
   return (neuron0x23a9690()*0.935652);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce0d0() {
   return (neuron0x23a99d0()*0.278917);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce110() {
   return (neuron0x23a9d10()*-0.581744);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce150() {
   return (neuron0x23aa050()*-1.37538);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce4d0() {
   return (neuron0x23a5400()*1.17533);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce510() {
   return (neuron0x23a56b0()*-0.0456981);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce550() {
   return (neuron0x23a59f0()*0.35592);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce590() {
   return (neuron0x23a5d30()*0.046277);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce5d0() {
   return (neuron0x23a6070()*-0.115418);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce610() {
   return (neuron0x23a63b0()*0.0915849);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce650() {
   return (neuron0x23a66f0()*-0.12633);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce690() {
   return (neuron0x23a6a30()*0.272793);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce6d0() {
   return (neuron0x23a6d70()*0.246381);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce710() {
   return (neuron0x23a70b0()*-0.112406);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce750() {
   return (neuron0x23a73f0()*0.217242);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce790() {
   return (neuron0x23a7730()*0.27794);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce7d0() {
   return (neuron0x23a7a70()*-0.356515);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce810() {
   return (neuron0x23a7db0()*-0.00453961);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce850() {
   return (neuron0x23a80f0()*-0.779842);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce890() {
   return (neuron0x23a8430()*0.660842);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce320() {
   return (neuron0x23a8770()*0.470773);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce360() {
   return (neuron0x23a8cd0()*0.355786);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce9e0() {
   return (neuron0x23a9010()*0.264927);
}

double NNfunction_nn_chi1_chi1::synapse0x23cea20() {
   return (neuron0x23a9350()*0.530001);
}

double NNfunction_nn_chi1_chi1::synapse0x23cea60() {
   return (neuron0x23a9690()*0.0468418);
}

double NNfunction_nn_chi1_chi1::synapse0x23ceaa0() {
   return (neuron0x23a99d0()*0.0698726);
}

double NNfunction_nn_chi1_chi1::synapse0x23ceae0() {
   return (neuron0x23a9d10()*0.0414106);
}

double NNfunction_nn_chi1_chi1::synapse0x23ceb20() {
   return (neuron0x23aa050()*0.23256);
}

double NNfunction_nn_chi1_chi1::synapse0x23ceea0() {
   return (neuron0x23a5400()*0.592457);
}

double NNfunction_nn_chi1_chi1::synapse0x23ceee0() {
   return (neuron0x23a56b0()*-0.569138);
}

double NNfunction_nn_chi1_chi1::synapse0x23cef20() {
   return (neuron0x23a59f0()*1.41136);
}

double NNfunction_nn_chi1_chi1::synapse0x23cef60() {
   return (neuron0x23a5d30()*-0.504926);
}

double NNfunction_nn_chi1_chi1::synapse0x23cefa0() {
   return (neuron0x23a6070()*0.0398508);
}

double NNfunction_nn_chi1_chi1::synapse0x23cefe0() {
   return (neuron0x23a63b0()*0.460507);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf020() {
   return (neuron0x23a66f0()*-0.0757389);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf060() {
   return (neuron0x23a6a30()*0.892062);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf0a0() {
   return (neuron0x23a6d70()*-0.326368);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf0e0() {
   return (neuron0x23a70b0()*-0.937644);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf120() {
   return (neuron0x23a73f0()*-1.10362);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf160() {
   return (neuron0x23a7730()*-0.54967);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf1a0() {
   return (neuron0x23a7a70()*-0.106326);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf1e0() {
   return (neuron0x23a7db0()*1.5462);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf220() {
   return (neuron0x23a80f0()*0.857547);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf260() {
   return (neuron0x23a8430()*-0.299154);
}

double NNfunction_nn_chi1_chi1::synapse0x23cecf0() {
   return (neuron0x23a8770()*0.281919);
}

double NNfunction_nn_chi1_chi1::synapse0x23ced30() {
   return (neuron0x23a8cd0()*0.466709);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf3b0() {
   return (neuron0x23a9010()*-1.22201);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf3f0() {
   return (neuron0x23a9350()*-0.836958);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf430() {
   return (neuron0x23a9690()*-1.20916);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf470() {
   return (neuron0x23a99d0()*0.511783);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf4b0() {
   return (neuron0x23a9d10()*-0.755191);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf4f0() {
   return (neuron0x23aa050()*2.3071);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf870() {
   return (neuron0x23a5400()*0.00537463);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf8b0() {
   return (neuron0x23a56b0()*-9.73668);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf8f0() {
   return (neuron0x23a59f0()*1.64361);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf930() {
   return (neuron0x23a5d30()*0.0289455);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf970() {
   return (neuron0x23a6070()*0.10785);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf9b0() {
   return (neuron0x23a63b0()*-0.0654684);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf9f0() {
   return (neuron0x23a66f0()*0.032922);
}

double NNfunction_nn_chi1_chi1::synapse0x23cfa30() {
   return (neuron0x23a6a30()*-0.0477507);
}

double NNfunction_nn_chi1_chi1::synapse0x23cfa70() {
   return (neuron0x23a6d70()*-0.0305719);
}

double NNfunction_nn_chi1_chi1::synapse0x23cfab0() {
   return (neuron0x23a70b0()*-0.0144758);
}

double NNfunction_nn_chi1_chi1::synapse0x23cfaf0() {
   return (neuron0x23a73f0()*0.0110027);
}

double NNfunction_nn_chi1_chi1::synapse0x23cfb30() {
   return (neuron0x23a7730()*-0.262062);
}

double NNfunction_nn_chi1_chi1::synapse0x23cfb70() {
   return (neuron0x23a7a70()*0.121117);
}

double NNfunction_nn_chi1_chi1::synapse0x23cfbb0() {
   return (neuron0x23a7db0()*0.0345897);
}

double NNfunction_nn_chi1_chi1::synapse0x23cfbf0() {
   return (neuron0x23a80f0()*1.48568);
}

double NNfunction_nn_chi1_chi1::synapse0x23cfc30() {
   return (neuron0x23a8430()*-0.121767);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf6c0() {
   return (neuron0x23a8770()*-0.0299669);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf700() {
   return (neuron0x23a8cd0()*-0.0593726);
}

double NNfunction_nn_chi1_chi1::synapse0x23cfd80() {
   return (neuron0x23a9010()*-0.0505428);
}

double NNfunction_nn_chi1_chi1::synapse0x23cfdc0() {
   return (neuron0x23a9350()*-0.0747441);
}

double NNfunction_nn_chi1_chi1::synapse0x23cfe00() {
   return (neuron0x23a9690()*0.172534);
}

double NNfunction_nn_chi1_chi1::synapse0x23cfe40() {
   return (neuron0x23a99d0()*-0.160119);
}

double NNfunction_nn_chi1_chi1::synapse0x23cfe80() {
   return (neuron0x23a9d10()*0.0791194);
}

double NNfunction_nn_chi1_chi1::synapse0x23cfec0() {
   return (neuron0x23aa050()*0.0637496);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab310() {
   return (neuron0x23aa4c0()*-1.64183);
}

double NNfunction_nn_chi1_chi1::synapse0x23ab350() {
   return (neuron0x23aad00()*-2.08823);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac870() {
   return (neuron0x23ab7e0()*0.173164);
}

double NNfunction_nn_chi1_chi1::synapse0x23ac8b0() {
   return (neuron0x216fc00()*-0.138948);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae340() {
   return (neuron0x23ac5c0()*-1.34841);
}

double NNfunction_nn_chi1_chi1::synapse0x23ae380() {
   return (neuron0x23ae090()*-0.0419438);
}

double NNfunction_nn_chi1_chi1::synapse0x23af110() {
   return (neuron0x23aee60()*0.0457717);
}

double NNfunction_nn_chi1_chi1::synapse0x23af150() {
   return (neuron0x23af830()*0.490473);
}

double NNfunction_nn_chi1_chi1::synapse0x23afae0() {
   return (neuron0x23b0200()*-0.500937);
}

double NNfunction_nn_chi1_chi1::synapse0x23afb20() {
   return (neuron0x23b0ce0()*-0.0120732);
}

double NNfunction_nn_chi1_chi1::synapse0x23b04b0() {
   return (neuron0x23b16b0()*-0.393882);
}

double NNfunction_nn_chi1_chi1::synapse0x23b04f0() {
   return (neuron0x23ae790()*-0.0305133);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0f90() {
   return (neuron0x23b3260()*0.0519131);
}

double NNfunction_nn_chi1_chi1::synapse0x23b0fd0() {
   return (neuron0x23b3c30()*0.0695247);
}

double NNfunction_nn_chi1_chi1::synapse0x23b1960() {
   return (neuron0x23b4600()*0.423218);
}

double NNfunction_nn_chi1_chi1::synapse0x23b19a0() {
   return (neuron0x23b4fd0()*-2.39757);
}

double NNfunction_nn_chi1_chi1::synapse0x23aea40() {
   return (neuron0x23b6de0()*-0.357093);
}

double NNfunction_nn_chi1_chi1::synapse0x23aea80() {
   return (neuron0x23b70c0()*1.5549);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3510() {
   return (neuron0x23b7a90()*-0.00298113);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3550() {
   return (neuron0x23b8460()*0.31282);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3ee0() {
   return (neuron0x23b8e30()*-1.6653);
}

double NNfunction_nn_chi1_chi1::synapse0x23b3f20() {
   return (neuron0x23b9800()*0.0671326);
}

double NNfunction_nn_chi1_chi1::synapse0x23b48b0() {
   return (neuron0x23b2350()*4.22676);
}

double NNfunction_nn_chi1_chi1::synapse0x23b48f0() {
   return (neuron0x23b2d20()*-1.27957);
}

double NNfunction_nn_chi1_chi1::synapse0x23b5280() {
   return (neuron0x23bc590()*0.0258418);
}

double NNfunction_nn_chi1_chi1::synapse0x23b52c0() {
   return (neuron0x23bcf60()*-0.0399843);
}

double NNfunction_nn_chi1_chi1::synapse0x23a8310() {
   return (neuron0x23bd930()*-1.32324);
}

double NNfunction_nn_chi1_chi1::synapse0x23a8350() {
   return (neuron0x23be300()*-1.79017);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7370() {
   return (neuron0x23becd0()*-2.44927);
}

double NNfunction_nn_chi1_chi1::synapse0x23b73b0() {
   return (neuron0x23bf6a0()*-0.0302046);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7d40() {
   return (neuron0x23c0070()*-0.0524363);
}

double NNfunction_nn_chi1_chi1::synapse0x23b7d80() {
   return (neuron0x23c0a40()*-0.356862);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8710() {
   return (neuron0x23b6ad0()*-3.20359);
}

double NNfunction_nn_chi1_chi1::synapse0x23b8750() {
   return (neuron0x23c3620()*-0.704485);
}

double NNfunction_nn_chi1_chi1::synapse0x23b90e0() {
   return (neuron0x23c3ff0()*3.90121);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9120() {
   return (neuron0x23c49c0()*0.0155725);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9ab0() {
   return (neuron0x23c5390()*3.78459);
}

double NNfunction_nn_chi1_chi1::synapse0x23b9af0() {
   return (neuron0x23c5d60()*-0.0924259);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2600() {
   return (neuron0x23c6730()*-0.194905);
}

double NNfunction_nn_chi1_chi1::synapse0x23b2640() {
   return (neuron0x23c7100()*-3.56576);
}

double NNfunction_nn_chi1_chi1::synapse0x23bbeb0() {
   return (neuron0x23c7ad0()*-0.401923);
}

double NNfunction_nn_chi1_chi1::synapse0x23bbef0() {
   return (neuron0x23c86b0()*0.0481821);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc840() {
   return (neuron0x23c9080()*0.00348983);
}

double NNfunction_nn_chi1_chi1::synapse0x23bc880() {
   return (neuron0x23b9f00()*1.12224);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd210() {
   return (neuron0x23ba8d0()*-0.109879);
}

double NNfunction_nn_chi1_chi1::synapse0x23bd250() {
   return (neuron0x23bb2a0()*7.65065);
}

double NNfunction_nn_chi1_chi1::synapse0x23bdbe0() {
   return (neuron0x23cd8e0()*-0.111322);
}

double NNfunction_nn_chi1_chi1::synapse0x23bdc20() {
   return (neuron0x23ce190()*0.213679);
}

double NNfunction_nn_chi1_chi1::synapse0x23be5b0() {
   return (neuron0x23ceb60()*0.0385248);
}

double NNfunction_nn_chi1_chi1::synapse0x23be5f0() {
   return (neuron0x23cf530()*-0.122015);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0cf0() {
   return (neuron0x23aa4c0()*3.26014);
}

double NNfunction_nn_chi1_chi1::synapse0x23c0d30() {
   return (neuron0x23aad00()*3.33996);
}

double NNfunction_nn_chi1_chi1::synapse0x23b62b0() {
   return (neuron0x23ab7e0()*1.54383);
}

double NNfunction_nn_chi1_chi1::synapse0x23b62f0() {
   return (neuron0x216fc00()*-2.01066);
}

double NNfunction_nn_chi1_chi1::synapse0x23c38d0() {
   return (neuron0x23ac5c0()*2.90719);
}

double NNfunction_nn_chi1_chi1::synapse0x23c3910() {
   return (neuron0x23ae090()*0.982099);
}

double NNfunction_nn_chi1_chi1::synapse0x23c42a0() {
   return (neuron0x23aee60()*1.02046);
}

double NNfunction_nn_chi1_chi1::synapse0x23c42e0() {
   return (neuron0x23af830()*-1.65095);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4c70() {
   return (neuron0x23b0200()*-0.208937);
}

double NNfunction_nn_chi1_chi1::synapse0x23c4cb0() {
   return (neuron0x23b0ce0()*1.62384);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5640() {
   return (neuron0x23b16b0()*-0.0323413);
}

double NNfunction_nn_chi1_chi1::synapse0x23c5680() {
   return (neuron0x23ae790()*-1.23748);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6010() {
   return (neuron0x23b3260()*-0.482416);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6050() {
   return (neuron0x23b3c30()*-0.0446597);
}

double NNfunction_nn_chi1_chi1::synapse0x23c69e0() {
   return (neuron0x23b4600()*1.60968);
}

double NNfunction_nn_chi1_chi1::synapse0x23c6a20() {
   return (neuron0x23b4fd0()*-1.13671);
}

double NNfunction_nn_chi1_chi1::synapse0x23c73b0() {
   return (neuron0x23b6de0()*-1.94021);
}

double NNfunction_nn_chi1_chi1::synapse0x23c73f0() {
   return (neuron0x23b70c0()*-2.42066);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7d80() {
   return (neuron0x23b7a90()*2.36758);
}

double NNfunction_nn_chi1_chi1::synapse0x23c7dc0() {
   return (neuron0x23b8460()*3.72738);
}

double NNfunction_nn_chi1_chi1::synapse0x23c8960() {
   return (neuron0x23b8e30()*-4.50542);
}

double NNfunction_nn_chi1_chi1::synapse0x23c89a0() {
   return (neuron0x23b9800()*-2.1918);
}

double NNfunction_nn_chi1_chi1::synapse0x23c9330() {
   return (neuron0x23b2350()*5.269);
}

double NNfunction_nn_chi1_chi1::synapse0x23c9370() {
   return (neuron0x23b2d20()*2.67899);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba1b0() {
   return (neuron0x23bc590()*-1.82228);
}

double NNfunction_nn_chi1_chi1::synapse0x23ba1f0() {
   return (neuron0x23bcf60()*-1.58765);
}

double NNfunction_nn_chi1_chi1::synapse0x23bab80() {
   return (neuron0x23bd930()*0.874468);
}

double NNfunction_nn_chi1_chi1::synapse0x23babc0() {
   return (neuron0x23be300()*2.00482);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb550() {
   return (neuron0x23becd0()*-0.0796003);
}

double NNfunction_nn_chi1_chi1::synapse0x23bb590() {
   return (neuron0x23bf6a0()*-1.29762);
}

double NNfunction_nn_chi1_chi1::synapse0x23cda70() {
   return (neuron0x23c0070()*-1.42692);
}

double NNfunction_nn_chi1_chi1::synapse0x23cdab0() {
   return (neuron0x23c0a40()*1.62399);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce440() {
   return (neuron0x23b6ad0()*-0.660959);
}

double NNfunction_nn_chi1_chi1::synapse0x23ce480() {
   return (neuron0x23c3620()*-2.02187);
}

double NNfunction_nn_chi1_chi1::synapse0x23cee10() {
   return (neuron0x23c3ff0()*-1.45369);
}

double NNfunction_nn_chi1_chi1::synapse0x23cee50() {
   return (neuron0x23c49c0()*0.778865);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf7e0() {
   return (neuron0x23c5390()*-2.32105);
}

double NNfunction_nn_chi1_chi1::synapse0x23cf820() {
   return (neuron0x23c5d60()*-0.860584);
}

double NNfunction_nn_chi1_chi1::synapse0x23aa770() {
   return (neuron0x23c6730()*0.737959);
}

double NNfunction_nn_chi1_chi1::synapse0x23aa7b0() {
   return (neuron0x23c7100()*-0.270054);
}

double NNfunction_nn_chi1_chi1::synapse0x23bef80() {
   return (neuron0x23c7ad0()*-0.647272);
}

double NNfunction_nn_chi1_chi1::synapse0x23befc0() {
   return (neuron0x23c86b0()*-1.34542);
}

double NNfunction_nn_chi1_chi1::synapse0x23cff00() {
   return (neuron0x23c9080()*-0.757059);
}

double NNfunction_nn_chi1_chi1::synapse0x23cff40() {
   return (neuron0x23b9f00()*4.08791);
}

double NNfunction_nn_chi1_chi1::synapse0x23cff80() {
   return (neuron0x23ba8d0()*1.11666);
}

double NNfunction_nn_chi1_chi1::synapse0x23cffc0() {
   return (neuron0x23bb2a0()*2.21225);
}

double NNfunction_nn_chi1_chi1::synapse0x23d6e70() {
   return (neuron0x23cd8e0()*1.38202);
}

double NNfunction_nn_chi1_chi1::synapse0x23d6eb0() {
   return (neuron0x23ce190()*1.04663);
}

double NNfunction_nn_chi1_chi1::synapse0x23d6ef0() {
   return (neuron0x23ceb60()*1.05714);
}

double NNfunction_nn_chi1_chi1::synapse0x23d6f30() {
   return (neuron0x23cf530()*-1.63892);
}

double NNfunction_nn_chi1_chi1::synapse0x23d72b0() {
   return (neuron0x23aa4c0()*-0.651436);
}

double NNfunction_nn_chi1_chi1::synapse0x23d72f0() {
   return (neuron0x23aad00()*-4.35929);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7330() {
   return (neuron0x23ab7e0()*-0.155672);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7370() {
   return (neuron0x216fc00()*0.00943392);
}

double NNfunction_nn_chi1_chi1::synapse0x23d73b0() {
   return (neuron0x23ac5c0()*-0.935355);
}

double NNfunction_nn_chi1_chi1::synapse0x23d73f0() {
   return (neuron0x23ae090()*-0.0151355);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7430() {
   return (neuron0x23aee60()*0.0179906);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7470() {
   return (neuron0x23af830()*-0.430626);
}

double NNfunction_nn_chi1_chi1::synapse0x23d74b0() {
   return (neuron0x23b0200()*-0.218361);
}

double NNfunction_nn_chi1_chi1::synapse0x23d74f0() {
   return (neuron0x23b0ce0()*-0.0142221);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7530() {
   return (neuron0x23b16b0()*-0.158254);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7570() {
   return (neuron0x23ae790()*0.0145928);
}

double NNfunction_nn_chi1_chi1::synapse0x23d75b0() {
   return (neuron0x23b3260()*-0.143044);
}

double NNfunction_nn_chi1_chi1::synapse0x23d75f0() {
   return (neuron0x23b3c30()*-0.321891);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7630() {
   return (neuron0x23b4600()*-0.000833785);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7670() {
   return (neuron0x23b4fd0()*-0.244285);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7100() {
   return (neuron0x23b6de0()*0.0532237);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7140() {
   return (neuron0x23b70c0()*0.629929);
}

double NNfunction_nn_chi1_chi1::synapse0x23d77c0() {
   return (neuron0x23b7a90()*-0.0880595);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7800() {
   return (neuron0x23b8460()*0.240293);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7840() {
   return (neuron0x23b8e30()*-1.44924);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7880() {
   return (neuron0x23b9800()*-0.0979918);
}

double NNfunction_nn_chi1_chi1::synapse0x23d78c0() {
   return (neuron0x23b2350()*-9.01422);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7900() {
   return (neuron0x23b2d20()*-2.25354);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7940() {
   return (neuron0x23bc590()*-0.00951736);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7980() {
   return (neuron0x23bcf60()*0.00925493);
}

double NNfunction_nn_chi1_chi1::synapse0x23d79c0() {
   return (neuron0x23bd930()*1.2428);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7a00() {
   return (neuron0x23be300()*-0.857923);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7a40() {
   return (neuron0x23becd0()*-1.28107);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7a80() {
   return (neuron0x23bf6a0()*-0.104519);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7ac0() {
   return (neuron0x23c0070()*-0.0597072);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7b00() {
   return (neuron0x23c0a40()*2.26018);
}

double NNfunction_nn_chi1_chi1::synapse0x23d76b0() {
   return (neuron0x23b6ad0()*-4.05936);
}

double NNfunction_nn_chi1_chi1::synapse0x23d76f0() {
   return (neuron0x23c3620()*-0.0696487);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7730() {
   return (neuron0x23c3ff0()*9.41657);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7770() {
   return (neuron0x23c49c0()*-0.0242903);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7d50() {
   return (neuron0x23c5390()*2.7355);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7d90() {
   return (neuron0x23c5d60()*0.0508786);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7dd0() {
   return (neuron0x23c6730()*0.168488);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7e10() {
   return (neuron0x23c7100()*-8.3583);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7e50() {
   return (neuron0x23c7ad0()*-2.134);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7e90() {
   return (neuron0x23c86b0()*-0.019291);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7ed0() {
   return (neuron0x23c9080()*0.0169109);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7f10() {
   return (neuron0x23b9f00()*-0.313174);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7f50() {
   return (neuron0x23ba8d0()*0.0161659);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7f90() {
   return (neuron0x23bb2a0()*-4.18947);
}

double NNfunction_nn_chi1_chi1::synapse0x23d7fd0() {
   return (neuron0x23cd8e0()*0.0254095);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8010() {
   return (neuron0x23ce190()*-0.216479);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8050() {
   return (neuron0x23ceb60()*-0.0334964);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8090() {
   return (neuron0x23cf530()*0.804466);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8410() {
   return (neuron0x23aa4c0()*-0.0453998);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8450() {
   return (neuron0x23aad00()*2.47412);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8490() {
   return (neuron0x23ab7e0()*-0.416016);
}

double NNfunction_nn_chi1_chi1::synapse0x23d84d0() {
   return (neuron0x216fc00()*0.0144293);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8510() {
   return (neuron0x23ac5c0()*0.256375);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8550() {
   return (neuron0x23ae090()*0.00953749);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8590() {
   return (neuron0x23aee60()*-0.00065425);
}

double NNfunction_nn_chi1_chi1::synapse0x23d85d0() {
   return (neuron0x23af830()*-0.20167);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8610() {
   return (neuron0x23b0200()*-0.0518316);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8650() {
   return (neuron0x23b0ce0()*-0.0333173);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8690() {
   return (neuron0x23b16b0()*0.0106536);
}

double NNfunction_nn_chi1_chi1::synapse0x23d86d0() {
   return (neuron0x23ae790()*0.00766445);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8710() {
   return (neuron0x23b3260()*0.0375584);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8750() {
   return (neuron0x23b3c30()*0.0950859);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8790() {
   return (neuron0x23b4600()*-0.182899);
}

double NNfunction_nn_chi1_chi1::synapse0x23d87d0() {
   return (neuron0x23b4fd0()*-0.536247);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8260() {
   return (neuron0x23b6de0()*-2.50723);
}

double NNfunction_nn_chi1_chi1::synapse0x23d82a0() {
   return (neuron0x23b70c0()*-0.815556);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8920() {
   return (neuron0x23b7a90()*-0.00480488);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8960() {
   return (neuron0x23b8460()*-0.108165);
}

double NNfunction_nn_chi1_chi1::synapse0x23d89a0() {
   return (neuron0x23b8e30()*0.277363);
}

double NNfunction_nn_chi1_chi1::synapse0x23d89e0() {
   return (neuron0x23b9800()*-0.0589486);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8a20() {
   return (neuron0x23b2350()*0.621214);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8a60() {
   return (neuron0x23b2d20()*-0.125818);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8aa0() {
   return (neuron0x23bc590()*-0.0201369);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8ae0() {
   return (neuron0x23bcf60()*-0.000243419);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8b20() {
   return (neuron0x23bd930()*0.665323);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8b60() {
   return (neuron0x23be300()*-4.55833);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8ba0() {
   return (neuron0x23becd0()*-0.140704);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8be0() {
   return (neuron0x23bf6a0()*-0.0187577);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8c20() {
   return (neuron0x23c0070()*0.0263067);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8c60() {
   return (neuron0x23c0a40()*-2.33147);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8810() {
   return (neuron0x23b6ad0()*-1.73085);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8850() {
   return (neuron0x23c3620()*-0.0146431);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8890() {
   return (neuron0x23c3ff0()*-3.4439);
}

double NNfunction_nn_chi1_chi1::synapse0x23d88d0() {
   return (neuron0x23c49c0()*-0.0280356);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8eb0() {
   return (neuron0x23c5390()*2.55454);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8ef0() {
   return (neuron0x23c5d60()*0.0303199);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8f30() {
   return (neuron0x23c6730()*0.128143);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8f70() {
   return (neuron0x23c7100()*3.16931);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8fb0() {
   return (neuron0x23c7ad0()*-3.96857);
}

double NNfunction_nn_chi1_chi1::synapse0x23d8ff0() {
   return (neuron0x23c86b0()*-0.00833542);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9030() {
   return (neuron0x23c9080()*-0.00483669);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9070() {
   return (neuron0x23b9f00()*0.0983338);
}

double NNfunction_nn_chi1_chi1::synapse0x23d90b0() {
   return (neuron0x23ba8d0()*0.00270021);
}

double NNfunction_nn_chi1_chi1::synapse0x23d90f0() {
   return (neuron0x23bb2a0()*1.26216);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9130() {
   return (neuron0x23cd8e0()*0.00128256);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9170() {
   return (neuron0x23ce190()*-0.0397782);
}

double NNfunction_nn_chi1_chi1::synapse0x23d91b0() {
   return (neuron0x23ceb60()*-0.00244397);
}

double NNfunction_nn_chi1_chi1::synapse0x23d91f0() {
   return (neuron0x23cf530()*0.152706);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9570() {
   return (neuron0x23aa4c0()*1.10469);
}

double NNfunction_nn_chi1_chi1::synapse0x23d95b0() {
   return (neuron0x23aad00()*-1.78075);
}

double NNfunction_nn_chi1_chi1::synapse0x23d95f0() {
   return (neuron0x23ab7e0()*-3.15735);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9630() {
   return (neuron0x216fc00()*0.0159908);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9670() {
   return (neuron0x23ac5c0()*0.162964);
}

double NNfunction_nn_chi1_chi1::synapse0x23d96b0() {
   return (neuron0x23ae090()*0.0107885);
}

double NNfunction_nn_chi1_chi1::synapse0x23d96f0() {
   return (neuron0x23aee60()*-0.0183616);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9730() {
   return (neuron0x23af830()*2.20985);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9770() {
   return (neuron0x23b0200()*0.260249);
}

double NNfunction_nn_chi1_chi1::synapse0x23d97b0() {
   return (neuron0x23b0ce0()*-0.062916);
}

double NNfunction_nn_chi1_chi1::synapse0x23d97f0() {
   return (neuron0x23b16b0()*0.189079);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9830() {
   return (neuron0x23ae790()*0.00798787);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9870() {
   return (neuron0x23b3260()*0.107441);
}

double NNfunction_nn_chi1_chi1::synapse0x23d98b0() {
   return (neuron0x23b3c30()*1.0135);
}

double NNfunction_nn_chi1_chi1::synapse0x23d98f0() {
   return (neuron0x23b4600()*-0.677819);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9930() {
   return (neuron0x23b4fd0()*0.76739);
}

double NNfunction_nn_chi1_chi1::synapse0x23d93c0() {
   return (neuron0x23b6de0()*-0.174891);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9400() {
   return (neuron0x23b70c0()*7.34886);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9a80() {
   return (neuron0x23b7a90()*0.0565311);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9ac0() {
   return (neuron0x23b8460()*-0.258993);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9b00() {
   return (neuron0x23b8e30()*-1.07149);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9b40() {
   return (neuron0x23b9800()*0.0574848);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9b80() {
   return (neuron0x23b2350()*0.942501);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9bc0() {
   return (neuron0x23b2d20()*-1.31702);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9c00() {
   return (neuron0x23bc590()*0.0203643);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9c40() {
   return (neuron0x23bcf60()*-0.00699689);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9c80() {
   return (neuron0x23bd930()*-0.823852);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9cc0() {
   return (neuron0x23be300()*0.858291);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9d00() {
   return (neuron0x23becd0()*1.03061);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9d40() {
   return (neuron0x23bf6a0()*0.0447823);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9d80() {
   return (neuron0x23c0070()*0.0612659);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9dc0() {
   return (neuron0x23c0a40()*-7.23959);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9970() {
   return (neuron0x23b6ad0()*-1.49364);
}

double NNfunction_nn_chi1_chi1::synapse0x23d99b0() {
   return (neuron0x23c3620()*-0.282378);
}

double NNfunction_nn_chi1_chi1::synapse0x23d99f0() {
   return (neuron0x23c3ff0()*2.55544);
}

double NNfunction_nn_chi1_chi1::synapse0x23d9a30() {
   return (neuron0x23c49c0()*-0.0256561);
}

double NNfunction_nn_chi1_chi1::synapse0x23da010() {
   return (neuron0x23c5390()*0.334568);
}

double NNfunction_nn_chi1_chi1::synapse0x23da050() {
   return (neuron0x23c5d60()*-0.0360861);
}

double NNfunction_nn_chi1_chi1::synapse0x23da090() {
   return (neuron0x23c6730()*-0.20222);
}

double NNfunction_nn_chi1_chi1::synapse0x23da0d0() {
   return (neuron0x23c7100()*-2.18755);
}

double NNfunction_nn_chi1_chi1::synapse0x23da110() {
   return (neuron0x23c7ad0()*-2.33189);
}

double NNfunction_nn_chi1_chi1::synapse0x23da150() {
   return (neuron0x23c86b0()*0.01993);
}

double NNfunction_nn_chi1_chi1::synapse0x23da190() {
   return (neuron0x23c9080()*0.0228574);
}

double NNfunction_nn_chi1_chi1::synapse0x23da1d0() {
   return (neuron0x23b9f00()*1.43511);
}

double NNfunction_nn_chi1_chi1::synapse0x23da210() {
   return (neuron0x23ba8d0()*-0.0547905);
}

double NNfunction_nn_chi1_chi1::synapse0x23da250() {
   return (neuron0x23bb2a0()*2.21034);
}

double NNfunction_nn_chi1_chi1::synapse0x23da290() {
   return (neuron0x23cd8e0()*-0.0773233);
}

double NNfunction_nn_chi1_chi1::synapse0x23da2d0() {
   return (neuron0x23ce190()*0.162991);
}

double NNfunction_nn_chi1_chi1::synapse0x23da310() {
   return (neuron0x23ceb60()*0.00872217);
}

double NNfunction_nn_chi1_chi1::synapse0x23da350() {
   return (neuron0x23cf530()*0.0975906);
}

double NNfunction_nn_chi1_chi1::synapse0x23da5b0() {
   return (neuron0x23d6730()*8.67579);
}

double NNfunction_nn_chi1_chi1::synapse0x23da5f0() {
   return (neuron0x23d6ad0()*-7.23482);
}

double NNfunction_nn_chi1_chi1::synapse0x23da630() {
   return (neuron0x23d6f70()*-13.2864);
}

double NNfunction_nn_chi1_chi1::synapse0x23da670() {
   return (neuron0x23d80d0()*8.13939);
}

double NNfunction_nn_chi1_chi1::synapse0x23da6b0() {
   return (neuron0x23d9230()*-6.35365);
}

