#include "NNfunction_nn_chi3_charge2m.h"
#include <cmath>

double NNfunction_nn_chi3_charge2m::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.1595)/14.8892;
   input1 = (in1 - 58.5653)/844.471;
   input2 = (in2 - 221.146)/155.03;
   input3 = (in3 - 328.143)/697.645;
   input4 = (in4 - 1043.17)/838.335;
   input5 = (in5 - 1041.81)/926.358;
   input6 = (in6 - 1044.94)/924.387;
   input7 = (in7 - 1025.09)/894.287;
   input8 = (in8 - 1038.67)/942.466;
   input9 = (in9 - 1031.5)/936.949;
   input10 = (in10 - 996.17)/893.952;
   input11 = (in11 - 1028.11)/900.386;
   input12 = (in12 - 1040.41)/896.593;
   input13 = (in13 - 794.945)/647.218;
   input14 = (in14 - 1020.87)/871.435;
   input15 = (in15 - 1022.72)/871.666;
   input16 = (in16 - 683.827)/543.164;
   input17 = (in17 - 1048.46)/907.878;
   input18 = (in18 - 1049.37)/909.341;
   input19 = (in19 - 1005.25)/843.87;
   input20 = (in20 - -238.291)/461.295;
   input21 = (in21 - -304.809)/935.91;
   input22 = (in22 - 6.60817)/935.918;
   input23 = (in23 - 57.7667)/336.476;
   switch(index) {
     case 0:
         return neuron0x3e00120();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi3_charge2m::Value(int index, double* input) {
   input0 = (input[0] - 24.1595)/14.8892;
   input1 = (input[1] - 58.5653)/844.471;
   input2 = (input[2] - 221.146)/155.03;
   input3 = (input[3] - 328.143)/697.645;
   input4 = (input[4] - 1043.17)/838.335;
   input5 = (input[5] - 1041.81)/926.358;
   input6 = (input[6] - 1044.94)/924.387;
   input7 = (input[7] - 1025.09)/894.287;
   input8 = (input[8] - 1038.67)/942.466;
   input9 = (input[9] - 1031.5)/936.949;
   input10 = (input[10] - 996.17)/893.952;
   input11 = (input[11] - 1028.11)/900.386;
   input12 = (input[12] - 1040.41)/896.593;
   input13 = (input[13] - 794.945)/647.218;
   input14 = (input[14] - 1020.87)/871.435;
   input15 = (input[15] - 1022.72)/871.666;
   input16 = (input[16] - 683.827)/543.164;
   input17 = (input[17] - 1048.46)/907.878;
   input18 = (input[18] - 1049.37)/909.341;
   input19 = (input[19] - 1005.25)/843.87;
   input20 = (input[20] - -238.291)/461.295;
   input21 = (input[21] - -304.809)/935.91;
   input22 = (input[22] - 6.60817)/935.918;
   input23 = (input[23] - 57.7667)/336.476;
   switch(index) {
     case 0:
         return neuron0x3e00120();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcb190() {
   return input0;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcb440() {
   return input1;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcb780() {
   return input2;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcbac0() {
   return input3;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcbe00() {
   return input4;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcc140() {
   return input5;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcc480() {
   return input6;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcc7c0() {
   return input7;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dccb00() {
   return input8;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcce40() {
   return input9;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcd180() {
   return input10;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcd4c0() {
   return input11;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcd800() {
   return input12;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcdb40() {
   return input13;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcde80() {
   return input14;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dce1c0() {
   return input15;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dce500() {
   return input16;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcea60() {
   return input17;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcec80() {
   return input18;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcefc0() {
   return input19;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcf300() {
   return input20;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcf640() {
   return input21;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcf980() {
   return input22;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dcfcc0() {
   return input23;
}

double NNfunction_nn_chi3_charge2m::input0x3dd0130() {
   double input = -5.51047;
   input += synapse0x3dd0470();
   input += synapse0x3dd04b0();
   input += synapse0x3dd04f0();
   input += synapse0x3dd0530();
   input += synapse0x3dd0570();
   input += synapse0x3dd05b0();
   input += synapse0x3dd05f0();
   input += synapse0x3dd0630();
   input += synapse0x3dd0670();
   input += synapse0x3dd06b0();
   input += synapse0x3dd06f0();
   input += synapse0x3dd0730();
   input += synapse0x3dd0770();
   input += synapse0x3dd07b0();
   input += synapse0x3dd07f0();
   input += synapse0x3dd0830();
   input += synapse0x3dd02c0();
   input += synapse0x3dd0300();
   input += synapse0x3b87420();
   input += synapse0x3b87460();
   input += synapse0x3dd0980();
   input += synapse0x3dd09c0();
   input += synapse0x3dd0a00();
   input += synapse0x3dd0a40();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dd0130() {
   double input = input0x3dd0130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dd0a80() {
   double input = -0.190445;
   input += synapse0x3dd0dc0();
   input += synapse0x3dd0e00();
   input += synapse0x3dd0e40();
   input += synapse0x3dd0e80();
   input += synapse0x3dd0ec0();
   input += synapse0x3dd0f00();
   input += synapse0x3dd0f40();
   input += synapse0x3dd0f80();
   input += synapse0x3dd0fc0();
   input += synapse0x3dd0870();
   input += synapse0x3dd08b0();
   input += synapse0x3dd08f0();
   input += synapse0x3dd0930();
   input += synapse0x3dd1210();
   input += synapse0x3dd1250();
   input += synapse0x3dd1290();
   input += synapse0x3dd0c10();
   input += synapse0x3dd0c50();
   input += synapse0x3dd13e0();
   input += synapse0x3dd1420();
   input += synapse0x3dd1460();
   input += synapse0x3dd14a0();
   input += synapse0x3dd14e0();
   input += synapse0x3dd1520();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dd0a80() {
   double input = input0x3dd0a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dd1560() {
   double input = -2.11613;
   input += synapse0x3dd18a0();
   input += synapse0x3dd18e0();
   input += synapse0x3dd1920();
   input += synapse0x3dd1960();
   input += synapse0x3dd19a0();
   input += synapse0x3dd19e0();
   input += synapse0x3dd1a20();
   input += synapse0x3dd1a60();
   input += synapse0x3dd1aa0();
   input += synapse0x3dd1ae0();
   input += synapse0x3dd1b20();
   input += synapse0x3dd1b60();
   input += synapse0x3dd1ba0();
   input += synapse0x3dd1be0();
   input += synapse0x3dd1c20();
   input += synapse0x3dd1c60();
   input += synapse0x3dd16f0();
   input += synapse0x3dd1730();
   input += synapse0x3b95230();
   input += synapse0x3b95270();
   input += synapse0x3dd3ba0();
   input += synapse0x3dd3be0();
   input += synapse0x3dcaed0();
   input += synapse0x3dcaf10();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dd1560() {
   double input = input0x3dd1560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3b95990() {
   double input = -1.20608;
   input += synapse0x3b95b20();
   input += synapse0x3dd1120();
   input += synapse0x3dd1160();
   input += synapse0x3dd11a0();
   input += synapse0x3dd1db0();
   input += synapse0x3dd1df0();
   input += synapse0x3dd1e30();
   input += synapse0x3dd1e70();
   input += synapse0x3dd1eb0();
   input += synapse0x3dd1ef0();
   input += synapse0x3dd1f30();
   input += synapse0x3dd1f70();
   input += synapse0x3dd1fb0();
   input += synapse0x3dd1ff0();
   input += synapse0x3dd2030();
   input += synapse0x3dd2070();
   input += synapse0x3dcaf50();
   input += synapse0x3dcaf90();
   input += synapse0x3dd21c0();
   input += synapse0x3dd2200();
   input += synapse0x3dd2240();
   input += synapse0x3dd2280();
   input += synapse0x3dd22c0();
   input += synapse0x3dd2300();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3b95990() {
   double input = input0x3b95990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dd2340() {
   double input = 0.0975188;
   input += synapse0x3dd2680();
   input += synapse0x3dd26c0();
   input += synapse0x3dd2700();
   input += synapse0x3dd2740();
   input += synapse0x3dd2780();
   input += synapse0x3dd27c0();
   input += synapse0x3dd2800();
   input += synapse0x3dd2840();
   input += synapse0x3dd2880();
   input += synapse0x3dd28c0();
   input += synapse0x3dd2900();
   input += synapse0x3dd2940();
   input += synapse0x3dd2980();
   input += synapse0x3dd29c0();
   input += synapse0x3dd2a00();
   input += synapse0x3dd2a40();
   input += synapse0x3dd2b90();
   input += synapse0x3dd24d0();
   input += synapse0x3dd2510();
   input += synapse0x3dd3ce0();
   input += synapse0x3dd3d20();
   input += synapse0x3dd3d60();
   input += synapse0x3dd3da0();
   input += synapse0x3dd3de0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dd2340() {
   double input = input0x3dd2340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dd3e20() {
   double input = -0.476344;
   input += synapse0x3dd4160();
   input += synapse0x3dd41a0();
   input += synapse0x3dd41e0();
   input += synapse0x3dd4220();
   input += synapse0x3dd4260();
   input += synapse0x3dd42a0();
   input += synapse0x3dd42e0();
   input += synapse0x3dd4320();
   input += synapse0x3dd4360();
   input += synapse0x3b95580();
   input += synapse0x3b955c0();
   input += synapse0x3b95600();
   input += synapse0x3b95640();
   input += synapse0x3b95680();
   input += synapse0x3b956c0();
   input += synapse0x3b95700();
   input += synapse0x3dd3fb0();
   input += synapse0x3dd3ff0();
   input += synapse0x3b95850();
   input += synapse0x3b95890();
   input += synapse0x3b958d0();
   input += synapse0x3b95910();
   input += synapse0x3b95950();
   input += synapse0x3dd4bb0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dd3e20() {
   double input = input0x3dd3e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dd4bf0() {
   double input = 1.1866;
   input += synapse0x3dd4f30();
   input += synapse0x3dd4f70();
   input += synapse0x3dd4fb0();
   input += synapse0x3dd4ff0();
   input += synapse0x3dd5030();
   input += synapse0x3dd5070();
   input += synapse0x3dd50b0();
   input += synapse0x3dd50f0();
   input += synapse0x3dd5130();
   input += synapse0x3dd5170();
   input += synapse0x3dd51b0();
   input += synapse0x3dd51f0();
   input += synapse0x3dd5230();
   input += synapse0x3dd5270();
   input += synapse0x3dd52b0();
   input += synapse0x3dd52f0();
   input += synapse0x3dd4d80();
   input += synapse0x3dd4dc0();
   input += synapse0x3dd5440();
   input += synapse0x3dd5480();
   input += synapse0x3dd54c0();
   input += synapse0x3dd5500();
   input += synapse0x3dd5540();
   input += synapse0x3dd5580();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dd4bf0() {
   double input = input0x3dd4bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dd55c0() {
   double input = 0.541672;
   input += synapse0x3dd5900();
   input += synapse0x3dd5940();
   input += synapse0x3dd5980();
   input += synapse0x3dd59c0();
   input += synapse0x3dd5a00();
   input += synapse0x3dd5a40();
   input += synapse0x3dd5a80();
   input += synapse0x3dd5ac0();
   input += synapse0x3dd5b00();
   input += synapse0x3dd5b40();
   input += synapse0x3dd5b80();
   input += synapse0x3dd5bc0();
   input += synapse0x3dd5c00();
   input += synapse0x3dd5c40();
   input += synapse0x3dd5c80();
   input += synapse0x3dd5cc0();
   input += synapse0x3dd5750();
   input += synapse0x3dd5790();
   input += synapse0x3dd5e10();
   input += synapse0x3dd5e50();
   input += synapse0x3dd5e90();
   input += synapse0x3dd5ed0();
   input += synapse0x3dd5f10();
   input += synapse0x3dd5f50();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dd55c0() {
   double input = input0x3dd55c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dd5f90() {
   double input = -0.991932;
   input += synapse0x3dce950();
   input += synapse0x3dce990();
   input += synapse0x3dce9d0();
   input += synapse0x3dcea10();
   input += synapse0x3dd64e0();
   input += synapse0x3dd6520();
   input += synapse0x3dd6560();
   input += synapse0x3dd65a0();
   input += synapse0x3dd65e0();
   input += synapse0x3dd6620();
   input += synapse0x3dd6660();
   input += synapse0x3dd66a0();
   input += synapse0x3dd66e0();
   input += synapse0x3dd6720();
   input += synapse0x3dd6760();
   input += synapse0x3dd67a0();
   input += synapse0x3dd6120();
   input += synapse0x3dd6160();
   input += synapse0x3dd68f0();
   input += synapse0x3dd6930();
   input += synapse0x3dd6970();
   input += synapse0x3dd69b0();
   input += synapse0x3dd69f0();
   input += synapse0x3dd6a30();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dd5f90() {
   double input = input0x3dd5f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dd6a70() {
   double input = -0.46301;
   input += synapse0x3dd6db0();
   input += synapse0x3dd6df0();
   input += synapse0x3dd6e30();
   input += synapse0x3dd6e70();
   input += synapse0x3dd6eb0();
   input += synapse0x3dd6ef0();
   input += synapse0x3dd6f30();
   input += synapse0x3dd6f70();
   input += synapse0x3dd6fb0();
   input += synapse0x3dd6ff0();
   input += synapse0x3dd7030();
   input += synapse0x3dd7070();
   input += synapse0x3dd70b0();
   input += synapse0x3dd70f0();
   input += synapse0x3dd7130();
   input += synapse0x3dd7170();
   input += synapse0x3dd6c00();
   input += synapse0x3dd6c40();
   input += synapse0x3dd72c0();
   input += synapse0x3dd7300();
   input += synapse0x3dd7340();
   input += synapse0x3dd7380();
   input += synapse0x3dd73c0();
   input += synapse0x3dd7400();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dd6a70() {
   double input = input0x3dd6a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dd7440() {
   double input = 1.71418;
   input += synapse0x3dd7780();
   input += synapse0x3dd77c0();
   input += synapse0x3dd7800();
   input += synapse0x3dd7840();
   input += synapse0x3dd7880();
   input += synapse0x3dd78c0();
   input += synapse0x3dd7900();
   input += synapse0x3dd7940();
   input += synapse0x3dd7980();
   input += synapse0x3dd79c0();
   input += synapse0x3dd7a00();
   input += synapse0x3dd7a40();
   input += synapse0x3dd7a80();
   input += synapse0x3dd7ac0();
   input += synapse0x3dd7b00();
   input += synapse0x3dd7b40();
   input += synapse0x3dd75d0();
   input += synapse0x3dd7610();
   input += synapse0x3dd43a0();
   input += synapse0x3dd43e0();
   input += synapse0x3dd4420();
   input += synapse0x3dd4460();
   input += synapse0x3dd44a0();
   input += synapse0x3dd44e0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dd7440() {
   double input = input0x3dd7440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dd4520() {
   double input = 0.791291;
   input += synapse0x3dd4860();
   input += synapse0x3dd48a0();
   input += synapse0x3dd48e0();
   input += synapse0x3dd4920();
   input += synapse0x3dd4960();
   input += synapse0x3dd49a0();
   input += synapse0x3dd49e0();
   input += synapse0x3dd4a20();
   input += synapse0x3dd4a60();
   input += synapse0x3dd4aa0();
   input += synapse0x3dd4ae0();
   input += synapse0x3dd4b20();
   input += synapse0x3dd4b60();
   input += synapse0x3dd8ca0();
   input += synapse0x3dd8ce0();
   input += synapse0x3dd8d20();
   input += synapse0x3dd46b0();
   input += synapse0x3dd46f0();
   input += synapse0x3dd8e70();
   input += synapse0x3dd8eb0();
   input += synapse0x3dd8ef0();
   input += synapse0x3dd8f30();
   input += synapse0x3dd8f70();
   input += synapse0x3dd8fb0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dd4520() {
   double input = input0x3dd4520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dd8ff0() {
   double input = -1.31555;
   input += synapse0x3dd9330();
   input += synapse0x3dd9370();
   input += synapse0x3dd93b0();
   input += synapse0x3dd93f0();
   input += synapse0x3dd9430();
   input += synapse0x3dd9470();
   input += synapse0x3dd94b0();
   input += synapse0x3dd94f0();
   input += synapse0x3dd9530();
   input += synapse0x3dd9570();
   input += synapse0x3dd95b0();
   input += synapse0x3dd95f0();
   input += synapse0x3dd9630();
   input += synapse0x3dd9670();
   input += synapse0x3dd96b0();
   input += synapse0x3dd96f0();
   input += synapse0x3dd9180();
   input += synapse0x3dd91c0();
   input += synapse0x3dd9840();
   input += synapse0x3dd9880();
   input += synapse0x3dd98c0();
   input += synapse0x3dd9900();
   input += synapse0x3dd9940();
   input += synapse0x3dd9980();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dd8ff0() {
   double input = input0x3dd8ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dd99c0() {
   double input = 0.77998;
   input += synapse0x3dd9d00();
   input += synapse0x3dd9d40();
   input += synapse0x3dd9d80();
   input += synapse0x3dd9dc0();
   input += synapse0x3dd9e00();
   input += synapse0x3dd9e40();
   input += synapse0x3dd9e80();
   input += synapse0x3dd9ec0();
   input += synapse0x3dd9f00();
   input += synapse0x3dd9f40();
   input += synapse0x3dd9f80();
   input += synapse0x3dd9fc0();
   input += synapse0x3dda000();
   input += synapse0x3dda040();
   input += synapse0x3dda080();
   input += synapse0x3dda0c0();
   input += synapse0x3dd9b50();
   input += synapse0x3dd9b90();
   input += synapse0x3dda210();
   input += synapse0x3dda250();
   input += synapse0x3dda290();
   input += synapse0x3dda2d0();
   input += synapse0x3dda310();
   input += synapse0x3dda350();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dd99c0() {
   double input = input0x3dd99c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dda390() {
   double input = -0.77719;
   input += synapse0x3dda6d0();
   input += synapse0x3dda710();
   input += synapse0x3dda750();
   input += synapse0x3dda790();
   input += synapse0x3dda7d0();
   input += synapse0x3dda810();
   input += synapse0x3dda850();
   input += synapse0x3dda890();
   input += synapse0x3dda8d0();
   input += synapse0x3dda910();
   input += synapse0x3dda950();
   input += synapse0x3dda990();
   input += synapse0x3dda9d0();
   input += synapse0x3ddaa10();
   input += synapse0x3ddaa50();
   input += synapse0x3ddaa90();
   input += synapse0x3dda520();
   input += synapse0x3dda560();
   input += synapse0x3ddabe0();
   input += synapse0x3ddac20();
   input += synapse0x3ddac60();
   input += synapse0x3ddaca0();
   input += synapse0x3ddace0();
   input += synapse0x3ddad20();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dda390() {
   double input = input0x3dda390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3ddad60() {
   double input = -0.0951605;
   input += synapse0x3ddb0a0();
   input += synapse0x3dcb320();
   input += synapse0x3dcb360();
   input += synapse0x3dcb660();
   input += synapse0x3dcb6a0();
   input += synapse0x3dcb9a0();
   input += synapse0x3dcb9e0();
   input += synapse0x3dcbce0();
   input += synapse0x3dcbd20();
   input += synapse0x3dcc020();
   input += synapse0x3dcc060();
   input += synapse0x3dcc360();
   input += synapse0x3dcc3a0();
   input += synapse0x3dcc6a0();
   input += synapse0x3dcc6e0();
   input += synapse0x3dcc9e0();
   input += synapse0x3dcca20();
   input += synapse0x3dccd20();
   input += synapse0x3dccd60();
   input += synapse0x3dcd060();
   input += synapse0x3dcd0a0();
   input += synapse0x3dcd3a0();
   input += synapse0x3dcd3e0();
   input += synapse0x3dcd6e0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3ddad60() {
   double input = input0x3ddad60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3ddcb70() {
   double input = 0.0163509;
   input += synapse0x3dcd720();
   input += synapse0x3dce3e0();
   input += synapse0x3dce420();
   input += synapse0x3ddaef0();
   input += synapse0x3ddaf30();
   input += synapse0x3dce720();
   input += synapse0x3dce760();
   input += synapse0x2eafe40();
   input += synapse0x2eafe80();
   input += synapse0x3dceea0();
   input += synapse0x3dceee0();
   input += synapse0x3dcf1e0();
   input += synapse0x3dcf220();
   input += synapse0x3dcf520();
   input += synapse0x3dcf560();
   input += synapse0x3dcf860();
   input += synapse0x3dcf8a0();
   input += synapse0x3dcfba0();
   input += synapse0x3dcfbe0();
   input += synapse0x3dcfee0();
   input += synapse0x3dcff20();
   input += synapse0x3dcda20();
   input += synapse0x3dcda60();
   input += synapse0x3ddce10();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3ddcb70() {
   double input = input0x3ddcb70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3ddce50() {
   double input = -0.428366;
   input += synapse0x3ddd190();
   input += synapse0x3ddd1d0();
   input += synapse0x3ddd210();
   input += synapse0x3ddd250();
   input += synapse0x3ddd290();
   input += synapse0x3ddd2d0();
   input += synapse0x3ddd310();
   input += synapse0x3ddd350();
   input += synapse0x3ddd390();
   input += synapse0x3ddd3d0();
   input += synapse0x3ddd410();
   input += synapse0x3ddd450();
   input += synapse0x3ddd490();
   input += synapse0x3ddd4d0();
   input += synapse0x3ddd510();
   input += synapse0x3ddd550();
   input += synapse0x3ddcfe0();
   input += synapse0x3ddd020();
   input += synapse0x3ddd6a0();
   input += synapse0x3ddd6e0();
   input += synapse0x3ddd720();
   input += synapse0x3ddd760();
   input += synapse0x3ddd7a0();
   input += synapse0x3ddd7e0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3ddce50() {
   double input = input0x3ddce50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3ddd820() {
   double input = 0.113337;
   input += synapse0x3dddb60();
   input += synapse0x3dddba0();
   input += synapse0x3dddbe0();
   input += synapse0x3dddc20();
   input += synapse0x3dddc60();
   input += synapse0x3dddca0();
   input += synapse0x3dddce0();
   input += synapse0x3dddd20();
   input += synapse0x3dddd60();
   input += synapse0x3dddda0();
   input += synapse0x3dddde0();
   input += synapse0x3ddde20();
   input += synapse0x3ddde60();
   input += synapse0x3dddea0();
   input += synapse0x3dddee0();
   input += synapse0x3dddf20();
   input += synapse0x3ddd9b0();
   input += synapse0x3ddd9f0();
   input += synapse0x3dde070();
   input += synapse0x3dde0b0();
   input += synapse0x3dde0f0();
   input += synapse0x3dde130();
   input += synapse0x3dde170();
   input += synapse0x3dde1b0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3ddd820() {
   double input = input0x3ddd820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dde1f0() {
   double input = 5.20391;
   input += synapse0x3dde530();
   input += synapse0x3dde570();
   input += synapse0x3dde5b0();
   input += synapse0x3dde5f0();
   input += synapse0x3dde630();
   input += synapse0x3dde670();
   input += synapse0x3dde6b0();
   input += synapse0x3dde6f0();
   input += synapse0x3dde730();
   input += synapse0x3dde770();
   input += synapse0x3dde7b0();
   input += synapse0x3dde7f0();
   input += synapse0x3dde830();
   input += synapse0x3dde870();
   input += synapse0x3dde8b0();
   input += synapse0x3dde8f0();
   input += synapse0x3dde380();
   input += synapse0x3dde3c0();
   input += synapse0x3ddea40();
   input += synapse0x3ddea80();
   input += synapse0x3ddeac0();
   input += synapse0x3ddeb00();
   input += synapse0x3ddeb40();
   input += synapse0x3ddeb80();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dde1f0() {
   double input = input0x3dde1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3ddebc0() {
   double input = -3.75684;
   input += synapse0x3ddef00();
   input += synapse0x3ddef40();
   input += synapse0x3ddef80();
   input += synapse0x3ddefc0();
   input += synapse0x3ddf000();
   input += synapse0x3ddf040();
   input += synapse0x3ddf080();
   input += synapse0x3ddf0c0();
   input += synapse0x3ddf100();
   input += synapse0x3ddf140();
   input += synapse0x3ddf180();
   input += synapse0x3ddf1c0();
   input += synapse0x3ddf200();
   input += synapse0x3ddf240();
   input += synapse0x3ddf280();
   input += synapse0x3ddf2c0();
   input += synapse0x3dded50();
   input += synapse0x3dded90();
   input += synapse0x3ddf410();
   input += synapse0x3ddf450();
   input += synapse0x3ddf490();
   input += synapse0x3ddf4d0();
   input += synapse0x3ddf510();
   input += synapse0x3ddf550();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3ddebc0() {
   double input = input0x3ddebc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3ddf590() {
   double input = 2.99673;
   input += synapse0x3ddf8d0();
   input += synapse0x3ddf910();
   input += synapse0x3ddf950();
   input += synapse0x3ddf990();
   input += synapse0x3ddf9d0();
   input += synapse0x3ddfa10();
   input += synapse0x3ddfa50();
   input += synapse0x3ddfa90();
   input += synapse0x3ddfad0();
   input += synapse0x3dd7c90();
   input += synapse0x3dd7cd0();
   input += synapse0x3dd7d10();
   input += synapse0x3dd7d50();
   input += synapse0x3dd7d90();
   input += synapse0x3dd7dd0();
   input += synapse0x3dd7e10();
   input += synapse0x3ddf720();
   input += synapse0x3ddf760();
   input += synapse0x3dd7f60();
   input += synapse0x3dd7fa0();
   input += synapse0x3dd7fe0();
   input += synapse0x3dd8020();
   input += synapse0x3dd8060();
   input += synapse0x3dd80a0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3ddf590() {
   double input = input0x3ddf590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dd80e0() {
   double input = -10.1412;
   input += synapse0x3dd8420();
   input += synapse0x3dd8460();
   input += synapse0x3dd84a0();
   input += synapse0x3dd84e0();
   input += synapse0x3dd8520();
   input += synapse0x3dd8560();
   input += synapse0x3dd85a0();
   input += synapse0x3dd85e0();
   input += synapse0x3dd8620();
   input += synapse0x3dd8660();
   input += synapse0x3dd86a0();
   input += synapse0x3dd86e0();
   input += synapse0x3dd8720();
   input += synapse0x3dd8760();
   input += synapse0x3dd87a0();
   input += synapse0x3dd87e0();
   input += synapse0x3dd8270();
   input += synapse0x3dd82b0();
   input += synapse0x3dd8930();
   input += synapse0x3dd8970();
   input += synapse0x3dd89b0();
   input += synapse0x3dd89f0();
   input += synapse0x3dd8a30();
   input += synapse0x3dd8a70();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dd80e0() {
   double input = input0x3dd80e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dd8ab0() {
   double input = -3.47576;
   input += synapse0x3dd8c40();
   input += synapse0x3de1cd0();
   input += synapse0x3de1d10();
   input += synapse0x3de1d50();
   input += synapse0x3de1d90();
   input += synapse0x3de1dd0();
   input += synapse0x3de1e10();
   input += synapse0x3de1e50();
   input += synapse0x3de1e90();
   input += synapse0x3de1ed0();
   input += synapse0x3de1f10();
   input += synapse0x3de1f50();
   input += synapse0x3de1f90();
   input += synapse0x3de1fd0();
   input += synapse0x3de2010();
   input += synapse0x3de2050();
   input += synapse0x3de1b20();
   input += synapse0x3de1b60();
   input += synapse0x3de21a0();
   input += synapse0x3de21e0();
   input += synapse0x3de2220();
   input += synapse0x3de2260();
   input += synapse0x3de22a0();
   input += synapse0x3de22e0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dd8ab0() {
   double input = input0x3dd8ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3de2320() {
   double input = 1.48286;
   input += synapse0x3de2660();
   input += synapse0x3de26a0();
   input += synapse0x3de26e0();
   input += synapse0x3de2720();
   input += synapse0x3de2760();
   input += synapse0x3de27a0();
   input += synapse0x3de27e0();
   input += synapse0x3de2820();
   input += synapse0x3de2860();
   input += synapse0x3de28a0();
   input += synapse0x3de28e0();
   input += synapse0x3de2920();
   input += synapse0x3de2960();
   input += synapse0x3de29a0();
   input += synapse0x3de29e0();
   input += synapse0x3de2a20();
   input += synapse0x3de24b0();
   input += synapse0x3de24f0();
   input += synapse0x3de2b70();
   input += synapse0x3de2bb0();
   input += synapse0x3de2bf0();
   input += synapse0x3de2c30();
   input += synapse0x3de2c70();
   input += synapse0x3de2cb0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3de2320() {
   double input = input0x3de2320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3de2cf0() {
   double input = -0.0183946;
   input += synapse0x3de3030();
   input += synapse0x3de3070();
   input += synapse0x3de30b0();
   input += synapse0x3de30f0();
   input += synapse0x3de3130();
   input += synapse0x3de3170();
   input += synapse0x3de31b0();
   input += synapse0x3de31f0();
   input += synapse0x3de3230();
   input += synapse0x3de3270();
   input += synapse0x3de32b0();
   input += synapse0x3de32f0();
   input += synapse0x3de3330();
   input += synapse0x3de3370();
   input += synapse0x3de33b0();
   input += synapse0x3de33f0();
   input += synapse0x3de2e80();
   input += synapse0x3de2ec0();
   input += synapse0x3de3540();
   input += synapse0x3de3580();
   input += synapse0x3de35c0();
   input += synapse0x3de3600();
   input += synapse0x3de3640();
   input += synapse0x3de3680();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3de2cf0() {
   double input = input0x3de2cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3de36c0() {
   double input = -3.27128;
   input += synapse0x3de3a00();
   input += synapse0x3de3a40();
   input += synapse0x3de3a80();
   input += synapse0x3de3ac0();
   input += synapse0x3de3b00();
   input += synapse0x3de3b40();
   input += synapse0x3de3b80();
   input += synapse0x3de3bc0();
   input += synapse0x3de3c00();
   input += synapse0x3de3c40();
   input += synapse0x3de3c80();
   input += synapse0x3de3cc0();
   input += synapse0x3de3d00();
   input += synapse0x3de3d40();
   input += synapse0x3de3d80();
   input += synapse0x3de3dc0();
   input += synapse0x3de3850();
   input += synapse0x3de3890();
   input += synapse0x3de3f10();
   input += synapse0x3de3f50();
   input += synapse0x3de3f90();
   input += synapse0x3de3fd0();
   input += synapse0x3de4010();
   input += synapse0x3de4050();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3de36c0() {
   double input = input0x3de36c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3de4090() {
   double input = -0.229159;
   input += synapse0x3de43d0();
   input += synapse0x3de4410();
   input += synapse0x3de4450();
   input += synapse0x3de4490();
   input += synapse0x3de44d0();
   input += synapse0x3de4510();
   input += synapse0x3de4550();
   input += synapse0x3de4590();
   input += synapse0x3de45d0();
   input += synapse0x3de4610();
   input += synapse0x3de4650();
   input += synapse0x3de4690();
   input += synapse0x3de46d0();
   input += synapse0x3de4710();
   input += synapse0x3de4750();
   input += synapse0x3de4790();
   input += synapse0x3de4220();
   input += synapse0x3de4260();
   input += synapse0x3de48e0();
   input += synapse0x3de4920();
   input += synapse0x3de4960();
   input += synapse0x3de49a0();
   input += synapse0x3de49e0();
   input += synapse0x3de4a20();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3de4090() {
   double input = input0x3de4090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3de4a60() {
   double input = 0.257275;
   input += synapse0x3de4da0();
   input += synapse0x3de4de0();
   input += synapse0x3de4e20();
   input += synapse0x3de4e60();
   input += synapse0x3de4ea0();
   input += synapse0x3de4ee0();
   input += synapse0x3de4f20();
   input += synapse0x3de4f60();
   input += synapse0x3de4fa0();
   input += synapse0x3de4fe0();
   input += synapse0x3de5020();
   input += synapse0x3de5060();
   input += synapse0x3de50a0();
   input += synapse0x3de50e0();
   input += synapse0x3de5120();
   input += synapse0x3de5160();
   input += synapse0x3de4bf0();
   input += synapse0x3de4c30();
   input += synapse0x3de52b0();
   input += synapse0x3de52f0();
   input += synapse0x3de5330();
   input += synapse0x3de5370();
   input += synapse0x3de53b0();
   input += synapse0x3de53f0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3de4a60() {
   double input = input0x3de4a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3de5430() {
   double input = 0.156667;
   input += synapse0x3de5770();
   input += synapse0x3de57b0();
   input += synapse0x3de57f0();
   input += synapse0x3de5830();
   input += synapse0x3de5870();
   input += synapse0x3de58b0();
   input += synapse0x3de58f0();
   input += synapse0x3de5930();
   input += synapse0x3de5970();
   input += synapse0x3de59b0();
   input += synapse0x3de59f0();
   input += synapse0x3de5a30();
   input += synapse0x3de5a70();
   input += synapse0x3de5ab0();
   input += synapse0x3de5af0();
   input += synapse0x3de5b30();
   input += synapse0x3de55c0();
   input += synapse0x3de5600();
   input += synapse0x3de5c80();
   input += synapse0x3de5cc0();
   input += synapse0x3de5d00();
   input += synapse0x3de5d40();
   input += synapse0x3de5d80();
   input += synapse0x3de5dc0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3de5430() {
   double input = input0x3de5430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3de5e00() {
   double input = -0.864117;
   input += synapse0x3de6140();
   input += synapse0x3de6180();
   input += synapse0x3de61c0();
   input += synapse0x3de6200();
   input += synapse0x3de6240();
   input += synapse0x3de6280();
   input += synapse0x3de62c0();
   input += synapse0x3de6300();
   input += synapse0x3de6340();
   input += synapse0x3de6380();
   input += synapse0x3de63c0();
   input += synapse0x3de6400();
   input += synapse0x3de6440();
   input += synapse0x3de6480();
   input += synapse0x3de64c0();
   input += synapse0x3de6500();
   input += synapse0x3de5f90();
   input += synapse0x3de5fd0();
   input += synapse0x3de6650();
   input += synapse0x3de6690();
   input += synapse0x3de66d0();
   input += synapse0x3de6710();
   input += synapse0x3de6750();
   input += synapse0x3de6790();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3de5e00() {
   double input = input0x3de5e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3de67d0() {
   double input = -2.59447;
   input += synapse0x3de6b10();
   input += synapse0x3ddb0e0();
   input += synapse0x3ddb120();
   input += synapse0x3ddb160();
   input += synapse0x3ddb3b0();
   input += synapse0x3ddb3f0();
   input += synapse0x3ddb430();
   input += synapse0x3ddb680();
   input += synapse0x3ddb6c0();
   input += synapse0x3ddb910();
   input += synapse0x3ddb950();
   input += synapse0x3ddb990();
   input += synapse0x3ddbbe0();
   input += synapse0x3ddbc20();
   input += synapse0x3ddbe70();
   input += synapse0x3ddbeb0();
   input += synapse0x3de6960();
   input += synapse0x3de69a0();
   input += synapse0x3ddc000();
   input += synapse0x3ddc510();
   input += synapse0x3ddc550();
   input += synapse0x3ddc590();
   input += synapse0x3ddc7e0();
   input += synapse0x3ddc820();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3de67d0() {
   double input = input0x3de67d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3ddc860() {
   double input = -3.57721;
   input += synapse0x3ddc0d0();
   input += synapse0x3ddc110();
   input += synapse0x3ddc150();
   input += synapse0x3ddc190();
   input += synapse0x3ddcb10();
   input += synapse0x3de8e60();
   input += synapse0x3de8ea0();
   input += synapse0x3de8ee0();
   input += synapse0x3de8f20();
   input += synapse0x3de8f60();
   input += synapse0x3de8fa0();
   input += synapse0x3de8fe0();
   input += synapse0x3de9020();
   input += synapse0x3de9060();
   input += synapse0x3de90a0();
   input += synapse0x3de90e0();
   input += synapse0x3ddc9f0();
   input += synapse0x3ddca30();
   input += synapse0x3de9230();
   input += synapse0x3de9270();
   input += synapse0x3de92b0();
   input += synapse0x3de92f0();
   input += synapse0x3de9330();
   input += synapse0x3de9370();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3ddc860() {
   double input = input0x3ddc860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3de93b0() {
   double input = 3.60958;
   input += synapse0x3de96f0();
   input += synapse0x3de9730();
   input += synapse0x3de9770();
   input += synapse0x3de97b0();
   input += synapse0x3de97f0();
   input += synapse0x3de9830();
   input += synapse0x3de9870();
   input += synapse0x3de98b0();
   input += synapse0x3de98f0();
   input += synapse0x3de9930();
   input += synapse0x3de9970();
   input += synapse0x3de99b0();
   input += synapse0x3de99f0();
   input += synapse0x3de9a30();
   input += synapse0x3de9a70();
   input += synapse0x3de9ab0();
   input += synapse0x3de9540();
   input += synapse0x3de9580();
   input += synapse0x3de9c00();
   input += synapse0x3de9c40();
   input += synapse0x3de9c80();
   input += synapse0x3de9cc0();
   input += synapse0x3de9d00();
   input += synapse0x3de9d40();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3de93b0() {
   double input = input0x3de93b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3de9d80() {
   double input = 3.48606;
   input += synapse0x3dea0c0();
   input += synapse0x3dea100();
   input += synapse0x3dea140();
   input += synapse0x3dea180();
   input += synapse0x3dea1c0();
   input += synapse0x3dea200();
   input += synapse0x3dea240();
   input += synapse0x3dea280();
   input += synapse0x3dea2c0();
   input += synapse0x3dea300();
   input += synapse0x3dea340();
   input += synapse0x3dea380();
   input += synapse0x3dea3c0();
   input += synapse0x3dea400();
   input += synapse0x3dea440();
   input += synapse0x3dea480();
   input += synapse0x3de9f10();
   input += synapse0x3de9f50();
   input += synapse0x3dea5d0();
   input += synapse0x3dea610();
   input += synapse0x3dea650();
   input += synapse0x3dea690();
   input += synapse0x3dea6d0();
   input += synapse0x3dea710();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3de9d80() {
   double input = input0x3de9d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dea750() {
   double input = -2.92774;
   input += synapse0x3deaa90();
   input += synapse0x3deaad0();
   input += synapse0x3deab10();
   input += synapse0x3deab50();
   input += synapse0x3deab90();
   input += synapse0x3deabd0();
   input += synapse0x3deac10();
   input += synapse0x3deac50();
   input += synapse0x3deac90();
   input += synapse0x3deacd0();
   input += synapse0x3dead10();
   input += synapse0x3dead50();
   input += synapse0x3dead90();
   input += synapse0x3deadd0();
   input += synapse0x3deae10();
   input += synapse0x3deae50();
   input += synapse0x3dea8e0();
   input += synapse0x3dea920();
   input += synapse0x3deafa0();
   input += synapse0x3deafe0();
   input += synapse0x3deb020();
   input += synapse0x3deb060();
   input += synapse0x3deb0a0();
   input += synapse0x3deb0e0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dea750() {
   double input = input0x3dea750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3deb120() {
   double input = -5.01301;
   input += synapse0x3deb460();
   input += synapse0x3deb4a0();
   input += synapse0x3deb4e0();
   input += synapse0x3deb520();
   input += synapse0x3deb560();
   input += synapse0x3deb5a0();
   input += synapse0x3deb5e0();
   input += synapse0x3deb620();
   input += synapse0x3deb660();
   input += synapse0x3deb6a0();
   input += synapse0x3deb6e0();
   input += synapse0x3deb720();
   input += synapse0x3deb760();
   input += synapse0x3deb7a0();
   input += synapse0x3deb7e0();
   input += synapse0x3deb820();
   input += synapse0x3deb2b0();
   input += synapse0x3deb2f0();
   input += synapse0x3deb970();
   input += synapse0x3deb9b0();
   input += synapse0x3deb9f0();
   input += synapse0x3deba30();
   input += synapse0x3deba70();
   input += synapse0x3debab0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3deb120() {
   double input = input0x3deb120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3debaf0() {
   double input = -1.22891;
   input += synapse0x3debe30();
   input += synapse0x3debe70();
   input += synapse0x3debeb0();
   input += synapse0x3debef0();
   input += synapse0x3debf30();
   input += synapse0x3debf70();
   input += synapse0x3debfb0();
   input += synapse0x3debff0();
   input += synapse0x3dec030();
   input += synapse0x3dec070();
   input += synapse0x3dec0b0();
   input += synapse0x3dec0f0();
   input += synapse0x3dec130();
   input += synapse0x3dec170();
   input += synapse0x3dec1b0();
   input += synapse0x3dec1f0();
   input += synapse0x3debc80();
   input += synapse0x3debcc0();
   input += synapse0x3dec340();
   input += synapse0x3dec380();
   input += synapse0x3dec3c0();
   input += synapse0x3dec400();
   input += synapse0x3dec440();
   input += synapse0x3dec480();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3debaf0() {
   double input = input0x3debaf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dec4c0() {
   double input = -0.876735;
   input += synapse0x3dec800();
   input += synapse0x3dec840();
   input += synapse0x3dec880();
   input += synapse0x3dec8c0();
   input += synapse0x3dec900();
   input += synapse0x3dec940();
   input += synapse0x3dec980();
   input += synapse0x3dec9c0();
   input += synapse0x3deca00();
   input += synapse0x3deca40();
   input += synapse0x3deca80();
   input += synapse0x3decac0();
   input += synapse0x3decb00();
   input += synapse0x3decb40();
   input += synapse0x3decb80();
   input += synapse0x3decbc0();
   input += synapse0x3dec650();
   input += synapse0x3dec690();
   input += synapse0x3decd10();
   input += synapse0x3decd50();
   input += synapse0x3decd90();
   input += synapse0x3decdd0();
   input += synapse0x3dece10();
   input += synapse0x3dece50();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dec4c0() {
   double input = input0x3dec4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dece90() {
   double input = -0.758169;
   input += synapse0x3ded1d0();
   input += synapse0x3ded210();
   input += synapse0x3ded250();
   input += synapse0x3ded290();
   input += synapse0x3ded2d0();
   input += synapse0x3ded310();
   input += synapse0x3ded350();
   input += synapse0x3ded390();
   input += synapse0x3ded3d0();
   input += synapse0x3ded410();
   input += synapse0x3ded450();
   input += synapse0x3ded490();
   input += synapse0x3ded4d0();
   input += synapse0x3ded510();
   input += synapse0x3ded550();
   input += synapse0x3ded590();
   input += synapse0x3ded020();
   input += synapse0x3ded060();
   input += synapse0x3ded6e0();
   input += synapse0x3ded720();
   input += synapse0x3ded760();
   input += synapse0x3ded7a0();
   input += synapse0x3ded7e0();
   input += synapse0x3ded820();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dece90() {
   double input = input0x3dece90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3ded860() {
   double input = 3.2725;
   input += synapse0x3dd62d0();
   input += synapse0x3dd6310();
   input += synapse0x3dd6350();
   input += synapse0x3dd6390();
   input += synapse0x3dd63d0();
   input += synapse0x3dd6410();
   input += synapse0x3dd6450();
   input += synapse0x3dd6490();
   input += synapse0x3dedfb0();
   input += synapse0x3dedff0();
   input += synapse0x3dee030();
   input += synapse0x3dee070();
   input += synapse0x3dee0b0();
   input += synapse0x3dee0f0();
   input += synapse0x3dee130();
   input += synapse0x3dee170();
   input += synapse0x3ded9f0();
   input += synapse0x3deda30();
   input += synapse0x3dee2c0();
   input += synapse0x3dee300();
   input += synapse0x3dee340();
   input += synapse0x3dee380();
   input += synapse0x3dee3c0();
   input += synapse0x3dee400();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3ded860() {
   double input = input0x3ded860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dee440() {
   double input = -0.0907723;
   input += synapse0x3dee780();
   input += synapse0x3dee7c0();
   input += synapse0x3dee800();
   input += synapse0x3dee840();
   input += synapse0x3dee880();
   input += synapse0x3dee8c0();
   input += synapse0x3dee900();
   input += synapse0x3dee940();
   input += synapse0x3dee980();
   input += synapse0x3dee9c0();
   input += synapse0x3deea00();
   input += synapse0x3deea40();
   input += synapse0x3deea80();
   input += synapse0x3deeac0();
   input += synapse0x3deeb00();
   input += synapse0x3deeb40();
   input += synapse0x3dee5d0();
   input += synapse0x3dee610();
   input += synapse0x3deec90();
   input += synapse0x3deecd0();
   input += synapse0x3deed10();
   input += synapse0x3deed50();
   input += synapse0x3deed90();
   input += synapse0x3deedd0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dee440() {
   double input = input0x3dee440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3deee10() {
   double input = 0.162938;
   input += synapse0x3def150();
   input += synapse0x3def190();
   input += synapse0x3def1d0();
   input += synapse0x3def210();
   input += synapse0x3def250();
   input += synapse0x3def290();
   input += synapse0x3def2d0();
   input += synapse0x3def310();
   input += synapse0x3def350();
   input += synapse0x3def390();
   input += synapse0x3def3d0();
   input += synapse0x3def410();
   input += synapse0x3def450();
   input += synapse0x3def490();
   input += synapse0x3def4d0();
   input += synapse0x3def510();
   input += synapse0x3deefa0();
   input += synapse0x3deefe0();
   input += synapse0x3ddfb10();
   input += synapse0x3ddfb50();
   input += synapse0x3ddfb90();
   input += synapse0x3ddfbd0();
   input += synapse0x3ddfc10();
   input += synapse0x3ddfc50();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3deee10() {
   double input = input0x3deee10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3ddfc90() {
   double input = -1.74939;
   input += synapse0x3ddffd0();
   input += synapse0x3de0010();
   input += synapse0x3de0050();
   input += synapse0x3de0090();
   input += synapse0x3de00d0();
   input += synapse0x3de0110();
   input += synapse0x3de0150();
   input += synapse0x3de0190();
   input += synapse0x3de01d0();
   input += synapse0x3de0210();
   input += synapse0x3de0250();
   input += synapse0x3de0290();
   input += synapse0x3de02d0();
   input += synapse0x3de0310();
   input += synapse0x3de0350();
   input += synapse0x3de0390();
   input += synapse0x3ddfe20();
   input += synapse0x3ddfe60();
   input += synapse0x3de04e0();
   input += synapse0x3de0520();
   input += synapse0x3de0560();
   input += synapse0x3de05a0();
   input += synapse0x3de05e0();
   input += synapse0x3de0620();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3ddfc90() {
   double input = input0x3ddfc90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3de0660() {
   double input = 9.02107;
   input += synapse0x3de09a0();
   input += synapse0x3de09e0();
   input += synapse0x3de0a20();
   input += synapse0x3de0a60();
   input += synapse0x3de0aa0();
   input += synapse0x3de0ae0();
   input += synapse0x3de0b20();
   input += synapse0x3de0b60();
   input += synapse0x3de0ba0();
   input += synapse0x3de0be0();
   input += synapse0x3de0c20();
   input += synapse0x3de0c60();
   input += synapse0x3de0ca0();
   input += synapse0x3de0ce0();
   input += synapse0x3de0d20();
   input += synapse0x3de0d60();
   input += synapse0x3de07f0();
   input += synapse0x3de0830();
   input += synapse0x3de0eb0();
   input += synapse0x3de0ef0();
   input += synapse0x3de0f30();
   input += synapse0x3de0f70();
   input += synapse0x3de0fb0();
   input += synapse0x3de0ff0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3de0660() {
   double input = input0x3de0660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3de1030() {
   double input = -7.48304;
   input += synapse0x3de1370();
   input += synapse0x3de13b0();
   input += synapse0x3de13f0();
   input += synapse0x3de1430();
   input += synapse0x3de1470();
   input += synapse0x3de14b0();
   input += synapse0x3de14f0();
   input += synapse0x3de1530();
   input += synapse0x3de1570();
   input += synapse0x3de15b0();
   input += synapse0x3de15f0();
   input += synapse0x3de1630();
   input += synapse0x3de1670();
   input += synapse0x3de16b0();
   input += synapse0x3de16f0();
   input += synapse0x3de1730();
   input += synapse0x3de11c0();
   input += synapse0x3de1200();
   input += synapse0x3de1880();
   input += synapse0x3de18c0();
   input += synapse0x3de1900();
   input += synapse0x3de1940();
   input += synapse0x3de1980();
   input += synapse0x3de19c0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3de1030() {
   double input = input0x3de1030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3df3670() {
   double input = 2.38487;
   input += synapse0x3df3890();
   input += synapse0x3df38d0();
   input += synapse0x3df3910();
   input += synapse0x3df3950();
   input += synapse0x3df3990();
   input += synapse0x3df39d0();
   input += synapse0x3df3a10();
   input += synapse0x3df3a50();
   input += synapse0x3df3a90();
   input += synapse0x3df3ad0();
   input += synapse0x3df3b10();
   input += synapse0x3df3b50();
   input += synapse0x3df3b90();
   input += synapse0x3df3bd0();
   input += synapse0x3df3c10();
   input += synapse0x3df3c50();
   input += synapse0x3de1a00();
   input += synapse0x3de1a40();
   input += synapse0x3df3da0();
   input += synapse0x3df3de0();
   input += synapse0x3df3e20();
   input += synapse0x3df3e60();
   input += synapse0x3df3ea0();
   input += synapse0x3df3ee0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3df3670() {
   double input = input0x3df3670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3df3f20() {
   double input = 2.95429;
   input += synapse0x3df4260();
   input += synapse0x3df42a0();
   input += synapse0x3df42e0();
   input += synapse0x3df4320();
   input += synapse0x3df4360();
   input += synapse0x3df43a0();
   input += synapse0x3df43e0();
   input += synapse0x3df4420();
   input += synapse0x3df4460();
   input += synapse0x3df44a0();
   input += synapse0x3df44e0();
   input += synapse0x3df4520();
   input += synapse0x3df4560();
   input += synapse0x3df45a0();
   input += synapse0x3df45e0();
   input += synapse0x3df4620();
   input += synapse0x3df40b0();
   input += synapse0x3df40f0();
   input += synapse0x3df4770();
   input += synapse0x3df47b0();
   input += synapse0x3df47f0();
   input += synapse0x3df4830();
   input += synapse0x3df4870();
   input += synapse0x3df48b0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3df3f20() {
   double input = input0x3df3f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3df48f0() {
   double input = 0.237422;
   input += synapse0x3df4c30();
   input += synapse0x3df4c70();
   input += synapse0x3df4cb0();
   input += synapse0x3df4cf0();
   input += synapse0x3df4d30();
   input += synapse0x3df4d70();
   input += synapse0x3df4db0();
   input += synapse0x3df4df0();
   input += synapse0x3df4e30();
   input += synapse0x3df4e70();
   input += synapse0x3df4eb0();
   input += synapse0x3df4ef0();
   input += synapse0x3df4f30();
   input += synapse0x3df4f70();
   input += synapse0x3df4fb0();
   input += synapse0x3df4ff0();
   input += synapse0x3df4a80();
   input += synapse0x3df4ac0();
   input += synapse0x3df5140();
   input += synapse0x3df5180();
   input += synapse0x3df51c0();
   input += synapse0x3df5200();
   input += synapse0x3df5240();
   input += synapse0x3df5280();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3df48f0() {
   double input = input0x3df48f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3df52c0() {
   double input = 0.856761;
   input += synapse0x3df5600();
   input += synapse0x3df5640();
   input += synapse0x3df5680();
   input += synapse0x3df56c0();
   input += synapse0x3df5700();
   input += synapse0x3df5740();
   input += synapse0x3df5780();
   input += synapse0x3df57c0();
   input += synapse0x3df5800();
   input += synapse0x3df5840();
   input += synapse0x3df5880();
   input += synapse0x3df58c0();
   input += synapse0x3df5900();
   input += synapse0x3df5940();
   input += synapse0x3df5980();
   input += synapse0x3df59c0();
   input += synapse0x3df5450();
   input += synapse0x3df5490();
   input += synapse0x3df5b10();
   input += synapse0x3df5b50();
   input += synapse0x3df5b90();
   input += synapse0x3df5bd0();
   input += synapse0x3df5c10();
   input += synapse0x3df5c50();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3df52c0() {
   double input = input0x3df52c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dfc4c0() {
   double input = -1.26839;
   input += synapse0x3dd1090();
   input += synapse0x3dd10d0();
   input += synapse0x3dd25f0();
   input += synapse0x3dd2630();
   input += synapse0x3dd40d0();
   input += synapse0x3dd4110();
   input += synapse0x3dd4ea0();
   input += synapse0x3dd4ee0();
   input += synapse0x3dd5870();
   input += synapse0x3dd58b0();
   input += synapse0x3dd6240();
   input += synapse0x3dd6280();
   input += synapse0x3dd6d20();
   input += synapse0x3dd6d60();
   input += synapse0x3dd76f0();
   input += synapse0x3dd7730();
   input += synapse0x3dd47d0();
   input += synapse0x3dd4810();
   input += synapse0x3dd92a0();
   input += synapse0x3dd92e0();
   input += synapse0x3dd9c70();
   input += synapse0x3dd9cb0();
   input += synapse0x3dda640();
   input += synapse0x3dda680();
   input += synapse0x3ddb010();
   input += synapse0x3ddb050();
   input += synapse0x3dce0a0();
   input += synapse0x3dce0e0();
   input += synapse0x3ddd100();
   input += synapse0x3ddd140();
   input += synapse0x3dddad0();
   input += synapse0x3dddb10();
   input += synapse0x3dde4a0();
   input += synapse0x3dde4e0();
   input += synapse0x3ddee70();
   input += synapse0x3ddeeb0();
   input += synapse0x3ddf840();
   input += synapse0x3ddf880();
   input += synapse0x3dd8390();
   input += synapse0x3dd83d0();
   input += synapse0x3de1c40();
   input += synapse0x3de1c80();
   input += synapse0x3de25d0();
   input += synapse0x3de2610();
   input += synapse0x3de2fa0();
   input += synapse0x3de2fe0();
   input += synapse0x3de3970();
   input += synapse0x3de39b0();
   input += synapse0x3de4340();
   input += synapse0x3de4380();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dfc4c0() {
   double input = input0x3dfc4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dfc860() {
   double input = 2.001;
   input += synapse0x3de6a80();
   input += synapse0x3de6ac0();
   input += synapse0x3ddc040();
   input += synapse0x3ddc080();
   input += synapse0x3de9660();
   input += synapse0x3de96a0();
   input += synapse0x3dea030();
   input += synapse0x3dea070();
   input += synapse0x3deaa00();
   input += synapse0x3deaa40();
   input += synapse0x3deb3d0();
   input += synapse0x3deb410();
   input += synapse0x3debda0();
   input += synapse0x3debde0();
   input += synapse0x3dec770();
   input += synapse0x3dec7b0();
   input += synapse0x3ded140();
   input += synapse0x3ded180();
   input += synapse0x3dedb10();
   input += synapse0x3dedb50();
   input += synapse0x3dee6f0();
   input += synapse0x3dee730();
   input += synapse0x3def0c0();
   input += synapse0x3def100();
   input += synapse0x3ddff40();
   input += synapse0x3ddff80();
   input += synapse0x3de0910();
   input += synapse0x3de0950();
   input += synapse0x3de12e0();
   input += synapse0x3de1320();
   input += synapse0x3df3800();
   input += synapse0x3df3840();
   input += synapse0x3df41d0();
   input += synapse0x3df4210();
   input += synapse0x3df4ba0();
   input += synapse0x3df4be0();
   input += synapse0x3df5570();
   input += synapse0x3df55b0();
   input += synapse0x3dd03e0();
   input += synapse0x3dd0420();
   input += synapse0x3de4d10();
   input += synapse0x3de4d50();
   input += synapse0x3df5c90();
   input += synapse0x3df5cd0();
   input += synapse0x3df5d10();
   input += synapse0x3df5d50();
   input += synapse0x3dfcc00();
   input += synapse0x3dfcc40();
   input += synapse0x3dfcc80();
   input += synapse0x3dfccc0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dfc860() {
   double input = input0x3dfc860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dfcd00() {
   double input = -1.36298;
   input += synapse0x3dfd040();
   input += synapse0x3dfd080();
   input += synapse0x3dfd0c0();
   input += synapse0x3dfd100();
   input += synapse0x3dfd140();
   input += synapse0x3dfd180();
   input += synapse0x3dfd1c0();
   input += synapse0x3dfd200();
   input += synapse0x3dfd240();
   input += synapse0x3dfd280();
   input += synapse0x3dfd2c0();
   input += synapse0x3dfd300();
   input += synapse0x3dfd340();
   input += synapse0x3dfd380();
   input += synapse0x3dfd3c0();
   input += synapse0x3dfd400();
   input += synapse0x3dfce90();
   input += synapse0x3dfced0();
   input += synapse0x3dfd550();
   input += synapse0x3dfd590();
   input += synapse0x3dfd5d0();
   input += synapse0x3dfd610();
   input += synapse0x3dfd650();
   input += synapse0x3dfd690();
   input += synapse0x3dfd6d0();
   input += synapse0x3dfd710();
   input += synapse0x3dfd750();
   input += synapse0x3dfd790();
   input += synapse0x3dfd7d0();
   input += synapse0x3dfd810();
   input += synapse0x3dfd850();
   input += synapse0x3dfd890();
   input += synapse0x3dfd440();
   input += synapse0x3dfd480();
   input += synapse0x3dfd4c0();
   input += synapse0x3dfd500();
   input += synapse0x3dfdae0();
   input += synapse0x3dfdb20();
   input += synapse0x3dfdb60();
   input += synapse0x3dfdba0();
   input += synapse0x3dfdbe0();
   input += synapse0x3dfdc20();
   input += synapse0x3dfdc60();
   input += synapse0x3dfdca0();
   input += synapse0x3dfdce0();
   input += synapse0x3dfdd20();
   input += synapse0x3dfdd60();
   input += synapse0x3dfdda0();
   input += synapse0x3dfdde0();
   input += synapse0x3dfde20();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dfcd00() {
   double input = input0x3dfcd00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dfde60() {
   double input = 0.213288;
   input += synapse0x3dfe1a0();
   input += synapse0x3dfe1e0();
   input += synapse0x3dfe220();
   input += synapse0x3dfe260();
   input += synapse0x3dfe2a0();
   input += synapse0x3dfe2e0();
   input += synapse0x3dfe320();
   input += synapse0x3dfe360();
   input += synapse0x3dfe3a0();
   input += synapse0x3dfe3e0();
   input += synapse0x3dfe420();
   input += synapse0x3dfe460();
   input += synapse0x3dfe4a0();
   input += synapse0x3dfe4e0();
   input += synapse0x3dfe520();
   input += synapse0x3dfe560();
   input += synapse0x3dfdff0();
   input += synapse0x3dfe030();
   input += synapse0x3dfe6b0();
   input += synapse0x3dfe6f0();
   input += synapse0x3dfe730();
   input += synapse0x3dfe770();
   input += synapse0x3dfe7b0();
   input += synapse0x3dfe7f0();
   input += synapse0x3dfe830();
   input += synapse0x3dfe870();
   input += synapse0x3dfe8b0();
   input += synapse0x3dfe8f0();
   input += synapse0x3dfe930();
   input += synapse0x3dfe970();
   input += synapse0x3dfe9b0();
   input += synapse0x3dfe9f0();
   input += synapse0x3dfe5a0();
   input += synapse0x3dfe5e0();
   input += synapse0x3dfe620();
   input += synapse0x3dfe660();
   input += synapse0x3dfec40();
   input += synapse0x3dfec80();
   input += synapse0x3dfecc0();
   input += synapse0x3dfed00();
   input += synapse0x3dfed40();
   input += synapse0x3dfed80();
   input += synapse0x3dfedc0();
   input += synapse0x3dfee00();
   input += synapse0x3dfee40();
   input += synapse0x3dfee80();
   input += synapse0x3dfeec0();
   input += synapse0x3dfef00();
   input += synapse0x3dfef40();
   input += synapse0x3dfef80();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dfde60() {
   double input = input0x3dfde60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3dfefc0() {
   double input = 0.899173;
   input += synapse0x3dff300();
   input += synapse0x3dff340();
   input += synapse0x3dff380();
   input += synapse0x3dff3c0();
   input += synapse0x3dff400();
   input += synapse0x3dff440();
   input += synapse0x3dff480();
   input += synapse0x3dff4c0();
   input += synapse0x3dff500();
   input += synapse0x3dff540();
   input += synapse0x3dff580();
   input += synapse0x3dff5c0();
   input += synapse0x3dff600();
   input += synapse0x3dff640();
   input += synapse0x3dff680();
   input += synapse0x3dff6c0();
   input += synapse0x3dff150();
   input += synapse0x3dff190();
   input += synapse0x3dff810();
   input += synapse0x3dff850();
   input += synapse0x3dff890();
   input += synapse0x3dff8d0();
   input += synapse0x3dff910();
   input += synapse0x3dff950();
   input += synapse0x3dff990();
   input += synapse0x3dff9d0();
   input += synapse0x3dffa10();
   input += synapse0x3dffa50();
   input += synapse0x3dffa90();
   input += synapse0x3dffad0();
   input += synapse0x3dffb10();
   input += synapse0x3dffb50();
   input += synapse0x3dff700();
   input += synapse0x3dff740();
   input += synapse0x3dff780();
   input += synapse0x3dff7c0();
   input += synapse0x3dffda0();
   input += synapse0x3dffde0();
   input += synapse0x3dffe20();
   input += synapse0x3dffe60();
   input += synapse0x3dffea0();
   input += synapse0x3dffee0();
   input += synapse0x3dfff20();
   input += synapse0x3dfff60();
   input += synapse0x3dfffa0();
   input += synapse0x3dfffe0();
   input += synapse0x3e00020();
   input += synapse0x3e00060();
   input += synapse0x3e000a0();
   input += synapse0x3e000e0();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3dfefc0() {
   double input = input0x3dfefc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge2m::input0x3e00120() {
   double input = 2.9429;
   input += synapse0x3e00340();
   input += synapse0x3e00380();
   input += synapse0x3e003c0();
   input += synapse0x3e00400();
   input += synapse0x3e00440();
   return input;
}

double NNfunction_nn_chi3_charge2m::neuron0x3e00120() {
   double input = input0x3e00120();
   return (input * 1)+0;
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0470() {
   return (neuron0x3dcb190()*0.000140853);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd04b0() {
   return (neuron0x3dcb440()*0.00232498);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd04f0() {
   return (neuron0x3dcb780()*-0.351169);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0530() {
   return (neuron0x3dcbac0()*-0.0259052);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0570() {
   return (neuron0x3dcbe00()*-0.0322263);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd05b0() {
   return (neuron0x3dcc140()*-0.013085);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd05f0() {
   return (neuron0x3dcc480()*-0.0667678);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0630() {
   return (neuron0x3dcc7c0()*0.0363067);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0670() {
   return (neuron0x3dccb00()*-0.00915181);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd06b0() {
   return (neuron0x3dcce40()*0.0444942);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd06f0() {
   return (neuron0x3dcd180()*0.0597451);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0730() {
   return (neuron0x3dcd4c0()*-0.079391);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0770() {
   return (neuron0x3dcd800()*-0.0612786);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd07b0() {
   return (neuron0x3dcdb40()*0.114366);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd07f0() {
   return (neuron0x3dcde80()*0.013151);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0830() {
   return (neuron0x3dce1c0()*-0.0101737);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd02c0() {
   return (neuron0x3dce500()*0.0284634);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0300() {
   return (neuron0x3dcea60()*0.0387942);
}

double NNfunction_nn_chi3_charge2m::synapse0x3b87420() {
   return (neuron0x3dcec80()*0.0208547);
}

double NNfunction_nn_chi3_charge2m::synapse0x3b87460() {
   return (neuron0x3dcefc0()*0.0589477);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0980() {
   return (neuron0x3dcf300()*0.0497268);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd09c0() {
   return (neuron0x3dcf640()*0.00288086);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0a00() {
   return (neuron0x3dcf980()*-0.0473203);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0a40() {
   return (neuron0x3dcfcc0()*-2.67273);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0dc0() {
   return (neuron0x3dcb190()*-0.00688041);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0e00() {
   return (neuron0x3dcb440()*0.0236579);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0e40() {
   return (neuron0x3dcb780()*-1.06729);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0e80() {
   return (neuron0x3dcbac0()*0.0172775);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0ec0() {
   return (neuron0x3dcbe00()*0.0119808);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0f00() {
   return (neuron0x3dcc140()*0.015334);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0f40() {
   return (neuron0x3dcc480()*0.0230978);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0f80() {
   return (neuron0x3dcc7c0()*-0.00694173);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0fc0() {
   return (neuron0x3dccb00()*-0.0114835);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0870() {
   return (neuron0x3dcce40()*-0.0098056);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd08b0() {
   return (neuron0x3dcd180()*-0.00858444);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd08f0() {
   return (neuron0x3dcd4c0()*0.0990753);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0930() {
   return (neuron0x3dcd800()*-0.0295166);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1210() {
   return (neuron0x3dcdb40()*-0.0415703);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1250() {
   return (neuron0x3dcde80()*-0.00880753);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1290() {
   return (neuron0x3dce1c0()*0.0200728);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0c10() {
   return (neuron0x3dce500()*0.0366063);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0c50() {
   return (neuron0x3dcea60()*-0.000679954);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd13e0() {
   return (neuron0x3dcec80()*-0.0172452);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1420() {
   return (neuron0x3dcefc0()*0.00580766);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1460() {
   return (neuron0x3dcf300()*-0.00737637);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd14a0() {
   return (neuron0x3dcf640()*-0.00138044);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd14e0() {
   return (neuron0x3dcf980()*0.00167224);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1520() {
   return (neuron0x3dcfcc0()*-0.8544);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd18a0() {
   return (neuron0x3dcb190()*0.150672);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd18e0() {
   return (neuron0x3dcb440()*0.0625545);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1920() {
   return (neuron0x3dcb780()*-1.17149);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1960() {
   return (neuron0x3dcbac0()*0.045728);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd19a0() {
   return (neuron0x3dcbe00()*0.0138815);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd19e0() {
   return (neuron0x3dcc140()*0.0134451);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1a20() {
   return (neuron0x3dcc480()*0.0592368);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1a60() {
   return (neuron0x3dcc7c0()*0.0100395);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1aa0() {
   return (neuron0x3dccb00()*-0.0186513);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1ae0() {
   return (neuron0x3dcce40()*-0.070335);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1b20() {
   return (neuron0x3dcd180()*-0.0489188);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1b60() {
   return (neuron0x3dcd4c0()*-0.230764);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1ba0() {
   return (neuron0x3dcd800()*0.00511942);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1be0() {
   return (neuron0x3dcdb40()*-0.141838);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1c20() {
   return (neuron0x3dcde80()*-0.0101074);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1c60() {
   return (neuron0x3dce1c0()*-0.00719299);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd16f0() {
   return (neuron0x3dce500()*-0.0492064);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1730() {
   return (neuron0x3dcea60()*-0.0281668);
}

double NNfunction_nn_chi3_charge2m::synapse0x3b95230() {
   return (neuron0x3dcec80()*0.0501904);
}

double NNfunction_nn_chi3_charge2m::synapse0x3b95270() {
   return (neuron0x3dcefc0()*0.03413);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd3ba0() {
   return (neuron0x3dcf300()*-0.0216476);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd3be0() {
   return (neuron0x3dcf640()*-0.033137);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcaed0() {
   return (neuron0x3dcf980()*0.0385371);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcaf10() {
   return (neuron0x3dcfcc0()*-2.82806);
}

double NNfunction_nn_chi3_charge2m::synapse0x3b95b20() {
   return (neuron0x3dcb190()*-0.00162603);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1120() {
   return (neuron0x3dcb440()*13.5109);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1160() {
   return (neuron0x3dcb780()*-2.14452);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd11a0() {
   return (neuron0x3dcbac0()*0.0229462);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1db0() {
   return (neuron0x3dcbe00()*-0.0353683);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1df0() {
   return (neuron0x3dcc140()*0.00741905);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1e30() {
   return (neuron0x3dcc480()*-0.00148996);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1e70() {
   return (neuron0x3dcc7c0()*-0.00681711);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1eb0() {
   return (neuron0x3dccb00()*0.0344641);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1ef0() {
   return (neuron0x3dcce40()*0.0156363);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1f30() {
   return (neuron0x3dcd180()*-0.0234762);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1f70() {
   return (neuron0x3dcd4c0()*0.136487);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1fb0() {
   return (neuron0x3dcd800()*0.0131274);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1ff0() {
   return (neuron0x3dcdb40()*0.0506528);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2030() {
   return (neuron0x3dcde80()*-0.00451832);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2070() {
   return (neuron0x3dce1c0()*-0.041679);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcaf50() {
   return (neuron0x3dce500()*0.0300859);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcaf90() {
   return (neuron0x3dcea60()*0.0274068);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd21c0() {
   return (neuron0x3dcec80()*0.00131307);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2200() {
   return (neuron0x3dcefc0()*0.0411213);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2240() {
   return (neuron0x3dcf300()*-0.0229557);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2280() {
   return (neuron0x3dcf640()*-0.00976381);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd22c0() {
   return (neuron0x3dcf980()*-0.00720184);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2300() {
   return (neuron0x3dcfcc0()*0.0158961);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2680() {
   return (neuron0x3dcb190()*0.496974);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd26c0() {
   return (neuron0x3dcb440()*0.992153);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2700() {
   return (neuron0x3dcb780()*-0.925345);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2740() {
   return (neuron0x3dcbac0()*-0.338494);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2780() {
   return (neuron0x3dcbe00()*0.327503);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd27c0() {
   return (neuron0x3dcc140()*0.37209);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2800() {
   return (neuron0x3dcc480()*0.844799);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2840() {
   return (neuron0x3dcc7c0()*-0.395535);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2880() {
   return (neuron0x3dccb00()*-0.131802);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd28c0() {
   return (neuron0x3dcce40()*-0.344778);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2900() {
   return (neuron0x3dcd180()*0.553035);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2940() {
   return (neuron0x3dcd4c0()*0.237912);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2980() {
   return (neuron0x3dcd800()*-0.615366);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd29c0() {
   return (neuron0x3dcdb40()*-0.989653);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2a00() {
   return (neuron0x3dcde80()*0.046333);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2a40() {
   return (neuron0x3dce1c0()*0.125982);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2b90() {
   return (neuron0x3dce500()*0.652155);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd24d0() {
   return (neuron0x3dcea60()*0.188937);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2510() {
   return (neuron0x3dcec80()*0.320287);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd3ce0() {
   return (neuron0x3dcefc0()*0.832214);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd3d20() {
   return (neuron0x3dcf300()*-0.626162);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd3d60() {
   return (neuron0x3dcf640()*0.751365);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd3da0() {
   return (neuron0x3dcf980()*-0.374053);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd3de0() {
   return (neuron0x3dcfcc0()*1.75935);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4160() {
   return (neuron0x3dcb190()*-0.614487);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd41a0() {
   return (neuron0x3dcb440()*-1.10843);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd41e0() {
   return (neuron0x3dcb780()*0.950629);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4220() {
   return (neuron0x3dcbac0()*-0.0290464);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4260() {
   return (neuron0x3dcbe00()*-0.527662);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd42a0() {
   return (neuron0x3dcc140()*-0.432964);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd42e0() {
   return (neuron0x3dcc480()*-0.763138);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4320() {
   return (neuron0x3dcc7c0()*0.537758);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4360() {
   return (neuron0x3dccb00()*0.0954844);
}

double NNfunction_nn_chi3_charge2m::synapse0x3b95580() {
   return (neuron0x3dcce40()*0.630647);
}

double NNfunction_nn_chi3_charge2m::synapse0x3b955c0() {
   return (neuron0x3dcd180()*-0.475417);
}

double NNfunction_nn_chi3_charge2m::synapse0x3b95600() {
   return (neuron0x3dcd4c0()*-0.140958);
}

double NNfunction_nn_chi3_charge2m::synapse0x3b95640() {
   return (neuron0x3dcd800()*0.607092);
}

double NNfunction_nn_chi3_charge2m::synapse0x3b95680() {
   return (neuron0x3dcdb40()*0.841246);
}

double NNfunction_nn_chi3_charge2m::synapse0x3b956c0() {
   return (neuron0x3dcde80()*-0.0327383);
}

double NNfunction_nn_chi3_charge2m::synapse0x3b95700() {
   return (neuron0x3dce1c0()*-0.376268);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd3fb0() {
   return (neuron0x3dce500()*-0.691975);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd3ff0() {
   return (neuron0x3dcea60()*0.103936);
}

double NNfunction_nn_chi3_charge2m::synapse0x3b95850() {
   return (neuron0x3dcec80()*-0.568164);
}

double NNfunction_nn_chi3_charge2m::synapse0x3b95890() {
   return (neuron0x3dcefc0()*-1.11645);
}

double NNfunction_nn_chi3_charge2m::synapse0x3b958d0() {
   return (neuron0x3dcf300()*0.759515);
}

double NNfunction_nn_chi3_charge2m::synapse0x3b95910() {
   return (neuron0x3dcf640()*-0.939359);
}

double NNfunction_nn_chi3_charge2m::synapse0x3b95950() {
   return (neuron0x3dcf980()*0.273397);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4bb0() {
   return (neuron0x3dcfcc0()*-2.33031);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4f30() {
   return (neuron0x3dcb190()*0.00454022);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4f70() {
   return (neuron0x3dcb440()*0.0187705);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4fb0() {
   return (neuron0x3dcb780()*0.208648);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4ff0() {
   return (neuron0x3dcbac0()*-2.49624);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5030() {
   return (neuron0x3dcbe00()*0.0401965);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5070() {
   return (neuron0x3dcc140()*0.0395363);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd50b0() {
   return (neuron0x3dcc480()*0.0063453);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd50f0() {
   return (neuron0x3dcc7c0()*-0.00294935);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5130() {
   return (neuron0x3dccb00()*0.0915496);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5170() {
   return (neuron0x3dcce40()*-0.0424716);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd51b0() {
   return (neuron0x3dcd180()*-0.030059);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd51f0() {
   return (neuron0x3dcd4c0()*1.05354);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5230() {
   return (neuron0x3dcd800()*-0.12838);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5270() {
   return (neuron0x3dcdb40()*0.0235834);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd52b0() {
   return (neuron0x3dcde80()*0.00633685);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd52f0() {
   return (neuron0x3dce1c0()*-0.0764301);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4d80() {
   return (neuron0x3dce500()*0.0333317);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4dc0() {
   return (neuron0x3dcea60()*-0.0832903);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5440() {
   return (neuron0x3dcec80()*-0.0491753);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5480() {
   return (neuron0x3dcefc0()*0.048824);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd54c0() {
   return (neuron0x3dcf300()*0.0668865);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5500() {
   return (neuron0x3dcf640()*-0.0346443);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5540() {
   return (neuron0x3dcf980()*-0.0128003);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5580() {
   return (neuron0x3dcfcc0()*-0.0780125);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5900() {
   return (neuron0x3dcb190()*-0.0299209);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5940() {
   return (neuron0x3dcb440()*-0.0165254);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5980() {
   return (neuron0x3dcb780()*3.19036);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd59c0() {
   return (neuron0x3dcbac0()*0.0154967);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5a00() {
   return (neuron0x3dcbe00()*0.11267);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5a40() {
   return (neuron0x3dcc140()*0.029537);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5a80() {
   return (neuron0x3dcc480()*0.0219964);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5ac0() {
   return (neuron0x3dcc7c0()*-0.0360505);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5b00() {
   return (neuron0x3dccb00()*0.0599318);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5b40() {
   return (neuron0x3dcce40()*-0.040124);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5b80() {
   return (neuron0x3dcd180()*-0.0173973);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5bc0() {
   return (neuron0x3dcd4c0()*-0.400287);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5c00() {
   return (neuron0x3dcd800()*0.134769);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5c40() {
   return (neuron0x3dcdb40()*0.00515034);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5c80() {
   return (neuron0x3dcde80()*-0.0115542);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5cc0() {
   return (neuron0x3dce1c0()*-0.0877593);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5750() {
   return (neuron0x3dce500()*0.0519495);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5790() {
   return (neuron0x3dcea60()*-0.0770764);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5e10() {
   return (neuron0x3dcec80()*-0.0107639);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5e50() {
   return (neuron0x3dcefc0()*-0.0272038);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5e90() {
   return (neuron0x3dcf300()*-0.0674818);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5ed0() {
   return (neuron0x3dcf640()*0.00545636);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5f10() {
   return (neuron0x3dcf980()*-0.0291942);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5f50() {
   return (neuron0x3dcfcc0()*-5.2908);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dce950() {
   return (neuron0x3dcb190()*-0.0525383);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dce990() {
   return (neuron0x3dcb440()*-0.00898146);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dce9d0() {
   return (neuron0x3dcb780()*2.36966);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcea10() {
   return (neuron0x3dcbac0()*-0.0790232);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd64e0() {
   return (neuron0x3dcbe00()*-0.0387016);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6520() {
   return (neuron0x3dcc140()*-0.0488124);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6560() {
   return (neuron0x3dcc480()*0.0109625);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd65a0() {
   return (neuron0x3dcc7c0()*-0.041637);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd65e0() {
   return (neuron0x3dccb00()*0.0431082);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6620() {
   return (neuron0x3dcce40()*-0.00586119);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6660() {
   return (neuron0x3dcd180()*0.0157394);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd66a0() {
   return (neuron0x3dcd4c0()*-1.20891);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd66e0() {
   return (neuron0x3dcd800()*0.0160326);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6720() {
   return (neuron0x3dcdb40()*0.149115);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6760() {
   return (neuron0x3dcde80()*0.0323167);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd67a0() {
   return (neuron0x3dce1c0()*-0.0405368);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6120() {
   return (neuron0x3dce500()*-0.128317);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6160() {
   return (neuron0x3dcea60()*0.000638853);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd68f0() {
   return (neuron0x3dcec80()*-0.0767263);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6930() {
   return (neuron0x3dcefc0()*0.0523257);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6970() {
   return (neuron0x3dcf300()*0.0471941);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd69b0() {
   return (neuron0x3dcf640()*0.0203918);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd69f0() {
   return (neuron0x3dcf980()*-0.00202073);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6a30() {
   return (neuron0x3dcfcc0()*4.49627);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6db0() {
   return (neuron0x3dcb190()*0.0336643);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6df0() {
   return (neuron0x3dcb440()*-0.554379);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6e30() {
   return (neuron0x3dcb780()*2.42924);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6e70() {
   return (neuron0x3dcbac0()*-0.416776);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6eb0() {
   return (neuron0x3dcbe00()*0.032291);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6ef0() {
   return (neuron0x3dcc140()*-0.147015);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6f30() {
   return (neuron0x3dcc480()*-0.385333);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6f70() {
   return (neuron0x3dcc7c0()*-0.0828171);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6fb0() {
   return (neuron0x3dccb00()*0.405988);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6ff0() {
   return (neuron0x3dcce40()*0.081327);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7030() {
   return (neuron0x3dcd180()*-0.77105);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7070() {
   return (neuron0x3dcd4c0()*1.23775);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd70b0() {
   return (neuron0x3dcd800()*-0.0244651);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd70f0() {
   return (neuron0x3dcdb40()*0.13952);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7130() {
   return (neuron0x3dcde80()*0.047953);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7170() {
   return (neuron0x3dce1c0()*-0.430875);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6c00() {
   return (neuron0x3dce500()*-0.220067);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6c40() {
   return (neuron0x3dcea60()*-0.315735);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd72c0() {
   return (neuron0x3dcec80()*0.440156);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7300() {
   return (neuron0x3dcefc0()*-0.219896);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7340() {
   return (neuron0x3dcf300()*0.184782);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7380() {
   return (neuron0x3dcf640()*-0.028315);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd73c0() {
   return (neuron0x3dcf980()*0.391927);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7400() {
   return (neuron0x3dcfcc0()*-0.153648);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7780() {
   return (neuron0x3dcb190()*0.0293172);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd77c0() {
   return (neuron0x3dcb440()*-0.0140008);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7800() {
   return (neuron0x3dcb780()*2.12633);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7840() {
   return (neuron0x3dcbac0()*-0.0477043);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7880() {
   return (neuron0x3dcbe00()*-0.005154);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd78c0() {
   return (neuron0x3dcc140()*-0.00171957);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7900() {
   return (neuron0x3dcc480()*0.0194926);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7940() {
   return (neuron0x3dcc7c0()*0.00661698);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7980() {
   return (neuron0x3dccb00()*-0.0255374);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd79c0() {
   return (neuron0x3dcce40()*-0.0128485);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7a00() {
   return (neuron0x3dcd180()*0.0131954);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7a40() {
   return (neuron0x3dcd4c0()*0.0289302);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7a80() {
   return (neuron0x3dcd800()*-0.0103701);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7ac0() {
   return (neuron0x3dcdb40()*-0.0697304);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7b00() {
   return (neuron0x3dcde80()*0.0162295);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7b40() {
   return (neuron0x3dce1c0()*-0.00209299);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd75d0() {
   return (neuron0x3dce500()*-0.0510062);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7610() {
   return (neuron0x3dcea60()*-0.0404479);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd43a0() {
   return (neuron0x3dcec80()*-0.0231767);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd43e0() {
   return (neuron0x3dcefc0()*-0.0110528);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4420() {
   return (neuron0x3dcf300()*0.0127947);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4460() {
   return (neuron0x3dcf640()*-0.00570749);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd44a0() {
   return (neuron0x3dcf980()*0.00587885);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd44e0() {
   return (neuron0x3dcfcc0()*-6.47816);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4860() {
   return (neuron0x3dcb190()*-0.0868883);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd48a0() {
   return (neuron0x3dcb440()*-0.452984);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd48e0() {
   return (neuron0x3dcb780()*2.74314);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4920() {
   return (neuron0x3dcbac0()*-0.796449);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4960() {
   return (neuron0x3dcbe00()*0.07265);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd49a0() {
   return (neuron0x3dcc140()*-0.100592);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd49e0() {
   return (neuron0x3dcc480()*-0.510342);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4a20() {
   return (neuron0x3dcc7c0()*-0.117108);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4a60() {
   return (neuron0x3dccb00()*-0.426024);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4aa0() {
   return (neuron0x3dcce40()*0.157268);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4ae0() {
   return (neuron0x3dcd180()*-0.372989);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4b20() {
   return (neuron0x3dcd4c0()*1.66777);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4b60() {
   return (neuron0x3dcd800()*1.25031);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8ca0() {
   return (neuron0x3dcdb40()*0.100375);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8ce0() {
   return (neuron0x3dcde80()*-0.363406);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8d20() {
   return (neuron0x3dce1c0()*-0.745248);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd46b0() {
   return (neuron0x3dce500()*0.00660984);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd46f0() {
   return (neuron0x3dcea60()*-0.0236159);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8e70() {
   return (neuron0x3dcec80()*0.00399753);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8eb0() {
   return (neuron0x3dcefc0()*-0.348239);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8ef0() {
   return (neuron0x3dcf300()*0.246601);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8f30() {
   return (neuron0x3dcf640()*-0.202793);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8f70() {
   return (neuron0x3dcf980()*-0.143277);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8fb0() {
   return (neuron0x3dcfcc0()*-0.0308443);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9330() {
   return (neuron0x3dcb190()*0.0044446);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9370() {
   return (neuron0x3dcb440()*19.707);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd93b0() {
   return (neuron0x3dcb780()*-2.57553);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd93f0() {
   return (neuron0x3dcbac0()*0.0318389);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9430() {
   return (neuron0x3dcbe00()*-0.0524933);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9470() {
   return (neuron0x3dcc140()*0.00355058);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd94b0() {
   return (neuron0x3dcc480()*-0.0153471);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd94f0() {
   return (neuron0x3dcc7c0()*-0.0205705);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9530() {
   return (neuron0x3dccb00()*0.0401266);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9570() {
   return (neuron0x3dcce40()*0.0195641);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd95b0() {
   return (neuron0x3dcd180()*-0.0243415);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd95f0() {
   return (neuron0x3dcd4c0()*0.217557);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9630() {
   return (neuron0x3dcd800()*0.0108995);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9670() {
   return (neuron0x3dcdb40()*0.055651);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd96b0() {
   return (neuron0x3dcde80()*-0.00326234);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd96f0() {
   return (neuron0x3dce1c0()*-0.0438788);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9180() {
   return (neuron0x3dce500()*0.0427293);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd91c0() {
   return (neuron0x3dcea60()*0.0223726);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9840() {
   return (neuron0x3dcec80()*0.0105995);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9880() {
   return (neuron0x3dcefc0()*0.051288);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd98c0() {
   return (neuron0x3dcf300()*-0.043489);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9900() {
   return (neuron0x3dcf640()*0.00507497);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9940() {
   return (neuron0x3dcf980()*0.00282022);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9980() {
   return (neuron0x3dcfcc0()*0.0943375);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9d00() {
   return (neuron0x3dcb190()*0.308487);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9d40() {
   return (neuron0x3dcb440()*-0.19065);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9d80() {
   return (neuron0x3dcb780()*0.398005);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9dc0() {
   return (neuron0x3dcbac0()*-0.0787497);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9e00() {
   return (neuron0x3dcbe00()*-0.578646);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9e40() {
   return (neuron0x3dcc140()*-0.590469);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9e80() {
   return (neuron0x3dcc480()*-0.666991);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9ec0() {
   return (neuron0x3dcc7c0()*-0.460481);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9f00() {
   return (neuron0x3dccb00()*0.0942103);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9f40() {
   return (neuron0x3dcce40()*0.183791);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9f80() {
   return (neuron0x3dcd180()*0.205651);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9fc0() {
   return (neuron0x3dcd4c0()*0.396679);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda000() {
   return (neuron0x3dcd800()*0.202232);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda040() {
   return (neuron0x3dcdb40()*0.358417);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda080() {
   return (neuron0x3dcde80()*-0.175009);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda0c0() {
   return (neuron0x3dce1c0()*-0.22887);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9b50() {
   return (neuron0x3dce500()*0.635744);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9b90() {
   return (neuron0x3dcea60()*0.511404);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda210() {
   return (neuron0x3dcec80()*-0.320607);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda250() {
   return (neuron0x3dcefc0()*-0.18245);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda290() {
   return (neuron0x3dcf300()*0.428581);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda2d0() {
   return (neuron0x3dcf640()*-0.0819239);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda310() {
   return (neuron0x3dcf980()*-0.122293);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda350() {
   return (neuron0x3dcfcc0()*0.431579);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda6d0() {
   return (neuron0x3dcb190()*-0.0551202);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda710() {
   return (neuron0x3dcb440()*0.196623);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda750() {
   return (neuron0x3dcb780()*0.00477249);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda790() {
   return (neuron0x3dcbac0()*0.0937772);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda7d0() {
   return (neuron0x3dcbe00()*0.0625423);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda810() {
   return (neuron0x3dcc140()*-0.0970337);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda850() {
   return (neuron0x3dcc480()*0.110287);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda890() {
   return (neuron0x3dcc7c0()*0.125922);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda8d0() {
   return (neuron0x3dccb00()*-0.038295);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda910() {
   return (neuron0x3dcce40()*-0.11802);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda950() {
   return (neuron0x3dcd180()*-0.0516799);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda990() {
   return (neuron0x3dcd4c0()*-0.568941);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda9d0() {
   return (neuron0x3dcd800()*-0.343918);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddaa10() {
   return (neuron0x3dcdb40()*-0.307533);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddaa50() {
   return (neuron0x3dcde80()*-0.0568875);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddaa90() {
   return (neuron0x3dce1c0()*-0.157759);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda520() {
   return (neuron0x3dce500()*-0.179063);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda560() {
   return (neuron0x3dcea60()*-0.173809);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddabe0() {
   return (neuron0x3dcec80()*-0.0778417);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddac20() {
   return (neuron0x3dcefc0()*0.13303);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddac60() {
   return (neuron0x3dcf300()*-0.199976);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddaca0() {
   return (neuron0x3dcf640()*-0.0437007);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddace0() {
   return (neuron0x3dcf980()*0.015292);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddad20() {
   return (neuron0x3dcfcc0()*-0.20173);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddb0a0() {
   return (neuron0x3dcb190()*-0.345163);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcb320() {
   return (neuron0x3dcb440()*0.0402901);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcb360() {
   return (neuron0x3dcb780()*-0.66717);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcb660() {
   return (neuron0x3dcbac0()*0.0389041);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcb6a0() {
   return (neuron0x3dcbe00()*0.0941118);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcb9a0() {
   return (neuron0x3dcc140()*-0.0192976);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcb9e0() {
   return (neuron0x3dcc480()*0.948095);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcbce0() {
   return (neuron0x3dcc7c0()*0.125312);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcbd20() {
   return (neuron0x3dccb00()*0.321337);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcc020() {
   return (neuron0x3dcce40()*-1.28788);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcc060() {
   return (neuron0x3dcd180()*-0.244413);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcc360() {
   return (neuron0x3dcd4c0()*-0.360736);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcc3a0() {
   return (neuron0x3dcd800()*0.272532);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcc6a0() {
   return (neuron0x3dcdb40()*-0.323403);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcc6e0() {
   return (neuron0x3dcde80()*0.374813);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcc9e0() {
   return (neuron0x3dce1c0()*0.892346);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcca20() {
   return (neuron0x3dce500()*-0.300659);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dccd20() {
   return (neuron0x3dcea60()*-0.0519377);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dccd60() {
   return (neuron0x3dcec80()*0.801508);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcd060() {
   return (neuron0x3dcefc0()*-0.267526);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcd0a0() {
   return (neuron0x3dcf300()*0.506919);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcd3a0() {
   return (neuron0x3dcf640()*0.760029);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcd3e0() {
   return (neuron0x3dcf980()*0.402731);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcd6e0() {
   return (neuron0x3dcfcc0()*0.674558);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcd720() {
   return (neuron0x3dcb190()*-0.00339807);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dce3e0() {
   return (neuron0x3dcb440()*-0.00327589);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dce420() {
   return (neuron0x3dcb780()*-0.0721922);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddaef0() {
   return (neuron0x3dcbac0()*2.09123);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddaf30() {
   return (neuron0x3dcbe00()*-0.0039554);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dce720() {
   return (neuron0x3dcc140()*0.0168256);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dce760() {
   return (neuron0x3dcc480()*0.0121767);
}

double NNfunction_nn_chi3_charge2m::synapse0x2eafe40() {
   return (neuron0x3dcc7c0()*-0.00284675);
}

double NNfunction_nn_chi3_charge2m::synapse0x2eafe80() {
   return (neuron0x3dccb00()*-0.0150586);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dceea0() {
   return (neuron0x3dcce40()*0.0233051);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dceee0() {
   return (neuron0x3dcd180()*0.0142893);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcf1e0() {
   return (neuron0x3dcd4c0()*-1.84863);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcf220() {
   return (neuron0x3dcd800()*0.054577);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcf520() {
   return (neuron0x3dcdb40()*-0.0518875);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcf560() {
   return (neuron0x3dcde80()*0.0185197);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcf860() {
   return (neuron0x3dce1c0()*0.0521014);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcf8a0() {
   return (neuron0x3dce500()*-0.0181529);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcfba0() {
   return (neuron0x3dcea60()*0.0536326);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcfbe0() {
   return (neuron0x3dcec80()*0.0359797);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcfee0() {
   return (neuron0x3dcefc0()*-0.0278596);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcff20() {
   return (neuron0x3dcf300()*-0.0260346);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcda20() {
   return (neuron0x3dcf640()*0.0187137);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dcda60() {
   return (neuron0x3dcf980()*-0.014277);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddce10() {
   return (neuron0x3dcfcc0()*0.0500876);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd190() {
   return (neuron0x3dcb190()*-0.192323);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd1d0() {
   return (neuron0x3dcb440()*-0.0751598);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd210() {
   return (neuron0x3dcb780()*-0.168591);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd250() {
   return (neuron0x3dcbac0()*-0.650033);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd290() {
   return (neuron0x3dcbe00()*-0.0734362);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd2d0() {
   return (neuron0x3dcc140()*-0.0850019);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd310() {
   return (neuron0x3dcc480()*-0.110966);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd350() {
   return (neuron0x3dcc7c0()*0.393868);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd390() {
   return (neuron0x3dccb00()*-0.0277729);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd3d0() {
   return (neuron0x3dcce40()*0.259);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd410() {
   return (neuron0x3dcd180()*0.175425);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd450() {
   return (neuron0x3dcd4c0()*0.461132);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd490() {
   return (neuron0x3dcd800()*-0.652999);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd4d0() {
   return (neuron0x3dcdb40()*-0.219145);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd510() {
   return (neuron0x3dcde80()*-0.58169);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd550() {
   return (neuron0x3dce1c0()*-0.487262);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddcfe0() {
   return (neuron0x3dce500()*-0.548977);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd020() {
   return (neuron0x3dcea60()*-0.226572);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd6a0() {
   return (neuron0x3dcec80()*-0.64791);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd6e0() {
   return (neuron0x3dcefc0()*-0.131579);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd720() {
   return (neuron0x3dcf300()*0.0795211);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd760() {
   return (neuron0x3dcf640()*-0.342346);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd7a0() {
   return (neuron0x3dcf980()*0.101931);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd7e0() {
   return (neuron0x3dcfcc0()*-0.0117283);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dddb60() {
   return (neuron0x3dcb190()*0.00283851);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dddba0() {
   return (neuron0x3dcb440()*-0.028844);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dddbe0() {
   return (neuron0x3dcb780()*0.310803);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dddc20() {
   return (neuron0x3dcbac0()*-0.00870925);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dddc60() {
   return (neuron0x3dcbe00()*-0.00322322);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dddca0() {
   return (neuron0x3dcc140()*-0.0106263);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dddce0() {
   return (neuron0x3dcc480()*-0.020596);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dddd20() {
   return (neuron0x3dcc7c0()*-0.00116697);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dddd60() {
   return (neuron0x3dccb00()*-0.0261353);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dddda0() {
   return (neuron0x3dcce40()*-0.0036704);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dddde0() {
   return (neuron0x3dcd180()*-0.00350276);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddde20() {
   return (neuron0x3dcd4c0()*0.0272477);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddde60() {
   return (neuron0x3dcd800()*-0.0626897);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dddea0() {
   return (neuron0x3dcdb40()*-0.00615263);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dddee0() {
   return (neuron0x3dcde80()*0.00892274);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dddf20() {
   return (neuron0x3dce1c0()*0.0156136);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd9b0() {
   return (neuron0x3dce500()*0.0139743);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd9f0() {
   return (neuron0x3dcea60()*-0.0123871);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde070() {
   return (neuron0x3dcec80()*-0.00598326);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde0b0() {
   return (neuron0x3dcefc0()*-0.0114402);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde0f0() {
   return (neuron0x3dcf300()*0.000318729);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde130() {
   return (neuron0x3dcf640()*0.0111355);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde170() {
   return (neuron0x3dcf980()*-0.0008651);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde1b0() {
   return (neuron0x3dcfcc0()*1.64938);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde530() {
   return (neuron0x3dcb190()*0.00691712);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde570() {
   return (neuron0x3dcb440()*0.0124881);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde5b0() {
   return (neuron0x3dcb780()*3.02297);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde5f0() {
   return (neuron0x3dcbac0()*-0.0371774);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde630() {
   return (neuron0x3dcbe00()*0.0481506);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde670() {
   return (neuron0x3dcc140()*0.0301359);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde6b0() {
   return (neuron0x3dcc480()*0.0484848);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde6f0() {
   return (neuron0x3dcc7c0()*0.0723417);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde730() {
   return (neuron0x3dccb00()*-0.0402611);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde770() {
   return (neuron0x3dcce40()*0.00255639);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde7b0() {
   return (neuron0x3dcd180()*-0.0331453);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde7f0() {
   return (neuron0x3dcd4c0()*0.00208002);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde830() {
   return (neuron0x3dcd800()*0.00869418);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde870() {
   return (neuron0x3dcdb40()*-0.0958675);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde8b0() {
   return (neuron0x3dcde80()*-0.0158393);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde8f0() {
   return (neuron0x3dce1c0()*0.0124311);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde380() {
   return (neuron0x3dce500()*-0.0872484);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde3c0() {
   return (neuron0x3dcea60()*-0.0465713);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddea40() {
   return (neuron0x3dcec80()*-0.0224971);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddea80() {
   return (neuron0x3dcefc0()*0.00695827);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddeac0() {
   return (neuron0x3dcf300()*0.00321047);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddeb00() {
   return (neuron0x3dcf640()*-0.036873);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddeb40() {
   return (neuron0x3dcf980()*-0.0089895);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddeb80() {
   return (neuron0x3dcfcc0()*6.28246);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddef00() {
   return (neuron0x3dcb190()*-0.0235398);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddef40() {
   return (neuron0x3dcb440()*-0.0128391);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddef80() {
   return (neuron0x3dcb780()*0.697824);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddefc0() {
   return (neuron0x3dcbac0()*-0.0201991);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf000() {
   return (neuron0x3dcbe00()*0.0189576);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf040() {
   return (neuron0x3dcc140()*0.0303131);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf080() {
   return (neuron0x3dcc480()*-0.0322157);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf0c0() {
   return (neuron0x3dcc7c0()*0.0425445);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf100() {
   return (neuron0x3dccb00()*0.0309406);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf140() {
   return (neuron0x3dcce40()*-0.0178476);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf180() {
   return (neuron0x3dcd180()*-0.0300994);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf1c0() {
   return (neuron0x3dcd4c0()*-4.19855);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf200() {
   return (neuron0x3dcd800()*0.096381);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf240() {
   return (neuron0x3dcdb40()*-0.0386486);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf280() {
   return (neuron0x3dcde80()*-0.00253658);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf2c0() {
   return (neuron0x3dce1c0()*0.0192822);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dded50() {
   return (neuron0x3dce500()*0.0432583);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dded90() {
   return (neuron0x3dcea60()*0.0141004);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf410() {
   return (neuron0x3dcec80()*0.00164041);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf450() {
   return (neuron0x3dcefc0()*-0.0189464);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf490() {
   return (neuron0x3dcf300()*-0.0122557);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf4d0() {
   return (neuron0x3dcf640()*0.00110587);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf510() {
   return (neuron0x3dcf980()*-0.00173612);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf550() {
   return (neuron0x3dcfcc0()*1.34157);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf8d0() {
   return (neuron0x3dcb190()*0.0537535);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf910() {
   return (neuron0x3dcb440()*-0.012258);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf950() {
   return (neuron0x3dcb780()*-1.16094);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf990() {
   return (neuron0x3dcbac0()*0.112756);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf9d0() {
   return (neuron0x3dcbe00()*0.00940486);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddfa10() {
   return (neuron0x3dcc140()*0.0206928);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddfa50() {
   return (neuron0x3dcc480()*0.010857);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddfa90() {
   return (neuron0x3dcc7c0()*-0.0491842);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddfad0() {
   return (neuron0x3dccb00()*0.0621374);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7c90() {
   return (neuron0x3dcce40()*0.0231112);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7cd0() {
   return (neuron0x3dcd180()*0.065545);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7d10() {
   return (neuron0x3dcd4c0()*0.93147);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7d50() {
   return (neuron0x3dcd800()*0.998757);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7d90() {
   return (neuron0x3dcdb40()*-0.112585);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7dd0() {
   return (neuron0x3dcde80()*0.585986);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7e10() {
   return (neuron0x3dce1c0()*0.638313);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf720() {
   return (neuron0x3dce500()*0.0753882);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf760() {
   return (neuron0x3dcea60()*0.504262);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7f60() {
   return (neuron0x3dcec80()*0.531619);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7fa0() {
   return (neuron0x3dcefc0()*0.0155831);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7fe0() {
   return (neuron0x3dcf300()*-0.0268011);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8020() {
   return (neuron0x3dcf640()*0.0436096);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8060() {
   return (neuron0x3dcf980()*0.0310885);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd80a0() {
   return (neuron0x3dcfcc0()*-0.177746);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8420() {
   return (neuron0x3dcb190()*-0.00657663);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8460() {
   return (neuron0x3dcb440()*-28.0802);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd84a0() {
   return (neuron0x3dcb780()*-4.38145);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd84e0() {
   return (neuron0x3dcbac0()*0.0113783);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8520() {
   return (neuron0x3dcbe00()*-0.0740176);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8560() {
   return (neuron0x3dcc140()*-0.041579);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd85a0() {
   return (neuron0x3dcc480()*-0.00772475);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd85e0() {
   return (neuron0x3dcc7c0()*-0.00280299);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8620() {
   return (neuron0x3dccb00()*0.012015);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8660() {
   return (neuron0x3dcce40()*0.00928689);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd86a0() {
   return (neuron0x3dcd180()*0.0372999);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd86e0() {
   return (neuron0x3dcd4c0()*0.0621685);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8720() {
   return (neuron0x3dcd800()*-0.0774029);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8760() {
   return (neuron0x3dcdb40()*-0.020452);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd87a0() {
   return (neuron0x3dcde80()*0.0532519);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd87e0() {
   return (neuron0x3dce1c0()*0.0932981);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8270() {
   return (neuron0x3dce500()*0.0606877);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd82b0() {
   return (neuron0x3dcea60()*0.0649725);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8930() {
   return (neuron0x3dcec80()*-0.00781517);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8970() {
   return (neuron0x3dcefc0()*-0.0390028);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd89b0() {
   return (neuron0x3dcf300()*0.0610904);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd89f0() {
   return (neuron0x3dcf640()*-0.00877679);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8a30() {
   return (neuron0x3dcf980()*-0.0163271);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8a70() {
   return (neuron0x3dcfcc0()*-0.557669);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8c40() {
   return (neuron0x3dcb190()*0.0673758);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1cd0() {
   return (neuron0x3dcb440()*0.0128285);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1d10() {
   return (neuron0x3dcb780()*-3.52323);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1d50() {
   return (neuron0x3dcbac0()*0.061615);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1d90() {
   return (neuron0x3dcbe00()*-0.0326921);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1dd0() {
   return (neuron0x3dcc140()*-0.0010557);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1e10() {
   return (neuron0x3dcc480()*-0.0321936);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1e50() {
   return (neuron0x3dcc7c0()*-0.0702397);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1e90() {
   return (neuron0x3dccb00()*0.0261306);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1ed0() {
   return (neuron0x3dcce40()*0.00160139);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1f10() {
   return (neuron0x3dcd180()*0.0501206);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1f50() {
   return (neuron0x3dcd4c0()*0.446644);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1f90() {
   return (neuron0x3dcd800()*-0.0553101);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1fd0() {
   return (neuron0x3dcdb40()*0.0506118);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2010() {
   return (neuron0x3dcde80()*0.0239034);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2050() {
   return (neuron0x3dce1c0()*-0.0326008);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1b20() {
   return (neuron0x3dce500()*0.0904977);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1b60() {
   return (neuron0x3dcea60()*0.0309829);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de21a0() {
   return (neuron0x3dcec80()*-0.0270193);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de21e0() {
   return (neuron0x3dcefc0()*0.0468267);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2220() {
   return (neuron0x3dcf300()*-0.000661364);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2260() {
   return (neuron0x3dcf640()*0.00636171);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de22a0() {
   return (neuron0x3dcf980()*-0.00257769);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de22e0() {
   return (neuron0x3dcfcc0()*-6.73546);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2660() {
   return (neuron0x3dcb190()*-0.034787);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de26a0() {
   return (neuron0x3dcb440()*0.0495212);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de26e0() {
   return (neuron0x3dcb780()*-1.60708);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2720() {
   return (neuron0x3dcbac0()*0.000711757);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2760() {
   return (neuron0x3dcbe00()*0.0180032);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de27a0() {
   return (neuron0x3dcc140()*0.0509562);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de27e0() {
   return (neuron0x3dcc480()*0.0116416);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2820() {
   return (neuron0x3dcc7c0()*0.00928324);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2860() {
   return (neuron0x3dccb00()*-0.0438818);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de28a0() {
   return (neuron0x3dcce40()*0.0962996);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de28e0() {
   return (neuron0x3dcd180()*0.0669539);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2920() {
   return (neuron0x3dcd4c0()*3.91345);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2960() {
   return (neuron0x3dcd800()*0.20274);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de29a0() {
   return (neuron0x3dcdb40()*0.0548281);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de29e0() {
   return (neuron0x3dcde80()*-0.141901);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2a20() {
   return (neuron0x3dce1c0()*0.00054998);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de24b0() {
   return (neuron0x3dce500()*-0.155687);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de24f0() {
   return (neuron0x3dcea60()*0.0473249);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2b70() {
   return (neuron0x3dcec80()*-0.0303813);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2bb0() {
   return (neuron0x3dcefc0()*0.00367959);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2bf0() {
   return (neuron0x3dcf300()*0.0586354);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2c30() {
   return (neuron0x3dcf640()*0.0122173);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2c70() {
   return (neuron0x3dcf980()*-0.0222112);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2cb0() {
   return (neuron0x3dcfcc0()*0.997199);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3030() {
   return (neuron0x3dcb190()*0.289104);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3070() {
   return (neuron0x3dcb440()*-0.158951);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de30b0() {
   return (neuron0x3dcb780()*0.299923);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de30f0() {
   return (neuron0x3dcbac0()*-0.0199166);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3130() {
   return (neuron0x3dcbe00()*-0.451423);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3170() {
   return (neuron0x3dcc140()*0.61501);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de31b0() {
   return (neuron0x3dcc480()*-0.0976588);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de31f0() {
   return (neuron0x3dcc7c0()*-0.12228);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3230() {
   return (neuron0x3dccb00()*0.0224137);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3270() {
   return (neuron0x3dcce40()*0.11555);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de32b0() {
   return (neuron0x3dcd180()*-0.201101);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de32f0() {
   return (neuron0x3dcd4c0()*0.580326);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3330() {
   return (neuron0x3dcd800()*0.0643399);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3370() {
   return (neuron0x3dcdb40()*0.846471);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de33b0() {
   return (neuron0x3dcde80()*0.121396);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de33f0() {
   return (neuron0x3dce1c0()*-0.394071);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2e80() {
   return (neuron0x3dce500()*0.0577269);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2ec0() {
   return (neuron0x3dcea60()*-0.0437986);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3540() {
   return (neuron0x3dcec80()*-0.306435);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3580() {
   return (neuron0x3dcefc0()*0.0791528);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de35c0() {
   return (neuron0x3dcf300()*0.308361);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3600() {
   return (neuron0x3dcf640()*0.199194);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3640() {
   return (neuron0x3dcf980()*-0.0587261);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3680() {
   return (neuron0x3dcfcc0()*-0.228447);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3a00() {
   return (neuron0x3dcb190()*-0.0141712);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3a40() {
   return (neuron0x3dcb440()*0.00916833);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3a80() {
   return (neuron0x3dcb780()*-1.61726);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3ac0() {
   return (neuron0x3dcbac0()*0.0146541);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3b00() {
   return (neuron0x3dcbe00()*-0.0052016);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3b40() {
   return (neuron0x3dcc140()*0.0105817);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3b80() {
   return (neuron0x3dcc480()*-0.0277247);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3bc0() {
   return (neuron0x3dcc7c0()*0.00446103);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3c00() {
   return (neuron0x3dccb00()*-0.0224222);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3c40() {
   return (neuron0x3dcce40()*0.0135575);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3c80() {
   return (neuron0x3dcd180()*0.028095);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3cc0() {
   return (neuron0x3dcd4c0()*0.20868);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3d00() {
   return (neuron0x3dcd800()*-0.0877118);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3d40() {
   return (neuron0x3dcdb40()*0.0201697);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3d80() {
   return (neuron0x3dcde80()*0.00547326);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3dc0() {
   return (neuron0x3dce1c0()*0.028607);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3850() {
   return (neuron0x3dce500()*0.061082);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3890() {
   return (neuron0x3dcea60()*0.00570762);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3f10() {
   return (neuron0x3dcec80()*-0.0192436);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3f50() {
   return (neuron0x3dcefc0()*0.0217591);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3f90() {
   return (neuron0x3dcf300()*0.000690635);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3fd0() {
   return (neuron0x3dcf640()*4.44555e-05);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4010() {
   return (neuron0x3dcf980()*-0.021741);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4050() {
   return (neuron0x3dcfcc0()*-2.61655);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de43d0() {
   return (neuron0x3dcb190()*-0.00503196);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4410() {
   return (neuron0x3dcb440()*-0.00563804);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4450() {
   return (neuron0x3dcb780()*-0.998819);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4490() {
   return (neuron0x3dcbac0()*0.0157408);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de44d0() {
   return (neuron0x3dcbe00()*0.00707509);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4510() {
   return (neuron0x3dcc140()*-0.000305635);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4550() {
   return (neuron0x3dcc480()*-0.00522678);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4590() {
   return (neuron0x3dcc7c0()*-0.00335574);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de45d0() {
   return (neuron0x3dccb00()*-0.0053627);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4610() {
   return (neuron0x3dcce40()*-0.0175551);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4650() {
   return (neuron0x3dcd180()*-0.00116598);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4690() {
   return (neuron0x3dcd4c0()*0.106301);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de46d0() {
   return (neuron0x3dcd800()*0.0347022);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4710() {
   return (neuron0x3dcdb40()*-0.00928253);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4750() {
   return (neuron0x3dcde80()*0.0149586);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4790() {
   return (neuron0x3dce1c0()*0.00858586);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4220() {
   return (neuron0x3dce500()*0.00831046);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4260() {
   return (neuron0x3dcea60()*0.00292663);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de48e0() {
   return (neuron0x3dcec80()*0.0151047);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4920() {
   return (neuron0x3dcefc0()*0.0122967);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4960() {
   return (neuron0x3dcf300()*-0.0148806);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de49a0() {
   return (neuron0x3dcf640()*-0.0167046);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de49e0() {
   return (neuron0x3dcf980()*-0.000135935);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4a20() {
   return (neuron0x3dcfcc0()*0.697152);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4da0() {
   return (neuron0x3dcb190()*0.179089);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4de0() {
   return (neuron0x3dcb440()*-0.056837);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4e20() {
   return (neuron0x3dcb780()*0.184486);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4e60() {
   return (neuron0x3dcbac0()*-0.240544);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4ea0() {
   return (neuron0x3dcbe00()*0.602262);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4ee0() {
   return (neuron0x3dcc140()*-0.0161703);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4f20() {
   return (neuron0x3dcc480()*0.150751);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4f60() {
   return (neuron0x3dcc7c0()*-0.259347);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4fa0() {
   return (neuron0x3dccb00()*0.100987);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4fe0() {
   return (neuron0x3dcce40()*-0.0723438);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5020() {
   return (neuron0x3dcd180()*-0.315014);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5060() {
   return (neuron0x3dcd4c0()*0.12172);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de50a0() {
   return (neuron0x3dcd800()*-0.46768);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de50e0() {
   return (neuron0x3dcdb40()*0.0462515);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5120() {
   return (neuron0x3dcde80()*-0.830178);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5160() {
   return (neuron0x3dce1c0()*0.230367);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4bf0() {
   return (neuron0x3dce500()*0.0833534);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4c30() {
   return (neuron0x3dcea60()*-0.0101276);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de52b0() {
   return (neuron0x3dcec80()*-0.0344626);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de52f0() {
   return (neuron0x3dcefc0()*0.0803124);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5330() {
   return (neuron0x3dcf300()*-0.177256);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5370() {
   return (neuron0x3dcf640()*-0.00608095);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de53b0() {
   return (neuron0x3dcf980()*-0.0654506);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de53f0() {
   return (neuron0x3dcfcc0()*-0.0251388);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5770() {
   return (neuron0x3dcb190()*0.115329);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de57b0() {
   return (neuron0x3dcb440()*0.0695482);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de57f0() {
   return (neuron0x3dcb780()*-0.460465);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5830() {
   return (neuron0x3dcbac0()*-0.765859);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5870() {
   return (neuron0x3dcbe00()*0.141227);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de58b0() {
   return (neuron0x3dcc140()*0.406599);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de58f0() {
   return (neuron0x3dcc480()*-0.821559);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5930() {
   return (neuron0x3dcc7c0()*0.628281);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5970() {
   return (neuron0x3dccb00()*0.420165);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de59b0() {
   return (neuron0x3dcce40()*0.314841);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de59f0() {
   return (neuron0x3dcd180()*-0.170236);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5a30() {
   return (neuron0x3dcd4c0()*-0.590039);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5a70() {
   return (neuron0x3dcd800()*0.0581902);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5ab0() {
   return (neuron0x3dcdb40()*-0.289325);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5af0() {
   return (neuron0x3dcde80()*0.0840678);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5b30() {
   return (neuron0x3dce1c0()*-0.538383);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de55c0() {
   return (neuron0x3dce500()*-0.00206593);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5600() {
   return (neuron0x3dcea60()*0.282587);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5c80() {
   return (neuron0x3dcec80()*0.0686442);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5cc0() {
   return (neuron0x3dcefc0()*-0.0392002);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5d00() {
   return (neuron0x3dcf300()*-0.0244912);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5d40() {
   return (neuron0x3dcf640()*-0.0283283);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5d80() {
   return (neuron0x3dcf980()*-0.341007);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5dc0() {
   return (neuron0x3dcfcc0()*-0.685327);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6140() {
   return (neuron0x3dcb190()*0.0415131);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6180() {
   return (neuron0x3dcb440()*0.0998416);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de61c0() {
   return (neuron0x3dcb780()*0.241637);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6200() {
   return (neuron0x3dcbac0()*0.150513);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6240() {
   return (neuron0x3dcbe00()*0.0479232);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6280() {
   return (neuron0x3dcc140()*-0.0675002);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de62c0() {
   return (neuron0x3dcc480()*0.0937302);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6300() {
   return (neuron0x3dcc7c0()*0.0482167);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6340() {
   return (neuron0x3dccb00()*0.00503878);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6380() {
   return (neuron0x3dcce40()*-0.127992);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de63c0() {
   return (neuron0x3dcd180()*-0.0192221);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6400() {
   return (neuron0x3dcd4c0()*-1.0737);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6440() {
   return (neuron0x3dcd800()*-0.729568);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6480() {
   return (neuron0x3dcdb40()*-0.278978);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de64c0() {
   return (neuron0x3dcde80()*-0.129467);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6500() {
   return (neuron0x3dce1c0()*-0.202615);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5f90() {
   return (neuron0x3dce500()*-0.12135);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de5fd0() {
   return (neuron0x3dcea60()*-0.265755);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6650() {
   return (neuron0x3dcec80()*-0.242095);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6690() {
   return (neuron0x3dcefc0()*0.124682);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de66d0() {
   return (neuron0x3dcf300()*-0.244029);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6710() {
   return (neuron0x3dcf640()*-0.00230612);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6750() {
   return (neuron0x3dcf980()*0.0318673);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6790() {
   return (neuron0x3dcfcc0()*-0.21079);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6b10() {
   return (neuron0x3dcb190()*-0.0410603);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddb0e0() {
   return (neuron0x3dcb440()*-0.00284218);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddb120() {
   return (neuron0x3dcb780()*-2.62597);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddb160() {
   return (neuron0x3dcbac0()*0.0656435);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddb3b0() {
   return (neuron0x3dcbe00()*-0.08998);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddb3f0() {
   return (neuron0x3dcc140()*-0.00280981);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddb430() {
   return (neuron0x3dcc480()*-0.110091);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddb680() {
   return (neuron0x3dcc7c0()*-0.0921789);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddb6c0() {
   return (neuron0x3dccb00()*0.141198);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddb910() {
   return (neuron0x3dcce40()*0.0152182);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddb950() {
   return (neuron0x3dcd180()*0.00495036);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddb990() {
   return (neuron0x3dcd4c0()*0.902675);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddbbe0() {
   return (neuron0x3dcd800()*-0.00619001);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddbc20() {
   return (neuron0x3dcdb40()*0.000211534);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddbe70() {
   return (neuron0x3dcde80()*-0.0442829);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddbeb0() {
   return (neuron0x3dce1c0()*0.0119541);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6960() {
   return (neuron0x3dce500()*0.079855);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de69a0() {
   return (neuron0x3dcea60()*0.051821);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddc000() {
   return (neuron0x3dcec80()*0.0070544);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddc510() {
   return (neuron0x3dcefc0()*0.0135169);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddc550() {
   return (neuron0x3dcf300()*0.00713272);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddc590() {
   return (neuron0x3dcf640()*-0.0465852);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddc7e0() {
   return (neuron0x3dcf980()*-0.0164031);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddc820() {
   return (neuron0x3dcfcc0()*-2.21082);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddc0d0() {
   return (neuron0x3dcb190()*-0.0362406);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddc110() {
   return (neuron0x3dcb440()*0.0228702);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddc150() {
   return (neuron0x3dcb780()*0.668092);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddc190() {
   return (neuron0x3dcbac0()*-0.0508563);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddcb10() {
   return (neuron0x3dcbe00()*-0.00548484);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de8e60() {
   return (neuron0x3dcc140()*0.0171055);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de8ea0() {
   return (neuron0x3dcc480()*-0.045003);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de8ee0() {
   return (neuron0x3dcc7c0()*0.0190077);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de8f20() {
   return (neuron0x3dccb00()*0.0231722);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de8f60() {
   return (neuron0x3dcce40()*0.0338857);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de8fa0() {
   return (neuron0x3dcd180()*0.00940327);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de8fe0() {
   return (neuron0x3dcd4c0()*-0.120126);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9020() {
   return (neuron0x3dcd800()*0.0357905);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9060() {
   return (neuron0x3dcdb40()*0.0679265);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de90a0() {
   return (neuron0x3dcde80()*-0.031198);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de90e0() {
   return (neuron0x3dce1c0()*0.00610837);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddc9f0() {
   return (neuron0x3dce500()*-0.00590627);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddca30() {
   return (neuron0x3dcea60()*-0.00476756);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9230() {
   return (neuron0x3dcec80()*0.0244845);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9270() {
   return (neuron0x3dcefc0()*0.002255);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de92b0() {
   return (neuron0x3dcf300()*0.0387727);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de92f0() {
   return (neuron0x3dcf640()*0.0149318);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9330() {
   return (neuron0x3dcf980()*-0.03637);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9370() {
   return (neuron0x3dcfcc0()*-0.553631);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de96f0() {
   return (neuron0x3dcb190()*-0.0253407);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9730() {
   return (neuron0x3dcb440()*-0.00793177);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9770() {
   return (neuron0x3dcb780()*2.79365);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de97b0() {
   return (neuron0x3dcbac0()*-0.0205061);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de97f0() {
   return (neuron0x3dcbe00()*-0.00644618);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9830() {
   return (neuron0x3dcc140()*0.00651872);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9870() {
   return (neuron0x3dcc480()*0.0237595);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de98b0() {
   return (neuron0x3dcc7c0()*-0.0216252);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de98f0() {
   return (neuron0x3dccb00()*0.00550781);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9930() {
   return (neuron0x3dcce40()*-0.0213681);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9970() {
   return (neuron0x3dcd180()*0.0207696);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de99b0() {
   return (neuron0x3dcd4c0()*0.0337662);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de99f0() {
   return (neuron0x3dcd800()*0.0469755);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9a30() {
   return (neuron0x3dcdb40()*-0.0349457);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9a70() {
   return (neuron0x3dcde80()*-0.0128871);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9ab0() {
   return (neuron0x3dce1c0()*-0.0340246);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9540() {
   return (neuron0x3dce500()*-0.0632369);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9580() {
   return (neuron0x3dcea60()*-0.013941);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9c00() {
   return (neuron0x3dcec80()*-0.0291801);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9c40() {
   return (neuron0x3dcefc0()*-0.0194495);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9c80() {
   return (neuron0x3dcf300()*0.00385166);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9cc0() {
   return (neuron0x3dcf640()*-0.0174892);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9d00() {
   return (neuron0x3dcf980()*-0.0116965);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9d40() {
   return (neuron0x3dcfcc0()*-6.29563);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea0c0() {
   return (neuron0x3dcb190()*-0.00778076);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea100() {
   return (neuron0x3dcb440()*0.00568267);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea140() {
   return (neuron0x3dcb780()*-0.694017);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea180() {
   return (neuron0x3dcbac0()*0.0644681);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea1c0() {
   return (neuron0x3dcbe00()*-0.074031);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea200() {
   return (neuron0x3dcc140()*-0.028663);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea240() {
   return (neuron0x3dcc480()*0.0395069);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea280() {
   return (neuron0x3dcc7c0()*0.0394964);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea2c0() {
   return (neuron0x3dccb00()*0.0724637);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea300() {
   return (neuron0x3dcce40()*0.00141372);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea340() {
   return (neuron0x3dcd180()*0.0241165);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea380() {
   return (neuron0x3dcd4c0()*5.77368);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea3c0() {
   return (neuron0x3dcd800()*-0.185415);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea400() {
   return (neuron0x3dcdb40()*-0.1066);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea440() {
   return (neuron0x3dcde80()*0.0348594);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea480() {
   return (neuron0x3dce1c0()*-0.0797529);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9f10() {
   return (neuron0x3dce500()*-0.030703);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9f50() {
   return (neuron0x3dcea60()*-0.032884);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea5d0() {
   return (neuron0x3dcec80()*-0.00958695);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea610() {
   return (neuron0x3dcefc0()*-0.00033418);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea650() {
   return (neuron0x3dcf300()*-0.000724406);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea690() {
   return (neuron0x3dcf640()*0.0145566);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea6d0() {
   return (neuron0x3dcf980()*0.00844395);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea710() {
   return (neuron0x3dcfcc0()*0.757143);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deaa90() {
   return (neuron0x3dcb190()*0.0204238);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deaad0() {
   return (neuron0x3dcb440()*0.0230677);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deab10() {
   return (neuron0x3dcb780()*1.10121);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deab50() {
   return (neuron0x3dcbac0()*0.0157092);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deab90() {
   return (neuron0x3dcbe00()*-0.0158127);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deabd0() {
   return (neuron0x3dcc140()*0.00716986);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deac10() {
   return (neuron0x3dcc480()*0.0134704);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deac50() {
   return (neuron0x3dcc7c0()*0.00904247);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deac90() {
   return (neuron0x3dccb00()*-0.0308461);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deacd0() {
   return (neuron0x3dcce40()*0.00902061);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dead10() {
   return (neuron0x3dcd180()*0.0379115);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dead50() {
   return (neuron0x3dcd4c0()*-2.70381);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dead90() {
   return (neuron0x3dcd800()*0.00867792);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deadd0() {
   return (neuron0x3dcdb40()*0.0816409);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deae10() {
   return (neuron0x3dcde80()*0.03419);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deae50() {
   return (neuron0x3dce1c0()*0.0254695);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea8e0() {
   return (neuron0x3dce500()*-0.0346662);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea920() {
   return (neuron0x3dcea60()*0.0485095);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deafa0() {
   return (neuron0x3dcec80()*0.0419671);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deafe0() {
   return (neuron0x3dcefc0()*0.0320387);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb020() {
   return (neuron0x3dcf300()*0.00602462);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb060() {
   return (neuron0x3dcf640()*-0.0157203);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb0a0() {
   return (neuron0x3dcf980()*-0.0062364);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb0e0() {
   return (neuron0x3dcfcc0()*-1.46382);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb460() {
   return (neuron0x3dcb190()*0.029793);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb4a0() {
   return (neuron0x3dcb440()*0.0536029);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb4e0() {
   return (neuron0x3dcb780()*-0.254974);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb520() {
   return (neuron0x3dcbac0()*0.0486497);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb560() {
   return (neuron0x3dcbe00()*-0.012593);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb5a0() {
   return (neuron0x3dcc140()*0.0675814);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb5e0() {
   return (neuron0x3dcc480()*0.017835);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb620() {
   return (neuron0x3dcc7c0()*-0.0146286);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb660() {
   return (neuron0x3dccb00()*0.0246565);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb6a0() {
   return (neuron0x3dcce40()*0.0174166);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb6e0() {
   return (neuron0x3dcd180()*0.0370208);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb720() {
   return (neuron0x3dcd4c0()*-3.94914);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb760() {
   return (neuron0x3dcd800()*0.0631533);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb7a0() {
   return (neuron0x3dcdb40()*0.0405602);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb7e0() {
   return (neuron0x3dcde80()*-0.022204);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb820() {
   return (neuron0x3dce1c0()*-8.85062e-05);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb2b0() {
   return (neuron0x3dce500()*-0.020722);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb2f0() {
   return (neuron0x3dcea60()*0.0375335);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb970() {
   return (neuron0x3dcec80()*-0.0469693);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb9b0() {
   return (neuron0x3dcefc0()*0.0235355);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb9f0() {
   return (neuron0x3dcf300()*-0.00429191);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deba30() {
   return (neuron0x3dcf640()*0.0255585);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deba70() {
   return (neuron0x3dcf980()*0.000569889);
}

double NNfunction_nn_chi3_charge2m::synapse0x3debab0() {
   return (neuron0x3dcfcc0()*-2.50469);
}

double NNfunction_nn_chi3_charge2m::synapse0x3debe30() {
   return (neuron0x3dcb190()*0.0361017);
}

double NNfunction_nn_chi3_charge2m::synapse0x3debe70() {
   return (neuron0x3dcb440()*-0.031325);
}

double NNfunction_nn_chi3_charge2m::synapse0x3debeb0() {
   return (neuron0x3dcb780()*-0.284144);
}

double NNfunction_nn_chi3_charge2m::synapse0x3debef0() {
   return (neuron0x3dcbac0()*-2.67498);
}

double NNfunction_nn_chi3_charge2m::synapse0x3debf30() {
   return (neuron0x3dcbe00()*-0.0191622);
}

double NNfunction_nn_chi3_charge2m::synapse0x3debf70() {
   return (neuron0x3dcc140()*-0.0513238);
}

double NNfunction_nn_chi3_charge2m::synapse0x3debfb0() {
   return (neuron0x3dcc480()*0.0232041);
}

double NNfunction_nn_chi3_charge2m::synapse0x3debff0() {
   return (neuron0x3dcc7c0()*0.00296255);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec030() {
   return (neuron0x3dccb00()*-0.0213642);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec070() {
   return (neuron0x3dcce40()*-0.0325222);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec0b0() {
   return (neuron0x3dcd180()*0.0666218);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec0f0() {
   return (neuron0x3dcd4c0()*-0.989442);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec130() {
   return (neuron0x3dcd800()*0.0444883);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec170() {
   return (neuron0x3dcdb40()*0.0951788);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec1b0() {
   return (neuron0x3dcde80()*0.0545759);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec1f0() {
   return (neuron0x3dce1c0()*0.0138163);
}

double NNfunction_nn_chi3_charge2m::synapse0x3debc80() {
   return (neuron0x3dce500()*-0.082091);
}

double NNfunction_nn_chi3_charge2m::synapse0x3debcc0() {
   return (neuron0x3dcea60()*0.0270776);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec340() {
   return (neuron0x3dcec80()*0.032226);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec380() {
   return (neuron0x3dcefc0()*-0.00750878);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec3c0() {
   return (neuron0x3dcf300()*0.0467855);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec400() {
   return (neuron0x3dcf640()*0.0177658);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec440() {
   return (neuron0x3dcf980()*0.0155403);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec480() {
   return (neuron0x3dcfcc0()*-0.422889);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec800() {
   return (neuron0x3dcb190()*-0.0244064);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec840() {
   return (neuron0x3dcb440()*0.00804884);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec880() {
   return (neuron0x3dcb780()*0.127274);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec8c0() {
   return (neuron0x3dcbac0()*-2.00303);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec900() {
   return (neuron0x3dcbe00()*0.057303);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec940() {
   return (neuron0x3dcc140()*-0.0877594);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec980() {
   return (neuron0x3dcc480()*-0.0734458);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec9c0() {
   return (neuron0x3dcc7c0()*-0.022527);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deca00() {
   return (neuron0x3dccb00()*-0.0198914);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deca40() {
   return (neuron0x3dcce40()*-0.0576741);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deca80() {
   return (neuron0x3dcd180()*-0.0507235);
}

double NNfunction_nn_chi3_charge2m::synapse0x3decac0() {
   return (neuron0x3dcd4c0()*2.88317);
}

double NNfunction_nn_chi3_charge2m::synapse0x3decb00() {
   return (neuron0x3dcd800()*0.0301047);
}

double NNfunction_nn_chi3_charge2m::synapse0x3decb40() {
   return (neuron0x3dcdb40()*0.124162);
}

double NNfunction_nn_chi3_charge2m::synapse0x3decb80() {
   return (neuron0x3dcde80()*-0.0363908);
}

double NNfunction_nn_chi3_charge2m::synapse0x3decbc0() {
   return (neuron0x3dce1c0()*-0.0724463);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec650() {
   return (neuron0x3dce500()*0.112083);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec690() {
   return (neuron0x3dcea60()*0.0137205);
}

double NNfunction_nn_chi3_charge2m::synapse0x3decd10() {
   return (neuron0x3dcec80()*-0.088182);
}

double NNfunction_nn_chi3_charge2m::synapse0x3decd50() {
   return (neuron0x3dcefc0()*-0.000517589);
}

double NNfunction_nn_chi3_charge2m::synapse0x3decd90() {
   return (neuron0x3dcf300()*0.0773141);
}

double NNfunction_nn_chi3_charge2m::synapse0x3decdd0() {
   return (neuron0x3dcf640()*-0.0661961);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dece10() {
   return (neuron0x3dcf980()*0.0470327);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dece50() {
   return (neuron0x3dcfcc0()*0.0310066);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded1d0() {
   return (neuron0x3dcb190()*-0.717481);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded210() {
   return (neuron0x3dcb440()*0.609203);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded250() {
   return (neuron0x3dcb780()*-0.000774631);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded290() {
   return (neuron0x3dcbac0()*-0.887449);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded2d0() {
   return (neuron0x3dcbe00()*0.635988);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded310() {
   return (neuron0x3dcc140()*0.145472);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded350() {
   return (neuron0x3dcc480()*0.168545);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded390() {
   return (neuron0x3dcc7c0()*0.424804);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded3d0() {
   return (neuron0x3dccb00()*-0.401163);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded410() {
   return (neuron0x3dcce40()*-0.241179);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded450() {
   return (neuron0x3dcd180()*0.870214);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded490() {
   return (neuron0x3dcd4c0()*-0.874532);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded4d0() {
   return (neuron0x3dcd800()*0.0759231);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded510() {
   return (neuron0x3dcdb40()*-0.306129);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded550() {
   return (neuron0x3dcde80()*0.131282);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded590() {
   return (neuron0x3dce1c0()*0.57226);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded020() {
   return (neuron0x3dce500()*-0.00401832);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded060() {
   return (neuron0x3dcea60()*0.468316);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded6e0() {
   return (neuron0x3dcec80()*0.0865675);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded720() {
   return (neuron0x3dcefc0()*-0.551976);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded760() {
   return (neuron0x3dcf300()*-0.142339);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded7a0() {
   return (neuron0x3dcf640()*-0.875657);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded7e0() {
   return (neuron0x3dcf980()*0.196577);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded820() {
   return (neuron0x3dcfcc0()*0.389093);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd62d0() {
   return (neuron0x3dcb190()*0.0435203);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6310() {
   return (neuron0x3dcb440()*-0.015379);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6350() {
   return (neuron0x3dcb780()*-1.59491);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6390() {
   return (neuron0x3dcbac0()*0.0900345);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd63d0() {
   return (neuron0x3dcbe00()*0.0332428);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6410() {
   return (neuron0x3dcc140()*0.0113037);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6450() {
   return (neuron0x3dcc480()*-0.000572239);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6490() {
   return (neuron0x3dcc7c0()*-0.0340837);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dedfb0() {
   return (neuron0x3dccb00()*0.0737743);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dedff0() {
   return (neuron0x3dcce40()*0.0262453);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee030() {
   return (neuron0x3dcd180()*0.0732957);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee070() {
   return (neuron0x3dcd4c0()*1.28888);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee0b0() {
   return (neuron0x3dcd800()*1.41129);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee0f0() {
   return (neuron0x3dcdb40()*-0.124005);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee130() {
   return (neuron0x3dcde80()*0.707667);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee170() {
   return (neuron0x3dce1c0()*0.792744);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded9f0() {
   return (neuron0x3dce500()*0.0805297);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deda30() {
   return (neuron0x3dcea60()*0.616566);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee2c0() {
   return (neuron0x3dcec80()*0.654075);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee300() {
   return (neuron0x3dcefc0()*-0.0121525);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee340() {
   return (neuron0x3dcf300()*0.00101687);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee380() {
   return (neuron0x3dcf640()*0.0546626);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee3c0() {
   return (neuron0x3dcf980()*0.0341052);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee400() {
   return (neuron0x3dcfcc0()*-0.20842);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee780() {
   return (neuron0x3dcb190()*-0.0110096);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee7c0() {
   return (neuron0x3dcb440()*-0.00723142);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee800() {
   return (neuron0x3dcb780()*0.0267178);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee840() {
   return (neuron0x3dcbac0()*1.67512);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee880() {
   return (neuron0x3dcbe00()*0.0739126);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee8c0() {
   return (neuron0x3dcc140()*-0.0805367);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee900() {
   return (neuron0x3dcc480()*-0.0953109);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee940() {
   return (neuron0x3dcc7c0()*0.0496757);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee980() {
   return (neuron0x3dccb00()*-0.124256);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee9c0() {
   return (neuron0x3dcce40()*0.00184577);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deea00() {
   return (neuron0x3dcd180()*-0.0758991);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deea40() {
   return (neuron0x3dcd4c0()*0.980559);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deea80() {
   return (neuron0x3dcd800()*0.187086);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deeac0() {
   return (neuron0x3dcdb40()*-0.0697943);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deeb00() {
   return (neuron0x3dcde80()*-0.0791738);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deeb40() {
   return (neuron0x3dce1c0()*0.0234751);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee5d0() {
   return (neuron0x3dce500()*0.11895);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee610() {
   return (neuron0x3dcea60()*0.0869406);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deec90() {
   return (neuron0x3dcec80()*0.0041044);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deecd0() {
   return (neuron0x3dcefc0()*-0.0448078);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deed10() {
   return (neuron0x3dcf300()*-0.0531982);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deed50() {
   return (neuron0x3dcf640()*-0.0380153);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deed90() {
   return (neuron0x3dcf980()*-0.0317617);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deedd0() {
   return (neuron0x3dcfcc0()*0.193759);
}

double NNfunction_nn_chi3_charge2m::synapse0x3def150() {
   return (neuron0x3dcb190()*-0.495274);
}

double NNfunction_nn_chi3_charge2m::synapse0x3def190() {
   return (neuron0x3dcb440()*0.668976);
}

double NNfunction_nn_chi3_charge2m::synapse0x3def1d0() {
   return (neuron0x3dcb780()*1.78421);
}

double NNfunction_nn_chi3_charge2m::synapse0x3def210() {
   return (neuron0x3dcbac0()*-0.385997);
}

double NNfunction_nn_chi3_charge2m::synapse0x3def250() {
   return (neuron0x3dcbe00()*-0.14815);
}

double NNfunction_nn_chi3_charge2m::synapse0x3def290() {
   return (neuron0x3dcc140()*0.496566);
}

double NNfunction_nn_chi3_charge2m::synapse0x3def2d0() {
   return (neuron0x3dcc480()*-0.498722);
}

double NNfunction_nn_chi3_charge2m::synapse0x3def310() {
   return (neuron0x3dcc7c0()*0.0428907);
}

double NNfunction_nn_chi3_charge2m::synapse0x3def350() {
   return (neuron0x3dccb00()*0.668863);
}

double NNfunction_nn_chi3_charge2m::synapse0x3def390() {
   return (neuron0x3dcce40()*-0.31641);
}

double NNfunction_nn_chi3_charge2m::synapse0x3def3d0() {
   return (neuron0x3dcd180()*0.130329);
}

double NNfunction_nn_chi3_charge2m::synapse0x3def410() {
   return (neuron0x3dcd4c0()*0.799835);
}

double NNfunction_nn_chi3_charge2m::synapse0x3def450() {
   return (neuron0x3dcd800()*-0.301814);
}

double NNfunction_nn_chi3_charge2m::synapse0x3def490() {
   return (neuron0x3dcdb40()*-1.55755);
}

double NNfunction_nn_chi3_charge2m::synapse0x3def4d0() {
   return (neuron0x3dcde80()*0.450006);
}

double NNfunction_nn_chi3_charge2m::synapse0x3def510() {
   return (neuron0x3dce1c0()*1.07007);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deefa0() {
   return (neuron0x3dce500()*0.218944);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deefe0() {
   return (neuron0x3dcea60()*0.208937);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddfb10() {
   return (neuron0x3dcec80()*-0.259032);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddfb50() {
   return (neuron0x3dcefc0()*-0.640274);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddfb90() {
   return (neuron0x3dcf300()*0.268184);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddfbd0() {
   return (neuron0x3dcf640()*1.1255);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddfc10() {
   return (neuron0x3dcf980()*-0.35404);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddfc50() {
   return (neuron0x3dcfcc0()*-0.953834);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddffd0() {
   return (neuron0x3dcb190()*-0.00793387);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0010() {
   return (neuron0x3dcb440()*0.00199326);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0050() {
   return (neuron0x3dcb780()*-0.465264);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0090() {
   return (neuron0x3dcbac0()*0.00504975);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de00d0() {
   return (neuron0x3dcbe00()*-0.0029234);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0110() {
   return (neuron0x3dcc140()*0.00287481);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0150() {
   return (neuron0x3dcc480()*0.00196359);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0190() {
   return (neuron0x3dcc7c0()*0.0036796);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de01d0() {
   return (neuron0x3dccb00()*-0.00187371);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0210() {
   return (neuron0x3dcce40()*-0.00223652);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0250() {
   return (neuron0x3dcd180()*0.00741357);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0290() {
   return (neuron0x3dcd4c0()*0.0650701);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de02d0() {
   return (neuron0x3dcd800()*-0.0062501);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0310() {
   return (neuron0x3dcdb40()*-0.00534754);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0350() {
   return (neuron0x3dcde80()*0.0148707);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0390() {
   return (neuron0x3dce1c0()*0.00235239);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddfe20() {
   return (neuron0x3dce500()*0.0108302);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddfe60() {
   return (neuron0x3dcea60()*-0.00538976);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de04e0() {
   return (neuron0x3dcec80()*0.000275875);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0520() {
   return (neuron0x3dcefc0()*0.00531095);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0560() {
   return (neuron0x3dcf300()*-0.00183797);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de05a0() {
   return (neuron0x3dcf640()*-0.00634323);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de05e0() {
   return (neuron0x3dcf980()*0.00367973);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0620() {
   return (neuron0x3dcfcc0()*1.54457);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de09a0() {
   return (neuron0x3dcb190()*0.0188302);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de09e0() {
   return (neuron0x3dcb440()*-0.0274563);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0a20() {
   return (neuron0x3dcb780()*-2.16571);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0a60() {
   return (neuron0x3dcbac0()*0.0284309);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0aa0() {
   return (neuron0x3dcbe00()*0.0134329);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0ae0() {
   return (neuron0x3dcc140()*-0.0399376);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0b20() {
   return (neuron0x3dcc480()*-0.00308617);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0b60() {
   return (neuron0x3dcc7c0()*-0.00292932);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0ba0() {
   return (neuron0x3dccb00()*-0.00132888);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0be0() {
   return (neuron0x3dcce40()*0.00100621);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0c20() {
   return (neuron0x3dcd180()*0.00943062);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0c60() {
   return (neuron0x3dcd4c0()*7.20797);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0ca0() {
   return (neuron0x3dcd800()*0.115603);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0ce0() {
   return (neuron0x3dcdb40()*-0.0407948);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0d20() {
   return (neuron0x3dcde80()*-0.0202176);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0d60() {
   return (neuron0x3dce1c0()*-0.0288512);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de07f0() {
   return (neuron0x3dce500()*0.00552217);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0830() {
   return (neuron0x3dcea60()*0.00414712);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0eb0() {
   return (neuron0x3dcec80()*0.0123489);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0ef0() {
   return (neuron0x3dcefc0()*-0.0150941);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0f30() {
   return (neuron0x3dcf300()*-0.00153308);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0f70() {
   return (neuron0x3dcf640()*0.00683179);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0fb0() {
   return (neuron0x3dcf980()*0.000825696);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0ff0() {
   return (neuron0x3dcfcc0()*-0.153229);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1370() {
   return (neuron0x3dcb190()*-0.00887871);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de13b0() {
   return (neuron0x3dcb440()*-21.8948);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de13f0() {
   return (neuron0x3dcb780()*-3.45939);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1430() {
   return (neuron0x3dcbac0()*0.000857562);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1470() {
   return (neuron0x3dcbe00()*-0.061922);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de14b0() {
   return (neuron0x3dcc140()*-0.0417591);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de14f0() {
   return (neuron0x3dcc480()*-0.0106814);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1530() {
   return (neuron0x3dcc7c0()*0.00428198);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1570() {
   return (neuron0x3dccb00()*0.0153993);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de15b0() {
   return (neuron0x3dcce40()*0.0138);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de15f0() {
   return (neuron0x3dcd180()*0.0189962);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1630() {
   return (neuron0x3dcd4c0()*0.0489791);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1670() {
   return (neuron0x3dcd800()*-0.0626838);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de16b0() {
   return (neuron0x3dcdb40()*-0.0361514);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de16f0() {
   return (neuron0x3dcde80()*0.0488231);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1730() {
   return (neuron0x3dce1c0()*0.0890807);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de11c0() {
   return (neuron0x3dce500()*0.0635878);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1200() {
   return (neuron0x3dcea60()*0.0567496);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1880() {
   return (neuron0x3dcec80()*0.0058645);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de18c0() {
   return (neuron0x3dcefc0()*-0.0260787);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1900() {
   return (neuron0x3dcf300()*0.0423745);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1940() {
   return (neuron0x3dcf640()*-0.000507989);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1980() {
   return (neuron0x3dcf980()*-0.0113433);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de19c0() {
   return (neuron0x3dcfcc0()*-0.271529);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3890() {
   return (neuron0x3dcb190()*-0.00443592);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df38d0() {
   return (neuron0x3dcb440()*0.0541288);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3910() {
   return (neuron0x3dcb780()*-0.880764);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3950() {
   return (neuron0x3dcbac0()*0.0465173);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3990() {
   return (neuron0x3dcbe00()*0.0214014);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df39d0() {
   return (neuron0x3dcc140()*0.0226999);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3a10() {
   return (neuron0x3dcc480()*0.0423255);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3a50() {
   return (neuron0x3dcc7c0()*0.0248053);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3a90() {
   return (neuron0x3dccb00()*0.0392252);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3ad0() {
   return (neuron0x3dcce40()*-0.0208925);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3b10() {
   return (neuron0x3dcd180()*-0.0376043);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3b50() {
   return (neuron0x3dcd4c0()*0.00992391);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3b90() {
   return (neuron0x3dcd800()*0.0990368);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3bd0() {
   return (neuron0x3dcdb40()*-0.0764673);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3c10() {
   return (neuron0x3dcde80()*0.0388303);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3c50() {
   return (neuron0x3dce1c0()*0.0285467);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1a00() {
   return (neuron0x3dce500()*-0.0479792);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1a40() {
   return (neuron0x3dcea60()*0.0328449);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3da0() {
   return (neuron0x3dcec80()*0.0704419);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3de0() {
   return (neuron0x3dcefc0()*0.00449676);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3e20() {
   return (neuron0x3dcf300()*-0.0299962);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3e60() {
   return (neuron0x3dcf640()*-0.0193101);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3ea0() {
   return (neuron0x3dcf980()*0.0219152);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3ee0() {
   return (neuron0x3dcfcc0()*-0.720299);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4260() {
   return (neuron0x3dcb190()*0.00289369);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df42a0() {
   return (neuron0x3dcb440()*0.00578793);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df42e0() {
   return (neuron0x3dcb780()*-0.183534);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4320() {
   return (neuron0x3dcbac0()*0.0272038);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4360() {
   return (neuron0x3dcbe00()*0.0305506);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df43a0() {
   return (neuron0x3dcc140()*0.0148601);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df43e0() {
   return (neuron0x3dcc480()*0.0664503);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4420() {
   return (neuron0x3dcc7c0()*-0.0240201);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4460() {
   return (neuron0x3dccb00()*0.00244069);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df44a0() {
   return (neuron0x3dcce40()*-0.0420674);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df44e0() {
   return (neuron0x3dcd180()*-0.0446142);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4520() {
   return (neuron0x3dcd4c0()*0.094914);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4560() {
   return (neuron0x3dcd800()*0.0345454);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df45a0() {
   return (neuron0x3dcdb40()*-0.0917271);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df45e0() {
   return (neuron0x3dcde80()*-0.00708737);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4620() {
   return (neuron0x3dce1c0()*0.0119407);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df40b0() {
   return (neuron0x3dce500()*-0.00523585);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df40f0() {
   return (neuron0x3dcea60()*-0.0223028);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4770() {
   return (neuron0x3dcec80()*-0.0173939);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df47b0() {
   return (neuron0x3dcefc0()*-0.0301364);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df47f0() {
   return (neuron0x3dcf300()*-0.0387907);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4830() {
   return (neuron0x3dcf640()*-0.00288944);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4870() {
   return (neuron0x3dcf980()*0.0368551);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df48b0() {
   return (neuron0x3dcfcc0()*1.03057);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4c30() {
   return (neuron0x3dcb190()*0.151108);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4c70() {
   return (neuron0x3dcb440()*0.0124677);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4cb0() {
   return (neuron0x3dcb780()*0.00670802);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4cf0() {
   return (neuron0x3dcbac0()*0.610393);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4d30() {
   return (neuron0x3dcbe00()*0.0525626);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4d70() {
   return (neuron0x3dcc140()*-0.183345);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4db0() {
   return (neuron0x3dcc480()*0.191672);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4df0() {
   return (neuron0x3dcc7c0()*-0.251533);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4e30() {
   return (neuron0x3dccb00()*-0.264552);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4e70() {
   return (neuron0x3dcce40()*-0.192407);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4eb0() {
   return (neuron0x3dcd180()*0.108758);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4ef0() {
   return (neuron0x3dcd4c0()*0.00156596);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4f30() {
   return (neuron0x3dcd800()*0.535974);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4f70() {
   return (neuron0x3dcdb40()*0.176244);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4fb0() {
   return (neuron0x3dcde80()*0.614574);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4ff0() {
   return (neuron0x3dce1c0()*0.43063);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4a80() {
   return (neuron0x3dce500()*0.490859);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4ac0() {
   return (neuron0x3dcea60()*0.144167);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5140() {
   return (neuron0x3dcec80()*0.310905);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5180() {
   return (neuron0x3dcefc0()*-0.0928692);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df51c0() {
   return (neuron0x3dcf300()*-0.0678717);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5200() {
   return (neuron0x3dcf640()*0.17245);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5240() {
   return (neuron0x3dcf980()*0.0567198);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5280() {
   return (neuron0x3dcfcc0()*0.0127656);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5600() {
   return (neuron0x3dcb190()*-0.0725286);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5640() {
   return (neuron0x3dcb440()*-0.33298);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5680() {
   return (neuron0x3dcb780()*2.40181);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df56c0() {
   return (neuron0x3dcbac0()*-0.495308);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5700() {
   return (neuron0x3dcbe00()*0.0753427);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5740() {
   return (neuron0x3dcc140()*-0.115281);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5780() {
   return (neuron0x3dcc480()*-0.457677);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df57c0() {
   return (neuron0x3dcc7c0()*-0.0706976);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5800() {
   return (neuron0x3dccb00()*-0.430513);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5840() {
   return (neuron0x3dcce40()*0.0774285);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5880() {
   return (neuron0x3dcd180()*-0.162009);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df58c0() {
   return (neuron0x3dcd4c0()*1.33421);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5900() {
   return (neuron0x3dcd800()*0.835185);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5940() {
   return (neuron0x3dcdb40()*0.0935466);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5980() {
   return (neuron0x3dcde80()*-0.315402);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df59c0() {
   return (neuron0x3dce1c0()*-0.589069);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5450() {
   return (neuron0x3dce500()*0.011224);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5490() {
   return (neuron0x3dcea60()*-0.0859989);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5b10() {
   return (neuron0x3dcec80()*-0.100233);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5b50() {
   return (neuron0x3dcefc0()*-0.317932);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5b90() {
   return (neuron0x3dcf300()*0.0880678);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5bd0() {
   return (neuron0x3dcf640()*-0.160404);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5c10() {
   return (neuron0x3dcf980()*-0.141825);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5c50() {
   return (neuron0x3dcfcc0()*-0.0362261);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd1090() {
   return (neuron0x3dd0130()*-0.10274);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd10d0() {
   return (neuron0x3dd0a80()*-0.199304);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd25f0() {
   return (neuron0x3dd1560()*1.34869);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd2630() {
   return (neuron0x3b95990()*-0.0491771);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd40d0() {
   return (neuron0x3dd2340()*0.160919);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4110() {
   return (neuron0x3dd3e20()*0.167469);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4ea0() {
   return (neuron0x3dd4bf0()*0.968749);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4ee0() {
   return (neuron0x3dd55c0()*-0.0135499);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd5870() {
   return (neuron0x3dd5f90()*0.688949);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd58b0() {
   return (neuron0x3dd6a70()*0.109455);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6240() {
   return (neuron0x3dd7440()*-2.60607);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6280() {
   return (neuron0x3dd4520()*-0.342482);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6d20() {
   return (neuron0x3dd8ff0()*-0.612603);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd6d60() {
   return (neuron0x3dd99c0()*-0.175481);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd76f0() {
   return (neuron0x3dda390()*-0.91604);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd7730() {
   return (neuron0x3ddad60()*-0.147394);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd47d0() {
   return (neuron0x3ddcb70()*1.45831);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd4810() {
   return (neuron0x3ddce50()*-0.190547);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd92a0() {
   return (neuron0x3ddd820()*-0.899352);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd92e0() {
   return (neuron0x3dde1f0()*-0.959979);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9c70() {
   return (neuron0x3ddebc0()*1.64049);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd9cb0() {
   return (neuron0x3ddf590()*-1.5102);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda640() {
   return (neuron0x3dd80e0()*1.13208);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dda680() {
   return (neuron0x3dd8ab0()*-1.2042);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddb010() {
   return (neuron0x3de2320()*0.8549);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddb050() {
   return (neuron0x3de2cf0()*-0.221375);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dce0a0() {
   return (neuron0x3de36c0()*-0.104938);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dce0e0() {
   return (neuron0x3de4090()*0.542817);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd100() {
   return (neuron0x3de4a60()*-0.122835);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddd140() {
   return (neuron0x3de5430()*-0.221481);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dddad0() {
   return (neuron0x3de5e00()*0.610088);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dddb10() {
   return (neuron0x3de67d0()*0.908355);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde4a0() {
   return (neuron0x3ddc860()*0.568994);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dde4e0() {
   return (neuron0x3de93b0()*-1.61928);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddee70() {
   return (neuron0x3de9d80()*1.14233);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddeeb0() {
   return (neuron0x3dea750()*1.25365);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf840() {
   return (neuron0x3deb120()*0.962568);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddf880() {
   return (neuron0x3debaf0()*0.65425);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd8390() {
   return (neuron0x3dec4c0()*0.723227);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd83d0() {
   return (neuron0x3dece90()*-0.130427);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1c40() {
   return (neuron0x3ded860()*1.03672);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1c80() {
   return (neuron0x3dee440()*0.660527);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de25d0() {
   return (neuron0x3deee10()*0.0921581);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2610() {
   return (neuron0x3ddfc90()*0.381671);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2fa0() {
   return (neuron0x3de0660()*-0.0737439);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de2fe0() {
   return (neuron0x3de1030()*-1.79422);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de3970() {
   return (neuron0x3df3670()*0.0889102);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de39b0() {
   return (neuron0x3df3f20()*-1.3361);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4340() {
   return (neuron0x3df48f0()*-0.0977673);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4380() {
   return (neuron0x3df52c0()*0.474879);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6a80() {
   return (neuron0x3dd0130()*-0.93172);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de6ac0() {
   return (neuron0x3dd0a80()*0.570605);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddc040() {
   return (neuron0x3dd1560()*-0.613947);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddc080() {
   return (neuron0x3b95990()*-4.74961);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de9660() {
   return (neuron0x3dd2340()*-0.233981);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de96a0() {
   return (neuron0x3dd3e20()*-0.240545);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea030() {
   return (neuron0x3dd4bf0()*-0.149332);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dea070() {
   return (neuron0x3dd55c0()*0.153107);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deaa00() {
   return (neuron0x3dd5f90()*-0.00424181);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deaa40() {
   return (neuron0x3dd6a70()*-0.14273);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb3d0() {
   return (neuron0x3dd7440()*0.38222);
}

double NNfunction_nn_chi3_charge2m::synapse0x3deb410() {
   return (neuron0x3dd4520()*0.589895);
}

double NNfunction_nn_chi3_charge2m::synapse0x3debda0() {
   return (neuron0x3dd8ff0()*2.98612);
}

double NNfunction_nn_chi3_charge2m::synapse0x3debde0() {
   return (neuron0x3dd99c0()*0.105877);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec770() {
   return (neuron0x3dda390()*1.10333);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dec7b0() {
   return (neuron0x3ddad60()*-0.0134929);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded140() {
   return (neuron0x3ddcb70()*-0.261556);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ded180() {
   return (neuron0x3ddce50()*0.337131);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dedb10() {
   return (neuron0x3ddd820()*0.431417);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dedb50() {
   return (neuron0x3dde1f0()*0.382013);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee6f0() {
   return (neuron0x3ddebc0()*0.0482898);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dee730() {
   return (neuron0x3ddf590()*-0.655835);
}

double NNfunction_nn_chi3_charge2m::synapse0x3def0c0() {
   return (neuron0x3dd80e0()*-4.00032);
}

double NNfunction_nn_chi3_charge2m::synapse0x3def100() {
   return (neuron0x3dd8ab0()*-1.5744);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddff40() {
   return (neuron0x3de2320()*-0.213316);
}

double NNfunction_nn_chi3_charge2m::synapse0x3ddff80() {
   return (neuron0x3de2cf0()*0.26179);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0910() {
   return (neuron0x3de36c0()*-0.148911);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de0950() {
   return (neuron0x3de4090()*0.89928);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de12e0() {
   return (neuron0x3de4a60()*0.268668);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de1320() {
   return (neuron0x3de5430()*0.0875403);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3800() {
   return (neuron0x3de5e00()*-0.766196);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df3840() {
   return (neuron0x3de67d0()*0.839816);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df41d0() {
   return (neuron0x3ddc860()*1.55837);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4210() {
   return (neuron0x3de93b0()*-0.366883);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4ba0() {
   return (neuron0x3de9d80()*0.695538);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df4be0() {
   return (neuron0x3dea750()*-0.663451);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5570() {
   return (neuron0x3deb120()*0.871057);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df55b0() {
   return (neuron0x3debaf0()*-0.158653);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd03e0() {
   return (neuron0x3dec4c0()*-0.225833);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dd0420() {
   return (neuron0x3dece90()*0.0676662);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4d10() {
   return (neuron0x3ded860()*0.465058);
}

double NNfunction_nn_chi3_charge2m::synapse0x3de4d50() {
   return (neuron0x3dee440()*-0.29263);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5c90() {
   return (neuron0x3deee10()*-0.0599833);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5cd0() {
   return (neuron0x3ddfc90()*2.32241);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5d10() {
   return (neuron0x3de0660()*-1.09479);
}

double NNfunction_nn_chi3_charge2m::synapse0x3df5d50() {
   return (neuron0x3de1030()*2.3032);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfcc00() {
   return (neuron0x3df3670()*1.50355);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfcc40() {
   return (neuron0x3df3f20()*-0.774609);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfcc80() {
   return (neuron0x3df48f0()*0.522909);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfccc0() {
   return (neuron0x3df52c0()*-0.670581);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd040() {
   return (neuron0x3dd0130()*1.51854);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd080() {
   return (neuron0x3dd0a80()*-2.58741);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd0c0() {
   return (neuron0x3dd1560()*-0.401641);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd100() {
   return (neuron0x3b95990()*-4.51901);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd140() {
   return (neuron0x3dd2340()*-0.275938);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd180() {
   return (neuron0x3dd3e20()*-0.26062);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd1c0() {
   return (neuron0x3dd4bf0()*-0.243252);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd200() {
   return (neuron0x3dd55c0()*0.0302717);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd240() {
   return (neuron0x3dd5f90()*-0.288584);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd280() {
   return (neuron0x3dd6a70()*-0.140618);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd2c0() {
   return (neuron0x3dd7440()*1.09409);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd300() {
   return (neuron0x3dd4520()*0.6435);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd340() {
   return (neuron0x3dd8ff0()*2.92039);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd380() {
   return (neuron0x3dd99c0()*0.102972);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd3c0() {
   return (neuron0x3dda390()*1.16326);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd400() {
   return (neuron0x3ddad60()*-0.011718);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfce90() {
   return (neuron0x3ddcb70()*-0.449406);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfced0() {
   return (neuron0x3ddce50()*0.348435);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd550() {
   return (neuron0x3ddd820()*-2.22055);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd590() {
   return (neuron0x3dde1f0()*0.109272);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd5d0() {
   return (neuron0x3ddebc0()*-0.0219446);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd610() {
   return (neuron0x3ddf590()*-0.269623);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd650() {
   return (neuron0x3dd80e0()*-3.55237);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd690() {
   return (neuron0x3dd8ab0()*-0.283619);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd6d0() {
   return (neuron0x3de2320()*-0.420244);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd710() {
   return (neuron0x3de2cf0()*0.260182);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd750() {
   return (neuron0x3de36c0()*1.60416);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd790() {
   return (neuron0x3de4090()*0.271244);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd7d0() {
   return (neuron0x3de4a60()*0.278152);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd810() {
   return (neuron0x3de5430()*0.112275);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd850() {
   return (neuron0x3de5e00()*-0.809967);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd890() {
   return (neuron0x3de67d0()*0.605641);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd440() {
   return (neuron0x3ddc860()*2.25121);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd480() {
   return (neuron0x3de93b0()*1.75058);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd4c0() {
   return (neuron0x3de9d80()*0.471469);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfd500() {
   return (neuron0x3dea750()*-0.886727);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfdae0() {
   return (neuron0x3deb120()*0.660863);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfdb20() {
   return (neuron0x3debaf0()*-0.260906);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfdb60() {
   return (neuron0x3dec4c0()*-0.327127);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfdba0() {
   return (neuron0x3dece90()*0.0756978);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfdbe0() {
   return (neuron0x3ded860()*0.216986);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfdc20() {
   return (neuron0x3dee440()*-0.371043);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfdc60() {
   return (neuron0x3deee10()*-0.0566475);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfdca0() {
   return (neuron0x3ddfc90()*-2.48158);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfdce0() {
   return (neuron0x3de0660()*-1.12999);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfdd20() {
   return (neuron0x3de1030()*2.01565);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfdd60() {
   return (neuron0x3df3670()*-1.52711);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfdda0() {
   return (neuron0x3df3f20()*4.01574);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfdde0() {
   return (neuron0x3df48f0()*0.542804);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfde20() {
   return (neuron0x3df52c0()*-0.715713);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe1a0() {
   return (neuron0x3dd0130()*-1.17238);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe1e0() {
   return (neuron0x3dd0a80()*-0.113902);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe220() {
   return (neuron0x3dd1560()*-1.10492);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe260() {
   return (neuron0x3b95990()*-0.243342);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe2a0() {
   return (neuron0x3dd2340()*-0.194084);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe2e0() {
   return (neuron0x3dd3e20()*-0.198022);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe320() {
   return (neuron0x3dd4bf0()*-0.793357);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe360() {
   return (neuron0x3dd55c0()*-0.539684);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe3a0() {
   return (neuron0x3dd5f90()*-0.567304);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe3e0() {
   return (neuron0x3dd6a70()*-0.118163);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe420() {
   return (neuron0x3dd7440()*-0.0818236);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe460() {
   return (neuron0x3dd4520()*0.282889);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe4a0() {
   return (neuron0x3dd8ff0()*0.66949);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe4e0() {
   return (neuron0x3dd99c0()*0.17287);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe520() {
   return (neuron0x3dda390()*0.874494);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe560() {
   return (neuron0x3ddad60()*0.119224);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfdff0() {
   return (neuron0x3ddcb70()*-1.19166);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe030() {
   return (neuron0x3ddce50()*0.160418);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe6b0() {
   return (neuron0x3ddd820()*0.349365);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe6f0() {
   return (neuron0x3dde1f0()*2.21262);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe730() {
   return (neuron0x3ddebc0()*-1.27068);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe770() {
   return (neuron0x3ddf590()*1.15725);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe7b0() {
   return (neuron0x3dd80e0()*-0.847853);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe7f0() {
   return (neuron0x3dd8ab0()*1.11874);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe830() {
   return (neuron0x3de2320()*-0.634264);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe870() {
   return (neuron0x3de2cf0()*0.220026);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe8b0() {
   return (neuron0x3de36c0()*-1.18784);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe8f0() {
   return (neuron0x3de4090()*-1.70909);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe930() {
   return (neuron0x3de4a60()*0.177521);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe970() {
   return (neuron0x3de5430()*0.188304);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe9b0() {
   return (neuron0x3de5e00()*-0.553661);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe9f0() {
   return (neuron0x3de67d0()*-0.825842);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe5a0() {
   return (neuron0x3ddc860()*-0.690384);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe5e0() {
   return (neuron0x3de93b0()*1.52307);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe620() {
   return (neuron0x3de9d80()*-0.889106);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfe660() {
   return (neuron0x3dea750()*-1.62797);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfec40() {
   return (neuron0x3deb120()*-0.731331);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfec80() {
   return (neuron0x3debaf0()*-0.562188);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfecc0() {
   return (neuron0x3dec4c0()*-0.595381);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfed00() {
   return (neuron0x3dece90()*0.120601);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfed40() {
   return (neuron0x3ded860()*-0.778304);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfed80() {
   return (neuron0x3dee440()*-0.585488);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfedc0() {
   return (neuron0x3deee10()*-0.0739345);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfee00() {
   return (neuron0x3ddfc90()*2.48539);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfee40() {
   return (neuron0x3de0660()*-0.0233013);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfee80() {
   return (neuron0x3de1030()*1.30279);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfeec0() {
   return (neuron0x3df3670()*0.367768);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfef00() {
   return (neuron0x3df3f20()*-0.84593);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfef40() {
   return (neuron0x3df48f0()*0.136981);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfef80() {
   return (neuron0x3df52c0()*-0.352954);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff300() {
   return (neuron0x3dd0130()*1.98156);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff340() {
   return (neuron0x3dd0a80()*1.22323);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff380() {
   return (neuron0x3dd1560()*1.62645);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff3c0() {
   return (neuron0x3b95990()*-2.46784);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff400() {
   return (neuron0x3dd2340()*0.267168);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff440() {
   return (neuron0x3dd3e20()*0.254553);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff480() {
   return (neuron0x3dd4bf0()*1.68657);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff4c0() {
   return (neuron0x3dd55c0()*1.27651);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff500() {
   return (neuron0x3dd5f90()*1.0744);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff540() {
   return (neuron0x3dd6a70()*0.135678);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff580() {
   return (neuron0x3dd7440()*-0.296362);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff5c0() {
   return (neuron0x3dd4520()*-0.245562);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff600() {
   return (neuron0x3dd8ff0()*1.42938);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff640() {
   return (neuron0x3dd99c0()*-0.255764);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff680() {
   return (neuron0x3dda390()*-1.08386);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff6c0() {
   return (neuron0x3ddad60()*-0.178334);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff150() {
   return (neuron0x3ddcb70()*2.61743);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff190() {
   return (neuron0x3ddce50()*-0.184415);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff810() {
   return (neuron0x3ddd820()*1.56328);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff850() {
   return (neuron0x3dde1f0()*-2.66227);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff890() {
   return (neuron0x3ddebc0()*2.50147);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff8d0() {
   return (neuron0x3ddf590()*-1.10982);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff910() {
   return (neuron0x3dd80e0()*-4.39944);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff950() {
   return (neuron0x3dd8ab0()*-2.69266);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff990() {
   return (neuron0x3de2320()*1.16255);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff9d0() {
   return (neuron0x3de2cf0()*-0.260838);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dffa10() {
   return (neuron0x3de36c0()*1.61872);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dffa50() {
   return (neuron0x3de4090()*0.743438);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dffa90() {
   return (neuron0x3de4a60()*-0.245975);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dffad0() {
   return (neuron0x3de5430()*-0.286385);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dffb10() {
   return (neuron0x3de5e00()*0.776164);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dffb50() {
   return (neuron0x3de67d0()*1.75771);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff700() {
   return (neuron0x3ddc860()*3.09602);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff740() {
   return (neuron0x3de93b0()*-1.87047);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff780() {
   return (neuron0x3de9d80()*1.4586);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dff7c0() {
   return (neuron0x3dea750()*3.12256);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dffda0() {
   return (neuron0x3deb120()*0.930765);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dffde0() {
   return (neuron0x3debaf0()*1.19802);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dffe20() {
   return (neuron0x3dec4c0()*1.26719);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dffe60() {
   return (neuron0x3dece90()*-0.167649);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dffea0() {
   return (neuron0x3ded860()*0.666163);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dffee0() {
   return (neuron0x3dee440()*1.24084);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfff20() {
   return (neuron0x3deee10()*0.0747641);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfff60() {
   return (neuron0x3ddfc90()*1.47503);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfffa0() {
   return (neuron0x3de0660()*-5.82043);
}

double NNfunction_nn_chi3_charge2m::synapse0x3dfffe0() {
   return (neuron0x3de1030()*3.37214);
}

double NNfunction_nn_chi3_charge2m::synapse0x3e00020() {
   return (neuron0x3df3670()*1.70811);
}

double NNfunction_nn_chi3_charge2m::synapse0x3e00060() {
   return (neuron0x3df3f20()*0.43392);
}

double NNfunction_nn_chi3_charge2m::synapse0x3e000a0() {
   return (neuron0x3df48f0()*-0.0915845);
}

double NNfunction_nn_chi3_charge2m::synapse0x3e000e0() {
   return (neuron0x3df52c0()*0.284368);
}

double NNfunction_nn_chi3_charge2m::synapse0x3e00340() {
   return (neuron0x3dfc4c0()*-6.06107);
}

double NNfunction_nn_chi3_charge2m::synapse0x3e00380() {
   return (neuron0x3dfc860()*5.62762);
}

double NNfunction_nn_chi3_charge2m::synapse0x3e003c0() {
   return (neuron0x3dfcd00()*-5.72391);
}

double NNfunction_nn_chi3_charge2m::synapse0x3e00400() {
   return (neuron0x3dfde60()*-8.76934);
}

double NNfunction_nn_chi3_charge2m::synapse0x3e00440() {
   return (neuron0x3dfefc0()*-5.48151);
}

