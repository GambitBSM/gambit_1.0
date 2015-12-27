#include "NNfunction_nn_chi2_charge2p.h"
#include <cmath>

double NNfunction_nn_chi2_charge2p::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.7213)/14.8588;
   input1 = (in1 - 37.8062)/903.377;
   input2 = (in2 - 213.859)/162.255;
   input3 = (in3 - 234.425)/718.671;
   input4 = (in4 - 1071.21)/886.943;
   input5 = (in5 - 1080.17)/979.396;
   input6 = (in6 - 1085.21)/978.945;
   input7 = (in7 - 1068.25)/944.124;
   input8 = (in8 - 1086.5)/994.743;
   input9 = (in9 - 1078.27)/989.739;
   input10 = (in10 - 1050.44)/938.573;
   input11 = (in11 - 999.55)/962.77;
   input12 = (in12 - 1022.41)/962.178;
   input13 = (in13 - 764.595)/688.362;
   input14 = (in14 - 1002.72)/932.736;
   input15 = (in15 - 1005.01)/934.207;
   input16 = (in16 - 670.594)/584.227;
   input17 = (in17 - 1035.77)/974.621;
   input18 = (in18 - 1035.86)/975.851;
   input19 = (in19 - 995.313)/904.115;
   input20 = (in20 - -173.622)/453.822;
   input21 = (in21 - -219.282)/948.514;
   input22 = (in22 - 10.1329)/958.713;
   input23 = (in23 - 27.3328)/285.582;
   switch(index) {
     case 0:
         return neuron0x2f18d20();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi2_charge2p::Value(int index, double* input) {
   input0 = (input[0] - 24.7213)/14.8588;
   input1 = (input[1] - 37.8062)/903.377;
   input2 = (input[2] - 213.859)/162.255;
   input3 = (input[3] - 234.425)/718.671;
   input4 = (input[4] - 1071.21)/886.943;
   input5 = (input[5] - 1080.17)/979.396;
   input6 = (input[6] - 1085.21)/978.945;
   input7 = (input[7] - 1068.25)/944.124;
   input8 = (input[8] - 1086.5)/994.743;
   input9 = (input[9] - 1078.27)/989.739;
   input10 = (input[10] - 1050.44)/938.573;
   input11 = (input[11] - 999.55)/962.77;
   input12 = (input[12] - 1022.41)/962.178;
   input13 = (input[13] - 764.595)/688.362;
   input14 = (input[14] - 1002.72)/932.736;
   input15 = (input[15] - 1005.01)/934.207;
   input16 = (input[16] - 670.594)/584.227;
   input17 = (input[17] - 1035.77)/974.621;
   input18 = (input[18] - 1035.86)/975.851;
   input19 = (input[19] - 995.313)/904.115;
   input20 = (input[20] - -173.622)/453.822;
   input21 = (input[21] - -219.282)/948.514;
   input22 = (input[22] - 10.1329)/958.713;
   input23 = (input[23] - 27.3328)/285.582;
   switch(index) {
     case 0:
         return neuron0x2f18d20();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee3d90() {
   return input0;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee4040() {
   return input1;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee4380() {
   return input2;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee46c0() {
   return input3;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee4a00() {
   return input4;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee4d40() {
   return input5;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee5080() {
   return input6;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee53c0() {
   return input7;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee5700() {
   return input8;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee5a40() {
   return input9;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee5d80() {
   return input10;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee60c0() {
   return input11;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee6400() {
   return input12;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee6740() {
   return input13;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee6a80() {
   return input14;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee6dc0() {
   return input15;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee7100() {
   return input16;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee7660() {
   return input17;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee7880() {
   return input18;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee7bc0() {
   return input19;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee7f00() {
   return input20;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee8240() {
   return input21;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee8580() {
   return input22;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee88c0() {
   return input23;
}

double NNfunction_nn_chi2_charge2p::input0x2ee8d30() {
   double input = 0.600376;
   input += synapse0x2ee9070();
   input += synapse0x2ee90b0();
   input += synapse0x2ee90f0();
   input += synapse0x2ee9130();
   input += synapse0x2ee9170();
   input += synapse0x2ee91b0();
   input += synapse0x2ee91f0();
   input += synapse0x2ee9230();
   input += synapse0x2ee9270();
   input += synapse0x2ee92b0();
   input += synapse0x2ee92f0();
   input += synapse0x2ee9330();
   input += synapse0x2ee9370();
   input += synapse0x2ee93b0();
   input += synapse0x2ee93f0();
   input += synapse0x2ee9430();
   input += synapse0x2ee8ec0();
   input += synapse0x2ee8f00();
   input += synapse0x213ee00();
   input += synapse0x213ee40();
   input += synapse0x2ee9580();
   input += synapse0x2ee95c0();
   input += synapse0x2ee9600();
   input += synapse0x2ee9640();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee8d30() {
   double input = input0x2ee8d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2ee9680() {
   double input = -0.0878771;
   input += synapse0x2ee99c0();
   input += synapse0x2ee9a00();
   input += synapse0x2ee9a40();
   input += synapse0x2ee9a80();
   input += synapse0x2ee9ac0();
   input += synapse0x2ee9b00();
   input += synapse0x2ee9b40();
   input += synapse0x2ee9b80();
   input += synapse0x2ee9bc0();
   input += synapse0x2ee9470();
   input += synapse0x2ee94b0();
   input += synapse0x2ee94f0();
   input += synapse0x2ee9530();
   input += synapse0x2ee9e10();
   input += synapse0x2ee9e50();
   input += synapse0x2ee9e90();
   input += synapse0x2ee9810();
   input += synapse0x2ee9850();
   input += synapse0x2ee9fe0();
   input += synapse0x2eea020();
   input += synapse0x2eea060();
   input += synapse0x2eea0a0();
   input += synapse0x2eea0e0();
   input += synapse0x2eea120();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee9680() {
   double input = input0x2ee9680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2eea160() {
   double input = -2.86099;
   input += synapse0x2eea4a0();
   input += synapse0x2eea4e0();
   input += synapse0x2eea520();
   input += synapse0x2eea560();
   input += synapse0x2eea5a0();
   input += synapse0x2eea5e0();
   input += synapse0x2eea620();
   input += synapse0x2eea660();
   input += synapse0x2eea6a0();
   input += synapse0x2eea6e0();
   input += synapse0x2eea720();
   input += synapse0x2eea760();
   input += synapse0x2eea7a0();
   input += synapse0x2eea7e0();
   input += synapse0x2eea820();
   input += synapse0x2eea860();
   input += synapse0x2eea2f0();
   input += synapse0x2eea330();
   input += synapse0x2142ec0();
   input += synapse0x2cade40();
   input += synapse0x2cade80();
   input += synapse0x2eec7a0();
   input += synapse0x2eec7e0();
   input += synapse0x2ee3ad0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2eea160() {
   double input = input0x2eea160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2ee9c00() {
   double input = 0.580141;
   input += synapse0x2ee3ba0();
   input += synapse0x2cae6c0();
   input += synapse0x2ee9d90();
   input += synapse0x2ee9dd0();
   input += synapse0x2eea9b0();
   input += synapse0x2eea9f0();
   input += synapse0x2eeaa30();
   input += synapse0x2eeaa70();
   input += synapse0x2eeaab0();
   input += synapse0x2eeaaf0();
   input += synapse0x2eeab30();
   input += synapse0x2eeab70();
   input += synapse0x2eeabb0();
   input += synapse0x2eeabf0();
   input += synapse0x2eeac30();
   input += synapse0x2eeac70();
   input += synapse0x2ee3b10();
   input += synapse0x2ee3b50();
   input += synapse0x2eeadc0();
   input += synapse0x2eeae00();
   input += synapse0x2eeae40();
   input += synapse0x2eeae80();
   input += synapse0x2eeaec0();
   input += synapse0x2eeaf00();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ee9c00() {
   double input = input0x2ee9c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2eeaf40() {
   double input = 0.0190388;
   input += synapse0x2eeb280();
   input += synapse0x2eeb2c0();
   input += synapse0x2eeb300();
   input += synapse0x2eeb340();
   input += synapse0x2eeb380();
   input += synapse0x2eeb3c0();
   input += synapse0x2eeb400();
   input += synapse0x2eeb440();
   input += synapse0x2eeb480();
   input += synapse0x2eeb4c0();
   input += synapse0x2eeb500();
   input += synapse0x2eeb540();
   input += synapse0x2eeb580();
   input += synapse0x2eeb5c0();
   input += synapse0x2eeb600();
   input += synapse0x2eeb640();
   input += synapse0x2eeb790();
   input += synapse0x2eeb0d0();
   input += synapse0x2eeb110();
   input += synapse0x2eec8e0();
   input += synapse0x2eec920();
   input += synapse0x2eec960();
   input += synapse0x2eec9a0();
   input += synapse0x2eec9e0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2eeaf40() {
   double input = input0x2eeaf40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2eeca20() {
   double input = -1.75494;
   input += synapse0x2eecd60();
   input += synapse0x2eecda0();
   input += synapse0x2eecde0();
   input += synapse0x2eece20();
   input += synapse0x2eece60();
   input += synapse0x2eecea0();
   input += synapse0x2eecee0();
   input += synapse0x2eecf20();
   input += synapse0x2eecf60();
   input += synapse0x2cae190();
   input += synapse0x2cae1d0();
   input += synapse0x2cae210();
   input += synapse0x2cae250();
   input += synapse0x2cae290();
   input += synapse0x2cae2d0();
   input += synapse0x2cae310();
   input += synapse0x2eecbb0();
   input += synapse0x2eecbf0();
   input += synapse0x2cae460();
   input += synapse0x2cae4a0();
   input += synapse0x2cae4e0();
   input += synapse0x2cae520();
   input += synapse0x2cae560();
   input += synapse0x2eed7b0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2eeca20() {
   double input = input0x2eeca20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2eed7f0() {
   double input = 1.12361;
   input += synapse0x2eedb30();
   input += synapse0x2eedb70();
   input += synapse0x2eedbb0();
   input += synapse0x2eedbf0();
   input += synapse0x2eedc30();
   input += synapse0x2eedc70();
   input += synapse0x2eedcb0();
   input += synapse0x2eedcf0();
   input += synapse0x2eedd30();
   input += synapse0x2eedd70();
   input += synapse0x2eeddb0();
   input += synapse0x2eeddf0();
   input += synapse0x2eede30();
   input += synapse0x2eede70();
   input += synapse0x2eedeb0();
   input += synapse0x2eedef0();
   input += synapse0x2eed980();
   input += synapse0x2eed9c0();
   input += synapse0x2eee040();
   input += synapse0x2eee080();
   input += synapse0x2eee0c0();
   input += synapse0x2eee100();
   input += synapse0x2eee140();
   input += synapse0x2eee180();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2eed7f0() {
   double input = input0x2eed7f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2eee1c0() {
   double input = -3.24679;
   input += synapse0x2eee500();
   input += synapse0x2eee540();
   input += synapse0x2eee580();
   input += synapse0x2eee5c0();
   input += synapse0x2eee600();
   input += synapse0x2eee640();
   input += synapse0x2eee680();
   input += synapse0x2eee6c0();
   input += synapse0x2eee700();
   input += synapse0x2eee740();
   input += synapse0x2eee780();
   input += synapse0x2eee7c0();
   input += synapse0x2eee800();
   input += synapse0x2eee840();
   input += synapse0x2eee880();
   input += synapse0x2eee8c0();
   input += synapse0x2eee350();
   input += synapse0x2eee390();
   input += synapse0x2eeea10();
   input += synapse0x2eeea50();
   input += synapse0x2eeea90();
   input += synapse0x2eeead0();
   input += synapse0x2eeeb10();
   input += synapse0x2eeeb50();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2eee1c0() {
   double input = input0x2eee1c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2eeeb90() {
   double input = 0.763838;
   input += synapse0x2ee7550();
   input += synapse0x2ee7590();
   input += synapse0x2ee75d0();
   input += synapse0x2ee7610();
   input += synapse0x2eef0e0();
   input += synapse0x2eef120();
   input += synapse0x2eef160();
   input += synapse0x2eef1a0();
   input += synapse0x2eef1e0();
   input += synapse0x2eef220();
   input += synapse0x2eef260();
   input += synapse0x2eef2a0();
   input += synapse0x2eef2e0();
   input += synapse0x2eef320();
   input += synapse0x2eef360();
   input += synapse0x2eef3a0();
   input += synapse0x2eeed20();
   input += synapse0x2eeed60();
   input += synapse0x2eef4f0();
   input += synapse0x2eef530();
   input += synapse0x2eef570();
   input += synapse0x2eef5b0();
   input += synapse0x2eef5f0();
   input += synapse0x2eef630();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2eeeb90() {
   double input = input0x2eeeb90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2eef670() {
   double input = 1.5142;
   input += synapse0x2eef9b0();
   input += synapse0x2eef9f0();
   input += synapse0x2eefa30();
   input += synapse0x2eefa70();
   input += synapse0x2eefab0();
   input += synapse0x2eefaf0();
   input += synapse0x2eefb30();
   input += synapse0x2eefb70();
   input += synapse0x2eefbb0();
   input += synapse0x2eefbf0();
   input += synapse0x2eefc30();
   input += synapse0x2eefc70();
   input += synapse0x2eefcb0();
   input += synapse0x2eefcf0();
   input += synapse0x2eefd30();
   input += synapse0x2eefd70();
   input += synapse0x2eef800();
   input += synapse0x2eef840();
   input += synapse0x2eefec0();
   input += synapse0x2eeff00();
   input += synapse0x2eeff40();
   input += synapse0x2eeff80();
   input += synapse0x2eeffc0();
   input += synapse0x2ef0000();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2eef670() {
   double input = input0x2eef670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2ef0040() {
   double input = -5.39586;
   input += synapse0x2ef0380();
   input += synapse0x2ef03c0();
   input += synapse0x2ef0400();
   input += synapse0x2ef0440();
   input += synapse0x2ef0480();
   input += synapse0x2ef04c0();
   input += synapse0x2ef0500();
   input += synapse0x2ef0540();
   input += synapse0x2ef0580();
   input += synapse0x2ef05c0();
   input += synapse0x2ef0600();
   input += synapse0x2ef0640();
   input += synapse0x2ef0680();
   input += synapse0x2ef06c0();
   input += synapse0x2ef0700();
   input += synapse0x2ef0740();
   input += synapse0x2ef01d0();
   input += synapse0x2ef0210();
   input += synapse0x2eecfa0();
   input += synapse0x2eecfe0();
   input += synapse0x2eed020();
   input += synapse0x2eed060();
   input += synapse0x2eed0a0();
   input += synapse0x2eed0e0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ef0040() {
   double input = input0x2ef0040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2eed120() {
   double input = -2.9376;
   input += synapse0x2eed460();
   input += synapse0x2eed4a0();
   input += synapse0x2eed4e0();
   input += synapse0x2eed520();
   input += synapse0x2eed560();
   input += synapse0x2eed5a0();
   input += synapse0x2eed5e0();
   input += synapse0x2eed620();
   input += synapse0x2eed660();
   input += synapse0x2eed6a0();
   input += synapse0x2eed6e0();
   input += synapse0x2eed720();
   input += synapse0x2eed760();
   input += synapse0x2ef18a0();
   input += synapse0x2ef18e0();
   input += synapse0x2ef1920();
   input += synapse0x2eed2b0();
   input += synapse0x2eed2f0();
   input += synapse0x2ef1a70();
   input += synapse0x2ef1ab0();
   input += synapse0x2ef1af0();
   input += synapse0x2ef1b30();
   input += synapse0x2ef1b70();
   input += synapse0x2ef1bb0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2eed120() {
   double input = input0x2eed120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2ef1bf0() {
   double input = 3.42554;
   input += synapse0x2ef1f30();
   input += synapse0x2ef1f70();
   input += synapse0x2ef1fb0();
   input += synapse0x2ef1ff0();
   input += synapse0x2ef2030();
   input += synapse0x2ef2070();
   input += synapse0x2ef20b0();
   input += synapse0x2ef20f0();
   input += synapse0x2ef2130();
   input += synapse0x2ef2170();
   input += synapse0x2ef21b0();
   input += synapse0x2ef21f0();
   input += synapse0x2ef2230();
   input += synapse0x2ef2270();
   input += synapse0x2ef22b0();
   input += synapse0x2ef22f0();
   input += synapse0x2ef1d80();
   input += synapse0x2ef1dc0();
   input += synapse0x2ef2440();
   input += synapse0x2ef2480();
   input += synapse0x2ef24c0();
   input += synapse0x2ef2500();
   input += synapse0x2ef2540();
   input += synapse0x2ef2580();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ef1bf0() {
   double input = input0x2ef1bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2ef25c0() {
   double input = -3.15683;
   input += synapse0x2ef2900();
   input += synapse0x2ef2940();
   input += synapse0x2ef2980();
   input += synapse0x2ef29c0();
   input += synapse0x2ef2a00();
   input += synapse0x2ef2a40();
   input += synapse0x2ef2a80();
   input += synapse0x2ef2ac0();
   input += synapse0x2ef2b00();
   input += synapse0x2ef2b40();
   input += synapse0x2ef2b80();
   input += synapse0x2ef2bc0();
   input += synapse0x2ef2c00();
   input += synapse0x2ef2c40();
   input += synapse0x2ef2c80();
   input += synapse0x2ef2cc0();
   input += synapse0x2ef2750();
   input += synapse0x2ef2790();
   input += synapse0x2ef2e10();
   input += synapse0x2ef2e50();
   input += synapse0x2ef2e90();
   input += synapse0x2ef2ed0();
   input += synapse0x2ef2f10();
   input += synapse0x2ef2f50();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ef25c0() {
   double input = input0x2ef25c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2ef2f90() {
   double input = -0.862411;
   input += synapse0x2ef32d0();
   input += synapse0x2ef3310();
   input += synapse0x2ef3350();
   input += synapse0x2ef3390();
   input += synapse0x2ef33d0();
   input += synapse0x2ef3410();
   input += synapse0x2ef3450();
   input += synapse0x2ef3490();
   input += synapse0x2ef34d0();
   input += synapse0x2ef3510();
   input += synapse0x2ef3550();
   input += synapse0x2ef3590();
   input += synapse0x2ef35d0();
   input += synapse0x2ef3610();
   input += synapse0x2ef3650();
   input += synapse0x2ef3690();
   input += synapse0x2ef3120();
   input += synapse0x2ef3160();
   input += synapse0x2ef37e0();
   input += synapse0x2ef3820();
   input += synapse0x2ef3860();
   input += synapse0x2ef38a0();
   input += synapse0x2ef38e0();
   input += synapse0x2ef3920();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ef2f90() {
   double input = input0x2ef2f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2ef3960() {
   double input = 1.04387;
   input += synapse0x2ef3ca0();
   input += synapse0x2ee3f20();
   input += synapse0x2ee3f60();
   input += synapse0x2ee4260();
   input += synapse0x2ee42a0();
   input += synapse0x2ee45a0();
   input += synapse0x2ee45e0();
   input += synapse0x2ee48e0();
   input += synapse0x2ee4920();
   input += synapse0x2ee4c20();
   input += synapse0x2ee4c60();
   input += synapse0x2ee4f60();
   input += synapse0x2ee4fa0();
   input += synapse0x2ee52a0();
   input += synapse0x2ee52e0();
   input += synapse0x2ee55e0();
   input += synapse0x2ee5620();
   input += synapse0x2ee5920();
   input += synapse0x2ee5960();
   input += synapse0x2ee5c60();
   input += synapse0x2ee5ca0();
   input += synapse0x2ee5fa0();
   input += synapse0x2ee5fe0();
   input += synapse0x2ee62e0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ef3960() {
   double input = input0x2ef3960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2ef5770() {
   double input = 4.34051;
   input += synapse0x2ee6320();
   input += synapse0x2ee6fe0();
   input += synapse0x2ee7020();
   input += synapse0x2ef3af0();
   input += synapse0x2ef3b30();
   input += synapse0x2ee7320();
   input += synapse0x2ee7360();
   input += synapse0x2151a30();
   input += synapse0x2151a70();
   input += synapse0x2ee7aa0();
   input += synapse0x2ee7ae0();
   input += synapse0x2ee7de0();
   input += synapse0x2ee7e20();
   input += synapse0x2ee8120();
   input += synapse0x2ee8160();
   input += synapse0x2ee8460();
   input += synapse0x2ee84a0();
   input += synapse0x2ee87a0();
   input += synapse0x2ee87e0();
   input += synapse0x2ee8ae0();
   input += synapse0x2ee8b20();
   input += synapse0x2ee6620();
   input += synapse0x2ee6660();
   input += synapse0x2ef5a10();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ef5770() {
   double input = input0x2ef5770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2ef5a50() {
   double input = -0.517148;
   input += synapse0x2ef5d90();
   input += synapse0x2ef5dd0();
   input += synapse0x2ef5e10();
   input += synapse0x2ef5e50();
   input += synapse0x2ef5e90();
   input += synapse0x2ef5ed0();
   input += synapse0x2ef5f10();
   input += synapse0x2ef5f50();
   input += synapse0x2ef5f90();
   input += synapse0x2ef5fd0();
   input += synapse0x2ef6010();
   input += synapse0x2ef6050();
   input += synapse0x2ef6090();
   input += synapse0x2ef60d0();
   input += synapse0x2ef6110();
   input += synapse0x2ef6150();
   input += synapse0x2ef5be0();
   input += synapse0x2ef5c20();
   input += synapse0x2ef62a0();
   input += synapse0x2ef62e0();
   input += synapse0x2ef6320();
   input += synapse0x2ef6360();
   input += synapse0x2ef63a0();
   input += synapse0x2ef63e0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ef5a50() {
   double input = input0x2ef5a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2ef6420() {
   double input = 0.755069;
   input += synapse0x2ef6760();
   input += synapse0x2ef67a0();
   input += synapse0x2ef67e0();
   input += synapse0x2ef6820();
   input += synapse0x2ef6860();
   input += synapse0x2ef68a0();
   input += synapse0x2ef68e0();
   input += synapse0x2ef6920();
   input += synapse0x2ef6960();
   input += synapse0x2ef69a0();
   input += synapse0x2ef69e0();
   input += synapse0x2ef6a20();
   input += synapse0x2ef6a60();
   input += synapse0x2ef6aa0();
   input += synapse0x2ef6ae0();
   input += synapse0x2ef6b20();
   input += synapse0x2ef65b0();
   input += synapse0x2ef65f0();
   input += synapse0x2ef6c70();
   input += synapse0x2ef6cb0();
   input += synapse0x2ef6cf0();
   input += synapse0x2ef6d30();
   input += synapse0x2ef6d70();
   input += synapse0x2ef6db0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ef6420() {
   double input = input0x2ef6420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2ef6df0() {
   double input = 0.205315;
   input += synapse0x2ef7130();
   input += synapse0x2ef7170();
   input += synapse0x2ef71b0();
   input += synapse0x2ef71f0();
   input += synapse0x2ef7230();
   input += synapse0x2ef7270();
   input += synapse0x2ef72b0();
   input += synapse0x2ef72f0();
   input += synapse0x2ef7330();
   input += synapse0x2ef7370();
   input += synapse0x2ef73b0();
   input += synapse0x2ef73f0();
   input += synapse0x2ef7430();
   input += synapse0x2ef7470();
   input += synapse0x2ef74b0();
   input += synapse0x2ef74f0();
   input += synapse0x2ef6f80();
   input += synapse0x2ef6fc0();
   input += synapse0x2ef7640();
   input += synapse0x2ef7680();
   input += synapse0x2ef76c0();
   input += synapse0x2ef7700();
   input += synapse0x2ef7740();
   input += synapse0x2ef7780();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ef6df0() {
   double input = input0x2ef6df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2ef77c0() {
   double input = 2.62232;
   input += synapse0x2ef7b00();
   input += synapse0x2ef7b40();
   input += synapse0x2ef7b80();
   input += synapse0x2ef7bc0();
   input += synapse0x2ef7c00();
   input += synapse0x2ef7c40();
   input += synapse0x2ef7c80();
   input += synapse0x2ef7cc0();
   input += synapse0x2ef7d00();
   input += synapse0x2ef7d40();
   input += synapse0x2ef7d80();
   input += synapse0x2ef7dc0();
   input += synapse0x2ef7e00();
   input += synapse0x2ef7e40();
   input += synapse0x2ef7e80();
   input += synapse0x2ef7ec0();
   input += synapse0x2ef7950();
   input += synapse0x2ef7990();
   input += synapse0x2ef8010();
   input += synapse0x2ef8050();
   input += synapse0x2ef8090();
   input += synapse0x2ef80d0();
   input += synapse0x2ef8110();
   input += synapse0x2ef8150();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ef77c0() {
   double input = input0x2ef77c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2ef8190() {
   double input = -0.950143;
   input += synapse0x2ef84d0();
   input += synapse0x2ef8510();
   input += synapse0x2ef8550();
   input += synapse0x2ef8590();
   input += synapse0x2ef85d0();
   input += synapse0x2ef8610();
   input += synapse0x2ef8650();
   input += synapse0x2ef8690();
   input += synapse0x2ef86d0();
   input += synapse0x2ef0890();
   input += synapse0x2ef08d0();
   input += synapse0x2ef0910();
   input += synapse0x2ef0950();
   input += synapse0x2ef0990();
   input += synapse0x2ef09d0();
   input += synapse0x2ef0a10();
   input += synapse0x2ef8320();
   input += synapse0x2ef8360();
   input += synapse0x2ef0b60();
   input += synapse0x2ef0ba0();
   input += synapse0x2ef0be0();
   input += synapse0x2ef0c20();
   input += synapse0x2ef0c60();
   input += synapse0x2ef0ca0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ef8190() {
   double input = input0x2ef8190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2ef0ce0() {
   double input = -1.60659;
   input += synapse0x2ef1020();
   input += synapse0x2ef1060();
   input += synapse0x2ef10a0();
   input += synapse0x2ef10e0();
   input += synapse0x2ef1120();
   input += synapse0x2ef1160();
   input += synapse0x2ef11a0();
   input += synapse0x2ef11e0();
   input += synapse0x2ef1220();
   input += synapse0x2ef1260();
   input += synapse0x2ef12a0();
   input += synapse0x2ef12e0();
   input += synapse0x2ef1320();
   input += synapse0x2ef1360();
   input += synapse0x2ef13a0();
   input += synapse0x2ef13e0();
   input += synapse0x2ef0e70();
   input += synapse0x2ef0eb0();
   input += synapse0x2ef1530();
   input += synapse0x2ef1570();
   input += synapse0x2ef15b0();
   input += synapse0x2ef15f0();
   input += synapse0x2ef1630();
   input += synapse0x2ef1670();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ef0ce0() {
   double input = input0x2ef0ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2ef16b0() {
   double input = 7.34959;
   input += synapse0x2ef1840();
   input += synapse0x2efa8d0();
   input += synapse0x2efa910();
   input += synapse0x2efa950();
   input += synapse0x2efa990();
   input += synapse0x2efa9d0();
   input += synapse0x2efaa10();
   input += synapse0x2efaa50();
   input += synapse0x2efaa90();
   input += synapse0x2efaad0();
   input += synapse0x2efab10();
   input += synapse0x2efab50();
   input += synapse0x2efab90();
   input += synapse0x2efabd0();
   input += synapse0x2efac10();
   input += synapse0x2efac50();
   input += synapse0x2efa720();
   input += synapse0x2efa760();
   input += synapse0x2efada0();
   input += synapse0x2efade0();
   input += synapse0x2efae20();
   input += synapse0x2efae60();
   input += synapse0x2efaea0();
   input += synapse0x2efaee0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ef16b0() {
   double input = input0x2ef16b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2efaf20() {
   double input = 1.99551;
   input += synapse0x2efb260();
   input += synapse0x2efb2a0();
   input += synapse0x2efb2e0();
   input += synapse0x2efb320();
   input += synapse0x2efb360();
   input += synapse0x2efb3a0();
   input += synapse0x2efb3e0();
   input += synapse0x2efb420();
   input += synapse0x2efb460();
   input += synapse0x2efb4a0();
   input += synapse0x2efb4e0();
   input += synapse0x2efb520();
   input += synapse0x2efb560();
   input += synapse0x2efb5a0();
   input += synapse0x2efb5e0();
   input += synapse0x2efb620();
   input += synapse0x2efb0b0();
   input += synapse0x2efb0f0();
   input += synapse0x2efb770();
   input += synapse0x2efb7b0();
   input += synapse0x2efb7f0();
   input += synapse0x2efb830();
   input += synapse0x2efb870();
   input += synapse0x2efb8b0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2efaf20() {
   double input = input0x2efaf20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2efb8f0() {
   double input = 0.606493;
   input += synapse0x2efbc30();
   input += synapse0x2efbc70();
   input += synapse0x2efbcb0();
   input += synapse0x2efbcf0();
   input += synapse0x2efbd30();
   input += synapse0x2efbd70();
   input += synapse0x2efbdb0();
   input += synapse0x2efbdf0();
   input += synapse0x2efbe30();
   input += synapse0x2efbe70();
   input += synapse0x2efbeb0();
   input += synapse0x2efbef0();
   input += synapse0x2efbf30();
   input += synapse0x2efbf70();
   input += synapse0x2efbfb0();
   input += synapse0x2efbff0();
   input += synapse0x2efba80();
   input += synapse0x2efbac0();
   input += synapse0x2efc140();
   input += synapse0x2efc180();
   input += synapse0x2efc1c0();
   input += synapse0x2efc200();
   input += synapse0x2efc240();
   input += synapse0x2efc280();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2efb8f0() {
   double input = input0x2efb8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2efc2c0() {
   double input = 0.925116;
   input += synapse0x2efc600();
   input += synapse0x2efc640();
   input += synapse0x2efc680();
   input += synapse0x2efc6c0();
   input += synapse0x2efc700();
   input += synapse0x2efc740();
   input += synapse0x2efc780();
   input += synapse0x2efc7c0();
   input += synapse0x2efc800();
   input += synapse0x2efc840();
   input += synapse0x2efc880();
   input += synapse0x2efc8c0();
   input += synapse0x2efc900();
   input += synapse0x2efc940();
   input += synapse0x2efc980();
   input += synapse0x2efc9c0();
   input += synapse0x2efc450();
   input += synapse0x2efc490();
   input += synapse0x2efcb10();
   input += synapse0x2efcb50();
   input += synapse0x2efcb90();
   input += synapse0x2efcbd0();
   input += synapse0x2efcc10();
   input += synapse0x2efcc50();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2efc2c0() {
   double input = input0x2efc2c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2efcc90() {
   double input = -0.0566756;
   input += synapse0x2efcfd0();
   input += synapse0x2efd010();
   input += synapse0x2efd050();
   input += synapse0x2efd090();
   input += synapse0x2efd0d0();
   input += synapse0x2efd110();
   input += synapse0x2efd150();
   input += synapse0x2efd190();
   input += synapse0x2efd1d0();
   input += synapse0x2efd210();
   input += synapse0x2efd250();
   input += synapse0x2efd290();
   input += synapse0x2efd2d0();
   input += synapse0x2efd310();
   input += synapse0x2efd350();
   input += synapse0x2efd390();
   input += synapse0x2efce20();
   input += synapse0x2efce60();
   input += synapse0x2efd4e0();
   input += synapse0x2efd520();
   input += synapse0x2efd560();
   input += synapse0x2efd5a0();
   input += synapse0x2efd5e0();
   input += synapse0x2efd620();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2efcc90() {
   double input = input0x2efcc90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2efd660() {
   double input = 1.96861;
   input += synapse0x2efd9a0();
   input += synapse0x2efd9e0();
   input += synapse0x2efda20();
   input += synapse0x2efda60();
   input += synapse0x2efdaa0();
   input += synapse0x2efdae0();
   input += synapse0x2efdb20();
   input += synapse0x2efdb60();
   input += synapse0x2efdba0();
   input += synapse0x2efdbe0();
   input += synapse0x2efdc20();
   input += synapse0x2efdc60();
   input += synapse0x2efdca0();
   input += synapse0x2efdce0();
   input += synapse0x2efdd20();
   input += synapse0x2efdd60();
   input += synapse0x2efd7f0();
   input += synapse0x2efd830();
   input += synapse0x2efdeb0();
   input += synapse0x2efdef0();
   input += synapse0x2efdf30();
   input += synapse0x2efdf70();
   input += synapse0x2efdfb0();
   input += synapse0x2efdff0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2efd660() {
   double input = input0x2efd660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2efe030() {
   double input = -1.13853;
   input += synapse0x2efe370();
   input += synapse0x2efe3b0();
   input += synapse0x2efe3f0();
   input += synapse0x2efe430();
   input += synapse0x2efe470();
   input += synapse0x2efe4b0();
   input += synapse0x2efe4f0();
   input += synapse0x2efe530();
   input += synapse0x2efe570();
   input += synapse0x2efe5b0();
   input += synapse0x2efe5f0();
   input += synapse0x2efe630();
   input += synapse0x2efe670();
   input += synapse0x2efe6b0();
   input += synapse0x2efe6f0();
   input += synapse0x2efe730();
   input += synapse0x2efe1c0();
   input += synapse0x2efe200();
   input += synapse0x2efe880();
   input += synapse0x2efe8c0();
   input += synapse0x2efe900();
   input += synapse0x2efe940();
   input += synapse0x2efe980();
   input += synapse0x2efe9c0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2efe030() {
   double input = input0x2efe030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2efea00() {
   double input = 0.646891;
   input += synapse0x2efed40();
   input += synapse0x2efed80();
   input += synapse0x2efedc0();
   input += synapse0x2efee00();
   input += synapse0x2efee40();
   input += synapse0x2efee80();
   input += synapse0x2efeec0();
   input += synapse0x2efef00();
   input += synapse0x2efef40();
   input += synapse0x2efef80();
   input += synapse0x2efefc0();
   input += synapse0x2eff000();
   input += synapse0x2eff040();
   input += synapse0x2eff080();
   input += synapse0x2eff0c0();
   input += synapse0x2eff100();
   input += synapse0x2efeb90();
   input += synapse0x2efebd0();
   input += synapse0x2eff250();
   input += synapse0x2eff290();
   input += synapse0x2eff2d0();
   input += synapse0x2eff310();
   input += synapse0x2eff350();
   input += synapse0x2eff390();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2efea00() {
   double input = input0x2efea00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2eff3d0() {
   double input = 0.330297;
   input += synapse0x2eff710();
   input += synapse0x2ef3ce0();
   input += synapse0x2ef3d20();
   input += synapse0x2ef3d60();
   input += synapse0x2ef3fb0();
   input += synapse0x2ef3ff0();
   input += synapse0x2ef4030();
   input += synapse0x2ef4280();
   input += synapse0x2ef42c0();
   input += synapse0x2ef4510();
   input += synapse0x2ef4550();
   input += synapse0x2ef4590();
   input += synapse0x2ef47e0();
   input += synapse0x2ef4820();
   input += synapse0x2ef4a70();
   input += synapse0x2ef4ab0();
   input += synapse0x2eff560();
   input += synapse0x2eff5a0();
   input += synapse0x2ef4c00();
   input += synapse0x2ef5110();
   input += synapse0x2ef5150();
   input += synapse0x2ef5190();
   input += synapse0x2ef53e0();
   input += synapse0x2ef5420();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2eff3d0() {
   double input = input0x2eff3d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2ef5460() {
   double input = -3.09469;
   input += synapse0x2ef4cd0();
   input += synapse0x2ef4d10();
   input += synapse0x2ef4d50();
   input += synapse0x2ef4d90();
   input += synapse0x2ef5710();
   input += synapse0x2f01a60();
   input += synapse0x2f01aa0();
   input += synapse0x2f01ae0();
   input += synapse0x2f01b20();
   input += synapse0x2f01b60();
   input += synapse0x2f01ba0();
   input += synapse0x2f01be0();
   input += synapse0x2f01c20();
   input += synapse0x2f01c60();
   input += synapse0x2f01ca0();
   input += synapse0x2f01ce0();
   input += synapse0x2ef55f0();
   input += synapse0x2ef5630();
   input += synapse0x2f01e30();
   input += synapse0x2f01e70();
   input += synapse0x2f01eb0();
   input += synapse0x2f01ef0();
   input += synapse0x2f01f30();
   input += synapse0x2f01f70();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ef5460() {
   double input = input0x2ef5460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f01fb0() {
   double input = -2.18504;
   input += synapse0x2f022f0();
   input += synapse0x2f02330();
   input += synapse0x2f02370();
   input += synapse0x2f023b0();
   input += synapse0x2f023f0();
   input += synapse0x2f02430();
   input += synapse0x2f02470();
   input += synapse0x2f024b0();
   input += synapse0x2f024f0();
   input += synapse0x2f02530();
   input += synapse0x2f02570();
   input += synapse0x2f025b0();
   input += synapse0x2f025f0();
   input += synapse0x2f02630();
   input += synapse0x2f02670();
   input += synapse0x2f026b0();
   input += synapse0x2f02140();
   input += synapse0x2f02180();
   input += synapse0x2f02800();
   input += synapse0x2f02840();
   input += synapse0x2f02880();
   input += synapse0x2f028c0();
   input += synapse0x2f02900();
   input += synapse0x2f02940();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f01fb0() {
   double input = input0x2f01fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f02980() {
   double input = 2.38188;
   input += synapse0x2f02cc0();
   input += synapse0x2f02d00();
   input += synapse0x2f02d40();
   input += synapse0x2f02d80();
   input += synapse0x2f02dc0();
   input += synapse0x2f02e00();
   input += synapse0x2f02e40();
   input += synapse0x2f02e80();
   input += synapse0x2f02ec0();
   input += synapse0x2f02f00();
   input += synapse0x2f02f40();
   input += synapse0x2f02f80();
   input += synapse0x2f02fc0();
   input += synapse0x2f03000();
   input += synapse0x2f03040();
   input += synapse0x2f03080();
   input += synapse0x2f02b10();
   input += synapse0x2f02b50();
   input += synapse0x2f031d0();
   input += synapse0x2f03210();
   input += synapse0x2f03250();
   input += synapse0x2f03290();
   input += synapse0x2f032d0();
   input += synapse0x2f03310();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f02980() {
   double input = input0x2f02980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f03350() {
   double input = 0.846831;
   input += synapse0x2f03690();
   input += synapse0x2f036d0();
   input += synapse0x2f03710();
   input += synapse0x2f03750();
   input += synapse0x2f03790();
   input += synapse0x2f037d0();
   input += synapse0x2f03810();
   input += synapse0x2f03850();
   input += synapse0x2f03890();
   input += synapse0x2f038d0();
   input += synapse0x2f03910();
   input += synapse0x2f03950();
   input += synapse0x2f03990();
   input += synapse0x2f039d0();
   input += synapse0x2f03a10();
   input += synapse0x2f03a50();
   input += synapse0x2f034e0();
   input += synapse0x2f03520();
   input += synapse0x2f03ba0();
   input += synapse0x2f03be0();
   input += synapse0x2f03c20();
   input += synapse0x2f03c60();
   input += synapse0x2f03ca0();
   input += synapse0x2f03ce0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f03350() {
   double input = input0x2f03350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f03d20() {
   double input = -2.65206;
   input += synapse0x2f04060();
   input += synapse0x2f040a0();
   input += synapse0x2f040e0();
   input += synapse0x2f04120();
   input += synapse0x2f04160();
   input += synapse0x2f041a0();
   input += synapse0x2f041e0();
   input += synapse0x2f04220();
   input += synapse0x2f04260();
   input += synapse0x2f042a0();
   input += synapse0x2f042e0();
   input += synapse0x2f04320();
   input += synapse0x2f04360();
   input += synapse0x2f043a0();
   input += synapse0x2f043e0();
   input += synapse0x2f04420();
   input += synapse0x2f03eb0();
   input += synapse0x2f03ef0();
   input += synapse0x2f04570();
   input += synapse0x2f045b0();
   input += synapse0x2f045f0();
   input += synapse0x2f04630();
   input += synapse0x2f04670();
   input += synapse0x2f046b0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f03d20() {
   double input = input0x2f03d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f046f0() {
   double input = 3.94245;
   input += synapse0x2f04a30();
   input += synapse0x2f04a70();
   input += synapse0x2f04ab0();
   input += synapse0x2f04af0();
   input += synapse0x2f04b30();
   input += synapse0x2f04b70();
   input += synapse0x2f04bb0();
   input += synapse0x2f04bf0();
   input += synapse0x2f04c30();
   input += synapse0x2f04c70();
   input += synapse0x2f04cb0();
   input += synapse0x2f04cf0();
   input += synapse0x2f04d30();
   input += synapse0x2f04d70();
   input += synapse0x2f04db0();
   input += synapse0x2f04df0();
   input += synapse0x2f04880();
   input += synapse0x2f048c0();
   input += synapse0x2f04f40();
   input += synapse0x2f04f80();
   input += synapse0x2f04fc0();
   input += synapse0x2f05000();
   input += synapse0x2f05040();
   input += synapse0x2f05080();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f046f0() {
   double input = input0x2f046f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f050c0() {
   double input = -0.691778;
   input += synapse0x2f05400();
   input += synapse0x2f05440();
   input += synapse0x2f05480();
   input += synapse0x2f054c0();
   input += synapse0x2f05500();
   input += synapse0x2f05540();
   input += synapse0x2f05580();
   input += synapse0x2f055c0();
   input += synapse0x2f05600();
   input += synapse0x2f05640();
   input += synapse0x2f05680();
   input += synapse0x2f056c0();
   input += synapse0x2f05700();
   input += synapse0x2f05740();
   input += synapse0x2f05780();
   input += synapse0x2f057c0();
   input += synapse0x2f05250();
   input += synapse0x2f05290();
   input += synapse0x2f05910();
   input += synapse0x2f05950();
   input += synapse0x2f05990();
   input += synapse0x2f059d0();
   input += synapse0x2f05a10();
   input += synapse0x2f05a50();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f050c0() {
   double input = input0x2f050c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f05a90() {
   double input = -0.352987;
   input += synapse0x2f05dd0();
   input += synapse0x2f05e10();
   input += synapse0x2f05e50();
   input += synapse0x2f05e90();
   input += synapse0x2f05ed0();
   input += synapse0x2f05f10();
   input += synapse0x2f05f50();
   input += synapse0x2f05f90();
   input += synapse0x2f05fd0();
   input += synapse0x2f06010();
   input += synapse0x2f06050();
   input += synapse0x2f06090();
   input += synapse0x2f060d0();
   input += synapse0x2f06110();
   input += synapse0x2f06150();
   input += synapse0x2f06190();
   input += synapse0x2f05c20();
   input += synapse0x2f05c60();
   input += synapse0x2f062e0();
   input += synapse0x2f06320();
   input += synapse0x2f06360();
   input += synapse0x2f063a0();
   input += synapse0x2f063e0();
   input += synapse0x2f06420();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f05a90() {
   double input = input0x2f05a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f06460() {
   double input = 1.18955;
   input += synapse0x2eeeed0();
   input += synapse0x2eeef10();
   input += synapse0x2eeef50();
   input += synapse0x2eeef90();
   input += synapse0x2eeefd0();
   input += synapse0x2eef010();
   input += synapse0x2eef050();
   input += synapse0x2eef090();
   input += synapse0x2f06bb0();
   input += synapse0x2f06bf0();
   input += synapse0x2f06c30();
   input += synapse0x2f06c70();
   input += synapse0x2f06cb0();
   input += synapse0x2f06cf0();
   input += synapse0x2f06d30();
   input += synapse0x2f06d70();
   input += synapse0x2f065f0();
   input += synapse0x2f06630();
   input += synapse0x2f06ec0();
   input += synapse0x2f06f00();
   input += synapse0x2f06f40();
   input += synapse0x2f06f80();
   input += synapse0x2f06fc0();
   input += synapse0x2f07000();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f06460() {
   double input = input0x2f06460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f07040() {
   double input = 1.75209;
   input += synapse0x2f07380();
   input += synapse0x2f073c0();
   input += synapse0x2f07400();
   input += synapse0x2f07440();
   input += synapse0x2f07480();
   input += synapse0x2f074c0();
   input += synapse0x2f07500();
   input += synapse0x2f07540();
   input += synapse0x2f07580();
   input += synapse0x2f075c0();
   input += synapse0x2f07600();
   input += synapse0x2f07640();
   input += synapse0x2f07680();
   input += synapse0x2f076c0();
   input += synapse0x2f07700();
   input += synapse0x2f07740();
   input += synapse0x2f071d0();
   input += synapse0x2f07210();
   input += synapse0x2f07890();
   input += synapse0x2f078d0();
   input += synapse0x2f07910();
   input += synapse0x2f07950();
   input += synapse0x2f07990();
   input += synapse0x2f079d0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f07040() {
   double input = input0x2f07040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f07a10() {
   double input = 1.6954;
   input += synapse0x2f07d50();
   input += synapse0x2f07d90();
   input += synapse0x2f07dd0();
   input += synapse0x2f07e10();
   input += synapse0x2f07e50();
   input += synapse0x2f07e90();
   input += synapse0x2f07ed0();
   input += synapse0x2f07f10();
   input += synapse0x2f07f50();
   input += synapse0x2f07f90();
   input += synapse0x2f07fd0();
   input += synapse0x2f08010();
   input += synapse0x2f08050();
   input += synapse0x2f08090();
   input += synapse0x2f080d0();
   input += synapse0x2f08110();
   input += synapse0x2f07ba0();
   input += synapse0x2f07be0();
   input += synapse0x2ef8710();
   input += synapse0x2ef8750();
   input += synapse0x2ef8790();
   input += synapse0x2ef87d0();
   input += synapse0x2ef8810();
   input += synapse0x2ef8850();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f07a10() {
   double input = input0x2f07a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2ef8890() {
   double input = 0.632148;
   input += synapse0x2ef8bd0();
   input += synapse0x2ef8c10();
   input += synapse0x2ef8c50();
   input += synapse0x2ef8c90();
   input += synapse0x2ef8cd0();
   input += synapse0x2ef8d10();
   input += synapse0x2ef8d50();
   input += synapse0x2ef8d90();
   input += synapse0x2ef8dd0();
   input += synapse0x2ef8e10();
   input += synapse0x2ef8e50();
   input += synapse0x2ef8e90();
   input += synapse0x2ef8ed0();
   input += synapse0x2ef8f10();
   input += synapse0x2ef8f50();
   input += synapse0x2ef8f90();
   input += synapse0x2ef8a20();
   input += synapse0x2ef8a60();
   input += synapse0x2ef90e0();
   input += synapse0x2ef9120();
   input += synapse0x2ef9160();
   input += synapse0x2ef91a0();
   input += synapse0x2ef91e0();
   input += synapse0x2ef9220();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ef8890() {
   double input = input0x2ef8890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2ef9260() {
   double input = 7.32387;
   input += synapse0x2ef95a0();
   input += synapse0x2ef95e0();
   input += synapse0x2ef9620();
   input += synapse0x2ef9660();
   input += synapse0x2ef96a0();
   input += synapse0x2ef96e0();
   input += synapse0x2ef9720();
   input += synapse0x2ef9760();
   input += synapse0x2ef97a0();
   input += synapse0x2ef97e0();
   input += synapse0x2ef9820();
   input += synapse0x2ef9860();
   input += synapse0x2ef98a0();
   input += synapse0x2ef98e0();
   input += synapse0x2ef9920();
   input += synapse0x2ef9960();
   input += synapse0x2ef93f0();
   input += synapse0x2ef9430();
   input += synapse0x2ef9ab0();
   input += synapse0x2ef9af0();
   input += synapse0x2ef9b30();
   input += synapse0x2ef9b70();
   input += synapse0x2ef9bb0();
   input += synapse0x2ef9bf0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ef9260() {
   double input = input0x2ef9260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2ef9c30() {
   double input = -4.00196;
   input += synapse0x2ef9f70();
   input += synapse0x2ef9fb0();
   input += synapse0x2ef9ff0();
   input += synapse0x2efa030();
   input += synapse0x2efa070();
   input += synapse0x2efa0b0();
   input += synapse0x2efa0f0();
   input += synapse0x2efa130();
   input += synapse0x2efa170();
   input += synapse0x2efa1b0();
   input += synapse0x2efa1f0();
   input += synapse0x2efa230();
   input += synapse0x2efa270();
   input += synapse0x2efa2b0();
   input += synapse0x2efa2f0();
   input += synapse0x2efa330();
   input += synapse0x2ef9dc0();
   input += synapse0x2ef9e00();
   input += synapse0x2efa480();
   input += synapse0x2efa4c0();
   input += synapse0x2efa500();
   input += synapse0x2efa540();
   input += synapse0x2efa580();
   input += synapse0x2efa5c0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2ef9c30() {
   double input = input0x2ef9c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f0c270() {
   double input = 3.80043;
   input += synapse0x2f0c490();
   input += synapse0x2f0c4d0();
   input += synapse0x2f0c510();
   input += synapse0x2f0c550();
   input += synapse0x2f0c590();
   input += synapse0x2f0c5d0();
   input += synapse0x2f0c610();
   input += synapse0x2f0c650();
   input += synapse0x2f0c690();
   input += synapse0x2f0c6d0();
   input += synapse0x2f0c710();
   input += synapse0x2f0c750();
   input += synapse0x2f0c790();
   input += synapse0x2f0c7d0();
   input += synapse0x2f0c810();
   input += synapse0x2f0c850();
   input += synapse0x2efa600();
   input += synapse0x2efa640();
   input += synapse0x2f0c9a0();
   input += synapse0x2f0c9e0();
   input += synapse0x2f0ca20();
   input += synapse0x2f0ca60();
   input += synapse0x2f0caa0();
   input += synapse0x2f0cae0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f0c270() {
   double input = input0x2f0c270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f0cb20() {
   double input = 1.31306;
   input += synapse0x2f0ce60();
   input += synapse0x2f0cea0();
   input += synapse0x2f0cee0();
   input += synapse0x2f0cf20();
   input += synapse0x2f0cf60();
   input += synapse0x2f0cfa0();
   input += synapse0x2f0cfe0();
   input += synapse0x2f0d020();
   input += synapse0x2f0d060();
   input += synapse0x2f0d0a0();
   input += synapse0x2f0d0e0();
   input += synapse0x2f0d120();
   input += synapse0x2f0d160();
   input += synapse0x2f0d1a0();
   input += synapse0x2f0d1e0();
   input += synapse0x2f0d220();
   input += synapse0x2f0ccb0();
   input += synapse0x2f0ccf0();
   input += synapse0x2f0d370();
   input += synapse0x2f0d3b0();
   input += synapse0x2f0d3f0();
   input += synapse0x2f0d430();
   input += synapse0x2f0d470();
   input += synapse0x2f0d4b0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f0cb20() {
   double input = input0x2f0cb20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f0d4f0() {
   double input = 1.98001;
   input += synapse0x2f0d830();
   input += synapse0x2f0d870();
   input += synapse0x2f0d8b0();
   input += synapse0x2f0d8f0();
   input += synapse0x2f0d930();
   input += synapse0x2f0d970();
   input += synapse0x2f0d9b0();
   input += synapse0x2f0d9f0();
   input += synapse0x2f0da30();
   input += synapse0x2f0da70();
   input += synapse0x2f0dab0();
   input += synapse0x2f0daf0();
   input += synapse0x2f0db30();
   input += synapse0x2f0db70();
   input += synapse0x2f0dbb0();
   input += synapse0x2f0dbf0();
   input += synapse0x2f0d680();
   input += synapse0x2f0d6c0();
   input += synapse0x2f0dd40();
   input += synapse0x2f0dd80();
   input += synapse0x2f0ddc0();
   input += synapse0x2f0de00();
   input += synapse0x2f0de40();
   input += synapse0x2f0de80();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f0d4f0() {
   double input = input0x2f0d4f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f0dec0() {
   double input = -2.07478;
   input += synapse0x2f0e200();
   input += synapse0x2f0e240();
   input += synapse0x2f0e280();
   input += synapse0x2f0e2c0();
   input += synapse0x2f0e300();
   input += synapse0x2f0e340();
   input += synapse0x2f0e380();
   input += synapse0x2f0e3c0();
   input += synapse0x2f0e400();
   input += synapse0x2f0e440();
   input += synapse0x2f0e480();
   input += synapse0x2f0e4c0();
   input += synapse0x2f0e500();
   input += synapse0x2f0e540();
   input += synapse0x2f0e580();
   input += synapse0x2f0e5c0();
   input += synapse0x2f0e050();
   input += synapse0x2f0e090();
   input += synapse0x2f0e710();
   input += synapse0x2f0e750();
   input += synapse0x2f0e790();
   input += synapse0x2f0e7d0();
   input += synapse0x2f0e810();
   input += synapse0x2f0e850();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f0dec0() {
   double input = input0x2f0dec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f150c0() {
   double input = 1.03904;
   input += synapse0x2cae630();
   input += synapse0x2cae670();
   input += synapse0x2eeb1f0();
   input += synapse0x2eeb230();
   input += synapse0x2eeccd0();
   input += synapse0x2eecd10();
   input += synapse0x2eedaa0();
   input += synapse0x2eedae0();
   input += synapse0x2eee470();
   input += synapse0x2eee4b0();
   input += synapse0x2eeee40();
   input += synapse0x2eeee80();
   input += synapse0x2eef920();
   input += synapse0x2eef960();
   input += synapse0x2ef02f0();
   input += synapse0x2ef0330();
   input += synapse0x2eed3d0();
   input += synapse0x2eed410();
   input += synapse0x2ef1ea0();
   input += synapse0x2ef1ee0();
   input += synapse0x2ef2870();
   input += synapse0x2ef28b0();
   input += synapse0x2ef3240();
   input += synapse0x2ef3280();
   input += synapse0x2ef3c10();
   input += synapse0x2ef3c50();
   input += synapse0x2ee6ca0();
   input += synapse0x2ee6ce0();
   input += synapse0x2ef5d00();
   input += synapse0x2ef5d40();
   input += synapse0x2ef66d0();
   input += synapse0x2ef6710();
   input += synapse0x2ef70a0();
   input += synapse0x2ef70e0();
   input += synapse0x2ef7a70();
   input += synapse0x2ef7ab0();
   input += synapse0x2ef8440();
   input += synapse0x2ef8480();
   input += synapse0x2ef0f90();
   input += synapse0x2ef0fd0();
   input += synapse0x2efa840();
   input += synapse0x2efa880();
   input += synapse0x2efb1d0();
   input += synapse0x2efb210();
   input += synapse0x2efbba0();
   input += synapse0x2efbbe0();
   input += synapse0x2efc570();
   input += synapse0x2efc5b0();
   input += synapse0x2efcf40();
   input += synapse0x2efcf80();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f150c0() {
   double input = input0x2f150c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f15460() {
   double input = -0.63163;
   input += synapse0x2eff680();
   input += synapse0x2eff6c0();
   input += synapse0x2ef4c40();
   input += synapse0x2ef4c80();
   input += synapse0x2f02260();
   input += synapse0x2f022a0();
   input += synapse0x2f02c30();
   input += synapse0x2f02c70();
   input += synapse0x2f03600();
   input += synapse0x2f03640();
   input += synapse0x2f03fd0();
   input += synapse0x2f04010();
   input += synapse0x2f049a0();
   input += synapse0x2f049e0();
   input += synapse0x2f05370();
   input += synapse0x2f053b0();
   input += synapse0x2f05d40();
   input += synapse0x2f05d80();
   input += synapse0x2f06710();
   input += synapse0x2f06750();
   input += synapse0x2f072f0();
   input += synapse0x2f07330();
   input += synapse0x2f07cc0();
   input += synapse0x2f07d00();
   input += synapse0x2ef8b40();
   input += synapse0x2ef8b80();
   input += synapse0x2ef9510();
   input += synapse0x2ef9550();
   input += synapse0x2ef9ee0();
   input += synapse0x2ef9f20();
   input += synapse0x2f0c400();
   input += synapse0x2f0c440();
   input += synapse0x2f0cdd0();
   input += synapse0x2f0ce10();
   input += synapse0x2f0d7a0();
   input += synapse0x2f0d7e0();
   input += synapse0x2f0e170();
   input += synapse0x2f0e1b0();
   input += synapse0x2ee8fe0();
   input += synapse0x2ee9020();
   input += synapse0x2efd910();
   input += synapse0x2efd950();
   input += synapse0x2f0e890();
   input += synapse0x2f0e8d0();
   input += synapse0x2f0e910();
   input += synapse0x2f0e950();
   input += synapse0x2f15800();
   input += synapse0x2f15840();
   input += synapse0x2f15880();
   input += synapse0x2f158c0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f15460() {
   double input = input0x2f15460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f15900() {
   double input = -0.532305;
   input += synapse0x2f15c40();
   input += synapse0x2f15c80();
   input += synapse0x2f15cc0();
   input += synapse0x2f15d00();
   input += synapse0x2f15d40();
   input += synapse0x2f15d80();
   input += synapse0x2f15dc0();
   input += synapse0x2f15e00();
   input += synapse0x2f15e40();
   input += synapse0x2f15e80();
   input += synapse0x2f15ec0();
   input += synapse0x2f15f00();
   input += synapse0x2f15f40();
   input += synapse0x2f15f80();
   input += synapse0x2f15fc0();
   input += synapse0x2f16000();
   input += synapse0x2f15a90();
   input += synapse0x2f15ad0();
   input += synapse0x2f16150();
   input += synapse0x2f16190();
   input += synapse0x2f161d0();
   input += synapse0x2f16210();
   input += synapse0x2f16250();
   input += synapse0x2f16290();
   input += synapse0x2f162d0();
   input += synapse0x2f16310();
   input += synapse0x2f16350();
   input += synapse0x2f16390();
   input += synapse0x2f163d0();
   input += synapse0x2f16410();
   input += synapse0x2f16450();
   input += synapse0x2f16490();
   input += synapse0x2f16040();
   input += synapse0x2f16080();
   input += synapse0x2f160c0();
   input += synapse0x2f16100();
   input += synapse0x2f166e0();
   input += synapse0x2f16720();
   input += synapse0x2f16760();
   input += synapse0x2f167a0();
   input += synapse0x2f167e0();
   input += synapse0x2f16820();
   input += synapse0x2f16860();
   input += synapse0x2f168a0();
   input += synapse0x2f168e0();
   input += synapse0x2f16920();
   input += synapse0x2f16960();
   input += synapse0x2f169a0();
   input += synapse0x2f169e0();
   input += synapse0x2f16a20();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f15900() {
   double input = input0x2f15900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f16a60() {
   double input = 1.77289;
   input += synapse0x2f16da0();
   input += synapse0x2f16de0();
   input += synapse0x2f16e20();
   input += synapse0x2f16e60();
   input += synapse0x2f16ea0();
   input += synapse0x2f16ee0();
   input += synapse0x2f16f20();
   input += synapse0x2f16f60();
   input += synapse0x2f16fa0();
   input += synapse0x2f16fe0();
   input += synapse0x2f17020();
   input += synapse0x2f17060();
   input += synapse0x2f170a0();
   input += synapse0x2f170e0();
   input += synapse0x2f17120();
   input += synapse0x2f17160();
   input += synapse0x2f16bf0();
   input += synapse0x2f16c30();
   input += synapse0x2f172b0();
   input += synapse0x2f172f0();
   input += synapse0x2f17330();
   input += synapse0x2f17370();
   input += synapse0x2f173b0();
   input += synapse0x2f173f0();
   input += synapse0x2f17430();
   input += synapse0x2f17470();
   input += synapse0x2f174b0();
   input += synapse0x2f174f0();
   input += synapse0x2f17530();
   input += synapse0x2f17570();
   input += synapse0x2f175b0();
   input += synapse0x2f175f0();
   input += synapse0x2f171a0();
   input += synapse0x2f171e0();
   input += synapse0x2f17220();
   input += synapse0x2f17260();
   input += synapse0x2f17840();
   input += synapse0x2f17880();
   input += synapse0x2f178c0();
   input += synapse0x2f17900();
   input += synapse0x2f17940();
   input += synapse0x2f17980();
   input += synapse0x2f179c0();
   input += synapse0x2f17a00();
   input += synapse0x2f17a40();
   input += synapse0x2f17a80();
   input += synapse0x2f17ac0();
   input += synapse0x2f17b00();
   input += synapse0x2f17b40();
   input += synapse0x2f17b80();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f16a60() {
   double input = input0x2f16a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f17bc0() {
   double input = -3.18942;
   input += synapse0x2f17f00();
   input += synapse0x2f17f40();
   input += synapse0x2f17f80();
   input += synapse0x2f17fc0();
   input += synapse0x2f18000();
   input += synapse0x2f18040();
   input += synapse0x2f18080();
   input += synapse0x2f180c0();
   input += synapse0x2f18100();
   input += synapse0x2f18140();
   input += synapse0x2f18180();
   input += synapse0x2f181c0();
   input += synapse0x2f18200();
   input += synapse0x2f18240();
   input += synapse0x2f18280();
   input += synapse0x2f182c0();
   input += synapse0x2f17d50();
   input += synapse0x2f17d90();
   input += synapse0x2f18410();
   input += synapse0x2f18450();
   input += synapse0x2f18490();
   input += synapse0x2f184d0();
   input += synapse0x2f18510();
   input += synapse0x2f18550();
   input += synapse0x2f18590();
   input += synapse0x2f185d0();
   input += synapse0x2f18610();
   input += synapse0x2f18650();
   input += synapse0x2f18690();
   input += synapse0x2f186d0();
   input += synapse0x2f18710();
   input += synapse0x2f18750();
   input += synapse0x2f18300();
   input += synapse0x2f18340();
   input += synapse0x2f18380();
   input += synapse0x2f183c0();
   input += synapse0x2f189a0();
   input += synapse0x2f189e0();
   input += synapse0x2f18a20();
   input += synapse0x2f18a60();
   input += synapse0x2f18aa0();
   input += synapse0x2f18ae0();
   input += synapse0x2f18b20();
   input += synapse0x2f18b60();
   input += synapse0x2f18ba0();
   input += synapse0x2f18be0();
   input += synapse0x2f18c20();
   input += synapse0x2f18c60();
   input += synapse0x2f18ca0();
   input += synapse0x2f18ce0();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f17bc0() {
   double input = input0x2f17bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge2p::input0x2f18d20() {
   double input = 3.00895;
   input += synapse0x2f18f40();
   input += synapse0x2f18f80();
   input += synapse0x2f18fc0();
   input += synapse0x2f19000();
   input += synapse0x2f19040();
   return input;
}

double NNfunction_nn_chi2_charge2p::neuron0x2f18d20() {
   double input = input0x2f18d20();
   return (input * 1)+0;
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9070() {
   return (neuron0x2ee3d90()*-0.279745);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee90b0() {
   return (neuron0x2ee4040()*-1.26275);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee90f0() {
   return (neuron0x2ee4380()*1.7508);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9130() {
   return (neuron0x2ee46c0()*-0.214644);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9170() {
   return (neuron0x2ee4a00()*-0.219258);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee91b0() {
   return (neuron0x2ee4d40()*0.0895427);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee91f0() {
   return (neuron0x2ee5080()*-0.338036);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9230() {
   return (neuron0x2ee53c0()*-0.208732);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9270() {
   return (neuron0x2ee5700()*0.0522647);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee92b0() {
   return (neuron0x2ee5a40()*-0.397501);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee92f0() {
   return (neuron0x2ee5d80()*-0.278626);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9330() {
   return (neuron0x2ee60c0()*-1.72048);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9370() {
   return (neuron0x2ee6400()*-0.193463);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee93b0() {
   return (neuron0x2ee6740()*0.0578215);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee93f0() {
   return (neuron0x2ee6a80()*-0.341462);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9430() {
   return (neuron0x2ee6dc0()*0.0920881);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee8ec0() {
   return (neuron0x2ee7100()*0.209088);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee8f00() {
   return (neuron0x2ee7660()*-0.0499861);
}

double NNfunction_nn_chi2_charge2p::synapse0x213ee00() {
   return (neuron0x2ee7880()*0.0738543);
}

double NNfunction_nn_chi2_charge2p::synapse0x213ee40() {
   return (neuron0x2ee7bc0()*-0.146998);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9580() {
   return (neuron0x2ee7f00()*0.0692038);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee95c0() {
   return (neuron0x2ee8240()*0.0354155);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9600() {
   return (neuron0x2ee8580()*-0.118513);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9640() {
   return (neuron0x2ee88c0()*0.0567103);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee99c0() {
   return (neuron0x2ee3d90()*-0.271466);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9a00() {
   return (neuron0x2ee4040()*-0.110179);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9a40() {
   return (neuron0x2ee4380()*-1.18116);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9a80() {
   return (neuron0x2ee46c0()*0.548561);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9ac0() {
   return (neuron0x2ee4a00()*-0.270027);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9b00() {
   return (neuron0x2ee4d40()*-0.0619275);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9b40() {
   return (neuron0x2ee5080()*-0.236652);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9b80() {
   return (neuron0x2ee53c0()*-0.429995);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9bc0() {
   return (neuron0x2ee5700()*-0.278832);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9470() {
   return (neuron0x2ee5a40()*-0.221153);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee94b0() {
   return (neuron0x2ee5d80()*-0.341581);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee94f0() {
   return (neuron0x2ee60c0()*0.566807);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9530() {
   return (neuron0x2ee6400()*0.168416);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9e10() {
   return (neuron0x2ee6740()*1.38291);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9e50() {
   return (neuron0x2ee6a80()*0.594638);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9e90() {
   return (neuron0x2ee6dc0()*0.0687853);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9810() {
   return (neuron0x2ee7100()*0.725522);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9850() {
   return (neuron0x2ee7660()*0.0650691);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9fe0() {
   return (neuron0x2ee7880()*1.61193);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea020() {
   return (neuron0x2ee7bc0()*0.159886);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea060() {
   return (neuron0x2ee7f00()*-0.113488);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea0a0() {
   return (neuron0x2ee8240()*-0.313101);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea0e0() {
   return (neuron0x2ee8580()*-0.0474351);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea120() {
   return (neuron0x2ee88c0()*-0.375875);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea4a0() {
   return (neuron0x2ee3d90()*0.0705348);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea4e0() {
   return (neuron0x2ee4040()*-0.00232591);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea520() {
   return (neuron0x2ee4380()*-2.85411);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea560() {
   return (neuron0x2ee46c0()*-0.0168333);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea5a0() {
   return (neuron0x2ee4a00()*0.011929);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea5e0() {
   return (neuron0x2ee4d40()*-0.00721898);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea620() {
   return (neuron0x2ee5080()*-0.0184447);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea660() {
   return (neuron0x2ee53c0()*0.00470371);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea6a0() {
   return (neuron0x2ee5700()*-0.000750799);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea6e0() {
   return (neuron0x2ee5a40()*-0.00562003);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea720() {
   return (neuron0x2ee5d80()*0.0168394);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea760() {
   return (neuron0x2ee60c0()*-0.0281067);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea7a0() {
   return (neuron0x2ee6400()*-0.0102628);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea7e0() {
   return (neuron0x2ee6740()*0.0216107);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea820() {
   return (neuron0x2ee6a80()*0.00662856);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea860() {
   return (neuron0x2ee6dc0()*-0.00132626);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea2f0() {
   return (neuron0x2ee7100()*0.0235944);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea330() {
   return (neuron0x2ee7660()*-0.00615563);
}

double NNfunction_nn_chi2_charge2p::synapse0x2142ec0() {
   return (neuron0x2ee7880()*0.00680274);
}

double NNfunction_nn_chi2_charge2p::synapse0x2cade40() {
   return (neuron0x2ee7bc0()*0.00207367);
}

double NNfunction_nn_chi2_charge2p::synapse0x2cade80() {
   return (neuron0x2ee7f00()*-0.00273537);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eec7a0() {
   return (neuron0x2ee8240()*-0.00337234);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eec7e0() {
   return (neuron0x2ee8580()*0.00252129);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee3ad0() {
   return (neuron0x2ee88c0()*-4.84019);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee3ba0() {
   return (neuron0x2ee3d90()*0.190023);
}

double NNfunction_nn_chi2_charge2p::synapse0x2cae6c0() {
   return (neuron0x2ee4040()*0.646429);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9d90() {
   return (neuron0x2ee4380()*-1.78546);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9dd0() {
   return (neuron0x2ee46c0()*0.311505);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea9b0() {
   return (neuron0x2ee4a00()*-0.134601);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eea9f0() {
   return (neuron0x2ee4d40()*-0.0363425);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeaa30() {
   return (neuron0x2ee5080()*0.352797);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeaa70() {
   return (neuron0x2ee53c0()*0.122701);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeaab0() {
   return (neuron0x2ee5700()*-0.446191);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeaaf0() {
   return (neuron0x2ee5a40()*0.255169);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeab30() {
   return (neuron0x2ee5d80()*0.0696407);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeab70() {
   return (neuron0x2ee60c0()*1.4719);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeabb0() {
   return (neuron0x2ee6400()*0.144544);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeabf0() {
   return (neuron0x2ee6740()*0.265685);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeac30() {
   return (neuron0x2ee6a80()*-0.0614911);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeac70() {
   return (neuron0x2ee6dc0()*0.00727933);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee3b10() {
   return (neuron0x2ee7100()*0.0554181);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee3b50() {
   return (neuron0x2ee7660()*0.0838934);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeadc0() {
   return (neuron0x2ee7880()*0.178216);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeae00() {
   return (neuron0x2ee7bc0()*0.59802);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeae40() {
   return (neuron0x2ee7f00()*0.0516688);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeae80() {
   return (neuron0x2ee8240()*-0.141586);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeaec0() {
   return (neuron0x2ee8580()*0.163444);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeaf00() {
   return (neuron0x2ee88c0()*-0.00294754);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb280() {
   return (neuron0x2ee3d90()*-0.308001);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb2c0() {
   return (neuron0x2ee4040()*0.521406);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb300() {
   return (neuron0x2ee4380()*-1.13142);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb340() {
   return (neuron0x2ee46c0()*0.0328828);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb380() {
   return (neuron0x2ee4a00()*-0.163027);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb3c0() {
   return (neuron0x2ee4d40()*0.051321);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb400() {
   return (neuron0x2ee5080()*0.139814);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb440() {
   return (neuron0x2ee53c0()*-0.133679);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb480() {
   return (neuron0x2ee5700()*-0.54202);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb4c0() {
   return (neuron0x2ee5a40()*-0.220004);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb500() {
   return (neuron0x2ee5d80()*-0.186693);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb540() {
   return (neuron0x2ee60c0()*0.822486);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb580() {
   return (neuron0x2ee6400()*0.241063);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb5c0() {
   return (neuron0x2ee6740()*0.295075);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb600() {
   return (neuron0x2ee6a80()*-0.273503);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb640() {
   return (neuron0x2ee6dc0()*0.197376);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb790() {
   return (neuron0x2ee7100()*0.147603);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb0d0() {
   return (neuron0x2ee7660()*0.0109278);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb110() {
   return (neuron0x2ee7880()*-0.172246);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eec8e0() {
   return (neuron0x2ee7bc0()*0.0140531);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eec920() {
   return (neuron0x2ee7f00()*0.0181952);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eec960() {
   return (neuron0x2ee8240()*-0.0128258);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eec9a0() {
   return (neuron0x2ee8580()*0.128757);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eec9e0() {
   return (neuron0x2ee88c0()*-0.316593);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eecd60() {
   return (neuron0x2ee3d90()*0.0176409);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eecda0() {
   return (neuron0x2ee4040()*0.223653);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eecde0() {
   return (neuron0x2ee4380()*2.30625);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eece20() {
   return (neuron0x2ee46c0()*-0.0286842);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eece60() {
   return (neuron0x2ee4a00()*0.0727486);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eecea0() {
   return (neuron0x2ee4d40()*-0.00671907);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eecee0() {
   return (neuron0x2ee5080()*0.0800169);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eecf20() {
   return (neuron0x2ee53c0()*-0.0421164);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eecf60() {
   return (neuron0x2ee5700()*-0.0244306);
}

double NNfunction_nn_chi2_charge2p::synapse0x2cae190() {
   return (neuron0x2ee5a40()*0.0825496);
}

double NNfunction_nn_chi2_charge2p::synapse0x2cae1d0() {
   return (neuron0x2ee5d80()*-0.0794277);
}

double NNfunction_nn_chi2_charge2p::synapse0x2cae210() {
   return (neuron0x2ee60c0()*-4.96511);
}

double NNfunction_nn_chi2_charge2p::synapse0x2cae250() {
   return (neuron0x2ee6400()*0.0435584);
}

double NNfunction_nn_chi2_charge2p::synapse0x2cae290() {
   return (neuron0x2ee6740()*0.0391327);
}

double NNfunction_nn_chi2_charge2p::synapse0x2cae2d0() {
   return (neuron0x2ee6a80()*-0.034676);
}

double NNfunction_nn_chi2_charge2p::synapse0x2cae310() {
   return (neuron0x2ee6dc0()*0.0823785);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eecbb0() {
   return (neuron0x2ee7100()*-0.0229458);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eecbf0() {
   return (neuron0x2ee7660()*-0.0966577);
}

double NNfunction_nn_chi2_charge2p::synapse0x2cae460() {
   return (neuron0x2ee7880()*-0.0377626);
}

double NNfunction_nn_chi2_charge2p::synapse0x2cae4a0() {
   return (neuron0x2ee7bc0()*-0.0439307);
}

double NNfunction_nn_chi2_charge2p::synapse0x2cae4e0() {
   return (neuron0x2ee7f00()*0.0438093);
}

double NNfunction_nn_chi2_charge2p::synapse0x2cae520() {
   return (neuron0x2ee8240()*-0.0339356);
}

double NNfunction_nn_chi2_charge2p::synapse0x2cae560() {
   return (neuron0x2ee8580()*-0.0234218);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed7b0() {
   return (neuron0x2ee88c0()*-0.164353);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eedb30() {
   return (neuron0x2ee3d90()*-0.048869);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eedb70() {
   return (neuron0x2ee4040()*2.01765);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eedbb0() {
   return (neuron0x2ee4380()*1.9456);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eedbf0() {
   return (neuron0x2ee46c0()*0.0957697);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eedc30() {
   return (neuron0x2ee4a00()*-0.13816);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eedc70() {
   return (neuron0x2ee4d40()*-0.075353);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eedcb0() {
   return (neuron0x2ee5080()*0.0383531);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eedcf0() {
   return (neuron0x2ee53c0()*-0.0445105);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eedd30() {
   return (neuron0x2ee5700()*0.154203);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eedd70() {
   return (neuron0x2ee5a40()*-0.101388);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeddb0() {
   return (neuron0x2ee5d80()*-0.143969);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeddf0() {
   return (neuron0x2ee60c0()*0.947447);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eede30() {
   return (neuron0x2ee6400()*-0.0551779);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eede70() {
   return (neuron0x2ee6740()*0.107464);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eedeb0() {
   return (neuron0x2ee6a80()*0.169664);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eedef0() {
   return (neuron0x2ee6dc0()*0.241189);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed980() {
   return (neuron0x2ee7100()*-0.0591798);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed9c0() {
   return (neuron0x2ee7660()*0.0193959);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee040() {
   return (neuron0x2ee7880()*-0.234612);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee080() {
   return (neuron0x2ee7bc0()*-0.0507858);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee0c0() {
   return (neuron0x2ee7f00()*-0.144402);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee100() {
   return (neuron0x2ee8240()*-0.0554084);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee140() {
   return (neuron0x2ee8580()*0.108087);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee180() {
   return (neuron0x2ee88c0()*-4.58633);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee500() {
   return (neuron0x2ee3d90()*-0.0203711);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee540() {
   return (neuron0x2ee4040()*-0.0387177);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee580() {
   return (neuron0x2ee4380()*-0.282433);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee5c0() {
   return (neuron0x2ee46c0()*-0.0337091);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee600() {
   return (neuron0x2ee4a00()*-0.00487946);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee640() {
   return (neuron0x2ee4d40()*-0.00651878);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee680() {
   return (neuron0x2ee5080()*0.00862374);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee6c0() {
   return (neuron0x2ee53c0()*0.0211938);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee700() {
   return (neuron0x2ee5700()*-0.013633);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee740() {
   return (neuron0x2ee5a40()*-0.0157511);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee780() {
   return (neuron0x2ee5d80()*0.0153002);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee7c0() {
   return (neuron0x2ee60c0()*-0.230113);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee800() {
   return (neuron0x2ee6400()*0.0240103);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee840() {
   return (neuron0x2ee6740()*0.0780408);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee880() {
   return (neuron0x2ee6a80()*-0.0454338);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee8c0() {
   return (neuron0x2ee6dc0()*0.00207441);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee350() {
   return (neuron0x2ee7100()*0.0432757);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee390() {
   return (neuron0x2ee7660()*0.00695882);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeea10() {
   return (neuron0x2ee7880()*0.0259941);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeea50() {
   return (neuron0x2ee7bc0()*0.0278143);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeea90() {
   return (neuron0x2ee7f00()*0.0108067);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeead0() {
   return (neuron0x2ee8240()*0.00408959);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeeb10() {
   return (neuron0x2ee8580()*-0.0218189);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeeb50() {
   return (neuron0x2ee88c0()*-1.64828);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee7550() {
   return (neuron0x2ee3d90()*0.110652);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee7590() {
   return (neuron0x2ee4040()*1.71224);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee75d0() {
   return (neuron0x2ee4380()*1.13737);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee7610() {
   return (neuron0x2ee46c0()*0.0979801);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef0e0() {
   return (neuron0x2ee4a00()*0.275456);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef120() {
   return (neuron0x2ee4d40()*0.0477968);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef160() {
   return (neuron0x2ee5080()*0.207946);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef1a0() {
   return (neuron0x2ee53c0()*0.090251);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef1e0() {
   return (neuron0x2ee5700()*0.301632);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef220() {
   return (neuron0x2ee5a40()*0.0812067);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef260() {
   return (neuron0x2ee5d80()*0.139943);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef2a0() {
   return (neuron0x2ee60c0()*-1.48522);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef2e0() {
   return (neuron0x2ee6400()*0.288064);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef320() {
   return (neuron0x2ee6740()*-0.0355947);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef360() {
   return (neuron0x2ee6a80()*0.0474859);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef3a0() {
   return (neuron0x2ee6dc0()*0.0488724);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeed20() {
   return (neuron0x2ee7100()*0.131495);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeed60() {
   return (neuron0x2ee7660()*0.112422);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef4f0() {
   return (neuron0x2ee7880()*-0.200353);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef530() {
   return (neuron0x2ee7bc0()*-0.0894683);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef570() {
   return (neuron0x2ee7f00()*0.0232305);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef5b0() {
   return (neuron0x2ee8240()*0.132491);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef5f0() {
   return (neuron0x2ee8580()*0.254392);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef630() {
   return (neuron0x2ee88c0()*-2.09202);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef9b0() {
   return (neuron0x2ee3d90()*0.152979);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef9f0() {
   return (neuron0x2ee4040()*-0.282548);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eefa30() {
   return (neuron0x2ee4380()*2.49543);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eefa70() {
   return (neuron0x2ee46c0()*-0.0316791);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eefab0() {
   return (neuron0x2ee4a00()*-0.0924698);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eefaf0() {
   return (neuron0x2ee4d40()*0.18395);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eefb30() {
   return (neuron0x2ee5080()*0.0257657);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eefb70() {
   return (neuron0x2ee53c0()*0.102567);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eefbb0() {
   return (neuron0x2ee5700()*-0.571268);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eefbf0() {
   return (neuron0x2ee5a40()*0.302682);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eefc30() {
   return (neuron0x2ee5d80()*0.113916);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eefc70() {
   return (neuron0x2ee60c0()*-0.921886);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eefcb0() {
   return (neuron0x2ee6400()*-0.519479);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eefcf0() {
   return (neuron0x2ee6740()*0.493332);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eefd30() {
   return (neuron0x2ee6a80()*-0.357764);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eefd70() {
   return (neuron0x2ee6dc0()*0.00969678);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef800() {
   return (neuron0x2ee7100()*0.0214174);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef840() {
   return (neuron0x2ee7660()*-0.202232);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eefec0() {
   return (neuron0x2ee7880()*0.0532272);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeff00() {
   return (neuron0x2ee7bc0()*0.361415);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeff40() {
   return (neuron0x2ee7f00()*0.157426);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeff80() {
   return (neuron0x2ee8240()*-0.395796);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeffc0() {
   return (neuron0x2ee8580()*-0.179663);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0000() {
   return (neuron0x2ee88c0()*-1.79539);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0380() {
   return (neuron0x2ee3d90()*0.0488342);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef03c0() {
   return (neuron0x2ee4040()*0.0289296);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0400() {
   return (neuron0x2ee4380()*1.02987);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0440() {
   return (neuron0x2ee46c0()*0.0943602);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0480() {
   return (neuron0x2ee4a00()*-0.0641609);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef04c0() {
   return (neuron0x2ee4d40()*0.0354273);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0500() {
   return (neuron0x2ee5080()*0.0319144);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0540() {
   return (neuron0x2ee53c0()*-0.0797627);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0580() {
   return (neuron0x2ee5700()*-0.0261489);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef05c0() {
   return (neuron0x2ee5a40()*0.00694954);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0600() {
   return (neuron0x2ee5d80()*0.00721064);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0640() {
   return (neuron0x2ee60c0()*-4.34967);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0680() {
   return (neuron0x2ee6400()*0.0523733);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef06c0() {
   return (neuron0x2ee6740()*-0.00437733);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0700() {
   return (neuron0x2ee6a80()*0.00986003);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0740() {
   return (neuron0x2ee6dc0()*-0.0305491);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef01d0() {
   return (neuron0x2ee7100()*-0.0632254);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0210() {
   return (neuron0x2ee7660()*-0.0543564);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eecfa0() {
   return (neuron0x2ee7880()*-0.0521674);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eecfe0() {
   return (neuron0x2ee7bc0()*0.0207436);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed020() {
   return (neuron0x2ee7f00()*-0.0553446);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed060() {
   return (neuron0x2ee8240()*-0.00609046);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed0a0() {
   return (neuron0x2ee8580()*-0.0207029);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed0e0() {
   return (neuron0x2ee88c0()*1.37823);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed460() {
   return (neuron0x2ee3d90()*-0.527499);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed4a0() {
   return (neuron0x2ee4040()*0.810873);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed4e0() {
   return (neuron0x2ee4380()*-0.478424);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed520() {
   return (neuron0x2ee46c0()*0.134985);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed560() {
   return (neuron0x2ee4a00()*-0.370921);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed5a0() {
   return (neuron0x2ee4d40()*-0.337379);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed5e0() {
   return (neuron0x2ee5080()*0.00580116);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed620() {
   return (neuron0x2ee53c0()*-0.0138918);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed660() {
   return (neuron0x2ee5700()*-0.997572);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed6a0() {
   return (neuron0x2ee5a40()*-0.104954);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed6e0() {
   return (neuron0x2ee5d80()*-0.0327154);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed720() {
   return (neuron0x2ee60c0()*-0.651396);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed760() {
   return (neuron0x2ee6400()*0.380703);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef18a0() {
   return (neuron0x2ee6740()*0.175702);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef18e0() {
   return (neuron0x2ee6a80()*-0.181164);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1920() {
   return (neuron0x2ee6dc0()*0.0387621);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed2b0() {
   return (neuron0x2ee7100()*-0.402033);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed2f0() {
   return (neuron0x2ee7660()*-0.36087);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1a70() {
   return (neuron0x2ee7880()*-0.160275);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1ab0() {
   return (neuron0x2ee7bc0()*0.232795);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1af0() {
   return (neuron0x2ee7f00()*-0.0939037);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1b30() {
   return (neuron0x2ee8240()*0.146906);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1b70() {
   return (neuron0x2ee8580()*0.13397);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1bb0() {
   return (neuron0x2ee88c0()*-0.578498);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1f30() {
   return (neuron0x2ee3d90()*0.667602);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1f70() {
   return (neuron0x2ee4040()*0.240105);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1fb0() {
   return (neuron0x2ee4380()*-1.49467);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1ff0() {
   return (neuron0x2ee46c0()*0.915049);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2030() {
   return (neuron0x2ee4a00()*-0.460449);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2070() {
   return (neuron0x2ee4d40()*0.983398);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef20b0() {
   return (neuron0x2ee5080()*1.86608);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef20f0() {
   return (neuron0x2ee53c0()*-0.44757);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2130() {
   return (neuron0x2ee5700()*-0.929512);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2170() {
   return (neuron0x2ee5a40()*1.44985);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef21b0() {
   return (neuron0x2ee5d80()*0.0306341);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef21f0() {
   return (neuron0x2ee60c0()*1.98237);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2230() {
   return (neuron0x2ee6400()*0.180042);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2270() {
   return (neuron0x2ee6740()*0.684105);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef22b0() {
   return (neuron0x2ee6a80()*-0.435906);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef22f0() {
   return (neuron0x2ee6dc0()*-1.31279);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1d80() {
   return (neuron0x2ee7100()*0.998589);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1dc0() {
   return (neuron0x2ee7660()*-0.119528);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2440() {
   return (neuron0x2ee7880()*0.112966);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2480() {
   return (neuron0x2ee7bc0()*1.95183);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef24c0() {
   return (neuron0x2ee7f00()*-0.617532);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2500() {
   return (neuron0x2ee8240()*-0.444125);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2540() {
   return (neuron0x2ee8580()*-0.290453);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2580() {
   return (neuron0x2ee88c0()*0.246394);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2900() {
   return (neuron0x2ee3d90()*-0.184593);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2940() {
   return (neuron0x2ee4040()*0.793647);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2980() {
   return (neuron0x2ee4380()*0.682767);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef29c0() {
   return (neuron0x2ee46c0()*-0.159795);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2a00() {
   return (neuron0x2ee4a00()*-0.00110528);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2a40() {
   return (neuron0x2ee4d40()*-0.028437);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2a80() {
   return (neuron0x2ee5080()*0.0513461);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2ac0() {
   return (neuron0x2ee53c0()*-0.0317737);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2b00() {
   return (neuron0x2ee5700()*-0.0453548);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2b40() {
   return (neuron0x2ee5a40()*0.0149322);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2b80() {
   return (neuron0x2ee5d80()*-0.0183064);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2bc0() {
   return (neuron0x2ee60c0()*-5.14047);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2c00() {
   return (neuron0x2ee6400()*0.168216);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2c40() {
   return (neuron0x2ee6740()*-0.00994321);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2c80() {
   return (neuron0x2ee6a80()*-0.0559898);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2cc0() {
   return (neuron0x2ee6dc0()*0.0667105);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2750() {
   return (neuron0x2ee7100()*0.0502717);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2790() {
   return (neuron0x2ee7660()*-0.0840547);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2e10() {
   return (neuron0x2ee7880()*-0.108496);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2e50() {
   return (neuron0x2ee7bc0()*0.0359219);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2e90() {
   return (neuron0x2ee7f00()*-0.0196948);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2ed0() {
   return (neuron0x2ee8240()*-0.0196663);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2f10() {
   return (neuron0x2ee8580()*-0.0417583);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2f50() {
   return (neuron0x2ee88c0()*-1.48759);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef32d0() {
   return (neuron0x2ee3d90()*0.00158074);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3310() {
   return (neuron0x2ee4040()*-0.0164676);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3350() {
   return (neuron0x2ee4380()*-0.567929);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3390() {
   return (neuron0x2ee46c0()*-0.0127459);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef33d0() {
   return (neuron0x2ee4a00()*0.0381734);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3410() {
   return (neuron0x2ee4d40()*0.0130306);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3450() {
   return (neuron0x2ee5080()*-0.0173466);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3490() {
   return (neuron0x2ee53c0()*0.001321);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef34d0() {
   return (neuron0x2ee5700()*0.00352362);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3510() {
   return (neuron0x2ee5a40()*-0.0189813);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3550() {
   return (neuron0x2ee5d80()*0.000880731);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3590() {
   return (neuron0x2ee60c0()*-0.45783);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef35d0() {
   return (neuron0x2ee6400()*-0.0185988);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3610() {
   return (neuron0x2ee6740()*0.0229161);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3650() {
   return (neuron0x2ee6a80()*0.0114549);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3690() {
   return (neuron0x2ee6dc0()*0.00331498);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3120() {
   return (neuron0x2ee7100()*0.0114056);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3160() {
   return (neuron0x2ee7660()*0.00708402);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef37e0() {
   return (neuron0x2ee7880()*0.00184303);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3820() {
   return (neuron0x2ee7bc0()*0.00136364);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3860() {
   return (neuron0x2ee7f00()*0.0193804);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef38a0() {
   return (neuron0x2ee8240()*0.0171681);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef38e0() {
   return (neuron0x2ee8580()*-0.000377707);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3920() {
   return (neuron0x2ee88c0()*-0.820208);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3ca0() {
   return (neuron0x2ee3d90()*-1.64);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee3f20() {
   return (neuron0x2ee4040()*-0.569228);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee3f60() {
   return (neuron0x2ee4380()*0.633362);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee4260() {
   return (neuron0x2ee46c0()*-0.853178);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee42a0() {
   return (neuron0x2ee4a00()*0.634427);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee45a0() {
   return (neuron0x2ee4d40()*2.01225);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee45e0() {
   return (neuron0x2ee5080()*0.0286386);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee48e0() {
   return (neuron0x2ee53c0()*-0.236831);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee4920() {
   return (neuron0x2ee5700()*-0.788166);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee4c20() {
   return (neuron0x2ee5a40()*0.665534);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee4c60() {
   return (neuron0x2ee5d80()*-0.175573);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee4f60() {
   return (neuron0x2ee60c0()*-1.13548);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee4fa0() {
   return (neuron0x2ee6400()*0.447265);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee52a0() {
   return (neuron0x2ee6740()*-1.71465);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee52e0() {
   return (neuron0x2ee6a80()*0.764451);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee55e0() {
   return (neuron0x2ee6dc0()*0.428085);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee5620() {
   return (neuron0x2ee7100()*0.4855);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee5920() {
   return (neuron0x2ee7660()*-0.252456);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee5960() {
   return (neuron0x2ee7880()*-0.269542);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee5c60() {
   return (neuron0x2ee7bc0()*-0.259425);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee5ca0() {
   return (neuron0x2ee7f00()*0.965047);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee5fa0() {
   return (neuron0x2ee8240()*0.257517);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee5fe0() {
   return (neuron0x2ee8580()*-0.644368);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee62e0() {
   return (neuron0x2ee88c0()*-0.879507);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee6320() {
   return (neuron0x2ee3d90()*0.00507988);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee6fe0() {
   return (neuron0x2ee4040()*-0.0205029);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee7020() {
   return (neuron0x2ee4380()*2.12215);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3af0() {
   return (neuron0x2ee46c0()*-0.0365838);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3b30() {
   return (neuron0x2ee4a00()*0.0175157);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee7320() {
   return (neuron0x2ee4d40()*-0.00580149);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee7360() {
   return (neuron0x2ee5080()*0.00192476);
}

double NNfunction_nn_chi2_charge2p::synapse0x2151a30() {
   return (neuron0x2ee53c0()*0.00504197);
}

double NNfunction_nn_chi2_charge2p::synapse0x2151a70() {
   return (neuron0x2ee5700()*0.0136725);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee7aa0() {
   return (neuron0x2ee5a40()*0.0144183);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee7ae0() {
   return (neuron0x2ee5d80()*0.0369285);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee7de0() {
   return (neuron0x2ee60c0()*0.371041);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee7e20() {
   return (neuron0x2ee6400()*0.00569331);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee8120() {
   return (neuron0x2ee6740()*0.0646071);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee8160() {
   return (neuron0x2ee6a80()*-0.0321006);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee8460() {
   return (neuron0x2ee6dc0()*0.00954892);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee84a0() {
   return (neuron0x2ee7100()*0.0458498);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee87a0() {
   return (neuron0x2ee7660()*-0.00337062);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee87e0() {
   return (neuron0x2ee7880()*0.0326131);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee8ae0() {
   return (neuron0x2ee7bc0()*0.00131949);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee8b20() {
   return (neuron0x2ee7f00()*-0.0122185);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee6620() {
   return (neuron0x2ee8240()*-0.00242439);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee6660() {
   return (neuron0x2ee8580()*-0.00970528);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5a10() {
   return (neuron0x2ee88c0()*0.219631);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5d90() {
   return (neuron0x2ee3d90()*0.255798);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5dd0() {
   return (neuron0x2ee4040()*0.635454);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5e10() {
   return (neuron0x2ee4380()*0.334391);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5e50() {
   return (neuron0x2ee46c0()*-0.298592);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5e90() {
   return (neuron0x2ee4a00()*0.192766);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5ed0() {
   return (neuron0x2ee4d40()*-0.573067);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5f10() {
   return (neuron0x2ee5080()*-0.72349);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5f50() {
   return (neuron0x2ee53c0()*0.341215);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5f90() {
   return (neuron0x2ee5700()*0.865075);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5fd0() {
   return (neuron0x2ee5a40()*-0.740365);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6010() {
   return (neuron0x2ee5d80()*-0.0983083);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6050() {
   return (neuron0x2ee60c0()*0.0181063);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6090() {
   return (neuron0x2ee6400()*-0.196823);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef60d0() {
   return (neuron0x2ee6740()*-0.474889);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6110() {
   return (neuron0x2ee6a80()*-0.131086);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6150() {
   return (neuron0x2ee6dc0()*-0.431122);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5be0() {
   return (neuron0x2ee7100()*-0.879766);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5c20() {
   return (neuron0x2ee7660()*-0.426706);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef62a0() {
   return (neuron0x2ee7880()*-0.124986);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef62e0() {
   return (neuron0x2ee7bc0()*-0.288797);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6320() {
   return (neuron0x2ee7f00()*0.19886);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6360() {
   return (neuron0x2ee8240()*0.237124);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef63a0() {
   return (neuron0x2ee8580()*0.143943);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef63e0() {
   return (neuron0x2ee88c0()*0.00557346);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6760() {
   return (neuron0x2ee3d90()*0.0317425);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef67a0() {
   return (neuron0x2ee4040()*-0.000299112);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef67e0() {
   return (neuron0x2ee4380()*-0.51274);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6820() {
   return (neuron0x2ee46c0()*-0.00284593);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6860() {
   return (neuron0x2ee4a00()*0.00102802);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef68a0() {
   return (neuron0x2ee4d40()*0.00187191);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef68e0() {
   return (neuron0x2ee5080()*-0.00851285);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6920() {
   return (neuron0x2ee53c0()*-0.0132676);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6960() {
   return (neuron0x2ee5700()*-0.0106858);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef69a0() {
   return (neuron0x2ee5a40()*0.00434837);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef69e0() {
   return (neuron0x2ee5d80()*-0.0139801);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6a20() {
   return (neuron0x2ee60c0()*0.0745368);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6a60() {
   return (neuron0x2ee6400()*-0.0439045);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6aa0() {
   return (neuron0x2ee6740()*-0.0297457);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6ae0() {
   return (neuron0x2ee6a80()*0.00666549);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6b20() {
   return (neuron0x2ee6dc0()*0.00217942);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef65b0() {
   return (neuron0x2ee7100()*-0.0110158);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef65f0() {
   return (neuron0x2ee7660()*0.00340521);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6c70() {
   return (neuron0x2ee7880()*-0.00401929);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6cb0() {
   return (neuron0x2ee7bc0()*-0.0135439);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6cf0() {
   return (neuron0x2ee7f00()*-0.0227355);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6d30() {
   return (neuron0x2ee8240()*-0.00465907);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6d70() {
   return (neuron0x2ee8580()*0.00983569);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6db0() {
   return (neuron0x2ee88c0()*1.82828);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7130() {
   return (neuron0x2ee3d90()*0.109338);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7170() {
   return (neuron0x2ee4040()*-0.0470532);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef71b0() {
   return (neuron0x2ee4380()*0.263824);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef71f0() {
   return (neuron0x2ee46c0()*-1.56395);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7230() {
   return (neuron0x2ee4a00()*0.0668756);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7270() {
   return (neuron0x2ee4d40()*-0.0440735);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef72b0() {
   return (neuron0x2ee5080()*0.102879);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef72f0() {
   return (neuron0x2ee53c0()*0.00291685);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7330() {
   return (neuron0x2ee5700()*-0.0217718);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7370() {
   return (neuron0x2ee5a40()*-0.0510255);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef73b0() {
   return (neuron0x2ee5d80()*0.0459546);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef73f0() {
   return (neuron0x2ee60c0()*0.906039);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7430() {
   return (neuron0x2ee6400()*0.109733);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7470() {
   return (neuron0x2ee6740()*0.0944252);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef74b0() {
   return (neuron0x2ee6a80()*0.0326609);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef74f0() {
   return (neuron0x2ee6dc0()*0.0150427);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6f80() {
   return (neuron0x2ee7100()*0.0848691);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6fc0() {
   return (neuron0x2ee7660()*0.0282252);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7640() {
   return (neuron0x2ee7880()*-0.065731);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7680() {
   return (neuron0x2ee7bc0()*0.015982);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef76c0() {
   return (neuron0x2ee7f00()*-0.143365);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7700() {
   return (neuron0x2ee8240()*-0.00514);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7740() {
   return (neuron0x2ee8580()*-0.0830162);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7780() {
   return (neuron0x2ee88c0()*-0.539437);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7b00() {
   return (neuron0x2ee3d90()*0.00246672);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7b40() {
   return (neuron0x2ee4040()*-6.79952);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7b80() {
   return (neuron0x2ee4380()*-0.843203);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7bc0() {
   return (neuron0x2ee46c0()*0.0705034);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7c00() {
   return (neuron0x2ee4a00()*-0.0199283);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7c40() {
   return (neuron0x2ee4d40()*-0.00762601);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7c80() {
   return (neuron0x2ee5080()*-0.0272197);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7cc0() {
   return (neuron0x2ee53c0()*-0.0097175);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7d00() {
   return (neuron0x2ee5700()*0.00262294);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7d40() {
   return (neuron0x2ee5a40()*0.0469661);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7d80() {
   return (neuron0x2ee5d80()*0.00845936);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7dc0() {
   return (neuron0x2ee60c0()*3.99284);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7e00() {
   return (neuron0x2ee6400()*0.0359361);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7e40() {
   return (neuron0x2ee6740()*-0.0397158);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7e80() {
   return (neuron0x2ee6a80()*-0.0382049);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7ec0() {
   return (neuron0x2ee6dc0()*0.0220762);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7950() {
   return (neuron0x2ee7100()*-0.00451338);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7990() {
   return (neuron0x2ee7660()*0.067847);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8010() {
   return (neuron0x2ee7880()*0.0403245);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8050() {
   return (neuron0x2ee7bc0()*-0.0290519);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8090() {
   return (neuron0x2ee7f00()*0.000243595);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef80d0() {
   return (neuron0x2ee8240()*0.00383588);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8110() {
   return (neuron0x2ee8580()*0.0084439);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8150() {
   return (neuron0x2ee88c0()*0.321448);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef84d0() {
   return (neuron0x2ee3d90()*0.2559);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8510() {
   return (neuron0x2ee4040()*-0.129479);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8550() {
   return (neuron0x2ee4380()*-0.444125);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8590() {
   return (neuron0x2ee46c0()*0.131903);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef85d0() {
   return (neuron0x2ee4a00()*-0.293844);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8610() {
   return (neuron0x2ee4d40()*-0.183307);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8650() {
   return (neuron0x2ee5080()*-0.252299);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8690() {
   return (neuron0x2ee53c0()*-0.403512);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef86d0() {
   return (neuron0x2ee5700()*0.223941);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0890() {
   return (neuron0x2ee5a40()*1.2592);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef08d0() {
   return (neuron0x2ee5d80()*0.0221262);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0910() {
   return (neuron0x2ee60c0()*0.536492);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0950() {
   return (neuron0x2ee6400()*0.767588);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0990() {
   return (neuron0x2ee6740()*0.107787);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef09d0() {
   return (neuron0x2ee6a80()*-0.667407);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0a10() {
   return (neuron0x2ee6dc0()*0.222788);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8320() {
   return (neuron0x2ee7100()*-0.667544);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8360() {
   return (neuron0x2ee7660()*-0.544995);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0b60() {
   return (neuron0x2ee7880()*-0.354387);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0ba0() {
   return (neuron0x2ee7bc0()*0.0311439);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0be0() {
   return (neuron0x2ee7f00()*0.148158);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0c20() {
   return (neuron0x2ee8240()*-0.883471);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0c60() {
   return (neuron0x2ee8580()*-0.315346);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0ca0() {
   return (neuron0x2ee88c0()*-1.81677);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1020() {
   return (neuron0x2ee3d90()*-0.0120814);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1060() {
   return (neuron0x2ee4040()*-0.00849079);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef10a0() {
   return (neuron0x2ee4380()*-0.707078);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef10e0() {
   return (neuron0x2ee46c0()*-0.0186405);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1120() {
   return (neuron0x2ee4a00()*-0.0137366);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1160() {
   return (neuron0x2ee4d40()*-0.0149801);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef11a0() {
   return (neuron0x2ee5080()*0.0146662);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef11e0() {
   return (neuron0x2ee53c0()*0.0195775);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1220() {
   return (neuron0x2ee5700()*0.0084112);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1260() {
   return (neuron0x2ee5a40()*0.00461699);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef12a0() {
   return (neuron0x2ee5d80()*0.0295946);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef12e0() {
   return (neuron0x2ee60c0()*-0.0583041);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1320() {
   return (neuron0x2ee6400()*0.0338407);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1360() {
   return (neuron0x2ee6740()*0.0368099);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef13a0() {
   return (neuron0x2ee6a80()*-0.0230487);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef13e0() {
   return (neuron0x2ee6dc0()*0.0105458);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0e70() {
   return (neuron0x2ee7100()*0.0282317);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0eb0() {
   return (neuron0x2ee7660()*-0.00887741);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1530() {
   return (neuron0x2ee7880()*0.0212108);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1570() {
   return (neuron0x2ee7bc0()*0.0287072);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef15b0() {
   return (neuron0x2ee7f00()*0.0179705);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef15f0() {
   return (neuron0x2ee8240()*-0.0136381);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1630() {
   return (neuron0x2ee8580()*-0.01467);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1670() {
   return (neuron0x2ee88c0()*0.87958);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1840() {
   return (neuron0x2ee3d90()*-0.137092);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa8d0() {
   return (neuron0x2ee4040()*4.13709);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa910() {
   return (neuron0x2ee4380()*0.381848);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa950() {
   return (neuron0x2ee46c0()*-0.0709526);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa990() {
   return (neuron0x2ee4a00()*-0.0871843);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa9d0() {
   return (neuron0x2ee4d40()*0.0276141);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efaa10() {
   return (neuron0x2ee5080()*-0.0349052);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efaa50() {
   return (neuron0x2ee53c0()*-0.165627);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efaa90() {
   return (neuron0x2ee5700()*-0.016769);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efaad0() {
   return (neuron0x2ee5a40()*-0.116169);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efab10() {
   return (neuron0x2ee5d80()*-0.0730604);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efab50() {
   return (neuron0x2ee60c0()*4.98515);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efab90() {
   return (neuron0x2ee6400()*0.0662329);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efabd0() {
   return (neuron0x2ee6740()*0.0989283);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efac10() {
   return (neuron0x2ee6a80()*0.0257641);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efac50() {
   return (neuron0x2ee6dc0()*0.225465);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa720() {
   return (neuron0x2ee7100()*0.100545);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa760() {
   return (neuron0x2ee7660()*-0.190423);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efada0() {
   return (neuron0x2ee7880()*-0.0575564);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efade0() {
   return (neuron0x2ee7bc0()*-0.122194);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efae20() {
   return (neuron0x2ee7f00()*-0.0894394);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efae60() {
   return (neuron0x2ee8240()*0.132466);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efaea0() {
   return (neuron0x2ee8580()*-0.0266505);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efaee0() {
   return (neuron0x2ee88c0()*3.30377);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb260() {
   return (neuron0x2ee3d90()*0.244304);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb2a0() {
   return (neuron0x2ee4040()*-0.751812);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb2e0() {
   return (neuron0x2ee4380()*0.609093);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb320() {
   return (neuron0x2ee46c0()*0.447174);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb360() {
   return (neuron0x2ee4a00()*0.489801);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb3a0() {
   return (neuron0x2ee4d40()*-0.126762);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb3e0() {
   return (neuron0x2ee5080()*0.777326);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb420() {
   return (neuron0x2ee53c0()*1.26601);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb460() {
   return (neuron0x2ee5700()*-0.144746);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb4a0() {
   return (neuron0x2ee5a40()*0.16865);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb4e0() {
   return (neuron0x2ee5d80()*0.625405);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb520() {
   return (neuron0x2ee60c0()*-0.778158);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb560() {
   return (neuron0x2ee6400()*0.720517);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb5a0() {
   return (neuron0x2ee6740()*0.472246);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb5e0() {
   return (neuron0x2ee6a80()*0.53694);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb620() {
   return (neuron0x2ee6dc0()*0.806116);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb0b0() {
   return (neuron0x2ee7100()*-0.855414);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb0f0() {
   return (neuron0x2ee7660()*0.989841);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb770() {
   return (neuron0x2ee7880()*0.812873);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb7b0() {
   return (neuron0x2ee7bc0()*-1.37779);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb7f0() {
   return (neuron0x2ee7f00()*-0.15048);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb830() {
   return (neuron0x2ee8240()*0.449145);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb870() {
   return (neuron0x2ee8580()*-0.191546);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb8b0() {
   return (neuron0x2ee88c0()*0.88615);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efbc30() {
   return (neuron0x2ee3d90()*1.09359);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efbc70() {
   return (neuron0x2ee4040()*-0.379758);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efbcb0() {
   return (neuron0x2ee4380()*-0.0700443);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efbcf0() {
   return (neuron0x2ee46c0()*0.474832);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efbd30() {
   return (neuron0x2ee4a00()*1.04855);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efbd70() {
   return (neuron0x2ee4d40()*0.410114);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efbdb0() {
   return (neuron0x2ee5080()*-0.0735869);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efbdf0() {
   return (neuron0x2ee53c0()*0.391732);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efbe30() {
   return (neuron0x2ee5700()*-0.364933);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efbe70() {
   return (neuron0x2ee5a40()*1.32601);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efbeb0() {
   return (neuron0x2ee5d80()*1.78612);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efbef0() {
   return (neuron0x2ee60c0()*0.620009);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efbf30() {
   return (neuron0x2ee6400()*-0.606008);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efbf70() {
   return (neuron0x2ee6740()*-0.112673);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efbfb0() {
   return (neuron0x2ee6a80()*-0.225274);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efbff0() {
   return (neuron0x2ee6dc0()*-0.213089);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efba80() {
   return (neuron0x2ee7100()*-0.936914);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efbac0() {
   return (neuron0x2ee7660()*0.287567);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc140() {
   return (neuron0x2ee7880()*1.09313);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc180() {
   return (neuron0x2ee7bc0()*-0.245533);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc1c0() {
   return (neuron0x2ee7f00()*1.23396);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc200() {
   return (neuron0x2ee8240()*-0.453977);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc240() {
   return (neuron0x2ee8580()*-0.321585);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc280() {
   return (neuron0x2ee88c0()*-0.541492);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc600() {
   return (neuron0x2ee3d90()*-0.283456);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc640() {
   return (neuron0x2ee4040()*1.57118);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc680() {
   return (neuron0x2ee4380()*1.65328);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc6c0() {
   return (neuron0x2ee46c0()*0.25642);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc700() {
   return (neuron0x2ee4a00()*-0.013124);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc740() {
   return (neuron0x2ee4d40()*0.00822584);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc780() {
   return (neuron0x2ee5080()*0.268324);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc7c0() {
   return (neuron0x2ee53c0()*-0.184987);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc800() {
   return (neuron0x2ee5700()*-0.245936);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc840() {
   return (neuron0x2ee5a40()*-0.596768);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc880() {
   return (neuron0x2ee5d80()*0.171783);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc8c0() {
   return (neuron0x2ee60c0()*-0.128552);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc900() {
   return (neuron0x2ee6400()*-0.0445145);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc940() {
   return (neuron0x2ee6740()*-0.474875);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc980() {
   return (neuron0x2ee6a80()*0.154883);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc9c0() {
   return (neuron0x2ee6dc0()*-0.460858);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc450() {
   return (neuron0x2ee7100()*-0.185597);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc490() {
   return (neuron0x2ee7660()*0.520786);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efcb10() {
   return (neuron0x2ee7880()*-0.126931);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efcb50() {
   return (neuron0x2ee7bc0()*-0.509553);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efcb90() {
   return (neuron0x2ee7f00()*-0.0799558);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efcbd0() {
   return (neuron0x2ee8240()*0.378104);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efcc10() {
   return (neuron0x2ee8580()*0.331923);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efcc50() {
   return (neuron0x2ee88c0()*-1.02856);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efcfd0() {
   return (neuron0x2ee3d90()*-0.186087);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd010() {
   return (neuron0x2ee4040()*0.0169527);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd050() {
   return (neuron0x2ee4380()*1.73118);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd090() {
   return (neuron0x2ee46c0()*-0.0377362);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd0d0() {
   return (neuron0x2ee4a00()*0.00971892);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd110() {
   return (neuron0x2ee4d40()*0.0022025);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd150() {
   return (neuron0x2ee5080()*7.24481e-05);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd190() {
   return (neuron0x2ee53c0()*0.0147378);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd1d0() {
   return (neuron0x2ee5700()*0.00699978);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd210() {
   return (neuron0x2ee5a40()*-0.050072);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd250() {
   return (neuron0x2ee5d80()*-0.0312744);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd290() {
   return (neuron0x2ee60c0()*-0.290409);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd2d0() {
   return (neuron0x2ee6400()*0.0174695);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd310() {
   return (neuron0x2ee6740()*0.0411596);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd350() {
   return (neuron0x2ee6a80()*-0.000237937);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd390() {
   return (neuron0x2ee6dc0()*0.00429437);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efce20() {
   return (neuron0x2ee7100()*0.0190298);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efce60() {
   return (neuron0x2ee7660()*0.000817923);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd4e0() {
   return (neuron0x2ee7880()*-0.00876712);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd520() {
   return (neuron0x2ee7bc0()*0.0199564);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd560() {
   return (neuron0x2ee7f00()*0.0262527);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd5a0() {
   return (neuron0x2ee8240()*0.0112372);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd5e0() {
   return (neuron0x2ee8580()*0.0019884);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd620() {
   return (neuron0x2ee88c0()*2.74707);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd9a0() {
   return (neuron0x2ee3d90()*-0.0199792);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd9e0() {
   return (neuron0x2ee4040()*-0.000293636);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efda20() {
   return (neuron0x2ee4380()*1.349);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efda60() {
   return (neuron0x2ee46c0()*0.0259538);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efdaa0() {
   return (neuron0x2ee4a00()*-0.0260068);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efdae0() {
   return (neuron0x2ee4d40()*0.00325942);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efdb20() {
   return (neuron0x2ee5080()*0.0200164);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efdb60() {
   return (neuron0x2ee53c0()*-0.00407084);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efdba0() {
   return (neuron0x2ee5700()*0.00896825);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efdbe0() {
   return (neuron0x2ee5a40()*0.00903856);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efdc20() {
   return (neuron0x2ee5d80()*-0.0135354);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efdc60() {
   return (neuron0x2ee60c0()*0.247013);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efdca0() {
   return (neuron0x2ee6400()*0.0210681);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efdce0() {
   return (neuron0x2ee6740()*-0.00550787);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efdd20() {
   return (neuron0x2ee6a80()*-0.0154917);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efdd60() {
   return (neuron0x2ee6dc0()*-0.0150712);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd7f0() {
   return (neuron0x2ee7100()*-0.02635);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd830() {
   return (neuron0x2ee7660()*-0.00717562);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efdeb0() {
   return (neuron0x2ee7880()*-0.000370787);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efdef0() {
   return (neuron0x2ee7bc0()*-0.000928067);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efdf30() {
   return (neuron0x2ee7f00()*0.00133837);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efdf70() {
   return (neuron0x2ee8240()*-0.00471664);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efdfb0() {
   return (neuron0x2ee8580()*-0.0122016);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efdff0() {
   return (neuron0x2ee88c0()*2.07704);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe370() {
   return (neuron0x2ee3d90()*-0.00570728);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe3b0() {
   return (neuron0x2ee4040()*0.00448194);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe3f0() {
   return (neuron0x2ee4380()*-2.32901);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe430() {
   return (neuron0x2ee46c0()*0.00693665);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe470() {
   return (neuron0x2ee4a00()*0.000659504);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe4b0() {
   return (neuron0x2ee4d40()*-0.000343437);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe4f0() {
   return (neuron0x2ee5080()*0.00275121);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe530() {
   return (neuron0x2ee53c0()*-0.00524504);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe570() {
   return (neuron0x2ee5700()*0.0038864);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe5b0() {
   return (neuron0x2ee5a40()*0.0112454);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe5f0() {
   return (neuron0x2ee5d80()*0.00388088);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe630() {
   return (neuron0x2ee60c0()*-0.0573766);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe670() {
   return (neuron0x2ee6400()*-0.0308118);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe6b0() {
   return (neuron0x2ee6740()*-0.0107715);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe6f0() {
   return (neuron0x2ee6a80()*-0.0159254);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe730() {
   return (neuron0x2ee6dc0()*-0.0100281);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe1c0() {
   return (neuron0x2ee7100()*0.00811416);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe200() {
   return (neuron0x2ee7660()*-0.0108867);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe880() {
   return (neuron0x2ee7880()*-0.0176284);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe8c0() {
   return (neuron0x2ee7bc0()*0.00882987);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe900() {
   return (neuron0x2ee7f00()*0.00877693);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe940() {
   return (neuron0x2ee8240()*-7.95654e-05);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe980() {
   return (neuron0x2ee8580()*0.00369834);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efe9c0() {
   return (neuron0x2ee88c0()*4.2762);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efed40() {
   return (neuron0x2ee3d90()*-0.567744);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efed80() {
   return (neuron0x2ee4040()*0.0462494);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efedc0() {
   return (neuron0x2ee4380()*0.12353);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efee00() {
   return (neuron0x2ee46c0()*-0.00174384);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efee40() {
   return (neuron0x2ee4a00()*-0.0332196);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efee80() {
   return (neuron0x2ee4d40()*-0.0297005);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efeec0() {
   return (neuron0x2ee5080()*-0.0371361);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efef00() {
   return (neuron0x2ee53c0()*0.036354);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efef40() {
   return (neuron0x2ee5700()*0.0924171);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efef80() {
   return (neuron0x2ee5a40()*-0.0261926);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efefc0() {
   return (neuron0x2ee5d80()*0.0547987);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eff000() {
   return (neuron0x2ee60c0()*0.0294869);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eff040() {
   return (neuron0x2ee6400()*0.0284034);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eff080() {
   return (neuron0x2ee6740()*0.0508666);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eff0c0() {
   return (neuron0x2ee6a80()*-0.0457521);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eff100() {
   return (neuron0x2ee6dc0()*0.0505764);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efeb90() {
   return (neuron0x2ee7100()*-0.00986498);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efebd0() {
   return (neuron0x2ee7660()*-0.0216793);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eff250() {
   return (neuron0x2ee7880()*0.0504522);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eff290() {
   return (neuron0x2ee7bc0()*0.0835744);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eff2d0() {
   return (neuron0x2ee7f00()*0.0298085);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eff310() {
   return (neuron0x2ee8240()*-0.0070716);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eff350() {
   return (neuron0x2ee8580()*-0.0360558);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eff390() {
   return (neuron0x2ee88c0()*-2.98561);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eff710() {
   return (neuron0x2ee3d90()*-0.0564639);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3ce0() {
   return (neuron0x2ee4040()*0.00373443);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3d20() {
   return (neuron0x2ee4380()*-0.113831);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3d60() {
   return (neuron0x2ee46c0()*-0.0126992);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3fb0() {
   return (neuron0x2ee4a00()*0.00081651);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3ff0() {
   return (neuron0x2ee4d40()*0.00333543);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef4030() {
   return (neuron0x2ee5080()*0.0239664);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef4280() {
   return (neuron0x2ee53c0()*0.0178776);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef42c0() {
   return (neuron0x2ee5700()*0.0205265);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef4510() {
   return (neuron0x2ee5a40()*0.0141352);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef4550() {
   return (neuron0x2ee5d80()*0.0503986);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef4590() {
   return (neuron0x2ee60c0()*-0.118152);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef47e0() {
   return (neuron0x2ee6400()*-0.0198606);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef4820() {
   return (neuron0x2ee6740()*0.0150005);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef4a70() {
   return (neuron0x2ee6a80()*-0.0365428);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef4ab0() {
   return (neuron0x2ee6dc0()*-0.0180662);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eff560() {
   return (neuron0x2ee7100()*-0.00121467);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eff5a0() {
   return (neuron0x2ee7660()*-0.0227199);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef4c00() {
   return (neuron0x2ee7880()*0.00516921);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5110() {
   return (neuron0x2ee7bc0()*0.0285808);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5150() {
   return (neuron0x2ee7f00()*0.00224957);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5190() {
   return (neuron0x2ee8240()*-0.00392669);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef53e0() {
   return (neuron0x2ee8580()*-0.0133179);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5420() {
   return (neuron0x2ee88c0()*6.48359);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef4cd0() {
   return (neuron0x2ee3d90()*-0.0116937);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef4d10() {
   return (neuron0x2ee4040()*-7.79918);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef4d50() {
   return (neuron0x2ee4380()*0.168497);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef4d90() {
   return (neuron0x2ee46c0()*0.0114059);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5710() {
   return (neuron0x2ee4a00()*-0.0188668);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f01a60() {
   return (neuron0x2ee4d40()*-0.0121426);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f01aa0() {
   return (neuron0x2ee5080()*0.0513712);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f01ae0() {
   return (neuron0x2ee53c0()*-0.0246741);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f01b20() {
   return (neuron0x2ee5700()*0.0453625);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f01b60() {
   return (neuron0x2ee5a40()*-0.0206368);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f01ba0() {
   return (neuron0x2ee5d80()*-0.0373819);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f01be0() {
   return (neuron0x2ee60c0()*-1.2395);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f01c20() {
   return (neuron0x2ee6400()*-0.00700478);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f01c60() {
   return (neuron0x2ee6740()*0.0224172);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f01ca0() {
   return (neuron0x2ee6a80()*0.0172628);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f01ce0() {
   return (neuron0x2ee6dc0()*-0.0643699);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef55f0() {
   return (neuron0x2ee7100()*0.0050536);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5630() {
   return (neuron0x2ee7660()*-0.0118127);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f01e30() {
   return (neuron0x2ee7880()*-0.0120788);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f01e70() {
   return (neuron0x2ee7bc0()*-0.00218984);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f01eb0() {
   return (neuron0x2ee7f00()*-0.0236507);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f01ef0() {
   return (neuron0x2ee8240()*0.0231054);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f01f30() {
   return (neuron0x2ee8580()*0.0249624);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f01f70() {
   return (neuron0x2ee88c0()*-0.940514);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f022f0() {
   return (neuron0x2ee3d90()*-0.032991);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02330() {
   return (neuron0x2ee4040()*0.0204379);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02370() {
   return (neuron0x2ee4380()*-0.0772578);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f023b0() {
   return (neuron0x2ee46c0()*-0.0169341);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f023f0() {
   return (neuron0x2ee4a00()*0.0216158);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02430() {
   return (neuron0x2ee4d40()*0.00663175);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02470() {
   return (neuron0x2ee5080()*-0.0455284);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f024b0() {
   return (neuron0x2ee53c0()*-0.0192865);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f024f0() {
   return (neuron0x2ee5700()*0.0182527);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02530() {
   return (neuron0x2ee5a40()*-0.00765174);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02570() {
   return (neuron0x2ee5d80()*-0.0271785);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f025b0() {
   return (neuron0x2ee60c0()*-0.0403192);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f025f0() {
   return (neuron0x2ee6400()*-0.00860305);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02630() {
   return (neuron0x2ee6740()*0.0300438);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02670() {
   return (neuron0x2ee6a80()*0.0184642);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f026b0() {
   return (neuron0x2ee6dc0()*-0.00397308);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02140() {
   return (neuron0x2ee7100()*0.00341151);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02180() {
   return (neuron0x2ee7660()*0.020973);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02800() {
   return (neuron0x2ee7880()*0.0139789);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02840() {
   return (neuron0x2ee7bc0()*-0.0389374);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02880() {
   return (neuron0x2ee7f00()*-0.0189217);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f028c0() {
   return (neuron0x2ee8240()*-0.0127442);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02900() {
   return (neuron0x2ee8580()*0.0147934);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02940() {
   return (neuron0x2ee88c0()*-10.9311);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02cc0() {
   return (neuron0x2ee3d90()*-0.0557271);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02d00() {
   return (neuron0x2ee4040()*1.21022);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02d40() {
   return (neuron0x2ee4380()*4.37164);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02d80() {
   return (neuron0x2ee46c0()*0.0747414);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02dc0() {
   return (neuron0x2ee4a00()*0.158085);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02e00() {
   return (neuron0x2ee4d40()*-0.015937);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02e40() {
   return (neuron0x2ee5080()*0.0647973);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02e80() {
   return (neuron0x2ee53c0()*-0.00448638);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02ec0() {
   return (neuron0x2ee5700()*0.0296698);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02f00() {
   return (neuron0x2ee5a40()*0.0660688);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02f40() {
   return (neuron0x2ee5d80()*0.229208);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02f80() {
   return (neuron0x2ee60c0()*-2.45234);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02fc0() {
   return (neuron0x2ee6400()*-0.0711086);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03000() {
   return (neuron0x2ee6740()*-0.131737);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03040() {
   return (neuron0x2ee6a80()*-0.101224);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03080() {
   return (neuron0x2ee6dc0()*-0.132707);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02b10() {
   return (neuron0x2ee7100()*0.0670556);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02b50() {
   return (neuron0x2ee7660()*0.256894);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f031d0() {
   return (neuron0x2ee7880()*-0.250025);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03210() {
   return (neuron0x2ee7bc0()*-0.0243274);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03250() {
   return (neuron0x2ee7f00()*-0.116529);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03290() {
   return (neuron0x2ee8240()*0.0921458);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f032d0() {
   return (neuron0x2ee8580()*0.102487);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03310() {
   return (neuron0x2ee88c0()*-2.27551);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03690() {
   return (neuron0x2ee3d90()*0.914604);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f036d0() {
   return (neuron0x2ee4040()*-0.305558);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03710() {
   return (neuron0x2ee4380()*0.224477);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03750() {
   return (neuron0x2ee46c0()*0.569393);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03790() {
   return (neuron0x2ee4a00()*0.909121);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f037d0() {
   return (neuron0x2ee4d40()*-0.0121832);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03810() {
   return (neuron0x2ee5080()*-0.278903);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03850() {
   return (neuron0x2ee53c0()*0.61698);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03890() {
   return (neuron0x2ee5700()*0.427983);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f038d0() {
   return (neuron0x2ee5a40()*1.72852);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03910() {
   return (neuron0x2ee5d80()*1.60205);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03950() {
   return (neuron0x2ee60c0()*0.20664);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03990() {
   return (neuron0x2ee6400()*-0.191829);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f039d0() {
   return (neuron0x2ee6740()*-0.551677);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03a10() {
   return (neuron0x2ee6a80()*-0.730937);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03a50() {
   return (neuron0x2ee6dc0()*-0.340172);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f034e0() {
   return (neuron0x2ee7100()*-0.957498);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03520() {
   return (neuron0x2ee7660()*0.246703);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03ba0() {
   return (neuron0x2ee7880()*0.853704);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03be0() {
   return (neuron0x2ee7bc0()*-0.277525);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03c20() {
   return (neuron0x2ee7f00()*1.00767);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03c60() {
   return (neuron0x2ee8240()*-0.302451);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03ca0() {
   return (neuron0x2ee8580()*-0.293287);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03ce0() {
   return (neuron0x2ee88c0()*-0.607752);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04060() {
   return (neuron0x2ee3d90()*-0.00685418);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f040a0() {
   return (neuron0x2ee4040()*-12.1961);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f040e0() {
   return (neuron0x2ee4380()*0.578593);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04120() {
   return (neuron0x2ee46c0()*-0.0128205);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04160() {
   return (neuron0x2ee4a00()*-0.0438764);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f041a0() {
   return (neuron0x2ee4d40()*0.000179298);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f041e0() {
   return (neuron0x2ee5080()*0.0203462);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04220() {
   return (neuron0x2ee53c0()*-0.00454679);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04260() {
   return (neuron0x2ee5700()*-0.0317411);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f042a0() {
   return (neuron0x2ee5a40()*-0.0153117);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f042e0() {
   return (neuron0x2ee5d80()*0.0162769);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04320() {
   return (neuron0x2ee60c0()*-0.982716);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04360() {
   return (neuron0x2ee6400()*0.0228949);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f043a0() {
   return (neuron0x2ee6740()*-0.0413686);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f043e0() {
   return (neuron0x2ee6a80()*-0.0235083);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04420() {
   return (neuron0x2ee6dc0()*0.00800107);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03eb0() {
   return (neuron0x2ee7100()*-0.0269213);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03ef0() {
   return (neuron0x2ee7660()*-0.0280271);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04570() {
   return (neuron0x2ee7880()*-0.0156795);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f045b0() {
   return (neuron0x2ee7bc0()*-0.010548);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f045f0() {
   return (neuron0x2ee7f00()*0.0143142);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04630() {
   return (neuron0x2ee8240()*-0.013392);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04670() {
   return (neuron0x2ee8580()*-0.014176);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f046b0() {
   return (neuron0x2ee88c0()*-2.86567);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04a30() {
   return (neuron0x2ee3d90()*-0.0586248);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04a70() {
   return (neuron0x2ee4040()*-2.95784);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04ab0() {
   return (neuron0x2ee4380()*-0.303471);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04af0() {
   return (neuron0x2ee46c0()*-0.147114);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04b30() {
   return (neuron0x2ee4a00()*-0.16112);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04b70() {
   return (neuron0x2ee4d40()*0.111384);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04bb0() {
   return (neuron0x2ee5080()*0.0751909);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04bf0() {
   return (neuron0x2ee53c0()*-0.195272);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04c30() {
   return (neuron0x2ee5700()*-0.073532);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04c70() {
   return (neuron0x2ee5a40()*0.288734);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04cb0() {
   return (neuron0x2ee5d80()*-0.0668757);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04cf0() {
   return (neuron0x2ee60c0()*2.40059);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04d30() {
   return (neuron0x2ee6400()*-0.211634);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04d70() {
   return (neuron0x2ee6740()*-0.337697);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04db0() {
   return (neuron0x2ee6a80()*-0.349577);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04df0() {
   return (neuron0x2ee6dc0()*-0.0880425);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04880() {
   return (neuron0x2ee7100()*-0.0800285);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f048c0() {
   return (neuron0x2ee7660()*-0.0781787);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04f40() {
   return (neuron0x2ee7880()*0.137715);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04f80() {
   return (neuron0x2ee7bc0()*0.189702);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04fc0() {
   return (neuron0x2ee7f00()*0.274489);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05000() {
   return (neuron0x2ee8240()*-0.114776);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05040() {
   return (neuron0x2ee8580()*-0.0247564);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05080() {
   return (neuron0x2ee88c0()*2.35175);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05400() {
   return (neuron0x2ee3d90()*0.118949);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05440() {
   return (neuron0x2ee4040()*5.4056);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05480() {
   return (neuron0x2ee4380()*-0.212042);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f054c0() {
   return (neuron0x2ee46c0()*0.0380045);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05500() {
   return (neuron0x2ee4a00()*-0.00608865);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05540() {
   return (neuron0x2ee4d40()*0.0113583);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05580() {
   return (neuron0x2ee5080()*-0.0673337);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f055c0() {
   return (neuron0x2ee53c0()*0.0419622);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05600() {
   return (neuron0x2ee5700()*0.0477457);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05640() {
   return (neuron0x2ee5a40()*0.00067129);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05680() {
   return (neuron0x2ee5d80()*0.0492289);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f056c0() {
   return (neuron0x2ee60c0()*-0.483351);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05700() {
   return (neuron0x2ee6400()*0.0370461);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05740() {
   return (neuron0x2ee6740()*0.0601);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05780() {
   return (neuron0x2ee6a80()*0.0282177);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f057c0() {
   return (neuron0x2ee6dc0()*0.0675634);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05250() {
   return (neuron0x2ee7100()*0.0303429);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05290() {
   return (neuron0x2ee7660()*0.0489442);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05910() {
   return (neuron0x2ee7880()*0.0130279);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05950() {
   return (neuron0x2ee7bc0()*0.034474);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05990() {
   return (neuron0x2ee7f00()*0.00259749);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f059d0() {
   return (neuron0x2ee8240()*-0.0223188);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05a10() {
   return (neuron0x2ee8580()*-0.0399781);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05a50() {
   return (neuron0x2ee88c0()*0.171434);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05dd0() {
   return (neuron0x2ee3d90()*-0.0953596);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05e10() {
   return (neuron0x2ee4040()*-0.219833);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05e50() {
   return (neuron0x2ee4380()*0.929481);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05e90() {
   return (neuron0x2ee46c0()*0.200372);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05ed0() {
   return (neuron0x2ee4a00()*0.838429);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05f10() {
   return (neuron0x2ee4d40()*0.832525);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05f50() {
   return (neuron0x2ee5080()*-0.932434);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05f90() {
   return (neuron0x2ee53c0()*0.0179868);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05fd0() {
   return (neuron0x2ee5700()*-0.367718);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06010() {
   return (neuron0x2ee5a40()*-0.143598);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06050() {
   return (neuron0x2ee5d80()*-0.646608);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06090() {
   return (neuron0x2ee60c0()*-0.60175);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f060d0() {
   return (neuron0x2ee6400()*1.21708);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06110() {
   return (neuron0x2ee6740()*-0.0133869);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06150() {
   return (neuron0x2ee6a80()*1.14012);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06190() {
   return (neuron0x2ee6dc0()*-0.679683);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05c20() {
   return (neuron0x2ee7100()*-0.970631);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05c60() {
   return (neuron0x2ee7660()*-0.899183);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f062e0() {
   return (neuron0x2ee7880()*0.215237);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06320() {
   return (neuron0x2ee7bc0()*-0.223421);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06360() {
   return (neuron0x2ee7f00()*0.0954086);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f063a0() {
   return (neuron0x2ee8240()*0.451692);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f063e0() {
   return (neuron0x2ee8580()*0.985219);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06420() {
   return (neuron0x2ee88c0()*-0.435261);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeeed0() {
   return (neuron0x2ee3d90()*0.0411329);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeef10() {
   return (neuron0x2ee4040()*0.00801686);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeef50() {
   return (neuron0x2ee4380()*1.09247);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeef90() {
   return (neuron0x2ee46c0()*0.05475);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeefd0() {
   return (neuron0x2ee4a00()*0.0600509);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef010() {
   return (neuron0x2ee4d40()*0.043201);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef050() {
   return (neuron0x2ee5080()*-0.0472274);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef090() {
   return (neuron0x2ee53c0()*-0.0634304);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06bb0() {
   return (neuron0x2ee5700()*-0.0103903);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06bf0() {
   return (neuron0x2ee5a40()*-0.0147082);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06c30() {
   return (neuron0x2ee5d80()*-0.0675689);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06c70() {
   return (neuron0x2ee60c0()*0.162492);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06cb0() {
   return (neuron0x2ee6400()*-0.143499);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06cf0() {
   return (neuron0x2ee6740()*-0.114566);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06d30() {
   return (neuron0x2ee6a80()*0.0535326);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06d70() {
   return (neuron0x2ee6dc0()*-0.0248757);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f065f0() {
   return (neuron0x2ee7100()*-0.0812845);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06630() {
   return (neuron0x2ee7660()*0.0165656);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06ec0() {
   return (neuron0x2ee7880()*-0.051393);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06f00() {
   return (neuron0x2ee7bc0()*-0.0781414);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06f40() {
   return (neuron0x2ee7f00()*-0.048309);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06f80() {
   return (neuron0x2ee8240()*0.045117);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06fc0() {
   return (neuron0x2ee8580()*0.0342759);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07000() {
   return (neuron0x2ee88c0()*-0.296842);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07380() {
   return (neuron0x2ee3d90()*0.117309);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f073c0() {
   return (neuron0x2ee4040()*-0.0418042);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07400() {
   return (neuron0x2ee4380()*-0.127894);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07440() {
   return (neuron0x2ee46c0()*-5.25526);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07480() {
   return (neuron0x2ee4a00()*0.0112654);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f074c0() {
   return (neuron0x2ee4d40()*0.012409);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07500() {
   return (neuron0x2ee5080()*0.194526);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07540() {
   return (neuron0x2ee53c0()*-0.0143994);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07580() {
   return (neuron0x2ee5700()*0.0367736);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f075c0() {
   return (neuron0x2ee5a40()*-0.0418638);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07600() {
   return (neuron0x2ee5d80()*0.0366294);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07640() {
   return (neuron0x2ee60c0()*-0.0212058);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07680() {
   return (neuron0x2ee6400()*0.240376);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f076c0() {
   return (neuron0x2ee6740()*-0.0966458);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07700() {
   return (neuron0x2ee6a80()*0.098642);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07740() {
   return (neuron0x2ee6dc0()*0.124037);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f071d0() {
   return (neuron0x2ee7100()*-0.0815578);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07210() {
   return (neuron0x2ee7660()*0.0565522);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07890() {
   return (neuron0x2ee7880()*-0.055907);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f078d0() {
   return (neuron0x2ee7bc0()*-0.0433432);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07910() {
   return (neuron0x2ee7f00()*-0.0956906);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07950() {
   return (neuron0x2ee8240()*-0.0224596);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07990() {
   return (neuron0x2ee8580()*-0.0242794);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f079d0() {
   return (neuron0x2ee88c0()*-0.115975);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07d50() {
   return (neuron0x2ee3d90()*0.0198032);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07d90() {
   return (neuron0x2ee4040()*8.9617);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07dd0() {
   return (neuron0x2ee4380()*-0.373721);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07e10() {
   return (neuron0x2ee46c0()*-0.0327338);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07e50() {
   return (neuron0x2ee4a00()*0.0344624);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07e90() {
   return (neuron0x2ee4d40()*-0.0152879);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07ed0() {
   return (neuron0x2ee5080()*-0.0396699);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07f10() {
   return (neuron0x2ee53c0()*-0.023383);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07f50() {
   return (neuron0x2ee5700()*0.030282);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07f90() {
   return (neuron0x2ee5a40()*0.00378321);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07fd0() {
   return (neuron0x2ee5d80()*0.0371992);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f08010() {
   return (neuron0x2ee60c0()*1.89186);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f08050() {
   return (neuron0x2ee6400()*0.0486037);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f08090() {
   return (neuron0x2ee6740()*0.0590191);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f080d0() {
   return (neuron0x2ee6a80()*-0.0131043);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f08110() {
   return (neuron0x2ee6dc0()*0.00529091);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07ba0() {
   return (neuron0x2ee7100()*0.0186472);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07be0() {
   return (neuron0x2ee7660()*0.0158109);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8710() {
   return (neuron0x2ee7880()*0.0330035);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8750() {
   return (neuron0x2ee7bc0()*-0.00861243);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8790() {
   return (neuron0x2ee7f00()*0.0209918);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef87d0() {
   return (neuron0x2ee8240()*-0.0155231);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8810() {
   return (neuron0x2ee8580()*0.00718726);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8850() {
   return (neuron0x2ee88c0()*2.06375);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8bd0() {
   return (neuron0x2ee3d90()*0.212364);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8c10() {
   return (neuron0x2ee4040()*0.0519063);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8c50() {
   return (neuron0x2ee4380()*-0.0777055);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8c90() {
   return (neuron0x2ee46c0()*0.63735);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8cd0() {
   return (neuron0x2ee4a00()*0.180717);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8d10() {
   return (neuron0x2ee4d40()*0.394827);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8d50() {
   return (neuron0x2ee5080()*0.641178);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8d90() {
   return (neuron0x2ee53c0()*0.441991);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8dd0() {
   return (neuron0x2ee5700()*-0.450161);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8e10() {
   return (neuron0x2ee5a40()*0.292127);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8e50() {
   return (neuron0x2ee5d80()*0.0346375);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8e90() {
   return (neuron0x2ee60c0()*-0.0290302);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8ed0() {
   return (neuron0x2ee6400()*-0.239454);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8f10() {
   return (neuron0x2ee6740()*-0.298781);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8f50() {
   return (neuron0x2ee6a80()*0.912977);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8f90() {
   return (neuron0x2ee6dc0()*0.599764);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8a20() {
   return (neuron0x2ee7100()*0.0441274);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8a60() {
   return (neuron0x2ee7660()*-0.157354);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef90e0() {
   return (neuron0x2ee7880()*0.662685);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9120() {
   return (neuron0x2ee7bc0()*-0.0437649);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9160() {
   return (neuron0x2ee7f00()*0.668457);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef91a0() {
   return (neuron0x2ee8240()*-0.115511);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef91e0() {
   return (neuron0x2ee8580()*-0.0136614);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9220() {
   return (neuron0x2ee88c0()*-0.286443);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef95a0() {
   return (neuron0x2ee3d90()*0.311993);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef95e0() {
   return (neuron0x2ee4040()*-0.0496274);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9620() {
   return (neuron0x2ee4380()*-0.892866);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9660() {
   return (neuron0x2ee46c0()*0.0345487);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef96a0() {
   return (neuron0x2ee4a00()*1.70919);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef96e0() {
   return (neuron0x2ee4d40()*0.365729);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9720() {
   return (neuron0x2ee5080()*2.2442);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9760() {
   return (neuron0x2ee53c0()*1.46349);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef97a0() {
   return (neuron0x2ee5700()*0.0592852);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef97e0() {
   return (neuron0x2ee5a40()*-0.681702);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9820() {
   return (neuron0x2ee5d80()*1.03993);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9860() {
   return (neuron0x2ee60c0()*-1.59453);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef98a0() {
   return (neuron0x2ee6400()*2.02546);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef98e0() {
   return (neuron0x2ee6740()*-0.67324);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9920() {
   return (neuron0x2ee6a80()*1.59273);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9960() {
   return (neuron0x2ee6dc0()*-0.059148);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef93f0() {
   return (neuron0x2ee7100()*0.452443);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9430() {
   return (neuron0x2ee7660()*0.784838);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9ab0() {
   return (neuron0x2ee7880()*-0.309007);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9af0() {
   return (neuron0x2ee7bc0()*0.937789);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9b30() {
   return (neuron0x2ee7f00()*0.549231);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9b70() {
   return (neuron0x2ee8240()*2.60136);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9bb0() {
   return (neuron0x2ee8580()*0.788294);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9bf0() {
   return (neuron0x2ee88c0()*-0.117989);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9f70() {
   return (neuron0x2ee3d90()*0.00113481);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9fb0() {
   return (neuron0x2ee4040()*-11.2203);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9ff0() {
   return (neuron0x2ee4380()*0.403514);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa030() {
   return (neuron0x2ee46c0()*-0.0226669);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa070() {
   return (neuron0x2ee4a00()*0.0214623);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa0b0() {
   return (neuron0x2ee4d40()*-0.0468853);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa0f0() {
   return (neuron0x2ee5080()*-0.00749243);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa130() {
   return (neuron0x2ee53c0()*0.0427839);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa170() {
   return (neuron0x2ee5700()*-0.00577345);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa1b0() {
   return (neuron0x2ee5a40()*-0.0405962);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa1f0() {
   return (neuron0x2ee5d80()*-0.0131915);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa230() {
   return (neuron0x2ee60c0()*-2.99344);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa270() {
   return (neuron0x2ee6400()*-0.0114146);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa2b0() {
   return (neuron0x2ee6740()*0.0256733);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa2f0() {
   return (neuron0x2ee6a80()*0.0049643);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa330() {
   return (neuron0x2ee6dc0()*0.0802209);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9dc0() {
   return (neuron0x2ee7100()*-0.00665565);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9e00() {
   return (neuron0x2ee7660()*0.060553);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa480() {
   return (neuron0x2ee7880()*-0.0237384);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa4c0() {
   return (neuron0x2ee7bc0()*0.00168649);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa500() {
   return (neuron0x2ee7f00()*-0.0175135);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa540() {
   return (neuron0x2ee8240()*-0.0386032);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa580() {
   return (neuron0x2ee8580()*0.00380995);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa5c0() {
   return (neuron0x2ee88c0()*2.15176);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c490() {
   return (neuron0x2ee3d90()*-0.00312838);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c4d0() {
   return (neuron0x2ee4040()*10.7693);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c510() {
   return (neuron0x2ee4380()*-0.391764);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c550() {
   return (neuron0x2ee46c0()*0.0231611);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c590() {
   return (neuron0x2ee4a00()*-0.0952379);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c5d0() {
   return (neuron0x2ee4d40()*-0.00106241);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c610() {
   return (neuron0x2ee5080()*-0.0843771);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c650() {
   return (neuron0x2ee53c0()*-0.0140181);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c690() {
   return (neuron0x2ee5700()*0.0054216);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c6d0() {
   return (neuron0x2ee5a40()*0.0829868);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c710() {
   return (neuron0x2ee5d80()*-0.00261147);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c750() {
   return (neuron0x2ee60c0()*4.70778);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c790() {
   return (neuron0x2ee6400()*0.0884146);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c7d0() {
   return (neuron0x2ee6740()*-0.106524);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c810() {
   return (neuron0x2ee6a80()*-0.0241896);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c850() {
   return (neuron0x2ee6dc0()*-0.0765053);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa600() {
   return (neuron0x2ee7100()*-0.00792112);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa640() {
   return (neuron0x2ee7660()*-0.0476745);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c9a0() {
   return (neuron0x2ee7880()*0.0486389);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c9e0() {
   return (neuron0x2ee7bc0()*-0.0422739);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0ca20() {
   return (neuron0x2ee7f00()*-0.0594574);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0ca60() {
   return (neuron0x2ee8240()*0.067528);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0caa0() {
   return (neuron0x2ee8580()*-0.0661209);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0cae0() {
   return (neuron0x2ee88c0()*-2.27951);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0ce60() {
   return (neuron0x2ee3d90()*0.378265);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0cea0() {
   return (neuron0x2ee4040()*-1.52559);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0cee0() {
   return (neuron0x2ee4380()*-1.98286);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0cf20() {
   return (neuron0x2ee46c0()*-0.318863);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0cf60() {
   return (neuron0x2ee4a00()*0.233426);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0cfa0() {
   return (neuron0x2ee4d40()*0.0509088);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0cfe0() {
   return (neuron0x2ee5080()*-0.793677);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d020() {
   return (neuron0x2ee53c0()*0.385098);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d060() {
   return (neuron0x2ee5700()*-0.377189);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d0a0() {
   return (neuron0x2ee5a40()*0.439568);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d0e0() {
   return (neuron0x2ee5d80()*-0.211125);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d120() {
   return (neuron0x2ee60c0()*1.22766);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d160() {
   return (neuron0x2ee6400()*-0.873696);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d1a0() {
   return (neuron0x2ee6740()*0.422147);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d1e0() {
   return (neuron0x2ee6a80()*-0.62652);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d220() {
   return (neuron0x2ee6dc0()*0.386015);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0ccb0() {
   return (neuron0x2ee7100()*-0.659017);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0ccf0() {
   return (neuron0x2ee7660()*-0.373408);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d370() {
   return (neuron0x2ee7880()*0.522741);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d3b0() {
   return (neuron0x2ee7bc0()*0.933618);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d3f0() {
   return (neuron0x2ee7f00()*0.255292);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d430() {
   return (neuron0x2ee8240()*-0.128655);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d470() {
   return (neuron0x2ee8580()*-0.172723);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d4b0() {
   return (neuron0x2ee88c0()*0.0230408);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d830() {
   return (neuron0x2ee3d90()*-0.212182);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d870() {
   return (neuron0x2ee4040()*3.81943);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d8b0() {
   return (neuron0x2ee4380()*0.633251);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d8f0() {
   return (neuron0x2ee46c0()*0.0399363);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d930() {
   return (neuron0x2ee4a00()*-0.0312427);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d970() {
   return (neuron0x2ee4d40()*0.0194822);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d9b0() {
   return (neuron0x2ee5080()*-0.117141);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d9f0() {
   return (neuron0x2ee53c0()*-0.167634);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0da30() {
   return (neuron0x2ee5700()*-0.0937171);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0da70() {
   return (neuron0x2ee5a40()*-0.00336554);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0dab0() {
   return (neuron0x2ee5d80()*-0.0637112);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0daf0() {
   return (neuron0x2ee60c0()*-0.780108);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0db30() {
   return (neuron0x2ee6400()*0.056264);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0db70() {
   return (neuron0x2ee6740()*0.0545346);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0dbb0() {
   return (neuron0x2ee6a80()*-0.0219302);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0dbf0() {
   return (neuron0x2ee6dc0()*0.191719);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d680() {
   return (neuron0x2ee7100()*0.0344368);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d6c0() {
   return (neuron0x2ee7660()*-0.0968485);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0dd40() {
   return (neuron0x2ee7880()*-0.00584905);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0dd80() {
   return (neuron0x2ee7bc0()*-0.0878305);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0ddc0() {
   return (neuron0x2ee7f00()*-0.105195);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0de00() {
   return (neuron0x2ee8240()*0.0815245);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0de40() {
   return (neuron0x2ee8580()*0.0106779);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0de80() {
   return (neuron0x2ee88c0()*2.38568);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e200() {
   return (neuron0x2ee3d90()*-0.00200678);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e240() {
   return (neuron0x2ee4040()*0.00951137);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e280() {
   return (neuron0x2ee4380()*0.807736);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e2c0() {
   return (neuron0x2ee46c0()*0.0187408);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e300() {
   return (neuron0x2ee4a00()*0.00510858);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e340() {
   return (neuron0x2ee4d40()*0.0160734);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e380() {
   return (neuron0x2ee5080()*-0.00205935);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e3c0() {
   return (neuron0x2ee53c0()*-0.00728369);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e400() {
   return (neuron0x2ee5700()*-0.00957977);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e440() {
   return (neuron0x2ee5a40()*-0.00206994);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e480() {
   return (neuron0x2ee5d80()*-0.0143389);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e4c0() {
   return (neuron0x2ee60c0()*0.0327472);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e500() {
   return (neuron0x2ee6400()*-0.00165158);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e540() {
   return (neuron0x2ee6740()*0.00201062);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e580() {
   return (neuron0x2ee6a80()*0.0128718);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e5c0() {
   return (neuron0x2ee6dc0()*0.006702);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e050() {
   return (neuron0x2ee7100()*-0.0112283);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e090() {
   return (neuron0x2ee7660()*0.011781);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e710() {
   return (neuron0x2ee7880()*-0.0090339);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e750() {
   return (neuron0x2ee7bc0()*-0.00915858);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e790() {
   return (neuron0x2ee7f00()*-0.00960354);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e7d0() {
   return (neuron0x2ee8240()*0.000217015);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e810() {
   return (neuron0x2ee8580()*0.00909139);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e850() {
   return (neuron0x2ee88c0()*0.28394);
}

double NNfunction_nn_chi2_charge2p::synapse0x2cae630() {
   return (neuron0x2ee8d30()*1.42494);
}

double NNfunction_nn_chi2_charge2p::synapse0x2cae670() {
   return (neuron0x2ee9680()*-1.04486);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb1f0() {
   return (neuron0x2eea160()*0.634377);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeb230() {
   return (neuron0x2ee9c00()*1.85214);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeccd0() {
   return (neuron0x2eeaf40()*-1.78841);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eecd10() {
   return (neuron0x2eeca20()*3.03537);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eedaa0() {
   return (neuron0x2eed7f0()*-2.84344);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eedae0() {
   return (neuron0x2eee1c0()*-1.96606);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee470() {
   return (neuron0x2eeeb90()*-1.77619);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eee4b0() {
   return (neuron0x2eef670()*-1.32669);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeee40() {
   return (neuron0x2ef0040()*-3.70571);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eeee80() {
   return (neuron0x2eed120()*-0.220982);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef920() {
   return (neuron0x2ef1bf0()*-0.566825);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eef960() {
   return (neuron0x2ef25c0()*-0.582197);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef02f0() {
   return (neuron0x2ef2f90()*-0.428085);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0330() {
   return (neuron0x2ef3960()*-0.206629);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed3d0() {
   return (neuron0x2ef5770()*1.17239);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eed410() {
   return (neuron0x2ef5a50()*-0.983795);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1ea0() {
   return (neuron0x2ef6420()*0.119249);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef1ee0() {
   return (neuron0x2ef6df0()*-0.288027);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef2870() {
   return (neuron0x2ef77c0()*1.50737);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef28b0() {
   return (neuron0x2ef8190()*-0.780251);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3240() {
   return (neuron0x2ef0ce0()*-0.666938);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3280() {
   return (neuron0x2ef16b0()*-0.244508);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3c10() {
   return (neuron0x2efaf20()*0.450492);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef3c50() {
   return (neuron0x2efb8f0()*1.14675);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee6ca0() {
   return (neuron0x2efc2c0()*-1.14882);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee6ce0() {
   return (neuron0x2efcc90()*-0.212137);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5d00() {
   return (neuron0x2efd660()*2.40924);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef5d40() {
   return (neuron0x2efe030()*-0.424303);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef66d0() {
   return (neuron0x2efea00()*-0.366026);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef6710() {
   return (neuron0x2eff3d0()*3.04304);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef70a0() {
   return (neuron0x2ef5460()*0.474779);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef70e0() {
   return (neuron0x2f01fb0()*-1.07593);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7a70() {
   return (neuron0x2f02980()*0.388231);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef7ab0() {
   return (neuron0x2f03350()*-1.15765);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8440() {
   return (neuron0x2f03d20()*-4.95204);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8480() {
   return (neuron0x2f046f0()*-1.22301);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0f90() {
   return (neuron0x2f050c0()*-1.5256);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef0fd0() {
   return (neuron0x2f05a90()*0.545738);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa840() {
   return (neuron0x2f06460()*-1.69392);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efa880() {
   return (neuron0x2f07040()*-0.394775);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb1d0() {
   return (neuron0x2f07a10()*-0.897951);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efb210() {
   return (neuron0x2ef8890()*-0.83575);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efbba0() {
   return (neuron0x2ef9260()*-0.537515);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efbbe0() {
   return (neuron0x2ef9c30()*-4.80943);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc570() {
   return (neuron0x2f0c270()*-3.18418);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efc5b0() {
   return (neuron0x2f0cb20()*-0.721687);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efcf40() {
   return (neuron0x2f0d4f0()*0.569078);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efcf80() {
   return (neuron0x2f0dec0()*-1.77414);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eff680() {
   return (neuron0x2ee8d30()*-0.377285);
}

double NNfunction_nn_chi2_charge2p::synapse0x2eff6c0() {
   return (neuron0x2ee9680()*0.0503424);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef4c40() {
   return (neuron0x2eea160()*-0.96214);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef4c80() {
   return (neuron0x2ee9c00()*-0.580815);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02260() {
   return (neuron0x2eeaf40()*0.707979);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f022a0() {
   return (neuron0x2eeca20()*0.473411);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02c30() {
   return (neuron0x2eed7f0()*0.427564);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f02c70() {
   return (neuron0x2eee1c0()*-4.11413);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03600() {
   return (neuron0x2eeeb90()*-0.526953);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03640() {
   return (neuron0x2eef670()*-0.0730205);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f03fd0() {
   return (neuron0x2ef0040()*1.01042);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f04010() {
   return (neuron0x2eed120()*-0.200781);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f049a0() {
   return (neuron0x2ef1bf0()*0.205323);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f049e0() {
   return (neuron0x2ef25c0()*0.324424);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05370() {
   return (neuron0x2ef2f90()*-2.93473);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f053b0() {
   return (neuron0x2ef3960()*0.196459);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05d40() {
   return (neuron0x2ef5770()*-1.49244);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f05d80() {
   return (neuron0x2ef5a50()*0.114788);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06710() {
   return (neuron0x2ef6420()*0.240942);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f06750() {
   return (neuron0x2ef6df0()*-0.573148);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f072f0() {
   return (neuron0x2ef77c0()*-1.27968);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07330() {
   return (neuron0x2ef8190()*-0.337243);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07cc0() {
   return (neuron0x2ef0ce0()*1.15897);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f07d00() {
   return (neuron0x2ef16b0()*0.164543);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8b40() {
   return (neuron0x2efaf20()*0.192326);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef8b80() {
   return (neuron0x2efb8f0()*0.193782);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9510() {
   return (neuron0x2efc2c0()*0.127851);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9550() {
   return (neuron0x2efcc90()*1.34921);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9ee0() {
   return (neuron0x2efd660()*1.42935);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ef9f20() {
   return (neuron0x2efe030()*0.729298);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c400() {
   return (neuron0x2efea00()*-0.90713);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0c440() {
   return (neuron0x2eff3d0()*1.46705);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0cdd0() {
   return (neuron0x2ef5460()*4.97248);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0ce10() {
   return (neuron0x2f01fb0()*-1.15808);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d7a0() {
   return (neuron0x2f02980()*-0.000216257);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0d7e0() {
   return (neuron0x2f03350()*-0.122228);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e170() {
   return (neuron0x2f03d20()*2.69162);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e1b0() {
   return (neuron0x2f046f0()*0.999086);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee8fe0() {
   return (neuron0x2f050c0()*5.60472);
}

double NNfunction_nn_chi2_charge2p::synapse0x2ee9020() {
   return (neuron0x2f05a90()*-0.010507);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd910() {
   return (neuron0x2f06460()*0.186392);
}

double NNfunction_nn_chi2_charge2p::synapse0x2efd950() {
   return (neuron0x2f07040()*0.266219);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e890() {
   return (neuron0x2f07a10()*2.79692);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e8d0() {
   return (neuron0x2ef8890()*-0.328768);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e910() {
   return (neuron0x2ef9260()*0.136761);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f0e950() {
   return (neuron0x2ef9c30()*3.14886);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15800() {
   return (neuron0x2f0c270()*1.74329);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15840() {
   return (neuron0x2f0cb20()*0.441154);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15880() {
   return (neuron0x2f0d4f0()*-0.0772008);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f158c0() {
   return (neuron0x2f0dec0()*1.33575);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15c40() {
   return (neuron0x2ee8d30()*0.759806);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15c80() {
   return (neuron0x2ee9680()*0.196216);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15cc0() {
   return (neuron0x2eea160()*-0.339101);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15d00() {
   return (neuron0x2ee9c00()*-0.352945);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15d40() {
   return (neuron0x2eeaf40()*-0.980045);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15d80() {
   return (neuron0x2eeca20()*-0.245771);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15dc0() {
   return (neuron0x2eed7f0()*-0.211541);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15e00() {
   return (neuron0x2eee1c0()*0.0676895);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15e40() {
   return (neuron0x2eeeb90()*0.459117);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15e80() {
   return (neuron0x2eef670()*0.787991);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15ec0() {
   return (neuron0x2ef0040()*2.57402);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15f00() {
   return (neuron0x2eed120()*0.497083);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15f40() {
   return (neuron0x2ef1bf0()*-0.131151);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15f80() {
   return (neuron0x2ef25c0()*2.28452);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15fc0() {
   return (neuron0x2ef2f90()*0.17284);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16000() {
   return (neuron0x2ef3960()*-0.151256);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15a90() {
   return (neuron0x2ef5770()*0.303913);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f15ad0() {
   return (neuron0x2ef5a50()*-0.167641);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16150() {
   return (neuron0x2ef6420()*-0.416701);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16190() {
   return (neuron0x2ef6df0()*-2.04618);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f161d0() {
   return (neuron0x2ef77c0()*-0.9562);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16210() {
   return (neuron0x2ef8190()*-0.190642);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16250() {
   return (neuron0x2ef0ce0()*-0.459152);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16290() {
   return (neuron0x2ef16b0()*-1.14471);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f162d0() {
   return (neuron0x2efaf20()*0.00856596);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16310() {
   return (neuron0x2efb8f0()*0.0759038);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16350() {
   return (neuron0x2efc2c0()*0.0929304);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16390() {
   return (neuron0x2efcc90()*-0.681631);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f163d0() {
   return (neuron0x2efd660()*0.318116);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16410() {
   return (neuron0x2efe030()*0.280845);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16450() {
   return (neuron0x2efea00()*-0.284796);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16490() {
   return (neuron0x2eff3d0()*-1.55657);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16040() {
   return (neuron0x2ef5460()*-1.31694);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16080() {
   return (neuron0x2f01fb0()*-1.22145);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f160c0() {
   return (neuron0x2f02980()*0.78848);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16100() {
   return (neuron0x2f03350()*-0.0863588);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f166e0() {
   return (neuron0x2f03d20()*-1.12816);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16720() {
   return (neuron0x2f046f0()*-0.599484);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16760() {
   return (neuron0x2f050c0()*-1.33209);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f167a0() {
   return (neuron0x2f05a90()*-0.0783556);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f167e0() {
   return (neuron0x2f06460()*0.301095);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16820() {
   return (neuron0x2f07040()*1.61173);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16860() {
   return (neuron0x2f07a10()*-1.76388);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f168a0() {
   return (neuron0x2ef8890()*-0.0594199);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f168e0() {
   return (neuron0x2ef9260()*-0.0681525);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16920() {
   return (neuron0x2ef9c30()*0.0634114);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16960() {
   return (neuron0x2f0c270()*-0.122022);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f169a0() {
   return (neuron0x2f0cb20()*0.00554116);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f169e0() {
   return (neuron0x2f0d4f0()*0.0441446);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16a20() {
   return (neuron0x2f0dec0()*-0.976873);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16da0() {
   return (neuron0x2ee8d30()*0.00790982);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16de0() {
   return (neuron0x2ee9680()*0.00673779);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16e20() {
   return (neuron0x2eea160()*-0.644998);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16e60() {
   return (neuron0x2ee9c00()*-0.0151207);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16ea0() {
   return (neuron0x2eeaf40()*-0.0208157);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16ee0() {
   return (neuron0x2eeca20()*0.0378071);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16f20() {
   return (neuron0x2eed7f0()*0.00682088);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16f60() {
   return (neuron0x2eee1c0()*0.761451);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16fa0() {
   return (neuron0x2eeeb90()*0.000123671);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16fe0() {
   return (neuron0x2eef670()*0.0234979);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17020() {
   return (neuron0x2ef0040()*0.00346884);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17060() {
   return (neuron0x2eed120()*-0.00851105);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f170a0() {
   return (neuron0x2ef1bf0()*0.00449132);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f170e0() {
   return (neuron0x2ef25c0()*0.00238982);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17120() {
   return (neuron0x2ef2f90()*-1.08502);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17160() {
   return (neuron0x2ef3960()*-0.000731874);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16bf0() {
   return (neuron0x2ef5770()*-0.737994);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f16c30() {
   return (neuron0x2ef5a50()*0.00436976);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f172b0() {
   return (neuron0x2ef6420()*-1.25942);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f172f0() {
   return (neuron0x2ef6df0()*-0.0152611);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17330() {
   return (neuron0x2ef77c0()*-0.00463589);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17370() {
   return (neuron0x2ef8190()*0.0046926);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f173b0() {
   return (neuron0x2ef0ce0()*2.69485);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f173f0() {
   return (neuron0x2ef16b0()*-0.0151197);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17430() {
   return (neuron0x2efaf20()*-0.0010856);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17470() {
   return (neuron0x2efb8f0()*-0.00827112);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f174b0() {
   return (neuron0x2efc2c0()*0.00713962);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f174f0() {
   return (neuron0x2efcc90()*0.350472);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17530() {
   return (neuron0x2efd660()*-1.05082);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17570() {
   return (neuron0x2efe030()*-0.542039);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f175b0() {
   return (neuron0x2efea00()*-0.194995);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f175f0() {
   return (neuron0x2eff3d0()*0.304069);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f171a0() {
   return (neuron0x2ef5460()*0.0699317);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f171e0() {
   return (neuron0x2f01fb0()*0.258322);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17220() {
   return (neuron0x2f02980()*0.00515157);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17260() {
   return (neuron0x2f03350()*0.00608524);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17840() {
   return (neuron0x2f03d20()*-0.0148784);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17880() {
   return (neuron0x2f046f0()*-0.014528);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f178c0() {
   return (neuron0x2f050c0()*-0.0382128);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17900() {
   return (neuron0x2f05a90()*0.00381704);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17940() {
   return (neuron0x2f06460()*0.828096);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17980() {
   return (neuron0x2f07040()*0.0165769);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f179c0() {
   return (neuron0x2f07a10()*0.0706039);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17a00() {
   return (neuron0x2ef8890()*-5.17963e-05);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17a40() {
   return (neuron0x2ef9260()*0.00622503);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17a80() {
   return (neuron0x2ef9c30()*0.047703);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17ac0() {
   return (neuron0x2f0c270()*0.0535336);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17b00() {
   return (neuron0x2f0cb20()*0.00825966);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17b40() {
   return (neuron0x2f0d4f0()*0.0191061);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17b80() {
   return (neuron0x2f0dec0()*1.95176);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17f00() {
   return (neuron0x2ee8d30()*1.60717);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17f40() {
   return (neuron0x2ee9680()*0.238913);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17f80() {
   return (neuron0x2eea160()*0.750178);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17fc0() {
   return (neuron0x2ee9c00()*0.565096);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18000() {
   return (neuron0x2eeaf40()*-1.77783);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18040() {
   return (neuron0x2eeca20()*2.25887);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18080() {
   return (neuron0x2eed7f0()*1.08075);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f180c0() {
   return (neuron0x2eee1c0()*-3.94711);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18100() {
   return (neuron0x2eeeb90()*-1.15781);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18140() {
   return (neuron0x2eef670()*0.445685);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18180() {
   return (neuron0x2ef0040()*-1.27166);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f181c0() {
   return (neuron0x2eed120()*0.925689);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18200() {
   return (neuron0x2ef1bf0()*-0.337478);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18240() {
   return (neuron0x2ef25c0()*4.64872);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18280() {
   return (neuron0x2ef2f90()*-0.0316681);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f182c0() {
   return (neuron0x2ef3960()*-0.257022);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17d50() {
   return (neuron0x2ef5770()*-2.52463);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f17d90() {
   return (neuron0x2ef5a50()*-0.410129);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18410() {
   return (neuron0x2ef6420()*-2.48464);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18450() {
   return (neuron0x2ef6df0()*-0.129366);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18490() {
   return (neuron0x2ef77c0()*5.17115);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f184d0() {
   return (neuron0x2ef8190()*-0.187792);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18510() {
   return (neuron0x2ef0ce0()*-0.631372);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18550() {
   return (neuron0x2ef16b0()*2.24345);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18590() {
   return (neuron0x2efaf20()*0.226038);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f185d0() {
   return (neuron0x2efb8f0()*0.590039);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18610() {
   return (neuron0x2efc2c0()*0.0472489);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18650() {
   return (neuron0x2efcc90()*1.03418);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18690() {
   return (neuron0x2efd660()*-1.80587);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f186d0() {
   return (neuron0x2efe030()*1.4398);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18710() {
   return (neuron0x2efea00()*-1.35446);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18750() {
   return (neuron0x2eff3d0()*2.81195);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18300() {
   return (neuron0x2ef5460()*-3.04719);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18340() {
   return (neuron0x2f01fb0()*1.30182);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18380() {
   return (neuron0x2f02980()*3.2228);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f183c0() {
   return (neuron0x2f03350()*-0.481127);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f189a0() {
   return (neuron0x2f03d20()*-4.68419);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f189e0() {
   return (neuron0x2f046f0()*0.884877);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18a20() {
   return (neuron0x2f050c0()*1.90002);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18a60() {
   return (neuron0x2f05a90()*0.321167);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18aa0() {
   return (neuron0x2f06460()*-0.318779);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18ae0() {
   return (neuron0x2f07040()*-0.10123);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18b20() {
   return (neuron0x2f07a10()*-6.09353);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18b60() {
   return (neuron0x2ef8890()*-0.502291);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18ba0() {
   return (neuron0x2ef9260()*-0.0510664);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18be0() {
   return (neuron0x2ef9c30()*-5.33486);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18c20() {
   return (neuron0x2f0c270()*-1.82515);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18c60() {
   return (neuron0x2f0cb20()*-0.390464);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18ca0() {
   return (neuron0x2f0d4f0()*-3.55662);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18ce0() {
   return (neuron0x2f0dec0()*-0.373487);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18f40() {
   return (neuron0x2f150c0()*-5.0672);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18f80() {
   return (neuron0x2f15460()*1.74643);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f18fc0() {
   return (neuron0x2f15900()*1.26457);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f19000() {
   return (neuron0x2f16a60()*-10.1375);
}

double NNfunction_nn_chi2_charge2p::synapse0x2f19040() {
   return (neuron0x2f17bc0()*-7.57563);
}

