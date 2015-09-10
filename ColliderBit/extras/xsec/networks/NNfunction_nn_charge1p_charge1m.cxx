#include "NNfunction_nn_charge1p_charge1m.h"
#include <cmath>

double NNfunction_nn_charge1p_charge1m::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.594)/15.1695;
   input1 = (in1 - 114.944)/753.853;
   input2 = (in2 - 490.688)/450.972;
   input3 = (in3 - 573.814)/866.525;
   input4 = (in4 - 1284.3)/970.537;
   input5 = (in5 - 1248.55)/1042.59;
   input6 = (in6 - 1251.31)/1041.4;
   input7 = (in7 - 1220.18)/999.882;
   input8 = (in8 - 1237.91)/1049.8;
   input9 = (in9 - 1232.22)/1046.22;
   input10 = (in10 - 1174.35)/977.477;
   input11 = (in11 - 1345.27)/1077.52;
   input12 = (in12 - 1348.35)/1077.32;
   input13 = (in13 - 1050.75)/823.197;
   input14 = (in14 - 1342.7)/1058.36;
   input15 = (in15 - 1340.6)/1058.93;
   input16 = (in16 - 876.163)/655.78;
   input17 = (in17 - 1349.46)/1075.8;
   input18 = (in18 - 1347.41)/1077.05;
   input19 = (in19 - 1299.45)/994.467;
   input20 = (in20 - -451.308)/692.139;
   input21 = (in21 - -612.321)/1309.52;
   input22 = (in22 - -93.7569)/1218.23;
   input23 = (in23 - 125.878)/701.552;
   switch(index) {
     case 0:
         return neuron0x3e3e9b0();
     default:
         return 0.;
   }
}

double NNfunction_nn_charge1p_charge1m::Value(int index, double* input) {
   input0 = (input[0] - 23.594)/15.1695;
   input1 = (input[1] - 114.944)/753.853;
   input2 = (input[2] - 490.688)/450.972;
   input3 = (input[3] - 573.814)/866.525;
   input4 = (input[4] - 1284.3)/970.537;
   input5 = (input[5] - 1248.55)/1042.59;
   input6 = (input[6] - 1251.31)/1041.4;
   input7 = (input[7] - 1220.18)/999.882;
   input8 = (input[8] - 1237.91)/1049.8;
   input9 = (input[9] - 1232.22)/1046.22;
   input10 = (input[10] - 1174.35)/977.477;
   input11 = (input[11] - 1345.27)/1077.52;
   input12 = (input[12] - 1348.35)/1077.32;
   input13 = (input[13] - 1050.75)/823.197;
   input14 = (input[14] - 1342.7)/1058.36;
   input15 = (input[15] - 1340.6)/1058.93;
   input16 = (input[16] - 876.163)/655.78;
   input17 = (input[17] - 1349.46)/1075.8;
   input18 = (input[18] - 1347.41)/1077.05;
   input19 = (input[19] - 1299.45)/994.467;
   input20 = (input[20] - -451.308)/692.139;
   input21 = (input[21] - -612.321)/1309.52;
   input22 = (input[22] - -93.7569)/1218.23;
   input23 = (input[23] - 125.878)/701.552;
   switch(index) {
     case 0:
         return neuron0x3e3e9b0();
     default:
         return 0.;
   }
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e09a20() {
   return input0;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e09cd0() {
   return input1;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0a010() {
   return input2;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0a350() {
   return input3;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0a690() {
   return input4;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0a9d0() {
   return input5;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0ad10() {
   return input6;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0b050() {
   return input7;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0b390() {
   return input8;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0b6d0() {
   return input9;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0ba10() {
   return input10;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0bd50() {
   return input11;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0c090() {
   return input12;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0c3d0() {
   return input13;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0c710() {
   return input14;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0ca50() {
   return input15;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0cd90() {
   return input16;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0d2f0() {
   return input17;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0d510() {
   return input18;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0d850() {
   return input19;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0db90() {
   return input20;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0ded0() {
   return input21;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0e210() {
   return input22;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0e550() {
   return input23;
}

double NNfunction_nn_charge1p_charge1m::input0x3e0e9c0() {
   double input = -1.12926;
   input += synapse0x3e0ed00();
   input += synapse0x3e0ed40();
   input += synapse0x3e0ed80();
   input += synapse0x3e0edc0();
   input += synapse0x3e0ee00();
   input += synapse0x3e0ee40();
   input += synapse0x3e0ee80();
   input += synapse0x3e0eec0();
   input += synapse0x3e0ef00();
   input += synapse0x3e0ef40();
   input += synapse0x3e0ef80();
   input += synapse0x3e0efc0();
   input += synapse0x3e0f000();
   input += synapse0x3e0f040();
   input += synapse0x3e0f080();
   input += synapse0x3e0f0c0();
   input += synapse0x3e0eb50();
   input += synapse0x3e0eb90();
   input += synapse0x297fcc0();
   input += synapse0x297fd00();
   input += synapse0x3e0f210();
   input += synapse0x3e0f250();
   input += synapse0x3e0f290();
   input += synapse0x3e0f2d0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0e9c0() {
   double input = input0x3e0e9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e0f310() {
   double input = -1.10638;
   input += synapse0x3e0f650();
   input += synapse0x3e0f690();
   input += synapse0x3e0f6d0();
   input += synapse0x3e0f710();
   input += synapse0x3e0f750();
   input += synapse0x3e0f790();
   input += synapse0x3e0f7d0();
   input += synapse0x3e0f810();
   input += synapse0x3e0f850();
   input += synapse0x3e0f100();
   input += synapse0x3e0f140();
   input += synapse0x3e0f180();
   input += synapse0x3e0f1c0();
   input += synapse0x3e0faa0();
   input += synapse0x3e0fae0();
   input += synapse0x3e0fb20();
   input += synapse0x3e0f4a0();
   input += synapse0x3e0f4e0();
   input += synapse0x3e0fc70();
   input += synapse0x3e0fcb0();
   input += synapse0x3e0fcf0();
   input += synapse0x3e0fd30();
   input += synapse0x3e0fd70();
   input += synapse0x3e0fdb0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0f310() {
   double input = input0x3e0f310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e0fdf0() {
   double input = 2.42665;
   input += synapse0x3e10130();
   input += synapse0x3e10170();
   input += synapse0x3e101b0();
   input += synapse0x3e101f0();
   input += synapse0x3e10230();
   input += synapse0x3e10270();
   input += synapse0x3e102b0();
   input += synapse0x3e102f0();
   input += synapse0x3e10330();
   input += synapse0x3e10370();
   input += synapse0x3e103b0();
   input += synapse0x3e103f0();
   input += synapse0x3e10430();
   input += synapse0x3e10470();
   input += synapse0x3e104b0();
   input += synapse0x3e104f0();
   input += synapse0x3e0ff80();
   input += synapse0x3e0ffc0();
   input += synapse0x29725c0();
   input += synapse0x3bd3b20();
   input += synapse0x3bd3b60();
   input += synapse0x3e12430();
   input += synapse0x3e12470();
   input += synapse0x3e09760();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0fdf0() {
   double input = input0x3e0fdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e0f890() {
   double input = -1.79857;
   input += synapse0x3e09830();
   input += synapse0x3bd43a0();
   input += synapse0x3e0fa20();
   input += synapse0x3e0fa60();
   input += synapse0x3e10640();
   input += synapse0x3e10680();
   input += synapse0x3e106c0();
   input += synapse0x3e10700();
   input += synapse0x3e10740();
   input += synapse0x3e10780();
   input += synapse0x3e107c0();
   input += synapse0x3e10800();
   input += synapse0x3e10840();
   input += synapse0x3e10880();
   input += synapse0x3e108c0();
   input += synapse0x3e10900();
   input += synapse0x3e097a0();
   input += synapse0x3e097e0();
   input += synapse0x3e10a50();
   input += synapse0x3e10a90();
   input += synapse0x3e10ad0();
   input += synapse0x3e10b10();
   input += synapse0x3e10b50();
   input += synapse0x3e10b90();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e0f890() {
   double input = input0x3e0f890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e10bd0() {
   double input = -0.0805107;
   input += synapse0x3e10f10();
   input += synapse0x3e10f50();
   input += synapse0x3e10f90();
   input += synapse0x3e10fd0();
   input += synapse0x3e11010();
   input += synapse0x3e11050();
   input += synapse0x3e11090();
   input += synapse0x3e110d0();
   input += synapse0x3e11110();
   input += synapse0x3e11150();
   input += synapse0x3e11190();
   input += synapse0x3e111d0();
   input += synapse0x3e11210();
   input += synapse0x3e11250();
   input += synapse0x3e11290();
   input += synapse0x3e112d0();
   input += synapse0x3e11420();
   input += synapse0x3e10d60();
   input += synapse0x3e10da0();
   input += synapse0x3e12570();
   input += synapse0x3e125b0();
   input += synapse0x3e125f0();
   input += synapse0x3e12630();
   input += synapse0x3e12670();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e10bd0() {
   double input = input0x3e10bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e126b0() {
   double input = -4.13251;
   input += synapse0x3e129f0();
   input += synapse0x3e12a30();
   input += synapse0x3e12a70();
   input += synapse0x3e12ab0();
   input += synapse0x3e12af0();
   input += synapse0x3e12b30();
   input += synapse0x3e12b70();
   input += synapse0x3e12bb0();
   input += synapse0x3e12bf0();
   input += synapse0x3bd3e70();
   input += synapse0x3bd3eb0();
   input += synapse0x3bd3ef0();
   input += synapse0x3bd3f30();
   input += synapse0x3bd3f70();
   input += synapse0x3bd3fb0();
   input += synapse0x3bd3ff0();
   input += synapse0x3e12840();
   input += synapse0x3e12880();
   input += synapse0x3bd4140();
   input += synapse0x3bd4180();
   input += synapse0x3bd41c0();
   input += synapse0x3bd4200();
   input += synapse0x3bd4240();
   input += synapse0x3e13440();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e126b0() {
   double input = input0x3e126b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e13480() {
   double input = 2.2786;
   input += synapse0x3e137c0();
   input += synapse0x3e13800();
   input += synapse0x3e13840();
   input += synapse0x3e13880();
   input += synapse0x3e138c0();
   input += synapse0x3e13900();
   input += synapse0x3e13940();
   input += synapse0x3e13980();
   input += synapse0x3e139c0();
   input += synapse0x3e13a00();
   input += synapse0x3e13a40();
   input += synapse0x3e13a80();
   input += synapse0x3e13ac0();
   input += synapse0x3e13b00();
   input += synapse0x3e13b40();
   input += synapse0x3e13b80();
   input += synapse0x3e13610();
   input += synapse0x3e13650();
   input += synapse0x3e13cd0();
   input += synapse0x3e13d10();
   input += synapse0x3e13d50();
   input += synapse0x3e13d90();
   input += synapse0x3e13dd0();
   input += synapse0x3e13e10();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e13480() {
   double input = input0x3e13480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e13e50() {
   double input = -3.67593;
   input += synapse0x3e14190();
   input += synapse0x3e141d0();
   input += synapse0x3e14210();
   input += synapse0x3e14250();
   input += synapse0x3e14290();
   input += synapse0x3e142d0();
   input += synapse0x3e14310();
   input += synapse0x3e14350();
   input += synapse0x3e14390();
   input += synapse0x3e143d0();
   input += synapse0x3e14410();
   input += synapse0x3e14450();
   input += synapse0x3e14490();
   input += synapse0x3e144d0();
   input += synapse0x3e14510();
   input += synapse0x3e14550();
   input += synapse0x3e13fe0();
   input += synapse0x3e14020();
   input += synapse0x3e146a0();
   input += synapse0x3e146e0();
   input += synapse0x3e14720();
   input += synapse0x3e14760();
   input += synapse0x3e147a0();
   input += synapse0x3e147e0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e13e50() {
   double input = input0x3e13e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e14820() {
   double input = 0.749649;
   input += synapse0x3e0d1e0();
   input += synapse0x3e0d220();
   input += synapse0x3e0d260();
   input += synapse0x3e0d2a0();
   input += synapse0x3e14d70();
   input += synapse0x3e14db0();
   input += synapse0x3e14df0();
   input += synapse0x3e14e30();
   input += synapse0x3e14e70();
   input += synapse0x3e14eb0();
   input += synapse0x3e14ef0();
   input += synapse0x3e14f30();
   input += synapse0x3e14f70();
   input += synapse0x3e14fb0();
   input += synapse0x3e14ff0();
   input += synapse0x3e15030();
   input += synapse0x3e149b0();
   input += synapse0x3e149f0();
   input += synapse0x3e15180();
   input += synapse0x3e151c0();
   input += synapse0x3e15200();
   input += synapse0x3e15240();
   input += synapse0x3e15280();
   input += synapse0x3e152c0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e14820() {
   double input = input0x3e14820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e15300() {
   double input = -3.26014;
   input += synapse0x3e15640();
   input += synapse0x3e15680();
   input += synapse0x3e156c0();
   input += synapse0x3e15700();
   input += synapse0x3e15740();
   input += synapse0x3e15780();
   input += synapse0x3e157c0();
   input += synapse0x3e15800();
   input += synapse0x3e15840();
   input += synapse0x3e15880();
   input += synapse0x3e158c0();
   input += synapse0x3e15900();
   input += synapse0x3e15940();
   input += synapse0x3e15980();
   input += synapse0x3e159c0();
   input += synapse0x3e15a00();
   input += synapse0x3e15490();
   input += synapse0x3e154d0();
   input += synapse0x3e15b50();
   input += synapse0x3e15b90();
   input += synapse0x3e15bd0();
   input += synapse0x3e15c10();
   input += synapse0x3e15c50();
   input += synapse0x3e15c90();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e15300() {
   double input = input0x3e15300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e15cd0() {
   double input = -5.97245;
   input += synapse0x3e16010();
   input += synapse0x3e16050();
   input += synapse0x3e16090();
   input += synapse0x3e160d0();
   input += synapse0x3e16110();
   input += synapse0x3e16150();
   input += synapse0x3e16190();
   input += synapse0x3e161d0();
   input += synapse0x3e16210();
   input += synapse0x3e16250();
   input += synapse0x3e16290();
   input += synapse0x3e162d0();
   input += synapse0x3e16310();
   input += synapse0x3e16350();
   input += synapse0x3e16390();
   input += synapse0x3e163d0();
   input += synapse0x3e15e60();
   input += synapse0x3e15ea0();
   input += synapse0x3e12c30();
   input += synapse0x3e12c70();
   input += synapse0x3e12cb0();
   input += synapse0x3e12cf0();
   input += synapse0x3e12d30();
   input += synapse0x3e12d70();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e15cd0() {
   double input = input0x3e15cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e12db0() {
   double input = 2.75754;
   input += synapse0x3e130f0();
   input += synapse0x3e13130();
   input += synapse0x3e13170();
   input += synapse0x3e131b0();
   input += synapse0x3e131f0();
   input += synapse0x3e13230();
   input += synapse0x3e13270();
   input += synapse0x3e132b0();
   input += synapse0x3e132f0();
   input += synapse0x3e13330();
   input += synapse0x3e13370();
   input += synapse0x3e133b0();
   input += synapse0x3e133f0();
   input += synapse0x3e17530();
   input += synapse0x3e17570();
   input += synapse0x3e175b0();
   input += synapse0x3e12f40();
   input += synapse0x3e12f80();
   input += synapse0x3e17700();
   input += synapse0x3e17740();
   input += synapse0x3e17780();
   input += synapse0x3e177c0();
   input += synapse0x3e17800();
   input += synapse0x3e17840();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e12db0() {
   double input = input0x3e12db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e17880() {
   double input = -0.436499;
   input += synapse0x3e17bc0();
   input += synapse0x3e17c00();
   input += synapse0x3e17c40();
   input += synapse0x3e17c80();
   input += synapse0x3e17cc0();
   input += synapse0x3e17d00();
   input += synapse0x3e17d40();
   input += synapse0x3e17d80();
   input += synapse0x3e17dc0();
   input += synapse0x3e17e00();
   input += synapse0x3e17e40();
   input += synapse0x3e17e80();
   input += synapse0x3e17ec0();
   input += synapse0x3e17f00();
   input += synapse0x3e17f40();
   input += synapse0x3e17f80();
   input += synapse0x3e17a10();
   input += synapse0x3e17a50();
   input += synapse0x3e180d0();
   input += synapse0x3e18110();
   input += synapse0x3e18150();
   input += synapse0x3e18190();
   input += synapse0x3e181d0();
   input += synapse0x3e18210();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e17880() {
   double input = input0x3e17880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e18250() {
   double input = 0.726994;
   input += synapse0x3e18590();
   input += synapse0x3e185d0();
   input += synapse0x3e18610();
   input += synapse0x3e18650();
   input += synapse0x3e18690();
   input += synapse0x3e186d0();
   input += synapse0x3e18710();
   input += synapse0x3e18750();
   input += synapse0x3e18790();
   input += synapse0x3e187d0();
   input += synapse0x3e18810();
   input += synapse0x3e18850();
   input += synapse0x3e18890();
   input += synapse0x3e188d0();
   input += synapse0x3e18910();
   input += synapse0x3e18950();
   input += synapse0x3e183e0();
   input += synapse0x3e18420();
   input += synapse0x3e18aa0();
   input += synapse0x3e18ae0();
   input += synapse0x3e18b20();
   input += synapse0x3e18b60();
   input += synapse0x3e18ba0();
   input += synapse0x3e18be0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e18250() {
   double input = input0x3e18250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e18c20() {
   double input = 1.51913;
   input += synapse0x3e18f60();
   input += synapse0x3e18fa0();
   input += synapse0x3e18fe0();
   input += synapse0x3e19020();
   input += synapse0x3e19060();
   input += synapse0x3e190a0();
   input += synapse0x3e190e0();
   input += synapse0x3e19120();
   input += synapse0x3e19160();
   input += synapse0x3e191a0();
   input += synapse0x3e191e0();
   input += synapse0x3e19220();
   input += synapse0x3e19260();
   input += synapse0x3e192a0();
   input += synapse0x3e192e0();
   input += synapse0x3e19320();
   input += synapse0x3e18db0();
   input += synapse0x3e18df0();
   input += synapse0x3e19470();
   input += synapse0x3e194b0();
   input += synapse0x3e194f0();
   input += synapse0x3e19530();
   input += synapse0x3e19570();
   input += synapse0x3e195b0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e18c20() {
   double input = input0x3e18c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e195f0() {
   double input = 1.63168;
   input += synapse0x3e19930();
   input += synapse0x3e09bb0();
   input += synapse0x3e09bf0();
   input += synapse0x3e09ef0();
   input += synapse0x3e09f30();
   input += synapse0x3e0a230();
   input += synapse0x3e0a270();
   input += synapse0x3e0a570();
   input += synapse0x3e0a5b0();
   input += synapse0x3e0a8b0();
   input += synapse0x3e0a8f0();
   input += synapse0x3e0abf0();
   input += synapse0x3e0ac30();
   input += synapse0x3e0af30();
   input += synapse0x3e0af70();
   input += synapse0x3e0b270();
   input += synapse0x3e0b2b0();
   input += synapse0x3e0b5b0();
   input += synapse0x3e0b5f0();
   input += synapse0x3e0b8f0();
   input += synapse0x3e0b930();
   input += synapse0x3e0bc30();
   input += synapse0x3e0bc70();
   input += synapse0x3e0bf70();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e195f0() {
   double input = input0x3e195f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e1b400() {
   double input = 0.941959;
   input += synapse0x3e0bfb0();
   input += synapse0x3e0cc70();
   input += synapse0x3e0ccb0();
   input += synapse0x3e19780();
   input += synapse0x3e197c0();
   input += synapse0x3e0cfb0();
   input += synapse0x3e0cff0();
   input += synapse0x296d6e0();
   input += synapse0x296d720();
   input += synapse0x3e0d730();
   input += synapse0x3e0d770();
   input += synapse0x3e0da70();
   input += synapse0x3e0dab0();
   input += synapse0x3e0ddb0();
   input += synapse0x3e0ddf0();
   input += synapse0x3e0e0f0();
   input += synapse0x3e0e130();
   input += synapse0x3e0e430();
   input += synapse0x3e0e470();
   input += synapse0x3e0e770();
   input += synapse0x3e0e7b0();
   input += synapse0x3e0c2b0();
   input += synapse0x3e0c2f0();
   input += synapse0x3e1b6a0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e1b400() {
   double input = input0x3e1b400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e1b6e0() {
   double input = -2.72684;
   input += synapse0x3e1ba20();
   input += synapse0x3e1ba60();
   input += synapse0x3e1baa0();
   input += synapse0x3e1bae0();
   input += synapse0x3e1bb20();
   input += synapse0x3e1bb60();
   input += synapse0x3e1bba0();
   input += synapse0x3e1bbe0();
   input += synapse0x3e1bc20();
   input += synapse0x3e1bc60();
   input += synapse0x3e1bca0();
   input += synapse0x3e1bce0();
   input += synapse0x3e1bd20();
   input += synapse0x3e1bd60();
   input += synapse0x3e1bda0();
   input += synapse0x3e1bde0();
   input += synapse0x3e1b870();
   input += synapse0x3e1b8b0();
   input += synapse0x3e1bf30();
   input += synapse0x3e1bf70();
   input += synapse0x3e1bfb0();
   input += synapse0x3e1bff0();
   input += synapse0x3e1c030();
   input += synapse0x3e1c070();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e1b6e0() {
   double input = input0x3e1b6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e1c0b0() {
   double input = 0.633483;
   input += synapse0x3e1c3f0();
   input += synapse0x3e1c430();
   input += synapse0x3e1c470();
   input += synapse0x3e1c4b0();
   input += synapse0x3e1c4f0();
   input += synapse0x3e1c530();
   input += synapse0x3e1c570();
   input += synapse0x3e1c5b0();
   input += synapse0x3e1c5f0();
   input += synapse0x3e1c630();
   input += synapse0x3e1c670();
   input += synapse0x3e1c6b0();
   input += synapse0x3e1c6f0();
   input += synapse0x3e1c730();
   input += synapse0x3e1c770();
   input += synapse0x3e1c7b0();
   input += synapse0x3e1c240();
   input += synapse0x3e1c280();
   input += synapse0x3e1c900();
   input += synapse0x3e1c940();
   input += synapse0x3e1c980();
   input += synapse0x3e1c9c0();
   input += synapse0x3e1ca00();
   input += synapse0x3e1ca40();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e1c0b0() {
   double input = input0x3e1c0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e1ca80() {
   double input = 0.132096;
   input += synapse0x3e1cdc0();
   input += synapse0x3e1ce00();
   input += synapse0x3e1ce40();
   input += synapse0x3e1ce80();
   input += synapse0x3e1cec0();
   input += synapse0x3e1cf00();
   input += synapse0x3e1cf40();
   input += synapse0x3e1cf80();
   input += synapse0x3e1cfc0();
   input += synapse0x3e1d000();
   input += synapse0x3e1d040();
   input += synapse0x3e1d080();
   input += synapse0x3e1d0c0();
   input += synapse0x3e1d100();
   input += synapse0x3e1d140();
   input += synapse0x3e1d180();
   input += synapse0x3e1cc10();
   input += synapse0x3e1cc50();
   input += synapse0x3e1d2d0();
   input += synapse0x3e1d310();
   input += synapse0x3e1d350();
   input += synapse0x3e1d390();
   input += synapse0x3e1d3d0();
   input += synapse0x3e1d410();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e1ca80() {
   double input = input0x3e1ca80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e1d450() {
   double input = 3.19402;
   input += synapse0x3e1d790();
   input += synapse0x3e1d7d0();
   input += synapse0x3e1d810();
   input += synapse0x3e1d850();
   input += synapse0x3e1d890();
   input += synapse0x3e1d8d0();
   input += synapse0x3e1d910();
   input += synapse0x3e1d950();
   input += synapse0x3e1d990();
   input += synapse0x3e1d9d0();
   input += synapse0x3e1da10();
   input += synapse0x3e1da50();
   input += synapse0x3e1da90();
   input += synapse0x3e1dad0();
   input += synapse0x3e1db10();
   input += synapse0x3e1db50();
   input += synapse0x3e1d5e0();
   input += synapse0x3e1d620();
   input += synapse0x3e1dca0();
   input += synapse0x3e1dce0();
   input += synapse0x3e1dd20();
   input += synapse0x3e1dd60();
   input += synapse0x3e1dda0();
   input += synapse0x3e1dde0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e1d450() {
   double input = input0x3e1d450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e1de20() {
   double input = 0.704861;
   input += synapse0x3e1e160();
   input += synapse0x3e1e1a0();
   input += synapse0x3e1e1e0();
   input += synapse0x3e1e220();
   input += synapse0x3e1e260();
   input += synapse0x3e1e2a0();
   input += synapse0x3e1e2e0();
   input += synapse0x3e1e320();
   input += synapse0x3e1e360();
   input += synapse0x3e16520();
   input += synapse0x3e16560();
   input += synapse0x3e165a0();
   input += synapse0x3e165e0();
   input += synapse0x3e16620();
   input += synapse0x3e16660();
   input += synapse0x3e166a0();
   input += synapse0x3e1dfb0();
   input += synapse0x3e1dff0();
   input += synapse0x3e167f0();
   input += synapse0x3e16830();
   input += synapse0x3e16870();
   input += synapse0x3e168b0();
   input += synapse0x3e168f0();
   input += synapse0x3e16930();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e1de20() {
   double input = input0x3e1de20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e16970() {
   double input = 4.29918;
   input += synapse0x3e16cb0();
   input += synapse0x3e16cf0();
   input += synapse0x3e16d30();
   input += synapse0x3e16d70();
   input += synapse0x3e16db0();
   input += synapse0x3e16df0();
   input += synapse0x3e16e30();
   input += synapse0x3e16e70();
   input += synapse0x3e16eb0();
   input += synapse0x3e16ef0();
   input += synapse0x3e16f30();
   input += synapse0x3e16f70();
   input += synapse0x3e16fb0();
   input += synapse0x3e16ff0();
   input += synapse0x3e17030();
   input += synapse0x3e17070();
   input += synapse0x3e16b00();
   input += synapse0x3e16b40();
   input += synapse0x3e171c0();
   input += synapse0x3e17200();
   input += synapse0x3e17240();
   input += synapse0x3e17280();
   input += synapse0x3e172c0();
   input += synapse0x3e17300();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e16970() {
   double input = input0x3e16970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e17340() {
   double input = 4.31709;
   input += synapse0x3e174d0();
   input += synapse0x3e20560();
   input += synapse0x3e205a0();
   input += synapse0x3e205e0();
   input += synapse0x3e20620();
   input += synapse0x3e20660();
   input += synapse0x3e206a0();
   input += synapse0x3e206e0();
   input += synapse0x3e20720();
   input += synapse0x3e20760();
   input += synapse0x3e207a0();
   input += synapse0x3e207e0();
   input += synapse0x3e20820();
   input += synapse0x3e20860();
   input += synapse0x3e208a0();
   input += synapse0x3e208e0();
   input += synapse0x3e203b0();
   input += synapse0x3e203f0();
   input += synapse0x3e20a30();
   input += synapse0x3e20a70();
   input += synapse0x3e20ab0();
   input += synapse0x3e20af0();
   input += synapse0x3e20b30();
   input += synapse0x3e20b70();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e17340() {
   double input = input0x3e17340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e20bb0() {
   double input = -1.08822;
   input += synapse0x3e20ef0();
   input += synapse0x3e20f30();
   input += synapse0x3e20f70();
   input += synapse0x3e20fb0();
   input += synapse0x3e20ff0();
   input += synapse0x3e21030();
   input += synapse0x3e21070();
   input += synapse0x3e210b0();
   input += synapse0x3e210f0();
   input += synapse0x3e21130();
   input += synapse0x3e21170();
   input += synapse0x3e211b0();
   input += synapse0x3e211f0();
   input += synapse0x3e21230();
   input += synapse0x3e21270();
   input += synapse0x3e212b0();
   input += synapse0x3e20d40();
   input += synapse0x3e20d80();
   input += synapse0x3e21400();
   input += synapse0x3e21440();
   input += synapse0x3e21480();
   input += synapse0x3e214c0();
   input += synapse0x3e21500();
   input += synapse0x3e21540();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e20bb0() {
   double input = input0x3e20bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e21580() {
   double input = 1.86435;
   input += synapse0x3e218c0();
   input += synapse0x3e21900();
   input += synapse0x3e21940();
   input += synapse0x3e21980();
   input += synapse0x3e219c0();
   input += synapse0x3e21a00();
   input += synapse0x3e21a40();
   input += synapse0x3e21a80();
   input += synapse0x3e21ac0();
   input += synapse0x3e21b00();
   input += synapse0x3e21b40();
   input += synapse0x3e21b80();
   input += synapse0x3e21bc0();
   input += synapse0x3e21c00();
   input += synapse0x3e21c40();
   input += synapse0x3e21c80();
   input += synapse0x3e21710();
   input += synapse0x3e21750();
   input += synapse0x3e21dd0();
   input += synapse0x3e21e10();
   input += synapse0x3e21e50();
   input += synapse0x3e21e90();
   input += synapse0x3e21ed0();
   input += synapse0x3e21f10();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e21580() {
   double input = input0x3e21580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e21f50() {
   double input = -0.497312;
   input += synapse0x3e22290();
   input += synapse0x3e222d0();
   input += synapse0x3e22310();
   input += synapse0x3e22350();
   input += synapse0x3e22390();
   input += synapse0x3e223d0();
   input += synapse0x3e22410();
   input += synapse0x3e22450();
   input += synapse0x3e22490();
   input += synapse0x3e224d0();
   input += synapse0x3e22510();
   input += synapse0x3e22550();
   input += synapse0x3e22590();
   input += synapse0x3e225d0();
   input += synapse0x3e22610();
   input += synapse0x3e22650();
   input += synapse0x3e220e0();
   input += synapse0x3e22120();
   input += synapse0x3e227a0();
   input += synapse0x3e227e0();
   input += synapse0x3e22820();
   input += synapse0x3e22860();
   input += synapse0x3e228a0();
   input += synapse0x3e228e0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e21f50() {
   double input = input0x3e21f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e22920() {
   double input = -0.0863931;
   input += synapse0x3e22c60();
   input += synapse0x3e22ca0();
   input += synapse0x3e22ce0();
   input += synapse0x3e22d20();
   input += synapse0x3e22d60();
   input += synapse0x3e22da0();
   input += synapse0x3e22de0();
   input += synapse0x3e22e20();
   input += synapse0x3e22e60();
   input += synapse0x3e22ea0();
   input += synapse0x3e22ee0();
   input += synapse0x3e22f20();
   input += synapse0x3e22f60();
   input += synapse0x3e22fa0();
   input += synapse0x3e22fe0();
   input += synapse0x3e23020();
   input += synapse0x3e22ab0();
   input += synapse0x3e22af0();
   input += synapse0x3e23170();
   input += synapse0x3e231b0();
   input += synapse0x3e231f0();
   input += synapse0x3e23230();
   input += synapse0x3e23270();
   input += synapse0x3e232b0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e22920() {
   double input = input0x3e22920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e232f0() {
   double input = -0.525344;
   input += synapse0x3e23630();
   input += synapse0x3e23670();
   input += synapse0x3e236b0();
   input += synapse0x3e236f0();
   input += synapse0x3e23730();
   input += synapse0x3e23770();
   input += synapse0x3e237b0();
   input += synapse0x3e237f0();
   input += synapse0x3e23830();
   input += synapse0x3e23870();
   input += synapse0x3e238b0();
   input += synapse0x3e238f0();
   input += synapse0x3e23930();
   input += synapse0x3e23970();
   input += synapse0x3e239b0();
   input += synapse0x3e239f0();
   input += synapse0x3e23480();
   input += synapse0x3e234c0();
   input += synapse0x3e23b40();
   input += synapse0x3e23b80();
   input += synapse0x3e23bc0();
   input += synapse0x3e23c00();
   input += synapse0x3e23c40();
   input += synapse0x3e23c80();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e232f0() {
   double input = input0x3e232f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e23cc0() {
   double input = -0.379487;
   input += synapse0x3e24000();
   input += synapse0x3e24040();
   input += synapse0x3e24080();
   input += synapse0x3e240c0();
   input += synapse0x3e24100();
   input += synapse0x3e24140();
   input += synapse0x3e24180();
   input += synapse0x3e241c0();
   input += synapse0x3e24200();
   input += synapse0x3e24240();
   input += synapse0x3e24280();
   input += synapse0x3e242c0();
   input += synapse0x3e24300();
   input += synapse0x3e24340();
   input += synapse0x3e24380();
   input += synapse0x3e243c0();
   input += synapse0x3e23e50();
   input += synapse0x3e23e90();
   input += synapse0x3e24510();
   input += synapse0x3e24550();
   input += synapse0x3e24590();
   input += synapse0x3e245d0();
   input += synapse0x3e24610();
   input += synapse0x3e24650();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e23cc0() {
   double input = input0x3e23cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e24690() {
   double input = 6.89802;
   input += synapse0x3e249d0();
   input += synapse0x3e24a10();
   input += synapse0x3e24a50();
   input += synapse0x3e24a90();
   input += synapse0x3e24ad0();
   input += synapse0x3e24b10();
   input += synapse0x3e24b50();
   input += synapse0x3e24b90();
   input += synapse0x3e24bd0();
   input += synapse0x3e24c10();
   input += synapse0x3e24c50();
   input += synapse0x3e24c90();
   input += synapse0x3e24cd0();
   input += synapse0x3e24d10();
   input += synapse0x3e24d50();
   input += synapse0x3e24d90();
   input += synapse0x3e24820();
   input += synapse0x3e24860();
   input += synapse0x3e24ee0();
   input += synapse0x3e24f20();
   input += synapse0x3e24f60();
   input += synapse0x3e24fa0();
   input += synapse0x3e24fe0();
   input += synapse0x3e25020();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e24690() {
   double input = input0x3e24690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e25060() {
   double input = -0.0747546;
   input += synapse0x3e253a0();
   input += synapse0x3e19970();
   input += synapse0x3e199b0();
   input += synapse0x3e199f0();
   input += synapse0x3e19c40();
   input += synapse0x3e19c80();
   input += synapse0x3e19cc0();
   input += synapse0x3e19f10();
   input += synapse0x3e19f50();
   input += synapse0x3e1a1a0();
   input += synapse0x3e1a1e0();
   input += synapse0x3e1a220();
   input += synapse0x3e1a470();
   input += synapse0x3e1a4b0();
   input += synapse0x3e1a700();
   input += synapse0x3e1a740();
   input += synapse0x3e251f0();
   input += synapse0x3e25230();
   input += synapse0x3e1a890();
   input += synapse0x3e1ada0();
   input += synapse0x3e1ade0();
   input += synapse0x3e1ae20();
   input += synapse0x3e1b070();
   input += synapse0x3e1b0b0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e25060() {
   double input = input0x3e25060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e1b0f0() {
   double input = -0.669497;
   input += synapse0x3e1a960();
   input += synapse0x3e1a9a0();
   input += synapse0x3e1a9e0();
   input += synapse0x3e1aa20();
   input += synapse0x3e1b3a0();
   input += synapse0x3e276f0();
   input += synapse0x3e27730();
   input += synapse0x3e27770();
   input += synapse0x3e277b0();
   input += synapse0x3e277f0();
   input += synapse0x3e27830();
   input += synapse0x3e27870();
   input += synapse0x3e278b0();
   input += synapse0x3e278f0();
   input += synapse0x3e27930();
   input += synapse0x3e27970();
   input += synapse0x3e1b280();
   input += synapse0x3e1b2c0();
   input += synapse0x3e27ac0();
   input += synapse0x3e27b00();
   input += synapse0x3e27b40();
   input += synapse0x3e27b80();
   input += synapse0x3e27bc0();
   input += synapse0x3e27c00();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e1b0f0() {
   double input = input0x3e1b0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e27c40() {
   double input = -2.68337;
   input += synapse0x3e27f80();
   input += synapse0x3e27fc0();
   input += synapse0x3e28000();
   input += synapse0x3e28040();
   input += synapse0x3e28080();
   input += synapse0x3e280c0();
   input += synapse0x3e28100();
   input += synapse0x3e28140();
   input += synapse0x3e28180();
   input += synapse0x3e281c0();
   input += synapse0x3e28200();
   input += synapse0x3e28240();
   input += synapse0x3e28280();
   input += synapse0x3e282c0();
   input += synapse0x3e28300();
   input += synapse0x3e28340();
   input += synapse0x3e27dd0();
   input += synapse0x3e27e10();
   input += synapse0x3e28490();
   input += synapse0x3e284d0();
   input += synapse0x3e28510();
   input += synapse0x3e28550();
   input += synapse0x3e28590();
   input += synapse0x3e285d0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e27c40() {
   double input = input0x3e27c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e28610() {
   double input = 0.320874;
   input += synapse0x3e28950();
   input += synapse0x3e28990();
   input += synapse0x3e289d0();
   input += synapse0x3e28a10();
   input += synapse0x3e28a50();
   input += synapse0x3e28a90();
   input += synapse0x3e28ad0();
   input += synapse0x3e28b10();
   input += synapse0x3e28b50();
   input += synapse0x3e28b90();
   input += synapse0x3e28bd0();
   input += synapse0x3e28c10();
   input += synapse0x3e28c50();
   input += synapse0x3e28c90();
   input += synapse0x3e28cd0();
   input += synapse0x3e28d10();
   input += synapse0x3e287a0();
   input += synapse0x3e287e0();
   input += synapse0x3e28e60();
   input += synapse0x3e28ea0();
   input += synapse0x3e28ee0();
   input += synapse0x3e28f20();
   input += synapse0x3e28f60();
   input += synapse0x3e28fa0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e28610() {
   double input = input0x3e28610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e28fe0() {
   double input = -0.0896945;
   input += synapse0x3e29320();
   input += synapse0x3e29360();
   input += synapse0x3e293a0();
   input += synapse0x3e293e0();
   input += synapse0x3e29420();
   input += synapse0x3e29460();
   input += synapse0x3e294a0();
   input += synapse0x3e294e0();
   input += synapse0x3e29520();
   input += synapse0x3e29560();
   input += synapse0x3e295a0();
   input += synapse0x3e295e0();
   input += synapse0x3e29620();
   input += synapse0x3e29660();
   input += synapse0x3e296a0();
   input += synapse0x3e296e0();
   input += synapse0x3e29170();
   input += synapse0x3e291b0();
   input += synapse0x3e29830();
   input += synapse0x3e29870();
   input += synapse0x3e298b0();
   input += synapse0x3e298f0();
   input += synapse0x3e29930();
   input += synapse0x3e29970();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e28fe0() {
   double input = input0x3e28fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e299b0() {
   double input = 1.07285;
   input += synapse0x3e29cf0();
   input += synapse0x3e29d30();
   input += synapse0x3e29d70();
   input += synapse0x3e29db0();
   input += synapse0x3e29df0();
   input += synapse0x3e29e30();
   input += synapse0x3e29e70();
   input += synapse0x3e29eb0();
   input += synapse0x3e29ef0();
   input += synapse0x3e29f30();
   input += synapse0x3e29f70();
   input += synapse0x3e29fb0();
   input += synapse0x3e29ff0();
   input += synapse0x3e2a030();
   input += synapse0x3e2a070();
   input += synapse0x3e2a0b0();
   input += synapse0x3e29b40();
   input += synapse0x3e29b80();
   input += synapse0x3e2a200();
   input += synapse0x3e2a240();
   input += synapse0x3e2a280();
   input += synapse0x3e2a2c0();
   input += synapse0x3e2a300();
   input += synapse0x3e2a340();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e299b0() {
   double input = input0x3e299b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e2a380() {
   double input = -1.81697;
   input += synapse0x3e2a6c0();
   input += synapse0x3e2a700();
   input += synapse0x3e2a740();
   input += synapse0x3e2a780();
   input += synapse0x3e2a7c0();
   input += synapse0x3e2a800();
   input += synapse0x3e2a840();
   input += synapse0x3e2a880();
   input += synapse0x3e2a8c0();
   input += synapse0x3e2a900();
   input += synapse0x3e2a940();
   input += synapse0x3e2a980();
   input += synapse0x3e2a9c0();
   input += synapse0x3e2aa00();
   input += synapse0x3e2aa40();
   input += synapse0x3e2aa80();
   input += synapse0x3e2a510();
   input += synapse0x3e2a550();
   input += synapse0x3e2abd0();
   input += synapse0x3e2ac10();
   input += synapse0x3e2ac50();
   input += synapse0x3e2ac90();
   input += synapse0x3e2acd0();
   input += synapse0x3e2ad10();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e2a380() {
   double input = input0x3e2a380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e2ad50() {
   double input = 6.02941;
   input += synapse0x3e2b090();
   input += synapse0x3e2b0d0();
   input += synapse0x3e2b110();
   input += synapse0x3e2b150();
   input += synapse0x3e2b190();
   input += synapse0x3e2b1d0();
   input += synapse0x3e2b210();
   input += synapse0x3e2b250();
   input += synapse0x3e2b290();
   input += synapse0x3e2b2d0();
   input += synapse0x3e2b310();
   input += synapse0x3e2b350();
   input += synapse0x3e2b390();
   input += synapse0x3e2b3d0();
   input += synapse0x3e2b410();
   input += synapse0x3e2b450();
   input += synapse0x3e2aee0();
   input += synapse0x3e2af20();
   input += synapse0x3e2b5a0();
   input += synapse0x3e2b5e0();
   input += synapse0x3e2b620();
   input += synapse0x3e2b660();
   input += synapse0x3e2b6a0();
   input += synapse0x3e2b6e0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e2ad50() {
   double input = input0x3e2ad50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e2b720() {
   double input = 1.26754;
   input += synapse0x3e2ba60();
   input += synapse0x3e2baa0();
   input += synapse0x3e2bae0();
   input += synapse0x3e2bb20();
   input += synapse0x3e2bb60();
   input += synapse0x3e2bba0();
   input += synapse0x3e2bbe0();
   input += synapse0x3e2bc20();
   input += synapse0x3e2bc60();
   input += synapse0x3e2bca0();
   input += synapse0x3e2bce0();
   input += synapse0x3e2bd20();
   input += synapse0x3e2bd60();
   input += synapse0x3e2bda0();
   input += synapse0x3e2bde0();
   input += synapse0x3e2be20();
   input += synapse0x3e2b8b0();
   input += synapse0x3e2b8f0();
   input += synapse0x3e2bf70();
   input += synapse0x3e2bfb0();
   input += synapse0x3e2bff0();
   input += synapse0x3e2c030();
   input += synapse0x3e2c070();
   input += synapse0x3e2c0b0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e2b720() {
   double input = input0x3e2b720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e2c0f0() {
   double input = -2.22556;
   input += synapse0x3e14b60();
   input += synapse0x3e14ba0();
   input += synapse0x3e14be0();
   input += synapse0x3e14c20();
   input += synapse0x3e14c60();
   input += synapse0x3e14ca0();
   input += synapse0x3e14ce0();
   input += synapse0x3e14d20();
   input += synapse0x3e2c840();
   input += synapse0x3e2c880();
   input += synapse0x3e2c8c0();
   input += synapse0x3e2c900();
   input += synapse0x3e2c940();
   input += synapse0x3e2c980();
   input += synapse0x3e2c9c0();
   input += synapse0x3e2ca00();
   input += synapse0x3e2c280();
   input += synapse0x3e2c2c0();
   input += synapse0x3e2cb50();
   input += synapse0x3e2cb90();
   input += synapse0x3e2cbd0();
   input += synapse0x3e2cc10();
   input += synapse0x3e2cc50();
   input += synapse0x3e2cc90();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e2c0f0() {
   double input = input0x3e2c0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e2ccd0() {
   double input = 2.77967;
   input += synapse0x3e2d010();
   input += synapse0x3e2d050();
   input += synapse0x3e2d090();
   input += synapse0x3e2d0d0();
   input += synapse0x3e2d110();
   input += synapse0x3e2d150();
   input += synapse0x3e2d190();
   input += synapse0x3e2d1d0();
   input += synapse0x3e2d210();
   input += synapse0x3e2d250();
   input += synapse0x3e2d290();
   input += synapse0x3e2d2d0();
   input += synapse0x3e2d310();
   input += synapse0x3e2d350();
   input += synapse0x3e2d390();
   input += synapse0x3e2d3d0();
   input += synapse0x3e2ce60();
   input += synapse0x3e2cea0();
   input += synapse0x3e2d520();
   input += synapse0x3e2d560();
   input += synapse0x3e2d5a0();
   input += synapse0x3e2d5e0();
   input += synapse0x3e2d620();
   input += synapse0x3e2d660();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e2ccd0() {
   double input = input0x3e2ccd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e2d6a0() {
   double input = -0.0201064;
   input += synapse0x3e2d9e0();
   input += synapse0x3e2da20();
   input += synapse0x3e2da60();
   input += synapse0x3e2daa0();
   input += synapse0x3e2dae0();
   input += synapse0x3e2db20();
   input += synapse0x3e2db60();
   input += synapse0x3e2dba0();
   input += synapse0x3e2dbe0();
   input += synapse0x3e2dc20();
   input += synapse0x3e2dc60();
   input += synapse0x3e2dca0();
   input += synapse0x3e2dce0();
   input += synapse0x3e2dd20();
   input += synapse0x3e2dd60();
   input += synapse0x3e2dda0();
   input += synapse0x3e2d830();
   input += synapse0x3e2d870();
   input += synapse0x3e1e3a0();
   input += synapse0x3e1e3e0();
   input += synapse0x3e1e420();
   input += synapse0x3e1e460();
   input += synapse0x3e1e4a0();
   input += synapse0x3e1e4e0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e2d6a0() {
   double input = input0x3e2d6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e1e520() {
   double input = -6.77475;
   input += synapse0x3e1e860();
   input += synapse0x3e1e8a0();
   input += synapse0x3e1e8e0();
   input += synapse0x3e1e920();
   input += synapse0x3e1e960();
   input += synapse0x3e1e9a0();
   input += synapse0x3e1e9e0();
   input += synapse0x3e1ea20();
   input += synapse0x3e1ea60();
   input += synapse0x3e1eaa0();
   input += synapse0x3e1eae0();
   input += synapse0x3e1eb20();
   input += synapse0x3e1eb60();
   input += synapse0x3e1eba0();
   input += synapse0x3e1ebe0();
   input += synapse0x3e1ec20();
   input += synapse0x3e1e6b0();
   input += synapse0x3e1e6f0();
   input += synapse0x3e1ed70();
   input += synapse0x3e1edb0();
   input += synapse0x3e1edf0();
   input += synapse0x3e1ee30();
   input += synapse0x3e1ee70();
   input += synapse0x3e1eeb0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e1e520() {
   double input = input0x3e1e520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e1eef0() {
   double input = 2.57623;
   input += synapse0x3e1f230();
   input += synapse0x3e1f270();
   input += synapse0x3e1f2b0();
   input += synapse0x3e1f2f0();
   input += synapse0x3e1f330();
   input += synapse0x3e1f370();
   input += synapse0x3e1f3b0();
   input += synapse0x3e1f3f0();
   input += synapse0x3e1f430();
   input += synapse0x3e1f470();
   input += synapse0x3e1f4b0();
   input += synapse0x3e1f4f0();
   input += synapse0x3e1f530();
   input += synapse0x3e1f570();
   input += synapse0x3e1f5b0();
   input += synapse0x3e1f5f0();
   input += synapse0x3e1f080();
   input += synapse0x3e1f0c0();
   input += synapse0x3e1f740();
   input += synapse0x3e1f780();
   input += synapse0x3e1f7c0();
   input += synapse0x3e1f800();
   input += synapse0x3e1f840();
   input += synapse0x3e1f880();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e1eef0() {
   double input = input0x3e1eef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e1f8c0() {
   double input = -1.17354;
   input += synapse0x3e1fc00();
   input += synapse0x3e1fc40();
   input += synapse0x3e1fc80();
   input += synapse0x3e1fcc0();
   input += synapse0x3e1fd00();
   input += synapse0x3e1fd40();
   input += synapse0x3e1fd80();
   input += synapse0x3e1fdc0();
   input += synapse0x3e1fe00();
   input += synapse0x3e1fe40();
   input += synapse0x3e1fe80();
   input += synapse0x3e1fec0();
   input += synapse0x3e1ff00();
   input += synapse0x3e1ff40();
   input += synapse0x3e1ff80();
   input += synapse0x3e1ffc0();
   input += synapse0x3e1fa50();
   input += synapse0x3e1fa90();
   input += synapse0x3e20110();
   input += synapse0x3e20150();
   input += synapse0x3e20190();
   input += synapse0x3e201d0();
   input += synapse0x3e20210();
   input += synapse0x3e20250();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e1f8c0() {
   double input = input0x3e1f8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e31f00() {
   double input = -1.25354;
   input += synapse0x3e32120();
   input += synapse0x3e32160();
   input += synapse0x3e321a0();
   input += synapse0x3e321e0();
   input += synapse0x3e32220();
   input += synapse0x3e32260();
   input += synapse0x3e322a0();
   input += synapse0x3e322e0();
   input += synapse0x3e32320();
   input += synapse0x3e32360();
   input += synapse0x3e323a0();
   input += synapse0x3e323e0();
   input += synapse0x3e32420();
   input += synapse0x3e32460();
   input += synapse0x3e324a0();
   input += synapse0x3e324e0();
   input += synapse0x3e20290();
   input += synapse0x3e202d0();
   input += synapse0x3e32630();
   input += synapse0x3e32670();
   input += synapse0x3e326b0();
   input += synapse0x3e326f0();
   input += synapse0x3e32730();
   input += synapse0x3e32770();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e31f00() {
   double input = input0x3e31f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e327b0() {
   double input = -0.535547;
   input += synapse0x3e32af0();
   input += synapse0x3e32b30();
   input += synapse0x3e32b70();
   input += synapse0x3e32bb0();
   input += synapse0x3e32bf0();
   input += synapse0x3e32c30();
   input += synapse0x3e32c70();
   input += synapse0x3e32cb0();
   input += synapse0x3e32cf0();
   input += synapse0x3e32d30();
   input += synapse0x3e32d70();
   input += synapse0x3e32db0();
   input += synapse0x3e32df0();
   input += synapse0x3e32e30();
   input += synapse0x3e32e70();
   input += synapse0x3e32eb0();
   input += synapse0x3e32940();
   input += synapse0x3e32980();
   input += synapse0x3e33000();
   input += synapse0x3e33040();
   input += synapse0x3e33080();
   input += synapse0x3e330c0();
   input += synapse0x3e33100();
   input += synapse0x3e33140();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e327b0() {
   double input = input0x3e327b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e33180() {
   double input = 0.426183;
   input += synapse0x3e334c0();
   input += synapse0x3e33500();
   input += synapse0x3e33540();
   input += synapse0x3e33580();
   input += synapse0x3e335c0();
   input += synapse0x3e33600();
   input += synapse0x3e33640();
   input += synapse0x3e33680();
   input += synapse0x3e336c0();
   input += synapse0x3e33700();
   input += synapse0x3e33740();
   input += synapse0x3e33780();
   input += synapse0x3e337c0();
   input += synapse0x3e33800();
   input += synapse0x3e33840();
   input += synapse0x3e33880();
   input += synapse0x3e33310();
   input += synapse0x3e33350();
   input += synapse0x3e339d0();
   input += synapse0x3e33a10();
   input += synapse0x3e33a50();
   input += synapse0x3e33a90();
   input += synapse0x3e33ad0();
   input += synapse0x3e33b10();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e33180() {
   double input = input0x3e33180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e33b50() {
   double input = 1.32409;
   input += synapse0x3e33e90();
   input += synapse0x3e33ed0();
   input += synapse0x3e33f10();
   input += synapse0x3e33f50();
   input += synapse0x3e33f90();
   input += synapse0x3e33fd0();
   input += synapse0x3e34010();
   input += synapse0x3e34050();
   input += synapse0x3e34090();
   input += synapse0x3e340d0();
   input += synapse0x3e34110();
   input += synapse0x3e34150();
   input += synapse0x3e34190();
   input += synapse0x3e341d0();
   input += synapse0x3e34210();
   input += synapse0x3e34250();
   input += synapse0x3e33ce0();
   input += synapse0x3e33d20();
   input += synapse0x3e343a0();
   input += synapse0x3e343e0();
   input += synapse0x3e34420();
   input += synapse0x3e34460();
   input += synapse0x3e344a0();
   input += synapse0x3e344e0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e33b50() {
   double input = input0x3e33b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e3ad50() {
   double input = 0.183466;
   input += synapse0x3bd4310();
   input += synapse0x3bd4350();
   input += synapse0x3e10e80();
   input += synapse0x3e10ec0();
   input += synapse0x3e12960();
   input += synapse0x3e129a0();
   input += synapse0x3e13730();
   input += synapse0x3e13770();
   input += synapse0x3e14100();
   input += synapse0x3e14140();
   input += synapse0x3e14ad0();
   input += synapse0x3e14b10();
   input += synapse0x3e155b0();
   input += synapse0x3e155f0();
   input += synapse0x3e15f80();
   input += synapse0x3e15fc0();
   input += synapse0x3e13060();
   input += synapse0x3e130a0();
   input += synapse0x3e17b30();
   input += synapse0x3e17b70();
   input += synapse0x3e18500();
   input += synapse0x3e18540();
   input += synapse0x3e18ed0();
   input += synapse0x3e18f10();
   input += synapse0x3e198a0();
   input += synapse0x3e198e0();
   input += synapse0x3e0c930();
   input += synapse0x3e0c970();
   input += synapse0x3e1b990();
   input += synapse0x3e1b9d0();
   input += synapse0x3e1c360();
   input += synapse0x3e1c3a0();
   input += synapse0x3e1cd30();
   input += synapse0x3e1cd70();
   input += synapse0x3e1d700();
   input += synapse0x3e1d740();
   input += synapse0x3e1e0d0();
   input += synapse0x3e1e110();
   input += synapse0x3e16c20();
   input += synapse0x3e16c60();
   input += synapse0x3e204d0();
   input += synapse0x3e20510();
   input += synapse0x3e20e60();
   input += synapse0x3e20ea0();
   input += synapse0x3e21830();
   input += synapse0x3e21870();
   input += synapse0x3e22200();
   input += synapse0x3e22240();
   input += synapse0x3e22bd0();
   input += synapse0x3e22c10();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e3ad50() {
   double input = input0x3e3ad50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e3b0f0() {
   double input = 0.38123;
   input += synapse0x3e25310();
   input += synapse0x3e25350();
   input += synapse0x3e1a8d0();
   input += synapse0x3e1a910();
   input += synapse0x3e27ef0();
   input += synapse0x3e27f30();
   input += synapse0x3e288c0();
   input += synapse0x3e28900();
   input += synapse0x3e29290();
   input += synapse0x3e292d0();
   input += synapse0x3e29c60();
   input += synapse0x3e29ca0();
   input += synapse0x3e2a630();
   input += synapse0x3e2a670();
   input += synapse0x3e2b000();
   input += synapse0x3e2b040();
   input += synapse0x3e2b9d0();
   input += synapse0x3e2ba10();
   input += synapse0x3e2c3a0();
   input += synapse0x3e2c3e0();
   input += synapse0x3e2cf80();
   input += synapse0x3e2cfc0();
   input += synapse0x3e2d950();
   input += synapse0x3e2d990();
   input += synapse0x3e1e7d0();
   input += synapse0x3e1e810();
   input += synapse0x3e1f1a0();
   input += synapse0x3e1f1e0();
   input += synapse0x3e1fb70();
   input += synapse0x3e1fbb0();
   input += synapse0x3e32090();
   input += synapse0x3e320d0();
   input += synapse0x3e32a60();
   input += synapse0x3e32aa0();
   input += synapse0x3e33430();
   input += synapse0x3e33470();
   input += synapse0x3e33e00();
   input += synapse0x3e33e40();
   input += synapse0x3e0ec70();
   input += synapse0x3e0ecb0();
   input += synapse0x3e235a0();
   input += synapse0x3e235e0();
   input += synapse0x3e34520();
   input += synapse0x3e34560();
   input += synapse0x3e345a0();
   input += synapse0x3e345e0();
   input += synapse0x3e3b490();
   input += synapse0x3e3b4d0();
   input += synapse0x3e3b510();
   input += synapse0x3e3b550();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e3b0f0() {
   double input = input0x3e3b0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e3b590() {
   double input = -0.723;
   input += synapse0x3e3b8d0();
   input += synapse0x3e3b910();
   input += synapse0x3e3b950();
   input += synapse0x3e3b990();
   input += synapse0x3e3b9d0();
   input += synapse0x3e3ba10();
   input += synapse0x3e3ba50();
   input += synapse0x3e3ba90();
   input += synapse0x3e3bad0();
   input += synapse0x3e3bb10();
   input += synapse0x3e3bb50();
   input += synapse0x3e3bb90();
   input += synapse0x3e3bbd0();
   input += synapse0x3e3bc10();
   input += synapse0x3e3bc50();
   input += synapse0x3e3bc90();
   input += synapse0x3e3b720();
   input += synapse0x3e3b760();
   input += synapse0x3e3bde0();
   input += synapse0x3e3be20();
   input += synapse0x3e3be60();
   input += synapse0x3e3bea0();
   input += synapse0x3e3bee0();
   input += synapse0x3e3bf20();
   input += synapse0x3e3bf60();
   input += synapse0x3e3bfa0();
   input += synapse0x3e3bfe0();
   input += synapse0x3e3c020();
   input += synapse0x3e3c060();
   input += synapse0x3e3c0a0();
   input += synapse0x3e3c0e0();
   input += synapse0x3e3c120();
   input += synapse0x3e3bcd0();
   input += synapse0x3e3bd10();
   input += synapse0x3e3bd50();
   input += synapse0x3e3bd90();
   input += synapse0x3e3c370();
   input += synapse0x3e3c3b0();
   input += synapse0x3e3c3f0();
   input += synapse0x3e3c430();
   input += synapse0x3e3c470();
   input += synapse0x3e3c4b0();
   input += synapse0x3e3c4f0();
   input += synapse0x3e3c530();
   input += synapse0x3e3c570();
   input += synapse0x3e3c5b0();
   input += synapse0x3e3c5f0();
   input += synapse0x3e3c630();
   input += synapse0x3e3c670();
   input += synapse0x3e3c6b0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e3b590() {
   double input = input0x3e3b590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e3c6f0() {
   double input = 0.795042;
   input += synapse0x3e3ca30();
   input += synapse0x3e3ca70();
   input += synapse0x3e3cab0();
   input += synapse0x3e3caf0();
   input += synapse0x3e3cb30();
   input += synapse0x3e3cb70();
   input += synapse0x3e3cbb0();
   input += synapse0x3e3cbf0();
   input += synapse0x3e3cc30();
   input += synapse0x3e3cc70();
   input += synapse0x3e3ccb0();
   input += synapse0x3e3ccf0();
   input += synapse0x3e3cd30();
   input += synapse0x3e3cd70();
   input += synapse0x3e3cdb0();
   input += synapse0x3e3cdf0();
   input += synapse0x3e3c880();
   input += synapse0x3e3c8c0();
   input += synapse0x3e3cf40();
   input += synapse0x3e3cf80();
   input += synapse0x3e3cfc0();
   input += synapse0x3e3d000();
   input += synapse0x3e3d040();
   input += synapse0x3e3d080();
   input += synapse0x3e3d0c0();
   input += synapse0x3e3d100();
   input += synapse0x3e3d140();
   input += synapse0x3e3d180();
   input += synapse0x3e3d1c0();
   input += synapse0x3e3d200();
   input += synapse0x3e3d240();
   input += synapse0x3e3d280();
   input += synapse0x3e3ce30();
   input += synapse0x3e3ce70();
   input += synapse0x3e3ceb0();
   input += synapse0x3e3cef0();
   input += synapse0x3e3d4d0();
   input += synapse0x3e3d510();
   input += synapse0x3e3d550();
   input += synapse0x3e3d590();
   input += synapse0x3e3d5d0();
   input += synapse0x3e3d610();
   input += synapse0x3e3d650();
   input += synapse0x3e3d690();
   input += synapse0x3e3d6d0();
   input += synapse0x3e3d710();
   input += synapse0x3e3d750();
   input += synapse0x3e3d790();
   input += synapse0x3e3d7d0();
   input += synapse0x3e3d810();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e3c6f0() {
   double input = input0x3e3c6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e3d850() {
   double input = -1.04269;
   input += synapse0x3e3db90();
   input += synapse0x3e3dbd0();
   input += synapse0x3e3dc10();
   input += synapse0x3e3dc50();
   input += synapse0x3e3dc90();
   input += synapse0x3e3dcd0();
   input += synapse0x3e3dd10();
   input += synapse0x3e3dd50();
   input += synapse0x3e3dd90();
   input += synapse0x3e3ddd0();
   input += synapse0x3e3de10();
   input += synapse0x3e3de50();
   input += synapse0x3e3de90();
   input += synapse0x3e3ded0();
   input += synapse0x3e3df10();
   input += synapse0x3e3df50();
   input += synapse0x3e3d9e0();
   input += synapse0x3e3da20();
   input += synapse0x3e3e0a0();
   input += synapse0x3e3e0e0();
   input += synapse0x3e3e120();
   input += synapse0x3e3e160();
   input += synapse0x3e3e1a0();
   input += synapse0x3e3e1e0();
   input += synapse0x3e3e220();
   input += synapse0x3e3e260();
   input += synapse0x3e3e2a0();
   input += synapse0x3e3e2e0();
   input += synapse0x3e3e320();
   input += synapse0x3e3e360();
   input += synapse0x3e3e3a0();
   input += synapse0x3e3e3e0();
   input += synapse0x3e3df90();
   input += synapse0x3e3dfd0();
   input += synapse0x3e3e010();
   input += synapse0x3e3e050();
   input += synapse0x3e3e630();
   input += synapse0x3e3e670();
   input += synapse0x3e3e6b0();
   input += synapse0x3e3e6f0();
   input += synapse0x3e3e730();
   input += synapse0x3e3e770();
   input += synapse0x3e3e7b0();
   input += synapse0x3e3e7f0();
   input += synapse0x3e3e830();
   input += synapse0x3e3e870();
   input += synapse0x3e3e8b0();
   input += synapse0x3e3e8f0();
   input += synapse0x3e3e930();
   input += synapse0x3e3e970();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e3d850() {
   double input = input0x3e3d850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::input0x3e3e9b0() {
   double input = 6.92038;
   input += synapse0x3e3ebd0();
   input += synapse0x3e3ec10();
   input += synapse0x3e3ec50();
   input += synapse0x3e3ec90();
   input += synapse0x3e3ecd0();
   return input;
}

double NNfunction_nn_charge1p_charge1m::neuron0x3e3e9b0() {
   double input = input0x3e3e9b0();
   return (input * 1)+0;
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0ed00() {
   return (neuron0x3e09a20()*0.0446357);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0ed40() {
   return (neuron0x3e09cd0()*-0.00447544);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0ed80() {
   return (neuron0x3e0a010()*0.171579);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0edc0() {
   return (neuron0x3e0a350()*-0.0648437);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0ee00() {
   return (neuron0x3e0a690()*-0.0108703);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0ee40() {
   return (neuron0x3e0a9d0()*0.0286656);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0ee80() {
   return (neuron0x3e0ad10()*0.0137827);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0eec0() {
   return (neuron0x3e0b050()*-0.00138518);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0ef00() {
   return (neuron0x3e0b390()*0.0114483);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0ef40() {
   return (neuron0x3e0b6d0()*0.0169291);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0ef80() {
   return (neuron0x3e0ba10()*0.0207157);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0efc0() {
   return (neuron0x3e0bd50()*-0.169902);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f000() {
   return (neuron0x3e0c090()*-0.0158308);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f040() {
   return (neuron0x3e0c3d0()*-0.00757016);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f080() {
   return (neuron0x3e0c710()*0.00488777);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f0c0() {
   return (neuron0x3e0ca50()*0.024098);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0eb50() {
   return (neuron0x3e0cd90()*-0.0109377);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0eb90() {
   return (neuron0x3e0d2f0()*-0.0151224);
}

double NNfunction_nn_charge1p_charge1m::synapse0x297fcc0() {
   return (neuron0x3e0d510()*0.00154617);
}

double NNfunction_nn_charge1p_charge1m::synapse0x297fd00() {
   return (neuron0x3e0d850()*0.00998217);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f210() {
   return (neuron0x3e0db90()*0.0351878);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f250() {
   return (neuron0x3e0ded0()*-0.0267489);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f290() {
   return (neuron0x3e0e210()*-0.0196701);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f2d0() {
   return (neuron0x3e0e550()*3.86694);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f650() {
   return (neuron0x3e09a20()*-0.10983);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f690() {
   return (neuron0x3e09cd0()*0.000180462);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f6d0() {
   return (neuron0x3e0a010()*-0.286877);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f710() {
   return (neuron0x3e0a350()*0.0315682);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f750() {
   return (neuron0x3e0a690()*-0.00789908);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f790() {
   return (neuron0x3e0a9d0()*-0.0196309);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f7d0() {
   return (neuron0x3e0ad10()*-0.0112501);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f810() {
   return (neuron0x3e0b050()*-0.00549153);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f850() {
   return (neuron0x3e0b390()*-0.016169);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f100() {
   return (neuron0x3e0b6d0()*0.00808137);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f140() {
   return (neuron0x3e0ba10()*-0.0121334);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f180() {
   return (neuron0x3e0bd50()*-0.0246665);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f1c0() {
   return (neuron0x3e0c090()*-7.95086e-05);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0faa0() {
   return (neuron0x3e0c3d0()*0.00689122);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0fae0() {
   return (neuron0x3e0c710()*-0.0131321);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0fb20() {
   return (neuron0x3e0ca50()*0.0104855);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f4a0() {
   return (neuron0x3e0cd90()*0.0279556);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0f4e0() {
   return (neuron0x3e0d2f0()*0.0116711);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0fc70() {
   return (neuron0x3e0d510()*-0.00274012);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0fcb0() {
   return (neuron0x3e0d850()*0.00665017);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0fcf0() {
   return (neuron0x3e0db90()*0.00389862);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0fd30() {
   return (neuron0x3e0ded0()*-0.00573335);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0fd70() {
   return (neuron0x3e0e210()*0.0118437);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0fdb0() {
   return (neuron0x3e0e550()*-4.5368);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10130() {
   return (neuron0x3e09a20()*0.0309346);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10170() {
   return (neuron0x3e09cd0()*0.0222544);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e101b0() {
   return (neuron0x3e0a010()*1.91432);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e101f0() {
   return (neuron0x3e0a350()*-0.0341763);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10230() {
   return (neuron0x3e0a690()*0.0878184);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10270() {
   return (neuron0x3e0a9d0()*0.334441);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e102b0() {
   return (neuron0x3e0ad10()*-0.254678);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e102f0() {
   return (neuron0x3e0b050()*0.446456);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10330() {
   return (neuron0x3e0b390()*0.376904);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10370() {
   return (neuron0x3e0b6d0()*0.134087);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e103b0() {
   return (neuron0x3e0ba10()*-0.466594);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e103f0() {
   return (neuron0x3e0bd50()*-0.360345);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10430() {
   return (neuron0x3e0c090()*0.065539);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10470() {
   return (neuron0x3e0c3d0()*0.239994);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e104b0() {
   return (neuron0x3e0c710()*-0.0620354);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e104f0() {
   return (neuron0x3e0ca50()*0.413394);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0ff80() {
   return (neuron0x3e0cd90()*0.00284127);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0ffc0() {
   return (neuron0x3e0d2f0()*0.0846315);
}

double NNfunction_nn_charge1p_charge1m::synapse0x29725c0() {
   return (neuron0x3e0d510()*0.315931);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3bd3b20() {
   return (neuron0x3e0d850()*-0.20005);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3bd3b60() {
   return (neuron0x3e0db90()*-0.092803);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12430() {
   return (neuron0x3e0ded0()*0.0899307);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12470() {
   return (neuron0x3e0e210()*0.0346797);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e09760() {
   return (neuron0x3e0e550()*0.0900397);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e09830() {
   return (neuron0x3e09a20()*0.0347338);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3bd43a0() {
   return (neuron0x3e09cd0()*-0.00339374);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0fa20() {
   return (neuron0x3e0a010()*-2.77306);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0fa60() {
   return (neuron0x3e0a350()*0.00365683);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10640() {
   return (neuron0x3e0a690()*-0.0163205);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10680() {
   return (neuron0x3e0a9d0()*-0.0133719);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e106c0() {
   return (neuron0x3e0ad10()*-0.0221854);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10700() {
   return (neuron0x3e0b050()*-0.0141436);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10740() {
   return (neuron0x3e0b390()*-0.0118237);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10780() {
   return (neuron0x3e0b6d0()*-0.0163282);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e107c0() {
   return (neuron0x3e0ba10()*0.00220039);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10800() {
   return (neuron0x3e0bd50()*0.269223);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10840() {
   return (neuron0x3e0c090()*0.0108542);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10880() {
   return (neuron0x3e0c3d0()*0.027301);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e108c0() {
   return (neuron0x3e0c710()*0.0209753);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10900() {
   return (neuron0x3e0ca50()*-0.0175752);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e097a0() {
   return (neuron0x3e0cd90()*0.00553411);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e097e0() {
   return (neuron0x3e0d2f0()*0.025986);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10a50() {
   return (neuron0x3e0d510()*0.00556814);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10a90() {
   return (neuron0x3e0d850()*0.00381591);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10ad0() {
   return (neuron0x3e0db90()*-0.00657146);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10b10() {
   return (neuron0x3e0ded0()*0.0019093);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10b50() {
   return (neuron0x3e0e210()*-0.032161);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10b90() {
   return (neuron0x3e0e550()*0.090514);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10f10() {
   return (neuron0x3e09a20()*0.205605);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10f50() {
   return (neuron0x3e09cd0()*-0.110713);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10f90() {
   return (neuron0x3e0a010()*-0.904038);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10fd0() {
   return (neuron0x3e0a350()*0.244639);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e11010() {
   return (neuron0x3e0a690()*0.447215);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e11050() {
   return (neuron0x3e0a9d0()*-0.238608);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e11090() {
   return (neuron0x3e0ad10()*-0.143661);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e110d0() {
   return (neuron0x3e0b050()*-0.0808021);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e11110() {
   return (neuron0x3e0b390()*-0.0330977);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e11150() {
   return (neuron0x3e0b6d0()*-0.694854);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e11190() {
   return (neuron0x3e0ba10()*0.702127);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e111d0() {
   return (neuron0x3e0bd50()*-0.414177);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e11210() {
   return (neuron0x3e0c090()*-0.286715);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e11250() {
   return (neuron0x3e0c3d0()*-0.346884);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e11290() {
   return (neuron0x3e0c710()*0.116183);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e112d0() {
   return (neuron0x3e0ca50()*0.181711);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e11420() {
   return (neuron0x3e0cd90()*-0.680749);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10d60() {
   return (neuron0x3e0d2f0()*-0.355892);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10da0() {
   return (neuron0x3e0d510()*-0.567185);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12570() {
   return (neuron0x3e0d850()*-0.508295);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e125b0() {
   return (neuron0x3e0db90()*0.575343);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e125f0() {
   return (neuron0x3e0ded0()*0.45352);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12630() {
   return (neuron0x3e0e210()*-0.209852);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12670() {
   return (neuron0x3e0e550()*0.743768);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e129f0() {
   return (neuron0x3e09a20()*-0.00836277);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12a30() {
   return (neuron0x3e09cd0()*-0.00611725);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12a70() {
   return (neuron0x3e0a010()*0.880555);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12ab0() {
   return (neuron0x3e0a350()*0.0368991);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12af0() {
   return (neuron0x3e0a690()*0.000670807);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12b30() {
   return (neuron0x3e0a9d0()*0.00617627);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12b70() {
   return (neuron0x3e0ad10()*-0.00509429);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12bb0() {
   return (neuron0x3e0b050()*0.010334);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12bf0() {
   return (neuron0x3e0b390()*-0.00525992);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3bd3e70() {
   return (neuron0x3e0b6d0()*-0.0174237);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3bd3eb0() {
   return (neuron0x3e0ba10()*-0.0118167);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3bd3ef0() {
   return (neuron0x3e0bd50()*-3.68165);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3bd3f30() {
   return (neuron0x3e0c090()*0.00506669);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3bd3f70() {
   return (neuron0x3e0c3d0()*0.0302568);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3bd3fb0() {
   return (neuron0x3e0c710()*0.0115087);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3bd3ff0() {
   return (neuron0x3e0ca50()*0.01531);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12840() {
   return (neuron0x3e0cd90()*-0.00745203);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12880() {
   return (neuron0x3e0d2f0()*-0.0106966);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3bd4140() {
   return (neuron0x3e0d510()*-0.011796);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3bd4180() {
   return (neuron0x3e0d850()*0.0119328);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3bd41c0() {
   return (neuron0x3e0db90()*-0.012656);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3bd4200() {
   return (neuron0x3e0ded0()*-0.0123967);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3bd4240() {
   return (neuron0x3e0e210()*-0.0174818);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13440() {
   return (neuron0x3e0e550()*-0.0675869);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e137c0() {
   return (neuron0x3e09a20()*0.0639225);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13800() {
   return (neuron0x3e09cd0()*-0.00210313);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13840() {
   return (neuron0x3e0a010()*0.679389);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13880() {
   return (neuron0x3e0a350()*-0.0479767);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e138c0() {
   return (neuron0x3e0a690()*-0.0241323);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13900() {
   return (neuron0x3e0a9d0()*0.0263055);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13940() {
   return (neuron0x3e0ad10()*0.0276295);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13980() {
   return (neuron0x3e0b050()*0.0124571);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e139c0() {
   return (neuron0x3e0b390()*0.0258238);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13a00() {
   return (neuron0x3e0b6d0()*-0.0115552);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13a40() {
   return (neuron0x3e0ba10()*0.0163625);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13a80() {
   return (neuron0x3e0bd50()*0.0556171);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13ac0() {
   return (neuron0x3e0c090()*0.00425687);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13b00() {
   return (neuron0x3e0c3d0()*-0.0318409);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13b40() {
   return (neuron0x3e0c710()*-0.00116518);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13b80() {
   return (neuron0x3e0ca50()*-0.00145858);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13610() {
   return (neuron0x3e0cd90()*-0.014478);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13650() {
   return (neuron0x3e0d2f0()*-0.0244409);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13cd0() {
   return (neuron0x3e0d510()*-0.0114941);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13d10() {
   return (neuron0x3e0d850()*-0.0238929);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13d50() {
   return (neuron0x3e0db90()*-0.0168556);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13d90() {
   return (neuron0x3e0ded0()*-0.0109031);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13dd0() {
   return (neuron0x3e0e210()*-0.00383965);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13e10() {
   return (neuron0x3e0e550()*4.42192);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14190() {
   return (neuron0x3e09a20()*-0.00620809);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e141d0() {
   return (neuron0x3e09cd0()*0.00615304);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14210() {
   return (neuron0x3e0a010()*0.767979);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14250() {
   return (neuron0x3e0a350()*0.0092874);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14290() {
   return (neuron0x3e0a690()*0.0177021);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e142d0() {
   return (neuron0x3e0a9d0()*0.0364671);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14310() {
   return (neuron0x3e0ad10()*0.0358555);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14350() {
   return (neuron0x3e0b050()*-0.0083622);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14390() {
   return (neuron0x3e0b390()*0.0387185);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e143d0() {
   return (neuron0x3e0b6d0()*-0.0242974);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14410() {
   return (neuron0x3e0ba10()*-0.0200136);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14450() {
   return (neuron0x3e0bd50()*-2.96279);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14490() {
   return (neuron0x3e0c090()*0.0179941);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e144d0() {
   return (neuron0x3e0c3d0()*0.042349);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14510() {
   return (neuron0x3e0c710()*0.0190868);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14550() {
   return (neuron0x3e0ca50()*0.0353351);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13fe0() {
   return (neuron0x3e0cd90()*0.0441536);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14020() {
   return (neuron0x3e0d2f0()*-0.0104617);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e146a0() {
   return (neuron0x3e0d510()*-0.0176126);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e146e0() {
   return (neuron0x3e0d850()*-0.0261123);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14720() {
   return (neuron0x3e0db90()*0.0152239);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14760() {
   return (neuron0x3e0ded0()*-0.0322904);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e147a0() {
   return (neuron0x3e0e210()*-0.00276241);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e147e0() {
   return (neuron0x3e0e550()*-0.643796);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0d1e0() {
   return (neuron0x3e09a20()*-0.0471244);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0d220() {
   return (neuron0x3e09cd0()*0.00235527);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0d260() {
   return (neuron0x3e0a010()*-0.224363);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0d2a0() {
   return (neuron0x3e0a350()*0.0068104);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14d70() {
   return (neuron0x3e0a690()*-0.00560465);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14db0() {
   return (neuron0x3e0a9d0()*0.00212232);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14df0() {
   return (neuron0x3e0ad10()*-0.00357858);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14e30() {
   return (neuron0x3e0b050()*0.0043009);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14e70() {
   return (neuron0x3e0b390()*-0.00378896);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14eb0() {
   return (neuron0x3e0b6d0()*0.00688971);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14ef0() {
   return (neuron0x3e0ba10()*-0.00530573);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14f30() {
   return (neuron0x3e0bd50()*0.0177669);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14f70() {
   return (neuron0x3e0c090()*-0.00246031);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14fb0() {
   return (neuron0x3e0c3d0()*-0.00103771);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14ff0() {
   return (neuron0x3e0c710()*-0.00540746);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15030() {
   return (neuron0x3e0ca50()*-0.00413693);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e149b0() {
   return (neuron0x3e0cd90()*-0.00405655);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e149f0() {
   return (neuron0x3e0d2f0()*-0.00874594);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15180() {
   return (neuron0x3e0d510()*-0.00186852);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e151c0() {
   return (neuron0x3e0d850()*0.00577016);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15200() {
   return (neuron0x3e0db90()*0.000677168);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15240() {
   return (neuron0x3e0ded0()*-0.00252593);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15280() {
   return (neuron0x3e0e210()*0.00372478);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e152c0() {
   return (neuron0x3e0e550()*6.8938);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15640() {
   return (neuron0x3e09a20()*0.00213999);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15680() {
   return (neuron0x3e09cd0()*-0.000714299);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e156c0() {
   return (neuron0x3e0a010()*-2.37322);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15700() {
   return (neuron0x3e0a350()*0.000426917);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15740() {
   return (neuron0x3e0a690()*-0.0229229);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15780() {
   return (neuron0x3e0a9d0()*-0.0199505);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e157c0() {
   return (neuron0x3e0ad10()*-0.00365006);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15800() {
   return (neuron0x3e0b050()*-0.0128429);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15840() {
   return (neuron0x3e0b390()*-0.0221618);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15880() {
   return (neuron0x3e0b6d0()*0.00442456);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e158c0() {
   return (neuron0x3e0ba10()*0.0115067);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15900() {
   return (neuron0x3e0bd50()*0.331895);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15940() {
   return (neuron0x3e0c090()*0.00295965);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15980() {
   return (neuron0x3e0c3d0()*0.0292421);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e159c0() {
   return (neuron0x3e0c710()*0.0131955);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15a00() {
   return (neuron0x3e0ca50()*-0.0171487);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15490() {
   return (neuron0x3e0cd90()*0.0338803);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e154d0() {
   return (neuron0x3e0d2f0()*-0.00317505);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15b50() {
   return (neuron0x3e0d510()*0.00259621);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15b90() {
   return (neuron0x3e0d850()*0.00532672);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15bd0() {
   return (neuron0x3e0db90()*-0.00246585);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15c10() {
   return (neuron0x3e0ded0()*-0.0114738);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15c50() {
   return (neuron0x3e0e210()*-0.0178096);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15c90() {
   return (neuron0x3e0e550()*-5.99686);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16010() {
   return (neuron0x3e09a20()*0.0503406);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16050() {
   return (neuron0x3e09cd0()*0.003722);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16090() {
   return (neuron0x3e0a010()*-5.93601);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e160d0() {
   return (neuron0x3e0a350()*0.0769868);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16110() {
   return (neuron0x3e0a690()*-0.00172099);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16150() {
   return (neuron0x3e0a9d0()*-0.0885106);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16190() {
   return (neuron0x3e0ad10()*-0.0459692);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e161d0() {
   return (neuron0x3e0b050()*-0.0217273);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16210() {
   return (neuron0x3e0b390()*-0.00491022);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16250() {
   return (neuron0x3e0b6d0()*-0.0327586);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16290() {
   return (neuron0x3e0ba10()*0.0180591);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e162d0() {
   return (neuron0x3e0bd50()*0.244609);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16310() {
   return (neuron0x3e0c090()*-0.0049302);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16350() {
   return (neuron0x3e0c3d0()*-0.0173954);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16390() {
   return (neuron0x3e0c710()*0.0350653);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e163d0() {
   return (neuron0x3e0ca50()*-0.0442009);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15e60() {
   return (neuron0x3e0cd90()*0.00473068);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15ea0() {
   return (neuron0x3e0d2f0()*0.0125704);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12c30() {
   return (neuron0x3e0d510()*0.0400904);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12c70() {
   return (neuron0x3e0d850()*0.0426562);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12cb0() {
   return (neuron0x3e0db90()*-0.111067);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12cf0() {
   return (neuron0x3e0ded0()*0.0187855);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12d30() {
   return (neuron0x3e0e210()*0.021362);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12d70() {
   return (neuron0x3e0e550()*-8.44846);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e130f0() {
   return (neuron0x3e09a20()*-0.338859);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13130() {
   return (neuron0x3e09cd0()*0.215496);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13170() {
   return (neuron0x3e0a010()*3.27411);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e131b0() {
   return (neuron0x3e0a350()*0.0120778);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e131f0() {
   return (neuron0x3e0a690()*0.160224);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13230() {
   return (neuron0x3e0a9d0()*-0.0329208);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13270() {
   return (neuron0x3e0ad10()*0.0384347);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e132b0() {
   return (neuron0x3e0b050()*-0.66637);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e132f0() {
   return (neuron0x3e0b390()*0.0980559);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13330() {
   return (neuron0x3e0b6d0()*0.0523907);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13370() {
   return (neuron0x3e0ba10()*0.169615);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e133b0() {
   return (neuron0x3e0bd50()*0.0557025);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e133f0() {
   return (neuron0x3e0c090()*-0.255363);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17530() {
   return (neuron0x3e0c3d0()*-0.17274);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17570() {
   return (neuron0x3e0c710()*-0.0151587);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e175b0() {
   return (neuron0x3e0ca50()*-0.242776);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12f40() {
   return (neuron0x3e0cd90()*0.190576);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12f80() {
   return (neuron0x3e0d2f0()*-0.145935);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17700() {
   return (neuron0x3e0d510()*0.0114029);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17740() {
   return (neuron0x3e0d850()*0.16668);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17780() {
   return (neuron0x3e0db90()*-0.175919);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e177c0() {
   return (neuron0x3e0ded0()*0.0315585);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17800() {
   return (neuron0x3e0e210()*-0.126757);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17840() {
   return (neuron0x3e0e550()*-0.171327);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17bc0() {
   return (neuron0x3e09a20()*0.6198);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17c00() {
   return (neuron0x3e09cd0()*-0.304807);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17c40() {
   return (neuron0x3e0a010()*0.158334);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17c80() {
   return (neuron0x3e0a350()*-0.37182);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17cc0() {
   return (neuron0x3e0a690()*0.417425);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17d00() {
   return (neuron0x3e0a9d0()*0.973081);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17d40() {
   return (neuron0x3e0ad10()*-0.751687);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17d80() {
   return (neuron0x3e0b050()*-0.226651);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17dc0() {
   return (neuron0x3e0b390()*0.751407);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17e00() {
   return (neuron0x3e0b6d0()*0.91486);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17e40() {
   return (neuron0x3e0ba10()*-0.650749);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17e80() {
   return (neuron0x3e0bd50()*-0.0994755);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17ec0() {
   return (neuron0x3e0c090()*-0.22428);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17f00() {
   return (neuron0x3e0c3d0()*-0.126256);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17f40() {
   return (neuron0x3e0c710()*-0.895625);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17f80() {
   return (neuron0x3e0ca50()*0.221076);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17a10() {
   return (neuron0x3e0cd90()*0.0246322);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17a50() {
   return (neuron0x3e0d2f0()*0.30619);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e180d0() {
   return (neuron0x3e0d510()*-0.4645);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18110() {
   return (neuron0x3e0d850()*0.602325);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18150() {
   return (neuron0x3e0db90()*-0.340426);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18190() {
   return (neuron0x3e0ded0()*0.0271533);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e181d0() {
   return (neuron0x3e0e210()*0.293722);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18210() {
   return (neuron0x3e0e550()*-0.36219);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18590() {
   return (neuron0x3e09a20()*0.730222);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e185d0() {
   return (neuron0x3e09cd0()*-0.014627);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18610() {
   return (neuron0x3e0a010()*-0.668317);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18650() {
   return (neuron0x3e0a350()*-0.605384);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18690() {
   return (neuron0x3e0a690()*-0.668287);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e186d0() {
   return (neuron0x3e0a9d0()*-0.429022);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18710() {
   return (neuron0x3e0ad10()*-0.852725);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18750() {
   return (neuron0x3e0b050()*0.993741);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18790() {
   return (neuron0x3e0b390()*0.0325127);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e187d0() {
   return (neuron0x3e0b6d0()*0.210286);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18810() {
   return (neuron0x3e0ba10()*-0.0591806);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18850() {
   return (neuron0x3e0bd50()*1.05956);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18890() {
   return (neuron0x3e0c090()*0.199654);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e188d0() {
   return (neuron0x3e0c3d0()*-0.656064);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18910() {
   return (neuron0x3e0c710()*0.330982);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18950() {
   return (neuron0x3e0ca50()*0.606229);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e183e0() {
   return (neuron0x3e0cd90()*-0.406997);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18420() {
   return (neuron0x3e0d2f0()*0.126421);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18aa0() {
   return (neuron0x3e0d510()*0.0925083);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18ae0() {
   return (neuron0x3e0d850()*0.468961);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18b20() {
   return (neuron0x3e0db90()*0.829292);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18b60() {
   return (neuron0x3e0ded0()*-0.273342);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18ba0() {
   return (neuron0x3e0e210()*-0.302143);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18be0() {
   return (neuron0x3e0e550()*0.109873);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18f60() {
   return (neuron0x3e09a20()*-0.187077);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18fa0() {
   return (neuron0x3e09cd0()*-0.0239563);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18fe0() {
   return (neuron0x3e0a010()*3.73192);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e19020() {
   return (neuron0x3e0a350()*-0.103013);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e19060() {
   return (neuron0x3e0a690()*0.0647548);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e190a0() {
   return (neuron0x3e0a9d0()*0.0238234);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e190e0() {
   return (neuron0x3e0ad10()*0.110639);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e19120() {
   return (neuron0x3e0b050()*0.0934092);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e19160() {
   return (neuron0x3e0b390()*0.0752692);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e191a0() {
   return (neuron0x3e0b6d0()*0.0707653);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e191e0() {
   return (neuron0x3e0ba10()*0.0283796);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e19220() {
   return (neuron0x3e0bd50()*-0.0846646);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e19260() {
   return (neuron0x3e0c090()*0.0130186);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e192a0() {
   return (neuron0x3e0c3d0()*-0.164987);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e192e0() {
   return (neuron0x3e0c710()*-0.0942232);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e19320() {
   return (neuron0x3e0ca50()*0.0429428);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18db0() {
   return (neuron0x3e0cd90()*0.00814121);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18df0() {
   return (neuron0x3e0d2f0()*-0.0931768);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e19470() {
   return (neuron0x3e0d510()*-0.0667119);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e194b0() {
   return (neuron0x3e0d850()*-0.0908977);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e194f0() {
   return (neuron0x3e0db90()*0.0867894);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e19530() {
   return (neuron0x3e0ded0()*-0.0577748);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e19570() {
   return (neuron0x3e0e210()*0.105554);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e195b0() {
   return (neuron0x3e0e550()*-0.140973);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e19930() {
   return (neuron0x3e09a20()*-0.0187647);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e09bb0() {
   return (neuron0x3e09cd0()*0.00395477);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e09bf0() {
   return (neuron0x3e0a010()*1.30279);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e09ef0() {
   return (neuron0x3e0a350()*-0.0318975);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e09f30() {
   return (neuron0x3e0a690()*0.00602692);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0a230() {
   return (neuron0x3e0a9d0()*-0.0166334);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0a270() {
   return (neuron0x3e0ad10()*-0.00263427);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0a570() {
   return (neuron0x3e0b050()*0.0245759);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0a5b0() {
   return (neuron0x3e0b390()*-0.0363003);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0a8b0() {
   return (neuron0x3e0b6d0()*0.0083486);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0a8f0() {
   return (neuron0x3e0ba10()*0.0549736);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0abf0() {
   return (neuron0x3e0bd50()*-1.40411);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0ac30() {
   return (neuron0x3e0c090()*-0.177033);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0af30() {
   return (neuron0x3e0c3d0()*0.0665177);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0af70() {
   return (neuron0x3e0c710()*-0.0452478);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0b270() {
   return (neuron0x3e0ca50()*0.0168979);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0b2b0() {
   return (neuron0x3e0cd90()*-0.0399185);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0b5b0() {
   return (neuron0x3e0d2f0()*-0.00983621);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0b5f0() {
   return (neuron0x3e0d510()*-0.0273627);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0b8f0() {
   return (neuron0x3e0d850()*0.0682477);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0b930() {
   return (neuron0x3e0db90()*-0.035456);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0bc30() {
   return (neuron0x3e0ded0()*0.0131179);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0bc70() {
   return (neuron0x3e0e210()*-0.0166245);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0bf70() {
   return (neuron0x3e0e550()*0.308811);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0bfb0() {
   return (neuron0x3e09a20()*-0.227682);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0cc70() {
   return (neuron0x3e09cd0()*0.00502391);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0ccb0() {
   return (neuron0x3e0a010()*-0.304245);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e19780() {
   return (neuron0x3e0a350()*0.155054);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e197c0() {
   return (neuron0x3e0a690()*-0.0286419);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0cfb0() {
   return (neuron0x3e0a9d0()*-0.11833);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0cff0() {
   return (neuron0x3e0ad10()*-0.060812);
}

double NNfunction_nn_charge1p_charge1m::synapse0x296d6e0() {
   return (neuron0x3e0b050()*0.013369);
}

double NNfunction_nn_charge1p_charge1m::synapse0x296d720() {
   return (neuron0x3e0b390()*-0.0617705);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0d730() {
   return (neuron0x3e0b6d0()*0.0244498);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0d770() {
   return (neuron0x3e0ba10()*-0.00870556);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0da70() {
   return (neuron0x3e0bd50()*0.125165);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0dab0() {
   return (neuron0x3e0c090()*0.0182492);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0ddb0() {
   return (neuron0x3e0c3d0()*0.0484844);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0ddf0() {
   return (neuron0x3e0c710()*-0.0304316);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0e0f0() {
   return (neuron0x3e0ca50()*-0.00146091);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0e130() {
   return (neuron0x3e0cd90()*0.0907084);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0e430() {
   return (neuron0x3e0d2f0()*0.0710754);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0e470() {
   return (neuron0x3e0d510()*0.000837949);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0e770() {
   return (neuron0x3e0d850()*0.0154546);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0e7b0() {
   return (neuron0x3e0db90()*0.0549671);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0c2b0() {
   return (neuron0x3e0ded0()*-0.0252129);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0c2f0() {
   return (neuron0x3e0e210()*-0.00730362);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1b6a0() {
   return (neuron0x3e0e550()*-0.251334);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ba20() {
   return (neuron0x3e09a20()*-0.112772);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ba60() {
   return (neuron0x3e09cd0()*0.00215566);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1baa0() {
   return (neuron0x3e0a010()*-4.21965);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1bae0() {
   return (neuron0x3e0a350()*0.0371943);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1bb20() {
   return (neuron0x3e0a690()*-0.0385332);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1bb60() {
   return (neuron0x3e0a9d0()*-0.0266976);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1bba0() {
   return (neuron0x3e0ad10()*-0.0244895);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1bbe0() {
   return (neuron0x3e0b050()*-0.00118551);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1bc20() {
   return (neuron0x3e0b390()*-0.0287159);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1bc60() {
   return (neuron0x3e0b6d0()*0.0142108);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1bca0() {
   return (neuron0x3e0ba10()*-0.0112297);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1bce0() {
   return (neuron0x3e0bd50()*0.14711);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1bd20() {
   return (neuron0x3e0c090()*-0.0128948);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1bd60() {
   return (neuron0x3e0c3d0()*-0.0299403);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1bda0() {
   return (neuron0x3e0c710()*-0.0144643);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1bde0() {
   return (neuron0x3e0ca50()*-0.0221944);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1b870() {
   return (neuron0x3e0cd90()*0.0148541);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1b8b0() {
   return (neuron0x3e0d2f0()*0.0115979);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1bf30() {
   return (neuron0x3e0d510()*0.0142517);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1bf70() {
   return (neuron0x3e0d850()*0.0417021);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1bfb0() {
   return (neuron0x3e0db90()*-0.000753146);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1bff0() {
   return (neuron0x3e0ded0()*-0.0112429);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c030() {
   return (neuron0x3e0e210()*0.00116025);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c070() {
   return (neuron0x3e0e550()*7.42703);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c3f0() {
   return (neuron0x3e09a20()*-0.0471581);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c430() {
   return (neuron0x3e09cd0()*0.00305954);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c470() {
   return (neuron0x3e0a010()*1.01546);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c4b0() {
   return (neuron0x3e0a350()*0.0150503);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c4f0() {
   return (neuron0x3e0a690()*-0.00993688);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c530() {
   return (neuron0x3e0a9d0()*-0.0148351);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c570() {
   return (neuron0x3e0ad10()*-0.00201995);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c5b0() {
   return (neuron0x3e0b050()*0.0267784);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c5f0() {
   return (neuron0x3e0b390()*0.0114618);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c630() {
   return (neuron0x3e0b6d0()*0.00209492);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c670() {
   return (neuron0x3e0ba10()*-0.0361469);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c6b0() {
   return (neuron0x3e0bd50()*0.603819);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c6f0() {
   return (neuron0x3e0c090()*0.0896659);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c730() {
   return (neuron0x3e0c3d0()*0.0194359);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c770() {
   return (neuron0x3e0c710()*-0.0274878);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c7b0() {
   return (neuron0x3e0ca50()*0.010433);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c240() {
   return (neuron0x3e0cd90()*0.0210315);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c280() {
   return (neuron0x3e0d2f0()*-0.000426506);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c900() {
   return (neuron0x3e0d510()*0.00216513);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c940() {
   return (neuron0x3e0d850()*-0.0123998);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c980() {
   return (neuron0x3e0db90()*-0.00645831);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c9c0() {
   return (neuron0x3e0ded0()*-0.0123222);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ca00() {
   return (neuron0x3e0e210()*0.0322468);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ca40() {
   return (neuron0x3e0e550()*0.0953864);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1cdc0() {
   return (neuron0x3e09a20()*0.48152);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ce00() {
   return (neuron0x3e09cd0()*-0.0185316);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ce40() {
   return (neuron0x3e0a010()*0.133505);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ce80() {
   return (neuron0x3e0a350()*0.0143209);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1cec0() {
   return (neuron0x3e0a690()*-0.0117591);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1cf00() {
   return (neuron0x3e0a9d0()*-0.104334);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1cf40() {
   return (neuron0x3e0ad10()*-0.153186);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1cf80() {
   return (neuron0x3e0b050()*-0.134206);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1cfc0() {
   return (neuron0x3e0b390()*-0.14393);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d000() {
   return (neuron0x3e0b6d0()*-0.266055);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d040() {
   return (neuron0x3e0ba10()*0.0159664);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d080() {
   return (neuron0x3e0bd50()*0.0238329);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d0c0() {
   return (neuron0x3e0c090()*-0.141013);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d100() {
   return (neuron0x3e0c3d0()*-0.0431958);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d140() {
   return (neuron0x3e0c710()*0.0530269);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d180() {
   return (neuron0x3e0ca50()*-0.0834626);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1cc10() {
   return (neuron0x3e0cd90()*0.134949);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1cc50() {
   return (neuron0x3e0d2f0()*0.141076);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d2d0() {
   return (neuron0x3e0d510()*-0.127176);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d310() {
   return (neuron0x3e0d850()*-0.0772713);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d350() {
   return (neuron0x3e0db90()*-0.266521);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d390() {
   return (neuron0x3e0ded0()*0.064402);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d3d0() {
   return (neuron0x3e0e210()*0.0745775);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d410() {
   return (neuron0x3e0e550()*1.83694);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d790() {
   return (neuron0x3e09a20()*0.25722);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d7d0() {
   return (neuron0x3e09cd0()*0.00983955);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d810() {
   return (neuron0x3e0a010()*3.22339);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d850() {
   return (neuron0x3e0a350()*0.0220487);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d890() {
   return (neuron0x3e0a690()*0.0160838);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d8d0() {
   return (neuron0x3e0a9d0()*-0.0168243);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d910() {
   return (neuron0x3e0ad10()*-0.0104);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d950() {
   return (neuron0x3e0b050()*-0.0361234);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d990() {
   return (neuron0x3e0b390()*-0.00391373);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d9d0() {
   return (neuron0x3e0b6d0()*0.0165315);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1da10() {
   return (neuron0x3e0ba10()*0.013044);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1da50() {
   return (neuron0x3e0bd50()*0.13588);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1da90() {
   return (neuron0x3e0c090()*-0.0214876);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1dad0() {
   return (neuron0x3e0c3d0()*-0.00253932);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1db10() {
   return (neuron0x3e0c710()*0.0106002);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1db50() {
   return (neuron0x3e0ca50()*-0.0303324);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d5e0() {
   return (neuron0x3e0cd90()*0.0149221);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d620() {
   return (neuron0x3e0d2f0()*-0.0157413);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1dca0() {
   return (neuron0x3e0d510()*0.0117527);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1dce0() {
   return (neuron0x3e0d850()*0.012092);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1dd20() {
   return (neuron0x3e0db90()*0.000838548);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1dd60() {
   return (neuron0x3e0ded0()*-0.00723059);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1dda0() {
   return (neuron0x3e0e210()*-0.0021145);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1dde0() {
   return (neuron0x3e0e550()*-0.0459649);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e160() {
   return (neuron0x3e09a20()*0.0103496);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e1a0() {
   return (neuron0x3e09cd0()*0.018741);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e1e0() {
   return (neuron0x3e0a010()*1.5363);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e220() {
   return (neuron0x3e0a350()*-0.030526);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e260() {
   return (neuron0x3e0a690()*0.0600131);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e2a0() {
   return (neuron0x3e0a9d0()*0.0447994);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e2e0() {
   return (neuron0x3e0ad10()*0.0300068);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e320() {
   return (neuron0x3e0b050()*-0.00116953);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e360() {
   return (neuron0x3e0b390()*0.00974535);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16520() {
   return (neuron0x3e0b6d0()*-0.0138767);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16560() {
   return (neuron0x3e0ba10()*-3.7841e-05);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e165a0() {
   return (neuron0x3e0bd50()*-1.84631);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e165e0() {
   return (neuron0x3e0c090()*-0.0264852);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16620() {
   return (neuron0x3e0c3d0()*0.0854647);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16660() {
   return (neuron0x3e0c710()*-0.0222278);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e166a0() {
   return (neuron0x3e0ca50()*0.00145091);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1dfb0() {
   return (neuron0x3e0cd90()*0.0407175);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1dff0() {
   return (neuron0x3e0d2f0()*0.0203919);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e167f0() {
   return (neuron0x3e0d510()*-0.00948174);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16830() {
   return (neuron0x3e0d850()*0.0127362);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16870() {
   return (neuron0x3e0db90()*0.041022);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e168b0() {
   return (neuron0x3e0ded0()*-0.0162758);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e168f0() {
   return (neuron0x3e0e210()*-0.0386894);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16930() {
   return (neuron0x3e0e550()*1.0654);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16cb0() {
   return (neuron0x3e09a20()*-0.291378);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16cf0() {
   return (neuron0x3e09cd0()*-0.0137141);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16d30() {
   return (neuron0x3e0a010()*3.94722);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16d70() {
   return (neuron0x3e0a350()*-0.0382645);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16db0() {
   return (neuron0x3e0a690()*-0.087459);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16df0() {
   return (neuron0x3e0a9d0()*-0.0481125);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16e30() {
   return (neuron0x3e0ad10()*0.0637214);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16e70() {
   return (neuron0x3e0b050()*0.0170328);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16eb0() {
   return (neuron0x3e0b390()*-0.0282523);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16ef0() {
   return (neuron0x3e0b6d0()*0.013757);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16f30() {
   return (neuron0x3e0ba10()*-0.0121202);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16f70() {
   return (neuron0x3e0bd50()*-0.256689);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16fb0() {
   return (neuron0x3e0c090()*-0.0227732);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16ff0() {
   return (neuron0x3e0c3d0()*-0.0429214);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17030() {
   return (neuron0x3e0c710()*-0.0179457);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17070() {
   return (neuron0x3e0ca50()*-0.0360139);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16b00() {
   return (neuron0x3e0cd90()*0.0708609);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16b40() {
   return (neuron0x3e0d2f0()*0.0433134);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e171c0() {
   return (neuron0x3e0d510()*-0.018378);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17200() {
   return (neuron0x3e0d850()*0.0326173);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17240() {
   return (neuron0x3e0db90()*0.0668326);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17280() {
   return (neuron0x3e0ded0()*-0.0465053);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e172c0() {
   return (neuron0x3e0e210()*-0.00584276);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17300() {
   return (neuron0x3e0e550()*0.122253);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e174d0() {
   return (neuron0x3e09a20()*0.0794512);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20560() {
   return (neuron0x3e09cd0()*8.45365e-05);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e205a0() {
   return (neuron0x3e0a010()*0.032129);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e205e0() {
   return (neuron0x3e0a350()*0.0122654);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20620() {
   return (neuron0x3e0a690()*0.00887749);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20660() {
   return (neuron0x3e0a9d0()*-0.0121694);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e206a0() {
   return (neuron0x3e0ad10()*-0.00909695);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e206e0() {
   return (neuron0x3e0b050()*-0.0102644);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20720() {
   return (neuron0x3e0b390()*0.0126287);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20760() {
   return (neuron0x3e0b6d0()*-0.00615645);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e207a0() {
   return (neuron0x3e0ba10()*0.0015482);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e207e0() {
   return (neuron0x3e0bd50()*0.0309889);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20820() {
   return (neuron0x3e0c090()*-0.00200348);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20860() {
   return (neuron0x3e0c3d0()*0.0236383);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e208a0() {
   return (neuron0x3e0c710()*0.0204649);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e208e0() {
   return (neuron0x3e0ca50()*-0.0143193);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e203b0() {
   return (neuron0x3e0cd90()*-0.0163515);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e203f0() {
   return (neuron0x3e0d2f0()*0.00848026);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20a30() {
   return (neuron0x3e0d510()*0.0118714);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20a70() {
   return (neuron0x3e0d850()*1.17395e-05);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20ab0() {
   return (neuron0x3e0db90()*0.01688);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20af0() {
   return (neuron0x3e0ded0()*0.0120443);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20b30() {
   return (neuron0x3e0e210()*-0.0063198);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20b70() {
   return (neuron0x3e0e550()*28.8007);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20ef0() {
   return (neuron0x3e09a20()*0.184856);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20f30() {
   return (neuron0x3e09cd0()*0.060502);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20f70() {
   return (neuron0x3e0a010()*-0.772339);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20fb0() {
   return (neuron0x3e0a350()*0.109303);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20ff0() {
   return (neuron0x3e0a690()*-0.0148386);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21030() {
   return (neuron0x3e0a9d0()*-0.556593);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21070() {
   return (neuron0x3e0ad10()*-0.365476);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e210b0() {
   return (neuron0x3e0b050()*-0.288035);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e210f0() {
   return (neuron0x3e0b390()*0.120354);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21130() {
   return (neuron0x3e0b6d0()*0.151599);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21170() {
   return (neuron0x3e0ba10()*-0.204211);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e211b0() {
   return (neuron0x3e0bd50()*0.38898);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e211f0() {
   return (neuron0x3e0c090()*0.00501598);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21230() {
   return (neuron0x3e0c3d0()*-0.271683);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21270() {
   return (neuron0x3e0c710()*0.367469);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e212b0() {
   return (neuron0x3e0ca50()*0.324908);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20d40() {
   return (neuron0x3e0cd90()*0.068333);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20d80() {
   return (neuron0x3e0d2f0()*-0.687162);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21400() {
   return (neuron0x3e0d510()*0.173279);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21440() {
   return (neuron0x3e0d850()*-0.0181437);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21480() {
   return (neuron0x3e0db90()*-0.0356165);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e214c0() {
   return (neuron0x3e0ded0()*0.273277);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21500() {
   return (neuron0x3e0e210()*-0.0251509);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21540() {
   return (neuron0x3e0e550()*0.117122);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e218c0() {
   return (neuron0x3e09a20()*-0.877545);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21900() {
   return (neuron0x3e09cd0()*-0.0825388);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21940() {
   return (neuron0x3e0a010()*0.540414);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21980() {
   return (neuron0x3e0a350()*0.70683);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e219c0() {
   return (neuron0x3e0a690()*-0.536505);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21a00() {
   return (neuron0x3e0a9d0()*-0.604814);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21a40() {
   return (neuron0x3e0ad10()*0.0499901);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21a80() {
   return (neuron0x3e0b050()*-0.407795);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21ac0() {
   return (neuron0x3e0b390()*-0.377709);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21b00() {
   return (neuron0x3e0b6d0()*0.32036);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21b40() {
   return (neuron0x3e0ba10()*-0.529867);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21b80() {
   return (neuron0x3e0bd50()*1.20091);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21bc0() {
   return (neuron0x3e0c090()*0.0184113);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21c00() {
   return (neuron0x3e0c3d0()*0.364157);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21c40() {
   return (neuron0x3e0c710()*-0.186705);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21c80() {
   return (neuron0x3e0ca50()*-0.155576);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21710() {
   return (neuron0x3e0cd90()*0.224621);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21750() {
   return (neuron0x3e0d2f0()*0.270349);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21dd0() {
   return (neuron0x3e0d510()*-0.300345);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21e10() {
   return (neuron0x3e0d850()*0.0105791);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21e50() {
   return (neuron0x3e0db90()*-0.613622);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21e90() {
   return (neuron0x3e0ded0()*0.354568);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21ed0() {
   return (neuron0x3e0e210()*0.367448);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21f10() {
   return (neuron0x3e0e550()*-0.397991);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22290() {
   return (neuron0x3e09a20()*0.000874804);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e222d0() {
   return (neuron0x3e09cd0()*-0.0359319);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22310() {
   return (neuron0x3e0a010()*3.06729);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22350() {
   return (neuron0x3e0a350()*0.354246);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22390() {
   return (neuron0x3e0a690()*-0.108084);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e223d0() {
   return (neuron0x3e0a9d0()*-0.23578);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22410() {
   return (neuron0x3e0ad10()*-0.0672171);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22450() {
   return (neuron0x3e0b050()*0.286944);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22490() {
   return (neuron0x3e0b390()*-0.010541);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e224d0() {
   return (neuron0x3e0b6d0()*-0.0471008);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22510() {
   return (neuron0x3e0ba10()*0.0588137);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22550() {
   return (neuron0x3e0bd50()*-0.462203);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22590() {
   return (neuron0x3e0c090()*-0.909914);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e225d0() {
   return (neuron0x3e0c3d0()*-0.44001);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22610() {
   return (neuron0x3e0c710()*-0.817772);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22650() {
   return (neuron0x3e0ca50()*-0.48984);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e220e0() {
   return (neuron0x3e0cd90()*-0.00358851);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22120() {
   return (neuron0x3e0d2f0()*-0.479422);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e227a0() {
   return (neuron0x3e0d510()*-0.422008);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e227e0() {
   return (neuron0x3e0d850()*-0.160924);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22820() {
   return (neuron0x3e0db90()*0.111525);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22860() {
   return (neuron0x3e0ded0()*0.00288535);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e228a0() {
   return (neuron0x3e0e210()*0.00104678);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e228e0() {
   return (neuron0x3e0e550()*1.38323);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22c60() {
   return (neuron0x3e09a20()*-0.365144);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22ca0() {
   return (neuron0x3e09cd0()*0.0107707);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22ce0() {
   return (neuron0x3e0a010()*0.00410104);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22d20() {
   return (neuron0x3e0a350()*0.0423738);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22d60() {
   return (neuron0x3e0a690()*0.0863826);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22da0() {
   return (neuron0x3e0a9d0()*0.0124973);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22de0() {
   return (neuron0x3e0ad10()*-0.0303027);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22e20() {
   return (neuron0x3e0b050()*-0.0335413);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22e60() {
   return (neuron0x3e0b390()*-0.0106219);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22ea0() {
   return (neuron0x3e0b6d0()*0.0122844);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22ee0() {
   return (neuron0x3e0ba10()*0.00498443);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22f20() {
   return (neuron0x3e0bd50()*0.0490556);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22f60() {
   return (neuron0x3e0c090()*-0.0190395);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22fa0() {
   return (neuron0x3e0c3d0()*-0.00398106);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22fe0() {
   return (neuron0x3e0c710()*-0.0322502);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23020() {
   return (neuron0x3e0ca50()*0.00097274);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22ab0() {
   return (neuron0x3e0cd90()*-0.0604783);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22af0() {
   return (neuron0x3e0d2f0()*0.0213033);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23170() {
   return (neuron0x3e0d510()*0.0115798);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e231b0() {
   return (neuron0x3e0d850()*0.0889032);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e231f0() {
   return (neuron0x3e0db90()*-0.0744586);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23230() {
   return (neuron0x3e0ded0()*0.0393968);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23270() {
   return (neuron0x3e0e210()*-0.00131654);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e232b0() {
   return (neuron0x3e0e550()*-0.169021);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23630() {
   return (neuron0x3e09a20()*-0.206316);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23670() {
   return (neuron0x3e09cd0()*0.0115418);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e236b0() {
   return (neuron0x3e0a010()*2.02825);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e236f0() {
   return (neuron0x3e0a350()*0.0307171);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23730() {
   return (neuron0x3e0a690()*-0.0272191);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23770() {
   return (neuron0x3e0a9d0()*-0.0136803);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e237b0() {
   return (neuron0x3e0ad10()*-0.0251741);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e237f0() {
   return (neuron0x3e0b050()*0.00272148);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23830() {
   return (neuron0x3e0b390()*-0.014315);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23870() {
   return (neuron0x3e0b6d0()*0.0370223);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e238b0() {
   return (neuron0x3e0ba10()*-0.020294);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e238f0() {
   return (neuron0x3e0bd50()*-0.513132);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23930() {
   return (neuron0x3e0c090()*-0.0135516);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23970() {
   return (neuron0x3e0c3d0()*-0.0183755);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e239b0() {
   return (neuron0x3e0c710()*-0.00391537);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e239f0() {
   return (neuron0x3e0ca50()*-8.82743e-05);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23480() {
   return (neuron0x3e0cd90()*-0.0407913);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e234c0() {
   return (neuron0x3e0d2f0()*0.00539159);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23b40() {
   return (neuron0x3e0d510()*0.0189388);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23b80() {
   return (neuron0x3e0d850()*0.0348824);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23bc0() {
   return (neuron0x3e0db90()*0.0363246);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23c00() {
   return (neuron0x3e0ded0()*0.00706423);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23c40() {
   return (neuron0x3e0e210()*0.00289889);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23c80() {
   return (neuron0x3e0e550()*-6.17435);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24000() {
   return (neuron0x3e09a20()*0.906935);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24040() {
   return (neuron0x3e09cd0()*-0.0082648);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24080() {
   return (neuron0x3e0a010()*-0.103404);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e240c0() {
   return (neuron0x3e0a350()*0.0075413);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24100() {
   return (neuron0x3e0a690()*-0.0670328);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24140() {
   return (neuron0x3e0a9d0()*-0.008309);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24180() {
   return (neuron0x3e0ad10()*0.0300076);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e241c0() {
   return (neuron0x3e0b050()*0.0430196);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24200() {
   return (neuron0x3e0b390()*0.0262714);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24240() {
   return (neuron0x3e0b6d0()*0.0205662);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24280() {
   return (neuron0x3e0ba10()*-0.044329);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e242c0() {
   return (neuron0x3e0bd50()*-0.0822753);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24300() {
   return (neuron0x3e0c090()*0.0077428);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24340() {
   return (neuron0x3e0c3d0()*0.0793113);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24380() {
   return (neuron0x3e0c710()*0.076709);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e243c0() {
   return (neuron0x3e0ca50()*-0.00394051);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23e50() {
   return (neuron0x3e0cd90()*0.0775224);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e23e90() {
   return (neuron0x3e0d2f0()*-0.0468188);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24510() {
   return (neuron0x3e0d510()*0.0265356);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24550() {
   return (neuron0x3e0d850()*-0.0475234);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24590() {
   return (neuron0x3e0db90()*0.0628089);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e245d0() {
   return (neuron0x3e0ded0()*-0.0323915);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24610() {
   return (neuron0x3e0e210()*-0.00875244);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24650() {
   return (neuron0x3e0e550()*0.172233);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e249d0() {
   return (neuron0x3e09a20()*0.260612);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24a10() {
   return (neuron0x3e09cd0()*0.0118317);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24a50() {
   return (neuron0x3e0a010()*7.28299);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24a90() {
   return (neuron0x3e0a350()*0.0320164);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24ad0() {
   return (neuron0x3e0a690()*0.00274133);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24b10() {
   return (neuron0x3e0a9d0()*-0.0160052);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24b50() {
   return (neuron0x3e0ad10()*-0.070974);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24b90() {
   return (neuron0x3e0b050()*-0.017457);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24bd0() {
   return (neuron0x3e0b390()*-0.0204153);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24c10() {
   return (neuron0x3e0b6d0()*0.0210725);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24c50() {
   return (neuron0x3e0ba10()*-0.0144039);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24c90() {
   return (neuron0x3e0bd50()*0.17062);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24cd0() {
   return (neuron0x3e0c090()*-0.019716);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24d10() {
   return (neuron0x3e0c3d0()*0.0309326);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24d50() {
   return (neuron0x3e0c710()*0.0363723);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24d90() {
   return (neuron0x3e0ca50()*-0.0206514);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24820() {
   return (neuron0x3e0cd90()*0.0138896);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24860() {
   return (neuron0x3e0d2f0()*-0.0173036);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24ee0() {
   return (neuron0x3e0d510()*0.0131872);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24f20() {
   return (neuron0x3e0d850()*0.0275864);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24f60() {
   return (neuron0x3e0db90()*-0.0292464);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24fa0() {
   return (neuron0x3e0ded0()*0.0217697);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e24fe0() {
   return (neuron0x3e0e210()*-0.011747);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e25020() {
   return (neuron0x3e0e550()*0.0278029);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e253a0() {
   return (neuron0x3e09a20()*-0.469531);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e19970() {
   return (neuron0x3e09cd0()*0.0927136);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e199b0() {
   return (neuron0x3e0a010()*0.141477);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e199f0() {
   return (neuron0x3e0a350()*-0.331071);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e19c40() {
   return (neuron0x3e0a690()*-0.220989);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e19c80() {
   return (neuron0x3e0a9d0()*0.584439);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e19cc0() {
   return (neuron0x3e0ad10()*0.78389);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e19f10() {
   return (neuron0x3e0b050()*0.748579);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e19f50() {
   return (neuron0x3e0b390()*-0.0906082);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1a1a0() {
   return (neuron0x3e0b6d0()*0.11416);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1a1e0() {
   return (neuron0x3e0ba10()*-0.380162);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1a220() {
   return (neuron0x3e0bd50()*-0.862175);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1a470() {
   return (neuron0x3e0c090()*-0.496203);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1a4b0() {
   return (neuron0x3e0c3d0()*-0.374963);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1a700() {
   return (neuron0x3e0c710()*-0.355989);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1a740() {
   return (neuron0x3e0ca50()*-0.0756756);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e251f0() {
   return (neuron0x3e0cd90()*-0.115935);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e25230() {
   return (neuron0x3e0d2f0()*0.592398);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1a890() {
   return (neuron0x3e0d510()*0.358674);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ada0() {
   return (neuron0x3e0d850()*0.160177);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ade0() {
   return (neuron0x3e0db90()*0.477894);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ae20() {
   return (neuron0x3e0ded0()*-0.227615);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1b070() {
   return (neuron0x3e0e210()*0.471266);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1b0b0() {
   return (neuron0x3e0e550()*0.412336);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1a960() {
   return (neuron0x3e09a20()*-0.145552);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1a9a0() {
   return (neuron0x3e09cd0()*-0.000534189);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1a9e0() {
   return (neuron0x3e0a010()*1.025);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1aa20() {
   return (neuron0x3e0a350()*0.0186771);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1b3a0() {
   return (neuron0x3e0a690()*0.0128348);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e276f0() {
   return (neuron0x3e0a9d0()*0.00660614);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e27730() {
   return (neuron0x3e0ad10()*0.00777338);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e27770() {
   return (neuron0x3e0b050()*0.0262962);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e277b0() {
   return (neuron0x3e0b390()*-0.00899183);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e277f0() {
   return (neuron0x3e0b6d0()*-0.0134961);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e27830() {
   return (neuron0x3e0ba10()*-0.0174608);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e27870() {
   return (neuron0x3e0bd50()*0.226997);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e278b0() {
   return (neuron0x3e0c090()*0.0194342);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e278f0() {
   return (neuron0x3e0c3d0()*0.0123081);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e27930() {
   return (neuron0x3e0c710()*-0.0291654);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e27970() {
   return (neuron0x3e0ca50()*0.00635624);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1b280() {
   return (neuron0x3e0cd90()*0.0364692);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1b2c0() {
   return (neuron0x3e0d2f0()*-0.0147677);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e27ac0() {
   return (neuron0x3e0d510()*-0.0228903);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e27b00() {
   return (neuron0x3e0d850()*-0.0158695);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e27b40() {
   return (neuron0x3e0db90()*-0.0157758);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e27b80() {
   return (neuron0x3e0ded0()*-0.00869781);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e27bc0() {
   return (neuron0x3e0e210()*0.0288504);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e27c00() {
   return (neuron0x3e0e550()*-5.7444);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e27f80() {
   return (neuron0x3e09a20()*-0.0474646);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e27fc0() {
   return (neuron0x3e09cd0()*-0.00925556);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28000() {
   return (neuron0x3e0a010()*5.80581);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28040() {
   return (neuron0x3e0a350()*0.0633367);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28080() {
   return (neuron0x3e0a690()*0.0117026);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e280c0() {
   return (neuron0x3e0a9d0()*0.0252386);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28100() {
   return (neuron0x3e0ad10()*0.0122133);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28140() {
   return (neuron0x3e0b050()*0.054637);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28180() {
   return (neuron0x3e0b390()*-0.00596962);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e281c0() {
   return (neuron0x3e0b6d0()*-0.0297318);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28200() {
   return (neuron0x3e0ba10()*-0.0272547);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28240() {
   return (neuron0x3e0bd50()*-7.31249);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28280() {
   return (neuron0x3e0c090()*-0.0111527);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e282c0() {
   return (neuron0x3e0c3d0()*0.061383);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28300() {
   return (neuron0x3e0c710()*0.0476138);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28340() {
   return (neuron0x3e0ca50()*0.0227161);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e27dd0() {
   return (neuron0x3e0cd90()*0.00401841);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e27e10() {
   return (neuron0x3e0d2f0()*-0.017826);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28490() {
   return (neuron0x3e0d510()*-0.0251302);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e284d0() {
   return (neuron0x3e0d850()*0.0136959);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28510() {
   return (neuron0x3e0db90()*-0.0444151);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28550() {
   return (neuron0x3e0ded0()*-0.00161797);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28590() {
   return (neuron0x3e0e210()*0.00237281);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e285d0() {
   return (neuron0x3e0e550()*-0.0247906);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28950() {
   return (neuron0x3e09a20()*-0.154646);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28990() {
   return (neuron0x3e09cd0()*-0.43597);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e289d0() {
   return (neuron0x3e0a010()*0.297207);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28a10() {
   return (neuron0x3e0a350()*0.0818844);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28a50() {
   return (neuron0x3e0a690()*0.18629);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28a90() {
   return (neuron0x3e0a9d0()*0.398357);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28ad0() {
   return (neuron0x3e0ad10()*0.751284);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28b10() {
   return (neuron0x3e0b050()*-0.12986);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28b50() {
   return (neuron0x3e0b390()*-0.352888);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28b90() {
   return (neuron0x3e0b6d0()*-0.557412);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28bd0() {
   return (neuron0x3e0ba10()*-0.387135);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28c10() {
   return (neuron0x3e0bd50()*0.324418);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28c50() {
   return (neuron0x3e0c090()*0.504702);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28c90() {
   return (neuron0x3e0c3d0()*-0.617235);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28cd0() {
   return (neuron0x3e0c710()*0.0372699);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28d10() {
   return (neuron0x3e0ca50()*0.540084);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e287a0() {
   return (neuron0x3e0cd90()*-0.177329);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e287e0() {
   return (neuron0x3e0d2f0()*-0.0212557);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28e60() {
   return (neuron0x3e0d510()*-0.187294);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28ea0() {
   return (neuron0x3e0d850()*0.259033);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28ee0() {
   return (neuron0x3e0db90()*-0.651709);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28f20() {
   return (neuron0x3e0ded0()*0.30115);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28f60() {
   return (neuron0x3e0e210()*0.41262);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28fa0() {
   return (neuron0x3e0e550()*-0.756297);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29320() {
   return (neuron0x3e09a20()*0.0110653);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29360() {
   return (neuron0x3e09cd0()*0.00968631);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e293a0() {
   return (neuron0x3e0a010()*-0.200885);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e293e0() {
   return (neuron0x3e0a350()*0.0478976);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29420() {
   return (neuron0x3e0a690()*-0.0500825);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29460() {
   return (neuron0x3e0a9d0()*0.00129671);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e294a0() {
   return (neuron0x3e0ad10()*0.0121223);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e294e0() {
   return (neuron0x3e0b050()*0.0257092);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29520() {
   return (neuron0x3e0b390()*0.0177132);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29560() {
   return (neuron0x3e0b6d0()*0.0241858);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e295a0() {
   return (neuron0x3e0ba10()*-0.0677619);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e295e0() {
   return (neuron0x3e0bd50()*-0.0729756);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29620() {
   return (neuron0x3e0c090()*0.0187972);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29660() {
   return (neuron0x3e0c3d0()*0.0114038);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e296a0() {
   return (neuron0x3e0c710()*-0.017081);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e296e0() {
   return (neuron0x3e0ca50()*0.0191231);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29170() {
   return (neuron0x3e0cd90()*0.0514718);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e291b0() {
   return (neuron0x3e0d2f0()*-0.0325131);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29830() {
   return (neuron0x3e0d510()*0.000752841);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29870() {
   return (neuron0x3e0d850()*0.00184524);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e298b0() {
   return (neuron0x3e0db90()*-0.000725175);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e298f0() {
   return (neuron0x3e0ded0()*0.00020855);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29930() {
   return (neuron0x3e0e210()*0.0524204);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29970() {
   return (neuron0x3e0e550()*0.147718);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29cf0() {
   return (neuron0x3e09a20()*-0.138436);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29d30() {
   return (neuron0x3e09cd0()*0.0350354);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29d70() {
   return (neuron0x3e0a010()*0.073581);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29db0() {
   return (neuron0x3e0a350()*1.03009);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29df0() {
   return (neuron0x3e0a690()*-0.0315288);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29e30() {
   return (neuron0x3e0a9d0()*0.0159793);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29e70() {
   return (neuron0x3e0ad10()*-0.0420075);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29eb0() {
   return (neuron0x3e0b050()*-0.0608596);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29ef0() {
   return (neuron0x3e0b390()*-0.0231452);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29f30() {
   return (neuron0x3e0b6d0()*-0.0505447);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29f70() {
   return (neuron0x3e0ba10()*-0.0298391);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29fb0() {
   return (neuron0x3e0bd50()*0.113624);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29ff0() {
   return (neuron0x3e0c090()*-0.011452);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a030() {
   return (neuron0x3e0c3d0()*0.302859);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a070() {
   return (neuron0x3e0c710()*-0.145195);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a0b0() {
   return (neuron0x3e0ca50()*-0.0153961);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29b40() {
   return (neuron0x3e0cd90()*0.282648);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29b80() {
   return (neuron0x3e0d2f0()*0.0826367);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a200() {
   return (neuron0x3e0d510()*-0.00501675);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a240() {
   return (neuron0x3e0d850()*-0.0310973);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a280() {
   return (neuron0x3e0db90()*0.00995567);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a2c0() {
   return (neuron0x3e0ded0()*-0.0211207);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a300() {
   return (neuron0x3e0e210()*-0.00734231);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a340() {
   return (neuron0x3e0e550()*1.25025);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a6c0() {
   return (neuron0x3e09a20()*-0.220362);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a700() {
   return (neuron0x3e09cd0()*-0.193557);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a740() {
   return (neuron0x3e0a010()*-0.342368);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a780() {
   return (neuron0x3e0a350()*-0.526634);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a7c0() {
   return (neuron0x3e0a690()*0.48277);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a800() {
   return (neuron0x3e0a9d0()*-0.605755);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a840() {
   return (neuron0x3e0ad10()*0.525487);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a880() {
   return (neuron0x3e0b050()*0.378942);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a8c0() {
   return (neuron0x3e0b390()*0.111867);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a900() {
   return (neuron0x3e0b6d0()*-0.155476);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a940() {
   return (neuron0x3e0ba10()*-0.0366465);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a980() {
   return (neuron0x3e0bd50()*-0.233524);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a9c0() {
   return (neuron0x3e0c090()*0.34945);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2aa00() {
   return (neuron0x3e0c3d0()*-0.0343844);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2aa40() {
   return (neuron0x3e0c710()*0.227989);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2aa80() {
   return (neuron0x3e0ca50()*-0.0793547);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a510() {
   return (neuron0x3e0cd90()*-0.420671);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a550() {
   return (neuron0x3e0d2f0()*-0.182107);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2abd0() {
   return (neuron0x3e0d510()*-0.18647);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2ac10() {
   return (neuron0x3e0d850()*0.00262454);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2ac50() {
   return (neuron0x3e0db90()*-0.185762);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2ac90() {
   return (neuron0x3e0ded0()*0.337285);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2acd0() {
   return (neuron0x3e0e210()*-0.504938);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2ad10() {
   return (neuron0x3e0e550()*1.34497);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b090() {
   return (neuron0x3e09a20()*3.80077);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b0d0() {
   return (neuron0x3e09cd0()*-0.0295108);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b110() {
   return (neuron0x3e0a010()*3.41217);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b150() {
   return (neuron0x3e0a350()*0.0256776);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b190() {
   return (neuron0x3e0a690()*-0.058365);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b1d0() {
   return (neuron0x3e0a9d0()*-0.0135836);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b210() {
   return (neuron0x3e0ad10()*-0.000405667);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b250() {
   return (neuron0x3e0b050()*-0.214467);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b290() {
   return (neuron0x3e0b390()*0.0533801);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b2d0() {
   return (neuron0x3e0b6d0()*0.0426152);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b310() {
   return (neuron0x3e0ba10()*0.149475);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b350() {
   return (neuron0x3e0bd50()*0.0810456);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b390() {
   return (neuron0x3e0c090()*-0.031151);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b3d0() {
   return (neuron0x3e0c3d0()*0.02944);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b410() {
   return (neuron0x3e0c710()*-0.0815449);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b450() {
   return (neuron0x3e0ca50()*-0.146736);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2aee0() {
   return (neuron0x3e0cd90()*0.018747);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2af20() {
   return (neuron0x3e0d2f0()*-0.0537422);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b5a0() {
   return (neuron0x3e0d510()*0.146618);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b5e0() {
   return (neuron0x3e0d850()*-0.0156612);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b620() {
   return (neuron0x3e0db90()*0.0867029);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b660() {
   return (neuron0x3e0ded0()*0.0872496);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b6a0() {
   return (neuron0x3e0e210()*-0.0749333);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b6e0() {
   return (neuron0x3e0e550()*-7.0527);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2ba60() {
   return (neuron0x3e09a20()*-0.434932);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2baa0() {
   return (neuron0x3e09cd0()*-0.055719);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2bae0() {
   return (neuron0x3e0a010()*1.48736);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2bb20() {
   return (neuron0x3e0a350()*-0.804534);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2bb60() {
   return (neuron0x3e0a690()*-0.107026);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2bba0() {
   return (neuron0x3e0a9d0()*-0.18327);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2bbe0() {
   return (neuron0x3e0ad10()*-0.0532608);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2bc20() {
   return (neuron0x3e0b050()*0.0443505);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2bc60() {
   return (neuron0x3e0b390()*-0.0325969);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2bca0() {
   return (neuron0x3e0b6d0()*-0.120928);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2bce0() {
   return (neuron0x3e0ba10()*0.102733);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2bd20() {
   return (neuron0x3e0bd50()*0.742511);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2bd60() {
   return (neuron0x3e0c090()*-0.225734);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2bda0() {
   return (neuron0x3e0c3d0()*-0.109227);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2bde0() {
   return (neuron0x3e0c710()*-0.279494);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2be20() {
   return (neuron0x3e0ca50()*-0.407083);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b8b0() {
   return (neuron0x3e0cd90()*-0.0767162);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b8f0() {
   return (neuron0x3e0d2f0()*-0.0494409);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2bf70() {
   return (neuron0x3e0d510()*-0.094777);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2bfb0() {
   return (neuron0x3e0d850()*-0.0829431);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2bff0() {
   return (neuron0x3e0db90()*-0.265943);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2c030() {
   return (neuron0x3e0ded0()*0.083531);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2c070() {
   return (neuron0x3e0e210()*0.0130003);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2c0b0() {
   return (neuron0x3e0e550()*2.37634);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14b60() {
   return (neuron0x3e09a20()*-0.0510101);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14ba0() {
   return (neuron0x3e09cd0()*0.00300874);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14be0() {
   return (neuron0x3e0a010()*-0.854174);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14c20() {
   return (neuron0x3e0a350()*0.024855);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14c60() {
   return (neuron0x3e0a690()*-0.0217204);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14ca0() {
   return (neuron0x3e0a9d0()*-0.00488414);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14ce0() {
   return (neuron0x3e0ad10()*0.0170175);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14d20() {
   return (neuron0x3e0b050()*-0.004783);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2c840() {
   return (neuron0x3e0b390()*0.0135919);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2c880() {
   return (neuron0x3e0b6d0()*0.0502378);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2c8c0() {
   return (neuron0x3e0ba10()*0.0079452);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2c900() {
   return (neuron0x3e0bd50()*-0.453349);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2c940() {
   return (neuron0x3e0c090()*-0.0226403);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2c980() {
   return (neuron0x3e0c3d0()*0.0168804);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2c9c0() {
   return (neuron0x3e0c710()*0.0241743);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2ca00() {
   return (neuron0x3e0ca50()*0.0403589);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2c280() {
   return (neuron0x3e0cd90()*-0.00530792);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2c2c0() {
   return (neuron0x3e0d2f0()*-0.0141381);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2cb50() {
   return (neuron0x3e0d510()*0.0103781);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2cb90() {
   return (neuron0x3e0d850()*0.00724876);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2cbd0() {
   return (neuron0x3e0db90()*-0.018994);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2cc10() {
   return (neuron0x3e0ded0()*0.00154512);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2cc50() {
   return (neuron0x3e0e210()*0.00625129);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2cc90() {
   return (neuron0x3e0e550()*5.19711);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d010() {
   return (neuron0x3e09a20()*0.0462906);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d050() {
   return (neuron0x3e09cd0()*0.00410177);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d090() {
   return (neuron0x3e0a010()*5.43154);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d0d0() {
   return (neuron0x3e0a350()*-0.00741632);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d110() {
   return (neuron0x3e0a690()*0.0592847);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d150() {
   return (neuron0x3e0a9d0()*0.0310219);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d190() {
   return (neuron0x3e0ad10()*0.0204216);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d1d0() {
   return (neuron0x3e0b050()*-0.0115574);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d210() {
   return (neuron0x3e0b390()*0.0287652);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d250() {
   return (neuron0x3e0b6d0()*-0.0140368);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d290() {
   return (neuron0x3e0ba10()*0.0125703);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d2d0() {
   return (neuron0x3e0bd50()*-0.204025);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d310() {
   return (neuron0x3e0c090()*0.0103483);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d350() {
   return (neuron0x3e0c3d0()*0.0563275);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d390() {
   return (neuron0x3e0c710()*0.0321543);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d3d0() {
   return (neuron0x3e0ca50()*0.0257061);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2ce60() {
   return (neuron0x3e0cd90()*-0.0104672);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2cea0() {
   return (neuron0x3e0d2f0()*-0.0040884);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d520() {
   return (neuron0x3e0d510()*-0.0204737);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d560() {
   return (neuron0x3e0d850()*-0.0472866);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d5a0() {
   return (neuron0x3e0db90()*-0.0288059);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d5e0() {
   return (neuron0x3e0ded0()*0.021407);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d620() {
   return (neuron0x3e0e210()*0.00849838);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d660() {
   return (neuron0x3e0e550()*-9.77003);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d9e0() {
   return (neuron0x3e09a20()*-0.0413937);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2da20() {
   return (neuron0x3e09cd0()*0.000442904);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2da60() {
   return (neuron0x3e0a010()*1.29938);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2daa0() {
   return (neuron0x3e0a350()*-0.00177758);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2dae0() {
   return (neuron0x3e0a690()*0.00271276);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2db20() {
   return (neuron0x3e0a9d0()*0.0042363);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2db60() {
   return (neuron0x3e0ad10()*0.0050833);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2dba0() {
   return (neuron0x3e0b050()*-0.00649693);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2dbe0() {
   return (neuron0x3e0b390()*0.000659442);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2dc20() {
   return (neuron0x3e0b6d0()*0.00796061);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2dc60() {
   return (neuron0x3e0ba10()*-0.0118827);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2dca0() {
   return (neuron0x3e0bd50()*-0.402024);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2dce0() {
   return (neuron0x3e0c090()*-0.0127506);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2dd20() {
   return (neuron0x3e0c3d0()*0.00480813);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2dd60() {
   return (neuron0x3e0c710()*-0.00570535);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2dda0() {
   return (neuron0x3e0ca50()*0.0139424);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d830() {
   return (neuron0x3e0cd90()*-0.00943635);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d870() {
   return (neuron0x3e0d2f0()*-0.00540261);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e3a0() {
   return (neuron0x3e0d510()*-0.00403784);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e3e0() {
   return (neuron0x3e0d850()*-0.00784161);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e420() {
   return (neuron0x3e0db90()*0.0120418);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e460() {
   return (neuron0x3e0ded0()*0.000964503);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e4a0() {
   return (neuron0x3e0e210()*-0.00269548);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e4e0() {
   return (neuron0x3e0e550()*0.0422463);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e860() {
   return (neuron0x3e09a20()*-3.34849);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e8a0() {
   return (neuron0x3e09cd0()*0.0179264);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e8e0() {
   return (neuron0x3e0a010()*-2.75187);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e920() {
   return (neuron0x3e0a350()*-0.0153778);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e960() {
   return (neuron0x3e0a690()*0.0360258);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e9a0() {
   return (neuron0x3e0a9d0()*0.00187775);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e9e0() {
   return (neuron0x3e0ad10()*0.00972431);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ea20() {
   return (neuron0x3e0b050()*0.117924);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ea60() {
   return (neuron0x3e0b390()*-0.0273807);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1eaa0() {
   return (neuron0x3e0b6d0()*-0.0169355);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1eae0() {
   return (neuron0x3e0ba10()*-0.0776467);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1eb20() {
   return (neuron0x3e0bd50()*-0.0808616);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1eb60() {
   return (neuron0x3e0c090()*0.0222697);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1eba0() {
   return (neuron0x3e0c3d0()*-0.0110352);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ebe0() {
   return (neuron0x3e0c710()*0.0501663);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ec20() {
   return (neuron0x3e0ca50()*0.086818);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e6b0() {
   return (neuron0x3e0cd90()*-0.0111372);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e6f0() {
   return (neuron0x3e0d2f0()*0.0308978);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ed70() {
   return (neuron0x3e0d510()*-0.089767);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1edb0() {
   return (neuron0x3e0d850()*0.00903813);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1edf0() {
   return (neuron0x3e0db90()*-0.0368327);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ee30() {
   return (neuron0x3e0ded0()*-0.0520418);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ee70() {
   return (neuron0x3e0e210()*0.036099);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1eeb0() {
   return (neuron0x3e0e550()*5.59261);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f230() {
   return (neuron0x3e09a20()*1.08007);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f270() {
   return (neuron0x3e09cd0()*-0.00505155);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f2b0() {
   return (neuron0x3e0a010()*3.61272);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f2f0() {
   return (neuron0x3e0a350()*-0.0422449);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f330() {
   return (neuron0x3e0a690()*0.0497423);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f370() {
   return (neuron0x3e0a9d0()*-0.203667);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f3b0() {
   return (neuron0x3e0ad10()*-0.0128978);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f3f0() {
   return (neuron0x3e0b050()*-0.136025);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f430() {
   return (neuron0x3e0b390()*-0.062186);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f470() {
   return (neuron0x3e0b6d0()*-0.161002);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f4b0() {
   return (neuron0x3e0ba10()*0.0343223);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f4f0() {
   return (neuron0x3e0bd50()*0.00598067);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f530() {
   return (neuron0x3e0c090()*0.121853);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f570() {
   return (neuron0x3e0c3d0()*-0.0153154);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f5b0() {
   return (neuron0x3e0c710()*0.182293);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f5f0() {
   return (neuron0x3e0ca50()*0.051905);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f080() {
   return (neuron0x3e0cd90()*-0.0232725);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f0c0() {
   return (neuron0x3e0d2f0()*-0.068028);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f740() {
   return (neuron0x3e0d510()*0.127951);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f780() {
   return (neuron0x3e0d850()*-0.0197194);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f7c0() {
   return (neuron0x3e0db90()*0.0625979);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f800() {
   return (neuron0x3e0ded0()*-0.0538272);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f840() {
   return (neuron0x3e0e210()*-0.109004);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f880() {
   return (neuron0x3e0e550()*3.28753);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1fc00() {
   return (neuron0x3e09a20()*-0.376931);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1fc40() {
   return (neuron0x3e09cd0()*0.979202);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1fc80() {
   return (neuron0x3e0a010()*-0.580963);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1fcc0() {
   return (neuron0x3e0a350()*-0.34887);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1fd00() {
   return (neuron0x3e0a690()*0.269484);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1fd40() {
   return (neuron0x3e0a9d0()*0.358932);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1fd80() {
   return (neuron0x3e0ad10()*0.303928);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1fdc0() {
   return (neuron0x3e0b050()*-0.520377);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1fe00() {
   return (neuron0x3e0b390()*0.665274);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1fe40() {
   return (neuron0x3e0b6d0()*0.225338);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1fe80() {
   return (neuron0x3e0ba10()*-0.0768217);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1fec0() {
   return (neuron0x3e0bd50()*-0.2473);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ff00() {
   return (neuron0x3e0c090()*-0.72881);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ff40() {
   return (neuron0x3e0c3d0()*-0.534657);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ff80() {
   return (neuron0x3e0c710()*-0.296625);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1ffc0() {
   return (neuron0x3e0ca50()*-0.208608);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1fa50() {
   return (neuron0x3e0cd90()*0.605885);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1fa90() {
   return (neuron0x3e0d2f0()*-0.411923);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20110() {
   return (neuron0x3e0d510()*0.431508);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20150() {
   return (neuron0x3e0d850()*0.0245338);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20190() {
   return (neuron0x3e0db90()*-0.196042);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e201d0() {
   return (neuron0x3e0ded0()*0.000149909);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20210() {
   return (neuron0x3e0e210()*-0.481455);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20250() {
   return (neuron0x3e0e550()*-0.176491);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32120() {
   return (neuron0x3e09a20()*-1.26095);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32160() {
   return (neuron0x3e09cd0()*0.00629539);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e321a0() {
   return (neuron0x3e0a010()*0.733669);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e321e0() {
   return (neuron0x3e0a350()*0.0143259);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32220() {
   return (neuron0x3e0a690()*0.0208758);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32260() {
   return (neuron0x3e0a9d0()*0.0983499);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e322a0() {
   return (neuron0x3e0ad10()*-0.0645627);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e322e0() {
   return (neuron0x3e0b050()*-0.026317);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32320() {
   return (neuron0x3e0b390()*0.00339909);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32360() {
   return (neuron0x3e0b6d0()*0.017252);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e323a0() {
   return (neuron0x3e0ba10()*-0.0432388);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e323e0() {
   return (neuron0x3e0bd50()*0.0545972);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32420() {
   return (neuron0x3e0c090()*-0.0166598);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32460() {
   return (neuron0x3e0c3d0()*0.0866767);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e324a0() {
   return (neuron0x3e0c710()*0.0200788);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e324e0() {
   return (neuron0x3e0ca50()*-0.0131504);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20290() {
   return (neuron0x3e0cd90()*-0.00548035);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e202d0() {
   return (neuron0x3e0d2f0()*-0.078832);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32630() {
   return (neuron0x3e0d510()*-0.0283074);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32670() {
   return (neuron0x3e0d850()*0.0278326);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e326b0() {
   return (neuron0x3e0db90()*0.115926);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e326f0() {
   return (neuron0x3e0ded0()*0.00634805);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32730() {
   return (neuron0x3e0e210()*-0.0439715);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32770() {
   return (neuron0x3e0e550()*-2.58839);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32af0() {
   return (neuron0x3e09a20()*-0.0548833);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32b30() {
   return (neuron0x3e09cd0()*0.00933665);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32b70() {
   return (neuron0x3e0a010()*2.12288);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32bb0() {
   return (neuron0x3e0a350()*-0.0210933);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32bf0() {
   return (neuron0x3e0a690()*0.0568258);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32c30() {
   return (neuron0x3e0a9d0()*0.0460693);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32c70() {
   return (neuron0x3e0ad10()*0.0524755);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32cb0() {
   return (neuron0x3e0b050()*0.0384308);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32cf0() {
   return (neuron0x3e0b390()*-0.0299828);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32d30() {
   return (neuron0x3e0b6d0()*-0.00870204);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32d70() {
   return (neuron0x3e0ba10()*-3.99905e-05);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32db0() {
   return (neuron0x3e0bd50()*-2.55653);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32df0() {
   return (neuron0x3e0c090()*-0.0788143);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32e30() {
   return (neuron0x3e0c3d0()*0.0675703);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32e70() {
   return (neuron0x3e0c710()*-0.0198736);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32eb0() {
   return (neuron0x3e0ca50()*0.00881605);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32940() {
   return (neuron0x3e0cd90()*0.0278812);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32980() {
   return (neuron0x3e0d2f0()*-0.0396382);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33000() {
   return (neuron0x3e0d510()*-0.039436);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33040() {
   return (neuron0x3e0d850()*-0.0136576);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33080() {
   return (neuron0x3e0db90()*0.0155286);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e330c0() {
   return (neuron0x3e0ded0()*-0.00703972);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33100() {
   return (neuron0x3e0e210()*-0.0157957);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33140() {
   return (neuron0x3e0e550()*-1.28699);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e334c0() {
   return (neuron0x3e09a20()*0.0316441);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33500() {
   return (neuron0x3e09cd0()*-0.0106716);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33540() {
   return (neuron0x3e0a010()*-0.343859);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33580() {
   return (neuron0x3e0a350()*-0.0361824);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e335c0() {
   return (neuron0x3e0a690()*0.0023689);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33600() {
   return (neuron0x3e0a9d0()*-0.0151429);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33640() {
   return (neuron0x3e0ad10()*-0.000367253);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33680() {
   return (neuron0x3e0b050()*-0.0172573);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e336c0() {
   return (neuron0x3e0b390()*-0.0174158);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33700() {
   return (neuron0x3e0b6d0()*-0.0175782);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33740() {
   return (neuron0x3e0ba10()*0.040401);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33780() {
   return (neuron0x3e0bd50()*-0.0564302);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e337c0() {
   return (neuron0x3e0c090()*0.000337837);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33800() {
   return (neuron0x3e0c3d0()*-0.0176952);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33840() {
   return (neuron0x3e0c710()*0.00924259);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33880() {
   return (neuron0x3e0ca50()*-0.0116222);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33310() {
   return (neuron0x3e0cd90()*-0.00462073);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33350() {
   return (neuron0x3e0d2f0()*0.0251698);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e339d0() {
   return (neuron0x3e0d510()*-0.0110212);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33a10() {
   return (neuron0x3e0d850()*-0.0446335);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33a50() {
   return (neuron0x3e0db90()*0.0361318);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33a90() {
   return (neuron0x3e0ded0()*-0.0223682);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33ad0() {
   return (neuron0x3e0e210()*-0.0318203);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33b10() {
   return (neuron0x3e0e550()*-0.0478344);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33e90() {
   return (neuron0x3e09a20()*0.0630977);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33ed0() {
   return (neuron0x3e09cd0()*0.000885767);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33f10() {
   return (neuron0x3e0a010()*1.14365);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33f50() {
   return (neuron0x3e0a350()*-0.0202464);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33f90() {
   return (neuron0x3e0a690()*0.0114043);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33fd0() {
   return (neuron0x3e0a9d0()*0.0117378);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e34010() {
   return (neuron0x3e0ad10()*0.00818815);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e34050() {
   return (neuron0x3e0b050()*-0.0165043);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e34090() {
   return (neuron0x3e0b390()*0.0102199);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e340d0() {
   return (neuron0x3e0b6d0()*0.0139882);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e34110() {
   return (neuron0x3e0ba10()*0.00374457);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e34150() {
   return (neuron0x3e0bd50()*-0.293265);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e34190() {
   return (neuron0x3e0c090()*0.000539914);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e341d0() {
   return (neuron0x3e0c3d0()*0.0139787);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e34210() {
   return (neuron0x3e0c710()*0.00279341);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e34250() {
   return (neuron0x3e0ca50()*0.0168353);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33ce0() {
   return (neuron0x3e0cd90()*-0.0138795);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33d20() {
   return (neuron0x3e0d2f0()*0.0126512);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e343a0() {
   return (neuron0x3e0d510()*0.0131971);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e343e0() {
   return (neuron0x3e0d850()*-0.00787541);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e34420() {
   return (neuron0x3e0db90()*0.0244931);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e34460() {
   return (neuron0x3e0ded0()*-0.00557111);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e344a0() {
   return (neuron0x3e0e210()*-0.0164274);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e344e0() {
   return (neuron0x3e0e550()*3.90482);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3bd4310() {
   return (neuron0x3e0e9c0()*-1.0365);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3bd4350() {
   return (neuron0x3e0f310()*-0.0717568);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10e80() {
   return (neuron0x3e0fdf0()*0.0362645);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e10ec0() {
   return (neuron0x3e0f890()*-0.384692);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e12960() {
   return (neuron0x3e10bd0()*0.0230786);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e129a0() {
   return (neuron0x3e126b0()*-0.641656);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13730() {
   return (neuron0x3e13480()*-1.36468);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13770() {
   return (neuron0x3e13e50()*0.979851);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14100() {
   return (neuron0x3e14820()*3.052);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14140() {
   return (neuron0x3e15300()*0.701629);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14ad0() {
   return (neuron0x3e15cd0()*0.981327);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e14b10() {
   return (neuron0x3e12db0()*0.0391409);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e155b0() {
   return (neuron0x3e17880()*0.00261376);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e155f0() {
   return (neuron0x3e18250()*-0.0214393);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15f80() {
   return (neuron0x3e18c20()*-0.132319);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e15fc0() {
   return (neuron0x3e195f0()*-0.578438);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e13060() {
   return (neuron0x3e1b400()*0.747378);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e130a0() {
   return (neuron0x3e1b6e0()*-0.099922);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17b30() {
   return (neuron0x3e1c0b0()*0.420489);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e17b70() {
   return (neuron0x3e1ca80()*-0.0765968);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18500() {
   return (neuron0x3e1d450()*0.140633);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18540() {
   return (neuron0x3e1de20()*0.528232);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18ed0() {
   return (neuron0x3e16970()*0.58655);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e18f10() {
   return (neuron0x3e17340()*0.127977);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e198a0() {
   return (neuron0x3e20bb0()*-0.0557441);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e198e0() {
   return (neuron0x3e21580()*0.00558675);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0c930() {
   return (neuron0x3e21f50()*0.128803);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0c970() {
   return (neuron0x3e22920()*-0.86139);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1b990() {
   return (neuron0x3e232f0()*-0.421032);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1b9d0() {
   return (neuron0x3e23cc0()*0.17275);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c360() {
   return (neuron0x3e24690()*-0.774368);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1c3a0() {
   return (neuron0x3e25060()*-0.0209614);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1cd30() {
   return (neuron0x3e1b0f0()*-0.769978);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1cd70() {
   return (neuron0x3e27c40()*0.339067);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d700() {
   return (neuron0x3e28610()*0.066286);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1d740() {
   return (neuron0x3e28fe0()*-2.27763);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e0d0() {
   return (neuron0x3e299b0()*-0.197086);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e110() {
   return (neuron0x3e2a380()*-0.0798272);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16c20() {
   return (neuron0x3e2ad50()*-0.018349);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e16c60() {
   return (neuron0x3e2b720()*0.00713773);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e204d0() {
   return (neuron0x3e2c0f0()*1.02255);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20510() {
   return (neuron0x3e2ccd0()*-0.5086);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20e60() {
   return (neuron0x3e2d6a0()*1.10266);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e20ea0() {
   return (neuron0x3e1e520()*-0.00297125);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21830() {
   return (neuron0x3e1eef0()*0.107339);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e21870() {
   return (neuron0x3e1f8c0()*0.017634);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22200() {
   return (neuron0x3e31f00()*0.143792);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22240() {
   return (neuron0x3e327b0()*-0.503181);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22bd0() {
   return (neuron0x3e33180()*-2.4683);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e22c10() {
   return (neuron0x3e33b50()*-0.242101);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e25310() {
   return (neuron0x3e0e9c0()*1.85046);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e25350() {
   return (neuron0x3e0f310()*-2.26289);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1a8d0() {
   return (neuron0x3e0fdf0()*-0.0126539);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1a910() {
   return (neuron0x3e0f890()*2.28976);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e27ef0() {
   return (neuron0x3e10bd0()*-0.00390376);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e27f30() {
   return (neuron0x3e126b0()*0.291179);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e288c0() {
   return (neuron0x3e13480()*-0.472959);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e28900() {
   return (neuron0x3e13e50()*-0.401503);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29290() {
   return (neuron0x3e14820()*0.7798);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e292d0() {
   return (neuron0x3e15300()*-0.665621);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29c60() {
   return (neuron0x3e15cd0()*-0.0994709);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e29ca0() {
   return (neuron0x3e12db0()*0.00926456);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a630() {
   return (neuron0x3e17880()*0.00120974);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2a670() {
   return (neuron0x3e18250()*-0.00421745);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b000() {
   return (neuron0x3e18c20()*0.0767737);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b040() {
   return (neuron0x3e195f0()*0.121354);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2b9d0() {
   return (neuron0x3e1b400()*0.420369);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2ba10() {
   return (neuron0x3e1b6e0()*-2.01133);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2c3a0() {
   return (neuron0x3e1c0b0()*-0.373255);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2c3e0() {
   return (neuron0x3e1ca80()*0.11472);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2cf80() {
   return (neuron0x3e1d450()*1.13484);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2cfc0() {
   return (neuron0x3e1de20()*-0.589404);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d950() {
   return (neuron0x3e16970()*-0.223209);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e2d990() {
   return (neuron0x3e17340()*7.3643);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e7d0() {
   return (neuron0x3e20bb0()*0.00712699);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1e810() {
   return (neuron0x3e21580()*-0.0179362);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f1a0() {
   return (neuron0x3e21f50()*-0.0224473);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1f1e0() {
   return (neuron0x3e22920()*0.118709);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1fb70() {
   return (neuron0x3e232f0()*0.440647);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e1fbb0() {
   return (neuron0x3e23cc0()*-0.389556);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32090() {
   return (neuron0x3e24690()*-0.8639);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e320d0() {
   return (neuron0x3e25060()*-0.00198319);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32a60() {
   return (neuron0x3e1b0f0()*1.28429);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e32aa0() {
   return (neuron0x3e27c40()*-0.0540092);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33430() {
   return (neuron0x3e28610()*0.0107022);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33470() {
   return (neuron0x3e28fe0()*1.5348);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33e00() {
   return (neuron0x3e299b0()*0.0263657);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e33e40() {
   return (neuron0x3e2a380()*0.0270171);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0ec70() {
   return (neuron0x3e2ad50()*-2.03196);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e0ecb0() {
   return (neuron0x3e2b720()*0.0226689);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e235a0() {
   return (neuron0x3e2c0f0()*3.18961);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e235e0() {
   return (neuron0x3e2ccd0()*-1.20027);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e34520() {
   return (neuron0x3e2d6a0()*-1.40662);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e34560() {
   return (neuron0x3e1e520()*-7.60825);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e345a0() {
   return (neuron0x3e1eef0()*-0.0232025);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e345e0() {
   return (neuron0x3e1f8c0()*0.000513208);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3b490() {
   return (neuron0x3e31f00()*-0.0694502);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3b4d0() {
   return (neuron0x3e327b0()*0.474555);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3b510() {
   return (neuron0x3e33180()*0.693304);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3b550() {
   return (neuron0x3e33b50()*1.81747);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3b8d0() {
   return (neuron0x3e0e9c0()*1.50293);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3b910() {
   return (neuron0x3e0f310()*1.68825);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3b950() {
   return (neuron0x3e0fdf0()*-0.0490894);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3b990() {
   return (neuron0x3e0f890()*-1.35439);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3b9d0() {
   return (neuron0x3e10bd0()*-0.0294676);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3ba10() {
   return (neuron0x3e126b0()*0.710279);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3ba50() {
   return (neuron0x3e13480()*-1.24341);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3ba90() {
   return (neuron0x3e13e50()*-0.89933);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3bad0() {
   return (neuron0x3e14820()*3.60174);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3bb10() {
   return (neuron0x3e15300()*0.336997);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3bb50() {
   return (neuron0x3e15cd0()*-0.0640935);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3bb90() {
   return (neuron0x3e12db0()*-0.14169);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3bbd0() {
   return (neuron0x3e17880()*0.0248554);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3bc10() {
   return (neuron0x3e18250()*-0.00758815);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3bc50() {
   return (neuron0x3e18c20()*-0.554873);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3bc90() {
   return (neuron0x3e195f0()*0.367836);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3b720() {
   return (neuron0x3e1b400()*-0.545801);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3b760() {
   return (neuron0x3e1b6e0()*-3.53541);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3bde0() {
   return (neuron0x3e1c0b0()*0.198057);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3be20() {
   return (neuron0x3e1ca80()*0.0725847);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3be60() {
   return (neuron0x3e1d450()*1.21807);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3bea0() {
   return (neuron0x3e1de20()*-0.52786);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3bee0() {
   return (neuron0x3e16970()*-0.0712892);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3bf20() {
   return (neuron0x3e17340()*4.28128);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3bf60() {
   return (neuron0x3e20bb0()*0.0435892);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3bfa0() {
   return (neuron0x3e21580()*-0.0484183);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3bfe0() {
   return (neuron0x3e21f50()*-0.146422);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c020() {
   return (neuron0x3e22920()*-1.69115);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c060() {
   return (neuron0x3e232f0()*-1.1954);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c0a0() {
   return (neuron0x3e23cc0()*-1.25858);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c0e0() {
   return (neuron0x3e24690()*1.14811);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c120() {
   return (neuron0x3e25060()*0.00489292);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3bcd0() {
   return (neuron0x3e1b0f0()*-0.00739326);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3bd10() {
   return (neuron0x3e27c40()*-0.150144);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3bd50() {
   return (neuron0x3e28610()*-0.0475521);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3bd90() {
   return (neuron0x3e28fe0()*-0.406872);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c370() {
   return (neuron0x3e299b0()*0.205091);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c3b0() {
   return (neuron0x3e2a380()*0.115416);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c3f0() {
   return (neuron0x3e2ad50()*0.016372);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c430() {
   return (neuron0x3e2b720()*-0.0378815);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c470() {
   return (neuron0x3e2c0f0()*-1.13727);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c4b0() {
   return (neuron0x3e2ccd0()*-1.6536);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c4f0() {
   return (neuron0x3e2d6a0()*1.50245);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c530() {
   return (neuron0x3e1e520()*-0.0176233);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c570() {
   return (neuron0x3e1eef0()*-0.361156);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c5b0() {
   return (neuron0x3e1f8c0()*0.00688707);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c5f0() {
   return (neuron0x3e31f00()*-0.560214);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c630() {
   return (neuron0x3e327b0()*0.336863);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c670() {
   return (neuron0x3e33180()*-1.28792);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c6b0() {
   return (neuron0x3e33b50()*0.683061);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3ca30() {
   return (neuron0x3e0e9c0()*-0.111088);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3ca70() {
   return (neuron0x3e0f310()*0.653639);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3cab0() {
   return (neuron0x3e0fdf0()*-0.143876);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3caf0() {
   return (neuron0x3e0f890()*0.355665);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3cb30() {
   return (neuron0x3e10bd0()*-0.084611);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3cb70() {
   return (neuron0x3e126b0()*-2.25192);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3cbb0() {
   return (neuron0x3e13480()*2.08984);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3cbf0() {
   return (neuron0x3e13e50()*-1.45062);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3cc30() {
   return (neuron0x3e14820()*-0.0736089);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3cc70() {
   return (neuron0x3e15300()*-2.14026);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3ccb0() {
   return (neuron0x3e15cd0()*-6.64);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3ccf0() {
   return (neuron0x3e12db0()*0.162267);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3cd30() {
   return (neuron0x3e17880()*0.0115072);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3cd70() {
   return (neuron0x3e18250()*-0.0126984);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3cdb0() {
   return (neuron0x3e18c20()*0.0840738);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3cdf0() {
   return (neuron0x3e195f0()*0.355018);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c880() {
   return (neuron0x3e1b400()*0.2948);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3c8c0() {
   return (neuron0x3e1b6e0()*-0.0279043);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3cf40() {
   return (neuron0x3e1c0b0()*1.84156);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3cf80() {
   return (neuron0x3e1ca80()*0.307048);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3cfc0() {
   return (neuron0x3e1d450()*-1.65848);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d000() {
   return (neuron0x3e1de20()*-1.38008);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d040() {
   return (neuron0x3e16970()*0.669855);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d080() {
   return (neuron0x3e17340()*2.75951);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d0c0() {
   return (neuron0x3e20bb0()*0.196242);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d100() {
   return (neuron0x3e21580()*-0.0806834);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d140() {
   return (neuron0x3e21f50()*-0.330716);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d180() {
   return (neuron0x3e22920()*0.43893);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d1c0() {
   return (neuron0x3e232f0()*0.613562);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d200() {
   return (neuron0x3e23cc0()*0.290905);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d240() {
   return (neuron0x3e24690()*1.37806);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d280() {
   return (neuron0x3e25060()*0.078366);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3ce30() {
   return (neuron0x3e1b0f0()*-0.146338);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3ce70() {
   return (neuron0x3e27c40()*1.62573);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3ceb0() {
   return (neuron0x3e28610()*-0.0686698);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3cef0() {
   return (neuron0x3e28fe0()*-0.920257);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d4d0() {
   return (neuron0x3e299b0()*0.764509);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d510() {
   return (neuron0x3e2a380()*0.0596929);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d550() {
   return (neuron0x3e2ad50()*1.02138);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d590() {
   return (neuron0x3e2b720()*0.361501);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d5d0() {
   return (neuron0x3e2c0f0()*-0.603785);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d610() {
   return (neuron0x3e2ccd0()*3.60435);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d650() {
   return (neuron0x3e2d6a0()*-0.277798);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d690() {
   return (neuron0x3e1e520()*3.09691);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d6d0() {
   return (neuron0x3e1eef0()*0.0587787);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d710() {
   return (neuron0x3e1f8c0()*-0.052944);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d750() {
   return (neuron0x3e31f00()*-0.120459);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d790() {
   return (neuron0x3e327b0()*1.6566);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d7d0() {
   return (neuron0x3e33180()*0.0662047);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d810() {
   return (neuron0x3e33b50()*0.736522);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3db90() {
   return (neuron0x3e0e9c0()*-1.08517);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3dbd0() {
   return (neuron0x3e0f310()*-0.32132);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3dc10() {
   return (neuron0x3e0fdf0()*2.72635);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3dc50() {
   return (neuron0x3e0f890()*-3.55881);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3dc90() {
   return (neuron0x3e10bd0()*0.651361);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3dcd0() {
   return (neuron0x3e126b0()*-2.52161);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3dd10() {
   return (neuron0x3e13480()*0.750261);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3dd50() {
   return (neuron0x3e13e50()*-0.514587);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3dd90() {
   return (neuron0x3e14820()*-0.477914);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3ddd0() {
   return (neuron0x3e15300()*-0.791949);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3de10() {
   return (neuron0x3e15cd0()*-2.0198);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3de50() {
   return (neuron0x3e12db0()*3.127);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3de90() {
   return (neuron0x3e17880()*-0.916489);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3ded0() {
   return (neuron0x3e18250()*0.650435);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3df10() {
   return (neuron0x3e18c20()*3.33429);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3df50() {
   return (neuron0x3e195f0()*0.13186);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3d9e0() {
   return (neuron0x3e1b400()*-0.532026);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3da20() {
   return (neuron0x3e1b6e0()*2.33535);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e0a0() {
   return (neuron0x3e1c0b0()*1.61004);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e0e0() {
   return (neuron0x3e1ca80()*-1.62898);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e120() {
   return (neuron0x3e1d450()*3.59085);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e160() {
   return (neuron0x3e1de20()*0.535339);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e1a0() {
   return (neuron0x3e16970()*4.69027);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e1e0() {
   return (neuron0x3e17340()*-4.13108);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e220() {
   return (neuron0x3e20bb0()*-1.86117);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e260() {
   return (neuron0x3e21580()*0.667977);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e2a0() {
   return (neuron0x3e21f50()*0.441412);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e2e0() {
   return (neuron0x3e22920()*-0.939112);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e320() {
   return (neuron0x3e232f0()*1.55876);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e360() {
   return (neuron0x3e23cc0()*-0.392846);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e3a0() {
   return (neuron0x3e24690()*6.24177);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e3e0() {
   return (neuron0x3e25060()*-0.785001);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3df90() {
   return (neuron0x3e1b0f0()*0.841977);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3dfd0() {
   return (neuron0x3e27c40()*0.611247);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e010() {
   return (neuron0x3e28610()*0.731966);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e050() {
   return (neuron0x3e28fe0()*-1.06499);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e630() {
   return (neuron0x3e299b0()*-0.508981);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e670() {
   return (neuron0x3e2a380()*-0.278577);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e6b0() {
   return (neuron0x3e2ad50()*0.026575);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e6f0() {
   return (neuron0x3e2b720()*0.266576);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e730() {
   return (neuron0x3e2c0f0()*0.0124421);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e770() {
   return (neuron0x3e2ccd0()*-1.44167);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e7b0() {
   return (neuron0x3e2d6a0()*1.02494);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e7f0() {
   return (neuron0x3e1e520()*0.0740489);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e830() {
   return (neuron0x3e1eef0()*1.82073);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e870() {
   return (neuron0x3e1f8c0()*-0.832518);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e8b0() {
   return (neuron0x3e31f00()*-0.409523);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e8f0() {
   return (neuron0x3e327b0()*0.0903182);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e930() {
   return (neuron0x3e33180()*-2.06723);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3e970() {
   return (neuron0x3e33b50()*-0.540872);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3ebd0() {
   return (neuron0x3e3ad50()*-8.0796);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3ec10() {
   return (neuron0x3e3b0f0()*12.338);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3ec50() {
   return (neuron0x3e3b590()*-9.9924);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3ec90() {
   return (neuron0x3e3c6f0()*-2.2834);
}

double NNfunction_nn_charge1p_charge1m::synapse0x3e3ecd0() {
   return (neuron0x3e3d850()*-6.57814);
}

