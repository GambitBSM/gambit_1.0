#include "NNfunction_nn_chi1_charge1m.h"
#include <cmath>

double NNfunction_nn_chi1_charge1m::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.769)/15.0459;
   input1 = (in1 - 46.821)/894.244;
   input2 = (in2 - 455.191)/510.302;
   input3 = (in3 - 224.384)/708.238;
   input4 = (in4 - 1098.31)/926.554;
   input5 = (in5 - 1038.73)/975.733;
   input6 = (in6 - 1042.81)/974.51;
   input7 = (in7 - 1028.56)/943.049;
   input8 = (in8 - 1046.57)/986.03;
   input9 = (in9 - 1038.36)/978.795;
   input10 = (in10 - 1027.83)/935.31;
   input11 = (in11 - 985.777)/933.805;
   input12 = (in12 - 996.104)/936.562;
   input13 = (in13 - 745.546)/662.683;
   input14 = (in14 - 998.62)/915.742;
   input15 = (in15 - 995.634)/916.699;
   input16 = (in16 - 654.258)/565.84;
   input17 = (in17 - 1010.44)/948.394;
   input18 = (in18 - 1007.95)/949.84;
   input19 = (in19 - 993.429)/889.342;
   input20 = (in20 - -177.498)/467.947;
   input21 = (in21 - -228.714)/1018.11;
   input22 = (in22 - -4.87046)/1043.57;
   input23 = (in23 - -22.8069)/528.282;
   switch(index) {
     case 0:
         return neuron0x34e05a0();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi1_charge1m::Value(int index, double* input) {
   input0 = (input[0] - 23.769)/15.0459;
   input1 = (input[1] - 46.821)/894.244;
   input2 = (input[2] - 455.191)/510.302;
   input3 = (input[3] - 224.384)/708.238;
   input4 = (input[4] - 1098.31)/926.554;
   input5 = (input[5] - 1038.73)/975.733;
   input6 = (input[6] - 1042.81)/974.51;
   input7 = (input[7] - 1028.56)/943.049;
   input8 = (input[8] - 1046.57)/986.03;
   input9 = (input[9] - 1038.36)/978.795;
   input10 = (input[10] - 1027.83)/935.31;
   input11 = (input[11] - 985.777)/933.805;
   input12 = (input[12] - 996.104)/936.562;
   input13 = (input[13] - 745.546)/662.683;
   input14 = (input[14] - 998.62)/915.742;
   input15 = (input[15] - 995.634)/916.699;
   input16 = (input[16] - 654.258)/565.84;
   input17 = (input[17] - 1010.44)/948.394;
   input18 = (input[18] - 1007.95)/949.84;
   input19 = (input[19] - 993.429)/889.342;
   input20 = (input[20] - -177.498)/467.947;
   input21 = (input[21] - -228.714)/1018.11;
   input22 = (input[22] - -4.87046)/1043.57;
   input23 = (input[23] - -22.8069)/528.282;
   switch(index) {
     case 0:
         return neuron0x34e05a0();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi1_charge1m::neuron0x34ab610() {
   return input0;
}

double NNfunction_nn_chi1_charge1m::neuron0x34ab8c0() {
   return input1;
}

double NNfunction_nn_chi1_charge1m::neuron0x34abc00() {
   return input2;
}

double NNfunction_nn_chi1_charge1m::neuron0x34abf40() {
   return input3;
}

double NNfunction_nn_chi1_charge1m::neuron0x34ac280() {
   return input4;
}

double NNfunction_nn_chi1_charge1m::neuron0x34ac5c0() {
   return input5;
}

double NNfunction_nn_chi1_charge1m::neuron0x34ac900() {
   return input6;
}

double NNfunction_nn_chi1_charge1m::neuron0x34acc40() {
   return input7;
}

double NNfunction_nn_chi1_charge1m::neuron0x34acf80() {
   return input8;
}

double NNfunction_nn_chi1_charge1m::neuron0x34ad2c0() {
   return input9;
}

double NNfunction_nn_chi1_charge1m::neuron0x34ad600() {
   return input10;
}

double NNfunction_nn_chi1_charge1m::neuron0x34ad940() {
   return input11;
}

double NNfunction_nn_chi1_charge1m::neuron0x34adc80() {
   return input12;
}

double NNfunction_nn_chi1_charge1m::neuron0x34adfc0() {
   return input13;
}

double NNfunction_nn_chi1_charge1m::neuron0x34ae300() {
   return input14;
}

double NNfunction_nn_chi1_charge1m::neuron0x34ae640() {
   return input15;
}

double NNfunction_nn_chi1_charge1m::neuron0x34ae980() {
   return input16;
}

double NNfunction_nn_chi1_charge1m::neuron0x34aeee0() {
   return input17;
}

double NNfunction_nn_chi1_charge1m::neuron0x34af190() {
   return input18;
}

double NNfunction_nn_chi1_charge1m::neuron0x34af4d0() {
   return input19;
}

double NNfunction_nn_chi1_charge1m::neuron0x34af810() {
   return input20;
}

double NNfunction_nn_chi1_charge1m::neuron0x34afb50() {
   return input21;
}

double NNfunction_nn_chi1_charge1m::neuron0x34afe90() {
   return input22;
}

double NNfunction_nn_chi1_charge1m::neuron0x34b01d0() {
   return input23;
}

double NNfunction_nn_chi1_charge1m::input0x34b0640() {
   double input = 1.06583;
   input += synapse0x34b0980();
   input += synapse0x34b09c0();
   input += synapse0x34b0a00();
   input += synapse0x34b0a40();
   input += synapse0x34b0a80();
   input += synapse0x34b0ac0();
   input += synapse0x34b0b00();
   input += synapse0x34b0b40();
   input += synapse0x34b0b80();
   input += synapse0x34b0bc0();
   input += synapse0x34b0c00();
   input += synapse0x34b0c40();
   input += synapse0x34b0c80();
   input += synapse0x34b0cc0();
   input += synapse0x34b0d00();
   input += synapse0x34b0d40();
   input += synapse0x34b07d0();
   input += synapse0x34b0810();
   input += synapse0x3267860();
   input += synapse0x32678a0();
   input += synapse0x257f8d0();
   input += synapse0x257f910();
   input += synapse0x34b0e90();
   input += synapse0x34b0ed0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34b0640() {
   double input = input0x34b0640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34b0f10() {
   double input = -3.63395;
   input += synapse0x34b1250();
   input += synapse0x34b1290();
   input += synapse0x34b12d0();
   input += synapse0x34b1310();
   input += synapse0x34b1350();
   input += synapse0x34b1390();
   input += synapse0x34b13d0();
   input += synapse0x34b1410();
   input += synapse0x34b1450();
   input += synapse0x34b0d80();
   input += synapse0x34b0dc0();
   input += synapse0x34b0e00();
   input += synapse0x34b0e40();
   input += synapse0x34b16a0();
   input += synapse0x34b16e0();
   input += synapse0x34b1720();
   input += synapse0x34b10a0();
   input += synapse0x34b10e0();
   input += synapse0x34b1870();
   input += synapse0x34b18b0();
   input += synapse0x34b18f0();
   input += synapse0x34b1930();
   input += synapse0x34b1970();
   input += synapse0x34b19b0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34b0f10() {
   double input = input0x34b0f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34b19f0() {
   double input = 0.775455;
   input += synapse0x34b1d30();
   input += synapse0x34b1d70();
   input += synapse0x34b1db0();
   input += synapse0x34b1df0();
   input += synapse0x34b1e30();
   input += synapse0x34b1e70();
   input += synapse0x34b1eb0();
   input += synapse0x34b1ef0();
   input += synapse0x34b1f30();
   input += synapse0x34b1f70();
   input += synapse0x34b1fb0();
   input += synapse0x34b1ff0();
   input += synapse0x34b2030();
   input += synapse0x34b2070();
   input += synapse0x34b20b0();
   input += synapse0x34b20f0();
   input += synapse0x34b1b80();
   input += synapse0x34b1bc0();
   input += synapse0x32756b0();
   input += synapse0x32756f0();
   input += synapse0x34b4020();
   input += synapse0x34b4060();
   input += synapse0x34ab350();
   input += synapse0x34ab390();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34b19f0() {
   double input = input0x34b19f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x3275e10() {
   double input = 0.882865;
   input += synapse0x3275fa0();
   input += synapse0x34b15b0();
   input += synapse0x34b15f0();
   input += synapse0x34b1630();
   input += synapse0x34b2240();
   input += synapse0x34b2280();
   input += synapse0x34b22c0();
   input += synapse0x34b2300();
   input += synapse0x34b2340();
   input += synapse0x34b2380();
   input += synapse0x34b23c0();
   input += synapse0x34b2400();
   input += synapse0x34b2440();
   input += synapse0x34b2480();
   input += synapse0x34b24c0();
   input += synapse0x34b2500();
   input += synapse0x34ab3d0();
   input += synapse0x34ab410();
   input += synapse0x34b2650();
   input += synapse0x34b2690();
   input += synapse0x34b26d0();
   input += synapse0x34b2710();
   input += synapse0x34b2750();
   input += synapse0x34b2790();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x3275e10() {
   double input = input0x3275e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34b27d0() {
   double input = 1.0414;
   input += synapse0x34b2b10();
   input += synapse0x34b2b50();
   input += synapse0x34b2b90();
   input += synapse0x34b2bd0();
   input += synapse0x34b2c10();
   input += synapse0x34b2c50();
   input += synapse0x34b2c90();
   input += synapse0x34b2cd0();
   input += synapse0x34b2d10();
   input += synapse0x34b2d50();
   input += synapse0x34b2d90();
   input += synapse0x34b2dd0();
   input += synapse0x34b2e10();
   input += synapse0x34b2e50();
   input += synapse0x34b2e90();
   input += synapse0x34b2ed0();
   input += synapse0x34b3020();
   input += synapse0x34b2960();
   input += synapse0x34b29a0();
   input += synapse0x34b4160();
   input += synapse0x34b41a0();
   input += synapse0x34b41e0();
   input += synapse0x34b4220();
   input += synapse0x34b4260();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34b27d0() {
   double input = input0x34b27d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34b42a0() {
   double input = 6.39812;
   input += synapse0x34b45e0();
   input += synapse0x34b4620();
   input += synapse0x34b4660();
   input += synapse0x34b46a0();
   input += synapse0x34b46e0();
   input += synapse0x34b4720();
   input += synapse0x34b4760();
   input += synapse0x34b47a0();
   input += synapse0x34b47e0();
   input += synapse0x3275a00();
   input += synapse0x3275a40();
   input += synapse0x3275a80();
   input += synapse0x3275ac0();
   input += synapse0x3275b00();
   input += synapse0x3275b40();
   input += synapse0x3275b80();
   input += synapse0x34b4430();
   input += synapse0x34b4470();
   input += synapse0x3275cd0();
   input += synapse0x3275d10();
   input += synapse0x3275d50();
   input += synapse0x3275d90();
   input += synapse0x3275dd0();
   input += synapse0x34b5030();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34b42a0() {
   double input = input0x34b42a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34b5070() {
   double input = -1.28195;
   input += synapse0x34b53b0();
   input += synapse0x34b53f0();
   input += synapse0x34b5430();
   input += synapse0x34b5470();
   input += synapse0x34b54b0();
   input += synapse0x34b54f0();
   input += synapse0x34b5530();
   input += synapse0x34b5570();
   input += synapse0x34b55b0();
   input += synapse0x34b55f0();
   input += synapse0x34b5630();
   input += synapse0x34b5670();
   input += synapse0x34b56b0();
   input += synapse0x34b56f0();
   input += synapse0x34b5730();
   input += synapse0x34b5770();
   input += synapse0x34b5200();
   input += synapse0x34b5240();
   input += synapse0x34b58c0();
   input += synapse0x34b5900();
   input += synapse0x34b5940();
   input += synapse0x34b5980();
   input += synapse0x34b59c0();
   input += synapse0x34b5a00();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34b5070() {
   double input = input0x34b5070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34b5a40() {
   double input = -0.090466;
   input += synapse0x34b5d80();
   input += synapse0x34b5dc0();
   input += synapse0x34b5e00();
   input += synapse0x34b5e40();
   input += synapse0x34b5e80();
   input += synapse0x34b5ec0();
   input += synapse0x34b5f00();
   input += synapse0x34b5f40();
   input += synapse0x34b5f80();
   input += synapse0x34b5fc0();
   input += synapse0x34b6000();
   input += synapse0x34b6040();
   input += synapse0x34b6080();
   input += synapse0x34b60c0();
   input += synapse0x34b6100();
   input += synapse0x34b6140();
   input += synapse0x34b5bd0();
   input += synapse0x34b5c10();
   input += synapse0x34b6290();
   input += synapse0x34b62d0();
   input += synapse0x34b6310();
   input += synapse0x34b6350();
   input += synapse0x34b6390();
   input += synapse0x34b63d0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34b5a40() {
   double input = input0x34b5a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34b6410() {
   double input = -4.69155;
   input += synapse0x34aedd0();
   input += synapse0x34aee10();
   input += synapse0x34aee50();
   input += synapse0x34aee90();
   input += synapse0x34b6960();
   input += synapse0x34b69a0();
   input += synapse0x34b69e0();
   input += synapse0x34b6a20();
   input += synapse0x34b6a60();
   input += synapse0x34b6aa0();
   input += synapse0x34b6ae0();
   input += synapse0x34b6b20();
   input += synapse0x34b6b60();
   input += synapse0x34b6ba0();
   input += synapse0x34b6be0();
   input += synapse0x34b6c20();
   input += synapse0x34b65a0();
   input += synapse0x34b65e0();
   input += synapse0x34b6d70();
   input += synapse0x34b6db0();
   input += synapse0x34b6df0();
   input += synapse0x34b6e30();
   input += synapse0x34b6e70();
   input += synapse0x34b6eb0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34b6410() {
   double input = input0x34b6410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34b6ef0() {
   double input = -3.41064;
   input += synapse0x34b7230();
   input += synapse0x34b7270();
   input += synapse0x34b72b0();
   input += synapse0x34b72f0();
   input += synapse0x34b7330();
   input += synapse0x34b7370();
   input += synapse0x34b73b0();
   input += synapse0x34b73f0();
   input += synapse0x34b7430();
   input += synapse0x34b7470();
   input += synapse0x34b74b0();
   input += synapse0x34b74f0();
   input += synapse0x34b7530();
   input += synapse0x34b7570();
   input += synapse0x34b75b0();
   input += synapse0x34b75f0();
   input += synapse0x34b7080();
   input += synapse0x34b70c0();
   input += synapse0x34b7740();
   input += synapse0x34b7780();
   input += synapse0x34b77c0();
   input += synapse0x34b7800();
   input += synapse0x34b7840();
   input += synapse0x34b7880();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34b6ef0() {
   double input = input0x34b6ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34b78c0() {
   double input = 7.11269;
   input += synapse0x34b7c00();
   input += synapse0x34b7c40();
   input += synapse0x34b7c80();
   input += synapse0x34b7cc0();
   input += synapse0x34b7d00();
   input += synapse0x34b7d40();
   input += synapse0x34b7d80();
   input += synapse0x34b7dc0();
   input += synapse0x34b7e00();
   input += synapse0x34b7e40();
   input += synapse0x34b7e80();
   input += synapse0x34b7ec0();
   input += synapse0x34b7f00();
   input += synapse0x34b7f40();
   input += synapse0x34b7f80();
   input += synapse0x34b7fc0();
   input += synapse0x34b7a50();
   input += synapse0x34b7a90();
   input += synapse0x34b4820();
   input += synapse0x34b4860();
   input += synapse0x34b48a0();
   input += synapse0x34b48e0();
   input += synapse0x34b4920();
   input += synapse0x34b4960();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34b78c0() {
   double input = input0x34b78c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34b49a0() {
   double input = -1.04289;
   input += synapse0x34b4ce0();
   input += synapse0x34b4d20();
   input += synapse0x34b4d60();
   input += synapse0x34b4da0();
   input += synapse0x34b4de0();
   input += synapse0x34b4e20();
   input += synapse0x34b4e60();
   input += synapse0x34b4ea0();
   input += synapse0x34b4ee0();
   input += synapse0x34b4f20();
   input += synapse0x34b4f60();
   input += synapse0x34b4fa0();
   input += synapse0x34b4fe0();
   input += synapse0x34b9120();
   input += synapse0x34b9160();
   input += synapse0x34b91a0();
   input += synapse0x34b4b30();
   input += synapse0x34b4b70();
   input += synapse0x34b92f0();
   input += synapse0x34b9330();
   input += synapse0x34b9370();
   input += synapse0x34b93b0();
   input += synapse0x34b93f0();
   input += synapse0x34b9430();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34b49a0() {
   double input = input0x34b49a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34b9470() {
   double input = 4.76662;
   input += synapse0x34b97b0();
   input += synapse0x34b97f0();
   input += synapse0x34b9830();
   input += synapse0x34b9870();
   input += synapse0x34b98b0();
   input += synapse0x34b98f0();
   input += synapse0x34b9930();
   input += synapse0x34b9970();
   input += synapse0x34b99b0();
   input += synapse0x34b99f0();
   input += synapse0x34b9a30();
   input += synapse0x34b9a70();
   input += synapse0x34b9ab0();
   input += synapse0x34b9af0();
   input += synapse0x34b9b30();
   input += synapse0x34b9b70();
   input += synapse0x34b9600();
   input += synapse0x34b9640();
   input += synapse0x34b9cc0();
   input += synapse0x34b9d00();
   input += synapse0x34b9d40();
   input += synapse0x34b9d80();
   input += synapse0x34b9dc0();
   input += synapse0x34b9e00();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34b9470() {
   double input = input0x34b9470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34b9e40() {
   double input = -0.988627;
   input += synapse0x34ba180();
   input += synapse0x34ba1c0();
   input += synapse0x34ba200();
   input += synapse0x34ba240();
   input += synapse0x34ba280();
   input += synapse0x34ba2c0();
   input += synapse0x34ba300();
   input += synapse0x34ba340();
   input += synapse0x34ba380();
   input += synapse0x34ba3c0();
   input += synapse0x34ba400();
   input += synapse0x34ba440();
   input += synapse0x34ba480();
   input += synapse0x34ba4c0();
   input += synapse0x34ba500();
   input += synapse0x34ba540();
   input += synapse0x34b9fd0();
   input += synapse0x34ba010();
   input += synapse0x34ba690();
   input += synapse0x34ba6d0();
   input += synapse0x34ba710();
   input += synapse0x34ba750();
   input += synapse0x34ba790();
   input += synapse0x34ba7d0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34b9e40() {
   double input = input0x34b9e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34ba810() {
   double input = -1.66994;
   input += synapse0x34bab50();
   input += synapse0x34bab90();
   input += synapse0x34babd0();
   input += synapse0x34bac10();
   input += synapse0x34bac50();
   input += synapse0x34bac90();
   input += synapse0x34bacd0();
   input += synapse0x34bad10();
   input += synapse0x34bad50();
   input += synapse0x34bad90();
   input += synapse0x34badd0();
   input += synapse0x34bae10();
   input += synapse0x34bae50();
   input += synapse0x34bae90();
   input += synapse0x34baed0();
   input += synapse0x34baf10();
   input += synapse0x34ba9a0();
   input += synapse0x34ba9e0();
   input += synapse0x34bb060();
   input += synapse0x34bb0a0();
   input += synapse0x34bb0e0();
   input += synapse0x34bb120();
   input += synapse0x34bb160();
   input += synapse0x34bb1a0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34ba810() {
   double input = input0x34ba810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34bb1e0() {
   double input = 1.14592;
   input += synapse0x34bb520();
   input += synapse0x34ab7a0();
   input += synapse0x34ab7e0();
   input += synapse0x34abae0();
   input += synapse0x34abb20();
   input += synapse0x34abe20();
   input += synapse0x34abe60();
   input += synapse0x34ac160();
   input += synapse0x34ac1a0();
   input += synapse0x34ac4a0();
   input += synapse0x34ac4e0();
   input += synapse0x34ac7e0();
   input += synapse0x34ac820();
   input += synapse0x34acb20();
   input += synapse0x34acb60();
   input += synapse0x34ace60();
   input += synapse0x34acea0();
   input += synapse0x34ad1a0();
   input += synapse0x34ad1e0();
   input += synapse0x34ad4e0();
   input += synapse0x34ad520();
   input += synapse0x34ad820();
   input += synapse0x34ad860();
   input += synapse0x34adb60();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34bb1e0() {
   double input = input0x34bb1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34bcff0() {
   double input = -2.8632;
   input += synapse0x34adba0();
   input += synapse0x34ae860();
   input += synapse0x34ae8a0();
   input += synapse0x34bb370();
   input += synapse0x34bb3b0();
   input += synapse0x34aeba0();
   input += synapse0x34aebe0();
   input += synapse0x34af070();
   input += synapse0x34af0b0();
   input += synapse0x34af3b0();
   input += synapse0x34af3f0();
   input += synapse0x34af6f0();
   input += synapse0x34af730();
   input += synapse0x34afa30();
   input += synapse0x34afa70();
   input += synapse0x34afd70();
   input += synapse0x34afdb0();
   input += synapse0x34b00b0();
   input += synapse0x34b00f0();
   input += synapse0x34b03f0();
   input += synapse0x34b0430();
   input += synapse0x34adea0();
   input += synapse0x34adee0();
   input += synapse0x34bd290();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34bcff0() {
   double input = input0x34bcff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34bd2d0() {
   double input = 0.203825;
   input += synapse0x34bd610();
   input += synapse0x34bd650();
   input += synapse0x34bd690();
   input += synapse0x34bd6d0();
   input += synapse0x34bd710();
   input += synapse0x34bd750();
   input += synapse0x34bd790();
   input += synapse0x34bd7d0();
   input += synapse0x34bd810();
   input += synapse0x34bd850();
   input += synapse0x34bd890();
   input += synapse0x34bd8d0();
   input += synapse0x34bd910();
   input += synapse0x34bd950();
   input += synapse0x34bd990();
   input += synapse0x34bd9d0();
   input += synapse0x34bd460();
   input += synapse0x34bd4a0();
   input += synapse0x34bdb20();
   input += synapse0x34bdb60();
   input += synapse0x34bdba0();
   input += synapse0x34bdbe0();
   input += synapse0x34bdc20();
   input += synapse0x34bdc60();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34bd2d0() {
   double input = input0x34bd2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34bdca0() {
   double input = 6.97233;
   input += synapse0x34bdfe0();
   input += synapse0x34be020();
   input += synapse0x34be060();
   input += synapse0x34be0a0();
   input += synapse0x34be0e0();
   input += synapse0x34be120();
   input += synapse0x34be160();
   input += synapse0x34be1a0();
   input += synapse0x34be1e0();
   input += synapse0x34be220();
   input += synapse0x34be260();
   input += synapse0x34be2a0();
   input += synapse0x34be2e0();
   input += synapse0x34be320();
   input += synapse0x34be360();
   input += synapse0x34be3a0();
   input += synapse0x34bde30();
   input += synapse0x34bde70();
   input += synapse0x34be4f0();
   input += synapse0x34be530();
   input += synapse0x34be570();
   input += synapse0x34be5b0();
   input += synapse0x34be5f0();
   input += synapse0x34be630();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34bdca0() {
   double input = input0x34bdca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34be670() {
   double input = -1.99375;
   input += synapse0x34be9b0();
   input += synapse0x34be9f0();
   input += synapse0x34bea30();
   input += synapse0x34bea70();
   input += synapse0x34beab0();
   input += synapse0x34beaf0();
   input += synapse0x34beb30();
   input += synapse0x34beb70();
   input += synapse0x34bebb0();
   input += synapse0x34bebf0();
   input += synapse0x34bec30();
   input += synapse0x34bec70();
   input += synapse0x34becb0();
   input += synapse0x34becf0();
   input += synapse0x34bed30();
   input += synapse0x34bed70();
   input += synapse0x34be800();
   input += synapse0x34be840();
   input += synapse0x34beec0();
   input += synapse0x34bef00();
   input += synapse0x34bef40();
   input += synapse0x34bef80();
   input += synapse0x34befc0();
   input += synapse0x34bf000();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34be670() {
   double input = input0x34be670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34bf040() {
   double input = -0.0749627;
   input += synapse0x34bf380();
   input += synapse0x34bf3c0();
   input += synapse0x34bf400();
   input += synapse0x34bf440();
   input += synapse0x34bf480();
   input += synapse0x34bf4c0();
   input += synapse0x34bf500();
   input += synapse0x34bf540();
   input += synapse0x34bf580();
   input += synapse0x34bf5c0();
   input += synapse0x34bf600();
   input += synapse0x34bf640();
   input += synapse0x34bf680();
   input += synapse0x34bf6c0();
   input += synapse0x34bf700();
   input += synapse0x34bf740();
   input += synapse0x34bf1d0();
   input += synapse0x34bf210();
   input += synapse0x34bf890();
   input += synapse0x34bf8d0();
   input += synapse0x34bf910();
   input += synapse0x34bf950();
   input += synapse0x34bf990();
   input += synapse0x34bf9d0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34bf040() {
   double input = input0x34bf040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34bfa10() {
   double input = 1.47098;
   input += synapse0x34bfd50();
   input += synapse0x34bfd90();
   input += synapse0x34bfdd0();
   input += synapse0x34bfe10();
   input += synapse0x34bfe50();
   input += synapse0x34bfe90();
   input += synapse0x34bfed0();
   input += synapse0x34bff10();
   input += synapse0x34bff50();
   input += synapse0x34b8110();
   input += synapse0x34b8150();
   input += synapse0x34b8190();
   input += synapse0x34b81d0();
   input += synapse0x34b8210();
   input += synapse0x34b8250();
   input += synapse0x34b8290();
   input += synapse0x34bfba0();
   input += synapse0x34bfbe0();
   input += synapse0x34b83e0();
   input += synapse0x34b8420();
   input += synapse0x34b8460();
   input += synapse0x34b84a0();
   input += synapse0x34b84e0();
   input += synapse0x34b8520();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34bfa10() {
   double input = input0x34bfa10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34b8560() {
   double input = 1.59092;
   input += synapse0x34b88a0();
   input += synapse0x34b88e0();
   input += synapse0x34b8920();
   input += synapse0x34b8960();
   input += synapse0x34b89a0();
   input += synapse0x34b89e0();
   input += synapse0x34b8a20();
   input += synapse0x34b8a60();
   input += synapse0x34b8aa0();
   input += synapse0x34b8ae0();
   input += synapse0x34b8b20();
   input += synapse0x34b8b60();
   input += synapse0x34b8ba0();
   input += synapse0x34b8be0();
   input += synapse0x34b8c20();
   input += synapse0x34b8c60();
   input += synapse0x34b86f0();
   input += synapse0x34b8730();
   input += synapse0x34b8db0();
   input += synapse0x34b8df0();
   input += synapse0x34b8e30();
   input += synapse0x34b8e70();
   input += synapse0x34b8eb0();
   input += synapse0x34b8ef0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34b8560() {
   double input = input0x34b8560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34b8f30() {
   double input = -1.69057;
   input += synapse0x34b90c0();
   input += synapse0x34c2150();
   input += synapse0x34c2190();
   input += synapse0x34c21d0();
   input += synapse0x34c2210();
   input += synapse0x34c2250();
   input += synapse0x34c2290();
   input += synapse0x34c22d0();
   input += synapse0x34c2310();
   input += synapse0x34c2350();
   input += synapse0x34c2390();
   input += synapse0x34c23d0();
   input += synapse0x34c2410();
   input += synapse0x34c2450();
   input += synapse0x34c2490();
   input += synapse0x34c24d0();
   input += synapse0x34c1fa0();
   input += synapse0x34c1fe0();
   input += synapse0x34c2620();
   input += synapse0x34c2660();
   input += synapse0x34c26a0();
   input += synapse0x34c26e0();
   input += synapse0x34c2720();
   input += synapse0x34c2760();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34b8f30() {
   double input = input0x34b8f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34c27a0() {
   double input = 3.54892;
   input += synapse0x34c2ae0();
   input += synapse0x34c2b20();
   input += synapse0x34c2b60();
   input += synapse0x34c2ba0();
   input += synapse0x34c2be0();
   input += synapse0x34c2c20();
   input += synapse0x34c2c60();
   input += synapse0x34c2ca0();
   input += synapse0x34c2ce0();
   input += synapse0x34c2d20();
   input += synapse0x34c2d60();
   input += synapse0x34c2da0();
   input += synapse0x34c2de0();
   input += synapse0x34c2e20();
   input += synapse0x34c2e60();
   input += synapse0x34c2ea0();
   input += synapse0x34c2930();
   input += synapse0x34c2970();
   input += synapse0x34c2ff0();
   input += synapse0x34c3030();
   input += synapse0x34c3070();
   input += synapse0x34c30b0();
   input += synapse0x34c30f0();
   input += synapse0x34c3130();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34c27a0() {
   double input = input0x34c27a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34c3170() {
   double input = -0.824566;
   input += synapse0x34c34b0();
   input += synapse0x34c34f0();
   input += synapse0x34c3530();
   input += synapse0x34c3570();
   input += synapse0x34c35b0();
   input += synapse0x34c35f0();
   input += synapse0x34c3630();
   input += synapse0x34c3670();
   input += synapse0x34c36b0();
   input += synapse0x34c36f0();
   input += synapse0x34c3730();
   input += synapse0x34c3770();
   input += synapse0x34c37b0();
   input += synapse0x34c37f0();
   input += synapse0x34c3830();
   input += synapse0x34c3870();
   input += synapse0x34c3300();
   input += synapse0x34c3340();
   input += synapse0x34c39c0();
   input += synapse0x34c3a00();
   input += synapse0x34c3a40();
   input += synapse0x34c3a80();
   input += synapse0x34c3ac0();
   input += synapse0x34c3b00();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34c3170() {
   double input = input0x34c3170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34c3b40() {
   double input = 0.276181;
   input += synapse0x34c3e80();
   input += synapse0x34c3ec0();
   input += synapse0x34c3f00();
   input += synapse0x34c3f40();
   input += synapse0x34c3f80();
   input += synapse0x34c3fc0();
   input += synapse0x34c4000();
   input += synapse0x34c4040();
   input += synapse0x34c4080();
   input += synapse0x34c40c0();
   input += synapse0x34c4100();
   input += synapse0x34c4140();
   input += synapse0x34c4180();
   input += synapse0x34c41c0();
   input += synapse0x34c4200();
   input += synapse0x34c4240();
   input += synapse0x34c3cd0();
   input += synapse0x34c3d10();
   input += synapse0x34c4390();
   input += synapse0x34c43d0();
   input += synapse0x34c4410();
   input += synapse0x34c4450();
   input += synapse0x34c4490();
   input += synapse0x34c44d0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34c3b40() {
   double input = input0x34c3b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34c4510() {
   double input = -11.3544;
   input += synapse0x34c4850();
   input += synapse0x34c4890();
   input += synapse0x34c48d0();
   input += synapse0x34c4910();
   input += synapse0x34c4950();
   input += synapse0x34c4990();
   input += synapse0x34c49d0();
   input += synapse0x34c4a10();
   input += synapse0x34c4a50();
   input += synapse0x34c4a90();
   input += synapse0x34c4ad0();
   input += synapse0x34c4b10();
   input += synapse0x34c4b50();
   input += synapse0x34c4b90();
   input += synapse0x34c4bd0();
   input += synapse0x34c4c10();
   input += synapse0x34c46a0();
   input += synapse0x34c46e0();
   input += synapse0x34c4d60();
   input += synapse0x34c4da0();
   input += synapse0x34c4de0();
   input += synapse0x34c4e20();
   input += synapse0x34c4e60();
   input += synapse0x34c4ea0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34c4510() {
   double input = input0x34c4510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34c4ee0() {
   double input = 0.363178;
   input += synapse0x34c5220();
   input += synapse0x34c5260();
   input += synapse0x34c52a0();
   input += synapse0x34c52e0();
   input += synapse0x34c5320();
   input += synapse0x34c5360();
   input += synapse0x34c53a0();
   input += synapse0x34c53e0();
   input += synapse0x34c5420();
   input += synapse0x34c5460();
   input += synapse0x34c54a0();
   input += synapse0x34c54e0();
   input += synapse0x34c5520();
   input += synapse0x34c5560();
   input += synapse0x34c55a0();
   input += synapse0x34c55e0();
   input += synapse0x34c5070();
   input += synapse0x34c50b0();
   input += synapse0x34c5730();
   input += synapse0x34c5770();
   input += synapse0x34c57b0();
   input += synapse0x34c57f0();
   input += synapse0x34c5830();
   input += synapse0x34c5870();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34c4ee0() {
   double input = input0x34c4ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34c58b0() {
   double input = 0.573256;
   input += synapse0x34c5bf0();
   input += synapse0x34c5c30();
   input += synapse0x34c5c70();
   input += synapse0x34c5cb0();
   input += synapse0x34c5cf0();
   input += synapse0x34c5d30();
   input += synapse0x34c5d70();
   input += synapse0x34c5db0();
   input += synapse0x34c5df0();
   input += synapse0x34c5e30();
   input += synapse0x34c5e70();
   input += synapse0x34c5eb0();
   input += synapse0x34c5ef0();
   input += synapse0x34c5f30();
   input += synapse0x34c5f70();
   input += synapse0x34c5fb0();
   input += synapse0x34c5a40();
   input += synapse0x34c5a80();
   input += synapse0x34c6100();
   input += synapse0x34c6140();
   input += synapse0x34c6180();
   input += synapse0x34c61c0();
   input += synapse0x34c6200();
   input += synapse0x34c6240();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34c58b0() {
   double input = input0x34c58b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34c6280() {
   double input = -1.10558;
   input += synapse0x34c65c0();
   input += synapse0x34c6600();
   input += synapse0x34c6640();
   input += synapse0x34c6680();
   input += synapse0x34c66c0();
   input += synapse0x34c6700();
   input += synapse0x34c6740();
   input += synapse0x34c6780();
   input += synapse0x34c67c0();
   input += synapse0x34c6800();
   input += synapse0x34c6840();
   input += synapse0x34c6880();
   input += synapse0x34c68c0();
   input += synapse0x34c6900();
   input += synapse0x34c6940();
   input += synapse0x34c6980();
   input += synapse0x34c6410();
   input += synapse0x34c6450();
   input += synapse0x34c6ad0();
   input += synapse0x34c6b10();
   input += synapse0x34c6b50();
   input += synapse0x34c6b90();
   input += synapse0x34c6bd0();
   input += synapse0x34c6c10();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34c6280() {
   double input = input0x34c6280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34c6c50() {
   double input = -0.706885;
   input += synapse0x34c6f90();
   input += synapse0x34bb560();
   input += synapse0x34bb5a0();
   input += synapse0x34bb5e0();
   input += synapse0x34bb830();
   input += synapse0x34bb870();
   input += synapse0x34bb8b0();
   input += synapse0x34bbb00();
   input += synapse0x34bbb40();
   input += synapse0x34bbd90();
   input += synapse0x34bbdd0();
   input += synapse0x34bbe10();
   input += synapse0x34bc060();
   input += synapse0x34bc0a0();
   input += synapse0x34bc2f0();
   input += synapse0x34bc330();
   input += synapse0x34c6de0();
   input += synapse0x34c6e20();
   input += synapse0x34bc480();
   input += synapse0x34bc990();
   input += synapse0x34bc9d0();
   input += synapse0x34bca10();
   input += synapse0x34bcc60();
   input += synapse0x34bcca0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34c6c50() {
   double input = input0x34c6c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34bcce0() {
   double input = -0.54126;
   input += synapse0x34bc550();
   input += synapse0x34bc590();
   input += synapse0x34bc5d0();
   input += synapse0x34bc610();
   input += synapse0x34bcf90();
   input += synapse0x34c92e0();
   input += synapse0x34c9320();
   input += synapse0x34c9360();
   input += synapse0x34c93a0();
   input += synapse0x34c93e0();
   input += synapse0x34c9420();
   input += synapse0x34c9460();
   input += synapse0x34c94a0();
   input += synapse0x34c94e0();
   input += synapse0x34c9520();
   input += synapse0x34c9560();
   input += synapse0x34bce70();
   input += synapse0x34bceb0();
   input += synapse0x34c96b0();
   input += synapse0x34c96f0();
   input += synapse0x34c9730();
   input += synapse0x34c9770();
   input += synapse0x34c97b0();
   input += synapse0x34c97f0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34bcce0() {
   double input = input0x34bcce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34c9830() {
   double input = 0.549648;
   input += synapse0x34c9b70();
   input += synapse0x34c9bb0();
   input += synapse0x34c9bf0();
   input += synapse0x34c9c30();
   input += synapse0x34c9c70();
   input += synapse0x34c9cb0();
   input += synapse0x34c9cf0();
   input += synapse0x34c9d30();
   input += synapse0x34c9d70();
   input += synapse0x34c9db0();
   input += synapse0x34c9df0();
   input += synapse0x34c9e30();
   input += synapse0x34c9e70();
   input += synapse0x34c9eb0();
   input += synapse0x34c9ef0();
   input += synapse0x34c9f30();
   input += synapse0x34c99c0();
   input += synapse0x34c9a00();
   input += synapse0x34ca080();
   input += synapse0x34ca0c0();
   input += synapse0x34ca100();
   input += synapse0x34ca140();
   input += synapse0x34ca180();
   input += synapse0x34ca1c0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34c9830() {
   double input = input0x34c9830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34ca200() {
   double input = -0.588427;
   input += synapse0x34ca540();
   input += synapse0x34ca580();
   input += synapse0x34ca5c0();
   input += synapse0x34ca600();
   input += synapse0x34ca640();
   input += synapse0x34ca680();
   input += synapse0x34ca6c0();
   input += synapse0x34ca700();
   input += synapse0x34ca740();
   input += synapse0x34ca780();
   input += synapse0x34ca7c0();
   input += synapse0x34ca800();
   input += synapse0x34ca840();
   input += synapse0x34ca880();
   input += synapse0x34ca8c0();
   input += synapse0x34ca900();
   input += synapse0x34ca390();
   input += synapse0x34ca3d0();
   input += synapse0x34caa50();
   input += synapse0x34caa90();
   input += synapse0x34caad0();
   input += synapse0x34cab10();
   input += synapse0x34cab50();
   input += synapse0x34cab90();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34ca200() {
   double input = input0x34ca200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34cabd0() {
   double input = 3.03046;
   input += synapse0x34caf10();
   input += synapse0x34caf50();
   input += synapse0x34caf90();
   input += synapse0x34cafd0();
   input += synapse0x34cb010();
   input += synapse0x34cb050();
   input += synapse0x34cb090();
   input += synapse0x34cb0d0();
   input += synapse0x34cb110();
   input += synapse0x34cb150();
   input += synapse0x34cb190();
   input += synapse0x34cb1d0();
   input += synapse0x34cb210();
   input += synapse0x34cb250();
   input += synapse0x34cb290();
   input += synapse0x34cb2d0();
   input += synapse0x34cad60();
   input += synapse0x34cada0();
   input += synapse0x34cb420();
   input += synapse0x34cb460();
   input += synapse0x34cb4a0();
   input += synapse0x34cb4e0();
   input += synapse0x34cb520();
   input += synapse0x34cb560();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34cabd0() {
   double input = input0x34cabd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34cb5a0() {
   double input = 1.2914;
   input += synapse0x34cb8e0();
   input += synapse0x34cb920();
   input += synapse0x34cb960();
   input += synapse0x34cb9a0();
   input += synapse0x34cb9e0();
   input += synapse0x34cba20();
   input += synapse0x34cba60();
   input += synapse0x34cbaa0();
   input += synapse0x34cbae0();
   input += synapse0x34cbb20();
   input += synapse0x34cbb60();
   input += synapse0x34cbba0();
   input += synapse0x34cbbe0();
   input += synapse0x34cbc20();
   input += synapse0x34cbc60();
   input += synapse0x34cbca0();
   input += synapse0x34cb730();
   input += synapse0x34cb770();
   input += synapse0x34cbdf0();
   input += synapse0x34cbe30();
   input += synapse0x34cbe70();
   input += synapse0x34cbeb0();
   input += synapse0x34cbef0();
   input += synapse0x34cbf30();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34cb5a0() {
   double input = input0x34cb5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34cbf70() {
   double input = -0.545889;
   input += synapse0x34cc2b0();
   input += synapse0x34cc2f0();
   input += synapse0x34cc330();
   input += synapse0x34cc370();
   input += synapse0x34cc3b0();
   input += synapse0x34cc3f0();
   input += synapse0x34cc430();
   input += synapse0x34cc470();
   input += synapse0x34cc4b0();
   input += synapse0x34cc4f0();
   input += synapse0x34cc530();
   input += synapse0x34cc570();
   input += synapse0x34cc5b0();
   input += synapse0x34cc5f0();
   input += synapse0x34cc630();
   input += synapse0x34cc670();
   input += synapse0x34cc100();
   input += synapse0x34cc140();
   input += synapse0x34cc7c0();
   input += synapse0x34cc800();
   input += synapse0x34cc840();
   input += synapse0x34cc880();
   input += synapse0x34cc8c0();
   input += synapse0x34cc900();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34cbf70() {
   double input = input0x34cbf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34cc940() {
   double input = 0.603383;
   input += synapse0x34ccc80();
   input += synapse0x34cccc0();
   input += synapse0x34ccd00();
   input += synapse0x34ccd40();
   input += synapse0x34ccd80();
   input += synapse0x34ccdc0();
   input += synapse0x34cce00();
   input += synapse0x34cce40();
   input += synapse0x34cce80();
   input += synapse0x34ccec0();
   input += synapse0x34ccf00();
   input += synapse0x34ccf40();
   input += synapse0x34ccf80();
   input += synapse0x34ccfc0();
   input += synapse0x34cd000();
   input += synapse0x34cd040();
   input += synapse0x34ccad0();
   input += synapse0x34ccb10();
   input += synapse0x34cd190();
   input += synapse0x34cd1d0();
   input += synapse0x34cd210();
   input += synapse0x34cd250();
   input += synapse0x34cd290();
   input += synapse0x34cd2d0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34cc940() {
   double input = input0x34cc940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34cd310() {
   double input = -1.13041;
   input += synapse0x34cd650();
   input += synapse0x34cd690();
   input += synapse0x34cd6d0();
   input += synapse0x34cd710();
   input += synapse0x34cd750();
   input += synapse0x34cd790();
   input += synapse0x34cd7d0();
   input += synapse0x34cd810();
   input += synapse0x34cd850();
   input += synapse0x34cd890();
   input += synapse0x34cd8d0();
   input += synapse0x34cd910();
   input += synapse0x34cd950();
   input += synapse0x34cd990();
   input += synapse0x34cd9d0();
   input += synapse0x34cda10();
   input += synapse0x34cd4a0();
   input += synapse0x34cd4e0();
   input += synapse0x34cdb60();
   input += synapse0x34cdba0();
   input += synapse0x34cdbe0();
   input += synapse0x34cdc20();
   input += synapse0x34cdc60();
   input += synapse0x34cdca0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34cd310() {
   double input = input0x34cd310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34cdce0() {
   double input = 1.25139;
   input += synapse0x34b6750();
   input += synapse0x34b6790();
   input += synapse0x34b67d0();
   input += synapse0x34b6810();
   input += synapse0x34b6850();
   input += synapse0x34b6890();
   input += synapse0x34b68d0();
   input += synapse0x34b6910();
   input += synapse0x34ce430();
   input += synapse0x34ce470();
   input += synapse0x34ce4b0();
   input += synapse0x34ce4f0();
   input += synapse0x34ce530();
   input += synapse0x34ce570();
   input += synapse0x34ce5b0();
   input += synapse0x34ce5f0();
   input += synapse0x34cde70();
   input += synapse0x34cdeb0();
   input += synapse0x34ce740();
   input += synapse0x34ce780();
   input += synapse0x34ce7c0();
   input += synapse0x34ce800();
   input += synapse0x34ce840();
   input += synapse0x34ce880();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34cdce0() {
   double input = input0x34cdce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34ce8c0() {
   double input = -1.91263;
   input += synapse0x34cec00();
   input += synapse0x34cec40();
   input += synapse0x34cec80();
   input += synapse0x34cecc0();
   input += synapse0x34ced00();
   input += synapse0x34ced40();
   input += synapse0x34ced80();
   input += synapse0x34cedc0();
   input += synapse0x34cee00();
   input += synapse0x34cee40();
   input += synapse0x34cee80();
   input += synapse0x34ceec0();
   input += synapse0x34cef00();
   input += synapse0x34cef40();
   input += synapse0x34cef80();
   input += synapse0x34cefc0();
   input += synapse0x34cea50();
   input += synapse0x34cea90();
   input += synapse0x34cf110();
   input += synapse0x34cf150();
   input += synapse0x34cf190();
   input += synapse0x34cf1d0();
   input += synapse0x34cf210();
   input += synapse0x34cf250();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34ce8c0() {
   double input = input0x34ce8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34cf290() {
   double input = 0.158643;
   input += synapse0x34cf5d0();
   input += synapse0x34cf610();
   input += synapse0x34cf650();
   input += synapse0x34cf690();
   input += synapse0x34cf6d0();
   input += synapse0x34cf710();
   input += synapse0x34cf750();
   input += synapse0x34cf790();
   input += synapse0x34cf7d0();
   input += synapse0x34cf810();
   input += synapse0x34cf850();
   input += synapse0x34cf890();
   input += synapse0x34cf8d0();
   input += synapse0x34cf910();
   input += synapse0x34cf950();
   input += synapse0x34cf990();
   input += synapse0x34cf420();
   input += synapse0x34cf460();
   input += synapse0x34bff90();
   input += synapse0x34bffd0();
   input += synapse0x34c0010();
   input += synapse0x34c0050();
   input += synapse0x34c0090();
   input += synapse0x34c00d0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34cf290() {
   double input = input0x34cf290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34c0110() {
   double input = 2.76441;
   input += synapse0x34c0450();
   input += synapse0x34c0490();
   input += synapse0x34c04d0();
   input += synapse0x34c0510();
   input += synapse0x34c0550();
   input += synapse0x34c0590();
   input += synapse0x34c05d0();
   input += synapse0x34c0610();
   input += synapse0x34c0650();
   input += synapse0x34c0690();
   input += synapse0x34c06d0();
   input += synapse0x34c0710();
   input += synapse0x34c0750();
   input += synapse0x34c0790();
   input += synapse0x34c07d0();
   input += synapse0x34c0810();
   input += synapse0x34c02a0();
   input += synapse0x34c02e0();
   input += synapse0x34c0960();
   input += synapse0x34c09a0();
   input += synapse0x34c09e0();
   input += synapse0x34c0a20();
   input += synapse0x34c0a60();
   input += synapse0x34c0aa0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34c0110() {
   double input = input0x34c0110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34c0ae0() {
   double input = -0.874164;
   input += synapse0x34c0e20();
   input += synapse0x34c0e60();
   input += synapse0x34c0ea0();
   input += synapse0x34c0ee0();
   input += synapse0x34c0f20();
   input += synapse0x34c0f60();
   input += synapse0x34c0fa0();
   input += synapse0x34c0fe0();
   input += synapse0x34c1020();
   input += synapse0x34c1060();
   input += synapse0x34c10a0();
   input += synapse0x34c10e0();
   input += synapse0x34c1120();
   input += synapse0x34c1160();
   input += synapse0x34c11a0();
   input += synapse0x34c11e0();
   input += synapse0x34c0c70();
   input += synapse0x34c0cb0();
   input += synapse0x34c1330();
   input += synapse0x34c1370();
   input += synapse0x34c13b0();
   input += synapse0x34c13f0();
   input += synapse0x34c1430();
   input += synapse0x34c1470();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34c0ae0() {
   double input = input0x34c0ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34c14b0() {
   double input = 1.19205;
   input += synapse0x34c17f0();
   input += synapse0x34c1830();
   input += synapse0x34c1870();
   input += synapse0x34c18b0();
   input += synapse0x34c18f0();
   input += synapse0x34c1930();
   input += synapse0x34c1970();
   input += synapse0x34c19b0();
   input += synapse0x34c19f0();
   input += synapse0x34c1a30();
   input += synapse0x34c1a70();
   input += synapse0x34c1ab0();
   input += synapse0x34c1af0();
   input += synapse0x34c1b30();
   input += synapse0x34c1b70();
   input += synapse0x34c1bb0();
   input += synapse0x34c1640();
   input += synapse0x34c1680();
   input += synapse0x34c1d00();
   input += synapse0x34c1d40();
   input += synapse0x34c1d80();
   input += synapse0x34c1dc0();
   input += synapse0x34c1e00();
   input += synapse0x34c1e40();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34c14b0() {
   double input = input0x34c14b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34d3af0() {
   double input = 3.90515;
   input += synapse0x34d3d10();
   input += synapse0x34d3d50();
   input += synapse0x34d3d90();
   input += synapse0x34d3dd0();
   input += synapse0x34d3e10();
   input += synapse0x34d3e50();
   input += synapse0x34d3e90();
   input += synapse0x34d3ed0();
   input += synapse0x34d3f10();
   input += synapse0x34d3f50();
   input += synapse0x34d3f90();
   input += synapse0x34d3fd0();
   input += synapse0x34d4010();
   input += synapse0x34d4050();
   input += synapse0x34d4090();
   input += synapse0x34d40d0();
   input += synapse0x34c1e80();
   input += synapse0x34c1ec0();
   input += synapse0x34d4220();
   input += synapse0x34d4260();
   input += synapse0x34d42a0();
   input += synapse0x34d42e0();
   input += synapse0x34d4320();
   input += synapse0x34d4360();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34d3af0() {
   double input = input0x34d3af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34d43a0() {
   double input = 1.68797;
   input += synapse0x34d46e0();
   input += synapse0x34d4720();
   input += synapse0x34d4760();
   input += synapse0x34d47a0();
   input += synapse0x34d47e0();
   input += synapse0x34d4820();
   input += synapse0x34d4860();
   input += synapse0x34d48a0();
   input += synapse0x34d48e0();
   input += synapse0x34d4920();
   input += synapse0x34d4960();
   input += synapse0x34d49a0();
   input += synapse0x34d49e0();
   input += synapse0x34d4a20();
   input += synapse0x34d4a60();
   input += synapse0x34d4aa0();
   input += synapse0x34d4530();
   input += synapse0x34d4570();
   input += synapse0x34d4bf0();
   input += synapse0x34d4c30();
   input += synapse0x34d4c70();
   input += synapse0x34d4cb0();
   input += synapse0x34d4cf0();
   input += synapse0x34d4d30();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34d43a0() {
   double input = input0x34d43a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34d4d70() {
   double input = -0.0627411;
   input += synapse0x34d50b0();
   input += synapse0x34d50f0();
   input += synapse0x34d5130();
   input += synapse0x34d5170();
   input += synapse0x34d51b0();
   input += synapse0x34d51f0();
   input += synapse0x34d5230();
   input += synapse0x34d5270();
   input += synapse0x34d52b0();
   input += synapse0x34d52f0();
   input += synapse0x34d5330();
   input += synapse0x34d5370();
   input += synapse0x34d53b0();
   input += synapse0x34d53f0();
   input += synapse0x34d5430();
   input += synapse0x34d5470();
   input += synapse0x34d4f00();
   input += synapse0x34d4f40();
   input += synapse0x34d55c0();
   input += synapse0x34d5600();
   input += synapse0x34d5640();
   input += synapse0x34d5680();
   input += synapse0x34d56c0();
   input += synapse0x34d5700();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34d4d70() {
   double input = input0x34d4d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34d5740() {
   double input = -0.913497;
   input += synapse0x34d5a80();
   input += synapse0x34d5ac0();
   input += synapse0x34d5b00();
   input += synapse0x34d5b40();
   input += synapse0x34d5b80();
   input += synapse0x34d5bc0();
   input += synapse0x34d5c00();
   input += synapse0x34d5c40();
   input += synapse0x34d5c80();
   input += synapse0x34d5cc0();
   input += synapse0x34d5d00();
   input += synapse0x34d5d40();
   input += synapse0x34d5d80();
   input += synapse0x34d5dc0();
   input += synapse0x34d5e00();
   input += synapse0x34d5e40();
   input += synapse0x34d58d0();
   input += synapse0x34d5910();
   input += synapse0x34d5f90();
   input += synapse0x34d5fd0();
   input += synapse0x34d6010();
   input += synapse0x34d6050();
   input += synapse0x34d6090();
   input += synapse0x34d60d0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34d5740() {
   double input = input0x34d5740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34dc940() {
   double input = 0.765799;
   input += synapse0x34b1520();
   input += synapse0x34b1560();
   input += synapse0x34b2a80();
   input += synapse0x34b2ac0();
   input += synapse0x34b4550();
   input += synapse0x34b4590();
   input += synapse0x34b5320();
   input += synapse0x34b5360();
   input += synapse0x34b5cf0();
   input += synapse0x34b5d30();
   input += synapse0x34b66c0();
   input += synapse0x34b6700();
   input += synapse0x34b71a0();
   input += synapse0x34b71e0();
   input += synapse0x34b7b70();
   input += synapse0x34b7bb0();
   input += synapse0x34b4c50();
   input += synapse0x34b4c90();
   input += synapse0x34b9720();
   input += synapse0x34b9760();
   input += synapse0x34ba0f0();
   input += synapse0x34ba130();
   input += synapse0x34baac0();
   input += synapse0x34bab00();
   input += synapse0x34bb490();
   input += synapse0x34bb4d0();
   input += synapse0x34ae520();
   input += synapse0x34ae560();
   input += synapse0x34bd580();
   input += synapse0x34bd5c0();
   input += synapse0x34bdf50();
   input += synapse0x34bdf90();
   input += synapse0x34be920();
   input += synapse0x34be960();
   input += synapse0x34bf2f0();
   input += synapse0x34bf330();
   input += synapse0x34bfcc0();
   input += synapse0x34bfd00();
   input += synapse0x34b8810();
   input += synapse0x34b8850();
   input += synapse0x34c20c0();
   input += synapse0x34c2100();
   input += synapse0x34c2a50();
   input += synapse0x34c2a90();
   input += synapse0x34c3420();
   input += synapse0x34c3460();
   input += synapse0x34c3df0();
   input += synapse0x34c3e30();
   input += synapse0x34c47c0();
   input += synapse0x34c4800();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34dc940() {
   double input = input0x34dc940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34dcce0() {
   double input = -1.37275;
   input += synapse0x34c6f00();
   input += synapse0x34c6f40();
   input += synapse0x34bc4c0();
   input += synapse0x34bc500();
   input += synapse0x34c9ae0();
   input += synapse0x34c9b20();
   input += synapse0x34ca4b0();
   input += synapse0x34ca4f0();
   input += synapse0x34cae80();
   input += synapse0x34caec0();
   input += synapse0x34cb850();
   input += synapse0x34cb890();
   input += synapse0x34cc220();
   input += synapse0x34cc260();
   input += synapse0x34ccbf0();
   input += synapse0x34ccc30();
   input += synapse0x34cd5c0();
   input += synapse0x34cd600();
   input += synapse0x34cdf90();
   input += synapse0x34cdfd0();
   input += synapse0x34ceb70();
   input += synapse0x34cebb0();
   input += synapse0x34cf540();
   input += synapse0x34cf580();
   input += synapse0x34c03c0();
   input += synapse0x34c0400();
   input += synapse0x34c0d90();
   input += synapse0x34c0dd0();
   input += synapse0x34c1760();
   input += synapse0x34c17a0();
   input += synapse0x34d3c80();
   input += synapse0x34d3cc0();
   input += synapse0x34d4650();
   input += synapse0x34d4690();
   input += synapse0x34d5020();
   input += synapse0x34d5060();
   input += synapse0x34d59f0();
   input += synapse0x34d5a30();
   input += synapse0x34b08f0();
   input += synapse0x34b0930();
   input += synapse0x34c5190();
   input += synapse0x34c51d0();
   input += synapse0x34d6110();
   input += synapse0x34d6150();
   input += synapse0x34d6190();
   input += synapse0x34d61d0();
   input += synapse0x34dd080();
   input += synapse0x34dd0c0();
   input += synapse0x34dd100();
   input += synapse0x34dd140();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34dcce0() {
   double input = input0x34dcce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34dd180() {
   double input = -4.67577;
   input += synapse0x34dd4c0();
   input += synapse0x34dd500();
   input += synapse0x34dd540();
   input += synapse0x34dd580();
   input += synapse0x34dd5c0();
   input += synapse0x34dd600();
   input += synapse0x34dd640();
   input += synapse0x34dd680();
   input += synapse0x34dd6c0();
   input += synapse0x34dd700();
   input += synapse0x34dd740();
   input += synapse0x34dd780();
   input += synapse0x34dd7c0();
   input += synapse0x34dd800();
   input += synapse0x34dd840();
   input += synapse0x34dd880();
   input += synapse0x34dd310();
   input += synapse0x34dd350();
   input += synapse0x34dd9d0();
   input += synapse0x34dda10();
   input += synapse0x34dda50();
   input += synapse0x34dda90();
   input += synapse0x34ddad0();
   input += synapse0x34ddb10();
   input += synapse0x34ddb50();
   input += synapse0x34ddb90();
   input += synapse0x34ddbd0();
   input += synapse0x34ddc10();
   input += synapse0x34ddc50();
   input += synapse0x34ddc90();
   input += synapse0x34ddcd0();
   input += synapse0x34ddd10();
   input += synapse0x34dd8c0();
   input += synapse0x34dd900();
   input += synapse0x34dd940();
   input += synapse0x34dd980();
   input += synapse0x34ddf60();
   input += synapse0x34ddfa0();
   input += synapse0x34ddfe0();
   input += synapse0x34de020();
   input += synapse0x34de060();
   input += synapse0x34de0a0();
   input += synapse0x34de0e0();
   input += synapse0x34de120();
   input += synapse0x34de160();
   input += synapse0x34de1a0();
   input += synapse0x34de1e0();
   input += synapse0x34de220();
   input += synapse0x34de260();
   input += synapse0x34de2a0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34dd180() {
   double input = input0x34dd180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34de2e0() {
   double input = -1.16236;
   input += synapse0x34de620();
   input += synapse0x34de660();
   input += synapse0x34de6a0();
   input += synapse0x34de6e0();
   input += synapse0x34de720();
   input += synapse0x34de760();
   input += synapse0x34de7a0();
   input += synapse0x34de7e0();
   input += synapse0x34de820();
   input += synapse0x34de860();
   input += synapse0x34de8a0();
   input += synapse0x34de8e0();
   input += synapse0x34de920();
   input += synapse0x34de960();
   input += synapse0x34de9a0();
   input += synapse0x34de9e0();
   input += synapse0x34de470();
   input += synapse0x34de4b0();
   input += synapse0x34deb30();
   input += synapse0x34deb70();
   input += synapse0x34debb0();
   input += synapse0x34debf0();
   input += synapse0x34dec30();
   input += synapse0x34dec70();
   input += synapse0x34decb0();
   input += synapse0x34decf0();
   input += synapse0x34ded30();
   input += synapse0x34ded70();
   input += synapse0x34dedb0();
   input += synapse0x34dedf0();
   input += synapse0x34dee30();
   input += synapse0x34dee70();
   input += synapse0x34dea20();
   input += synapse0x34dea60();
   input += synapse0x34deaa0();
   input += synapse0x34deae0();
   input += synapse0x34df0c0();
   input += synapse0x34df100();
   input += synapse0x34df140();
   input += synapse0x34df180();
   input += synapse0x34df1c0();
   input += synapse0x34df200();
   input += synapse0x34df240();
   input += synapse0x34df280();
   input += synapse0x34df2c0();
   input += synapse0x34df300();
   input += synapse0x34df340();
   input += synapse0x34df380();
   input += synapse0x34df3c0();
   input += synapse0x34df400();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34de2e0() {
   double input = input0x34de2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34df440() {
   double input = 1.89799;
   input += synapse0x34df780();
   input += synapse0x34df7c0();
   input += synapse0x34df800();
   input += synapse0x34df840();
   input += synapse0x34df880();
   input += synapse0x34df8c0();
   input += synapse0x34df900();
   input += synapse0x34df940();
   input += synapse0x34df980();
   input += synapse0x34df9c0();
   input += synapse0x34dfa00();
   input += synapse0x34dfa40();
   input += synapse0x34dfa80();
   input += synapse0x34dfac0();
   input += synapse0x34dfb00();
   input += synapse0x34dfb40();
   input += synapse0x34df5d0();
   input += synapse0x34df610();
   input += synapse0x34dfc90();
   input += synapse0x34dfcd0();
   input += synapse0x34dfd10();
   input += synapse0x34dfd50();
   input += synapse0x34dfd90();
   input += synapse0x34dfdd0();
   input += synapse0x34dfe10();
   input += synapse0x34dfe50();
   input += synapse0x34dfe90();
   input += synapse0x34dfed0();
   input += synapse0x34dff10();
   input += synapse0x34dff50();
   input += synapse0x34dff90();
   input += synapse0x34dffd0();
   input += synapse0x34dfb80();
   input += synapse0x34dfbc0();
   input += synapse0x34dfc00();
   input += synapse0x34dfc40();
   input += synapse0x34e0220();
   input += synapse0x34e0260();
   input += synapse0x34e02a0();
   input += synapse0x34e02e0();
   input += synapse0x34e0320();
   input += synapse0x34e0360();
   input += synapse0x34e03a0();
   input += synapse0x34e03e0();
   input += synapse0x34e0420();
   input += synapse0x34e0460();
   input += synapse0x34e04a0();
   input += synapse0x34e04e0();
   input += synapse0x34e0520();
   input += synapse0x34e0560();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34df440() {
   double input = input0x34df440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1m::input0x34e05a0() {
   double input = -4.75938;
   input += synapse0x34e07c0();
   input += synapse0x34e0800();
   input += synapse0x34e0840();
   input += synapse0x34e0880();
   input += synapse0x34e08c0();
   return input;
}

double NNfunction_nn_chi1_charge1m::neuron0x34e05a0() {
   double input = input0x34e05a0();
   return (input * 1)+0;
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0980() {
   return (neuron0x34ab610()*0.635482);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b09c0() {
   return (neuron0x34ab8c0()*-0.676713);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0a00() {
   return (neuron0x34abc00()*-0.199042);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0a40() {
   return (neuron0x34abf40()*0.839259);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0a80() {
   return (neuron0x34ac280()*-0.406897);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0ac0() {
   return (neuron0x34ac5c0()*-1.93358);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0b00() {
   return (neuron0x34ac900()*0.249011);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0b40() {
   return (neuron0x34acc40()*-1.29441);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0b80() {
   return (neuron0x34acf80()*0.803262);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0bc0() {
   return (neuron0x34ad2c0()*-0.748501);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0c00() {
   return (neuron0x34ad600()*0.804174);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0c40() {
   return (neuron0x34ad940()*-0.981778);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0c80() {
   return (neuron0x34adc80()*-0.490507);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0cc0() {
   return (neuron0x34adfc0()*-0.17135);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0d00() {
   return (neuron0x34ae300()*0.0906433);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0d40() {
   return (neuron0x34ae640()*1.54065);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b07d0() {
   return (neuron0x34ae980()*0.609812);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0810() {
   return (neuron0x34aeee0()*1.9873);
}

double NNfunction_nn_chi1_charge1m::synapse0x3267860() {
   return (neuron0x34af190()*0.695829);
}

double NNfunction_nn_chi1_charge1m::synapse0x32678a0() {
   return (neuron0x34af4d0()*-0.0316061);
}

double NNfunction_nn_chi1_charge1m::synapse0x257f8d0() {
   return (neuron0x34af810()*-0.682919);
}

double NNfunction_nn_chi1_charge1m::synapse0x257f910() {
   return (neuron0x34afb50()*-0.525333);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0e90() {
   return (neuron0x34afe90()*-0.0920609);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0ed0() {
   return (neuron0x34b01d0()*-0.0704586);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1250() {
   return (neuron0x34ab610()*0.197397);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1290() {
   return (neuron0x34ab8c0()*6.43711);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b12d0() {
   return (neuron0x34abc00()*-0.607242);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1310() {
   return (neuron0x34abf40()*-0.180297);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1350() {
   return (neuron0x34ac280()*-0.0721859);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1390() {
   return (neuron0x34ac5c0()*-0.144239);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b13d0() {
   return (neuron0x34ac900()*0.0624485);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1410() {
   return (neuron0x34acc40()*0.263623);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1450() {
   return (neuron0x34acf80()*0.076222);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0d80() {
   return (neuron0x34ad2c0()*0.0422615);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0dc0() {
   return (neuron0x34ad600()*0.229125);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0e00() {
   return (neuron0x34ad940()*-0.256874);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0e40() {
   return (neuron0x34adc80()*-0.284826);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b16a0() {
   return (neuron0x34adfc0()*-0.0156373);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b16e0() {
   return (neuron0x34ae300()*0.00397013);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1720() {
   return (neuron0x34ae640()*0.199979);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b10a0() {
   return (neuron0x34ae980()*0.0503124);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b10e0() {
   return (neuron0x34aeee0()*-0.355916);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1870() {
   return (neuron0x34af190()*0.285831);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b18b0() {
   return (neuron0x34af4d0()*-0.0146588);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b18f0() {
   return (neuron0x34af810()*0.226546);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1930() {
   return (neuron0x34afb50()*0.0218019);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1970() {
   return (neuron0x34afe90()*0.135391);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b19b0() {
   return (neuron0x34b01d0()*0.211567);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1d30() {
   return (neuron0x34ab610()*0.0432831);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1d70() {
   return (neuron0x34ab8c0()*8.80624);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1db0() {
   return (neuron0x34abc00()*-0.0515214);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1df0() {
   return (neuron0x34abf40()*-0.0224049);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1e30() {
   return (neuron0x34ac280()*-0.0219131);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1e70() {
   return (neuron0x34ac5c0()*0.0249212);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1eb0() {
   return (neuron0x34ac900()*-0.0105991);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1ef0() {
   return (neuron0x34acc40()*0.0213681);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1f30() {
   return (neuron0x34acf80()*0.0209681);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1f70() {
   return (neuron0x34ad2c0()*0.00178587);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1fb0() {
   return (neuron0x34ad600()*-0.0107785);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1ff0() {
   return (neuron0x34ad940()*-0.070263);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2030() {
   return (neuron0x34adc80()*-0.00334134);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2070() {
   return (neuron0x34adfc0()*-0.0244101);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b20b0() {
   return (neuron0x34ae300()*0.00623894);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b20f0() {
   return (neuron0x34ae640()*0.0148003);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1b80() {
   return (neuron0x34ae980()*0.0132666);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1bc0() {
   return (neuron0x34aeee0()*-0.0414456);
}

double NNfunction_nn_chi1_charge1m::synapse0x32756b0() {
   return (neuron0x34af190()*0.011177);
}

double NNfunction_nn_chi1_charge1m::synapse0x32756f0() {
   return (neuron0x34af4d0()*0.00934101);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4020() {
   return (neuron0x34af810()*-0.0198531);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4060() {
   return (neuron0x34afb50()*0.00350164);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ab350() {
   return (neuron0x34afe90()*-0.00349552);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ab390() {
   return (neuron0x34b01d0()*-0.542242);
}

double NNfunction_nn_chi1_charge1m::synapse0x3275fa0() {
   return (neuron0x34ab610()*-0.0253955);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b15b0() {
   return (neuron0x34ab8c0()*12.7606);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b15f0() {
   return (neuron0x34abc00()*0.357016);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1630() {
   return (neuron0x34abf40()*-0.0133549);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2240() {
   return (neuron0x34ac280()*0.00710508);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2280() {
   return (neuron0x34ac5c0()*0.0401252);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b22c0() {
   return (neuron0x34ac900()*-0.00570797);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2300() {
   return (neuron0x34acc40()*0.0289828);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2340() {
   return (neuron0x34acf80()*0.022222);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2380() {
   return (neuron0x34ad2c0()*0.00410736);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b23c0() {
   return (neuron0x34ad600()*-0.0417864);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2400() {
   return (neuron0x34ad940()*-0.0921489);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2440() {
   return (neuron0x34adc80()*-0.0125847);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2480() {
   return (neuron0x34adfc0()*-0.0562025);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b24c0() {
   return (neuron0x34ae300()*0.0617026);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2500() {
   return (neuron0x34ae640()*0.0189992);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ab3d0() {
   return (neuron0x34ae980()*0.0165571);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ab410() {
   return (neuron0x34aeee0()*0.00968732);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2650() {
   return (neuron0x34af190()*0.0469689);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2690() {
   return (neuron0x34af4d0()*-0.0330289);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b26d0() {
   return (neuron0x34af810()*-0.0227286);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2710() {
   return (neuron0x34afb50()*0.0101671);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2750() {
   return (neuron0x34afe90()*-0.00456647);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2790() {
   return (neuron0x34b01d0()*0.22277);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2b10() {
   return (neuron0x34ab610()*-0.047722);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2b50() {
   return (neuron0x34ab8c0()*0.013615);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2b90() {
   return (neuron0x34abc00()*0.405376);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2bd0() {
   return (neuron0x34abf40()*-0.00509062);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2c10() {
   return (neuron0x34ac280()*0.0230241);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2c50() {
   return (neuron0x34ac5c0()*0.0125195);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2c90() {
   return (neuron0x34ac900()*-0.000429209);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2cd0() {
   return (neuron0x34acc40()*0.0270652);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2d10() {
   return (neuron0x34acf80()*0.0189484);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2d50() {
   return (neuron0x34ad2c0()*-0.0114122);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2d90() {
   return (neuron0x34ad600()*-0.0139831);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2dd0() {
   return (neuron0x34ad940()*-0.0294854);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2e10() {
   return (neuron0x34adc80()*-0.012153);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2e50() {
   return (neuron0x34adfc0()*-0.043256);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2e90() {
   return (neuron0x34ae300()*0.00820162);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2ed0() {
   return (neuron0x34ae640()*-0.00420836);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b3020() {
   return (neuron0x34ae980()*0.00596481);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2960() {
   return (neuron0x34aeee0()*0.0128318);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b29a0() {
   return (neuron0x34af190()*0.0229824);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4160() {
   return (neuron0x34af4d0()*-0.0218468);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b41a0() {
   return (neuron0x34af810()*0.00756938);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b41e0() {
   return (neuron0x34afb50()*-0.0100477);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4220() {
   return (neuron0x34afe90()*-0.0137034);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4260() {
   return (neuron0x34b01d0()*-6.1591);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b45e0() {
   return (neuron0x34ab610()*2.99226);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4620() {
   return (neuron0x34ab8c0()*0.0312086);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4660() {
   return (neuron0x34abc00()*3.73321);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b46a0() {
   return (neuron0x34abf40()*-0.0158629);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b46e0() {
   return (neuron0x34ac280()*0.0158342);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4720() {
   return (neuron0x34ac5c0()*0.0169245);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4760() {
   return (neuron0x34ac900()*0.0290631);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b47a0() {
   return (neuron0x34acc40()*0.0634334);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b47e0() {
   return (neuron0x34acf80()*0.149156);
}

double NNfunction_nn_chi1_charge1m::synapse0x3275a00() {
   return (neuron0x34ad2c0()*-0.051489);
}

double NNfunction_nn_chi1_charge1m::synapse0x3275a40() {
   return (neuron0x34ad600()*0.033958);
}

double NNfunction_nn_chi1_charge1m::synapse0x3275a80() {
   return (neuron0x34ad940()*0.172401);
}

double NNfunction_nn_chi1_charge1m::synapse0x3275ac0() {
   return (neuron0x34adc80()*0.115251);
}

double NNfunction_nn_chi1_charge1m::synapse0x3275b00() {
   return (neuron0x34adfc0()*0.154205);
}

double NNfunction_nn_chi1_charge1m::synapse0x3275b40() {
   return (neuron0x34ae300()*-0.0691869);
}

double NNfunction_nn_chi1_charge1m::synapse0x3275b80() {
   return (neuron0x34ae640()*-0.00774394);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4430() {
   return (neuron0x34ae980()*0.0489726);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4470() {
   return (neuron0x34aeee0()*0.112832);
}

double NNfunction_nn_chi1_charge1m::synapse0x3275cd0() {
   return (neuron0x34af190()*-0.0556583);
}

double NNfunction_nn_chi1_charge1m::synapse0x3275d10() {
   return (neuron0x34af4d0()*0.0388495);
}

double NNfunction_nn_chi1_charge1m::synapse0x3275d50() {
   return (neuron0x34af810()*0.0132245);
}

double NNfunction_nn_chi1_charge1m::synapse0x3275d90() {
   return (neuron0x34afb50()*0.0117067);
}

double NNfunction_nn_chi1_charge1m::synapse0x3275dd0() {
   return (neuron0x34afe90()*0.0895025);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5030() {
   return (neuron0x34b01d0()*0.745832);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b53b0() {
   return (neuron0x34ab610()*-0.655225);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b53f0() {
   return (neuron0x34ab8c0()*3.21158);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5430() {
   return (neuron0x34abc00()*0.90226);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5470() {
   return (neuron0x34abf40()*-2.07026);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b54b0() {
   return (neuron0x34ac280()*0.197387);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b54f0() {
   return (neuron0x34ac5c0()*1.70207);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5530() {
   return (neuron0x34ac900()*0.879031);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5570() {
   return (neuron0x34acc40()*0.13939);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b55b0() {
   return (neuron0x34acf80()*-0.474077);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b55f0() {
   return (neuron0x34ad2c0()*1.76948);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5630() {
   return (neuron0x34ad600()*-0.905365);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5670() {
   return (neuron0x34ad940()*0.600997);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b56b0() {
   return (neuron0x34adc80()*0.834211);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b56f0() {
   return (neuron0x34adfc0()*1.20202);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5730() {
   return (neuron0x34ae300()*-2.11501);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5770() {
   return (neuron0x34ae640()*0.0982214);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5200() {
   return (neuron0x34ae980()*1.24137);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5240() {
   return (neuron0x34aeee0()*-0.889394);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b58c0() {
   return (neuron0x34af190()*-3.59987);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5900() {
   return (neuron0x34af4d0()*-1.1733);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5940() {
   return (neuron0x34af810()*-0.0366294);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5980() {
   return (neuron0x34afb50()*-1.00859);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b59c0() {
   return (neuron0x34afe90()*0.966854);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5a00() {
   return (neuron0x34b01d0()*-1.04943);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5d80() {
   return (neuron0x34ab610()*-0.0428106);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5dc0() {
   return (neuron0x34ab8c0()*-0.00214749);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5e00() {
   return (neuron0x34abc00()*0.00623309);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5e40() {
   return (neuron0x34abf40()*-0.000191032);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5e80() {
   return (neuron0x34ac280()*0.0122574);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5ec0() {
   return (neuron0x34ac5c0()*0.00504229);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5f00() {
   return (neuron0x34ac900()*-0.000341179);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5f40() {
   return (neuron0x34acc40()*0.00217544);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5f80() {
   return (neuron0x34acf80()*0.00230002);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5fc0() {
   return (neuron0x34ad2c0()*-0.000893756);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6000() {
   return (neuron0x34ad600()*-0.00151969);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6040() {
   return (neuron0x34ad940()*-0.000793342);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6080() {
   return (neuron0x34adc80()*0.00642474);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b60c0() {
   return (neuron0x34adfc0()*0.00145397);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6100() {
   return (neuron0x34ae300()*0.000635875);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6140() {
   return (neuron0x34ae640()*-0.000527217);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5bd0() {
   return (neuron0x34ae980()*0.00405047);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5c10() {
   return (neuron0x34aeee0()*-0.000624273);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6290() {
   return (neuron0x34af190()*0.00194363);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b62d0() {
   return (neuron0x34af4d0()*-0.00356908);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6310() {
   return (neuron0x34af810()*0.0023517);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6350() {
   return (neuron0x34afb50()*0.00293521);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6390() {
   return (neuron0x34afe90()*0.00149369);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b63d0() {
   return (neuron0x34b01d0()*-18.224);
}

double NNfunction_nn_chi1_charge1m::synapse0x34aedd0() {
   return (neuron0x34ab610()*-5.62294);
}

double NNfunction_nn_chi1_charge1m::synapse0x34aee10() {
   return (neuron0x34ab8c0()*0.236914);
}

double NNfunction_nn_chi1_charge1m::synapse0x34aee50() {
   return (neuron0x34abc00()*5.42184);
}

double NNfunction_nn_chi1_charge1m::synapse0x34aee90() {
   return (neuron0x34abf40()*-2.79975);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6960() {
   return (neuron0x34ac280()*3.34579);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b69a0() {
   return (neuron0x34ac5c0()*3.01942);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b69e0() {
   return (neuron0x34ac900()*0.421031);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6a20() {
   return (neuron0x34acc40()*-1.17729);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6a60() {
   return (neuron0x34acf80()*0.670752);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6aa0() {
   return (neuron0x34ad2c0()*0.811798);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6ae0() {
   return (neuron0x34ad600()*-3.13602);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6b20() {
   return (neuron0x34ad940()*-1.27603);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6b60() {
   return (neuron0x34adc80()*-3.38187);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6ba0() {
   return (neuron0x34adfc0()*-0.238299);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6be0() {
   return (neuron0x34ae300()*-1.02036);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6c20() {
   return (neuron0x34ae640()*0.970254);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b65a0() {
   return (neuron0x34ae980()*-1.02741);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b65e0() {
   return (neuron0x34aeee0()*-2.09339);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6d70() {
   return (neuron0x34af190()*1.88977);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6db0() {
   return (neuron0x34af4d0()*2.10098);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6df0() {
   return (neuron0x34af810()*2.42401);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6e30() {
   return (neuron0x34afb50()*1.48927);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6e70() {
   return (neuron0x34afe90()*-2.93441);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6eb0() {
   return (neuron0x34b01d0()*-4.96155);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7230() {
   return (neuron0x34ab610()*0.0364319);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7270() {
   return (neuron0x34ab8c0()*0.014516);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b72b0() {
   return (neuron0x34abc00()*-5.12913);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b72f0() {
   return (neuron0x34abf40()*0.0465306);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7330() {
   return (neuron0x34ac280()*-0.0538467);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7370() {
   return (neuron0x34ac5c0()*-0.0483254);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b73b0() {
   return (neuron0x34ac900()*-0.0183665);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b73f0() {
   return (neuron0x34acc40()*-0.00028467);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7430() {
   return (neuron0x34acf80()*-0.000354054);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7470() {
   return (neuron0x34ad2c0()*-0.000389797);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b74b0() {
   return (neuron0x34ad600()*-0.00842673);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b74f0() {
   return (neuron0x34ad940()*0.577951);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7530() {
   return (neuron0x34adc80()*0.0210228);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7570() {
   return (neuron0x34adfc0()*0.0125889);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b75b0() {
   return (neuron0x34ae300()*-0.00962657);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b75f0() {
   return (neuron0x34ae640()*-0.0232966);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7080() {
   return (neuron0x34ae980()*-0.0336691);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b70c0() {
   return (neuron0x34aeee0()*-0.01688);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7740() {
   return (neuron0x34af190()*-0.015937);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7780() {
   return (neuron0x34af4d0()*0.00462056);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b77c0() {
   return (neuron0x34af810()*-0.00533541);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7800() {
   return (neuron0x34afb50()*-0.0382097);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7840() {
   return (neuron0x34afe90()*0.046799);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7880() {
   return (neuron0x34b01d0()*-0.0167064);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7c00() {
   return (neuron0x34ab610()*7.42171);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7c40() {
   return (neuron0x34ab8c0()*0.241851);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7c80() {
   return (neuron0x34abc00()*-2.28511);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7cc0() {
   return (neuron0x34abf40()*5.14129);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7d00() {
   return (neuron0x34ac280()*-1.8694);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7d40() {
   return (neuron0x34ac5c0()*-0.289131);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7d80() {
   return (neuron0x34ac900()*-0.265578);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7dc0() {
   return (neuron0x34acc40()*0.138449);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7e00() {
   return (neuron0x34acf80()*-0.15167);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7e40() {
   return (neuron0x34ad2c0()*-0.763015);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7e80() {
   return (neuron0x34ad600()*-0.397002);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7ec0() {
   return (neuron0x34ad940()*-1.46272);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7f00() {
   return (neuron0x34adc80()*1.9335);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7f40() {
   return (neuron0x34adfc0()*1.99574);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7f80() {
   return (neuron0x34ae300()*0.594715);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7fc0() {
   return (neuron0x34ae640()*-0.157525);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7a50() {
   return (neuron0x34ae980()*-0.777071);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7a90() {
   return (neuron0x34aeee0()*0.306158);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4820() {
   return (neuron0x34af190()*-0.273161);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4860() {
   return (neuron0x34af4d0()*1.0699);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b48a0() {
   return (neuron0x34af810()*-2.38428);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b48e0() {
   return (neuron0x34afb50()*-0.213803);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4920() {
   return (neuron0x34afe90()*1.77012);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4960() {
   return (neuron0x34b01d0()*5.59223);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4ce0() {
   return (neuron0x34ab610()*1.52328);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4d20() {
   return (neuron0x34ab8c0()*-0.0961066);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4d60() {
   return (neuron0x34abc00()*1.04504);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4da0() {
   return (neuron0x34abf40()*1.65265);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4de0() {
   return (neuron0x34ac280()*-0.149752);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4e20() {
   return (neuron0x34ac5c0()*0.957812);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4e60() {
   return (neuron0x34ac900()*-0.128524);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4ea0() {
   return (neuron0x34acc40()*-0.145682);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4ee0() {
   return (neuron0x34acf80()*-0.593717);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4f20() {
   return (neuron0x34ad2c0()*0.828562);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4f60() {
   return (neuron0x34ad600()*-0.263567);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4fa0() {
   return (neuron0x34ad940()*-0.35355);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4fe0() {
   return (neuron0x34adc80()*-1.15292);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9120() {
   return (neuron0x34adfc0()*1.9649);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9160() {
   return (neuron0x34ae300()*0.0405454);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b91a0() {
   return (neuron0x34ae640()*-1.99153);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4b30() {
   return (neuron0x34ae980()*0.824855);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4b70() {
   return (neuron0x34aeee0()*-0.212729);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b92f0() {
   return (neuron0x34af190()*-1.04366);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9330() {
   return (neuron0x34af4d0()*0.657224);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9370() {
   return (neuron0x34af810()*1.31746);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b93b0() {
   return (neuron0x34afb50()*-0.126725);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b93f0() {
   return (neuron0x34afe90()*1.22485);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9430() {
   return (neuron0x34b01d0()*0.122183);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b97b0() {
   return (neuron0x34ab610()*-0.0158643);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b97f0() {
   return (neuron0x34ab8c0()*-0.00581095);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9830() {
   return (neuron0x34abc00()*5.28762);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9870() {
   return (neuron0x34abf40()*0.0220024);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b98b0() {
   return (neuron0x34ac280()*0.0949904);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b98f0() {
   return (neuron0x34ac5c0()*0.0191412);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9930() {
   return (neuron0x34ac900()*-0.0343629);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9970() {
   return (neuron0x34acc40()*0.0155037);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b99b0() {
   return (neuron0x34acf80()*0.0614673);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b99f0() {
   return (neuron0x34ad2c0()*-0.0257393);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9a30() {
   return (neuron0x34ad600()*0.0369521);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9a70() {
   return (neuron0x34ad940()*-0.0861583);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9ab0() {
   return (neuron0x34adc80()*0.0564054);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9af0() {
   return (neuron0x34adfc0()*0.00113829);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9b30() {
   return (neuron0x34ae300()*-0.0325973);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9b70() {
   return (neuron0x34ae640()*0.0211743);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9600() {
   return (neuron0x34ae980()*0.0463229);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9640() {
   return (neuron0x34aeee0()*-0.0609582);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9cc0() {
   return (neuron0x34af190()*0.0378707);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9d00() {
   return (neuron0x34af4d0()*0.00643374);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9d40() {
   return (neuron0x34af810()*0.061719);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9d80() {
   return (neuron0x34afb50()*-0.00508563);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9dc0() {
   return (neuron0x34afe90()*-0.0121021);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9e00() {
   return (neuron0x34b01d0()*6.31099);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba180() {
   return (neuron0x34ab610()*0.309337);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba1c0() {
   return (neuron0x34ab8c0()*-0.293519);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba200() {
   return (neuron0x34abc00()*-2.88235);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba240() {
   return (neuron0x34abf40()*0.0327193);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba280() {
   return (neuron0x34ac280()*-0.437897);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba2c0() {
   return (neuron0x34ac5c0()*-0.758662);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba300() {
   return (neuron0x34ac900()*-1.77689);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba340() {
   return (neuron0x34acc40()*-1.03165);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba380() {
   return (neuron0x34acf80()*-0.274159);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba3c0() {
   return (neuron0x34ad2c0()*0.458112);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba400() {
   return (neuron0x34ad600()*0.983351);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba440() {
   return (neuron0x34ad940()*1.43403);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba480() {
   return (neuron0x34adc80()*-0.012151);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba4c0() {
   return (neuron0x34adfc0()*0.671455);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba500() {
   return (neuron0x34ae300()*-0.48408);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba540() {
   return (neuron0x34ae640()*0.608479);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9fd0() {
   return (neuron0x34ae980()*-0.270958);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba010() {
   return (neuron0x34aeee0()*-0.0445879);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba690() {
   return (neuron0x34af190()*0.341895);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba6d0() {
   return (neuron0x34af4d0()*0.351812);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba710() {
   return (neuron0x34af810()*-0.0478389);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba750() {
   return (neuron0x34afb50()*1.38763);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba790() {
   return (neuron0x34afe90()*-1.08213);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba7d0() {
   return (neuron0x34b01d0()*-0.778964);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bab50() {
   return (neuron0x34ab610()*0.0498941);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bab90() {
   return (neuron0x34ab8c0()*-20.0791);
}

double NNfunction_nn_chi1_charge1m::synapse0x34babd0() {
   return (neuron0x34abc00()*0.871239);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bac10() {
   return (neuron0x34abf40()*0.0861148);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bac50() {
   return (neuron0x34ac280()*-0.0284477);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bac90() {
   return (neuron0x34ac5c0()*0.0144702);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bacd0() {
   return (neuron0x34ac900()*0.0362154);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bad10() {
   return (neuron0x34acc40()*-0.0756611);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bad50() {
   return (neuron0x34acf80()*0.00418672);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bad90() {
   return (neuron0x34ad2c0()*-0.00830723);
}

double NNfunction_nn_chi1_charge1m::synapse0x34badd0() {
   return (neuron0x34ad600()*0.0449226);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bae10() {
   return (neuron0x34ad940()*-0.167948);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bae50() {
   return (neuron0x34adc80()*-0.0772022);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bae90() {
   return (neuron0x34adfc0()*0.0149537);
}

double NNfunction_nn_chi1_charge1m::synapse0x34baed0() {
   return (neuron0x34ae300()*-0.0365355);
}

double NNfunction_nn_chi1_charge1m::synapse0x34baf10() {
   return (neuron0x34ae640()*-0.0419272);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba9a0() {
   return (neuron0x34ae980()*-0.108827);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba9e0() {
   return (neuron0x34aeee0()*-0.0216832);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bb060() {
   return (neuron0x34af190()*-0.01431);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bb0a0() {
   return (neuron0x34af4d0()*0.0692143);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bb0e0() {
   return (neuron0x34af810()*0.0367477);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bb120() {
   return (neuron0x34afb50()*-0.0406099);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bb160() {
   return (neuron0x34afe90()*0.0290181);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bb1a0() {
   return (neuron0x34b01d0()*0.0593488);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bb520() {
   return (neuron0x34ab610()*1.63417);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ab7a0() {
   return (neuron0x34ab8c0()*-0.504255);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ab7e0() {
   return (neuron0x34abc00()*-2.60512);
}

double NNfunction_nn_chi1_charge1m::synapse0x34abae0() {
   return (neuron0x34abf40()*-0.503657);
}

double NNfunction_nn_chi1_charge1m::synapse0x34abb20() {
   return (neuron0x34ac280()*0.830245);
}

double NNfunction_nn_chi1_charge1m::synapse0x34abe20() {
   return (neuron0x34ac5c0()*-0.793321);
}

double NNfunction_nn_chi1_charge1m::synapse0x34abe60() {
   return (neuron0x34ac900()*1.10237);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ac160() {
   return (neuron0x34acc40()*-0.204452);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ac1a0() {
   return (neuron0x34acf80()*0.701082);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ac4a0() {
   return (neuron0x34ad2c0()*0.365323);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ac4e0() {
   return (neuron0x34ad600()*0.136998);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ac7e0() {
   return (neuron0x34ad940()*-0.683034);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ac820() {
   return (neuron0x34adc80()*0.368764);
}

double NNfunction_nn_chi1_charge1m::synapse0x34acb20() {
   return (neuron0x34adfc0()*-0.779091);
}

double NNfunction_nn_chi1_charge1m::synapse0x34acb60() {
   return (neuron0x34ae300()*-0.716537);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ace60() {
   return (neuron0x34ae640()*-1.32184);
}

double NNfunction_nn_chi1_charge1m::synapse0x34acea0() {
   return (neuron0x34ae980()*0.224374);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ad1a0() {
   return (neuron0x34aeee0()*0.0571495);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ad1e0() {
   return (neuron0x34af190()*-0.222481);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ad4e0() {
   return (neuron0x34af4d0()*0.410964);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ad520() {
   return (neuron0x34af810()*0.158345);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ad820() {
   return (neuron0x34afb50()*-0.704111);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ad860() {
   return (neuron0x34afe90()*0.103587);
}

double NNfunction_nn_chi1_charge1m::synapse0x34adb60() {
   return (neuron0x34b01d0()*3.06327);
}

double NNfunction_nn_chi1_charge1m::synapse0x34adba0() {
   return (neuron0x34ab610()*-0.665267);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ae860() {
   return (neuron0x34ab8c0()*0.176358);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ae8a0() {
   return (neuron0x34abc00()*3.62105);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bb370() {
   return (neuron0x34abf40()*0.623929);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bb3b0() {
   return (neuron0x34ac280()*0.150012);
}

double NNfunction_nn_chi1_charge1m::synapse0x34aeba0() {
   return (neuron0x34ac5c0()*1.6934);
}

double NNfunction_nn_chi1_charge1m::synapse0x34aebe0() {
   return (neuron0x34ac900()*-0.202228);
}

double NNfunction_nn_chi1_charge1m::synapse0x34af070() {
   return (neuron0x34acc40()*-0.124771);
}

double NNfunction_nn_chi1_charge1m::synapse0x34af0b0() {
   return (neuron0x34acf80()*-0.91651);
}

double NNfunction_nn_chi1_charge1m::synapse0x34af3b0() {
   return (neuron0x34ad2c0()*-1.21009);
}

double NNfunction_nn_chi1_charge1m::synapse0x34af3f0() {
   return (neuron0x34ad600()*-0.0169658);
}

double NNfunction_nn_chi1_charge1m::synapse0x34af6f0() {
   return (neuron0x34ad940()*0.962511);
}

double NNfunction_nn_chi1_charge1m::synapse0x34af730() {
   return (neuron0x34adc80()*0.247589);
}

double NNfunction_nn_chi1_charge1m::synapse0x34afa30() {
   return (neuron0x34adfc0()*-1.14139);
}

double NNfunction_nn_chi1_charge1m::synapse0x34afa70() {
   return (neuron0x34ae300()*1.55605);
}

double NNfunction_nn_chi1_charge1m::synapse0x34afd70() {
   return (neuron0x34ae640()*-0.303062);
}

double NNfunction_nn_chi1_charge1m::synapse0x34afdb0() {
   return (neuron0x34ae980()*0.36384);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b00b0() {
   return (neuron0x34aeee0()*-0.648991);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b00f0() {
   return (neuron0x34af190()*-1.17525);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b03f0() {
   return (neuron0x34af4d0()*-2.51711);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0430() {
   return (neuron0x34af810()*-0.063208);
}

double NNfunction_nn_chi1_charge1m::synapse0x34adea0() {
   return (neuron0x34afb50()*0.304964);
}

double NNfunction_nn_chi1_charge1m::synapse0x34adee0() {
   return (neuron0x34afe90()*-2.23458);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd290() {
   return (neuron0x34b01d0()*-1.48585);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd610() {
   return (neuron0x34ab610()*-0.636219);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd650() {
   return (neuron0x34ab8c0()*0.126101);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd690() {
   return (neuron0x34abc00()*2.46402);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd6d0() {
   return (neuron0x34abf40()*-0.105184);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd710() {
   return (neuron0x34ac280()*0.159825);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd750() {
   return (neuron0x34ac5c0()*1.66761);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd790() {
   return (neuron0x34ac900()*-0.354643);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd7d0() {
   return (neuron0x34acc40()*-0.142352);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd810() {
   return (neuron0x34acf80()*-0.403505);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd850() {
   return (neuron0x34ad2c0()*0.563449);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd890() {
   return (neuron0x34ad600()*-0.120059);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd8d0() {
   return (neuron0x34ad940()*-1.93884);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd910() {
   return (neuron0x34adc80()*0.410566);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd950() {
   return (neuron0x34adfc0()*0.779279);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd990() {
   return (neuron0x34ae300()*0.503737);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd9d0() {
   return (neuron0x34ae640()*0.52334);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd460() {
   return (neuron0x34ae980()*0.437055);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd4a0() {
   return (neuron0x34aeee0()*-0.853593);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bdb20() {
   return (neuron0x34af190()*-0.623693);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bdb60() {
   return (neuron0x34af4d0()*-0.766337);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bdba0() {
   return (neuron0x34af810()*0.0938187);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bdbe0() {
   return (neuron0x34afb50()*1.43183);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bdc20() {
   return (neuron0x34afe90()*0.23542);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bdc60() {
   return (neuron0x34b01d0()*-2.19402);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bdfe0() {
   return (neuron0x34ab610()*2.55234);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be020() {
   return (neuron0x34ab8c0()*0.0109865);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be060() {
   return (neuron0x34abc00()*3.06172);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be0a0() {
   return (neuron0x34abf40()*-0.019897);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be0e0() {
   return (neuron0x34ac280()*0.0231524);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be120() {
   return (neuron0x34ac5c0()*0.0135012);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be160() {
   return (neuron0x34ac900()*0.0131973);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be1a0() {
   return (neuron0x34acc40()*0.0404039);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be1e0() {
   return (neuron0x34acf80()*0.0763845);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be220() {
   return (neuron0x34ad2c0()*-0.0260921);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be260() {
   return (neuron0x34ad600()*0.00802226);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be2a0() {
   return (neuron0x34ad940()*0.0513746);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be2e0() {
   return (neuron0x34adc80()*0.0706805);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be320() {
   return (neuron0x34adfc0()*0.0767425);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be360() {
   return (neuron0x34ae300()*-0.0196016);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be3a0() {
   return (neuron0x34ae640()*-0.0177712);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bde30() {
   return (neuron0x34ae980()*0.0126993);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bde70() {
   return (neuron0x34aeee0()*0.0511879);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be4f0() {
   return (neuron0x34af190()*-0.0276564);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be530() {
   return (neuron0x34af4d0()*0.0269873);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be570() {
   return (neuron0x34af810()*-0.00471293);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be5b0() {
   return (neuron0x34afb50()*0.0109303);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be5f0() {
   return (neuron0x34afe90()*0.0488995);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be630() {
   return (neuron0x34b01d0()*0.641885);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be9b0() {
   return (neuron0x34ab610()*0.657991);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be9f0() {
   return (neuron0x34ab8c0()*-0.152149);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bea30() {
   return (neuron0x34abc00()*-1.08073);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bea70() {
   return (neuron0x34abf40()*-2.0365);
}

double NNfunction_nn_chi1_charge1m::synapse0x34beab0() {
   return (neuron0x34ac280()*1.55535);
}

double NNfunction_nn_chi1_charge1m::synapse0x34beaf0() {
   return (neuron0x34ac5c0()*2.07616);
}

double NNfunction_nn_chi1_charge1m::synapse0x34beb30() {
   return (neuron0x34ac900()*0.901071);
}

double NNfunction_nn_chi1_charge1m::synapse0x34beb70() {
   return (neuron0x34acc40()*0.214381);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bebb0() {
   return (neuron0x34acf80()*-0.99029);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bebf0() {
   return (neuron0x34ad2c0()*0.186322);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bec30() {
   return (neuron0x34ad600()*1.36839);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bec70() {
   return (neuron0x34ad940()*1.02976);
}

double NNfunction_nn_chi1_charge1m::synapse0x34becb0() {
   return (neuron0x34adc80()*-1.34658);
}

double NNfunction_nn_chi1_charge1m::synapse0x34becf0() {
   return (neuron0x34adfc0()*-1.02997);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bed30() {
   return (neuron0x34ae300()*-2.00398);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bed70() {
   return (neuron0x34ae640()*0.32414);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be800() {
   return (neuron0x34ae980()*-0.267321);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be840() {
   return (neuron0x34aeee0()*0.083318);
}

double NNfunction_nn_chi1_charge1m::synapse0x34beec0() {
   return (neuron0x34af190()*-0.169915);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bef00() {
   return (neuron0x34af4d0()*-1.76787);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bef40() {
   return (neuron0x34af810()*0.511972);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bef80() {
   return (neuron0x34afb50()*-0.772252);
}

double NNfunction_nn_chi1_charge1m::synapse0x34befc0() {
   return (neuron0x34afe90()*-0.286397);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf000() {
   return (neuron0x34b01d0()*-0.953979);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf380() {
   return (neuron0x34ab610()*0.0301946);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf3c0() {
   return (neuron0x34ab8c0()*0.00917459);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf400() {
   return (neuron0x34abc00()*0.246325);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf440() {
   return (neuron0x34abf40()*0.00155348);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf480() {
   return (neuron0x34ac280()*-0.0056691);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf4c0() {
   return (neuron0x34ac5c0()*-0.00469302);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf500() {
   return (neuron0x34ac900()*0.0130325);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf540() {
   return (neuron0x34acc40()*0.00247914);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf580() {
   return (neuron0x34acf80()*-0.0104147);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf5c0() {
   return (neuron0x34ad2c0()*-0.0125848);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf600() {
   return (neuron0x34ad600()*-0.00210045);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf640() {
   return (neuron0x34ad940()*-0.00186449);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf680() {
   return (neuron0x34adc80()*-0.00764966);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf6c0() {
   return (neuron0x34adfc0()*0.0152696);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf700() {
   return (neuron0x34ae300()*-0.00249046);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf740() {
   return (neuron0x34ae640()*0.00316765);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf1d0() {
   return (neuron0x34ae980()*0.000481463);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf210() {
   return (neuron0x34aeee0()*-0.0245769);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf890() {
   return (neuron0x34af190()*0.00491703);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf8d0() {
   return (neuron0x34af4d0()*0.00673506);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf910() {
   return (neuron0x34af810()*-0.00315828);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf950() {
   return (neuron0x34afb50()*0.00357838);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf990() {
   return (neuron0x34afe90()*-0.00166127);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf9d0() {
   return (neuron0x34b01d0()*-1.09797);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bfd50() {
   return (neuron0x34ab610()*0.505646);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bfd90() {
   return (neuron0x34ab8c0()*0.181898);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bfdd0() {
   return (neuron0x34abc00()*-1.94712);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bfe10() {
   return (neuron0x34abf40()*0.71638);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bfe50() {
   return (neuron0x34ac280()*-1.13989);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bfe90() {
   return (neuron0x34ac5c0()*-1.28362);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bfed0() {
   return (neuron0x34ac900()*-1.09473);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bff10() {
   return (neuron0x34acc40()*-0.134842);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bff50() {
   return (neuron0x34acf80()*0.320765);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8110() {
   return (neuron0x34ad2c0()*-0.994254);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8150() {
   return (neuron0x34ad600()*-0.41009);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8190() {
   return (neuron0x34ad940()*-0.0632217);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b81d0() {
   return (neuron0x34adc80()*2.2504);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8210() {
   return (neuron0x34adfc0()*0.611042);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8250() {
   return (neuron0x34ae300()*0.159382);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8290() {
   return (neuron0x34ae640()*1.0171);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bfba0() {
   return (neuron0x34ae980()*0.581631);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bfbe0() {
   return (neuron0x34aeee0()*1.09491);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b83e0() {
   return (neuron0x34af190()*-0.0257304);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8420() {
   return (neuron0x34af4d0()*-0.188134);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8460() {
   return (neuron0x34af810()*-1.61569);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b84a0() {
   return (neuron0x34afb50()*-1.18221);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b84e0() {
   return (neuron0x34afe90()*0.810617);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8520() {
   return (neuron0x34b01d0()*1.25735);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b88a0() {
   return (neuron0x34ab610()*0.0609154);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b88e0() {
   return (neuron0x34ab8c0()*-0.0247101);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8920() {
   return (neuron0x34abc00()*-0.599798);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8960() {
   return (neuron0x34abf40()*-0.00706422);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b89a0() {
   return (neuron0x34ac280()*0.00178631);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b89e0() {
   return (neuron0x34ac5c0()*-0.00408466);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8a20() {
   return (neuron0x34ac900()*-0.0192421);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8a60() {
   return (neuron0x34acc40()*-0.0309611);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8aa0() {
   return (neuron0x34acf80()*-0.0684778);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8ae0() {
   return (neuron0x34ad2c0()*-0.00436232);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8b20() {
   return (neuron0x34ad600()*0.0191781);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8b60() {
   return (neuron0x34ad940()*0.0100736);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8ba0() {
   return (neuron0x34adc80()*0.0264073);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8be0() {
   return (neuron0x34adfc0()*0.0643321);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8c20() {
   return (neuron0x34ae300()*0.0136063);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8c60() {
   return (neuron0x34ae640()*-0.0116486);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b86f0() {
   return (neuron0x34ae980()*-0.0369997);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8730() {
   return (neuron0x34aeee0()*-0.0274362);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8db0() {
   return (neuron0x34af190()*-0.0542242);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8df0() {
   return (neuron0x34af4d0()*0.0331275);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8e30() {
   return (neuron0x34af810()*-0.0130147);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8e70() {
   return (neuron0x34afb50()*0.0115904);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8eb0() {
   return (neuron0x34afe90()*0.0130646);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8ef0() {
   return (neuron0x34b01d0()*0.0180753);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b90c0() {
   return (neuron0x34ab610()*0.631871);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2150() {
   return (neuron0x34ab8c0()*-2.80744);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2190() {
   return (neuron0x34abc00()*3.11169);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c21d0() {
   return (neuron0x34abf40()*0.0548786);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2210() {
   return (neuron0x34ac280()*0.732587);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2250() {
   return (neuron0x34ac5c0()*0.691977);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2290() {
   return (neuron0x34ac900()*-0.314191);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c22d0() {
   return (neuron0x34acc40()*0.899452);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2310() {
   return (neuron0x34acf80()*-0.170575);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2350() {
   return (neuron0x34ad2c0()*-1.04426);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2390() {
   return (neuron0x34ad600()*-0.485651);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c23d0() {
   return (neuron0x34ad940()*0.505634);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2410() {
   return (neuron0x34adc80()*0.556682);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2450() {
   return (neuron0x34adfc0()*-0.0375481);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2490() {
   return (neuron0x34ae300()*-0.620341);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c24d0() {
   return (neuron0x34ae640()*-0.715097);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1fa0() {
   return (neuron0x34ae980()*-0.706859);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1fe0() {
   return (neuron0x34aeee0()*-1.44758);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2620() {
   return (neuron0x34af190()*0.467248);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2660() {
   return (neuron0x34af4d0()*-0.055661);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c26a0() {
   return (neuron0x34af810()*0.838274);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c26e0() {
   return (neuron0x34afb50()*-0.532759);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2720() {
   return (neuron0x34afe90()*0.56754);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2760() {
   return (neuron0x34b01d0()*-0.836891);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2ae0() {
   return (neuron0x34ab610()*-0.0414339);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2b20() {
   return (neuron0x34ab8c0()*0.0145236);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2b60() {
   return (neuron0x34abc00()*3.29494);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2ba0() {
   return (neuron0x34abf40()*0.00466609);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2be0() {
   return (neuron0x34ac280()*-0.00090823);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2c20() {
   return (neuron0x34ac5c0()*0.0208811);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2c60() {
   return (neuron0x34ac900()*0.00632634);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2ca0() {
   return (neuron0x34acc40()*0.00682958);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2ce0() {
   return (neuron0x34acf80()*0.00751346);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2d20() {
   return (neuron0x34ad2c0()*0.0127963);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2d60() {
   return (neuron0x34ad600()*-0.0179772);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2da0() {
   return (neuron0x34ad940()*0.0534075);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2de0() {
   return (neuron0x34adc80()*-0.0135979);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2e20() {
   return (neuron0x34adfc0()*-0.02432);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2e60() {
   return (neuron0x34ae300()*0.0254524);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2ea0() {
   return (neuron0x34ae640()*-0.0302668);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2930() {
   return (neuron0x34ae980()*-0.0129778);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2970() {
   return (neuron0x34aeee0()*0.0178343);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2ff0() {
   return (neuron0x34af190()*-0.00261401);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3030() {
   return (neuron0x34af4d0()*-0.0222136);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3070() {
   return (neuron0x34af810()*-0.0103286);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c30b0() {
   return (neuron0x34afb50()*-0.0201321);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c30f0() {
   return (neuron0x34afe90()*-0.000732174);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3130() {
   return (neuron0x34b01d0()*-5.92218);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c34b0() {
   return (neuron0x34ab610()*0.0337739);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c34f0() {
   return (neuron0x34ab8c0()*-0.0171068);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3530() {
   return (neuron0x34abc00()*1.34495);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3570() {
   return (neuron0x34abf40()*-0.00200806);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c35b0() {
   return (neuron0x34ac280()*0.00431451);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c35f0() {
   return (neuron0x34ac5c0()*-0.00683375);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3630() {
   return (neuron0x34ac900()*-0.0314892);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3670() {
   return (neuron0x34acc40()*-0.00749158);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c36b0() {
   return (neuron0x34acf80()*-0.0527925);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c36f0() {
   return (neuron0x34ad2c0()*0.0121246);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3730() {
   return (neuron0x34ad600()*-0.00583647);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3770() {
   return (neuron0x34ad940()*0.282834);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c37b0() {
   return (neuron0x34adc80()*0.0433079);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c37f0() {
   return (neuron0x34adfc0()*0.0571897);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3830() {
   return (neuron0x34ae300()*0.026453);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3870() {
   return (neuron0x34ae640()*0.00161402);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3300() {
   return (neuron0x34ae980()*-0.0496986);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3340() {
   return (neuron0x34aeee0()*-0.0246494);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c39c0() {
   return (neuron0x34af190()*-0.036042);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3a00() {
   return (neuron0x34af4d0()*0.0477562);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3a40() {
   return (neuron0x34af810()*-0.00462855);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3a80() {
   return (neuron0x34afb50()*-0.00124885);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3ac0() {
   return (neuron0x34afe90()*0.028499);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3b00() {
   return (neuron0x34b01d0()*0.0224518);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3e80() {
   return (neuron0x34ab610()*-0.24577);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3ec0() {
   return (neuron0x34ab8c0()*-1.5955);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3f00() {
   return (neuron0x34abc00()*-1.02144);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3f40() {
   return (neuron0x34abf40()*1.77008);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3f80() {
   return (neuron0x34ac280()*0.07828);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3fc0() {
   return (neuron0x34ac5c0()*-0.798189);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4000() {
   return (neuron0x34ac900()*-1.69211);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4040() {
   return (neuron0x34acc40()*-0.303602);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4080() {
   return (neuron0x34acf80()*1.63743);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c40c0() {
   return (neuron0x34ad2c0()*0.323264);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4100() {
   return (neuron0x34ad600()*-1.06475);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4140() {
   return (neuron0x34ad940()*-1.64474);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4180() {
   return (neuron0x34adc80()*0.669387);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c41c0() {
   return (neuron0x34adfc0()*1.58962);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4200() {
   return (neuron0x34ae300()*-1.38457);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4240() {
   return (neuron0x34ae640()*2.74007);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3cd0() {
   return (neuron0x34ae980()*-0.857911);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3d10() {
   return (neuron0x34aeee0()*0.627575);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4390() {
   return (neuron0x34af190()*0.703627);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c43d0() {
   return (neuron0x34af4d0()*-0.596754);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4410() {
   return (neuron0x34af810()*0.705715);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4450() {
   return (neuron0x34afb50()*-1.19526);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4490() {
   return (neuron0x34afe90()*-0.13593);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c44d0() {
   return (neuron0x34b01d0()*1.17075);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4850() {
   return (neuron0x34ab610()*-0.00914063);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4890() {
   return (neuron0x34ab8c0()*0.0208439);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c48d0() {
   return (neuron0x34abc00()*-11.9051);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4910() {
   return (neuron0x34abf40()*0.00948653);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4950() {
   return (neuron0x34ac280()*0.0185143);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4990() {
   return (neuron0x34ac5c0()*0.0104605);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c49d0() {
   return (neuron0x34ac900()*0.027756);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4a10() {
   return (neuron0x34acc40()*-0.00464508);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4a50() {
   return (neuron0x34acf80()*0.0147816);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4a90() {
   return (neuron0x34ad2c0()*0.0196672);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4ad0() {
   return (neuron0x34ad600()*0.0195442);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4b10() {
   return (neuron0x34ad940()*-0.0539005);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4b50() {
   return (neuron0x34adc80()*-0.033847);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4b90() {
   return (neuron0x34adfc0()*-0.0313688);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4bd0() {
   return (neuron0x34ae300()*0.0290654);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4c10() {
   return (neuron0x34ae640()*0.0186422);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c46a0() {
   return (neuron0x34ae980()*0.0127454);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c46e0() {
   return (neuron0x34aeee0()*0.0136228);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4d60() {
   return (neuron0x34af190()*0.0349055);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4da0() {
   return (neuron0x34af4d0()*0.00817908);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4de0() {
   return (neuron0x34af810()*0.00572056);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4e20() {
   return (neuron0x34afb50()*0.0124091);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4e60() {
   return (neuron0x34afe90()*-0.0114761);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4ea0() {
   return (neuron0x34b01d0()*-0.0213918);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5220() {
   return (neuron0x34ab610()*0.013803);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5260() {
   return (neuron0x34ab8c0()*0.00487504);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c52a0() {
   return (neuron0x34abc00()*0.0643947);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c52e0() {
   return (neuron0x34abf40()*0.000288227);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5320() {
   return (neuron0x34ac280()*-0.00296855);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5360() {
   return (neuron0x34ac5c0()*-0.00216662);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c53a0() {
   return (neuron0x34ac900()*0.00654866);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c53e0() {
   return (neuron0x34acc40()*0.00145544);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5420() {
   return (neuron0x34acf80()*-0.00594069);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5460() {
   return (neuron0x34ad2c0()*-0.00507899);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c54a0() {
   return (neuron0x34ad600()*-0.000735404);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c54e0() {
   return (neuron0x34ad940()*-0.00959706);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5520() {
   return (neuron0x34adc80()*-0.00448892);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5560() {
   return (neuron0x34adfc0()*0.00724984);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c55a0() {
   return (neuron0x34ae300()*-0.0039495);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c55e0() {
   return (neuron0x34ae640()*0.00507736);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5070() {
   return (neuron0x34ae980()*0.00158885);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c50b0() {
   return (neuron0x34aeee0()*-0.0103714);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5730() {
   return (neuron0x34af190()*0.00589899);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5770() {
   return (neuron0x34af4d0()*0.00424372);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c57b0() {
   return (neuron0x34af810()*0.00150524);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c57f0() {
   return (neuron0x34afb50()*0.00219427);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5830() {
   return (neuron0x34afe90()*-0.000860153);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5870() {
   return (neuron0x34b01d0()*1.46301);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5bf0() {
   return (neuron0x34ab610()*-0.0591692);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5c30() {
   return (neuron0x34ab8c0()*0.0129462);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5c70() {
   return (neuron0x34abc00()*9.0308);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5cb0() {
   return (neuron0x34abf40()*-0.0863353);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5cf0() {
   return (neuron0x34ac280()*0.0517169);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5d30() {
   return (neuron0x34ac5c0()*0.036769);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5d70() {
   return (neuron0x34ac900()*0.0293799);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5db0() {
   return (neuron0x34acc40()*0.00918627);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5df0() {
   return (neuron0x34acf80()*-0.0213473);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5e30() {
   return (neuron0x34ad2c0()*0.0292691);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5e70() {
   return (neuron0x34ad600()*-0.0152376);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5eb0() {
   return (neuron0x34ad940()*-4.61017);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5ef0() {
   return (neuron0x34adc80()*-0.0937069);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5f30() {
   return (neuron0x34adfc0()*0.112113);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5f70() {
   return (neuron0x34ae300()*0.0264026);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5fb0() {
   return (neuron0x34ae640()*0.0176599);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5a40() {
   return (neuron0x34ae980()*-0.0223727);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5a80() {
   return (neuron0x34aeee0()*0.0374892);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6100() {
   return (neuron0x34af190()*-0.035142);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6140() {
   return (neuron0x34af4d0()*-0.019695);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6180() {
   return (neuron0x34af810()*0.00693278);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c61c0() {
   return (neuron0x34afb50()*0.0137047);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6200() {
   return (neuron0x34afe90()*0.0126355);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6240() {
   return (neuron0x34b01d0()*-0.129189);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c65c0() {
   return (neuron0x34ab610()*0.072324);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6600() {
   return (neuron0x34ab8c0()*-16.7611);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6640() {
   return (neuron0x34abc00()*-0.60214);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6680() {
   return (neuron0x34abf40()*0.00836728);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c66c0() {
   return (neuron0x34ac280()*-0.0196922);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6700() {
   return (neuron0x34ac5c0()*-0.0509162);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6740() {
   return (neuron0x34ac900()*0.00112075);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6780() {
   return (neuron0x34acc40()*-0.0287846);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c67c0() {
   return (neuron0x34acf80()*-0.0160356);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6800() {
   return (neuron0x34ad2c0()*-0.01719);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6840() {
   return (neuron0x34ad600()*0.065055);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6880() {
   return (neuron0x34ad940()*0.153403);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c68c0() {
   return (neuron0x34adc80()*0.018414);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6900() {
   return (neuron0x34adfc0()*0.0540697);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6940() {
   return (neuron0x34ae300()*-0.0767566);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6980() {
   return (neuron0x34ae640()*-0.0313191);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6410() {
   return (neuron0x34ae980()*-0.0290595);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6450() {
   return (neuron0x34aeee0()*-0.0415702);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6ad0() {
   return (neuron0x34af190()*-0.0580211);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6b10() {
   return (neuron0x34af4d0()*0.0704863);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6b50() {
   return (neuron0x34af810()*0.0224838);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6b90() {
   return (neuron0x34afb50()*-0.00714809);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6bd0() {
   return (neuron0x34afe90()*0.00726127);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6c10() {
   return (neuron0x34b01d0()*-0.0348137);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6f90() {
   return (neuron0x34ab610()*-0.0834387);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bb560() {
   return (neuron0x34ab8c0()*10.5094);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bb5a0() {
   return (neuron0x34abc00()*0.661577);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bb5e0() {
   return (neuron0x34abf40()*0.0181917);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bb830() {
   return (neuron0x34ac280()*0.0192294);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bb870() {
   return (neuron0x34ac5c0()*0.0453748);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bb8b0() {
   return (neuron0x34ac900()*-0.0482426);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bbb00() {
   return (neuron0x34acc40()*0.0270613);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bbb40() {
   return (neuron0x34acf80()*0.0176728);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bbd90() {
   return (neuron0x34ad2c0()*-0.0322767);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bbdd0() {
   return (neuron0x34ad600()*-0.0633428);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bbe10() {
   return (neuron0x34ad940()*0.0841188);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bc060() {
   return (neuron0x34adc80()*0.0292171);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bc0a0() {
   return (neuron0x34adfc0()*-0.043288);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bc2f0() {
   return (neuron0x34ae300()*0.0526782);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bc330() {
   return (neuron0x34ae640()*0.0439652);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6de0() {
   return (neuron0x34ae980()*0.0269184);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6e20() {
   return (neuron0x34aeee0()*0.0563692);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bc480() {
   return (neuron0x34af190()*0.0443812);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bc990() {
   return (neuron0x34af4d0()*-0.050179);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bc9d0() {
   return (neuron0x34af810()*-0.0321612);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bca10() {
   return (neuron0x34afb50()*0.0350391);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bcc60() {
   return (neuron0x34afe90()*-0.05425);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bcca0() {
   return (neuron0x34b01d0()*-0.132801);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bc550() {
   return (neuron0x34ab610()*0.00481657);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bc590() {
   return (neuron0x34ab8c0()*-3.10918);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bc5d0() {
   return (neuron0x34abc00()*-0.602826);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bc610() {
   return (neuron0x34abf40()*0.552808);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bcf90() {
   return (neuron0x34ac280()*0.922615);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c92e0() {
   return (neuron0x34ac5c0()*-0.0371796);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9320() {
   return (neuron0x34ac900()*-0.401084);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9360() {
   return (neuron0x34acc40()*0.31096);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c93a0() {
   return (neuron0x34acf80()*-0.12252);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c93e0() {
   return (neuron0x34ad2c0()*-1.57464);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9420() {
   return (neuron0x34ad600()*0.483158);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9460() {
   return (neuron0x34ad940()*1.10589);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c94a0() {
   return (neuron0x34adc80()*-0.537975);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c94e0() {
   return (neuron0x34adfc0()*0.308765);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9520() {
   return (neuron0x34ae300()*0.949458);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9560() {
   return (neuron0x34ae640()*0.350772);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bce70() {
   return (neuron0x34ae980()*-1.10085);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bceb0() {
   return (neuron0x34aeee0()*-0.560712);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c96b0() {
   return (neuron0x34af190()*1.10421);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c96f0() {
   return (neuron0x34af4d0()*-0.887562);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9730() {
   return (neuron0x34af810()*2.73402);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9770() {
   return (neuron0x34afb50()*-0.876953);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c97b0() {
   return (neuron0x34afe90()*0.983905);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c97f0() {
   return (neuron0x34b01d0()*0.174749);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9b70() {
   return (neuron0x34ab610()*0.42791);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9bb0() {
   return (neuron0x34ab8c0()*-1.07248);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9bf0() {
   return (neuron0x34abc00()*-0.271115);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9c30() {
   return (neuron0x34abf40()*0.552266);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9c70() {
   return (neuron0x34ac280()*-0.6508);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9cb0() {
   return (neuron0x34ac5c0()*-0.133341);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9cf0() {
   return (neuron0x34ac900()*-0.200616);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9d30() {
   return (neuron0x34acc40()*0.00703959);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9d70() {
   return (neuron0x34acf80()*0.0302095);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9db0() {
   return (neuron0x34ad2c0()*0.152756);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9df0() {
   return (neuron0x34ad600()*0.643353);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9e30() {
   return (neuron0x34ad940()*3.19804);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9e70() {
   return (neuron0x34adc80()*0.720999);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9eb0() {
   return (neuron0x34adfc0()*-1.45115);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9ef0() {
   return (neuron0x34ae300()*-0.404842);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9f30() {
   return (neuron0x34ae640()*0.0389959);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c99c0() {
   return (neuron0x34ae980()*0.425541);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9a00() {
   return (neuron0x34aeee0()*-2.00435);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca080() {
   return (neuron0x34af190()*-0.813015);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca0c0() {
   return (neuron0x34af4d0()*1.34405);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca100() {
   return (neuron0x34af810()*0.662953);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca140() {
   return (neuron0x34afb50()*-0.34241);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca180() {
   return (neuron0x34afe90()*-0.15846);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca1c0() {
   return (neuron0x34b01d0()*-0.128074);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca540() {
   return (neuron0x34ab610()*-0.599431);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca580() {
   return (neuron0x34ab8c0()*-0.438151);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca5c0() {
   return (neuron0x34abc00()*1.0005);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca600() {
   return (neuron0x34abf40()*-1.13948);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca640() {
   return (neuron0x34ac280()*1.36094);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca680() {
   return (neuron0x34ac5c0()*0.308687);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca6c0() {
   return (neuron0x34ac900()*0.483436);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca700() {
   return (neuron0x34acc40()*0.212563);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca740() {
   return (neuron0x34acf80()*-0.369723);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca780() {
   return (neuron0x34ad2c0()*-0.107402);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca7c0() {
   return (neuron0x34ad600()*-0.208361);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca800() {
   return (neuron0x34ad940()*-0.0755456);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca840() {
   return (neuron0x34adc80()*0.296077);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca880() {
   return (neuron0x34adfc0()*-1.46002);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca8c0() {
   return (neuron0x34ae300()*-0.635353);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca900() {
   return (neuron0x34ae640()*-0.286344);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca390() {
   return (neuron0x34ae980()*1.06783);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca3d0() {
   return (neuron0x34aeee0()*0.00665012);
}

double NNfunction_nn_chi1_charge1m::synapse0x34caa50() {
   return (neuron0x34af190()*1.1944);
}

double NNfunction_nn_chi1_charge1m::synapse0x34caa90() {
   return (neuron0x34af4d0()*-0.670022);
}

double NNfunction_nn_chi1_charge1m::synapse0x34caad0() {
   return (neuron0x34af810()*0.494881);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cab10() {
   return (neuron0x34afb50()*0.709422);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cab50() {
   return (neuron0x34afe90()*0.101027);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cab90() {
   return (neuron0x34b01d0()*-0.794035);
}

double NNfunction_nn_chi1_charge1m::synapse0x34caf10() {
   return (neuron0x34ab610()*2.44939);
}

double NNfunction_nn_chi1_charge1m::synapse0x34caf50() {
   return (neuron0x34ab8c0()*3.28671);
}

double NNfunction_nn_chi1_charge1m::synapse0x34caf90() {
   return (neuron0x34abc00()*-2.49134);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cafd0() {
   return (neuron0x34abf40()*-0.336489);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb010() {
   return (neuron0x34ac280()*-0.793765);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb050() {
   return (neuron0x34ac5c0()*-0.239286);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb090() {
   return (neuron0x34ac900()*0.544838);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb0d0() {
   return (neuron0x34acc40()*0.20392);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb110() {
   return (neuron0x34acf80()*0.183071);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb150() {
   return (neuron0x34ad2c0()*0.215919);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb190() {
   return (neuron0x34ad600()*-1.83987);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb1d0() {
   return (neuron0x34ad940()*0.15137);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb210() {
   return (neuron0x34adc80()*-2.48173);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb250() {
   return (neuron0x34adfc0()*0.342325);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb290() {
   return (neuron0x34ae300()*0.597999);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb2d0() {
   return (neuron0x34ae640()*0.988864);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cad60() {
   return (neuron0x34ae980()*-0.895762);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cada0() {
   return (neuron0x34aeee0()*0.455764);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb420() {
   return (neuron0x34af190()*0.361869);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb460() {
   return (neuron0x34af4d0()*3.13372);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb4a0() {
   return (neuron0x34af810()*-1.00734);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb4e0() {
   return (neuron0x34afb50()*0.163168);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb520() {
   return (neuron0x34afe90()*0.549975);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb560() {
   return (neuron0x34b01d0()*0.123143);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb8e0() {
   return (neuron0x34ab610()*0.0157594);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb920() {
   return (neuron0x34ab8c0()*6.32345);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb960() {
   return (neuron0x34abc00()*-0.625009);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb9a0() {
   return (neuron0x34abf40()*-0.0776189);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb9e0() {
   return (neuron0x34ac280()*0.0488183);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cba20() {
   return (neuron0x34ac5c0()*-0.0273565);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cba60() {
   return (neuron0x34ac900()*-0.00621346);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cbaa0() {
   return (neuron0x34acc40()*0.0475926);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cbae0() {
   return (neuron0x34acf80()*-0.0235383);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cbb20() {
   return (neuron0x34ad2c0()*0.0676988);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cbb60() {
   return (neuron0x34ad600()*-0.0212917);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cbba0() {
   return (neuron0x34ad940()*-0.103324);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cbbe0() {
   return (neuron0x34adc80()*0.0237505);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cbc20() {
   return (neuron0x34adfc0()*-0.0529403);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cbc60() {
   return (neuron0x34ae300()*-0.0464349);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cbca0() {
   return (neuron0x34ae640()*-0.0337385);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb730() {
   return (neuron0x34ae980()*0.0923843);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb770() {
   return (neuron0x34aeee0()*-0.0214672);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cbdf0() {
   return (neuron0x34af190()*-0.0716597);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cbe30() {
   return (neuron0x34af4d0()*-0.0684019);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cbe70() {
   return (neuron0x34af810()*0.0102934);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cbeb0() {
   return (neuron0x34afb50()*-0.0343126);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cbef0() {
   return (neuron0x34afe90()*-0.0300727);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cbf30() {
   return (neuron0x34b01d0()*0.0418681);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc2b0() {
   return (neuron0x34ab610()*1.77326);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc2f0() {
   return (neuron0x34ab8c0()*1.54201);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc330() {
   return (neuron0x34abc00()*-2.48733);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc370() {
   return (neuron0x34abf40()*2.60558);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc3b0() {
   return (neuron0x34ac280()*-0.0223349);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc3f0() {
   return (neuron0x34ac5c0()*-1.03455);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc430() {
   return (neuron0x34ac900()*-0.318039);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc470() {
   return (neuron0x34acc40()*-0.663864);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc4b0() {
   return (neuron0x34acf80()*-1.21146);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc4f0() {
   return (neuron0x34ad2c0()*1.68274);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc530() {
   return (neuron0x34ad600()*1.1816);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc570() {
   return (neuron0x34ad940()*1.14586);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc5b0() {
   return (neuron0x34adc80()*-0.193923);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc5f0() {
   return (neuron0x34adfc0()*1.31093);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc630() {
   return (neuron0x34ae300()*0.830028);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc670() {
   return (neuron0x34ae640()*-1.70541);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc100() {
   return (neuron0x34ae980()*-1.29686);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc140() {
   return (neuron0x34aeee0()*-0.312089);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc7c0() {
   return (neuron0x34af190()*-0.888173);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc800() {
   return (neuron0x34af4d0()*1.03363);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc840() {
   return (neuron0x34af810()*-0.988258);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc880() {
   return (neuron0x34afb50()*-0.181373);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc8c0() {
   return (neuron0x34afe90()*0.833358);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc900() {
   return (neuron0x34b01d0()*2.27966);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ccc80() {
   return (neuron0x34ab610()*-0.185644);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cccc0() {
   return (neuron0x34ab8c0()*-2.62995);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ccd00() {
   return (neuron0x34abc00()*1.36906);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ccd40() {
   return (neuron0x34abf40()*0.397391);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ccd80() {
   return (neuron0x34ac280()*1.17909);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ccdc0() {
   return (neuron0x34ac5c0()*0.639587);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cce00() {
   return (neuron0x34ac900()*-0.727321);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cce40() {
   return (neuron0x34acc40()*0.439862);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cce80() {
   return (neuron0x34acf80()*-0.667578);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ccec0() {
   return (neuron0x34ad2c0()*-0.790564);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ccf00() {
   return (neuron0x34ad600()*-0.216153);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ccf40() {
   return (neuron0x34ad940()*0.802733);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ccf80() {
   return (neuron0x34adc80()*1.96384);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ccfc0() {
   return (neuron0x34adfc0()*-0.636504);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd000() {
   return (neuron0x34ae300()*0.159519);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd040() {
   return (neuron0x34ae640()*-1.12221);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ccad0() {
   return (neuron0x34ae980()*-0.910185);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ccb10() {
   return (neuron0x34aeee0()*0.106164);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd190() {
   return (neuron0x34af190()*1.14138);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd1d0() {
   return (neuron0x34af4d0()*-0.812176);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd210() {
   return (neuron0x34af810()*3.1473);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd250() {
   return (neuron0x34afb50()*-0.467215);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd290() {
   return (neuron0x34afe90()*0.378993);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd2d0() {
   return (neuron0x34b01d0()*0.201063);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd650() {
   return (neuron0x34ab610()*0.429301);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd690() {
   return (neuron0x34ab8c0()*-0.182123);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd6d0() {
   return (neuron0x34abc00()*0.0404375);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd710() {
   return (neuron0x34abf40()*0.0906168);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd750() {
   return (neuron0x34ac280()*0.370821);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd790() {
   return (neuron0x34ac5c0()*-1.35768);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd7d0() {
   return (neuron0x34ac900()*1.72285);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd810() {
   return (neuron0x34acc40()*0.31636);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd850() {
   return (neuron0x34acf80()*-0.39242);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd890() {
   return (neuron0x34ad2c0()*1.33832);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd8d0() {
   return (neuron0x34ad600()*-0.686077);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd910() {
   return (neuron0x34ad940()*-3.64972);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd950() {
   return (neuron0x34adc80()*-0.577059);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd990() {
   return (neuron0x34adfc0()*-0.291218);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd9d0() {
   return (neuron0x34ae300()*-0.033715);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cda10() {
   return (neuron0x34ae640()*0.441708);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd4a0() {
   return (neuron0x34ae980()*0.751734);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd4e0() {
   return (neuron0x34aeee0()*0.525204);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cdb60() {
   return (neuron0x34af190()*1.28442);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cdba0() {
   return (neuron0x34af4d0()*0.637532);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cdbe0() {
   return (neuron0x34af810()*0.76783);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cdc20() {
   return (neuron0x34afb50()*-0.881363);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cdc60() {
   return (neuron0x34afe90()*-0.00296654);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cdca0() {
   return (neuron0x34b01d0()*-0.372116);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6750() {
   return (neuron0x34ab610()*-1.60611);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6790() {
   return (neuron0x34ab8c0()*-0.992425);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b67d0() {
   return (neuron0x34abc00()*0.242841);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6810() {
   return (neuron0x34abf40()*0.124685);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6850() {
   return (neuron0x34ac280()*-0.467148);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6890() {
   return (neuron0x34ac5c0()*-0.25741);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b68d0() {
   return (neuron0x34ac900()*-0.221445);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6910() {
   return (neuron0x34acc40()*0.0403423);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ce430() {
   return (neuron0x34acf80()*0.312745);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ce470() {
   return (neuron0x34ad2c0()*-0.0375063);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ce4b0() {
   return (neuron0x34ad600()*-0.340822);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ce4f0() {
   return (neuron0x34ad940()*1.58778);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ce530() {
   return (neuron0x34adc80()*-0.396175);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ce570() {
   return (neuron0x34adfc0()*-0.120018);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ce5b0() {
   return (neuron0x34ae300()*0.963626);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ce5f0() {
   return (neuron0x34ae640()*-0.0518695);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cde70() {
   return (neuron0x34ae980()*-0.603551);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cdeb0() {
   return (neuron0x34aeee0()*-0.357915);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ce740() {
   return (neuron0x34af190()*-0.677897);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ce780() {
   return (neuron0x34af4d0()*-0.0780924);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ce7c0() {
   return (neuron0x34af810()*-0.146469);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ce800() {
   return (neuron0x34afb50()*-0.565964);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ce840() {
   return (neuron0x34afe90()*0.179932);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ce880() {
   return (neuron0x34b01d0()*0.519084);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cec00() {
   return (neuron0x34ab610()*-0.136673);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cec40() {
   return (neuron0x34ab8c0()*-0.0956334);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cec80() {
   return (neuron0x34abc00()*2.94837);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cecc0() {
   return (neuron0x34abf40()*-0.351726);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ced00() {
   return (neuron0x34ac280()*0.264409);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ced40() {
   return (neuron0x34ac5c0()*0.0715689);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ced80() {
   return (neuron0x34ac900()*-0.189364);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cedc0() {
   return (neuron0x34acc40()*0.104374);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cee00() {
   return (neuron0x34acf80()*0.0179983);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cee40() {
   return (neuron0x34ad2c0()*-0.0212246);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cee80() {
   return (neuron0x34ad600()*-0.15937);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ceec0() {
   return (neuron0x34ad940()*-0.267848);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cef00() {
   return (neuron0x34adc80()*-0.264165);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cef40() {
   return (neuron0x34adfc0()*0.252246);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cef80() {
   return (neuron0x34ae300()*0.00329069);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cefc0() {
   return (neuron0x34ae640()*0.149093);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cea50() {
   return (neuron0x34ae980()*0.158537);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cea90() {
   return (neuron0x34aeee0()*-0.0603667);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf110() {
   return (neuron0x34af190()*0.0286296);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf150() {
   return (neuron0x34af4d0()*-0.0208917);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf190() {
   return (neuron0x34af810()*-0.0969873);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf1d0() {
   return (neuron0x34afb50()*-0.0855655);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf210() {
   return (neuron0x34afe90()*-0.162976);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf250() {
   return (neuron0x34b01d0()*1.91792);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf5d0() {
   return (neuron0x34ab610()*0.483801);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf610() {
   return (neuron0x34ab8c0()*0.384371);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf650() {
   return (neuron0x34abc00()*-0.703527);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf690() {
   return (neuron0x34abf40()*0.720111);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf6d0() {
   return (neuron0x34ac280()*-0.673942);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf710() {
   return (neuron0x34ac5c0()*-0.322158);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf750() {
   return (neuron0x34ac900()*-0.22565);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf790() {
   return (neuron0x34acc40()*-0.109268);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf7d0() {
   return (neuron0x34acf80()*-0.0253276);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf810() {
   return (neuron0x34ad2c0()*0.209851);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf850() {
   return (neuron0x34ad600()*0.163493);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf890() {
   return (neuron0x34ad940()*0.185998);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf8d0() {
   return (neuron0x34adc80()*-0.292839);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf910() {
   return (neuron0x34adfc0()*0.683978);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf950() {
   return (neuron0x34ae300()*0.161688);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf990() {
   return (neuron0x34ae640()*0.0470327);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf420() {
   return (neuron0x34ae980()*-0.586918);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf460() {
   return (neuron0x34aeee0()*0.151462);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bff90() {
   return (neuron0x34af190()*-0.508943);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bffd0() {
   return (neuron0x34af4d0()*0.334229);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0010() {
   return (neuron0x34af810()*-0.457147);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0050() {
   return (neuron0x34afb50()*-0.269669);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0090() {
   return (neuron0x34afe90()*-0.00518653);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c00d0() {
   return (neuron0x34b01d0()*0.802808);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0450() {
   return (neuron0x34ab610()*-0.0554321);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0490() {
   return (neuron0x34ab8c0()*0.00105103);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c04d0() {
   return (neuron0x34abc00()*0.534855);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0510() {
   return (neuron0x34abf40()*-0.0144108);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0550() {
   return (neuron0x34ac280()*0.0470994);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0590() {
   return (neuron0x34ac5c0()*-0.00483939);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c05d0() {
   return (neuron0x34ac900()*-0.0147619);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0610() {
   return (neuron0x34acc40()*0.0300855);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0650() {
   return (neuron0x34acf80()*0.00979888);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0690() {
   return (neuron0x34ad2c0()*-0.0328517);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c06d0() {
   return (neuron0x34ad600()*-0.0134835);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0710() {
   return (neuron0x34ad940()*0.145135);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0750() {
   return (neuron0x34adc80()*-0.00648116);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0790() {
   return (neuron0x34adfc0()*-0.0730897);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c07d0() {
   return (neuron0x34ae300()*0.00437845);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0810() {
   return (neuron0x34ae640()*-0.00581406);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c02a0() {
   return (neuron0x34ae980()*-0.0179886);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c02e0() {
   return (neuron0x34aeee0()*0.0220974);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0960() {
   return (neuron0x34af190()*0.0329603);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c09a0() {
   return (neuron0x34af4d0()*-0.0245126);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c09e0() {
   return (neuron0x34af810()*0.0287541);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0a20() {
   return (neuron0x34afb50()*-0.0062691);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0a60() {
   return (neuron0x34afe90()*-0.0200929);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0aa0() {
   return (neuron0x34b01d0()*-5.17632);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0e20() {
   return (neuron0x34ab610()*-0.0585371);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0e60() {
   return (neuron0x34ab8c0()*1.42547);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0ea0() {
   return (neuron0x34abc00()*0.946068);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0ee0() {
   return (neuron0x34abf40()*1.12251);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0f20() {
   return (neuron0x34ac280()*0.240004);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0f60() {
   return (neuron0x34ac5c0()*0.676751);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0fa0() {
   return (neuron0x34ac900()*-0.933865);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0fe0() {
   return (neuron0x34acc40()*-0.0939205);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1020() {
   return (neuron0x34acf80()*-0.622501);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1060() {
   return (neuron0x34ad2c0()*-0.842125);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c10a0() {
   return (neuron0x34ad600()*-0.423464);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c10e0() {
   return (neuron0x34ad940()*-0.622542);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1120() {
   return (neuron0x34adc80()*-0.799292);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1160() {
   return (neuron0x34adfc0()*1.19118);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c11a0() {
   return (neuron0x34ae300()*-1.37521);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c11e0() {
   return (neuron0x34ae640()*0.800882);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0c70() {
   return (neuron0x34ae980()*-0.290633);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0cb0() {
   return (neuron0x34aeee0()*0.721215);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1330() {
   return (neuron0x34af190()*-1.07998);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1370() {
   return (neuron0x34af4d0()*1.52002);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c13b0() {
   return (neuron0x34af810()*1.10289);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c13f0() {
   return (neuron0x34afb50()*-0.424177);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1430() {
   return (neuron0x34afe90()*-0.174828);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1470() {
   return (neuron0x34b01d0()*-0.379161);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c17f0() {
   return (neuron0x34ab610()*0.00826907);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1830() {
   return (neuron0x34ab8c0()*-0.428277);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1870() {
   return (neuron0x34abc00()*1.53256);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c18b0() {
   return (neuron0x34abf40()*-1.69388);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c18f0() {
   return (neuron0x34ac280()*0.537644);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1930() {
   return (neuron0x34ac5c0()*0.255286);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1970() {
   return (neuron0x34ac900()*0.335496);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c19b0() {
   return (neuron0x34acc40()*-0.695507);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c19f0() {
   return (neuron0x34acf80()*-0.147121);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1a30() {
   return (neuron0x34ad2c0()*0.903581);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1a70() {
   return (neuron0x34ad600()*-1.12774);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1ab0() {
   return (neuron0x34ad940()*0.912444);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1af0() {
   return (neuron0x34adc80()*-1.09174);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1b30() {
   return (neuron0x34adfc0()*0.649745);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1b70() {
   return (neuron0x34ae300()*-0.57813);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1bb0() {
   return (neuron0x34ae640()*0.935296);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1640() {
   return (neuron0x34ae980()*0.563395);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1680() {
   return (neuron0x34aeee0()*0.150377);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1d00() {
   return (neuron0x34af190()*-0.937597);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1d40() {
   return (neuron0x34af4d0()*0.0415938);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1d80() {
   return (neuron0x34af810()*-0.576749);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1dc0() {
   return (neuron0x34afb50()*0.603654);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1e00() {
   return (neuron0x34afe90()*0.701961);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1e40() {
   return (neuron0x34b01d0()*2.58267);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d3d10() {
   return (neuron0x34ab610()*2.28328);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d3d50() {
   return (neuron0x34ab8c0()*1.45956);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d3d90() {
   return (neuron0x34abc00()*-0.535421);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d3dd0() {
   return (neuron0x34abf40()*2.19378);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d3e10() {
   return (neuron0x34ac280()*0.679342);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d3e50() {
   return (neuron0x34ac5c0()*-0.927784);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d3e90() {
   return (neuron0x34ac900()*1.60038);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d3ed0() {
   return (neuron0x34acc40()*1.24468);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d3f10() {
   return (neuron0x34acf80()*1.24376);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d3f50() {
   return (neuron0x34ad2c0()*-2.14931);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d3f90() {
   return (neuron0x34ad600()*-1.78206);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d3fd0() {
   return (neuron0x34ad940()*-0.383353);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4010() {
   return (neuron0x34adc80()*0.383771);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4050() {
   return (neuron0x34adfc0()*0.162523);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4090() {
   return (neuron0x34ae300()*1.97475);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d40d0() {
   return (neuron0x34ae640()*-1.27468);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1e80() {
   return (neuron0x34ae980()*0.85301);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1ec0() {
   return (neuron0x34aeee0()*-0.299275);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4220() {
   return (neuron0x34af190()*0.156723);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4260() {
   return (neuron0x34af4d0()*-1.53477);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d42a0() {
   return (neuron0x34af810()*-1.48502);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d42e0() {
   return (neuron0x34afb50()*-0.93129);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4320() {
   return (neuron0x34afe90()*1.55748);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4360() {
   return (neuron0x34b01d0()*0.0663754);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d46e0() {
   return (neuron0x34ab610()*1.73982);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4720() {
   return (neuron0x34ab8c0()*-0.558402);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4760() {
   return (neuron0x34abc00()*-0.41007);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d47a0() {
   return (neuron0x34abf40()*2.60004);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d47e0() {
   return (neuron0x34ac280()*-0.153353);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4820() {
   return (neuron0x34ac5c0()*0.654951);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4860() {
   return (neuron0x34ac900()*-0.0151588);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d48a0() {
   return (neuron0x34acc40()*-0.0966688);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d48e0() {
   return (neuron0x34acf80()*-1.32719);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4920() {
   return (neuron0x34ad2c0()*-0.809335);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4960() {
   return (neuron0x34ad600()*0.359623);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d49a0() {
   return (neuron0x34ad940()*2.31437);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d49e0() {
   return (neuron0x34adc80()*-0.118176);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4a20() {
   return (neuron0x34adfc0()*2.32089);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4a60() {
   return (neuron0x34ae300()*1.35626);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4aa0() {
   return (neuron0x34ae640()*-0.561325);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4530() {
   return (neuron0x34ae980()*-1.81048);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4570() {
   return (neuron0x34aeee0()*-1.63065);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4bf0() {
   return (neuron0x34af190()*-0.700743);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4c30() {
   return (neuron0x34af4d0()*-0.425089);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4c70() {
   return (neuron0x34af810()*-0.39588);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4cb0() {
   return (neuron0x34afb50()*-1.49686);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4cf0() {
   return (neuron0x34afe90()*1.86274);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4d30() {
   return (neuron0x34b01d0()*-0.0286472);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d50b0() {
   return (neuron0x34ab610()*-0.231733);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d50f0() {
   return (neuron0x34ab8c0()*-0.238501);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5130() {
   return (neuron0x34abc00()*-1.38398);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5170() {
   return (neuron0x34abf40()*-1.67511);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d51b0() {
   return (neuron0x34ac280()*0.111527);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d51f0() {
   return (neuron0x34ac5c0()*-0.302542);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5230() {
   return (neuron0x34ac900()*0.447431);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5270() {
   return (neuron0x34acc40()*-0.7325);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d52b0() {
   return (neuron0x34acf80()*-0.728897);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d52f0() {
   return (neuron0x34ad2c0()*0.158864);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5330() {
   return (neuron0x34ad600()*-0.41448);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5370() {
   return (neuron0x34ad940()*-0.0521216);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d53b0() {
   return (neuron0x34adc80()*0.175728);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d53f0() {
   return (neuron0x34adfc0()*-0.0203568);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5430() {
   return (neuron0x34ae300()*-0.258213);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5470() {
   return (neuron0x34ae640()*-0.777871);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4f00() {
   return (neuron0x34ae980()*0.27893);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4f40() {
   return (neuron0x34aeee0()*0.110426);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d55c0() {
   return (neuron0x34af190()*1.84434);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5600() {
   return (neuron0x34af4d0()*0.0828608);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5640() {
   return (neuron0x34af810()*0.540657);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5680() {
   return (neuron0x34afb50()*-0.451348);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d56c0() {
   return (neuron0x34afe90()*-0.115882);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5700() {
   return (neuron0x34b01d0()*3.54879);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5a80() {
   return (neuron0x34ab610()*-0.0609815);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5ac0() {
   return (neuron0x34ab8c0()*-7.78987);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5b00() {
   return (neuron0x34abc00()*0.057965);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5b40() {
   return (neuron0x34abf40()*0.0239695);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5b80() {
   return (neuron0x34ac280()*0.0275746);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5bc0() {
   return (neuron0x34ac5c0()*-0.0193048);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5c00() {
   return (neuron0x34ac900()*0.0102367);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5c40() {
   return (neuron0x34acc40()*-0.0188737);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5c80() {
   return (neuron0x34acf80()*-0.017975);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5cc0() {
   return (neuron0x34ad2c0()*-0.00401797);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5d00() {
   return (neuron0x34ad600()*0.00834297);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5d40() {
   return (neuron0x34ad940()*0.0334939);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5d80() {
   return (neuron0x34adc80()*-0.00221928);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5dc0() {
   return (neuron0x34adfc0()*0.00718112);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5e00() {
   return (neuron0x34ae300()*0.00725219);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5e40() {
   return (neuron0x34ae640()*-0.00965395);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d58d0() {
   return (neuron0x34ae980()*-0.00526838);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5910() {
   return (neuron0x34aeee0()*0.0335444);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5f90() {
   return (neuron0x34af190()*0.0027436);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5fd0() {
   return (neuron0x34af4d0()*-0.00509231);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d6010() {
   return (neuron0x34af810()*0.0193709);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d6050() {
   return (neuron0x34afb50()*-0.00147549);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d6090() {
   return (neuron0x34afe90()*0.00805945);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d60d0() {
   return (neuron0x34b01d0()*-1.89);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1520() {
   return (neuron0x34b0640()*-0.350864);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b1560() {
   return (neuron0x34b0f10()*-2.24868);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2a80() {
   return (neuron0x34b19f0()*1.81622);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b2ac0() {
   return (neuron0x3275e10()*-2.40025);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4550() {
   return (neuron0x34b27d0()*0.163452);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4590() {
   return (neuron0x34b42a0()*-0.15298);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5320() {
   return (neuron0x34b5070()*-0.190866);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5360() {
   return (neuron0x34b5a40()*0.428654);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5cf0() {
   return (neuron0x34b6410()*-0.314346);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b5d30() {
   return (neuron0x34b6ef0()*4.21405);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b66c0() {
   return (neuron0x34b78c0()*-0.0704372);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b6700() {
   return (neuron0x34b49a0()*-0.411645);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b71a0() {
   return (neuron0x34b9470()*-2.59494);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b71e0() {
   return (neuron0x34b9e40()*0.0865584);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7b70() {
   return (neuron0x34ba810()*1.24206);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b7bb0() {
   return (neuron0x34bb1e0()*-0.531406);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4c50() {
   return (neuron0x34bcff0()*-0.144058);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b4c90() {
   return (neuron0x34bd2d0()*-0.27975);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9720() {
   return (neuron0x34bdca0()*0.109722);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b9760() {
   return (neuron0x34be670()*-0.208846);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba0f0() {
   return (neuron0x34bf040()*0.0469462);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ba130() {
   return (neuron0x34bfa10()*-0.0850894);
}

double NNfunction_nn_chi1_charge1m::synapse0x34baac0() {
   return (neuron0x34b8560()*-0.446042);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bab00() {
   return (neuron0x34b8f30()*-0.305229);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bb490() {
   return (neuron0x34c27a0()*-2.80079);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bb4d0() {
   return (neuron0x34c3170()*-1.47952);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ae520() {
   return (neuron0x34c3b40()*0.174531);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ae560() {
   return (neuron0x34c4510()*4.05392);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd580() {
   return (neuron0x34c4ee0()*0.93633);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bd5c0() {
   return (neuron0x34c58b0()*2.3784);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bdf50() {
   return (neuron0x34c6280()*-3.33694);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bdf90() {
   return (neuron0x34c6c50()*-5.12937);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be920() {
   return (neuron0x34bcce0()*0.201227);
}

double NNfunction_nn_chi1_charge1m::synapse0x34be960() {
   return (neuron0x34c9830()*-0.0396515);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf2f0() {
   return (neuron0x34ca200()*-0.840576);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bf330() {
   return (neuron0x34cabd0()*0.0827557);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bfcc0() {
   return (neuron0x34cb5a0()*4.02311);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bfd00() {
   return (neuron0x34cbf70()*0.4753);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8810() {
   return (neuron0x34cc940()*-0.315995);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b8850() {
   return (neuron0x34cd310()*-0.218388);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c20c0() {
   return (neuron0x34cdce0()*-0.598376);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2100() {
   return (neuron0x34ce8c0()*1.24728);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2a50() {
   return (neuron0x34cf290()*-2.21229);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c2a90() {
   return (neuron0x34c0110()*0.367354);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3420() {
   return (neuron0x34c0ae0()*0.383681);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3460() {
   return (neuron0x34c14b0()*-0.274816);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3df0() {
   return (neuron0x34d3af0()*0.183587);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c3e30() {
   return (neuron0x34d43a0()*0.0889247);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c47c0() {
   return (neuron0x34d4d70()*0.0225363);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c4800() {
   return (neuron0x34d5740()*-0.448974);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6f00() {
   return (neuron0x34b0640()*-0.105706);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c6f40() {
   return (neuron0x34b0f10()*-4.27492);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bc4c0() {
   return (neuron0x34b19f0()*1.47417);
}

double NNfunction_nn_chi1_charge1m::synapse0x34bc500() {
   return (neuron0x3275e10()*-0.646877);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9ae0() {
   return (neuron0x34b27d0()*-0.0223232);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c9b20() {
   return (neuron0x34b42a0()*-1.50662);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca4b0() {
   return (neuron0x34b5070()*-4.15);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ca4f0() {
   return (neuron0x34b5a40()*0.334507);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cae80() {
   return (neuron0x34b6410()*-4.28989);
}

double NNfunction_nn_chi1_charge1m::synapse0x34caec0() {
   return (neuron0x34b6ef0()*-1.37772);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb850() {
   return (neuron0x34b78c0()*-3.57927);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cb890() {
   return (neuron0x34b49a0()*0.0696698);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc220() {
   return (neuron0x34b9470()*-4.62041);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cc260() {
   return (neuron0x34b9e40()*-3.46618);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ccbf0() {
   return (neuron0x34ba810()*-2.7495);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ccc30() {
   return (neuron0x34bb1e0()*0.315615);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd5c0() {
   return (neuron0x34bcff0()*-1.1322);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cd600() {
   return (neuron0x34bd2d0()*0.951408);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cdf90() {
   return (neuron0x34bdca0()*1.81754);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cdfd0() {
   return (neuron0x34be670()*0.817623);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ceb70() {
   return (neuron0x34bf040()*1.48493);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cebb0() {
   return (neuron0x34bfa10()*-2.63207);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf540() {
   return (neuron0x34b8560()*-1.26921);
}

double NNfunction_nn_chi1_charge1m::synapse0x34cf580() {
   return (neuron0x34b8f30()*-4.16374);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c03c0() {
   return (neuron0x34c27a0()*-1.1851);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0400() {
   return (neuron0x34c3170()*1.29217);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0d90() {
   return (neuron0x34c3b40()*4.62071);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c0dd0() {
   return (neuron0x34c4510()*0.653968);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c1760() {
   return (neuron0x34c4ee0()*-3.52503);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c17a0() {
   return (neuron0x34c58b0()*-1.71886);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d3c80() {
   return (neuron0x34c6280()*1.45322);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d3cc0() {
   return (neuron0x34c6c50()*-3.61368);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4650() {
   return (neuron0x34bcce0()*-2.60505);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d4690() {
   return (neuron0x34c9830()*2.87964);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5020() {
   return (neuron0x34ca200()*0.421131);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5060() {
   return (neuron0x34cabd0()*3.67465);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d59f0() {
   return (neuron0x34cb5a0()*4.05994);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d5a30() {
   return (neuron0x34cbf70()*-1.91398);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b08f0() {
   return (neuron0x34cc940()*2.61649);
}

double NNfunction_nn_chi1_charge1m::synapse0x34b0930() {
   return (neuron0x34cd310()*-3.79194);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c5190() {
   return (neuron0x34cdce0()*-1.19089);
}

double NNfunction_nn_chi1_charge1m::synapse0x34c51d0() {
   return (neuron0x34ce8c0()*0.90875);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d6110() {
   return (neuron0x34cf290()*0.662102);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d6150() {
   return (neuron0x34c0110()*-2.76416);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d6190() {
   return (neuron0x34c0ae0()*1.73012);
}

double NNfunction_nn_chi1_charge1m::synapse0x34d61d0() {
   return (neuron0x34c14b0()*-0.910169);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd080() {
   return (neuron0x34d3af0()*2.47278);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd0c0() {
   return (neuron0x34d43a0()*1.81113);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd100() {
   return (neuron0x34d4d70()*2.97862);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd140() {
   return (neuron0x34d5740()*0.821946);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd4c0() {
   return (neuron0x34b0640()*-0.0121241);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd500() {
   return (neuron0x34b0f10()*-0.00776471);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd540() {
   return (neuron0x34b19f0()*-1.77056);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd580() {
   return (neuron0x3275e10()*4.18613);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd5c0() {
   return (neuron0x34b27d0()*-1.14753);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd600() {
   return (neuron0x34b42a0()*-0.470006);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd640() {
   return (neuron0x34b5070()*-0.00199794);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd680() {
   return (neuron0x34b5a40()*-9.53427);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd6c0() {
   return (neuron0x34b6410()*-0.00482294);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd700() {
   return (neuron0x34b6ef0()*-0.114466);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd740() {
   return (neuron0x34b78c0()*-0.00943103);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd780() {
   return (neuron0x34b49a0()*-0.0209491);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd7c0() {
   return (neuron0x34b9470()*1.64181);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd800() {
   return (neuron0x34b9e40()*0.00317589);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd840() {
   return (neuron0x34ba810()*0.135246);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd880() {
   return (neuron0x34bb1e0()*-0.00808438);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd310() {
   return (neuron0x34bcff0()*0.00836096);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd350() {
   return (neuron0x34bd2d0()*-0.0108096);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd9d0() {
   return (neuron0x34bdca0()*2.57923);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dda10() {
   return (neuron0x34be670()*-0.00986264);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dda50() {
   return (neuron0x34bf040()*-0.170713);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dda90() {
   return (neuron0x34bfa10()*-0.0076251);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ddad0() {
   return (neuron0x34b8560()*-0.848149);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ddb10() {
   return (neuron0x34b8f30()*0.0120786);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ddb50() {
   return (neuron0x34c27a0()*-0.29428);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ddb90() {
   return (neuron0x34c3170()*0.143839);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ddbd0() {
   return (neuron0x34c3b40()*-0.00965177);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ddc10() {
   return (neuron0x34c4510()*-0.0546021);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ddc50() {
   return (neuron0x34c4ee0()*-0.425159);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ddc90() {
   return (neuron0x34c58b0()*0.0515283);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ddcd0() {
   return (neuron0x34c6280()*2.50537);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ddd10() {
   return (neuron0x34c6c50()*-0.282321);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd8c0() {
   return (neuron0x34bcce0()*0.0116659);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd900() {
   return (neuron0x34c9830()*-0.012445);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd940() {
   return (neuron0x34ca200()*-0.00971156);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dd980() {
   return (neuron0x34cabd0()*-0.00279213);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ddf60() {
   return (neuron0x34cb5a0()*0.370098);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ddfa0() {
   return (neuron0x34cbf70()*-0.000629857);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ddfe0() {
   return (neuron0x34cc940()*-0.00533722);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de020() {
   return (neuron0x34cd310()*0.00425534);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de060() {
   return (neuron0x34cdce0()*-0.00914967);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de0a0() {
   return (neuron0x34ce8c0()*0.0567345);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de0e0() {
   return (neuron0x34cf290()*-0.0240549);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de120() {
   return (neuron0x34c0110()*-0.791052);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de160() {
   return (neuron0x34c0ae0()*0.0218806);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de1a0() {
   return (neuron0x34c14b0()*-0.0117286);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de1e0() {
   return (neuron0x34d3af0()*0.00542663);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de220() {
   return (neuron0x34d43a0()*0.0121445);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de260() {
   return (neuron0x34d4d70()*-0.0027486);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de2a0() {
   return (neuron0x34d5740()*-0.141633);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de620() {
   return (neuron0x34b0640()*-0.0199255);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de660() {
   return (neuron0x34b0f10()*-0.0537335);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de6a0() {
   return (neuron0x34b19f0()*-1.84889);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de6e0() {
   return (neuron0x3275e10()*4.60545);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de720() {
   return (neuron0x34b27d0()*3.23109);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de760() {
   return (neuron0x34b42a0()*-0.0814455);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de7a0() {
   return (neuron0x34b5070()*0.00902569);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de7e0() {
   return (neuron0x34b5a40()*0.292252);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de820() {
   return (neuron0x34b6410()*0.0179389);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de860() {
   return (neuron0x34b6ef0()*1.00251);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de8a0() {
   return (neuron0x34b78c0()*0.00601417);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de8e0() {
   return (neuron0x34b49a0()*-0.0257474);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de920() {
   return (neuron0x34b9470()*-1.74816);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de960() {
   return (neuron0x34b9e40()*-0.0215176);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de9a0() {
   return (neuron0x34ba810()*5.64133);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de9e0() {
   return (neuron0x34bb1e0()*-0.0206328);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de470() {
   return (neuron0x34bcff0()*-0.0168299);
}

double NNfunction_nn_chi1_charge1m::synapse0x34de4b0() {
   return (neuron0x34bd2d0()*0.0200965);
}

double NNfunction_nn_chi1_charge1m::synapse0x34deb30() {
   return (neuron0x34bdca0()*-0.0115273);
}

double NNfunction_nn_chi1_charge1m::synapse0x34deb70() {
   return (neuron0x34be670()*-0.000992355);
}

double NNfunction_nn_chi1_charge1m::synapse0x34debb0() {
   return (neuron0x34bf040()*-1.69153);
}

double NNfunction_nn_chi1_charge1m::synapse0x34debf0() {
   return (neuron0x34bfa10()*-0.0221432);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dec30() {
   return (neuron0x34b8560()*3.42989);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dec70() {
   return (neuron0x34b8f30()*0.0341332);
}

double NNfunction_nn_chi1_charge1m::synapse0x34decb0() {
   return (neuron0x34c27a0()*-4.65747);
}

double NNfunction_nn_chi1_charge1m::synapse0x34decf0() {
   return (neuron0x34c3170()*-2.58196);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ded30() {
   return (neuron0x34c3b40()*0.0116756);
}

double NNfunction_nn_chi1_charge1m::synapse0x34ded70() {
   return (neuron0x34c4510()*6.57577);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dedb0() {
   return (neuron0x34c4ee0()*-3.36039);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dedf0() {
   return (neuron0x34c58b0()*-0.863805);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dee30() {
   return (neuron0x34c6280()*-2.67947);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dee70() {
   return (neuron0x34c6c50()*-0.128038);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dea20() {
   return (neuron0x34bcce0()*0.017812);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dea60() {
   return (neuron0x34c9830()*-0.0208913);
}

double NNfunction_nn_chi1_charge1m::synapse0x34deaa0() {
   return (neuron0x34ca200()*-0.0621651);
}

double NNfunction_nn_chi1_charge1m::synapse0x34deae0() {
   return (neuron0x34cabd0()*0.0120281);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df0c0() {
   return (neuron0x34cb5a0()*0.320461);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df100() {
   return (neuron0x34cbf70()*0.007149);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df140() {
   return (neuron0x34cc940()*-0.030535);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df180() {
   return (neuron0x34cd310()*0.026474);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df1c0() {
   return (neuron0x34cdce0()*-0.0495839);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df200() {
   return (neuron0x34ce8c0()*0.21485);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df240() {
   return (neuron0x34cf290()*-0.132904);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df280() {
   return (neuron0x34c0110()*-1.5274);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df2c0() {
   return (neuron0x34c0ae0()*0.0106304);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df300() {
   return (neuron0x34c14b0()*-0.037085);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df340() {
   return (neuron0x34d3af0()*0.0104533);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df380() {
   return (neuron0x34d43a0()*-0.00579282);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df3c0() {
   return (neuron0x34d4d70()*-0.0143941);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df400() {
   return (neuron0x34d5740()*-0.0707795);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df780() {
   return (neuron0x34b0640()*0.00229155);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df7c0() {
   return (neuron0x34b0f10()*-0.0347497);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df800() {
   return (neuron0x34b19f0()*-3.56846);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df840() {
   return (neuron0x3275e10()*1.80187);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df880() {
   return (neuron0x34b27d0()*1.66682);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df8c0() {
   return (neuron0x34b42a0()*-0.844132);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df900() {
   return (neuron0x34b5070()*-0.00147144);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df940() {
   return (neuron0x34b5a40()*-1.76007);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df980() {
   return (neuron0x34b6410()*0.0020659);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df9c0() {
   return (neuron0x34b6ef0()*0.198354);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfa00() {
   return (neuron0x34b78c0()*0.000139637);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfa40() {
   return (neuron0x34b49a0()*-0.00149102);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfa80() {
   return (neuron0x34b9470()*0.549648);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfac0() {
   return (neuron0x34b9e40()*0.00252455);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfb00() {
   return (neuron0x34ba810()*-0.233472);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfb40() {
   return (neuron0x34bb1e0()*0.0117383);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df5d0() {
   return (neuron0x34bcff0()*0.00617468);
}

double NNfunction_nn_chi1_charge1m::synapse0x34df610() {
   return (neuron0x34bd2d0()*0.000463467);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfc90() {
   return (neuron0x34bdca0()*3.95758);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfcd0() {
   return (neuron0x34be670()*-0.00100523);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfd10() {
   return (neuron0x34bf040()*-2.18845);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfd50() {
   return (neuron0x34bfa10()*-0.000691672);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfd90() {
   return (neuron0x34b8560()*-0.0749445);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfdd0() {
   return (neuron0x34b8f30()*-0.00398309);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfe10() {
   return (neuron0x34c27a0()*-0.921239);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfe50() {
   return (neuron0x34c3170()*0.179459);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfe90() {
   return (neuron0x34c3b40()*-0.00216604);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfed0() {
   return (neuron0x34c4510()*-3.00049);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dff10() {
   return (neuron0x34c4ee0()*4.50804);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dff50() {
   return (neuron0x34c58b0()*-0.011995);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dff90() {
   return (neuron0x34c6280()*0.875578);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dffd0() {
   return (neuron0x34c6c50()*-0.292772);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfb80() {
   return (neuron0x34bcce0()*-0.00348218);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfbc0() {
   return (neuron0x34c9830()*0.00592639);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfc00() {
   return (neuron0x34ca200()*0.0174219);
}

double NNfunction_nn_chi1_charge1m::synapse0x34dfc40() {
   return (neuron0x34cabd0()*0.00176933);
}

double NNfunction_nn_chi1_charge1m::synapse0x34e0220() {
   return (neuron0x34cb5a0()*-0.13576);
}

double NNfunction_nn_chi1_charge1m::synapse0x34e0260() {
   return (neuron0x34cbf70()*-0.00744327);
}

double NNfunction_nn_chi1_charge1m::synapse0x34e02a0() {
   return (neuron0x34cc940()*0.00423942);
}

double NNfunction_nn_chi1_charge1m::synapse0x34e02e0() {
   return (neuron0x34cd310()*-0.0123286);
}

double NNfunction_nn_chi1_charge1m::synapse0x34e0320() {
   return (neuron0x34cdce0()*0.0150654);
}

double NNfunction_nn_chi1_charge1m::synapse0x34e0360() {
   return (neuron0x34ce8c0()*-0.0208537);
}

double NNfunction_nn_chi1_charge1m::synapse0x34e03a0() {
   return (neuron0x34cf290()*0.0358739);
}

double NNfunction_nn_chi1_charge1m::synapse0x34e03e0() {
   return (neuron0x34c0110()*-3.67409);
}

double NNfunction_nn_chi1_charge1m::synapse0x34e0420() {
   return (neuron0x34c0ae0()*-0.00852668);
}

double NNfunction_nn_chi1_charge1m::synapse0x34e0460() {
   return (neuron0x34c14b0()*0.00358885);
}

double NNfunction_nn_chi1_charge1m::synapse0x34e04a0() {
   return (neuron0x34d3af0()*0.0028972);
}

double NNfunction_nn_chi1_charge1m::synapse0x34e04e0() {
   return (neuron0x34d43a0()*0.00252967);
}

double NNfunction_nn_chi1_charge1m::synapse0x34e0520() {
   return (neuron0x34d4d70()*0.000801563);
}

double NNfunction_nn_chi1_charge1m::synapse0x34e0560() {
   return (neuron0x34d5740()*-2.87583);
}

double NNfunction_nn_chi1_charge1m::synapse0x34e07c0() {
   return (neuron0x34dc940()*5.92415);
}

double NNfunction_nn_chi1_charge1m::synapse0x34e0800() {
   return (neuron0x34dcce0()*-4.73162);
}

double NNfunction_nn_chi1_charge1m::synapse0x34e0840() {
   return (neuron0x34dd180()*-13.6729);
}

double NNfunction_nn_chi1_charge1m::synapse0x34e0880() {
   return (neuron0x34de2e0()*7.54269);
}

double NNfunction_nn_chi1_charge1m::synapse0x34e08c0() {
   return (neuron0x34df440()*9.54119);
}

