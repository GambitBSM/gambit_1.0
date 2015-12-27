#include "NNfunction_ng_chi01.h"
#include <cmath>

double NNfunction_ng_chi01::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.2186)/15.0721;
   input1 = (in1 - 42.9889)/832.62;
   input2 = (in2 - 428.912)/494.705;
   input3 = (in3 - 231.176)/693.15;
   input4 = (in4 - 1058.83)/879.785;
   input5 = (in5 - 982.793)/902.305;
   input6 = (in6 - 987.098)/901.21;
   input7 = (in7 - 981.89)/878.457;
   input8 = (in8 - 986.205)/917.044;
   input9 = (in9 - 979.17)/909.47;
   input10 = (in10 - 977.945)/883.198;
   input11 = (in11 - 900.493)/821.87;
   input12 = (in12 - 944.584)/848.115;
   input13 = (in13 - 713.307)/583.45;
   input14 = (in14 - 936.877)/820.458;
   input15 = (in15 - 948.574)/825.236;
   input16 = (in16 - 634.824)/515.705;
   input17 = (in17 - 961.481)/864.787;
   input18 = (in18 - 961.146)/865.667;
   input19 = (in19 - 957.009)/819.147;
   input20 = (in20 - -194.493)/517.627;
   input21 = (in21 - -256.704)/1108.88;
   input22 = (in22 - -25.1036)/1133.49;
   input23 = (in23 - -37.7533)/623.729;
   switch(index) {
     case 0:
         return neuron0x2acb600();
     default:
         return 0.;
   }
}

double NNfunction_ng_chi01::Value(int index, double* input) {
   input0 = (input[0] - 23.2186)/15.0721;
   input1 = (input[1] - 42.9889)/832.62;
   input2 = (input[2] - 428.912)/494.705;
   input3 = (input[3] - 231.176)/693.15;
   input4 = (input[4] - 1058.83)/879.785;
   input5 = (input[5] - 982.793)/902.305;
   input6 = (input[6] - 987.098)/901.21;
   input7 = (input[7] - 981.89)/878.457;
   input8 = (input[8] - 986.205)/917.044;
   input9 = (input[9] - 979.17)/909.47;
   input10 = (input[10] - 977.945)/883.198;
   input11 = (input[11] - 900.493)/821.87;
   input12 = (input[12] - 944.584)/848.115;
   input13 = (input[13] - 713.307)/583.45;
   input14 = (input[14] - 936.877)/820.458;
   input15 = (input[15] - 948.574)/825.236;
   input16 = (input[16] - 634.824)/515.705;
   input17 = (input[17] - 961.481)/864.787;
   input18 = (input[18] - 961.146)/865.667;
   input19 = (input[19] - 957.009)/819.147;
   input20 = (input[20] - -194.493)/517.627;
   input21 = (input[21] - -256.704)/1108.88;
   input22 = (input[22] - -25.1036)/1133.49;
   input23 = (input[23] - -37.7533)/623.729;
   switch(index) {
     case 0:
         return neuron0x2acb600();
     default:
         return 0.;
   }
}

double NNfunction_ng_chi01::neuron0x2a96670() {
   return input0;
}

double NNfunction_ng_chi01::neuron0x2a96920() {
   return input1;
}

double NNfunction_ng_chi01::neuron0x2a96c60() {
   return input2;
}

double NNfunction_ng_chi01::neuron0x2a96fa0() {
   return input3;
}

double NNfunction_ng_chi01::neuron0x2a972e0() {
   return input4;
}

double NNfunction_ng_chi01::neuron0x2a97620() {
   return input5;
}

double NNfunction_ng_chi01::neuron0x2a97960() {
   return input6;
}

double NNfunction_ng_chi01::neuron0x2a97ca0() {
   return input7;
}

double NNfunction_ng_chi01::neuron0x2a97fe0() {
   return input8;
}

double NNfunction_ng_chi01::neuron0x2a98320() {
   return input9;
}

double NNfunction_ng_chi01::neuron0x2a98660() {
   return input10;
}

double NNfunction_ng_chi01::neuron0x2a989a0() {
   return input11;
}

double NNfunction_ng_chi01::neuron0x2a98ce0() {
   return input12;
}

double NNfunction_ng_chi01::neuron0x2a99020() {
   return input13;
}

double NNfunction_ng_chi01::neuron0x2a99360() {
   return input14;
}

double NNfunction_ng_chi01::neuron0x2a996a0() {
   return input15;
}

double NNfunction_ng_chi01::neuron0x2a999e0() {
   return input16;
}

double NNfunction_ng_chi01::neuron0x2a99f40() {
   return input17;
}

double NNfunction_ng_chi01::neuron0x2a9a280() {
   return input18;
}

double NNfunction_ng_chi01::neuron0x2a9a5c0() {
   return input19;
}

double NNfunction_ng_chi01::neuron0x2a9a900() {
   return input20;
}

double NNfunction_ng_chi01::neuron0x2a9ac40() {
   return input21;
}

double NNfunction_ng_chi01::neuron0x2a9af80() {
   return input22;
}

double NNfunction_ng_chi01::neuron0x2a9b2c0() {
   return input23;
}

double NNfunction_ng_chi01::input0x2a9b730() {
   double input = -0.8144;
   input += synapse0x2a9ba70();
   input += synapse0x2a9bab0();
   input += synapse0x2a9baf0();
   input += synapse0x2a9bb30();
   input += synapse0x2a9bb70();
   input += synapse0x2a9bbb0();
   input += synapse0x2a9bbf0();
   input += synapse0x2a9bc30();
   input += synapse0x2a9bc70();
   input += synapse0x2a9bcb0();
   input += synapse0x2a9bcf0();
   input += synapse0x2a9bd30();
   input += synapse0x2a9bd70();
   input += synapse0x2a9bdb0();
   input += synapse0x2a9bdf0();
   input += synapse0x2a9be30();
   input += synapse0x2a9b8c0();
   input += synapse0x2a9b900();
   input += synapse0x2852b30();
   input += synapse0x2852b70();
   input += synapse0x2a9be70();
   input += synapse0x2a9beb0();
   input += synapse0x2a9bef0();
   input += synapse0x2a9bf30();
   return input;
}

double NNfunction_ng_chi01::neuron0x2a9b730() {
   double input = input0x2a9b730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2a9bf70() {
   double input = -0.402117;
   input += synapse0x2a9c2b0();
   input += synapse0x2a9c2f0();
   input += synapse0x2a9c330();
   input += synapse0x2a9c370();
   input += synapse0x2a9c3b0();
   input += synapse0x2a9c3f0();
   input += synapse0x2a9c430();
   input += synapse0x2a9c470();
   input += synapse0x2a9c4b0();
   input += synapse0x2852980();
   input += synapse0x28529c0();
   input += synapse0x2852a00();
   input += synapse0x2852a40();
   input += synapse0x2a9c700();
   input += synapse0x2a9c740();
   input += synapse0x2a9c780();
   input += synapse0x2a9c100();
   input += synapse0x2a9c140();
   input += synapse0x2a9c8d0();
   input += synapse0x2a9c910();
   input += synapse0x2a9c950();
   input += synapse0x2a9c990();
   input += synapse0x2a9c9d0();
   input += synapse0x2a9ca10();
   return input;
}

double NNfunction_ng_chi01::neuron0x2a9bf70() {
   double input = input0x2a9bf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2a9ca50() {
   double input = 0.805826;
   input += synapse0x2a9cd90();
   input += synapse0x2a9cdd0();
   input += synapse0x2a9ce10();
   input += synapse0x2a9ce50();
   input += synapse0x2a9ce90();
   input += synapse0x2a9ced0();
   input += synapse0x2a9cf10();
   input += synapse0x2a9cf50();
   input += synapse0x2a9cf90();
   input += synapse0x2a9cfd0();
   input += synapse0x2a9d010();
   input += synapse0x2a9d050();
   input += synapse0x2a9d090();
   input += synapse0x2a9d0d0();
   input += synapse0x2a9d110();
   input += synapse0x2a9d150();
   input += synapse0x2a9cbe0();
   input += synapse0x2a9cc20();
   input += synapse0x179a920();
   input += synapse0x2860720();
   input += synapse0x2860760();
   input += synapse0x2a9f080();
   input += synapse0x2a9f0c0();
   input += synapse0x2a963b0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2a9ca50() {
   double input = input0x2a9ca50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2a9c4f0() {
   double input = -0.0745294;
   input += synapse0x2a96480();
   input += synapse0x2860fa0();
   input += synapse0x2a9c680();
   input += synapse0x2a9c6c0();
   input += synapse0x2a9d2a0();
   input += synapse0x2a9d2e0();
   input += synapse0x2a9d320();
   input += synapse0x2a9d360();
   input += synapse0x2a9d3a0();
   input += synapse0x2a9d3e0();
   input += synapse0x2a9d420();
   input += synapse0x2a9d460();
   input += synapse0x2a9d4a0();
   input += synapse0x2a9d4e0();
   input += synapse0x2a9d520();
   input += synapse0x2a9d560();
   input += synapse0x2a963f0();
   input += synapse0x2a96430();
   input += synapse0x2a9d6b0();
   input += synapse0x2a9d6f0();
   input += synapse0x2a9d730();
   input += synapse0x2a9d770();
   input += synapse0x2a9d7b0();
   input += synapse0x2a9d7f0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2a9c4f0() {
   double input = input0x2a9c4f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2a9d830() {
   double input = 1.06926;
   input += synapse0x2a9db70();
   input += synapse0x2a9dbb0();
   input += synapse0x2a9dbf0();
   input += synapse0x2a9dc30();
   input += synapse0x2a9dc70();
   input += synapse0x2a9dcb0();
   input += synapse0x2a9dcf0();
   input += synapse0x2a9dd30();
   input += synapse0x2a9dd70();
   input += synapse0x2a9ddb0();
   input += synapse0x2a9ddf0();
   input += synapse0x2a9de30();
   input += synapse0x2a9de70();
   input += synapse0x2a9deb0();
   input += synapse0x2a9def0();
   input += synapse0x2a9df30();
   input += synapse0x2a9e080();
   input += synapse0x2a9d9c0();
   input += synapse0x2a9da00();
   input += synapse0x2a9f1c0();
   input += synapse0x2a9f200();
   input += synapse0x2a9f240();
   input += synapse0x2a9f280();
   input += synapse0x2a9f2c0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2a9d830() {
   double input = input0x2a9d830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2a9f300() {
   double input = 0.121563;
   input += synapse0x2a9f640();
   input += synapse0x2a9f680();
   input += synapse0x2a9f6c0();
   input += synapse0x2a9f700();
   input += synapse0x2a9f740();
   input += synapse0x2a9f780();
   input += synapse0x2a9f7c0();
   input += synapse0x2a9f800();
   input += synapse0x2a9f840();
   input += synapse0x2860a70();
   input += synapse0x2860ab0();
   input += synapse0x2860af0();
   input += synapse0x2860b30();
   input += synapse0x2860b70();
   input += synapse0x2860bb0();
   input += synapse0x2860bf0();
   input += synapse0x2a9f490();
   input += synapse0x2a9f4d0();
   input += synapse0x2860d40();
   input += synapse0x2860d80();
   input += synapse0x2860dc0();
   input += synapse0x2860e00();
   input += synapse0x2860e40();
   input += synapse0x2aa0090();
   return input;
}

double NNfunction_ng_chi01::neuron0x2a9f300() {
   double input = input0x2a9f300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aa00d0() {
   double input = -1.48559;
   input += synapse0x2aa0410();
   input += synapse0x2aa0450();
   input += synapse0x2aa0490();
   input += synapse0x2aa04d0();
   input += synapse0x2aa0510();
   input += synapse0x2aa0550();
   input += synapse0x2aa0590();
   input += synapse0x2aa05d0();
   input += synapse0x2aa0610();
   input += synapse0x2aa0650();
   input += synapse0x2aa0690();
   input += synapse0x2aa06d0();
   input += synapse0x2aa0710();
   input += synapse0x2aa0750();
   input += synapse0x2aa0790();
   input += synapse0x2aa07d0();
   input += synapse0x2aa0260();
   input += synapse0x2aa02a0();
   input += synapse0x2aa0920();
   input += synapse0x2aa0960();
   input += synapse0x2aa09a0();
   input += synapse0x2aa09e0();
   input += synapse0x2aa0a20();
   input += synapse0x2aa0a60();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aa00d0() {
   double input = input0x2aa00d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aa0aa0() {
   double input = -1.29926;
   input += synapse0x2aa0de0();
   input += synapse0x2aa0e20();
   input += synapse0x2aa0e60();
   input += synapse0x2aa0ea0();
   input += synapse0x2aa0ee0();
   input += synapse0x2aa0f20();
   input += synapse0x2aa0f60();
   input += synapse0x2aa0fa0();
   input += synapse0x2aa0fe0();
   input += synapse0x2aa1020();
   input += synapse0x2aa1060();
   input += synapse0x2aa10a0();
   input += synapse0x2aa10e0();
   input += synapse0x2aa1120();
   input += synapse0x2aa1160();
   input += synapse0x2aa11a0();
   input += synapse0x2aa0c30();
   input += synapse0x2aa0c70();
   input += synapse0x2aa12f0();
   input += synapse0x2aa1330();
   input += synapse0x2aa1370();
   input += synapse0x2aa13b0();
   input += synapse0x2aa13f0();
   input += synapse0x2aa1430();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aa0aa0() {
   double input = input0x2aa0aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aa1470() {
   double input = -1.82889;
   input += synapse0x2a99e30();
   input += synapse0x2a99e70();
   input += synapse0x2a99eb0();
   input += synapse0x2a99ef0();
   input += synapse0x2aa19c0();
   input += synapse0x2aa1a00();
   input += synapse0x2aa1a40();
   input += synapse0x2aa1a80();
   input += synapse0x2aa1ac0();
   input += synapse0x2aa1b00();
   input += synapse0x2aa1b40();
   input += synapse0x2aa1b80();
   input += synapse0x2aa1bc0();
   input += synapse0x2aa1c00();
   input += synapse0x2aa1c40();
   input += synapse0x2aa1c80();
   input += synapse0x2aa1600();
   input += synapse0x2aa1640();
   input += synapse0x2aa1dd0();
   input += synapse0x2aa1e10();
   input += synapse0x2aa1e50();
   input += synapse0x2aa1e90();
   input += synapse0x2aa1ed0();
   input += synapse0x2aa1f10();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aa1470() {
   double input = input0x2aa1470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aa1f50() {
   double input = -0.212012;
   input += synapse0x2aa2290();
   input += synapse0x2aa22d0();
   input += synapse0x2aa2310();
   input += synapse0x2aa2350();
   input += synapse0x2aa2390();
   input += synapse0x2aa23d0();
   input += synapse0x2aa2410();
   input += synapse0x2aa2450();
   input += synapse0x2aa2490();
   input += synapse0x2aa24d0();
   input += synapse0x2aa2510();
   input += synapse0x2aa2550();
   input += synapse0x2aa2590();
   input += synapse0x2aa25d0();
   input += synapse0x2aa2610();
   input += synapse0x2aa2650();
   input += synapse0x2aa20e0();
   input += synapse0x2aa2120();
   input += synapse0x2aa27a0();
   input += synapse0x2aa27e0();
   input += synapse0x2aa2820();
   input += synapse0x2aa2860();
   input += synapse0x2aa28a0();
   input += synapse0x2aa28e0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aa1f50() {
   double input = input0x2aa1f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aa2920() {
   double input = -0.0861423;
   input += synapse0x2aa2c60();
   input += synapse0x2aa2ca0();
   input += synapse0x2aa2ce0();
   input += synapse0x2aa2d20();
   input += synapse0x2aa2d60();
   input += synapse0x2aa2da0();
   input += synapse0x2aa2de0();
   input += synapse0x2aa2e20();
   input += synapse0x2aa2e60();
   input += synapse0x2aa2ea0();
   input += synapse0x2aa2ee0();
   input += synapse0x2aa2f20();
   input += synapse0x2aa2f60();
   input += synapse0x2aa2fa0();
   input += synapse0x2aa2fe0();
   input += synapse0x2aa3020();
   input += synapse0x2aa2ab0();
   input += synapse0x2aa2af0();
   input += synapse0x2a9f880();
   input += synapse0x2a9f8c0();
   input += synapse0x2a9f900();
   input += synapse0x2a9f940();
   input += synapse0x2a9f980();
   input += synapse0x2a9f9c0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aa2920() {
   double input = input0x2aa2920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2a9fa00() {
   double input = -4.61546;
   input += synapse0x2a9fd40();
   input += synapse0x2a9fd80();
   input += synapse0x2a9fdc0();
   input += synapse0x2a9fe00();
   input += synapse0x2a9fe40();
   input += synapse0x2a9fe80();
   input += synapse0x2a9fec0();
   input += synapse0x2a9ff00();
   input += synapse0x2a9ff40();
   input += synapse0x2a9ff80();
   input += synapse0x2a9ffc0();
   input += synapse0x2aa0000();
   input += synapse0x2aa0040();
   input += synapse0x2aa4180();
   input += synapse0x2aa41c0();
   input += synapse0x2aa4200();
   input += synapse0x2a9fb90();
   input += synapse0x2a9fbd0();
   input += synapse0x2aa4350();
   input += synapse0x2aa4390();
   input += synapse0x2aa43d0();
   input += synapse0x2aa4410();
   input += synapse0x2aa4450();
   input += synapse0x2aa4490();
   return input;
}

double NNfunction_ng_chi01::neuron0x2a9fa00() {
   double input = input0x2a9fa00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aa44d0() {
   double input = 0.655789;
   input += synapse0x2aa4810();
   input += synapse0x2aa4850();
   input += synapse0x2aa4890();
   input += synapse0x2aa48d0();
   input += synapse0x2aa4910();
   input += synapse0x2aa4950();
   input += synapse0x2aa4990();
   input += synapse0x2aa49d0();
   input += synapse0x2aa4a10();
   input += synapse0x2aa4a50();
   input += synapse0x2aa4a90();
   input += synapse0x2aa4ad0();
   input += synapse0x2aa4b10();
   input += synapse0x2aa4b50();
   input += synapse0x2aa4b90();
   input += synapse0x2aa4bd0();
   input += synapse0x2aa4660();
   input += synapse0x2aa46a0();
   input += synapse0x2aa4d20();
   input += synapse0x2aa4d60();
   input += synapse0x2aa4da0();
   input += synapse0x2aa4de0();
   input += synapse0x2aa4e20();
   input += synapse0x2aa4e60();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aa44d0() {
   double input = input0x2aa44d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aa4ea0() {
   double input = 3.51898;
   input += synapse0x2aa51e0();
   input += synapse0x2aa5220();
   input += synapse0x2aa5260();
   input += synapse0x2aa52a0();
   input += synapse0x2aa52e0();
   input += synapse0x2aa5320();
   input += synapse0x2aa5360();
   input += synapse0x2aa53a0();
   input += synapse0x2aa53e0();
   input += synapse0x2aa5420();
   input += synapse0x2aa5460();
   input += synapse0x2aa54a0();
   input += synapse0x2aa54e0();
   input += synapse0x2aa5520();
   input += synapse0x2aa5560();
   input += synapse0x2aa55a0();
   input += synapse0x2aa5030();
   input += synapse0x2aa5070();
   input += synapse0x2aa56f0();
   input += synapse0x2aa5730();
   input += synapse0x2aa5770();
   input += synapse0x2aa57b0();
   input += synapse0x2aa57f0();
   input += synapse0x2aa5830();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aa4ea0() {
   double input = input0x2aa4ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aa5870() {
   double input = 1.47537;
   input += synapse0x2aa5bb0();
   input += synapse0x2aa5bf0();
   input += synapse0x2aa5c30();
   input += synapse0x2aa5c70();
   input += synapse0x2aa5cb0();
   input += synapse0x2aa5cf0();
   input += synapse0x2aa5d30();
   input += synapse0x2aa5d70();
   input += synapse0x2aa5db0();
   input += synapse0x2aa5df0();
   input += synapse0x2aa5e30();
   input += synapse0x2aa5e70();
   input += synapse0x2aa5eb0();
   input += synapse0x2aa5ef0();
   input += synapse0x2aa5f30();
   input += synapse0x2aa5f70();
   input += synapse0x2aa5a00();
   input += synapse0x2aa5a40();
   input += synapse0x2aa60c0();
   input += synapse0x2aa6100();
   input += synapse0x2aa6140();
   input += synapse0x2aa6180();
   input += synapse0x2aa61c0();
   input += synapse0x2aa6200();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aa5870() {
   double input = input0x2aa5870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aa6240() {
   double input = 0.359961;
   input += synapse0x2aa6580();
   input += synapse0x2a96800();
   input += synapse0x2a96840();
   input += synapse0x2a96b40();
   input += synapse0x2a96b80();
   input += synapse0x2a96e80();
   input += synapse0x2a96ec0();
   input += synapse0x2a971c0();
   input += synapse0x2a97200();
   input += synapse0x2a97500();
   input += synapse0x2a97540();
   input += synapse0x2a97840();
   input += synapse0x2a97880();
   input += synapse0x2a97b80();
   input += synapse0x2a97bc0();
   input += synapse0x2a97ec0();
   input += synapse0x2a97f00();
   input += synapse0x2a98200();
   input += synapse0x2a98240();
   input += synapse0x2a98540();
   input += synapse0x2a98580();
   input += synapse0x2a98880();
   input += synapse0x2a988c0();
   input += synapse0x2a98bc0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aa6240() {
   double input = input0x2aa6240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aa8050() {
   double input = 0.821242;
   input += synapse0x2a98c00();
   input += synapse0x2a998c0();
   input += synapse0x2a99900();
   input += synapse0x2aa63d0();
   input += synapse0x2aa6410();
   input += synapse0x2a99c00();
   input += synapse0x2a99c40();
   input += synapse0x2a9a160();
   input += synapse0x2a9a1a0();
   input += synapse0x2a9a4a0();
   input += synapse0x2a9a4e0();
   input += synapse0x2a9a7e0();
   input += synapse0x2a9a820();
   input += synapse0x2a9ab20();
   input += synapse0x2a9ab60();
   input += synapse0x2a9ae60();
   input += synapse0x2a9aea0();
   input += synapse0x2a9b1a0();
   input += synapse0x2a9b1e0();
   input += synapse0x2a9b4e0();
   input += synapse0x2a9b520();
   input += synapse0x2a98f00();
   input += synapse0x2a98f40();
   input += synapse0x2aa82f0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aa8050() {
   double input = input0x2aa8050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aa8330() {
   double input = 0.487362;
   input += synapse0x2aa8670();
   input += synapse0x2aa86b0();
   input += synapse0x2aa86f0();
   input += synapse0x2aa8730();
   input += synapse0x2aa8770();
   input += synapse0x2aa87b0();
   input += synapse0x2aa87f0();
   input += synapse0x2aa8830();
   input += synapse0x2aa8870();
   input += synapse0x2aa88b0();
   input += synapse0x2aa88f0();
   input += synapse0x2aa8930();
   input += synapse0x2aa8970();
   input += synapse0x2aa89b0();
   input += synapse0x2aa89f0();
   input += synapse0x2aa8a30();
   input += synapse0x2aa84c0();
   input += synapse0x2aa8500();
   input += synapse0x2aa8b80();
   input += synapse0x2aa8bc0();
   input += synapse0x2aa8c00();
   input += synapse0x2aa8c40();
   input += synapse0x2aa8c80();
   input += synapse0x2aa8cc0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aa8330() {
   double input = input0x2aa8330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aa8d00() {
   double input = -0.215798;
   input += synapse0x2aa9040();
   input += synapse0x2aa9080();
   input += synapse0x2aa90c0();
   input += synapse0x2aa9100();
   input += synapse0x2aa9140();
   input += synapse0x2aa9180();
   input += synapse0x2aa91c0();
   input += synapse0x2aa9200();
   input += synapse0x2aa9240();
   input += synapse0x2aa9280();
   input += synapse0x2aa92c0();
   input += synapse0x2aa9300();
   input += synapse0x2aa9340();
   input += synapse0x2aa9380();
   input += synapse0x2aa93c0();
   input += synapse0x2aa9400();
   input += synapse0x2aa8e90();
   input += synapse0x2aa8ed0();
   input += synapse0x2aa9550();
   input += synapse0x2aa9590();
   input += synapse0x2aa95d0();
   input += synapse0x2aa9610();
   input += synapse0x2aa9650();
   input += synapse0x2aa9690();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aa8d00() {
   double input = input0x2aa8d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aa96d0() {
   double input = 2.25798;
   input += synapse0x2aa9a10();
   input += synapse0x2aa9a50();
   input += synapse0x2aa9a90();
   input += synapse0x2aa9ad0();
   input += synapse0x2aa9b10();
   input += synapse0x2aa9b50();
   input += synapse0x2aa9b90();
   input += synapse0x2aa9bd0();
   input += synapse0x2aa9c10();
   input += synapse0x2aa9c50();
   input += synapse0x2aa9c90();
   input += synapse0x2aa9cd0();
   input += synapse0x2aa9d10();
   input += synapse0x2aa9d50();
   input += synapse0x2aa9d90();
   input += synapse0x2aa9dd0();
   input += synapse0x2aa9860();
   input += synapse0x2aa98a0();
   input += synapse0x2aa9f20();
   input += synapse0x2aa9f60();
   input += synapse0x2aa9fa0();
   input += synapse0x2aa9fe0();
   input += synapse0x2aaa020();
   input += synapse0x2aaa060();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aa96d0() {
   double input = input0x2aa96d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aaa0a0() {
   double input = -2.69852;
   input += synapse0x2aaa3e0();
   input += synapse0x2aaa420();
   input += synapse0x2aaa460();
   input += synapse0x2aaa4a0();
   input += synapse0x2aaa4e0();
   input += synapse0x2aaa520();
   input += synapse0x2aaa560();
   input += synapse0x2aaa5a0();
   input += synapse0x2aaa5e0();
   input += synapse0x2aaa620();
   input += synapse0x2aaa660();
   input += synapse0x2aaa6a0();
   input += synapse0x2aaa6e0();
   input += synapse0x2aaa720();
   input += synapse0x2aaa760();
   input += synapse0x2aaa7a0();
   input += synapse0x2aaa230();
   input += synapse0x2aaa270();
   input += synapse0x2aaa8f0();
   input += synapse0x2aaa930();
   input += synapse0x2aaa970();
   input += synapse0x2aaa9b0();
   input += synapse0x2aaa9f0();
   input += synapse0x2aaaa30();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aaa0a0() {
   double input = input0x2aaa0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aaaa70() {
   double input = 0.366796;
   input += synapse0x2aaadb0();
   input += synapse0x2aaadf0();
   input += synapse0x2aaae30();
   input += synapse0x2aaae70();
   input += synapse0x2aaaeb0();
   input += synapse0x2aaaef0();
   input += synapse0x2aaaf30();
   input += synapse0x2aaaf70();
   input += synapse0x2aaafb0();
   input += synapse0x2aa3170();
   input += synapse0x2aa31b0();
   input += synapse0x2aa31f0();
   input += synapse0x2aa3230();
   input += synapse0x2aa3270();
   input += synapse0x2aa32b0();
   input += synapse0x2aa32f0();
   input += synapse0x2aaac00();
   input += synapse0x2aaac40();
   input += synapse0x2aa3440();
   input += synapse0x2aa3480();
   input += synapse0x2aa34c0();
   input += synapse0x2aa3500();
   input += synapse0x2aa3540();
   input += synapse0x2aa3580();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aaaa70() {
   double input = input0x2aaaa70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aa35c0() {
   double input = -0.914958;
   input += synapse0x2aa3900();
   input += synapse0x2aa3940();
   input += synapse0x2aa3980();
   input += synapse0x2aa39c0();
   input += synapse0x2aa3a00();
   input += synapse0x2aa3a40();
   input += synapse0x2aa3a80();
   input += synapse0x2aa3ac0();
   input += synapse0x2aa3b00();
   input += synapse0x2aa3b40();
   input += synapse0x2aa3b80();
   input += synapse0x2aa3bc0();
   input += synapse0x2aa3c00();
   input += synapse0x2aa3c40();
   input += synapse0x2aa3c80();
   input += synapse0x2aa3cc0();
   input += synapse0x2aa3750();
   input += synapse0x2aa3790();
   input += synapse0x2aa3e10();
   input += synapse0x2aa3e50();
   input += synapse0x2aa3e90();
   input += synapse0x2aa3ed0();
   input += synapse0x2aa3f10();
   input += synapse0x2aa3f50();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aa35c0() {
   double input = input0x2aa35c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aa3f90() {
   double input = -2.16612;
   input += synapse0x2aa4120();
   input += synapse0x2aad1b0();
   input += synapse0x2aad1f0();
   input += synapse0x2aad230();
   input += synapse0x2aad270();
   input += synapse0x2aad2b0();
   input += synapse0x2aad2f0();
   input += synapse0x2aad330();
   input += synapse0x2aad370();
   input += synapse0x2aad3b0();
   input += synapse0x2aad3f0();
   input += synapse0x2aad430();
   input += synapse0x2aad470();
   input += synapse0x2aad4b0();
   input += synapse0x2aad4f0();
   input += synapse0x2aad530();
   input += synapse0x2aad000();
   input += synapse0x2aad040();
   input += synapse0x2aad680();
   input += synapse0x2aad6c0();
   input += synapse0x2aad700();
   input += synapse0x2aad740();
   input += synapse0x2aad780();
   input += synapse0x2aad7c0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aa3f90() {
   double input = input0x2aa3f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aad800() {
   double input = 3.03122;
   input += synapse0x2aadb40();
   input += synapse0x2aadb80();
   input += synapse0x2aadbc0();
   input += synapse0x2aadc00();
   input += synapse0x2aadc40();
   input += synapse0x2aadc80();
   input += synapse0x2aadcc0();
   input += synapse0x2aadd00();
   input += synapse0x2aadd40();
   input += synapse0x2aadd80();
   input += synapse0x2aaddc0();
   input += synapse0x2aade00();
   input += synapse0x2aade40();
   input += synapse0x2aade80();
   input += synapse0x2aadec0();
   input += synapse0x2aadf00();
   input += synapse0x2aad990();
   input += synapse0x2aad9d0();
   input += synapse0x2aae050();
   input += synapse0x2aae090();
   input += synapse0x2aae0d0();
   input += synapse0x2aae110();
   input += synapse0x2aae150();
   input += synapse0x2aae190();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aad800() {
   double input = input0x2aad800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aae1d0() {
   double input = -4.4254;
   input += synapse0x2aae510();
   input += synapse0x2aae550();
   input += synapse0x2aae590();
   input += synapse0x2aae5d0();
   input += synapse0x2aae610();
   input += synapse0x2aae650();
   input += synapse0x2aae690();
   input += synapse0x2aae6d0();
   input += synapse0x2aae710();
   input += synapse0x2aae750();
   input += synapse0x2aae790();
   input += synapse0x2aae7d0();
   input += synapse0x2aae810();
   input += synapse0x2aae850();
   input += synapse0x2aae890();
   input += synapse0x2aae8d0();
   input += synapse0x2aae360();
   input += synapse0x2aae3a0();
   input += synapse0x2aaea20();
   input += synapse0x2aaea60();
   input += synapse0x2aaeaa0();
   input += synapse0x2aaeae0();
   input += synapse0x2aaeb20();
   input += synapse0x2aaeb60();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aae1d0() {
   double input = input0x2aae1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aaeba0() {
   double input = 1.90059;
   input += synapse0x2aaeee0();
   input += synapse0x2aaef20();
   input += synapse0x2aaef60();
   input += synapse0x2aaefa0();
   input += synapse0x2aaefe0();
   input += synapse0x2aaf020();
   input += synapse0x2aaf060();
   input += synapse0x2aaf0a0();
   input += synapse0x2aaf0e0();
   input += synapse0x2aaf120();
   input += synapse0x2aaf160();
   input += synapse0x2aaf1a0();
   input += synapse0x2aaf1e0();
   input += synapse0x2aaf220();
   input += synapse0x2aaf260();
   input += synapse0x2aaf2a0();
   input += synapse0x2aaed30();
   input += synapse0x2aaed70();
   input += synapse0x2aaf3f0();
   input += synapse0x2aaf430();
   input += synapse0x2aaf470();
   input += synapse0x2aaf4b0();
   input += synapse0x2aaf4f0();
   input += synapse0x2aaf530();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aaeba0() {
   double input = input0x2aaeba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aaf570() {
   double input = 0.941182;
   input += synapse0x2aaf8b0();
   input += synapse0x2aaf8f0();
   input += synapse0x2aaf930();
   input += synapse0x2aaf970();
   input += synapse0x2aaf9b0();
   input += synapse0x2aaf9f0();
   input += synapse0x2aafa30();
   input += synapse0x2aafa70();
   input += synapse0x2aafab0();
   input += synapse0x2aafaf0();
   input += synapse0x2aafb30();
   input += synapse0x2aafb70();
   input += synapse0x2aafbb0();
   input += synapse0x2aafbf0();
   input += synapse0x2aafc30();
   input += synapse0x2aafc70();
   input += synapse0x2aaf700();
   input += synapse0x2aaf740();
   input += synapse0x2aafdc0();
   input += synapse0x2aafe00();
   input += synapse0x2aafe40();
   input += synapse0x2aafe80();
   input += synapse0x2aafec0();
   input += synapse0x2aaff00();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aaf570() {
   double input = input0x2aaf570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aaff40() {
   double input = 0.154765;
   input += synapse0x2ab0280();
   input += synapse0x2ab02c0();
   input += synapse0x2ab0300();
   input += synapse0x2ab0340();
   input += synapse0x2ab0380();
   input += synapse0x2ab03c0();
   input += synapse0x2ab0400();
   input += synapse0x2ab0440();
   input += synapse0x2ab0480();
   input += synapse0x2ab04c0();
   input += synapse0x2ab0500();
   input += synapse0x2ab0540();
   input += synapse0x2ab0580();
   input += synapse0x2ab05c0();
   input += synapse0x2ab0600();
   input += synapse0x2ab0640();
   input += synapse0x2ab00d0();
   input += synapse0x2ab0110();
   input += synapse0x2ab0790();
   input += synapse0x2ab07d0();
   input += synapse0x2ab0810();
   input += synapse0x2ab0850();
   input += synapse0x2ab0890();
   input += synapse0x2ab08d0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aaff40() {
   double input = input0x2aaff40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2ab0910() {
   double input = -0.546252;
   input += synapse0x2ab0c50();
   input += synapse0x2ab0c90();
   input += synapse0x2ab0cd0();
   input += synapse0x2ab0d10();
   input += synapse0x2ab0d50();
   input += synapse0x2ab0d90();
   input += synapse0x2ab0dd0();
   input += synapse0x2ab0e10();
   input += synapse0x2ab0e50();
   input += synapse0x2ab0e90();
   input += synapse0x2ab0ed0();
   input += synapse0x2ab0f10();
   input += synapse0x2ab0f50();
   input += synapse0x2ab0f90();
   input += synapse0x2ab0fd0();
   input += synapse0x2ab1010();
   input += synapse0x2ab0aa0();
   input += synapse0x2ab0ae0();
   input += synapse0x2ab1160();
   input += synapse0x2ab11a0();
   input += synapse0x2ab11e0();
   input += synapse0x2ab1220();
   input += synapse0x2ab1260();
   input += synapse0x2ab12a0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2ab0910() {
   double input = input0x2ab0910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2ab12e0() {
   double input = -0.419649;
   input += synapse0x2ab1620();
   input += synapse0x2ab1660();
   input += synapse0x2ab16a0();
   input += synapse0x2ab16e0();
   input += synapse0x2ab1720();
   input += synapse0x2ab1760();
   input += synapse0x2ab17a0();
   input += synapse0x2ab17e0();
   input += synapse0x2ab1820();
   input += synapse0x2ab1860();
   input += synapse0x2ab18a0();
   input += synapse0x2ab18e0();
   input += synapse0x2ab1920();
   input += synapse0x2ab1960();
   input += synapse0x2ab19a0();
   input += synapse0x2ab19e0();
   input += synapse0x2ab1470();
   input += synapse0x2ab14b0();
   input += synapse0x2ab1b30();
   input += synapse0x2ab1b70();
   input += synapse0x2ab1bb0();
   input += synapse0x2ab1bf0();
   input += synapse0x2ab1c30();
   input += synapse0x2ab1c70();
   return input;
}

double NNfunction_ng_chi01::neuron0x2ab12e0() {
   double input = input0x2ab12e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2ab1cb0() {
   double input = -0.308499;
   input += synapse0x2ab1ff0();
   input += synapse0x2aa65c0();
   input += synapse0x2aa6600();
   input += synapse0x2aa6640();
   input += synapse0x2aa6890();
   input += synapse0x2aa68d0();
   input += synapse0x2aa6910();
   input += synapse0x2aa6b60();
   input += synapse0x2aa6ba0();
   input += synapse0x2aa6df0();
   input += synapse0x2aa6e30();
   input += synapse0x2aa6e70();
   input += synapse0x2aa70c0();
   input += synapse0x2aa7100();
   input += synapse0x2aa7350();
   input += synapse0x2aa7390();
   input += synapse0x2ab1e40();
   input += synapse0x2ab1e80();
   input += synapse0x2aa74e0();
   input += synapse0x2aa79f0();
   input += synapse0x2aa7a30();
   input += synapse0x2aa7a70();
   input += synapse0x2aa7cc0();
   input += synapse0x2aa7d00();
   return input;
}

double NNfunction_ng_chi01::neuron0x2ab1cb0() {
   double input = input0x2ab1cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aa7d40() {
   double input = -1.73503;
   input += synapse0x2aa75b0();
   input += synapse0x2aa75f0();
   input += synapse0x2aa7630();
   input += synapse0x2aa7670();
   input += synapse0x2aa7ff0();
   input += synapse0x2ab4340();
   input += synapse0x2ab4380();
   input += synapse0x2ab43c0();
   input += synapse0x2ab4400();
   input += synapse0x2ab4440();
   input += synapse0x2ab4480();
   input += synapse0x2ab44c0();
   input += synapse0x2ab4500();
   input += synapse0x2ab4540();
   input += synapse0x2ab4580();
   input += synapse0x2ab45c0();
   input += synapse0x2aa7ed0();
   input += synapse0x2aa7f10();
   input += synapse0x2ab4710();
   input += synapse0x2ab4750();
   input += synapse0x2ab4790();
   input += synapse0x2ab47d0();
   input += synapse0x2ab4810();
   input += synapse0x2ab4850();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aa7d40() {
   double input = input0x2aa7d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2ab4890() {
   double input = -2.04068;
   input += synapse0x2ab4bd0();
   input += synapse0x2ab4c10();
   input += synapse0x2ab4c50();
   input += synapse0x2ab4c90();
   input += synapse0x2ab4cd0();
   input += synapse0x2ab4d10();
   input += synapse0x2ab4d50();
   input += synapse0x2ab4d90();
   input += synapse0x2ab4dd0();
   input += synapse0x2ab4e10();
   input += synapse0x2ab4e50();
   input += synapse0x2ab4e90();
   input += synapse0x2ab4ed0();
   input += synapse0x2ab4f10();
   input += synapse0x2ab4f50();
   input += synapse0x2ab4f90();
   input += synapse0x2ab4a20();
   input += synapse0x2ab4a60();
   input += synapse0x2ab50e0();
   input += synapse0x2ab5120();
   input += synapse0x2ab5160();
   input += synapse0x2ab51a0();
   input += synapse0x2ab51e0();
   input += synapse0x2ab5220();
   return input;
}

double NNfunction_ng_chi01::neuron0x2ab4890() {
   double input = input0x2ab4890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2ab5260() {
   double input = 2.27159;
   input += synapse0x2ab55a0();
   input += synapse0x2ab55e0();
   input += synapse0x2ab5620();
   input += synapse0x2ab5660();
   input += synapse0x2ab56a0();
   input += synapse0x2ab56e0();
   input += synapse0x2ab5720();
   input += synapse0x2ab5760();
   input += synapse0x2ab57a0();
   input += synapse0x2ab57e0();
   input += synapse0x2ab5820();
   input += synapse0x2ab5860();
   input += synapse0x2ab58a0();
   input += synapse0x2ab58e0();
   input += synapse0x2ab5920();
   input += synapse0x2ab5960();
   input += synapse0x2ab53f0();
   input += synapse0x2ab5430();
   input += synapse0x2ab5ab0();
   input += synapse0x2ab5af0();
   input += synapse0x2ab5b30();
   input += synapse0x2ab5b70();
   input += synapse0x2ab5bb0();
   input += synapse0x2ab5bf0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2ab5260() {
   double input = input0x2ab5260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2ab5c30() {
   double input = 0.31352;
   input += synapse0x2ab5f70();
   input += synapse0x2ab5fb0();
   input += synapse0x2ab5ff0();
   input += synapse0x2ab6030();
   input += synapse0x2ab6070();
   input += synapse0x2ab60b0();
   input += synapse0x2ab60f0();
   input += synapse0x2ab6130();
   input += synapse0x2ab6170();
   input += synapse0x2ab61b0();
   input += synapse0x2ab61f0();
   input += synapse0x2ab6230();
   input += synapse0x2ab6270();
   input += synapse0x2ab62b0();
   input += synapse0x2ab62f0();
   input += synapse0x2ab6330();
   input += synapse0x2ab5dc0();
   input += synapse0x2ab5e00();
   input += synapse0x2ab6480();
   input += synapse0x2ab64c0();
   input += synapse0x2ab6500();
   input += synapse0x2ab6540();
   input += synapse0x2ab6580();
   input += synapse0x2ab65c0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2ab5c30() {
   double input = input0x2ab5c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2ab6600() {
   double input = 2.50841;
   input += synapse0x2ab6940();
   input += synapse0x2ab6980();
   input += synapse0x2ab69c0();
   input += synapse0x2ab6a00();
   input += synapse0x2ab6a40();
   input += synapse0x2ab6a80();
   input += synapse0x2ab6ac0();
   input += synapse0x2ab6b00();
   input += synapse0x2ab6b40();
   input += synapse0x2ab6b80();
   input += synapse0x2ab6bc0();
   input += synapse0x2ab6c00();
   input += synapse0x2ab6c40();
   input += synapse0x2ab6c80();
   input += synapse0x2ab6cc0();
   input += synapse0x2ab6d00();
   input += synapse0x2ab6790();
   input += synapse0x2ab67d0();
   input += synapse0x2ab6e50();
   input += synapse0x2ab6e90();
   input += synapse0x2ab6ed0();
   input += synapse0x2ab6f10();
   input += synapse0x2ab6f50();
   input += synapse0x2ab6f90();
   return input;
}

double NNfunction_ng_chi01::neuron0x2ab6600() {
   double input = input0x2ab6600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2ab6fd0() {
   double input = 2.24065;
   input += synapse0x2ab7310();
   input += synapse0x2ab7350();
   input += synapse0x2ab7390();
   input += synapse0x2ab73d0();
   input += synapse0x2ab7410();
   input += synapse0x2ab7450();
   input += synapse0x2ab7490();
   input += synapse0x2ab74d0();
   input += synapse0x2ab7510();
   input += synapse0x2ab7550();
   input += synapse0x2ab7590();
   input += synapse0x2ab75d0();
   input += synapse0x2ab7610();
   input += synapse0x2ab7650();
   input += synapse0x2ab7690();
   input += synapse0x2ab76d0();
   input += synapse0x2ab7160();
   input += synapse0x2ab71a0();
   input += synapse0x2ab7820();
   input += synapse0x2ab7860();
   input += synapse0x2ab78a0();
   input += synapse0x2ab78e0();
   input += synapse0x2ab7920();
   input += synapse0x2ab7960();
   return input;
}

double NNfunction_ng_chi01::neuron0x2ab6fd0() {
   double input = input0x2ab6fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2ab79a0() {
   double input = -0.0923953;
   input += synapse0x2ab7ce0();
   input += synapse0x2ab7d20();
   input += synapse0x2ab7d60();
   input += synapse0x2ab7da0();
   input += synapse0x2ab7de0();
   input += synapse0x2ab7e20();
   input += synapse0x2ab7e60();
   input += synapse0x2ab7ea0();
   input += synapse0x2ab7ee0();
   input += synapse0x2ab7f20();
   input += synapse0x2ab7f60();
   input += synapse0x2ab7fa0();
   input += synapse0x2ab7fe0();
   input += synapse0x2ab8020();
   input += synapse0x2ab8060();
   input += synapse0x2ab80a0();
   input += synapse0x2ab7b30();
   input += synapse0x2ab7b70();
   input += synapse0x2ab81f0();
   input += synapse0x2ab8230();
   input += synapse0x2ab8270();
   input += synapse0x2ab82b0();
   input += synapse0x2ab82f0();
   input += synapse0x2ab8330();
   return input;
}

double NNfunction_ng_chi01::neuron0x2ab79a0() {
   double input = input0x2ab79a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2ab8370() {
   double input = -2.68148;
   input += synapse0x2ab86b0();
   input += synapse0x2ab86f0();
   input += synapse0x2ab8730();
   input += synapse0x2ab8770();
   input += synapse0x2ab87b0();
   input += synapse0x2ab87f0();
   input += synapse0x2ab8830();
   input += synapse0x2ab8870();
   input += synapse0x2ab88b0();
   input += synapse0x2ab88f0();
   input += synapse0x2ab8930();
   input += synapse0x2ab8970();
   input += synapse0x2ab89b0();
   input += synapse0x2ab89f0();
   input += synapse0x2ab8a30();
   input += synapse0x2ab8a70();
   input += synapse0x2ab8500();
   input += synapse0x2ab8540();
   input += synapse0x2ab8bc0();
   input += synapse0x2ab8c00();
   input += synapse0x2ab8c40();
   input += synapse0x2ab8c80();
   input += synapse0x2ab8cc0();
   input += synapse0x2ab8d00();
   return input;
}

double NNfunction_ng_chi01::neuron0x2ab8370() {
   double input = input0x2ab8370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2ab8d40() {
   double input = 0.82211;
   input += synapse0x2aa17b0();
   input += synapse0x2aa17f0();
   input += synapse0x2aa1830();
   input += synapse0x2aa1870();
   input += synapse0x2aa18b0();
   input += synapse0x2aa18f0();
   input += synapse0x2aa1930();
   input += synapse0x2aa1970();
   input += synapse0x2ab9490();
   input += synapse0x2ab94d0();
   input += synapse0x2ab9510();
   input += synapse0x2ab9550();
   input += synapse0x2ab9590();
   input += synapse0x2ab95d0();
   input += synapse0x2ab9610();
   input += synapse0x2ab9650();
   input += synapse0x2ab8ed0();
   input += synapse0x2ab8f10();
   input += synapse0x2ab97a0();
   input += synapse0x2ab97e0();
   input += synapse0x2ab9820();
   input += synapse0x2ab9860();
   input += synapse0x2ab98a0();
   input += synapse0x2ab98e0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2ab8d40() {
   double input = input0x2ab8d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2ab9920() {
   double input = -1.50949;
   input += synapse0x2ab9c60();
   input += synapse0x2ab9ca0();
   input += synapse0x2ab9ce0();
   input += synapse0x2ab9d20();
   input += synapse0x2ab9d60();
   input += synapse0x2ab9da0();
   input += synapse0x2ab9de0();
   input += synapse0x2ab9e20();
   input += synapse0x2ab9e60();
   input += synapse0x2ab9ea0();
   input += synapse0x2ab9ee0();
   input += synapse0x2ab9f20();
   input += synapse0x2ab9f60();
   input += synapse0x2ab9fa0();
   input += synapse0x2ab9fe0();
   input += synapse0x2aba020();
   input += synapse0x2ab9ab0();
   input += synapse0x2ab9af0();
   input += synapse0x2aba170();
   input += synapse0x2aba1b0();
   input += synapse0x2aba1f0();
   input += synapse0x2aba230();
   input += synapse0x2aba270();
   input += synapse0x2aba2b0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2ab9920() {
   double input = input0x2ab9920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aba2f0() {
   double input = 1.55173;
   input += synapse0x2aba630();
   input += synapse0x2aba670();
   input += synapse0x2aba6b0();
   input += synapse0x2aba6f0();
   input += synapse0x2aba730();
   input += synapse0x2aba770();
   input += synapse0x2aba7b0();
   input += synapse0x2aba7f0();
   input += synapse0x2aba830();
   input += synapse0x2aba870();
   input += synapse0x2aba8b0();
   input += synapse0x2aba8f0();
   input += synapse0x2aba930();
   input += synapse0x2aba970();
   input += synapse0x2aba9b0();
   input += synapse0x2aba9f0();
   input += synapse0x2aba480();
   input += synapse0x2aba4c0();
   input += synapse0x2aaaff0();
   input += synapse0x2aab030();
   input += synapse0x2aab070();
   input += synapse0x2aab0b0();
   input += synapse0x2aab0f0();
   input += synapse0x2aab130();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aba2f0() {
   double input = input0x2aba2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aab170() {
   double input = -0.641972;
   input += synapse0x2aab4b0();
   input += synapse0x2aab4f0();
   input += synapse0x2aab530();
   input += synapse0x2aab570();
   input += synapse0x2aab5b0();
   input += synapse0x2aab5f0();
   input += synapse0x2aab630();
   input += synapse0x2aab670();
   input += synapse0x2aab6b0();
   input += synapse0x2aab6f0();
   input += synapse0x2aab730();
   input += synapse0x2aab770();
   input += synapse0x2aab7b0();
   input += synapse0x2aab7f0();
   input += synapse0x2aab830();
   input += synapse0x2aab870();
   input += synapse0x2aab300();
   input += synapse0x2aab340();
   input += synapse0x2aab9c0();
   input += synapse0x2aaba00();
   input += synapse0x2aaba40();
   input += synapse0x2aaba80();
   input += synapse0x2aabac0();
   input += synapse0x2aabb00();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aab170() {
   double input = input0x2aab170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aabb40() {
   double input = 0.362267;
   input += synapse0x2aabe80();
   input += synapse0x2aabec0();
   input += synapse0x2aabf00();
   input += synapse0x2aabf40();
   input += synapse0x2aabf80();
   input += synapse0x2aabfc0();
   input += synapse0x2aac000();
   input += synapse0x2aac040();
   input += synapse0x2aac080();
   input += synapse0x2aac0c0();
   input += synapse0x2aac100();
   input += synapse0x2aac140();
   input += synapse0x2aac180();
   input += synapse0x2aac1c0();
   input += synapse0x2aac200();
   input += synapse0x2aac240();
   input += synapse0x2aabcd0();
   input += synapse0x2aabd10();
   input += synapse0x2aac390();
   input += synapse0x2aac3d0();
   input += synapse0x2aac410();
   input += synapse0x2aac450();
   input += synapse0x2aac490();
   input += synapse0x2aac4d0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aabb40() {
   double input = input0x2aabb40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aac510() {
   double input = 0.80929;
   input += synapse0x2aac850();
   input += synapse0x2aac890();
   input += synapse0x2aac8d0();
   input += synapse0x2aac910();
   input += synapse0x2aac950();
   input += synapse0x2aac990();
   input += synapse0x2aac9d0();
   input += synapse0x2aaca10();
   input += synapse0x2aaca50();
   input += synapse0x2aaca90();
   input += synapse0x2aacad0();
   input += synapse0x2aacb10();
   input += synapse0x2aacb50();
   input += synapse0x2aacb90();
   input += synapse0x2aacbd0();
   input += synapse0x2aacc10();
   input += synapse0x2aac6a0();
   input += synapse0x2aac6e0();
   input += synapse0x2aacd60();
   input += synapse0x2aacda0();
   input += synapse0x2aacde0();
   input += synapse0x2aace20();
   input += synapse0x2aace60();
   input += synapse0x2aacea0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aac510() {
   double input = input0x2aac510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2abeb50() {
   double input = -2.50571;
   input += synapse0x2abed70();
   input += synapse0x2abedb0();
   input += synapse0x2abedf0();
   input += synapse0x2abee30();
   input += synapse0x2abee70();
   input += synapse0x2abeeb0();
   input += synapse0x2abeef0();
   input += synapse0x2abef30();
   input += synapse0x2abef70();
   input += synapse0x2abefb0();
   input += synapse0x2abeff0();
   input += synapse0x2abf030();
   input += synapse0x2abf070();
   input += synapse0x2abf0b0();
   input += synapse0x2abf0f0();
   input += synapse0x2abf130();
   input += synapse0x2aacee0();
   input += synapse0x2aacf20();
   input += synapse0x2abf280();
   input += synapse0x2abf2c0();
   input += synapse0x2abf300();
   input += synapse0x2abf340();
   input += synapse0x2abf380();
   input += synapse0x2abf3c0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2abeb50() {
   double input = input0x2abeb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2abf400() {
   double input = -1.80853;
   input += synapse0x2abf740();
   input += synapse0x2abf780();
   input += synapse0x2abf7c0();
   input += synapse0x2abf800();
   input += synapse0x2abf840();
   input += synapse0x2abf880();
   input += synapse0x2abf8c0();
   input += synapse0x2abf900();
   input += synapse0x2abf940();
   input += synapse0x2abf980();
   input += synapse0x2abf9c0();
   input += synapse0x2abfa00();
   input += synapse0x2abfa40();
   input += synapse0x2abfa80();
   input += synapse0x2abfac0();
   input += synapse0x2abfb00();
   input += synapse0x2abf590();
   input += synapse0x2abf5d0();
   input += synapse0x2abfc50();
   input += synapse0x2abfc90();
   input += synapse0x2abfcd0();
   input += synapse0x2abfd10();
   input += synapse0x2abfd50();
   input += synapse0x2abfd90();
   return input;
}

double NNfunction_ng_chi01::neuron0x2abf400() {
   double input = input0x2abf400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2abfdd0() {
   double input = 3.95525;
   input += synapse0x2ac0110();
   input += synapse0x2ac0150();
   input += synapse0x2ac0190();
   input += synapse0x2ac01d0();
   input += synapse0x2ac0210();
   input += synapse0x2ac0250();
   input += synapse0x2ac0290();
   input += synapse0x2ac02d0();
   input += synapse0x2ac0310();
   input += synapse0x2ac0350();
   input += synapse0x2ac0390();
   input += synapse0x2ac03d0();
   input += synapse0x2ac0410();
   input += synapse0x2ac0450();
   input += synapse0x2ac0490();
   input += synapse0x2ac04d0();
   input += synapse0x2abff60();
   input += synapse0x2abffa0();
   input += synapse0x2ac0620();
   input += synapse0x2ac0660();
   input += synapse0x2ac06a0();
   input += synapse0x2ac06e0();
   input += synapse0x2ac0720();
   input += synapse0x2ac0760();
   return input;
}

double NNfunction_ng_chi01::neuron0x2abfdd0() {
   double input = input0x2abfdd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2ac07a0() {
   double input = 0.883113;
   input += synapse0x2ac0ae0();
   input += synapse0x2ac0b20();
   input += synapse0x2ac0b60();
   input += synapse0x2ac0ba0();
   input += synapse0x2ac0be0();
   input += synapse0x2ac0c20();
   input += synapse0x2ac0c60();
   input += synapse0x2ac0ca0();
   input += synapse0x2ac0ce0();
   input += synapse0x2ac0d20();
   input += synapse0x2ac0d60();
   input += synapse0x2ac0da0();
   input += synapse0x2ac0de0();
   input += synapse0x2ac0e20();
   input += synapse0x2ac0e60();
   input += synapse0x2ac0ea0();
   input += synapse0x2ac0930();
   input += synapse0x2ac0970();
   input += synapse0x2ac0ff0();
   input += synapse0x2ac1030();
   input += synapse0x2ac1070();
   input += synapse0x2ac10b0();
   input += synapse0x2ac10f0();
   input += synapse0x2ac1130();
   return input;
}

double NNfunction_ng_chi01::neuron0x2ac07a0() {
   double input = input0x2ac07a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2ac79a0() {
   double input = -0.19626;
   input += synapse0x2860f10();
   input += synapse0x2860f50();
   input += synapse0x2a9dae0();
   input += synapse0x2a9db20();
   input += synapse0x2a9f5b0();
   input += synapse0x2a9f5f0();
   input += synapse0x2aa0380();
   input += synapse0x2aa03c0();
   input += synapse0x2aa0d50();
   input += synapse0x2aa0d90();
   input += synapse0x2aa1720();
   input += synapse0x2aa1760();
   input += synapse0x2aa2200();
   input += synapse0x2aa2240();
   input += synapse0x2aa2bd0();
   input += synapse0x2aa2c10();
   input += synapse0x2a9fcb0();
   input += synapse0x2a9fcf0();
   input += synapse0x2aa4780();
   input += synapse0x2aa47c0();
   input += synapse0x2aa5150();
   input += synapse0x2aa5190();
   input += synapse0x2aa5b20();
   input += synapse0x2aa5b60();
   input += synapse0x2aa64f0();
   input += synapse0x2aa6530();
   input += synapse0x2a99580();
   input += synapse0x2a995c0();
   input += synapse0x2aa85e0();
   input += synapse0x2aa8620();
   input += synapse0x2aa8fb0();
   input += synapse0x2aa8ff0();
   input += synapse0x2aa9980();
   input += synapse0x2aa99c0();
   input += synapse0x2aaa350();
   input += synapse0x2aaa390();
   input += synapse0x2aaad20();
   input += synapse0x2aaad60();
   input += synapse0x2aa3870();
   input += synapse0x2aa38b0();
   input += synapse0x2aad120();
   input += synapse0x2aad160();
   input += synapse0x2aadab0();
   input += synapse0x2aadaf0();
   input += synapse0x2aae480();
   input += synapse0x2aae4c0();
   input += synapse0x2aaee50();
   input += synapse0x2aaee90();
   input += synapse0x2aaf820();
   input += synapse0x2aaf860();
   return input;
}

double NNfunction_ng_chi01::neuron0x2ac79a0() {
   double input = input0x2ac79a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2ac7d40() {
   double input = 1.82128;
   input += synapse0x2ab1f60();
   input += synapse0x2ab1fa0();
   input += synapse0x2aa7520();
   input += synapse0x2aa7560();
   input += synapse0x2ab4b40();
   input += synapse0x2ab4b80();
   input += synapse0x2ab5510();
   input += synapse0x2ab5550();
   input += synapse0x2ab5ee0();
   input += synapse0x2ab5f20();
   input += synapse0x2ab68b0();
   input += synapse0x2ab68f0();
   input += synapse0x2ab7280();
   input += synapse0x2ab72c0();
   input += synapse0x2ab7c50();
   input += synapse0x2ab7c90();
   input += synapse0x2ab8620();
   input += synapse0x2ab8660();
   input += synapse0x2ab8ff0();
   input += synapse0x2ab9030();
   input += synapse0x2ab9bd0();
   input += synapse0x2ab9c10();
   input += synapse0x2aba5a0();
   input += synapse0x2aba5e0();
   input += synapse0x2aab420();
   input += synapse0x2aab460();
   input += synapse0x2aabdf0();
   input += synapse0x2aabe30();
   input += synapse0x2aac7c0();
   input += synapse0x2aac800();
   input += synapse0x2abece0();
   input += synapse0x2abed20();
   input += synapse0x2abf6b0();
   input += synapse0x2abf6f0();
   input += synapse0x2ac0080();
   input += synapse0x2ac00c0();
   input += synapse0x2ac0a50();
   input += synapse0x2ac0a90();
   input += synapse0x2a9b9e0();
   input += synapse0x2a9ba20();
   input += synapse0x2ab01f0();
   input += synapse0x2ab0230();
   input += synapse0x2ac1170();
   input += synapse0x2ac11b0();
   input += synapse0x2ac11f0();
   input += synapse0x2ac1230();
   input += synapse0x2ac80e0();
   input += synapse0x2ac8120();
   input += synapse0x2ac8160();
   input += synapse0x2ac81a0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2ac7d40() {
   double input = input0x2ac7d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2ac81e0() {
   double input = -1.16673;
   input += synapse0x2ac8520();
   input += synapse0x2ac8560();
   input += synapse0x2ac85a0();
   input += synapse0x2ac85e0();
   input += synapse0x2ac8620();
   input += synapse0x2ac8660();
   input += synapse0x2ac86a0();
   input += synapse0x2ac86e0();
   input += synapse0x2ac8720();
   input += synapse0x2ac8760();
   input += synapse0x2ac87a0();
   input += synapse0x2ac87e0();
   input += synapse0x2ac8820();
   input += synapse0x2ac8860();
   input += synapse0x2ac88a0();
   input += synapse0x2ac88e0();
   input += synapse0x2ac8370();
   input += synapse0x2ac83b0();
   input += synapse0x2ac8a30();
   input += synapse0x2ac8a70();
   input += synapse0x2ac8ab0();
   input += synapse0x2ac8af0();
   input += synapse0x2ac8b30();
   input += synapse0x2ac8b70();
   input += synapse0x2ac8bb0();
   input += synapse0x2ac8bf0();
   input += synapse0x2ac8c30();
   input += synapse0x2ac8c70();
   input += synapse0x2ac8cb0();
   input += synapse0x2ac8cf0();
   input += synapse0x2ac8d30();
   input += synapse0x2ac8d70();
   input += synapse0x2ac8920();
   input += synapse0x2ac8960();
   input += synapse0x2ac89a0();
   input += synapse0x2ac89e0();
   input += synapse0x2ac8fc0();
   input += synapse0x2ac9000();
   input += synapse0x2ac9040();
   input += synapse0x2ac9080();
   input += synapse0x2ac90c0();
   input += synapse0x2ac9100();
   input += synapse0x2ac9140();
   input += synapse0x2ac9180();
   input += synapse0x2ac91c0();
   input += synapse0x2ac9200();
   input += synapse0x2ac9240();
   input += synapse0x2ac9280();
   input += synapse0x2ac92c0();
   input += synapse0x2ac9300();
   return input;
}

double NNfunction_ng_chi01::neuron0x2ac81e0() {
   double input = input0x2ac81e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2ac9340() {
   double input = 1.31759;
   input += synapse0x2ac9680();
   input += synapse0x2ac96c0();
   input += synapse0x2ac9700();
   input += synapse0x2ac9740();
   input += synapse0x2ac9780();
   input += synapse0x2ac97c0();
   input += synapse0x2ac9800();
   input += synapse0x2ac9840();
   input += synapse0x2ac9880();
   input += synapse0x2ac98c0();
   input += synapse0x2ac9900();
   input += synapse0x2ac9940();
   input += synapse0x2ac9980();
   input += synapse0x2ac99c0();
   input += synapse0x2ac9a00();
   input += synapse0x2ac9a40();
   input += synapse0x2ac94d0();
   input += synapse0x2ac9510();
   input += synapse0x2ac9b90();
   input += synapse0x2ac9bd0();
   input += synapse0x2ac9c10();
   input += synapse0x2ac9c50();
   input += synapse0x2ac9c90();
   input += synapse0x2ac9cd0();
   input += synapse0x2ac9d10();
   input += synapse0x2ac9d50();
   input += synapse0x2ac9d90();
   input += synapse0x2ac9dd0();
   input += synapse0x2ac9e10();
   input += synapse0x2ac9e50();
   input += synapse0x2ac9e90();
   input += synapse0x2ac9ed0();
   input += synapse0x2ac9a80();
   input += synapse0x2ac9ac0();
   input += synapse0x2ac9b00();
   input += synapse0x2ac9b40();
   input += synapse0x2aca120();
   input += synapse0x2aca160();
   input += synapse0x2aca1a0();
   input += synapse0x2aca1e0();
   input += synapse0x2aca220();
   input += synapse0x2aca260();
   input += synapse0x2aca2a0();
   input += synapse0x2aca2e0();
   input += synapse0x2aca320();
   input += synapse0x2aca360();
   input += synapse0x2aca3a0();
   input += synapse0x2aca3e0();
   input += synapse0x2aca420();
   input += synapse0x2aca460();
   return input;
}

double NNfunction_ng_chi01::neuron0x2ac9340() {
   double input = input0x2ac9340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2aca4a0() {
   double input = -0.460262;
   input += synapse0x2aca7e0();
   input += synapse0x2aca820();
   input += synapse0x2aca860();
   input += synapse0x2aca8a0();
   input += synapse0x2aca8e0();
   input += synapse0x2aca920();
   input += synapse0x2aca960();
   input += synapse0x2aca9a0();
   input += synapse0x2aca9e0();
   input += synapse0x2acaa20();
   input += synapse0x2acaa60();
   input += synapse0x2acaaa0();
   input += synapse0x2acaae0();
   input += synapse0x2acab20();
   input += synapse0x2acab60();
   input += synapse0x2acaba0();
   input += synapse0x2aca630();
   input += synapse0x2aca670();
   input += synapse0x2acacf0();
   input += synapse0x2acad30();
   input += synapse0x2acad70();
   input += synapse0x2acadb0();
   input += synapse0x2acadf0();
   input += synapse0x2acae30();
   input += synapse0x2acae70();
   input += synapse0x2acaeb0();
   input += synapse0x2acaef0();
   input += synapse0x2acaf30();
   input += synapse0x2acaf70();
   input += synapse0x2acafb0();
   input += synapse0x2acaff0();
   input += synapse0x2acb030();
   input += synapse0x2acabe0();
   input += synapse0x2acac20();
   input += synapse0x2acac60();
   input += synapse0x2acaca0();
   input += synapse0x2acb280();
   input += synapse0x2acb2c0();
   input += synapse0x2acb300();
   input += synapse0x2acb340();
   input += synapse0x2acb380();
   input += synapse0x2acb3c0();
   input += synapse0x2acb400();
   input += synapse0x2acb440();
   input += synapse0x2acb480();
   input += synapse0x2acb4c0();
   input += synapse0x2acb500();
   input += synapse0x2acb540();
   input += synapse0x2acb580();
   input += synapse0x2acb5c0();
   return input;
}

double NNfunction_ng_chi01::neuron0x2aca4a0() {
   double input = input0x2aca4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi01::input0x2acb600() {
   double input = 12.0807;
   input += synapse0x2acb820();
   input += synapse0x2acb860();
   input += synapse0x2acb8a0();
   input += synapse0x2acb8e0();
   input += synapse0x2acb920();
   return input;
}

double NNfunction_ng_chi01::neuron0x2acb600() {
   double input = input0x2acb600();
   return (input * 1)+0;
}

double NNfunction_ng_chi01::synapse0x2a9ba70() {
   return (neuron0x2a96670()*-0.0174834);
}

double NNfunction_ng_chi01::synapse0x2a9bab0() {
   return (neuron0x2a96920()*0.126547);
}

double NNfunction_ng_chi01::synapse0x2a9baf0() {
   return (neuron0x2a96c60()*-0.768564);
}

double NNfunction_ng_chi01::synapse0x2a9bb30() {
   return (neuron0x2a96fa0()*1.0638);
}

double NNfunction_ng_chi01::synapse0x2a9bb70() {
   return (neuron0x2a972e0()*-0.0376359);
}

double NNfunction_ng_chi01::synapse0x2a9bbb0() {
   return (neuron0x2a97620()*0.00555841);
}

double NNfunction_ng_chi01::synapse0x2a9bbf0() {
   return (neuron0x2a97960()*-0.0205991);
}

double NNfunction_ng_chi01::synapse0x2a9bc30() {
   return (neuron0x2a97ca0()*-0.00911736);
}

double NNfunction_ng_chi01::synapse0x2a9bc70() {
   return (neuron0x2a97fe0()*-0.0207938);
}

double NNfunction_ng_chi01::synapse0x2a9bcb0() {
   return (neuron0x2a98320()*0.0433407);
}

double NNfunction_ng_chi01::synapse0x2a9bcf0() {
   return (neuron0x2a98660()*0.00876166);
}

double NNfunction_ng_chi01::synapse0x2a9bd30() {
   return (neuron0x2a989a0()*-0.0228074);
}

double NNfunction_ng_chi01::synapse0x2a9bd70() {
   return (neuron0x2a98ce0()*-0.0069854);
}

double NNfunction_ng_chi01::synapse0x2a9bdb0() {
   return (neuron0x2a99020()*-0.0139975);
}

double NNfunction_ng_chi01::synapse0x2a9bdf0() {
   return (neuron0x2a99360()*0.101706);
}

double NNfunction_ng_chi01::synapse0x2a9be30() {
   return (neuron0x2a996a0()*0.0101354);
}

double NNfunction_ng_chi01::synapse0x2a9b8c0() {
   return (neuron0x2a999e0()*0.00423515);
}

double NNfunction_ng_chi01::synapse0x2a9b900() {
   return (neuron0x2a99f40()*0.0513854);
}

double NNfunction_ng_chi01::synapse0x2852b30() {
   return (neuron0x2a9a280()*-0.00612119);
}

double NNfunction_ng_chi01::synapse0x2852b70() {
   return (neuron0x2a9a5c0()*-0.0234965);
}

double NNfunction_ng_chi01::synapse0x2a9be70() {
   return (neuron0x2a9a900()*-0.0205864);
}

double NNfunction_ng_chi01::synapse0x2a9beb0() {
   return (neuron0x2a9ac40()*-0.0170126);
}

double NNfunction_ng_chi01::synapse0x2a9bef0() {
   return (neuron0x2a9af80()*0.0582959);
}

double NNfunction_ng_chi01::synapse0x2a9bf30() {
   return (neuron0x2a9b2c0()*-0.0144312);
}

double NNfunction_ng_chi01::synapse0x2a9c2b0() {
   return (neuron0x2a96670()*0.790708);
}

double NNfunction_ng_chi01::synapse0x2a9c2f0() {
   return (neuron0x2a96920()*-0.0422302);
}

double NNfunction_ng_chi01::synapse0x2a9c330() {
   return (neuron0x2a96c60()*0.351887);
}

double NNfunction_ng_chi01::synapse0x2a9c370() {
   return (neuron0x2a96fa0()*1.4477);
}

double NNfunction_ng_chi01::synapse0x2a9c3b0() {
   return (neuron0x2a972e0()*0.0819015);
}

double NNfunction_ng_chi01::synapse0x2a9c3f0() {
   return (neuron0x2a97620()*0.512186);
}

double NNfunction_ng_chi01::synapse0x2a9c430() {
   return (neuron0x2a97960()*-0.132217);
}

double NNfunction_ng_chi01::synapse0x2a9c470() {
   return (neuron0x2a97ca0()*0.140514);
}

double NNfunction_ng_chi01::synapse0x2a9c4b0() {
   return (neuron0x2a97fe0()*-0.158079);
}

double NNfunction_ng_chi01::synapse0x2852980() {
   return (neuron0x2a98320()*0.268832);
}

double NNfunction_ng_chi01::synapse0x28529c0() {
   return (neuron0x2a98660()*0.0983133);
}

double NNfunction_ng_chi01::synapse0x2852a00() {
   return (neuron0x2a989a0()*-1.17204);
}

double NNfunction_ng_chi01::synapse0x2852a40() {
   return (neuron0x2a98ce0()*-0.445907);
}

double NNfunction_ng_chi01::synapse0x2a9c700() {
   return (neuron0x2a99020()*-0.427265);
}

double NNfunction_ng_chi01::synapse0x2a9c740() {
   return (neuron0x2a99360()*0.0303132);
}

double NNfunction_ng_chi01::synapse0x2a9c780() {
   return (neuron0x2a996a0()*-0.542867);
}

double NNfunction_ng_chi01::synapse0x2a9c100() {
   return (neuron0x2a999e0()*0.32048);
}

double NNfunction_ng_chi01::synapse0x2a9c140() {
   return (neuron0x2a99f40()*0.632012);
}

double NNfunction_ng_chi01::synapse0x2a9c8d0() {
   return (neuron0x2a9a280()*-0.635073);
}

double NNfunction_ng_chi01::synapse0x2a9c910() {
   return (neuron0x2a9a5c0()*-0.194188);
}

double NNfunction_ng_chi01::synapse0x2a9c950() {
   return (neuron0x2a9a900()*0.0584656);
}

double NNfunction_ng_chi01::synapse0x2a9c990() {
   return (neuron0x2a9ac40()*0.00557766);
}

double NNfunction_ng_chi01::synapse0x2a9c9d0() {
   return (neuron0x2a9af80()*0.62196);
}

double NNfunction_ng_chi01::synapse0x2a9ca10() {
   return (neuron0x2a9b2c0()*0.144376);
}

double NNfunction_ng_chi01::synapse0x2a9cd90() {
   return (neuron0x2a96670()*0.0219827);
}

double NNfunction_ng_chi01::synapse0x2a9cdd0() {
   return (neuron0x2a96920()*0.764364);
}

double NNfunction_ng_chi01::synapse0x2a9ce10() {
   return (neuron0x2a96c60()*0.0284722);
}

double NNfunction_ng_chi01::synapse0x2a9ce50() {
   return (neuron0x2a96fa0()*0.0294558);
}

double NNfunction_ng_chi01::synapse0x2a9ce90() {
   return (neuron0x2a972e0()*-0.0368341);
}

double NNfunction_ng_chi01::synapse0x2a9ced0() {
   return (neuron0x2a97620()*-0.0106053);
}

double NNfunction_ng_chi01::synapse0x2a9cf10() {
   return (neuron0x2a97960()*0.00541222);
}

double NNfunction_ng_chi01::synapse0x2a9cf50() {
   return (neuron0x2a97ca0()*-0.0499301);
}

double NNfunction_ng_chi01::synapse0x2a9cf90() {
   return (neuron0x2a97fe0()*0.105196);
}

double NNfunction_ng_chi01::synapse0x2a9cfd0() {
   return (neuron0x2a98320()*-0.0414545);
}

double NNfunction_ng_chi01::synapse0x2a9d010() {
   return (neuron0x2a98660()*-0.176016);
}

double NNfunction_ng_chi01::synapse0x2a9d050() {
   return (neuron0x2a989a0()*-0.616364);
}

double NNfunction_ng_chi01::synapse0x2a9d090() {
   return (neuron0x2a98ce0()*-0.157275);
}

double NNfunction_ng_chi01::synapse0x2a9d0d0() {
   return (neuron0x2a99020()*-0.103789);
}

double NNfunction_ng_chi01::synapse0x2a9d110() {
   return (neuron0x2a99360()*0.545777);
}

double NNfunction_ng_chi01::synapse0x2a9d150() {
   return (neuron0x2a996a0()*0.00832476);
}

double NNfunction_ng_chi01::synapse0x2a9cbe0() {
   return (neuron0x2a999e0()*-0.0473918);
}

double NNfunction_ng_chi01::synapse0x2a9cc20() {
   return (neuron0x2a99f40()*1.73949);
}

double NNfunction_ng_chi01::synapse0x179a920() {
   return (neuron0x2a9a280()*-0.15495);
}

double NNfunction_ng_chi01::synapse0x2860720() {
   return (neuron0x2a9a5c0()*0.0299152);
}

double NNfunction_ng_chi01::synapse0x2860760() {
   return (neuron0x2a9a900()*0.00854758);
}

double NNfunction_ng_chi01::synapse0x2a9f080() {
   return (neuron0x2a9ac40()*0.0701522);
}

double NNfunction_ng_chi01::synapse0x2a9f0c0() {
   return (neuron0x2a9af80()*0.0512481);
}

double NNfunction_ng_chi01::synapse0x2a963b0() {
   return (neuron0x2a9b2c0()*0.101944);
}

double NNfunction_ng_chi01::synapse0x2a96480() {
   return (neuron0x2a96670()*-0.00295457);
}

double NNfunction_ng_chi01::synapse0x2860fa0() {
   return (neuron0x2a96920()*-12.8356);
}

double NNfunction_ng_chi01::synapse0x2a9c680() {
   return (neuron0x2a96c60()*0.633075);
}

double NNfunction_ng_chi01::synapse0x2a9c6c0() {
   return (neuron0x2a96fa0()*0.00400671);
}

double NNfunction_ng_chi01::synapse0x2a9d2a0() {
   return (neuron0x2a972e0()*-0.00800762);
}

double NNfunction_ng_chi01::synapse0x2a9d2e0() {
   return (neuron0x2a97620()*-0.00538135);
}

double NNfunction_ng_chi01::synapse0x2a9d320() {
   return (neuron0x2a97960()*0.0273214);
}

double NNfunction_ng_chi01::synapse0x2a9d360() {
   return (neuron0x2a97ca0()*0.00698954);
}

double NNfunction_ng_chi01::synapse0x2a9d3a0() {
   return (neuron0x2a97fe0()*0.01126);
}

double NNfunction_ng_chi01::synapse0x2a9d3e0() {
   return (neuron0x2a98320()*0.00718104);
}

double NNfunction_ng_chi01::synapse0x2a9d420() {
   return (neuron0x2a98660()*0.0145846);
}

double NNfunction_ng_chi01::synapse0x2a9d460() {
   return (neuron0x2a989a0()*0.282486);
}

double NNfunction_ng_chi01::synapse0x2a9d4a0() {
   return (neuron0x2a98ce0()*0.0145098);
}

double NNfunction_ng_chi01::synapse0x2a9d4e0() {
   return (neuron0x2a99020()*0.00155722);
}

double NNfunction_ng_chi01::synapse0x2a9d520() {
   return (neuron0x2a99360()*-0.220759);
}

double NNfunction_ng_chi01::synapse0x2a9d560() {
   return (neuron0x2a996a0()*-0.0248522);
}

double NNfunction_ng_chi01::synapse0x2a963f0() {
   return (neuron0x2a999e0()*0.0133448);
}

double NNfunction_ng_chi01::synapse0x2a96430() {
   return (neuron0x2a99f40()*-0.0320662);
}

double NNfunction_ng_chi01::synapse0x2a9d6b0() {
   return (neuron0x2a9a280()*-0.00783025);
}

double NNfunction_ng_chi01::synapse0x2a9d6f0() {
   return (neuron0x2a9a5c0()*0.0252389);
}

double NNfunction_ng_chi01::synapse0x2a9d730() {
   return (neuron0x2a9a900()*-0.00168661);
}

double NNfunction_ng_chi01::synapse0x2a9d770() {
   return (neuron0x2a9ac40()*0.0209856);
}

double NNfunction_ng_chi01::synapse0x2a9d7b0() {
   return (neuron0x2a9af80()*-0.0157445);
}

double NNfunction_ng_chi01::synapse0x2a9d7f0() {
   return (neuron0x2a9b2c0()*0.136563);
}

double NNfunction_ng_chi01::synapse0x2a9db70() {
   return (neuron0x2a96670()*-0.0368145);
}

double NNfunction_ng_chi01::synapse0x2a9dbb0() {
   return (neuron0x2a96920()*0.0202776);
}

double NNfunction_ng_chi01::synapse0x2a9dbf0() {
   return (neuron0x2a96c60()*0.751603);
}

double NNfunction_ng_chi01::synapse0x2a9dc30() {
   return (neuron0x2a96fa0()*-0.0233302);
}

double NNfunction_ng_chi01::synapse0x2a9dc70() {
   return (neuron0x2a972e0()*-0.0424567);
}

double NNfunction_ng_chi01::synapse0x2a9dcb0() {
   return (neuron0x2a97620()*-0.00923023);
}

double NNfunction_ng_chi01::synapse0x2a9dcf0() {
   return (neuron0x2a97960()*-0.0181177);
}

double NNfunction_ng_chi01::synapse0x2a9dd30() {
   return (neuron0x2a97ca0()*-0.0022051);
}

double NNfunction_ng_chi01::synapse0x2a9dd70() {
   return (neuron0x2a97fe0()*-0.00986683);
}

double NNfunction_ng_chi01::synapse0x2a9ddb0() {
   return (neuron0x2a98320()*0.010468);
}

double NNfunction_ng_chi01::synapse0x2a9ddf0() {
   return (neuron0x2a98660()*-0.00186671);
}

double NNfunction_ng_chi01::synapse0x2a9de30() {
   return (neuron0x2a989a0()*0.136221);
}

double NNfunction_ng_chi01::synapse0x2a9de70() {
   return (neuron0x2a98ce0()*-0.000624816);
}

double NNfunction_ng_chi01::synapse0x2a9deb0() {
   return (neuron0x2a99020()*-0.0128083);
}

double NNfunction_ng_chi01::synapse0x2a9def0() {
   return (neuron0x2a99360()*-0.04202);
}

double NNfunction_ng_chi01::synapse0x2a9df30() {
   return (neuron0x2a996a0()*-0.0214536);
}

double NNfunction_ng_chi01::synapse0x2a9e080() {
   return (neuron0x2a999e0()*0.00764463);
}

double NNfunction_ng_chi01::synapse0x2a9d9c0() {
   return (neuron0x2a99f40()*0.00620569);
}

double NNfunction_ng_chi01::synapse0x2a9da00() {
   return (neuron0x2a9a280()*-0.019848);
}

double NNfunction_ng_chi01::synapse0x2a9f1c0() {
   return (neuron0x2a9a5c0()*-0.010627);
}

double NNfunction_ng_chi01::synapse0x2a9f200() {
   return (neuron0x2a9a900()*-0.00789101);
}

double NNfunction_ng_chi01::synapse0x2a9f240() {
   return (neuron0x2a9ac40()*0.0295114);
}

double NNfunction_ng_chi01::synapse0x2a9f280() {
   return (neuron0x2a9af80()*0.00654678);
}

double NNfunction_ng_chi01::synapse0x2a9f2c0() {
   return (neuron0x2a9b2c0()*-10.3251);
}

double NNfunction_ng_chi01::synapse0x2a9f640() {
   return (neuron0x2a96670()*-0.035897);
}

double NNfunction_ng_chi01::synapse0x2a9f680() {
   return (neuron0x2a96920()*-0.0966368);
}

double NNfunction_ng_chi01::synapse0x2a9f6c0() {
   return (neuron0x2a96c60()*1.55176);
}

double NNfunction_ng_chi01::synapse0x2a9f700() {
   return (neuron0x2a96fa0()*-0.0999655);
}

double NNfunction_ng_chi01::synapse0x2a9f740() {
   return (neuron0x2a972e0()*0.0546161);
}

double NNfunction_ng_chi01::synapse0x2a9f780() {
   return (neuron0x2a97620()*-0.0276094);
}

double NNfunction_ng_chi01::synapse0x2a9f7c0() {
   return (neuron0x2a97960()*0.0349228);
}

double NNfunction_ng_chi01::synapse0x2a9f800() {
   return (neuron0x2a97ca0()*0.0499447);
}

double NNfunction_ng_chi01::synapse0x2a9f840() {
   return (neuron0x2a97fe0()*0.0187966);
}

double NNfunction_ng_chi01::synapse0x2860a70() {
   return (neuron0x2a98320()*-0.0443855);
}

double NNfunction_ng_chi01::synapse0x2860ab0() {
   return (neuron0x2a98660()*-0.0051469);
}

double NNfunction_ng_chi01::synapse0x2860af0() {
   return (neuron0x2a989a0()*0.464901);
}

double NNfunction_ng_chi01::synapse0x2860b30() {
   return (neuron0x2a98ce0()*-0.000126283);
}

double NNfunction_ng_chi01::synapse0x2860b70() {
   return (neuron0x2a99020()*0.0710636);
}

double NNfunction_ng_chi01::synapse0x2860bb0() {
   return (neuron0x2a99360()*-0.0626155);
}

double NNfunction_ng_chi01::synapse0x2860bf0() {
   return (neuron0x2a996a0()*0.012784);
}

double NNfunction_ng_chi01::synapse0x2a9f490() {
   return (neuron0x2a999e0()*0.0220832);
}

double NNfunction_ng_chi01::synapse0x2a9f4d0() {
   return (neuron0x2a99f40()*-0.0389622);
}

double NNfunction_ng_chi01::synapse0x2860d40() {
   return (neuron0x2a9a280()*0.0257291);
}

double NNfunction_ng_chi01::synapse0x2860d80() {
   return (neuron0x2a9a5c0()*0.0279952);
}

double NNfunction_ng_chi01::synapse0x2860dc0() {
   return (neuron0x2a9a900()*0.0179566);
}

double NNfunction_ng_chi01::synapse0x2860e00() {
   return (neuron0x2a9ac40()*-0.000548514);
}

double NNfunction_ng_chi01::synapse0x2860e40() {
   return (neuron0x2a9af80()*-0.000961142);
}

double NNfunction_ng_chi01::synapse0x2aa0090() {
   return (neuron0x2a9b2c0()*0.0383388);
}

double NNfunction_ng_chi01::synapse0x2aa0410() {
   return (neuron0x2a96670()*0.00612815);
}

double NNfunction_ng_chi01::synapse0x2aa0450() {
   return (neuron0x2a96920()*0.0496045);
}

double NNfunction_ng_chi01::synapse0x2aa0490() {
   return (neuron0x2a96c60()*0.519018);
}

double NNfunction_ng_chi01::synapse0x2aa04d0() {
   return (neuron0x2a96fa0()*0.0985301);
}

double NNfunction_ng_chi01::synapse0x2aa0510() {
   return (neuron0x2a972e0()*0.00832619);
}

double NNfunction_ng_chi01::synapse0x2aa0550() {
   return (neuron0x2a97620()*0.0257465);
}

double NNfunction_ng_chi01::synapse0x2aa0590() {
   return (neuron0x2a97960()*0.0139051);
}

double NNfunction_ng_chi01::synapse0x2aa05d0() {
   return (neuron0x2a97ca0()*0.00352706);
}

double NNfunction_ng_chi01::synapse0x2aa0610() {
   return (neuron0x2a97fe0()*0.0242278);
}

double NNfunction_ng_chi01::synapse0x2aa0650() {
   return (neuron0x2a98320()*-0.00556076);
}

double NNfunction_ng_chi01::synapse0x2aa0690() {
   return (neuron0x2a98660()*-0.0303002);
}

double NNfunction_ng_chi01::synapse0x2aa06d0() {
   return (neuron0x2a989a0()*0.196638);
}

double NNfunction_ng_chi01::synapse0x2aa0710() {
   return (neuron0x2a98ce0()*0.0236286);
}

double NNfunction_ng_chi01::synapse0x2aa0750() {
   return (neuron0x2a99020()*0.0339322);
}

double NNfunction_ng_chi01::synapse0x2aa0790() {
   return (neuron0x2a99360()*0.186475);
}

double NNfunction_ng_chi01::synapse0x2aa07d0() {
   return (neuron0x2a996a0()*0.0228966);
}

double NNfunction_ng_chi01::synapse0x2aa0260() {
   return (neuron0x2a999e0()*0.00197126);
}

double NNfunction_ng_chi01::synapse0x2aa02a0() {
   return (neuron0x2a99f40()*0.0540616);
}

double NNfunction_ng_chi01::synapse0x2aa0920() {
   return (neuron0x2a9a280()*0.005853);
}

double NNfunction_ng_chi01::synapse0x2aa0960() {
   return (neuron0x2a9a5c0()*0.00889103);
}

double NNfunction_ng_chi01::synapse0x2aa09a0() {
   return (neuron0x2a9a900()*-0.0141707);
}

double NNfunction_ng_chi01::synapse0x2aa09e0() {
   return (neuron0x2a9ac40()*0.00344404);
}

double NNfunction_ng_chi01::synapse0x2aa0a20() {
   return (neuron0x2a9af80()*-0.00303612);
}

double NNfunction_ng_chi01::synapse0x2aa0a60() {
   return (neuron0x2a9b2c0()*0.0188859);
}

double NNfunction_ng_chi01::synapse0x2aa0de0() {
   return (neuron0x2a96670()*-0.0291179);
}

double NNfunction_ng_chi01::synapse0x2aa0e20() {
   return (neuron0x2a96920()*-0.0511135);
}

double NNfunction_ng_chi01::synapse0x2aa0e60() {
   return (neuron0x2a96c60()*-1.52197);
}

double NNfunction_ng_chi01::synapse0x2aa0ea0() {
   return (neuron0x2a96fa0()*0.0505658);
}

double NNfunction_ng_chi01::synapse0x2aa0ee0() {
   return (neuron0x2a972e0()*-0.0309836);
}

double NNfunction_ng_chi01::synapse0x2aa0f20() {
   return (neuron0x2a97620()*-0.0430518);
}

double NNfunction_ng_chi01::synapse0x2aa0f60() {
   return (neuron0x2a97960()*0.132521);
}

double NNfunction_ng_chi01::synapse0x2aa0fa0() {
   return (neuron0x2a97ca0()*-0.0308495);
}

double NNfunction_ng_chi01::synapse0x2aa0fe0() {
   return (neuron0x2a97fe0()*0.0110899);
}

double NNfunction_ng_chi01::synapse0x2aa1020() {
   return (neuron0x2a98320()*0.0163953);
}

double NNfunction_ng_chi01::synapse0x2aa1060() {
   return (neuron0x2a98660()*0.00692983);
}

double NNfunction_ng_chi01::synapse0x2aa10a0() {
   return (neuron0x2a989a0()*0.819218);
}

double NNfunction_ng_chi01::synapse0x2aa10e0() {
   return (neuron0x2a98ce0()*-1.39314);
}

double NNfunction_ng_chi01::synapse0x2aa1120() {
   return (neuron0x2a99020()*-0.058919);
}

double NNfunction_ng_chi01::synapse0x2aa1160() {
   return (neuron0x2a99360()*-0.126902);
}

double NNfunction_ng_chi01::synapse0x2aa11a0() {
   return (neuron0x2a996a0()*-0.0184583);
}

double NNfunction_ng_chi01::synapse0x2aa0c30() {
   return (neuron0x2a999e0()*-0.0599995);
}

double NNfunction_ng_chi01::synapse0x2aa0c70() {
   return (neuron0x2a99f40()*0.0952164);
}

double NNfunction_ng_chi01::synapse0x2aa12f0() {
   return (neuron0x2a9a280()*0.116508);
}

double NNfunction_ng_chi01::synapse0x2aa1330() {
   return (neuron0x2a9a5c0()*0.0352515);
}

double NNfunction_ng_chi01::synapse0x2aa1370() {
   return (neuron0x2a9a900()*0.0686883);
}

double NNfunction_ng_chi01::synapse0x2aa13b0() {
   return (neuron0x2a9ac40()*0.0715957);
}

double NNfunction_ng_chi01::synapse0x2aa13f0() {
   return (neuron0x2a9af80()*-0.00788596);
}

double NNfunction_ng_chi01::synapse0x2aa1430() {
   return (neuron0x2a9b2c0()*-1.19858e-05);
}

double NNfunction_ng_chi01::synapse0x2a99e30() {
   return (neuron0x2a96670()*-0.00725882);
}

double NNfunction_ng_chi01::synapse0x2a99e70() {
   return (neuron0x2a96920()*-0.0284134);
}

double NNfunction_ng_chi01::synapse0x2a99eb0() {
   return (neuron0x2a96c60()*0.104035);
}

double NNfunction_ng_chi01::synapse0x2a99ef0() {
   return (neuron0x2a96fa0()*0.00389581);
}

double NNfunction_ng_chi01::synapse0x2aa19c0() {
   return (neuron0x2a972e0()*0.00521563);
}

double NNfunction_ng_chi01::synapse0x2aa1a00() {
   return (neuron0x2a97620()*0.0685563);
}

double NNfunction_ng_chi01::synapse0x2aa1a40() {
   return (neuron0x2a97960()*-0.00534858);
}

double NNfunction_ng_chi01::synapse0x2aa1a80() {
   return (neuron0x2a97ca0()*-0.00979714);
}

double NNfunction_ng_chi01::synapse0x2aa1ac0() {
   return (neuron0x2a97fe0()*0.0592671);
}

double NNfunction_ng_chi01::synapse0x2aa1b00() {
   return (neuron0x2a98320()*-0.0067281);
}

double NNfunction_ng_chi01::synapse0x2aa1b40() {
   return (neuron0x2a98660()*-0.0938548);
}

double NNfunction_ng_chi01::synapse0x2aa1b80() {
   return (neuron0x2a989a0()*-0.137349);
}

double NNfunction_ng_chi01::synapse0x2aa1bc0() {
   return (neuron0x2a98ce0()*-0.0841185);
}

double NNfunction_ng_chi01::synapse0x2aa1c00() {
   return (neuron0x2a99020()*-0.100712);
}

double NNfunction_ng_chi01::synapse0x2aa1c40() {
   return (neuron0x2a99360()*0.770953);
}

double NNfunction_ng_chi01::synapse0x2aa1c80() {
   return (neuron0x2a996a0()*0.0896172);
}

double NNfunction_ng_chi01::synapse0x2aa1600() {
   return (neuron0x2a999e0()*0.0397861);
}

double NNfunction_ng_chi01::synapse0x2aa1640() {
   return (neuron0x2a99f40()*-1.05535);
}

double NNfunction_ng_chi01::synapse0x2aa1dd0() {
   return (neuron0x2a9a280()*-0.0879431);
}

double NNfunction_ng_chi01::synapse0x2aa1e10() {
   return (neuron0x2a9a5c0()*-0.0345336);
}

double NNfunction_ng_chi01::synapse0x2aa1e50() {
   return (neuron0x2a9a900()*0.00515433);
}

double NNfunction_ng_chi01::synapse0x2aa1e90() {
   return (neuron0x2a9ac40()*0.019312);
}

double NNfunction_ng_chi01::synapse0x2aa1ed0() {
   return (neuron0x2a9af80()*-0.0292922);
}

double NNfunction_ng_chi01::synapse0x2aa1f10() {
   return (neuron0x2a9b2c0()*0.101931);
}

double NNfunction_ng_chi01::synapse0x2aa2290() {
   return (neuron0x2a96670()*-0.17756);
}

double NNfunction_ng_chi01::synapse0x2aa22d0() {
   return (neuron0x2a96920()*0.546557);
}

double NNfunction_ng_chi01::synapse0x2aa2310() {
   return (neuron0x2a96c60()*1.08466);
}

double NNfunction_ng_chi01::synapse0x2aa2350() {
   return (neuron0x2a96fa0()*-1.72722);
}

double NNfunction_ng_chi01::synapse0x2aa2390() {
   return (neuron0x2a972e0()*0.257431);
}

double NNfunction_ng_chi01::synapse0x2aa23d0() {
   return (neuron0x2a97620()*0.348693);
}

double NNfunction_ng_chi01::synapse0x2aa2410() {
   return (neuron0x2a97960()*-0.162533);
}

double NNfunction_ng_chi01::synapse0x2aa2450() {
   return (neuron0x2a97ca0()*0.0868823);
}

double NNfunction_ng_chi01::synapse0x2aa2490() {
   return (neuron0x2a97fe0()*0.183417);
}

double NNfunction_ng_chi01::synapse0x2aa24d0() {
   return (neuron0x2a98320()*-0.242084);
}

double NNfunction_ng_chi01::synapse0x2aa2510() {
   return (neuron0x2a98660()*-0.370049);
}

double NNfunction_ng_chi01::synapse0x2aa2550() {
   return (neuron0x2a989a0()*-0.234187);
}

double NNfunction_ng_chi01::synapse0x2aa2590() {
   return (neuron0x2a98ce0()*-0.440343);
}

double NNfunction_ng_chi01::synapse0x2aa25d0() {
   return (neuron0x2a99020()*0.257958);
}

double NNfunction_ng_chi01::synapse0x2aa2610() {
   return (neuron0x2a99360()*-0.613357);
}

double NNfunction_ng_chi01::synapse0x2aa2650() {
   return (neuron0x2a996a0()*-0.070576);
}

double NNfunction_ng_chi01::synapse0x2aa20e0() {
   return (neuron0x2a999e0()*-0.600795);
}

double NNfunction_ng_chi01::synapse0x2aa2120() {
   return (neuron0x2a99f40()*1.23008);
}

double NNfunction_ng_chi01::synapse0x2aa27a0() {
   return (neuron0x2a9a280()*0.00918485);
}

double NNfunction_ng_chi01::synapse0x2aa27e0() {
   return (neuron0x2a9a5c0()*-0.101704);
}

double NNfunction_ng_chi01::synapse0x2aa2820() {
   return (neuron0x2a9a900()*0.185031);
}

double NNfunction_ng_chi01::synapse0x2aa2860() {
   return (neuron0x2a9ac40()*0.173939);
}

double NNfunction_ng_chi01::synapse0x2aa28a0() {
   return (neuron0x2a9af80()*-0.367885);
}

double NNfunction_ng_chi01::synapse0x2aa28e0() {
   return (neuron0x2a9b2c0()*0.00816924);
}

double NNfunction_ng_chi01::synapse0x2aa2c60() {
   return (neuron0x2a96670()*0.0128421);
}

double NNfunction_ng_chi01::synapse0x2aa2ca0() {
   return (neuron0x2a96920()*0.112782);
}

double NNfunction_ng_chi01::synapse0x2aa2ce0() {
   return (neuron0x2a96c60()*1.2034);
}

double NNfunction_ng_chi01::synapse0x2aa2d20() {
   return (neuron0x2a96fa0()*-0.0777483);
}

double NNfunction_ng_chi01::synapse0x2aa2d60() {
   return (neuron0x2a972e0()*0.0193784);
}

double NNfunction_ng_chi01::synapse0x2aa2da0() {
   return (neuron0x2a97620()*-0.088027);
}

double NNfunction_ng_chi01::synapse0x2aa2de0() {
   return (neuron0x2a97960()*0.0129826);
}

double NNfunction_ng_chi01::synapse0x2aa2e20() {
   return (neuron0x2a97ca0()*0.024144);
}

double NNfunction_ng_chi01::synapse0x2aa2e60() {
   return (neuron0x2a97fe0()*0.10829);
}

double NNfunction_ng_chi01::synapse0x2aa2ea0() {
   return (neuron0x2a98320()*-0.0535558);
}

double NNfunction_ng_chi01::synapse0x2aa2ee0() {
   return (neuron0x2a98660()*0.0194049);
}

double NNfunction_ng_chi01::synapse0x2aa2f20() {
   return (neuron0x2a989a0()*-1.19238);
}

double NNfunction_ng_chi01::synapse0x2aa2f60() {
   return (neuron0x2a98ce0()*-0.244575);
}

double NNfunction_ng_chi01::synapse0x2aa2fa0() {
   return (neuron0x2a99020()*-0.0968595);
}

double NNfunction_ng_chi01::synapse0x2aa2fe0() {
   return (neuron0x2a99360()*0.816686);
}

double NNfunction_ng_chi01::synapse0x2aa3020() {
   return (neuron0x2a996a0()*0.101413);
}

double NNfunction_ng_chi01::synapse0x2aa2ab0() {
   return (neuron0x2a999e0()*-0.00953823);
}

double NNfunction_ng_chi01::synapse0x2aa2af0() {
   return (neuron0x2a99f40()*0.186405);
}

double NNfunction_ng_chi01::synapse0x2a9f880() {
   return (neuron0x2a9a280()*-0.0533714);
}

double NNfunction_ng_chi01::synapse0x2a9f8c0() {
   return (neuron0x2a9a5c0()*-0.0454531);
}

double NNfunction_ng_chi01::synapse0x2a9f900() {
   return (neuron0x2a9a900()*-0.022186);
}

double NNfunction_ng_chi01::synapse0x2a9f940() {
   return (neuron0x2a9ac40()*0.016574);
}

double NNfunction_ng_chi01::synapse0x2a9f980() {
   return (neuron0x2a9af80()*-0.00707032);
}

double NNfunction_ng_chi01::synapse0x2a9f9c0() {
   return (neuron0x2a9b2c0()*0.0944165);
}

double NNfunction_ng_chi01::synapse0x2a9fd40() {
   return (neuron0x2a96670()*-0.0128337);
}

double NNfunction_ng_chi01::synapse0x2a9fd80() {
   return (neuron0x2a96920()*0.0430946);
}

double NNfunction_ng_chi01::synapse0x2a9fdc0() {
   return (neuron0x2a96c60()*-2.73431);
}

double NNfunction_ng_chi01::synapse0x2a9fe00() {
   return (neuron0x2a96fa0()*0.119405);
}

double NNfunction_ng_chi01::synapse0x2a9fe40() {
   return (neuron0x2a972e0()*-0.0345393);
}

double NNfunction_ng_chi01::synapse0x2a9fe80() {
   return (neuron0x2a97620()*0.0363571);
}

double NNfunction_ng_chi01::synapse0x2a9fec0() {
   return (neuron0x2a97960()*-0.00538183);
}

double NNfunction_ng_chi01::synapse0x2a9ff00() {
   return (neuron0x2a97ca0()*-0.0361419);
}

double NNfunction_ng_chi01::synapse0x2a9ff40() {
   return (neuron0x2a97fe0()*0.00045359);
}

double NNfunction_ng_chi01::synapse0x2a9ff80() {
   return (neuron0x2a98320()*0.07668);
}

double NNfunction_ng_chi01::synapse0x2a9ffc0() {
   return (neuron0x2a98660()*0.0241199);
}

double NNfunction_ng_chi01::synapse0x2aa0000() {
   return (neuron0x2a989a0()*-1.39093);
}

double NNfunction_ng_chi01::synapse0x2aa0040() {
   return (neuron0x2a98ce0()*0.0674534);
}

double NNfunction_ng_chi01::synapse0x2aa4180() {
   return (neuron0x2a99020()*-0.013751);
}

double NNfunction_ng_chi01::synapse0x2aa41c0() {
   return (neuron0x2a99360()*-0.0476305);
}

double NNfunction_ng_chi01::synapse0x2aa4200() {
   return (neuron0x2a996a0()*-0.056089);
}

double NNfunction_ng_chi01::synapse0x2a9fb90() {
   return (neuron0x2a999e0()*0.00231072);
}

double NNfunction_ng_chi01::synapse0x2a9fbd0() {
   return (neuron0x2a99f40()*0.0591486);
}

double NNfunction_ng_chi01::synapse0x2aa4350() {
   return (neuron0x2a9a280()*-0.0439117);
}

double NNfunction_ng_chi01::synapse0x2aa4390() {
   return (neuron0x2a9a5c0()*-0.0240159);
}

double NNfunction_ng_chi01::synapse0x2aa43d0() {
   return (neuron0x2a9a900()*-0.0545732);
}

double NNfunction_ng_chi01::synapse0x2aa4410() {
   return (neuron0x2a9ac40()*0.00153865);
}

double NNfunction_ng_chi01::synapse0x2aa4450() {
   return (neuron0x2a9af80()*-0.0137551);
}

double NNfunction_ng_chi01::synapse0x2aa4490() {
   return (neuron0x2a9b2c0()*-0.0366622);
}

double NNfunction_ng_chi01::synapse0x2aa4810() {
   return (neuron0x2a96670()*0.139195);
}

double NNfunction_ng_chi01::synapse0x2aa4850() {
   return (neuron0x2a96920()*-0.258237);
}

double NNfunction_ng_chi01::synapse0x2aa4890() {
   return (neuron0x2a96c60()*0.225724);
}

double NNfunction_ng_chi01::synapse0x2aa48d0() {
   return (neuron0x2a96fa0()*-0.457936);
}

double NNfunction_ng_chi01::synapse0x2aa4910() {
   return (neuron0x2a972e0()*0.304315);
}

double NNfunction_ng_chi01::synapse0x2aa4950() {
   return (neuron0x2a97620()*-0.00637947);
}

double NNfunction_ng_chi01::synapse0x2aa4990() {
   return (neuron0x2a97960()*-0.0721623);
}

double NNfunction_ng_chi01::synapse0x2aa49d0() {
   return (neuron0x2a97ca0()*0.967403);
}

double NNfunction_ng_chi01::synapse0x2aa4a10() {
   return (neuron0x2a97fe0()*0.148371);
}

double NNfunction_ng_chi01::synapse0x2aa4a50() {
   return (neuron0x2a98320()*0.380659);
}

double NNfunction_ng_chi01::synapse0x2aa4a90() {
   return (neuron0x2a98660()*0.0323514);
}

double NNfunction_ng_chi01::synapse0x2aa4ad0() {
   return (neuron0x2a989a0()*-0.00569018);
}

double NNfunction_ng_chi01::synapse0x2aa4b10() {
   return (neuron0x2a98ce0()*0.182924);
}

double NNfunction_ng_chi01::synapse0x2aa4b50() {
   return (neuron0x2a99020()*-0.359361);
}

double NNfunction_ng_chi01::synapse0x2aa4b90() {
   return (neuron0x2a99360()*0.583988);
}

double NNfunction_ng_chi01::synapse0x2aa4bd0() {
   return (neuron0x2a996a0()*0.66763);
}

double NNfunction_ng_chi01::synapse0x2aa4660() {
   return (neuron0x2a999e0()*-0.16893);
}

double NNfunction_ng_chi01::synapse0x2aa46a0() {
   return (neuron0x2a99f40()*0.00224385);
}

double NNfunction_ng_chi01::synapse0x2aa4d20() {
   return (neuron0x2a9a280()*0.627835);
}

double NNfunction_ng_chi01::synapse0x2aa4d60() {
   return (neuron0x2a9a5c0()*-0.407122);
}

double NNfunction_ng_chi01::synapse0x2aa4da0() {
   return (neuron0x2a9a900()*0.472135);
}

double NNfunction_ng_chi01::synapse0x2aa4de0() {
   return (neuron0x2a9ac40()*0.232852);
}

double NNfunction_ng_chi01::synapse0x2aa4e20() {
   return (neuron0x2a9af80()*-0.51897);
}

double NNfunction_ng_chi01::synapse0x2aa4e60() {
   return (neuron0x2a9b2c0()*-0.561824);
}

double NNfunction_ng_chi01::synapse0x2aa51e0() {
   return (neuron0x2a96670()*0.0168229);
}

double NNfunction_ng_chi01::synapse0x2aa5220() {
   return (neuron0x2a96920()*-0.0209236);
}

double NNfunction_ng_chi01::synapse0x2aa5260() {
   return (neuron0x2a96c60()*0.0304669);
}

double NNfunction_ng_chi01::synapse0x2aa52a0() {
   return (neuron0x2a96fa0()*11.3561);
}

double NNfunction_ng_chi01::synapse0x2aa52e0() {
   return (neuron0x2a972e0()*0.00864769);
}

double NNfunction_ng_chi01::synapse0x2aa5320() {
   return (neuron0x2a97620()*0.0425105);
}

double NNfunction_ng_chi01::synapse0x2aa5360() {
   return (neuron0x2a97960()*0.0398885);
}

double NNfunction_ng_chi01::synapse0x2aa53a0() {
   return (neuron0x2a97ca0()*-0.0167669);
}

double NNfunction_ng_chi01::synapse0x2aa53e0() {
   return (neuron0x2a97fe0()*-0.0503064);
}

double NNfunction_ng_chi01::synapse0x2aa5420() {
   return (neuron0x2a98320()*-0.0201063);
}

double NNfunction_ng_chi01::synapse0x2aa5460() {
   return (neuron0x2a98660()*-0.000643462);
}

double NNfunction_ng_chi01::synapse0x2aa54a0() {
   return (neuron0x2a989a0()*0.171909);
}

double NNfunction_ng_chi01::synapse0x2aa54e0() {
   return (neuron0x2a98ce0()*0.0225707);
}

double NNfunction_ng_chi01::synapse0x2aa5520() {
   return (neuron0x2a99020()*-0.0117526);
}

double NNfunction_ng_chi01::synapse0x2aa5560() {
   return (neuron0x2a99360()*0.121262);
}

double NNfunction_ng_chi01::synapse0x2aa55a0() {
   return (neuron0x2a996a0()*0.0100736);
}

double NNfunction_ng_chi01::synapse0x2aa5030() {
   return (neuron0x2a999e0()*0.0104592);
}

double NNfunction_ng_chi01::synapse0x2aa5070() {
   return (neuron0x2a99f40()*0.0109914);
}

double NNfunction_ng_chi01::synapse0x2aa56f0() {
   return (neuron0x2a9a280()*-0.00582907);
}

double NNfunction_ng_chi01::synapse0x2aa5730() {
   return (neuron0x2a9a5c0()*-0.00812596);
}

double NNfunction_ng_chi01::synapse0x2aa5770() {
   return (neuron0x2a9a900()*-0.0113735);
}

double NNfunction_ng_chi01::synapse0x2aa57b0() {
   return (neuron0x2a9ac40()*-0.00202441);
}

double NNfunction_ng_chi01::synapse0x2aa57f0() {
   return (neuron0x2a9af80()*0.00298133);
}

double NNfunction_ng_chi01::synapse0x2aa5830() {
   return (neuron0x2a9b2c0()*0.0712733);
}

double NNfunction_ng_chi01::synapse0x2aa5bb0() {
   return (neuron0x2a96670()*0.0977339);
}

double NNfunction_ng_chi01::synapse0x2aa5bf0() {
   return (neuron0x2a96920()*0.0198189);
}

double NNfunction_ng_chi01::synapse0x2aa5c30() {
   return (neuron0x2a96c60()*-0.177656);
}

double NNfunction_ng_chi01::synapse0x2aa5c70() {
   return (neuron0x2a96fa0()*4.33191);
}

double NNfunction_ng_chi01::synapse0x2aa5cb0() {
   return (neuron0x2a972e0()*0.0410094);
}

double NNfunction_ng_chi01::synapse0x2aa5cf0() {
   return (neuron0x2a97620()*0.00200239);
}

double NNfunction_ng_chi01::synapse0x2aa5d30() {
   return (neuron0x2a97960()*0.0167566);
}

double NNfunction_ng_chi01::synapse0x2aa5d70() {
   return (neuron0x2a97ca0()*0.0176983);
}

double NNfunction_ng_chi01::synapse0x2aa5db0() {
   return (neuron0x2a97fe0()*0.0220808);
}

double NNfunction_ng_chi01::synapse0x2aa5df0() {
   return (neuron0x2a98320()*0.0194089);
}

double NNfunction_ng_chi01::synapse0x2aa5e30() {
   return (neuron0x2a98660()*-0.0334801);
}

double NNfunction_ng_chi01::synapse0x2aa5e70() {
   return (neuron0x2a989a0()*0.642361);
}

double NNfunction_ng_chi01::synapse0x2aa5eb0() {
   return (neuron0x2a98ce0()*0.212523);
}

double NNfunction_ng_chi01::synapse0x2aa5ef0() {
   return (neuron0x2a99020()*0.0810029);
}

double NNfunction_ng_chi01::synapse0x2aa5f30() {
   return (neuron0x2a99360()*-0.225899);
}

double NNfunction_ng_chi01::synapse0x2aa5f70() {
   return (neuron0x2a996a0()*-0.0601768);
}

double NNfunction_ng_chi01::synapse0x2aa5a00() {
   return (neuron0x2a999e0()*0.0235047);
}

double NNfunction_ng_chi01::synapse0x2aa5a40() {
   return (neuron0x2a99f40()*0.0105211);
}

double NNfunction_ng_chi01::synapse0x2aa60c0() {
   return (neuron0x2a9a280()*-0.0497468);
}

double NNfunction_ng_chi01::synapse0x2aa6100() {
   return (neuron0x2a9a5c0()*0.00117997);
}

double NNfunction_ng_chi01::synapse0x2aa6140() {
   return (neuron0x2a9a900()*-0.0529488);
}

double NNfunction_ng_chi01::synapse0x2aa6180() {
   return (neuron0x2a9ac40()*0.00924956);
}

double NNfunction_ng_chi01::synapse0x2aa61c0() {
   return (neuron0x2a9af80()*-0.0369964);
}

double NNfunction_ng_chi01::synapse0x2aa6200() {
   return (neuron0x2a9b2c0()*0.0728263);
}

double NNfunction_ng_chi01::synapse0x2aa6580() {
   return (neuron0x2a96670()*-0.0520707);
}

double NNfunction_ng_chi01::synapse0x2a96800() {
   return (neuron0x2a96920()*-0.165755);
}

double NNfunction_ng_chi01::synapse0x2a96840() {
   return (neuron0x2a96c60()*-0.0268207);
}

double NNfunction_ng_chi01::synapse0x2a96b40() {
   return (neuron0x2a96fa0()*0.0661779);
}

double NNfunction_ng_chi01::synapse0x2a96b80() {
   return (neuron0x2a972e0()*-0.00677862);
}

double NNfunction_ng_chi01::synapse0x2a96e80() {
   return (neuron0x2a97620()*0.100688);
}

double NNfunction_ng_chi01::synapse0x2a96ec0() {
   return (neuron0x2a97960()*-0.0247299);
}

double NNfunction_ng_chi01::synapse0x2a971c0() {
   return (neuron0x2a97ca0()*-0.0210484);
}

double NNfunction_ng_chi01::synapse0x2a97200() {
   return (neuron0x2a97fe0()*-0.0454708);
}

double NNfunction_ng_chi01::synapse0x2a97500() {
   return (neuron0x2a98320()*-0.0818494);
}

double NNfunction_ng_chi01::synapse0x2a97540() {
   return (neuron0x2a98660()*0.0222228);
}

double NNfunction_ng_chi01::synapse0x2a97840() {
   return (neuron0x2a989a0()*0.458655);
}

double NNfunction_ng_chi01::synapse0x2a97880() {
   return (neuron0x2a98ce0()*0.0470293);
}

double NNfunction_ng_chi01::synapse0x2a97b80() {
   return (neuron0x2a99020()*0.0853168);
}

double NNfunction_ng_chi01::synapse0x2a97bc0() {
   return (neuron0x2a99360()*0.645704);
}

double NNfunction_ng_chi01::synapse0x2a97ec0() {
   return (neuron0x2a996a0()*0.01338);
}

double NNfunction_ng_chi01::synapse0x2a97f00() {
   return (neuron0x2a999e0()*0.0105514);
}

double NNfunction_ng_chi01::synapse0x2a98200() {
   return (neuron0x2a99f40()*-2.06395);
}

double NNfunction_ng_chi01::synapse0x2a98240() {
   return (neuron0x2a9a280()*0.133871);
}

double NNfunction_ng_chi01::synapse0x2a98540() {
   return (neuron0x2a9a5c0()*-0.0625381);
}

double NNfunction_ng_chi01::synapse0x2a98580() {
   return (neuron0x2a9a900()*0.083081);
}

double NNfunction_ng_chi01::synapse0x2a98880() {
   return (neuron0x2a9ac40()*-0.0191893);
}

double NNfunction_ng_chi01::synapse0x2a988c0() {
   return (neuron0x2a9af80()*-0.0272158);
}

double NNfunction_ng_chi01::synapse0x2a98bc0() {
   return (neuron0x2a9b2c0()*-0.1394);
}

double NNfunction_ng_chi01::synapse0x2a98c00() {
   return (neuron0x2a96670()*0.0184625);
}

double NNfunction_ng_chi01::synapse0x2a998c0() {
   return (neuron0x2a96920()*0.0181414);
}

double NNfunction_ng_chi01::synapse0x2a99900() {
   return (neuron0x2a96c60()*-0.271593);
}

double NNfunction_ng_chi01::synapse0x2aa63d0() {
   return (neuron0x2a96fa0()*0.0175141);
}

double NNfunction_ng_chi01::synapse0x2aa6410() {
   return (neuron0x2a972e0()*-0.036238);
}

double NNfunction_ng_chi01::synapse0x2a99c00() {
   return (neuron0x2a97620()*-0.000326864);
}

double NNfunction_ng_chi01::synapse0x2a99c40() {
   return (neuron0x2a97960()*-0.00505225);
}

double NNfunction_ng_chi01::synapse0x2a9a160() {
   return (neuron0x2a97ca0()*-0.00267347);
}

double NNfunction_ng_chi01::synapse0x2a9a1a0() {
   return (neuron0x2a97fe0()*-0.00234308);
}

double NNfunction_ng_chi01::synapse0x2a9a4a0() {
   return (neuron0x2a98320()*0.00884301);
}

double NNfunction_ng_chi01::synapse0x2a9a4e0() {
   return (neuron0x2a98660()*0.00273032);
}

double NNfunction_ng_chi01::synapse0x2a9a7e0() {
   return (neuron0x2a989a0()*0.157661);
}

double NNfunction_ng_chi01::synapse0x2a9a820() {
   return (neuron0x2a98ce0()*0.000787273);
}

double NNfunction_ng_chi01::synapse0x2a9ab20() {
   return (neuron0x2a99020()*0.00410243);
}

double NNfunction_ng_chi01::synapse0x2a9ab60() {
   return (neuron0x2a99360()*-0.0240253);
}

double NNfunction_ng_chi01::synapse0x2a9ae60() {
   return (neuron0x2a996a0()*-0.011866);
}

double NNfunction_ng_chi01::synapse0x2a9aea0() {
   return (neuron0x2a999e0()*-0.000458123);
}

double NNfunction_ng_chi01::synapse0x2a9b1a0() {
   return (neuron0x2a99f40()*0.00934076);
}

double NNfunction_ng_chi01::synapse0x2a9b1e0() {
   return (neuron0x2a9a280()*-0.0084599);
}

double NNfunction_ng_chi01::synapse0x2a9b4e0() {
   return (neuron0x2a9a5c0()*-0.0111395);
}

double NNfunction_ng_chi01::synapse0x2a9b520() {
   return (neuron0x2a9a900()*0.0101287);
}

double NNfunction_ng_chi01::synapse0x2a98f00() {
   return (neuron0x2a9ac40()*0.0193365);
}

double NNfunction_ng_chi01::synapse0x2a98f40() {
   return (neuron0x2a9af80()*0.00990397);
}

double NNfunction_ng_chi01::synapse0x2aa82f0() {
   return (neuron0x2a9b2c0()*-15.8292);
}

double NNfunction_ng_chi01::synapse0x2aa8670() {
   return (neuron0x2a96670()*-0.107984);
}

double NNfunction_ng_chi01::synapse0x2aa86b0() {
   return (neuron0x2a96920()*0.245322);
}

double NNfunction_ng_chi01::synapse0x2aa86f0() {
   return (neuron0x2a96c60()*-0.46261);
}

double NNfunction_ng_chi01::synapse0x2aa8730() {
   return (neuron0x2a96fa0()*2.49548);
}

double NNfunction_ng_chi01::synapse0x2aa8770() {
   return (neuron0x2a972e0()*-0.00899136);
}

double NNfunction_ng_chi01::synapse0x2aa87b0() {
   return (neuron0x2a97620()*0.0740172);
}

double NNfunction_ng_chi01::synapse0x2aa87f0() {
   return (neuron0x2a97960()*-0.0722987);
}

double NNfunction_ng_chi01::synapse0x2aa8830() {
   return (neuron0x2a97ca0()*0.0340362);
}

double NNfunction_ng_chi01::synapse0x2aa8870() {
   return (neuron0x2a97fe0()*0.0498454);
}

double NNfunction_ng_chi01::synapse0x2aa88b0() {
   return (neuron0x2a98320()*0.186149);
}

double NNfunction_ng_chi01::synapse0x2aa88f0() {
   return (neuron0x2a98660()*-0.042811);
}

double NNfunction_ng_chi01::synapse0x2aa8930() {
   return (neuron0x2a989a0()*-0.0878835);
}

double NNfunction_ng_chi01::synapse0x2aa8970() {
   return (neuron0x2a98ce0()*-0.0381333);
}

double NNfunction_ng_chi01::synapse0x2aa89b0() {
   return (neuron0x2a99020()*-0.07861);
}

double NNfunction_ng_chi01::synapse0x2aa89f0() {
   return (neuron0x2a99360()*0.586625);
}

double NNfunction_ng_chi01::synapse0x2aa8a30() {
   return (neuron0x2a996a0()*0.0422545);
}

double NNfunction_ng_chi01::synapse0x2aa84c0() {
   return (neuron0x2a999e0()*-0.0782966);
}

double NNfunction_ng_chi01::synapse0x2aa8500() {
   return (neuron0x2a99f40()*0.135704);
}

double NNfunction_ng_chi01::synapse0x2aa8b80() {
   return (neuron0x2a9a280()*-0.0229225);
}

double NNfunction_ng_chi01::synapse0x2aa8bc0() {
   return (neuron0x2a9a5c0()*-0.0141957);
}

double NNfunction_ng_chi01::synapse0x2aa8c00() {
   return (neuron0x2a9a900()*-0.0157407);
}

double NNfunction_ng_chi01::synapse0x2aa8c40() {
   return (neuron0x2a9ac40()*0.0173486);
}

double NNfunction_ng_chi01::synapse0x2aa8c80() {
   return (neuron0x2a9af80()*0.161877);
}

double NNfunction_ng_chi01::synapse0x2aa8cc0() {
   return (neuron0x2a9b2c0()*-0.122946);
}

double NNfunction_ng_chi01::synapse0x2aa9040() {
   return (neuron0x2a96670()*-0.167305);
}

double NNfunction_ng_chi01::synapse0x2aa9080() {
   return (neuron0x2a96920()*-1.08636);
}

double NNfunction_ng_chi01::synapse0x2aa90c0() {
   return (neuron0x2a96c60()*-0.283317);
}

double NNfunction_ng_chi01::synapse0x2aa9100() {
   return (neuron0x2a96fa0()*0.0941623);
}

double NNfunction_ng_chi01::synapse0x2aa9140() {
   return (neuron0x2a972e0()*-0.0383074);
}

double NNfunction_ng_chi01::synapse0x2aa9180() {
   return (neuron0x2a97620()*0.0456248);
}

double NNfunction_ng_chi01::synapse0x2aa91c0() {
   return (neuron0x2a97960()*0.244876);
}

double NNfunction_ng_chi01::synapse0x2aa9200() {
   return (neuron0x2a97ca0()*0.133221);
}

double NNfunction_ng_chi01::synapse0x2aa9240() {
   return (neuron0x2a97fe0()*-0.0447512);
}

double NNfunction_ng_chi01::synapse0x2aa9280() {
   return (neuron0x2a98320()*0.0594729);
}

double NNfunction_ng_chi01::synapse0x2aa92c0() {
   return (neuron0x2a98660()*0.000620135);
}

double NNfunction_ng_chi01::synapse0x2aa9300() {
   return (neuron0x2a989a0()*0.596663);
}

double NNfunction_ng_chi01::synapse0x2aa9340() {
   return (neuron0x2a98ce0()*0.170027);
}

double NNfunction_ng_chi01::synapse0x2aa9380() {
   return (neuron0x2a99020()*-0.0237161);
}

double NNfunction_ng_chi01::synapse0x2aa93c0() {
   return (neuron0x2a99360()*-0.687435);
}

double NNfunction_ng_chi01::synapse0x2aa9400() {
   return (neuron0x2a996a0()*-0.205347);
}

double NNfunction_ng_chi01::synapse0x2aa8e90() {
   return (neuron0x2a999e0()*-0.0557702);
}

double NNfunction_ng_chi01::synapse0x2aa8ed0() {
   return (neuron0x2a99f40()*-0.159183);
}

double NNfunction_ng_chi01::synapse0x2aa9550() {
   return (neuron0x2a9a280()*0.0471928);
}

double NNfunction_ng_chi01::synapse0x2aa9590() {
   return (neuron0x2a9a5c0()*0.0737377);
}

double NNfunction_ng_chi01::synapse0x2aa95d0() {
   return (neuron0x2a9a900()*0.000123395);
}

double NNfunction_ng_chi01::synapse0x2aa9610() {
   return (neuron0x2a9ac40()*-0.0306626);
}

double NNfunction_ng_chi01::synapse0x2aa9650() {
   return (neuron0x2a9af80()*-0.0311023);
}

double NNfunction_ng_chi01::synapse0x2aa9690() {
   return (neuron0x2a9b2c0()*1.98775);
}

double NNfunction_ng_chi01::synapse0x2aa9a10() {
   return (neuron0x2a96670()*-0.107765);
}

double NNfunction_ng_chi01::synapse0x2aa9a50() {
   return (neuron0x2a96920()*0.013504);
}

double NNfunction_ng_chi01::synapse0x2aa9a90() {
   return (neuron0x2a96c60()*3.38332);
}

double NNfunction_ng_chi01::synapse0x2aa9ad0() {
   return (neuron0x2a96fa0()*0.00141674);
}

double NNfunction_ng_chi01::synapse0x2aa9b10() {
   return (neuron0x2a972e0()*-0.0293366);
}

double NNfunction_ng_chi01::synapse0x2aa9b50() {
   return (neuron0x2a97620()*0.0152547);
}

double NNfunction_ng_chi01::synapse0x2aa9b90() {
   return (neuron0x2a97960()*0.0130577);
}

double NNfunction_ng_chi01::synapse0x2aa9bd0() {
   return (neuron0x2a97ca0()*0.00454562);
}

double NNfunction_ng_chi01::synapse0x2aa9c10() {
   return (neuron0x2a97fe0()*0.011965);
}

double NNfunction_ng_chi01::synapse0x2aa9c50() {
   return (neuron0x2a98320()*0.0372184);
}

double NNfunction_ng_chi01::synapse0x2aa9c90() {
   return (neuron0x2a98660()*0.0158574);
}

double NNfunction_ng_chi01::synapse0x2aa9cd0() {
   return (neuron0x2a989a0()*-0.154471);
}

double NNfunction_ng_chi01::synapse0x2aa9d10() {
   return (neuron0x2a98ce0()*0.00603024);
}

double NNfunction_ng_chi01::synapse0x2aa9d50() {
   return (neuron0x2a99020()*0.00384601);
}

double NNfunction_ng_chi01::synapse0x2aa9d90() {
   return (neuron0x2a99360()*-0.0798782);
}

double NNfunction_ng_chi01::synapse0x2aa9dd0() {
   return (neuron0x2a996a0()*-0.0178085);
}

double NNfunction_ng_chi01::synapse0x2aa9860() {
   return (neuron0x2a999e0()*-0.00399698);
}

double NNfunction_ng_chi01::synapse0x2aa98a0() {
   return (neuron0x2a99f40()*-0.0126384);
}

double NNfunction_ng_chi01::synapse0x2aa9f20() {
   return (neuron0x2a9a280()*-0.0153509);
}

double NNfunction_ng_chi01::synapse0x2aa9f60() {
   return (neuron0x2a9a5c0()*-0.01873);
}

double NNfunction_ng_chi01::synapse0x2aa9fa0() {
   return (neuron0x2a9a900()*0.0205217);
}

double NNfunction_ng_chi01::synapse0x2aa9fe0() {
   return (neuron0x2a9ac40()*0.0293855);
}

double NNfunction_ng_chi01::synapse0x2aaa020() {
   return (neuron0x2a9af80()*-0.0129701);
}

double NNfunction_ng_chi01::synapse0x2aaa060() {
   return (neuron0x2a9b2c0()*5.02335);
}

double NNfunction_ng_chi01::synapse0x2aaa3e0() {
   return (neuron0x2a96670()*0.0051509);
}

double NNfunction_ng_chi01::synapse0x2aaa420() {
   return (neuron0x2a96920()*0.0398978);
}

double NNfunction_ng_chi01::synapse0x2aaa460() {
   return (neuron0x2a96c60()*-0.389184);
}

double NNfunction_ng_chi01::synapse0x2aaa4a0() {
   return (neuron0x2a96fa0()*-1.28328);
}

double NNfunction_ng_chi01::synapse0x2aaa4e0() {
   return (neuron0x2a972e0()*0.000109442);
}

double NNfunction_ng_chi01::synapse0x2aaa520() {
   return (neuron0x2a97620()*-0.00279016);
}

double NNfunction_ng_chi01::synapse0x2aaa560() {
   return (neuron0x2a97960()*0.00856608);
}

double NNfunction_ng_chi01::synapse0x2aaa5a0() {
   return (neuron0x2a97ca0()*0.00364242);
}

double NNfunction_ng_chi01::synapse0x2aaa5e0() {
   return (neuron0x2a97fe0()*-0.0151233);
}

double NNfunction_ng_chi01::synapse0x2aaa620() {
   return (neuron0x2a98320()*0.0139167);
}

double NNfunction_ng_chi01::synapse0x2aaa660() {
   return (neuron0x2a98660()*0.0191449);
}

double NNfunction_ng_chi01::synapse0x2aaa6a0() {
   return (neuron0x2a989a0()*0.0337178);
}

double NNfunction_ng_chi01::synapse0x2aaa6e0() {
   return (neuron0x2a98ce0()*-0.00978278);
}

double NNfunction_ng_chi01::synapse0x2aaa720() {
   return (neuron0x2a99020()*-0.00562121);
}

double NNfunction_ng_chi01::synapse0x2aaa760() {
   return (neuron0x2a99360()*-0.0446594);
}

double NNfunction_ng_chi01::synapse0x2aaa7a0() {
   return (neuron0x2a996a0()*0.00616155);
}

double NNfunction_ng_chi01::synapse0x2aaa230() {
   return (neuron0x2a999e0()*0.0142316);
}

double NNfunction_ng_chi01::synapse0x2aaa270() {
   return (neuron0x2a99f40()*-0.000439305);
}

double NNfunction_ng_chi01::synapse0x2aaa8f0() {
   return (neuron0x2a9a280()*0.00453194);
}

double NNfunction_ng_chi01::synapse0x2aaa930() {
   return (neuron0x2a9a5c0()*0.0027886);
}

double NNfunction_ng_chi01::synapse0x2aaa970() {
   return (neuron0x2a9a900()*-0.00428375);
}

double NNfunction_ng_chi01::synapse0x2aaa9b0() {
   return (neuron0x2a9ac40()*-0.00499558);
}

double NNfunction_ng_chi01::synapse0x2aaa9f0() {
   return (neuron0x2a9af80()*0.00373099);
}

double NNfunction_ng_chi01::synapse0x2aaaa30() {
   return (neuron0x2a9b2c0()*-0.0124389);
}

double NNfunction_ng_chi01::synapse0x2aaadb0() {
   return (neuron0x2a96670()*0.0304904);
}

double NNfunction_ng_chi01::synapse0x2aaadf0() {
   return (neuron0x2a96920()*6.0397e-05);
}

double NNfunction_ng_chi01::synapse0x2aaae30() {
   return (neuron0x2a96c60()*-0.164511);
}

double NNfunction_ng_chi01::synapse0x2aaae70() {
   return (neuron0x2a96fa0()*-0.161333);
}

double NNfunction_ng_chi01::synapse0x2aaaeb0() {
   return (neuron0x2a972e0()*-0.0279696);
}

double NNfunction_ng_chi01::synapse0x2aaaef0() {
   return (neuron0x2a97620()*0.00204748);
}

double NNfunction_ng_chi01::synapse0x2aaaf30() {
   return (neuron0x2a97960()*-0.013534);
}

double NNfunction_ng_chi01::synapse0x2aaaf70() {
   return (neuron0x2a97ca0()*-0.00569405);
}

double NNfunction_ng_chi01::synapse0x2aaafb0() {
   return (neuron0x2a97fe0()*0.0172264);
}

double NNfunction_ng_chi01::synapse0x2aa3170() {
   return (neuron0x2a98320()*-0.00135531);
}

double NNfunction_ng_chi01::synapse0x2aa31b0() {
   return (neuron0x2a98660()*0.00944518);
}

double NNfunction_ng_chi01::synapse0x2aa31f0() {
   return (neuron0x2a989a0()*0.00527342);
}

double NNfunction_ng_chi01::synapse0x2aa3230() {
   return (neuron0x2a98ce0()*-0.00548369);
}

double NNfunction_ng_chi01::synapse0x2aa3270() {
   return (neuron0x2a99020()*-0.00159916);
}

double NNfunction_ng_chi01::synapse0x2aa32b0() {
   return (neuron0x2a99360()*0.001939);
}

double NNfunction_ng_chi01::synapse0x2aa32f0() {
   return (neuron0x2a996a0()*-0.0231414);
}

double NNfunction_ng_chi01::synapse0x2aaac00() {
   return (neuron0x2a999e0()*-0.00527912);
}

double NNfunction_ng_chi01::synapse0x2aaac40() {
   return (neuron0x2a99f40()*0.0106296);
}

double NNfunction_ng_chi01::synapse0x2aa3440() {
   return (neuron0x2a9a280()*-0.0187025);
}

double NNfunction_ng_chi01::synapse0x2aa3480() {
   return (neuron0x2a9a5c0()*-0.00577183);
}

double NNfunction_ng_chi01::synapse0x2aa34c0() {
   return (neuron0x2a9a900()*0.00227057);
}

double NNfunction_ng_chi01::synapse0x2aa3500() {
   return (neuron0x2a9ac40()*0.0145348);
}

double NNfunction_ng_chi01::synapse0x2aa3540() {
   return (neuron0x2a9af80()*0.0087024);
}

double NNfunction_ng_chi01::synapse0x2aa3580() {
   return (neuron0x2a9b2c0()*-20.2073);
}

double NNfunction_ng_chi01::synapse0x2aa3900() {
   return (neuron0x2a96670()*-0.0795541);
}

double NNfunction_ng_chi01::synapse0x2aa3940() {
   return (neuron0x2a96920()*-0.00470193);
}

double NNfunction_ng_chi01::synapse0x2aa3980() {
   return (neuron0x2a96c60()*-0.703628);
}

double NNfunction_ng_chi01::synapse0x2aa39c0() {
   return (neuron0x2a96fa0()*0.0140874);
}

double NNfunction_ng_chi01::synapse0x2aa3a00() {
   return (neuron0x2a972e0()*0.00940811);
}

double NNfunction_ng_chi01::synapse0x2aa3a40() {
   return (neuron0x2a97620()*-0.0175316);
}

double NNfunction_ng_chi01::synapse0x2aa3a80() {
   return (neuron0x2a97960()*-0.00644419);
}

double NNfunction_ng_chi01::synapse0x2aa3ac0() {
   return (neuron0x2a97ca0()*-0.0116635);
}

double NNfunction_ng_chi01::synapse0x2aa3b00() {
   return (neuron0x2a97fe0()*0.00644304);
}

double NNfunction_ng_chi01::synapse0x2aa3b40() {
   return (neuron0x2a98320()*0.00537059);
}

double NNfunction_ng_chi01::synapse0x2aa3b80() {
   return (neuron0x2a98660()*0.0111668);
}

double NNfunction_ng_chi01::synapse0x2aa3bc0() {
   return (neuron0x2a989a0()*0.0961392);
}

double NNfunction_ng_chi01::synapse0x2aa3c00() {
   return (neuron0x2a98ce0()*0.00543037);
}

double NNfunction_ng_chi01::synapse0x2aa3c40() {
   return (neuron0x2a99020()*0.0131682);
}

double NNfunction_ng_chi01::synapse0x2aa3c80() {
   return (neuron0x2a99360()*-0.035782);
}

double NNfunction_ng_chi01::synapse0x2aa3cc0() {
   return (neuron0x2a996a0()*0.0200168);
}

double NNfunction_ng_chi01::synapse0x2aa3750() {
   return (neuron0x2a999e0()*0.0326033);
}

double NNfunction_ng_chi01::synapse0x2aa3790() {
   return (neuron0x2a99f40()*-0.0482264);
}

double NNfunction_ng_chi01::synapse0x2aa3e10() {
   return (neuron0x2a9a280()*0.00704393);
}

double NNfunction_ng_chi01::synapse0x2aa3e50() {
   return (neuron0x2a9a5c0()*0.0272314);
}

double NNfunction_ng_chi01::synapse0x2aa3e90() {
   return (neuron0x2a9a900()*-0.0213318);
}

double NNfunction_ng_chi01::synapse0x2aa3ed0() {
   return (neuron0x2a9ac40()*-0.00169342);
}

double NNfunction_ng_chi01::synapse0x2aa3f10() {
   return (neuron0x2a9af80()*-0.00368132);
}

double NNfunction_ng_chi01::synapse0x2aa3f50() {
   return (neuron0x2a9b2c0()*4.11167);
}

double NNfunction_ng_chi01::synapse0x2aa4120() {
   return (neuron0x2a96670()*-0.0554178);
}

double NNfunction_ng_chi01::synapse0x2aad1b0() {
   return (neuron0x2a96920()*0.1358);
}

double NNfunction_ng_chi01::synapse0x2aad1f0() {
   return (neuron0x2a96c60()*-0.601944);
}

double NNfunction_ng_chi01::synapse0x2aad230() {
   return (neuron0x2a96fa0()*-6.9901);
}

double NNfunction_ng_chi01::synapse0x2aad270() {
   return (neuron0x2a972e0()*0.119751);
}

double NNfunction_ng_chi01::synapse0x2aad2b0() {
   return (neuron0x2a97620()*0.0966518);
}

double NNfunction_ng_chi01::synapse0x2aad2f0() {
   return (neuron0x2a97960()*-0.0352051);
}

double NNfunction_ng_chi01::synapse0x2aad330() {
   return (neuron0x2a97ca0()*0.100183);
}

double NNfunction_ng_chi01::synapse0x2aad370() {
   return (neuron0x2a97fe0()*0.00098548);
}

double NNfunction_ng_chi01::synapse0x2aad3b0() {
   return (neuron0x2a98320()*0.089921);
}

double NNfunction_ng_chi01::synapse0x2aad3f0() {
   return (neuron0x2a98660()*-0.0606867);
}

double NNfunction_ng_chi01::synapse0x2aad430() {
   return (neuron0x2a989a0()*-0.23018);
}

double NNfunction_ng_chi01::synapse0x2aad470() {
   return (neuron0x2a98ce0()*0.553479);
}

double NNfunction_ng_chi01::synapse0x2aad4b0() {
   return (neuron0x2a99020()*-0.0690238);
}

double NNfunction_ng_chi01::synapse0x2aad4f0() {
   return (neuron0x2a99360()*0.165727);
}

double NNfunction_ng_chi01::synapse0x2aad530() {
   return (neuron0x2a996a0()*0.209521);
}

double NNfunction_ng_chi01::synapse0x2aad000() {
   return (neuron0x2a999e0()*0.0744712);
}

double NNfunction_ng_chi01::synapse0x2aad040() {
   return (neuron0x2a99f40()*0.069317);
}

double NNfunction_ng_chi01::synapse0x2aad680() {
   return (neuron0x2a9a280()*-0.00603138);
}

double NNfunction_ng_chi01::synapse0x2aad6c0() {
   return (neuron0x2a9a5c0()*0.0981502);
}

double NNfunction_ng_chi01::synapse0x2aad700() {
   return (neuron0x2a9a900()*-0.00235928);
}

double NNfunction_ng_chi01::synapse0x2aad740() {
   return (neuron0x2a9ac40()*0.074989);
}

double NNfunction_ng_chi01::synapse0x2aad780() {
   return (neuron0x2a9af80()*-0.0396156);
}

double NNfunction_ng_chi01::synapse0x2aad7c0() {
   return (neuron0x2a9b2c0()*0.10076);
}

double NNfunction_ng_chi01::synapse0x2aadb40() {
   return (neuron0x2a96670()*0.0594135);
}

double NNfunction_ng_chi01::synapse0x2aadb80() {
   return (neuron0x2a96920()*0.443825);
}

double NNfunction_ng_chi01::synapse0x2aadbc0() {
   return (neuron0x2a96c60()*-0.0667887);
}

double NNfunction_ng_chi01::synapse0x2aadc00() {
   return (neuron0x2a96fa0()*-0.106084);
}

double NNfunction_ng_chi01::synapse0x2aadc40() {
   return (neuron0x2a972e0()*0.02066);
}

double NNfunction_ng_chi01::synapse0x2aadc80() {
   return (neuron0x2a97620()*-0.0414653);
}

double NNfunction_ng_chi01::synapse0x2aadcc0() {
   return (neuron0x2a97960()*0.0451479);
}

double NNfunction_ng_chi01::synapse0x2aadd00() {
   return (neuron0x2a97ca0()*0.0627717);
}

double NNfunction_ng_chi01::synapse0x2aadd40() {
   return (neuron0x2a97fe0()*-0.0616295);
}

double NNfunction_ng_chi01::synapse0x2aadd80() {
   return (neuron0x2a98320()*-0.0352888);
}

double NNfunction_ng_chi01::synapse0x2aaddc0() {
   return (neuron0x2a98660()*-0.00441732);
}

double NNfunction_ng_chi01::synapse0x2aade00() {
   return (neuron0x2a989a0()*-0.259493);
}

double NNfunction_ng_chi01::synapse0x2aade40() {
   return (neuron0x2a98ce0()*-0.00257735);
}

double NNfunction_ng_chi01::synapse0x2aade80() {
   return (neuron0x2a99020()*0.0342917);
}

double NNfunction_ng_chi01::synapse0x2aadec0() {
   return (neuron0x2a99360()*2.94982);
}

double NNfunction_ng_chi01::synapse0x2aadf00() {
   return (neuron0x2a996a0()*-0.0122009);
}

double NNfunction_ng_chi01::synapse0x2aad990() {
   return (neuron0x2a999e0()*-0.0334081);
}

double NNfunction_ng_chi01::synapse0x2aad9d0() {
   return (neuron0x2a99f40()*-0.314977);
}

double NNfunction_ng_chi01::synapse0x2aae050() {
   return (neuron0x2a9a280()*-0.0443868);
}

double NNfunction_ng_chi01::synapse0x2aae090() {
   return (neuron0x2a9a5c0()*-0.0134153);
}

double NNfunction_ng_chi01::synapse0x2aae0d0() {
   return (neuron0x2a9a900()*-0.00144149);
}

double NNfunction_ng_chi01::synapse0x2aae110() {
   return (neuron0x2a9ac40()*0.00956194);
}

double NNfunction_ng_chi01::synapse0x2aae150() {
   return (neuron0x2a9af80()*-0.0102593);
}

double NNfunction_ng_chi01::synapse0x2aae190() {
   return (neuron0x2a9b2c0()*0.109065);
}

double NNfunction_ng_chi01::synapse0x2aae510() {
   return (neuron0x2a96670()*0.027617);
}

double NNfunction_ng_chi01::synapse0x2aae550() {
   return (neuron0x2a96920()*0.0141524);
}

double NNfunction_ng_chi01::synapse0x2aae590() {
   return (neuron0x2a96c60()*-0.104313);
}

double NNfunction_ng_chi01::synapse0x2aae5d0() {
   return (neuron0x2a96fa0()*-2.56467);
}

double NNfunction_ng_chi01::synapse0x2aae610() {
   return (neuron0x2a972e0()*-0.00871704);
}

double NNfunction_ng_chi01::synapse0x2aae650() {
   return (neuron0x2a97620()*0.0589735);
}

double NNfunction_ng_chi01::synapse0x2aae690() {
   return (neuron0x2a97960()*-0.0703656);
}

double NNfunction_ng_chi01::synapse0x2aae6d0() {
   return (neuron0x2a97ca0()*-0.0699235);
}

double NNfunction_ng_chi01::synapse0x2aae710() {
   return (neuron0x2a97fe0()*0.0003647);
}

double NNfunction_ng_chi01::synapse0x2aae750() {
   return (neuron0x2a98320()*-0.071285);
}

double NNfunction_ng_chi01::synapse0x2aae790() {
   return (neuron0x2a98660()*-0.0265171);
}

double NNfunction_ng_chi01::synapse0x2aae7d0() {
   return (neuron0x2a989a0()*-3.9804);
}

double NNfunction_ng_chi01::synapse0x2aae810() {
   return (neuron0x2a98ce0()*0.468046);
}

double NNfunction_ng_chi01::synapse0x2aae850() {
   return (neuron0x2a99020()*-0.0577269);
}

double NNfunction_ng_chi01::synapse0x2aae890() {
   return (neuron0x2a99360()*0.102181);
}

double NNfunction_ng_chi01::synapse0x2aae8d0() {
   return (neuron0x2a996a0()*0.0184209);
}

double NNfunction_ng_chi01::synapse0x2aae360() {
   return (neuron0x2a999e0()*-0.00185778);
}

double NNfunction_ng_chi01::synapse0x2aae3a0() {
   return (neuron0x2a99f40()*0.0663824);
}

double NNfunction_ng_chi01::synapse0x2aaea20() {
   return (neuron0x2a9a280()*0.0232683);
}

double NNfunction_ng_chi01::synapse0x2aaea60() {
   return (neuron0x2a9a5c0()*-0.00951421);
}

double NNfunction_ng_chi01::synapse0x2aaeaa0() {
   return (neuron0x2a9a900()*-0.00272698);
}

double NNfunction_ng_chi01::synapse0x2aaeae0() {
   return (neuron0x2a9ac40()*0.0147031);
}

double NNfunction_ng_chi01::synapse0x2aaeb20() {
   return (neuron0x2a9af80()*0.0429087);
}

double NNfunction_ng_chi01::synapse0x2aaeb60() {
   return (neuron0x2a9b2c0()*0.022497);
}

double NNfunction_ng_chi01::synapse0x2aaeee0() {
   return (neuron0x2a96670()*0.0844614);
}

double NNfunction_ng_chi01::synapse0x2aaef20() {
   return (neuron0x2a96920()*0.0821856);
}

double NNfunction_ng_chi01::synapse0x2aaef60() {
   return (neuron0x2a96c60()*-0.240609);
}

double NNfunction_ng_chi01::synapse0x2aaefa0() {
   return (neuron0x2a96fa0()*1.60012);
}

double NNfunction_ng_chi01::synapse0x2aaefe0() {
   return (neuron0x2a972e0()*0.114366);
}

double NNfunction_ng_chi01::synapse0x2aaf020() {
   return (neuron0x2a97620()*-0.0136975);
}

double NNfunction_ng_chi01::synapse0x2aaf060() {
   return (neuron0x2a97960()*0.0622322);
}

double NNfunction_ng_chi01::synapse0x2aaf0a0() {
   return (neuron0x2a97ca0()*0.0630177);
}

double NNfunction_ng_chi01::synapse0x2aaf0e0() {
   return (neuron0x2a97fe0()*0.0880522);
}

double NNfunction_ng_chi01::synapse0x2aaf120() {
   return (neuron0x2a98320()*0.0689797);
}

double NNfunction_ng_chi01::synapse0x2aaf160() {
   return (neuron0x2a98660()*-0.0108514);
}

double NNfunction_ng_chi01::synapse0x2aaf1a0() {
   return (neuron0x2a989a0()*0.217675);
}

double NNfunction_ng_chi01::synapse0x2aaf1e0() {
   return (neuron0x2a98ce0()*0.139268);
}

double NNfunction_ng_chi01::synapse0x2aaf220() {
   return (neuron0x2a99020()*0.0956995);
}

double NNfunction_ng_chi01::synapse0x2aaf260() {
   return (neuron0x2a99360()*0.193388);
}

double NNfunction_ng_chi01::synapse0x2aaf2a0() {
   return (neuron0x2a996a0()*0.0726691);
}

double NNfunction_ng_chi01::synapse0x2aaed30() {
   return (neuron0x2a999e0()*0.0603897);
}

double NNfunction_ng_chi01::synapse0x2aaed70() {
   return (neuron0x2a99f40()*0.0727678);
}

double NNfunction_ng_chi01::synapse0x2aaf3f0() {
   return (neuron0x2a9a280()*-0.00827513);
}

double NNfunction_ng_chi01::synapse0x2aaf430() {
   return (neuron0x2a9a5c0()*0.0291491);
}

double NNfunction_ng_chi01::synapse0x2aaf470() {
   return (neuron0x2a9a900()*-0.0150282);
}

double NNfunction_ng_chi01::synapse0x2aaf4b0() {
   return (neuron0x2a9ac40()*-0.010143);
}

double NNfunction_ng_chi01::synapse0x2aaf4f0() {
   return (neuron0x2a9af80()*-0.0501994);
}

double NNfunction_ng_chi01::synapse0x2aaf530() {
   return (neuron0x2a9b2c0()*0.0171845);
}

double NNfunction_ng_chi01::synapse0x2aaf8b0() {
   return (neuron0x2a96670()*0.111042);
}

double NNfunction_ng_chi01::synapse0x2aaf8f0() {
   return (neuron0x2a96920()*-0.301087);
}

double NNfunction_ng_chi01::synapse0x2aaf930() {
   return (neuron0x2a96c60()*0.525968);
}

double NNfunction_ng_chi01::synapse0x2aaf970() {
   return (neuron0x2a96fa0()*-0.0587333);
}

double NNfunction_ng_chi01::synapse0x2aaf9b0() {
   return (neuron0x2a972e0()*-0.0217752);
}

double NNfunction_ng_chi01::synapse0x2aaf9f0() {
   return (neuron0x2a97620()*-0.0182895);
}

double NNfunction_ng_chi01::synapse0x2aafa30() {
   return (neuron0x2a97960()*0.236035);
}

double NNfunction_ng_chi01::synapse0x2aafa70() {
   return (neuron0x2a97ca0()*-0.26326);
}

double NNfunction_ng_chi01::synapse0x2aafab0() {
   return (neuron0x2a97fe0()*-0.625944);
}

double NNfunction_ng_chi01::synapse0x2aafaf0() {
   return (neuron0x2a98320()*0.169612);
}

double NNfunction_ng_chi01::synapse0x2aafb30() {
   return (neuron0x2a98660()*0.170084);
}

double NNfunction_ng_chi01::synapse0x2aafb70() {
   return (neuron0x2a989a0()*-0.310881);
}

double NNfunction_ng_chi01::synapse0x2aafbb0() {
   return (neuron0x2a98ce0()*0.53769);
}

double NNfunction_ng_chi01::synapse0x2aafbf0() {
   return (neuron0x2a99020()*-0.935142);
}

double NNfunction_ng_chi01::synapse0x2aafc30() {
   return (neuron0x2a99360()*-0.11606);
}

double NNfunction_ng_chi01::synapse0x2aafc70() {
   return (neuron0x2a996a0()*0.0849662);
}

double NNfunction_ng_chi01::synapse0x2aaf700() {
   return (neuron0x2a999e0()*-0.468801);
}

double NNfunction_ng_chi01::synapse0x2aaf740() {
   return (neuron0x2a99f40()*0.445056);
}

double NNfunction_ng_chi01::synapse0x2aafdc0() {
   return (neuron0x2a9a280()*0.413136);
}

double NNfunction_ng_chi01::synapse0x2aafe00() {
   return (neuron0x2a9a5c0()*-0.139806);
}

double NNfunction_ng_chi01::synapse0x2aafe40() {
   return (neuron0x2a9a900()*0.261865);
}

double NNfunction_ng_chi01::synapse0x2aafe80() {
   return (neuron0x2a9ac40()*0.284208);
}

double NNfunction_ng_chi01::synapse0x2aafec0() {
   return (neuron0x2a9af80()*-0.767732);
}

double NNfunction_ng_chi01::synapse0x2aaff00() {
   return (neuron0x2a9b2c0()*-0.0204534);
}

double NNfunction_ng_chi01::synapse0x2ab0280() {
   return (neuron0x2a96670()*0.058161);
}

double NNfunction_ng_chi01::synapse0x2ab02c0() {
   return (neuron0x2a96920()*0.0361894);
}

double NNfunction_ng_chi01::synapse0x2ab0300() {
   return (neuron0x2a96c60()*-0.388038);
}

double NNfunction_ng_chi01::synapse0x2ab0340() {
   return (neuron0x2a96fa0()*0.0181988);
}

double NNfunction_ng_chi01::synapse0x2ab0380() {
   return (neuron0x2a972e0()*-0.0308176);
}

double NNfunction_ng_chi01::synapse0x2ab03c0() {
   return (neuron0x2a97620()*0.0475071);
}

double NNfunction_ng_chi01::synapse0x2ab0400() {
   return (neuron0x2a97960()*0.0274131);
}

double NNfunction_ng_chi01::synapse0x2ab0440() {
   return (neuron0x2a97ca0()*0.0237757);
}

double NNfunction_ng_chi01::synapse0x2ab0480() {
   return (neuron0x2a97fe0()*-0.00791688);
}

double NNfunction_ng_chi01::synapse0x2ab04c0() {
   return (neuron0x2a98320()*0.00837737);
}

double NNfunction_ng_chi01::synapse0x2ab0500() {
   return (neuron0x2a98660()*0.00375454);
}

double NNfunction_ng_chi01::synapse0x2ab0540() {
   return (neuron0x2a989a0()*-0.392177);
}

double NNfunction_ng_chi01::synapse0x2ab0580() {
   return (neuron0x2a98ce0()*0.00157742);
}

double NNfunction_ng_chi01::synapse0x2ab05c0() {
   return (neuron0x2a99020()*-0.00146075);
}

double NNfunction_ng_chi01::synapse0x2ab0600() {
   return (neuron0x2a99360()*0.148984);
}

double NNfunction_ng_chi01::synapse0x2ab0640() {
   return (neuron0x2a996a0()*-0.0229087);
}

double NNfunction_ng_chi01::synapse0x2ab00d0() {
   return (neuron0x2a999e0()*-0.040043);
}

double NNfunction_ng_chi01::synapse0x2ab0110() {
   return (neuron0x2a99f40()*0.081771);
}

double NNfunction_ng_chi01::synapse0x2ab0790() {
   return (neuron0x2a9a280()*-0.0117123);
}

double NNfunction_ng_chi01::synapse0x2ab07d0() {
   return (neuron0x2a9a5c0()*-0.0425361);
}

double NNfunction_ng_chi01::synapse0x2ab0810() {
   return (neuron0x2a9a900()*0.0454278);
}

double NNfunction_ng_chi01::synapse0x2ab0850() {
   return (neuron0x2a9ac40()*0.016857);
}

double NNfunction_ng_chi01::synapse0x2ab0890() {
   return (neuron0x2a9af80()*0.00323634);
}

double NNfunction_ng_chi01::synapse0x2ab08d0() {
   return (neuron0x2a9b2c0()*-4.97162);
}

double NNfunction_ng_chi01::synapse0x2ab0c50() {
   return (neuron0x2a96670()*-0.268881);
}

double NNfunction_ng_chi01::synapse0x2ab0c90() {
   return (neuron0x2a96920()*7.76029e-05);
}

double NNfunction_ng_chi01::synapse0x2ab0cd0() {
   return (neuron0x2a96c60()*-0.0649514);
}

double NNfunction_ng_chi01::synapse0x2ab0d10() {
   return (neuron0x2a96fa0()*2.35097);
}

double NNfunction_ng_chi01::synapse0x2ab0d50() {
   return (neuron0x2a972e0()*-0.0843069);
}

double NNfunction_ng_chi01::synapse0x2ab0d90() {
   return (neuron0x2a97620()*0.226856);
}

double NNfunction_ng_chi01::synapse0x2ab0dd0() {
   return (neuron0x2a97960()*-0.14644);
}

double NNfunction_ng_chi01::synapse0x2ab0e10() {
   return (neuron0x2a97ca0()*-0.134352);
}

double NNfunction_ng_chi01::synapse0x2ab0e50() {
   return (neuron0x2a97fe0()*-0.205145);
}

double NNfunction_ng_chi01::synapse0x2ab0e90() {
   return (neuron0x2a98320()*0.299772);
}

double NNfunction_ng_chi01::synapse0x2ab0ed0() {
   return (neuron0x2a98660()*-0.339351);
}

double NNfunction_ng_chi01::synapse0x2ab0f10() {
   return (neuron0x2a989a0()*0.054733);
}

double NNfunction_ng_chi01::synapse0x2ab0f50() {
   return (neuron0x2a98ce0()*-0.0134293);
}

double NNfunction_ng_chi01::synapse0x2ab0f90() {
   return (neuron0x2a99020()*-0.195075);
}

double NNfunction_ng_chi01::synapse0x2ab0fd0() {
   return (neuron0x2a99360()*1.06646);
}

double NNfunction_ng_chi01::synapse0x2ab1010() {
   return (neuron0x2a996a0()*-0.250981);
}

double NNfunction_ng_chi01::synapse0x2ab0aa0() {
   return (neuron0x2a999e0()*-0.270825);
}

double NNfunction_ng_chi01::synapse0x2ab0ae0() {
   return (neuron0x2a99f40()*-0.299574);
}

double NNfunction_ng_chi01::synapse0x2ab1160() {
   return (neuron0x2a9a280()*-0.0181444);
}

double NNfunction_ng_chi01::synapse0x2ab11a0() {
   return (neuron0x2a9a5c0()*0.0562995);
}

double NNfunction_ng_chi01::synapse0x2ab11e0() {
   return (neuron0x2a9a900()*-0.0753771);
}

double NNfunction_ng_chi01::synapse0x2ab1220() {
   return (neuron0x2a9ac40()*0.108316);
}

double NNfunction_ng_chi01::synapse0x2ab1260() {
   return (neuron0x2a9af80()*0.141971);
}

double NNfunction_ng_chi01::synapse0x2ab12a0() {
   return (neuron0x2a9b2c0()*-0.991411);
}

double NNfunction_ng_chi01::synapse0x2ab1620() {
   return (neuron0x2a96670()*-0.0770437);
}

double NNfunction_ng_chi01::synapse0x2ab1660() {
   return (neuron0x2a96920()*0.071173);
}

double NNfunction_ng_chi01::synapse0x2ab16a0() {
   return (neuron0x2a96c60()*-1.60375);
}

double NNfunction_ng_chi01::synapse0x2ab16e0() {
   return (neuron0x2a96fa0()*-0.00994059);
}

double NNfunction_ng_chi01::synapse0x2ab1720() {
   return (neuron0x2a972e0()*-0.0250935);
}

double NNfunction_ng_chi01::synapse0x2ab1760() {
   return (neuron0x2a97620()*0.00918465);
}

double NNfunction_ng_chi01::synapse0x2ab17a0() {
   return (neuron0x2a97960()*-0.0138405);
}

double NNfunction_ng_chi01::synapse0x2ab17e0() {
   return (neuron0x2a97ca0()*-0.0131519);
}

double NNfunction_ng_chi01::synapse0x2ab1820() {
   return (neuron0x2a97fe0()*-0.0222688);
}

double NNfunction_ng_chi01::synapse0x2ab1860() {
   return (neuron0x2a98320()*0.0144689);
}

double NNfunction_ng_chi01::synapse0x2ab18a0() {
   return (neuron0x2a98660()*-0.0117666);
}

double NNfunction_ng_chi01::synapse0x2ab18e0() {
   return (neuron0x2a989a0()*-0.178859);
}

double NNfunction_ng_chi01::synapse0x2ab1920() {
   return (neuron0x2a98ce0()*0.0241115);
}

double NNfunction_ng_chi01::synapse0x2ab1960() {
   return (neuron0x2a99020()*-0.00192271);
}

double NNfunction_ng_chi01::synapse0x2ab19a0() {
   return (neuron0x2a99360()*0.206762);
}

double NNfunction_ng_chi01::synapse0x2ab19e0() {
   return (neuron0x2a996a0()*0.0136226);
}

double NNfunction_ng_chi01::synapse0x2ab1470() {
   return (neuron0x2a999e0()*-0.0288689);
}

double NNfunction_ng_chi01::synapse0x2ab14b0() {
   return (neuron0x2a99f40()*0.0160001);
}

double NNfunction_ng_chi01::synapse0x2ab1b30() {
   return (neuron0x2a9a280()*-0.017848);
}

double NNfunction_ng_chi01::synapse0x2ab1b70() {
   return (neuron0x2a9a5c0()*-0.013585);
}

double NNfunction_ng_chi01::synapse0x2ab1bb0() {
   return (neuron0x2a9a900()*0.0381845);
}

double NNfunction_ng_chi01::synapse0x2ab1bf0() {
   return (neuron0x2a9ac40()*0.0264237);
}

double NNfunction_ng_chi01::synapse0x2ab1c30() {
   return (neuron0x2a9af80()*-0.0230088);
}

double NNfunction_ng_chi01::synapse0x2ab1c70() {
   return (neuron0x2a9b2c0()*-7.46022);
}

double NNfunction_ng_chi01::synapse0x2ab1ff0() {
   return (neuron0x2a96670()*0.12741);
}

double NNfunction_ng_chi01::synapse0x2aa65c0() {
   return (neuron0x2a96920()*-0.0996503);
}

double NNfunction_ng_chi01::synapse0x2aa6600() {
   return (neuron0x2a96c60()*-0.267688);
}

double NNfunction_ng_chi01::synapse0x2aa6640() {
   return (neuron0x2a96fa0()*-2.14564);
}

double NNfunction_ng_chi01::synapse0x2aa6890() {
   return (neuron0x2a972e0()*0.331849);
}

double NNfunction_ng_chi01::synapse0x2aa68d0() {
   return (neuron0x2a97620()*0.10071);
}

double NNfunction_ng_chi01::synapse0x2aa6910() {
   return (neuron0x2a97960()*0.280905);
}

double NNfunction_ng_chi01::synapse0x2aa6b60() {
   return (neuron0x2a97ca0()*-0.115887);
}

double NNfunction_ng_chi01::synapse0x2aa6ba0() {
   return (neuron0x2a97fe0()*-0.396726);
}

double NNfunction_ng_chi01::synapse0x2aa6df0() {
   return (neuron0x2a98320()*0.207713);
}

double NNfunction_ng_chi01::synapse0x2aa6e30() {
   return (neuron0x2a98660()*-0.0332429);
}

double NNfunction_ng_chi01::synapse0x2aa6e70() {
   return (neuron0x2a989a0()*0.0331776);
}

double NNfunction_ng_chi01::synapse0x2aa70c0() {
   return (neuron0x2a98ce0()*-0.325583);
}

double NNfunction_ng_chi01::synapse0x2aa7100() {
   return (neuron0x2a99020()*-0.14031);
}

double NNfunction_ng_chi01::synapse0x2aa7350() {
   return (neuron0x2a99360()*-0.847192);
}

double NNfunction_ng_chi01::synapse0x2aa7390() {
   return (neuron0x2a996a0()*-0.416435);
}

double NNfunction_ng_chi01::synapse0x2ab1e40() {
   return (neuron0x2a999e0()*-0.0179239);
}

double NNfunction_ng_chi01::synapse0x2ab1e80() {
   return (neuron0x2a99f40()*-0.653418);
}

double NNfunction_ng_chi01::synapse0x2aa74e0() {
   return (neuron0x2a9a280()*-0.417119);
}

double NNfunction_ng_chi01::synapse0x2aa79f0() {
   return (neuron0x2a9a5c0()*-0.0226162);
}

double NNfunction_ng_chi01::synapse0x2aa7a30() {
   return (neuron0x2a9a900()*0.0826162);
}

double NNfunction_ng_chi01::synapse0x2aa7a70() {
   return (neuron0x2a9ac40()*0.0757395);
}

double NNfunction_ng_chi01::synapse0x2aa7cc0() {
   return (neuron0x2a9af80()*-0.169363);
}

double NNfunction_ng_chi01::synapse0x2aa7d00() {
   return (neuron0x2a9b2c0()*-0.449091);
}

double NNfunction_ng_chi01::synapse0x2aa75b0() {
   return (neuron0x2a96670()*0.00113463);
}

double NNfunction_ng_chi01::synapse0x2aa75f0() {
   return (neuron0x2a96920()*-0.0023377);
}

double NNfunction_ng_chi01::synapse0x2aa7630() {
   return (neuron0x2a96c60()*-0.710442);
}

double NNfunction_ng_chi01::synapse0x2aa7670() {
   return (neuron0x2a96fa0()*-0.168719);
}

double NNfunction_ng_chi01::synapse0x2aa7ff0() {
   return (neuron0x2a972e0()*0.0570557);
}

double NNfunction_ng_chi01::synapse0x2ab4340() {
   return (neuron0x2a97620()*-0.0438715);
}

double NNfunction_ng_chi01::synapse0x2ab4380() {
   return (neuron0x2a97960()*0.0638419);
}

double NNfunction_ng_chi01::synapse0x2ab43c0() {
   return (neuron0x2a97ca0()*0.0687139);
}

double NNfunction_ng_chi01::synapse0x2ab4400() {
   return (neuron0x2a97fe0()*0.00968976);
}

double NNfunction_ng_chi01::synapse0x2ab4440() {
   return (neuron0x2a98320()*-0.0442959);
}

double NNfunction_ng_chi01::synapse0x2ab4480() {
   return (neuron0x2a98660()*0.00677964);
}

double NNfunction_ng_chi01::synapse0x2ab44c0() {
   return (neuron0x2a989a0()*-0.377147);
}

double NNfunction_ng_chi01::synapse0x2ab4500() {
   return (neuron0x2a98ce0()*-0.308559);
}

double NNfunction_ng_chi01::synapse0x2ab4540() {
   return (neuron0x2a99020()*-0.0532177);
}

double NNfunction_ng_chi01::synapse0x2ab4580() {
   return (neuron0x2a99360()*-0.190264);
}

double NNfunction_ng_chi01::synapse0x2ab45c0() {
   return (neuron0x2a996a0()*0.0391742);
}

double NNfunction_ng_chi01::synapse0x2aa7ed0() {
   return (neuron0x2a999e0()*0.00834874);
}

double NNfunction_ng_chi01::synapse0x2aa7f10() {
   return (neuron0x2a99f40()*-0.0616123);
}

double NNfunction_ng_chi01::synapse0x2ab4710() {
   return (neuron0x2a9a280()*0.050998);
}

double NNfunction_ng_chi01::synapse0x2ab4750() {
   return (neuron0x2a9a5c0()*-0.00221575);
}

double NNfunction_ng_chi01::synapse0x2ab4790() {
   return (neuron0x2a9a900()*0.0585013);
}

double NNfunction_ng_chi01::synapse0x2ab47d0() {
   return (neuron0x2a9ac40()*0.00709317);
}

double NNfunction_ng_chi01::synapse0x2ab4810() {
   return (neuron0x2a9af80()*-0.0118241);
}

double NNfunction_ng_chi01::synapse0x2ab4850() {
   return (neuron0x2a9b2c0()*0.0475397);
}

double NNfunction_ng_chi01::synapse0x2ab4bd0() {
   return (neuron0x2a96670()*-0.0218001);
}

double NNfunction_ng_chi01::synapse0x2ab4c10() {
   return (neuron0x2a96920()*-0.068572);
}

double NNfunction_ng_chi01::synapse0x2ab4c50() {
   return (neuron0x2a96c60()*-0.302694);
}

double NNfunction_ng_chi01::synapse0x2ab4c90() {
   return (neuron0x2a96fa0()*-3.58557);
}

double NNfunction_ng_chi01::synapse0x2ab4cd0() {
   return (neuron0x2a972e0()*0.00940611);
}

double NNfunction_ng_chi01::synapse0x2ab4d10() {
   return (neuron0x2a97620()*0.0434812);
}

double NNfunction_ng_chi01::synapse0x2ab4d50() {
   return (neuron0x2a97960()*0.139656);
}

double NNfunction_ng_chi01::synapse0x2ab4d90() {
   return (neuron0x2a97ca0()*-0.0121253);
}

double NNfunction_ng_chi01::synapse0x2ab4dd0() {
   return (neuron0x2a97fe0()*-0.069759);
}

double NNfunction_ng_chi01::synapse0x2ab4e10() {
   return (neuron0x2a98320()*0.0365514);
}

double NNfunction_ng_chi01::synapse0x2ab4e50() {
   return (neuron0x2a98660()*0.126094);
}

double NNfunction_ng_chi01::synapse0x2ab4e90() {
   return (neuron0x2a989a0()*0.413379);
}

double NNfunction_ng_chi01::synapse0x2ab4ed0() {
   return (neuron0x2a98ce0()*-1.25571);
}

double NNfunction_ng_chi01::synapse0x2ab4f10() {
   return (neuron0x2a99020()*-0.501656);
}

double NNfunction_ng_chi01::synapse0x2ab4f50() {
   return (neuron0x2a99360()*0.178427);
}

double NNfunction_ng_chi01::synapse0x2ab4f90() {
   return (neuron0x2a996a0()*0.0355811);
}

double NNfunction_ng_chi01::synapse0x2ab4a20() {
   return (neuron0x2a999e0()*0.0608593);
}

double NNfunction_ng_chi01::synapse0x2ab4a60() {
   return (neuron0x2a99f40()*0.490415);
}

double NNfunction_ng_chi01::synapse0x2ab50e0() {
   return (neuron0x2a9a280()*0.105214);
}

double NNfunction_ng_chi01::synapse0x2ab5120() {
   return (neuron0x2a9a5c0()*-0.165758);
}

double NNfunction_ng_chi01::synapse0x2ab5160() {
   return (neuron0x2a9a900()*0.00588995);
}

double NNfunction_ng_chi01::synapse0x2ab51a0() {
   return (neuron0x2a9ac40()*0.112081);
}

double NNfunction_ng_chi01::synapse0x2ab51e0() {
   return (neuron0x2a9af80()*0.186162);
}

double NNfunction_ng_chi01::synapse0x2ab5220() {
   return (neuron0x2a9b2c0()*0.165283);
}

double NNfunction_ng_chi01::synapse0x2ab55a0() {
   return (neuron0x2a96670()*-0.0302049);
}

double NNfunction_ng_chi01::synapse0x2ab55e0() {
   return (neuron0x2a96920()*0.0309072);
}

double NNfunction_ng_chi01::synapse0x2ab5620() {
   return (neuron0x2a96c60()*0.0545639);
}

double NNfunction_ng_chi01::synapse0x2ab5660() {
   return (neuron0x2a96fa0()*-2.23086);
}

double NNfunction_ng_chi01::synapse0x2ab56a0() {
   return (neuron0x2a972e0()*0.0533443);
}

double NNfunction_ng_chi01::synapse0x2ab56e0() {
   return (neuron0x2a97620()*-0.0186408);
}

double NNfunction_ng_chi01::synapse0x2ab5720() {
   return (neuron0x2a97960()*0.124184);
}

double NNfunction_ng_chi01::synapse0x2ab5760() {
   return (neuron0x2a97ca0()*0.101082);
}

double NNfunction_ng_chi01::synapse0x2ab57a0() {
   return (neuron0x2a97fe0()*-0.00232015);
}

double NNfunction_ng_chi01::synapse0x2ab57e0() {
   return (neuron0x2a98320()*0.028946);
}

double NNfunction_ng_chi01::synapse0x2ab5820() {
   return (neuron0x2a98660()*0.0378648);
}

double NNfunction_ng_chi01::synapse0x2ab5860() {
   return (neuron0x2a989a0()*3.66615);
}

double NNfunction_ng_chi01::synapse0x2ab58a0() {
   return (neuron0x2a98ce0()*-0.587786);
}

double NNfunction_ng_chi01::synapse0x2ab58e0() {
   return (neuron0x2a99020()*0.0166332);
}

double NNfunction_ng_chi01::synapse0x2ab5920() {
   return (neuron0x2a99360()*-0.135787);
}

double NNfunction_ng_chi01::synapse0x2ab5960() {
   return (neuron0x2a996a0()*0.0172597);
}

double NNfunction_ng_chi01::synapse0x2ab53f0() {
   return (neuron0x2a999e0()*0.111489);
}

double NNfunction_ng_chi01::synapse0x2ab5430() {
   return (neuron0x2a99f40()*-0.0538654);
}

double NNfunction_ng_chi01::synapse0x2ab5ab0() {
   return (neuron0x2a9a280()*-0.0163175);
}

double NNfunction_ng_chi01::synapse0x2ab5af0() {
   return (neuron0x2a9a5c0()*-0.042986);
}

double NNfunction_ng_chi01::synapse0x2ab5b30() {
   return (neuron0x2a9a900()*-0.00943141);
}

double NNfunction_ng_chi01::synapse0x2ab5b70() {
   return (neuron0x2a9ac40()*-0.00637532);
}

double NNfunction_ng_chi01::synapse0x2ab5bb0() {
   return (neuron0x2a9af80()*0.0436207);
}

double NNfunction_ng_chi01::synapse0x2ab5bf0() {
   return (neuron0x2a9b2c0()*-0.103916);
}

double NNfunction_ng_chi01::synapse0x2ab5f70() {
   return (neuron0x2a96670()*0.0547129);
}

double NNfunction_ng_chi01::synapse0x2ab5fb0() {
   return (neuron0x2a96920()*0.00534926);
}

double NNfunction_ng_chi01::synapse0x2ab5ff0() {
   return (neuron0x2a96c60()*-0.133529);
}

double NNfunction_ng_chi01::synapse0x2ab6030() {
   return (neuron0x2a96fa0()*-0.0773015);
}

double NNfunction_ng_chi01::synapse0x2ab6070() {
   return (neuron0x2a972e0()*-0.0190292);
}

double NNfunction_ng_chi01::synapse0x2ab60b0() {
   return (neuron0x2a97620()*0.00318983);
}

double NNfunction_ng_chi01::synapse0x2ab60f0() {
   return (neuron0x2a97960()*-0.0113685);
}

double NNfunction_ng_chi01::synapse0x2ab6130() {
   return (neuron0x2a97ca0()*-0.0106684);
}

double NNfunction_ng_chi01::synapse0x2ab6170() {
   return (neuron0x2a97fe0()*0.0107987);
}

double NNfunction_ng_chi01::synapse0x2ab61b0() {
   return (neuron0x2a98320()*-0.00375064);
}

double NNfunction_ng_chi01::synapse0x2ab61f0() {
   return (neuron0x2a98660()*-0.000766797);
}

double NNfunction_ng_chi01::synapse0x2ab6230() {
   return (neuron0x2a989a0()*0.00981557);
}

double NNfunction_ng_chi01::synapse0x2ab6270() {
   return (neuron0x2a98ce0()*-0.00568262);
}

double NNfunction_ng_chi01::synapse0x2ab62b0() {
   return (neuron0x2a99020()*-0.0014379);
}

double NNfunction_ng_chi01::synapse0x2ab62f0() {
   return (neuron0x2a99360()*0.0060212);
}

double NNfunction_ng_chi01::synapse0x2ab6330() {
   return (neuron0x2a996a0()*-0.0181509);
}

double NNfunction_ng_chi01::synapse0x2ab5dc0() {
   return (neuron0x2a999e0()*-0.00793093);
}

double NNfunction_ng_chi01::synapse0x2ab5e00() {
   return (neuron0x2a99f40()*0.00848508);
}

double NNfunction_ng_chi01::synapse0x2ab6480() {
   return (neuron0x2a9a280()*-0.0101953);
}

double NNfunction_ng_chi01::synapse0x2ab64c0() {
   return (neuron0x2a9a5c0()*-0.00339273);
}

double NNfunction_ng_chi01::synapse0x2ab6500() {
   return (neuron0x2a9a900()*0.00783935);
}

double NNfunction_ng_chi01::synapse0x2ab6540() {
   return (neuron0x2a9ac40()*0.0142925);
}

double NNfunction_ng_chi01::synapse0x2ab6580() {
   return (neuron0x2a9af80()*0.00480353);
}

double NNfunction_ng_chi01::synapse0x2ab65c0() {
   return (neuron0x2a9b2c0()*-23.7341);
}

double NNfunction_ng_chi01::synapse0x2ab6940() {
   return (neuron0x2a96670()*0.213429);
}

double NNfunction_ng_chi01::synapse0x2ab6980() {
   return (neuron0x2a96920()*-0.371463);
}

double NNfunction_ng_chi01::synapse0x2ab69c0() {
   return (neuron0x2a96c60()*1.71714);
}

double NNfunction_ng_chi01::synapse0x2ab6a00() {
   return (neuron0x2a96fa0()*-0.222392);
}

double NNfunction_ng_chi01::synapse0x2ab6a40() {
   return (neuron0x2a972e0()*-0.0328287);
}

double NNfunction_ng_chi01::synapse0x2ab6a80() {
   return (neuron0x2a97620()*-0.0255819);
}

double NNfunction_ng_chi01::synapse0x2ab6ac0() {
   return (neuron0x2a97960()*-0.102182);
}

double NNfunction_ng_chi01::synapse0x2ab6b00() {
   return (neuron0x2a97ca0()*0.0247725);
}

double NNfunction_ng_chi01::synapse0x2ab6b40() {
   return (neuron0x2a97fe0()*0.0441485);
}

double NNfunction_ng_chi01::synapse0x2ab6b80() {
   return (neuron0x2a98320()*0.0398885);
}

double NNfunction_ng_chi01::synapse0x2ab6bc0() {
   return (neuron0x2a98660()*0.0672537);
}

double NNfunction_ng_chi01::synapse0x2ab6c00() {
   return (neuron0x2a989a0()*1.8702);
}

double NNfunction_ng_chi01::synapse0x2ab6c40() {
   return (neuron0x2a98ce0()*-0.00445843);
}

double NNfunction_ng_chi01::synapse0x2ab6c80() {
   return (neuron0x2a99020()*-0.125463);
}

double NNfunction_ng_chi01::synapse0x2ab6cc0() {
   return (neuron0x2a99360()*0.13368);
}

double NNfunction_ng_chi01::synapse0x2ab6d00() {
   return (neuron0x2a996a0()*0.0265966);
}

double NNfunction_ng_chi01::synapse0x2ab6790() {
   return (neuron0x2a999e0()*0.0824312);
}

double NNfunction_ng_chi01::synapse0x2ab67d0() {
   return (neuron0x2a99f40()*-0.0283732);
}

double NNfunction_ng_chi01::synapse0x2ab6e50() {
   return (neuron0x2a9a280()*0.0863877);
}

double NNfunction_ng_chi01::synapse0x2ab6e90() {
   return (neuron0x2a9a5c0()*0.0267115);
}

double NNfunction_ng_chi01::synapse0x2ab6ed0() {
   return (neuron0x2a9a900()*-0.0239447);
}

double NNfunction_ng_chi01::synapse0x2ab6f10() {
   return (neuron0x2a9ac40()*-0.0329266);
}

double NNfunction_ng_chi01::synapse0x2ab6f50() {
   return (neuron0x2a9af80()*0.05703);
}

double NNfunction_ng_chi01::synapse0x2ab6f90() {
   return (neuron0x2a9b2c0()*0.483054);
}

double NNfunction_ng_chi01::synapse0x2ab7310() {
   return (neuron0x2a96670()*-0.0189597);
}

double NNfunction_ng_chi01::synapse0x2ab7350() {
   return (neuron0x2a96920()*-8.40581);
}

double NNfunction_ng_chi01::synapse0x2ab7390() {
   return (neuron0x2a96c60()*1.98678);
}

double NNfunction_ng_chi01::synapse0x2ab73d0() {
   return (neuron0x2a96fa0()*-0.0517117);
}

double NNfunction_ng_chi01::synapse0x2ab7410() {
   return (neuron0x2a972e0()*0.00349871);
}

double NNfunction_ng_chi01::synapse0x2ab7450() {
   return (neuron0x2a97620()*-0.0037098);
}

double NNfunction_ng_chi01::synapse0x2ab7490() {
   return (neuron0x2a97960()*-0.0378761);
}

double NNfunction_ng_chi01::synapse0x2ab74d0() {
   return (neuron0x2a97ca0()*0.0111414);
}

double NNfunction_ng_chi01::synapse0x2ab7510() {
   return (neuron0x2a97fe0()*-0.0302328);
}

double NNfunction_ng_chi01::synapse0x2ab7550() {
   return (neuron0x2a98320()*-0.0248519);
}

double NNfunction_ng_chi01::synapse0x2ab7590() {
   return (neuron0x2a98660()*-0.0264369);
}

double NNfunction_ng_chi01::synapse0x2ab75d0() {
   return (neuron0x2a989a0()*0.314248);
}

double NNfunction_ng_chi01::synapse0x2ab7610() {
   return (neuron0x2a98ce0()*0.0223745);
}

double NNfunction_ng_chi01::synapse0x2ab7650() {
   return (neuron0x2a99020()*0.043403);
}

double NNfunction_ng_chi01::synapse0x2ab7690() {
   return (neuron0x2a99360()*-0.0234579);
}

double NNfunction_ng_chi01::synapse0x2ab76d0() {
   return (neuron0x2a996a0()*0.0186744);
}

double NNfunction_ng_chi01::synapse0x2ab7160() {
   return (neuron0x2a999e0()*0.00565087);
}

double NNfunction_ng_chi01::synapse0x2ab71a0() {
   return (neuron0x2a99f40()*0.046061);
}

double NNfunction_ng_chi01::synapse0x2ab7820() {
   return (neuron0x2a9a280()*0.0215197);
}

double NNfunction_ng_chi01::synapse0x2ab7860() {
   return (neuron0x2a9a5c0()*-0.024328);
}

double NNfunction_ng_chi01::synapse0x2ab78a0() {
   return (neuron0x2a9a900()*-0.015127);
}

double NNfunction_ng_chi01::synapse0x2ab78e0() {
   return (neuron0x2a9ac40()*-0.0443293);
}

double NNfunction_ng_chi01::synapse0x2ab7920() {
   return (neuron0x2a9af80()*-0.0124062);
}

double NNfunction_ng_chi01::synapse0x2ab7960() {
   return (neuron0x2a9b2c0()*-0.161063);
}

double NNfunction_ng_chi01::synapse0x2ab7ce0() {
   return (neuron0x2a96670()*0.886541);
}

double NNfunction_ng_chi01::synapse0x2ab7d20() {
   return (neuron0x2a96920()*-0.0273882);
}

double NNfunction_ng_chi01::synapse0x2ab7d60() {
   return (neuron0x2a96c60()*0.0173746);
}

double NNfunction_ng_chi01::synapse0x2ab7da0() {
   return (neuron0x2a96fa0()*-1.22202);
}

double NNfunction_ng_chi01::synapse0x2ab7de0() {
   return (neuron0x2a972e0()*-0.106385);
}

double NNfunction_ng_chi01::synapse0x2ab7e20() {
   return (neuron0x2a97620()*0.063671);
}

double NNfunction_ng_chi01::synapse0x2ab7e60() {
   return (neuron0x2a97960()*0.33604);
}

double NNfunction_ng_chi01::synapse0x2ab7ea0() {
   return (neuron0x2a97ca0()*0.073384);
}

double NNfunction_ng_chi01::synapse0x2ab7ee0() {
   return (neuron0x2a97fe0()*-0.488705);
}

double NNfunction_ng_chi01::synapse0x2ab7f20() {
   return (neuron0x2a98320()*-0.046384);
}

double NNfunction_ng_chi01::synapse0x2ab7f60() {
   return (neuron0x2a98660()*0.448052);
}

double NNfunction_ng_chi01::synapse0x2ab7fa0() {
   return (neuron0x2a989a0()*-0.497112);
}

double NNfunction_ng_chi01::synapse0x2ab7fe0() {
   return (neuron0x2a98ce0()*-0.0870942);
}

double NNfunction_ng_chi01::synapse0x2ab8020() {
   return (neuron0x2a99020()*-0.187066);
}

double NNfunction_ng_chi01::synapse0x2ab8060() {
   return (neuron0x2a99360()*0.0326635);
}

double NNfunction_ng_chi01::synapse0x2ab80a0() {
   return (neuron0x2a996a0()*-0.696837);
}

double NNfunction_ng_chi01::synapse0x2ab7b30() {
   return (neuron0x2a999e0()*0.140361);
}

double NNfunction_ng_chi01::synapse0x2ab7b70() {
   return (neuron0x2a99f40()*0.0665688);
}

double NNfunction_ng_chi01::synapse0x2ab81f0() {
   return (neuron0x2a9a280()*-0.0972842);
}

double NNfunction_ng_chi01::synapse0x2ab8230() {
   return (neuron0x2a9a5c0()*-0.217447);
}

double NNfunction_ng_chi01::synapse0x2ab8270() {
   return (neuron0x2a9a900()*0.444256);
}

double NNfunction_ng_chi01::synapse0x2ab82b0() {
   return (neuron0x2a9ac40()*0.194272);
}

double NNfunction_ng_chi01::synapse0x2ab82f0() {
   return (neuron0x2a9af80()*-0.127074);
}

double NNfunction_ng_chi01::synapse0x2ab8330() {
   return (neuron0x2a9b2c0()*0.694404);
}

double NNfunction_ng_chi01::synapse0x2ab86b0() {
   return (neuron0x2a96670()*0.00531149);
}

double NNfunction_ng_chi01::synapse0x2ab86f0() {
   return (neuron0x2a96920()*-6.58069);
}

double NNfunction_ng_chi01::synapse0x2ab8730() {
   return (neuron0x2a96c60()*-2.04709);
}

double NNfunction_ng_chi01::synapse0x2ab8770() {
   return (neuron0x2a96fa0()*0.0511242);
}

double NNfunction_ng_chi01::synapse0x2ab87b0() {
   return (neuron0x2a972e0()*-0.0406701);
}

double NNfunction_ng_chi01::synapse0x2ab87f0() {
   return (neuron0x2a97620()*0.036789);
}

double NNfunction_ng_chi01::synapse0x2ab8830() {
   return (neuron0x2a97960()*0.0445259);
}

double NNfunction_ng_chi01::synapse0x2ab8870() {
   return (neuron0x2a97ca0()*0.00956183);
}

double NNfunction_ng_chi01::synapse0x2ab88b0() {
   return (neuron0x2a97fe0()*-0.0274284);
}

double NNfunction_ng_chi01::synapse0x2ab88f0() {
   return (neuron0x2a98320()*0.00459459);
}

double NNfunction_ng_chi01::synapse0x2ab8930() {
   return (neuron0x2a98660()*0.0371015);
}

double NNfunction_ng_chi01::synapse0x2ab8970() {
   return (neuron0x2a989a0()*-0.260192);
}

double NNfunction_ng_chi01::synapse0x2ab89b0() {
   return (neuron0x2a98ce0()*-0.0115791);
}

double NNfunction_ng_chi01::synapse0x2ab89f0() {
   return (neuron0x2a99020()*-0.0462357);
}

double NNfunction_ng_chi01::synapse0x2ab8a30() {
   return (neuron0x2a99360()*0.11638);
}

double NNfunction_ng_chi01::synapse0x2ab8a70() {
   return (neuron0x2a996a0()*-0.0258031);
}

double NNfunction_ng_chi01::synapse0x2ab8500() {
   return (neuron0x2a999e0()*0.0145778);
}

double NNfunction_ng_chi01::synapse0x2ab8540() {
   return (neuron0x2a99f40()*-5.82678e-05);
}

double NNfunction_ng_chi01::synapse0x2ab8bc0() {
   return (neuron0x2a9a280()*-0.00436726);
}

double NNfunction_ng_chi01::synapse0x2ab8c00() {
   return (neuron0x2a9a5c0()*0.0429792);
}

double NNfunction_ng_chi01::synapse0x2ab8c40() {
   return (neuron0x2a9a900()*-0.00450814);
}

double NNfunction_ng_chi01::synapse0x2ab8c80() {
   return (neuron0x2a9ac40()*0.0393404);
}

double NNfunction_ng_chi01::synapse0x2ab8cc0() {
   return (neuron0x2a9af80()*0.0111197);
}

double NNfunction_ng_chi01::synapse0x2ab8d00() {
   return (neuron0x2a9b2c0()*0.200136);
}

double NNfunction_ng_chi01::synapse0x2aa17b0() {
   return (neuron0x2a96670()*-0.0889737);
}

double NNfunction_ng_chi01::synapse0x2aa17f0() {
   return (neuron0x2a96920()*-0.020355);
}

double NNfunction_ng_chi01::synapse0x2aa1830() {
   return (neuron0x2a96c60()*-0.358487);
}

double NNfunction_ng_chi01::synapse0x2aa1870() {
   return (neuron0x2a96fa0()*0.0987449);
}

double NNfunction_ng_chi01::synapse0x2aa18b0() {
   return (neuron0x2a972e0()*0.271845);
}

double NNfunction_ng_chi01::synapse0x2aa18f0() {
   return (neuron0x2a97620()*0.261175);
}

double NNfunction_ng_chi01::synapse0x2aa1930() {
   return (neuron0x2a97960()*-0.150289);
}

double NNfunction_ng_chi01::synapse0x2aa1970() {
   return (neuron0x2a97ca0()*-0.127225);
}

double NNfunction_ng_chi01::synapse0x2ab9490() {
   return (neuron0x2a97fe0()*0.205948);
}

double NNfunction_ng_chi01::synapse0x2ab94d0() {
   return (neuron0x2a98320()*-0.116534);
}

double NNfunction_ng_chi01::synapse0x2ab9510() {
   return (neuron0x2a98660()*-0.207416);
}

double NNfunction_ng_chi01::synapse0x2ab9550() {
   return (neuron0x2a989a0()*1.18387);
}

double NNfunction_ng_chi01::synapse0x2ab9590() {
   return (neuron0x2a98ce0()*0.109879);
}

double NNfunction_ng_chi01::synapse0x2ab95d0() {
   return (neuron0x2a99020()*-0.392161);
}

double NNfunction_ng_chi01::synapse0x2ab9610() {
   return (neuron0x2a99360()*0.582171);
}

double NNfunction_ng_chi01::synapse0x2ab9650() {
   return (neuron0x2a996a0()*0.512162);
}

double NNfunction_ng_chi01::synapse0x2ab8ed0() {
   return (neuron0x2a999e0()*0.415146);
}

double NNfunction_ng_chi01::synapse0x2ab8f10() {
   return (neuron0x2a99f40()*-0.38207);
}

double NNfunction_ng_chi01::synapse0x2ab97a0() {
   return (neuron0x2a9a280()*0.068741);
}

double NNfunction_ng_chi01::synapse0x2ab97e0() {
   return (neuron0x2a9a5c0()*-0.182921);
}

double NNfunction_ng_chi01::synapse0x2ab9820() {
   return (neuron0x2a9a900()*0.0645712);
}

double NNfunction_ng_chi01::synapse0x2ab9860() {
   return (neuron0x2a9ac40()*0.152894);
}

double NNfunction_ng_chi01::synapse0x2ab98a0() {
   return (neuron0x2a9af80()*-0.221998);
}

double NNfunction_ng_chi01::synapse0x2ab98e0() {
   return (neuron0x2a9b2c0()*0.445864);
}

double NNfunction_ng_chi01::synapse0x2ab9c60() {
   return (neuron0x2a96670()*0.0395849);
}

double NNfunction_ng_chi01::synapse0x2ab9ca0() {
   return (neuron0x2a96920()*-8.47692);
}

double NNfunction_ng_chi01::synapse0x2ab9ce0() {
   return (neuron0x2a96c60()*-0.670219);
}

double NNfunction_ng_chi01::synapse0x2ab9d20() {
   return (neuron0x2a96fa0()*-0.0156784);
}

double NNfunction_ng_chi01::synapse0x2ab9d60() {
   return (neuron0x2a972e0()*0.019452);
}

double NNfunction_ng_chi01::synapse0x2ab9da0() {
   return (neuron0x2a97620()*0.00382971);
}

double NNfunction_ng_chi01::synapse0x2ab9de0() {
   return (neuron0x2a97960()*-0.0167554);
}

double NNfunction_ng_chi01::synapse0x2ab9e20() {
   return (neuron0x2a97ca0()*-0.0128094);
}

double NNfunction_ng_chi01::synapse0x2ab9e60() {
   return (neuron0x2a97fe0()*-0.0104308);
}

double NNfunction_ng_chi01::synapse0x2ab9ea0() {
   return (neuron0x2a98320()*-0.00185777);
}

double NNfunction_ng_chi01::synapse0x2ab9ee0() {
   return (neuron0x2a98660()*0.00544902);
}

double NNfunction_ng_chi01::synapse0x2ab9f20() {
   return (neuron0x2a989a0()*-0.199039);
}

double NNfunction_ng_chi01::synapse0x2ab9f60() {
   return (neuron0x2a98ce0()*-0.0274915);
}

double NNfunction_ng_chi01::synapse0x2ab9fa0() {
   return (neuron0x2a99020()*0.0084923);
}

double NNfunction_ng_chi01::synapse0x2ab9fe0() {
   return (neuron0x2a99360()*0.181416);
}

double NNfunction_ng_chi01::synapse0x2aba020() {
   return (neuron0x2a996a0()*0.0435937);
}

double NNfunction_ng_chi01::synapse0x2ab9ab0() {
   return (neuron0x2a999e0()*0.0201927);
}

double NNfunction_ng_chi01::synapse0x2ab9af0() {
   return (neuron0x2a99f40()*0.0098727);
}

double NNfunction_ng_chi01::synapse0x2aba170() {
   return (neuron0x2a9a280()*0.0170369);
}

double NNfunction_ng_chi01::synapse0x2aba1b0() {
   return (neuron0x2a9a5c0()*-0.029681);
}

double NNfunction_ng_chi01::synapse0x2aba1f0() {
   return (neuron0x2a9a900()*0.0559744);
}

double NNfunction_ng_chi01::synapse0x2aba230() {
   return (neuron0x2a9ac40()*-0.00715914);
}

double NNfunction_ng_chi01::synapse0x2aba270() {
   return (neuron0x2a9af80()*-0.0233352);
}

double NNfunction_ng_chi01::synapse0x2aba2b0() {
   return (neuron0x2a9b2c0()*-0.0583063);
}

double NNfunction_ng_chi01::synapse0x2aba630() {
   return (neuron0x2a96670()*-0.0026322);
}

double NNfunction_ng_chi01::synapse0x2aba670() {
   return (neuron0x2a96920()*-5.83563);
}

double NNfunction_ng_chi01::synapse0x2aba6b0() {
   return (neuron0x2a96c60()*1.13467);
}

double NNfunction_ng_chi01::synapse0x2aba6f0() {
   return (neuron0x2a96fa0()*0.0582292);
}

double NNfunction_ng_chi01::synapse0x2aba730() {
   return (neuron0x2a972e0()*0.0277132);
}

double NNfunction_ng_chi01::synapse0x2aba770() {
   return (neuron0x2a97620()*0.0676106);
}

double NNfunction_ng_chi01::synapse0x2aba7b0() {
   return (neuron0x2a97960()*0.120374);
}

double NNfunction_ng_chi01::synapse0x2aba7f0() {
   return (neuron0x2a97ca0()*-0.020485);
}

double NNfunction_ng_chi01::synapse0x2aba830() {
   return (neuron0x2a97fe0()*0.0349692);
}

double NNfunction_ng_chi01::synapse0x2aba870() {
   return (neuron0x2a98320()*-0.0136696);
}

double NNfunction_ng_chi01::synapse0x2aba8b0() {
   return (neuron0x2a98660()*-0.0277802);
}

double NNfunction_ng_chi01::synapse0x2aba8f0() {
   return (neuron0x2a989a0()*0.408753);
}

double NNfunction_ng_chi01::synapse0x2aba930() {
   return (neuron0x2a98ce0()*-0.0167163);
}

double NNfunction_ng_chi01::synapse0x2aba970() {
   return (neuron0x2a99020()*-0.065927);
}

double NNfunction_ng_chi01::synapse0x2aba9b0() {
   return (neuron0x2a99360()*-0.180998);
}

double NNfunction_ng_chi01::synapse0x2aba9f0() {
   return (neuron0x2a996a0()*-0.0534383);
}

double NNfunction_ng_chi01::synapse0x2aba480() {
   return (neuron0x2a999e0()*-0.00424343);
}

double NNfunction_ng_chi01::synapse0x2aba4c0() {
   return (neuron0x2a99f40()*-0.138212);
}

double NNfunction_ng_chi01::synapse0x2aaaff0() {
   return (neuron0x2a9a280()*0.0603552);
}

double NNfunction_ng_chi01::synapse0x2aab030() {
   return (neuron0x2a9a5c0()*-0.00900396);
}

double NNfunction_ng_chi01::synapse0x2aab070() {
   return (neuron0x2a9a900()*-0.0825104);
}

double NNfunction_ng_chi01::synapse0x2aab0b0() {
   return (neuron0x2a9ac40()*0.038582);
}

double NNfunction_ng_chi01::synapse0x2aab0f0() {
   return (neuron0x2a9af80()*0.0255695);
}

double NNfunction_ng_chi01::synapse0x2aab130() {
   return (neuron0x2a9b2c0()*2.65504);
}

double NNfunction_ng_chi01::synapse0x2aab4b0() {
   return (neuron0x2a96670()*-0.122894);
}

double NNfunction_ng_chi01::synapse0x2aab4f0() {
   return (neuron0x2a96920()*-0.225121);
}

double NNfunction_ng_chi01::synapse0x2aab530() {
   return (neuron0x2a96c60()*1.07258);
}

double NNfunction_ng_chi01::synapse0x2aab570() {
   return (neuron0x2a96fa0()*-1.22632);
}

double NNfunction_ng_chi01::synapse0x2aab5b0() {
   return (neuron0x2a972e0()*-0.137995);
}

double NNfunction_ng_chi01::synapse0x2aab5f0() {
   return (neuron0x2a97620()*-0.0141021);
}

double NNfunction_ng_chi01::synapse0x2aab630() {
   return (neuron0x2a97960()*-0.395562);
}

double NNfunction_ng_chi01::synapse0x2aab670() {
   return (neuron0x2a97ca0()*-0.263795);
}

double NNfunction_ng_chi01::synapse0x2aab6b0() {
   return (neuron0x2a97fe0()*-0.0209326);
}

double NNfunction_ng_chi01::synapse0x2aab6f0() {
   return (neuron0x2a98320()*-0.245404);
}

double NNfunction_ng_chi01::synapse0x2aab730() {
   return (neuron0x2a98660()*-0.286255);
}

double NNfunction_ng_chi01::synapse0x2aab770() {
   return (neuron0x2a989a0()*2.00091);
}

double NNfunction_ng_chi01::synapse0x2aab7b0() {
   return (neuron0x2a98ce0()*0.200571);
}

double NNfunction_ng_chi01::synapse0x2aab7f0() {
   return (neuron0x2a99020()*0.00567846);
}

double NNfunction_ng_chi01::synapse0x2aab830() {
   return (neuron0x2a99360()*0.57245);
}

double NNfunction_ng_chi01::synapse0x2aab870() {
   return (neuron0x2a996a0()*-0.0348763);
}

double NNfunction_ng_chi01::synapse0x2aab300() {
   return (neuron0x2a999e0()*-0.123891);
}

double NNfunction_ng_chi01::synapse0x2aab340() {
   return (neuron0x2a99f40()*0.349814);
}

double NNfunction_ng_chi01::synapse0x2aab9c0() {
   return (neuron0x2a9a280()*0.149964);
}

double NNfunction_ng_chi01::synapse0x2aaba00() {
   return (neuron0x2a9a5c0()*-0.122511);
}

double NNfunction_ng_chi01::synapse0x2aaba40() {
   return (neuron0x2a9a900()*-0.180562);
}

double NNfunction_ng_chi01::synapse0x2aaba80() {
   return (neuron0x2a9ac40()*0.0739754);
}

double NNfunction_ng_chi01::synapse0x2aabac0() {
   return (neuron0x2a9af80()*0.0326714);
}

double NNfunction_ng_chi01::synapse0x2aabb00() {
   return (neuron0x2a9b2c0()*0.374634);
}

double NNfunction_ng_chi01::synapse0x2aabe80() {
   return (neuron0x2a96670()*0.480213);
}

double NNfunction_ng_chi01::synapse0x2aabec0() {
   return (neuron0x2a96920()*-0.023892);
}

double NNfunction_ng_chi01::synapse0x2aabf00() {
   return (neuron0x2a96c60()*-0.322076);
}

double NNfunction_ng_chi01::synapse0x2aabf40() {
   return (neuron0x2a96fa0()*-0.0890557);
}

double NNfunction_ng_chi01::synapse0x2aabf80() {
   return (neuron0x2a972e0()*-0.341208);
}

double NNfunction_ng_chi01::synapse0x2aabfc0() {
   return (neuron0x2a97620()*0.154514);
}

double NNfunction_ng_chi01::synapse0x2aac000() {
   return (neuron0x2a97960()*-0.439893);
}

double NNfunction_ng_chi01::synapse0x2aac040() {
   return (neuron0x2a97ca0()*-0.608789);
}

double NNfunction_ng_chi01::synapse0x2aac080() {
   return (neuron0x2a97fe0()*0.725829);
}

double NNfunction_ng_chi01::synapse0x2aac0c0() {
   return (neuron0x2a98320()*0.407466);
}

double NNfunction_ng_chi01::synapse0x2aac100() {
   return (neuron0x2a98660()*-0.134206);
}

double NNfunction_ng_chi01::synapse0x2aac140() {
   return (neuron0x2a989a0()*0.192165);
}

double NNfunction_ng_chi01::synapse0x2aac180() {
   return (neuron0x2a98ce0()*0.263466);
}

double NNfunction_ng_chi01::synapse0x2aac1c0() {
   return (neuron0x2a99020()*0.198476);
}

double NNfunction_ng_chi01::synapse0x2aac200() {
   return (neuron0x2a99360()*0.360661);
}

double NNfunction_ng_chi01::synapse0x2aac240() {
   return (neuron0x2a996a0()*-0.37301);
}

double NNfunction_ng_chi01::synapse0x2aabcd0() {
   return (neuron0x2a999e0()*0.209014);
}

double NNfunction_ng_chi01::synapse0x2aabd10() {
   return (neuron0x2a99f40()*-0.683324);
}

double NNfunction_ng_chi01::synapse0x2aac390() {
   return (neuron0x2a9a280()*-0.544045);
}

double NNfunction_ng_chi01::synapse0x2aac3d0() {
   return (neuron0x2a9a5c0()*0.164154);
}

double NNfunction_ng_chi01::synapse0x2aac410() {
   return (neuron0x2a9a900()*-0.444884);
}

double NNfunction_ng_chi01::synapse0x2aac450() {
   return (neuron0x2a9ac40()*-0.401554);
}

double NNfunction_ng_chi01::synapse0x2aac490() {
   return (neuron0x2a9af80()*0.317898);
}

double NNfunction_ng_chi01::synapse0x2aac4d0() {
   return (neuron0x2a9b2c0()*-0.637935);
}

double NNfunction_ng_chi01::synapse0x2aac850() {
   return (neuron0x2a96670()*0.118675);
}

double NNfunction_ng_chi01::synapse0x2aac890() {
   return (neuron0x2a96920()*-1.51362);
}

double NNfunction_ng_chi01::synapse0x2aac8d0() {
   return (neuron0x2a96c60()*-0.166284);
}

double NNfunction_ng_chi01::synapse0x2aac910() {
   return (neuron0x2a96fa0()*-0.113329);
}

double NNfunction_ng_chi01::synapse0x2aac950() {
   return (neuron0x2a972e0()*-0.0746425);
}

double NNfunction_ng_chi01::synapse0x2aac990() {
   return (neuron0x2a97620()*0.0062018);
}

double NNfunction_ng_chi01::synapse0x2aac9d0() {
   return (neuron0x2a97960()*-0.0593901);
}

double NNfunction_ng_chi01::synapse0x2aaca10() {
   return (neuron0x2a97ca0()*0.0244777);
}

double NNfunction_ng_chi01::synapse0x2aaca50() {
   return (neuron0x2a97fe0()*0.0292222);
}

double NNfunction_ng_chi01::synapse0x2aaca90() {
   return (neuron0x2a98320()*0.0657062);
}

double NNfunction_ng_chi01::synapse0x2aacad0() {
   return (neuron0x2a98660()*0.0462026);
}

double NNfunction_ng_chi01::synapse0x2aacb10() {
   return (neuron0x2a989a0()*-0.568461);
}

double NNfunction_ng_chi01::synapse0x2aacb50() {
   return (neuron0x2a98ce0()*-0.0474477);
}

double NNfunction_ng_chi01::synapse0x2aacb90() {
   return (neuron0x2a99020()*-0.0485625);
}

double NNfunction_ng_chi01::synapse0x2aacbd0() {
   return (neuron0x2a99360()*1.34832);
}

double NNfunction_ng_chi01::synapse0x2aacc10() {
   return (neuron0x2a996a0()*0.0115588);
}

double NNfunction_ng_chi01::synapse0x2aac6a0() {
   return (neuron0x2a999e0()*0.0695267);
}

double NNfunction_ng_chi01::synapse0x2aac6e0() {
   return (neuron0x2a99f40()*0.0529779);
}

double NNfunction_ng_chi01::synapse0x2aacd60() {
   return (neuron0x2a9a280()*0.0531508);
}

double NNfunction_ng_chi01::synapse0x2aacda0() {
   return (neuron0x2a9a5c0()*0.0241865);
}

double NNfunction_ng_chi01::synapse0x2aacde0() {
   return (neuron0x2a9a900()*2.88252e-05);
}

double NNfunction_ng_chi01::synapse0x2aace20() {
   return (neuron0x2a9ac40()*-0.00284769);
}

double NNfunction_ng_chi01::synapse0x2aace60() {
   return (neuron0x2a9af80()*-0.00365846);
}

double NNfunction_ng_chi01::synapse0x2aacea0() {
   return (neuron0x2a9b2c0()*0.526359);
}

double NNfunction_ng_chi01::synapse0x2abed70() {
   return (neuron0x2a96670()*-0.0563662);
}

double NNfunction_ng_chi01::synapse0x2abedb0() {
   return (neuron0x2a96920()*0.118785);
}

double NNfunction_ng_chi01::synapse0x2abedf0() {
   return (neuron0x2a96c60()*-2.47417);
}

double NNfunction_ng_chi01::synapse0x2abee30() {
   return (neuron0x2a96fa0()*-0.0217198);
}

double NNfunction_ng_chi01::synapse0x2abee70() {
   return (neuron0x2a972e0()*0.0355003);
}

double NNfunction_ng_chi01::synapse0x2abeeb0() {
   return (neuron0x2a97620()*0.0066595);
}

double NNfunction_ng_chi01::synapse0x2abeef0() {
   return (neuron0x2a97960()*-0.107729);
}

double NNfunction_ng_chi01::synapse0x2abef30() {
   return (neuron0x2a97ca0()*-0.0166352);
}

double NNfunction_ng_chi01::synapse0x2abef70() {
   return (neuron0x2a97fe0()*-0.0335476);
}

double NNfunction_ng_chi01::synapse0x2abefb0() {
   return (neuron0x2a98320()*0.0337964);
}

double NNfunction_ng_chi01::synapse0x2abeff0() {
   return (neuron0x2a98660()*-0.0284638);
}

double NNfunction_ng_chi01::synapse0x2abf030() {
   return (neuron0x2a989a0()*0.340623);
}

double NNfunction_ng_chi01::synapse0x2abf070() {
   return (neuron0x2a98ce0()*0.0767805);
}

double NNfunction_ng_chi01::synapse0x2abf0b0() {
   return (neuron0x2a99020()*0.100567);
}

double NNfunction_ng_chi01::synapse0x2abf0f0() {
   return (neuron0x2a99360()*0.140331);
}

double NNfunction_ng_chi01::synapse0x2abf130() {
   return (neuron0x2a996a0()*-0.003332);
}

double NNfunction_ng_chi01::synapse0x2aacee0() {
   return (neuron0x2a999e0()*0.00800557);
}

double NNfunction_ng_chi01::synapse0x2aacf20() {
   return (neuron0x2a99f40()*0.143454);
}

double NNfunction_ng_chi01::synapse0x2abf280() {
   return (neuron0x2a9a280()*0.0299532);
}

double NNfunction_ng_chi01::synapse0x2abf2c0() {
   return (neuron0x2a9a5c0()*-0.0218196);
}

double NNfunction_ng_chi01::synapse0x2abf300() {
   return (neuron0x2a9a900()*-0.0675681);
}

double NNfunction_ng_chi01::synapse0x2abf340() {
   return (neuron0x2a9ac40()*-0.0207805);
}

double NNfunction_ng_chi01::synapse0x2abf380() {
   return (neuron0x2a9af80()*0.0335791);
}

double NNfunction_ng_chi01::synapse0x2abf3c0() {
   return (neuron0x2a9b2c0()*-0.100301);
}

double NNfunction_ng_chi01::synapse0x2abf740() {
   return (neuron0x2a96670()*0.0132956);
}

double NNfunction_ng_chi01::synapse0x2abf780() {
   return (neuron0x2a96920()*0.00513751);
}

double NNfunction_ng_chi01::synapse0x2abf7c0() {
   return (neuron0x2a96c60()*-0.153979);
}

double NNfunction_ng_chi01::synapse0x2abf800() {
   return (neuron0x2a96fa0()*-2.59836);
}

double NNfunction_ng_chi01::synapse0x2abf840() {
   return (neuron0x2a972e0()*-0.000365305);
}

double NNfunction_ng_chi01::synapse0x2abf880() {
   return (neuron0x2a97620()*0.00553908);
}

double NNfunction_ng_chi01::synapse0x2abf8c0() {
   return (neuron0x2a97960()*-0.028908);
}

double NNfunction_ng_chi01::synapse0x2abf900() {
   return (neuron0x2a97ca0()*-0.0119983);
}

double NNfunction_ng_chi01::synapse0x2abf940() {
   return (neuron0x2a97fe0()*0.0111125);
}

double NNfunction_ng_chi01::synapse0x2abf980() {
   return (neuron0x2a98320()*0.015324);
}

double NNfunction_ng_chi01::synapse0x2abf9c0() {
   return (neuron0x2a98660()*-0.00927448);
}

double NNfunction_ng_chi01::synapse0x2abfa00() {
   return (neuron0x2a989a0()*-0.0421076);
}

double NNfunction_ng_chi01::synapse0x2abfa40() {
   return (neuron0x2a98ce0()*0.0695415);
}

double NNfunction_ng_chi01::synapse0x2abfa80() {
   return (neuron0x2a99020()*-0.0327932);
}

double NNfunction_ng_chi01::synapse0x2abfac0() {
   return (neuron0x2a99360()*-0.0254881);
}

double NNfunction_ng_chi01::synapse0x2abfb00() {
   return (neuron0x2a996a0()*-0.0121642);
}

double NNfunction_ng_chi01::synapse0x2abf590() {
   return (neuron0x2a999e0()*-0.00592226);
}

double NNfunction_ng_chi01::synapse0x2abf5d0() {
   return (neuron0x2a99f40()*0.00123525);
}

double NNfunction_ng_chi01::synapse0x2abfc50() {
   return (neuron0x2a9a280()*0.0145781);
}

double NNfunction_ng_chi01::synapse0x2abfc90() {
   return (neuron0x2a9a5c0()*-0.00816432);
}

double NNfunction_ng_chi01::synapse0x2abfcd0() {
   return (neuron0x2a9a900()*0.00751494);
}

double NNfunction_ng_chi01::synapse0x2abfd10() {
   return (neuron0x2a9ac40()*-0.00621475);
}

double NNfunction_ng_chi01::synapse0x2abfd50() {
   return (neuron0x2a9af80()*0.00782056);
}

double NNfunction_ng_chi01::synapse0x2abfd90() {
   return (neuron0x2a9b2c0()*0.00266947);
}

double NNfunction_ng_chi01::synapse0x2ac0110() {
   return (neuron0x2a96670()*0.012911);
}

double NNfunction_ng_chi01::synapse0x2ac0150() {
   return (neuron0x2a96920()*0.0316544);
}

double NNfunction_ng_chi01::synapse0x2ac0190() {
   return (neuron0x2a96c60()*0.915971);
}

double NNfunction_ng_chi01::synapse0x2ac01d0() {
   return (neuron0x2a96fa0()*-0.0768371);
}

double NNfunction_ng_chi01::synapse0x2ac0210() {
   return (neuron0x2a972e0()*0.063276);
}

double NNfunction_ng_chi01::synapse0x2ac0250() {
   return (neuron0x2a97620()*-0.0372515);
}

double NNfunction_ng_chi01::synapse0x2ac0290() {
   return (neuron0x2a97960()*-0.0224889);
}

double NNfunction_ng_chi01::synapse0x2ac02d0() {
   return (neuron0x2a97ca0()*0.0595517);
}

double NNfunction_ng_chi01::synapse0x2ac0310() {
   return (neuron0x2a97fe0()*0.0286206);
}

double NNfunction_ng_chi01::synapse0x2ac0350() {
   return (neuron0x2a98320()*-0.0141763);
}

double NNfunction_ng_chi01::synapse0x2ac0390() {
   return (neuron0x2a98660()*0.0451194);
}

double NNfunction_ng_chi01::synapse0x2ac03d0() {
   return (neuron0x2a989a0()*-0.817467);
}

double NNfunction_ng_chi01::synapse0x2ac0410() {
   return (neuron0x2a98ce0()*2.26054);
}

double NNfunction_ng_chi01::synapse0x2ac0450() {
   return (neuron0x2a99020()*-0.00632681);
}

double NNfunction_ng_chi01::synapse0x2ac0490() {
   return (neuron0x2a99360()*-0.120318);
}

double NNfunction_ng_chi01::synapse0x2ac04d0() {
   return (neuron0x2a996a0()*0.037082);
}

double NNfunction_ng_chi01::synapse0x2abff60() {
   return (neuron0x2a999e0()*0.0323532);
}

double NNfunction_ng_chi01::synapse0x2abffa0() {
   return (neuron0x2a99f40()*-0.0334201);
}

double NNfunction_ng_chi01::synapse0x2ac0620() {
   return (neuron0x2a9a280()*0.0123042);
}

double NNfunction_ng_chi01::synapse0x2ac0660() {
   return (neuron0x2a9a5c0()*-0.0121044);
}

double NNfunction_ng_chi01::synapse0x2ac06a0() {
   return (neuron0x2a9a900()*-0.0257379);
}

double NNfunction_ng_chi01::synapse0x2ac06e0() {
   return (neuron0x2a9ac40()*-0.0106153);
}

double NNfunction_ng_chi01::synapse0x2ac0720() {
   return (neuron0x2a9af80()*-0.0151101);
}

double NNfunction_ng_chi01::synapse0x2ac0760() {
   return (neuron0x2a9b2c0()*-0.0614341);
}

double NNfunction_ng_chi01::synapse0x2ac0ae0() {
   return (neuron0x2a96670()*-0.0153864);
}

double NNfunction_ng_chi01::synapse0x2ac0b20() {
   return (neuron0x2a96920()*0.0476202);
}

double NNfunction_ng_chi01::synapse0x2ac0b60() {
   return (neuron0x2a96c60()*-0.0561165);
}

double NNfunction_ng_chi01::synapse0x2ac0ba0() {
   return (neuron0x2a96fa0()*-1.35364);
}

double NNfunction_ng_chi01::synapse0x2ac0be0() {
   return (neuron0x2a972e0()*-0.00662694);
}

double NNfunction_ng_chi01::synapse0x2ac0c20() {
   return (neuron0x2a97620()*-0.0137974);
}

double NNfunction_ng_chi01::synapse0x2ac0c60() {
   return (neuron0x2a97960()*-0.00121204);
}

double NNfunction_ng_chi01::synapse0x2ac0ca0() {
   return (neuron0x2a97ca0()*0.0189587);
}

double NNfunction_ng_chi01::synapse0x2ac0ce0() {
   return (neuron0x2a97fe0()*0.0204778);
}

double NNfunction_ng_chi01::synapse0x2ac0d20() {
   return (neuron0x2a98320()*0.00211066);
}

double NNfunction_ng_chi01::synapse0x2ac0d60() {
   return (neuron0x2a98660()*-0.0110641);
}

double NNfunction_ng_chi01::synapse0x2ac0da0() {
   return (neuron0x2a989a0()*-0.0595247);
}

double NNfunction_ng_chi01::synapse0x2ac0de0() {
   return (neuron0x2a98ce0()*-0.0229055);
}

double NNfunction_ng_chi01::synapse0x2ac0e20() {
   return (neuron0x2a99020()*0.0105098);
}

double NNfunction_ng_chi01::synapse0x2ac0e60() {
   return (neuron0x2a99360()*0.153147);
}

double NNfunction_ng_chi01::synapse0x2ac0ea0() {
   return (neuron0x2a996a0()*0.0325536);
}

double NNfunction_ng_chi01::synapse0x2ac0930() {
   return (neuron0x2a999e0()*-0.00508782);
}

double NNfunction_ng_chi01::synapse0x2ac0970() {
   return (neuron0x2a99f40()*0.0449769);
}

double NNfunction_ng_chi01::synapse0x2ac0ff0() {
   return (neuron0x2a9a280()*0.00677323);
}

double NNfunction_ng_chi01::synapse0x2ac1030() {
   return (neuron0x2a9a5c0()*-0.00854692);
}

double NNfunction_ng_chi01::synapse0x2ac1070() {
   return (neuron0x2a9a900()*-0.000450381);
}

double NNfunction_ng_chi01::synapse0x2ac10b0() {
   return (neuron0x2a9ac40()*0.00155048);
}

double NNfunction_ng_chi01::synapse0x2ac10f0() {
   return (neuron0x2a9af80()*0.0327013);
}

double NNfunction_ng_chi01::synapse0x2ac1130() {
   return (neuron0x2a9b2c0()*0.00122173);
}

double NNfunction_ng_chi01::synapse0x2860f10() {
   return (neuron0x2a9b730()*-0.446107);
}

double NNfunction_ng_chi01::synapse0x2860f50() {
   return (neuron0x2a9bf70()*1.51451);
}

double NNfunction_ng_chi01::synapse0x2a9dae0() {
   return (neuron0x2a9ca50()*0.246338);
}

double NNfunction_ng_chi01::synapse0x2a9db20() {
   return (neuron0x2a9c4f0()*-0.0448606);
}

double NNfunction_ng_chi01::synapse0x2a9f5b0() {
   return (neuron0x2a9d830()*-0.448898);
}

double NNfunction_ng_chi01::synapse0x2a9f5f0() {
   return (neuron0x2a9f300()*0.372676);
}

double NNfunction_ng_chi01::synapse0x2aa0380() {
   return (neuron0x2aa00d0()*-0.487908);
}

double NNfunction_ng_chi01::synapse0x2aa03c0() {
   return (neuron0x2aa0aa0()*1.28956);
}

double NNfunction_ng_chi01::synapse0x2aa0d50() {
   return (neuron0x2aa1470()*-0.956371);
}

double NNfunction_ng_chi01::synapse0x2aa0d90() {
   return (neuron0x2aa1f50()*-0.649014);
}

double NNfunction_ng_chi01::synapse0x2aa1720() {
   return (neuron0x2aa2920()*0.0199332);
}

double NNfunction_ng_chi01::synapse0x2aa1760() {
   return (neuron0x2a9fa00()*-0.84465);
}

double NNfunction_ng_chi01::synapse0x2aa2200() {
   return (neuron0x2aa44d0()*-0.493124);
}

double NNfunction_ng_chi01::synapse0x2aa2240() {
   return (neuron0x2aa4ea0()*2.92374);
}

double NNfunction_ng_chi01::synapse0x2aa2bd0() {
   return (neuron0x2aa5870()*1.92455);
}

double NNfunction_ng_chi01::synapse0x2aa2c10() {
   return (neuron0x2aa6240()*0.732453);
}

double NNfunction_ng_chi01::synapse0x2a9fcb0() {
   return (neuron0x2aa8050()*-0.588539);
}

double NNfunction_ng_chi01::synapse0x2a9fcf0() {
   return (neuron0x2aa8330()*0.3226);
}

double NNfunction_ng_chi01::synapse0x2aa4780() {
   return (neuron0x2aa8d00()*0.218158);
}

double NNfunction_ng_chi01::synapse0x2aa47c0() {
   return (neuron0x2aa96d0()*-0.137716);
}

double NNfunction_ng_chi01::synapse0x2aa5150() {
   return (neuron0x2aaa0a0()*-0.504327);
}

double NNfunction_ng_chi01::synapse0x2aa5190() {
   return (neuron0x2aaaa70()*-2.24607);
}

double NNfunction_ng_chi01::synapse0x2aa5b20() {
   return (neuron0x2aa35c0()*0.77089);
}

double NNfunction_ng_chi01::synapse0x2aa5b60() {
   return (neuron0x2aa3f90()*-2.54696);
}

double NNfunction_ng_chi01::synapse0x2aa64f0() {
   return (neuron0x2aad800()*0.247884);
}

double NNfunction_ng_chi01::synapse0x2aa6530() {
   return (neuron0x2aae1d0()*-3.4044);
}

double NNfunction_ng_chi01::synapse0x2a99580() {
   return (neuron0x2aaeba0()*0.726153);
}

double NNfunction_ng_chi01::synapse0x2a995c0() {
   return (neuron0x2aaf570()*0.853313);
}

double NNfunction_ng_chi01::synapse0x2aa85e0() {
   return (neuron0x2aaff40()*0.509746);
}

double NNfunction_ng_chi01::synapse0x2aa8620() {
   return (neuron0x2ab0910()*0.250205);
}

double NNfunction_ng_chi01::synapse0x2aa8fb0() {
   return (neuron0x2ab12e0()*0.455654);
}

double NNfunction_ng_chi01::synapse0x2aa8ff0() {
   return (neuron0x2ab1cb0()*-1.23173);
}

double NNfunction_ng_chi01::synapse0x2aa9980() {
   return (neuron0x2aa7d40()*-1.35791);
}

double NNfunction_ng_chi01::synapse0x2aa99c0() {
   return (neuron0x2ab4890()*-1.29894);
}

double NNfunction_ng_chi01::synapse0x2aaa350() {
   return (neuron0x2ab5260()*-2.6253);
}

double NNfunction_ng_chi01::synapse0x2aaa390() {
   return (neuron0x2ab5c30()*2.98508);
}

double NNfunction_ng_chi01::synapse0x2aaad20() {
   return (neuron0x2ab6600()*-1.01345);
}

double NNfunction_ng_chi01::synapse0x2aaad60() {
   return (neuron0x2ab6fd0()*-0.4109);
}

double NNfunction_ng_chi01::synapse0x2aa3870() {
   return (neuron0x2ab79a0()*-0.916082);
}

double NNfunction_ng_chi01::synapse0x2aa38b0() {
   return (neuron0x2ab8370()*-0.72394);
}

double NNfunction_ng_chi01::synapse0x2aad120() {
   return (neuron0x2ab8d40()*1.08555);
}

double NNfunction_ng_chi01::synapse0x2aad160() {
   return (neuron0x2ab9920()*0.817685);
}

double NNfunction_ng_chi01::synapse0x2aadab0() {
   return (neuron0x2aba2f0()*0.392667);
}

double NNfunction_ng_chi01::synapse0x2aadaf0() {
   return (neuron0x2aab170()*-1.21775);
}

double NNfunction_ng_chi01::synapse0x2aae480() {
   return (neuron0x2aabb40()*-0.962667);
}

double NNfunction_ng_chi01::synapse0x2aae4c0() {
   return (neuron0x2aac510()*-0.251526);
}

double NNfunction_ng_chi01::synapse0x2aaee50() {
   return (neuron0x2abeb50()*-0.911906);
}

double NNfunction_ng_chi01::synapse0x2aaee90() {
   return (neuron0x2abf400()*-0.706241);
}

double NNfunction_ng_chi01::synapse0x2aaf820() {
   return (neuron0x2abfdd0()*2.83666);
}

double NNfunction_ng_chi01::synapse0x2aaf860() {
   return (neuron0x2ac07a0()*-0.848922);
}

double NNfunction_ng_chi01::synapse0x2ab1f60() {
   return (neuron0x2a9b730()*0.726225);
}

double NNfunction_ng_chi01::synapse0x2ab1fa0() {
   return (neuron0x2a9bf70()*0.0404064);
}

double NNfunction_ng_chi01::synapse0x2aa7520() {
   return (neuron0x2a9ca50()*1.22551);
}

double NNfunction_ng_chi01::synapse0x2aa7560() {
   return (neuron0x2a9c4f0()*-2.89574);
}

double NNfunction_ng_chi01::synapse0x2ab4b40() {
   return (neuron0x2a9d830()*6.28192);
}

double NNfunction_ng_chi01::synapse0x2ab4b80() {
   return (neuron0x2a9f300()*-0.840887);
}

double NNfunction_ng_chi01::synapse0x2ab5510() {
   return (neuron0x2aa00d0()*0.645942);
}

double NNfunction_ng_chi01::synapse0x2ab5550() {
   return (neuron0x2aa0aa0()*-0.377279);
}

double NNfunction_ng_chi01::synapse0x2ab5ee0() {
   return (neuron0x2aa1470()*-2.47589);
}

double NNfunction_ng_chi01::synapse0x2ab5f20() {
   return (neuron0x2aa1f50()*0.110316);
}

double NNfunction_ng_chi01::synapse0x2ab68b0() {
   return (neuron0x2aa2920()*1.0099);
}

double NNfunction_ng_chi01::synapse0x2ab68f0() {
   return (neuron0x2a9fa00()*-2.28183);
}

double NNfunction_ng_chi01::synapse0x2ab7280() {
   return (neuron0x2aa44d0()*0.19776);
}

double NNfunction_ng_chi01::synapse0x2ab72c0() {
   return (neuron0x2aa4ea0()*-0.634075);
}

double NNfunction_ng_chi01::synapse0x2ab7c50() {
   return (neuron0x2aa5870()*-0.480854);
}

double NNfunction_ng_chi01::synapse0x2ab7c90() {
   return (neuron0x2aa6240()*1.62165);
}

double NNfunction_ng_chi01::synapse0x2ab8620() {
   return (neuron0x2aa8050()*2.04655);
}

double NNfunction_ng_chi01::synapse0x2ab8660() {
   return (neuron0x2aa8330()*-0.846519);
}

double NNfunction_ng_chi01::synapse0x2ab8ff0() {
   return (neuron0x2aa8d00()*1.10588);
}

double NNfunction_ng_chi01::synapse0x2ab9030() {
   return (neuron0x2aa96d0()*-0.607872);
}

double NNfunction_ng_chi01::synapse0x2ab9bd0() {
   return (neuron0x2aaa0a0()*0.856176);
}

double NNfunction_ng_chi01::synapse0x2ab9c10() {
   return (neuron0x2aaaa70()*-3.62703);
}

double NNfunction_ng_chi01::synapse0x2aba5a0() {
   return (neuron0x2aa35c0()*-0.501244);
}

double NNfunction_ng_chi01::synapse0x2aba5e0() {
   return (neuron0x2aa3f90()*-1.16298);
}

double NNfunction_ng_chi01::synapse0x2aab420() {
   return (neuron0x2aad800()*0.877514);
}

double NNfunction_ng_chi01::synapse0x2aab460() {
   return (neuron0x2aae1d0()*0.7257);
}

double NNfunction_ng_chi01::synapse0x2aabdf0() {
   return (neuron0x2aaeba0()*1.64962);
}

double NNfunction_ng_chi01::synapse0x2aabe30() {
   return (neuron0x2aaf570()*0.214485);
}

double NNfunction_ng_chi01::synapse0x2aac7c0() {
   return (neuron0x2aaff40()*-1.67256);
}

double NNfunction_ng_chi01::synapse0x2aac800() {
   return (neuron0x2ab0910()*-0.105646);
}

double NNfunction_ng_chi01::synapse0x2abece0() {
   return (neuron0x2ab12e0()*-3.75505);
}

double NNfunction_ng_chi01::synapse0x2abed20() {
   return (neuron0x2ab1cb0()*0.15433);
}

double NNfunction_ng_chi01::synapse0x2abf6b0() {
   return (neuron0x2aa7d40()*0.414924);
}

double NNfunction_ng_chi01::synapse0x2abf6f0() {
   return (neuron0x2ab4890()*0.587584);
}

double NNfunction_ng_chi01::synapse0x2ac0080() {
   return (neuron0x2ab5260()*-0.682801);
}

double NNfunction_ng_chi01::synapse0x2ac00c0() {
   return (neuron0x2ab5c30()*-0.721262);
}

double NNfunction_ng_chi01::synapse0x2ac0a50() {
   return (neuron0x2ab6600()*-0.351542);
}

double NNfunction_ng_chi01::synapse0x2ac0a90() {
   return (neuron0x2ab6fd0()*-3.24942);
}

double NNfunction_ng_chi01::synapse0x2a9b9e0() {
   return (neuron0x2ab79a0()*-0.0234002);
}

double NNfunction_ng_chi01::synapse0x2a9ba20() {
   return (neuron0x2ab8370()*3.81547);
}

double NNfunction_ng_chi01::synapse0x2ab01f0() {
   return (neuron0x2ab8d40()*0.221308);
}

double NNfunction_ng_chi01::synapse0x2ab0230() {
   return (neuron0x2ab9920()*4.12922);
}

double NNfunction_ng_chi01::synapse0x2ac1170() {
   return (neuron0x2aba2f0()*-1.17301);
}

double NNfunction_ng_chi01::synapse0x2ac11b0() {
   return (neuron0x2aab170()*0.280689);
}

double NNfunction_ng_chi01::synapse0x2ac11f0() {
   return (neuron0x2aabb40()*0.294257);
}

double NNfunction_ng_chi01::synapse0x2ac1230() {
   return (neuron0x2aac510()*-6.09326e-05);
}

double NNfunction_ng_chi01::synapse0x2ac80e0() {
   return (neuron0x2abeb50()*2.98526);
}

double NNfunction_ng_chi01::synapse0x2ac8120() {
   return (neuron0x2abf400()*-1.06981);
}

double NNfunction_ng_chi01::synapse0x2ac8160() {
   return (neuron0x2abfdd0()*-1.61926);
}

double NNfunction_ng_chi01::synapse0x2ac81a0() {
   return (neuron0x2ac07a0()*1.13904);
}

double NNfunction_ng_chi01::synapse0x2ac8520() {
   return (neuron0x2a9b730()*0.693363);
}

double NNfunction_ng_chi01::synapse0x2ac8560() {
   return (neuron0x2a9bf70()*-0.0486587);
}

double NNfunction_ng_chi01::synapse0x2ac85a0() {
   return (neuron0x2a9ca50()*0.387311);
}

double NNfunction_ng_chi01::synapse0x2ac85e0() {
   return (neuron0x2a9c4f0()*-0.530166);
}

double NNfunction_ng_chi01::synapse0x2ac8620() {
   return (neuron0x2a9d830()*-0.443932);
}

double NNfunction_ng_chi01::synapse0x2ac8660() {
   return (neuron0x2a9f300()*0.91584);
}

double NNfunction_ng_chi01::synapse0x2ac86a0() {
   return (neuron0x2aa00d0()*1.0444);
}

double NNfunction_ng_chi01::synapse0x2ac86e0() {
   return (neuron0x2aa0aa0()*0.14545);
}

double NNfunction_ng_chi01::synapse0x2ac8720() {
   return (neuron0x2aa1470()*-0.333731);
}

double NNfunction_ng_chi01::synapse0x2ac8760() {
   return (neuron0x2aa1f50()*-0.0937054);
}

double NNfunction_ng_chi01::synapse0x2ac87a0() {
   return (neuron0x2aa2920()*0.10736);
}

double NNfunction_ng_chi01::synapse0x2ac87e0() {
   return (neuron0x2a9fa00()*-1.03397);
}

double NNfunction_ng_chi01::synapse0x2ac8820() {
   return (neuron0x2aa44d0()*-0.0149806);
}

double NNfunction_ng_chi01::synapse0x2ac8860() {
   return (neuron0x2aa4ea0()*1.43798);
}

double NNfunction_ng_chi01::synapse0x2ac88a0() {
   return (neuron0x2aa5870()*0.817651);
}

double NNfunction_ng_chi01::synapse0x2ac88e0() {
   return (neuron0x2aa6240()*0.217493);
}

double NNfunction_ng_chi01::synapse0x2ac8370() {
   return (neuron0x2aa8050()*1.37339);
}

double NNfunction_ng_chi01::synapse0x2ac83b0() {
   return (neuron0x2aa8330()*0.865357);
}

double NNfunction_ng_chi01::synapse0x2ac8a30() {
   return (neuron0x2aa8d00()*0.0655602);
}

double NNfunction_ng_chi01::synapse0x2ac8a70() {
   return (neuron0x2aa96d0()*-0.00301909);
}

double NNfunction_ng_chi01::synapse0x2ac8ab0() {
   return (neuron0x2aaa0a0()*0.817821);
}

double NNfunction_ng_chi01::synapse0x2ac8af0() {
   return (neuron0x2aaaa70()*-3.0147);
}

double NNfunction_ng_chi01::synapse0x2ac8b30() {
   return (neuron0x2aa35c0()*0.0375852);
}

double NNfunction_ng_chi01::synapse0x2ac8b70() {
   return (neuron0x2aa3f90()*-0.538564);
}

double NNfunction_ng_chi01::synapse0x2ac8bb0() {
   return (neuron0x2aad800()*0.505532);
}

double NNfunction_ng_chi01::synapse0x2ac8bf0() {
   return (neuron0x2aae1d0()*-0.31724);
}

double NNfunction_ng_chi01::synapse0x2ac8c30() {
   return (neuron0x2aaeba0()*-1.08518);
}

double NNfunction_ng_chi01::synapse0x2ac8c70() {
   return (neuron0x2aaf570()*-0.012931);
}

double NNfunction_ng_chi01::synapse0x2ac8cb0() {
   return (neuron0x2aaff40()*0.280536);
}

double NNfunction_ng_chi01::synapse0x2ac8cf0() {
   return (neuron0x2ab0910()*-0.26059);
}

double NNfunction_ng_chi01::synapse0x2ac8d30() {
   return (neuron0x2ab12e0()*0.204488);
}

double NNfunction_ng_chi01::synapse0x2ac8d70() {
   return (neuron0x2ab1cb0()*0.00311483);
}

double NNfunction_ng_chi01::synapse0x2ac8920() {
   return (neuron0x2aa7d40()*-0.686648);
}

double NNfunction_ng_chi01::synapse0x2ac8960() {
   return (neuron0x2ab4890()*-0.178995);
}

double NNfunction_ng_chi01::synapse0x2ac89a0() {
   return (neuron0x2ab5260()*0.172394);
}

double NNfunction_ng_chi01::synapse0x2ac89e0() {
   return (neuron0x2ab5c30()*1.77296);
}

double NNfunction_ng_chi01::synapse0x2ac8fc0() {
   return (neuron0x2ab6600()*-0.343557);
}

double NNfunction_ng_chi01::synapse0x2ac9000() {
   return (neuron0x2ab6fd0()*-0.266553);
}

double NNfunction_ng_chi01::synapse0x2ac9040() {
   return (neuron0x2ab79a0()*-0.0859485);
}

double NNfunction_ng_chi01::synapse0x2ac9080() {
   return (neuron0x2ab8370()*0.49564);
}

double NNfunction_ng_chi01::synapse0x2ac90c0() {
   return (neuron0x2ab8d40()*0.0260749);
}

double NNfunction_ng_chi01::synapse0x2ac9100() {
   return (neuron0x2ab9920()*0.468546);
}

double NNfunction_ng_chi01::synapse0x2ac9140() {
   return (neuron0x2aba2f0()*-0.145497);
}

double NNfunction_ng_chi01::synapse0x2ac9180() {
   return (neuron0x2aab170()*-0.0201376);
}

double NNfunction_ng_chi01::synapse0x2ac91c0() {
   return (neuron0x2aabb40()*-0.0605504);
}

double NNfunction_ng_chi01::synapse0x2ac9200() {
   return (neuron0x2aac510()*0.446958);
}

double NNfunction_ng_chi01::synapse0x2ac9240() {
   return (neuron0x2abeb50()*-0.279475);
}

double NNfunction_ng_chi01::synapse0x2ac9280() {
   return (neuron0x2abf400()*0.978393);
}

double NNfunction_ng_chi01::synapse0x2ac92c0() {
   return (neuron0x2abfdd0()*0.386317);
}

double NNfunction_ng_chi01::synapse0x2ac9300() {
   return (neuron0x2ac07a0()*-2.57618);
}

double NNfunction_ng_chi01::synapse0x2ac9680() {
   return (neuron0x2a9b730()*0.330366);
}

double NNfunction_ng_chi01::synapse0x2ac96c0() {
   return (neuron0x2a9bf70()*0.0651092);
}

double NNfunction_ng_chi01::synapse0x2ac9700() {
   return (neuron0x2a9ca50()*-0.552953);
}

double NNfunction_ng_chi01::synapse0x2ac9740() {
   return (neuron0x2a9c4f0()*0.913169);
}

double NNfunction_ng_chi01::synapse0x2ac9780() {
   return (neuron0x2a9d830()*-2.41684);
}

double NNfunction_ng_chi01::synapse0x2ac97c0() {
   return (neuron0x2a9f300()*0.827812);
}

double NNfunction_ng_chi01::synapse0x2ac9800() {
   return (neuron0x2aa00d0()*0.841768);
}

double NNfunction_ng_chi01::synapse0x2ac9840() {
   return (neuron0x2aa0aa0()*0.162478);
}

double NNfunction_ng_chi01::synapse0x2ac9880() {
   return (neuron0x2aa1470()*0.69305);
}

double NNfunction_ng_chi01::synapse0x2ac98c0() {
   return (neuron0x2aa1f50()*-0.00076863);
}

double NNfunction_ng_chi01::synapse0x2ac9900() {
   return (neuron0x2aa2920()*0.0827916);
}

double NNfunction_ng_chi01::synapse0x2ac9940() {
   return (neuron0x2a9fa00()*0.35126);
}

double NNfunction_ng_chi01::synapse0x2ac9980() {
   return (neuron0x2aa44d0()*0.0758506);
}

double NNfunction_ng_chi01::synapse0x2ac99c0() {
   return (neuron0x2aa4ea0()*0.213477);
}

double NNfunction_ng_chi01::synapse0x2ac9a00() {
   return (neuron0x2aa5870()*0.416536);
}

double NNfunction_ng_chi01::synapse0x2ac9a40() {
   return (neuron0x2aa6240()*-0.419189);
}

double NNfunction_ng_chi01::synapse0x2ac94d0() {
   return (neuron0x2aa8050()*4.84327);
}

double NNfunction_ng_chi01::synapse0x2ac9510() {
   return (neuron0x2aa8330()*-0.745095);
}

double NNfunction_ng_chi01::synapse0x2ac9b90() {
   return (neuron0x2aa8d00()*-0.119112);
}

double NNfunction_ng_chi01::synapse0x2ac9bd0() {
   return (neuron0x2aa96d0()*0.993231);
}

double NNfunction_ng_chi01::synapse0x2ac9c10() {
   return (neuron0x2aaa0a0()*0.321799);
}

double NNfunction_ng_chi01::synapse0x2ac9c50() {
   return (neuron0x2aaaa70()*-0.637532);
}

double NNfunction_ng_chi01::synapse0x2ac9c90() {
   return (neuron0x2aa35c0()*-2.40897);
}

double NNfunction_ng_chi01::synapse0x2ac9cd0() {
   return (neuron0x2aa3f90()*0.32921);
}

double NNfunction_ng_chi01::synapse0x2ac9d10() {
   return (neuron0x2aad800()*-0.884899);
}

double NNfunction_ng_chi01::synapse0x2ac9d50() {
   return (neuron0x2aae1d0()*-0.184039);
}

double NNfunction_ng_chi01::synapse0x2ac9d90() {
   return (neuron0x2aaeba0()*-0.0627188);
}

double NNfunction_ng_chi01::synapse0x2ac9dd0() {
   return (neuron0x2aaf570()*0.0738992);
}

double NNfunction_ng_chi01::synapse0x2ac9e10() {
   return (neuron0x2aaff40()*-1.89646);
}

double NNfunction_ng_chi01::synapse0x2ac9e50() {
   return (neuron0x2ab0910()*0.291917);
}

double NNfunction_ng_chi01::synapse0x2ac9e90() {
   return (neuron0x2ab12e0()*0.658662);
}

double NNfunction_ng_chi01::synapse0x2ac9ed0() {
   return (neuron0x2ab1cb0()*-0.175501);
}

double NNfunction_ng_chi01::synapse0x2ac9a80() {
   return (neuron0x2aa7d40()*-0.196523);
}

double NNfunction_ng_chi01::synapse0x2ac9ac0() {
   return (neuron0x2ab4890()*-0.103682);
}

double NNfunction_ng_chi01::synapse0x2ac9b00() {
   return (neuron0x2ab5260()*0.0924534);
}

double NNfunction_ng_chi01::synapse0x2ac9b40() {
   return (neuron0x2ab5c30()*-2.02873);
}

double NNfunction_ng_chi01::synapse0x2aca120() {
   return (neuron0x2ab6600()*0.642398);
}

double NNfunction_ng_chi01::synapse0x2aca160() {
   return (neuron0x2ab6fd0()*1.8092);
}

double NNfunction_ng_chi01::synapse0x2aca1a0() {
   return (neuron0x2ab79a0()*0.106781);
}

double NNfunction_ng_chi01::synapse0x2aca1e0() {
   return (neuron0x2ab8370()*-0.934125);
}

double NNfunction_ng_chi01::synapse0x2aca220() {
   return (neuron0x2ab8d40()*-0.0287979);
}

double NNfunction_ng_chi01::synapse0x2aca260() {
   return (neuron0x2ab9920()*-2.19012);
}

double NNfunction_ng_chi01::synapse0x2aca2a0() {
   return (neuron0x2aba2f0()*0.21798);
}

double NNfunction_ng_chi01::synapse0x2aca2e0() {
   return (neuron0x2aab170()*0.0796143);
}

double NNfunction_ng_chi01::synapse0x2aca320() {
   return (neuron0x2aabb40()*0.0920367);
}

double NNfunction_ng_chi01::synapse0x2aca360() {
   return (neuron0x2aac510()*-0.691763);
}

double NNfunction_ng_chi01::synapse0x2aca3a0() {
   return (neuron0x2abeb50()*0.416051);
}

double NNfunction_ng_chi01::synapse0x2aca3e0() {
   return (neuron0x2abf400()*0.00237178);
}

double NNfunction_ng_chi01::synapse0x2aca420() {
   return (neuron0x2abfdd0()*0.370736);
}

double NNfunction_ng_chi01::synapse0x2aca460() {
   return (neuron0x2ac07a0()*0.0355262);
}

double NNfunction_ng_chi01::synapse0x2aca7e0() {
   return (neuron0x2a9b730()*0.899754);
}

double NNfunction_ng_chi01::synapse0x2aca820() {
   return (neuron0x2a9bf70()*-0.0202734);
}

double NNfunction_ng_chi01::synapse0x2aca860() {
   return (neuron0x2a9ca50()*0.172506);
}

double NNfunction_ng_chi01::synapse0x2aca8a0() {
   return (neuron0x2a9c4f0()*-0.322445);
}

double NNfunction_ng_chi01::synapse0x2aca8e0() {
   return (neuron0x2a9d830()*-0.699564);
}

double NNfunction_ng_chi01::synapse0x2aca920() {
   return (neuron0x2a9f300()*0.486439);
}

double NNfunction_ng_chi01::synapse0x2aca960() {
   return (neuron0x2aa00d0()*0.99642);
}

double NNfunction_ng_chi01::synapse0x2aca9a0() {
   return (neuron0x2aa0aa0()*0.208045);
}

double NNfunction_ng_chi01::synapse0x2aca9e0() {
   return (neuron0x2aa1470()*-0.289927);
}

double NNfunction_ng_chi01::synapse0x2acaa20() {
   return (neuron0x2aa1f50()*0.0531429);
}

double NNfunction_ng_chi01::synapse0x2acaa60() {
   return (neuron0x2aa2920()*0.103754);
}

double NNfunction_ng_chi01::synapse0x2acaaa0() {
   return (neuron0x2a9fa00()*-0.943826);
}

double NNfunction_ng_chi01::synapse0x2acaae0() {
   return (neuron0x2aa44d0()*-0.0385759);
}

double NNfunction_ng_chi01::synapse0x2acab20() {
   return (neuron0x2aa4ea0()*-2.47492);
}

double NNfunction_ng_chi01::synapse0x2acab60() {
   return (neuron0x2aa5870()*-0.151829);
}

double NNfunction_ng_chi01::synapse0x2acaba0() {
   return (neuron0x2aa6240()*0.1354);
}

double NNfunction_ng_chi01::synapse0x2aca630() {
   return (neuron0x2aa8050()*-1.09927);
}

double NNfunction_ng_chi01::synapse0x2aca670() {
   return (neuron0x2aa8330()*0.0155271);
}

double NNfunction_ng_chi01::synapse0x2acacf0() {
   return (neuron0x2aa8d00()*0.00766929);
}

double NNfunction_ng_chi01::synapse0x2acad30() {
   return (neuron0x2aa96d0()*0.0245836);
}

double NNfunction_ng_chi01::synapse0x2acad70() {
   return (neuron0x2aaa0a0()*1.63097);
}

double NNfunction_ng_chi01::synapse0x2acadb0() {
   return (neuron0x2aaaa70()*6.29164);
}

double NNfunction_ng_chi01::synapse0x2acadf0() {
   return (neuron0x2aa35c0()*-0.27698);
}

double NNfunction_ng_chi01::synapse0x2acae30() {
   return (neuron0x2aa3f90()*0.218503);
}

double NNfunction_ng_chi01::synapse0x2acae70() {
   return (neuron0x2aad800()*0.37609);
}

double NNfunction_ng_chi01::synapse0x2acaeb0() {
   return (neuron0x2aae1d0()*-0.0868672);
}

double NNfunction_ng_chi01::synapse0x2acaef0() {
   return (neuron0x2aaeba0()*-0.0394372);
}

double NNfunction_ng_chi01::synapse0x2acaf30() {
   return (neuron0x2aaf570()*-0.0445179);
}

double NNfunction_ng_chi01::synapse0x2acaf70() {
   return (neuron0x2aaff40()*-0.244878);
}

double NNfunction_ng_chi01::synapse0x2acafb0() {
   return (neuron0x2ab0910()*-0.0800552);
}

double NNfunction_ng_chi01::synapse0x2acaff0() {
   return (neuron0x2ab12e0()*0.286984);
}

double NNfunction_ng_chi01::synapse0x2acb030() {
   return (neuron0x2ab1cb0()*0.140621);
}

double NNfunction_ng_chi01::synapse0x2acabe0() {
   return (neuron0x2aa7d40()*-0.988109);
}

double NNfunction_ng_chi01::synapse0x2acac20() {
   return (neuron0x2ab4890()*0.0294156);
}

double NNfunction_ng_chi01::synapse0x2acac60() {
   return (neuron0x2ab5260()*0.233503);
}

double NNfunction_ng_chi01::synapse0x2acaca0() {
   return (neuron0x2ab5c30()*-4.72881);
}

double NNfunction_ng_chi01::synapse0x2acb280() {
   return (neuron0x2ab6600()*-0.268609);
}

double NNfunction_ng_chi01::synapse0x2acb2c0() {
   return (neuron0x2ab6fd0()*-0.270463);
}

double NNfunction_ng_chi01::synapse0x2acb300() {
   return (neuron0x2ab79a0()*-0.0491865);
}

double NNfunction_ng_chi01::synapse0x2acb340() {
   return (neuron0x2ab8370()*0.435169);
}

double NNfunction_ng_chi01::synapse0x2acb380() {
   return (neuron0x2ab8d40()*0.0472749);
}

double NNfunction_ng_chi01::synapse0x2acb3c0() {
   return (neuron0x2ab9920()*0.342177);
}

double NNfunction_ng_chi01::synapse0x2acb400() {
   return (neuron0x2aba2f0()*-0.0892901);
}

double NNfunction_ng_chi01::synapse0x2acb440() {
   return (neuron0x2aab170()*-0.0525955);
}

double NNfunction_ng_chi01::synapse0x2acb480() {
   return (neuron0x2aabb40()*-0.065782);
}

double NNfunction_ng_chi01::synapse0x2acb4c0() {
   return (neuron0x2aac510()*0.290466);
}

double NNfunction_ng_chi01::synapse0x2acb500() {
   return (neuron0x2abeb50()*-0.675544);
}

double NNfunction_ng_chi01::synapse0x2acb540() {
   return (neuron0x2abf400()*1.21727);
}

double NNfunction_ng_chi01::synapse0x2acb580() {
   return (neuron0x2abfdd0()*0.495879);
}

double NNfunction_ng_chi01::synapse0x2acb5c0() {
   return (neuron0x2ac07a0()*-0.806643);
}

double NNfunction_ng_chi01::synapse0x2acb820() {
   return (neuron0x2ac79a0()*-3.33529);
}

double NNfunction_ng_chi01::synapse0x2acb860() {
   return (neuron0x2ac7d40()*-2.35579);
}

double NNfunction_ng_chi01::synapse0x2acb8a0() {
   return (neuron0x2ac81e0()*-6.19906);
}

double NNfunction_ng_chi01::synapse0x2acb8e0() {
   return (neuron0x2ac9340()*-4.97064);
}

double NNfunction_ng_chi01::synapse0x2acb920() {
   return (neuron0x2aca4a0()*-10.4785);
}

