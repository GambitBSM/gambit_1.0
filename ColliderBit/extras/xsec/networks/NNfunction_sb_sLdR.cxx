#include "NNfunction_sb_sLdR.h"
#include <cmath>

double NNfunction_sb_sLdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.8517)/15.0462;
   input1 = (in1 - 52.8832)/754.245;
   input2 = (in2 - 382.553)/479.379;
   input3 = (in3 - 267.992)/628.069;
   input4 = (in4 - 732.869)/692.936;
   input5 = (in5 - 633.051)/665.795;
   input6 = (in6 - 636.233)/666.494;
   input7 = (in7 - 637.751)/669.381;
   input8 = (in8 - 636.698)/706.562;
   input9 = (in9 - 625.081)/688.702;
   input10 = (in10 - 638.819)/714.164;
   input11 = (in11 - 681.458)/597.087;
   input12 = (in12 - 539.817)/334.147;
   input13 = (in13 - 522.785)/362.995;
   input14 = (in14 - 664.181)/547.278;
   input15 = (in15 - 663.712)/546.858;
   input16 = (in16 - 472.357)/383.472;
   input17 = (in17 - 534.168)/332.108;
   input18 = (in18 - 686.496)/619.073;
   input19 = (in19 - 687.853)/604.294;
   input20 = (in20 - -209.37)/408.189;
   input21 = (in21 - -272.832)/885.966;
   input22 = (in22 - -2.56454)/889.935;
   input23 = (in23 - -16.1528)/506.156;
   switch(index) {
     case 0:
         return neuron0x22fc290();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLdR::Value(int index, double* input) {
   input0 = (input[0] - 22.8517)/15.0462;
   input1 = (input[1] - 52.8832)/754.245;
   input2 = (input[2] - 382.553)/479.379;
   input3 = (input[3] - 267.992)/628.069;
   input4 = (input[4] - 732.869)/692.936;
   input5 = (input[5] - 633.051)/665.795;
   input6 = (input[6] - 636.233)/666.494;
   input7 = (input[7] - 637.751)/669.381;
   input8 = (input[8] - 636.698)/706.562;
   input9 = (input[9] - 625.081)/688.702;
   input10 = (input[10] - 638.819)/714.164;
   input11 = (input[11] - 681.458)/597.087;
   input12 = (input[12] - 539.817)/334.147;
   input13 = (input[13] - 522.785)/362.995;
   input14 = (input[14] - 664.181)/547.278;
   input15 = (input[15] - 663.712)/546.858;
   input16 = (input[16] - 472.357)/383.472;
   input17 = (input[17] - 534.168)/332.108;
   input18 = (input[18] - 686.496)/619.073;
   input19 = (input[19] - 687.853)/604.294;
   input20 = (input[20] - -209.37)/408.189;
   input21 = (input[21] - -272.832)/885.966;
   input22 = (input[22] - -2.56454)/889.935;
   input23 = (input[23] - -16.1528)/506.156;
   switch(index) {
     case 0:
         return neuron0x22fc290();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLdR::neuron0x22c8380() {
   return input0;
}

double NNfunction_sb_sLdR::neuron0x22c86c0() {
   return input1;
}

double NNfunction_sb_sLdR::neuron0x22c8a00() {
   return input2;
}

double NNfunction_sb_sLdR::neuron0x22c8d40() {
   return input3;
}

double NNfunction_sb_sLdR::neuron0x22c9080() {
   return input4;
}

double NNfunction_sb_sLdR::neuron0x22c93c0() {
   return input5;
}

double NNfunction_sb_sLdR::neuron0x22c9700() {
   return input6;
}

double NNfunction_sb_sLdR::neuron0x22c9a40() {
   return input7;
}

double NNfunction_sb_sLdR::neuron0x22c9d80() {
   return input8;
}

double NNfunction_sb_sLdR::neuron0x22ca0c0() {
   return input9;
}

double NNfunction_sb_sLdR::neuron0x22ca400() {
   return input10;
}

double NNfunction_sb_sLdR::neuron0x22ca740() {
   return input11;
}

double NNfunction_sb_sLdR::neuron0x22caa80() {
   return input12;
}

double NNfunction_sb_sLdR::neuron0x22cadc0() {
   return input13;
}

double NNfunction_sb_sLdR::neuron0x22cb100() {
   return input14;
}

double NNfunction_sb_sLdR::neuron0x22cb440() {
   return input15;
}

double NNfunction_sb_sLdR::neuron0x22cb780() {
   return input16;
}

double NNfunction_sb_sLdR::neuron0x22cbce0() {
   return input17;
}

double NNfunction_sb_sLdR::neuron0x22cbf00() {
   return input18;
}

double NNfunction_sb_sLdR::neuron0x22cc240() {
   return input19;
}

double NNfunction_sb_sLdR::neuron0x22cc580() {
   return input20;
}

double NNfunction_sb_sLdR::neuron0x22cc8c0() {
   return input21;
}

double NNfunction_sb_sLdR::neuron0x22ccc00() {
   return input22;
}

double NNfunction_sb_sLdR::neuron0x22ccf40() {
   return input23;
}

double NNfunction_sb_sLdR::input0x22cd3b0() {
   double input = -0.716475;
   input += synapse0x22c8240();
   input += synapse0x22c8280();
   input += synapse0x22cd660();
   input += synapse0x22cd6a0();
   input += synapse0x22cd6e0();
   input += synapse0x22cd720();
   input += synapse0x22cd760();
   input += synapse0x22cd7a0();
   input += synapse0x22cd7e0();
   input += synapse0x22cd820();
   input += synapse0x22cd860();
   input += synapse0x22cd8a0();
   input += synapse0x22cd8e0();
   input += synapse0x22cd920();
   input += synapse0x22cd960();
   input += synapse0x22cd9a0();
   input += synapse0x22c81b0();
   input += synapse0x22c81f0();
   input += synapse0x2083570();
   input += synapse0x20835b0();
   input += synapse0x22cdc00();
   input += synapse0x22cdc40();
   input += synapse0x22cdc80();
   input += synapse0x22cdcc0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22cd3b0() {
   double input = input0x22cd3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22cdd00() {
   double input = -3.61006;
   input += synapse0x22ce040();
   input += synapse0x22ce080();
   input += synapse0x22ce0c0();
   input += synapse0x22ce100();
   input += synapse0x22ce140();
   input += synapse0x22ce180();
   input += synapse0x22ce1c0();
   input += synapse0x22ce200();
   input += synapse0x22ce240();
   input += synapse0x22cdaf0();
   input += synapse0x22cdb30();
   input += synapse0x22cdb70();
   input += synapse0x22cdbb0();
   input += synapse0x22ce490();
   input += synapse0x22ce4d0();
   input += synapse0x22ce510();
   input += synapse0x22cde90();
   input += synapse0x22cded0();
   input += synapse0x22ce660();
   input += synapse0x22ce6a0();
   input += synapse0x22ce6e0();
   input += synapse0x22ce720();
   input += synapse0x22ce760();
   input += synapse0x22ce7a0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22cdd00() {
   double input = input0x22cdd00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22ce7e0() {
   double input = -0.34547;
   input += synapse0x22ceb20();
   input += synapse0x22ceb60();
   input += synapse0x22ceba0();
   input += synapse0x22cebe0();
   input += synapse0x22cec20();
   input += synapse0x22cec60();
   input += synapse0x22ceca0();
   input += synapse0x22cece0();
   input += synapse0x22ced20();
   input += synapse0x22ced60();
   input += synapse0x22ceda0();
   input += synapse0x22cede0();
   input += synapse0x22cee20();
   input += synapse0x22cee60();
   input += synapse0x22ceea0();
   input += synapse0x22ceee0();
   input += synapse0x22ce970();
   input += synapse0x22ce9b0();
   input += synapse0x2083c10();
   input += synapse0x20914e0();
   input += synapse0x2091520();
   input += synapse0x22b7410();
   input += synapse0x22b7450();
   input += synapse0x22b7490();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22ce7e0() {
   double input = input0x22ce7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22ce280() {
   double input = -0.130554;
   input += synapse0x2091d60();
   input += synapse0x22ce410();
   input += synapse0x22ce450();
   input += synapse0x22cf030();
   input += synapse0x22cf070();
   input += synapse0x22cf0b0();
   input += synapse0x22cf0f0();
   input += synapse0x22cf130();
   input += synapse0x22cf170();
   input += synapse0x22cf1b0();
   input += synapse0x22cf1f0();
   input += synapse0x22cf230();
   input += synapse0x22cf270();
   input += synapse0x22cf2b0();
   input += synapse0x22cf2f0();
   input += synapse0x22cf330();
   input += synapse0x22c82c0();
   input += synapse0x22c8300();
   input += synapse0x22c8340();
   input += synapse0x22cf480();
   input += synapse0x22cf4c0();
   input += synapse0x22cf500();
   input += synapse0x22cf540();
   input += synapse0x22cf580();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22ce280() {
   double input = input0x22ce280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22cf5c0() {
   double input = 0.0542097;
   input += synapse0x22cf900();
   input += synapse0x22cf940();
   input += synapse0x22cf980();
   input += synapse0x22cf9c0();
   input += synapse0x22cfa00();
   input += synapse0x22cfa40();
   input += synapse0x22cfa80();
   input += synapse0x22cfac0();
   input += synapse0x22cfb00();
   input += synapse0x22cfb40();
   input += synapse0x22cfb80();
   input += synapse0x22cfbc0();
   input += synapse0x22cfc00();
   input += synapse0x22cfc40();
   input += synapse0x22cfc80();
   input += synapse0x22cfcc0();
   input += synapse0x22cf750();
   input += synapse0x22cf790();
   input += synapse0x22cfe10();
   input += synapse0x22cfe50();
   input += synapse0x22cfe90();
   input += synapse0x22cfed0();
   input += synapse0x22cff10();
   input += synapse0x22cff50();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22cf5c0() {
   double input = input0x22cf5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22cff90() {
   double input = 1.3562;
   input += synapse0x22d02d0();
   input += synapse0x22d0310();
   input += synapse0x22d0350();
   input += synapse0x22d0390();
   input += synapse0x22d03d0();
   input += synapse0x22d0410();
   input += synapse0x22d0450();
   input += synapse0x22d0490();
   input += synapse0x22d04d0();
   input += synapse0x2091830();
   input += synapse0x2091870();
   input += synapse0x20918b0();
   input += synapse0x20918f0();
   input += synapse0x2091930();
   input += synapse0x2091970();
   input += synapse0x20919b0();
   input += synapse0x22d0120();
   input += synapse0x22d0160();
   input += synapse0x2091b00();
   input += synapse0x2091b40();
   input += synapse0x2091b80();
   input += synapse0x2091bc0();
   input += synapse0x2091c00();
   input += synapse0x22d0d20();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22cff90() {
   double input = input0x22cff90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22d0d60() {
   double input = -0.707178;
   input += synapse0x22d10a0();
   input += synapse0x22d10e0();
   input += synapse0x22d1120();
   input += synapse0x22d1160();
   input += synapse0x22d11a0();
   input += synapse0x22d11e0();
   input += synapse0x22d1220();
   input += synapse0x22d1260();
   input += synapse0x22d12a0();
   input += synapse0x22d12e0();
   input += synapse0x22d1320();
   input += synapse0x22d1360();
   input += synapse0x22d13a0();
   input += synapse0x22d13e0();
   input += synapse0x22d1420();
   input += synapse0x22d1460();
   input += synapse0x22d0ef0();
   input += synapse0x22d0f30();
   input += synapse0x22d15b0();
   input += synapse0x22d15f0();
   input += synapse0x22d1630();
   input += synapse0x22d1670();
   input += synapse0x22d16b0();
   input += synapse0x22d16f0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22d0d60() {
   double input = input0x22d0d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22d1730() {
   double input = -0.0492925;
   input += synapse0x22d1a70();
   input += synapse0x22d1ab0();
   input += synapse0x22d1af0();
   input += synapse0x22d1b30();
   input += synapse0x22d1b70();
   input += synapse0x22d1bb0();
   input += synapse0x22d1bf0();
   input += synapse0x22d1c30();
   input += synapse0x22d1c70();
   input += synapse0x22d1cb0();
   input += synapse0x22d1cf0();
   input += synapse0x22d1d30();
   input += synapse0x22d1d70();
   input += synapse0x22d1db0();
   input += synapse0x22d1df0();
   input += synapse0x22d1e30();
   input += synapse0x22d18c0();
   input += synapse0x22d1900();
   input += synapse0x22d1f80();
   input += synapse0x22d1fc0();
   input += synapse0x22d2000();
   input += synapse0x22d2040();
   input += synapse0x22d2080();
   input += synapse0x22d20c0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22d1730() {
   double input = input0x22d1730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22d2100() {
   double input = -0.520623;
   input += synapse0x22cbbd0();
   input += synapse0x22cbc10();
   input += synapse0x22cbc50();
   input += synapse0x22cbc90();
   input += synapse0x22d2650();
   input += synapse0x22d2690();
   input += synapse0x22d26d0();
   input += synapse0x22d2710();
   input += synapse0x22d2750();
   input += synapse0x22d2790();
   input += synapse0x22d27d0();
   input += synapse0x22d2810();
   input += synapse0x22d2850();
   input += synapse0x22d2890();
   input += synapse0x22d28d0();
   input += synapse0x22d2910();
   input += synapse0x22d2290();
   input += synapse0x22d22d0();
   input += synapse0x22d2a60();
   input += synapse0x22d2aa0();
   input += synapse0x22d2ae0();
   input += synapse0x22d2b20();
   input += synapse0x22d2b60();
   input += synapse0x22d2ba0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22d2100() {
   double input = input0x22d2100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22d2be0() {
   double input = 0.854747;
   input += synapse0x22d2f20();
   input += synapse0x22d2f60();
   input += synapse0x22d2fa0();
   input += synapse0x22d2fe0();
   input += synapse0x22d3020();
   input += synapse0x22d3060();
   input += synapse0x22d30a0();
   input += synapse0x22d30e0();
   input += synapse0x22d3120();
   input += synapse0x22d3160();
   input += synapse0x22d31a0();
   input += synapse0x22d31e0();
   input += synapse0x22d3220();
   input += synapse0x22d3260();
   input += synapse0x22d32a0();
   input += synapse0x22d32e0();
   input += synapse0x22d2d70();
   input += synapse0x22d2db0();
   input += synapse0x22d3430();
   input += synapse0x22d3470();
   input += synapse0x22d34b0();
   input += synapse0x22d34f0();
   input += synapse0x22d3530();
   input += synapse0x22d3570();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22d2be0() {
   double input = input0x22d2be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22d35b0() {
   double input = -1.32411;
   input += synapse0x22d38f0();
   input += synapse0x22d3930();
   input += synapse0x22d3970();
   input += synapse0x22d39b0();
   input += synapse0x22d39f0();
   input += synapse0x22d3a30();
   input += synapse0x22d3a70();
   input += synapse0x22d3ab0();
   input += synapse0x22d3af0();
   input += synapse0x22d3b30();
   input += synapse0x22d3b70();
   input += synapse0x22d3bb0();
   input += synapse0x22d3bf0();
   input += synapse0x22d3c30();
   input += synapse0x22d3c70();
   input += synapse0x22d3cb0();
   input += synapse0x22d3740();
   input += synapse0x22d3780();
   input += synapse0x22d0510();
   input += synapse0x22d0550();
   input += synapse0x22d0590();
   input += synapse0x22d05d0();
   input += synapse0x22d0610();
   input += synapse0x22d0650();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22d35b0() {
   double input = input0x22d35b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22d0690() {
   double input = 5.70469;
   input += synapse0x22d09d0();
   input += synapse0x22d0a10();
   input += synapse0x22d0a50();
   input += synapse0x22d0a90();
   input += synapse0x22d0ad0();
   input += synapse0x22d0b10();
   input += synapse0x22d0b50();
   input += synapse0x22d0b90();
   input += synapse0x22d0bd0();
   input += synapse0x22d0c10();
   input += synapse0x22d0c50();
   input += synapse0x22d0c90();
   input += synapse0x22d0cd0();
   input += synapse0x22d4e10();
   input += synapse0x22d4e50();
   input += synapse0x22d4e90();
   input += synapse0x22d0820();
   input += synapse0x22d0860();
   input += synapse0x22d4fe0();
   input += synapse0x22d5020();
   input += synapse0x22d5060();
   input += synapse0x22d50a0();
   input += synapse0x22d50e0();
   input += synapse0x22d5120();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22d0690() {
   double input = input0x22d0690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22d5160() {
   double input = -0.172525;
   input += synapse0x22d54a0();
   input += synapse0x22d54e0();
   input += synapse0x22d5520();
   input += synapse0x22d5560();
   input += synapse0x22d55a0();
   input += synapse0x22d55e0();
   input += synapse0x22d5620();
   input += synapse0x22d5660();
   input += synapse0x22d56a0();
   input += synapse0x22d56e0();
   input += synapse0x22d5720();
   input += synapse0x22d5760();
   input += synapse0x22d57a0();
   input += synapse0x22d57e0();
   input += synapse0x22d5820();
   input += synapse0x22d5860();
   input += synapse0x22d52f0();
   input += synapse0x22d5330();
   input += synapse0x22d59b0();
   input += synapse0x22d59f0();
   input += synapse0x22d5a30();
   input += synapse0x22d5a70();
   input += synapse0x22d5ab0();
   input += synapse0x22d5af0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22d5160() {
   double input = input0x22d5160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22d5b30() {
   double input = -0.0951164;
   input += synapse0x22d5e70();
   input += synapse0x22d5eb0();
   input += synapse0x22d5ef0();
   input += synapse0x22d5f30();
   input += synapse0x22d5f70();
   input += synapse0x22d5fb0();
   input += synapse0x22d5ff0();
   input += synapse0x22d6030();
   input += synapse0x22d6070();
   input += synapse0x22d60b0();
   input += synapse0x22d60f0();
   input += synapse0x22d6130();
   input += synapse0x22d6170();
   input += synapse0x22d61b0();
   input += synapse0x22d61f0();
   input += synapse0x22d6230();
   input += synapse0x22d5cc0();
   input += synapse0x22d5d00();
   input += synapse0x22d6380();
   input += synapse0x22d63c0();
   input += synapse0x22d6400();
   input += synapse0x22d6440();
   input += synapse0x22d6480();
   input += synapse0x22d64c0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22d5b30() {
   double input = input0x22d5b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22d6500() {
   double input = -0.15116;
   input += synapse0x22d6840();
   input += synapse0x22d6880();
   input += synapse0x22d68c0();
   input += synapse0x22d6900();
   input += synapse0x22d6940();
   input += synapse0x22d6980();
   input += synapse0x22d69c0();
   input += synapse0x22d6a00();
   input += synapse0x22d6a40();
   input += synapse0x22d6a80();
   input += synapse0x22d6ac0();
   input += synapse0x22d6b00();
   input += synapse0x22d6b40();
   input += synapse0x22d6b80();
   input += synapse0x22d6bc0();
   input += synapse0x22d6c00();
   input += synapse0x22d6690();
   input += synapse0x22d66d0();
   input += synapse0x22d6d50();
   input += synapse0x22d6d90();
   input += synapse0x22d6dd0();
   input += synapse0x22d6e10();
   input += synapse0x22d6e50();
   input += synapse0x22d6e90();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22d6500() {
   double input = input0x22d6500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22d6ed0() {
   double input = -0.251597;
   input += synapse0x22d7210();
   input += synapse0x22c85a0();
   input += synapse0x22c85e0();
   input += synapse0x22c88e0();
   input += synapse0x22c8920();
   input += synapse0x22c8c20();
   input += synapse0x22c8c60();
   input += synapse0x22c8f60();
   input += synapse0x22c8fa0();
   input += synapse0x22c92a0();
   input += synapse0x22c92e0();
   input += synapse0x22c95e0();
   input += synapse0x22c9620();
   input += synapse0x22c9920();
   input += synapse0x22c9960();
   input += synapse0x22c9c60();
   input += synapse0x22c9ca0();
   input += synapse0x22c9fa0();
   input += synapse0x22c9fe0();
   input += synapse0x22ca2e0();
   input += synapse0x22ca320();
   input += synapse0x22ca620();
   input += synapse0x22ca660();
   input += synapse0x22ca960();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22d6ed0() {
   double input = input0x22d6ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22d8ce0() {
   double input = -1.36486;
   input += synapse0x22ca9a0();
   input += synapse0x22cb660();
   input += synapse0x22cb6a0();
   input += synapse0x22d7060();
   input += synapse0x22d70a0();
   input += synapse0x22cb9a0();
   input += synapse0x22cb9e0();
   input += synapse0x2083450();
   input += synapse0x2083490();
   input += synapse0x22cc120();
   input += synapse0x22cc160();
   input += synapse0x22cc460();
   input += synapse0x22cc4a0();
   input += synapse0x22cc7a0();
   input += synapse0x22cc7e0();
   input += synapse0x22ccae0();
   input += synapse0x22ccb20();
   input += synapse0x22cce20();
   input += synapse0x22cce60();
   input += synapse0x22cd160();
   input += synapse0x22cd1a0();
   input += synapse0x22caca0();
   input += synapse0x22cace0();
   input += synapse0x22d8f80();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22d8ce0() {
   double input = input0x22d8ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22d8fc0() {
   double input = 0.468241;
   input += synapse0x22d9300();
   input += synapse0x22d9340();
   input += synapse0x22d9380();
   input += synapse0x22d93c0();
   input += synapse0x22d9400();
   input += synapse0x22d9440();
   input += synapse0x22d9480();
   input += synapse0x22d94c0();
   input += synapse0x22d9500();
   input += synapse0x22d9540();
   input += synapse0x22d9580();
   input += synapse0x22d95c0();
   input += synapse0x22d9600();
   input += synapse0x22d9640();
   input += synapse0x22d9680();
   input += synapse0x22d96c0();
   input += synapse0x22d9150();
   input += synapse0x22d9190();
   input += synapse0x22d9810();
   input += synapse0x22d9850();
   input += synapse0x22d9890();
   input += synapse0x22d98d0();
   input += synapse0x22d9910();
   input += synapse0x22d9950();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22d8fc0() {
   double input = input0x22d8fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22d9990() {
   double input = 1.47362;
   input += synapse0x22d9cd0();
   input += synapse0x22d9d10();
   input += synapse0x22d9d50();
   input += synapse0x22d9d90();
   input += synapse0x22d9dd0();
   input += synapse0x22d9e10();
   input += synapse0x22d9e50();
   input += synapse0x22d9e90();
   input += synapse0x22d9ed0();
   input += synapse0x22d9f10();
   input += synapse0x22d9f50();
   input += synapse0x22d9f90();
   input += synapse0x22d9fd0();
   input += synapse0x22da010();
   input += synapse0x22da050();
   input += synapse0x22da090();
   input += synapse0x22d9b20();
   input += synapse0x22d9b60();
   input += synapse0x22da1e0();
   input += synapse0x22da220();
   input += synapse0x22da260();
   input += synapse0x22da2a0();
   input += synapse0x22da2e0();
   input += synapse0x22da320();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22d9990() {
   double input = input0x22d9990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22da360() {
   double input = 1.10032;
   input += synapse0x22da6a0();
   input += synapse0x22da6e0();
   input += synapse0x22da720();
   input += synapse0x22da760();
   input += synapse0x22da7a0();
   input += synapse0x22da7e0();
   input += synapse0x22da820();
   input += synapse0x22da860();
   input += synapse0x22da8a0();
   input += synapse0x22da8e0();
   input += synapse0x22da920();
   input += synapse0x22da960();
   input += synapse0x22da9a0();
   input += synapse0x22da9e0();
   input += synapse0x22daa20();
   input += synapse0x22daa60();
   input += synapse0x22da4f0();
   input += synapse0x22da530();
   input += synapse0x22dabb0();
   input += synapse0x22dabf0();
   input += synapse0x22dac30();
   input += synapse0x22dac70();
   input += synapse0x22dacb0();
   input += synapse0x22dacf0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22da360() {
   double input = input0x22da360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22dad30() {
   double input = -3.44488;
   input += synapse0x22db070();
   input += synapse0x22db0b0();
   input += synapse0x22db0f0();
   input += synapse0x22db130();
   input += synapse0x22db170();
   input += synapse0x22db1b0();
   input += synapse0x22db1f0();
   input += synapse0x22db230();
   input += synapse0x22db270();
   input += synapse0x22db2b0();
   input += synapse0x22db2f0();
   input += synapse0x22db330();
   input += synapse0x22db370();
   input += synapse0x22db3b0();
   input += synapse0x22db3f0();
   input += synapse0x22db430();
   input += synapse0x22daec0();
   input += synapse0x22daf00();
   input += synapse0x22db580();
   input += synapse0x22db5c0();
   input += synapse0x22db600();
   input += synapse0x22db640();
   input += synapse0x22db680();
   input += synapse0x22db6c0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22dad30() {
   double input = input0x22dad30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22db700() {
   double input = 0.894056;
   input += synapse0x22dba40();
   input += synapse0x22dba80();
   input += synapse0x22dbac0();
   input += synapse0x22dbb00();
   input += synapse0x22dbb40();
   input += synapse0x22dbb80();
   input += synapse0x22dbbc0();
   input += synapse0x22dbc00();
   input += synapse0x22dbc40();
   input += synapse0x22d3e00();
   input += synapse0x22d3e40();
   input += synapse0x22d3e80();
   input += synapse0x22d3ec0();
   input += synapse0x22d3f00();
   input += synapse0x22d3f40();
   input += synapse0x22d3f80();
   input += synapse0x22db890();
   input += synapse0x22db8d0();
   input += synapse0x22d40d0();
   input += synapse0x22d4110();
   input += synapse0x22d4150();
   input += synapse0x22d4190();
   input += synapse0x22d41d0();
   input += synapse0x22d4210();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22db700() {
   double input = input0x22db700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22d4250() {
   double input = -0.945794;
   input += synapse0x22d4590();
   input += synapse0x22d45d0();
   input += synapse0x22d4610();
   input += synapse0x22d4650();
   input += synapse0x22d4690();
   input += synapse0x22d46d0();
   input += synapse0x22d4710();
   input += synapse0x22d4750();
   input += synapse0x22d4790();
   input += synapse0x22d47d0();
   input += synapse0x22d4810();
   input += synapse0x22d4850();
   input += synapse0x22d4890();
   input += synapse0x22d48d0();
   input += synapse0x22d4910();
   input += synapse0x22d4950();
   input += synapse0x22d43e0();
   input += synapse0x22d4420();
   input += synapse0x22d4aa0();
   input += synapse0x22d4ae0();
   input += synapse0x22d4b20();
   input += synapse0x22d4b60();
   input += synapse0x22d4ba0();
   input += synapse0x22d4be0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22d4250() {
   double input = input0x22d4250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22d4c20() {
   double input = -0.706109;
   input += synapse0x22d4db0();
   input += synapse0x22dde40();
   input += synapse0x22dde80();
   input += synapse0x22ddec0();
   input += synapse0x22ddf00();
   input += synapse0x22ddf40();
   input += synapse0x22ddf80();
   input += synapse0x22ddfc0();
   input += synapse0x22de000();
   input += synapse0x22de040();
   input += synapse0x22de080();
   input += synapse0x22de0c0();
   input += synapse0x22de100();
   input += synapse0x22de140();
   input += synapse0x22de180();
   input += synapse0x22de1c0();
   input += synapse0x22ddc90();
   input += synapse0x22ddcd0();
   input += synapse0x22de310();
   input += synapse0x22de350();
   input += synapse0x22de390();
   input += synapse0x22de3d0();
   input += synapse0x22de410();
   input += synapse0x22de450();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22d4c20() {
   double input = input0x22d4c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22de490() {
   double input = -0.434674;
   input += synapse0x22de7d0();
   input += synapse0x22de810();
   input += synapse0x22de850();
   input += synapse0x22de890();
   input += synapse0x22de8d0();
   input += synapse0x22de910();
   input += synapse0x22de950();
   input += synapse0x22de990();
   input += synapse0x22de9d0();
   input += synapse0x22dea10();
   input += synapse0x22dea50();
   input += synapse0x22dea90();
   input += synapse0x22dead0();
   input += synapse0x22deb10();
   input += synapse0x22deb50();
   input += synapse0x22deb90();
   input += synapse0x22de620();
   input += synapse0x22de660();
   input += synapse0x22dece0();
   input += synapse0x22ded20();
   input += synapse0x22ded60();
   input += synapse0x22deda0();
   input += synapse0x22dede0();
   input += synapse0x22dee20();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22de490() {
   double input = input0x22de490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22dee60() {
   double input = -1.3766;
   input += synapse0x22df1a0();
   input += synapse0x22df1e0();
   input += synapse0x22df220();
   input += synapse0x22df260();
   input += synapse0x22df2a0();
   input += synapse0x22df2e0();
   input += synapse0x22df320();
   input += synapse0x22df360();
   input += synapse0x22df3a0();
   input += synapse0x22df3e0();
   input += synapse0x22df420();
   input += synapse0x22df460();
   input += synapse0x22df4a0();
   input += synapse0x22df4e0();
   input += synapse0x22df520();
   input += synapse0x22df560();
   input += synapse0x22deff0();
   input += synapse0x22df030();
   input += synapse0x22df6b0();
   input += synapse0x22df6f0();
   input += synapse0x22df730();
   input += synapse0x22df770();
   input += synapse0x22df7b0();
   input += synapse0x22df7f0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22dee60() {
   double input = input0x22dee60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22df830() {
   double input = -0.59115;
   input += synapse0x22dfb70();
   input += synapse0x22dfbb0();
   input += synapse0x22dfbf0();
   input += synapse0x22dfc30();
   input += synapse0x22dfc70();
   input += synapse0x22dfcb0();
   input += synapse0x22dfcf0();
   input += synapse0x22dfd30();
   input += synapse0x22dfd70();
   input += synapse0x22dfdb0();
   input += synapse0x22dfdf0();
   input += synapse0x22dfe30();
   input += synapse0x22dfe70();
   input += synapse0x22dfeb0();
   input += synapse0x22dfef0();
   input += synapse0x22dff30();
   input += synapse0x22df9c0();
   input += synapse0x22dfa00();
   input += synapse0x22e0080();
   input += synapse0x22e00c0();
   input += synapse0x22e0100();
   input += synapse0x22e0140();
   input += synapse0x22e0180();
   input += synapse0x22e01c0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22df830() {
   double input = input0x22df830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22e0200() {
   double input = 2.19097;
   input += synapse0x22e0540();
   input += synapse0x22e0580();
   input += synapse0x22e05c0();
   input += synapse0x22e0600();
   input += synapse0x22e0640();
   input += synapse0x22e0680();
   input += synapse0x22e06c0();
   input += synapse0x22e0700();
   input += synapse0x22e0740();
   input += synapse0x22e0780();
   input += synapse0x22e07c0();
   input += synapse0x22e0800();
   input += synapse0x22e0840();
   input += synapse0x22e0880();
   input += synapse0x22e08c0();
   input += synapse0x22e0900();
   input += synapse0x22e0390();
   input += synapse0x22e03d0();
   input += synapse0x22e0a50();
   input += synapse0x22e0a90();
   input += synapse0x22e0ad0();
   input += synapse0x22e0b10();
   input += synapse0x22e0b50();
   input += synapse0x22e0b90();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22e0200() {
   double input = input0x22e0200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22e0bd0() {
   double input = -0.291383;
   input += synapse0x22e0f10();
   input += synapse0x22e0f50();
   input += synapse0x22e0f90();
   input += synapse0x22e0fd0();
   input += synapse0x22e1010();
   input += synapse0x22e1050();
   input += synapse0x22e1090();
   input += synapse0x22e10d0();
   input += synapse0x22e1110();
   input += synapse0x22e1150();
   input += synapse0x22e1190();
   input += synapse0x22e11d0();
   input += synapse0x22e1210();
   input += synapse0x22e1250();
   input += synapse0x22e1290();
   input += synapse0x22e12d0();
   input += synapse0x22e0d60();
   input += synapse0x22e0da0();
   input += synapse0x22e1420();
   input += synapse0x22e1460();
   input += synapse0x22e14a0();
   input += synapse0x22e14e0();
   input += synapse0x22e1520();
   input += synapse0x22e1560();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22e0bd0() {
   double input = input0x22e0bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22e15a0() {
   double input = 0.588818;
   input += synapse0x22e18e0();
   input += synapse0x22e1920();
   input += synapse0x22e1960();
   input += synapse0x22e19a0();
   input += synapse0x22e19e0();
   input += synapse0x22e1a20();
   input += synapse0x22e1a60();
   input += synapse0x22e1aa0();
   input += synapse0x22e1ae0();
   input += synapse0x22e1b20();
   input += synapse0x22e1b60();
   input += synapse0x22e1ba0();
   input += synapse0x22e1be0();
   input += synapse0x22e1c20();
   input += synapse0x22e1c60();
   input += synapse0x22e1ca0();
   input += synapse0x22e1730();
   input += synapse0x22e1770();
   input += synapse0x22e1df0();
   input += synapse0x22e1e30();
   input += synapse0x22e1e70();
   input += synapse0x22e1eb0();
   input += synapse0x22e1ef0();
   input += synapse0x22e1f30();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22e15a0() {
   double input = input0x22e15a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22e1f70() {
   double input = -0.785967;
   input += synapse0x22e22b0();
   input += synapse0x22e22f0();
   input += synapse0x22e2330();
   input += synapse0x22e2370();
   input += synapse0x22e23b0();
   input += synapse0x22e23f0();
   input += synapse0x22e2430();
   input += synapse0x22e2470();
   input += synapse0x22e24b0();
   input += synapse0x22e24f0();
   input += synapse0x22e2530();
   input += synapse0x22e2570();
   input += synapse0x22e25b0();
   input += synapse0x22e25f0();
   input += synapse0x22e2630();
   input += synapse0x22e2670();
   input += synapse0x22e2100();
   input += synapse0x22e2140();
   input += synapse0x22e27c0();
   input += synapse0x22e2800();
   input += synapse0x22e2840();
   input += synapse0x22e2880();
   input += synapse0x22e28c0();
   input += synapse0x22e2900();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22e1f70() {
   double input = input0x22e1f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22e2940() {
   double input = 0.924714;
   input += synapse0x22e2c80();
   input += synapse0x22d7250();
   input += synapse0x22d7290();
   input += synapse0x22d72d0();
   input += synapse0x22d7520();
   input += synapse0x22d7560();
   input += synapse0x22d75a0();
   input += synapse0x22d77f0();
   input += synapse0x22d7830();
   input += synapse0x22d7a80();
   input += synapse0x22d7ac0();
   input += synapse0x22d7b00();
   input += synapse0x22d7d50();
   input += synapse0x22d7d90();
   input += synapse0x22d7fe0();
   input += synapse0x22d8020();
   input += synapse0x22e2ad0();
   input += synapse0x22e2b10();
   input += synapse0x22d8170();
   input += synapse0x22d8680();
   input += synapse0x22d86c0();
   input += synapse0x22d8700();
   input += synapse0x22d8950();
   input += synapse0x22d8990();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22e2940() {
   double input = input0x22e2940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22d89d0() {
   double input = -0.381982;
   input += synapse0x22d8240();
   input += synapse0x22d8280();
   input += synapse0x22d82c0();
   input += synapse0x22d8300();
   input += synapse0x22d8c80();
   input += synapse0x22e4fd0();
   input += synapse0x22e5010();
   input += synapse0x22e5050();
   input += synapse0x22e5090();
   input += synapse0x22e50d0();
   input += synapse0x22e5110();
   input += synapse0x22e5150();
   input += synapse0x22e5190();
   input += synapse0x22e51d0();
   input += synapse0x22e5210();
   input += synapse0x22e5250();
   input += synapse0x22d8b60();
   input += synapse0x22d8ba0();
   input += synapse0x22e53a0();
   input += synapse0x22e53e0();
   input += synapse0x22e5420();
   input += synapse0x22e5460();
   input += synapse0x22e54a0();
   input += synapse0x22e54e0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22d89d0() {
   double input = input0x22d89d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22e5520() {
   double input = 0.949839;
   input += synapse0x22e5860();
   input += synapse0x22e58a0();
   input += synapse0x22e58e0();
   input += synapse0x22e5920();
   input += synapse0x22e5960();
   input += synapse0x22e59a0();
   input += synapse0x22e59e0();
   input += synapse0x22e5a20();
   input += synapse0x22e5a60();
   input += synapse0x22e5aa0();
   input += synapse0x22e5ae0();
   input += synapse0x22e5b20();
   input += synapse0x22e5b60();
   input += synapse0x22e5ba0();
   input += synapse0x22e5be0();
   input += synapse0x22e5c20();
   input += synapse0x22e56b0();
   input += synapse0x22e56f0();
   input += synapse0x22e5d70();
   input += synapse0x22e5db0();
   input += synapse0x22e5df0();
   input += synapse0x22e5e30();
   input += synapse0x22e5e70();
   input += synapse0x22e5eb0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22e5520() {
   double input = input0x22e5520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22e5ef0() {
   double input = 1.29388;
   input += synapse0x22e6230();
   input += synapse0x22e6270();
   input += synapse0x22e62b0();
   input += synapse0x22e62f0();
   input += synapse0x22e6330();
   input += synapse0x22e6370();
   input += synapse0x22e63b0();
   input += synapse0x22e63f0();
   input += synapse0x22e6430();
   input += synapse0x22e6470();
   input += synapse0x22e64b0();
   input += synapse0x22e64f0();
   input += synapse0x22e6530();
   input += synapse0x22e6570();
   input += synapse0x22e65b0();
   input += synapse0x22e65f0();
   input += synapse0x22e6080();
   input += synapse0x22e60c0();
   input += synapse0x22e6740();
   input += synapse0x22e6780();
   input += synapse0x22e67c0();
   input += synapse0x22e6800();
   input += synapse0x22e6840();
   input += synapse0x22e6880();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22e5ef0() {
   double input = input0x22e5ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22e68c0() {
   double input = 0.776983;
   input += synapse0x22e6c00();
   input += synapse0x22e6c40();
   input += synapse0x22e6c80();
   input += synapse0x22e6cc0();
   input += synapse0x22e6d00();
   input += synapse0x22e6d40();
   input += synapse0x22e6d80();
   input += synapse0x22e6dc0();
   input += synapse0x22e6e00();
   input += synapse0x22e6e40();
   input += synapse0x22e6e80();
   input += synapse0x22e6ec0();
   input += synapse0x22e6f00();
   input += synapse0x22e6f40();
   input += synapse0x22e6f80();
   input += synapse0x22e6fc0();
   input += synapse0x22e6a50();
   input += synapse0x22e6a90();
   input += synapse0x22e7110();
   input += synapse0x22e7150();
   input += synapse0x22e7190();
   input += synapse0x22e71d0();
   input += synapse0x22e7210();
   input += synapse0x22e7250();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22e68c0() {
   double input = input0x22e68c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22e7290() {
   double input = 1.21516;
   input += synapse0x22e75d0();
   input += synapse0x22e7610();
   input += synapse0x22e7650();
   input += synapse0x22e7690();
   input += synapse0x22e76d0();
   input += synapse0x22e7710();
   input += synapse0x22e7750();
   input += synapse0x22e7790();
   input += synapse0x22e77d0();
   input += synapse0x22e7810();
   input += synapse0x22e7850();
   input += synapse0x22e7890();
   input += synapse0x22e78d0();
   input += synapse0x22e7910();
   input += synapse0x22e7950();
   input += synapse0x22e7990();
   input += synapse0x22e7420();
   input += synapse0x22e7460();
   input += synapse0x22e7ae0();
   input += synapse0x22e7b20();
   input += synapse0x22e7b60();
   input += synapse0x22e7ba0();
   input += synapse0x22e7be0();
   input += synapse0x22e7c20();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22e7290() {
   double input = input0x22e7290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22e7c60() {
   double input = -1.19953;
   input += synapse0x22e7fa0();
   input += synapse0x22e7fe0();
   input += synapse0x22e8020();
   input += synapse0x22e8060();
   input += synapse0x22e80a0();
   input += synapse0x22e80e0();
   input += synapse0x22e8120();
   input += synapse0x22e8160();
   input += synapse0x22e81a0();
   input += synapse0x22e81e0();
   input += synapse0x22e8220();
   input += synapse0x22e8260();
   input += synapse0x22e82a0();
   input += synapse0x22e82e0();
   input += synapse0x22e8320();
   input += synapse0x22e8360();
   input += synapse0x22e7df0();
   input += synapse0x22e7e30();
   input += synapse0x22e84b0();
   input += synapse0x22e84f0();
   input += synapse0x22e8530();
   input += synapse0x22e8570();
   input += synapse0x22e85b0();
   input += synapse0x22e85f0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22e7c60() {
   double input = input0x22e7c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22e8630() {
   double input = -1.02224;
   input += synapse0x22e8970();
   input += synapse0x22e89b0();
   input += synapse0x22e89f0();
   input += synapse0x22e8a30();
   input += synapse0x22e8a70();
   input += synapse0x22e8ab0();
   input += synapse0x22e8af0();
   input += synapse0x22e8b30();
   input += synapse0x22e8b70();
   input += synapse0x22e8bb0();
   input += synapse0x22e8bf0();
   input += synapse0x22e8c30();
   input += synapse0x22e8c70();
   input += synapse0x22e8cb0();
   input += synapse0x22e8cf0();
   input += synapse0x22e8d30();
   input += synapse0x22e87c0();
   input += synapse0x22e8800();
   input += synapse0x22e8e80();
   input += synapse0x22e8ec0();
   input += synapse0x22e8f00();
   input += synapse0x22e8f40();
   input += synapse0x22e8f80();
   input += synapse0x22e8fc0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22e8630() {
   double input = input0x22e8630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22e9000() {
   double input = 0.230481;
   input += synapse0x22e9340();
   input += synapse0x22e9380();
   input += synapse0x22e93c0();
   input += synapse0x22e9400();
   input += synapse0x22e9440();
   input += synapse0x22e9480();
   input += synapse0x22e94c0();
   input += synapse0x22e9500();
   input += synapse0x22e9540();
   input += synapse0x22e9580();
   input += synapse0x22e95c0();
   input += synapse0x22e9600();
   input += synapse0x22e9640();
   input += synapse0x22e9680();
   input += synapse0x22e96c0();
   input += synapse0x22e9700();
   input += synapse0x22e9190();
   input += synapse0x22e91d0();
   input += synapse0x22e9850();
   input += synapse0x22e9890();
   input += synapse0x22e98d0();
   input += synapse0x22e9910();
   input += synapse0x22e9950();
   input += synapse0x22e9990();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22e9000() {
   double input = input0x22e9000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22e99d0() {
   double input = -0.903873;
   input += synapse0x22d2440();
   input += synapse0x22d2480();
   input += synapse0x22d24c0();
   input += synapse0x22d2500();
   input += synapse0x22d2540();
   input += synapse0x22d2580();
   input += synapse0x22d25c0();
   input += synapse0x22d2600();
   input += synapse0x22ea120();
   input += synapse0x22ea160();
   input += synapse0x22ea1a0();
   input += synapse0x22ea1e0();
   input += synapse0x22ea220();
   input += synapse0x22ea260();
   input += synapse0x22ea2a0();
   input += synapse0x22ea2e0();
   input += synapse0x22e9b60();
   input += synapse0x22e9ba0();
   input += synapse0x22ea430();
   input += synapse0x22ea470();
   input += synapse0x22ea4b0();
   input += synapse0x22ea4f0();
   input += synapse0x22ea530();
   input += synapse0x22ea570();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22e99d0() {
   double input = input0x22e99d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22ea5b0() {
   double input = 0.174634;
   input += synapse0x22ea8f0();
   input += synapse0x22ea930();
   input += synapse0x22ea970();
   input += synapse0x22ea9b0();
   input += synapse0x22ea9f0();
   input += synapse0x22eaa30();
   input += synapse0x22eaa70();
   input += synapse0x22eaab0();
   input += synapse0x22eaaf0();
   input += synapse0x22eab30();
   input += synapse0x22eab70();
   input += synapse0x22eabb0();
   input += synapse0x22eabf0();
   input += synapse0x22eac30();
   input += synapse0x22eac70();
   input += synapse0x22eacb0();
   input += synapse0x22ea740();
   input += synapse0x22ea780();
   input += synapse0x22eae00();
   input += synapse0x22eae40();
   input += synapse0x22eae80();
   input += synapse0x22eaec0();
   input += synapse0x22eaf00();
   input += synapse0x22eaf40();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22ea5b0() {
   double input = input0x22ea5b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22eaf80() {
   double input = -3.68515;
   input += synapse0x22eb2c0();
   input += synapse0x22eb300();
   input += synapse0x22eb340();
   input += synapse0x22eb380();
   input += synapse0x22eb3c0();
   input += synapse0x22eb400();
   input += synapse0x22eb440();
   input += synapse0x22eb480();
   input += synapse0x22eb4c0();
   input += synapse0x22eb500();
   input += synapse0x22eb540();
   input += synapse0x22eb580();
   input += synapse0x22eb5c0();
   input += synapse0x22eb600();
   input += synapse0x22eb640();
   input += synapse0x22eb680();
   input += synapse0x22eb110();
   input += synapse0x22eb150();
   input += synapse0x22dbc80();
   input += synapse0x22dbcc0();
   input += synapse0x22dbd00();
   input += synapse0x22dbd40();
   input += synapse0x22dbd80();
   input += synapse0x22dbdc0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22eaf80() {
   double input = input0x22eaf80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22dbe00() {
   double input = 0.766379;
   input += synapse0x22dc140();
   input += synapse0x22dc180();
   input += synapse0x22dc1c0();
   input += synapse0x22dc200();
   input += synapse0x22dc240();
   input += synapse0x22dc280();
   input += synapse0x22dc2c0();
   input += synapse0x22dc300();
   input += synapse0x22dc340();
   input += synapse0x22dc380();
   input += synapse0x22dc3c0();
   input += synapse0x22dc400();
   input += synapse0x22dc440();
   input += synapse0x22dc480();
   input += synapse0x22dc4c0();
   input += synapse0x22dc500();
   input += synapse0x22dbf90();
   input += synapse0x22dbfd0();
   input += synapse0x22dc650();
   input += synapse0x22dc690();
   input += synapse0x22dc6d0();
   input += synapse0x22dc710();
   input += synapse0x22dc750();
   input += synapse0x22dc790();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22dbe00() {
   double input = input0x22dbe00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22dc7d0() {
   double input = 1.126;
   input += synapse0x22dcb10();
   input += synapse0x22dcb50();
   input += synapse0x22dcb90();
   input += synapse0x22dcbd0();
   input += synapse0x22dcc10();
   input += synapse0x22dcc50();
   input += synapse0x22dcc90();
   input += synapse0x22dccd0();
   input += synapse0x22dcd10();
   input += synapse0x22dcd50();
   input += synapse0x22dcd90();
   input += synapse0x22dcdd0();
   input += synapse0x22dce10();
   input += synapse0x22dce50();
   input += synapse0x22dce90();
   input += synapse0x22dced0();
   input += synapse0x22dc960();
   input += synapse0x22dc9a0();
   input += synapse0x22dd020();
   input += synapse0x22dd060();
   input += synapse0x22dd0a0();
   input += synapse0x22dd0e0();
   input += synapse0x22dd120();
   input += synapse0x22dd160();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22dc7d0() {
   double input = input0x22dc7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22dd1a0() {
   double input = 2.00897;
   input += synapse0x22dd4e0();
   input += synapse0x22dd520();
   input += synapse0x22dd560();
   input += synapse0x22dd5a0();
   input += synapse0x22dd5e0();
   input += synapse0x22dd620();
   input += synapse0x22dd660();
   input += synapse0x22dd6a0();
   input += synapse0x22dd6e0();
   input += synapse0x22dd720();
   input += synapse0x22dd760();
   input += synapse0x22dd7a0();
   input += synapse0x22dd7e0();
   input += synapse0x22dd820();
   input += synapse0x22dd860();
   input += synapse0x22dd8a0();
   input += synapse0x22dd330();
   input += synapse0x22dd370();
   input += synapse0x22dd9f0();
   input += synapse0x22dda30();
   input += synapse0x22dda70();
   input += synapse0x22ddab0();
   input += synapse0x22ddaf0();
   input += synapse0x22ddb30();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22dd1a0() {
   double input = input0x22dd1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22ef7e0() {
   double input = -0.387721;
   input += synapse0x22efa00();
   input += synapse0x22efa40();
   input += synapse0x22efa80();
   input += synapse0x22efac0();
   input += synapse0x22efb00();
   input += synapse0x22efb40();
   input += synapse0x22efb80();
   input += synapse0x22efbc0();
   input += synapse0x22efc00();
   input += synapse0x22efc40();
   input += synapse0x22efc80();
   input += synapse0x22efcc0();
   input += synapse0x22efd00();
   input += synapse0x22efd40();
   input += synapse0x22efd80();
   input += synapse0x22efdc0();
   input += synapse0x22ddb70();
   input += synapse0x22ddbb0();
   input += synapse0x22eff10();
   input += synapse0x22eff50();
   input += synapse0x22eff90();
   input += synapse0x22effd0();
   input += synapse0x22f0010();
   input += synapse0x22f0050();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22ef7e0() {
   double input = input0x22ef7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22f0090() {
   double input = 0.602179;
   input += synapse0x22f03d0();
   input += synapse0x22f0410();
   input += synapse0x22f0450();
   input += synapse0x22f0490();
   input += synapse0x22f04d0();
   input += synapse0x22f0510();
   input += synapse0x22f0550();
   input += synapse0x22f0590();
   input += synapse0x22f05d0();
   input += synapse0x22f0610();
   input += synapse0x22f0650();
   input += synapse0x22f0690();
   input += synapse0x22f06d0();
   input += synapse0x22f0710();
   input += synapse0x22f0750();
   input += synapse0x22f0790();
   input += synapse0x22f0220();
   input += synapse0x22f0260();
   input += synapse0x22f08e0();
   input += synapse0x22f0920();
   input += synapse0x22f0960();
   input += synapse0x22f09a0();
   input += synapse0x22f09e0();
   input += synapse0x22f0a20();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22f0090() {
   double input = input0x22f0090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22f0a60() {
   double input = 0.297689;
   input += synapse0x22f0da0();
   input += synapse0x22f0de0();
   input += synapse0x22f0e20();
   input += synapse0x22f0e60();
   input += synapse0x22f0ea0();
   input += synapse0x22f0ee0();
   input += synapse0x22f0f20();
   input += synapse0x22f0f60();
   input += synapse0x22f0fa0();
   input += synapse0x22f0fe0();
   input += synapse0x22f1020();
   input += synapse0x22f1060();
   input += synapse0x22f10a0();
   input += synapse0x22f10e0();
   input += synapse0x22f1120();
   input += synapse0x22f1160();
   input += synapse0x22f0bf0();
   input += synapse0x22f0c30();
   input += synapse0x22f12b0();
   input += synapse0x22f12f0();
   input += synapse0x22f1330();
   input += synapse0x22f1370();
   input += synapse0x22f13b0();
   input += synapse0x22f13f0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22f0a60() {
   double input = input0x22f0a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22f1430() {
   double input = 1.16393;
   input += synapse0x22f1770();
   input += synapse0x22f17b0();
   input += synapse0x22f17f0();
   input += synapse0x22f1830();
   input += synapse0x22f1870();
   input += synapse0x22f18b0();
   input += synapse0x22f18f0();
   input += synapse0x22f1930();
   input += synapse0x22f1970();
   input += synapse0x22f19b0();
   input += synapse0x22f19f0();
   input += synapse0x22f1a30();
   input += synapse0x22f1a70();
   input += synapse0x22f1ab0();
   input += synapse0x22f1af0();
   input += synapse0x22f1b30();
   input += synapse0x22f15c0();
   input += synapse0x22f1600();
   input += synapse0x22f1c80();
   input += synapse0x22f1cc0();
   input += synapse0x22f1d00();
   input += synapse0x22f1d40();
   input += synapse0x22f1d80();
   input += synapse0x22f1dc0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22f1430() {
   double input = input0x22f1430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22f8630() {
   double input = 0.539431;
   input += synapse0x2091cd0();
   input += synapse0x2091d10();
   input += synapse0x22cf870();
   input += synapse0x22cf8b0();
   input += synapse0x22d0240();
   input += synapse0x22d0280();
   input += synapse0x22d1010();
   input += synapse0x22d1050();
   input += synapse0x22d19e0();
   input += synapse0x22d1a20();
   input += synapse0x22d23b0();
   input += synapse0x22d23f0();
   input += synapse0x22d2e90();
   input += synapse0x22d2ed0();
   input += synapse0x22d3860();
   input += synapse0x22d38a0();
   input += synapse0x22d0940();
   input += synapse0x22d0980();
   input += synapse0x22d5410();
   input += synapse0x22d5450();
   input += synapse0x22d5de0();
   input += synapse0x22d5e20();
   input += synapse0x22d67b0();
   input += synapse0x22d67f0();
   input += synapse0x22d7180();
   input += synapse0x22d71c0();
   input += synapse0x22cb320();
   input += synapse0x22cb360();
   input += synapse0x22d9270();
   input += synapse0x22d92b0();
   input += synapse0x22d9c40();
   input += synapse0x22d9c80();
   input += synapse0x22da610();
   input += synapse0x22da650();
   input += synapse0x22dafe0();
   input += synapse0x22db020();
   input += synapse0x22db9b0();
   input += synapse0x22db9f0();
   input += synapse0x22d4500();
   input += synapse0x22d4540();
   input += synapse0x22dddb0();
   input += synapse0x22dddf0();
   input += synapse0x22de740();
   input += synapse0x22de780();
   input += synapse0x22df110();
   input += synapse0x22df150();
   input += synapse0x22dfae0();
   input += synapse0x22dfb20();
   input += synapse0x22e04b0();
   input += synapse0x22e04f0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22f8630() {
   double input = input0x22f8630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22f89d0() {
   double input = -1.08237;
   input += synapse0x22e2bf0();
   input += synapse0x22e2c30();
   input += synapse0x22d81b0();
   input += synapse0x22d81f0();
   input += synapse0x22e57d0();
   input += synapse0x22e5810();
   input += synapse0x22e61a0();
   input += synapse0x22e61e0();
   input += synapse0x22e6b70();
   input += synapse0x22e6bb0();
   input += synapse0x22e7540();
   input += synapse0x22e7580();
   input += synapse0x22e7f10();
   input += synapse0x22e7f50();
   input += synapse0x22e88e0();
   input += synapse0x22e8920();
   input += synapse0x22e92b0();
   input += synapse0x22e92f0();
   input += synapse0x22e9c80();
   input += synapse0x22e9cc0();
   input += synapse0x22ea860();
   input += synapse0x22ea8a0();
   input += synapse0x22eb230();
   input += synapse0x22eb270();
   input += synapse0x22dc0b0();
   input += synapse0x22dc0f0();
   input += synapse0x22dca80();
   input += synapse0x22dcac0();
   input += synapse0x22dd450();
   input += synapse0x22dd490();
   input += synapse0x22ef970();
   input += synapse0x22ef9b0();
   input += synapse0x22f0340();
   input += synapse0x22f0380();
   input += synapse0x22f0d10();
   input += synapse0x22f0d50();
   input += synapse0x22f16e0();
   input += synapse0x22f1720();
   input += synapse0x22cd5d0();
   input += synapse0x22cd610();
   input += synapse0x22e0e80();
   input += synapse0x22e0ec0();
   input += synapse0x22f1e00();
   input += synapse0x22f1e40();
   input += synapse0x22f1e80();
   input += synapse0x22f1ec0();
   input += synapse0x22f8d70();
   input += synapse0x22f8db0();
   input += synapse0x22f8df0();
   input += synapse0x22f8e30();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22f89d0() {
   double input = input0x22f89d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22f8e70() {
   double input = 0.979759;
   input += synapse0x22f91b0();
   input += synapse0x22f91f0();
   input += synapse0x22f9230();
   input += synapse0x22f9270();
   input += synapse0x22f92b0();
   input += synapse0x22f92f0();
   input += synapse0x22f9330();
   input += synapse0x22f9370();
   input += synapse0x22f93b0();
   input += synapse0x22f93f0();
   input += synapse0x22f9430();
   input += synapse0x22f9470();
   input += synapse0x22f94b0();
   input += synapse0x22f94f0();
   input += synapse0x22f9530();
   input += synapse0x22f9570();
   input += synapse0x22f9000();
   input += synapse0x22f9040();
   input += synapse0x22f96c0();
   input += synapse0x22f9700();
   input += synapse0x22f9740();
   input += synapse0x22f9780();
   input += synapse0x22f97c0();
   input += synapse0x22f9800();
   input += synapse0x22f9840();
   input += synapse0x22f9880();
   input += synapse0x22f98c0();
   input += synapse0x22f9900();
   input += synapse0x22f9940();
   input += synapse0x22f9980();
   input += synapse0x22f99c0();
   input += synapse0x22f9a00();
   input += synapse0x22f95b0();
   input += synapse0x22f95f0();
   input += synapse0x22f9630();
   input += synapse0x22f9670();
   input += synapse0x22f9c50();
   input += synapse0x22f9c90();
   input += synapse0x22f9cd0();
   input += synapse0x22f9d10();
   input += synapse0x22f9d50();
   input += synapse0x22f9d90();
   input += synapse0x22f9dd0();
   input += synapse0x22f9e10();
   input += synapse0x22f9e50();
   input += synapse0x22f9e90();
   input += synapse0x22f9ed0();
   input += synapse0x22f9f10();
   input += synapse0x22f9f50();
   input += synapse0x22f9f90();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22f8e70() {
   double input = input0x22f8e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22f9fd0() {
   double input = -1.00012;
   input += synapse0x22fa310();
   input += synapse0x22fa350();
   input += synapse0x22fa390();
   input += synapse0x22fa3d0();
   input += synapse0x22fa410();
   input += synapse0x22fa450();
   input += synapse0x22fa490();
   input += synapse0x22fa4d0();
   input += synapse0x22fa510();
   input += synapse0x22fa550();
   input += synapse0x22fa590();
   input += synapse0x22fa5d0();
   input += synapse0x22fa610();
   input += synapse0x22fa650();
   input += synapse0x22fa690();
   input += synapse0x22fa6d0();
   input += synapse0x22fa160();
   input += synapse0x22fa1a0();
   input += synapse0x22fa820();
   input += synapse0x22fa860();
   input += synapse0x22fa8a0();
   input += synapse0x22fa8e0();
   input += synapse0x22fa920();
   input += synapse0x22fa960();
   input += synapse0x22fa9a0();
   input += synapse0x22fa9e0();
   input += synapse0x22faa20();
   input += synapse0x22faa60();
   input += synapse0x22faaa0();
   input += synapse0x22faae0();
   input += synapse0x22fab20();
   input += synapse0x22fab60();
   input += synapse0x22fa710();
   input += synapse0x22fa750();
   input += synapse0x22fa790();
   input += synapse0x22fa7d0();
   input += synapse0x22fadb0();
   input += synapse0x22fadf0();
   input += synapse0x22fae30();
   input += synapse0x22fae70();
   input += synapse0x22faeb0();
   input += synapse0x22faef0();
   input += synapse0x22faf30();
   input += synapse0x22faf70();
   input += synapse0x22fafb0();
   input += synapse0x22faff0();
   input += synapse0x22fb030();
   input += synapse0x22fb070();
   input += synapse0x22fb0b0();
   input += synapse0x22fb0f0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22f9fd0() {
   double input = input0x22f9fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22fb130() {
   double input = 0.61172;
   input += synapse0x22fb470();
   input += synapse0x22fb4b0();
   input += synapse0x22fb4f0();
   input += synapse0x22fb530();
   input += synapse0x22fb570();
   input += synapse0x22fb5b0();
   input += synapse0x22fb5f0();
   input += synapse0x22fb630();
   input += synapse0x22fb670();
   input += synapse0x22fb6b0();
   input += synapse0x22fb6f0();
   input += synapse0x22fb730();
   input += synapse0x22fb770();
   input += synapse0x22fb7b0();
   input += synapse0x22fb7f0();
   input += synapse0x22fb830();
   input += synapse0x22fb2c0();
   input += synapse0x22fb300();
   input += synapse0x22fb980();
   input += synapse0x22fb9c0();
   input += synapse0x22fba00();
   input += synapse0x22fba40();
   input += synapse0x22fba80();
   input += synapse0x22fbac0();
   input += synapse0x22fbb00();
   input += synapse0x22fbb40();
   input += synapse0x22fbb80();
   input += synapse0x22fbbc0();
   input += synapse0x22fbc00();
   input += synapse0x22fbc40();
   input += synapse0x22fbc80();
   input += synapse0x22fbcc0();
   input += synapse0x22fb870();
   input += synapse0x22fb8b0();
   input += synapse0x22fb8f0();
   input += synapse0x22fb930();
   input += synapse0x22fbf10();
   input += synapse0x22fbf50();
   input += synapse0x22fbf90();
   input += synapse0x22fbfd0();
   input += synapse0x22fc010();
   input += synapse0x22fc050();
   input += synapse0x22fc090();
   input += synapse0x22fc0d0();
   input += synapse0x22fc110();
   input += synapse0x22fc150();
   input += synapse0x22fc190();
   input += synapse0x22fc1d0();
   input += synapse0x22fc210();
   input += synapse0x22fc250();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22fb130() {
   double input = input0x22fb130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x22fc290() {
   double input = 4.64901;
   input += synapse0x22fc4b0();
   input += synapse0x22fc4f0();
   input += synapse0x22fc530();
   input += synapse0x22fc570();
   input += synapse0x22fc5b0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x22fc290() {
   double input = input0x22fc290();
   return (input * 1)+0;
}

double NNfunction_sb_sLdR::synapse0x22c8240() {
   return (neuron0x22c8380()*0.0128451);
}

double NNfunction_sb_sLdR::synapse0x22c8280() {
   return (neuron0x22c86c0()*-0.0535738);
}

double NNfunction_sb_sLdR::synapse0x22cd660() {
   return (neuron0x22c8a00()*-0.341345);
}

double NNfunction_sb_sLdR::synapse0x22cd6a0() {
   return (neuron0x22c8d40()*-0.186614);
}

double NNfunction_sb_sLdR::synapse0x22cd6e0() {
   return (neuron0x22c9080()*0.0565713);
}

double NNfunction_sb_sLdR::synapse0x22cd720() {
   return (neuron0x22c93c0()*-0.178401);
}

double NNfunction_sb_sLdR::synapse0x22cd760() {
   return (neuron0x22c9700()*0.183758);
}

double NNfunction_sb_sLdR::synapse0x22cd7a0() {
   return (neuron0x22c9a40()*-0.0543342);
}

double NNfunction_sb_sLdR::synapse0x22cd7e0() {
   return (neuron0x22c9d80()*0.606764);
}

double NNfunction_sb_sLdR::synapse0x22cd820() {
   return (neuron0x22ca0c0()*-0.772876);
}

double NNfunction_sb_sLdR::synapse0x22cd860() {
   return (neuron0x22ca400()*-0.150922);
}

double NNfunction_sb_sLdR::synapse0x22cd8a0() {
   return (neuron0x22ca740()*-0.204033);
}

double NNfunction_sb_sLdR::synapse0x22cd8e0() {
   return (neuron0x22caa80()*0.747136);
}

double NNfunction_sb_sLdR::synapse0x22cd920() {
   return (neuron0x22cadc0()*1.02442);
}

double NNfunction_sb_sLdR::synapse0x22cd960() {
   return (neuron0x22cb100()*0.153977);
}

double NNfunction_sb_sLdR::synapse0x22cd9a0() {
   return (neuron0x22cb440()*-0.0294274);
}

double NNfunction_sb_sLdR::synapse0x22c81b0() {
   return (neuron0x22cb780()*-0.243944);
}

double NNfunction_sb_sLdR::synapse0x22c81f0() {
   return (neuron0x22cbce0()*1.03028);
}

double NNfunction_sb_sLdR::synapse0x2083570() {
   return (neuron0x22cbf00()*-0.500689);
}

double NNfunction_sb_sLdR::synapse0x20835b0() {
   return (neuron0x22cc240()*0.772983);
}

double NNfunction_sb_sLdR::synapse0x22cdc00() {
   return (neuron0x22cc580()*-0.543569);
}

double NNfunction_sb_sLdR::synapse0x22cdc40() {
   return (neuron0x22cc8c0()*-0.86557);
}

double NNfunction_sb_sLdR::synapse0x22cdc80() {
   return (neuron0x22ccc00()*0.0921799);
}

double NNfunction_sb_sLdR::synapse0x22cdcc0() {
   return (neuron0x22ccf40()*-0.150807);
}

double NNfunction_sb_sLdR::synapse0x22ce040() {
   return (neuron0x22c8380()*0.051527);
}

double NNfunction_sb_sLdR::synapse0x22ce080() {
   return (neuron0x22c86c0()*0.0130827);
}

double NNfunction_sb_sLdR::synapse0x22ce0c0() {
   return (neuron0x22c8a00()*0.0867265);
}

double NNfunction_sb_sLdR::synapse0x22ce100() {
   return (neuron0x22c8d40()*-0.0670221);
}

double NNfunction_sb_sLdR::synapse0x22ce140() {
   return (neuron0x22c9080()*0.0262142);
}

double NNfunction_sb_sLdR::synapse0x22ce180() {
   return (neuron0x22c93c0()*-0.0213196);
}

double NNfunction_sb_sLdR::synapse0x22ce1c0() {
   return (neuron0x22c9700()*0.0114502);
}

double NNfunction_sb_sLdR::synapse0x22ce200() {
   return (neuron0x22c9a40()*-0.0181278);
}

double NNfunction_sb_sLdR::synapse0x22ce240() {
   return (neuron0x22c9d80()*0.0279117);
}

double NNfunction_sb_sLdR::synapse0x22cdaf0() {
   return (neuron0x22ca0c0()*0.0230895);
}

double NNfunction_sb_sLdR::synapse0x22cdb30() {
   return (neuron0x22ca400()*0.00293558);
}

double NNfunction_sb_sLdR::synapse0x22cdb70() {
   return (neuron0x22ca740()*0.0374405);
}

double NNfunction_sb_sLdR::synapse0x22cdbb0() {
   return (neuron0x22caa80()*0.414706);
}

double NNfunction_sb_sLdR::synapse0x22ce490() {
   return (neuron0x22cadc0()*0.0223139);
}

double NNfunction_sb_sLdR::synapse0x22ce4d0() {
   return (neuron0x22cb100()*0.0363673);
}

double NNfunction_sb_sLdR::synapse0x22ce510() {
   return (neuron0x22cb440()*0.0260848);
}

double NNfunction_sb_sLdR::synapse0x22cde90() {
   return (neuron0x22cb780()*-0.00292425);
}

double NNfunction_sb_sLdR::synapse0x22cded0() {
   return (neuron0x22cbce0()*-2.05394);
}

double NNfunction_sb_sLdR::synapse0x22ce660() {
   return (neuron0x22cbf00()*0.017833);
}

double NNfunction_sb_sLdR::synapse0x22ce6a0() {
   return (neuron0x22cc240()*0.0299968);
}

double NNfunction_sb_sLdR::synapse0x22ce6e0() {
   return (neuron0x22cc580()*0.0437702);
}

double NNfunction_sb_sLdR::synapse0x22ce720() {
   return (neuron0x22cc8c0()*-0.0736776);
}

double NNfunction_sb_sLdR::synapse0x22ce760() {
   return (neuron0x22ccc00()*0.0483202);
}

double NNfunction_sb_sLdR::synapse0x22ce7a0() {
   return (neuron0x22ccf40()*0.0479769);
}

double NNfunction_sb_sLdR::synapse0x22ceb20() {
   return (neuron0x22c8380()*0.0913599);
}

double NNfunction_sb_sLdR::synapse0x22ceb60() {
   return (neuron0x22c86c0()*0.0389935);
}

double NNfunction_sb_sLdR::synapse0x22ceba0() {
   return (neuron0x22c8a00()*-0.0869658);
}

double NNfunction_sb_sLdR::synapse0x22cebe0() {
   return (neuron0x22c8d40()*1.3272);
}

double NNfunction_sb_sLdR::synapse0x22cec20() {
   return (neuron0x22c9080()*-0.0151169);
}

double NNfunction_sb_sLdR::synapse0x22cec60() {
   return (neuron0x22c93c0()*-0.0209901);
}

double NNfunction_sb_sLdR::synapse0x22ceca0() {
   return (neuron0x22c9700()*0.0218437);
}

double NNfunction_sb_sLdR::synapse0x22cece0() {
   return (neuron0x22c9a40()*-0.0122574);
}

double NNfunction_sb_sLdR::synapse0x22ced20() {
   return (neuron0x22c9d80()*-0.00691582);
}

double NNfunction_sb_sLdR::synapse0x22ced60() {
   return (neuron0x22ca0c0()*-0.0599842);
}

double NNfunction_sb_sLdR::synapse0x22ceda0() {
   return (neuron0x22ca400()*-0.0312364);
}

double NNfunction_sb_sLdR::synapse0x22cede0() {
   return (neuron0x22ca740()*-0.0722242);
}

double NNfunction_sb_sLdR::synapse0x22cee20() {
   return (neuron0x22caa80()*0.0978609);
}

double NNfunction_sb_sLdR::synapse0x22cee60() {
   return (neuron0x22cadc0()*-0.0565414);
}

double NNfunction_sb_sLdR::synapse0x22ceea0() {
   return (neuron0x22cb100()*-0.0134787);
}

double NNfunction_sb_sLdR::synapse0x22ceee0() {
   return (neuron0x22cb440()*-0.0328315);
}

double NNfunction_sb_sLdR::synapse0x22ce970() {
   return (neuron0x22cb780()*-0.0558605);
}

double NNfunction_sb_sLdR::synapse0x22ce9b0() {
   return (neuron0x22cbce0()*0.0705975);
}

double NNfunction_sb_sLdR::synapse0x2083c10() {
   return (neuron0x22cbf00()*-0.0440713);
}

double NNfunction_sb_sLdR::synapse0x20914e0() {
   return (neuron0x22cc240()*0.00986453);
}

double NNfunction_sb_sLdR::synapse0x2091520() {
   return (neuron0x22cc580()*-0.00846398);
}

double NNfunction_sb_sLdR::synapse0x22b7410() {
   return (neuron0x22cc8c0()*-0.0303123);
}

double NNfunction_sb_sLdR::synapse0x22b7450() {
   return (neuron0x22ccc00()*0.0176188);
}

double NNfunction_sb_sLdR::synapse0x22b7490() {
   return (neuron0x22ccf40()*0.0280389);
}

double NNfunction_sb_sLdR::synapse0x2091d60() {
   return (neuron0x22c8380()*0.0479513);
}

double NNfunction_sb_sLdR::synapse0x22ce410() {
   return (neuron0x22c86c0()*0.0151103);
}

double NNfunction_sb_sLdR::synapse0x22ce450() {
   return (neuron0x22c8a00()*0.0367257);
}

double NNfunction_sb_sLdR::synapse0x22cf030() {
   return (neuron0x22c8d40()*-3.97054);
}

double NNfunction_sb_sLdR::synapse0x22cf070() {
   return (neuron0x22c9080()*-0.0330904);
}

double NNfunction_sb_sLdR::synapse0x22cf0b0() {
   return (neuron0x22c93c0()*-0.00469898);
}

double NNfunction_sb_sLdR::synapse0x22cf0f0() {
   return (neuron0x22c9700()*-0.0540541);
}

double NNfunction_sb_sLdR::synapse0x22cf130() {
   return (neuron0x22c9a40()*0.0138508);
}

double NNfunction_sb_sLdR::synapse0x22cf170() {
   return (neuron0x22c9d80()*-0.0215222);
}

double NNfunction_sb_sLdR::synapse0x22cf1b0() {
   return (neuron0x22ca0c0()*-0.0300905);
}

double NNfunction_sb_sLdR::synapse0x22cf1f0() {
   return (neuron0x22ca400()*-0.0209054);
}

double NNfunction_sb_sLdR::synapse0x22cf230() {
   return (neuron0x22ca740()*-0.0734122);
}

double NNfunction_sb_sLdR::synapse0x22cf270() {
   return (neuron0x22caa80()*-0.151672);
}

double NNfunction_sb_sLdR::synapse0x22cf2b0() {
   return (neuron0x22cadc0()*-0.0525814);
}

double NNfunction_sb_sLdR::synapse0x22cf2f0() {
   return (neuron0x22cb100()*0.046575);
}

double NNfunction_sb_sLdR::synapse0x22cf330() {
   return (neuron0x22cb440()*-0.083189);
}

double NNfunction_sb_sLdR::synapse0x22c82c0() {
   return (neuron0x22cb780()*0.0226974);
}

double NNfunction_sb_sLdR::synapse0x22c8300() {
   return (neuron0x22cbce0()*1.06274);
}

double NNfunction_sb_sLdR::synapse0x22c8340() {
   return (neuron0x22cbf00()*-0.0597067);
}

double NNfunction_sb_sLdR::synapse0x22cf480() {
   return (neuron0x22cc240()*0.0463863);
}

double NNfunction_sb_sLdR::synapse0x22cf4c0() {
   return (neuron0x22cc580()*0.023282);
}

double NNfunction_sb_sLdR::synapse0x22cf500() {
   return (neuron0x22cc8c0()*-0.034303);
}

double NNfunction_sb_sLdR::synapse0x22cf540() {
   return (neuron0x22ccc00()*0.0136566);
}

double NNfunction_sb_sLdR::synapse0x22cf580() {
   return (neuron0x22ccf40()*0.0401346);
}

double NNfunction_sb_sLdR::synapse0x22cf900() {
   return (neuron0x22c8380()*-0.168666);
}

double NNfunction_sb_sLdR::synapse0x22cf940() {
   return (neuron0x22c86c0()*0.0903322);
}

double NNfunction_sb_sLdR::synapse0x22cf980() {
   return (neuron0x22c8a00()*0.0192866);
}

double NNfunction_sb_sLdR::synapse0x22cf9c0() {
   return (neuron0x22c8d40()*1.1497);
}

double NNfunction_sb_sLdR::synapse0x22cfa00() {
   return (neuron0x22c9080()*-0.301651);
}

double NNfunction_sb_sLdR::synapse0x22cfa40() {
   return (neuron0x22c93c0()*-0.0605259);
}

double NNfunction_sb_sLdR::synapse0x22cfa80() {
   return (neuron0x22c9700()*-0.413675);
}

double NNfunction_sb_sLdR::synapse0x22cfac0() {
   return (neuron0x22c9a40()*0.113189);
}

double NNfunction_sb_sLdR::synapse0x22cfb00() {
   return (neuron0x22c9d80()*-0.0899658);
}

double NNfunction_sb_sLdR::synapse0x22cfb40() {
   return (neuron0x22ca0c0()*0.0751986);
}

double NNfunction_sb_sLdR::synapse0x22cfb80() {
   return (neuron0x22ca400()*0.110191);
}

double NNfunction_sb_sLdR::synapse0x22cfbc0() {
   return (neuron0x22ca740()*0.0802276);
}

double NNfunction_sb_sLdR::synapse0x22cfc00() {
   return (neuron0x22caa80()*1.03075);
}

double NNfunction_sb_sLdR::synapse0x22cfc40() {
   return (neuron0x22cadc0()*-0.351751);
}

double NNfunction_sb_sLdR::synapse0x22cfc80() {
   return (neuron0x22cb100()*0.0953195);
}

double NNfunction_sb_sLdR::synapse0x22cfcc0() {
   return (neuron0x22cb440()*0.261691);
}

double NNfunction_sb_sLdR::synapse0x22cf750() {
   return (neuron0x22cb780()*0.0594268);
}

double NNfunction_sb_sLdR::synapse0x22cf790() {
   return (neuron0x22cbce0()*0.401943);
}

double NNfunction_sb_sLdR::synapse0x22cfe10() {
   return (neuron0x22cbf00()*0.181696);
}

double NNfunction_sb_sLdR::synapse0x22cfe50() {
   return (neuron0x22cc240()*-0.0986268);
}

double NNfunction_sb_sLdR::synapse0x22cfe90() {
   return (neuron0x22cc580()*0.00552209);
}

double NNfunction_sb_sLdR::synapse0x22cfed0() {
   return (neuron0x22cc8c0()*0.0734301);
}

double NNfunction_sb_sLdR::synapse0x22cff10() {
   return (neuron0x22ccc00()*0.0400595);
}

double NNfunction_sb_sLdR::synapse0x22cff50() {
   return (neuron0x22ccf40()*0.0633321);
}

double NNfunction_sb_sLdR::synapse0x22d02d0() {
   return (neuron0x22c8380()*-0.547572);
}

double NNfunction_sb_sLdR::synapse0x22d0310() {
   return (neuron0x22c86c0()*-0.0428632);
}

double NNfunction_sb_sLdR::synapse0x22d0350() {
   return (neuron0x22c8a00()*0.213757);
}

double NNfunction_sb_sLdR::synapse0x22d0390() {
   return (neuron0x22c8d40()*0.152049);
}

double NNfunction_sb_sLdR::synapse0x22d03d0() {
   return (neuron0x22c9080()*0.281918);
}

double NNfunction_sb_sLdR::synapse0x22d0410() {
   return (neuron0x22c93c0()*-0.0661766);
}

double NNfunction_sb_sLdR::synapse0x22d0450() {
   return (neuron0x22c9700()*-0.164436);
}

double NNfunction_sb_sLdR::synapse0x22d0490() {
   return (neuron0x22c9a40()*-0.431126);
}

double NNfunction_sb_sLdR::synapse0x22d04d0() {
   return (neuron0x22c9d80()*0.27235);
}

double NNfunction_sb_sLdR::synapse0x2091830() {
   return (neuron0x22ca0c0()*-0.314353);
}

double NNfunction_sb_sLdR::synapse0x2091870() {
   return (neuron0x22ca400()*0.0106163);
}

double NNfunction_sb_sLdR::synapse0x20918b0() {
   return (neuron0x22ca740()*-0.17859);
}

double NNfunction_sb_sLdR::synapse0x20918f0() {
   return (neuron0x22caa80()*-0.096683);
}

double NNfunction_sb_sLdR::synapse0x2091930() {
   return (neuron0x22cadc0()*0.153256);
}

double NNfunction_sb_sLdR::synapse0x2091970() {
   return (neuron0x22cb100()*-0.445741);
}

double NNfunction_sb_sLdR::synapse0x20919b0() {
   return (neuron0x22cb440()*-0.269519);
}

double NNfunction_sb_sLdR::synapse0x22d0120() {
   return (neuron0x22cb780()*0.0501576);
}

double NNfunction_sb_sLdR::synapse0x22d0160() {
   return (neuron0x22cbce0()*-0.266024);
}

double NNfunction_sb_sLdR::synapse0x2091b00() {
   return (neuron0x22cbf00()*0.129756);
}

double NNfunction_sb_sLdR::synapse0x2091b40() {
   return (neuron0x22cc240()*0.382229);
}

double NNfunction_sb_sLdR::synapse0x2091b80() {
   return (neuron0x22cc580()*0.141293);
}

double NNfunction_sb_sLdR::synapse0x2091bc0() {
   return (neuron0x22cc8c0()*-0.21094);
}

double NNfunction_sb_sLdR::synapse0x2091c00() {
   return (neuron0x22ccc00()*0.0171735);
}

double NNfunction_sb_sLdR::synapse0x22d0d20() {
   return (neuron0x22ccf40()*-0.0216786);
}

double NNfunction_sb_sLdR::synapse0x22d10a0() {
   return (neuron0x22c8380()*0.589229);
}

double NNfunction_sb_sLdR::synapse0x22d10e0() {
   return (neuron0x22c86c0()*0.719194);
}

double NNfunction_sb_sLdR::synapse0x22d1120() {
   return (neuron0x22c8a00()*0.188421);
}

double NNfunction_sb_sLdR::synapse0x22d1160() {
   return (neuron0x22c8d40()*-0.180178);
}

double NNfunction_sb_sLdR::synapse0x22d11a0() {
   return (neuron0x22c9080()*0.832332);
}

double NNfunction_sb_sLdR::synapse0x22d11e0() {
   return (neuron0x22c93c0()*0.265157);
}

double NNfunction_sb_sLdR::synapse0x22d1220() {
   return (neuron0x22c9700()*0.236158);
}

double NNfunction_sb_sLdR::synapse0x22d1260() {
   return (neuron0x22c9a40()*0.435425);
}

double NNfunction_sb_sLdR::synapse0x22d12a0() {
   return (neuron0x22c9d80()*0.220302);
}

double NNfunction_sb_sLdR::synapse0x22d12e0() {
   return (neuron0x22ca0c0()*-0.171698);
}

double NNfunction_sb_sLdR::synapse0x22d1320() {
   return (neuron0x22ca400()*0.327163);
}

double NNfunction_sb_sLdR::synapse0x22d1360() {
   return (neuron0x22ca740()*0.404837);
}

double NNfunction_sb_sLdR::synapse0x22d13a0() {
   return (neuron0x22caa80()*0.340922);
}

double NNfunction_sb_sLdR::synapse0x22d13e0() {
   return (neuron0x22cadc0()*0.483392);
}

double NNfunction_sb_sLdR::synapse0x22d1420() {
   return (neuron0x22cb100()*-0.751399);
}

double NNfunction_sb_sLdR::synapse0x22d1460() {
   return (neuron0x22cb440()*-1.34236);
}

double NNfunction_sb_sLdR::synapse0x22d0ef0() {
   return (neuron0x22cb780()*0.59361);
}

double NNfunction_sb_sLdR::synapse0x22d0f30() {
   return (neuron0x22cbce0()*-0.893334);
}

double NNfunction_sb_sLdR::synapse0x22d15b0() {
   return (neuron0x22cbf00()*0.439863);
}

double NNfunction_sb_sLdR::synapse0x22d15f0() {
   return (neuron0x22cc240()*-0.117176);
}

double NNfunction_sb_sLdR::synapse0x22d1630() {
   return (neuron0x22cc580()*-0.0670047);
}

double NNfunction_sb_sLdR::synapse0x22d1670() {
   return (neuron0x22cc8c0()*0.268068);
}

double NNfunction_sb_sLdR::synapse0x22d16b0() {
   return (neuron0x22ccc00()*0.707448);
}

double NNfunction_sb_sLdR::synapse0x22d16f0() {
   return (neuron0x22ccf40()*-0.514071);
}

double NNfunction_sb_sLdR::synapse0x22d1a70() {
   return (neuron0x22c8380()*-0.470761);
}

double NNfunction_sb_sLdR::synapse0x22d1ab0() {
   return (neuron0x22c86c0()*-0.0447054);
}

double NNfunction_sb_sLdR::synapse0x22d1af0() {
   return (neuron0x22c8a00()*-0.472881);
}

double NNfunction_sb_sLdR::synapse0x22d1b30() {
   return (neuron0x22c8d40()*0.684379);
}

double NNfunction_sb_sLdR::synapse0x22d1b70() {
   return (neuron0x22c9080()*0.899854);
}

double NNfunction_sb_sLdR::synapse0x22d1bb0() {
   return (neuron0x22c93c0()*0.442155);
}

double NNfunction_sb_sLdR::synapse0x22d1bf0() {
   return (neuron0x22c9700()*0.557482);
}

double NNfunction_sb_sLdR::synapse0x22d1c30() {
   return (neuron0x22c9a40()*0.719645);
}

double NNfunction_sb_sLdR::synapse0x22d1c70() {
   return (neuron0x22c9d80()*0.169471);
}

double NNfunction_sb_sLdR::synapse0x22d1cb0() {
   return (neuron0x22ca0c0()*-0.641723);
}

double NNfunction_sb_sLdR::synapse0x22d1cf0() {
   return (neuron0x22ca400()*0.201339);
}

double NNfunction_sb_sLdR::synapse0x22d1d30() {
   return (neuron0x22ca740()*-0.180901);
}

double NNfunction_sb_sLdR::synapse0x22d1d70() {
   return (neuron0x22caa80()*-0.566669);
}

double NNfunction_sb_sLdR::synapse0x22d1db0() {
   return (neuron0x22cadc0()*-0.433441);
}

double NNfunction_sb_sLdR::synapse0x22d1df0() {
   return (neuron0x22cb100()*-0.0326005);
}

double NNfunction_sb_sLdR::synapse0x22d1e30() {
   return (neuron0x22cb440()*0.0958684);
}

double NNfunction_sb_sLdR::synapse0x22d18c0() {
   return (neuron0x22cb780()*0.666537);
}

double NNfunction_sb_sLdR::synapse0x22d1900() {
   return (neuron0x22cbce0()*0.131571);
}

double NNfunction_sb_sLdR::synapse0x22d1f80() {
   return (neuron0x22cbf00()*-0.0073274);
}

double NNfunction_sb_sLdR::synapse0x22d1fc0() {
   return (neuron0x22cc240()*0.0295676);
}

double NNfunction_sb_sLdR::synapse0x22d2000() {
   return (neuron0x22cc580()*-0.106263);
}

double NNfunction_sb_sLdR::synapse0x22d2040() {
   return (neuron0x22cc8c0()*-0.078668);
}

double NNfunction_sb_sLdR::synapse0x22d2080() {
   return (neuron0x22ccc00()*-0.165282);
}

double NNfunction_sb_sLdR::synapse0x22d20c0() {
   return (neuron0x22ccf40()*-0.359969);
}

double NNfunction_sb_sLdR::synapse0x22cbbd0() {
   return (neuron0x22c8380()*0.414762);
}

double NNfunction_sb_sLdR::synapse0x22cbc10() {
   return (neuron0x22c86c0()*0.0392403);
}

double NNfunction_sb_sLdR::synapse0x22cbc50() {
   return (neuron0x22c8a00()*0.672359);
}

double NNfunction_sb_sLdR::synapse0x22cbc90() {
   return (neuron0x22c8d40()*-0.402749);
}

double NNfunction_sb_sLdR::synapse0x22d2650() {
   return (neuron0x22c9080()*-0.817633);
}

double NNfunction_sb_sLdR::synapse0x22d2690() {
   return (neuron0x22c93c0()*-0.47923);
}

double NNfunction_sb_sLdR::synapse0x22d26d0() {
   return (neuron0x22c9700()*0.594501);
}

double NNfunction_sb_sLdR::synapse0x22d2710() {
   return (neuron0x22c9a40()*0.517262);
}

double NNfunction_sb_sLdR::synapse0x22d2750() {
   return (neuron0x22c9d80()*0.0581798);
}

double NNfunction_sb_sLdR::synapse0x22d2790() {
   return (neuron0x22ca0c0()*0.784058);
}

double NNfunction_sb_sLdR::synapse0x22d27d0() {
   return (neuron0x22ca400()*0.326198);
}

double NNfunction_sb_sLdR::synapse0x22d2810() {
   return (neuron0x22ca740()*0.562338);
}

double NNfunction_sb_sLdR::synapse0x22d2850() {
   return (neuron0x22caa80()*0.172172);
}

double NNfunction_sb_sLdR::synapse0x22d2890() {
   return (neuron0x22cadc0()*0.710178);
}

double NNfunction_sb_sLdR::synapse0x22d28d0() {
   return (neuron0x22cb100()*0.827412);
}

double NNfunction_sb_sLdR::synapse0x22d2910() {
   return (neuron0x22cb440()*0.272756);
}

double NNfunction_sb_sLdR::synapse0x22d2290() {
   return (neuron0x22cb780()*-0.485244);
}

double NNfunction_sb_sLdR::synapse0x22d22d0() {
   return (neuron0x22cbce0()*-0.586686);
}

double NNfunction_sb_sLdR::synapse0x22d2a60() {
   return (neuron0x22cbf00()*0.768664);
}

double NNfunction_sb_sLdR::synapse0x22d2aa0() {
   return (neuron0x22cc240()*0.0636142);
}

double NNfunction_sb_sLdR::synapse0x22d2ae0() {
   return (neuron0x22cc580()*-0.932375);
}

double NNfunction_sb_sLdR::synapse0x22d2b20() {
   return (neuron0x22cc8c0()*-0.296224);
}

double NNfunction_sb_sLdR::synapse0x22d2b60() {
   return (neuron0x22ccc00()*-0.263098);
}

double NNfunction_sb_sLdR::synapse0x22d2ba0() {
   return (neuron0x22ccf40()*0.0794837);
}

double NNfunction_sb_sLdR::synapse0x22d2f20() {
   return (neuron0x22c8380()*0.145423);
}

double NNfunction_sb_sLdR::synapse0x22d2f60() {
   return (neuron0x22c86c0()*0.187441);
}

double NNfunction_sb_sLdR::synapse0x22d2fa0() {
   return (neuron0x22c8a00()*-0.362012);
}

double NNfunction_sb_sLdR::synapse0x22d2fe0() {
   return (neuron0x22c8d40()*0.628729);
}

double NNfunction_sb_sLdR::synapse0x22d3020() {
   return (neuron0x22c9080()*-0.408974);
}

double NNfunction_sb_sLdR::synapse0x22d3060() {
   return (neuron0x22c93c0()*-0.267079);
}

double NNfunction_sb_sLdR::synapse0x22d30a0() {
   return (neuron0x22c9700()*-0.304207);
}

double NNfunction_sb_sLdR::synapse0x22d30e0() {
   return (neuron0x22c9a40()*-0.211365);
}

double NNfunction_sb_sLdR::synapse0x22d3120() {
   return (neuron0x22c9d80()*-0.446847);
}

double NNfunction_sb_sLdR::synapse0x22d3160() {
   return (neuron0x22ca0c0()*-0.539375);
}

double NNfunction_sb_sLdR::synapse0x22d31a0() {
   return (neuron0x22ca400()*-0.0472382);
}

double NNfunction_sb_sLdR::synapse0x22d31e0() {
   return (neuron0x22ca740()*0.5881);
}

double NNfunction_sb_sLdR::synapse0x22d3220() {
   return (neuron0x22caa80()*0.416098);
}

double NNfunction_sb_sLdR::synapse0x22d3260() {
   return (neuron0x22cadc0()*0.137932);
}

double NNfunction_sb_sLdR::synapse0x22d32a0() {
   return (neuron0x22cb100()*-0.476611);
}

double NNfunction_sb_sLdR::synapse0x22d32e0() {
   return (neuron0x22cb440()*-0.330474);
}

double NNfunction_sb_sLdR::synapse0x22d2d70() {
   return (neuron0x22cb780()*-0.474311);
}

double NNfunction_sb_sLdR::synapse0x22d2db0() {
   return (neuron0x22cbce0()*0.0827806);
}

double NNfunction_sb_sLdR::synapse0x22d3430() {
   return (neuron0x22cbf00()*1.01234);
}

double NNfunction_sb_sLdR::synapse0x22d3470() {
   return (neuron0x22cc240()*-0.031755);
}

double NNfunction_sb_sLdR::synapse0x22d34b0() {
   return (neuron0x22cc580()*0.0296144);
}

double NNfunction_sb_sLdR::synapse0x22d34f0() {
   return (neuron0x22cc8c0()*-0.817062);
}

double NNfunction_sb_sLdR::synapse0x22d3530() {
   return (neuron0x22ccc00()*-0.553148);
}

double NNfunction_sb_sLdR::synapse0x22d3570() {
   return (neuron0x22ccf40()*-0.361942);
}

double NNfunction_sb_sLdR::synapse0x22d38f0() {
   return (neuron0x22c8380()*-0.112846);
}

double NNfunction_sb_sLdR::synapse0x22d3930() {
   return (neuron0x22c86c0()*0.22631);
}

double NNfunction_sb_sLdR::synapse0x22d3970() {
   return (neuron0x22c8a00()*0.147508);
}

double NNfunction_sb_sLdR::synapse0x22d39b0() {
   return (neuron0x22c8d40()*-1.00306);
}

double NNfunction_sb_sLdR::synapse0x22d39f0() {
   return (neuron0x22c9080()*-0.00599285);
}

double NNfunction_sb_sLdR::synapse0x22d3a30() {
   return (neuron0x22c93c0()*-0.461777);
}

double NNfunction_sb_sLdR::synapse0x22d3a70() {
   return (neuron0x22c9700()*-0.00604419);
}

double NNfunction_sb_sLdR::synapse0x22d3ab0() {
   return (neuron0x22c9a40()*0.853191);
}

double NNfunction_sb_sLdR::synapse0x22d3af0() {
   return (neuron0x22c9d80()*-0.345917);
}

double NNfunction_sb_sLdR::synapse0x22d3b30() {
   return (neuron0x22ca0c0()*0.121674);
}

double NNfunction_sb_sLdR::synapse0x22d3b70() {
   return (neuron0x22ca400()*-0.576151);
}

double NNfunction_sb_sLdR::synapse0x22d3bb0() {
   return (neuron0x22ca740()*0.0250845);
}

double NNfunction_sb_sLdR::synapse0x22d3bf0() {
   return (neuron0x22caa80()*0.753749);
}

double NNfunction_sb_sLdR::synapse0x22d3c30() {
   return (neuron0x22cadc0()*-0.115336);
}

double NNfunction_sb_sLdR::synapse0x22d3c70() {
   return (neuron0x22cb100()*-0.150839);
}

double NNfunction_sb_sLdR::synapse0x22d3cb0() {
   return (neuron0x22cb440()*0.135907);
}

double NNfunction_sb_sLdR::synapse0x22d3740() {
   return (neuron0x22cb780()*-0.227807);
}

double NNfunction_sb_sLdR::synapse0x22d3780() {
   return (neuron0x22cbce0()*0.277126);
}

double NNfunction_sb_sLdR::synapse0x22d0510() {
   return (neuron0x22cbf00()*0.461926);
}

double NNfunction_sb_sLdR::synapse0x22d0550() {
   return (neuron0x22cc240()*-0.113945);
}

double NNfunction_sb_sLdR::synapse0x22d0590() {
   return (neuron0x22cc580()*0.0926449);
}

double NNfunction_sb_sLdR::synapse0x22d05d0() {
   return (neuron0x22cc8c0()*0.11069);
}

double NNfunction_sb_sLdR::synapse0x22d0610() {
   return (neuron0x22ccc00()*-0.247875);
}

double NNfunction_sb_sLdR::synapse0x22d0650() {
   return (neuron0x22ccf40()*0.243932);
}

double NNfunction_sb_sLdR::synapse0x22d09d0() {
   return (neuron0x22c8380()*0.0290614);
}

double NNfunction_sb_sLdR::synapse0x22d0a10() {
   return (neuron0x22c86c0()*-0.00670745);
}

double NNfunction_sb_sLdR::synapse0x22d0a50() {
   return (neuron0x22c8a00()*-0.0348141);
}

double NNfunction_sb_sLdR::synapse0x22d0a90() {
   return (neuron0x22c8d40()*10.1395);
}

double NNfunction_sb_sLdR::synapse0x22d0ad0() {
   return (neuron0x22c9080()*-0.0288392);
}

double NNfunction_sb_sLdR::synapse0x22d0b10() {
   return (neuron0x22c93c0()*-0.00202187);
}

double NNfunction_sb_sLdR::synapse0x22d0b50() {
   return (neuron0x22c9700()*0.0205927);
}

double NNfunction_sb_sLdR::synapse0x22d0b90() {
   return (neuron0x22c9a40()*-0.0266787);
}

double NNfunction_sb_sLdR::synapse0x22d0bd0() {
   return (neuron0x22c9d80()*-0.0445454);
}

double NNfunction_sb_sLdR::synapse0x22d0c10() {
   return (neuron0x22ca0c0()*-0.0142447);
}

double NNfunction_sb_sLdR::synapse0x22d0c50() {
   return (neuron0x22ca400()*0.011138);
}

double NNfunction_sb_sLdR::synapse0x22d0c90() {
   return (neuron0x22ca740()*0.0486866);
}

double NNfunction_sb_sLdR::synapse0x22d0cd0() {
   return (neuron0x22caa80()*-0.0917543);
}

double NNfunction_sb_sLdR::synapse0x22d4e10() {
   return (neuron0x22cadc0()*-0.0127412);
}

double NNfunction_sb_sLdR::synapse0x22d4e50() {
   return (neuron0x22cb100()*0.0468354);
}

double NNfunction_sb_sLdR::synapse0x22d4e90() {
   return (neuron0x22cb440()*0.0112614);
}

double NNfunction_sb_sLdR::synapse0x22d0820() {
   return (neuron0x22cb780()*-0.00519541);
}

double NNfunction_sb_sLdR::synapse0x22d0860() {
   return (neuron0x22cbce0()*-0.137789);
}

double NNfunction_sb_sLdR::synapse0x22d4fe0() {
   return (neuron0x22cbf00()*0.00274301);
}

double NNfunction_sb_sLdR::synapse0x22d5020() {
   return (neuron0x22cc240()*0.0195161);
}

double NNfunction_sb_sLdR::synapse0x22d5060() {
   return (neuron0x22cc580()*-0.00996369);
}

double NNfunction_sb_sLdR::synapse0x22d50a0() {
   return (neuron0x22cc8c0()*0.0262801);
}

double NNfunction_sb_sLdR::synapse0x22d50e0() {
   return (neuron0x22ccc00()*0.000695679);
}

double NNfunction_sb_sLdR::synapse0x22d5120() {
   return (neuron0x22ccf40()*0.0186202);
}

double NNfunction_sb_sLdR::synapse0x22d54a0() {
   return (neuron0x22c8380()*0.337064);
}

double NNfunction_sb_sLdR::synapse0x22d54e0() {
   return (neuron0x22c86c0()*0.0481314);
}

double NNfunction_sb_sLdR::synapse0x22d5520() {
   return (neuron0x22c8a00()*-0.193264);
}

double NNfunction_sb_sLdR::synapse0x22d5560() {
   return (neuron0x22c8d40()*-0.97502);
}

double NNfunction_sb_sLdR::synapse0x22d55a0() {
   return (neuron0x22c9080()*-0.112031);
}

double NNfunction_sb_sLdR::synapse0x22d55e0() {
   return (neuron0x22c93c0()*0.522033);
}

double NNfunction_sb_sLdR::synapse0x22d5620() {
   return (neuron0x22c9700()*0.345652);
}

double NNfunction_sb_sLdR::synapse0x22d5660() {
   return (neuron0x22c9a40()*0.0472615);
}

double NNfunction_sb_sLdR::synapse0x22d56a0() {
   return (neuron0x22c9d80()*0.206499);
}

double NNfunction_sb_sLdR::synapse0x22d56e0() {
   return (neuron0x22ca0c0()*0.555507);
}

double NNfunction_sb_sLdR::synapse0x22d5720() {
   return (neuron0x22ca400()*0.230608);
}

double NNfunction_sb_sLdR::synapse0x22d5760() {
   return (neuron0x22ca740()*0.491435);
}

double NNfunction_sb_sLdR::synapse0x22d57a0() {
   return (neuron0x22caa80()*-0.276348);
}

double NNfunction_sb_sLdR::synapse0x22d57e0() {
   return (neuron0x22cadc0()*-1.06934);
}

double NNfunction_sb_sLdR::synapse0x22d5820() {
   return (neuron0x22cb100()*-0.455613);
}

double NNfunction_sb_sLdR::synapse0x22d5860() {
   return (neuron0x22cb440()*-0.0260884);
}

double NNfunction_sb_sLdR::synapse0x22d52f0() {
   return (neuron0x22cb780()*-0.344951);
}

double NNfunction_sb_sLdR::synapse0x22d5330() {
   return (neuron0x22cbce0()*0.246409);
}

double NNfunction_sb_sLdR::synapse0x22d59b0() {
   return (neuron0x22cbf00()*0.434138);
}

double NNfunction_sb_sLdR::synapse0x22d59f0() {
   return (neuron0x22cc240()*0.00972606);
}

double NNfunction_sb_sLdR::synapse0x22d5a30() {
   return (neuron0x22cc580()*0.621819);
}

double NNfunction_sb_sLdR::synapse0x22d5a70() {
   return (neuron0x22cc8c0()*-0.105105);
}

double NNfunction_sb_sLdR::synapse0x22d5ab0() {
   return (neuron0x22ccc00()*0.037836);
}

double NNfunction_sb_sLdR::synapse0x22d5af0() {
   return (neuron0x22ccf40()*0.168589);
}

double NNfunction_sb_sLdR::synapse0x22d5e70() {
   return (neuron0x22c8380()*-0.166113);
}

double NNfunction_sb_sLdR::synapse0x22d5eb0() {
   return (neuron0x22c86c0()*-0.334289);
}

double NNfunction_sb_sLdR::synapse0x22d5ef0() {
   return (neuron0x22c8a00()*0.611709);
}

double NNfunction_sb_sLdR::synapse0x22d5f30() {
   return (neuron0x22c8d40()*0.722253);
}

double NNfunction_sb_sLdR::synapse0x22d5f70() {
   return (neuron0x22c9080()*0.470902);
}

double NNfunction_sb_sLdR::synapse0x22d5fb0() {
   return (neuron0x22c93c0()*0.264968);
}

double NNfunction_sb_sLdR::synapse0x22d5ff0() {
   return (neuron0x22c9700()*0.182588);
}

double NNfunction_sb_sLdR::synapse0x22d6030() {
   return (neuron0x22c9a40()*-0.0654126);
}

double NNfunction_sb_sLdR::synapse0x22d6070() {
   return (neuron0x22c9d80()*0.115689);
}

double NNfunction_sb_sLdR::synapse0x22d60b0() {
   return (neuron0x22ca0c0()*0.369023);
}

double NNfunction_sb_sLdR::synapse0x22d60f0() {
   return (neuron0x22ca400()*0.177759);
}

double NNfunction_sb_sLdR::synapse0x22d6130() {
   return (neuron0x22ca740()*0.553714);
}

double NNfunction_sb_sLdR::synapse0x22d6170() {
   return (neuron0x22caa80()*-0.282631);
}

double NNfunction_sb_sLdR::synapse0x22d61b0() {
   return (neuron0x22cadc0()*-0.701482);
}

double NNfunction_sb_sLdR::synapse0x22d61f0() {
   return (neuron0x22cb100()*-0.232906);
}

double NNfunction_sb_sLdR::synapse0x22d6230() {
   return (neuron0x22cb440()*0.220091);
}

double NNfunction_sb_sLdR::synapse0x22d5cc0() {
   return (neuron0x22cb780()*0.470935);
}

double NNfunction_sb_sLdR::synapse0x22d5d00() {
   return (neuron0x22cbce0()*0.206624);
}

double NNfunction_sb_sLdR::synapse0x22d6380() {
   return (neuron0x22cbf00()*0.271366);
}

double NNfunction_sb_sLdR::synapse0x22d63c0() {
   return (neuron0x22cc240()*-0.110117);
}

double NNfunction_sb_sLdR::synapse0x22d6400() {
   return (neuron0x22cc580()*0.1236);
}

double NNfunction_sb_sLdR::synapse0x22d6440() {
   return (neuron0x22cc8c0()*-0.577544);
}

double NNfunction_sb_sLdR::synapse0x22d6480() {
   return (neuron0x22ccc00()*0.702963);
}

double NNfunction_sb_sLdR::synapse0x22d64c0() {
   return (neuron0x22ccf40()*-0.183893);
}

double NNfunction_sb_sLdR::synapse0x22d6840() {
   return (neuron0x22c8380()*0.29707);
}

double NNfunction_sb_sLdR::synapse0x22d6880() {
   return (neuron0x22c86c0()*0.304858);
}

double NNfunction_sb_sLdR::synapse0x22d68c0() {
   return (neuron0x22c8a00()*-0.404176);
}

double NNfunction_sb_sLdR::synapse0x22d6900() {
   return (neuron0x22c8d40()*-0.282528);
}

double NNfunction_sb_sLdR::synapse0x22d6940() {
   return (neuron0x22c9080()*0.159315);
}

double NNfunction_sb_sLdR::synapse0x22d6980() {
   return (neuron0x22c93c0()*-0.0833213);
}

double NNfunction_sb_sLdR::synapse0x22d69c0() {
   return (neuron0x22c9700()*-0.767685);
}

double NNfunction_sb_sLdR::synapse0x22d6a00() {
   return (neuron0x22c9a40()*0.599561);
}

double NNfunction_sb_sLdR::synapse0x22d6a40() {
   return (neuron0x22c9d80()*0.270735);
}

double NNfunction_sb_sLdR::synapse0x22d6a80() {
   return (neuron0x22ca0c0()*0.217596);
}

double NNfunction_sb_sLdR::synapse0x22d6ac0() {
   return (neuron0x22ca400()*-0.269719);
}

double NNfunction_sb_sLdR::synapse0x22d6b00() {
   return (neuron0x22ca740()*0.0583714);
}

double NNfunction_sb_sLdR::synapse0x22d6b40() {
   return (neuron0x22caa80()*-0.00442794);
}

double NNfunction_sb_sLdR::synapse0x22d6b80() {
   return (neuron0x22cadc0()*-0.0357161);
}

double NNfunction_sb_sLdR::synapse0x22d6bc0() {
   return (neuron0x22cb100()*-0.121864);
}

double NNfunction_sb_sLdR::synapse0x22d6c00() {
   return (neuron0x22cb440()*-0.45179);
}

double NNfunction_sb_sLdR::synapse0x22d6690() {
   return (neuron0x22cb780()*0.751823);
}

double NNfunction_sb_sLdR::synapse0x22d66d0() {
   return (neuron0x22cbce0()*-0.789926);
}

double NNfunction_sb_sLdR::synapse0x22d6d50() {
   return (neuron0x22cbf00()*-0.0823457);
}

double NNfunction_sb_sLdR::synapse0x22d6d90() {
   return (neuron0x22cc240()*-0.151476);
}

double NNfunction_sb_sLdR::synapse0x22d6dd0() {
   return (neuron0x22cc580()*0.0326302);
}

double NNfunction_sb_sLdR::synapse0x22d6e10() {
   return (neuron0x22cc8c0()*-0.571823);
}

double NNfunction_sb_sLdR::synapse0x22d6e50() {
   return (neuron0x22ccc00()*-0.726319);
}

double NNfunction_sb_sLdR::synapse0x22d6e90() {
   return (neuron0x22ccf40()*-0.283811);
}

double NNfunction_sb_sLdR::synapse0x22d7210() {
   return (neuron0x22c8380()*0.463973);
}

double NNfunction_sb_sLdR::synapse0x22c85a0() {
   return (neuron0x22c86c0()*-0.396564);
}

double NNfunction_sb_sLdR::synapse0x22c85e0() {
   return (neuron0x22c8a00()*0.651123);
}

double NNfunction_sb_sLdR::synapse0x22c88e0() {
   return (neuron0x22c8d40()*-0.0121447);
}

double NNfunction_sb_sLdR::synapse0x22c8920() {
   return (neuron0x22c9080()*0.42025);
}

double NNfunction_sb_sLdR::synapse0x22c8c20() {
   return (neuron0x22c93c0()*0.590263);
}

double NNfunction_sb_sLdR::synapse0x22c8c60() {
   return (neuron0x22c9700()*-0.109839);
}

double NNfunction_sb_sLdR::synapse0x22c8f60() {
   return (neuron0x22c9a40()*-0.0614121);
}

double NNfunction_sb_sLdR::synapse0x22c8fa0() {
   return (neuron0x22c9d80()*-0.415469);
}

double NNfunction_sb_sLdR::synapse0x22c92a0() {
   return (neuron0x22ca0c0()*0.522229);
}

double NNfunction_sb_sLdR::synapse0x22c92e0() {
   return (neuron0x22ca400()*0.298142);
}

double NNfunction_sb_sLdR::synapse0x22c95e0() {
   return (neuron0x22ca740()*0.1559);
}

double NNfunction_sb_sLdR::synapse0x22c9620() {
   return (neuron0x22caa80()*-1.28226);
}

double NNfunction_sb_sLdR::synapse0x22c9920() {
   return (neuron0x22cadc0()*0.201383);
}

double NNfunction_sb_sLdR::synapse0x22c9960() {
   return (neuron0x22cb100()*-0.370076);
}

double NNfunction_sb_sLdR::synapse0x22c9c60() {
   return (neuron0x22cb440()*0.271329);
}

double NNfunction_sb_sLdR::synapse0x22c9ca0() {
   return (neuron0x22cb780()*0.157219);
}

double NNfunction_sb_sLdR::synapse0x22c9fa0() {
   return (neuron0x22cbce0()*-0.886268);
}

double NNfunction_sb_sLdR::synapse0x22c9fe0() {
   return (neuron0x22cbf00()*-0.437169);
}

double NNfunction_sb_sLdR::synapse0x22ca2e0() {
   return (neuron0x22cc240()*-0.651172);
}

double NNfunction_sb_sLdR::synapse0x22ca320() {
   return (neuron0x22cc580()*-0.0298821);
}

double NNfunction_sb_sLdR::synapse0x22ca620() {
   return (neuron0x22cc8c0()*-0.00674624);
}

double NNfunction_sb_sLdR::synapse0x22ca660() {
   return (neuron0x22ccc00()*0.628568);
}

double NNfunction_sb_sLdR::synapse0x22ca960() {
   return (neuron0x22ccf40()*0.161417);
}

double NNfunction_sb_sLdR::synapse0x22ca9a0() {
   return (neuron0x22c8380()*0.0462543);
}

double NNfunction_sb_sLdR::synapse0x22cb660() {
   return (neuron0x22c86c0()*0.106965);
}

double NNfunction_sb_sLdR::synapse0x22cb6a0() {
   return (neuron0x22c8a00()*-0.371751);
}

double NNfunction_sb_sLdR::synapse0x22d7060() {
   return (neuron0x22c8d40()*-1.10727);
}

double NNfunction_sb_sLdR::synapse0x22d70a0() {
   return (neuron0x22c9080()*-0.179099);
}

double NNfunction_sb_sLdR::synapse0x22cb9a0() {
   return (neuron0x22c93c0()*-0.252273);
}

double NNfunction_sb_sLdR::synapse0x22cb9e0() {
   return (neuron0x22c9700()*0.066065);
}

double NNfunction_sb_sLdR::synapse0x2083450() {
   return (neuron0x22c9a40()*0.021345);
}

double NNfunction_sb_sLdR::synapse0x2083490() {
   return (neuron0x22c9d80()*-0.0158938);
}

double NNfunction_sb_sLdR::synapse0x22cc120() {
   return (neuron0x22ca0c0()*-0.24084);
}

double NNfunction_sb_sLdR::synapse0x22cc160() {
   return (neuron0x22ca400()*-0.0161306);
}

double NNfunction_sb_sLdR::synapse0x22cc460() {
   return (neuron0x22ca740()*0.042378);
}

double NNfunction_sb_sLdR::synapse0x22cc4a0() {
   return (neuron0x22caa80()*0.551448);
}

double NNfunction_sb_sLdR::synapse0x22cc7a0() {
   return (neuron0x22cadc0()*-0.0647323);
}

double NNfunction_sb_sLdR::synapse0x22cc7e0() {
   return (neuron0x22cb100()*0.148952);
}

double NNfunction_sb_sLdR::synapse0x22ccae0() {
   return (neuron0x22cb440()*-0.0170657);
}

double NNfunction_sb_sLdR::synapse0x22ccb20() {
   return (neuron0x22cb780()*-0.104478);
}

double NNfunction_sb_sLdR::synapse0x22cce20() {
   return (neuron0x22cbce0()*0.353164);
}

double NNfunction_sb_sLdR::synapse0x22cce60() {
   return (neuron0x22cbf00()*-0.0133014);
}

double NNfunction_sb_sLdR::synapse0x22cd160() {
   return (neuron0x22cc240()*0.0945134);
}

double NNfunction_sb_sLdR::synapse0x22cd1a0() {
   return (neuron0x22cc580()*0.00498146);
}

double NNfunction_sb_sLdR::synapse0x22caca0() {
   return (neuron0x22cc8c0()*-0.123074);
}

double NNfunction_sb_sLdR::synapse0x22cace0() {
   return (neuron0x22ccc00()*-0.0377947);
}

double NNfunction_sb_sLdR::synapse0x22d8f80() {
   return (neuron0x22ccf40()*-0.081423);
}

double NNfunction_sb_sLdR::synapse0x22d9300() {
   return (neuron0x22c8380()*0.85328);
}

double NNfunction_sb_sLdR::synapse0x22d9340() {
   return (neuron0x22c86c0()*0.232258);
}

double NNfunction_sb_sLdR::synapse0x22d9380() {
   return (neuron0x22c8a00()*0.0386856);
}

double NNfunction_sb_sLdR::synapse0x22d93c0() {
   return (neuron0x22c8d40()*-0.246456);
}

double NNfunction_sb_sLdR::synapse0x22d9400() {
   return (neuron0x22c9080()*0.311334);
}

double NNfunction_sb_sLdR::synapse0x22d9440() {
   return (neuron0x22c93c0()*0.145604);
}

double NNfunction_sb_sLdR::synapse0x22d9480() {
   return (neuron0x22c9700()*-0.631172);
}

double NNfunction_sb_sLdR::synapse0x22d94c0() {
   return (neuron0x22c9a40()*0.0401802);
}

double NNfunction_sb_sLdR::synapse0x22d9500() {
   return (neuron0x22c9d80()*-0.145568);
}

double NNfunction_sb_sLdR::synapse0x22d9540() {
   return (neuron0x22ca0c0()*-0.138265);
}

double NNfunction_sb_sLdR::synapse0x22d9580() {
   return (neuron0x22ca400()*-0.00846768);
}

double NNfunction_sb_sLdR::synapse0x22d95c0() {
   return (neuron0x22ca740()*-0.415853);
}

double NNfunction_sb_sLdR::synapse0x22d9600() {
   return (neuron0x22caa80()*-0.508333);
}

double NNfunction_sb_sLdR::synapse0x22d9640() {
   return (neuron0x22cadc0()*0.698984);
}

double NNfunction_sb_sLdR::synapse0x22d9680() {
   return (neuron0x22cb100()*-0.128035);
}

double NNfunction_sb_sLdR::synapse0x22d96c0() {
   return (neuron0x22cb440()*0.352783);
}

double NNfunction_sb_sLdR::synapse0x22d9150() {
   return (neuron0x22cb780()*0.473981);
}

double NNfunction_sb_sLdR::synapse0x22d9190() {
   return (neuron0x22cbce0()*-0.338194);
}

double NNfunction_sb_sLdR::synapse0x22d9810() {
   return (neuron0x22cbf00()*-0.308397);
}

double NNfunction_sb_sLdR::synapse0x22d9850() {
   return (neuron0x22cc240()*-0.388957);
}

double NNfunction_sb_sLdR::synapse0x22d9890() {
   return (neuron0x22cc580()*0.188913);
}

double NNfunction_sb_sLdR::synapse0x22d98d0() {
   return (neuron0x22cc8c0()*0.0743868);
}

double NNfunction_sb_sLdR::synapse0x22d9910() {
   return (neuron0x22ccc00()*0.449652);
}

double NNfunction_sb_sLdR::synapse0x22d9950() {
   return (neuron0x22ccf40()*-0.0268987);
}

double NNfunction_sb_sLdR::synapse0x22d9cd0() {
   return (neuron0x22c8380()*-0.0419257);
}

double NNfunction_sb_sLdR::synapse0x22d9d10() {
   return (neuron0x22c86c0()*0.0590991);
}

double NNfunction_sb_sLdR::synapse0x22d9d50() {
   return (neuron0x22c8a00()*-0.0559798);
}

double NNfunction_sb_sLdR::synapse0x22d9d90() {
   return (neuron0x22c8d40()*0.968555);
}

double NNfunction_sb_sLdR::synapse0x22d9dd0() {
   return (neuron0x22c9080()*-0.0420691);
}

double NNfunction_sb_sLdR::synapse0x22d9e10() {
   return (neuron0x22c93c0()*-0.0639934);
}

double NNfunction_sb_sLdR::synapse0x22d9e50() {
   return (neuron0x22c9700()*0.00233847);
}

double NNfunction_sb_sLdR::synapse0x22d9e90() {
   return (neuron0x22c9a40()*0.0170308);
}

double NNfunction_sb_sLdR::synapse0x22d9ed0() {
   return (neuron0x22c9d80()*0.0297377);
}

double NNfunction_sb_sLdR::synapse0x22d9f10() {
   return (neuron0x22ca0c0()*0.00813557);
}

double NNfunction_sb_sLdR::synapse0x22d9f50() {
   return (neuron0x22ca400()*0.0209329);
}

double NNfunction_sb_sLdR::synapse0x22d9f90() {
   return (neuron0x22ca740()*0.043221);
}

double NNfunction_sb_sLdR::synapse0x22d9fd0() {
   return (neuron0x22caa80()*-0.375368);
}

double NNfunction_sb_sLdR::synapse0x22da010() {
   return (neuron0x22cadc0()*0.0397795);
}

double NNfunction_sb_sLdR::synapse0x22da050() {
   return (neuron0x22cb100()*0.050555);
}

double NNfunction_sb_sLdR::synapse0x22da090() {
   return (neuron0x22cb440()*-0.131452);
}

double NNfunction_sb_sLdR::synapse0x22d9b20() {
   return (neuron0x22cb780()*-0.00104025);
}

double NNfunction_sb_sLdR::synapse0x22d9b60() {
   return (neuron0x22cbce0()*-0.429111);
}

double NNfunction_sb_sLdR::synapse0x22da1e0() {
   return (neuron0x22cbf00()*-0.0272323);
}

double NNfunction_sb_sLdR::synapse0x22da220() {
   return (neuron0x22cc240()*0.0024708);
}

double NNfunction_sb_sLdR::synapse0x22da260() {
   return (neuron0x22cc580()*0.0407041);
}

double NNfunction_sb_sLdR::synapse0x22da2a0() {
   return (neuron0x22cc8c0()*-0.0128937);
}

double NNfunction_sb_sLdR::synapse0x22da2e0() {
   return (neuron0x22ccc00()*-0.0396685);
}

double NNfunction_sb_sLdR::synapse0x22da320() {
   return (neuron0x22ccf40()*-0.0674242);
}

double NNfunction_sb_sLdR::synapse0x22da6a0() {
   return (neuron0x22c8380()*-0.0284369);
}

double NNfunction_sb_sLdR::synapse0x22da6e0() {
   return (neuron0x22c86c0()*0.0681041);
}

double NNfunction_sb_sLdR::synapse0x22da720() {
   return (neuron0x22c8a00()*0.0883711);
}

double NNfunction_sb_sLdR::synapse0x22da760() {
   return (neuron0x22c8d40()*-0.545384);
}

double NNfunction_sb_sLdR::synapse0x22da7a0() {
   return (neuron0x22c9080()*0.00693524);
}

double NNfunction_sb_sLdR::synapse0x22da7e0() {
   return (neuron0x22c93c0()*0.0635434);
}

double NNfunction_sb_sLdR::synapse0x22da820() {
   return (neuron0x22c9700()*0.176907);
}

double NNfunction_sb_sLdR::synapse0x22da860() {
   return (neuron0x22c9a40()*-0.0134311);
}

double NNfunction_sb_sLdR::synapse0x22da8a0() {
   return (neuron0x22c9d80()*-0.0772303);
}

double NNfunction_sb_sLdR::synapse0x22da8e0() {
   return (neuron0x22ca0c0()*-0.136225);
}

double NNfunction_sb_sLdR::synapse0x22da920() {
   return (neuron0x22ca400()*0.144013);
}

double NNfunction_sb_sLdR::synapse0x22da960() {
   return (neuron0x22ca740()*0.2967);
}

double NNfunction_sb_sLdR::synapse0x22da9a0() {
   return (neuron0x22caa80()*-1.18525);
}

double NNfunction_sb_sLdR::synapse0x22da9e0() {
   return (neuron0x22cadc0()*0.556704);
}

double NNfunction_sb_sLdR::synapse0x22daa20() {
   return (neuron0x22cb100()*0.191986);
}

double NNfunction_sb_sLdR::synapse0x22daa60() {
   return (neuron0x22cb440()*-0.172601);
}

double NNfunction_sb_sLdR::synapse0x22da4f0() {
   return (neuron0x22cb780()*-0.0324658);
}

double NNfunction_sb_sLdR::synapse0x22da530() {
   return (neuron0x22cbce0()*-1.29398);
}

double NNfunction_sb_sLdR::synapse0x22dabb0() {
   return (neuron0x22cbf00()*-0.0950612);
}

double NNfunction_sb_sLdR::synapse0x22dabf0() {
   return (neuron0x22cc240()*0.0370729);
}

double NNfunction_sb_sLdR::synapse0x22dac30() {
   return (neuron0x22cc580()*-0.0847879);
}

double NNfunction_sb_sLdR::synapse0x22dac70() {
   return (neuron0x22cc8c0()*0.160898);
}

double NNfunction_sb_sLdR::synapse0x22dacb0() {
   return (neuron0x22ccc00()*-0.297967);
}

double NNfunction_sb_sLdR::synapse0x22dacf0() {
   return (neuron0x22ccf40()*0.088061);
}

double NNfunction_sb_sLdR::synapse0x22db070() {
   return (neuron0x22c8380()*0.183909);
}

double NNfunction_sb_sLdR::synapse0x22db0b0() {
   return (neuron0x22c86c0()*0.0291799);
}

double NNfunction_sb_sLdR::synapse0x22db0f0() {
   return (neuron0x22c8a00()*0.0169024);
}

double NNfunction_sb_sLdR::synapse0x22db130() {
   return (neuron0x22c8d40()*2.06435);
}

double NNfunction_sb_sLdR::synapse0x22db170() {
   return (neuron0x22c9080()*-0.0296297);
}

double NNfunction_sb_sLdR::synapse0x22db1b0() {
   return (neuron0x22c93c0()*0.014671);
}

double NNfunction_sb_sLdR::synapse0x22db1f0() {
   return (neuron0x22c9700()*0.0182097);
}

double NNfunction_sb_sLdR::synapse0x22db230() {
   return (neuron0x22c9a40()*0.0571138);
}

double NNfunction_sb_sLdR::synapse0x22db270() {
   return (neuron0x22c9d80()*-0.00984133);
}

double NNfunction_sb_sLdR::synapse0x22db2b0() {
   return (neuron0x22ca0c0()*-0.0257733);
}

double NNfunction_sb_sLdR::synapse0x22db2f0() {
   return (neuron0x22ca400()*-0.0377722);
}

double NNfunction_sb_sLdR::synapse0x22db330() {
   return (neuron0x22ca740()*0.089576);
}

double NNfunction_sb_sLdR::synapse0x22db370() {
   return (neuron0x22caa80()*0.417392);
}

double NNfunction_sb_sLdR::synapse0x22db3b0() {
   return (neuron0x22cadc0()*-0.0176341);
}

double NNfunction_sb_sLdR::synapse0x22db3f0() {
   return (neuron0x22cb100()*0.0478872);
}

double NNfunction_sb_sLdR::synapse0x22db430() {
   return (neuron0x22cb440()*0.040034);
}

double NNfunction_sb_sLdR::synapse0x22daec0() {
   return (neuron0x22cb780()*-0.0884348);
}

double NNfunction_sb_sLdR::synapse0x22daf00() {
   return (neuron0x22cbce0()*0.340423);
}

double NNfunction_sb_sLdR::synapse0x22db580() {
   return (neuron0x22cbf00()*0.0407478);
}

double NNfunction_sb_sLdR::synapse0x22db5c0() {
   return (neuron0x22cc240()*0.00862621);
}

double NNfunction_sb_sLdR::synapse0x22db600() {
   return (neuron0x22cc580()*-0.0290374);
}

double NNfunction_sb_sLdR::synapse0x22db640() {
   return (neuron0x22cc8c0()*-0.0444751);
}

double NNfunction_sb_sLdR::synapse0x22db680() {
   return (neuron0x22ccc00()*0.051607);
}

double NNfunction_sb_sLdR::synapse0x22db6c0() {
   return (neuron0x22ccf40()*0.0330604);
}

double NNfunction_sb_sLdR::synapse0x22dba40() {
   return (neuron0x22c8380()*0.236776);
}

double NNfunction_sb_sLdR::synapse0x22dba80() {
   return (neuron0x22c86c0()*0.11637);
}

double NNfunction_sb_sLdR::synapse0x22dbac0() {
   return (neuron0x22c8a00()*-0.206073);
}

double NNfunction_sb_sLdR::synapse0x22dbb00() {
   return (neuron0x22c8d40()*0.253538);
}

double NNfunction_sb_sLdR::synapse0x22dbb40() {
   return (neuron0x22c9080()*0.206519);
}

double NNfunction_sb_sLdR::synapse0x22dbb80() {
   return (neuron0x22c93c0()*-0.269457);
}

double NNfunction_sb_sLdR::synapse0x22dbbc0() {
   return (neuron0x22c9700()*-0.0837515);
}

double NNfunction_sb_sLdR::synapse0x22dbc00() {
   return (neuron0x22c9a40()*-0.0274742);
}

double NNfunction_sb_sLdR::synapse0x22dbc40() {
   return (neuron0x22c9d80()*-0.276426);
}

double NNfunction_sb_sLdR::synapse0x22d3e00() {
   return (neuron0x22ca0c0()*-0.121116);
}

double NNfunction_sb_sLdR::synapse0x22d3e40() {
   return (neuron0x22ca400()*0.249075);
}

double NNfunction_sb_sLdR::synapse0x22d3e80() {
   return (neuron0x22ca740()*0.77733);
}

double NNfunction_sb_sLdR::synapse0x22d3ec0() {
   return (neuron0x22caa80()*-0.538504);
}

double NNfunction_sb_sLdR::synapse0x22d3f00() {
   return (neuron0x22cadc0()*-0.368303);
}

double NNfunction_sb_sLdR::synapse0x22d3f40() {
   return (neuron0x22cb100()*-0.398623);
}

double NNfunction_sb_sLdR::synapse0x22d3f80() {
   return (neuron0x22cb440()*0.529469);
}

double NNfunction_sb_sLdR::synapse0x22db890() {
   return (neuron0x22cb780()*-0.546909);
}

double NNfunction_sb_sLdR::synapse0x22db8d0() {
   return (neuron0x22cbce0()*-0.432244);
}

double NNfunction_sb_sLdR::synapse0x22d40d0() {
   return (neuron0x22cbf00()*0.0149594);
}

double NNfunction_sb_sLdR::synapse0x22d4110() {
   return (neuron0x22cc240()*-0.155485);
}

double NNfunction_sb_sLdR::synapse0x22d4150() {
   return (neuron0x22cc580()*-0.226753);
}

double NNfunction_sb_sLdR::synapse0x22d4190() {
   return (neuron0x22cc8c0()*0.0520438);
}

double NNfunction_sb_sLdR::synapse0x22d41d0() {
   return (neuron0x22ccc00()*0.199398);
}

double NNfunction_sb_sLdR::synapse0x22d4210() {
   return (neuron0x22ccf40()*0.00145467);
}

double NNfunction_sb_sLdR::synapse0x22d4590() {
   return (neuron0x22c8380()*-0.260587);
}

double NNfunction_sb_sLdR::synapse0x22d45d0() {
   return (neuron0x22c86c0()*-0.0923904);
}

double NNfunction_sb_sLdR::synapse0x22d4610() {
   return (neuron0x22c8a00()*0.294684);
}

double NNfunction_sb_sLdR::synapse0x22d4650() {
   return (neuron0x22c8d40()*-0.154134);
}

double NNfunction_sb_sLdR::synapse0x22d4690() {
   return (neuron0x22c9080()*0.125088);
}

double NNfunction_sb_sLdR::synapse0x22d46d0() {
   return (neuron0x22c93c0()*0.128365);
}

double NNfunction_sb_sLdR::synapse0x22d4710() {
   return (neuron0x22c9700()*-0.0447634);
}

double NNfunction_sb_sLdR::synapse0x22d4750() {
   return (neuron0x22c9a40()*0.121355);
}

double NNfunction_sb_sLdR::synapse0x22d4790() {
   return (neuron0x22c9d80()*-0.00156366);
}

double NNfunction_sb_sLdR::synapse0x22d47d0() {
   return (neuron0x22ca0c0()*-0.162096);
}

double NNfunction_sb_sLdR::synapse0x22d4810() {
   return (neuron0x22ca400()*-0.0291507);
}

double NNfunction_sb_sLdR::synapse0x22d4850() {
   return (neuron0x22ca740()*0.0142312);
}

double NNfunction_sb_sLdR::synapse0x22d4890() {
   return (neuron0x22caa80()*-0.131253);
}

double NNfunction_sb_sLdR::synapse0x22d48d0() {
   return (neuron0x22cadc0()*0.106049);
}

double NNfunction_sb_sLdR::synapse0x22d4910() {
   return (neuron0x22cb100()*-0.091979);
}

double NNfunction_sb_sLdR::synapse0x22d4950() {
   return (neuron0x22cb440()*0.052225);
}

double NNfunction_sb_sLdR::synapse0x22d43e0() {
   return (neuron0x22cb780()*0.0579202);
}

double NNfunction_sb_sLdR::synapse0x22d4420() {
   return (neuron0x22cbce0()*-0.351116);
}

double NNfunction_sb_sLdR::synapse0x22d4aa0() {
   return (neuron0x22cbf00()*-0.137042);
}

double NNfunction_sb_sLdR::synapse0x22d4ae0() {
   return (neuron0x22cc240()*0.121896);
}

double NNfunction_sb_sLdR::synapse0x22d4b20() {
   return (neuron0x22cc580()*-0.0226803);
}

double NNfunction_sb_sLdR::synapse0x22d4b60() {
   return (neuron0x22cc8c0()*-0.0431033);
}

double NNfunction_sb_sLdR::synapse0x22d4ba0() {
   return (neuron0x22ccc00()*-0.169842);
}

double NNfunction_sb_sLdR::synapse0x22d4be0() {
   return (neuron0x22ccf40()*-0.107733);
}

double NNfunction_sb_sLdR::synapse0x22d4db0() {
   return (neuron0x22c8380()*-0.0774257);
}

double NNfunction_sb_sLdR::synapse0x22dde40() {
   return (neuron0x22c86c0()*0.223704);
}

double NNfunction_sb_sLdR::synapse0x22dde80() {
   return (neuron0x22c8a00()*0.612205);
}

double NNfunction_sb_sLdR::synapse0x22ddec0() {
   return (neuron0x22c8d40()*-1.17911);
}

double NNfunction_sb_sLdR::synapse0x22ddf00() {
   return (neuron0x22c9080()*-0.52733);
}

double NNfunction_sb_sLdR::synapse0x22ddf40() {
   return (neuron0x22c93c0()*0.078071);
}

double NNfunction_sb_sLdR::synapse0x22ddf80() {
   return (neuron0x22c9700()*-0.34938);
}

double NNfunction_sb_sLdR::synapse0x22ddfc0() {
   return (neuron0x22c9a40()*0.339929);
}

double NNfunction_sb_sLdR::synapse0x22de000() {
   return (neuron0x22c9d80()*-0.0425174);
}

double NNfunction_sb_sLdR::synapse0x22de040() {
   return (neuron0x22ca0c0()*0.136425);
}

double NNfunction_sb_sLdR::synapse0x22de080() {
   return (neuron0x22ca400()*-0.213944);
}

double NNfunction_sb_sLdR::synapse0x22de0c0() {
   return (neuron0x22ca740()*0.355024);
}

double NNfunction_sb_sLdR::synapse0x22de100() {
   return (neuron0x22caa80()*-0.577551);
}

double NNfunction_sb_sLdR::synapse0x22de140() {
   return (neuron0x22cadc0()*0.887054);
}

double NNfunction_sb_sLdR::synapse0x22de180() {
   return (neuron0x22cb100()*-0.00668155);
}

double NNfunction_sb_sLdR::synapse0x22de1c0() {
   return (neuron0x22cb440()*0.195417);
}

double NNfunction_sb_sLdR::synapse0x22ddc90() {
   return (neuron0x22cb780()*0.594046);
}

double NNfunction_sb_sLdR::synapse0x22ddcd0() {
   return (neuron0x22cbce0()*-0.953182);
}

double NNfunction_sb_sLdR::synapse0x22de310() {
   return (neuron0x22cbf00()*-0.195263);
}

double NNfunction_sb_sLdR::synapse0x22de350() {
   return (neuron0x22cc240()*0.438915);
}

double NNfunction_sb_sLdR::synapse0x22de390() {
   return (neuron0x22cc580()*-0.0882815);
}

double NNfunction_sb_sLdR::synapse0x22de3d0() {
   return (neuron0x22cc8c0()*-0.384542);
}

double NNfunction_sb_sLdR::synapse0x22de410() {
   return (neuron0x22ccc00()*-1.12785);
}

double NNfunction_sb_sLdR::synapse0x22de450() {
   return (neuron0x22ccf40()*0.349752);
}

double NNfunction_sb_sLdR::synapse0x22de7d0() {
   return (neuron0x22c8380()*0.253254);
}

double NNfunction_sb_sLdR::synapse0x22de810() {
   return (neuron0x22c86c0()*-0.0190134);
}

double NNfunction_sb_sLdR::synapse0x22de850() {
   return (neuron0x22c8a00()*0.0286398);
}

double NNfunction_sb_sLdR::synapse0x22de890() {
   return (neuron0x22c8d40()*1.42647);
}

double NNfunction_sb_sLdR::synapse0x22de8d0() {
   return (neuron0x22c9080()*-0.129737);
}

double NNfunction_sb_sLdR::synapse0x22de910() {
   return (neuron0x22c93c0()*-0.270586);
}

double NNfunction_sb_sLdR::synapse0x22de950() {
   return (neuron0x22c9700()*0.279151);
}

double NNfunction_sb_sLdR::synapse0x22de990() {
   return (neuron0x22c9a40()*-0.322013);
}

double NNfunction_sb_sLdR::synapse0x22de9d0() {
   return (neuron0x22c9d80()*0.0209977);
}

double NNfunction_sb_sLdR::synapse0x22dea10() {
   return (neuron0x22ca0c0()*-0.00982057);
}

double NNfunction_sb_sLdR::synapse0x22dea50() {
   return (neuron0x22ca400()*0.0204226);
}

double NNfunction_sb_sLdR::synapse0x22dea90() {
   return (neuron0x22ca740()*-0.23149);
}

double NNfunction_sb_sLdR::synapse0x22dead0() {
   return (neuron0x22caa80()*0.494643);
}

double NNfunction_sb_sLdR::synapse0x22deb10() {
   return (neuron0x22cadc0()*-0.0537024);
}

double NNfunction_sb_sLdR::synapse0x22deb50() {
   return (neuron0x22cb100()*-0.00131576);
}

double NNfunction_sb_sLdR::synapse0x22deb90() {
   return (neuron0x22cb440()*0.365185);
}

double NNfunction_sb_sLdR::synapse0x22de620() {
   return (neuron0x22cb780()*-0.294581);
}

double NNfunction_sb_sLdR::synapse0x22de660() {
   return (neuron0x22cbce0()*0.74635);
}

double NNfunction_sb_sLdR::synapse0x22dece0() {
   return (neuron0x22cbf00()*0.227479);
}

double NNfunction_sb_sLdR::synapse0x22ded20() {
   return (neuron0x22cc240()*0.149927);
}

double NNfunction_sb_sLdR::synapse0x22ded60() {
   return (neuron0x22cc580()*-0.055718);
}

double NNfunction_sb_sLdR::synapse0x22deda0() {
   return (neuron0x22cc8c0()*-0.354634);
}

double NNfunction_sb_sLdR::synapse0x22dede0() {
   return (neuron0x22ccc00()*-0.0445681);
}

double NNfunction_sb_sLdR::synapse0x22dee20() {
   return (neuron0x22ccf40()*-0.0202943);
}

double NNfunction_sb_sLdR::synapse0x22df1a0() {
   return (neuron0x22c8380()*-0.00632182);
}

double NNfunction_sb_sLdR::synapse0x22df1e0() {
   return (neuron0x22c86c0()*0.0054723);
}

double NNfunction_sb_sLdR::synapse0x22df220() {
   return (neuron0x22c8a00()*0.0154769);
}

double NNfunction_sb_sLdR::synapse0x22df260() {
   return (neuron0x22c8d40()*0.0221149);
}

double NNfunction_sb_sLdR::synapse0x22df2a0() {
   return (neuron0x22c9080()*-0.00554635);
}

double NNfunction_sb_sLdR::synapse0x22df2e0() {
   return (neuron0x22c93c0()*0.000432827);
}

double NNfunction_sb_sLdR::synapse0x22df320() {
   return (neuron0x22c9700()*0.0159856);
}

double NNfunction_sb_sLdR::synapse0x22df360() {
   return (neuron0x22c9a40()*0.0222666);
}

double NNfunction_sb_sLdR::synapse0x22df3a0() {
   return (neuron0x22c9d80()*-0.0142864);
}

double NNfunction_sb_sLdR::synapse0x22df3e0() {
   return (neuron0x22ca0c0()*0.021134);
}

double NNfunction_sb_sLdR::synapse0x22df420() {
   return (neuron0x22ca400()*-0.00204363);
}

double NNfunction_sb_sLdR::synapse0x22df460() {
   return (neuron0x22ca740()*0.0278137);
}

double NNfunction_sb_sLdR::synapse0x22df4a0() {
   return (neuron0x22caa80()*-0.459328);
}

double NNfunction_sb_sLdR::synapse0x22df4e0() {
   return (neuron0x22cadc0()*-0.0299508);
}

double NNfunction_sb_sLdR::synapse0x22df520() {
   return (neuron0x22cb100()*0.00910017);
}

double NNfunction_sb_sLdR::synapse0x22df560() {
   return (neuron0x22cb440()*0.0494482);
}

double NNfunction_sb_sLdR::synapse0x22deff0() {
   return (neuron0x22cb780()*-0.0027063);
}

double NNfunction_sb_sLdR::synapse0x22df030() {
   return (neuron0x22cbce0()*-1.43462);
}

double NNfunction_sb_sLdR::synapse0x22df6b0() {
   return (neuron0x22cbf00()*0.0390016);
}

double NNfunction_sb_sLdR::synapse0x22df6f0() {
   return (neuron0x22cc240()*-0.0254551);
}

double NNfunction_sb_sLdR::synapse0x22df730() {
   return (neuron0x22cc580()*-0.00510323);
}

double NNfunction_sb_sLdR::synapse0x22df770() {
   return (neuron0x22cc8c0()*0.00264845);
}

double NNfunction_sb_sLdR::synapse0x22df7b0() {
   return (neuron0x22ccc00()*-0.00122138);
}

double NNfunction_sb_sLdR::synapse0x22df7f0() {
   return (neuron0x22ccf40()*0.000961754);
}

double NNfunction_sb_sLdR::synapse0x22dfb70() {
   return (neuron0x22c8380()*0.23802);
}

double NNfunction_sb_sLdR::synapse0x22dfbb0() {
   return (neuron0x22c86c0()*-0.753847);
}

double NNfunction_sb_sLdR::synapse0x22dfbf0() {
   return (neuron0x22c8a00()*0.969703);
}

double NNfunction_sb_sLdR::synapse0x22dfc30() {
   return (neuron0x22c8d40()*-0.048642);
}

double NNfunction_sb_sLdR::synapse0x22dfc70() {
   return (neuron0x22c9080()*0.101864);
}

double NNfunction_sb_sLdR::synapse0x22dfcb0() {
   return (neuron0x22c93c0()*-0.446601);
}

double NNfunction_sb_sLdR::synapse0x22dfcf0() {
   return (neuron0x22c9700()*-0.521331);
}

double NNfunction_sb_sLdR::synapse0x22dfd30() {
   return (neuron0x22c9a40()*-0.792258);
}

double NNfunction_sb_sLdR::synapse0x22dfd70() {
   return (neuron0x22c9d80()*0.521647);
}

double NNfunction_sb_sLdR::synapse0x22dfdb0() {
   return (neuron0x22ca0c0()*0.751163);
}

double NNfunction_sb_sLdR::synapse0x22dfdf0() {
   return (neuron0x22ca400()*-0.226798);
}

double NNfunction_sb_sLdR::synapse0x22dfe30() {
   return (neuron0x22ca740()*0.0942743);
}

double NNfunction_sb_sLdR::synapse0x22dfe70() {
   return (neuron0x22caa80()*0.0711985);
}

double NNfunction_sb_sLdR::synapse0x22dfeb0() {
   return (neuron0x22cadc0()*0.422792);
}

double NNfunction_sb_sLdR::synapse0x22dfef0() {
   return (neuron0x22cb100()*-0.146037);
}

double NNfunction_sb_sLdR::synapse0x22dff30() {
   return (neuron0x22cb440()*-1.35953);
}

double NNfunction_sb_sLdR::synapse0x22df9c0() {
   return (neuron0x22cb780()*-0.395293);
}

double NNfunction_sb_sLdR::synapse0x22dfa00() {
   return (neuron0x22cbce0()*-0.36451);
}

double NNfunction_sb_sLdR::synapse0x22e0080() {
   return (neuron0x22cbf00()*-0.430175);
}

double NNfunction_sb_sLdR::synapse0x22e00c0() {
   return (neuron0x22cc240()*0.618217);
}

double NNfunction_sb_sLdR::synapse0x22e0100() {
   return (neuron0x22cc580()*0.553104);
}

double NNfunction_sb_sLdR::synapse0x22e0140() {
   return (neuron0x22cc8c0()*-0.0676656);
}

double NNfunction_sb_sLdR::synapse0x22e0180() {
   return (neuron0x22ccc00()*0.574715);
}

double NNfunction_sb_sLdR::synapse0x22e01c0() {
   return (neuron0x22ccf40()*0.406055);
}

double NNfunction_sb_sLdR::synapse0x22e0540() {
   return (neuron0x22c8380()*-0.0143237);
}

double NNfunction_sb_sLdR::synapse0x22e0580() {
   return (neuron0x22c86c0()*-0.0155917);
}

double NNfunction_sb_sLdR::synapse0x22e05c0() {
   return (neuron0x22c8a00()*-0.00238057);
}

double NNfunction_sb_sLdR::synapse0x22e0600() {
   return (neuron0x22c8d40()*7.1213);
}

double NNfunction_sb_sLdR::synapse0x22e0640() {
   return (neuron0x22c9080()*0.0111465);
}

double NNfunction_sb_sLdR::synapse0x22e0680() {
   return (neuron0x22c93c0()*0.00667501);
}

double NNfunction_sb_sLdR::synapse0x22e06c0() {
   return (neuron0x22c9700()*0.0109126);
}

double NNfunction_sb_sLdR::synapse0x22e0700() {
   return (neuron0x22c9a40()*0.0018816);
}

double NNfunction_sb_sLdR::synapse0x22e0740() {
   return (neuron0x22c9d80()*0.0088324);
}

double NNfunction_sb_sLdR::synapse0x22e0780() {
   return (neuron0x22ca0c0()*-0.0250804);
}

double NNfunction_sb_sLdR::synapse0x22e07c0() {
   return (neuron0x22ca400()*0.000566754);
}

double NNfunction_sb_sLdR::synapse0x22e0800() {
   return (neuron0x22ca740()*-0.00381966);
}

double NNfunction_sb_sLdR::synapse0x22e0840() {
   return (neuron0x22caa80()*0.272874);
}

double NNfunction_sb_sLdR::synapse0x22e0880() {
   return (neuron0x22cadc0()*0.00646073);
}

double NNfunction_sb_sLdR::synapse0x22e08c0() {
   return (neuron0x22cb100()*-0.00542825);
}

double NNfunction_sb_sLdR::synapse0x22e0900() {
   return (neuron0x22cb440()*-0.00753632);
}

double NNfunction_sb_sLdR::synapse0x22e0390() {
   return (neuron0x22cb780()*-0.000845409);
}

double NNfunction_sb_sLdR::synapse0x22e03d0() {
   return (neuron0x22cbce0()*0.19407);
}

double NNfunction_sb_sLdR::synapse0x22e0a50() {
   return (neuron0x22cbf00()*-0.0128913);
}

double NNfunction_sb_sLdR::synapse0x22e0a90() {
   return (neuron0x22cc240()*-0.0141146);
}

double NNfunction_sb_sLdR::synapse0x22e0ad0() {
   return (neuron0x22cc580()*0.00688776);
}

double NNfunction_sb_sLdR::synapse0x22e0b10() {
   return (neuron0x22cc8c0()*-0.0118897);
}

double NNfunction_sb_sLdR::synapse0x22e0b50() {
   return (neuron0x22ccc00()*-0.00280806);
}

double NNfunction_sb_sLdR::synapse0x22e0b90() {
   return (neuron0x22ccf40()*0.00201409);
}

double NNfunction_sb_sLdR::synapse0x22e0f10() {
   return (neuron0x22c8380()*0.372899);
}

double NNfunction_sb_sLdR::synapse0x22e0f50() {
   return (neuron0x22c86c0()*0.0291719);
}

double NNfunction_sb_sLdR::synapse0x22e0f90() {
   return (neuron0x22c8a00()*0.177852);
}

double NNfunction_sb_sLdR::synapse0x22e0fd0() {
   return (neuron0x22c8d40()*-0.540288);
}

double NNfunction_sb_sLdR::synapse0x22e1010() {
   return (neuron0x22c9080()*0.0944644);
}

double NNfunction_sb_sLdR::synapse0x22e1050() {
   return (neuron0x22c93c0()*0.00843686);
}

double NNfunction_sb_sLdR::synapse0x22e1090() {
   return (neuron0x22c9700()*-0.0131954);
}

double NNfunction_sb_sLdR::synapse0x22e10d0() {
   return (neuron0x22c9a40()*-0.208753);
}

double NNfunction_sb_sLdR::synapse0x22e1110() {
   return (neuron0x22c9d80()*0.4022);
}

double NNfunction_sb_sLdR::synapse0x22e1150() {
   return (neuron0x22ca0c0()*0.267698);
}

double NNfunction_sb_sLdR::synapse0x22e1190() {
   return (neuron0x22ca400()*-0.219757);
}

double NNfunction_sb_sLdR::synapse0x22e11d0() {
   return (neuron0x22ca740()*0.280306);
}

double NNfunction_sb_sLdR::synapse0x22e1210() {
   return (neuron0x22caa80()*-0.779093);
}

double NNfunction_sb_sLdR::synapse0x22e1250() {
   return (neuron0x22cadc0()*0.0859879);
}

double NNfunction_sb_sLdR::synapse0x22e1290() {
   return (neuron0x22cb100()*1.01795);
}

double NNfunction_sb_sLdR::synapse0x22e12d0() {
   return (neuron0x22cb440()*0.250646);
}

double NNfunction_sb_sLdR::synapse0x22e0d60() {
   return (neuron0x22cb780()*-0.441132);
}

double NNfunction_sb_sLdR::synapse0x22e0da0() {
   return (neuron0x22cbce0()*-0.143962);
}

double NNfunction_sb_sLdR::synapse0x22e1420() {
   return (neuron0x22cbf00()*-0.156173);
}

double NNfunction_sb_sLdR::synapse0x22e1460() {
   return (neuron0x22cc240()*0.483866);
}

double NNfunction_sb_sLdR::synapse0x22e14a0() {
   return (neuron0x22cc580()*0.129768);
}

double NNfunction_sb_sLdR::synapse0x22e14e0() {
   return (neuron0x22cc8c0()*0.0643889);
}

double NNfunction_sb_sLdR::synapse0x22e1520() {
   return (neuron0x22ccc00()*-0.27461);
}

double NNfunction_sb_sLdR::synapse0x22e1560() {
   return (neuron0x22ccf40()*-0.149283);
}

double NNfunction_sb_sLdR::synapse0x22e18e0() {
   return (neuron0x22c8380()*0.473519);
}

double NNfunction_sb_sLdR::synapse0x22e1920() {
   return (neuron0x22c86c0()*0.236887);
}

double NNfunction_sb_sLdR::synapse0x22e1960() {
   return (neuron0x22c8a00()*-0.170211);
}

double NNfunction_sb_sLdR::synapse0x22e19a0() {
   return (neuron0x22c8d40()*0.182248);
}

double NNfunction_sb_sLdR::synapse0x22e19e0() {
   return (neuron0x22c9080()*-0.614054);
}

double NNfunction_sb_sLdR::synapse0x22e1a20() {
   return (neuron0x22c93c0()*-0.704595);
}

double NNfunction_sb_sLdR::synapse0x22e1a60() {
   return (neuron0x22c9700()*-0.263032);
}

double NNfunction_sb_sLdR::synapse0x22e1aa0() {
   return (neuron0x22c9a40()*0.285218);
}

double NNfunction_sb_sLdR::synapse0x22e1ae0() {
   return (neuron0x22c9d80()*-0.773048);
}

double NNfunction_sb_sLdR::synapse0x22e1b20() {
   return (neuron0x22ca0c0()*0.224123);
}

double NNfunction_sb_sLdR::synapse0x22e1b60() {
   return (neuron0x22ca400()*-0.203511);
}

double NNfunction_sb_sLdR::synapse0x22e1ba0() {
   return (neuron0x22ca740()*-0.0107028);
}

double NNfunction_sb_sLdR::synapse0x22e1be0() {
   return (neuron0x22caa80()*0.96135);
}

double NNfunction_sb_sLdR::synapse0x22e1c20() {
   return (neuron0x22cadc0()*0.261473);
}

double NNfunction_sb_sLdR::synapse0x22e1c60() {
   return (neuron0x22cb100()*0.379846);
}

double NNfunction_sb_sLdR::synapse0x22e1ca0() {
   return (neuron0x22cb440()*0.0422491);
}

double NNfunction_sb_sLdR::synapse0x22e1730() {
   return (neuron0x22cb780()*-0.587197);
}

double NNfunction_sb_sLdR::synapse0x22e1770() {
   return (neuron0x22cbce0()*0.290092);
}

double NNfunction_sb_sLdR::synapse0x22e1df0() {
   return (neuron0x22cbf00()*0.112531);
}

double NNfunction_sb_sLdR::synapse0x22e1e30() {
   return (neuron0x22cc240()*-0.291278);
}

double NNfunction_sb_sLdR::synapse0x22e1e70() {
   return (neuron0x22cc580()*0.075485);
}

double NNfunction_sb_sLdR::synapse0x22e1eb0() {
   return (neuron0x22cc8c0()*0.251044);
}

double NNfunction_sb_sLdR::synapse0x22e1ef0() {
   return (neuron0x22ccc00()*-0.165632);
}

double NNfunction_sb_sLdR::synapse0x22e1f30() {
   return (neuron0x22ccf40()*-0.0307454);
}

double NNfunction_sb_sLdR::synapse0x22e22b0() {
   return (neuron0x22c8380()*-0.153934);
}

double NNfunction_sb_sLdR::synapse0x22e22f0() {
   return (neuron0x22c86c0()*-0.0945787);
}

double NNfunction_sb_sLdR::synapse0x22e2330() {
   return (neuron0x22c8a00()*0.0268678);
}

double NNfunction_sb_sLdR::synapse0x22e2370() {
   return (neuron0x22c8d40()*-0.755553);
}

double NNfunction_sb_sLdR::synapse0x22e23b0() {
   return (neuron0x22c9080()*0.174578);
}

double NNfunction_sb_sLdR::synapse0x22e23f0() {
   return (neuron0x22c93c0()*0.0380535);
}

double NNfunction_sb_sLdR::synapse0x22e2430() {
   return (neuron0x22c9700()*0.183856);
}

double NNfunction_sb_sLdR::synapse0x22e2470() {
   return (neuron0x22c9a40()*0.407968);
}

double NNfunction_sb_sLdR::synapse0x22e24b0() {
   return (neuron0x22c9d80()*-0.371913);
}

double NNfunction_sb_sLdR::synapse0x22e24f0() {
   return (neuron0x22ca0c0()*-0.65803);
}

double NNfunction_sb_sLdR::synapse0x22e2530() {
   return (neuron0x22ca400()*-0.0506763);
}

double NNfunction_sb_sLdR::synapse0x22e2570() {
   return (neuron0x22ca740()*0.0902082);
}

double NNfunction_sb_sLdR::synapse0x22e25b0() {
   return (neuron0x22caa80()*1.66269);
}

double NNfunction_sb_sLdR::synapse0x22e25f0() {
   return (neuron0x22cadc0()*-0.0468527);
}

double NNfunction_sb_sLdR::synapse0x22e2630() {
   return (neuron0x22cb100()*-0.103212);
}

double NNfunction_sb_sLdR::synapse0x22e2670() {
   return (neuron0x22cb440()*0.267696);
}

double NNfunction_sb_sLdR::synapse0x22e2100() {
   return (neuron0x22cb780()*0.0511443);
}

double NNfunction_sb_sLdR::synapse0x22e2140() {
   return (neuron0x22cbce0()*1.07452);
}

double NNfunction_sb_sLdR::synapse0x22e27c0() {
   return (neuron0x22cbf00()*-0.00927877);
}

double NNfunction_sb_sLdR::synapse0x22e2800() {
   return (neuron0x22cc240()*-0.487052);
}

double NNfunction_sb_sLdR::synapse0x22e2840() {
   return (neuron0x22cc580()*-0.190871);
}

double NNfunction_sb_sLdR::synapse0x22e2880() {
   return (neuron0x22cc8c0()*0.168926);
}

double NNfunction_sb_sLdR::synapse0x22e28c0() {
   return (neuron0x22ccc00()*0.218606);
}

double NNfunction_sb_sLdR::synapse0x22e2900() {
   return (neuron0x22ccf40()*0.0998691);
}

double NNfunction_sb_sLdR::synapse0x22e2c80() {
   return (neuron0x22c8380()*-0.375993);
}

double NNfunction_sb_sLdR::synapse0x22d7250() {
   return (neuron0x22c86c0()*0.358949);
}

double NNfunction_sb_sLdR::synapse0x22d7290() {
   return (neuron0x22c8a00()*-0.302587);
}

double NNfunction_sb_sLdR::synapse0x22d72d0() {
   return (neuron0x22c8d40()*0.0901032);
}

double NNfunction_sb_sLdR::synapse0x22d7520() {
   return (neuron0x22c9080()*-0.111947);
}

double NNfunction_sb_sLdR::synapse0x22d7560() {
   return (neuron0x22c93c0()*0.194001);
}

double NNfunction_sb_sLdR::synapse0x22d75a0() {
   return (neuron0x22c9700()*-0.376105);
}

double NNfunction_sb_sLdR::synapse0x22d77f0() {
   return (neuron0x22c9a40()*0.495341);
}

double NNfunction_sb_sLdR::synapse0x22d7830() {
   return (neuron0x22c9d80()*-0.180253);
}

double NNfunction_sb_sLdR::synapse0x22d7a80() {
   return (neuron0x22ca0c0()*-0.216055);
}

double NNfunction_sb_sLdR::synapse0x22d7ac0() {
   return (neuron0x22ca400()*0.175125);
}

double NNfunction_sb_sLdR::synapse0x22d7b00() {
   return (neuron0x22ca740()*-0.244975);
}

double NNfunction_sb_sLdR::synapse0x22d7d50() {
   return (neuron0x22caa80()*1.23356);
}

double NNfunction_sb_sLdR::synapse0x22d7d90() {
   return (neuron0x22cadc0()*0.161556);
}

double NNfunction_sb_sLdR::synapse0x22d7fe0() {
   return (neuron0x22cb100()*-0.555938);
}

double NNfunction_sb_sLdR::synapse0x22d8020() {
   return (neuron0x22cb440()*-0.284061);
}

double NNfunction_sb_sLdR::synapse0x22e2ad0() {
   return (neuron0x22cb780()*0.394268);
}

double NNfunction_sb_sLdR::synapse0x22e2b10() {
   return (neuron0x22cbce0()*-0.275781);
}

double NNfunction_sb_sLdR::synapse0x22d8170() {
   return (neuron0x22cbf00()*-0.065193);
}

double NNfunction_sb_sLdR::synapse0x22d8680() {
   return (neuron0x22cc240()*-0.263938);
}

double NNfunction_sb_sLdR::synapse0x22d86c0() {
   return (neuron0x22cc580()*-0.0953733);
}

double NNfunction_sb_sLdR::synapse0x22d8700() {
   return (neuron0x22cc8c0()*-0.0499095);
}

double NNfunction_sb_sLdR::synapse0x22d8950() {
   return (neuron0x22ccc00()*-0.170903);
}

double NNfunction_sb_sLdR::synapse0x22d8990() {
   return (neuron0x22ccf40()*-0.0538991);
}

double NNfunction_sb_sLdR::synapse0x22d8240() {
   return (neuron0x22c8380()*-0.663575);
}

double NNfunction_sb_sLdR::synapse0x22d8280() {
   return (neuron0x22c86c0()*0.099679);
}

double NNfunction_sb_sLdR::synapse0x22d82c0() {
   return (neuron0x22c8a00()*1.10273);
}

double NNfunction_sb_sLdR::synapse0x22d8300() {
   return (neuron0x22c8d40()*-0.0438481);
}

double NNfunction_sb_sLdR::synapse0x22d8c80() {
   return (neuron0x22c9080()*-0.0405743);
}

double NNfunction_sb_sLdR::synapse0x22e4fd0() {
   return (neuron0x22c93c0()*-0.70272);
}

double NNfunction_sb_sLdR::synapse0x22e5010() {
   return (neuron0x22c9700()*0.60797);
}

double NNfunction_sb_sLdR::synapse0x22e5050() {
   return (neuron0x22c9a40()*-0.176938);
}

double NNfunction_sb_sLdR::synapse0x22e5090() {
   return (neuron0x22c9d80()*0.0410881);
}

double NNfunction_sb_sLdR::synapse0x22e50d0() {
   return (neuron0x22ca0c0()*-0.789784);
}

double NNfunction_sb_sLdR::synapse0x22e5110() {
   return (neuron0x22ca400()*0.47855);
}

double NNfunction_sb_sLdR::synapse0x22e5150() {
   return (neuron0x22ca740()*-0.541011);
}

double NNfunction_sb_sLdR::synapse0x22e5190() {
   return (neuron0x22caa80()*0.321546);
}

double NNfunction_sb_sLdR::synapse0x22e51d0() {
   return (neuron0x22cadc0()*0.227263);
}

double NNfunction_sb_sLdR::synapse0x22e5210() {
   return (neuron0x22cb100()*0.269924);
}

double NNfunction_sb_sLdR::synapse0x22e5250() {
   return (neuron0x22cb440()*0.496455);
}

double NNfunction_sb_sLdR::synapse0x22d8b60() {
   return (neuron0x22cb780()*0.504143);
}

double NNfunction_sb_sLdR::synapse0x22d8ba0() {
   return (neuron0x22cbce0()*-0.276549);
}

double NNfunction_sb_sLdR::synapse0x22e53a0() {
   return (neuron0x22cbf00()*-0.177825);
}

double NNfunction_sb_sLdR::synapse0x22e53e0() {
   return (neuron0x22cc240()*-0.0334868);
}

double NNfunction_sb_sLdR::synapse0x22e5420() {
   return (neuron0x22cc580()*0.379575);
}

double NNfunction_sb_sLdR::synapse0x22e5460() {
   return (neuron0x22cc8c0()*0.181786);
}

double NNfunction_sb_sLdR::synapse0x22e54a0() {
   return (neuron0x22ccc00()*0.43885);
}

double NNfunction_sb_sLdR::synapse0x22e54e0() {
   return (neuron0x22ccf40()*0.175042);
}

double NNfunction_sb_sLdR::synapse0x22e5860() {
   return (neuron0x22c8380()*0.33724);
}

double NNfunction_sb_sLdR::synapse0x22e58a0() {
   return (neuron0x22c86c0()*0.0479216);
}

double NNfunction_sb_sLdR::synapse0x22e58e0() {
   return (neuron0x22c8a00()*-0.0272314);
}

double NNfunction_sb_sLdR::synapse0x22e5920() {
   return (neuron0x22c8d40()*0.172925);
}

double NNfunction_sb_sLdR::synapse0x22e5960() {
   return (neuron0x22c9080()*-0.00379872);
}

double NNfunction_sb_sLdR::synapse0x22e59a0() {
   return (neuron0x22c93c0()*0.273026);
}

double NNfunction_sb_sLdR::synapse0x22e59e0() {
   return (neuron0x22c9700()*0.0653385);
}

double NNfunction_sb_sLdR::synapse0x22e5a20() {
   return (neuron0x22c9a40()*0.166481);
}

double NNfunction_sb_sLdR::synapse0x22e5a60() {
   return (neuron0x22c9d80()*-0.423336);
}

double NNfunction_sb_sLdR::synapse0x22e5aa0() {
   return (neuron0x22ca0c0()*0.117012);
}

double NNfunction_sb_sLdR::synapse0x22e5ae0() {
   return (neuron0x22ca400()*-0.330385);
}

double NNfunction_sb_sLdR::synapse0x22e5b20() {
   return (neuron0x22ca740()*-0.0672672);
}

double NNfunction_sb_sLdR::synapse0x22e5b60() {
   return (neuron0x22caa80()*0.495724);
}

double NNfunction_sb_sLdR::synapse0x22e5ba0() {
   return (neuron0x22cadc0()*-0.0528415);
}

double NNfunction_sb_sLdR::synapse0x22e5be0() {
   return (neuron0x22cb100()*-0.017439);
}

double NNfunction_sb_sLdR::synapse0x22e5c20() {
   return (neuron0x22cb440()*-0.0764655);
}

double NNfunction_sb_sLdR::synapse0x22e56b0() {
   return (neuron0x22cb780()*0.0543737);
}

double NNfunction_sb_sLdR::synapse0x22e56f0() {
   return (neuron0x22cbce0()*0.869469);
}

double NNfunction_sb_sLdR::synapse0x22e5d70() {
   return (neuron0x22cbf00()*0.152919);
}

double NNfunction_sb_sLdR::synapse0x22e5db0() {
   return (neuron0x22cc240()*0.225991);
}

double NNfunction_sb_sLdR::synapse0x22e5df0() {
   return (neuron0x22cc580()*0.121341);
}

double NNfunction_sb_sLdR::synapse0x22e5e30() {
   return (neuron0x22cc8c0()*-0.0365439);
}

double NNfunction_sb_sLdR::synapse0x22e5e70() {
   return (neuron0x22ccc00()*-0.158968);
}

double NNfunction_sb_sLdR::synapse0x22e5eb0() {
   return (neuron0x22ccf40()*-0.00979605);
}

double NNfunction_sb_sLdR::synapse0x22e6230() {
   return (neuron0x22c8380()*-0.413586);
}

double NNfunction_sb_sLdR::synapse0x22e6270() {
   return (neuron0x22c86c0()*-0.416691);
}

double NNfunction_sb_sLdR::synapse0x22e62b0() {
   return (neuron0x22c8a00()*-0.13856);
}

double NNfunction_sb_sLdR::synapse0x22e62f0() {
   return (neuron0x22c8d40()*0.433008);
}

double NNfunction_sb_sLdR::synapse0x22e6330() {
   return (neuron0x22c9080()*0.134668);
}

double NNfunction_sb_sLdR::synapse0x22e6370() {
   return (neuron0x22c93c0()*-0.298949);
}

double NNfunction_sb_sLdR::synapse0x22e63b0() {
   return (neuron0x22c9700()*-0.220133);
}

double NNfunction_sb_sLdR::synapse0x22e63f0() {
   return (neuron0x22c9a40()*0.108024);
}

double NNfunction_sb_sLdR::synapse0x22e6430() {
   return (neuron0x22c9d80()*0.0925017);
}

double NNfunction_sb_sLdR::synapse0x22e6470() {
   return (neuron0x22ca0c0()*-0.438188);
}

double NNfunction_sb_sLdR::synapse0x22e64b0() {
   return (neuron0x22ca400()*0.164811);
}

double NNfunction_sb_sLdR::synapse0x22e64f0() {
   return (neuron0x22ca740()*-0.134157);
}

double NNfunction_sb_sLdR::synapse0x22e6530() {
   return (neuron0x22caa80()*-0.159608);
}

double NNfunction_sb_sLdR::synapse0x22e6570() {
   return (neuron0x22cadc0()*0.600285);
}

double NNfunction_sb_sLdR::synapse0x22e65b0() {
   return (neuron0x22cb100()*0.202622);
}

double NNfunction_sb_sLdR::synapse0x22e65f0() {
   return (neuron0x22cb440()*0.186212);
}

double NNfunction_sb_sLdR::synapse0x22e6080() {
   return (neuron0x22cb780()*0.00115218);
}

double NNfunction_sb_sLdR::synapse0x22e60c0() {
   return (neuron0x22cbce0()*-0.430716);
}

double NNfunction_sb_sLdR::synapse0x22e6740() {
   return (neuron0x22cbf00()*-0.192619);
}

double NNfunction_sb_sLdR::synapse0x22e6780() {
   return (neuron0x22cc240()*-0.380145);
}

double NNfunction_sb_sLdR::synapse0x22e67c0() {
   return (neuron0x22cc580()*-0.568356);
}

double NNfunction_sb_sLdR::synapse0x22e6800() {
   return (neuron0x22cc8c0()*-0.219362);
}

double NNfunction_sb_sLdR::synapse0x22e6840() {
   return (neuron0x22ccc00()*0.478617);
}

double NNfunction_sb_sLdR::synapse0x22e6880() {
   return (neuron0x22ccf40()*0.071709);
}

double NNfunction_sb_sLdR::synapse0x22e6c00() {
   return (neuron0x22c8380()*0.0112697);
}

double NNfunction_sb_sLdR::synapse0x22e6c40() {
   return (neuron0x22c86c0()*-0.00302624);
}

double NNfunction_sb_sLdR::synapse0x22e6c80() {
   return (neuron0x22c8a00()*-0.0201567);
}

double NNfunction_sb_sLdR::synapse0x22e6cc0() {
   return (neuron0x22c8d40()*4.32425);
}

double NNfunction_sb_sLdR::synapse0x22e6d00() {
   return (neuron0x22c9080()*0.00784291);
}

double NNfunction_sb_sLdR::synapse0x22e6d40() {
   return (neuron0x22c93c0()*-0.0248415);
}

double NNfunction_sb_sLdR::synapse0x22e6d80() {
   return (neuron0x22c9700()*-0.0524992);
}

double NNfunction_sb_sLdR::synapse0x22e6dc0() {
   return (neuron0x22c9a40()*0.0396667);
}

double NNfunction_sb_sLdR::synapse0x22e6e00() {
   return (neuron0x22c9d80()*0.022359);
}

double NNfunction_sb_sLdR::synapse0x22e6e40() {
   return (neuron0x22ca0c0()*-0.00139573);
}

double NNfunction_sb_sLdR::synapse0x22e6e80() {
   return (neuron0x22ca400()*0.0290718);
}

double NNfunction_sb_sLdR::synapse0x22e6ec0() {
   return (neuron0x22ca740()*0.018803);
}

double NNfunction_sb_sLdR::synapse0x22e6f00() {
   return (neuron0x22caa80()*-0.880776);
}

double NNfunction_sb_sLdR::synapse0x22e6f40() {
   return (neuron0x22cadc0()*-0.0243225);
}

double NNfunction_sb_sLdR::synapse0x22e6f80() {
   return (neuron0x22cb100()*0.0321763);
}

double NNfunction_sb_sLdR::synapse0x22e6fc0() {
   return (neuron0x22cb440()*-0.039591);
}

double NNfunction_sb_sLdR::synapse0x22e6a50() {
   return (neuron0x22cb780()*-0.00939622);
}

double NNfunction_sb_sLdR::synapse0x22e6a90() {
   return (neuron0x22cbce0()*-0.209082);
}

double NNfunction_sb_sLdR::synapse0x22e7110() {
   return (neuron0x22cbf00()*0.00491151);
}

double NNfunction_sb_sLdR::synapse0x22e7150() {
   return (neuron0x22cc240()*-0.00793431);
}

double NNfunction_sb_sLdR::synapse0x22e7190() {
   return (neuron0x22cc580()*-0.0115742);
}

double NNfunction_sb_sLdR::synapse0x22e71d0() {
   return (neuron0x22cc8c0()*-0.0251276);
}

double NNfunction_sb_sLdR::synapse0x22e7210() {
   return (neuron0x22ccc00()*-0.0198273);
}

double NNfunction_sb_sLdR::synapse0x22e7250() {
   return (neuron0x22ccf40()*0.0279241);
}

double NNfunction_sb_sLdR::synapse0x22e75d0() {
   return (neuron0x22c8380()*-0.125968);
}

double NNfunction_sb_sLdR::synapse0x22e7610() {
   return (neuron0x22c86c0()*0.00203689);
}

double NNfunction_sb_sLdR::synapse0x22e7650() {
   return (neuron0x22c8a00()*-0.00437894);
}

double NNfunction_sb_sLdR::synapse0x22e7690() {
   return (neuron0x22c8d40()*-0.00714413);
}

double NNfunction_sb_sLdR::synapse0x22e76d0() {
   return (neuron0x22c9080()*0.0614121);
}

double NNfunction_sb_sLdR::synapse0x22e7710() {
   return (neuron0x22c93c0()*0.00859256);
}

double NNfunction_sb_sLdR::synapse0x22e7750() {
   return (neuron0x22c9700()*0.0074599);
}

double NNfunction_sb_sLdR::synapse0x22e7790() {
   return (neuron0x22c9a40()*-0.0400087);
}

double NNfunction_sb_sLdR::synapse0x22e77d0() {
   return (neuron0x22c9d80()*0.0120741);
}

double NNfunction_sb_sLdR::synapse0x22e7810() {
   return (neuron0x22ca0c0()*-0.00187455);
}

double NNfunction_sb_sLdR::synapse0x22e7850() {
   return (neuron0x22ca400()*0.0280153);
}

double NNfunction_sb_sLdR::synapse0x22e7890() {
   return (neuron0x22ca740()*0.321304);
}

double NNfunction_sb_sLdR::synapse0x22e78d0() {
   return (neuron0x22caa80()*-0.177677);
}

double NNfunction_sb_sLdR::synapse0x22e7910() {
   return (neuron0x22cadc0()*-0.0934474);
}

double NNfunction_sb_sLdR::synapse0x22e7950() {
   return (neuron0x22cb100()*0.246539);
}

double NNfunction_sb_sLdR::synapse0x22e7990() {
   return (neuron0x22cb440()*0.244222);
}

double NNfunction_sb_sLdR::synapse0x22e7420() {
   return (neuron0x22cb780()*-0.010808);
}

double NNfunction_sb_sLdR::synapse0x22e7460() {
   return (neuron0x22cbce0()*-0.10573);
}

double NNfunction_sb_sLdR::synapse0x22e7ae0() {
   return (neuron0x22cbf00()*0.171195);
}

double NNfunction_sb_sLdR::synapse0x22e7b20() {
   return (neuron0x22cc240()*-0.0281282);
}

double NNfunction_sb_sLdR::synapse0x22e7b60() {
   return (neuron0x22cc580()*0.00219535);
}

double NNfunction_sb_sLdR::synapse0x22e7ba0() {
   return (neuron0x22cc8c0()*0.0151001);
}

double NNfunction_sb_sLdR::synapse0x22e7be0() {
   return (neuron0x22ccc00()*0.00581244);
}

double NNfunction_sb_sLdR::synapse0x22e7c20() {
   return (neuron0x22ccf40()*0.00659519);
}

double NNfunction_sb_sLdR::synapse0x22e7fa0() {
   return (neuron0x22c8380()*-0.152211);
}

double NNfunction_sb_sLdR::synapse0x22e7fe0() {
   return (neuron0x22c86c0()*-0.0165456);
}

double NNfunction_sb_sLdR::synapse0x22e8020() {
   return (neuron0x22c8a00()*0.0705779);
}

double NNfunction_sb_sLdR::synapse0x22e8060() {
   return (neuron0x22c8d40()*0.612721);
}

double NNfunction_sb_sLdR::synapse0x22e80a0() {
   return (neuron0x22c9080()*0.0847807);
}

double NNfunction_sb_sLdR::synapse0x22e80e0() {
   return (neuron0x22c93c0()*-0.0125555);
}

double NNfunction_sb_sLdR::synapse0x22e8120() {
   return (neuron0x22c9700()*0.00160271);
}

double NNfunction_sb_sLdR::synapse0x22e8160() {
   return (neuron0x22c9a40()*-0.125033);
}

double NNfunction_sb_sLdR::synapse0x22e81a0() {
   return (neuron0x22c9d80()*0.0400946);
}

double NNfunction_sb_sLdR::synapse0x22e81e0() {
   return (neuron0x22ca0c0()*-0.0770445);
}

double NNfunction_sb_sLdR::synapse0x22e8220() {
   return (neuron0x22ca400()*0.0364508);
}

double NNfunction_sb_sLdR::synapse0x22e8260() {
   return (neuron0x22ca740()*-0.306363);
}

double NNfunction_sb_sLdR::synapse0x22e82a0() {
   return (neuron0x22caa80()*-0.627763);
}

double NNfunction_sb_sLdR::synapse0x22e82e0() {
   return (neuron0x22cadc0()*-0.0597293);
}

double NNfunction_sb_sLdR::synapse0x22e8320() {
   return (neuron0x22cb100()*-0.0401271);
}

double NNfunction_sb_sLdR::synapse0x22e8360() {
   return (neuron0x22cb440()*-0.137863);
}

double NNfunction_sb_sLdR::synapse0x22e7df0() {
   return (neuron0x22cb780()*0.075098);
}

double NNfunction_sb_sLdR::synapse0x22e7e30() {
   return (neuron0x22cbce0()*-0.846808);
}

double NNfunction_sb_sLdR::synapse0x22e84b0() {
   return (neuron0x22cbf00()*-0.184402);
}

double NNfunction_sb_sLdR::synapse0x22e84f0() {
   return (neuron0x22cc240()*0.0272026);
}

double NNfunction_sb_sLdR::synapse0x22e8530() {
   return (neuron0x22cc580()*0.0271483);
}

double NNfunction_sb_sLdR::synapse0x22e8570() {
   return (neuron0x22cc8c0()*0.0401897);
}

double NNfunction_sb_sLdR::synapse0x22e85b0() {
   return (neuron0x22ccc00()*0.00217476);
}

double NNfunction_sb_sLdR::synapse0x22e85f0() {
   return (neuron0x22ccf40()*-0.0254252);
}

double NNfunction_sb_sLdR::synapse0x22e8970() {
   return (neuron0x22c8380()*-0.0609075);
}

double NNfunction_sb_sLdR::synapse0x22e89b0() {
   return (neuron0x22c86c0()*0.02187);
}

double NNfunction_sb_sLdR::synapse0x22e89f0() {
   return (neuron0x22c8a00()*0.0663893);
}

double NNfunction_sb_sLdR::synapse0x22e8a30() {
   return (neuron0x22c8d40()*0.0183652);
}

double NNfunction_sb_sLdR::synapse0x22e8a70() {
   return (neuron0x22c9080()*0.0327233);
}

double NNfunction_sb_sLdR::synapse0x22e8ab0() {
   return (neuron0x22c93c0()*-0.0098161);
}

double NNfunction_sb_sLdR::synapse0x22e8af0() {
   return (neuron0x22c9700()*0.0244754);
}

double NNfunction_sb_sLdR::synapse0x22e8b30() {
   return (neuron0x22c9a40()*-0.00839357);
}

double NNfunction_sb_sLdR::synapse0x22e8b70() {
   return (neuron0x22c9d80()*-0.0224399);
}

double NNfunction_sb_sLdR::synapse0x22e8bb0() {
   return (neuron0x22ca0c0()*0.0229329);
}

double NNfunction_sb_sLdR::synapse0x22e8bf0() {
   return (neuron0x22ca400()*-0.0135306);
}

double NNfunction_sb_sLdR::synapse0x22e8c30() {
   return (neuron0x22ca740()*-0.0325206);
}

double NNfunction_sb_sLdR::synapse0x22e8c70() {
   return (neuron0x22caa80()*-2.08803);
}

double NNfunction_sb_sLdR::synapse0x22e8cb0() {
   return (neuron0x22cadc0()*-0.00347456);
}

double NNfunction_sb_sLdR::synapse0x22e8cf0() {
   return (neuron0x22cb100()*0.0166802);
}

double NNfunction_sb_sLdR::synapse0x22e8d30() {
   return (neuron0x22cb440()*0.0176869);
}

double NNfunction_sb_sLdR::synapse0x22e87c0() {
   return (neuron0x22cb780()*0.00695788);
}

double NNfunction_sb_sLdR::synapse0x22e8800() {
   return (neuron0x22cbce0()*0.29168);
}

double NNfunction_sb_sLdR::synapse0x22e8e80() {
   return (neuron0x22cbf00()*-0.0310159);
}

double NNfunction_sb_sLdR::synapse0x22e8ec0() {
   return (neuron0x22cc240()*-0.0103128);
}

double NNfunction_sb_sLdR::synapse0x22e8f00() {
   return (neuron0x22cc580()*-0.00156144);
}

double NNfunction_sb_sLdR::synapse0x22e8f40() {
   return (neuron0x22cc8c0()*0.0193357);
}

double NNfunction_sb_sLdR::synapse0x22e8f80() {
   return (neuron0x22ccc00()*-0.0290777);
}

double NNfunction_sb_sLdR::synapse0x22e8fc0() {
   return (neuron0x22ccf40()*-0.0085634);
}

double NNfunction_sb_sLdR::synapse0x22e9340() {
   return (neuron0x22c8380()*0.15658);
}

double NNfunction_sb_sLdR::synapse0x22e9380() {
   return (neuron0x22c86c0()*0.0359459);
}

double NNfunction_sb_sLdR::synapse0x22e93c0() {
   return (neuron0x22c8a00()*-0.040473);
}

double NNfunction_sb_sLdR::synapse0x22e9400() {
   return (neuron0x22c8d40()*-1.9645);
}

double NNfunction_sb_sLdR::synapse0x22e9440() {
   return (neuron0x22c9080()*-0.0232319);
}

double NNfunction_sb_sLdR::synapse0x22e9480() {
   return (neuron0x22c93c0()*-0.00936125);
}

double NNfunction_sb_sLdR::synapse0x22e94c0() {
   return (neuron0x22c9700()*0.000128451);
}

double NNfunction_sb_sLdR::synapse0x22e9500() {
   return (neuron0x22c9a40()*0.0157774);
}

double NNfunction_sb_sLdR::synapse0x22e9540() {
   return (neuron0x22c9d80()*-0.0340049);
}

double NNfunction_sb_sLdR::synapse0x22e9580() {
   return (neuron0x22ca0c0()*-0.0321323);
}

double NNfunction_sb_sLdR::synapse0x22e95c0() {
   return (neuron0x22ca400()*-0.0383343);
}

double NNfunction_sb_sLdR::synapse0x22e9600() {
   return (neuron0x22ca740()*0.0238618);
}

double NNfunction_sb_sLdR::synapse0x22e9640() {
   return (neuron0x22caa80()*-0.0721312);
}

double NNfunction_sb_sLdR::synapse0x22e9680() {
   return (neuron0x22cadc0()*-0.0452502);
}

double NNfunction_sb_sLdR::synapse0x22e96c0() {
   return (neuron0x22cb100()*0.0222879);
}

double NNfunction_sb_sLdR::synapse0x22e9700() {
   return (neuron0x22cb440()*-0.0172219);
}

double NNfunction_sb_sLdR::synapse0x22e9190() {
   return (neuron0x22cb780()*-0.0486703);
}

double NNfunction_sb_sLdR::synapse0x22e91d0() {
   return (neuron0x22cbce0()*-0.146987);
}

double NNfunction_sb_sLdR::synapse0x22e9850() {
   return (neuron0x22cbf00()*0.00163265);
}

double NNfunction_sb_sLdR::synapse0x22e9890() {
   return (neuron0x22cc240()*0.0145531);
}

double NNfunction_sb_sLdR::synapse0x22e98d0() {
   return (neuron0x22cc580()*0.0108844);
}

double NNfunction_sb_sLdR::synapse0x22e9910() {
   return (neuron0x22cc8c0()*-0.0343243);
}

double NNfunction_sb_sLdR::synapse0x22e9950() {
   return (neuron0x22ccc00()*0.0226781);
}

double NNfunction_sb_sLdR::synapse0x22e9990() {
   return (neuron0x22ccf40()*0.0341588);
}

double NNfunction_sb_sLdR::synapse0x22d2440() {
   return (neuron0x22c8380()*-0.0969592);
}

double NNfunction_sb_sLdR::synapse0x22d2480() {
   return (neuron0x22c86c0()*0.176607);
}

double NNfunction_sb_sLdR::synapse0x22d24c0() {
   return (neuron0x22c8a00()*0.0869545);
}

double NNfunction_sb_sLdR::synapse0x22d2500() {
   return (neuron0x22c8d40()*0.179849);
}

double NNfunction_sb_sLdR::synapse0x22d2540() {
   return (neuron0x22c9080()*0.227616);
}

double NNfunction_sb_sLdR::synapse0x22d2580() {
   return (neuron0x22c93c0()*-0.0467955);
}

double NNfunction_sb_sLdR::synapse0x22d25c0() {
   return (neuron0x22c9700()*0.171998);
}

double NNfunction_sb_sLdR::synapse0x22d2600() {
   return (neuron0x22c9a40()*0.104136);
}

double NNfunction_sb_sLdR::synapse0x22ea120() {
   return (neuron0x22c9d80()*0.0133696);
}

double NNfunction_sb_sLdR::synapse0x22ea160() {
   return (neuron0x22ca0c0()*0.817224);
}

double NNfunction_sb_sLdR::synapse0x22ea1a0() {
   return (neuron0x22ca400()*0.103242);
}

double NNfunction_sb_sLdR::synapse0x22ea1e0() {
   return (neuron0x22ca740()*0.225487);
}

double NNfunction_sb_sLdR::synapse0x22ea220() {
   return (neuron0x22caa80()*1.35241);
}

double NNfunction_sb_sLdR::synapse0x22ea260() {
   return (neuron0x22cadc0()*-0.0902914);
}

double NNfunction_sb_sLdR::synapse0x22ea2a0() {
   return (neuron0x22cb100()*0.0835757);
}

double NNfunction_sb_sLdR::synapse0x22ea2e0() {
   return (neuron0x22cb440()*-0.0977265);
}

double NNfunction_sb_sLdR::synapse0x22e9b60() {
   return (neuron0x22cb780()*0.00627403);
}

double NNfunction_sb_sLdR::synapse0x22e9ba0() {
   return (neuron0x22cbce0()*0.643671);
}

double NNfunction_sb_sLdR::synapse0x22ea430() {
   return (neuron0x22cbf00()*0.00539178);
}

double NNfunction_sb_sLdR::synapse0x22ea470() {
   return (neuron0x22cc240()*-0.0458373);
}

double NNfunction_sb_sLdR::synapse0x22ea4b0() {
   return (neuron0x22cc580()*-0.140778);
}

double NNfunction_sb_sLdR::synapse0x22ea4f0() {
   return (neuron0x22cc8c0()*-0.0690024);
}

double NNfunction_sb_sLdR::synapse0x22ea530() {
   return (neuron0x22ccc00()*-0.219371);
}

double NNfunction_sb_sLdR::synapse0x22ea570() {
   return (neuron0x22ccf40()*0.0770072);
}

double NNfunction_sb_sLdR::synapse0x22ea8f0() {
   return (neuron0x22c8380()*0.23642);
}

double NNfunction_sb_sLdR::synapse0x22ea930() {
   return (neuron0x22c86c0()*0.584902);
}

double NNfunction_sb_sLdR::synapse0x22ea970() {
   return (neuron0x22c8a00()*-0.591255);
}

double NNfunction_sb_sLdR::synapse0x22ea9b0() {
   return (neuron0x22c8d40()*-0.686053);
}

double NNfunction_sb_sLdR::synapse0x22ea9f0() {
   return (neuron0x22c9080()*0.269129);
}

double NNfunction_sb_sLdR::synapse0x22eaa30() {
   return (neuron0x22c93c0()*-0.118189);
}

double NNfunction_sb_sLdR::synapse0x22eaa70() {
   return (neuron0x22c9700()*-0.40247);
}

double NNfunction_sb_sLdR::synapse0x22eaab0() {
   return (neuron0x22c9a40()*0.251088);
}

double NNfunction_sb_sLdR::synapse0x22eaaf0() {
   return (neuron0x22c9d80()*0.665735);
}

double NNfunction_sb_sLdR::synapse0x22eab30() {
   return (neuron0x22ca0c0()*-0.972621);
}

double NNfunction_sb_sLdR::synapse0x22eab70() {
   return (neuron0x22ca400()*-0.515861);
}

double NNfunction_sb_sLdR::synapse0x22eabb0() {
   return (neuron0x22ca740()*0.475218);
}

double NNfunction_sb_sLdR::synapse0x22eabf0() {
   return (neuron0x22caa80()*-0.541118);
}

double NNfunction_sb_sLdR::synapse0x22eac30() {
   return (neuron0x22cadc0()*-0.274579);
}

double NNfunction_sb_sLdR::synapse0x22eac70() {
   return (neuron0x22cb100()*-0.226148);
}

double NNfunction_sb_sLdR::synapse0x22eacb0() {
   return (neuron0x22cb440()*-0.156635);
}

double NNfunction_sb_sLdR::synapse0x22ea740() {
   return (neuron0x22cb780()*-0.247334);
}

double NNfunction_sb_sLdR::synapse0x22ea780() {
   return (neuron0x22cbce0()*-0.773738);
}

double NNfunction_sb_sLdR::synapse0x22eae00() {
   return (neuron0x22cbf00()*0.122124);
}

double NNfunction_sb_sLdR::synapse0x22eae40() {
   return (neuron0x22cc240()*0.146008);
}

double NNfunction_sb_sLdR::synapse0x22eae80() {
   return (neuron0x22cc580()*-0.656572);
}

double NNfunction_sb_sLdR::synapse0x22eaec0() {
   return (neuron0x22cc8c0()*-0.156047);
}

double NNfunction_sb_sLdR::synapse0x22eaf00() {
   return (neuron0x22ccc00()*-0.596873);
}

double NNfunction_sb_sLdR::synapse0x22eaf40() {
   return (neuron0x22ccf40()*0.1626);
}

double NNfunction_sb_sLdR::synapse0x22eb2c0() {
   return (neuron0x22c8380()*-0.0344849);
}

double NNfunction_sb_sLdR::synapse0x22eb300() {
   return (neuron0x22c86c0()*0.00461571);
}

double NNfunction_sb_sLdR::synapse0x22eb340() {
   return (neuron0x22c8a00()*0.00545777);
}

double NNfunction_sb_sLdR::synapse0x22eb380() {
   return (neuron0x22c8d40()*-2.74422);
}

double NNfunction_sb_sLdR::synapse0x22eb3c0() {
   return (neuron0x22c9080()*-0.00856011);
}

double NNfunction_sb_sLdR::synapse0x22eb400() {
   return (neuron0x22c93c0()*-0.0182634);
}

double NNfunction_sb_sLdR::synapse0x22eb440() {
   return (neuron0x22c9700()*0.00620592);
}

double NNfunction_sb_sLdR::synapse0x22eb480() {
   return (neuron0x22c9a40()*-0.00421086);
}

double NNfunction_sb_sLdR::synapse0x22eb4c0() {
   return (neuron0x22c9d80()*-0.00204807);
}

double NNfunction_sb_sLdR::synapse0x22eb500() {
   return (neuron0x22ca0c0()*0.00719886);
}

double NNfunction_sb_sLdR::synapse0x22eb540() {
   return (neuron0x22ca400()*-0.0137613);
}

double NNfunction_sb_sLdR::synapse0x22eb580() {
   return (neuron0x22ca740()*-0.0247611);
}

double NNfunction_sb_sLdR::synapse0x22eb5c0() {
   return (neuron0x22caa80()*0.206394);
}

double NNfunction_sb_sLdR::synapse0x22eb600() {
   return (neuron0x22cadc0()*-0.0158221);
}

double NNfunction_sb_sLdR::synapse0x22eb640() {
   return (neuron0x22cb100()*-0.00492499);
}

double NNfunction_sb_sLdR::synapse0x22eb680() {
   return (neuron0x22cb440()*-0.0123213);
}

double NNfunction_sb_sLdR::synapse0x22eb110() {
   return (neuron0x22cb780()*-0.0157863);
}

double NNfunction_sb_sLdR::synapse0x22eb150() {
   return (neuron0x22cbce0()*0.119048);
}

double NNfunction_sb_sLdR::synapse0x22dbc80() {
   return (neuron0x22cbf00()*-0.00978028);
}

double NNfunction_sb_sLdR::synapse0x22dbcc0() {
   return (neuron0x22cc240()*0.0144903);
}

double NNfunction_sb_sLdR::synapse0x22dbd00() {
   return (neuron0x22cc580()*0.0117637);
}

double NNfunction_sb_sLdR::synapse0x22dbd40() {
   return (neuron0x22cc8c0()*0.0148695);
}

double NNfunction_sb_sLdR::synapse0x22dbd80() {
   return (neuron0x22ccc00()*-0.0138565);
}

double NNfunction_sb_sLdR::synapse0x22dbdc0() {
   return (neuron0x22ccf40()*-0.00239839);
}

double NNfunction_sb_sLdR::synapse0x22dc140() {
   return (neuron0x22c8380()*-0.283247);
}

double NNfunction_sb_sLdR::synapse0x22dc180() {
   return (neuron0x22c86c0()*-0.208479);
}

double NNfunction_sb_sLdR::synapse0x22dc1c0() {
   return (neuron0x22c8a00()*0.324568);
}

double NNfunction_sb_sLdR::synapse0x22dc200() {
   return (neuron0x22c8d40()*-0.141203);
}

double NNfunction_sb_sLdR::synapse0x22dc240() {
   return (neuron0x22c9080()*0.00763135);
}

double NNfunction_sb_sLdR::synapse0x22dc280() {
   return (neuron0x22c93c0()*-0.178042);
}

double NNfunction_sb_sLdR::synapse0x22dc2c0() {
   return (neuron0x22c9700()*0.945967);
}

double NNfunction_sb_sLdR::synapse0x22dc300() {
   return (neuron0x22c9a40()*-0.226058);
}

double NNfunction_sb_sLdR::synapse0x22dc340() {
   return (neuron0x22c9d80()*-0.0101096);
}

double NNfunction_sb_sLdR::synapse0x22dc380() {
   return (neuron0x22ca0c0()*-0.0275038);
}

double NNfunction_sb_sLdR::synapse0x22dc3c0() {
   return (neuron0x22ca400()*0.0891566);
}

double NNfunction_sb_sLdR::synapse0x22dc400() {
   return (neuron0x22ca740()*-0.0991435);
}

double NNfunction_sb_sLdR::synapse0x22dc440() {
   return (neuron0x22caa80()*-0.138696);
}

double NNfunction_sb_sLdR::synapse0x22dc480() {
   return (neuron0x22cadc0()*0.0821872);
}

double NNfunction_sb_sLdR::synapse0x22dc4c0() {
   return (neuron0x22cb100()*-0.112399);
}

double NNfunction_sb_sLdR::synapse0x22dc500() {
   return (neuron0x22cb440()*0.8632);
}

double NNfunction_sb_sLdR::synapse0x22dbf90() {
   return (neuron0x22cb780()*0.255106);
}

double NNfunction_sb_sLdR::synapse0x22dbfd0() {
   return (neuron0x22cbce0()*-0.53252);
}

double NNfunction_sb_sLdR::synapse0x22dc650() {
   return (neuron0x22cbf00()*-0.738558);
}

double NNfunction_sb_sLdR::synapse0x22dc690() {
   return (neuron0x22cc240()*-0.410913);
}

double NNfunction_sb_sLdR::synapse0x22dc6d0() {
   return (neuron0x22cc580()*-0.320599);
}

double NNfunction_sb_sLdR::synapse0x22dc710() {
   return (neuron0x22cc8c0()*0.696213);
}

double NNfunction_sb_sLdR::synapse0x22dc750() {
   return (neuron0x22ccc00()*0.10698);
}

double NNfunction_sb_sLdR::synapse0x22dc790() {
   return (neuron0x22ccf40()*0.0284423);
}

double NNfunction_sb_sLdR::synapse0x22dcb10() {
   return (neuron0x22c8380()*-0.0277049);
}

double NNfunction_sb_sLdR::synapse0x22dcb50() {
   return (neuron0x22c86c0()*0.00687431);
}

double NNfunction_sb_sLdR::synapse0x22dcb90() {
   return (neuron0x22c8a00()*0.0373287);
}

double NNfunction_sb_sLdR::synapse0x22dcbd0() {
   return (neuron0x22c8d40()*-0.0229997);
}

double NNfunction_sb_sLdR::synapse0x22dcc10() {
   return (neuron0x22c9080()*0.00233015);
}

double NNfunction_sb_sLdR::synapse0x22dcc50() {
   return (neuron0x22c93c0()*-0.00195504);
}

double NNfunction_sb_sLdR::synapse0x22dcc90() {
   return (neuron0x22c9700()*0.00978975);
}

double NNfunction_sb_sLdR::synapse0x22dccd0() {
   return (neuron0x22c9a40()*-0.01589);
}

double NNfunction_sb_sLdR::synapse0x22dcd10() {
   return (neuron0x22c9d80()*-0.000563636);
}

double NNfunction_sb_sLdR::synapse0x22dcd50() {
   return (neuron0x22ca0c0()*-0.010724);
}

double NNfunction_sb_sLdR::synapse0x22dcd90() {
   return (neuron0x22ca400()*-0.0044664);
}

double NNfunction_sb_sLdR::synapse0x22dcdd0() {
   return (neuron0x22ca740()*0.0111859);
}

double NNfunction_sb_sLdR::synapse0x22dce10() {
   return (neuron0x22caa80()*-0.671719);
}

double NNfunction_sb_sLdR::synapse0x22dce50() {
   return (neuron0x22cadc0()*-0.0256144);
}

double NNfunction_sb_sLdR::synapse0x22dce90() {
   return (neuron0x22cb100()*0.0270643);
}

double NNfunction_sb_sLdR::synapse0x22dced0() {
   return (neuron0x22cb440()*0.031415);
}

double NNfunction_sb_sLdR::synapse0x22dc960() {
   return (neuron0x22cb780()*-0.00423666);
}

double NNfunction_sb_sLdR::synapse0x22dc9a0() {
   return (neuron0x22cbce0()*-0.606591);
}

double NNfunction_sb_sLdR::synapse0x22dd020() {
   return (neuron0x22cbf00()*0.00554486);
}

double NNfunction_sb_sLdR::synapse0x22dd060() {
   return (neuron0x22cc240()*-0.00310705);
}

double NNfunction_sb_sLdR::synapse0x22dd0a0() {
   return (neuron0x22cc580()*-0.00576041);
}

double NNfunction_sb_sLdR::synapse0x22dd0e0() {
   return (neuron0x22cc8c0()*-0.00291655);
}

double NNfunction_sb_sLdR::synapse0x22dd120() {
   return (neuron0x22ccc00()*-0.00425742);
}

double NNfunction_sb_sLdR::synapse0x22dd160() {
   return (neuron0x22ccf40()*0.00228884);
}

double NNfunction_sb_sLdR::synapse0x22dd4e0() {
   return (neuron0x22c8380()*-0.16089);
}

double NNfunction_sb_sLdR::synapse0x22dd520() {
   return (neuron0x22c86c0()*0.0551862);
}

double NNfunction_sb_sLdR::synapse0x22dd560() {
   return (neuron0x22c8a00()*-0.274139);
}

double NNfunction_sb_sLdR::synapse0x22dd5a0() {
   return (neuron0x22c8d40()*0.647587);
}

double NNfunction_sb_sLdR::synapse0x22dd5e0() {
   return (neuron0x22c9080()*-0.040188);
}

double NNfunction_sb_sLdR::synapse0x22dd620() {
   return (neuron0x22c93c0()*-0.0479195);
}

double NNfunction_sb_sLdR::synapse0x22dd660() {
   return (neuron0x22c9700()*0.0135818);
}

double NNfunction_sb_sLdR::synapse0x22dd6a0() {
   return (neuron0x22c9a40()*-0.0640129);
}

double NNfunction_sb_sLdR::synapse0x22dd6e0() {
   return (neuron0x22c9d80()*0.0396552);
}

double NNfunction_sb_sLdR::synapse0x22dd720() {
   return (neuron0x22ca0c0()*-0.0223072);
}

double NNfunction_sb_sLdR::synapse0x22dd760() {
   return (neuron0x22ca400()*0.00440101);
}

double NNfunction_sb_sLdR::synapse0x22dd7a0() {
   return (neuron0x22ca740()*-0.120922);
}

double NNfunction_sb_sLdR::synapse0x22dd7e0() {
   return (neuron0x22caa80()*-0.175803);
}

double NNfunction_sb_sLdR::synapse0x22dd820() {
   return (neuron0x22cadc0()*0.00764938);
}

double NNfunction_sb_sLdR::synapse0x22dd860() {
   return (neuron0x22cb100()*-0.0747608);
}

double NNfunction_sb_sLdR::synapse0x22dd8a0() {
   return (neuron0x22cb440()*-0.0360273);
}

double NNfunction_sb_sLdR::synapse0x22dd330() {
   return (neuron0x22cb780()*0.0656098);
}

double NNfunction_sb_sLdR::synapse0x22dd370() {
   return (neuron0x22cbce0()*0.140684);
}

double NNfunction_sb_sLdR::synapse0x22dd9f0() {
   return (neuron0x22cbf00()*-0.0761908);
}

double NNfunction_sb_sLdR::synapse0x22dda30() {
   return (neuron0x22cc240()*0.00706394);
}

double NNfunction_sb_sLdR::synapse0x22dda70() {
   return (neuron0x22cc580()*-0.0340259);
}

double NNfunction_sb_sLdR::synapse0x22ddab0() {
   return (neuron0x22cc8c0()*-0.0193363);
}

double NNfunction_sb_sLdR::synapse0x22ddaf0() {
   return (neuron0x22ccc00()*-0.0764172);
}

double NNfunction_sb_sLdR::synapse0x22ddb30() {
   return (neuron0x22ccf40()*-0.017452);
}

double NNfunction_sb_sLdR::synapse0x22efa00() {
   return (neuron0x22c8380()*0.289783);
}

double NNfunction_sb_sLdR::synapse0x22efa40() {
   return (neuron0x22c86c0()*-0.220855);
}

double NNfunction_sb_sLdR::synapse0x22efa80() {
   return (neuron0x22c8a00()*0.309874);
}

double NNfunction_sb_sLdR::synapse0x22efac0() {
   return (neuron0x22c8d40()*-0.863132);
}

double NNfunction_sb_sLdR::synapse0x22efb00() {
   return (neuron0x22c9080()*-0.465098);
}

double NNfunction_sb_sLdR::synapse0x22efb40() {
   return (neuron0x22c93c0()*-0.262815);
}

double NNfunction_sb_sLdR::synapse0x22efb80() {
   return (neuron0x22c9700()*0.437303);
}

double NNfunction_sb_sLdR::synapse0x22efbc0() {
   return (neuron0x22c9a40()*0.012889);
}

double NNfunction_sb_sLdR::synapse0x22efc00() {
   return (neuron0x22c9d80()*-0.164926);
}

double NNfunction_sb_sLdR::synapse0x22efc40() {
   return (neuron0x22ca0c0()*0.10489);
}

double NNfunction_sb_sLdR::synapse0x22efc80() {
   return (neuron0x22ca400()*0.0874262);
}

double NNfunction_sb_sLdR::synapse0x22efcc0() {
   return (neuron0x22ca740()*0.313075);
}

double NNfunction_sb_sLdR::synapse0x22efd00() {
   return (neuron0x22caa80()*-0.458401);
}

double NNfunction_sb_sLdR::synapse0x22efd40() {
   return (neuron0x22cadc0()*0.0464573);
}

double NNfunction_sb_sLdR::synapse0x22efd80() {
   return (neuron0x22cb100()*0.203051);
}

double NNfunction_sb_sLdR::synapse0x22efdc0() {
   return (neuron0x22cb440()*0.571082);
}

double NNfunction_sb_sLdR::synapse0x22ddb70() {
   return (neuron0x22cb780()*-0.293431);
}

double NNfunction_sb_sLdR::synapse0x22ddbb0() {
   return (neuron0x22cbce0()*-1.63305);
}

double NNfunction_sb_sLdR::synapse0x22eff10() {
   return (neuron0x22cbf00()*0.289784);
}

double NNfunction_sb_sLdR::synapse0x22eff50() {
   return (neuron0x22cc240()*-0.094525);
}

double NNfunction_sb_sLdR::synapse0x22eff90() {
   return (neuron0x22cc580()*-0.287211);
}

double NNfunction_sb_sLdR::synapse0x22effd0() {
   return (neuron0x22cc8c0()*0.115341);
}

double NNfunction_sb_sLdR::synapse0x22f0010() {
   return (neuron0x22ccc00()*0.280314);
}

double NNfunction_sb_sLdR::synapse0x22f0050() {
   return (neuron0x22ccf40()*0.0895422);
}

double NNfunction_sb_sLdR::synapse0x22f03d0() {
   return (neuron0x22c8380()*-0.00923958);
}

double NNfunction_sb_sLdR::synapse0x22f0410() {
   return (neuron0x22c86c0()*0.0159562);
}

double NNfunction_sb_sLdR::synapse0x22f0450() {
   return (neuron0x22c8a00()*-1.015);
}

double NNfunction_sb_sLdR::synapse0x22f0490() {
   return (neuron0x22c8d40()*-0.121819);
}

double NNfunction_sb_sLdR::synapse0x22f04d0() {
   return (neuron0x22c9080()*-0.0259472);
}

double NNfunction_sb_sLdR::synapse0x22f0510() {
   return (neuron0x22c93c0()*-0.0127304);
}

double NNfunction_sb_sLdR::synapse0x22f0550() {
   return (neuron0x22c9700()*0.00347962);
}

double NNfunction_sb_sLdR::synapse0x22f0590() {
   return (neuron0x22c9a40()*-0.0526502);
}

double NNfunction_sb_sLdR::synapse0x22f05d0() {
   return (neuron0x22c9d80()*-0.00966395);
}

double NNfunction_sb_sLdR::synapse0x22f0610() {
   return (neuron0x22ca0c0()*0.0151769);
}

double NNfunction_sb_sLdR::synapse0x22f0650() {
   return (neuron0x22ca400()*-0.0263987);
}

double NNfunction_sb_sLdR::synapse0x22f0690() {
   return (neuron0x22ca740()*0.042555);
}

double NNfunction_sb_sLdR::synapse0x22f06d0() {
   return (neuron0x22caa80()*0.507201);
}

double NNfunction_sb_sLdR::synapse0x22f0710() {
   return (neuron0x22cadc0()*-0.04153);
}

double NNfunction_sb_sLdR::synapse0x22f0750() {
   return (neuron0x22cb100()*0.013799);
}

double NNfunction_sb_sLdR::synapse0x22f0790() {
   return (neuron0x22cb440()*-0.00863946);
}

double NNfunction_sb_sLdR::synapse0x22f0220() {
   return (neuron0x22cb780()*-0.0597367);
}

double NNfunction_sb_sLdR::synapse0x22f0260() {
   return (neuron0x22cbce0()*-0.114701);
}

double NNfunction_sb_sLdR::synapse0x22f08e0() {
   return (neuron0x22cbf00()*0.0640617);
}

double NNfunction_sb_sLdR::synapse0x22f0920() {
   return (neuron0x22cc240()*0.0205993);
}

double NNfunction_sb_sLdR::synapse0x22f0960() {
   return (neuron0x22cc580()*-0.00918196);
}

double NNfunction_sb_sLdR::synapse0x22f09a0() {
   return (neuron0x22cc8c0()*0.0131181);
}

double NNfunction_sb_sLdR::synapse0x22f09e0() {
   return (neuron0x22ccc00()*0.0578685);
}

double NNfunction_sb_sLdR::synapse0x22f0a20() {
   return (neuron0x22ccf40()*0.0450493);
}

double NNfunction_sb_sLdR::synapse0x22f0da0() {
   return (neuron0x22c8380()*0.0381951);
}

double NNfunction_sb_sLdR::synapse0x22f0de0() {
   return (neuron0x22c86c0()*-0.320175);
}

double NNfunction_sb_sLdR::synapse0x22f0e20() {
   return (neuron0x22c8a00()*-0.14446);
}

double NNfunction_sb_sLdR::synapse0x22f0e60() {
   return (neuron0x22c8d40()*0.0791905);
}

double NNfunction_sb_sLdR::synapse0x22f0ea0() {
   return (neuron0x22c9080()*0.0201322);
}

double NNfunction_sb_sLdR::synapse0x22f0ee0() {
   return (neuron0x22c93c0()*0.072152);
}

double NNfunction_sb_sLdR::synapse0x22f0f20() {
   return (neuron0x22c9700()*-0.150318);
}

double NNfunction_sb_sLdR::synapse0x22f0f60() {
   return (neuron0x22c9a40()*0.112918);
}

double NNfunction_sb_sLdR::synapse0x22f0fa0() {
   return (neuron0x22c9d80()*0.164467);
}

double NNfunction_sb_sLdR::synapse0x22f0fe0() {
   return (neuron0x22ca0c0()*-0.102979);
}

double NNfunction_sb_sLdR::synapse0x22f1020() {
   return (neuron0x22ca400()*0.088966);
}

double NNfunction_sb_sLdR::synapse0x22f1060() {
   return (neuron0x22ca740()*0.374692);
}

double NNfunction_sb_sLdR::synapse0x22f10a0() {
   return (neuron0x22caa80()*0.0652723);
}

double NNfunction_sb_sLdR::synapse0x22f10e0() {
   return (neuron0x22cadc0()*0.0443491);
}

double NNfunction_sb_sLdR::synapse0x22f1120() {
   return (neuron0x22cb100()*0.0777077);
}

double NNfunction_sb_sLdR::synapse0x22f1160() {
   return (neuron0x22cb440()*0.21);
}

double NNfunction_sb_sLdR::synapse0x22f0bf0() {
   return (neuron0x22cb780()*-0.00945063);
}

double NNfunction_sb_sLdR::synapse0x22f0c30() {
   return (neuron0x22cbce0()*0.585426);
}

double NNfunction_sb_sLdR::synapse0x22f12b0() {
   return (neuron0x22cbf00()*-0.134799);
}

double NNfunction_sb_sLdR::synapse0x22f12f0() {
   return (neuron0x22cc240()*0.277447);
}

double NNfunction_sb_sLdR::synapse0x22f1330() {
   return (neuron0x22cc580()*0.107774);
}

double NNfunction_sb_sLdR::synapse0x22f1370() {
   return (neuron0x22cc8c0()*-0.142012);
}

double NNfunction_sb_sLdR::synapse0x22f13b0() {
   return (neuron0x22ccc00()*0.29511);
}

double NNfunction_sb_sLdR::synapse0x22f13f0() {
   return (neuron0x22ccf40()*0.209738);
}

double NNfunction_sb_sLdR::synapse0x22f1770() {
   return (neuron0x22c8380()*0.125353);
}

double NNfunction_sb_sLdR::synapse0x22f17b0() {
   return (neuron0x22c86c0()*-0.370895);
}

double NNfunction_sb_sLdR::synapse0x22f17f0() {
   return (neuron0x22c8a00()*-0.102206);
}

double NNfunction_sb_sLdR::synapse0x22f1830() {
   return (neuron0x22c8d40()*0.560728);
}

double NNfunction_sb_sLdR::synapse0x22f1870() {
   return (neuron0x22c9080()*-0.127092);
}

double NNfunction_sb_sLdR::synapse0x22f18b0() {
   return (neuron0x22c93c0()*0.00711716);
}

double NNfunction_sb_sLdR::synapse0x22f18f0() {
   return (neuron0x22c9700()*-0.186911);
}

double NNfunction_sb_sLdR::synapse0x22f1930() {
   return (neuron0x22c9a40()*0.0879816);
}

double NNfunction_sb_sLdR::synapse0x22f1970() {
   return (neuron0x22c9d80()*-0.0318817);
}

double NNfunction_sb_sLdR::synapse0x22f19b0() {
   return (neuron0x22ca0c0()*-0.178884);
}

double NNfunction_sb_sLdR::synapse0x22f19f0() {
   return (neuron0x22ca400()*0.0114669);
}

double NNfunction_sb_sLdR::synapse0x22f1a30() {
   return (neuron0x22ca740()*-0.0376924);
}

double NNfunction_sb_sLdR::synapse0x22f1a70() {
   return (neuron0x22caa80()*0.194925);
}

double NNfunction_sb_sLdR::synapse0x22f1ab0() {
   return (neuron0x22cadc0()*-0.183112);
}

double NNfunction_sb_sLdR::synapse0x22f1af0() {
   return (neuron0x22cb100()*0.0905416);
}

double NNfunction_sb_sLdR::synapse0x22f1b30() {
   return (neuron0x22cb440()*0.157997);
}

double NNfunction_sb_sLdR::synapse0x22f15c0() {
   return (neuron0x22cb780()*-0.0564865);
}

double NNfunction_sb_sLdR::synapse0x22f1600() {
   return (neuron0x22cbce0()*-0.541427);
}

double NNfunction_sb_sLdR::synapse0x22f1c80() {
   return (neuron0x22cbf00()*0.112954);
}

double NNfunction_sb_sLdR::synapse0x22f1cc0() {
   return (neuron0x22cc240()*0.0297508);
}

double NNfunction_sb_sLdR::synapse0x22f1d00() {
   return (neuron0x22cc580()*0.136606);
}

double NNfunction_sb_sLdR::synapse0x22f1d40() {
   return (neuron0x22cc8c0()*0.0772466);
}

double NNfunction_sb_sLdR::synapse0x22f1d80() {
   return (neuron0x22ccc00()*0.0540976);
}

double NNfunction_sb_sLdR::synapse0x22f1dc0() {
   return (neuron0x22ccf40()*0.0894703);
}

double NNfunction_sb_sLdR::synapse0x2091cd0() {
   return (neuron0x22cd3b0()*0.0109793);
}

double NNfunction_sb_sLdR::synapse0x2091d10() {
   return (neuron0x22cdd00()*-0.273341);
}

double NNfunction_sb_sLdR::synapse0x22cf870() {
   return (neuron0x22ce7e0()*0.713763);
}

double NNfunction_sb_sLdR::synapse0x22cf8b0() {
   return (neuron0x22ce280()*1.84464);
}

double NNfunction_sb_sLdR::synapse0x22d0240() {
   return (neuron0x22cf5c0()*0.424564);
}

double NNfunction_sb_sLdR::synapse0x22d0280() {
   return (neuron0x22cff90()*0.472264);
}

double NNfunction_sb_sLdR::synapse0x22d1010() {
   return (neuron0x22d0d60()*0.113978);
}

double NNfunction_sb_sLdR::synapse0x22d1050() {
   return (neuron0x22d1730()*0.220495);
}

double NNfunction_sb_sLdR::synapse0x22d19e0() {
   return (neuron0x22d2100()*0.14579);
}

double NNfunction_sb_sLdR::synapse0x22d1a20() {
   return (neuron0x22d2be0()*-0.0591783);
}

double NNfunction_sb_sLdR::synapse0x22d23b0() {
   return (neuron0x22d35b0()*-0.200965);
}

double NNfunction_sb_sLdR::synapse0x22d23f0() {
   return (neuron0x22d0690()*-0.467405);
}

double NNfunction_sb_sLdR::synapse0x22d2e90() {
   return (neuron0x22d5160()*0.00872553);
}

double NNfunction_sb_sLdR::synapse0x22d2ed0() {
   return (neuron0x22d5b30()*-0.0737689);
}

double NNfunction_sb_sLdR::synapse0x22d3860() {
   return (neuron0x22d6500()*0.695705);
}

double NNfunction_sb_sLdR::synapse0x22d38a0() {
   return (neuron0x22d6ed0()*-0.433544);
}

double NNfunction_sb_sLdR::synapse0x22d0940() {
   return (neuron0x22d8ce0()*-0.543081);
}

double NNfunction_sb_sLdR::synapse0x22d0980() {
   return (neuron0x22d8fc0()*0.169776);
}

double NNfunction_sb_sLdR::synapse0x22d5410() {
   return (neuron0x22d9990()*-0.135872);
}

double NNfunction_sb_sLdR::synapse0x22d5450() {
   return (neuron0x22da360()*-0.0882806);
}

double NNfunction_sb_sLdR::synapse0x22d5de0() {
   return (neuron0x22dad30()*1.02951);
}

double NNfunction_sb_sLdR::synapse0x22d5e20() {
   return (neuron0x22db700()*0.466157);
}

double NNfunction_sb_sLdR::synapse0x22d67b0() {
   return (neuron0x22d4250()*-0.697289);
}

double NNfunction_sb_sLdR::synapse0x22d67f0() {
   return (neuron0x22d4c20()*-0.493524);
}

double NNfunction_sb_sLdR::synapse0x22d7180() {
   return (neuron0x22de490()*0.210273);
}

double NNfunction_sb_sLdR::synapse0x22d71c0() {
   return (neuron0x22dee60()*0.215945);
}

double NNfunction_sb_sLdR::synapse0x22cb320() {
   return (neuron0x22df830()*0.542119);
}

double NNfunction_sb_sLdR::synapse0x22cb360() {
   return (neuron0x22e0200()*5.03702);
}

double NNfunction_sb_sLdR::synapse0x22d9270() {
   return (neuron0x22e0bd0()*0.471454);
}

double NNfunction_sb_sLdR::synapse0x22d92b0() {
   return (neuron0x22e15a0()*-0.0767599);
}

double NNfunction_sb_sLdR::synapse0x22d9c40() {
   return (neuron0x22e1f70()*1.73783);
}

double NNfunction_sb_sLdR::synapse0x22d9c80() {
   return (neuron0x22e2940()*0.31506);
}

double NNfunction_sb_sLdR::synapse0x22da610() {
   return (neuron0x22d89d0()*0.187772);
}

double NNfunction_sb_sLdR::synapse0x22da650() {
   return (neuron0x22e5520()*0.615068);
}

double NNfunction_sb_sLdR::synapse0x22dafe0() {
   return (neuron0x22e5ef0()*0.362087);
}

double NNfunction_sb_sLdR::synapse0x22db020() {
   return (neuron0x22e68c0()*-2.77972);
}

double NNfunction_sb_sLdR::synapse0x22db9b0() {
   return (neuron0x22e7290()*0.381832);
}

double NNfunction_sb_sLdR::synapse0x22db9f0() {
   return (neuron0x22e7c60()*-0.71583);
}

double NNfunction_sb_sLdR::synapse0x22d4500() {
   return (neuron0x22e8630()*-0.183866);
}

double NNfunction_sb_sLdR::synapse0x22d4540() {
   return (neuron0x22e9000()*-0.829607);
}

double NNfunction_sb_sLdR::synapse0x22dddb0() {
   return (neuron0x22e99d0()*0.893446);
}

double NNfunction_sb_sLdR::synapse0x22dddf0() {
   return (neuron0x22ea5b0()*-0.380603);
}

double NNfunction_sb_sLdR::synapse0x22de740() {
   return (neuron0x22eaf80()*4.02965);
}

double NNfunction_sb_sLdR::synapse0x22de780() {
   return (neuron0x22dbe00()*0.584529);
}

double NNfunction_sb_sLdR::synapse0x22df110() {
   return (neuron0x22dc7d0()*-0.465165);
}

double NNfunction_sb_sLdR::synapse0x22df150() {
   return (neuron0x22dd1a0()*0.710398);
}

double NNfunction_sb_sLdR::synapse0x22dfae0() {
   return (neuron0x22ef7e0()*-1.59074);
}

double NNfunction_sb_sLdR::synapse0x22dfb20() {
   return (neuron0x22f0090()*-0.447256);
}

double NNfunction_sb_sLdR::synapse0x22e04b0() {
   return (neuron0x22f0a60()*-0.0632837);
}

double NNfunction_sb_sLdR::synapse0x22e04f0() {
   return (neuron0x22f1430()*0.247692);
}

double NNfunction_sb_sLdR::synapse0x22e2bf0() {
   return (neuron0x22cd3b0()*0.0659596);
}

double NNfunction_sb_sLdR::synapse0x22e2c30() {
   return (neuron0x22cdd00()*-0.680623);
}

double NNfunction_sb_sLdR::synapse0x22d81b0() {
   return (neuron0x22ce7e0()*-0.628435);
}

double NNfunction_sb_sLdR::synapse0x22d81f0() {
   return (neuron0x22ce280()*-0.605398);
}

double NNfunction_sb_sLdR::synapse0x22e57d0() {
   return (neuron0x22cf5c0()*-0.137145);
}

double NNfunction_sb_sLdR::synapse0x22e5810() {
   return (neuron0x22cff90()*0.0388784);
}

double NNfunction_sb_sLdR::synapse0x22e61a0() {
   return (neuron0x22d0d60()*-0.0504361);
}

double NNfunction_sb_sLdR::synapse0x22e61e0() {
   return (neuron0x22d1730()*0.0829667);
}

double NNfunction_sb_sLdR::synapse0x22e6b70() {
   return (neuron0x22d2100()*0.0369583);
}

double NNfunction_sb_sLdR::synapse0x22e6bb0() {
   return (neuron0x22d2be0()*0.0282554);
}

double NNfunction_sb_sLdR::synapse0x22e7540() {
   return (neuron0x22d35b0()*-0.0677502);
}

double NNfunction_sb_sLdR::synapse0x22e7580() {
   return (neuron0x22d0690()*0.383448);
}

double NNfunction_sb_sLdR::synapse0x22e7f10() {
   return (neuron0x22d5160()*0.08426);
}

double NNfunction_sb_sLdR::synapse0x22e7f50() {
   return (neuron0x22d5b30()*0.0470451);
}

double NNfunction_sb_sLdR::synapse0x22e88e0() {
   return (neuron0x22d6500()*-0.0617946);
}

double NNfunction_sb_sLdR::synapse0x22e8920() {
   return (neuron0x22d6ed0()*-0.0650644);
}

double NNfunction_sb_sLdR::synapse0x22e92b0() {
   return (neuron0x22d8ce0()*-0.200397);
}

double NNfunction_sb_sLdR::synapse0x22e92f0() {
   return (neuron0x22d8fc0()*0.0722142);
}

double NNfunction_sb_sLdR::synapse0x22e9c80() {
   return (neuron0x22d9990()*0.422392);
}

double NNfunction_sb_sLdR::synapse0x22e9cc0() {
   return (neuron0x22da360()*-0.0812295);
}

double NNfunction_sb_sLdR::synapse0x22ea860() {
   return (neuron0x22dad30()*-0.0206708);
}

double NNfunction_sb_sLdR::synapse0x22ea8a0() {
   return (neuron0x22db700()*0.0328864);
}

double NNfunction_sb_sLdR::synapse0x22eb230() {
   return (neuron0x22d4250()*-0.318145);
}

double NNfunction_sb_sLdR::synapse0x22eb270() {
   return (neuron0x22d4c20()*0.0535073);
}

double NNfunction_sb_sLdR::synapse0x22dc0b0() {
   return (neuron0x22de490()*-0.0748239);
}

double NNfunction_sb_sLdR::synapse0x22dc0f0() {
   return (neuron0x22dee60()*0.450142);
}

double NNfunction_sb_sLdR::synapse0x22dca80() {
   return (neuron0x22df830()*0.0224404);
}

double NNfunction_sb_sLdR::synapse0x22dcac0() {
   return (neuron0x22e0200()*-0.619617);
}

double NNfunction_sb_sLdR::synapse0x22dd450() {
   return (neuron0x22e0bd0()*0.0214978);
}

double NNfunction_sb_sLdR::synapse0x22dd490() {
   return (neuron0x22e15a0()*0.0980307);
}

double NNfunction_sb_sLdR::synapse0x22ef970() {
   return (neuron0x22e1f70()*0.0396489);
}

double NNfunction_sb_sLdR::synapse0x22ef9b0() {
   return (neuron0x22e2940()*0.0569885);
}

double NNfunction_sb_sLdR::synapse0x22f0340() {
   return (neuron0x22d89d0()*0.0126939);
}

double NNfunction_sb_sLdR::synapse0x22f0380() {
   return (neuron0x22e5520()*0.0836871);
}

double NNfunction_sb_sLdR::synapse0x22f0d10() {
   return (neuron0x22e5ef0()*0.0584568);
}

double NNfunction_sb_sLdR::synapse0x22f0d50() {
   return (neuron0x22e68c0()*-0.186292);
}

double NNfunction_sb_sLdR::synapse0x22f16e0() {
   return (neuron0x22e7290()*-0.346713);
}

double NNfunction_sb_sLdR::synapse0x22f1720() {
   return (neuron0x22e7c60()*0.195229);
}

double NNfunction_sb_sLdR::synapse0x22cd5d0() {
   return (neuron0x22e8630()*0.445652);
}

double NNfunction_sb_sLdR::synapse0x22cd610() {
   return (neuron0x22e9000()*0.338016);
}

double NNfunction_sb_sLdR::synapse0x22e0e80() {
   return (neuron0x22e99d0()*0.0592308);
}

double NNfunction_sb_sLdR::synapse0x22e0ec0() {
   return (neuron0x22ea5b0()*0.054176);
}

double NNfunction_sb_sLdR::synapse0x22f1e00() {
   return (neuron0x22eaf80()*-0.142622);
}

double NNfunction_sb_sLdR::synapse0x22f1e40() {
   return (neuron0x22dbe00()*0.0136156);
}

double NNfunction_sb_sLdR::synapse0x22f1e80() {
   return (neuron0x22dc7d0()*1.5638);
}

double NNfunction_sb_sLdR::synapse0x22f1ec0() {
   return (neuron0x22dd1a0()*0.0262237);
}

double NNfunction_sb_sLdR::synapse0x22f8d70() {
   return (neuron0x22ef7e0()*-0.0726795);
}

double NNfunction_sb_sLdR::synapse0x22f8db0() {
   return (neuron0x22f0090()*-0.0960898);
}

double NNfunction_sb_sLdR::synapse0x22f8df0() {
   return (neuron0x22f0a60()*0.095174);
}

double NNfunction_sb_sLdR::synapse0x22f8e30() {
   return (neuron0x22f1430()*0.0587603);
}

double NNfunction_sb_sLdR::synapse0x22f91b0() {
   return (neuron0x22cd3b0()*0.439428);
}

double NNfunction_sb_sLdR::synapse0x22f91f0() {
   return (neuron0x22cdd00()*-0.692718);
}

double NNfunction_sb_sLdR::synapse0x22f9230() {
   return (neuron0x22ce7e0()*-0.0773106);
}

double NNfunction_sb_sLdR::synapse0x22f9270() {
   return (neuron0x22ce280()*0.0856674);
}

double NNfunction_sb_sLdR::synapse0x22f92b0() {
   return (neuron0x22cf5c0()*-1.00358);
}

double NNfunction_sb_sLdR::synapse0x22f92f0() {
   return (neuron0x22cff90()*0.610472);
}

double NNfunction_sb_sLdR::synapse0x22f9330() {
   return (neuron0x22d0d60()*-0.153822);
}

double NNfunction_sb_sLdR::synapse0x22f9370() {
   return (neuron0x22d1730()*0.404166);
}

double NNfunction_sb_sLdR::synapse0x22f93b0() {
   return (neuron0x22d2100()*0.191095);
}

double NNfunction_sb_sLdR::synapse0x22f93f0() {
   return (neuron0x22d2be0()*0.1847);
}

double NNfunction_sb_sLdR::synapse0x22f9430() {
   return (neuron0x22d35b0()*-0.686711);
}

double NNfunction_sb_sLdR::synapse0x22f9470() {
   return (neuron0x22d0690()*-1.15648);
}

double NNfunction_sb_sLdR::synapse0x22f94b0() {
   return (neuron0x22d5160()*0.522629);
}

double NNfunction_sb_sLdR::synapse0x22f94f0() {
   return (neuron0x22d5b30()*0.374111);
}

double NNfunction_sb_sLdR::synapse0x22f9530() {
   return (neuron0x22d6500()*-0.457416);
}

double NNfunction_sb_sLdR::synapse0x22f9570() {
   return (neuron0x22d6ed0()*-0.430488);
}

double NNfunction_sb_sLdR::synapse0x22f9000() {
   return (neuron0x22d8ce0()*-2.38627);
}

double NNfunction_sb_sLdR::synapse0x22f9040() {
   return (neuron0x22d8fc0()*0.383829);
}

double NNfunction_sb_sLdR::synapse0x22f96c0() {
   return (neuron0x22d9990()*4.38937);
}

double NNfunction_sb_sLdR::synapse0x22f9700() {
   return (neuron0x22da360()*-1.20159);
}

double NNfunction_sb_sLdR::synapse0x22f9740() {
   return (neuron0x22dad30()*-3.88752);
}

double NNfunction_sb_sLdR::synapse0x22f9780() {
   return (neuron0x22db700()*0.350281);
}

double NNfunction_sb_sLdR::synapse0x22f97c0() {
   return (neuron0x22d4250()*-2.16184);
}

double NNfunction_sb_sLdR::synapse0x22f9800() {
   return (neuron0x22d4c20()*0.494911);
}

double NNfunction_sb_sLdR::synapse0x22f9840() {
   return (neuron0x22de490()*-0.81256);
}

double NNfunction_sb_sLdR::synapse0x22f9880() {
   return (neuron0x22dee60()*-1.48849);
}

double NNfunction_sb_sLdR::synapse0x22f98c0() {
   return (neuron0x22df830()*-0.144657);
}

double NNfunction_sb_sLdR::synapse0x22f9900() {
   return (neuron0x22e0200()*1.36664);
}

double NNfunction_sb_sLdR::synapse0x22f9940() {
   return (neuron0x22e0bd0()*0.409942);
}

double NNfunction_sb_sLdR::synapse0x22f9980() {
   return (neuron0x22e15a0()*0.715124);
}

double NNfunction_sb_sLdR::synapse0x22f99c0() {
   return (neuron0x22e1f70()*0.604307);
}

double NNfunction_sb_sLdR::synapse0x22f9a00() {
   return (neuron0x22e2940()*0.487897);
}

double NNfunction_sb_sLdR::synapse0x22f95b0() {
   return (neuron0x22d89d0()*-0.00559304);
}

double NNfunction_sb_sLdR::synapse0x22f95f0() {
   return (neuron0x22e5520()*1.00469);
}

double NNfunction_sb_sLdR::synapse0x22f9630() {
   return (neuron0x22e5ef0()*0.498613);
}

double NNfunction_sb_sLdR::synapse0x22f9670() {
   return (neuron0x22e68c0()*-1.24744);
}

double NNfunction_sb_sLdR::synapse0x22f9c50() {
   return (neuron0x22e7290()*0.703926);
}

double NNfunction_sb_sLdR::synapse0x22f9c90() {
   return (neuron0x22e7c60()*0.0882572);
}

double NNfunction_sb_sLdR::synapse0x22f9cd0() {
   return (neuron0x22e8630()*-1.59996);
}

double NNfunction_sb_sLdR::synapse0x22f9d10() {
   return (neuron0x22e9000()*-2.06089);
}

double NNfunction_sb_sLdR::synapse0x22f9d50() {
   return (neuron0x22e99d0()*0.636245);
}

double NNfunction_sb_sLdR::synapse0x22f9d90() {
   return (neuron0x22ea5b0()*0.37379);
}

double NNfunction_sb_sLdR::synapse0x22f9dd0() {
   return (neuron0x22eaf80()*4.56387);
}

double NNfunction_sb_sLdR::synapse0x22f9e10() {
   return (neuron0x22dbe00()*0.261186);
}

double NNfunction_sb_sLdR::synapse0x22f9e50() {
   return (neuron0x22dc7d0()*-2.50164);
}

double NNfunction_sb_sLdR::synapse0x22f9e90() {
   return (neuron0x22dd1a0()*2.55798);
}

double NNfunction_sb_sLdR::synapse0x22f9ed0() {
   return (neuron0x22ef7e0()*0.371296);
}

double NNfunction_sb_sLdR::synapse0x22f9f10() {
   return (neuron0x22f0090()*-1.38703);
}

double NNfunction_sb_sLdR::synapse0x22f9f50() {
   return (neuron0x22f0a60()*0.0391048);
}

double NNfunction_sb_sLdR::synapse0x22f9f90() {
   return (neuron0x22f1430()*1.48083);
}

double NNfunction_sb_sLdR::synapse0x22fa310() {
   return (neuron0x22cd3b0()*0.471023);
}

double NNfunction_sb_sLdR::synapse0x22fa350() {
   return (neuron0x22cdd00()*-2.10317);
}

double NNfunction_sb_sLdR::synapse0x22fa390() {
   return (neuron0x22ce7e0()*0.563434);
}

double NNfunction_sb_sLdR::synapse0x22fa3d0() {
   return (neuron0x22ce280()*-0.166396);
}

double NNfunction_sb_sLdR::synapse0x22fa410() {
   return (neuron0x22cf5c0()*-1.31886);
}

double NNfunction_sb_sLdR::synapse0x22fa450() {
   return (neuron0x22cff90()*-0.00638177);
}

double NNfunction_sb_sLdR::synapse0x22fa490() {
   return (neuron0x22d0d60()*-0.53574);
}

double NNfunction_sb_sLdR::synapse0x22fa4d0() {
   return (neuron0x22d1730()*0.482291);
}

double NNfunction_sb_sLdR::synapse0x22fa510() {
   return (neuron0x22d2100()*0.658732);
}

double NNfunction_sb_sLdR::synapse0x22fa550() {
   return (neuron0x22d2be0()*0.363055);
}

double NNfunction_sb_sLdR::synapse0x22fa590() {
   return (neuron0x22d35b0()*-0.780715);
}

double NNfunction_sb_sLdR::synapse0x22fa5d0() {
   return (neuron0x22d0690()*5.59103);
}

double NNfunction_sb_sLdR::synapse0x22fa610() {
   return (neuron0x22d5160()*0.673308);
}

double NNfunction_sb_sLdR::synapse0x22fa650() {
   return (neuron0x22d5b30()*1.04853);
}

double NNfunction_sb_sLdR::synapse0x22fa690() {
   return (neuron0x22d6500()*-0.670227);
}

double NNfunction_sb_sLdR::synapse0x22fa6d0() {
   return (neuron0x22d6ed0()*-0.813583);
}

double NNfunction_sb_sLdR::synapse0x22fa160() {
   return (neuron0x22d8ce0()*-0.267441);
}

double NNfunction_sb_sLdR::synapse0x22fa1a0() {
   return (neuron0x22d8fc0()*0.6901);
}

double NNfunction_sb_sLdR::synapse0x22fa820() {
   return (neuron0x22d9990()*-0.774565);
}

double NNfunction_sb_sLdR::synapse0x22fa860() {
   return (neuron0x22da360()*-1.37939);
}

double NNfunction_sb_sLdR::synapse0x22fa8a0() {
   return (neuron0x22dad30()*-0.458154);
}

double NNfunction_sb_sLdR::synapse0x22fa8e0() {
   return (neuron0x22db700()*0.0737344);
}

double NNfunction_sb_sLdR::synapse0x22fa920() {
   return (neuron0x22d4250()*-0.388923);
}

double NNfunction_sb_sLdR::synapse0x22fa960() {
   return (neuron0x22d4c20()*0.746128);
}

double NNfunction_sb_sLdR::synapse0x22fa9a0() {
   return (neuron0x22de490()*-1.47332);
}

double NNfunction_sb_sLdR::synapse0x22fa9e0() {
   return (neuron0x22dee60()*-0.217593);
}

double NNfunction_sb_sLdR::synapse0x22faa20() {
   return (neuron0x22df830()*0.631332);
}

double NNfunction_sb_sLdR::synapse0x22faa60() {
   return (neuron0x22e0200()*-7.1547);
}

double NNfunction_sb_sLdR::synapse0x22faaa0() {
   return (neuron0x22e0bd0()*0.281069);
}

double NNfunction_sb_sLdR::synapse0x22faae0() {
   return (neuron0x22e15a0()*1.00293);
}

double NNfunction_sb_sLdR::synapse0x22fab20() {
   return (neuron0x22e1f70()*0.293932);
}

double NNfunction_sb_sLdR::synapse0x22fab60() {
   return (neuron0x22e2940()*0.961894);
}

double NNfunction_sb_sLdR::synapse0x22fa710() {
   return (neuron0x22d89d0()*0.358972);
}

double NNfunction_sb_sLdR::synapse0x22fa750() {
   return (neuron0x22e5520()*-0.476239);
}

double NNfunction_sb_sLdR::synapse0x22fa790() {
   return (neuron0x22e5ef0()*0.00647676);
}

double NNfunction_sb_sLdR::synapse0x22fa7d0() {
   return (neuron0x22e68c0()*-0.00371639);
}

double NNfunction_sb_sLdR::synapse0x22fadb0() {
   return (neuron0x22e7290()*-0.225531);
}

double NNfunction_sb_sLdR::synapse0x22fadf0() {
   return (neuron0x22e7c60()*-0.673616);
}

double NNfunction_sb_sLdR::synapse0x22fae30() {
   return (neuron0x22e8630()*-0.315128);
}

double NNfunction_sb_sLdR::synapse0x22fae70() {
   return (neuron0x22e9000()*-1.12492);
}

double NNfunction_sb_sLdR::synapse0x22faeb0() {
   return (neuron0x22e99d0()*0.457182);
}

double NNfunction_sb_sLdR::synapse0x22faef0() {
   return (neuron0x22ea5b0()*0.419227);
}

double NNfunction_sb_sLdR::synapse0x22faf30() {
   return (neuron0x22eaf80()*-1.95737);
}

double NNfunction_sb_sLdR::synapse0x22faf70() {
   return (neuron0x22dbe00()*0.405446);
}

double NNfunction_sb_sLdR::synapse0x22fafb0() {
   return (neuron0x22dc7d0()*-1.38255);
}

double NNfunction_sb_sLdR::synapse0x22faff0() {
   return (neuron0x22dd1a0()*-1.06797);
}

double NNfunction_sb_sLdR::synapse0x22fb030() {
   return (neuron0x22ef7e0()*-0.729232);
}

double NNfunction_sb_sLdR::synapse0x22fb070() {
   return (neuron0x22f0090()*0.359776);
}

double NNfunction_sb_sLdR::synapse0x22fb0b0() {
   return (neuron0x22f0a60()*-1.31144);
}

double NNfunction_sb_sLdR::synapse0x22fb0f0() {
   return (neuron0x22f1430()*0.964862);
}

double NNfunction_sb_sLdR::synapse0x22fb470() {
   return (neuron0x22cd3b0()*0.0676557);
}

double NNfunction_sb_sLdR::synapse0x22fb4b0() {
   return (neuron0x22cdd00()*-1.93785);
}

double NNfunction_sb_sLdR::synapse0x22fb4f0() {
   return (neuron0x22ce7e0()*-0.0759511);
}

double NNfunction_sb_sLdR::synapse0x22fb530() {
   return (neuron0x22ce280()*-1.346);
}

double NNfunction_sb_sLdR::synapse0x22fb570() {
   return (neuron0x22cf5c0()*0.0199777);
}

double NNfunction_sb_sLdR::synapse0x22fb5b0() {
   return (neuron0x22cff90()*-0.0748189);
}

double NNfunction_sb_sLdR::synapse0x22fb5f0() {
   return (neuron0x22d0d60()*-0.0679088);
}

double NNfunction_sb_sLdR::synapse0x22fb630() {
   return (neuron0x22d1730()*0.131289);
}

double NNfunction_sb_sLdR::synapse0x22fb670() {
   return (neuron0x22d2100()*-0.020399);
}

double NNfunction_sb_sLdR::synapse0x22fb6b0() {
   return (neuron0x22d2be0()*0.0402277);
}

double NNfunction_sb_sLdR::synapse0x22fb6f0() {
   return (neuron0x22d35b0()*0.055371);
}

double NNfunction_sb_sLdR::synapse0x22fb730() {
   return (neuron0x22d0690()*1.10175);
}

double NNfunction_sb_sLdR::synapse0x22fb770() {
   return (neuron0x22d5160()*0.0407716);
}

double NNfunction_sb_sLdR::synapse0x22fb7b0() {
   return (neuron0x22d5b30()*-0.0715782);
}

double NNfunction_sb_sLdR::synapse0x22fb7f0() {
   return (neuron0x22d6500()*-0.047085);
}

double NNfunction_sb_sLdR::synapse0x22fb830() {
   return (neuron0x22d6ed0()*-0.0103752);
}

double NNfunction_sb_sLdR::synapse0x22fb2c0() {
   return (neuron0x22d8ce0()*0.0323915);
}

double NNfunction_sb_sLdR::synapse0x22fb300() {
   return (neuron0x22d8fc0()*0.020632);
}

double NNfunction_sb_sLdR::synapse0x22fb980() {
   return (neuron0x22d9990()*-0.097805);
}

double NNfunction_sb_sLdR::synapse0x22fb9c0() {
   return (neuron0x22da360()*0.16404);
}

double NNfunction_sb_sLdR::synapse0x22fba00() {
   return (neuron0x22dad30()*-0.201241);
}

double NNfunction_sb_sLdR::synapse0x22fba40() {
   return (neuron0x22db700()*0.0181381);
}

double NNfunction_sb_sLdR::synapse0x22fba80() {
   return (neuron0x22d4250()*-0.692907);
}

double NNfunction_sb_sLdR::synapse0x22fbac0() {
   return (neuron0x22d4c20()*-0.0169848);
}

double NNfunction_sb_sLdR::synapse0x22fbb00() {
   return (neuron0x22de490()*0.0401037);
}

double NNfunction_sb_sLdR::synapse0x22fbb40() {
   return (neuron0x22dee60()*-0.119027);
}

double NNfunction_sb_sLdR::synapse0x22fbb80() {
   return (neuron0x22df830()*0.000346583);
}

double NNfunction_sb_sLdR::synapse0x22fbbc0() {
   return (neuron0x22e0200()*-1.20971);
}

double NNfunction_sb_sLdR::synapse0x22fbc00() {
   return (neuron0x22e0bd0()*-0.0747632);
}

double NNfunction_sb_sLdR::synapse0x22fbc40() {
   return (neuron0x22e15a0()*0.0111501);
}

double NNfunction_sb_sLdR::synapse0x22fbc80() {
   return (neuron0x22e1f70()*-0.0750277);
}

double NNfunction_sb_sLdR::synapse0x22fbcc0() {
   return (neuron0x22e2940()*-0.127066);
}

double NNfunction_sb_sLdR::synapse0x22fb870() {
   return (neuron0x22d89d0()*-0.0180751);
}

double NNfunction_sb_sLdR::synapse0x22fb8b0() {
   return (neuron0x22e5520()*0.121287);
}

double NNfunction_sb_sLdR::synapse0x22fb8f0() {
   return (neuron0x22e5ef0()*0.0667287);
}

double NNfunction_sb_sLdR::synapse0x22fb930() {
   return (neuron0x22e68c0()*-1.70515);
}

double NNfunction_sb_sLdR::synapse0x22fbf10() {
   return (neuron0x22e7290()*0.336204);
}

double NNfunction_sb_sLdR::synapse0x22fbf50() {
   return (neuron0x22e7c60()*-0.169022);
}

double NNfunction_sb_sLdR::synapse0x22fbf90() {
   return (neuron0x22e8630()*1.04211);
}

double NNfunction_sb_sLdR::synapse0x22fbfd0() {
   return (neuron0x22e9000()*-0.348663);
}

double NNfunction_sb_sLdR::synapse0x22fc010() {
   return (neuron0x22e99d0()*-0.0551122);
}

double NNfunction_sb_sLdR::synapse0x22fc050() {
   return (neuron0x22ea5b0()*0.0337114);
}

double NNfunction_sb_sLdR::synapse0x22fc090() {
   return (neuron0x22eaf80()*-0.0153146);
}

double NNfunction_sb_sLdR::synapse0x22fc0d0() {
   return (neuron0x22dbe00()*-0.0951528);
}

double NNfunction_sb_sLdR::synapse0x22fc110() {
   return (neuron0x22dc7d0()*-0.246513);
}

double NNfunction_sb_sLdR::synapse0x22fc150() {
   return (neuron0x22dd1a0()*0.331335);
}

double NNfunction_sb_sLdR::synapse0x22fc190() {
   return (neuron0x22ef7e0()*-0.215662);
}

double NNfunction_sb_sLdR::synapse0x22fc1d0() {
   return (neuron0x22f0090()*-0.68615);
}

double NNfunction_sb_sLdR::synapse0x22fc210() {
   return (neuron0x22f0a60()*0.448362);
}

double NNfunction_sb_sLdR::synapse0x22fc250() {
   return (neuron0x22f1430()*-0.35374);
}

double NNfunction_sb_sLdR::synapse0x22fc4b0() {
   return (neuron0x22f8630()*-2.99738);
}

double NNfunction_sb_sLdR::synapse0x22fc4f0() {
   return (neuron0x22f89d0()*7.49718);
}

double NNfunction_sb_sLdR::synapse0x22fc530() {
   return (neuron0x22f8e70()*-6.84958);
}

double NNfunction_sb_sLdR::synapse0x22fc570() {
   return (neuron0x22f9fd0()*-8.10783);
}

double NNfunction_sb_sLdR::synapse0x22fc5b0() {
   return (neuron0x22fb130()*-3.17581);
}

