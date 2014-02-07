#include "NNfunction_sb_uLuL.h"
#include <cmath>

double NNfunction_sb_uLuL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5155)/15.3188;
   input1 = (in1 - -1.73357)/1151.26;
   input2 = (in2 - 663.658)/623.901;
   input3 = (in3 - -55.5425)/821.091;
   input4 = (in4 - 1060.68)/953.595;
   input5 = (in5 - 891.754)/945.009;
   input6 = (in6 - 906.827)/948.684;
   input7 = (in7 - 922.974)/932.747;
   input8 = (in8 - 929.434)/976.437;
   input9 = (in9 - 901.416)/953.853;
   input10 = (in10 - 990.41)/957.96;
   input11 = (in11 - 349.127)/322.564;
   input12 = (in12 - 729.417)/875.89;
   input13 = (in13 - 508.674)/526.375;
   input14 = (in14 - 717.747)/815.411;
   input15 = (in15 - 722.814)/817.866;
   input16 = (in16 - 540.003)/566.408;
   input17 = (in17 - 768.522)/906.435;
   input18 = (in18 - 754.163)/900.938;
   input19 = (in19 - 808.887)/885.612;
   input20 = (in20 - -4.41456)/494.94;
   input21 = (in21 - 3.10647)/1162.46;
   input22 = (in22 - 9.57192)/1206.06;
   input23 = (in23 - -193.055)/597.521;
   switch(index) {
     case 0:
         return neuron0x2e214a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLuL::Value(int index, double* input) {
   input0 = (input[0] - 23.5155)/15.3188;
   input1 = (input[1] - -1.73357)/1151.26;
   input2 = (input[2] - 663.658)/623.901;
   input3 = (input[3] - -55.5425)/821.091;
   input4 = (input[4] - 1060.68)/953.595;
   input5 = (input[5] - 891.754)/945.009;
   input6 = (input[6] - 906.827)/948.684;
   input7 = (input[7] - 922.974)/932.747;
   input8 = (input[8] - 929.434)/976.437;
   input9 = (input[9] - 901.416)/953.853;
   input10 = (input[10] - 990.41)/957.96;
   input11 = (input[11] - 349.127)/322.564;
   input12 = (input[12] - 729.417)/875.89;
   input13 = (input[13] - 508.674)/526.375;
   input14 = (input[14] - 717.747)/815.411;
   input15 = (input[15] - 722.814)/817.866;
   input16 = (input[16] - 540.003)/566.408;
   input17 = (input[17] - 768.522)/906.435;
   input18 = (input[18] - 754.163)/900.938;
   input19 = (input[19] - 808.887)/885.612;
   input20 = (input[20] - -4.41456)/494.94;
   input21 = (input[21] - 3.10647)/1162.46;
   input22 = (input[22] - 9.57192)/1206.06;
   input23 = (input[23] - -193.055)/597.521;
   switch(index) {
     case 0:
         return neuron0x2e214a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLuL::neuron0x2ded560() {
   return input0;
}

double NNfunction_sb_uLuL::neuron0x2ded8a0() {
   return input1;
}

double NNfunction_sb_uLuL::neuron0x2dedbe0() {
   return input2;
}

double NNfunction_sb_uLuL::neuron0x2dedf20() {
   return input3;
}

double NNfunction_sb_uLuL::neuron0x2dee260() {
   return input4;
}

double NNfunction_sb_uLuL::neuron0x2dee5a0() {
   return input5;
}

double NNfunction_sb_uLuL::neuron0x2dee8e0() {
   return input6;
}

double NNfunction_sb_uLuL::neuron0x2deec20() {
   return input7;
}

double NNfunction_sb_uLuL::neuron0x2deef60() {
   return input8;
}

double NNfunction_sb_uLuL::neuron0x2def2a0() {
   return input9;
}

double NNfunction_sb_uLuL::neuron0x2def5e0() {
   return input10;
}

double NNfunction_sb_uLuL::neuron0x2def920() {
   return input11;
}

double NNfunction_sb_uLuL::neuron0x2defc60() {
   return input12;
}

double NNfunction_sb_uLuL::neuron0x2deffa0() {
   return input13;
}

double NNfunction_sb_uLuL::neuron0x2df02e0() {
   return input14;
}

double NNfunction_sb_uLuL::neuron0x2df0620() {
   return input15;
}

double NNfunction_sb_uLuL::neuron0x2df0960() {
   return input16;
}

double NNfunction_sb_uLuL::neuron0x2df0ec0() {
   return input17;
}

double NNfunction_sb_uLuL::neuron0x2df10e0() {
   return input18;
}

double NNfunction_sb_uLuL::neuron0x2df1420() {
   return input19;
}

double NNfunction_sb_uLuL::neuron0x2df1760() {
   return input20;
}

double NNfunction_sb_uLuL::neuron0x2df1aa0() {
   return input21;
}

double NNfunction_sb_uLuL::neuron0x2df1de0() {
   return input22;
}

double NNfunction_sb_uLuL::neuron0x2df2120() {
   return input23;
}

double NNfunction_sb_uLuL::input0x2df25c0() {
   double input = 0.597363;
   input += synapse0x2bad3d0();
   input += synapse0x2ded420();
   input += synapse0x2ded460();
   input += synapse0x2df2870();
   input += synapse0x2df28b0();
   input += synapse0x2df28f0();
   input += synapse0x2df2930();
   input += synapse0x2df2970();
   input += synapse0x2df29b0();
   input += synapse0x2df29f0();
   input += synapse0x2df2a30();
   input += synapse0x2df2a70();
   input += synapse0x2df2ab0();
   input += synapse0x2df2af0();
   input += synapse0x2df2b30();
   input += synapse0x2df2b70();
   input += synapse0x2ded390();
   input += synapse0x2ded3d0();
   input += synapse0x2b9ec70();
   input += synapse0x2b9ecb0();
   input += synapse0x2df2dd0();
   input += synapse0x2df2e10();
   input += synapse0x2df2e50();
   input += synapse0x2df2e90();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2df25c0() {
   double input = input0x2df25c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2df2ed0() {
   double input = 0.0241254;
   input += synapse0x2df3210();
   input += synapse0x2df3250();
   input += synapse0x2df3290();
   input += synapse0x2df32d0();
   input += synapse0x2df3310();
   input += synapse0x2df3350();
   input += synapse0x2df3390();
   input += synapse0x2df33d0();
   input += synapse0x2df3410();
   input += synapse0x2df2cc0();
   input += synapse0x2df2d00();
   input += synapse0x2df2d40();
   input += synapse0x2df2d80();
   input += synapse0x2df3660();
   input += synapse0x2df36a0();
   input += synapse0x2df36e0();
   input += synapse0x2df3060();
   input += synapse0x2df30a0();
   input += synapse0x2df3830();
   input += synapse0x2df3870();
   input += synapse0x2df38b0();
   input += synapse0x2df38f0();
   input += synapse0x2df3930();
   input += synapse0x2df3970();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2df2ed0() {
   double input = input0x2df2ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2df39b0() {
   double input = 4.54387;
   input += synapse0x2df3cf0();
   input += synapse0x2df3d30();
   input += synapse0x2df3d70();
   input += synapse0x2df3db0();
   input += synapse0x2df3df0();
   input += synapse0x2df3e30();
   input += synapse0x2df3e70();
   input += synapse0x2df3eb0();
   input += synapse0x2df3ef0();
   input += synapse0x2df3f30();
   input += synapse0x2df3f70();
   input += synapse0x2df3fb0();
   input += synapse0x2df3ff0();
   input += synapse0x2df4030();
   input += synapse0x2df4070();
   input += synapse0x2df40b0();
   input += synapse0x2df3b40();
   input += synapse0x2df3b80();
   input += synapse0x2bacac0();
   input += synapse0x2bacb00();
   input += synapse0x2ddc5f0();
   input += synapse0x2ddc630();
   input += synapse0x2ddc670();
   input += synapse0x2ded4a0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2df39b0() {
   double input = input0x2df39b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2bad240() {
   double input = 2.95053;
   input += synapse0x2df3600();
   input += synapse0x2ded4e0();
   input += synapse0x2ded520();
   input += synapse0x2df4200();
   input += synapse0x2df4240();
   input += synapse0x2df4280();
   input += synapse0x2df42c0();
   input += synapse0x2df4300();
   input += synapse0x2df4340();
   input += synapse0x2df4380();
   input += synapse0x2df43c0();
   input += synapse0x2df4400();
   input += synapse0x2df4440();
   input += synapse0x2df4480();
   input += synapse0x2df44c0();
   input += synapse0x2df4500();
   input += synapse0x2df3450();
   input += synapse0x2df3490();
   input += synapse0x2df4650();
   input += synapse0x2df4690();
   input += synapse0x2df46d0();
   input += synapse0x2df4710();
   input += synapse0x2df4750();
   input += synapse0x2df4790();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2bad240() {
   double input = input0x2bad240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2df47d0() {
   double input = 2.78586;
   input += synapse0x2df4b10();
   input += synapse0x2df4b50();
   input += synapse0x2df4b90();
   input += synapse0x2df4bd0();
   input += synapse0x2df4c10();
   input += synapse0x2df4c50();
   input += synapse0x2df4c90();
   input += synapse0x2df4cd0();
   input += synapse0x2df4d10();
   input += synapse0x2df4d50();
   input += synapse0x2df4d90();
   input += synapse0x2df4dd0();
   input += synapse0x2df4e10();
   input += synapse0x2df4e50();
   input += synapse0x2df4e90();
   input += synapse0x2df4ed0();
   input += synapse0x2df4960();
   input += synapse0x2df49a0();
   input += synapse0x2df5020();
   input += synapse0x2df5060();
   input += synapse0x2df50a0();
   input += synapse0x2df50e0();
   input += synapse0x2df5120();
   input += synapse0x2df5160();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2df47d0() {
   double input = input0x2df47d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2df51a0() {
   double input = 0.758023;
   input += synapse0x2df54e0();
   input += synapse0x2df5520();
   input += synapse0x2df5560();
   input += synapse0x2df55a0();
   input += synapse0x2df55e0();
   input += synapse0x2df5620();
   input += synapse0x2df5660();
   input += synapse0x2df56a0();
   input += synapse0x2df56e0();
   input += synapse0x2bace30();
   input += synapse0x2bace70();
   input += synapse0x2baceb0();
   input += synapse0x2bacef0();
   input += synapse0x2bacf30();
   input += synapse0x2bacf70();
   input += synapse0x2bacfb0();
   input += synapse0x2df5330();
   input += synapse0x2df5370();
   input += synapse0x2bad100();
   input += synapse0x2bad140();
   input += synapse0x2bad180();
   input += synapse0x2bad1c0();
   input += synapse0x2bad200();
   input += synapse0x2df5f30();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2df51a0() {
   double input = input0x2df51a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2df5f70() {
   double input = 1.53723;
   input += synapse0x2df62b0();
   input += synapse0x2df62f0();
   input += synapse0x2df6330();
   input += synapse0x2df6370();
   input += synapse0x2df63b0();
   input += synapse0x2df63f0();
   input += synapse0x2df6430();
   input += synapse0x2df6470();
   input += synapse0x2df64b0();
   input += synapse0x2df64f0();
   input += synapse0x2df6530();
   input += synapse0x2df6570();
   input += synapse0x2df65b0();
   input += synapse0x2df65f0();
   input += synapse0x2df6630();
   input += synapse0x2df6670();
   input += synapse0x2df6100();
   input += synapse0x2df6140();
   input += synapse0x2df67c0();
   input += synapse0x2df6800();
   input += synapse0x2df6840();
   input += synapse0x2df6880();
   input += synapse0x2df68c0();
   input += synapse0x2df6900();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2df5f70() {
   double input = input0x2df5f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2df6940() {
   double input = 1.17862;
   input += synapse0x2df6c80();
   input += synapse0x2df6cc0();
   input += synapse0x2df6d00();
   input += synapse0x2df6d40();
   input += synapse0x2df6d80();
   input += synapse0x2df6dc0();
   input += synapse0x2df6e00();
   input += synapse0x2df6e40();
   input += synapse0x2df6e80();
   input += synapse0x2df6ec0();
   input += synapse0x2df6f00();
   input += synapse0x2df6f40();
   input += synapse0x2df6f80();
   input += synapse0x2df6fc0();
   input += synapse0x2df7000();
   input += synapse0x2df7040();
   input += synapse0x2df6ad0();
   input += synapse0x2df6b10();
   input += synapse0x2df7190();
   input += synapse0x2df71d0();
   input += synapse0x2df7210();
   input += synapse0x2df7250();
   input += synapse0x2df7290();
   input += synapse0x2df72d0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2df6940() {
   double input = input0x2df6940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2df7310() {
   double input = 0.796564;
   input += synapse0x2df0db0();
   input += synapse0x2df0df0();
   input += synapse0x2df0e30();
   input += synapse0x2df0e70();
   input += synapse0x2df7860();
   input += synapse0x2df78a0();
   input += synapse0x2df78e0();
   input += synapse0x2df7920();
   input += synapse0x2df7960();
   input += synapse0x2df79a0();
   input += synapse0x2df79e0();
   input += synapse0x2df7a20();
   input += synapse0x2df7a60();
   input += synapse0x2df7aa0();
   input += synapse0x2df7ae0();
   input += synapse0x2df7b20();
   input += synapse0x2df74a0();
   input += synapse0x2df74e0();
   input += synapse0x2df7c70();
   input += synapse0x2df7cb0();
   input += synapse0x2df7cf0();
   input += synapse0x2df7d30();
   input += synapse0x2df7d70();
   input += synapse0x2df7db0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2df7310() {
   double input = input0x2df7310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2df7df0() {
   double input = 1.3516;
   input += synapse0x2df8130();
   input += synapse0x2df8170();
   input += synapse0x2df81b0();
   input += synapse0x2df81f0();
   input += synapse0x2df8230();
   input += synapse0x2df8270();
   input += synapse0x2df82b0();
   input += synapse0x2df82f0();
   input += synapse0x2df8330();
   input += synapse0x2df8370();
   input += synapse0x2df83b0();
   input += synapse0x2df83f0();
   input += synapse0x2df8430();
   input += synapse0x2df8470();
   input += synapse0x2df84b0();
   input += synapse0x2df84f0();
   input += synapse0x2df7f80();
   input += synapse0x2df7fc0();
   input += synapse0x2df8640();
   input += synapse0x2df8680();
   input += synapse0x2df86c0();
   input += synapse0x2df8700();
   input += synapse0x2df8740();
   input += synapse0x2df8780();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2df7df0() {
   double input = input0x2df7df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2df87c0() {
   double input = 1.5556;
   input += synapse0x2df8b00();
   input += synapse0x2df8b40();
   input += synapse0x2df8b80();
   input += synapse0x2df8bc0();
   input += synapse0x2df8c00();
   input += synapse0x2df8c40();
   input += synapse0x2df8c80();
   input += synapse0x2df8cc0();
   input += synapse0x2df8d00();
   input += synapse0x2df8d40();
   input += synapse0x2df8d80();
   input += synapse0x2df8dc0();
   input += synapse0x2df8e00();
   input += synapse0x2df8e40();
   input += synapse0x2df8e80();
   input += synapse0x2df8ec0();
   input += synapse0x2df8950();
   input += synapse0x2df8990();
   input += synapse0x2df5720();
   input += synapse0x2df5760();
   input += synapse0x2df57a0();
   input += synapse0x2df57e0();
   input += synapse0x2df5820();
   input += synapse0x2df5860();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2df87c0() {
   double input = input0x2df87c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2df58a0() {
   double input = -0.567564;
   input += synapse0x2df5be0();
   input += synapse0x2df5c20();
   input += synapse0x2df5c60();
   input += synapse0x2df5ca0();
   input += synapse0x2df5ce0();
   input += synapse0x2df5d20();
   input += synapse0x2df5d60();
   input += synapse0x2df5da0();
   input += synapse0x2df5de0();
   input += synapse0x2df5e20();
   input += synapse0x2df5e60();
   input += synapse0x2df5ea0();
   input += synapse0x2df5ee0();
   input += synapse0x2dfa020();
   input += synapse0x2dfa060();
   input += synapse0x2dfa0a0();
   input += synapse0x2df5a30();
   input += synapse0x2df5a70();
   input += synapse0x2dfa1f0();
   input += synapse0x2dfa230();
   input += synapse0x2dfa270();
   input += synapse0x2dfa2b0();
   input += synapse0x2dfa2f0();
   input += synapse0x2dfa330();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2df58a0() {
   double input = input0x2df58a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2dfa370() {
   double input = 0.0102621;
   input += synapse0x2dfa6b0();
   input += synapse0x2dfa6f0();
   input += synapse0x2dfa730();
   input += synapse0x2dfa770();
   input += synapse0x2dfa7b0();
   input += synapse0x2dfa7f0();
   input += synapse0x2dfa830();
   input += synapse0x2dfa870();
   input += synapse0x2dfa8b0();
   input += synapse0x2dfa8f0();
   input += synapse0x2dfa930();
   input += synapse0x2dfa970();
   input += synapse0x2dfa9b0();
   input += synapse0x2dfa9f0();
   input += synapse0x2dfaa30();
   input += synapse0x2dfaa70();
   input += synapse0x2dfa500();
   input += synapse0x2dfa540();
   input += synapse0x2dfabc0();
   input += synapse0x2dfac00();
   input += synapse0x2dfac40();
   input += synapse0x2dfac80();
   input += synapse0x2dfacc0();
   input += synapse0x2dfad00();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2dfa370() {
   double input = input0x2dfa370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2dfad40() {
   double input = 5.1564;
   input += synapse0x2dfb080();
   input += synapse0x2dfb0c0();
   input += synapse0x2dfb100();
   input += synapse0x2dfb140();
   input += synapse0x2dfb180();
   input += synapse0x2dfb1c0();
   input += synapse0x2dfb200();
   input += synapse0x2dfb240();
   input += synapse0x2dfb280();
   input += synapse0x2dfb2c0();
   input += synapse0x2dfb300();
   input += synapse0x2dfb340();
   input += synapse0x2dfb380();
   input += synapse0x2dfb3c0();
   input += synapse0x2dfb400();
   input += synapse0x2dfb440();
   input += synapse0x2dfaed0();
   input += synapse0x2dfaf10();
   input += synapse0x2dfb590();
   input += synapse0x2dfb5d0();
   input += synapse0x2dfb610();
   input += synapse0x2dfb650();
   input += synapse0x2dfb690();
   input += synapse0x2dfb6d0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2dfad40() {
   double input = input0x2dfad40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2dfb710() {
   double input = 0.82086;
   input += synapse0x2dfba50();
   input += synapse0x2dfba90();
   input += synapse0x2dfbad0();
   input += synapse0x2dfbb10();
   input += synapse0x2dfbb50();
   input += synapse0x2dfbb90();
   input += synapse0x2dfbbd0();
   input += synapse0x2dfbc10();
   input += synapse0x2dfbc50();
   input += synapse0x2dfbc90();
   input += synapse0x2dfbcd0();
   input += synapse0x2dfbd10();
   input += synapse0x2dfbd50();
   input += synapse0x2dfbd90();
   input += synapse0x2dfbdd0();
   input += synapse0x2dfbe10();
   input += synapse0x2dfb8a0();
   input += synapse0x2dfb8e0();
   input += synapse0x2dfbf60();
   input += synapse0x2dfbfa0();
   input += synapse0x2dfbfe0();
   input += synapse0x2dfc020();
   input += synapse0x2dfc060();
   input += synapse0x2dfc0a0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2dfb710() {
   double input = input0x2dfb710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2dfc0e0() {
   double input = 1.03585;
   input += synapse0x2dfc420();
   input += synapse0x2ded780();
   input += synapse0x2ded7c0();
   input += synapse0x2dedac0();
   input += synapse0x2dedb00();
   input += synapse0x2dede00();
   input += synapse0x2dede40();
   input += synapse0x2dee140();
   input += synapse0x2dee180();
   input += synapse0x2dee480();
   input += synapse0x2dee4c0();
   input += synapse0x2dee7c0();
   input += synapse0x2dee800();
   input += synapse0x2deeb00();
   input += synapse0x2deeb40();
   input += synapse0x2deee40();
   input += synapse0x2deee80();
   input += synapse0x2def180();
   input += synapse0x2def1c0();
   input += synapse0x2def4c0();
   input += synapse0x2def500();
   input += synapse0x2def800();
   input += synapse0x2def840();
   input += synapse0x2defb40();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2dfc0e0() {
   double input = input0x2dfc0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2dfdef0() {
   double input = 0.529363;
   input += synapse0x2defb80();
   input += synapse0x2df0840();
   input += synapse0x2df0880();
   input += synapse0x2dfc270();
   input += synapse0x2dfc2b0();
   input += synapse0x2df0b80();
   input += synapse0x2df0bc0();
   input += synapse0x2b9eb50();
   input += synapse0x2b9eb90();
   input += synapse0x2df1300();
   input += synapse0x2df1340();
   input += synapse0x2df1640();
   input += synapse0x2df1680();
   input += synapse0x2df1980();
   input += synapse0x2df19c0();
   input += synapse0x2df1cc0();
   input += synapse0x2df1d00();
   input += synapse0x2df2000();
   input += synapse0x2df2040();
   input += synapse0x2df2340();
   input += synapse0x2df2380();
   input += synapse0x2defe80();
   input += synapse0x2defec0();
   input += synapse0x2dfe190();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2dfdef0() {
   double input = input0x2dfdef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2dfe1d0() {
   double input = -0.0278822;
   input += synapse0x2dfe510();
   input += synapse0x2dfe550();
   input += synapse0x2dfe590();
   input += synapse0x2dfe5d0();
   input += synapse0x2dfe610();
   input += synapse0x2dfe650();
   input += synapse0x2dfe690();
   input += synapse0x2dfe6d0();
   input += synapse0x2dfe710();
   input += synapse0x2dfe750();
   input += synapse0x2dfe790();
   input += synapse0x2dfe7d0();
   input += synapse0x2dfe810();
   input += synapse0x2dfe850();
   input += synapse0x2dfe890();
   input += synapse0x2dfe8d0();
   input += synapse0x2dfe360();
   input += synapse0x2dfe3a0();
   input += synapse0x2dfea20();
   input += synapse0x2dfea60();
   input += synapse0x2dfeaa0();
   input += synapse0x2dfeae0();
   input += synapse0x2dfeb20();
   input += synapse0x2dfeb60();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2dfe1d0() {
   double input = input0x2dfe1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2dfeba0() {
   double input = -0.6546;
   input += synapse0x2dfeee0();
   input += synapse0x2dfef20();
   input += synapse0x2dfef60();
   input += synapse0x2dfefa0();
   input += synapse0x2dfefe0();
   input += synapse0x2dff020();
   input += synapse0x2dff060();
   input += synapse0x2dff0a0();
   input += synapse0x2dff0e0();
   input += synapse0x2dff120();
   input += synapse0x2dff160();
   input += synapse0x2dff1a0();
   input += synapse0x2dff1e0();
   input += synapse0x2dff220();
   input += synapse0x2dff260();
   input += synapse0x2dff2a0();
   input += synapse0x2dfed30();
   input += synapse0x2dfed70();
   input += synapse0x2dff3f0();
   input += synapse0x2dff430();
   input += synapse0x2dff470();
   input += synapse0x2dff4b0();
   input += synapse0x2dff4f0();
   input += synapse0x2dff530();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2dfeba0() {
   double input = input0x2dfeba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2dff570() {
   double input = -0.82358;
   input += synapse0x2dff8b0();
   input += synapse0x2dff8f0();
   input += synapse0x2dff930();
   input += synapse0x2dff970();
   input += synapse0x2dff9b0();
   input += synapse0x2dff9f0();
   input += synapse0x2dffa30();
   input += synapse0x2dffa70();
   input += synapse0x2dffab0();
   input += synapse0x2dffaf0();
   input += synapse0x2dffb30();
   input += synapse0x2dffb70();
   input += synapse0x2dffbb0();
   input += synapse0x2dffbf0();
   input += synapse0x2dffc30();
   input += synapse0x2dffc70();
   input += synapse0x2dff700();
   input += synapse0x2dff740();
   input += synapse0x2dffdc0();
   input += synapse0x2dffe00();
   input += synapse0x2dffe40();
   input += synapse0x2dffe80();
   input += synapse0x2dffec0();
   input += synapse0x2dfff00();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2dff570() {
   double input = input0x2dff570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2dfff40() {
   double input = 4.21293;
   input += synapse0x2e00280();
   input += synapse0x2e002c0();
   input += synapse0x2e00300();
   input += synapse0x2e00340();
   input += synapse0x2e00380();
   input += synapse0x2e003c0();
   input += synapse0x2e00400();
   input += synapse0x2e00440();
   input += synapse0x2e00480();
   input += synapse0x2e004c0();
   input += synapse0x2e00500();
   input += synapse0x2e00540();
   input += synapse0x2e00580();
   input += synapse0x2e005c0();
   input += synapse0x2e00600();
   input += synapse0x2e00640();
   input += synapse0x2e000d0();
   input += synapse0x2e00110();
   input += synapse0x2e00790();
   input += synapse0x2e007d0();
   input += synapse0x2e00810();
   input += synapse0x2e00850();
   input += synapse0x2e00890();
   input += synapse0x2e008d0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2dfff40() {
   double input = input0x2dfff40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e00910() {
   double input = 6.37135;
   input += synapse0x2e00c50();
   input += synapse0x2e00c90();
   input += synapse0x2e00cd0();
   input += synapse0x2e00d10();
   input += synapse0x2e00d50();
   input += synapse0x2e00d90();
   input += synapse0x2e00dd0();
   input += synapse0x2e00e10();
   input += synapse0x2e00e50();
   input += synapse0x2df9010();
   input += synapse0x2df9050();
   input += synapse0x2df9090();
   input += synapse0x2df90d0();
   input += synapse0x2df9110();
   input += synapse0x2df9150();
   input += synapse0x2df9190();
   input += synapse0x2e00aa0();
   input += synapse0x2e00ae0();
   input += synapse0x2df92e0();
   input += synapse0x2df9320();
   input += synapse0x2df9360();
   input += synapse0x2df93a0();
   input += synapse0x2df93e0();
   input += synapse0x2df9420();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e00910() {
   double input = input0x2e00910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2df9460() {
   double input = 1.07415;
   input += synapse0x2df97a0();
   input += synapse0x2df97e0();
   input += synapse0x2df9820();
   input += synapse0x2df9860();
   input += synapse0x2df98a0();
   input += synapse0x2df98e0();
   input += synapse0x2df9920();
   input += synapse0x2df9960();
   input += synapse0x2df99a0();
   input += synapse0x2df99e0();
   input += synapse0x2df9a20();
   input += synapse0x2df9a60();
   input += synapse0x2df9aa0();
   input += synapse0x2df9ae0();
   input += synapse0x2df9b20();
   input += synapse0x2df9b60();
   input += synapse0x2df95f0();
   input += synapse0x2df9630();
   input += synapse0x2df9cb0();
   input += synapse0x2df9cf0();
   input += synapse0x2df9d30();
   input += synapse0x2df9d70();
   input += synapse0x2df9db0();
   input += synapse0x2df9df0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2df9460() {
   double input = input0x2df9460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2df9e30() {
   double input = 0.16173;
   input += synapse0x2df9fc0();
   input += synapse0x2e03050();
   input += synapse0x2e03090();
   input += synapse0x2e030d0();
   input += synapse0x2e03110();
   input += synapse0x2e03150();
   input += synapse0x2e03190();
   input += synapse0x2e031d0();
   input += synapse0x2e03210();
   input += synapse0x2e03250();
   input += synapse0x2e03290();
   input += synapse0x2e032d0();
   input += synapse0x2e03310();
   input += synapse0x2e03350();
   input += synapse0x2e03390();
   input += synapse0x2e033d0();
   input += synapse0x2e02ea0();
   input += synapse0x2e02ee0();
   input += synapse0x2e03520();
   input += synapse0x2e03560();
   input += synapse0x2e035a0();
   input += synapse0x2e035e0();
   input += synapse0x2e03620();
   input += synapse0x2e03660();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2df9e30() {
   double input = input0x2df9e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e036a0() {
   double input = 1.44482;
   input += synapse0x2e039e0();
   input += synapse0x2e03a20();
   input += synapse0x2e03a60();
   input += synapse0x2e03aa0();
   input += synapse0x2e03ae0();
   input += synapse0x2e03b20();
   input += synapse0x2e03b60();
   input += synapse0x2e03ba0();
   input += synapse0x2e03be0();
   input += synapse0x2e03c20();
   input += synapse0x2e03c60();
   input += synapse0x2e03ca0();
   input += synapse0x2e03ce0();
   input += synapse0x2e03d20();
   input += synapse0x2e03d60();
   input += synapse0x2e03da0();
   input += synapse0x2e03830();
   input += synapse0x2e03870();
   input += synapse0x2e03ef0();
   input += synapse0x2e03f30();
   input += synapse0x2e03f70();
   input += synapse0x2e03fb0();
   input += synapse0x2e03ff0();
   input += synapse0x2e04030();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e036a0() {
   double input = input0x2e036a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e04070() {
   double input = -0.424397;
   input += synapse0x2e043b0();
   input += synapse0x2e043f0();
   input += synapse0x2e04430();
   input += synapse0x2e04470();
   input += synapse0x2e044b0();
   input += synapse0x2e044f0();
   input += synapse0x2e04530();
   input += synapse0x2e04570();
   input += synapse0x2e045b0();
   input += synapse0x2e045f0();
   input += synapse0x2e04630();
   input += synapse0x2e04670();
   input += synapse0x2e046b0();
   input += synapse0x2e046f0();
   input += synapse0x2e04730();
   input += synapse0x2e04770();
   input += synapse0x2e04200();
   input += synapse0x2e04240();
   input += synapse0x2e048c0();
   input += synapse0x2e04900();
   input += synapse0x2e04940();
   input += synapse0x2e04980();
   input += synapse0x2e049c0();
   input += synapse0x2e04a00();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e04070() {
   double input = input0x2e04070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e04a40() {
   double input = 0.444473;
   input += synapse0x2e04d80();
   input += synapse0x2e04dc0();
   input += synapse0x2e04e00();
   input += synapse0x2e04e40();
   input += synapse0x2e04e80();
   input += synapse0x2e04ec0();
   input += synapse0x2e04f00();
   input += synapse0x2e04f40();
   input += synapse0x2e04f80();
   input += synapse0x2e04fc0();
   input += synapse0x2e05000();
   input += synapse0x2e05040();
   input += synapse0x2e05080();
   input += synapse0x2e050c0();
   input += synapse0x2e05100();
   input += synapse0x2e05140();
   input += synapse0x2e04bd0();
   input += synapse0x2e04c10();
   input += synapse0x2e05290();
   input += synapse0x2e052d0();
   input += synapse0x2e05310();
   input += synapse0x2e05350();
   input += synapse0x2e05390();
   input += synapse0x2e053d0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e04a40() {
   double input = input0x2e04a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e05410() {
   double input = 0.729928;
   input += synapse0x2e05750();
   input += synapse0x2e05790();
   input += synapse0x2e057d0();
   input += synapse0x2e05810();
   input += synapse0x2e05850();
   input += synapse0x2e05890();
   input += synapse0x2e058d0();
   input += synapse0x2e05910();
   input += synapse0x2e05950();
   input += synapse0x2e05990();
   input += synapse0x2e059d0();
   input += synapse0x2e05a10();
   input += synapse0x2e05a50();
   input += synapse0x2e05a90();
   input += synapse0x2e05ad0();
   input += synapse0x2e05b10();
   input += synapse0x2e055a0();
   input += synapse0x2e055e0();
   input += synapse0x2e05c60();
   input += synapse0x2e05ca0();
   input += synapse0x2e05ce0();
   input += synapse0x2e05d20();
   input += synapse0x2e05d60();
   input += synapse0x2e05da0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e05410() {
   double input = input0x2e05410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e05de0() {
   double input = -0.0567949;
   input += synapse0x2e06120();
   input += synapse0x2e06160();
   input += synapse0x2e061a0();
   input += synapse0x2e061e0();
   input += synapse0x2e06220();
   input += synapse0x2e06260();
   input += synapse0x2e062a0();
   input += synapse0x2e062e0();
   input += synapse0x2e06320();
   input += synapse0x2e06360();
   input += synapse0x2e063a0();
   input += synapse0x2e063e0();
   input += synapse0x2e06420();
   input += synapse0x2e06460();
   input += synapse0x2e064a0();
   input += synapse0x2e064e0();
   input += synapse0x2e05f70();
   input += synapse0x2e05fb0();
   input += synapse0x2e06630();
   input += synapse0x2e06670();
   input += synapse0x2e066b0();
   input += synapse0x2e066f0();
   input += synapse0x2e06730();
   input += synapse0x2e06770();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e05de0() {
   double input = input0x2e05de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e067b0() {
   double input = -0.761474;
   input += synapse0x2e06af0();
   input += synapse0x2e06b30();
   input += synapse0x2e06b70();
   input += synapse0x2e06bb0();
   input += synapse0x2e06bf0();
   input += synapse0x2e06c30();
   input += synapse0x2e06c70();
   input += synapse0x2e06cb0();
   input += synapse0x2e06cf0();
   input += synapse0x2e06d30();
   input += synapse0x2e06d70();
   input += synapse0x2e06db0();
   input += synapse0x2e06df0();
   input += synapse0x2e06e30();
   input += synapse0x2e06e70();
   input += synapse0x2e06eb0();
   input += synapse0x2e06940();
   input += synapse0x2e06980();
   input += synapse0x2e07000();
   input += synapse0x2e07040();
   input += synapse0x2e07080();
   input += synapse0x2e070c0();
   input += synapse0x2e07100();
   input += synapse0x2e07140();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e067b0() {
   double input = input0x2e067b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e07180() {
   double input = -0.43001;
   input += synapse0x2e074c0();
   input += synapse0x2e07500();
   input += synapse0x2e07540();
   input += synapse0x2e07580();
   input += synapse0x2e075c0();
   input += synapse0x2e07600();
   input += synapse0x2e07640();
   input += synapse0x2e07680();
   input += synapse0x2e076c0();
   input += synapse0x2e07700();
   input += synapse0x2e07740();
   input += synapse0x2e07780();
   input += synapse0x2e077c0();
   input += synapse0x2e07800();
   input += synapse0x2e07840();
   input += synapse0x2e07880();
   input += synapse0x2e07310();
   input += synapse0x2e07350();
   input += synapse0x2e079d0();
   input += synapse0x2e07a10();
   input += synapse0x2e07a50();
   input += synapse0x2e07a90();
   input += synapse0x2e07ad0();
   input += synapse0x2e07b10();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e07180() {
   double input = input0x2e07180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e07b50() {
   double input = 0.0612523;
   input += synapse0x2e07e90();
   input += synapse0x2dfc460();
   input += synapse0x2dfc4a0();
   input += synapse0x2dfc4e0();
   input += synapse0x2dfc730();
   input += synapse0x2dfc770();
   input += synapse0x2dfc7b0();
   input += synapse0x2dfca00();
   input += synapse0x2dfca40();
   input += synapse0x2dfcc90();
   input += synapse0x2dfccd0();
   input += synapse0x2dfcd10();
   input += synapse0x2dfcf60();
   input += synapse0x2dfcfa0();
   input += synapse0x2dfd1f0();
   input += synapse0x2dfd230();
   input += synapse0x2e07ce0();
   input += synapse0x2e07d20();
   input += synapse0x2dfd380();
   input += synapse0x2dfd890();
   input += synapse0x2dfd8d0();
   input += synapse0x2dfd910();
   input += synapse0x2dfdb60();
   input += synapse0x2dfdba0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e07b50() {
   double input = input0x2e07b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2dfdbe0() {
   double input = 0.255778;
   input += synapse0x2dfd450();
   input += synapse0x2dfd490();
   input += synapse0x2dfd4d0();
   input += synapse0x2dfd510();
   input += synapse0x2dfde90();
   input += synapse0x2e0a1e0();
   input += synapse0x2e0a220();
   input += synapse0x2e0a260();
   input += synapse0x2e0a2a0();
   input += synapse0x2e0a2e0();
   input += synapse0x2e0a320();
   input += synapse0x2e0a360();
   input += synapse0x2e0a3a0();
   input += synapse0x2e0a3e0();
   input += synapse0x2e0a420();
   input += synapse0x2e0a460();
   input += synapse0x2dfdd70();
   input += synapse0x2dfddb0();
   input += synapse0x2e0a5b0();
   input += synapse0x2e0a5f0();
   input += synapse0x2e0a630();
   input += synapse0x2e0a670();
   input += synapse0x2e0a6b0();
   input += synapse0x2e0a6f0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2dfdbe0() {
   double input = input0x2dfdbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e0a730() {
   double input = 0.1072;
   input += synapse0x2e0aa70();
   input += synapse0x2e0aab0();
   input += synapse0x2e0aaf0();
   input += synapse0x2e0ab30();
   input += synapse0x2e0ab70();
   input += synapse0x2e0abb0();
   input += synapse0x2e0abf0();
   input += synapse0x2e0ac30();
   input += synapse0x2e0ac70();
   input += synapse0x2e0acb0();
   input += synapse0x2e0acf0();
   input += synapse0x2e0ad30();
   input += synapse0x2e0ad70();
   input += synapse0x2e0adb0();
   input += synapse0x2e0adf0();
   input += synapse0x2e0ae30();
   input += synapse0x2e0a8c0();
   input += synapse0x2e0a900();
   input += synapse0x2e0af80();
   input += synapse0x2e0afc0();
   input += synapse0x2e0b000();
   input += synapse0x2e0b040();
   input += synapse0x2e0b080();
   input += synapse0x2e0b0c0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e0a730() {
   double input = input0x2e0a730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e0b100() {
   double input = -1.65193;
   input += synapse0x2e0b440();
   input += synapse0x2e0b480();
   input += synapse0x2e0b4c0();
   input += synapse0x2e0b500();
   input += synapse0x2e0b540();
   input += synapse0x2e0b580();
   input += synapse0x2e0b5c0();
   input += synapse0x2e0b600();
   input += synapse0x2e0b640();
   input += synapse0x2e0b680();
   input += synapse0x2e0b6c0();
   input += synapse0x2e0b700();
   input += synapse0x2e0b740();
   input += synapse0x2e0b780();
   input += synapse0x2e0b7c0();
   input += synapse0x2e0b800();
   input += synapse0x2e0b290();
   input += synapse0x2e0b2d0();
   input += synapse0x2e0b950();
   input += synapse0x2e0b990();
   input += synapse0x2e0b9d0();
   input += synapse0x2e0ba10();
   input += synapse0x2e0ba50();
   input += synapse0x2e0ba90();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e0b100() {
   double input = input0x2e0b100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e0bad0() {
   double input = 0.147315;
   input += synapse0x2e0be10();
   input += synapse0x2e0be50();
   input += synapse0x2e0be90();
   input += synapse0x2e0bed0();
   input += synapse0x2e0bf10();
   input += synapse0x2e0bf50();
   input += synapse0x2e0bf90();
   input += synapse0x2e0bfd0();
   input += synapse0x2e0c010();
   input += synapse0x2e0c050();
   input += synapse0x2e0c090();
   input += synapse0x2e0c0d0();
   input += synapse0x2e0c110();
   input += synapse0x2e0c150();
   input += synapse0x2e0c190();
   input += synapse0x2e0c1d0();
   input += synapse0x2e0bc60();
   input += synapse0x2e0bca0();
   input += synapse0x2e0c320();
   input += synapse0x2e0c360();
   input += synapse0x2e0c3a0();
   input += synapse0x2e0c3e0();
   input += synapse0x2e0c420();
   input += synapse0x2e0c460();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e0bad0() {
   double input = input0x2e0bad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e0c4a0() {
   double input = 0.334385;
   input += synapse0x2e0c7e0();
   input += synapse0x2e0c820();
   input += synapse0x2e0c860();
   input += synapse0x2e0c8a0();
   input += synapse0x2e0c8e0();
   input += synapse0x2e0c920();
   input += synapse0x2e0c960();
   input += synapse0x2e0c9a0();
   input += synapse0x2e0c9e0();
   input += synapse0x2e0ca20();
   input += synapse0x2e0ca60();
   input += synapse0x2e0caa0();
   input += synapse0x2e0cae0();
   input += synapse0x2e0cb20();
   input += synapse0x2e0cb60();
   input += synapse0x2e0cba0();
   input += synapse0x2e0c630();
   input += synapse0x2e0c670();
   input += synapse0x2e0ccf0();
   input += synapse0x2e0cd30();
   input += synapse0x2e0cd70();
   input += synapse0x2e0cdb0();
   input += synapse0x2e0cdf0();
   input += synapse0x2e0ce30();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e0c4a0() {
   double input = input0x2e0c4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e0ce70() {
   double input = 0.133268;
   input += synapse0x2e0d1b0();
   input += synapse0x2e0d1f0();
   input += synapse0x2e0d230();
   input += synapse0x2e0d270();
   input += synapse0x2e0d2b0();
   input += synapse0x2e0d2f0();
   input += synapse0x2e0d330();
   input += synapse0x2e0d370();
   input += synapse0x2e0d3b0();
   input += synapse0x2e0d3f0();
   input += synapse0x2e0d430();
   input += synapse0x2e0d470();
   input += synapse0x2e0d4b0();
   input += synapse0x2e0d4f0();
   input += synapse0x2e0d530();
   input += synapse0x2e0d570();
   input += synapse0x2e0d000();
   input += synapse0x2e0d040();
   input += synapse0x2e0d6c0();
   input += synapse0x2e0d700();
   input += synapse0x2e0d740();
   input += synapse0x2e0d780();
   input += synapse0x2e0d7c0();
   input += synapse0x2e0d800();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e0ce70() {
   double input = input0x2e0ce70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e0d840() {
   double input = -0.847358;
   input += synapse0x2e0db80();
   input += synapse0x2e0dbc0();
   input += synapse0x2e0dc00();
   input += synapse0x2e0dc40();
   input += synapse0x2e0dc80();
   input += synapse0x2e0dcc0();
   input += synapse0x2e0dd00();
   input += synapse0x2e0dd40();
   input += synapse0x2e0dd80();
   input += synapse0x2e0ddc0();
   input += synapse0x2e0de00();
   input += synapse0x2e0de40();
   input += synapse0x2e0de80();
   input += synapse0x2e0dec0();
   input += synapse0x2e0df00();
   input += synapse0x2e0df40();
   input += synapse0x2e0d9d0();
   input += synapse0x2e0da10();
   input += synapse0x2e0e090();
   input += synapse0x2e0e0d0();
   input += synapse0x2e0e110();
   input += synapse0x2e0e150();
   input += synapse0x2e0e190();
   input += synapse0x2e0e1d0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e0d840() {
   double input = input0x2e0d840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e0e210() {
   double input = 0.434344;
   input += synapse0x2e0e550();
   input += synapse0x2e0e590();
   input += synapse0x2e0e5d0();
   input += synapse0x2e0e610();
   input += synapse0x2e0e650();
   input += synapse0x2e0e690();
   input += synapse0x2e0e6d0();
   input += synapse0x2e0e710();
   input += synapse0x2e0e750();
   input += synapse0x2e0e790();
   input += synapse0x2e0e7d0();
   input += synapse0x2e0e810();
   input += synapse0x2e0e850();
   input += synapse0x2e0e890();
   input += synapse0x2e0e8d0();
   input += synapse0x2e0e910();
   input += synapse0x2e0e3a0();
   input += synapse0x2e0e3e0();
   input += synapse0x2e0ea60();
   input += synapse0x2e0eaa0();
   input += synapse0x2e0eae0();
   input += synapse0x2e0eb20();
   input += synapse0x2e0eb60();
   input += synapse0x2e0eba0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e0e210() {
   double input = input0x2e0e210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e0ebe0() {
   double input = 0.0876942;
   input += synapse0x2df7650();
   input += synapse0x2df7690();
   input += synapse0x2df76d0();
   input += synapse0x2df7710();
   input += synapse0x2df7750();
   input += synapse0x2df7790();
   input += synapse0x2df77d0();
   input += synapse0x2df7810();
   input += synapse0x2e0f330();
   input += synapse0x2e0f370();
   input += synapse0x2e0f3b0();
   input += synapse0x2e0f3f0();
   input += synapse0x2e0f430();
   input += synapse0x2e0f470();
   input += synapse0x2e0f4b0();
   input += synapse0x2e0f4f0();
   input += synapse0x2e0ed70();
   input += synapse0x2e0edb0();
   input += synapse0x2e0f640();
   input += synapse0x2e0f680();
   input += synapse0x2e0f6c0();
   input += synapse0x2e0f700();
   input += synapse0x2e0f740();
   input += synapse0x2e0f780();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e0ebe0() {
   double input = input0x2e0ebe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e0f7c0() {
   double input = -0.373734;
   input += synapse0x2e0fb00();
   input += synapse0x2e0fb40();
   input += synapse0x2e0fb80();
   input += synapse0x2e0fbc0();
   input += synapse0x2e0fc00();
   input += synapse0x2e0fc40();
   input += synapse0x2e0fc80();
   input += synapse0x2e0fcc0();
   input += synapse0x2e0fd00();
   input += synapse0x2e0fd40();
   input += synapse0x2e0fd80();
   input += synapse0x2e0fdc0();
   input += synapse0x2e0fe00();
   input += synapse0x2e0fe40();
   input += synapse0x2e0fe80();
   input += synapse0x2e0fec0();
   input += synapse0x2e0f950();
   input += synapse0x2e0f990();
   input += synapse0x2e10010();
   input += synapse0x2e10050();
   input += synapse0x2e10090();
   input += synapse0x2e100d0();
   input += synapse0x2e10110();
   input += synapse0x2e10150();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e0f7c0() {
   double input = input0x2e0f7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e10190() {
   double input = -0.82827;
   input += synapse0x2e104d0();
   input += synapse0x2e10510();
   input += synapse0x2e10550();
   input += synapse0x2e10590();
   input += synapse0x2e105d0();
   input += synapse0x2e10610();
   input += synapse0x2e10650();
   input += synapse0x2e10690();
   input += synapse0x2e106d0();
   input += synapse0x2e10710();
   input += synapse0x2e10750();
   input += synapse0x2e10790();
   input += synapse0x2e107d0();
   input += synapse0x2e10810();
   input += synapse0x2e10850();
   input += synapse0x2e10890();
   input += synapse0x2e10320();
   input += synapse0x2e10360();
   input += synapse0x2e00e90();
   input += synapse0x2e00ed0();
   input += synapse0x2e00f10();
   input += synapse0x2e00f50();
   input += synapse0x2e00f90();
   input += synapse0x2e00fd0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e10190() {
   double input = input0x2e10190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e01010() {
   double input = 0.770877;
   input += synapse0x2e01350();
   input += synapse0x2e01390();
   input += synapse0x2e013d0();
   input += synapse0x2e01410();
   input += synapse0x2e01450();
   input += synapse0x2e01490();
   input += synapse0x2e014d0();
   input += synapse0x2e01510();
   input += synapse0x2e01550();
   input += synapse0x2e01590();
   input += synapse0x2e015d0();
   input += synapse0x2e01610();
   input += synapse0x2e01650();
   input += synapse0x2e01690();
   input += synapse0x2e016d0();
   input += synapse0x2e01710();
   input += synapse0x2e011a0();
   input += synapse0x2e011e0();
   input += synapse0x2e01860();
   input += synapse0x2e018a0();
   input += synapse0x2e018e0();
   input += synapse0x2e01920();
   input += synapse0x2e01960();
   input += synapse0x2e019a0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e01010() {
   double input = input0x2e01010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e019e0() {
   double input = 0.854846;
   input += synapse0x2e01d20();
   input += synapse0x2e01d60();
   input += synapse0x2e01da0();
   input += synapse0x2e01de0();
   input += synapse0x2e01e20();
   input += synapse0x2e01e60();
   input += synapse0x2e01ea0();
   input += synapse0x2e01ee0();
   input += synapse0x2e01f20();
   input += synapse0x2e01f60();
   input += synapse0x2e01fa0();
   input += synapse0x2e01fe0();
   input += synapse0x2e02020();
   input += synapse0x2e02060();
   input += synapse0x2e020a0();
   input += synapse0x2e020e0();
   input += synapse0x2e01b70();
   input += synapse0x2e01bb0();
   input += synapse0x2e02230();
   input += synapse0x2e02270();
   input += synapse0x2e022b0();
   input += synapse0x2e022f0();
   input += synapse0x2e02330();
   input += synapse0x2e02370();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e019e0() {
   double input = input0x2e019e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e023b0() {
   double input = 1.08908;
   input += synapse0x2e026f0();
   input += synapse0x2e02730();
   input += synapse0x2e02770();
   input += synapse0x2e027b0();
   input += synapse0x2e027f0();
   input += synapse0x2e02830();
   input += synapse0x2e02870();
   input += synapse0x2e028b0();
   input += synapse0x2e028f0();
   input += synapse0x2e02930();
   input += synapse0x2e02970();
   input += synapse0x2e029b0();
   input += synapse0x2e029f0();
   input += synapse0x2e02a30();
   input += synapse0x2e02a70();
   input += synapse0x2e02ab0();
   input += synapse0x2e02540();
   input += synapse0x2e02580();
   input += synapse0x2e02c00();
   input += synapse0x2e02c40();
   input += synapse0x2e02c80();
   input += synapse0x2e02cc0();
   input += synapse0x2e02d00();
   input += synapse0x2e02d40();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e023b0() {
   double input = input0x2e023b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e149f0() {
   double input = 2.18776;
   input += synapse0x2e14c10();
   input += synapse0x2e14c50();
   input += synapse0x2e14c90();
   input += synapse0x2e14cd0();
   input += synapse0x2e14d10();
   input += synapse0x2e14d50();
   input += synapse0x2e14d90();
   input += synapse0x2e14dd0();
   input += synapse0x2e14e10();
   input += synapse0x2e14e50();
   input += synapse0x2e14e90();
   input += synapse0x2e14ed0();
   input += synapse0x2e14f10();
   input += synapse0x2e14f50();
   input += synapse0x2e14f90();
   input += synapse0x2e14fd0();
   input += synapse0x2e02d80();
   input += synapse0x2e02dc0();
   input += synapse0x2e15120();
   input += synapse0x2e15160();
   input += synapse0x2e151a0();
   input += synapse0x2e151e0();
   input += synapse0x2e15220();
   input += synapse0x2e15260();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e149f0() {
   double input = input0x2e149f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e152a0() {
   double input = -1.31831;
   input += synapse0x2e155e0();
   input += synapse0x2e15620();
   input += synapse0x2e15660();
   input += synapse0x2e156a0();
   input += synapse0x2e156e0();
   input += synapse0x2e15720();
   input += synapse0x2e15760();
   input += synapse0x2e157a0();
   input += synapse0x2e157e0();
   input += synapse0x2e15820();
   input += synapse0x2e15860();
   input += synapse0x2e158a0();
   input += synapse0x2e158e0();
   input += synapse0x2e15920();
   input += synapse0x2e15960();
   input += synapse0x2e159a0();
   input += synapse0x2e15430();
   input += synapse0x2e15470();
   input += synapse0x2e15af0();
   input += synapse0x2e15b30();
   input += synapse0x2e15b70();
   input += synapse0x2e15bb0();
   input += synapse0x2e15bf0();
   input += synapse0x2e15c30();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e152a0() {
   double input = input0x2e152a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e15c70() {
   double input = 0.0592473;
   input += synapse0x2e15fb0();
   input += synapse0x2e15ff0();
   input += synapse0x2e16030();
   input += synapse0x2e16070();
   input += synapse0x2e160b0();
   input += synapse0x2e160f0();
   input += synapse0x2e16130();
   input += synapse0x2e16170();
   input += synapse0x2e161b0();
   input += synapse0x2e161f0();
   input += synapse0x2e16230();
   input += synapse0x2e16270();
   input += synapse0x2e162b0();
   input += synapse0x2e162f0();
   input += synapse0x2e16330();
   input += synapse0x2e16370();
   input += synapse0x2e15e00();
   input += synapse0x2e15e40();
   input += synapse0x2e164c0();
   input += synapse0x2e16500();
   input += synapse0x2e16540();
   input += synapse0x2e16580();
   input += synapse0x2e165c0();
   input += synapse0x2e16600();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e15c70() {
   double input = input0x2e15c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e16640() {
   double input = 2.37791;
   input += synapse0x2e16980();
   input += synapse0x2e169c0();
   input += synapse0x2e16a00();
   input += synapse0x2e16a40();
   input += synapse0x2e16a80();
   input += synapse0x2e16ac0();
   input += synapse0x2e16b00();
   input += synapse0x2e16b40();
   input += synapse0x2e16b80();
   input += synapse0x2e16bc0();
   input += synapse0x2e16c00();
   input += synapse0x2e16c40();
   input += synapse0x2e16c80();
   input += synapse0x2e16cc0();
   input += synapse0x2e16d00();
   input += synapse0x2e16d40();
   input += synapse0x2e167d0();
   input += synapse0x2e16810();
   input += synapse0x2e16e90();
   input += synapse0x2e16ed0();
   input += synapse0x2e16f10();
   input += synapse0x2e16f50();
   input += synapse0x2e16f90();
   input += synapse0x2e16fd0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e16640() {
   double input = input0x2e16640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e1d840() {
   double input = -0.126059;
   input += synapse0x2df3570();
   input += synapse0x2df35b0();
   input += synapse0x2df4a80();
   input += synapse0x2df4ac0();
   input += synapse0x2df5450();
   input += synapse0x2df5490();
   input += synapse0x2df6220();
   input += synapse0x2df6260();
   input += synapse0x2df6bf0();
   input += synapse0x2df6c30();
   input += synapse0x2df75c0();
   input += synapse0x2df7600();
   input += synapse0x2df80a0();
   input += synapse0x2df80e0();
   input += synapse0x2df8a70();
   input += synapse0x2df8ab0();
   input += synapse0x2df5b50();
   input += synapse0x2df5b90();
   input += synapse0x2dfa620();
   input += synapse0x2dfa660();
   input += synapse0x2dfaff0();
   input += synapse0x2dfb030();
   input += synapse0x2dfb9c0();
   input += synapse0x2dfba00();
   input += synapse0x2dfc390();
   input += synapse0x2dfc3d0();
   input += synapse0x2df0500();
   input += synapse0x2df0540();
   input += synapse0x2dfe480();
   input += synapse0x2dfe4c0();
   input += synapse0x2dfee50();
   input += synapse0x2dfee90();
   input += synapse0x2dff820();
   input += synapse0x2dff860();
   input += synapse0x2e001f0();
   input += synapse0x2e00230();
   input += synapse0x2e00bc0();
   input += synapse0x2e00c00();
   input += synapse0x2df9710();
   input += synapse0x2df9750();
   input += synapse0x2e02fc0();
   input += synapse0x2e03000();
   input += synapse0x2e03950();
   input += synapse0x2e03990();
   input += synapse0x2e04320();
   input += synapse0x2e04360();
   input += synapse0x2e04cf0();
   input += synapse0x2e04d30();
   input += synapse0x2e056c0();
   input += synapse0x2e05700();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e1d840() {
   double input = input0x2e1d840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e1dbe0() {
   double input = -0.085514;
   input += synapse0x2e07e00();
   input += synapse0x2e07e40();
   input += synapse0x2dfd3c0();
   input += synapse0x2dfd400();
   input += synapse0x2e0a9e0();
   input += synapse0x2e0aa20();
   input += synapse0x2e0b3b0();
   input += synapse0x2e0b3f0();
   input += synapse0x2e0bd80();
   input += synapse0x2e0bdc0();
   input += synapse0x2e0c750();
   input += synapse0x2e0c790();
   input += synapse0x2e0d120();
   input += synapse0x2e0d160();
   input += synapse0x2e0daf0();
   input += synapse0x2e0db30();
   input += synapse0x2e0e4c0();
   input += synapse0x2e0e500();
   input += synapse0x2e0ee90();
   input += synapse0x2e0eed0();
   input += synapse0x2e0fa70();
   input += synapse0x2e0fab0();
   input += synapse0x2e10440();
   input += synapse0x2e10480();
   input += synapse0x2e012c0();
   input += synapse0x2e01300();
   input += synapse0x2e01c90();
   input += synapse0x2e01cd0();
   input += synapse0x2e02660();
   input += synapse0x2e026a0();
   input += synapse0x2e14b80();
   input += synapse0x2e14bc0();
   input += synapse0x2e15550();
   input += synapse0x2e15590();
   input += synapse0x2e15f20();
   input += synapse0x2e15f60();
   input += synapse0x2e168f0();
   input += synapse0x2e16930();
   input += synapse0x2df27e0();
   input += synapse0x2df2820();
   input += synapse0x2e06090();
   input += synapse0x2e060d0();
   input += synapse0x2e17010();
   input += synapse0x2e17050();
   input += synapse0x2e17090();
   input += synapse0x2e170d0();
   input += synapse0x2e1df80();
   input += synapse0x2e1dfc0();
   input += synapse0x2e1e000();
   input += synapse0x2e1e040();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e1dbe0() {
   double input = input0x2e1dbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e1e080() {
   double input = -0.432903;
   input += synapse0x2e1e3c0();
   input += synapse0x2e1e400();
   input += synapse0x2e1e440();
   input += synapse0x2e1e480();
   input += synapse0x2e1e4c0();
   input += synapse0x2e1e500();
   input += synapse0x2e1e540();
   input += synapse0x2e1e580();
   input += synapse0x2e1e5c0();
   input += synapse0x2e1e600();
   input += synapse0x2e1e640();
   input += synapse0x2e1e680();
   input += synapse0x2e1e6c0();
   input += synapse0x2e1e700();
   input += synapse0x2e1e740();
   input += synapse0x2e1e780();
   input += synapse0x2e1e210();
   input += synapse0x2e1e250();
   input += synapse0x2e1e8d0();
   input += synapse0x2e1e910();
   input += synapse0x2e1e950();
   input += synapse0x2e1e990();
   input += synapse0x2e1e9d0();
   input += synapse0x2e1ea10();
   input += synapse0x2e1ea50();
   input += synapse0x2e1ea90();
   input += synapse0x2e1ead0();
   input += synapse0x2e1eb10();
   input += synapse0x2e1eb50();
   input += synapse0x2e1eb90();
   input += synapse0x2e1ebd0();
   input += synapse0x2e1ec10();
   input += synapse0x2e1e7c0();
   input += synapse0x2e1e800();
   input += synapse0x2e1e840();
   input += synapse0x2e1e880();
   input += synapse0x2e1ee60();
   input += synapse0x2e1eea0();
   input += synapse0x2e1eee0();
   input += synapse0x2e1ef20();
   input += synapse0x2e1ef60();
   input += synapse0x2e1efa0();
   input += synapse0x2e1efe0();
   input += synapse0x2e1f020();
   input += synapse0x2e1f060();
   input += synapse0x2e1f0a0();
   input += synapse0x2e1f0e0();
   input += synapse0x2e1f120();
   input += synapse0x2e1f160();
   input += synapse0x2e1f1a0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e1e080() {
   double input = input0x2e1e080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e1f1e0() {
   double input = 0.273692;
   input += synapse0x2e1f520();
   input += synapse0x2e1f560();
   input += synapse0x2e1f5a0();
   input += synapse0x2e1f5e0();
   input += synapse0x2e1f620();
   input += synapse0x2e1f660();
   input += synapse0x2e1f6a0();
   input += synapse0x2e1f6e0();
   input += synapse0x2e1f720();
   input += synapse0x2e1f760();
   input += synapse0x2e1f7a0();
   input += synapse0x2e1f7e0();
   input += synapse0x2e1f820();
   input += synapse0x2e1f860();
   input += synapse0x2e1f8a0();
   input += synapse0x2e1f8e0();
   input += synapse0x2e1f370();
   input += synapse0x2e1f3b0();
   input += synapse0x2e1fa30();
   input += synapse0x2e1fa70();
   input += synapse0x2e1fab0();
   input += synapse0x2e1faf0();
   input += synapse0x2e1fb30();
   input += synapse0x2e1fb70();
   input += synapse0x2e1fbb0();
   input += synapse0x2e1fbf0();
   input += synapse0x2e1fc30();
   input += synapse0x2e1fc70();
   input += synapse0x2e1fcb0();
   input += synapse0x2e1fcf0();
   input += synapse0x2e1fd30();
   input += synapse0x2e1fd70();
   input += synapse0x2e1f920();
   input += synapse0x2e1f960();
   input += synapse0x2e1f9a0();
   input += synapse0x2e1f9e0();
   input += synapse0x2e1ffc0();
   input += synapse0x2e20000();
   input += synapse0x2e20040();
   input += synapse0x2e20080();
   input += synapse0x2e200c0();
   input += synapse0x2e20100();
   input += synapse0x2e20140();
   input += synapse0x2e20180();
   input += synapse0x2e201c0();
   input += synapse0x2e20200();
   input += synapse0x2e20240();
   input += synapse0x2e20280();
   input += synapse0x2e202c0();
   input += synapse0x2e20300();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e1f1e0() {
   double input = input0x2e1f1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e20340() {
   double input = -0.0677872;
   input += synapse0x2e20680();
   input += synapse0x2e206c0();
   input += synapse0x2e20700();
   input += synapse0x2e20740();
   input += synapse0x2e20780();
   input += synapse0x2e207c0();
   input += synapse0x2e20800();
   input += synapse0x2e20840();
   input += synapse0x2e20880();
   input += synapse0x2e208c0();
   input += synapse0x2e20900();
   input += synapse0x2e20940();
   input += synapse0x2e20980();
   input += synapse0x2e209c0();
   input += synapse0x2e20a00();
   input += synapse0x2e20a40();
   input += synapse0x2e204d0();
   input += synapse0x2e20510();
   input += synapse0x2e20b90();
   input += synapse0x2e20bd0();
   input += synapse0x2e20c10();
   input += synapse0x2e20c50();
   input += synapse0x2e20c90();
   input += synapse0x2e20cd0();
   input += synapse0x2e20d10();
   input += synapse0x2e20d50();
   input += synapse0x2e20d90();
   input += synapse0x2e20dd0();
   input += synapse0x2e20e10();
   input += synapse0x2e20e50();
   input += synapse0x2e20e90();
   input += synapse0x2e20ed0();
   input += synapse0x2e20a80();
   input += synapse0x2e20ac0();
   input += synapse0x2e20b00();
   input += synapse0x2e20b40();
   input += synapse0x2e21120();
   input += synapse0x2e21160();
   input += synapse0x2e211a0();
   input += synapse0x2e211e0();
   input += synapse0x2e21220();
   input += synapse0x2e21260();
   input += synapse0x2e212a0();
   input += synapse0x2e212e0();
   input += synapse0x2e21320();
   input += synapse0x2e21360();
   input += synapse0x2e213a0();
   input += synapse0x2e213e0();
   input += synapse0x2e21420();
   input += synapse0x2e21460();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e20340() {
   double input = input0x2e20340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2e214a0() {
   double input = 4.92503;
   input += synapse0x2df2580();
   input += synapse0x2e216c0();
   input += synapse0x2e21700();
   input += synapse0x2e21740();
   input += synapse0x2e21780();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2e214a0() {
   double input = input0x2e214a0();
   return (input * 1)+0;
}

double NNfunction_sb_uLuL::synapse0x2bad3d0() {
   return (neuron0x2ded560()*0.497049);
}

double NNfunction_sb_uLuL::synapse0x2ded420() {
   return (neuron0x2ded8a0()*1.08306);
}

double NNfunction_sb_uLuL::synapse0x2ded460() {
   return (neuron0x2dedbe0()*0.704686);
}

double NNfunction_sb_uLuL::synapse0x2df2870() {
   return (neuron0x2dedf20()*0.464671);
}

double NNfunction_sb_uLuL::synapse0x2df28b0() {
   return (neuron0x2dee260()*0.446212);
}

double NNfunction_sb_uLuL::synapse0x2df28f0() {
   return (neuron0x2dee5a0()*0.642438);
}

double NNfunction_sb_uLuL::synapse0x2df2930() {
   return (neuron0x2dee8e0()*0.219542);
}

double NNfunction_sb_uLuL::synapse0x2df2970() {
   return (neuron0x2deec20()*0.52822);
}

double NNfunction_sb_uLuL::synapse0x2df29b0() {
   return (neuron0x2deef60()*0.570523);
}

double NNfunction_sb_uLuL::synapse0x2df29f0() {
   return (neuron0x2def2a0()*-0.14763);
}

double NNfunction_sb_uLuL::synapse0x2df2a30() {
   return (neuron0x2def5e0()*0.324301);
}

double NNfunction_sb_uLuL::synapse0x2df2a70() {
   return (neuron0x2def920()*-0.328669);
}

double NNfunction_sb_uLuL::synapse0x2df2ab0() {
   return (neuron0x2defc60()*0.297599);
}

double NNfunction_sb_uLuL::synapse0x2df2af0() {
   return (neuron0x2deffa0()*0.680831);
}

double NNfunction_sb_uLuL::synapse0x2df2b30() {
   return (neuron0x2df02e0()*-0.452763);
}

double NNfunction_sb_uLuL::synapse0x2df2b70() {
   return (neuron0x2df0620()*0.37361);
}

double NNfunction_sb_uLuL::synapse0x2ded390() {
   return (neuron0x2df0960()*0.115148);
}

double NNfunction_sb_uLuL::synapse0x2ded3d0() {
   return (neuron0x2df0ec0()*0.30499);
}

double NNfunction_sb_uLuL::synapse0x2b9ec70() {
   return (neuron0x2df10e0()*0.132596);
}

double NNfunction_sb_uLuL::synapse0x2b9ecb0() {
   return (neuron0x2df1420()*-0.305304);
}

double NNfunction_sb_uLuL::synapse0x2df2dd0() {
   return (neuron0x2df1760()*0.1124);
}

double NNfunction_sb_uLuL::synapse0x2df2e10() {
   return (neuron0x2df1aa0()*0.475125);
}

double NNfunction_sb_uLuL::synapse0x2df2e50() {
   return (neuron0x2df1de0()*0.0500922);
}

double NNfunction_sb_uLuL::synapse0x2df2e90() {
   return (neuron0x2df2120()*0.416658);
}

double NNfunction_sb_uLuL::synapse0x2df3210() {
   return (neuron0x2ded560()*-0.0545897);
}

double NNfunction_sb_uLuL::synapse0x2df3250() {
   return (neuron0x2ded8a0()*0.144708);
}

double NNfunction_sb_uLuL::synapse0x2df3290() {
   return (neuron0x2dedbe0()*0.133446);
}

double NNfunction_sb_uLuL::synapse0x2df32d0() {
   return (neuron0x2dedf20()*0.29043);
}

double NNfunction_sb_uLuL::synapse0x2df3310() {
   return (neuron0x2dee260()*0.12744);
}

double NNfunction_sb_uLuL::synapse0x2df3350() {
   return (neuron0x2dee5a0()*0.0192499);
}

double NNfunction_sb_uLuL::synapse0x2df3390() {
   return (neuron0x2dee8e0()*0.0130778);
}

double NNfunction_sb_uLuL::synapse0x2df33d0() {
   return (neuron0x2deec20()*-0.0681745);
}

double NNfunction_sb_uLuL::synapse0x2df3410() {
   return (neuron0x2deef60()*0.0817138);
}

double NNfunction_sb_uLuL::synapse0x2df2cc0() {
   return (neuron0x2def2a0()*0.155671);
}

double NNfunction_sb_uLuL::synapse0x2df2d00() {
   return (neuron0x2def5e0()*0.849637);
}

double NNfunction_sb_uLuL::synapse0x2df2d40() {
   return (neuron0x2def920()*-1.15685);
}

double NNfunction_sb_uLuL::synapse0x2df2d80() {
   return (neuron0x2defc60()*0.285443);
}

double NNfunction_sb_uLuL::synapse0x2df3660() {
   return (neuron0x2deffa0()*0.213102);
}

double NNfunction_sb_uLuL::synapse0x2df36a0() {
   return (neuron0x2df02e0()*0.110227);
}

double NNfunction_sb_uLuL::synapse0x2df36e0() {
   return (neuron0x2df0620()*0.0205533);
}

double NNfunction_sb_uLuL::synapse0x2df3060() {
   return (neuron0x2df0960()*0.267424);
}

double NNfunction_sb_uLuL::synapse0x2df30a0() {
   return (neuron0x2df0ec0()*0.236132);
}

double NNfunction_sb_uLuL::synapse0x2df3830() {
   return (neuron0x2df10e0()*0.0308736);
}

double NNfunction_sb_uLuL::synapse0x2df3870() {
   return (neuron0x2df1420()*0.175641);
}

double NNfunction_sb_uLuL::synapse0x2df38b0() {
   return (neuron0x2df1760()*0.0682497);
}

double NNfunction_sb_uLuL::synapse0x2df38f0() {
   return (neuron0x2df1aa0()*-0.0197004);
}

double NNfunction_sb_uLuL::synapse0x2df3930() {
   return (neuron0x2df1de0()*-0.0608525);
}

double NNfunction_sb_uLuL::synapse0x2df3970() {
   return (neuron0x2df2120()*-0.136235);
}

double NNfunction_sb_uLuL::synapse0x2df3cf0() {
   return (neuron0x2ded560()*-0.021033);
}

double NNfunction_sb_uLuL::synapse0x2df3d30() {
   return (neuron0x2ded8a0()*0.10584);
}

double NNfunction_sb_uLuL::synapse0x2df3d70() {
   return (neuron0x2dedbe0()*-0.111677);
}

double NNfunction_sb_uLuL::synapse0x2df3db0() {
   return (neuron0x2dedf20()*2.80953);
}

double NNfunction_sb_uLuL::synapse0x2df3df0() {
   return (neuron0x2dee260()*-0.116541);
}

double NNfunction_sb_uLuL::synapse0x2df3e30() {
   return (neuron0x2dee5a0()*-0.0105665);
}

double NNfunction_sb_uLuL::synapse0x2df3e70() {
   return (neuron0x2dee8e0()*0.0135712);
}

double NNfunction_sb_uLuL::synapse0x2df3eb0() {
   return (neuron0x2deec20()*0.00305687);
}

double NNfunction_sb_uLuL::synapse0x2df3ef0() {
   return (neuron0x2deef60()*-0.0203992);
}

double NNfunction_sb_uLuL::synapse0x2df3f30() {
   return (neuron0x2def2a0()*-0.0429177);
}

double NNfunction_sb_uLuL::synapse0x2df3f70() {
   return (neuron0x2def5e0()*0.0525842);
}

double NNfunction_sb_uLuL::synapse0x2df3fb0() {
   return (neuron0x2def920()*-1.0882);
}

double NNfunction_sb_uLuL::synapse0x2df3ff0() {
   return (neuron0x2defc60()*-0.0217729);
}

double NNfunction_sb_uLuL::synapse0x2df4030() {
   return (neuron0x2deffa0()*-0.170799);
}

double NNfunction_sb_uLuL::synapse0x2df4070() {
   return (neuron0x2df02e0()*0.0052871);
}

double NNfunction_sb_uLuL::synapse0x2df40b0() {
   return (neuron0x2df0620()*-0.0816672);
}

double NNfunction_sb_uLuL::synapse0x2df3b40() {
   return (neuron0x2df0960()*-0.249288);
}

double NNfunction_sb_uLuL::synapse0x2df3b80() {
   return (neuron0x2df0ec0()*0.0163934);
}

double NNfunction_sb_uLuL::synapse0x2bacac0() {
   return (neuron0x2df10e0()*0.0375281);
}

double NNfunction_sb_uLuL::synapse0x2bacb00() {
   return (neuron0x2df1420()*0.0265257);
}

double NNfunction_sb_uLuL::synapse0x2ddc5f0() {
   return (neuron0x2df1760()*-0.0111234);
}

double NNfunction_sb_uLuL::synapse0x2ddc630() {
   return (neuron0x2df1aa0()*-0.0140414);
}

double NNfunction_sb_uLuL::synapse0x2ddc670() {
   return (neuron0x2df1de0()*-0.00848965);
}

double NNfunction_sb_uLuL::synapse0x2ded4a0() {
   return (neuron0x2df2120()*-0.0162026);
}

double NNfunction_sb_uLuL::synapse0x2df3600() {
   return (neuron0x2ded560()*0.0056279);
}

double NNfunction_sb_uLuL::synapse0x2ded4e0() {
   return (neuron0x2ded8a0()*0.192197);
}

double NNfunction_sb_uLuL::synapse0x2ded520() {
   return (neuron0x2dedbe0()*-0.369082);
}

double NNfunction_sb_uLuL::synapse0x2df4200() {
   return (neuron0x2dedf20()*-1.68205);
}

double NNfunction_sb_uLuL::synapse0x2df4240() {
   return (neuron0x2dee260()*0.180702);
}

double NNfunction_sb_uLuL::synapse0x2df4280() {
   return (neuron0x2dee5a0()*0.0476345);
}

double NNfunction_sb_uLuL::synapse0x2df42c0() {
   return (neuron0x2dee8e0()*-0.274544);
}

double NNfunction_sb_uLuL::synapse0x2df4300() {
   return (neuron0x2deec20()*-0.29178);
}

double NNfunction_sb_uLuL::synapse0x2df4340() {
   return (neuron0x2deef60()*-0.108092);
}

double NNfunction_sb_uLuL::synapse0x2df4380() {
   return (neuron0x2def2a0()*-0.00227928);
}

double NNfunction_sb_uLuL::synapse0x2df43c0() {
   return (neuron0x2def5e0()*-0.0210864);
}

double NNfunction_sb_uLuL::synapse0x2df4400() {
   return (neuron0x2def920()*-0.680894);
}

double NNfunction_sb_uLuL::synapse0x2df4440() {
   return (neuron0x2defc60()*-0.0309991);
}

double NNfunction_sb_uLuL::synapse0x2df4480() {
   return (neuron0x2deffa0()*-0.276588);
}

double NNfunction_sb_uLuL::synapse0x2df44c0() {
   return (neuron0x2df02e0()*0.00858717);
}

double NNfunction_sb_uLuL::synapse0x2df4500() {
   return (neuron0x2df0620()*-0.306929);
}

double NNfunction_sb_uLuL::synapse0x2df3450() {
   return (neuron0x2df0960()*-0.0545423);
}

double NNfunction_sb_uLuL::synapse0x2df3490() {
   return (neuron0x2df0ec0()*0.0818372);
}

double NNfunction_sb_uLuL::synapse0x2df4650() {
   return (neuron0x2df10e0()*-0.0678392);
}

double NNfunction_sb_uLuL::synapse0x2df4690() {
   return (neuron0x2df1420()*-0.0392052);
}

double NNfunction_sb_uLuL::synapse0x2df46d0() {
   return (neuron0x2df1760()*0.00939984);
}

double NNfunction_sb_uLuL::synapse0x2df4710() {
   return (neuron0x2df1aa0()*-0.0824001);
}

double NNfunction_sb_uLuL::synapse0x2df4750() {
   return (neuron0x2df1de0()*0.00609982);
}

double NNfunction_sb_uLuL::synapse0x2df4790() {
   return (neuron0x2df2120()*-0.2776);
}

double NNfunction_sb_uLuL::synapse0x2df4b10() {
   return (neuron0x2ded560()*-0.00440511);
}

double NNfunction_sb_uLuL::synapse0x2df4b50() {
   return (neuron0x2ded8a0()*-0.00664063);
}

double NNfunction_sb_uLuL::synapse0x2df4b90() {
   return (neuron0x2dedbe0()*0.0438334);
}

double NNfunction_sb_uLuL::synapse0x2df4bd0() {
   return (neuron0x2dedf20()*-0.0161472);
}

double NNfunction_sb_uLuL::synapse0x2df4c10() {
   return (neuron0x2dee260()*-0.00699354);
}

double NNfunction_sb_uLuL::synapse0x2df4c50() {
   return (neuron0x2dee5a0()*-0.00112102);
}

double NNfunction_sb_uLuL::synapse0x2df4c90() {
   return (neuron0x2dee8e0()*-0.00080791);
}

double NNfunction_sb_uLuL::synapse0x2df4cd0() {
   return (neuron0x2deec20()*0.00778792);
}

double NNfunction_sb_uLuL::synapse0x2df4d10() {
   return (neuron0x2deef60()*0.00853562);
}

double NNfunction_sb_uLuL::synapse0x2df4d50() {
   return (neuron0x2def2a0()*-0.000465693);
}

double NNfunction_sb_uLuL::synapse0x2df4d90() {
   return (neuron0x2def5e0()*0.00573506);
}

double NNfunction_sb_uLuL::synapse0x2df4dd0() {
   return (neuron0x2def920()*-1.01243);
}

double NNfunction_sb_uLuL::synapse0x2df4e10() {
   return (neuron0x2defc60()*0.0535131);
}

double NNfunction_sb_uLuL::synapse0x2df4e50() {
   return (neuron0x2deffa0()*-0.00542862);
}

double NNfunction_sb_uLuL::synapse0x2df4e90() {
   return (neuron0x2df02e0()*0.0137997);
}

double NNfunction_sb_uLuL::synapse0x2df4ed0() {
   return (neuron0x2df0620()*0.0181392);
}

double NNfunction_sb_uLuL::synapse0x2df4960() {
   return (neuron0x2df0960()*0.000476081);
}

double NNfunction_sb_uLuL::synapse0x2df49a0() {
   return (neuron0x2df0ec0()*0.0252971);
}

double NNfunction_sb_uLuL::synapse0x2df5020() {
   return (neuron0x2df10e0()*0.0222208);
}

double NNfunction_sb_uLuL::synapse0x2df5060() {
   return (neuron0x2df1420()*-0.00494232);
}

double NNfunction_sb_uLuL::synapse0x2df50a0() {
   return (neuron0x2df1760()*0.00088184);
}

double NNfunction_sb_uLuL::synapse0x2df50e0() {
   return (neuron0x2df1aa0()*-0.00588785);
}

double NNfunction_sb_uLuL::synapse0x2df5120() {
   return (neuron0x2df1de0()*-0.00268356);
}

double NNfunction_sb_uLuL::synapse0x2df5160() {
   return (neuron0x2df2120()*0.00676201);
}

double NNfunction_sb_uLuL::synapse0x2df54e0() {
   return (neuron0x2ded560()*0.0235087);
}

double NNfunction_sb_uLuL::synapse0x2df5520() {
   return (neuron0x2ded8a0()*0.00202647);
}

double NNfunction_sb_uLuL::synapse0x2df5560() {
   return (neuron0x2dedbe0()*-0.0144307);
}

double NNfunction_sb_uLuL::synapse0x2df55a0() {
   return (neuron0x2dedf20()*-4.56279);
}

double NNfunction_sb_uLuL::synapse0x2df55e0() {
   return (neuron0x2dee260()*0.0115579);
}

double NNfunction_sb_uLuL::synapse0x2df5620() {
   return (neuron0x2dee5a0()*-0.00582108);
}

double NNfunction_sb_uLuL::synapse0x2df5660() {
   return (neuron0x2dee8e0()*0.00816742);
}

double NNfunction_sb_uLuL::synapse0x2df56a0() {
   return (neuron0x2deec20()*0.0133683);
}

double NNfunction_sb_uLuL::synapse0x2df56e0() {
   return (neuron0x2deef60()*-0.00374602);
}

double NNfunction_sb_uLuL::synapse0x2bace30() {
   return (neuron0x2def2a0()*0.00706451);
}

double NNfunction_sb_uLuL::synapse0x2bace70() {
   return (neuron0x2def5e0()*-0.00283122);
}

double NNfunction_sb_uLuL::synapse0x2baceb0() {
   return (neuron0x2def920()*-0.347096);
}

double NNfunction_sb_uLuL::synapse0x2bacef0() {
   return (neuron0x2defc60()*0.0196743);
}

double NNfunction_sb_uLuL::synapse0x2bacf30() {
   return (neuron0x2deffa0()*-0.0294923);
}

double NNfunction_sb_uLuL::synapse0x2bacf70() {
   return (neuron0x2df02e0()*0.00698899);
}

double NNfunction_sb_uLuL::synapse0x2bacfb0() {
   return (neuron0x2df0620()*0.00794716);
}

double NNfunction_sb_uLuL::synapse0x2df5330() {
   return (neuron0x2df0960()*0.0205542);
}

double NNfunction_sb_uLuL::synapse0x2df5370() {
   return (neuron0x2df0ec0()*0.0312969);
}

double NNfunction_sb_uLuL::synapse0x2bad100() {
   return (neuron0x2df10e0()*0.000732997);
}

double NNfunction_sb_uLuL::synapse0x2bad140() {
   return (neuron0x2df1420()*-0.014065);
}

double NNfunction_sb_uLuL::synapse0x2bad180() {
   return (neuron0x2df1760()*0.00604851);
}

double NNfunction_sb_uLuL::synapse0x2bad1c0() {
   return (neuron0x2df1aa0()*0.00177883);
}

double NNfunction_sb_uLuL::synapse0x2bad200() {
   return (neuron0x2df1de0()*-0.0113085);
}

double NNfunction_sb_uLuL::synapse0x2df5f30() {
   return (neuron0x2df2120()*-0.0175229);
}

double NNfunction_sb_uLuL::synapse0x2df62b0() {
   return (neuron0x2ded560()*-0.111174);
}

double NNfunction_sb_uLuL::synapse0x2df62f0() {
   return (neuron0x2ded8a0()*0.128306);
}

double NNfunction_sb_uLuL::synapse0x2df6330() {
   return (neuron0x2dedbe0()*1.2799);
}

double NNfunction_sb_uLuL::synapse0x2df6370() {
   return (neuron0x2dedf20()*-1.18995);
}

double NNfunction_sb_uLuL::synapse0x2df63b0() {
   return (neuron0x2dee260()*0.0287542);
}

double NNfunction_sb_uLuL::synapse0x2df63f0() {
   return (neuron0x2dee5a0()*0.115818);
}

double NNfunction_sb_uLuL::synapse0x2df6430() {
   return (neuron0x2dee8e0()*0.402837);
}

double NNfunction_sb_uLuL::synapse0x2df6470() {
   return (neuron0x2deec20()*0.180442);
}

double NNfunction_sb_uLuL::synapse0x2df64b0() {
   return (neuron0x2deef60()*-0.0707343);
}

double NNfunction_sb_uLuL::synapse0x2df64f0() {
   return (neuron0x2def2a0()*0.0423823);
}

double NNfunction_sb_uLuL::synapse0x2df6530() {
   return (neuron0x2def5e0()*0.0273009);
}

double NNfunction_sb_uLuL::synapse0x2df6570() {
   return (neuron0x2def920()*-0.47079);
}

double NNfunction_sb_uLuL::synapse0x2df65b0() {
   return (neuron0x2defc60()*-0.306519);
}

double NNfunction_sb_uLuL::synapse0x2df65f0() {
   return (neuron0x2deffa0()*-0.0516981);
}

double NNfunction_sb_uLuL::synapse0x2df6630() {
   return (neuron0x2df02e0()*-0.14942);
}

double NNfunction_sb_uLuL::synapse0x2df6670() {
   return (neuron0x2df0620()*-0.134044);
}

double NNfunction_sb_uLuL::synapse0x2df6100() {
   return (neuron0x2df0960()*0.162434);
}

double NNfunction_sb_uLuL::synapse0x2df6140() {
   return (neuron0x2df0ec0()*-0.086454);
}

double NNfunction_sb_uLuL::synapse0x2df67c0() {
   return (neuron0x2df10e0()*-0.0451937);
}

double NNfunction_sb_uLuL::synapse0x2df6800() {
   return (neuron0x2df1420()*-0.325605);
}

double NNfunction_sb_uLuL::synapse0x2df6840() {
   return (neuron0x2df1760()*0.072704);
}

double NNfunction_sb_uLuL::synapse0x2df6880() {
   return (neuron0x2df1aa0()*-0.0374904);
}

double NNfunction_sb_uLuL::synapse0x2df68c0() {
   return (neuron0x2df1de0()*-0.0577065);
}

double NNfunction_sb_uLuL::synapse0x2df6900() {
   return (neuron0x2df2120()*0.125121);
}

double NNfunction_sb_uLuL::synapse0x2df6c80() {
   return (neuron0x2ded560()*-0.0219985);
}

double NNfunction_sb_uLuL::synapse0x2df6cc0() {
   return (neuron0x2ded8a0()*0.219277);
}

double NNfunction_sb_uLuL::synapse0x2df6d00() {
   return (neuron0x2dedbe0()*-0.493565);
}

double NNfunction_sb_uLuL::synapse0x2df6d40() {
   return (neuron0x2dedf20()*0.60512);
}

double NNfunction_sb_uLuL::synapse0x2df6d80() {
   return (neuron0x2dee260()*-0.0387621);
}

double NNfunction_sb_uLuL::synapse0x2df6dc0() {
   return (neuron0x2dee5a0()*-0.224985);
}

double NNfunction_sb_uLuL::synapse0x2df6e00() {
   return (neuron0x2dee8e0()*-0.60553);
}

double NNfunction_sb_uLuL::synapse0x2df6e40() {
   return (neuron0x2deec20()*-0.671928);
}

double NNfunction_sb_uLuL::synapse0x2df6e80() {
   return (neuron0x2deef60()*0.196862);
}

double NNfunction_sb_uLuL::synapse0x2df6ec0() {
   return (neuron0x2def2a0()*0.397699);
}

double NNfunction_sb_uLuL::synapse0x2df6f00() {
   return (neuron0x2def5e0()*0.309229);
}

double NNfunction_sb_uLuL::synapse0x2df6f40() {
   return (neuron0x2def920()*0.970581);
}

double NNfunction_sb_uLuL::synapse0x2df6f80() {
   return (neuron0x2defc60()*0.407096);
}

double NNfunction_sb_uLuL::synapse0x2df6fc0() {
   return (neuron0x2deffa0()*0.723006);
}

double NNfunction_sb_uLuL::synapse0x2df7000() {
   return (neuron0x2df02e0()*0.0621055);
}

double NNfunction_sb_uLuL::synapse0x2df7040() {
   return (neuron0x2df0620()*-0.137448);
}

double NNfunction_sb_uLuL::synapse0x2df6ad0() {
   return (neuron0x2df0960()*-0.289269);
}

double NNfunction_sb_uLuL::synapse0x2df6b10() {
   return (neuron0x2df0ec0()*0.386893);
}

double NNfunction_sb_uLuL::synapse0x2df7190() {
   return (neuron0x2df10e0()*0.187755);
}

double NNfunction_sb_uLuL::synapse0x2df71d0() {
   return (neuron0x2df1420()*0.236958);
}

double NNfunction_sb_uLuL::synapse0x2df7210() {
   return (neuron0x2df1760()*-0.471318);
}

double NNfunction_sb_uLuL::synapse0x2df7250() {
   return (neuron0x2df1aa0()*-0.225676);
}

double NNfunction_sb_uLuL::synapse0x2df7290() {
   return (neuron0x2df1de0()*-0.448047);
}

double NNfunction_sb_uLuL::synapse0x2df72d0() {
   return (neuron0x2df2120()*0.0699473);
}

double NNfunction_sb_uLuL::synapse0x2df0db0() {
   return (neuron0x2ded560()*0.132536);
}

double NNfunction_sb_uLuL::synapse0x2df0df0() {
   return (neuron0x2ded8a0()*-0.0386242);
}

double NNfunction_sb_uLuL::synapse0x2df0e30() {
   return (neuron0x2dedbe0()*-0.580161);
}

double NNfunction_sb_uLuL::synapse0x2df0e70() {
   return (neuron0x2dedf20()*-0.151);
}

double NNfunction_sb_uLuL::synapse0x2df7860() {
   return (neuron0x2dee260()*0.747105);
}

double NNfunction_sb_uLuL::synapse0x2df78a0() {
   return (neuron0x2dee5a0()*0.129658);
}

double NNfunction_sb_uLuL::synapse0x2df78e0() {
   return (neuron0x2dee8e0()*0.247341);
}

double NNfunction_sb_uLuL::synapse0x2df7920() {
   return (neuron0x2deec20()*0.667177);
}

double NNfunction_sb_uLuL::synapse0x2df7960() {
   return (neuron0x2deef60()*0.0248014);
}

double NNfunction_sb_uLuL::synapse0x2df79a0() {
   return (neuron0x2def2a0()*-0.257007);
}

double NNfunction_sb_uLuL::synapse0x2df79e0() {
   return (neuron0x2def5e0()*0.0732339);
}

double NNfunction_sb_uLuL::synapse0x2df7a20() {
   return (neuron0x2def920()*-1.01888);
}

double NNfunction_sb_uLuL::synapse0x2df7a60() {
   return (neuron0x2defc60()*0.304696);
}

double NNfunction_sb_uLuL::synapse0x2df7aa0() {
   return (neuron0x2deffa0()*-0.941123);
}

double NNfunction_sb_uLuL::synapse0x2df7ae0() {
   return (neuron0x2df02e0()*-0.542329);
}

double NNfunction_sb_uLuL::synapse0x2df7b20() {
   return (neuron0x2df0620()*0.438646);
}

double NNfunction_sb_uLuL::synapse0x2df74a0() {
   return (neuron0x2df0960()*-0.909347);
}

double NNfunction_sb_uLuL::synapse0x2df74e0() {
   return (neuron0x2df0ec0()*0.693002);
}

double NNfunction_sb_uLuL::synapse0x2df7c70() {
   return (neuron0x2df10e0()*-0.0331312);
}

double NNfunction_sb_uLuL::synapse0x2df7cb0() {
   return (neuron0x2df1420()*0.367037);
}

double NNfunction_sb_uLuL::synapse0x2df7cf0() {
   return (neuron0x2df1760()*-0.114427);
}

double NNfunction_sb_uLuL::synapse0x2df7d30() {
   return (neuron0x2df1aa0()*-0.138181);
}

double NNfunction_sb_uLuL::synapse0x2df7d70() {
   return (neuron0x2df1de0()*0.173553);
}

double NNfunction_sb_uLuL::synapse0x2df7db0() {
   return (neuron0x2df2120()*-0.391254);
}

double NNfunction_sb_uLuL::synapse0x2df8130() {
   return (neuron0x2ded560()*0.0483112);
}

double NNfunction_sb_uLuL::synapse0x2df8170() {
   return (neuron0x2ded8a0()*-0.00745324);
}

double NNfunction_sb_uLuL::synapse0x2df81b0() {
   return (neuron0x2dedbe0()*0.331247);
}

double NNfunction_sb_uLuL::synapse0x2df81f0() {
   return (neuron0x2dedf20()*-0.308537);
}

double NNfunction_sb_uLuL::synapse0x2df8230() {
   return (neuron0x2dee260()*0.157931);
}

double NNfunction_sb_uLuL::synapse0x2df8270() {
   return (neuron0x2dee5a0()*0.0763769);
}

double NNfunction_sb_uLuL::synapse0x2df82b0() {
   return (neuron0x2dee8e0()*-0.0338065);
}

double NNfunction_sb_uLuL::synapse0x2df82f0() {
   return (neuron0x2deec20()*0.0603805);
}

double NNfunction_sb_uLuL::synapse0x2df8330() {
   return (neuron0x2deef60()*-0.375393);
}

double NNfunction_sb_uLuL::synapse0x2df8370() {
   return (neuron0x2def2a0()*-0.667143);
}

double NNfunction_sb_uLuL::synapse0x2df83b0() {
   return (neuron0x2def5e0()*0.214572);
}

double NNfunction_sb_uLuL::synapse0x2df83f0() {
   return (neuron0x2def920()*-1.09335);
}

double NNfunction_sb_uLuL::synapse0x2df8430() {
   return (neuron0x2defc60()*-0.131922);
}

double NNfunction_sb_uLuL::synapse0x2df8470() {
   return (neuron0x2deffa0()*-0.368165);
}

double NNfunction_sb_uLuL::synapse0x2df84b0() {
   return (neuron0x2df02e0()*0.0564862);
}

double NNfunction_sb_uLuL::synapse0x2df84f0() {
   return (neuron0x2df0620()*0.144172);
}

double NNfunction_sb_uLuL::synapse0x2df7f80() {
   return (neuron0x2df0960()*-0.308327);
}

double NNfunction_sb_uLuL::synapse0x2df7fc0() {
   return (neuron0x2df0ec0()*0.0554977);
}

double NNfunction_sb_uLuL::synapse0x2df8640() {
   return (neuron0x2df10e0()*-0.0324851);
}

double NNfunction_sb_uLuL::synapse0x2df8680() {
   return (neuron0x2df1420()*-0.200519);
}

double NNfunction_sb_uLuL::synapse0x2df86c0() {
   return (neuron0x2df1760()*-0.0570417);
}

double NNfunction_sb_uLuL::synapse0x2df8700() {
   return (neuron0x2df1aa0()*-0.0447182);
}

double NNfunction_sb_uLuL::synapse0x2df8740() {
   return (neuron0x2df1de0()*-0.000169373);
}

double NNfunction_sb_uLuL::synapse0x2df8780() {
   return (neuron0x2df2120()*0.0889388);
}

double NNfunction_sb_uLuL::synapse0x2df8b00() {
   return (neuron0x2ded560()*-0.0134698);
}

double NNfunction_sb_uLuL::synapse0x2df8b40() {
   return (neuron0x2ded8a0()*-0.0069101);
}

double NNfunction_sb_uLuL::synapse0x2df8b80() {
   return (neuron0x2dedbe0()*0.000955172);
}

double NNfunction_sb_uLuL::synapse0x2df8bc0() {
   return (neuron0x2dedf20()*0.0579977);
}

double NNfunction_sb_uLuL::synapse0x2df8c00() {
   return (neuron0x2dee260()*-0.0228755);
}

double NNfunction_sb_uLuL::synapse0x2df8c40() {
   return (neuron0x2dee5a0()*-0.0123863);
}

double NNfunction_sb_uLuL::synapse0x2df8c80() {
   return (neuron0x2dee8e0()*-0.00164348);
}

double NNfunction_sb_uLuL::synapse0x2df8cc0() {
   return (neuron0x2deec20()*0.0111902);
}

double NNfunction_sb_uLuL::synapse0x2df8d00() {
   return (neuron0x2deef60()*0.0210705);
}

double NNfunction_sb_uLuL::synapse0x2df8d40() {
   return (neuron0x2def2a0()*0.00674245);
}

double NNfunction_sb_uLuL::synapse0x2df8d80() {
   return (neuron0x2def5e0()*0.0147763);
}

double NNfunction_sb_uLuL::synapse0x2df8dc0() {
   return (neuron0x2def920()*-0.140212);
}

double NNfunction_sb_uLuL::synapse0x2df8e00() {
   return (neuron0x2defc60()*0.531485);
}

double NNfunction_sb_uLuL::synapse0x2df8e40() {
   return (neuron0x2deffa0()*-0.0271053);
}

double NNfunction_sb_uLuL::synapse0x2df8e80() {
   return (neuron0x2df02e0()*0.244537);
}

double NNfunction_sb_uLuL::synapse0x2df8ec0() {
   return (neuron0x2df0620()*0.23661);
}

double NNfunction_sb_uLuL::synapse0x2df8950() {
   return (neuron0x2df0960()*-0.0117431);
}

double NNfunction_sb_uLuL::synapse0x2df8990() {
   return (neuron0x2df0ec0()*0.248072);
}

double NNfunction_sb_uLuL::synapse0x2df5720() {
   return (neuron0x2df10e0()*0.250015);
}

double NNfunction_sb_uLuL::synapse0x2df5760() {
   return (neuron0x2df1420()*-0.0107566);
}

double NNfunction_sb_uLuL::synapse0x2df57a0() {
   return (neuron0x2df1760()*0.0106613);
}

double NNfunction_sb_uLuL::synapse0x2df57e0() {
   return (neuron0x2df1aa0()*-0.00419331);
}

double NNfunction_sb_uLuL::synapse0x2df5820() {
   return (neuron0x2df1de0()*-0.0128987);
}

double NNfunction_sb_uLuL::synapse0x2df5860() {
   return (neuron0x2df2120()*0.0143328);
}

double NNfunction_sb_uLuL::synapse0x2df5be0() {
   return (neuron0x2ded560()*-0.0739508);
}

double NNfunction_sb_uLuL::synapse0x2df5c20() {
   return (neuron0x2ded8a0()*-0.18274);
}

double NNfunction_sb_uLuL::synapse0x2df5c60() {
   return (neuron0x2dedbe0()*-0.0385688);
}

double NNfunction_sb_uLuL::synapse0x2df5ca0() {
   return (neuron0x2dedf20()*-0.690614);
}

double NNfunction_sb_uLuL::synapse0x2df5ce0() {
   return (neuron0x2dee260()*-0.319462);
}

double NNfunction_sb_uLuL::synapse0x2df5d20() {
   return (neuron0x2dee5a0()*-0.0389292);
}

double NNfunction_sb_uLuL::synapse0x2df5d60() {
   return (neuron0x2dee8e0()*-0.165205);
}

double NNfunction_sb_uLuL::synapse0x2df5da0() {
   return (neuron0x2deec20()*0.238101);
}

double NNfunction_sb_uLuL::synapse0x2df5de0() {
   return (neuron0x2deef60()*0.0786412);
}

double NNfunction_sb_uLuL::synapse0x2df5e20() {
   return (neuron0x2def2a0()*0.0171166);
}

double NNfunction_sb_uLuL::synapse0x2df5e60() {
   return (neuron0x2def5e0()*-0.176973);
}

double NNfunction_sb_uLuL::synapse0x2df5ea0() {
   return (neuron0x2def920()*0.73044);
}

double NNfunction_sb_uLuL::synapse0x2df5ee0() {
   return (neuron0x2defc60()*-0.29618);
}

double NNfunction_sb_uLuL::synapse0x2dfa020() {
   return (neuron0x2deffa0()*0.282313);
}

double NNfunction_sb_uLuL::synapse0x2dfa060() {
   return (neuron0x2df02e0()*-0.61969);
}

double NNfunction_sb_uLuL::synapse0x2dfa0a0() {
   return (neuron0x2df0620()*-0.122639);
}

double NNfunction_sb_uLuL::synapse0x2df5a30() {
   return (neuron0x2df0960()*0.0819231);
}

double NNfunction_sb_uLuL::synapse0x2df5a70() {
   return (neuron0x2df0ec0()*-0.0536062);
}

double NNfunction_sb_uLuL::synapse0x2dfa1f0() {
   return (neuron0x2df10e0()*0.0165184);
}

double NNfunction_sb_uLuL::synapse0x2dfa230() {
   return (neuron0x2df1420()*-0.0643938);
}

double NNfunction_sb_uLuL::synapse0x2dfa270() {
   return (neuron0x2df1760()*-0.040951);
}

double NNfunction_sb_uLuL::synapse0x2dfa2b0() {
   return (neuron0x2df1aa0()*-0.0551725);
}

double NNfunction_sb_uLuL::synapse0x2dfa2f0() {
   return (neuron0x2df1de0()*-0.0128012);
}

double NNfunction_sb_uLuL::synapse0x2dfa330() {
   return (neuron0x2df2120()*0.0429054);
}

double NNfunction_sb_uLuL::synapse0x2dfa6b0() {
   return (neuron0x2ded560()*-0.0469613);
}

double NNfunction_sb_uLuL::synapse0x2dfa6f0() {
   return (neuron0x2ded8a0()*0.122144);
}

double NNfunction_sb_uLuL::synapse0x2dfa730() {
   return (neuron0x2dedbe0()*-0.344253);
}

double NNfunction_sb_uLuL::synapse0x2dfa770() {
   return (neuron0x2dedf20()*0.573285);
}

double NNfunction_sb_uLuL::synapse0x2dfa7b0() {
   return (neuron0x2dee260()*-0.184903);
}

double NNfunction_sb_uLuL::synapse0x2dfa7f0() {
   return (neuron0x2dee5a0()*-0.212163);
}

double NNfunction_sb_uLuL::synapse0x2dfa830() {
   return (neuron0x2dee8e0()*0.111981);
}

double NNfunction_sb_uLuL::synapse0x2dfa870() {
   return (neuron0x2deec20()*-0.0471809);
}

double NNfunction_sb_uLuL::synapse0x2dfa8b0() {
   return (neuron0x2deef60()*0.175985);
}

double NNfunction_sb_uLuL::synapse0x2dfa8f0() {
   return (neuron0x2def2a0()*0.0952304);
}

double NNfunction_sb_uLuL::synapse0x2dfa930() {
   return (neuron0x2def5e0()*0.435946);
}

double NNfunction_sb_uLuL::synapse0x2dfa970() {
   return (neuron0x2def920()*0.591624);
}

double NNfunction_sb_uLuL::synapse0x2dfa9b0() {
   return (neuron0x2defc60()*-0.472576);
}

double NNfunction_sb_uLuL::synapse0x2dfa9f0() {
   return (neuron0x2deffa0()*-0.103227);
}

double NNfunction_sb_uLuL::synapse0x2dfaa30() {
   return (neuron0x2df02e0()*-0.161478);
}

double NNfunction_sb_uLuL::synapse0x2dfaa70() {
   return (neuron0x2df0620()*-0.271572);
}

double NNfunction_sb_uLuL::synapse0x2dfa500() {
   return (neuron0x2df0960()*-0.129549);
}

double NNfunction_sb_uLuL::synapse0x2dfa540() {
   return (neuron0x2df0ec0()*0.0175854);
}

double NNfunction_sb_uLuL::synapse0x2dfabc0() {
   return (neuron0x2df10e0()*-0.219932);
}

double NNfunction_sb_uLuL::synapse0x2dfac00() {
   return (neuron0x2df1420()*-0.576009);
}

double NNfunction_sb_uLuL::synapse0x2dfac40() {
   return (neuron0x2df1760()*0.158881);
}

double NNfunction_sb_uLuL::synapse0x2dfac80() {
   return (neuron0x2df1aa0()*-0.0192794);
}

double NNfunction_sb_uLuL::synapse0x2dfacc0() {
   return (neuron0x2df1de0()*-0.0869745);
}

double NNfunction_sb_uLuL::synapse0x2dfad00() {
   return (neuron0x2df2120()*0.00879307);
}

double NNfunction_sb_uLuL::synapse0x2dfb080() {
   return (neuron0x2ded560()*-0.0140378);
}

double NNfunction_sb_uLuL::synapse0x2dfb0c0() {
   return (neuron0x2ded8a0()*-0.00126999);
}

double NNfunction_sb_uLuL::synapse0x2dfb100() {
   return (neuron0x2dedbe0()*-0.0317272);
}

double NNfunction_sb_uLuL::synapse0x2dfb140() {
   return (neuron0x2dedf20()*-2.87302);
}

double NNfunction_sb_uLuL::synapse0x2dfb180() {
   return (neuron0x2dee260()*-0.0271416);
}

double NNfunction_sb_uLuL::synapse0x2dfb1c0() {
   return (neuron0x2dee5a0()*0.0360837);
}

double NNfunction_sb_uLuL::synapse0x2dfb200() {
   return (neuron0x2dee8e0()*0.0111495);
}

double NNfunction_sb_uLuL::synapse0x2dfb240() {
   return (neuron0x2deec20()*0.00849079);
}

double NNfunction_sb_uLuL::synapse0x2dfb280() {
   return (neuron0x2deef60()*0.0502202);
}

double NNfunction_sb_uLuL::synapse0x2dfb2c0() {
   return (neuron0x2def2a0()*-0.0372167);
}

double NNfunction_sb_uLuL::synapse0x2dfb300() {
   return (neuron0x2def5e0()*0.0460769);
}

double NNfunction_sb_uLuL::synapse0x2dfb340() {
   return (neuron0x2def920()*-0.751449);
}

double NNfunction_sb_uLuL::synapse0x2dfb380() {
   return (neuron0x2defc60()*0.0158149);
}

double NNfunction_sb_uLuL::synapse0x2dfb3c0() {
   return (neuron0x2deffa0()*-0.0172044);
}

double NNfunction_sb_uLuL::synapse0x2dfb400() {
   return (neuron0x2df02e0()*-0.0142095);
}

double NNfunction_sb_uLuL::synapse0x2dfb440() {
   return (neuron0x2df0620()*-0.0103777);
}

double NNfunction_sb_uLuL::synapse0x2dfaed0() {
   return (neuron0x2df0960()*-0.0582651);
}

double NNfunction_sb_uLuL::synapse0x2dfaf10() {
   return (neuron0x2df0ec0()*-0.00732862);
}

double NNfunction_sb_uLuL::synapse0x2dfb590() {
   return (neuron0x2df10e0()*0.0239779);
}

double NNfunction_sb_uLuL::synapse0x2dfb5d0() {
   return (neuron0x2df1420()*0.00910829);
}

double NNfunction_sb_uLuL::synapse0x2dfb610() {
   return (neuron0x2df1760()*0.0190043);
}

double NNfunction_sb_uLuL::synapse0x2dfb650() {
   return (neuron0x2df1aa0()*0.00985502);
}

double NNfunction_sb_uLuL::synapse0x2dfb690() {
   return (neuron0x2df1de0()*0.028317);
}

double NNfunction_sb_uLuL::synapse0x2dfb6d0() {
   return (neuron0x2df2120()*0.0240555);
}

double NNfunction_sb_uLuL::synapse0x2dfba50() {
   return (neuron0x2ded560()*0.0843119);
}

double NNfunction_sb_uLuL::synapse0x2dfba90() {
   return (neuron0x2ded8a0()*0.0603191);
}

double NNfunction_sb_uLuL::synapse0x2dfbad0() {
   return (neuron0x2dedbe0()*-0.513886);
}

double NNfunction_sb_uLuL::synapse0x2dfbb10() {
   return (neuron0x2dedf20()*0.840117);
}

double NNfunction_sb_uLuL::synapse0x2dfbb50() {
   return (neuron0x2dee260()*0.22856);
}

double NNfunction_sb_uLuL::synapse0x2dfbb90() {
   return (neuron0x2dee5a0()*0.285611);
}

double NNfunction_sb_uLuL::synapse0x2dfbbd0() {
   return (neuron0x2dee8e0()*0.464708);
}

double NNfunction_sb_uLuL::synapse0x2dfbc10() {
   return (neuron0x2deec20()*0.526983);
}

double NNfunction_sb_uLuL::synapse0x2dfbc50() {
   return (neuron0x2deef60()*-0.0579211);
}

double NNfunction_sb_uLuL::synapse0x2dfbc90() {
   return (neuron0x2def2a0()*-0.0557787);
}

double NNfunction_sb_uLuL::synapse0x2dfbcd0() {
   return (neuron0x2def5e0()*-0.102434);
}

double NNfunction_sb_uLuL::synapse0x2dfbd10() {
   return (neuron0x2def920()*-0.380072);
}

double NNfunction_sb_uLuL::synapse0x2dfbd50() {
   return (neuron0x2defc60()*-0.517643);
}

double NNfunction_sb_uLuL::synapse0x2dfbd90() {
   return (neuron0x2deffa0()*0.170429);
}

double NNfunction_sb_uLuL::synapse0x2dfbdd0() {
   return (neuron0x2df02e0()*0.0263176);
}

double NNfunction_sb_uLuL::synapse0x2dfbe10() {
   return (neuron0x2df0620()*-0.0261161);
}

double NNfunction_sb_uLuL::synapse0x2dfb8a0() {
   return (neuron0x2df0960()*0.228335);
}

double NNfunction_sb_uLuL::synapse0x2dfb8e0() {
   return (neuron0x2df0ec0()*-0.198723);
}

double NNfunction_sb_uLuL::synapse0x2dfbf60() {
   return (neuron0x2df10e0()*0.0866852);
}

double NNfunction_sb_uLuL::synapse0x2dfbfa0() {
   return (neuron0x2df1420()*-0.276813);
}

double NNfunction_sb_uLuL::synapse0x2dfbfe0() {
   return (neuron0x2df1760()*-0.142339);
}

double NNfunction_sb_uLuL::synapse0x2dfc020() {
   return (neuron0x2df1aa0()*0.129253);
}

double NNfunction_sb_uLuL::synapse0x2dfc060() {
   return (neuron0x2df1de0()*-0.02972);
}

double NNfunction_sb_uLuL::synapse0x2dfc0a0() {
   return (neuron0x2df2120()*-0.0743482);
}

double NNfunction_sb_uLuL::synapse0x2dfc420() {
   return (neuron0x2ded560()*-0.0163759);
}

double NNfunction_sb_uLuL::synapse0x2ded780() {
   return (neuron0x2ded8a0()*-0.0026556);
}

double NNfunction_sb_uLuL::synapse0x2ded7c0() {
   return (neuron0x2dedbe0()*0.072498);
}

double NNfunction_sb_uLuL::synapse0x2dedac0() {
   return (neuron0x2dedf20()*-0.0216324);
}

double NNfunction_sb_uLuL::synapse0x2dedb00() {
   return (neuron0x2dee260()*-0.0185532);
}

double NNfunction_sb_uLuL::synapse0x2dede00() {
   return (neuron0x2dee5a0()*-0.00499338);
}

double NNfunction_sb_uLuL::synapse0x2dede40() {
   return (neuron0x2dee8e0()*-0.00871502);
}

double NNfunction_sb_uLuL::synapse0x2dee140() {
   return (neuron0x2deec20()*0.00687075);
}

double NNfunction_sb_uLuL::synapse0x2dee180() {
   return (neuron0x2deef60()*0.0153234);
}

double NNfunction_sb_uLuL::synapse0x2dee480() {
   return (neuron0x2def2a0()*0.00132989);
}

double NNfunction_sb_uLuL::synapse0x2dee4c0() {
   return (neuron0x2def5e0()*0.00371339);
}

double NNfunction_sb_uLuL::synapse0x2dee7c0() {
   return (neuron0x2def920()*-2.03408);
}

double NNfunction_sb_uLuL::synapse0x2dee800() {
   return (neuron0x2defc60()*0.0252831);
}

double NNfunction_sb_uLuL::synapse0x2deeb00() {
   return (neuron0x2deffa0()*-0.0255482);
}

double NNfunction_sb_uLuL::synapse0x2deeb40() {
   return (neuron0x2df02e0()*-0.00879701);
}

double NNfunction_sb_uLuL::synapse0x2deee40() {
   return (neuron0x2df0620()*-0.00683057);
}

double NNfunction_sb_uLuL::synapse0x2deee80() {
   return (neuron0x2df0960()*-0.0117609);
}

double NNfunction_sb_uLuL::synapse0x2def180() {
   return (neuron0x2df0ec0()*0.00706049);
}

double NNfunction_sb_uLuL::synapse0x2def1c0() {
   return (neuron0x2df10e0()*0.00591708);
}

double NNfunction_sb_uLuL::synapse0x2def4c0() {
   return (neuron0x2df1420()*-0.00252816);
}

double NNfunction_sb_uLuL::synapse0x2def500() {
   return (neuron0x2df1760()*-0.00010753);
}

double NNfunction_sb_uLuL::synapse0x2def800() {
   return (neuron0x2df1aa0()*-0.0101708);
}

double NNfunction_sb_uLuL::synapse0x2def840() {
   return (neuron0x2df1de0()*0.00837329);
}

double NNfunction_sb_uLuL::synapse0x2defb40() {
   return (neuron0x2df2120()*0.00905776);
}

double NNfunction_sb_uLuL::synapse0x2defb80() {
   return (neuron0x2ded560()*0.312094);
}

double NNfunction_sb_uLuL::synapse0x2df0840() {
   return (neuron0x2ded8a0()*-0.164677);
}

double NNfunction_sb_uLuL::synapse0x2df0880() {
   return (neuron0x2dedbe0()*-0.359959);
}

double NNfunction_sb_uLuL::synapse0x2dfc270() {
   return (neuron0x2dedf20()*0.444496);
}

double NNfunction_sb_uLuL::synapse0x2dfc2b0() {
   return (neuron0x2dee260()*0.116915);
}

double NNfunction_sb_uLuL::synapse0x2df0b80() {
   return (neuron0x2dee5a0()*1.1677);
}

double NNfunction_sb_uLuL::synapse0x2df0bc0() {
   return (neuron0x2dee8e0()*-0.286784);
}

double NNfunction_sb_uLuL::synapse0x2b9eb50() {
   return (neuron0x2deec20()*-0.407129);
}

double NNfunction_sb_uLuL::synapse0x2b9eb90() {
   return (neuron0x2deef60()*0.139804);
}

double NNfunction_sb_uLuL::synapse0x2df1300() {
   return (neuron0x2def2a0()*-0.0481998);
}

double NNfunction_sb_uLuL::synapse0x2df1340() {
   return (neuron0x2def5e0()*0.208957);
}

double NNfunction_sb_uLuL::synapse0x2df1640() {
   return (neuron0x2def920()*0.253928);
}

double NNfunction_sb_uLuL::synapse0x2df1680() {
   return (neuron0x2defc60()*-0.0797621);
}

double NNfunction_sb_uLuL::synapse0x2df1980() {
   return (neuron0x2deffa0()*-0.0656359);
}

double NNfunction_sb_uLuL::synapse0x2df19c0() {
   return (neuron0x2df02e0()*0.177266);
}

double NNfunction_sb_uLuL::synapse0x2df1cc0() {
   return (neuron0x2df0620()*-0.248029);
}

double NNfunction_sb_uLuL::synapse0x2df1d00() {
   return (neuron0x2df0960()*-0.0500125);
}

double NNfunction_sb_uLuL::synapse0x2df2000() {
   return (neuron0x2df0ec0()*-0.149174);
}

double NNfunction_sb_uLuL::synapse0x2df2040() {
   return (neuron0x2df10e0()*0.12382);
}

double NNfunction_sb_uLuL::synapse0x2df2340() {
   return (neuron0x2df1420()*0.086259);
}

double NNfunction_sb_uLuL::synapse0x2df2380() {
   return (neuron0x2df1760()*-0.0908154);
}

double NNfunction_sb_uLuL::synapse0x2defe80() {
   return (neuron0x2df1aa0()*-0.0602798);
}

double NNfunction_sb_uLuL::synapse0x2defec0() {
   return (neuron0x2df1de0()*-0.0241859);
}

double NNfunction_sb_uLuL::synapse0x2dfe190() {
   return (neuron0x2df2120()*-0.297668);
}

double NNfunction_sb_uLuL::synapse0x2dfe510() {
   return (neuron0x2ded560()*0.0233527);
}

double NNfunction_sb_uLuL::synapse0x2dfe550() {
   return (neuron0x2ded8a0()*0.0195876);
}

double NNfunction_sb_uLuL::synapse0x2dfe590() {
   return (neuron0x2dedbe0()*0.0405328);
}

double NNfunction_sb_uLuL::synapse0x2dfe5d0() {
   return (neuron0x2dedf20()*0.0886321);
}

double NNfunction_sb_uLuL::synapse0x2dfe610() {
   return (neuron0x2dee260()*0.150719);
}

double NNfunction_sb_uLuL::synapse0x2dfe650() {
   return (neuron0x2dee5a0()*-0.616257);
}

double NNfunction_sb_uLuL::synapse0x2dfe690() {
   return (neuron0x2dee8e0()*0.780224);
}

double NNfunction_sb_uLuL::synapse0x2dfe6d0() {
   return (neuron0x2deec20()*-0.490776);
}

double NNfunction_sb_uLuL::synapse0x2dfe710() {
   return (neuron0x2deef60()*0.176498);
}

double NNfunction_sb_uLuL::synapse0x2dfe750() {
   return (neuron0x2def2a0()*-0.162652);
}

double NNfunction_sb_uLuL::synapse0x2dfe790() {
   return (neuron0x2def5e0()*-0.216851);
}

double NNfunction_sb_uLuL::synapse0x2dfe7d0() {
   return (neuron0x2def920()*-0.516148);
}

double NNfunction_sb_uLuL::synapse0x2dfe810() {
   return (neuron0x2defc60()*0.162034);
}

double NNfunction_sb_uLuL::synapse0x2dfe850() {
   return (neuron0x2deffa0()*0.0336234);
}

double NNfunction_sb_uLuL::synapse0x2dfe890() {
   return (neuron0x2df02e0()*0.0377028);
}

double NNfunction_sb_uLuL::synapse0x2dfe8d0() {
   return (neuron0x2df0620()*-0.0618071);
}

double NNfunction_sb_uLuL::synapse0x2dfe360() {
   return (neuron0x2df0960()*-0.144014);
}

double NNfunction_sb_uLuL::synapse0x2dfe3a0() {
   return (neuron0x2df0ec0()*-0.0801705);
}

double NNfunction_sb_uLuL::synapse0x2dfea20() {
   return (neuron0x2df10e0()*-0.0599037);
}

double NNfunction_sb_uLuL::synapse0x2dfea60() {
   return (neuron0x2df1420()*-0.0468742);
}

double NNfunction_sb_uLuL::synapse0x2dfeaa0() {
   return (neuron0x2df1760()*-0.0891785);
}

double NNfunction_sb_uLuL::synapse0x2dfeae0() {
   return (neuron0x2df1aa0()*0.230554);
}

double NNfunction_sb_uLuL::synapse0x2dfeb20() {
   return (neuron0x2df1de0()*0.0700708);
}

double NNfunction_sb_uLuL::synapse0x2dfeb60() {
   return (neuron0x2df2120()*0.124733);
}

double NNfunction_sb_uLuL::synapse0x2dfeee0() {
   return (neuron0x2ded560()*0.199282);
}

double NNfunction_sb_uLuL::synapse0x2dfef20() {
   return (neuron0x2ded8a0()*0.0499298);
}

double NNfunction_sb_uLuL::synapse0x2dfef60() {
   return (neuron0x2dedbe0()*-0.0460163);
}

double NNfunction_sb_uLuL::synapse0x2dfefa0() {
   return (neuron0x2dedf20()*0.484912);
}

double NNfunction_sb_uLuL::synapse0x2dfefe0() {
   return (neuron0x2dee260()*-0.115487);
}

double NNfunction_sb_uLuL::synapse0x2dff020() {
   return (neuron0x2dee5a0()*-0.0718882);
}

double NNfunction_sb_uLuL::synapse0x2dff060() {
   return (neuron0x2dee8e0()*-0.266037);
}

double NNfunction_sb_uLuL::synapse0x2dff0a0() {
   return (neuron0x2deec20()*-0.00630145);
}

double NNfunction_sb_uLuL::synapse0x2dff0e0() {
   return (neuron0x2deef60()*-0.822335);
}

double NNfunction_sb_uLuL::synapse0x2dff120() {
   return (neuron0x2def2a0()*0.153922);
}

double NNfunction_sb_uLuL::synapse0x2dff160() {
   return (neuron0x2def5e0()*0.0940303);
}

double NNfunction_sb_uLuL::synapse0x2dff1a0() {
   return (neuron0x2def920()*1.55949);
}

double NNfunction_sb_uLuL::synapse0x2dff1e0() {
   return (neuron0x2defc60()*0.291762);
}

double NNfunction_sb_uLuL::synapse0x2dff220() {
   return (neuron0x2deffa0()*0.520029);
}

double NNfunction_sb_uLuL::synapse0x2dff260() {
   return (neuron0x2df02e0()*0.343147);
}

double NNfunction_sb_uLuL::synapse0x2dff2a0() {
   return (neuron0x2df0620()*0.0899549);
}

double NNfunction_sb_uLuL::synapse0x2dfed30() {
   return (neuron0x2df0960()*0.174672);
}

double NNfunction_sb_uLuL::synapse0x2dfed70() {
   return (neuron0x2df0ec0()*0.332759);
}

double NNfunction_sb_uLuL::synapse0x2dff3f0() {
   return (neuron0x2df10e0()*0.603374);
}

double NNfunction_sb_uLuL::synapse0x2dff430() {
   return (neuron0x2df1420()*0.104234);
}

double NNfunction_sb_uLuL::synapse0x2dff470() {
   return (neuron0x2df1760()*-0.0781374);
}

double NNfunction_sb_uLuL::synapse0x2dff4b0() {
   return (neuron0x2df1aa0()*0.18444);
}

double NNfunction_sb_uLuL::synapse0x2dff4f0() {
   return (neuron0x2df1de0()*0.11749);
}

double NNfunction_sb_uLuL::synapse0x2dff530() {
   return (neuron0x2df2120()*0.248373);
}

double NNfunction_sb_uLuL::synapse0x2dff8b0() {
   return (neuron0x2ded560()*-0.196732);
}

double NNfunction_sb_uLuL::synapse0x2dff8f0() {
   return (neuron0x2ded8a0()*0.107293);
}

double NNfunction_sb_uLuL::synapse0x2dff930() {
   return (neuron0x2dedbe0()*0.0577857);
}

double NNfunction_sb_uLuL::synapse0x2dff970() {
   return (neuron0x2dedf20()*0.701157);
}

double NNfunction_sb_uLuL::synapse0x2dff9b0() {
   return (neuron0x2dee260()*-0.155134);
}

double NNfunction_sb_uLuL::synapse0x2dff9f0() {
   return (neuron0x2dee5a0()*-0.0520491);
}

double NNfunction_sb_uLuL::synapse0x2dffa30() {
   return (neuron0x2dee8e0()*-0.0278166);
}

double NNfunction_sb_uLuL::synapse0x2dffa70() {
   return (neuron0x2deec20()*0.10902);
}

double NNfunction_sb_uLuL::synapse0x2dffab0() {
   return (neuron0x2deef60()*0.162233);
}

double NNfunction_sb_uLuL::synapse0x2dffaf0() {
   return (neuron0x2def2a0()*-0.604746);
}

double NNfunction_sb_uLuL::synapse0x2dffb30() {
   return (neuron0x2def5e0()*-0.413585);
}

double NNfunction_sb_uLuL::synapse0x2dffb70() {
   return (neuron0x2def920()*1.35564);
}

double NNfunction_sb_uLuL::synapse0x2dffbb0() {
   return (neuron0x2defc60()*0.138951);
}

double NNfunction_sb_uLuL::synapse0x2dffbf0() {
   return (neuron0x2deffa0()*0.295784);
}

double NNfunction_sb_uLuL::synapse0x2dffc30() {
   return (neuron0x2df02e0()*0.00992826);
}

double NNfunction_sb_uLuL::synapse0x2dffc70() {
   return (neuron0x2df0620()*-0.134565);
}

double NNfunction_sb_uLuL::synapse0x2dff700() {
   return (neuron0x2df0960()*0.282458);
}

double NNfunction_sb_uLuL::synapse0x2dff740() {
   return (neuron0x2df0ec0()*0.275334);
}

double NNfunction_sb_uLuL::synapse0x2dffdc0() {
   return (neuron0x2df10e0()*0.0271856);
}

double NNfunction_sb_uLuL::synapse0x2dffe00() {
   return (neuron0x2df1420()*0.101121);
}

double NNfunction_sb_uLuL::synapse0x2dffe40() {
   return (neuron0x2df1760()*-0.045455);
}

double NNfunction_sb_uLuL::synapse0x2dffe80() {
   return (neuron0x2df1aa0()*-0.0501133);
}

double NNfunction_sb_uLuL::synapse0x2dffec0() {
   return (neuron0x2df1de0()*-0.146618);
}

double NNfunction_sb_uLuL::synapse0x2dfff00() {
   return (neuron0x2df2120()*-0.133634);
}

double NNfunction_sb_uLuL::synapse0x2e00280() {
   return (neuron0x2ded560()*-0.0131699);
}

double NNfunction_sb_uLuL::synapse0x2e002c0() {
   return (neuron0x2ded8a0()*0.00339589);
}

double NNfunction_sb_uLuL::synapse0x2e00300() {
   return (neuron0x2dedbe0()*-0.12531);
}

double NNfunction_sb_uLuL::synapse0x2e00340() {
   return (neuron0x2dedf20()*-0.0565687);
}

double NNfunction_sb_uLuL::synapse0x2e00380() {
   return (neuron0x2dee260()*0.0219261);
}

double NNfunction_sb_uLuL::synapse0x2e003c0() {
   return (neuron0x2dee5a0()*-0.0353363);
}

double NNfunction_sb_uLuL::synapse0x2e00400() {
   return (neuron0x2dee8e0()*-0.00506775);
}

double NNfunction_sb_uLuL::synapse0x2e00440() {
   return (neuron0x2deec20()*-0.0172885);
}

double NNfunction_sb_uLuL::synapse0x2e00480() {
   return (neuron0x2deef60()*-0.030257);
}

double NNfunction_sb_uLuL::synapse0x2e004c0() {
   return (neuron0x2def2a0()*0.0155683);
}

double NNfunction_sb_uLuL::synapse0x2e00500() {
   return (neuron0x2def5e0()*-0.0365636);
}

double NNfunction_sb_uLuL::synapse0x2e00540() {
   return (neuron0x2def920()*5.92675);
}

double NNfunction_sb_uLuL::synapse0x2e00580() {
   return (neuron0x2defc60()*-0.0115656);
}

double NNfunction_sb_uLuL::synapse0x2e005c0() {
   return (neuron0x2deffa0()*0.0648557);
}

double NNfunction_sb_uLuL::synapse0x2e00600() {
   return (neuron0x2df02e0()*-0.000107313);
}

double NNfunction_sb_uLuL::synapse0x2e00640() {
   return (neuron0x2df0620()*0.0264246);
}

double NNfunction_sb_uLuL::synapse0x2e000d0() {
   return (neuron0x2df0960()*0.0277511);
}

double NNfunction_sb_uLuL::synapse0x2e00110() {
   return (neuron0x2df0ec0()*-0.0241252);
}

double NNfunction_sb_uLuL::synapse0x2e00790() {
   return (neuron0x2df10e0()*-0.0139265);
}

double NNfunction_sb_uLuL::synapse0x2e007d0() {
   return (neuron0x2df1420()*0.0125973);
}

double NNfunction_sb_uLuL::synapse0x2e00810() {
   return (neuron0x2df1760()*0.000189205);
}

double NNfunction_sb_uLuL::synapse0x2e00850() {
   return (neuron0x2df1aa0()*0.0123008);
}

double NNfunction_sb_uLuL::synapse0x2e00890() {
   return (neuron0x2df1de0()*0.00245644);
}

double NNfunction_sb_uLuL::synapse0x2e008d0() {
   return (neuron0x2df2120()*-0.0140881);
}

double NNfunction_sb_uLuL::synapse0x2e00c50() {
   return (neuron0x2ded560()*0.0422873);
}

double NNfunction_sb_uLuL::synapse0x2e00c90() {
   return (neuron0x2ded8a0()*0.00503421);
}

double NNfunction_sb_uLuL::synapse0x2e00cd0() {
   return (neuron0x2dedbe0()*-1.9342);
}

double NNfunction_sb_uLuL::synapse0x2e00d10() {
   return (neuron0x2dedf20()*-0.0714816);
}

double NNfunction_sb_uLuL::synapse0x2e00d50() {
   return (neuron0x2dee260()*-0.0170391);
}

double NNfunction_sb_uLuL::synapse0x2e00d90() {
   return (neuron0x2dee5a0()*-0.00566574);
}

double NNfunction_sb_uLuL::synapse0x2e00dd0() {
   return (neuron0x2dee8e0()*-0.0248384);
}

double NNfunction_sb_uLuL::synapse0x2e00e10() {
   return (neuron0x2deec20()*-0.0614797);
}

double NNfunction_sb_uLuL::synapse0x2e00e50() {
   return (neuron0x2deef60()*-0.022854);
}

double NNfunction_sb_uLuL::synapse0x2df9010() {
   return (neuron0x2def2a0()*0.00556013);
}

double NNfunction_sb_uLuL::synapse0x2df9050() {
   return (neuron0x2def5e0()*0.0149723);
}

double NNfunction_sb_uLuL::synapse0x2df9090() {
   return (neuron0x2def920()*1.27816);
}

double NNfunction_sb_uLuL::synapse0x2df90d0() {
   return (neuron0x2defc60()*0.0866759);
}

double NNfunction_sb_uLuL::synapse0x2df9110() {
   return (neuron0x2deffa0()*-0.0950151);
}

double NNfunction_sb_uLuL::synapse0x2df9150() {
   return (neuron0x2df02e0()*-0.0781351);
}

double NNfunction_sb_uLuL::synapse0x2df9190() {
   return (neuron0x2df0620()*-0.0436916);
}

double NNfunction_sb_uLuL::synapse0x2e00aa0() {
   return (neuron0x2df0960()*-0.22848);
}

double NNfunction_sb_uLuL::synapse0x2e00ae0() {
   return (neuron0x2df0ec0()*0.00456119);
}

double NNfunction_sb_uLuL::synapse0x2df92e0() {
   return (neuron0x2df10e0()*0.00907137);
}

double NNfunction_sb_uLuL::synapse0x2df9320() {
   return (neuron0x2df1420()*0.00206518);
}

double NNfunction_sb_uLuL::synapse0x2df9360() {
   return (neuron0x2df1760()*-0.0237934);
}

double NNfunction_sb_uLuL::synapse0x2df93a0() {
   return (neuron0x2df1aa0()*0.0288746);
}

double NNfunction_sb_uLuL::synapse0x2df93e0() {
   return (neuron0x2df1de0()*0.0431381);
}

double NNfunction_sb_uLuL::synapse0x2df9420() {
   return (neuron0x2df2120()*0.0370025);
}

double NNfunction_sb_uLuL::synapse0x2df97a0() {
   return (neuron0x2ded560()*0.0411088);
}

double NNfunction_sb_uLuL::synapse0x2df97e0() {
   return (neuron0x2ded8a0()*0.0357142);
}

double NNfunction_sb_uLuL::synapse0x2df9820() {
   return (neuron0x2dedbe0()*-0.0684754);
}

double NNfunction_sb_uLuL::synapse0x2df9860() {
   return (neuron0x2dedf20()*-1.08544);
}

double NNfunction_sb_uLuL::synapse0x2df98a0() {
   return (neuron0x2dee260()*0.0524844);
}

double NNfunction_sb_uLuL::synapse0x2df98e0() {
   return (neuron0x2dee5a0()*0.092178);
}

double NNfunction_sb_uLuL::synapse0x2df9920() {
   return (neuron0x2dee8e0()*0.131261);
}

double NNfunction_sb_uLuL::synapse0x2df9960() {
   return (neuron0x2deec20()*0.299294);
}

double NNfunction_sb_uLuL::synapse0x2df99a0() {
   return (neuron0x2deef60()*-0.187118);
}

double NNfunction_sb_uLuL::synapse0x2df99e0() {
   return (neuron0x2def2a0()*-0.275399);
}

double NNfunction_sb_uLuL::synapse0x2df9a20() {
   return (neuron0x2def5e0()*-0.167242);
}

double NNfunction_sb_uLuL::synapse0x2df9a60() {
   return (neuron0x2def920()*0.82688);
}

double NNfunction_sb_uLuL::synapse0x2df9aa0() {
   return (neuron0x2defc60()*0.735157);
}

double NNfunction_sb_uLuL::synapse0x2df9ae0() {
   return (neuron0x2deffa0()*0.0079962);
}

double NNfunction_sb_uLuL::synapse0x2df9b20() {
   return (neuron0x2df02e0()*0.118993);
}

double NNfunction_sb_uLuL::synapse0x2df9b60() {
   return (neuron0x2df0620()*0.0926548);
}

double NNfunction_sb_uLuL::synapse0x2df95f0() {
   return (neuron0x2df0960()*0.0655023);
}

double NNfunction_sb_uLuL::synapse0x2df9630() {
   return (neuron0x2df0ec0()*0.327202);
}

double NNfunction_sb_uLuL::synapse0x2df9cb0() {
   return (neuron0x2df10e0()*0.0655036);
}

double NNfunction_sb_uLuL::synapse0x2df9cf0() {
   return (neuron0x2df1420()*-0.138349);
}

double NNfunction_sb_uLuL::synapse0x2df9d30() {
   return (neuron0x2df1760()*-0.319973);
}

double NNfunction_sb_uLuL::synapse0x2df9d70() {
   return (neuron0x2df1aa0()*0.260979);
}

double NNfunction_sb_uLuL::synapse0x2df9db0() {
   return (neuron0x2df1de0()*0.387412);
}

double NNfunction_sb_uLuL::synapse0x2df9df0() {
   return (neuron0x2df2120()*0.202888);
}

double NNfunction_sb_uLuL::synapse0x2df9fc0() {
   return (neuron0x2ded560()*0.721744);
}

double NNfunction_sb_uLuL::synapse0x2e03050() {
   return (neuron0x2ded8a0()*0.15419);
}

double NNfunction_sb_uLuL::synapse0x2e03090() {
   return (neuron0x2dedbe0()*0.289615);
}

double NNfunction_sb_uLuL::synapse0x2e030d0() {
   return (neuron0x2dedf20()*0.698392);
}

double NNfunction_sb_uLuL::synapse0x2e03110() {
   return (neuron0x2dee260()*0.429176);
}

double NNfunction_sb_uLuL::synapse0x2e03150() {
   return (neuron0x2dee5a0()*0.246863);
}

double NNfunction_sb_uLuL::synapse0x2e03190() {
   return (neuron0x2dee8e0()*0.0173734);
}

double NNfunction_sb_uLuL::synapse0x2e031d0() {
   return (neuron0x2deec20()*-0.992217);
}

double NNfunction_sb_uLuL::synapse0x2e03210() {
   return (neuron0x2deef60()*0.320408);
}

double NNfunction_sb_uLuL::synapse0x2e03250() {
   return (neuron0x2def2a0()*-0.100022);
}

double NNfunction_sb_uLuL::synapse0x2e03290() {
   return (neuron0x2def5e0()*-0.142365);
}

double NNfunction_sb_uLuL::synapse0x2e032d0() {
   return (neuron0x2def920()*0.0432264);
}

double NNfunction_sb_uLuL::synapse0x2e03310() {
   return (neuron0x2defc60()*-0.339644);
}

double NNfunction_sb_uLuL::synapse0x2e03350() {
   return (neuron0x2deffa0()*-0.369965);
}

double NNfunction_sb_uLuL::synapse0x2e03390() {
   return (neuron0x2df02e0()*0.244271);
}

double NNfunction_sb_uLuL::synapse0x2e033d0() {
   return (neuron0x2df0620()*0.118911);
}

double NNfunction_sb_uLuL::synapse0x2e02ea0() {
   return (neuron0x2df0960()*-0.526305);
}

double NNfunction_sb_uLuL::synapse0x2e02ee0() {
   return (neuron0x2df0ec0()*-0.337942);
}

double NNfunction_sb_uLuL::synapse0x2e03520() {
   return (neuron0x2df10e0()*-0.03588);
}

double NNfunction_sb_uLuL::synapse0x2e03560() {
   return (neuron0x2df1420()*-0.234238);
}

double NNfunction_sb_uLuL::synapse0x2e035a0() {
   return (neuron0x2df1760()*-0.169352);
}

double NNfunction_sb_uLuL::synapse0x2e035e0() {
   return (neuron0x2df1aa0()*-0.298167);
}

double NNfunction_sb_uLuL::synapse0x2e03620() {
   return (neuron0x2df1de0()*0.350572);
}

double NNfunction_sb_uLuL::synapse0x2e03660() {
   return (neuron0x2df2120()*-0.716406);
}

double NNfunction_sb_uLuL::synapse0x2e039e0() {
   return (neuron0x2ded560()*0.062515);
}

double NNfunction_sb_uLuL::synapse0x2e03a20() {
   return (neuron0x2ded8a0()*0.15697);
}

double NNfunction_sb_uLuL::synapse0x2e03a60() {
   return (neuron0x2dedbe0()*-0.126023);
}

double NNfunction_sb_uLuL::synapse0x2e03aa0() {
   return (neuron0x2dedf20()*0.716681);
}

double NNfunction_sb_uLuL::synapse0x2e03ae0() {
   return (neuron0x2dee260()*0.448059);
}

double NNfunction_sb_uLuL::synapse0x2e03b20() {
   return (neuron0x2dee5a0()*-0.155591);
}

double NNfunction_sb_uLuL::synapse0x2e03b60() {
   return (neuron0x2dee8e0()*-0.41416);
}

double NNfunction_sb_uLuL::synapse0x2e03ba0() {
   return (neuron0x2deec20()*-0.420678);
}

double NNfunction_sb_uLuL::synapse0x2e03be0() {
   return (neuron0x2deef60()*-0.0967404);
}

double NNfunction_sb_uLuL::synapse0x2e03c20() {
   return (neuron0x2def2a0()*0.0953678);
}

double NNfunction_sb_uLuL::synapse0x2e03c60() {
   return (neuron0x2def5e0()*-0.0198845);
}

double NNfunction_sb_uLuL::synapse0x2e03ca0() {
   return (neuron0x2def920()*-0.584771);
}

double NNfunction_sb_uLuL::synapse0x2e03ce0() {
   return (neuron0x2defc60()*-0.270332);
}

double NNfunction_sb_uLuL::synapse0x2e03d20() {
   return (neuron0x2deffa0()*0.257249);
}

double NNfunction_sb_uLuL::synapse0x2e03d60() {
   return (neuron0x2df02e0()*-0.564912);
}

double NNfunction_sb_uLuL::synapse0x2e03da0() {
   return (neuron0x2df0620()*0.1632);
}

double NNfunction_sb_uLuL::synapse0x2e03830() {
   return (neuron0x2df0960()*0.436278);
}

double NNfunction_sb_uLuL::synapse0x2e03870() {
   return (neuron0x2df0ec0()*-0.0452574);
}

double NNfunction_sb_uLuL::synapse0x2e03ef0() {
   return (neuron0x2df10e0()*0.0625945);
}

double NNfunction_sb_uLuL::synapse0x2e03f30() {
   return (neuron0x2df1420()*-0.227428);
}

double NNfunction_sb_uLuL::synapse0x2e03f70() {
   return (neuron0x2df1760()*-0.0949628);
}

double NNfunction_sb_uLuL::synapse0x2e03fb0() {
   return (neuron0x2df1aa0()*0.128834);
}

double NNfunction_sb_uLuL::synapse0x2e03ff0() {
   return (neuron0x2df1de0()*0.0946849);
}

double NNfunction_sb_uLuL::synapse0x2e04030() {
   return (neuron0x2df2120()*-0.0478559);
}

double NNfunction_sb_uLuL::synapse0x2e043b0() {
   return (neuron0x2ded560()*-0.00579317);
}

double NNfunction_sb_uLuL::synapse0x2e043f0() {
   return (neuron0x2ded8a0()*0.012166);
}

double NNfunction_sb_uLuL::synapse0x2e04430() {
   return (neuron0x2dedbe0()*-1.87604);
}

double NNfunction_sb_uLuL::synapse0x2e04470() {
   return (neuron0x2dedf20()*0.0670192);
}

double NNfunction_sb_uLuL::synapse0x2e044b0() {
   return (neuron0x2dee260()*0.0231487);
}

double NNfunction_sb_uLuL::synapse0x2e044f0() {
   return (neuron0x2dee5a0()*-0.00114547);
}

double NNfunction_sb_uLuL::synapse0x2e04530() {
   return (neuron0x2dee8e0()*0.0296761);
}

double NNfunction_sb_uLuL::synapse0x2e04570() {
   return (neuron0x2deec20()*0.0135681);
}

double NNfunction_sb_uLuL::synapse0x2e045b0() {
   return (neuron0x2deef60()*0.040855);
}

double NNfunction_sb_uLuL::synapse0x2e045f0() {
   return (neuron0x2def2a0()*0.0267233);
}

double NNfunction_sb_uLuL::synapse0x2e04630() {
   return (neuron0x2def5e0()*-0.0300253);
}

double NNfunction_sb_uLuL::synapse0x2e04670() {
   return (neuron0x2def920()*0.193968);
}

double NNfunction_sb_uLuL::synapse0x2e046b0() {
   return (neuron0x2defc60()*0.00178341);
}

double NNfunction_sb_uLuL::synapse0x2e046f0() {
   return (neuron0x2deffa0()*-0.0308097);
}

double NNfunction_sb_uLuL::synapse0x2e04730() {
   return (neuron0x2df02e0()*-0.00345147);
}

double NNfunction_sb_uLuL::synapse0x2e04770() {
   return (neuron0x2df0620()*0.00258991);
}

double NNfunction_sb_uLuL::synapse0x2e04200() {
   return (neuron0x2df0960()*-0.0337061);
}

double NNfunction_sb_uLuL::synapse0x2e04240() {
   return (neuron0x2df0ec0()*0.00854073);
}

double NNfunction_sb_uLuL::synapse0x2e048c0() {
   return (neuron0x2df10e0()*0.0213139);
}

double NNfunction_sb_uLuL::synapse0x2e04900() {
   return (neuron0x2df1420()*-0.035899);
}

double NNfunction_sb_uLuL::synapse0x2e04940() {
   return (neuron0x2df1760()*0.0145931);
}

double NNfunction_sb_uLuL::synapse0x2e04980() {
   return (neuron0x2df1aa0()*0.00353554);
}

double NNfunction_sb_uLuL::synapse0x2e049c0() {
   return (neuron0x2df1de0()*-0.0158174);
}

double NNfunction_sb_uLuL::synapse0x2e04a00() {
   return (neuron0x2df2120()*0.00548175);
}

double NNfunction_sb_uLuL::synapse0x2e04d80() {
   return (neuron0x2ded560()*-0.167386);
}

double NNfunction_sb_uLuL::synapse0x2e04dc0() {
   return (neuron0x2ded8a0()*0.193088);
}

double NNfunction_sb_uLuL::synapse0x2e04e00() {
   return (neuron0x2dedbe0()*0.311824);
}

double NNfunction_sb_uLuL::synapse0x2e04e40() {
   return (neuron0x2dedf20()*0.793916);
}

double NNfunction_sb_uLuL::synapse0x2e04e80() {
   return (neuron0x2dee260()*-0.279232);
}

double NNfunction_sb_uLuL::synapse0x2e04ec0() {
   return (neuron0x2dee5a0()*0.160963);
}

double NNfunction_sb_uLuL::synapse0x2e04f00() {
   return (neuron0x2dee8e0()*-0.13677);
}

double NNfunction_sb_uLuL::synapse0x2e04f40() {
   return (neuron0x2deec20()*0.138744);
}

double NNfunction_sb_uLuL::synapse0x2e04f80() {
   return (neuron0x2deef60()*-0.0218028);
}

double NNfunction_sb_uLuL::synapse0x2e04fc0() {
   return (neuron0x2def2a0()*0.317855);
}

double NNfunction_sb_uLuL::synapse0x2e05000() {
   return (neuron0x2def5e0()*0.125037);
}

double NNfunction_sb_uLuL::synapse0x2e05040() {
   return (neuron0x2def920()*-0.848354);
}

double NNfunction_sb_uLuL::synapse0x2e05080() {
   return (neuron0x2defc60()*0.65445);
}

double NNfunction_sb_uLuL::synapse0x2e050c0() {
   return (neuron0x2deffa0()*-0.323827);
}

double NNfunction_sb_uLuL::synapse0x2e05100() {
   return (neuron0x2df02e0()*0.0470115);
}

double NNfunction_sb_uLuL::synapse0x2e05140() {
   return (neuron0x2df0620()*0.126927);
}

double NNfunction_sb_uLuL::synapse0x2e04bd0() {
   return (neuron0x2df0960()*0.066351);
}

double NNfunction_sb_uLuL::synapse0x2e04c10() {
   return (neuron0x2df0ec0()*0.145771);
}

double NNfunction_sb_uLuL::synapse0x2e05290() {
   return (neuron0x2df10e0()*0.0374305);
}

double NNfunction_sb_uLuL::synapse0x2e052d0() {
   return (neuron0x2df1420()*-0.232451);
}

double NNfunction_sb_uLuL::synapse0x2e05310() {
   return (neuron0x2df1760()*0.0627743);
}

double NNfunction_sb_uLuL::synapse0x2e05350() {
   return (neuron0x2df1aa0()*-0.18066);
}

double NNfunction_sb_uLuL::synapse0x2e05390() {
   return (neuron0x2df1de0()*0.138084);
}

double NNfunction_sb_uLuL::synapse0x2e053d0() {
   return (neuron0x2df2120()*0.00839085);
}

double NNfunction_sb_uLuL::synapse0x2e05750() {
   return (neuron0x2ded560()*0.0642869);
}

double NNfunction_sb_uLuL::synapse0x2e05790() {
   return (neuron0x2ded8a0()*-0.153165);
}

double NNfunction_sb_uLuL::synapse0x2e057d0() {
   return (neuron0x2dedbe0()*-0.308804);
}

double NNfunction_sb_uLuL::synapse0x2e05810() {
   return (neuron0x2dedf20()*0.731963);
}

double NNfunction_sb_uLuL::synapse0x2e05850() {
   return (neuron0x2dee260()*-0.175389);
}

double NNfunction_sb_uLuL::synapse0x2e05890() {
   return (neuron0x2dee5a0()*-0.14971);
}

double NNfunction_sb_uLuL::synapse0x2e058d0() {
   return (neuron0x2dee8e0()*-0.264246);
}

double NNfunction_sb_uLuL::synapse0x2e05910() {
   return (neuron0x2deec20()*0.0485081);
}

double NNfunction_sb_uLuL::synapse0x2e05950() {
   return (neuron0x2deef60()*-0.0206193);
}

double NNfunction_sb_uLuL::synapse0x2e05990() {
   return (neuron0x2def2a0()*0.0345614);
}

double NNfunction_sb_uLuL::synapse0x2e059d0() {
   return (neuron0x2def5e0()*-0.0227159);
}

double NNfunction_sb_uLuL::synapse0x2e05a10() {
   return (neuron0x2def920()*-0.416628);
}

double NNfunction_sb_uLuL::synapse0x2e05a50() {
   return (neuron0x2defc60()*-0.0889707);
}

double NNfunction_sb_uLuL::synapse0x2e05a90() {
   return (neuron0x2deffa0()*0.000972341);
}

double NNfunction_sb_uLuL::synapse0x2e05ad0() {
   return (neuron0x2df02e0()*0.600901);
}

double NNfunction_sb_uLuL::synapse0x2e05b10() {
   return (neuron0x2df0620()*-0.0867826);
}

double NNfunction_sb_uLuL::synapse0x2e055a0() {
   return (neuron0x2df0960()*-0.249341);
}

double NNfunction_sb_uLuL::synapse0x2e055e0() {
   return (neuron0x2df0ec0()*0.227898);
}

double NNfunction_sb_uLuL::synapse0x2e05c60() {
   return (neuron0x2df10e0()*0.214421);
}

double NNfunction_sb_uLuL::synapse0x2e05ca0() {
   return (neuron0x2df1420()*-0.0141527);
}

double NNfunction_sb_uLuL::synapse0x2e05ce0() {
   return (neuron0x2df1760()*0.0663498);
}

double NNfunction_sb_uLuL::synapse0x2e05d20() {
   return (neuron0x2df1aa0()*0.0644969);
}

double NNfunction_sb_uLuL::synapse0x2e05d60() {
   return (neuron0x2df1de0()*0.105622);
}

double NNfunction_sb_uLuL::synapse0x2e05da0() {
   return (neuron0x2df2120()*0.0986198);
}

double NNfunction_sb_uLuL::synapse0x2e06120() {
   return (neuron0x2ded560()*0.0960757);
}

double NNfunction_sb_uLuL::synapse0x2e06160() {
   return (neuron0x2ded8a0()*0.420648);
}

double NNfunction_sb_uLuL::synapse0x2e061a0() {
   return (neuron0x2dedbe0()*1.12149);
}

double NNfunction_sb_uLuL::synapse0x2e061e0() {
   return (neuron0x2dedf20()*0.777913);
}

double NNfunction_sb_uLuL::synapse0x2e06220() {
   return (neuron0x2dee260()*-0.417676);
}

double NNfunction_sb_uLuL::synapse0x2e06260() {
   return (neuron0x2dee5a0()*0.00955453);
}

double NNfunction_sb_uLuL::synapse0x2e062a0() {
   return (neuron0x2dee8e0()*0.349209);
}

double NNfunction_sb_uLuL::synapse0x2e062e0() {
   return (neuron0x2deec20()*0.26524);
}

double NNfunction_sb_uLuL::synapse0x2e06320() {
   return (neuron0x2deef60()*-0.45064);
}

double NNfunction_sb_uLuL::synapse0x2e06360() {
   return (neuron0x2def2a0()*-0.239799);
}

double NNfunction_sb_uLuL::synapse0x2e063a0() {
   return (neuron0x2def5e0()*-0.17937);
}

double NNfunction_sb_uLuL::synapse0x2e063e0() {
   return (neuron0x2def920()*-0.47553);
}

double NNfunction_sb_uLuL::synapse0x2e06420() {
   return (neuron0x2defc60()*-0.23635);
}

double NNfunction_sb_uLuL::synapse0x2e06460() {
   return (neuron0x2deffa0()*0.829544);
}

double NNfunction_sb_uLuL::synapse0x2e064a0() {
   return (neuron0x2df02e0()*0.790258);
}

double NNfunction_sb_uLuL::synapse0x2e064e0() {
   return (neuron0x2df0620()*-0.243652);
}

double NNfunction_sb_uLuL::synapse0x2e05f70() {
   return (neuron0x2df0960()*0.283551);
}

double NNfunction_sb_uLuL::synapse0x2e05fb0() {
   return (neuron0x2df0ec0()*0.107706);
}

double NNfunction_sb_uLuL::synapse0x2e06630() {
   return (neuron0x2df10e0()*0.229195);
}

double NNfunction_sb_uLuL::synapse0x2e06670() {
   return (neuron0x2df1420()*-0.207135);
}

double NNfunction_sb_uLuL::synapse0x2e066b0() {
   return (neuron0x2df1760()*-0.0263913);
}

double NNfunction_sb_uLuL::synapse0x2e066f0() {
   return (neuron0x2df1aa0()*-0.207056);
}

double NNfunction_sb_uLuL::synapse0x2e06730() {
   return (neuron0x2df1de0()*-0.229818);
}

double NNfunction_sb_uLuL::synapse0x2e06770() {
   return (neuron0x2df2120()*0.428971);
}

double NNfunction_sb_uLuL::synapse0x2e06af0() {
   return (neuron0x2ded560()*-0.352985);
}

double NNfunction_sb_uLuL::synapse0x2e06b30() {
   return (neuron0x2ded8a0()*0.145228);
}

double NNfunction_sb_uLuL::synapse0x2e06b70() {
   return (neuron0x2dedbe0()*-1.13097);
}

double NNfunction_sb_uLuL::synapse0x2e06bb0() {
   return (neuron0x2dedf20()*0.446339);
}

double NNfunction_sb_uLuL::synapse0x2e06bf0() {
   return (neuron0x2dee260()*-0.272459);
}

double NNfunction_sb_uLuL::synapse0x2e06c30() {
   return (neuron0x2dee5a0()*-0.263929);
}

double NNfunction_sb_uLuL::synapse0x2e06c70() {
   return (neuron0x2dee8e0()*-0.0351818);
}

double NNfunction_sb_uLuL::synapse0x2e06cb0() {
   return (neuron0x2deec20()*-0.213547);
}

double NNfunction_sb_uLuL::synapse0x2e06cf0() {
   return (neuron0x2deef60()*-0.489897);
}

double NNfunction_sb_uLuL::synapse0x2e06d30() {
   return (neuron0x2def2a0()*0.369137);
}

double NNfunction_sb_uLuL::synapse0x2e06d70() {
   return (neuron0x2def5e0()*-0.214848);
}

double NNfunction_sb_uLuL::synapse0x2e06db0() {
   return (neuron0x2def920()*-0.904278);
}

double NNfunction_sb_uLuL::synapse0x2e06df0() {
   return (neuron0x2defc60()*-0.334833);
}

double NNfunction_sb_uLuL::synapse0x2e06e30() {
   return (neuron0x2deffa0()*0.0446371);
}

double NNfunction_sb_uLuL::synapse0x2e06e70() {
   return (neuron0x2df02e0()*0.434397);
}

double NNfunction_sb_uLuL::synapse0x2e06eb0() {
   return (neuron0x2df0620()*-0.858203);
}

double NNfunction_sb_uLuL::synapse0x2e06940() {
   return (neuron0x2df0960()*0.419476);
}

double NNfunction_sb_uLuL::synapse0x2e06980() {
   return (neuron0x2df0ec0()*-0.18396);
}

double NNfunction_sb_uLuL::synapse0x2e07000() {
   return (neuron0x2df10e0()*-0.900501);
}

double NNfunction_sb_uLuL::synapse0x2e07040() {
   return (neuron0x2df1420()*0.0377853);
}

double NNfunction_sb_uLuL::synapse0x2e07080() {
   return (neuron0x2df1760()*-0.0786736);
}

double NNfunction_sb_uLuL::synapse0x2e070c0() {
   return (neuron0x2df1aa0()*-0.000957341);
}

double NNfunction_sb_uLuL::synapse0x2e07100() {
   return (neuron0x2df1de0()*0.00545813);
}

double NNfunction_sb_uLuL::synapse0x2e07140() {
   return (neuron0x2df2120()*0.157797);
}

double NNfunction_sb_uLuL::synapse0x2e074c0() {
   return (neuron0x2ded560()*0.29768);
}

double NNfunction_sb_uLuL::synapse0x2e07500() {
   return (neuron0x2ded8a0()*-0.00717741);
}

double NNfunction_sb_uLuL::synapse0x2e07540() {
   return (neuron0x2dedbe0()*-0.897796);
}

double NNfunction_sb_uLuL::synapse0x2e07580() {
   return (neuron0x2dedf20()*0.592931);
}

double NNfunction_sb_uLuL::synapse0x2e075c0() {
   return (neuron0x2dee260()*0.316505);
}

double NNfunction_sb_uLuL::synapse0x2e07600() {
   return (neuron0x2dee5a0()*-0.110176);
}

double NNfunction_sb_uLuL::synapse0x2e07640() {
   return (neuron0x2dee8e0()*0.0918677);
}

double NNfunction_sb_uLuL::synapse0x2e07680() {
   return (neuron0x2deec20()*-0.0821156);
}

double NNfunction_sb_uLuL::synapse0x2e076c0() {
   return (neuron0x2deef60()*0.322971);
}

double NNfunction_sb_uLuL::synapse0x2e07700() {
   return (neuron0x2def2a0()*0.439322);
}

double NNfunction_sb_uLuL::synapse0x2e07740() {
   return (neuron0x2def5e0()*-0.00299332);
}

double NNfunction_sb_uLuL::synapse0x2e07780() {
   return (neuron0x2def920()*-0.763979);
}

double NNfunction_sb_uLuL::synapse0x2e077c0() {
   return (neuron0x2defc60()*-0.0877613);
}

double NNfunction_sb_uLuL::synapse0x2e07800() {
   return (neuron0x2deffa0()*-0.117803);
}

double NNfunction_sb_uLuL::synapse0x2e07840() {
   return (neuron0x2df02e0()*-0.194322);
}

double NNfunction_sb_uLuL::synapse0x2e07880() {
   return (neuron0x2df0620()*0.794275);
}

double NNfunction_sb_uLuL::synapse0x2e07310() {
   return (neuron0x2df0960()*0.432689);
}

double NNfunction_sb_uLuL::synapse0x2e07350() {
   return (neuron0x2df0ec0()*0.130839);
}

double NNfunction_sb_uLuL::synapse0x2e079d0() {
   return (neuron0x2df10e0()*-0.343248);
}

double NNfunction_sb_uLuL::synapse0x2e07a10() {
   return (neuron0x2df1420()*0.0142039);
}

double NNfunction_sb_uLuL::synapse0x2e07a50() {
   return (neuron0x2df1760()*0.300765);
}

double NNfunction_sb_uLuL::synapse0x2e07a90() {
   return (neuron0x2df1aa0()*-0.368556);
}

double NNfunction_sb_uLuL::synapse0x2e07ad0() {
   return (neuron0x2df1de0()*0.132759);
}

double NNfunction_sb_uLuL::synapse0x2e07b10() {
   return (neuron0x2df2120()*0.0482716);
}

double NNfunction_sb_uLuL::synapse0x2e07e90() {
   return (neuron0x2ded560()*-0.43355);
}

double NNfunction_sb_uLuL::synapse0x2dfc460() {
   return (neuron0x2ded8a0()*0.153442);
}

double NNfunction_sb_uLuL::synapse0x2dfc4a0() {
   return (neuron0x2dedbe0()*0.0838199);
}

double NNfunction_sb_uLuL::synapse0x2dfc4e0() {
   return (neuron0x2dedf20()*-0.351532);
}

double NNfunction_sb_uLuL::synapse0x2dfc730() {
   return (neuron0x2dee260()*0.404274);
}

double NNfunction_sb_uLuL::synapse0x2dfc770() {
   return (neuron0x2dee5a0()*0.0763238);
}

double NNfunction_sb_uLuL::synapse0x2dfc7b0() {
   return (neuron0x2dee8e0()*0.0717394);
}

double NNfunction_sb_uLuL::synapse0x2dfca00() {
   return (neuron0x2deec20()*-0.269177);
}

double NNfunction_sb_uLuL::synapse0x2dfca40() {
   return (neuron0x2deef60()*-0.396156);
}

double NNfunction_sb_uLuL::synapse0x2dfcc90() {
   return (neuron0x2def2a0()*0.273909);
}

double NNfunction_sb_uLuL::synapse0x2dfccd0() {
   return (neuron0x2def5e0()*-0.242794);
}

double NNfunction_sb_uLuL::synapse0x2dfcd10() {
   return (neuron0x2def920()*-0.0429737);
}

double NNfunction_sb_uLuL::synapse0x2dfcf60() {
   return (neuron0x2defc60()*-0.233625);
}

double NNfunction_sb_uLuL::synapse0x2dfcfa0() {
   return (neuron0x2deffa0()*0.404821);
}

double NNfunction_sb_uLuL::synapse0x2dfd1f0() {
   return (neuron0x2df02e0()*0.145531);
}

double NNfunction_sb_uLuL::synapse0x2dfd230() {
   return (neuron0x2df0620()*0.901822);
}

double NNfunction_sb_uLuL::synapse0x2e07ce0() {
   return (neuron0x2df0960()*-0.173911);
}

double NNfunction_sb_uLuL::synapse0x2e07d20() {
   return (neuron0x2df0ec0()*0.651365);
}

double NNfunction_sb_uLuL::synapse0x2dfd380() {
   return (neuron0x2df10e0()*-0.326924);
}

double NNfunction_sb_uLuL::synapse0x2dfd890() {
   return (neuron0x2df1420()*-0.442702);
}

double NNfunction_sb_uLuL::synapse0x2dfd8d0() {
   return (neuron0x2df1760()*-0.0238777);
}

double NNfunction_sb_uLuL::synapse0x2dfd910() {
   return (neuron0x2df1aa0()*-0.253921);
}

double NNfunction_sb_uLuL::synapse0x2dfdb60() {
   return (neuron0x2df1de0()*-0.0180102);
}

double NNfunction_sb_uLuL::synapse0x2dfdba0() {
   return (neuron0x2df2120()*-0.513773);
}

double NNfunction_sb_uLuL::synapse0x2dfd450() {
   return (neuron0x2ded560()*-0.0492407);
}

double NNfunction_sb_uLuL::synapse0x2dfd490() {
   return (neuron0x2ded8a0()*-0.125958);
}

double NNfunction_sb_uLuL::synapse0x2dfd4d0() {
   return (neuron0x2dedbe0()*-1.14218);
}

double NNfunction_sb_uLuL::synapse0x2dfd510() {
   return (neuron0x2dedf20()*0.947629);
}

double NNfunction_sb_uLuL::synapse0x2dfde90() {
   return (neuron0x2dee260()*-0.3033);
}

double NNfunction_sb_uLuL::synapse0x2e0a1e0() {
   return (neuron0x2dee5a0()*-0.0143121);
}

double NNfunction_sb_uLuL::synapse0x2e0a220() {
   return (neuron0x2dee8e0()*0.135405);
}

double NNfunction_sb_uLuL::synapse0x2e0a260() {
   return (neuron0x2deec20()*0.0314802);
}

double NNfunction_sb_uLuL::synapse0x2e0a2a0() {
   return (neuron0x2deef60()*0.149993);
}

double NNfunction_sb_uLuL::synapse0x2e0a2e0() {
   return (neuron0x2def2a0()*-0.15124);
}

double NNfunction_sb_uLuL::synapse0x2e0a320() {
   return (neuron0x2def5e0()*0.0393296);
}

double NNfunction_sb_uLuL::synapse0x2e0a360() {
   return (neuron0x2def920()*-1.42304);
}

double NNfunction_sb_uLuL::synapse0x2e0a3a0() {
   return (neuron0x2defc60()*0.25804);
}

double NNfunction_sb_uLuL::synapse0x2e0a3e0() {
   return (neuron0x2deffa0()*0.275786);
}

double NNfunction_sb_uLuL::synapse0x2e0a420() {
   return (neuron0x2df02e0()*-0.275047);
}

double NNfunction_sb_uLuL::synapse0x2e0a460() {
   return (neuron0x2df0620()*-0.340023);
}

double NNfunction_sb_uLuL::synapse0x2dfdd70() {
   return (neuron0x2df0960()*0.0831265);
}

double NNfunction_sb_uLuL::synapse0x2dfddb0() {
   return (neuron0x2df0ec0()*0.0224416);
}

double NNfunction_sb_uLuL::synapse0x2e0a5b0() {
   return (neuron0x2df10e0()*-0.0318791);
}

double NNfunction_sb_uLuL::synapse0x2e0a5f0() {
   return (neuron0x2df1420()*0.0873786);
}

double NNfunction_sb_uLuL::synapse0x2e0a630() {
   return (neuron0x2df1760()*0.0869587);
}

double NNfunction_sb_uLuL::synapse0x2e0a670() {
   return (neuron0x2df1aa0()*-0.00356959);
}

double NNfunction_sb_uLuL::synapse0x2e0a6b0() {
   return (neuron0x2df1de0()*-0.118923);
}

double NNfunction_sb_uLuL::synapse0x2e0a6f0() {
   return (neuron0x2df2120()*-0.0603946);
}

double NNfunction_sb_uLuL::synapse0x2e0aa70() {
   return (neuron0x2ded560()*0.0277321);
}

double NNfunction_sb_uLuL::synapse0x2e0aab0() {
   return (neuron0x2ded8a0()*-0.0321067);
}

double NNfunction_sb_uLuL::synapse0x2e0aaf0() {
   return (neuron0x2dedbe0()*1.01906);
}

double NNfunction_sb_uLuL::synapse0x2e0ab30() {
   return (neuron0x2dedf20()*0.70308);
}

double NNfunction_sb_uLuL::synapse0x2e0ab70() {
   return (neuron0x2dee260()*0.0359804);
}

double NNfunction_sb_uLuL::synapse0x2e0abb0() {
   return (neuron0x2dee5a0()*0.0279576);
}

double NNfunction_sb_uLuL::synapse0x2e0abf0() {
   return (neuron0x2dee8e0()*0.00671598);
}

double NNfunction_sb_uLuL::synapse0x2e0ac30() {
   return (neuron0x2deec20()*0.108513);
}

double NNfunction_sb_uLuL::synapse0x2e0ac70() {
   return (neuron0x2deef60()*0.159972);
}

double NNfunction_sb_uLuL::synapse0x2e0acb0() {
   return (neuron0x2def2a0()*-0.0923182);
}

double NNfunction_sb_uLuL::synapse0x2e0acf0() {
   return (neuron0x2def5e0()*0.0362878);
}

double NNfunction_sb_uLuL::synapse0x2e0ad30() {
   return (neuron0x2def920()*-0.618996);
}

double NNfunction_sb_uLuL::synapse0x2e0ad70() {
   return (neuron0x2defc60()*-0.0667752);
}

double NNfunction_sb_uLuL::synapse0x2e0adb0() {
   return (neuron0x2deffa0()*0.133922);
}

double NNfunction_sb_uLuL::synapse0x2e0adf0() {
   return (neuron0x2df02e0()*-0.242516);
}

double NNfunction_sb_uLuL::synapse0x2e0ae30() {
   return (neuron0x2df0620()*-0.160783);
}

double NNfunction_sb_uLuL::synapse0x2e0a8c0() {
   return (neuron0x2df0960()*0.0980361);
}

double NNfunction_sb_uLuL::synapse0x2e0a900() {
   return (neuron0x2df0ec0()*-0.059384);
}

double NNfunction_sb_uLuL::synapse0x2e0af80() {
   return (neuron0x2df10e0()*-0.0795383);
}

double NNfunction_sb_uLuL::synapse0x2e0afc0() {
   return (neuron0x2df1420()*-0.0677594);
}

double NNfunction_sb_uLuL::synapse0x2e0b000() {
   return (neuron0x2df1760()*0.00581729);
}

double NNfunction_sb_uLuL::synapse0x2e0b040() {
   return (neuron0x2df1aa0()*0.0727836);
}

double NNfunction_sb_uLuL::synapse0x2e0b080() {
   return (neuron0x2df1de0()*0.0144736);
}

double NNfunction_sb_uLuL::synapse0x2e0b0c0() {
   return (neuron0x2df2120()*-0.0821299);
}

double NNfunction_sb_uLuL::synapse0x2e0b440() {
   return (neuron0x2ded560()*0.0183185);
}

double NNfunction_sb_uLuL::synapse0x2e0b480() {
   return (neuron0x2ded8a0()*0.0342433);
}

double NNfunction_sb_uLuL::synapse0x2e0b4c0() {
   return (neuron0x2dedbe0()*0.0420616);
}

double NNfunction_sb_uLuL::synapse0x2e0b500() {
   return (neuron0x2dedf20()*-0.551085);
}

double NNfunction_sb_uLuL::synapse0x2e0b540() {
   return (neuron0x2dee260()*0.0195543);
}

double NNfunction_sb_uLuL::synapse0x2e0b580() {
   return (neuron0x2dee5a0()*0.00814347);
}

double NNfunction_sb_uLuL::synapse0x2e0b5c0() {
   return (neuron0x2dee8e0()*0.0138352);
}

double NNfunction_sb_uLuL::synapse0x2e0b600() {
   return (neuron0x2deec20()*-4.51053e-05);
}

double NNfunction_sb_uLuL::synapse0x2e0b640() {
   return (neuron0x2deef60()*-0.0424242);
}

double NNfunction_sb_uLuL::synapse0x2e0b680() {
   return (neuron0x2def2a0()*-0.0210637);
}

double NNfunction_sb_uLuL::synapse0x2e0b6c0() {
   return (neuron0x2def5e0()*-0.0210383);
}

double NNfunction_sb_uLuL::synapse0x2e0b700() {
   return (neuron0x2def920()*0.507258);
}

double NNfunction_sb_uLuL::synapse0x2e0b740() {
   return (neuron0x2defc60()*0.0658774);
}

double NNfunction_sb_uLuL::synapse0x2e0b780() {
   return (neuron0x2deffa0()*-0.0326333);
}

double NNfunction_sb_uLuL::synapse0x2e0b7c0() {
   return (neuron0x2df02e0()*0.158285);
}

double NNfunction_sb_uLuL::synapse0x2e0b800() {
   return (neuron0x2df0620()*0.102111);
}

double NNfunction_sb_uLuL::synapse0x2e0b290() {
   return (neuron0x2df0960()*-0.0469582);
}

double NNfunction_sb_uLuL::synapse0x2e0b2d0() {
   return (neuron0x2df0ec0()*0.0363474);
}

double NNfunction_sb_uLuL::synapse0x2e0b950() {
   return (neuron0x2df10e0()*0.0670268);
}

double NNfunction_sb_uLuL::synapse0x2e0b990() {
   return (neuron0x2df1420()*-0.00608292);
}

double NNfunction_sb_uLuL::synapse0x2e0b9d0() {
   return (neuron0x2df1760()*-0.0099715);
}

double NNfunction_sb_uLuL::synapse0x2e0ba10() {
   return (neuron0x2df1aa0()*0.0222044);
}

double NNfunction_sb_uLuL::synapse0x2e0ba50() {
   return (neuron0x2df1de0()*0.00651293);
}

double NNfunction_sb_uLuL::synapse0x2e0ba90() {
   return (neuron0x2df2120()*-0.0277927);
}

double NNfunction_sb_uLuL::synapse0x2e0be10() {
   return (neuron0x2ded560()*0.23696);
}

double NNfunction_sb_uLuL::synapse0x2e0be50() {
   return (neuron0x2ded8a0()*0.295505);
}

double NNfunction_sb_uLuL::synapse0x2e0be90() {
   return (neuron0x2dedbe0()*-0.229393);
}

double NNfunction_sb_uLuL::synapse0x2e0bed0() {
   return (neuron0x2dedf20()*0.655515);
}

double NNfunction_sb_uLuL::synapse0x2e0bf10() {
   return (neuron0x2dee260()*0.228683);
}

double NNfunction_sb_uLuL::synapse0x2e0bf50() {
   return (neuron0x2dee5a0()*0.445858);
}

double NNfunction_sb_uLuL::synapse0x2e0bf90() {
   return (neuron0x2dee8e0()*0.0035491);
}

double NNfunction_sb_uLuL::synapse0x2e0bfd0() {
   return (neuron0x2deec20()*0.91881);
}

double NNfunction_sb_uLuL::synapse0x2e0c010() {
   return (neuron0x2deef60()*-0.159523);
}

double NNfunction_sb_uLuL::synapse0x2e0c050() {
   return (neuron0x2def2a0()*0.0364075);
}

double NNfunction_sb_uLuL::synapse0x2e0c090() {
   return (neuron0x2def5e0()*-0.0413871);
}

double NNfunction_sb_uLuL::synapse0x2e0c0d0() {
   return (neuron0x2def920()*0.167529);
}

double NNfunction_sb_uLuL::synapse0x2e0c110() {
   return (neuron0x2defc60()*0.14195);
}

double NNfunction_sb_uLuL::synapse0x2e0c150() {
   return (neuron0x2deffa0()*-0.636755);
}

double NNfunction_sb_uLuL::synapse0x2e0c190() {
   return (neuron0x2df02e0()*-0.253015);
}

double NNfunction_sb_uLuL::synapse0x2e0c1d0() {
   return (neuron0x2df0620()*0.138548);
}

double NNfunction_sb_uLuL::synapse0x2e0bc60() {
   return (neuron0x2df0960()*0.19328);
}

double NNfunction_sb_uLuL::synapse0x2e0bca0() {
   return (neuron0x2df0ec0()*0.214628);
}

double NNfunction_sb_uLuL::synapse0x2e0c320() {
   return (neuron0x2df10e0()*-0.0884519);
}

double NNfunction_sb_uLuL::synapse0x2e0c360() {
   return (neuron0x2df1420()*0.31989);
}

double NNfunction_sb_uLuL::synapse0x2e0c3a0() {
   return (neuron0x2df1760()*0.057288);
}

double NNfunction_sb_uLuL::synapse0x2e0c3e0() {
   return (neuron0x2df1aa0()*-0.0421859);
}

double NNfunction_sb_uLuL::synapse0x2e0c420() {
   return (neuron0x2df1de0()*0.303696);
}

double NNfunction_sb_uLuL::synapse0x2e0c460() {
   return (neuron0x2df2120()*0.0303351);
}

double NNfunction_sb_uLuL::synapse0x2e0c7e0() {
   return (neuron0x2ded560()*-0.444197);
}

double NNfunction_sb_uLuL::synapse0x2e0c820() {
   return (neuron0x2ded8a0()*-0.823157);
}

double NNfunction_sb_uLuL::synapse0x2e0c860() {
   return (neuron0x2dedbe0()*-0.521172);
}

double NNfunction_sb_uLuL::synapse0x2e0c8a0() {
   return (neuron0x2dedf20()*-0.212665);
}

double NNfunction_sb_uLuL::synapse0x2e0c8e0() {
   return (neuron0x2dee260()*0.892112);
}

double NNfunction_sb_uLuL::synapse0x2e0c920() {
   return (neuron0x2dee5a0()*-0.112075);
}

double NNfunction_sb_uLuL::synapse0x2e0c960() {
   return (neuron0x2dee8e0()*-0.469099);
}

double NNfunction_sb_uLuL::synapse0x2e0c9a0() {
   return (neuron0x2deec20()*0.379396);
}

double NNfunction_sb_uLuL::synapse0x2e0c9e0() {
   return (neuron0x2deef60()*0.340124);
}

double NNfunction_sb_uLuL::synapse0x2e0ca20() {
   return (neuron0x2def2a0()*-0.0684889);
}

double NNfunction_sb_uLuL::synapse0x2e0ca60() {
   return (neuron0x2def5e0()*0.0171007);
}

double NNfunction_sb_uLuL::synapse0x2e0caa0() {
   return (neuron0x2def920()*-0.698068);
}

double NNfunction_sb_uLuL::synapse0x2e0cae0() {
   return (neuron0x2defc60()*0.597656);
}

double NNfunction_sb_uLuL::synapse0x2e0cb20() {
   return (neuron0x2deffa0()*-1.11437);
}

double NNfunction_sb_uLuL::synapse0x2e0cb60() {
   return (neuron0x2df02e0()*-0.142367);
}

double NNfunction_sb_uLuL::synapse0x2e0cba0() {
   return (neuron0x2df0620()*-0.373491);
}

double NNfunction_sb_uLuL::synapse0x2e0c630() {
   return (neuron0x2df0960()*-0.018056);
}

double NNfunction_sb_uLuL::synapse0x2e0c670() {
   return (neuron0x2df0ec0()*-0.696893);
}

double NNfunction_sb_uLuL::synapse0x2e0ccf0() {
   return (neuron0x2df10e0()*-0.161282);
}

double NNfunction_sb_uLuL::synapse0x2e0cd30() {
   return (neuron0x2df1420()*0.305619);
}

double NNfunction_sb_uLuL::synapse0x2e0cd70() {
   return (neuron0x2df1760()*0.139828);
}

double NNfunction_sb_uLuL::synapse0x2e0cdb0() {
   return (neuron0x2df1aa0()*-0.2248);
}

double NNfunction_sb_uLuL::synapse0x2e0cdf0() {
   return (neuron0x2df1de0()*-0.233239);
}

double NNfunction_sb_uLuL::synapse0x2e0ce30() {
   return (neuron0x2df2120()*-0.152954);
}

double NNfunction_sb_uLuL::synapse0x2e0d1b0() {
   return (neuron0x2ded560()*0.351824);
}

double NNfunction_sb_uLuL::synapse0x2e0d1f0() {
   return (neuron0x2ded8a0()*-0.186488);
}

double NNfunction_sb_uLuL::synapse0x2e0d230() {
   return (neuron0x2dedbe0()*-0.0511596);
}

double NNfunction_sb_uLuL::synapse0x2e0d270() {
   return (neuron0x2dedf20()*-0.216392);
}

double NNfunction_sb_uLuL::synapse0x2e0d2b0() {
   return (neuron0x2dee260()*-0.306531);
}

double NNfunction_sb_uLuL::synapse0x2e0d2f0() {
   return (neuron0x2dee5a0()*0.231614);
}

double NNfunction_sb_uLuL::synapse0x2e0d330() {
   return (neuron0x2dee8e0()*0.090433);
}

double NNfunction_sb_uLuL::synapse0x2e0d370() {
   return (neuron0x2deec20()*0.460695);
}

double NNfunction_sb_uLuL::synapse0x2e0d3b0() {
   return (neuron0x2deef60()*0.478115);
}

double NNfunction_sb_uLuL::synapse0x2e0d3f0() {
   return (neuron0x2def2a0()*0.00724261);
}

double NNfunction_sb_uLuL::synapse0x2e0d430() {
   return (neuron0x2def5e0()*0.518562);
}

double NNfunction_sb_uLuL::synapse0x2e0d470() {
   return (neuron0x2def920()*0.570767);
}

double NNfunction_sb_uLuL::synapse0x2e0d4b0() {
   return (neuron0x2defc60()*-0.146456);
}

double NNfunction_sb_uLuL::synapse0x2e0d4f0() {
   return (neuron0x2deffa0()*0.210301);
}

double NNfunction_sb_uLuL::synapse0x2e0d530() {
   return (neuron0x2df02e0()*1.40299);
}

double NNfunction_sb_uLuL::synapse0x2e0d570() {
   return (neuron0x2df0620()*-0.311344);
}

double NNfunction_sb_uLuL::synapse0x2e0d000() {
   return (neuron0x2df0960()*-0.185825);
}

double NNfunction_sb_uLuL::synapse0x2e0d040() {
   return (neuron0x2df0ec0()*0.515935);
}

double NNfunction_sb_uLuL::synapse0x2e0d6c0() {
   return (neuron0x2df10e0()*0.214611);
}

double NNfunction_sb_uLuL::synapse0x2e0d700() {
   return (neuron0x2df1420()*0.586255);
}

double NNfunction_sb_uLuL::synapse0x2e0d740() {
   return (neuron0x2df1760()*-0.0919283);
}

double NNfunction_sb_uLuL::synapse0x2e0d780() {
   return (neuron0x2df1aa0()*-0.00473586);
}

double NNfunction_sb_uLuL::synapse0x2e0d7c0() {
   return (neuron0x2df1de0()*-0.42821);
}

double NNfunction_sb_uLuL::synapse0x2e0d800() {
   return (neuron0x2df2120()*0.499151);
}

double NNfunction_sb_uLuL::synapse0x2e0db80() {
   return (neuron0x2ded560()*0.101436);
}

double NNfunction_sb_uLuL::synapse0x2e0dbc0() {
   return (neuron0x2ded8a0()*0.0320744);
}

double NNfunction_sb_uLuL::synapse0x2e0dc00() {
   return (neuron0x2dedbe0()*0.139505);
}

double NNfunction_sb_uLuL::synapse0x2e0dc40() {
   return (neuron0x2dedf20()*0.512128);
}

double NNfunction_sb_uLuL::synapse0x2e0dc80() {
   return (neuron0x2dee260()*0.00496709);
}

double NNfunction_sb_uLuL::synapse0x2e0dcc0() {
   return (neuron0x2dee5a0()*0.0674954);
}

double NNfunction_sb_uLuL::synapse0x2e0dd00() {
   return (neuron0x2dee8e0()*-0.138411);
}

double NNfunction_sb_uLuL::synapse0x2e0dd40() {
   return (neuron0x2deec20()*-0.0739777);
}

double NNfunction_sb_uLuL::synapse0x2e0dd80() {
   return (neuron0x2deef60()*-0.631891);
}

double NNfunction_sb_uLuL::synapse0x2e0ddc0() {
   return (neuron0x2def2a0()*0.485532);
}

double NNfunction_sb_uLuL::synapse0x2e0de00() {
   return (neuron0x2def5e0()*-0.0743258);
}

double NNfunction_sb_uLuL::synapse0x2e0de40() {
   return (neuron0x2def920()*1.78079);
}

double NNfunction_sb_uLuL::synapse0x2e0de80() {
   return (neuron0x2defc60()*-0.178328);
}

double NNfunction_sb_uLuL::synapse0x2e0dec0() {
   return (neuron0x2deffa0()*-0.339695);
}

double NNfunction_sb_uLuL::synapse0x2e0df00() {
   return (neuron0x2df02e0()*-0.069726);
}

double NNfunction_sb_uLuL::synapse0x2e0df40() {
   return (neuron0x2df0620()*-0.061552);
}

double NNfunction_sb_uLuL::synapse0x2e0d9d0() {
   return (neuron0x2df0960()*-0.221396);
}

double NNfunction_sb_uLuL::synapse0x2e0da10() {
   return (neuron0x2df0ec0()*0.0407418);
}

double NNfunction_sb_uLuL::synapse0x2e0e090() {
   return (neuron0x2df10e0()*-0.0718386);
}

double NNfunction_sb_uLuL::synapse0x2e0e0d0() {
   return (neuron0x2df1420()*-0.303018);
}

double NNfunction_sb_uLuL::synapse0x2e0e110() {
   return (neuron0x2df1760()*-0.0646106);
}

double NNfunction_sb_uLuL::synapse0x2e0e150() {
   return (neuron0x2df1aa0()*0.0094858);
}

double NNfunction_sb_uLuL::synapse0x2e0e190() {
   return (neuron0x2df1de0()*-0.0283297);
}

double NNfunction_sb_uLuL::synapse0x2e0e1d0() {
   return (neuron0x2df2120()*-0.0484359);
}

double NNfunction_sb_uLuL::synapse0x2e0e550() {
   return (neuron0x2ded560()*-0.395832);
}

double NNfunction_sb_uLuL::synapse0x2e0e590() {
   return (neuron0x2ded8a0()*-0.147724);
}

double NNfunction_sb_uLuL::synapse0x2e0e5d0() {
   return (neuron0x2dedbe0()*0.837955);
}

double NNfunction_sb_uLuL::synapse0x2e0e610() {
   return (neuron0x2dedf20()*0.175941);
}

double NNfunction_sb_uLuL::synapse0x2e0e650() {
   return (neuron0x2dee260()*0.0454738);
}

double NNfunction_sb_uLuL::synapse0x2e0e690() {
   return (neuron0x2dee5a0()*-0.230538);
}

double NNfunction_sb_uLuL::synapse0x2e0e6d0() {
   return (neuron0x2dee8e0()*0.103911);
}

double NNfunction_sb_uLuL::synapse0x2e0e710() {
   return (neuron0x2deec20()*-0.724115);
}

double NNfunction_sb_uLuL::synapse0x2e0e750() {
   return (neuron0x2deef60()*-0.14726);
}

double NNfunction_sb_uLuL::synapse0x2e0e790() {
   return (neuron0x2def2a0()*0.189725);
}

double NNfunction_sb_uLuL::synapse0x2e0e7d0() {
   return (neuron0x2def5e0()*0.14721);
}

double NNfunction_sb_uLuL::synapse0x2e0e810() {
   return (neuron0x2def920()*0.30344);
}

double NNfunction_sb_uLuL::synapse0x2e0e850() {
   return (neuron0x2defc60()*-0.163122);
}

double NNfunction_sb_uLuL::synapse0x2e0e890() {
   return (neuron0x2deffa0()*-0.0742128);
}

double NNfunction_sb_uLuL::synapse0x2e0e8d0() {
   return (neuron0x2df02e0()*-0.435086);
}

double NNfunction_sb_uLuL::synapse0x2e0e910() {
   return (neuron0x2df0620()*0.666762);
}

double NNfunction_sb_uLuL::synapse0x2e0e3a0() {
   return (neuron0x2df0960()*-0.308625);
}

double NNfunction_sb_uLuL::synapse0x2e0e3e0() {
   return (neuron0x2df0ec0()*0.226855);
}

double NNfunction_sb_uLuL::synapse0x2e0ea60() {
   return (neuron0x2df10e0()*0.0270871);
}

double NNfunction_sb_uLuL::synapse0x2e0eaa0() {
   return (neuron0x2df1420()*-0.679973);
}

double NNfunction_sb_uLuL::synapse0x2e0eae0() {
   return (neuron0x2df1760()*-0.274674);
}

double NNfunction_sb_uLuL::synapse0x2e0eb20() {
   return (neuron0x2df1aa0()*-0.233947);
}

double NNfunction_sb_uLuL::synapse0x2e0eb60() {
   return (neuron0x2df1de0()*0.542741);
}

double NNfunction_sb_uLuL::synapse0x2e0eba0() {
   return (neuron0x2df2120()*-0.652229);
}

double NNfunction_sb_uLuL::synapse0x2df7650() {
   return (neuron0x2ded560()*-0.327616);
}

double NNfunction_sb_uLuL::synapse0x2df7690() {
   return (neuron0x2ded8a0()*-0.0510005);
}

double NNfunction_sb_uLuL::synapse0x2df76d0() {
   return (neuron0x2dedbe0()*-0.558616);
}

double NNfunction_sb_uLuL::synapse0x2df7710() {
   return (neuron0x2dedf20()*-0.215171);
}

double NNfunction_sb_uLuL::synapse0x2df7750() {
   return (neuron0x2dee260()*0.00260899);
}

double NNfunction_sb_uLuL::synapse0x2df7790() {
   return (neuron0x2dee5a0()*-0.290957);
}

double NNfunction_sb_uLuL::synapse0x2df77d0() {
   return (neuron0x2dee8e0()*0.0599612);
}

double NNfunction_sb_uLuL::synapse0x2df7810() {
   return (neuron0x2deec20()*-0.403794);
}

double NNfunction_sb_uLuL::synapse0x2e0f330() {
   return (neuron0x2deef60()*-1.36185);
}

double NNfunction_sb_uLuL::synapse0x2e0f370() {
   return (neuron0x2def2a0()*0.334829);
}

double NNfunction_sb_uLuL::synapse0x2e0f3b0() {
   return (neuron0x2def5e0()*-0.284988);
}

double NNfunction_sb_uLuL::synapse0x2e0f3f0() {
   return (neuron0x2def920()*0.355225);
}

double NNfunction_sb_uLuL::synapse0x2e0f430() {
   return (neuron0x2defc60()*0.0494454);
}

double NNfunction_sb_uLuL::synapse0x2e0f470() {
   return (neuron0x2deffa0()*-0.0735269);
}

double NNfunction_sb_uLuL::synapse0x2e0f4b0() {
   return (neuron0x2df02e0()*0.187627);
}

double NNfunction_sb_uLuL::synapse0x2e0f4f0() {
   return (neuron0x2df0620()*0.0239047);
}

double NNfunction_sb_uLuL::synapse0x2e0ed70() {
   return (neuron0x2df0960()*-0.243286);
}

double NNfunction_sb_uLuL::synapse0x2e0edb0() {
   return (neuron0x2df0ec0()*-0.161774);
}

double NNfunction_sb_uLuL::synapse0x2e0f640() {
   return (neuron0x2df10e0()*-0.159024);
}

double NNfunction_sb_uLuL::synapse0x2e0f680() {
   return (neuron0x2df1420()*0.203355);
}

double NNfunction_sb_uLuL::synapse0x2e0f6c0() {
   return (neuron0x2df1760()*0.145729);
}

double NNfunction_sb_uLuL::synapse0x2e0f700() {
   return (neuron0x2df1aa0()*-0.376585);
}

double NNfunction_sb_uLuL::synapse0x2e0f740() {
   return (neuron0x2df1de0()*-0.0609149);
}

double NNfunction_sb_uLuL::synapse0x2e0f780() {
   return (neuron0x2df2120()*-0.098514);
}

double NNfunction_sb_uLuL::synapse0x2e0fb00() {
   return (neuron0x2ded560()*0.206385);
}

double NNfunction_sb_uLuL::synapse0x2e0fb40() {
   return (neuron0x2ded8a0()*0.08032);
}

double NNfunction_sb_uLuL::synapse0x2e0fb80() {
   return (neuron0x2dedbe0()*0.265056);
}

double NNfunction_sb_uLuL::synapse0x2e0fbc0() {
   return (neuron0x2dedf20()*-0.156077);
}

double NNfunction_sb_uLuL::synapse0x2e0fc00() {
   return (neuron0x2dee260()*-0.0218853);
}

double NNfunction_sb_uLuL::synapse0x2e0fc40() {
   return (neuron0x2dee5a0()*-0.110589);
}

double NNfunction_sb_uLuL::synapse0x2e0fc80() {
   return (neuron0x2dee8e0()*0.0129446);
}

double NNfunction_sb_uLuL::synapse0x2e0fcc0() {
   return (neuron0x2deec20()*-0.0640558);
}

double NNfunction_sb_uLuL::synapse0x2e0fd00() {
   return (neuron0x2deef60()*0.158775);
}

double NNfunction_sb_uLuL::synapse0x2e0fd40() {
   return (neuron0x2def2a0()*0.230723);
}

double NNfunction_sb_uLuL::synapse0x2e0fd80() {
   return (neuron0x2def5e0()*0.019905);
}

double NNfunction_sb_uLuL::synapse0x2e0fdc0() {
   return (neuron0x2def920()*-0.31255);
}

double NNfunction_sb_uLuL::synapse0x2e0fe00() {
   return (neuron0x2defc60()*-0.0397012);
}

double NNfunction_sb_uLuL::synapse0x2e0fe40() {
   return (neuron0x2deffa0()*0.20814);
}

double NNfunction_sb_uLuL::synapse0x2e0fe80() {
   return (neuron0x2df02e0()*0.0404438);
}

double NNfunction_sb_uLuL::synapse0x2e0fec0() {
   return (neuron0x2df0620()*-1.31232);
}

double NNfunction_sb_uLuL::synapse0x2e0f950() {
   return (neuron0x2df0960()*0.170582);
}

double NNfunction_sb_uLuL::synapse0x2e0f990() {
   return (neuron0x2df0ec0()*-0.0667073);
}

double NNfunction_sb_uLuL::synapse0x2e10010() {
   return (neuron0x2df10e0()*-0.0189758);
}

double NNfunction_sb_uLuL::synapse0x2e10050() {
   return (neuron0x2df1420()*-0.0258708);
}

double NNfunction_sb_uLuL::synapse0x2e10090() {
   return (neuron0x2df1760()*-0.0405093);
}

double NNfunction_sb_uLuL::synapse0x2e100d0() {
   return (neuron0x2df1aa0()*0.0444915);
}

double NNfunction_sb_uLuL::synapse0x2e10110() {
   return (neuron0x2df1de0()*0.035098);
}

double NNfunction_sb_uLuL::synapse0x2e10150() {
   return (neuron0x2df2120()*0.190203);
}

double NNfunction_sb_uLuL::synapse0x2e104d0() {
   return (neuron0x2ded560()*-0.0245507);
}

double NNfunction_sb_uLuL::synapse0x2e10510() {
   return (neuron0x2ded8a0()*0.0142393);
}

double NNfunction_sb_uLuL::synapse0x2e10550() {
   return (neuron0x2dedbe0()*-0.0866378);
}

double NNfunction_sb_uLuL::synapse0x2e10590() {
   return (neuron0x2dedf20()*1.20773);
}

double NNfunction_sb_uLuL::synapse0x2e105d0() {
   return (neuron0x2dee260()*-0.0358141);
}

double NNfunction_sb_uLuL::synapse0x2e10610() {
   return (neuron0x2dee5a0()*-0.0295536);
}

double NNfunction_sb_uLuL::synapse0x2e10650() {
   return (neuron0x2dee8e0()*-0.0218394);
}

double NNfunction_sb_uLuL::synapse0x2e10690() {
   return (neuron0x2deec20()*0.0177273);
}

double NNfunction_sb_uLuL::synapse0x2e106d0() {
   return (neuron0x2deef60()*0.029014);
}

double NNfunction_sb_uLuL::synapse0x2e10710() {
   return (neuron0x2def2a0()*0.0186884);
}

double NNfunction_sb_uLuL::synapse0x2e10750() {
   return (neuron0x2def5e0()*0.0543735);
}

double NNfunction_sb_uLuL::synapse0x2e10790() {
   return (neuron0x2def920()*-0.117108);
}

double NNfunction_sb_uLuL::synapse0x2e107d0() {
   return (neuron0x2defc60()*-0.067468);
}

double NNfunction_sb_uLuL::synapse0x2e10810() {
   return (neuron0x2deffa0()*-0.0210571);
}

double NNfunction_sb_uLuL::synapse0x2e10850() {
   return (neuron0x2df02e0()*-0.072969);
}

double NNfunction_sb_uLuL::synapse0x2e10890() {
   return (neuron0x2df0620()*-0.105245);
}

double NNfunction_sb_uLuL::synapse0x2e10320() {
   return (neuron0x2df0960()*-0.0153962);
}

double NNfunction_sb_uLuL::synapse0x2e10360() {
   return (neuron0x2df0ec0()*-0.0212089);
}

double NNfunction_sb_uLuL::synapse0x2e00e90() {
   return (neuron0x2df10e0()*-0.0338494);
}

double NNfunction_sb_uLuL::synapse0x2e00ed0() {
   return (neuron0x2df1420()*-0.0144721);
}

double NNfunction_sb_uLuL::synapse0x2e00f10() {
   return (neuron0x2df1760()*-0.00891144);
}

double NNfunction_sb_uLuL::synapse0x2e00f50() {
   return (neuron0x2df1aa0()*-0.0251785);
}

double NNfunction_sb_uLuL::synapse0x2e00f90() {
   return (neuron0x2df1de0()*-0.0200115);
}

double NNfunction_sb_uLuL::synapse0x2e00fd0() {
   return (neuron0x2df2120()*0.0106297);
}

double NNfunction_sb_uLuL::synapse0x2e01350() {
   return (neuron0x2ded560()*0.00137784);
}

double NNfunction_sb_uLuL::synapse0x2e01390() {
   return (neuron0x2ded8a0()*-0.0158793);
}

double NNfunction_sb_uLuL::synapse0x2e013d0() {
   return (neuron0x2dedbe0()*-0.0240162);
}

double NNfunction_sb_uLuL::synapse0x2e01410() {
   return (neuron0x2dedf20()*7.85443);
}

double NNfunction_sb_uLuL::synapse0x2e01450() {
   return (neuron0x2dee260()*-0.00802964);
}

double NNfunction_sb_uLuL::synapse0x2e01490() {
   return (neuron0x2dee5a0()*0.00538843);
}

double NNfunction_sb_uLuL::synapse0x2e014d0() {
   return (neuron0x2dee8e0()*-0.00696864);
}

double NNfunction_sb_uLuL::synapse0x2e01510() {
   return (neuron0x2deec20()*0.0103322);
}

double NNfunction_sb_uLuL::synapse0x2e01550() {
   return (neuron0x2deef60()*0.00712629);
}

double NNfunction_sb_uLuL::synapse0x2e01590() {
   return (neuron0x2def2a0()*0.00510828);
}

double NNfunction_sb_uLuL::synapse0x2e015d0() {
   return (neuron0x2def5e0()*0.00323997);
}

double NNfunction_sb_uLuL::synapse0x2e01610() {
   return (neuron0x2def920()*-0.0997975);
}

double NNfunction_sb_uLuL::synapse0x2e01650() {
   return (neuron0x2defc60()*-0.0199291);
}

double NNfunction_sb_uLuL::synapse0x2e01690() {
   return (neuron0x2deffa0()*-0.00910787);
}

double NNfunction_sb_uLuL::synapse0x2e016d0() {
   return (neuron0x2df02e0()*-0.0109584);
}

double NNfunction_sb_uLuL::synapse0x2e01710() {
   return (neuron0x2df0620()*-0.000600123);
}

double NNfunction_sb_uLuL::synapse0x2e011a0() {
   return (neuron0x2df0960()*-0.00224735);
}

double NNfunction_sb_uLuL::synapse0x2e011e0() {
   return (neuron0x2df0ec0()*0.0107466);
}

double NNfunction_sb_uLuL::synapse0x2e01860() {
   return (neuron0x2df10e0()*0.00736167);
}

double NNfunction_sb_uLuL::synapse0x2e018a0() {
   return (neuron0x2df1420()*-0.00489316);
}

double NNfunction_sb_uLuL::synapse0x2e018e0() {
   return (neuron0x2df1760()*-0.0080269);
}

double NNfunction_sb_uLuL::synapse0x2e01920() {
   return (neuron0x2df1aa0()*-0.00865932);
}

double NNfunction_sb_uLuL::synapse0x2e01960() {
   return (neuron0x2df1de0()*-0.0108352);
}

double NNfunction_sb_uLuL::synapse0x2e019a0() {
   return (neuron0x2df2120()*-0.00115761);
}

double NNfunction_sb_uLuL::synapse0x2e01d20() {
   return (neuron0x2ded560()*-0.0175356);
}

double NNfunction_sb_uLuL::synapse0x2e01d60() {
   return (neuron0x2ded8a0()*-0.00578313);
}

double NNfunction_sb_uLuL::synapse0x2e01da0() {
   return (neuron0x2dedbe0()*-0.0520852);
}

double NNfunction_sb_uLuL::synapse0x2e01de0() {
   return (neuron0x2dedf20()*-0.0596395);
}

double NNfunction_sb_uLuL::synapse0x2e01e20() {
   return (neuron0x2dee260()*0.000846217);
}

double NNfunction_sb_uLuL::synapse0x2e01e60() {
   return (neuron0x2dee5a0()*-0.000917059);
}

double NNfunction_sb_uLuL::synapse0x2e01ea0() {
   return (neuron0x2dee8e0()*0.00756282);
}

double NNfunction_sb_uLuL::synapse0x2e01ee0() {
   return (neuron0x2deec20()*0.00994053);
}

double NNfunction_sb_uLuL::synapse0x2e01f20() {
   return (neuron0x2deef60()*0.00195867);
}

double NNfunction_sb_uLuL::synapse0x2e01f60() {
   return (neuron0x2def2a0()*-0.0059037);
}

double NNfunction_sb_uLuL::synapse0x2e01fa0() {
   return (neuron0x2def5e0()*-0.0133322);
}

double NNfunction_sb_uLuL::synapse0x2e01fe0() {
   return (neuron0x2def920()*3.58813);
}

double NNfunction_sb_uLuL::synapse0x2e02020() {
   return (neuron0x2defc60()*0.0233799);
}

double NNfunction_sb_uLuL::synapse0x2e02060() {
   return (neuron0x2deffa0()*0.026007);
}

double NNfunction_sb_uLuL::synapse0x2e020a0() {
   return (neuron0x2df02e0()*0.0235737);
}

double NNfunction_sb_uLuL::synapse0x2e020e0() {
   return (neuron0x2df0620()*0.0328831);
}

double NNfunction_sb_uLuL::synapse0x2e01b70() {
   return (neuron0x2df0960()*0.0333924);
}

double NNfunction_sb_uLuL::synapse0x2e01bb0() {
   return (neuron0x2df0ec0()*0.0111557);
}

double NNfunction_sb_uLuL::synapse0x2e02230() {
   return (neuron0x2df10e0()*0.0157884);
}

double NNfunction_sb_uLuL::synapse0x2e02270() {
   return (neuron0x2df1420()*0.00899685);
}

double NNfunction_sb_uLuL::synapse0x2e022b0() {
   return (neuron0x2df1760()*0.000166041);
}

double NNfunction_sb_uLuL::synapse0x2e022f0() {
   return (neuron0x2df1aa0()*-0.00605173);
}

double NNfunction_sb_uLuL::synapse0x2e02330() {
   return (neuron0x2df1de0()*-0.00932864);
}

double NNfunction_sb_uLuL::synapse0x2e02370() {
   return (neuron0x2df2120()*-0.000310507);
}

double NNfunction_sb_uLuL::synapse0x2e026f0() {
   return (neuron0x2ded560()*0.0632889);
}

double NNfunction_sb_uLuL::synapse0x2e02730() {
   return (neuron0x2ded8a0()*-0.00395623);
}

double NNfunction_sb_uLuL::synapse0x2e02770() {
   return (neuron0x2dedbe0()*-0.333849);
}

double NNfunction_sb_uLuL::synapse0x2e027b0() {
   return (neuron0x2dedf20()*-1.11674);
}

double NNfunction_sb_uLuL::synapse0x2e027f0() {
   return (neuron0x2dee260()*-0.182827);
}

double NNfunction_sb_uLuL::synapse0x2e02830() {
   return (neuron0x2dee5a0()*-0.81727);
}

double NNfunction_sb_uLuL::synapse0x2e02870() {
   return (neuron0x2dee8e0()*-0.348106);
}

double NNfunction_sb_uLuL::synapse0x2e028b0() {
   return (neuron0x2deec20()*-0.297697);
}

double NNfunction_sb_uLuL::synapse0x2e028f0() {
   return (neuron0x2deef60()*-0.0894616);
}

double NNfunction_sb_uLuL::synapse0x2e02930() {
   return (neuron0x2def2a0()*0.251587);
}

double NNfunction_sb_uLuL::synapse0x2e02970() {
   return (neuron0x2def5e0()*-0.504223);
}

double NNfunction_sb_uLuL::synapse0x2e029b0() {
   return (neuron0x2def920()*-1.20006);
}

double NNfunction_sb_uLuL::synapse0x2e029f0() {
   return (neuron0x2defc60()*0.00210736);
}

double NNfunction_sb_uLuL::synapse0x2e02a30() {
   return (neuron0x2deffa0()*-0.0697319);
}

double NNfunction_sb_uLuL::synapse0x2e02a70() {
   return (neuron0x2df02e0()*-0.462119);
}

double NNfunction_sb_uLuL::synapse0x2e02ab0() {
   return (neuron0x2df0620()*0.000931591);
}

double NNfunction_sb_uLuL::synapse0x2e02540() {
   return (neuron0x2df0960()*-0.363563);
}

double NNfunction_sb_uLuL::synapse0x2e02580() {
   return (neuron0x2df0ec0()*0.080334);
}

double NNfunction_sb_uLuL::synapse0x2e02c00() {
   return (neuron0x2df10e0()*-0.168);
}

double NNfunction_sb_uLuL::synapse0x2e02c40() {
   return (neuron0x2df1420()*0.223637);
}

double NNfunction_sb_uLuL::synapse0x2e02c80() {
   return (neuron0x2df1760()*-0.132133);
}

double NNfunction_sb_uLuL::synapse0x2e02cc0() {
   return (neuron0x2df1aa0()*0.0443146);
}

double NNfunction_sb_uLuL::synapse0x2e02d00() {
   return (neuron0x2df1de0()*-0.276369);
}

double NNfunction_sb_uLuL::synapse0x2e02d40() {
   return (neuron0x2df2120()*0.118957);
}

double NNfunction_sb_uLuL::synapse0x2e14c10() {
   return (neuron0x2ded560()*-0.120402);
}

double NNfunction_sb_uLuL::synapse0x2e14c50() {
   return (neuron0x2ded8a0()*0.0127235);
}

double NNfunction_sb_uLuL::synapse0x2e14c90() {
   return (neuron0x2dedbe0()*-0.856362);
}

double NNfunction_sb_uLuL::synapse0x2e14cd0() {
   return (neuron0x2dedf20()*-0.776515);
}

double NNfunction_sb_uLuL::synapse0x2e14d10() {
   return (neuron0x2dee260()*-0.131385);
}

double NNfunction_sb_uLuL::synapse0x2e14d50() {
   return (neuron0x2dee5a0()*-0.202601);
}

double NNfunction_sb_uLuL::synapse0x2e14d90() {
   return (neuron0x2dee8e0()*0.138538);
}

double NNfunction_sb_uLuL::synapse0x2e14dd0() {
   return (neuron0x2deec20()*-0.00126564);
}

double NNfunction_sb_uLuL::synapse0x2e14e10() {
   return (neuron0x2deef60()*0.204347);
}

double NNfunction_sb_uLuL::synapse0x2e14e50() {
   return (neuron0x2def2a0()*-0.00230212);
}

double NNfunction_sb_uLuL::synapse0x2e14e90() {
   return (neuron0x2def5e0()*0.038281);
}

double NNfunction_sb_uLuL::synapse0x2e14ed0() {
   return (neuron0x2def920()*-0.149924);
}

double NNfunction_sb_uLuL::synapse0x2e14f10() {
   return (neuron0x2defc60()*-0.554445);
}

double NNfunction_sb_uLuL::synapse0x2e14f50() {
   return (neuron0x2deffa0()*0.427383);
}

double NNfunction_sb_uLuL::synapse0x2e14f90() {
   return (neuron0x2df02e0()*0.135637);
}

double NNfunction_sb_uLuL::synapse0x2e14fd0() {
   return (neuron0x2df0620()*-0.221797);
}

double NNfunction_sb_uLuL::synapse0x2e02d80() {
   return (neuron0x2df0960()*0.931815);
}

double NNfunction_sb_uLuL::synapse0x2e02dc0() {
   return (neuron0x2df0ec0()*-0.293737);
}

double NNfunction_sb_uLuL::synapse0x2e15120() {
   return (neuron0x2df10e0()*-0.310835);
}

double NNfunction_sb_uLuL::synapse0x2e15160() {
   return (neuron0x2df1420()*-0.142351);
}

double NNfunction_sb_uLuL::synapse0x2e151a0() {
   return (neuron0x2df1760()*0.10332);
}

double NNfunction_sb_uLuL::synapse0x2e151e0() {
   return (neuron0x2df1aa0()*-0.0575809);
}

double NNfunction_sb_uLuL::synapse0x2e15220() {
   return (neuron0x2df1de0()*-0.0705857);
}

double NNfunction_sb_uLuL::synapse0x2e15260() {
   return (neuron0x2df2120()*-0.161792);
}

double NNfunction_sb_uLuL::synapse0x2e155e0() {
   return (neuron0x2ded560()*-0.210205);
}

double NNfunction_sb_uLuL::synapse0x2e15620() {
   return (neuron0x2ded8a0()*0.0159523);
}

double NNfunction_sb_uLuL::synapse0x2e15660() {
   return (neuron0x2dedbe0()*0.272543);
}

double NNfunction_sb_uLuL::synapse0x2e156a0() {
   return (neuron0x2dedf20()*-0.688477);
}

double NNfunction_sb_uLuL::synapse0x2e156e0() {
   return (neuron0x2dee260()*0.0348537);
}

double NNfunction_sb_uLuL::synapse0x2e15720() {
   return (neuron0x2dee5a0()*-0.0431739);
}

double NNfunction_sb_uLuL::synapse0x2e15760() {
   return (neuron0x2dee8e0()*0.0586969);
}

double NNfunction_sb_uLuL::synapse0x2e157a0() {
   return (neuron0x2deec20()*0.0823231);
}

double NNfunction_sb_uLuL::synapse0x2e157e0() {
   return (neuron0x2deef60()*-0.120829);
}

double NNfunction_sb_uLuL::synapse0x2e15820() {
   return (neuron0x2def2a0()*0.199014);
}

double NNfunction_sb_uLuL::synapse0x2e15860() {
   return (neuron0x2def5e0()*-0.178324);
}

double NNfunction_sb_uLuL::synapse0x2e158a0() {
   return (neuron0x2def920()*-4.20918);
}

double NNfunction_sb_uLuL::synapse0x2e158e0() {
   return (neuron0x2defc60()*0.097487);
}

double NNfunction_sb_uLuL::synapse0x2e15920() {
   return (neuron0x2deffa0()*0.0138589);
}

double NNfunction_sb_uLuL::synapse0x2e15960() {
   return (neuron0x2df02e0()*-0.0159718);
}

double NNfunction_sb_uLuL::synapse0x2e159a0() {
   return (neuron0x2df0620()*0.0606255);
}

double NNfunction_sb_uLuL::synapse0x2e15430() {
   return (neuron0x2df0960()*0.0126493);
}

double NNfunction_sb_uLuL::synapse0x2e15470() {
   return (neuron0x2df0ec0()*-0.00992951);
}

double NNfunction_sb_uLuL::synapse0x2e15af0() {
   return (neuron0x2df10e0()*0.0188968);
}

double NNfunction_sb_uLuL::synapse0x2e15b30() {
   return (neuron0x2df1420()*0.0737795);
}

double NNfunction_sb_uLuL::synapse0x2e15b70() {
   return (neuron0x2df1760()*0.0468644);
}

double NNfunction_sb_uLuL::synapse0x2e15bb0() {
   return (neuron0x2df1aa0()*-0.0267688);
}

double NNfunction_sb_uLuL::synapse0x2e15bf0() {
   return (neuron0x2df1de0()*-0.0505318);
}

double NNfunction_sb_uLuL::synapse0x2e15c30() {
   return (neuron0x2df2120()*-0.0341665);
}

double NNfunction_sb_uLuL::synapse0x2e15fb0() {
   return (neuron0x2ded560()*0.516784);
}

double NNfunction_sb_uLuL::synapse0x2e15ff0() {
   return (neuron0x2ded8a0()*0.916324);
}

double NNfunction_sb_uLuL::synapse0x2e16030() {
   return (neuron0x2dedbe0()*-0.0710746);
}

double NNfunction_sb_uLuL::synapse0x2e16070() {
   return (neuron0x2dedf20()*0.0846803);
}

double NNfunction_sb_uLuL::synapse0x2e160b0() {
   return (neuron0x2dee260()*0.476321);
}

double NNfunction_sb_uLuL::synapse0x2e160f0() {
   return (neuron0x2dee5a0()*0.68088);
}

double NNfunction_sb_uLuL::synapse0x2e16130() {
   return (neuron0x2dee8e0()*0.210245);
}

double NNfunction_sb_uLuL::synapse0x2e16170() {
   return (neuron0x2deec20()*0.784914);
}

double NNfunction_sb_uLuL::synapse0x2e161b0() {
   return (neuron0x2deef60()*-0.297092);
}

double NNfunction_sb_uLuL::synapse0x2e161f0() {
   return (neuron0x2def2a0()*0.248367);
}

double NNfunction_sb_uLuL::synapse0x2e16230() {
   return (neuron0x2def5e0()*0.713776);
}

double NNfunction_sb_uLuL::synapse0x2e16270() {
   return (neuron0x2def920()*-0.21786);
}

double NNfunction_sb_uLuL::synapse0x2e162b0() {
   return (neuron0x2defc60()*0.282258);
}

double NNfunction_sb_uLuL::synapse0x2e162f0() {
   return (neuron0x2deffa0()*-0.253093);
}

double NNfunction_sb_uLuL::synapse0x2e16330() {
   return (neuron0x2df02e0()*-0.211735);
}

double NNfunction_sb_uLuL::synapse0x2e16370() {
   return (neuron0x2df0620()*0.157319);
}

double NNfunction_sb_uLuL::synapse0x2e15e00() {
   return (neuron0x2df0960()*-0.103011);
}

double NNfunction_sb_uLuL::synapse0x2e15e40() {
   return (neuron0x2df0ec0()*0.3412);
}

double NNfunction_sb_uLuL::synapse0x2e164c0() {
   return (neuron0x2df10e0()*0.199145);
}

double NNfunction_sb_uLuL::synapse0x2e16500() {
   return (neuron0x2df1420()*-0.564402);
}

double NNfunction_sb_uLuL::synapse0x2e16540() {
   return (neuron0x2df1760()*-0.0583932);
}

double NNfunction_sb_uLuL::synapse0x2e16580() {
   return (neuron0x2df1aa0()*0.157032);
}

double NNfunction_sb_uLuL::synapse0x2e165c0() {
   return (neuron0x2df1de0()*0.31078);
}

double NNfunction_sb_uLuL::synapse0x2e16600() {
   return (neuron0x2df2120()*0.582571);
}

double NNfunction_sb_uLuL::synapse0x2e16980() {
   return (neuron0x2ded560()*0.013156);
}

double NNfunction_sb_uLuL::synapse0x2e169c0() {
   return (neuron0x2ded8a0()*-0.0166697);
}

double NNfunction_sb_uLuL::synapse0x2e16a00() {
   return (neuron0x2dedbe0()*0.00882137);
}

double NNfunction_sb_uLuL::synapse0x2e16a40() {
   return (neuron0x2dedf20()*3.72241);
}

double NNfunction_sb_uLuL::synapse0x2e16a80() {
   return (neuron0x2dee260()*0.0217456);
}

double NNfunction_sb_uLuL::synapse0x2e16ac0() {
   return (neuron0x2dee5a0()*0.0052899);
}

double NNfunction_sb_uLuL::synapse0x2e16b00() {
   return (neuron0x2dee8e0()*0.00129986);
}

double NNfunction_sb_uLuL::synapse0x2e16b40() {
   return (neuron0x2deec20()*0.0160197);
}

double NNfunction_sb_uLuL::synapse0x2e16b80() {
   return (neuron0x2deef60()*-0.0040409);
}

double NNfunction_sb_uLuL::synapse0x2e16bc0() {
   return (neuron0x2def2a0()*0.0100066);
}

double NNfunction_sb_uLuL::synapse0x2e16c00() {
   return (neuron0x2def5e0()*-0.0148793);
}

double NNfunction_sb_uLuL::synapse0x2e16c40() {
   return (neuron0x2def920()*0.0864287);
}

double NNfunction_sb_uLuL::synapse0x2e16c80() {
   return (neuron0x2defc60()*0.0348571);
}

double NNfunction_sb_uLuL::synapse0x2e16cc0() {
   return (neuron0x2deffa0()*0.0149106);
}

double NNfunction_sb_uLuL::synapse0x2e16d00() {
   return (neuron0x2df02e0()*0.011005);
}

double NNfunction_sb_uLuL::synapse0x2e16d40() {
   return (neuron0x2df0620()*0.0327448);
}

double NNfunction_sb_uLuL::synapse0x2e167d0() {
   return (neuron0x2df0960()*0.0194365);
}

double NNfunction_sb_uLuL::synapse0x2e16810() {
   return (neuron0x2df0ec0()*0.0163683);
}

double NNfunction_sb_uLuL::synapse0x2e16e90() {
   return (neuron0x2df10e0()*0.00676087);
}

double NNfunction_sb_uLuL::synapse0x2e16ed0() {
   return (neuron0x2df1420()*0.00514475);
}

double NNfunction_sb_uLuL::synapse0x2e16f10() {
   return (neuron0x2df1760()*0.0133081);
}

double NNfunction_sb_uLuL::synapse0x2e16f50() {
   return (neuron0x2df1aa0()*0.00420543);
}

double NNfunction_sb_uLuL::synapse0x2e16f90() {
   return (neuron0x2df1de0()*0.0014761);
}

double NNfunction_sb_uLuL::synapse0x2e16fd0() {
   return (neuron0x2df2120()*0.00506891);
}

double NNfunction_sb_uLuL::synapse0x2df3570() {
   return (neuron0x2df25c0()*0.00851315);
}

double NNfunction_sb_uLuL::synapse0x2df35b0() {
   return (neuron0x2df2ed0()*0.0126908);
}

double NNfunction_sb_uLuL::synapse0x2df4a80() {
   return (neuron0x2df39b0()*0.0636191);
}

double NNfunction_sb_uLuL::synapse0x2df4ac0() {
   return (neuron0x2bad240()*-0.00396596);
}

double NNfunction_sb_uLuL::synapse0x2df5450() {
   return (neuron0x2df47d0()*2.16774);
}

double NNfunction_sb_uLuL::synapse0x2df5490() {
   return (neuron0x2df51a0()*0.134354);
}

double NNfunction_sb_uLuL::synapse0x2df6220() {
   return (neuron0x2df5f70()*-0.0431201);
}

double NNfunction_sb_uLuL::synapse0x2df6260() {
   return (neuron0x2df6940()*-0.0158726);
}

double NNfunction_sb_uLuL::synapse0x2df6bf0() {
   return (neuron0x2df7310()*0.0219996);
}

double NNfunction_sb_uLuL::synapse0x2df6c30() {
   return (neuron0x2df7df0()*0.0439487);
}

double NNfunction_sb_uLuL::synapse0x2df75c0() {
   return (neuron0x2df87c0()*-0.637044);
}

double NNfunction_sb_uLuL::synapse0x2df7600() {
   return (neuron0x2df58a0()*-0.0626022);
}

double NNfunction_sb_uLuL::synapse0x2df80a0() {
   return (neuron0x2dfa370()*-0.108592);
}

double NNfunction_sb_uLuL::synapse0x2df80e0() {
   return (neuron0x2dfad40()*0.532097);
}

double NNfunction_sb_uLuL::synapse0x2df8a70() {
   return (neuron0x2dfb710()*0.032633);
}

double NNfunction_sb_uLuL::synapse0x2df8ab0() {
   return (neuron0x2dfc0e0()*1.06156);
}

double NNfunction_sb_uLuL::synapse0x2df5b50() {
   return (neuron0x2dfdef0()*0.00534986);
}

double NNfunction_sb_uLuL::synapse0x2df5b90() {
   return (neuron0x2dfe1d0()*0.0580325);
}

double NNfunction_sb_uLuL::synapse0x2dfa620() {
   return (neuron0x2dfeba0()*-0.0146956);
}

double NNfunction_sb_uLuL::synapse0x2dfa660() {
   return (neuron0x2dff570()*-0.0429986);
}

double NNfunction_sb_uLuL::synapse0x2dfaff0() {
   return (neuron0x2dfff40()*-1.16265);
}

double NNfunction_sb_uLuL::synapse0x2dfb030() {
   return (neuron0x2e00910()*0.303051);
}

double NNfunction_sb_uLuL::synapse0x2dfb9c0() {
   return (neuron0x2df9460()*-0.0919183);
}

double NNfunction_sb_uLuL::synapse0x2dfba00() {
   return (neuron0x2df9e30()*-0.0122519);
}

double NNfunction_sb_uLuL::synapse0x2dfc390() {
   return (neuron0x2e036a0()*0.0428769);
}

double NNfunction_sb_uLuL::synapse0x2dfc3d0() {
   return (neuron0x2e04070()*0.122617);
}

double NNfunction_sb_uLuL::synapse0x2df0500() {
   return (neuron0x2e04a40()*0.0888984);
}

double NNfunction_sb_uLuL::synapse0x2df0540() {
   return (neuron0x2e05410()*0.105511);
}

double NNfunction_sb_uLuL::synapse0x2dfe480() {
   return (neuron0x2e05de0()*0.0264107);
}

double NNfunction_sb_uLuL::synapse0x2dfe4c0() {
   return (neuron0x2e067b0()*0.0351129);
}

double NNfunction_sb_uLuL::synapse0x2dfee50() {
   return (neuron0x2e07180()*-0.0279563);
}

double NNfunction_sb_uLuL::synapse0x2dfee90() {
   return (neuron0x2e07b50()*0.00122129);
}

double NNfunction_sb_uLuL::synapse0x2dff820() {
   return (neuron0x2dfdbe0()*-0.0406269);
}

double NNfunction_sb_uLuL::synapse0x2dff860() {
   return (neuron0x2e0a730()*0.0566312);
}

double NNfunction_sb_uLuL::synapse0x2e001f0() {
   return (neuron0x2e0b100()*-0.332195);
}

double NNfunction_sb_uLuL::synapse0x2e00230() {
   return (neuron0x2e0bad0()*-0.0349901);
}

double NNfunction_sb_uLuL::synapse0x2e00bc0() {
   return (neuron0x2e0c4a0()*-0.0211287);
}

double NNfunction_sb_uLuL::synapse0x2e00c00() {
   return (neuron0x2e0ce70()*-0.017498);
}

double NNfunction_sb_uLuL::synapse0x2df9710() {
   return (neuron0x2e0d840()*0.0281512);
}

double NNfunction_sb_uLuL::synapse0x2df9750() {
   return (neuron0x2e0e210()*-0.00368644);
}

double NNfunction_sb_uLuL::synapse0x2e02fc0() {
   return (neuron0x2e0ebe0()*-0.0289001);
}

double NNfunction_sb_uLuL::synapse0x2e03000() {
   return (neuron0x2e0f7c0()*-0.00546471);
}

double NNfunction_sb_uLuL::synapse0x2e03950() {
   return (neuron0x2e10190()*0.129633);
}

double NNfunction_sb_uLuL::synapse0x2e03990() {
   return (neuron0x2e01010()*0.0520516);
}

double NNfunction_sb_uLuL::synapse0x2e04320() {
   return (neuron0x2e019e0()*-0.681538);
}

double NNfunction_sb_uLuL::synapse0x2e04360() {
   return (neuron0x2e023b0()*0.00111897);
}

double NNfunction_sb_uLuL::synapse0x2e04cf0() {
   return (neuron0x2e149f0()*-0.0254612);
}

double NNfunction_sb_uLuL::synapse0x2e04d30() {
   return (neuron0x2e152a0()*-0.00181082);
}

double NNfunction_sb_uLuL::synapse0x2e056c0() {
   return (neuron0x2e15c70()*-0.00863817);
}

double NNfunction_sb_uLuL::synapse0x2e05700() {
   return (neuron0x2e16640()*0.0744058);
}

double NNfunction_sb_uLuL::synapse0x2e07e00() {
   return (neuron0x2df25c0()*0.561364);
}

double NNfunction_sb_uLuL::synapse0x2e07e40() {
   return (neuron0x2df2ed0()*-1.22294);
}

double NNfunction_sb_uLuL::synapse0x2dfd3c0() {
   return (neuron0x2df39b0()*0.204974);
}

double NNfunction_sb_uLuL::synapse0x2dfd400() {
   return (neuron0x2bad240()*2.69875);
}

double NNfunction_sb_uLuL::synapse0x2e0a9e0() {
   return (neuron0x2df47d0()*-0.65883);
}

double NNfunction_sb_uLuL::synapse0x2e0aa20() {
   return (neuron0x2df51a0()*-4.53561);
}

double NNfunction_sb_uLuL::synapse0x2e0b3b0() {
   return (neuron0x2df5f70()*2.70758);
}

double NNfunction_sb_uLuL::synapse0x2e0b3f0() {
   return (neuron0x2df6940()*-0.261956);
}

double NNfunction_sb_uLuL::synapse0x2e0bd80() {
   return (neuron0x2df7310()*0.755778);
}

double NNfunction_sb_uLuL::synapse0x2e0bdc0() {
   return (neuron0x2df7df0()*-0.934549);
}

double NNfunction_sb_uLuL::synapse0x2e0c750() {
   return (neuron0x2df87c0()*1.13882);
}

double NNfunction_sb_uLuL::synapse0x2e0c790() {
   return (neuron0x2df58a0()*-0.918599);
}

double NNfunction_sb_uLuL::synapse0x2e0d120() {
   return (neuron0x2dfa370()*-0.993911);
}

double NNfunction_sb_uLuL::synapse0x2e0d160() {
   return (neuron0x2dfad40()*5.58744);
}

double NNfunction_sb_uLuL::synapse0x2e0daf0() {
   return (neuron0x2dfb710()*-0.878205);
}

double NNfunction_sb_uLuL::synapse0x2e0db30() {
   return (neuron0x2dfc0e0()*-0.868892);
}

double NNfunction_sb_uLuL::synapse0x2e0e4c0() {
   return (neuron0x2dfdef0()*0.0992171);
}

double NNfunction_sb_uLuL::synapse0x2e0e500() {
   return (neuron0x2dfe1d0()*-1.39319);
}

double NNfunction_sb_uLuL::synapse0x2e0ee90() {
   return (neuron0x2dfeba0()*-0.187623);
}

double NNfunction_sb_uLuL::synapse0x2e0eed0() {
   return (neuron0x2dff570()*-0.885263);
}

double NNfunction_sb_uLuL::synapse0x2e0fa70() {
   return (neuron0x2dfff40()*2.21316);
}

double NNfunction_sb_uLuL::synapse0x2e0fab0() {
   return (neuron0x2e00910()*2.35898);
}

double NNfunction_sb_uLuL::synapse0x2e10440() {
   return (neuron0x2df9460()*1.73063);
}

double NNfunction_sb_uLuL::synapse0x2e10480() {
   return (neuron0x2df9e30()*-0.729122);
}

double NNfunction_sb_uLuL::synapse0x2e012c0() {
   return (neuron0x2e036a0()*-0.790018);
}

double NNfunction_sb_uLuL::synapse0x2e01300() {
   return (neuron0x2e04070()*-1.42424);
}

double NNfunction_sb_uLuL::synapse0x2e01c90() {
   return (neuron0x2e04a40()*-1.56409);
}

double NNfunction_sb_uLuL::synapse0x2e01cd0() {
   return (neuron0x2e05410()*-0.230979);
}

double NNfunction_sb_uLuL::synapse0x2e02660() {
   return (neuron0x2e05de0()*-0.068262);
}

double NNfunction_sb_uLuL::synapse0x2e026a0() {
   return (neuron0x2e067b0()*-0.935897);
}

double NNfunction_sb_uLuL::synapse0x2e14b80() {
   return (neuron0x2e07180()*0.42799);
}

double NNfunction_sb_uLuL::synapse0x2e14bc0() {
   return (neuron0x2e07b50()*-0.189238);
}

double NNfunction_sb_uLuL::synapse0x2e15550() {
   return (neuron0x2dfdbe0()*0.429108);
}

double NNfunction_sb_uLuL::synapse0x2e15590() {
   return (neuron0x2e0a730()*-0.599685);
}

double NNfunction_sb_uLuL::synapse0x2e15f20() {
   return (neuron0x2e0b100()*-0.0421115);
}

double NNfunction_sb_uLuL::synapse0x2e15f60() {
   return (neuron0x2e0bad0()*-1.41116);
}

double NNfunction_sb_uLuL::synapse0x2e168f0() {
   return (neuron0x2e0c4a0()*0.119791);
}

double NNfunction_sb_uLuL::synapse0x2e16930() {
   return (neuron0x2e0ce70()*0.874268);
}

double NNfunction_sb_uLuL::synapse0x2df27e0() {
   return (neuron0x2e0d840()*0.26546);
}

double NNfunction_sb_uLuL::synapse0x2df2820() {
   return (neuron0x2e0e210()*0.564087);
}

double NNfunction_sb_uLuL::synapse0x2e06090() {
   return (neuron0x2e0ebe0()*0.83862);
}

double NNfunction_sb_uLuL::synapse0x2e060d0() {
   return (neuron0x2e0f7c0()*-0.0594407);
}

double NNfunction_sb_uLuL::synapse0x2e17010() {
   return (neuron0x2e10190()*0.313389);
}

double NNfunction_sb_uLuL::synapse0x2e17050() {
   return (neuron0x2e01010()*1.01647);
}

double NNfunction_sb_uLuL::synapse0x2e17090() {
   return (neuron0x2e019e0()*0.486281);
}

double NNfunction_sb_uLuL::synapse0x2e170d0() {
   return (neuron0x2e023b0()*1.79131);
}

double NNfunction_sb_uLuL::synapse0x2e1df80() {
   return (neuron0x2e149f0()*2.59336);
}

double NNfunction_sb_uLuL::synapse0x2e1dfc0() {
   return (neuron0x2e152a0()*-1.98722);
}

double NNfunction_sb_uLuL::synapse0x2e1e000() {
   return (neuron0x2e15c70()*0.162338);
}

double NNfunction_sb_uLuL::synapse0x2e1e040() {
   return (neuron0x2e16640()*-0.976656);
}

double NNfunction_sb_uLuL::synapse0x2e1e3c0() {
   return (neuron0x2df25c0()*0.898267);
}

double NNfunction_sb_uLuL::synapse0x2e1e400() {
   return (neuron0x2df2ed0()*-1.84515);
}

double NNfunction_sb_uLuL::synapse0x2e1e440() {
   return (neuron0x2df39b0()*4.86362);
}

double NNfunction_sb_uLuL::synapse0x2e1e480() {
   return (neuron0x2bad240()*0.965433);
}

double NNfunction_sb_uLuL::synapse0x2e1e4c0() {
   return (neuron0x2df47d0()*-1.91759);
}

double NNfunction_sb_uLuL::synapse0x2e1e500() {
   return (neuron0x2df51a0()*-6.23132);
}

double NNfunction_sb_uLuL::synapse0x2e1e540() {
   return (neuron0x2df5f70()*0.0724419);
}

double NNfunction_sb_uLuL::synapse0x2e1e580() {
   return (neuron0x2df6940()*1.19045);
}

double NNfunction_sb_uLuL::synapse0x2e1e5c0() {
   return (neuron0x2df7310()*0.951165);
}

double NNfunction_sb_uLuL::synapse0x2e1e600() {
   return (neuron0x2df7df0()*-2.05252);
}

double NNfunction_sb_uLuL::synapse0x2e1e640() {
   return (neuron0x2df87c0()*-0.223795);
}

double NNfunction_sb_uLuL::synapse0x2e1e680() {
   return (neuron0x2df58a0()*-2.23875);
}

double NNfunction_sb_uLuL::synapse0x2e1e6c0() {
   return (neuron0x2dfa370()*1.48643);
}

double NNfunction_sb_uLuL::synapse0x2e1e700() {
   return (neuron0x2dfad40()*1.43082);
}

double NNfunction_sb_uLuL::synapse0x2e1e740() {
   return (neuron0x2dfb710()*1.84959);
}

double NNfunction_sb_uLuL::synapse0x2e1e780() {
   return (neuron0x2dfc0e0()*-2.35908);
}

double NNfunction_sb_uLuL::synapse0x2e1e210() {
   return (neuron0x2dfdef0()*1.59632);
}

double NNfunction_sb_uLuL::synapse0x2e1e250() {
   return (neuron0x2dfe1d0()*1.56073);
}

double NNfunction_sb_uLuL::synapse0x2e1e8d0() {
   return (neuron0x2dfeba0()*1.62487);
}

double NNfunction_sb_uLuL::synapse0x2e1e910() {
   return (neuron0x2dff570()*1.84261);
}

double NNfunction_sb_uLuL::synapse0x2e1e950() {
   return (neuron0x2dfff40()*3.63071);
}

double NNfunction_sb_uLuL::synapse0x2e1e990() {
   return (neuron0x2e00910()*5.60902);
}

double NNfunction_sb_uLuL::synapse0x2e1e9d0() {
   return (neuron0x2df9460()*-0.647221);
}

double NNfunction_sb_uLuL::synapse0x2e1ea10() {
   return (neuron0x2df9e30()*-1.09573);
}

double NNfunction_sb_uLuL::synapse0x2e1ea50() {
   return (neuron0x2e036a0()*2.35957);
}

double NNfunction_sb_uLuL::synapse0x2e1ea90() {
   return (neuron0x2e04070()*-3.06981);
}

double NNfunction_sb_uLuL::synapse0x2e1ead0() {
   return (neuron0x2e04a40()*1.65441);
}

double NNfunction_sb_uLuL::synapse0x2e1eb10() {
   return (neuron0x2e05410()*2.44153);
}

double NNfunction_sb_uLuL::synapse0x2e1eb50() {
   return (neuron0x2e05de0()*1.30219);
}

double NNfunction_sb_uLuL::synapse0x2e1eb90() {
   return (neuron0x2e067b0()*0.774314);
}

double NNfunction_sb_uLuL::synapse0x2e1ebd0() {
   return (neuron0x2e07180()*1.46816);
}

double NNfunction_sb_uLuL::synapse0x2e1ec10() {
   return (neuron0x2e07b50()*-1.50457);
}

double NNfunction_sb_uLuL::synapse0x2e1e7c0() {
   return (neuron0x2dfdbe0()*2.13584);
}

double NNfunction_sb_uLuL::synapse0x2e1e800() {
   return (neuron0x2e0a730()*5.26329);
}

double NNfunction_sb_uLuL::synapse0x2e1e840() {
   return (neuron0x2e0b100()*-3.26686);
}

double NNfunction_sb_uLuL::synapse0x2e1e880() {
   return (neuron0x2e0bad0()*1.10504);
}

double NNfunction_sb_uLuL::synapse0x2e1ee60() {
   return (neuron0x2e0c4a0()*0.994159);
}

double NNfunction_sb_uLuL::synapse0x2e1eea0() {
   return (neuron0x2e0ce70()*0.564651);
}

double NNfunction_sb_uLuL::synapse0x2e1eee0() {
   return (neuron0x2e0d840()*1.85711);
}

double NNfunction_sb_uLuL::synapse0x2e1ef20() {
   return (neuron0x2e0e210()*1.2405);
}

double NNfunction_sb_uLuL::synapse0x2e1ef60() {
   return (neuron0x2e0ebe0()*0.948972);
}

double NNfunction_sb_uLuL::synapse0x2e1efa0() {
   return (neuron0x2e0f7c0()*-2.05656);
}

double NNfunction_sb_uLuL::synapse0x2e1efe0() {
   return (neuron0x2e10190()*1.41421);
}

double NNfunction_sb_uLuL::synapse0x2e1f020() {
   return (neuron0x2e01010()*-6.17335);
}

double NNfunction_sb_uLuL::synapse0x2e1f060() {
   return (neuron0x2e019e0()*2.14376);
}

double NNfunction_sb_uLuL::synapse0x2e1f0a0() {
   return (neuron0x2e023b0()*-0.503299);
}

double NNfunction_sb_uLuL::synapse0x2e1f0e0() {
   return (neuron0x2e149f0()*1.40168);
}

double NNfunction_sb_uLuL::synapse0x2e1f120() {
   return (neuron0x2e152a0()*-3.72793);
}

double NNfunction_sb_uLuL::synapse0x2e1f160() {
   return (neuron0x2e15c70()*-1.06188);
}

double NNfunction_sb_uLuL::synapse0x2e1f1a0() {
   return (neuron0x2e16640()*-9.01612);
}

double NNfunction_sb_uLuL::synapse0x2e1f520() {
   return (neuron0x2df25c0()*-0.0344487);
}

double NNfunction_sb_uLuL::synapse0x2e1f560() {
   return (neuron0x2df2ed0()*0.00299449);
}

double NNfunction_sb_uLuL::synapse0x2e1f5a0() {
   return (neuron0x2df39b0()*0.264698);
}

double NNfunction_sb_uLuL::synapse0x2e1f5e0() {
   return (neuron0x2bad240()*0.0917448);
}

double NNfunction_sb_uLuL::synapse0x2e1f620() {
   return (neuron0x2df47d0()*1.13152);
}

double NNfunction_sb_uLuL::synapse0x2e1f660() {
   return (neuron0x2df51a0()*0.893739);
}

double NNfunction_sb_uLuL::synapse0x2e1f6a0() {
   return (neuron0x2df5f70()*0.12824);
}

double NNfunction_sb_uLuL::synapse0x2e1f6e0() {
   return (neuron0x2df6940()*0.0203113);
}

double NNfunction_sb_uLuL::synapse0x2e1f720() {
   return (neuron0x2df7310()*-0.068502);
}

double NNfunction_sb_uLuL::synapse0x2e1f760() {
   return (neuron0x2df7df0()*-0.225986);
}

double NNfunction_sb_uLuL::synapse0x2e1f7a0() {
   return (neuron0x2df87c0()*-0.101933);
}

double NNfunction_sb_uLuL::synapse0x2e1f7e0() {
   return (neuron0x2df58a0()*0.120971);
}

double NNfunction_sb_uLuL::synapse0x2e1f820() {
   return (neuron0x2dfa370()*0.295135);
}

double NNfunction_sb_uLuL::synapse0x2e1f860() {
   return (neuron0x2dfad40()*-0.652631);
}

double NNfunction_sb_uLuL::synapse0x2e1f8a0() {
   return (neuron0x2dfb710()*-0.104633);
}

double NNfunction_sb_uLuL::synapse0x2e1f8e0() {
   return (neuron0x2dfc0e0()*0.0309572);
}

double NNfunction_sb_uLuL::synapse0x2e1f370() {
   return (neuron0x2dfdef0()*-0.00721888);
}

double NNfunction_sb_uLuL::synapse0x2e1f3b0() {
   return (neuron0x2dfe1d0()*-0.122228);
}

double NNfunction_sb_uLuL::synapse0x2e1fa30() {
   return (neuron0x2dfeba0()*0.046836);
}

double NNfunction_sb_uLuL::synapse0x2e1fa70() {
   return (neuron0x2dff570()*0.172062);
}

double NNfunction_sb_uLuL::synapse0x2e1fab0() {
   return (neuron0x2dfff40()*0.807928);
}

double NNfunction_sb_uLuL::synapse0x2e1faf0() {
   return (neuron0x2e00910()*-0.324725);
}

double NNfunction_sb_uLuL::synapse0x2e1fb30() {
   return (neuron0x2df9460()*0.196709);
}

double NNfunction_sb_uLuL::synapse0x2e1fb70() {
   return (neuron0x2df9e30()*0.0217233);
}

double NNfunction_sb_uLuL::synapse0x2e1fbb0() {
   return (neuron0x2e036a0()*-0.0692434);
}

double NNfunction_sb_uLuL::synapse0x2e1fbf0() {
   return (neuron0x2e04070()*-0.251708);
}

double NNfunction_sb_uLuL::synapse0x2e1fc30() {
   return (neuron0x2e04a40()*-0.294072);
}

double NNfunction_sb_uLuL::synapse0x2e1fc70() {
   return (neuron0x2e05410()*-0.26629);
}

double NNfunction_sb_uLuL::synapse0x2e1fcb0() {
   return (neuron0x2e05de0()*-0.0946472);
}

double NNfunction_sb_uLuL::synapse0x2e1fcf0() {
   return (neuron0x2e067b0()*-0.114061);
}

double NNfunction_sb_uLuL::synapse0x2e1fd30() {
   return (neuron0x2e07180()*0.0403049);
}

double NNfunction_sb_uLuL::synapse0x2e1fd70() {
   return (neuron0x2e07b50()*0.0229776);
}

double NNfunction_sb_uLuL::synapse0x2e1f920() {
   return (neuron0x2dfdbe0()*0.128458);
}

double NNfunction_sb_uLuL::synapse0x2e1f960() {
   return (neuron0x2e0a730()*-0.261366);
}

double NNfunction_sb_uLuL::synapse0x2e1f9a0() {
   return (neuron0x2e0b100()*1.13122);
}

double NNfunction_sb_uLuL::synapse0x2e1f9e0() {
   return (neuron0x2e0bad0()*0.069425);
}

double NNfunction_sb_uLuL::synapse0x2e1ffc0() {
   return (neuron0x2e0c4a0()*0.0583706);
}

double NNfunction_sb_uLuL::synapse0x2e20000() {
   return (neuron0x2e0ce70()*0.038669);
}

double NNfunction_sb_uLuL::synapse0x2e20040() {
   return (neuron0x2e0d840()*0.0179088);
}

double NNfunction_sb_uLuL::synapse0x2e20080() {
   return (neuron0x2e0e210()*-0.0383282);
}

double NNfunction_sb_uLuL::synapse0x2e200c0() {
   return (neuron0x2e0ebe0()*0.0825719);
}

double NNfunction_sb_uLuL::synapse0x2e20100() {
   return (neuron0x2e0f7c0()*-0.00532678);
}

double NNfunction_sb_uLuL::synapse0x2e20140() {
   return (neuron0x2e10190()*-0.660794);
}

double NNfunction_sb_uLuL::synapse0x2e20180() {
   return (neuron0x2e01010()*0.882678);
}

double NNfunction_sb_uLuL::synapse0x2e201c0() {
   return (neuron0x2e019e0()*-0.634484);
}

double NNfunction_sb_uLuL::synapse0x2e20200() {
   return (neuron0x2e023b0()*-0.0152674);
}

double NNfunction_sb_uLuL::synapse0x2e20240() {
   return (neuron0x2e149f0()*0.091554);
}

double NNfunction_sb_uLuL::synapse0x2e20280() {
   return (neuron0x2e152a0()*-0.0842235);
}

double NNfunction_sb_uLuL::synapse0x2e202c0() {
   return (neuron0x2e15c70()*0.0553553);
}

double NNfunction_sb_uLuL::synapse0x2e20300() {
   return (neuron0x2e16640()*0.73428);
}

double NNfunction_sb_uLuL::synapse0x2e20680() {
   return (neuron0x2df25c0()*-0.0528454);
}

double NNfunction_sb_uLuL::synapse0x2e206c0() {
   return (neuron0x2df2ed0()*-0.131864);
}

double NNfunction_sb_uLuL::synapse0x2e20700() {
   return (neuron0x2df39b0()*1.27503);
}

double NNfunction_sb_uLuL::synapse0x2e20740() {
   return (neuron0x2bad240()*0.246528);
}

double NNfunction_sb_uLuL::synapse0x2e20780() {
   return (neuron0x2df47d0()*-1.05883);
}

double NNfunction_sb_uLuL::synapse0x2e207c0() {
   return (neuron0x2df51a0()*-1.06736);
}

double NNfunction_sb_uLuL::synapse0x2e20800() {
   return (neuron0x2df5f70()*0.216685);
}

double NNfunction_sb_uLuL::synapse0x2e20840() {
   return (neuron0x2df6940()*-0.00622422);
}

double NNfunction_sb_uLuL::synapse0x2e20880() {
   return (neuron0x2df7310()*-0.0678771);
}

double NNfunction_sb_uLuL::synapse0x2e208c0() {
   return (neuron0x2df7df0()*-0.52785);
}

double NNfunction_sb_uLuL::synapse0x2e20900() {
   return (neuron0x2df87c0()*1.11978);
}

double NNfunction_sb_uLuL::synapse0x2e20940() {
   return (neuron0x2df58a0()*-0.146736);
}

double NNfunction_sb_uLuL::synapse0x2e20980() {
   return (neuron0x2dfa370()*0.400643);
}

double NNfunction_sb_uLuL::synapse0x2e209c0() {
   return (neuron0x2dfad40()*1.2474);
}

double NNfunction_sb_uLuL::synapse0x2e20a00() {
   return (neuron0x2dfb710()*-0.017193);
}

double NNfunction_sb_uLuL::synapse0x2e20a40() {
   return (neuron0x2dfc0e0()*-1.05812);
}

double NNfunction_sb_uLuL::synapse0x2e204d0() {
   return (neuron0x2dfdef0()*0.0522094);
}

double NNfunction_sb_uLuL::synapse0x2e20510() {
   return (neuron0x2dfe1d0()*-0.0645635);
}

double NNfunction_sb_uLuL::synapse0x2e20b90() {
   return (neuron0x2dfeba0()*0.13542);
}

double NNfunction_sb_uLuL::synapse0x2e20bd0() {
   return (neuron0x2dff570()*0.325725);
}

double NNfunction_sb_uLuL::synapse0x2e20c10() {
   return (neuron0x2dfff40()*1.43697);
}

double NNfunction_sb_uLuL::synapse0x2e20c50() {
   return (neuron0x2e00910()*0.891034);
}

double NNfunction_sb_uLuL::synapse0x2e20c90() {
   return (neuron0x2df9460()*0.256469);
}

double NNfunction_sb_uLuL::synapse0x2e20cd0() {
   return (neuron0x2df9e30()*0.0690898);
}

double NNfunction_sb_uLuL::synapse0x2e20d10() {
   return (neuron0x2e036a0()*0.0280506);
}

double NNfunction_sb_uLuL::synapse0x2e20d50() {
   return (neuron0x2e04070()*-1.0495);
}

double NNfunction_sb_uLuL::synapse0x2e20d90() {
   return (neuron0x2e04a40()*-0.360078);
}

double NNfunction_sb_uLuL::synapse0x2e20dd0() {
   return (neuron0x2e05410()*-0.0601265);
}

double NNfunction_sb_uLuL::synapse0x2e20e10() {
   return (neuron0x2e05de0()*-0.160242);
}

double NNfunction_sb_uLuL::synapse0x2e20e50() {
   return (neuron0x2e067b0()*-0.179986);
}

double NNfunction_sb_uLuL::synapse0x2e20e90() {
   return (neuron0x2e07180()*0.0279218);
}

double NNfunction_sb_uLuL::synapse0x2e20ed0() {
   return (neuron0x2e07b50()*0.0620902);
}

double NNfunction_sb_uLuL::synapse0x2e20a80() {
   return (neuron0x2dfdbe0()*0.191544);
}

double NNfunction_sb_uLuL::synapse0x2e20ac0() {
   return (neuron0x2e0a730()*-0.285342);
}

double NNfunction_sb_uLuL::synapse0x2e20b00() {
   return (neuron0x2e0b100()*-1.70264);
}

double NNfunction_sb_uLuL::synapse0x2e20b40() {
   return (neuron0x2e0bad0()*0.11262);
}

double NNfunction_sb_uLuL::synapse0x2e21120() {
   return (neuron0x2e0c4a0()*0.0894369);
}

double NNfunction_sb_uLuL::synapse0x2e21160() {
   return (neuron0x2e0ce70()*0.0559219);
}

double NNfunction_sb_uLuL::synapse0x2e211a0() {
   return (neuron0x2e0d840()*0.203603);
}

double NNfunction_sb_uLuL::synapse0x2e211e0() {
   return (neuron0x2e0e210()*-0.112741);
}

double NNfunction_sb_uLuL::synapse0x2e21220() {
   return (neuron0x2e0ebe0()*0.142935);
}

double NNfunction_sb_uLuL::synapse0x2e21260() {
   return (neuron0x2e0f7c0()*-0.207629);
}

double NNfunction_sb_uLuL::synapse0x2e212a0() {
   return (neuron0x2e10190()*0.725898);
}

double NNfunction_sb_uLuL::synapse0x2e212e0() {
   return (neuron0x2e01010()*-0.82118);
}

double NNfunction_sb_uLuL::synapse0x2e21320() {
   return (neuron0x2e019e0()*0.267014);
}

double NNfunction_sb_uLuL::synapse0x2e21360() {
   return (neuron0x2e023b0()*0.00537667);
}

double NNfunction_sb_uLuL::synapse0x2e213a0() {
   return (neuron0x2e149f0()*0.292235);
}

double NNfunction_sb_uLuL::synapse0x2e213e0() {
   return (neuron0x2e152a0()*-0.385501);
}

double NNfunction_sb_uLuL::synapse0x2e21420() {
   return (neuron0x2e15c70()*0.118146);
}

double NNfunction_sb_uLuL::synapse0x2e21460() {
   return (neuron0x2e16640()*-1.0364);
}

double NNfunction_sb_uLuL::synapse0x2df2580() {
   return (neuron0x2e1d840()*6.82716);
}

double NNfunction_sb_uLuL::synapse0x2e216c0() {
   return (neuron0x2e1dbe0()*-6.79068);
}

double NNfunction_sb_uLuL::synapse0x2e21700() {
   return (neuron0x2e1e080()*-9.92396);
}

double NNfunction_sb_uLuL::synapse0x2e21740() {
   return (neuron0x2e1f1e0()*10.2991);
}

double NNfunction_sb_uLuL::synapse0x2e21780() {
   return (neuron0x2e20340()*-4.06973);
}

