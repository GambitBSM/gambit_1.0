#include "NNfunction_nn_chi1_charge2p.h"
#include <cmath>

double NNfunction_nn_chi1_charge2p::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.1413)/14.8808;
   input1 = (in1 - 33.1726)/873.214;
   input2 = (in2 - 222.586)/191.701;
   input3 = (in3 - 215.343)/692.165;
   input4 = (in4 - 981.688)/828.889;
   input5 = (in5 - 951.05)/890.932;
   input6 = (in6 - 954.745)/889.666;
   input7 = (in7 - 944.592)/865.869;
   input8 = (in8 - 954.413)/909.289;
   input9 = (in9 - 946.157)/903.388;
   input10 = (in10 - 931.33)/872.159;
   input11 = (in11 - 853.326)/831.693;
   input12 = (in12 - 904.374)/841.049;
   input13 = (in13 - 676.045)/577.62;
   input14 = (in14 - 886.95)/805.831;
   input15 = (in15 - 888.879)/807.567;
   input16 = (in16 - 603.199)/514.017;
   input17 = (in17 - 918.148)/857.106;
   input18 = (in18 - 918.177)/858.14;
   input19 = (in19 - 889.809)/802.769;
   input20 = (in20 - -163.187)/431.328;
   input21 = (in21 - -210.381)/926.857;
   input22 = (in22 - 6.45594)/945.518;
   input23 = (in23 - 20.5663)/284.999;
   switch(index) {
     case 0:
         return neuron0x2f4c000();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi1_charge2p::Value(int index, double* input) {
   input0 = (input[0] - 24.1413)/14.8808;
   input1 = (input[1] - 33.1726)/873.214;
   input2 = (input[2] - 222.586)/191.701;
   input3 = (input[3] - 215.343)/692.165;
   input4 = (input[4] - 981.688)/828.889;
   input5 = (input[5] - 951.05)/890.932;
   input6 = (input[6] - 954.745)/889.666;
   input7 = (input[7] - 944.592)/865.869;
   input8 = (input[8] - 954.413)/909.289;
   input9 = (input[9] - 946.157)/903.388;
   input10 = (input[10] - 931.33)/872.159;
   input11 = (input[11] - 853.326)/831.693;
   input12 = (input[12] - 904.374)/841.049;
   input13 = (input[13] - 676.045)/577.62;
   input14 = (input[14] - 886.95)/805.831;
   input15 = (input[15] - 888.879)/807.567;
   input16 = (input[16] - 603.199)/514.017;
   input17 = (input[17] - 918.148)/857.106;
   input18 = (input[18] - 918.177)/858.14;
   input19 = (input[19] - 889.809)/802.769;
   input20 = (input[20] - -163.187)/431.328;
   input21 = (input[21] - -210.381)/926.857;
   input22 = (input[22] - 6.45594)/945.518;
   input23 = (input[23] - 20.5663)/284.999;
   switch(index) {
     case 0:
         return neuron0x2f4c000();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi1_charge2p::neuron0x2f17070() {
   return input0;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f17320() {
   return input1;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f17660() {
   return input2;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f179a0() {
   return input3;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f17ce0() {
   return input4;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f18020() {
   return input5;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f18360() {
   return input6;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f186a0() {
   return input7;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f189e0() {
   return input8;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f18d20() {
   return input9;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f19060() {
   return input10;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f193a0() {
   return input11;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f196e0() {
   return input12;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f19a20() {
   return input13;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f19d60() {
   return input14;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f1a0a0() {
   return input15;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f1a3e0() {
   return input16;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f1a940() {
   return input17;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f1ab60() {
   return input18;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f1aea0() {
   return input19;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f1b1e0() {
   return input20;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f1b520() {
   return input21;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f1b860() {
   return input22;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f1bba0() {
   return input23;
}

double NNfunction_nn_chi1_charge2p::input0x2f1c010() {
   double input = 1.29162;
   input += synapse0x2f1c350();
   input += synapse0x2f1c390();
   input += synapse0x2f1c3d0();
   input += synapse0x2f1c410();
   input += synapse0x2f1c450();
   input += synapse0x2f1c490();
   input += synapse0x2f1c4d0();
   input += synapse0x2f1c510();
   input += synapse0x2f1c550();
   input += synapse0x2f1c590();
   input += synapse0x2f1c5d0();
   input += synapse0x2f1c610();
   input += synapse0x2f1c650();
   input += synapse0x2f1c690();
   input += synapse0x2f1c6d0();
   input += synapse0x2f1c710();
   input += synapse0x2f1c1a0();
   input += synapse0x2f1c1e0();
   input += synapse0x2cd32a0();
   input += synapse0x2cd32e0();
   input += synapse0x2f1c860();
   input += synapse0x2f1c8a0();
   input += synapse0x2f1c8e0();
   input += synapse0x2f1c920();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f1c010() {
   double input = input0x2f1c010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f1c960() {
   double input = -3.56564;
   input += synapse0x2f1cca0();
   input += synapse0x2f1cce0();
   input += synapse0x2f1cd20();
   input += synapse0x2f1cd60();
   input += synapse0x2f1cda0();
   input += synapse0x2f1cde0();
   input += synapse0x2f1ce20();
   input += synapse0x2f1ce60();
   input += synapse0x2f1cea0();
   input += synapse0x2f1c750();
   input += synapse0x2f1c790();
   input += synapse0x2f1c7d0();
   input += synapse0x2f1c810();
   input += synapse0x2f1d0f0();
   input += synapse0x2f1d130();
   input += synapse0x2f1d170();
   input += synapse0x2f1caf0();
   input += synapse0x2f1cb30();
   input += synapse0x2f1d2c0();
   input += synapse0x2f1d300();
   input += synapse0x2f1d340();
   input += synapse0x2f1d380();
   input += synapse0x2f1d3c0();
   input += synapse0x2f1d400();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f1c960() {
   double input = input0x2f1c960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f1d440() {
   double input = 2.182;
   input += synapse0x2f1d780();
   input += synapse0x2f1d7c0();
   input += synapse0x2f1d800();
   input += synapse0x2f1d840();
   input += synapse0x2f1d880();
   input += synapse0x2f1d8c0();
   input += synapse0x2f1d900();
   input += synapse0x2f1d940();
   input += synapse0x2f1d980();
   input += synapse0x2f1d9c0();
   input += synapse0x2f1da00();
   input += synapse0x2f1da40();
   input += synapse0x2f1da80();
   input += synapse0x2f1dac0();
   input += synapse0x2f1db00();
   input += synapse0x2f1db40();
   input += synapse0x2f1d5d0();
   input += synapse0x2f1d610();
   input += synapse0x2ce1110();
   input += synapse0x2ce1150();
   input += synapse0x2f1fa80();
   input += synapse0x2f1fac0();
   input += synapse0x2f16db0();
   input += synapse0x2f16df0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f1d440() {
   double input = input0x2f1d440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2ce1870() {
   double input = -2.91607;
   input += synapse0x2ce1a00();
   input += synapse0x2f1d000();
   input += synapse0x2f1d040();
   input += synapse0x2f1d080();
   input += synapse0x2f1dc90();
   input += synapse0x2f1dcd0();
   input += synapse0x2f1dd10();
   input += synapse0x2f1dd50();
   input += synapse0x2f1dd90();
   input += synapse0x2f1ddd0();
   input += synapse0x2f1de10();
   input += synapse0x2f1de50();
   input += synapse0x2f1de90();
   input += synapse0x2f1ded0();
   input += synapse0x2f1df10();
   input += synapse0x2f1df50();
   input += synapse0x2f16e30();
   input += synapse0x2f16e70();
   input += synapse0x2f1e0a0();
   input += synapse0x2f1e0e0();
   input += synapse0x2f1e120();
   input += synapse0x2f1e160();
   input += synapse0x2f1e1a0();
   input += synapse0x2f1e1e0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2ce1870() {
   double input = input0x2ce1870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f1e220() {
   double input = -0.177459;
   input += synapse0x2f1e560();
   input += synapse0x2f1e5a0();
   input += synapse0x2f1e5e0();
   input += synapse0x2f1e620();
   input += synapse0x2f1e660();
   input += synapse0x2f1e6a0();
   input += synapse0x2f1e6e0();
   input += synapse0x2f1e720();
   input += synapse0x2f1e760();
   input += synapse0x2f1e7a0();
   input += synapse0x2f1e7e0();
   input += synapse0x2f1e820();
   input += synapse0x2f1e860();
   input += synapse0x2f1e8a0();
   input += synapse0x2f1e8e0();
   input += synapse0x2f1e920();
   input += synapse0x2f1ea70();
   input += synapse0x2f1e3b0();
   input += synapse0x2f1e3f0();
   input += synapse0x2f1fbc0();
   input += synapse0x2f1fc00();
   input += synapse0x2f1fc40();
   input += synapse0x2f1fc80();
   input += synapse0x2f1fcc0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f1e220() {
   double input = input0x2f1e220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f1fd00() {
   double input = 0.331751;
   input += synapse0x2f20040();
   input += synapse0x2f20080();
   input += synapse0x2f200c0();
   input += synapse0x2f20100();
   input += synapse0x2f20140();
   input += synapse0x2f20180();
   input += synapse0x2f201c0();
   input += synapse0x2f20200();
   input += synapse0x2f20240();
   input += synapse0x2ce1460();
   input += synapse0x2ce14a0();
   input += synapse0x2ce14e0();
   input += synapse0x2ce1520();
   input += synapse0x2ce1560();
   input += synapse0x2ce15a0();
   input += synapse0x2ce15e0();
   input += synapse0x2f1fe90();
   input += synapse0x2f1fed0();
   input += synapse0x2ce1730();
   input += synapse0x2ce1770();
   input += synapse0x2ce17b0();
   input += synapse0x2ce17f0();
   input += synapse0x2ce1830();
   input += synapse0x2f20a90();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f1fd00() {
   double input = input0x2f1fd00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f20ad0() {
   double input = 1.60493;
   input += synapse0x2f20e10();
   input += synapse0x2f20e50();
   input += synapse0x2f20e90();
   input += synapse0x2f20ed0();
   input += synapse0x2f20f10();
   input += synapse0x2f20f50();
   input += synapse0x2f20f90();
   input += synapse0x2f20fd0();
   input += synapse0x2f21010();
   input += synapse0x2f21050();
   input += synapse0x2f21090();
   input += synapse0x2f210d0();
   input += synapse0x2f21110();
   input += synapse0x2f21150();
   input += synapse0x2f21190();
   input += synapse0x2f211d0();
   input += synapse0x2f20c60();
   input += synapse0x2f20ca0();
   input += synapse0x2f21320();
   input += synapse0x2f21360();
   input += synapse0x2f213a0();
   input += synapse0x2f213e0();
   input += synapse0x2f21420();
   input += synapse0x2f21460();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f20ad0() {
   double input = input0x2f20ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f214a0() {
   double input = 0.444288;
   input += synapse0x2f217e0();
   input += synapse0x2f21820();
   input += synapse0x2f21860();
   input += synapse0x2f218a0();
   input += synapse0x2f218e0();
   input += synapse0x2f21920();
   input += synapse0x2f21960();
   input += synapse0x2f219a0();
   input += synapse0x2f219e0();
   input += synapse0x2f21a20();
   input += synapse0x2f21a60();
   input += synapse0x2f21aa0();
   input += synapse0x2f21ae0();
   input += synapse0x2f21b20();
   input += synapse0x2f21b60();
   input += synapse0x2f21ba0();
   input += synapse0x2f21630();
   input += synapse0x2f21670();
   input += synapse0x2f21cf0();
   input += synapse0x2f21d30();
   input += synapse0x2f21d70();
   input += synapse0x2f21db0();
   input += synapse0x2f21df0();
   input += synapse0x2f21e30();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f214a0() {
   double input = input0x2f214a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f21e70() {
   double input = -0.828275;
   input += synapse0x2f1a830();
   input += synapse0x2f1a870();
   input += synapse0x2f1a8b0();
   input += synapse0x2f1a8f0();
   input += synapse0x2f223c0();
   input += synapse0x2f22400();
   input += synapse0x2f22440();
   input += synapse0x2f22480();
   input += synapse0x2f224c0();
   input += synapse0x2f22500();
   input += synapse0x2f22540();
   input += synapse0x2f22580();
   input += synapse0x2f225c0();
   input += synapse0x2f22600();
   input += synapse0x2f22640();
   input += synapse0x2f22680();
   input += synapse0x2f22000();
   input += synapse0x2f22040();
   input += synapse0x2f227d0();
   input += synapse0x2f22810();
   input += synapse0x2f22850();
   input += synapse0x2f22890();
   input += synapse0x2f228d0();
   input += synapse0x2f22910();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f21e70() {
   double input = input0x2f21e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f22950() {
   double input = -1.06584;
   input += synapse0x2f22c90();
   input += synapse0x2f22cd0();
   input += synapse0x2f22d10();
   input += synapse0x2f22d50();
   input += synapse0x2f22d90();
   input += synapse0x2f22dd0();
   input += synapse0x2f22e10();
   input += synapse0x2f22e50();
   input += synapse0x2f22e90();
   input += synapse0x2f22ed0();
   input += synapse0x2f22f10();
   input += synapse0x2f22f50();
   input += synapse0x2f22f90();
   input += synapse0x2f22fd0();
   input += synapse0x2f23010();
   input += synapse0x2f23050();
   input += synapse0x2f22ae0();
   input += synapse0x2f22b20();
   input += synapse0x2f231a0();
   input += synapse0x2f231e0();
   input += synapse0x2f23220();
   input += synapse0x2f23260();
   input += synapse0x2f232a0();
   input += synapse0x2f232e0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f22950() {
   double input = input0x2f22950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f23320() {
   double input = 2.35121;
   input += synapse0x2f23660();
   input += synapse0x2f236a0();
   input += synapse0x2f236e0();
   input += synapse0x2f23720();
   input += synapse0x2f23760();
   input += synapse0x2f237a0();
   input += synapse0x2f237e0();
   input += synapse0x2f23820();
   input += synapse0x2f23860();
   input += synapse0x2f238a0();
   input += synapse0x2f238e0();
   input += synapse0x2f23920();
   input += synapse0x2f23960();
   input += synapse0x2f239a0();
   input += synapse0x2f239e0();
   input += synapse0x2f23a20();
   input += synapse0x2f234b0();
   input += synapse0x2f234f0();
   input += synapse0x2f20280();
   input += synapse0x2f202c0();
   input += synapse0x2f20300();
   input += synapse0x2f20340();
   input += synapse0x2f20380();
   input += synapse0x2f203c0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f23320() {
   double input = input0x2f23320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f20400() {
   double input = -5.73831;
   input += synapse0x2f20740();
   input += synapse0x2f20780();
   input += synapse0x2f207c0();
   input += synapse0x2f20800();
   input += synapse0x2f20840();
   input += synapse0x2f20880();
   input += synapse0x2f208c0();
   input += synapse0x2f20900();
   input += synapse0x2f20940();
   input += synapse0x2f20980();
   input += synapse0x2f209c0();
   input += synapse0x2f20a00();
   input += synapse0x2f20a40();
   input += synapse0x2f24b80();
   input += synapse0x2f24bc0();
   input += synapse0x2f24c00();
   input += synapse0x2f20590();
   input += synapse0x2f205d0();
   input += synapse0x2f24d50();
   input += synapse0x2f24d90();
   input += synapse0x2f24dd0();
   input += synapse0x2f24e10();
   input += synapse0x2f24e50();
   input += synapse0x2f24e90();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f20400() {
   double input = input0x2f20400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f24ed0() {
   double input = -2.60879;
   input += synapse0x2f25210();
   input += synapse0x2f25250();
   input += synapse0x2f25290();
   input += synapse0x2f252d0();
   input += synapse0x2f25310();
   input += synapse0x2f25350();
   input += synapse0x2f25390();
   input += synapse0x2f253d0();
   input += synapse0x2f25410();
   input += synapse0x2f25450();
   input += synapse0x2f25490();
   input += synapse0x2f254d0();
   input += synapse0x2f25510();
   input += synapse0x2f25550();
   input += synapse0x2f25590();
   input += synapse0x2f255d0();
   input += synapse0x2f25060();
   input += synapse0x2f250a0();
   input += synapse0x2f25720();
   input += synapse0x2f25760();
   input += synapse0x2f257a0();
   input += synapse0x2f257e0();
   input += synapse0x2f25820();
   input += synapse0x2f25860();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f24ed0() {
   double input = input0x2f24ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f258a0() {
   double input = 0.0508012;
   input += synapse0x2f25be0();
   input += synapse0x2f25c20();
   input += synapse0x2f25c60();
   input += synapse0x2f25ca0();
   input += synapse0x2f25ce0();
   input += synapse0x2f25d20();
   input += synapse0x2f25d60();
   input += synapse0x2f25da0();
   input += synapse0x2f25de0();
   input += synapse0x2f25e20();
   input += synapse0x2f25e60();
   input += synapse0x2f25ea0();
   input += synapse0x2f25ee0();
   input += synapse0x2f25f20();
   input += synapse0x2f25f60();
   input += synapse0x2f25fa0();
   input += synapse0x2f25a30();
   input += synapse0x2f25a70();
   input += synapse0x2f260f0();
   input += synapse0x2f26130();
   input += synapse0x2f26170();
   input += synapse0x2f261b0();
   input += synapse0x2f261f0();
   input += synapse0x2f26230();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f258a0() {
   double input = input0x2f258a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f26270() {
   double input = -6.01007;
   input += synapse0x2f265b0();
   input += synapse0x2f265f0();
   input += synapse0x2f26630();
   input += synapse0x2f26670();
   input += synapse0x2f266b0();
   input += synapse0x2f266f0();
   input += synapse0x2f26730();
   input += synapse0x2f26770();
   input += synapse0x2f267b0();
   input += synapse0x2f267f0();
   input += synapse0x2f26830();
   input += synapse0x2f26870();
   input += synapse0x2f268b0();
   input += synapse0x2f268f0();
   input += synapse0x2f26930();
   input += synapse0x2f26970();
   input += synapse0x2f26400();
   input += synapse0x2f26440();
   input += synapse0x2f26ac0();
   input += synapse0x2f26b00();
   input += synapse0x2f26b40();
   input += synapse0x2f26b80();
   input += synapse0x2f26bc0();
   input += synapse0x2f26c00();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f26270() {
   double input = input0x2f26270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f26c40() {
   double input = 0.0958412;
   input += synapse0x2f26f80();
   input += synapse0x2f17200();
   input += synapse0x2f17240();
   input += synapse0x2f17540();
   input += synapse0x2f17580();
   input += synapse0x2f17880();
   input += synapse0x2f178c0();
   input += synapse0x2f17bc0();
   input += synapse0x2f17c00();
   input += synapse0x2f17f00();
   input += synapse0x2f17f40();
   input += synapse0x2f18240();
   input += synapse0x2f18280();
   input += synapse0x2f18580();
   input += synapse0x2f185c0();
   input += synapse0x2f188c0();
   input += synapse0x2f18900();
   input += synapse0x2f18c00();
   input += synapse0x2f18c40();
   input += synapse0x2f18f40();
   input += synapse0x2f18f80();
   input += synapse0x2f19280();
   input += synapse0x2f192c0();
   input += synapse0x2f195c0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f26c40() {
   double input = input0x2f26c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f28a50() {
   double input = -0.469042;
   input += synapse0x2f19600();
   input += synapse0x2f1a2c0();
   input += synapse0x2f1a300();
   input += synapse0x2f26dd0();
   input += synapse0x2f26e10();
   input += synapse0x2f1a600();
   input += synapse0x2f1a640();
   input += synapse0x2187e40();
   input += synapse0x2187e80();
   input += synapse0x2f1ad80();
   input += synapse0x2f1adc0();
   input += synapse0x2f1b0c0();
   input += synapse0x2f1b100();
   input += synapse0x2f1b400();
   input += synapse0x2f1b440();
   input += synapse0x2f1b740();
   input += synapse0x2f1b780();
   input += synapse0x2f1ba80();
   input += synapse0x2f1bac0();
   input += synapse0x2f1bdc0();
   input += synapse0x2f1be00();
   input += synapse0x2f19900();
   input += synapse0x2f19940();
   input += synapse0x2f28cf0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f28a50() {
   double input = input0x2f28a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f28d30() {
   double input = -0.574486;
   input += synapse0x2f29070();
   input += synapse0x2f290b0();
   input += synapse0x2f290f0();
   input += synapse0x2f29130();
   input += synapse0x2f29170();
   input += synapse0x2f291b0();
   input += synapse0x2f291f0();
   input += synapse0x2f29230();
   input += synapse0x2f29270();
   input += synapse0x2f292b0();
   input += synapse0x2f292f0();
   input += synapse0x2f29330();
   input += synapse0x2f29370();
   input += synapse0x2f293b0();
   input += synapse0x2f293f0();
   input += synapse0x2f29430();
   input += synapse0x2f28ec0();
   input += synapse0x2f28f00();
   input += synapse0x2f29580();
   input += synapse0x2f295c0();
   input += synapse0x2f29600();
   input += synapse0x2f29640();
   input += synapse0x2f29680();
   input += synapse0x2f296c0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f28d30() {
   double input = input0x2f28d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f29700() {
   double input = 2.31424;
   input += synapse0x2f29a40();
   input += synapse0x2f29a80();
   input += synapse0x2f29ac0();
   input += synapse0x2f29b00();
   input += synapse0x2f29b40();
   input += synapse0x2f29b80();
   input += synapse0x2f29bc0();
   input += synapse0x2f29c00();
   input += synapse0x2f29c40();
   input += synapse0x2f29c80();
   input += synapse0x2f29cc0();
   input += synapse0x2f29d00();
   input += synapse0x2f29d40();
   input += synapse0x2f29d80();
   input += synapse0x2f29dc0();
   input += synapse0x2f29e00();
   input += synapse0x2f29890();
   input += synapse0x2f298d0();
   input += synapse0x2f29f50();
   input += synapse0x2f29f90();
   input += synapse0x2f29fd0();
   input += synapse0x2f2a010();
   input += synapse0x2f2a050();
   input += synapse0x2f2a090();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f29700() {
   double input = input0x2f29700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f2a0d0() {
   double input = -1.62674;
   input += synapse0x2f2a410();
   input += synapse0x2f2a450();
   input += synapse0x2f2a490();
   input += synapse0x2f2a4d0();
   input += synapse0x2f2a510();
   input += synapse0x2f2a550();
   input += synapse0x2f2a590();
   input += synapse0x2f2a5d0();
   input += synapse0x2f2a610();
   input += synapse0x2f2a650();
   input += synapse0x2f2a690();
   input += synapse0x2f2a6d0();
   input += synapse0x2f2a710();
   input += synapse0x2f2a750();
   input += synapse0x2f2a790();
   input += synapse0x2f2a7d0();
   input += synapse0x2f2a260();
   input += synapse0x2f2a2a0();
   input += synapse0x2f2a920();
   input += synapse0x2f2a960();
   input += synapse0x2f2a9a0();
   input += synapse0x2f2a9e0();
   input += synapse0x2f2aa20();
   input += synapse0x2f2aa60();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f2a0d0() {
   double input = input0x2f2a0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f2aaa0() {
   double input = 0.287474;
   input += synapse0x2f2ade0();
   input += synapse0x2f2ae20();
   input += synapse0x2f2ae60();
   input += synapse0x2f2aea0();
   input += synapse0x2f2aee0();
   input += synapse0x2f2af20();
   input += synapse0x2f2af60();
   input += synapse0x2f2afa0();
   input += synapse0x2f2afe0();
   input += synapse0x2f2b020();
   input += synapse0x2f2b060();
   input += synapse0x2f2b0a0();
   input += synapse0x2f2b0e0();
   input += synapse0x2f2b120();
   input += synapse0x2f2b160();
   input += synapse0x2f2b1a0();
   input += synapse0x2f2ac30();
   input += synapse0x2f2ac70();
   input += synapse0x2f2b2f0();
   input += synapse0x2f2b330();
   input += synapse0x2f2b370();
   input += synapse0x2f2b3b0();
   input += synapse0x2f2b3f0();
   input += synapse0x2f2b430();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f2aaa0() {
   double input = input0x2f2aaa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f2b470() {
   double input = 2.42464;
   input += synapse0x2f2b7b0();
   input += synapse0x2f2b7f0();
   input += synapse0x2f2b830();
   input += synapse0x2f2b870();
   input += synapse0x2f2b8b0();
   input += synapse0x2f2b8f0();
   input += synapse0x2f2b930();
   input += synapse0x2f2b970();
   input += synapse0x2f2b9b0();
   input += synapse0x2f23b70();
   input += synapse0x2f23bb0();
   input += synapse0x2f23bf0();
   input += synapse0x2f23c30();
   input += synapse0x2f23c70();
   input += synapse0x2f23cb0();
   input += synapse0x2f23cf0();
   input += synapse0x2f2b600();
   input += synapse0x2f2b640();
   input += synapse0x2f23e40();
   input += synapse0x2f23e80();
   input += synapse0x2f23ec0();
   input += synapse0x2f23f00();
   input += synapse0x2f23f40();
   input += synapse0x2f23f80();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f2b470() {
   double input = input0x2f2b470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f23fc0() {
   double input = 1.24177;
   input += synapse0x2f24300();
   input += synapse0x2f24340();
   input += synapse0x2f24380();
   input += synapse0x2f243c0();
   input += synapse0x2f24400();
   input += synapse0x2f24440();
   input += synapse0x2f24480();
   input += synapse0x2f244c0();
   input += synapse0x2f24500();
   input += synapse0x2f24540();
   input += synapse0x2f24580();
   input += synapse0x2f245c0();
   input += synapse0x2f24600();
   input += synapse0x2f24640();
   input += synapse0x2f24680();
   input += synapse0x2f246c0();
   input += synapse0x2f24150();
   input += synapse0x2f24190();
   input += synapse0x2f24810();
   input += synapse0x2f24850();
   input += synapse0x2f24890();
   input += synapse0x2f248d0();
   input += synapse0x2f24910();
   input += synapse0x2f24950();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f23fc0() {
   double input = input0x2f23fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f24990() {
   double input = -0.24111;
   input += synapse0x2f24b20();
   input += synapse0x2f2dbb0();
   input += synapse0x2f2dbf0();
   input += synapse0x2f2dc30();
   input += synapse0x2f2dc70();
   input += synapse0x2f2dcb0();
   input += synapse0x2f2dcf0();
   input += synapse0x2f2dd30();
   input += synapse0x2f2dd70();
   input += synapse0x2f2ddb0();
   input += synapse0x2f2ddf0();
   input += synapse0x2f2de30();
   input += synapse0x2f2de70();
   input += synapse0x2f2deb0();
   input += synapse0x2f2def0();
   input += synapse0x2f2df30();
   input += synapse0x2f2da00();
   input += synapse0x2f2da40();
   input += synapse0x2f2e080();
   input += synapse0x2f2e0c0();
   input += synapse0x2f2e100();
   input += synapse0x2f2e140();
   input += synapse0x2f2e180();
   input += synapse0x2f2e1c0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f24990() {
   double input = input0x2f24990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f2e200() {
   double input = 6.34322;
   input += synapse0x2f2e540();
   input += synapse0x2f2e580();
   input += synapse0x2f2e5c0();
   input += synapse0x2f2e600();
   input += synapse0x2f2e640();
   input += synapse0x2f2e680();
   input += synapse0x2f2e6c0();
   input += synapse0x2f2e700();
   input += synapse0x2f2e740();
   input += synapse0x2f2e780();
   input += synapse0x2f2e7c0();
   input += synapse0x2f2e800();
   input += synapse0x2f2e840();
   input += synapse0x2f2e880();
   input += synapse0x2f2e8c0();
   input += synapse0x2f2e900();
   input += synapse0x2f2e390();
   input += synapse0x2f2e3d0();
   input += synapse0x2f2ea50();
   input += synapse0x2f2ea90();
   input += synapse0x2f2ead0();
   input += synapse0x2f2eb10();
   input += synapse0x2f2eb50();
   input += synapse0x2f2eb90();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f2e200() {
   double input = input0x2f2e200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f2ebd0() {
   double input = -1.73936;
   input += synapse0x2f2ef10();
   input += synapse0x2f2ef50();
   input += synapse0x2f2ef90();
   input += synapse0x2f2efd0();
   input += synapse0x2f2f010();
   input += synapse0x2f2f050();
   input += synapse0x2f2f090();
   input += synapse0x2f2f0d0();
   input += synapse0x2f2f110();
   input += synapse0x2f2f150();
   input += synapse0x2f2f190();
   input += synapse0x2f2f1d0();
   input += synapse0x2f2f210();
   input += synapse0x2f2f250();
   input += synapse0x2f2f290();
   input += synapse0x2f2f2d0();
   input += synapse0x2f2ed60();
   input += synapse0x2f2eda0();
   input += synapse0x2f2f420();
   input += synapse0x2f2f460();
   input += synapse0x2f2f4a0();
   input += synapse0x2f2f4e0();
   input += synapse0x2f2f520();
   input += synapse0x2f2f560();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f2ebd0() {
   double input = input0x2f2ebd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f2f5a0() {
   double input = -0.365866;
   input += synapse0x2f2f8e0();
   input += synapse0x2f2f920();
   input += synapse0x2f2f960();
   input += synapse0x2f2f9a0();
   input += synapse0x2f2f9e0();
   input += synapse0x2f2fa20();
   input += synapse0x2f2fa60();
   input += synapse0x2f2faa0();
   input += synapse0x2f2fae0();
   input += synapse0x2f2fb20();
   input += synapse0x2f2fb60();
   input += synapse0x2f2fba0();
   input += synapse0x2f2fbe0();
   input += synapse0x2f2fc20();
   input += synapse0x2f2fc60();
   input += synapse0x2f2fca0();
   input += synapse0x2f2f730();
   input += synapse0x2f2f770();
   input += synapse0x2f2fdf0();
   input += synapse0x2f2fe30();
   input += synapse0x2f2fe70();
   input += synapse0x2f2feb0();
   input += synapse0x2f2fef0();
   input += synapse0x2f2ff30();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f2f5a0() {
   double input = input0x2f2f5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f2ff70() {
   double input = -1.07575;
   input += synapse0x2f302b0();
   input += synapse0x2f302f0();
   input += synapse0x2f30330();
   input += synapse0x2f30370();
   input += synapse0x2f303b0();
   input += synapse0x2f303f0();
   input += synapse0x2f30430();
   input += synapse0x2f30470();
   input += synapse0x2f304b0();
   input += synapse0x2f304f0();
   input += synapse0x2f30530();
   input += synapse0x2f30570();
   input += synapse0x2f305b0();
   input += synapse0x2f305f0();
   input += synapse0x2f30630();
   input += synapse0x2f30670();
   input += synapse0x2f30100();
   input += synapse0x2f30140();
   input += synapse0x2f307c0();
   input += synapse0x2f30800();
   input += synapse0x2f30840();
   input += synapse0x2f30880();
   input += synapse0x2f308c0();
   input += synapse0x2f30900();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f2ff70() {
   double input = input0x2f2ff70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f30940() {
   double input = -1.41438;
   input += synapse0x2f30c80();
   input += synapse0x2f30cc0();
   input += synapse0x2f30d00();
   input += synapse0x2f30d40();
   input += synapse0x2f30d80();
   input += synapse0x2f30dc0();
   input += synapse0x2f30e00();
   input += synapse0x2f30e40();
   input += synapse0x2f30e80();
   input += synapse0x2f30ec0();
   input += synapse0x2f30f00();
   input += synapse0x2f30f40();
   input += synapse0x2f30f80();
   input += synapse0x2f30fc0();
   input += synapse0x2f31000();
   input += synapse0x2f31040();
   input += synapse0x2f30ad0();
   input += synapse0x2f30b10();
   input += synapse0x2f31190();
   input += synapse0x2f311d0();
   input += synapse0x2f31210();
   input += synapse0x2f31250();
   input += synapse0x2f31290();
   input += synapse0x2f312d0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f30940() {
   double input = input0x2f30940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f31310() {
   double input = -1.09167;
   input += synapse0x2f31650();
   input += synapse0x2f31690();
   input += synapse0x2f316d0();
   input += synapse0x2f31710();
   input += synapse0x2f31750();
   input += synapse0x2f31790();
   input += synapse0x2f317d0();
   input += synapse0x2f31810();
   input += synapse0x2f31850();
   input += synapse0x2f31890();
   input += synapse0x2f318d0();
   input += synapse0x2f31910();
   input += synapse0x2f31950();
   input += synapse0x2f31990();
   input += synapse0x2f319d0();
   input += synapse0x2f31a10();
   input += synapse0x2f314a0();
   input += synapse0x2f314e0();
   input += synapse0x2f31b60();
   input += synapse0x2f31ba0();
   input += synapse0x2f31be0();
   input += synapse0x2f31c20();
   input += synapse0x2f31c60();
   input += synapse0x2f31ca0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f31310() {
   double input = input0x2f31310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f31ce0() {
   double input = -1.4526;
   input += synapse0x2f32020();
   input += synapse0x2f32060();
   input += synapse0x2f320a0();
   input += synapse0x2f320e0();
   input += synapse0x2f32120();
   input += synapse0x2f32160();
   input += synapse0x2f321a0();
   input += synapse0x2f321e0();
   input += synapse0x2f32220();
   input += synapse0x2f32260();
   input += synapse0x2f322a0();
   input += synapse0x2f322e0();
   input += synapse0x2f32320();
   input += synapse0x2f32360();
   input += synapse0x2f323a0();
   input += synapse0x2f323e0();
   input += synapse0x2f31e70();
   input += synapse0x2f31eb0();
   input += synapse0x2f32530();
   input += synapse0x2f32570();
   input += synapse0x2f325b0();
   input += synapse0x2f325f0();
   input += synapse0x2f32630();
   input += synapse0x2f32670();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f31ce0() {
   double input = input0x2f31ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f326b0() {
   double input = 2.47252;
   input += synapse0x2f329f0();
   input += synapse0x2f26fc0();
   input += synapse0x2f27000();
   input += synapse0x2f27040();
   input += synapse0x2f27290();
   input += synapse0x2f272d0();
   input += synapse0x2f27310();
   input += synapse0x2f27560();
   input += synapse0x2f275a0();
   input += synapse0x2f277f0();
   input += synapse0x2f27830();
   input += synapse0x2f27870();
   input += synapse0x2f27ac0();
   input += synapse0x2f27b00();
   input += synapse0x2f27d50();
   input += synapse0x2f27d90();
   input += synapse0x2f32840();
   input += synapse0x2f32880();
   input += synapse0x2f27ee0();
   input += synapse0x2f283f0();
   input += synapse0x2f28430();
   input += synapse0x2f28470();
   input += synapse0x2f286c0();
   input += synapse0x2f28700();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f326b0() {
   double input = input0x2f326b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f28740() {
   double input = -3.97242;
   input += synapse0x2f27fb0();
   input += synapse0x2f27ff0();
   input += synapse0x2f28030();
   input += synapse0x2f28070();
   input += synapse0x2f289f0();
   input += synapse0x2f34d40();
   input += synapse0x2f34d80();
   input += synapse0x2f34dc0();
   input += synapse0x2f34e00();
   input += synapse0x2f34e40();
   input += synapse0x2f34e80();
   input += synapse0x2f34ec0();
   input += synapse0x2f34f00();
   input += synapse0x2f34f40();
   input += synapse0x2f34f80();
   input += synapse0x2f34fc0();
   input += synapse0x2f288d0();
   input += synapse0x2f28910();
   input += synapse0x2f35110();
   input += synapse0x2f35150();
   input += synapse0x2f35190();
   input += synapse0x2f351d0();
   input += synapse0x2f35210();
   input += synapse0x2f35250();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f28740() {
   double input = input0x2f28740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f35290() {
   double input = 3.43038;
   input += synapse0x2f355d0();
   input += synapse0x2f35610();
   input += synapse0x2f35650();
   input += synapse0x2f35690();
   input += synapse0x2f356d0();
   input += synapse0x2f35710();
   input += synapse0x2f35750();
   input += synapse0x2f35790();
   input += synapse0x2f357d0();
   input += synapse0x2f35810();
   input += synapse0x2f35850();
   input += synapse0x2f35890();
   input += synapse0x2f358d0();
   input += synapse0x2f35910();
   input += synapse0x2f35950();
   input += synapse0x2f35990();
   input += synapse0x2f35420();
   input += synapse0x2f35460();
   input += synapse0x2f35ae0();
   input += synapse0x2f35b20();
   input += synapse0x2f35b60();
   input += synapse0x2f35ba0();
   input += synapse0x2f35be0();
   input += synapse0x2f35c20();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f35290() {
   double input = input0x2f35290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f35c60() {
   double input = 1.07539;
   input += synapse0x2f35fa0();
   input += synapse0x2f35fe0();
   input += synapse0x2f36020();
   input += synapse0x2f36060();
   input += synapse0x2f360a0();
   input += synapse0x2f360e0();
   input += synapse0x2f36120();
   input += synapse0x2f36160();
   input += synapse0x2f361a0();
   input += synapse0x2f361e0();
   input += synapse0x2f36220();
   input += synapse0x2f36260();
   input += synapse0x2f362a0();
   input += synapse0x2f362e0();
   input += synapse0x2f36320();
   input += synapse0x2f36360();
   input += synapse0x2f35df0();
   input += synapse0x2f35e30();
   input += synapse0x2f364b0();
   input += synapse0x2f364f0();
   input += synapse0x2f36530();
   input += synapse0x2f36570();
   input += synapse0x2f365b0();
   input += synapse0x2f365f0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f35c60() {
   double input = input0x2f35c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f36630() {
   double input = -1.789;
   input += synapse0x2f36970();
   input += synapse0x2f369b0();
   input += synapse0x2f369f0();
   input += synapse0x2f36a30();
   input += synapse0x2f36a70();
   input += synapse0x2f36ab0();
   input += synapse0x2f36af0();
   input += synapse0x2f36b30();
   input += synapse0x2f36b70();
   input += synapse0x2f36bb0();
   input += synapse0x2f36bf0();
   input += synapse0x2f36c30();
   input += synapse0x2f36c70();
   input += synapse0x2f36cb0();
   input += synapse0x2f36cf0();
   input += synapse0x2f36d30();
   input += synapse0x2f367c0();
   input += synapse0x2f36800();
   input += synapse0x2f36e80();
   input += synapse0x2f36ec0();
   input += synapse0x2f36f00();
   input += synapse0x2f36f40();
   input += synapse0x2f36f80();
   input += synapse0x2f36fc0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f36630() {
   double input = input0x2f36630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f37000() {
   double input = -2.47348;
   input += synapse0x2f37340();
   input += synapse0x2f37380();
   input += synapse0x2f373c0();
   input += synapse0x2f37400();
   input += synapse0x2f37440();
   input += synapse0x2f37480();
   input += synapse0x2f374c0();
   input += synapse0x2f37500();
   input += synapse0x2f37540();
   input += synapse0x2f37580();
   input += synapse0x2f375c0();
   input += synapse0x2f37600();
   input += synapse0x2f37640();
   input += synapse0x2f37680();
   input += synapse0x2f376c0();
   input += synapse0x2f37700();
   input += synapse0x2f37190();
   input += synapse0x2f371d0();
   input += synapse0x2f37850();
   input += synapse0x2f37890();
   input += synapse0x2f378d0();
   input += synapse0x2f37910();
   input += synapse0x2f37950();
   input += synapse0x2f37990();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f37000() {
   double input = input0x2f37000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f379d0() {
   double input = -2.86796;
   input += synapse0x2f37d10();
   input += synapse0x2f37d50();
   input += synapse0x2f37d90();
   input += synapse0x2f37dd0();
   input += synapse0x2f37e10();
   input += synapse0x2f37e50();
   input += synapse0x2f37e90();
   input += synapse0x2f37ed0();
   input += synapse0x2f37f10();
   input += synapse0x2f37f50();
   input += synapse0x2f37f90();
   input += synapse0x2f37fd0();
   input += synapse0x2f38010();
   input += synapse0x2f38050();
   input += synapse0x2f38090();
   input += synapse0x2f380d0();
   input += synapse0x2f37b60();
   input += synapse0x2f37ba0();
   input += synapse0x2f38220();
   input += synapse0x2f38260();
   input += synapse0x2f382a0();
   input += synapse0x2f382e0();
   input += synapse0x2f38320();
   input += synapse0x2f38360();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f379d0() {
   double input = input0x2f379d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f383a0() {
   double input = 1.29577;
   input += synapse0x2f386e0();
   input += synapse0x2f38720();
   input += synapse0x2f38760();
   input += synapse0x2f387a0();
   input += synapse0x2f387e0();
   input += synapse0x2f38820();
   input += synapse0x2f38860();
   input += synapse0x2f388a0();
   input += synapse0x2f388e0();
   input += synapse0x2f38920();
   input += synapse0x2f38960();
   input += synapse0x2f389a0();
   input += synapse0x2f389e0();
   input += synapse0x2f38a20();
   input += synapse0x2f38a60();
   input += synapse0x2f38aa0();
   input += synapse0x2f38530();
   input += synapse0x2f38570();
   input += synapse0x2f38bf0();
   input += synapse0x2f38c30();
   input += synapse0x2f38c70();
   input += synapse0x2f38cb0();
   input += synapse0x2f38cf0();
   input += synapse0x2f38d30();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f383a0() {
   double input = input0x2f383a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f38d70() {
   double input = -6.53897;
   input += synapse0x2f390b0();
   input += synapse0x2f390f0();
   input += synapse0x2f39130();
   input += synapse0x2f39170();
   input += synapse0x2f391b0();
   input += synapse0x2f391f0();
   input += synapse0x2f39230();
   input += synapse0x2f39270();
   input += synapse0x2f392b0();
   input += synapse0x2f392f0();
   input += synapse0x2f39330();
   input += synapse0x2f39370();
   input += synapse0x2f393b0();
   input += synapse0x2f393f0();
   input += synapse0x2f39430();
   input += synapse0x2f39470();
   input += synapse0x2f38f00();
   input += synapse0x2f38f40();
   input += synapse0x2f395c0();
   input += synapse0x2f39600();
   input += synapse0x2f39640();
   input += synapse0x2f39680();
   input += synapse0x2f396c0();
   input += synapse0x2f39700();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f38d70() {
   double input = input0x2f38d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f39740() {
   double input = -0.319115;
   input += synapse0x2f221b0();
   input += synapse0x2f221f0();
   input += synapse0x2f22230();
   input += synapse0x2f22270();
   input += synapse0x2f222b0();
   input += synapse0x2f222f0();
   input += synapse0x2f22330();
   input += synapse0x2f22370();
   input += synapse0x2f39e90();
   input += synapse0x2f39ed0();
   input += synapse0x2f39f10();
   input += synapse0x2f39f50();
   input += synapse0x2f39f90();
   input += synapse0x2f39fd0();
   input += synapse0x2f3a010();
   input += synapse0x2f3a050();
   input += synapse0x2f398d0();
   input += synapse0x2f39910();
   input += synapse0x2f3a1a0();
   input += synapse0x2f3a1e0();
   input += synapse0x2f3a220();
   input += synapse0x2f3a260();
   input += synapse0x2f3a2a0();
   input += synapse0x2f3a2e0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f39740() {
   double input = input0x2f39740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f3a320() {
   double input = 0.150862;
   input += synapse0x2f3a660();
   input += synapse0x2f3a6a0();
   input += synapse0x2f3a6e0();
   input += synapse0x2f3a720();
   input += synapse0x2f3a760();
   input += synapse0x2f3a7a0();
   input += synapse0x2f3a7e0();
   input += synapse0x2f3a820();
   input += synapse0x2f3a860();
   input += synapse0x2f3a8a0();
   input += synapse0x2f3a8e0();
   input += synapse0x2f3a920();
   input += synapse0x2f3a960();
   input += synapse0x2f3a9a0();
   input += synapse0x2f3a9e0();
   input += synapse0x2f3aa20();
   input += synapse0x2f3a4b0();
   input += synapse0x2f3a4f0();
   input += synapse0x2f3ab70();
   input += synapse0x2f3abb0();
   input += synapse0x2f3abf0();
   input += synapse0x2f3ac30();
   input += synapse0x2f3ac70();
   input += synapse0x2f3acb0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f3a320() {
   double input = input0x2f3a320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f3acf0() {
   double input = 0.996661;
   input += synapse0x2f3b030();
   input += synapse0x2f3b070();
   input += synapse0x2f3b0b0();
   input += synapse0x2f3b0f0();
   input += synapse0x2f3b130();
   input += synapse0x2f3b170();
   input += synapse0x2f3b1b0();
   input += synapse0x2f3b1f0();
   input += synapse0x2f3b230();
   input += synapse0x2f3b270();
   input += synapse0x2f3b2b0();
   input += synapse0x2f3b2f0();
   input += synapse0x2f3b330();
   input += synapse0x2f3b370();
   input += synapse0x2f3b3b0();
   input += synapse0x2f3b3f0();
   input += synapse0x2f3ae80();
   input += synapse0x2f3aec0();
   input += synapse0x2f2b9f0();
   input += synapse0x2f2ba30();
   input += synapse0x2f2ba70();
   input += synapse0x2f2bab0();
   input += synapse0x2f2baf0();
   input += synapse0x2f2bb30();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f3acf0() {
   double input = input0x2f3acf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f2bb70() {
   double input = -3.32851;
   input += synapse0x2f2beb0();
   input += synapse0x2f2bef0();
   input += synapse0x2f2bf30();
   input += synapse0x2f2bf70();
   input += synapse0x2f2bfb0();
   input += synapse0x2f2bff0();
   input += synapse0x2f2c030();
   input += synapse0x2f2c070();
   input += synapse0x2f2c0b0();
   input += synapse0x2f2c0f0();
   input += synapse0x2f2c130();
   input += synapse0x2f2c170();
   input += synapse0x2f2c1b0();
   input += synapse0x2f2c1f0();
   input += synapse0x2f2c230();
   input += synapse0x2f2c270();
   input += synapse0x2f2bd00();
   input += synapse0x2f2bd40();
   input += synapse0x2f2c3c0();
   input += synapse0x2f2c400();
   input += synapse0x2f2c440();
   input += synapse0x2f2c480();
   input += synapse0x2f2c4c0();
   input += synapse0x2f2c500();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f2bb70() {
   double input = input0x2f2bb70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f2c540() {
   double input = 1.01364;
   input += synapse0x2f2c880();
   input += synapse0x2f2c8c0();
   input += synapse0x2f2c900();
   input += synapse0x2f2c940();
   input += synapse0x2f2c980();
   input += synapse0x2f2c9c0();
   input += synapse0x2f2ca00();
   input += synapse0x2f2ca40();
   input += synapse0x2f2ca80();
   input += synapse0x2f2cac0();
   input += synapse0x2f2cb00();
   input += synapse0x2f2cb40();
   input += synapse0x2f2cb80();
   input += synapse0x2f2cbc0();
   input += synapse0x2f2cc00();
   input += synapse0x2f2cc40();
   input += synapse0x2f2c6d0();
   input += synapse0x2f2c710();
   input += synapse0x2f2cd90();
   input += synapse0x2f2cdd0();
   input += synapse0x2f2ce10();
   input += synapse0x2f2ce50();
   input += synapse0x2f2ce90();
   input += synapse0x2f2ced0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f2c540() {
   double input = input0x2f2c540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f2cf10() {
   double input = 2.59606;
   input += synapse0x2f2d250();
   input += synapse0x2f2d290();
   input += synapse0x2f2d2d0();
   input += synapse0x2f2d310();
   input += synapse0x2f2d350();
   input += synapse0x2f2d390();
   input += synapse0x2f2d3d0();
   input += synapse0x2f2d410();
   input += synapse0x2f2d450();
   input += synapse0x2f2d490();
   input += synapse0x2f2d4d0();
   input += synapse0x2f2d510();
   input += synapse0x2f2d550();
   input += synapse0x2f2d590();
   input += synapse0x2f2d5d0();
   input += synapse0x2f2d610();
   input += synapse0x2f2d0a0();
   input += synapse0x2f2d0e0();
   input += synapse0x2f2d760();
   input += synapse0x2f2d7a0();
   input += synapse0x2f2d7e0();
   input += synapse0x2f2d820();
   input += synapse0x2f2d860();
   input += synapse0x2f2d8a0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f2cf10() {
   double input = input0x2f2cf10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f3f550() {
   double input = 0.449359;
   input += synapse0x2f3f770();
   input += synapse0x2f3f7b0();
   input += synapse0x2f3f7f0();
   input += synapse0x2f3f830();
   input += synapse0x2f3f870();
   input += synapse0x2f3f8b0();
   input += synapse0x2f3f8f0();
   input += synapse0x2f3f930();
   input += synapse0x2f3f970();
   input += synapse0x2f3f9b0();
   input += synapse0x2f3f9f0();
   input += synapse0x2f3fa30();
   input += synapse0x2f3fa70();
   input += synapse0x2f3fab0();
   input += synapse0x2f3faf0();
   input += synapse0x2f3fb30();
   input += synapse0x2f2d8e0();
   input += synapse0x2f2d920();
   input += synapse0x2f3fc80();
   input += synapse0x2f3fcc0();
   input += synapse0x2f3fd00();
   input += synapse0x2f3fd40();
   input += synapse0x2f3fd80();
   input += synapse0x2f3fdc0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f3f550() {
   double input = input0x2f3f550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f3fe00() {
   double input = 6.02651;
   input += synapse0x2f40140();
   input += synapse0x2f40180();
   input += synapse0x2f401c0();
   input += synapse0x2f40200();
   input += synapse0x2f40240();
   input += synapse0x2f40280();
   input += synapse0x2f402c0();
   input += synapse0x2f40300();
   input += synapse0x2f40340();
   input += synapse0x2f40380();
   input += synapse0x2f403c0();
   input += synapse0x2f40400();
   input += synapse0x2f40440();
   input += synapse0x2f40480();
   input += synapse0x2f404c0();
   input += synapse0x2f40500();
   input += synapse0x2f3ff90();
   input += synapse0x2f3ffd0();
   input += synapse0x2f40650();
   input += synapse0x2f40690();
   input += synapse0x2f406d0();
   input += synapse0x2f40710();
   input += synapse0x2f40750();
   input += synapse0x2f40790();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f3fe00() {
   double input = input0x2f3fe00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f407d0() {
   double input = 2.69839;
   input += synapse0x2f40b10();
   input += synapse0x2f40b50();
   input += synapse0x2f40b90();
   input += synapse0x2f40bd0();
   input += synapse0x2f40c10();
   input += synapse0x2f40c50();
   input += synapse0x2f40c90();
   input += synapse0x2f40cd0();
   input += synapse0x2f40d10();
   input += synapse0x2f40d50();
   input += synapse0x2f40d90();
   input += synapse0x2f40dd0();
   input += synapse0x2f40e10();
   input += synapse0x2f40e50();
   input += synapse0x2f40e90();
   input += synapse0x2f40ed0();
   input += synapse0x2f40960();
   input += synapse0x2f409a0();
   input += synapse0x2f41020();
   input += synapse0x2f41060();
   input += synapse0x2f410a0();
   input += synapse0x2f410e0();
   input += synapse0x2f41120();
   input += synapse0x2f41160();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f407d0() {
   double input = input0x2f407d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f411a0() {
   double input = -1.33231;
   input += synapse0x2f414e0();
   input += synapse0x2f41520();
   input += synapse0x2f41560();
   input += synapse0x2f415a0();
   input += synapse0x2f415e0();
   input += synapse0x2f41620();
   input += synapse0x2f41660();
   input += synapse0x2f416a0();
   input += synapse0x2f416e0();
   input += synapse0x2f41720();
   input += synapse0x2f41760();
   input += synapse0x2f417a0();
   input += synapse0x2f417e0();
   input += synapse0x2f41820();
   input += synapse0x2f41860();
   input += synapse0x2f418a0();
   input += synapse0x2f41330();
   input += synapse0x2f41370();
   input += synapse0x2f419f0();
   input += synapse0x2f41a30();
   input += synapse0x2f41a70();
   input += synapse0x2f41ab0();
   input += synapse0x2f41af0();
   input += synapse0x2f41b30();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f411a0() {
   double input = input0x2f411a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f483a0() {
   double input = 2.87603;
   input += synapse0x2f1cf70();
   input += synapse0x2f1cfb0();
   input += synapse0x2f1e4d0();
   input += synapse0x2f1e510();
   input += synapse0x2f1ffb0();
   input += synapse0x2f1fff0();
   input += synapse0x2f20d80();
   input += synapse0x2f20dc0();
   input += synapse0x2f21750();
   input += synapse0x2f21790();
   input += synapse0x2f22120();
   input += synapse0x2f22160();
   input += synapse0x2f22c00();
   input += synapse0x2f22c40();
   input += synapse0x2f235d0();
   input += synapse0x2f23610();
   input += synapse0x2f206b0();
   input += synapse0x2f206f0();
   input += synapse0x2f25180();
   input += synapse0x2f251c0();
   input += synapse0x2f25b50();
   input += synapse0x2f25b90();
   input += synapse0x2f26520();
   input += synapse0x2f26560();
   input += synapse0x2f26ef0();
   input += synapse0x2f26f30();
   input += synapse0x2f19f80();
   input += synapse0x2f19fc0();
   input += synapse0x2f28fe0();
   input += synapse0x2f29020();
   input += synapse0x2f299b0();
   input += synapse0x2f299f0();
   input += synapse0x2f2a380();
   input += synapse0x2f2a3c0();
   input += synapse0x2f2ad50();
   input += synapse0x2f2ad90();
   input += synapse0x2f2b720();
   input += synapse0x2f2b760();
   input += synapse0x2f24270();
   input += synapse0x2f242b0();
   input += synapse0x2f2db20();
   input += synapse0x2f2db60();
   input += synapse0x2f2e4b0();
   input += synapse0x2f2e4f0();
   input += synapse0x2f2ee80();
   input += synapse0x2f2eec0();
   input += synapse0x2f2f850();
   input += synapse0x2f2f890();
   input += synapse0x2f30220();
   input += synapse0x2f30260();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f483a0() {
   double input = input0x2f483a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f48740() {
   double input = -0.179753;
   input += synapse0x2f32960();
   input += synapse0x2f329a0();
   input += synapse0x2f27f20();
   input += synapse0x2f27f60();
   input += synapse0x2f35540();
   input += synapse0x2f35580();
   input += synapse0x2f35f10();
   input += synapse0x2f35f50();
   input += synapse0x2f368e0();
   input += synapse0x2f36920();
   input += synapse0x2f372b0();
   input += synapse0x2f372f0();
   input += synapse0x2f37c80();
   input += synapse0x2f37cc0();
   input += synapse0x2f38650();
   input += synapse0x2f38690();
   input += synapse0x2f39020();
   input += synapse0x2f39060();
   input += synapse0x2f399f0();
   input += synapse0x2f39a30();
   input += synapse0x2f3a5d0();
   input += synapse0x2f3a610();
   input += synapse0x2f3afa0();
   input += synapse0x2f3afe0();
   input += synapse0x2f2be20();
   input += synapse0x2f2be60();
   input += synapse0x2f2c7f0();
   input += synapse0x2f2c830();
   input += synapse0x2f2d1c0();
   input += synapse0x2f2d200();
   input += synapse0x2f3f6e0();
   input += synapse0x2f3f720();
   input += synapse0x2f400b0();
   input += synapse0x2f400f0();
   input += synapse0x2f40a80();
   input += synapse0x2f40ac0();
   input += synapse0x2f41450();
   input += synapse0x2f41490();
   input += synapse0x2f1c2c0();
   input += synapse0x2f1c300();
   input += synapse0x2f30bf0();
   input += synapse0x2f30c30();
   input += synapse0x2f41b70();
   input += synapse0x2f41bb0();
   input += synapse0x2f41bf0();
   input += synapse0x2f41c30();
   input += synapse0x2f48ae0();
   input += synapse0x2f48b20();
   input += synapse0x2f48b60();
   input += synapse0x2f48ba0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f48740() {
   double input = input0x2f48740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f48be0() {
   double input = 0.451267;
   input += synapse0x2f48f20();
   input += synapse0x2f48f60();
   input += synapse0x2f48fa0();
   input += synapse0x2f48fe0();
   input += synapse0x2f49020();
   input += synapse0x2f49060();
   input += synapse0x2f490a0();
   input += synapse0x2f490e0();
   input += synapse0x2f49120();
   input += synapse0x2f49160();
   input += synapse0x2f491a0();
   input += synapse0x2f491e0();
   input += synapse0x2f49220();
   input += synapse0x2f49260();
   input += synapse0x2f492a0();
   input += synapse0x2f492e0();
   input += synapse0x2f48d70();
   input += synapse0x2f48db0();
   input += synapse0x2f49430();
   input += synapse0x2f49470();
   input += synapse0x2f494b0();
   input += synapse0x2f494f0();
   input += synapse0x2f49530();
   input += synapse0x2f49570();
   input += synapse0x2f495b0();
   input += synapse0x2f495f0();
   input += synapse0x2f49630();
   input += synapse0x2f49670();
   input += synapse0x2f496b0();
   input += synapse0x2f496f0();
   input += synapse0x2f49730();
   input += synapse0x2f49770();
   input += synapse0x2f49320();
   input += synapse0x2f49360();
   input += synapse0x2f493a0();
   input += synapse0x2f493e0();
   input += synapse0x2f499c0();
   input += synapse0x2f49a00();
   input += synapse0x2f49a40();
   input += synapse0x2f49a80();
   input += synapse0x2f49ac0();
   input += synapse0x2f49b00();
   input += synapse0x2f49b40();
   input += synapse0x2f49b80();
   input += synapse0x2f49bc0();
   input += synapse0x2f49c00();
   input += synapse0x2f49c40();
   input += synapse0x2f49c80();
   input += synapse0x2f49cc0();
   input += synapse0x2f49d00();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f48be0() {
   double input = input0x2f48be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f49d40() {
   double input = 1.14015;
   input += synapse0x2f4a080();
   input += synapse0x2f4a0c0();
   input += synapse0x2f4a100();
   input += synapse0x2f4a140();
   input += synapse0x2f4a180();
   input += synapse0x2f4a1c0();
   input += synapse0x2f4a200();
   input += synapse0x2f4a240();
   input += synapse0x2f4a280();
   input += synapse0x2f4a2c0();
   input += synapse0x2f4a300();
   input += synapse0x2f4a340();
   input += synapse0x2f4a380();
   input += synapse0x2f4a3c0();
   input += synapse0x2f4a400();
   input += synapse0x2f4a440();
   input += synapse0x2f49ed0();
   input += synapse0x2f49f10();
   input += synapse0x2f4a590();
   input += synapse0x2f4a5d0();
   input += synapse0x2f4a610();
   input += synapse0x2f4a650();
   input += synapse0x2f4a690();
   input += synapse0x2f4a6d0();
   input += synapse0x2f4a710();
   input += synapse0x2f4a750();
   input += synapse0x2f4a790();
   input += synapse0x2f4a7d0();
   input += synapse0x2f4a810();
   input += synapse0x2f4a850();
   input += synapse0x2f4a890();
   input += synapse0x2f4a8d0();
   input += synapse0x2f4a480();
   input += synapse0x2f4a4c0();
   input += synapse0x2f4a500();
   input += synapse0x2f4a540();
   input += synapse0x2f4ab20();
   input += synapse0x2f4ab60();
   input += synapse0x2f4aba0();
   input += synapse0x2f4abe0();
   input += synapse0x2f4ac20();
   input += synapse0x2f4ac60();
   input += synapse0x2f4aca0();
   input += synapse0x2f4ace0();
   input += synapse0x2f4ad20();
   input += synapse0x2f4ad60();
   input += synapse0x2f4ada0();
   input += synapse0x2f4ade0();
   input += synapse0x2f4ae20();
   input += synapse0x2f4ae60();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f49d40() {
   double input = input0x2f49d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f4aea0() {
   double input = 1.2893;
   input += synapse0x2f4b1e0();
   input += synapse0x2f4b220();
   input += synapse0x2f4b260();
   input += synapse0x2f4b2a0();
   input += synapse0x2f4b2e0();
   input += synapse0x2f4b320();
   input += synapse0x2f4b360();
   input += synapse0x2f4b3a0();
   input += synapse0x2f4b3e0();
   input += synapse0x2f4b420();
   input += synapse0x2f4b460();
   input += synapse0x2f4b4a0();
   input += synapse0x2f4b4e0();
   input += synapse0x2f4b520();
   input += synapse0x2f4b560();
   input += synapse0x2f4b5a0();
   input += synapse0x2f4b030();
   input += synapse0x2f4b070();
   input += synapse0x2f4b6f0();
   input += synapse0x2f4b730();
   input += synapse0x2f4b770();
   input += synapse0x2f4b7b0();
   input += synapse0x2f4b7f0();
   input += synapse0x2f4b830();
   input += synapse0x2f4b870();
   input += synapse0x2f4b8b0();
   input += synapse0x2f4b8f0();
   input += synapse0x2f4b930();
   input += synapse0x2f4b970();
   input += synapse0x2f4b9b0();
   input += synapse0x2f4b9f0();
   input += synapse0x2f4ba30();
   input += synapse0x2f4b5e0();
   input += synapse0x2f4b620();
   input += synapse0x2f4b660();
   input += synapse0x2f4b6a0();
   input += synapse0x2f4bc80();
   input += synapse0x2f4bcc0();
   input += synapse0x2f4bd00();
   input += synapse0x2f4bd40();
   input += synapse0x2f4bd80();
   input += synapse0x2f4bdc0();
   input += synapse0x2f4be00();
   input += synapse0x2f4be40();
   input += synapse0x2f4be80();
   input += synapse0x2f4bec0();
   input += synapse0x2f4bf00();
   input += synapse0x2f4bf40();
   input += synapse0x2f4bf80();
   input += synapse0x2f4bfc0();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f4aea0() {
   double input = input0x2f4aea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2p::input0x2f4c000() {
   double input = -0.364136;
   input += synapse0x2f4c220();
   input += synapse0x2f4c260();
   input += synapse0x2f4c2a0();
   input += synapse0x2f4c2e0();
   input += synapse0x2f4c320();
   return input;
}

double NNfunction_nn_chi1_charge2p::neuron0x2f4c000() {
   double input = input0x2f4c000();
   return (input * 1)+0;
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c350() {
   return (neuron0x2f17070()*0.00896935);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c390() {
   return (neuron0x2f17320()*0.00535227);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c3d0() {
   return (neuron0x2f17660()*-0.0301192);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c410() {
   return (neuron0x2f179a0()*-0.142997);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c450() {
   return (neuron0x2f17ce0()*0.00281736);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c490() {
   return (neuron0x2f18020()*0.0018516);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c4d0() {
   return (neuron0x2f18360()*-0.00436675);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c510() {
   return (neuron0x2f186a0()*-0.0104502);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c550() {
   return (neuron0x2f189e0()*-0.00175811);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c590() {
   return (neuron0x2f18d20()*0.0119641);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c5d0() {
   return (neuron0x2f19060()*0.00297803);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c610() {
   return (neuron0x2f193a0()*-0.648827);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c650() {
   return (neuron0x2f196e0()*-0.00263444);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c690() {
   return (neuron0x2f19a20()*-0.00438786);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c6d0() {
   return (neuron0x2f19d60()*0.00326459);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c710() {
   return (neuron0x2f1a0a0()*0.0042602);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c1a0() {
   return (neuron0x2f1a3e0()*-0.000130438);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c1e0() {
   return (neuron0x2f1a940()*-0.0121861);
}

double NNfunction_nn_chi1_charge2p::synapse0x2cd32a0() {
   return (neuron0x2f1ab60()*0.0072261);
}

double NNfunction_nn_chi1_charge2p::synapse0x2cd32e0() {
   return (neuron0x2f1aea0()*-0.0154624);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c860() {
   return (neuron0x2f1b1e0()*-0.0104477);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c8a0() {
   return (neuron0x2f1b520()*-0.0141926);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c8e0() {
   return (neuron0x2f1b860()*0.000962159);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c920() {
   return (neuron0x2f1bba0()*0.644256);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1cca0() {
   return (neuron0x2f17070()*-0.214353);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1cce0() {
   return (neuron0x2f17320()*-0.172378);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1cd20() {
   return (neuron0x2f17660()*0.02557);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1cd60() {
   return (neuron0x2f179a0()*-0.480396);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1cda0() {
   return (neuron0x2f17ce0()*0.223455);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1cde0() {
   return (neuron0x2f18020()*0.263428);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1ce20() {
   return (neuron0x2f18360()*1.59789);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1ce60() {
   return (neuron0x2f186a0()*0.137301);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1cea0() {
   return (neuron0x2f189e0()*0.615642);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c750() {
   return (neuron0x2f18d20()*-0.507394);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c790() {
   return (neuron0x2f19060()*0.0111379);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c7d0() {
   return (neuron0x2f193a0()*1.08211);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c810() {
   return (neuron0x2f196e0()*-0.69808);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d0f0() {
   return (neuron0x2f19a20()*0.266868);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d130() {
   return (neuron0x2f19d60()*-0.20586);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d170() {
   return (neuron0x2f1a0a0()*-0.0813792);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1caf0() {
   return (neuron0x2f1a3e0()*0.753282);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1cb30() {
   return (neuron0x2f1a940()*-0.489963);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d2c0() {
   return (neuron0x2f1ab60()*-0.228658);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d300() {
   return (neuron0x2f1aea0()*-0.168599);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d340() {
   return (neuron0x2f1b1e0()*0.914806);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d380() {
   return (neuron0x2f1b520()*0.081712);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d3c0() {
   return (neuron0x2f1b860()*-0.174124);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d400() {
   return (neuron0x2f1bba0()*1.36888);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d780() {
   return (neuron0x2f17070()*0.150113);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d7c0() {
   return (neuron0x2f17320()*-0.000365337);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d800() {
   return (neuron0x2f17660()*0.13095);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d840() {
   return (neuron0x2f179a0()*0.0518302);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d880() {
   return (neuron0x2f17ce0()*0.0165262);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d8c0() {
   return (neuron0x2f18020()*0.0241508);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d900() {
   return (neuron0x2f18360()*0.00856706);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d940() {
   return (neuron0x2f186a0()*-0.0101292);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d980() {
   return (neuron0x2f189e0()*0.00182544);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d9c0() {
   return (neuron0x2f18d20()*0.082);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1da00() {
   return (neuron0x2f19060()*-0.0197124);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1da40() {
   return (neuron0x2f193a0()*2.40096);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1da80() {
   return (neuron0x2f196e0()*0.0256165);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1dac0() {
   return (neuron0x2f19a20()*0.00273789);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1db00() {
   return (neuron0x2f19d60()*0.00513186);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1db40() {
   return (neuron0x2f1a0a0()*0.0280689);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d5d0() {
   return (neuron0x2f1a3e0()*-0.00528316);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d610() {
   return (neuron0x2f1a940()*0.0383474);
}

double NNfunction_nn_chi1_charge2p::synapse0x2ce1110() {
   return (neuron0x2f1ab60()*0.0728903);
}

double NNfunction_nn_chi1_charge2p::synapse0x2ce1150() {
   return (neuron0x2f1aea0()*0.00219018);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1fa80() {
   return (neuron0x2f1b1e0()*-0.0288363);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1fac0() {
   return (neuron0x2f1b520()*0.00827772);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f16db0() {
   return (neuron0x2f1b860()*-0.0097551);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f16df0() {
   return (neuron0x2f1bba0()*-5.99147);
}

double NNfunction_nn_chi1_charge2p::synapse0x2ce1a00() {
   return (neuron0x2f17070()*0.00795188);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d000() {
   return (neuron0x2f17320()*0.0133125);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d040() {
   return (neuron0x2f17660()*-0.829866);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1d080() {
   return (neuron0x2f179a0()*-0.0020881);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1dc90() {
   return (neuron0x2f17ce0()*0.0210894);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1dcd0() {
   return (neuron0x2f18020()*0.0130319);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1dd10() {
   return (neuron0x2f18360()*-0.0128874);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1dd50() {
   return (neuron0x2f186a0()*0.0093943);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1dd90() {
   return (neuron0x2f189e0()*-0.00301526);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1ddd0() {
   return (neuron0x2f18d20()*0.0168275);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1de10() {
   return (neuron0x2f19060()*0.0266376);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1de50() {
   return (neuron0x2f193a0()*-1.5668);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1de90() {
   return (neuron0x2f196e0()*0.0116249);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1ded0() {
   return (neuron0x2f19a20()*0.0121931);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1df10() {
   return (neuron0x2f19d60()*0.0122264);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1df50() {
   return (neuron0x2f1a0a0()*0.0169774);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f16e30() {
   return (neuron0x2f1a3e0()*0.0358724);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f16e70() {
   return (neuron0x2f1a940()*0.0105521);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e0a0() {
   return (neuron0x2f1ab60()*-0.0194836);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e0e0() {
   return (neuron0x2f1aea0()*0.00794118);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e120() {
   return (neuron0x2f1b1e0()*0.0331037);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e160() {
   return (neuron0x2f1b520()*0.00540864);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e1a0() {
   return (neuron0x2f1b860()*0.0175601);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e1e0() {
   return (neuron0x2f1bba0()*1.54933);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e560() {
   return (neuron0x2f17070()*-0.702029);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e5a0() {
   return (neuron0x2f17320()*0.569758);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e5e0() {
   return (neuron0x2f17660()*-1.3674);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e620() {
   return (neuron0x2f179a0()*-1.67979);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e660() {
   return (neuron0x2f17ce0()*0.0950664);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e6a0() {
   return (neuron0x2f18020()*0.343971);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e6e0() {
   return (neuron0x2f18360()*-0.435492);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e720() {
   return (neuron0x2f186a0()*0.0414266);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e760() {
   return (neuron0x2f189e0()*1.3326);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e7a0() {
   return (neuron0x2f18d20()*0.242113);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e7e0() {
   return (neuron0x2f19060()*0.480788);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e820() {
   return (neuron0x2f193a0()*2.02959);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e860() {
   return (neuron0x2f196e0()*-0.618669);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e8a0() {
   return (neuron0x2f19a20()*-1.75894);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e8e0() {
   return (neuron0x2f19d60()*-0.235638);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e920() {
   return (neuron0x2f1a0a0()*-0.774006);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1ea70() {
   return (neuron0x2f1a3e0()*-0.142037);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e3b0() {
   return (neuron0x2f1a940()*-0.424212);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e3f0() {
   return (neuron0x2f1ab60()*-0.595535);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1fbc0() {
   return (neuron0x2f1aea0()*0.0157172);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1fc00() {
   return (neuron0x2f1b1e0()*1.37289);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1fc40() {
   return (neuron0x2f1b520()*-0.442648);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1fc80() {
   return (neuron0x2f1b860()*-0.744217);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1fcc0() {
   return (neuron0x2f1bba0()*-4.35515);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20040() {
   return (neuron0x2f17070()*0.62713);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20080() {
   return (neuron0x2f17320()*0.529019);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f200c0() {
   return (neuron0x2f17660()*-0.913456);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20100() {
   return (neuron0x2f179a0()*1.95922);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20140() {
   return (neuron0x2f17ce0()*-0.00596918);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20180() {
   return (neuron0x2f18020()*0.0163875);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f201c0() {
   return (neuron0x2f18360()*-0.787199);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20200() {
   return (neuron0x2f186a0()*0.432484);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20240() {
   return (neuron0x2f189e0()*-0.0950618);
}

double NNfunction_nn_chi1_charge2p::synapse0x2ce1460() {
   return (neuron0x2f18d20()*0.147069);
}

double NNfunction_nn_chi1_charge2p::synapse0x2ce14a0() {
   return (neuron0x2f19060()*0.910737);
}

double NNfunction_nn_chi1_charge2p::synapse0x2ce14e0() {
   return (neuron0x2f193a0()*-0.58369);
}

double NNfunction_nn_chi1_charge2p::synapse0x2ce1520() {
   return (neuron0x2f196e0()*0.45902);
}

double NNfunction_nn_chi1_charge2p::synapse0x2ce1560() {
   return (neuron0x2f19a20()*-0.435041);
}

double NNfunction_nn_chi1_charge2p::synapse0x2ce15a0() {
   return (neuron0x2f19d60()*-0.9176);
}

double NNfunction_nn_chi1_charge2p::synapse0x2ce15e0() {
   return (neuron0x2f1a0a0()*0.0666541);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1fe90() {
   return (neuron0x2f1a3e0()*0.743344);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1fed0() {
   return (neuron0x2f1a940()*0.176755);
}

double NNfunction_nn_chi1_charge2p::synapse0x2ce1730() {
   return (neuron0x2f1ab60()*0.874452);
}

double NNfunction_nn_chi1_charge2p::synapse0x2ce1770() {
   return (neuron0x2f1aea0()*0.711748);
}

double NNfunction_nn_chi1_charge2p::synapse0x2ce17b0() {
   return (neuron0x2f1b1e0()*2.37118);
}

double NNfunction_nn_chi1_charge2p::synapse0x2ce17f0() {
   return (neuron0x2f1b520()*1.29478);
}

double NNfunction_nn_chi1_charge2p::synapse0x2ce1830() {
   return (neuron0x2f1b860()*1.65294);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20a90() {
   return (neuron0x2f1bba0()*-0.608496);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20e10() {
   return (neuron0x2f17070()*-0.0109975);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20e50() {
   return (neuron0x2f17320()*0.429473);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20e90() {
   return (neuron0x2f17660()*-0.516476);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20ed0() {
   return (neuron0x2f179a0()*-0.632443);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20f10() {
   return (neuron0x2f17ce0()*0.824059);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20f50() {
   return (neuron0x2f18020()*1.18836);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20f90() {
   return (neuron0x2f18360()*0.282551);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20fd0() {
   return (neuron0x2f186a0()*-0.64012);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21010() {
   return (neuron0x2f189e0()*1.44944);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21050() {
   return (neuron0x2f18d20()*1.90816);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21090() {
   return (neuron0x2f19060()*0.480467);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f210d0() {
   return (neuron0x2f193a0()*-1.12927);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21110() {
   return (neuron0x2f196e0()*0.519031);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21150() {
   return (neuron0x2f19a20()*-0.455282);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21190() {
   return (neuron0x2f19d60()*-0.927516);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f211d0() {
   return (neuron0x2f1a0a0()*0.716761);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20c60() {
   return (neuron0x2f1a3e0()*-0.173597);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20ca0() {
   return (neuron0x2f1a940()*-0.0480651);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21320() {
   return (neuron0x2f1ab60()*-1.23496);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21360() {
   return (neuron0x2f1aea0()*0.326717);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f213a0() {
   return (neuron0x2f1b1e0()*-0.770658);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f213e0() {
   return (neuron0x2f1b520()*0.947753);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21420() {
   return (neuron0x2f1b860()*1.00149);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21460() {
   return (neuron0x2f1bba0()*1.64089);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f217e0() {
   return (neuron0x2f17070()*-0.0981628);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21820() {
   return (neuron0x2f17320()*0.00557549);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21860() {
   return (neuron0x2f17660()*0.0979216);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f218a0() {
   return (neuron0x2f179a0()*3.35463);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f218e0() {
   return (neuron0x2f17ce0()*-0.0155916);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21920() {
   return (neuron0x2f18020()*0.00392696);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21960() {
   return (neuron0x2f18360()*0.00615088);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f219a0() {
   return (neuron0x2f186a0()*0.0129889);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f219e0() {
   return (neuron0x2f189e0()*-0.00583011);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21a20() {
   return (neuron0x2f18d20()*0.0107808);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21a60() {
   return (neuron0x2f19060()*0.0237487);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21aa0() {
   return (neuron0x2f193a0()*0.0601823);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21ae0() {
   return (neuron0x2f196e0()*0.0324418);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21b20() {
   return (neuron0x2f19a20()*0.0277099);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21b60() {
   return (neuron0x2f19d60()*-0.0255235);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21ba0() {
   return (neuron0x2f1a0a0()*-0.0594829);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21630() {
   return (neuron0x2f1a3e0()*0.0241376);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21670() {
   return (neuron0x2f1a940()*0.00958038);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21cf0() {
   return (neuron0x2f1ab60()*-0.00407204);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21d30() {
   return (neuron0x2f1aea0()*-0.00993475);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21d70() {
   return (neuron0x2f1b1e0()*0.0304933);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21db0() {
   return (neuron0x2f1b520()*0.00352225);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21df0() {
   return (neuron0x2f1b860()*0.0263283);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21e30() {
   return (neuron0x2f1bba0()*-0.107344);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1a830() {
   return (neuron0x2f17070()*0.00560006);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1a870() {
   return (neuron0x2f17320()*-0.0286381);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1a8b0() {
   return (neuron0x2f17660()*0.514249);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1a8f0() {
   return (neuron0x2f179a0()*-0.0636437);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f223c0() {
   return (neuron0x2f17ce0()*-0.00105693);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22400() {
   return (neuron0x2f18020()*-0.0171208);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22440() {
   return (neuron0x2f18360()*0.00832669);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22480() {
   return (neuron0x2f186a0()*-0.00869848);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f224c0() {
   return (neuron0x2f189e0()*-0.0425925);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22500() {
   return (neuron0x2f18d20()*-0.0389963);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22540() {
   return (neuron0x2f19060()*-0.0179094);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22580() {
   return (neuron0x2f193a0()*0.346259);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f225c0() {
   return (neuron0x2f196e0()*0.0215152);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22600() {
   return (neuron0x2f19a20()*0.00602691);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22640() {
   return (neuron0x2f19d60()*-0.048537);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22680() {
   return (neuron0x2f1a0a0()*-0.00260288);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22000() {
   return (neuron0x2f1a3e0()*-0.0210759);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22040() {
   return (neuron0x2f1a940()*0.0011139);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f227d0() {
   return (neuron0x2f1ab60()*0.00177877);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22810() {
   return (neuron0x2f1aea0()*-0.0616233);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22850() {
   return (neuron0x2f1b1e0()*-0.00287167);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22890() {
   return (neuron0x2f1b520()*0.00351808);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f228d0() {
   return (neuron0x2f1b860()*0.0126001);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22910() {
   return (neuron0x2f1bba0()*1.18604);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22c90() {
   return (neuron0x2f17070()*0.181225);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22cd0() {
   return (neuron0x2f17320()*0.884478);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22d10() {
   return (neuron0x2f17660()*-1.47444);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22d50() {
   return (neuron0x2f179a0()*-0.470683);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22d90() {
   return (neuron0x2f17ce0()*1.51759);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22dd0() {
   return (neuron0x2f18020()*0.159847);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22e10() {
   return (neuron0x2f18360()*-0.146816);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22e50() {
   return (neuron0x2f186a0()*1.41305);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22e90() {
   return (neuron0x2f189e0()*0.107757);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22ed0() {
   return (neuron0x2f18d20()*0.764926);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22f10() {
   return (neuron0x2f19060()*0.631088);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22f50() {
   return (neuron0x2f193a0()*0.410523);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22f90() {
   return (neuron0x2f196e0()*0.415087);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22fd0() {
   return (neuron0x2f19a20()*0.187335);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23010() {
   return (neuron0x2f19d60()*0.203105);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23050() {
   return (neuron0x2f1a0a0()*0.345299);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22ae0() {
   return (neuron0x2f1a3e0()*0.903345);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22b20() {
   return (neuron0x2f1a940()*0.829741);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f231a0() {
   return (neuron0x2f1ab60()*1.75256);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f231e0() {
   return (neuron0x2f1aea0()*1.24564);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23220() {
   return (neuron0x2f1b1e0()*-0.700094);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23260() {
   return (neuron0x2f1b520()*0.446801);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f232a0() {
   return (neuron0x2f1b860()*1.20181);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f232e0() {
   return (neuron0x2f1bba0()*-0.674844);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23660() {
   return (neuron0x2f17070()*0.175093);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f236a0() {
   return (neuron0x2f17320()*-0.000881681);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f236e0() {
   return (neuron0x2f17660()*2.93298);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23720() {
   return (neuron0x2f179a0()*0.0289027);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23760() {
   return (neuron0x2f17ce0()*0.0729538);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f237a0() {
   return (neuron0x2f18020()*-0.0394077);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f237e0() {
   return (neuron0x2f18360()*-0.0412585);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23820() {
   return (neuron0x2f186a0()*0.0279909);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23860() {
   return (neuron0x2f189e0()*0.017399);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f238a0() {
   return (neuron0x2f18d20()*0.0313919);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f238e0() {
   return (neuron0x2f19060()*-0.0192818);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23920() {
   return (neuron0x2f193a0()*-0.863502);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23960() {
   return (neuron0x2f196e0()*-0.0476709);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f239a0() {
   return (neuron0x2f19a20()*0.0277271);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f239e0() {
   return (neuron0x2f19d60()*-0.00957355);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23a20() {
   return (neuron0x2f1a0a0()*-0.0514224);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f234b0() {
   return (neuron0x2f1a3e0()*-0.042282);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f234f0() {
   return (neuron0x2f1a940()*-0.0539244);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20280() {
   return (neuron0x2f1ab60()*-0.0428317);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f202c0() {
   return (neuron0x2f1aea0()*-0.0704461);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20300() {
   return (neuron0x2f1b1e0()*0.00624885);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20340() {
   return (neuron0x2f1b520()*0.00327811);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20380() {
   return (neuron0x2f1b860()*-0.0510511);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f203c0() {
   return (neuron0x2f1bba0()*5.20448);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20740() {
   return (neuron0x2f17070()*-0.0228929);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20780() {
   return (neuron0x2f17320()*-0.00459253);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f207c0() {
   return (neuron0x2f17660()*0.976291);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20800() {
   return (neuron0x2f179a0()*0.0457418);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20840() {
   return (neuron0x2f17ce0()*0.00353542);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20880() {
   return (neuron0x2f18020()*0.0418215);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f208c0() {
   return (neuron0x2f18360()*0.0260455);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20900() {
   return (neuron0x2f186a0()*0.0383712);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20940() {
   return (neuron0x2f189e0()*-0.00439305);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20980() {
   return (neuron0x2f18d20()*-0.00956623);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f209c0() {
   return (neuron0x2f19060()*0.0171715);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20a00() {
   return (neuron0x2f193a0()*-5.97073);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20a40() {
   return (neuron0x2f196e0()*-0.0105103);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24b80() {
   return (neuron0x2f19a20()*0.0321055);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24bc0() {
   return (neuron0x2f19d60()*0.0520581);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24c00() {
   return (neuron0x2f1a0a0()*0.0472025);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20590() {
   return (neuron0x2f1a3e0()*0.018722);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f205d0() {
   return (neuron0x2f1a940()*-0.00661135);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24d50() {
   return (neuron0x2f1ab60()*0.0204596);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24d90() {
   return (neuron0x2f1aea0()*0.0202841);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24dd0() {
   return (neuron0x2f1b1e0()*0.0236532);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24e10() {
   return (neuron0x2f1b520()*0.00686482);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24e50() {
   return (neuron0x2f1b860()*0.0131289);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24e90() {
   return (neuron0x2f1bba0()*1.3031);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25210() {
   return (neuron0x2f17070()*0.0550249);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25250() {
   return (neuron0x2f17320()*-0.0450911);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25290() {
   return (neuron0x2f17660()*-0.216697);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f252d0() {
   return (neuron0x2f179a0()*3.00488);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25310() {
   return (neuron0x2f17ce0()*-0.0194035);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25350() {
   return (neuron0x2f18020()*0.031585);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25390() {
   return (neuron0x2f18360()*0.036096);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f253d0() {
   return (neuron0x2f186a0()*-0.0303865);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25410() {
   return (neuron0x2f189e0()*0.0555029);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25450() {
   return (neuron0x2f18d20()*0.00744708);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25490() {
   return (neuron0x2f19060()*-0.0543875);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f254d0() {
   return (neuron0x2f193a0()*2.85195);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25510() {
   return (neuron0x2f196e0()*-0.101301);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25550() {
   return (neuron0x2f19a20()*-0.0130125);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25590() {
   return (neuron0x2f19d60()*-0.0531447);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f255d0() {
   return (neuron0x2f1a0a0()*-0.0891563);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25060() {
   return (neuron0x2f1a3e0()*0.000991323);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f250a0() {
   return (neuron0x2f1a940()*0.0257808);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25720() {
   return (neuron0x2f1ab60()*-0.0715924);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25760() {
   return (neuron0x2f1aea0()*0.0154908);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f257a0() {
   return (neuron0x2f1b1e0()*-0.033696);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f257e0() {
   return (neuron0x2f1b520()*-0.0514218);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25820() {
   return (neuron0x2f1b860()*0.0116151);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25860() {
   return (neuron0x2f1bba0()*0.12556);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25be0() {
   return (neuron0x2f17070()*-0.246655);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25c20() {
   return (neuron0x2f17320()*-1.71385);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25c60() {
   return (neuron0x2f17660()*2.23764);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25ca0() {
   return (neuron0x2f179a0()*0.694249);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25ce0() {
   return (neuron0x2f17ce0()*-0.918874);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25d20() {
   return (neuron0x2f18020()*-0.189343);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25d60() {
   return (neuron0x2f18360()*0.163352);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25da0() {
   return (neuron0x2f186a0()*-1.41072);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25de0() {
   return (neuron0x2f189e0()*-0.4557);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25e20() {
   return (neuron0x2f18d20()*0.177554);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25e60() {
   return (neuron0x2f19060()*-0.390123);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25ea0() {
   return (neuron0x2f193a0()*0.380177);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25ee0() {
   return (neuron0x2f196e0()*-0.294813);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25f20() {
   return (neuron0x2f19a20()*0.90004);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25f60() {
   return (neuron0x2f19d60()*-1.35429);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25fa0() {
   return (neuron0x2f1a0a0()*-0.12436);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25a30() {
   return (neuron0x2f1a3e0()*-0.769571);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25a70() {
   return (neuron0x2f1a940()*0.817626);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f260f0() {
   return (neuron0x2f1ab60()*-0.0927929);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26130() {
   return (neuron0x2f1aea0()*0.819487);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26170() {
   return (neuron0x2f1b1e0()*0.84924);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f261b0() {
   return (neuron0x2f1b520()*-0.424439);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f261f0() {
   return (neuron0x2f1b860()*0.23216);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26230() {
   return (neuron0x2f1bba0()*-0.7659);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f265b0() {
   return (neuron0x2f17070()*-0.052414);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f265f0() {
   return (neuron0x2f17320()*-11.7499);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26630() {
   return (neuron0x2f17660()*1.92607);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26670() {
   return (neuron0x2f179a0()*-0.0550582);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f266b0() {
   return (neuron0x2f17ce0()*-0.0919446);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f266f0() {
   return (neuron0x2f18020()*0.0850633);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26730() {
   return (neuron0x2f18360()*-0.0605585);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26770() {
   return (neuron0x2f186a0()*0.0411624);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f267b0() {
   return (neuron0x2f189e0()*-0.0220082);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f267f0() {
   return (neuron0x2f18d20()*0.0152661);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26830() {
   return (neuron0x2f19060()*0.0740738);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26870() {
   return (neuron0x2f193a0()*-5.46224);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f268b0() {
   return (neuron0x2f196e0()*0.0328063);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f268f0() {
   return (neuron0x2f19a20()*0.0226257);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26930() {
   return (neuron0x2f19d60()*-0.0136517);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26970() {
   return (neuron0x2f1a0a0()*0.0671931);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26400() {
   return (neuron0x2f1a3e0()*-0.0705654);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26440() {
   return (neuron0x2f1a940()*0.00173179);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26ac0() {
   return (neuron0x2f1ab60()*0.105714);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26b00() {
   return (neuron0x2f1aea0()*0.00912161);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26b40() {
   return (neuron0x2f1b1e0()*-0.0584972);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26b80() {
   return (neuron0x2f1b520()*-0.0322482);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26bc0() {
   return (neuron0x2f1b860()*-0.048019);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26c00() {
   return (neuron0x2f1bba0()*-1.5914);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26f80() {
   return (neuron0x2f17070()*0.00823975);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f17200() {
   return (neuron0x2f17320()*0.0020699);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f17240() {
   return (neuron0x2f17660()*-0.411765);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f17540() {
   return (neuron0x2f179a0()*-0.0122161);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f17580() {
   return (neuron0x2f17ce0()*0.00789205);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f17880() {
   return (neuron0x2f18020()*-0.0052594);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f178c0() {
   return (neuron0x2f18360()*-0.0104251);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f17bc0() {
   return (neuron0x2f186a0()*-0.00603461);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f17c00() {
   return (neuron0x2f189e0()*-0.00296435);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f17f00() {
   return (neuron0x2f18d20()*0.0109401);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f17f40() {
   return (neuron0x2f19060()*-0.00781304);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f18240() {
   return (neuron0x2f193a0()*0.375173);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f18280() {
   return (neuron0x2f196e0()*-0.00642834);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f18580() {
   return (neuron0x2f19a20()*-0.0110056);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f185c0() {
   return (neuron0x2f19d60()*-0.00202715);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f188c0() {
   return (neuron0x2f1a0a0()*-0.00786473);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f18900() {
   return (neuron0x2f1a3e0()*-0.00337761);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f18c00() {
   return (neuron0x2f1a940()*-0.0124661);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f18c40() {
   return (neuron0x2f1ab60()*-0.00149875);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f18f40() {
   return (neuron0x2f1aea0()*-0.00854652);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f18f80() {
   return (neuron0x2f1b1e0()*-0.00411551);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f19280() {
   return (neuron0x2f1b520()*0.000193061);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f192c0() {
   return (neuron0x2f1b860()*0.00394604);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f195c0() {
   return (neuron0x2f1bba0()*1.45279);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f19600() {
   return (neuron0x2f17070()*0.0252518);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1a2c0() {
   return (neuron0x2f17320()*-0.65986);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1a300() {
   return (neuron0x2f17660()*0.929854);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26dd0() {
   return (neuron0x2f179a0()*0.120216);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26e10() {
   return (neuron0x2f17ce0()*-0.335103);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1a600() {
   return (neuron0x2f18020()*-0.167097);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1a640() {
   return (neuron0x2f18360()*-1.02928);
}

double NNfunction_nn_chi1_charge2p::synapse0x2187e40() {
   return (neuron0x2f186a0()*-0.0406125);
}

double NNfunction_nn_chi1_charge2p::synapse0x2187e80() {
   return (neuron0x2f189e0()*0.540491);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1ad80() {
   return (neuron0x2f18d20()*-0.290048);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1adc0() {
   return (neuron0x2f19060()*0.322835);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1b0c0() {
   return (neuron0x2f193a0()*0.561442);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1b100() {
   return (neuron0x2f196e0()*0.198546);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1b400() {
   return (neuron0x2f19a20()*-0.379957);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1b440() {
   return (neuron0x2f19d60()*1.08927);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1b740() {
   return (neuron0x2f1a0a0()*0.239286);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1b780() {
   return (neuron0x2f1a3e0()*0.501835);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1ba80() {
   return (neuron0x2f1a940()*-1.00694);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1bac0() {
   return (neuron0x2f1ab60()*-1.44504);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1bdc0() {
   return (neuron0x2f1aea0()*-0.350389);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1be00() {
   return (neuron0x2f1b1e0()*2.785);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f19900() {
   return (neuron0x2f1b520()*0.552598);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f19940() {
   return (neuron0x2f1b860()*0.92978);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f28cf0() {
   return (neuron0x2f1bba0()*0.411609);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29070() {
   return (neuron0x2f17070()*0.20283);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f290b0() {
   return (neuron0x2f17320()*-0.333495);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f290f0() {
   return (neuron0x2f17660()*-0.391081);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29130() {
   return (neuron0x2f179a0()*0.644379);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29170() {
   return (neuron0x2f17ce0()*-1.1392);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f291b0() {
   return (neuron0x2f18020()*0.478076);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f291f0() {
   return (neuron0x2f18360()*0.0147758);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29230() {
   return (neuron0x2f186a0()*0.474891);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29270() {
   return (neuron0x2f189e0()*0.348862);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f292b0() {
   return (neuron0x2f18d20()*0.371215);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f292f0() {
   return (neuron0x2f19060()*0.014654);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29330() {
   return (neuron0x2f193a0()*0.570299);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29370() {
   return (neuron0x2f196e0()*0.945867);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f293b0() {
   return (neuron0x2f19a20()*0.95052);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f293f0() {
   return (neuron0x2f19d60()*0.766416);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29430() {
   return (neuron0x2f1a0a0()*0.406738);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f28ec0() {
   return (neuron0x2f1a3e0()*0.368806);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f28f00() {
   return (neuron0x2f1a940()*0.758956);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29580() {
   return (neuron0x2f1ab60()*0.445947);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f295c0() {
   return (neuron0x2f1aea0()*0.0672492);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29600() {
   return (neuron0x2f1b1e0()*0.000927373);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29640() {
   return (neuron0x2f1b520()*0.278471);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29680() {
   return (neuron0x2f1b860()*-0.164257);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f296c0() {
   return (neuron0x2f1bba0()*0.0897296);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29a40() {
   return (neuron0x2f17070()*0.0186358);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29a80() {
   return (neuron0x2f17320()*-0.00544535);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29ac0() {
   return (neuron0x2f17660()*-0.117756);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29b00() {
   return (neuron0x2f179a0()*0.00213839);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29b40() {
   return (neuron0x2f17ce0()*-0.0253335);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29b80() {
   return (neuron0x2f18020()*-0.0241287);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29bc0() {
   return (neuron0x2f18360()*0.00676958);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29c00() {
   return (neuron0x2f186a0()*0.000126643);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29c40() {
   return (neuron0x2f189e0()*-0.0074747);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29c80() {
   return (neuron0x2f18d20()*-0.0563212);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29cc0() {
   return (neuron0x2f19060()*0.0145967);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29d00() {
   return (neuron0x2f193a0()*1.43454);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29d40() {
   return (neuron0x2f196e0()*-0.0157703);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29d80() {
   return (neuron0x2f19a20()*4.89752e-05);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29dc0() {
   return (neuron0x2f19d60()*-0.00571957);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29e00() {
   return (neuron0x2f1a0a0()*8.32489e-05);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29890() {
   return (neuron0x2f1a3e0()*-0.0173271);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f298d0() {
   return (neuron0x2f1a940()*-0.00133003);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29f50() {
   return (neuron0x2f1ab60()*0.0170336);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29f90() {
   return (neuron0x2f1aea0()*-0.0242567);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29fd0() {
   return (neuron0x2f1b1e0()*-0.0170346);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a010() {
   return (neuron0x2f1b520()*-0.00544208);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a050() {
   return (neuron0x2f1b860()*-0.00448807);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a090() {
   return (neuron0x2f1bba0()*6.34616);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a410() {
   return (neuron0x2f17070()*-0.921317);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a450() {
   return (neuron0x2f17320()*0.0244398);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a490() {
   return (neuron0x2f17660()*-1.44487);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a4d0() {
   return (neuron0x2f179a0()*0.183976);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a510() {
   return (neuron0x2f17ce0()*-0.0258897);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a550() {
   return (neuron0x2f18020()*0.21435);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a590() {
   return (neuron0x2f18360()*0.308715);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a5d0() {
   return (neuron0x2f186a0()*-0.150172);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a610() {
   return (neuron0x2f189e0()*-1.62783);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a650() {
   return (neuron0x2f18d20()*0.15735);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a690() {
   return (neuron0x2f19060()*0.623305);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a6d0() {
   return (neuron0x2f193a0()*1.38143);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a710() {
   return (neuron0x2f196e0()*-1.12899);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a750() {
   return (neuron0x2f19a20()*-0.365471);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a790() {
   return (neuron0x2f19d60()*-0.6662);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a7d0() {
   return (neuron0x2f1a0a0()*0.477165);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a260() {
   return (neuron0x2f1a3e0()*0.0675686);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a2a0() {
   return (neuron0x2f1a940()*0.562707);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a920() {
   return (neuron0x2f1ab60()*-0.913326);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a960() {
   return (neuron0x2f1aea0()*-0.461538);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a9a0() {
   return (neuron0x2f1b1e0()*0.346629);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a9e0() {
   return (neuron0x2f1b520()*-1.09365);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2aa20() {
   return (neuron0x2f1b860()*0.657582);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2aa60() {
   return (neuron0x2f1bba0()*-1.45632);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ade0() {
   return (neuron0x2f17070()*-0.0242882);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ae20() {
   return (neuron0x2f17320()*12.563);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ae60() {
   return (neuron0x2f17660()*0.36909);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2aea0() {
   return (neuron0x2f179a0()*0.00340997);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2aee0() {
   return (neuron0x2f17ce0()*-0.0198638);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2af20() {
   return (neuron0x2f18020()*0.00177795);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2af60() {
   return (neuron0x2f18360()*0.0250483);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2afa0() {
   return (neuron0x2f186a0()*0.0104768);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2afe0() {
   return (neuron0x2f189e0()*-0.0020699);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b020() {
   return (neuron0x2f18d20()*-0.0253723);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b060() {
   return (neuron0x2f19060()*-0.0274728);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b0a0() {
   return (neuron0x2f193a0()*-0.462679);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b0e0() {
   return (neuron0x2f196e0()*0.000196234);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b120() {
   return (neuron0x2f19a20()*0.0205859);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b160() {
   return (neuron0x2f19d60()*0.0148899);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b1a0() {
   return (neuron0x2f1a0a0()*0.0206292);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ac30() {
   return (neuron0x2f1a3e0()*0.00421278);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ac70() {
   return (neuron0x2f1a940()*-0.00369415);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b2f0() {
   return (neuron0x2f1ab60()*-0.0309279);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b330() {
   return (neuron0x2f1aea0()*0.000547103);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b370() {
   return (neuron0x2f1b1e0()*-0.0137896);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b3b0() {
   return (neuron0x2f1b520()*0.0158332);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b3f0() {
   return (neuron0x2f1b860()*0.0148115);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b430() {
   return (neuron0x2f1bba0()*-0.203008);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b7b0() {
   return (neuron0x2f17070()*-0.0729784);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b7f0() {
   return (neuron0x2f17320()*-0.0434416);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b830() {
   return (neuron0x2f17660()*4.05791);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b870() {
   return (neuron0x2f179a0()*-0.0805279);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b8b0() {
   return (neuron0x2f17ce0()*0.00680471);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b8f0() {
   return (neuron0x2f18020()*-0.0632898);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b930() {
   return (neuron0x2f18360()*0.0444897);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b970() {
   return (neuron0x2f186a0()*0.0153173);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b9b0() {
   return (neuron0x2f189e0()*-0.0190174);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23b70() {
   return (neuron0x2f18d20()*-0.00117385);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23bb0() {
   return (neuron0x2f19060()*-0.0883443);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23bf0() {
   return (neuron0x2f193a0()*-0.676632);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23c30() {
   return (neuron0x2f196e0()*-0.126016);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23c70() {
   return (neuron0x2f19a20()*-0.0811225);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23cb0() {
   return (neuron0x2f19d60()*-0.0021377);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23cf0() {
   return (neuron0x2f1a0a0()*-0.0214892);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b600() {
   return (neuron0x2f1a3e0()*-0.0698958);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b640() {
   return (neuron0x2f1a940()*-0.0576891);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23e40() {
   return (neuron0x2f1ab60()*-0.0170747);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23e80() {
   return (neuron0x2f1aea0()*-0.0468374);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23ec0() {
   return (neuron0x2f1b1e0()*-0.0113082);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23f00() {
   return (neuron0x2f1b520()*0.0333276);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23f40() {
   return (neuron0x2f1b860()*-0.0377525);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23f80() {
   return (neuron0x2f1bba0()*-7.2142);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24300() {
   return (neuron0x2f17070()*-0.00271565);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24340() {
   return (neuron0x2f17320()*0.0964597);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24380() {
   return (neuron0x2f17660()*-0.181581);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f243c0() {
   return (neuron0x2f179a0()*-0.199788);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24400() {
   return (neuron0x2f17ce0()*0.331313);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24440() {
   return (neuron0x2f18020()*-0.130398);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24480() {
   return (neuron0x2f18360()*-0.285263);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f244c0() {
   return (neuron0x2f186a0()*-0.215056);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24500() {
   return (neuron0x2f189e0()*-0.215225);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24540() {
   return (neuron0x2f18d20()*-0.253901);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24580() {
   return (neuron0x2f19060()*-0.0909848);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f245c0() {
   return (neuron0x2f193a0()*-0.049917);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24600() {
   return (neuron0x2f196e0()*-0.54307);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24640() {
   return (neuron0x2f19a20()*-0.430935);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24680() {
   return (neuron0x2f19d60()*-0.299686);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f246c0() {
   return (neuron0x2f1a0a0()*-0.15273);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24150() {
   return (neuron0x2f1a3e0()*-0.196549);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24190() {
   return (neuron0x2f1a940()*-0.397158);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24810() {
   return (neuron0x2f1ab60()*-0.223929);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24850() {
   return (neuron0x2f1aea0()*-0.234487);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24890() {
   return (neuron0x2f1b1e0()*-0.0421739);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f248d0() {
   return (neuron0x2f1b520()*-0.0362168);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24910() {
   return (neuron0x2f1b860()*0.0407208);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24950() {
   return (neuron0x2f1bba0()*2.0909);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24b20() {
   return (neuron0x2f17070()*0.34697);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2dbb0() {
   return (neuron0x2f17320()*-0.0823145);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2dbf0() {
   return (neuron0x2f17660()*-0.333257);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2dc30() {
   return (neuron0x2f179a0()*-0.0692245);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2dc70() {
   return (neuron0x2f17ce0()*-0.188233);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2dcb0() {
   return (neuron0x2f18020()*0.160213);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2dcf0() {
   return (neuron0x2f18360()*0.220127);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2dd30() {
   return (neuron0x2f186a0()*-0.0593875);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2dd70() {
   return (neuron0x2f189e0()*0.197684);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ddb0() {
   return (neuron0x2f18d20()*-0.166079);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ddf0() {
   return (neuron0x2f19060()*-0.0939814);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2de30() {
   return (neuron0x2f193a0()*0.241586);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2de70() {
   return (neuron0x2f196e0()*-0.0581654);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2deb0() {
   return (neuron0x2f19a20()*-0.438466);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2def0() {
   return (neuron0x2f19d60()*-0.442845);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2df30() {
   return (neuron0x2f1a0a0()*-0.181745);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2da00() {
   return (neuron0x2f1a3e0()*-0.427841);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2da40() {
   return (neuron0x2f1a940()*0.0798563);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e080() {
   return (neuron0x2f1ab60()*0.0974071);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e0c0() {
   return (neuron0x2f1aea0()*0.36592);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e100() {
   return (neuron0x2f1b1e0()*-0.0704359);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e140() {
   return (neuron0x2f1b520()*0.187865);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e180() {
   return (neuron0x2f1b860()*-0.158337);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e1c0() {
   return (neuron0x2f1bba0()*0.512377);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e540() {
   return (neuron0x2f17070()*-0.141769);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e580() {
   return (neuron0x2f17320()*-0.0620766);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e5c0() {
   return (neuron0x2f17660()*4.18459);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e600() {
   return (neuron0x2f179a0()*-0.0709414);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e640() {
   return (neuron0x2f17ce0()*0.0201335);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e680() {
   return (neuron0x2f18020()*-0.169478);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e6c0() {
   return (neuron0x2f18360()*-0.0238855);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e700() {
   return (neuron0x2f186a0()*0.0194402);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e740() {
   return (neuron0x2f189e0()*-0.0626102);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e780() {
   return (neuron0x2f18d20()*-0.0136821);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e7c0() {
   return (neuron0x2f19060()*-0.0664999);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e800() {
   return (neuron0x2f193a0()*1.39651);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e840() {
   return (neuron0x2f196e0()*-0.178894);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e880() {
   return (neuron0x2f19a20()*-0.113926);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e8c0() {
   return (neuron0x2f19d60()*-0.0196491);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e900() {
   return (neuron0x2f1a0a0()*-0.0704166);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e390() {
   return (neuron0x2f1a3e0()*-0.101898);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e3d0() {
   return (neuron0x2f1a940()*-0.168809);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ea50() {
   return (neuron0x2f1ab60()*0.050859);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ea90() {
   return (neuron0x2f1aea0()*-0.0261784);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ead0() {
   return (neuron0x2f1b1e0()*-0.0859649);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2eb10() {
   return (neuron0x2f1b520()*0.0647475);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2eb50() {
   return (neuron0x2f1b860()*0.0126713);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2eb90() {
   return (neuron0x2f1bba0()*-10.5181);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ef10() {
   return (neuron0x2f17070()*0.0522894);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ef50() {
   return (neuron0x2f17320()*0.00246152);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ef90() {
   return (neuron0x2f17660()*0.72841);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2efd0() {
   return (neuron0x2f179a0()*-0.057369);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f010() {
   return (neuron0x2f17ce0()*0.0219064);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f050() {
   return (neuron0x2f18020()*-0.00151675);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f090() {
   return (neuron0x2f18360()*-0.00667933);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f0d0() {
   return (neuron0x2f186a0()*-0.0391154);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f110() {
   return (neuron0x2f189e0()*0.0211582);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f150() {
   return (neuron0x2f18d20()*-0.0383609);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f190() {
   return (neuron0x2f19060()*0.0476377);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f1d0() {
   return (neuron0x2f193a0()*-0.601775);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f210() {
   return (neuron0x2f196e0()*-0.0287684);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f250() {
   return (neuron0x2f19a20()*-0.0167135);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f290() {
   return (neuron0x2f19d60()*-0.0438223);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f2d0() {
   return (neuron0x2f1a0a0()*-0.0250639);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ed60() {
   return (neuron0x2f1a3e0()*-0.0470357);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2eda0() {
   return (neuron0x2f1a940()*0.010469);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f420() {
   return (neuron0x2f1ab60()*0.020915);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f460() {
   return (neuron0x2f1aea0()*0.0108511);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f4a0() {
   return (neuron0x2f1b1e0()*0.0148534);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f4e0() {
   return (neuron0x2f1b520()*0.0107013);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f520() {
   return (neuron0x2f1b860()*-0.0303967);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f560() {
   return (neuron0x2f1bba0()*6.21196);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f8e0() {
   return (neuron0x2f17070()*0.593417);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f920() {
   return (neuron0x2f17320()*-0.534374);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f960() {
   return (neuron0x2f17660()*1.71084);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f9a0() {
   return (neuron0x2f179a0()*1.48324);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f9e0() {
   return (neuron0x2f17ce0()*0.0189152);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2fa20() {
   return (neuron0x2f18020()*-0.385741);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2fa60() {
   return (neuron0x2f18360()*0.40458);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2faa0() {
   return (neuron0x2f186a0()*-0.0476686);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2fae0() {
   return (neuron0x2f189e0()*-1.30007);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2fb20() {
   return (neuron0x2f18d20()*-0.257508);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2fb60() {
   return (neuron0x2f19060()*-0.556083);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2fba0() {
   return (neuron0x2f193a0()*-2.29302);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2fbe0() {
   return (neuron0x2f196e0()*0.552701);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2fc20() {
   return (neuron0x2f19a20()*1.5409);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2fc60() {
   return (neuron0x2f19d60()*0.217589);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2fca0() {
   return (neuron0x2f1a0a0()*0.715);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f730() {
   return (neuron0x2f1a3e0()*0.0477197);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f770() {
   return (neuron0x2f1a940()*0.325093);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2fdf0() {
   return (neuron0x2f1ab60()*0.493169);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2fe30() {
   return (neuron0x2f1aea0()*-0.0686258);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2fe70() {
   return (neuron0x2f1b1e0()*-1.29355);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2feb0() {
   return (neuron0x2f1b520()*0.358954);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2fef0() {
   return (neuron0x2f1b860()*0.738271);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ff30() {
   return (neuron0x2f1bba0()*3.88338);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f302b0() {
   return (neuron0x2f17070()*-0.115636);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f302f0() {
   return (neuron0x2f17320()*-0.0458822);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30330() {
   return (neuron0x2f17660()*-0.445335);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30370() {
   return (neuron0x2f179a0()*-0.0930687);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f303b0() {
   return (neuron0x2f17ce0()*0.0450694);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f303f0() {
   return (neuron0x2f18020()*-0.100465);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30430() {
   return (neuron0x2f18360()*-0.00528492);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30470() {
   return (neuron0x2f186a0()*-0.0262605);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f304b0() {
   return (neuron0x2f189e0()*-0.042015);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f304f0() {
   return (neuron0x2f18d20()*-0.101125);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30530() {
   return (neuron0x2f19060()*0.0451606);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30570() {
   return (neuron0x2f193a0()*-0.283063);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f305b0() {
   return (neuron0x2f196e0()*-0.0553575);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f305f0() {
   return (neuron0x2f19a20()*-0.0517438);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30630() {
   return (neuron0x2f19d60()*-0.00112668);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30670() {
   return (neuron0x2f1a0a0()*-0.0740887);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30100() {
   return (neuron0x2f1a3e0()*-0.0674729);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30140() {
   return (neuron0x2f1a940()*-0.0672211);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f307c0() {
   return (neuron0x2f1ab60()*-0.0393978);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30800() {
   return (neuron0x2f1aea0()*-0.0569441);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30840() {
   return (neuron0x2f1b1e0()*0.0493886);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30880() {
   return (neuron0x2f1b520()*-0.0055292);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f308c0() {
   return (neuron0x2f1b860()*0.0223122);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30900() {
   return (neuron0x2f1bba0()*7.51618);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30c80() {
   return (neuron0x2f17070()*-0.1162);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30cc0() {
   return (neuron0x2f17320()*0.178297);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30d00() {
   return (neuron0x2f17660()*-0.43872);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30d40() {
   return (neuron0x2f179a0()*0.448172);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30d80() {
   return (neuron0x2f17ce0()*-0.547416);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30dc0() {
   return (neuron0x2f18020()*0.0583169);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30e00() {
   return (neuron0x2f18360()*-0.212718);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30e40() {
   return (neuron0x2f186a0()*-0.341319);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30e80() {
   return (neuron0x2f189e0()*0.180847);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30ec0() {
   return (neuron0x2f18d20()*0.472607);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30f00() {
   return (neuron0x2f19060()*0.0829211);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30f40() {
   return (neuron0x2f193a0()*-0.963891);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30f80() {
   return (neuron0x2f196e0()*-1.47726);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30fc0() {
   return (neuron0x2f19a20()*-0.423695);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31000() {
   return (neuron0x2f19d60()*0.580502);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31040() {
   return (neuron0x2f1a0a0()*-0.181913);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30ad0() {
   return (neuron0x2f1a3e0()*-0.253859);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30b10() {
   return (neuron0x2f1a940()*-0.611772);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31190() {
   return (neuron0x2f1ab60()*0.139632);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f311d0() {
   return (neuron0x2f1aea0()*0.463572);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31210() {
   return (neuron0x2f1b1e0()*0.26133);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31250() {
   return (neuron0x2f1b520()*-0.319854);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31290() {
   return (neuron0x2f1b860()*-0.267453);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f312d0() {
   return (neuron0x2f1bba0()*-0.406908);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31650() {
   return (neuron0x2f17070()*0.0182428);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31690() {
   return (neuron0x2f17320()*-0.000712095);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f316d0() {
   return (neuron0x2f17660()*-0.0125529);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31710() {
   return (neuron0x2f179a0()*0.0885627);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31750() {
   return (neuron0x2f17ce0()*-0.00466839);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31790() {
   return (neuron0x2f18020()*0.000301465);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f317d0() {
   return (neuron0x2f18360()*-0.00453671);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31810() {
   return (neuron0x2f186a0()*-0.00265464);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31850() {
   return (neuron0x2f189e0()*0.0236224);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31890() {
   return (neuron0x2f18d20()*0.0211501);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f318d0() {
   return (neuron0x2f19060()*0.000841661);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31910() {
   return (neuron0x2f193a0()*-0.0490219);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31950() {
   return (neuron0x2f196e0()*0.00233594);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31990() {
   return (neuron0x2f19a20()*-0.00548226);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f319d0() {
   return (neuron0x2f19d60()*0.0200978);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31a10() {
   return (neuron0x2f1a0a0()*-0.00701276);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f314a0() {
   return (neuron0x2f1a3e0()*0.00273257);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f314e0() {
   return (neuron0x2f1a940()*-0.0034605);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31b60() {
   return (neuron0x2f1ab60()*0.0142775);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31ba0() {
   return (neuron0x2f1aea0()*0.0276669);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31be0() {
   return (neuron0x2f1b1e0()*-0.0206528);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31c20() {
   return (neuron0x2f1b520()*-0.000405017);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31c60() {
   return (neuron0x2f1b860()*-0.00421907);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31ca0() {
   return (neuron0x2f1bba0()*0.75019);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f32020() {
   return (neuron0x2f17070()*-0.044672);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f32060() {
   return (neuron0x2f17320()*-0.00711615);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f320a0() {
   return (neuron0x2f17660()*0.345126);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f320e0() {
   return (neuron0x2f179a0()*0.0162907);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f32120() {
   return (neuron0x2f17ce0()*0.0118916);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f32160() {
   return (neuron0x2f18020()*0.0600441);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f321a0() {
   return (neuron0x2f18360()*0.0869465);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f321e0() {
   return (neuron0x2f186a0()*0.0399335);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f32220() {
   return (neuron0x2f189e0()*0.00564306);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f32260() {
   return (neuron0x2f18d20()*0.0349525);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f322a0() {
   return (neuron0x2f19060()*-0.00195836);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f322e0() {
   return (neuron0x2f193a0()*-3.91514);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f32320() {
   return (neuron0x2f196e0()*-0.0290743);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f32360() {
   return (neuron0x2f19a20()*0.0471654);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f323a0() {
   return (neuron0x2f19d60()*-0.0474787);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f323e0() {
   return (neuron0x2f1a0a0()*0.0380529);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31e70() {
   return (neuron0x2f1a3e0()*0.00971079);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f31eb0() {
   return (neuron0x2f1a940()*0.0267829);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f32530() {
   return (neuron0x2f1ab60()*-0.0335385);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f32570() {
   return (neuron0x2f1aea0()*-0.0238072);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f325b0() {
   return (neuron0x2f1b1e0()*0.0119039);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f325f0() {
   return (neuron0x2f1b520()*0.0661096);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f32630() {
   return (neuron0x2f1b860()*0.0312954);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f32670() {
   return (neuron0x2f1bba0()*18.9116);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f329f0() {
   return (neuron0x2f17070()*0.161693);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26fc0() {
   return (neuron0x2f17320()*-0.0924603);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f27000() {
   return (neuron0x2f17660()*0.726634);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f27040() {
   return (neuron0x2f179a0()*0.763902);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f27290() {
   return (neuron0x2f17ce0()*-0.125913);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f272d0() {
   return (neuron0x2f18020()*-0.0195728);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f27310() {
   return (neuron0x2f18360()*-0.0739948);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f27560() {
   return (neuron0x2f186a0()*0.0203454);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f275a0() {
   return (neuron0x2f189e0()*-0.315613);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f277f0() {
   return (neuron0x2f18d20()*0.115256);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f27830() {
   return (neuron0x2f19060()*0.00728833);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f27870() {
   return (neuron0x2f193a0()*-1.04175);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f27ac0() {
   return (neuron0x2f196e0()*0.487986);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f27b00() {
   return (neuron0x2f19a20()*0.319781);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f27d50() {
   return (neuron0x2f19d60()*-0.0206867);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f27d90() {
   return (neuron0x2f1a0a0()*0.411646);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f32840() {
   return (neuron0x2f1a3e0()*-0.0945916);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f32880() {
   return (neuron0x2f1a940()*0.106241);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f27ee0() {
   return (neuron0x2f1ab60()*0.168992);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f283f0() {
   return (neuron0x2f1aea0()*-0.0954694);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f28430() {
   return (neuron0x2f1b1e0()*-0.527363);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f28470() {
   return (neuron0x2f1b520()*0.0734554);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f286c0() {
   return (neuron0x2f1b860()*0.195297);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f28700() {
   return (neuron0x2f1bba0()*0.542284);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f27fb0() {
   return (neuron0x2f17070()*-0.0771052);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f27ff0() {
   return (neuron0x2f17320()*-0.0226468);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f28030() {
   return (neuron0x2f17660()*-2.75378);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f28070() {
   return (neuron0x2f179a0()*0.0352329);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f289f0() {
   return (neuron0x2f17ce0()*-0.0475979);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f34d40() {
   return (neuron0x2f18020()*-0.0156782);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f34d80() {
   return (neuron0x2f18360()*0.0306078);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f34dc0() {
   return (neuron0x2f186a0()*-0.0377333);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f34e00() {
   return (neuron0x2f189e0()*-0.0138314);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f34e40() {
   return (neuron0x2f18d20()*-0.00531529);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f34e80() {
   return (neuron0x2f19060()*-0.0451381);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f34ec0() {
   return (neuron0x2f193a0()*-0.362618);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f34f00() {
   return (neuron0x2f196e0()*-0.00993392);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f34f40() {
   return (neuron0x2f19a20()*-0.119671);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f34f80() {
   return (neuron0x2f19d60()*-0.0169945);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f34fc0() {
   return (neuron0x2f1a0a0()*-0.0292709);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f288d0() {
   return (neuron0x2f1a3e0()*0.00602733);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f28910() {
   return (neuron0x2f1a940()*-0.0195833);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35110() {
   return (neuron0x2f1ab60()*0.0526769);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35150() {
   return (neuron0x2f1aea0()*-0.00366);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35190() {
   return (neuron0x2f1b1e0()*-0.0223302);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f351d0() {
   return (neuron0x2f1b520()*-0.00599453);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35210() {
   return (neuron0x2f1b860()*0.0643466);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35250() {
   return (neuron0x2f1bba0()*-3.40653);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f355d0() {
   return (neuron0x2f17070()*-0.0390858);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35610() {
   return (neuron0x2f17320()*-0.00566066);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35650() {
   return (neuron0x2f17660()*0.482312);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35690() {
   return (neuron0x2f179a0()*-0.0184946);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f356d0() {
   return (neuron0x2f17ce0()*-0.0192501);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35710() {
   return (neuron0x2f18020()*0.00652335);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35750() {
   return (neuron0x2f18360()*-0.0177596);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35790() {
   return (neuron0x2f186a0()*-0.0110135);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f357d0() {
   return (neuron0x2f189e0()*0.0139833);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35810() {
   return (neuron0x2f18d20()*-0.00083583);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35850() {
   return (neuron0x2f19060()*-0.0114357);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35890() {
   return (neuron0x2f193a0()*4.63453);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f358d0() {
   return (neuron0x2f196e0()*0.0544567);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35910() {
   return (neuron0x2f19a20()*0.00218657);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35950() {
   return (neuron0x2f19d60()*-0.0254076);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35990() {
   return (neuron0x2f1a0a0()*-0.0211538);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35420() {
   return (neuron0x2f1a3e0()*0.0042552);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35460() {
   return (neuron0x2f1a940()*-0.00111591);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35ae0() {
   return (neuron0x2f1ab60()*-0.011907);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35b20() {
   return (neuron0x2f1aea0()*-0.0422849);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35b60() {
   return (neuron0x2f1b1e0()*0.00331924);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35ba0() {
   return (neuron0x2f1b520()*-0.00694013);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35be0() {
   return (neuron0x2f1b860()*-0.0131534);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35c20() {
   return (neuron0x2f1bba0()*-0.054373);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35fa0() {
   return (neuron0x2f17070()*-0.0287065);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35fe0() {
   return (neuron0x2f17320()*-0.00236486);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36020() {
   return (neuron0x2f17660()*-0.0712626);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36060() {
   return (neuron0x2f179a0()*3.1627);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f360a0() {
   return (neuron0x2f17ce0()*-0.0377686);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f360e0() {
   return (neuron0x2f18020()*-0.00486053);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36120() {
   return (neuron0x2f18360()*0.00589471);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36160() {
   return (neuron0x2f186a0()*0.011832);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f361a0() {
   return (neuron0x2f189e0()*0.00399125);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f361e0() {
   return (neuron0x2f18d20()*0.00558658);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36220() {
   return (neuron0x2f19060()*9.58398e-05);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36260() {
   return (neuron0x2f193a0()*-0.534493);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f362a0() {
   return (neuron0x2f196e0()*0.00837822);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f362e0() {
   return (neuron0x2f19a20()*-0.064951);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36320() {
   return (neuron0x2f19d60()*-0.0248348);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36360() {
   return (neuron0x2f1a0a0()*-0.0684599);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35df0() {
   return (neuron0x2f1a3e0()*-0.020905);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35e30() {
   return (neuron0x2f1a940()*0.0126005);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f364b0() {
   return (neuron0x2f1ab60()*0.00394929);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f364f0() {
   return (neuron0x2f1aea0()*-0.0194748);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36530() {
   return (neuron0x2f1b1e0()*0.0144199);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36570() {
   return (neuron0x2f1b520()*0.0105331);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f365b0() {
   return (neuron0x2f1b860()*0.0340586);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f365f0() {
   return (neuron0x2f1bba0()*0.0762484);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36970() {
   return (neuron0x2f17070()*-1.42829);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f369b0() {
   return (neuron0x2f17320()*-0.408814);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f369f0() {
   return (neuron0x2f17660()*0.414906);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36a30() {
   return (neuron0x2f179a0()*0.432862);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36a70() {
   return (neuron0x2f17ce0()*1.74187);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36ab0() {
   return (neuron0x2f18020()*-1.46155);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36af0() {
   return (neuron0x2f18360()*-1.07057);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36b30() {
   return (neuron0x2f186a0()*-0.678672);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36b70() {
   return (neuron0x2f189e0()*-0.228185);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36bb0() {
   return (neuron0x2f18d20()*0.979668);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36bf0() {
   return (neuron0x2f19060()*-0.0950593);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36c30() {
   return (neuron0x2f193a0()*-1.74145);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36c70() {
   return (neuron0x2f196e0()*-0.868254);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36cb0() {
   return (neuron0x2f19a20()*1.29276);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36cf0() {
   return (neuron0x2f19d60()*1.18422);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36d30() {
   return (neuron0x2f1a0a0()*-0.378484);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f367c0() {
   return (neuron0x2f1a3e0()*0.89556);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36800() {
   return (neuron0x2f1a940()*0.580861);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36e80() {
   return (neuron0x2f1ab60()*-0.344077);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36ec0() {
   return (neuron0x2f1aea0()*-0.103561);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36f00() {
   return (neuron0x2f1b1e0()*0.139088);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36f40() {
   return (neuron0x2f1b520()*-0.0870526);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36f80() {
   return (neuron0x2f1b860()*0.165088);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36fc0() {
   return (neuron0x2f1bba0()*-3.2519);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37340() {
   return (neuron0x2f17070()*-0.2331);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37380() {
   return (neuron0x2f17320()*0.207576);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f373c0() {
   return (neuron0x2f17660()*0.204181);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37400() {
   return (neuron0x2f179a0()*-0.707839);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37440() {
   return (neuron0x2f17ce0()*-0.29326);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37480() {
   return (neuron0x2f18020()*0.517677);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f374c0() {
   return (neuron0x2f18360()*-0.051188);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37500() {
   return (neuron0x2f186a0()*0.512314);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37540() {
   return (neuron0x2f189e0()*0.800663);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37580() {
   return (neuron0x2f18d20()*-1.00254);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f375c0() {
   return (neuron0x2f19060()*1.06679);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37600() {
   return (neuron0x2f193a0()*-3.40335);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37640() {
   return (neuron0x2f196e0()*0.746638);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37680() {
   return (neuron0x2f19a20()*-0.126783);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f376c0() {
   return (neuron0x2f19d60()*-0.616164);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37700() {
   return (neuron0x2f1a0a0()*-0.205244);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37190() {
   return (neuron0x2f1a3e0()*0.388113);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f371d0() {
   return (neuron0x2f1a940()*-0.117432);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37850() {
   return (neuron0x2f1ab60()*-0.0884538);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37890() {
   return (neuron0x2f1aea0()*0.158151);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f378d0() {
   return (neuron0x2f1b1e0()*0.129385);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37910() {
   return (neuron0x2f1b520()*0.587471);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37950() {
   return (neuron0x2f1b860()*0.0415549);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37990() {
   return (neuron0x2f1bba0()*-1.42777);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37d10() {
   return (neuron0x2f17070()*0.489315);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37d50() {
   return (neuron0x2f17320()*0.245878);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37d90() {
   return (neuron0x2f17660()*0.107004);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37dd0() {
   return (neuron0x2f179a0()*1.27942);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37e10() {
   return (neuron0x2f17ce0()*-0.559518);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37e50() {
   return (neuron0x2f18020()*-1.15124);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37e90() {
   return (neuron0x2f18360()*1.54339);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37ed0() {
   return (neuron0x2f186a0()*-1.64997);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37f10() {
   return (neuron0x2f189e0()*-1.04267);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37f50() {
   return (neuron0x2f18d20()*1.50259);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37f90() {
   return (neuron0x2f19060()*-1.04525);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37fd0() {
   return (neuron0x2f193a0()*-1.04465);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38010() {
   return (neuron0x2f196e0()*1.75749);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38050() {
   return (neuron0x2f19a20()*0.0520595);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38090() {
   return (neuron0x2f19d60()*-1.06829);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f380d0() {
   return (neuron0x2f1a0a0()*-1.28211);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37b60() {
   return (neuron0x2f1a3e0()*0.49405);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37ba0() {
   return (neuron0x2f1a940()*0.0716572);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38220() {
   return (neuron0x2f1ab60()*-0.0366615);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38260() {
   return (neuron0x2f1aea0()*0.190857);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f382a0() {
   return (neuron0x2f1b1e0()*-0.630045);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f382e0() {
   return (neuron0x2f1b520()*-0.905537);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38320() {
   return (neuron0x2f1b860()*-0.144238);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38360() {
   return (neuron0x2f1bba0()*0.807855);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f386e0() {
   return (neuron0x2f17070()*0.192002);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38720() {
   return (neuron0x2f17320()*-0.0836873);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38760() {
   return (neuron0x2f17660()*0.646836);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f387a0() {
   return (neuron0x2f179a0()*-0.185401);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f387e0() {
   return (neuron0x2f17ce0()*-0.112552);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38820() {
   return (neuron0x2f18020()*0.133933);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38860() {
   return (neuron0x2f18360()*0.176453);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f388a0() {
   return (neuron0x2f186a0()*0.21161);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f388e0() {
   return (neuron0x2f189e0()*0.320485);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38920() {
   return (neuron0x2f18d20()*-0.0151014);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38960() {
   return (neuron0x2f19060()*0.0181594);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f389a0() {
   return (neuron0x2f193a0()*0.439018);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f389e0() {
   return (neuron0x2f196e0()*0.254489);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38a20() {
   return (neuron0x2f19a20()*0.531813);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38a60() {
   return (neuron0x2f19d60()*0.0805495);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38aa0() {
   return (neuron0x2f1a0a0()*0.0359484);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38530() {
   return (neuron0x2f1a3e0()*0.196811);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38570() {
   return (neuron0x2f1a940()*0.264636);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38bf0() {
   return (neuron0x2f1ab60()*0.219718);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38c30() {
   return (neuron0x2f1aea0()*0.103921);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38c70() {
   return (neuron0x2f1b1e0()*0.205449);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38cb0() {
   return (neuron0x2f1b520()*0.18695);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38cf0() {
   return (neuron0x2f1b860()*-0.224331);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38d30() {
   return (neuron0x2f1bba0()*1.73357);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f390b0() {
   return (neuron0x2f17070()*-0.0584036);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f390f0() {
   return (neuron0x2f17320()*-0.00917109);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39130() {
   return (neuron0x2f17660()*1.3404);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39170() {
   return (neuron0x2f179a0()*-0.0516235);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f391b0() {
   return (neuron0x2f17ce0()*0.0128652);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f391f0() {
   return (neuron0x2f18020()*0.00959131);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39230() {
   return (neuron0x2f18360()*-0.00907827);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39270() {
   return (neuron0x2f186a0()*0.0279248);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f392b0() {
   return (neuron0x2f189e0()*-0.0351005);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f392f0() {
   return (neuron0x2f18d20()*-0.0179485);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39330() {
   return (neuron0x2f19060()*0.0360834);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39370() {
   return (neuron0x2f193a0()*-7.11107);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f393b0() {
   return (neuron0x2f196e0()*0.0115657);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f393f0() {
   return (neuron0x2f19a20()*0.0139377);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39430() {
   return (neuron0x2f19d60()*0.00360498);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39470() {
   return (neuron0x2f1a0a0()*0.0183686);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38f00() {
   return (neuron0x2f1a3e0()*0.0106763);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38f40() {
   return (neuron0x2f1a940()*-0.0451156);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f395c0() {
   return (neuron0x2f1ab60()*-0.00991266);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39600() {
   return (neuron0x2f1aea0()*-0.00128668);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39640() {
   return (neuron0x2f1b1e0()*0.0412099);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39680() {
   return (neuron0x2f1b520()*0.0247558);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f396c0() {
   return (neuron0x2f1b860()*-0.00433043);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39700() {
   return (neuron0x2f1bba0()*-2.30323);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f221b0() {
   return (neuron0x2f17070()*0.0978765);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f221f0() {
   return (neuron0x2f17320()*-8.85166);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22230() {
   return (neuron0x2f17660()*0.95578);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22270() {
   return (neuron0x2f179a0()*-0.0409838);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f222b0() {
   return (neuron0x2f17ce0()*-0.0731296);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f222f0() {
   return (neuron0x2f18020()*0.0750653);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22330() {
   return (neuron0x2f18360()*-0.0935701);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22370() {
   return (neuron0x2f186a0()*0.0195178);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39e90() {
   return (neuron0x2f189e0()*-0.0364889);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39ed0() {
   return (neuron0x2f18d20()*0.0776304);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39f10() {
   return (neuron0x2f19060()*0.0678034);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39f50() {
   return (neuron0x2f193a0()*0.866352);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39f90() {
   return (neuron0x2f196e0()*0.117026);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39fd0() {
   return (neuron0x2f19a20()*0.0386005);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a010() {
   return (neuron0x2f19d60()*0.0488316);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a050() {
   return (neuron0x2f1a0a0()*0.0638265);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f398d0() {
   return (neuron0x2f1a3e0()*-0.00497878);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39910() {
   return (neuron0x2f1a940()*0.0663774);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a1a0() {
   return (neuron0x2f1ab60()*0.175621);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a1e0() {
   return (neuron0x2f1aea0()*0.0387078);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a220() {
   return (neuron0x2f1b1e0()*-0.0100001);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a260() {
   return (neuron0x2f1b520()*-0.0149917);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a2a0() {
   return (neuron0x2f1b860()*-0.085385);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a2e0() {
   return (neuron0x2f1bba0()*-0.599592);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a660() {
   return (neuron0x2f17070()*-0.902357);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a6a0() {
   return (neuron0x2f17320()*0.695061);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a6e0() {
   return (neuron0x2f17660()*1.40746);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a720() {
   return (neuron0x2f179a0()*0.578166);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a760() {
   return (neuron0x2f17ce0()*1.19694);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a7a0() {
   return (neuron0x2f18020()*-0.247605);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a7e0() {
   return (neuron0x2f18360()*-0.910125);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a820() {
   return (neuron0x2f186a0()*0.0970036);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a860() {
   return (neuron0x2f189e0()*-0.321712);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a8a0() {
   return (neuron0x2f18d20()*0.220332);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a8e0() {
   return (neuron0x2f19060()*-1.2717);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a920() {
   return (neuron0x2f193a0()*-0.101264);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a960() {
   return (neuron0x2f196e0()*-0.288121);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a9a0() {
   return (neuron0x2f19a20()*0.0310552);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a9e0() {
   return (neuron0x2f19d60()*0.237025);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3aa20() {
   return (neuron0x2f1a0a0()*-0.279207);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a4b0() {
   return (neuron0x2f1a3e0()*1.5639);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a4f0() {
   return (neuron0x2f1a940()*-1.17449);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3ab70() {
   return (neuron0x2f1ab60()*0.22196);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3abb0() {
   return (neuron0x2f1aea0()*-1.92872);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3abf0() {
   return (neuron0x2f1b1e0()*-0.801016);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3ac30() {
   return (neuron0x2f1b520()*-0.233162);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3ac70() {
   return (neuron0x2f1b860()*0.129101);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3acb0() {
   return (neuron0x2f1bba0()*-0.0968286);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3b030() {
   return (neuron0x2f17070()*-0.521198);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3b070() {
   return (neuron0x2f17320()*-0.493194);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3b0b0() {
   return (neuron0x2f17660()*0.948916);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3b0f0() {
   return (neuron0x2f179a0()*-0.196859);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3b130() {
   return (neuron0x2f17ce0()*-0.839922);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3b170() {
   return (neuron0x2f18020()*0.657392);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3b1b0() {
   return (neuron0x2f18360()*0.8958);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3b1f0() {
   return (neuron0x2f186a0()*-0.187257);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3b230() {
   return (neuron0x2f189e0()*-0.687601);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3b270() {
   return (neuron0x2f18d20()*0.594604);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3b2b0() {
   return (neuron0x2f19060()*-1.53615);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3b2f0() {
   return (neuron0x2f193a0()*-0.706309);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3b330() {
   return (neuron0x2f196e0()*0.135696);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3b370() {
   return (neuron0x2f19a20()*1.79962);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3b3b0() {
   return (neuron0x2f19d60()*0.605926);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3b3f0() {
   return (neuron0x2f1a0a0()*-0.333485);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3ae80() {
   return (neuron0x2f1a3e0()*0.711487);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3aec0() {
   return (neuron0x2f1a940()*-0.321386);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b9f0() {
   return (neuron0x2f1ab60()*1.41092);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ba30() {
   return (neuron0x2f1aea0()*0.271593);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ba70() {
   return (neuron0x2f1b1e0()*0.815648);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2bab0() {
   return (neuron0x2f1b520()*-0.4495);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2baf0() {
   return (neuron0x2f1b860()*-0.971543);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2bb30() {
   return (neuron0x2f1bba0()*0.269165);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2beb0() {
   return (neuron0x2f17070()*-0.185335);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2bef0() {
   return (neuron0x2f17320()*0.0159034);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2bf30() {
   return (neuron0x2f17660()*1.16299);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2bf70() {
   return (neuron0x2f179a0()*-0.123814);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2bfb0() {
   return (neuron0x2f17ce0()*0.0786547);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2bff0() {
   return (neuron0x2f18020()*0.00452535);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c030() {
   return (neuron0x2f18360()*-0.029655);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c070() {
   return (neuron0x2f186a0()*-0.0115734);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c0b0() {
   return (neuron0x2f189e0()*0.00491861);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c0f0() {
   return (neuron0x2f18d20()*0.00881088);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c130() {
   return (neuron0x2f19060()*0.012539);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c170() {
   return (neuron0x2f193a0()*-0.935209);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c1b0() {
   return (neuron0x2f196e0()*-0.188555);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c1f0() {
   return (neuron0x2f19a20()*-0.0760008);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c230() {
   return (neuron0x2f19d60()*-0.0623938);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c270() {
   return (neuron0x2f1a0a0()*-0.0239439);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2bd00() {
   return (neuron0x2f1a3e0()*-0.0956408);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2bd40() {
   return (neuron0x2f1a940()*-0.12059);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c3c0() {
   return (neuron0x2f1ab60()*0.0325846);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c400() {
   return (neuron0x2f1aea0()*0.0872125);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c440() {
   return (neuron0x2f1b1e0()*0.00923519);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c480() {
   return (neuron0x2f1b520()*0.0788514);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c4c0() {
   return (neuron0x2f1b860()*-0.091264);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c500() {
   return (neuron0x2f1bba0()*-7.19286);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c880() {
   return (neuron0x2f17070()*0.0245966);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c8c0() {
   return (neuron0x2f17320()*0.00870649);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c900() {
   return (neuron0x2f17660()*0.508888);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c940() {
   return (neuron0x2f179a0()*0.028151);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c980() {
   return (neuron0x2f17ce0()*0.0122051);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c9c0() {
   return (neuron0x2f18020()*-0.00495707);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ca00() {
   return (neuron0x2f18360()*0.0175699);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ca40() {
   return (neuron0x2f186a0()*0.00031871);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ca80() {
   return (neuron0x2f189e0()*-0.0190226);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2cac0() {
   return (neuron0x2f18d20()*-0.0717597);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2cb00() {
   return (neuron0x2f19060()*0.0177414);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2cb40() {
   return (neuron0x2f193a0()*-0.843565);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2cb80() {
   return (neuron0x2f196e0()*0.00175278);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2cbc0() {
   return (neuron0x2f19a20()*-0.0363668);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2cc00() {
   return (neuron0x2f19d60()*-0.0529863);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2cc40() {
   return (neuron0x2f1a0a0()*-0.00333753);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c6d0() {
   return (neuron0x2f1a3e0()*-0.0361189);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c710() {
   return (neuron0x2f1a940()*0.00826285);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2cd90() {
   return (neuron0x2f1ab60()*0.00135879);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2cdd0() {
   return (neuron0x2f1aea0()*-0.029547);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ce10() {
   return (neuron0x2f1b1e0()*0.00112502);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ce50() {
   return (neuron0x2f1b520()*0.0165368);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ce90() {
   return (neuron0x2f1b860()*-0.00861263);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ced0() {
   return (neuron0x2f1bba0()*-1.70423);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d250() {
   return (neuron0x2f17070()*0.163419);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d290() {
   return (neuron0x2f17320()*-0.0279276);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d2d0() {
   return (neuron0x2f17660()*3.09676);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d310() {
   return (neuron0x2f179a0()*0.186883);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d350() {
   return (neuron0x2f17ce0()*0.0820704);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d390() {
   return (neuron0x2f18020()*-0.0406523);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d3d0() {
   return (neuron0x2f18360()*-0.0633275);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d410() {
   return (neuron0x2f186a0()*-0.0259762);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d450() {
   return (neuron0x2f189e0()*-0.00451244);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d490() {
   return (neuron0x2f18d20()*0.00449785);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d4d0() {
   return (neuron0x2f19060()*-0.0383771);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d510() {
   return (neuron0x2f193a0()*1.36288);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d550() {
   return (neuron0x2f196e0()*-0.0415666);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d590() {
   return (neuron0x2f19a20()*0.110907);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d5d0() {
   return (neuron0x2f19d60()*0.0064503);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d610() {
   return (neuron0x2f1a0a0()*-0.0188004);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d0a0() {
   return (neuron0x2f1a3e0()*-0.00241224);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d0e0() {
   return (neuron0x2f1a940()*-0.0904584);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d760() {
   return (neuron0x2f1ab60()*-0.134011);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d7a0() {
   return (neuron0x2f1aea0()*-0.141975);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d7e0() {
   return (neuron0x2f1b1e0()*-0.0463643);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d820() {
   return (neuron0x2f1b520()*-0.0182046);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d860() {
   return (neuron0x2f1b860()*-0.0479906);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d8a0() {
   return (neuron0x2f1bba0()*4.56225);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3f770() {
   return (neuron0x2f17070()*0.794548);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3f7b0() {
   return (neuron0x2f17320()*-0.782721);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3f7f0() {
   return (neuron0x2f17660()*1.74787);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3f830() {
   return (neuron0x2f179a0()*0.782305);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3f870() {
   return (neuron0x2f17ce0()*-0.271034);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3f8b0() {
   return (neuron0x2f18020()*-0.394832);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3f8f0() {
   return (neuron0x2f18360()*0.921997);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3f930() {
   return (neuron0x2f186a0()*0.449278);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3f970() {
   return (neuron0x2f189e0()*0.210261);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3f9b0() {
   return (neuron0x2f18d20()*-0.981675);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3f9f0() {
   return (neuron0x2f19060()*-0.566028);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3fa30() {
   return (neuron0x2f193a0()*0.395993);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3fa70() {
   return (neuron0x2f196e0()*-0.187001);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3fab0() {
   return (neuron0x2f19a20()*-0.190249);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3faf0() {
   return (neuron0x2f19d60()*0.549635);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3fb30() {
   return (neuron0x2f1a0a0()*-0.222796);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d8e0() {
   return (neuron0x2f1a3e0()*0.17052);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d920() {
   return (neuron0x2f1a940()*0.486034);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3fc80() {
   return (neuron0x2f1ab60()*-0.355662);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3fcc0() {
   return (neuron0x2f1aea0()*1.12566);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3fd00() {
   return (neuron0x2f1b1e0()*-0.302581);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3fd40() {
   return (neuron0x2f1b520()*0.114724);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3fd80() {
   return (neuron0x2f1b860()*0.0224916);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3fdc0() {
   return (neuron0x2f1bba0()*-2.12802);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40140() {
   return (neuron0x2f17070()*0.198337);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40180() {
   return (neuron0x2f17320()*0.0121702);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f401c0() {
   return (neuron0x2f17660()*4.21742);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40200() {
   return (neuron0x2f179a0()*-0.0854783);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40240() {
   return (neuron0x2f17ce0()*0.097872);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40280() {
   return (neuron0x2f18020()*0.0279959);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f402c0() {
   return (neuron0x2f18360()*-0.125598);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40300() {
   return (neuron0x2f186a0()*-0.0194984);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40340() {
   return (neuron0x2f189e0()*0.00380325);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40380() {
   return (neuron0x2f18d20()*0.0339427);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f403c0() {
   return (neuron0x2f19060()*0.0798822);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40400() {
   return (neuron0x2f193a0()*-0.2716);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40440() {
   return (neuron0x2f196e0()*-0.0576106);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40480() {
   return (neuron0x2f19a20()*0.156867);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f404c0() {
   return (neuron0x2f19d60()*-0.057775);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40500() {
   return (neuron0x2f1a0a0()*0.00438992);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3ff90() {
   return (neuron0x2f1a3e0()*-0.0436436);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3ffd0() {
   return (neuron0x2f1a940()*-0.021591);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40650() {
   return (neuron0x2f1ab60()*-0.0792361);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40690() {
   return (neuron0x2f1aea0()*-0.021426);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f406d0() {
   return (neuron0x2f1b1e0()*0.0367438);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40710() {
   return (neuron0x2f1b520()*0.0396042);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40750() {
   return (neuron0x2f1b860()*-0.0713988);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40790() {
   return (neuron0x2f1bba0()*6.10455);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40b10() {
   return (neuron0x2f17070()*0.0238032);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40b50() {
   return (neuron0x2f17320()*-0.032412);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40b90() {
   return (neuron0x2f17660()*0.0984665);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40bd0() {
   return (neuron0x2f179a0()*0.00711373);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40c10() {
   return (neuron0x2f17ce0()*0.0190723);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40c50() {
   return (neuron0x2f18020()*-0.012355);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40c90() {
   return (neuron0x2f18360()*0.0610674);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40cd0() {
   return (neuron0x2f186a0()*-0.00788466);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40d10() {
   return (neuron0x2f189e0()*0.00597644);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40d50() {
   return (neuron0x2f18d20()*0.0170514);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40d90() {
   return (neuron0x2f19060()*0.00364518);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40dd0() {
   return (neuron0x2f193a0()*2.29935);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40e10() {
   return (neuron0x2f196e0()*0.0401795);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40e50() {
   return (neuron0x2f19a20()*0.00336222);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40e90() {
   return (neuron0x2f19d60()*0.0359386);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40ed0() {
   return (neuron0x2f1a0a0()*0.0699815);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40960() {
   return (neuron0x2f1a3e0()*-0.0548115);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f409a0() {
   return (neuron0x2f1a940()*0.0250484);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41020() {
   return (neuron0x2f1ab60()*0.0713854);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41060() {
   return (neuron0x2f1aea0()*-0.0385771);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f410a0() {
   return (neuron0x2f1b1e0()*-0.00205234);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f410e0() {
   return (neuron0x2f1b520()*0.0385512);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41120() {
   return (neuron0x2f1b860()*0.0148787);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41160() {
   return (neuron0x2f1bba0()*13.4855);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f414e0() {
   return (neuron0x2f17070()*-0.0328063);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41520() {
   return (neuron0x2f17320()*-24.126);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41560() {
   return (neuron0x2f17660()*0.248075);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f415a0() {
   return (neuron0x2f179a0()*-0.0376005);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f415e0() {
   return (neuron0x2f17ce0()*0.0509611);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41620() {
   return (neuron0x2f18020()*-0.0337145);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41660() {
   return (neuron0x2f18360()*-0.00657869);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f416a0() {
   return (neuron0x2f186a0()*-0.00270341);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f416e0() {
   return (neuron0x2f189e0()*-0.00805514);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41720() {
   return (neuron0x2f18d20()*-0.000588141);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41760() {
   return (neuron0x2f19060()*0.0175063);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f417a0() {
   return (neuron0x2f193a0()*-0.369878);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f417e0() {
   return (neuron0x2f196e0()*-0.0234932);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41820() {
   return (neuron0x2f19a20()*-0.0193306);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41860() {
   return (neuron0x2f19d60()*-0.0410155);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f418a0() {
   return (neuron0x2f1a0a0()*-0.0152945);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41330() {
   return (neuron0x2f1a3e0()*-0.0420751);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41370() {
   return (neuron0x2f1a940()*-0.0283458);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f419f0() {
   return (neuron0x2f1ab60()*0.0170188);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41a30() {
   return (neuron0x2f1aea0()*0.0217788);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41a70() {
   return (neuron0x2f1b1e0()*-0.00386055);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41ab0() {
   return (neuron0x2f1b520()*-0.0102647);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41af0() {
   return (neuron0x2f1b860()*-0.00834744);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41b30() {
   return (neuron0x2f1bba0()*-0.432824);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1cf70() {
   return (neuron0x2f1c010()*3.19218);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1cfb0() {
   return (neuron0x2f1c960()*-0.511224);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e4d0() {
   return (neuron0x2f1d440()*-1.52437);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1e510() {
   return (neuron0x2ce1870()*2.60694);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1ffb0() {
   return (neuron0x2f1e220()*-2.01192);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1fff0() {
   return (neuron0x2f1fd00()*0.229663);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20d80() {
   return (neuron0x2f20ad0()*0.271026);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f20dc0() {
   return (neuron0x2f214a0()*-2.61646);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21750() {
   return (neuron0x2f21e70()*3.59228);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f21790() {
   return (neuron0x2f22950()*-0.217804);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22120() {
   return (neuron0x2f23320()*-0.521461);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22160() {
   return (neuron0x2f20400()*4.38159);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22c00() {
   return (neuron0x2f24ed0()*0.688428);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f22c40() {
   return (neuron0x2f258a0()*-0.153247);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f235d0() {
   return (neuron0x2f26270()*-0.0668557);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f23610() {
   return (neuron0x2f26c40()*-5.37581);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f206b0() {
   return (neuron0x2f28a50()*-0.252498);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f206f0() {
   return (neuron0x2f28d30()*-0.402059);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25180() {
   return (neuron0x2f29700()*0.853646);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f251c0() {
   return (neuron0x2f2a0d0()*-0.260245);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25b50() {
   return (neuron0x2f2aaa0()*-1.67658);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f25b90() {
   return (neuron0x2f2b470()*-0.534899);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26520() {
   return (neuron0x2f23fc0()*-0.797511);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26560() {
   return (neuron0x2f24990()*-1.0683);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26ef0() {
   return (neuron0x2f2e200()*1.7395);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f26f30() {
   return (neuron0x2f2ebd0()*2.79382);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f19f80() {
   return (neuron0x2f2f5a0()*-2.22049);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f19fc0() {
   return (neuron0x2f2ff70()*-2.6367);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f28fe0() {
   return (neuron0x2f30940()*-0.392682);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f29020() {
   return (neuron0x2f31310()*-0.595754);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f299b0() {
   return (neuron0x2f31ce0()*-1.29157);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f299f0() {
   return (neuron0x2f326b0()*-0.973096);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a380() {
   return (neuron0x2f28740()*2.65165);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2a3c0() {
   return (neuron0x2f35290()*-1.23344);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ad50() {
   return (neuron0x2f35c60()*2.83065);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ad90() {
   return (neuron0x2f36630()*-0.356252);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b720() {
   return (neuron0x2f37000()*-0.260878);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2b760() {
   return (neuron0x2f379d0()*-0.0867101);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f24270() {
   return (neuron0x2f383a0()*-0.468688);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f242b0() {
   return (neuron0x2f38d70()*3.30442);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2db20() {
   return (neuron0x2f39740()*0.413463);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2db60() {
   return (neuron0x2f3a320()*-0.269942);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e4b0() {
   return (neuron0x2f3acf0()*0.2395);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2e4f0() {
   return (neuron0x2f2bb70()*1.40477);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2ee80() {
   return (neuron0x2f2c540()*-1.47703);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2eec0() {
   return (neuron0x2f2cf10()*0.663178);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f850() {
   return (neuron0x2f3f550()*0.338385);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2f890() {
   return (neuron0x2f3fe00()*2.73191);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30220() {
   return (neuron0x2f407d0()*2.05879);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30260() {
   return (neuron0x2f411a0()*-2.02236);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f32960() {
   return (neuron0x2f1c010()*-2.22092);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f329a0() {
   return (neuron0x2f1c960()*-0.0341121);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f27f20() {
   return (neuron0x2f1d440()*1.19938);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f27f60() {
   return (neuron0x2ce1870()*2.7513);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35540() {
   return (neuron0x2f1e220()*-0.0203894);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35580() {
   return (neuron0x2f1fd00()*0.0612964);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35f10() {
   return (neuron0x2f20ad0()*0.0316423);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f35f50() {
   return (neuron0x2f214a0()*0.872968);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f368e0() {
   return (neuron0x2f21e70()*1.3389);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f36920() {
   return (neuron0x2f22950()*-0.0586578);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f372b0() {
   return (neuron0x2f23320()*0.635258);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f372f0() {
   return (neuron0x2f20400()*0.549138);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37c80() {
   return (neuron0x2f24ed0()*-0.466286);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f37cc0() {
   return (neuron0x2f258a0()*-0.0237282);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38650() {
   return (neuron0x2f26270()*0.476946);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f38690() {
   return (neuron0x2f26c40()*-3.85421);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39020() {
   return (neuron0x2f28a50()*-0.0373474);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39060() {
   return (neuron0x2f28d30()*-0.0899483);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f399f0() {
   return (neuron0x2f29700()*1.42283);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f39a30() {
   return (neuron0x2f2a0d0()*0.0273464);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a5d0() {
   return (neuron0x2f2aaa0()*-1.18294);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3a610() {
   return (neuron0x2f2b470()*-0.0972941);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3afa0() {
   return (neuron0x2f23fc0()*0.00301056);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3afe0() {
   return (neuron0x2f24990()*-0.143869);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2be20() {
   return (neuron0x2f2e200()*0.585793);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2be60() {
   return (neuron0x2f2ebd0()*0.25935);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c7f0() {
   return (neuron0x2f2f5a0()*-0.0638917);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2c830() {
   return (neuron0x2f2ff70()*0.251699);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d1c0() {
   return (neuron0x2f30940()*0.000626134);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f2d200() {
   return (neuron0x2f31310()*3.90141);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3f6e0() {
   return (neuron0x2f31ce0()*0.74687);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f3f720() {
   return (neuron0x2f326b0()*0.0594532);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f400b0() {
   return (neuron0x2f28740()*0.8362);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f400f0() {
   return (neuron0x2f35290()*1.35908);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40a80() {
   return (neuron0x2f35c60()*-1.0985);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f40ac0() {
   return (neuron0x2f36630()*-0.0528136);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41450() {
   return (neuron0x2f37000()*-0.100265);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41490() {
   return (neuron0x2f379d0()*-0.0436675);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c2c0() {
   return (neuron0x2f383a0()*0.018997);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f1c300() {
   return (neuron0x2f38d70()*-0.18419);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30bf0() {
   return (neuron0x2f39740()*-0.55884);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f30c30() {
   return (neuron0x2f3a320()*-0.0279764);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41b70() {
   return (neuron0x2f3acf0()*0.0377296);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41bb0() {
   return (neuron0x2f2bb70()*0.222056);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41bf0() {
   return (neuron0x2f2c540()*0.690334);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f41c30() {
   return (neuron0x2f2cf10()*-0.0528117);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f48ae0() {
   return (neuron0x2f3f550()*0.0543059);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f48b20() {
   return (neuron0x2f3fe00()*0.29331);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f48b60() {
   return (neuron0x2f407d0()*-1.02777);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f48ba0() {
   return (neuron0x2f411a0()*-1.13074);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f48f20() {
   return (neuron0x2f1c010()*-0.419477);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f48f60() {
   return (neuron0x2f1c960()*-0.27038);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f48fa0() {
   return (neuron0x2f1d440()*1.90004);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f48fe0() {
   return (neuron0x2ce1870()*2.05337);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49020() {
   return (neuron0x2f1e220()*-0.926118);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49060() {
   return (neuron0x2f1fd00()*0.10715);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f490a0() {
   return (neuron0x2f20ad0()*0.145163);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f490e0() {
   return (neuron0x2f214a0()*-0.206847);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49120() {
   return (neuron0x2f21e70()*1.20621);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49160() {
   return (neuron0x2f22950()*-0.0874047);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f491a0() {
   return (neuron0x2f23320()*0.249602);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f491e0() {
   return (neuron0x2f20400()*3.6468);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49220() {
   return (neuron0x2f24ed0()*-0.178965);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49260() {
   return (neuron0x2f258a0()*0.0372396);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f492a0() {
   return (neuron0x2f26270()*0.355347);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f492e0() {
   return (neuron0x2f26c40()*-1.3675);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f48d70() {
   return (neuron0x2f28a50()*-0.096094);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f48db0() {
   return (neuron0x2f28d30()*-0.271618);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49430() {
   return (neuron0x2f29700()*1.83658);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49470() {
   return (neuron0x2f2a0d0()*-0.113345);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f494b0() {
   return (neuron0x2f2aaa0()*-3.79562);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f494f0() {
   return (neuron0x2f2b470()*0.223653);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49530() {
   return (neuron0x2f23fc0()*-0.63863);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49570() {
   return (neuron0x2f24990()*-0.507631);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f495b0() {
   return (neuron0x2f2e200()*0.8737);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f495f0() {
   return (neuron0x2f2ebd0()*0.218356);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49630() {
   return (neuron0x2f2f5a0()*-1.03382);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49670() {
   return (neuron0x2f2ff70()*0.0341191);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f496b0() {
   return (neuron0x2f30940()*-0.143895);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f496f0() {
   return (neuron0x2f31310()*1.61026);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49730() {
   return (neuron0x2f31ce0()*1.56167);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49770() {
   return (neuron0x2f326b0()*-0.254935);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49320() {
   return (neuron0x2f28740()*0.665235);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49360() {
   return (neuron0x2f35290()*1.24266);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f493a0() {
   return (neuron0x2f35c60()*0.0476355);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f493e0() {
   return (neuron0x2f36630()*-0.132379);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f499c0() {
   return (neuron0x2f37000()*-0.0848984);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49a00() {
   return (neuron0x2f379d0()*-0.0533519);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49a40() {
   return (neuron0x2f383a0()*-0.312993);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49a80() {
   return (neuron0x2f38d70()*2.5824);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49ac0() {
   return (neuron0x2f39740()*-0.543356);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49b00() {
   return (neuron0x2f3a320()*-0.0837086);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49b40() {
   return (neuron0x2f3acf0()*0.150665);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49b80() {
   return (neuron0x2f2bb70()*0.670199);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49bc0() {
   return (neuron0x2f2c540()*1.26439);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49c00() {
   return (neuron0x2f2cf10()*0.208182);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49c40() {
   return (neuron0x2f3f550()*0.208151);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49c80() {
   return (neuron0x2f3fe00()*1.09401);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49cc0() {
   return (neuron0x2f407d0()*-1.47201);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49d00() {
   return (neuron0x2f411a0()*-3.68505);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a080() {
   return (neuron0x2f1c010()*0.771336);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a0c0() {
   return (neuron0x2f1c960()*0.192527);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a100() {
   return (neuron0x2f1d440()*1.88947);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a140() {
   return (neuron0x2ce1870()*-4.91399);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a180() {
   return (neuron0x2f1e220()*0.552572);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a1c0() {
   return (neuron0x2f1fd00()*-0.205532);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a200() {
   return (neuron0x2f20ad0()*-0.0570695);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a240() {
   return (neuron0x2f214a0()*0.492394);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a280() {
   return (neuron0x2f21e70()*-1.57831);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a2c0() {
   return (neuron0x2f22950()*0.186825);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a300() {
   return (neuron0x2f23320()*0.418449);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a340() {
   return (neuron0x2f20400()*0.393747);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a380() {
   return (neuron0x2f24ed0()*0.114544);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a3c0() {
   return (neuron0x2f258a0()*0.205721);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a400() {
   return (neuron0x2f26270()*-0.630098);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a440() {
   return (neuron0x2f26c40()*3.40132);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49ed0() {
   return (neuron0x2f28a50()*0.178853);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f49f10() {
   return (neuron0x2f28d30()*0.0897756);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a590() {
   return (neuron0x2f29700()*-0.620655);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a5d0() {
   return (neuron0x2f2a0d0()*0.0209012);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a610() {
   return (neuron0x2f2aaa0()*-3.09097);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a650() {
   return (neuron0x2f2b470()*2.25749);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a690() {
   return (neuron0x2f23fc0()*-0.27397);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a6d0() {
   return (neuron0x2f24990()*0.544251);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a710() {
   return (neuron0x2f2e200()*-2.20956);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a750() {
   return (neuron0x2f2ebd0()*-2.19036);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a790() {
   return (neuron0x2f2f5a0()*0.633263);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a7d0() {
   return (neuron0x2f2ff70()*2.18388);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a810() {
   return (neuron0x2f30940()*0.0152498);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a850() {
   return (neuron0x2f31310()*-0.559382);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a890() {
   return (neuron0x2f31ce0()*2.09605);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a8d0() {
   return (neuron0x2f326b0()*0.361003);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a480() {
   return (neuron0x2f28740()*-3.4228);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a4c0() {
   return (neuron0x2f35290()*0.801764);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a500() {
   return (neuron0x2f35c60()*-0.483156);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4a540() {
   return (neuron0x2f36630()*0.287144);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4ab20() {
   return (neuron0x2f37000()*0.380503);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4ab60() {
   return (neuron0x2f379d0()*0.0161738);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4aba0() {
   return (neuron0x2f383a0()*-0.51411);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4abe0() {
   return (neuron0x2f38d70()*-1.59406);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4ac20() {
   return (neuron0x2f39740()*0.0643068);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4ac60() {
   return (neuron0x2f3a320()*0.155908);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4aca0() {
   return (neuron0x2f3acf0()*-0.0237134);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4ace0() {
   return (neuron0x2f2bb70()*-0.538713);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4ad20() {
   return (neuron0x2f2c540()*-0.991008);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4ad60() {
   return (neuron0x2f2cf10()*-0.0591358);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4ada0() {
   return (neuron0x2f3f550()*-0.135818);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4ade0() {
   return (neuron0x2f3fe00()*-1.52583);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4ae20() {
   return (neuron0x2f407d0()*-2.29881);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4ae60() {
   return (neuron0x2f411a0()*-2.67307);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b1e0() {
   return (neuron0x2f1c010()*3.12739);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b220() {
   return (neuron0x2f1c960()*-0.0138342);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b260() {
   return (neuron0x2f1d440()*1.99522);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b2a0() {
   return (neuron0x2ce1870()*-0.745688);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b2e0() {
   return (neuron0x2f1e220()*0.192684);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b320() {
   return (neuron0x2f1fd00()*0.139873);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b360() {
   return (neuron0x2f20ad0()*0.0658651);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b3a0() {
   return (neuron0x2f214a0()*-0.563307);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b3e0() {
   return (neuron0x2f21e70()*-0.578692);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b420() {
   return (neuron0x2f22950()*-0.136849);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b460() {
   return (neuron0x2f23320()*-0.147151);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b4a0() {
   return (neuron0x2f20400()*1.28158);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b4e0() {
   return (neuron0x2f24ed0()*0.109543);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b520() {
   return (neuron0x2f258a0()*-0.0191377);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b560() {
   return (neuron0x2f26270()*-0.64746);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b5a0() {
   return (neuron0x2f26c40()*2.15044);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b030() {
   return (neuron0x2f28a50()*-0.0487688);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b070() {
   return (neuron0x2f28d30()*-0.137063);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b6f0() {
   return (neuron0x2f29700()*1.87659);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b730() {
   return (neuron0x2f2a0d0()*0.112524);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b770() {
   return (neuron0x2f2aaa0()*-3.38809);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b7b0() {
   return (neuron0x2f2b470()*-6.61866);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b7f0() {
   return (neuron0x2f23fc0()*-0.0301024);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b830() {
   return (neuron0x2f24990()*-0.0888625);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b870() {
   return (neuron0x2f2e200()*1.14635);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b8b0() {
   return (neuron0x2f2ebd0()*1.47206);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b8f0() {
   return (neuron0x2f2f5a0()*0.0172334);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b930() {
   return (neuron0x2f2ff70()*0.125781);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b970() {
   return (neuron0x2f30940()*-0.163005);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b9b0() {
   return (neuron0x2f31310()*2.94303);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b9f0() {
   return (neuron0x2f31ce0()*2.2172);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4ba30() {
   return (neuron0x2f326b0()*0.141325);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b5e0() {
   return (neuron0x2f28740()*-0.0215757);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b620() {
   return (neuron0x2f35290()*2.57906);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b660() {
   return (neuron0x2f35c60()*0.734695);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4b6a0() {
   return (neuron0x2f36630()*-0.154208);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4bc80() {
   return (neuron0x2f37000()*-0.25658);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4bcc0() {
   return (neuron0x2f379d0()*-0.189432);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4bd00() {
   return (neuron0x2f383a0()*-0.0804976);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4bd40() {
   return (neuron0x2f38d70()*1.43901);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4bd80() {
   return (neuron0x2f39740()*-0.587019);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4bdc0() {
   return (neuron0x2f3a320()*-0.0446796);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4be00() {
   return (neuron0x2f3acf0()*0.125626);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4be40() {
   return (neuron0x2f2bb70()*0.692747);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4be80() {
   return (neuron0x2f2c540()*-0.335343);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4bec0() {
   return (neuron0x2f2cf10()*1.62815);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4bf00() {
   return (neuron0x2f3f550()*0.29102);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4bf40() {
   return (neuron0x2f3fe00()*0.673067);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4bf80() {
   return (neuron0x2f407d0()*6.14661);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4bfc0() {
   return (neuron0x2f411a0()*-2.35871);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4c220() {
   return (neuron0x2f483a0()*-4.33985);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4c260() {
   return (neuron0x2f48740()*-8.73831);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4c2a0() {
   return (neuron0x2f48be0()*6.73656);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4c2e0() {
   return (neuron0x2f49d40()*-3.25612);
}

double NNfunction_nn_chi1_charge2p::synapse0x2f4c320() {
   return (neuron0x2f4aea0()*2.31155);
}

