#include "NNfunction_t2t2.h"
#include <cmath>

double NNfunction_t2t2::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5641)/15.3286;
   input1 = (in1 - -2.4509)/1163.62;
   input2 = (in2 - 653.313)/616.207;
   input3 = (in3 - -48.5006)/829.6;
   input4 = (in4 - 1017.35)/959.659;
   input5 = (in5 - 899.889)/960.742;
   input6 = (in6 - 907.728)/959.959;
   input7 = (in7 - 924.778)/941.355;
   input8 = (in8 - 918.057)/967.007;
   input9 = (in9 - 900.082)/946.979;
   input10 = (in10 - 970.366)/942.536;
   input11 = (in11 - 710.726)/859.113;
   input12 = (in12 - 710.281)/856.433;
   input13 = (in13 - 362.929)/295.48;
   input14 = (in14 - 727.25)/826.628;
   input15 = (in15 - 730.676)/829.045;
   input16 = (in16 - 361.019)/301.598;
   input17 = (in17 - 745.23)/887.888;
   input18 = (in18 - 746.116)/893.642;
   input19 = (in19 - 770.685)/855.22;
   input20 = (in20 - -5.9963)/402.703;
   input21 = (in21 - 1.71919)/1142.57;
   input22 = (in22 - -0.0549976)/1197.39;
   input23 = (in23 - -211.597)/567.624;
   switch(index) {
     case 0:
         return neuron0x20dfe80();
     default:
         return 0.;
   }
}

double NNfunction_t2t2::Value(int index, double* input) {
   input0 = (input[0] - 23.5641)/15.3286;
   input1 = (input[1] - -2.4509)/1163.62;
   input2 = (input[2] - 653.313)/616.207;
   input3 = (input[3] - -48.5006)/829.6;
   input4 = (input[4] - 1017.35)/959.659;
   input5 = (input[5] - 899.889)/960.742;
   input6 = (input[6] - 907.728)/959.959;
   input7 = (input[7] - 924.778)/941.355;
   input8 = (input[8] - 918.057)/967.007;
   input9 = (input[9] - 900.082)/946.979;
   input10 = (input[10] - 970.366)/942.536;
   input11 = (input[11] - 710.726)/859.113;
   input12 = (input[12] - 710.281)/856.433;
   input13 = (input[13] - 362.929)/295.48;
   input14 = (input[14] - 727.25)/826.628;
   input15 = (input[15] - 730.676)/829.045;
   input16 = (input[16] - 361.019)/301.598;
   input17 = (input[17] - 745.23)/887.888;
   input18 = (input[18] - 746.116)/893.642;
   input19 = (input[19] - 770.685)/855.22;
   input20 = (input[20] - -5.9963)/402.703;
   input21 = (input[21] - 1.71919)/1142.57;
   input22 = (input[22] - -0.0549976)/1197.39;
   input23 = (input[23] - -211.597)/567.624;
   switch(index) {
     case 0:
         return neuron0x20dfe80();
     default:
         return 0.;
   }
}

double NNfunction_t2t2::neuron0x20abf40() {
   return input0;
}

double NNfunction_t2t2::neuron0x20ac280() {
   return input1;
}

double NNfunction_t2t2::neuron0x20ac5c0() {
   return input2;
}

double NNfunction_t2t2::neuron0x20ac900() {
   return input3;
}

double NNfunction_t2t2::neuron0x20acc40() {
   return input4;
}

double NNfunction_t2t2::neuron0x20acf80() {
   return input5;
}

double NNfunction_t2t2::neuron0x20ad2c0() {
   return input6;
}

double NNfunction_t2t2::neuron0x20ad600() {
   return input7;
}

double NNfunction_t2t2::neuron0x20ad940() {
   return input8;
}

double NNfunction_t2t2::neuron0x20adc80() {
   return input9;
}

double NNfunction_t2t2::neuron0x20adfc0() {
   return input10;
}

double NNfunction_t2t2::neuron0x20ae300() {
   return input11;
}

double NNfunction_t2t2::neuron0x20ae640() {
   return input12;
}

double NNfunction_t2t2::neuron0x20ae980() {
   return input13;
}

double NNfunction_t2t2::neuron0x20aecc0() {
   return input14;
}

double NNfunction_t2t2::neuron0x20af000() {
   return input15;
}

double NNfunction_t2t2::neuron0x20af340() {
   return input16;
}

double NNfunction_t2t2::neuron0x20af8a0() {
   return input17;
}

double NNfunction_t2t2::neuron0x20afac0() {
   return input18;
}

double NNfunction_t2t2::neuron0x20afe00() {
   return input19;
}

double NNfunction_t2t2::neuron0x20b0140() {
   return input20;
}

double NNfunction_t2t2::neuron0x20b0480() {
   return input21;
}

double NNfunction_t2t2::neuron0x20b07c0() {
   return input22;
}

double NNfunction_t2t2::neuron0x20b0b00() {
   return input23;
}

double NNfunction_t2t2::input0x20b0fa0() {
   double input = -1.02571;
   input += synapse0x1e6bdb0();
   input += synapse0x20abe00();
   input += synapse0x20abe40();
   input += synapse0x20b1250();
   input += synapse0x20b1290();
   input += synapse0x20b12d0();
   input += synapse0x20b1310();
   input += synapse0x20b1350();
   input += synapse0x20b1390();
   input += synapse0x20b13d0();
   input += synapse0x20b1410();
   input += synapse0x20b1450();
   input += synapse0x20b1490();
   input += synapse0x20b14d0();
   input += synapse0x20b1510();
   input += synapse0x20b1550();
   input += synapse0x20abd70();
   input += synapse0x20abdb0();
   input += synapse0x1e5d610();
   input += synapse0x1e5d650();
   input += synapse0x20b17b0();
   input += synapse0x20b17f0();
   input += synapse0x20b1830();
   input += synapse0x20b1870();
   return input;
}

double NNfunction_t2t2::neuron0x20b0fa0() {
   double input = input0x20b0fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20b18b0() {
   double input = 2.14027;
   input += synapse0x20b1bf0();
   input += synapse0x20b1c30();
   input += synapse0x20b1c70();
   input += synapse0x20b1cb0();
   input += synapse0x20b1cf0();
   input += synapse0x20b1d30();
   input += synapse0x20b1d70();
   input += synapse0x20b1db0();
   input += synapse0x20b1df0();
   input += synapse0x20b16a0();
   input += synapse0x20b16e0();
   input += synapse0x20b1720();
   input += synapse0x20b1760();
   input += synapse0x20b2040();
   input += synapse0x20b2080();
   input += synapse0x20b20c0();
   input += synapse0x20b1a40();
   input += synapse0x20b1a80();
   input += synapse0x20b2210();
   input += synapse0x20b2250();
   input += synapse0x20b2290();
   input += synapse0x20b22d0();
   input += synapse0x20b2310();
   input += synapse0x20b2350();
   return input;
}

double NNfunction_t2t2::neuron0x20b18b0() {
   double input = input0x20b18b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20b2390() {
   double input = 0.385977;
   input += synapse0x20b26d0();
   input += synapse0x20b2710();
   input += synapse0x20b2750();
   input += synapse0x20b2790();
   input += synapse0x20b27d0();
   input += synapse0x20b2810();
   input += synapse0x20b2850();
   input += synapse0x20b2890();
   input += synapse0x20b28d0();
   input += synapse0x20b2910();
   input += synapse0x20b2950();
   input += synapse0x20b2990();
   input += synapse0x20b29d0();
   input += synapse0x20b2a10();
   input += synapse0x20b2a50();
   input += synapse0x20b2a90();
   input += synapse0x20b2520();
   input += synapse0x20b2560();
   input += synapse0x1e6b480();
   input += synapse0x1e6b4c0();
   input += synapse0x209afd0();
   input += synapse0x209b010();
   input += synapse0x209b050();
   input += synapse0x20abe80();
   return input;
}

double NNfunction_t2t2::neuron0x20b2390() {
   double input = input0x20b2390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x1e6bc20() {
   double input = 0.502901;
   input += synapse0x20b1fe0();
   input += synapse0x20abec0();
   input += synapse0x20abf00();
   input += synapse0x20b2be0();
   input += synapse0x20b2c20();
   input += synapse0x20b2c60();
   input += synapse0x20b2ca0();
   input += synapse0x20b2ce0();
   input += synapse0x20b2d20();
   input += synapse0x20b2d60();
   input += synapse0x20b2da0();
   input += synapse0x20b2de0();
   input += synapse0x20b2e20();
   input += synapse0x20b2e60();
   input += synapse0x20b2ea0();
   input += synapse0x20b2ee0();
   input += synapse0x20b1e30();
   input += synapse0x20b1e70();
   input += synapse0x20b3030();
   input += synapse0x20b3070();
   input += synapse0x20b30b0();
   input += synapse0x20b30f0();
   input += synapse0x20b3130();
   input += synapse0x20b3170();
   return input;
}

double NNfunction_t2t2::neuron0x1e6bc20() {
   double input = input0x1e6bc20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20b31b0() {
   double input = 0.519067;
   input += synapse0x20b34f0();
   input += synapse0x20b3530();
   input += synapse0x20b3570();
   input += synapse0x20b35b0();
   input += synapse0x20b35f0();
   input += synapse0x20b3630();
   input += synapse0x20b3670();
   input += synapse0x20b36b0();
   input += synapse0x20b36f0();
   input += synapse0x20b3730();
   input += synapse0x20b3770();
   input += synapse0x20b37b0();
   input += synapse0x20b37f0();
   input += synapse0x20b3830();
   input += synapse0x20b3870();
   input += synapse0x20b38b0();
   input += synapse0x20b3340();
   input += synapse0x20b3380();
   input += synapse0x20b3a00();
   input += synapse0x20b3a40();
   input += synapse0x20b3a80();
   input += synapse0x20b3ac0();
   input += synapse0x20b3b00();
   input += synapse0x20b3b40();
   return input;
}

double NNfunction_t2t2::neuron0x20b31b0() {
   double input = input0x20b31b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20b3b80() {
   double input = 0.585413;
   input += synapse0x20b3ec0();
   input += synapse0x20b3f00();
   input += synapse0x20b3f40();
   input += synapse0x20b3f80();
   input += synapse0x20b3fc0();
   input += synapse0x20b4000();
   input += synapse0x20b4040();
   input += synapse0x20b4080();
   input += synapse0x20b40c0();
   input += synapse0x1e6b810();
   input += synapse0x1e6b850();
   input += synapse0x1e6b890();
   input += synapse0x1e6b8d0();
   input += synapse0x1e6b910();
   input += synapse0x1e6b950();
   input += synapse0x1e6b990();
   input += synapse0x20b3d10();
   input += synapse0x20b3d50();
   input += synapse0x1e6bae0();
   input += synapse0x1e6bb20();
   input += synapse0x1e6bb60();
   input += synapse0x1e6bba0();
   input += synapse0x1e6bbe0();
   input += synapse0x20b4910();
   return input;
}

double NNfunction_t2t2::neuron0x20b3b80() {
   double input = input0x20b3b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20b4950() {
   double input = 2.23681;
   input += synapse0x20b4c90();
   input += synapse0x20b4cd0();
   input += synapse0x20b4d10();
   input += synapse0x20b4d50();
   input += synapse0x20b4d90();
   input += synapse0x20b4dd0();
   input += synapse0x20b4e10();
   input += synapse0x20b4e50();
   input += synapse0x20b4e90();
   input += synapse0x20b4ed0();
   input += synapse0x20b4f10();
   input += synapse0x20b4f50();
   input += synapse0x20b4f90();
   input += synapse0x20b4fd0();
   input += synapse0x20b5010();
   input += synapse0x20b5050();
   input += synapse0x20b4ae0();
   input += synapse0x20b4b20();
   input += synapse0x20b51a0();
   input += synapse0x20b51e0();
   input += synapse0x20b5220();
   input += synapse0x20b5260();
   input += synapse0x20b52a0();
   input += synapse0x20b52e0();
   return input;
}

double NNfunction_t2t2::neuron0x20b4950() {
   double input = input0x20b4950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20b5320() {
   double input = 0.543977;
   input += synapse0x20b5660();
   input += synapse0x20b56a0();
   input += synapse0x20b56e0();
   input += synapse0x20b5720();
   input += synapse0x20b5760();
   input += synapse0x20b57a0();
   input += synapse0x20b57e0();
   input += synapse0x20b5820();
   input += synapse0x20b5860();
   input += synapse0x20b58a0();
   input += synapse0x20b58e0();
   input += synapse0x20b5920();
   input += synapse0x20b5960();
   input += synapse0x20b59a0();
   input += synapse0x20b59e0();
   input += synapse0x20b5a20();
   input += synapse0x20b54b0();
   input += synapse0x20b54f0();
   input += synapse0x20b5b70();
   input += synapse0x20b5bb0();
   input += synapse0x20b5bf0();
   input += synapse0x20b5c30();
   input += synapse0x20b5c70();
   input += synapse0x20b5cb0();
   return input;
}

double NNfunction_t2t2::neuron0x20b5320() {
   double input = input0x20b5320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20b5cf0() {
   double input = 0.001062;
   input += synapse0x20af790();
   input += synapse0x20af7d0();
   input += synapse0x20af810();
   input += synapse0x20af850();
   input += synapse0x20b6240();
   input += synapse0x20b6280();
   input += synapse0x20b62c0();
   input += synapse0x20b6300();
   input += synapse0x20b6340();
   input += synapse0x20b6380();
   input += synapse0x20b63c0();
   input += synapse0x20b6400();
   input += synapse0x20b6440();
   input += synapse0x20b6480();
   input += synapse0x20b64c0();
   input += synapse0x20b6500();
   input += synapse0x20b5e80();
   input += synapse0x20b5ec0();
   input += synapse0x20b6650();
   input += synapse0x20b6690();
   input += synapse0x20b66d0();
   input += synapse0x20b6710();
   input += synapse0x20b6750();
   input += synapse0x20b6790();
   return input;
}

double NNfunction_t2t2::neuron0x20b5cf0() {
   double input = input0x20b5cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20b67d0() {
   double input = 0.497252;
   input += synapse0x20b6b10();
   input += synapse0x20b6b50();
   input += synapse0x20b6b90();
   input += synapse0x20b6bd0();
   input += synapse0x20b6c10();
   input += synapse0x20b6c50();
   input += synapse0x20b6c90();
   input += synapse0x20b6cd0();
   input += synapse0x20b6d10();
   input += synapse0x20b6d50();
   input += synapse0x20b6d90();
   input += synapse0x20b6dd0();
   input += synapse0x20b6e10();
   input += synapse0x20b6e50();
   input += synapse0x20b6e90();
   input += synapse0x20b6ed0();
   input += synapse0x20b6960();
   input += synapse0x20b69a0();
   input += synapse0x20b7020();
   input += synapse0x20b7060();
   input += synapse0x20b70a0();
   input += synapse0x20b70e0();
   input += synapse0x20b7120();
   input += synapse0x20b7160();
   return input;
}

double NNfunction_t2t2::neuron0x20b67d0() {
   double input = input0x20b67d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20b71a0() {
   double input = -1.30971;
   input += synapse0x20b74e0();
   input += synapse0x20b7520();
   input += synapse0x20b7560();
   input += synapse0x20b75a0();
   input += synapse0x20b75e0();
   input += synapse0x20b7620();
   input += synapse0x20b7660();
   input += synapse0x20b76a0();
   input += synapse0x20b76e0();
   input += synapse0x20b7720();
   input += synapse0x20b7760();
   input += synapse0x20b77a0();
   input += synapse0x20b77e0();
   input += synapse0x20b7820();
   input += synapse0x20b7860();
   input += synapse0x20b78a0();
   input += synapse0x20b7330();
   input += synapse0x20b7370();
   input += synapse0x20b4100();
   input += synapse0x20b4140();
   input += synapse0x20b4180();
   input += synapse0x20b41c0();
   input += synapse0x20b4200();
   input += synapse0x20b4240();
   return input;
}

double NNfunction_t2t2::neuron0x20b71a0() {
   double input = input0x20b71a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20b4280() {
   double input = -1.67606;
   input += synapse0x20b45c0();
   input += synapse0x20b4600();
   input += synapse0x20b4640();
   input += synapse0x20b4680();
   input += synapse0x20b46c0();
   input += synapse0x20b4700();
   input += synapse0x20b4740();
   input += synapse0x20b4780();
   input += synapse0x20b47c0();
   input += synapse0x20b4800();
   input += synapse0x20b4840();
   input += synapse0x20b4880();
   input += synapse0x20b48c0();
   input += synapse0x20b8a00();
   input += synapse0x20b8a40();
   input += synapse0x20b8a80();
   input += synapse0x20b4410();
   input += synapse0x20b4450();
   input += synapse0x20b8bd0();
   input += synapse0x20b8c10();
   input += synapse0x20b8c50();
   input += synapse0x20b8c90();
   input += synapse0x20b8cd0();
   input += synapse0x20b8d10();
   return input;
}

double NNfunction_t2t2::neuron0x20b4280() {
   double input = input0x20b4280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20b8d50() {
   double input = -0.292832;
   input += synapse0x20b9090();
   input += synapse0x20b90d0();
   input += synapse0x20b9110();
   input += synapse0x20b9150();
   input += synapse0x20b9190();
   input += synapse0x20b91d0();
   input += synapse0x20b9210();
   input += synapse0x20b9250();
   input += synapse0x20b9290();
   input += synapse0x20b92d0();
   input += synapse0x20b9310();
   input += synapse0x20b9350();
   input += synapse0x20b9390();
   input += synapse0x20b93d0();
   input += synapse0x20b9410();
   input += synapse0x20b9450();
   input += synapse0x20b8ee0();
   input += synapse0x20b8f20();
   input += synapse0x20b95a0();
   input += synapse0x20b95e0();
   input += synapse0x20b9620();
   input += synapse0x20b9660();
   input += synapse0x20b96a0();
   input += synapse0x20b96e0();
   return input;
}

double NNfunction_t2t2::neuron0x20b8d50() {
   double input = input0x20b8d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20b9720() {
   double input = -0.677827;
   input += synapse0x20b9a60();
   input += synapse0x20b9aa0();
   input += synapse0x20b9ae0();
   input += synapse0x20b9b20();
   input += synapse0x20b9b60();
   input += synapse0x20b9ba0();
   input += synapse0x20b9be0();
   input += synapse0x20b9c20();
   input += synapse0x20b9c60();
   input += synapse0x20b9ca0();
   input += synapse0x20b9ce0();
   input += synapse0x20b9d20();
   input += synapse0x20b9d60();
   input += synapse0x20b9da0();
   input += synapse0x20b9de0();
   input += synapse0x20b9e20();
   input += synapse0x20b98b0();
   input += synapse0x20b98f0();
   input += synapse0x20b9f70();
   input += synapse0x20b9fb0();
   input += synapse0x20b9ff0();
   input += synapse0x20ba030();
   input += synapse0x20ba070();
   input += synapse0x20ba0b0();
   return input;
}

double NNfunction_t2t2::neuron0x20b9720() {
   double input = input0x20b9720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20ba0f0() {
   double input = 0.200117;
   input += synapse0x20ba430();
   input += synapse0x20ba470();
   input += synapse0x20ba4b0();
   input += synapse0x20ba4f0();
   input += synapse0x20ba530();
   input += synapse0x20ba570();
   input += synapse0x20ba5b0();
   input += synapse0x20ba5f0();
   input += synapse0x20ba630();
   input += synapse0x20ba670();
   input += synapse0x20ba6b0();
   input += synapse0x20ba6f0();
   input += synapse0x20ba730();
   input += synapse0x20ba770();
   input += synapse0x20ba7b0();
   input += synapse0x20ba7f0();
   input += synapse0x20ba280();
   input += synapse0x20ba2c0();
   input += synapse0x20ba940();
   input += synapse0x20ba980();
   input += synapse0x20ba9c0();
   input += synapse0x20baa00();
   input += synapse0x20baa40();
   input += synapse0x20baa80();
   return input;
}

double NNfunction_t2t2::neuron0x20ba0f0() {
   double input = input0x20ba0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20baac0() {
   double input = -0.720657;
   input += synapse0x20bae00();
   input += synapse0x20ac160();
   input += synapse0x20ac1a0();
   input += synapse0x20ac4a0();
   input += synapse0x20ac4e0();
   input += synapse0x20ac7e0();
   input += synapse0x20ac820();
   input += synapse0x20acb20();
   input += synapse0x20acb60();
   input += synapse0x20ace60();
   input += synapse0x20acea0();
   input += synapse0x20ad1a0();
   input += synapse0x20ad1e0();
   input += synapse0x20ad4e0();
   input += synapse0x20ad520();
   input += synapse0x20ad820();
   input += synapse0x20ad860();
   input += synapse0x20adb60();
   input += synapse0x20adba0();
   input += synapse0x20adea0();
   input += synapse0x20adee0();
   input += synapse0x20ae1e0();
   input += synapse0x20ae220();
   input += synapse0x20ae520();
   return input;
}

double NNfunction_t2t2::neuron0x20baac0() {
   double input = input0x20baac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20bc8d0() {
   double input = 0.895501;
   input += synapse0x20ae560();
   input += synapse0x20af220();
   input += synapse0x20af260();
   input += synapse0x20bac50();
   input += synapse0x20bac90();
   input += synapse0x20af560();
   input += synapse0x20af5a0();
   input += synapse0x1e5d4f0();
   input += synapse0x1e5d530();
   input += synapse0x20afce0();
   input += synapse0x20afd20();
   input += synapse0x20b0020();
   input += synapse0x20b0060();
   input += synapse0x20b0360();
   input += synapse0x20b03a0();
   input += synapse0x20b06a0();
   input += synapse0x20b06e0();
   input += synapse0x20b09e0();
   input += synapse0x20b0a20();
   input += synapse0x20b0d20();
   input += synapse0x20b0d60();
   input += synapse0x20ae860();
   input += synapse0x20ae8a0();
   input += synapse0x20bcb70();
   return input;
}

double NNfunction_t2t2::neuron0x20bc8d0() {
   double input = input0x20bc8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20bcbb0() {
   double input = 0.551325;
   input += synapse0x20bcef0();
   input += synapse0x20bcf30();
   input += synapse0x20bcf70();
   input += synapse0x20bcfb0();
   input += synapse0x20bcff0();
   input += synapse0x20bd030();
   input += synapse0x20bd070();
   input += synapse0x20bd0b0();
   input += synapse0x20bd0f0();
   input += synapse0x20bd130();
   input += synapse0x20bd170();
   input += synapse0x20bd1b0();
   input += synapse0x20bd1f0();
   input += synapse0x20bd230();
   input += synapse0x20bd270();
   input += synapse0x20bd2b0();
   input += synapse0x20bcd40();
   input += synapse0x20bcd80();
   input += synapse0x20bd400();
   input += synapse0x20bd440();
   input += synapse0x20bd480();
   input += synapse0x20bd4c0();
   input += synapse0x20bd500();
   input += synapse0x20bd540();
   return input;
}

double NNfunction_t2t2::neuron0x20bcbb0() {
   double input = input0x20bcbb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20bd580() {
   double input = 1.35956;
   input += synapse0x20bd8c0();
   input += synapse0x20bd900();
   input += synapse0x20bd940();
   input += synapse0x20bd980();
   input += synapse0x20bd9c0();
   input += synapse0x20bda00();
   input += synapse0x20bda40();
   input += synapse0x20bda80();
   input += synapse0x20bdac0();
   input += synapse0x20bdb00();
   input += synapse0x20bdb40();
   input += synapse0x20bdb80();
   input += synapse0x20bdbc0();
   input += synapse0x20bdc00();
   input += synapse0x20bdc40();
   input += synapse0x20bdc80();
   input += synapse0x20bd710();
   input += synapse0x20bd750();
   input += synapse0x20bddd0();
   input += synapse0x20bde10();
   input += synapse0x20bde50();
   input += synapse0x20bde90();
   input += synapse0x20bded0();
   input += synapse0x20bdf10();
   return input;
}

double NNfunction_t2t2::neuron0x20bd580() {
   double input = input0x20bd580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20bdf50() {
   double input = -0.870827;
   input += synapse0x20be290();
   input += synapse0x20be2d0();
   input += synapse0x20be310();
   input += synapse0x20be350();
   input += synapse0x20be390();
   input += synapse0x20be3d0();
   input += synapse0x20be410();
   input += synapse0x20be450();
   input += synapse0x20be490();
   input += synapse0x20be4d0();
   input += synapse0x20be510();
   input += synapse0x20be550();
   input += synapse0x20be590();
   input += synapse0x20be5d0();
   input += synapse0x20be610();
   input += synapse0x20be650();
   input += synapse0x20be0e0();
   input += synapse0x20be120();
   input += synapse0x20be7a0();
   input += synapse0x20be7e0();
   input += synapse0x20be820();
   input += synapse0x20be860();
   input += synapse0x20be8a0();
   input += synapse0x20be8e0();
   return input;
}

double NNfunction_t2t2::neuron0x20bdf50() {
   double input = input0x20bdf50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20be920() {
   double input = -1.76741;
   input += synapse0x20bec60();
   input += synapse0x20beca0();
   input += synapse0x20bece0();
   input += synapse0x20bed20();
   input += synapse0x20bed60();
   input += synapse0x20beda0();
   input += synapse0x20bede0();
   input += synapse0x20bee20();
   input += synapse0x20bee60();
   input += synapse0x20beea0();
   input += synapse0x20beee0();
   input += synapse0x20bef20();
   input += synapse0x20bef60();
   input += synapse0x20befa0();
   input += synapse0x20befe0();
   input += synapse0x20bf020();
   input += synapse0x20beab0();
   input += synapse0x20beaf0();
   input += synapse0x20bf170();
   input += synapse0x20bf1b0();
   input += synapse0x20bf1f0();
   input += synapse0x20bf230();
   input += synapse0x20bf270();
   input += synapse0x20bf2b0();
   return input;
}

double NNfunction_t2t2::neuron0x20be920() {
   double input = input0x20be920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20bf2f0() {
   double input = -0.231696;
   input += synapse0x20bf630();
   input += synapse0x20bf670();
   input += synapse0x20bf6b0();
   input += synapse0x20bf6f0();
   input += synapse0x20bf730();
   input += synapse0x20bf770();
   input += synapse0x20bf7b0();
   input += synapse0x20bf7f0();
   input += synapse0x20bf830();
   input += synapse0x20b79f0();
   input += synapse0x20b7a30();
   input += synapse0x20b7a70();
   input += synapse0x20b7ab0();
   input += synapse0x20b7af0();
   input += synapse0x20b7b30();
   input += synapse0x20b7b70();
   input += synapse0x20bf480();
   input += synapse0x20bf4c0();
   input += synapse0x20b7cc0();
   input += synapse0x20b7d00();
   input += synapse0x20b7d40();
   input += synapse0x20b7d80();
   input += synapse0x20b7dc0();
   input += synapse0x20b7e00();
   return input;
}

double NNfunction_t2t2::neuron0x20bf2f0() {
   double input = input0x20bf2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20b7e40() {
   double input = 0.259193;
   input += synapse0x20b8180();
   input += synapse0x20b81c0();
   input += synapse0x20b8200();
   input += synapse0x20b8240();
   input += synapse0x20b8280();
   input += synapse0x20b82c0();
   input += synapse0x20b8300();
   input += synapse0x20b8340();
   input += synapse0x20b8380();
   input += synapse0x20b83c0();
   input += synapse0x20b8400();
   input += synapse0x20b8440();
   input += synapse0x20b8480();
   input += synapse0x20b84c0();
   input += synapse0x20b8500();
   input += synapse0x20b8540();
   input += synapse0x20b7fd0();
   input += synapse0x20b8010();
   input += synapse0x20b8690();
   input += synapse0x20b86d0();
   input += synapse0x20b8710();
   input += synapse0x20b8750();
   input += synapse0x20b8790();
   input += synapse0x20b87d0();
   return input;
}

double NNfunction_t2t2::neuron0x20b7e40() {
   double input = input0x20b7e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20b8810() {
   double input = 0.438444;
   input += synapse0x20b89a0();
   input += synapse0x20c1a30();
   input += synapse0x20c1a70();
   input += synapse0x20c1ab0();
   input += synapse0x20c1af0();
   input += synapse0x20c1b30();
   input += synapse0x20c1b70();
   input += synapse0x20c1bb0();
   input += synapse0x20c1bf0();
   input += synapse0x20c1c30();
   input += synapse0x20c1c70();
   input += synapse0x20c1cb0();
   input += synapse0x20c1cf0();
   input += synapse0x20c1d30();
   input += synapse0x20c1d70();
   input += synapse0x20c1db0();
   input += synapse0x20c1880();
   input += synapse0x20c18c0();
   input += synapse0x20c1f00();
   input += synapse0x20c1f40();
   input += synapse0x20c1f80();
   input += synapse0x20c1fc0();
   input += synapse0x20c2000();
   input += synapse0x20c2040();
   return input;
}

double NNfunction_t2t2::neuron0x20b8810() {
   double input = input0x20b8810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20c2080() {
   double input = -1.30391;
   input += synapse0x20c23c0();
   input += synapse0x20c2400();
   input += synapse0x20c2440();
   input += synapse0x20c2480();
   input += synapse0x20c24c0();
   input += synapse0x20c2500();
   input += synapse0x20c2540();
   input += synapse0x20c2580();
   input += synapse0x20c25c0();
   input += synapse0x20c2600();
   input += synapse0x20c2640();
   input += synapse0x20c2680();
   input += synapse0x20c26c0();
   input += synapse0x20c2700();
   input += synapse0x20c2740();
   input += synapse0x20c2780();
   input += synapse0x20c2210();
   input += synapse0x20c2250();
   input += synapse0x20c28d0();
   input += synapse0x20c2910();
   input += synapse0x20c2950();
   input += synapse0x20c2990();
   input += synapse0x20c29d0();
   input += synapse0x20c2a10();
   return input;
}

double NNfunction_t2t2::neuron0x20c2080() {
   double input = input0x20c2080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20c2a50() {
   double input = -0.832968;
   input += synapse0x20c2d90();
   input += synapse0x20c2dd0();
   input += synapse0x20c2e10();
   input += synapse0x20c2e50();
   input += synapse0x20c2e90();
   input += synapse0x20c2ed0();
   input += synapse0x20c2f10();
   input += synapse0x20c2f50();
   input += synapse0x20c2f90();
   input += synapse0x20c2fd0();
   input += synapse0x20c3010();
   input += synapse0x20c3050();
   input += synapse0x20c3090();
   input += synapse0x20c30d0();
   input += synapse0x20c3110();
   input += synapse0x20c3150();
   input += synapse0x20c2be0();
   input += synapse0x20c2c20();
   input += synapse0x20c32a0();
   input += synapse0x20c32e0();
   input += synapse0x20c3320();
   input += synapse0x20c3360();
   input += synapse0x20c33a0();
   input += synapse0x20c33e0();
   return input;
}

double NNfunction_t2t2::neuron0x20c2a50() {
   double input = input0x20c2a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20c3420() {
   double input = -0.29709;
   input += synapse0x20c3760();
   input += synapse0x20c37a0();
   input += synapse0x20c37e0();
   input += synapse0x20c3820();
   input += synapse0x20c3860();
   input += synapse0x20c38a0();
   input += synapse0x20c38e0();
   input += synapse0x20c3920();
   input += synapse0x20c3960();
   input += synapse0x20c39a0();
   input += synapse0x20c39e0();
   input += synapse0x20c3a20();
   input += synapse0x20c3a60();
   input += synapse0x20c3aa0();
   input += synapse0x20c3ae0();
   input += synapse0x20c3b20();
   input += synapse0x20c35b0();
   input += synapse0x20c35f0();
   input += synapse0x20c3c70();
   input += synapse0x20c3cb0();
   input += synapse0x20c3cf0();
   input += synapse0x20c3d30();
   input += synapse0x20c3d70();
   input += synapse0x20c3db0();
   return input;
}

double NNfunction_t2t2::neuron0x20c3420() {
   double input = input0x20c3420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20c3df0() {
   double input = -2.35896;
   input += synapse0x20c4130();
   input += synapse0x20c4170();
   input += synapse0x20c41b0();
   input += synapse0x20c41f0();
   input += synapse0x20c4230();
   input += synapse0x20c4270();
   input += synapse0x20c42b0();
   input += synapse0x20c42f0();
   input += synapse0x20c4330();
   input += synapse0x20c4370();
   input += synapse0x20c43b0();
   input += synapse0x20c43f0();
   input += synapse0x20c4430();
   input += synapse0x20c4470();
   input += synapse0x20c44b0();
   input += synapse0x20c44f0();
   input += synapse0x20c3f80();
   input += synapse0x20c3fc0();
   input += synapse0x20c4640();
   input += synapse0x20c4680();
   input += synapse0x20c46c0();
   input += synapse0x20c4700();
   input += synapse0x20c4740();
   input += synapse0x20c4780();
   return input;
}

double NNfunction_t2t2::neuron0x20c3df0() {
   double input = input0x20c3df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20c47c0() {
   double input = -0.379926;
   input += synapse0x20c4b00();
   input += synapse0x20c4b40();
   input += synapse0x20c4b80();
   input += synapse0x20c4bc0();
   input += synapse0x20c4c00();
   input += synapse0x20c4c40();
   input += synapse0x20c4c80();
   input += synapse0x20c4cc0();
   input += synapse0x20c4d00();
   input += synapse0x20c4d40();
   input += synapse0x20c4d80();
   input += synapse0x20c4dc0();
   input += synapse0x20c4e00();
   input += synapse0x20c4e40();
   input += synapse0x20c4e80();
   input += synapse0x20c4ec0();
   input += synapse0x20c4950();
   input += synapse0x20c4990();
   input += synapse0x20c5010();
   input += synapse0x20c5050();
   input += synapse0x20c5090();
   input += synapse0x20c50d0();
   input += synapse0x20c5110();
   input += synapse0x20c5150();
   return input;
}

double NNfunction_t2t2::neuron0x20c47c0() {
   double input = input0x20c47c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20c5190() {
   double input = 1.47119;
   input += synapse0x20c54d0();
   input += synapse0x20c5510();
   input += synapse0x20c5550();
   input += synapse0x20c5590();
   input += synapse0x20c55d0();
   input += synapse0x20c5610();
   input += synapse0x20c5650();
   input += synapse0x20c5690();
   input += synapse0x20c56d0();
   input += synapse0x20c5710();
   input += synapse0x20c5750();
   input += synapse0x20c5790();
   input += synapse0x20c57d0();
   input += synapse0x20c5810();
   input += synapse0x20c5850();
   input += synapse0x20c5890();
   input += synapse0x20c5320();
   input += synapse0x20c5360();
   input += synapse0x20c59e0();
   input += synapse0x20c5a20();
   input += synapse0x20c5a60();
   input += synapse0x20c5aa0();
   input += synapse0x20c5ae0();
   input += synapse0x20c5b20();
   return input;
}

double NNfunction_t2t2::neuron0x20c5190() {
   double input = input0x20c5190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20c5b60() {
   double input = 0.606297;
   input += synapse0x20c5ea0();
   input += synapse0x20c5ee0();
   input += synapse0x20c5f20();
   input += synapse0x20c5f60();
   input += synapse0x20c5fa0();
   input += synapse0x20c5fe0();
   input += synapse0x20c6020();
   input += synapse0x20c6060();
   input += synapse0x20c60a0();
   input += synapse0x20c60e0();
   input += synapse0x20c6120();
   input += synapse0x20c6160();
   input += synapse0x20c61a0();
   input += synapse0x20c61e0();
   input += synapse0x20c6220();
   input += synapse0x20c6260();
   input += synapse0x20c5cf0();
   input += synapse0x20c5d30();
   input += synapse0x20c63b0();
   input += synapse0x20c63f0();
   input += synapse0x20c6430();
   input += synapse0x20c6470();
   input += synapse0x20c64b0();
   input += synapse0x20c64f0();
   return input;
}

double NNfunction_t2t2::neuron0x20c5b60() {
   double input = input0x20c5b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20c6530() {
   double input = 1.41504;
   input += synapse0x20c6870();
   input += synapse0x20bae40();
   input += synapse0x20bae80();
   input += synapse0x20baec0();
   input += synapse0x20bb110();
   input += synapse0x20bb150();
   input += synapse0x20bb190();
   input += synapse0x20bb3e0();
   input += synapse0x20bb420();
   input += synapse0x20bb670();
   input += synapse0x20bb6b0();
   input += synapse0x20bb6f0();
   input += synapse0x20bb940();
   input += synapse0x20bb980();
   input += synapse0x20bbbd0();
   input += synapse0x20bbc10();
   input += synapse0x20c66c0();
   input += synapse0x20c6700();
   input += synapse0x20bbd60();
   input += synapse0x20bc270();
   input += synapse0x20bc2b0();
   input += synapse0x20bc2f0();
   input += synapse0x20bc540();
   input += synapse0x20bc580();
   return input;
}

double NNfunction_t2t2::neuron0x20c6530() {
   double input = input0x20c6530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20bc5c0() {
   double input = -0.96925;
   input += synapse0x20bbe30();
   input += synapse0x20bbe70();
   input += synapse0x20bbeb0();
   input += synapse0x20bbef0();
   input += synapse0x20bc870();
   input += synapse0x20c8bc0();
   input += synapse0x20c8c00();
   input += synapse0x20c8c40();
   input += synapse0x20c8c80();
   input += synapse0x20c8cc0();
   input += synapse0x20c8d00();
   input += synapse0x20c8d40();
   input += synapse0x20c8d80();
   input += synapse0x20c8dc0();
   input += synapse0x20c8e00();
   input += synapse0x20c8e40();
   input += synapse0x20bc750();
   input += synapse0x20bc790();
   input += synapse0x20c8f90();
   input += synapse0x20c8fd0();
   input += synapse0x20c9010();
   input += synapse0x20c9050();
   input += synapse0x20c9090();
   input += synapse0x20c90d0();
   return input;
}

double NNfunction_t2t2::neuron0x20bc5c0() {
   double input = input0x20bc5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20c9110() {
   double input = -0.113544;
   input += synapse0x20c9450();
   input += synapse0x20c9490();
   input += synapse0x20c94d0();
   input += synapse0x20c9510();
   input += synapse0x20c9550();
   input += synapse0x20c9590();
   input += synapse0x20c95d0();
   input += synapse0x20c9610();
   input += synapse0x20c9650();
   input += synapse0x20c9690();
   input += synapse0x20c96d0();
   input += synapse0x20c9710();
   input += synapse0x20c9750();
   input += synapse0x20c9790();
   input += synapse0x20c97d0();
   input += synapse0x20c9810();
   input += synapse0x20c92a0();
   input += synapse0x20c92e0();
   input += synapse0x20c9960();
   input += synapse0x20c99a0();
   input += synapse0x20c99e0();
   input += synapse0x20c9a20();
   input += synapse0x20c9a60();
   input += synapse0x20c9aa0();
   return input;
}

double NNfunction_t2t2::neuron0x20c9110() {
   double input = input0x20c9110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20c9ae0() {
   double input = 0.361482;
   input += synapse0x20c9e20();
   input += synapse0x20c9e60();
   input += synapse0x20c9ea0();
   input += synapse0x20c9ee0();
   input += synapse0x20c9f20();
   input += synapse0x20c9f60();
   input += synapse0x20c9fa0();
   input += synapse0x20c9fe0();
   input += synapse0x20ca020();
   input += synapse0x20ca060();
   input += synapse0x20ca0a0();
   input += synapse0x20ca0e0();
   input += synapse0x20ca120();
   input += synapse0x20ca160();
   input += synapse0x20ca1a0();
   input += synapse0x20ca1e0();
   input += synapse0x20c9c70();
   input += synapse0x20c9cb0();
   input += synapse0x20ca330();
   input += synapse0x20ca370();
   input += synapse0x20ca3b0();
   input += synapse0x20ca3f0();
   input += synapse0x20ca430();
   input += synapse0x20ca470();
   return input;
}

double NNfunction_t2t2::neuron0x20c9ae0() {
   double input = input0x20c9ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20ca4b0() {
   double input = -0.693749;
   input += synapse0x20ca7f0();
   input += synapse0x20ca830();
   input += synapse0x20ca870();
   input += synapse0x20ca8b0();
   input += synapse0x20ca8f0();
   input += synapse0x20ca930();
   input += synapse0x20ca970();
   input += synapse0x20ca9b0();
   input += synapse0x20ca9f0();
   input += synapse0x20caa30();
   input += synapse0x20caa70();
   input += synapse0x20caab0();
   input += synapse0x20caaf0();
   input += synapse0x20cab30();
   input += synapse0x20cab70();
   input += synapse0x20cabb0();
   input += synapse0x20ca640();
   input += synapse0x20ca680();
   input += synapse0x20cad00();
   input += synapse0x20cad40();
   input += synapse0x20cad80();
   input += synapse0x20cadc0();
   input += synapse0x20cae00();
   input += synapse0x20cae40();
   return input;
}

double NNfunction_t2t2::neuron0x20ca4b0() {
   double input = input0x20ca4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20cae80() {
   double input = -1.14212;
   input += synapse0x20cb1c0();
   input += synapse0x20cb200();
   input += synapse0x20cb240();
   input += synapse0x20cb280();
   input += synapse0x20cb2c0();
   input += synapse0x20cb300();
   input += synapse0x20cb340();
   input += synapse0x20cb380();
   input += synapse0x20cb3c0();
   input += synapse0x20cb400();
   input += synapse0x20cb440();
   input += synapse0x20cb480();
   input += synapse0x20cb4c0();
   input += synapse0x20cb500();
   input += synapse0x20cb540();
   input += synapse0x20cb580();
   input += synapse0x20cb010();
   input += synapse0x20cb050();
   input += synapse0x20cb6d0();
   input += synapse0x20cb710();
   input += synapse0x20cb750();
   input += synapse0x20cb790();
   input += synapse0x20cb7d0();
   input += synapse0x20cb810();
   return input;
}

double NNfunction_t2t2::neuron0x20cae80() {
   double input = input0x20cae80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20cb850() {
   double input = -0.27388;
   input += synapse0x20cbb90();
   input += synapse0x20cbbd0();
   input += synapse0x20cbc10();
   input += synapse0x20cbc50();
   input += synapse0x20cbc90();
   input += synapse0x20cbcd0();
   input += synapse0x20cbd10();
   input += synapse0x20cbd50();
   input += synapse0x20cbd90();
   input += synapse0x20cbdd0();
   input += synapse0x20cbe10();
   input += synapse0x20cbe50();
   input += synapse0x20cbe90();
   input += synapse0x20cbed0();
   input += synapse0x20cbf10();
   input += synapse0x20cbf50();
   input += synapse0x20cb9e0();
   input += synapse0x20cba20();
   input += synapse0x20cc0a0();
   input += synapse0x20cc0e0();
   input += synapse0x20cc120();
   input += synapse0x20cc160();
   input += synapse0x20cc1a0();
   input += synapse0x20cc1e0();
   return input;
}

double NNfunction_t2t2::neuron0x20cb850() {
   double input = input0x20cb850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20cc220() {
   double input = 0.14332;
   input += synapse0x20cc560();
   input += synapse0x20cc5a0();
   input += synapse0x20cc5e0();
   input += synapse0x20cc620();
   input += synapse0x20cc660();
   input += synapse0x20cc6a0();
   input += synapse0x20cc6e0();
   input += synapse0x20cc720();
   input += synapse0x20cc760();
   input += synapse0x20cc7a0();
   input += synapse0x20cc7e0();
   input += synapse0x20cc820();
   input += synapse0x20cc860();
   input += synapse0x20cc8a0();
   input += synapse0x20cc8e0();
   input += synapse0x20cc920();
   input += synapse0x20cc3b0();
   input += synapse0x20cc3f0();
   input += synapse0x20cca70();
   input += synapse0x20ccab0();
   input += synapse0x20ccaf0();
   input += synapse0x20ccb30();
   input += synapse0x20ccb70();
   input += synapse0x20ccbb0();
   return input;
}

double NNfunction_t2t2::neuron0x20cc220() {
   double input = input0x20cc220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20ccbf0() {
   double input = 1.44274;
   input += synapse0x20ccf30();
   input += synapse0x20ccf70();
   input += synapse0x20ccfb0();
   input += synapse0x20ccff0();
   input += synapse0x20cd030();
   input += synapse0x20cd070();
   input += synapse0x20cd0b0();
   input += synapse0x20cd0f0();
   input += synapse0x20cd130();
   input += synapse0x20cd170();
   input += synapse0x20cd1b0();
   input += synapse0x20cd1f0();
   input += synapse0x20cd230();
   input += synapse0x20cd270();
   input += synapse0x20cd2b0();
   input += synapse0x20cd2f0();
   input += synapse0x20ccd80();
   input += synapse0x20ccdc0();
   input += synapse0x20cd440();
   input += synapse0x20cd480();
   input += synapse0x20cd4c0();
   input += synapse0x20cd500();
   input += synapse0x20cd540();
   input += synapse0x20cd580();
   return input;
}

double NNfunction_t2t2::neuron0x20ccbf0() {
   double input = input0x20ccbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20cd5c0() {
   double input = -1.61235;
   input += synapse0x20b6030();
   input += synapse0x20b6070();
   input += synapse0x20b60b0();
   input += synapse0x20b60f0();
   input += synapse0x20b6130();
   input += synapse0x20b6170();
   input += synapse0x20b61b0();
   input += synapse0x20b61f0();
   input += synapse0x20cdd10();
   input += synapse0x20cdd50();
   input += synapse0x20cdd90();
   input += synapse0x20cddd0();
   input += synapse0x20cde10();
   input += synapse0x20cde50();
   input += synapse0x20cde90();
   input += synapse0x20cded0();
   input += synapse0x20cd750();
   input += synapse0x20cd790();
   input += synapse0x20ce020();
   input += synapse0x20ce060();
   input += synapse0x20ce0a0();
   input += synapse0x20ce0e0();
   input += synapse0x20ce120();
   input += synapse0x20ce160();
   return input;
}

double NNfunction_t2t2::neuron0x20cd5c0() {
   double input = input0x20cd5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20ce1a0() {
   double input = 1.26715;
   input += synapse0x20ce4e0();
   input += synapse0x20ce520();
   input += synapse0x20ce560();
   input += synapse0x20ce5a0();
   input += synapse0x20ce5e0();
   input += synapse0x20ce620();
   input += synapse0x20ce660();
   input += synapse0x20ce6a0();
   input += synapse0x20ce6e0();
   input += synapse0x20ce720();
   input += synapse0x20ce760();
   input += synapse0x20ce7a0();
   input += synapse0x20ce7e0();
   input += synapse0x20ce820();
   input += synapse0x20ce860();
   input += synapse0x20ce8a0();
   input += synapse0x20ce330();
   input += synapse0x20ce370();
   input += synapse0x20ce9f0();
   input += synapse0x20cea30();
   input += synapse0x20cea70();
   input += synapse0x20ceab0();
   input += synapse0x20ceaf0();
   input += synapse0x20ceb30();
   return input;
}

double NNfunction_t2t2::neuron0x20ce1a0() {
   double input = input0x20ce1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20ceb70() {
   double input = -0.716959;
   input += synapse0x20ceeb0();
   input += synapse0x20ceef0();
   input += synapse0x20cef30();
   input += synapse0x20cef70();
   input += synapse0x20cefb0();
   input += synapse0x20ceff0();
   input += synapse0x20cf030();
   input += synapse0x20cf070();
   input += synapse0x20cf0b0();
   input += synapse0x20cf0f0();
   input += synapse0x20cf130();
   input += synapse0x20cf170();
   input += synapse0x20cf1b0();
   input += synapse0x20cf1f0();
   input += synapse0x20cf230();
   input += synapse0x20cf270();
   input += synapse0x20ced00();
   input += synapse0x20ced40();
   input += synapse0x20bf870();
   input += synapse0x20bf8b0();
   input += synapse0x20bf8f0();
   input += synapse0x20bf930();
   input += synapse0x20bf970();
   input += synapse0x20bf9b0();
   return input;
}

double NNfunction_t2t2::neuron0x20ceb70() {
   double input = input0x20ceb70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20bf9f0() {
   double input = 0.134652;
   input += synapse0x20bfd30();
   input += synapse0x20bfd70();
   input += synapse0x20bfdb0();
   input += synapse0x20bfdf0();
   input += synapse0x20bfe30();
   input += synapse0x20bfe70();
   input += synapse0x20bfeb0();
   input += synapse0x20bfef0();
   input += synapse0x20bff30();
   input += synapse0x20bff70();
   input += synapse0x20bffb0();
   input += synapse0x20bfff0();
   input += synapse0x20c0030();
   input += synapse0x20c0070();
   input += synapse0x20c00b0();
   input += synapse0x20c00f0();
   input += synapse0x20bfb80();
   input += synapse0x20bfbc0();
   input += synapse0x20c0240();
   input += synapse0x20c0280();
   input += synapse0x20c02c0();
   input += synapse0x20c0300();
   input += synapse0x20c0340();
   input += synapse0x20c0380();
   return input;
}

double NNfunction_t2t2::neuron0x20bf9f0() {
   double input = input0x20bf9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20c03c0() {
   double input = 1.18618;
   input += synapse0x20c0700();
   input += synapse0x20c0740();
   input += synapse0x20c0780();
   input += synapse0x20c07c0();
   input += synapse0x20c0800();
   input += synapse0x20c0840();
   input += synapse0x20c0880();
   input += synapse0x20c08c0();
   input += synapse0x20c0900();
   input += synapse0x20c0940();
   input += synapse0x20c0980();
   input += synapse0x20c09c0();
   input += synapse0x20c0a00();
   input += synapse0x20c0a40();
   input += synapse0x20c0a80();
   input += synapse0x20c0ac0();
   input += synapse0x20c0550();
   input += synapse0x20c0590();
   input += synapse0x20c0c10();
   input += synapse0x20c0c50();
   input += synapse0x20c0c90();
   input += synapse0x20c0cd0();
   input += synapse0x20c0d10();
   input += synapse0x20c0d50();
   return input;
}

double NNfunction_t2t2::neuron0x20c03c0() {
   double input = input0x20c03c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20c0d90() {
   double input = -1.37427;
   input += synapse0x20c10d0();
   input += synapse0x20c1110();
   input += synapse0x20c1150();
   input += synapse0x20c1190();
   input += synapse0x20c11d0();
   input += synapse0x20c1210();
   input += synapse0x20c1250();
   input += synapse0x20c1290();
   input += synapse0x20c12d0();
   input += synapse0x20c1310();
   input += synapse0x20c1350();
   input += synapse0x20c1390();
   input += synapse0x20c13d0();
   input += synapse0x20c1410();
   input += synapse0x20c1450();
   input += synapse0x20c1490();
   input += synapse0x20c0f20();
   input += synapse0x20c0f60();
   input += synapse0x20c15e0();
   input += synapse0x20c1620();
   input += synapse0x20c1660();
   input += synapse0x20c16a0();
   input += synapse0x20c16e0();
   input += synapse0x20c1720();
   return input;
}

double NNfunction_t2t2::neuron0x20c0d90() {
   double input = input0x20c0d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20d33d0() {
   double input = 0.364157;
   input += synapse0x20d35f0();
   input += synapse0x20d3630();
   input += synapse0x20d3670();
   input += synapse0x20d36b0();
   input += synapse0x20d36f0();
   input += synapse0x20d3730();
   input += synapse0x20d3770();
   input += synapse0x20d37b0();
   input += synapse0x20d37f0();
   input += synapse0x20d3830();
   input += synapse0x20d3870();
   input += synapse0x20d38b0();
   input += synapse0x20d38f0();
   input += synapse0x20d3930();
   input += synapse0x20d3970();
   input += synapse0x20d39b0();
   input += synapse0x20c1760();
   input += synapse0x20c17a0();
   input += synapse0x20d3b00();
   input += synapse0x20d3b40();
   input += synapse0x20d3b80();
   input += synapse0x20d3bc0();
   input += synapse0x20d3c00();
   input += synapse0x20d3c40();
   return input;
}

double NNfunction_t2t2::neuron0x20d33d0() {
   double input = input0x20d33d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20d3c80() {
   double input = 0.89436;
   input += synapse0x20d3fc0();
   input += synapse0x20d4000();
   input += synapse0x20d4040();
   input += synapse0x20d4080();
   input += synapse0x20d40c0();
   input += synapse0x20d4100();
   input += synapse0x20d4140();
   input += synapse0x20d4180();
   input += synapse0x20d41c0();
   input += synapse0x20d4200();
   input += synapse0x20d4240();
   input += synapse0x20d4280();
   input += synapse0x20d42c0();
   input += synapse0x20d4300();
   input += synapse0x20d4340();
   input += synapse0x20d4380();
   input += synapse0x20d3e10();
   input += synapse0x20d3e50();
   input += synapse0x20d44d0();
   input += synapse0x20d4510();
   input += synapse0x20d4550();
   input += synapse0x20d4590();
   input += synapse0x20d45d0();
   input += synapse0x20d4610();
   return input;
}

double NNfunction_t2t2::neuron0x20d3c80() {
   double input = input0x20d3c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20d4650() {
   double input = -0.293414;
   input += synapse0x20d4990();
   input += synapse0x20d49d0();
   input += synapse0x20d4a10();
   input += synapse0x20d4a50();
   input += synapse0x20d4a90();
   input += synapse0x20d4ad0();
   input += synapse0x20d4b10();
   input += synapse0x20d4b50();
   input += synapse0x20d4b90();
   input += synapse0x20d4bd0();
   input += synapse0x20d4c10();
   input += synapse0x20d4c50();
   input += synapse0x20d4c90();
   input += synapse0x20d4cd0();
   input += synapse0x20d4d10();
   input += synapse0x20d4d50();
   input += synapse0x20d47e0();
   input += synapse0x20d4820();
   input += synapse0x20d4ea0();
   input += synapse0x20d4ee0();
   input += synapse0x20d4f20();
   input += synapse0x20d4f60();
   input += synapse0x20d4fa0();
   input += synapse0x20d4fe0();
   return input;
}

double NNfunction_t2t2::neuron0x20d4650() {
   double input = input0x20d4650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20d5020() {
   double input = 1.02994;
   input += synapse0x20d5360();
   input += synapse0x20d53a0();
   input += synapse0x20d53e0();
   input += synapse0x20d5420();
   input += synapse0x20d5460();
   input += synapse0x20d54a0();
   input += synapse0x20d54e0();
   input += synapse0x20d5520();
   input += synapse0x20d5560();
   input += synapse0x20d55a0();
   input += synapse0x20d55e0();
   input += synapse0x20d5620();
   input += synapse0x20d5660();
   input += synapse0x20d56a0();
   input += synapse0x20d56e0();
   input += synapse0x20d5720();
   input += synapse0x20d51b0();
   input += synapse0x20d51f0();
   input += synapse0x20d5870();
   input += synapse0x20d58b0();
   input += synapse0x20d58f0();
   input += synapse0x20d5930();
   input += synapse0x20d5970();
   input += synapse0x20d59b0();
   return input;
}

double NNfunction_t2t2::neuron0x20d5020() {
   double input = input0x20d5020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20dc220() {
   double input = -0.00609596;
   input += synapse0x20b1f50();
   input += synapse0x20b1f90();
   input += synapse0x20b3460();
   input += synapse0x20b34a0();
   input += synapse0x20b3e30();
   input += synapse0x20b3e70();
   input += synapse0x20b4c00();
   input += synapse0x20b4c40();
   input += synapse0x20b55d0();
   input += synapse0x20b5610();
   input += synapse0x20b5fa0();
   input += synapse0x20b5fe0();
   input += synapse0x20b6a80();
   input += synapse0x20b6ac0();
   input += synapse0x20b7450();
   input += synapse0x20b7490();
   input += synapse0x20b4530();
   input += synapse0x20b4570();
   input += synapse0x20b9000();
   input += synapse0x20b9040();
   input += synapse0x20b99d0();
   input += synapse0x20b9a10();
   input += synapse0x20ba3a0();
   input += synapse0x20ba3e0();
   input += synapse0x20bad70();
   input += synapse0x20badb0();
   input += synapse0x20aeee0();
   input += synapse0x20aef20();
   input += synapse0x20bce60();
   input += synapse0x20bcea0();
   input += synapse0x20bd830();
   input += synapse0x20bd870();
   input += synapse0x20be200();
   input += synapse0x20be240();
   input += synapse0x20bebd0();
   input += synapse0x20bec10();
   input += synapse0x20bf5a0();
   input += synapse0x20bf5e0();
   input += synapse0x20b80f0();
   input += synapse0x20b8130();
   input += synapse0x20c19a0();
   input += synapse0x20c19e0();
   input += synapse0x20c2330();
   input += synapse0x20c2370();
   input += synapse0x20c2d00();
   input += synapse0x20c2d40();
   input += synapse0x20c36d0();
   input += synapse0x20c3710();
   input += synapse0x20c40a0();
   input += synapse0x20c40e0();
   return input;
}

double NNfunction_t2t2::neuron0x20dc220() {
   double input = input0x20dc220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20dc5c0() {
   double input = 0.42333;
   input += synapse0x20c67e0();
   input += synapse0x20c6820();
   input += synapse0x20bbda0();
   input += synapse0x20bbde0();
   input += synapse0x20c93c0();
   input += synapse0x20c9400();
   input += synapse0x20c9d90();
   input += synapse0x20c9dd0();
   input += synapse0x20ca760();
   input += synapse0x20ca7a0();
   input += synapse0x20cb130();
   input += synapse0x20cb170();
   input += synapse0x20cbb00();
   input += synapse0x20cbb40();
   input += synapse0x20cc4d0();
   input += synapse0x20cc510();
   input += synapse0x20ccea0();
   input += synapse0x20ccee0();
   input += synapse0x20cd870();
   input += synapse0x20cd8b0();
   input += synapse0x20ce450();
   input += synapse0x20ce490();
   input += synapse0x20cee20();
   input += synapse0x20cee60();
   input += synapse0x20bfca0();
   input += synapse0x20bfce0();
   input += synapse0x20c0670();
   input += synapse0x20c06b0();
   input += synapse0x20c1040();
   input += synapse0x20c1080();
   input += synapse0x20d3560();
   input += synapse0x20d35a0();
   input += synapse0x20d3f30();
   input += synapse0x20d3f70();
   input += synapse0x20d4900();
   input += synapse0x20d4940();
   input += synapse0x20d52d0();
   input += synapse0x20d5310();
   input += synapse0x20b11c0();
   input += synapse0x20b1200();
   input += synapse0x20c4a70();
   input += synapse0x20c4ab0();
   input += synapse0x20d59f0();
   input += synapse0x20d5a30();
   input += synapse0x20d5a70();
   input += synapse0x20d5ab0();
   input += synapse0x20dc960();
   input += synapse0x20dc9a0();
   input += synapse0x20dc9e0();
   input += synapse0x20dca20();
   return input;
}

double NNfunction_t2t2::neuron0x20dc5c0() {
   double input = input0x20dc5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20dca60() {
   double input = -0.717168;
   input += synapse0x20dcda0();
   input += synapse0x20dcde0();
   input += synapse0x20dce20();
   input += synapse0x20dce60();
   input += synapse0x20dcea0();
   input += synapse0x20dcee0();
   input += synapse0x20dcf20();
   input += synapse0x20dcf60();
   input += synapse0x20dcfa0();
   input += synapse0x20dcfe0();
   input += synapse0x20dd020();
   input += synapse0x20dd060();
   input += synapse0x20dd0a0();
   input += synapse0x20dd0e0();
   input += synapse0x20dd120();
   input += synapse0x20dd160();
   input += synapse0x20dcbf0();
   input += synapse0x20dcc30();
   input += synapse0x20dd2b0();
   input += synapse0x20dd2f0();
   input += synapse0x20dd330();
   input += synapse0x20dd370();
   input += synapse0x20dd3b0();
   input += synapse0x20dd3f0();
   input += synapse0x20dd430();
   input += synapse0x20dd470();
   input += synapse0x20dd4b0();
   input += synapse0x20dd4f0();
   input += synapse0x20dd530();
   input += synapse0x20dd570();
   input += synapse0x20dd5b0();
   input += synapse0x20dd5f0();
   input += synapse0x20dd1a0();
   input += synapse0x20dd1e0();
   input += synapse0x20dd220();
   input += synapse0x20dd260();
   input += synapse0x20dd840();
   input += synapse0x20dd880();
   input += synapse0x20dd8c0();
   input += synapse0x20dd900();
   input += synapse0x20dd940();
   input += synapse0x20dd980();
   input += synapse0x20dd9c0();
   input += synapse0x20dda00();
   input += synapse0x20dda40();
   input += synapse0x20dda80();
   input += synapse0x20ddac0();
   input += synapse0x20ddb00();
   input += synapse0x20ddb40();
   input += synapse0x20ddb80();
   return input;
}

double NNfunction_t2t2::neuron0x20dca60() {
   double input = input0x20dca60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20ddbc0() {
   double input = -0.056668;
   input += synapse0x20ddf00();
   input += synapse0x20ddf40();
   input += synapse0x20ddf80();
   input += synapse0x20ddfc0();
   input += synapse0x20de000();
   input += synapse0x20de040();
   input += synapse0x20de080();
   input += synapse0x20de0c0();
   input += synapse0x20de100();
   input += synapse0x20de140();
   input += synapse0x20de180();
   input += synapse0x20de1c0();
   input += synapse0x20de200();
   input += synapse0x20de240();
   input += synapse0x20de280();
   input += synapse0x20de2c0();
   input += synapse0x20ddd50();
   input += synapse0x20ddd90();
   input += synapse0x20de410();
   input += synapse0x20de450();
   input += synapse0x20de490();
   input += synapse0x20de4d0();
   input += synapse0x20de510();
   input += synapse0x20de550();
   input += synapse0x20de590();
   input += synapse0x20de5d0();
   input += synapse0x20de610();
   input += synapse0x20de650();
   input += synapse0x20de690();
   input += synapse0x20de6d0();
   input += synapse0x20de710();
   input += synapse0x20de750();
   input += synapse0x20de300();
   input += synapse0x20de340();
   input += synapse0x20de380();
   input += synapse0x20de3c0();
   input += synapse0x20de9a0();
   input += synapse0x20de9e0();
   input += synapse0x20dea20();
   input += synapse0x20dea60();
   input += synapse0x20deaa0();
   input += synapse0x20deae0();
   input += synapse0x20deb20();
   input += synapse0x20deb60();
   input += synapse0x20deba0();
   input += synapse0x20debe0();
   input += synapse0x20dec20();
   input += synapse0x20dec60();
   input += synapse0x20deca0();
   input += synapse0x20dece0();
   return input;
}

double NNfunction_t2t2::neuron0x20ddbc0() {
   double input = input0x20ddbc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20ded20() {
   double input = 0.436649;
   input += synapse0x20df060();
   input += synapse0x20df0a0();
   input += synapse0x20df0e0();
   input += synapse0x20df120();
   input += synapse0x20df160();
   input += synapse0x20df1a0();
   input += synapse0x20df1e0();
   input += synapse0x20df220();
   input += synapse0x20df260();
   input += synapse0x20df2a0();
   input += synapse0x20df2e0();
   input += synapse0x20df320();
   input += synapse0x20df360();
   input += synapse0x20df3a0();
   input += synapse0x20df3e0();
   input += synapse0x20df420();
   input += synapse0x20deeb0();
   input += synapse0x20deef0();
   input += synapse0x20df570();
   input += synapse0x20df5b0();
   input += synapse0x20df5f0();
   input += synapse0x20df630();
   input += synapse0x20df670();
   input += synapse0x20df6b0();
   input += synapse0x20df6f0();
   input += synapse0x20df730();
   input += synapse0x20df770();
   input += synapse0x20df7b0();
   input += synapse0x20df7f0();
   input += synapse0x20df830();
   input += synapse0x20df870();
   input += synapse0x20df8b0();
   input += synapse0x20df460();
   input += synapse0x20df4a0();
   input += synapse0x20df4e0();
   input += synapse0x20df520();
   input += synapse0x20dfb00();
   input += synapse0x20dfb40();
   input += synapse0x20dfb80();
   input += synapse0x20dfbc0();
   input += synapse0x20dfc00();
   input += synapse0x20dfc40();
   input += synapse0x20dfc80();
   input += synapse0x20dfcc0();
   input += synapse0x20dfd00();
   input += synapse0x20dfd40();
   input += synapse0x20dfd80();
   input += synapse0x20dfdc0();
   input += synapse0x20dfe00();
   input += synapse0x20dfe40();
   return input;
}

double NNfunction_t2t2::neuron0x20ded20() {
   double input = input0x20ded20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t2t2::input0x20dfe80() {
   double input = 4.88216;
   input += synapse0x20b0f60();
   input += synapse0x20e00a0();
   input += synapse0x20e00e0();
   input += synapse0x20e0120();
   input += synapse0x20e0160();
   return input;
}

double NNfunction_t2t2::neuron0x20dfe80() {
   double input = input0x20dfe80();
   return (input * 1)+0;
}

double NNfunction_t2t2::synapse0x1e6bdb0() {
   return (neuron0x20abf40()*0.05043);
}

double NNfunction_t2t2::synapse0x20abe00() {
   return (neuron0x20ac280()*0.127892);
}

double NNfunction_t2t2::synapse0x20abe40() {
   return (neuron0x20ac5c0()*-0.0231722);
}

double NNfunction_t2t2::synapse0x20b1250() {
   return (neuron0x20ac900()*1.03786);
}

double NNfunction_t2t2::synapse0x20b1290() {
   return (neuron0x20acc40()*-0.0329056);
}

double NNfunction_t2t2::synapse0x20b12d0() {
   return (neuron0x20acf80()*0.00193918);
}

double NNfunction_t2t2::synapse0x20b1310() {
   return (neuron0x20ad2c0()*-0.0220221);
}

double NNfunction_t2t2::synapse0x20b1350() {
   return (neuron0x20ad600()*0.00696246);
}

double NNfunction_t2t2::synapse0x20b1390() {
   return (neuron0x20ad940()*0.0898115);
}

double NNfunction_t2t2::synapse0x20b13d0() {
   return (neuron0x20adc80()*0.036024);
}

double NNfunction_t2t2::synapse0x20b1410() {
   return (neuron0x20adfc0()*0.0150856);
}

double NNfunction_t2t2::synapse0x20b1450() {
   return (neuron0x20ae300()*0.132388);
}

double NNfunction_t2t2::synapse0x20b1490() {
   return (neuron0x20ae640()*0.134425);
}

double NNfunction_t2t2::synapse0x20b14d0() {
   return (neuron0x20ae980()*0.607104);
}

double NNfunction_t2t2::synapse0x20b1510() {
   return (neuron0x20aecc0()*-0.0461463);
}

double NNfunction_t2t2::synapse0x20b1550() {
   return (neuron0x20af000()*-0.067082);
}

double NNfunction_t2t2::synapse0x20abd70() {
   return (neuron0x20af340()*0.309633);
}

double NNfunction_t2t2::synapse0x20abdb0() {
   return (neuron0x20af8a0()*-0.287877);
}

double NNfunction_t2t2::synapse0x1e5d610() {
   return (neuron0x20afac0()*0.107625);
}

double NNfunction_t2t2::synapse0x1e5d650() {
   return (neuron0x20afe00()*-0.0288957);
}

double NNfunction_t2t2::synapse0x20b17b0() {
   return (neuron0x20b0140()*-0.0607036);
}

double NNfunction_t2t2::synapse0x20b17f0() {
   return (neuron0x20b0480()*-0.0232933);
}

double NNfunction_t2t2::synapse0x20b1830() {
   return (neuron0x20b07c0()*-0.0397549);
}

double NNfunction_t2t2::synapse0x20b1870() {
   return (neuron0x20b0b00()*0.383477);
}

double NNfunction_t2t2::synapse0x20b1bf0() {
   return (neuron0x20abf40()*-0.0515616);
}

double NNfunction_t2t2::synapse0x20b1c30() {
   return (neuron0x20ac280()*0.00856641);
}

double NNfunction_t2t2::synapse0x20b1c70() {
   return (neuron0x20ac5c0()*0.159963);
}

double NNfunction_t2t2::synapse0x20b1cb0() {
   return (neuron0x20ac900()*-0.185656);
}

double NNfunction_t2t2::synapse0x20b1cf0() {
   return (neuron0x20acc40()*-0.0213392);
}

double NNfunction_t2t2::synapse0x20b1d30() {
   return (neuron0x20acf80()*-0.017627);
}

double NNfunction_t2t2::synapse0x20b1d70() {
   return (neuron0x20ad2c0()*-0.00510751);
}

double NNfunction_t2t2::synapse0x20b1db0() {
   return (neuron0x20ad600()*0.0030213);
}

double NNfunction_t2t2::synapse0x20b1df0() {
   return (neuron0x20ad940()*-0.00638431);
}

double NNfunction_t2t2::synapse0x20b16a0() {
   return (neuron0x20adc80()*-0.0113358);
}

double NNfunction_t2t2::synapse0x20b16e0() {
   return (neuron0x20adfc0()*0.00309194);
}

double NNfunction_t2t2::synapse0x20b1720() {
   return (neuron0x20ae300()*0.00360959);
}

double NNfunction_t2t2::synapse0x20b1760() {
   return (neuron0x20ae640()*-0.0158324);
}

double NNfunction_t2t2::synapse0x20b2040() {
   return (neuron0x20ae980()*-0.349162);
}

double NNfunction_t2t2::synapse0x20b2080() {
   return (neuron0x20aecc0()*0.00536216);
}

double NNfunction_t2t2::synapse0x20b20c0() {
   return (neuron0x20af000()*0.00370021);
}

double NNfunction_t2t2::synapse0x20b1a40() {
   return (neuron0x20af340()*0.0503911);
}

double NNfunction_t2t2::synapse0x20b1a80() {
   return (neuron0x20af8a0()*0.00618484);
}

double NNfunction_t2t2::synapse0x20b2210() {
   return (neuron0x20afac0()*-0.00823918);
}

double NNfunction_t2t2::synapse0x20b2250() {
   return (neuron0x20afe00()*0.0465143);
}

double NNfunction_t2t2::synapse0x20b2290() {
   return (neuron0x20b0140()*-0.0319675);
}

double NNfunction_t2t2::synapse0x20b22d0() {
   return (neuron0x20b0480()*-0.0112713);
}

double NNfunction_t2t2::synapse0x20b2310() {
   return (neuron0x20b07c0()*0.000259513);
}

double NNfunction_t2t2::synapse0x20b2350() {
   return (neuron0x20b0b00()*-0.174199);
}

double NNfunction_t2t2::synapse0x20b26d0() {
   return (neuron0x20abf40()*0.38873);
}

double NNfunction_t2t2::synapse0x20b2710() {
   return (neuron0x20ac280()*-0.0134131);
}

double NNfunction_t2t2::synapse0x20b2750() {
   return (neuron0x20ac5c0()*0.0215525);
}

double NNfunction_t2t2::synapse0x20b2790() {
   return (neuron0x20ac900()*-0.00656785);
}

double NNfunction_t2t2::synapse0x20b27d0() {
   return (neuron0x20acc40()*0.0460414);
}

double NNfunction_t2t2::synapse0x20b2810() {
   return (neuron0x20acf80()*-0.0203764);
}

double NNfunction_t2t2::synapse0x20b2850() {
   return (neuron0x20ad2c0()*-0.0357266);
}

double NNfunction_t2t2::synapse0x20b2890() {
   return (neuron0x20ad600()*0.00290389);
}

double NNfunction_t2t2::synapse0x20b28d0() {
   return (neuron0x20ad940()*0.00280914);
}

double NNfunction_t2t2::synapse0x20b2910() {
   return (neuron0x20adc80()*0.015461);
}

double NNfunction_t2t2::synapse0x20b2950() {
   return (neuron0x20adfc0()*0.0157856);
}

double NNfunction_t2t2::synapse0x20b2990() {
   return (neuron0x20ae300()*0.0027561);
}

double NNfunction_t2t2::synapse0x20b29d0() {
   return (neuron0x20ae640()*0.0159297);
}

double NNfunction_t2t2::synapse0x20b2a10() {
   return (neuron0x20ae980()*0.153051);
}

double NNfunction_t2t2::synapse0x20b2a50() {
   return (neuron0x20aecc0()*-0.0379764);
}

double NNfunction_t2t2::synapse0x20b2a90() {
   return (neuron0x20af000()*-0.0139147);
}

double NNfunction_t2t2::synapse0x20b2520() {
   return (neuron0x20af340()*-0.313135);
}

double NNfunction_t2t2::synapse0x20b2560() {
   return (neuron0x20af8a0()*-0.0258064);
}

double NNfunction_t2t2::synapse0x1e6b480() {
   return (neuron0x20afac0()*0.0158443);
}

double NNfunction_t2t2::synapse0x1e6b4c0() {
   return (neuron0x20afe00()*0.301905);
}

double NNfunction_t2t2::synapse0x209afd0() {
   return (neuron0x20b0140()*-0.157512);
}

double NNfunction_t2t2::synapse0x209b010() {
   return (neuron0x20b0480()*0.0596591);
}

double NNfunction_t2t2::synapse0x209b050() {
   return (neuron0x20b07c0()*0.0190334);
}

double NNfunction_t2t2::synapse0x20abe80() {
   return (neuron0x20b0b00()*-0.0920784);
}

double NNfunction_t2t2::synapse0x20b1fe0() {
   return (neuron0x20abf40()*0.323502);
}

double NNfunction_t2t2::synapse0x20abec0() {
   return (neuron0x20ac280()*0.00370742);
}

double NNfunction_t2t2::synapse0x20abf00() {
   return (neuron0x20ac5c0()*-0.26473);
}

double NNfunction_t2t2::synapse0x20b2be0() {
   return (neuron0x20ac900()*-0.16871);
}

double NNfunction_t2t2::synapse0x20b2c20() {
   return (neuron0x20acc40()*0.253156);
}

double NNfunction_t2t2::synapse0x20b2c60() {
   return (neuron0x20acf80()*-0.00798766);
}

double NNfunction_t2t2::synapse0x20b2ca0() {
   return (neuron0x20ad2c0()*0.0378656);
}

double NNfunction_t2t2::synapse0x20b2ce0() {
   return (neuron0x20ad600()*-0.0190945);
}

double NNfunction_t2t2::synapse0x20b2d20() {
   return (neuron0x20ad940()*-0.0615097);
}

double NNfunction_t2t2::synapse0x20b2d60() {
   return (neuron0x20adc80()*-0.0991717);
}

double NNfunction_t2t2::synapse0x20b2da0() {
   return (neuron0x20adfc0()*-0.114327);
}

double NNfunction_t2t2::synapse0x20b2de0() {
   return (neuron0x20ae300()*-0.0732799);
}

double NNfunction_t2t2::synapse0x20b2e20() {
   return (neuron0x20ae640()*0.0266783);
}

double NNfunction_t2t2::synapse0x20b2e60() {
   return (neuron0x20ae980()*0.206674);
}

double NNfunction_t2t2::synapse0x20b2ea0() {
   return (neuron0x20aecc0()*-0.118088);
}

double NNfunction_t2t2::synapse0x20b2ee0() {
   return (neuron0x20af000()*-0.168519);
}

double NNfunction_t2t2::synapse0x20b1e30() {
   return (neuron0x20af340()*0.129013);
}

double NNfunction_t2t2::synapse0x20b1e70() {
   return (neuron0x20af8a0()*-0.0312757);
}

double NNfunction_t2t2::synapse0x20b3030() {
   return (neuron0x20afac0()*0.0372724);
}

double NNfunction_t2t2::synapse0x20b3070() {
   return (neuron0x20afe00()*0.0102912);
}

double NNfunction_t2t2::synapse0x20b30b0() {
   return (neuron0x20b0140()*-0.051102);
}

double NNfunction_t2t2::synapse0x20b30f0() {
   return (neuron0x20b0480()*0.0411234);
}

double NNfunction_t2t2::synapse0x20b3130() {
   return (neuron0x20b07c0()*-0.0692806);
}

double NNfunction_t2t2::synapse0x20b3170() {
   return (neuron0x20b0b00()*-0.183965);
}

double NNfunction_t2t2::synapse0x20b34f0() {
   return (neuron0x20abf40()*-0.092581);
}

double NNfunction_t2t2::synapse0x20b3530() {
   return (neuron0x20ac280()*0.00338163);
}

double NNfunction_t2t2::synapse0x20b3570() {
   return (neuron0x20ac5c0()*0.0329646);
}

double NNfunction_t2t2::synapse0x20b35b0() {
   return (neuron0x20ac900()*0.0104977);
}

double NNfunction_t2t2::synapse0x20b35f0() {
   return (neuron0x20acc40()*-0.0441192);
}

double NNfunction_t2t2::synapse0x20b3630() {
   return (neuron0x20acf80()*-0.00945204);
}

double NNfunction_t2t2::synapse0x20b3670() {
   return (neuron0x20ad2c0()*-0.0186015);
}

double NNfunction_t2t2::synapse0x20b36b0() {
   return (neuron0x20ad600()*-0.0158941);
}

double NNfunction_t2t2::synapse0x20b36f0() {
   return (neuron0x20ad940()*0.00389895);
}

double NNfunction_t2t2::synapse0x20b3730() {
   return (neuron0x20adc80()*0.00638188);
}

double NNfunction_t2t2::synapse0x20b3770() {
   return (neuron0x20adfc0()*0.00660559);
}

double NNfunction_t2t2::synapse0x20b37b0() {
   return (neuron0x20ae300()*0.00188816);
}

double NNfunction_t2t2::synapse0x20b37f0() {
   return (neuron0x20ae640()*0.0102867);
}

double NNfunction_t2t2::synapse0x20b3830() {
   return (neuron0x20ae980()*0.222517);
}

double NNfunction_t2t2::synapse0x20b3870() {
   return (neuron0x20aecc0()*-0.0154157);
}

double NNfunction_t2t2::synapse0x20b38b0() {
   return (neuron0x20af000()*-0.00950787);
}

double NNfunction_t2t2::synapse0x20b3340() {
   return (neuron0x20af340()*-0.367293);
}

double NNfunction_t2t2::synapse0x20b3380() {
   return (neuron0x20af8a0()*0.0069283);
}

double NNfunction_t2t2::synapse0x20b3a00() {
   return (neuron0x20afac0()*0.0066353);
}

double NNfunction_t2t2::synapse0x20b3a40() {
   return (neuron0x20afe00()*-0.0802304);
}

double NNfunction_t2t2::synapse0x20b3a80() {
   return (neuron0x20b0140()*-0.0735858);
}

double NNfunction_t2t2::synapse0x20b3ac0() {
   return (neuron0x20b0480()*0.0153725);
}

double NNfunction_t2t2::synapse0x20b3b00() {
   return (neuron0x20b07c0()*-0.000289863);
}

double NNfunction_t2t2::synapse0x20b3b40() {
   return (neuron0x20b0b00()*0.0250783);
}

double NNfunction_t2t2::synapse0x20b3ec0() {
   return (neuron0x20abf40()*0.0736993);
}

double NNfunction_t2t2::synapse0x20b3f00() {
   return (neuron0x20ac280()*-0.00835793);
}

double NNfunction_t2t2::synapse0x20b3f40() {
   return (neuron0x20ac5c0()*-0.0483813);
}

double NNfunction_t2t2::synapse0x20b3f80() {
   return (neuron0x20ac900()*0.153012);
}

double NNfunction_t2t2::synapse0x20b3fc0() {
   return (neuron0x20acc40()*-0.0223642);
}

double NNfunction_t2t2::synapse0x20b4000() {
   return (neuron0x20acf80()*0.00681674);
}

double NNfunction_t2t2::synapse0x20b4040() {
   return (neuron0x20ad2c0()*0.00448811);
}

double NNfunction_t2t2::synapse0x20b4080() {
   return (neuron0x20ad600()*0.0111768);
}

double NNfunction_t2t2::synapse0x20b40c0() {
   return (neuron0x20ad940()*-0.0109438);
}

double NNfunction_t2t2::synapse0x1e6b810() {
   return (neuron0x20adc80()*-0.00311452);
}

double NNfunction_t2t2::synapse0x1e6b850() {
   return (neuron0x20adfc0()*-0.00879301);
}

double NNfunction_t2t2::synapse0x1e6b890() {
   return (neuron0x20ae300()*0.0151765);
}

double NNfunction_t2t2::synapse0x1e6b8d0() {
   return (neuron0x20ae640()*0.000209666);
}

double NNfunction_t2t2::synapse0x1e6b910() {
   return (neuron0x20ae980()*-0.39959);
}

double NNfunction_t2t2::synapse0x1e6b950() {
   return (neuron0x20aecc0()*-0.0050862);
}

double NNfunction_t2t2::synapse0x1e6b990() {
   return (neuron0x20af000()*-0.00228005);
}

double NNfunction_t2t2::synapse0x20b3d10() {
   return (neuron0x20af340()*0.444606);
}

double NNfunction_t2t2::synapse0x20b3d50() {
   return (neuron0x20af8a0()*0.0046417);
}

double NNfunction_t2t2::synapse0x1e6bae0() {
   return (neuron0x20afac0()*0.00604834);
}

double NNfunction_t2t2::synapse0x1e6bb20() {
   return (neuron0x20afe00()*-0.0238039);
}

double NNfunction_t2t2::synapse0x1e6bb60() {
   return (neuron0x20b0140()*-3.46366);
}

double NNfunction_t2t2::synapse0x1e6bba0() {
   return (neuron0x20b0480()*-0.0042503);
}

double NNfunction_t2t2::synapse0x1e6bbe0() {
   return (neuron0x20b07c0()*-0.00465169);
}

double NNfunction_t2t2::synapse0x20b4910() {
   return (neuron0x20b0b00()*0.35039);
}

double NNfunction_t2t2::synapse0x20b4c90() {
   return (neuron0x20abf40()*0.014847);
}

double NNfunction_t2t2::synapse0x20b4cd0() {
   return (neuron0x20ac280()*0.0436363);
}

double NNfunction_t2t2::synapse0x20b4d10() {
   return (neuron0x20ac5c0()*0.385098);
}

double NNfunction_t2t2::synapse0x20b4d50() {
   return (neuron0x20ac900()*1.02538);
}

double NNfunction_t2t2::synapse0x20b4d90() {
   return (neuron0x20acc40()*0.135453);
}

double NNfunction_t2t2::synapse0x20b4dd0() {
   return (neuron0x20acf80()*-0.0182336);
}

double NNfunction_t2t2::synapse0x20b4e10() {
   return (neuron0x20ad2c0()*-0.018487);
}

double NNfunction_t2t2::synapse0x20b4e50() {
   return (neuron0x20ad600()*-0.00286902);
}

double NNfunction_t2t2::synapse0x20b4e90() {
   return (neuron0x20ad940()*0.003238);
}

double NNfunction_t2t2::synapse0x20b4ed0() {
   return (neuron0x20adc80()*0.0278332);
}

double NNfunction_t2t2::synapse0x20b4f10() {
   return (neuron0x20adfc0()*0.0163574);
}

double NNfunction_t2t2::synapse0x20b4f50() {
   return (neuron0x20ae300()*-0.0219699);
}

double NNfunction_t2t2::synapse0x20b4f90() {
   return (neuron0x20ae640()*-0.0374067);
}

double NNfunction_t2t2::synapse0x20b4fd0() {
   return (neuron0x20ae980()*0.00677212);
}

double NNfunction_t2t2::synapse0x20b5010() {
   return (neuron0x20aecc0()*-0.0237196);
}

double NNfunction_t2t2::synapse0x20b5050() {
   return (neuron0x20af000()*-0.00228542);
}

double NNfunction_t2t2::synapse0x20b4ae0() {
   return (neuron0x20af340()*-0.0331581);
}

double NNfunction_t2t2::synapse0x20b4b20() {
   return (neuron0x20af8a0()*-0.0160114);
}

double NNfunction_t2t2::synapse0x20b51a0() {
   return (neuron0x20afac0()*0.0122476);
}

double NNfunction_t2t2::synapse0x20b51e0() {
   return (neuron0x20afe00()*0.0533149);
}

double NNfunction_t2t2::synapse0x20b5220() {
   return (neuron0x20b0140()*-0.181614);
}

double NNfunction_t2t2::synapse0x20b5260() {
   return (neuron0x20b0480()*0.0187398);
}

double NNfunction_t2t2::synapse0x20b52a0() {
   return (neuron0x20b07c0()*0.0167401);
}

double NNfunction_t2t2::synapse0x20b52e0() {
   return (neuron0x20b0b00()*0.185374);
}

double NNfunction_t2t2::synapse0x20b5660() {
   return (neuron0x20abf40()*0.398272);
}

double NNfunction_t2t2::synapse0x20b56a0() {
   return (neuron0x20ac280()*-0.0362031);
}

double NNfunction_t2t2::synapse0x20b56e0() {
   return (neuron0x20ac5c0()*-0.0164235);
}

double NNfunction_t2t2::synapse0x20b5720() {
   return (neuron0x20ac900()*-0.0421314);
}

double NNfunction_t2t2::synapse0x20b5760() {
   return (neuron0x20acc40()*0.41847);
}

double NNfunction_t2t2::synapse0x20b57a0() {
   return (neuron0x20acf80()*-0.0179427);
}

double NNfunction_t2t2::synapse0x20b57e0() {
   return (neuron0x20ad2c0()*0.0180965);
}

double NNfunction_t2t2::synapse0x20b5820() {
   return (neuron0x20ad600()*-0.00014748);
}

double NNfunction_t2t2::synapse0x20b5860() {
   return (neuron0x20ad940()*0.00366149);
}

double NNfunction_t2t2::synapse0x20b58a0() {
   return (neuron0x20adc80()*0.0339271);
}

double NNfunction_t2t2::synapse0x20b58e0() {
   return (neuron0x20adfc0()*0.014325);
}

double NNfunction_t2t2::synapse0x20b5920() {
   return (neuron0x20ae300()*-0.0117719);
}

double NNfunction_t2t2::synapse0x20b5960() {
   return (neuron0x20ae640()*0.00764133);
}

double NNfunction_t2t2::synapse0x20b59a0() {
   return (neuron0x20ae980()*0.423435);
}

double NNfunction_t2t2::synapse0x20b59e0() {
   return (neuron0x20aecc0()*-0.0248434);
}

double NNfunction_t2t2::synapse0x20b5a20() {
   return (neuron0x20af000()*-0.0162793);
}

double NNfunction_t2t2::synapse0x20b54b0() {
   return (neuron0x20af340()*-0.220054);
}

double NNfunction_t2t2::synapse0x20b54f0() {
   return (neuron0x20af8a0()*0.0244991);
}

double NNfunction_t2t2::synapse0x20b5b70() {
   return (neuron0x20afac0()*0.0392136);
}

double NNfunction_t2t2::synapse0x20b5bb0() {
   return (neuron0x20afe00()*-0.052974);
}

double NNfunction_t2t2::synapse0x20b5bf0() {
   return (neuron0x20b0140()*0.280846);
}

double NNfunction_t2t2::synapse0x20b5c30() {
   return (neuron0x20b0480()*-0.00743638);
}

double NNfunction_t2t2::synapse0x20b5c70() {
   return (neuron0x20b07c0()*-0.0114861);
}

double NNfunction_t2t2::synapse0x20b5cb0() {
   return (neuron0x20b0b00()*0.587975);
}

double NNfunction_t2t2::synapse0x20af790() {
   return (neuron0x20abf40()*0.0720638);
}

double NNfunction_t2t2::synapse0x20af7d0() {
   return (neuron0x20ac280()*-0.0205924);
}

double NNfunction_t2t2::synapse0x20af810() {
   return (neuron0x20ac5c0()*0.0793908);
}

double NNfunction_t2t2::synapse0x20af850() {
   return (neuron0x20ac900()*0.0846258);
}

double NNfunction_t2t2::synapse0x20b6240() {
   return (neuron0x20acc40()*-0.131204);
}

double NNfunction_t2t2::synapse0x20b6280() {
   return (neuron0x20acf80()*0.048076);
}

double NNfunction_t2t2::synapse0x20b62c0() {
   return (neuron0x20ad2c0()*0.101183);
}

double NNfunction_t2t2::synapse0x20b6300() {
   return (neuron0x20ad600()*0.0717338);
}

double NNfunction_t2t2::synapse0x20b6340() {
   return (neuron0x20ad940()*-0.0192883);
}

double NNfunction_t2t2::synapse0x20b6380() {
   return (neuron0x20adc80()*0.000477644);
}

double NNfunction_t2t2::synapse0x20b63c0() {
   return (neuron0x20adfc0()*-0.0119654);
}

double NNfunction_t2t2::synapse0x20b6400() {
   return (neuron0x20ae300()*0.00510972);
}

double NNfunction_t2t2::synapse0x20b6440() {
   return (neuron0x20ae640()*-0.0398318);
}

double NNfunction_t2t2::synapse0x20b6480() {
   return (neuron0x20ae980()*-0.717806);
}

double NNfunction_t2t2::synapse0x20b64c0() {
   return (neuron0x20aecc0()*0.081695);
}

double NNfunction_t2t2::synapse0x20b6500() {
   return (neuron0x20af000()*0.0378037);
}

double NNfunction_t2t2::synapse0x20b5e80() {
   return (neuron0x20af340()*-0.162161);
}

double NNfunction_t2t2::synapse0x20b5ec0() {
   return (neuron0x20af8a0()*-0.0131954);
}

double NNfunction_t2t2::synapse0x20b6650() {
   return (neuron0x20afac0()*-0.0155458);
}

double NNfunction_t2t2::synapse0x20b6690() {
   return (neuron0x20afe00()*-0.0285286);
}

double NNfunction_t2t2::synapse0x20b66d0() {
   return (neuron0x20b0140()*0.0755917);
}

double NNfunction_t2t2::synapse0x20b6710() {
   return (neuron0x20b0480()*0.00395094);
}

double NNfunction_t2t2::synapse0x20b6750() {
   return (neuron0x20b07c0()*-0.00746686);
}

double NNfunction_t2t2::synapse0x20b6790() {
   return (neuron0x20b0b00()*-0.0306872);
}

double NNfunction_t2t2::synapse0x20b6b10() {
   return (neuron0x20abf40()*0.0188363);
}

double NNfunction_t2t2::synapse0x20b6b50() {
   return (neuron0x20ac280()*0.00194058);
}

double NNfunction_t2t2::synapse0x20b6b90() {
   return (neuron0x20ac5c0()*0.0917954);
}

double NNfunction_t2t2::synapse0x20b6bd0() {
   return (neuron0x20ac900()*0.0393225);
}

double NNfunction_t2t2::synapse0x20b6c10() {
   return (neuron0x20acc40()*-0.0167092);
}

double NNfunction_t2t2::synapse0x20b6c50() {
   return (neuron0x20acf80()*0.0142877);
}

double NNfunction_t2t2::synapse0x20b6c90() {
   return (neuron0x20ad2c0()*0.0134441);
}

double NNfunction_t2t2::synapse0x20b6cd0() {
   return (neuron0x20ad600()*0.0146594);
}

double NNfunction_t2t2::synapse0x20b6d10() {
   return (neuron0x20ad940()*-0.0134478);
}

double NNfunction_t2t2::synapse0x20b6d50() {
   return (neuron0x20adc80()*-0.00942316);
}

double NNfunction_t2t2::synapse0x20b6d90() {
   return (neuron0x20adfc0()*-0.0179205);
}

double NNfunction_t2t2::synapse0x20b6dd0() {
   return (neuron0x20ae300()*0.00434835);
}

double NNfunction_t2t2::synapse0x20b6e10() {
   return (neuron0x20ae640()*0.00172766);
}

double NNfunction_t2t2::synapse0x20b6e50() {
   return (neuron0x20ae980()*-1.35523);
}

double NNfunction_t2t2::synapse0x20b6e90() {
   return (neuron0x20aecc0()*0.0218122);
}

double NNfunction_t2t2::synapse0x20b6ed0() {
   return (neuron0x20af000()*0.0170207);
}

double NNfunction_t2t2::synapse0x20b6960() {
   return (neuron0x20af340()*2.03007);
}

double NNfunction_t2t2::synapse0x20b69a0() {
   return (neuron0x20af8a0()*-0.00101605);
}

double NNfunction_t2t2::synapse0x20b7020() {
   return (neuron0x20afac0()*-0.00814521);
}

double NNfunction_t2t2::synapse0x20b7060() {
   return (neuron0x20afe00()*-0.0354728);
}

double NNfunction_t2t2::synapse0x20b70a0() {
   return (neuron0x20b0140()*0.00190035);
}

double NNfunction_t2t2::synapse0x20b70e0() {
   return (neuron0x20b0480()*0.00211506);
}

double NNfunction_t2t2::synapse0x20b7120() {
   return (neuron0x20b07c0()*-0.00474452);
}

double NNfunction_t2t2::synapse0x20b7160() {
   return (neuron0x20b0b00()*0.0275607);
}

double NNfunction_t2t2::synapse0x20b74e0() {
   return (neuron0x20abf40()*-0.0233245);
}

double NNfunction_t2t2::synapse0x20b7520() {
   return (neuron0x20ac280()*0.00787055);
}

double NNfunction_t2t2::synapse0x20b7560() {
   return (neuron0x20ac5c0()*0.000115147);
}

double NNfunction_t2t2::synapse0x20b75a0() {
   return (neuron0x20ac900()*0.00319647);
}

double NNfunction_t2t2::synapse0x20b75e0() {
   return (neuron0x20acc40()*0.0171345);
}

double NNfunction_t2t2::synapse0x20b7620() {
   return (neuron0x20acf80()*-0.013285);
}

double NNfunction_t2t2::synapse0x20b7660() {
   return (neuron0x20ad2c0()*-0.0195076);
}

double NNfunction_t2t2::synapse0x20b76a0() {
   return (neuron0x20ad600()*-0.0142121);
}

double NNfunction_t2t2::synapse0x20b76e0() {
   return (neuron0x20ad940()*0.00264533);
}

double NNfunction_t2t2::synapse0x20b7720() {
   return (neuron0x20adc80()*0.0082475);
}

double NNfunction_t2t2::synapse0x20b7760() {
   return (neuron0x20adfc0()*0.0107931);
}

double NNfunction_t2t2::synapse0x20b77a0() {
   return (neuron0x20ae300()*-0.00505699);
}

double NNfunction_t2t2::synapse0x20b77e0() {
   return (neuron0x20ae640()*0.00703205);
}

double NNfunction_t2t2::synapse0x20b7820() {
   return (neuron0x20ae980()*-0.313621);
}

double NNfunction_t2t2::synapse0x20b7860() {
   return (neuron0x20aecc0()*-0.0094516);
}

double NNfunction_t2t2::synapse0x20b78a0() {
   return (neuron0x20af000()*-0.0153316);
}

double NNfunction_t2t2::synapse0x20b7330() {
   return (neuron0x20af340()*0.600215);
}

double NNfunction_t2t2::synapse0x20b7370() {
   return (neuron0x20af8a0()*0.00218633);
}

double NNfunction_t2t2::synapse0x20b4100() {
   return (neuron0x20afac0()*-0.00323681);
}

double NNfunction_t2t2::synapse0x20b4140() {
   return (neuron0x20afe00()*-0.0281236);
}

double NNfunction_t2t2::synapse0x20b4180() {
   return (neuron0x20b0140()*-0.134355);
}

double NNfunction_t2t2::synapse0x20b41c0() {
   return (neuron0x20b0480()*0.00767869);
}

double NNfunction_t2t2::synapse0x20b4200() {
   return (neuron0x20b07c0()*-0.00258757);
}

double NNfunction_t2t2::synapse0x20b4240() {
   return (neuron0x20b0b00()*0.0647573);
}

double NNfunction_t2t2::synapse0x20b45c0() {
   return (neuron0x20abf40()*-0.0768279);
}

double NNfunction_t2t2::synapse0x20b4600() {
   return (neuron0x20ac280()*0.101538);
}

double NNfunction_t2t2::synapse0x20b4640() {
   return (neuron0x20ac5c0()*-0.147656);
}

double NNfunction_t2t2::synapse0x20b4680() {
   return (neuron0x20ac900()*0.244445);
}

double NNfunction_t2t2::synapse0x20b46c0() {
   return (neuron0x20acc40()*-0.0641895);
}

double NNfunction_t2t2::synapse0x20b4700() {
   return (neuron0x20acf80()*0.00961449);
}

double NNfunction_t2t2::synapse0x20b4740() {
   return (neuron0x20ad2c0()*0.0123998);
}

double NNfunction_t2t2::synapse0x20b4780() {
   return (neuron0x20ad600()*-0.00644701);
}

double NNfunction_t2t2::synapse0x20b47c0() {
   return (neuron0x20ad940()*-0.00820395);
}

double NNfunction_t2t2::synapse0x20b4800() {
   return (neuron0x20adc80()*-0.00683996);
}

double NNfunction_t2t2::synapse0x20b4840() {
   return (neuron0x20adfc0()*-0.0203628);
}

double NNfunction_t2t2::synapse0x20b4880() {
   return (neuron0x20ae300()*-0.0228857);
}

double NNfunction_t2t2::synapse0x20b48c0() {
   return (neuron0x20ae640()*0.0491446);
}

double NNfunction_t2t2::synapse0x20b8a00() {
   return (neuron0x20ae980()*0.253411);
}

double NNfunction_t2t2::synapse0x20b8a40() {
   return (neuron0x20aecc0()*-0.00201026);
}

double NNfunction_t2t2::synapse0x20b8a80() {
   return (neuron0x20af000()*0.00814507);
}

double NNfunction_t2t2::synapse0x20b4410() {
   return (neuron0x20af340()*-0.247148);
}

double NNfunction_t2t2::synapse0x20b4450() {
   return (neuron0x20af8a0()*-0.0219127);
}

double NNfunction_t2t2::synapse0x20b8bd0() {
   return (neuron0x20afac0()*-0.0340192);
}

double NNfunction_t2t2::synapse0x20b8c10() {
   return (neuron0x20afe00()*0.0303471);
}

double NNfunction_t2t2::synapse0x20b8c50() {
   return (neuron0x20b0140()*-0.124231);
}

double NNfunction_t2t2::synapse0x20b8c90() {
   return (neuron0x20b0480()*-0.000744888);
}

double NNfunction_t2t2::synapse0x20b8cd0() {
   return (neuron0x20b07c0()*-4.39282e-06);
}

double NNfunction_t2t2::synapse0x20b8d10() {
   return (neuron0x20b0b00()*-0.397824);
}

double NNfunction_t2t2::synapse0x20b9090() {
   return (neuron0x20abf40()*-0.350309);
}

double NNfunction_t2t2::synapse0x20b90d0() {
   return (neuron0x20ac280()*-0.00413593);
}

double NNfunction_t2t2::synapse0x20b9110() {
   return (neuron0x20ac5c0()*0.0629322);
}

double NNfunction_t2t2::synapse0x20b9150() {
   return (neuron0x20ac900()*-0.358087);
}

double NNfunction_t2t2::synapse0x20b9190() {
   return (neuron0x20acc40()*-0.643913);
}

double NNfunction_t2t2::synapse0x20b91d0() {
   return (neuron0x20acf80()*0.0141314);
}

double NNfunction_t2t2::synapse0x20b9210() {
   return (neuron0x20ad2c0()*-0.104707);
}

double NNfunction_t2t2::synapse0x20b9250() {
   return (neuron0x20ad600()*-0.112082);
}

double NNfunction_t2t2::synapse0x20b9290() {
   return (neuron0x20ad940()*0.199497);
}

double NNfunction_t2t2::synapse0x20b92d0() {
   return (neuron0x20adc80()*-0.13667);
}

double NNfunction_t2t2::synapse0x20b9310() {
   return (neuron0x20adfc0()*0.101723);
}

double NNfunction_t2t2::synapse0x20b9350() {
   return (neuron0x20ae300()*-0.338601);
}

double NNfunction_t2t2::synapse0x20b9390() {
   return (neuron0x20ae640()*-0.399373);
}

double NNfunction_t2t2::synapse0x20b93d0() {
   return (neuron0x20ae980()*-0.928862);
}

double NNfunction_t2t2::synapse0x20b9410() {
   return (neuron0x20aecc0()*-0.0594725);
}

double NNfunction_t2t2::synapse0x20b9450() {
   return (neuron0x20af000()*0.0591442);
}

double NNfunction_t2t2::synapse0x20b8ee0() {
   return (neuron0x20af340()*-0.0978001);
}

double NNfunction_t2t2::synapse0x20b8f20() {
   return (neuron0x20af8a0()*-0.0328048);
}

double NNfunction_t2t2::synapse0x20b95a0() {
   return (neuron0x20afac0()*0.0140848);
}

double NNfunction_t2t2::synapse0x20b95e0() {
   return (neuron0x20afe00()*-0.153231);
}

double NNfunction_t2t2::synapse0x20b9620() {
   return (neuron0x20b0140()*-0.249308);
}

double NNfunction_t2t2::synapse0x20b9660() {
   return (neuron0x20b0480()*-0.644374);
}

double NNfunction_t2t2::synapse0x20b96a0() {
   return (neuron0x20b07c0()*-0.0979806);
}

double NNfunction_t2t2::synapse0x20b96e0() {
   return (neuron0x20b0b00()*0.317355);
}

double NNfunction_t2t2::synapse0x20b9a60() {
   return (neuron0x20abf40()*0.00149762);
}

double NNfunction_t2t2::synapse0x20b9aa0() {
   return (neuron0x20ac280()*0.00285759);
}

double NNfunction_t2t2::synapse0x20b9ae0() {
   return (neuron0x20ac5c0()*0.0530901);
}

double NNfunction_t2t2::synapse0x20b9b20() {
   return (neuron0x20ac900()*-2.22098);
}

double NNfunction_t2t2::synapse0x20b9b60() {
   return (neuron0x20acc40()*0.0306801);
}

double NNfunction_t2t2::synapse0x20b9ba0() {
   return (neuron0x20acf80()*-0.00324106);
}

double NNfunction_t2t2::synapse0x20b9be0() {
   return (neuron0x20ad2c0()*-0.00360999);
}

double NNfunction_t2t2::synapse0x20b9c20() {
   return (neuron0x20ad600()*-0.00378881);
}

double NNfunction_t2t2::synapse0x20b9c60() {
   return (neuron0x20ad940()*0.00264697);
}

double NNfunction_t2t2::synapse0x20b9ca0() {
   return (neuron0x20adc80()*0.00855997);
}

double NNfunction_t2t2::synapse0x20b9ce0() {
   return (neuron0x20adfc0()*-0.000439808);
}

double NNfunction_t2t2::synapse0x20b9d20() {
   return (neuron0x20ae300()*-0.00938427);
}

double NNfunction_t2t2::synapse0x20b9d60() {
   return (neuron0x20ae640()*-2.09212e-05);
}

double NNfunction_t2t2::synapse0x20b9da0() {
   return (neuron0x20ae980()*0.152715);
}

double NNfunction_t2t2::synapse0x20b9de0() {
   return (neuron0x20aecc0()*-0.019371);
}

double NNfunction_t2t2::synapse0x20b9e20() {
   return (neuron0x20af000()*-0.0185988);
}

double NNfunction_t2t2::synapse0x20b98b0() {
   return (neuron0x20af340()*0.0869229);
}

double NNfunction_t2t2::synapse0x20b98f0() {
   return (neuron0x20af8a0()*-0.0145288);
}

double NNfunction_t2t2::synapse0x20b9f70() {
   return (neuron0x20afac0()*-0.00571856);
}

double NNfunction_t2t2::synapse0x20b9fb0() {
   return (neuron0x20afe00()*0.00174197);
}

double NNfunction_t2t2::synapse0x20b9ff0() {
   return (neuron0x20b0140()*0.13955);
}

double NNfunction_t2t2::synapse0x20ba030() {
   return (neuron0x20b0480()*-0.00668929);
}

double NNfunction_t2t2::synapse0x20ba070() {
   return (neuron0x20b07c0()*0.00153032);
}

double NNfunction_t2t2::synapse0x20ba0b0() {
   return (neuron0x20b0b00()*-0.0381352);
}

double NNfunction_t2t2::synapse0x20ba430() {
   return (neuron0x20abf40()*-0.0324506);
}

double NNfunction_t2t2::synapse0x20ba470() {
   return (neuron0x20ac280()*-0.0310365);
}

double NNfunction_t2t2::synapse0x20ba4b0() {
   return (neuron0x20ac5c0()*0.224137);
}

double NNfunction_t2t2::synapse0x20ba4f0() {
   return (neuron0x20ac900()*0.513427);
}

double NNfunction_t2t2::synapse0x20ba530() {
   return (neuron0x20acc40()*-0.0873442);
}

double NNfunction_t2t2::synapse0x20ba570() {
   return (neuron0x20acf80()*-0.0471048);
}

double NNfunction_t2t2::synapse0x20ba5b0() {
   return (neuron0x20ad2c0()*0.0125399);
}

double NNfunction_t2t2::synapse0x20ba5f0() {
   return (neuron0x20ad600()*0.0101026);
}

double NNfunction_t2t2::synapse0x20ba630() {
   return (neuron0x20ad940()*-0.110795);
}

double NNfunction_t2t2::synapse0x20ba670() {
   return (neuron0x20adc80()*-0.0984261);
}

double NNfunction_t2t2::synapse0x20ba6b0() {
   return (neuron0x20adfc0()*-0.0598976);
}

double NNfunction_t2t2::synapse0x20ba6f0() {
   return (neuron0x20ae300()*-0.366571);
}

double NNfunction_t2t2::synapse0x20ba730() {
   return (neuron0x20ae640()*-0.0472323);
}

double NNfunction_t2t2::synapse0x20ba770() {
   return (neuron0x20ae980()*1.0996);
}

double NNfunction_t2t2::synapse0x20ba7b0() {
   return (neuron0x20aecc0()*0.00721688);
}

double NNfunction_t2t2::synapse0x20ba7f0() {
   return (neuron0x20af000()*-0.00261145);
}

double NNfunction_t2t2::synapse0x20ba280() {
   return (neuron0x20af340()*-0.121979);
}

double NNfunction_t2t2::synapse0x20ba2c0() {
   return (neuron0x20af8a0()*-0.157091);
}

double NNfunction_t2t2::synapse0x20ba940() {
   return (neuron0x20afac0()*0.199014);
}

double NNfunction_t2t2::synapse0x20ba980() {
   return (neuron0x20afe00()*0.176586);
}

double NNfunction_t2t2::synapse0x20ba9c0() {
   return (neuron0x20b0140()*0.0954568);
}

double NNfunction_t2t2::synapse0x20baa00() {
   return (neuron0x20b0480()*0.212621);
}

double NNfunction_t2t2::synapse0x20baa40() {
   return (neuron0x20b07c0()*0.043915);
}

double NNfunction_t2t2::synapse0x20baa80() {
   return (neuron0x20b0b00()*-0.584161);
}

double NNfunction_t2t2::synapse0x20bae00() {
   return (neuron0x20abf40()*-0.0485275);
}

double NNfunction_t2t2::synapse0x20ac160() {
   return (neuron0x20ac280()*0.0054285);
}

double NNfunction_t2t2::synapse0x20ac1a0() {
   return (neuron0x20ac5c0()*0.766315);
}

double NNfunction_t2t2::synapse0x20ac4a0() {
   return (neuron0x20ac900()*0.0766851);
}

double NNfunction_t2t2::synapse0x20ac4e0() {
   return (neuron0x20acc40()*-0.0382669);
}

double NNfunction_t2t2::synapse0x20ac7e0() {
   return (neuron0x20acf80()*-0.01843);
}

double NNfunction_t2t2::synapse0x20ac820() {
   return (neuron0x20ad2c0()*-0.0430693);
}

double NNfunction_t2t2::synapse0x20acb20() {
   return (neuron0x20ad600()*-0.0167165);
}

double NNfunction_t2t2::synapse0x20acb60() {
   return (neuron0x20ad940()*0.0262657);
}

double NNfunction_t2t2::synapse0x20ace60() {
   return (neuron0x20adc80()*0.0294358);
}

double NNfunction_t2t2::synapse0x20acea0() {
   return (neuron0x20adfc0()*0.0331021);
}

double NNfunction_t2t2::synapse0x20ad1a0() {
   return (neuron0x20ae300()*0.0257693);
}

double NNfunction_t2t2::synapse0x20ad1e0() {
   return (neuron0x20ae640()*-0.00439939);
}

double NNfunction_t2t2::synapse0x20ad4e0() {
   return (neuron0x20ae980()*1.0599);
}

double NNfunction_t2t2::synapse0x20ad520() {
   return (neuron0x20aecc0()*-0.0164999);
}

double NNfunction_t2t2::synapse0x20ad820() {
   return (neuron0x20af000()*0.0256902);
}

double NNfunction_t2t2::synapse0x20ad860() {
   return (neuron0x20af340()*-1.3032);
}

double NNfunction_t2t2::synapse0x20adb60() {
   return (neuron0x20af8a0()*0.0195787);
}

double NNfunction_t2t2::synapse0x20adba0() {
   return (neuron0x20afac0()*0.0277838);
}

double NNfunction_t2t2::synapse0x20adea0() {
   return (neuron0x20afe00()*0.0365345);
}

double NNfunction_t2t2::synapse0x20adee0() {
   return (neuron0x20b0140()*-0.20807);
}

double NNfunction_t2t2::synapse0x20ae1e0() {
   return (neuron0x20b0480()*0.00332896);
}

double NNfunction_t2t2::synapse0x20ae220() {
   return (neuron0x20b07c0()*-0.00044927);
}

double NNfunction_t2t2::synapse0x20ae520() {
   return (neuron0x20b0b00()*-0.0417549);
}

double NNfunction_t2t2::synapse0x20ae560() {
   return (neuron0x20abf40()*0.198739);
}

double NNfunction_t2t2::synapse0x20af220() {
   return (neuron0x20ac280()*0.114958);
}

double NNfunction_t2t2::synapse0x20af260() {
   return (neuron0x20ac5c0()*0.036326);
}

double NNfunction_t2t2::synapse0x20bac50() {
   return (neuron0x20ac900()*-0.046827);
}

double NNfunction_t2t2::synapse0x20bac90() {
   return (neuron0x20acc40()*-0.000569928);
}

double NNfunction_t2t2::synapse0x20af560() {
   return (neuron0x20acf80()*0.0259913);
}

double NNfunction_t2t2::synapse0x20af5a0() {
   return (neuron0x20ad2c0()*-0.00506033);
}

double NNfunction_t2t2::synapse0x1e5d4f0() {
   return (neuron0x20ad600()*0.0103404);
}

double NNfunction_t2t2::synapse0x1e5d530() {
   return (neuron0x20ad940()*0.0473877);
}

double NNfunction_t2t2::synapse0x20afce0() {
   return (neuron0x20adc80()*0.0844294);
}

double NNfunction_t2t2::synapse0x20afd20() {
   return (neuron0x20adfc0()*0.045791);
}

double NNfunction_t2t2::synapse0x20b0020() {
   return (neuron0x20ae300()*0.0182814);
}

double NNfunction_t2t2::synapse0x20b0060() {
   return (neuron0x20ae640()*0.070871);
}

double NNfunction_t2t2::synapse0x20b0360() {
   return (neuron0x20ae980()*0.639862);
}

double NNfunction_t2t2::synapse0x20b03a0() {
   return (neuron0x20aecc0()*-0.0783445);
}

double NNfunction_t2t2::synapse0x20b06a0() {
   return (neuron0x20af000()*-0.038564);
}

double NNfunction_t2t2::synapse0x20b06e0() {
   return (neuron0x20af340()*0.781172);
}

double NNfunction_t2t2::synapse0x20b09e0() {
   return (neuron0x20af8a0()*-0.041937);
}

double NNfunction_t2t2::synapse0x20b0a20() {
   return (neuron0x20afac0()*-0.0388643);
}

double NNfunction_t2t2::synapse0x20b0d20() {
   return (neuron0x20afe00()*0.211794);
}

double NNfunction_t2t2::synapse0x20b0d60() {
   return (neuron0x20b0140()*-0.147096);
}

double NNfunction_t2t2::synapse0x20ae860() {
   return (neuron0x20b0480()*-0.0211239);
}

double NNfunction_t2t2::synapse0x20ae8a0() {
   return (neuron0x20b07c0()*0.0340791);
}

double NNfunction_t2t2::synapse0x20bcb70() {
   return (neuron0x20b0b00()*0.43771);
}

double NNfunction_t2t2::synapse0x20bcef0() {
   return (neuron0x20abf40()*0.289035);
}

double NNfunction_t2t2::synapse0x20bcf30() {
   return (neuron0x20ac280()*-0.213338);
}

double NNfunction_t2t2::synapse0x20bcf70() {
   return (neuron0x20ac5c0()*-0.100143);
}

double NNfunction_t2t2::synapse0x20bcfb0() {
   return (neuron0x20ac900()*-0.185887);
}

double NNfunction_t2t2::synapse0x20bcff0() {
   return (neuron0x20acc40()*0.169198);
}

double NNfunction_t2t2::synapse0x20bd030() {
   return (neuron0x20acf80()*0.0234595);
}

double NNfunction_t2t2::synapse0x20bd070() {
   return (neuron0x20ad2c0()*-0.0255039);
}

double NNfunction_t2t2::synapse0x20bd0b0() {
   return (neuron0x20ad600()*-0.00775432);
}

double NNfunction_t2t2::synapse0x20bd0f0() {
   return (neuron0x20ad940()*-0.00568946);
}

double NNfunction_t2t2::synapse0x20bd130() {
   return (neuron0x20adc80()*-0.044164);
}

double NNfunction_t2t2::synapse0x20bd170() {
   return (neuron0x20adfc0()*-0.134124);
}

double NNfunction_t2t2::synapse0x20bd1b0() {
   return (neuron0x20ae300()*-0.0106432);
}

double NNfunction_t2t2::synapse0x20bd1f0() {
   return (neuron0x20ae640()*0.0513537);
}

double NNfunction_t2t2::synapse0x20bd230() {
   return (neuron0x20ae980()*0.335104);
}

double NNfunction_t2t2::synapse0x20bd270() {
   return (neuron0x20aecc0()*0.123025);
}

double NNfunction_t2t2::synapse0x20bd2b0() {
   return (neuron0x20af000()*0.120399);
}

double NNfunction_t2t2::synapse0x20bcd40() {
   return (neuron0x20af340()*1.17011);
}

double NNfunction_t2t2::synapse0x20bcd80() {
   return (neuron0x20af8a0()*0.0329374);
}

double NNfunction_t2t2::synapse0x20bd400() {
   return (neuron0x20afac0()*0.0174765);
}

double NNfunction_t2t2::synapse0x20bd440() {
   return (neuron0x20afe00()*0.126237);
}

double NNfunction_t2t2::synapse0x20bd480() {
   return (neuron0x20b0140()*0.280756);
}

double NNfunction_t2t2::synapse0x20bd4c0() {
   return (neuron0x20b0480()*-0.267783);
}

double NNfunction_t2t2::synapse0x20bd500() {
   return (neuron0x20b07c0()*-0.0137588);
}

double NNfunction_t2t2::synapse0x20bd540() {
   return (neuron0x20b0b00()*-0.680675);
}

double NNfunction_t2t2::synapse0x20bd8c0() {
   return (neuron0x20abf40()*0.141213);
}

double NNfunction_t2t2::synapse0x20bd900() {
   return (neuron0x20ac280()*-0.00747956);
}

double NNfunction_t2t2::synapse0x20bd940() {
   return (neuron0x20ac5c0()*-0.00279111);
}

double NNfunction_t2t2::synapse0x20bd980() {
   return (neuron0x20ac900()*0.0151065);
}

double NNfunction_t2t2::synapse0x20bd9c0() {
   return (neuron0x20acc40()*0.14754);
}

double NNfunction_t2t2::synapse0x20bda00() {
   return (neuron0x20acf80()*-0.00321358);
}

double NNfunction_t2t2::synapse0x20bda40() {
   return (neuron0x20ad2c0()*-0.0494746);
}

double NNfunction_t2t2::synapse0x20bda80() {
   return (neuron0x20ad600()*-0.047995);
}

double NNfunction_t2t2::synapse0x20bdac0() {
   return (neuron0x20ad940()*0.0141422);
}

double NNfunction_t2t2::synapse0x20bdb00() {
   return (neuron0x20adc80()*0.0275249);
}

double NNfunction_t2t2::synapse0x20bdb40() {
   return (neuron0x20adfc0()*0.0132073);
}

double NNfunction_t2t2::synapse0x20bdb80() {
   return (neuron0x20ae300()*-0.0176384);
}

double NNfunction_t2t2::synapse0x20bdbc0() {
   return (neuron0x20ae640()*0.047574);
}

double NNfunction_t2t2::synapse0x20bdc00() {
   return (neuron0x20ae980()*1.95475);
}

double NNfunction_t2t2::synapse0x20bdc40() {
   return (neuron0x20aecc0()*0.0404855);
}

double NNfunction_t2t2::synapse0x20bdc80() {
   return (neuron0x20af000()*0.00890495);
}

double NNfunction_t2t2::synapse0x20bd710() {
   return (neuron0x20af340()*-2.00133);
}

double NNfunction_t2t2::synapse0x20bd750() {
   return (neuron0x20af8a0()*-0.000472194);
}

double NNfunction_t2t2::synapse0x20bddd0() {
   return (neuron0x20afac0()*0.0120047);
}

double NNfunction_t2t2::synapse0x20bde10() {
   return (neuron0x20afe00()*0.0267755);
}

double NNfunction_t2t2::synapse0x20bde50() {
   return (neuron0x20b0140()*-1.37293);
}

double NNfunction_t2t2::synapse0x20bde90() {
   return (neuron0x20b0480()*-0.0273496);
}

double NNfunction_t2t2::synapse0x20bded0() {
   return (neuron0x20b07c0()*-0.0091249);
}

double NNfunction_t2t2::synapse0x20bdf10() {
   return (neuron0x20b0b00()*0.358601);
}

double NNfunction_t2t2::synapse0x20be290() {
   return (neuron0x20abf40()*0.457295);
}

double NNfunction_t2t2::synapse0x20be2d0() {
   return (neuron0x20ac280()*-0.0267657);
}

double NNfunction_t2t2::synapse0x20be310() {
   return (neuron0x20ac5c0()*-0.0118225);
}

double NNfunction_t2t2::synapse0x20be350() {
   return (neuron0x20ac900()*-0.0511612);
}

double NNfunction_t2t2::synapse0x20be390() {
   return (neuron0x20acc40()*0.447944);
}

double NNfunction_t2t2::synapse0x20be3d0() {
   return (neuron0x20acf80()*-0.00513505);
}

double NNfunction_t2t2::synapse0x20be410() {
   return (neuron0x20ad2c0()*-0.013958);
}

double NNfunction_t2t2::synapse0x20be450() {
   return (neuron0x20ad600()*0.0217304);
}

double NNfunction_t2t2::synapse0x20be490() {
   return (neuron0x20ad940()*0.0224981);
}

double NNfunction_t2t2::synapse0x20be4d0() {
   return (neuron0x20adc80()*-0.0196767);
}

double NNfunction_t2t2::synapse0x20be510() {
   return (neuron0x20adfc0()*0.0411268);
}

double NNfunction_t2t2::synapse0x20be550() {
   return (neuron0x20ae300()*-0.0305842);
}

double NNfunction_t2t2::synapse0x20be590() {
   return (neuron0x20ae640()*0.0965015);
}

double NNfunction_t2t2::synapse0x20be5d0() {
   return (neuron0x20ae980()*-0.0698075);
}

double NNfunction_t2t2::synapse0x20be610() {
   return (neuron0x20aecc0()*0.048891);
}

double NNfunction_t2t2::synapse0x20be650() {
   return (neuron0x20af000()*0.0174213);
}

double NNfunction_t2t2::synapse0x20be0e0() {
   return (neuron0x20af340()*-0.421528);
}

double NNfunction_t2t2::synapse0x20be120() {
   return (neuron0x20af8a0()*0.0494104);
}

double NNfunction_t2t2::synapse0x20be7a0() {
   return (neuron0x20afac0()*0.0574655);
}

double NNfunction_t2t2::synapse0x20be7e0() {
   return (neuron0x20afe00()*0.590447);
}

double NNfunction_t2t2::synapse0x20be820() {
   return (neuron0x20b0140()*0.189026);
}

double NNfunction_t2t2::synapse0x20be860() {
   return (neuron0x20b0480()*-0.519687);
}

double NNfunction_t2t2::synapse0x20be8a0() {
   return (neuron0x20b07c0()*0.019982);
}

double NNfunction_t2t2::synapse0x20be8e0() {
   return (neuron0x20b0b00()*0.242093);
}

double NNfunction_t2t2::synapse0x20bec60() {
   return (neuron0x20abf40()*0.117525);
}

double NNfunction_t2t2::synapse0x20beca0() {
   return (neuron0x20ac280()*0.0116565);
}

double NNfunction_t2t2::synapse0x20bece0() {
   return (neuron0x20ac5c0()*-0.0815319);
}

double NNfunction_t2t2::synapse0x20bed20() {
   return (neuron0x20ac900()*0.074475);
}

double NNfunction_t2t2::synapse0x20bed60() {
   return (neuron0x20acc40()*-0.192589);
}

double NNfunction_t2t2::synapse0x20beda0() {
   return (neuron0x20acf80()*-0.004188);
}

double NNfunction_t2t2::synapse0x20bede0() {
   return (neuron0x20ad2c0()*0.011257);
}

double NNfunction_t2t2::synapse0x20bee20() {
   return (neuron0x20ad600()*0.020712);
}

double NNfunction_t2t2::synapse0x20bee60() {
   return (neuron0x20ad940()*0.0173911);
}

double NNfunction_t2t2::synapse0x20beea0() {
   return (neuron0x20adc80()*-0.00931341);
}

double NNfunction_t2t2::synapse0x20beee0() {
   return (neuron0x20adfc0()*-0.0108126);
}

double NNfunction_t2t2::synapse0x20bef20() {
   return (neuron0x20ae300()*-0.00594593);
}

double NNfunction_t2t2::synapse0x20bef60() {
   return (neuron0x20ae640()*-0.00680834);
}

double NNfunction_t2t2::synapse0x20befa0() {
   return (neuron0x20ae980()*1.43696);
}

double NNfunction_t2t2::synapse0x20befe0() {
   return (neuron0x20aecc0()*-0.0246125);
}

double NNfunction_t2t2::synapse0x20bf020() {
   return (neuron0x20af000()*-0.0415384);
}

double NNfunction_t2t2::synapse0x20beab0() {
   return (neuron0x20af340()*-0.890524);
}

double NNfunction_t2t2::synapse0x20beaf0() {
   return (neuron0x20af8a0()*-0.00944905);
}

double NNfunction_t2t2::synapse0x20bf170() {
   return (neuron0x20afac0()*-0.0199555);
}

double NNfunction_t2t2::synapse0x20bf1b0() {
   return (neuron0x20afe00()*0.0651391);
}

double NNfunction_t2t2::synapse0x20bf1f0() {
   return (neuron0x20b0140()*-0.959278);
}

double NNfunction_t2t2::synapse0x20bf230() {
   return (neuron0x20b0480()*-0.0352524);
}

double NNfunction_t2t2::synapse0x20bf270() {
   return (neuron0x20b07c0()*0.0164361);
}

double NNfunction_t2t2::synapse0x20bf2b0() {
   return (neuron0x20b0b00()*-0.0750862);
}

double NNfunction_t2t2::synapse0x20bf630() {
   return (neuron0x20abf40()*-0.617772);
}

double NNfunction_t2t2::synapse0x20bf670() {
   return (neuron0x20ac280()*0.0367181);
}

double NNfunction_t2t2::synapse0x20bf6b0() {
   return (neuron0x20ac5c0()*0.104231);
}

double NNfunction_t2t2::synapse0x20bf6f0() {
   return (neuron0x20ac900()*-0.0138687);
}

double NNfunction_t2t2::synapse0x20bf730() {
   return (neuron0x20acc40()*-0.0707364);
}

double NNfunction_t2t2::synapse0x20bf770() {
   return (neuron0x20acf80()*0.182459);
}

double NNfunction_t2t2::synapse0x20bf7b0() {
   return (neuron0x20ad2c0()*0.243483);
}

double NNfunction_t2t2::synapse0x20bf7f0() {
   return (neuron0x20ad600()*-0.0356373);
}

double NNfunction_t2t2::synapse0x20bf830() {
   return (neuron0x20ad940()*-0.00257585);
}

double NNfunction_t2t2::synapse0x20b79f0() {
   return (neuron0x20adc80()*-0.0374212);
}

double NNfunction_t2t2::synapse0x20b7a30() {
   return (neuron0x20adfc0()*-0.032515);
}

double NNfunction_t2t2::synapse0x20b7a70() {
   return (neuron0x20ae300()*0.0237468);
}

double NNfunction_t2t2::synapse0x20b7ab0() {
   return (neuron0x20ae640()*0.0625661);
}

double NNfunction_t2t2::synapse0x20b7af0() {
   return (neuron0x20ae980()*1.64954);
}

double NNfunction_t2t2::synapse0x20b7b30() {
   return (neuron0x20aecc0()*-0.0836698);
}

double NNfunction_t2t2::synapse0x20b7b70() {
   return (neuron0x20af000()*0.270363);
}

double NNfunction_t2t2::synapse0x20bf480() {
   return (neuron0x20af340()*-0.0473429);
}

double NNfunction_t2t2::synapse0x20bf4c0() {
   return (neuron0x20af8a0()*0.0335589);
}

double NNfunction_t2t2::synapse0x20b7cc0() {
   return (neuron0x20afac0()*0.016184);
}

double NNfunction_t2t2::synapse0x20b7d00() {
   return (neuron0x20afe00()*-0.137135);
}

double NNfunction_t2t2::synapse0x20b7d40() {
   return (neuron0x20b0140()*0.526223);
}

double NNfunction_t2t2::synapse0x20b7d80() {
   return (neuron0x20b0480()*0.0350573);
}

double NNfunction_t2t2::synapse0x20b7dc0() {
   return (neuron0x20b07c0()*-0.0580075);
}

double NNfunction_t2t2::synapse0x20b7e00() {
   return (neuron0x20b0b00()*0.214911);
}

double NNfunction_t2t2::synapse0x20b8180() {
   return (neuron0x20abf40()*0.160635);
}

double NNfunction_t2t2::synapse0x20b81c0() {
   return (neuron0x20ac280()*0.00991228);
}

double NNfunction_t2t2::synapse0x20b8200() {
   return (neuron0x20ac5c0()*-0.00841551);
}

double NNfunction_t2t2::synapse0x20b8240() {
   return (neuron0x20ac900()*-0.0529747);
}

double NNfunction_t2t2::synapse0x20b8280() {
   return (neuron0x20acc40()*0.0208996);
}

double NNfunction_t2t2::synapse0x20b82c0() {
   return (neuron0x20acf80()*0.0202244);
}

double NNfunction_t2t2::synapse0x20b8300() {
   return (neuron0x20ad2c0()*0.0378951);
}

double NNfunction_t2t2::synapse0x20b8340() {
   return (neuron0x20ad600()*0.0237603);
}

double NNfunction_t2t2::synapse0x20b8380() {
   return (neuron0x20ad940()*-0.00994976);
}

double NNfunction_t2t2::synapse0x20b83c0() {
   return (neuron0x20adc80()*-0.00650551);
}

double NNfunction_t2t2::synapse0x20b8400() {
   return (neuron0x20adfc0()*-0.0253114);
}

double NNfunction_t2t2::synapse0x20b8440() {
   return (neuron0x20ae300()*-0.00394972);
}

double NNfunction_t2t2::synapse0x20b8480() {
   return (neuron0x20ae640()*0.0026638);
}

double NNfunction_t2t2::synapse0x20b84c0() {
   return (neuron0x20ae980()*0.754332);
}

double NNfunction_t2t2::synapse0x20b8500() {
   return (neuron0x20aecc0()*-0.0154263);
}

double NNfunction_t2t2::synapse0x20b8540() {
   return (neuron0x20af000()*-0.0029514);
}

double NNfunction_t2t2::synapse0x20b7fd0() {
   return (neuron0x20af340()*0.0198374);
}

double NNfunction_t2t2::synapse0x20b8010() {
   return (neuron0x20af8a0()*-0.0114402);
}

double NNfunction_t2t2::synapse0x20b8690() {
   return (neuron0x20afac0()*-0.00964324);
}

double NNfunction_t2t2::synapse0x20b86d0() {
   return (neuron0x20afe00()*-0.0142334);
}

double NNfunction_t2t2::synapse0x20b8710() {
   return (neuron0x20b0140()*0.0754919);
}

double NNfunction_t2t2::synapse0x20b8750() {
   return (neuron0x20b0480()*0.0344002);
}

double NNfunction_t2t2::synapse0x20b8790() {
   return (neuron0x20b07c0()*-0.0048723);
}

double NNfunction_t2t2::synapse0x20b87d0() {
   return (neuron0x20b0b00()*-0.0160993);
}

double NNfunction_t2t2::synapse0x20b89a0() {
   return (neuron0x20abf40()*-0.241374);
}

double NNfunction_t2t2::synapse0x20c1a30() {
   return (neuron0x20ac280()*0.0931221);
}

double NNfunction_t2t2::synapse0x20c1a70() {
   return (neuron0x20ac5c0()*-0.256319);
}

double NNfunction_t2t2::synapse0x20c1ab0() {
   return (neuron0x20ac900()*-0.420413);
}

double NNfunction_t2t2::synapse0x20c1af0() {
   return (neuron0x20acc40()*0.179439);
}

double NNfunction_t2t2::synapse0x20c1b30() {
   return (neuron0x20acf80()*0.0526707);
}

double NNfunction_t2t2::synapse0x20c1b70() {
   return (neuron0x20ad2c0()*0.0586299);
}

double NNfunction_t2t2::synapse0x20c1bb0() {
   return (neuron0x20ad600()*0.053353);
}

double NNfunction_t2t2::synapse0x20c1bf0() {
   return (neuron0x20ad940()*-0.0941538);
}

double NNfunction_t2t2::synapse0x20c1c30() {
   return (neuron0x20adc80()*-0.0631419);
}

double NNfunction_t2t2::synapse0x20c1c70() {
   return (neuron0x20adfc0()*0.270739);
}

double NNfunction_t2t2::synapse0x20c1cb0() {
   return (neuron0x20ae300()*0.862288);
}

double NNfunction_t2t2::synapse0x20c1cf0() {
   return (neuron0x20ae640()*-0.303885);
}

double NNfunction_t2t2::synapse0x20c1d30() {
   return (neuron0x20ae980()*-0.363162);
}

double NNfunction_t2t2::synapse0x20c1d70() {
   return (neuron0x20aecc0()*-0.0261461);
}

double NNfunction_t2t2::synapse0x20c1db0() {
   return (neuron0x20af000()*0.182724);
}

double NNfunction_t2t2::synapse0x20c1880() {
   return (neuron0x20af340()*-0.630252);
}

double NNfunction_t2t2::synapse0x20c18c0() {
   return (neuron0x20af8a0()*-0.310818);
}

double NNfunction_t2t2::synapse0x20c1f00() {
   return (neuron0x20afac0()*-0.162006);
}

double NNfunction_t2t2::synapse0x20c1f40() {
   return (neuron0x20afe00()*-0.471006);
}

double NNfunction_t2t2::synapse0x20c1f80() {
   return (neuron0x20b0140()*-0.434937);
}

double NNfunction_t2t2::synapse0x20c1fc0() {
   return (neuron0x20b0480()*0.0479755);
}

double NNfunction_t2t2::synapse0x20c2000() {
   return (neuron0x20b07c0()*0.0236282);
}

double NNfunction_t2t2::synapse0x20c2040() {
   return (neuron0x20b0b00()*0.0150198);
}

double NNfunction_t2t2::synapse0x20c23c0() {
   return (neuron0x20abf40()*-0.0804049);
}

double NNfunction_t2t2::synapse0x20c2400() {
   return (neuron0x20ac280()*0.107771);
}

double NNfunction_t2t2::synapse0x20c2440() {
   return (neuron0x20ac5c0()*0.294858);
}

double NNfunction_t2t2::synapse0x20c2480() {
   return (neuron0x20ac900()*0.0181497);
}

double NNfunction_t2t2::synapse0x20c24c0() {
   return (neuron0x20acc40()*-0.128623);
}

double NNfunction_t2t2::synapse0x20c2500() {
   return (neuron0x20acf80()*0.033102);
}

double NNfunction_t2t2::synapse0x20c2540() {
   return (neuron0x20ad2c0()*0.00514405);
}

double NNfunction_t2t2::synapse0x20c2580() {
   return (neuron0x20ad600()*-0.0228571);
}

double NNfunction_t2t2::synapse0x20c25c0() {
   return (neuron0x20ad940()*-0.0131941);
}

double NNfunction_t2t2::synapse0x20c2600() {
   return (neuron0x20adc80()*-0.0237125);
}

double NNfunction_t2t2::synapse0x20c2640() {
   return (neuron0x20adfc0()*-0.0672565);
}

double NNfunction_t2t2::synapse0x20c2680() {
   return (neuron0x20ae300()*0.104417);
}

double NNfunction_t2t2::synapse0x20c26c0() {
   return (neuron0x20ae640()*0.0511813);
}

double NNfunction_t2t2::synapse0x20c2700() {
   return (neuron0x20ae980()*0.336829);
}

double NNfunction_t2t2::synapse0x20c2740() {
   return (neuron0x20aecc0()*-0.00521734);
}

double NNfunction_t2t2::synapse0x20c2780() {
   return (neuron0x20af000()*-0.000653801);
}

double NNfunction_t2t2::synapse0x20c2210() {
   return (neuron0x20af340()*-0.190339);
}

double NNfunction_t2t2::synapse0x20c2250() {
   return (neuron0x20af8a0()*0.0899622);
}

double NNfunction_t2t2::synapse0x20c28d0() {
   return (neuron0x20afac0()*-0.0144877);
}

double NNfunction_t2t2::synapse0x20c2910() {
   return (neuron0x20afe00()*-0.052317);
}

double NNfunction_t2t2::synapse0x20c2950() {
   return (neuron0x20b0140()*-0.00649973);
}

double NNfunction_t2t2::synapse0x20c2990() {
   return (neuron0x20b0480()*-0.0218486);
}

double NNfunction_t2t2::synapse0x20c29d0() {
   return (neuron0x20b07c0()*-0.0147566);
}

double NNfunction_t2t2::synapse0x20c2a10() {
   return (neuron0x20b0b00()*0.473881);
}

double NNfunction_t2t2::synapse0x20c2d90() {
   return (neuron0x20abf40()*-0.0137494);
}

double NNfunction_t2t2::synapse0x20c2dd0() {
   return (neuron0x20ac280()*-0.0586464);
}

double NNfunction_t2t2::synapse0x20c2e10() {
   return (neuron0x20ac5c0()*-0.0682698);
}

double NNfunction_t2t2::synapse0x20c2e50() {
   return (neuron0x20ac900()*-0.0366796);
}

double NNfunction_t2t2::synapse0x20c2e90() {
   return (neuron0x20acc40()*-0.327816);
}

double NNfunction_t2t2::synapse0x20c2ed0() {
   return (neuron0x20acf80()*-0.00497637);
}

double NNfunction_t2t2::synapse0x20c2f10() {
   return (neuron0x20ad2c0()*0.0141844);
}

double NNfunction_t2t2::synapse0x20c2f50() {
   return (neuron0x20ad600()*0.0128701);
}

double NNfunction_t2t2::synapse0x20c2f90() {
   return (neuron0x20ad940()*-0.0084118);
}

double NNfunction_t2t2::synapse0x20c2fd0() {
   return (neuron0x20adc80()*-0.0021814);
}

double NNfunction_t2t2::synapse0x20c3010() {
   return (neuron0x20adfc0()*-0.00400719);
}

double NNfunction_t2t2::synapse0x20c3050() {
   return (neuron0x20ae300()*-0.00390552);
}

double NNfunction_t2t2::synapse0x20c3090() {
   return (neuron0x20ae640()*-0.0170537);
}

double NNfunction_t2t2::synapse0x20c30d0() {
   return (neuron0x20ae980()*-0.0576762);
}

double NNfunction_t2t2::synapse0x20c3110() {
   return (neuron0x20aecc0()*0.00533029);
}

double NNfunction_t2t2::synapse0x20c3150() {
   return (neuron0x20af000()*-0.0305484);
}

double NNfunction_t2t2::synapse0x20c2be0() {
   return (neuron0x20af340()*-0.136076);
}

double NNfunction_t2t2::synapse0x20c2c20() {
   return (neuron0x20af8a0()*0.00199828);
}

double NNfunction_t2t2::synapse0x20c32a0() {
   return (neuron0x20afac0()*0.0015729);
}

double NNfunction_t2t2::synapse0x20c32e0() {
   return (neuron0x20afe00()*-0.064529);
}

double NNfunction_t2t2::synapse0x20c3320() {
   return (neuron0x20b0140()*0.194372);
}

double NNfunction_t2t2::synapse0x20c3360() {
   return (neuron0x20b0480()*0.0292553);
}

double NNfunction_t2t2::synapse0x20c33a0() {
   return (neuron0x20b07c0()*-0.00939798);
}

double NNfunction_t2t2::synapse0x20c33e0() {
   return (neuron0x20b0b00()*-1.75832);
}

double NNfunction_t2t2::synapse0x20c3760() {
   return (neuron0x20abf40()*0.102768);
}

double NNfunction_t2t2::synapse0x20c37a0() {
   return (neuron0x20ac280()*0.100571);
}

double NNfunction_t2t2::synapse0x20c37e0() {
   return (neuron0x20ac5c0()*0.514282);
}

double NNfunction_t2t2::synapse0x20c3820() {
   return (neuron0x20ac900()*-0.332684);
}

double NNfunction_t2t2::synapse0x20c3860() {
   return (neuron0x20acc40()*-0.476094);
}

double NNfunction_t2t2::synapse0x20c38a0() {
   return (neuron0x20acf80()*0.0484372);
}

double NNfunction_t2t2::synapse0x20c38e0() {
   return (neuron0x20ad2c0()*0.163247);
}

double NNfunction_t2t2::synapse0x20c3920() {
   return (neuron0x20ad600()*-0.0574648);
}

double NNfunction_t2t2::synapse0x20c3960() {
   return (neuron0x20ad940()*-0.139239);
}

double NNfunction_t2t2::synapse0x20c39a0() {
   return (neuron0x20adc80()*0.147287);
}

double NNfunction_t2t2::synapse0x20c39e0() {
   return (neuron0x20adfc0()*0.167229);
}

double NNfunction_t2t2::synapse0x20c3a20() {
   return (neuron0x20ae300()*0.139883);
}

double NNfunction_t2t2::synapse0x20c3a60() {
   return (neuron0x20ae640()*0.205952);
}

double NNfunction_t2t2::synapse0x20c3aa0() {
   return (neuron0x20ae980()*-0.0387446);
}

double NNfunction_t2t2::synapse0x20c3ae0() {
   return (neuron0x20aecc0()*0.152264);
}

double NNfunction_t2t2::synapse0x20c3b20() {
   return (neuron0x20af000()*-0.140114);
}

double NNfunction_t2t2::synapse0x20c35b0() {
   return (neuron0x20af340()*-1.11321);
}

double NNfunction_t2t2::synapse0x20c35f0() {
   return (neuron0x20af8a0()*-0.0341299);
}

double NNfunction_t2t2::synapse0x20c3c70() {
   return (neuron0x20afac0()*-0.207124);
}

double NNfunction_t2t2::synapse0x20c3cb0() {
   return (neuron0x20afe00()*0.022518);
}

double NNfunction_t2t2::synapse0x20c3cf0() {
   return (neuron0x20b0140()*0.580895);
}

double NNfunction_t2t2::synapse0x20c3d30() {
   return (neuron0x20b0480()*0.349037);
}

double NNfunction_t2t2::synapse0x20c3d70() {
   return (neuron0x20b07c0()*-0.0269179);
}

double NNfunction_t2t2::synapse0x20c3db0() {
   return (neuron0x20b0b00()*0.282125);
}

double NNfunction_t2t2::synapse0x20c4130() {
   return (neuron0x20abf40()*0.0218242);
}

double NNfunction_t2t2::synapse0x20c4170() {
   return (neuron0x20ac280()*0.00470842);
}

double NNfunction_t2t2::synapse0x20c41b0() {
   return (neuron0x20ac5c0()*-0.0674842);
}

double NNfunction_t2t2::synapse0x20c41f0() {
   return (neuron0x20ac900()*0.057309);
}

double NNfunction_t2t2::synapse0x20c4230() {
   return (neuron0x20acc40()*-0.00193195);
}

double NNfunction_t2t2::synapse0x20c4270() {
   return (neuron0x20acf80()*0.00995221);
}

double NNfunction_t2t2::synapse0x20c42b0() {
   return (neuron0x20ad2c0()*0.000707723);
}

double NNfunction_t2t2::synapse0x20c42f0() {
   return (neuron0x20ad600()*-0.0058945);
}

double NNfunction_t2t2::synapse0x20c4330() {
   return (neuron0x20ad940()*-0.00336431);
}

double NNfunction_t2t2::synapse0x20c4370() {
   return (neuron0x20adc80()*0.00262714);
}

double NNfunction_t2t2::synapse0x20c43b0() {
   return (neuron0x20adfc0()*-0.0166888);
}

double NNfunction_t2t2::synapse0x20c43f0() {
   return (neuron0x20ae300()*0.00174032);
}

double NNfunction_t2t2::synapse0x20c4430() {
   return (neuron0x20ae640()*0.0236295);
}

double NNfunction_t2t2::synapse0x20c4470() {
   return (neuron0x20ae980()*1.0852);
}

double NNfunction_t2t2::synapse0x20c44b0() {
   return (neuron0x20aecc0()*-0.0140377);
}

double NNfunction_t2t2::synapse0x20c44f0() {
   return (neuron0x20af000()*-0.00353449);
}

double NNfunction_t2t2::synapse0x20c3f80() {
   return (neuron0x20af340()*-0.298556);
}

double NNfunction_t2t2::synapse0x20c3fc0() {
   return (neuron0x20af8a0()*6.31575e-05);
}

double NNfunction_t2t2::synapse0x20c4640() {
   return (neuron0x20afac0()*0.000807043);
}

double NNfunction_t2t2::synapse0x20c4680() {
   return (neuron0x20afe00()*-0.0261639);
}

double NNfunction_t2t2::synapse0x20c46c0() {
   return (neuron0x20b0140()*0.0127417);
}

double NNfunction_t2t2::synapse0x20c4700() {
   return (neuron0x20b0480()*0.0119172);
}

double NNfunction_t2t2::synapse0x20c4740() {
   return (neuron0x20b07c0()*-0.00337653);
}

double NNfunction_t2t2::synapse0x20c4780() {
   return (neuron0x20b0b00()*0.0312958);
}

double NNfunction_t2t2::synapse0x20c4b00() {
   return (neuron0x20abf40()*0.335059);
}

double NNfunction_t2t2::synapse0x20c4b40() {
   return (neuron0x20ac280()*-0.258763);
}

double NNfunction_t2t2::synapse0x20c4b80() {
   return (neuron0x20ac5c0()*-0.217097);
}

double NNfunction_t2t2::synapse0x20c4bc0() {
   return (neuron0x20ac900()*0.288719);
}

double NNfunction_t2t2::synapse0x20c4c00() {
   return (neuron0x20acc40()*-0.107619);
}

double NNfunction_t2t2::synapse0x20c4c40() {
   return (neuron0x20acf80()*-0.0195158);
}

double NNfunction_t2t2::synapse0x20c4c80() {
   return (neuron0x20ad2c0()*-0.052263);
}

double NNfunction_t2t2::synapse0x20c4cc0() {
   return (neuron0x20ad600()*-0.0573766);
}

double NNfunction_t2t2::synapse0x20c4d00() {
   return (neuron0x20ad940()*-0.0991011);
}

double NNfunction_t2t2::synapse0x20c4d40() {
   return (neuron0x20adc80()*-0.0656641);
}

double NNfunction_t2t2::synapse0x20c4d80() {
   return (neuron0x20adfc0()*-0.151027);
}

double NNfunction_t2t2::synapse0x20c4dc0() {
   return (neuron0x20ae300()*0.125764);
}

double NNfunction_t2t2::synapse0x20c4e00() {
   return (neuron0x20ae640()*-0.223329);
}

double NNfunction_t2t2::synapse0x20c4e40() {
   return (neuron0x20ae980()*0.348612);
}

double NNfunction_t2t2::synapse0x20c4e80() {
   return (neuron0x20aecc0()*0.0119202);
}

double NNfunction_t2t2::synapse0x20c4ec0() {
   return (neuron0x20af000()*0.0332253);
}

double NNfunction_t2t2::synapse0x20c4950() {
   return (neuron0x20af340()*-0.159592);
}

double NNfunction_t2t2::synapse0x20c4990() {
   return (neuron0x20af8a0()*-0.179631);
}

double NNfunction_t2t2::synapse0x20c5010() {
   return (neuron0x20afac0()*-0.302714);
}

double NNfunction_t2t2::synapse0x20c5050() {
   return (neuron0x20afe00()*0.460233);
}

double NNfunction_t2t2::synapse0x20c5090() {
   return (neuron0x20b0140()*0.143358);
}

double NNfunction_t2t2::synapse0x20c50d0() {
   return (neuron0x20b0480()*-0.194827);
}

double NNfunction_t2t2::synapse0x20c5110() {
   return (neuron0x20b07c0()*-0.00322366);
}

double NNfunction_t2t2::synapse0x20c5150() {
   return (neuron0x20b0b00()*0.148326);
}

double NNfunction_t2t2::synapse0x20c54d0() {
   return (neuron0x20abf40()*0.0936938);
}

double NNfunction_t2t2::synapse0x20c5510() {
   return (neuron0x20ac280()*-0.00013299);
}

double NNfunction_t2t2::synapse0x20c5550() {
   return (neuron0x20ac5c0()*-0.330304);
}

double NNfunction_t2t2::synapse0x20c5590() {
   return (neuron0x20ac900()*0.815413);
}

double NNfunction_t2t2::synapse0x20c55d0() {
   return (neuron0x20acc40()*0.141244);
}

double NNfunction_t2t2::synapse0x20c5610() {
   return (neuron0x20acf80()*-0.00807752);
}

double NNfunction_t2t2::synapse0x20c5650() {
   return (neuron0x20ad2c0()*-0.00935717);
}

double NNfunction_t2t2::synapse0x20c5690() {
   return (neuron0x20ad600()*0.0268949);
}

double NNfunction_t2t2::synapse0x20c56d0() {
   return (neuron0x20ad940()*0.00741903);
}

double NNfunction_t2t2::synapse0x20c5710() {
   return (neuron0x20adc80()*-0.0320718);
}

double NNfunction_t2t2::synapse0x20c5750() {
   return (neuron0x20adfc0()*-0.0375567);
}

double NNfunction_t2t2::synapse0x20c5790() {
   return (neuron0x20ae300()*-0.0353033);
}

double NNfunction_t2t2::synapse0x20c57d0() {
   return (neuron0x20ae640()*0.182574);
}

double NNfunction_t2t2::synapse0x20c5810() {
   return (neuron0x20ae980()*-0.121651);
}

double NNfunction_t2t2::synapse0x20c5850() {
   return (neuron0x20aecc0()*0.0225836);
}

double NNfunction_t2t2::synapse0x20c5890() {
   return (neuron0x20af000()*0.019701);
}

double NNfunction_t2t2::synapse0x20c5320() {
   return (neuron0x20af340()*0.0255417);
}

double NNfunction_t2t2::synapse0x20c5360() {
   return (neuron0x20af8a0()*0.0836337);
}

double NNfunction_t2t2::synapse0x20c59e0() {
   return (neuron0x20afac0()*-0.0655953);
}

double NNfunction_t2t2::synapse0x20c5a20() {
   return (neuron0x20afe00()*-0.00682392);
}

double NNfunction_t2t2::synapse0x20c5a60() {
   return (neuron0x20b0140()*0.0353366);
}

double NNfunction_t2t2::synapse0x20c5aa0() {
   return (neuron0x20b0480()*0.0537916);
}

double NNfunction_t2t2::synapse0x20c5ae0() {
   return (neuron0x20b07c0()*0.0180374);
}

double NNfunction_t2t2::synapse0x20c5b20() {
   return (neuron0x20b0b00()*0.1232);
}

double NNfunction_t2t2::synapse0x20c5ea0() {
   return (neuron0x20abf40()*-0.0678345);
}

double NNfunction_t2t2::synapse0x20c5ee0() {
   return (neuron0x20ac280()*-0.221012);
}

double NNfunction_t2t2::synapse0x20c5f20() {
   return (neuron0x20ac5c0()*-0.134629);
}

double NNfunction_t2t2::synapse0x20c5f60() {
   return (neuron0x20ac900()*0.117084);
}

double NNfunction_t2t2::synapse0x20c5fa0() {
   return (neuron0x20acc40()*-0.110943);
}

double NNfunction_t2t2::synapse0x20c5fe0() {
   return (neuron0x20acf80()*-0.0395273);
}

double NNfunction_t2t2::synapse0x20c6020() {
   return (neuron0x20ad2c0()*-0.005908);
}

double NNfunction_t2t2::synapse0x20c6060() {
   return (neuron0x20ad600()*0.0929014);
}

double NNfunction_t2t2::synapse0x20c60a0() {
   return (neuron0x20ad940()*0.265115);
}

double NNfunction_t2t2::synapse0x20c60e0() {
   return (neuron0x20adc80()*-0.0588166);
}

double NNfunction_t2t2::synapse0x20c6120() {
   return (neuron0x20adfc0()*0.332466);
}

double NNfunction_t2t2::synapse0x20c6160() {
   return (neuron0x20ae300()*0.0172372);
}

double NNfunction_t2t2::synapse0x20c61a0() {
   return (neuron0x20ae640()*-0.0821502);
}

double NNfunction_t2t2::synapse0x20c61e0() {
   return (neuron0x20ae980()*0.137031);
}

double NNfunction_t2t2::synapse0x20c6220() {
   return (neuron0x20aecc0()*-0.0613321);
}

double NNfunction_t2t2::synapse0x20c6260() {
   return (neuron0x20af000()*-0.466807);
}

double NNfunction_t2t2::synapse0x20c5cf0() {
   return (neuron0x20af340()*0.78562);
}

double NNfunction_t2t2::synapse0x20c5d30() {
   return (neuron0x20af8a0()*0.130979);
}

double NNfunction_t2t2::synapse0x20c63b0() {
   return (neuron0x20afac0()*0.224481);
}

double NNfunction_t2t2::synapse0x20c63f0() {
   return (neuron0x20afe00()*-0.163243);
}

double NNfunction_t2t2::synapse0x20c6430() {
   return (neuron0x20b0140()*-0.246808);
}

double NNfunction_t2t2::synapse0x20c6470() {
   return (neuron0x20b0480()*0.00309353);
}

double NNfunction_t2t2::synapse0x20c64b0() {
   return (neuron0x20b07c0()*-0.0192121);
}

double NNfunction_t2t2::synapse0x20c64f0() {
   return (neuron0x20b0b00()*-0.620685);
}

double NNfunction_t2t2::synapse0x20c6870() {
   return (neuron0x20abf40()*-0.00725708);
}

double NNfunction_t2t2::synapse0x20bae40() {
   return (neuron0x20ac280()*-0.00240128);
}

double NNfunction_t2t2::synapse0x20bae80() {
   return (neuron0x20ac5c0()*-0.0143144);
}

double NNfunction_t2t2::synapse0x20baec0() {
   return (neuron0x20ac900()*0.00183055);
}

double NNfunction_t2t2::synapse0x20bb110() {
   return (neuron0x20acc40()*-0.0685027);
}

double NNfunction_t2t2::synapse0x20bb150() {
   return (neuron0x20acf80()*0.0142278);
}

double NNfunction_t2t2::synapse0x20bb190() {
   return (neuron0x20ad2c0()*-0.00234216);
}

double NNfunction_t2t2::synapse0x20bb3e0() {
   return (neuron0x20ad600()*0.028231);
}

double NNfunction_t2t2::synapse0x20bb420() {
   return (neuron0x20ad940()*-0.011038);
}

double NNfunction_t2t2::synapse0x20bb670() {
   return (neuron0x20adc80()*-0.00752578);
}

double NNfunction_t2t2::synapse0x20bb6b0() {
   return (neuron0x20adfc0()*-0.00925123);
}

double NNfunction_t2t2::synapse0x20bb6f0() {
   return (neuron0x20ae300()*0.00165313);
}

double NNfunction_t2t2::synapse0x20bb940() {
   return (neuron0x20ae640()*-0.00337528);
}

double NNfunction_t2t2::synapse0x20bb980() {
   return (neuron0x20ae980()*0.102887);
}

double NNfunction_t2t2::synapse0x20bbbd0() {
   return (neuron0x20aecc0()*-0.0167405);
}

double NNfunction_t2t2::synapse0x20bbc10() {
   return (neuron0x20af000()*0.026258);
}

double NNfunction_t2t2::synapse0x20c66c0() {
   return (neuron0x20af340()*0.966292);
}

double NNfunction_t2t2::synapse0x20c6700() {
   return (neuron0x20af8a0()*-0.000992249);
}

double NNfunction_t2t2::synapse0x20bbd60() {
   return (neuron0x20afac0()*-0.00611721);
}

double NNfunction_t2t2::synapse0x20bc270() {
   return (neuron0x20afe00()*-0.0365491);
}

double NNfunction_t2t2::synapse0x20bc2b0() {
   return (neuron0x20b0140()*0.372119);
}

double NNfunction_t2t2::synapse0x20bc2f0() {
   return (neuron0x20b0480()*0.0283464);
}

double NNfunction_t2t2::synapse0x20bc540() {
   return (neuron0x20b07c0()*-0.00948751);
}

double NNfunction_t2t2::synapse0x20bc580() {
   return (neuron0x20b0b00()*0.086656);
}

double NNfunction_t2t2::synapse0x20bbe30() {
   return (neuron0x20abf40()*-0.0198936);
}

double NNfunction_t2t2::synapse0x20bbe70() {
   return (neuron0x20ac280()*0.0045498);
}

double NNfunction_t2t2::synapse0x20bbeb0() {
   return (neuron0x20ac5c0()*0.227261);
}

double NNfunction_t2t2::synapse0x20bbef0() {
   return (neuron0x20ac900()*-0.0920713);
}

double NNfunction_t2t2::synapse0x20bc870() {
   return (neuron0x20acc40()*-0.530053);
}

double NNfunction_t2t2::synapse0x20c8bc0() {
   return (neuron0x20acf80()*0.014903);
}

double NNfunction_t2t2::synapse0x20c8c00() {
   return (neuron0x20ad2c0()*-0.0195691);
}

double NNfunction_t2t2::synapse0x20c8c40() {
   return (neuron0x20ad600()*-0.0208562);
}

double NNfunction_t2t2::synapse0x20c8c80() {
   return (neuron0x20ad940()*0.0279867);
}

double NNfunction_t2t2::synapse0x20c8cc0() {
   return (neuron0x20adc80()*0.0106523);
}

double NNfunction_t2t2::synapse0x20c8d00() {
   return (neuron0x20adfc0()*0.01158);
}

double NNfunction_t2t2::synapse0x20c8d40() {
   return (neuron0x20ae300()*0.0303089);
}

double NNfunction_t2t2::synapse0x20c8d80() {
   return (neuron0x20ae640()*0.0140659);
}

double NNfunction_t2t2::synapse0x20c8dc0() {
   return (neuron0x20ae980()*0.00651736);
}

double NNfunction_t2t2::synapse0x20c8e00() {
   return (neuron0x20aecc0()*-0.0140381);
}

double NNfunction_t2t2::synapse0x20c8e40() {
   return (neuron0x20af000()*-0.0254067);
}

double NNfunction_t2t2::synapse0x20bc750() {
   return (neuron0x20af340()*0.0456805);
}

double NNfunction_t2t2::synapse0x20bc790() {
   return (neuron0x20af8a0()*0.0572477);
}

double NNfunction_t2t2::synapse0x20c8f90() {
   return (neuron0x20afac0()*-0.0147558);
}

double NNfunction_t2t2::synapse0x20c8fd0() {
   return (neuron0x20afe00()*-0.0463);
}

double NNfunction_t2t2::synapse0x20c9010() {
   return (neuron0x20b0140()*0.0104791);
}

double NNfunction_t2t2::synapse0x20c9050() {
   return (neuron0x20b0480()*-0.0962682);
}

double NNfunction_t2t2::synapse0x20c9090() {
   return (neuron0x20b07c0()*-0.0234812);
}

double NNfunction_t2t2::synapse0x20c90d0() {
   return (neuron0x20b0b00()*1.34359);
}

double NNfunction_t2t2::synapse0x20c9450() {
   return (neuron0x20abf40()*0.0228793);
}

double NNfunction_t2t2::synapse0x20c9490() {
   return (neuron0x20ac280()*0.0234627);
}

double NNfunction_t2t2::synapse0x20c94d0() {
   return (neuron0x20ac5c0()*0.0261993);
}

double NNfunction_t2t2::synapse0x20c9510() {
   return (neuron0x20ac900()*-0.0927079);
}

double NNfunction_t2t2::synapse0x20c9550() {
   return (neuron0x20acc40()*0.0183207);
}

double NNfunction_t2t2::synapse0x20c9590() {
   return (neuron0x20acf80()*0.00950174);
}

double NNfunction_t2t2::synapse0x20c95d0() {
   return (neuron0x20ad2c0()*-0.0145979);
}

double NNfunction_t2t2::synapse0x20c9610() {
   return (neuron0x20ad600()*-0.00799122);
}

double NNfunction_t2t2::synapse0x20c9650() {
   return (neuron0x20ad940()*0.00205029);
}

double NNfunction_t2t2::synapse0x20c9690() {
   return (neuron0x20adc80()*-0.00408029);
}

double NNfunction_t2t2::synapse0x20c96d0() {
   return (neuron0x20adfc0()*0.00479505);
}

double NNfunction_t2t2::synapse0x20c9710() {
   return (neuron0x20ae300()*-0.0119383);
}

double NNfunction_t2t2::synapse0x20c9750() {
   return (neuron0x20ae640()*-0.00331939);
}

double NNfunction_t2t2::synapse0x20c9790() {
   return (neuron0x20ae980()*-0.257334);
}

double NNfunction_t2t2::synapse0x20c97d0() {
   return (neuron0x20aecc0()*-0.016951);
}

double NNfunction_t2t2::synapse0x20c9810() {
   return (neuron0x20af000()*-0.00279287);
}

double NNfunction_t2t2::synapse0x20c92a0() {
   return (neuron0x20af340()*-0.337819);
}

double NNfunction_t2t2::synapse0x20c92e0() {
   return (neuron0x20af8a0()*0.00108501);
}

double NNfunction_t2t2::synapse0x20c9960() {
   return (neuron0x20afac0()*-0.00358615);
}

double NNfunction_t2t2::synapse0x20c99a0() {
   return (neuron0x20afe00()*-0.00491318);
}

double NNfunction_t2t2::synapse0x20c99e0() {
   return (neuron0x20b0140()*3.36714);
}

double NNfunction_t2t2::synapse0x20c9a20() {
   return (neuron0x20b0480()*0.0179913);
}

double NNfunction_t2t2::synapse0x20c9a60() {
   return (neuron0x20b07c0()*-0.000199809);
}

double NNfunction_t2t2::synapse0x20c9aa0() {
   return (neuron0x20b0b00()*-0.221899);
}

double NNfunction_t2t2::synapse0x20c9e20() {
   return (neuron0x20abf40()*-0.00519737);
}

double NNfunction_t2t2::synapse0x20c9e60() {
   return (neuron0x20ac280()*-0.0233086);
}

double NNfunction_t2t2::synapse0x20c9ea0() {
   return (neuron0x20ac5c0()*0.00190819);
}

double NNfunction_t2t2::synapse0x20c9ee0() {
   return (neuron0x20ac900()*0.792958);
}

double NNfunction_t2t2::synapse0x20c9f20() {
   return (neuron0x20acc40()*-0.0372659);
}

double NNfunction_t2t2::synapse0x20c9f60() {
   return (neuron0x20acf80()*0.0138474);
}

double NNfunction_t2t2::synapse0x20c9fa0() {
   return (neuron0x20ad2c0()*0.0179476);
}

double NNfunction_t2t2::synapse0x20c9fe0() {
   return (neuron0x20ad600()*-0.00135432);
}

double NNfunction_t2t2::synapse0x20ca020() {
   return (neuron0x20ad940()*-0.00481882);
}

double NNfunction_t2t2::synapse0x20ca060() {
   return (neuron0x20adc80()*-0.0246647);
}

double NNfunction_t2t2::synapse0x20ca0a0() {
   return (neuron0x20adfc0()*0.0157771);
}

double NNfunction_t2t2::synapse0x20ca0e0() {
   return (neuron0x20ae300()*0.00926823);
}

double NNfunction_t2t2::synapse0x20ca120() {
   return (neuron0x20ae640()*0.0221687);
}

double NNfunction_t2t2::synapse0x20ca160() {
   return (neuron0x20ae980()*-0.376115);
}

double NNfunction_t2t2::synapse0x20ca1a0() {
   return (neuron0x20aecc0()*0.0536254);
}

double NNfunction_t2t2::synapse0x20ca1e0() {
   return (neuron0x20af000()*0.0418409);
}

double NNfunction_t2t2::synapse0x20c9c70() {
   return (neuron0x20af340()*-0.247331);
}

double NNfunction_t2t2::synapse0x20c9cb0() {
   return (neuron0x20af8a0()*0.0366419);
}

double NNfunction_t2t2::synapse0x20ca330() {
   return (neuron0x20afac0()*0.0306181);
}

double NNfunction_t2t2::synapse0x20ca370() {
   return (neuron0x20afe00()*0.0277616);
}

double NNfunction_t2t2::synapse0x20ca3b0() {
   return (neuron0x20b0140()*0.00679974);
}

double NNfunction_t2t2::synapse0x20ca3f0() {
   return (neuron0x20b0480()*0.00650378);
}

double NNfunction_t2t2::synapse0x20ca430() {
   return (neuron0x20b07c0()*0.013304);
}

double NNfunction_t2t2::synapse0x20ca470() {
   return (neuron0x20b0b00()*0.0900207);
}

double NNfunction_t2t2::synapse0x20ca7f0() {
   return (neuron0x20abf40()*-0.0393127);
}

double NNfunction_t2t2::synapse0x20ca830() {
   return (neuron0x20ac280()*0.123033);
}

double NNfunction_t2t2::synapse0x20ca870() {
   return (neuron0x20ac5c0()*0.0610776);
}

double NNfunction_t2t2::synapse0x20ca8b0() {
   return (neuron0x20ac900()*0.224733);
}

double NNfunction_t2t2::synapse0x20ca8f0() {
   return (neuron0x20acc40()*-0.383462);
}

double NNfunction_t2t2::synapse0x20ca930() {
   return (neuron0x20acf80()*-0.261412);
}

double NNfunction_t2t2::synapse0x20ca970() {
   return (neuron0x20ad2c0()*-0.016967);
}

double NNfunction_t2t2::synapse0x20ca9b0() {
   return (neuron0x20ad600()*-0.0636367);
}

double NNfunction_t2t2::synapse0x20ca9f0() {
   return (neuron0x20ad940()*-0.0125422);
}

double NNfunction_t2t2::synapse0x20caa30() {
   return (neuron0x20adc80()*0.046561);
}

double NNfunction_t2t2::synapse0x20caa70() {
   return (neuron0x20adfc0()*0.0376389);
}

double NNfunction_t2t2::synapse0x20caab0() {
   return (neuron0x20ae300()*-0.199075);
}

double NNfunction_t2t2::synapse0x20caaf0() {
   return (neuron0x20ae640()*-0.0585818);
}

double NNfunction_t2t2::synapse0x20cab30() {
   return (neuron0x20ae980()*0.879106);
}

double NNfunction_t2t2::synapse0x20cab70() {
   return (neuron0x20aecc0()*0.335996);
}

double NNfunction_t2t2::synapse0x20cabb0() {
   return (neuron0x20af000()*0.00328515);
}

double NNfunction_t2t2::synapse0x20ca640() {
   return (neuron0x20af340()*1.1063);
}

double NNfunction_t2t2::synapse0x20ca680() {
   return (neuron0x20af8a0()*0.0577635);
}

double NNfunction_t2t2::synapse0x20cad00() {
   return (neuron0x20afac0()*0.0161443);
}

double NNfunction_t2t2::synapse0x20cad40() {
   return (neuron0x20afe00()*-0.186396);
}

double NNfunction_t2t2::synapse0x20cad80() {
   return (neuron0x20b0140()*-0.105838);
}

double NNfunction_t2t2::synapse0x20cadc0() {
   return (neuron0x20b0480()*0.174159);
}

double NNfunction_t2t2::synapse0x20cae00() {
   return (neuron0x20b07c0()*-0.0281174);
}

double NNfunction_t2t2::synapse0x20cae40() {
   return (neuron0x20b0b00()*0.242803);
}

double NNfunction_t2t2::synapse0x20cb1c0() {
   return (neuron0x20abf40()*0.0139122);
}

double NNfunction_t2t2::synapse0x20cb200() {
   return (neuron0x20ac280()*-0.00197988);
}

double NNfunction_t2t2::synapse0x20cb240() {
   return (neuron0x20ac5c0()*0.0209629);
}

double NNfunction_t2t2::synapse0x20cb280() {
   return (neuron0x20ac900()*2.61654);
}

double NNfunction_t2t2::synapse0x20cb2c0() {
   return (neuron0x20acc40()*0.0154885);
}

double NNfunction_t2t2::synapse0x20cb300() {
   return (neuron0x20acf80()*-0.00569398);
}

double NNfunction_t2t2::synapse0x20cb340() {
   return (neuron0x20ad2c0()*-0.0098338);
}

double NNfunction_t2t2::synapse0x20cb380() {
   return (neuron0x20ad600()*0.00150499);
}

double NNfunction_t2t2::synapse0x20cb3c0() {
   return (neuron0x20ad940()*0.00407069);
}

double NNfunction_t2t2::synapse0x20cb400() {
   return (neuron0x20adc80()*0.00651751);
}

double NNfunction_t2t2::synapse0x20cb440() {
   return (neuron0x20adfc0()*5.28438e-05);
}

double NNfunction_t2t2::synapse0x20cb480() {
   return (neuron0x20ae300()*-0.0154339);
}

double NNfunction_t2t2::synapse0x20cb4c0() {
   return (neuron0x20ae640()*-0.0209288);
}

double NNfunction_t2t2::synapse0x20cb500() {
   return (neuron0x20ae980()*0.161444);
}

double NNfunction_t2t2::synapse0x20cb540() {
   return (neuron0x20aecc0()*-0.0168238);
}

double NNfunction_t2t2::synapse0x20cb580() {
   return (neuron0x20af000()*-0.0157445);
}

double NNfunction_t2t2::synapse0x20cb010() {
   return (neuron0x20af340()*0.165991);
}

double NNfunction_t2t2::synapse0x20cb050() {
   return (neuron0x20af8a0()*-0.0066173);
}

double NNfunction_t2t2::synapse0x20cb6d0() {
   return (neuron0x20afac0()*-0.0104572);
}

double NNfunction_t2t2::synapse0x20cb710() {
   return (neuron0x20afe00()*-0.00846579);
}

double NNfunction_t2t2::synapse0x20cb750() {
   return (neuron0x20b0140()*-0.221924);
}

double NNfunction_t2t2::synapse0x20cb790() {
   return (neuron0x20b0480()*0.00763508);
}

double NNfunction_t2t2::synapse0x20cb7d0() {
   return (neuron0x20b07c0()*-0.00633231);
}

double NNfunction_t2t2::synapse0x20cb810() {
   return (neuron0x20b0b00()*0.0293954);
}

double NNfunction_t2t2::synapse0x20cbb90() {
   return (neuron0x20abf40()*0.356585);
}

double NNfunction_t2t2::synapse0x20cbbd0() {
   return (neuron0x20ac280()*-0.148441);
}

double NNfunction_t2t2::synapse0x20cbc10() {
   return (neuron0x20ac5c0()*-0.0607018);
}

double NNfunction_t2t2::synapse0x20cbc50() {
   return (neuron0x20ac900()*0.320352);
}

double NNfunction_t2t2::synapse0x20cbc90() {
   return (neuron0x20acc40()*-0.481847);
}

double NNfunction_t2t2::synapse0x20cbcd0() {
   return (neuron0x20acf80()*0.321798);
}

double NNfunction_t2t2::synapse0x20cbd10() {
   return (neuron0x20ad2c0()*0.176699);
}

double NNfunction_t2t2::synapse0x20cbd50() {
   return (neuron0x20ad600()*-0.408545);
}

double NNfunction_t2t2::synapse0x20cbd90() {
   return (neuron0x20ad940()*-0.282571);
}

double NNfunction_t2t2::synapse0x20cbdd0() {
   return (neuron0x20adc80()*0.0447529);
}

double NNfunction_t2t2::synapse0x20cbe10() {
   return (neuron0x20adfc0()*-0.285658);
}

double NNfunction_t2t2::synapse0x20cbe50() {
   return (neuron0x20ae300()*-0.00371956);
}

double NNfunction_t2t2::synapse0x20cbe90() {
   return (neuron0x20ae640()*0.158761);
}

double NNfunction_t2t2::synapse0x20cbed0() {
   return (neuron0x20ae980()*0.19055);
}

double NNfunction_t2t2::synapse0x20cbf10() {
   return (neuron0x20aecc0()*0.229685);
}

double NNfunction_t2t2::synapse0x20cbf50() {
   return (neuron0x20af000()*0.360429);
}

double NNfunction_t2t2::synapse0x20cb9e0() {
   return (neuron0x20af340()*0.420547);
}

double NNfunction_t2t2::synapse0x20cba20() {
   return (neuron0x20af8a0()*-0.161203);
}

double NNfunction_t2t2::synapse0x20cc0a0() {
   return (neuron0x20afac0()*0.0836816);
}

double NNfunction_t2t2::synapse0x20cc0e0() {
   return (neuron0x20afe00()*0.0585206);
}

double NNfunction_t2t2::synapse0x20cc120() {
   return (neuron0x20b0140()*0.36395);
}

double NNfunction_t2t2::synapse0x20cc160() {
   return (neuron0x20b0480()*0.465161);
}

double NNfunction_t2t2::synapse0x20cc1a0() {
   return (neuron0x20b07c0()*0.254429);
}

double NNfunction_t2t2::synapse0x20cc1e0() {
   return (neuron0x20b0b00()*-0.437258);
}

double NNfunction_t2t2::synapse0x20cc560() {
   return (neuron0x20abf40()*-0.158118);
}

double NNfunction_t2t2::synapse0x20cc5a0() {
   return (neuron0x20ac280()*0.185313);
}

double NNfunction_t2t2::synapse0x20cc5e0() {
   return (neuron0x20ac5c0()*0.229979);
}

double NNfunction_t2t2::synapse0x20cc620() {
   return (neuron0x20ac900()*0.882491);
}

double NNfunction_t2t2::synapse0x20cc660() {
   return (neuron0x20acc40()*0.0791552);
}

double NNfunction_t2t2::synapse0x20cc6a0() {
   return (neuron0x20acf80()*0.00407105);
}

double NNfunction_t2t2::synapse0x20cc6e0() {
   return (neuron0x20ad2c0()*0.00117349);
}

double NNfunction_t2t2::synapse0x20cc720() {
   return (neuron0x20ad600()*-0.0462319);
}

double NNfunction_t2t2::synapse0x20cc760() {
   return (neuron0x20ad940()*-0.0345759);
}

double NNfunction_t2t2::synapse0x20cc7a0() {
   return (neuron0x20adc80()*0.053206);
}

double NNfunction_t2t2::synapse0x20cc7e0() {
   return (neuron0x20adfc0()*0.0906077);
}

double NNfunction_t2t2::synapse0x20cc820() {
   return (neuron0x20ae300()*-0.133166);
}

double NNfunction_t2t2::synapse0x20cc860() {
   return (neuron0x20ae640()*-0.11868);
}

double NNfunction_t2t2::synapse0x20cc8a0() {
   return (neuron0x20ae980()*-0.742726);
}

double NNfunction_t2t2::synapse0x20cc8e0() {
   return (neuron0x20aecc0()*-0.0153753);
}

double NNfunction_t2t2::synapse0x20cc920() {
   return (neuron0x20af000()*0.0947361);
}

double NNfunction_t2t2::synapse0x20cc3b0() {
   return (neuron0x20af340()*-0.183123);
}

double NNfunction_t2t2::synapse0x20cc3f0() {
   return (neuron0x20af8a0()*-0.057578);
}

double NNfunction_t2t2::synapse0x20cca70() {
   return (neuron0x20afac0()*-0.13017);
}

double NNfunction_t2t2::synapse0x20ccab0() {
   return (neuron0x20afe00()*-0.0407086);
}

double NNfunction_t2t2::synapse0x20ccaf0() {
   return (neuron0x20b0140()*0.678108);
}

double NNfunction_t2t2::synapse0x20ccb30() {
   return (neuron0x20b0480()*-0.0206082);
}

double NNfunction_t2t2::synapse0x20ccb70() {
   return (neuron0x20b07c0()*0.00483815);
}

double NNfunction_t2t2::synapse0x20ccbb0() {
   return (neuron0x20b0b00()*0.600326);
}

double NNfunction_t2t2::synapse0x20ccf30() {
   return (neuron0x20abf40()*-0.182904);
}

double NNfunction_t2t2::synapse0x20ccf70() {
   return (neuron0x20ac280()*-0.0342847);
}

double NNfunction_t2t2::synapse0x20ccfb0() {
   return (neuron0x20ac5c0()*0.00273424);
}

double NNfunction_t2t2::synapse0x20ccff0() {
   return (neuron0x20ac900()*0.00451858);
}

double NNfunction_t2t2::synapse0x20cd030() {
   return (neuron0x20acc40()*-0.0763802);
}

double NNfunction_t2t2::synapse0x20cd070() {
   return (neuron0x20acf80()*-0.0347567);
}

double NNfunction_t2t2::synapse0x20cd0b0() {
   return (neuron0x20ad2c0()*0.000792405);
}

double NNfunction_t2t2::synapse0x20cd0f0() {
   return (neuron0x20ad600()*0.00842004);
}

double NNfunction_t2t2::synapse0x20cd130() {
   return (neuron0x20ad940()*-0.0287384);
}

double NNfunction_t2t2::synapse0x20cd170() {
   return (neuron0x20adc80()*-0.0318472);
}

double NNfunction_t2t2::synapse0x20cd1b0() {
   return (neuron0x20adfc0()*-0.00087009);
}

double NNfunction_t2t2::synapse0x20cd1f0() {
   return (neuron0x20ae300()*-0.0644787);
}

double NNfunction_t2t2::synapse0x20cd230() {
   return (neuron0x20ae640()*-0.0458571);
}

double NNfunction_t2t2::synapse0x20cd270() {
   return (neuron0x20ae980()*0.931469);
}

double NNfunction_t2t2::synapse0x20cd2b0() {
   return (neuron0x20aecc0()*0.0234643);
}

double NNfunction_t2t2::synapse0x20cd2f0() {
   return (neuron0x20af000()*0.0288807);
}

double NNfunction_t2t2::synapse0x20ccd80() {
   return (neuron0x20af340()*1.20335);
}

double NNfunction_t2t2::synapse0x20ccdc0() {
   return (neuron0x20af8a0()*-0.0443898);
}

double NNfunction_t2t2::synapse0x20cd440() {
   return (neuron0x20afac0()*-0.0710944);
}

double NNfunction_t2t2::synapse0x20cd480() {
   return (neuron0x20afe00()*-0.154689);
}

double NNfunction_t2t2::synapse0x20cd4c0() {
   return (neuron0x20b0140()*0.182484);
}

double NNfunction_t2t2::synapse0x20cd500() {
   return (neuron0x20b0480()*-0.00813902);
}

double NNfunction_t2t2::synapse0x20cd540() {
   return (neuron0x20b07c0()*-0.0367904);
}

double NNfunction_t2t2::synapse0x20cd580() {
   return (neuron0x20b0b00()*0.19206);
}

double NNfunction_t2t2::synapse0x20b6030() {
   return (neuron0x20abf40()*0.0278575);
}

double NNfunction_t2t2::synapse0x20b6070() {
   return (neuron0x20ac280()*0.00246783);
}

double NNfunction_t2t2::synapse0x20b60b0() {
   return (neuron0x20ac5c0()*-0.0543139);
}

double NNfunction_t2t2::synapse0x20b60f0() {
   return (neuron0x20ac900()*0.0494136);
}

double NNfunction_t2t2::synapse0x20b6130() {
   return (neuron0x20acc40()*0.00790914);
}

double NNfunction_t2t2::synapse0x20b6170() {
   return (neuron0x20acf80()*-0.0406053);
}

double NNfunction_t2t2::synapse0x20b61b0() {
   return (neuron0x20ad2c0()*-0.0490781);
}

double NNfunction_t2t2::synapse0x20b61f0() {
   return (neuron0x20ad600()*-0.0133345);
}

double NNfunction_t2t2::synapse0x20cdd10() {
   return (neuron0x20ad940()*0.0137646);
}

double NNfunction_t2t2::synapse0x20cdd50() {
   return (neuron0x20adc80()*-0.0119401);
}

double NNfunction_t2t2::synapse0x20cdd90() {
   return (neuron0x20adfc0()*0.0215594);
}

double NNfunction_t2t2::synapse0x20cddd0() {
   return (neuron0x20ae300()*-0.0312192);
}

double NNfunction_t2t2::synapse0x20cde10() {
   return (neuron0x20ae640()*-0.00388039);
}

double NNfunction_t2t2::synapse0x20cde50() {
   return (neuron0x20ae980()*0.87428);
}

double NNfunction_t2t2::synapse0x20cde90() {
   return (neuron0x20aecc0()*0.0562311);
}

double NNfunction_t2t2::synapse0x20cded0() {
   return (neuron0x20af000()*-0.0743278);
}

double NNfunction_t2t2::synapse0x20cd750() {
   return (neuron0x20af340()*-0.279817);
}

double NNfunction_t2t2::synapse0x20cd790() {
   return (neuron0x20af8a0()*-0.0168542);
}

double NNfunction_t2t2::synapse0x20ce020() {
   return (neuron0x20afac0()*-0.00362201);
}

double NNfunction_t2t2::synapse0x20ce060() {
   return (neuron0x20afe00()*0.109129);
}

double NNfunction_t2t2::synapse0x20ce0a0() {
   return (neuron0x20b0140()*1.04202);
}

double NNfunction_t2t2::synapse0x20ce0e0() {
   return (neuron0x20b0480()*-0.101119);
}

double NNfunction_t2t2::synapse0x20ce120() {
   return (neuron0x20b07c0()*-0.0147007);
}

double NNfunction_t2t2::synapse0x20ce160() {
   return (neuron0x20b0b00()*-0.0437068);
}

double NNfunction_t2t2::synapse0x20ce4e0() {
   return (neuron0x20abf40()*0.0565022);
}

double NNfunction_t2t2::synapse0x20ce520() {
   return (neuron0x20ac280()*0.331441);
}

double NNfunction_t2t2::synapse0x20ce560() {
   return (neuron0x20ac5c0()*-0.240724);
}

double NNfunction_t2t2::synapse0x20ce5a0() {
   return (neuron0x20ac900()*-0.514286);
}

double NNfunction_t2t2::synapse0x20ce5e0() {
   return (neuron0x20acc40()*0.09096);
}

double NNfunction_t2t2::synapse0x20ce620() {
   return (neuron0x20acf80()*-0.0239856);
}

double NNfunction_t2t2::synapse0x20ce660() {
   return (neuron0x20ad2c0()*-0.0164502);
}

double NNfunction_t2t2::synapse0x20ce6a0() {
   return (neuron0x20ad600()*0.010929);
}

double NNfunction_t2t2::synapse0x20ce6e0() {
   return (neuron0x20ad940()*0.0163843);
}

double NNfunction_t2t2::synapse0x20ce720() {
   return (neuron0x20adc80()*0.0354358);
}

double NNfunction_t2t2::synapse0x20ce760() {
   return (neuron0x20adfc0()*-0.0239415);
}

double NNfunction_t2t2::synapse0x20ce7a0() {
   return (neuron0x20ae300()*-0.0537577);
}

double NNfunction_t2t2::synapse0x20ce7e0() {
   return (neuron0x20ae640()*-0.153369);
}

double NNfunction_t2t2::synapse0x20ce820() {
   return (neuron0x20ae980()*-0.193992);
}

double NNfunction_t2t2::synapse0x20ce860() {
   return (neuron0x20aecc0()*0.0109084);
}

double NNfunction_t2t2::synapse0x20ce8a0() {
   return (neuron0x20af000()*-0.00574952);
}

double NNfunction_t2t2::synapse0x20ce330() {
   return (neuron0x20af340()*-0.010147);
}

double NNfunction_t2t2::synapse0x20ce370() {
   return (neuron0x20af8a0()*0.00276243);
}

double NNfunction_t2t2::synapse0x20ce9f0() {
   return (neuron0x20afac0()*0.0567314);
}

double NNfunction_t2t2::synapse0x20cea30() {
   return (neuron0x20afe00()*0.0264561);
}

double NNfunction_t2t2::synapse0x20cea70() {
   return (neuron0x20b0140()*0.0937468);
}

double NNfunction_t2t2::synapse0x20ceab0() {
   return (neuron0x20b0480()*0.00280443);
}

double NNfunction_t2t2::synapse0x20ceaf0() {
   return (neuron0x20b07c0()*0.019141);
}

double NNfunction_t2t2::synapse0x20ceb30() {
   return (neuron0x20b0b00()*0.234875);
}

double NNfunction_t2t2::synapse0x20ceeb0() {
   return (neuron0x20abf40()*-0.0505574);
}

double NNfunction_t2t2::synapse0x20ceef0() {
   return (neuron0x20ac280()*0.264805);
}

double NNfunction_t2t2::synapse0x20cef30() {
   return (neuron0x20ac5c0()*0.211018);
}

double NNfunction_t2t2::synapse0x20cef70() {
   return (neuron0x20ac900()*-0.0519707);
}

double NNfunction_t2t2::synapse0x20cefb0() {
   return (neuron0x20acc40()*0.0170107);
}

double NNfunction_t2t2::synapse0x20ceff0() {
   return (neuron0x20acf80()*-0.00185857);
}

double NNfunction_t2t2::synapse0x20cf030() {
   return (neuron0x20ad2c0()*-0.0473397);
}

double NNfunction_t2t2::synapse0x20cf070() {
   return (neuron0x20ad600()*0.115571);
}

double NNfunction_t2t2::synapse0x20cf0b0() {
   return (neuron0x20ad940()*0.241456);
}

double NNfunction_t2t2::synapse0x20cf0f0() {
   return (neuron0x20adc80()*-0.499535);
}

double NNfunction_t2t2::synapse0x20cf130() {
   return (neuron0x20adfc0()*0.255139);
}

double NNfunction_t2t2::synapse0x20cf170() {
   return (neuron0x20ae300()*0.00711148);
}

double NNfunction_t2t2::synapse0x20cf1b0() {
   return (neuron0x20ae640()*-0.145773);
}

double NNfunction_t2t2::synapse0x20cf1f0() {
   return (neuron0x20ae980()*0.51441);
}

double NNfunction_t2t2::synapse0x20cf230() {
   return (neuron0x20aecc0()*-0.134449);
}

double NNfunction_t2t2::synapse0x20cf270() {
   return (neuron0x20af000()*-0.055258);
}

double NNfunction_t2t2::synapse0x20ced00() {
   return (neuron0x20af340()*0.515771);
}

double NNfunction_t2t2::synapse0x20ced40() {
   return (neuron0x20af8a0()*0.138134);
}

double NNfunction_t2t2::synapse0x20bf870() {
   return (neuron0x20afac0()*-0.414546);
}

double NNfunction_t2t2::synapse0x20bf8b0() {
   return (neuron0x20afe00()*0.25405);
}

double NNfunction_t2t2::synapse0x20bf8f0() {
   return (neuron0x20b0140()*0.141197);
}

double NNfunction_t2t2::synapse0x20bf930() {
   return (neuron0x20b0480()*-0.103514);
}

double NNfunction_t2t2::synapse0x20bf970() {
   return (neuron0x20b07c0()*-0.0166489);
}

double NNfunction_t2t2::synapse0x20bf9b0() {
   return (neuron0x20b0b00()*-0.215786);
}

double NNfunction_t2t2::synapse0x20bfd30() {
   return (neuron0x20abf40()*0.950525);
}

double NNfunction_t2t2::synapse0x20bfd70() {
   return (neuron0x20ac280()*0.000759747);
}

double NNfunction_t2t2::synapse0x20bfdb0() {
   return (neuron0x20ac5c0()*0.120511);
}

double NNfunction_t2t2::synapse0x20bfdf0() {
   return (neuron0x20ac900()*0.0327609);
}

double NNfunction_t2t2::synapse0x20bfe30() {
   return (neuron0x20acc40()*-0.0980435);
}

double NNfunction_t2t2::synapse0x20bfe70() {
   return (neuron0x20acf80()*0.0266596);
}

double NNfunction_t2t2::synapse0x20bfeb0() {
   return (neuron0x20ad2c0()*-0.0202467);
}

double NNfunction_t2t2::synapse0x20bfef0() {
   return (neuron0x20ad600()*0.0256916);
}

double NNfunction_t2t2::synapse0x20bff30() {
   return (neuron0x20ad940()*0.0142674);
}

double NNfunction_t2t2::synapse0x20bff70() {
   return (neuron0x20adc80()*0.0194606);
}

double NNfunction_t2t2::synapse0x20bffb0() {
   return (neuron0x20adfc0()*0.0213079);
}

double NNfunction_t2t2::synapse0x20bfff0() {
   return (neuron0x20ae300()*-0.011563);
}

double NNfunction_t2t2::synapse0x20c0030() {
   return (neuron0x20ae640()*-0.00304358);
}

double NNfunction_t2t2::synapse0x20c0070() {
   return (neuron0x20ae980()*0.501093);
}

double NNfunction_t2t2::synapse0x20c00b0() {
   return (neuron0x20aecc0()*-0.0492942);
}

double NNfunction_t2t2::synapse0x20c00f0() {
   return (neuron0x20af000()*-0.00995294);
}

double NNfunction_t2t2::synapse0x20bfb80() {
   return (neuron0x20af340()*-0.489689);
}

double NNfunction_t2t2::synapse0x20bfbc0() {
   return (neuron0x20af8a0()*-0.0179673);
}

double NNfunction_t2t2::synapse0x20c0240() {
   return (neuron0x20afac0()*0.0255186);
}

double NNfunction_t2t2::synapse0x20c0280() {
   return (neuron0x20afe00()*0.0659493);
}

double NNfunction_t2t2::synapse0x20c02c0() {
   return (neuron0x20b0140()*-1.05349);
}

double NNfunction_t2t2::synapse0x20c0300() {
   return (neuron0x20b0480()*0.0885709);
}

double NNfunction_t2t2::synapse0x20c0340() {
   return (neuron0x20b07c0()*0.0122152);
}

double NNfunction_t2t2::synapse0x20c0380() {
   return (neuron0x20b0b00()*0.965729);
}

double NNfunction_t2t2::synapse0x20c0700() {
   return (neuron0x20abf40()*-0.109364);
}

double NNfunction_t2t2::synapse0x20c0740() {
   return (neuron0x20ac280()*-0.0100263);
}

double NNfunction_t2t2::synapse0x20c0780() {
   return (neuron0x20ac5c0()*-0.033533);
}

double NNfunction_t2t2::synapse0x20c07c0() {
   return (neuron0x20ac900()*-0.0315026);
}

double NNfunction_t2t2::synapse0x20c0800() {
   return (neuron0x20acc40()*-0.0576234);
}

double NNfunction_t2t2::synapse0x20c0840() {
   return (neuron0x20acf80()*-0.020098);
}

double NNfunction_t2t2::synapse0x20c0880() {
   return (neuron0x20ad2c0()*-0.0180745);
}

double NNfunction_t2t2::synapse0x20c08c0() {
   return (neuron0x20ad600()*-0.0260596);
}

double NNfunction_t2t2::synapse0x20c0900() {
   return (neuron0x20ad940()*0.0204165);
}

double NNfunction_t2t2::synapse0x20c0940() {
   return (neuron0x20adc80()*0.0200583);
}

double NNfunction_t2t2::synapse0x20c0980() {
   return (neuron0x20adfc0()*0.0200239);
}

double NNfunction_t2t2::synapse0x20c09c0() {
   return (neuron0x20ae300()*0.0132081);
}

double NNfunction_t2t2::synapse0x20c0a00() {
   return (neuron0x20ae640()*0.0143389);
}

double NNfunction_t2t2::synapse0x20c0a40() {
   return (neuron0x20ae980()*2.27372);
}

double NNfunction_t2t2::synapse0x20c0a80() {
   return (neuron0x20aecc0()*-0.0280684);
}

double NNfunction_t2t2::synapse0x20c0ac0() {
   return (neuron0x20af000()*-0.0271369);
}

double NNfunction_t2t2::synapse0x20c0550() {
   return (neuron0x20af340()*-1.86596);
}

double NNfunction_t2t2::synapse0x20c0590() {
   return (neuron0x20af8a0()*0.0232944);
}

double NNfunction_t2t2::synapse0x20c0c10() {
   return (neuron0x20afac0()*0.0286309);
}

double NNfunction_t2t2::synapse0x20c0c50() {
   return (neuron0x20afe00()*0.0262335);
}

double NNfunction_t2t2::synapse0x20c0c90() {
   return (neuron0x20b0140()*0.634057);
}

double NNfunction_t2t2::synapse0x20c0cd0() {
   return (neuron0x20b0480()*0.0229779);
}

double NNfunction_t2t2::synapse0x20c0d10() {
   return (neuron0x20b07c0()*-0.00154687);
}

double NNfunction_t2t2::synapse0x20c0d50() {
   return (neuron0x20b0b00()*-0.136712);
}

double NNfunction_t2t2::synapse0x20c10d0() {
   return (neuron0x20abf40()*-0.0624318);
}

double NNfunction_t2t2::synapse0x20c1110() {
   return (neuron0x20ac280()*-0.0303734);
}

double NNfunction_t2t2::synapse0x20c1150() {
   return (neuron0x20ac5c0()*-0.130877);
}

double NNfunction_t2t2::synapse0x20c1190() {
   return (neuron0x20ac900()*1.07328);
}

double NNfunction_t2t2::synapse0x20c11d0() {
   return (neuron0x20acc40()*-0.200024);
}

double NNfunction_t2t2::synapse0x20c1210() {
   return (neuron0x20acf80()*-0.00922466);
}

double NNfunction_t2t2::synapse0x20c1250() {
   return (neuron0x20ad2c0()*0.00627403);
}

double NNfunction_t2t2::synapse0x20c1290() {
   return (neuron0x20ad600()*0.00496626);
}

double NNfunction_t2t2::synapse0x20c12d0() {
   return (neuron0x20ad940()*-0.0109291);
}

double NNfunction_t2t2::synapse0x20c1310() {
   return (neuron0x20adc80()*-0.0064056);
}

double NNfunction_t2t2::synapse0x20c1350() {
   return (neuron0x20adfc0()*0.019128);
}

double NNfunction_t2t2::synapse0x20c1390() {
   return (neuron0x20ae300()*-0.0529141);
}

double NNfunction_t2t2::synapse0x20c13d0() {
   return (neuron0x20ae640()*-0.179116);
}

double NNfunction_t2t2::synapse0x20c1410() {
   return (neuron0x20ae980()*0.19855);
}

double NNfunction_t2t2::synapse0x20c1450() {
   return (neuron0x20aecc0()*0.0153881);
}

double NNfunction_t2t2::synapse0x20c1490() {
   return (neuron0x20af000()*-0.0361401);
}

double NNfunction_t2t2::synapse0x20c0f20() {
   return (neuron0x20af340()*0.328161);
}

double NNfunction_t2t2::synapse0x20c0f60() {
   return (neuron0x20af8a0()*0.0784471);
}

double NNfunction_t2t2::synapse0x20c15e0() {
   return (neuron0x20afac0()*-0.0227785);
}

double NNfunction_t2t2::synapse0x20c1620() {
   return (neuron0x20afe00()*-0.128927);
}

double NNfunction_t2t2::synapse0x20c1660() {
   return (neuron0x20b0140()*-0.0475734);
}

double NNfunction_t2t2::synapse0x20c16a0() {
   return (neuron0x20b0480()*-0.0258605);
}

double NNfunction_t2t2::synapse0x20c16e0() {
   return (neuron0x20b07c0()*-0.0246505);
}

double NNfunction_t2t2::synapse0x20c1720() {
   return (neuron0x20b0b00()*-0.152104);
}

double NNfunction_t2t2::synapse0x20d35f0() {
   return (neuron0x20abf40()*-0.0218208);
}

double NNfunction_t2t2::synapse0x20d3630() {
   return (neuron0x20ac280()*-0.0148785);
}

double NNfunction_t2t2::synapse0x20d3670() {
   return (neuron0x20ac5c0()*-0.0555086);
}

double NNfunction_t2t2::synapse0x20d36b0() {
   return (neuron0x20ac900()*0.125627);
}

double NNfunction_t2t2::synapse0x20d36f0() {
   return (neuron0x20acc40()*-0.0165888);
}

double NNfunction_t2t2::synapse0x20d3730() {
   return (neuron0x20acf80()*0.0353185);
}

double NNfunction_t2t2::synapse0x20d3770() {
   return (neuron0x20ad2c0()*-0.0486414);
}

double NNfunction_t2t2::synapse0x20d37b0() {
   return (neuron0x20ad600()*0.0698305);
}

double NNfunction_t2t2::synapse0x20d37f0() {
   return (neuron0x20ad940()*-0.0267402);
}

double NNfunction_t2t2::synapse0x20d3830() {
   return (neuron0x20adc80()*-0.015997);
}

double NNfunction_t2t2::synapse0x20d3870() {
   return (neuron0x20adfc0()*-0.0308502);
}

double NNfunction_t2t2::synapse0x20d38b0() {
   return (neuron0x20ae300()*0.0321883);
}

double NNfunction_t2t2::synapse0x20d38f0() {
   return (neuron0x20ae640()*0.0170795);
}

double NNfunction_t2t2::synapse0x20d3930() {
   return (neuron0x20ae980()*0.656849);
}

double NNfunction_t2t2::synapse0x20d3970() {
   return (neuron0x20aecc0()*-0.00247967);
}

double NNfunction_t2t2::synapse0x20d39b0() {
   return (neuron0x20af000()*0.0194945);
}

double NNfunction_t2t2::synapse0x20c1760() {
   return (neuron0x20af340()*0.850538);
}

double NNfunction_t2t2::synapse0x20c17a0() {
   return (neuron0x20af8a0()*0.00772955);
}

double NNfunction_t2t2::synapse0x20d3b00() {
   return (neuron0x20afac0()*-0.00257165);
}

double NNfunction_t2t2::synapse0x20d3b40() {
   return (neuron0x20afe00()*0.0274682);
}

double NNfunction_t2t2::synapse0x20d3b80() {
   return (neuron0x20b0140()*0.60176);
}

double NNfunction_t2t2::synapse0x20d3bc0() {
   return (neuron0x20b0480()*-0.0327008);
}

double NNfunction_t2t2::synapse0x20d3c00() {
   return (neuron0x20b07c0()*-0.00923336);
}

double NNfunction_t2t2::synapse0x20d3c40() {
   return (neuron0x20b0b00()*-0.23865);
}

double NNfunction_t2t2::synapse0x20d3fc0() {
   return (neuron0x20abf40()*-0.251905);
}

double NNfunction_t2t2::synapse0x20d4000() {
   return (neuron0x20ac280()*-0.0659266);
}

double NNfunction_t2t2::synapse0x20d4040() {
   return (neuron0x20ac5c0()*-0.361058);
}

double NNfunction_t2t2::synapse0x20d4080() {
   return (neuron0x20ac900()*-0.015669);
}

double NNfunction_t2t2::synapse0x20d40c0() {
   return (neuron0x20acc40()*0.499411);
}

double NNfunction_t2t2::synapse0x20d4100() {
   return (neuron0x20acf80()*0.0462714);
}

double NNfunction_t2t2::synapse0x20d4140() {
   return (neuron0x20ad2c0()*-0.0178865);
}

double NNfunction_t2t2::synapse0x20d4180() {
   return (neuron0x20ad600()*-0.0253525);
}

double NNfunction_t2t2::synapse0x20d41c0() {
   return (neuron0x20ad940()*-0.0613357);
}

double NNfunction_t2t2::synapse0x20d4200() {
   return (neuron0x20adc80()*0.00635216);
}

double NNfunction_t2t2::synapse0x20d4240() {
   return (neuron0x20adfc0()*0.0377967);
}

double NNfunction_t2t2::synapse0x20d4280() {
   return (neuron0x20ae300()*-0.0145497);
}

double NNfunction_t2t2::synapse0x20d42c0() {
   return (neuron0x20ae640()*-0.0483067);
}

double NNfunction_t2t2::synapse0x20d4300() {
   return (neuron0x20ae980()*0.264654);
}

double NNfunction_t2t2::synapse0x20d4340() {
   return (neuron0x20aecc0()*-0.0149417);
}

double NNfunction_t2t2::synapse0x20d4380() {
   return (neuron0x20af000()*0.00382853);
}

double NNfunction_t2t2::synapse0x20d3e10() {
   return (neuron0x20af340()*0.157623);
}

double NNfunction_t2t2::synapse0x20d3e50() {
   return (neuron0x20af8a0()*0.0199599);
}

double NNfunction_t2t2::synapse0x20d44d0() {
   return (neuron0x20afac0()*0.0460749);
}

double NNfunction_t2t2::synapse0x20d4510() {
   return (neuron0x20afe00()*0.155113);
}

double NNfunction_t2t2::synapse0x20d4550() {
   return (neuron0x20b0140()*0.24231);
}

double NNfunction_t2t2::synapse0x20d4590() {
   return (neuron0x20b0480()*-0.0541579);
}

double NNfunction_t2t2::synapse0x20d45d0() {
   return (neuron0x20b07c0()*-0.0376373);
}

double NNfunction_t2t2::synapse0x20d4610() {
   return (neuron0x20b0b00()*0.58172);
}

double NNfunction_t2t2::synapse0x20d4990() {
   return (neuron0x20abf40()*-0.117521);
}

double NNfunction_t2t2::synapse0x20d49d0() {
   return (neuron0x20ac280()*-0.14804);
}

double NNfunction_t2t2::synapse0x20d4a10() {
   return (neuron0x20ac5c0()*-0.0817655);
}

double NNfunction_t2t2::synapse0x20d4a50() {
   return (neuron0x20ac900()*0.0721086);
}

double NNfunction_t2t2::synapse0x20d4a90() {
   return (neuron0x20acc40()*-0.128392);
}

double NNfunction_t2t2::synapse0x20d4ad0() {
   return (neuron0x20acf80()*0.0388347);
}

double NNfunction_t2t2::synapse0x20d4b10() {
   return (neuron0x20ad2c0()*0.0200921);
}

double NNfunction_t2t2::synapse0x20d4b50() {
   return (neuron0x20ad600()*0.00626911);
}

double NNfunction_t2t2::synapse0x20d4b90() {
   return (neuron0x20ad940()*-0.012806);
}

double NNfunction_t2t2::synapse0x20d4bd0() {
   return (neuron0x20adc80()*0.00715729);
}

double NNfunction_t2t2::synapse0x20d4c10() {
   return (neuron0x20adfc0()*-0.0203648);
}

double NNfunction_t2t2::synapse0x20d4c50() {
   return (neuron0x20ae300()*0.027608);
}

double NNfunction_t2t2::synapse0x20d4c90() {
   return (neuron0x20ae640()*0.0335216);
}

double NNfunction_t2t2::synapse0x20d4cd0() {
   return (neuron0x20ae980()*-1.99978);
}

double NNfunction_t2t2::synapse0x20d4d10() {
   return (neuron0x20aecc0()*0.0186662);
}

double NNfunction_t2t2::synapse0x20d4d50() {
   return (neuron0x20af000()*0.00954863);
}

double NNfunction_t2t2::synapse0x20d47e0() {
   return (neuron0x20af340()*1.45859);
}

double NNfunction_t2t2::synapse0x20d4820() {
   return (neuron0x20af8a0()*-0.0356428);
}

double NNfunction_t2t2::synapse0x20d4ea0() {
   return (neuron0x20afac0()*-0.00770573);
}

double NNfunction_t2t2::synapse0x20d4ee0() {
   return (neuron0x20afe00()*-0.103621);
}

double NNfunction_t2t2::synapse0x20d4f20() {
   return (neuron0x20b0140()*0.246028);
}

double NNfunction_t2t2::synapse0x20d4f60() {
   return (neuron0x20b0480()*-0.0262503);
}

double NNfunction_t2t2::synapse0x20d4fa0() {
   return (neuron0x20b07c0()*-0.00240189);
}

double NNfunction_t2t2::synapse0x20d4fe0() {
   return (neuron0x20b0b00()*-0.160827);
}

double NNfunction_t2t2::synapse0x20d5360() {
   return (neuron0x20abf40()*0.087807);
}

double NNfunction_t2t2::synapse0x20d53a0() {
   return (neuron0x20ac280()*-0.0378054);
}

double NNfunction_t2t2::synapse0x20d53e0() {
   return (neuron0x20ac5c0()*-0.191565);
}

double NNfunction_t2t2::synapse0x20d5420() {
   return (neuron0x20ac900()*0.600053);
}

double NNfunction_t2t2::synapse0x20d5460() {
   return (neuron0x20acc40()*0.0653757);
}

double NNfunction_t2t2::synapse0x20d54a0() {
   return (neuron0x20acf80()*0.0224022);
}

double NNfunction_t2t2::synapse0x20d54e0() {
   return (neuron0x20ad2c0()*-0.00732976);
}

double NNfunction_t2t2::synapse0x20d5520() {
   return (neuron0x20ad600()*0.0244539);
}

double NNfunction_t2t2::synapse0x20d5560() {
   return (neuron0x20ad940()*-0.0200526);
}

double NNfunction_t2t2::synapse0x20d55a0() {
   return (neuron0x20adc80()*0.00998264);
}

double NNfunction_t2t2::synapse0x20d55e0() {
   return (neuron0x20adfc0()*-0.0836425);
}

double NNfunction_t2t2::synapse0x20d5620() {
   return (neuron0x20ae300()*0.29909);
}

double NNfunction_t2t2::synapse0x20d5660() {
   return (neuron0x20ae640()*-0.104265);
}

double NNfunction_t2t2::synapse0x20d56a0() {
   return (neuron0x20ae980()*-0.490423);
}

double NNfunction_t2t2::synapse0x20d56e0() {
   return (neuron0x20aecc0()*0.0112005);
}

double NNfunction_t2t2::synapse0x20d5720() {
   return (neuron0x20af000()*0.0345997);
}

double NNfunction_t2t2::synapse0x20d51b0() {
   return (neuron0x20af340()*-0.0134736);
}

double NNfunction_t2t2::synapse0x20d51f0() {
   return (neuron0x20af8a0()*-0.0119261);
}

double NNfunction_t2t2::synapse0x20d5870() {
   return (neuron0x20afac0()*0.121321);
}

double NNfunction_t2t2::synapse0x20d58b0() {
   return (neuron0x20afe00()*0.163171);
}

double NNfunction_t2t2::synapse0x20d58f0() {
   return (neuron0x20b0140()*0.12877);
}

double NNfunction_t2t2::synapse0x20d5930() {
   return (neuron0x20b0480()*0.0239405);
}

double NNfunction_t2t2::synapse0x20d5970() {
   return (neuron0x20b07c0()*-0.005869);
}

double NNfunction_t2t2::synapse0x20d59b0() {
   return (neuron0x20b0b00()*-0.598411);
}

double NNfunction_t2t2::synapse0x20b1f50() {
   return (neuron0x20b0fa0()*-0.774792);
}

double NNfunction_t2t2::synapse0x20b1f90() {
   return (neuron0x20b18b0()*0.315764);
}

double NNfunction_t2t2::synapse0x20b3460() {
   return (neuron0x20b2390()*-1.39582);
}

double NNfunction_t2t2::synapse0x20b34a0() {
   return (neuron0x1e6bc20()*1.11407);
}

double NNfunction_t2t2::synapse0x20b3e30() {
   return (neuron0x20b31b0()*-2.47397);
}

double NNfunction_t2t2::synapse0x20b3e70() {
   return (neuron0x20b3b80()*-1.79955);
}

double NNfunction_t2t2::synapse0x20b4c00() {
   return (neuron0x20b4950()*2.46481);
}

double NNfunction_t2t2::synapse0x20b4c40() {
   return (neuron0x20b5320()*-1.29288);
}

double NNfunction_t2t2::synapse0x20b55d0() {
   return (neuron0x20b5cf0()*-1.24311);
}

double NNfunction_t2t2::synapse0x20b5610() {
   return (neuron0x20b67d0()*-3.32356);
}

double NNfunction_t2t2::synapse0x20b5fa0() {
   return (neuron0x20b71a0()*0.501918);
}

double NNfunction_t2t2::synapse0x20b5fe0() {
   return (neuron0x20b4280()*-2.33894);
}

double NNfunction_t2t2::synapse0x20b6a80() {
   return (neuron0x20b8d50()*0.0483017);
}

double NNfunction_t2t2::synapse0x20b6ac0() {
   return (neuron0x20b9720()*2.39791);
}

double NNfunction_t2t2::synapse0x20b7450() {
   return (neuron0x20ba0f0()*-0.34897);
}

double NNfunction_t2t2::synapse0x20b7490() {
   return (neuron0x20baac0()*1.24161);
}

double NNfunction_t2t2::synapse0x20b4530() {
   return (neuron0x20bc8d0()*0.88633);
}

double NNfunction_t2t2::synapse0x20b4570() {
   return (neuron0x20bcbb0()*0.65248);
}

double NNfunction_t2t2::synapse0x20b9000() {
   return (neuron0x20bd580()*-1.35746);
}

double NNfunction_t2t2::synapse0x20b9040() {
   return (neuron0x20bdf50()*-0.383697);
}

double NNfunction_t2t2::synapse0x20b99d0() {
   return (neuron0x20be920()*1.86344);
}

double NNfunction_t2t2::synapse0x20b9a10() {
   return (neuron0x20bf2f0()*0.199775);
}

double NNfunction_t2t2::synapse0x20ba3a0() {
   return (neuron0x20b7e40()*1.00075);
}

double NNfunction_t2t2::synapse0x20ba3e0() {
   return (neuron0x20b8810()*0.168228);
}

double NNfunction_t2t2::synapse0x20bad70() {
   return (neuron0x20c2080()*-0.984021);
}

double NNfunction_t2t2::synapse0x20badb0() {
   return (neuron0x20c2a50()*0.89984);
}

double NNfunction_t2t2::synapse0x20aeee0() {
   return (neuron0x20c3420()*0.0978372);
}

double NNfunction_t2t2::synapse0x20aef20() {
   return (neuron0x20c3df0()*0.939164);
}

double NNfunction_t2t2::synapse0x20bce60() {
   return (neuron0x20c47c0()*-0.385895);
}

double NNfunction_t2t2::synapse0x20bcea0() {
   return (neuron0x20c5190()*1.86636);
}

double NNfunction_t2t2::synapse0x20bd830() {
   return (neuron0x20c5b60()*0.253682);
}

double NNfunction_t2t2::synapse0x20bd870() {
   return (neuron0x20c6530()*-0.067173);
}

double NNfunction_t2t2::synapse0x20be200() {
   return (neuron0x20bc5c0()*0.737825);
}

double NNfunction_t2t2::synapse0x20be240() {
   return (neuron0x20c9110()*-1.73745);
}

double NNfunction_t2t2::synapse0x20bebd0() {
   return (neuron0x20c9ae0()*0.917038);
}

double NNfunction_t2t2::synapse0x20bec10() {
   return (neuron0x20ca4b0()*0.4805);
}

double NNfunction_t2t2::synapse0x20bf5a0() {
   return (neuron0x20cae80()*2.2572);
}

double NNfunction_t2t2::synapse0x20bf5e0() {
   return (neuron0x20cb850()*0.174436);
}

double NNfunction_t2t2::synapse0x20b80f0() {
   return (neuron0x20cc220()*0.539727);
}

double NNfunction_t2t2::synapse0x20b8130() {
   return (neuron0x20ccbf0()*1.2467);
}

double NNfunction_t2t2::synapse0x20c19a0() {
   return (neuron0x20cd5c0()*1.03232);
}

double NNfunction_t2t2::synapse0x20c19e0() {
   return (neuron0x20ce1a0()*1.00838);
}

double NNfunction_t2t2::synapse0x20c2330() {
   return (neuron0x20ceb70()*-0.103549);
}

double NNfunction_t2t2::synapse0x20c2370() {
   return (neuron0x20bf9f0()*0.722029);
}

double NNfunction_t2t2::synapse0x20c2d00() {
   return (neuron0x20c03c0()*-2.60501);
}

double NNfunction_t2t2::synapse0x20c2d40() {
   return (neuron0x20c0d90()*-2.09273);
}

double NNfunction_t2t2::synapse0x20c36d0() {
   return (neuron0x20d33d0()*0.530436);
}

double NNfunction_t2t2::synapse0x20c3710() {
   return (neuron0x20d3c80()*0.863125);
}

double NNfunction_t2t2::synapse0x20c40a0() {
   return (neuron0x20d4650()*0.290459);
}

double NNfunction_t2t2::synapse0x20c40e0() {
   return (neuron0x20d5020()*0.975892);
}

double NNfunction_t2t2::synapse0x20c67e0() {
   return (neuron0x20b0fa0()*0.270939);
}

double NNfunction_t2t2::synapse0x20c6820() {
   return (neuron0x20b18b0()*-0.713448);
}

double NNfunction_t2t2::synapse0x20bbda0() {
   return (neuron0x20b2390()*0.128247);
}

double NNfunction_t2t2::synapse0x20bbde0() {
   return (neuron0x1e6bc20()*-0.352659);
}

double NNfunction_t2t2::synapse0x20c93c0() {
   return (neuron0x20b31b0()*-0.22905);
}

double NNfunction_t2t2::synapse0x20c9400() {
   return (neuron0x20b3b80()*0.326946);
}

double NNfunction_t2t2::synapse0x20c9d90() {
   return (neuron0x20b4950()*-0.74594);
}

double NNfunction_t2t2::synapse0x20c9dd0() {
   return (neuron0x20b5320()*0.113255);
}

double NNfunction_t2t2::synapse0x20ca760() {
   return (neuron0x20b5cf0()*-0.119297);
}

double NNfunction_t2t2::synapse0x20ca7a0() {
   return (neuron0x20b67d0()*0.100547);
}

double NNfunction_t2t2::synapse0x20cb130() {
   return (neuron0x20b71a0()*-0.193229);
}

double NNfunction_t2t2::synapse0x20cb170() {
   return (neuron0x20b4280()*-0.287526);
}

double NNfunction_t2t2::synapse0x20cbb00() {
   return (neuron0x20b8d50()*0.283582);
}

double NNfunction_t2t2::synapse0x20cbb40() {
   return (neuron0x20b9720()*-0.203809);
}

double NNfunction_t2t2::synapse0x20cc4d0() {
   return (neuron0x20ba0f0()*-0.463115);
}

double NNfunction_t2t2::synapse0x20cc510() {
   return (neuron0x20baac0()*0.236359);
}

double NNfunction_t2t2::synapse0x20ccea0() {
   return (neuron0x20bc8d0()*-0.324809);
}

double NNfunction_t2t2::synapse0x20ccee0() {
   return (neuron0x20bcbb0()*-0.589759);
}

double NNfunction_t2t2::synapse0x20cd870() {
   return (neuron0x20bd580()*-0.458045);
}

double NNfunction_t2t2::synapse0x20cd8b0() {
   return (neuron0x20bdf50()*-0.129805);
}

double NNfunction_t2t2::synapse0x20ce450() {
   return (neuron0x20be920()*0.121357);
}

double NNfunction_t2t2::synapse0x20ce490() {
   return (neuron0x20bf2f0()*-0.131725);
}

double NNfunction_t2t2::synapse0x20cee20() {
   return (neuron0x20b7e40()*-0.306409);
}

double NNfunction_t2t2::synapse0x20cee60() {
   return (neuron0x20b8810()*-0.145337);
}

double NNfunction_t2t2::synapse0x20bfca0() {
   return (neuron0x20c2080()*0.00394908);
}

double NNfunction_t2t2::synapse0x20bfce0() {
   return (neuron0x20c2a50()*-0.505014);
}

double NNfunction_t2t2::synapse0x20c0670() {
   return (neuron0x20c3420()*0.659275);
}

double NNfunction_t2t2::synapse0x20c06b0() {
   return (neuron0x20c3df0()*-0.0116723);
}

double NNfunction_t2t2::synapse0x20c1040() {
   return (neuron0x20c47c0()*-0.168388);
}

double NNfunction_t2t2::synapse0x20c1080() {
   return (neuron0x20c5190()*0.0630483);
}

double NNfunction_t2t2::synapse0x20d3560() {
   return (neuron0x20c5b60()*-0.605075);
}

double NNfunction_t2t2::synapse0x20d35a0() {
   return (neuron0x20c6530()*0.253682);
}

double NNfunction_t2t2::synapse0x20d3f30() {
   return (neuron0x20bc5c0()*-0.402474);
}

double NNfunction_t2t2::synapse0x20d3f70() {
   return (neuron0x20c9110()*0.353356);
}

double NNfunction_t2t2::synapse0x20d4900() {
   return (neuron0x20c9ae0()*0.31261);
}

double NNfunction_t2t2::synapse0x20d4940() {
   return (neuron0x20ca4b0()*0.175258);
}

double NNfunction_t2t2::synapse0x20d52d0() {
   return (neuron0x20cae80()*0.0576318);
}

double NNfunction_t2t2::synapse0x20d5310() {
   return (neuron0x20cb850()*-0.325569);
}

double NNfunction_t2t2::synapse0x20b11c0() {
   return (neuron0x20cc220()*0.0691056);
}

double NNfunction_t2t2::synapse0x20b1200() {
   return (neuron0x20ccbf0()*-0.496964);
}

double NNfunction_t2t2::synapse0x20c4a70() {
   return (neuron0x20cd5c0()*-0.518978);
}

double NNfunction_t2t2::synapse0x20c4ab0() {
   return (neuron0x20ce1a0()*0.213076);
}

double NNfunction_t2t2::synapse0x20d59f0() {
   return (neuron0x20ceb70()*0.368654);
}

double NNfunction_t2t2::synapse0x20d5a30() {
   return (neuron0x20bf9f0()*-0.141159);
}

double NNfunction_t2t2::synapse0x20d5a70() {
   return (neuron0x20c03c0()*-0.819546);
}

double NNfunction_t2t2::synapse0x20d5ab0() {
   return (neuron0x20c0d90()*-0.0387021);
}

double NNfunction_t2t2::synapse0x20dc960() {
   return (neuron0x20d33d0()*0.0602729);
}

double NNfunction_t2t2::synapse0x20dc9a0() {
   return (neuron0x20d3c80()*0.108191);
}

double NNfunction_t2t2::synapse0x20dc9e0() {
   return (neuron0x20d4650()*0.579971);
}

double NNfunction_t2t2::synapse0x20dca20() {
   return (neuron0x20d5020()*0.0166572);
}

double NNfunction_t2t2::synapse0x20dcda0() {
   return (neuron0x20b0fa0()*0.0278274);
}

double NNfunction_t2t2::synapse0x20dcde0() {
   return (neuron0x20b18b0()*1.78162);
}

double NNfunction_t2t2::synapse0x20dce20() {
   return (neuron0x20b2390()*-0.503951);
}

double NNfunction_t2t2::synapse0x20dce60() {
   return (neuron0x1e6bc20()*-0.159107);
}

double NNfunction_t2t2::synapse0x20dcea0() {
   return (neuron0x20b31b0()*-2.49452);
}

double NNfunction_t2t2::synapse0x20dcee0() {
   return (neuron0x20b3b80()*0.13277);
}

double NNfunction_t2t2::synapse0x20dcf20() {
   return (neuron0x20b4950()*0.108887);
}

double NNfunction_t2t2::synapse0x20dcf60() {
   return (neuron0x20b5320()*-0.201196);
}

double NNfunction_t2t2::synapse0x20dcfa0() {
   return (neuron0x20b5cf0()*-0.534991);
}

double NNfunction_t2t2::synapse0x20dcfe0() {
   return (neuron0x20b67d0()*-0.406345);
}

double NNfunction_t2t2::synapse0x20dd020() {
   return (neuron0x20b71a0()*2.14756);
}

double NNfunction_t2t2::synapse0x20dd060() {
   return (neuron0x20b4280()*-0.669076);
}

double NNfunction_t2t2::synapse0x20dd0a0() {
   return (neuron0x20b8d50()*0.00617722);
}

double NNfunction_t2t2::synapse0x20dd0e0() {
   return (neuron0x20b9720()*0.295197);
}

double NNfunction_t2t2::synapse0x20dd120() {
   return (neuron0x20ba0f0()*-0.00450884);
}

double NNfunction_t2t2::synapse0x20dd160() {
   return (neuron0x20baac0()*0.133596);
}

double NNfunction_t2t2::synapse0x20dcbf0() {
   return (neuron0x20bc8d0()*0.0073058);
}

double NNfunction_t2t2::synapse0x20dcc30() {
   return (neuron0x20bcbb0()*-0.110999);
}

double NNfunction_t2t2::synapse0x20dd2b0() {
   return (neuron0x20bd580()*0.0302774);
}

double NNfunction_t2t2::synapse0x20dd2f0() {
   return (neuron0x20bdf50()*-0.0452016);
}

double NNfunction_t2t2::synapse0x20dd330() {
   return (neuron0x20be920()*0.0471343);
}

double NNfunction_t2t2::synapse0x20dd370() {
   return (neuron0x20bf2f0()*0.0487448);
}

double NNfunction_t2t2::synapse0x20dd3b0() {
   return (neuron0x20b7e40()*1.21327);
}

double NNfunction_t2t2::synapse0x20dd3f0() {
   return (neuron0x20b8810()*0.0027514);
}

double NNfunction_t2t2::synapse0x20dd430() {
   return (neuron0x20c2080()*-0.339698);
}

double NNfunction_t2t2::synapse0x20dd470() {
   return (neuron0x20c2a50()*0.0792722);
}

double NNfunction_t2t2::synapse0x20dd4b0() {
   return (neuron0x20c3420()*0.0304074);
}

double NNfunction_t2t2::synapse0x20dd4f0() {
   return (neuron0x20c3df0()*2.5658);
}

double NNfunction_t2t2::synapse0x20dd530() {
   return (neuron0x20c47c0()*-0.0271389);
}

double NNfunction_t2t2::synapse0x20dd570() {
   return (neuron0x20c5190()*-0.0673345);
}

double NNfunction_t2t2::synapse0x20dd5b0() {
   return (neuron0x20c5b60()*-0.049822);
}

double NNfunction_t2t2::synapse0x20dd5f0() {
   return (neuron0x20c6530()*-0.804311);
}

double NNfunction_t2t2::synapse0x20dd1a0() {
   return (neuron0x20bc5c0()*0.153105);
}

double NNfunction_t2t2::synapse0x20dd1e0() {
   return (neuron0x20c9110()*0.115541);
}

double NNfunction_t2t2::synapse0x20dd220() {
   return (neuron0x20c9ae0()*0.534822);
}

double NNfunction_t2t2::synapse0x20dd260() {
   return (neuron0x20ca4b0()*-0.00422525);
}

double NNfunction_t2t2::synapse0x20dd840() {
   return (neuron0x20cae80()*0.214962);
}

double NNfunction_t2t2::synapse0x20dd880() {
   return (neuron0x20cb850()*-0.021918);
}

double NNfunction_t2t2::synapse0x20dd8c0() {
   return (neuron0x20cc220()*-0.0516562);
}

double NNfunction_t2t2::synapse0x20dd900() {
   return (neuron0x20ccbf0()*0.126038);
}

double NNfunction_t2t2::synapse0x20dd940() {
   return (neuron0x20cd5c0()*0.0654869);
}

double NNfunction_t2t2::synapse0x20dd980() {
   return (neuron0x20ce1a0()*0.0743207);
}

double NNfunction_t2t2::synapse0x20dd9c0() {
   return (neuron0x20ceb70()*0.00836248);
}

double NNfunction_t2t2::synapse0x20dda00() {
   return (neuron0x20bf9f0()*-0.0131981);
}

double NNfunction_t2t2::synapse0x20dda40() {
   return (neuron0x20c03c0()*-0.0663458);
}

double NNfunction_t2t2::synapse0x20dda80() {
   return (neuron0x20c0d90()*-0.00356331);
}

double NNfunction_t2t2::synapse0x20ddac0() {
   return (neuron0x20d33d0()*0.214036);
}

double NNfunction_t2t2::synapse0x20ddb00() {
   return (neuron0x20d3c80()*-0.0278603);
}

double NNfunction_t2t2::synapse0x20ddb40() {
   return (neuron0x20d4650()*0.268029);
}

double NNfunction_t2t2::synapse0x20ddb80() {
   return (neuron0x20d5020()*-0.0146286);
}

double NNfunction_t2t2::synapse0x20ddf00() {
   return (neuron0x20b0fa0()*0.432576);
}

double NNfunction_t2t2::synapse0x20ddf40() {
   return (neuron0x20b18b0()*0.191633);
}

double NNfunction_t2t2::synapse0x20ddf80() {
   return (neuron0x20b2390()*-0.93355);
}

double NNfunction_t2t2::synapse0x20ddfc0() {
   return (neuron0x1e6bc20()*0.816881);
}

double NNfunction_t2t2::synapse0x20de000() {
   return (neuron0x20b31b0()*0.347184);
}

double NNfunction_t2t2::synapse0x20de040() {
   return (neuron0x20b3b80()*-0.285164);
}

double NNfunction_t2t2::synapse0x20de080() {
   return (neuron0x20b4950()*0.818513);
}

double NNfunction_t2t2::synapse0x20de0c0() {
   return (neuron0x20b5320()*-0.167489);
}

double NNfunction_t2t2::synapse0x20de100() {
   return (neuron0x20b5cf0()*-0.355979);
}

double NNfunction_t2t2::synapse0x20de140() {
   return (neuron0x20b67d0()*0.318129);
}

double NNfunction_t2t2::synapse0x20de180() {
   return (neuron0x20b71a0()*1.05834);
}

double NNfunction_t2t2::synapse0x20de1c0() {
   return (neuron0x20b4280()*-0.250966);
}

double NNfunction_t2t2::synapse0x20de200() {
   return (neuron0x20b8d50()*-0.27616);
}

double NNfunction_t2t2::synapse0x20de240() {
   return (neuron0x20b9720()*0.507402);
}

double NNfunction_t2t2::synapse0x20de280() {
   return (neuron0x20ba0f0()*0.17734);
}

double NNfunction_t2t2::synapse0x20de2c0() {
   return (neuron0x20baac0()*-0.217585);
}

double NNfunction_t2t2::synapse0x20ddd50() {
   return (neuron0x20bc8d0()*0.783616);
}

double NNfunction_t2t2::synapse0x20ddd90() {
   return (neuron0x20bcbb0()*0.984941);
}

double NNfunction_t2t2::synapse0x20de410() {
   return (neuron0x20bd580()*-0.80917);
}

double NNfunction_t2t2::synapse0x20de450() {
   return (neuron0x20bdf50()*-0.0623957);
}

double NNfunction_t2t2::synapse0x20de490() {
   return (neuron0x20be920()*1.17655);
}

double NNfunction_t2t2::synapse0x20de4d0() {
   return (neuron0x20bf2f0()*0.158856);
}

double NNfunction_t2t2::synapse0x20de510() {
   return (neuron0x20b7e40()*1.21324);
}

double NNfunction_t2t2::synapse0x20de550() {
   return (neuron0x20b8810()*0.0931097);
}

double NNfunction_t2t2::synapse0x20de590() {
   return (neuron0x20c2080()*-0.393712);
}

double NNfunction_t2t2::synapse0x20de5d0() {
   return (neuron0x20c2a50()*0.334102);
}

double NNfunction_t2t2::synapse0x20de610() {
   return (neuron0x20c3420()*0.11264);
}

double NNfunction_t2t2::synapse0x20de650() {
   return (neuron0x20c3df0()*0.503675);
}

double NNfunction_t2t2::synapse0x20de690() {
   return (neuron0x20c47c0()*-0.401213);
}

double NNfunction_t2t2::synapse0x20de6d0() {
   return (neuron0x20c5190()*0.934359);
}

double NNfunction_t2t2::synapse0x20de710() {
   return (neuron0x20c5b60()*-0.0365465);
}

double NNfunction_t2t2::synapse0x20de750() {
   return (neuron0x20c6530()*0.119119);
}

double NNfunction_t2t2::synapse0x20de300() {
   return (neuron0x20bc5c0()*0.0671141);
}

double NNfunction_t2t2::synapse0x20de340() {
   return (neuron0x20c9110()*-1.09925);
}

double NNfunction_t2t2::synapse0x20de380() {
   return (neuron0x20c9ae0()*0.254856);
}

double NNfunction_t2t2::synapse0x20de3c0() {
   return (neuron0x20ca4b0()*0.425712);
}

double NNfunction_t2t2::synapse0x20de9a0() {
   return (neuron0x20cae80()*0.800299);
}

double NNfunction_t2t2::synapse0x20de9e0() {
   return (neuron0x20cb850()*-0.159735);
}

double NNfunction_t2t2::synapse0x20dea20() {
   return (neuron0x20cc220()*0.540979);
}

double NNfunction_t2t2::synapse0x20dea60() {
   return (neuron0x20ccbf0()*0.859547);
}

double NNfunction_t2t2::synapse0x20deaa0() {
   return (neuron0x20cd5c0()*0.893721);
}

double NNfunction_t2t2::synapse0x20deae0() {
   return (neuron0x20ce1a0()*-0.334327);
}

double NNfunction_t2t2::synapse0x20deb20() {
   return (neuron0x20ceb70()*0.136294);
}

double NNfunction_t2t2::synapse0x20deb60() {
   return (neuron0x20bf9f0()*0.0502317);
}

double NNfunction_t2t2::synapse0x20deba0() {
   return (neuron0x20c03c0()*-0.330741);
}

double NNfunction_t2t2::synapse0x20debe0() {
   return (neuron0x20c0d90()*0.314473);
}

double NNfunction_t2t2::synapse0x20dec20() {
   return (neuron0x20d33d0()*0.659728);
}

double NNfunction_t2t2::synapse0x20dec60() {
   return (neuron0x20d3c80()*0.322642);
}

double NNfunction_t2t2::synapse0x20deca0() {
   return (neuron0x20d4650()*-0.140733);
}

double NNfunction_t2t2::synapse0x20dece0() {
   return (neuron0x20d5020()*-0.249265);
}

double NNfunction_t2t2::synapse0x20df060() {
   return (neuron0x20b0fa0()*0.176174);
}

double NNfunction_t2t2::synapse0x20df0a0() {
   return (neuron0x20b18b0()*0.323982);
}

double NNfunction_t2t2::synapse0x20df0e0() {
   return (neuron0x20b2390()*0.0413674);
}

double NNfunction_t2t2::synapse0x20df120() {
   return (neuron0x1e6bc20()*0.277041);
}

double NNfunction_t2t2::synapse0x20df160() {
   return (neuron0x20b31b0()*0.262622);
}

double NNfunction_t2t2::synapse0x20df1a0() {
   return (neuron0x20b3b80()*0.516802);
}

double NNfunction_t2t2::synapse0x20df1e0() {
   return (neuron0x20b4950()*0.0995494);
}

double NNfunction_t2t2::synapse0x20df220() {
   return (neuron0x20b5320()*0.0627526);
}

double NNfunction_t2t2::synapse0x20df260() {
   return (neuron0x20b5cf0()*-0.649582);
}

double NNfunction_t2t2::synapse0x20df2a0() {
   return (neuron0x20b67d0()*0.919712);
}

double NNfunction_t2t2::synapse0x20df2e0() {
   return (neuron0x20b71a0()*0.0845072);
}

double NNfunction_t2t2::synapse0x20df320() {
   return (neuron0x20b4280()*0.242756);
}

double NNfunction_t2t2::synapse0x20df360() {
   return (neuron0x20b8d50()*-0.346249);
}

double NNfunction_t2t2::synapse0x20df3a0() {
   return (neuron0x20b9720()*-0.437875);
}

double NNfunction_t2t2::synapse0x20df3e0() {
   return (neuron0x20ba0f0()*0.187136);
}

double NNfunction_t2t2::synapse0x20df420() {
   return (neuron0x20baac0()*0.425201);
}

double NNfunction_t2t2::synapse0x20deeb0() {
   return (neuron0x20bc8d0()*1.27779);
}

double NNfunction_t2t2::synapse0x20deef0() {
   return (neuron0x20bcbb0()*0.888966);
}

double NNfunction_t2t2::synapse0x20df570() {
   return (neuron0x20bd580()*-0.270128);
}

double NNfunction_t2t2::synapse0x20df5b0() {
   return (neuron0x20bdf50()*-0.095167);
}

double NNfunction_t2t2::synapse0x20df5f0() {
   return (neuron0x20be920()*1.15702);
}

double NNfunction_t2t2::synapse0x20df630() {
   return (neuron0x20bf2f0()*0.382336);
}

double NNfunction_t2t2::synapse0x20df670() {
   return (neuron0x20b7e40()*0.35103);
}

double NNfunction_t2t2::synapse0x20df6b0() {
   return (neuron0x20b8810()*0.22618);
}

double NNfunction_t2t2::synapse0x20df6f0() {
   return (neuron0x20c2080()*0.594396);
}

double NNfunction_t2t2::synapse0x20df730() {
   return (neuron0x20c2a50()*-0.307681);
}

double NNfunction_t2t2::synapse0x20df770() {
   return (neuron0x20c3420()*-0.274935);
}

double NNfunction_t2t2::synapse0x20df7b0() {
   return (neuron0x20c3df0()*-0.171727);
}

double NNfunction_t2t2::synapse0x20df7f0() {
   return (neuron0x20c47c0()*0.0521871);
}

double NNfunction_t2t2::synapse0x20df830() {
   return (neuron0x20c5190()*-0.243673);
}

double NNfunction_t2t2::synapse0x20df870() {
   return (neuron0x20c5b60()*0.736951);
}

double NNfunction_t2t2::synapse0x20df8b0() {
   return (neuron0x20c6530()*0.7294);
}

double NNfunction_t2t2::synapse0x20df460() {
   return (neuron0x20bc5c0()*0.0198648);
}

double NNfunction_t2t2::synapse0x20df4a0() {
   return (neuron0x20c9110()*0.0381684);
}

double NNfunction_t2t2::synapse0x20df4e0() {
   return (neuron0x20c9ae0()*-0.738896);
}

double NNfunction_t2t2::synapse0x20df520() {
   return (neuron0x20ca4b0()*0.544415);
}

double NNfunction_t2t2::synapse0x20dfb00() {
   return (neuron0x20cae80()*-0.34098);
}

double NNfunction_t2t2::synapse0x20dfb40() {
   return (neuron0x20cb850()*0.377275);
}

double NNfunction_t2t2::synapse0x20dfb80() {
   return (neuron0x20cc220()*-0.289572);
}

double NNfunction_t2t2::synapse0x20dfbc0() {
   return (neuron0x20ccbf0()*1.0794);
}

double NNfunction_t2t2::synapse0x20dfc00() {
   return (neuron0x20cd5c0()*0.16389);
}

double NNfunction_t2t2::synapse0x20dfc40() {
   return (neuron0x20ce1a0()*-0.0900429);
}

double NNfunction_t2t2::synapse0x20dfc80() {
   return (neuron0x20ceb70()*0.0274145);
}

double NNfunction_t2t2::synapse0x20dfcc0() {
   return (neuron0x20bf9f0()*-0.132947);
}

double NNfunction_t2t2::synapse0x20dfd00() {
   return (neuron0x20c03c0()*-0.429875);
}

double NNfunction_t2t2::synapse0x20dfd40() {
   return (neuron0x20c0d90()*0.879457);
}

double NNfunction_t2t2::synapse0x20dfd80() {
   return (neuron0x20d33d0()*0.837347);
}

double NNfunction_t2t2::synapse0x20dfdc0() {
   return (neuron0x20d3c80()*0.291692);
}

double NNfunction_t2t2::synapse0x20dfe00() {
   return (neuron0x20d4650()*-0.537975);
}

double NNfunction_t2t2::synapse0x20dfe40() {
   return (neuron0x20d5020()*-0.360336);
}

double NNfunction_t2t2::synapse0x20b0f60() {
   return (neuron0x20dc220()*-6.43776);
}

double NNfunction_t2t2::synapse0x20e00a0() {
   return (neuron0x20dc5c0()*1.41386);
}

double NNfunction_t2t2::synapse0x20e00e0() {
   return (neuron0x20dca60()*-8.73752);
}

double NNfunction_t2t2::synapse0x20e0120() {
   return (neuron0x20ddbc0()*0.22485);
}

double NNfunction_t2t2::synapse0x20e0160() {
   return (neuron0x20ded20()*3.76901);
}

