#include "NNfunction_ns_chi02_sL.h"
#include <cmath>

double NNfunction_ns_chi02_sL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.256)/15.1468;
   input1 = (in1 - 45.3815)/873.816;
   input2 = (in2 - 379.288)/446.982;
   input3 = (in3 - 150.154)/711.767;
   input4 = (in4 - 852.075)/808.293;
   input5 = (in5 - 744.268)/802.888;
   input6 = (in6 - 741.3)/796.495;
   input7 = (in7 - 745.611)/783.712;
   input8 = (in8 - 751.502)/829.507;
   input9 = (in9 - 743.116)/817.697;
   input10 = (in10 - 767.967)/829.526;
   input11 = (in11 - 692.684)/708.302;
   input12 = (in12 - 349.39)/278.49;
   input13 = (in13 - 502.009)/414.484;
   input14 = (in14 - 683.659)/656.182;
   input15 = (in15 - 683.873)/659.044;
   input16 = (in16 - 484.236)/448.199;
   input17 = (in17 - 714.2)/739.61;
   input18 = (in18 - 715.463)/741.905;
   input19 = (in19 - 715.092)/710.807;
   input20 = (in20 - -121.261)/444.964;
   input21 = (in21 - -161.805)/990.201;
   input22 = (in22 - 9.40977)/1006.27;
   input23 = (in23 - -40.3631)/469.171;
   switch(index) {
     case 0:
         return neuron0x360abd0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi02_sL::Value(int index, double* input) {
   input0 = (input[0] - 23.256)/15.1468;
   input1 = (input[1] - 45.3815)/873.816;
   input2 = (input[2] - 379.288)/446.982;
   input3 = (input[3] - 150.154)/711.767;
   input4 = (input[4] - 852.075)/808.293;
   input5 = (input[5] - 744.268)/802.888;
   input6 = (input[6] - 741.3)/796.495;
   input7 = (input[7] - 745.611)/783.712;
   input8 = (input[8] - 751.502)/829.507;
   input9 = (input[9] - 743.116)/817.697;
   input10 = (input[10] - 767.967)/829.526;
   input11 = (input[11] - 692.684)/708.302;
   input12 = (input[12] - 349.39)/278.49;
   input13 = (input[13] - 502.009)/414.484;
   input14 = (input[14] - 683.659)/656.182;
   input15 = (input[15] - 683.873)/659.044;
   input16 = (input[16] - 484.236)/448.199;
   input17 = (input[17] - 714.2)/739.61;
   input18 = (input[18] - 715.463)/741.905;
   input19 = (input[19] - 715.092)/710.807;
   input20 = (input[20] - -121.261)/444.964;
   input21 = (input[21] - -161.805)/990.201;
   input22 = (input[22] - 9.40977)/1006.27;
   input23 = (input[23] - -40.3631)/469.171;
   switch(index) {
     case 0:
         return neuron0x360abd0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi02_sL::neuron0x35d5c40() {
   return input0;
}

double NNfunction_ns_chi02_sL::neuron0x35d5ef0() {
   return input1;
}

double NNfunction_ns_chi02_sL::neuron0x35d6230() {
   return input2;
}

double NNfunction_ns_chi02_sL::neuron0x35d6570() {
   return input3;
}

double NNfunction_ns_chi02_sL::neuron0x35d68b0() {
   return input4;
}

double NNfunction_ns_chi02_sL::neuron0x35d6bf0() {
   return input5;
}

double NNfunction_ns_chi02_sL::neuron0x35d6f30() {
   return input6;
}

double NNfunction_ns_chi02_sL::neuron0x35d7270() {
   return input7;
}

double NNfunction_ns_chi02_sL::neuron0x35d75b0() {
   return input8;
}

double NNfunction_ns_chi02_sL::neuron0x35d78f0() {
   return input9;
}

double NNfunction_ns_chi02_sL::neuron0x35d7c30() {
   return input10;
}

double NNfunction_ns_chi02_sL::neuron0x35d7f70() {
   return input11;
}

double NNfunction_ns_chi02_sL::neuron0x35d82b0() {
   return input12;
}

double NNfunction_ns_chi02_sL::neuron0x35d85f0() {
   return input13;
}

double NNfunction_ns_chi02_sL::neuron0x35d8930() {
   return input14;
}

double NNfunction_ns_chi02_sL::neuron0x35d8c70() {
   return input15;
}

double NNfunction_ns_chi02_sL::neuron0x35d8fb0() {
   return input16;
}

double NNfunction_ns_chi02_sL::neuron0x35d9510() {
   return input17;
}

double NNfunction_ns_chi02_sL::neuron0x35d9850() {
   return input18;
}

double NNfunction_ns_chi02_sL::neuron0x35d9b90() {
   return input19;
}

double NNfunction_ns_chi02_sL::neuron0x35d9ed0() {
   return input20;
}

double NNfunction_ns_chi02_sL::neuron0x35da210() {
   return input21;
}

double NNfunction_ns_chi02_sL::neuron0x35da550() {
   return input22;
}

double NNfunction_ns_chi02_sL::neuron0x35da890() {
   return input23;
}

double NNfunction_ns_chi02_sL::input0x35dad00() {
   double input = 0.420249;
   input += synapse0x35db040();
   input += synapse0x35db080();
   input += synapse0x35db0c0();
   input += synapse0x35db100();
   input += synapse0x35db140();
   input += synapse0x35db180();
   input += synapse0x35db1c0();
   input += synapse0x35db200();
   input += synapse0x35db240();
   input += synapse0x35db280();
   input += synapse0x35db2c0();
   input += synapse0x35db300();
   input += synapse0x35db340();
   input += synapse0x35db380();
   input += synapse0x35db3c0();
   input += synapse0x35db400();
   input += synapse0x35dae90();
   input += synapse0x35daed0();
   input += synapse0x3391dc0();
   input += synapse0x3391e00();
   input += synapse0x35db440();
   input += synapse0x35db480();
   input += synapse0x35db4c0();
   input += synapse0x35db500();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35dad00() {
   double input = input0x35dad00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35db540() {
   double input = -0.672926;
   input += synapse0x35db880();
   input += synapse0x35db8c0();
   input += synapse0x35db900();
   input += synapse0x35db940();
   input += synapse0x35db980();
   input += synapse0x35db9c0();
   input += synapse0x35dba00();
   input += synapse0x35dba40();
   input += synapse0x35dba80();
   input += synapse0x3391c10();
   input += synapse0x3391c50();
   input += synapse0x3391c90();
   input += synapse0x3391cd0();
   input += synapse0x35dbcd0();
   input += synapse0x35dbd10();
   input += synapse0x35dbd50();
   input += synapse0x35db6d0();
   input += synapse0x35db710();
   input += synapse0x35dbea0();
   input += synapse0x35dbee0();
   input += synapse0x35dbf20();
   input += synapse0x35dbf60();
   input += synapse0x35dbfa0();
   input += synapse0x35dbfe0();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35db540() {
   double input = input0x35db540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35dc020() {
   double input = 1.59873;
   input += synapse0x35dc360();
   input += synapse0x35dc3a0();
   input += synapse0x35dc3e0();
   input += synapse0x35dc420();
   input += synapse0x35dc460();
   input += synapse0x35dc4a0();
   input += synapse0x35dc4e0();
   input += synapse0x35dc520();
   input += synapse0x35dc560();
   input += synapse0x35dc5a0();
   input += synapse0x35dc5e0();
   input += synapse0x35dc620();
   input += synapse0x35dc660();
   input += synapse0x35dc6a0();
   input += synapse0x35dc6e0();
   input += synapse0x35dc720();
   input += synapse0x35dc1b0();
   input += synapse0x35dc1f0();
   input += synapse0x33924b0();
   input += synapse0x339fd80();
   input += synapse0x339fdc0();
   input += synapse0x35de650();
   input += synapse0x35de690();
   input += synapse0x35d5980();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35dc020() {
   double input = input0x35dc020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35dbac0() {
   double input = -1.56834;
   input += synapse0x35d5a50();
   input += synapse0x33a0600();
   input += synapse0x35dbc50();
   input += synapse0x35dbc90();
   input += synapse0x35dc870();
   input += synapse0x35dc8b0();
   input += synapse0x35dc8f0();
   input += synapse0x35dc930();
   input += synapse0x35dc970();
   input += synapse0x35dc9b0();
   input += synapse0x35dc9f0();
   input += synapse0x35dca30();
   input += synapse0x35dca70();
   input += synapse0x35dcab0();
   input += synapse0x35dcaf0();
   input += synapse0x35dcb30();
   input += synapse0x35d59c0();
   input += synapse0x35d5a00();
   input += synapse0x35dcc80();
   input += synapse0x35dccc0();
   input += synapse0x35dcd00();
   input += synapse0x35dcd40();
   input += synapse0x35dcd80();
   input += synapse0x35dcdc0();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35dbac0() {
   double input = input0x35dbac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35dce00() {
   double input = -1.04944;
   input += synapse0x35dd140();
   input += synapse0x35dd180();
   input += synapse0x35dd1c0();
   input += synapse0x35dd200();
   input += synapse0x35dd240();
   input += synapse0x35dd280();
   input += synapse0x35dd2c0();
   input += synapse0x35dd300();
   input += synapse0x35dd340();
   input += synapse0x35dd380();
   input += synapse0x35dd3c0();
   input += synapse0x35dd400();
   input += synapse0x35dd440();
   input += synapse0x35dd480();
   input += synapse0x35dd4c0();
   input += synapse0x35dd500();
   input += synapse0x35dd650();
   input += synapse0x35dcf90();
   input += synapse0x35dcfd0();
   input += synapse0x35de790();
   input += synapse0x35de7d0();
   input += synapse0x35de810();
   input += synapse0x35de850();
   input += synapse0x35de890();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35dce00() {
   double input = input0x35dce00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35de8d0() {
   double input = 0.242501;
   input += synapse0x35dec10();
   input += synapse0x35dec50();
   input += synapse0x35dec90();
   input += synapse0x35decd0();
   input += synapse0x35ded10();
   input += synapse0x35ded50();
   input += synapse0x35ded90();
   input += synapse0x35dedd0();
   input += synapse0x35dee10();
   input += synapse0x33a00d0();
   input += synapse0x33a0110();
   input += synapse0x33a0150();
   input += synapse0x33a0190();
   input += synapse0x33a01d0();
   input += synapse0x33a0210();
   input += synapse0x33a0250();
   input += synapse0x35dea60();
   input += synapse0x35deaa0();
   input += synapse0x33a03a0();
   input += synapse0x33a03e0();
   input += synapse0x33a0420();
   input += synapse0x33a0460();
   input += synapse0x33a04a0();
   input += synapse0x35df660();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35de8d0() {
   double input = input0x35de8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35df6a0() {
   double input = 0.830497;
   input += synapse0x35df9e0();
   input += synapse0x35dfa20();
   input += synapse0x35dfa60();
   input += synapse0x35dfaa0();
   input += synapse0x35dfae0();
   input += synapse0x35dfb20();
   input += synapse0x35dfb60();
   input += synapse0x35dfba0();
   input += synapse0x35dfbe0();
   input += synapse0x35dfc20();
   input += synapse0x35dfc60();
   input += synapse0x35dfca0();
   input += synapse0x35dfce0();
   input += synapse0x35dfd20();
   input += synapse0x35dfd60();
   input += synapse0x35dfda0();
   input += synapse0x35df830();
   input += synapse0x35df870();
   input += synapse0x35dfef0();
   input += synapse0x35dff30();
   input += synapse0x35dff70();
   input += synapse0x35dffb0();
   input += synapse0x35dfff0();
   input += synapse0x35e0030();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35df6a0() {
   double input = input0x35df6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35e0070() {
   double input = -2.14462;
   input += synapse0x35e03b0();
   input += synapse0x35e03f0();
   input += synapse0x35e0430();
   input += synapse0x35e0470();
   input += synapse0x35e04b0();
   input += synapse0x35e04f0();
   input += synapse0x35e0530();
   input += synapse0x35e0570();
   input += synapse0x35e05b0();
   input += synapse0x35e05f0();
   input += synapse0x35e0630();
   input += synapse0x35e0670();
   input += synapse0x35e06b0();
   input += synapse0x35e06f0();
   input += synapse0x35e0730();
   input += synapse0x35e0770();
   input += synapse0x35e0200();
   input += synapse0x35e0240();
   input += synapse0x35e08c0();
   input += synapse0x35e0900();
   input += synapse0x35e0940();
   input += synapse0x35e0980();
   input += synapse0x35e09c0();
   input += synapse0x35e0a00();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35e0070() {
   double input = input0x35e0070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35e0a40() {
   double input = 0.229311;
   input += synapse0x35d9400();
   input += synapse0x35d9440();
   input += synapse0x35d9480();
   input += synapse0x35d94c0();
   input += synapse0x35e0f90();
   input += synapse0x35e0fd0();
   input += synapse0x35e1010();
   input += synapse0x35e1050();
   input += synapse0x35e1090();
   input += synapse0x35e10d0();
   input += synapse0x35e1110();
   input += synapse0x35e1150();
   input += synapse0x35e1190();
   input += synapse0x35e11d0();
   input += synapse0x35e1210();
   input += synapse0x35e1250();
   input += synapse0x35e0bd0();
   input += synapse0x35e0c10();
   input += synapse0x35e13a0();
   input += synapse0x35e13e0();
   input += synapse0x35e1420();
   input += synapse0x35e1460();
   input += synapse0x35e14a0();
   input += synapse0x35e14e0();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35e0a40() {
   double input = input0x35e0a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35e1520() {
   double input = -0.0669732;
   input += synapse0x35e1860();
   input += synapse0x35e18a0();
   input += synapse0x35e18e0();
   input += synapse0x35e1920();
   input += synapse0x35e1960();
   input += synapse0x35e19a0();
   input += synapse0x35e19e0();
   input += synapse0x35e1a20();
   input += synapse0x35e1a60();
   input += synapse0x35e1aa0();
   input += synapse0x35e1ae0();
   input += synapse0x35e1b20();
   input += synapse0x35e1b60();
   input += synapse0x35e1ba0();
   input += synapse0x35e1be0();
   input += synapse0x35e1c20();
   input += synapse0x35e16b0();
   input += synapse0x35e16f0();
   input += synapse0x35e1d70();
   input += synapse0x35e1db0();
   input += synapse0x35e1df0();
   input += synapse0x35e1e30();
   input += synapse0x35e1e70();
   input += synapse0x35e1eb0();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35e1520() {
   double input = input0x35e1520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35e1ef0() {
   double input = -0.798719;
   input += synapse0x35e2230();
   input += synapse0x35e2270();
   input += synapse0x35e22b0();
   input += synapse0x35e22f0();
   input += synapse0x35e2330();
   input += synapse0x35e2370();
   input += synapse0x35e23b0();
   input += synapse0x35e23f0();
   input += synapse0x35e2430();
   input += synapse0x35e2470();
   input += synapse0x35e24b0();
   input += synapse0x35e24f0();
   input += synapse0x35e2530();
   input += synapse0x35e2570();
   input += synapse0x35e25b0();
   input += synapse0x35e25f0();
   input += synapse0x35e2080();
   input += synapse0x35e20c0();
   input += synapse0x35dee50();
   input += synapse0x35dee90();
   input += synapse0x35deed0();
   input += synapse0x35def10();
   input += synapse0x35def50();
   input += synapse0x35def90();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35e1ef0() {
   double input = input0x35e1ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35defd0() {
   double input = 2.55391;
   input += synapse0x35df310();
   input += synapse0x35df350();
   input += synapse0x35df390();
   input += synapse0x35df3d0();
   input += synapse0x35df410();
   input += synapse0x35df450();
   input += synapse0x35df490();
   input += synapse0x35df4d0();
   input += synapse0x35df510();
   input += synapse0x35df550();
   input += synapse0x35df590();
   input += synapse0x35df5d0();
   input += synapse0x35df610();
   input += synapse0x35e3750();
   input += synapse0x35e3790();
   input += synapse0x35e37d0();
   input += synapse0x35df160();
   input += synapse0x35df1a0();
   input += synapse0x35e3920();
   input += synapse0x35e3960();
   input += synapse0x35e39a0();
   input += synapse0x35e39e0();
   input += synapse0x35e3a20();
   input += synapse0x35e3a60();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35defd0() {
   double input = input0x35defd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35e3aa0() {
   double input = -0.373104;
   input += synapse0x35e3de0();
   input += synapse0x35e3e20();
   input += synapse0x35e3e60();
   input += synapse0x35e3ea0();
   input += synapse0x35e3ee0();
   input += synapse0x35e3f20();
   input += synapse0x35e3f60();
   input += synapse0x35e3fa0();
   input += synapse0x35e3fe0();
   input += synapse0x35e4020();
   input += synapse0x35e4060();
   input += synapse0x35e40a0();
   input += synapse0x35e40e0();
   input += synapse0x35e4120();
   input += synapse0x35e4160();
   input += synapse0x35e41a0();
   input += synapse0x35e3c30();
   input += synapse0x35e3c70();
   input += synapse0x35e42f0();
   input += synapse0x35e4330();
   input += synapse0x35e4370();
   input += synapse0x35e43b0();
   input += synapse0x35e43f0();
   input += synapse0x35e4430();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35e3aa0() {
   double input = input0x35e3aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35e4470() {
   double input = 0.148317;
   input += synapse0x35e47b0();
   input += synapse0x35e47f0();
   input += synapse0x35e4830();
   input += synapse0x35e4870();
   input += synapse0x35e48b0();
   input += synapse0x35e48f0();
   input += synapse0x35e4930();
   input += synapse0x35e4970();
   input += synapse0x35e49b0();
   input += synapse0x35e49f0();
   input += synapse0x35e4a30();
   input += synapse0x35e4a70();
   input += synapse0x35e4ab0();
   input += synapse0x35e4af0();
   input += synapse0x35e4b30();
   input += synapse0x35e4b70();
   input += synapse0x35e4600();
   input += synapse0x35e4640();
   input += synapse0x35e4cc0();
   input += synapse0x35e4d00();
   input += synapse0x35e4d40();
   input += synapse0x35e4d80();
   input += synapse0x35e4dc0();
   input += synapse0x35e4e00();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35e4470() {
   double input = input0x35e4470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35e4e40() {
   double input = 0.319853;
   input += synapse0x35e5180();
   input += synapse0x35e51c0();
   input += synapse0x35e5200();
   input += synapse0x35e5240();
   input += synapse0x35e5280();
   input += synapse0x35e52c0();
   input += synapse0x35e5300();
   input += synapse0x35e5340();
   input += synapse0x35e5380();
   input += synapse0x35e53c0();
   input += synapse0x35e5400();
   input += synapse0x35e5440();
   input += synapse0x35e5480();
   input += synapse0x35e54c0();
   input += synapse0x35e5500();
   input += synapse0x35e5540();
   input += synapse0x35e4fd0();
   input += synapse0x35e5010();
   input += synapse0x35e5690();
   input += synapse0x35e56d0();
   input += synapse0x35e5710();
   input += synapse0x35e5750();
   input += synapse0x35e5790();
   input += synapse0x35e57d0();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35e4e40() {
   double input = input0x35e4e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35e5810() {
   double input = -0.679556;
   input += synapse0x35e5b50();
   input += synapse0x35d5dd0();
   input += synapse0x35d5e10();
   input += synapse0x35d6110();
   input += synapse0x35d6150();
   input += synapse0x35d6450();
   input += synapse0x35d6490();
   input += synapse0x35d6790();
   input += synapse0x35d67d0();
   input += synapse0x35d6ad0();
   input += synapse0x35d6b10();
   input += synapse0x35d6e10();
   input += synapse0x35d6e50();
   input += synapse0x35d7150();
   input += synapse0x35d7190();
   input += synapse0x35d7490();
   input += synapse0x35d74d0();
   input += synapse0x35d77d0();
   input += synapse0x35d7810();
   input += synapse0x35d7b10();
   input += synapse0x35d7b50();
   input += synapse0x35d7e50();
   input += synapse0x35d7e90();
   input += synapse0x35d8190();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35e5810() {
   double input = input0x35e5810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35e7620() {
   double input = 0.486989;
   input += synapse0x35d81d0();
   input += synapse0x35d8e90();
   input += synapse0x35d8ed0();
   input += synapse0x35e59a0();
   input += synapse0x35e59e0();
   input += synapse0x35d91d0();
   input += synapse0x35d9210();
   input += synapse0x35d9730();
   input += synapse0x35d9770();
   input += synapse0x35d9a70();
   input += synapse0x35d9ab0();
   input += synapse0x35d9db0();
   input += synapse0x35d9df0();
   input += synapse0x35da0f0();
   input += synapse0x35da130();
   input += synapse0x35da430();
   input += synapse0x35da470();
   input += synapse0x35da770();
   input += synapse0x35da7b0();
   input += synapse0x35daab0();
   input += synapse0x35daaf0();
   input += synapse0x35d84d0();
   input += synapse0x35d8510();
   input += synapse0x35e78c0();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35e7620() {
   double input = input0x35e7620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35e7900() {
   double input = -1.06705;
   input += synapse0x35e7c40();
   input += synapse0x35e7c80();
   input += synapse0x35e7cc0();
   input += synapse0x35e7d00();
   input += synapse0x35e7d40();
   input += synapse0x35e7d80();
   input += synapse0x35e7dc0();
   input += synapse0x35e7e00();
   input += synapse0x35e7e40();
   input += synapse0x35e7e80();
   input += synapse0x35e7ec0();
   input += synapse0x35e7f00();
   input += synapse0x35e7f40();
   input += synapse0x35e7f80();
   input += synapse0x35e7fc0();
   input += synapse0x35e8000();
   input += synapse0x35e7a90();
   input += synapse0x35e7ad0();
   input += synapse0x35e8150();
   input += synapse0x35e8190();
   input += synapse0x35e81d0();
   input += synapse0x35e8210();
   input += synapse0x35e8250();
   input += synapse0x35e8290();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35e7900() {
   double input = input0x35e7900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35e82d0() {
   double input = -1.02859;
   input += synapse0x35e8610();
   input += synapse0x35e8650();
   input += synapse0x35e8690();
   input += synapse0x35e86d0();
   input += synapse0x35e8710();
   input += synapse0x35e8750();
   input += synapse0x35e8790();
   input += synapse0x35e87d0();
   input += synapse0x35e8810();
   input += synapse0x35e8850();
   input += synapse0x35e8890();
   input += synapse0x35e88d0();
   input += synapse0x35e8910();
   input += synapse0x35e8950();
   input += synapse0x35e8990();
   input += synapse0x35e89d0();
   input += synapse0x35e8460();
   input += synapse0x35e84a0();
   input += synapse0x35e8b20();
   input += synapse0x35e8b60();
   input += synapse0x35e8ba0();
   input += synapse0x35e8be0();
   input += synapse0x35e8c20();
   input += synapse0x35e8c60();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35e82d0() {
   double input = input0x35e82d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35e8ca0() {
   double input = 1.84392;
   input += synapse0x35e8fe0();
   input += synapse0x35e9020();
   input += synapse0x35e9060();
   input += synapse0x35e90a0();
   input += synapse0x35e90e0();
   input += synapse0x35e9120();
   input += synapse0x35e9160();
   input += synapse0x35e91a0();
   input += synapse0x35e91e0();
   input += synapse0x35e9220();
   input += synapse0x35e9260();
   input += synapse0x35e92a0();
   input += synapse0x35e92e0();
   input += synapse0x35e9320();
   input += synapse0x35e9360();
   input += synapse0x35e93a0();
   input += synapse0x35e8e30();
   input += synapse0x35e8e70();
   input += synapse0x35e94f0();
   input += synapse0x35e9530();
   input += synapse0x35e9570();
   input += synapse0x35e95b0();
   input += synapse0x35e95f0();
   input += synapse0x35e9630();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35e8ca0() {
   double input = input0x35e8ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35e9670() {
   double input = -1.25972;
   input += synapse0x35e99b0();
   input += synapse0x35e99f0();
   input += synapse0x35e9a30();
   input += synapse0x35e9a70();
   input += synapse0x35e9ab0();
   input += synapse0x35e9af0();
   input += synapse0x35e9b30();
   input += synapse0x35e9b70();
   input += synapse0x35e9bb0();
   input += synapse0x35e9bf0();
   input += synapse0x35e9c30();
   input += synapse0x35e9c70();
   input += synapse0x35e9cb0();
   input += synapse0x35e9cf0();
   input += synapse0x35e9d30();
   input += synapse0x35e9d70();
   input += synapse0x35e9800();
   input += synapse0x35e9840();
   input += synapse0x35e9ec0();
   input += synapse0x35e9f00();
   input += synapse0x35e9f40();
   input += synapse0x35e9f80();
   input += synapse0x35e9fc0();
   input += synapse0x35ea000();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35e9670() {
   double input = input0x35e9670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35ea040() {
   double input = 0.116689;
   input += synapse0x35ea380();
   input += synapse0x35ea3c0();
   input += synapse0x35ea400();
   input += synapse0x35ea440();
   input += synapse0x35ea480();
   input += synapse0x35ea4c0();
   input += synapse0x35ea500();
   input += synapse0x35ea540();
   input += synapse0x35ea580();
   input += synapse0x35e2740();
   input += synapse0x35e2780();
   input += synapse0x35e27c0();
   input += synapse0x35e2800();
   input += synapse0x35e2840();
   input += synapse0x35e2880();
   input += synapse0x35e28c0();
   input += synapse0x35ea1d0();
   input += synapse0x35ea210();
   input += synapse0x35e2a10();
   input += synapse0x35e2a50();
   input += synapse0x35e2a90();
   input += synapse0x35e2ad0();
   input += synapse0x35e2b10();
   input += synapse0x35e2b50();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35ea040() {
   double input = input0x35ea040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35e2b90() {
   double input = -0.516163;
   input += synapse0x35e2ed0();
   input += synapse0x35e2f10();
   input += synapse0x35e2f50();
   input += synapse0x35e2f90();
   input += synapse0x35e2fd0();
   input += synapse0x35e3010();
   input += synapse0x35e3050();
   input += synapse0x35e3090();
   input += synapse0x35e30d0();
   input += synapse0x35e3110();
   input += synapse0x35e3150();
   input += synapse0x35e3190();
   input += synapse0x35e31d0();
   input += synapse0x35e3210();
   input += synapse0x35e3250();
   input += synapse0x35e3290();
   input += synapse0x35e2d20();
   input += synapse0x35e2d60();
   input += synapse0x35e33e0();
   input += synapse0x35e3420();
   input += synapse0x35e3460();
   input += synapse0x35e34a0();
   input += synapse0x35e34e0();
   input += synapse0x35e3520();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35e2b90() {
   double input = input0x35e2b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35e3560() {
   double input = 0.894136;
   input += synapse0x35e36f0();
   input += synapse0x35ec780();
   input += synapse0x35ec7c0();
   input += synapse0x35ec800();
   input += synapse0x35ec840();
   input += synapse0x35ec880();
   input += synapse0x35ec8c0();
   input += synapse0x35ec900();
   input += synapse0x35ec940();
   input += synapse0x35ec980();
   input += synapse0x35ec9c0();
   input += synapse0x35eca00();
   input += synapse0x35eca40();
   input += synapse0x35eca80();
   input += synapse0x35ecac0();
   input += synapse0x35ecb00();
   input += synapse0x35ec5d0();
   input += synapse0x35ec610();
   input += synapse0x35ecc50();
   input += synapse0x35ecc90();
   input += synapse0x35eccd0();
   input += synapse0x35ecd10();
   input += synapse0x35ecd50();
   input += synapse0x35ecd90();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35e3560() {
   double input = input0x35e3560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35ecdd0() {
   double input = 0.118164;
   input += synapse0x35ed110();
   input += synapse0x35ed150();
   input += synapse0x35ed190();
   input += synapse0x35ed1d0();
   input += synapse0x35ed210();
   input += synapse0x35ed250();
   input += synapse0x35ed290();
   input += synapse0x35ed2d0();
   input += synapse0x35ed310();
   input += synapse0x35ed350();
   input += synapse0x35ed390();
   input += synapse0x35ed3d0();
   input += synapse0x35ed410();
   input += synapse0x35ed450();
   input += synapse0x35ed490();
   input += synapse0x35ed4d0();
   input += synapse0x35ecf60();
   input += synapse0x35ecfa0();
   input += synapse0x35ed620();
   input += synapse0x35ed660();
   input += synapse0x35ed6a0();
   input += synapse0x35ed6e0();
   input += synapse0x35ed720();
   input += synapse0x35ed760();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35ecdd0() {
   double input = input0x35ecdd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35ed7a0() {
   double input = 1.41494;
   input += synapse0x35edae0();
   input += synapse0x35edb20();
   input += synapse0x35edb60();
   input += synapse0x35edba0();
   input += synapse0x35edbe0();
   input += synapse0x35edc20();
   input += synapse0x35edc60();
   input += synapse0x35edca0();
   input += synapse0x35edce0();
   input += synapse0x35edd20();
   input += synapse0x35edd60();
   input += synapse0x35edda0();
   input += synapse0x35edde0();
   input += synapse0x35ede20();
   input += synapse0x35ede60();
   input += synapse0x35edea0();
   input += synapse0x35ed930();
   input += synapse0x35ed970();
   input += synapse0x35edff0();
   input += synapse0x35ee030();
   input += synapse0x35ee070();
   input += synapse0x35ee0b0();
   input += synapse0x35ee0f0();
   input += synapse0x35ee130();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35ed7a0() {
   double input = input0x35ed7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35ee170() {
   double input = -1.5025;
   input += synapse0x35ee4b0();
   input += synapse0x35ee4f0();
   input += synapse0x35ee530();
   input += synapse0x35ee570();
   input += synapse0x35ee5b0();
   input += synapse0x35ee5f0();
   input += synapse0x35ee630();
   input += synapse0x35ee670();
   input += synapse0x35ee6b0();
   input += synapse0x35ee6f0();
   input += synapse0x35ee730();
   input += synapse0x35ee770();
   input += synapse0x35ee7b0();
   input += synapse0x35ee7f0();
   input += synapse0x35ee830();
   input += synapse0x35ee870();
   input += synapse0x35ee300();
   input += synapse0x35ee340();
   input += synapse0x35ee9c0();
   input += synapse0x35eea00();
   input += synapse0x35eea40();
   input += synapse0x35eea80();
   input += synapse0x35eeac0();
   input += synapse0x35eeb00();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35ee170() {
   double input = input0x35ee170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35eeb40() {
   double input = 0.769287;
   input += synapse0x35eee80();
   input += synapse0x35eeec0();
   input += synapse0x35eef00();
   input += synapse0x35eef40();
   input += synapse0x35eef80();
   input += synapse0x35eefc0();
   input += synapse0x35ef000();
   input += synapse0x35ef040();
   input += synapse0x35ef080();
   input += synapse0x35ef0c0();
   input += synapse0x35ef100();
   input += synapse0x35ef140();
   input += synapse0x35ef180();
   input += synapse0x35ef1c0();
   input += synapse0x35ef200();
   input += synapse0x35ef240();
   input += synapse0x35eecd0();
   input += synapse0x35eed10();
   input += synapse0x35ef390();
   input += synapse0x35ef3d0();
   input += synapse0x35ef410();
   input += synapse0x35ef450();
   input += synapse0x35ef490();
   input += synapse0x35ef4d0();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35eeb40() {
   double input = input0x35eeb40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35ef510() {
   double input = -1.3694;
   input += synapse0x35ef850();
   input += synapse0x35ef890();
   input += synapse0x35ef8d0();
   input += synapse0x35ef910();
   input += synapse0x35ef950();
   input += synapse0x35ef990();
   input += synapse0x35ef9d0();
   input += synapse0x35efa10();
   input += synapse0x35efa50();
   input += synapse0x35efa90();
   input += synapse0x35efad0();
   input += synapse0x35efb10();
   input += synapse0x35efb50();
   input += synapse0x35efb90();
   input += synapse0x35efbd0();
   input += synapse0x35efc10();
   input += synapse0x35ef6a0();
   input += synapse0x35ef6e0();
   input += synapse0x35efd60();
   input += synapse0x35efda0();
   input += synapse0x35efde0();
   input += synapse0x35efe20();
   input += synapse0x35efe60();
   input += synapse0x35efea0();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35ef510() {
   double input = input0x35ef510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35efee0() {
   double input = -1.27278;
   input += synapse0x35f0220();
   input += synapse0x35f0260();
   input += synapse0x35f02a0();
   input += synapse0x35f02e0();
   input += synapse0x35f0320();
   input += synapse0x35f0360();
   input += synapse0x35f03a0();
   input += synapse0x35f03e0();
   input += synapse0x35f0420();
   input += synapse0x35f0460();
   input += synapse0x35f04a0();
   input += synapse0x35f04e0();
   input += synapse0x35f0520();
   input += synapse0x35f0560();
   input += synapse0x35f05a0();
   input += synapse0x35f05e0();
   input += synapse0x35f0070();
   input += synapse0x35f00b0();
   input += synapse0x35f0730();
   input += synapse0x35f0770();
   input += synapse0x35f07b0();
   input += synapse0x35f07f0();
   input += synapse0x35f0830();
   input += synapse0x35f0870();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35efee0() {
   double input = input0x35efee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35f08b0() {
   double input = -0.942411;
   input += synapse0x35f0bf0();
   input += synapse0x35f0c30();
   input += synapse0x35f0c70();
   input += synapse0x35f0cb0();
   input += synapse0x35f0cf0();
   input += synapse0x35f0d30();
   input += synapse0x35f0d70();
   input += synapse0x35f0db0();
   input += synapse0x35f0df0();
   input += synapse0x35f0e30();
   input += synapse0x35f0e70();
   input += synapse0x35f0eb0();
   input += synapse0x35f0ef0();
   input += synapse0x35f0f30();
   input += synapse0x35f0f70();
   input += synapse0x35f0fb0();
   input += synapse0x35f0a40();
   input += synapse0x35f0a80();
   input += synapse0x35f1100();
   input += synapse0x35f1140();
   input += synapse0x35f1180();
   input += synapse0x35f11c0();
   input += synapse0x35f1200();
   input += synapse0x35f1240();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35f08b0() {
   double input = input0x35f08b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35f1280() {
   double input = -0.0143471;
   input += synapse0x35f15c0();
   input += synapse0x35e5b90();
   input += synapse0x35e5bd0();
   input += synapse0x35e5c10();
   input += synapse0x35e5e60();
   input += synapse0x35e5ea0();
   input += synapse0x35e5ee0();
   input += synapse0x35e6130();
   input += synapse0x35e6170();
   input += synapse0x35e63c0();
   input += synapse0x35e6400();
   input += synapse0x35e6440();
   input += synapse0x35e6690();
   input += synapse0x35e66d0();
   input += synapse0x35e6920();
   input += synapse0x35e6960();
   input += synapse0x35f1410();
   input += synapse0x35f1450();
   input += synapse0x35e6ab0();
   input += synapse0x35e6fc0();
   input += synapse0x35e7000();
   input += synapse0x35e7040();
   input += synapse0x35e7290();
   input += synapse0x35e72d0();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35f1280() {
   double input = input0x35f1280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35e7310() {
   double input = -4.98049;
   input += synapse0x35e6b80();
   input += synapse0x35e6bc0();
   input += synapse0x35e6c00();
   input += synapse0x35e6c40();
   input += synapse0x35e75c0();
   input += synapse0x35f3910();
   input += synapse0x35f3950();
   input += synapse0x35f3990();
   input += synapse0x35f39d0();
   input += synapse0x35f3a10();
   input += synapse0x35f3a50();
   input += synapse0x35f3a90();
   input += synapse0x35f3ad0();
   input += synapse0x35f3b10();
   input += synapse0x35f3b50();
   input += synapse0x35f3b90();
   input += synapse0x35e74a0();
   input += synapse0x35e74e0();
   input += synapse0x35f3ce0();
   input += synapse0x35f3d20();
   input += synapse0x35f3d60();
   input += synapse0x35f3da0();
   input += synapse0x35f3de0();
   input += synapse0x35f3e20();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35e7310() {
   double input = input0x35e7310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35f3e60() {
   double input = -0.782313;
   input += synapse0x35f41a0();
   input += synapse0x35f41e0();
   input += synapse0x35f4220();
   input += synapse0x35f4260();
   input += synapse0x35f42a0();
   input += synapse0x35f42e0();
   input += synapse0x35f4320();
   input += synapse0x35f4360();
   input += synapse0x35f43a0();
   input += synapse0x35f43e0();
   input += synapse0x35f4420();
   input += synapse0x35f4460();
   input += synapse0x35f44a0();
   input += synapse0x35f44e0();
   input += synapse0x35f4520();
   input += synapse0x35f4560();
   input += synapse0x35f3ff0();
   input += synapse0x35f4030();
   input += synapse0x35f46b0();
   input += synapse0x35f46f0();
   input += synapse0x35f4730();
   input += synapse0x35f4770();
   input += synapse0x35f47b0();
   input += synapse0x35f47f0();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35f3e60() {
   double input = input0x35f3e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35f4830() {
   double input = 0.495249;
   input += synapse0x35f4b70();
   input += synapse0x35f4bb0();
   input += synapse0x35f4bf0();
   input += synapse0x35f4c30();
   input += synapse0x35f4c70();
   input += synapse0x35f4cb0();
   input += synapse0x35f4cf0();
   input += synapse0x35f4d30();
   input += synapse0x35f4d70();
   input += synapse0x35f4db0();
   input += synapse0x35f4df0();
   input += synapse0x35f4e30();
   input += synapse0x35f4e70();
   input += synapse0x35f4eb0();
   input += synapse0x35f4ef0();
   input += synapse0x35f4f30();
   input += synapse0x35f49c0();
   input += synapse0x35f4a00();
   input += synapse0x35f5080();
   input += synapse0x35f50c0();
   input += synapse0x35f5100();
   input += synapse0x35f5140();
   input += synapse0x35f5180();
   input += synapse0x35f51c0();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35f4830() {
   double input = input0x35f4830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35f5200() {
   double input = 0.217428;
   input += synapse0x35f5540();
   input += synapse0x35f5580();
   input += synapse0x35f55c0();
   input += synapse0x35f5600();
   input += synapse0x35f5640();
   input += synapse0x35f5680();
   input += synapse0x35f56c0();
   input += synapse0x35f5700();
   input += synapse0x35f5740();
   input += synapse0x35f5780();
   input += synapse0x35f57c0();
   input += synapse0x35f5800();
   input += synapse0x35f5840();
   input += synapse0x35f5880();
   input += synapse0x35f58c0();
   input += synapse0x35f5900();
   input += synapse0x35f5390();
   input += synapse0x35f53d0();
   input += synapse0x35f5a50();
   input += synapse0x35f5a90();
   input += synapse0x35f5ad0();
   input += synapse0x35f5b10();
   input += synapse0x35f5b50();
   input += synapse0x35f5b90();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35f5200() {
   double input = input0x35f5200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35f5bd0() {
   double input = -0.155817;
   input += synapse0x35f5f10();
   input += synapse0x35f5f50();
   input += synapse0x35f5f90();
   input += synapse0x35f5fd0();
   input += synapse0x35f6010();
   input += synapse0x35f6050();
   input += synapse0x35f6090();
   input += synapse0x35f60d0();
   input += synapse0x35f6110();
   input += synapse0x35f6150();
   input += synapse0x35f6190();
   input += synapse0x35f61d0();
   input += synapse0x35f6210();
   input += synapse0x35f6250();
   input += synapse0x35f6290();
   input += synapse0x35f62d0();
   input += synapse0x35f5d60();
   input += synapse0x35f5da0();
   input += synapse0x35f6420();
   input += synapse0x35f6460();
   input += synapse0x35f64a0();
   input += synapse0x35f64e0();
   input += synapse0x35f6520();
   input += synapse0x35f6560();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35f5bd0() {
   double input = input0x35f5bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35f65a0() {
   double input = -0.928667;
   input += synapse0x35f68e0();
   input += synapse0x35f6920();
   input += synapse0x35f6960();
   input += synapse0x35f69a0();
   input += synapse0x35f69e0();
   input += synapse0x35f6a20();
   input += synapse0x35f6a60();
   input += synapse0x35f6aa0();
   input += synapse0x35f6ae0();
   input += synapse0x35f6b20();
   input += synapse0x35f6b60();
   input += synapse0x35f6ba0();
   input += synapse0x35f6be0();
   input += synapse0x35f6c20();
   input += synapse0x35f6c60();
   input += synapse0x35f6ca0();
   input += synapse0x35f6730();
   input += synapse0x35f6770();
   input += synapse0x35f6df0();
   input += synapse0x35f6e30();
   input += synapse0x35f6e70();
   input += synapse0x35f6eb0();
   input += synapse0x35f6ef0();
   input += synapse0x35f6f30();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35f65a0() {
   double input = input0x35f65a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35f6f70() {
   double input = -0.371306;
   input += synapse0x35f72b0();
   input += synapse0x35f72f0();
   input += synapse0x35f7330();
   input += synapse0x35f7370();
   input += synapse0x35f73b0();
   input += synapse0x35f73f0();
   input += synapse0x35f7430();
   input += synapse0x35f7470();
   input += synapse0x35f74b0();
   input += synapse0x35f74f0();
   input += synapse0x35f7530();
   input += synapse0x35f7570();
   input += synapse0x35f75b0();
   input += synapse0x35f75f0();
   input += synapse0x35f7630();
   input += synapse0x35f7670();
   input += synapse0x35f7100();
   input += synapse0x35f7140();
   input += synapse0x35f77c0();
   input += synapse0x35f7800();
   input += synapse0x35f7840();
   input += synapse0x35f7880();
   input += synapse0x35f78c0();
   input += synapse0x35f7900();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35f6f70() {
   double input = input0x35f6f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35f7940() {
   double input = 0.875676;
   input += synapse0x35f7c80();
   input += synapse0x35f7cc0();
   input += synapse0x35f7d00();
   input += synapse0x35f7d40();
   input += synapse0x35f7d80();
   input += synapse0x35f7dc0();
   input += synapse0x35f7e00();
   input += synapse0x35f7e40();
   input += synapse0x35f7e80();
   input += synapse0x35f7ec0();
   input += synapse0x35f7f00();
   input += synapse0x35f7f40();
   input += synapse0x35f7f80();
   input += synapse0x35f7fc0();
   input += synapse0x35f8000();
   input += synapse0x35f8040();
   input += synapse0x35f7ad0();
   input += synapse0x35f7b10();
   input += synapse0x35f8190();
   input += synapse0x35f81d0();
   input += synapse0x35f8210();
   input += synapse0x35f8250();
   input += synapse0x35f8290();
   input += synapse0x35f82d0();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35f7940() {
   double input = input0x35f7940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35f8310() {
   double input = -3.6976;
   input += synapse0x35e0d80();
   input += synapse0x35e0dc0();
   input += synapse0x35e0e00();
   input += synapse0x35e0e40();
   input += synapse0x35e0e80();
   input += synapse0x35e0ec0();
   input += synapse0x35e0f00();
   input += synapse0x35e0f40();
   input += synapse0x35f8a60();
   input += synapse0x35f8aa0();
   input += synapse0x35f8ae0();
   input += synapse0x35f8b20();
   input += synapse0x35f8b60();
   input += synapse0x35f8ba0();
   input += synapse0x35f8be0();
   input += synapse0x35f8c20();
   input += synapse0x35f84a0();
   input += synapse0x35f84e0();
   input += synapse0x35f8d70();
   input += synapse0x35f8db0();
   input += synapse0x35f8df0();
   input += synapse0x35f8e30();
   input += synapse0x35f8e70();
   input += synapse0x35f8eb0();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35f8310() {
   double input = input0x35f8310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35f8ef0() {
   double input = -1.24256;
   input += synapse0x35f9230();
   input += synapse0x35f9270();
   input += synapse0x35f92b0();
   input += synapse0x35f92f0();
   input += synapse0x35f9330();
   input += synapse0x35f9370();
   input += synapse0x35f93b0();
   input += synapse0x35f93f0();
   input += synapse0x35f9430();
   input += synapse0x35f9470();
   input += synapse0x35f94b0();
   input += synapse0x35f94f0();
   input += synapse0x35f9530();
   input += synapse0x35f9570();
   input += synapse0x35f95b0();
   input += synapse0x35f95f0();
   input += synapse0x35f9080();
   input += synapse0x35f90c0();
   input += synapse0x35f9740();
   input += synapse0x35f9780();
   input += synapse0x35f97c0();
   input += synapse0x35f9800();
   input += synapse0x35f9840();
   input += synapse0x35f9880();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35f8ef0() {
   double input = input0x35f8ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35f98c0() {
   double input = 4.9505;
   input += synapse0x35f9c00();
   input += synapse0x35f9c40();
   input += synapse0x35f9c80();
   input += synapse0x35f9cc0();
   input += synapse0x35f9d00();
   input += synapse0x35f9d40();
   input += synapse0x35f9d80();
   input += synapse0x35f9dc0();
   input += synapse0x35f9e00();
   input += synapse0x35f9e40();
   input += synapse0x35f9e80();
   input += synapse0x35f9ec0();
   input += synapse0x35f9f00();
   input += synapse0x35f9f40();
   input += synapse0x35f9f80();
   input += synapse0x35f9fc0();
   input += synapse0x35f9a50();
   input += synapse0x35f9a90();
   input += synapse0x35ea5c0();
   input += synapse0x35ea600();
   input += synapse0x35ea640();
   input += synapse0x35ea680();
   input += synapse0x35ea6c0();
   input += synapse0x35ea700();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35f98c0() {
   double input = input0x35f98c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35ea740() {
   double input = -0.24947;
   input += synapse0x35eaa80();
   input += synapse0x35eaac0();
   input += synapse0x35eab00();
   input += synapse0x35eab40();
   input += synapse0x35eab80();
   input += synapse0x35eabc0();
   input += synapse0x35eac00();
   input += synapse0x35eac40();
   input += synapse0x35eac80();
   input += synapse0x35eacc0();
   input += synapse0x35ead00();
   input += synapse0x35ead40();
   input += synapse0x35ead80();
   input += synapse0x35eadc0();
   input += synapse0x35eae00();
   input += synapse0x35eae40();
   input += synapse0x35ea8d0();
   input += synapse0x35ea910();
   input += synapse0x35eaf90();
   input += synapse0x35eafd0();
   input += synapse0x35eb010();
   input += synapse0x35eb050();
   input += synapse0x35eb090();
   input += synapse0x35eb0d0();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35ea740() {
   double input = input0x35ea740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35eb110() {
   double input = -0.299007;
   input += synapse0x35eb450();
   input += synapse0x35eb490();
   input += synapse0x35eb4d0();
   input += synapse0x35eb510();
   input += synapse0x35eb550();
   input += synapse0x35eb590();
   input += synapse0x35eb5d0();
   input += synapse0x35eb610();
   input += synapse0x35eb650();
   input += synapse0x35eb690();
   input += synapse0x35eb6d0();
   input += synapse0x35eb710();
   input += synapse0x35eb750();
   input += synapse0x35eb790();
   input += synapse0x35eb7d0();
   input += synapse0x35eb810();
   input += synapse0x35eb2a0();
   input += synapse0x35eb2e0();
   input += synapse0x35eb960();
   input += synapse0x35eb9a0();
   input += synapse0x35eb9e0();
   input += synapse0x35eba20();
   input += synapse0x35eba60();
   input += synapse0x35ebaa0();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35eb110() {
   double input = input0x35eb110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35ebae0() {
   double input = 0.181509;
   input += synapse0x35ebe20();
   input += synapse0x35ebe60();
   input += synapse0x35ebea0();
   input += synapse0x35ebee0();
   input += synapse0x35ebf20();
   input += synapse0x35ebf60();
   input += synapse0x35ebfa0();
   input += synapse0x35ebfe0();
   input += synapse0x35ec020();
   input += synapse0x35ec060();
   input += synapse0x35ec0a0();
   input += synapse0x35ec0e0();
   input += synapse0x35ec120();
   input += synapse0x35ec160();
   input += synapse0x35ec1a0();
   input += synapse0x35ec1e0();
   input += synapse0x35ebc70();
   input += synapse0x35ebcb0();
   input += synapse0x35ec330();
   input += synapse0x35ec370();
   input += synapse0x35ec3b0();
   input += synapse0x35ec3f0();
   input += synapse0x35ec430();
   input += synapse0x35ec470();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35ebae0() {
   double input = input0x35ebae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35fe120() {
   double input = -1.03487;
   input += synapse0x35fe340();
   input += synapse0x35fe380();
   input += synapse0x35fe3c0();
   input += synapse0x35fe400();
   input += synapse0x35fe440();
   input += synapse0x35fe480();
   input += synapse0x35fe4c0();
   input += synapse0x35fe500();
   input += synapse0x35fe540();
   input += synapse0x35fe580();
   input += synapse0x35fe5c0();
   input += synapse0x35fe600();
   input += synapse0x35fe640();
   input += synapse0x35fe680();
   input += synapse0x35fe6c0();
   input += synapse0x35fe700();
   input += synapse0x35ec4b0();
   input += synapse0x35ec4f0();
   input += synapse0x35fe850();
   input += synapse0x35fe890();
   input += synapse0x35fe8d0();
   input += synapse0x35fe910();
   input += synapse0x35fe950();
   input += synapse0x35fe990();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35fe120() {
   double input = input0x35fe120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35fe9d0() {
   double input = 1.13067;
   input += synapse0x35fed10();
   input += synapse0x35fed50();
   input += synapse0x35fed90();
   input += synapse0x35fedd0();
   input += synapse0x35fee10();
   input += synapse0x35fee50();
   input += synapse0x35fee90();
   input += synapse0x35feed0();
   input += synapse0x35fef10();
   input += synapse0x35fef50();
   input += synapse0x35fef90();
   input += synapse0x35fefd0();
   input += synapse0x35ff010();
   input += synapse0x35ff050();
   input += synapse0x35ff090();
   input += synapse0x35ff0d0();
   input += synapse0x35feb60();
   input += synapse0x35feba0();
   input += synapse0x35ff220();
   input += synapse0x35ff260();
   input += synapse0x35ff2a0();
   input += synapse0x35ff2e0();
   input += synapse0x35ff320();
   input += synapse0x35ff360();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35fe9d0() {
   double input = input0x35fe9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35ff3a0() {
   double input = 1.18944;
   input += synapse0x35ff6e0();
   input += synapse0x35ff720();
   input += synapse0x35ff760();
   input += synapse0x35ff7a0();
   input += synapse0x35ff7e0();
   input += synapse0x35ff820();
   input += synapse0x35ff860();
   input += synapse0x35ff8a0();
   input += synapse0x35ff8e0();
   input += synapse0x35ff920();
   input += synapse0x35ff960();
   input += synapse0x35ff9a0();
   input += synapse0x35ff9e0();
   input += synapse0x35ffa20();
   input += synapse0x35ffa60();
   input += synapse0x35ffaa0();
   input += synapse0x35ff530();
   input += synapse0x35ff570();
   input += synapse0x35ffbf0();
   input += synapse0x35ffc30();
   input += synapse0x35ffc70();
   input += synapse0x35ffcb0();
   input += synapse0x35ffcf0();
   input += synapse0x35ffd30();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35ff3a0() {
   double input = input0x35ff3a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x35ffd70() {
   double input = -2.23417;
   input += synapse0x36000b0();
   input += synapse0x36000f0();
   input += synapse0x3600130();
   input += synapse0x3600170();
   input += synapse0x36001b0();
   input += synapse0x36001f0();
   input += synapse0x3600230();
   input += synapse0x3600270();
   input += synapse0x36002b0();
   input += synapse0x36002f0();
   input += synapse0x3600330();
   input += synapse0x3600370();
   input += synapse0x36003b0();
   input += synapse0x36003f0();
   input += synapse0x3600430();
   input += synapse0x3600470();
   input += synapse0x35fff00();
   input += synapse0x35fff40();
   input += synapse0x36005c0();
   input += synapse0x3600600();
   input += synapse0x3600640();
   input += synapse0x3600680();
   input += synapse0x36006c0();
   input += synapse0x3600700();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x35ffd70() {
   double input = input0x35ffd70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x3606f70() {
   double input = -0.194302;
   input += synapse0x33a0570();
   input += synapse0x33a05b0();
   input += synapse0x35dd0b0();
   input += synapse0x35dd0f0();
   input += synapse0x35deb80();
   input += synapse0x35debc0();
   input += synapse0x35df950();
   input += synapse0x35df990();
   input += synapse0x35e0320();
   input += synapse0x35e0360();
   input += synapse0x35e0cf0();
   input += synapse0x35e0d30();
   input += synapse0x35e17d0();
   input += synapse0x35e1810();
   input += synapse0x35e21a0();
   input += synapse0x35e21e0();
   input += synapse0x35df280();
   input += synapse0x35df2c0();
   input += synapse0x35e3d50();
   input += synapse0x35e3d90();
   input += synapse0x35e4720();
   input += synapse0x35e4760();
   input += synapse0x35e50f0();
   input += synapse0x35e5130();
   input += synapse0x35e5ac0();
   input += synapse0x35e5b00();
   input += synapse0x35d8b50();
   input += synapse0x35d8b90();
   input += synapse0x35e7bb0();
   input += synapse0x35e7bf0();
   input += synapse0x35e8580();
   input += synapse0x35e85c0();
   input += synapse0x35e8f50();
   input += synapse0x35e8f90();
   input += synapse0x35e9920();
   input += synapse0x35e9960();
   input += synapse0x35ea2f0();
   input += synapse0x35ea330();
   input += synapse0x35e2e40();
   input += synapse0x35e2e80();
   input += synapse0x35ec6f0();
   input += synapse0x35ec730();
   input += synapse0x35ed080();
   input += synapse0x35ed0c0();
   input += synapse0x35eda50();
   input += synapse0x35eda90();
   input += synapse0x35ee420();
   input += synapse0x35ee460();
   input += synapse0x35eedf0();
   input += synapse0x35eee30();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x3606f70() {
   double input = input0x3606f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x3607310() {
   double input = 0.557859;
   input += synapse0x35f1530();
   input += synapse0x35f1570();
   input += synapse0x35e6af0();
   input += synapse0x35e6b30();
   input += synapse0x35f4110();
   input += synapse0x35f4150();
   input += synapse0x35f4ae0();
   input += synapse0x35f4b20();
   input += synapse0x35f54b0();
   input += synapse0x35f54f0();
   input += synapse0x35f5e80();
   input += synapse0x35f5ec0();
   input += synapse0x35f6850();
   input += synapse0x35f6890();
   input += synapse0x35f7220();
   input += synapse0x35f7260();
   input += synapse0x35f7bf0();
   input += synapse0x35f7c30();
   input += synapse0x35f85c0();
   input += synapse0x35f8600();
   input += synapse0x35f91a0();
   input += synapse0x35f91e0();
   input += synapse0x35f9b70();
   input += synapse0x35f9bb0();
   input += synapse0x35ea9f0();
   input += synapse0x35eaa30();
   input += synapse0x35eb3c0();
   input += synapse0x35eb400();
   input += synapse0x35ebd90();
   input += synapse0x35ebdd0();
   input += synapse0x35fe2b0();
   input += synapse0x35fe2f0();
   input += synapse0x35fec80();
   input += synapse0x35fecc0();
   input += synapse0x35ff650();
   input += synapse0x35ff690();
   input += synapse0x3600020();
   input += synapse0x3600060();
   input += synapse0x35dafb0();
   input += synapse0x35daff0();
   input += synapse0x35ef7c0();
   input += synapse0x35ef800();
   input += synapse0x3600740();
   input += synapse0x3600780();
   input += synapse0x36007c0();
   input += synapse0x3600800();
   input += synapse0x36076b0();
   input += synapse0x36076f0();
   input += synapse0x3607730();
   input += synapse0x3607770();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x3607310() {
   double input = input0x3607310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x36077b0() {
   double input = 2.3111;
   input += synapse0x3607af0();
   input += synapse0x3607b30();
   input += synapse0x3607b70();
   input += synapse0x3607bb0();
   input += synapse0x3607bf0();
   input += synapse0x3607c30();
   input += synapse0x3607c70();
   input += synapse0x3607cb0();
   input += synapse0x3607cf0();
   input += synapse0x3607d30();
   input += synapse0x3607d70();
   input += synapse0x3607db0();
   input += synapse0x3607df0();
   input += synapse0x3607e30();
   input += synapse0x3607e70();
   input += synapse0x3607eb0();
   input += synapse0x3607940();
   input += synapse0x3607980();
   input += synapse0x3608000();
   input += synapse0x3608040();
   input += synapse0x3608080();
   input += synapse0x36080c0();
   input += synapse0x3608100();
   input += synapse0x3608140();
   input += synapse0x3608180();
   input += synapse0x36081c0();
   input += synapse0x3608200();
   input += synapse0x3608240();
   input += synapse0x3608280();
   input += synapse0x36082c0();
   input += synapse0x3608300();
   input += synapse0x3608340();
   input += synapse0x3607ef0();
   input += synapse0x3607f30();
   input += synapse0x3607f70();
   input += synapse0x3607fb0();
   input += synapse0x3608590();
   input += synapse0x36085d0();
   input += synapse0x3608610();
   input += synapse0x3608650();
   input += synapse0x3608690();
   input += synapse0x36086d0();
   input += synapse0x3608710();
   input += synapse0x3608750();
   input += synapse0x3608790();
   input += synapse0x36087d0();
   input += synapse0x3608810();
   input += synapse0x3608850();
   input += synapse0x3608890();
   input += synapse0x36088d0();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x36077b0() {
   double input = input0x36077b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x3608910() {
   double input = 3.15087;
   input += synapse0x3608c50();
   input += synapse0x3608c90();
   input += synapse0x3608cd0();
   input += synapse0x3608d10();
   input += synapse0x3608d50();
   input += synapse0x3608d90();
   input += synapse0x3608dd0();
   input += synapse0x3608e10();
   input += synapse0x3608e50();
   input += synapse0x3608e90();
   input += synapse0x3608ed0();
   input += synapse0x3608f10();
   input += synapse0x3608f50();
   input += synapse0x3608f90();
   input += synapse0x3608fd0();
   input += synapse0x3609010();
   input += synapse0x3608aa0();
   input += synapse0x3608ae0();
   input += synapse0x3609160();
   input += synapse0x36091a0();
   input += synapse0x36091e0();
   input += synapse0x3609220();
   input += synapse0x3609260();
   input += synapse0x36092a0();
   input += synapse0x36092e0();
   input += synapse0x3609320();
   input += synapse0x3609360();
   input += synapse0x36093a0();
   input += synapse0x36093e0();
   input += synapse0x3609420();
   input += synapse0x3609460();
   input += synapse0x36094a0();
   input += synapse0x3609050();
   input += synapse0x3609090();
   input += synapse0x36090d0();
   input += synapse0x3609110();
   input += synapse0x36096f0();
   input += synapse0x3609730();
   input += synapse0x3609770();
   input += synapse0x36097b0();
   input += synapse0x36097f0();
   input += synapse0x3609830();
   input += synapse0x3609870();
   input += synapse0x36098b0();
   input += synapse0x36098f0();
   input += synapse0x3609930();
   input += synapse0x3609970();
   input += synapse0x36099b0();
   input += synapse0x36099f0();
   input += synapse0x3609a30();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x3608910() {
   double input = input0x3608910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x3609a70() {
   double input = 5.09702;
   input += synapse0x3609db0();
   input += synapse0x3609df0();
   input += synapse0x3609e30();
   input += synapse0x3609e70();
   input += synapse0x3609eb0();
   input += synapse0x3609ef0();
   input += synapse0x3609f30();
   input += synapse0x3609f70();
   input += synapse0x3609fb0();
   input += synapse0x3609ff0();
   input += synapse0x360a030();
   input += synapse0x360a070();
   input += synapse0x360a0b0();
   input += synapse0x360a0f0();
   input += synapse0x360a130();
   input += synapse0x360a170();
   input += synapse0x3609c00();
   input += synapse0x3609c40();
   input += synapse0x360a2c0();
   input += synapse0x360a300();
   input += synapse0x360a340();
   input += synapse0x360a380();
   input += synapse0x360a3c0();
   input += synapse0x360a400();
   input += synapse0x360a440();
   input += synapse0x360a480();
   input += synapse0x360a4c0();
   input += synapse0x360a500();
   input += synapse0x360a540();
   input += synapse0x360a580();
   input += synapse0x360a5c0();
   input += synapse0x360a600();
   input += synapse0x360a1b0();
   input += synapse0x360a1f0();
   input += synapse0x360a230();
   input += synapse0x360a270();
   input += synapse0x360a850();
   input += synapse0x360a890();
   input += synapse0x360a8d0();
   input += synapse0x360a910();
   input += synapse0x360a950();
   input += synapse0x360a990();
   input += synapse0x360a9d0();
   input += synapse0x360aa10();
   input += synapse0x360aa50();
   input += synapse0x360aa90();
   input += synapse0x360aad0();
   input += synapse0x360ab10();
   input += synapse0x360ab50();
   input += synapse0x360ab90();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x3609a70() {
   double input = input0x3609a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sL::input0x360abd0() {
   double input = 2.14785;
   input += synapse0x360adf0();
   input += synapse0x360ae30();
   input += synapse0x360ae70();
   input += synapse0x360aeb0();
   input += synapse0x360aef0();
   return input;
}

double NNfunction_ns_chi02_sL::neuron0x360abd0() {
   double input = input0x360abd0();
   return (input * 1)+0;
}

double NNfunction_ns_chi02_sL::synapse0x35db040() {
   return (neuron0x35d5c40()*0.213619);
}

double NNfunction_ns_chi02_sL::synapse0x35db080() {
   return (neuron0x35d5ef0()*-0.252777);
}

double NNfunction_ns_chi02_sL::synapse0x35db0c0() {
   return (neuron0x35d6230()*0.815907);
}

double NNfunction_ns_chi02_sL::synapse0x35db100() {
   return (neuron0x35d6570()*-0.271694);
}

double NNfunction_ns_chi02_sL::synapse0x35db140() {
   return (neuron0x35d68b0()*-1.50237);
}

double NNfunction_ns_chi02_sL::synapse0x35db180() {
   return (neuron0x35d6bf0()*-0.656821);
}

double NNfunction_ns_chi02_sL::synapse0x35db1c0() {
   return (neuron0x35d6f30()*-0.220318);
}

double NNfunction_ns_chi02_sL::synapse0x35db200() {
   return (neuron0x35d7270()*-1.63316);
}

double NNfunction_ns_chi02_sL::synapse0x35db240() {
   return (neuron0x35d75b0()*0.274597);
}

double NNfunction_ns_chi02_sL::synapse0x35db280() {
   return (neuron0x35d78f0()*0.82506);
}

double NNfunction_ns_chi02_sL::synapse0x35db2c0() {
   return (neuron0x35d7c30()*2.11358);
}

double NNfunction_ns_chi02_sL::synapse0x35db300() {
   return (neuron0x35d7f70()*0.622892);
}

double NNfunction_ns_chi02_sL::synapse0x35db340() {
   return (neuron0x35d82b0()*1.33412);
}

double NNfunction_ns_chi02_sL::synapse0x35db380() {
   return (neuron0x35d85f0()*0.398878);
}

double NNfunction_ns_chi02_sL::synapse0x35db3c0() {
   return (neuron0x35d8930()*-0.568833);
}

double NNfunction_ns_chi02_sL::synapse0x35db400() {
   return (neuron0x35d8c70()*-0.133457);
}

double NNfunction_ns_chi02_sL::synapse0x35dae90() {
   return (neuron0x35d8fb0()*-0.0588332);
}

double NNfunction_ns_chi02_sL::synapse0x35daed0() {
   return (neuron0x35d9510()*0.682102);
}

double NNfunction_ns_chi02_sL::synapse0x3391dc0() {
   return (neuron0x35d9850()*0.196528);
}

double NNfunction_ns_chi02_sL::synapse0x3391e00() {
   return (neuron0x35d9b90()*-0.460811);
}

double NNfunction_ns_chi02_sL::synapse0x35db440() {
   return (neuron0x35d9ed0()*-1.18367);
}

double NNfunction_ns_chi02_sL::synapse0x35db480() {
   return (neuron0x35da210()*0.300862);
}

double NNfunction_ns_chi02_sL::synapse0x35db4c0() {
   return (neuron0x35da550()*-0.067906);
}

double NNfunction_ns_chi02_sL::synapse0x35db500() {
   return (neuron0x35da890()*0.259719);
}

double NNfunction_ns_chi02_sL::synapse0x35db880() {
   return (neuron0x35d5c40()*0.15146);
}

double NNfunction_ns_chi02_sL::synapse0x35db8c0() {
   return (neuron0x35d5ef0()*-0.702308);
}

double NNfunction_ns_chi02_sL::synapse0x35db900() {
   return (neuron0x35d6230()*0.749563);
}

double NNfunction_ns_chi02_sL::synapse0x35db940() {
   return (neuron0x35d6570()*0.226803);
}

double NNfunction_ns_chi02_sL::synapse0x35db980() {
   return (neuron0x35d68b0()*0.100249);
}

double NNfunction_ns_chi02_sL::synapse0x35db9c0() {
   return (neuron0x35d6bf0()*0.133221);
}

double NNfunction_ns_chi02_sL::synapse0x35dba00() {
   return (neuron0x35d6f30()*-0.0912786);
}

double NNfunction_ns_chi02_sL::synapse0x35dba40() {
   return (neuron0x35d7270()*-0.103778);
}

double NNfunction_ns_chi02_sL::synapse0x35dba80() {
   return (neuron0x35d75b0()*0.0050018);
}

double NNfunction_ns_chi02_sL::synapse0x3391c10() {
   return (neuron0x35d78f0()*-0.0560875);
}

double NNfunction_ns_chi02_sL::synapse0x3391c50() {
   return (neuron0x35d7c30()*-0.0756558);
}

double NNfunction_ns_chi02_sL::synapse0x3391c90() {
   return (neuron0x35d7f70()*0.0553656);
}

double NNfunction_ns_chi02_sL::synapse0x3391cd0() {
   return (neuron0x35d82b0()*0.172891);
}

double NNfunction_ns_chi02_sL::synapse0x35dbcd0() {
   return (neuron0x35d85f0()*0.109001);
}

double NNfunction_ns_chi02_sL::synapse0x35dbd10() {
   return (neuron0x35d8930()*0.0344438);
}

double NNfunction_ns_chi02_sL::synapse0x35dbd50() {
   return (neuron0x35d8c70()*0.532636);
}

double NNfunction_ns_chi02_sL::synapse0x35db6d0() {
   return (neuron0x35d8fb0()*-0.279068);
}

double NNfunction_ns_chi02_sL::synapse0x35db710() {
   return (neuron0x35d9510()*0.186637);
}

double NNfunction_ns_chi02_sL::synapse0x35dbea0() {
   return (neuron0x35d9850()*-0.13565);
}

double NNfunction_ns_chi02_sL::synapse0x35dbee0() {
   return (neuron0x35d9b90()*-0.0387298);
}

double NNfunction_ns_chi02_sL::synapse0x35dbf20() {
   return (neuron0x35d9ed0()*-0.162285);
}

double NNfunction_ns_chi02_sL::synapse0x35dbf60() {
   return (neuron0x35da210()*0.0127614);
}

double NNfunction_ns_chi02_sL::synapse0x35dbfa0() {
   return (neuron0x35da550()*-0.243852);
}

double NNfunction_ns_chi02_sL::synapse0x35dbfe0() {
   return (neuron0x35da890()*0.0536759);
}

double NNfunction_ns_chi02_sL::synapse0x35dc360() {
   return (neuron0x35d5c40()*-0.0740626);
}

double NNfunction_ns_chi02_sL::synapse0x35dc3a0() {
   return (neuron0x35d5ef0()*0.000696772);
}

double NNfunction_ns_chi02_sL::synapse0x35dc3e0() {
   return (neuron0x35d6230()*0.0581847);
}

double NNfunction_ns_chi02_sL::synapse0x35dc420() {
   return (neuron0x35d6570()*0.0407997);
}

double NNfunction_ns_chi02_sL::synapse0x35dc460() {
   return (neuron0x35d68b0()*-0.0432003);
}

double NNfunction_ns_chi02_sL::synapse0x35dc4a0() {
   return (neuron0x35d6bf0()*-0.002376);
}

double NNfunction_ns_chi02_sL::synapse0x35dc4e0() {
   return (neuron0x35d6f30()*0.0283686);
}

double NNfunction_ns_chi02_sL::synapse0x35dc520() {
   return (neuron0x35d7270()*0.00747553);
}

double NNfunction_ns_chi02_sL::synapse0x35dc560() {
   return (neuron0x35d75b0()*0.000355235);
}

double NNfunction_ns_chi02_sL::synapse0x35dc5a0() {
   return (neuron0x35d78f0()*0.0391986);
}

double NNfunction_ns_chi02_sL::synapse0x35dc5e0() {
   return (neuron0x35d7c30()*-0.0171339);
}

double NNfunction_ns_chi02_sL::synapse0x35dc620() {
   return (neuron0x35d7f70()*-0.000471499);
}

double NNfunction_ns_chi02_sL::synapse0x35dc660() {
   return (neuron0x35d82b0()*-0.687574);
}

double NNfunction_ns_chi02_sL::synapse0x35dc6a0() {
   return (neuron0x35d85f0()*0.00747594);
}

double NNfunction_ns_chi02_sL::synapse0x35dc6e0() {
   return (neuron0x35d8930()*-0.0230537);
}

double NNfunction_ns_chi02_sL::synapse0x35dc720() {
   return (neuron0x35d8c70()*0.0234714);
}

double NNfunction_ns_chi02_sL::synapse0x35dc1b0() {
   return (neuron0x35d8fb0()*-0.0384499);
}

double NNfunction_ns_chi02_sL::synapse0x35dc1f0() {
   return (neuron0x35d9510()*0.00275712);
}

double NNfunction_ns_chi02_sL::synapse0x33924b0() {
   return (neuron0x35d9850()*0.00203837);
}

double NNfunction_ns_chi02_sL::synapse0x339fd80() {
   return (neuron0x35d9b90()*0.0118677);
}

double NNfunction_ns_chi02_sL::synapse0x339fdc0() {
   return (neuron0x35d9ed0()*0.0114813);
}

double NNfunction_ns_chi02_sL::synapse0x35de650() {
   return (neuron0x35da210()*-0.0216893);
}

double NNfunction_ns_chi02_sL::synapse0x35de690() {
   return (neuron0x35da550()*0.0148012);
}

double NNfunction_ns_chi02_sL::synapse0x35d5980() {
   return (neuron0x35da890()*5.06132);
}

double NNfunction_ns_chi02_sL::synapse0x35d5a50() {
   return (neuron0x35d5c40()*-0.0147706);
}

double NNfunction_ns_chi02_sL::synapse0x33a0600() {
   return (neuron0x35d5ef0()*0.0467508);
}

double NNfunction_ns_chi02_sL::synapse0x35dbc50() {
   return (neuron0x35d6230()*-0.381683);
}

double NNfunction_ns_chi02_sL::synapse0x35dbc90() {
   return (neuron0x35d6570()*-0.0203652);
}

double NNfunction_ns_chi02_sL::synapse0x35dc870() {
   return (neuron0x35d68b0()*0.0127358);
}

double NNfunction_ns_chi02_sL::synapse0x35dc8b0() {
   return (neuron0x35d6bf0()*0.00431561);
}

double NNfunction_ns_chi02_sL::synapse0x35dc8f0() {
   return (neuron0x35d6f30()*-0.0143676);
}

double NNfunction_ns_chi02_sL::synapse0x35dc930() {
   return (neuron0x35d7270()*-0.00339462);
}

double NNfunction_ns_chi02_sL::synapse0x35dc970() {
   return (neuron0x35d75b0()*0.00810708);
}

double NNfunction_ns_chi02_sL::synapse0x35dc9b0() {
   return (neuron0x35d78f0()*-0.019246);
}

double NNfunction_ns_chi02_sL::synapse0x35dc9f0() {
   return (neuron0x35d7c30()*0.0298277);
}

double NNfunction_ns_chi02_sL::synapse0x35dca30() {
   return (neuron0x35d7f70()*-0.0190777);
}

double NNfunction_ns_chi02_sL::synapse0x35dca70() {
   return (neuron0x35d82b0()*0.309751);
}

double NNfunction_ns_chi02_sL::synapse0x35dcab0() {
   return (neuron0x35d85f0()*0.00640695);
}

double NNfunction_ns_chi02_sL::synapse0x35dcaf0() {
   return (neuron0x35d8930()*0.0138379);
}

double NNfunction_ns_chi02_sL::synapse0x35dcb30() {
   return (neuron0x35d8c70()*-0.0152925);
}

double NNfunction_ns_chi02_sL::synapse0x35d59c0() {
   return (neuron0x35d8fb0()*0.00246708);
}

double NNfunction_ns_chi02_sL::synapse0x35d5a00() {
   return (neuron0x35d9510()*-0.00727889);
}

double NNfunction_ns_chi02_sL::synapse0x35dcc80() {
   return (neuron0x35d9850()*-0.00248585);
}

double NNfunction_ns_chi02_sL::synapse0x35dccc0() {
   return (neuron0x35d9b90()*-0.00155285);
}

double NNfunction_ns_chi02_sL::synapse0x35dcd00() {
   return (neuron0x35d9ed0()*-0.02459);
}

double NNfunction_ns_chi02_sL::synapse0x35dcd40() {
   return (neuron0x35da210()*0.0129079);
}

double NNfunction_ns_chi02_sL::synapse0x35dcd80() {
   return (neuron0x35da550()*-0.011135);
}

double NNfunction_ns_chi02_sL::synapse0x35dcdc0() {
   return (neuron0x35da890()*6.81242);
}

double NNfunction_ns_chi02_sL::synapse0x35dd140() {
   return (neuron0x35d5c40()*-0.00637455);
}

double NNfunction_ns_chi02_sL::synapse0x35dd180() {
   return (neuron0x35d5ef0()*1.57419);
}

double NNfunction_ns_chi02_sL::synapse0x35dd1c0() {
   return (neuron0x35d6230()*1.02128);
}

double NNfunction_ns_chi02_sL::synapse0x35dd200() {
   return (neuron0x35d6570()*-1.18922);
}

double NNfunction_ns_chi02_sL::synapse0x35dd240() {
   return (neuron0x35d68b0()*-0.0992298);
}

double NNfunction_ns_chi02_sL::synapse0x35dd280() {
   return (neuron0x35d6bf0()*-0.346977);
}

double NNfunction_ns_chi02_sL::synapse0x35dd2c0() {
   return (neuron0x35d6f30()*-0.0238134);
}

double NNfunction_ns_chi02_sL::synapse0x35dd300() {
   return (neuron0x35d7270()*-0.779356);
}

double NNfunction_ns_chi02_sL::synapse0x35dd340() {
   return (neuron0x35d75b0()*-0.449479);
}

double NNfunction_ns_chi02_sL::synapse0x35dd380() {
   return (neuron0x35d78f0()*0.257184);
}

double NNfunction_ns_chi02_sL::synapse0x35dd3c0() {
   return (neuron0x35d7c30()*0.38269);
}

double NNfunction_ns_chi02_sL::synapse0x35dd400() {
   return (neuron0x35d7f70()*0.336716);
}

double NNfunction_ns_chi02_sL::synapse0x35dd440() {
   return (neuron0x35d82b0()*0.688787);
}

double NNfunction_ns_chi02_sL::synapse0x35dd480() {
   return (neuron0x35d85f0()*0.220924);
}

double NNfunction_ns_chi02_sL::synapse0x35dd4c0() {
   return (neuron0x35d8930()*0.511561);
}

double NNfunction_ns_chi02_sL::synapse0x35dd500() {
   return (neuron0x35d8c70()*0.273266);
}

double NNfunction_ns_chi02_sL::synapse0x35dd650() {
   return (neuron0x35d8fb0()*0.547288);
}

double NNfunction_ns_chi02_sL::synapse0x35dcf90() {
   return (neuron0x35d9510()*-0.514759);
}

double NNfunction_ns_chi02_sL::synapse0x35dcfd0() {
   return (neuron0x35d9850()*-0.0784682);
}

double NNfunction_ns_chi02_sL::synapse0x35de790() {
   return (neuron0x35d9b90()*-0.133246);
}

double NNfunction_ns_chi02_sL::synapse0x35de7d0() {
   return (neuron0x35d9ed0()*0.223489);
}

double NNfunction_ns_chi02_sL::synapse0x35de810() {
   return (neuron0x35da210()*-0.166328);
}

double NNfunction_ns_chi02_sL::synapse0x35de850() {
   return (neuron0x35da550()*0.366558);
}

double NNfunction_ns_chi02_sL::synapse0x35de890() {
   return (neuron0x35da890()*-0.266029);
}

double NNfunction_ns_chi02_sL::synapse0x35dec10() {
   return (neuron0x35d5c40()*-0.189079);
}

double NNfunction_ns_chi02_sL::synapse0x35dec50() {
   return (neuron0x35d5ef0()*-1.02073);
}

double NNfunction_ns_chi02_sL::synapse0x35dec90() {
   return (neuron0x35d6230()*-0.0462116);
}

double NNfunction_ns_chi02_sL::synapse0x35decd0() {
   return (neuron0x35d6570()*-0.764741);
}

double NNfunction_ns_chi02_sL::synapse0x35ded10() {
   return (neuron0x35d68b0()*-0.47987);
}

double NNfunction_ns_chi02_sL::synapse0x35ded50() {
   return (neuron0x35d6bf0()*1.0645);
}

double NNfunction_ns_chi02_sL::synapse0x35ded90() {
   return (neuron0x35d6f30()*1.1603);
}

double NNfunction_ns_chi02_sL::synapse0x35dedd0() {
   return (neuron0x35d7270()*1.1539);
}

double NNfunction_ns_chi02_sL::synapse0x35dee10() {
   return (neuron0x35d75b0()*0.434608);
}

double NNfunction_ns_chi02_sL::synapse0x33a00d0() {
   return (neuron0x35d78f0()*-0.0881121);
}

double NNfunction_ns_chi02_sL::synapse0x33a0110() {
   return (neuron0x35d7c30()*0.149824);
}

double NNfunction_ns_chi02_sL::synapse0x33a0150() {
   return (neuron0x35d7f70()*-0.298382);
}

double NNfunction_ns_chi02_sL::synapse0x33a0190() {
   return (neuron0x35d82b0()*0.648035);
}

double NNfunction_ns_chi02_sL::synapse0x33a01d0() {
   return (neuron0x35d85f0()*-0.709264);
}

double NNfunction_ns_chi02_sL::synapse0x33a0210() {
   return (neuron0x35d8930()*0.138375);
}

double NNfunction_ns_chi02_sL::synapse0x33a0250() {
   return (neuron0x35d8c70()*-0.156798);
}

double NNfunction_ns_chi02_sL::synapse0x35dea60() {
   return (neuron0x35d8fb0()*-0.20359);
}

double NNfunction_ns_chi02_sL::synapse0x35deaa0() {
   return (neuron0x35d9510()*0.0450769);
}

double NNfunction_ns_chi02_sL::synapse0x33a03a0() {
   return (neuron0x35d9850()*0.770097);
}

double NNfunction_ns_chi02_sL::synapse0x33a03e0() {
   return (neuron0x35d9b90()*-0.332593);
}

double NNfunction_ns_chi02_sL::synapse0x33a0420() {
   return (neuron0x35d9ed0()*-0.443185);
}

double NNfunction_ns_chi02_sL::synapse0x33a0460() {
   return (neuron0x35da210()*-0.153481);
}

double NNfunction_ns_chi02_sL::synapse0x33a04a0() {
   return (neuron0x35da550()*0.566047);
}

double NNfunction_ns_chi02_sL::synapse0x35df660() {
   return (neuron0x35da890()*0.366046);
}

double NNfunction_ns_chi02_sL::synapse0x35df9e0() {
   return (neuron0x35d5c40()*0.00487591);
}

double NNfunction_ns_chi02_sL::synapse0x35dfa20() {
   return (neuron0x35d5ef0()*-0.000771587);
}

double NNfunction_ns_chi02_sL::synapse0x35dfa60() {
   return (neuron0x35d6230()*0.0080962);
}

double NNfunction_ns_chi02_sL::synapse0x35dfaa0() {
   return (neuron0x35d6570()*2.29747);
}

double NNfunction_ns_chi02_sL::synapse0x35dfae0() {
   return (neuron0x35d68b0()*0.00305942);
}

double NNfunction_ns_chi02_sL::synapse0x35dfb20() {
   return (neuron0x35d6bf0()*-0.00243637);
}

double NNfunction_ns_chi02_sL::synapse0x35dfb60() {
   return (neuron0x35d6f30()*-0.00768221);
}

double NNfunction_ns_chi02_sL::synapse0x35dfba0() {
   return (neuron0x35d7270()*0.0157368);
}

double NNfunction_ns_chi02_sL::synapse0x35dfbe0() {
   return (neuron0x35d75b0()*0.00662799);
}

double NNfunction_ns_chi02_sL::synapse0x35dfc20() {
   return (neuron0x35d78f0()*-0.0100772);
}

double NNfunction_ns_chi02_sL::synapse0x35dfc60() {
   return (neuron0x35d7c30()*-0.00526787);
}

double NNfunction_ns_chi02_sL::synapse0x35dfca0() {
   return (neuron0x35d7f70()*-0.00385828);
}

double NNfunction_ns_chi02_sL::synapse0x35dfce0() {
   return (neuron0x35d82b0()*-0.0818749);
}

double NNfunction_ns_chi02_sL::synapse0x35dfd20() {
   return (neuron0x35d85f0()*-0.00442538);
}

double NNfunction_ns_chi02_sL::synapse0x35dfd60() {
   return (neuron0x35d8930()*0.00446261);
}

double NNfunction_ns_chi02_sL::synapse0x35dfda0() {
   return (neuron0x35d8c70()*-0.00146276);
}

double NNfunction_ns_chi02_sL::synapse0x35df830() {
   return (neuron0x35d8fb0()*-0.00372146);
}

double NNfunction_ns_chi02_sL::synapse0x35df870() {
   return (neuron0x35d9510()*-0.00821412);
}

double NNfunction_ns_chi02_sL::synapse0x35dfef0() {
   return (neuron0x35d9850()*-0.0063878);
}

double NNfunction_ns_chi02_sL::synapse0x35dff30() {
   return (neuron0x35d9b90()*-0.00412333);
}

double NNfunction_ns_chi02_sL::synapse0x35dff70() {
   return (neuron0x35d9ed0()*0.00218388);
}

double NNfunction_ns_chi02_sL::synapse0x35dffb0() {
   return (neuron0x35da210()*-0.0065464);
}

double NNfunction_ns_chi02_sL::synapse0x35dfff0() {
   return (neuron0x35da550()*-0.00206957);
}

double NNfunction_ns_chi02_sL::synapse0x35e0030() {
   return (neuron0x35da890()*0.00312311);
}

double NNfunction_ns_chi02_sL::synapse0x35e03b0() {
   return (neuron0x35d5c40()*0.0187649);
}

double NNfunction_ns_chi02_sL::synapse0x35e03f0() {
   return (neuron0x35d5ef0()*-0.00737888);
}

double NNfunction_ns_chi02_sL::synapse0x35e0430() {
   return (neuron0x35d6230()*0.524145);
}

double NNfunction_ns_chi02_sL::synapse0x35e0470() {
   return (neuron0x35d6570()*0.0192251);
}

double NNfunction_ns_chi02_sL::synapse0x35e04b0() {
   return (neuron0x35d68b0()*-0.000173086);
}

double NNfunction_ns_chi02_sL::synapse0x35e04f0() {
   return (neuron0x35d6bf0()*-0.0319532);
}

double NNfunction_ns_chi02_sL::synapse0x35e0530() {
   return (neuron0x35d6f30()*0.0202854);
}

double NNfunction_ns_chi02_sL::synapse0x35e0570() {
   return (neuron0x35d7270()*0.00266002);
}

double NNfunction_ns_chi02_sL::synapse0x35e05b0() {
   return (neuron0x35d75b0()*-0.0317439);
}

double NNfunction_ns_chi02_sL::synapse0x35e05f0() {
   return (neuron0x35d78f0()*0.0111406);
}

double NNfunction_ns_chi02_sL::synapse0x35e0630() {
   return (neuron0x35d7c30()*-0.0277972);
}

double NNfunction_ns_chi02_sL::synapse0x35e0670() {
   return (neuron0x35d7f70()*-0.00741395);
}

double NNfunction_ns_chi02_sL::synapse0x35e06b0() {
   return (neuron0x35d82b0()*-0.536712);
}

double NNfunction_ns_chi02_sL::synapse0x35e06f0() {
   return (neuron0x35d85f0()*-0.0246983);
}

double NNfunction_ns_chi02_sL::synapse0x35e0730() {
   return (neuron0x35d8930()*-0.0509305);
}

double NNfunction_ns_chi02_sL::synapse0x35e0770() {
   return (neuron0x35d8c70()*0.0224379);
}

double NNfunction_ns_chi02_sL::synapse0x35e0200() {
   return (neuron0x35d8fb0()*0.0198292);
}

double NNfunction_ns_chi02_sL::synapse0x35e0240() {
   return (neuron0x35d9510()*0.018616);
}

double NNfunction_ns_chi02_sL::synapse0x35e08c0() {
   return (neuron0x35d9850()*0.0291865);
}

double NNfunction_ns_chi02_sL::synapse0x35e0900() {
   return (neuron0x35d9b90()*0.0519954);
}

double NNfunction_ns_chi02_sL::synapse0x35e0940() {
   return (neuron0x35d9ed0()*0.0267076);
}

double NNfunction_ns_chi02_sL::synapse0x35e0980() {
   return (neuron0x35da210()*-0.00535871);
}

double NNfunction_ns_chi02_sL::synapse0x35e09c0() {
   return (neuron0x35da550()*0.0176805);
}

double NNfunction_ns_chi02_sL::synapse0x35e0a00() {
   return (neuron0x35da890()*-2.47568);
}

double NNfunction_ns_chi02_sL::synapse0x35d9400() {
   return (neuron0x35d5c40()*0.0153362);
}

double NNfunction_ns_chi02_sL::synapse0x35d9440() {
   return (neuron0x35d5ef0()*0.99164);
}

double NNfunction_ns_chi02_sL::synapse0x35d9480() {
   return (neuron0x35d6230()*0.997016);
}

double NNfunction_ns_chi02_sL::synapse0x35d94c0() {
   return (neuron0x35d6570()*0.306953);
}

double NNfunction_ns_chi02_sL::synapse0x35e0f90() {
   return (neuron0x35d68b0()*0.0489008);
}

double NNfunction_ns_chi02_sL::synapse0x35e0fd0() {
   return (neuron0x35d6bf0()*-0.506848);
}

double NNfunction_ns_chi02_sL::synapse0x35e1010() {
   return (neuron0x35d6f30()*0.263612);
}

double NNfunction_ns_chi02_sL::synapse0x35e1050() {
   return (neuron0x35d7270()*-0.0385195);
}

double NNfunction_ns_chi02_sL::synapse0x35e1090() {
   return (neuron0x35d75b0()*1.04687);
}

double NNfunction_ns_chi02_sL::synapse0x35e10d0() {
   return (neuron0x35d78f0()*-0.25459);
}

double NNfunction_ns_chi02_sL::synapse0x35e1110() {
   return (neuron0x35d7c30()*-0.709227);
}

double NNfunction_ns_chi02_sL::synapse0x35e1150() {
   return (neuron0x35d7f70()*0.305561);
}

double NNfunction_ns_chi02_sL::synapse0x35e1190() {
   return (neuron0x35d82b0()*-0.185596);
}

double NNfunction_ns_chi02_sL::synapse0x35e11d0() {
   return (neuron0x35d85f0()*-0.0738029);
}

double NNfunction_ns_chi02_sL::synapse0x35e1210() {
   return (neuron0x35d8930()*0.83816);
}

double NNfunction_ns_chi02_sL::synapse0x35e1250() {
   return (neuron0x35d8c70()*1.47269);
}

double NNfunction_ns_chi02_sL::synapse0x35e0bd0() {
   return (neuron0x35d8fb0()*-0.0579313);
}

double NNfunction_ns_chi02_sL::synapse0x35e0c10() {
   return (neuron0x35d9510()*-0.756124);
}

double NNfunction_ns_chi02_sL::synapse0x35e13a0() {
   return (neuron0x35d9850()*-0.27285);
}

double NNfunction_ns_chi02_sL::synapse0x35e13e0() {
   return (neuron0x35d9b90()*-0.621673);
}

double NNfunction_ns_chi02_sL::synapse0x35e1420() {
   return (neuron0x35d9ed0()*-1.37393);
}

double NNfunction_ns_chi02_sL::synapse0x35e1460() {
   return (neuron0x35da210()*-0.505029);
}

double NNfunction_ns_chi02_sL::synapse0x35e14a0() {
   return (neuron0x35da550()*0.22618);
}

double NNfunction_ns_chi02_sL::synapse0x35e14e0() {
   return (neuron0x35da890()*-1.88907);
}

double NNfunction_ns_chi02_sL::synapse0x35e1860() {
   return (neuron0x35d5c40()*-0.161426);
}

double NNfunction_ns_chi02_sL::synapse0x35e18a0() {
   return (neuron0x35d5ef0()*-1.33373);
}

double NNfunction_ns_chi02_sL::synapse0x35e18e0() {
   return (neuron0x35d6230()*-0.143263);
}

double NNfunction_ns_chi02_sL::synapse0x35e1920() {
   return (neuron0x35d6570()*0.203225);
}

double NNfunction_ns_chi02_sL::synapse0x35e1960() {
   return (neuron0x35d68b0()*-0.345765);
}

double NNfunction_ns_chi02_sL::synapse0x35e19a0() {
   return (neuron0x35d6bf0()*-0.868506);
}

double NNfunction_ns_chi02_sL::synapse0x35e19e0() {
   return (neuron0x35d6f30()*0.83149);
}

double NNfunction_ns_chi02_sL::synapse0x35e1a20() {
   return (neuron0x35d7270()*-0.9634);
}

double NNfunction_ns_chi02_sL::synapse0x35e1a60() {
   return (neuron0x35d75b0()*-0.152659);
}

double NNfunction_ns_chi02_sL::synapse0x35e1aa0() {
   return (neuron0x35d78f0()*-0.119039);
}

double NNfunction_ns_chi02_sL::synapse0x35e1ae0() {
   return (neuron0x35d7c30()*0.209134);
}

double NNfunction_ns_chi02_sL::synapse0x35e1b20() {
   return (neuron0x35d7f70()*-0.578536);
}

double NNfunction_ns_chi02_sL::synapse0x35e1b60() {
   return (neuron0x35d82b0()*-0.334132);
}

double NNfunction_ns_chi02_sL::synapse0x35e1ba0() {
   return (neuron0x35d85f0()*0.241282);
}

double NNfunction_ns_chi02_sL::synapse0x35e1be0() {
   return (neuron0x35d8930()*-0.73282);
}

double NNfunction_ns_chi02_sL::synapse0x35e1c20() {
   return (neuron0x35d8c70()*0.180129);
}

double NNfunction_ns_chi02_sL::synapse0x35e16b0() {
   return (neuron0x35d8fb0()*-0.536571);
}

double NNfunction_ns_chi02_sL::synapse0x35e16f0() {
   return (neuron0x35d9510()*-0.129648);
}

double NNfunction_ns_chi02_sL::synapse0x35e1d70() {
   return (neuron0x35d9850()*-0.444393);
}

double NNfunction_ns_chi02_sL::synapse0x35e1db0() {
   return (neuron0x35d9b90()*-0.210515);
}

double NNfunction_ns_chi02_sL::synapse0x35e1df0() {
   return (neuron0x35d9ed0()*-0.612318);
}

double NNfunction_ns_chi02_sL::synapse0x35e1e30() {
   return (neuron0x35da210()*-0.00495522);
}

double NNfunction_ns_chi02_sL::synapse0x35e1e70() {
   return (neuron0x35da550()*0.963489);
}

double NNfunction_ns_chi02_sL::synapse0x35e1eb0() {
   return (neuron0x35da890()*-1.42475);
}

double NNfunction_ns_chi02_sL::synapse0x35e2230() {
   return (neuron0x35d5c40()*-0.0336425);
}

double NNfunction_ns_chi02_sL::synapse0x35e2270() {
   return (neuron0x35d5ef0()*-17.3049);
}

double NNfunction_ns_chi02_sL::synapse0x35e22b0() {
   return (neuron0x35d6230()*-0.766224);
}

double NNfunction_ns_chi02_sL::synapse0x35e22f0() {
   return (neuron0x35d6570()*0.0235283);
}

double NNfunction_ns_chi02_sL::synapse0x35e2330() {
   return (neuron0x35d68b0()*-0.0244205);
}

double NNfunction_ns_chi02_sL::synapse0x35e2370() {
   return (neuron0x35d6bf0()*-0.0057636);
}

double NNfunction_ns_chi02_sL::synapse0x35e23b0() {
   return (neuron0x35d6f30()*0.0232237);
}

double NNfunction_ns_chi02_sL::synapse0x35e23f0() {
   return (neuron0x35d7270()*-0.018095);
}

double NNfunction_ns_chi02_sL::synapse0x35e2430() {
   return (neuron0x35d75b0()*0.00491908);
}

double NNfunction_ns_chi02_sL::synapse0x35e2470() {
   return (neuron0x35d78f0()*0.00634288);
}

double NNfunction_ns_chi02_sL::synapse0x35e24b0() {
   return (neuron0x35d7c30()*0.0115207);
}

double NNfunction_ns_chi02_sL::synapse0x35e24f0() {
   return (neuron0x35d7f70()*-0.00941467);
}

double NNfunction_ns_chi02_sL::synapse0x35e2530() {
   return (neuron0x35d82b0()*-0.29686);
}

double NNfunction_ns_chi02_sL::synapse0x35e2570() {
   return (neuron0x35d85f0()*0.00631675);
}

double NNfunction_ns_chi02_sL::synapse0x35e25b0() {
   return (neuron0x35d8930()*0.0237743);
}

double NNfunction_ns_chi02_sL::synapse0x35e25f0() {
   return (neuron0x35d8c70()*0.00167874);
}

double NNfunction_ns_chi02_sL::synapse0x35e2080() {
   return (neuron0x35d8fb0()*0.0248917);
}

double NNfunction_ns_chi02_sL::synapse0x35e20c0() {
   return (neuron0x35d9510()*-0.00843439);
}

double NNfunction_ns_chi02_sL::synapse0x35dee50() {
   return (neuron0x35d9850()*0.0135968);
}

double NNfunction_ns_chi02_sL::synapse0x35dee90() {
   return (neuron0x35d9b90()*-0.00564054);
}

double NNfunction_ns_chi02_sL::synapse0x35deed0() {
   return (neuron0x35d9ed0()*-0.00447422);
}

double NNfunction_ns_chi02_sL::synapse0x35def10() {
   return (neuron0x35da210()*-0.00272653);
}

double NNfunction_ns_chi02_sL::synapse0x35def50() {
   return (neuron0x35da550()*0.0114579);
}

double NNfunction_ns_chi02_sL::synapse0x35def90() {
   return (neuron0x35da890()*0.0306346);
}

double NNfunction_ns_chi02_sL::synapse0x35df310() {
   return (neuron0x35d5c40()*0.022834);
}

double NNfunction_ns_chi02_sL::synapse0x35df350() {
   return (neuron0x35d5ef0()*-0.0105058);
}

double NNfunction_ns_chi02_sL::synapse0x35df390() {
   return (neuron0x35d6230()*-1.80018);
}

double NNfunction_ns_chi02_sL::synapse0x35df3d0() {
   return (neuron0x35d6570()*0.0610907);
}

double NNfunction_ns_chi02_sL::synapse0x35df410() {
   return (neuron0x35d68b0()*-0.0559649);
}

double NNfunction_ns_chi02_sL::synapse0x35df450() {
   return (neuron0x35d6bf0()*-0.0121258);
}

double NNfunction_ns_chi02_sL::synapse0x35df490() {
   return (neuron0x35d6f30()*0.00171944);
}

double NNfunction_ns_chi02_sL::synapse0x35df4d0() {
   return (neuron0x35d7270()*0.00500025);
}

double NNfunction_ns_chi02_sL::synapse0x35df510() {
   return (neuron0x35d75b0()*-0.0395418);
}

double NNfunction_ns_chi02_sL::synapse0x35df550() {
   return (neuron0x35d78f0()*-0.0314044);
}

double NNfunction_ns_chi02_sL::synapse0x35df590() {
   return (neuron0x35d7c30()*-0.0313846);
}

double NNfunction_ns_chi02_sL::synapse0x35df5d0() {
   return (neuron0x35d7f70()*0.0246754);
}

double NNfunction_ns_chi02_sL::synapse0x35df610() {
   return (neuron0x35d82b0()*-1.07957);
}

double NNfunction_ns_chi02_sL::synapse0x35e3750() {
   return (neuron0x35d85f0()*0.0234396);
}

double NNfunction_ns_chi02_sL::synapse0x35e3790() {
   return (neuron0x35d8930()*0.0127759);
}

double NNfunction_ns_chi02_sL::synapse0x35e37d0() {
   return (neuron0x35d8c70()*0.0364744);
}

double NNfunction_ns_chi02_sL::synapse0x35df160() {
   return (neuron0x35d8fb0()*-0.0977457);
}

double NNfunction_ns_chi02_sL::synapse0x35df1a0() {
   return (neuron0x35d9510()*-0.00497514);
}

double NNfunction_ns_chi02_sL::synapse0x35e3920() {
   return (neuron0x35d9850()*-0.0554193);
}

double NNfunction_ns_chi02_sL::synapse0x35e3960() {
   return (neuron0x35d9b90()*-0.0261332);
}

double NNfunction_ns_chi02_sL::synapse0x35e39a0() {
   return (neuron0x35d9ed0()*-0.0205688);
}

double NNfunction_ns_chi02_sL::synapse0x35e39e0() {
   return (neuron0x35da210()*0.0187819);
}

double NNfunction_ns_chi02_sL::synapse0x35e3a20() {
   return (neuron0x35da550()*-0.0307447);
}

double NNfunction_ns_chi02_sL::synapse0x35e3a60() {
   return (neuron0x35da890()*0.00545068);
}

double NNfunction_ns_chi02_sL::synapse0x35e3de0() {
   return (neuron0x35d5c40()*-0.264266);
}

double NNfunction_ns_chi02_sL::synapse0x35e3e20() {
   return (neuron0x35d5ef0()*0.439885);
}

double NNfunction_ns_chi02_sL::synapse0x35e3e60() {
   return (neuron0x35d6230()*-0.123404);
}

double NNfunction_ns_chi02_sL::synapse0x35e3ea0() {
   return (neuron0x35d6570()*1.61085);
}

double NNfunction_ns_chi02_sL::synapse0x35e3ee0() {
   return (neuron0x35d68b0()*-0.56387);
}

double NNfunction_ns_chi02_sL::synapse0x35e3f20() {
   return (neuron0x35d6bf0()*-0.296695);
}

double NNfunction_ns_chi02_sL::synapse0x35e3f60() {
   return (neuron0x35d6f30()*-0.0336485);
}

double NNfunction_ns_chi02_sL::synapse0x35e3fa0() {
   return (neuron0x35d7270()*-0.487587);
}

double NNfunction_ns_chi02_sL::synapse0x35e3fe0() {
   return (neuron0x35d75b0()*0.129844);
}

double NNfunction_ns_chi02_sL::synapse0x35e4020() {
   return (neuron0x35d78f0()*-0.350625);
}

double NNfunction_ns_chi02_sL::synapse0x35e4060() {
   return (neuron0x35d7c30()*0.39256);
}

double NNfunction_ns_chi02_sL::synapse0x35e40a0() {
   return (neuron0x35d7f70()*-0.181022);
}

double NNfunction_ns_chi02_sL::synapse0x35e40e0() {
   return (neuron0x35d82b0()*0.668058);
}

double NNfunction_ns_chi02_sL::synapse0x35e4120() {
   return (neuron0x35d85f0()*-0.0621687);
}

double NNfunction_ns_chi02_sL::synapse0x35e4160() {
   return (neuron0x35d8930()*0.580501);
}

double NNfunction_ns_chi02_sL::synapse0x35e41a0() {
   return (neuron0x35d8c70()*0.0106806);
}

double NNfunction_ns_chi02_sL::synapse0x35e3c30() {
   return (neuron0x35d8fb0()*-0.034493);
}

double NNfunction_ns_chi02_sL::synapse0x35e3c70() {
   return (neuron0x35d9510()*-0.642635);
}

double NNfunction_ns_chi02_sL::synapse0x35e42f0() {
   return (neuron0x35d9850()*-0.0028283);
}

double NNfunction_ns_chi02_sL::synapse0x35e4330() {
   return (neuron0x35d9b90()*-0.148968);
}

double NNfunction_ns_chi02_sL::synapse0x35e4370() {
   return (neuron0x35d9ed0()*-0.0448553);
}

double NNfunction_ns_chi02_sL::synapse0x35e43b0() {
   return (neuron0x35da210()*-0.183268);
}

double NNfunction_ns_chi02_sL::synapse0x35e43f0() {
   return (neuron0x35da550()*0.571908);
}

double NNfunction_ns_chi02_sL::synapse0x35e4430() {
   return (neuron0x35da890()*0.335522);
}

double NNfunction_ns_chi02_sL::synapse0x35e47b0() {
   return (neuron0x35d5c40()*-0.0185478);
}

double NNfunction_ns_chi02_sL::synapse0x35e47f0() {
   return (neuron0x35d5ef0()*-0.00550096);
}

double NNfunction_ns_chi02_sL::synapse0x35e4830() {
   return (neuron0x35d6230()*-0.0128171);
}

double NNfunction_ns_chi02_sL::synapse0x35e4870() {
   return (neuron0x35d6570()*0.0975445);
}

double NNfunction_ns_chi02_sL::synapse0x35e48b0() {
   return (neuron0x35d68b0()*-0.0136838);
}

double NNfunction_ns_chi02_sL::synapse0x35e48f0() {
   return (neuron0x35d6bf0()*0.00674688);
}

double NNfunction_ns_chi02_sL::synapse0x35e4930() {
   return (neuron0x35d6f30()*-0.00811972);
}

double NNfunction_ns_chi02_sL::synapse0x35e4970() {
   return (neuron0x35d7270()*-0.00490982);
}

double NNfunction_ns_chi02_sL::synapse0x35e49b0() {
   return (neuron0x35d75b0()*-0.0160187);
}

double NNfunction_ns_chi02_sL::synapse0x35e49f0() {
   return (neuron0x35d78f0()*0.00977743);
}

double NNfunction_ns_chi02_sL::synapse0x35e4a30() {
   return (neuron0x35d7c30()*-0.00208664);
}

double NNfunction_ns_chi02_sL::synapse0x35e4a70() {
   return (neuron0x35d7f70()*0.0137955);
}

double NNfunction_ns_chi02_sL::synapse0x35e4ab0() {
   return (neuron0x35d82b0()*1.26562);
}

double NNfunction_ns_chi02_sL::synapse0x35e4af0() {
   return (neuron0x35d85f0()*0.0132716);
}

double NNfunction_ns_chi02_sL::synapse0x35e4b30() {
   return (neuron0x35d8930()*0.00947768);
}

double NNfunction_ns_chi02_sL::synapse0x35e4b70() {
   return (neuron0x35d8c70()*-0.0109121);
}

double NNfunction_ns_chi02_sL::synapse0x35e4600() {
   return (neuron0x35d8fb0()*0.0144177);
}

double NNfunction_ns_chi02_sL::synapse0x35e4640() {
   return (neuron0x35d9510()*-0.0168114);
}

double NNfunction_ns_chi02_sL::synapse0x35e4cc0() {
   return (neuron0x35d9850()*0.000306751);
}

double NNfunction_ns_chi02_sL::synapse0x35e4d00() {
   return (neuron0x35d9b90()*-0.00908591);
}

double NNfunction_ns_chi02_sL::synapse0x35e4d40() {
   return (neuron0x35d9ed0()*0.00940287);
}

double NNfunction_ns_chi02_sL::synapse0x35e4d80() {
   return (neuron0x35da210()*0.0120398);
}

double NNfunction_ns_chi02_sL::synapse0x35e4dc0() {
   return (neuron0x35da550()*0.000247642);
}

double NNfunction_ns_chi02_sL::synapse0x35e4e00() {
   return (neuron0x35da890()*0.0618902);
}

double NNfunction_ns_chi02_sL::synapse0x35e5180() {
   return (neuron0x35d5c40()*0.0164714);
}

double NNfunction_ns_chi02_sL::synapse0x35e51c0() {
   return (neuron0x35d5ef0()*-0.0394998);
}

double NNfunction_ns_chi02_sL::synapse0x35e5200() {
   return (neuron0x35d6230()*-2.01713);
}

double NNfunction_ns_chi02_sL::synapse0x35e5240() {
   return (neuron0x35d6570()*0.102196);
}

double NNfunction_ns_chi02_sL::synapse0x35e5280() {
   return (neuron0x35d68b0()*-0.036539);
}

double NNfunction_ns_chi02_sL::synapse0x35e52c0() {
   return (neuron0x35d6bf0()*-0.0298362);
}

double NNfunction_ns_chi02_sL::synapse0x35e5300() {
   return (neuron0x35d6f30()*0.0154242);
}

double NNfunction_ns_chi02_sL::synapse0x35e5340() {
   return (neuron0x35d7270()*0.0134242);
}

double NNfunction_ns_chi02_sL::synapse0x35e5380() {
   return (neuron0x35d75b0()*-0.0128038);
}

double NNfunction_ns_chi02_sL::synapse0x35e53c0() {
   return (neuron0x35d78f0()*0.0377821);
}

double NNfunction_ns_chi02_sL::synapse0x35e5400() {
   return (neuron0x35d7c30()*-0.0678656);
}

double NNfunction_ns_chi02_sL::synapse0x35e5440() {
   return (neuron0x35d7f70()*0.00493676);
}

double NNfunction_ns_chi02_sL::synapse0x35e5480() {
   return (neuron0x35d82b0()*0.0462935);
}

double NNfunction_ns_chi02_sL::synapse0x35e54c0() {
   return (neuron0x35d85f0()*-0.0372525);
}

double NNfunction_ns_chi02_sL::synapse0x35e5500() {
   return (neuron0x35d8930()*-0.0113319);
}

double NNfunction_ns_chi02_sL::synapse0x35e5540() {
   return (neuron0x35d8c70()*0.0170528);
}

double NNfunction_ns_chi02_sL::synapse0x35e4fd0() {
   return (neuron0x35d8fb0()*-0.062216);
}

double NNfunction_ns_chi02_sL::synapse0x35e5010() {
   return (neuron0x35d9510()*0.00853085);
}

double NNfunction_ns_chi02_sL::synapse0x35e5690() {
   return (neuron0x35d9850()*-0.0440474);
}

double NNfunction_ns_chi02_sL::synapse0x35e56d0() {
   return (neuron0x35d9b90()*0.042216);
}

double NNfunction_ns_chi02_sL::synapse0x35e5710() {
   return (neuron0x35d9ed0()*0.0254791);
}

double NNfunction_ns_chi02_sL::synapse0x35e5750() {
   return (neuron0x35da210()*0.0199612);
}

double NNfunction_ns_chi02_sL::synapse0x35e5790() {
   return (neuron0x35da550()*-0.0214914);
}

double NNfunction_ns_chi02_sL::synapse0x35e57d0() {
   return (neuron0x35da890()*0.0931712);
}

double NNfunction_ns_chi02_sL::synapse0x35e5b50() {
   return (neuron0x35d5c40()*0.0563079);
}

double NNfunction_ns_chi02_sL::synapse0x35d5dd0() {
   return (neuron0x35d5ef0()*0.0609901);
}

double NNfunction_ns_chi02_sL::synapse0x35d5e10() {
   return (neuron0x35d6230()*-0.258151);
}

double NNfunction_ns_chi02_sL::synapse0x35d6110() {
   return (neuron0x35d6570()*0.0171294);
}

double NNfunction_ns_chi02_sL::synapse0x35d6150() {
   return (neuron0x35d68b0()*-0.0262523);
}

double NNfunction_ns_chi02_sL::synapse0x35d6450() {
   return (neuron0x35d6bf0()*-0.012643);
}

double NNfunction_ns_chi02_sL::synapse0x35d6490() {
   return (neuron0x35d6f30()*0.000996839);
}

double NNfunction_ns_chi02_sL::synapse0x35d6790() {
   return (neuron0x35d7270()*0.0175314);
}

double NNfunction_ns_chi02_sL::synapse0x35d67d0() {
   return (neuron0x35d75b0()*-0.0100307);
}

double NNfunction_ns_chi02_sL::synapse0x35d6ad0() {
   return (neuron0x35d78f0()*-0.0125298);
}

double NNfunction_ns_chi02_sL::synapse0x35d6b10() {
   return (neuron0x35d7c30()*-0.00846326);
}

double NNfunction_ns_chi02_sL::synapse0x35d6e10() {
   return (neuron0x35d7f70()*0.0011766);
}

double NNfunction_ns_chi02_sL::synapse0x35d6e50() {
   return (neuron0x35d82b0()*0.0183466);
}

double NNfunction_ns_chi02_sL::synapse0x35d7150() {
   return (neuron0x35d85f0()*0.0200659);
}

double NNfunction_ns_chi02_sL::synapse0x35d7190() {
   return (neuron0x35d8930()*0.00386516);
}

double NNfunction_ns_chi02_sL::synapse0x35d7490() {
   return (neuron0x35d8c70()*-0.00906101);
}

double NNfunction_ns_chi02_sL::synapse0x35d74d0() {
   return (neuron0x35d8fb0()*0.0163593);
}

double NNfunction_ns_chi02_sL::synapse0x35d77d0() {
   return (neuron0x35d9510()*-0.0251731);
}

double NNfunction_ns_chi02_sL::synapse0x35d7810() {
   return (neuron0x35d9850()*-0.00188959);
}

double NNfunction_ns_chi02_sL::synapse0x35d7b10() {
   return (neuron0x35d9b90()*0.00669694);
}

double NNfunction_ns_chi02_sL::synapse0x35d7b50() {
   return (neuron0x35d9ed0()*0.00517787);
}

double NNfunction_ns_chi02_sL::synapse0x35d7e50() {
   return (neuron0x35da210()*0.0128087);
}

double NNfunction_ns_chi02_sL::synapse0x35d7e90() {
   return (neuron0x35da550()*0.00878465);
}

double NNfunction_ns_chi02_sL::synapse0x35d8190() {
   return (neuron0x35da890()*-11.7645);
}

double NNfunction_ns_chi02_sL::synapse0x35d81d0() {
   return (neuron0x35d5c40()*-0.279503);
}

double NNfunction_ns_chi02_sL::synapse0x35d8e90() {
   return (neuron0x35d5ef0()*-0.701291);
}

double NNfunction_ns_chi02_sL::synapse0x35d8ed0() {
   return (neuron0x35d6230()*-0.574697);
}

double NNfunction_ns_chi02_sL::synapse0x35e59a0() {
   return (neuron0x35d6570()*0.80202);
}

double NNfunction_ns_chi02_sL::synapse0x35e59e0() {
   return (neuron0x35d68b0()*-0.375349);
}

double NNfunction_ns_chi02_sL::synapse0x35d91d0() {
   return (neuron0x35d6bf0()*-0.421784);
}

double NNfunction_ns_chi02_sL::synapse0x35d9210() {
   return (neuron0x35d6f30()*0.25218);
}

double NNfunction_ns_chi02_sL::synapse0x35d9730() {
   return (neuron0x35d7270()*0.164673);
}

double NNfunction_ns_chi02_sL::synapse0x35d9770() {
   return (neuron0x35d75b0()*0.340978);
}

double NNfunction_ns_chi02_sL::synapse0x35d9a70() {
   return (neuron0x35d78f0()*-0.022489);
}

double NNfunction_ns_chi02_sL::synapse0x35d9ab0() {
   return (neuron0x35d7c30()*0.354602);
}

double NNfunction_ns_chi02_sL::synapse0x35d9db0() {
   return (neuron0x35d7f70()*-1.57036);
}

double NNfunction_ns_chi02_sL::synapse0x35d9df0() {
   return (neuron0x35d82b0()*0.599635);
}

double NNfunction_ns_chi02_sL::synapse0x35da0f0() {
   return (neuron0x35d85f0()*0.5198);
}

double NNfunction_ns_chi02_sL::synapse0x35da130() {
   return (neuron0x35d8930()*0.0802692);
}

double NNfunction_ns_chi02_sL::synapse0x35da430() {
   return (neuron0x35d8c70()*-1.32369);
}

double NNfunction_ns_chi02_sL::synapse0x35da470() {
   return (neuron0x35d8fb0()*0.204162);
}

double NNfunction_ns_chi02_sL::synapse0x35da770() {
   return (neuron0x35d9510()*-1.0494);
}

double NNfunction_ns_chi02_sL::synapse0x35da7b0() {
   return (neuron0x35d9850()*0.647325);
}

double NNfunction_ns_chi02_sL::synapse0x35daab0() {
   return (neuron0x35d9b90()*-0.182313);
}

double NNfunction_ns_chi02_sL::synapse0x35daaf0() {
   return (neuron0x35d9ed0()*-0.46619);
}

double NNfunction_ns_chi02_sL::synapse0x35d84d0() {
   return (neuron0x35da210()*0.974568);
}

double NNfunction_ns_chi02_sL::synapse0x35d8510() {
   return (neuron0x35da550()*0.158223);
}

double NNfunction_ns_chi02_sL::synapse0x35e78c0() {
   return (neuron0x35da890()*-1.08404);
}

double NNfunction_ns_chi02_sL::synapse0x35e7c40() {
   return (neuron0x35d5c40()*-0.803073);
}

double NNfunction_ns_chi02_sL::synapse0x35e7c80() {
   return (neuron0x35d5ef0()*0.170262);
}

double NNfunction_ns_chi02_sL::synapse0x35e7cc0() {
   return (neuron0x35d6230()*1.56934);
}

double NNfunction_ns_chi02_sL::synapse0x35e7d00() {
   return (neuron0x35d6570()*0.577035);
}

double NNfunction_ns_chi02_sL::synapse0x35e7d40() {
   return (neuron0x35d68b0()*0.335938);
}

double NNfunction_ns_chi02_sL::synapse0x35e7d80() {
   return (neuron0x35d6bf0()*0.620537);
}

double NNfunction_ns_chi02_sL::synapse0x35e7dc0() {
   return (neuron0x35d6f30()*0.199657);
}

double NNfunction_ns_chi02_sL::synapse0x35e7e00() {
   return (neuron0x35d7270()*0.517808);
}

double NNfunction_ns_chi02_sL::synapse0x35e7e40() {
   return (neuron0x35d75b0()*-0.756363);
}

double NNfunction_ns_chi02_sL::synapse0x35e7e80() {
   return (neuron0x35d78f0()*-0.900684);
}

double NNfunction_ns_chi02_sL::synapse0x35e7ec0() {
   return (neuron0x35d7c30()*0.801077);
}

double NNfunction_ns_chi02_sL::synapse0x35e7f00() {
   return (neuron0x35d7f70()*-0.591734);
}

double NNfunction_ns_chi02_sL::synapse0x35e7f40() {
   return (neuron0x35d82b0()*0.842229);
}

double NNfunction_ns_chi02_sL::synapse0x35e7f80() {
   return (neuron0x35d85f0()*-0.985715);
}

double NNfunction_ns_chi02_sL::synapse0x35e7fc0() {
   return (neuron0x35d8930()*-0.907591);
}

double NNfunction_ns_chi02_sL::synapse0x35e8000() {
   return (neuron0x35d8c70()*0.261077);
}

double NNfunction_ns_chi02_sL::synapse0x35e7a90() {
   return (neuron0x35d8fb0()*-0.187651);
}

double NNfunction_ns_chi02_sL::synapse0x35e7ad0() {
   return (neuron0x35d9510()*0.448432);
}

double NNfunction_ns_chi02_sL::synapse0x35e8150() {
   return (neuron0x35d9850()*0.837562);
}

double NNfunction_ns_chi02_sL::synapse0x35e8190() {
   return (neuron0x35d9b90()*1.07659);
}

double NNfunction_ns_chi02_sL::synapse0x35e81d0() {
   return (neuron0x35d9ed0()*0.00778872);
}

double NNfunction_ns_chi02_sL::synapse0x35e8210() {
   return (neuron0x35da210()*-0.563967);
}

double NNfunction_ns_chi02_sL::synapse0x35e8250() {
   return (neuron0x35da550()*0.777557);
}

double NNfunction_ns_chi02_sL::synapse0x35e8290() {
   return (neuron0x35da890()*-0.897199);
}

double NNfunction_ns_chi02_sL::synapse0x35e8610() {
   return (neuron0x35d5c40()*-0.00212054);
}

double NNfunction_ns_chi02_sL::synapse0x35e8650() {
   return (neuron0x35d5ef0()*-0.555122);
}

double NNfunction_ns_chi02_sL::synapse0x35e8690() {
   return (neuron0x35d6230()*0.104076);
}

double NNfunction_ns_chi02_sL::synapse0x35e86d0() {
   return (neuron0x35d6570()*0.858055);
}

double NNfunction_ns_chi02_sL::synapse0x35e8710() {
   return (neuron0x35d68b0()*0.0457505);
}

double NNfunction_ns_chi02_sL::synapse0x35e8750() {
   return (neuron0x35d6bf0()*0.898638);
}

double NNfunction_ns_chi02_sL::synapse0x35e8790() {
   return (neuron0x35d6f30()*0.00940767);
}

double NNfunction_ns_chi02_sL::synapse0x35e87d0() {
   return (neuron0x35d7270()*0.309606);
}

double NNfunction_ns_chi02_sL::synapse0x35e8810() {
   return (neuron0x35d75b0()*-0.42233);
}

double NNfunction_ns_chi02_sL::synapse0x35e8850() {
   return (neuron0x35d78f0()*-0.547829);
}

double NNfunction_ns_chi02_sL::synapse0x35e8890() {
   return (neuron0x35d7c30()*-0.0611181);
}

double NNfunction_ns_chi02_sL::synapse0x35e88d0() {
   return (neuron0x35d7f70()*-1.08556);
}

double NNfunction_ns_chi02_sL::synapse0x35e8910() {
   return (neuron0x35d82b0()*0.406969);
}

double NNfunction_ns_chi02_sL::synapse0x35e8950() {
   return (neuron0x35d85f0()*-0.816614);
}

double NNfunction_ns_chi02_sL::synapse0x35e8990() {
   return (neuron0x35d8930()*-0.709714);
}

double NNfunction_ns_chi02_sL::synapse0x35e89d0() {
   return (neuron0x35d8c70()*-0.257074);
}

double NNfunction_ns_chi02_sL::synapse0x35e8460() {
   return (neuron0x35d8fb0()*0.747022);
}

double NNfunction_ns_chi02_sL::synapse0x35e84a0() {
   return (neuron0x35d9510()*-0.454068);
}

double NNfunction_ns_chi02_sL::synapse0x35e8b20() {
   return (neuron0x35d9850()*0.305281);
}

double NNfunction_ns_chi02_sL::synapse0x35e8b60() {
   return (neuron0x35d9b90()*1.02145);
}

double NNfunction_ns_chi02_sL::synapse0x35e8ba0() {
   return (neuron0x35d9ed0()*-0.263285);
}

double NNfunction_ns_chi02_sL::synapse0x35e8be0() {
   return (neuron0x35da210()*0.236131);
}

double NNfunction_ns_chi02_sL::synapse0x35e8c20() {
   return (neuron0x35da550()*0.525085);
}

double NNfunction_ns_chi02_sL::synapse0x35e8c60() {
   return (neuron0x35da890()*-0.832179);
}

double NNfunction_ns_chi02_sL::synapse0x35e8fe0() {
   return (neuron0x35d5c40()*-0.419713);
}

double NNfunction_ns_chi02_sL::synapse0x35e9020() {
   return (neuron0x35d5ef0()*0.413181);
}

double NNfunction_ns_chi02_sL::synapse0x35e9060() {
   return (neuron0x35d6230()*0.694479);
}

double NNfunction_ns_chi02_sL::synapse0x35e90a0() {
   return (neuron0x35d6570()*0.419346);
}

double NNfunction_ns_chi02_sL::synapse0x35e90e0() {
   return (neuron0x35d68b0()*-0.316201);
}

double NNfunction_ns_chi02_sL::synapse0x35e9120() {
   return (neuron0x35d6bf0()*0.184464);
}

double NNfunction_ns_chi02_sL::synapse0x35e9160() {
   return (neuron0x35d6f30()*0.370197);
}

double NNfunction_ns_chi02_sL::synapse0x35e91a0() {
   return (neuron0x35d7270()*-0.113045);
}

double NNfunction_ns_chi02_sL::synapse0x35e91e0() {
   return (neuron0x35d75b0()*0.0917821);
}

double NNfunction_ns_chi02_sL::synapse0x35e9220() {
   return (neuron0x35d78f0()*-0.289373);
}

double NNfunction_ns_chi02_sL::synapse0x35e9260() {
   return (neuron0x35d7c30()*0.0513496);
}

double NNfunction_ns_chi02_sL::synapse0x35e92a0() {
   return (neuron0x35d7f70()*-0.13033);
}

double NNfunction_ns_chi02_sL::synapse0x35e92e0() {
   return (neuron0x35d82b0()*0.357425);
}

double NNfunction_ns_chi02_sL::synapse0x35e9320() {
   return (neuron0x35d85f0()*-0.130279);
}

double NNfunction_ns_chi02_sL::synapse0x35e9360() {
   return (neuron0x35d8930()*0.300331);
}

double NNfunction_ns_chi02_sL::synapse0x35e93a0() {
   return (neuron0x35d8c70()*-0.326162);
}

double NNfunction_ns_chi02_sL::synapse0x35e8e30() {
   return (neuron0x35d8fb0()*0.293281);
}

double NNfunction_ns_chi02_sL::synapse0x35e8e70() {
   return (neuron0x35d9510()*-0.22359);
}

double NNfunction_ns_chi02_sL::synapse0x35e94f0() {
   return (neuron0x35d9850()*-0.0784462);
}

double NNfunction_ns_chi02_sL::synapse0x35e9530() {
   return (neuron0x35d9b90()*-0.0526915);
}

double NNfunction_ns_chi02_sL::synapse0x35e9570() {
   return (neuron0x35d9ed0()*-0.0199725);
}

double NNfunction_ns_chi02_sL::synapse0x35e95b0() {
   return (neuron0x35da210()*0.114965);
}

double NNfunction_ns_chi02_sL::synapse0x35e95f0() {
   return (neuron0x35da550()*0.198522);
}

double NNfunction_ns_chi02_sL::synapse0x35e9630() {
   return (neuron0x35da890()*-0.990497);
}

double NNfunction_ns_chi02_sL::synapse0x35e99b0() {
   return (neuron0x35d5c40()*-0.0316867);
}

double NNfunction_ns_chi02_sL::synapse0x35e99f0() {
   return (neuron0x35d5ef0()*0.00058599);
}

double NNfunction_ns_chi02_sL::synapse0x35e9a30() {
   return (neuron0x35d6230()*0.0302923);
}

double NNfunction_ns_chi02_sL::synapse0x35e9a70() {
   return (neuron0x35d6570()*-0.694109);
}

double NNfunction_ns_chi02_sL::synapse0x35e9ab0() {
   return (neuron0x35d68b0()*-0.0264778);
}

double NNfunction_ns_chi02_sL::synapse0x35e9af0() {
   return (neuron0x35d6bf0()*-0.00752924);
}

double NNfunction_ns_chi02_sL::synapse0x35e9b30() {
   return (neuron0x35d6f30()*-0.00749335);
}

double NNfunction_ns_chi02_sL::synapse0x35e9b70() {
   return (neuron0x35d7270()*0.0511804);
}

double NNfunction_ns_chi02_sL::synapse0x35e9bb0() {
   return (neuron0x35d75b0()*0.0171925);
}

double NNfunction_ns_chi02_sL::synapse0x35e9bf0() {
   return (neuron0x35d78f0()*0.00874004);
}

double NNfunction_ns_chi02_sL::synapse0x35e9c30() {
   return (neuron0x35d7c30()*-0.0209609);
}

double NNfunction_ns_chi02_sL::synapse0x35e9c70() {
   return (neuron0x35d7f70()*0.0260363);
}

double NNfunction_ns_chi02_sL::synapse0x35e9cb0() {
   return (neuron0x35d82b0()*0.251968);
}

double NNfunction_ns_chi02_sL::synapse0x35e9cf0() {
   return (neuron0x35d85f0()*0.0164821);
}

double NNfunction_ns_chi02_sL::synapse0x35e9d30() {
   return (neuron0x35d8930()*0.0592352);
}

double NNfunction_ns_chi02_sL::synapse0x35e9d70() {
   return (neuron0x35d8c70()*-0.0266106);
}

double NNfunction_ns_chi02_sL::synapse0x35e9800() {
   return (neuron0x35d8fb0()*0.0192171);
}

double NNfunction_ns_chi02_sL::synapse0x35e9840() {
   return (neuron0x35d9510()*-0.00270739);
}

double NNfunction_ns_chi02_sL::synapse0x35e9ec0() {
   return (neuron0x35d9850()*-0.00129478);
}

double NNfunction_ns_chi02_sL::synapse0x35e9f00() {
   return (neuron0x35d9b90()*-0.0211119);
}

double NNfunction_ns_chi02_sL::synapse0x35e9f40() {
   return (neuron0x35d9ed0()*0.00798278);
}

double NNfunction_ns_chi02_sL::synapse0x35e9f80() {
   return (neuron0x35da210()*0.0126655);
}

double NNfunction_ns_chi02_sL::synapse0x35e9fc0() {
   return (neuron0x35da550()*0.00841231);
}

double NNfunction_ns_chi02_sL::synapse0x35ea000() {
   return (neuron0x35da890()*0.0269109);
}

double NNfunction_ns_chi02_sL::synapse0x35ea380() {
   return (neuron0x35d5c40()*0.00813168);
}

double NNfunction_ns_chi02_sL::synapse0x35ea3c0() {
   return (neuron0x35d5ef0()*-0.00615371);
}

double NNfunction_ns_chi02_sL::synapse0x35ea400() {
   return (neuron0x35d6230()*0.119976);
}

double NNfunction_ns_chi02_sL::synapse0x35ea440() {
   return (neuron0x35d6570()*-0.788871);
}

double NNfunction_ns_chi02_sL::synapse0x35ea480() {
   return (neuron0x35d68b0()*0.00439893);
}

double NNfunction_ns_chi02_sL::synapse0x35ea4c0() {
   return (neuron0x35d6bf0()*-0.00242671);
}

double NNfunction_ns_chi02_sL::synapse0x35ea500() {
   return (neuron0x35d6f30()*0.00799489);
}

double NNfunction_ns_chi02_sL::synapse0x35ea540() {
   return (neuron0x35d7270()*-0.00966618);
}

double NNfunction_ns_chi02_sL::synapse0x35ea580() {
   return (neuron0x35d75b0()*0.00108254);
}

double NNfunction_ns_chi02_sL::synapse0x35e2740() {
   return (neuron0x35d78f0()*-0.00438927);
}

double NNfunction_ns_chi02_sL::synapse0x35e2780() {
   return (neuron0x35d7c30()*-0.00655459);
}

double NNfunction_ns_chi02_sL::synapse0x35e27c0() {
   return (neuron0x35d7f70()*-0.00245675);
}

double NNfunction_ns_chi02_sL::synapse0x35e2800() {
   return (neuron0x35d82b0()*-0.591319);
}

double NNfunction_ns_chi02_sL::synapse0x35e2840() {
   return (neuron0x35d85f0()*-0.0133175);
}

double NNfunction_ns_chi02_sL::synapse0x35e2880() {
   return (neuron0x35d8930()*-0.0112772);
}

double NNfunction_ns_chi02_sL::synapse0x35e28c0() {
   return (neuron0x35d8c70()*0.0228519);
}

double NNfunction_ns_chi02_sL::synapse0x35ea1d0() {
   return (neuron0x35d8fb0()*-0.00949725);
}

double NNfunction_ns_chi02_sL::synapse0x35ea210() {
   return (neuron0x35d9510()*0.0234088);
}

double NNfunction_ns_chi02_sL::synapse0x35e2a10() {
   return (neuron0x35d9850()*-0.000698213);
}

double NNfunction_ns_chi02_sL::synapse0x35e2a50() {
   return (neuron0x35d9b90()*0.0197758);
}

double NNfunction_ns_chi02_sL::synapse0x35e2a90() {
   return (neuron0x35d9ed0()*0.00769912);
}

double NNfunction_ns_chi02_sL::synapse0x35e2ad0() {
   return (neuron0x35da210()*-0.0134107);
}

double NNfunction_ns_chi02_sL::synapse0x35e2b10() {
   return (neuron0x35da550()*-0.00509716);
}

double NNfunction_ns_chi02_sL::synapse0x35e2b50() {
   return (neuron0x35da890()*-0.0213579);
}

double NNfunction_ns_chi02_sL::synapse0x35e2ed0() {
   return (neuron0x35d5c40()*0.0553023);
}

double NNfunction_ns_chi02_sL::synapse0x35e2f10() {
   return (neuron0x35d5ef0()*-1.64791);
}

double NNfunction_ns_chi02_sL::synapse0x35e2f50() {
   return (neuron0x35d6230()*-0.997697);
}

double NNfunction_ns_chi02_sL::synapse0x35e2f90() {
   return (neuron0x35d6570()*0.304415);
}

double NNfunction_ns_chi02_sL::synapse0x35e2fd0() {
   return (neuron0x35d68b0()*0.0144609);
}

double NNfunction_ns_chi02_sL::synapse0x35e3010() {
   return (neuron0x35d6bf0()*1.22502);
}

double NNfunction_ns_chi02_sL::synapse0x35e3050() {
   return (neuron0x35d6f30()*1.06968);
}

double NNfunction_ns_chi02_sL::synapse0x35e3090() {
   return (neuron0x35d7270()*0.602305);
}

double NNfunction_ns_chi02_sL::synapse0x35e30d0() {
   return (neuron0x35d75b0()*0.194547);
}

double NNfunction_ns_chi02_sL::synapse0x35e3110() {
   return (neuron0x35d78f0()*-0.290467);
}

double NNfunction_ns_chi02_sL::synapse0x35e3150() {
   return (neuron0x35d7c30()*0.0966807);
}

double NNfunction_ns_chi02_sL::synapse0x35e3190() {
   return (neuron0x35d7f70()*-0.267721);
}

double NNfunction_ns_chi02_sL::synapse0x35e31d0() {
   return (neuron0x35d82b0()*0.0343473);
}

double NNfunction_ns_chi02_sL::synapse0x35e3210() {
   return (neuron0x35d85f0()*-1.42587);
}

double NNfunction_ns_chi02_sL::synapse0x35e3250() {
   return (neuron0x35d8930()*0.943193);
}

double NNfunction_ns_chi02_sL::synapse0x35e3290() {
   return (neuron0x35d8c70()*-0.497953);
}

double NNfunction_ns_chi02_sL::synapse0x35e2d20() {
   return (neuron0x35d8fb0()*-1.12519);
}

double NNfunction_ns_chi02_sL::synapse0x35e2d60() {
   return (neuron0x35d9510()*-0.450405);
}

double NNfunction_ns_chi02_sL::synapse0x35e33e0() {
   return (neuron0x35d9850()*0.00399527);
}

double NNfunction_ns_chi02_sL::synapse0x35e3420() {
   return (neuron0x35d9b90()*-0.793651);
}

double NNfunction_ns_chi02_sL::synapse0x35e3460() {
   return (neuron0x35d9ed0()*-0.221978);
}

double NNfunction_ns_chi02_sL::synapse0x35e34a0() {
   return (neuron0x35da210()*-0.130476);
}

double NNfunction_ns_chi02_sL::synapse0x35e34e0() {
   return (neuron0x35da550()*1.05678);
}

double NNfunction_ns_chi02_sL::synapse0x35e3520() {
   return (neuron0x35da890()*-1.3569);
}

double NNfunction_ns_chi02_sL::synapse0x35e36f0() {
   return (neuron0x35d5c40()*0.0608758);
}

double NNfunction_ns_chi02_sL::synapse0x35ec780() {
   return (neuron0x35d5ef0()*-0.948181);
}

double NNfunction_ns_chi02_sL::synapse0x35ec7c0() {
   return (neuron0x35d6230()*-1.51038);
}

double NNfunction_ns_chi02_sL::synapse0x35ec800() {
   return (neuron0x35d6570()*0.150285);
}

double NNfunction_ns_chi02_sL::synapse0x35ec840() {
   return (neuron0x35d68b0()*0.963019);
}

double NNfunction_ns_chi02_sL::synapse0x35ec880() {
   return (neuron0x35d6bf0()*0.00320781);
}

double NNfunction_ns_chi02_sL::synapse0x35ec8c0() {
   return (neuron0x35d6f30()*-0.506993);
}

double NNfunction_ns_chi02_sL::synapse0x35ec900() {
   return (neuron0x35d7270()*-1.11801);
}

double NNfunction_ns_chi02_sL::synapse0x35ec940() {
   return (neuron0x35d75b0()*0.294783);
}

double NNfunction_ns_chi02_sL::synapse0x35ec980() {
   return (neuron0x35d78f0()*-0.288351);
}

double NNfunction_ns_chi02_sL::synapse0x35ec9c0() {
   return (neuron0x35d7c30()*0.501178);
}

double NNfunction_ns_chi02_sL::synapse0x35eca00() {
   return (neuron0x35d7f70()*-0.0397442);
}

double NNfunction_ns_chi02_sL::synapse0x35eca40() {
   return (neuron0x35d82b0()*0.780662);
}

double NNfunction_ns_chi02_sL::synapse0x35eca80() {
   return (neuron0x35d85f0()*-1.15775);
}

double NNfunction_ns_chi02_sL::synapse0x35ecac0() {
   return (neuron0x35d8930()*0.148214);
}

double NNfunction_ns_chi02_sL::synapse0x35ecb00() {
   return (neuron0x35d8c70()*-0.466543);
}

double NNfunction_ns_chi02_sL::synapse0x35ec5d0() {
   return (neuron0x35d8fb0()*0.871856);
}

double NNfunction_ns_chi02_sL::synapse0x35ec610() {
   return (neuron0x35d9510()*0.113579);
}

double NNfunction_ns_chi02_sL::synapse0x35ecc50() {
   return (neuron0x35d9850()*-0.678561);
}

double NNfunction_ns_chi02_sL::synapse0x35ecc90() {
   return (neuron0x35d9b90()*-0.669156);
}

double NNfunction_ns_chi02_sL::synapse0x35eccd0() {
   return (neuron0x35d9ed0()*0.729388);
}

double NNfunction_ns_chi02_sL::synapse0x35ecd10() {
   return (neuron0x35da210()*-0.173944);
}

double NNfunction_ns_chi02_sL::synapse0x35ecd50() {
   return (neuron0x35da550()*0.263351);
}

double NNfunction_ns_chi02_sL::synapse0x35ecd90() {
   return (neuron0x35da890()*0.604781);
}

double NNfunction_ns_chi02_sL::synapse0x35ed110() {
   return (neuron0x35d5c40()*-0.129966);
}

double NNfunction_ns_chi02_sL::synapse0x35ed150() {
   return (neuron0x35d5ef0()*-0.663668);
}

double NNfunction_ns_chi02_sL::synapse0x35ed190() {
   return (neuron0x35d6230()*-0.758936);
}

double NNfunction_ns_chi02_sL::synapse0x35ed1d0() {
   return (neuron0x35d6570()*-0.519531);
}

double NNfunction_ns_chi02_sL::synapse0x35ed210() {
   return (neuron0x35d68b0()*-0.112535);
}

double NNfunction_ns_chi02_sL::synapse0x35ed250() {
   return (neuron0x35d6bf0()*0.451365);
}

double NNfunction_ns_chi02_sL::synapse0x35ed290() {
   return (neuron0x35d6f30()*0.224299);
}

double NNfunction_ns_chi02_sL::synapse0x35ed2d0() {
   return (neuron0x35d7270()*0.30257);
}

double NNfunction_ns_chi02_sL::synapse0x35ed310() {
   return (neuron0x35d75b0()*-0.66131);
}

double NNfunction_ns_chi02_sL::synapse0x35ed350() {
   return (neuron0x35d78f0()*0.415528);
}

double NNfunction_ns_chi02_sL::synapse0x35ed390() {
   return (neuron0x35d7c30()*0.767422);
}

double NNfunction_ns_chi02_sL::synapse0x35ed3d0() {
   return (neuron0x35d7f70()*-0.178513);
}

double NNfunction_ns_chi02_sL::synapse0x35ed410() {
   return (neuron0x35d82b0()*0.395236);
}

double NNfunction_ns_chi02_sL::synapse0x35ed450() {
   return (neuron0x35d85f0()*0.223741);
}

double NNfunction_ns_chi02_sL::synapse0x35ed490() {
   return (neuron0x35d8930()*-0.819494);
}

double NNfunction_ns_chi02_sL::synapse0x35ed4d0() {
   return (neuron0x35d8c70()*-0.801368);
}

double NNfunction_ns_chi02_sL::synapse0x35ecf60() {
   return (neuron0x35d8fb0()*0.301461);
}

double NNfunction_ns_chi02_sL::synapse0x35ecfa0() {
   return (neuron0x35d9510()*0.360225);
}

double NNfunction_ns_chi02_sL::synapse0x35ed620() {
   return (neuron0x35d9850()*0.8649);
}

double NNfunction_ns_chi02_sL::synapse0x35ed660() {
   return (neuron0x35d9b90()*0.601321);
}

double NNfunction_ns_chi02_sL::synapse0x35ed6a0() {
   return (neuron0x35d9ed0()*0.947024);
}

double NNfunction_ns_chi02_sL::synapse0x35ed6e0() {
   return (neuron0x35da210()*0.400256);
}

double NNfunction_ns_chi02_sL::synapse0x35ed720() {
   return (neuron0x35da550()*-0.271033);
}

double NNfunction_ns_chi02_sL::synapse0x35ed760() {
   return (neuron0x35da890()*2.08149);
}

double NNfunction_ns_chi02_sL::synapse0x35edae0() {
   return (neuron0x35d5c40()*-0.0918557);
}

double NNfunction_ns_chi02_sL::synapse0x35edb20() {
   return (neuron0x35d5ef0()*0.0525435);
}

double NNfunction_ns_chi02_sL::synapse0x35edb60() {
   return (neuron0x35d6230()*0.126987);
}

double NNfunction_ns_chi02_sL::synapse0x35edba0() {
   return (neuron0x35d6570()*0.0705777);
}

double NNfunction_ns_chi02_sL::synapse0x35edbe0() {
   return (neuron0x35d68b0()*-0.00264961);
}

double NNfunction_ns_chi02_sL::synapse0x35edc20() {
   return (neuron0x35d6bf0()*-0.249723);
}

double NNfunction_ns_chi02_sL::synapse0x35edc60() {
   return (neuron0x35d6f30()*-0.00152146);
}

double NNfunction_ns_chi02_sL::synapse0x35edca0() {
   return (neuron0x35d7270()*0.273547);
}

double NNfunction_ns_chi02_sL::synapse0x35edce0() {
   return (neuron0x35d75b0()*-0.057521);
}

double NNfunction_ns_chi02_sL::synapse0x35edd20() {
   return (neuron0x35d78f0()*-0.0766127);
}

double NNfunction_ns_chi02_sL::synapse0x35edd60() {
   return (neuron0x35d7c30()*-0.0659867);
}

double NNfunction_ns_chi02_sL::synapse0x35edda0() {
   return (neuron0x35d7f70()*0.0908856);
}

double NNfunction_ns_chi02_sL::synapse0x35edde0() {
   return (neuron0x35d82b0()*-0.0533988);
}

double NNfunction_ns_chi02_sL::synapse0x35ede20() {
   return (neuron0x35d85f0()*0.0673444);
}

double NNfunction_ns_chi02_sL::synapse0x35ede60() {
   return (neuron0x35d8930()*-0.39149);
}

double NNfunction_ns_chi02_sL::synapse0x35edea0() {
   return (neuron0x35d8c70()*-0.430972);
}

double NNfunction_ns_chi02_sL::synapse0x35ed930() {
   return (neuron0x35d8fb0()*0.0511826);
}

double NNfunction_ns_chi02_sL::synapse0x35ed970() {
   return (neuron0x35d9510()*-0.052958);
}

double NNfunction_ns_chi02_sL::synapse0x35edff0() {
   return (neuron0x35d9850()*-0.00481802);
}

double NNfunction_ns_chi02_sL::synapse0x35ee030() {
   return (neuron0x35d9b90()*-0.0492045);
}

double NNfunction_ns_chi02_sL::synapse0x35ee070() {
   return (neuron0x35d9ed0()*0.0630533);
}

double NNfunction_ns_chi02_sL::synapse0x35ee0b0() {
   return (neuron0x35da210()*0.0812615);
}

double NNfunction_ns_chi02_sL::synapse0x35ee0f0() {
   return (neuron0x35da550()*-0.00602178);
}

double NNfunction_ns_chi02_sL::synapse0x35ee130() {
   return (neuron0x35da890()*-0.0256907);
}

double NNfunction_ns_chi02_sL::synapse0x35ee4b0() {
   return (neuron0x35d5c40()*0.0201994);
}

double NNfunction_ns_chi02_sL::synapse0x35ee4f0() {
   return (neuron0x35d5ef0()*0.0899059);
}

double NNfunction_ns_chi02_sL::synapse0x35ee530() {
   return (neuron0x35d6230()*1.2803);
}

double NNfunction_ns_chi02_sL::synapse0x35ee570() {
   return (neuron0x35d6570()*0.765496);
}

double NNfunction_ns_chi02_sL::synapse0x35ee5b0() {
   return (neuron0x35d68b0()*0.453762);
}

double NNfunction_ns_chi02_sL::synapse0x35ee5f0() {
   return (neuron0x35d6bf0()*0.712255);
}

double NNfunction_ns_chi02_sL::synapse0x35ee630() {
   return (neuron0x35d6f30()*-0.580847);
}

double NNfunction_ns_chi02_sL::synapse0x35ee670() {
   return (neuron0x35d7270()*0.386888);
}

double NNfunction_ns_chi02_sL::synapse0x35ee6b0() {
   return (neuron0x35d75b0()*0.265207);
}

double NNfunction_ns_chi02_sL::synapse0x35ee6f0() {
   return (neuron0x35d78f0()*-0.880499);
}

double NNfunction_ns_chi02_sL::synapse0x35ee730() {
   return (neuron0x35d7c30()*-0.614035);
}

double NNfunction_ns_chi02_sL::synapse0x35ee770() {
   return (neuron0x35d7f70()*-0.497245);
}

double NNfunction_ns_chi02_sL::synapse0x35ee7b0() {
   return (neuron0x35d82b0()*-0.206982);
}

double NNfunction_ns_chi02_sL::synapse0x35ee7f0() {
   return (neuron0x35d85f0()*-0.487187);
}

double NNfunction_ns_chi02_sL::synapse0x35ee830() {
   return (neuron0x35d8930()*-0.751613);
}

double NNfunction_ns_chi02_sL::synapse0x35ee870() {
   return (neuron0x35d8c70()*1.88724);
}

double NNfunction_ns_chi02_sL::synapse0x35ee300() {
   return (neuron0x35d8fb0()*-0.634727);
}

double NNfunction_ns_chi02_sL::synapse0x35ee340() {
   return (neuron0x35d9510()*0.844395);
}

double NNfunction_ns_chi02_sL::synapse0x35ee9c0() {
   return (neuron0x35d9850()*-0.850436);
}

double NNfunction_ns_chi02_sL::synapse0x35eea00() {
   return (neuron0x35d9b90()*-0.394858);
}

double NNfunction_ns_chi02_sL::synapse0x35eea40() {
   return (neuron0x35d9ed0()*-0.148199);
}

double NNfunction_ns_chi02_sL::synapse0x35eea80() {
   return (neuron0x35da210()*0.0304478);
}

double NNfunction_ns_chi02_sL::synapse0x35eeac0() {
   return (neuron0x35da550()*-0.375464);
}

double NNfunction_ns_chi02_sL::synapse0x35eeb00() {
   return (neuron0x35da890()*0.828889);
}

double NNfunction_ns_chi02_sL::synapse0x35eee80() {
   return (neuron0x35d5c40()*-0.0339975);
}

double NNfunction_ns_chi02_sL::synapse0x35eeec0() {
   return (neuron0x35d5ef0()*-0.0186785);
}

double NNfunction_ns_chi02_sL::synapse0x35eef00() {
   return (neuron0x35d6230()*0.40029);
}

double NNfunction_ns_chi02_sL::synapse0x35eef40() {
   return (neuron0x35d6570()*0.666779);
}

double NNfunction_ns_chi02_sL::synapse0x35eef80() {
   return (neuron0x35d68b0()*-0.0538309);
}

double NNfunction_ns_chi02_sL::synapse0x35eefc0() {
   return (neuron0x35d6bf0()*-0.0172074);
}

double NNfunction_ns_chi02_sL::synapse0x35ef000() {
   return (neuron0x35d6f30()*-0.015059);
}

double NNfunction_ns_chi02_sL::synapse0x35ef040() {
   return (neuron0x35d7270()*0.0798004);
}

double NNfunction_ns_chi02_sL::synapse0x35ef080() {
   return (neuron0x35d75b0()*0.0400949);
}

double NNfunction_ns_chi02_sL::synapse0x35ef0c0() {
   return (neuron0x35d78f0()*0.0178818);
}

double NNfunction_ns_chi02_sL::synapse0x35ef100() {
   return (neuron0x35d7c30()*-0.0476072);
}

double NNfunction_ns_chi02_sL::synapse0x35ef140() {
   return (neuron0x35d7f70()*0.0373313);
}

double NNfunction_ns_chi02_sL::synapse0x35ef180() {
   return (neuron0x35d82b0()*-0.402891);
}

double NNfunction_ns_chi02_sL::synapse0x35ef1c0() {
   return (neuron0x35d85f0()*0.0350799);
}

double NNfunction_ns_chi02_sL::synapse0x35ef200() {
   return (neuron0x35d8930()*0.0937164);
}

double NNfunction_ns_chi02_sL::synapse0x35ef240() {
   return (neuron0x35d8c70()*-0.000314244);
}

double NNfunction_ns_chi02_sL::synapse0x35eecd0() {
   return (neuron0x35d8fb0()*-0.0130537);
}

double NNfunction_ns_chi02_sL::synapse0x35eed10() {
   return (neuron0x35d9510()*0.0227615);
}

double NNfunction_ns_chi02_sL::synapse0x35ef390() {
   return (neuron0x35d9850()*-0.0138572);
}

double NNfunction_ns_chi02_sL::synapse0x35ef3d0() {
   return (neuron0x35d9b90()*-0.00772189);
}

double NNfunction_ns_chi02_sL::synapse0x35ef410() {
   return (neuron0x35d9ed0()*0.0279938);
}

double NNfunction_ns_chi02_sL::synapse0x35ef450() {
   return (neuron0x35da210()*-0.0162448);
}

double NNfunction_ns_chi02_sL::synapse0x35ef490() {
   return (neuron0x35da550()*-0.000596086);
}

double NNfunction_ns_chi02_sL::synapse0x35ef4d0() {
   return (neuron0x35da890()*0.0568878);
}

double NNfunction_ns_chi02_sL::synapse0x35ef850() {
   return (neuron0x35d5c40()*-0.0202003);
}

double NNfunction_ns_chi02_sL::synapse0x35ef890() {
   return (neuron0x35d5ef0()*-13.6142);
}

double NNfunction_ns_chi02_sL::synapse0x35ef8d0() {
   return (neuron0x35d6230()*-1.43301);
}

double NNfunction_ns_chi02_sL::synapse0x35ef910() {
   return (neuron0x35d6570()*0.0212775);
}

double NNfunction_ns_chi02_sL::synapse0x35ef950() {
   return (neuron0x35d68b0()*-0.031534);
}

double NNfunction_ns_chi02_sL::synapse0x35ef990() {
   return (neuron0x35d6bf0()*0.00278103);
}

double NNfunction_ns_chi02_sL::synapse0x35ef9d0() {
   return (neuron0x35d6f30()*0.0155963);
}

double NNfunction_ns_chi02_sL::synapse0x35efa10() {
   return (neuron0x35d7270()*-0.0123983);
}

double NNfunction_ns_chi02_sL::synapse0x35efa50() {
   return (neuron0x35d75b0()*-0.00127386);
}

double NNfunction_ns_chi02_sL::synapse0x35efa90() {
   return (neuron0x35d78f0()*-0.00875002);
}

double NNfunction_ns_chi02_sL::synapse0x35efad0() {
   return (neuron0x35d7c30()*0.013865);
}

double NNfunction_ns_chi02_sL::synapse0x35efb10() {
   return (neuron0x35d7f70()*-0.016131);
}

double NNfunction_ns_chi02_sL::synapse0x35efb50() {
   return (neuron0x35d82b0()*-0.450222);
}

double NNfunction_ns_chi02_sL::synapse0x35efb90() {
   return (neuron0x35d85f0()*-0.0123465);
}

double NNfunction_ns_chi02_sL::synapse0x35efbd0() {
   return (neuron0x35d8930()*0.0168571);
}

double NNfunction_ns_chi02_sL::synapse0x35efc10() {
   return (neuron0x35d8c70()*0.00815356);
}

double NNfunction_ns_chi02_sL::synapse0x35ef6a0() {
   return (neuron0x35d8fb0()*0.0164503);
}

double NNfunction_ns_chi02_sL::synapse0x35ef6e0() {
   return (neuron0x35d9510()*-0.00233182);
}

double NNfunction_ns_chi02_sL::synapse0x35efd60() {
   return (neuron0x35d9850()*-0.00527322);
}

double NNfunction_ns_chi02_sL::synapse0x35efda0() {
   return (neuron0x35d9b90()*-0.00542941);
}

double NNfunction_ns_chi02_sL::synapse0x35efde0() {
   return (neuron0x35d9ed0()*0.00957701);
}

double NNfunction_ns_chi02_sL::synapse0x35efe20() {
   return (neuron0x35da210()*-0.0103516);
}

double NNfunction_ns_chi02_sL::synapse0x35efe60() {
   return (neuron0x35da550()*0.0260948);
}

double NNfunction_ns_chi02_sL::synapse0x35efea0() {
   return (neuron0x35da890()*0.0150366);
}

double NNfunction_ns_chi02_sL::synapse0x35f0220() {
   return (neuron0x35d5c40()*0.23757);
}

double NNfunction_ns_chi02_sL::synapse0x35f0260() {
   return (neuron0x35d5ef0()*0.712998);
}

double NNfunction_ns_chi02_sL::synapse0x35f02a0() {
   return (neuron0x35d6230()*0.0207942);
}

double NNfunction_ns_chi02_sL::synapse0x35f02e0() {
   return (neuron0x35d6570()*-0.757775);
}

double NNfunction_ns_chi02_sL::synapse0x35f0320() {
   return (neuron0x35d68b0()*0.893828);
}

double NNfunction_ns_chi02_sL::synapse0x35f0360() {
   return (neuron0x35d6bf0()*0.728214);
}

double NNfunction_ns_chi02_sL::synapse0x35f03a0() {
   return (neuron0x35d6f30()*-0.836555);
}

double NNfunction_ns_chi02_sL::synapse0x35f03e0() {
   return (neuron0x35d7270()*0.781112);
}

double NNfunction_ns_chi02_sL::synapse0x35f0420() {
   return (neuron0x35d75b0()*-0.246142);
}

double NNfunction_ns_chi02_sL::synapse0x35f0460() {
   return (neuron0x35d78f0()*-0.856383);
}

double NNfunction_ns_chi02_sL::synapse0x35f04a0() {
   return (neuron0x35d7c30()*-0.0981497);
}

double NNfunction_ns_chi02_sL::synapse0x35f04e0() {
   return (neuron0x35d7f70()*-0.542391);
}

double NNfunction_ns_chi02_sL::synapse0x35f0520() {
   return (neuron0x35d82b0()*-1.36895);
}

double NNfunction_ns_chi02_sL::synapse0x35f0560() {
   return (neuron0x35d85f0()*-0.558386);
}

double NNfunction_ns_chi02_sL::synapse0x35f05a0() {
   return (neuron0x35d8930()*0.0390576);
}

double NNfunction_ns_chi02_sL::synapse0x35f05e0() {
   return (neuron0x35d8c70()*0.140686);
}

double NNfunction_ns_chi02_sL::synapse0x35f0070() {
   return (neuron0x35d8fb0()*-0.220442);
}

double NNfunction_ns_chi02_sL::synapse0x35f00b0() {
   return (neuron0x35d9510()*0.324027);
}

double NNfunction_ns_chi02_sL::synapse0x35f0730() {
   return (neuron0x35d9850()*-0.780026);
}

double NNfunction_ns_chi02_sL::synapse0x35f0770() {
   return (neuron0x35d9b90()*-0.291633);
}

double NNfunction_ns_chi02_sL::synapse0x35f07b0() {
   return (neuron0x35d9ed0()*-0.645406);
}

double NNfunction_ns_chi02_sL::synapse0x35f07f0() {
   return (neuron0x35da210()*-0.251738);
}

double NNfunction_ns_chi02_sL::synapse0x35f0830() {
   return (neuron0x35da550()*-0.401815);
}

double NNfunction_ns_chi02_sL::synapse0x35f0870() {
   return (neuron0x35da890()*2.69674);
}

double NNfunction_ns_chi02_sL::synapse0x35f0bf0() {
   return (neuron0x35d5c40()*-0.729634);
}

double NNfunction_ns_chi02_sL::synapse0x35f0c30() {
   return (neuron0x35d5ef0()*0.0579306);
}

double NNfunction_ns_chi02_sL::synapse0x35f0c70() {
   return (neuron0x35d6230()*0.789803);
}

double NNfunction_ns_chi02_sL::synapse0x35f0cb0() {
   return (neuron0x35d6570()*-0.998792);
}

double NNfunction_ns_chi02_sL::synapse0x35f0cf0() {
   return (neuron0x35d68b0()*0.0113682);
}

double NNfunction_ns_chi02_sL::synapse0x35f0d30() {
   return (neuron0x35d6bf0()*0.0127488);
}

double NNfunction_ns_chi02_sL::synapse0x35f0d70() {
   return (neuron0x35d6f30()*-0.827891);
}

double NNfunction_ns_chi02_sL::synapse0x35f0db0() {
   return (neuron0x35d7270()*-0.295466);
}

double NNfunction_ns_chi02_sL::synapse0x35f0df0() {
   return (neuron0x35d75b0()*1.25772);
}

double NNfunction_ns_chi02_sL::synapse0x35f0e30() {
   return (neuron0x35d78f0()*0.59492);
}

double NNfunction_ns_chi02_sL::synapse0x35f0e70() {
   return (neuron0x35d7c30()*0.85261);
}

double NNfunction_ns_chi02_sL::synapse0x35f0eb0() {
   return (neuron0x35d7f70()*-0.768949);
}

double NNfunction_ns_chi02_sL::synapse0x35f0ef0() {
   return (neuron0x35d82b0()*0.0134635);
}

double NNfunction_ns_chi02_sL::synapse0x35f0f30() {
   return (neuron0x35d85f0()*0.620283);
}

double NNfunction_ns_chi02_sL::synapse0x35f0f70() {
   return (neuron0x35d8930()*0.905992);
}

double NNfunction_ns_chi02_sL::synapse0x35f0fb0() {
   return (neuron0x35d8c70()*-0.0210895);
}

double NNfunction_ns_chi02_sL::synapse0x35f0a40() {
   return (neuron0x35d8fb0()*-0.306108);
}

double NNfunction_ns_chi02_sL::synapse0x35f0a80() {
   return (neuron0x35d9510()*0.271754);
}

double NNfunction_ns_chi02_sL::synapse0x35f1100() {
   return (neuron0x35d9850()*0.0839944);
}

double NNfunction_ns_chi02_sL::synapse0x35f1140() {
   return (neuron0x35d9b90()*-1.19874);
}

double NNfunction_ns_chi02_sL::synapse0x35f1180() {
   return (neuron0x35d9ed0()*-0.511869);
}

double NNfunction_ns_chi02_sL::synapse0x35f11c0() {
   return (neuron0x35da210()*-0.936362);
}

double NNfunction_ns_chi02_sL::synapse0x35f1200() {
   return (neuron0x35da550()*0.0891663);
}

double NNfunction_ns_chi02_sL::synapse0x35f1240() {
   return (neuron0x35da890()*1.06832);
}

double NNfunction_ns_chi02_sL::synapse0x35f15c0() {
   return (neuron0x35d5c40()*0.480582);
}

double NNfunction_ns_chi02_sL::synapse0x35e5b90() {
   return (neuron0x35d5ef0()*0.163149);
}

double NNfunction_ns_chi02_sL::synapse0x35e5bd0() {
   return (neuron0x35d6230()*-1.33518);
}

double NNfunction_ns_chi02_sL::synapse0x35e5c10() {
   return (neuron0x35d6570()*-1.04397);
}

double NNfunction_ns_chi02_sL::synapse0x35e5e60() {
   return (neuron0x35d68b0()*-0.29153);
}

double NNfunction_ns_chi02_sL::synapse0x35e5ea0() {
   return (neuron0x35d6bf0()*-0.376337);
}

double NNfunction_ns_chi02_sL::synapse0x35e5ee0() {
   return (neuron0x35d6f30()*-0.883859);
}

double NNfunction_ns_chi02_sL::synapse0x35e6130() {
   return (neuron0x35d7270()*-0.765672);
}

double NNfunction_ns_chi02_sL::synapse0x35e6170() {
   return (neuron0x35d75b0()*0.633843);
}

double NNfunction_ns_chi02_sL::synapse0x35e63c0() {
   return (neuron0x35d78f0()*0.863621);
}

double NNfunction_ns_chi02_sL::synapse0x35e6400() {
   return (neuron0x35d7c30()*-0.0440615);
}

double NNfunction_ns_chi02_sL::synapse0x35e6440() {
   return (neuron0x35d7f70()*-0.88532);
}

double NNfunction_ns_chi02_sL::synapse0x35e6690() {
   return (neuron0x35d82b0()*1.67794);
}

double NNfunction_ns_chi02_sL::synapse0x35e66d0() {
   return (neuron0x35d85f0()*0.449777);
}

double NNfunction_ns_chi02_sL::synapse0x35e6920() {
   return (neuron0x35d8930()*0.798614);
}

double NNfunction_ns_chi02_sL::synapse0x35e6960() {
   return (neuron0x35d8c70()*-0.380303);
}

double NNfunction_ns_chi02_sL::synapse0x35f1410() {
   return (neuron0x35d8fb0()*0.528955);
}

double NNfunction_ns_chi02_sL::synapse0x35f1450() {
   return (neuron0x35d9510()*-0.773897);
}

double NNfunction_ns_chi02_sL::synapse0x35e6ab0() {
   return (neuron0x35d9850()*0.208943);
}

double NNfunction_ns_chi02_sL::synapse0x35e6fc0() {
   return (neuron0x35d9b90()*-1.40159);
}

double NNfunction_ns_chi02_sL::synapse0x35e7000() {
   return (neuron0x35d9ed0()*-0.332616);
}

double NNfunction_ns_chi02_sL::synapse0x35e7040() {
   return (neuron0x35da210()*-0.285698);
}

double NNfunction_ns_chi02_sL::synapse0x35e7290() {
   return (neuron0x35da550()*0.246182);
}

double NNfunction_ns_chi02_sL::synapse0x35e72d0() {
   return (neuron0x35da890()*-0.993007);
}

double NNfunction_ns_chi02_sL::synapse0x35e6b80() {
   return (neuron0x35d5c40()*0.0139379);
}

double NNfunction_ns_chi02_sL::synapse0x35e6bc0() {
   return (neuron0x35d5ef0()*-7.43498);
}

double NNfunction_ns_chi02_sL::synapse0x35e6c00() {
   return (neuron0x35d6230()*-4.32405);
}

double NNfunction_ns_chi02_sL::synapse0x35e6c40() {
   return (neuron0x35d6570()*-0.0975001);
}

double NNfunction_ns_chi02_sL::synapse0x35e75c0() {
   return (neuron0x35d68b0()*-0.000115375);
}

double NNfunction_ns_chi02_sL::synapse0x35f3910() {
   return (neuron0x35d6bf0()*-0.0240854);
}

double NNfunction_ns_chi02_sL::synapse0x35f3950() {
   return (neuron0x35d6f30()*-0.0216424);
}

double NNfunction_ns_chi02_sL::synapse0x35f3990() {
   return (neuron0x35d7270()*0.00953698);
}

double NNfunction_ns_chi02_sL::synapse0x35f39d0() {
   return (neuron0x35d75b0()*-0.0286221);
}

double NNfunction_ns_chi02_sL::synapse0x35f3a10() {
   return (neuron0x35d78f0()*0.0423892);
}

double NNfunction_ns_chi02_sL::synapse0x35f3a50() {
   return (neuron0x35d7c30()*0.0203422);
}

double NNfunction_ns_chi02_sL::synapse0x35f3a90() {
   return (neuron0x35d7f70()*0.0172028);
}

double NNfunction_ns_chi02_sL::synapse0x35f3ad0() {
   return (neuron0x35d82b0()*-0.130063);
}

double NNfunction_ns_chi02_sL::synapse0x35f3b10() {
   return (neuron0x35d85f0()*-0.0454169);
}

double NNfunction_ns_chi02_sL::synapse0x35f3b50() {
   return (neuron0x35d8930()*-0.000988574);
}

double NNfunction_ns_chi02_sL::synapse0x35f3b90() {
   return (neuron0x35d8c70()*-0.0450972);
}

double NNfunction_ns_chi02_sL::synapse0x35e74a0() {
   return (neuron0x35d8fb0()*0.0136401);
}

double NNfunction_ns_chi02_sL::synapse0x35e74e0() {
   return (neuron0x35d9510()*0.0334798);
}

double NNfunction_ns_chi02_sL::synapse0x35f3ce0() {
   return (neuron0x35d9850()*0.0849632);
}

double NNfunction_ns_chi02_sL::synapse0x35f3d20() {
   return (neuron0x35d9b90()*-0.00432623);
}

double NNfunction_ns_chi02_sL::synapse0x35f3d60() {
   return (neuron0x35d9ed0()*0.0855063);
}

double NNfunction_ns_chi02_sL::synapse0x35f3da0() {
   return (neuron0x35da210()*0.0306255);
}

double NNfunction_ns_chi02_sL::synapse0x35f3de0() {
   return (neuron0x35da550()*-0.0130827);
}

double NNfunction_ns_chi02_sL::synapse0x35f3e20() {
   return (neuron0x35da890()*0.0944051);
}

double NNfunction_ns_chi02_sL::synapse0x35f41a0() {
   return (neuron0x35d5c40()*0.0296936);
}

double NNfunction_ns_chi02_sL::synapse0x35f41e0() {
   return (neuron0x35d5ef0()*0.00730025);
}

double NNfunction_ns_chi02_sL::synapse0x35f4220() {
   return (neuron0x35d6230()*-0.33509);
}

double NNfunction_ns_chi02_sL::synapse0x35f4260() {
   return (neuron0x35d6570()*-0.00718178);
}

double NNfunction_ns_chi02_sL::synapse0x35f42a0() {
   return (neuron0x35d68b0()*-0.0403273);
}

double NNfunction_ns_chi02_sL::synapse0x35f42e0() {
   return (neuron0x35d6bf0()*-0.0436499);
}

double NNfunction_ns_chi02_sL::synapse0x35f4320() {
   return (neuron0x35d6f30()*0.0315692);
}

double NNfunction_ns_chi02_sL::synapse0x35f4360() {
   return (neuron0x35d7270()*-0.0118751);
}

double NNfunction_ns_chi02_sL::synapse0x35f43a0() {
   return (neuron0x35d75b0()*0.00872554);
}

double NNfunction_ns_chi02_sL::synapse0x35f43e0() {
   return (neuron0x35d78f0()*0.0740289);
}

double NNfunction_ns_chi02_sL::synapse0x35f4420() {
   return (neuron0x35d7c30()*-0.0199616);
}

double NNfunction_ns_chi02_sL::synapse0x35f4460() {
   return (neuron0x35d7f70()*-0.0737825);
}

double NNfunction_ns_chi02_sL::synapse0x35f44a0() {
   return (neuron0x35d82b0()*-0.224899);
}

double NNfunction_ns_chi02_sL::synapse0x35f44e0() {
   return (neuron0x35d85f0()*-0.0196332);
}

double NNfunction_ns_chi02_sL::synapse0x35f4520() {
   return (neuron0x35d8930()*-0.0358016);
}

double NNfunction_ns_chi02_sL::synapse0x35f4560() {
   return (neuron0x35d8c70()*0.0246951);
}

double NNfunction_ns_chi02_sL::synapse0x35f3ff0() {
   return (neuron0x35d8fb0()*-0.0595808);
}

double NNfunction_ns_chi02_sL::synapse0x35f4030() {
   return (neuron0x35d9510()*-0.0172492);
}

double NNfunction_ns_chi02_sL::synapse0x35f46b0() {
   return (neuron0x35d9850()*-0.000148841);
}

double NNfunction_ns_chi02_sL::synapse0x35f46f0() {
   return (neuron0x35d9b90()*0.0325237);
}

double NNfunction_ns_chi02_sL::synapse0x35f4730() {
   return (neuron0x35d9ed0()*-0.0304033);
}

double NNfunction_ns_chi02_sL::synapse0x35f4770() {
   return (neuron0x35da210()*-0.0289979);
}

double NNfunction_ns_chi02_sL::synapse0x35f47b0() {
   return (neuron0x35da550()*0.0441886);
}

double NNfunction_ns_chi02_sL::synapse0x35f47f0() {
   return (neuron0x35da890()*-1.50575);
}

double NNfunction_ns_chi02_sL::synapse0x35f4b70() {
   return (neuron0x35d5c40()*0.466039);
}

double NNfunction_ns_chi02_sL::synapse0x35f4bb0() {
   return (neuron0x35d5ef0()*0.640358);
}

double NNfunction_ns_chi02_sL::synapse0x35f4bf0() {
   return (neuron0x35d6230()*-0.0657109);
}

double NNfunction_ns_chi02_sL::synapse0x35f4c30() {
   return (neuron0x35d6570()*0.447191);
}

double NNfunction_ns_chi02_sL::synapse0x35f4c70() {
   return (neuron0x35d68b0()*-0.237146);
}

double NNfunction_ns_chi02_sL::synapse0x35f4cb0() {
   return (neuron0x35d6bf0()*-0.414531);
}

double NNfunction_ns_chi02_sL::synapse0x35f4cf0() {
   return (neuron0x35d6f30()*1.48334);
}

double NNfunction_ns_chi02_sL::synapse0x35f4d30() {
   return (neuron0x35d7270()*1.36078);
}

double NNfunction_ns_chi02_sL::synapse0x35f4d70() {
   return (neuron0x35d75b0()*-0.236076);
}

double NNfunction_ns_chi02_sL::synapse0x35f4db0() {
   return (neuron0x35d78f0()*-1.04486);
}

double NNfunction_ns_chi02_sL::synapse0x35f4df0() {
   return (neuron0x35d7c30()*0.142068);
}

double NNfunction_ns_chi02_sL::synapse0x35f4e30() {
   return (neuron0x35d7f70()*-0.420488);
}

double NNfunction_ns_chi02_sL::synapse0x35f4e70() {
   return (neuron0x35d82b0()*0.701148);
}

double NNfunction_ns_chi02_sL::synapse0x35f4eb0() {
   return (neuron0x35d85f0()*0.147759);
}

double NNfunction_ns_chi02_sL::synapse0x35f4ef0() {
   return (neuron0x35d8930()*-0.545857);
}

double NNfunction_ns_chi02_sL::synapse0x35f4f30() {
   return (neuron0x35d8c70()*-0.836401);
}

double NNfunction_ns_chi02_sL::synapse0x35f49c0() {
   return (neuron0x35d8fb0()*0.182338);
}

double NNfunction_ns_chi02_sL::synapse0x35f4a00() {
   return (neuron0x35d9510()*-1.06102);
}

double NNfunction_ns_chi02_sL::synapse0x35f5080() {
   return (neuron0x35d9850()*1.25854);
}

double NNfunction_ns_chi02_sL::synapse0x35f50c0() {
   return (neuron0x35d9b90()*0.516301);
}

double NNfunction_ns_chi02_sL::synapse0x35f5100() {
   return (neuron0x35d9ed0()*-0.669322);
}

double NNfunction_ns_chi02_sL::synapse0x35f5140() {
   return (neuron0x35da210()*0.181895);
}

double NNfunction_ns_chi02_sL::synapse0x35f5180() {
   return (neuron0x35da550()*0.858452);
}

double NNfunction_ns_chi02_sL::synapse0x35f51c0() {
   return (neuron0x35da890()*0.731838);
}

double NNfunction_ns_chi02_sL::synapse0x35f5540() {
   return (neuron0x35d5c40()*-0.176396);
}

double NNfunction_ns_chi02_sL::synapse0x35f5580() {
   return (neuron0x35d5ef0()*0.616588);
}

double NNfunction_ns_chi02_sL::synapse0x35f55c0() {
   return (neuron0x35d6230()*0.342511);
}

double NNfunction_ns_chi02_sL::synapse0x35f5600() {
   return (neuron0x35d6570()*-0.421769);
}

double NNfunction_ns_chi02_sL::synapse0x35f5640() {
   return (neuron0x35d68b0()*0.235621);
}

double NNfunction_ns_chi02_sL::synapse0x35f5680() {
   return (neuron0x35d6bf0()*-0.0839376);
}

double NNfunction_ns_chi02_sL::synapse0x35f56c0() {
   return (neuron0x35d6f30()*-0.243118);
}

double NNfunction_ns_chi02_sL::synapse0x35f5700() {
   return (neuron0x35d7270()*0.105342);
}

double NNfunction_ns_chi02_sL::synapse0x35f5740() {
   return (neuron0x35d75b0()*-0.497664);
}

double NNfunction_ns_chi02_sL::synapse0x35f5780() {
   return (neuron0x35d78f0()*-0.294187);
}

double NNfunction_ns_chi02_sL::synapse0x35f57c0() {
   return (neuron0x35d7c30()*-0.665209);
}

double NNfunction_ns_chi02_sL::synapse0x35f5800() {
   return (neuron0x35d7f70()*0.709125);
}

double NNfunction_ns_chi02_sL::synapse0x35f5840() {
   return (neuron0x35d82b0()*-1.1146);
}

double NNfunction_ns_chi02_sL::synapse0x35f5880() {
   return (neuron0x35d85f0()*0.320496);
}

double NNfunction_ns_chi02_sL::synapse0x35f58c0() {
   return (neuron0x35d8930()*0.0215756);
}

double NNfunction_ns_chi02_sL::synapse0x35f5900() {
   return (neuron0x35d8c70()*0.70616);
}

double NNfunction_ns_chi02_sL::synapse0x35f5390() {
   return (neuron0x35d8fb0()*0.382759);
}

double NNfunction_ns_chi02_sL::synapse0x35f53d0() {
   return (neuron0x35d9510()*0.592557);
}

double NNfunction_ns_chi02_sL::synapse0x35f5a50() {
   return (neuron0x35d9850()*-0.570484);
}

double NNfunction_ns_chi02_sL::synapse0x35f5a90() {
   return (neuron0x35d9b90()*0.353145);
}

double NNfunction_ns_chi02_sL::synapse0x35f5ad0() {
   return (neuron0x35d9ed0()*0.215997);
}

double NNfunction_ns_chi02_sL::synapse0x35f5b10() {
   return (neuron0x35da210()*-0.881533);
}

double NNfunction_ns_chi02_sL::synapse0x35f5b50() {
   return (neuron0x35da550()*-0.0442592);
}

double NNfunction_ns_chi02_sL::synapse0x35f5b90() {
   return (neuron0x35da890()*0.72975);
}

double NNfunction_ns_chi02_sL::synapse0x35f5f10() {
   return (neuron0x35d5c40()*0.51627);
}

double NNfunction_ns_chi02_sL::synapse0x35f5f50() {
   return (neuron0x35d5ef0()*-1.36757);
}

double NNfunction_ns_chi02_sL::synapse0x35f5f90() {
   return (neuron0x35d6230()*-0.0682458);
}

double NNfunction_ns_chi02_sL::synapse0x35f5fd0() {
   return (neuron0x35d6570()*-0.0088556);
}

double NNfunction_ns_chi02_sL::synapse0x35f6010() {
   return (neuron0x35d68b0()*0.67571);
}

double NNfunction_ns_chi02_sL::synapse0x35f6050() {
   return (neuron0x35d6bf0()*-0.990437);
}

double NNfunction_ns_chi02_sL::synapse0x35f6090() {
   return (neuron0x35d6f30()*-0.55767);
}

double NNfunction_ns_chi02_sL::synapse0x35f60d0() {
   return (neuron0x35d7270()*-1.0381);
}

double NNfunction_ns_chi02_sL::synapse0x35f6110() {
   return (neuron0x35d75b0()*-0.120008);
}

double NNfunction_ns_chi02_sL::synapse0x35f6150() {
   return (neuron0x35d78f0()*0.515614);
}

double NNfunction_ns_chi02_sL::synapse0x35f6190() {
   return (neuron0x35d7c30()*-0.273861);
}

double NNfunction_ns_chi02_sL::synapse0x35f61d0() {
   return (neuron0x35d7f70()*0.151591);
}

double NNfunction_ns_chi02_sL::synapse0x35f6210() {
   return (neuron0x35d82b0()*-0.993908);
}

double NNfunction_ns_chi02_sL::synapse0x35f6250() {
   return (neuron0x35d85f0()*0.159443);
}

double NNfunction_ns_chi02_sL::synapse0x35f6290() {
   return (neuron0x35d8930()*-0.63104);
}

double NNfunction_ns_chi02_sL::synapse0x35f62d0() {
   return (neuron0x35d8c70()*-0.161726);
}

double NNfunction_ns_chi02_sL::synapse0x35f5d60() {
   return (neuron0x35d8fb0()*-0.0601968);
}

double NNfunction_ns_chi02_sL::synapse0x35f5da0() {
   return (neuron0x35d9510()*-0.0456451);
}

double NNfunction_ns_chi02_sL::synapse0x35f6420() {
   return (neuron0x35d9850()*-0.123298);
}

double NNfunction_ns_chi02_sL::synapse0x35f6460() {
   return (neuron0x35d9b90()*-0.677121);
}

double NNfunction_ns_chi02_sL::synapse0x35f64a0() {
   return (neuron0x35d9ed0()*-0.160621);
}

double NNfunction_ns_chi02_sL::synapse0x35f64e0() {
   return (neuron0x35da210()*0.675288);
}

double NNfunction_ns_chi02_sL::synapse0x35f6520() {
   return (neuron0x35da550()*1.47006);
}

double NNfunction_ns_chi02_sL::synapse0x35f6560() {
   return (neuron0x35da890()*-1.66388);
}

double NNfunction_ns_chi02_sL::synapse0x35f68e0() {
   return (neuron0x35d5c40()*0.593002);
}

double NNfunction_ns_chi02_sL::synapse0x35f6920() {
   return (neuron0x35d5ef0()*-0.730048);
}

double NNfunction_ns_chi02_sL::synapse0x35f6960() {
   return (neuron0x35d6230()*1.22953);
}

double NNfunction_ns_chi02_sL::synapse0x35f69a0() {
   return (neuron0x35d6570()*0.152226);
}

double NNfunction_ns_chi02_sL::synapse0x35f69e0() {
   return (neuron0x35d68b0()*0.380057);
}

double NNfunction_ns_chi02_sL::synapse0x35f6a20() {
   return (neuron0x35d6bf0()*-1.0359);
}

double NNfunction_ns_chi02_sL::synapse0x35f6a60() {
   return (neuron0x35d6f30()*0.726882);
}

double NNfunction_ns_chi02_sL::synapse0x35f6aa0() {
   return (neuron0x35d7270()*1.51762);
}

double NNfunction_ns_chi02_sL::synapse0x35f6ae0() {
   return (neuron0x35d75b0()*-0.697674);
}

double NNfunction_ns_chi02_sL::synapse0x35f6b20() {
   return (neuron0x35d78f0()*-0.318613);
}

double NNfunction_ns_chi02_sL::synapse0x35f6b60() {
   return (neuron0x35d7c30()*0.97504);
}

double NNfunction_ns_chi02_sL::synapse0x35f6ba0() {
   return (neuron0x35d7f70()*-0.403694);
}

double NNfunction_ns_chi02_sL::synapse0x35f6be0() {
   return (neuron0x35d82b0()*-1.25695);
}

double NNfunction_ns_chi02_sL::synapse0x35f6c20() {
   return (neuron0x35d85f0()*-1.07772);
}

double NNfunction_ns_chi02_sL::synapse0x35f6c60() {
   return (neuron0x35d8930()*0.414906);
}

double NNfunction_ns_chi02_sL::synapse0x35f6ca0() {
   return (neuron0x35d8c70()*-2.19222);
}

double NNfunction_ns_chi02_sL::synapse0x35f6730() {
   return (neuron0x35d8fb0()*-1.33295);
}

double NNfunction_ns_chi02_sL::synapse0x35f6770() {
   return (neuron0x35d9510()*0.913547);
}

double NNfunction_ns_chi02_sL::synapse0x35f6df0() {
   return (neuron0x35d9850()*0.0826123);
}

double NNfunction_ns_chi02_sL::synapse0x35f6e30() {
   return (neuron0x35d9b90()*-0.239917);
}

double NNfunction_ns_chi02_sL::synapse0x35f6e70() {
   return (neuron0x35d9ed0()*-0.632824);
}

double NNfunction_ns_chi02_sL::synapse0x35f6eb0() {
   return (neuron0x35da210()*-0.165642);
}

double NNfunction_ns_chi02_sL::synapse0x35f6ef0() {
   return (neuron0x35da550()*0.208607);
}

double NNfunction_ns_chi02_sL::synapse0x35f6f30() {
   return (neuron0x35da890()*-0.0207091);
}

double NNfunction_ns_chi02_sL::synapse0x35f72b0() {
   return (neuron0x35d5c40()*-0.00165423);
}

double NNfunction_ns_chi02_sL::synapse0x35f72f0() {
   return (neuron0x35d5ef0()*-0.00230325);
}

double NNfunction_ns_chi02_sL::synapse0x35f7330() {
   return (neuron0x35d6230()*0.0308205);
}

double NNfunction_ns_chi02_sL::synapse0x35f7370() {
   return (neuron0x35d6570()*-2.18726);
}

double NNfunction_ns_chi02_sL::synapse0x35f73b0() {
   return (neuron0x35d68b0()*-0.000321333);
}

double NNfunction_ns_chi02_sL::synapse0x35f73f0() {
   return (neuron0x35d6bf0()*0.00694295);
}

double NNfunction_ns_chi02_sL::synapse0x35f7430() {
   return (neuron0x35d6f30()*0.00767435);
}

double NNfunction_ns_chi02_sL::synapse0x35f7470() {
   return (neuron0x35d7270()*-0.0169174);
}

double NNfunction_ns_chi02_sL::synapse0x35f74b0() {
   return (neuron0x35d75b0()*-0.00721768);
}

double NNfunction_ns_chi02_sL::synapse0x35f74f0() {
   return (neuron0x35d78f0()*0.00248601);
}

double NNfunction_ns_chi02_sL::synapse0x35f7530() {
   return (neuron0x35d7c30()*0.000834449);
}

double NNfunction_ns_chi02_sL::synapse0x35f7570() {
   return (neuron0x35d7f70()*0.00869577);
}

double NNfunction_ns_chi02_sL::synapse0x35f75b0() {
   return (neuron0x35d82b0()*-0.285765);
}

double NNfunction_ns_chi02_sL::synapse0x35f75f0() {
   return (neuron0x35d85f0()*-0.00894564);
}

double NNfunction_ns_chi02_sL::synapse0x35f7630() {
   return (neuron0x35d8930()*-0.00279678);
}

double NNfunction_ns_chi02_sL::synapse0x35f7670() {
   return (neuron0x35d8c70()*0.00657007);
}

double NNfunction_ns_chi02_sL::synapse0x35f7100() {
   return (neuron0x35d8fb0()*-0.00734266);
}

double NNfunction_ns_chi02_sL::synapse0x35f7140() {
   return (neuron0x35d9510()*0.0156618);
}

double NNfunction_ns_chi02_sL::synapse0x35f77c0() {
   return (neuron0x35d9850()*0.00526931);
}

double NNfunction_ns_chi02_sL::synapse0x35f7800() {
   return (neuron0x35d9b90()*0.00863424);
}

double NNfunction_ns_chi02_sL::synapse0x35f7840() {
   return (neuron0x35d9ed0()*0.00496652);
}

double NNfunction_ns_chi02_sL::synapse0x35f7880() {
   return (neuron0x35da210()*0.0021213);
}

double NNfunction_ns_chi02_sL::synapse0x35f78c0() {
   return (neuron0x35da550()*-0.00176414);
}

double NNfunction_ns_chi02_sL::synapse0x35f7900() {
   return (neuron0x35da890()*0.00528942);
}

double NNfunction_ns_chi02_sL::synapse0x35f7c80() {
   return (neuron0x35d5c40()*0.00484512);
}

double NNfunction_ns_chi02_sL::synapse0x35f7cc0() {
   return (neuron0x35d5ef0()*-3.40199);
}

double NNfunction_ns_chi02_sL::synapse0x35f7d00() {
   return (neuron0x35d6230()*2.10932);
}

double NNfunction_ns_chi02_sL::synapse0x35f7d40() {
   return (neuron0x35d6570()*-0.0338027);
}

double NNfunction_ns_chi02_sL::synapse0x35f7d80() {
   return (neuron0x35d68b0()*-0.0845114);
}

double NNfunction_ns_chi02_sL::synapse0x35f7dc0() {
   return (neuron0x35d6bf0()*0.0458223);
}

double NNfunction_ns_chi02_sL::synapse0x35f7e00() {
   return (neuron0x35d6f30()*-0.00278598);
}

double NNfunction_ns_chi02_sL::synapse0x35f7e40() {
   return (neuron0x35d7270()*-0.0397575);
}

double NNfunction_ns_chi02_sL::synapse0x35f7e80() {
   return (neuron0x35d75b0()*-0.00511251);
}

double NNfunction_ns_chi02_sL::synapse0x35f7ec0() {
   return (neuron0x35d78f0()*0.00449797);
}

double NNfunction_ns_chi02_sL::synapse0x35f7f00() {
   return (neuron0x35d7c30()*0.0137132);
}

double NNfunction_ns_chi02_sL::synapse0x35f7f40() {
   return (neuron0x35d7f70()*-0.0563939);
}

double NNfunction_ns_chi02_sL::synapse0x35f7f80() {
   return (neuron0x35d82b0()*0.380817);
}

double NNfunction_ns_chi02_sL::synapse0x35f7fc0() {
   return (neuron0x35d85f0()*-0.0205618);
}

double NNfunction_ns_chi02_sL::synapse0x35f8000() {
   return (neuron0x35d8930()*-0.0193816);
}

double NNfunction_ns_chi02_sL::synapse0x35f8040() {
   return (neuron0x35d8c70()*0.047318);
}

double NNfunction_ns_chi02_sL::synapse0x35f7ad0() {
   return (neuron0x35d8fb0()*-0.0153118);
}

double NNfunction_ns_chi02_sL::synapse0x35f7b10() {
   return (neuron0x35d9510()*-0.0164972);
}

double NNfunction_ns_chi02_sL::synapse0x35f8190() {
   return (neuron0x35d9850()*0.0153482);
}

double NNfunction_ns_chi02_sL::synapse0x35f81d0() {
   return (neuron0x35d9b90()*0.036699);
}

double NNfunction_ns_chi02_sL::synapse0x35f8210() {
   return (neuron0x35d9ed0()*-0.0386533);
}

double NNfunction_ns_chi02_sL::synapse0x35f8250() {
   return (neuron0x35da210()*-0.0407511);
}

double NNfunction_ns_chi02_sL::synapse0x35f8290() {
   return (neuron0x35da550()*0.0257832);
}

double NNfunction_ns_chi02_sL::synapse0x35f82d0() {
   return (neuron0x35da890()*0.0217232);
}

double NNfunction_ns_chi02_sL::synapse0x35e0d80() {
   return (neuron0x35d5c40()*0.00532463);
}

double NNfunction_ns_chi02_sL::synapse0x35e0dc0() {
   return (neuron0x35d5ef0()*6.6799);
}

double NNfunction_ns_chi02_sL::synapse0x35e0e00() {
   return (neuron0x35d6230()*-2.78186);
}

double NNfunction_ns_chi02_sL::synapse0x35e0e40() {
   return (neuron0x35d6570()*-0.0148849);
}

double NNfunction_ns_chi02_sL::synapse0x35e0e80() {
   return (neuron0x35d68b0()*0.0198452);
}

double NNfunction_ns_chi02_sL::synapse0x35e0ec0() {
   return (neuron0x35d6bf0()*0.00644754);
}

double NNfunction_ns_chi02_sL::synapse0x35e0f00() {
   return (neuron0x35d6f30()*-0.00803885);
}

double NNfunction_ns_chi02_sL::synapse0x35e0f40() {
   return (neuron0x35d7270()*0.0130949);
}

double NNfunction_ns_chi02_sL::synapse0x35f8a60() {
   return (neuron0x35d75b0()*-0.00126438);
}

double NNfunction_ns_chi02_sL::synapse0x35f8aa0() {
   return (neuron0x35d78f0()*-0.00859126);
}

double NNfunction_ns_chi02_sL::synapse0x35f8ae0() {
   return (neuron0x35d7c30()*0.004055);
}

double NNfunction_ns_chi02_sL::synapse0x35f8b20() {
   return (neuron0x35d7f70()*0.00784535);
}

double NNfunction_ns_chi02_sL::synapse0x35f8b60() {
   return (neuron0x35d82b0()*-0.108317);
}

double NNfunction_ns_chi02_sL::synapse0x35f8ba0() {
   return (neuron0x35d85f0()*-0.0127166);
}

double NNfunction_ns_chi02_sL::synapse0x35f8be0() {
   return (neuron0x35d8930()*-0.0331184);
}

double NNfunction_ns_chi02_sL::synapse0x35f8c20() {
   return (neuron0x35d8c70()*0.0016941);
}

double NNfunction_ns_chi02_sL::synapse0x35f84a0() {
   return (neuron0x35d8fb0()*-0.0199453);
}

double NNfunction_ns_chi02_sL::synapse0x35f84e0() {
   return (neuron0x35d9510()*0.0055314);
}

double NNfunction_ns_chi02_sL::synapse0x35f8d70() {
   return (neuron0x35d9850()*0.0164931);
}

double NNfunction_ns_chi02_sL::synapse0x35f8db0() {
   return (neuron0x35d9b90()*-0.0177814);
}

double NNfunction_ns_chi02_sL::synapse0x35f8df0() {
   return (neuron0x35d9ed0()*0.00863954);
}

double NNfunction_ns_chi02_sL::synapse0x35f8e30() {
   return (neuron0x35da210()*0.0357638);
}

double NNfunction_ns_chi02_sL::synapse0x35f8e70() {
   return (neuron0x35da550()*-0.00118971);
}

double NNfunction_ns_chi02_sL::synapse0x35f8eb0() {
   return (neuron0x35da890()*0.0852616);
}

double NNfunction_ns_chi02_sL::synapse0x35f9230() {
   return (neuron0x35d5c40()*-0.478647);
}

double NNfunction_ns_chi02_sL::synapse0x35f9270() {
   return (neuron0x35d5ef0()*-0.128327);
}

double NNfunction_ns_chi02_sL::synapse0x35f92b0() {
   return (neuron0x35d6230()*1.40607);
}

double NNfunction_ns_chi02_sL::synapse0x35f92f0() {
   return (neuron0x35d6570()*-1.63426);
}

double NNfunction_ns_chi02_sL::synapse0x35f9330() {
   return (neuron0x35d68b0()*0.00633564);
}

double NNfunction_ns_chi02_sL::synapse0x35f9370() {
   return (neuron0x35d6bf0()*0.223696);
}

double NNfunction_ns_chi02_sL::synapse0x35f93b0() {
   return (neuron0x35d6f30()*0.0966498);
}

double NNfunction_ns_chi02_sL::synapse0x35f93f0() {
   return (neuron0x35d7270()*0.712086);
}

double NNfunction_ns_chi02_sL::synapse0x35f9430() {
   return (neuron0x35d75b0()*0.218601);
}

double NNfunction_ns_chi02_sL::synapse0x35f9470() {
   return (neuron0x35d78f0()*-1.74712);
}

double NNfunction_ns_chi02_sL::synapse0x35f94b0() {
   return (neuron0x35d7c30()*0.419518);
}

double NNfunction_ns_chi02_sL::synapse0x35f94f0() {
   return (neuron0x35d7f70()*0.180857);
}

double NNfunction_ns_chi02_sL::synapse0x35f9530() {
   return (neuron0x35d82b0()*0.864103);
}

double NNfunction_ns_chi02_sL::synapse0x35f9570() {
   return (neuron0x35d85f0()*-0.524176);
}

double NNfunction_ns_chi02_sL::synapse0x35f95b0() {
   return (neuron0x35d8930()*-0.234851);
}

double NNfunction_ns_chi02_sL::synapse0x35f95f0() {
   return (neuron0x35d8c70()*-0.28039);
}

double NNfunction_ns_chi02_sL::synapse0x35f9080() {
   return (neuron0x35d8fb0()*1.39988);
}

double NNfunction_ns_chi02_sL::synapse0x35f90c0() {
   return (neuron0x35d9510()*-0.67648);
}

double NNfunction_ns_chi02_sL::synapse0x35f9740() {
   return (neuron0x35d9850()*-0.171093);
}

double NNfunction_ns_chi02_sL::synapse0x35f9780() {
   return (neuron0x35d9b90()*-1.19792);
}

double NNfunction_ns_chi02_sL::synapse0x35f97c0() {
   return (neuron0x35d9ed0()*-1.11368);
}

double NNfunction_ns_chi02_sL::synapse0x35f9800() {
   return (neuron0x35da210()*0.239725);
}

double NNfunction_ns_chi02_sL::synapse0x35f9840() {
   return (neuron0x35da550()*0.67897);
}

double NNfunction_ns_chi02_sL::synapse0x35f9880() {
   return (neuron0x35da890()*-0.59008);
}

double NNfunction_ns_chi02_sL::synapse0x35f9c00() {
   return (neuron0x35d5c40()*-0.0611197);
}

double NNfunction_ns_chi02_sL::synapse0x35f9c40() {
   return (neuron0x35d5ef0()*0.00221258);
}

double NNfunction_ns_chi02_sL::synapse0x35f9c80() {
   return (neuron0x35d6230()*6.36969);
}

double NNfunction_ns_chi02_sL::synapse0x35f9cc0() {
   return (neuron0x35d6570()*-0.119214);
}

double NNfunction_ns_chi02_sL::synapse0x35f9d00() {
   return (neuron0x35d68b0()*-0.0468034);
}

double NNfunction_ns_chi02_sL::synapse0x35f9d40() {
   return (neuron0x35d6bf0()*0.0712989);
}

double NNfunction_ns_chi02_sL::synapse0x35f9d80() {
   return (neuron0x35d6f30()*-0.0185789);
}

double NNfunction_ns_chi02_sL::synapse0x35f9dc0() {
   return (neuron0x35d7270()*0.0602032);
}

double NNfunction_ns_chi02_sL::synapse0x35f9e00() {
   return (neuron0x35d75b0()*-0.0340031);
}

double NNfunction_ns_chi02_sL::synapse0x35f9e40() {
   return (neuron0x35d78f0()*0.0159345);
}

double NNfunction_ns_chi02_sL::synapse0x35f9e80() {
   return (neuron0x35d7c30()*0.0101773);
}

double NNfunction_ns_chi02_sL::synapse0x35f9ec0() {
   return (neuron0x35d7f70()*0.0230754);
}

double NNfunction_ns_chi02_sL::synapse0x35f9f00() {
   return (neuron0x35d82b0()*0.424855);
}

double NNfunction_ns_chi02_sL::synapse0x35f9f40() {
   return (neuron0x35d85f0()*-0.00407724);
}

double NNfunction_ns_chi02_sL::synapse0x35f9f80() {
   return (neuron0x35d8930()*-0.0853606);
}

double NNfunction_ns_chi02_sL::synapse0x35f9fc0() {
   return (neuron0x35d8c70()*-0.0201315);
}

double NNfunction_ns_chi02_sL::synapse0x35f9a50() {
   return (neuron0x35d8fb0()*0.0124238);
}

double NNfunction_ns_chi02_sL::synapse0x35f9a90() {
   return (neuron0x35d9510()*0.0284203);
}

double NNfunction_ns_chi02_sL::synapse0x35ea5c0() {
   return (neuron0x35d9850()*0.0553364);
}

double NNfunction_ns_chi02_sL::synapse0x35ea600() {
   return (neuron0x35d9b90()*-0.072372);
}

double NNfunction_ns_chi02_sL::synapse0x35ea640() {
   return (neuron0x35d9ed0()*0.0380486);
}

double NNfunction_ns_chi02_sL::synapse0x35ea680() {
   return (neuron0x35da210()*0.0329007);
}

double NNfunction_ns_chi02_sL::synapse0x35ea6c0() {
   return (neuron0x35da550()*-0.00997072);
}

double NNfunction_ns_chi02_sL::synapse0x35ea700() {
   return (neuron0x35da890()*0.189643);
}

double NNfunction_ns_chi02_sL::synapse0x35eaa80() {
   return (neuron0x35d5c40()*-0.20568);
}

double NNfunction_ns_chi02_sL::synapse0x35eaac0() {
   return (neuron0x35d5ef0()*0.777284);
}

double NNfunction_ns_chi02_sL::synapse0x35eab00() {
   return (neuron0x35d6230()*0.354441);
}

double NNfunction_ns_chi02_sL::synapse0x35eab40() {
   return (neuron0x35d6570()*-0.0571435);
}

double NNfunction_ns_chi02_sL::synapse0x35eab80() {
   return (neuron0x35d68b0()*-0.495195);
}

double NNfunction_ns_chi02_sL::synapse0x35eabc0() {
   return (neuron0x35d6bf0()*0.262445);
}

double NNfunction_ns_chi02_sL::synapse0x35eac00() {
   return (neuron0x35d6f30()*-0.170008);
}

double NNfunction_ns_chi02_sL::synapse0x35eac40() {
   return (neuron0x35d7270()*-0.210822);
}

double NNfunction_ns_chi02_sL::synapse0x35eac80() {
   return (neuron0x35d75b0()*1.16366);
}

double NNfunction_ns_chi02_sL::synapse0x35eacc0() {
   return (neuron0x35d78f0()*-0.439314);
}

double NNfunction_ns_chi02_sL::synapse0x35ead00() {
   return (neuron0x35d7c30()*-0.210349);
}

double NNfunction_ns_chi02_sL::synapse0x35ead40() {
   return (neuron0x35d7f70()*-0.303797);
}

double NNfunction_ns_chi02_sL::synapse0x35ead80() {
   return (neuron0x35d82b0()*-0.341786);
}

double NNfunction_ns_chi02_sL::synapse0x35eadc0() {
   return (neuron0x35d85f0()*-0.50969);
}

double NNfunction_ns_chi02_sL::synapse0x35eae00() {
   return (neuron0x35d8930()*0.380027);
}

double NNfunction_ns_chi02_sL::synapse0x35eae40() {
   return (neuron0x35d8c70()*-0.309942);
}

double NNfunction_ns_chi02_sL::synapse0x35ea8d0() {
   return (neuron0x35d8fb0()*0.257501);
}

double NNfunction_ns_chi02_sL::synapse0x35ea910() {
   return (neuron0x35d9510()*-0.484003);
}

double NNfunction_ns_chi02_sL::synapse0x35eaf90() {
   return (neuron0x35d9850()*-0.426213);
}

double NNfunction_ns_chi02_sL::synapse0x35eafd0() {
   return (neuron0x35d9b90()*-0.923989);
}

double NNfunction_ns_chi02_sL::synapse0x35eb010() {
   return (neuron0x35d9ed0()*-1.23615);
}

double NNfunction_ns_chi02_sL::synapse0x35eb050() {
   return (neuron0x35da210()*-0.616949);
}

double NNfunction_ns_chi02_sL::synapse0x35eb090() {
   return (neuron0x35da550()*0.584417);
}

double NNfunction_ns_chi02_sL::synapse0x35eb0d0() {
   return (neuron0x35da890()*1.03563);
}

double NNfunction_ns_chi02_sL::synapse0x35eb450() {
   return (neuron0x35d5c40()*-0.397487);
}

double NNfunction_ns_chi02_sL::synapse0x35eb490() {
   return (neuron0x35d5ef0()*1.44875);
}

double NNfunction_ns_chi02_sL::synapse0x35eb4d0() {
   return (neuron0x35d6230()*-0.139795);
}

double NNfunction_ns_chi02_sL::synapse0x35eb510() {
   return (neuron0x35d6570()*0.256526);
}

double NNfunction_ns_chi02_sL::synapse0x35eb550() {
   return (neuron0x35d68b0()*-0.728202);
}

double NNfunction_ns_chi02_sL::synapse0x35eb590() {
   return (neuron0x35d6bf0()*0.150653);
}

double NNfunction_ns_chi02_sL::synapse0x35eb5d0() {
   return (neuron0x35d6f30()*0.191473);
}

double NNfunction_ns_chi02_sL::synapse0x35eb610() {
   return (neuron0x35d7270()*-0.170691);
}

double NNfunction_ns_chi02_sL::synapse0x35eb650() {
   return (neuron0x35d75b0()*-0.150878);
}

double NNfunction_ns_chi02_sL::synapse0x35eb690() {
   return (neuron0x35d78f0()*-0.250787);
}

double NNfunction_ns_chi02_sL::synapse0x35eb6d0() {
   return (neuron0x35d7c30()*0.380189);
}

double NNfunction_ns_chi02_sL::synapse0x35eb710() {
   return (neuron0x35d7f70()*0.46035);
}

double NNfunction_ns_chi02_sL::synapse0x35eb750() {
   return (neuron0x35d82b0()*0.230313);
}

double NNfunction_ns_chi02_sL::synapse0x35eb790() {
   return (neuron0x35d85f0()*0.0170703);
}

double NNfunction_ns_chi02_sL::synapse0x35eb7d0() {
   return (neuron0x35d8930()*0.119242);
}

double NNfunction_ns_chi02_sL::synapse0x35eb810() {
   return (neuron0x35d8c70()*0.509544);
}

double NNfunction_ns_chi02_sL::synapse0x35eb2a0() {
   return (neuron0x35d8fb0()*-0.322081);
}

double NNfunction_ns_chi02_sL::synapse0x35eb2e0() {
   return (neuron0x35d9510()*0.213668);
}

double NNfunction_ns_chi02_sL::synapse0x35eb960() {
   return (neuron0x35d9850()*-0.377436);
}

double NNfunction_ns_chi02_sL::synapse0x35eb9a0() {
   return (neuron0x35d9b90()*0.997556);
}

double NNfunction_ns_chi02_sL::synapse0x35eb9e0() {
   return (neuron0x35d9ed0()*0.553522);
}

double NNfunction_ns_chi02_sL::synapse0x35eba20() {
   return (neuron0x35da210()*-0.990419);
}

double NNfunction_ns_chi02_sL::synapse0x35eba60() {
   return (neuron0x35da550()*-0.501425);
}

double NNfunction_ns_chi02_sL::synapse0x35ebaa0() {
   return (neuron0x35da890()*0.667415);
}

double NNfunction_ns_chi02_sL::synapse0x35ebe20() {
   return (neuron0x35d5c40()*0.415446);
}

double NNfunction_ns_chi02_sL::synapse0x35ebe60() {
   return (neuron0x35d5ef0()*-0.549687);
}

double NNfunction_ns_chi02_sL::synapse0x35ebea0() {
   return (neuron0x35d6230()*-0.0713591);
}

double NNfunction_ns_chi02_sL::synapse0x35ebee0() {
   return (neuron0x35d6570()*0.680185);
}

double NNfunction_ns_chi02_sL::synapse0x35ebf20() {
   return (neuron0x35d68b0()*0.103303);
}

double NNfunction_ns_chi02_sL::synapse0x35ebf60() {
   return (neuron0x35d6bf0()*-0.665118);
}

double NNfunction_ns_chi02_sL::synapse0x35ebfa0() {
   return (neuron0x35d6f30()*-0.841289);
}

double NNfunction_ns_chi02_sL::synapse0x35ebfe0() {
   return (neuron0x35d7270()*-0.470479);
}

double NNfunction_ns_chi02_sL::synapse0x35ec020() {
   return (neuron0x35d75b0()*0.145219);
}

double NNfunction_ns_chi02_sL::synapse0x35ec060() {
   return (neuron0x35d78f0()*-0.193592);
}

double NNfunction_ns_chi02_sL::synapse0x35ec0a0() {
   return (neuron0x35d7c30()*-0.120515);
}

double NNfunction_ns_chi02_sL::synapse0x35ec0e0() {
   return (neuron0x35d7f70()*0.290378);
}

double NNfunction_ns_chi02_sL::synapse0x35ec120() {
   return (neuron0x35d82b0()*-0.725259);
}

double NNfunction_ns_chi02_sL::synapse0x35ec160() {
   return (neuron0x35d85f0()*0.187638);
}

double NNfunction_ns_chi02_sL::synapse0x35ec1a0() {
   return (neuron0x35d8930()*-0.254878);
}

double NNfunction_ns_chi02_sL::synapse0x35ec1e0() {
   return (neuron0x35d8c70()*-0.302005);
}

double NNfunction_ns_chi02_sL::synapse0x35ebc70() {
   return (neuron0x35d8fb0()*0.292447);
}

double NNfunction_ns_chi02_sL::synapse0x35ebcb0() {
   return (neuron0x35d9510()*0.112544);
}

double NNfunction_ns_chi02_sL::synapse0x35ec330() {
   return (neuron0x35d9850()*-0.147987);
}

double NNfunction_ns_chi02_sL::synapse0x35ec370() {
   return (neuron0x35d9b90()*0.0492479);
}

double NNfunction_ns_chi02_sL::synapse0x35ec3b0() {
   return (neuron0x35d9ed0()*-0.0920989);
}

double NNfunction_ns_chi02_sL::synapse0x35ec3f0() {
   return (neuron0x35da210()*0.230906);
}

double NNfunction_ns_chi02_sL::synapse0x35ec430() {
   return (neuron0x35da550()*-0.24039);
}

double NNfunction_ns_chi02_sL::synapse0x35ec470() {
   return (neuron0x35da890()*-0.985654);
}

double NNfunction_ns_chi02_sL::synapse0x35fe340() {
   return (neuron0x35d5c40()*-0.0159774);
}

double NNfunction_ns_chi02_sL::synapse0x35fe380() {
   return (neuron0x35d5ef0()*-16.8729);
}

double NNfunction_ns_chi02_sL::synapse0x35fe3c0() {
   return (neuron0x35d6230()*0.861254);
}

double NNfunction_ns_chi02_sL::synapse0x35fe400() {
   return (neuron0x35d6570()*-0.00479616);
}

double NNfunction_ns_chi02_sL::synapse0x35fe440() {
   return (neuron0x35d68b0()*-0.0214869);
}

double NNfunction_ns_chi02_sL::synapse0x35fe480() {
   return (neuron0x35d6bf0()*0.0454245);
}

double NNfunction_ns_chi02_sL::synapse0x35fe4c0() {
   return (neuron0x35d6f30()*-0.00351565);
}

double NNfunction_ns_chi02_sL::synapse0x35fe500() {
   return (neuron0x35d7270()*-0.00768799);
}

double NNfunction_ns_chi02_sL::synapse0x35fe540() {
   return (neuron0x35d75b0()*-0.00280802);
}

double NNfunction_ns_chi02_sL::synapse0x35fe580() {
   return (neuron0x35d78f0()*-0.00394819);
}

double NNfunction_ns_chi02_sL::synapse0x35fe5c0() {
   return (neuron0x35d7c30()*0.0117919);
}

double NNfunction_ns_chi02_sL::synapse0x35fe600() {
   return (neuron0x35d7f70()*-0.0122369);
}

double NNfunction_ns_chi02_sL::synapse0x35fe640() {
   return (neuron0x35d82b0()*0.265645);
}

double NNfunction_ns_chi02_sL::synapse0x35fe680() {
   return (neuron0x35d85f0()*0.0272703);
}

double NNfunction_ns_chi02_sL::synapse0x35fe6c0() {
   return (neuron0x35d8930()*0.000455134);
}

double NNfunction_ns_chi02_sL::synapse0x35fe700() {
   return (neuron0x35d8c70()*-0.0311838);
}

double NNfunction_ns_chi02_sL::synapse0x35ec4b0() {
   return (neuron0x35d8fb0()*-0.0162798);
}

double NNfunction_ns_chi02_sL::synapse0x35ec4f0() {
   return (neuron0x35d9510()*0.0137722);
}

double NNfunction_ns_chi02_sL::synapse0x35fe850() {
   return (neuron0x35d9850()*0.00617866);
}

double NNfunction_ns_chi02_sL::synapse0x35fe890() {
   return (neuron0x35d9b90()*-0.0204229);
}

double NNfunction_ns_chi02_sL::synapse0x35fe8d0() {
   return (neuron0x35d9ed0()*-0.0254811);
}

double NNfunction_ns_chi02_sL::synapse0x35fe910() {
   return (neuron0x35da210()*-0.0165508);
}

double NNfunction_ns_chi02_sL::synapse0x35fe950() {
   return (neuron0x35da550()*0.0325877);
}

double NNfunction_ns_chi02_sL::synapse0x35fe990() {
   return (neuron0x35da890()*0.0298969);
}

double NNfunction_ns_chi02_sL::synapse0x35fed10() {
   return (neuron0x35d5c40()*0.367503);
}

double NNfunction_ns_chi02_sL::synapse0x35fed50() {
   return (neuron0x35d5ef0()*-2.06351);
}

double NNfunction_ns_chi02_sL::synapse0x35fed90() {
   return (neuron0x35d6230()*0.626673);
}

double NNfunction_ns_chi02_sL::synapse0x35fedd0() {
   return (neuron0x35d6570()*0.605372);
}

double NNfunction_ns_chi02_sL::synapse0x35fee10() {
   return (neuron0x35d68b0()*-0.292693);
}

double NNfunction_ns_chi02_sL::synapse0x35fee50() {
   return (neuron0x35d6bf0()*-0.860906);
}

double NNfunction_ns_chi02_sL::synapse0x35fee90() {
   return (neuron0x35d6f30()*-0.281867);
}

double NNfunction_ns_chi02_sL::synapse0x35feed0() {
   return (neuron0x35d7270()*-0.95152);
}

double NNfunction_ns_chi02_sL::synapse0x35fef10() {
   return (neuron0x35d75b0()*0.278658);
}

double NNfunction_ns_chi02_sL::synapse0x35fef50() {
   return (neuron0x35d78f0()*-0.0388492);
}

double NNfunction_ns_chi02_sL::synapse0x35fef90() {
   return (neuron0x35d7c30()*0.969462);
}

double NNfunction_ns_chi02_sL::synapse0x35fefd0() {
   return (neuron0x35d7f70()*-0.217281);
}

double NNfunction_ns_chi02_sL::synapse0x35ff010() {
   return (neuron0x35d82b0()*0.238993);
}

double NNfunction_ns_chi02_sL::synapse0x35ff050() {
   return (neuron0x35d85f0()*-0.584618);
}

double NNfunction_ns_chi02_sL::synapse0x35ff090() {
   return (neuron0x35d8930()*-1.23054);
}

double NNfunction_ns_chi02_sL::synapse0x35ff0d0() {
   return (neuron0x35d8c70()*0.554573);
}

double NNfunction_ns_chi02_sL::synapse0x35feb60() {
   return (neuron0x35d8fb0()*-1.05097);
}

double NNfunction_ns_chi02_sL::synapse0x35feba0() {
   return (neuron0x35d9510()*0.393633);
}

double NNfunction_ns_chi02_sL::synapse0x35ff220() {
   return (neuron0x35d9850()*0.112423);
}

double NNfunction_ns_chi02_sL::synapse0x35ff260() {
   return (neuron0x35d9b90()*-0.066303);
}

double NNfunction_ns_chi02_sL::synapse0x35ff2a0() {
   return (neuron0x35d9ed0()*-1.40558);
}

double NNfunction_ns_chi02_sL::synapse0x35ff2e0() {
   return (neuron0x35da210()*0.565323);
}

double NNfunction_ns_chi02_sL::synapse0x35ff320() {
   return (neuron0x35da550()*-0.572198);
}

double NNfunction_ns_chi02_sL::synapse0x35ff360() {
   return (neuron0x35da890()*-1.74137);
}

double NNfunction_ns_chi02_sL::synapse0x35ff6e0() {
   return (neuron0x35d5c40()*0.0379343);
}

double NNfunction_ns_chi02_sL::synapse0x35ff720() {
   return (neuron0x35d5ef0()*-0.00469704);
}

double NNfunction_ns_chi02_sL::synapse0x35ff760() {
   return (neuron0x35d6230()*-1.47774);
}

double NNfunction_ns_chi02_sL::synapse0x35ff7a0() {
   return (neuron0x35d6570()*0.0359206);
}

double NNfunction_ns_chi02_sL::synapse0x35ff7e0() {
   return (neuron0x35d68b0()*-0.0199978);
}

double NNfunction_ns_chi02_sL::synapse0x35ff820() {
   return (neuron0x35d6bf0()*-0.00739009);
}

double NNfunction_ns_chi02_sL::synapse0x35ff860() {
   return (neuron0x35d6f30()*-0.00386022);
}

double NNfunction_ns_chi02_sL::synapse0x35ff8a0() {
   return (neuron0x35d7270()*0.003019);
}

double NNfunction_ns_chi02_sL::synapse0x35ff8e0() {
   return (neuron0x35d75b0()*-0.00325637);
}

double NNfunction_ns_chi02_sL::synapse0x35ff920() {
   return (neuron0x35d78f0()*0.00691703);
}

double NNfunction_ns_chi02_sL::synapse0x35ff960() {
   return (neuron0x35d7c30()*-0.0136046);
}

double NNfunction_ns_chi02_sL::synapse0x35ff9a0() {
   return (neuron0x35d7f70()*-0.0164353);
}

double NNfunction_ns_chi02_sL::synapse0x35ff9e0() {
   return (neuron0x35d82b0()*-0.958782);
}

double NNfunction_ns_chi02_sL::synapse0x35ffa20() {
   return (neuron0x35d85f0()*-0.00405952);
}

double NNfunction_ns_chi02_sL::synapse0x35ffa60() {
   return (neuron0x35d8930()*-0.00170382);
}

double NNfunction_ns_chi02_sL::synapse0x35ffaa0() {
   return (neuron0x35d8c70()*0.0348752);
}

double NNfunction_ns_chi02_sL::synapse0x35ff530() {
   return (neuron0x35d8fb0()*-0.03214);
}

double NNfunction_ns_chi02_sL::synapse0x35ff570() {
   return (neuron0x35d9510()*0.0198398);
}

double NNfunction_ns_chi02_sL::synapse0x35ffbf0() {
   return (neuron0x35d9850()*-0.0143698);
}

double NNfunction_ns_chi02_sL::synapse0x35ffc30() {
   return (neuron0x35d9b90()*0.0334046);
}

double NNfunction_ns_chi02_sL::synapse0x35ffc70() {
   return (neuron0x35d9ed0()*-0.00534428);
}

double NNfunction_ns_chi02_sL::synapse0x35ffcb0() {
   return (neuron0x35da210()*-0.0303434);
}

double NNfunction_ns_chi02_sL::synapse0x35ffcf0() {
   return (neuron0x35da550()*-0.0060044);
}

double NNfunction_ns_chi02_sL::synapse0x35ffd30() {
   return (neuron0x35da890()*-3.908);
}

double NNfunction_ns_chi02_sL::synapse0x36000b0() {
   return (neuron0x35d5c40()*0.035517);
}

double NNfunction_ns_chi02_sL::synapse0x36000f0() {
   return (neuron0x35d5ef0()*0.0147312);
}

double NNfunction_ns_chi02_sL::synapse0x3600130() {
   return (neuron0x35d6230()*-4.06096);
}

double NNfunction_ns_chi02_sL::synapse0x3600170() {
   return (neuron0x35d6570()*0.0436859);
}

double NNfunction_ns_chi02_sL::synapse0x36001b0() {
   return (neuron0x35d68b0()*-0.0764962);
}

double NNfunction_ns_chi02_sL::synapse0x36001f0() {
   return (neuron0x35d6bf0()*-0.0450169);
}

double NNfunction_ns_chi02_sL::synapse0x3600230() {
   return (neuron0x35d6f30()*-0.00633181);
}

double NNfunction_ns_chi02_sL::synapse0x3600270() {
   return (neuron0x35d7270()*0.0280637);
}

double NNfunction_ns_chi02_sL::synapse0x36002b0() {
   return (neuron0x35d75b0()*-0.00733108);
}

double NNfunction_ns_chi02_sL::synapse0x36002f0() {
   return (neuron0x35d78f0()*-0.0252229);
}

double NNfunction_ns_chi02_sL::synapse0x3600330() {
   return (neuron0x35d7c30()*-0.0169667);
}

double NNfunction_ns_chi02_sL::synapse0x3600370() {
   return (neuron0x35d7f70()*-0.11415);
}

double NNfunction_ns_chi02_sL::synapse0x36003b0() {
   return (neuron0x35d82b0()*0.0762139);
}

double NNfunction_ns_chi02_sL::synapse0x36003f0() {
   return (neuron0x35d85f0()*-0.034058);
}

double NNfunction_ns_chi02_sL::synapse0x3600430() {
   return (neuron0x35d8930()*-0.00700574);
}

double NNfunction_ns_chi02_sL::synapse0x3600470() {
   return (neuron0x35d8c70()*-0.0253303);
}

double NNfunction_ns_chi02_sL::synapse0x35fff00() {
   return (neuron0x35d8fb0()*-0.0113261);
}

double NNfunction_ns_chi02_sL::synapse0x35fff40() {
   return (neuron0x35d9510()*0.0414071);
}

double NNfunction_ns_chi02_sL::synapse0x36005c0() {
   return (neuron0x35d9850()*-0.019277);
}

double NNfunction_ns_chi02_sL::synapse0x3600600() {
   return (neuron0x35d9b90()*0.0443411);
}

double NNfunction_ns_chi02_sL::synapse0x3600640() {
   return (neuron0x35d9ed0()*-0.014649);
}

double NNfunction_ns_chi02_sL::synapse0x3600680() {
   return (neuron0x35da210()*-0.0104699);
}

double NNfunction_ns_chi02_sL::synapse0x36006c0() {
   return (neuron0x35da550()*0.0122893);
}

double NNfunction_ns_chi02_sL::synapse0x3600700() {
   return (neuron0x35da890()*-4.57514);
}

double NNfunction_ns_chi02_sL::synapse0x33a0570() {
   return (neuron0x35dad00()*-0.573336);
}

double NNfunction_ns_chi02_sL::synapse0x33a05b0() {
   return (neuron0x35db540()*0.233291);
}

double NNfunction_ns_chi02_sL::synapse0x35dd0b0() {
   return (neuron0x35dc020()*-0.0452076);
}

double NNfunction_ns_chi02_sL::synapse0x35dd0f0() {
   return (neuron0x35dbac0()*-0.125106);
}

double NNfunction_ns_chi02_sL::synapse0x35deb80() {
   return (neuron0x35dce00()*-0.250968);
}

double NNfunction_ns_chi02_sL::synapse0x35debc0() {
   return (neuron0x35de8d0()*-0.94378);
}

double NNfunction_ns_chi02_sL::synapse0x35df950() {
   return (neuron0x35df6a0()*0.126379);
}

double NNfunction_ns_chi02_sL::synapse0x35df990() {
   return (neuron0x35e0070()*-0.342809);
}

double NNfunction_ns_chi02_sL::synapse0x35e0320() {
   return (neuron0x35e0a40()*-0.55005);
}

double NNfunction_ns_chi02_sL::synapse0x35e0360() {
   return (neuron0x35e1520()*-0.32474);
}

double NNfunction_ns_chi02_sL::synapse0x35e0cf0() {
   return (neuron0x35e1ef0()*-0.749341);
}

double NNfunction_ns_chi02_sL::synapse0x35e0d30() {
   return (neuron0x35defd0()*-0.705528);
}

double NNfunction_ns_chi02_sL::synapse0x35e17d0() {
   return (neuron0x35e3aa0()*0.247572);
}

double NNfunction_ns_chi02_sL::synapse0x35e1810() {
   return (neuron0x35e4470()*-0.347672);
}

double NNfunction_ns_chi02_sL::synapse0x35e21a0() {
   return (neuron0x35e4e40()*-0.449876);
}

double NNfunction_ns_chi02_sL::synapse0x35e21e0() {
   return (neuron0x35e5810()*0.0674075);
}

double NNfunction_ns_chi02_sL::synapse0x35df280() {
   return (neuron0x35e7620()*-0.446309);
}

double NNfunction_ns_chi02_sL::synapse0x35df2c0() {
   return (neuron0x35e7900()*-0.600709);
}

double NNfunction_ns_chi02_sL::synapse0x35e3d50() {
   return (neuron0x35e82d0()*-0.506661);
}

double NNfunction_ns_chi02_sL::synapse0x35e3d90() {
   return (neuron0x35e8ca0()*-0.622319);
}

double NNfunction_ns_chi02_sL::synapse0x35e4720() {
   return (neuron0x35e9670()*-0.165867);
}

double NNfunction_ns_chi02_sL::synapse0x35e4760() {
   return (neuron0x35ea040()*-0.285834);
}

double NNfunction_ns_chi02_sL::synapse0x35e50f0() {
   return (neuron0x35e2b90()*-0.405174);
}

double NNfunction_ns_chi02_sL::synapse0x35e5130() {
   return (neuron0x35e3560()*-0.140924);
}

double NNfunction_ns_chi02_sL::synapse0x35e5ac0() {
   return (neuron0x35ecdd0()*0.475973);
}

double NNfunction_ns_chi02_sL::synapse0x35e5b00() {
   return (neuron0x35ed7a0()*-0.126359);
}

double NNfunction_ns_chi02_sL::synapse0x35d8b50() {
   return (neuron0x35ee170()*0.203928);
}

double NNfunction_ns_chi02_sL::synapse0x35d8b90() {
   return (neuron0x35eeb40()*-0.231437);
}

double NNfunction_ns_chi02_sL::synapse0x35e7bb0() {
   return (neuron0x35ef510()*-0.313017);
}

double NNfunction_ns_chi02_sL::synapse0x35e7bf0() {
   return (neuron0x35efee0()*-0.266239);
}

double NNfunction_ns_chi02_sL::synapse0x35e8580() {
   return (neuron0x35f08b0()*-0.0884609);
}

double NNfunction_ns_chi02_sL::synapse0x35e85c0() {
   return (neuron0x35f1280()*-0.259844);
}

double NNfunction_ns_chi02_sL::synapse0x35e8f50() {
   return (neuron0x35e7310()*-0.587384);
}

double NNfunction_ns_chi02_sL::synapse0x35e8f90() {
   return (neuron0x35f3e60()*-0.202828);
}

double NNfunction_ns_chi02_sL::synapse0x35e9920() {
   return (neuron0x35f4830()*-0.037972);
}

double NNfunction_ns_chi02_sL::synapse0x35e9960() {
   return (neuron0x35f5200()*-0.25241);
}

double NNfunction_ns_chi02_sL::synapse0x35ea2f0() {
   return (neuron0x35f5bd0()*-0.282728);
}

double NNfunction_ns_chi02_sL::synapse0x35ea330() {
   return (neuron0x35f65a0()*-0.137761);
}

double NNfunction_ns_chi02_sL::synapse0x35e2e40() {
   return (neuron0x35f6f70()*-0.205277);
}

double NNfunction_ns_chi02_sL::synapse0x35e2e80() {
   return (neuron0x35f7940()*-0.307963);
}

double NNfunction_ns_chi02_sL::synapse0x35ec6f0() {
   return (neuron0x35f8310()*-0.710358);
}

double NNfunction_ns_chi02_sL::synapse0x35ec730() {
   return (neuron0x35f8ef0()*-0.476455);
}

double NNfunction_ns_chi02_sL::synapse0x35ed080() {
   return (neuron0x35f98c0()*0.163472);
}

double NNfunction_ns_chi02_sL::synapse0x35ed0c0() {
   return (neuron0x35ea740()*-0.169835);
}

double NNfunction_ns_chi02_sL::synapse0x35eda50() {
   return (neuron0x35eb110()*-0.291075);
}

double NNfunction_ns_chi02_sL::synapse0x35eda90() {
   return (neuron0x35ebae0()*-0.781008);
}

double NNfunction_ns_chi02_sL::synapse0x35ee420() {
   return (neuron0x35fe120()*-0.455896);
}

double NNfunction_ns_chi02_sL::synapse0x35ee460() {
   return (neuron0x35fe9d0()*0.0908149);
}

double NNfunction_ns_chi02_sL::synapse0x35eedf0() {
   return (neuron0x35ff3a0()*-0.518931);
}

double NNfunction_ns_chi02_sL::synapse0x35eee30() {
   return (neuron0x35ffd70()*-0.30031);
}

double NNfunction_ns_chi02_sL::synapse0x35f1530() {
   return (neuron0x35dad00()*0.107697);
}

double NNfunction_ns_chi02_sL::synapse0x35f1570() {
   return (neuron0x35db540()*-0.243132);
}

double NNfunction_ns_chi02_sL::synapse0x35e6af0() {
   return (neuron0x35dc020()*0.288498);
}

double NNfunction_ns_chi02_sL::synapse0x35e6b30() {
   return (neuron0x35dbac0()*-2.07526);
}

double NNfunction_ns_chi02_sL::synapse0x35f4110() {
   return (neuron0x35dce00()*-0.0986211);
}

double NNfunction_ns_chi02_sL::synapse0x35f4150() {
   return (neuron0x35de8d0()*-0.130217);
}

double NNfunction_ns_chi02_sL::synapse0x35f4ae0() {
   return (neuron0x35df6a0()*4.72487);
}

double NNfunction_ns_chi02_sL::synapse0x35f4b20() {
   return (neuron0x35e0070()*0.714775);
}

double NNfunction_ns_chi02_sL::synapse0x35f54b0() {
   return (neuron0x35e0a40()*-0.0993481);
}

double NNfunction_ns_chi02_sL::synapse0x35f54f0() {
   return (neuron0x35e1520()*-0.1309);
}

double NNfunction_ns_chi02_sL::synapse0x35f5e80() {
   return (neuron0x35e1ef0()*-3.0219);
}

double NNfunction_ns_chi02_sL::synapse0x35f5ec0() {
   return (neuron0x35defd0()*0.316166);
}

double NNfunction_ns_chi02_sL::synapse0x35f6850() {
   return (neuron0x35e3aa0()*-0.101239);
}

double NNfunction_ns_chi02_sL::synapse0x35f6890() {
   return (neuron0x35e4470()*-3.87466);
}

double NNfunction_ns_chi02_sL::synapse0x35f7220() {
   return (neuron0x35e4e40()*0.594165);
}

double NNfunction_ns_chi02_sL::synapse0x35f7260() {
   return (neuron0x35e5810()*-1.54738);
}

double NNfunction_ns_chi02_sL::synapse0x35f7bf0() {
   return (neuron0x35e7620()*0.180039);
}

double NNfunction_ns_chi02_sL::synapse0x35f7c30() {
   return (neuron0x35e7900()*0.083095);
}

double NNfunction_ns_chi02_sL::synapse0x35f85c0() {
   return (neuron0x35e82d0()*-0.0649654);
}

double NNfunction_ns_chi02_sL::synapse0x35f8600() {
   return (neuron0x35e8ca0()*-0.152787);
}

double NNfunction_ns_chi02_sL::synapse0x35f91a0() {
   return (neuron0x35e9670()*2.82267);
}

double NNfunction_ns_chi02_sL::synapse0x35f91e0() {
   return (neuron0x35ea040()*-4.7767);
}

double NNfunction_ns_chi02_sL::synapse0x35f9b70() {
   return (neuron0x35e2b90()*0.119623);
}

double NNfunction_ns_chi02_sL::synapse0x35f9bb0() {
   return (neuron0x35e3560()*-0.0757965);
}

double NNfunction_ns_chi02_sL::synapse0x35ea9f0() {
   return (neuron0x35ecdd0()*-0.118261);
}

double NNfunction_ns_chi02_sL::synapse0x35eaa30() {
   return (neuron0x35ed7a0()*-0.298071);
}

double NNfunction_ns_chi02_sL::synapse0x35eb3c0() {
   return (neuron0x35ee170()*0.125159);
}

double NNfunction_ns_chi02_sL::synapse0x35eb400() {
   return (neuron0x35eeb40()*-1.8277);
}

double NNfunction_ns_chi02_sL::synapse0x35ebd90() {
   return (neuron0x35ef510()*2.71945);
}

double NNfunction_ns_chi02_sL::synapse0x35ebdd0() {
   return (neuron0x35efee0()*-0.109654);
}

double NNfunction_ns_chi02_sL::synapse0x35fe2b0() {
   return (neuron0x35f08b0()*-0.0979136);
}

double NNfunction_ns_chi02_sL::synapse0x35fe2f0() {
   return (neuron0x35f1280()*0.148846);
}

double NNfunction_ns_chi02_sL::synapse0x35fec80() {
   return (neuron0x35e7310()*-0.147304);
}

double NNfunction_ns_chi02_sL::synapse0x35fecc0() {
   return (neuron0x35f3e60()*-1.05623);
}

double NNfunction_ns_chi02_sL::synapse0x35ff650() {
   return (neuron0x35f4830()*0.106026);
}

double NNfunction_ns_chi02_sL::synapse0x35ff690() {
   return (neuron0x35f5200()*0.190887);
}

double NNfunction_ns_chi02_sL::synapse0x3600020() {
   return (neuron0x35f5bd0()*0.104678);
}

double NNfunction_ns_chi02_sL::synapse0x3600060() {
   return (neuron0x35f65a0()*-0.0575873);
}

double NNfunction_ns_chi02_sL::synapse0x35dafb0() {
   return (neuron0x35f6f70()*5.22374);
}

double NNfunction_ns_chi02_sL::synapse0x35daff0() {
   return (neuron0x35f7940()*-1.25628);
}

double NNfunction_ns_chi02_sL::synapse0x35ef7c0() {
   return (neuron0x35f8310()*-1.19448);
}

double NNfunction_ns_chi02_sL::synapse0x35ef800() {
   return (neuron0x35f8ef0()*-0.0711891);
}

double NNfunction_ns_chi02_sL::synapse0x3600740() {
   return (neuron0x35f98c0()*-0.0369283);
}

double NNfunction_ns_chi02_sL::synapse0x3600780() {
   return (neuron0x35ea740()*0.0953759);
}

double NNfunction_ns_chi02_sL::synapse0x36007c0() {
   return (neuron0x35eb110()*0.180139);
}

double NNfunction_ns_chi02_sL::synapse0x3600800() {
   return (neuron0x35ebae0()*-0.210329);
}

double NNfunction_ns_chi02_sL::synapse0x36076b0() {
   return (neuron0x35fe120()*0.606877);
}

double NNfunction_ns_chi02_sL::synapse0x36076f0() {
   return (neuron0x35fe9d0()*0.0848871);
}

double NNfunction_ns_chi02_sL::synapse0x3607730() {
   return (neuron0x35ff3a0()*-0.384111);
}

double NNfunction_ns_chi02_sL::synapse0x3607770() {
   return (neuron0x35ffd70()*0.252882);
}

double NNfunction_ns_chi02_sL::synapse0x3607af0() {
   return (neuron0x35dad00()*0.0343678);
}

double NNfunction_ns_chi02_sL::synapse0x3607b30() {
   return (neuron0x35db540()*-0.279487);
}

double NNfunction_ns_chi02_sL::synapse0x3607b70() {
   return (neuron0x35dc020()*-0.0896889);
}

double NNfunction_ns_chi02_sL::synapse0x3607bb0() {
   return (neuron0x35dbac0()*-0.780752);
}

double NNfunction_ns_chi02_sL::synapse0x3607bf0() {
   return (neuron0x35dce00()*-0.028916);
}

double NNfunction_ns_chi02_sL::synapse0x3607c30() {
   return (neuron0x35de8d0()*0.001659);
}

double NNfunction_ns_chi02_sL::synapse0x3607c70() {
   return (neuron0x35df6a0()*-1.7013);
}

double NNfunction_ns_chi02_sL::synapse0x3607cb0() {
   return (neuron0x35e0070()*-1.78098);
}

double NNfunction_ns_chi02_sL::synapse0x3607cf0() {
   return (neuron0x35e0a40()*-0.179869);
}

double NNfunction_ns_chi02_sL::synapse0x3607d30() {
   return (neuron0x35e1520()*-0.109534);
}

double NNfunction_ns_chi02_sL::synapse0x3607d70() {
   return (neuron0x35e1ef0()*-1.41161);
}

double NNfunction_ns_chi02_sL::synapse0x3607db0() {
   return (neuron0x35defd0()*-2.08225);
}

double NNfunction_ns_chi02_sL::synapse0x3607df0() {
   return (neuron0x35e3aa0()*-0.174295);
}

double NNfunction_ns_chi02_sL::synapse0x3607e30() {
   return (neuron0x35e4470()*0.406468);
}

double NNfunction_ns_chi02_sL::synapse0x3607e70() {
   return (neuron0x35e4e40()*-1.78334);
}

double NNfunction_ns_chi02_sL::synapse0x3607eb0() {
   return (neuron0x35e5810()*-0.741687);
}

double NNfunction_ns_chi02_sL::synapse0x3607940() {
   return (neuron0x35e7620()*0.104422);
}

double NNfunction_ns_chi02_sL::synapse0x3607980() {
   return (neuron0x35e7900()*-0.0380238);
}

double NNfunction_ns_chi02_sL::synapse0x3608000() {
   return (neuron0x35e82d0()*-0.0946061);
}

double NNfunction_ns_chi02_sL::synapse0x3608040() {
   return (neuron0x35e8ca0()*-0.202715);
}

double NNfunction_ns_chi02_sL::synapse0x3608080() {
   return (neuron0x35e9670()*-0.0985764);
}

double NNfunction_ns_chi02_sL::synapse0x36080c0() {
   return (neuron0x35ea040()*-0.0685327);
}

double NNfunction_ns_chi02_sL::synapse0x3608100() {
   return (neuron0x35e2b90()*0.0493252);
}

double NNfunction_ns_chi02_sL::synapse0x3608140() {
   return (neuron0x35e3560()*-0.0985996);
}

double NNfunction_ns_chi02_sL::synapse0x3608180() {
   return (neuron0x35ecdd0()*-0.212252);
}

double NNfunction_ns_chi02_sL::synapse0x36081c0() {
   return (neuron0x35ed7a0()*0.0748299);
}

double NNfunction_ns_chi02_sL::synapse0x3608200() {
   return (neuron0x35ee170()*0.172842);
}

double NNfunction_ns_chi02_sL::synapse0x3608240() {
   return (neuron0x35eeb40()*0.24836);
}

double NNfunction_ns_chi02_sL::synapse0x3608280() {
   return (neuron0x35ef510()*-0.666477);
}

double NNfunction_ns_chi02_sL::synapse0x36082c0() {
   return (neuron0x35efee0()*-0.151799);
}

double NNfunction_ns_chi02_sL::synapse0x3608300() {
   return (neuron0x35f08b0()*-0.0840696);
}

double NNfunction_ns_chi02_sL::synapse0x3608340() {
   return (neuron0x35f1280()*-0.0304935);
}

double NNfunction_ns_chi02_sL::synapse0x3607ef0() {
   return (neuron0x35e7310()*0.516343);
}

double NNfunction_ns_chi02_sL::synapse0x3607f30() {
   return (neuron0x35f3e60()*0.139868);
}

double NNfunction_ns_chi02_sL::synapse0x3607f70() {
   return (neuron0x35f4830()*0.0156347);
}

double NNfunction_ns_chi02_sL::synapse0x3607fb0() {
   return (neuron0x35f5200()*0.0639265);
}

double NNfunction_ns_chi02_sL::synapse0x3608590() {
   return (neuron0x35f5bd0()*0.0860336);
}

double NNfunction_ns_chi02_sL::synapse0x36085d0() {
   return (neuron0x35f65a0()*-0.0391186);
}

double NNfunction_ns_chi02_sL::synapse0x3608610() {
   return (neuron0x35f6f70()*-1.75348);
}

double NNfunction_ns_chi02_sL::synapse0x3608650() {
   return (neuron0x35f7940()*0.499956);
}

double NNfunction_ns_chi02_sL::synapse0x3608690() {
   return (neuron0x35f8310()*0.321483);
}

double NNfunction_ns_chi02_sL::synapse0x36086d0() {
   return (neuron0x35f8ef0()*0.0365545);
}

double NNfunction_ns_chi02_sL::synapse0x3608710() {
   return (neuron0x35f98c0()*1.14124);
}

double NNfunction_ns_chi02_sL::synapse0x3608750() {
   return (neuron0x35ea740()*-0.0093473);
}

double NNfunction_ns_chi02_sL::synapse0x3608790() {
   return (neuron0x35eb110()*0.106277);
}

double NNfunction_ns_chi02_sL::synapse0x36087d0() {
   return (neuron0x35ebae0()*-0.174277);
}

double NNfunction_ns_chi02_sL::synapse0x3608810() {
   return (neuron0x35fe120()*1.62508);
}

double NNfunction_ns_chi02_sL::synapse0x3608850() {
   return (neuron0x35fe9d0()*0.0811198);
}

double NNfunction_ns_chi02_sL::synapse0x3608890() {
   return (neuron0x35ff3a0()*2.09887);
}

double NNfunction_ns_chi02_sL::synapse0x36088d0() {
   return (neuron0x35ffd70()*-0.344161);
}

double NNfunction_ns_chi02_sL::synapse0x3608c50() {
   return (neuron0x35dad00()*0.115303);
}

double NNfunction_ns_chi02_sL::synapse0x3608c90() {
   return (neuron0x35db540()*-0.101637);
}

double NNfunction_ns_chi02_sL::synapse0x3608cd0() {
   return (neuron0x35dc020()*-2.12494);
}

double NNfunction_ns_chi02_sL::synapse0x3608d10() {
   return (neuron0x35dbac0()*-0.404365);
}

double NNfunction_ns_chi02_sL::synapse0x3608d50() {
   return (neuron0x35dce00()*-0.169178);
}

double NNfunction_ns_chi02_sL::synapse0x3608d90() {
   return (neuron0x35de8d0()*-0.207085);
}

double NNfunction_ns_chi02_sL::synapse0x3608dd0() {
   return (neuron0x35df6a0()*0.632917);
}

double NNfunction_ns_chi02_sL::synapse0x3608e10() {
   return (neuron0x35e0070()*1.48257);
}

double NNfunction_ns_chi02_sL::synapse0x3608e50() {
   return (neuron0x35e0a40()*0.00832353);
}

double NNfunction_ns_chi02_sL::synapse0x3608e90() {
   return (neuron0x35e1520()*-0.119872);
}

double NNfunction_ns_chi02_sL::synapse0x3608ed0() {
   return (neuron0x35e1ef0()*1.7187);
}

double NNfunction_ns_chi02_sL::synapse0x3608f10() {
   return (neuron0x35defd0()*2.6941);
}

double NNfunction_ns_chi02_sL::synapse0x3608f50() {
   return (neuron0x35e3aa0()*-0.000397974);
}

double NNfunction_ns_chi02_sL::synapse0x3608f90() {
   return (neuron0x35e4470()*-0.485904);
}

double NNfunction_ns_chi02_sL::synapse0x3608fd0() {
   return (neuron0x35e4e40()*1.82949);
}

double NNfunction_ns_chi02_sL::synapse0x3609010() {
   return (neuron0x35e5810()*-0.475969);
}

double NNfunction_ns_chi02_sL::synapse0x3608aa0() {
   return (neuron0x35e7620()*0.168319);
}

double NNfunction_ns_chi02_sL::synapse0x3608ae0() {
   return (neuron0x35e7900()*0.17884);
}

double NNfunction_ns_chi02_sL::synapse0x3609160() {
   return (neuron0x35e82d0()*-0.0329876);
}

double NNfunction_ns_chi02_sL::synapse0x36091a0() {
   return (neuron0x35e8ca0()*0.0173474);
}

double NNfunction_ns_chi02_sL::synapse0x36091e0() {
   return (neuron0x35e9670()*0.496217);
}

double NNfunction_ns_chi02_sL::synapse0x3609220() {
   return (neuron0x35ea040()*-0.269782);
}

double NNfunction_ns_chi02_sL::synapse0x3609260() {
   return (neuron0x35e2b90()*0.143771);
}

double NNfunction_ns_chi02_sL::synapse0x36092a0() {
   return (neuron0x35e3560()*0.0167838);
}

double NNfunction_ns_chi02_sL::synapse0x36092e0() {
   return (neuron0x35ecdd0()*0.0267417);
}

double NNfunction_ns_chi02_sL::synapse0x3609320() {
   return (neuron0x35ed7a0()*-0.312858);
}

double NNfunction_ns_chi02_sL::synapse0x3609360() {
   return (neuron0x35ee170()*0.0297407);
}

double NNfunction_ns_chi02_sL::synapse0x36093a0() {
   return (neuron0x35eeb40()*-0.419313);
}

double NNfunction_ns_chi02_sL::synapse0x36093e0() {
   return (neuron0x35ef510()*3.47831);
}

double NNfunction_ns_chi02_sL::synapse0x3609420() {
   return (neuron0x35efee0()*-0.0191724);
}

double NNfunction_ns_chi02_sL::synapse0x3609460() {
   return (neuron0x35f08b0()*-0.0727495);
}

double NNfunction_ns_chi02_sL::synapse0x36094a0() {
   return (neuron0x35f1280()*0.219727);
}

double NNfunction_ns_chi02_sL::synapse0x3609050() {
   return (neuron0x35e7310()*-0.953857);
}

double NNfunction_ns_chi02_sL::synapse0x3609090() {
   return (neuron0x35f3e60()*-0.155976);
}

double NNfunction_ns_chi02_sL::synapse0x36090d0() {
   return (neuron0x35f4830()*0.150802);
}

double NNfunction_ns_chi02_sL::synapse0x3609110() {
   return (neuron0x35f5200()*0.208246);
}

double NNfunction_ns_chi02_sL::synapse0x36096f0() {
   return (neuron0x35f5bd0()*0.102425);
}

double NNfunction_ns_chi02_sL::synapse0x3609730() {
   return (neuron0x35f65a0()*-0.0350149);
}

double NNfunction_ns_chi02_sL::synapse0x3609770() {
   return (neuron0x35f6f70()*0.589529);
}

double NNfunction_ns_chi02_sL::synapse0x36097b0() {
   return (neuron0x35f7940()*-2.77538);
}

double NNfunction_ns_chi02_sL::synapse0x36097f0() {
   return (neuron0x35f8310()*-2.32972);
}

double NNfunction_ns_chi02_sL::synapse0x3609830() {
   return (neuron0x35f8ef0()*-0.148697);
}

double NNfunction_ns_chi02_sL::synapse0x3609870() {
   return (neuron0x35f98c0()*-0.411401);
}

double NNfunction_ns_chi02_sL::synapse0x36098b0() {
   return (neuron0x35ea740()*0.194257);
}

double NNfunction_ns_chi02_sL::synapse0x36098f0() {
   return (neuron0x35eb110()*0.158582);
}

double NNfunction_ns_chi02_sL::synapse0x3609930() {
   return (neuron0x35ebae0()*-0.183034);
}

double NNfunction_ns_chi02_sL::synapse0x3609970() {
   return (neuron0x35fe120()*-3.84799);
}

double NNfunction_ns_chi02_sL::synapse0x36099b0() {
   return (neuron0x35fe9d0()*0.0816023);
}

double NNfunction_ns_chi02_sL::synapse0x36099f0() {
   return (neuron0x35ff3a0()*-3.81878);
}

double NNfunction_ns_chi02_sL::synapse0x3609a30() {
   return (neuron0x35ffd70()*0.155204);
}

double NNfunction_ns_chi02_sL::synapse0x3609db0() {
   return (neuron0x35dad00()*-0.287343);
}

double NNfunction_ns_chi02_sL::synapse0x3609df0() {
   return (neuron0x35db540()*2.22919);
}

double NNfunction_ns_chi02_sL::synapse0x3609e30() {
   return (neuron0x35dc020()*2.682);
}

double NNfunction_ns_chi02_sL::synapse0x3609e70() {
   return (neuron0x35dbac0()*-7.94099);
}

double NNfunction_ns_chi02_sL::synapse0x3609eb0() {
   return (neuron0x35dce00()*0.639616);
}

double NNfunction_ns_chi02_sL::synapse0x3609ef0() {
   return (neuron0x35de8d0()*0.505799);
}

double NNfunction_ns_chi02_sL::synapse0x3609f30() {
   return (neuron0x35df6a0()*-0.755941);
}

double NNfunction_ns_chi02_sL::synapse0x3609f70() {
   return (neuron0x35e0070()*0.346829);
}

double NNfunction_ns_chi02_sL::synapse0x3609fb0() {
   return (neuron0x35e0a40()*0.766113);
}

double NNfunction_ns_chi02_sL::synapse0x3609ff0() {
   return (neuron0x35e1520()*0.530404);
}

double NNfunction_ns_chi02_sL::synapse0x360a030() {
   return (neuron0x35e1ef0()*-9.15337);
}

double NNfunction_ns_chi02_sL::synapse0x360a070() {
   return (neuron0x35defd0()*-4.77032);
}

double NNfunction_ns_chi02_sL::synapse0x360a0b0() {
   return (neuron0x35e3aa0()*0.639785);
}

double NNfunction_ns_chi02_sL::synapse0x360a0f0() {
   return (neuron0x35e4470()*0.768197);
}

double NNfunction_ns_chi02_sL::synapse0x360a130() {
   return (neuron0x35e4e40()*1.64907);
}

double NNfunction_ns_chi02_sL::synapse0x360a170() {
   return (neuron0x35e5810()*-4.49917);
}

double NNfunction_ns_chi02_sL::synapse0x3609c00() {
   return (neuron0x35e7620()*-0.455905);
}

double NNfunction_ns_chi02_sL::synapse0x3609c40() {
   return (neuron0x35e7900()*-0.2575);
}

double NNfunction_ns_chi02_sL::synapse0x360a2c0() {
   return (neuron0x35e82d0()*0.49934);
}

double NNfunction_ns_chi02_sL::synapse0x360a300() {
   return (neuron0x35e8ca0()*0.91442);
}

double NNfunction_ns_chi02_sL::synapse0x360a340() {
   return (neuron0x35e9670()*0.365275);
}

double NNfunction_ns_chi02_sL::synapse0x360a380() {
   return (neuron0x35ea040()*2.26696);
}

double NNfunction_ns_chi02_sL::synapse0x360a3c0() {
   return (neuron0x35e2b90()*-0.366835);
}

double NNfunction_ns_chi02_sL::synapse0x360a400() {
   return (neuron0x35e3560()*0.245075);
}

double NNfunction_ns_chi02_sL::synapse0x360a440() {
   return (neuron0x35ecdd0()*0.826121);
}

double NNfunction_ns_chi02_sL::synapse0x360a480() {
   return (neuron0x35ed7a0()*1.76201);
}

double NNfunction_ns_chi02_sL::synapse0x360a4c0() {
   return (neuron0x35ee170()*-0.440045);
}

double NNfunction_ns_chi02_sL::synapse0x360a500() {
   return (neuron0x35eeb40()*2.19321);
}

double NNfunction_ns_chi02_sL::synapse0x360a540() {
   return (neuron0x35ef510()*-1.14537);
}

double NNfunction_ns_chi02_sL::synapse0x360a580() {
   return (neuron0x35efee0()*0.438009);
}

double NNfunction_ns_chi02_sL::synapse0x360a5c0() {
   return (neuron0x35f08b0()*0.356966);
}

double NNfunction_ns_chi02_sL::synapse0x360a600() {
   return (neuron0x35f1280()*-0.280569);
}

double NNfunction_ns_chi02_sL::synapse0x360a1b0() {
   return (neuron0x35e7310()*6.57491);
}

double NNfunction_ns_chi02_sL::synapse0x360a1f0() {
   return (neuron0x35f3e60()*1.4662);
}

double NNfunction_ns_chi02_sL::synapse0x360a230() {
   return (neuron0x35f4830()*-0.332535);
}

double NNfunction_ns_chi02_sL::synapse0x360a270() {
   return (neuron0x35f5200()*-0.683816);
}

double NNfunction_ns_chi02_sL::synapse0x360a850() {
   return (neuron0x35f5bd0()*-0.407794);
}

double NNfunction_ns_chi02_sL::synapse0x360a890() {
   return (neuron0x35f65a0()*0.300017);
}

double NNfunction_ns_chi02_sL::synapse0x360a8d0() {
   return (neuron0x35f6f70()*-0.794168);
}

double NNfunction_ns_chi02_sL::synapse0x360a910() {
   return (neuron0x35f7940()*2.98624);
}

double NNfunction_ns_chi02_sL::synapse0x360a950() {
   return (neuron0x35f8310()*8.60358);
}

double NNfunction_ns_chi02_sL::synapse0x360a990() {
   return (neuron0x35f8ef0()*0.205549);
}

double NNfunction_ns_chi02_sL::synapse0x360a9d0() {
   return (neuron0x35f98c0()*-4.9244);
}

double NNfunction_ns_chi02_sL::synapse0x360aa10() {
   return (neuron0x35ea740()*-0.448106);
}

double NNfunction_ns_chi02_sL::synapse0x360aa50() {
   return (neuron0x35eb110()*-0.247612);
}

double NNfunction_ns_chi02_sL::synapse0x360aa90() {
   return (neuron0x35ebae0()*0.7325);
}

double NNfunction_ns_chi02_sL::synapse0x360aad0() {
   return (neuron0x35fe120()*8.69547);
}

double NNfunction_ns_chi02_sL::synapse0x360ab10() {
   return (neuron0x35fe9d0()*-0.383976);
}

double NNfunction_ns_chi02_sL::synapse0x360ab50() {
   return (neuron0x35ff3a0()*-0.64345);
}

double NNfunction_ns_chi02_sL::synapse0x360ab90() {
   return (neuron0x35ffd70()*-2.01629);
}

double NNfunction_ns_chi02_sL::synapse0x360adf0() {
   return (neuron0x3606f70()*0.611499);
}

double NNfunction_ns_chi02_sL::synapse0x360ae30() {
   return (neuron0x3607310()*9.24684);
}

double NNfunction_ns_chi02_sL::synapse0x360ae70() {
   return (neuron0x36077b0()*-4.62058);
}

double NNfunction_ns_chi02_sL::synapse0x360aeb0() {
   return (neuron0x3608910()*-4.56182);
}

double NNfunction_ns_chi02_sL::synapse0x360aef0() {
   return (neuron0x3609a70()*-3.08178);
}

