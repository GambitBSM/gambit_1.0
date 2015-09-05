#include "NNfunction_ns_chi01_uL.h"
#include <cmath>

double NNfunction_ns_chi01_uL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.1113)/15.1304;
   input1 = (in1 - 14.0808)/1010.47;
   input2 = (in2 - 491.965)/547.064;
   input3 = (in3 - 88.0885)/761.931;
   input4 = (in4 - 931.902)/882.119;
   input5 = (in5 - 784.425)/860.476;
   input6 = (in6 - 784.162)/857.599;
   input7 = (in7 - 797.654)/844.896;
   input8 = (in8 - 802.026)/889.891;
   input9 = (in9 - 791.736)/876.424;
   input10 = (in10 - 836.46)/887.017;
   input11 = (in11 - 382.048)/311.2;
   input12 = (in12 - 701.98)/769.602;
   input13 = (in13 - 505.697)/458.818;
   input14 = (in14 - 690.851)/718.044;
   input15 = (in15 - 697.4)/722.543;
   input16 = (in16 - 501.224)/492.641;
   input17 = (in17 - 727.022)/802.25;
   input18 = (in18 - 728.212)/803.889;
   input19 = (in19 - 753.569)/782.318;
   input20 = (in20 - -85.2098)/463.486;
   input21 = (in21 - -107.424)/1060.37;
   input22 = (in22 - -0.645657)/1086.32;
   input23 = (in23 - -133.193)/587.097;
   switch(index) {
     case 0:
         return neuron0x2417ac0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi01_uL::Value(int index, double* input) {
   input0 = (input[0] - 23.1113)/15.1304;
   input1 = (input[1] - 14.0808)/1010.47;
   input2 = (input[2] - 491.965)/547.064;
   input3 = (input[3] - 88.0885)/761.931;
   input4 = (input[4] - 931.902)/882.119;
   input5 = (input[5] - 784.425)/860.476;
   input6 = (input[6] - 784.162)/857.599;
   input7 = (input[7] - 797.654)/844.896;
   input8 = (input[8] - 802.026)/889.891;
   input9 = (input[9] - 791.736)/876.424;
   input10 = (input[10] - 836.46)/887.017;
   input11 = (input[11] - 382.048)/311.2;
   input12 = (input[12] - 701.98)/769.602;
   input13 = (input[13] - 505.697)/458.818;
   input14 = (input[14] - 690.851)/718.044;
   input15 = (input[15] - 697.4)/722.543;
   input16 = (input[16] - 501.224)/492.641;
   input17 = (input[17] - 727.022)/802.25;
   input18 = (input[18] - 728.212)/803.889;
   input19 = (input[19] - 753.569)/782.318;
   input20 = (input[20] - -85.2098)/463.486;
   input21 = (input[21] - -107.424)/1060.37;
   input22 = (input[22] - -0.645657)/1086.32;
   input23 = (input[23] - -133.193)/587.097;
   switch(index) {
     case 0:
         return neuron0x2417ac0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi01_uL::neuron0x23e3c80() {
   return input0;
}

double NNfunction_ns_chi01_uL::neuron0x23e3f30() {
   return input1;
}

double NNfunction_ns_chi01_uL::neuron0x23e4270() {
   return input2;
}

double NNfunction_ns_chi01_uL::neuron0x23e45b0() {
   return input3;
}

double NNfunction_ns_chi01_uL::neuron0x23e48f0() {
   return input4;
}

double NNfunction_ns_chi01_uL::neuron0x23e4c30() {
   return input5;
}

double NNfunction_ns_chi01_uL::neuron0x23e4f70() {
   return input6;
}

double NNfunction_ns_chi01_uL::neuron0x23e52b0() {
   return input7;
}

double NNfunction_ns_chi01_uL::neuron0x23e55f0() {
   return input8;
}

double NNfunction_ns_chi01_uL::neuron0x23e5930() {
   return input9;
}

double NNfunction_ns_chi01_uL::neuron0x23e5c70() {
   return input10;
}

double NNfunction_ns_chi01_uL::neuron0x23e5fb0() {
   return input11;
}

double NNfunction_ns_chi01_uL::neuron0x23e62f0() {
   return input12;
}

double NNfunction_ns_chi01_uL::neuron0x23e6630() {
   return input13;
}

double NNfunction_ns_chi01_uL::neuron0x23e6970() {
   return input14;
}

double NNfunction_ns_chi01_uL::neuron0x23e6cb0() {
   return input15;
}

double NNfunction_ns_chi01_uL::neuron0x23e6ff0() {
   return input16;
}

double NNfunction_ns_chi01_uL::neuron0x23e7550() {
   return input17;
}

double NNfunction_ns_chi01_uL::neuron0x23e7770() {
   return input18;
}

double NNfunction_ns_chi01_uL::neuron0x23e7ab0() {
   return input19;
}

double NNfunction_ns_chi01_uL::neuron0x23e7df0() {
   return input20;
}

double NNfunction_ns_chi01_uL::neuron0x23e8130() {
   return input21;
}

double NNfunction_ns_chi01_uL::neuron0x23e8470() {
   return input22;
}

double NNfunction_ns_chi01_uL::neuron0x23e87b0() {
   return input23;
}

double NNfunction_ns_chi01_uL::input0x23e8c20() {
   double input = -0.245065;
   input += synapse0x23e3c00();
   input += synapse0x23e3c40();
   input += synapse0x23e8ed0();
   input += synapse0x23e8f10();
   input += synapse0x23e8f50();
   input += synapse0x23e8f90();
   input += synapse0x23e8fd0();
   input += synapse0x23e9010();
   input += synapse0x23e9050();
   input += synapse0x23e9090();
   input += synapse0x23e90d0();
   input += synapse0x23e9110();
   input += synapse0x23e9150();
   input += synapse0x23e9190();
   input += synapse0x23e91d0();
   input += synapse0x23e9210();
   input += synapse0x23e3b70();
   input += synapse0x23e3bb0();
   input += synapse0x219ed60();
   input += synapse0x219eda0();
   input += synapse0x23e9470();
   input += synapse0x23e94b0();
   input += synapse0x23e94f0();
   input += synapse0x23e9530();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23e8c20() {
   double input = input0x23e8c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23e9570() {
   double input = -0.725059;
   input += synapse0x23e98b0();
   input += synapse0x23e98f0();
   input += synapse0x23e9930();
   input += synapse0x23e9970();
   input += synapse0x23e99b0();
   input += synapse0x23e99f0();
   input += synapse0x23e9a30();
   input += synapse0x23e9a70();
   input += synapse0x23e9ab0();
   input += synapse0x23e9360();
   input += synapse0x23e93a0();
   input += synapse0x23e93e0();
   input += synapse0x23e9420();
   input += synapse0x23e9d00();
   input += synapse0x23e9d40();
   input += synapse0x23e9d80();
   input += synapse0x23e9700();
   input += synapse0x23e9740();
   input += synapse0x23e9ed0();
   input += synapse0x23e9f10();
   input += synapse0x23e9f50();
   input += synapse0x23e9f90();
   input += synapse0x23e9fd0();
   input += synapse0x23ea010();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23e9570() {
   double input = input0x23e9570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23ea050() {
   double input = -1.05945;
   input += synapse0x23ea390();
   input += synapse0x23ea3d0();
   input += synapse0x23ea410();
   input += synapse0x23ea450();
   input += synapse0x23ea490();
   input += synapse0x23ea4d0();
   input += synapse0x23ea510();
   input += synapse0x23ea550();
   input += synapse0x23ea590();
   input += synapse0x23ea5d0();
   input += synapse0x23ea610();
   input += synapse0x23ea650();
   input += synapse0x23ea690();
   input += synapse0x23ea6d0();
   input += synapse0x23ea710();
   input += synapse0x23ea750();
   input += synapse0x23ea1e0();
   input += synapse0x23ea220();
   input += synapse0x23d2cf0();
   input += synapse0x21acc40();
   input += synapse0x21acc80();
   input += synapse0x22c8190();
   input += synapse0x22c81d0();
   input += synapse0x23e39e0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23ea050() {
   double input = input0x23ea050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x21ad3a0() {
   double input = -0.542591;
   input += synapse0x21ad530();
   input += synapse0x23e9c10();
   input += synapse0x23e9c50();
   input += synapse0x23e9c90();
   input += synapse0x23ea8a0();
   input += synapse0x23ea8e0();
   input += synapse0x23ea920();
   input += synapse0x23ea960();
   input += synapse0x23ea9a0();
   input += synapse0x23ea9e0();
   input += synapse0x23eaa20();
   input += synapse0x23eaa60();
   input += synapse0x23eaaa0();
   input += synapse0x23eaae0();
   input += synapse0x23eab20();
   input += synapse0x23eab60();
   input += synapse0x23e3a20();
   input += synapse0x23e3a60();
   input += synapse0x23e3aa0();
   input += synapse0x23eacb0();
   input += synapse0x23eacf0();
   input += synapse0x23ead30();
   input += synapse0x23ead70();
   input += synapse0x23eadb0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x21ad3a0() {
   double input = input0x21ad3a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23eadf0() {
   double input = -0.894384;
   input += synapse0x23eb130();
   input += synapse0x23eb170();
   input += synapse0x23eb1b0();
   input += synapse0x23eb1f0();
   input += synapse0x23eb230();
   input += synapse0x23eb270();
   input += synapse0x23eb2b0();
   input += synapse0x23eb2f0();
   input += synapse0x23eb330();
   input += synapse0x23eb370();
   input += synapse0x23eb3b0();
   input += synapse0x23eb3f0();
   input += synapse0x23eb430();
   input += synapse0x23eb470();
   input += synapse0x23eb4b0();
   input += synapse0x23eb4f0();
   input += synapse0x23eaf80();
   input += synapse0x23eafc0();
   input += synapse0x23eb640();
   input += synapse0x23eb680();
   input += synapse0x23eb6c0();
   input += synapse0x23eb700();
   input += synapse0x23eb740();
   input += synapse0x23eb780();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23eadf0() {
   double input = input0x23eadf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23eb7c0() {
   double input = 0.269431;
   input += synapse0x23ebb00();
   input += synapse0x23ebb40();
   input += synapse0x23ebb80();
   input += synapse0x23ebbc0();
   input += synapse0x23ebc00();
   input += synapse0x23ebc40();
   input += synapse0x23ebc80();
   input += synapse0x23ebcc0();
   input += synapse0x23ebd00();
   input += synapse0x21acf90();
   input += synapse0x21acfd0();
   input += synapse0x21ad010();
   input += synapse0x21ad050();
   input += synapse0x21ad090();
   input += synapse0x21ad0d0();
   input += synapse0x21ad110();
   input += synapse0x23eb950();
   input += synapse0x23eb990();
   input += synapse0x21ad260();
   input += synapse0x21ad2a0();
   input += synapse0x21ad2e0();
   input += synapse0x21ad320();
   input += synapse0x21ad360();
   input += synapse0x23ec550();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23eb7c0() {
   double input = input0x23eb7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23ec590() {
   double input = 0.852531;
   input += synapse0x23ec8d0();
   input += synapse0x23ec910();
   input += synapse0x23ec950();
   input += synapse0x23ec990();
   input += synapse0x23ec9d0();
   input += synapse0x23eca10();
   input += synapse0x23eca50();
   input += synapse0x23eca90();
   input += synapse0x23ecad0();
   input += synapse0x23ecb10();
   input += synapse0x23ecb50();
   input += synapse0x23ecb90();
   input += synapse0x23ecbd0();
   input += synapse0x23ecc10();
   input += synapse0x23ecc50();
   input += synapse0x23ecc90();
   input += synapse0x23ec720();
   input += synapse0x23ec760();
   input += synapse0x23ecde0();
   input += synapse0x23ece20();
   input += synapse0x23ece60();
   input += synapse0x23ecea0();
   input += synapse0x23ecee0();
   input += synapse0x23ecf20();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23ec590() {
   double input = input0x23ec590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23ecf60() {
   double input = 2.4651;
   input += synapse0x23ed2a0();
   input += synapse0x23ed2e0();
   input += synapse0x23ed320();
   input += synapse0x23ed360();
   input += synapse0x23ed3a0();
   input += synapse0x23ed3e0();
   input += synapse0x23ed420();
   input += synapse0x23ed460();
   input += synapse0x23ed4a0();
   input += synapse0x23ed4e0();
   input += synapse0x23ed520();
   input += synapse0x23ed560();
   input += synapse0x23ed5a0();
   input += synapse0x23ed5e0();
   input += synapse0x23ed620();
   input += synapse0x23ed660();
   input += synapse0x23ed0f0();
   input += synapse0x23ed130();
   input += synapse0x23ed7b0();
   input += synapse0x23ed7f0();
   input += synapse0x23ed830();
   input += synapse0x23ed870();
   input += synapse0x23ed8b0();
   input += synapse0x23ed8f0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23ecf60() {
   double input = input0x23ecf60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23ed930() {
   double input = 5.85418;
   input += synapse0x23e7440();
   input += synapse0x23e7480();
   input += synapse0x23e74c0();
   input += synapse0x23e7500();
   input += synapse0x23ede80();
   input += synapse0x23edec0();
   input += synapse0x23edf00();
   input += synapse0x23edf40();
   input += synapse0x23edf80();
   input += synapse0x23edfc0();
   input += synapse0x23ee000();
   input += synapse0x23ee040();
   input += synapse0x23ee080();
   input += synapse0x23ee0c0();
   input += synapse0x23ee100();
   input += synapse0x23ee140();
   input += synapse0x23edac0();
   input += synapse0x23edb00();
   input += synapse0x23ee290();
   input += synapse0x23ee2d0();
   input += synapse0x23ee310();
   input += synapse0x23ee350();
   input += synapse0x23ee390();
   input += synapse0x23ee3d0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23ed930() {
   double input = input0x23ed930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23ee410() {
   double input = 0.439174;
   input += synapse0x23ee750();
   input += synapse0x23ee790();
   input += synapse0x23ee7d0();
   input += synapse0x23ee810();
   input += synapse0x23ee850();
   input += synapse0x23ee890();
   input += synapse0x23ee8d0();
   input += synapse0x23ee910();
   input += synapse0x23ee950();
   input += synapse0x23ee990();
   input += synapse0x23ee9d0();
   input += synapse0x23eea10();
   input += synapse0x23eea50();
   input += synapse0x23eea90();
   input += synapse0x23eead0();
   input += synapse0x23eeb10();
   input += synapse0x23ee5a0();
   input += synapse0x23ee5e0();
   input += synapse0x23eec60();
   input += synapse0x23eeca0();
   input += synapse0x23eece0();
   input += synapse0x23eed20();
   input += synapse0x23eed60();
   input += synapse0x23eeda0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23ee410() {
   double input = input0x23ee410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23eede0() {
   double input = 1.99147;
   input += synapse0x23ef120();
   input += synapse0x23ef160();
   input += synapse0x23ef1a0();
   input += synapse0x23ef1e0();
   input += synapse0x23ef220();
   input += synapse0x23ef260();
   input += synapse0x23ef2a0();
   input += synapse0x23ef2e0();
   input += synapse0x23ef320();
   input += synapse0x23ef360();
   input += synapse0x23ef3a0();
   input += synapse0x23ef3e0();
   input += synapse0x23ef420();
   input += synapse0x23ef460();
   input += synapse0x23ef4a0();
   input += synapse0x23ef4e0();
   input += synapse0x23eef70();
   input += synapse0x23eefb0();
   input += synapse0x23ebd40();
   input += synapse0x23ebd80();
   input += synapse0x23ebdc0();
   input += synapse0x23ebe00();
   input += synapse0x23ebe40();
   input += synapse0x23ebe80();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23eede0() {
   double input = input0x23eede0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23ebec0() {
   double input = 0.763867;
   input += synapse0x23ec200();
   input += synapse0x23ec240();
   input += synapse0x23ec280();
   input += synapse0x23ec2c0();
   input += synapse0x23ec300();
   input += synapse0x23ec340();
   input += synapse0x23ec380();
   input += synapse0x23ec3c0();
   input += synapse0x23ec400();
   input += synapse0x23ec440();
   input += synapse0x23ec480();
   input += synapse0x23ec4c0();
   input += synapse0x23ec500();
   input += synapse0x23f0640();
   input += synapse0x23f0680();
   input += synapse0x23f06c0();
   input += synapse0x23ec050();
   input += synapse0x23ec090();
   input += synapse0x23f0810();
   input += synapse0x23f0850();
   input += synapse0x23f0890();
   input += synapse0x23f08d0();
   input += synapse0x23f0910();
   input += synapse0x23f0950();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23ebec0() {
   double input = input0x23ebec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23f0990() {
   double input = 0.586637;
   input += synapse0x23f0cd0();
   input += synapse0x23f0d10();
   input += synapse0x23f0d50();
   input += synapse0x23f0d90();
   input += synapse0x23f0dd0();
   input += synapse0x23f0e10();
   input += synapse0x23f0e50();
   input += synapse0x23f0e90();
   input += synapse0x23f0ed0();
   input += synapse0x23f0f10();
   input += synapse0x23f0f50();
   input += synapse0x23f0f90();
   input += synapse0x23f0fd0();
   input += synapse0x23f1010();
   input += synapse0x23f1050();
   input += synapse0x23f1090();
   input += synapse0x23f0b20();
   input += synapse0x23f0b60();
   input += synapse0x23f11e0();
   input += synapse0x23f1220();
   input += synapse0x23f1260();
   input += synapse0x23f12a0();
   input += synapse0x23f12e0();
   input += synapse0x23f1320();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23f0990() {
   double input = input0x23f0990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23f1360() {
   double input = 2.4804;
   input += synapse0x23f16a0();
   input += synapse0x23f16e0();
   input += synapse0x23f1720();
   input += synapse0x23f1760();
   input += synapse0x23f17a0();
   input += synapse0x23f17e0();
   input += synapse0x23f1820();
   input += synapse0x23f1860();
   input += synapse0x23f18a0();
   input += synapse0x23f18e0();
   input += synapse0x23f1920();
   input += synapse0x23f1960();
   input += synapse0x23f19a0();
   input += synapse0x23f19e0();
   input += synapse0x23f1a20();
   input += synapse0x23f1a60();
   input += synapse0x23f14f0();
   input += synapse0x23f1530();
   input += synapse0x23f1bb0();
   input += synapse0x23f1bf0();
   input += synapse0x23f1c30();
   input += synapse0x23f1c70();
   input += synapse0x23f1cb0();
   input += synapse0x23f1cf0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23f1360() {
   double input = input0x23f1360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23f1d30() {
   double input = -0.275683;
   input += synapse0x23f2070();
   input += synapse0x23f20b0();
   input += synapse0x23f20f0();
   input += synapse0x23f2130();
   input += synapse0x23f2170();
   input += synapse0x23f21b0();
   input += synapse0x23f21f0();
   input += synapse0x23f2230();
   input += synapse0x23f2270();
   input += synapse0x23f22b0();
   input += synapse0x23f22f0();
   input += synapse0x23f2330();
   input += synapse0x23f2370();
   input += synapse0x23f23b0();
   input += synapse0x23f23f0();
   input += synapse0x23f2430();
   input += synapse0x23f1ec0();
   input += synapse0x23f1f00();
   input += synapse0x23f2580();
   input += synapse0x23f25c0();
   input += synapse0x23f2600();
   input += synapse0x23f2640();
   input += synapse0x23f2680();
   input += synapse0x23f26c0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23f1d30() {
   double input = input0x23f1d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23f2700() {
   double input = -1.68935;
   input += synapse0x23f2a40();
   input += synapse0x23e3e10();
   input += synapse0x23e3e50();
   input += synapse0x23e4150();
   input += synapse0x23e4190();
   input += synapse0x23e4490();
   input += synapse0x23e44d0();
   input += synapse0x23e47d0();
   input += synapse0x23e4810();
   input += synapse0x23e4b10();
   input += synapse0x23e4b50();
   input += synapse0x23e4e50();
   input += synapse0x23e4e90();
   input += synapse0x23e5190();
   input += synapse0x23e51d0();
   input += synapse0x23e54d0();
   input += synapse0x23e5510();
   input += synapse0x23e5810();
   input += synapse0x23e5850();
   input += synapse0x23e5b50();
   input += synapse0x23e5b90();
   input += synapse0x23e5e90();
   input += synapse0x23e5ed0();
   input += synapse0x23e61d0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23f2700() {
   double input = input0x23f2700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23f4510() {
   double input = -8.2137;
   input += synapse0x23e6210();
   input += synapse0x23e6ed0();
   input += synapse0x23e6f10();
   input += synapse0x23f2890();
   input += synapse0x23f28d0();
   input += synapse0x23e7210();
   input += synapse0x23e7250();
   input += synapse0x23e7990();
   input += synapse0x23e79d0();
   input += synapse0x23e7cd0();
   input += synapse0x23e7d10();
   input += synapse0x23e8010();
   input += synapse0x23e8050();
   input += synapse0x23e8350();
   input += synapse0x23e8390();
   input += synapse0x23e8690();
   input += synapse0x23e86d0();
   input += synapse0x23e89d0();
   input += synapse0x23e8a10();
   input += synapse0x23e6510();
   input += synapse0x23e6550();
   input += synapse0x219e050();
   input += synapse0x219e090();
   input += synapse0x23f47b0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23f4510() {
   double input = input0x23f4510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23f47f0() {
   double input = -2.23085;
   input += synapse0x23f4b30();
   input += synapse0x23f4b70();
   input += synapse0x23f4bb0();
   input += synapse0x23f4bf0();
   input += synapse0x23f4c30();
   input += synapse0x23f4c70();
   input += synapse0x23f4cb0();
   input += synapse0x23f4cf0();
   input += synapse0x23f4d30();
   input += synapse0x23f4d70();
   input += synapse0x23f4db0();
   input += synapse0x23f4df0();
   input += synapse0x23f4e30();
   input += synapse0x23f4e70();
   input += synapse0x23f4eb0();
   input += synapse0x23f4ef0();
   input += synapse0x23f4980();
   input += synapse0x23f49c0();
   input += synapse0x23f5040();
   input += synapse0x23f5080();
   input += synapse0x23f50c0();
   input += synapse0x23f5100();
   input += synapse0x23f5140();
   input += synapse0x23f5180();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23f47f0() {
   double input = input0x23f47f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23f51c0() {
   double input = -2.04428;
   input += synapse0x23f5500();
   input += synapse0x23f5540();
   input += synapse0x23f5580();
   input += synapse0x23f55c0();
   input += synapse0x23f5600();
   input += synapse0x23f5640();
   input += synapse0x23f5680();
   input += synapse0x23f56c0();
   input += synapse0x23f5700();
   input += synapse0x23f5740();
   input += synapse0x23f5780();
   input += synapse0x23f57c0();
   input += synapse0x23f5800();
   input += synapse0x23f5840();
   input += synapse0x23f5880();
   input += synapse0x23f58c0();
   input += synapse0x23f5350();
   input += synapse0x23f5390();
   input += synapse0x23f5a10();
   input += synapse0x23f5a50();
   input += synapse0x23f5a90();
   input += synapse0x23f5ad0();
   input += synapse0x23f5b10();
   input += synapse0x23f5b50();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23f51c0() {
   double input = input0x23f51c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23f5b90() {
   double input = -0.499036;
   input += synapse0x23f5ed0();
   input += synapse0x23f5f10();
   input += synapse0x23f5f50();
   input += synapse0x23f5f90();
   input += synapse0x23f5fd0();
   input += synapse0x23f6010();
   input += synapse0x23f6050();
   input += synapse0x23f6090();
   input += synapse0x23f60d0();
   input += synapse0x23f6110();
   input += synapse0x23f6150();
   input += synapse0x23f6190();
   input += synapse0x23f61d0();
   input += synapse0x23f6210();
   input += synapse0x23f6250();
   input += synapse0x23f6290();
   input += synapse0x23f5d20();
   input += synapse0x23f5d60();
   input += synapse0x23f63e0();
   input += synapse0x23f6420();
   input += synapse0x23f6460();
   input += synapse0x23f64a0();
   input += synapse0x23f64e0();
   input += synapse0x23f6520();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23f5b90() {
   double input = input0x23f5b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23f6560() {
   double input = 2.12214;
   input += synapse0x23f68a0();
   input += synapse0x23f68e0();
   input += synapse0x23f6920();
   input += synapse0x23f6960();
   input += synapse0x23f69a0();
   input += synapse0x23f69e0();
   input += synapse0x23f6a20();
   input += synapse0x23f6a60();
   input += synapse0x23f6aa0();
   input += synapse0x23f6ae0();
   input += synapse0x23f6b20();
   input += synapse0x23f6b60();
   input += synapse0x23f6ba0();
   input += synapse0x23f6be0();
   input += synapse0x23f6c20();
   input += synapse0x23f6c60();
   input += synapse0x23f66f0();
   input += synapse0x23f6730();
   input += synapse0x23f6db0();
   input += synapse0x23f6df0();
   input += synapse0x23f6e30();
   input += synapse0x23f6e70();
   input += synapse0x23f6eb0();
   input += synapse0x23f6ef0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23f6560() {
   double input = input0x23f6560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23f6f30() {
   double input = -0.0149805;
   input += synapse0x23f7270();
   input += synapse0x23f72b0();
   input += synapse0x23f72f0();
   input += synapse0x23f7330();
   input += synapse0x23f7370();
   input += synapse0x23f73b0();
   input += synapse0x23f73f0();
   input += synapse0x23f7430();
   input += synapse0x23f7470();
   input += synapse0x23ef630();
   input += synapse0x23ef670();
   input += synapse0x23ef6b0();
   input += synapse0x23ef6f0();
   input += synapse0x23ef730();
   input += synapse0x23ef770();
   input += synapse0x23ef7b0();
   input += synapse0x23f70c0();
   input += synapse0x23f7100();
   input += synapse0x23ef900();
   input += synapse0x23ef940();
   input += synapse0x23ef980();
   input += synapse0x23ef9c0();
   input += synapse0x23efa00();
   input += synapse0x23efa40();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23f6f30() {
   double input = input0x23f6f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23efa80() {
   double input = -3.27117;
   input += synapse0x23efdc0();
   input += synapse0x23efe00();
   input += synapse0x23efe40();
   input += synapse0x23efe80();
   input += synapse0x23efec0();
   input += synapse0x23eff00();
   input += synapse0x23eff40();
   input += synapse0x23eff80();
   input += synapse0x23effc0();
   input += synapse0x23f0000();
   input += synapse0x23f0040();
   input += synapse0x23f0080();
   input += synapse0x23f00c0();
   input += synapse0x23f0100();
   input += synapse0x23f0140();
   input += synapse0x23f0180();
   input += synapse0x23efc10();
   input += synapse0x23efc50();
   input += synapse0x23f02d0();
   input += synapse0x23f0310();
   input += synapse0x23f0350();
   input += synapse0x23f0390();
   input += synapse0x23f03d0();
   input += synapse0x23f0410();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23efa80() {
   double input = input0x23efa80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23f0450() {
   double input = 0.119592;
   input += synapse0x23f05e0();
   input += synapse0x23f9670();
   input += synapse0x23f96b0();
   input += synapse0x23f96f0();
   input += synapse0x23f9730();
   input += synapse0x23f9770();
   input += synapse0x23f97b0();
   input += synapse0x23f97f0();
   input += synapse0x23f9830();
   input += synapse0x23f9870();
   input += synapse0x23f98b0();
   input += synapse0x23f98f0();
   input += synapse0x23f9930();
   input += synapse0x23f9970();
   input += synapse0x23f99b0();
   input += synapse0x23f99f0();
   input += synapse0x23f94c0();
   input += synapse0x23f9500();
   input += synapse0x23f9b40();
   input += synapse0x23f9b80();
   input += synapse0x23f9bc0();
   input += synapse0x23f9c00();
   input += synapse0x23f9c40();
   input += synapse0x23f9c80();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23f0450() {
   double input = input0x23f0450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23f9cc0() {
   double input = 3.17705;
   input += synapse0x23fa000();
   input += synapse0x23fa040();
   input += synapse0x23fa080();
   input += synapse0x23fa0c0();
   input += synapse0x23fa100();
   input += synapse0x23fa140();
   input += synapse0x23fa180();
   input += synapse0x23fa1c0();
   input += synapse0x23fa200();
   input += synapse0x23fa240();
   input += synapse0x23fa280();
   input += synapse0x23fa2c0();
   input += synapse0x23fa300();
   input += synapse0x23fa340();
   input += synapse0x23fa380();
   input += synapse0x23fa3c0();
   input += synapse0x23f9e50();
   input += synapse0x23f9e90();
   input += synapse0x23fa510();
   input += synapse0x23fa550();
   input += synapse0x23fa590();
   input += synapse0x23fa5d0();
   input += synapse0x23fa610();
   input += synapse0x23fa650();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23f9cc0() {
   double input = input0x23f9cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23fa690() {
   double input = -0.698431;
   input += synapse0x23fa9d0();
   input += synapse0x23faa10();
   input += synapse0x23faa50();
   input += synapse0x23faa90();
   input += synapse0x23faad0();
   input += synapse0x23fab10();
   input += synapse0x23fab50();
   input += synapse0x23fab90();
   input += synapse0x23fabd0();
   input += synapse0x23fac10();
   input += synapse0x23fac50();
   input += synapse0x23fac90();
   input += synapse0x23facd0();
   input += synapse0x23fad10();
   input += synapse0x23fad50();
   input += synapse0x23fad90();
   input += synapse0x23fa820();
   input += synapse0x23fa860();
   input += synapse0x23faee0();
   input += synapse0x23faf20();
   input += synapse0x23faf60();
   input += synapse0x23fafa0();
   input += synapse0x23fafe0();
   input += synapse0x23fb020();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23fa690() {
   double input = input0x23fa690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23fb060() {
   double input = -1.14259;
   input += synapse0x23fb3a0();
   input += synapse0x23fb3e0();
   input += synapse0x23fb420();
   input += synapse0x23fb460();
   input += synapse0x23fb4a0();
   input += synapse0x23fb4e0();
   input += synapse0x23fb520();
   input += synapse0x23fb560();
   input += synapse0x23fb5a0();
   input += synapse0x23fb5e0();
   input += synapse0x23fb620();
   input += synapse0x23fb660();
   input += synapse0x23fb6a0();
   input += synapse0x23fb6e0();
   input += synapse0x23fb720();
   input += synapse0x23fb760();
   input += synapse0x23fb1f0();
   input += synapse0x23fb230();
   input += synapse0x23fb8b0();
   input += synapse0x23fb8f0();
   input += synapse0x23fb930();
   input += synapse0x23fb970();
   input += synapse0x23fb9b0();
   input += synapse0x23fb9f0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23fb060() {
   double input = input0x23fb060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23fba30() {
   double input = -0.853591;
   input += synapse0x23fbd70();
   input += synapse0x23fbdb0();
   input += synapse0x23fbdf0();
   input += synapse0x23fbe30();
   input += synapse0x23fbe70();
   input += synapse0x23fbeb0();
   input += synapse0x23fbef0();
   input += synapse0x23fbf30();
   input += synapse0x23fbf70();
   input += synapse0x23fbfb0();
   input += synapse0x23fbff0();
   input += synapse0x23fc030();
   input += synapse0x23fc070();
   input += synapse0x23fc0b0();
   input += synapse0x23fc0f0();
   input += synapse0x23fc130();
   input += synapse0x23fbbc0();
   input += synapse0x23fbc00();
   input += synapse0x23fc280();
   input += synapse0x23fc2c0();
   input += synapse0x23fc300();
   input += synapse0x23fc340();
   input += synapse0x23fc380();
   input += synapse0x23fc3c0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23fba30() {
   double input = input0x23fba30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23fc400() {
   double input = -0.686345;
   input += synapse0x23fc740();
   input += synapse0x23fc780();
   input += synapse0x23fc7c0();
   input += synapse0x23fc800();
   input += synapse0x23fc840();
   input += synapse0x23fc880();
   input += synapse0x23fc8c0();
   input += synapse0x23fc900();
   input += synapse0x23fc940();
   input += synapse0x23fc980();
   input += synapse0x23fc9c0();
   input += synapse0x23fca00();
   input += synapse0x23fca40();
   input += synapse0x23fca80();
   input += synapse0x23fcac0();
   input += synapse0x23fcb00();
   input += synapse0x23fc590();
   input += synapse0x23fc5d0();
   input += synapse0x23fcc50();
   input += synapse0x23fcc90();
   input += synapse0x23fccd0();
   input += synapse0x23fcd10();
   input += synapse0x23fcd50();
   input += synapse0x23fcd90();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23fc400() {
   double input = input0x23fc400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23fcdd0() {
   double input = -3.38766;
   input += synapse0x23fd110();
   input += synapse0x23fd150();
   input += synapse0x23fd190();
   input += synapse0x23fd1d0();
   input += synapse0x23fd210();
   input += synapse0x23fd250();
   input += synapse0x23fd290();
   input += synapse0x23fd2d0();
   input += synapse0x23fd310();
   input += synapse0x23fd350();
   input += synapse0x23fd390();
   input += synapse0x23fd3d0();
   input += synapse0x23fd410();
   input += synapse0x23fd450();
   input += synapse0x23fd490();
   input += synapse0x23fd4d0();
   input += synapse0x23fcf60();
   input += synapse0x23fcfa0();
   input += synapse0x23fd620();
   input += synapse0x23fd660();
   input += synapse0x23fd6a0();
   input += synapse0x23fd6e0();
   input += synapse0x23fd720();
   input += synapse0x23fd760();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23fcdd0() {
   double input = input0x23fcdd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23fd7a0() {
   double input = -1.01886;
   input += synapse0x23fdae0();
   input += synapse0x23fdb20();
   input += synapse0x23fdb60();
   input += synapse0x23fdba0();
   input += synapse0x23fdbe0();
   input += synapse0x23fdc20();
   input += synapse0x23fdc60();
   input += synapse0x23fdca0();
   input += synapse0x23fdce0();
   input += synapse0x23fdd20();
   input += synapse0x23fdd60();
   input += synapse0x23fdda0();
   input += synapse0x23fdde0();
   input += synapse0x23fde20();
   input += synapse0x23fde60();
   input += synapse0x23fdea0();
   input += synapse0x23fd930();
   input += synapse0x23fd970();
   input += synapse0x23fdff0();
   input += synapse0x23fe030();
   input += synapse0x23fe070();
   input += synapse0x23fe0b0();
   input += synapse0x23fe0f0();
   input += synapse0x23fe130();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23fd7a0() {
   double input = input0x23fd7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23fe170() {
   double input = 2.37457;
   input += synapse0x23fe4b0();
   input += synapse0x23f2a80();
   input += synapse0x23f2ac0();
   input += synapse0x23f2b00();
   input += synapse0x23f2d50();
   input += synapse0x23f2d90();
   input += synapse0x23f2dd0();
   input += synapse0x23f3020();
   input += synapse0x23f3060();
   input += synapse0x23f32b0();
   input += synapse0x23f32f0();
   input += synapse0x23f3330();
   input += synapse0x23f3580();
   input += synapse0x23f35c0();
   input += synapse0x23f3810();
   input += synapse0x23f3850();
   input += synapse0x23fe300();
   input += synapse0x23fe340();
   input += synapse0x23f39a0();
   input += synapse0x23f3eb0();
   input += synapse0x23f3ef0();
   input += synapse0x23f3f30();
   input += synapse0x23f4180();
   input += synapse0x23f41c0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23fe170() {
   double input = input0x23fe170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23f4200() {
   double input = -0.209142;
   input += synapse0x23f3a70();
   input += synapse0x23f3ab0();
   input += synapse0x23f3af0();
   input += synapse0x23f3b30();
   input += synapse0x23f44b0();
   input += synapse0x2400800();
   input += synapse0x2400840();
   input += synapse0x2400880();
   input += synapse0x24008c0();
   input += synapse0x2400900();
   input += synapse0x2400940();
   input += synapse0x2400980();
   input += synapse0x24009c0();
   input += synapse0x2400a00();
   input += synapse0x2400a40();
   input += synapse0x2400a80();
   input += synapse0x23f4390();
   input += synapse0x23f43d0();
   input += synapse0x2400bd0();
   input += synapse0x2400c10();
   input += synapse0x2400c50();
   input += synapse0x2400c90();
   input += synapse0x2400cd0();
   input += synapse0x2400d10();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23f4200() {
   double input = input0x23f4200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x2400d50() {
   double input = 0.841236;
   input += synapse0x2401090();
   input += synapse0x24010d0();
   input += synapse0x2401110();
   input += synapse0x2401150();
   input += synapse0x2401190();
   input += synapse0x24011d0();
   input += synapse0x2401210();
   input += synapse0x2401250();
   input += synapse0x2401290();
   input += synapse0x24012d0();
   input += synapse0x2401310();
   input += synapse0x2401350();
   input += synapse0x2401390();
   input += synapse0x24013d0();
   input += synapse0x2401410();
   input += synapse0x2401450();
   input += synapse0x2400ee0();
   input += synapse0x2400f20();
   input += synapse0x24015a0();
   input += synapse0x24015e0();
   input += synapse0x2401620();
   input += synapse0x2401660();
   input += synapse0x24016a0();
   input += synapse0x24016e0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x2400d50() {
   double input = input0x2400d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x2401720() {
   double input = 6.95338;
   input += synapse0x2401a60();
   input += synapse0x2401aa0();
   input += synapse0x2401ae0();
   input += synapse0x2401b20();
   input += synapse0x2401b60();
   input += synapse0x2401ba0();
   input += synapse0x2401be0();
   input += synapse0x2401c20();
   input += synapse0x2401c60();
   input += synapse0x2401ca0();
   input += synapse0x2401ce0();
   input += synapse0x2401d20();
   input += synapse0x2401d60();
   input += synapse0x2401da0();
   input += synapse0x2401de0();
   input += synapse0x2401e20();
   input += synapse0x24018b0();
   input += synapse0x24018f0();
   input += synapse0x2401f70();
   input += synapse0x2401fb0();
   input += synapse0x2401ff0();
   input += synapse0x2402030();
   input += synapse0x2402070();
   input += synapse0x24020b0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x2401720() {
   double input = input0x2401720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x24020f0() {
   double input = -0.0485251;
   input += synapse0x2402430();
   input += synapse0x2402470();
   input += synapse0x24024b0();
   input += synapse0x24024f0();
   input += synapse0x2402530();
   input += synapse0x2402570();
   input += synapse0x24025b0();
   input += synapse0x24025f0();
   input += synapse0x2402630();
   input += synapse0x2402670();
   input += synapse0x24026b0();
   input += synapse0x24026f0();
   input += synapse0x2402730();
   input += synapse0x2402770();
   input += synapse0x24027b0();
   input += synapse0x24027f0();
   input += synapse0x2402280();
   input += synapse0x24022c0();
   input += synapse0x2402940();
   input += synapse0x2402980();
   input += synapse0x24029c0();
   input += synapse0x2402a00();
   input += synapse0x2402a40();
   input += synapse0x2402a80();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x24020f0() {
   double input = input0x24020f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x2402ac0() {
   double input = -0.695985;
   input += synapse0x2402e00();
   input += synapse0x2402e40();
   input += synapse0x2402e80();
   input += synapse0x2402ec0();
   input += synapse0x2402f00();
   input += synapse0x2402f40();
   input += synapse0x2402f80();
   input += synapse0x2402fc0();
   input += synapse0x2403000();
   input += synapse0x2403040();
   input += synapse0x2403080();
   input += synapse0x24030c0();
   input += synapse0x2403100();
   input += synapse0x2403140();
   input += synapse0x2403180();
   input += synapse0x24031c0();
   input += synapse0x2402c50();
   input += synapse0x2402c90();
   input += synapse0x2403310();
   input += synapse0x2403350();
   input += synapse0x2403390();
   input += synapse0x24033d0();
   input += synapse0x2403410();
   input += synapse0x2403450();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x2402ac0() {
   double input = input0x2402ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x2403490() {
   double input = 0.0846734;
   input += synapse0x24037d0();
   input += synapse0x2403810();
   input += synapse0x2403850();
   input += synapse0x2403890();
   input += synapse0x24038d0();
   input += synapse0x2403910();
   input += synapse0x2403950();
   input += synapse0x2403990();
   input += synapse0x24039d0();
   input += synapse0x2403a10();
   input += synapse0x2403a50();
   input += synapse0x2403a90();
   input += synapse0x2403ad0();
   input += synapse0x2403b10();
   input += synapse0x2403b50();
   input += synapse0x2403b90();
   input += synapse0x2403620();
   input += synapse0x2403660();
   input += synapse0x2403ce0();
   input += synapse0x2403d20();
   input += synapse0x2403d60();
   input += synapse0x2403da0();
   input += synapse0x2403de0();
   input += synapse0x2403e20();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x2403490() {
   double input = input0x2403490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x2403e60() {
   double input = 2.75638;
   input += synapse0x24041a0();
   input += synapse0x24041e0();
   input += synapse0x2404220();
   input += synapse0x2404260();
   input += synapse0x24042a0();
   input += synapse0x24042e0();
   input += synapse0x2404320();
   input += synapse0x2404360();
   input += synapse0x24043a0();
   input += synapse0x24043e0();
   input += synapse0x2404420();
   input += synapse0x2404460();
   input += synapse0x24044a0();
   input += synapse0x24044e0();
   input += synapse0x2404520();
   input += synapse0x2404560();
   input += synapse0x2403ff0();
   input += synapse0x2404030();
   input += synapse0x24046b0();
   input += synapse0x24046f0();
   input += synapse0x2404730();
   input += synapse0x2404770();
   input += synapse0x24047b0();
   input += synapse0x24047f0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x2403e60() {
   double input = input0x2403e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x2404830() {
   double input = -0.458289;
   input += synapse0x2404b70();
   input += synapse0x2404bb0();
   input += synapse0x2404bf0();
   input += synapse0x2404c30();
   input += synapse0x2404c70();
   input += synapse0x2404cb0();
   input += synapse0x2404cf0();
   input += synapse0x2404d30();
   input += synapse0x2404d70();
   input += synapse0x2404db0();
   input += synapse0x2404df0();
   input += synapse0x2404e30();
   input += synapse0x2404e70();
   input += synapse0x2404eb0();
   input += synapse0x2404ef0();
   input += synapse0x2404f30();
   input += synapse0x24049c0();
   input += synapse0x2404a00();
   input += synapse0x2405080();
   input += synapse0x24050c0();
   input += synapse0x2405100();
   input += synapse0x2405140();
   input += synapse0x2405180();
   input += synapse0x24051c0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x2404830() {
   double input = input0x2404830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x2405200() {
   double input = 1.22563;
   input += synapse0x23edc70();
   input += synapse0x23edcb0();
   input += synapse0x23edcf0();
   input += synapse0x23edd30();
   input += synapse0x23edd70();
   input += synapse0x23eddb0();
   input += synapse0x23eddf0();
   input += synapse0x23ede30();
   input += synapse0x2405950();
   input += synapse0x2405990();
   input += synapse0x24059d0();
   input += synapse0x2405a10();
   input += synapse0x2405a50();
   input += synapse0x2405a90();
   input += synapse0x2405ad0();
   input += synapse0x2405b10();
   input += synapse0x2405390();
   input += synapse0x24053d0();
   input += synapse0x2405c60();
   input += synapse0x2405ca0();
   input += synapse0x2405ce0();
   input += synapse0x2405d20();
   input += synapse0x2405d60();
   input += synapse0x2405da0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x2405200() {
   double input = input0x2405200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x2405de0() {
   double input = -0.680593;
   input += synapse0x2406120();
   input += synapse0x2406160();
   input += synapse0x24061a0();
   input += synapse0x24061e0();
   input += synapse0x2406220();
   input += synapse0x2406260();
   input += synapse0x24062a0();
   input += synapse0x24062e0();
   input += synapse0x2406320();
   input += synapse0x2406360();
   input += synapse0x24063a0();
   input += synapse0x24063e0();
   input += synapse0x2406420();
   input += synapse0x2406460();
   input += synapse0x24064a0();
   input += synapse0x24064e0();
   input += synapse0x2405f70();
   input += synapse0x2405fb0();
   input += synapse0x2406630();
   input += synapse0x2406670();
   input += synapse0x24066b0();
   input += synapse0x24066f0();
   input += synapse0x2406730();
   input += synapse0x2406770();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x2405de0() {
   double input = input0x2405de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x24067b0() {
   double input = 0.178919;
   input += synapse0x2406af0();
   input += synapse0x2406b30();
   input += synapse0x2406b70();
   input += synapse0x2406bb0();
   input += synapse0x2406bf0();
   input += synapse0x2406c30();
   input += synapse0x2406c70();
   input += synapse0x2406cb0();
   input += synapse0x2406cf0();
   input += synapse0x2406d30();
   input += synapse0x2406d70();
   input += synapse0x2406db0();
   input += synapse0x2406df0();
   input += synapse0x2406e30();
   input += synapse0x2406e70();
   input += synapse0x2406eb0();
   input += synapse0x2406940();
   input += synapse0x2406980();
   input += synapse0x23f74b0();
   input += synapse0x23f74f0();
   input += synapse0x23f7530();
   input += synapse0x23f7570();
   input += synapse0x23f75b0();
   input += synapse0x23f75f0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x24067b0() {
   double input = input0x24067b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23f7630() {
   double input = -0.360441;
   input += synapse0x23f7970();
   input += synapse0x23f79b0();
   input += synapse0x23f79f0();
   input += synapse0x23f7a30();
   input += synapse0x23f7a70();
   input += synapse0x23f7ab0();
   input += synapse0x23f7af0();
   input += synapse0x23f7b30();
   input += synapse0x23f7b70();
   input += synapse0x23f7bb0();
   input += synapse0x23f7bf0();
   input += synapse0x23f7c30();
   input += synapse0x23f7c70();
   input += synapse0x23f7cb0();
   input += synapse0x23f7cf0();
   input += synapse0x23f7d30();
   input += synapse0x23f77c0();
   input += synapse0x23f7800();
   input += synapse0x23f7e80();
   input += synapse0x23f7ec0();
   input += synapse0x23f7f00();
   input += synapse0x23f7f40();
   input += synapse0x23f7f80();
   input += synapse0x23f7fc0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23f7630() {
   double input = input0x23f7630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23f8000() {
   double input = 1.9247;
   input += synapse0x23f8340();
   input += synapse0x23f8380();
   input += synapse0x23f83c0();
   input += synapse0x23f8400();
   input += synapse0x23f8440();
   input += synapse0x23f8480();
   input += synapse0x23f84c0();
   input += synapse0x23f8500();
   input += synapse0x23f8540();
   input += synapse0x23f8580();
   input += synapse0x23f85c0();
   input += synapse0x23f8600();
   input += synapse0x23f8640();
   input += synapse0x23f8680();
   input += synapse0x23f86c0();
   input += synapse0x23f8700();
   input += synapse0x23f8190();
   input += synapse0x23f81d0();
   input += synapse0x23f8850();
   input += synapse0x23f8890();
   input += synapse0x23f88d0();
   input += synapse0x23f8910();
   input += synapse0x23f8950();
   input += synapse0x23f8990();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23f8000() {
   double input = input0x23f8000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x23f89d0() {
   double input = 6.95485;
   input += synapse0x23f8d10();
   input += synapse0x23f8d50();
   input += synapse0x23f8d90();
   input += synapse0x23f8dd0();
   input += synapse0x23f8e10();
   input += synapse0x23f8e50();
   input += synapse0x23f8e90();
   input += synapse0x23f8ed0();
   input += synapse0x23f8f10();
   input += synapse0x23f8f50();
   input += synapse0x23f8f90();
   input += synapse0x23f8fd0();
   input += synapse0x23f9010();
   input += synapse0x23f9050();
   input += synapse0x23f9090();
   input += synapse0x23f90d0();
   input += synapse0x23f8b60();
   input += synapse0x23f8ba0();
   input += synapse0x23f9220();
   input += synapse0x23f9260();
   input += synapse0x23f92a0();
   input += synapse0x23f92e0();
   input += synapse0x23f9320();
   input += synapse0x23f9360();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x23f89d0() {
   double input = input0x23f89d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x240b010() {
   double input = -0.0418807;
   input += synapse0x240b230();
   input += synapse0x240b270();
   input += synapse0x240b2b0();
   input += synapse0x240b2f0();
   input += synapse0x240b330();
   input += synapse0x240b370();
   input += synapse0x240b3b0();
   input += synapse0x240b3f0();
   input += synapse0x240b430();
   input += synapse0x240b470();
   input += synapse0x240b4b0();
   input += synapse0x240b4f0();
   input += synapse0x240b530();
   input += synapse0x240b570();
   input += synapse0x240b5b0();
   input += synapse0x240b5f0();
   input += synapse0x23f93a0();
   input += synapse0x23f93e0();
   input += synapse0x240b740();
   input += synapse0x240b780();
   input += synapse0x240b7c0();
   input += synapse0x240b800();
   input += synapse0x240b840();
   input += synapse0x240b880();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x240b010() {
   double input = input0x240b010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x240b8c0() {
   double input = -0.156145;
   input += synapse0x240bc00();
   input += synapse0x240bc40();
   input += synapse0x240bc80();
   input += synapse0x240bcc0();
   input += synapse0x240bd00();
   input += synapse0x240bd40();
   input += synapse0x240bd80();
   input += synapse0x240bdc0();
   input += synapse0x240be00();
   input += synapse0x240be40();
   input += synapse0x240be80();
   input += synapse0x240bec0();
   input += synapse0x240bf00();
   input += synapse0x240bf40();
   input += synapse0x240bf80();
   input += synapse0x240bfc0();
   input += synapse0x240ba50();
   input += synapse0x240ba90();
   input += synapse0x240c110();
   input += synapse0x240c150();
   input += synapse0x240c190();
   input += synapse0x240c1d0();
   input += synapse0x240c210();
   input += synapse0x240c250();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x240b8c0() {
   double input = input0x240b8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x240c290() {
   double input = -0.0723315;
   input += synapse0x240c5d0();
   input += synapse0x240c610();
   input += synapse0x240c650();
   input += synapse0x240c690();
   input += synapse0x240c6d0();
   input += synapse0x240c710();
   input += synapse0x240c750();
   input += synapse0x240c790();
   input += synapse0x240c7d0();
   input += synapse0x240c810();
   input += synapse0x240c850();
   input += synapse0x240c890();
   input += synapse0x240c8d0();
   input += synapse0x240c910();
   input += synapse0x240c950();
   input += synapse0x240c990();
   input += synapse0x240c420();
   input += synapse0x240c460();
   input += synapse0x240cae0();
   input += synapse0x240cb20();
   input += synapse0x240cb60();
   input += synapse0x240cba0();
   input += synapse0x240cbe0();
   input += synapse0x240cc20();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x240c290() {
   double input = input0x240c290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x240cc60() {
   double input = 0.00927892;
   input += synapse0x240cfa0();
   input += synapse0x240cfe0();
   input += synapse0x240d020();
   input += synapse0x240d060();
   input += synapse0x240d0a0();
   input += synapse0x240d0e0();
   input += synapse0x240d120();
   input += synapse0x240d160();
   input += synapse0x240d1a0();
   input += synapse0x240d1e0();
   input += synapse0x240d220();
   input += synapse0x240d260();
   input += synapse0x240d2a0();
   input += synapse0x240d2e0();
   input += synapse0x240d320();
   input += synapse0x240d360();
   input += synapse0x240cdf0();
   input += synapse0x240ce30();
   input += synapse0x240d4b0();
   input += synapse0x240d4f0();
   input += synapse0x240d530();
   input += synapse0x240d570();
   input += synapse0x240d5b0();
   input += synapse0x240d5f0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x240cc60() {
   double input = input0x240cc60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x2413e60() {
   double input = 1.38052;
   input += synapse0x23e9b80();
   input += synapse0x23e9bc0();
   input += synapse0x23eb0a0();
   input += synapse0x23eb0e0();
   input += synapse0x23eba70();
   input += synapse0x23ebab0();
   input += synapse0x23ec840();
   input += synapse0x23ec880();
   input += synapse0x23ed210();
   input += synapse0x23ed250();
   input += synapse0x23edbe0();
   input += synapse0x23edc20();
   input += synapse0x23ee6c0();
   input += synapse0x23ee700();
   input += synapse0x23ef090();
   input += synapse0x23ef0d0();
   input += synapse0x23ec170();
   input += synapse0x23ec1b0();
   input += synapse0x23f0c40();
   input += synapse0x23f0c80();
   input += synapse0x23f1610();
   input += synapse0x23f1650();
   input += synapse0x23f1fe0();
   input += synapse0x23f2020();
   input += synapse0x23f29b0();
   input += synapse0x23f29f0();
   input += synapse0x23e6b90();
   input += synapse0x23e6bd0();
   input += synapse0x23f4aa0();
   input += synapse0x23f4ae0();
   input += synapse0x23f5470();
   input += synapse0x23f54b0();
   input += synapse0x23f5e40();
   input += synapse0x23f5e80();
   input += synapse0x23f6810();
   input += synapse0x23f6850();
   input += synapse0x23f71e0();
   input += synapse0x23f7220();
   input += synapse0x23efd30();
   input += synapse0x23efd70();
   input += synapse0x23f95e0();
   input += synapse0x23f9620();
   input += synapse0x23f9f70();
   input += synapse0x23f9fb0();
   input += synapse0x23fa940();
   input += synapse0x23fa980();
   input += synapse0x23fb310();
   input += synapse0x23fb350();
   input += synapse0x23fbce0();
   input += synapse0x23fbd20();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x2413e60() {
   double input = input0x2413e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x2414200() {
   double input = -1.11705;
   input += synapse0x23fe420();
   input += synapse0x23fe460();
   input += synapse0x23f39e0();
   input += synapse0x23f3a20();
   input += synapse0x2401000();
   input += synapse0x2401040();
   input += synapse0x24019d0();
   input += synapse0x2401a10();
   input += synapse0x24023a0();
   input += synapse0x24023e0();
   input += synapse0x2402d70();
   input += synapse0x2402db0();
   input += synapse0x2403740();
   input += synapse0x2403780();
   input += synapse0x2404110();
   input += synapse0x2404150();
   input += synapse0x2404ae0();
   input += synapse0x2404b20();
   input += synapse0x24054b0();
   input += synapse0x24054f0();
   input += synapse0x2406090();
   input += synapse0x24060d0();
   input += synapse0x2406a60();
   input += synapse0x2406aa0();
   input += synapse0x23f78e0();
   input += synapse0x23f7920();
   input += synapse0x23f82b0();
   input += synapse0x23f82f0();
   input += synapse0x23f8c80();
   input += synapse0x23f8cc0();
   input += synapse0x240b1a0();
   input += synapse0x240b1e0();
   input += synapse0x240bb70();
   input += synapse0x240bbb0();
   input += synapse0x240c540();
   input += synapse0x240c580();
   input += synapse0x240cf10();
   input += synapse0x240cf50();
   input += synapse0x23e8e40();
   input += synapse0x23e8e80();
   input += synapse0x23fc6b0();
   input += synapse0x23fc6f0();
   input += synapse0x240d630();
   input += synapse0x240d670();
   input += synapse0x240d6b0();
   input += synapse0x240d6f0();
   input += synapse0x24145a0();
   input += synapse0x24145e0();
   input += synapse0x2414620();
   input += synapse0x2414660();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x2414200() {
   double input = input0x2414200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x24146a0() {
   double input = 2.2354;
   input += synapse0x24149e0();
   input += synapse0x2414a20();
   input += synapse0x2414a60();
   input += synapse0x2414aa0();
   input += synapse0x2414ae0();
   input += synapse0x2414b20();
   input += synapse0x2414b60();
   input += synapse0x2414ba0();
   input += synapse0x2414be0();
   input += synapse0x2414c20();
   input += synapse0x2414c60();
   input += synapse0x2414ca0();
   input += synapse0x2414ce0();
   input += synapse0x2414d20();
   input += synapse0x2414d60();
   input += synapse0x2414da0();
   input += synapse0x2414830();
   input += synapse0x2414870();
   input += synapse0x2414ef0();
   input += synapse0x2414f30();
   input += synapse0x2414f70();
   input += synapse0x2414fb0();
   input += synapse0x2414ff0();
   input += synapse0x2415030();
   input += synapse0x2415070();
   input += synapse0x24150b0();
   input += synapse0x24150f0();
   input += synapse0x2415130();
   input += synapse0x2415170();
   input += synapse0x24151b0();
   input += synapse0x24151f0();
   input += synapse0x2415230();
   input += synapse0x2414de0();
   input += synapse0x2414e20();
   input += synapse0x2414e60();
   input += synapse0x2414ea0();
   input += synapse0x2415480();
   input += synapse0x24154c0();
   input += synapse0x2415500();
   input += synapse0x2415540();
   input += synapse0x2415580();
   input += synapse0x24155c0();
   input += synapse0x2415600();
   input += synapse0x2415640();
   input += synapse0x2415680();
   input += synapse0x24156c0();
   input += synapse0x2415700();
   input += synapse0x2415740();
   input += synapse0x2415780();
   input += synapse0x24157c0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x24146a0() {
   double input = input0x24146a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x2415800() {
   double input = 2.18839;
   input += synapse0x2415b40();
   input += synapse0x2415b80();
   input += synapse0x2415bc0();
   input += synapse0x2415c00();
   input += synapse0x2415c40();
   input += synapse0x2415c80();
   input += synapse0x2415cc0();
   input += synapse0x2415d00();
   input += synapse0x2415d40();
   input += synapse0x2415d80();
   input += synapse0x2415dc0();
   input += synapse0x2415e00();
   input += synapse0x2415e40();
   input += synapse0x2415e80();
   input += synapse0x2415ec0();
   input += synapse0x2415f00();
   input += synapse0x2415990();
   input += synapse0x24159d0();
   input += synapse0x2416050();
   input += synapse0x2416090();
   input += synapse0x24160d0();
   input += synapse0x2416110();
   input += synapse0x2416150();
   input += synapse0x2416190();
   input += synapse0x24161d0();
   input += synapse0x2416210();
   input += synapse0x2416250();
   input += synapse0x2416290();
   input += synapse0x24162d0();
   input += synapse0x2416310();
   input += synapse0x2416350();
   input += synapse0x2416390();
   input += synapse0x2415f40();
   input += synapse0x2415f80();
   input += synapse0x2415fc0();
   input += synapse0x2416000();
   input += synapse0x24165e0();
   input += synapse0x2416620();
   input += synapse0x2416660();
   input += synapse0x24166a0();
   input += synapse0x24166e0();
   input += synapse0x2416720();
   input += synapse0x2416760();
   input += synapse0x24167a0();
   input += synapse0x24167e0();
   input += synapse0x2416820();
   input += synapse0x2416860();
   input += synapse0x24168a0();
   input += synapse0x24168e0();
   input += synapse0x2416920();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x2415800() {
   double input = input0x2415800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x2416960() {
   double input = -0.65846;
   input += synapse0x2416ca0();
   input += synapse0x2416ce0();
   input += synapse0x2416d20();
   input += synapse0x2416d60();
   input += synapse0x2416da0();
   input += synapse0x2416de0();
   input += synapse0x2416e20();
   input += synapse0x2416e60();
   input += synapse0x2416ea0();
   input += synapse0x2416ee0();
   input += synapse0x2416f20();
   input += synapse0x2416f60();
   input += synapse0x2416fa0();
   input += synapse0x2416fe0();
   input += synapse0x2417020();
   input += synapse0x2417060();
   input += synapse0x2416af0();
   input += synapse0x2416b30();
   input += synapse0x24171b0();
   input += synapse0x24171f0();
   input += synapse0x2417230();
   input += synapse0x2417270();
   input += synapse0x24172b0();
   input += synapse0x24172f0();
   input += synapse0x2417330();
   input += synapse0x2417370();
   input += synapse0x24173b0();
   input += synapse0x24173f0();
   input += synapse0x2417430();
   input += synapse0x2417470();
   input += synapse0x24174b0();
   input += synapse0x24174f0();
   input += synapse0x24170a0();
   input += synapse0x24170e0();
   input += synapse0x2417120();
   input += synapse0x2417160();
   input += synapse0x2417740();
   input += synapse0x2417780();
   input += synapse0x24177c0();
   input += synapse0x2417800();
   input += synapse0x2417840();
   input += synapse0x2417880();
   input += synapse0x24178c0();
   input += synapse0x2417900();
   input += synapse0x2417940();
   input += synapse0x2417980();
   input += synapse0x24179c0();
   input += synapse0x2417a00();
   input += synapse0x2417a40();
   input += synapse0x2417a80();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x2416960() {
   double input = input0x2416960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_uL::input0x2417ac0() {
   double input = 16.718;
   input += synapse0x2417ce0();
   input += synapse0x2417d20();
   input += synapse0x2417d60();
   input += synapse0x2417da0();
   input += synapse0x2417de0();
   return input;
}

double NNfunction_ns_chi01_uL::neuron0x2417ac0() {
   double input = input0x2417ac0();
   return (input * 1)+0;
}

double NNfunction_ns_chi01_uL::synapse0x23e3c00() {
   return (neuron0x23e3c80()*1.04348);
}

double NNfunction_ns_chi01_uL::synapse0x23e3c40() {
   return (neuron0x23e3f30()*-2.11978);
}

double NNfunction_ns_chi01_uL::synapse0x23e8ed0() {
   return (neuron0x23e4270()*1.82726);
}

double NNfunction_ns_chi01_uL::synapse0x23e8f10() {
   return (neuron0x23e45b0()*3.44591);
}

double NNfunction_ns_chi01_uL::synapse0x23e8f50() {
   return (neuron0x23e48f0()*1.66029);
}

double NNfunction_ns_chi01_uL::synapse0x23e8f90() {
   return (neuron0x23e4c30()*-1.11517);
}

double NNfunction_ns_chi01_uL::synapse0x23e8fd0() {
   return (neuron0x23e4f70()*-0.48316);
}

double NNfunction_ns_chi01_uL::synapse0x23e9010() {
   return (neuron0x23e52b0()*-1.72537);
}

double NNfunction_ns_chi01_uL::synapse0x23e9050() {
   return (neuron0x23e55f0()*0.677793);
}

double NNfunction_ns_chi01_uL::synapse0x23e9090() {
   return (neuron0x23e5930()*0.117964);
}

double NNfunction_ns_chi01_uL::synapse0x23e90d0() {
   return (neuron0x23e5c70()*-1.74185);
}

double NNfunction_ns_chi01_uL::synapse0x23e9110() {
   return (neuron0x23e5fb0()*0.772619);
}

double NNfunction_ns_chi01_uL::synapse0x23e9150() {
   return (neuron0x23e62f0()*1.59165);
}

double NNfunction_ns_chi01_uL::synapse0x23e9190() {
   return (neuron0x23e6630()*1.65682);
}

double NNfunction_ns_chi01_uL::synapse0x23e91d0() {
   return (neuron0x23e6970()*-0.524288);
}

double NNfunction_ns_chi01_uL::synapse0x23e9210() {
   return (neuron0x23e6cb0()*2.38201);
}

double NNfunction_ns_chi01_uL::synapse0x23e3b70() {
   return (neuron0x23e6ff0()*-1.82311);
}

double NNfunction_ns_chi01_uL::synapse0x23e3bb0() {
   return (neuron0x23e7550()*0.916551);
}

double NNfunction_ns_chi01_uL::synapse0x219ed60() {
   return (neuron0x23e7770()*1.52391);
}

double NNfunction_ns_chi01_uL::synapse0x219eda0() {
   return (neuron0x23e7ab0()*0.113738);
}

double NNfunction_ns_chi01_uL::synapse0x23e9470() {
   return (neuron0x23e7df0()*-4.4603);
}

double NNfunction_ns_chi01_uL::synapse0x23e94b0() {
   return (neuron0x23e8130()*-1.76473);
}

double NNfunction_ns_chi01_uL::synapse0x23e94f0() {
   return (neuron0x23e8470()*0.635255);
}

double NNfunction_ns_chi01_uL::synapse0x23e9530() {
   return (neuron0x23e87b0()*2.13504);
}

double NNfunction_ns_chi01_uL::synapse0x23e98b0() {
   return (neuron0x23e3c80()*0.00787695);
}

double NNfunction_ns_chi01_uL::synapse0x23e98f0() {
   return (neuron0x23e3f30()*0.00540503);
}

double NNfunction_ns_chi01_uL::synapse0x23e9930() {
   return (neuron0x23e4270()*-0.0426458);
}

double NNfunction_ns_chi01_uL::synapse0x23e9970() {
   return (neuron0x23e45b0()*-2.17);
}

double NNfunction_ns_chi01_uL::synapse0x23e99b0() {
   return (neuron0x23e48f0()*0.00137742);
}

double NNfunction_ns_chi01_uL::synapse0x23e99f0() {
   return (neuron0x23e4c30()*0.00178022);
}

double NNfunction_ns_chi01_uL::synapse0x23e9a30() {
   return (neuron0x23e4f70()*-0.0125709);
}

double NNfunction_ns_chi01_uL::synapse0x23e9a70() {
   return (neuron0x23e52b0()*-0.00332546);
}

double NNfunction_ns_chi01_uL::synapse0x23e9ab0() {
   return (neuron0x23e55f0()*-0.00631779);
}

double NNfunction_ns_chi01_uL::synapse0x23e9360() {
   return (neuron0x23e5930()*0.0100833);
}

double NNfunction_ns_chi01_uL::synapse0x23e93a0() {
   return (neuron0x23e5c70()*0.0136497);
}

double NNfunction_ns_chi01_uL::synapse0x23e93e0() {
   return (neuron0x23e5fb0()*0.100074);
}

double NNfunction_ns_chi01_uL::synapse0x23e9420() {
   return (neuron0x23e62f0()*-0.0109211);
}

double NNfunction_ns_chi01_uL::synapse0x23e9d00() {
   return (neuron0x23e6630()*0.0167853);
}

double NNfunction_ns_chi01_uL::synapse0x23e9d40() {
   return (neuron0x23e6970()*-0.00825472);
}

double NNfunction_ns_chi01_uL::synapse0x23e9d80() {
   return (neuron0x23e6cb0()*-0.0203243);
}

double NNfunction_ns_chi01_uL::synapse0x23e9700() {
   return (neuron0x23e6ff0()*-0.000228828);
}

double NNfunction_ns_chi01_uL::synapse0x23e9740() {
   return (neuron0x23e7550()*-0.00951761);
}

double NNfunction_ns_chi01_uL::synapse0x23e9ed0() {
   return (neuron0x23e7770()*-0.00897188);
}

double NNfunction_ns_chi01_uL::synapse0x23e9f10() {
   return (neuron0x23e7ab0()*-0.0146872);
}

double NNfunction_ns_chi01_uL::synapse0x23e9f50() {
   return (neuron0x23e7df0()*-0.00760595);
}

double NNfunction_ns_chi01_uL::synapse0x23e9f90() {
   return (neuron0x23e8130()*0.00135786);
}

double NNfunction_ns_chi01_uL::synapse0x23e9fd0() {
   return (neuron0x23e8470()*-0.00470304);
}

double NNfunction_ns_chi01_uL::synapse0x23ea010() {
   return (neuron0x23e87b0()*-8.82453e-05);
}

double NNfunction_ns_chi01_uL::synapse0x23ea390() {
   return (neuron0x23e3c80()*0.651821);
}

double NNfunction_ns_chi01_uL::synapse0x23ea3d0() {
   return (neuron0x23e3f30()*-0.0130575);
}

double NNfunction_ns_chi01_uL::synapse0x23ea410() {
   return (neuron0x23e4270()*0.688181);
}

double NNfunction_ns_chi01_uL::synapse0x23ea450() {
   return (neuron0x23e45b0()*-0.208102);
}

double NNfunction_ns_chi01_uL::synapse0x23ea490() {
   return (neuron0x23e48f0()*-1.06268);
}

double NNfunction_ns_chi01_uL::synapse0x23ea4d0() {
   return (neuron0x23e4c30()*0.352001);
}

double NNfunction_ns_chi01_uL::synapse0x23ea510() {
   return (neuron0x23e4f70()*0.333794);
}

double NNfunction_ns_chi01_uL::synapse0x23ea550() {
   return (neuron0x23e52b0()*-0.00968494);
}

double NNfunction_ns_chi01_uL::synapse0x23ea590() {
   return (neuron0x23e55f0()*-0.718631);
}

double NNfunction_ns_chi01_uL::synapse0x23ea5d0() {
   return (neuron0x23e5930()*-0.49506);
}

double NNfunction_ns_chi01_uL::synapse0x23ea610() {
   return (neuron0x23e5c70()*0.602582);
}

double NNfunction_ns_chi01_uL::synapse0x23ea650() {
   return (neuron0x23e5fb0()*-1.39675);
}

double NNfunction_ns_chi01_uL::synapse0x23ea690() {
   return (neuron0x23e62f0()*-0.455343);
}

double NNfunction_ns_chi01_uL::synapse0x23ea6d0() {
   return (neuron0x23e6630()*-0.707702);
}

double NNfunction_ns_chi01_uL::synapse0x23ea710() {
   return (neuron0x23e6970()*0.149667);
}

double NNfunction_ns_chi01_uL::synapse0x23ea750() {
   return (neuron0x23e6cb0()*0.135201);
}

double NNfunction_ns_chi01_uL::synapse0x23ea1e0() {
   return (neuron0x23e6ff0()*0.157125);
}

double NNfunction_ns_chi01_uL::synapse0x23ea220() {
   return (neuron0x23e7550()*0.134062);
}

double NNfunction_ns_chi01_uL::synapse0x23d2cf0() {
   return (neuron0x23e7770()*0.019605);
}

double NNfunction_ns_chi01_uL::synapse0x21acc40() {
   return (neuron0x23e7ab0()*0.530907);
}

double NNfunction_ns_chi01_uL::synapse0x21acc80() {
   return (neuron0x23e7df0()*0.3491);
}

double NNfunction_ns_chi01_uL::synapse0x22c8190() {
   return (neuron0x23e8130()*0.150889);
}

double NNfunction_ns_chi01_uL::synapse0x22c81d0() {
   return (neuron0x23e8470()*-0.361133);
}

double NNfunction_ns_chi01_uL::synapse0x23e39e0() {
   return (neuron0x23e87b0()*-0.633178);
}

double NNfunction_ns_chi01_uL::synapse0x21ad530() {
   return (neuron0x23e3c80()*-2.57374);
}

double NNfunction_ns_chi01_uL::synapse0x23e9c10() {
   return (neuron0x23e3f30()*0.185916);
}

double NNfunction_ns_chi01_uL::synapse0x23e9c50() {
   return (neuron0x23e4270()*-0.425943);
}

double NNfunction_ns_chi01_uL::synapse0x23e9c90() {
   return (neuron0x23e45b0()*-1.22531);
}

double NNfunction_ns_chi01_uL::synapse0x23ea8a0() {
   return (neuron0x23e48f0()*-0.24957);
}

double NNfunction_ns_chi01_uL::synapse0x23ea8e0() {
   return (neuron0x23e4c30()*-1.06607);
}

double NNfunction_ns_chi01_uL::synapse0x23ea920() {
   return (neuron0x23e4f70()*0.970387);
}

double NNfunction_ns_chi01_uL::synapse0x23ea960() {
   return (neuron0x23e52b0()*-0.757357);
}

double NNfunction_ns_chi01_uL::synapse0x23ea9a0() {
   return (neuron0x23e55f0()*-0.86416);
}

double NNfunction_ns_chi01_uL::synapse0x23ea9e0() {
   return (neuron0x23e5930()*-0.440773);
}

double NNfunction_ns_chi01_uL::synapse0x23eaa20() {
   return (neuron0x23e5c70()*0.545431);
}

double NNfunction_ns_chi01_uL::synapse0x23eaa60() {
   return (neuron0x23e5fb0()*-0.532981);
}

double NNfunction_ns_chi01_uL::synapse0x23eaaa0() {
   return (neuron0x23e62f0()*0.295309);
}

double NNfunction_ns_chi01_uL::synapse0x23eaae0() {
   return (neuron0x23e6630()*1.36447);
}

double NNfunction_ns_chi01_uL::synapse0x23eab20() {
   return (neuron0x23e6970()*2.11843);
}

double NNfunction_ns_chi01_uL::synapse0x23eab60() {
   return (neuron0x23e6cb0()*-0.265438);
}

double NNfunction_ns_chi01_uL::synapse0x23e3a20() {
   return (neuron0x23e6ff0()*-0.297551);
}

double NNfunction_ns_chi01_uL::synapse0x23e3a60() {
   return (neuron0x23e7550()*0.264579);
}

double NNfunction_ns_chi01_uL::synapse0x23e3aa0() {
   return (neuron0x23e7770()*-0.382489);
}

double NNfunction_ns_chi01_uL::synapse0x23eacb0() {
   return (neuron0x23e7ab0()*0.490285);
}

double NNfunction_ns_chi01_uL::synapse0x23eacf0() {
   return (neuron0x23e7df0()*0.549311);
}

double NNfunction_ns_chi01_uL::synapse0x23ead30() {
   return (neuron0x23e8130()*0.860286);
}

double NNfunction_ns_chi01_uL::synapse0x23ead70() {
   return (neuron0x23e8470()*-0.704677);
}

double NNfunction_ns_chi01_uL::synapse0x23eadb0() {
   return (neuron0x23e87b0()*-1.64276);
}

double NNfunction_ns_chi01_uL::synapse0x23eb130() {
   return (neuron0x23e3c80()*1.10735);
}

double NNfunction_ns_chi01_uL::synapse0x23eb170() {
   return (neuron0x23e3f30()*-0.870464);
}

double NNfunction_ns_chi01_uL::synapse0x23eb1b0() {
   return (neuron0x23e4270()*1.05281);
}

double NNfunction_ns_chi01_uL::synapse0x23eb1f0() {
   return (neuron0x23e45b0()*0.0893713);
}

double NNfunction_ns_chi01_uL::synapse0x23eb230() {
   return (neuron0x23e48f0()*0.175821);
}

double NNfunction_ns_chi01_uL::synapse0x23eb270() {
   return (neuron0x23e4c30()*-0.349933);
}

double NNfunction_ns_chi01_uL::synapse0x23eb2b0() {
   return (neuron0x23e4f70()*-0.0946867);
}

double NNfunction_ns_chi01_uL::synapse0x23eb2f0() {
   return (neuron0x23e52b0()*0.587926);
}

double NNfunction_ns_chi01_uL::synapse0x23eb330() {
   return (neuron0x23e55f0()*-0.0367274);
}

double NNfunction_ns_chi01_uL::synapse0x23eb370() {
   return (neuron0x23e5930()*-0.214938);
}

double NNfunction_ns_chi01_uL::synapse0x23eb3b0() {
   return (neuron0x23e5c70()*-0.432692);
}

double NNfunction_ns_chi01_uL::synapse0x23eb3f0() {
   return (neuron0x23e5fb0()*0.46192);
}

double NNfunction_ns_chi01_uL::synapse0x23eb430() {
   return (neuron0x23e62f0()*-0.445307);
}

double NNfunction_ns_chi01_uL::synapse0x23eb470() {
   return (neuron0x23e6630()*-0.322749);
}

double NNfunction_ns_chi01_uL::synapse0x23eb4b0() {
   return (neuron0x23e6970()*-0.763909);
}

double NNfunction_ns_chi01_uL::synapse0x23eb4f0() {
   return (neuron0x23e6cb0()*0.00431748);
}

double NNfunction_ns_chi01_uL::synapse0x23eaf80() {
   return (neuron0x23e6ff0()*0.0162364);
}

double NNfunction_ns_chi01_uL::synapse0x23eafc0() {
   return (neuron0x23e7550()*-0.814431);
}

double NNfunction_ns_chi01_uL::synapse0x23eb640() {
   return (neuron0x23e7770()*-0.524795);
}

double NNfunction_ns_chi01_uL::synapse0x23eb680() {
   return (neuron0x23e7ab0()*-0.546087);
}

double NNfunction_ns_chi01_uL::synapse0x23eb6c0() {
   return (neuron0x23e7df0()*-0.325806);
}

double NNfunction_ns_chi01_uL::synapse0x23eb700() {
   return (neuron0x23e8130()*0.699639);
}

double NNfunction_ns_chi01_uL::synapse0x23eb740() {
   return (neuron0x23e8470()*-0.214088);
}

double NNfunction_ns_chi01_uL::synapse0x23eb780() {
   return (neuron0x23e87b0()*1.22601);
}

double NNfunction_ns_chi01_uL::synapse0x23ebb00() {
   return (neuron0x23e3c80()*-0.630246);
}

double NNfunction_ns_chi01_uL::synapse0x23ebb40() {
   return (neuron0x23e3f30()*-0.738691);
}

double NNfunction_ns_chi01_uL::synapse0x23ebb80() {
   return (neuron0x23e4270()*0.626214);
}

double NNfunction_ns_chi01_uL::synapse0x23ebbc0() {
   return (neuron0x23e45b0()*-1.15641);
}

double NNfunction_ns_chi01_uL::synapse0x23ebc00() {
   return (neuron0x23e48f0()*0.690462);
}

double NNfunction_ns_chi01_uL::synapse0x23ebc40() {
   return (neuron0x23e4c30()*0.154902);
}

double NNfunction_ns_chi01_uL::synapse0x23ebc80() {
   return (neuron0x23e4f70()*0.209);
}

double NNfunction_ns_chi01_uL::synapse0x23ebcc0() {
   return (neuron0x23e52b0()*0.00286959);
}

double NNfunction_ns_chi01_uL::synapse0x23ebd00() {
   return (neuron0x23e55f0()*0.0651388);
}

double NNfunction_ns_chi01_uL::synapse0x21acf90() {
   return (neuron0x23e5930()*0.0830248);
}

double NNfunction_ns_chi01_uL::synapse0x21acfd0() {
   return (neuron0x23e5c70()*-0.39135);
}

double NNfunction_ns_chi01_uL::synapse0x21ad010() {
   return (neuron0x23e5fb0()*-1.91811);
}

double NNfunction_ns_chi01_uL::synapse0x21ad050() {
   return (neuron0x23e62f0()*0.864769);
}

double NNfunction_ns_chi01_uL::synapse0x21ad090() {
   return (neuron0x23e6630()*-0.767125);
}

double NNfunction_ns_chi01_uL::synapse0x21ad0d0() {
   return (neuron0x23e6970()*1.36862);
}

double NNfunction_ns_chi01_uL::synapse0x21ad110() {
   return (neuron0x23e6cb0()*0.655529);
}

double NNfunction_ns_chi01_uL::synapse0x23eb950() {
   return (neuron0x23e6ff0()*-0.655624);
}

double NNfunction_ns_chi01_uL::synapse0x23eb990() {
   return (neuron0x23e7550()*0.33384);
}

double NNfunction_ns_chi01_uL::synapse0x21ad260() {
   return (neuron0x23e7770()*0.0158049);
}

double NNfunction_ns_chi01_uL::synapse0x21ad2a0() {
   return (neuron0x23e7ab0()*-0.125833);
}

double NNfunction_ns_chi01_uL::synapse0x21ad2e0() {
   return (neuron0x23e7df0()*0.0801911);
}

double NNfunction_ns_chi01_uL::synapse0x21ad320() {
   return (neuron0x23e8130()*-0.0989259);
}

double NNfunction_ns_chi01_uL::synapse0x21ad360() {
   return (neuron0x23e8470()*0.203072);
}

double NNfunction_ns_chi01_uL::synapse0x23ec550() {
   return (neuron0x23e87b0()*0.199773);
}

double NNfunction_ns_chi01_uL::synapse0x23ec8d0() {
   return (neuron0x23e3c80()*0.00858859);
}

double NNfunction_ns_chi01_uL::synapse0x23ec910() {
   return (neuron0x23e3f30()*-21.2262);
}

double NNfunction_ns_chi01_uL::synapse0x23ec950() {
   return (neuron0x23e4270()*0.95243);
}

double NNfunction_ns_chi01_uL::synapse0x23ec990() {
   return (neuron0x23e45b0()*0.00655097);
}

double NNfunction_ns_chi01_uL::synapse0x23ec9d0() {
   return (neuron0x23e48f0()*0.0259992);
}

double NNfunction_ns_chi01_uL::synapse0x23eca10() {
   return (neuron0x23e4c30()*-0.0255273);
}

double NNfunction_ns_chi01_uL::synapse0x23eca50() {
   return (neuron0x23e4f70()*0.00949339);
}

double NNfunction_ns_chi01_uL::synapse0x23eca90() {
   return (neuron0x23e52b0()*-0.0206332);
}

double NNfunction_ns_chi01_uL::synapse0x23ecad0() {
   return (neuron0x23e55f0()*-0.0215758);
}

double NNfunction_ns_chi01_uL::synapse0x23ecb10() {
   return (neuron0x23e5930()*-0.00853111);
}

double NNfunction_ns_chi01_uL::synapse0x23ecb50() {
   return (neuron0x23e5c70()*0.00314389);
}

double NNfunction_ns_chi01_uL::synapse0x23ecb90() {
   return (neuron0x23e5fb0()*0.0657596);
}

double NNfunction_ns_chi01_uL::synapse0x23ecbd0() {
   return (neuron0x23e62f0()*0.039226);
}

double NNfunction_ns_chi01_uL::synapse0x23ecc10() {
   return (neuron0x23e6630()*0.0275802);
}

double NNfunction_ns_chi01_uL::synapse0x23ecc50() {
   return (neuron0x23e6970()*0.022931);
}

double NNfunction_ns_chi01_uL::synapse0x23ecc90() {
   return (neuron0x23e6cb0()*0.000651389);
}

double NNfunction_ns_chi01_uL::synapse0x23ec720() {
   return (neuron0x23e6ff0()*0.0278203);
}

double NNfunction_ns_chi01_uL::synapse0x23ec760() {
   return (neuron0x23e7550()*-0.00451119);
}

double NNfunction_ns_chi01_uL::synapse0x23ecde0() {
   return (neuron0x23e7770()*-0.00559528);
}

double NNfunction_ns_chi01_uL::synapse0x23ece20() {
   return (neuron0x23e7ab0()*-0.00806483);
}

double NNfunction_ns_chi01_uL::synapse0x23ece60() {
   return (neuron0x23e7df0()*0.0220741);
}

double NNfunction_ns_chi01_uL::synapse0x23ecea0() {
   return (neuron0x23e8130()*-0.0204611);
}

double NNfunction_ns_chi01_uL::synapse0x23ecee0() {
   return (neuron0x23e8470()*-0.00147923);
}

double NNfunction_ns_chi01_uL::synapse0x23ecf20() {
   return (neuron0x23e87b0()*0.0839764);
}

double NNfunction_ns_chi01_uL::synapse0x23ed2a0() {
   return (neuron0x23e3c80()*-0.0109556);
}

double NNfunction_ns_chi01_uL::synapse0x23ed2e0() {
   return (neuron0x23e3f30()*-0.0241307);
}

double NNfunction_ns_chi01_uL::synapse0x23ed320() {
   return (neuron0x23e4270()*-0.202204);
}

double NNfunction_ns_chi01_uL::synapse0x23ed360() {
   return (neuron0x23e45b0()*0.0265332);
}

double NNfunction_ns_chi01_uL::synapse0x23ed3a0() {
   return (neuron0x23e48f0()*-0.0118853);
}

double NNfunction_ns_chi01_uL::synapse0x23ed3e0() {
   return (neuron0x23e4c30()*-0.010491);
}

double NNfunction_ns_chi01_uL::synapse0x23ed420() {
   return (neuron0x23e4f70()*-0.0123939);
}

double NNfunction_ns_chi01_uL::synapse0x23ed460() {
   return (neuron0x23e52b0()*0.00820036);
}

double NNfunction_ns_chi01_uL::synapse0x23ed4a0() {
   return (neuron0x23e55f0()*-0.000677545);
}

double NNfunction_ns_chi01_uL::synapse0x23ed4e0() {
   return (neuron0x23e5930()*-0.0116271);
}

double NNfunction_ns_chi01_uL::synapse0x23ed520() {
   return (neuron0x23e5c70()*-0.0290916);
}

double NNfunction_ns_chi01_uL::synapse0x23ed560() {
   return (neuron0x23e5fb0()*-0.0539906);
}

double NNfunction_ns_chi01_uL::synapse0x23ed5a0() {
   return (neuron0x23e62f0()*0.000910464);
}

double NNfunction_ns_chi01_uL::synapse0x23ed5e0() {
   return (neuron0x23e6630()*-0.0133193);
}

double NNfunction_ns_chi01_uL::synapse0x23ed620() {
   return (neuron0x23e6970()*-0.013728);
}

double NNfunction_ns_chi01_uL::synapse0x23ed660() {
   return (neuron0x23e6cb0()*-0.00224261);
}

double NNfunction_ns_chi01_uL::synapse0x23ed0f0() {
   return (neuron0x23e6ff0()*0.0121832);
}

double NNfunction_ns_chi01_uL::synapse0x23ed130() {
   return (neuron0x23e7550()*-0.00882568);
}

double NNfunction_ns_chi01_uL::synapse0x23ed7b0() {
   return (neuron0x23e7770()*-0.0132654);
}

double NNfunction_ns_chi01_uL::synapse0x23ed7f0() {
   return (neuron0x23e7ab0()*-0.0113871);
}

double NNfunction_ns_chi01_uL::synapse0x23ed830() {
   return (neuron0x23e7df0()*-0.00294955);
}

double NNfunction_ns_chi01_uL::synapse0x23ed870() {
   return (neuron0x23e8130()*0.011802);
}

double NNfunction_ns_chi01_uL::synapse0x23ed8b0() {
   return (neuron0x23e8470()*-0.00263992);
}

double NNfunction_ns_chi01_uL::synapse0x23ed8f0() {
   return (neuron0x23e87b0()*-11.4478);
}

double NNfunction_ns_chi01_uL::synapse0x23e7440() {
   return (neuron0x23e3c80()*0.0366012);
}

double NNfunction_ns_chi01_uL::synapse0x23e7480() {
   return (neuron0x23e3f30()*-0.00159589);
}

double NNfunction_ns_chi01_uL::synapse0x23e74c0() {
   return (neuron0x23e4270()*-0.0214294);
}

double NNfunction_ns_chi01_uL::synapse0x23e7500() {
   return (neuron0x23e45b0()*0.0163241);
}

double NNfunction_ns_chi01_uL::synapse0x23ede80() {
   return (neuron0x23e48f0()*-0.0223322);
}

double NNfunction_ns_chi01_uL::synapse0x23edec0() {
   return (neuron0x23e4c30()*-0.00770292);
}

double NNfunction_ns_chi01_uL::synapse0x23edf00() {
   return (neuron0x23e4f70()*-0.0066605);
}

double NNfunction_ns_chi01_uL::synapse0x23edf40() {
   return (neuron0x23e52b0()*0.00812279);
}

double NNfunction_ns_chi01_uL::synapse0x23edf80() {
   return (neuron0x23e55f0()*0.00635553);
}

double NNfunction_ns_chi01_uL::synapse0x23edfc0() {
   return (neuron0x23e5930()*-0.0122104);
}

double NNfunction_ns_chi01_uL::synapse0x23ee000() {
   return (neuron0x23e5c70()*-0.0223612);
}

double NNfunction_ns_chi01_uL::synapse0x23ee040() {
   return (neuron0x23e5fb0()*-0.142837);
}

double NNfunction_ns_chi01_uL::synapse0x23ee080() {
   return (neuron0x23e62f0()*0.0026509);
}

double NNfunction_ns_chi01_uL::synapse0x23ee0c0() {
   return (neuron0x23e6630()*-0.0410466);
}

double NNfunction_ns_chi01_uL::synapse0x23ee100() {
   return (neuron0x23e6970()*-0.000178496);
}

double NNfunction_ns_chi01_uL::synapse0x23ee140() {
   return (neuron0x23e6cb0()*-0.00966808);
}

double NNfunction_ns_chi01_uL::synapse0x23edac0() {
   return (neuron0x23e6ff0()*0.0251244);
}

double NNfunction_ns_chi01_uL::synapse0x23edb00() {
   return (neuron0x23e7550()*0.000415372);
}

double NNfunction_ns_chi01_uL::synapse0x23ee290() {
   return (neuron0x23e7770()*-0.00708783);
}

double NNfunction_ns_chi01_uL::synapse0x23ee2d0() {
   return (neuron0x23e7ab0()*-0.00650608);
}

double NNfunction_ns_chi01_uL::synapse0x23ee310() {
   return (neuron0x23e7df0()*-0.00462858);
}

double NNfunction_ns_chi01_uL::synapse0x23ee350() {
   return (neuron0x23e8130()*-0.0132525);
}

double NNfunction_ns_chi01_uL::synapse0x23ee390() {
   return (neuron0x23e8470()*-0.0108069);
}

double NNfunction_ns_chi01_uL::synapse0x23ee3d0() {
   return (neuron0x23e87b0()*-27.701);
}

double NNfunction_ns_chi01_uL::synapse0x23ee750() {
   return (neuron0x23e3c80()*-0.00769556);
}

double NNfunction_ns_chi01_uL::synapse0x23ee790() {
   return (neuron0x23e3f30()*0.156829);
}

double NNfunction_ns_chi01_uL::synapse0x23ee7d0() {
   return (neuron0x23e4270()*-0.000185923);
}

double NNfunction_ns_chi01_uL::synapse0x23ee810() {
   return (neuron0x23e45b0()*0.0506209);
}

double NNfunction_ns_chi01_uL::synapse0x23ee850() {
   return (neuron0x23e48f0()*-0.0357454);
}

double NNfunction_ns_chi01_uL::synapse0x23ee890() {
   return (neuron0x23e4c30()*-0.891605);
}

double NNfunction_ns_chi01_uL::synapse0x23ee8d0() {
   return (neuron0x23e4f70()*1.20101);
}

double NNfunction_ns_chi01_uL::synapse0x23ee910() {
   return (neuron0x23e52b0()*-0.211522);
}

double NNfunction_ns_chi01_uL::synapse0x23ee950() {
   return (neuron0x23e55f0()*-1.3753);
}

double NNfunction_ns_chi01_uL::synapse0x23ee990() {
   return (neuron0x23e5930()*0.0449713);
}

double NNfunction_ns_chi01_uL::synapse0x23ee9d0() {
   return (neuron0x23e5c70()*0.377777);
}

double NNfunction_ns_chi01_uL::synapse0x23eea10() {
   return (neuron0x23e5fb0()*-0.349991);
}

double NNfunction_ns_chi01_uL::synapse0x23eea50() {
   return (neuron0x23e62f0()*0.190207);
}

double NNfunction_ns_chi01_uL::synapse0x23eea90() {
   return (neuron0x23e6630()*-0.322678);
}

double NNfunction_ns_chi01_uL::synapse0x23eead0() {
   return (neuron0x23e6970()*-0.454183);
}

double NNfunction_ns_chi01_uL::synapse0x23eeb10() {
   return (neuron0x23e6cb0()*0.887461);
}

double NNfunction_ns_chi01_uL::synapse0x23ee5a0() {
   return (neuron0x23e6ff0()*-0.604069);
}

double NNfunction_ns_chi01_uL::synapse0x23ee5e0() {
   return (neuron0x23e7550()*0.162383);
}

double NNfunction_ns_chi01_uL::synapse0x23eec60() {
   return (neuron0x23e7770()*0.264861);
}

double NNfunction_ns_chi01_uL::synapse0x23eeca0() {
   return (neuron0x23e7ab0()*0.293224);
}

double NNfunction_ns_chi01_uL::synapse0x23eece0() {
   return (neuron0x23e7df0()*0.358235);
}

double NNfunction_ns_chi01_uL::synapse0x23eed20() {
   return (neuron0x23e8130()*0.171319);
}

double NNfunction_ns_chi01_uL::synapse0x23eed60() {
   return (neuron0x23e8470()*-0.105379);
}

double NNfunction_ns_chi01_uL::synapse0x23eeda0() {
   return (neuron0x23e87b0()*-0.43958);
}

double NNfunction_ns_chi01_uL::synapse0x23ef120() {
   return (neuron0x23e3c80()*0.0669815);
}

double NNfunction_ns_chi01_uL::synapse0x23ef160() {
   return (neuron0x23e3f30()*0.0493383);
}

double NNfunction_ns_chi01_uL::synapse0x23ef1a0() {
   return (neuron0x23e4270()*4.62543);
}

double NNfunction_ns_chi01_uL::synapse0x23ef1e0() {
   return (neuron0x23e45b0()*0.0531797);
}

double NNfunction_ns_chi01_uL::synapse0x23ef220() {
   return (neuron0x23e48f0()*0.0100233);
}

double NNfunction_ns_chi01_uL::synapse0x23ef260() {
   return (neuron0x23e4c30()*0.0268835);
}

double NNfunction_ns_chi01_uL::synapse0x23ef2a0() {
   return (neuron0x23e4f70()*0.0520965);
}

double NNfunction_ns_chi01_uL::synapse0x23ef2e0() {
   return (neuron0x23e52b0()*-0.018992);
}

double NNfunction_ns_chi01_uL::synapse0x23ef320() {
   return (neuron0x23e55f0()*-0.0207058);
}

double NNfunction_ns_chi01_uL::synapse0x23ef360() {
   return (neuron0x23e5930()*-0.00928485);
}

double NNfunction_ns_chi01_uL::synapse0x23ef3a0() {
   return (neuron0x23e5c70()*0.0686686);
}

double NNfunction_ns_chi01_uL::synapse0x23ef3e0() {
   return (neuron0x23e5fb0()*-0.424832);
}

double NNfunction_ns_chi01_uL::synapse0x23ef420() {
   return (neuron0x23e62f0()*0.0398903);
}

double NNfunction_ns_chi01_uL::synapse0x23ef460() {
   return (neuron0x23e6630()*0.0243978);
}

double NNfunction_ns_chi01_uL::synapse0x23ef4a0() {
   return (neuron0x23e6970()*0.0284097);
}

double NNfunction_ns_chi01_uL::synapse0x23ef4e0() {
   return (neuron0x23e6cb0()*0.0127316);
}

double NNfunction_ns_chi01_uL::synapse0x23eef70() {
   return (neuron0x23e6ff0()*-0.0421684);
}

double NNfunction_ns_chi01_uL::synapse0x23eefb0() {
   return (neuron0x23e7550()*-0.0279685);
}

double NNfunction_ns_chi01_uL::synapse0x23ebd40() {
   return (neuron0x23e7770()*-0.0276292);
}

double NNfunction_ns_chi01_uL::synapse0x23ebd80() {
   return (neuron0x23e7ab0()*-0.0155018);
}

double NNfunction_ns_chi01_uL::synapse0x23ebdc0() {
   return (neuron0x23e7df0()*0.00595666);
}

double NNfunction_ns_chi01_uL::synapse0x23ebe00() {
   return (neuron0x23e8130()*0.0238039);
}

double NNfunction_ns_chi01_uL::synapse0x23ebe40() {
   return (neuron0x23e8470()*-0.0428014);
}

double NNfunction_ns_chi01_uL::synapse0x23ebe80() {
   return (neuron0x23e87b0()*-0.147597);
}

double NNfunction_ns_chi01_uL::synapse0x23ec200() {
   return (neuron0x23e3c80()*1.01937);
}

double NNfunction_ns_chi01_uL::synapse0x23ec240() {
   return (neuron0x23e3f30()*0.544184);
}

double NNfunction_ns_chi01_uL::synapse0x23ec280() {
   return (neuron0x23e4270()*0.539206);
}

double NNfunction_ns_chi01_uL::synapse0x23ec2c0() {
   return (neuron0x23e45b0()*-0.165002);
}

double NNfunction_ns_chi01_uL::synapse0x23ec300() {
   return (neuron0x23e48f0()*-0.966743);
}

double NNfunction_ns_chi01_uL::synapse0x23ec340() {
   return (neuron0x23e4c30()*0.847842);
}

double NNfunction_ns_chi01_uL::synapse0x23ec380() {
   return (neuron0x23e4f70()*-0.358907);
}

double NNfunction_ns_chi01_uL::synapse0x23ec3c0() {
   return (neuron0x23e52b0()*1.06714);
}

double NNfunction_ns_chi01_uL::synapse0x23ec400() {
   return (neuron0x23e55f0()*-1.15865);
}

double NNfunction_ns_chi01_uL::synapse0x23ec440() {
   return (neuron0x23e5930()*-0.0197672);
}

double NNfunction_ns_chi01_uL::synapse0x23ec480() {
   return (neuron0x23e5c70()*0.847257);
}

double NNfunction_ns_chi01_uL::synapse0x23ec4c0() {
   return (neuron0x23e5fb0()*2.74345);
}

double NNfunction_ns_chi01_uL::synapse0x23ec500() {
   return (neuron0x23e62f0()*-0.874944);
}

double NNfunction_ns_chi01_uL::synapse0x23f0640() {
   return (neuron0x23e6630()*-0.740445);
}

double NNfunction_ns_chi01_uL::synapse0x23f0680() {
   return (neuron0x23e6970()*-0.744143);
}

double NNfunction_ns_chi01_uL::synapse0x23f06c0() {
   return (neuron0x23e6cb0()*-0.611815);
}

double NNfunction_ns_chi01_uL::synapse0x23ec050() {
   return (neuron0x23e6ff0()*-1.27326);
}

double NNfunction_ns_chi01_uL::synapse0x23ec090() {
   return (neuron0x23e7550()*0.17469);
}

double NNfunction_ns_chi01_uL::synapse0x23f0810() {
   return (neuron0x23e7770()*-0.448889);
}

double NNfunction_ns_chi01_uL::synapse0x23f0850() {
   return (neuron0x23e7ab0()*-1.61669);
}

double NNfunction_ns_chi01_uL::synapse0x23f0890() {
   return (neuron0x23e7df0()*0.797689);
}

double NNfunction_ns_chi01_uL::synapse0x23f08d0() {
   return (neuron0x23e8130()*-1.07893);
}

double NNfunction_ns_chi01_uL::synapse0x23f0910() {
   return (neuron0x23e8470()*0.706776);
}

double NNfunction_ns_chi01_uL::synapse0x23f0950() {
   return (neuron0x23e87b0()*0.329056);
}

double NNfunction_ns_chi01_uL::synapse0x23f0cd0() {
   return (neuron0x23e3c80()*-0.287483);
}

double NNfunction_ns_chi01_uL::synapse0x23f0d10() {
   return (neuron0x23e3f30()*0.710059);
}

double NNfunction_ns_chi01_uL::synapse0x23f0d50() {
   return (neuron0x23e4270()*1.74549);
}

double NNfunction_ns_chi01_uL::synapse0x23f0d90() {
   return (neuron0x23e45b0()*0.0988939);
}

double NNfunction_ns_chi01_uL::synapse0x23f0dd0() {
   return (neuron0x23e48f0()*0.171895);
}

double NNfunction_ns_chi01_uL::synapse0x23f0e10() {
   return (neuron0x23e4c30()*-0.235777);
}

double NNfunction_ns_chi01_uL::synapse0x23f0e50() {
   return (neuron0x23e4f70()*-0.096525);
}

double NNfunction_ns_chi01_uL::synapse0x23f0e90() {
   return (neuron0x23e52b0()*0.0254396);
}

double NNfunction_ns_chi01_uL::synapse0x23f0ed0() {
   return (neuron0x23e55f0()*0.179032);
}

double NNfunction_ns_chi01_uL::synapse0x23f0f10() {
   return (neuron0x23e5930()*-0.689092);
}

double NNfunction_ns_chi01_uL::synapse0x23f0f50() {
   return (neuron0x23e5c70()*0.0542379);
}

double NNfunction_ns_chi01_uL::synapse0x23f0f90() {
   return (neuron0x23e5fb0()*2.20513);
}

double NNfunction_ns_chi01_uL::synapse0x23f0fd0() {
   return (neuron0x23e62f0()*-0.661533);
}

double NNfunction_ns_chi01_uL::synapse0x23f1010() {
   return (neuron0x23e6630()*-0.865676);
}

double NNfunction_ns_chi01_uL::synapse0x23f1050() {
   return (neuron0x23e6970()*-0.552183);
}

double NNfunction_ns_chi01_uL::synapse0x23f1090() {
   return (neuron0x23e6cb0()*-0.285602);
}

double NNfunction_ns_chi01_uL::synapse0x23f0b20() {
   return (neuron0x23e6ff0()*0.569116);
}

double NNfunction_ns_chi01_uL::synapse0x23f0b60() {
   return (neuron0x23e7550()*0.0696522);
}

double NNfunction_ns_chi01_uL::synapse0x23f11e0() {
   return (neuron0x23e7770()*0.987956);
}

double NNfunction_ns_chi01_uL::synapse0x23f1220() {
   return (neuron0x23e7ab0()*-0.218255);
}

double NNfunction_ns_chi01_uL::synapse0x23f1260() {
   return (neuron0x23e7df0()*0.522145);
}

double NNfunction_ns_chi01_uL::synapse0x23f12a0() {
   return (neuron0x23e8130()*0.274641);
}

double NNfunction_ns_chi01_uL::synapse0x23f12e0() {
   return (neuron0x23e8470()*-0.324715);
}

double NNfunction_ns_chi01_uL::synapse0x23f1320() {
   return (neuron0x23e87b0()*-2.83333);
}

double NNfunction_ns_chi01_uL::synapse0x23f16a0() {
   return (neuron0x23e3c80()*-0.000211425);
}

double NNfunction_ns_chi01_uL::synapse0x23f16e0() {
   return (neuron0x23e3f30()*-9.97011);
}

double NNfunction_ns_chi01_uL::synapse0x23f1720() {
   return (neuron0x23e4270()*1.76516);
}

double NNfunction_ns_chi01_uL::synapse0x23f1760() {
   return (neuron0x23e45b0()*-0.00672533);
}

double NNfunction_ns_chi01_uL::synapse0x23f17a0() {
   return (neuron0x23e48f0()*-0.0045414);
}

double NNfunction_ns_chi01_uL::synapse0x23f17e0() {
   return (neuron0x23e4c30()*0.000107208);
}

double NNfunction_ns_chi01_uL::synapse0x23f1820() {
   return (neuron0x23e4f70()*-0.0232125);
}

double NNfunction_ns_chi01_uL::synapse0x23f1860() {
   return (neuron0x23e52b0()*0.0225053);
}

double NNfunction_ns_chi01_uL::synapse0x23f18a0() {
   return (neuron0x23e55f0()*-0.0301128);
}

double NNfunction_ns_chi01_uL::synapse0x23f18e0() {
   return (neuron0x23e5930()*-0.0417121);
}

double NNfunction_ns_chi01_uL::synapse0x23f1920() {
   return (neuron0x23e5c70()*-0.0133497);
}

double NNfunction_ns_chi01_uL::synapse0x23f1960() {
   return (neuron0x23e5fb0()*0.195884);
}

double NNfunction_ns_chi01_uL::synapse0x23f19a0() {
   return (neuron0x23e62f0()*0.0314151);
}

double NNfunction_ns_chi01_uL::synapse0x23f19e0() {
   return (neuron0x23e6630()*0.00731097);
}

double NNfunction_ns_chi01_uL::synapse0x23f1a20() {
   return (neuron0x23e6970()*-0.0386562);
}

double NNfunction_ns_chi01_uL::synapse0x23f1a60() {
   return (neuron0x23e6cb0()*-0.0223511);
}

double NNfunction_ns_chi01_uL::synapse0x23f14f0() {
   return (neuron0x23e6ff0()*-0.0243489);
}

double NNfunction_ns_chi01_uL::synapse0x23f1530() {
   return (neuron0x23e7550()*0.021817);
}

double NNfunction_ns_chi01_uL::synapse0x23f1bb0() {
   return (neuron0x23e7770()*-0.010377);
}

double NNfunction_ns_chi01_uL::synapse0x23f1bf0() {
   return (neuron0x23e7ab0()*0.0142205);
}

double NNfunction_ns_chi01_uL::synapse0x23f1c30() {
   return (neuron0x23e7df0()*0.00886727);
}

double NNfunction_ns_chi01_uL::synapse0x23f1c70() {
   return (neuron0x23e8130()*0.0226366);
}

double NNfunction_ns_chi01_uL::synapse0x23f1cb0() {
   return (neuron0x23e8470()*-0.0154176);
}

double NNfunction_ns_chi01_uL::synapse0x23f1cf0() {
   return (neuron0x23e87b0()*-0.13012);
}

double NNfunction_ns_chi01_uL::synapse0x23f2070() {
   return (neuron0x23e3c80()*0.0081896);
}

double NNfunction_ns_chi01_uL::synapse0x23f20b0() {
   return (neuron0x23e3f30()*-0.0100419);
}

double NNfunction_ns_chi01_uL::synapse0x23f20f0() {
   return (neuron0x23e4270()*-0.0424434);
}

double NNfunction_ns_chi01_uL::synapse0x23f2130() {
   return (neuron0x23e45b0()*3.95131);
}

double NNfunction_ns_chi01_uL::synapse0x23f2170() {
   return (neuron0x23e48f0()*-0.0342573);
}

double NNfunction_ns_chi01_uL::synapse0x23f21b0() {
   return (neuron0x23e4c30()*0.0201832);
}

double NNfunction_ns_chi01_uL::synapse0x23f21f0() {
   return (neuron0x23e4f70()*-0.0151426);
}

double NNfunction_ns_chi01_uL::synapse0x23f2230() {
   return (neuron0x23e52b0()*-0.00877407);
}

double NNfunction_ns_chi01_uL::synapse0x23f2270() {
   return (neuron0x23e55f0()*0.0102315);
}

double NNfunction_ns_chi01_uL::synapse0x23f22b0() {
   return (neuron0x23e5930()*0.0128059);
}

double NNfunction_ns_chi01_uL::synapse0x23f22f0() {
   return (neuron0x23e5c70()*0.0274171);
}

double NNfunction_ns_chi01_uL::synapse0x23f2330() {
   return (neuron0x23e5fb0()*0.475123);
}

double NNfunction_ns_chi01_uL::synapse0x23f2370() {
   return (neuron0x23e62f0()*0.0186188);
}

double NNfunction_ns_chi01_uL::synapse0x23f23b0() {
   return (neuron0x23e6630()*0.0421379);
}

double NNfunction_ns_chi01_uL::synapse0x23f23f0() {
   return (neuron0x23e6970()*-0.0317894);
}

double NNfunction_ns_chi01_uL::synapse0x23f2430() {
   return (neuron0x23e6cb0()*-0.0058634);
}

double NNfunction_ns_chi01_uL::synapse0x23f1ec0() {
   return (neuron0x23e6ff0()*0.0274405);
}

double NNfunction_ns_chi01_uL::synapse0x23f1f00() {
   return (neuron0x23e7550()*0.0227784);
}

double NNfunction_ns_chi01_uL::synapse0x23f2580() {
   return (neuron0x23e7770()*0.0121921);
}

double NNfunction_ns_chi01_uL::synapse0x23f25c0() {
   return (neuron0x23e7ab0()*0.0313943);
}

double NNfunction_ns_chi01_uL::synapse0x23f2600() {
   return (neuron0x23e7df0()*-9.78155e-05);
}

double NNfunction_ns_chi01_uL::synapse0x23f2640() {
   return (neuron0x23e8130()*-0.0171762);
}

double NNfunction_ns_chi01_uL::synapse0x23f2680() {
   return (neuron0x23e8470()*-0.00312096);
}

double NNfunction_ns_chi01_uL::synapse0x23f26c0() {
   return (neuron0x23e87b0()*0.0185963);
}

double NNfunction_ns_chi01_uL::synapse0x23f2a40() {
   return (neuron0x23e3c80()*0.0161368);
}

double NNfunction_ns_chi01_uL::synapse0x23e3e10() {
   return (neuron0x23e3f30()*8.96206);
}

double NNfunction_ns_chi01_uL::synapse0x23e3e50() {
   return (neuron0x23e4270()*-1.73086);
}

double NNfunction_ns_chi01_uL::synapse0x23e4150() {
   return (neuron0x23e45b0()*0.0183957);
}

double NNfunction_ns_chi01_uL::synapse0x23e4190() {
   return (neuron0x23e48f0()*-0.0571285);
}

double NNfunction_ns_chi01_uL::synapse0x23e4490() {
   return (neuron0x23e4c30()*-0.0174684);
}

double NNfunction_ns_chi01_uL::synapse0x23e44d0() {
   return (neuron0x23e4f70()*0.0155563);
}

double NNfunction_ns_chi01_uL::synapse0x23e47d0() {
   return (neuron0x23e52b0()*-0.0209741);
}

double NNfunction_ns_chi01_uL::synapse0x23e4810() {
   return (neuron0x23e55f0()*0.0337862);
}

double NNfunction_ns_chi01_uL::synapse0x23e4b10() {
   return (neuron0x23e5930()*0.0237332);
}

double NNfunction_ns_chi01_uL::synapse0x23e4b50() {
   return (neuron0x23e5c70()*0.0172824);
}

double NNfunction_ns_chi01_uL::synapse0x23e4e50() {
   return (neuron0x23e5fb0()*0.0209433);
}

double NNfunction_ns_chi01_uL::synapse0x23e4e90() {
   return (neuron0x23e62f0()*-0.0347085);
}

double NNfunction_ns_chi01_uL::synapse0x23e5190() {
   return (neuron0x23e6630()*-0.0385159);
}

double NNfunction_ns_chi01_uL::synapse0x23e51d0() {
   return (neuron0x23e6970()*0.0268759);
}

double NNfunction_ns_chi01_uL::synapse0x23e54d0() {
   return (neuron0x23e6cb0()*0.00550895);
}

double NNfunction_ns_chi01_uL::synapse0x23e5510() {
   return (neuron0x23e6ff0()*-0.0109701);
}

double NNfunction_ns_chi01_uL::synapse0x23e5810() {
   return (neuron0x23e7550()*-0.0460607);
}

double NNfunction_ns_chi01_uL::synapse0x23e5850() {
   return (neuron0x23e7770()*0.0300969);
}

double NNfunction_ns_chi01_uL::synapse0x23e5b50() {
   return (neuron0x23e7ab0()*-0.000313938);
}

double NNfunction_ns_chi01_uL::synapse0x23e5b90() {
   return (neuron0x23e7df0()*-0.0211642);
}

double NNfunction_ns_chi01_uL::synapse0x23e5e90() {
   return (neuron0x23e8130()*-0.0174688);
}

double NNfunction_ns_chi01_uL::synapse0x23e5ed0() {
   return (neuron0x23e8470()*0.00703353);
}

double NNfunction_ns_chi01_uL::synapse0x23e61d0() {
   return (neuron0x23e87b0()*3.20278);
}

double NNfunction_ns_chi01_uL::synapse0x23e6210() {
   return (neuron0x23e3c80()*0.0126492);
}

double NNfunction_ns_chi01_uL::synapse0x23e6ed0() {
   return (neuron0x23e3f30()*-0.0209275);
}

double NNfunction_ns_chi01_uL::synapse0x23e6f10() {
   return (neuron0x23e4270()*0.0343598);
}

double NNfunction_ns_chi01_uL::synapse0x23f2890() {
   return (neuron0x23e45b0()*3.24048);
}

double NNfunction_ns_chi01_uL::synapse0x23f28d0() {
   return (neuron0x23e48f0()*0.0247235);
}

double NNfunction_ns_chi01_uL::synapse0x23e7210() {
   return (neuron0x23e4c30()*0.000491216);
}

double NNfunction_ns_chi01_uL::synapse0x23e7250() {
   return (neuron0x23e4f70()*0.0137285);
}

double NNfunction_ns_chi01_uL::synapse0x23e7990() {
   return (neuron0x23e52b0()*-0.013901);
}

double NNfunction_ns_chi01_uL::synapse0x23e79d0() {
   return (neuron0x23e55f0()*0.015689);
}

double NNfunction_ns_chi01_uL::synapse0x23e7cd0() {
   return (neuron0x23e5930()*0.0235323);
}

double NNfunction_ns_chi01_uL::synapse0x23e7d10() {
   return (neuron0x23e5c70()*-0.00133324);
}

double NNfunction_ns_chi01_uL::synapse0x23e8010() {
   return (neuron0x23e5fb0()*-0.86363);
}

double NNfunction_ns_chi01_uL::synapse0x23e8050() {
   return (neuron0x23e62f0()*-0.0296389);
}

double NNfunction_ns_chi01_uL::synapse0x23e8350() {
   return (neuron0x23e6630()*-0.0175364);
}

double NNfunction_ns_chi01_uL::synapse0x23e8390() {
   return (neuron0x23e6970()*-0.00728484);
}

double NNfunction_ns_chi01_uL::synapse0x23e8690() {
   return (neuron0x23e6cb0()*0.0146356);
}

double NNfunction_ns_chi01_uL::synapse0x23e86d0() {
   return (neuron0x23e6ff0()*-0.0184674);
}

double NNfunction_ns_chi01_uL::synapse0x23e89d0() {
   return (neuron0x23e7550()*-0.0298874);
}

double NNfunction_ns_chi01_uL::synapse0x23e8a10() {
   return (neuron0x23e7770()*-0.0216957);
}

double NNfunction_ns_chi01_uL::synapse0x23e6510() {
   return (neuron0x23e7ab0()*-0.0418767);
}

double NNfunction_ns_chi01_uL::synapse0x23e6550() {
   return (neuron0x23e7df0()*-0.0107725);
}

double NNfunction_ns_chi01_uL::synapse0x219e050() {
   return (neuron0x23e8130()*0.032096);
}

double NNfunction_ns_chi01_uL::synapse0x219e090() {
   return (neuron0x23e8470()*-0.0177645);
}

double NNfunction_ns_chi01_uL::synapse0x23f47b0() {
   return (neuron0x23e87b0()*-0.00408634);
}

double NNfunction_ns_chi01_uL::synapse0x23f4b30() {
   return (neuron0x23e3c80()*0.0352204);
}

double NNfunction_ns_chi01_uL::synapse0x23f4b70() {
   return (neuron0x23e3f30()*21.7158);
}

double NNfunction_ns_chi01_uL::synapse0x23f4bb0() {
   return (neuron0x23e4270()*-0.608183);
}

double NNfunction_ns_chi01_uL::synapse0x23f4bf0() {
   return (neuron0x23e45b0()*-0.0037104);
}

double NNfunction_ns_chi01_uL::synapse0x23f4c30() {
   return (neuron0x23e48f0()*-0.0396346);
}

double NNfunction_ns_chi01_uL::synapse0x23f4c70() {
   return (neuron0x23e4c30()*-0.0709963);
}

double NNfunction_ns_chi01_uL::synapse0x23f4cb0() {
   return (neuron0x23e4f70()*-0.0104472);
}

double NNfunction_ns_chi01_uL::synapse0x23f4cf0() {
   return (neuron0x23e52b0()*-0.00120414);
}

double NNfunction_ns_chi01_uL::synapse0x23f4d30() {
   return (neuron0x23e55f0()*0.00277833);
}

double NNfunction_ns_chi01_uL::synapse0x23f4d70() {
   return (neuron0x23e5930()*0.051792);
}

double NNfunction_ns_chi01_uL::synapse0x23f4db0() {
   return (neuron0x23e5c70()*0.0149146);
}

double NNfunction_ns_chi01_uL::synapse0x23f4df0() {
   return (neuron0x23e5fb0()*-0.386084);
}

double NNfunction_ns_chi01_uL::synapse0x23f4e30() {
   return (neuron0x23e62f0()*-0.0194858);
}

double NNfunction_ns_chi01_uL::synapse0x23f4e70() {
   return (neuron0x23e6630()*-0.0418812);
}

double NNfunction_ns_chi01_uL::synapse0x23f4eb0() {
   return (neuron0x23e6970()*0.0154234);
}

double NNfunction_ns_chi01_uL::synapse0x23f4ef0() {
   return (neuron0x23e6cb0()*-0.0295721);
}

double NNfunction_ns_chi01_uL::synapse0x23f4980() {
   return (neuron0x23e6ff0()*-0.0266201);
}

double NNfunction_ns_chi01_uL::synapse0x23f49c0() {
   return (neuron0x23e7550()*-0.0280765);
}

double NNfunction_ns_chi01_uL::synapse0x23f5040() {
   return (neuron0x23e7770()*0.0091057);
}

double NNfunction_ns_chi01_uL::synapse0x23f5080() {
   return (neuron0x23e7ab0()*0.00198438);
}

double NNfunction_ns_chi01_uL::synapse0x23f50c0() {
   return (neuron0x23e7df0()*-0.04359);
}

double NNfunction_ns_chi01_uL::synapse0x23f5100() {
   return (neuron0x23e8130()*-0.0482557);
}

double NNfunction_ns_chi01_uL::synapse0x23f5140() {
   return (neuron0x23e8470()*-0.0505517);
}

double NNfunction_ns_chi01_uL::synapse0x23f5180() {
   return (neuron0x23e87b0()*9.64853);
}

double NNfunction_ns_chi01_uL::synapse0x23f5500() {
   return (neuron0x23e3c80()*-0.0119812);
}

double NNfunction_ns_chi01_uL::synapse0x23f5540() {
   return (neuron0x23e3f30()*0.029033);
}

double NNfunction_ns_chi01_uL::synapse0x23f5580() {
   return (neuron0x23e4270()*-0.466135);
}

double NNfunction_ns_chi01_uL::synapse0x23f55c0() {
   return (neuron0x23e45b0()*0.127234);
}

double NNfunction_ns_chi01_uL::synapse0x23f5600() {
   return (neuron0x23e48f0()*-0.0877124);
}

double NNfunction_ns_chi01_uL::synapse0x23f5640() {
   return (neuron0x23e4c30()*-0.0103407);
}

double NNfunction_ns_chi01_uL::synapse0x23f5680() {
   return (neuron0x23e4f70()*-0.00206231);
}

double NNfunction_ns_chi01_uL::synapse0x23f56c0() {
   return (neuron0x23e52b0()*0.0067135);
}

double NNfunction_ns_chi01_uL::synapse0x23f5700() {
   return (neuron0x23e55f0()*0.0365584);
}

double NNfunction_ns_chi01_uL::synapse0x23f5740() {
   return (neuron0x23e5930()*-0.0127308);
}

double NNfunction_ns_chi01_uL::synapse0x23f5780() {
   return (neuron0x23e5c70()*-0.0128175);
}

double NNfunction_ns_chi01_uL::synapse0x23f57c0() {
   return (neuron0x23e5fb0()*-1.62981);
}

double NNfunction_ns_chi01_uL::synapse0x23f5800() {
   return (neuron0x23e62f0()*-0.019161);
}

double NNfunction_ns_chi01_uL::synapse0x23f5840() {
   return (neuron0x23e6630()*0.0104683);
}

double NNfunction_ns_chi01_uL::synapse0x23f5880() {
   return (neuron0x23e6970()*-0.00851312);
}

double NNfunction_ns_chi01_uL::synapse0x23f58c0() {
   return (neuron0x23e6cb0()*-0.00582821);
}

double NNfunction_ns_chi01_uL::synapse0x23f5350() {
   return (neuron0x23e6ff0()*0.0172978);
}

double NNfunction_ns_chi01_uL::synapse0x23f5390() {
   return (neuron0x23e7550()*-0.00358327);
}

double NNfunction_ns_chi01_uL::synapse0x23f5a10() {
   return (neuron0x23e7770()*0.0806035);
}

double NNfunction_ns_chi01_uL::synapse0x23f5a50() {
   return (neuron0x23e7ab0()*0.0178043);
}

double NNfunction_ns_chi01_uL::synapse0x23f5a90() {
   return (neuron0x23e7df0()*-0.0409519);
}

double NNfunction_ns_chi01_uL::synapse0x23f5ad0() {
   return (neuron0x23e8130()*0.0172866);
}

double NNfunction_ns_chi01_uL::synapse0x23f5b10() {
   return (neuron0x23e8470()*-0.0330974);
}

double NNfunction_ns_chi01_uL::synapse0x23f5b50() {
   return (neuron0x23e87b0()*-0.320757);
}

double NNfunction_ns_chi01_uL::synapse0x23f5ed0() {
   return (neuron0x23e3c80()*0.0769253);
}

double NNfunction_ns_chi01_uL::synapse0x23f5f10() {
   return (neuron0x23e3f30()*0.0682316);
}

double NNfunction_ns_chi01_uL::synapse0x23f5f50() {
   return (neuron0x23e4270()*0.669833);
}

double NNfunction_ns_chi01_uL::synapse0x23f5f90() {
   return (neuron0x23e45b0()*0.0737382);
}

double NNfunction_ns_chi01_uL::synapse0x23f5fd0() {
   return (neuron0x23e48f0()*-0.0456984);
}

double NNfunction_ns_chi01_uL::synapse0x23f6010() {
   return (neuron0x23e4c30()*-0.0524437);
}

double NNfunction_ns_chi01_uL::synapse0x23f6050() {
   return (neuron0x23e4f70()*-0.0405761);
}

double NNfunction_ns_chi01_uL::synapse0x23f6090() {
   return (neuron0x23e52b0()*-0.030533);
}

double NNfunction_ns_chi01_uL::synapse0x23f60d0() {
   return (neuron0x23e55f0()*-0.0186318);
}

double NNfunction_ns_chi01_uL::synapse0x23f6110() {
   return (neuron0x23e5930()*0.0104033);
}

double NNfunction_ns_chi01_uL::synapse0x23f6150() {
   return (neuron0x23e5c70()*0.0525437);
}

double NNfunction_ns_chi01_uL::synapse0x23f6190() {
   return (neuron0x23e5fb0()*-0.0249018);
}

double NNfunction_ns_chi01_uL::synapse0x23f61d0() {
   return (neuron0x23e62f0()*0.0383743);
}

double NNfunction_ns_chi01_uL::synapse0x23f6210() {
   return (neuron0x23e6630()*-0.0308219);
}

double NNfunction_ns_chi01_uL::synapse0x23f6250() {
   return (neuron0x23e6970()*0.0153064);
}

double NNfunction_ns_chi01_uL::synapse0x23f6290() {
   return (neuron0x23e6cb0()*-0.0597709);
}

double NNfunction_ns_chi01_uL::synapse0x23f5d20() {
   return (neuron0x23e6ff0()*-0.0369801);
}

double NNfunction_ns_chi01_uL::synapse0x23f5d60() {
   return (neuron0x23e7550()*-0.00718585);
}

double NNfunction_ns_chi01_uL::synapse0x23f63e0() {
   return (neuron0x23e7770()*0.077193);
}

double NNfunction_ns_chi01_uL::synapse0x23f6420() {
   return (neuron0x23e7ab0()*0.00718067);
}

double NNfunction_ns_chi01_uL::synapse0x23f6460() {
   return (neuron0x23e7df0()*0.0018522);
}

double NNfunction_ns_chi01_uL::synapse0x23f64a0() {
   return (neuron0x23e8130()*0.0143919);
}

double NNfunction_ns_chi01_uL::synapse0x23f64e0() {
   return (neuron0x23e8470()*-0.0267158);
}

double NNfunction_ns_chi01_uL::synapse0x23f6520() {
   return (neuron0x23e87b0()*5.15316);
}

double NNfunction_ns_chi01_uL::synapse0x23f68a0() {
   return (neuron0x23e3c80()*-0.0449062);
}

double NNfunction_ns_chi01_uL::synapse0x23f68e0() {
   return (neuron0x23e3f30()*0.00190761);
}

double NNfunction_ns_chi01_uL::synapse0x23f6920() {
   return (neuron0x23e4270()*-0.198565);
}

double NNfunction_ns_chi01_uL::synapse0x23f6960() {
   return (neuron0x23e45b0()*0.0974995);
}

double NNfunction_ns_chi01_uL::synapse0x23f69a0() {
   return (neuron0x23e48f0()*-0.0196841);
}

double NNfunction_ns_chi01_uL::synapse0x23f69e0() {
   return (neuron0x23e4c30()*-0.010659);
}

double NNfunction_ns_chi01_uL::synapse0x23f6a20() {
   return (neuron0x23e4f70()*-0.0118638);
}

double NNfunction_ns_chi01_uL::synapse0x23f6a60() {
   return (neuron0x23e52b0()*0.00374851);
}

double NNfunction_ns_chi01_uL::synapse0x23f6aa0() {
   return (neuron0x23e55f0()*-0.0181007);
}

double NNfunction_ns_chi01_uL::synapse0x23f6ae0() {
   return (neuron0x23e5930()*0.0107164);
}

double NNfunction_ns_chi01_uL::synapse0x23f6b20() {
   return (neuron0x23e5c70()*-0.0153349);
}

double NNfunction_ns_chi01_uL::synapse0x23f6b60() {
   return (neuron0x23e5fb0()*2.59227);
}

double NNfunction_ns_chi01_uL::synapse0x23f6ba0() {
   return (neuron0x23e62f0()*-0.0125877);
}

double NNfunction_ns_chi01_uL::synapse0x23f6be0() {
   return (neuron0x23e6630()*-0.00725215);
}

double NNfunction_ns_chi01_uL::synapse0x23f6c20() {
   return (neuron0x23e6970()*-0.00697198);
}

double NNfunction_ns_chi01_uL::synapse0x23f6c60() {
   return (neuron0x23e6cb0()*0.013122);
}

double NNfunction_ns_chi01_uL::synapse0x23f66f0() {
   return (neuron0x23e6ff0()*0.0473735);
}

double NNfunction_ns_chi01_uL::synapse0x23f6730() {
   return (neuron0x23e7550()*0.0164658);
}

double NNfunction_ns_chi01_uL::synapse0x23f6db0() {
   return (neuron0x23e7770()*-0.0380317);
}

double NNfunction_ns_chi01_uL::synapse0x23f6df0() {
   return (neuron0x23e7ab0()*0.0299799);
}

double NNfunction_ns_chi01_uL::synapse0x23f6e30() {
   return (neuron0x23e7df0()*0.00646667);
}

double NNfunction_ns_chi01_uL::synapse0x23f6e70() {
   return (neuron0x23e8130()*-0.0293126);
}

double NNfunction_ns_chi01_uL::synapse0x23f6eb0() {
   return (neuron0x23e8470()*0.0215865);
}

double NNfunction_ns_chi01_uL::synapse0x23f6ef0() {
   return (neuron0x23e87b0()*0.107962);
}

double NNfunction_ns_chi01_uL::synapse0x23f7270() {
   return (neuron0x23e3c80()*-0.905694);
}

double NNfunction_ns_chi01_uL::synapse0x23f72b0() {
   return (neuron0x23e3f30()*0.786614);
}

double NNfunction_ns_chi01_uL::synapse0x23f72f0() {
   return (neuron0x23e4270()*0.422808);
}

double NNfunction_ns_chi01_uL::synapse0x23f7330() {
   return (neuron0x23e45b0()*0.0341667);
}

double NNfunction_ns_chi01_uL::synapse0x23f7370() {
   return (neuron0x23e48f0()*0.0972222);
}

double NNfunction_ns_chi01_uL::synapse0x23f73b0() {
   return (neuron0x23e4c30()*1.81475);
}

double NNfunction_ns_chi01_uL::synapse0x23f73f0() {
   return (neuron0x23e4f70()*-0.0729546);
}

double NNfunction_ns_chi01_uL::synapse0x23f7430() {
   return (neuron0x23e52b0()*-1.76402);
}

double NNfunction_ns_chi01_uL::synapse0x23f7470() {
   return (neuron0x23e55f0()*0.625869);
}

double NNfunction_ns_chi01_uL::synapse0x23ef630() {
   return (neuron0x23e5930()*-0.557026);
}

double NNfunction_ns_chi01_uL::synapse0x23ef670() {
   return (neuron0x23e5c70()*2.04527);
}

double NNfunction_ns_chi01_uL::synapse0x23ef6b0() {
   return (neuron0x23e5fb0()*-0.67666);
}

double NNfunction_ns_chi01_uL::synapse0x23ef6f0() {
   return (neuron0x23e62f0()*0.907317);
}

double NNfunction_ns_chi01_uL::synapse0x23ef730() {
   return (neuron0x23e6630()*1.03934);
}

double NNfunction_ns_chi01_uL::synapse0x23ef770() {
   return (neuron0x23e6970()*1.0309);
}

double NNfunction_ns_chi01_uL::synapse0x23ef7b0() {
   return (neuron0x23e6cb0()*-1.42566);
}

double NNfunction_ns_chi01_uL::synapse0x23f70c0() {
   return (neuron0x23e6ff0()*-1.24746);
}

double NNfunction_ns_chi01_uL::synapse0x23f7100() {
   return (neuron0x23e7550()*-0.160199);
}

double NNfunction_ns_chi01_uL::synapse0x23ef900() {
   return (neuron0x23e7770()*-0.116956);
}

double NNfunction_ns_chi01_uL::synapse0x23ef940() {
   return (neuron0x23e7ab0()*-0.562651);
}

double NNfunction_ns_chi01_uL::synapse0x23ef980() {
   return (neuron0x23e7df0()*-0.47087);
}

double NNfunction_ns_chi01_uL::synapse0x23ef9c0() {
   return (neuron0x23e8130()*-0.967093);
}

double NNfunction_ns_chi01_uL::synapse0x23efa00() {
   return (neuron0x23e8470()*-0.107141);
}

double NNfunction_ns_chi01_uL::synapse0x23efa40() {
   return (neuron0x23e87b0()*-1.76216);
}

double NNfunction_ns_chi01_uL::synapse0x23efdc0() {
   return (neuron0x23e3c80()*0.0420501);
}

double NNfunction_ns_chi01_uL::synapse0x23efe00() {
   return (neuron0x23e3f30()*-0.0122965);
}

double NNfunction_ns_chi01_uL::synapse0x23efe40() {
   return (neuron0x23e4270()*0.0675571);
}

double NNfunction_ns_chi01_uL::synapse0x23efe80() {
   return (neuron0x23e45b0()*1.07868);
}

double NNfunction_ns_chi01_uL::synapse0x23efec0() {
   return (neuron0x23e48f0()*0.00507845);
}

double NNfunction_ns_chi01_uL::synapse0x23eff00() {
   return (neuron0x23e4c30()*0.00673158);
}

double NNfunction_ns_chi01_uL::synapse0x23eff40() {
   return (neuron0x23e4f70()*-0.0384446);
}

double NNfunction_ns_chi01_uL::synapse0x23eff80() {
   return (neuron0x23e52b0()*-0.0413144);
}

double NNfunction_ns_chi01_uL::synapse0x23effc0() {
   return (neuron0x23e55f0()*0.0159417);
}

double NNfunction_ns_chi01_uL::synapse0x23f0000() {
   return (neuron0x23e5930()*0.0545313);
}

double NNfunction_ns_chi01_uL::synapse0x23f0040() {
   return (neuron0x23e5c70()*0.0614432);
}

double NNfunction_ns_chi01_uL::synapse0x23f0080() {
   return (neuron0x23e5fb0()*-1.42136);
}

double NNfunction_ns_chi01_uL::synapse0x23f00c0() {
   return (neuron0x23e62f0()*-0.0458014);
}

double NNfunction_ns_chi01_uL::synapse0x23f0100() {
   return (neuron0x23e6630()*-0.0137229);
}

double NNfunction_ns_chi01_uL::synapse0x23f0140() {
   return (neuron0x23e6970()*-0.0911668);
}

double NNfunction_ns_chi01_uL::synapse0x23f0180() {
   return (neuron0x23e6cb0()*-0.085509);
}

double NNfunction_ns_chi01_uL::synapse0x23efc10() {
   return (neuron0x23e6ff0()*-0.082389);
}

double NNfunction_ns_chi01_uL::synapse0x23efc50() {
   return (neuron0x23e7550()*-0.0172788);
}

double NNfunction_ns_chi01_uL::synapse0x23f02d0() {
   return (neuron0x23e7770()*-0.0493866);
}

double NNfunction_ns_chi01_uL::synapse0x23f0310() {
   return (neuron0x23e7ab0()*-0.0578451);
}

double NNfunction_ns_chi01_uL::synapse0x23f0350() {
   return (neuron0x23e7df0()*0.010377);
}

double NNfunction_ns_chi01_uL::synapse0x23f0390() {
   return (neuron0x23e8130()*0.0175678);
}

double NNfunction_ns_chi01_uL::synapse0x23f03d0() {
   return (neuron0x23e8470()*-0.0215602);
}

double NNfunction_ns_chi01_uL::synapse0x23f0410() {
   return (neuron0x23e87b0()*0.0930944);
}

double NNfunction_ns_chi01_uL::synapse0x23f05e0() {
   return (neuron0x23e3c80()*0.0186578);
}

double NNfunction_ns_chi01_uL::synapse0x23f9670() {
   return (neuron0x23e3f30()*-3.67832);
}

double NNfunction_ns_chi01_uL::synapse0x23f96b0() {
   return (neuron0x23e4270()*-0.540332);
}

double NNfunction_ns_chi01_uL::synapse0x23f96f0() {
   return (neuron0x23e45b0()*0.00439516);
}

double NNfunction_ns_chi01_uL::synapse0x23f9730() {
   return (neuron0x23e48f0()*0.00304945);
}

double NNfunction_ns_chi01_uL::synapse0x23f9770() {
   return (neuron0x23e4c30()*0.00984568);
}

double NNfunction_ns_chi01_uL::synapse0x23f97b0() {
   return (neuron0x23e4f70()*-0.00686627);
}

double NNfunction_ns_chi01_uL::synapse0x23f97f0() {
   return (neuron0x23e52b0()*0.000542553);
}

double NNfunction_ns_chi01_uL::synapse0x23f9830() {
   return (neuron0x23e55f0()*-0.0119953);
}

double NNfunction_ns_chi01_uL::synapse0x23f9870() {
   return (neuron0x23e5930()*-0.0150711);
}

double NNfunction_ns_chi01_uL::synapse0x23f98b0() {
   return (neuron0x23e5c70()*-0.0114695);
}

double NNfunction_ns_chi01_uL::synapse0x23f98f0() {
   return (neuron0x23e5fb0()*0.192834);
}

double NNfunction_ns_chi01_uL::synapse0x23f9930() {
   return (neuron0x23e62f0()*-0.00437541);
}

double NNfunction_ns_chi01_uL::synapse0x23f9970() {
   return (neuron0x23e6630()*-0.00258061);
}

double NNfunction_ns_chi01_uL::synapse0x23f99b0() {
   return (neuron0x23e6970()*-0.00424731);
}

double NNfunction_ns_chi01_uL::synapse0x23f99f0() {
   return (neuron0x23e6cb0()*-0.00345378);
}

double NNfunction_ns_chi01_uL::synapse0x23f94c0() {
   return (neuron0x23e6ff0()*0.00551148);
}

double NNfunction_ns_chi01_uL::synapse0x23f9500() {
   return (neuron0x23e7550()*-0.00590173);
}

double NNfunction_ns_chi01_uL::synapse0x23f9b40() {
   return (neuron0x23e7770()*-0.00592366);
}

double NNfunction_ns_chi01_uL::synapse0x23f9b80() {
   return (neuron0x23e7ab0()*-0.0157396);
}

double NNfunction_ns_chi01_uL::synapse0x23f9bc0() {
   return (neuron0x23e7df0()*-0.0106251);
}

double NNfunction_ns_chi01_uL::synapse0x23f9c00() {
   return (neuron0x23e8130()*0.00225866);
}

double NNfunction_ns_chi01_uL::synapse0x23f9c40() {
   return (neuron0x23e8470()*-0.00224332);
}

double NNfunction_ns_chi01_uL::synapse0x23f9c80() {
   return (neuron0x23e87b0()*0.21096);
}

double NNfunction_ns_chi01_uL::synapse0x23fa000() {
   return (neuron0x23e3c80()*0.00772461);
}

double NNfunction_ns_chi01_uL::synapse0x23fa040() {
   return (neuron0x23e3f30()*0.0115256);
}

double NNfunction_ns_chi01_uL::synapse0x23fa080() {
   return (neuron0x23e4270()*0.0530639);
}

double NNfunction_ns_chi01_uL::synapse0x23fa0c0() {
   return (neuron0x23e45b0()*-0.208681);
}

double NNfunction_ns_chi01_uL::synapse0x23fa100() {
   return (neuron0x23e48f0()*-0.00319889);
}

double NNfunction_ns_chi01_uL::synapse0x23fa140() {
   return (neuron0x23e4c30()*0.016854);
}

double NNfunction_ns_chi01_uL::synapse0x23fa180() {
   return (neuron0x23e4f70()*0.00784563);
}

double NNfunction_ns_chi01_uL::synapse0x23fa1c0() {
   return (neuron0x23e52b0()*-0.00987619);
}

double NNfunction_ns_chi01_uL::synapse0x23fa200() {
   return (neuron0x23e55f0()*-0.00279079);
}

double NNfunction_ns_chi01_uL::synapse0x23fa240() {
   return (neuron0x23e5930()*0.0169316);
}

double NNfunction_ns_chi01_uL::synapse0x23fa280() {
   return (neuron0x23e5c70()*0.00321976);
}

double NNfunction_ns_chi01_uL::synapse0x23fa2c0() {
   return (neuron0x23e5fb0()*-1.11649);
}

double NNfunction_ns_chi01_uL::synapse0x23fa300() {
   return (neuron0x23e62f0()*7.33345e-05);
}

double NNfunction_ns_chi01_uL::synapse0x23fa340() {
   return (neuron0x23e6630()*-0.00563665);
}

double NNfunction_ns_chi01_uL::synapse0x23fa380() {
   return (neuron0x23e6970()*0.00972993);
}

double NNfunction_ns_chi01_uL::synapse0x23fa3c0() {
   return (neuron0x23e6cb0()*0.00475292);
}

double NNfunction_ns_chi01_uL::synapse0x23f9e50() {
   return (neuron0x23e6ff0()*-0.00943081);
}

double NNfunction_ns_chi01_uL::synapse0x23f9e90() {
   return (neuron0x23e7550()*0.00610209);
}

double NNfunction_ns_chi01_uL::synapse0x23fa510() {
   return (neuron0x23e7770()*-0.00559209);
}

double NNfunction_ns_chi01_uL::synapse0x23fa550() {
   return (neuron0x23e7ab0()*0.00117689);
}

double NNfunction_ns_chi01_uL::synapse0x23fa590() {
   return (neuron0x23e7df0()*-0.00910736);
}

double NNfunction_ns_chi01_uL::synapse0x23fa5d0() {
   return (neuron0x23e8130()*-0.0209169);
}

double NNfunction_ns_chi01_uL::synapse0x23fa610() {
   return (neuron0x23e8470()*-0.0051712);
}

double NNfunction_ns_chi01_uL::synapse0x23fa650() {
   return (neuron0x23e87b0()*0.0730602);
}

double NNfunction_ns_chi01_uL::synapse0x23fa9d0() {
   return (neuron0x23e3c80()*-0.482141);
}

double NNfunction_ns_chi01_uL::synapse0x23faa10() {
   return (neuron0x23e3f30()*0.600584);
}

double NNfunction_ns_chi01_uL::synapse0x23faa50() {
   return (neuron0x23e4270()*-2.12314);
}

double NNfunction_ns_chi01_uL::synapse0x23faa90() {
   return (neuron0x23e45b0()*-2.09181);
}

double NNfunction_ns_chi01_uL::synapse0x23faad0() {
   return (neuron0x23e48f0()*-0.64502);
}

double NNfunction_ns_chi01_uL::synapse0x23fab10() {
   return (neuron0x23e4c30()*1.43302);
}

double NNfunction_ns_chi01_uL::synapse0x23fab50() {
   return (neuron0x23e4f70()*1.89857);
}

double NNfunction_ns_chi01_uL::synapse0x23fab90() {
   return (neuron0x23e52b0()*0.525085);
}

double NNfunction_ns_chi01_uL::synapse0x23fabd0() {
   return (neuron0x23e55f0()*0.456022);
}

double NNfunction_ns_chi01_uL::synapse0x23fac10() {
   return (neuron0x23e5930()*0.73923);
}

double NNfunction_ns_chi01_uL::synapse0x23fac50() {
   return (neuron0x23e5c70()*-0.175438);
}

double NNfunction_ns_chi01_uL::synapse0x23fac90() {
   return (neuron0x23e5fb0()*-1.87169);
}

double NNfunction_ns_chi01_uL::synapse0x23facd0() {
   return (neuron0x23e62f0()*-1.66397);
}

double NNfunction_ns_chi01_uL::synapse0x23fad10() {
   return (neuron0x23e6630()*0.20785);
}

double NNfunction_ns_chi01_uL::synapse0x23fad50() {
   return (neuron0x23e6970()*-1.42133);
}

double NNfunction_ns_chi01_uL::synapse0x23fad90() {
   return (neuron0x23e6cb0()*-1.46645);
}

double NNfunction_ns_chi01_uL::synapse0x23fa820() {
   return (neuron0x23e6ff0()*1.73355);
}

double NNfunction_ns_chi01_uL::synapse0x23fa860() {
   return (neuron0x23e7550()*1.88151);
}

double NNfunction_ns_chi01_uL::synapse0x23faee0() {
   return (neuron0x23e7770()*-0.0824053);
}

double NNfunction_ns_chi01_uL::synapse0x23faf20() {
   return (neuron0x23e7ab0()*-1.32262);
}

double NNfunction_ns_chi01_uL::synapse0x23faf60() {
   return (neuron0x23e7df0()*-0.93156);
}

double NNfunction_ns_chi01_uL::synapse0x23fafa0() {
   return (neuron0x23e8130()*-0.905801);
}

double NNfunction_ns_chi01_uL::synapse0x23fafe0() {
   return (neuron0x23e8470()*-1.79145);
}

double NNfunction_ns_chi01_uL::synapse0x23fb020() {
   return (neuron0x23e87b0()*1.7494);
}

double NNfunction_ns_chi01_uL::synapse0x23fb3a0() {
   return (neuron0x23e3c80()*0.893396);
}

double NNfunction_ns_chi01_uL::synapse0x23fb3e0() {
   return (neuron0x23e3f30()*-1.62127);
}

double NNfunction_ns_chi01_uL::synapse0x23fb420() {
   return (neuron0x23e4270()*2.14493);
}

double NNfunction_ns_chi01_uL::synapse0x23fb460() {
   return (neuron0x23e45b0()*1.08971);
}

double NNfunction_ns_chi01_uL::synapse0x23fb4a0() {
   return (neuron0x23e48f0()*-0.286104);
}

double NNfunction_ns_chi01_uL::synapse0x23fb4e0() {
   return (neuron0x23e4c30()*-0.933894);
}

double NNfunction_ns_chi01_uL::synapse0x23fb520() {
   return (neuron0x23e4f70()*1.65664);
}

double NNfunction_ns_chi01_uL::synapse0x23fb560() {
   return (neuron0x23e52b0()*-0.417986);
}

double NNfunction_ns_chi01_uL::synapse0x23fb5a0() {
   return (neuron0x23e55f0()*-0.0590689);
}

double NNfunction_ns_chi01_uL::synapse0x23fb5e0() {
   return (neuron0x23e5930()*-0.490038);
}

double NNfunction_ns_chi01_uL::synapse0x23fb620() {
   return (neuron0x23e5c70()*-0.339153);
}

double NNfunction_ns_chi01_uL::synapse0x23fb660() {
   return (neuron0x23e5fb0()*-1.72177);
}

double NNfunction_ns_chi01_uL::synapse0x23fb6a0() {
   return (neuron0x23e62f0()*2.15446);
}

double NNfunction_ns_chi01_uL::synapse0x23fb6e0() {
   return (neuron0x23e6630()*2.39467);
}

double NNfunction_ns_chi01_uL::synapse0x23fb720() {
   return (neuron0x23e6970()*1.37242);
}

double NNfunction_ns_chi01_uL::synapse0x23fb760() {
   return (neuron0x23e6cb0()*1.37334);
}

double NNfunction_ns_chi01_uL::synapse0x23fb1f0() {
   return (neuron0x23e6ff0()*-0.9339);
}

double NNfunction_ns_chi01_uL::synapse0x23fb230() {
   return (neuron0x23e7550()*-1.98003);
}

double NNfunction_ns_chi01_uL::synapse0x23fb8b0() {
   return (neuron0x23e7770()*0.922543);
}

double NNfunction_ns_chi01_uL::synapse0x23fb8f0() {
   return (neuron0x23e7ab0()*1.2537);
}

double NNfunction_ns_chi01_uL::synapse0x23fb930() {
   return (neuron0x23e7df0()*-1.36039);
}

double NNfunction_ns_chi01_uL::synapse0x23fb970() {
   return (neuron0x23e8130()*-0.176855);
}

double NNfunction_ns_chi01_uL::synapse0x23fb9b0() {
   return (neuron0x23e8470()*2.69151);
}

double NNfunction_ns_chi01_uL::synapse0x23fb9f0() {
   return (neuron0x23e87b0()*3.40329);
}

double NNfunction_ns_chi01_uL::synapse0x23fbd70() {
   return (neuron0x23e3c80()*0.0312202);
}

double NNfunction_ns_chi01_uL::synapse0x23fbdb0() {
   return (neuron0x23e3f30()*0.003921);
}

double NNfunction_ns_chi01_uL::synapse0x23fbdf0() {
   return (neuron0x23e4270()*0.0813714);
}

double NNfunction_ns_chi01_uL::synapse0x23fbe30() {
   return (neuron0x23e45b0()*0.00439846);
}

double NNfunction_ns_chi01_uL::synapse0x23fbe70() {
   return (neuron0x23e48f0()*0.0147591);
}

double NNfunction_ns_chi01_uL::synapse0x23fbeb0() {
   return (neuron0x23e4c30()*-0.0114963);
}

double NNfunction_ns_chi01_uL::synapse0x23fbef0() {
   return (neuron0x23e4f70()*0.00810478);
}

double NNfunction_ns_chi01_uL::synapse0x23fbf30() {
   return (neuron0x23e52b0()*-0.00627342);
}

double NNfunction_ns_chi01_uL::synapse0x23fbf70() {
   return (neuron0x23e55f0()*0.0424203);
}

double NNfunction_ns_chi01_uL::synapse0x23fbfb0() {
   return (neuron0x23e5930()*-0.00103853);
}

double NNfunction_ns_chi01_uL::synapse0x23fbff0() {
   return (neuron0x23e5c70()*-0.0519864);
}

double NNfunction_ns_chi01_uL::synapse0x23fc030() {
   return (neuron0x23e5fb0()*-0.141981);
}

double NNfunction_ns_chi01_uL::synapse0x23fc070() {
   return (neuron0x23e62f0()*-0.0126645);
}

double NNfunction_ns_chi01_uL::synapse0x23fc0b0() {
   return (neuron0x23e6630()*-0.0220054);
}

double NNfunction_ns_chi01_uL::synapse0x23fc0f0() {
   return (neuron0x23e6970()*-0.031291);
}

double NNfunction_ns_chi01_uL::synapse0x23fc130() {
   return (neuron0x23e6cb0()*-0.0459658);
}

double NNfunction_ns_chi01_uL::synapse0x23fbbc0() {
   return (neuron0x23e6ff0()*0.0518943);
}

double NNfunction_ns_chi01_uL::synapse0x23fbc00() {
   return (neuron0x23e7550()*-0.00809728);
}

double NNfunction_ns_chi01_uL::synapse0x23fc280() {
   return (neuron0x23e7770()*-0.0209888);
}

double NNfunction_ns_chi01_uL::synapse0x23fc2c0() {
   return (neuron0x23e7ab0()*-0.030836);
}

double NNfunction_ns_chi01_uL::synapse0x23fc300() {
   return (neuron0x23e7df0()*-0.02324);
}

double NNfunction_ns_chi01_uL::synapse0x23fc340() {
   return (neuron0x23e8130()*-0.00270679);
}

double NNfunction_ns_chi01_uL::synapse0x23fc380() {
   return (neuron0x23e8470()*0.0158144);
}

double NNfunction_ns_chi01_uL::synapse0x23fc3c0() {
   return (neuron0x23e87b0()*1.05753);
}

double NNfunction_ns_chi01_uL::synapse0x23fc740() {
   return (neuron0x23e3c80()*0.444785);
}

double NNfunction_ns_chi01_uL::synapse0x23fc780() {
   return (neuron0x23e3f30()*1.64998);
}

double NNfunction_ns_chi01_uL::synapse0x23fc7c0() {
   return (neuron0x23e4270()*-0.58066);
}

double NNfunction_ns_chi01_uL::synapse0x23fc800() {
   return (neuron0x23e45b0()*0.0238626);
}

double NNfunction_ns_chi01_uL::synapse0x23fc840() {
   return (neuron0x23e48f0()*1.00338);
}

double NNfunction_ns_chi01_uL::synapse0x23fc880() {
   return (neuron0x23e4c30()*-1.67758);
}

double NNfunction_ns_chi01_uL::synapse0x23fc8c0() {
   return (neuron0x23e4f70()*-0.283738);
}

double NNfunction_ns_chi01_uL::synapse0x23fc900() {
   return (neuron0x23e52b0()*1.10079);
}

double NNfunction_ns_chi01_uL::synapse0x23fc940() {
   return (neuron0x23e55f0()*-0.324815);
}

double NNfunction_ns_chi01_uL::synapse0x23fc980() {
   return (neuron0x23e5930()*0.336322);
}

double NNfunction_ns_chi01_uL::synapse0x23fc9c0() {
   return (neuron0x23e5c70()*0.3082);
}

double NNfunction_ns_chi01_uL::synapse0x23fca00() {
   return (neuron0x23e5fb0()*-0.354749);
}

double NNfunction_ns_chi01_uL::synapse0x23fca40() {
   return (neuron0x23e62f0()*0.645346);
}

double NNfunction_ns_chi01_uL::synapse0x23fca80() {
   return (neuron0x23e6630()*-0.251156);
}

double NNfunction_ns_chi01_uL::synapse0x23fcac0() {
   return (neuron0x23e6970()*-0.153748);
}

double NNfunction_ns_chi01_uL::synapse0x23fcb00() {
   return (neuron0x23e6cb0()*0.566537);
}

double NNfunction_ns_chi01_uL::synapse0x23fc590() {
   return (neuron0x23e6ff0()*2.00576);
}

double NNfunction_ns_chi01_uL::synapse0x23fc5d0() {
   return (neuron0x23e7550()*-0.444413);
}

double NNfunction_ns_chi01_uL::synapse0x23fcc50() {
   return (neuron0x23e7770()*-2.66252);
}

double NNfunction_ns_chi01_uL::synapse0x23fcc90() {
   return (neuron0x23e7ab0()*0.782664);
}

double NNfunction_ns_chi01_uL::synapse0x23fccd0() {
   return (neuron0x23e7df0()*-0.0741842);
}

double NNfunction_ns_chi01_uL::synapse0x23fcd10() {
   return (neuron0x23e8130()*0.677119);
}

double NNfunction_ns_chi01_uL::synapse0x23fcd50() {
   return (neuron0x23e8470()*-0.760043);
}

double NNfunction_ns_chi01_uL::synapse0x23fcd90() {
   return (neuron0x23e87b0()*-1.13752);
}

double NNfunction_ns_chi01_uL::synapse0x23fd110() {
   return (neuron0x23e3c80()*0.0246474);
}

double NNfunction_ns_chi01_uL::synapse0x23fd150() {
   return (neuron0x23e3f30()*0.019588);
}

double NNfunction_ns_chi01_uL::synapse0x23fd190() {
   return (neuron0x23e4270()*-0.0981593);
}

double NNfunction_ns_chi01_uL::synapse0x23fd1d0() {
   return (neuron0x23e45b0()*-0.0153859);
}

double NNfunction_ns_chi01_uL::synapse0x23fd210() {
   return (neuron0x23e48f0()*0.0180398);
}

double NNfunction_ns_chi01_uL::synapse0x23fd250() {
   return (neuron0x23e4c30()*0.0114879);
}

double NNfunction_ns_chi01_uL::synapse0x23fd290() {
   return (neuron0x23e4f70()*0.00421809);
}

double NNfunction_ns_chi01_uL::synapse0x23fd2d0() {
   return (neuron0x23e52b0()*0.00243657);
}

double NNfunction_ns_chi01_uL::synapse0x23fd310() {
   return (neuron0x23e55f0()*-0.00363704);
}

double NNfunction_ns_chi01_uL::synapse0x23fd350() {
   return (neuron0x23e5930()*0.00871804);
}

double NNfunction_ns_chi01_uL::synapse0x23fd390() {
   return (neuron0x23e5c70()*0.0226747);
}

double NNfunction_ns_chi01_uL::synapse0x23fd3d0() {
   return (neuron0x23e5fb0()*0.0345937);
}

double NNfunction_ns_chi01_uL::synapse0x23fd410() {
   return (neuron0x23e62f0()*-0.0144704);
}

double NNfunction_ns_chi01_uL::synapse0x23fd450() {
   return (neuron0x23e6630()*0.0173654);
}

double NNfunction_ns_chi01_uL::synapse0x23fd490() {
   return (neuron0x23e6970()*0.00469966);
}

double NNfunction_ns_chi01_uL::synapse0x23fd4d0() {
   return (neuron0x23e6cb0()*-0.00184151);
}

double NNfunction_ns_chi01_uL::synapse0x23fcf60() {
   return (neuron0x23e6ff0()*0.02164);
}

double NNfunction_ns_chi01_uL::synapse0x23fcfa0() {
   return (neuron0x23e7550()*0.00310836);
}

double NNfunction_ns_chi01_uL::synapse0x23fd620() {
   return (neuron0x23e7770()*-0.00426029);
}

double NNfunction_ns_chi01_uL::synapse0x23fd660() {
   return (neuron0x23e7ab0()*0.00213725);
}

double NNfunction_ns_chi01_uL::synapse0x23fd6a0() {
   return (neuron0x23e7df0()*-0.000111412);
}

double NNfunction_ns_chi01_uL::synapse0x23fd6e0() {
   return (neuron0x23e8130()*-0.00871126);
}

double NNfunction_ns_chi01_uL::synapse0x23fd720() {
   return (neuron0x23e8470()*-0.00154111);
}

double NNfunction_ns_chi01_uL::synapse0x23fd760() {
   return (neuron0x23e87b0()*10.207);
}

double NNfunction_ns_chi01_uL::synapse0x23fdae0() {
   return (neuron0x23e3c80()*-0.588136);
}

double NNfunction_ns_chi01_uL::synapse0x23fdb20() {
   return (neuron0x23e3f30()*0.181867);
}

double NNfunction_ns_chi01_uL::synapse0x23fdb60() {
   return (neuron0x23e4270()*-0.497406);
}

double NNfunction_ns_chi01_uL::synapse0x23fdba0() {
   return (neuron0x23e45b0()*-0.253571);
}

double NNfunction_ns_chi01_uL::synapse0x23fdbe0() {
   return (neuron0x23e48f0()*-1.51183);
}

double NNfunction_ns_chi01_uL::synapse0x23fdc20() {
   return (neuron0x23e4c30()*0.569366);
}

double NNfunction_ns_chi01_uL::synapse0x23fdc60() {
   return (neuron0x23e4f70()*-0.235506);
}

double NNfunction_ns_chi01_uL::synapse0x23fdca0() {
   return (neuron0x23e52b0()*-0.712442);
}

double NNfunction_ns_chi01_uL::synapse0x23fdce0() {
   return (neuron0x23e55f0()*1.06325);
}

double NNfunction_ns_chi01_uL::synapse0x23fdd20() {
   return (neuron0x23e5930()*-0.29962);
}

double NNfunction_ns_chi01_uL::synapse0x23fdd60() {
   return (neuron0x23e5c70()*-1.26133);
}

double NNfunction_ns_chi01_uL::synapse0x23fdda0() {
   return (neuron0x23e5fb0()*-0.548193);
}

double NNfunction_ns_chi01_uL::synapse0x23fdde0() {
   return (neuron0x23e62f0()*0.674181);
}

double NNfunction_ns_chi01_uL::synapse0x23fde20() {
   return (neuron0x23e6630()*-1.00675);
}

double NNfunction_ns_chi01_uL::synapse0x23fde60() {
   return (neuron0x23e6970()*0.174038);
}

double NNfunction_ns_chi01_uL::synapse0x23fdea0() {
   return (neuron0x23e6cb0()*0.0813855);
}

double NNfunction_ns_chi01_uL::synapse0x23fd930() {
   return (neuron0x23e6ff0()*0.510059);
}

double NNfunction_ns_chi01_uL::synapse0x23fd970() {
   return (neuron0x23e7550()*1.20848);
}

double NNfunction_ns_chi01_uL::synapse0x23fdff0() {
   return (neuron0x23e7770()*-1.97612);
}

double NNfunction_ns_chi01_uL::synapse0x23fe030() {
   return (neuron0x23e7ab0()*0.700518);
}

double NNfunction_ns_chi01_uL::synapse0x23fe070() {
   return (neuron0x23e7df0()*0.949318);
}

double NNfunction_ns_chi01_uL::synapse0x23fe0b0() {
   return (neuron0x23e8130()*-0.265965);
}

double NNfunction_ns_chi01_uL::synapse0x23fe0f0() {
   return (neuron0x23e8470()*-0.346477);
}

double NNfunction_ns_chi01_uL::synapse0x23fe130() {
   return (neuron0x23e87b0()*-1.09093);
}

double NNfunction_ns_chi01_uL::synapse0x23fe4b0() {
   return (neuron0x23e3c80()*0.0460249);
}

double NNfunction_ns_chi01_uL::synapse0x23f2a80() {
   return (neuron0x23e3f30()*0.000680268);
}

double NNfunction_ns_chi01_uL::synapse0x23f2ac0() {
   return (neuron0x23e4270()*-0.117663);
}

double NNfunction_ns_chi01_uL::synapse0x23f2b00() {
   return (neuron0x23e45b0()*1.72825);
}

double NNfunction_ns_chi01_uL::synapse0x23f2d50() {
   return (neuron0x23e48f0()*0.0177302);
}

double NNfunction_ns_chi01_uL::synapse0x23f2d90() {
   return (neuron0x23e4c30()*0.0451965);
}

double NNfunction_ns_chi01_uL::synapse0x23f2dd0() {
   return (neuron0x23e4f70()*-0.021817);
}

double NNfunction_ns_chi01_uL::synapse0x23f3020() {
   return (neuron0x23e52b0()*-0.0261535);
}

double NNfunction_ns_chi01_uL::synapse0x23f3060() {
   return (neuron0x23e55f0()*-0.0116802);
}

double NNfunction_ns_chi01_uL::synapse0x23f32b0() {
   return (neuron0x23e5930()*0.021651);
}

double NNfunction_ns_chi01_uL::synapse0x23f32f0() {
   return (neuron0x23e5c70()*0.0327674);
}

double NNfunction_ns_chi01_uL::synapse0x23f3330() {
   return (neuron0x23e5fb0()*-1.03811);
}

double NNfunction_ns_chi01_uL::synapse0x23f3580() {
   return (neuron0x23e62f0()*0.0370032);
}

double NNfunction_ns_chi01_uL::synapse0x23f35c0() {
   return (neuron0x23e6630()*-0.0477714);
}

double NNfunction_ns_chi01_uL::synapse0x23f3810() {
   return (neuron0x23e6970()*0.00907937);
}

double NNfunction_ns_chi01_uL::synapse0x23f3850() {
   return (neuron0x23e6cb0()*-0.0415905);
}

double NNfunction_ns_chi01_uL::synapse0x23fe300() {
   return (neuron0x23e6ff0()*-0.102638);
}

double NNfunction_ns_chi01_uL::synapse0x23fe340() {
   return (neuron0x23e7550()*0.0134776);
}

double NNfunction_ns_chi01_uL::synapse0x23f39a0() {
   return (neuron0x23e7770()*-0.0233797);
}

double NNfunction_ns_chi01_uL::synapse0x23f3eb0() {
   return (neuron0x23e7ab0()*-0.013455);
}

double NNfunction_ns_chi01_uL::synapse0x23f3ef0() {
   return (neuron0x23e7df0()*-0.0112112);
}

double NNfunction_ns_chi01_uL::synapse0x23f3f30() {
   return (neuron0x23e8130()*0.00394675);
}

double NNfunction_ns_chi01_uL::synapse0x23f4180() {
   return (neuron0x23e8470()*-0.0114257);
}

double NNfunction_ns_chi01_uL::synapse0x23f41c0() {
   return (neuron0x23e87b0()*0.0213685);
}

double NNfunction_ns_chi01_uL::synapse0x23f3a70() {
   return (neuron0x23e3c80()*-0.531275);
}

double NNfunction_ns_chi01_uL::synapse0x23f3ab0() {
   return (neuron0x23e3f30()*0.0308299);
}

double NNfunction_ns_chi01_uL::synapse0x23f3af0() {
   return (neuron0x23e4270()*3.0483);
}

double NNfunction_ns_chi01_uL::synapse0x23f3b30() {
   return (neuron0x23e45b0()*-0.282639);
}

double NNfunction_ns_chi01_uL::synapse0x23f44b0() {
   return (neuron0x23e48f0()*-0.308916);
}

double NNfunction_ns_chi01_uL::synapse0x2400800() {
   return (neuron0x23e4c30()*0.613138);
}

double NNfunction_ns_chi01_uL::synapse0x2400840() {
   return (neuron0x23e4f70()*-1.57158);
}

double NNfunction_ns_chi01_uL::synapse0x2400880() {
   return (neuron0x23e52b0()*0.801025);
}

double NNfunction_ns_chi01_uL::synapse0x24008c0() {
   return (neuron0x23e55f0()*-1.72951);
}

double NNfunction_ns_chi01_uL::synapse0x2400900() {
   return (neuron0x23e5930()*-0.0183144);
}

double NNfunction_ns_chi01_uL::synapse0x2400940() {
   return (neuron0x23e5c70()*0.439535);
}

double NNfunction_ns_chi01_uL::synapse0x2400980() {
   return (neuron0x23e5fb0()*0.467687);
}

double NNfunction_ns_chi01_uL::synapse0x24009c0() {
   return (neuron0x23e62f0()*0.966836);
}

double NNfunction_ns_chi01_uL::synapse0x2400a00() {
   return (neuron0x23e6630()*0.204101);
}

double NNfunction_ns_chi01_uL::synapse0x2400a40() {
   return (neuron0x23e6970()*0.673416);
}

double NNfunction_ns_chi01_uL::synapse0x2400a80() {
   return (neuron0x23e6cb0()*-1.41668);
}

double NNfunction_ns_chi01_uL::synapse0x23f4390() {
   return (neuron0x23e6ff0()*-1.7884);
}

double NNfunction_ns_chi01_uL::synapse0x23f43d0() {
   return (neuron0x23e7550()*0.169175);
}

double NNfunction_ns_chi01_uL::synapse0x2400bd0() {
   return (neuron0x23e7770()*-0.540937);
}

double NNfunction_ns_chi01_uL::synapse0x2400c10() {
   return (neuron0x23e7ab0()*-0.559747);
}

double NNfunction_ns_chi01_uL::synapse0x2400c50() {
   return (neuron0x23e7df0()*0.140369);
}

double NNfunction_ns_chi01_uL::synapse0x2400c90() {
   return (neuron0x23e8130()*-0.776173);
}

double NNfunction_ns_chi01_uL::synapse0x2400cd0() {
   return (neuron0x23e8470()*0.770188);
}

double NNfunction_ns_chi01_uL::synapse0x2400d10() {
   return (neuron0x23e87b0()*2.66829);
}

double NNfunction_ns_chi01_uL::synapse0x2401090() {
   return (neuron0x23e3c80()*-0.520781);
}

double NNfunction_ns_chi01_uL::synapse0x24010d0() {
   return (neuron0x23e3f30()*0.817113);
}

double NNfunction_ns_chi01_uL::synapse0x2401110() {
   return (neuron0x23e4270()*3.52992);
}

double NNfunction_ns_chi01_uL::synapse0x2401150() {
   return (neuron0x23e45b0()*0.301551);
}

double NNfunction_ns_chi01_uL::synapse0x2401190() {
   return (neuron0x23e48f0()*-0.0865488);
}

double NNfunction_ns_chi01_uL::synapse0x24011d0() {
   return (neuron0x23e4c30()*-0.499619);
}

double NNfunction_ns_chi01_uL::synapse0x2401210() {
   return (neuron0x23e4f70()*-0.0734831);
}

double NNfunction_ns_chi01_uL::synapse0x2401250() {
   return (neuron0x23e52b0()*-0.87074);
}

double NNfunction_ns_chi01_uL::synapse0x2401290() {
   return (neuron0x23e55f0()*-0.0490282);
}

double NNfunction_ns_chi01_uL::synapse0x24012d0() {
   return (neuron0x23e5930()*-0.240844);
}

double NNfunction_ns_chi01_uL::synapse0x2401310() {
   return (neuron0x23e5c70()*-1.69477);
}

double NNfunction_ns_chi01_uL::synapse0x2401350() {
   return (neuron0x23e5fb0()*1.40008);
}

double NNfunction_ns_chi01_uL::synapse0x2401390() {
   return (neuron0x23e62f0()*-0.230447);
}

double NNfunction_ns_chi01_uL::synapse0x24013d0() {
   return (neuron0x23e6630()*-0.579269);
}

double NNfunction_ns_chi01_uL::synapse0x2401410() {
   return (neuron0x23e6970()*0.681121);
}

double NNfunction_ns_chi01_uL::synapse0x2401450() {
   return (neuron0x23e6cb0()*1.3909);
}

double NNfunction_ns_chi01_uL::synapse0x2400ee0() {
   return (neuron0x23e6ff0()*-0.518149);
}

double NNfunction_ns_chi01_uL::synapse0x2400f20() {
   return (neuron0x23e7550()*0.924373);
}

double NNfunction_ns_chi01_uL::synapse0x24015a0() {
   return (neuron0x23e7770()*0.993623);
}

double NNfunction_ns_chi01_uL::synapse0x24015e0() {
   return (neuron0x23e7ab0()*0.661499);
}

double NNfunction_ns_chi01_uL::synapse0x2401620() {
   return (neuron0x23e7df0()*-1.07002);
}

double NNfunction_ns_chi01_uL::synapse0x2401660() {
   return (neuron0x23e8130()*-0.942629);
}

double NNfunction_ns_chi01_uL::synapse0x24016a0() {
   return (neuron0x23e8470()*0.0509245);
}

double NNfunction_ns_chi01_uL::synapse0x24016e0() {
   return (neuron0x23e87b0()*1.0114);
}

double NNfunction_ns_chi01_uL::synapse0x2401a60() {
   return (neuron0x23e3c80()*0.0489859);
}

double NNfunction_ns_chi01_uL::synapse0x2401aa0() {
   return (neuron0x23e3f30()*15.0221);
}

double NNfunction_ns_chi01_uL::synapse0x2401ae0() {
   return (neuron0x23e4270()*7.91498);
}

double NNfunction_ns_chi01_uL::synapse0x2401b20() {
   return (neuron0x23e45b0()*-0.00199494);
}

double NNfunction_ns_chi01_uL::synapse0x2401b60() {
   return (neuron0x23e48f0()*0.0217253);
}

double NNfunction_ns_chi01_uL::synapse0x2401ba0() {
   return (neuron0x23e4c30()*0.040934);
}

double NNfunction_ns_chi01_uL::synapse0x2401be0() {
   return (neuron0x23e4f70()*0.00256905);
}

double NNfunction_ns_chi01_uL::synapse0x2401c20() {
   return (neuron0x23e52b0()*0.0155553);
}

double NNfunction_ns_chi01_uL::synapse0x2401c60() {
   return (neuron0x23e55f0()*0.0163964);
}

double NNfunction_ns_chi01_uL::synapse0x2401ca0() {
   return (neuron0x23e5930()*0.0170805);
}

double NNfunction_ns_chi01_uL::synapse0x2401ce0() {
   return (neuron0x23e5c70()*0.0197868);
}

double NNfunction_ns_chi01_uL::synapse0x2401d20() {
   return (neuron0x23e5fb0()*-0.177194);
}

double NNfunction_ns_chi01_uL::synapse0x2401d60() {
   return (neuron0x23e62f0()*-0.0229206);
}

double NNfunction_ns_chi01_uL::synapse0x2401da0() {
   return (neuron0x23e6630()*-0.0250508);
}

double NNfunction_ns_chi01_uL::synapse0x2401de0() {
   return (neuron0x23e6970()*0.00116133);
}

double NNfunction_ns_chi01_uL::synapse0x2401e20() {
   return (neuron0x23e6cb0()*0.00808997);
}

double NNfunction_ns_chi01_uL::synapse0x24018b0() {
   return (neuron0x23e6ff0()*-0.0265581);
}

double NNfunction_ns_chi01_uL::synapse0x24018f0() {
   return (neuron0x23e7550()*0.000415772);
}

double NNfunction_ns_chi01_uL::synapse0x2401f70() {
   return (neuron0x23e7770()*-0.0107602);
}

double NNfunction_ns_chi01_uL::synapse0x2401fb0() {
   return (neuron0x23e7ab0()*0.00421497);
}

double NNfunction_ns_chi01_uL::synapse0x2401ff0() {
   return (neuron0x23e7df0()*-0.0173347);
}

double NNfunction_ns_chi01_uL::synapse0x2402030() {
   return (neuron0x23e8130()*0.020061);
}

double NNfunction_ns_chi01_uL::synapse0x2402070() {
   return (neuron0x23e8470()*0.0174963);
}

double NNfunction_ns_chi01_uL::synapse0x24020b0() {
   return (neuron0x23e87b0()*-0.0795856);
}

double NNfunction_ns_chi01_uL::synapse0x2402430() {
   return (neuron0x23e3c80()*-1.19592);
}

double NNfunction_ns_chi01_uL::synapse0x2402470() {
   return (neuron0x23e3f30()*-0.305124);
}

double NNfunction_ns_chi01_uL::synapse0x24024b0() {
   return (neuron0x23e4270()*-1.12824);
}

double NNfunction_ns_chi01_uL::synapse0x24024f0() {
   return (neuron0x23e45b0()*0.10089);
}

double NNfunction_ns_chi01_uL::synapse0x2402530() {
   return (neuron0x23e48f0()*2.11973);
}

double NNfunction_ns_chi01_uL::synapse0x2402570() {
   return (neuron0x23e4c30()*0.0729848);
}

double NNfunction_ns_chi01_uL::synapse0x24025b0() {
   return (neuron0x23e4f70()*-0.590246);
}

double NNfunction_ns_chi01_uL::synapse0x24025f0() {
   return (neuron0x23e52b0()*-0.166639);
}

double NNfunction_ns_chi01_uL::synapse0x2402630() {
   return (neuron0x23e55f0()*-0.196694);
}

double NNfunction_ns_chi01_uL::synapse0x2402670() {
   return (neuron0x23e5930()*0.29322);
}

double NNfunction_ns_chi01_uL::synapse0x24026b0() {
   return (neuron0x23e5c70()*1.91605);
}

double NNfunction_ns_chi01_uL::synapse0x24026f0() {
   return (neuron0x23e5fb0()*-0.330757);
}

double NNfunction_ns_chi01_uL::synapse0x2402730() {
   return (neuron0x23e62f0()*0.373694);
}

double NNfunction_ns_chi01_uL::synapse0x2402770() {
   return (neuron0x23e6630()*0.727359);
}

double NNfunction_ns_chi01_uL::synapse0x24027b0() {
   return (neuron0x23e6970()*-1.38618);
}

double NNfunction_ns_chi01_uL::synapse0x24027f0() {
   return (neuron0x23e6cb0()*-0.957392);
}

double NNfunction_ns_chi01_uL::synapse0x2402280() {
   return (neuron0x23e6ff0()*-0.71614);
}

double NNfunction_ns_chi01_uL::synapse0x24022c0() {
   return (neuron0x23e7550()*-0.0863194);
}

double NNfunction_ns_chi01_uL::synapse0x2402940() {
   return (neuron0x23e7770()*1.2978);
}

double NNfunction_ns_chi01_uL::synapse0x2402980() {
   return (neuron0x23e7ab0()*-0.293559);
}

double NNfunction_ns_chi01_uL::synapse0x24029c0() {
   return (neuron0x23e7df0()*1.1345);
}

double NNfunction_ns_chi01_uL::synapse0x2402a00() {
   return (neuron0x23e8130()*-0.434658);
}

double NNfunction_ns_chi01_uL::synapse0x2402a40() {
   return (neuron0x23e8470()*2.38184);
}

double NNfunction_ns_chi01_uL::synapse0x2402a80() {
   return (neuron0x23e87b0()*-0.53546);
}

double NNfunction_ns_chi01_uL::synapse0x2402e00() {
   return (neuron0x23e3c80()*1.37575);
}

double NNfunction_ns_chi01_uL::synapse0x2402e40() {
   return (neuron0x23e3f30()*-1.06287);
}

double NNfunction_ns_chi01_uL::synapse0x2402e80() {
   return (neuron0x23e4270()*-0.150129);
}

double NNfunction_ns_chi01_uL::synapse0x2402ec0() {
   return (neuron0x23e45b0()*-0.704844);
}

double NNfunction_ns_chi01_uL::synapse0x2402f00() {
   return (neuron0x23e48f0()*1.82053);
}

double NNfunction_ns_chi01_uL::synapse0x2402f40() {
   return (neuron0x23e4c30()*-0.585993);
}

double NNfunction_ns_chi01_uL::synapse0x2402f80() {
   return (neuron0x23e4f70()*1.54339);
}

double NNfunction_ns_chi01_uL::synapse0x2402fc0() {
   return (neuron0x23e52b0()*0.690539);
}

double NNfunction_ns_chi01_uL::synapse0x2403000() {
   return (neuron0x23e55f0()*-0.863803);
}

double NNfunction_ns_chi01_uL::synapse0x2403040() {
   return (neuron0x23e5930()*-0.89953);
}

double NNfunction_ns_chi01_uL::synapse0x2403080() {
   return (neuron0x23e5c70()*0.689586);
}

double NNfunction_ns_chi01_uL::synapse0x24030c0() {
   return (neuron0x23e5fb0()*-1.42168);
}

double NNfunction_ns_chi01_uL::synapse0x2403100() {
   return (neuron0x23e62f0()*-2.02281);
}

double NNfunction_ns_chi01_uL::synapse0x2403140() {
   return (neuron0x23e6630()*2.36684);
}

double NNfunction_ns_chi01_uL::synapse0x2403180() {
   return (neuron0x23e6970()*0.72972);
}

double NNfunction_ns_chi01_uL::synapse0x24031c0() {
   return (neuron0x23e6cb0()*-0.303892);
}

double NNfunction_ns_chi01_uL::synapse0x2402c50() {
   return (neuron0x23e6ff0()*-1.41362);
}

double NNfunction_ns_chi01_uL::synapse0x2402c90() {
   return (neuron0x23e7550()*-0.907929);
}

double NNfunction_ns_chi01_uL::synapse0x2403310() {
   return (neuron0x23e7770()*0.708572);
}

double NNfunction_ns_chi01_uL::synapse0x2403350() {
   return (neuron0x23e7ab0()*-0.764284);
}

double NNfunction_ns_chi01_uL::synapse0x2403390() {
   return (neuron0x23e7df0()*0.746179);
}

double NNfunction_ns_chi01_uL::synapse0x24033d0() {
   return (neuron0x23e8130()*0.689463);
}

double NNfunction_ns_chi01_uL::synapse0x2403410() {
   return (neuron0x23e8470()*0.371688);
}

double NNfunction_ns_chi01_uL::synapse0x2403450() {
   return (neuron0x23e87b0()*-0.176134);
}

double NNfunction_ns_chi01_uL::synapse0x24037d0() {
   return (neuron0x23e3c80()*1.73885);
}

double NNfunction_ns_chi01_uL::synapse0x2403810() {
   return (neuron0x23e3f30()*-0.136284);
}

double NNfunction_ns_chi01_uL::synapse0x2403850() {
   return (neuron0x23e4270()*-0.405379);
}

double NNfunction_ns_chi01_uL::synapse0x2403890() {
   return (neuron0x23e45b0()*1.08234);
}

double NNfunction_ns_chi01_uL::synapse0x24038d0() {
   return (neuron0x23e48f0()*-0.177813);
}

double NNfunction_ns_chi01_uL::synapse0x2403910() {
   return (neuron0x23e4c30()*0.047073);
}

double NNfunction_ns_chi01_uL::synapse0x2403950() {
   return (neuron0x23e4f70()*0.0834476);
}

double NNfunction_ns_chi01_uL::synapse0x2403990() {
   return (neuron0x23e52b0()*-0.0950869);
}

double NNfunction_ns_chi01_uL::synapse0x24039d0() {
   return (neuron0x23e55f0()*1.35965);
}

double NNfunction_ns_chi01_uL::synapse0x2403a10() {
   return (neuron0x23e5930()*-1.06372);
}

double NNfunction_ns_chi01_uL::synapse0x2403a50() {
   return (neuron0x23e5c70()*0.235512);
}

double NNfunction_ns_chi01_uL::synapse0x2403a90() {
   return (neuron0x23e5fb0()*0.886236);
}

double NNfunction_ns_chi01_uL::synapse0x2403ad0() {
   return (neuron0x23e62f0()*0.0526823);
}

double NNfunction_ns_chi01_uL::synapse0x2403b10() {
   return (neuron0x23e6630()*-0.247434);
}

double NNfunction_ns_chi01_uL::synapse0x2403b50() {
   return (neuron0x23e6970()*0.0261352);
}

double NNfunction_ns_chi01_uL::synapse0x2403b90() {
   return (neuron0x23e6cb0()*-0.234873);
}

double NNfunction_ns_chi01_uL::synapse0x2403620() {
   return (neuron0x23e6ff0()*-0.031089);
}

double NNfunction_ns_chi01_uL::synapse0x2403660() {
   return (neuron0x23e7550()*-0.719053);
}

double NNfunction_ns_chi01_uL::synapse0x2403ce0() {
   return (neuron0x23e7770()*-0.282585);
}

double NNfunction_ns_chi01_uL::synapse0x2403d20() {
   return (neuron0x23e7ab0()*0.0753898);
}

double NNfunction_ns_chi01_uL::synapse0x2403d60() {
   return (neuron0x23e7df0()*-0.819869);
}

double NNfunction_ns_chi01_uL::synapse0x2403da0() {
   return (neuron0x23e8130()*-0.00933964);
}

double NNfunction_ns_chi01_uL::synapse0x2403de0() {
   return (neuron0x23e8470()*0.806163);
}

double NNfunction_ns_chi01_uL::synapse0x2403e20() {
   return (neuron0x23e87b0()*1.11814);
}

double NNfunction_ns_chi01_uL::synapse0x24041a0() {
   return (neuron0x23e3c80()*-0.0019556);
}

double NNfunction_ns_chi01_uL::synapse0x24041e0() {
   return (neuron0x23e3f30()*0.00950365);
}

double NNfunction_ns_chi01_uL::synapse0x2404220() {
   return (neuron0x23e4270()*7.04683);
}

double NNfunction_ns_chi01_uL::synapse0x2404260() {
   return (neuron0x23e45b0()*-0.00164505);
}

double NNfunction_ns_chi01_uL::synapse0x24042a0() {
   return (neuron0x23e48f0()*0.0165314);
}

double NNfunction_ns_chi01_uL::synapse0x24042e0() {
   return (neuron0x23e4c30()*0.00857349);
}

double NNfunction_ns_chi01_uL::synapse0x2404320() {
   return (neuron0x23e4f70()*0.0184836);
}

double NNfunction_ns_chi01_uL::synapse0x2404360() {
   return (neuron0x23e52b0()*0.0445296);
}

double NNfunction_ns_chi01_uL::synapse0x24043a0() {
   return (neuron0x23e55f0()*-0.059826);
}

double NNfunction_ns_chi01_uL::synapse0x24043e0() {
   return (neuron0x23e5930()*0.00622657);
}

double NNfunction_ns_chi01_uL::synapse0x2404420() {
   return (neuron0x23e5c70()*0.0324428);
}

double NNfunction_ns_chi01_uL::synapse0x2404460() {
   return (neuron0x23e5fb0()*-0.0606135);
}

double NNfunction_ns_chi01_uL::synapse0x24044a0() {
   return (neuron0x23e62f0()*-0.00911908);
}

double NNfunction_ns_chi01_uL::synapse0x24044e0() {
   return (neuron0x23e6630()*0.0688784);
}

double NNfunction_ns_chi01_uL::synapse0x2404520() {
   return (neuron0x23e6970()*-0.0212402);
}

double NNfunction_ns_chi01_uL::synapse0x2404560() {
   return (neuron0x23e6cb0()*0.076004);
}

double NNfunction_ns_chi01_uL::synapse0x2403ff0() {
   return (neuron0x23e6ff0()*0.0376208);
}

double NNfunction_ns_chi01_uL::synapse0x2404030() {
   return (neuron0x23e7550()*-0.0100562);
}

double NNfunction_ns_chi01_uL::synapse0x24046b0() {
   return (neuron0x23e7770()*-0.0306604);
}

double NNfunction_ns_chi01_uL::synapse0x24046f0() {
   return (neuron0x23e7ab0()*0.00319407);
}

double NNfunction_ns_chi01_uL::synapse0x2404730() {
   return (neuron0x23e7df0()*0.000692969);
}

double NNfunction_ns_chi01_uL::synapse0x2404770() {
   return (neuron0x23e8130()*-0.031967);
}

double NNfunction_ns_chi01_uL::synapse0x24047b0() {
   return (neuron0x23e8470()*-0.0315833);
}

double NNfunction_ns_chi01_uL::synapse0x24047f0() {
   return (neuron0x23e87b0()*6.97124);
}

double NNfunction_ns_chi01_uL::synapse0x2404b70() {
   return (neuron0x23e3c80()*0.178079);
}

double NNfunction_ns_chi01_uL::synapse0x2404bb0() {
   return (neuron0x23e3f30()*-0.0853813);
}

double NNfunction_ns_chi01_uL::synapse0x2404bf0() {
   return (neuron0x23e4270()*0.117956);
}

double NNfunction_ns_chi01_uL::synapse0x2404c30() {
   return (neuron0x23e45b0()*-0.203374);
}

double NNfunction_ns_chi01_uL::synapse0x2404c70() {
   return (neuron0x23e48f0()*0.146653);
}

double NNfunction_ns_chi01_uL::synapse0x2404cb0() {
   return (neuron0x23e4c30()*0.165701);
}

double NNfunction_ns_chi01_uL::synapse0x2404cf0() {
   return (neuron0x23e4f70()*0.112326);
}

double NNfunction_ns_chi01_uL::synapse0x2404d30() {
   return (neuron0x23e52b0()*0.157665);
}

double NNfunction_ns_chi01_uL::synapse0x2404d70() {
   return (neuron0x23e55f0()*-0.0697295);
}

double NNfunction_ns_chi01_uL::synapse0x2404db0() {
   return (neuron0x23e5930()*-0.0711047);
}

double NNfunction_ns_chi01_uL::synapse0x2404df0() {
   return (neuron0x23e5c70()*-0.100743);
}

double NNfunction_ns_chi01_uL::synapse0x2404e30() {
   return (neuron0x23e5fb0()*-0.447989);
}

double NNfunction_ns_chi01_uL::synapse0x2404e70() {
   return (neuron0x23e62f0()*-0.0332495);
}

double NNfunction_ns_chi01_uL::synapse0x2404eb0() {
   return (neuron0x23e6630()*0.122959);
}

double NNfunction_ns_chi01_uL::synapse0x2404ef0() {
   return (neuron0x23e6970()*-0.0354955);
}

double NNfunction_ns_chi01_uL::synapse0x2404f30() {
   return (neuron0x23e6cb0()*0.341103);
}

double NNfunction_ns_chi01_uL::synapse0x24049c0() {
   return (neuron0x23e6ff0()*-0.0470583);
}

double NNfunction_ns_chi01_uL::synapse0x2404a00() {
   return (neuron0x23e7550()*0.047427);
}

double NNfunction_ns_chi01_uL::synapse0x2405080() {
   return (neuron0x23e7770()*-0.13807);
}

double NNfunction_ns_chi01_uL::synapse0x24050c0() {
   return (neuron0x23e7ab0()*0.117223);
}

double NNfunction_ns_chi01_uL::synapse0x2405100() {
   return (neuron0x23e7df0()*0.0502915);
}

double NNfunction_ns_chi01_uL::synapse0x2405140() {
   return (neuron0x23e8130()*-0.0378878);
}

double NNfunction_ns_chi01_uL::synapse0x2405180() {
   return (neuron0x23e8470()*0.0991019);
}

double NNfunction_ns_chi01_uL::synapse0x24051c0() {
   return (neuron0x23e87b0()*-5.88343);
}

double NNfunction_ns_chi01_uL::synapse0x23edc70() {
   return (neuron0x23e3c80()*0.00142289);
}

double NNfunction_ns_chi01_uL::synapse0x23edcb0() {
   return (neuron0x23e3f30()*0.0176539);
}

double NNfunction_ns_chi01_uL::synapse0x23edcf0() {
   return (neuron0x23e4270()*-1.22362);
}

double NNfunction_ns_chi01_uL::synapse0x23edd30() {
   return (neuron0x23e45b0()*0.0134613);
}

double NNfunction_ns_chi01_uL::synapse0x23edd70() {
   return (neuron0x23e48f0()*-0.0216371);
}

double NNfunction_ns_chi01_uL::synapse0x23eddb0() {
   return (neuron0x23e4c30()*-0.00752123);
}

double NNfunction_ns_chi01_uL::synapse0x23eddf0() {
   return (neuron0x23e4f70()*-0.00615014);
}

double NNfunction_ns_chi01_uL::synapse0x23ede30() {
   return (neuron0x23e52b0()*0.00461498);
}

double NNfunction_ns_chi01_uL::synapse0x2405950() {
   return (neuron0x23e55f0()*0.00623026);
}

double NNfunction_ns_chi01_uL::synapse0x2405990() {
   return (neuron0x23e5930()*0.0178666);
}

double NNfunction_ns_chi01_uL::synapse0x24059d0() {
   return (neuron0x23e5c70()*-0.00172215);
}

double NNfunction_ns_chi01_uL::synapse0x2405a10() {
   return (neuron0x23e5fb0()*0.528832);
}

double NNfunction_ns_chi01_uL::synapse0x2405a50() {
   return (neuron0x23e62f0()*0.00145287);
}

double NNfunction_ns_chi01_uL::synapse0x2405a90() {
   return (neuron0x23e6630()*-0.00375006);
}

double NNfunction_ns_chi01_uL::synapse0x2405ad0() {
   return (neuron0x23e6970()*-0.0210482);
}

double NNfunction_ns_chi01_uL::synapse0x2405b10() {
   return (neuron0x23e6cb0()*-0.0131762);
}

double NNfunction_ns_chi01_uL::synapse0x2405390() {
   return (neuron0x23e6ff0()*-0.0011553);
}

double NNfunction_ns_chi01_uL::synapse0x24053d0() {
   return (neuron0x23e7550()*0.0110319);
}

double NNfunction_ns_chi01_uL::synapse0x2405c60() {
   return (neuron0x23e7770()*0.0192092);
}

double NNfunction_ns_chi01_uL::synapse0x2405ca0() {
   return (neuron0x23e7ab0()*0.00567604);
}

double NNfunction_ns_chi01_uL::synapse0x2405ce0() {
   return (neuron0x23e7df0()*-0.0127902);
}

double NNfunction_ns_chi01_uL::synapse0x2405d20() {
   return (neuron0x23e8130()*-0.00266707);
}

double NNfunction_ns_chi01_uL::synapse0x2405d60() {
   return (neuron0x23e8470()*-0.00214397);
}

double NNfunction_ns_chi01_uL::synapse0x2405da0() {
   return (neuron0x23e87b0()*-0.0224006);
}

double NNfunction_ns_chi01_uL::synapse0x2406120() {
   return (neuron0x23e3c80()*1.5861);
}

double NNfunction_ns_chi01_uL::synapse0x2406160() {
   return (neuron0x23e3f30()*-0.0950629);
}

double NNfunction_ns_chi01_uL::synapse0x24061a0() {
   return (neuron0x23e4270()*0.814521);
}

double NNfunction_ns_chi01_uL::synapse0x24061e0() {
   return (neuron0x23e45b0()*-1.42128);
}

double NNfunction_ns_chi01_uL::synapse0x2406220() {
   return (neuron0x23e48f0()*0.844083);
}

double NNfunction_ns_chi01_uL::synapse0x2406260() {
   return (neuron0x23e4c30()*0.146771);
}

double NNfunction_ns_chi01_uL::synapse0x24062a0() {
   return (neuron0x23e4f70()*0.840826);
}

double NNfunction_ns_chi01_uL::synapse0x24062e0() {
   return (neuron0x23e52b0()*0.366048);
}

double NNfunction_ns_chi01_uL::synapse0x2406320() {
   return (neuron0x23e55f0()*0.332779);
}

double NNfunction_ns_chi01_uL::synapse0x2406360() {
   return (neuron0x23e5930()*-2.38147);
}

double NNfunction_ns_chi01_uL::synapse0x24063a0() {
   return (neuron0x23e5c70()*-1.79275);
}

double NNfunction_ns_chi01_uL::synapse0x24063e0() {
   return (neuron0x23e5fb0()*2.62152);
}

double NNfunction_ns_chi01_uL::synapse0x2406420() {
   return (neuron0x23e62f0()*-0.117655);
}

double NNfunction_ns_chi01_uL::synapse0x2406460() {
   return (neuron0x23e6630()*0.619203);
}

double NNfunction_ns_chi01_uL::synapse0x24064a0() {
   return (neuron0x23e6970()*-1.23352);
}

double NNfunction_ns_chi01_uL::synapse0x24064e0() {
   return (neuron0x23e6cb0()*-0.188115);
}

double NNfunction_ns_chi01_uL::synapse0x2405f70() {
   return (neuron0x23e6ff0()*-1.19576);
}

double NNfunction_ns_chi01_uL::synapse0x2405fb0() {
   return (neuron0x23e7550()*0.0759174);
}

double NNfunction_ns_chi01_uL::synapse0x2406630() {
   return (neuron0x23e7770()*-1.08593);
}

double NNfunction_ns_chi01_uL::synapse0x2406670() {
   return (neuron0x23e7ab0()*-0.373399);
}

double NNfunction_ns_chi01_uL::synapse0x24066b0() {
   return (neuron0x23e7df0()*-3.2082);
}

double NNfunction_ns_chi01_uL::synapse0x24066f0() {
   return (neuron0x23e8130()*0.320949);
}

double NNfunction_ns_chi01_uL::synapse0x2406730() {
   return (neuron0x23e8470()*1.46289);
}

double NNfunction_ns_chi01_uL::synapse0x2406770() {
   return (neuron0x23e87b0()*1.28939);
}

double NNfunction_ns_chi01_uL::synapse0x2406af0() {
   return (neuron0x23e3c80()*0.00231134);
}

double NNfunction_ns_chi01_uL::synapse0x2406b30() {
   return (neuron0x23e3f30()*-0.00327963);
}

double NNfunction_ns_chi01_uL::synapse0x2406b70() {
   return (neuron0x23e4270()*0.068535);
}

double NNfunction_ns_chi01_uL::synapse0x2406bb0() {
   return (neuron0x23e45b0()*-0.0885005);
}

double NNfunction_ns_chi01_uL::synapse0x2406bf0() {
   return (neuron0x23e48f0()*-0.00129732);
}

double NNfunction_ns_chi01_uL::synapse0x2406c30() {
   return (neuron0x23e4c30()*0.0103447);
}

double NNfunction_ns_chi01_uL::synapse0x2406c70() {
   return (neuron0x23e4f70()*0.00661651);
}

double NNfunction_ns_chi01_uL::synapse0x2406cb0() {
   return (neuron0x23e52b0()*-0.00212227);
}

double NNfunction_ns_chi01_uL::synapse0x2406cf0() {
   return (neuron0x23e55f0()*-0.0037456);
}

double NNfunction_ns_chi01_uL::synapse0x2406d30() {
   return (neuron0x23e5930()*-0.0105193);
}

double NNfunction_ns_chi01_uL::synapse0x2406d70() {
   return (neuron0x23e5c70()*0.00196846);
}

double NNfunction_ns_chi01_uL::synapse0x2406db0() {
   return (neuron0x23e5fb0()*-1.42572);
}

double NNfunction_ns_chi01_uL::synapse0x2406df0() {
   return (neuron0x23e62f0()*0.00450832);
}

double NNfunction_ns_chi01_uL::synapse0x2406e30() {
   return (neuron0x23e6630()*-0.00889504);
}

double NNfunction_ns_chi01_uL::synapse0x2406e70() {
   return (neuron0x23e6970()*0.01453);
}

double NNfunction_ns_chi01_uL::synapse0x2406eb0() {
   return (neuron0x23e6cb0()*0.0133344);
}

double NNfunction_ns_chi01_uL::synapse0x2406940() {
   return (neuron0x23e6ff0()*-0.0123962);
}

double NNfunction_ns_chi01_uL::synapse0x2406980() {
   return (neuron0x23e7550()*-0.00875677);
}

double NNfunction_ns_chi01_uL::synapse0x23f74b0() {
   return (neuron0x23e7770()*-0.0188946);
}

double NNfunction_ns_chi01_uL::synapse0x23f74f0() {
   return (neuron0x23e7ab0()*-0.00424706);
}

double NNfunction_ns_chi01_uL::synapse0x23f7530() {
   return (neuron0x23e7df0()*-0.006779);
}

double NNfunction_ns_chi01_uL::synapse0x23f7570() {
   return (neuron0x23e8130()*-0.00432017);
}

double NNfunction_ns_chi01_uL::synapse0x23f75b0() {
   return (neuron0x23e8470()*0.00292834);
}

double NNfunction_ns_chi01_uL::synapse0x23f75f0() {
   return (neuron0x23e87b0()*0.0168228);
}

double NNfunction_ns_chi01_uL::synapse0x23f7970() {
   return (neuron0x23e3c80()*0.300829);
}

double NNfunction_ns_chi01_uL::synapse0x23f79b0() {
   return (neuron0x23e3f30()*0.61846);
}

double NNfunction_ns_chi01_uL::synapse0x23f79f0() {
   return (neuron0x23e4270()*0.755771);
}

double NNfunction_ns_chi01_uL::synapse0x23f7a30() {
   return (neuron0x23e45b0()*-0.190464);
}

double NNfunction_ns_chi01_uL::synapse0x23f7a70() {
   return (neuron0x23e48f0()*1.21754);
}

double NNfunction_ns_chi01_uL::synapse0x23f7ab0() {
   return (neuron0x23e4c30()*-0.456352);
}

double NNfunction_ns_chi01_uL::synapse0x23f7af0() {
   return (neuron0x23e4f70()*-0.428799);
}

double NNfunction_ns_chi01_uL::synapse0x23f7b30() {
   return (neuron0x23e52b0()*1.40909);
}

double NNfunction_ns_chi01_uL::synapse0x23f7b70() {
   return (neuron0x23e55f0()*-0.568086);
}

double NNfunction_ns_chi01_uL::synapse0x23f7bb0() {
   return (neuron0x23e5930()*-0.867481);
}

double NNfunction_ns_chi01_uL::synapse0x23f7bf0() {
   return (neuron0x23e5c70()*-0.72648);
}

double NNfunction_ns_chi01_uL::synapse0x23f7c30() {
   return (neuron0x23e5fb0()*-0.258731);
}

double NNfunction_ns_chi01_uL::synapse0x23f7c70() {
   return (neuron0x23e62f0()*0.262783);
}

double NNfunction_ns_chi01_uL::synapse0x23f7cb0() {
   return (neuron0x23e6630()*0.979372);
}

double NNfunction_ns_chi01_uL::synapse0x23f7cf0() {
   return (neuron0x23e6970()*-0.479452);
}

double NNfunction_ns_chi01_uL::synapse0x23f7d30() {
   return (neuron0x23e6cb0()*-0.498814);
}

double NNfunction_ns_chi01_uL::synapse0x23f77c0() {
   return (neuron0x23e6ff0()*0.0908795);
}

double NNfunction_ns_chi01_uL::synapse0x23f7800() {
   return (neuron0x23e7550()*0.147886);
}

double NNfunction_ns_chi01_uL::synapse0x23f7e80() {
   return (neuron0x23e7770()*0.356021);
}

double NNfunction_ns_chi01_uL::synapse0x23f7ec0() {
   return (neuron0x23e7ab0()*-0.146499);
}

double NNfunction_ns_chi01_uL::synapse0x23f7f00() {
   return (neuron0x23e7df0()*0.697073);
}

double NNfunction_ns_chi01_uL::synapse0x23f7f40() {
   return (neuron0x23e8130()*-2.22219);
}

double NNfunction_ns_chi01_uL::synapse0x23f7f80() {
   return (neuron0x23e8470()*2.4864);
}

double NNfunction_ns_chi01_uL::synapse0x23f7fc0() {
   return (neuron0x23e87b0()*-0.609522);
}

double NNfunction_ns_chi01_uL::synapse0x23f8340() {
   return (neuron0x23e3c80()*0.972392);
}

double NNfunction_ns_chi01_uL::synapse0x23f8380() {
   return (neuron0x23e3f30()*-0.101153);
}

double NNfunction_ns_chi01_uL::synapse0x23f83c0() {
   return (neuron0x23e4270()*-0.593042);
}

double NNfunction_ns_chi01_uL::synapse0x23f8400() {
   return (neuron0x23e45b0()*-0.413364);
}

double NNfunction_ns_chi01_uL::synapse0x23f8440() {
   return (neuron0x23e48f0()*0.180343);
}

double NNfunction_ns_chi01_uL::synapse0x23f8480() {
   return (neuron0x23e4c30()*0.579774);
}

double NNfunction_ns_chi01_uL::synapse0x23f84c0() {
   return (neuron0x23e4f70()*-0.83417);
}

double NNfunction_ns_chi01_uL::synapse0x23f8500() {
   return (neuron0x23e52b0()*0.772509);
}

double NNfunction_ns_chi01_uL::synapse0x23f8540() {
   return (neuron0x23e55f0()*-1.12388);
}

double NNfunction_ns_chi01_uL::synapse0x23f8580() {
   return (neuron0x23e5930()*-2.28712);
}

double NNfunction_ns_chi01_uL::synapse0x23f85c0() {
   return (neuron0x23e5c70()*0.0518815);
}

double NNfunction_ns_chi01_uL::synapse0x23f8600() {
   return (neuron0x23e5fb0()*0.214366);
}

double NNfunction_ns_chi01_uL::synapse0x23f8640() {
   return (neuron0x23e62f0()*-0.352671);
}

double NNfunction_ns_chi01_uL::synapse0x23f8680() {
   return (neuron0x23e6630()*1.35864);
}

double NNfunction_ns_chi01_uL::synapse0x23f86c0() {
   return (neuron0x23e6970()*-0.046566);
}

double NNfunction_ns_chi01_uL::synapse0x23f8700() {
   return (neuron0x23e6cb0()*-0.909686);
}

double NNfunction_ns_chi01_uL::synapse0x23f8190() {
   return (neuron0x23e6ff0()*1.08395);
}

double NNfunction_ns_chi01_uL::synapse0x23f81d0() {
   return (neuron0x23e7550()*-0.490558);
}

double NNfunction_ns_chi01_uL::synapse0x23f8850() {
   return (neuron0x23e7770()*0.0743203);
}

double NNfunction_ns_chi01_uL::synapse0x23f8890() {
   return (neuron0x23e7ab0()*-0.833104);
}

double NNfunction_ns_chi01_uL::synapse0x23f88d0() {
   return (neuron0x23e7df0()*0.00553381);
}

double NNfunction_ns_chi01_uL::synapse0x23f8910() {
   return (neuron0x23e8130()*-0.868862);
}

double NNfunction_ns_chi01_uL::synapse0x23f8950() {
   return (neuron0x23e8470()*0.353953);
}

double NNfunction_ns_chi01_uL::synapse0x23f8990() {
   return (neuron0x23e87b0()*0.863059);
}

double NNfunction_ns_chi01_uL::synapse0x23f8d10() {
   return (neuron0x23e3c80()*0.059528);
}

double NNfunction_ns_chi01_uL::synapse0x23f8d50() {
   return (neuron0x23e3f30()*0.000951211);
}

double NNfunction_ns_chi01_uL::synapse0x23f8d90() {
   return (neuron0x23e4270()*0.0012654);
}

double NNfunction_ns_chi01_uL::synapse0x23f8dd0() {
   return (neuron0x23e45b0()*0.0144744);
}

double NNfunction_ns_chi01_uL::synapse0x23f8e10() {
   return (neuron0x23e48f0()*-0.0168181);
}

double NNfunction_ns_chi01_uL::synapse0x23f8e50() {
   return (neuron0x23e4c30()*-0.00470884);
}

double NNfunction_ns_chi01_uL::synapse0x23f8e90() {
   return (neuron0x23e4f70()*-0.011005);
}

double NNfunction_ns_chi01_uL::synapse0x23f8ed0() {
   return (neuron0x23e52b0()*0.00553215);
}

double NNfunction_ns_chi01_uL::synapse0x23f8f10() {
   return (neuron0x23e55f0()*0.00516959);
}

double NNfunction_ns_chi01_uL::synapse0x23f8f50() {
   return (neuron0x23e5930()*-0.0127157);
}

double NNfunction_ns_chi01_uL::synapse0x23f8f90() {
   return (neuron0x23e5c70()*-0.0221306);
}

double NNfunction_ns_chi01_uL::synapse0x23f8fd0() {
   return (neuron0x23e5fb0()*-0.102942);
}

double NNfunction_ns_chi01_uL::synapse0x23f9010() {
   return (neuron0x23e62f0()*0.00313157);
}

double NNfunction_ns_chi01_uL::synapse0x23f9050() {
   return (neuron0x23e6630()*-0.0407244);
}

double NNfunction_ns_chi01_uL::synapse0x23f9090() {
   return (neuron0x23e6970()*-0.000787546);
}

double NNfunction_ns_chi01_uL::synapse0x23f90d0() {
   return (neuron0x23e6cb0()*-0.00922712);
}

double NNfunction_ns_chi01_uL::synapse0x23f8b60() {
   return (neuron0x23e6ff0()*0.0264961);
}

double NNfunction_ns_chi01_uL::synapse0x23f8ba0() {
   return (neuron0x23e7550()*0.00468707);
}

double NNfunction_ns_chi01_uL::synapse0x23f9220() {
   return (neuron0x23e7770()*-0.000685882);
}

double NNfunction_ns_chi01_uL::synapse0x23f9260() {
   return (neuron0x23e7ab0()*-0.00803184);
}

double NNfunction_ns_chi01_uL::synapse0x23f92a0() {
   return (neuron0x23e7df0()*-0.00471231);
}

double NNfunction_ns_chi01_uL::synapse0x23f92e0() {
   return (neuron0x23e8130()*-0.0177384);
}

double NNfunction_ns_chi01_uL::synapse0x23f9320() {
   return (neuron0x23e8470()*-0.00902691);
}

double NNfunction_ns_chi01_uL::synapse0x23f9360() {
   return (neuron0x23e87b0()*-34.7495);
}

double NNfunction_ns_chi01_uL::synapse0x240b230() {
   return (neuron0x23e3c80()*1.8392);
}

double NNfunction_ns_chi01_uL::synapse0x240b270() {
   return (neuron0x23e3f30()*-0.0505528);
}

double NNfunction_ns_chi01_uL::synapse0x240b2b0() {
   return (neuron0x23e4270()*2.52559);
}

double NNfunction_ns_chi01_uL::synapse0x240b2f0() {
   return (neuron0x23e45b0()*1.51995);
}

double NNfunction_ns_chi01_uL::synapse0x240b330() {
   return (neuron0x23e48f0()*-0.772433);
}

double NNfunction_ns_chi01_uL::synapse0x240b370() {
   return (neuron0x23e4c30()*-0.352005);
}

double NNfunction_ns_chi01_uL::synapse0x240b3b0() {
   return (neuron0x23e4f70()*0.365827);
}

double NNfunction_ns_chi01_uL::synapse0x240b3f0() {
   return (neuron0x23e52b0()*0.256601);
}

double NNfunction_ns_chi01_uL::synapse0x240b430() {
   return (neuron0x23e55f0()*-0.0735934);
}

double NNfunction_ns_chi01_uL::synapse0x240b470() {
   return (neuron0x23e5930()*-0.998157);
}

double NNfunction_ns_chi01_uL::synapse0x240b4b0() {
   return (neuron0x23e5c70()*-0.747371);
}

double NNfunction_ns_chi01_uL::synapse0x240b4f0() {
   return (neuron0x23e5fb0()*1.49902);
}

double NNfunction_ns_chi01_uL::synapse0x240b530() {
   return (neuron0x23e62f0()*0.286806);
}

double NNfunction_ns_chi01_uL::synapse0x240b570() {
   return (neuron0x23e6630()*1.41272);
}

double NNfunction_ns_chi01_uL::synapse0x240b5b0() {
   return (neuron0x23e6970()*-0.258828);
}

double NNfunction_ns_chi01_uL::synapse0x240b5f0() {
   return (neuron0x23e6cb0()*-0.076554);
}

double NNfunction_ns_chi01_uL::synapse0x23f93a0() {
   return (neuron0x23e6ff0()*0.361974);
}

double NNfunction_ns_chi01_uL::synapse0x23f93e0() {
   return (neuron0x23e7550()*0.768869);
}

double NNfunction_ns_chi01_uL::synapse0x240b740() {
   return (neuron0x23e7770()*-0.27359);
}

double NNfunction_ns_chi01_uL::synapse0x240b780() {
   return (neuron0x23e7ab0()*-0.152472);
}

double NNfunction_ns_chi01_uL::synapse0x240b7c0() {
   return (neuron0x23e7df0()*-1.65266);
}

double NNfunction_ns_chi01_uL::synapse0x240b800() {
   return (neuron0x23e8130()*-1.08207);
}

double NNfunction_ns_chi01_uL::synapse0x240b840() {
   return (neuron0x23e8470()*0.99794);
}

double NNfunction_ns_chi01_uL::synapse0x240b880() {
   return (neuron0x23e87b0()*0.742828);
}

double NNfunction_ns_chi01_uL::synapse0x240bc00() {
   return (neuron0x23e3c80()*0.0471095);
}

double NNfunction_ns_chi01_uL::synapse0x240bc40() {
   return (neuron0x23e3f30()*0.144359);
}

double NNfunction_ns_chi01_uL::synapse0x240bc80() {
   return (neuron0x23e4270()*-0.556576);
}

double NNfunction_ns_chi01_uL::synapse0x240bcc0() {
   return (neuron0x23e45b0()*-2.24203);
}

double NNfunction_ns_chi01_uL::synapse0x240bd00() {
   return (neuron0x23e48f0()*0.0696507);
}

double NNfunction_ns_chi01_uL::synapse0x240bd40() {
   return (neuron0x23e4c30()*0.113132);
}

double NNfunction_ns_chi01_uL::synapse0x240bd80() {
   return (neuron0x23e4f70()*0.112635);
}

double NNfunction_ns_chi01_uL::synapse0x240bdc0() {
   return (neuron0x23e52b0()*0.0852333);
}

double NNfunction_ns_chi01_uL::synapse0x240be00() {
   return (neuron0x23e55f0()*-0.136369);
}

double NNfunction_ns_chi01_uL::synapse0x240be40() {
   return (neuron0x23e5930()*-0.0598179);
}

double NNfunction_ns_chi01_uL::synapse0x240be80() {
   return (neuron0x23e5c70()*-0.0948058);
}

double NNfunction_ns_chi01_uL::synapse0x240bec0() {
   return (neuron0x23e5fb0()*-2.86021);
}

double NNfunction_ns_chi01_uL::synapse0x240bf00() {
   return (neuron0x23e62f0()*0.180742);
}

double NNfunction_ns_chi01_uL::synapse0x240bf40() {
   return (neuron0x23e6630()*-0.105851);
}

double NNfunction_ns_chi01_uL::synapse0x240bf80() {
   return (neuron0x23e6970()*0.34414);
}

double NNfunction_ns_chi01_uL::synapse0x240bfc0() {
   return (neuron0x23e6cb0()*0.152512);
}

double NNfunction_ns_chi01_uL::synapse0x240ba50() {
   return (neuron0x23e6ff0()*-0.0993743);
}

double NNfunction_ns_chi01_uL::synapse0x240ba90() {
   return (neuron0x23e7550()*-0.0237779);
}

double NNfunction_ns_chi01_uL::synapse0x240c110() {
   return (neuron0x23e7770()*0.00595436);
}

double NNfunction_ns_chi01_uL::synapse0x240c150() {
   return (neuron0x23e7ab0()*0.0515426);
}

double NNfunction_ns_chi01_uL::synapse0x240c190() {
   return (neuron0x23e7df0()*-0.0806628);
}

double NNfunction_ns_chi01_uL::synapse0x240c1d0() {
   return (neuron0x23e8130()*0.115476);
}

double NNfunction_ns_chi01_uL::synapse0x240c210() {
   return (neuron0x23e8470()*-0.0463099);
}

double NNfunction_ns_chi01_uL::synapse0x240c250() {
   return (neuron0x23e87b0()*-0.32424);
}

double NNfunction_ns_chi01_uL::synapse0x240c5d0() {
   return (neuron0x23e3c80()*-0.00194443);
}

double NNfunction_ns_chi01_uL::synapse0x240c610() {
   return (neuron0x23e3f30()*-14.0345);
}

double NNfunction_ns_chi01_uL::synapse0x240c650() {
   return (neuron0x23e4270()*-1.22565);
}

double NNfunction_ns_chi01_uL::synapse0x240c690() {
   return (neuron0x23e45b0()*-0.0641018);
}

double NNfunction_ns_chi01_uL::synapse0x240c6d0() {
   return (neuron0x23e48f0()*0.0672205);
}

double NNfunction_ns_chi01_uL::synapse0x240c710() {
   return (neuron0x23e4c30()*-0.0155015);
}

double NNfunction_ns_chi01_uL::synapse0x240c750() {
   return (neuron0x23e4f70()*0.0544346);
}

double NNfunction_ns_chi01_uL::synapse0x240c790() {
   return (neuron0x23e52b0()*0.00355209);
}

double NNfunction_ns_chi01_uL::synapse0x240c7d0() {
   return (neuron0x23e55f0()*0.0265451);
}

double NNfunction_ns_chi01_uL::synapse0x240c810() {
   return (neuron0x23e5930()*0.00899249);
}

double NNfunction_ns_chi01_uL::synapse0x240c850() {
   return (neuron0x23e5c70()*0.0221181);
}

double NNfunction_ns_chi01_uL::synapse0x240c890() {
   return (neuron0x23e5fb0()*0.828789);
}

double NNfunction_ns_chi01_uL::synapse0x240c8d0() {
   return (neuron0x23e62f0()*0.0387321);
}

double NNfunction_ns_chi01_uL::synapse0x240c910() {
   return (neuron0x23e6630()*0.0693798);
}

double NNfunction_ns_chi01_uL::synapse0x240c950() {
   return (neuron0x23e6970()*0.0194618);
}

double NNfunction_ns_chi01_uL::synapse0x240c990() {
   return (neuron0x23e6cb0()*-0.00683333);
}

double NNfunction_ns_chi01_uL::synapse0x240c420() {
   return (neuron0x23e6ff0()*0.0444189);
}

double NNfunction_ns_chi01_uL::synapse0x240c460() {
   return (neuron0x23e7550()*-0.0392744);
}

double NNfunction_ns_chi01_uL::synapse0x240cae0() {
   return (neuron0x23e7770()*-0.0154327);
}

double NNfunction_ns_chi01_uL::synapse0x240cb20() {
   return (neuron0x23e7ab0()*-0.00982365);
}

double NNfunction_ns_chi01_uL::synapse0x240cb60() {
   return (neuron0x23e7df0()*0.048817);
}

double NNfunction_ns_chi01_uL::synapse0x240cba0() {
   return (neuron0x23e8130()*-0.00149405);
}

double NNfunction_ns_chi01_uL::synapse0x240cbe0() {
   return (neuron0x23e8470()*-0.0325198);
}

double NNfunction_ns_chi01_uL::synapse0x240cc20() {
   return (neuron0x23e87b0()*-0.112817);
}

double NNfunction_ns_chi01_uL::synapse0x240cfa0() {
   return (neuron0x23e3c80()*0.0260626);
}

double NNfunction_ns_chi01_uL::synapse0x240cfe0() {
   return (neuron0x23e3f30()*4.26542);
}

double NNfunction_ns_chi01_uL::synapse0x240d020() {
   return (neuron0x23e4270()*0.942528);
}

double NNfunction_ns_chi01_uL::synapse0x240d060() {
   return (neuron0x23e45b0()*0.00175395);
}

double NNfunction_ns_chi01_uL::synapse0x240d0a0() {
   return (neuron0x23e48f0()*-0.0344963);
}

double NNfunction_ns_chi01_uL::synapse0x240d0e0() {
   return (neuron0x23e4c30()*-0.0101214);
}

double NNfunction_ns_chi01_uL::synapse0x240d120() {
   return (neuron0x23e4f70()*0.0358154);
}

double NNfunction_ns_chi01_uL::synapse0x240d160() {
   return (neuron0x23e52b0()*-0.0101207);
}

double NNfunction_ns_chi01_uL::synapse0x240d1a0() {
   return (neuron0x23e55f0()*0.0194506);
}

double NNfunction_ns_chi01_uL::synapse0x240d1e0() {
   return (neuron0x23e5930()*0.0417676);
}

double NNfunction_ns_chi01_uL::synapse0x240d220() {
   return (neuron0x23e5c70()*0.00776526);
}

double NNfunction_ns_chi01_uL::synapse0x240d260() {
   return (neuron0x23e5fb0()*-0.163499);
}

double NNfunction_ns_chi01_uL::synapse0x240d2a0() {
   return (neuron0x23e62f0()*-0.00424283);
}

double NNfunction_ns_chi01_uL::synapse0x240d2e0() {
   return (neuron0x23e6630()*-0.0361992);
}

double NNfunction_ns_chi01_uL::synapse0x240d320() {
   return (neuron0x23e6970()*0.00245835);
}

double NNfunction_ns_chi01_uL::synapse0x240d360() {
   return (neuron0x23e6cb0()*0.0034858);
}

double NNfunction_ns_chi01_uL::synapse0x240cdf0() {
   return (neuron0x23e6ff0()*-0.00230135);
}

double NNfunction_ns_chi01_uL::synapse0x240ce30() {
   return (neuron0x23e7550()*-0.00395214);
}

double NNfunction_ns_chi01_uL::synapse0x240d4b0() {
   return (neuron0x23e7770()*0.0158323);
}

double NNfunction_ns_chi01_uL::synapse0x240d4f0() {
   return (neuron0x23e7ab0()*0.017158);
}

double NNfunction_ns_chi01_uL::synapse0x240d530() {
   return (neuron0x23e7df0()*0.029936);
}

double NNfunction_ns_chi01_uL::synapse0x240d570() {
   return (neuron0x23e8130()*-0.00638991);
}

double NNfunction_ns_chi01_uL::synapse0x240d5b0() {
   return (neuron0x23e8470()*-0.0124831);
}

double NNfunction_ns_chi01_uL::synapse0x240d5f0() {
   return (neuron0x23e87b0()*1.70888);
}

double NNfunction_ns_chi01_uL::synapse0x23e9b80() {
   return (neuron0x23e8c20()*-0.0337742);
}

double NNfunction_ns_chi01_uL::synapse0x23e9bc0() {
   return (neuron0x23e9570()*0.939283);
}

double NNfunction_ns_chi01_uL::synapse0x23eb0a0() {
   return (neuron0x23ea050()*0.00299779);
}

double NNfunction_ns_chi01_uL::synapse0x23eb0e0() {
   return (neuron0x21ad3a0()*-0.0391978);
}

double NNfunction_ns_chi01_uL::synapse0x23eba70() {
   return (neuron0x23eadf0()*0.0986076);
}

double NNfunction_ns_chi01_uL::synapse0x23ebab0() {
   return (neuron0x23eb7c0()*-0.0190068);
}

double NNfunction_ns_chi01_uL::synapse0x23ec840() {
   return (neuron0x23ec590()*7.87021);
}

double NNfunction_ns_chi01_uL::synapse0x23ec880() {
   return (neuron0x23ecf60()*-2.0378);
}

double NNfunction_ns_chi01_uL::synapse0x23ed210() {
   return (neuron0x23ed930()*4.21508);
}

double NNfunction_ns_chi01_uL::synapse0x23ed250() {
   return (neuron0x23ee410()*-0.0884036);
}

double NNfunction_ns_chi01_uL::synapse0x23edbe0() {
   return (neuron0x23eede0()*0.820441);
}

double NNfunction_ns_chi01_uL::synapse0x23edc20() {
   return (neuron0x23ebec0()*-0.0362042);
}

double NNfunction_ns_chi01_uL::synapse0x23ee6c0() {
   return (neuron0x23f0990()*0.0168886);
}

double NNfunction_ns_chi01_uL::synapse0x23ee700() {
   return (neuron0x23f1360()*4.05231);
}

double NNfunction_ns_chi01_uL::synapse0x23ef090() {
   return (neuron0x23f1d30()*0.414196);
}

double NNfunction_ns_chi01_uL::synapse0x23ef0d0() {
   return (neuron0x23f2700()*1.46675);
}

double NNfunction_ns_chi01_uL::synapse0x23ec170() {
   return (neuron0x23f4510()*-1.5213);
}

double NNfunction_ns_chi01_uL::synapse0x23ec1b0() {
   return (neuron0x23f47f0()*-2.45539);
}

double NNfunction_ns_chi01_uL::synapse0x23f0c40() {
   return (neuron0x23f51c0()*-0.307098);
}

double NNfunction_ns_chi01_uL::synapse0x23f0c80() {
   return (neuron0x23f5b90()*-1.94248);
}

double NNfunction_ns_chi01_uL::synapse0x23f1610() {
   return (neuron0x23f6560()*0.794088);
}

double NNfunction_ns_chi01_uL::synapse0x23f1650() {
   return (neuron0x23f6f30()*-0.0457611);
}

double NNfunction_ns_chi01_uL::synapse0x23f1fe0() {
   return (neuron0x23efa80()*0.81841);
}

double NNfunction_ns_chi01_uL::synapse0x23f2020() {
   return (neuron0x23f0450()*-4.47906);
}

double NNfunction_ns_chi01_uL::synapse0x23f29b0() {
   return (neuron0x23f9cc0()*-1.76926);
}

double NNfunction_ns_chi01_uL::synapse0x23f29f0() {
   return (neuron0x23fa690()*-0.00800673);
}

double NNfunction_ns_chi01_uL::synapse0x23e6b90() {
   return (neuron0x23fb060()*0.00917142);
}

double NNfunction_ns_chi01_uL::synapse0x23e6bd0() {
   return (neuron0x23fba30()*-0.333986);
}

double NNfunction_ns_chi01_uL::synapse0x23f4aa0() {
   return (neuron0x23fc400()*-0.0309189);
}

double NNfunction_ns_chi01_uL::synapse0x23f4ae0() {
   return (neuron0x23fcdd0()*-1.13388);
}

double NNfunction_ns_chi01_uL::synapse0x23f5470() {
   return (neuron0x23fd7a0()*-0.108046);
}

double NNfunction_ns_chi01_uL::synapse0x23f54b0() {
   return (neuron0x23fe170()*0.361634);
}

double NNfunction_ns_chi01_uL::synapse0x23f5e40() {
   return (neuron0x23f4200()*0.0605357);
}

double NNfunction_ns_chi01_uL::synapse0x23f5e80() {
   return (neuron0x2400d50()*0.100319);
}

double NNfunction_ns_chi01_uL::synapse0x23f6810() {
   return (neuron0x2401720()*5.0959);
}

double NNfunction_ns_chi01_uL::synapse0x23f6850() {
   return (neuron0x24020f0()*0.00502543);
}

double NNfunction_ns_chi01_uL::synapse0x23f71e0() {
   return (neuron0x2402ac0()*-0.0630327);
}

double NNfunction_ns_chi01_uL::synapse0x23f7220() {
   return (neuron0x2403490()*0.00511235);
}

double NNfunction_ns_chi01_uL::synapse0x23efd30() {
   return (neuron0x2403e60()*0.108554);
}

double NNfunction_ns_chi01_uL::synapse0x23efd70() {
   return (neuron0x2404830()*-0.863489);
}

double NNfunction_ns_chi01_uL::synapse0x23f95e0() {
   return (neuron0x2405200()*-4.88464);
}

double NNfunction_ns_chi01_uL::synapse0x23f9620() {
   return (neuron0x2405de0()*0.0439183);
}

double NNfunction_ns_chi01_uL::synapse0x23f9f70() {
   return (neuron0x24067b0()*-0.263908);
}

double NNfunction_ns_chi01_uL::synapse0x23f9fb0() {
   return (neuron0x23f7630()*-0.0183777);
}

double NNfunction_ns_chi01_uL::synapse0x23fa940() {
   return (neuron0x23f8000()*0.0116417);
}

double NNfunction_ns_chi01_uL::synapse0x23fa980() {
   return (neuron0x23f89d0()*-4.01443);
}

double NNfunction_ns_chi01_uL::synapse0x23fb310() {
   return (neuron0x240b010()*0.048);
}

double NNfunction_ns_chi01_uL::synapse0x23fb350() {
   return (neuron0x240b8c0()*-0.000319344);
}

double NNfunction_ns_chi01_uL::synapse0x23fbce0() {
   return (neuron0x240c290()*-0.669314);
}

double NNfunction_ns_chi01_uL::synapse0x23fbd20() {
   return (neuron0x240cc60()*2.56201);
}

double NNfunction_ns_chi01_uL::synapse0x23fe420() {
   return (neuron0x23e8c20()*-0.0133168);
}

double NNfunction_ns_chi01_uL::synapse0x23fe460() {
   return (neuron0x23e9570()*6.22388);
}

double NNfunction_ns_chi01_uL::synapse0x23f39e0() {
   return (neuron0x23ea050()*-0.171463);
}

double NNfunction_ns_chi01_uL::synapse0x23f3a20() {
   return (neuron0x21ad3a0()*0.0346875);
}

double NNfunction_ns_chi01_uL::synapse0x2401000() {
   return (neuron0x23eadf0()*0.086359);
}

double NNfunction_ns_chi01_uL::synapse0x2401040() {
   return (neuron0x23eb7c0()*0.214538);
}

double NNfunction_ns_chi01_uL::synapse0x24019d0() {
   return (neuron0x23ec590()*0.423246);
}

double NNfunction_ns_chi01_uL::synapse0x2401a10() {
   return (neuron0x23ecf60()*1.97114);
}

double NNfunction_ns_chi01_uL::synapse0x24023a0() {
   return (neuron0x23ed930()*0.420868);
}

double NNfunction_ns_chi01_uL::synapse0x24023e0() {
   return (neuron0x23ee410()*0.14482);
}

double NNfunction_ns_chi01_uL::synapse0x2402d70() {
   return (neuron0x23eede0()*1.03259);
}

double NNfunction_ns_chi01_uL::synapse0x2402db0() {
   return (neuron0x23ebec0()*0.0182438);
}

double NNfunction_ns_chi01_uL::synapse0x2403740() {
   return (neuron0x23f0990()*0.0632249);
}

double NNfunction_ns_chi01_uL::synapse0x2403780() {
   return (neuron0x23f1360()*-1.61113);
}

double NNfunction_ns_chi01_uL::synapse0x2404110() {
   return (neuron0x23f1d30()*3.32664);
}

double NNfunction_ns_chi01_uL::synapse0x2404150() {
   return (neuron0x23f2700()*-1.8886);
}

double NNfunction_ns_chi01_uL::synapse0x2404ae0() {
   return (neuron0x23f4510()*-4.50826);
}

double NNfunction_ns_chi01_uL::synapse0x2404b20() {
   return (neuron0x23f47f0()*1.03995);
}

double NNfunction_ns_chi01_uL::synapse0x24054b0() {
   return (neuron0x23f51c0()*2.94168);
}

double NNfunction_ns_chi01_uL::synapse0x24054f0() {
   return (neuron0x23f5b90()*-1.34227);
}

double NNfunction_ns_chi01_uL::synapse0x2406090() {
   return (neuron0x23f6560()*3.55304);
}

double NNfunction_ns_chi01_uL::synapse0x24060d0() {
   return (neuron0x23f6f30()*-0.0365393);
}

double NNfunction_ns_chi01_uL::synapse0x2406a60() {
   return (neuron0x23efa80()*3.20382);
}

double NNfunction_ns_chi01_uL::synapse0x2406aa0() {
   return (neuron0x23f0450()*1.84144);
}

double NNfunction_ns_chi01_uL::synapse0x23f78e0() {
   return (neuron0x23f9cc0()*-3.5692);
}

double NNfunction_ns_chi01_uL::synapse0x23f7920() {
   return (neuron0x23fa690()*0.00556985);
}

double NNfunction_ns_chi01_uL::synapse0x23f82b0() {
   return (neuron0x23fb060()*0.0218264);
}

double NNfunction_ns_chi01_uL::synapse0x23f82f0() {
   return (neuron0x23fba30()*-0.293587);
}

double NNfunction_ns_chi01_uL::synapse0x23f8c80() {
   return (neuron0x23fc400()*-0.00906691);
}

double NNfunction_ns_chi01_uL::synapse0x23f8cc0() {
   return (neuron0x23fcdd0()*3.43225);
}

double NNfunction_ns_chi01_uL::synapse0x240b1a0() {
   return (neuron0x23fd7a0()*0.0812705);
}

double NNfunction_ns_chi01_uL::synapse0x240b1e0() {
   return (neuron0x23fe170()*3.46345);
}

double NNfunction_ns_chi01_uL::synapse0x240bb70() {
   return (neuron0x23f4200()*-0.0600958);
}

double NNfunction_ns_chi01_uL::synapse0x240bbb0() {
   return (neuron0x2400d50()*0.0146071);
}

double NNfunction_ns_chi01_uL::synapse0x240c540() {
   return (neuron0x2401720()*-0.151673);
}

double NNfunction_ns_chi01_uL::synapse0x240c580() {
   return (neuron0x24020f0()*0.0541219);
}

double NNfunction_ns_chi01_uL::synapse0x240cf10() {
   return (neuron0x2402ac0()*0.0753975);
}

double NNfunction_ns_chi01_uL::synapse0x240cf50() {
   return (neuron0x2403490()*0.126158);
}

double NNfunction_ns_chi01_uL::synapse0x23e8e40() {
   return (neuron0x2403e60()*-0.80052);
}

double NNfunction_ns_chi01_uL::synapse0x23e8e80() {
   return (neuron0x2404830()*-0.367806);
}

double NNfunction_ns_chi01_uL::synapse0x23fc6b0() {
   return (neuron0x2405200()*-3.07642);
}

double NNfunction_ns_chi01_uL::synapse0x23fc6f0() {
   return (neuron0x2405de0()*-0.0300622);
}

double NNfunction_ns_chi01_uL::synapse0x240d630() {
   return (neuron0x24067b0()*-5.52475);
}

double NNfunction_ns_chi01_uL::synapse0x240d670() {
   return (neuron0x23f7630()*0.0516275);
}

double NNfunction_ns_chi01_uL::synapse0x240d6b0() {
   return (neuron0x23f8000()*0.0566364);
}

double NNfunction_ns_chi01_uL::synapse0x240d6f0() {
   return (neuron0x23f89d0()*-0.346504);
}

double NNfunction_ns_chi01_uL::synapse0x24145a0() {
   return (neuron0x240b010()*-0.0184541);
}

double NNfunction_ns_chi01_uL::synapse0x24145e0() {
   return (neuron0x240b8c0()*0.816204);
}

double NNfunction_ns_chi01_uL::synapse0x2414620() {
   return (neuron0x240c290()*0.109227);
}

double NNfunction_ns_chi01_uL::synapse0x2414660() {
   return (neuron0x240cc60()*1.80036);
}

double NNfunction_ns_chi01_uL::synapse0x24149e0() {
   return (neuron0x23e8c20()*-0.0106677);
}

double NNfunction_ns_chi01_uL::synapse0x2414a20() {
   return (neuron0x23e9570()*1.62302);
}

double NNfunction_ns_chi01_uL::synapse0x2414a60() {
   return (neuron0x23ea050()*0.0571692);
}

double NNfunction_ns_chi01_uL::synapse0x2414aa0() {
   return (neuron0x21ad3a0()*0.0267646);
}

double NNfunction_ns_chi01_uL::synapse0x2414ae0() {
   return (neuron0x23eadf0()*-0.0200595);
}

double NNfunction_ns_chi01_uL::synapse0x2414b20() {
   return (neuron0x23eb7c0()*0.182891);
}

double NNfunction_ns_chi01_uL::synapse0x2414b60() {
   return (neuron0x23ec590()*-2.45943);
}

double NNfunction_ns_chi01_uL::synapse0x2414ba0() {
   return (neuron0x23ecf60()*-3.70533);
}

double NNfunction_ns_chi01_uL::synapse0x2414be0() {
   return (neuron0x23ed930()*7.35802);
}

double NNfunction_ns_chi01_uL::synapse0x2414c20() {
   return (neuron0x23ee410()*0.0183953);
}

double NNfunction_ns_chi01_uL::synapse0x2414c60() {
   return (neuron0x23eede0()*-0.298576);
}

double NNfunction_ns_chi01_uL::synapse0x2414ca0() {
   return (neuron0x23ebec0()*0.00791207);
}

double NNfunction_ns_chi01_uL::synapse0x2414ce0() {
   return (neuron0x23f0990()*0.0033033);
}

double NNfunction_ns_chi01_uL::synapse0x2414d20() {
   return (neuron0x23f1360()*0.82892);
}

double NNfunction_ns_chi01_uL::synapse0x2414d60() {
   return (neuron0x23f1d30()*0.754831);
}

double NNfunction_ns_chi01_uL::synapse0x2414da0() {
   return (neuron0x23f2700()*2.37696);
}

double NNfunction_ns_chi01_uL::synapse0x2414830() {
   return (neuron0x23f4510()*-1.45834);
}

double NNfunction_ns_chi01_uL::synapse0x2414870() {
   return (neuron0x23f47f0()*-1.69245);
}

double NNfunction_ns_chi01_uL::synapse0x2414ef0() {
   return (neuron0x23f51c0()*1.1833);
}

double NNfunction_ns_chi01_uL::synapse0x2414f30() {
   return (neuron0x23f5b90()*1.39167);
}

double NNfunction_ns_chi01_uL::synapse0x2414f70() {
   return (neuron0x23f6560()*1.59507);
}

double NNfunction_ns_chi01_uL::synapse0x2414fb0() {
   return (neuron0x23f6f30()*0.0185818);
}

double NNfunction_ns_chi01_uL::synapse0x2414ff0() {
   return (neuron0x23efa80()*0.88641);
}

double NNfunction_ns_chi01_uL::synapse0x2415030() {
   return (neuron0x23f0450()*-1.03277);
}

double NNfunction_ns_chi01_uL::synapse0x2415070() {
   return (neuron0x23f9cc0()*-1.19106);
}

double NNfunction_ns_chi01_uL::synapse0x24150b0() {
   return (neuron0x23fa690()*0.0265677);
}

double NNfunction_ns_chi01_uL::synapse0x24150f0() {
   return (neuron0x23fb060()*-0.0037523);
}

double NNfunction_ns_chi01_uL::synapse0x2415130() {
   return (neuron0x23fba30()*2.72286);
}

double NNfunction_ns_chi01_uL::synapse0x2415170() {
   return (neuron0x23fc400()*0.043042);
}

double NNfunction_ns_chi01_uL::synapse0x24151b0() {
   return (neuron0x23fcdd0()*-4.83126);
}

double NNfunction_ns_chi01_uL::synapse0x24151f0() {
   return (neuron0x23fd7a0()*0.031854);
}

double NNfunction_ns_chi01_uL::synapse0x2415230() {
   return (neuron0x23fe170()*0.820104);
}

double NNfunction_ns_chi01_uL::synapse0x2414de0() {
   return (neuron0x23f4200()*-0.0312871);
}

double NNfunction_ns_chi01_uL::synapse0x2414e20() {
   return (neuron0x2400d50()*-0.00655142);
}

double NNfunction_ns_chi01_uL::synapse0x2414e60() {
   return (neuron0x2401720()*1.3973);
}

double NNfunction_ns_chi01_uL::synapse0x2414ea0() {
   return (neuron0x24020f0()*0.0217408);
}

double NNfunction_ns_chi01_uL::synapse0x2415480() {
   return (neuron0x2402ac0()*0.060405);
}

double NNfunction_ns_chi01_uL::synapse0x24154c0() {
   return (neuron0x2403490()*-0.0254142);
}

double NNfunction_ns_chi01_uL::synapse0x2415500() {
   return (neuron0x2403e60()*1.66641);
}

double NNfunction_ns_chi01_uL::synapse0x2415540() {
   return (neuron0x2404830()*0.697645);
}

double NNfunction_ns_chi01_uL::synapse0x2415580() {
   return (neuron0x2405200()*-1.68928);
}

double NNfunction_ns_chi01_uL::synapse0x24155c0() {
   return (neuron0x2405de0()*-0.0804179);
}

double NNfunction_ns_chi01_uL::synapse0x2415600() {
   return (neuron0x24067b0()*-0.476425);
}

double NNfunction_ns_chi01_uL::synapse0x2415640() {
   return (neuron0x23f7630()*-0.00533651);
}

double NNfunction_ns_chi01_uL::synapse0x2415680() {
   return (neuron0x23f8000()*0.00657626);
}

double NNfunction_ns_chi01_uL::synapse0x24156c0() {
   return (neuron0x23f89d0()*-6.61191);
}

double NNfunction_ns_chi01_uL::synapse0x2415700() {
   return (neuron0x240b010()*-0.00303299);
}

double NNfunction_ns_chi01_uL::synapse0x2415740() {
   return (neuron0x240b8c0()*-0.0849473);
}

double NNfunction_ns_chi01_uL::synapse0x2415780() {
   return (neuron0x240c290()*1.72623);
}

double NNfunction_ns_chi01_uL::synapse0x24157c0() {
   return (neuron0x240cc60()*-3.0295);
}

double NNfunction_ns_chi01_uL::synapse0x2415b40() {
   return (neuron0x23e8c20()*0.00743058);
}

double NNfunction_ns_chi01_uL::synapse0x2415b80() {
   return (neuron0x23e9570()*-0.625733);
}

double NNfunction_ns_chi01_uL::synapse0x2415bc0() {
   return (neuron0x23ea050()*-0.0415365);
}

double NNfunction_ns_chi01_uL::synapse0x2415c00() {
   return (neuron0x21ad3a0()*-0.00780313);
}

double NNfunction_ns_chi01_uL::synapse0x2415c40() {
   return (neuron0x23eadf0()*-0.0292804);
}

double NNfunction_ns_chi01_uL::synapse0x2415c80() {
   return (neuron0x23eb7c0()*-0.0835366);
}

double NNfunction_ns_chi01_uL::synapse0x2415cc0() {
   return (neuron0x23ec590()*0.109447);
}

double NNfunction_ns_chi01_uL::synapse0x2415d00() {
   return (neuron0x23ecf60()*-0.283064);
}

double NNfunction_ns_chi01_uL::synapse0x2415d40() {
   return (neuron0x23ed930()*4.07164);
}

double NNfunction_ns_chi01_uL::synapse0x2415d80() {
   return (neuron0x23ee410()*0.00914981);
}

double NNfunction_ns_chi01_uL::synapse0x2415dc0() {
   return (neuron0x23eede0()*0.233821);
}

double NNfunction_ns_chi01_uL::synapse0x2415e00() {
   return (neuron0x23ebec0()*0.0230983);
}

double NNfunction_ns_chi01_uL::synapse0x2415e40() {
   return (neuron0x23f0990()*0.00679197);
}

double NNfunction_ns_chi01_uL::synapse0x2415e80() {
   return (neuron0x23f1360()*-1.09016);
}

double NNfunction_ns_chi01_uL::synapse0x2415ec0() {
   return (neuron0x23f1d30()*-0.268157);
}

double NNfunction_ns_chi01_uL::synapse0x2415f00() {
   return (neuron0x23f2700()*-1.52431);
}

double NNfunction_ns_chi01_uL::synapse0x2415990() {
   return (neuron0x23f4510()*0.0910831);
}

double NNfunction_ns_chi01_uL::synapse0x24159d0() {
   return (neuron0x23f47f0()*1.44459);
}

double NNfunction_ns_chi01_uL::synapse0x2416050() {
   return (neuron0x23f51c0()*-0.193684);
}

double NNfunction_ns_chi01_uL::synapse0x2416090() {
   return (neuron0x23f5b90()*-0.460566);
}

double NNfunction_ns_chi01_uL::synapse0x24160d0() {
   return (neuron0x23f6560()*-0.584617);
}

double NNfunction_ns_chi01_uL::synapse0x2416110() {
   return (neuron0x23f6f30()*-0.00254409);
}

double NNfunction_ns_chi01_uL::synapse0x2416150() {
   return (neuron0x23efa80()*-0.314691);
}

double NNfunction_ns_chi01_uL::synapse0x2416190() {
   return (neuron0x23f0450()*2.05075);
}

double NNfunction_ns_chi01_uL::synapse0x24161d0() {
   return (neuron0x23f9cc0()*-0.266435);
}

double NNfunction_ns_chi01_uL::synapse0x2416210() {
   return (neuron0x23fa690()*-0.014308);
}

double NNfunction_ns_chi01_uL::synapse0x2416250() {
   return (neuron0x23fb060()*0.00768772);
}

double NNfunction_ns_chi01_uL::synapse0x2416290() {
   return (neuron0x23fba30()*-1.1657);
}

double NNfunction_ns_chi01_uL::synapse0x24162d0() {
   return (neuron0x23fc400()*-0.0157455);
}

double NNfunction_ns_chi01_uL::synapse0x2416310() {
   return (neuron0x23fcdd0()*1.07733);
}

double NNfunction_ns_chi01_uL::synapse0x2416350() {
   return (neuron0x23fd7a0()*-0.00779949);
}

double NNfunction_ns_chi01_uL::synapse0x2416390() {
   return (neuron0x23fe170()*-0.556636);
}

double NNfunction_ns_chi01_uL::synapse0x2415f40() {
   return (neuron0x23f4200()*0.0184488);
}

double NNfunction_ns_chi01_uL::synapse0x2415f80() {
   return (neuron0x2400d50()*-0.00275765);
}

double NNfunction_ns_chi01_uL::synapse0x2415fc0() {
   return (neuron0x2401720()*-0.0837541);
}

double NNfunction_ns_chi01_uL::synapse0x2416000() {
   return (neuron0x24020f0()*-0.0188523);
}

double NNfunction_ns_chi01_uL::synapse0x24165e0() {
   return (neuron0x2402ac0()*-0.0352822);
}

double NNfunction_ns_chi01_uL::synapse0x2416620() {
   return (neuron0x2403490()*0.0262829);
}

double NNfunction_ns_chi01_uL::synapse0x2416660() {
   return (neuron0x2403e60()*-0.499225);
}

double NNfunction_ns_chi01_uL::synapse0x24166a0() {
   return (neuron0x2404830()*-0.181534);
}

double NNfunction_ns_chi01_uL::synapse0x24166e0() {
   return (neuron0x2405200()*-0.682458);
}

double NNfunction_ns_chi01_uL::synapse0x2416720() {
   return (neuron0x2405de0()*0.0301038);
}

double NNfunction_ns_chi01_uL::synapse0x2416760() {
   return (neuron0x24067b0()*-1.43436);
}

double NNfunction_ns_chi01_uL::synapse0x24167a0() {
   return (neuron0x23f7630()*-0.00237098);
}

double NNfunction_ns_chi01_uL::synapse0x24167e0() {
   return (neuron0x23f8000()*-0.0281012);
}

double NNfunction_ns_chi01_uL::synapse0x2416820() {
   return (neuron0x23f89d0()*-3.25195);
}

double NNfunction_ns_chi01_uL::synapse0x2416860() {
   return (neuron0x240b010()*0.0147982);
}

double NNfunction_ns_chi01_uL::synapse0x24168a0() {
   return (neuron0x240b8c0()*0.00773347);
}

double NNfunction_ns_chi01_uL::synapse0x24168e0() {
   return (neuron0x240c290()*-0.481857);
}

double NNfunction_ns_chi01_uL::synapse0x2416920() {
   return (neuron0x240cc60()*0.797244);
}

double NNfunction_ns_chi01_uL::synapse0x2416ca0() {
   return (neuron0x23e8c20()*3.48526);
}

double NNfunction_ns_chi01_uL::synapse0x2416ce0() {
   return (neuron0x23e9570()*-3.5571);
}

double NNfunction_ns_chi01_uL::synapse0x2416d20() {
   return (neuron0x23ea050()*1.13865);
}

double NNfunction_ns_chi01_uL::synapse0x2416d60() {
   return (neuron0x21ad3a0()*3.316);
}

double NNfunction_ns_chi01_uL::synapse0x2416da0() {
   return (neuron0x23eadf0()*-4.30569);
}

double NNfunction_ns_chi01_uL::synapse0x2416de0() {
   return (neuron0x23eb7c0()*-1.38673);
}

double NNfunction_ns_chi01_uL::synapse0x2416e20() {
   return (neuron0x23ec590()*-4.64236);
}

double NNfunction_ns_chi01_uL::synapse0x2416e60() {
   return (neuron0x23ecf60()*-0.893719);
}

double NNfunction_ns_chi01_uL::synapse0x2416ea0() {
   return (neuron0x23ed930()*2.69637);
}

double NNfunction_ns_chi01_uL::synapse0x2416ee0() {
   return (neuron0x23ee410()*0.272829);
}

double NNfunction_ns_chi01_uL::synapse0x2416f20() {
   return (neuron0x23eede0()*0.541699);
}

double NNfunction_ns_chi01_uL::synapse0x2416f60() {
   return (neuron0x23ebec0()*2.73962);
}

double NNfunction_ns_chi01_uL::synapse0x2416fa0() {
   return (neuron0x23f0990()*-5.71548);
}

double NNfunction_ns_chi01_uL::synapse0x2416fe0() {
   return (neuron0x23f1360()*4.00435);
}

double NNfunction_ns_chi01_uL::synapse0x2417020() {
   return (neuron0x23f1d30()*-2.03085);
}

double NNfunction_ns_chi01_uL::synapse0x2417060() {
   return (neuron0x23f2700()*1.96324);
}

double NNfunction_ns_chi01_uL::synapse0x2416af0() {
   return (neuron0x23f4510()*0.288792);
}

double NNfunction_ns_chi01_uL::synapse0x2416b30() {
   return (neuron0x23f47f0()*-0.290963);
}

double NNfunction_ns_chi01_uL::synapse0x24171b0() {
   return (neuron0x23f51c0()*0.434526);
}

double NNfunction_ns_chi01_uL::synapse0x24171f0() {
   return (neuron0x23f5b90()*-0.506648);
}

double NNfunction_ns_chi01_uL::synapse0x2417230() {
   return (neuron0x23f6560()*-0.473669);
}

double NNfunction_ns_chi01_uL::synapse0x2417270() {
   return (neuron0x23f6f30()*-3.20644);
}

double NNfunction_ns_chi01_uL::synapse0x24172b0() {
   return (neuron0x23efa80()*1.28242);
}

double NNfunction_ns_chi01_uL::synapse0x24172f0() {
   return (neuron0x23f0450()*1.88471);
}

double NNfunction_ns_chi01_uL::synapse0x2417330() {
   return (neuron0x23f9cc0()*-2.17116);
}

double NNfunction_ns_chi01_uL::synapse0x2417370() {
   return (neuron0x23fa690()*-2.76025);
}

double NNfunction_ns_chi01_uL::synapse0x24173b0() {
   return (neuron0x23fb060()*-4.10752);
}

double NNfunction_ns_chi01_uL::synapse0x24173f0() {
   return (neuron0x23fba30()*-0.600605);
}

double NNfunction_ns_chi01_uL::synapse0x2417430() {
   return (neuron0x23fc400()*-4.09232);
}

double NNfunction_ns_chi01_uL::synapse0x2417470() {
   return (neuron0x23fcdd0()*1.85518);
}

double NNfunction_ns_chi01_uL::synapse0x24174b0() {
   return (neuron0x23fd7a0()*-3.4023);
}

double NNfunction_ns_chi01_uL::synapse0x24174f0() {
   return (neuron0x23fe170()*0.25436);
}

double NNfunction_ns_chi01_uL::synapse0x24170a0() {
   return (neuron0x23f4200()*-4.00069);
}

double NNfunction_ns_chi01_uL::synapse0x24170e0() {
   return (neuron0x2400d50()*-5.65846);
}

double NNfunction_ns_chi01_uL::synapse0x2417120() {
   return (neuron0x2401720()*1.39111);
}

double NNfunction_ns_chi01_uL::synapse0x2417160() {
   return (neuron0x24020f0()*-3.52377);
}

double NNfunction_ns_chi01_uL::synapse0x2417740() {
   return (neuron0x2402ac0()*-4.04693);
}

double NNfunction_ns_chi01_uL::synapse0x2417780() {
   return (neuron0x2403490()*1.51737);
}

double NNfunction_ns_chi01_uL::synapse0x24177c0() {
   return (neuron0x2403e60()*1.09167);
}

double NNfunction_ns_chi01_uL::synapse0x2417800() {
   return (neuron0x2404830()*-1.76911);
}

double NNfunction_ns_chi01_uL::synapse0x2417840() {
   return (neuron0x2405200()*-1.64043);
}

double NNfunction_ns_chi01_uL::synapse0x2417880() {
   return (neuron0x2405de0()*2.83497);
}

double NNfunction_ns_chi01_uL::synapse0x24178c0() {
   return (neuron0x24067b0()*0.418374);
}

double NNfunction_ns_chi01_uL::synapse0x2417900() {
   return (neuron0x23f7630()*3.00031);
}

double NNfunction_ns_chi01_uL::synapse0x2417940() {
   return (neuron0x23f8000()*3.07696);
}

double NNfunction_ns_chi01_uL::synapse0x2417980() {
   return (neuron0x23f89d0()*0.692644);
}

double NNfunction_ns_chi01_uL::synapse0x24179c0() {
   return (neuron0x240b010()*-4.1872);
}

double NNfunction_ns_chi01_uL::synapse0x2417a00() {
   return (neuron0x240b8c0()*2.08811);
}

double NNfunction_ns_chi01_uL::synapse0x2417a40() {
   return (neuron0x240c290()*2.184);
}

double NNfunction_ns_chi01_uL::synapse0x2417a80() {
   return (neuron0x240cc60()*0.832861);
}

double NNfunction_ns_chi01_uL::synapse0x2417ce0() {
   return (neuron0x2413e60()*-3.23076);
}

double NNfunction_ns_chi01_uL::synapse0x2417d20() {
   return (neuron0x2414200()*-8.70192);
}

double NNfunction_ns_chi01_uL::synapse0x2417d60() {
   return (neuron0x24146a0()*-5.41636);
}

double NNfunction_ns_chi01_uL::synapse0x2417da0() {
   return (neuron0x2415800()*-7.68628);
}

double NNfunction_ns_chi01_uL::synapse0x2417de0() {
   return (neuron0x2416960()*-9.63519);
}

