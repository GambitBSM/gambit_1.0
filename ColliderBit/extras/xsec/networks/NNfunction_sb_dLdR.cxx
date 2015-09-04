#include "NNfunction_sb_dLdR.h"
#include <cmath>

double NNfunction_sb_dLdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.8404)/15.0636;
   input1 = (in1 - 61.3825)/724.981;
   input2 = (in2 - 378.14)/463.304;
   input3 = (in3 - 313.838)/634.193;
   input4 = (in4 - 752.192)/668.805;
   input5 = (in5 - 652.473)/644.007;
   input6 = (in6 - 659.185)/648.258;
   input7 = (in7 - 653.092)/646.278;
   input8 = (in8 - 655.24)/685.547;
   input9 = (in9 - 642.68)/666.011;
   input10 = (in10 - 648.363)/690.467;
   input11 = (in11 - 609.429)/380.367;
   input12 = (in12 - 725.542)/589.799;
   input13 = (in13 - 562.606)/371.19;
   input14 = (in14 - 706.426)/541.293;
   input15 = (in15 - 707.235)/540.162;
   input16 = (in16 - 499.451)/379.486;
   input17 = (in17 - 604.667)/379.871;
   input18 = (in18 - 724.727)/600.198;
   input19 = (in19 - 722.841)/590.832;
   input20 = (in20 - -241.522)/425.273;
   input21 = (in21 - -312.537)/901.307;
   input22 = (in22 - -2.57944)/896.441;
   input23 = (in23 - 4.93522)/511.646;
   switch(index) {
     case 0:
         return neuron0x1b18340();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLdR::Value(int index, double* input) {
   input0 = (input[0] - 22.8404)/15.0636;
   input1 = (input[1] - 61.3825)/724.981;
   input2 = (input[2] - 378.14)/463.304;
   input3 = (input[3] - 313.838)/634.193;
   input4 = (input[4] - 752.192)/668.805;
   input5 = (input[5] - 652.473)/644.007;
   input6 = (input[6] - 659.185)/648.258;
   input7 = (input[7] - 653.092)/646.278;
   input8 = (input[8] - 655.24)/685.547;
   input9 = (input[9] - 642.68)/666.011;
   input10 = (input[10] - 648.363)/690.467;
   input11 = (input[11] - 609.429)/380.367;
   input12 = (input[12] - 725.542)/589.799;
   input13 = (input[13] - 562.606)/371.19;
   input14 = (input[14] - 706.426)/541.293;
   input15 = (input[15] - 707.235)/540.162;
   input16 = (input[16] - 499.451)/379.486;
   input17 = (input[17] - 604.667)/379.871;
   input18 = (input[18] - 724.727)/600.198;
   input19 = (input[19] - 722.841)/590.832;
   input20 = (input[20] - -241.522)/425.273;
   input21 = (input[21] - -312.537)/901.307;
   input22 = (input[22] - -2.57944)/896.441;
   input23 = (input[23] - 4.93522)/511.646;
   switch(index) {
     case 0:
         return neuron0x1b18340();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLdR::neuron0x1ae4430() {
   return input0;
}

double NNfunction_sb_dLdR::neuron0x1ae4770() {
   return input1;
}

double NNfunction_sb_dLdR::neuron0x1ae4ab0() {
   return input2;
}

double NNfunction_sb_dLdR::neuron0x1ae4df0() {
   return input3;
}

double NNfunction_sb_dLdR::neuron0x1ae5130() {
   return input4;
}

double NNfunction_sb_dLdR::neuron0x1ae5470() {
   return input5;
}

double NNfunction_sb_dLdR::neuron0x1ae57b0() {
   return input6;
}

double NNfunction_sb_dLdR::neuron0x1ae5af0() {
   return input7;
}

double NNfunction_sb_dLdR::neuron0x1ae5e30() {
   return input8;
}

double NNfunction_sb_dLdR::neuron0x1ae6170() {
   return input9;
}

double NNfunction_sb_dLdR::neuron0x1ae64b0() {
   return input10;
}

double NNfunction_sb_dLdR::neuron0x1ae67f0() {
   return input11;
}

double NNfunction_sb_dLdR::neuron0x1ae6b30() {
   return input12;
}

double NNfunction_sb_dLdR::neuron0x1ae6e70() {
   return input13;
}

double NNfunction_sb_dLdR::neuron0x1ae71b0() {
   return input14;
}

double NNfunction_sb_dLdR::neuron0x1ae74f0() {
   return input15;
}

double NNfunction_sb_dLdR::neuron0x1ae7830() {
   return input16;
}

double NNfunction_sb_dLdR::neuron0x1ae7d90() {
   return input17;
}

double NNfunction_sb_dLdR::neuron0x1ae7fb0() {
   return input18;
}

double NNfunction_sb_dLdR::neuron0x1ae82f0() {
   return input19;
}

double NNfunction_sb_dLdR::neuron0x1ae8630() {
   return input20;
}

double NNfunction_sb_dLdR::neuron0x1ae8970() {
   return input21;
}

double NNfunction_sb_dLdR::neuron0x1ae8cb0() {
   return input22;
}

double NNfunction_sb_dLdR::neuron0x1ae8ff0() {
   return input23;
}

double NNfunction_sb_dLdR::input0x1ae9460() {
   double input = 0.502172;
   input += synapse0x1ae42f0();
   input += synapse0x1ae4330();
   input += synapse0x1ae9710();
   input += synapse0x1ae9750();
   input += synapse0x1ae9790();
   input += synapse0x1ae97d0();
   input += synapse0x1ae9810();
   input += synapse0x1ae9850();
   input += synapse0x1ae9890();
   input += synapse0x1ae98d0();
   input += synapse0x1ae9910();
   input += synapse0x1ae9950();
   input += synapse0x1ae9990();
   input += synapse0x1ae99d0();
   input += synapse0x1ae9a10();
   input += synapse0x1ae9a50();
   input += synapse0x1ae4260();
   input += synapse0x1ae42a0();
   input += synapse0x189f620();
   input += synapse0x189f660();
   input += synapse0x1ae9cb0();
   input += synapse0x1ae9cf0();
   input += synapse0x1ae9d30();
   input += synapse0x1ae9d70();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1ae9460() {
   double input = input0x1ae9460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1ae9db0() {
   double input = 2.33381;
   input += synapse0x1aea0f0();
   input += synapse0x1aea130();
   input += synapse0x1aea170();
   input += synapse0x1aea1b0();
   input += synapse0x1aea1f0();
   input += synapse0x1aea230();
   input += synapse0x1aea270();
   input += synapse0x1aea2b0();
   input += synapse0x1aea2f0();
   input += synapse0x1ae9ba0();
   input += synapse0x1ae9be0();
   input += synapse0x1ae9c20();
   input += synapse0x1ae9c60();
   input += synapse0x1aea540();
   input += synapse0x1aea580();
   input += synapse0x1aea5c0();
   input += synapse0x1ae9f40();
   input += synapse0x1ae9f80();
   input += synapse0x1aea710();
   input += synapse0x1aea750();
   input += synapse0x1aea790();
   input += synapse0x1aea7d0();
   input += synapse0x1aea810();
   input += synapse0x1aea850();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1ae9db0() {
   double input = input0x1ae9db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1aea890() {
   double input = 0.772363;
   input += synapse0x1aeabd0();
   input += synapse0x1aeac10();
   input += synapse0x1aeac50();
   input += synapse0x1aeac90();
   input += synapse0x1aeacd0();
   input += synapse0x1aead10();
   input += synapse0x1aead50();
   input += synapse0x1aead90();
   input += synapse0x1aeadd0();
   input += synapse0x1aeae10();
   input += synapse0x1aeae50();
   input += synapse0x1aeae90();
   input += synapse0x1aeaed0();
   input += synapse0x1aeaf10();
   input += synapse0x1aeaf50();
   input += synapse0x1aeaf90();
   input += synapse0x1aeaa20();
   input += synapse0x1aeaa60();
   input += synapse0x189fcc0();
   input += synapse0x18ad590();
   input += synapse0x18ad5d0();
   input += synapse0x1ad34c0();
   input += synapse0x1ad3500();
   input += synapse0x1ad3540();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1aea890() {
   double input = input0x1aea890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1aea330() {
   double input = 0.497692;
   input += synapse0x18ade10();
   input += synapse0x1aea4c0();
   input += synapse0x1aea500();
   input += synapse0x1aeb0e0();
   input += synapse0x1aeb120();
   input += synapse0x1aeb160();
   input += synapse0x1aeb1a0();
   input += synapse0x1aeb1e0();
   input += synapse0x1aeb220();
   input += synapse0x1aeb260();
   input += synapse0x1aeb2a0();
   input += synapse0x1aeb2e0();
   input += synapse0x1aeb320();
   input += synapse0x1aeb360();
   input += synapse0x1aeb3a0();
   input += synapse0x1aeb3e0();
   input += synapse0x1ae4370();
   input += synapse0x1ae43b0();
   input += synapse0x1ae43f0();
   input += synapse0x1aeb530();
   input += synapse0x1aeb570();
   input += synapse0x1aeb5b0();
   input += synapse0x1aeb5f0();
   input += synapse0x1aeb630();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1aea330() {
   double input = input0x1aea330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1aeb670() {
   double input = -0.000160613;
   input += synapse0x1aeb9b0();
   input += synapse0x1aeb9f0();
   input += synapse0x1aeba30();
   input += synapse0x1aeba70();
   input += synapse0x1aebab0();
   input += synapse0x1aebaf0();
   input += synapse0x1aebb30();
   input += synapse0x1aebb70();
   input += synapse0x1aebbb0();
   input += synapse0x1aebbf0();
   input += synapse0x1aebc30();
   input += synapse0x1aebc70();
   input += synapse0x1aebcb0();
   input += synapse0x1aebcf0();
   input += synapse0x1aebd30();
   input += synapse0x1aebd70();
   input += synapse0x1aeb800();
   input += synapse0x1aeb840();
   input += synapse0x1aebec0();
   input += synapse0x1aebf00();
   input += synapse0x1aebf40();
   input += synapse0x1aebf80();
   input += synapse0x1aebfc0();
   input += synapse0x1aec000();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1aeb670() {
   double input = input0x1aeb670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1aec040() {
   double input = 0.976177;
   input += synapse0x1aec380();
   input += synapse0x1aec3c0();
   input += synapse0x1aec400();
   input += synapse0x1aec440();
   input += synapse0x1aec480();
   input += synapse0x1aec4c0();
   input += synapse0x1aec500();
   input += synapse0x1aec540();
   input += synapse0x1aec580();
   input += synapse0x18ad8e0();
   input += synapse0x18ad920();
   input += synapse0x18ad960();
   input += synapse0x18ad9a0();
   input += synapse0x18ad9e0();
   input += synapse0x18ada20();
   input += synapse0x18ada60();
   input += synapse0x1aec1d0();
   input += synapse0x1aec210();
   input += synapse0x18adbb0();
   input += synapse0x18adbf0();
   input += synapse0x18adc30();
   input += synapse0x18adc70();
   input += synapse0x18adcb0();
   input += synapse0x1aecdd0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1aec040() {
   double input = input0x1aec040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1aece10() {
   double input = 0.380141;
   input += synapse0x1aed150();
   input += synapse0x1aed190();
   input += synapse0x1aed1d0();
   input += synapse0x1aed210();
   input += synapse0x1aed250();
   input += synapse0x1aed290();
   input += synapse0x1aed2d0();
   input += synapse0x1aed310();
   input += synapse0x1aed350();
   input += synapse0x1aed390();
   input += synapse0x1aed3d0();
   input += synapse0x1aed410();
   input += synapse0x1aed450();
   input += synapse0x1aed490();
   input += synapse0x1aed4d0();
   input += synapse0x1aed510();
   input += synapse0x1aecfa0();
   input += synapse0x1aecfe0();
   input += synapse0x1aed660();
   input += synapse0x1aed6a0();
   input += synapse0x1aed6e0();
   input += synapse0x1aed720();
   input += synapse0x1aed760();
   input += synapse0x1aed7a0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1aece10() {
   double input = input0x1aece10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1aed7e0() {
   double input = 0.889019;
   input += synapse0x1aedb20();
   input += synapse0x1aedb60();
   input += synapse0x1aedba0();
   input += synapse0x1aedbe0();
   input += synapse0x1aedc20();
   input += synapse0x1aedc60();
   input += synapse0x1aedca0();
   input += synapse0x1aedce0();
   input += synapse0x1aedd20();
   input += synapse0x1aedd60();
   input += synapse0x1aedda0();
   input += synapse0x1aedde0();
   input += synapse0x1aede20();
   input += synapse0x1aede60();
   input += synapse0x1aedea0();
   input += synapse0x1aedee0();
   input += synapse0x1aed970();
   input += synapse0x1aed9b0();
   input += synapse0x1aee030();
   input += synapse0x1aee070();
   input += synapse0x1aee0b0();
   input += synapse0x1aee0f0();
   input += synapse0x1aee130();
   input += synapse0x1aee170();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1aed7e0() {
   double input = input0x1aed7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1aee1b0() {
   double input = -0.724232;
   input += synapse0x1ae7c80();
   input += synapse0x1ae7cc0();
   input += synapse0x1ae7d00();
   input += synapse0x1ae7d40();
   input += synapse0x1aee700();
   input += synapse0x1aee740();
   input += synapse0x1aee780();
   input += synapse0x1aee7c0();
   input += synapse0x1aee800();
   input += synapse0x1aee840();
   input += synapse0x1aee880();
   input += synapse0x1aee8c0();
   input += synapse0x1aee900();
   input += synapse0x1aee940();
   input += synapse0x1aee980();
   input += synapse0x1aee9c0();
   input += synapse0x1aee340();
   input += synapse0x1aee380();
   input += synapse0x1aeeb10();
   input += synapse0x1aeeb50();
   input += synapse0x1aeeb90();
   input += synapse0x1aeebd0();
   input += synapse0x1aeec10();
   input += synapse0x1aeec50();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1aee1b0() {
   double input = input0x1aee1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1aeec90() {
   double input = -6.23902;
   input += synapse0x1aeefd0();
   input += synapse0x1aef010();
   input += synapse0x1aef050();
   input += synapse0x1aef090();
   input += synapse0x1aef0d0();
   input += synapse0x1aef110();
   input += synapse0x1aef150();
   input += synapse0x1aef190();
   input += synapse0x1aef1d0();
   input += synapse0x1aef210();
   input += synapse0x1aef250();
   input += synapse0x1aef290();
   input += synapse0x1aef2d0();
   input += synapse0x1aef310();
   input += synapse0x1aef350();
   input += synapse0x1aef390();
   input += synapse0x1aeee20();
   input += synapse0x1aeee60();
   input += synapse0x1aef4e0();
   input += synapse0x1aef520();
   input += synapse0x1aef560();
   input += synapse0x1aef5a0();
   input += synapse0x1aef5e0();
   input += synapse0x1aef620();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1aeec90() {
   double input = input0x1aeec90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1aef660() {
   double input = 0.704396;
   input += synapse0x1aef9a0();
   input += synapse0x1aef9e0();
   input += synapse0x1aefa20();
   input += synapse0x1aefa60();
   input += synapse0x1aefaa0();
   input += synapse0x1aefae0();
   input += synapse0x1aefb20();
   input += synapse0x1aefb60();
   input += synapse0x1aefba0();
   input += synapse0x1aefbe0();
   input += synapse0x1aefc20();
   input += synapse0x1aefc60();
   input += synapse0x1aefca0();
   input += synapse0x1aefce0();
   input += synapse0x1aefd20();
   input += synapse0x1aefd60();
   input += synapse0x1aef7f0();
   input += synapse0x1aef830();
   input += synapse0x1aec5c0();
   input += synapse0x1aec600();
   input += synapse0x1aec640();
   input += synapse0x1aec680();
   input += synapse0x1aec6c0();
   input += synapse0x1aec700();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1aef660() {
   double input = input0x1aef660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1aec740() {
   double input = -1.14367;
   input += synapse0x1aeca80();
   input += synapse0x1aecac0();
   input += synapse0x1aecb00();
   input += synapse0x1aecb40();
   input += synapse0x1aecb80();
   input += synapse0x1aecbc0();
   input += synapse0x1aecc00();
   input += synapse0x1aecc40();
   input += synapse0x1aecc80();
   input += synapse0x1aeccc0();
   input += synapse0x1aecd00();
   input += synapse0x1aecd40();
   input += synapse0x1aecd80();
   input += synapse0x1af0ec0();
   input += synapse0x1af0f00();
   input += synapse0x1af0f40();
   input += synapse0x1aec8d0();
   input += synapse0x1aec910();
   input += synapse0x1af1090();
   input += synapse0x1af10d0();
   input += synapse0x1af1110();
   input += synapse0x1af1150();
   input += synapse0x1af1190();
   input += synapse0x1af11d0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1aec740() {
   double input = input0x1aec740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1af1210() {
   double input = -0.190251;
   input += synapse0x1af1550();
   input += synapse0x1af1590();
   input += synapse0x1af15d0();
   input += synapse0x1af1610();
   input += synapse0x1af1650();
   input += synapse0x1af1690();
   input += synapse0x1af16d0();
   input += synapse0x1af1710();
   input += synapse0x1af1750();
   input += synapse0x1af1790();
   input += synapse0x1af17d0();
   input += synapse0x1af1810();
   input += synapse0x1af1850();
   input += synapse0x1af1890();
   input += synapse0x1af18d0();
   input += synapse0x1af1910();
   input += synapse0x1af13a0();
   input += synapse0x1af13e0();
   input += synapse0x1af1a60();
   input += synapse0x1af1aa0();
   input += synapse0x1af1ae0();
   input += synapse0x1af1b20();
   input += synapse0x1af1b60();
   input += synapse0x1af1ba0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1af1210() {
   double input = input0x1af1210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1af1be0() {
   double input = 0.958062;
   input += synapse0x1af1f20();
   input += synapse0x1af1f60();
   input += synapse0x1af1fa0();
   input += synapse0x1af1fe0();
   input += synapse0x1af2020();
   input += synapse0x1af2060();
   input += synapse0x1af20a0();
   input += synapse0x1af20e0();
   input += synapse0x1af2120();
   input += synapse0x1af2160();
   input += synapse0x1af21a0();
   input += synapse0x1af21e0();
   input += synapse0x1af2220();
   input += synapse0x1af2260();
   input += synapse0x1af22a0();
   input += synapse0x1af22e0();
   input += synapse0x1af1d70();
   input += synapse0x1af1db0();
   input += synapse0x1af2430();
   input += synapse0x1af2470();
   input += synapse0x1af24b0();
   input += synapse0x1af24f0();
   input += synapse0x1af2530();
   input += synapse0x1af2570();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1af1be0() {
   double input = input0x1af1be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1af25b0() {
   double input = 0.0791875;
   input += synapse0x1af28f0();
   input += synapse0x1af2930();
   input += synapse0x1af2970();
   input += synapse0x1af29b0();
   input += synapse0x1af29f0();
   input += synapse0x1af2a30();
   input += synapse0x1af2a70();
   input += synapse0x1af2ab0();
   input += synapse0x1af2af0();
   input += synapse0x1af2b30();
   input += synapse0x1af2b70();
   input += synapse0x1af2bb0();
   input += synapse0x1af2bf0();
   input += synapse0x1af2c30();
   input += synapse0x1af2c70();
   input += synapse0x1af2cb0();
   input += synapse0x1af2740();
   input += synapse0x1af2780();
   input += synapse0x1af2e00();
   input += synapse0x1af2e40();
   input += synapse0x1af2e80();
   input += synapse0x1af2ec0();
   input += synapse0x1af2f00();
   input += synapse0x1af2f40();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1af25b0() {
   double input = input0x1af25b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1af2f80() {
   double input = 0.0683564;
   input += synapse0x1af32c0();
   input += synapse0x1ae4650();
   input += synapse0x1ae4690();
   input += synapse0x1ae4990();
   input += synapse0x1ae49d0();
   input += synapse0x1ae4cd0();
   input += synapse0x1ae4d10();
   input += synapse0x1ae5010();
   input += synapse0x1ae5050();
   input += synapse0x1ae5350();
   input += synapse0x1ae5390();
   input += synapse0x1ae5690();
   input += synapse0x1ae56d0();
   input += synapse0x1ae59d0();
   input += synapse0x1ae5a10();
   input += synapse0x1ae5d10();
   input += synapse0x1ae5d50();
   input += synapse0x1ae6050();
   input += synapse0x1ae6090();
   input += synapse0x1ae6390();
   input += synapse0x1ae63d0();
   input += synapse0x1ae66d0();
   input += synapse0x1ae6710();
   input += synapse0x1ae6a10();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1af2f80() {
   double input = input0x1af2f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1af4d90() {
   double input = 0.360253;
   input += synapse0x1ae6a50();
   input += synapse0x1ae7710();
   input += synapse0x1ae7750();
   input += synapse0x1af3110();
   input += synapse0x1af3150();
   input += synapse0x1ae7a50();
   input += synapse0x1ae7a90();
   input += synapse0x189f500();
   input += synapse0x189f540();
   input += synapse0x1ae81d0();
   input += synapse0x1ae8210();
   input += synapse0x1ae8510();
   input += synapse0x1ae8550();
   input += synapse0x1ae8850();
   input += synapse0x1ae8890();
   input += synapse0x1ae8b90();
   input += synapse0x1ae8bd0();
   input += synapse0x1ae8ed0();
   input += synapse0x1ae8f10();
   input += synapse0x1ae9210();
   input += synapse0x1ae9250();
   input += synapse0x1ae6d50();
   input += synapse0x1ae6d90();
   input += synapse0x1af5030();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1af4d90() {
   double input = input0x1af4d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1af5070() {
   double input = 0.204506;
   input += synapse0x1af53b0();
   input += synapse0x1af53f0();
   input += synapse0x1af5430();
   input += synapse0x1af5470();
   input += synapse0x1af54b0();
   input += synapse0x1af54f0();
   input += synapse0x1af5530();
   input += synapse0x1af5570();
   input += synapse0x1af55b0();
   input += synapse0x1af55f0();
   input += synapse0x1af5630();
   input += synapse0x1af5670();
   input += synapse0x1af56b0();
   input += synapse0x1af56f0();
   input += synapse0x1af5730();
   input += synapse0x1af5770();
   input += synapse0x1af5200();
   input += synapse0x1af5240();
   input += synapse0x1af58c0();
   input += synapse0x1af5900();
   input += synapse0x1af5940();
   input += synapse0x1af5980();
   input += synapse0x1af59c0();
   input += synapse0x1af5a00();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1af5070() {
   double input = input0x1af5070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1af5a40() {
   double input = 0.82031;
   input += synapse0x1af5d80();
   input += synapse0x1af5dc0();
   input += synapse0x1af5e00();
   input += synapse0x1af5e40();
   input += synapse0x1af5e80();
   input += synapse0x1af5ec0();
   input += synapse0x1af5f00();
   input += synapse0x1af5f40();
   input += synapse0x1af5f80();
   input += synapse0x1af5fc0();
   input += synapse0x1af6000();
   input += synapse0x1af6040();
   input += synapse0x1af6080();
   input += synapse0x1af60c0();
   input += synapse0x1af6100();
   input += synapse0x1af6140();
   input += synapse0x1af5bd0();
   input += synapse0x1af5c10();
   input += synapse0x1af6290();
   input += synapse0x1af62d0();
   input += synapse0x1af6310();
   input += synapse0x1af6350();
   input += synapse0x1af6390();
   input += synapse0x1af63d0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1af5a40() {
   double input = input0x1af5a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1af6410() {
   double input = -0.172067;
   input += synapse0x1af6750();
   input += synapse0x1af6790();
   input += synapse0x1af67d0();
   input += synapse0x1af6810();
   input += synapse0x1af6850();
   input += synapse0x1af6890();
   input += synapse0x1af68d0();
   input += synapse0x1af6910();
   input += synapse0x1af6950();
   input += synapse0x1af6990();
   input += synapse0x1af69d0();
   input += synapse0x1af6a10();
   input += synapse0x1af6a50();
   input += synapse0x1af6a90();
   input += synapse0x1af6ad0();
   input += synapse0x1af6b10();
   input += synapse0x1af65a0();
   input += synapse0x1af65e0();
   input += synapse0x1af6c60();
   input += synapse0x1af6ca0();
   input += synapse0x1af6ce0();
   input += synapse0x1af6d20();
   input += synapse0x1af6d60();
   input += synapse0x1af6da0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1af6410() {
   double input = input0x1af6410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1af6de0() {
   double input = -0.0713091;
   input += synapse0x1af7120();
   input += synapse0x1af7160();
   input += synapse0x1af71a0();
   input += synapse0x1af71e0();
   input += synapse0x1af7220();
   input += synapse0x1af7260();
   input += synapse0x1af72a0();
   input += synapse0x1af72e0();
   input += synapse0x1af7320();
   input += synapse0x1af7360();
   input += synapse0x1af73a0();
   input += synapse0x1af73e0();
   input += synapse0x1af7420();
   input += synapse0x1af7460();
   input += synapse0x1af74a0();
   input += synapse0x1af74e0();
   input += synapse0x1af6f70();
   input += synapse0x1af6fb0();
   input += synapse0x1af7630();
   input += synapse0x1af7670();
   input += synapse0x1af76b0();
   input += synapse0x1af76f0();
   input += synapse0x1af7730();
   input += synapse0x1af7770();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1af6de0() {
   double input = input0x1af6de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1af77b0() {
   double input = -0.430785;
   input += synapse0x1af7af0();
   input += synapse0x1af7b30();
   input += synapse0x1af7b70();
   input += synapse0x1af7bb0();
   input += synapse0x1af7bf0();
   input += synapse0x1af7c30();
   input += synapse0x1af7c70();
   input += synapse0x1af7cb0();
   input += synapse0x1af7cf0();
   input += synapse0x1aefeb0();
   input += synapse0x1aefef0();
   input += synapse0x1aeff30();
   input += synapse0x1aeff70();
   input += synapse0x1aeffb0();
   input += synapse0x1aefff0();
   input += synapse0x1af0030();
   input += synapse0x1af7940();
   input += synapse0x1af7980();
   input += synapse0x1af0180();
   input += synapse0x1af01c0();
   input += synapse0x1af0200();
   input += synapse0x1af0240();
   input += synapse0x1af0280();
   input += synapse0x1af02c0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1af77b0() {
   double input = input0x1af77b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1af0300() {
   double input = 0.536584;
   input += synapse0x1af0640();
   input += synapse0x1af0680();
   input += synapse0x1af06c0();
   input += synapse0x1af0700();
   input += synapse0x1af0740();
   input += synapse0x1af0780();
   input += synapse0x1af07c0();
   input += synapse0x1af0800();
   input += synapse0x1af0840();
   input += synapse0x1af0880();
   input += synapse0x1af08c0();
   input += synapse0x1af0900();
   input += synapse0x1af0940();
   input += synapse0x1af0980();
   input += synapse0x1af09c0();
   input += synapse0x1af0a00();
   input += synapse0x1af0490();
   input += synapse0x1af04d0();
   input += synapse0x1af0b50();
   input += synapse0x1af0b90();
   input += synapse0x1af0bd0();
   input += synapse0x1af0c10();
   input += synapse0x1af0c50();
   input += synapse0x1af0c90();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1af0300() {
   double input = input0x1af0300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1af0cd0() {
   double input = 0.30169;
   input += synapse0x1af0e60();
   input += synapse0x1af9ef0();
   input += synapse0x1af9f30();
   input += synapse0x1af9f70();
   input += synapse0x1af9fb0();
   input += synapse0x1af9ff0();
   input += synapse0x1afa030();
   input += synapse0x1afa070();
   input += synapse0x1afa0b0();
   input += synapse0x1afa0f0();
   input += synapse0x1afa130();
   input += synapse0x1afa170();
   input += synapse0x1afa1b0();
   input += synapse0x1afa1f0();
   input += synapse0x1afa230();
   input += synapse0x1afa270();
   input += synapse0x1af9d40();
   input += synapse0x1af9d80();
   input += synapse0x1afa3c0();
   input += synapse0x1afa400();
   input += synapse0x1afa440();
   input += synapse0x1afa480();
   input += synapse0x1afa4c0();
   input += synapse0x1afa500();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1af0cd0() {
   double input = input0x1af0cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1afa540() {
   double input = 1.54706;
   input += synapse0x1afa880();
   input += synapse0x1afa8c0();
   input += synapse0x1afa900();
   input += synapse0x1afa940();
   input += synapse0x1afa980();
   input += synapse0x1afa9c0();
   input += synapse0x1afaa00();
   input += synapse0x1afaa40();
   input += synapse0x1afaa80();
   input += synapse0x1afaac0();
   input += synapse0x1afab00();
   input += synapse0x1afab40();
   input += synapse0x1afab80();
   input += synapse0x1afabc0();
   input += synapse0x1afac00();
   input += synapse0x1afac40();
   input += synapse0x1afa6d0();
   input += synapse0x1afa710();
   input += synapse0x1afad90();
   input += synapse0x1afadd0();
   input += synapse0x1afae10();
   input += synapse0x1afae50();
   input += synapse0x1afae90();
   input += synapse0x1afaed0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1afa540() {
   double input = input0x1afa540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1afaf10() {
   double input = 0.873066;
   input += synapse0x1afb250();
   input += synapse0x1afb290();
   input += synapse0x1afb2d0();
   input += synapse0x1afb310();
   input += synapse0x1afb350();
   input += synapse0x1afb390();
   input += synapse0x1afb3d0();
   input += synapse0x1afb410();
   input += synapse0x1afb450();
   input += synapse0x1afb490();
   input += synapse0x1afb4d0();
   input += synapse0x1afb510();
   input += synapse0x1afb550();
   input += synapse0x1afb590();
   input += synapse0x1afb5d0();
   input += synapse0x1afb610();
   input += synapse0x1afb0a0();
   input += synapse0x1afb0e0();
   input += synapse0x1afb760();
   input += synapse0x1afb7a0();
   input += synapse0x1afb7e0();
   input += synapse0x1afb820();
   input += synapse0x1afb860();
   input += synapse0x1afb8a0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1afaf10() {
   double input = input0x1afaf10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1afb8e0() {
   double input = 0.603229;
   input += synapse0x1afbc20();
   input += synapse0x1afbc60();
   input += synapse0x1afbca0();
   input += synapse0x1afbce0();
   input += synapse0x1afbd20();
   input += synapse0x1afbd60();
   input += synapse0x1afbda0();
   input += synapse0x1afbde0();
   input += synapse0x1afbe20();
   input += synapse0x1afbe60();
   input += synapse0x1afbea0();
   input += synapse0x1afbee0();
   input += synapse0x1afbf20();
   input += synapse0x1afbf60();
   input += synapse0x1afbfa0();
   input += synapse0x1afbfe0();
   input += synapse0x1afba70();
   input += synapse0x1afbab0();
   input += synapse0x1afc130();
   input += synapse0x1afc170();
   input += synapse0x1afc1b0();
   input += synapse0x1afc1f0();
   input += synapse0x1afc230();
   input += synapse0x1afc270();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1afb8e0() {
   double input = input0x1afb8e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1afc2b0() {
   double input = 5.05376;
   input += synapse0x1afc5f0();
   input += synapse0x1afc630();
   input += synapse0x1afc670();
   input += synapse0x1afc6b0();
   input += synapse0x1afc6f0();
   input += synapse0x1afc730();
   input += synapse0x1afc770();
   input += synapse0x1afc7b0();
   input += synapse0x1afc7f0();
   input += synapse0x1afc830();
   input += synapse0x1afc870();
   input += synapse0x1afc8b0();
   input += synapse0x1afc8f0();
   input += synapse0x1afc930();
   input += synapse0x1afc970();
   input += synapse0x1afc9b0();
   input += synapse0x1afc440();
   input += synapse0x1afc480();
   input += synapse0x1afcb00();
   input += synapse0x1afcb40();
   input += synapse0x1afcb80();
   input += synapse0x1afcbc0();
   input += synapse0x1afcc00();
   input += synapse0x1afcc40();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1afc2b0() {
   double input = input0x1afc2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1afcc80() {
   double input = -2.35954;
   input += synapse0x1afcfc0();
   input += synapse0x1afd000();
   input += synapse0x1afd040();
   input += synapse0x1afd080();
   input += synapse0x1afd0c0();
   input += synapse0x1afd100();
   input += synapse0x1afd140();
   input += synapse0x1afd180();
   input += synapse0x1afd1c0();
   input += synapse0x1afd200();
   input += synapse0x1afd240();
   input += synapse0x1afd280();
   input += synapse0x1afd2c0();
   input += synapse0x1afd300();
   input += synapse0x1afd340();
   input += synapse0x1afd380();
   input += synapse0x1afce10();
   input += synapse0x1afce50();
   input += synapse0x1afd4d0();
   input += synapse0x1afd510();
   input += synapse0x1afd550();
   input += synapse0x1afd590();
   input += synapse0x1afd5d0();
   input += synapse0x1afd610();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1afcc80() {
   double input = input0x1afcc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1afd650() {
   double input = 0.823454;
   input += synapse0x1afd990();
   input += synapse0x1afd9d0();
   input += synapse0x1afda10();
   input += synapse0x1afda50();
   input += synapse0x1afda90();
   input += synapse0x1afdad0();
   input += synapse0x1afdb10();
   input += synapse0x1afdb50();
   input += synapse0x1afdb90();
   input += synapse0x1afdbd0();
   input += synapse0x1afdc10();
   input += synapse0x1afdc50();
   input += synapse0x1afdc90();
   input += synapse0x1afdcd0();
   input += synapse0x1afdd10();
   input += synapse0x1afdd50();
   input += synapse0x1afd7e0();
   input += synapse0x1afd820();
   input += synapse0x1afdea0();
   input += synapse0x1afdee0();
   input += synapse0x1afdf20();
   input += synapse0x1afdf60();
   input += synapse0x1afdfa0();
   input += synapse0x1afdfe0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1afd650() {
   double input = input0x1afd650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1afe020() {
   double input = -0.488556;
   input += synapse0x1afe360();
   input += synapse0x1afe3a0();
   input += synapse0x1afe3e0();
   input += synapse0x1afe420();
   input += synapse0x1afe460();
   input += synapse0x1afe4a0();
   input += synapse0x1afe4e0();
   input += synapse0x1afe520();
   input += synapse0x1afe560();
   input += synapse0x1afe5a0();
   input += synapse0x1afe5e0();
   input += synapse0x1afe620();
   input += synapse0x1afe660();
   input += synapse0x1afe6a0();
   input += synapse0x1afe6e0();
   input += synapse0x1afe720();
   input += synapse0x1afe1b0();
   input += synapse0x1afe1f0();
   input += synapse0x1afe870();
   input += synapse0x1afe8b0();
   input += synapse0x1afe8f0();
   input += synapse0x1afe930();
   input += synapse0x1afe970();
   input += synapse0x1afe9b0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1afe020() {
   double input = input0x1afe020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1afe9f0() {
   double input = 0.116809;
   input += synapse0x1afed30();
   input += synapse0x1af3300();
   input += synapse0x1af3340();
   input += synapse0x1af3380();
   input += synapse0x1af35d0();
   input += synapse0x1af3610();
   input += synapse0x1af3650();
   input += synapse0x1af38a0();
   input += synapse0x1af38e0();
   input += synapse0x1af3b30();
   input += synapse0x1af3b70();
   input += synapse0x1af3bb0();
   input += synapse0x1af3e00();
   input += synapse0x1af3e40();
   input += synapse0x1af4090();
   input += synapse0x1af40d0();
   input += synapse0x1afeb80();
   input += synapse0x1afebc0();
   input += synapse0x1af4220();
   input += synapse0x1af4730();
   input += synapse0x1af4770();
   input += synapse0x1af47b0();
   input += synapse0x1af4a00();
   input += synapse0x1af4a40();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1afe9f0() {
   double input = input0x1afe9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1af4a80() {
   double input = 0.808449;
   input += synapse0x1af42f0();
   input += synapse0x1af4330();
   input += synapse0x1af4370();
   input += synapse0x1af43b0();
   input += synapse0x1af4d30();
   input += synapse0x1b01080();
   input += synapse0x1b010c0();
   input += synapse0x1b01100();
   input += synapse0x1b01140();
   input += synapse0x1b01180();
   input += synapse0x1b011c0();
   input += synapse0x1b01200();
   input += synapse0x1b01240();
   input += synapse0x1b01280();
   input += synapse0x1b012c0();
   input += synapse0x1b01300();
   input += synapse0x1af4c10();
   input += synapse0x1af4c50();
   input += synapse0x1b01450();
   input += synapse0x1b01490();
   input += synapse0x1b014d0();
   input += synapse0x1b01510();
   input += synapse0x1b01550();
   input += synapse0x1b01590();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1af4a80() {
   double input = input0x1af4a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b015d0() {
   double input = 1.0278;
   input += synapse0x1b01910();
   input += synapse0x1b01950();
   input += synapse0x1b01990();
   input += synapse0x1b019d0();
   input += synapse0x1b01a10();
   input += synapse0x1b01a50();
   input += synapse0x1b01a90();
   input += synapse0x1b01ad0();
   input += synapse0x1b01b10();
   input += synapse0x1b01b50();
   input += synapse0x1b01b90();
   input += synapse0x1b01bd0();
   input += synapse0x1b01c10();
   input += synapse0x1b01c50();
   input += synapse0x1b01c90();
   input += synapse0x1b01cd0();
   input += synapse0x1b01760();
   input += synapse0x1b017a0();
   input += synapse0x1b01e20();
   input += synapse0x1b01e60();
   input += synapse0x1b01ea0();
   input += synapse0x1b01ee0();
   input += synapse0x1b01f20();
   input += synapse0x1b01f60();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b015d0() {
   double input = input0x1b015d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b01fa0() {
   double input = 0.297046;
   input += synapse0x1b022e0();
   input += synapse0x1b02320();
   input += synapse0x1b02360();
   input += synapse0x1b023a0();
   input += synapse0x1b023e0();
   input += synapse0x1b02420();
   input += synapse0x1b02460();
   input += synapse0x1b024a0();
   input += synapse0x1b024e0();
   input += synapse0x1b02520();
   input += synapse0x1b02560();
   input += synapse0x1b025a0();
   input += synapse0x1b025e0();
   input += synapse0x1b02620();
   input += synapse0x1b02660();
   input += synapse0x1b026a0();
   input += synapse0x1b02130();
   input += synapse0x1b02170();
   input += synapse0x1b027f0();
   input += synapse0x1b02830();
   input += synapse0x1b02870();
   input += synapse0x1b028b0();
   input += synapse0x1b028f0();
   input += synapse0x1b02930();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b01fa0() {
   double input = input0x1b01fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b02970() {
   double input = -0.0134942;
   input += synapse0x1b02cb0();
   input += synapse0x1b02cf0();
   input += synapse0x1b02d30();
   input += synapse0x1b02d70();
   input += synapse0x1b02db0();
   input += synapse0x1b02df0();
   input += synapse0x1b02e30();
   input += synapse0x1b02e70();
   input += synapse0x1b02eb0();
   input += synapse0x1b02ef0();
   input += synapse0x1b02f30();
   input += synapse0x1b02f70();
   input += synapse0x1b02fb0();
   input += synapse0x1b02ff0();
   input += synapse0x1b03030();
   input += synapse0x1b03070();
   input += synapse0x1b02b00();
   input += synapse0x1b02b40();
   input += synapse0x1b031c0();
   input += synapse0x1b03200();
   input += synapse0x1b03240();
   input += synapse0x1b03280();
   input += synapse0x1b032c0();
   input += synapse0x1b03300();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b02970() {
   double input = input0x1b02970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b03340() {
   double input = 1.26723;
   input += synapse0x1b03680();
   input += synapse0x1b036c0();
   input += synapse0x1b03700();
   input += synapse0x1b03740();
   input += synapse0x1b03780();
   input += synapse0x1b037c0();
   input += synapse0x1b03800();
   input += synapse0x1b03840();
   input += synapse0x1b03880();
   input += synapse0x1b038c0();
   input += synapse0x1b03900();
   input += synapse0x1b03940();
   input += synapse0x1b03980();
   input += synapse0x1b039c0();
   input += synapse0x1b03a00();
   input += synapse0x1b03a40();
   input += synapse0x1b034d0();
   input += synapse0x1b03510();
   input += synapse0x1b03b90();
   input += synapse0x1b03bd0();
   input += synapse0x1b03c10();
   input += synapse0x1b03c50();
   input += synapse0x1b03c90();
   input += synapse0x1b03cd0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b03340() {
   double input = input0x1b03340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b03d10() {
   double input = 0.397722;
   input += synapse0x1b04050();
   input += synapse0x1b04090();
   input += synapse0x1b040d0();
   input += synapse0x1b04110();
   input += synapse0x1b04150();
   input += synapse0x1b04190();
   input += synapse0x1b041d0();
   input += synapse0x1b04210();
   input += synapse0x1b04250();
   input += synapse0x1b04290();
   input += synapse0x1b042d0();
   input += synapse0x1b04310();
   input += synapse0x1b04350();
   input += synapse0x1b04390();
   input += synapse0x1b043d0();
   input += synapse0x1b04410();
   input += synapse0x1b03ea0();
   input += synapse0x1b03ee0();
   input += synapse0x1b04560();
   input += synapse0x1b045a0();
   input += synapse0x1b045e0();
   input += synapse0x1b04620();
   input += synapse0x1b04660();
   input += synapse0x1b046a0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b03d10() {
   double input = input0x1b03d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b046e0() {
   double input = 0.608349;
   input += synapse0x1b04a20();
   input += synapse0x1b04a60();
   input += synapse0x1b04aa0();
   input += synapse0x1b04ae0();
   input += synapse0x1b04b20();
   input += synapse0x1b04b60();
   input += synapse0x1b04ba0();
   input += synapse0x1b04be0();
   input += synapse0x1b04c20();
   input += synapse0x1b04c60();
   input += synapse0x1b04ca0();
   input += synapse0x1b04ce0();
   input += synapse0x1b04d20();
   input += synapse0x1b04d60();
   input += synapse0x1b04da0();
   input += synapse0x1b04de0();
   input += synapse0x1b04870();
   input += synapse0x1b048b0();
   input += synapse0x1b04f30();
   input += synapse0x1b04f70();
   input += synapse0x1b04fb0();
   input += synapse0x1b04ff0();
   input += synapse0x1b05030();
   input += synapse0x1b05070();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b046e0() {
   double input = input0x1b046e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b050b0() {
   double input = -0.566521;
   input += synapse0x1b053f0();
   input += synapse0x1b05430();
   input += synapse0x1b05470();
   input += synapse0x1b054b0();
   input += synapse0x1b054f0();
   input += synapse0x1b05530();
   input += synapse0x1b05570();
   input += synapse0x1b055b0();
   input += synapse0x1b055f0();
   input += synapse0x1b05630();
   input += synapse0x1b05670();
   input += synapse0x1b056b0();
   input += synapse0x1b056f0();
   input += synapse0x1b05730();
   input += synapse0x1b05770();
   input += synapse0x1b057b0();
   input += synapse0x1b05240();
   input += synapse0x1b05280();
   input += synapse0x1b05900();
   input += synapse0x1b05940();
   input += synapse0x1b05980();
   input += synapse0x1b059c0();
   input += synapse0x1b05a00();
   input += synapse0x1b05a40();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b050b0() {
   double input = input0x1b050b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b05a80() {
   double input = -0.102812;
   input += synapse0x1aee4f0();
   input += synapse0x1aee530();
   input += synapse0x1aee570();
   input += synapse0x1aee5b0();
   input += synapse0x1aee5f0();
   input += synapse0x1aee630();
   input += synapse0x1aee670();
   input += synapse0x1aee6b0();
   input += synapse0x1b061d0();
   input += synapse0x1b06210();
   input += synapse0x1b06250();
   input += synapse0x1b06290();
   input += synapse0x1b062d0();
   input += synapse0x1b06310();
   input += synapse0x1b06350();
   input += synapse0x1b06390();
   input += synapse0x1b05c10();
   input += synapse0x1b05c50();
   input += synapse0x1b064e0();
   input += synapse0x1b06520();
   input += synapse0x1b06560();
   input += synapse0x1b065a0();
   input += synapse0x1b065e0();
   input += synapse0x1b06620();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b05a80() {
   double input = input0x1b05a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b06660() {
   double input = 0.128505;
   input += synapse0x1b069a0();
   input += synapse0x1b069e0();
   input += synapse0x1b06a20();
   input += synapse0x1b06a60();
   input += synapse0x1b06aa0();
   input += synapse0x1b06ae0();
   input += synapse0x1b06b20();
   input += synapse0x1b06b60();
   input += synapse0x1b06ba0();
   input += synapse0x1b06be0();
   input += synapse0x1b06c20();
   input += synapse0x1b06c60();
   input += synapse0x1b06ca0();
   input += synapse0x1b06ce0();
   input += synapse0x1b06d20();
   input += synapse0x1b06d60();
   input += synapse0x1b067f0();
   input += synapse0x1b06830();
   input += synapse0x1b06eb0();
   input += synapse0x1b06ef0();
   input += synapse0x1b06f30();
   input += synapse0x1b06f70();
   input += synapse0x1b06fb0();
   input += synapse0x1b06ff0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b06660() {
   double input = input0x1b06660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b07030() {
   double input = 1.39322;
   input += synapse0x1b07370();
   input += synapse0x1b073b0();
   input += synapse0x1b073f0();
   input += synapse0x1b07430();
   input += synapse0x1b07470();
   input += synapse0x1b074b0();
   input += synapse0x1b074f0();
   input += synapse0x1b07530();
   input += synapse0x1b07570();
   input += synapse0x1b075b0();
   input += synapse0x1b075f0();
   input += synapse0x1b07630();
   input += synapse0x1b07670();
   input += synapse0x1b076b0();
   input += synapse0x1b076f0();
   input += synapse0x1b07730();
   input += synapse0x1b071c0();
   input += synapse0x1b07200();
   input += synapse0x1af7d30();
   input += synapse0x1af7d70();
   input += synapse0x1af7db0();
   input += synapse0x1af7df0();
   input += synapse0x1af7e30();
   input += synapse0x1af7e70();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b07030() {
   double input = input0x1b07030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1af7eb0() {
   double input = -0.0228451;
   input += synapse0x1af81f0();
   input += synapse0x1af8230();
   input += synapse0x1af8270();
   input += synapse0x1af82b0();
   input += synapse0x1af82f0();
   input += synapse0x1af8330();
   input += synapse0x1af8370();
   input += synapse0x1af83b0();
   input += synapse0x1af83f0();
   input += synapse0x1af8430();
   input += synapse0x1af8470();
   input += synapse0x1af84b0();
   input += synapse0x1af84f0();
   input += synapse0x1af8530();
   input += synapse0x1af8570();
   input += synapse0x1af85b0();
   input += synapse0x1af8040();
   input += synapse0x1af8080();
   input += synapse0x1af8700();
   input += synapse0x1af8740();
   input += synapse0x1af8780();
   input += synapse0x1af87c0();
   input += synapse0x1af8800();
   input += synapse0x1af8840();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1af7eb0() {
   double input = input0x1af7eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1af8880() {
   double input = 0.155475;
   input += synapse0x1af8bc0();
   input += synapse0x1af8c00();
   input += synapse0x1af8c40();
   input += synapse0x1af8c80();
   input += synapse0x1af8cc0();
   input += synapse0x1af8d00();
   input += synapse0x1af8d40();
   input += synapse0x1af8d80();
   input += synapse0x1af8dc0();
   input += synapse0x1af8e00();
   input += synapse0x1af8e40();
   input += synapse0x1af8e80();
   input += synapse0x1af8ec0();
   input += synapse0x1af8f00();
   input += synapse0x1af8f40();
   input += synapse0x1af8f80();
   input += synapse0x1af8a10();
   input += synapse0x1af8a50();
   input += synapse0x1af90d0();
   input += synapse0x1af9110();
   input += synapse0x1af9150();
   input += synapse0x1af9190();
   input += synapse0x1af91d0();
   input += synapse0x1af9210();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1af8880() {
   double input = input0x1af8880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1af9250() {
   double input = 1.43856;
   input += synapse0x1af9590();
   input += synapse0x1af95d0();
   input += synapse0x1af9610();
   input += synapse0x1af9650();
   input += synapse0x1af9690();
   input += synapse0x1af96d0();
   input += synapse0x1af9710();
   input += synapse0x1af9750();
   input += synapse0x1af9790();
   input += synapse0x1af97d0();
   input += synapse0x1af9810();
   input += synapse0x1af9850();
   input += synapse0x1af9890();
   input += synapse0x1af98d0();
   input += synapse0x1af9910();
   input += synapse0x1af9950();
   input += synapse0x1af93e0();
   input += synapse0x1af9420();
   input += synapse0x1af9aa0();
   input += synapse0x1af9ae0();
   input += synapse0x1af9b20();
   input += synapse0x1af9b60();
   input += synapse0x1af9ba0();
   input += synapse0x1af9be0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1af9250() {
   double input = input0x1af9250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b0b890() {
   double input = 0.486717;
   input += synapse0x1b0bab0();
   input += synapse0x1b0baf0();
   input += synapse0x1b0bb30();
   input += synapse0x1b0bb70();
   input += synapse0x1b0bbb0();
   input += synapse0x1b0bbf0();
   input += synapse0x1b0bc30();
   input += synapse0x1b0bc70();
   input += synapse0x1b0bcb0();
   input += synapse0x1b0bcf0();
   input += synapse0x1b0bd30();
   input += synapse0x1b0bd70();
   input += synapse0x1b0bdb0();
   input += synapse0x1b0bdf0();
   input += synapse0x1b0be30();
   input += synapse0x1b0be70();
   input += synapse0x1af9c20();
   input += synapse0x1af9c60();
   input += synapse0x1b0bfc0();
   input += synapse0x1b0c000();
   input += synapse0x1b0c040();
   input += synapse0x1b0c080();
   input += synapse0x1b0c0c0();
   input += synapse0x1b0c100();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b0b890() {
   double input = input0x1b0b890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b0c140() {
   double input = 0.378915;
   input += synapse0x1b0c480();
   input += synapse0x1b0c4c0();
   input += synapse0x1b0c500();
   input += synapse0x1b0c540();
   input += synapse0x1b0c580();
   input += synapse0x1b0c5c0();
   input += synapse0x1b0c600();
   input += synapse0x1b0c640();
   input += synapse0x1b0c680();
   input += synapse0x1b0c6c0();
   input += synapse0x1b0c700();
   input += synapse0x1b0c740();
   input += synapse0x1b0c780();
   input += synapse0x1b0c7c0();
   input += synapse0x1b0c800();
   input += synapse0x1b0c840();
   input += synapse0x1b0c2d0();
   input += synapse0x1b0c310();
   input += synapse0x1b0c990();
   input += synapse0x1b0c9d0();
   input += synapse0x1b0ca10();
   input += synapse0x1b0ca50();
   input += synapse0x1b0ca90();
   input += synapse0x1b0cad0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b0c140() {
   double input = input0x1b0c140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b0cb10() {
   double input = -0.942728;
   input += synapse0x1b0ce50();
   input += synapse0x1b0ce90();
   input += synapse0x1b0ced0();
   input += synapse0x1b0cf10();
   input += synapse0x1b0cf50();
   input += synapse0x1b0cf90();
   input += synapse0x1b0cfd0();
   input += synapse0x1b0d010();
   input += synapse0x1b0d050();
   input += synapse0x1b0d090();
   input += synapse0x1b0d0d0();
   input += synapse0x1b0d110();
   input += synapse0x1b0d150();
   input += synapse0x1b0d190();
   input += synapse0x1b0d1d0();
   input += synapse0x1b0d210();
   input += synapse0x1b0cca0();
   input += synapse0x1b0cce0();
   input += synapse0x1b0d360();
   input += synapse0x1b0d3a0();
   input += synapse0x1b0d3e0();
   input += synapse0x1b0d420();
   input += synapse0x1b0d460();
   input += synapse0x1b0d4a0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b0cb10() {
   double input = input0x1b0cb10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b0d4e0() {
   double input = 1.4519;
   input += synapse0x1b0d820();
   input += synapse0x1b0d860();
   input += synapse0x1b0d8a0();
   input += synapse0x1b0d8e0();
   input += synapse0x1b0d920();
   input += synapse0x1b0d960();
   input += synapse0x1b0d9a0();
   input += synapse0x1b0d9e0();
   input += synapse0x1b0da20();
   input += synapse0x1b0da60();
   input += synapse0x1b0daa0();
   input += synapse0x1b0dae0();
   input += synapse0x1b0db20();
   input += synapse0x1b0db60();
   input += synapse0x1b0dba0();
   input += synapse0x1b0dbe0();
   input += synapse0x1b0d670();
   input += synapse0x1b0d6b0();
   input += synapse0x1b0dd30();
   input += synapse0x1b0dd70();
   input += synapse0x1b0ddb0();
   input += synapse0x1b0ddf0();
   input += synapse0x1b0de30();
   input += synapse0x1b0de70();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b0d4e0() {
   double input = input0x1b0d4e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b146e0() {
   double input = -0.134393;
   input += synapse0x18add80();
   input += synapse0x18addc0();
   input += synapse0x1aeb920();
   input += synapse0x1aeb960();
   input += synapse0x1aec2f0();
   input += synapse0x1aec330();
   input += synapse0x1aed0c0();
   input += synapse0x1aed100();
   input += synapse0x1aeda90();
   input += synapse0x1aedad0();
   input += synapse0x1aee460();
   input += synapse0x1aee4a0();
   input += synapse0x1aeef40();
   input += synapse0x1aeef80();
   input += synapse0x1aef910();
   input += synapse0x1aef950();
   input += synapse0x1aec9f0();
   input += synapse0x1aeca30();
   input += synapse0x1af14c0();
   input += synapse0x1af1500();
   input += synapse0x1af1e90();
   input += synapse0x1af1ed0();
   input += synapse0x1af2860();
   input += synapse0x1af28a0();
   input += synapse0x1af3230();
   input += synapse0x1af3270();
   input += synapse0x1ae73d0();
   input += synapse0x1ae7410();
   input += synapse0x1af5320();
   input += synapse0x1af5360();
   input += synapse0x1af5cf0();
   input += synapse0x1af5d30();
   input += synapse0x1af66c0();
   input += synapse0x1af6700();
   input += synapse0x1af7090();
   input += synapse0x1af70d0();
   input += synapse0x1af7a60();
   input += synapse0x1af7aa0();
   input += synapse0x1af05b0();
   input += synapse0x1af05f0();
   input += synapse0x1af9e60();
   input += synapse0x1af9ea0();
   input += synapse0x1afa7f0();
   input += synapse0x1afa830();
   input += synapse0x1afb1c0();
   input += synapse0x1afb200();
   input += synapse0x1afbb90();
   input += synapse0x1afbbd0();
   input += synapse0x1afc560();
   input += synapse0x1afc5a0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b146e0() {
   double input = input0x1b146e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b14a80() {
   double input = -0.367342;
   input += synapse0x1afeca0();
   input += synapse0x1afece0();
   input += synapse0x1af4260();
   input += synapse0x1af42a0();
   input += synapse0x1b01880();
   input += synapse0x1b018c0();
   input += synapse0x1b02250();
   input += synapse0x1b02290();
   input += synapse0x1b02c20();
   input += synapse0x1b02c60();
   input += synapse0x1b035f0();
   input += synapse0x1b03630();
   input += synapse0x1b03fc0();
   input += synapse0x1b04000();
   input += synapse0x1b04990();
   input += synapse0x1b049d0();
   input += synapse0x1b05360();
   input += synapse0x1b053a0();
   input += synapse0x1b05d30();
   input += synapse0x1b05d70();
   input += synapse0x1b06910();
   input += synapse0x1b06950();
   input += synapse0x1b072e0();
   input += synapse0x1b07320();
   input += synapse0x1af8160();
   input += synapse0x1af81a0();
   input += synapse0x1af8b30();
   input += synapse0x1af8b70();
   input += synapse0x1af9500();
   input += synapse0x1af9540();
   input += synapse0x1b0ba20();
   input += synapse0x1b0ba60();
   input += synapse0x1b0c3f0();
   input += synapse0x1b0c430();
   input += synapse0x1b0cdc0();
   input += synapse0x1b0ce00();
   input += synapse0x1b0d790();
   input += synapse0x1b0d7d0();
   input += synapse0x1ae9680();
   input += synapse0x1ae96c0();
   input += synapse0x1afcf30();
   input += synapse0x1afcf70();
   input += synapse0x1b0deb0();
   input += synapse0x1b0def0();
   input += synapse0x1b0df30();
   input += synapse0x1b0df70();
   input += synapse0x1b14e20();
   input += synapse0x1b14e60();
   input += synapse0x1b14ea0();
   input += synapse0x1b14ee0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b14a80() {
   double input = input0x1b14a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b14f20() {
   double input = -0.0890238;
   input += synapse0x1b15260();
   input += synapse0x1b152a0();
   input += synapse0x1b152e0();
   input += synapse0x1b15320();
   input += synapse0x1b15360();
   input += synapse0x1b153a0();
   input += synapse0x1b153e0();
   input += synapse0x1b15420();
   input += synapse0x1b15460();
   input += synapse0x1b154a0();
   input += synapse0x1b154e0();
   input += synapse0x1b15520();
   input += synapse0x1b15560();
   input += synapse0x1b155a0();
   input += synapse0x1b155e0();
   input += synapse0x1b15620();
   input += synapse0x1b150b0();
   input += synapse0x1b150f0();
   input += synapse0x1b15770();
   input += synapse0x1b157b0();
   input += synapse0x1b157f0();
   input += synapse0x1b15830();
   input += synapse0x1b15870();
   input += synapse0x1b158b0();
   input += synapse0x1b158f0();
   input += synapse0x1b15930();
   input += synapse0x1b15970();
   input += synapse0x1b159b0();
   input += synapse0x1b159f0();
   input += synapse0x1b15a30();
   input += synapse0x1b15a70();
   input += synapse0x1b15ab0();
   input += synapse0x1b15660();
   input += synapse0x1b156a0();
   input += synapse0x1b156e0();
   input += synapse0x1b15720();
   input += synapse0x1b15d00();
   input += synapse0x1b15d40();
   input += synapse0x1b15d80();
   input += synapse0x1b15dc0();
   input += synapse0x1b15e00();
   input += synapse0x1b15e40();
   input += synapse0x1b15e80();
   input += synapse0x1b15ec0();
   input += synapse0x1b15f00();
   input += synapse0x1b15f40();
   input += synapse0x1b15f80();
   input += synapse0x1b15fc0();
   input += synapse0x1b16000();
   input += synapse0x1b16040();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b14f20() {
   double input = input0x1b14f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b16080() {
   double input = 0.533669;
   input += synapse0x1b163c0();
   input += synapse0x1b16400();
   input += synapse0x1b16440();
   input += synapse0x1b16480();
   input += synapse0x1b164c0();
   input += synapse0x1b16500();
   input += synapse0x1b16540();
   input += synapse0x1b16580();
   input += synapse0x1b165c0();
   input += synapse0x1b16600();
   input += synapse0x1b16640();
   input += synapse0x1b16680();
   input += synapse0x1b166c0();
   input += synapse0x1b16700();
   input += synapse0x1b16740();
   input += synapse0x1b16780();
   input += synapse0x1b16210();
   input += synapse0x1b16250();
   input += synapse0x1b168d0();
   input += synapse0x1b16910();
   input += synapse0x1b16950();
   input += synapse0x1b16990();
   input += synapse0x1b169d0();
   input += synapse0x1b16a10();
   input += synapse0x1b16a50();
   input += synapse0x1b16a90();
   input += synapse0x1b16ad0();
   input += synapse0x1b16b10();
   input += synapse0x1b16b50();
   input += synapse0x1b16b90();
   input += synapse0x1b16bd0();
   input += synapse0x1b16c10();
   input += synapse0x1b167c0();
   input += synapse0x1b16800();
   input += synapse0x1b16840();
   input += synapse0x1b16880();
   input += synapse0x1b16e60();
   input += synapse0x1b16ea0();
   input += synapse0x1b16ee0();
   input += synapse0x1b16f20();
   input += synapse0x1b16f60();
   input += synapse0x1b16fa0();
   input += synapse0x1b16fe0();
   input += synapse0x1b17020();
   input += synapse0x1b17060();
   input += synapse0x1b170a0();
   input += synapse0x1b170e0();
   input += synapse0x1b17120();
   input += synapse0x1b17160();
   input += synapse0x1b171a0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b16080() {
   double input = input0x1b16080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b171e0() {
   double input = -0.281003;
   input += synapse0x1b17520();
   input += synapse0x1b17560();
   input += synapse0x1b175a0();
   input += synapse0x1b175e0();
   input += synapse0x1b17620();
   input += synapse0x1b17660();
   input += synapse0x1b176a0();
   input += synapse0x1b176e0();
   input += synapse0x1b17720();
   input += synapse0x1b17760();
   input += synapse0x1b177a0();
   input += synapse0x1b177e0();
   input += synapse0x1b17820();
   input += synapse0x1b17860();
   input += synapse0x1b178a0();
   input += synapse0x1b178e0();
   input += synapse0x1b17370();
   input += synapse0x1b173b0();
   input += synapse0x1b17a30();
   input += synapse0x1b17a70();
   input += synapse0x1b17ab0();
   input += synapse0x1b17af0();
   input += synapse0x1b17b30();
   input += synapse0x1b17b70();
   input += synapse0x1b17bb0();
   input += synapse0x1b17bf0();
   input += synapse0x1b17c30();
   input += synapse0x1b17c70();
   input += synapse0x1b17cb0();
   input += synapse0x1b17cf0();
   input += synapse0x1b17d30();
   input += synapse0x1b17d70();
   input += synapse0x1b17920();
   input += synapse0x1b17960();
   input += synapse0x1b179a0();
   input += synapse0x1b179e0();
   input += synapse0x1b17fc0();
   input += synapse0x1b18000();
   input += synapse0x1b18040();
   input += synapse0x1b18080();
   input += synapse0x1b180c0();
   input += synapse0x1b18100();
   input += synapse0x1b18140();
   input += synapse0x1b18180();
   input += synapse0x1b181c0();
   input += synapse0x1b18200();
   input += synapse0x1b18240();
   input += synapse0x1b18280();
   input += synapse0x1b182c0();
   input += synapse0x1b18300();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b171e0() {
   double input = input0x1b171e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b18340() {
   double input = 3.07139;
   input += synapse0x1b18560();
   input += synapse0x1b185a0();
   input += synapse0x1b185e0();
   input += synapse0x1b18620();
   input += synapse0x1b18660();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b18340() {
   double input = input0x1b18340();
   return (input * 1)+0;
}

double NNfunction_sb_dLdR::synapse0x1ae42f0() {
   return (neuron0x1ae4430()*-0.46849);
}

double NNfunction_sb_dLdR::synapse0x1ae4330() {
   return (neuron0x1ae4770()*0.548877);
}

double NNfunction_sb_dLdR::synapse0x1ae9710() {
   return (neuron0x1ae4ab0()*0.340726);
}

double NNfunction_sb_dLdR::synapse0x1ae9750() {
   return (neuron0x1ae4df0()*0.492569);
}

double NNfunction_sb_dLdR::synapse0x1ae9790() {
   return (neuron0x1ae5130()*0.180799);
}

double NNfunction_sb_dLdR::synapse0x1ae97d0() {
   return (neuron0x1ae5470()*0.655768);
}

double NNfunction_sb_dLdR::synapse0x1ae9810() {
   return (neuron0x1ae57b0()*0.53901);
}

double NNfunction_sb_dLdR::synapse0x1ae9850() {
   return (neuron0x1ae5af0()*0.470874);
}

double NNfunction_sb_dLdR::synapse0x1ae9890() {
   return (neuron0x1ae5e30()*0.867473);
}

double NNfunction_sb_dLdR::synapse0x1ae98d0() {
   return (neuron0x1ae6170()*0.151963);
}

double NNfunction_sb_dLdR::synapse0x1ae9910() {
   return (neuron0x1ae64b0()*-0.325764);
}

double NNfunction_sb_dLdR::synapse0x1ae9950() {
   return (neuron0x1ae67f0()*-0.368804);
}

double NNfunction_sb_dLdR::synapse0x1ae9990() {
   return (neuron0x1ae6b30()*-0.446575);
}

double NNfunction_sb_dLdR::synapse0x1ae99d0() {
   return (neuron0x1ae6e70()*-0.246019);
}

double NNfunction_sb_dLdR::synapse0x1ae9a10() {
   return (neuron0x1ae71b0()*0.0738222);
}

double NNfunction_sb_dLdR::synapse0x1ae9a50() {
   return (neuron0x1ae74f0()*-0.127202);
}

double NNfunction_sb_dLdR::synapse0x1ae4260() {
   return (neuron0x1ae7830()*0.213615);
}

double NNfunction_sb_dLdR::synapse0x1ae42a0() {
   return (neuron0x1ae7d90()*-0.242993);
}

double NNfunction_sb_dLdR::synapse0x189f620() {
   return (neuron0x1ae7fb0()*-0.0795572);
}

double NNfunction_sb_dLdR::synapse0x189f660() {
   return (neuron0x1ae82f0()*0.307707);
}

double NNfunction_sb_dLdR::synapse0x1ae9cb0() {
   return (neuron0x1ae8630()*0.432389);
}

double NNfunction_sb_dLdR::synapse0x1ae9cf0() {
   return (neuron0x1ae8970()*-1.11567);
}

double NNfunction_sb_dLdR::synapse0x1ae9d30() {
   return (neuron0x1ae8cb0()*-0.221972);
}

double NNfunction_sb_dLdR::synapse0x1ae9d70() {
   return (neuron0x1ae8ff0()*0.627265);
}

double NNfunction_sb_dLdR::synapse0x1aea0f0() {
   return (neuron0x1ae4430()*0.00219192);
}

double NNfunction_sb_dLdR::synapse0x1aea130() {
   return (neuron0x1ae4770()*-0.000731983);
}

double NNfunction_sb_dLdR::synapse0x1aea170() {
   return (neuron0x1ae4ab0()*0.0395073);
}

double NNfunction_sb_dLdR::synapse0x1aea1b0() {
   return (neuron0x1ae4df0()*6.8593);
}

double NNfunction_sb_dLdR::synapse0x1aea1f0() {
   return (neuron0x1ae5130()*-0.0130322);
}

double NNfunction_sb_dLdR::synapse0x1aea230() {
   return (neuron0x1ae5470()*0.0347913);
}

double NNfunction_sb_dLdR::synapse0x1aea270() {
   return (neuron0x1ae57b0()*0.0562577);
}

double NNfunction_sb_dLdR::synapse0x1aea2b0() {
   return (neuron0x1ae5af0()*0.00770479);
}

double NNfunction_sb_dLdR::synapse0x1aea2f0() {
   return (neuron0x1ae5e30()*-0.0198829);
}

double NNfunction_sb_dLdR::synapse0x1ae9ba0() {
   return (neuron0x1ae6170()*0.0544815);
}

double NNfunction_sb_dLdR::synapse0x1ae9be0() {
   return (neuron0x1ae64b0()*-0.0212572);
}

double NNfunction_sb_dLdR::synapse0x1ae9c20() {
   return (neuron0x1ae67f0()*0.150837);
}

double NNfunction_sb_dLdR::synapse0x1ae9c60() {
   return (neuron0x1ae6b30()*0.046766);
}

double NNfunction_sb_dLdR::synapse0x1aea540() {
   return (neuron0x1ae6e70()*0.0289263);
}

double NNfunction_sb_dLdR::synapse0x1aea580() {
   return (neuron0x1ae71b0()*0.0337551);
}

double NNfunction_sb_dLdR::synapse0x1aea5c0() {
   return (neuron0x1ae74f0()*0.0322358);
}

double NNfunction_sb_dLdR::synapse0x1ae9f40() {
   return (neuron0x1ae7830()*-0.0329612);
}

double NNfunction_sb_dLdR::synapse0x1ae9f80() {
   return (neuron0x1ae7d90()*-1.20995);
}

double NNfunction_sb_dLdR::synapse0x1aea710() {
   return (neuron0x1ae7fb0()*0.0509763);
}

double NNfunction_sb_dLdR::synapse0x1aea750() {
   return (neuron0x1ae82f0()*0.0119377);
}

double NNfunction_sb_dLdR::synapse0x1aea790() {
   return (neuron0x1ae8630()*0.00941425);
}

double NNfunction_sb_dLdR::synapse0x1aea7d0() {
   return (neuron0x1ae8970()*0.0272931);
}

double NNfunction_sb_dLdR::synapse0x1aea810() {
   return (neuron0x1ae8cb0()*-0.0407144);
}

double NNfunction_sb_dLdR::synapse0x1aea850() {
   return (neuron0x1ae8ff0()*-0.0116084);
}

double NNfunction_sb_dLdR::synapse0x1aeabd0() {
   return (neuron0x1ae4430()*0.235306);
}

double NNfunction_sb_dLdR::synapse0x1aeac10() {
   return (neuron0x1ae4770()*0.142117);
}

double NNfunction_sb_dLdR::synapse0x1aeac50() {
   return (neuron0x1ae4ab0()*0.285333);
}

double NNfunction_sb_dLdR::synapse0x1aeac90() {
   return (neuron0x1ae4df0()*-0.106396);
}

double NNfunction_sb_dLdR::synapse0x1aeacd0() {
   return (neuron0x1ae5130()*0.201491);
}

double NNfunction_sb_dLdR::synapse0x1aead10() {
   return (neuron0x1ae5470()*-0.19222);
}

double NNfunction_sb_dLdR::synapse0x1aead50() {
   return (neuron0x1ae57b0()*-0.0695524);
}

double NNfunction_sb_dLdR::synapse0x1aead90() {
   return (neuron0x1ae5af0()*-0.0990584);
}

double NNfunction_sb_dLdR::synapse0x1aeadd0() {
   return (neuron0x1ae5e30()*-0.298844);
}

double NNfunction_sb_dLdR::synapse0x1aeae10() {
   return (neuron0x1ae6170()*-0.162374);
}

double NNfunction_sb_dLdR::synapse0x1aeae50() {
   return (neuron0x1ae64b0()*0.465954);
}

double NNfunction_sb_dLdR::synapse0x1aeae90() {
   return (neuron0x1ae67f0()*-0.172934);
}

double NNfunction_sb_dLdR::synapse0x1aeaed0() {
   return (neuron0x1ae6b30()*0.703269);
}

double NNfunction_sb_dLdR::synapse0x1aeaf10() {
   return (neuron0x1ae6e70()*0.631475);
}

double NNfunction_sb_dLdR::synapse0x1aeaf50() {
   return (neuron0x1ae71b0()*0.190534);
}

double NNfunction_sb_dLdR::synapse0x1aeaf90() {
   return (neuron0x1ae74f0()*-0.0735704);
}

double NNfunction_sb_dLdR::synapse0x1aeaa20() {
   return (neuron0x1ae7830()*-0.525244);
}

double NNfunction_sb_dLdR::synapse0x1aeaa60() {
   return (neuron0x1ae7d90()*-1.18733);
}

double NNfunction_sb_dLdR::synapse0x189fcc0() {
   return (neuron0x1ae7fb0()*0.384448);
}

double NNfunction_sb_dLdR::synapse0x18ad590() {
   return (neuron0x1ae82f0()*0.3794);
}

double NNfunction_sb_dLdR::synapse0x18ad5d0() {
   return (neuron0x1ae8630()*-0.0101115);
}

double NNfunction_sb_dLdR::synapse0x1ad34c0() {
   return (neuron0x1ae8970()*0.0562798);
}

double NNfunction_sb_dLdR::synapse0x1ad3500() {
   return (neuron0x1ae8cb0()*0.198631);
}

double NNfunction_sb_dLdR::synapse0x1ad3540() {
   return (neuron0x1ae8ff0()*-0.0464158);
}

double NNfunction_sb_dLdR::synapse0x18ade10() {
   return (neuron0x1ae4430()*-0.339753);
}

double NNfunction_sb_dLdR::synapse0x1aea4c0() {
   return (neuron0x1ae4770()*0.0100617);
}

double NNfunction_sb_dLdR::synapse0x1aea500() {
   return (neuron0x1ae4ab0()*-0.1892);
}

double NNfunction_sb_dLdR::synapse0x1aeb0e0() {
   return (neuron0x1ae4df0()*0.280813);
}

double NNfunction_sb_dLdR::synapse0x1aeb120() {
   return (neuron0x1ae5130()*0.257908);
}

double NNfunction_sb_dLdR::synapse0x1aeb160() {
   return (neuron0x1ae5470()*-0.038618);
}

double NNfunction_sb_dLdR::synapse0x1aeb1a0() {
   return (neuron0x1ae57b0()*0.0642332);
}

double NNfunction_sb_dLdR::synapse0x1aeb1e0() {
   return (neuron0x1ae5af0()*-0.201384);
}

double NNfunction_sb_dLdR::synapse0x1aeb220() {
   return (neuron0x1ae5e30()*0.432076);
}

double NNfunction_sb_dLdR::synapse0x1aeb260() {
   return (neuron0x1ae6170()*-0.0226593);
}

double NNfunction_sb_dLdR::synapse0x1aeb2a0() {
   return (neuron0x1ae64b0()*-0.162665);
}

double NNfunction_sb_dLdR::synapse0x1aeb2e0() {
   return (neuron0x1ae67f0()*-0.0255105);
}

double NNfunction_sb_dLdR::synapse0x1aeb320() {
   return (neuron0x1ae6b30()*0.00757021);
}

double NNfunction_sb_dLdR::synapse0x1aeb360() {
   return (neuron0x1ae6e70()*0.667545);
}

double NNfunction_sb_dLdR::synapse0x1aeb3a0() {
   return (neuron0x1ae71b0()*0.17663);
}

double NNfunction_sb_dLdR::synapse0x1aeb3e0() {
   return (neuron0x1ae74f0()*-0.162756);
}

double NNfunction_sb_dLdR::synapse0x1ae4370() {
   return (neuron0x1ae7830()*-0.657929);
}

double NNfunction_sb_dLdR::synapse0x1ae43b0() {
   return (neuron0x1ae7d90()*0.831085);
}

double NNfunction_sb_dLdR::synapse0x1ae43f0() {
   return (neuron0x1ae7fb0()*0.373283);
}

double NNfunction_sb_dLdR::synapse0x1aeb530() {
   return (neuron0x1ae82f0()*-0.597705);
}

double NNfunction_sb_dLdR::synapse0x1aeb570() {
   return (neuron0x1ae8630()*-0.211398);
}

double NNfunction_sb_dLdR::synapse0x1aeb5b0() {
   return (neuron0x1ae8970()*-0.0364872);
}

double NNfunction_sb_dLdR::synapse0x1aeb5f0() {
   return (neuron0x1ae8cb0()*-0.00799198);
}

double NNfunction_sb_dLdR::synapse0x1aeb630() {
   return (neuron0x1ae8ff0()*-0.0185995);
}

double NNfunction_sb_dLdR::synapse0x1aeb9b0() {
   return (neuron0x1ae4430()*-0.180977);
}

double NNfunction_sb_dLdR::synapse0x1aeb9f0() {
   return (neuron0x1ae4770()*0.104883);
}

double NNfunction_sb_dLdR::synapse0x1aeba30() {
   return (neuron0x1ae4ab0()*-0.0272387);
}

double NNfunction_sb_dLdR::synapse0x1aeba70() {
   return (neuron0x1ae4df0()*-0.140864);
}

double NNfunction_sb_dLdR::synapse0x1aebab0() {
   return (neuron0x1ae5130()*-0.116123);
}

double NNfunction_sb_dLdR::synapse0x1aebaf0() {
   return (neuron0x1ae5470()*-0.152993);
}

double NNfunction_sb_dLdR::synapse0x1aebb30() {
   return (neuron0x1ae57b0()*-0.159836);
}

double NNfunction_sb_dLdR::synapse0x1aebb70() {
   return (neuron0x1ae5af0()*0.262173);
}

double NNfunction_sb_dLdR::synapse0x1aebbb0() {
   return (neuron0x1ae5e30()*0.00979702);
}

double NNfunction_sb_dLdR::synapse0x1aebbf0() {
   return (neuron0x1ae6170()*0.044082);
}

double NNfunction_sb_dLdR::synapse0x1aebc30() {
   return (neuron0x1ae64b0()*-0.166666);
}

double NNfunction_sb_dLdR::synapse0x1aebc70() {
   return (neuron0x1ae67f0()*-0.695747);
}

double NNfunction_sb_dLdR::synapse0x1aebcb0() {
   return (neuron0x1ae6b30()*-0.0450275);
}

double NNfunction_sb_dLdR::synapse0x1aebcf0() {
   return (neuron0x1ae6e70()*0.151738);
}

double NNfunction_sb_dLdR::synapse0x1aebd30() {
   return (neuron0x1ae71b0()*-0.0734986);
}

double NNfunction_sb_dLdR::synapse0x1aebd70() {
   return (neuron0x1ae74f0()*0.280397);
}

double NNfunction_sb_dLdR::synapse0x1aeb800() {
   return (neuron0x1ae7830()*0.10879);
}

double NNfunction_sb_dLdR::synapse0x1aeb840() {
   return (neuron0x1ae7d90()*0.10332);
}

double NNfunction_sb_dLdR::synapse0x1aebec0() {
   return (neuron0x1ae7fb0()*0.235298);
}

double NNfunction_sb_dLdR::synapse0x1aebf00() {
   return (neuron0x1ae82f0()*0.10508);
}

double NNfunction_sb_dLdR::synapse0x1aebf40() {
   return (neuron0x1ae8630()*0.180166);
}

double NNfunction_sb_dLdR::synapse0x1aebf80() {
   return (neuron0x1ae8970()*0.138479);
}

double NNfunction_sb_dLdR::synapse0x1aebfc0() {
   return (neuron0x1ae8cb0()*0.241831);
}

double NNfunction_sb_dLdR::synapse0x1aec000() {
   return (neuron0x1ae8ff0()*0.323848);
}

double NNfunction_sb_dLdR::synapse0x1aec380() {
   return (neuron0x1ae4430()*0.0463767);
}

double NNfunction_sb_dLdR::synapse0x1aec3c0() {
   return (neuron0x1ae4770()*-0.00279063);
}

double NNfunction_sb_dLdR::synapse0x1aec400() {
   return (neuron0x1ae4ab0()*-1.04052);
}

double NNfunction_sb_dLdR::synapse0x1aec440() {
   return (neuron0x1ae4df0()*0.0447427);
}

double NNfunction_sb_dLdR::synapse0x1aec480() {
   return (neuron0x1ae5130()*0.0544991);
}

double NNfunction_sb_dLdR::synapse0x1aec4c0() {
   return (neuron0x1ae5470()*-0.0073583);
}

double NNfunction_sb_dLdR::synapse0x1aec500() {
   return (neuron0x1ae57b0()*-0.0175252);
}

double NNfunction_sb_dLdR::synapse0x1aec540() {
   return (neuron0x1ae5af0()*-0.00996004);
}

double NNfunction_sb_dLdR::synapse0x1aec580() {
   return (neuron0x1ae5e30()*0.022424);
}

double NNfunction_sb_dLdR::synapse0x18ad8e0() {
   return (neuron0x1ae6170()*0.00664452);
}

double NNfunction_sb_dLdR::synapse0x18ad920() {
   return (neuron0x1ae64b0()*0.101351);
}

double NNfunction_sb_dLdR::synapse0x18ad960() {
   return (neuron0x1ae67f0()*0.552259);
}

double NNfunction_sb_dLdR::synapse0x18ad9a0() {
   return (neuron0x1ae6b30()*0.0723367);
}

double NNfunction_sb_dLdR::synapse0x18ad9e0() {
   return (neuron0x1ae6e70()*-0.0586194);
}

double NNfunction_sb_dLdR::synapse0x18ada20() {
   return (neuron0x1ae71b0()*0.0328906);
}

double NNfunction_sb_dLdR::synapse0x18ada60() {
   return (neuron0x1ae74f0()*-0.0002172);
}

double NNfunction_sb_dLdR::synapse0x1aec1d0() {
   return (neuron0x1ae7830()*-0.0573276);
}

double NNfunction_sb_dLdR::synapse0x1aec210() {
   return (neuron0x1ae7d90()*-0.145102);
}

double NNfunction_sb_dLdR::synapse0x18adbb0() {
   return (neuron0x1ae7fb0()*-0.0475197);
}

double NNfunction_sb_dLdR::synapse0x18adbf0() {
   return (neuron0x1ae82f0()*-5.18429e-05);
}

double NNfunction_sb_dLdR::synapse0x18adc30() {
   return (neuron0x1ae8630()*-0.046371);
}

double NNfunction_sb_dLdR::synapse0x18adc70() {
   return (neuron0x1ae8970()*0.0132063);
}

double NNfunction_sb_dLdR::synapse0x18adcb0() {
   return (neuron0x1ae8cb0()*0.0407762);
}

double NNfunction_sb_dLdR::synapse0x1aecdd0() {
   return (neuron0x1ae8ff0()*0.00644406);
}

double NNfunction_sb_dLdR::synapse0x1aed150() {
   return (neuron0x1ae4430()*-0.0871355);
}

double NNfunction_sb_dLdR::synapse0x1aed190() {
   return (neuron0x1ae4770()*-0.281534);
}

double NNfunction_sb_dLdR::synapse0x1aed1d0() {
   return (neuron0x1ae4ab0()*-0.50346);
}

double NNfunction_sb_dLdR::synapse0x1aed210() {
   return (neuron0x1ae4df0()*1.08959);
}

double NNfunction_sb_dLdR::synapse0x1aed250() {
   return (neuron0x1ae5130()*0.13566);
}

double NNfunction_sb_dLdR::synapse0x1aed290() {
   return (neuron0x1ae5470()*-0.0793326);
}

double NNfunction_sb_dLdR::synapse0x1aed2d0() {
   return (neuron0x1ae57b0()*0.00639767);
}

double NNfunction_sb_dLdR::synapse0x1aed310() {
   return (neuron0x1ae5af0()*0.329406);
}

double NNfunction_sb_dLdR::synapse0x1aed350() {
   return (neuron0x1ae5e30()*0.00194454);
}

double NNfunction_sb_dLdR::synapse0x1aed390() {
   return (neuron0x1ae6170()*-0.170912);
}

double NNfunction_sb_dLdR::synapse0x1aed3d0() {
   return (neuron0x1ae64b0()*0.179274);
}

double NNfunction_sb_dLdR::synapse0x1aed410() {
   return (neuron0x1ae67f0()*-1.11531);
}

double NNfunction_sb_dLdR::synapse0x1aed450() {
   return (neuron0x1ae6b30()*0.015267);
}

double NNfunction_sb_dLdR::synapse0x1aed490() {
   return (neuron0x1ae6e70()*-0.317104);
}

double NNfunction_sb_dLdR::synapse0x1aed4d0() {
   return (neuron0x1ae71b0()*0.0529149);
}

double NNfunction_sb_dLdR::synapse0x1aed510() {
   return (neuron0x1ae74f0()*-0.276897);
}

double NNfunction_sb_dLdR::synapse0x1aecfa0() {
   return (neuron0x1ae7830()*-0.00849704);
}

double NNfunction_sb_dLdR::synapse0x1aecfe0() {
   return (neuron0x1ae7d90()*-0.517492);
}

double NNfunction_sb_dLdR::synapse0x1aed660() {
   return (neuron0x1ae7fb0()*0.0747322);
}

double NNfunction_sb_dLdR::synapse0x1aed6a0() {
   return (neuron0x1ae82f0()*0.151441);
}

double NNfunction_sb_dLdR::synapse0x1aed6e0() {
   return (neuron0x1ae8630()*0.203222);
}

double NNfunction_sb_dLdR::synapse0x1aed720() {
   return (neuron0x1ae8970()*-0.0636091);
}

double NNfunction_sb_dLdR::synapse0x1aed760() {
   return (neuron0x1ae8cb0()*-0.0110535);
}

double NNfunction_sb_dLdR::synapse0x1aed7a0() {
   return (neuron0x1ae8ff0()*-0.0360923);
}

double NNfunction_sb_dLdR::synapse0x1aedb20() {
   return (neuron0x1ae4430()*-0.232675);
}

double NNfunction_sb_dLdR::synapse0x1aedb60() {
   return (neuron0x1ae4770()*0.00397038);
}

double NNfunction_sb_dLdR::synapse0x1aedba0() {
   return (neuron0x1ae4ab0()*-0.0742864);
}

double NNfunction_sb_dLdR::synapse0x1aedbe0() {
   return (neuron0x1ae4df0()*0.440311);
}

double NNfunction_sb_dLdR::synapse0x1aedc20() {
   return (neuron0x1ae5130()*-0.304049);
}

double NNfunction_sb_dLdR::synapse0x1aedc60() {
   return (neuron0x1ae5470()*-0.0890742);
}

double NNfunction_sb_dLdR::synapse0x1aedca0() {
   return (neuron0x1ae57b0()*-0.0320664);
}

double NNfunction_sb_dLdR::synapse0x1aedce0() {
   return (neuron0x1ae5af0()*0.28586);
}

double NNfunction_sb_dLdR::synapse0x1aedd20() {
   return (neuron0x1ae5e30()*-0.126669);
}

double NNfunction_sb_dLdR::synapse0x1aedd60() {
   return (neuron0x1ae6170()*-0.146043);
}

double NNfunction_sb_dLdR::synapse0x1aedda0() {
   return (neuron0x1ae64b0()*-0.224059);
}

double NNfunction_sb_dLdR::synapse0x1aedde0() {
   return (neuron0x1ae67f0()*-0.143989);
}

double NNfunction_sb_dLdR::synapse0x1aede20() {
   return (neuron0x1ae6b30()*-0.0156236);
}

double NNfunction_sb_dLdR::synapse0x1aede60() {
   return (neuron0x1ae6e70()*-0.109356);
}

double NNfunction_sb_dLdR::synapse0x1aedea0() {
   return (neuron0x1ae71b0()*-0.0254054);
}

double NNfunction_sb_dLdR::synapse0x1aedee0() {
   return (neuron0x1ae74f0()*0.175981);
}

double NNfunction_sb_dLdR::synapse0x1aed970() {
   return (neuron0x1ae7830()*0.123858);
}

double NNfunction_sb_dLdR::synapse0x1aed9b0() {
   return (neuron0x1ae7d90()*-0.324986);
}

double NNfunction_sb_dLdR::synapse0x1aee030() {
   return (neuron0x1ae7fb0()*0.188912);
}

double NNfunction_sb_dLdR::synapse0x1aee070() {
   return (neuron0x1ae82f0()*0.0177055);
}

double NNfunction_sb_dLdR::synapse0x1aee0b0() {
   return (neuron0x1ae8630()*-0.118951);
}

double NNfunction_sb_dLdR::synapse0x1aee0f0() {
   return (neuron0x1ae8970()*0.0593613);
}

double NNfunction_sb_dLdR::synapse0x1aee130() {
   return (neuron0x1ae8cb0()*0.180963);
}

double NNfunction_sb_dLdR::synapse0x1aee170() {
   return (neuron0x1ae8ff0()*-0.00660378);
}

double NNfunction_sb_dLdR::synapse0x1ae7c80() {
   return (neuron0x1ae4430()*0.0362588);
}

double NNfunction_sb_dLdR::synapse0x1ae7cc0() {
   return (neuron0x1ae4770()*-0.255498);
}

double NNfunction_sb_dLdR::synapse0x1ae7d00() {
   return (neuron0x1ae4ab0()*0.0288496);
}

double NNfunction_sb_dLdR::synapse0x1ae7d40() {
   return (neuron0x1ae4df0()*-0.291938);
}

double NNfunction_sb_dLdR::synapse0x1aee700() {
   return (neuron0x1ae5130()*0.111166);
}

double NNfunction_sb_dLdR::synapse0x1aee740() {
   return (neuron0x1ae5470()*-0.0993353);
}

double NNfunction_sb_dLdR::synapse0x1aee780() {
   return (neuron0x1ae57b0()*0.525049);
}

double NNfunction_sb_dLdR::synapse0x1aee7c0() {
   return (neuron0x1ae5af0()*-0.386161);
}

double NNfunction_sb_dLdR::synapse0x1aee800() {
   return (neuron0x1ae5e30()*-0.263776);
}

double NNfunction_sb_dLdR::synapse0x1aee840() {
   return (neuron0x1ae6170()*0.186825);
}

double NNfunction_sb_dLdR::synapse0x1aee880() {
   return (neuron0x1ae64b0()*-0.711921);
}

double NNfunction_sb_dLdR::synapse0x1aee8c0() {
   return (neuron0x1ae67f0()*1.266);
}

double NNfunction_sb_dLdR::synapse0x1aee900() {
   return (neuron0x1ae6b30()*-0.185485);
}

double NNfunction_sb_dLdR::synapse0x1aee940() {
   return (neuron0x1ae6e70()*0.0391255);
}

double NNfunction_sb_dLdR::synapse0x1aee980() {
   return (neuron0x1ae71b0()*0.245685);
}

double NNfunction_sb_dLdR::synapse0x1aee9c0() {
   return (neuron0x1ae74f0()*-0.146507);
}

double NNfunction_sb_dLdR::synapse0x1aee340() {
   return (neuron0x1ae7830()*-0.271791);
}

double NNfunction_sb_dLdR::synapse0x1aee380() {
   return (neuron0x1ae7d90()*-1.04925);
}

double NNfunction_sb_dLdR::synapse0x1aeeb10() {
   return (neuron0x1ae7fb0()*0.0196758);
}

double NNfunction_sb_dLdR::synapse0x1aeeb50() {
   return (neuron0x1ae82f0()*0.202493);
}

double NNfunction_sb_dLdR::synapse0x1aeeb90() {
   return (neuron0x1ae8630()*-0.167107);
}

double NNfunction_sb_dLdR::synapse0x1aeebd0() {
   return (neuron0x1ae8970()*0.447906);
}

double NNfunction_sb_dLdR::synapse0x1aeec10() {
   return (neuron0x1ae8cb0()*0.0860472);
}

double NNfunction_sb_dLdR::synapse0x1aeec50() {
   return (neuron0x1ae8ff0()*0.0525449);
}

double NNfunction_sb_dLdR::synapse0x1aeefd0() {
   return (neuron0x1ae4430()*0.0231584);
}

double NNfunction_sb_dLdR::synapse0x1aef010() {
   return (neuron0x1ae4770()*-0.0120341);
}

double NNfunction_sb_dLdR::synapse0x1aef050() {
   return (neuron0x1ae4ab0()*-0.00274841);
}

double NNfunction_sb_dLdR::synapse0x1aef090() {
   return (neuron0x1ae4df0()*-14.8855);
}

double NNfunction_sb_dLdR::synapse0x1aef0d0() {
   return (neuron0x1ae5130()*0.0251554);
}

double NNfunction_sb_dLdR::synapse0x1aef110() {
   return (neuron0x1ae5470()*-0.0106417);
}

double NNfunction_sb_dLdR::synapse0x1aef150() {
   return (neuron0x1ae57b0()*-0.015494);
}

double NNfunction_sb_dLdR::synapse0x1aef190() {
   return (neuron0x1ae5af0()*0.00436743);
}

double NNfunction_sb_dLdR::synapse0x1aef1d0() {
   return (neuron0x1ae5e30()*0.0284512);
}

double NNfunction_sb_dLdR::synapse0x1aef210() {
   return (neuron0x1ae6170()*-0.0352755);
}

double NNfunction_sb_dLdR::synapse0x1aef250() {
   return (neuron0x1ae64b0()*0.0123016);
}

double NNfunction_sb_dLdR::synapse0x1aef290() {
   return (neuron0x1ae67f0()*-0.0707144);
}

double NNfunction_sb_dLdR::synapse0x1aef2d0() {
   return (neuron0x1ae6b30()*0.0073138);
}

double NNfunction_sb_dLdR::synapse0x1aef310() {
   return (neuron0x1ae6e70()*-0.0253803);
}

double NNfunction_sb_dLdR::synapse0x1aef350() {
   return (neuron0x1ae71b0()*-0.0260185);
}

double NNfunction_sb_dLdR::synapse0x1aef390() {
   return (neuron0x1ae74f0()*-0.0146702);
}

double NNfunction_sb_dLdR::synapse0x1aeee20() {
   return (neuron0x1ae7830()*0.0308064);
}

double NNfunction_sb_dLdR::synapse0x1aeee60() {
   return (neuron0x1ae7d90()*0.16199);
}

double NNfunction_sb_dLdR::synapse0x1aef4e0() {
   return (neuron0x1ae7fb0()*-0.00478237);
}

double NNfunction_sb_dLdR::synapse0x1aef520() {
   return (neuron0x1ae82f0()*-0.00480009);
}

double NNfunction_sb_dLdR::synapse0x1aef560() {
   return (neuron0x1ae8630()*-0.0155654);
}

double NNfunction_sb_dLdR::synapse0x1aef5a0() {
   return (neuron0x1ae8970()*-0.0298239);
}

double NNfunction_sb_dLdR::synapse0x1aef5e0() {
   return (neuron0x1ae8cb0()*0.0202986);
}

double NNfunction_sb_dLdR::synapse0x1aef620() {
   return (neuron0x1ae8ff0()*-0.0180834);
}

double NNfunction_sb_dLdR::synapse0x1aef9a0() {
   return (neuron0x1ae4430()*0.185448);
}

double NNfunction_sb_dLdR::synapse0x1aef9e0() {
   return (neuron0x1ae4770()*0.408444);
}

double NNfunction_sb_dLdR::synapse0x1aefa20() {
   return (neuron0x1ae4ab0()*0.0545874);
}

double NNfunction_sb_dLdR::synapse0x1aefa60() {
   return (neuron0x1ae4df0()*-0.611227);
}

double NNfunction_sb_dLdR::synapse0x1aefaa0() {
   return (neuron0x1ae5130()*-0.341779);
}

double NNfunction_sb_dLdR::synapse0x1aefae0() {
   return (neuron0x1ae5470()*-0.151486);
}

double NNfunction_sb_dLdR::synapse0x1aefb20() {
   return (neuron0x1ae57b0()*-0.870659);
}

double NNfunction_sb_dLdR::synapse0x1aefb60() {
   return (neuron0x1ae5af0()*-0.0944271);
}

double NNfunction_sb_dLdR::synapse0x1aefba0() {
   return (neuron0x1ae5e30()*0.241595);
}

double NNfunction_sb_dLdR::synapse0x1aefbe0() {
   return (neuron0x1ae6170()*-0.318715);
}

double NNfunction_sb_dLdR::synapse0x1aefc20() {
   return (neuron0x1ae64b0()*0.80017);
}

double NNfunction_sb_dLdR::synapse0x1aefc60() {
   return (neuron0x1ae67f0()*-0.790618);
}

double NNfunction_sb_dLdR::synapse0x1aefca0() {
   return (neuron0x1ae6b30()*0.472233);
}

double NNfunction_sb_dLdR::synapse0x1aefce0() {
   return (neuron0x1ae6e70()*-0.262413);
}

double NNfunction_sb_dLdR::synapse0x1aefd20() {
   return (neuron0x1ae71b0()*-0.642333);
}

double NNfunction_sb_dLdR::synapse0x1aefd60() {
   return (neuron0x1ae74f0()*0.237475);
}

double NNfunction_sb_dLdR::synapse0x1aef7f0() {
   return (neuron0x1ae7830()*-0.0973353);
}

double NNfunction_sb_dLdR::synapse0x1aef830() {
   return (neuron0x1ae7d90()*0.125882);
}

double NNfunction_sb_dLdR::synapse0x1aec5c0() {
   return (neuron0x1ae7fb0()*0.159545);
}

double NNfunction_sb_dLdR::synapse0x1aec600() {
   return (neuron0x1ae82f0()*-0.26624);
}

double NNfunction_sb_dLdR::synapse0x1aec640() {
   return (neuron0x1ae8630()*0.220672);
}

double NNfunction_sb_dLdR::synapse0x1aec680() {
   return (neuron0x1ae8970()*-0.171277);
}

double NNfunction_sb_dLdR::synapse0x1aec6c0() {
   return (neuron0x1ae8cb0()*-0.19824);
}

double NNfunction_sb_dLdR::synapse0x1aec700() {
   return (neuron0x1ae8ff0()*-0.0934882);
}

double NNfunction_sb_dLdR::synapse0x1aeca80() {
   return (neuron0x1ae4430()*-0.0929503);
}

double NNfunction_sb_dLdR::synapse0x1aecac0() {
   return (neuron0x1ae4770()*0.00518468);
}

double NNfunction_sb_dLdR::synapse0x1aecb00() {
   return (neuron0x1ae4ab0()*0.348828);
}

double NNfunction_sb_dLdR::synapse0x1aecb40() {
   return (neuron0x1ae4df0()*0.69124);
}

double NNfunction_sb_dLdR::synapse0x1aecb80() {
   return (neuron0x1ae5130()*-0.0148927);
}

double NNfunction_sb_dLdR::synapse0x1aecbc0() {
   return (neuron0x1ae5470()*0.0437384);
}

double NNfunction_sb_dLdR::synapse0x1aecc00() {
   return (neuron0x1ae57b0()*-0.0247726);
}

double NNfunction_sb_dLdR::synapse0x1aecc40() {
   return (neuron0x1ae5af0()*-0.0303697);
}

double NNfunction_sb_dLdR::synapse0x1aecc80() {
   return (neuron0x1ae5e30()*-0.00998854);
}

double NNfunction_sb_dLdR::synapse0x1aeccc0() {
   return (neuron0x1ae6170()*-0.00885713);
}

double NNfunction_sb_dLdR::synapse0x1aecd00() {
   return (neuron0x1ae64b0()*0.125519);
}

double NNfunction_sb_dLdR::synapse0x1aecd40() {
   return (neuron0x1ae67f0()*0.210104);
}

double NNfunction_sb_dLdR::synapse0x1aecd80() {
   return (neuron0x1ae6b30()*0.111401);
}

double NNfunction_sb_dLdR::synapse0x1af0ec0() {
   return (neuron0x1ae6e70()*0.0231535);
}

double NNfunction_sb_dLdR::synapse0x1af0f00() {
   return (neuron0x1ae71b0()*0.0571058);
}

double NNfunction_sb_dLdR::synapse0x1af0f40() {
   return (neuron0x1ae74f0()*0.0766374);
}

double NNfunction_sb_dLdR::synapse0x1aec8d0() {
   return (neuron0x1ae7830()*0.0326717);
}

double NNfunction_sb_dLdR::synapse0x1aec910() {
   return (neuron0x1ae7d90()*0.043605);
}

double NNfunction_sb_dLdR::synapse0x1af1090() {
   return (neuron0x1ae7fb0()*0.0225143);
}

double NNfunction_sb_dLdR::synapse0x1af10d0() {
   return (neuron0x1ae82f0()*0.0225799);
}

double NNfunction_sb_dLdR::synapse0x1af1110() {
   return (neuron0x1ae8630()*0.0501012);
}

double NNfunction_sb_dLdR::synapse0x1af1150() {
   return (neuron0x1ae8970()*-0.0242573);
}

double NNfunction_sb_dLdR::synapse0x1af1190() {
   return (neuron0x1ae8cb0()*-0.0269822);
}

double NNfunction_sb_dLdR::synapse0x1af11d0() {
   return (neuron0x1ae8ff0()*-0.0502387);
}

double NNfunction_sb_dLdR::synapse0x1af1550() {
   return (neuron0x1ae4430()*-0.458161);
}

double NNfunction_sb_dLdR::synapse0x1af1590() {
   return (neuron0x1ae4770()*-0.122905);
}

double NNfunction_sb_dLdR::synapse0x1af15d0() {
   return (neuron0x1ae4ab0()*-0.207653);
}

double NNfunction_sb_dLdR::synapse0x1af1610() {
   return (neuron0x1ae4df0()*-0.35045);
}

double NNfunction_sb_dLdR::synapse0x1af1650() {
   return (neuron0x1ae5130()*-0.924571);
}

double NNfunction_sb_dLdR::synapse0x1af1690() {
   return (neuron0x1ae5470()*-0.181235);
}

double NNfunction_sb_dLdR::synapse0x1af16d0() {
   return (neuron0x1ae57b0()*0.363329);
}

double NNfunction_sb_dLdR::synapse0x1af1710() {
   return (neuron0x1ae5af0()*0.28891);
}

double NNfunction_sb_dLdR::synapse0x1af1750() {
   return (neuron0x1ae5e30()*0.429895);
}

double NNfunction_sb_dLdR::synapse0x1af1790() {
   return (neuron0x1ae6170()*0.110672);
}

double NNfunction_sb_dLdR::synapse0x1af17d0() {
   return (neuron0x1ae64b0()*-0.393221);
}

double NNfunction_sb_dLdR::synapse0x1af1810() {
   return (neuron0x1ae67f0()*-0.0663422);
}

double NNfunction_sb_dLdR::synapse0x1af1850() {
   return (neuron0x1ae6b30()*-0.0538769);
}

double NNfunction_sb_dLdR::synapse0x1af1890() {
   return (neuron0x1ae6e70()*0.0435464);
}

double NNfunction_sb_dLdR::synapse0x1af18d0() {
   return (neuron0x1ae71b0()*-0.841612);
}

double NNfunction_sb_dLdR::synapse0x1af1910() {
   return (neuron0x1ae74f0()*0.600234);
}

double NNfunction_sb_dLdR::synapse0x1af13a0() {
   return (neuron0x1ae7830()*0.134473);
}

double NNfunction_sb_dLdR::synapse0x1af13e0() {
   return (neuron0x1ae7d90()*0.191213);
}

double NNfunction_sb_dLdR::synapse0x1af1a60() {
   return (neuron0x1ae7fb0()*-0.219695);
}

double NNfunction_sb_dLdR::synapse0x1af1aa0() {
   return (neuron0x1ae82f0()*0.0205195);
}

double NNfunction_sb_dLdR::synapse0x1af1ae0() {
   return (neuron0x1ae8630()*-0.456657);
}

double NNfunction_sb_dLdR::synapse0x1af1b20() {
   return (neuron0x1ae8970()*0.103667);
}

double NNfunction_sb_dLdR::synapse0x1af1b60() {
   return (neuron0x1ae8cb0()*0.168819);
}

double NNfunction_sb_dLdR::synapse0x1af1ba0() {
   return (neuron0x1ae8ff0()*0.669795);
}

double NNfunction_sb_dLdR::synapse0x1af1f20() {
   return (neuron0x1ae4430()*-0.231803);
}

double NNfunction_sb_dLdR::synapse0x1af1f60() {
   return (neuron0x1ae4770()*0.206498);
}

double NNfunction_sb_dLdR::synapse0x1af1fa0() {
   return (neuron0x1ae4ab0()*-0.068551);
}

double NNfunction_sb_dLdR::synapse0x1af1fe0() {
   return (neuron0x1ae4df0()*-0.210221);
}

double NNfunction_sb_dLdR::synapse0x1af2020() {
   return (neuron0x1ae5130()*0.43017);
}

double NNfunction_sb_dLdR::synapse0x1af2060() {
   return (neuron0x1ae5470()*-0.65648);
}

double NNfunction_sb_dLdR::synapse0x1af20a0() {
   return (neuron0x1ae57b0()*0.50986);
}

double NNfunction_sb_dLdR::synapse0x1af20e0() {
   return (neuron0x1ae5af0()*-0.593328);
}

double NNfunction_sb_dLdR::synapse0x1af2120() {
   return (neuron0x1ae5e30()*0.190436);
}

double NNfunction_sb_dLdR::synapse0x1af2160() {
   return (neuron0x1ae6170()*-0.187652);
}

double NNfunction_sb_dLdR::synapse0x1af21a0() {
   return (neuron0x1ae64b0()*0.0819637);
}

double NNfunction_sb_dLdR::synapse0x1af21e0() {
   return (neuron0x1ae67f0()*-0.121515);
}

double NNfunction_sb_dLdR::synapse0x1af2220() {
   return (neuron0x1ae6b30()*0.432078);
}

double NNfunction_sb_dLdR::synapse0x1af2260() {
   return (neuron0x1ae6e70()*0.0666834);
}

double NNfunction_sb_dLdR::synapse0x1af22a0() {
   return (neuron0x1ae71b0()*-0.344105);
}

double NNfunction_sb_dLdR::synapse0x1af22e0() {
   return (neuron0x1ae74f0()*0.19775);
}

double NNfunction_sb_dLdR::synapse0x1af1d70() {
   return (neuron0x1ae7830()*0.210148);
}

double NNfunction_sb_dLdR::synapse0x1af1db0() {
   return (neuron0x1ae7d90()*-0.444067);
}

double NNfunction_sb_dLdR::synapse0x1af2430() {
   return (neuron0x1ae7fb0()*0.102356);
}

double NNfunction_sb_dLdR::synapse0x1af2470() {
   return (neuron0x1ae82f0()*-0.0908468);
}

double NNfunction_sb_dLdR::synapse0x1af24b0() {
   return (neuron0x1ae8630()*-0.0768177);
}

double NNfunction_sb_dLdR::synapse0x1af24f0() {
   return (neuron0x1ae8970()*0.36175);
}

double NNfunction_sb_dLdR::synapse0x1af2530() {
   return (neuron0x1ae8cb0()*-0.107248);
}

double NNfunction_sb_dLdR::synapse0x1af2570() {
   return (neuron0x1ae8ff0()*-0.695255);
}

double NNfunction_sb_dLdR::synapse0x1af28f0() {
   return (neuron0x1ae4430()*0.386718);
}

double NNfunction_sb_dLdR::synapse0x1af2930() {
   return (neuron0x1ae4770()*0.229248);
}

double NNfunction_sb_dLdR::synapse0x1af2970() {
   return (neuron0x1ae4ab0()*-0.431575);
}

double NNfunction_sb_dLdR::synapse0x1af29b0() {
   return (neuron0x1ae4df0()*-0.77181);
}

double NNfunction_sb_dLdR::synapse0x1af29f0() {
   return (neuron0x1ae5130()*-0.0189463);
}

double NNfunction_sb_dLdR::synapse0x1af2a30() {
   return (neuron0x1ae5470()*-0.130602);
}

double NNfunction_sb_dLdR::synapse0x1af2a70() {
   return (neuron0x1ae57b0()*-0.166819);
}

double NNfunction_sb_dLdR::synapse0x1af2ab0() {
   return (neuron0x1ae5af0()*0.556631);
}

double NNfunction_sb_dLdR::synapse0x1af2af0() {
   return (neuron0x1ae5e30()*-0.215789);
}

double NNfunction_sb_dLdR::synapse0x1af2b30() {
   return (neuron0x1ae6170()*-0.460352);
}

double NNfunction_sb_dLdR::synapse0x1af2b70() {
   return (neuron0x1ae64b0()*0.243139);
}

double NNfunction_sb_dLdR::synapse0x1af2bb0() {
   return (neuron0x1ae67f0()*0.690231);
}

double NNfunction_sb_dLdR::synapse0x1af2bf0() {
   return (neuron0x1ae6b30()*0.535754);
}

double NNfunction_sb_dLdR::synapse0x1af2c30() {
   return (neuron0x1ae6e70()*0.144311);
}

double NNfunction_sb_dLdR::synapse0x1af2c70() {
   return (neuron0x1ae71b0()*-0.180222);
}

double NNfunction_sb_dLdR::synapse0x1af2cb0() {
   return (neuron0x1ae74f0()*0.126476);
}

double NNfunction_sb_dLdR::synapse0x1af2740() {
   return (neuron0x1ae7830()*0.171225);
}

double NNfunction_sb_dLdR::synapse0x1af2780() {
   return (neuron0x1ae7d90()*-0.318784);
}

double NNfunction_sb_dLdR::synapse0x1af2e00() {
   return (neuron0x1ae7fb0()*0.0481922);
}

double NNfunction_sb_dLdR::synapse0x1af2e40() {
   return (neuron0x1ae82f0()*-0.0634606);
}

double NNfunction_sb_dLdR::synapse0x1af2e80() {
   return (neuron0x1ae8630()*-0.125603);
}

double NNfunction_sb_dLdR::synapse0x1af2ec0() {
   return (neuron0x1ae8970()*-0.248745);
}

double NNfunction_sb_dLdR::synapse0x1af2f00() {
   return (neuron0x1ae8cb0()*0.148041);
}

double NNfunction_sb_dLdR::synapse0x1af2f40() {
   return (neuron0x1ae8ff0()*-0.197209);
}

double NNfunction_sb_dLdR::synapse0x1af32c0() {
   return (neuron0x1ae4430()*-0.012688);
}

double NNfunction_sb_dLdR::synapse0x1ae4650() {
   return (neuron0x1ae4770()*0.236843);
}

double NNfunction_sb_dLdR::synapse0x1ae4690() {
   return (neuron0x1ae4ab0()*0.69638);
}

double NNfunction_sb_dLdR::synapse0x1ae4990() {
   return (neuron0x1ae4df0()*0.0764647);
}

double NNfunction_sb_dLdR::synapse0x1ae49d0() {
   return (neuron0x1ae5130()*-0.305616);
}

double NNfunction_sb_dLdR::synapse0x1ae4cd0() {
   return (neuron0x1ae5470()*0.522481);
}

double NNfunction_sb_dLdR::synapse0x1ae4d10() {
   return (neuron0x1ae57b0()*0.377016);
}

double NNfunction_sb_dLdR::synapse0x1ae5010() {
   return (neuron0x1ae5af0()*-0.22406);
}

double NNfunction_sb_dLdR::synapse0x1ae5050() {
   return (neuron0x1ae5e30()*0.135417);
}

double NNfunction_sb_dLdR::synapse0x1ae5350() {
   return (neuron0x1ae6170()*0.441355);
}

double NNfunction_sb_dLdR::synapse0x1ae5390() {
   return (neuron0x1ae64b0()*0.117775);
}

double NNfunction_sb_dLdR::synapse0x1ae5690() {
   return (neuron0x1ae67f0()*0.56401);
}

double NNfunction_sb_dLdR::synapse0x1ae56d0() {
   return (neuron0x1ae6b30()*0.276856);
}

double NNfunction_sb_dLdR::synapse0x1ae59d0() {
   return (neuron0x1ae6e70()*-0.2737);
}

double NNfunction_sb_dLdR::synapse0x1ae5a10() {
   return (neuron0x1ae71b0()*-0.0979706);
}

double NNfunction_sb_dLdR::synapse0x1ae5d10() {
   return (neuron0x1ae74f0()*0.0562334);
}

double NNfunction_sb_dLdR::synapse0x1ae5d50() {
   return (neuron0x1ae7830()*0.484429);
}

double NNfunction_sb_dLdR::synapse0x1ae6050() {
   return (neuron0x1ae7d90()*-0.439763);
}

double NNfunction_sb_dLdR::synapse0x1ae6090() {
   return (neuron0x1ae7fb0()*0.843852);
}

double NNfunction_sb_dLdR::synapse0x1ae6390() {
   return (neuron0x1ae82f0()*0.399781);
}

double NNfunction_sb_dLdR::synapse0x1ae63d0() {
   return (neuron0x1ae8630()*-0.285995);
}

double NNfunction_sb_dLdR::synapse0x1ae66d0() {
   return (neuron0x1ae8970()*-0.169736);
}

double NNfunction_sb_dLdR::synapse0x1ae6710() {
   return (neuron0x1ae8cb0()*0.449679);
}

double NNfunction_sb_dLdR::synapse0x1ae6a10() {
   return (neuron0x1ae8ff0()*0.833442);
}

double NNfunction_sb_dLdR::synapse0x1ae6a50() {
   return (neuron0x1ae4430()*0.0192015);
}

double NNfunction_sb_dLdR::synapse0x1ae7710() {
   return (neuron0x1ae4770()*0.015984);
}

double NNfunction_sb_dLdR::synapse0x1ae7750() {
   return (neuron0x1ae4ab0()*0.0137078);
}

double NNfunction_sb_dLdR::synapse0x1af3110() {
   return (neuron0x1ae4df0()*-0.133147);
}

double NNfunction_sb_dLdR::synapse0x1af3150() {
   return (neuron0x1ae5130()*-0.0150029);
}

double NNfunction_sb_dLdR::synapse0x1ae7a50() {
   return (neuron0x1ae5470()*-0.012106);
}

double NNfunction_sb_dLdR::synapse0x1ae7a90() {
   return (neuron0x1ae57b0()*-0.0148037);
}

double NNfunction_sb_dLdR::synapse0x189f500() {
   return (neuron0x1ae5af0()*0.03929);
}

double NNfunction_sb_dLdR::synapse0x189f540() {
   return (neuron0x1ae5e30()*-0.0276004);
}

double NNfunction_sb_dLdR::synapse0x1ae81d0() {
   return (neuron0x1ae6170()*0.00198702);
}

double NNfunction_sb_dLdR::synapse0x1ae8210() {
   return (neuron0x1ae64b0()*-0.0515186);
}

double NNfunction_sb_dLdR::synapse0x1ae8510() {
   return (neuron0x1ae67f0()*-0.764647);
}

double NNfunction_sb_dLdR::synapse0x1ae8550() {
   return (neuron0x1ae6b30()*0.0203412);
}

double NNfunction_sb_dLdR::synapse0x1ae8850() {
   return (neuron0x1ae6e70()*0.0339042);
}

double NNfunction_sb_dLdR::synapse0x1ae8890() {
   return (neuron0x1ae71b0()*-0.00712559);
}

double NNfunction_sb_dLdR::synapse0x1ae8b90() {
   return (neuron0x1ae74f0()*0.0281242);
}

double NNfunction_sb_dLdR::synapse0x1ae8bd0() {
   return (neuron0x1ae7830()*0.0263002);
}

double NNfunction_sb_dLdR::synapse0x1ae8ed0() {
   return (neuron0x1ae7d90()*0.232701);
}

double NNfunction_sb_dLdR::synapse0x1ae8f10() {
   return (neuron0x1ae7fb0()*0.0410058);
}

double NNfunction_sb_dLdR::synapse0x1ae9210() {
   return (neuron0x1ae82f0()*0.00768171);
}

double NNfunction_sb_dLdR::synapse0x1ae9250() {
   return (neuron0x1ae8630()*-0.0105035);
}

double NNfunction_sb_dLdR::synapse0x1ae6d50() {
   return (neuron0x1ae8970()*0.00494418);
}

double NNfunction_sb_dLdR::synapse0x1ae6d90() {
   return (neuron0x1ae8cb0()*0.05066);
}

double NNfunction_sb_dLdR::synapse0x1af5030() {
   return (neuron0x1ae8ff0()*0.0282657);
}

double NNfunction_sb_dLdR::synapse0x1af53b0() {
   return (neuron0x1ae4430()*0.056005);
}

double NNfunction_sb_dLdR::synapse0x1af53f0() {
   return (neuron0x1ae4770()*-0.0195918);
}

double NNfunction_sb_dLdR::synapse0x1af5430() {
   return (neuron0x1ae4ab0()*0.0766828);
}

double NNfunction_sb_dLdR::synapse0x1af5470() {
   return (neuron0x1ae4df0()*-1.14735);
}

double NNfunction_sb_dLdR::synapse0x1af54b0() {
   return (neuron0x1ae5130()*0.00677267);
}

double NNfunction_sb_dLdR::synapse0x1af54f0() {
   return (neuron0x1ae5470()*0.0169101);
}

double NNfunction_sb_dLdR::synapse0x1af5530() {
   return (neuron0x1ae57b0()*-0.0117224);
}

double NNfunction_sb_dLdR::synapse0x1af5570() {
   return (neuron0x1ae5af0()*-0.0126899);
}

double NNfunction_sb_dLdR::synapse0x1af55b0() {
   return (neuron0x1ae5e30()*0.0415329);
}

double NNfunction_sb_dLdR::synapse0x1af55f0() {
   return (neuron0x1ae6170()*-0.0280281);
}

double NNfunction_sb_dLdR::synapse0x1af5630() {
   return (neuron0x1ae64b0()*0.0314015);
}

double NNfunction_sb_dLdR::synapse0x1af5670() {
   return (neuron0x1ae67f0()*-1.23516);
}

double NNfunction_sb_dLdR::synapse0x1af56b0() {
   return (neuron0x1ae6b30()*0.0749431);
}

double NNfunction_sb_dLdR::synapse0x1af56f0() {
   return (neuron0x1ae6e70()*-0.0235163);
}

double NNfunction_sb_dLdR::synapse0x1af5730() {
   return (neuron0x1ae71b0()*0.014414);
}

double NNfunction_sb_dLdR::synapse0x1af5770() {
   return (neuron0x1ae74f0()*-0.0266929);
}

double NNfunction_sb_dLdR::synapse0x1af5200() {
   return (neuron0x1ae7830()*-0.0222581);
}

double NNfunction_sb_dLdR::synapse0x1af5240() {
   return (neuron0x1ae7d90()*0.196439);
}

double NNfunction_sb_dLdR::synapse0x1af58c0() {
   return (neuron0x1ae7fb0()*0.0173552);
}

double NNfunction_sb_dLdR::synapse0x1af5900() {
   return (neuron0x1ae82f0()*0.0632796);
}

double NNfunction_sb_dLdR::synapse0x1af5940() {
   return (neuron0x1ae8630()*0.0665669);
}

double NNfunction_sb_dLdR::synapse0x1af5980() {
   return (neuron0x1ae8970()*-0.0311971);
}

double NNfunction_sb_dLdR::synapse0x1af59c0() {
   return (neuron0x1ae8cb0()*0.00179046);
}

double NNfunction_sb_dLdR::synapse0x1af5a00() {
   return (neuron0x1ae8ff0()*-0.0120436);
}

double NNfunction_sb_dLdR::synapse0x1af5d80() {
   return (neuron0x1ae4430()*0.0335237);
}

double NNfunction_sb_dLdR::synapse0x1af5dc0() {
   return (neuron0x1ae4770()*-0.00298831);
}

double NNfunction_sb_dLdR::synapse0x1af5e00() {
   return (neuron0x1ae4ab0()*-0.296091);
}

double NNfunction_sb_dLdR::synapse0x1af5e40() {
   return (neuron0x1ae4df0()*2.11197);
}

double NNfunction_sb_dLdR::synapse0x1af5e80() {
   return (neuron0x1ae5130()*-0.0249573);
}

double NNfunction_sb_dLdR::synapse0x1af5ec0() {
   return (neuron0x1ae5470()*-0.0476365);
}

double NNfunction_sb_dLdR::synapse0x1af5f00() {
   return (neuron0x1ae57b0()*-0.0602026);
}

double NNfunction_sb_dLdR::synapse0x1af5f40() {
   return (neuron0x1ae5af0()*-0.0310853);
}

double NNfunction_sb_dLdR::synapse0x1af5f80() {
   return (neuron0x1ae5e30()*0.138242);
}

double NNfunction_sb_dLdR::synapse0x1af5fc0() {
   return (neuron0x1ae6170()*-0.166109);
}

double NNfunction_sb_dLdR::synapse0x1af6000() {
   return (neuron0x1ae64b0()*0.0326955);
}

double NNfunction_sb_dLdR::synapse0x1af6040() {
   return (neuron0x1ae67f0()*0.866713);
}

double NNfunction_sb_dLdR::synapse0x1af6080() {
   return (neuron0x1ae6b30()*-0.0132637);
}

double NNfunction_sb_dLdR::synapse0x1af60c0() {
   return (neuron0x1ae6e70()*-0.125853);
}

double NNfunction_sb_dLdR::synapse0x1af6100() {
   return (neuron0x1ae71b0()*-0.0238066);
}

double NNfunction_sb_dLdR::synapse0x1af6140() {
   return (neuron0x1ae74f0()*-0.0693338);
}

double NNfunction_sb_dLdR::synapse0x1af5bd0() {
   return (neuron0x1ae7830()*0.0182413);
}

double NNfunction_sb_dLdR::synapse0x1af5c10() {
   return (neuron0x1ae7d90()*0.54211);
}

double NNfunction_sb_dLdR::synapse0x1af6290() {
   return (neuron0x1ae7fb0()*-0.056253);
}

double NNfunction_sb_dLdR::synapse0x1af62d0() {
   return (neuron0x1ae82f0()*-0.0821679);
}

double NNfunction_sb_dLdR::synapse0x1af6310() {
   return (neuron0x1ae8630()*0.0698492);
}

double NNfunction_sb_dLdR::synapse0x1af6350() {
   return (neuron0x1ae8970()*-0.0848976);
}

double NNfunction_sb_dLdR::synapse0x1af6390() {
   return (neuron0x1ae8cb0()*-0.0241876);
}

double NNfunction_sb_dLdR::synapse0x1af63d0() {
   return (neuron0x1ae8ff0()*0.0026883);
}

double NNfunction_sb_dLdR::synapse0x1af6750() {
   return (neuron0x1ae4430()*0.169899);
}

double NNfunction_sb_dLdR::synapse0x1af6790() {
   return (neuron0x1ae4770()*-0.0103288);
}

double NNfunction_sb_dLdR::synapse0x1af67d0() {
   return (neuron0x1ae4ab0()*-0.102589);
}

double NNfunction_sb_dLdR::synapse0x1af6810() {
   return (neuron0x1ae4df0()*0.0449102);
}

double NNfunction_sb_dLdR::synapse0x1af6850() {
   return (neuron0x1ae5130()*-0.0260866);
}

double NNfunction_sb_dLdR::synapse0x1af6890() {
   return (neuron0x1ae5470()*-0.0322049);
}

double NNfunction_sb_dLdR::synapse0x1af68d0() {
   return (neuron0x1ae57b0()*0.0128094);
}

double NNfunction_sb_dLdR::synapse0x1af6910() {
   return (neuron0x1ae5af0()*0.177424);
}

double NNfunction_sb_dLdR::synapse0x1af6950() {
   return (neuron0x1ae5e30()*-0.0344791);
}

double NNfunction_sb_dLdR::synapse0x1af6990() {
   return (neuron0x1ae6170()*-0.0598504);
}

double NNfunction_sb_dLdR::synapse0x1af69d0() {
   return (neuron0x1ae64b0()*-0.164834);
}

double NNfunction_sb_dLdR::synapse0x1af6a10() {
   return (neuron0x1ae67f0()*0.790685);
}

double NNfunction_sb_dLdR::synapse0x1af6a50() {
   return (neuron0x1ae6b30()*0.00906084);
}

double NNfunction_sb_dLdR::synapse0x1af6a90() {
   return (neuron0x1ae6e70()*0.00661122);
}

double NNfunction_sb_dLdR::synapse0x1af6ad0() {
   return (neuron0x1ae71b0()*0.00210056);
}

double NNfunction_sb_dLdR::synapse0x1af6b10() {
   return (neuron0x1ae74f0()*-0.0114103);
}

double NNfunction_sb_dLdR::synapse0x1af65a0() {
   return (neuron0x1ae7830()*0.00779549);
}

double NNfunction_sb_dLdR::synapse0x1af65e0() {
   return (neuron0x1ae7d90()*0.161399);
}

double NNfunction_sb_dLdR::synapse0x1af6c60() {
   return (neuron0x1ae7fb0()*0.0359743);
}

double NNfunction_sb_dLdR::synapse0x1af6ca0() {
   return (neuron0x1ae82f0()*0.0417273);
}

double NNfunction_sb_dLdR::synapse0x1af6ce0() {
   return (neuron0x1ae8630()*-0.094995);
}

double NNfunction_sb_dLdR::synapse0x1af6d20() {
   return (neuron0x1ae8970()*-0.0349503);
}

double NNfunction_sb_dLdR::synapse0x1af6d60() {
   return (neuron0x1ae8cb0()*0.0837754);
}

double NNfunction_sb_dLdR::synapse0x1af6da0() {
   return (neuron0x1ae8ff0()*0.0585338);
}

double NNfunction_sb_dLdR::synapse0x1af7120() {
   return (neuron0x1ae4430()*-0.286419);
}

double NNfunction_sb_dLdR::synapse0x1af7160() {
   return (neuron0x1ae4770()*0.43697);
}

double NNfunction_sb_dLdR::synapse0x1af71a0() {
   return (neuron0x1ae4ab0()*-0.502636);
}

double NNfunction_sb_dLdR::synapse0x1af71e0() {
   return (neuron0x1ae4df0()*-0.891758);
}

double NNfunction_sb_dLdR::synapse0x1af7220() {
   return (neuron0x1ae5130()*0.244931);
}

double NNfunction_sb_dLdR::synapse0x1af7260() {
   return (neuron0x1ae5470()*1.08634);
}

double NNfunction_sb_dLdR::synapse0x1af72a0() {
   return (neuron0x1ae57b0()*0.00412862);
}

double NNfunction_sb_dLdR::synapse0x1af72e0() {
   return (neuron0x1ae5af0()*0.315692);
}

double NNfunction_sb_dLdR::synapse0x1af7320() {
   return (neuron0x1ae5e30()*-0.0312079);
}

double NNfunction_sb_dLdR::synapse0x1af7360() {
   return (neuron0x1ae6170()*0.417536);
}

double NNfunction_sb_dLdR::synapse0x1af73a0() {
   return (neuron0x1ae64b0()*0.0637975);
}

double NNfunction_sb_dLdR::synapse0x1af73e0() {
   return (neuron0x1ae67f0()*0.117633);
}

double NNfunction_sb_dLdR::synapse0x1af7420() {
   return (neuron0x1ae6b30()*0.108115);
}

double NNfunction_sb_dLdR::synapse0x1af7460() {
   return (neuron0x1ae6e70()*0.070664);
}

double NNfunction_sb_dLdR::synapse0x1af74a0() {
   return (neuron0x1ae71b0()*-0.18735);
}

double NNfunction_sb_dLdR::synapse0x1af74e0() {
   return (neuron0x1ae74f0()*-0.190631);
}

double NNfunction_sb_dLdR::synapse0x1af6f70() {
   return (neuron0x1ae7830()*-0.329342);
}

double NNfunction_sb_dLdR::synapse0x1af6fb0() {
   return (neuron0x1ae7d90()*-0.983559);
}

double NNfunction_sb_dLdR::synapse0x1af7630() {
   return (neuron0x1ae7fb0()*-0.733535);
}

double NNfunction_sb_dLdR::synapse0x1af7670() {
   return (neuron0x1ae82f0()*0.306674);
}

double NNfunction_sb_dLdR::synapse0x1af76b0() {
   return (neuron0x1ae8630()*-0.406749);
}

double NNfunction_sb_dLdR::synapse0x1af76f0() {
   return (neuron0x1ae8970()*0.350482);
}

double NNfunction_sb_dLdR::synapse0x1af7730() {
   return (neuron0x1ae8cb0()*0.0156908);
}

double NNfunction_sb_dLdR::synapse0x1af7770() {
   return (neuron0x1ae8ff0()*-0.130473);
}

double NNfunction_sb_dLdR::synapse0x1af7af0() {
   return (neuron0x1ae4430()*-0.0441662);
}

double NNfunction_sb_dLdR::synapse0x1af7b30() {
   return (neuron0x1ae4770()*-0.0520506);
}

double NNfunction_sb_dLdR::synapse0x1af7b70() {
   return (neuron0x1ae4ab0()*0.0397677);
}

double NNfunction_sb_dLdR::synapse0x1af7bb0() {
   return (neuron0x1ae4df0()*-0.0811122);
}

double NNfunction_sb_dLdR::synapse0x1af7bf0() {
   return (neuron0x1ae5130()*0.0389127);
}

double NNfunction_sb_dLdR::synapse0x1af7c30() {
   return (neuron0x1ae5470()*0.0313611);
}

double NNfunction_sb_dLdR::synapse0x1af7c70() {
   return (neuron0x1ae57b0()*-0.020702);
}

double NNfunction_sb_dLdR::synapse0x1af7cb0() {
   return (neuron0x1ae5af0()*0.0886742);
}

double NNfunction_sb_dLdR::synapse0x1af7cf0() {
   return (neuron0x1ae5e30()*-0.0870122);
}

double NNfunction_sb_dLdR::synapse0x1aefeb0() {
   return (neuron0x1ae6170()*-0.113477);
}

double NNfunction_sb_dLdR::synapse0x1aefef0() {
   return (neuron0x1ae64b0()*-0.0050992);
}

double NNfunction_sb_dLdR::synapse0x1aeff30() {
   return (neuron0x1ae67f0()*-0.864364);
}

double NNfunction_sb_dLdR::synapse0x1aeff70() {
   return (neuron0x1ae6b30()*0.020667);
}

double NNfunction_sb_dLdR::synapse0x1aeffb0() {
   return (neuron0x1ae6e70()*-0.131453);
}

double NNfunction_sb_dLdR::synapse0x1aefff0() {
   return (neuron0x1ae71b0()*0.0551583);
}

double NNfunction_sb_dLdR::synapse0x1af0030() {
   return (neuron0x1ae74f0()*0.0336027);
}

double NNfunction_sb_dLdR::synapse0x1af7940() {
   return (neuron0x1ae7830()*0.0320736);
}

double NNfunction_sb_dLdR::synapse0x1af7980() {
   return (neuron0x1ae7d90()*-0.367645);
}

double NNfunction_sb_dLdR::synapse0x1af0180() {
   return (neuron0x1ae7fb0()*-0.00976033);
}

double NNfunction_sb_dLdR::synapse0x1af01c0() {
   return (neuron0x1ae82f0()*-0.00610239);
}

double NNfunction_sb_dLdR::synapse0x1af0200() {
   return (neuron0x1ae8630()*0.029698);
}

double NNfunction_sb_dLdR::synapse0x1af0240() {
   return (neuron0x1ae8970()*-0.0980862);
}

double NNfunction_sb_dLdR::synapse0x1af0280() {
   return (neuron0x1ae8cb0()*-0.0499622);
}

double NNfunction_sb_dLdR::synapse0x1af02c0() {
   return (neuron0x1ae8ff0()*-0.0999723);
}

double NNfunction_sb_dLdR::synapse0x1af0640() {
   return (neuron0x1ae4430()*0.540384);
}

double NNfunction_sb_dLdR::synapse0x1af0680() {
   return (neuron0x1ae4770()*-0.0799842);
}

double NNfunction_sb_dLdR::synapse0x1af06c0() {
   return (neuron0x1ae4ab0()*-0.101484);
}

double NNfunction_sb_dLdR::synapse0x1af0700() {
   return (neuron0x1ae4df0()*-0.306574);
}

double NNfunction_sb_dLdR::synapse0x1af0740() {
   return (neuron0x1ae5130()*0.298062);
}

double NNfunction_sb_dLdR::synapse0x1af0780() {
   return (neuron0x1ae5470()*0.583296);
}

double NNfunction_sb_dLdR::synapse0x1af07c0() {
   return (neuron0x1ae57b0()*0.218929);
}

double NNfunction_sb_dLdR::synapse0x1af0800() {
   return (neuron0x1ae5af0()*0.0363348);
}

double NNfunction_sb_dLdR::synapse0x1af0840() {
   return (neuron0x1ae5e30()*-0.0852295);
}

double NNfunction_sb_dLdR::synapse0x1af0880() {
   return (neuron0x1ae6170()*0.887281);
}

double NNfunction_sb_dLdR::synapse0x1af08c0() {
   return (neuron0x1ae64b0()*0.0689415);
}

double NNfunction_sb_dLdR::synapse0x1af0900() {
   return (neuron0x1ae67f0()*-0.512616);
}

double NNfunction_sb_dLdR::synapse0x1af0940() {
   return (neuron0x1ae6b30()*0.269967);
}

double NNfunction_sb_dLdR::synapse0x1af0980() {
   return (neuron0x1ae6e70()*0.178125);
}

double NNfunction_sb_dLdR::synapse0x1af09c0() {
   return (neuron0x1ae71b0()*0.130525);
}

double NNfunction_sb_dLdR::synapse0x1af0a00() {
   return (neuron0x1ae74f0()*-0.0406575);
}

double NNfunction_sb_dLdR::synapse0x1af0490() {
   return (neuron0x1ae7830()*-0.318644);
}

double NNfunction_sb_dLdR::synapse0x1af04d0() {
   return (neuron0x1ae7d90()*0.109054);
}

double NNfunction_sb_dLdR::synapse0x1af0b50() {
   return (neuron0x1ae7fb0()*-0.077085);
}

double NNfunction_sb_dLdR::synapse0x1af0b90() {
   return (neuron0x1ae82f0()*0.200281);
}

double NNfunction_sb_dLdR::synapse0x1af0bd0() {
   return (neuron0x1ae8630()*-0.0765656);
}

double NNfunction_sb_dLdR::synapse0x1af0c10() {
   return (neuron0x1ae8970()*-0.237913);
}

double NNfunction_sb_dLdR::synapse0x1af0c50() {
   return (neuron0x1ae8cb0()*0.0399265);
}

double NNfunction_sb_dLdR::synapse0x1af0c90() {
   return (neuron0x1ae8ff0()*-0.212413);
}

double NNfunction_sb_dLdR::synapse0x1af0e60() {
   return (neuron0x1ae4430()*0.0511318);
}

double NNfunction_sb_dLdR::synapse0x1af9ef0() {
   return (neuron0x1ae4770()*-0.00535882);
}

double NNfunction_sb_dLdR::synapse0x1af9f30() {
   return (neuron0x1ae4ab0()*-0.0846377);
}

double NNfunction_sb_dLdR::synapse0x1af9f70() {
   return (neuron0x1ae4df0()*3.51389);
}

double NNfunction_sb_dLdR::synapse0x1af9fb0() {
   return (neuron0x1ae5130()*-0.0460488);
}

double NNfunction_sb_dLdR::synapse0x1af9ff0() {
   return (neuron0x1ae5470()*0.00599885);
}

double NNfunction_sb_dLdR::synapse0x1afa030() {
   return (neuron0x1ae57b0()*-0.0126011);
}

double NNfunction_sb_dLdR::synapse0x1afa070() {
   return (neuron0x1ae5af0()*0.0136782);
}

double NNfunction_sb_dLdR::synapse0x1afa0b0() {
   return (neuron0x1ae5e30()*0.0673338);
}

double NNfunction_sb_dLdR::synapse0x1afa0f0() {
   return (neuron0x1ae6170()*-0.023434);
}

double NNfunction_sb_dLdR::synapse0x1afa130() {
   return (neuron0x1ae64b0()*0.0332382);
}

double NNfunction_sb_dLdR::synapse0x1afa170() {
   return (neuron0x1ae67f0()*-0.0152947);
}

double NNfunction_sb_dLdR::synapse0x1afa1b0() {
   return (neuron0x1ae6b30()*0.0221148);
}

double NNfunction_sb_dLdR::synapse0x1afa1f0() {
   return (neuron0x1ae6e70()*-0.0333752);
}

double NNfunction_sb_dLdR::synapse0x1afa230() {
   return (neuron0x1ae71b0()*0.00118692);
}

double NNfunction_sb_dLdR::synapse0x1afa270() {
   return (neuron0x1ae74f0()*-0.0617366);
}

double NNfunction_sb_dLdR::synapse0x1af9d40() {
   return (neuron0x1ae7830()*-0.0214464);
}

double NNfunction_sb_dLdR::synapse0x1af9d80() {
   return (neuron0x1ae7d90()*0.406627);
}

double NNfunction_sb_dLdR::synapse0x1afa3c0() {
   return (neuron0x1ae7fb0()*-0.0166176);
}

double NNfunction_sb_dLdR::synapse0x1afa400() {
   return (neuron0x1ae82f0()*0.0226097);
}

double NNfunction_sb_dLdR::synapse0x1afa440() {
   return (neuron0x1ae8630()*0.0471303);
}

double NNfunction_sb_dLdR::synapse0x1afa480() {
   return (neuron0x1ae8970()*-0.0270759);
}

double NNfunction_sb_dLdR::synapse0x1afa4c0() {
   return (neuron0x1ae8cb0()*0.000397787);
}

double NNfunction_sb_dLdR::synapse0x1afa500() {
   return (neuron0x1ae8ff0()*-0.00915496);
}

double NNfunction_sb_dLdR::synapse0x1afa880() {
   return (neuron0x1ae4430()*-0.165175);
}

double NNfunction_sb_dLdR::synapse0x1afa8c0() {
   return (neuron0x1ae4770()*0.12589);
}

double NNfunction_sb_dLdR::synapse0x1afa900() {
   return (neuron0x1ae4ab0()*0.191481);
}

double NNfunction_sb_dLdR::synapse0x1afa940() {
   return (neuron0x1ae4df0()*1.42525);
}

double NNfunction_sb_dLdR::synapse0x1afa980() {
   return (neuron0x1ae5130()*-0.129782);
}

double NNfunction_sb_dLdR::synapse0x1afa9c0() {
   return (neuron0x1ae5470()*-0.121766);
}

double NNfunction_sb_dLdR::synapse0x1afaa00() {
   return (neuron0x1ae57b0()*0.16607);
}

double NNfunction_sb_dLdR::synapse0x1afaa40() {
   return (neuron0x1ae5af0()*0.0777433);
}

double NNfunction_sb_dLdR::synapse0x1afaa80() {
   return (neuron0x1ae5e30()*0.0882747);
}

double NNfunction_sb_dLdR::synapse0x1afaac0() {
   return (neuron0x1ae6170()*-0.0319116);
}

double NNfunction_sb_dLdR::synapse0x1afab00() {
   return (neuron0x1ae64b0()*0.0617583);
}

double NNfunction_sb_dLdR::synapse0x1afab40() {
   return (neuron0x1ae67f0()*-1.50651);
}

double NNfunction_sb_dLdR::synapse0x1afab80() {
   return (neuron0x1ae6b30()*-0.0642386);
}

double NNfunction_sb_dLdR::synapse0x1afabc0() {
   return (neuron0x1ae6e70()*0.0246218);
}

double NNfunction_sb_dLdR::synapse0x1afac00() {
   return (neuron0x1ae71b0()*0.0745431);
}

double NNfunction_sb_dLdR::synapse0x1afac40() {
   return (neuron0x1ae74f0()*-0.0529533);
}

double NNfunction_sb_dLdR::synapse0x1afa6d0() {
   return (neuron0x1ae7830()*0.120082);
}

double NNfunction_sb_dLdR::synapse0x1afa710() {
   return (neuron0x1ae7d90()*-0.270335);
}

double NNfunction_sb_dLdR::synapse0x1afad90() {
   return (neuron0x1ae7fb0()*0.0481503);
}

double NNfunction_sb_dLdR::synapse0x1afadd0() {
   return (neuron0x1ae82f0()*0.00078335);
}

double NNfunction_sb_dLdR::synapse0x1afae10() {
   return (neuron0x1ae8630()*-0.0806442);
}

double NNfunction_sb_dLdR::synapse0x1afae50() {
   return (neuron0x1ae8970()*0.113447);
}

double NNfunction_sb_dLdR::synapse0x1afae90() {
   return (neuron0x1ae8cb0()*-0.168751);
}

double NNfunction_sb_dLdR::synapse0x1afaed0() {
   return (neuron0x1ae8ff0()*0.0846163);
}

double NNfunction_sb_dLdR::synapse0x1afb250() {
   return (neuron0x1ae4430()*-0.188417);
}

double NNfunction_sb_dLdR::synapse0x1afb290() {
   return (neuron0x1ae4770()*-0.536663);
}

double NNfunction_sb_dLdR::synapse0x1afb2d0() {
   return (neuron0x1ae4ab0()*0.267176);
}

double NNfunction_sb_dLdR::synapse0x1afb310() {
   return (neuron0x1ae4df0()*-0.417296);
}

double NNfunction_sb_dLdR::synapse0x1afb350() {
   return (neuron0x1ae5130()*0.288847);
}

double NNfunction_sb_dLdR::synapse0x1afb390() {
   return (neuron0x1ae5470()*0.133229);
}

double NNfunction_sb_dLdR::synapse0x1afb3d0() {
   return (neuron0x1ae57b0()*-0.128437);
}

double NNfunction_sb_dLdR::synapse0x1afb410() {
   return (neuron0x1ae5af0()*0.431759);
}

double NNfunction_sb_dLdR::synapse0x1afb450() {
   return (neuron0x1ae5e30()*-0.0531547);
}

double NNfunction_sb_dLdR::synapse0x1afb490() {
   return (neuron0x1ae6170()*-0.23914);
}

double NNfunction_sb_dLdR::synapse0x1afb4d0() {
   return (neuron0x1ae64b0()*-0.25651);
}

double NNfunction_sb_dLdR::synapse0x1afb510() {
   return (neuron0x1ae67f0()*-0.397457);
}

double NNfunction_sb_dLdR::synapse0x1afb550() {
   return (neuron0x1ae6b30()*0.306871);
}

double NNfunction_sb_dLdR::synapse0x1afb590() {
   return (neuron0x1ae6e70()*-0.402428);
}

double NNfunction_sb_dLdR::synapse0x1afb5d0() {
   return (neuron0x1ae71b0()*-0.00826805);
}

double NNfunction_sb_dLdR::synapse0x1afb610() {
   return (neuron0x1ae74f0()*0.636318);
}

double NNfunction_sb_dLdR::synapse0x1afb0a0() {
   return (neuron0x1ae7830()*-0.236417);
}

double NNfunction_sb_dLdR::synapse0x1afb0e0() {
   return (neuron0x1ae7d90()*-0.291991);
}

double NNfunction_sb_dLdR::synapse0x1afb760() {
   return (neuron0x1ae7fb0()*0.0354876);
}

double NNfunction_sb_dLdR::synapse0x1afb7a0() {
   return (neuron0x1ae82f0()*0.105547);
}

double NNfunction_sb_dLdR::synapse0x1afb7e0() {
   return (neuron0x1ae8630()*-0.160926);
}

double NNfunction_sb_dLdR::synapse0x1afb820() {
   return (neuron0x1ae8970()*-0.22401);
}

double NNfunction_sb_dLdR::synapse0x1afb860() {
   return (neuron0x1ae8cb0()*-0.340424);
}

double NNfunction_sb_dLdR::synapse0x1afb8a0() {
   return (neuron0x1ae8ff0()*-0.0633479);
}

double NNfunction_sb_dLdR::synapse0x1afbc20() {
   return (neuron0x1ae4430()*0.117947);
}

double NNfunction_sb_dLdR::synapse0x1afbc60() {
   return (neuron0x1ae4770()*-0.234996);
}

double NNfunction_sb_dLdR::synapse0x1afbca0() {
   return (neuron0x1ae4ab0()*-0.074317);
}

double NNfunction_sb_dLdR::synapse0x1afbce0() {
   return (neuron0x1ae4df0()*0.428977);
}

double NNfunction_sb_dLdR::synapse0x1afbd20() {
   return (neuron0x1ae5130()*0.373167);
}

double NNfunction_sb_dLdR::synapse0x1afbd60() {
   return (neuron0x1ae5470()*0.176905);
}

double NNfunction_sb_dLdR::synapse0x1afbda0() {
   return (neuron0x1ae57b0()*-0.0102582);
}

double NNfunction_sb_dLdR::synapse0x1afbde0() {
   return (neuron0x1ae5af0()*-0.316683);
}

double NNfunction_sb_dLdR::synapse0x1afbe20() {
   return (neuron0x1ae5e30()*-0.0445465);
}

double NNfunction_sb_dLdR::synapse0x1afbe60() {
   return (neuron0x1ae6170()*-0.0931876);
}

double NNfunction_sb_dLdR::synapse0x1afbea0() {
   return (neuron0x1ae64b0()*-0.0973061);
}

double NNfunction_sb_dLdR::synapse0x1afbee0() {
   return (neuron0x1ae67f0()*-0.144888);
}

double NNfunction_sb_dLdR::synapse0x1afbf20() {
   return (neuron0x1ae6b30()*0.124918);
}

double NNfunction_sb_dLdR::synapse0x1afbf60() {
   return (neuron0x1ae6e70()*-0.217844);
}

double NNfunction_sb_dLdR::synapse0x1afbfa0() {
   return (neuron0x1ae71b0()*-0.519188);
}

double NNfunction_sb_dLdR::synapse0x1afbfe0() {
   return (neuron0x1ae74f0()*0.00114563);
}

double NNfunction_sb_dLdR::synapse0x1afba70() {
   return (neuron0x1ae7830()*0.0722611);
}

double NNfunction_sb_dLdR::synapse0x1afbab0() {
   return (neuron0x1ae7d90()*0.282106);
}

double NNfunction_sb_dLdR::synapse0x1afc130() {
   return (neuron0x1ae7fb0()*-0.56495);
}

double NNfunction_sb_dLdR::synapse0x1afc170() {
   return (neuron0x1ae82f0()*-0.338198);
}

double NNfunction_sb_dLdR::synapse0x1afc1b0() {
   return (neuron0x1ae8630()*0.0368633);
}

double NNfunction_sb_dLdR::synapse0x1afc1f0() {
   return (neuron0x1ae8970()*-0.124265);
}

double NNfunction_sb_dLdR::synapse0x1afc230() {
   return (neuron0x1ae8cb0()*0.43211);
}

double NNfunction_sb_dLdR::synapse0x1afc270() {
   return (neuron0x1ae8ff0()*0.0941823);
}

double NNfunction_sb_dLdR::synapse0x1afc5f0() {
   return (neuron0x1ae4430()*-0.02025);
}

double NNfunction_sb_dLdR::synapse0x1afc630() {
   return (neuron0x1ae4770()*0.00817543);
}

double NNfunction_sb_dLdR::synapse0x1afc670() {
   return (neuron0x1ae4ab0()*0.0119151);
}

double NNfunction_sb_dLdR::synapse0x1afc6b0() {
   return (neuron0x1ae4df0()*10.5916);
}

double NNfunction_sb_dLdR::synapse0x1afc6f0() {
   return (neuron0x1ae5130()*-0.0311828);
}

double NNfunction_sb_dLdR::synapse0x1afc730() {
   return (neuron0x1ae5470()*0.0143188);
}

double NNfunction_sb_dLdR::synapse0x1afc770() {
   return (neuron0x1ae57b0()*0.0229553);
}

double NNfunction_sb_dLdR::synapse0x1afc7b0() {
   return (neuron0x1ae5af0()*-0.00612937);
}

double NNfunction_sb_dLdR::synapse0x1afc7f0() {
   return (neuron0x1ae5e30()*-0.0197541);
}

double NNfunction_sb_dLdR::synapse0x1afc830() {
   return (neuron0x1ae6170()*0.0499479);
}

double NNfunction_sb_dLdR::synapse0x1afc870() {
   return (neuron0x1ae64b0()*-0.00739506);
}

double NNfunction_sb_dLdR::synapse0x1afc8b0() {
   return (neuron0x1ae67f0()*0.309672);
}

double NNfunction_sb_dLdR::synapse0x1afc8f0() {
   return (neuron0x1ae6b30()*-0.00270331);
}

double NNfunction_sb_dLdR::synapse0x1afc930() {
   return (neuron0x1ae6e70()*0.0414158);
}

double NNfunction_sb_dLdR::synapse0x1afc970() {
   return (neuron0x1ae71b0()*0.027306);
}

double NNfunction_sb_dLdR::synapse0x1afc9b0() {
   return (neuron0x1ae74f0()*0.0153515);
}

double NNfunction_sb_dLdR::synapse0x1afc440() {
   return (neuron0x1ae7830()*-0.0247823);
}

double NNfunction_sb_dLdR::synapse0x1afc480() {
   return (neuron0x1ae7d90()*-0.0901445);
}

double NNfunction_sb_dLdR::synapse0x1afcb00() {
   return (neuron0x1ae7fb0()*0.0285987);
}

double NNfunction_sb_dLdR::synapse0x1afcb40() {
   return (neuron0x1ae82f0()*0.00412585);
}

double NNfunction_sb_dLdR::synapse0x1afcb80() {
   return (neuron0x1ae8630()*-0.00861732);
}

double NNfunction_sb_dLdR::synapse0x1afcbc0() {
   return (neuron0x1ae8970()*0.0287116);
}

double NNfunction_sb_dLdR::synapse0x1afcc00() {
   return (neuron0x1ae8cb0()*-0.0335999);
}

double NNfunction_sb_dLdR::synapse0x1afcc40() {
   return (neuron0x1ae8ff0()*-0.00188041);
}

double NNfunction_sb_dLdR::synapse0x1afcfc0() {
   return (neuron0x1ae4430()*-0.0162803);
}

double NNfunction_sb_dLdR::synapse0x1afd000() {
   return (neuron0x1ae4770()*0.0162587);
}

double NNfunction_sb_dLdR::synapse0x1afd040() {
   return (neuron0x1ae4ab0()*0.0130297);
}

double NNfunction_sb_dLdR::synapse0x1afd080() {
   return (neuron0x1ae4df0()*0.019814);
}

double NNfunction_sb_dLdR::synapse0x1afd0c0() {
   return (neuron0x1ae5130()*0.00539865);
}

double NNfunction_sb_dLdR::synapse0x1afd100() {
   return (neuron0x1ae5470()*0.0111157);
}

double NNfunction_sb_dLdR::synapse0x1afd140() {
   return (neuron0x1ae57b0()*-0.0132771);
}

double NNfunction_sb_dLdR::synapse0x1afd180() {
   return (neuron0x1ae5af0()*-0.0183634);
}

double NNfunction_sb_dLdR::synapse0x1afd1c0() {
   return (neuron0x1ae5e30()*-0.00872548);
}

double NNfunction_sb_dLdR::synapse0x1afd200() {
   return (neuron0x1ae6170()*0.00134996);
}

double NNfunction_sb_dLdR::synapse0x1afd240() {
   return (neuron0x1ae64b0()*0.0593958);
}

double NNfunction_sb_dLdR::synapse0x1afd280() {
   return (neuron0x1ae67f0()*0.806871);
}

double NNfunction_sb_dLdR::synapse0x1afd2c0() {
   return (neuron0x1ae6b30()*-0.0130268);
}

double NNfunction_sb_dLdR::synapse0x1afd300() {
   return (neuron0x1ae6e70()*0.00185952);
}

double NNfunction_sb_dLdR::synapse0x1afd340() {
   return (neuron0x1ae71b0()*-0.019192);
}

double NNfunction_sb_dLdR::synapse0x1afd380() {
   return (neuron0x1ae74f0()*-0.00266135);
}

double NNfunction_sb_dLdR::synapse0x1afce10() {
   return (neuron0x1ae7830()*0.0167568);
}

double NNfunction_sb_dLdR::synapse0x1afce50() {
   return (neuron0x1ae7d90()*0.693056);
}

double NNfunction_sb_dLdR::synapse0x1afd4d0() {
   return (neuron0x1ae7fb0()*0.000704338);
}

double NNfunction_sb_dLdR::synapse0x1afd510() {
   return (neuron0x1ae82f0()*-0.0141633);
}

double NNfunction_sb_dLdR::synapse0x1afd550() {
   return (neuron0x1ae8630()*0.0274134);
}

double NNfunction_sb_dLdR::synapse0x1afd590() {
   return (neuron0x1ae8970()*-0.0261918);
}

double NNfunction_sb_dLdR::synapse0x1afd5d0() {
   return (neuron0x1ae8cb0()*-0.0144107);
}

double NNfunction_sb_dLdR::synapse0x1afd610() {
   return (neuron0x1ae8ff0()*-0.0391754);
}

double NNfunction_sb_dLdR::synapse0x1afd990() {
   return (neuron0x1ae4430()*0.362955);
}

double NNfunction_sb_dLdR::synapse0x1afd9d0() {
   return (neuron0x1ae4770()*-0.623416);
}

double NNfunction_sb_dLdR::synapse0x1afda10() {
   return (neuron0x1ae4ab0()*-0.0812857);
}

double NNfunction_sb_dLdR::synapse0x1afda50() {
   return (neuron0x1ae4df0()*0.351903);
}

double NNfunction_sb_dLdR::synapse0x1afda90() {
   return (neuron0x1ae5130()*-0.266923);
}

double NNfunction_sb_dLdR::synapse0x1afdad0() {
   return (neuron0x1ae5470()*0.168791);
}

double NNfunction_sb_dLdR::synapse0x1afdb10() {
   return (neuron0x1ae57b0()*-0.63836);
}

double NNfunction_sb_dLdR::synapse0x1afdb50() {
   return (neuron0x1ae5af0()*-0.283472);
}

double NNfunction_sb_dLdR::synapse0x1afdb90() {
   return (neuron0x1ae5e30()*0.138233);
}

double NNfunction_sb_dLdR::synapse0x1afdbd0() {
   return (neuron0x1ae6170()*0.347723);
}

double NNfunction_sb_dLdR::synapse0x1afdc10() {
   return (neuron0x1ae64b0()*-0.681385);
}

double NNfunction_sb_dLdR::synapse0x1afdc50() {
   return (neuron0x1ae67f0()*-0.0938276);
}

double NNfunction_sb_dLdR::synapse0x1afdc90() {
   return (neuron0x1ae6b30()*-0.103564);
}

double NNfunction_sb_dLdR::synapse0x1afdcd0() {
   return (neuron0x1ae6e70()*-0.0350103);
}

double NNfunction_sb_dLdR::synapse0x1afdd10() {
   return (neuron0x1ae71b0()*-0.0445732);
}

double NNfunction_sb_dLdR::synapse0x1afdd50() {
   return (neuron0x1ae74f0()*-0.240765);
}

double NNfunction_sb_dLdR::synapse0x1afd7e0() {
   return (neuron0x1ae7830()*-0.513704);
}

double NNfunction_sb_dLdR::synapse0x1afd820() {
   return (neuron0x1ae7d90()*-0.12656);
}

double NNfunction_sb_dLdR::synapse0x1afdea0() {
   return (neuron0x1ae7fb0()*-0.447882);
}

double NNfunction_sb_dLdR::synapse0x1afdee0() {
   return (neuron0x1ae82f0()*0.255616);
}

double NNfunction_sb_dLdR::synapse0x1afdf20() {
   return (neuron0x1ae8630()*0.261882);
}

double NNfunction_sb_dLdR::synapse0x1afdf60() {
   return (neuron0x1ae8970()*0.411579);
}

double NNfunction_sb_dLdR::synapse0x1afdfa0() {
   return (neuron0x1ae8cb0()*0.46494);
}

double NNfunction_sb_dLdR::synapse0x1afdfe0() {
   return (neuron0x1ae8ff0()*0.0774877);
}

double NNfunction_sb_dLdR::synapse0x1afe360() {
   return (neuron0x1ae4430()*0.0772015);
}

double NNfunction_sb_dLdR::synapse0x1afe3a0() {
   return (neuron0x1ae4770()*-0.167157);
}

double NNfunction_sb_dLdR::synapse0x1afe3e0() {
   return (neuron0x1ae4ab0()*0.277682);
}

double NNfunction_sb_dLdR::synapse0x1afe420() {
   return (neuron0x1ae4df0()*0.121948);
}

double NNfunction_sb_dLdR::synapse0x1afe460() {
   return (neuron0x1ae5130()*0.0223328);
}

double NNfunction_sb_dLdR::synapse0x1afe4a0() {
   return (neuron0x1ae5470()*-0.00393678);
}

double NNfunction_sb_dLdR::synapse0x1afe4e0() {
   return (neuron0x1ae57b0()*0.00437932);
}

double NNfunction_sb_dLdR::synapse0x1afe520() {
   return (neuron0x1ae5af0()*0.0438786);
}

double NNfunction_sb_dLdR::synapse0x1afe560() {
   return (neuron0x1ae5e30()*0.27406);
}

double NNfunction_sb_dLdR::synapse0x1afe5a0() {
   return (neuron0x1ae6170()*-0.313472);
}

double NNfunction_sb_dLdR::synapse0x1afe5e0() {
   return (neuron0x1ae64b0()*-0.535375);
}

double NNfunction_sb_dLdR::synapse0x1afe620() {
   return (neuron0x1ae67f0()*0.124294);
}

double NNfunction_sb_dLdR::synapse0x1afe660() {
   return (neuron0x1ae6b30()*0.0240874);
}

double NNfunction_sb_dLdR::synapse0x1afe6a0() {
   return (neuron0x1ae6e70()*-0.0797891);
}

double NNfunction_sb_dLdR::synapse0x1afe6e0() {
   return (neuron0x1ae71b0()*0.119874);
}

double NNfunction_sb_dLdR::synapse0x1afe720() {
   return (neuron0x1ae74f0()*0.117293);
}

double NNfunction_sb_dLdR::synapse0x1afe1b0() {
   return (neuron0x1ae7830()*0.0861435);
}

double NNfunction_sb_dLdR::synapse0x1afe1f0() {
   return (neuron0x1ae7d90()*1.16262);
}

double NNfunction_sb_dLdR::synapse0x1afe870() {
   return (neuron0x1ae7fb0()*-0.053467);
}

double NNfunction_sb_dLdR::synapse0x1afe8b0() {
   return (neuron0x1ae82f0()*0.206972);
}

double NNfunction_sb_dLdR::synapse0x1afe8f0() {
   return (neuron0x1ae8630()*-0.0106052);
}

double NNfunction_sb_dLdR::synapse0x1afe930() {
   return (neuron0x1ae8970()*-0.0276225);
}

double NNfunction_sb_dLdR::synapse0x1afe970() {
   return (neuron0x1ae8cb0()*-0.47555);
}

double NNfunction_sb_dLdR::synapse0x1afe9b0() {
   return (neuron0x1ae8ff0()*-0.0141169);
}

double NNfunction_sb_dLdR::synapse0x1afed30() {
   return (neuron0x1ae4430()*-0.4376);
}

double NNfunction_sb_dLdR::synapse0x1af3300() {
   return (neuron0x1ae4770()*-0.185657);
}

double NNfunction_sb_dLdR::synapse0x1af3340() {
   return (neuron0x1ae4ab0()*-0.276816);
}

double NNfunction_sb_dLdR::synapse0x1af3380() {
   return (neuron0x1ae4df0()*-0.488529);
}

double NNfunction_sb_dLdR::synapse0x1af35d0() {
   return (neuron0x1ae5130()*-0.158507);
}

double NNfunction_sb_dLdR::synapse0x1af3610() {
   return (neuron0x1ae5470()*-0.376683);
}

double NNfunction_sb_dLdR::synapse0x1af3650() {
   return (neuron0x1ae57b0()*-0.181959);
}

double NNfunction_sb_dLdR::synapse0x1af38a0() {
   return (neuron0x1ae5af0()*-0.0202633);
}

double NNfunction_sb_dLdR::synapse0x1af38e0() {
   return (neuron0x1ae5e30()*0.019238);
}

double NNfunction_sb_dLdR::synapse0x1af3b30() {
   return (neuron0x1ae6170()*-0.5273);
}

double NNfunction_sb_dLdR::synapse0x1af3b70() {
   return (neuron0x1ae64b0()*-0.357741);
}

double NNfunction_sb_dLdR::synapse0x1af3bb0() {
   return (neuron0x1ae67f0()*1.16018);
}

double NNfunction_sb_dLdR::synapse0x1af3e00() {
   return (neuron0x1ae6b30()*-0.489988);
}

double NNfunction_sb_dLdR::synapse0x1af3e40() {
   return (neuron0x1ae6e70()*-0.186412);
}

double NNfunction_sb_dLdR::synapse0x1af4090() {
   return (neuron0x1ae71b0()*0.27523);
}

double NNfunction_sb_dLdR::synapse0x1af40d0() {
   return (neuron0x1ae74f0()*0.110316);
}

double NNfunction_sb_dLdR::synapse0x1afeb80() {
   return (neuron0x1ae7830()*0.71146);
}

double NNfunction_sb_dLdR::synapse0x1afebc0() {
   return (neuron0x1ae7d90()*0.553288);
}

double NNfunction_sb_dLdR::synapse0x1af4220() {
   return (neuron0x1ae7fb0()*-0.220047);
}

double NNfunction_sb_dLdR::synapse0x1af4730() {
   return (neuron0x1ae82f0()*-0.284183);
}

double NNfunction_sb_dLdR::synapse0x1af4770() {
   return (neuron0x1ae8630()*-0.127584);
}

double NNfunction_sb_dLdR::synapse0x1af47b0() {
   return (neuron0x1ae8970()*0.116854);
}

double NNfunction_sb_dLdR::synapse0x1af4a00() {
   return (neuron0x1ae8cb0()*-0.477102);
}

double NNfunction_sb_dLdR::synapse0x1af4a40() {
   return (neuron0x1ae8ff0()*-0.149923);
}

double NNfunction_sb_dLdR::synapse0x1af42f0() {
   return (neuron0x1ae4430()*0.562152);
}

double NNfunction_sb_dLdR::synapse0x1af4330() {
   return (neuron0x1ae4770()*-0.206854);
}

double NNfunction_sb_dLdR::synapse0x1af4370() {
   return (neuron0x1ae4ab0()*-0.199388);
}

double NNfunction_sb_dLdR::synapse0x1af43b0() {
   return (neuron0x1ae4df0()*0.458808);
}

double NNfunction_sb_dLdR::synapse0x1af4d30() {
   return (neuron0x1ae5130()*0.167392);
}

double NNfunction_sb_dLdR::synapse0x1b01080() {
   return (neuron0x1ae5470()*-0.206532);
}

double NNfunction_sb_dLdR::synapse0x1b010c0() {
   return (neuron0x1ae57b0()*-0.0479899);
}

double NNfunction_sb_dLdR::synapse0x1b01100() {
   return (neuron0x1ae5af0()*-0.329646);
}

double NNfunction_sb_dLdR::synapse0x1b01140() {
   return (neuron0x1ae5e30()*0.343009);
}

double NNfunction_sb_dLdR::synapse0x1b01180() {
   return (neuron0x1ae6170()*-0.0598501);
}

double NNfunction_sb_dLdR::synapse0x1b011c0() {
   return (neuron0x1ae64b0()*0.123526);
}

double NNfunction_sb_dLdR::synapse0x1b01200() {
   return (neuron0x1ae67f0()*0.301514);
}

double NNfunction_sb_dLdR::synapse0x1b01240() {
   return (neuron0x1ae6b30()*0.0768408);
}

double NNfunction_sb_dLdR::synapse0x1b01280() {
   return (neuron0x1ae6e70()*-0.0533729);
}

double NNfunction_sb_dLdR::synapse0x1b012c0() {
   return (neuron0x1ae71b0()*0.14684);
}

double NNfunction_sb_dLdR::synapse0x1b01300() {
   return (neuron0x1ae74f0()*-0.0418603);
}

double NNfunction_sb_dLdR::synapse0x1af4c10() {
   return (neuron0x1ae7830()*-0.213813);
}

double NNfunction_sb_dLdR::synapse0x1af4c50() {
   return (neuron0x1ae7d90()*0.307527);
}

double NNfunction_sb_dLdR::synapse0x1b01450() {
   return (neuron0x1ae7fb0()*-0.134784);
}

double NNfunction_sb_dLdR::synapse0x1b01490() {
   return (neuron0x1ae82f0()*-0.0109376);
}

double NNfunction_sb_dLdR::synapse0x1b014d0() {
   return (neuron0x1ae8630()*0.21936);
}

double NNfunction_sb_dLdR::synapse0x1b01510() {
   return (neuron0x1ae8970()*-0.40614);
}

double NNfunction_sb_dLdR::synapse0x1b01550() {
   return (neuron0x1ae8cb0()*-0.450432);
}

double NNfunction_sb_dLdR::synapse0x1b01590() {
   return (neuron0x1ae8ff0()*0.0623979);
}

double NNfunction_sb_dLdR::synapse0x1b01910() {
   return (neuron0x1ae4430()*-0.00799942);
}

double NNfunction_sb_dLdR::synapse0x1b01950() {
   return (neuron0x1ae4770()*0.00277268);
}

double NNfunction_sb_dLdR::synapse0x1b01990() {
   return (neuron0x1ae4ab0()*0.0354863);
}

double NNfunction_sb_dLdR::synapse0x1b019d0() {
   return (neuron0x1ae4df0()*1.94163);
}

double NNfunction_sb_dLdR::synapse0x1b01a10() {
   return (neuron0x1ae5130()*-0.00311303);
}

double NNfunction_sb_dLdR::synapse0x1b01a50() {
   return (neuron0x1ae5470()*0.00174366);
}

double NNfunction_sb_dLdR::synapse0x1b01a90() {
   return (neuron0x1ae57b0()*0.00632526);
}

double NNfunction_sb_dLdR::synapse0x1b01ad0() {
   return (neuron0x1ae5af0()*0.00706506);
}

double NNfunction_sb_dLdR::synapse0x1b01b10() {
   return (neuron0x1ae5e30()*-0.0234375);
}

double NNfunction_sb_dLdR::synapse0x1b01b50() {
   return (neuron0x1ae6170()*0.00945495);
}

double NNfunction_sb_dLdR::synapse0x1b01b90() {
   return (neuron0x1ae64b0()*0.00575382);
}

double NNfunction_sb_dLdR::synapse0x1b01bd0() {
   return (neuron0x1ae67f0()*-0.310112);
}

double NNfunction_sb_dLdR::synapse0x1b01c10() {
   return (neuron0x1ae6b30()*0.00842909);
}

double NNfunction_sb_dLdR::synapse0x1b01c50() {
   return (neuron0x1ae6e70()*0.0132902);
}

double NNfunction_sb_dLdR::synapse0x1b01c90() {
   return (neuron0x1ae71b0()*0.00699526);
}

double NNfunction_sb_dLdR::synapse0x1b01cd0() {
   return (neuron0x1ae74f0()*0.0184174);
}

double NNfunction_sb_dLdR::synapse0x1b01760() {
   return (neuron0x1ae7830()*-0.00335214);
}

double NNfunction_sb_dLdR::synapse0x1b017a0() {
   return (neuron0x1ae7d90()*-0.264649);
}

double NNfunction_sb_dLdR::synapse0x1b01e20() {
   return (neuron0x1ae7fb0()*0.00392865);
}

double NNfunction_sb_dLdR::synapse0x1b01e60() {
   return (neuron0x1ae82f0()*0.00877548);
}

double NNfunction_sb_dLdR::synapse0x1b01ea0() {
   return (neuron0x1ae8630()*-0.0116325);
}

double NNfunction_sb_dLdR::synapse0x1b01ee0() {
   return (neuron0x1ae8970()*0.000997235);
}

double NNfunction_sb_dLdR::synapse0x1b01f20() {
   return (neuron0x1ae8cb0()*0.00146364);
}

double NNfunction_sb_dLdR::synapse0x1b01f60() {
   return (neuron0x1ae8ff0()*0.0213851);
}

double NNfunction_sb_dLdR::synapse0x1b022e0() {
   return (neuron0x1ae4430()*0.0629096);
}

double NNfunction_sb_dLdR::synapse0x1b02320() {
   return (neuron0x1ae4770()*-0.0444751);
}

double NNfunction_sb_dLdR::synapse0x1b02360() {
   return (neuron0x1ae4ab0()*0.100624);
}

double NNfunction_sb_dLdR::synapse0x1b023a0() {
   return (neuron0x1ae4df0()*-0.409749);
}

double NNfunction_sb_dLdR::synapse0x1b023e0() {
   return (neuron0x1ae5130()*0.12681);
}

double NNfunction_sb_dLdR::synapse0x1b02420() {
   return (neuron0x1ae5470()*0.379159);
}

double NNfunction_sb_dLdR::synapse0x1b02460() {
   return (neuron0x1ae57b0()*-0.0241545);
}

double NNfunction_sb_dLdR::synapse0x1b024a0() {
   return (neuron0x1ae5af0()*0.229445);
}

double NNfunction_sb_dLdR::synapse0x1b024e0() {
   return (neuron0x1ae5e30()*0.236517);
}

double NNfunction_sb_dLdR::synapse0x1b02520() {
   return (neuron0x1ae6170()*0.038113);
}

double NNfunction_sb_dLdR::synapse0x1b02560() {
   return (neuron0x1ae64b0()*0.256651);
}

double NNfunction_sb_dLdR::synapse0x1b025a0() {
   return (neuron0x1ae67f0()*-0.0637639);
}

double NNfunction_sb_dLdR::synapse0x1b025e0() {
   return (neuron0x1ae6b30()*-0.272965);
}

double NNfunction_sb_dLdR::synapse0x1b02620() {
   return (neuron0x1ae6e70()*-0.0943927);
}

double NNfunction_sb_dLdR::synapse0x1b02660() {
   return (neuron0x1ae71b0()*0.0183702);
}

double NNfunction_sb_dLdR::synapse0x1b026a0() {
   return (neuron0x1ae74f0()*0.103636);
}

double NNfunction_sb_dLdR::synapse0x1b02130() {
   return (neuron0x1ae7830()*0.547798);
}

double NNfunction_sb_dLdR::synapse0x1b02170() {
   return (neuron0x1ae7d90()*0.568668);
}

double NNfunction_sb_dLdR::synapse0x1b027f0() {
   return (neuron0x1ae7fb0()*-0.0636273);
}

double NNfunction_sb_dLdR::synapse0x1b02830() {
   return (neuron0x1ae82f0()*-0.192146);
}

double NNfunction_sb_dLdR::synapse0x1b02870() {
   return (neuron0x1ae8630()*0.320941);
}

double NNfunction_sb_dLdR::synapse0x1b028b0() {
   return (neuron0x1ae8970()*-0.337576);
}

double NNfunction_sb_dLdR::synapse0x1b028f0() {
   return (neuron0x1ae8cb0()*-0.149962);
}

double NNfunction_sb_dLdR::synapse0x1b02930() {
   return (neuron0x1ae8ff0()*0.208944);
}

double NNfunction_sb_dLdR::synapse0x1b02cb0() {
   return (neuron0x1ae4430()*0.0234549);
}

double NNfunction_sb_dLdR::synapse0x1b02cf0() {
   return (neuron0x1ae4770()*0.0816496);
}

double NNfunction_sb_dLdR::synapse0x1b02d30() {
   return (neuron0x1ae4ab0()*0.0884823);
}

double NNfunction_sb_dLdR::synapse0x1b02d70() {
   return (neuron0x1ae4df0()*0.912269);
}

double NNfunction_sb_dLdR::synapse0x1b02db0() {
   return (neuron0x1ae5130()*0.168899);
}

double NNfunction_sb_dLdR::synapse0x1b02df0() {
   return (neuron0x1ae5470()*0.0308392);
}

double NNfunction_sb_dLdR::synapse0x1b02e30() {
   return (neuron0x1ae57b0()*0.231611);
}

double NNfunction_sb_dLdR::synapse0x1b02e70() {
   return (neuron0x1ae5af0()*-0.0942791);
}

double NNfunction_sb_dLdR::synapse0x1b02eb0() {
   return (neuron0x1ae5e30()*0.173955);
}

double NNfunction_sb_dLdR::synapse0x1b02ef0() {
   return (neuron0x1ae6170()*0.102429);
}

double NNfunction_sb_dLdR::synapse0x1b02f30() {
   return (neuron0x1ae64b0()*0.111384);
}

double NNfunction_sb_dLdR::synapse0x1b02f70() {
   return (neuron0x1ae67f0()*0.691629);
}

double NNfunction_sb_dLdR::synapse0x1b02fb0() {
   return (neuron0x1ae6b30()*-0.0569292);
}

double NNfunction_sb_dLdR::synapse0x1b02ff0() {
   return (neuron0x1ae6e70()*-0.986572);
}

double NNfunction_sb_dLdR::synapse0x1b03030() {
   return (neuron0x1ae71b0()*-0.304299);
}

double NNfunction_sb_dLdR::synapse0x1b03070() {
   return (neuron0x1ae74f0()*1.31708);
}

double NNfunction_sb_dLdR::synapse0x1b02b00() {
   return (neuron0x1ae7830()*-0.184673);
}

double NNfunction_sb_dLdR::synapse0x1b02b40() {
   return (neuron0x1ae7d90()*-0.303702);
}

double NNfunction_sb_dLdR::synapse0x1b031c0() {
   return (neuron0x1ae7fb0()*-0.0639996);
}

double NNfunction_sb_dLdR::synapse0x1b03200() {
   return (neuron0x1ae82f0()*-0.111298);
}

double NNfunction_sb_dLdR::synapse0x1b03240() {
   return (neuron0x1ae8630()*0.777517);
}

double NNfunction_sb_dLdR::synapse0x1b03280() {
   return (neuron0x1ae8970()*-0.238174);
}

double NNfunction_sb_dLdR::synapse0x1b032c0() {
   return (neuron0x1ae8cb0()*0.22717);
}

double NNfunction_sb_dLdR::synapse0x1b03300() {
   return (neuron0x1ae8ff0()*0.282836);
}

double NNfunction_sb_dLdR::synapse0x1b03680() {
   return (neuron0x1ae4430()*-0.0188876);
}

double NNfunction_sb_dLdR::synapse0x1b036c0() {
   return (neuron0x1ae4770()*-0.0128777);
}

double NNfunction_sb_dLdR::synapse0x1b03700() {
   return (neuron0x1ae4ab0()*-0.0987466);
}

double NNfunction_sb_dLdR::synapse0x1b03740() {
   return (neuron0x1ae4df0()*-0.10879);
}

double NNfunction_sb_dLdR::synapse0x1b03780() {
   return (neuron0x1ae5130()*-0.00974175);
}

double NNfunction_sb_dLdR::synapse0x1b037c0() {
   return (neuron0x1ae5470()*-0.00151135);
}

double NNfunction_sb_dLdR::synapse0x1b03800() {
   return (neuron0x1ae57b0()*0.00798706);
}

double NNfunction_sb_dLdR::synapse0x1b03840() {
   return (neuron0x1ae5af0()*-0.028086);
}

double NNfunction_sb_dLdR::synapse0x1b03880() {
   return (neuron0x1ae5e30()*-0.0369618);
}

double NNfunction_sb_dLdR::synapse0x1b038c0() {
   return (neuron0x1ae6170()*0.0332201);
}

double NNfunction_sb_dLdR::synapse0x1b03900() {
   return (neuron0x1ae64b0()*0.0451908);
}

double NNfunction_sb_dLdR::synapse0x1b03940() {
   return (neuron0x1ae67f0()*0.175211);
}

double NNfunction_sb_dLdR::synapse0x1b03980() {
   return (neuron0x1ae6b30()*0.392429);
}

double NNfunction_sb_dLdR::synapse0x1b039c0() {
   return (neuron0x1ae6e70()*-0.0160332);
}

double NNfunction_sb_dLdR::synapse0x1b03a00() {
   return (neuron0x1ae71b0()*0.344229);
}

double NNfunction_sb_dLdR::synapse0x1b03a40() {
   return (neuron0x1ae74f0()*0.234976);
}

double NNfunction_sb_dLdR::synapse0x1b034d0() {
   return (neuron0x1ae7830()*-0.0755542);
}

double NNfunction_sb_dLdR::synapse0x1b03510() {
   return (neuron0x1ae7d90()*-0.084042);
}

double NNfunction_sb_dLdR::synapse0x1b03b90() {
   return (neuron0x1ae7fb0()*0.192512);
}

double NNfunction_sb_dLdR::synapse0x1b03bd0() {
   return (neuron0x1ae82f0()*-0.00210475);
}

double NNfunction_sb_dLdR::synapse0x1b03c10() {
   return (neuron0x1ae8630()*-0.0331282);
}

double NNfunction_sb_dLdR::synapse0x1b03c50() {
   return (neuron0x1ae8970()*-0.0291002);
}

double NNfunction_sb_dLdR::synapse0x1b03c90() {
   return (neuron0x1ae8cb0()*0.0152123);
}

double NNfunction_sb_dLdR::synapse0x1b03cd0() {
   return (neuron0x1ae8ff0()*-0.0388458);
}

double NNfunction_sb_dLdR::synapse0x1b04050() {
   return (neuron0x1ae4430()*-0.145327);
}

double NNfunction_sb_dLdR::synapse0x1b04090() {
   return (neuron0x1ae4770()*0.0135416);
}

double NNfunction_sb_dLdR::synapse0x1b040d0() {
   return (neuron0x1ae4ab0()*0.0644192);
}

double NNfunction_sb_dLdR::synapse0x1b04110() {
   return (neuron0x1ae4df0()*-0.00096493);
}

double NNfunction_sb_dLdR::synapse0x1b04150() {
   return (neuron0x1ae5130()*-0.0196696);
}

double NNfunction_sb_dLdR::synapse0x1b04190() {
   return (neuron0x1ae5470()*0.0711216);
}

double NNfunction_sb_dLdR::synapse0x1b041d0() {
   return (neuron0x1ae57b0()*-0.0484415);
}

double NNfunction_sb_dLdR::synapse0x1b04210() {
   return (neuron0x1ae5af0()*-0.0370601);
}

double NNfunction_sb_dLdR::synapse0x1b04250() {
   return (neuron0x1ae5e30()*-0.130358);
}

double NNfunction_sb_dLdR::synapse0x1b04290() {
   return (neuron0x1ae6170()*0.0436468);
}

double NNfunction_sb_dLdR::synapse0x1b042d0() {
   return (neuron0x1ae64b0()*0.00723188);
}

double NNfunction_sb_dLdR::synapse0x1b04310() {
   return (neuron0x1ae67f0()*1.35939);
}

double NNfunction_sb_dLdR::synapse0x1b04350() {
   return (neuron0x1ae6b30()*0.0632933);
}

double NNfunction_sb_dLdR::synapse0x1b04390() {
   return (neuron0x1ae6e70()*0.0606759);
}

double NNfunction_sb_dLdR::synapse0x1b043d0() {
   return (neuron0x1ae71b0()*0.0227214);
}

double NNfunction_sb_dLdR::synapse0x1b04410() {
   return (neuron0x1ae74f0()*0.119691);
}

double NNfunction_sb_dLdR::synapse0x1b03ea0() {
   return (neuron0x1ae7830()*0.145915);
}

double NNfunction_sb_dLdR::synapse0x1b03ee0() {
   return (neuron0x1ae7d90()*0.926827);
}

double NNfunction_sb_dLdR::synapse0x1b04560() {
   return (neuron0x1ae7fb0()*0.00703646);
}

double NNfunction_sb_dLdR::synapse0x1b045a0() {
   return (neuron0x1ae82f0()*-0.0477056);
}

double NNfunction_sb_dLdR::synapse0x1b045e0() {
   return (neuron0x1ae8630()*0.0866884);
}

double NNfunction_sb_dLdR::synapse0x1b04620() {
   return (neuron0x1ae8970()*-0.0453828);
}

double NNfunction_sb_dLdR::synapse0x1b04660() {
   return (neuron0x1ae8cb0()*0.00685068);
}

double NNfunction_sb_dLdR::synapse0x1b046a0() {
   return (neuron0x1ae8ff0()*-0.0838557);
}

double NNfunction_sb_dLdR::synapse0x1b04a20() {
   return (neuron0x1ae4430()*0.533953);
}

double NNfunction_sb_dLdR::synapse0x1b04a60() {
   return (neuron0x1ae4770()*0.532705);
}

double NNfunction_sb_dLdR::synapse0x1b04aa0() {
   return (neuron0x1ae4ab0()*-0.30101);
}

double NNfunction_sb_dLdR::synapse0x1b04ae0() {
   return (neuron0x1ae4df0()*0.580191);
}

double NNfunction_sb_dLdR::synapse0x1b04b20() {
   return (neuron0x1ae5130()*0.311305);
}

double NNfunction_sb_dLdR::synapse0x1b04b60() {
   return (neuron0x1ae5470()*0.784606);
}

double NNfunction_sb_dLdR::synapse0x1b04ba0() {
   return (neuron0x1ae57b0()*-0.0770382);
}

double NNfunction_sb_dLdR::synapse0x1b04be0() {
   return (neuron0x1ae5af0()*0.15887);
}

double NNfunction_sb_dLdR::synapse0x1b04c20() {
   return (neuron0x1ae5e30()*-0.290792);
}

double NNfunction_sb_dLdR::synapse0x1b04c60() {
   return (neuron0x1ae6170()*0.0969606);
}

double NNfunction_sb_dLdR::synapse0x1b04ca0() {
   return (neuron0x1ae64b0()*-0.114969);
}

double NNfunction_sb_dLdR::synapse0x1b04ce0() {
   return (neuron0x1ae67f0()*0.191272);
}

double NNfunction_sb_dLdR::synapse0x1b04d20() {
   return (neuron0x1ae6b30()*-0.254022);
}

double NNfunction_sb_dLdR::synapse0x1b04d60() {
   return (neuron0x1ae6e70()*0.0862722);
}

double NNfunction_sb_dLdR::synapse0x1b04da0() {
   return (neuron0x1ae71b0()*-0.131655);
}

double NNfunction_sb_dLdR::synapse0x1b04de0() {
   return (neuron0x1ae74f0()*-0.177463);
}

double NNfunction_sb_dLdR::synapse0x1b04870() {
   return (neuron0x1ae7830()*-0.127518);
}

double NNfunction_sb_dLdR::synapse0x1b048b0() {
   return (neuron0x1ae7d90()*0.266627);
}

double NNfunction_sb_dLdR::synapse0x1b04f30() {
   return (neuron0x1ae7fb0()*0.0379919);
}

double NNfunction_sb_dLdR::synapse0x1b04f70() {
   return (neuron0x1ae82f0()*0.0107223);
}

double NNfunction_sb_dLdR::synapse0x1b04fb0() {
   return (neuron0x1ae8630()*0.0371092);
}

double NNfunction_sb_dLdR::synapse0x1b04ff0() {
   return (neuron0x1ae8970()*0.0339323);
}

double NNfunction_sb_dLdR::synapse0x1b05030() {
   return (neuron0x1ae8cb0()*-0.327379);
}

double NNfunction_sb_dLdR::synapse0x1b05070() {
   return (neuron0x1ae8ff0()*-0.518856);
}

double NNfunction_sb_dLdR::synapse0x1b053f0() {
   return (neuron0x1ae4430()*0.555919);
}

double NNfunction_sb_dLdR::synapse0x1b05430() {
   return (neuron0x1ae4770()*0.126116);
}

double NNfunction_sb_dLdR::synapse0x1b05470() {
   return (neuron0x1ae4ab0()*0.0377671);
}

double NNfunction_sb_dLdR::synapse0x1b054b0() {
   return (neuron0x1ae4df0()*0.739125);
}

double NNfunction_sb_dLdR::synapse0x1b054f0() {
   return (neuron0x1ae5130()*0.100036);
}

double NNfunction_sb_dLdR::synapse0x1b05530() {
   return (neuron0x1ae5470()*-0.18375);
}

double NNfunction_sb_dLdR::synapse0x1b05570() {
   return (neuron0x1ae57b0()*-0.0598072);
}

double NNfunction_sb_dLdR::synapse0x1b055b0() {
   return (neuron0x1ae5af0()*0.629441);
}

double NNfunction_sb_dLdR::synapse0x1b055f0() {
   return (neuron0x1ae5e30()*0.00882934);
}

double NNfunction_sb_dLdR::synapse0x1b05630() {
   return (neuron0x1ae6170()*-0.170464);
}

double NNfunction_sb_dLdR::synapse0x1b05670() {
   return (neuron0x1ae64b0()*-0.19583);
}

double NNfunction_sb_dLdR::synapse0x1b056b0() {
   return (neuron0x1ae67f0()*0.427691);
}

double NNfunction_sb_dLdR::synapse0x1b056f0() {
   return (neuron0x1ae6b30()*0.398567);
}

double NNfunction_sb_dLdR::synapse0x1b05730() {
   return (neuron0x1ae6e70()*-0.0323736);
}

double NNfunction_sb_dLdR::synapse0x1b05770() {
   return (neuron0x1ae71b0()*-0.0505899);
}

double NNfunction_sb_dLdR::synapse0x1b057b0() {
   return (neuron0x1ae74f0()*-0.040457);
}

double NNfunction_sb_dLdR::synapse0x1b05240() {
   return (neuron0x1ae7830()*0.0773685);
}

double NNfunction_sb_dLdR::synapse0x1b05280() {
   return (neuron0x1ae7d90()*0.196663);
}

double NNfunction_sb_dLdR::synapse0x1b05900() {
   return (neuron0x1ae7fb0()*0.0135514);
}

double NNfunction_sb_dLdR::synapse0x1b05940() {
   return (neuron0x1ae82f0()*0.0645272);
}

double NNfunction_sb_dLdR::synapse0x1b05980() {
   return (neuron0x1ae8630()*-0.170391);
}

double NNfunction_sb_dLdR::synapse0x1b059c0() {
   return (neuron0x1ae8970()*-0.0155854);
}

double NNfunction_sb_dLdR::synapse0x1b05a00() {
   return (neuron0x1ae8cb0()*0.118399);
}

double NNfunction_sb_dLdR::synapse0x1b05a40() {
   return (neuron0x1ae8ff0()*0.15674);
}

double NNfunction_sb_dLdR::synapse0x1aee4f0() {
   return (neuron0x1ae4430()*-0.395976);
}

double NNfunction_sb_dLdR::synapse0x1aee530() {
   return (neuron0x1ae4770()*0.423149);
}

double NNfunction_sb_dLdR::synapse0x1aee570() {
   return (neuron0x1ae4ab0()*0.261491);
}

double NNfunction_sb_dLdR::synapse0x1aee5b0() {
   return (neuron0x1ae4df0()*0.0704685);
}

double NNfunction_sb_dLdR::synapse0x1aee5f0() {
   return (neuron0x1ae5130()*0.142961);
}

double NNfunction_sb_dLdR::synapse0x1aee630() {
   return (neuron0x1ae5470()*-0.234698);
}

double NNfunction_sb_dLdR::synapse0x1aee670() {
   return (neuron0x1ae57b0()*-0.170949);
}

double NNfunction_sb_dLdR::synapse0x1aee6b0() {
   return (neuron0x1ae5af0()*-0.399735);
}

double NNfunction_sb_dLdR::synapse0x1b061d0() {
   return (neuron0x1ae5e30()*0.430484);
}

double NNfunction_sb_dLdR::synapse0x1b06210() {
   return (neuron0x1ae6170()*-0.268059);
}

double NNfunction_sb_dLdR::synapse0x1b06250() {
   return (neuron0x1ae64b0()*0.318173);
}

double NNfunction_sb_dLdR::synapse0x1b06290() {
   return (neuron0x1ae67f0()*-0.37851);
}

double NNfunction_sb_dLdR::synapse0x1b062d0() {
   return (neuron0x1ae6b30()*0.0590384);
}

double NNfunction_sb_dLdR::synapse0x1b06310() {
   return (neuron0x1ae6e70()*0.451337);
}

double NNfunction_sb_dLdR::synapse0x1b06350() {
   return (neuron0x1ae71b0()*-0.925457);
}

double NNfunction_sb_dLdR::synapse0x1b06390() {
   return (neuron0x1ae74f0()*-0.674686);
}

double NNfunction_sb_dLdR::synapse0x1b05c10() {
   return (neuron0x1ae7830()*0.201199);
}

double NNfunction_sb_dLdR::synapse0x1b05c50() {
   return (neuron0x1ae7d90()*-0.122868);
}

double NNfunction_sb_dLdR::synapse0x1b064e0() {
   return (neuron0x1ae7fb0()*0.52363);
}

double NNfunction_sb_dLdR::synapse0x1b06520() {
   return (neuron0x1ae82f0()*-0.140105);
}

double NNfunction_sb_dLdR::synapse0x1b06560() {
   return (neuron0x1ae8630()*-0.364698);
}

double NNfunction_sb_dLdR::synapse0x1b065a0() {
   return (neuron0x1ae8970()*0.466588);
}

double NNfunction_sb_dLdR::synapse0x1b065e0() {
   return (neuron0x1ae8cb0()*0.00901513);
}

double NNfunction_sb_dLdR::synapse0x1b06620() {
   return (neuron0x1ae8ff0()*-0.0734847);
}

double NNfunction_sb_dLdR::synapse0x1b069a0() {
   return (neuron0x1ae4430()*-0.0670992);
}

double NNfunction_sb_dLdR::synapse0x1b069e0() {
   return (neuron0x1ae4770()*-0.0564821);
}

double NNfunction_sb_dLdR::synapse0x1b06a20() {
   return (neuron0x1ae4ab0()*-0.161501);
}

double NNfunction_sb_dLdR::synapse0x1b06a60() {
   return (neuron0x1ae4df0()*1.52875);
}

double NNfunction_sb_dLdR::synapse0x1b06aa0() {
   return (neuron0x1ae5130()*-0.11225);
}

double NNfunction_sb_dLdR::synapse0x1b06ae0() {
   return (neuron0x1ae5470()*-0.210657);
}

double NNfunction_sb_dLdR::synapse0x1b06b20() {
   return (neuron0x1ae57b0()*0.0486785);
}

double NNfunction_sb_dLdR::synapse0x1b06b60() {
   return (neuron0x1ae5af0()*0.376981);
}

double NNfunction_sb_dLdR::synapse0x1b06ba0() {
   return (neuron0x1ae5e30()*0.172997);
}

double NNfunction_sb_dLdR::synapse0x1b06be0() {
   return (neuron0x1ae6170()*-0.15378);
}

double NNfunction_sb_dLdR::synapse0x1b06c20() {
   return (neuron0x1ae64b0()*-0.129701);
}

double NNfunction_sb_dLdR::synapse0x1b06c60() {
   return (neuron0x1ae67f0()*-0.000420586);
}

double NNfunction_sb_dLdR::synapse0x1b06ca0() {
   return (neuron0x1ae6b30()*-0.0299239);
}

double NNfunction_sb_dLdR::synapse0x1b06ce0() {
   return (neuron0x1ae6e70()*0.140085);
}

double NNfunction_sb_dLdR::synapse0x1b06d20() {
   return (neuron0x1ae71b0()*-0.183989);
}

double NNfunction_sb_dLdR::synapse0x1b06d60() {
   return (neuron0x1ae74f0()*0.241605);
}

double NNfunction_sb_dLdR::synapse0x1b067f0() {
   return (neuron0x1ae7830()*-0.0129638);
}

double NNfunction_sb_dLdR::synapse0x1b06830() {
   return (neuron0x1ae7d90()*1.16493);
}

double NNfunction_sb_dLdR::synapse0x1b06eb0() {
   return (neuron0x1ae7fb0()*0.0130487);
}

double NNfunction_sb_dLdR::synapse0x1b06ef0() {
   return (neuron0x1ae82f0()*-0.0611277);
}

double NNfunction_sb_dLdR::synapse0x1b06f30() {
   return (neuron0x1ae8630()*0.221551);
}

double NNfunction_sb_dLdR::synapse0x1b06f70() {
   return (neuron0x1ae8970()*-0.148608);
}

double NNfunction_sb_dLdR::synapse0x1b06fb0() {
   return (neuron0x1ae8cb0()*-0.0535747);
}

double NNfunction_sb_dLdR::synapse0x1b06ff0() {
   return (neuron0x1ae8ff0()*0.0698911);
}

double NNfunction_sb_dLdR::synapse0x1b07370() {
   return (neuron0x1ae4430()*-0.236599);
}

double NNfunction_sb_dLdR::synapse0x1b073b0() {
   return (neuron0x1ae4770()*0.187463);
}

double NNfunction_sb_dLdR::synapse0x1b073f0() {
   return (neuron0x1ae4ab0()*-0.252381);
}

double NNfunction_sb_dLdR::synapse0x1b07430() {
   return (neuron0x1ae4df0()*-0.504367);
}

double NNfunction_sb_dLdR::synapse0x1b07470() {
   return (neuron0x1ae5130()*0.0643255);
}

double NNfunction_sb_dLdR::synapse0x1b074b0() {
   return (neuron0x1ae5470()*-0.189308);
}

double NNfunction_sb_dLdR::synapse0x1b074f0() {
   return (neuron0x1ae57b0()*-0.303976);
}

double NNfunction_sb_dLdR::synapse0x1b07530() {
   return (neuron0x1ae5af0()*0.123833);
}

double NNfunction_sb_dLdR::synapse0x1b07570() {
   return (neuron0x1ae5e30()*-0.13252);
}

double NNfunction_sb_dLdR::synapse0x1b075b0() {
   return (neuron0x1ae6170()*0.0233304);
}

double NNfunction_sb_dLdR::synapse0x1b075f0() {
   return (neuron0x1ae64b0()*0.261266);
}

double NNfunction_sb_dLdR::synapse0x1b07630() {
   return (neuron0x1ae67f0()*0.374267);
}

double NNfunction_sb_dLdR::synapse0x1b07670() {
   return (neuron0x1ae6b30()*-0.240654);
}

double NNfunction_sb_dLdR::synapse0x1b076b0() {
   return (neuron0x1ae6e70()*0.247592);
}

double NNfunction_sb_dLdR::synapse0x1b076f0() {
   return (neuron0x1ae71b0()*-0.261896);
}

double NNfunction_sb_dLdR::synapse0x1b07730() {
   return (neuron0x1ae74f0()*-0.111392);
}

double NNfunction_sb_dLdR::synapse0x1b071c0() {
   return (neuron0x1ae7830()*0.3618);
}

double NNfunction_sb_dLdR::synapse0x1b07200() {
   return (neuron0x1ae7d90()*-0.338732);
}

double NNfunction_sb_dLdR::synapse0x1af7d30() {
   return (neuron0x1ae7fb0()*0.0147966);
}

double NNfunction_sb_dLdR::synapse0x1af7d70() {
   return (neuron0x1ae82f0()*-0.272911);
}

double NNfunction_sb_dLdR::synapse0x1af7db0() {
   return (neuron0x1ae8630()*-0.0487341);
}

double NNfunction_sb_dLdR::synapse0x1af7df0() {
   return (neuron0x1ae8970()*-0.374846);
}

double NNfunction_sb_dLdR::synapse0x1af7e30() {
   return (neuron0x1ae8cb0()*0.206282);
}

double NNfunction_sb_dLdR::synapse0x1af7e70() {
   return (neuron0x1ae8ff0()*-0.263016);
}

double NNfunction_sb_dLdR::synapse0x1af81f0() {
   return (neuron0x1ae4430()*-0.00426339);
}

double NNfunction_sb_dLdR::synapse0x1af8230() {
   return (neuron0x1ae4770()*-0.00266195);
}

double NNfunction_sb_dLdR::synapse0x1af8270() {
   return (neuron0x1ae4ab0()*-0.0667828);
}

double NNfunction_sb_dLdR::synapse0x1af82b0() {
   return (neuron0x1ae4df0()*-1.84599);
}

double NNfunction_sb_dLdR::synapse0x1af82f0() {
   return (neuron0x1ae5130()*0.00989437);
}

double NNfunction_sb_dLdR::synapse0x1af8330() {
   return (neuron0x1ae5470()*-0.00589805);
}

double NNfunction_sb_dLdR::synapse0x1af8370() {
   return (neuron0x1ae57b0()*-0.00880798);
}

double NNfunction_sb_dLdR::synapse0x1af83b0() {
   return (neuron0x1ae5af0()*-0.0187852);
}

double NNfunction_sb_dLdR::synapse0x1af83f0() {
   return (neuron0x1ae5e30()*0.0153533);
}

double NNfunction_sb_dLdR::synapse0x1af8430() {
   return (neuron0x1ae6170()*-0.024426);
}

double NNfunction_sb_dLdR::synapse0x1af8470() {
   return (neuron0x1ae64b0()*0.0027502);
}

double NNfunction_sb_dLdR::synapse0x1af84b0() {
   return (neuron0x1ae67f0()*-0.115399);
}

double NNfunction_sb_dLdR::synapse0x1af84f0() {
   return (neuron0x1ae6b30()*-0.00652006);
}

double NNfunction_sb_dLdR::synapse0x1af8530() {
   return (neuron0x1ae6e70()*-0.0255402);
}

double NNfunction_sb_dLdR::synapse0x1af8570() {
   return (neuron0x1ae71b0()*1.87448e-05);
}

double NNfunction_sb_dLdR::synapse0x1af85b0() {
   return (neuron0x1ae74f0()*-0.00543178);
}

double NNfunction_sb_dLdR::synapse0x1af8040() {
   return (neuron0x1ae7830()*-6.25117e-05);
}

double NNfunction_sb_dLdR::synapse0x1af8080() {
   return (neuron0x1ae7d90()*-0.0893162);
}

double NNfunction_sb_dLdR::synapse0x1af8700() {
   return (neuron0x1ae7fb0()*-0.000529834);
}

double NNfunction_sb_dLdR::synapse0x1af8740() {
   return (neuron0x1ae82f0()*-0.010462);
}

double NNfunction_sb_dLdR::synapse0x1af8780() {
   return (neuron0x1ae8630()*0.00585386);
}

double NNfunction_sb_dLdR::synapse0x1af87c0() {
   return (neuron0x1ae8970()*-0.0122726);
}

double NNfunction_sb_dLdR::synapse0x1af8800() {
   return (neuron0x1ae8cb0()*-0.0013886);
}

double NNfunction_sb_dLdR::synapse0x1af8840() {
   return (neuron0x1ae8ff0()*-0.00642598);
}

double NNfunction_sb_dLdR::synapse0x1af8bc0() {
   return (neuron0x1ae4430()*-0.307528);
}

double NNfunction_sb_dLdR::synapse0x1af8c00() {
   return (neuron0x1ae4770()*0.542637);
}

double NNfunction_sb_dLdR::synapse0x1af8c40() {
   return (neuron0x1ae4ab0()*0.204849);
}

double NNfunction_sb_dLdR::synapse0x1af8c80() {
   return (neuron0x1ae4df0()*0.00887626);
}

double NNfunction_sb_dLdR::synapse0x1af8cc0() {
   return (neuron0x1ae5130()*0.25805);
}

double NNfunction_sb_dLdR::synapse0x1af8d00() {
   return (neuron0x1ae5470()*0.0278019);
}

double NNfunction_sb_dLdR::synapse0x1af8d40() {
   return (neuron0x1ae57b0()*0.368868);
}

double NNfunction_sb_dLdR::synapse0x1af8d80() {
   return (neuron0x1ae5af0()*0.268852);
}

double NNfunction_sb_dLdR::synapse0x1af8dc0() {
   return (neuron0x1ae5e30()*-0.120986);
}

double NNfunction_sb_dLdR::synapse0x1af8e00() {
   return (neuron0x1ae6170()*-0.302928);
}

double NNfunction_sb_dLdR::synapse0x1af8e40() {
   return (neuron0x1ae64b0()*-0.678089);
}

double NNfunction_sb_dLdR::synapse0x1af8e80() {
   return (neuron0x1ae67f0()*-0.12024);
}

double NNfunction_sb_dLdR::synapse0x1af8ec0() {
   return (neuron0x1ae6b30()*-0.176296);
}

double NNfunction_sb_dLdR::synapse0x1af8f00() {
   return (neuron0x1ae6e70()*-0.750003);
}

double NNfunction_sb_dLdR::synapse0x1af8f40() {
   return (neuron0x1ae71b0()*0.195014);
}

double NNfunction_sb_dLdR::synapse0x1af8f80() {
   return (neuron0x1ae74f0()*0.759679);
}

double NNfunction_sb_dLdR::synapse0x1af8a10() {
   return (neuron0x1ae7830()*0.299562);
}

double NNfunction_sb_dLdR::synapse0x1af8a50() {
   return (neuron0x1ae7d90()*0.516531);
}

double NNfunction_sb_dLdR::synapse0x1af90d0() {
   return (neuron0x1ae7fb0()*0.234084);
}

double NNfunction_sb_dLdR::synapse0x1af9110() {
   return (neuron0x1ae82f0()*0.143557);
}

double NNfunction_sb_dLdR::synapse0x1af9150() {
   return (neuron0x1ae8630()*-0.0172189);
}

double NNfunction_sb_dLdR::synapse0x1af9190() {
   return (neuron0x1ae8970()*-0.171492);
}

double NNfunction_sb_dLdR::synapse0x1af91d0() {
   return (neuron0x1ae8cb0()*0.417336);
}

double NNfunction_sb_dLdR::synapse0x1af9210() {
   return (neuron0x1ae8ff0()*0.345361);
}

double NNfunction_sb_dLdR::synapse0x1af9590() {
   return (neuron0x1ae4430()*-0.00363176);
}

double NNfunction_sb_dLdR::synapse0x1af95d0() {
   return (neuron0x1ae4770()*-0.00266204);
}

double NNfunction_sb_dLdR::synapse0x1af9610() {
   return (neuron0x1ae4ab0()*0.0120133);
}

double NNfunction_sb_dLdR::synapse0x1af9650() {
   return (neuron0x1ae4df0()*0.103117);
}

double NNfunction_sb_dLdR::synapse0x1af9690() {
   return (neuron0x1ae5130()*0.000633061);
}

double NNfunction_sb_dLdR::synapse0x1af96d0() {
   return (neuron0x1ae5470()*0.0043196);
}

double NNfunction_sb_dLdR::synapse0x1af9710() {
   return (neuron0x1ae57b0()*-0.00204799);
}

double NNfunction_sb_dLdR::synapse0x1af9750() {
   return (neuron0x1ae5af0()*-0.00228167);
}

double NNfunction_sb_dLdR::synapse0x1af9790() {
   return (neuron0x1ae5e30()*-0.00857266);
}

double NNfunction_sb_dLdR::synapse0x1af97d0() {
   return (neuron0x1ae6170()*0.0028442);
}

double NNfunction_sb_dLdR::synapse0x1af9810() {
   return (neuron0x1ae64b0()*-0.00890266);
}

double NNfunction_sb_dLdR::synapse0x1af9850() {
   return (neuron0x1ae67f0()*0.389963);
}

double NNfunction_sb_dLdR::synapse0x1af9890() {
   return (neuron0x1ae6b30()*0.00401038);
}

double NNfunction_sb_dLdR::synapse0x1af98d0() {
   return (neuron0x1ae6e70()*0.013809);
}

double NNfunction_sb_dLdR::synapse0x1af9910() {
   return (neuron0x1ae71b0()*0.0195701);
}

double NNfunction_sb_dLdR::synapse0x1af9950() {
   return (neuron0x1ae74f0()*0.0157906);
}

double NNfunction_sb_dLdR::synapse0x1af93e0() {
   return (neuron0x1ae7830()*-0.000896279);
}

double NNfunction_sb_dLdR::synapse0x1af9420() {
   return (neuron0x1ae7d90()*-0.524721);
}

double NNfunction_sb_dLdR::synapse0x1af9aa0() {
   return (neuron0x1ae7fb0()*0.00783855);
}

double NNfunction_sb_dLdR::synapse0x1af9ae0() {
   return (neuron0x1ae82f0()*-0.00590829);
}

double NNfunction_sb_dLdR::synapse0x1af9b20() {
   return (neuron0x1ae8630()*-0.000305983);
}

double NNfunction_sb_dLdR::synapse0x1af9b60() {
   return (neuron0x1ae8970()*0.00428728);
}

double NNfunction_sb_dLdR::synapse0x1af9ba0() {
   return (neuron0x1ae8cb0()*-0.00427743);
}

double NNfunction_sb_dLdR::synapse0x1af9be0() {
   return (neuron0x1ae8ff0()*-0.0106851);
}

double NNfunction_sb_dLdR::synapse0x1b0bab0() {
   return (neuron0x1ae4430()*0.282582);
}

double NNfunction_sb_dLdR::synapse0x1b0baf0() {
   return (neuron0x1ae4770()*-0.0390262);
}

double NNfunction_sb_dLdR::synapse0x1b0bb30() {
   return (neuron0x1ae4ab0()*-0.209381);
}

double NNfunction_sb_dLdR::synapse0x1b0bb70() {
   return (neuron0x1ae4df0()*-0.512475);
}

double NNfunction_sb_dLdR::synapse0x1b0bbb0() {
   return (neuron0x1ae5130()*0.508573);
}

double NNfunction_sb_dLdR::synapse0x1b0bbf0() {
   return (neuron0x1ae5470()*-0.1289);
}

double NNfunction_sb_dLdR::synapse0x1b0bc30() {
   return (neuron0x1ae57b0()*0.390546);
}

double NNfunction_sb_dLdR::synapse0x1b0bc70() {
   return (neuron0x1ae5af0()*-0.528098);
}

double NNfunction_sb_dLdR::synapse0x1b0bcb0() {
   return (neuron0x1ae5e30()*0.0551971);
}

double NNfunction_sb_dLdR::synapse0x1b0bcf0() {
   return (neuron0x1ae6170()*-0.0924335);
}

double NNfunction_sb_dLdR::synapse0x1b0bd30() {
   return (neuron0x1ae64b0()*0.316759);
}

double NNfunction_sb_dLdR::synapse0x1b0bd70() {
   return (neuron0x1ae67f0()*-0.193506);
}

double NNfunction_sb_dLdR::synapse0x1b0bdb0() {
   return (neuron0x1ae6b30()*0.210946);
}

double NNfunction_sb_dLdR::synapse0x1b0bdf0() {
   return (neuron0x1ae6e70()*-0.0761788);
}

double NNfunction_sb_dLdR::synapse0x1b0be30() {
   return (neuron0x1ae71b0()*-0.121903);
}

double NNfunction_sb_dLdR::synapse0x1b0be70() {
   return (neuron0x1ae74f0()*-0.21949);
}

double NNfunction_sb_dLdR::synapse0x1af9c20() {
   return (neuron0x1ae7830()*-0.0395887);
}

double NNfunction_sb_dLdR::synapse0x1af9c60() {
   return (neuron0x1ae7d90()*0.169988);
}

double NNfunction_sb_dLdR::synapse0x1b0bfc0() {
   return (neuron0x1ae7fb0()*-0.288059);
}

double NNfunction_sb_dLdR::synapse0x1b0c000() {
   return (neuron0x1ae82f0()*-0.326992);
}

double NNfunction_sb_dLdR::synapse0x1b0c040() {
   return (neuron0x1ae8630()*-0.654548);
}

double NNfunction_sb_dLdR::synapse0x1b0c080() {
   return (neuron0x1ae8970()*-0.0111846);
}

double NNfunction_sb_dLdR::synapse0x1b0c0c0() {
   return (neuron0x1ae8cb0()*-0.128021);
}

double NNfunction_sb_dLdR::synapse0x1b0c100() {
   return (neuron0x1ae8ff0()*0.239234);
}

double NNfunction_sb_dLdR::synapse0x1b0c480() {
   return (neuron0x1ae4430()*0.0132366);
}

double NNfunction_sb_dLdR::synapse0x1b0c4c0() {
   return (neuron0x1ae4770()*0.0053449);
}

double NNfunction_sb_dLdR::synapse0x1b0c500() {
   return (neuron0x1ae4ab0()*0.018238);
}

double NNfunction_sb_dLdR::synapse0x1b0c540() {
   return (neuron0x1ae4df0()*-0.061028);
}

double NNfunction_sb_dLdR::synapse0x1b0c580() {
   return (neuron0x1ae5130()*0.00143521);
}

double NNfunction_sb_dLdR::synapse0x1b0c5c0() {
   return (neuron0x1ae5470()*0.00978057);
}

double NNfunction_sb_dLdR::synapse0x1b0c600() {
   return (neuron0x1ae57b0()*0.0334071);
}

double NNfunction_sb_dLdR::synapse0x1b0c640() {
   return (neuron0x1ae5af0()*0.0341289);
}

double NNfunction_sb_dLdR::synapse0x1b0c680() {
   return (neuron0x1ae5e30()*-0.0448857);
}

double NNfunction_sb_dLdR::synapse0x1b0c6c0() {
   return (neuron0x1ae6170()*-0.0274342);
}

double NNfunction_sb_dLdR::synapse0x1b0c700() {
   return (neuron0x1ae64b0()*0.00868033);
}

double NNfunction_sb_dLdR::synapse0x1b0c740() {
   return (neuron0x1ae67f0()*-0.35335);
}

double NNfunction_sb_dLdR::synapse0x1b0c780() {
   return (neuron0x1ae6b30()*0.0238326);
}

double NNfunction_sb_dLdR::synapse0x1b0c7c0() {
   return (neuron0x1ae6e70()*-0.00959321);
}

double NNfunction_sb_dLdR::synapse0x1b0c800() {
   return (neuron0x1ae71b0()*0.00488837);
}

double NNfunction_sb_dLdR::synapse0x1b0c840() {
   return (neuron0x1ae74f0()*-0.00325959);
}

double NNfunction_sb_dLdR::synapse0x1b0c2d0() {
   return (neuron0x1ae7830()*-0.0116773);
}

double NNfunction_sb_dLdR::synapse0x1b0c310() {
   return (neuron0x1ae7d90()*1.86141);
}

double NNfunction_sb_dLdR::synapse0x1b0c990() {
   return (neuron0x1ae7fb0()*0.00874327);
}

double NNfunction_sb_dLdR::synapse0x1b0c9d0() {
   return (neuron0x1ae82f0()*0.0253044);
}

double NNfunction_sb_dLdR::synapse0x1b0ca10() {
   return (neuron0x1ae8630()*-0.000432875);
}

double NNfunction_sb_dLdR::synapse0x1b0ca50() {
   return (neuron0x1ae8970()*0.00175278);
}

double NNfunction_sb_dLdR::synapse0x1b0ca90() {
   return (neuron0x1ae8cb0()*0.0522785);
}

double NNfunction_sb_dLdR::synapse0x1b0cad0() {
   return (neuron0x1ae8ff0()*0.0971002);
}

double NNfunction_sb_dLdR::synapse0x1b0ce50() {
   return (neuron0x1ae4430()*0.396629);
}

double NNfunction_sb_dLdR::synapse0x1b0ce90() {
   return (neuron0x1ae4770()*-0.536298);
}

double NNfunction_sb_dLdR::synapse0x1b0ced0() {
   return (neuron0x1ae4ab0()*0.51126);
}

double NNfunction_sb_dLdR::synapse0x1b0cf10() {
   return (neuron0x1ae4df0()*-1.09581);
}

double NNfunction_sb_dLdR::synapse0x1b0cf50() {
   return (neuron0x1ae5130()*0.658878);
}

double NNfunction_sb_dLdR::synapse0x1b0cf90() {
   return (neuron0x1ae5470()*-0.313172);
}

double NNfunction_sb_dLdR::synapse0x1b0cfd0() {
   return (neuron0x1ae57b0()*0.0669111);
}

double NNfunction_sb_dLdR::synapse0x1b0d010() {
   return (neuron0x1ae5af0()*0.284633);
}

double NNfunction_sb_dLdR::synapse0x1b0d050() {
   return (neuron0x1ae5e30()*0.00107271);
}

double NNfunction_sb_dLdR::synapse0x1b0d090() {
   return (neuron0x1ae6170()*-0.378347);
}

double NNfunction_sb_dLdR::synapse0x1b0d0d0() {
   return (neuron0x1ae64b0()*-0.0600503);
}

double NNfunction_sb_dLdR::synapse0x1b0d110() {
   return (neuron0x1ae67f0()*1.01372);
}

double NNfunction_sb_dLdR::synapse0x1b0d150() {
   return (neuron0x1ae6b30()*-0.280628);
}

double NNfunction_sb_dLdR::synapse0x1b0d190() {
   return (neuron0x1ae6e70()*0.0750531);
}

double NNfunction_sb_dLdR::synapse0x1b0d1d0() {
   return (neuron0x1ae71b0()*0.300066);
}

double NNfunction_sb_dLdR::synapse0x1b0d210() {
   return (neuron0x1ae74f0()*-0.124823);
}

double NNfunction_sb_dLdR::synapse0x1b0cca0() {
   return (neuron0x1ae7830()*-0.0630612);
}

double NNfunction_sb_dLdR::synapse0x1b0cce0() {
   return (neuron0x1ae7d90()*0.600628);
}

double NNfunction_sb_dLdR::synapse0x1b0d360() {
   return (neuron0x1ae7fb0()*0.481013);
}

double NNfunction_sb_dLdR::synapse0x1b0d3a0() {
   return (neuron0x1ae82f0()*-0.341438);
}

double NNfunction_sb_dLdR::synapse0x1b0d3e0() {
   return (neuron0x1ae8630()*0.141055);
}

double NNfunction_sb_dLdR::synapse0x1b0d420() {
   return (neuron0x1ae8970()*0.338679);
}

double NNfunction_sb_dLdR::synapse0x1b0d460() {
   return (neuron0x1ae8cb0()*-0.0461493);
}

double NNfunction_sb_dLdR::synapse0x1b0d4a0() {
   return (neuron0x1ae8ff0()*0.522934);
}

double NNfunction_sb_dLdR::synapse0x1b0d820() {
   return (neuron0x1ae4430()*-0.0546943);
}

double NNfunction_sb_dLdR::synapse0x1b0d860() {
   return (neuron0x1ae4770()*0.00652371);
}

double NNfunction_sb_dLdR::synapse0x1b0d8a0() {
   return (neuron0x1ae4ab0()*-0.0507408);
}

double NNfunction_sb_dLdR::synapse0x1b0d8e0() {
   return (neuron0x1ae4df0()*0.0954097);
}

double NNfunction_sb_dLdR::synapse0x1b0d920() {
   return (neuron0x1ae5130()*-0.0258006);
}

double NNfunction_sb_dLdR::synapse0x1b0d960() {
   return (neuron0x1ae5470()*-0.00915853);
}

double NNfunction_sb_dLdR::synapse0x1b0d9a0() {
   return (neuron0x1ae57b0()*-5.80392e-05);
}

double NNfunction_sb_dLdR::synapse0x1b0d9e0() {
   return (neuron0x1ae5af0()*0.00299888);
}

double NNfunction_sb_dLdR::synapse0x1b0da20() {
   return (neuron0x1ae5e30()*-0.0595035);
}

double NNfunction_sb_dLdR::synapse0x1b0da60() {
   return (neuron0x1ae6170()*-0.00620331);
}

double NNfunction_sb_dLdR::synapse0x1b0daa0() {
   return (neuron0x1ae64b0()*0.0116267);
}

double NNfunction_sb_dLdR::synapse0x1b0dae0() {
   return (neuron0x1ae67f0()*1.99181);
}

double NNfunction_sb_dLdR::synapse0x1b0db20() {
   return (neuron0x1ae6b30()*0.0254263);
}

double NNfunction_sb_dLdR::synapse0x1b0db60() {
   return (neuron0x1ae6e70()*0.0278723);
}

double NNfunction_sb_dLdR::synapse0x1b0dba0() {
   return (neuron0x1ae71b0()*0.0235514);
}

double NNfunction_sb_dLdR::synapse0x1b0dbe0() {
   return (neuron0x1ae74f0()*0.024008);
}

double NNfunction_sb_dLdR::synapse0x1b0d670() {
   return (neuron0x1ae7830()*0.0211405);
}

double NNfunction_sb_dLdR::synapse0x1b0d6b0() {
   return (neuron0x1ae7d90()*-0.261444);
}

double NNfunction_sb_dLdR::synapse0x1b0dd30() {
   return (neuron0x1ae7fb0()*-0.0170382);
}

double NNfunction_sb_dLdR::synapse0x1b0dd70() {
   return (neuron0x1ae82f0()*0.000125132);
}

double NNfunction_sb_dLdR::synapse0x1b0ddb0() {
   return (neuron0x1ae8630()*-0.0578302);
}

double NNfunction_sb_dLdR::synapse0x1b0ddf0() {
   return (neuron0x1ae8970()*-0.00243083);
}

double NNfunction_sb_dLdR::synapse0x1b0de30() {
   return (neuron0x1ae8cb0()*-0.0316337);
}

double NNfunction_sb_dLdR::synapse0x1b0de70() {
   return (neuron0x1ae8ff0()*-0.0537002);
}

double NNfunction_sb_dLdR::synapse0x18add80() {
   return (neuron0x1ae9460()*-0.0541036);
}

double NNfunction_sb_dLdR::synapse0x18addc0() {
   return (neuron0x1ae9db0()*0.557947);
}

double NNfunction_sb_dLdR::synapse0x1aeb920() {
   return (neuron0x1aea890()*-0.0300769);
}

double NNfunction_sb_dLdR::synapse0x1aeb960() {
   return (neuron0x1aea330()*-0.0147898);
}

double NNfunction_sb_dLdR::synapse0x1aec2f0() {
   return (neuron0x1aeb670()*0.00120839);
}

double NNfunction_sb_dLdR::synapse0x1aec330() {
   return (neuron0x1aec040()*-0.182416);
}

double NNfunction_sb_dLdR::synapse0x1aed0c0() {
   return (neuron0x1aece10()*-0.142502);
}

double NNfunction_sb_dLdR::synapse0x1aed100() {
   return (neuron0x1aed7e0()*0.204215);
}

double NNfunction_sb_dLdR::synapse0x1aeda90() {
   return (neuron0x1aee1b0()*-0.154208);
}

double NNfunction_sb_dLdR::synapse0x1aedad0() {
   return (neuron0x1aeec90()*3.67052);
}

double NNfunction_sb_dLdR::synapse0x1aee460() {
   return (neuron0x1aef660()*-0.142577);
}

double NNfunction_sb_dLdR::synapse0x1aee4a0() {
   return (neuron0x1aec740()*0.0347205);
}

double NNfunction_sb_dLdR::synapse0x1aeef40() {
   return (neuron0x1af1210()*-0.0108862);
}

double NNfunction_sb_dLdR::synapse0x1aeef80() {
   return (neuron0x1af1be0()*-0.188332);
}

double NNfunction_sb_dLdR::synapse0x1aef910() {
   return (neuron0x1af25b0()*-0.0220649);
}

double NNfunction_sb_dLdR::synapse0x1aef950() {
   return (neuron0x1af2f80()*0.0144638);
}

double NNfunction_sb_dLdR::synapse0x1aec9f0() {
   return (neuron0x1af4d90()*-0.913057);
}

double NNfunction_sb_dLdR::synapse0x1aeca30() {
   return (neuron0x1af5070()*0.0939469);
}

double NNfunction_sb_dLdR::synapse0x1af14c0() {
   return (neuron0x1af5a40()*0.519341);
}

double NNfunction_sb_dLdR::synapse0x1af1500() {
   return (neuron0x1af6410()*0.130504);
}

double NNfunction_sb_dLdR::synapse0x1af1e90() {
   return (neuron0x1af6de0()*0.164245);
}

double NNfunction_sb_dLdR::synapse0x1af1ed0() {
   return (neuron0x1af77b0()*-0.120079);
}

double NNfunction_sb_dLdR::synapse0x1af2860() {
   return (neuron0x1af0300()*0.0167502);
}

double NNfunction_sb_dLdR::synapse0x1af28a0() {
   return (neuron0x1af0cd0()*-0.734332);
}

double NNfunction_sb_dLdR::synapse0x1af3230() {
   return (neuron0x1afa540()*-0.606126);
}

double NNfunction_sb_dLdR::synapse0x1af3270() {
   return (neuron0x1afaf10()*0.037752);
}

double NNfunction_sb_dLdR::synapse0x1ae73d0() {
   return (neuron0x1afb8e0()*0.166926);
}

double NNfunction_sb_dLdR::synapse0x1ae7410() {
   return (neuron0x1afc2b0()*3.44587);
}

double NNfunction_sb_dLdR::synapse0x1af5320() {
   return (neuron0x1afcc80()*1.13801);
}

double NNfunction_sb_dLdR::synapse0x1af5360() {
   return (neuron0x1afd650()*-0.127419);
}

double NNfunction_sb_dLdR::synapse0x1af5cf0() {
   return (neuron0x1afe020()*-0.173939);
}

double NNfunction_sb_dLdR::synapse0x1af5d30() {
   return (neuron0x1afe9f0()*0.188268);
}

double NNfunction_sb_dLdR::synapse0x1af66c0() {
   return (neuron0x1af4a80()*0.357327);
}

double NNfunction_sb_dLdR::synapse0x1af6700() {
   return (neuron0x1b015d0()*-1.14351);
}

double NNfunction_sb_dLdR::synapse0x1af7090() {
   return (neuron0x1b01fa0()*-0.225216);
}

double NNfunction_sb_dLdR::synapse0x1af70d0() {
   return (neuron0x1b02970()*0.137135);
}

double NNfunction_sb_dLdR::synapse0x1af7a60() {
   return (neuron0x1b03340()*0.106698);
}

double NNfunction_sb_dLdR::synapse0x1af7aa0() {
   return (neuron0x1b03d10()*0.0746087);
}

double NNfunction_sb_dLdR::synapse0x1af05b0() {
   return (neuron0x1b046e0()*-0.0496071);
}

double NNfunction_sb_dLdR::synapse0x1af05f0() {
   return (neuron0x1b050b0()*0.0787839);
}

double NNfunction_sb_dLdR::synapse0x1af9e60() {
   return (neuron0x1b05a80()*0.221465);
}

double NNfunction_sb_dLdR::synapse0x1af9ea0() {
   return (neuron0x1b06660()*-0.368906);
}

double NNfunction_sb_dLdR::synapse0x1afa7f0() {
   return (neuron0x1b07030()*-0.0722565);
}

double NNfunction_sb_dLdR::synapse0x1afa830() {
   return (neuron0x1af7eb0()*-1.00477);
}

double NNfunction_sb_dLdR::synapse0x1afb1c0() {
   return (neuron0x1af8880()*-0.066973);
}

double NNfunction_sb_dLdR::synapse0x1afb200() {
   return (neuron0x1af9250()*-1.49786);
}

double NNfunction_sb_dLdR::synapse0x1afbb90() {
   return (neuron0x1b0b890()*-0.0838516);
}

double NNfunction_sb_dLdR::synapse0x1afbbd0() {
   return (neuron0x1b0c140()*0.187138);
}

double NNfunction_sb_dLdR::synapse0x1afc560() {
   return (neuron0x1b0cb10()*-0.0496524);
}

double NNfunction_sb_dLdR::synapse0x1afc5a0() {
   return (neuron0x1b0d4e0()*0.281941);
}

double NNfunction_sb_dLdR::synapse0x1afeca0() {
   return (neuron0x1ae9460()*0.137878);
}

double NNfunction_sb_dLdR::synapse0x1afece0() {
   return (neuron0x1ae9db0()*4.04323);
}

double NNfunction_sb_dLdR::synapse0x1af4260() {
   return (neuron0x1aea890()*0.279334);
}

double NNfunction_sb_dLdR::synapse0x1af42a0() {
   return (neuron0x1aea330()*-0.138148);
}

double NNfunction_sb_dLdR::synapse0x1b01880() {
   return (neuron0x1aeb670()*-0.417873);
}

double NNfunction_sb_dLdR::synapse0x1b018c0() {
   return (neuron0x1aec040()*0.942827);
}

double NNfunction_sb_dLdR::synapse0x1b02250() {
   return (neuron0x1aece10()*-0.495886);
}

double NNfunction_sb_dLdR::synapse0x1b02290() {
   return (neuron0x1aed7e0()*0.401359);
}

double NNfunction_sb_dLdR::synapse0x1b02c20() {
   return (neuron0x1aee1b0()*-0.893928);
}

double NNfunction_sb_dLdR::synapse0x1b02c60() {
   return (neuron0x1aeec90()*0.331215);
}

double NNfunction_sb_dLdR::synapse0x1b035f0() {
   return (neuron0x1aef660()*-0.424739);
}

double NNfunction_sb_dLdR::synapse0x1b03630() {
   return (neuron0x1aec740()*1.8184);
}

double NNfunction_sb_dLdR::synapse0x1b03fc0() {
   return (neuron0x1af1210()*0.196203);
}

double NNfunction_sb_dLdR::synapse0x1b04000() {
   return (neuron0x1af1be0()*-0.387969);
}

double NNfunction_sb_dLdR::synapse0x1b04990() {
   return (neuron0x1af25b0()*-0.442849);
}

double NNfunction_sb_dLdR::synapse0x1b049d0() {
   return (neuron0x1af2f80()*-0.141454);
}

double NNfunction_sb_dLdR::synapse0x1b05360() {
   return (neuron0x1af4d90()*0.377793);
}

double NNfunction_sb_dLdR::synapse0x1b053a0() {
   return (neuron0x1af5070()*-2.2046);
}

double NNfunction_sb_dLdR::synapse0x1b05d30() {
   return (neuron0x1af5a40()*0.0956698);
}

double NNfunction_sb_dLdR::synapse0x1b05d70() {
   return (neuron0x1af6410()*-1.32671);
}

double NNfunction_sb_dLdR::synapse0x1b06910() {
   return (neuron0x1af6de0()*-0.280907);
}

double NNfunction_sb_dLdR::synapse0x1b06950() {
   return (neuron0x1af77b0()*0.690604);
}

double NNfunction_sb_dLdR::synapse0x1b072e0() {
   return (neuron0x1af0300()*0.444833);
}

double NNfunction_sb_dLdR::synapse0x1b07320() {
   return (neuron0x1af0cd0()*-2.67267);
}

double NNfunction_sb_dLdR::synapse0x1af8160() {
   return (neuron0x1afa540()*-1.23689);
}

double NNfunction_sb_dLdR::synapse0x1af81a0() {
   return (neuron0x1afaf10()*-0.343016);
}

double NNfunction_sb_dLdR::synapse0x1af8b30() {
   return (neuron0x1afb8e0()*0.58149);
}

double NNfunction_sb_dLdR::synapse0x1af8b70() {
   return (neuron0x1afc2b0()*-3.05888);
}

double NNfunction_sb_dLdR::synapse0x1af9500() {
   return (neuron0x1afcc80()*-1.42251);
}

double NNfunction_sb_dLdR::synapse0x1af9540() {
   return (neuron0x1afd650()*-0.330468);
}

double NNfunction_sb_dLdR::synapse0x1b0ba20() {
   return (neuron0x1afe020()*-0.758153);
}

double NNfunction_sb_dLdR::synapse0x1b0ba60() {
   return (neuron0x1afe9f0()*0.582368);
}

double NNfunction_sb_dLdR::synapse0x1b0c3f0() {
   return (neuron0x1af4a80()*0.553076);
}

double NNfunction_sb_dLdR::synapse0x1b0c430() {
   return (neuron0x1b015d0()*2.22669);
}

double NNfunction_sb_dLdR::synapse0x1b0cdc0() {
   return (neuron0x1b01fa0()*-0.77005);
}

double NNfunction_sb_dLdR::synapse0x1b0ce00() {
   return (neuron0x1b02970()*-0.348196);
}

double NNfunction_sb_dLdR::synapse0x1b0d790() {
   return (neuron0x1b03340()*-0.459951);
}

double NNfunction_sb_dLdR::synapse0x1b0d7d0() {
   return (neuron0x1b03d10()*-1.48554);
}

double NNfunction_sb_dLdR::synapse0x1ae9680() {
   return (neuron0x1b046e0()*0.0220349);
}

double NNfunction_sb_dLdR::synapse0x1ae96c0() {
   return (neuron0x1b050b0()*0.699786);
}

double NNfunction_sb_dLdR::synapse0x1afcf30() {
   return (neuron0x1b05a80()*0.346279);
}

double NNfunction_sb_dLdR::synapse0x1afcf70() {
   return (neuron0x1b06660()*0.0856001);
}

double NNfunction_sb_dLdR::synapse0x1b0deb0() {
   return (neuron0x1b07030()*-1.00899);
}

double NNfunction_sb_dLdR::synapse0x1b0def0() {
   return (neuron0x1af7eb0()*2.05864);
}

double NNfunction_sb_dLdR::synapse0x1b0df30() {
   return (neuron0x1af8880()*0.358074);
}

double NNfunction_sb_dLdR::synapse0x1b0df70() {
   return (neuron0x1af9250()*-0.201574);
}

double NNfunction_sb_dLdR::synapse0x1b14e20() {
   return (neuron0x1b0b890()*-0.707176);
}

double NNfunction_sb_dLdR::synapse0x1b14e60() {
   return (neuron0x1b0c140()*-1.35413);
}

double NNfunction_sb_dLdR::synapse0x1b14ea0() {
   return (neuron0x1b0cb10()*0.272581);
}

double NNfunction_sb_dLdR::synapse0x1b14ee0() {
   return (neuron0x1b0d4e0()*-1.01207);
}

double NNfunction_sb_dLdR::synapse0x1b15260() {
   return (neuron0x1ae9460()*-0.785391);
}

double NNfunction_sb_dLdR::synapse0x1b152a0() {
   return (neuron0x1ae9db0()*-3.49558);
}

double NNfunction_sb_dLdR::synapse0x1b152e0() {
   return (neuron0x1aea890()*-0.599327);
}

double NNfunction_sb_dLdR::synapse0x1b15320() {
   return (neuron0x1aea330()*1.35013);
}

double NNfunction_sb_dLdR::synapse0x1b15360() {
   return (neuron0x1aeb670()*-0.226432);
}

double NNfunction_sb_dLdR::synapse0x1b153a0() {
   return (neuron0x1aec040()*-0.102724);
}

double NNfunction_sb_dLdR::synapse0x1b153e0() {
   return (neuron0x1aece10()*1.59258);
}

double NNfunction_sb_dLdR::synapse0x1b15420() {
   return (neuron0x1aed7e0()*1.19586);
}

double NNfunction_sb_dLdR::synapse0x1b15460() {
   return (neuron0x1aee1b0()*0.89802);
}

double NNfunction_sb_dLdR::synapse0x1b154a0() {
   return (neuron0x1aeec90()*2.9646);
}

double NNfunction_sb_dLdR::synapse0x1b154e0() {
   return (neuron0x1aef660()*0.494193);
}

double NNfunction_sb_dLdR::synapse0x1b15520() {
   return (neuron0x1aec740()*0.0336407);
}

double NNfunction_sb_dLdR::synapse0x1b15560() {
   return (neuron0x1af1210()*-0.950834);
}

double NNfunction_sb_dLdR::synapse0x1b155a0() {
   return (neuron0x1af1be0()*-0.826664);
}

double NNfunction_sb_dLdR::synapse0x1b155e0() {
   return (neuron0x1af25b0()*-0.320955);
}

double NNfunction_sb_dLdR::synapse0x1b15620() {
   return (neuron0x1af2f80()*1.09124);
}

double NNfunction_sb_dLdR::synapse0x1b150b0() {
   return (neuron0x1af4d90()*-0.119608);
}

double NNfunction_sb_dLdR::synapse0x1b150f0() {
   return (neuron0x1af5070()*-0.584144);
}

double NNfunction_sb_dLdR::synapse0x1b15770() {
   return (neuron0x1af5a40()*0.920416);
}

double NNfunction_sb_dLdR::synapse0x1b157b0() {
   return (neuron0x1af6410()*0.754095);
}

double NNfunction_sb_dLdR::synapse0x1b157f0() {
   return (neuron0x1af6de0()*0.491461);
}

double NNfunction_sb_dLdR::synapse0x1b15830() {
   return (neuron0x1af77b0()*-1.7009);
}

double NNfunction_sb_dLdR::synapse0x1b15870() {
   return (neuron0x1af0300()*-0.984305);
}

double NNfunction_sb_dLdR::synapse0x1b158b0() {
   return (neuron0x1af0cd0()*1.47451);
}

double NNfunction_sb_dLdR::synapse0x1b158f0() {
   return (neuron0x1afa540()*2.72255);
}

double NNfunction_sb_dLdR::synapse0x1b15930() {
   return (neuron0x1afaf10()*0.0389023);
}

double NNfunction_sb_dLdR::synapse0x1b15970() {
   return (neuron0x1afb8e0()*1.1397);
}

double NNfunction_sb_dLdR::synapse0x1b159b0() {
   return (neuron0x1afc2b0()*1.94751);
}

double NNfunction_sb_dLdR::synapse0x1b159f0() {
   return (neuron0x1afcc80()*0.635881);
}

double NNfunction_sb_dLdR::synapse0x1b15a30() {
   return (neuron0x1afd650()*0.297549);
}

double NNfunction_sb_dLdR::synapse0x1b15a70() {
   return (neuron0x1afe020()*0.956081);
}

double NNfunction_sb_dLdR::synapse0x1b15ab0() {
   return (neuron0x1afe9f0()*0.0887588);
}

double NNfunction_sb_dLdR::synapse0x1b15660() {
   return (neuron0x1af4a80()*1.67268);
}

double NNfunction_sb_dLdR::synapse0x1b156a0() {
   return (neuron0x1b015d0()*0.102465);
}

double NNfunction_sb_dLdR::synapse0x1b156e0() {
   return (neuron0x1b01fa0()*0.0722154);
}

double NNfunction_sb_dLdR::synapse0x1b15720() {
   return (neuron0x1b02970()*1.13978);
}

double NNfunction_sb_dLdR::synapse0x1b15d00() {
   return (neuron0x1b03340()*-0.302944);
}

double NNfunction_sb_dLdR::synapse0x1b15d40() {
   return (neuron0x1b03d10()*1.24095);
}

double NNfunction_sb_dLdR::synapse0x1b15d80() {
   return (neuron0x1b046e0()*0.780942);
}

double NNfunction_sb_dLdR::synapse0x1b15dc0() {
   return (neuron0x1b050b0()*0.599654);
}

double NNfunction_sb_dLdR::synapse0x1b15e00() {
   return (neuron0x1b05a80()*0.189584);
}

double NNfunction_sb_dLdR::synapse0x1b15e40() {
   return (neuron0x1b06660()*1.02544);
}

double NNfunction_sb_dLdR::synapse0x1b15e80() {
   return (neuron0x1b07030()*0.4607);
}

double NNfunction_sb_dLdR::synapse0x1b15ec0() {
   return (neuron0x1af7eb0()*-2.09449);
}

double NNfunction_sb_dLdR::synapse0x1b15f00() {
   return (neuron0x1af8880()*-0.44331);
}

double NNfunction_sb_dLdR::synapse0x1b15f40() {
   return (neuron0x1af9250()*0.646924);
}

double NNfunction_sb_dLdR::synapse0x1b15f80() {
   return (neuron0x1b0b890()*-0.212425);
}

double NNfunction_sb_dLdR::synapse0x1b15fc0() {
   return (neuron0x1b0c140()*1.02342);
}

double NNfunction_sb_dLdR::synapse0x1b16000() {
   return (neuron0x1b0cb10()*-1.18409);
}

double NNfunction_sb_dLdR::synapse0x1b16040() {
   return (neuron0x1b0d4e0()*1.72203);
}

double NNfunction_sb_dLdR::synapse0x1b163c0() {
   return (neuron0x1ae9460()*-0.0841612);
}

double NNfunction_sb_dLdR::synapse0x1b16400() {
   return (neuron0x1ae9db0()*0.750467);
}

double NNfunction_sb_dLdR::synapse0x1b16440() {
   return (neuron0x1aea890()*-0.0274749);
}

double NNfunction_sb_dLdR::synapse0x1b16480() {
   return (neuron0x1aea330()*0.0248615);
}

double NNfunction_sb_dLdR::synapse0x1b164c0() {
   return (neuron0x1aeb670()*-0.138753);
}

double NNfunction_sb_dLdR::synapse0x1b16500() {
   return (neuron0x1aec040()*0.0689298);
}

double NNfunction_sb_dLdR::synapse0x1b16540() {
   return (neuron0x1aece10()*-0.128515);
}

double NNfunction_sb_dLdR::synapse0x1b16580() {
   return (neuron0x1aed7e0()*0.194245);
}

double NNfunction_sb_dLdR::synapse0x1b165c0() {
   return (neuron0x1aee1b0()*0.0115823);
}

double NNfunction_sb_dLdR::synapse0x1b16600() {
   return (neuron0x1aeec90()*-2.05845);
}

double NNfunction_sb_dLdR::synapse0x1b16640() {
   return (neuron0x1aef660()*-0.0900219);
}

double NNfunction_sb_dLdR::synapse0x1b16680() {
   return (neuron0x1aec740()*0.415882);
}

double NNfunction_sb_dLdR::synapse0x1b166c0() {
   return (neuron0x1af1210()*-0.0208427);
}

double NNfunction_sb_dLdR::synapse0x1b16700() {
   return (neuron0x1af1be0()*-0.190846);
}

double NNfunction_sb_dLdR::synapse0x1b16740() {
   return (neuron0x1af25b0()*-0.0112468);
}

double NNfunction_sb_dLdR::synapse0x1b16780() {
   return (neuron0x1af2f80()*0.069328);
}

double NNfunction_sb_dLdR::synapse0x1b16210() {
   return (neuron0x1af4d90()*0.394901);
}

double NNfunction_sb_dLdR::synapse0x1b16250() {
   return (neuron0x1af5070()*-0.176051);
}

double NNfunction_sb_dLdR::synapse0x1b168d0() {
   return (neuron0x1af5a40()*-0.0907409);
}

double NNfunction_sb_dLdR::synapse0x1b16910() {
   return (neuron0x1af6410()*-0.171893);
}

double NNfunction_sb_dLdR::synapse0x1b16950() {
   return (neuron0x1af6de0()*0.202161);
}

double NNfunction_sb_dLdR::synapse0x1b16990() {
   return (neuron0x1af77b0()*0.324993);
}

double NNfunction_sb_dLdR::synapse0x1b169d0() {
   return (neuron0x1af0300()*-0.00302676);
}

double NNfunction_sb_dLdR::synapse0x1b16a10() {
   return (neuron0x1af0cd0()*0.153994);
}

double NNfunction_sb_dLdR::synapse0x1b16a50() {
   return (neuron0x1afa540()*-0.413557);
}

double NNfunction_sb_dLdR::synapse0x1b16a90() {
   return (neuron0x1afaf10()*-0.0152503);
}

double NNfunction_sb_dLdR::synapse0x1b16ad0() {
   return (neuron0x1afb8e0()*0.0926187);
}

double NNfunction_sb_dLdR::synapse0x1b16b10() {
   return (neuron0x1afc2b0()*-2.93666);
}

double NNfunction_sb_dLdR::synapse0x1b16b50() {
   return (neuron0x1afcc80()*-0.847922);
}

double NNfunction_sb_dLdR::synapse0x1b16b90() {
   return (neuron0x1afd650()*-0.0823593);
}

double NNfunction_sb_dLdR::synapse0x1b16bd0() {
   return (neuron0x1afe020()*-0.112269);
}

double NNfunction_sb_dLdR::synapse0x1b16c10() {
   return (neuron0x1afe9f0()*0.157605);
}

double NNfunction_sb_dLdR::synapse0x1b167c0() {
   return (neuron0x1af4a80()*0.328949);
}

double NNfunction_sb_dLdR::synapse0x1b16800() {
   return (neuron0x1b015d0()*0.795596);
}

double NNfunction_sb_dLdR::synapse0x1b16840() {
   return (neuron0x1b01fa0()*-0.144802);
}

double NNfunction_sb_dLdR::synapse0x1b16880() {
   return (neuron0x1b02970()*0.198771);
}

double NNfunction_sb_dLdR::synapse0x1b16e60() {
   return (neuron0x1b03340()*-0.502337);
}

double NNfunction_sb_dLdR::synapse0x1b16ea0() {
   return (neuron0x1b03d10()*-0.0304416);
}

double NNfunction_sb_dLdR::synapse0x1b16ee0() {
   return (neuron0x1b046e0()*-0.0876931);
}

double NNfunction_sb_dLdR::synapse0x1b16f20() {
   return (neuron0x1b050b0()*0.112213);
}

double NNfunction_sb_dLdR::synapse0x1b16f60() {
   return (neuron0x1b05a80()*0.196601);
}

double NNfunction_sb_dLdR::synapse0x1b16fa0() {
   return (neuron0x1b06660()*-0.236541);
}

double NNfunction_sb_dLdR::synapse0x1b16fe0() {
   return (neuron0x1b07030()*0.0389637);
}

double NNfunction_sb_dLdR::synapse0x1b17020() {
   return (neuron0x1af7eb0()*1.46325);
}

double NNfunction_sb_dLdR::synapse0x1b17060() {
   return (neuron0x1af8880()*-0.102301);
}

double NNfunction_sb_dLdR::synapse0x1b170a0() {
   return (neuron0x1af9250()*1.05493);
}

double NNfunction_sb_dLdR::synapse0x1b170e0() {
   return (neuron0x1b0b890()*-0.0164306);
}

double NNfunction_sb_dLdR::synapse0x1b17120() {
   return (neuron0x1b0c140()*-0.157968);
}

double NNfunction_sb_dLdR::synapse0x1b17160() {
   return (neuron0x1b0cb10()*-0.121926);
}

double NNfunction_sb_dLdR::synapse0x1b171a0() {
   return (neuron0x1b0d4e0()*-0.17426);
}

double NNfunction_sb_dLdR::synapse0x1b17520() {
   return (neuron0x1ae9460()*-0.233874);
}

double NNfunction_sb_dLdR::synapse0x1b17560() {
   return (neuron0x1ae9db0()*-1.37524);
}

double NNfunction_sb_dLdR::synapse0x1b175a0() {
   return (neuron0x1aea890()*-0.060767);
}

double NNfunction_sb_dLdR::synapse0x1b175e0() {
   return (neuron0x1aea330()*0.051847);
}

double NNfunction_sb_dLdR::synapse0x1b17620() {
   return (neuron0x1aeb670()*-0.399534);
}

double NNfunction_sb_dLdR::synapse0x1b17660() {
   return (neuron0x1aec040()*0.456544);
}

double NNfunction_sb_dLdR::synapse0x1b176a0() {
   return (neuron0x1aece10()*-0.476621);
}

double NNfunction_sb_dLdR::synapse0x1b176e0() {
   return (neuron0x1aed7e0()*-0.361171);
}

double NNfunction_sb_dLdR::synapse0x1b17720() {
   return (neuron0x1aee1b0()*0.00410865);
}

double NNfunction_sb_dLdR::synapse0x1b17760() {
   return (neuron0x1aeec90()*-0.561047);
}

double NNfunction_sb_dLdR::synapse0x1b177a0() {
   return (neuron0x1aef660()*-0.24508);
}

double NNfunction_sb_dLdR::synapse0x1b177e0() {
   return (neuron0x1aec740()*0.317151);
}

double NNfunction_sb_dLdR::synapse0x1b17820() {
   return (neuron0x1af1210()*-0.0129141);
}

double NNfunction_sb_dLdR::synapse0x1b17860() {
   return (neuron0x1af1be0()*-0.448791);
}

double NNfunction_sb_dLdR::synapse0x1b178a0() {
   return (neuron0x1af25b0()*-0.174127);
}

double NNfunction_sb_dLdR::synapse0x1b178e0() {
   return (neuron0x1af2f80()*0.212881);
}

double NNfunction_sb_dLdR::synapse0x1b17370() {
   return (neuron0x1af4d90()*-0.731807);
}

double NNfunction_sb_dLdR::synapse0x1b173b0() {
   return (neuron0x1af5070()*-0.668975);
}

double NNfunction_sb_dLdR::synapse0x1b17a30() {
   return (neuron0x1af5a40()*-0.915395);
}

double NNfunction_sb_dLdR::synapse0x1b17a70() {
   return (neuron0x1af6410()*0.928242);
}

double NNfunction_sb_dLdR::synapse0x1b17ab0() {
   return (neuron0x1af6de0()*0.350064);
}

double NNfunction_sb_dLdR::synapse0x1b17af0() {
   return (neuron0x1af77b0()*-0.138745);
}

double NNfunction_sb_dLdR::synapse0x1b17b30() {
   return (neuron0x1af0300()*-0.0623582);
}

double NNfunction_sb_dLdR::synapse0x1b17b70() {
   return (neuron0x1af0cd0()*-0.0358608);
}

double NNfunction_sb_dLdR::synapse0x1b17bb0() {
   return (neuron0x1afa540()*-0.350334);
}

double NNfunction_sb_dLdR::synapse0x1b17bf0() {
   return (neuron0x1afaf10()*-0.0938208);
}

double NNfunction_sb_dLdR::synapse0x1b17c30() {
   return (neuron0x1afb8e0()*0.20839);
}

double NNfunction_sb_dLdR::synapse0x1b17c70() {
   return (neuron0x1afc2b0()*-0.374485);
}

double NNfunction_sb_dLdR::synapse0x1b17cb0() {
   return (neuron0x1afcc80()*1.35572);
}

double NNfunction_sb_dLdR::synapse0x1b17cf0() {
   return (neuron0x1afd650()*-0.13394);
}

double NNfunction_sb_dLdR::synapse0x1b17d30() {
   return (neuron0x1afe020()*0.0680087);
}

double NNfunction_sb_dLdR::synapse0x1b17d70() {
   return (neuron0x1afe9f0()*0.445965);
}

double NNfunction_sb_dLdR::synapse0x1b17920() {
   return (neuron0x1af4a80()*0.233735);
}

double NNfunction_sb_dLdR::synapse0x1b17960() {
   return (neuron0x1b015d0()*0.649203);
}

double NNfunction_sb_dLdR::synapse0x1b179a0() {
   return (neuron0x1b01fa0()*-0.452787);
}

double NNfunction_sb_dLdR::synapse0x1b179e0() {
   return (neuron0x1b02970()*0.376184);
}

double NNfunction_sb_dLdR::synapse0x1b17fc0() {
   return (neuron0x1b03340()*-0.123209);
}

double NNfunction_sb_dLdR::synapse0x1b18000() {
   return (neuron0x1b03d10()*0.885114);
}

double NNfunction_sb_dLdR::synapse0x1b18040() {
   return (neuron0x1b046e0()*-0.313926);
}

double NNfunction_sb_dLdR::synapse0x1b18080() {
   return (neuron0x1b050b0()*0.440604);
}

double NNfunction_sb_dLdR::synapse0x1b180c0() {
   return (neuron0x1b05a80()*0.431473);
}

double NNfunction_sb_dLdR::synapse0x1b18100() {
   return (neuron0x1b06660()*-0.0806726);
}

double NNfunction_sb_dLdR::synapse0x1b18140() {
   return (neuron0x1b07030()*-0.0357365);
}

double NNfunction_sb_dLdR::synapse0x1b18180() {
   return (neuron0x1af7eb0()*-0.0748795);
}

double NNfunction_sb_dLdR::synapse0x1b181c0() {
   return (neuron0x1af8880()*-0.116636);
}

double NNfunction_sb_dLdR::synapse0x1b18200() {
   return (neuron0x1af9250()*-1.03271);
}

double NNfunction_sb_dLdR::synapse0x1b18240() {
   return (neuron0x1b0b890()*-0.314889);
}

double NNfunction_sb_dLdR::synapse0x1b18280() {
   return (neuron0x1b0c140()*0.031772);
}

double NNfunction_sb_dLdR::synapse0x1b182c0() {
   return (neuron0x1b0cb10()*-0.178989);
}

double NNfunction_sb_dLdR::synapse0x1b18300() {
   return (neuron0x1b0d4e0()*0.202296);
}

double NNfunction_sb_dLdR::synapse0x1b18560() {
   return (neuron0x1b146e0()*-4.89928);
}

double NNfunction_sb_dLdR::synapse0x1b185a0() {
   return (neuron0x1b14a80()*7.76566);
}

double NNfunction_sb_dLdR::synapse0x1b185e0() {
   return (neuron0x1b14f20()*-4.18983);
}

double NNfunction_sb_dLdR::synapse0x1b18620() {
   return (neuron0x1b16080()*5.00683);
}

double NNfunction_sb_dLdR::synapse0x1b18660() {
   return (neuron0x1b171e0()*-1.9324);
}

