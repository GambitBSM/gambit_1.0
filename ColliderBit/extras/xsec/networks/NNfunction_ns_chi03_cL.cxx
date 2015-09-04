#include "NNfunction_ns_chi03_cL.h"
#include <cmath>

double NNfunction_ns_chi03_cL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.8401)/15.2289;
   input1 = (in1 - 17.7096)/1134.55;
   input2 = (in2 - 446.663)/499.949;
   input3 = (in3 - 15.0543)/787.303;
   input4 = (in4 - 943.478)/901.634;
   input5 = (in5 - 829.125)/919.817;
   input6 = (in6 - 829.455)/916.169;
   input7 = (in7 - 830.276)/891.074;
   input8 = (in8 - 850.85)/947.973;
   input9 = (in9 - 839.718)/934.357;
   input10 = (in10 - 883.022)/933.42;
   input11 = (in11 - 690.605)/835.458;
   input12 = (in12 - 214.569)/173.24;
   input13 = (in13 - 461.327)/473.587;
   input14 = (in14 - 670.656)/761.97;
   input15 = (in15 - 675.922)/770.93;
   input16 = (in16 - 490.336)/525.265;
   input17 = (in17 - 718.54)/863.666;
   input18 = (in18 - 720.997)/870.052;
   input19 = (in19 - 720.088)/824.771;
   input20 = (in20 - -21.2177)/464.523;
   input21 = (in21 - -32.0334)/1087.72;
   input22 = (in22 - 12.0375)/1127.78;
   input23 = (in23 - -39.0444)/191.466;
   switch(index) {
     case 0:
         return neuron0x28fd9d0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi03_cL::Value(int index, double* input) {
   input0 = (input[0] - 23.8401)/15.2289;
   input1 = (input[1] - 17.7096)/1134.55;
   input2 = (input[2] - 446.663)/499.949;
   input3 = (input[3] - 15.0543)/787.303;
   input4 = (input[4] - 943.478)/901.634;
   input5 = (input[5] - 829.125)/919.817;
   input6 = (input[6] - 829.455)/916.169;
   input7 = (input[7] - 830.276)/891.074;
   input8 = (input[8] - 850.85)/947.973;
   input9 = (input[9] - 839.718)/934.357;
   input10 = (input[10] - 883.022)/933.42;
   input11 = (input[11] - 690.605)/835.458;
   input12 = (input[12] - 214.569)/173.24;
   input13 = (input[13] - 461.327)/473.587;
   input14 = (input[14] - 670.656)/761.97;
   input15 = (input[15] - 675.922)/770.93;
   input16 = (input[16] - 490.336)/525.265;
   input17 = (input[17] - 718.54)/863.666;
   input18 = (input[18] - 720.997)/870.052;
   input19 = (input[19] - 720.088)/824.771;
   input20 = (input[20] - -21.2177)/464.523;
   input21 = (input[21] - -32.0334)/1087.72;
   input22 = (input[22] - 12.0375)/1127.78;
   input23 = (input[23] - -39.0444)/191.466;
   switch(index) {
     case 0:
         return neuron0x28fd9d0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi03_cL::neuron0x28c8a40() {
   return input0;
}

double NNfunction_ns_chi03_cL::neuron0x28c8cf0() {
   return input1;
}

double NNfunction_ns_chi03_cL::neuron0x28c9030() {
   return input2;
}

double NNfunction_ns_chi03_cL::neuron0x28c9370() {
   return input3;
}

double NNfunction_ns_chi03_cL::neuron0x28c96b0() {
   return input4;
}

double NNfunction_ns_chi03_cL::neuron0x28c99f0() {
   return input5;
}

double NNfunction_ns_chi03_cL::neuron0x28c9d30() {
   return input6;
}

double NNfunction_ns_chi03_cL::neuron0x28ca070() {
   return input7;
}

double NNfunction_ns_chi03_cL::neuron0x28ca3b0() {
   return input8;
}

double NNfunction_ns_chi03_cL::neuron0x28ca6f0() {
   return input9;
}

double NNfunction_ns_chi03_cL::neuron0x28caa30() {
   return input10;
}

double NNfunction_ns_chi03_cL::neuron0x28cad70() {
   return input11;
}

double NNfunction_ns_chi03_cL::neuron0x28cb0b0() {
   return input12;
}

double NNfunction_ns_chi03_cL::neuron0x28cb3f0() {
   return input13;
}

double NNfunction_ns_chi03_cL::neuron0x28cb730() {
   return input14;
}

double NNfunction_ns_chi03_cL::neuron0x28cba70() {
   return input15;
}

double NNfunction_ns_chi03_cL::neuron0x28cbdb0() {
   return input16;
}

double NNfunction_ns_chi03_cL::neuron0x28cc310() {
   return input17;
}

double NNfunction_ns_chi03_cL::neuron0x28cc650() {
   return input18;
}

double NNfunction_ns_chi03_cL::neuron0x28cc990() {
   return input19;
}

double NNfunction_ns_chi03_cL::neuron0x28cccd0() {
   return input20;
}

double NNfunction_ns_chi03_cL::neuron0x28cd010() {
   return input21;
}

double NNfunction_ns_chi03_cL::neuron0x28cd350() {
   return input22;
}

double NNfunction_ns_chi03_cL::neuron0x28cd690() {
   return input23;
}

double NNfunction_ns_chi03_cL::input0x28cdb00() {
   double input = 0.292022;
   input += synapse0x28cde40();
   input += synapse0x28cde80();
   input += synapse0x28cdec0();
   input += synapse0x28cdf00();
   input += synapse0x28cdf40();
   input += synapse0x28cdf80();
   input += synapse0x28cdfc0();
   input += synapse0x28ce000();
   input += synapse0x28ce040();
   input += synapse0x28ce080();
   input += synapse0x28ce0c0();
   input += synapse0x28ce100();
   input += synapse0x28ce140();
   input += synapse0x28ce180();
   input += synapse0x28ce1c0();
   input += synapse0x28ce200();
   input += synapse0x28cdc90();
   input += synapse0x28cdcd0();
   input += synapse0x2684bc0();
   input += synapse0x2684c00();
   input += synapse0x28ce240();
   input += synapse0x28ce280();
   input += synapse0x28ce2c0();
   input += synapse0x28ce300();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28cdb00() {
   double input = input0x28cdb00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28ce340() {
   double input = 3.30337;
   input += synapse0x28ce680();
   input += synapse0x28ce6c0();
   input += synapse0x28ce700();
   input += synapse0x28ce740();
   input += synapse0x28ce780();
   input += synapse0x28ce7c0();
   input += synapse0x28ce800();
   input += synapse0x28ce840();
   input += synapse0x28ce880();
   input += synapse0x2684a10();
   input += synapse0x2684a50();
   input += synapse0x2684a90();
   input += synapse0x2684ad0();
   input += synapse0x28cead0();
   input += synapse0x28ceb10();
   input += synapse0x28ceb50();
   input += synapse0x28ce4d0();
   input += synapse0x28ce510();
   input += synapse0x28ceca0();
   input += synapse0x28cece0();
   input += synapse0x28ced20();
   input += synapse0x28ced60();
   input += synapse0x28ceda0();
   input += synapse0x28cede0();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28ce340() {
   double input = input0x28ce340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28cee20() {
   double input = 0.196194;
   input += synapse0x28cf160();
   input += synapse0x28cf1a0();
   input += synapse0x28cf1e0();
   input += synapse0x28cf220();
   input += synapse0x28cf260();
   input += synapse0x28cf2a0();
   input += synapse0x28cf2e0();
   input += synapse0x28cf320();
   input += synapse0x28cf360();
   input += synapse0x28cf3a0();
   input += synapse0x28cf3e0();
   input += synapse0x28cf420();
   input += synapse0x28cf460();
   input += synapse0x28cf4a0();
   input += synapse0x28cf4e0();
   input += synapse0x28cf520();
   input += synapse0x28cefb0();
   input += synapse0x28ceff0();
   input += synapse0x26852b0();
   input += synapse0x2692b80();
   input += synapse0x2692bc0();
   input += synapse0x28d1450();
   input += synapse0x28d1490();
   input += synapse0x28c8780();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28cee20() {
   double input = input0x28cee20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28ce8c0() {
   double input = 2.14312;
   input += synapse0x28c8850();
   input += synapse0x2693400();
   input += synapse0x28cea50();
   input += synapse0x28cea90();
   input += synapse0x28cf670();
   input += synapse0x28cf6b0();
   input += synapse0x28cf6f0();
   input += synapse0x28cf730();
   input += synapse0x28cf770();
   input += synapse0x28cf7b0();
   input += synapse0x28cf7f0();
   input += synapse0x28cf830();
   input += synapse0x28cf870();
   input += synapse0x28cf8b0();
   input += synapse0x28cf8f0();
   input += synapse0x28cf930();
   input += synapse0x28c87c0();
   input += synapse0x28c8800();
   input += synapse0x28cfa80();
   input += synapse0x28cfac0();
   input += synapse0x28cfb00();
   input += synapse0x28cfb40();
   input += synapse0x28cfb80();
   input += synapse0x28cfbc0();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28ce8c0() {
   double input = input0x28ce8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28cfc00() {
   double input = 6.60596;
   input += synapse0x28cff40();
   input += synapse0x28cff80();
   input += synapse0x28cffc0();
   input += synapse0x28d0000();
   input += synapse0x28d0040();
   input += synapse0x28d0080();
   input += synapse0x28d00c0();
   input += synapse0x28d0100();
   input += synapse0x28d0140();
   input += synapse0x28d0180();
   input += synapse0x28d01c0();
   input += synapse0x28d0200();
   input += synapse0x28d0240();
   input += synapse0x28d0280();
   input += synapse0x28d02c0();
   input += synapse0x28d0300();
   input += synapse0x28d0450();
   input += synapse0x28cfd90();
   input += synapse0x28cfdd0();
   input += synapse0x28d1590();
   input += synapse0x28d15d0();
   input += synapse0x28d1610();
   input += synapse0x28d1650();
   input += synapse0x28d1690();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28cfc00() {
   double input = input0x28cfc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28d16d0() {
   double input = 0.50152;
   input += synapse0x28d1a10();
   input += synapse0x28d1a50();
   input += synapse0x28d1a90();
   input += synapse0x28d1ad0();
   input += synapse0x28d1b10();
   input += synapse0x28d1b50();
   input += synapse0x28d1b90();
   input += synapse0x28d1bd0();
   input += synapse0x28d1c10();
   input += synapse0x2692ed0();
   input += synapse0x2692f10();
   input += synapse0x2692f50();
   input += synapse0x2692f90();
   input += synapse0x2692fd0();
   input += synapse0x2693010();
   input += synapse0x2693050();
   input += synapse0x28d1860();
   input += synapse0x28d18a0();
   input += synapse0x26931a0();
   input += synapse0x26931e0();
   input += synapse0x2693220();
   input += synapse0x2693260();
   input += synapse0x26932a0();
   input += synapse0x28d2460();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28d16d0() {
   double input = input0x28d16d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28d24a0() {
   double input = 0.471619;
   input += synapse0x28d27e0();
   input += synapse0x28d2820();
   input += synapse0x28d2860();
   input += synapse0x28d28a0();
   input += synapse0x28d28e0();
   input += synapse0x28d2920();
   input += synapse0x28d2960();
   input += synapse0x28d29a0();
   input += synapse0x28d29e0();
   input += synapse0x28d2a20();
   input += synapse0x28d2a60();
   input += synapse0x28d2aa0();
   input += synapse0x28d2ae0();
   input += synapse0x28d2b20();
   input += synapse0x28d2b60();
   input += synapse0x28d2ba0();
   input += synapse0x28d2630();
   input += synapse0x28d2670();
   input += synapse0x28d2cf0();
   input += synapse0x28d2d30();
   input += synapse0x28d2d70();
   input += synapse0x28d2db0();
   input += synapse0x28d2df0();
   input += synapse0x28d2e30();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28d24a0() {
   double input = input0x28d24a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28d2e70() {
   double input = -2.67543;
   input += synapse0x28d31b0();
   input += synapse0x28d31f0();
   input += synapse0x28d3230();
   input += synapse0x28d3270();
   input += synapse0x28d32b0();
   input += synapse0x28d32f0();
   input += synapse0x28d3330();
   input += synapse0x28d3370();
   input += synapse0x28d33b0();
   input += synapse0x28d33f0();
   input += synapse0x28d3430();
   input += synapse0x28d3470();
   input += synapse0x28d34b0();
   input += synapse0x28d34f0();
   input += synapse0x28d3530();
   input += synapse0x28d3570();
   input += synapse0x28d3000();
   input += synapse0x28d3040();
   input += synapse0x28d36c0();
   input += synapse0x28d3700();
   input += synapse0x28d3740();
   input += synapse0x28d3780();
   input += synapse0x28d37c0();
   input += synapse0x28d3800();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28d2e70() {
   double input = input0x28d2e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28d3840() {
   double input = -0.794864;
   input += synapse0x28cc200();
   input += synapse0x28cc240();
   input += synapse0x28cc280();
   input += synapse0x28cc2c0();
   input += synapse0x28d3d90();
   input += synapse0x28d3dd0();
   input += synapse0x28d3e10();
   input += synapse0x28d3e50();
   input += synapse0x28d3e90();
   input += synapse0x28d3ed0();
   input += synapse0x28d3f10();
   input += synapse0x28d3f50();
   input += synapse0x28d3f90();
   input += synapse0x28d3fd0();
   input += synapse0x28d4010();
   input += synapse0x28d4050();
   input += synapse0x28d39d0();
   input += synapse0x28d3a10();
   input += synapse0x28d41a0();
   input += synapse0x28d41e0();
   input += synapse0x28d4220();
   input += synapse0x28d4260();
   input += synapse0x28d42a0();
   input += synapse0x28d42e0();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28d3840() {
   double input = input0x28d3840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28d4320() {
   double input = -0.793026;
   input += synapse0x28d4660();
   input += synapse0x28d46a0();
   input += synapse0x28d46e0();
   input += synapse0x28d4720();
   input += synapse0x28d4760();
   input += synapse0x28d47a0();
   input += synapse0x28d47e0();
   input += synapse0x28d4820();
   input += synapse0x28d4860();
   input += synapse0x28d48a0();
   input += synapse0x28d48e0();
   input += synapse0x28d4920();
   input += synapse0x28d4960();
   input += synapse0x28d49a0();
   input += synapse0x28d49e0();
   input += synapse0x28d4a20();
   input += synapse0x28d44b0();
   input += synapse0x28d44f0();
   input += synapse0x28d4b70();
   input += synapse0x28d4bb0();
   input += synapse0x28d4bf0();
   input += synapse0x28d4c30();
   input += synapse0x28d4c70();
   input += synapse0x28d4cb0();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28d4320() {
   double input = input0x28d4320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28d4cf0() {
   double input = -0.536279;
   input += synapse0x28d5030();
   input += synapse0x28d5070();
   input += synapse0x28d50b0();
   input += synapse0x28d50f0();
   input += synapse0x28d5130();
   input += synapse0x28d5170();
   input += synapse0x28d51b0();
   input += synapse0x28d51f0();
   input += synapse0x28d5230();
   input += synapse0x28d5270();
   input += synapse0x28d52b0();
   input += synapse0x28d52f0();
   input += synapse0x28d5330();
   input += synapse0x28d5370();
   input += synapse0x28d53b0();
   input += synapse0x28d53f0();
   input += synapse0x28d4e80();
   input += synapse0x28d4ec0();
   input += synapse0x28d1c50();
   input += synapse0x28d1c90();
   input += synapse0x28d1cd0();
   input += synapse0x28d1d10();
   input += synapse0x28d1d50();
   input += synapse0x28d1d90();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28d4cf0() {
   double input = input0x28d4cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28d1dd0() {
   double input = -1.60859;
   input += synapse0x28d2110();
   input += synapse0x28d2150();
   input += synapse0x28d2190();
   input += synapse0x28d21d0();
   input += synapse0x28d2210();
   input += synapse0x28d2250();
   input += synapse0x28d2290();
   input += synapse0x28d22d0();
   input += synapse0x28d2310();
   input += synapse0x28d2350();
   input += synapse0x28d2390();
   input += synapse0x28d23d0();
   input += synapse0x28d2410();
   input += synapse0x28d6550();
   input += synapse0x28d6590();
   input += synapse0x28d65d0();
   input += synapse0x28d1f60();
   input += synapse0x28d1fa0();
   input += synapse0x28d6720();
   input += synapse0x28d6760();
   input += synapse0x28d67a0();
   input += synapse0x28d67e0();
   input += synapse0x28d6820();
   input += synapse0x28d6860();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28d1dd0() {
   double input = input0x28d1dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28d68a0() {
   double input = 2.05581;
   input += synapse0x28d6be0();
   input += synapse0x28d6c20();
   input += synapse0x28d6c60();
   input += synapse0x28d6ca0();
   input += synapse0x28d6ce0();
   input += synapse0x28d6d20();
   input += synapse0x28d6d60();
   input += synapse0x28d6da0();
   input += synapse0x28d6de0();
   input += synapse0x28d6e20();
   input += synapse0x28d6e60();
   input += synapse0x28d6ea0();
   input += synapse0x28d6ee0();
   input += synapse0x28d6f20();
   input += synapse0x28d6f60();
   input += synapse0x28d6fa0();
   input += synapse0x28d6a30();
   input += synapse0x28d6a70();
   input += synapse0x28d70f0();
   input += synapse0x28d7130();
   input += synapse0x28d7170();
   input += synapse0x28d71b0();
   input += synapse0x28d71f0();
   input += synapse0x28d7230();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28d68a0() {
   double input = input0x28d68a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28d7270() {
   double input = 2.09453;
   input += synapse0x28d75b0();
   input += synapse0x28d75f0();
   input += synapse0x28d7630();
   input += synapse0x28d7670();
   input += synapse0x28d76b0();
   input += synapse0x28d76f0();
   input += synapse0x28d7730();
   input += synapse0x28d7770();
   input += synapse0x28d77b0();
   input += synapse0x28d77f0();
   input += synapse0x28d7830();
   input += synapse0x28d7870();
   input += synapse0x28d78b0();
   input += synapse0x28d78f0();
   input += synapse0x28d7930();
   input += synapse0x28d7970();
   input += synapse0x28d7400();
   input += synapse0x28d7440();
   input += synapse0x28d7ac0();
   input += synapse0x28d7b00();
   input += synapse0x28d7b40();
   input += synapse0x28d7b80();
   input += synapse0x28d7bc0();
   input += synapse0x28d7c00();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28d7270() {
   double input = input0x28d7270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28d7c40() {
   double input = -0.509229;
   input += synapse0x28d7f80();
   input += synapse0x28d7fc0();
   input += synapse0x28d8000();
   input += synapse0x28d8040();
   input += synapse0x28d8080();
   input += synapse0x28d80c0();
   input += synapse0x28d8100();
   input += synapse0x28d8140();
   input += synapse0x28d8180();
   input += synapse0x28d81c0();
   input += synapse0x28d8200();
   input += synapse0x28d8240();
   input += synapse0x28d8280();
   input += synapse0x28d82c0();
   input += synapse0x28d8300();
   input += synapse0x28d8340();
   input += synapse0x28d7dd0();
   input += synapse0x28d7e10();
   input += synapse0x28d8490();
   input += synapse0x28d84d0();
   input += synapse0x28d8510();
   input += synapse0x28d8550();
   input += synapse0x28d8590();
   input += synapse0x28d85d0();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28d7c40() {
   double input = input0x28d7c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28d8610() {
   double input = -0.0292189;
   input += synapse0x28d8950();
   input += synapse0x28c8bd0();
   input += synapse0x28c8c10();
   input += synapse0x28c8f10();
   input += synapse0x28c8f50();
   input += synapse0x28c9250();
   input += synapse0x28c9290();
   input += synapse0x28c9590();
   input += synapse0x28c95d0();
   input += synapse0x28c98d0();
   input += synapse0x28c9910();
   input += synapse0x28c9c10();
   input += synapse0x28c9c50();
   input += synapse0x28c9f50();
   input += synapse0x28c9f90();
   input += synapse0x28ca290();
   input += synapse0x28ca2d0();
   input += synapse0x28ca5d0();
   input += synapse0x28ca610();
   input += synapse0x28ca910();
   input += synapse0x28ca950();
   input += synapse0x28cac50();
   input += synapse0x28cac90();
   input += synapse0x28caf90();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28d8610() {
   double input = input0x28d8610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28da420() {
   double input = 0.891491;
   input += synapse0x28cafd0();
   input += synapse0x28cbc90();
   input += synapse0x28cbcd0();
   input += synapse0x28d87a0();
   input += synapse0x28d87e0();
   input += synapse0x28cbfd0();
   input += synapse0x28cc010();
   input += synapse0x28cc530();
   input += synapse0x28cc570();
   input += synapse0x28cc870();
   input += synapse0x28cc8b0();
   input += synapse0x28ccbb0();
   input += synapse0x28ccbf0();
   input += synapse0x28ccef0();
   input += synapse0x28ccf30();
   input += synapse0x28cd230();
   input += synapse0x28cd270();
   input += synapse0x28cd570();
   input += synapse0x28cd5b0();
   input += synapse0x28cd8b0();
   input += synapse0x28cd8f0();
   input += synapse0x28cb2d0();
   input += synapse0x28cb310();
   input += synapse0x28da6c0();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28da420() {
   double input = input0x28da420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28da700() {
   double input = -0.857723;
   input += synapse0x28daa40();
   input += synapse0x28daa80();
   input += synapse0x28daac0();
   input += synapse0x28dab00();
   input += synapse0x28dab40();
   input += synapse0x28dab80();
   input += synapse0x28dabc0();
   input += synapse0x28dac00();
   input += synapse0x28dac40();
   input += synapse0x28dac80();
   input += synapse0x28dacc0();
   input += synapse0x28dad00();
   input += synapse0x28dad40();
   input += synapse0x28dad80();
   input += synapse0x28dadc0();
   input += synapse0x28dae00();
   input += synapse0x28da890();
   input += synapse0x28da8d0();
   input += synapse0x28daf50();
   input += synapse0x28daf90();
   input += synapse0x28dafd0();
   input += synapse0x28db010();
   input += synapse0x28db050();
   input += synapse0x28db090();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28da700() {
   double input = input0x28da700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28db0d0() {
   double input = -0.229288;
   input += synapse0x28db410();
   input += synapse0x28db450();
   input += synapse0x28db490();
   input += synapse0x28db4d0();
   input += synapse0x28db510();
   input += synapse0x28db550();
   input += synapse0x28db590();
   input += synapse0x28db5d0();
   input += synapse0x28db610();
   input += synapse0x28db650();
   input += synapse0x28db690();
   input += synapse0x28db6d0();
   input += synapse0x28db710();
   input += synapse0x28db750();
   input += synapse0x28db790();
   input += synapse0x28db7d0();
   input += synapse0x28db260();
   input += synapse0x28db2a0();
   input += synapse0x28db920();
   input += synapse0x28db960();
   input += synapse0x28db9a0();
   input += synapse0x28db9e0();
   input += synapse0x28dba20();
   input += synapse0x28dba60();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28db0d0() {
   double input = input0x28db0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28dbaa0() {
   double input = -1.15407;
   input += synapse0x28dbde0();
   input += synapse0x28dbe20();
   input += synapse0x28dbe60();
   input += synapse0x28dbea0();
   input += synapse0x28dbee0();
   input += synapse0x28dbf20();
   input += synapse0x28dbf60();
   input += synapse0x28dbfa0();
   input += synapse0x28dbfe0();
   input += synapse0x28dc020();
   input += synapse0x28dc060();
   input += synapse0x28dc0a0();
   input += synapse0x28dc0e0();
   input += synapse0x28dc120();
   input += synapse0x28dc160();
   input += synapse0x28dc1a0();
   input += synapse0x28dbc30();
   input += synapse0x28dbc70();
   input += synapse0x28dc2f0();
   input += synapse0x28dc330();
   input += synapse0x28dc370();
   input += synapse0x28dc3b0();
   input += synapse0x28dc3f0();
   input += synapse0x28dc430();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28dbaa0() {
   double input = input0x28dbaa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28dc470() {
   double input = 1.07844;
   input += synapse0x28dc7b0();
   input += synapse0x28dc7f0();
   input += synapse0x28dc830();
   input += synapse0x28dc870();
   input += synapse0x28dc8b0();
   input += synapse0x28dc8f0();
   input += synapse0x28dc930();
   input += synapse0x28dc970();
   input += synapse0x28dc9b0();
   input += synapse0x28dc9f0();
   input += synapse0x28dca30();
   input += synapse0x28dca70();
   input += synapse0x28dcab0();
   input += synapse0x28dcaf0();
   input += synapse0x28dcb30();
   input += synapse0x28dcb70();
   input += synapse0x28dc600();
   input += synapse0x28dc640();
   input += synapse0x28dccc0();
   input += synapse0x28dcd00();
   input += synapse0x28dcd40();
   input += synapse0x28dcd80();
   input += synapse0x28dcdc0();
   input += synapse0x28dce00();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28dc470() {
   double input = input0x28dc470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28dce40() {
   double input = -0.682384;
   input += synapse0x28dd180();
   input += synapse0x28dd1c0();
   input += synapse0x28dd200();
   input += synapse0x28dd240();
   input += synapse0x28dd280();
   input += synapse0x28dd2c0();
   input += synapse0x28dd300();
   input += synapse0x28dd340();
   input += synapse0x28dd380();
   input += synapse0x28d5540();
   input += synapse0x28d5580();
   input += synapse0x28d55c0();
   input += synapse0x28d5600();
   input += synapse0x28d5640();
   input += synapse0x28d5680();
   input += synapse0x28d56c0();
   input += synapse0x28dcfd0();
   input += synapse0x28dd010();
   input += synapse0x28d5810();
   input += synapse0x28d5850();
   input += synapse0x28d5890();
   input += synapse0x28d58d0();
   input += synapse0x28d5910();
   input += synapse0x28d5950();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28dce40() {
   double input = input0x28dce40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28d5990() {
   double input = 0.432471;
   input += synapse0x28d5cd0();
   input += synapse0x28d5d10();
   input += synapse0x28d5d50();
   input += synapse0x28d5d90();
   input += synapse0x28d5dd0();
   input += synapse0x28d5e10();
   input += synapse0x28d5e50();
   input += synapse0x28d5e90();
   input += synapse0x28d5ed0();
   input += synapse0x28d5f10();
   input += synapse0x28d5f50();
   input += synapse0x28d5f90();
   input += synapse0x28d5fd0();
   input += synapse0x28d6010();
   input += synapse0x28d6050();
   input += synapse0x28d6090();
   input += synapse0x28d5b20();
   input += synapse0x28d5b60();
   input += synapse0x28d61e0();
   input += synapse0x28d6220();
   input += synapse0x28d6260();
   input += synapse0x28d62a0();
   input += synapse0x28d62e0();
   input += synapse0x28d6320();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28d5990() {
   double input = input0x28d5990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28d6360() {
   double input = 0.884919;
   input += synapse0x28d64f0();
   input += synapse0x28df580();
   input += synapse0x28df5c0();
   input += synapse0x28df600();
   input += synapse0x28df640();
   input += synapse0x28df680();
   input += synapse0x28df6c0();
   input += synapse0x28df700();
   input += synapse0x28df740();
   input += synapse0x28df780();
   input += synapse0x28df7c0();
   input += synapse0x28df800();
   input += synapse0x28df840();
   input += synapse0x28df880();
   input += synapse0x28df8c0();
   input += synapse0x28df900();
   input += synapse0x28df3d0();
   input += synapse0x28df410();
   input += synapse0x28dfa50();
   input += synapse0x28dfa90();
   input += synapse0x28dfad0();
   input += synapse0x28dfb10();
   input += synapse0x28dfb50();
   input += synapse0x28dfb90();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28d6360() {
   double input = input0x28d6360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28dfbd0() {
   double input = 0.959564;
   input += synapse0x28dff10();
   input += synapse0x28dff50();
   input += synapse0x28dff90();
   input += synapse0x28dffd0();
   input += synapse0x28e0010();
   input += synapse0x28e0050();
   input += synapse0x28e0090();
   input += synapse0x28e00d0();
   input += synapse0x28e0110();
   input += synapse0x28e0150();
   input += synapse0x28e0190();
   input += synapse0x28e01d0();
   input += synapse0x28e0210();
   input += synapse0x28e0250();
   input += synapse0x28e0290();
   input += synapse0x28e02d0();
   input += synapse0x28dfd60();
   input += synapse0x28dfda0();
   input += synapse0x28e0420();
   input += synapse0x28e0460();
   input += synapse0x28e04a0();
   input += synapse0x28e04e0();
   input += synapse0x28e0520();
   input += synapse0x28e0560();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28dfbd0() {
   double input = input0x28dfbd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28e05a0() {
   double input = -0.746375;
   input += synapse0x28e08e0();
   input += synapse0x28e0920();
   input += synapse0x28e0960();
   input += synapse0x28e09a0();
   input += synapse0x28e09e0();
   input += synapse0x28e0a20();
   input += synapse0x28e0a60();
   input += synapse0x28e0aa0();
   input += synapse0x28e0ae0();
   input += synapse0x28e0b20();
   input += synapse0x28e0b60();
   input += synapse0x28e0ba0();
   input += synapse0x28e0be0();
   input += synapse0x28e0c20();
   input += synapse0x28e0c60();
   input += synapse0x28e0ca0();
   input += synapse0x28e0730();
   input += synapse0x28e0770();
   input += synapse0x28e0df0();
   input += synapse0x28e0e30();
   input += synapse0x28e0e70();
   input += synapse0x28e0eb0();
   input += synapse0x28e0ef0();
   input += synapse0x28e0f30();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28e05a0() {
   double input = input0x28e05a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28e0f70() {
   double input = -0.067649;
   input += synapse0x28e12b0();
   input += synapse0x28e12f0();
   input += synapse0x28e1330();
   input += synapse0x28e1370();
   input += synapse0x28e13b0();
   input += synapse0x28e13f0();
   input += synapse0x28e1430();
   input += synapse0x28e1470();
   input += synapse0x28e14b0();
   input += synapse0x28e14f0();
   input += synapse0x28e1530();
   input += synapse0x28e1570();
   input += synapse0x28e15b0();
   input += synapse0x28e15f0();
   input += synapse0x28e1630();
   input += synapse0x28e1670();
   input += synapse0x28e1100();
   input += synapse0x28e1140();
   input += synapse0x28e17c0();
   input += synapse0x28e1800();
   input += synapse0x28e1840();
   input += synapse0x28e1880();
   input += synapse0x28e18c0();
   input += synapse0x28e1900();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28e0f70() {
   double input = input0x28e0f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28e1940() {
   double input = 2.90524;
   input += synapse0x28e1c80();
   input += synapse0x28e1cc0();
   input += synapse0x28e1d00();
   input += synapse0x28e1d40();
   input += synapse0x28e1d80();
   input += synapse0x28e1dc0();
   input += synapse0x28e1e00();
   input += synapse0x28e1e40();
   input += synapse0x28e1e80();
   input += synapse0x28e1ec0();
   input += synapse0x28e1f00();
   input += synapse0x28e1f40();
   input += synapse0x28e1f80();
   input += synapse0x28e1fc0();
   input += synapse0x28e2000();
   input += synapse0x28e2040();
   input += synapse0x28e1ad0();
   input += synapse0x28e1b10();
   input += synapse0x28e2190();
   input += synapse0x28e21d0();
   input += synapse0x28e2210();
   input += synapse0x28e2250();
   input += synapse0x28e2290();
   input += synapse0x28e22d0();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28e1940() {
   double input = input0x28e1940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28e2310() {
   double input = 0.669257;
   input += synapse0x28e2650();
   input += synapse0x28e2690();
   input += synapse0x28e26d0();
   input += synapse0x28e2710();
   input += synapse0x28e2750();
   input += synapse0x28e2790();
   input += synapse0x28e27d0();
   input += synapse0x28e2810();
   input += synapse0x28e2850();
   input += synapse0x28e2890();
   input += synapse0x28e28d0();
   input += synapse0x28e2910();
   input += synapse0x28e2950();
   input += synapse0x28e2990();
   input += synapse0x28e29d0();
   input += synapse0x28e2a10();
   input += synapse0x28e24a0();
   input += synapse0x28e24e0();
   input += synapse0x28e2b60();
   input += synapse0x28e2ba0();
   input += synapse0x28e2be0();
   input += synapse0x28e2c20();
   input += synapse0x28e2c60();
   input += synapse0x28e2ca0();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28e2310() {
   double input = input0x28e2310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28e2ce0() {
   double input = 2.43527;
   input += synapse0x28e3020();
   input += synapse0x28e3060();
   input += synapse0x28e30a0();
   input += synapse0x28e30e0();
   input += synapse0x28e3120();
   input += synapse0x28e3160();
   input += synapse0x28e31a0();
   input += synapse0x28e31e0();
   input += synapse0x28e3220();
   input += synapse0x28e3260();
   input += synapse0x28e32a0();
   input += synapse0x28e32e0();
   input += synapse0x28e3320();
   input += synapse0x28e3360();
   input += synapse0x28e33a0();
   input += synapse0x28e33e0();
   input += synapse0x28e2e70();
   input += synapse0x28e2eb0();
   input += synapse0x28e3530();
   input += synapse0x28e3570();
   input += synapse0x28e35b0();
   input += synapse0x28e35f0();
   input += synapse0x28e3630();
   input += synapse0x28e3670();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28e2ce0() {
   double input = input0x28e2ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28e36b0() {
   double input = -0.113496;
   input += synapse0x28e39f0();
   input += synapse0x28e3a30();
   input += synapse0x28e3a70();
   input += synapse0x28e3ab0();
   input += synapse0x28e3af0();
   input += synapse0x28e3b30();
   input += synapse0x28e3b70();
   input += synapse0x28e3bb0();
   input += synapse0x28e3bf0();
   input += synapse0x28e3c30();
   input += synapse0x28e3c70();
   input += synapse0x28e3cb0();
   input += synapse0x28e3cf0();
   input += synapse0x28e3d30();
   input += synapse0x28e3d70();
   input += synapse0x28e3db0();
   input += synapse0x28e3840();
   input += synapse0x28e3880();
   input += synapse0x28e3f00();
   input += synapse0x28e3f40();
   input += synapse0x28e3f80();
   input += synapse0x28e3fc0();
   input += synapse0x28e4000();
   input += synapse0x28e4040();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28e36b0() {
   double input = input0x28e36b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28e4080() {
   double input = 4.95714;
   input += synapse0x28e43c0();
   input += synapse0x28d8990();
   input += synapse0x28d89d0();
   input += synapse0x28d8a10();
   input += synapse0x28d8c60();
   input += synapse0x28d8ca0();
   input += synapse0x28d8ce0();
   input += synapse0x28d8f30();
   input += synapse0x28d8f70();
   input += synapse0x28d91c0();
   input += synapse0x28d9200();
   input += synapse0x28d9240();
   input += synapse0x28d9490();
   input += synapse0x28d94d0();
   input += synapse0x28d9720();
   input += synapse0x28d9760();
   input += synapse0x28e4210();
   input += synapse0x28e4250();
   input += synapse0x28d98b0();
   input += synapse0x28d9dc0();
   input += synapse0x28d9e00();
   input += synapse0x28d9e40();
   input += synapse0x28da090();
   input += synapse0x28da0d0();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28e4080() {
   double input = input0x28e4080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28da110() {
   double input = 0.435595;
   input += synapse0x28d9980();
   input += synapse0x28d99c0();
   input += synapse0x28d9a00();
   input += synapse0x28d9a40();
   input += synapse0x28da3c0();
   input += synapse0x28e6710();
   input += synapse0x28e6750();
   input += synapse0x28e6790();
   input += synapse0x28e67d0();
   input += synapse0x28e6810();
   input += synapse0x28e6850();
   input += synapse0x28e6890();
   input += synapse0x28e68d0();
   input += synapse0x28e6910();
   input += synapse0x28e6950();
   input += synapse0x28e6990();
   input += synapse0x28da2a0();
   input += synapse0x28da2e0();
   input += synapse0x28e6ae0();
   input += synapse0x28e6b20();
   input += synapse0x28e6b60();
   input += synapse0x28e6ba0();
   input += synapse0x28e6be0();
   input += synapse0x28e6c20();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28da110() {
   double input = input0x28da110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28e6c60() {
   double input = 9.09979;
   input += synapse0x28e6fa0();
   input += synapse0x28e6fe0();
   input += synapse0x28e7020();
   input += synapse0x28e7060();
   input += synapse0x28e70a0();
   input += synapse0x28e70e0();
   input += synapse0x28e7120();
   input += synapse0x28e7160();
   input += synapse0x28e71a0();
   input += synapse0x28e71e0();
   input += synapse0x28e7220();
   input += synapse0x28e7260();
   input += synapse0x28e72a0();
   input += synapse0x28e72e0();
   input += synapse0x28e7320();
   input += synapse0x28e7360();
   input += synapse0x28e6df0();
   input += synapse0x28e6e30();
   input += synapse0x28e74b0();
   input += synapse0x28e74f0();
   input += synapse0x28e7530();
   input += synapse0x28e7570();
   input += synapse0x28e75b0();
   input += synapse0x28e75f0();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28e6c60() {
   double input = input0x28e6c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28e7630() {
   double input = -1.50433;
   input += synapse0x28e7970();
   input += synapse0x28e79b0();
   input += synapse0x28e79f0();
   input += synapse0x28e7a30();
   input += synapse0x28e7a70();
   input += synapse0x28e7ab0();
   input += synapse0x28e7af0();
   input += synapse0x28e7b30();
   input += synapse0x28e7b70();
   input += synapse0x28e7bb0();
   input += synapse0x28e7bf0();
   input += synapse0x28e7c30();
   input += synapse0x28e7c70();
   input += synapse0x28e7cb0();
   input += synapse0x28e7cf0();
   input += synapse0x28e7d30();
   input += synapse0x28e77c0();
   input += synapse0x28e7800();
   input += synapse0x28e7e80();
   input += synapse0x28e7ec0();
   input += synapse0x28e7f00();
   input += synapse0x28e7f40();
   input += synapse0x28e7f80();
   input += synapse0x28e7fc0();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28e7630() {
   double input = input0x28e7630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28e8000() {
   double input = 1.20068;
   input += synapse0x28e8340();
   input += synapse0x28e8380();
   input += synapse0x28e83c0();
   input += synapse0x28e8400();
   input += synapse0x28e8440();
   input += synapse0x28e8480();
   input += synapse0x28e84c0();
   input += synapse0x28e8500();
   input += synapse0x28e8540();
   input += synapse0x28e8580();
   input += synapse0x28e85c0();
   input += synapse0x28e8600();
   input += synapse0x28e8640();
   input += synapse0x28e8680();
   input += synapse0x28e86c0();
   input += synapse0x28e8700();
   input += synapse0x28e8190();
   input += synapse0x28e81d0();
   input += synapse0x28e8850();
   input += synapse0x28e8890();
   input += synapse0x28e88d0();
   input += synapse0x28e8910();
   input += synapse0x28e8950();
   input += synapse0x28e8990();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28e8000() {
   double input = input0x28e8000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28e89d0() {
   double input = -0.150327;
   input += synapse0x28e8d10();
   input += synapse0x28e8d50();
   input += synapse0x28e8d90();
   input += synapse0x28e8dd0();
   input += synapse0x28e8e10();
   input += synapse0x28e8e50();
   input += synapse0x28e8e90();
   input += synapse0x28e8ed0();
   input += synapse0x28e8f10();
   input += synapse0x28e8f50();
   input += synapse0x28e8f90();
   input += synapse0x28e8fd0();
   input += synapse0x28e9010();
   input += synapse0x28e9050();
   input += synapse0x28e9090();
   input += synapse0x28e90d0();
   input += synapse0x28e8b60();
   input += synapse0x28e8ba0();
   input += synapse0x28e9220();
   input += synapse0x28e9260();
   input += synapse0x28e92a0();
   input += synapse0x28e92e0();
   input += synapse0x28e9320();
   input += synapse0x28e9360();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28e89d0() {
   double input = input0x28e89d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28e93a0() {
   double input = -2.92955;
   input += synapse0x28e96e0();
   input += synapse0x28e9720();
   input += synapse0x28e9760();
   input += synapse0x28e97a0();
   input += synapse0x28e97e0();
   input += synapse0x28e9820();
   input += synapse0x28e9860();
   input += synapse0x28e98a0();
   input += synapse0x28e98e0();
   input += synapse0x28e9920();
   input += synapse0x28e9960();
   input += synapse0x28e99a0();
   input += synapse0x28e99e0();
   input += synapse0x28e9a20();
   input += synapse0x28e9a60();
   input += synapse0x28e9aa0();
   input += synapse0x28e9530();
   input += synapse0x28e9570();
   input += synapse0x28e9bf0();
   input += synapse0x28e9c30();
   input += synapse0x28e9c70();
   input += synapse0x28e9cb0();
   input += synapse0x28e9cf0();
   input += synapse0x28e9d30();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28e93a0() {
   double input = input0x28e93a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28e9d70() {
   double input = -1.61615;
   input += synapse0x28ea0b0();
   input += synapse0x28ea0f0();
   input += synapse0x28ea130();
   input += synapse0x28ea170();
   input += synapse0x28ea1b0();
   input += synapse0x28ea1f0();
   input += synapse0x28ea230();
   input += synapse0x28ea270();
   input += synapse0x28ea2b0();
   input += synapse0x28ea2f0();
   input += synapse0x28ea330();
   input += synapse0x28ea370();
   input += synapse0x28ea3b0();
   input += synapse0x28ea3f0();
   input += synapse0x28ea430();
   input += synapse0x28ea470();
   input += synapse0x28e9f00();
   input += synapse0x28e9f40();
   input += synapse0x28ea5c0();
   input += synapse0x28ea600();
   input += synapse0x28ea640();
   input += synapse0x28ea680();
   input += synapse0x28ea6c0();
   input += synapse0x28ea700();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28e9d70() {
   double input = input0x28e9d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28ea740() {
   double input = 0.228814;
   input += synapse0x28eaa80();
   input += synapse0x28eaac0();
   input += synapse0x28eab00();
   input += synapse0x28eab40();
   input += synapse0x28eab80();
   input += synapse0x28eabc0();
   input += synapse0x28eac00();
   input += synapse0x28eac40();
   input += synapse0x28eac80();
   input += synapse0x28eacc0();
   input += synapse0x28ead00();
   input += synapse0x28ead40();
   input += synapse0x28ead80();
   input += synapse0x28eadc0();
   input += synapse0x28eae00();
   input += synapse0x28eae40();
   input += synapse0x28ea8d0();
   input += synapse0x28ea910();
   input += synapse0x28eaf90();
   input += synapse0x28eafd0();
   input += synapse0x28eb010();
   input += synapse0x28eb050();
   input += synapse0x28eb090();
   input += synapse0x28eb0d0();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28ea740() {
   double input = input0x28ea740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28eb110() {
   double input = -3.94614;
   input += synapse0x28d3b80();
   input += synapse0x28d3bc0();
   input += synapse0x28d3c00();
   input += synapse0x28d3c40();
   input += synapse0x28d3c80();
   input += synapse0x28d3cc0();
   input += synapse0x28d3d00();
   input += synapse0x28d3d40();
   input += synapse0x28eb860();
   input += synapse0x28eb8a0();
   input += synapse0x28eb8e0();
   input += synapse0x28eb920();
   input += synapse0x28eb960();
   input += synapse0x28eb9a0();
   input += synapse0x28eb9e0();
   input += synapse0x28eba20();
   input += synapse0x28eb2a0();
   input += synapse0x28eb2e0();
   input += synapse0x28ebb70();
   input += synapse0x28ebbb0();
   input += synapse0x28ebbf0();
   input += synapse0x28ebc30();
   input += synapse0x28ebc70();
   input += synapse0x28ebcb0();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28eb110() {
   double input = input0x28eb110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28ebcf0() {
   double input = -0.274329;
   input += synapse0x28ec030();
   input += synapse0x28ec070();
   input += synapse0x28ec0b0();
   input += synapse0x28ec0f0();
   input += synapse0x28ec130();
   input += synapse0x28ec170();
   input += synapse0x28ec1b0();
   input += synapse0x28ec1f0();
   input += synapse0x28ec230();
   input += synapse0x28ec270();
   input += synapse0x28ec2b0();
   input += synapse0x28ec2f0();
   input += synapse0x28ec330();
   input += synapse0x28ec370();
   input += synapse0x28ec3b0();
   input += synapse0x28ec3f0();
   input += synapse0x28ebe80();
   input += synapse0x28ebec0();
   input += synapse0x28ec540();
   input += synapse0x28ec580();
   input += synapse0x28ec5c0();
   input += synapse0x28ec600();
   input += synapse0x28ec640();
   input += synapse0x28ec680();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28ebcf0() {
   double input = input0x28ebcf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28ec6c0() {
   double input = -3.11271;
   input += synapse0x28eca00();
   input += synapse0x28eca40();
   input += synapse0x28eca80();
   input += synapse0x28ecac0();
   input += synapse0x28ecb00();
   input += synapse0x28ecb40();
   input += synapse0x28ecb80();
   input += synapse0x28ecbc0();
   input += synapse0x28ecc00();
   input += synapse0x28ecc40();
   input += synapse0x28ecc80();
   input += synapse0x28eccc0();
   input += synapse0x28ecd00();
   input += synapse0x28ecd40();
   input += synapse0x28ecd80();
   input += synapse0x28ecdc0();
   input += synapse0x28ec850();
   input += synapse0x28ec890();
   input += synapse0x28dd3c0();
   input += synapse0x28dd400();
   input += synapse0x28dd440();
   input += synapse0x28dd480();
   input += synapse0x28dd4c0();
   input += synapse0x28dd500();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28ec6c0() {
   double input = input0x28ec6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28dd540() {
   double input = -0.930003;
   input += synapse0x28dd880();
   input += synapse0x28dd8c0();
   input += synapse0x28dd900();
   input += synapse0x28dd940();
   input += synapse0x28dd980();
   input += synapse0x28dd9c0();
   input += synapse0x28dda00();
   input += synapse0x28dda40();
   input += synapse0x28dda80();
   input += synapse0x28ddac0();
   input += synapse0x28ddb00();
   input += synapse0x28ddb40();
   input += synapse0x28ddb80();
   input += synapse0x28ddbc0();
   input += synapse0x28ddc00();
   input += synapse0x28ddc40();
   input += synapse0x28dd6d0();
   input += synapse0x28dd710();
   input += synapse0x28ddd90();
   input += synapse0x28dddd0();
   input += synapse0x28dde10();
   input += synapse0x28dde50();
   input += synapse0x28dde90();
   input += synapse0x28dded0();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28dd540() {
   double input = input0x28dd540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28ddf10() {
   double input = 1.61098;
   input += synapse0x28de250();
   input += synapse0x28de290();
   input += synapse0x28de2d0();
   input += synapse0x28de310();
   input += synapse0x28de350();
   input += synapse0x28de390();
   input += synapse0x28de3d0();
   input += synapse0x28de410();
   input += synapse0x28de450();
   input += synapse0x28de490();
   input += synapse0x28de4d0();
   input += synapse0x28de510();
   input += synapse0x28de550();
   input += synapse0x28de590();
   input += synapse0x28de5d0();
   input += synapse0x28de610();
   input += synapse0x28de0a0();
   input += synapse0x28de0e0();
   input += synapse0x28de760();
   input += synapse0x28de7a0();
   input += synapse0x28de7e0();
   input += synapse0x28de820();
   input += synapse0x28de860();
   input += synapse0x28de8a0();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28ddf10() {
   double input = input0x28ddf10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28de8e0() {
   double input = 0.236769;
   input += synapse0x28dec20();
   input += synapse0x28dec60();
   input += synapse0x28deca0();
   input += synapse0x28dece0();
   input += synapse0x28ded20();
   input += synapse0x28ded60();
   input += synapse0x28deda0();
   input += synapse0x28dede0();
   input += synapse0x28dee20();
   input += synapse0x28dee60();
   input += synapse0x28deea0();
   input += synapse0x28deee0();
   input += synapse0x28def20();
   input += synapse0x28def60();
   input += synapse0x28defa0();
   input += synapse0x28defe0();
   input += synapse0x28dea70();
   input += synapse0x28deab0();
   input += synapse0x28df130();
   input += synapse0x28df170();
   input += synapse0x28df1b0();
   input += synapse0x28df1f0();
   input += synapse0x28df230();
   input += synapse0x28df270();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28de8e0() {
   double input = input0x28de8e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28f0f20() {
   double input = -1.79527;
   input += synapse0x28f1140();
   input += synapse0x28f1180();
   input += synapse0x28f11c0();
   input += synapse0x28f1200();
   input += synapse0x28f1240();
   input += synapse0x28f1280();
   input += synapse0x28f12c0();
   input += synapse0x28f1300();
   input += synapse0x28f1340();
   input += synapse0x28f1380();
   input += synapse0x28f13c0();
   input += synapse0x28f1400();
   input += synapse0x28f1440();
   input += synapse0x28f1480();
   input += synapse0x28f14c0();
   input += synapse0x28f1500();
   input += synapse0x28df2b0();
   input += synapse0x28df2f0();
   input += synapse0x28f1650();
   input += synapse0x28f1690();
   input += synapse0x28f16d0();
   input += synapse0x28f1710();
   input += synapse0x28f1750();
   input += synapse0x28f1790();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28f0f20() {
   double input = input0x28f0f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28f17d0() {
   double input = 0.0886892;
   input += synapse0x28f1b10();
   input += synapse0x28f1b50();
   input += synapse0x28f1b90();
   input += synapse0x28f1bd0();
   input += synapse0x28f1c10();
   input += synapse0x28f1c50();
   input += synapse0x28f1c90();
   input += synapse0x28f1cd0();
   input += synapse0x28f1d10();
   input += synapse0x28f1d50();
   input += synapse0x28f1d90();
   input += synapse0x28f1dd0();
   input += synapse0x28f1e10();
   input += synapse0x28f1e50();
   input += synapse0x28f1e90();
   input += synapse0x28f1ed0();
   input += synapse0x28f1960();
   input += synapse0x28f19a0();
   input += synapse0x28f2020();
   input += synapse0x28f2060();
   input += synapse0x28f20a0();
   input += synapse0x28f20e0();
   input += synapse0x28f2120();
   input += synapse0x28f2160();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28f17d0() {
   double input = input0x28f17d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28f21a0() {
   double input = 0.79445;
   input += synapse0x28f24e0();
   input += synapse0x28f2520();
   input += synapse0x28f2560();
   input += synapse0x28f25a0();
   input += synapse0x28f25e0();
   input += synapse0x28f2620();
   input += synapse0x28f2660();
   input += synapse0x28f26a0();
   input += synapse0x28f26e0();
   input += synapse0x28f2720();
   input += synapse0x28f2760();
   input += synapse0x28f27a0();
   input += synapse0x28f27e0();
   input += synapse0x28f2820();
   input += synapse0x28f2860();
   input += synapse0x28f28a0();
   input += synapse0x28f2330();
   input += synapse0x28f2370();
   input += synapse0x28f29f0();
   input += synapse0x28f2a30();
   input += synapse0x28f2a70();
   input += synapse0x28f2ab0();
   input += synapse0x28f2af0();
   input += synapse0x28f2b30();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28f21a0() {
   double input = input0x28f21a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28f2b70() {
   double input = -2.36765;
   input += synapse0x28f2eb0();
   input += synapse0x28f2ef0();
   input += synapse0x28f2f30();
   input += synapse0x28f2f70();
   input += synapse0x28f2fb0();
   input += synapse0x28f2ff0();
   input += synapse0x28f3030();
   input += synapse0x28f3070();
   input += synapse0x28f30b0();
   input += synapse0x28f30f0();
   input += synapse0x28f3130();
   input += synapse0x28f3170();
   input += synapse0x28f31b0();
   input += synapse0x28f31f0();
   input += synapse0x28f3230();
   input += synapse0x28f3270();
   input += synapse0x28f2d00();
   input += synapse0x28f2d40();
   input += synapse0x28f33c0();
   input += synapse0x28f3400();
   input += synapse0x28f3440();
   input += synapse0x28f3480();
   input += synapse0x28f34c0();
   input += synapse0x28f3500();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28f2b70() {
   double input = input0x28f2b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28f9d70() {
   double input = -0.839872;
   input += synapse0x2693370();
   input += synapse0x26933b0();
   input += synapse0x28cfeb0();
   input += synapse0x28cfef0();
   input += synapse0x28d1980();
   input += synapse0x28d19c0();
   input += synapse0x28d2750();
   input += synapse0x28d2790();
   input += synapse0x28d3120();
   input += synapse0x28d3160();
   input += synapse0x28d3af0();
   input += synapse0x28d3b30();
   input += synapse0x28d45d0();
   input += synapse0x28d4610();
   input += synapse0x28d4fa0();
   input += synapse0x28d4fe0();
   input += synapse0x28d2080();
   input += synapse0x28d20c0();
   input += synapse0x28d6b50();
   input += synapse0x28d6b90();
   input += synapse0x28d7520();
   input += synapse0x28d7560();
   input += synapse0x28d7ef0();
   input += synapse0x28d7f30();
   input += synapse0x28d88c0();
   input += synapse0x28d8900();
   input += synapse0x28cb950();
   input += synapse0x28cb990();
   input += synapse0x28da9b0();
   input += synapse0x28da9f0();
   input += synapse0x28db380();
   input += synapse0x28db3c0();
   input += synapse0x28dbd50();
   input += synapse0x28dbd90();
   input += synapse0x28dc720();
   input += synapse0x28dc760();
   input += synapse0x28dd0f0();
   input += synapse0x28dd130();
   input += synapse0x28d5c40();
   input += synapse0x28d5c80();
   input += synapse0x28df4f0();
   input += synapse0x28df530();
   input += synapse0x28dfe80();
   input += synapse0x28dfec0();
   input += synapse0x28e0850();
   input += synapse0x28e0890();
   input += synapse0x28e1220();
   input += synapse0x28e1260();
   input += synapse0x28e1bf0();
   input += synapse0x28e1c30();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28f9d70() {
   double input = input0x28f9d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28fa110() {
   double input = -0.704001;
   input += synapse0x28e4330();
   input += synapse0x28e4370();
   input += synapse0x28d98f0();
   input += synapse0x28d9930();
   input += synapse0x28e6f10();
   input += synapse0x28e6f50();
   input += synapse0x28e78e0();
   input += synapse0x28e7920();
   input += synapse0x28e82b0();
   input += synapse0x28e82f0();
   input += synapse0x28e8c80();
   input += synapse0x28e8cc0();
   input += synapse0x28e9650();
   input += synapse0x28e9690();
   input += synapse0x28ea020();
   input += synapse0x28ea060();
   input += synapse0x28ea9f0();
   input += synapse0x28eaa30();
   input += synapse0x28eb3c0();
   input += synapse0x28eb400();
   input += synapse0x28ebfa0();
   input += synapse0x28ebfe0();
   input += synapse0x28ec970();
   input += synapse0x28ec9b0();
   input += synapse0x28dd7f0();
   input += synapse0x28dd830();
   input += synapse0x28de1c0();
   input += synapse0x28de200();
   input += synapse0x28deb90();
   input += synapse0x28debd0();
   input += synapse0x28f10b0();
   input += synapse0x28f10f0();
   input += synapse0x28f1a80();
   input += synapse0x28f1ac0();
   input += synapse0x28f2450();
   input += synapse0x28f2490();
   input += synapse0x28f2e20();
   input += synapse0x28f2e60();
   input += synapse0x28cddb0();
   input += synapse0x28cddf0();
   input += synapse0x28e25c0();
   input += synapse0x28e2600();
   input += synapse0x28f3540();
   input += synapse0x28f3580();
   input += synapse0x28f35c0();
   input += synapse0x28f3600();
   input += synapse0x28fa4b0();
   input += synapse0x28fa4f0();
   input += synapse0x28fa530();
   input += synapse0x28fa570();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28fa110() {
   double input = input0x28fa110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28fa5b0() {
   double input = 0.723547;
   input += synapse0x28fa8f0();
   input += synapse0x28fa930();
   input += synapse0x28fa970();
   input += synapse0x28fa9b0();
   input += synapse0x28fa9f0();
   input += synapse0x28faa30();
   input += synapse0x28faa70();
   input += synapse0x28faab0();
   input += synapse0x28faaf0();
   input += synapse0x28fab30();
   input += synapse0x28fab70();
   input += synapse0x28fabb0();
   input += synapse0x28fabf0();
   input += synapse0x28fac30();
   input += synapse0x28fac70();
   input += synapse0x28facb0();
   input += synapse0x28fa740();
   input += synapse0x28fa780();
   input += synapse0x28fae00();
   input += synapse0x28fae40();
   input += synapse0x28fae80();
   input += synapse0x28faec0();
   input += synapse0x28faf00();
   input += synapse0x28faf40();
   input += synapse0x28faf80();
   input += synapse0x28fafc0();
   input += synapse0x28fb000();
   input += synapse0x28fb040();
   input += synapse0x28fb080();
   input += synapse0x28fb0c0();
   input += synapse0x28fb100();
   input += synapse0x28fb140();
   input += synapse0x28facf0();
   input += synapse0x28fad30();
   input += synapse0x28fad70();
   input += synapse0x28fadb0();
   input += synapse0x28fb390();
   input += synapse0x28fb3d0();
   input += synapse0x28fb410();
   input += synapse0x28fb450();
   input += synapse0x28fb490();
   input += synapse0x28fb4d0();
   input += synapse0x28fb510();
   input += synapse0x28fb550();
   input += synapse0x28fb590();
   input += synapse0x28fb5d0();
   input += synapse0x28fb610();
   input += synapse0x28fb650();
   input += synapse0x28fb690();
   input += synapse0x28fb6d0();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28fa5b0() {
   double input = input0x28fa5b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28fb710() {
   double input = 0.771415;
   input += synapse0x28fba50();
   input += synapse0x28fba90();
   input += synapse0x28fbad0();
   input += synapse0x28fbb10();
   input += synapse0x28fbb50();
   input += synapse0x28fbb90();
   input += synapse0x28fbbd0();
   input += synapse0x28fbc10();
   input += synapse0x28fbc50();
   input += synapse0x28fbc90();
   input += synapse0x28fbcd0();
   input += synapse0x28fbd10();
   input += synapse0x28fbd50();
   input += synapse0x28fbd90();
   input += synapse0x28fbdd0();
   input += synapse0x28fbe10();
   input += synapse0x28fb8a0();
   input += synapse0x28fb8e0();
   input += synapse0x28fbf60();
   input += synapse0x28fbfa0();
   input += synapse0x28fbfe0();
   input += synapse0x28fc020();
   input += synapse0x28fc060();
   input += synapse0x28fc0a0();
   input += synapse0x28fc0e0();
   input += synapse0x28fc120();
   input += synapse0x28fc160();
   input += synapse0x28fc1a0();
   input += synapse0x28fc1e0();
   input += synapse0x28fc220();
   input += synapse0x28fc260();
   input += synapse0x28fc2a0();
   input += synapse0x28fbe50();
   input += synapse0x28fbe90();
   input += synapse0x28fbed0();
   input += synapse0x28fbf10();
   input += synapse0x28fc4f0();
   input += synapse0x28fc530();
   input += synapse0x28fc570();
   input += synapse0x28fc5b0();
   input += synapse0x28fc5f0();
   input += synapse0x28fc630();
   input += synapse0x28fc670();
   input += synapse0x28fc6b0();
   input += synapse0x28fc6f0();
   input += synapse0x28fc730();
   input += synapse0x28fc770();
   input += synapse0x28fc7b0();
   input += synapse0x28fc7f0();
   input += synapse0x28fc830();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28fb710() {
   double input = input0x28fb710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28fc870() {
   double input = -0.50141;
   input += synapse0x28fcbb0();
   input += synapse0x28fcbf0();
   input += synapse0x28fcc30();
   input += synapse0x28fcc70();
   input += synapse0x28fccb0();
   input += synapse0x28fccf0();
   input += synapse0x28fcd30();
   input += synapse0x28fcd70();
   input += synapse0x28fcdb0();
   input += synapse0x28fcdf0();
   input += synapse0x28fce30();
   input += synapse0x28fce70();
   input += synapse0x28fceb0();
   input += synapse0x28fcef0();
   input += synapse0x28fcf30();
   input += synapse0x28fcf70();
   input += synapse0x28fca00();
   input += synapse0x28fca40();
   input += synapse0x28fd0c0();
   input += synapse0x28fd100();
   input += synapse0x28fd140();
   input += synapse0x28fd180();
   input += synapse0x28fd1c0();
   input += synapse0x28fd200();
   input += synapse0x28fd240();
   input += synapse0x28fd280();
   input += synapse0x28fd2c0();
   input += synapse0x28fd300();
   input += synapse0x28fd340();
   input += synapse0x28fd380();
   input += synapse0x28fd3c0();
   input += synapse0x28fd400();
   input += synapse0x28fcfb0();
   input += synapse0x28fcff0();
   input += synapse0x28fd030();
   input += synapse0x28fd070();
   input += synapse0x28fd650();
   input += synapse0x28fd690();
   input += synapse0x28fd6d0();
   input += synapse0x28fd710();
   input += synapse0x28fd750();
   input += synapse0x28fd790();
   input += synapse0x28fd7d0();
   input += synapse0x28fd810();
   input += synapse0x28fd850();
   input += synapse0x28fd890();
   input += synapse0x28fd8d0();
   input += synapse0x28fd910();
   input += synapse0x28fd950();
   input += synapse0x28fd990();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28fc870() {
   double input = input0x28fc870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cL::input0x28fd9d0() {
   double input = 9.66292;
   input += synapse0x28fdbf0();
   input += synapse0x28fdc30();
   input += synapse0x28fdc70();
   input += synapse0x28fdcb0();
   input += synapse0x28fdcf0();
   return input;
}

double NNfunction_ns_chi03_cL::neuron0x28fd9d0() {
   double input = input0x28fd9d0();
   return (input * 1)+0;
}

double NNfunction_ns_chi03_cL::synapse0x28cde40() {
   return (neuron0x28c8a40()*-0.026662);
}

double NNfunction_ns_chi03_cL::synapse0x28cde80() {
   return (neuron0x28c8cf0()*0.104067);
}

double NNfunction_ns_chi03_cL::synapse0x28cdec0() {
   return (neuron0x28c9030()*0.257533);
}

double NNfunction_ns_chi03_cL::synapse0x28cdf00() {
   return (neuron0x28c9370()*0.115007);
}

double NNfunction_ns_chi03_cL::synapse0x28cdf40() {
   return (neuron0x28c96b0()*0.840113);
}

double NNfunction_ns_chi03_cL::synapse0x28cdf80() {
   return (neuron0x28c99f0()*-0.589014);
}

double NNfunction_ns_chi03_cL::synapse0x28cdfc0() {
   return (neuron0x28c9d30()*-0.170637);
}

double NNfunction_ns_chi03_cL::synapse0x28ce000() {
   return (neuron0x28ca070()*-0.769154);
}

double NNfunction_ns_chi03_cL::synapse0x28ce040() {
   return (neuron0x28ca3b0()*0.336416);
}

double NNfunction_ns_chi03_cL::synapse0x28ce080() {
   return (neuron0x28ca6f0()*-0.92924);
}

double NNfunction_ns_chi03_cL::synapse0x28ce0c0() {
   return (neuron0x28caa30()*0.039844);
}

double NNfunction_ns_chi03_cL::synapse0x28ce100() {
   return (neuron0x28cad70()*-0.0254006);
}

double NNfunction_ns_chi03_cL::synapse0x28ce140() {
   return (neuron0x28cb0b0()*0.345496);
}

double NNfunction_ns_chi03_cL::synapse0x28ce180() {
   return (neuron0x28cb3f0()*0.407243);
}

double NNfunction_ns_chi03_cL::synapse0x28ce1c0() {
   return (neuron0x28cb730()*-0.176274);
}

double NNfunction_ns_chi03_cL::synapse0x28ce200() {
   return (neuron0x28cba70()*0.363878);
}

double NNfunction_ns_chi03_cL::synapse0x28cdc90() {
   return (neuron0x28cbdb0()*0.837577);
}

double NNfunction_ns_chi03_cL::synapse0x28cdcd0() {
   return (neuron0x28cc310()*-0.0114402);
}

double NNfunction_ns_chi03_cL::synapse0x2684bc0() {
   return (neuron0x28cc650()*-0.00952384);
}

double NNfunction_ns_chi03_cL::synapse0x2684c00() {
   return (neuron0x28cc990()*-0.623528);
}

double NNfunction_ns_chi03_cL::synapse0x28ce240() {
   return (neuron0x28cccd0()*-0.243265);
}

double NNfunction_ns_chi03_cL::synapse0x28ce280() {
   return (neuron0x28cd010()*-0.590822);
}

double NNfunction_ns_chi03_cL::synapse0x28ce2c0() {
   return (neuron0x28cd350()*0.679028);
}

double NNfunction_ns_chi03_cL::synapse0x28ce300() {
   return (neuron0x28cd690()*-0.956329);
}

double NNfunction_ns_chi03_cL::synapse0x28ce680() {
   return (neuron0x28c8a40()*0.043535);
}

double NNfunction_ns_chi03_cL::synapse0x28ce6c0() {
   return (neuron0x28c8cf0()*-0.00747609);
}

double NNfunction_ns_chi03_cL::synapse0x28ce700() {
   return (neuron0x28c9030()*4.20423);
}

double NNfunction_ns_chi03_cL::synapse0x28ce740() {
   return (neuron0x28c9370()*0.00610209);
}

double NNfunction_ns_chi03_cL::synapse0x28ce780() {
   return (neuron0x28c96b0()*0.0149249);
}

double NNfunction_ns_chi03_cL::synapse0x28ce7c0() {
   return (neuron0x28c99f0()*0.0130153);
}

double NNfunction_ns_chi03_cL::synapse0x28ce800() {
   return (neuron0x28c9d30()*-0.0227944);
}

double NNfunction_ns_chi03_cL::synapse0x28ce840() {
   return (neuron0x28ca070()*0.0315437);
}

double NNfunction_ns_chi03_cL::synapse0x28ce880() {
   return (neuron0x28ca3b0()*-0.000298633);
}

double NNfunction_ns_chi03_cL::synapse0x2684a10() {
   return (neuron0x28ca6f0()*0.00527048);
}

double NNfunction_ns_chi03_cL::synapse0x2684a50() {
   return (neuron0x28caa30()*0.0265558);
}

double NNfunction_ns_chi03_cL::synapse0x2684a90() {
   return (neuron0x28cad70()*0.0424548);
}

double NNfunction_ns_chi03_cL::synapse0x2684ad0() {
   return (neuron0x28cb0b0()*-0.102575);
}

double NNfunction_ns_chi03_cL::synapse0x28cead0() {
   return (neuron0x28cb3f0()*-0.023943);
}

double NNfunction_ns_chi03_cL::synapse0x28ceb10() {
   return (neuron0x28cb730()*-0.0201694);
}

double NNfunction_ns_chi03_cL::synapse0x28ceb50() {
   return (neuron0x28cba70()*-0.0127827);
}

double NNfunction_ns_chi03_cL::synapse0x28ce4d0() {
   return (neuron0x28cbdb0()*0.0285626);
}

double NNfunction_ns_chi03_cL::synapse0x28ce510() {
   return (neuron0x28cc310()*-0.00497649);
}

double NNfunction_ns_chi03_cL::synapse0x28ceca0() {
   return (neuron0x28cc650()*-0.00492757);
}

double NNfunction_ns_chi03_cL::synapse0x28cece0() {
   return (neuron0x28cc990()*0.00326539);
}

double NNfunction_ns_chi03_cL::synapse0x28ced20() {
   return (neuron0x28cccd0()*-0.0265447);
}

double NNfunction_ns_chi03_cL::synapse0x28ced60() {
   return (neuron0x28cd010()*0.00277543);
}

double NNfunction_ns_chi03_cL::synapse0x28ceda0() {
   return (neuron0x28cd350()*0.00773836);
}

double NNfunction_ns_chi03_cL::synapse0x28cede0() {
   return (neuron0x28cd690()*1.65753);
}

double NNfunction_ns_chi03_cL::synapse0x28cf160() {
   return (neuron0x28c8a40()*0.860642);
}

double NNfunction_ns_chi03_cL::synapse0x28cf1a0() {
   return (neuron0x28c8cf0()*0.00517071);
}

double NNfunction_ns_chi03_cL::synapse0x28cf1e0() {
   return (neuron0x28c9030()*0.137593);
}

double NNfunction_ns_chi03_cL::synapse0x28cf220() {
   return (neuron0x28c9370()*0.320446);
}

double NNfunction_ns_chi03_cL::synapse0x28cf260() {
   return (neuron0x28c96b0()*-1.25549);
}

double NNfunction_ns_chi03_cL::synapse0x28cf2a0() {
   return (neuron0x28c99f0()*-0.0511866);
}

double NNfunction_ns_chi03_cL::synapse0x28cf2e0() {
   return (neuron0x28c9d30()*1.04127);
}

double NNfunction_ns_chi03_cL::synapse0x28cf320() {
   return (neuron0x28ca070()*0.896893);
}

double NNfunction_ns_chi03_cL::synapse0x28cf360() {
   return (neuron0x28ca3b0()*-0.433358);
}

double NNfunction_ns_chi03_cL::synapse0x28cf3a0() {
   return (neuron0x28ca6f0()*0.880922);
}

double NNfunction_ns_chi03_cL::synapse0x28cf3e0() {
   return (neuron0x28caa30()*1.36089);
}

double NNfunction_ns_chi03_cL::synapse0x28cf420() {
   return (neuron0x28cad70()*0.871953);
}

double NNfunction_ns_chi03_cL::synapse0x28cf460() {
   return (neuron0x28cb0b0()*-2.10817);
}

double NNfunction_ns_chi03_cL::synapse0x28cf4a0() {
   return (neuron0x28cb3f0()*-0.0938786);
}

double NNfunction_ns_chi03_cL::synapse0x28cf4e0() {
   return (neuron0x28cb730()*0.418212);
}

double NNfunction_ns_chi03_cL::synapse0x28cf520() {
   return (neuron0x28cba70()*0.432947);
}

double NNfunction_ns_chi03_cL::synapse0x28cefb0() {
   return (neuron0x28cbdb0()*0.690142);
}

double NNfunction_ns_chi03_cL::synapse0x28ceff0() {
   return (neuron0x28cc310()*0.40501);
}

double NNfunction_ns_chi03_cL::synapse0x26852b0() {
   return (neuron0x28cc650()*0.682145);
}

double NNfunction_ns_chi03_cL::synapse0x2692b80() {
   return (neuron0x28cc990()*0.433124);
}

double NNfunction_ns_chi03_cL::synapse0x2692bc0() {
   return (neuron0x28cccd0()*0.30591);
}

double NNfunction_ns_chi03_cL::synapse0x28d1450() {
   return (neuron0x28cd010()*-0.00479536);
}

double NNfunction_ns_chi03_cL::synapse0x28d1490() {
   return (neuron0x28cd350()*-0.896109);
}

double NNfunction_ns_chi03_cL::synapse0x28c8780() {
   return (neuron0x28cd690()*-1.14809);
}

double NNfunction_ns_chi03_cL::synapse0x28c8850() {
   return (neuron0x28c8a40()*-0.915064);
}

double NNfunction_ns_chi03_cL::synapse0x2693400() {
   return (neuron0x28c8cf0()*0.239957);
}

double NNfunction_ns_chi03_cL::synapse0x28cea50() {
   return (neuron0x28c9030()*-0.0893988);
}

double NNfunction_ns_chi03_cL::synapse0x28cea90() {
   return (neuron0x28c9370()*0.159108);
}

double NNfunction_ns_chi03_cL::synapse0x28cf670() {
   return (neuron0x28c96b0()*-0.0649397);
}

double NNfunction_ns_chi03_cL::synapse0x28cf6b0() {
   return (neuron0x28c99f0()*-0.331342);
}

double NNfunction_ns_chi03_cL::synapse0x28cf6f0() {
   return (neuron0x28c9d30()*0.411061);
}

double NNfunction_ns_chi03_cL::synapse0x28cf730() {
   return (neuron0x28ca070()*0.054783);
}

double NNfunction_ns_chi03_cL::synapse0x28cf770() {
   return (neuron0x28ca3b0()*-0.200094);
}

double NNfunction_ns_chi03_cL::synapse0x28cf7b0() {
   return (neuron0x28ca6f0()*-1.11364);
}

double NNfunction_ns_chi03_cL::synapse0x28cf7f0() {
   return (neuron0x28caa30()*-0.425631);
}

double NNfunction_ns_chi03_cL::synapse0x28cf830() {
   return (neuron0x28cad70()*-0.145055);
}

double NNfunction_ns_chi03_cL::synapse0x28cf870() {
   return (neuron0x28cb0b0()*0.773226);
}

double NNfunction_ns_chi03_cL::synapse0x28cf8b0() {
   return (neuron0x28cb3f0()*0.0862136);
}

double NNfunction_ns_chi03_cL::synapse0x28cf8f0() {
   return (neuron0x28cb730()*-0.31624);
}

double NNfunction_ns_chi03_cL::synapse0x28cf930() {
   return (neuron0x28cba70()*-1.0584);
}

double NNfunction_ns_chi03_cL::synapse0x28c87c0() {
   return (neuron0x28cbdb0()*0.0412397);
}

double NNfunction_ns_chi03_cL::synapse0x28c8800() {
   return (neuron0x28cc310()*-0.00690202);
}

double NNfunction_ns_chi03_cL::synapse0x28cfa80() {
   return (neuron0x28cc650()*0.415989);
}

double NNfunction_ns_chi03_cL::synapse0x28cfac0() {
   return (neuron0x28cc990()*0.044124);
}

double NNfunction_ns_chi03_cL::synapse0x28cfb00() {
   return (neuron0x28cccd0()*0.260789);
}

double NNfunction_ns_chi03_cL::synapse0x28cfb40() {
   return (neuron0x28cd010()*0.155954);
}

double NNfunction_ns_chi03_cL::synapse0x28cfb80() {
   return (neuron0x28cd350()*0.304169);
}

double NNfunction_ns_chi03_cL::synapse0x28cfbc0() {
   return (neuron0x28cd690()*0.893351);
}

double NNfunction_ns_chi03_cL::synapse0x28cff40() {
   return (neuron0x28c8a40()*0.0797049);
}

double NNfunction_ns_chi03_cL::synapse0x28cff80() {
   return (neuron0x28c8cf0()*19.6512);
}

double NNfunction_ns_chi03_cL::synapse0x28cffc0() {
   return (neuron0x28c9030()*6.97933);
}

double NNfunction_ns_chi03_cL::synapse0x28d0000() {
   return (neuron0x28c9370()*0.0264286);
}

double NNfunction_ns_chi03_cL::synapse0x28d0040() {
   return (neuron0x28c96b0()*-0.0239545);
}

double NNfunction_ns_chi03_cL::synapse0x28d0080() {
   return (neuron0x28c99f0()*0.051327);
}

double NNfunction_ns_chi03_cL::synapse0x28d00c0() {
   return (neuron0x28c9d30()*-0.0159803);
}

double NNfunction_ns_chi03_cL::synapse0x28d0100() {
   return (neuron0x28ca070()*0.0499907);
}

double NNfunction_ns_chi03_cL::synapse0x28d0140() {
   return (neuron0x28ca3b0()*-0.0150267);
}

double NNfunction_ns_chi03_cL::synapse0x28d0180() {
   return (neuron0x28ca6f0()*-0.000415402);
}

double NNfunction_ns_chi03_cL::synapse0x28d01c0() {
   return (neuron0x28caa30()*0.0190412);
}

double NNfunction_ns_chi03_cL::synapse0x28d0200() {
   return (neuron0x28cad70()*0.00129101);
}

double NNfunction_ns_chi03_cL::synapse0x28d0240() {
   return (neuron0x28cb0b0()*-0.119577);
}

double NNfunction_ns_chi03_cL::synapse0x28d0280() {
   return (neuron0x28cb3f0()*0.00704805);
}

double NNfunction_ns_chi03_cL::synapse0x28d02c0() {
   return (neuron0x28cb730()*0.011773);
}

double NNfunction_ns_chi03_cL::synapse0x28d0300() {
   return (neuron0x28cba70()*-0.0212362);
}

double NNfunction_ns_chi03_cL::synapse0x28d0450() {
   return (neuron0x28cbdb0()*0.0542489);
}

double NNfunction_ns_chi03_cL::synapse0x28cfd90() {
   return (neuron0x28cc310()*-0.035274);
}

double NNfunction_ns_chi03_cL::synapse0x28cfdd0() {
   return (neuron0x28cc650()*-0.000791217);
}

double NNfunction_ns_chi03_cL::synapse0x28d1590() {
   return (neuron0x28cc990()*0.00290522);
}

double NNfunction_ns_chi03_cL::synapse0x28d15d0() {
   return (neuron0x28cccd0()*-0.0213901);
}

double NNfunction_ns_chi03_cL::synapse0x28d1610() {
   return (neuron0x28cd010()*-0.0082214);
}

double NNfunction_ns_chi03_cL::synapse0x28d1650() {
   return (neuron0x28cd350()*0.0152298);
}

double NNfunction_ns_chi03_cL::synapse0x28d1690() {
   return (neuron0x28cd690()*0.376391);
}

double NNfunction_ns_chi03_cL::synapse0x28d1a10() {
   return (neuron0x28c8a40()*1.04935);
}

double NNfunction_ns_chi03_cL::synapse0x28d1a50() {
   return (neuron0x28c8cf0()*-0.389882);
}

double NNfunction_ns_chi03_cL::synapse0x28d1a90() {
   return (neuron0x28c9030()*1.96683);
}

double NNfunction_ns_chi03_cL::synapse0x28d1ad0() {
   return (neuron0x28c9370()*-0.311366);
}

double NNfunction_ns_chi03_cL::synapse0x28d1b10() {
   return (neuron0x28c96b0()*1.03088);
}

double NNfunction_ns_chi03_cL::synapse0x28d1b50() {
   return (neuron0x28c99f0()*0.217327);
}

double NNfunction_ns_chi03_cL::synapse0x28d1b90() {
   return (neuron0x28c9d30()*0.391267);
}

double NNfunction_ns_chi03_cL::synapse0x28d1bd0() {
   return (neuron0x28ca070()*1.32897);
}

double NNfunction_ns_chi03_cL::synapse0x28d1c10() {
   return (neuron0x28ca3b0()*-0.612061);
}

double NNfunction_ns_chi03_cL::synapse0x2692ed0() {
   return (neuron0x28ca6f0()*0.603864);
}

double NNfunction_ns_chi03_cL::synapse0x2692f10() {
   return (neuron0x28caa30()*-0.274158);
}

double NNfunction_ns_chi03_cL::synapse0x2692f50() {
   return (neuron0x28cad70()*-0.567912);
}

double NNfunction_ns_chi03_cL::synapse0x2692f90() {
   return (neuron0x28cb0b0()*-0.542606);
}

double NNfunction_ns_chi03_cL::synapse0x2692fd0() {
   return (neuron0x28cb3f0()*-1.06928);
}

double NNfunction_ns_chi03_cL::synapse0x2693010() {
   return (neuron0x28cb730()*0.812031);
}

double NNfunction_ns_chi03_cL::synapse0x2693050() {
   return (neuron0x28cba70()*0.53403);
}

double NNfunction_ns_chi03_cL::synapse0x28d1860() {
   return (neuron0x28cbdb0()*0.431645);
}

double NNfunction_ns_chi03_cL::synapse0x28d18a0() {
   return (neuron0x28cc310()*-0.088787);
}

double NNfunction_ns_chi03_cL::synapse0x26931a0() {
   return (neuron0x28cc650()*0.668818);
}

double NNfunction_ns_chi03_cL::synapse0x26931e0() {
   return (neuron0x28cc990()*-1.84056);
}

double NNfunction_ns_chi03_cL::synapse0x2693220() {
   return (neuron0x28cccd0()*-0.28471);
}

double NNfunction_ns_chi03_cL::synapse0x2693260() {
   return (neuron0x28cd010()*0.532784);
}

double NNfunction_ns_chi03_cL::synapse0x26932a0() {
   return (neuron0x28cd350()*-0.0531162);
}

double NNfunction_ns_chi03_cL::synapse0x28d2460() {
   return (neuron0x28cd690()*0.25835);
}

double NNfunction_ns_chi03_cL::synapse0x28d27e0() {
   return (neuron0x28c8a40()*0.403036);
}

double NNfunction_ns_chi03_cL::synapse0x28d2820() {
   return (neuron0x28c8cf0()*-0.0335691);
}

double NNfunction_ns_chi03_cL::synapse0x28d2860() {
   return (neuron0x28c9030()*0.0137768);
}

double NNfunction_ns_chi03_cL::synapse0x28d28a0() {
   return (neuron0x28c9370()*0.14177);
}

double NNfunction_ns_chi03_cL::synapse0x28d28e0() {
   return (neuron0x28c96b0()*-0.728674);
}

double NNfunction_ns_chi03_cL::synapse0x28d2920() {
   return (neuron0x28c99f0()*0.0471221);
}

double NNfunction_ns_chi03_cL::synapse0x28d2960() {
   return (neuron0x28c9d30()*0.654673);
}

double NNfunction_ns_chi03_cL::synapse0x28d29a0() {
   return (neuron0x28ca070()*0.360531);
}

double NNfunction_ns_chi03_cL::synapse0x28d29e0() {
   return (neuron0x28ca3b0()*-0.370277);
}

double NNfunction_ns_chi03_cL::synapse0x28d2a20() {
   return (neuron0x28ca6f0()*0.370163);
}

double NNfunction_ns_chi03_cL::synapse0x28d2a60() {
   return (neuron0x28caa30()*0.456794);
}

double NNfunction_ns_chi03_cL::synapse0x28d2aa0() {
   return (neuron0x28cad70()*0.437708);
}

double NNfunction_ns_chi03_cL::synapse0x28d2ae0() {
   return (neuron0x28cb0b0()*-0.949534);
}

double NNfunction_ns_chi03_cL::synapse0x28d2b20() {
   return (neuron0x28cb3f0()*-0.0481055);
}

double NNfunction_ns_chi03_cL::synapse0x28d2b60() {
   return (neuron0x28cb730()*0.709904);
}

double NNfunction_ns_chi03_cL::synapse0x28d2ba0() {
   return (neuron0x28cba70()*0.168253);
}

double NNfunction_ns_chi03_cL::synapse0x28d2630() {
   return (neuron0x28cbdb0()*-0.0490878);
}

double NNfunction_ns_chi03_cL::synapse0x28d2670() {
   return (neuron0x28cc310()*0.379882);
}

double NNfunction_ns_chi03_cL::synapse0x28d2cf0() {
   return (neuron0x28cc650()*-0.0667032);
}

double NNfunction_ns_chi03_cL::synapse0x28d2d30() {
   return (neuron0x28cc990()*0.269257);
}

double NNfunction_ns_chi03_cL::synapse0x28d2d70() {
   return (neuron0x28cccd0()*0.492983);
}

double NNfunction_ns_chi03_cL::synapse0x28d2db0() {
   return (neuron0x28cd010()*-0.371071);
}

double NNfunction_ns_chi03_cL::synapse0x28d2df0() {
   return (neuron0x28cd350()*-0.575768);
}

double NNfunction_ns_chi03_cL::synapse0x28d2e30() {
   return (neuron0x28cd690()*-0.412778);
}

double NNfunction_ns_chi03_cL::synapse0x28d31b0() {
   return (neuron0x28c8a40()*0.0339016);
}

double NNfunction_ns_chi03_cL::synapse0x28d31f0() {
   return (neuron0x28c8cf0()*0.0818318);
}

double NNfunction_ns_chi03_cL::synapse0x28d3230() {
   return (neuron0x28c9030()*0.74995);
}

double NNfunction_ns_chi03_cL::synapse0x28d3270() {
   return (neuron0x28c9370()*-0.0647502);
}

double NNfunction_ns_chi03_cL::synapse0x28d32b0() {
   return (neuron0x28c96b0()*0.0311159);
}

double NNfunction_ns_chi03_cL::synapse0x28d32f0() {
   return (neuron0x28c99f0()*0.0840769);
}

double NNfunction_ns_chi03_cL::synapse0x28d3330() {
   return (neuron0x28c9d30()*0.00928306);
}

double NNfunction_ns_chi03_cL::synapse0x28d3370() {
   return (neuron0x28ca070()*0.0113975);
}

double NNfunction_ns_chi03_cL::synapse0x28d33b0() {
   return (neuron0x28ca3b0()*-0.00149916);
}

double NNfunction_ns_chi03_cL::synapse0x28d33f0() {
   return (neuron0x28ca6f0()*0.0642236);
}

double NNfunction_ns_chi03_cL::synapse0x28d3430() {
   return (neuron0x28caa30()*-0.03007);
}

double NNfunction_ns_chi03_cL::synapse0x28d3470() {
   return (neuron0x28cad70()*-0.0169826);
}

double NNfunction_ns_chi03_cL::synapse0x28d34b0() {
   return (neuron0x28cb0b0()*-0.0130049);
}

double NNfunction_ns_chi03_cL::synapse0x28d34f0() {
   return (neuron0x28cb3f0()*-0.0147772);
}

double NNfunction_ns_chi03_cL::synapse0x28d3530() {
   return (neuron0x28cb730()*0.0496435);
}

double NNfunction_ns_chi03_cL::synapse0x28d3570() {
   return (neuron0x28cba70()*0.0322485);
}

double NNfunction_ns_chi03_cL::synapse0x28d3000() {
   return (neuron0x28cbdb0()*0.0475436);
}

double NNfunction_ns_chi03_cL::synapse0x28d3040() {
   return (neuron0x28cc310()*-0.0400081);
}

double NNfunction_ns_chi03_cL::synapse0x28d36c0() {
   return (neuron0x28cc650()*-0.00443278);
}

double NNfunction_ns_chi03_cL::synapse0x28d3700() {
   return (neuron0x28cc990()*-0.0208963);
}

double NNfunction_ns_chi03_cL::synapse0x28d3740() {
   return (neuron0x28cccd0()*-0.0164212);
}

double NNfunction_ns_chi03_cL::synapse0x28d3780() {
   return (neuron0x28cd010()*0.0108099);
}

double NNfunction_ns_chi03_cL::synapse0x28d37c0() {
   return (neuron0x28cd350()*-0.0234915);
}

double NNfunction_ns_chi03_cL::synapse0x28d3800() {
   return (neuron0x28cd690()*-0.22294);
}

double NNfunction_ns_chi03_cL::synapse0x28cc200() {
   return (neuron0x28c8a40()*-1.10558);
}

double NNfunction_ns_chi03_cL::synapse0x28cc240() {
   return (neuron0x28c8cf0()*-0.166581);
}

double NNfunction_ns_chi03_cL::synapse0x28cc280() {
   return (neuron0x28c9030()*-0.116573);
}

double NNfunction_ns_chi03_cL::synapse0x28cc2c0() {
   return (neuron0x28c9370()*0.768291);
}

double NNfunction_ns_chi03_cL::synapse0x28d3d90() {
   return (neuron0x28c96b0()*0.372045);
}

double NNfunction_ns_chi03_cL::synapse0x28d3dd0() {
   return (neuron0x28c99f0()*-1.00123);
}

double NNfunction_ns_chi03_cL::synapse0x28d3e10() {
   return (neuron0x28c9d30()*-0.497163);
}

double NNfunction_ns_chi03_cL::synapse0x28d3e50() {
   return (neuron0x28ca070()*-1.1406);
}

double NNfunction_ns_chi03_cL::synapse0x28d3e90() {
   return (neuron0x28ca3b0()*-0.0251722);
}

double NNfunction_ns_chi03_cL::synapse0x28d3ed0() {
   return (neuron0x28ca6f0()*-0.285379);
}

double NNfunction_ns_chi03_cL::synapse0x28d3f10() {
   return (neuron0x28caa30()*-0.20309);
}

double NNfunction_ns_chi03_cL::synapse0x28d3f50() {
   return (neuron0x28cad70()*1.05799);
}

double NNfunction_ns_chi03_cL::synapse0x28d3f90() {
   return (neuron0x28cb0b0()*-0.281432);
}

double NNfunction_ns_chi03_cL::synapse0x28d3fd0() {
   return (neuron0x28cb3f0()*-0.374116);
}

double NNfunction_ns_chi03_cL::synapse0x28d4010() {
   return (neuron0x28cb730()*-0.230551);
}

double NNfunction_ns_chi03_cL::synapse0x28d4050() {
   return (neuron0x28cba70()*-0.772586);
}

double NNfunction_ns_chi03_cL::synapse0x28d39d0() {
   return (neuron0x28cbdb0()*-1.40063);
}

double NNfunction_ns_chi03_cL::synapse0x28d3a10() {
   return (neuron0x28cc310()*0.0456807);
}

double NNfunction_ns_chi03_cL::synapse0x28d41a0() {
   return (neuron0x28cc650()*-0.50305);
}

double NNfunction_ns_chi03_cL::synapse0x28d41e0() {
   return (neuron0x28cc990()*-0.821726);
}

double NNfunction_ns_chi03_cL::synapse0x28d4220() {
   return (neuron0x28cccd0()*1.04928);
}

double NNfunction_ns_chi03_cL::synapse0x28d4260() {
   return (neuron0x28cd010()*-0.0548949);
}

double NNfunction_ns_chi03_cL::synapse0x28d42a0() {
   return (neuron0x28cd350()*-0.665418);
}

double NNfunction_ns_chi03_cL::synapse0x28d42e0() {
   return (neuron0x28cd690()*0.312164);
}

double NNfunction_ns_chi03_cL::synapse0x28d4660() {
   return (neuron0x28c8a40()*0.294073);
}

double NNfunction_ns_chi03_cL::synapse0x28d46a0() {
   return (neuron0x28c8cf0()*-0.217819);
}

double NNfunction_ns_chi03_cL::synapse0x28d46e0() {
   return (neuron0x28c9030()*-0.568138);
}

double NNfunction_ns_chi03_cL::synapse0x28d4720() {
   return (neuron0x28c9370()*-0.363576);
}

double NNfunction_ns_chi03_cL::synapse0x28d4760() {
   return (neuron0x28c96b0()*1.02771);
}

double NNfunction_ns_chi03_cL::synapse0x28d47a0() {
   return (neuron0x28c99f0()*0.0335815);
}

double NNfunction_ns_chi03_cL::synapse0x28d47e0() {
   return (neuron0x28c9d30()*0.0925198);
}

double NNfunction_ns_chi03_cL::synapse0x28d4820() {
   return (neuron0x28ca070()*-0.483009);
}

double NNfunction_ns_chi03_cL::synapse0x28d4860() {
   return (neuron0x28ca3b0()*-0.0212757);
}

double NNfunction_ns_chi03_cL::synapse0x28d48a0() {
   return (neuron0x28ca6f0()*0.152581);
}

double NNfunction_ns_chi03_cL::synapse0x28d48e0() {
   return (neuron0x28caa30()*-0.209785);
}

double NNfunction_ns_chi03_cL::synapse0x28d4920() {
   return (neuron0x28cad70()*0.114077);
}

double NNfunction_ns_chi03_cL::synapse0x28d4960() {
   return (neuron0x28cb0b0()*-1.04159);
}

double NNfunction_ns_chi03_cL::synapse0x28d49a0() {
   return (neuron0x28cb3f0()*0.123406);
}

double NNfunction_ns_chi03_cL::synapse0x28d49e0() {
   return (neuron0x28cb730()*0.355113);
}

double NNfunction_ns_chi03_cL::synapse0x28d4a20() {
   return (neuron0x28cba70()*0.165351);
}

double NNfunction_ns_chi03_cL::synapse0x28d44b0() {
   return (neuron0x28cbdb0()*-0.0782425);
}

double NNfunction_ns_chi03_cL::synapse0x28d44f0() {
   return (neuron0x28cc310()*0.390703);
}

double NNfunction_ns_chi03_cL::synapse0x28d4b70() {
   return (neuron0x28cc650()*0.10951);
}

double NNfunction_ns_chi03_cL::synapse0x28d4bb0() {
   return (neuron0x28cc990()*0.109995);
}

double NNfunction_ns_chi03_cL::synapse0x28d4bf0() {
   return (neuron0x28cccd0()*0.181694);
}

double NNfunction_ns_chi03_cL::synapse0x28d4c30() {
   return (neuron0x28cd010()*-0.225225);
}

double NNfunction_ns_chi03_cL::synapse0x28d4c70() {
   return (neuron0x28cd350()*-0.582464);
}

double NNfunction_ns_chi03_cL::synapse0x28d4cb0() {
   return (neuron0x28cd690()*0.305879);
}

double NNfunction_ns_chi03_cL::synapse0x28d5030() {
   return (neuron0x28c8a40()*-0.15193);
}

double NNfunction_ns_chi03_cL::synapse0x28d5070() {
   return (neuron0x28c8cf0()*0.14388);
}

double NNfunction_ns_chi03_cL::synapse0x28d50b0() {
   return (neuron0x28c9030()*0.147222);
}

double NNfunction_ns_chi03_cL::synapse0x28d50f0() {
   return (neuron0x28c9370()*-0.0756422);
}

double NNfunction_ns_chi03_cL::synapse0x28d5130() {
   return (neuron0x28c96b0()*0.13111);
}

double NNfunction_ns_chi03_cL::synapse0x28d5170() {
   return (neuron0x28c99f0()*0.123832);
}

double NNfunction_ns_chi03_cL::synapse0x28d51b0() {
   return (neuron0x28c9d30()*0.012312);
}

double NNfunction_ns_chi03_cL::synapse0x28d51f0() {
   return (neuron0x28ca070()*-0.946696);
}

double NNfunction_ns_chi03_cL::synapse0x28d5230() {
   return (neuron0x28ca3b0()*0.0455445);
}

double NNfunction_ns_chi03_cL::synapse0x28d5270() {
   return (neuron0x28ca6f0()*0.188939);
}

double NNfunction_ns_chi03_cL::synapse0x28d52b0() {
   return (neuron0x28caa30()*-0.380566);
}

double NNfunction_ns_chi03_cL::synapse0x28d52f0() {
   return (neuron0x28cad70()*0.401091);
}

double NNfunction_ns_chi03_cL::synapse0x28d5330() {
   return (neuron0x28cb0b0()*-0.383344);
}

double NNfunction_ns_chi03_cL::synapse0x28d5370() {
   return (neuron0x28cb3f0()*0.323916);
}

double NNfunction_ns_chi03_cL::synapse0x28d53b0() {
   return (neuron0x28cb730()*0.176142);
}

double NNfunction_ns_chi03_cL::synapse0x28d53f0() {
   return (neuron0x28cba70()*-0.139584);
}

double NNfunction_ns_chi03_cL::synapse0x28d4e80() {
   return (neuron0x28cbdb0()*-0.601871);
}

double NNfunction_ns_chi03_cL::synapse0x28d4ec0() {
   return (neuron0x28cc310()*0.0640922);
}

double NNfunction_ns_chi03_cL::synapse0x28d1c50() {
   return (neuron0x28cc650()*-0.384537);
}

double NNfunction_ns_chi03_cL::synapse0x28d1c90() {
   return (neuron0x28cc990()*-0.16999);
}

double NNfunction_ns_chi03_cL::synapse0x28d1cd0() {
   return (neuron0x28cccd0()*-0.119424);
}

double NNfunction_ns_chi03_cL::synapse0x28d1d10() {
   return (neuron0x28cd010()*-0.166108);
}

double NNfunction_ns_chi03_cL::synapse0x28d1d50() {
   return (neuron0x28cd350()*-0.259919);
}

double NNfunction_ns_chi03_cL::synapse0x28d1d90() {
   return (neuron0x28cd690()*1.08942);
}

double NNfunction_ns_chi03_cL::synapse0x28d2110() {
   return (neuron0x28c8a40()*0.00956612);
}

double NNfunction_ns_chi03_cL::synapse0x28d2150() {
   return (neuron0x28c8cf0()*0.220199);
}

double NNfunction_ns_chi03_cL::synapse0x28d2190() {
   return (neuron0x28c9030()*0.239743);
}

double NNfunction_ns_chi03_cL::synapse0x28d21d0() {
   return (neuron0x28c9370()*-0.0187766);
}

double NNfunction_ns_chi03_cL::synapse0x28d2210() {
   return (neuron0x28c96b0()*0.0194119);
}

double NNfunction_ns_chi03_cL::synapse0x28d2250() {
   return (neuron0x28c99f0()*-0.0165247);
}

double NNfunction_ns_chi03_cL::synapse0x28d2290() {
   return (neuron0x28c9d30()*-0.00146847);
}

double NNfunction_ns_chi03_cL::synapse0x28d22d0() {
   return (neuron0x28ca070()*-0.181249);
}

double NNfunction_ns_chi03_cL::synapse0x28d2310() {
   return (neuron0x28ca3b0()*0.0675032);
}

double NNfunction_ns_chi03_cL::synapse0x28d2350() {
   return (neuron0x28ca6f0()*0.0448713);
}

double NNfunction_ns_chi03_cL::synapse0x28d2390() {
   return (neuron0x28caa30()*-0.00819378);
}

double NNfunction_ns_chi03_cL::synapse0x28d23d0() {
   return (neuron0x28cad70()*0.00833315);
}

double NNfunction_ns_chi03_cL::synapse0x28d2410() {
   return (neuron0x28cb0b0()*-0.092808);
}

double NNfunction_ns_chi03_cL::synapse0x28d6550() {
   return (neuron0x28cb3f0()*-0.0284021);
}

double NNfunction_ns_chi03_cL::synapse0x28d6590() {
   return (neuron0x28cb730()*-0.0687898);
}

double NNfunction_ns_chi03_cL::synapse0x28d65d0() {
   return (neuron0x28cba70()*0.0935745);
}

double NNfunction_ns_chi03_cL::synapse0x28d1f60() {
   return (neuron0x28cbdb0()*-0.115331);
}

double NNfunction_ns_chi03_cL::synapse0x28d1fa0() {
   return (neuron0x28cc310()*-0.0440314);
}

double NNfunction_ns_chi03_cL::synapse0x28d6720() {
   return (neuron0x28cc650()*-0.0913374);
}

double NNfunction_ns_chi03_cL::synapse0x28d6760() {
   return (neuron0x28cc990()*-0.135255);
}

double NNfunction_ns_chi03_cL::synapse0x28d67a0() {
   return (neuron0x28cccd0()*-0.0769873);
}

double NNfunction_ns_chi03_cL::synapse0x28d67e0() {
   return (neuron0x28cd010()*-0.00291654);
}

double NNfunction_ns_chi03_cL::synapse0x28d6820() {
   return (neuron0x28cd350()*-0.0648031);
}

double NNfunction_ns_chi03_cL::synapse0x28d6860() {
   return (neuron0x28cd690()*1.73871);
}

double NNfunction_ns_chi03_cL::synapse0x28d6be0() {
   return (neuron0x28c8a40()*0.00517344);
}

double NNfunction_ns_chi03_cL::synapse0x28d6c20() {
   return (neuron0x28c8cf0()*0.0100662);
}

double NNfunction_ns_chi03_cL::synapse0x28d6c60() {
   return (neuron0x28c9030()*0.00830513);
}

double NNfunction_ns_chi03_cL::synapse0x28d6ca0() {
   return (neuron0x28c9370()*-2.09757);
}

double NNfunction_ns_chi03_cL::synapse0x28d6ce0() {
   return (neuron0x28c96b0()*-0.00105133);
}

double NNfunction_ns_chi03_cL::synapse0x28d6d20() {
   return (neuron0x28c99f0()*0.00129243);
}

double NNfunction_ns_chi03_cL::synapse0x28d6d60() {
   return (neuron0x28c9d30()*-0.00341495);
}

double NNfunction_ns_chi03_cL::synapse0x28d6da0() {
   return (neuron0x28ca070()*-0.0285137);
}

double NNfunction_ns_chi03_cL::synapse0x28d6de0() {
   return (neuron0x28ca3b0()*-0.000248656);
}

double NNfunction_ns_chi03_cL::synapse0x28d6e20() {
   return (neuron0x28ca6f0()*0.0042001);
}

double NNfunction_ns_chi03_cL::synapse0x28d6e60() {
   return (neuron0x28caa30()*0.0120353);
}

double NNfunction_ns_chi03_cL::synapse0x28d6ea0() {
   return (neuron0x28cad70()*0.0190856);
}

double NNfunction_ns_chi03_cL::synapse0x28d6ee0() {
   return (neuron0x28cb0b0()*0.0945966);
}

double NNfunction_ns_chi03_cL::synapse0x28d6f20() {
   return (neuron0x28cb3f0()*-0.0012265);
}

double NNfunction_ns_chi03_cL::synapse0x28d6f60() {
   return (neuron0x28cb730()*-0.0136619);
}

double NNfunction_ns_chi03_cL::synapse0x28d6fa0() {
   return (neuron0x28cba70()*-0.000348307);
}

double NNfunction_ns_chi03_cL::synapse0x28d6a30() {
   return (neuron0x28cbdb0()*0.000674034);
}

double NNfunction_ns_chi03_cL::synapse0x28d6a70() {
   return (neuron0x28cc310()*0.0225667);
}

double NNfunction_ns_chi03_cL::synapse0x28d70f0() {
   return (neuron0x28cc650()*-0.0179337);
}

double NNfunction_ns_chi03_cL::synapse0x28d7130() {
   return (neuron0x28cc990()*-0.00917097);
}

double NNfunction_ns_chi03_cL::synapse0x28d7170() {
   return (neuron0x28cccd0()*0.0124111);
}

double NNfunction_ns_chi03_cL::synapse0x28d71b0() {
   return (neuron0x28cd010()*0.000786686);
}

double NNfunction_ns_chi03_cL::synapse0x28d71f0() {
   return (neuron0x28cd350()*0.017721);
}

double NNfunction_ns_chi03_cL::synapse0x28d7230() {
   return (neuron0x28cd690()*0.00480008);
}

double NNfunction_ns_chi03_cL::synapse0x28d75b0() {
   return (neuron0x28c8a40()*-0.116746);
}

double NNfunction_ns_chi03_cL::synapse0x28d75f0() {
   return (neuron0x28c8cf0()*-9.46736);
}

double NNfunction_ns_chi03_cL::synapse0x28d7630() {
   return (neuron0x28c9030()*2.42695);
}

double NNfunction_ns_chi03_cL::synapse0x28d7670() {
   return (neuron0x28c9370()*-0.0681797);
}

double NNfunction_ns_chi03_cL::synapse0x28d76b0() {
   return (neuron0x28c96b0()*0.026653);
}

double NNfunction_ns_chi03_cL::synapse0x28d76f0() {
   return (neuron0x28c99f0()*0.0503666);
}

double NNfunction_ns_chi03_cL::synapse0x28d7730() {
   return (neuron0x28c9d30()*0.0529881);
}

double NNfunction_ns_chi03_cL::synapse0x28d7770() {
   return (neuron0x28ca070()*-0.0107708);
}

double NNfunction_ns_chi03_cL::synapse0x28d77b0() {
   return (neuron0x28ca3b0()*-0.00819059);
}

double NNfunction_ns_chi03_cL::synapse0x28d77f0() {
   return (neuron0x28ca6f0()*-0.0264725);
}

double NNfunction_ns_chi03_cL::synapse0x28d7830() {
   return (neuron0x28caa30()*0.00684012);
}

double NNfunction_ns_chi03_cL::synapse0x28d7870() {
   return (neuron0x28cad70()*0.035168);
}

double NNfunction_ns_chi03_cL::synapse0x28d78b0() {
   return (neuron0x28cb0b0()*0.0337737);
}

double NNfunction_ns_chi03_cL::synapse0x28d78f0() {
   return (neuron0x28cb3f0()*0.0144237);
}

double NNfunction_ns_chi03_cL::synapse0x28d7930() {
   return (neuron0x28cb730()*0.0365337);
}

double NNfunction_ns_chi03_cL::synapse0x28d7970() {
   return (neuron0x28cba70()*0.0213821);
}

double NNfunction_ns_chi03_cL::synapse0x28d7400() {
   return (neuron0x28cbdb0()*-0.0186285);
}

double NNfunction_ns_chi03_cL::synapse0x28d7440() {
   return (neuron0x28cc310()*-0.0043717);
}

double NNfunction_ns_chi03_cL::synapse0x28d7ac0() {
   return (neuron0x28cc650()*-0.0195016);
}

double NNfunction_ns_chi03_cL::synapse0x28d7b00() {
   return (neuron0x28cc990()*-0.0176832);
}

double NNfunction_ns_chi03_cL::synapse0x28d7b40() {
   return (neuron0x28cccd0()*-0.00196587);
}

double NNfunction_ns_chi03_cL::synapse0x28d7b80() {
   return (neuron0x28cd010()*-0.0198539);
}

double NNfunction_ns_chi03_cL::synapse0x28d7bc0() {
   return (neuron0x28cd350()*0.00432541);
}

double NNfunction_ns_chi03_cL::synapse0x28d7c00() {
   return (neuron0x28cd690()*-0.500123);
}

double NNfunction_ns_chi03_cL::synapse0x28d7f80() {
   return (neuron0x28c8a40()*-0.716802);
}

double NNfunction_ns_chi03_cL::synapse0x28d7fc0() {
   return (neuron0x28c8cf0()*-0.573932);
}

double NNfunction_ns_chi03_cL::synapse0x28d8000() {
   return (neuron0x28c9030()*1.24139);
}

double NNfunction_ns_chi03_cL::synapse0x28d8040() {
   return (neuron0x28c9370()*-0.371985);
}

double NNfunction_ns_chi03_cL::synapse0x28d8080() {
   return (neuron0x28c96b0()*-0.304713);
}

double NNfunction_ns_chi03_cL::synapse0x28d80c0() {
   return (neuron0x28c99f0()*-0.567692);
}

double NNfunction_ns_chi03_cL::synapse0x28d8100() {
   return (neuron0x28c9d30()*-0.851652);
}

double NNfunction_ns_chi03_cL::synapse0x28d8140() {
   return (neuron0x28ca070()*0.522938);
}

double NNfunction_ns_chi03_cL::synapse0x28d8180() {
   return (neuron0x28ca3b0()*-1.77863);
}

double NNfunction_ns_chi03_cL::synapse0x28d81c0() {
   return (neuron0x28ca6f0()*-0.788856);
}

double NNfunction_ns_chi03_cL::synapse0x28d8200() {
   return (neuron0x28caa30()*-0.50814);
}

double NNfunction_ns_chi03_cL::synapse0x28d8240() {
   return (neuron0x28cad70()*0.0151357);
}

double NNfunction_ns_chi03_cL::synapse0x28d8280() {
   return (neuron0x28cb0b0()*0.180733);
}

double NNfunction_ns_chi03_cL::synapse0x28d82c0() {
   return (neuron0x28cb3f0()*-0.377204);
}

double NNfunction_ns_chi03_cL::synapse0x28d8300() {
   return (neuron0x28cb730()*-1.22275);
}

double NNfunction_ns_chi03_cL::synapse0x28d8340() {
   return (neuron0x28cba70()*0.0160461);
}

double NNfunction_ns_chi03_cL::synapse0x28d7dd0() {
   return (neuron0x28cbdb0()*0.94747);
}

double NNfunction_ns_chi03_cL::synapse0x28d7e10() {
   return (neuron0x28cc310()*-0.180789);
}

double NNfunction_ns_chi03_cL::synapse0x28d8490() {
   return (neuron0x28cc650()*-0.019646);
}

double NNfunction_ns_chi03_cL::synapse0x28d84d0() {
   return (neuron0x28cc990()*-0.282687);
}

double NNfunction_ns_chi03_cL::synapse0x28d8510() {
   return (neuron0x28cccd0()*-0.440123);
}

double NNfunction_ns_chi03_cL::synapse0x28d8550() {
   return (neuron0x28cd010()*-0.627741);
}

double NNfunction_ns_chi03_cL::synapse0x28d8590() {
   return (neuron0x28cd350()*1.22906);
}

double NNfunction_ns_chi03_cL::synapse0x28d85d0() {
   return (neuron0x28cd690()*-0.532244);
}

double NNfunction_ns_chi03_cL::synapse0x28d8950() {
   return (neuron0x28c8a40()*-0.0532307);
}

double NNfunction_ns_chi03_cL::synapse0x28c8bd0() {
   return (neuron0x28c8cf0()*-20.6742);
}

double NNfunction_ns_chi03_cL::synapse0x28c8c10() {
   return (neuron0x28c9030()*0.543298);
}

double NNfunction_ns_chi03_cL::synapse0x28c8f10() {
   return (neuron0x28c9370()*-0.0646083);
}

double NNfunction_ns_chi03_cL::synapse0x28c8f50() {
   return (neuron0x28c96b0()*0.0249082);
}

double NNfunction_ns_chi03_cL::synapse0x28c9250() {
   return (neuron0x28c99f0()*-0.0142615);
}

double NNfunction_ns_chi03_cL::synapse0x28c9290() {
   return (neuron0x28c9d30()*-0.00382449);
}

double NNfunction_ns_chi03_cL::synapse0x28c9590() {
   return (neuron0x28ca070()*-0.0295362);
}

double NNfunction_ns_chi03_cL::synapse0x28c95d0() {
   return (neuron0x28ca3b0()*-0.00862002);
}

double NNfunction_ns_chi03_cL::synapse0x28c98d0() {
   return (neuron0x28ca6f0()*-0.00441324);
}

double NNfunction_ns_chi03_cL::synapse0x28c9910() {
   return (neuron0x28caa30()*0.00489148);
}

double NNfunction_ns_chi03_cL::synapse0x28c9c10() {
   return (neuron0x28cad70()*0.00263151);
}

double NNfunction_ns_chi03_cL::synapse0x28c9c50() {
   return (neuron0x28cb0b0()*0.126488);
}

double NNfunction_ns_chi03_cL::synapse0x28c9f50() {
   return (neuron0x28cb3f0()*-0.00037089);
}

double NNfunction_ns_chi03_cL::synapse0x28c9f90() {
   return (neuron0x28cb730()*-0.008878);
}

double NNfunction_ns_chi03_cL::synapse0x28ca290() {
   return (neuron0x28cba70()*0.0216765);
}

double NNfunction_ns_chi03_cL::synapse0x28ca2d0() {
   return (neuron0x28cbdb0()*-0.0245419);
}

double NNfunction_ns_chi03_cL::synapse0x28ca5d0() {
   return (neuron0x28cc310()*0.00118655);
}

double NNfunction_ns_chi03_cL::synapse0x28ca610() {
   return (neuron0x28cc650()*0.0300882);
}

double NNfunction_ns_chi03_cL::synapse0x28ca910() {
   return (neuron0x28cc990()*-0.00769022);
}

double NNfunction_ns_chi03_cL::synapse0x28ca950() {
   return (neuron0x28cccd0()*0.00572649);
}

double NNfunction_ns_chi03_cL::synapse0x28cac50() {
   return (neuron0x28cd010()*0.00640695);
}

double NNfunction_ns_chi03_cL::synapse0x28cac90() {
   return (neuron0x28cd350()*-0.000370252);
}

double NNfunction_ns_chi03_cL::synapse0x28caf90() {
   return (neuron0x28cd690()*-0.244719);
}

double NNfunction_ns_chi03_cL::synapse0x28cafd0() {
   return (neuron0x28c8a40()*0.562277);
}

double NNfunction_ns_chi03_cL::synapse0x28cbc90() {
   return (neuron0x28c8cf0()*-0.00420839);
}

double NNfunction_ns_chi03_cL::synapse0x28cbcd0() {
   return (neuron0x28c9030()*-0.0387092);
}

double NNfunction_ns_chi03_cL::synapse0x28d87a0() {
   return (neuron0x28c9370()*-0.22059);
}

double NNfunction_ns_chi03_cL::synapse0x28d87e0() {
   return (neuron0x28c96b0()*-0.0748378);
}

double NNfunction_ns_chi03_cL::synapse0x28cbfd0() {
   return (neuron0x28c99f0()*1.1377);
}

double NNfunction_ns_chi03_cL::synapse0x28cc010() {
   return (neuron0x28c9d30()*-0.434084);
}

double NNfunction_ns_chi03_cL::synapse0x28cc530() {
   return (neuron0x28ca070()*0.60905);
}

double NNfunction_ns_chi03_cL::synapse0x28cc570() {
   return (neuron0x28ca3b0()*-0.464514);
}

double NNfunction_ns_chi03_cL::synapse0x28cc870() {
   return (neuron0x28ca6f0()*-0.163045);
}

double NNfunction_ns_chi03_cL::synapse0x28cc8b0() {
   return (neuron0x28caa30()*-0.0484972);
}

double NNfunction_ns_chi03_cL::synapse0x28ccbb0() {
   return (neuron0x28cad70()*-0.0251387);
}

double NNfunction_ns_chi03_cL::synapse0x28ccbf0() {
   return (neuron0x28cb0b0()*-0.207843);
}

double NNfunction_ns_chi03_cL::synapse0x28ccef0() {
   return (neuron0x28cb3f0()*0.0229547);
}

double NNfunction_ns_chi03_cL::synapse0x28ccf30() {
   return (neuron0x28cb730()*-0.386684);
}

double NNfunction_ns_chi03_cL::synapse0x28cd230() {
   return (neuron0x28cba70()*0.774304);
}

double NNfunction_ns_chi03_cL::synapse0x28cd270() {
   return (neuron0x28cbdb0()*0.403211);
}

double NNfunction_ns_chi03_cL::synapse0x28cd570() {
   return (neuron0x28cc310()*0.0726963);
}

double NNfunction_ns_chi03_cL::synapse0x28cd5b0() {
   return (neuron0x28cc650()*0.0232783);
}

double NNfunction_ns_chi03_cL::synapse0x28cd8b0() {
   return (neuron0x28cc990()*-0.168963);
}

double NNfunction_ns_chi03_cL::synapse0x28cd8f0() {
   return (neuron0x28cccd0()*-0.4209);
}

double NNfunction_ns_chi03_cL::synapse0x28cb2d0() {
   return (neuron0x28cd010()*-0.626926);
}

double NNfunction_ns_chi03_cL::synapse0x28cb310() {
   return (neuron0x28cd350()*0.384035);
}

double NNfunction_ns_chi03_cL::synapse0x28da6c0() {
   return (neuron0x28cd690()*-0.0651634);
}

double NNfunction_ns_chi03_cL::synapse0x28daa40() {
   return (neuron0x28c8a40()*-0.571843);
}

double NNfunction_ns_chi03_cL::synapse0x28daa80() {
   return (neuron0x28c8cf0()*0.133495);
}

double NNfunction_ns_chi03_cL::synapse0x28daac0() {
   return (neuron0x28c9030()*-0.152582);
}

double NNfunction_ns_chi03_cL::synapse0x28dab00() {
   return (neuron0x28c9370()*0.200425);
}

double NNfunction_ns_chi03_cL::synapse0x28dab40() {
   return (neuron0x28c96b0()*-0.112624);
}

double NNfunction_ns_chi03_cL::synapse0x28dab80() {
   return (neuron0x28c99f0()*-1.00836);
}

double NNfunction_ns_chi03_cL::synapse0x28dabc0() {
   return (neuron0x28c9d30()*1.19144);
}

double NNfunction_ns_chi03_cL::synapse0x28dac00() {
   return (neuron0x28ca070()*-0.532505);
}

double NNfunction_ns_chi03_cL::synapse0x28dac40() {
   return (neuron0x28ca3b0()*0.850621);
}

double NNfunction_ns_chi03_cL::synapse0x28dac80() {
   return (neuron0x28ca6f0()*0.0936284);
}

double NNfunction_ns_chi03_cL::synapse0x28dacc0() {
   return (neuron0x28caa30()*0.0151044);
}

double NNfunction_ns_chi03_cL::synapse0x28dad00() {
   return (neuron0x28cad70()*0.150655);
}

double NNfunction_ns_chi03_cL::synapse0x28dad40() {
   return (neuron0x28cb0b0()*-0.392778);
}

double NNfunction_ns_chi03_cL::synapse0x28dad80() {
   return (neuron0x28cb3f0()*0.0743962);
}

double NNfunction_ns_chi03_cL::synapse0x28dadc0() {
   return (neuron0x28cb730()*0.677185);
}

double NNfunction_ns_chi03_cL::synapse0x28dae00() {
   return (neuron0x28cba70()*-0.422015);
}

double NNfunction_ns_chi03_cL::synapse0x28da890() {
   return (neuron0x28cbdb0()*-0.302466);
}

double NNfunction_ns_chi03_cL::synapse0x28da8d0() {
   return (neuron0x28cc310()*0.0611398);
}

double NNfunction_ns_chi03_cL::synapse0x28daf50() {
   return (neuron0x28cc650()*0.41159);
}

double NNfunction_ns_chi03_cL::synapse0x28daf90() {
   return (neuron0x28cc990()*0.0203698);
}

double NNfunction_ns_chi03_cL::synapse0x28dafd0() {
   return (neuron0x28cccd0()*0.0238432);
}

double NNfunction_ns_chi03_cL::synapse0x28db010() {
   return (neuron0x28cd010()*1.08235);
}

double NNfunction_ns_chi03_cL::synapse0x28db050() {
   return (neuron0x28cd350()*-0.321751);
}

double NNfunction_ns_chi03_cL::synapse0x28db090() {
   return (neuron0x28cd690()*0.506566);
}

double NNfunction_ns_chi03_cL::synapse0x28db410() {
   return (neuron0x28c8a40()*0.0427188);
}

double NNfunction_ns_chi03_cL::synapse0x28db450() {
   return (neuron0x28c8cf0()*0.0493375);
}

double NNfunction_ns_chi03_cL::synapse0x28db490() {
   return (neuron0x28c9030()*-0.220688);
}

double NNfunction_ns_chi03_cL::synapse0x28db4d0() {
   return (neuron0x28c9370()*-0.133625);
}

double NNfunction_ns_chi03_cL::synapse0x28db510() {
   return (neuron0x28c96b0()*-0.859894);
}

double NNfunction_ns_chi03_cL::synapse0x28db550() {
   return (neuron0x28c99f0()*0.366115);
}

double NNfunction_ns_chi03_cL::synapse0x28db590() {
   return (neuron0x28c9d30()*0.165881);
}

double NNfunction_ns_chi03_cL::synapse0x28db5d0() {
   return (neuron0x28ca070()*0.881885);
}

double NNfunction_ns_chi03_cL::synapse0x28db610() {
   return (neuron0x28ca3b0()*-0.505065);
}

double NNfunction_ns_chi03_cL::synapse0x28db650() {
   return (neuron0x28ca6f0()*1.15224);
}

double NNfunction_ns_chi03_cL::synapse0x28db690() {
   return (neuron0x28caa30()*-0.0376309);
}

double NNfunction_ns_chi03_cL::synapse0x28db6d0() {
   return (neuron0x28cad70()*-0.104433);
}

double NNfunction_ns_chi03_cL::synapse0x28db710() {
   return (neuron0x28cb0b0()*-0.250078);
}

double NNfunction_ns_chi03_cL::synapse0x28db750() {
   return (neuron0x28cb3f0()*-0.283032);
}

double NNfunction_ns_chi03_cL::synapse0x28db790() {
   return (neuron0x28cb730()*-0.0474925);
}

double NNfunction_ns_chi03_cL::synapse0x28db7d0() {
   return (neuron0x28cba70()*-0.6749);
}

double NNfunction_ns_chi03_cL::synapse0x28db260() {
   return (neuron0x28cbdb0()*-0.826995);
}

double NNfunction_ns_chi03_cL::synapse0x28db2a0() {
   return (neuron0x28cc310()*-0.12634);
}

double NNfunction_ns_chi03_cL::synapse0x28db920() {
   return (neuron0x28cc650()*-0.0689083);
}

double NNfunction_ns_chi03_cL::synapse0x28db960() {
   return (neuron0x28cc990()*0.665415);
}

double NNfunction_ns_chi03_cL::synapse0x28db9a0() {
   return (neuron0x28cccd0()*0.1041);
}

double NNfunction_ns_chi03_cL::synapse0x28db9e0() {
   return (neuron0x28cd010()*0.703259);
}

double NNfunction_ns_chi03_cL::synapse0x28dba20() {
   return (neuron0x28cd350()*-0.629943);
}

double NNfunction_ns_chi03_cL::synapse0x28dba60() {
   return (neuron0x28cd690()*0.0363248);
}

double NNfunction_ns_chi03_cL::synapse0x28dbde0() {
   return (neuron0x28c8a40()*-0.0224568);
}

double NNfunction_ns_chi03_cL::synapse0x28dbe20() {
   return (neuron0x28c8cf0()*0.017803);
}

double NNfunction_ns_chi03_cL::synapse0x28dbe60() {
   return (neuron0x28c9030()*-0.00766969);
}

double NNfunction_ns_chi03_cL::synapse0x28dbea0() {
   return (neuron0x28c9370()*5.38043);
}

double NNfunction_ns_chi03_cL::synapse0x28dbee0() {
   return (neuron0x28c96b0()*-0.0131869);
}

double NNfunction_ns_chi03_cL::synapse0x28dbf20() {
   return (neuron0x28c99f0()*0.054732);
}

double NNfunction_ns_chi03_cL::synapse0x28dbf60() {
   return (neuron0x28c9d30()*-0.00201593);
}

double NNfunction_ns_chi03_cL::synapse0x28dbfa0() {
   return (neuron0x28ca070()*-0.016077);
}

double NNfunction_ns_chi03_cL::synapse0x28dbfe0() {
   return (neuron0x28ca3b0()*0.011193);
}

double NNfunction_ns_chi03_cL::synapse0x28dc020() {
   return (neuron0x28ca6f0()*-0.0180355);
}

double NNfunction_ns_chi03_cL::synapse0x28dc060() {
   return (neuron0x28caa30()*-0.00557068);
}

double NNfunction_ns_chi03_cL::synapse0x28dc0a0() {
   return (neuron0x28cad70()*0.0653692);
}

double NNfunction_ns_chi03_cL::synapse0x28dc0e0() {
   return (neuron0x28cb0b0()*-0.336477);
}

double NNfunction_ns_chi03_cL::synapse0x28dc120() {
   return (neuron0x28cb3f0()*-0.00190065);
}

double NNfunction_ns_chi03_cL::synapse0x28dc160() {
   return (neuron0x28cb730()*0.0110173);
}

double NNfunction_ns_chi03_cL::synapse0x28dc1a0() {
   return (neuron0x28cba70()*0.0197148);
}

double NNfunction_ns_chi03_cL::synapse0x28dbc30() {
   return (neuron0x28cbdb0()*0.0031971);
}

double NNfunction_ns_chi03_cL::synapse0x28dbc70() {
   return (neuron0x28cc310()*0.0294834);
}

double NNfunction_ns_chi03_cL::synapse0x28dc2f0() {
   return (neuron0x28cc650()*0.0210664);
}

double NNfunction_ns_chi03_cL::synapse0x28dc330() {
   return (neuron0x28cc990()*-0.00603098);
}

double NNfunction_ns_chi03_cL::synapse0x28dc370() {
   return (neuron0x28cccd0()*0.110339);
}

double NNfunction_ns_chi03_cL::synapse0x28dc3b0() {
   return (neuron0x28cd010()*-0.0185978);
}

double NNfunction_ns_chi03_cL::synapse0x28dc3f0() {
   return (neuron0x28cd350()*0.0286652);
}

double NNfunction_ns_chi03_cL::synapse0x28dc430() {
   return (neuron0x28cd690()*0.0650253);
}

double NNfunction_ns_chi03_cL::synapse0x28dc7b0() {
   return (neuron0x28c8a40()*-0.900562);
}

double NNfunction_ns_chi03_cL::synapse0x28dc7f0() {
   return (neuron0x28c8cf0()*-0.212533);
}

double NNfunction_ns_chi03_cL::synapse0x28dc830() {
   return (neuron0x28c9030()*-2.20316);
}

double NNfunction_ns_chi03_cL::synapse0x28dc870() {
   return (neuron0x28c9370()*-0.0982363);
}

double NNfunction_ns_chi03_cL::synapse0x28dc8b0() {
   return (neuron0x28c96b0()*-0.392226);
}

double NNfunction_ns_chi03_cL::synapse0x28dc8f0() {
   return (neuron0x28c99f0()*-0.388145);
}

double NNfunction_ns_chi03_cL::synapse0x28dc930() {
   return (neuron0x28c9d30()*0.0324442);
}

double NNfunction_ns_chi03_cL::synapse0x28dc970() {
   return (neuron0x28ca070()*0.0625829);
}

double NNfunction_ns_chi03_cL::synapse0x28dc9b0() {
   return (neuron0x28ca3b0()*-0.0489504);
}

double NNfunction_ns_chi03_cL::synapse0x28dc9f0() {
   return (neuron0x28ca6f0()*-0.425021);
}

double NNfunction_ns_chi03_cL::synapse0x28dca30() {
   return (neuron0x28caa30()*0.43697);
}

double NNfunction_ns_chi03_cL::synapse0x28dca70() {
   return (neuron0x28cad70()*-0.368954);
}

double NNfunction_ns_chi03_cL::synapse0x28dcab0() {
   return (neuron0x28cb0b0()*-1.1334);
}

double NNfunction_ns_chi03_cL::synapse0x28dcaf0() {
   return (neuron0x28cb3f0()*0.175625);
}

double NNfunction_ns_chi03_cL::synapse0x28dcb30() {
   return (neuron0x28cb730()*0.0752669);
}

double NNfunction_ns_chi03_cL::synapse0x28dcb70() {
   return (neuron0x28cba70()*0.269053);
}

double NNfunction_ns_chi03_cL::synapse0x28dc600() {
   return (neuron0x28cbdb0()*0.264995);
}

double NNfunction_ns_chi03_cL::synapse0x28dc640() {
   return (neuron0x28cc310()*0.103157);
}

double NNfunction_ns_chi03_cL::synapse0x28dccc0() {
   return (neuron0x28cc650()*-0.402222);
}

double NNfunction_ns_chi03_cL::synapse0x28dcd00() {
   return (neuron0x28cc990()*0.130059);
}

double NNfunction_ns_chi03_cL::synapse0x28dcd40() {
   return (neuron0x28cccd0()*-0.0173747);
}

double NNfunction_ns_chi03_cL::synapse0x28dcd80() {
   return (neuron0x28cd010()*-0.318347);
}

double NNfunction_ns_chi03_cL::synapse0x28dcdc0() {
   return (neuron0x28cd350()*0.299497);
}

double NNfunction_ns_chi03_cL::synapse0x28dce00() {
   return (neuron0x28cd690()*-0.631862);
}

double NNfunction_ns_chi03_cL::synapse0x28dd180() {
   return (neuron0x28c8a40()*-0.0884529);
}

double NNfunction_ns_chi03_cL::synapse0x28dd1c0() {
   return (neuron0x28c8cf0()*0.0243266);
}

double NNfunction_ns_chi03_cL::synapse0x28dd200() {
   return (neuron0x28c9030()*0.0602667);
}

double NNfunction_ns_chi03_cL::synapse0x28dd240() {
   return (neuron0x28c9370()*-0.00834045);
}

double NNfunction_ns_chi03_cL::synapse0x28dd280() {
   return (neuron0x28c96b0()*-0.0192618);
}

double NNfunction_ns_chi03_cL::synapse0x28dd2c0() {
   return (neuron0x28c99f0()*-0.0233599);
}

double NNfunction_ns_chi03_cL::synapse0x28dd300() {
   return (neuron0x28c9d30()*-0.0135216);
}

double NNfunction_ns_chi03_cL::synapse0x28dd340() {
   return (neuron0x28ca070()*-0.0743201);
}

double NNfunction_ns_chi03_cL::synapse0x28dd380() {
   return (neuron0x28ca3b0()*-0.0292343);
}

double NNfunction_ns_chi03_cL::synapse0x28d5540() {
   return (neuron0x28ca6f0()*0.0265848);
}

double NNfunction_ns_chi03_cL::synapse0x28d5580() {
   return (neuron0x28caa30()*-0.0387118);
}

double NNfunction_ns_chi03_cL::synapse0x28d55c0() {
   return (neuron0x28cad70()*0.0413051);
}

double NNfunction_ns_chi03_cL::synapse0x28d5600() {
   return (neuron0x28cb0b0()*-0.0440248);
}

double NNfunction_ns_chi03_cL::synapse0x28d5640() {
   return (neuron0x28cb3f0()*-0.0332162);
}

double NNfunction_ns_chi03_cL::synapse0x28d5680() {
   return (neuron0x28cb730()*-0.0197373);
}

double NNfunction_ns_chi03_cL::synapse0x28d56c0() {
   return (neuron0x28cba70()*0.0356375);
}

double NNfunction_ns_chi03_cL::synapse0x28dcfd0() {
   return (neuron0x28cbdb0()*-0.0749206);
}

double NNfunction_ns_chi03_cL::synapse0x28dd010() {
   return (neuron0x28cc310()*-0.00967551);
}

double NNfunction_ns_chi03_cL::synapse0x28d5810() {
   return (neuron0x28cc650()*-0.113691);
}

double NNfunction_ns_chi03_cL::synapse0x28d5850() {
   return (neuron0x28cc990()*-0.0540457);
}

double NNfunction_ns_chi03_cL::synapse0x28d5890() {
   return (neuron0x28cccd0()*0.0260359);
}

double NNfunction_ns_chi03_cL::synapse0x28d58d0() {
   return (neuron0x28cd010()*-0.0312518);
}

double NNfunction_ns_chi03_cL::synapse0x28d5910() {
   return (neuron0x28cd350()*-0.00166509);
}

double NNfunction_ns_chi03_cL::synapse0x28d5950() {
   return (neuron0x28cd690()*-1.65928);
}

double NNfunction_ns_chi03_cL::synapse0x28d5cd0() {
   return (neuron0x28c8a40()*0.00282597);
}

double NNfunction_ns_chi03_cL::synapse0x28d5d10() {
   return (neuron0x28c8cf0()*0.00054386);
}

double NNfunction_ns_chi03_cL::synapse0x28d5d50() {
   return (neuron0x28c9030()*0.0328528);
}

double NNfunction_ns_chi03_cL::synapse0x28d5d90() {
   return (neuron0x28c9370()*-3.71857);
}

double NNfunction_ns_chi03_cL::synapse0x28d5dd0() {
   return (neuron0x28c96b0()*0.00592869);
}

double NNfunction_ns_chi03_cL::synapse0x28d5e10() {
   return (neuron0x28c99f0()*-0.0668684);
}

double NNfunction_ns_chi03_cL::synapse0x28d5e50() {
   return (neuron0x28c9d30()*-0.00629711);
}

double NNfunction_ns_chi03_cL::synapse0x28d5e90() {
   return (neuron0x28ca070()*-0.0093847);
}

double NNfunction_ns_chi03_cL::synapse0x28d5ed0() {
   return (neuron0x28ca3b0()*0.00272601);
}

double NNfunction_ns_chi03_cL::synapse0x28d5f10() {
   return (neuron0x28ca6f0()*0.017017);
}

double NNfunction_ns_chi03_cL::synapse0x28d5f50() {
   return (neuron0x28caa30()*0.0153692);
}

double NNfunction_ns_chi03_cL::synapse0x28d5f90() {
   return (neuron0x28cad70()*-0.0578601);
}

double NNfunction_ns_chi03_cL::synapse0x28d5fd0() {
   return (neuron0x28cb0b0()*0.72355);
}

double NNfunction_ns_chi03_cL::synapse0x28d6010() {
   return (neuron0x28cb3f0()*0.0473984);
}

double NNfunction_ns_chi03_cL::synapse0x28d6050() {
   return (neuron0x28cb730()*-0.0137523);
}

double NNfunction_ns_chi03_cL::synapse0x28d6090() {
   return (neuron0x28cba70()*-0.015151);
}

double NNfunction_ns_chi03_cL::synapse0x28d5b20() {
   return (neuron0x28cbdb0()*0.0736051);
}

double NNfunction_ns_chi03_cL::synapse0x28d5b60() {
   return (neuron0x28cc310()*-0.021641);
}

double NNfunction_ns_chi03_cL::synapse0x28d61e0() {
   return (neuron0x28cc650()*-0.0217622);
}

double NNfunction_ns_chi03_cL::synapse0x28d6220() {
   return (neuron0x28cc990()*-0.0175506);
}

double NNfunction_ns_chi03_cL::synapse0x28d6260() {
   return (neuron0x28cccd0()*-0.0769299);
}

double NNfunction_ns_chi03_cL::synapse0x28d62a0() {
   return (neuron0x28cd010()*0.00827901);
}

double NNfunction_ns_chi03_cL::synapse0x28d62e0() {
   return (neuron0x28cd350()*-0.00950345);
}

double NNfunction_ns_chi03_cL::synapse0x28d6320() {
   return (neuron0x28cd690()*-0.0187824);
}

double NNfunction_ns_chi03_cL::synapse0x28d64f0() {
   return (neuron0x28c8a40()*-0.0445347);
}

double NNfunction_ns_chi03_cL::synapse0x28df580() {
   return (neuron0x28c8cf0()*-0.0081656);
}

double NNfunction_ns_chi03_cL::synapse0x28df5c0() {
   return (neuron0x28c9030()*-0.791346);
}

double NNfunction_ns_chi03_cL::synapse0x28df600() {
   return (neuron0x28c9370()*0.0100572);
}

double NNfunction_ns_chi03_cL::synapse0x28df640() {
   return (neuron0x28c96b0()*0.0618582);
}

double NNfunction_ns_chi03_cL::synapse0x28df680() {
   return (neuron0x28c99f0()*-0.00622149);
}

double NNfunction_ns_chi03_cL::synapse0x28df6c0() {
   return (neuron0x28c9d30()*0.0531368);
}

double NNfunction_ns_chi03_cL::synapse0x28df700() {
   return (neuron0x28ca070()*-0.0253201);
}

double NNfunction_ns_chi03_cL::synapse0x28df740() {
   return (neuron0x28ca3b0()*0.0255776);
}

double NNfunction_ns_chi03_cL::synapse0x28df780() {
   return (neuron0x28ca6f0()*0.0348175);
}

double NNfunction_ns_chi03_cL::synapse0x28df7c0() {
   return (neuron0x28caa30()*-0.0641254);
}

double NNfunction_ns_chi03_cL::synapse0x28df800() {
   return (neuron0x28cad70()*-0.0243328);
}

double NNfunction_ns_chi03_cL::synapse0x28df840() {
   return (neuron0x28cb0b0()*-0.0989883);
}

double NNfunction_ns_chi03_cL::synapse0x28df880() {
   return (neuron0x28cb3f0()*0.0232633);
}

double NNfunction_ns_chi03_cL::synapse0x28df8c0() {
   return (neuron0x28cb730()*0.0313865);
}

double NNfunction_ns_chi03_cL::synapse0x28df900() {
   return (neuron0x28cba70()*0.0227945);
}

double NNfunction_ns_chi03_cL::synapse0x28df3d0() {
   return (neuron0x28cbdb0()*-0.0980434);
}

double NNfunction_ns_chi03_cL::synapse0x28df410() {
   return (neuron0x28cc310()*-0.0381333);
}

double NNfunction_ns_chi03_cL::synapse0x28dfa50() {
   return (neuron0x28cc650()*-0.0726156);
}

double NNfunction_ns_chi03_cL::synapse0x28dfa90() {
   return (neuron0x28cc990()*-0.011006);
}

double NNfunction_ns_chi03_cL::synapse0x28dfad0() {
   return (neuron0x28cccd0()*0.0530046);
}

double NNfunction_ns_chi03_cL::synapse0x28dfb10() {
   return (neuron0x28cd010()*0.00593886);
}

double NNfunction_ns_chi03_cL::synapse0x28dfb50() {
   return (neuron0x28cd350()*-0.0236131);
}

double NNfunction_ns_chi03_cL::synapse0x28dfb90() {
   return (neuron0x28cd690()*1.09412);
}

double NNfunction_ns_chi03_cL::synapse0x28dff10() {
   return (neuron0x28c8a40()*-0.0460121);
}

double NNfunction_ns_chi03_cL::synapse0x28dff50() {
   return (neuron0x28c8cf0()*-0.4597);
}

double NNfunction_ns_chi03_cL::synapse0x28dff90() {
   return (neuron0x28c9030()*-0.0245895);
}

double NNfunction_ns_chi03_cL::synapse0x28dffd0() {
   return (neuron0x28c9370()*-0.180931);
}

double NNfunction_ns_chi03_cL::synapse0x28e0010() {
   return (neuron0x28c96b0()*-0.289626);
}

double NNfunction_ns_chi03_cL::synapse0x28e0050() {
   return (neuron0x28c99f0()*0.375882);
}

double NNfunction_ns_chi03_cL::synapse0x28e0090() {
   return (neuron0x28c9d30()*0.0503759);
}

double NNfunction_ns_chi03_cL::synapse0x28e00d0() {
   return (neuron0x28ca070()*-1.78537);
}

double NNfunction_ns_chi03_cL::synapse0x28e0110() {
   return (neuron0x28ca3b0()*0.532912);
}

double NNfunction_ns_chi03_cL::synapse0x28e0150() {
   return (neuron0x28ca6f0()*0.262878);
}

double NNfunction_ns_chi03_cL::synapse0x28e0190() {
   return (neuron0x28caa30()*0.871904);
}

double NNfunction_ns_chi03_cL::synapse0x28e01d0() {
   return (neuron0x28cad70()*0.140974);
}

double NNfunction_ns_chi03_cL::synapse0x28e0210() {
   return (neuron0x28cb0b0()*-0.896334);
}

double NNfunction_ns_chi03_cL::synapse0x28e0250() {
   return (neuron0x28cb3f0()*0.128617);
}

double NNfunction_ns_chi03_cL::synapse0x28e0290() {
   return (neuron0x28cb730()*0.239389);
}

double NNfunction_ns_chi03_cL::synapse0x28e02d0() {
   return (neuron0x28cba70()*1.06478);
}

double NNfunction_ns_chi03_cL::synapse0x28dfd60() {
   return (neuron0x28cbdb0()*0.419062);
}

double NNfunction_ns_chi03_cL::synapse0x28dfda0() {
   return (neuron0x28cc310()*-0.0203645);
}

double NNfunction_ns_chi03_cL::synapse0x28e0420() {
   return (neuron0x28cc650()*-0.215754);
}

double NNfunction_ns_chi03_cL::synapse0x28e0460() {
   return (neuron0x28cc990()*0.305938);
}

double NNfunction_ns_chi03_cL::synapse0x28e04a0() {
   return (neuron0x28cccd0()*-0.195452);
}

double NNfunction_ns_chi03_cL::synapse0x28e04e0() {
   return (neuron0x28cd010()*-0.225148);
}

double NNfunction_ns_chi03_cL::synapse0x28e0520() {
   return (neuron0x28cd350()*-0.496666);
}

double NNfunction_ns_chi03_cL::synapse0x28e0560() {
   return (neuron0x28cd690()*0.195926);
}

double NNfunction_ns_chi03_cL::synapse0x28e08e0() {
   return (neuron0x28c8a40()*0.0283392);
}

double NNfunction_ns_chi03_cL::synapse0x28e0920() {
   return (neuron0x28c8cf0()*0.118386);
}

double NNfunction_ns_chi03_cL::synapse0x28e0960() {
   return (neuron0x28c9030()*0.492834);
}

double NNfunction_ns_chi03_cL::synapse0x28e09a0() {
   return (neuron0x28c9370()*0.0939441);
}

double NNfunction_ns_chi03_cL::synapse0x28e09e0() {
   return (neuron0x28c96b0()*0.0406256);
}

double NNfunction_ns_chi03_cL::synapse0x28e0a20() {
   return (neuron0x28c99f0()*0.465142);
}

double NNfunction_ns_chi03_cL::synapse0x28e0a60() {
   return (neuron0x28c9d30()*-0.294436);
}

double NNfunction_ns_chi03_cL::synapse0x28e0aa0() {
   return (neuron0x28ca070()*-0.598072);
}

double NNfunction_ns_chi03_cL::synapse0x28e0ae0() {
   return (neuron0x28ca3b0()*0.255301);
}

double NNfunction_ns_chi03_cL::synapse0x28e0b20() {
   return (neuron0x28ca6f0()*-0.418135);
}

double NNfunction_ns_chi03_cL::synapse0x28e0b60() {
   return (neuron0x28caa30()*0.133855);
}

double NNfunction_ns_chi03_cL::synapse0x28e0ba0() {
   return (neuron0x28cad70()*0.00865878);
}

double NNfunction_ns_chi03_cL::synapse0x28e0be0() {
   return (neuron0x28cb0b0()*0.247248);
}

double NNfunction_ns_chi03_cL::synapse0x28e0c20() {
   return (neuron0x28cb3f0()*0.234065);
}

double NNfunction_ns_chi03_cL::synapse0x28e0c60() {
   return (neuron0x28cb730()*-0.330192);
}

double NNfunction_ns_chi03_cL::synapse0x28e0ca0() {
   return (neuron0x28cba70()*0.913649);
}

double NNfunction_ns_chi03_cL::synapse0x28e0730() {
   return (neuron0x28cbdb0()*0.23285);
}

double NNfunction_ns_chi03_cL::synapse0x28e0770() {
   return (neuron0x28cc310()*0.130341);
}

double NNfunction_ns_chi03_cL::synapse0x28e0df0() {
   return (neuron0x28cc650()*0.123032);
}

double NNfunction_ns_chi03_cL::synapse0x28e0e30() {
   return (neuron0x28cc990()*-0.275806);
}

double NNfunction_ns_chi03_cL::synapse0x28e0e70() {
   return (neuron0x28cccd0()*0.0882039);
}

double NNfunction_ns_chi03_cL::synapse0x28e0eb0() {
   return (neuron0x28cd010()*-0.287441);
}

double NNfunction_ns_chi03_cL::synapse0x28e0ef0() {
   return (neuron0x28cd350()*0.149185);
}

double NNfunction_ns_chi03_cL::synapse0x28e0f30() {
   return (neuron0x28cd690()*-0.147848);
}

double NNfunction_ns_chi03_cL::synapse0x28e12b0() {
   return (neuron0x28c8a40()*0.0403461);
}

double NNfunction_ns_chi03_cL::synapse0x28e12f0() {
   return (neuron0x28c8cf0()*0.0309301);
}

double NNfunction_ns_chi03_cL::synapse0x28e1330() {
   return (neuron0x28c9030()*0.104366);
}

double NNfunction_ns_chi03_cL::synapse0x28e1370() {
   return (neuron0x28c9370()*-0.13152);
}

double NNfunction_ns_chi03_cL::synapse0x28e13b0() {
   return (neuron0x28c96b0()*0.00313953);
}

double NNfunction_ns_chi03_cL::synapse0x28e13f0() {
   return (neuron0x28c99f0()*0.0325506);
}

double NNfunction_ns_chi03_cL::synapse0x28e1430() {
   return (neuron0x28c9d30()*-0.0251119);
}

double NNfunction_ns_chi03_cL::synapse0x28e1470() {
   return (neuron0x28ca070()*0.0283108);
}

double NNfunction_ns_chi03_cL::synapse0x28e14b0() {
   return (neuron0x28ca3b0()*0.00202951);
}

double NNfunction_ns_chi03_cL::synapse0x28e14f0() {
   return (neuron0x28ca6f0()*-0.0192909);
}

double NNfunction_ns_chi03_cL::synapse0x28e1530() {
   return (neuron0x28caa30()*-0.00926299);
}

double NNfunction_ns_chi03_cL::synapse0x28e1570() {
   return (neuron0x28cad70()*-0.0030752);
}

double NNfunction_ns_chi03_cL::synapse0x28e15b0() {
   return (neuron0x28cb0b0()*-1.26389);
}

double NNfunction_ns_chi03_cL::synapse0x28e15f0() {
   return (neuron0x28cb3f0()*-0.0723153);
}

double NNfunction_ns_chi03_cL::synapse0x28e1630() {
   return (neuron0x28cb730()*0.0432333);
}

double NNfunction_ns_chi03_cL::synapse0x28e1670() {
   return (neuron0x28cba70()*-0.0349086);
}

double NNfunction_ns_chi03_cL::synapse0x28e1100() {
   return (neuron0x28cbdb0()*-0.0152856);
}

double NNfunction_ns_chi03_cL::synapse0x28e1140() {
   return (neuron0x28cc310()*0.0216773);
}

double NNfunction_ns_chi03_cL::synapse0x28e17c0() {
   return (neuron0x28cc650()*0.0117492);
}

double NNfunction_ns_chi03_cL::synapse0x28e1800() {
   return (neuron0x28cc990()*0.00521811);
}

double NNfunction_ns_chi03_cL::synapse0x28e1840() {
   return (neuron0x28cccd0()*-0.0220402);
}

double NNfunction_ns_chi03_cL::synapse0x28e1880() {
   return (neuron0x28cd010()*-0.01335);
}

double NNfunction_ns_chi03_cL::synapse0x28e18c0() {
   return (neuron0x28cd350()*0.0123293);
}

double NNfunction_ns_chi03_cL::synapse0x28e1900() {
   return (neuron0x28cd690()*0.164731);
}

double NNfunction_ns_chi03_cL::synapse0x28e1c80() {
   return (neuron0x28c8a40()*0.0271615);
}

double NNfunction_ns_chi03_cL::synapse0x28e1cc0() {
   return (neuron0x28c8cf0()*0.00939098);
}

double NNfunction_ns_chi03_cL::synapse0x28e1d00() {
   return (neuron0x28c9030()*-0.288618);
}

double NNfunction_ns_chi03_cL::synapse0x28e1d40() {
   return (neuron0x28c9370()*-0.120311);
}

double NNfunction_ns_chi03_cL::synapse0x28e1d80() {
   return (neuron0x28c96b0()*0.00208576);
}

double NNfunction_ns_chi03_cL::synapse0x28e1dc0() {
   return (neuron0x28c99f0()*0.0256564);
}

double NNfunction_ns_chi03_cL::synapse0x28e1e00() {
   return (neuron0x28c9d30()*-0.00690563);
}

double NNfunction_ns_chi03_cL::synapse0x28e1e40() {
   return (neuron0x28ca070()*0.0371934);
}

double NNfunction_ns_chi03_cL::synapse0x28e1e80() {
   return (neuron0x28ca3b0()*-0.00526694);
}

double NNfunction_ns_chi03_cL::synapse0x28e1ec0() {
   return (neuron0x28ca6f0()*-0.0295854);
}

double NNfunction_ns_chi03_cL::synapse0x28e1f00() {
   return (neuron0x28caa30()*0.0320852);
}

double NNfunction_ns_chi03_cL::synapse0x28e1f40() {
   return (neuron0x28cad70()*-0.0148064);
}

double NNfunction_ns_chi03_cL::synapse0x28e1f80() {
   return (neuron0x28cb0b0()*-0.964065);
}

double NNfunction_ns_chi03_cL::synapse0x28e1fc0() {
   return (neuron0x28cb3f0()*-0.0532333);
}

double NNfunction_ns_chi03_cL::synapse0x28e2000() {
   return (neuron0x28cb730()*-0.00153697);
}

double NNfunction_ns_chi03_cL::synapse0x28e2040() {
   return (neuron0x28cba70()*-0.0403449);
}

double NNfunction_ns_chi03_cL::synapse0x28e1ad0() {
   return (neuron0x28cbdb0()*-0.00283835);
}

double NNfunction_ns_chi03_cL::synapse0x28e1b10() {
   return (neuron0x28cc310()*0.00424921);
}

double NNfunction_ns_chi03_cL::synapse0x28e2190() {
   return (neuron0x28cc650()*-0.0055848);
}

double NNfunction_ns_chi03_cL::synapse0x28e21d0() {
   return (neuron0x28cc990()*0.00184518);
}

double NNfunction_ns_chi03_cL::synapse0x28e2210() {
   return (neuron0x28cccd0()*-0.0266453);
}

double NNfunction_ns_chi03_cL::synapse0x28e2250() {
   return (neuron0x28cd010()*0.00634446);
}

double NNfunction_ns_chi03_cL::synapse0x28e2290() {
   return (neuron0x28cd350()*0.00280215);
}

double NNfunction_ns_chi03_cL::synapse0x28e22d0() {
   return (neuron0x28cd690()*0.496874);
}

double NNfunction_ns_chi03_cL::synapse0x28e2650() {
   return (neuron0x28c8a40()*-0.544948);
}

double NNfunction_ns_chi03_cL::synapse0x28e2690() {
   return (neuron0x28c8cf0()*-0.0893438);
}

double NNfunction_ns_chi03_cL::synapse0x28e26d0() {
   return (neuron0x28c9030()*-0.975508);
}

double NNfunction_ns_chi03_cL::synapse0x28e2710() {
   return (neuron0x28c9370()*-0.0780806);
}

double NNfunction_ns_chi03_cL::synapse0x28e2750() {
   return (neuron0x28c96b0()*-0.527998);
}

double NNfunction_ns_chi03_cL::synapse0x28e2790() {
   return (neuron0x28c99f0()*-0.14558);
}

double NNfunction_ns_chi03_cL::synapse0x28e27d0() {
   return (neuron0x28c9d30()*-0.393572);
}

double NNfunction_ns_chi03_cL::synapse0x28e2810() {
   return (neuron0x28ca070()*-0.24371);
}

double NNfunction_ns_chi03_cL::synapse0x28e2850() {
   return (neuron0x28ca3b0()*0.0657942);
}

double NNfunction_ns_chi03_cL::synapse0x28e2890() {
   return (neuron0x28ca6f0()*-0.377035);
}

double NNfunction_ns_chi03_cL::synapse0x28e28d0() {
   return (neuron0x28caa30()*1.25561);
}

double NNfunction_ns_chi03_cL::synapse0x28e2910() {
   return (neuron0x28cad70()*-0.383895);
}

double NNfunction_ns_chi03_cL::synapse0x28e2950() {
   return (neuron0x28cb0b0()*-0.480199);
}

double NNfunction_ns_chi03_cL::synapse0x28e2990() {
   return (neuron0x28cb3f0()*0.78158);
}

double NNfunction_ns_chi03_cL::synapse0x28e29d0() {
   return (neuron0x28cb730()*0.0851254);
}

double NNfunction_ns_chi03_cL::synapse0x28e2a10() {
   return (neuron0x28cba70()*0.347027);
}

double NNfunction_ns_chi03_cL::synapse0x28e24a0() {
   return (neuron0x28cbdb0()*-0.337357);
}

double NNfunction_ns_chi03_cL::synapse0x28e24e0() {
   return (neuron0x28cc310()*0.629861);
}

double NNfunction_ns_chi03_cL::synapse0x28e2b60() {
   return (neuron0x28cc650()*0.165655);
}

double NNfunction_ns_chi03_cL::synapse0x28e2ba0() {
   return (neuron0x28cc990()*0.60469);
}

double NNfunction_ns_chi03_cL::synapse0x28e2be0() {
   return (neuron0x28cccd0()*0.424206);
}

double NNfunction_ns_chi03_cL::synapse0x28e2c20() {
   return (neuron0x28cd010()*-0.703727);
}

double NNfunction_ns_chi03_cL::synapse0x28e2c60() {
   return (neuron0x28cd350()*-0.203074);
}

double NNfunction_ns_chi03_cL::synapse0x28e2ca0() {
   return (neuron0x28cd690()*0.561304);
}

double NNfunction_ns_chi03_cL::synapse0x28e3020() {
   return (neuron0x28c8a40()*0.0196566);
}

double NNfunction_ns_chi03_cL::synapse0x28e3060() {
   return (neuron0x28c8cf0()*-0.00986451);
}

double NNfunction_ns_chi03_cL::synapse0x28e30a0() {
   return (neuron0x28c9030()*-0.10077);
}

double NNfunction_ns_chi03_cL::synapse0x28e30e0() {
   return (neuron0x28c9370()*-1.83266);
}

double NNfunction_ns_chi03_cL::synapse0x28e3120() {
   return (neuron0x28c96b0()*0.069622);
}

double NNfunction_ns_chi03_cL::synapse0x28e3160() {
   return (neuron0x28c99f0()*-0.0437477);
}

double NNfunction_ns_chi03_cL::synapse0x28e31a0() {
   return (neuron0x28c9d30()*0.00890296);
}

double NNfunction_ns_chi03_cL::synapse0x28e31e0() {
   return (neuron0x28ca070()*-0.0486108);
}

double NNfunction_ns_chi03_cL::synapse0x28e3220() {
   return (neuron0x28ca3b0()*-0.0155266);
}

double NNfunction_ns_chi03_cL::synapse0x28e3260() {
   return (neuron0x28ca6f0()*-0.01229);
}

double NNfunction_ns_chi03_cL::synapse0x28e32a0() {
   return (neuron0x28caa30()*0.0238267);
}

double NNfunction_ns_chi03_cL::synapse0x28e32e0() {
   return (neuron0x28cad70()*0.0813621);
}

double NNfunction_ns_chi03_cL::synapse0x28e3320() {
   return (neuron0x28cb0b0()*-0.494431);
}

double NNfunction_ns_chi03_cL::synapse0x28e3360() {
   return (neuron0x28cb3f0()*-0.0592345);
}

double NNfunction_ns_chi03_cL::synapse0x28e33a0() {
   return (neuron0x28cb730()*0.047034);
}

double NNfunction_ns_chi03_cL::synapse0x28e33e0() {
   return (neuron0x28cba70()*0.0675738);
}

double NNfunction_ns_chi03_cL::synapse0x28e2e70() {
   return (neuron0x28cbdb0()*-0.0365634);
}

double NNfunction_ns_chi03_cL::synapse0x28e2eb0() {
   return (neuron0x28cc310()*0.0117921);
}

double NNfunction_ns_chi03_cL::synapse0x28e3530() {
   return (neuron0x28cc650()*-0.00309464);
}

double NNfunction_ns_chi03_cL::synapse0x28e3570() {
   return (neuron0x28cc990()*0.00436833);
}

double NNfunction_ns_chi03_cL::synapse0x28e35b0() {
   return (neuron0x28cccd0()*-0.0374311);
}

double NNfunction_ns_chi03_cL::synapse0x28e35f0() {
   return (neuron0x28cd010()*0.0233756);
}

double NNfunction_ns_chi03_cL::synapse0x28e3630() {
   return (neuron0x28cd350()*0.0185234);
}

double NNfunction_ns_chi03_cL::synapse0x28e3670() {
   return (neuron0x28cd690()*0.0388666);
}

double NNfunction_ns_chi03_cL::synapse0x28e39f0() {
   return (neuron0x28c8a40()*-0.133484);
}

double NNfunction_ns_chi03_cL::synapse0x28e3a30() {
   return (neuron0x28c8cf0()*-0.0276378);
}

double NNfunction_ns_chi03_cL::synapse0x28e3a70() {
   return (neuron0x28c9030()*0.185156);
}

double NNfunction_ns_chi03_cL::synapse0x28e3ab0() {
   return (neuron0x28c9370()*-0.0892596);
}

double NNfunction_ns_chi03_cL::synapse0x28e3af0() {
   return (neuron0x28c96b0()*-0.0683043);
}

double NNfunction_ns_chi03_cL::synapse0x28e3b30() {
   return (neuron0x28c99f0()*0.0332265);
}

double NNfunction_ns_chi03_cL::synapse0x28e3b70() {
   return (neuron0x28c9d30()*-0.0960984);
}

double NNfunction_ns_chi03_cL::synapse0x28e3bb0() {
   return (neuron0x28ca070()*-0.0691279);
}

double NNfunction_ns_chi03_cL::synapse0x28e3bf0() {
   return (neuron0x28ca3b0()*0.112495);
}

double NNfunction_ns_chi03_cL::synapse0x28e3c30() {
   return (neuron0x28ca6f0()*0.0873748);
}

double NNfunction_ns_chi03_cL::synapse0x28e3c70() {
   return (neuron0x28caa30()*0.0448838);
}

double NNfunction_ns_chi03_cL::synapse0x28e3cb0() {
   return (neuron0x28cad70()*-0.0427974);
}

double NNfunction_ns_chi03_cL::synapse0x28e3cf0() {
   return (neuron0x28cb0b0()*-1.24731);
}

double NNfunction_ns_chi03_cL::synapse0x28e3d30() {
   return (neuron0x28cb3f0()*-0.051551);
}

double NNfunction_ns_chi03_cL::synapse0x28e3d70() {
   return (neuron0x28cb730()*-0.0102175);
}

double NNfunction_ns_chi03_cL::synapse0x28e3db0() {
   return (neuron0x28cba70()*0.141309);
}

double NNfunction_ns_chi03_cL::synapse0x28e3840() {
   return (neuron0x28cbdb0()*-0.0748179);
}

double NNfunction_ns_chi03_cL::synapse0x28e3880() {
   return (neuron0x28cc310()*0.00320226);
}

double NNfunction_ns_chi03_cL::synapse0x28e3f00() {
   return (neuron0x28cc650()*-0.123563);
}

double NNfunction_ns_chi03_cL::synapse0x28e3f40() {
   return (neuron0x28cc990()*0.000876846);
}

double NNfunction_ns_chi03_cL::synapse0x28e3f80() {
   return (neuron0x28cccd0()*-0.0101724);
}

double NNfunction_ns_chi03_cL::synapse0x28e3fc0() {
   return (neuron0x28cd010()*0.0331559);
}

double NNfunction_ns_chi03_cL::synapse0x28e4000() {
   return (neuron0x28cd350()*-0.0597984);
}

double NNfunction_ns_chi03_cL::synapse0x28e4040() {
   return (neuron0x28cd690()*-1.44565);
}

double NNfunction_ns_chi03_cL::synapse0x28e43c0() {
   return (neuron0x28c8a40()*0.0322936);
}

double NNfunction_ns_chi03_cL::synapse0x28d8990() {
   return (neuron0x28c8cf0()*0.00437921);
}

double NNfunction_ns_chi03_cL::synapse0x28d89d0() {
   return (neuron0x28c9030()*4.1555);
}

double NNfunction_ns_chi03_cL::synapse0x28d8a10() {
   return (neuron0x28c9370()*-0.00452011);
}

double NNfunction_ns_chi03_cL::synapse0x28d8c60() {
   return (neuron0x28c96b0()*-0.00768299);
}

double NNfunction_ns_chi03_cL::synapse0x28d8ca0() {
   return (neuron0x28c99f0()*0.0278354);
}

double NNfunction_ns_chi03_cL::synapse0x28d8ce0() {
   return (neuron0x28c9d30()*-0.000324988);
}

double NNfunction_ns_chi03_cL::synapse0x28d8f30() {
   return (neuron0x28ca070()*0.00586957);
}

double NNfunction_ns_chi03_cL::synapse0x28d8f70() {
   return (neuron0x28ca3b0()*0.00932233);
}

double NNfunction_ns_chi03_cL::synapse0x28d91c0() {
   return (neuron0x28ca6f0()*-0.0163152);
}

double NNfunction_ns_chi03_cL::synapse0x28d9200() {
   return (neuron0x28caa30()*0.0203663);
}

double NNfunction_ns_chi03_cL::synapse0x28d9240() {
   return (neuron0x28cad70()*0.0153225);
}

double NNfunction_ns_chi03_cL::synapse0x28d9490() {
   return (neuron0x28cb0b0()*-0.0970515);
}

double NNfunction_ns_chi03_cL::synapse0x28d94d0() {
   return (neuron0x28cb3f0()*0.0364789);
}

double NNfunction_ns_chi03_cL::synapse0x28d9720() {
   return (neuron0x28cb730()*0.00805777);
}

double NNfunction_ns_chi03_cL::synapse0x28d9760() {
   return (neuron0x28cba70()*-0.00352904);
}

double NNfunction_ns_chi03_cL::synapse0x28e4210() {
   return (neuron0x28cbdb0()*-0.00667207);
}

double NNfunction_ns_chi03_cL::synapse0x28e4250() {
   return (neuron0x28cc310()*-0.00705487);
}

double NNfunction_ns_chi03_cL::synapse0x28d98b0() {
   return (neuron0x28cc650()*-0.0224696);
}

double NNfunction_ns_chi03_cL::synapse0x28d9dc0() {
   return (neuron0x28cc990()*-0.00308199);
}

double NNfunction_ns_chi03_cL::synapse0x28d9e00() {
   return (neuron0x28cccd0()*-0.0228703);
}

double NNfunction_ns_chi03_cL::synapse0x28d9e40() {
   return (neuron0x28cd010()*0.00657201);
}

double NNfunction_ns_chi03_cL::synapse0x28da090() {
   return (neuron0x28cd350()*-0.00586421);
}

double NNfunction_ns_chi03_cL::synapse0x28da0d0() {
   return (neuron0x28cd690()*-1.5601);
}

double NNfunction_ns_chi03_cL::synapse0x28d9980() {
   return (neuron0x28c8a40()*0.0264986);
}

double NNfunction_ns_chi03_cL::synapse0x28d99c0() {
   return (neuron0x28c8cf0()*13.0886);
}

double NNfunction_ns_chi03_cL::synapse0x28d9a00() {
   return (neuron0x28c9030()*-0.448457);
}

double NNfunction_ns_chi03_cL::synapse0x28d9a40() {
   return (neuron0x28c9370()*0.0510721);
}

double NNfunction_ns_chi03_cL::synapse0x28da3c0() {
   return (neuron0x28c96b0()*-0.00621118);
}

double NNfunction_ns_chi03_cL::synapse0x28e6710() {
   return (neuron0x28c99f0()*0.0296016);
}

double NNfunction_ns_chi03_cL::synapse0x28e6750() {
   return (neuron0x28c9d30()*0.00704899);
}

double NNfunction_ns_chi03_cL::synapse0x28e6790() {
   return (neuron0x28ca070()*0.0315366);
}

double NNfunction_ns_chi03_cL::synapse0x28e67d0() {
   return (neuron0x28ca3b0()*0.00312776);
}

double NNfunction_ns_chi03_cL::synapse0x28e6810() {
   return (neuron0x28ca6f0()*-0.00872672);
}

double NNfunction_ns_chi03_cL::synapse0x28e6850() {
   return (neuron0x28caa30()*-0.0233386);
}

double NNfunction_ns_chi03_cL::synapse0x28e6890() {
   return (neuron0x28cad70()*-0.0149517);
}

double NNfunction_ns_chi03_cL::synapse0x28e68d0() {
   return (neuron0x28cb0b0()*-0.0461158);
}

double NNfunction_ns_chi03_cL::synapse0x28e6910() {
   return (neuron0x28cb3f0()*0.00318368);
}

double NNfunction_ns_chi03_cL::synapse0x28e6950() {
   return (neuron0x28cb730()*0.0035457);
}

double NNfunction_ns_chi03_cL::synapse0x28e6990() {
   return (neuron0x28cba70()*-0.0254114);
}

double NNfunction_ns_chi03_cL::synapse0x28da2a0() {
   return (neuron0x28cbdb0()*0.0337539);
}

double NNfunction_ns_chi03_cL::synapse0x28da2e0() {
   return (neuron0x28cc310()*0.0145454);
}

double NNfunction_ns_chi03_cL::synapse0x28e6ae0() {
   return (neuron0x28cc650()*-0.0247172);
}

double NNfunction_ns_chi03_cL::synapse0x28e6b20() {
   return (neuron0x28cc990()*0.00692964);
}

double NNfunction_ns_chi03_cL::synapse0x28e6b60() {
   return (neuron0x28cccd0()*0.001431);
}

double NNfunction_ns_chi03_cL::synapse0x28e6ba0() {
   return (neuron0x28cd010()*-0.00706365);
}

double NNfunction_ns_chi03_cL::synapse0x28e6be0() {
   return (neuron0x28cd350()*0.00719334);
}

double NNfunction_ns_chi03_cL::synapse0x28e6c20() {
   return (neuron0x28cd690()*0.059413);
}

double NNfunction_ns_chi03_cL::synapse0x28e6fa0() {
   return (neuron0x28c8a40()*-0.0169616);
}

double NNfunction_ns_chi03_cL::synapse0x28e6fe0() {
   return (neuron0x28c8cf0()*-0.00147684);
}

double NNfunction_ns_chi03_cL::synapse0x28e7020() {
   return (neuron0x28c9030()*0.0485574);
}

double NNfunction_ns_chi03_cL::synapse0x28e7060() {
   return (neuron0x28c9370()*3.30616);
}

double NNfunction_ns_chi03_cL::synapse0x28e70a0() {
   return (neuron0x28c96b0()*-0.0337303);
}

double NNfunction_ns_chi03_cL::synapse0x28e70e0() {
   return (neuron0x28c99f0()*-0.0346264);
}

double NNfunction_ns_chi03_cL::synapse0x28e7120() {
   return (neuron0x28c9d30()*0.00590096);
}

double NNfunction_ns_chi03_cL::synapse0x28e7160() {
   return (neuron0x28ca070()*0.034708);
}

double NNfunction_ns_chi03_cL::synapse0x28e71a0() {
   return (neuron0x28ca3b0()*0.0179941);
}

double NNfunction_ns_chi03_cL::synapse0x28e71e0() {
   return (neuron0x28ca6f0()*0.0305367);
}

double NNfunction_ns_chi03_cL::synapse0x28e7220() {
   return (neuron0x28caa30()*0.0277948);
}

double NNfunction_ns_chi03_cL::synapse0x28e7260() {
   return (neuron0x28cad70()*-0.0120244);
}

double NNfunction_ns_chi03_cL::synapse0x28e72a0() {
   return (neuron0x28cb0b0()*0.838396);
}

double NNfunction_ns_chi03_cL::synapse0x28e72e0() {
   return (neuron0x28cb3f0()*0.0614619);
}

double NNfunction_ns_chi03_cL::synapse0x28e7320() {
   return (neuron0x28cb730()*-0.00957066);
}

double NNfunction_ns_chi03_cL::synapse0x28e7360() {
   return (neuron0x28cba70()*-0.0462319);
}

double NNfunction_ns_chi03_cL::synapse0x28e6df0() {
   return (neuron0x28cbdb0()*0.0395354);
}

double NNfunction_ns_chi03_cL::synapse0x28e6e30() {
   return (neuron0x28cc310()*-0.0136452);
}

double NNfunction_ns_chi03_cL::synapse0x28e74b0() {
   return (neuron0x28cc650()*0.0208473);
}

double NNfunction_ns_chi03_cL::synapse0x28e74f0() {
   return (neuron0x28cc990()*-0.0243413);
}

double NNfunction_ns_chi03_cL::synapse0x28e7530() {
   return (neuron0x28cccd0()*0.0281442);
}

double NNfunction_ns_chi03_cL::synapse0x28e7570() {
   return (neuron0x28cd010()*-0.00224697);
}

double NNfunction_ns_chi03_cL::synapse0x28e75b0() {
   return (neuron0x28cd350()*-0.013626);
}

double NNfunction_ns_chi03_cL::synapse0x28e75f0() {
   return (neuron0x28cd690()*0.0292507);
}

double NNfunction_ns_chi03_cL::synapse0x28e7970() {
   return (neuron0x28c8a40()*-0.137444);
}

double NNfunction_ns_chi03_cL::synapse0x28e79b0() {
   return (neuron0x28c8cf0()*0.0546526);
}

double NNfunction_ns_chi03_cL::synapse0x28e79f0() {
   return (neuron0x28c9030()*0.710842);
}

double NNfunction_ns_chi03_cL::synapse0x28e7a30() {
   return (neuron0x28c9370()*-2.41218);
}

double NNfunction_ns_chi03_cL::synapse0x28e7a70() {
   return (neuron0x28c96b0()*-0.254103);
}

double NNfunction_ns_chi03_cL::synapse0x28e7ab0() {
   return (neuron0x28c99f0()*-0.758711);
}

double NNfunction_ns_chi03_cL::synapse0x28e7af0() {
   return (neuron0x28c9d30()*-0.128072);
}

double NNfunction_ns_chi03_cL::synapse0x28e7b30() {
   return (neuron0x28ca070()*-0.29178);
}

double NNfunction_ns_chi03_cL::synapse0x28e7b70() {
   return (neuron0x28ca3b0()*0.0326342);
}

double NNfunction_ns_chi03_cL::synapse0x28e7bb0() {
   return (neuron0x28ca6f0()*0.215642);
}

double NNfunction_ns_chi03_cL::synapse0x28e7bf0() {
   return (neuron0x28caa30()*0.136056);
}

double NNfunction_ns_chi03_cL::synapse0x28e7c30() {
   return (neuron0x28cad70()*-0.422649);
}

double NNfunction_ns_chi03_cL::synapse0x28e7c70() {
   return (neuron0x28cb0b0()*1.97894);
}

double NNfunction_ns_chi03_cL::synapse0x28e7cb0() {
   return (neuron0x28cb3f0()*0.29355);
}

double NNfunction_ns_chi03_cL::synapse0x28e7cf0() {
   return (neuron0x28cb730()*-0.0298103);
}

double NNfunction_ns_chi03_cL::synapse0x28e7d30() {
   return (neuron0x28cba70()*0.0841156);
}

double NNfunction_ns_chi03_cL::synapse0x28e77c0() {
   return (neuron0x28cbdb0()*0.503149);
}

double NNfunction_ns_chi03_cL::synapse0x28e7800() {
   return (neuron0x28cc310()*-0.29951);
}

double NNfunction_ns_chi03_cL::synapse0x28e7e80() {
   return (neuron0x28cc650()*-0.19744);
}

double NNfunction_ns_chi03_cL::synapse0x28e7ec0() {
   return (neuron0x28cc990()*-0.291682);
}

double NNfunction_ns_chi03_cL::synapse0x28e7f00() {
   return (neuron0x28cccd0()*-0.138808);
}

double NNfunction_ns_chi03_cL::synapse0x28e7f40() {
   return (neuron0x28cd010()*0.0684225);
}

double NNfunction_ns_chi03_cL::synapse0x28e7f80() {
   return (neuron0x28cd350()*-0.114005);
}

double NNfunction_ns_chi03_cL::synapse0x28e7fc0() {
   return (neuron0x28cd690()*0.0841722);
}

double NNfunction_ns_chi03_cL::synapse0x28e8340() {
   return (neuron0x28c8a40()*-0.170638);
}

double NNfunction_ns_chi03_cL::synapse0x28e8380() {
   return (neuron0x28c8cf0()*-0.419218);
}

double NNfunction_ns_chi03_cL::synapse0x28e83c0() {
   return (neuron0x28c9030()*-0.364043);
}

double NNfunction_ns_chi03_cL::synapse0x28e8400() {
   return (neuron0x28c9370()*-0.00288243);
}

double NNfunction_ns_chi03_cL::synapse0x28e8440() {
   return (neuron0x28c96b0()*0.0704418);
}

double NNfunction_ns_chi03_cL::synapse0x28e8480() {
   return (neuron0x28c99f0()*0.443829);
}

double NNfunction_ns_chi03_cL::synapse0x28e84c0() {
   return (neuron0x28c9d30()*0.567567);
}

double NNfunction_ns_chi03_cL::synapse0x28e8500() {
   return (neuron0x28ca070()*-0.153133);
}

double NNfunction_ns_chi03_cL::synapse0x28e8540() {
   return (neuron0x28ca3b0()*-0.76808);
}

double NNfunction_ns_chi03_cL::synapse0x28e8580() {
   return (neuron0x28ca6f0()*0.86566);
}

double NNfunction_ns_chi03_cL::synapse0x28e85c0() {
   return (neuron0x28caa30()*0.0658721);
}

double NNfunction_ns_chi03_cL::synapse0x28e8600() {
   return (neuron0x28cad70()*0.457076);
}

double NNfunction_ns_chi03_cL::synapse0x28e8640() {
   return (neuron0x28cb0b0()*-0.605157);
}

double NNfunction_ns_chi03_cL::synapse0x28e8680() {
   return (neuron0x28cb3f0()*-0.0781395);
}

double NNfunction_ns_chi03_cL::synapse0x28e86c0() {
   return (neuron0x28cb730()*0.126597);
}

double NNfunction_ns_chi03_cL::synapse0x28e8700() {
   return (neuron0x28cba70()*-2.23655);
}

double NNfunction_ns_chi03_cL::synapse0x28e8190() {
   return (neuron0x28cbdb0()*-0.619975);
}

double NNfunction_ns_chi03_cL::synapse0x28e81d0() {
   return (neuron0x28cc310()*0.173424);
}

double NNfunction_ns_chi03_cL::synapse0x28e8850() {
   return (neuron0x28cc650()*-0.338993);
}

double NNfunction_ns_chi03_cL::synapse0x28e8890() {
   return (neuron0x28cc990()*0.470883);
}

double NNfunction_ns_chi03_cL::synapse0x28e88d0() {
   return (neuron0x28cccd0()*-0.408312);
}

double NNfunction_ns_chi03_cL::synapse0x28e8910() {
   return (neuron0x28cd010()*0.190918);
}

double NNfunction_ns_chi03_cL::synapse0x28e8950() {
   return (neuron0x28cd350()*-0.469147);
}

double NNfunction_ns_chi03_cL::synapse0x28e8990() {
   return (neuron0x28cd690()*1.04149);
}

double NNfunction_ns_chi03_cL::synapse0x28e8d10() {
   return (neuron0x28c8a40()*0.316435);
}

double NNfunction_ns_chi03_cL::synapse0x28e8d50() {
   return (neuron0x28c8cf0()*0.146442);
}

double NNfunction_ns_chi03_cL::synapse0x28e8d90() {
   return (neuron0x28c9030()*0.0509429);
}

double NNfunction_ns_chi03_cL::synapse0x28e8dd0() {
   return (neuron0x28c9370()*-0.0847191);
}

double NNfunction_ns_chi03_cL::synapse0x28e8e10() {
   return (neuron0x28c96b0()*-0.380376);
}

double NNfunction_ns_chi03_cL::synapse0x28e8e50() {
   return (neuron0x28c99f0()*0.36342);
}

double NNfunction_ns_chi03_cL::synapse0x28e8e90() {
   return (neuron0x28c9d30()*0.186184);
}

double NNfunction_ns_chi03_cL::synapse0x28e8ed0() {
   return (neuron0x28ca070()*0.77136);
}

double NNfunction_ns_chi03_cL::synapse0x28e8f10() {
   return (neuron0x28ca3b0()*-0.400298);
}

double NNfunction_ns_chi03_cL::synapse0x28e8f50() {
   return (neuron0x28ca6f0()*0.907409);
}

double NNfunction_ns_chi03_cL::synapse0x28e8f90() {
   return (neuron0x28caa30()*0.366498);
}

double NNfunction_ns_chi03_cL::synapse0x28e8fd0() {
   return (neuron0x28cad70()*-0.191051);
}

double NNfunction_ns_chi03_cL::synapse0x28e9010() {
   return (neuron0x28cb0b0()*0.0252645);
}

double NNfunction_ns_chi03_cL::synapse0x28e9050() {
   return (neuron0x28cb3f0()*0.200462);
}

double NNfunction_ns_chi03_cL::synapse0x28e9090() {
   return (neuron0x28cb730()*-0.321979);
}

double NNfunction_ns_chi03_cL::synapse0x28e90d0() {
   return (neuron0x28cba70()*-0.991648);
}

double NNfunction_ns_chi03_cL::synapse0x28e8b60() {
   return (neuron0x28cbdb0()*-0.504404);
}

double NNfunction_ns_chi03_cL::synapse0x28e8ba0() {
   return (neuron0x28cc310()*0.0687014);
}

double NNfunction_ns_chi03_cL::synapse0x28e9220() {
   return (neuron0x28cc650()*-0.306529);
}

double NNfunction_ns_chi03_cL::synapse0x28e9260() {
   return (neuron0x28cc990()*0.452949);
}

double NNfunction_ns_chi03_cL::synapse0x28e92a0() {
   return (neuron0x28cccd0()*-0.0591612);
}

double NNfunction_ns_chi03_cL::synapse0x28e92e0() {
   return (neuron0x28cd010()*0.646765);
}

double NNfunction_ns_chi03_cL::synapse0x28e9320() {
   return (neuron0x28cd350()*-0.683565);
}

double NNfunction_ns_chi03_cL::synapse0x28e9360() {
   return (neuron0x28cd690()*-0.522509);
}

double NNfunction_ns_chi03_cL::synapse0x28e96e0() {
   return (neuron0x28c8a40()*0.0585623);
}

double NNfunction_ns_chi03_cL::synapse0x28e9720() {
   return (neuron0x28c8cf0()*-0.00236413);
}

double NNfunction_ns_chi03_cL::synapse0x28e9760() {
   return (neuron0x28c9030()*-1.15823);
}

double NNfunction_ns_chi03_cL::synapse0x28e97a0() {
   return (neuron0x28c9370()*0.0340114);
}

double NNfunction_ns_chi03_cL::synapse0x28e97e0() {
   return (neuron0x28c96b0()*0.0178787);
}

double NNfunction_ns_chi03_cL::synapse0x28e9820() {
   return (neuron0x28c99f0()*0.00598026);
}

double NNfunction_ns_chi03_cL::synapse0x28e9860() {
   return (neuron0x28c9d30()*0.000843693);
}

double NNfunction_ns_chi03_cL::synapse0x28e98a0() {
   return (neuron0x28ca070()*0.00482806);
}

double NNfunction_ns_chi03_cL::synapse0x28e98e0() {
   return (neuron0x28ca3b0()*0.00844547);
}

double NNfunction_ns_chi03_cL::synapse0x28e9920() {
   return (neuron0x28ca6f0()*-0.0149239);
}

double NNfunction_ns_chi03_cL::synapse0x28e9960() {
   return (neuron0x28caa30()*0.00633725);
}

double NNfunction_ns_chi03_cL::synapse0x28e99a0() {
   return (neuron0x28cad70()*-0.00227661);
}

double NNfunction_ns_chi03_cL::synapse0x28e99e0() {
   return (neuron0x28cb0b0()*0.483117);
}

double NNfunction_ns_chi03_cL::synapse0x28e9a20() {
   return (neuron0x28cb3f0()*0.00944474);
}

double NNfunction_ns_chi03_cL::synapse0x28e9a60() {
   return (neuron0x28cb730()*-0.0102649);
}

double NNfunction_ns_chi03_cL::synapse0x28e9aa0() {
   return (neuron0x28cba70()*-0.0289403);
}

double NNfunction_ns_chi03_cL::synapse0x28e9530() {
   return (neuron0x28cbdb0()*-0.0246499);
}

double NNfunction_ns_chi03_cL::synapse0x28e9570() {
   return (neuron0x28cc310()*-0.00211184);
}

double NNfunction_ns_chi03_cL::synapse0x28e9bf0() {
   return (neuron0x28cc650()*-0.0198077);
}

double NNfunction_ns_chi03_cL::synapse0x28e9c30() {
   return (neuron0x28cc990()*0.0204583);
}

double NNfunction_ns_chi03_cL::synapse0x28e9c70() {
   return (neuron0x28cccd0()*-0.00372036);
}

double NNfunction_ns_chi03_cL::synapse0x28e9cb0() {
   return (neuron0x28cd010()*-0.00603285);
}

double NNfunction_ns_chi03_cL::synapse0x28e9cf0() {
   return (neuron0x28cd350()*-0.0167581);
}

double NNfunction_ns_chi03_cL::synapse0x28e9d30() {
   return (neuron0x28cd690()*0.718645);
}

double NNfunction_ns_chi03_cL::synapse0x28ea0b0() {
   return (neuron0x28c8a40()*-0.00152004);
}

double NNfunction_ns_chi03_cL::synapse0x28ea0f0() {
   return (neuron0x28c8cf0()*0.0026563);
}

double NNfunction_ns_chi03_cL::synapse0x28ea130() {
   return (neuron0x28c9030()*-0.130224);
}

double NNfunction_ns_chi03_cL::synapse0x28ea170() {
   return (neuron0x28c9370()*-0.0117915);
}

double NNfunction_ns_chi03_cL::synapse0x28ea1b0() {
   return (neuron0x28c96b0()*-0.0690536);
}

double NNfunction_ns_chi03_cL::synapse0x28ea1f0() {
   return (neuron0x28c99f0()*-0.00576294);
}

double NNfunction_ns_chi03_cL::synapse0x28ea230() {
   return (neuron0x28c9d30()*-0.0498349);
}

double NNfunction_ns_chi03_cL::synapse0x28ea270() {
   return (neuron0x28ca070()*-0.0164374);
}

double NNfunction_ns_chi03_cL::synapse0x28ea2b0() {
   return (neuron0x28ca3b0()*-0.0203359);
}

double NNfunction_ns_chi03_cL::synapse0x28ea2f0() {
   return (neuron0x28ca6f0()*-0.000848285);
}

double NNfunction_ns_chi03_cL::synapse0x28ea330() {
   return (neuron0x28caa30()*0.00624273);
}

double NNfunction_ns_chi03_cL::synapse0x28ea370() {
   return (neuron0x28cad70()*0.066247);
}

double NNfunction_ns_chi03_cL::synapse0x28ea3b0() {
   return (neuron0x28cb0b0()*-0.0406775);
}

double NNfunction_ns_chi03_cL::synapse0x28ea3f0() {
   return (neuron0x28cb3f0()*-0.0453534);
}

double NNfunction_ns_chi03_cL::synapse0x28ea430() {
   return (neuron0x28cb730()*-0.019914);
}

double NNfunction_ns_chi03_cL::synapse0x28ea470() {
   return (neuron0x28cba70()*0.00105);
}

double NNfunction_ns_chi03_cL::synapse0x28e9f00() {
   return (neuron0x28cbdb0()*0.0425024);
}

double NNfunction_ns_chi03_cL::synapse0x28e9f40() {
   return (neuron0x28cc310()*0.0105483);
}

double NNfunction_ns_chi03_cL::synapse0x28ea5c0() {
   return (neuron0x28cc650()*-0.0251718);
}

double NNfunction_ns_chi03_cL::synapse0x28ea600() {
   return (neuron0x28cc990()*-0.0157179);
}

double NNfunction_ns_chi03_cL::synapse0x28ea640() {
   return (neuron0x28cccd0()*-0.0150855);
}

double NNfunction_ns_chi03_cL::synapse0x28ea680() {
   return (neuron0x28cd010()*-0.0282606);
}

double NNfunction_ns_chi03_cL::synapse0x28ea6c0() {
   return (neuron0x28cd350()*-0.00289308);
}

double NNfunction_ns_chi03_cL::synapse0x28ea700() {
   return (neuron0x28cd690()*-1.87817);
}

double NNfunction_ns_chi03_cL::synapse0x28eaa80() {
   return (neuron0x28c8a40()*0.941323);
}

double NNfunction_ns_chi03_cL::synapse0x28eaac0() {
   return (neuron0x28c8cf0()*-0.180511);
}

double NNfunction_ns_chi03_cL::synapse0x28eab00() {
   return (neuron0x28c9030()*-0.412078);
}

double NNfunction_ns_chi03_cL::synapse0x28eab40() {
   return (neuron0x28c9370()*-1.43281);
}

double NNfunction_ns_chi03_cL::synapse0x28eab80() {
   return (neuron0x28c96b0()*0.469135);
}

double NNfunction_ns_chi03_cL::synapse0x28eabc0() {
   return (neuron0x28c99f0()*0.381522);
}

double NNfunction_ns_chi03_cL::synapse0x28eac00() {
   return (neuron0x28c9d30()*-0.836174);
}

double NNfunction_ns_chi03_cL::synapse0x28eac40() {
   return (neuron0x28ca070()*0.302466);
}

double NNfunction_ns_chi03_cL::synapse0x28eac80() {
   return (neuron0x28ca3b0()*0.508002);
}

double NNfunction_ns_chi03_cL::synapse0x28eacc0() {
   return (neuron0x28ca6f0()*-1.00746);
}

double NNfunction_ns_chi03_cL::synapse0x28ead00() {
   return (neuron0x28caa30()*-0.456284);
}

double NNfunction_ns_chi03_cL::synapse0x28ead40() {
   return (neuron0x28cad70()*-0.76335);
}

double NNfunction_ns_chi03_cL::synapse0x28ead80() {
   return (neuron0x28cb0b0()*-0.639204);
}

double NNfunction_ns_chi03_cL::synapse0x28eadc0() {
   return (neuron0x28cb3f0()*-0.00707493);
}

double NNfunction_ns_chi03_cL::synapse0x28eae00() {
   return (neuron0x28cb730()*-0.739386);
}

double NNfunction_ns_chi03_cL::synapse0x28eae40() {
   return (neuron0x28cba70()*0.341938);
}

double NNfunction_ns_chi03_cL::synapse0x28ea8d0() {
   return (neuron0x28cbdb0()*0.134883);
}

double NNfunction_ns_chi03_cL::synapse0x28ea910() {
   return (neuron0x28cc310()*-0.583688);
}

double NNfunction_ns_chi03_cL::synapse0x28eaf90() {
   return (neuron0x28cc650()*-0.602741);
}

double NNfunction_ns_chi03_cL::synapse0x28eafd0() {
   return (neuron0x28cc990()*-0.654323);
}

double NNfunction_ns_chi03_cL::synapse0x28eb010() {
   return (neuron0x28cccd0()*0.335861);
}

double NNfunction_ns_chi03_cL::synapse0x28eb050() {
   return (neuron0x28cd010()*-0.316159);
}

double NNfunction_ns_chi03_cL::synapse0x28eb090() {
   return (neuron0x28cd350()*0.135539);
}

double NNfunction_ns_chi03_cL::synapse0x28eb0d0() {
   return (neuron0x28cd690()*-0.622212);
}

double NNfunction_ns_chi03_cL::synapse0x28d3b80() {
   return (neuron0x28c8a40()*-0.0174134);
}

double NNfunction_ns_chi03_cL::synapse0x28d3bc0() {
   return (neuron0x28c8cf0()*0.00780317);
}

double NNfunction_ns_chi03_cL::synapse0x28d3c00() {
   return (neuron0x28c9030()*-4.10374);
}

double NNfunction_ns_chi03_cL::synapse0x28d3c40() {
   return (neuron0x28c9370()*-0.00131806);
}

double NNfunction_ns_chi03_cL::synapse0x28d3c80() {
   return (neuron0x28c96b0()*-0.000722317);
}

double NNfunction_ns_chi03_cL::synapse0x28d3cc0() {
   return (neuron0x28c99f0()*-0.00514646);
}

double NNfunction_ns_chi03_cL::synapse0x28d3d00() {
   return (neuron0x28c9d30()*0.0122516);
}

double NNfunction_ns_chi03_cL::synapse0x28d3d40() {
   return (neuron0x28ca070()*-0.0167224);
}

double NNfunction_ns_chi03_cL::synapse0x28eb860() {
   return (neuron0x28ca3b0()*0.00196939);
}

double NNfunction_ns_chi03_cL::synapse0x28eb8a0() {
   return (neuron0x28ca6f0()*-0.00684706);
}

double NNfunction_ns_chi03_cL::synapse0x28eb8e0() {
   return (neuron0x28caa30()*-0.0193783);
}

double NNfunction_ns_chi03_cL::synapse0x28eb920() {
   return (neuron0x28cad70()*-0.0378723);
}

double NNfunction_ns_chi03_cL::synapse0x28eb960() {
   return (neuron0x28cb0b0()*0.00845388);
}

double NNfunction_ns_chi03_cL::synapse0x28eb9a0() {
   return (neuron0x28cb3f0()*0.00333583);
}

double NNfunction_ns_chi03_cL::synapse0x28eb9e0() {
   return (neuron0x28cb730()*0.0215804);
}

double NNfunction_ns_chi03_cL::synapse0x28eba20() {
   return (neuron0x28cba70()*0.00264804);
}

double NNfunction_ns_chi03_cL::synapse0x28eb2a0() {
   return (neuron0x28cbdb0()*-0.00572781);
}

double NNfunction_ns_chi03_cL::synapse0x28eb2e0() {
   return (neuron0x28cc310()*-0.000831943);
}

double NNfunction_ns_chi03_cL::synapse0x28ebb70() {
   return (neuron0x28cc650()*0.0052175);
}

double NNfunction_ns_chi03_cL::synapse0x28ebbb0() {
   return (neuron0x28cc990()*-0.00594812);
}

double NNfunction_ns_chi03_cL::synapse0x28ebbf0() {
   return (neuron0x28cccd0()*0.0134336);
}

double NNfunction_ns_chi03_cL::synapse0x28ebc30() {
   return (neuron0x28cd010()*-0.0068506);
}

double NNfunction_ns_chi03_cL::synapse0x28ebc70() {
   return (neuron0x28cd350()*-0.0102812);
}

double NNfunction_ns_chi03_cL::synapse0x28ebcb0() {
   return (neuron0x28cd690()*-1.5455);
}

double NNfunction_ns_chi03_cL::synapse0x28ec030() {
   return (neuron0x28c8a40()*0.119251);
}

double NNfunction_ns_chi03_cL::synapse0x28ec070() {
   return (neuron0x28c8cf0()*0.851522);
}

double NNfunction_ns_chi03_cL::synapse0x28ec0b0() {
   return (neuron0x28c9030()*-0.100256);
}

double NNfunction_ns_chi03_cL::synapse0x28ec0f0() {
   return (neuron0x28c9370()*0.21055);
}

double NNfunction_ns_chi03_cL::synapse0x28ec130() {
   return (neuron0x28c96b0()*-0.201497);
}

double NNfunction_ns_chi03_cL::synapse0x28ec170() {
   return (neuron0x28c99f0()*0.264046);
}

double NNfunction_ns_chi03_cL::synapse0x28ec1b0() {
   return (neuron0x28c9d30()*-0.201041);
}

double NNfunction_ns_chi03_cL::synapse0x28ec1f0() {
   return (neuron0x28ca070()*0.355048);
}

double NNfunction_ns_chi03_cL::synapse0x28ec230() {
   return (neuron0x28ca3b0()*0.26895);
}

double NNfunction_ns_chi03_cL::synapse0x28ec270() {
   return (neuron0x28ca6f0()*0.0313451);
}

double NNfunction_ns_chi03_cL::synapse0x28ec2b0() {
   return (neuron0x28caa30()*-0.134963);
}

double NNfunction_ns_chi03_cL::synapse0x28ec2f0() {
   return (neuron0x28cad70()*-0.119846);
}

double NNfunction_ns_chi03_cL::synapse0x28ec330() {
   return (neuron0x28cb0b0()*-1.16841);
}

double NNfunction_ns_chi03_cL::synapse0x28ec370() {
   return (neuron0x28cb3f0()*0.00868465);
}

double NNfunction_ns_chi03_cL::synapse0x28ec3b0() {
   return (neuron0x28cb730()*0.547665);
}

double NNfunction_ns_chi03_cL::synapse0x28ec3f0() {
   return (neuron0x28cba70()*-0.0496189);
}

double NNfunction_ns_chi03_cL::synapse0x28ebe80() {
   return (neuron0x28cbdb0()*-0.10488);
}

double NNfunction_ns_chi03_cL::synapse0x28ebec0() {
   return (neuron0x28cc310()*-0.307115);
}

double NNfunction_ns_chi03_cL::synapse0x28ec540() {
   return (neuron0x28cc650()*0.137994);
}

double NNfunction_ns_chi03_cL::synapse0x28ec580() {
   return (neuron0x28cc990()*0.0716944);
}

double NNfunction_ns_chi03_cL::synapse0x28ec5c0() {
   return (neuron0x28cccd0()*0.0162727);
}

double NNfunction_ns_chi03_cL::synapse0x28ec600() {
   return (neuron0x28cd010()*0.130074);
}

double NNfunction_ns_chi03_cL::synapse0x28ec640() {
   return (neuron0x28cd350()*-0.00737823);
}

double NNfunction_ns_chi03_cL::synapse0x28ec680() {
   return (neuron0x28cd690()*0.11376);
}

double NNfunction_ns_chi03_cL::synapse0x28eca00() {
   return (neuron0x28c8a40()*0.0328108);
}

double NNfunction_ns_chi03_cL::synapse0x28eca40() {
   return (neuron0x28c8cf0()*-0.00412518);
}

double NNfunction_ns_chi03_cL::synapse0x28eca80() {
   return (neuron0x28c9030()*-3.10814);
}

double NNfunction_ns_chi03_cL::synapse0x28ecac0() {
   return (neuron0x28c9370()*0.027714);
}

double NNfunction_ns_chi03_cL::synapse0x28ecb00() {
   return (neuron0x28c96b0()*0.0240407);
}

double NNfunction_ns_chi03_cL::synapse0x28ecb40() {
   return (neuron0x28c99f0()*-0.0149896);
}

double NNfunction_ns_chi03_cL::synapse0x28ecb80() {
   return (neuron0x28c9d30()*0.0052616);
}

double NNfunction_ns_chi03_cL::synapse0x28ecbc0() {
   return (neuron0x28ca070()*0.00891232);
}

double NNfunction_ns_chi03_cL::synapse0x28ecc00() {
   return (neuron0x28ca3b0()*-0.00189119);
}

double NNfunction_ns_chi03_cL::synapse0x28ecc40() {
   return (neuron0x28ca6f0()*0.012564);
}

double NNfunction_ns_chi03_cL::synapse0x28ecc80() {
   return (neuron0x28caa30()*-0.0273428);
}

double NNfunction_ns_chi03_cL::synapse0x28eccc0() {
   return (neuron0x28cad70()*0.0208318);
}

double NNfunction_ns_chi03_cL::synapse0x28ecd00() {
   return (neuron0x28cb0b0()*0.229525);
}

double NNfunction_ns_chi03_cL::synapse0x28ecd40() {
   return (neuron0x28cb3f0()*-0.0341075);
}

double NNfunction_ns_chi03_cL::synapse0x28ecd80() {
   return (neuron0x28cb730()*-0.0135747);
}

double NNfunction_ns_chi03_cL::synapse0x28ecdc0() {
   return (neuron0x28cba70()*-0.0154031);
}

double NNfunction_ns_chi03_cL::synapse0x28ec850() {
   return (neuron0x28cbdb0()*-0.0225638);
}

double NNfunction_ns_chi03_cL::synapse0x28ec890() {
   return (neuron0x28cc310()*-0.000608322);
}

double NNfunction_ns_chi03_cL::synapse0x28dd3c0() {
   return (neuron0x28cc650()*2.53637e-05);
}

double NNfunction_ns_chi03_cL::synapse0x28dd400() {
   return (neuron0x28cc990()*0.0104165);
}

double NNfunction_ns_chi03_cL::synapse0x28dd440() {
   return (neuron0x28cccd0()*0.0304185);
}

double NNfunction_ns_chi03_cL::synapse0x28dd480() {
   return (neuron0x28cd010()*-0.0126197);
}

double NNfunction_ns_chi03_cL::synapse0x28dd4c0() {
   return (neuron0x28cd350()*-0.0258203);
}

double NNfunction_ns_chi03_cL::synapse0x28dd500() {
   return (neuron0x28cd690()*1.21788);
}

double NNfunction_ns_chi03_cL::synapse0x28dd880() {
   return (neuron0x28c8a40()*0.134681);
}

double NNfunction_ns_chi03_cL::synapse0x28dd8c0() {
   return (neuron0x28c8cf0()*-0.0484066);
}

double NNfunction_ns_chi03_cL::synapse0x28dd900() {
   return (neuron0x28c9030()*0.373797);
}

double NNfunction_ns_chi03_cL::synapse0x28dd940() {
   return (neuron0x28c9370()*-0.458992);
}

double NNfunction_ns_chi03_cL::synapse0x28dd980() {
   return (neuron0x28c96b0()*0.507706);
}

double NNfunction_ns_chi03_cL::synapse0x28dd9c0() {
   return (neuron0x28c99f0()*0.119553);
}

double NNfunction_ns_chi03_cL::synapse0x28dda00() {
   return (neuron0x28c9d30()*-0.354335);
}

double NNfunction_ns_chi03_cL::synapse0x28dda40() {
   return (neuron0x28ca070()*-0.592625);
}

double NNfunction_ns_chi03_cL::synapse0x28dda80() {
   return (neuron0x28ca3b0()*0.462365);
}

double NNfunction_ns_chi03_cL::synapse0x28ddac0() {
   return (neuron0x28ca6f0()*-0.115226);
}

double NNfunction_ns_chi03_cL::synapse0x28ddb00() {
   return (neuron0x28caa30()*0.253932);
}

double NNfunction_ns_chi03_cL::synapse0x28ddb40() {
   return (neuron0x28cad70()*-0.172725);
}

double NNfunction_ns_chi03_cL::synapse0x28ddb80() {
   return (neuron0x28cb0b0()*-0.0739155);
}

double NNfunction_ns_chi03_cL::synapse0x28ddbc0() {
   return (neuron0x28cb3f0()*0.161992);
}

double NNfunction_ns_chi03_cL::synapse0x28ddc00() {
   return (neuron0x28cb730()*-0.584329);
}

double NNfunction_ns_chi03_cL::synapse0x28ddc40() {
   return (neuron0x28cba70()*-0.080828);
}

double NNfunction_ns_chi03_cL::synapse0x28dd6d0() {
   return (neuron0x28cbdb0()*0.370983);
}

double NNfunction_ns_chi03_cL::synapse0x28dd710() {
   return (neuron0x28cc310()*-0.0703847);
}

double NNfunction_ns_chi03_cL::synapse0x28ddd90() {
   return (neuron0x28cc650()*0.499563);
}

double NNfunction_ns_chi03_cL::synapse0x28dddd0() {
   return (neuron0x28cc990()*-0.117251);
}

double NNfunction_ns_chi03_cL::synapse0x28dde10() {
   return (neuron0x28cccd0()*-0.0843301);
}

double NNfunction_ns_chi03_cL::synapse0x28dde50() {
   return (neuron0x28cd010()*-0.0342818);
}

double NNfunction_ns_chi03_cL::synapse0x28dde90() {
   return (neuron0x28cd350()*0.473815);
}

double NNfunction_ns_chi03_cL::synapse0x28dded0() {
   return (neuron0x28cd690()*-0.899974);
}

double NNfunction_ns_chi03_cL::synapse0x28de250() {
   return (neuron0x28c8a40()*-0.00927148);
}

double NNfunction_ns_chi03_cL::synapse0x28de290() {
   return (neuron0x28c8cf0()*0.0112109);
}

double NNfunction_ns_chi03_cL::synapse0x28de2d0() {
   return (neuron0x28c9030()*0.187401);
}

double NNfunction_ns_chi03_cL::synapse0x28de310() {
   return (neuron0x28c9370()*-0.674852);
}

double NNfunction_ns_chi03_cL::synapse0x28de350() {
   return (neuron0x28c96b0()*-0.0851812);
}

double NNfunction_ns_chi03_cL::synapse0x28de390() {
   return (neuron0x28c99f0()*-0.0415374);
}

double NNfunction_ns_chi03_cL::synapse0x28de3d0() {
   return (neuron0x28c9d30()*-0.0135783);
}

double NNfunction_ns_chi03_cL::synapse0x28de410() {
   return (neuron0x28ca070()*0.0409744);
}

double NNfunction_ns_chi03_cL::synapse0x28de450() {
   return (neuron0x28ca3b0()*0.0274618);
}

double NNfunction_ns_chi03_cL::synapse0x28de490() {
   return (neuron0x28ca6f0()*-0.000174321);
}

double NNfunction_ns_chi03_cL::synapse0x28de4d0() {
   return (neuron0x28caa30()*-0.0439128);
}

double NNfunction_ns_chi03_cL::synapse0x28de510() {
   return (neuron0x28cad70()*0.0563331);
}

double NNfunction_ns_chi03_cL::synapse0x28de550() {
   return (neuron0x28cb0b0()*0.235667);
}

double NNfunction_ns_chi03_cL::synapse0x28de590() {
   return (neuron0x28cb3f0()*-0.0116731);
}

double NNfunction_ns_chi03_cL::synapse0x28de5d0() {
   return (neuron0x28cb730()*-0.0846362);
}

double NNfunction_ns_chi03_cL::synapse0x28de610() {
   return (neuron0x28cba70()*0.00688108);
}

double NNfunction_ns_chi03_cL::synapse0x28de0a0() {
   return (neuron0x28cbdb0()*-0.102503);
}

double NNfunction_ns_chi03_cL::synapse0x28de0e0() {
   return (neuron0x28cc310()*0.051118);
}

double NNfunction_ns_chi03_cL::synapse0x28de760() {
   return (neuron0x28cc650()*0.0133316);
}

double NNfunction_ns_chi03_cL::synapse0x28de7a0() {
   return (neuron0x28cc990()*0.00368369);
}

double NNfunction_ns_chi03_cL::synapse0x28de7e0() {
   return (neuron0x28cccd0()*0.0786609);
}

double NNfunction_ns_chi03_cL::synapse0x28de820() {
   return (neuron0x28cd010()*-0.0155264);
}

double NNfunction_ns_chi03_cL::synapse0x28de860() {
   return (neuron0x28cd350()*0.0165674);
}

double NNfunction_ns_chi03_cL::synapse0x28de8a0() {
   return (neuron0x28cd690()*0.0148885);
}

double NNfunction_ns_chi03_cL::synapse0x28dec20() {
   return (neuron0x28c8a40()*-0.83235);
}

double NNfunction_ns_chi03_cL::synapse0x28dec60() {
   return (neuron0x28c8cf0()*0.178984);
}

double NNfunction_ns_chi03_cL::synapse0x28deca0() {
   return (neuron0x28c9030()*-0.365057);
}

double NNfunction_ns_chi03_cL::synapse0x28dece0() {
   return (neuron0x28c9370()*1.13426);
}

double NNfunction_ns_chi03_cL::synapse0x28ded20() {
   return (neuron0x28c96b0()*-0.489206);
}

double NNfunction_ns_chi03_cL::synapse0x28ded60() {
   return (neuron0x28c99f0()*-0.150445);
}

double NNfunction_ns_chi03_cL::synapse0x28deda0() {
   return (neuron0x28c9d30()*-0.479691);
}

double NNfunction_ns_chi03_cL::synapse0x28dede0() {
   return (neuron0x28ca070()*0.630419);
}

double NNfunction_ns_chi03_cL::synapse0x28dee20() {
   return (neuron0x28ca3b0()*-1.10992);
}

double NNfunction_ns_chi03_cL::synapse0x28dee60() {
   return (neuron0x28ca6f0()*-0.791094);
}

double NNfunction_ns_chi03_cL::synapse0x28deea0() {
   return (neuron0x28caa30()*-0.381283);
}

double NNfunction_ns_chi03_cL::synapse0x28deee0() {
   return (neuron0x28cad70()*-1.27014);
}

double NNfunction_ns_chi03_cL::synapse0x28def20() {
   return (neuron0x28cb0b0()*0.381052);
}

double NNfunction_ns_chi03_cL::synapse0x28def60() {
   return (neuron0x28cb3f0()*0.499059);
}

double NNfunction_ns_chi03_cL::synapse0x28defa0() {
   return (neuron0x28cb730()*0.719762);
}

double NNfunction_ns_chi03_cL::synapse0x28defe0() {
   return (neuron0x28cba70()*-0.010343);
}

double NNfunction_ns_chi03_cL::synapse0x28dea70() {
   return (neuron0x28cbdb0()*-1.07701);
}

double NNfunction_ns_chi03_cL::synapse0x28deab0() {
   return (neuron0x28cc310()*-0.321152);
}

double NNfunction_ns_chi03_cL::synapse0x28df130() {
   return (neuron0x28cc650()*0.700934);
}

double NNfunction_ns_chi03_cL::synapse0x28df170() {
   return (neuron0x28cc990()*-0.200478);
}

double NNfunction_ns_chi03_cL::synapse0x28df1b0() {
   return (neuron0x28cccd0()*-0.824588);
}

double NNfunction_ns_chi03_cL::synapse0x28df1f0() {
   return (neuron0x28cd010()*0.864358);
}

double NNfunction_ns_chi03_cL::synapse0x28df230() {
   return (neuron0x28cd350()*-0.114869);
}

double NNfunction_ns_chi03_cL::synapse0x28df270() {
   return (neuron0x28cd690()*-0.837051);
}

double NNfunction_ns_chi03_cL::synapse0x28f1140() {
   return (neuron0x28c8a40()*-0.0153217);
}

double NNfunction_ns_chi03_cL::synapse0x28f1180() {
   return (neuron0x28c8cf0()*-0.0149106);
}

double NNfunction_ns_chi03_cL::synapse0x28f11c0() {
   return (neuron0x28c9030()*0.199926);
}

double NNfunction_ns_chi03_cL::synapse0x28f1200() {
   return (neuron0x28c9370()*0.831523);
}

double NNfunction_ns_chi03_cL::synapse0x28f1240() {
   return (neuron0x28c96b0()*-0.0187152);
}

double NNfunction_ns_chi03_cL::synapse0x28f1280() {
   return (neuron0x28c99f0()*-0.138553);
}

double NNfunction_ns_chi03_cL::synapse0x28f12c0() {
   return (neuron0x28c9d30()*-0.013271);
}

double NNfunction_ns_chi03_cL::synapse0x28f1300() {
   return (neuron0x28ca070()*0.0261245);
}

double NNfunction_ns_chi03_cL::synapse0x28f1340() {
   return (neuron0x28ca3b0()*0.00487371);
}

double NNfunction_ns_chi03_cL::synapse0x28f1380() {
   return (neuron0x28ca6f0()*-0.00819113);
}

double NNfunction_ns_chi03_cL::synapse0x28f13c0() {
   return (neuron0x28caa30()*-0.0421341);
}

double NNfunction_ns_chi03_cL::synapse0x28f1400() {
   return (neuron0x28cad70()*0.102567);
}

double NNfunction_ns_chi03_cL::synapse0x28f1440() {
   return (neuron0x28cb0b0()*-0.294789);
}

double NNfunction_ns_chi03_cL::synapse0x28f1480() {
   return (neuron0x28cb3f0()*-0.057875);
}

double NNfunction_ns_chi03_cL::synapse0x28f14c0() {
   return (neuron0x28cb730()*-0.0125799);
}

double NNfunction_ns_chi03_cL::synapse0x28f1500() {
   return (neuron0x28cba70()*0.110792);
}

double NNfunction_ns_chi03_cL::synapse0x28df2b0() {
   return (neuron0x28cbdb0()*-0.161657);
}

double NNfunction_ns_chi03_cL::synapse0x28df2f0() {
   return (neuron0x28cc310()*0.0191721);
}

double NNfunction_ns_chi03_cL::synapse0x28f1650() {
   return (neuron0x28cc650()*0.0270962);
}

double NNfunction_ns_chi03_cL::synapse0x28f1690() {
   return (neuron0x28cc990()*0.0178374);
}

double NNfunction_ns_chi03_cL::synapse0x28f16d0() {
   return (neuron0x28cccd0()*0.00520013);
}

double NNfunction_ns_chi03_cL::synapse0x28f1710() {
   return (neuron0x28cd010()*0.0120371);
}

double NNfunction_ns_chi03_cL::synapse0x28f1750() {
   return (neuron0x28cd350()*-0.00763511);
}

double NNfunction_ns_chi03_cL::synapse0x28f1790() {
   return (neuron0x28cd690()*0.0424019);
}

double NNfunction_ns_chi03_cL::synapse0x28f1b10() {
   return (neuron0x28c8a40()*-0.118225);
}

double NNfunction_ns_chi03_cL::synapse0x28f1b50() {
   return (neuron0x28c8cf0()*-8.77339);
}

double NNfunction_ns_chi03_cL::synapse0x28f1b90() {
   return (neuron0x28c9030()*-0.537964);
}

double NNfunction_ns_chi03_cL::synapse0x28f1bd0() {
   return (neuron0x28c9370()*-0.0339038);
}

double NNfunction_ns_chi03_cL::synapse0x28f1c10() {
   return (neuron0x28c96b0()*-0.0704422);
}

double NNfunction_ns_chi03_cL::synapse0x28f1c50() {
   return (neuron0x28c99f0()*-0.0372656);
}

double NNfunction_ns_chi03_cL::synapse0x28f1c90() {
   return (neuron0x28c9d30()*0.0837959);
}

double NNfunction_ns_chi03_cL::synapse0x28f1cd0() {
   return (neuron0x28ca070()*0.0207236);
}

double NNfunction_ns_chi03_cL::synapse0x28f1d10() {
   return (neuron0x28ca3b0()*0.0187936);
}

double NNfunction_ns_chi03_cL::synapse0x28f1d50() {
   return (neuron0x28ca6f0()*0.0227457);
}

double NNfunction_ns_chi03_cL::synapse0x28f1d90() {
   return (neuron0x28caa30()*0.0580041);
}

double NNfunction_ns_chi03_cL::synapse0x28f1dd0() {
   return (neuron0x28cad70()*-0.0390948);
}

double NNfunction_ns_chi03_cL::synapse0x28f1e10() {
   return (neuron0x28cb0b0()*0.156361);
}

double NNfunction_ns_chi03_cL::synapse0x28f1e50() {
   return (neuron0x28cb3f0()*0.024815);
}

double NNfunction_ns_chi03_cL::synapse0x28f1e90() {
   return (neuron0x28cb730()*-0.0665077);
}

double NNfunction_ns_chi03_cL::synapse0x28f1ed0() {
   return (neuron0x28cba70()*-0.0406056);
}

double NNfunction_ns_chi03_cL::synapse0x28f1960() {
   return (neuron0x28cbdb0()*-0.0147046);
}

double NNfunction_ns_chi03_cL::synapse0x28f19a0() {
   return (neuron0x28cc310()*-0.0354264);
}

double NNfunction_ns_chi03_cL::synapse0x28f2020() {
   return (neuron0x28cc650()*-0.0175988);
}

double NNfunction_ns_chi03_cL::synapse0x28f2060() {
   return (neuron0x28cc990()*0.00270899);
}

double NNfunction_ns_chi03_cL::synapse0x28f20a0() {
   return (neuron0x28cccd0()*0.0458085);
}

double NNfunction_ns_chi03_cL::synapse0x28f20e0() {
   return (neuron0x28cd010()*0.00209448);
}

double NNfunction_ns_chi03_cL::synapse0x28f2120() {
   return (neuron0x28cd350()*-0.033228);
}

double NNfunction_ns_chi03_cL::synapse0x28f2160() {
   return (neuron0x28cd690()*-1.84623);
}

double NNfunction_ns_chi03_cL::synapse0x28f24e0() {
   return (neuron0x28c8a40()*0.0021123);
}

double NNfunction_ns_chi03_cL::synapse0x28f2520() {
   return (neuron0x28c8cf0()*0.0114923);
}

double NNfunction_ns_chi03_cL::synapse0x28f2560() {
   return (neuron0x28c9030()*-0.614902);
}

double NNfunction_ns_chi03_cL::synapse0x28f25a0() {
   return (neuron0x28c9370()*0.0422561);
}

double NNfunction_ns_chi03_cL::synapse0x28f25e0() {
   return (neuron0x28c96b0()*-0.0207761);
}

double NNfunction_ns_chi03_cL::synapse0x28f2620() {
   return (neuron0x28c99f0()*0.00133425);
}

double NNfunction_ns_chi03_cL::synapse0x28f2660() {
   return (neuron0x28c9d30()*0.0164905);
}

double NNfunction_ns_chi03_cL::synapse0x28f26a0() {
   return (neuron0x28ca070()*0.0243017);
}

double NNfunction_ns_chi03_cL::synapse0x28f26e0() {
   return (neuron0x28ca3b0()*-0.0118329);
}

double NNfunction_ns_chi03_cL::synapse0x28f2720() {
   return (neuron0x28ca6f0()*0.00559444);
}

double NNfunction_ns_chi03_cL::synapse0x28f2760() {
   return (neuron0x28caa30()*0.000955758);
}

double NNfunction_ns_chi03_cL::synapse0x28f27a0() {
   return (neuron0x28cad70()*0.00362986);
}

double NNfunction_ns_chi03_cL::synapse0x28f27e0() {
   return (neuron0x28cb0b0()*0.430245);
}

double NNfunction_ns_chi03_cL::synapse0x28f2820() {
   return (neuron0x28cb3f0()*0.0191719);
}

double NNfunction_ns_chi03_cL::synapse0x28f2860() {
   return (neuron0x28cb730()*-0.0151284);
}

double NNfunction_ns_chi03_cL::synapse0x28f28a0() {
   return (neuron0x28cba70()*0.00384235);
}

double NNfunction_ns_chi03_cL::synapse0x28f2330() {
   return (neuron0x28cbdb0()*0.00494043);
}

double NNfunction_ns_chi03_cL::synapse0x28f2370() {
   return (neuron0x28cc310()*0.00358254);
}

double NNfunction_ns_chi03_cL::synapse0x28f29f0() {
   return (neuron0x28cc650()*0.0165387);
}

double NNfunction_ns_chi03_cL::synapse0x28f2a30() {
   return (neuron0x28cc990()*0.00160453);
}

double NNfunction_ns_chi03_cL::synapse0x28f2a70() {
   return (neuron0x28cccd0()*0.0201809);
}

double NNfunction_ns_chi03_cL::synapse0x28f2ab0() {
   return (neuron0x28cd010()*0.00464005);
}

double NNfunction_ns_chi03_cL::synapse0x28f2af0() {
   return (neuron0x28cd350()*0.0056096);
}

double NNfunction_ns_chi03_cL::synapse0x28f2b30() {
   return (neuron0x28cd690()*-0.126376);
}

double NNfunction_ns_chi03_cL::synapse0x28f2eb0() {
   return (neuron0x28c8a40()*0.0176872);
}

double NNfunction_ns_chi03_cL::synapse0x28f2ef0() {
   return (neuron0x28c8cf0()*-10.6636);
}

double NNfunction_ns_chi03_cL::synapse0x28f2f30() {
   return (neuron0x28c9030()*-0.467129);
}

double NNfunction_ns_chi03_cL::synapse0x28f2f70() {
   return (neuron0x28c9370()*0.0588357);
}

double NNfunction_ns_chi03_cL::synapse0x28f2fb0() {
   return (neuron0x28c96b0()*0.0623053);
}

double NNfunction_ns_chi03_cL::synapse0x28f2ff0() {
   return (neuron0x28c99f0()*0.0114963);
}

double NNfunction_ns_chi03_cL::synapse0x28f3030() {
   return (neuron0x28c9d30()*-0.00825968);
}

double NNfunction_ns_chi03_cL::synapse0x28f3070() {
   return (neuron0x28ca070()*-0.0409419);
}

double NNfunction_ns_chi03_cL::synapse0x28f30b0() {
   return (neuron0x28ca3b0()*-0.0234461);
}

double NNfunction_ns_chi03_cL::synapse0x28f30f0() {
   return (neuron0x28ca6f0()*-0.0347981);
}

double NNfunction_ns_chi03_cL::synapse0x28f3130() {
   return (neuron0x28caa30()*-0.0212854);
}

double NNfunction_ns_chi03_cL::synapse0x28f3170() {
   return (neuron0x28cad70()*-0.0158319);
}

double NNfunction_ns_chi03_cL::synapse0x28f31b0() {
   return (neuron0x28cb0b0()*0.295956);
}

double NNfunction_ns_chi03_cL::synapse0x28f31f0() {
   return (neuron0x28cb3f0()*-0.00035291);
}

double NNfunction_ns_chi03_cL::synapse0x28f3230() {
   return (neuron0x28cb730()*0.0230544);
}

double NNfunction_ns_chi03_cL::synapse0x28f3270() {
   return (neuron0x28cba70()*-0.0237929);
}

double NNfunction_ns_chi03_cL::synapse0x28f2d00() {
   return (neuron0x28cbdb0()*0.00955308);
}

double NNfunction_ns_chi03_cL::synapse0x28f2d40() {
   return (neuron0x28cc310()*-0.0111648);
}

double NNfunction_ns_chi03_cL::synapse0x28f33c0() {
   return (neuron0x28cc650()*0.00568412);
}

double NNfunction_ns_chi03_cL::synapse0x28f3400() {
   return (neuron0x28cc990()*-0.0072776);
}

double NNfunction_ns_chi03_cL::synapse0x28f3440() {
   return (neuron0x28cccd0()*-0.00759682);
}

double NNfunction_ns_chi03_cL::synapse0x28f3480() {
   return (neuron0x28cd010()*-0.00562005);
}

double NNfunction_ns_chi03_cL::synapse0x28f34c0() {
   return (neuron0x28cd350()*0.0330028);
}

double NNfunction_ns_chi03_cL::synapse0x28f3500() {
   return (neuron0x28cd690()*3.06627);
}

double NNfunction_ns_chi03_cL::synapse0x2693370() {
   return (neuron0x28cdb00()*-0.575737);
}

double NNfunction_ns_chi03_cL::synapse0x26933b0() {
   return (neuron0x28ce340()*0.23466);
}

double NNfunction_ns_chi03_cL::synapse0x28cfeb0() {
   return (neuron0x28cee20()*-0.667337);
}

double NNfunction_ns_chi03_cL::synapse0x28cfef0() {
   return (neuron0x28ce8c0()*-1.21698);
}

double NNfunction_ns_chi03_cL::synapse0x28d1980() {
   return (neuron0x28cfc00()*-0.712231);
}

double NNfunction_ns_chi03_cL::synapse0x28d19c0() {
   return (neuron0x28d16d0()*-0.269303);
}

double NNfunction_ns_chi03_cL::synapse0x28d2750() {
   return (neuron0x28d24a0()*-0.396852);
}

double NNfunction_ns_chi03_cL::synapse0x28d2790() {
   return (neuron0x28d2e70()*-0.403392);
}

double NNfunction_ns_chi03_cL::synapse0x28d3120() {
   return (neuron0x28d3840()*-0.293892);
}

double NNfunction_ns_chi03_cL::synapse0x28d3160() {
   return (neuron0x28d4320()*-0.321642);
}

double NNfunction_ns_chi03_cL::synapse0x28d3af0() {
   return (neuron0x28d4cf0()*-0.648958);
}

double NNfunction_ns_chi03_cL::synapse0x28d3b30() {
   return (neuron0x28d1dd0()*-0.291389);
}

double NNfunction_ns_chi03_cL::synapse0x28d45d0() {
   return (neuron0x28d68a0()*-0.677576);
}

double NNfunction_ns_chi03_cL::synapse0x28d4610() {
   return (neuron0x28d7270()*-0.778211);
}

double NNfunction_ns_chi03_cL::synapse0x28d4fa0() {
   return (neuron0x28d7c40()*-0.357446);
}

double NNfunction_ns_chi03_cL::synapse0x28d4fe0() {
   return (neuron0x28d8610()*-0.773681);
}

double NNfunction_ns_chi03_cL::synapse0x28d2080() {
   return (neuron0x28da420()*-0.753828);
}

double NNfunction_ns_chi03_cL::synapse0x28d20c0() {
   return (neuron0x28da700()*-0.366759);
}

double NNfunction_ns_chi03_cL::synapse0x28d6b50() {
   return (neuron0x28db0d0()*-0.0618649);
}

double NNfunction_ns_chi03_cL::synapse0x28d6b90() {
   return (neuron0x28dbaa0()*-0.0476811);
}

double NNfunction_ns_chi03_cL::synapse0x28d7520() {
   return (neuron0x28dc470()*-0.750987);
}

double NNfunction_ns_chi03_cL::synapse0x28d7560() {
   return (neuron0x28dce40()*-0.675261);
}

double NNfunction_ns_chi03_cL::synapse0x28d7ef0() {
   return (neuron0x28d5990()*-0.67973);
}

double NNfunction_ns_chi03_cL::synapse0x28d7f30() {
   return (neuron0x28d6360()*-0.772488);
}

double NNfunction_ns_chi03_cL::synapse0x28d88c0() {
   return (neuron0x28dfbd0()*-0.237899);
}

double NNfunction_ns_chi03_cL::synapse0x28d8900() {
   return (neuron0x28e05a0()*-0.596494);
}

double NNfunction_ns_chi03_cL::synapse0x28cb950() {
   return (neuron0x28e0f70()*-0.872372);
}

double NNfunction_ns_chi03_cL::synapse0x28cb990() {
   return (neuron0x28e1940()*-1.04351);
}

double NNfunction_ns_chi03_cL::synapse0x28da9b0() {
   return (neuron0x28e2310()*-0.404719);
}

double NNfunction_ns_chi03_cL::synapse0x28da9f0() {
   return (neuron0x28e2ce0()*-0.468542);
}

double NNfunction_ns_chi03_cL::synapse0x28db380() {
   return (neuron0x28e36b0()*-1.45905);
}

double NNfunction_ns_chi03_cL::synapse0x28db3c0() {
   return (neuron0x28e4080()*-0.569647);
}

double NNfunction_ns_chi03_cL::synapse0x28dbd50() {
   return (neuron0x28da110()*-0.736951);
}

double NNfunction_ns_chi03_cL::synapse0x28dbd90() {
   return (neuron0x28e6c60()*-0.36952);
}

double NNfunction_ns_chi03_cL::synapse0x28dc720() {
   return (neuron0x28e7630()*-0.570955);
}

double NNfunction_ns_chi03_cL::synapse0x28dc760() {
   return (neuron0x28e8000()*-0.496544);
}

double NNfunction_ns_chi03_cL::synapse0x28dd0f0() {
   return (neuron0x28e89d0()*-0.832727);
}

double NNfunction_ns_chi03_cL::synapse0x28dd130() {
   return (neuron0x28e93a0()*0.00764754);
}

double NNfunction_ns_chi03_cL::synapse0x28d5c40() {
   return (neuron0x28e9d70()*-0.604053);
}

double NNfunction_ns_chi03_cL::synapse0x28d5c80() {
   return (neuron0x28ea740()*-0.136637);
}

double NNfunction_ns_chi03_cL::synapse0x28df4f0() {
   return (neuron0x28eb110()*-0.223136);
}

double NNfunction_ns_chi03_cL::synapse0x28df530() {
   return (neuron0x28ebcf0()*-0.679734);
}

double NNfunction_ns_chi03_cL::synapse0x28dfe80() {
   return (neuron0x28ec6c0()*-0.388185);
}

double NNfunction_ns_chi03_cL::synapse0x28dfec0() {
   return (neuron0x28dd540()*-0.58354);
}

double NNfunction_ns_chi03_cL::synapse0x28e0850() {
   return (neuron0x28ddf10()*-0.837126);
}

double NNfunction_ns_chi03_cL::synapse0x28e0890() {
   return (neuron0x28de8e0()*-0.27902);
}

double NNfunction_ns_chi03_cL::synapse0x28e1220() {
   return (neuron0x28f0f20()*-0.677533);
}

double NNfunction_ns_chi03_cL::synapse0x28e1260() {
   return (neuron0x28f17d0()*-0.841816);
}

double NNfunction_ns_chi03_cL::synapse0x28e1bf0() {
   return (neuron0x28f21a0()*-1.34527);
}

double NNfunction_ns_chi03_cL::synapse0x28e1c30() {
   return (neuron0x28f2b70()*-0.0903522);
}

double NNfunction_ns_chi03_cL::synapse0x28e4330() {
   return (neuron0x28cdb00()*-0.644115);
}

double NNfunction_ns_chi03_cL::synapse0x28e4370() {
   return (neuron0x28ce340()*1.15779);
}

double NNfunction_ns_chi03_cL::synapse0x28d98f0() {
   return (neuron0x28cee20()*-0.278731);
}

double NNfunction_ns_chi03_cL::synapse0x28d9930() {
   return (neuron0x28ce8c0()*-0.247503);
}

double NNfunction_ns_chi03_cL::synapse0x28e6f10() {
   return (neuron0x28cfc00()*-1.86757);
}

double NNfunction_ns_chi03_cL::synapse0x28e6f50() {
   return (neuron0x28d16d0()*-0.221278);
}

double NNfunction_ns_chi03_cL::synapse0x28e78e0() {
   return (neuron0x28d24a0()*0.432142);
}

double NNfunction_ns_chi03_cL::synapse0x28e7920() {
   return (neuron0x28d2e70()*-2.94262);
}

double NNfunction_ns_chi03_cL::synapse0x28e82b0() {
   return (neuron0x28d3840()*0.180532);
}

double NNfunction_ns_chi03_cL::synapse0x28e82f0() {
   return (neuron0x28d4320()*0.378731);
}

double NNfunction_ns_chi03_cL::synapse0x28e8c80() {
   return (neuron0x28d4cf0()*-0.426316);
}

double NNfunction_ns_chi03_cL::synapse0x28e8cc0() {
   return (neuron0x28d1dd0()*1.71125);
}

double NNfunction_ns_chi03_cL::synapse0x28e9650() {
   return (neuron0x28d68a0()*-3.45621);
}

double NNfunction_ns_chi03_cL::synapse0x28e9690() {
   return (neuron0x28d7270()*-3.07548);
}

double NNfunction_ns_chi03_cL::synapse0x28ea020() {
   return (neuron0x28d7c40()*0.190071);
}

double NNfunction_ns_chi03_cL::synapse0x28ea060() {
   return (neuron0x28d8610()*4.27267);
}

double NNfunction_ns_chi03_cL::synapse0x28ea9f0() {
   return (neuron0x28da420()*0.488397);
}

double NNfunction_ns_chi03_cL::synapse0x28eaa30() {
   return (neuron0x28da700()*0.315128);
}

double NNfunction_ns_chi03_cL::synapse0x28eb3c0() {
   return (neuron0x28db0d0()*-0.790723);
}

double NNfunction_ns_chi03_cL::synapse0x28eb400() {
   return (neuron0x28dbaa0()*1.98815);
}

double NNfunction_ns_chi03_cL::synapse0x28ebfa0() {
   return (neuron0x28dc470()*0.291893);
}

double NNfunction_ns_chi03_cL::synapse0x28ebfe0() {
   return (neuron0x28dce40()*2.37932);
}

double NNfunction_ns_chi03_cL::synapse0x28ec970() {
   return (neuron0x28d5990()*2.48322);
}

double NNfunction_ns_chi03_cL::synapse0x28ec9b0() {
   return (neuron0x28d6360()*-1.50894);
}

double NNfunction_ns_chi03_cL::synapse0x28dd7f0() {
   return (neuron0x28dfbd0()*0.24487);
}

double NNfunction_ns_chi03_cL::synapse0x28dd830() {
   return (neuron0x28e05a0()*-0.579759);
}

double NNfunction_ns_chi03_cL::synapse0x28de1c0() {
   return (neuron0x28e0f70()*-1.56227);
}

double NNfunction_ns_chi03_cL::synapse0x28de200() {
   return (neuron0x28e1940()*-2.63233);
}

double NNfunction_ns_chi03_cL::synapse0x28deb90() {
   return (neuron0x28e2310()*-0.287673);
}

double NNfunction_ns_chi03_cL::synapse0x28debd0() {
   return (neuron0x28e2ce0()*1.87744);
}

double NNfunction_ns_chi03_cL::synapse0x28f10b0() {
   return (neuron0x28e36b0()*-0.916143);
}

double NNfunction_ns_chi03_cL::synapse0x28f10f0() {
   return (neuron0x28e4080()*-1.05099);
}

double NNfunction_ns_chi03_cL::synapse0x28f1a80() {
   return (neuron0x28da110()*5.30956);
}

double NNfunction_ns_chi03_cL::synapse0x28f1ac0() {
   return (neuron0x28e6c60()*3.37958);
}

double NNfunction_ns_chi03_cL::synapse0x28f2450() {
   return (neuron0x28e7630()*-0.285091);
}

double NNfunction_ns_chi03_cL::synapse0x28f2490() {
   return (neuron0x28e8000()*-0.268264);
}

double NNfunction_ns_chi03_cL::synapse0x28f2e20() {
   return (neuron0x28e89d0()*0.48278);
}

double NNfunction_ns_chi03_cL::synapse0x28f2e60() {
   return (neuron0x28e93a0()*1.19876);
}

double NNfunction_ns_chi03_cL::synapse0x28cddb0() {
   return (neuron0x28e9d70()*-0.3499);
}

double NNfunction_ns_chi03_cL::synapse0x28cddf0() {
   return (neuron0x28ea740()*-0.0847114);
}

double NNfunction_ns_chi03_cL::synapse0x28e25c0() {
   return (neuron0x28eb110()*-0.0895456);
}

double NNfunction_ns_chi03_cL::synapse0x28e2600() {
   return (neuron0x28ebcf0()*0.481865);
}

double NNfunction_ns_chi03_cL::synapse0x28f3540() {
   return (neuron0x28ec6c0()*-2.41581);
}

double NNfunction_ns_chi03_cL::synapse0x28f3580() {
   return (neuron0x28dd540()*0.477012);
}

double NNfunction_ns_chi03_cL::synapse0x28f35c0() {
   return (neuron0x28ddf10()*2.6215);
}

double NNfunction_ns_chi03_cL::synapse0x28f3600() {
   return (neuron0x28de8e0()*0.169342);
}

double NNfunction_ns_chi03_cL::synapse0x28fa4b0() {
   return (neuron0x28f0f20()*-2.33568);
}

double NNfunction_ns_chi03_cL::synapse0x28fa4f0() {
   return (neuron0x28f17d0()*1.16147);
}

double NNfunction_ns_chi03_cL::synapse0x28fa530() {
   return (neuron0x28f21a0()*-2.55705);
}

double NNfunction_ns_chi03_cL::synapse0x28fa570() {
   return (neuron0x28f2b70()*1.31483);
}

double NNfunction_ns_chi03_cL::synapse0x28fa8f0() {
   return (neuron0x28cdb00()*0.0182022);
}

double NNfunction_ns_chi03_cL::synapse0x28fa930() {
   return (neuron0x28ce340()*3.17958);
}

double NNfunction_ns_chi03_cL::synapse0x28fa970() {
   return (neuron0x28cee20()*-0.010453);
}

double NNfunction_ns_chi03_cL::synapse0x28fa9b0() {
   return (neuron0x28ce8c0()*-0.0280144);
}

double NNfunction_ns_chi03_cL::synapse0x28fa9f0() {
   return (neuron0x28cfc00()*4.00518);
}

double NNfunction_ns_chi03_cL::synapse0x28faa30() {
   return (neuron0x28d16d0()*0.011248);
}

double NNfunction_ns_chi03_cL::synapse0x28faa70() {
   return (neuron0x28d24a0()*0.040633);
}

double NNfunction_ns_chi03_cL::synapse0x28faab0() {
   return (neuron0x28d2e70()*1.17558);
}

double NNfunction_ns_chi03_cL::synapse0x28faaf0() {
   return (neuron0x28d3840()*0.0252239);
}

double NNfunction_ns_chi03_cL::synapse0x28fab30() {
   return (neuron0x28d4320()*-0.0408616);
}

double NNfunction_ns_chi03_cL::synapse0x28fab70() {
   return (neuron0x28d4cf0()*0.000937821);
}

double NNfunction_ns_chi03_cL::synapse0x28fabb0() {
   return (neuron0x28d1dd0()*-0.269635);
}

double NNfunction_ns_chi03_cL::synapse0x28fabf0() {
   return (neuron0x28d68a0()*-2.20007);
}

double NNfunction_ns_chi03_cL::synapse0x28fac30() {
   return (neuron0x28d7270()*1.42024);
}

double NNfunction_ns_chi03_cL::synapse0x28fac70() {
   return (neuron0x28d7c40()*0.002338);
}

double NNfunction_ns_chi03_cL::synapse0x28facb0() {
   return (neuron0x28d8610()*1.12265);
}

double NNfunction_ns_chi03_cL::synapse0x28fa740() {
   return (neuron0x28da420()*-0.0238578);
}

double NNfunction_ns_chi03_cL::synapse0x28fa780() {
   return (neuron0x28da700()*0.0295869);
}

double NNfunction_ns_chi03_cL::synapse0x28fae00() {
   return (neuron0x28db0d0()*0.0412485);
}

double NNfunction_ns_chi03_cL::synapse0x28fae40() {
   return (neuron0x28dbaa0()*1.00521);
}

double NNfunction_ns_chi03_cL::synapse0x28fae80() {
   return (neuron0x28dc470()*-0.00943524);
}

double NNfunction_ns_chi03_cL::synapse0x28faec0() {
   return (neuron0x28dce40()*1.10536);
}

double NNfunction_ns_chi03_cL::synapse0x28faf00() {
   return (neuron0x28d5990()*1.2136);
}

double NNfunction_ns_chi03_cL::synapse0x28faf40() {
   return (neuron0x28d6360()*-1.84248);
}

double NNfunction_ns_chi03_cL::synapse0x28faf80() {
   return (neuron0x28dfbd0()*-0.0196973);
}

double NNfunction_ns_chi03_cL::synapse0x28fafc0() {
   return (neuron0x28e05a0()*0.0351691);
}

double NNfunction_ns_chi03_cL::synapse0x28fb000() {
   return (neuron0x28e0f70()*-1.53455);
}

double NNfunction_ns_chi03_cL::synapse0x28fb040() {
   return (neuron0x28e1940()*-2.13079);
}

double NNfunction_ns_chi03_cL::synapse0x28fb080() {
   return (neuron0x28e2310()*-0.00571911);
}

double NNfunction_ns_chi03_cL::synapse0x28fb0c0() {
   return (neuron0x28e2ce0()*1.21812);
}

double NNfunction_ns_chi03_cL::synapse0x28fb100() {
   return (neuron0x28e36b0()*-0.176192);
}

double NNfunction_ns_chi03_cL::synapse0x28fb140() {
   return (neuron0x28e4080()*-2.75439);
}

double NNfunction_ns_chi03_cL::synapse0x28facf0() {
   return (neuron0x28da110()*-1.84298);
}

double NNfunction_ns_chi03_cL::synapse0x28fad30() {
   return (neuron0x28e6c60()*2.13366);
}

double NNfunction_ns_chi03_cL::synapse0x28fad70() {
   return (neuron0x28e7630()*-0.0832398);
}

double NNfunction_ns_chi03_cL::synapse0x28fadb0() {
   return (neuron0x28e8000()*0.00693755);
}

double NNfunction_ns_chi03_cL::synapse0x28fb390() {
   return (neuron0x28e89d0()*0.0112869);
}

double NNfunction_ns_chi03_cL::synapse0x28fb3d0() {
   return (neuron0x28e93a0()*2.87716);
}

double NNfunction_ns_chi03_cL::synapse0x28fb410() {
   return (neuron0x28e9d70()*-1.91899);
}

double NNfunction_ns_chi03_cL::synapse0x28fb450() {
   return (neuron0x28ea740()*0.0480344);
}

double NNfunction_ns_chi03_cL::synapse0x28fb490() {
   return (neuron0x28eb110()*5.44512);
}

double NNfunction_ns_chi03_cL::synapse0x28fb4d0() {
   return (neuron0x28ebcf0()*0.0255234);
}

double NNfunction_ns_chi03_cL::synapse0x28fb510() {
   return (neuron0x28ec6c0()*-1.23291);
}

double NNfunction_ns_chi03_cL::synapse0x28fb550() {
   return (neuron0x28dd540()*-0.052834);
}

double NNfunction_ns_chi03_cL::synapse0x28fb590() {
   return (neuron0x28ddf10()*1.88133);
}

double NNfunction_ns_chi03_cL::synapse0x28fb5d0() {
   return (neuron0x28de8e0()*0.00414744);
}

double NNfunction_ns_chi03_cL::synapse0x28fb610() {
   return (neuron0x28f0f20()*-1.27766);
}

double NNfunction_ns_chi03_cL::synapse0x28fb650() {
   return (neuron0x28f17d0()*-0.0543592);
}

double NNfunction_ns_chi03_cL::synapse0x28fb690() {
   return (neuron0x28f21a0()*-3.9284);
}

double NNfunction_ns_chi03_cL::synapse0x28fb6d0() {
   return (neuron0x28f2b70()*-0.335538);
}

double NNfunction_ns_chi03_cL::synapse0x28fba50() {
   return (neuron0x28cdb00()*0.422116);
}

double NNfunction_ns_chi03_cL::synapse0x28fba90() {
   return (neuron0x28ce340()*0.735998);
}

double NNfunction_ns_chi03_cL::synapse0x28fbad0() {
   return (neuron0x28cee20()*0.57953);
}

double NNfunction_ns_chi03_cL::synapse0x28fbb10() {
   return (neuron0x28ce8c0()*0.571238);
}

double NNfunction_ns_chi03_cL::synapse0x28fbb50() {
   return (neuron0x28cfc00()*-4.7996);
}

double NNfunction_ns_chi03_cL::synapse0x28fbb90() {
   return (neuron0x28d16d0()*0.455552);
}

double NNfunction_ns_chi03_cL::synapse0x28fbbd0() {
   return (neuron0x28d24a0()*-0.840453);
}

double NNfunction_ns_chi03_cL::synapse0x28fbc10() {
   return (neuron0x28d2e70()*0.913373);
}

double NNfunction_ns_chi03_cL::synapse0x28fbc50() {
   return (neuron0x28d3840()*-0.446604);
}

double NNfunction_ns_chi03_cL::synapse0x28fbc90() {
   return (neuron0x28d4320()*-0.542859);
}

double NNfunction_ns_chi03_cL::synapse0x28fbcd0() {
   return (neuron0x28d4cf0()*0.254075);
}

double NNfunction_ns_chi03_cL::synapse0x28fbd10() {
   return (neuron0x28d1dd0()*-0.850848);
}

double NNfunction_ns_chi03_cL::synapse0x28fbd50() {
   return (neuron0x28d68a0()*1.64402);
}

double NNfunction_ns_chi03_cL::synapse0x28fbd90() {
   return (neuron0x28d7270()*3.12585);
}

double NNfunction_ns_chi03_cL::synapse0x28fbdd0() {
   return (neuron0x28d7c40()*-0.347959);
}

double NNfunction_ns_chi03_cL::synapse0x28fbe10() {
   return (neuron0x28d8610()*-3.91258);
}

double NNfunction_ns_chi03_cL::synapse0x28fb8a0() {
   return (neuron0x28da420()*-0.780482);
}

double NNfunction_ns_chi03_cL::synapse0x28fb8e0() {
   return (neuron0x28da700()*-0.88705);
}

double NNfunction_ns_chi03_cL::synapse0x28fbf60() {
   return (neuron0x28db0d0()*0.521737);
}

double NNfunction_ns_chi03_cL::synapse0x28fbfa0() {
   return (neuron0x28dbaa0()*-1.66798);
}

double NNfunction_ns_chi03_cL::synapse0x28fbfe0() {
   return (neuron0x28dc470()*-0.728605);
}

double NNfunction_ns_chi03_cL::synapse0x28fc020() {
   return (neuron0x28dce40()*-2.62076);
}

double NNfunction_ns_chi03_cL::synapse0x28fc060() {
   return (neuron0x28d5990()*-1.83538);
}

double NNfunction_ns_chi03_cL::synapse0x28fc0a0() {
   return (neuron0x28d6360()*4.10039);
}

double NNfunction_ns_chi03_cL::synapse0x28fc0e0() {
   return (neuron0x28dfbd0()*-0.353929);
}

double NNfunction_ns_chi03_cL::synapse0x28fc120() {
   return (neuron0x28e05a0()*0.646053);
}

double NNfunction_ns_chi03_cL::synapse0x28fc160() {
   return (neuron0x28e0f70()*0.0645456);
}

double NNfunction_ns_chi03_cL::synapse0x28fc1a0() {
   return (neuron0x28e1940()*2.35434);
}

double NNfunction_ns_chi03_cL::synapse0x28fc1e0() {
   return (neuron0x28e2310()*0.494751);
}

double NNfunction_ns_chi03_cL::synapse0x28fc220() {
   return (neuron0x28e2ce0()*-1.22506);
}

double NNfunction_ns_chi03_cL::synapse0x28fc260() {
   return (neuron0x28e36b0()*0.612346);
}

double NNfunction_ns_chi03_cL::synapse0x28fc2a0() {
   return (neuron0x28e4080()*0.0788433);
}

double NNfunction_ns_chi03_cL::synapse0x28fbe50() {
   return (neuron0x28da110()*3.9131);
}

double NNfunction_ns_chi03_cL::synapse0x28fbe90() {
   return (neuron0x28e6c60()*-0.635918);
}

double NNfunction_ns_chi03_cL::synapse0x28fbed0() {
   return (neuron0x28e7630()*0.316659);
}

double NNfunction_ns_chi03_cL::synapse0x28fbf10() {
   return (neuron0x28e8000()*0.283803);
}

double NNfunction_ns_chi03_cL::synapse0x28fc4f0() {
   return (neuron0x28e89d0()*-0.796772);
}

double NNfunction_ns_chi03_cL::synapse0x28fc530() {
   return (neuron0x28e93a0()*1.59865);
}

double NNfunction_ns_chi03_cL::synapse0x28fc570() {
   return (neuron0x28e9d70()*-4.48669);
}

double NNfunction_ns_chi03_cL::synapse0x28fc5b0() {
   return (neuron0x28ea740()*-0.464702);
}

double NNfunction_ns_chi03_cL::synapse0x28fc5f0() {
   return (neuron0x28eb110()*1.36993);
}

double NNfunction_ns_chi03_cL::synapse0x28fc630() {
   return (neuron0x28ebcf0()*-0.494332);
}

double NNfunction_ns_chi03_cL::synapse0x28fc670() {
   return (neuron0x28ec6c0()*-3.96804);
}

double NNfunction_ns_chi03_cL::synapse0x28fc6b0() {
   return (neuron0x28dd540()*-0.857201);
}

double NNfunction_ns_chi03_cL::synapse0x28fc6f0() {
   return (neuron0x28ddf10()*-0.874593);
}

double NNfunction_ns_chi03_cL::synapse0x28fc730() {
   return (neuron0x28de8e0()*-0.289247);
}

double NNfunction_ns_chi03_cL::synapse0x28fc770() {
   return (neuron0x28f0f20()*1.42084);
}

double NNfunction_ns_chi03_cL::synapse0x28fc7b0() {
   return (neuron0x28f17d0()*-2.35741);
}

double NNfunction_ns_chi03_cL::synapse0x28fc7f0() {
   return (neuron0x28f21a0()*-2.53685);
}

double NNfunction_ns_chi03_cL::synapse0x28fc830() {
   return (neuron0x28f2b70()*1.97744);
}

double NNfunction_ns_chi03_cL::synapse0x28fcbb0() {
   return (neuron0x28cdb00()*0.0796658);
}

double NNfunction_ns_chi03_cL::synapse0x28fcbf0() {
   return (neuron0x28ce340()*0.0834628);
}

double NNfunction_ns_chi03_cL::synapse0x28fcc30() {
   return (neuron0x28cee20()*-0.134003);
}

double NNfunction_ns_chi03_cL::synapse0x28fcc70() {
   return (neuron0x28ce8c0()*-0.315957);
}

double NNfunction_ns_chi03_cL::synapse0x28fccb0() {
   return (neuron0x28cfc00()*-0.421024);
}

double NNfunction_ns_chi03_cL::synapse0x28fccf0() {
   return (neuron0x28d16d0()*0.0558961);
}

double NNfunction_ns_chi03_cL::synapse0x28fcd30() {
   return (neuron0x28d24a0()*-0.313808);
}

double NNfunction_ns_chi03_cL::synapse0x28fcd70() {
   return (neuron0x28d2e70()*-0.165441);
}

double NNfunction_ns_chi03_cL::synapse0x28fcdb0() {
   return (neuron0x28d3840()*-0.447111);
}

double NNfunction_ns_chi03_cL::synapse0x28fcdf0() {
   return (neuron0x28d4320()*0.570362);
}

double NNfunction_ns_chi03_cL::synapse0x28fce30() {
   return (neuron0x28d4cf0()*0.288097);
}

double NNfunction_ns_chi03_cL::synapse0x28fce70() {
   return (neuron0x28d1dd0()*-0.288162);
}

double NNfunction_ns_chi03_cL::synapse0x28fceb0() {
   return (neuron0x28d68a0()*-0.939132);
}

double NNfunction_ns_chi03_cL::synapse0x28fcef0() {
   return (neuron0x28d7270()*-0.57332);
}

double NNfunction_ns_chi03_cL::synapse0x28fcf30() {
   return (neuron0x28d7c40()*0.0446036);
}

double NNfunction_ns_chi03_cL::synapse0x28fcf70() {
   return (neuron0x28d8610()*-0.37257);
}

double NNfunction_ns_chi03_cL::synapse0x28fca00() {
   return (neuron0x28da420()*0.238538);
}

double NNfunction_ns_chi03_cL::synapse0x28fca40() {
   return (neuron0x28da700()*-0.348838);
}

double NNfunction_ns_chi03_cL::synapse0x28fd0c0() {
   return (neuron0x28db0d0()*-0.146681);
}

double NNfunction_ns_chi03_cL::synapse0x28fd100() {
   return (neuron0x28dbaa0()*-0.397503);
}

double NNfunction_ns_chi03_cL::synapse0x28fd140() {
   return (neuron0x28dc470()*0.215585);
}

double NNfunction_ns_chi03_cL::synapse0x28fd180() {
   return (neuron0x28dce40()*-0.173615);
}

double NNfunction_ns_chi03_cL::synapse0x28fd1c0() {
   return (neuron0x28d5990()*0.320899);
}

double NNfunction_ns_chi03_cL::synapse0x28fd200() {
   return (neuron0x28d6360()*-0.608157);
}

double NNfunction_ns_chi03_cL::synapse0x28fd240() {
   return (neuron0x28dfbd0()*0.00927361);
}

double NNfunction_ns_chi03_cL::synapse0x28fd280() {
   return (neuron0x28e05a0()*-0.287849);
}

double NNfunction_ns_chi03_cL::synapse0x28fd2c0() {
   return (neuron0x28e0f70()*-0.793139);
}

double NNfunction_ns_chi03_cL::synapse0x28fd300() {
   return (neuron0x28e1940()*-0.56946);
}

double NNfunction_ns_chi03_cL::synapse0x28fd340() {
   return (neuron0x28e2310()*-0.100747);
}

double NNfunction_ns_chi03_cL::synapse0x28fd380() {
   return (neuron0x28e2ce0()*-0.163687);
}

double NNfunction_ns_chi03_cL::synapse0x28fd3c0() {
   return (neuron0x28e36b0()*-0.941288);
}

double NNfunction_ns_chi03_cL::synapse0x28fd400() {
   return (neuron0x28e4080()*-0.700058);
}

double NNfunction_ns_chi03_cL::synapse0x28fcfb0() {
   return (neuron0x28da110()*0.28968);
}

double NNfunction_ns_chi03_cL::synapse0x28fcff0() {
   return (neuron0x28e6c60()*-0.75454);
}

double NNfunction_ns_chi03_cL::synapse0x28fd030() {
   return (neuron0x28e7630()*-0.174996);
}

double NNfunction_ns_chi03_cL::synapse0x28fd070() {
   return (neuron0x28e8000()*-0.580789);
}

double NNfunction_ns_chi03_cL::synapse0x28fd650() {
   return (neuron0x28e89d0()*0.377188);
}

double NNfunction_ns_chi03_cL::synapse0x28fd690() {
   return (neuron0x28e93a0()*-0.195759);
}

double NNfunction_ns_chi03_cL::synapse0x28fd6d0() {
   return (neuron0x28e9d70()*-1.00591);
}

double NNfunction_ns_chi03_cL::synapse0x28fd710() {
   return (neuron0x28ea740()*-0.127718);
}

double NNfunction_ns_chi03_cL::synapse0x28fd750() {
   return (neuron0x28eb110()*-0.0169391);
}

double NNfunction_ns_chi03_cL::synapse0x28fd790() {
   return (neuron0x28ebcf0()*-0.194028);
}

double NNfunction_ns_chi03_cL::synapse0x28fd7d0() {
   return (neuron0x28ec6c0()*-0.149619);
}

double NNfunction_ns_chi03_cL::synapse0x28fd810() {
   return (neuron0x28dd540()*-0.192485);
}

double NNfunction_ns_chi03_cL::synapse0x28fd850() {
   return (neuron0x28ddf10()*-0.0629875);
}

double NNfunction_ns_chi03_cL::synapse0x28fd890() {
   return (neuron0x28de8e0()*-0.300555);
}

double NNfunction_ns_chi03_cL::synapse0x28fd8d0() {
   return (neuron0x28f0f20()*-0.492809);
}

double NNfunction_ns_chi03_cL::synapse0x28fd910() {
   return (neuron0x28f17d0()*0.00176505);
}

double NNfunction_ns_chi03_cL::synapse0x28fd950() {
   return (neuron0x28f21a0()*-0.160838);
}

double NNfunction_ns_chi03_cL::synapse0x28fd990() {
   return (neuron0x28f2b70()*-0.105601);
}

double NNfunction_ns_chi03_cL::synapse0x28fdbf0() {
   return (neuron0x28f9d70()*1.03797);
}

double NNfunction_ns_chi03_cL::synapse0x28fdc30() {
   return (neuron0x28fa110()*-7.59472);
}

double NNfunction_ns_chi03_cL::synapse0x28fdc70() {
   return (neuron0x28fa5b0()*-6.75597);
}

double NNfunction_ns_chi03_cL::synapse0x28fdcb0() {
   return (neuron0x28fb710()*-1.34538);
}

double NNfunction_ns_chi03_cL::synapse0x28fdcf0() {
   return (neuron0x28fc870()*0.609409);
}

