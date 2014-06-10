#include "NNfunction_sb_uRcR.h"
#include <cmath>

double NNfunction_sb_uRcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.328)/15.2847;
   input1 = (in1 - -4.84013)/1168.61;
   input2 = (in2 - 637.919)/616.237;
   input3 = (in3 - -51.6931)/798.421;
   input4 = (in4 - 1086.02)/974.796;
   input5 = (in5 - 909.018)/966.84;
   input6 = (in6 - 926.75)/974.963;
   input7 = (in7 - 933.111)/952.678;
   input8 = (in8 - 884.556)/934.812;
   input9 = (in9 - 875.101)/923.418;
   input10 = (in10 - 968.912)/924.814;
   input11 = (in11 - 682.541)/821.936;
   input12 = (in12 - 684.614)/830.574;
   input13 = (in13 - 499.285)/511.235;
   input14 = (in14 - 388.3)/385.149;
   input15 = (in15 - 390.957)/389.243;
   input16 = (in16 - 542.561)/577.703;
   input17 = (in17 - 717.994)/846.249;
   input18 = (in18 - 712.287)/855.999;
   input19 = (in19 - 768.468)/841.793;
   input20 = (in20 - -5.31462)/490.077;
   input21 = (in21 - 3.06942)/1157.47;
   input22 = (in22 - 4.53621)/1203.06;
   input23 = (in23 - -188.278)/606.567;
   switch(index) {
     case 0:
         return neuron0x21b34a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uRcR::Value(int index, double* input) {
   input0 = (input[0] - 23.328)/15.2847;
   input1 = (input[1] - -4.84013)/1168.61;
   input2 = (input[2] - 637.919)/616.237;
   input3 = (input[3] - -51.6931)/798.421;
   input4 = (input[4] - 1086.02)/974.796;
   input5 = (input[5] - 909.018)/966.84;
   input6 = (input[6] - 926.75)/974.963;
   input7 = (input[7] - 933.111)/952.678;
   input8 = (input[8] - 884.556)/934.812;
   input9 = (input[9] - 875.101)/923.418;
   input10 = (input[10] - 968.912)/924.814;
   input11 = (input[11] - 682.541)/821.936;
   input12 = (input[12] - 684.614)/830.574;
   input13 = (input[13] - 499.285)/511.235;
   input14 = (input[14] - 388.3)/385.149;
   input15 = (input[15] - 390.957)/389.243;
   input16 = (input[16] - 542.561)/577.703;
   input17 = (input[17] - 717.994)/846.249;
   input18 = (input[18] - 712.287)/855.999;
   input19 = (input[19] - 768.468)/841.793;
   input20 = (input[20] - -5.31462)/490.077;
   input21 = (input[21] - 3.06942)/1157.47;
   input22 = (input[22] - 4.53621)/1203.06;
   input23 = (input[23] - -188.278)/606.567;
   switch(index) {
     case 0:
         return neuron0x21b34a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uRcR::neuron0x217f560() {
   return input0;
}

double NNfunction_sb_uRcR::neuron0x217f8a0() {
   return input1;
}

double NNfunction_sb_uRcR::neuron0x217fbe0() {
   return input2;
}

double NNfunction_sb_uRcR::neuron0x217ff20() {
   return input3;
}

double NNfunction_sb_uRcR::neuron0x2180260() {
   return input4;
}

double NNfunction_sb_uRcR::neuron0x21805a0() {
   return input5;
}

double NNfunction_sb_uRcR::neuron0x21808e0() {
   return input6;
}

double NNfunction_sb_uRcR::neuron0x2180c20() {
   return input7;
}

double NNfunction_sb_uRcR::neuron0x2180f60() {
   return input8;
}

double NNfunction_sb_uRcR::neuron0x21812a0() {
   return input9;
}

double NNfunction_sb_uRcR::neuron0x21815e0() {
   return input10;
}

double NNfunction_sb_uRcR::neuron0x2181920() {
   return input11;
}

double NNfunction_sb_uRcR::neuron0x2181c60() {
   return input12;
}

double NNfunction_sb_uRcR::neuron0x2181fa0() {
   return input13;
}

double NNfunction_sb_uRcR::neuron0x21822e0() {
   return input14;
}

double NNfunction_sb_uRcR::neuron0x2182620() {
   return input15;
}

double NNfunction_sb_uRcR::neuron0x2182960() {
   return input16;
}

double NNfunction_sb_uRcR::neuron0x2182ec0() {
   return input17;
}

double NNfunction_sb_uRcR::neuron0x21830e0() {
   return input18;
}

double NNfunction_sb_uRcR::neuron0x2183420() {
   return input19;
}

double NNfunction_sb_uRcR::neuron0x2183760() {
   return input20;
}

double NNfunction_sb_uRcR::neuron0x2183aa0() {
   return input21;
}

double NNfunction_sb_uRcR::neuron0x2183de0() {
   return input22;
}

double NNfunction_sb_uRcR::neuron0x2184120() {
   return input23;
}

double NNfunction_sb_uRcR::input0x21845c0() {
   double input = -4.31019;
   input += synapse0x1f3f3d0();
   input += synapse0x217f420();
   input += synapse0x217f460();
   input += synapse0x2184870();
   input += synapse0x21848b0();
   input += synapse0x21848f0();
   input += synapse0x2184930();
   input += synapse0x2184970();
   input += synapse0x21849b0();
   input += synapse0x21849f0();
   input += synapse0x2184a30();
   input += synapse0x2184a70();
   input += synapse0x2184ab0();
   input += synapse0x2184af0();
   input += synapse0x2184b30();
   input += synapse0x2184b70();
   input += synapse0x217f390();
   input += synapse0x217f3d0();
   input += synapse0x1f30c70();
   input += synapse0x1f30cb0();
   input += synapse0x2184dd0();
   input += synapse0x2184e10();
   input += synapse0x2184e50();
   input += synapse0x2184e90();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21845c0() {
   double input = input0x21845c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x2184ed0() {
   double input = 0.799489;
   input += synapse0x2185210();
   input += synapse0x2185250();
   input += synapse0x2185290();
   input += synapse0x21852d0();
   input += synapse0x2185310();
   input += synapse0x2185350();
   input += synapse0x2185390();
   input += synapse0x21853d0();
   input += synapse0x2185410();
   input += synapse0x2184cc0();
   input += synapse0x2184d00();
   input += synapse0x2184d40();
   input += synapse0x2184d80();
   input += synapse0x2185660();
   input += synapse0x21856a0();
   input += synapse0x21856e0();
   input += synapse0x2185060();
   input += synapse0x21850a0();
   input += synapse0x2185830();
   input += synapse0x2185870();
   input += synapse0x21858b0();
   input += synapse0x21858f0();
   input += synapse0x2185930();
   input += synapse0x2185970();
   return input;
}

double NNfunction_sb_uRcR::neuron0x2184ed0() {
   double input = input0x2184ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21859b0() {
   double input = 0.177389;
   input += synapse0x2185cf0();
   input += synapse0x2185d30();
   input += synapse0x2185d70();
   input += synapse0x2185db0();
   input += synapse0x2185df0();
   input += synapse0x2185e30();
   input += synapse0x2185e70();
   input += synapse0x2185eb0();
   input += synapse0x2185ef0();
   input += synapse0x2185f30();
   input += synapse0x2185f70();
   input += synapse0x2185fb0();
   input += synapse0x2185ff0();
   input += synapse0x2186030();
   input += synapse0x2186070();
   input += synapse0x21860b0();
   input += synapse0x2185b40();
   input += synapse0x2185b80();
   input += synapse0x1f3eac0();
   input += synapse0x1f3eb00();
   input += synapse0x216e5f0();
   input += synapse0x216e630();
   input += synapse0x216e670();
   input += synapse0x217f4a0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21859b0() {
   double input = input0x21859b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1f3f240() {
   double input = 1.71115;
   input += synapse0x2185600();
   input += synapse0x217f4e0();
   input += synapse0x217f520();
   input += synapse0x2186200();
   input += synapse0x2186240();
   input += synapse0x2186280();
   input += synapse0x21862c0();
   input += synapse0x2186300();
   input += synapse0x2186340();
   input += synapse0x2186380();
   input += synapse0x21863c0();
   input += synapse0x2186400();
   input += synapse0x2186440();
   input += synapse0x2186480();
   input += synapse0x21864c0();
   input += synapse0x2186500();
   input += synapse0x2185450();
   input += synapse0x2185490();
   input += synapse0x2186650();
   input += synapse0x2186690();
   input += synapse0x21866d0();
   input += synapse0x2186710();
   input += synapse0x2186750();
   input += synapse0x2186790();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1f3f240() {
   double input = input0x1f3f240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21867d0() {
   double input = 0.572883;
   input += synapse0x2186b10();
   input += synapse0x2186b50();
   input += synapse0x2186b90();
   input += synapse0x2186bd0();
   input += synapse0x2186c10();
   input += synapse0x2186c50();
   input += synapse0x2186c90();
   input += synapse0x2186cd0();
   input += synapse0x2186d10();
   input += synapse0x2186d50();
   input += synapse0x2186d90();
   input += synapse0x2186dd0();
   input += synapse0x2186e10();
   input += synapse0x2186e50();
   input += synapse0x2186e90();
   input += synapse0x2186ed0();
   input += synapse0x2186960();
   input += synapse0x21869a0();
   input += synapse0x2187020();
   input += synapse0x2187060();
   input += synapse0x21870a0();
   input += synapse0x21870e0();
   input += synapse0x2187120();
   input += synapse0x2187160();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21867d0() {
   double input = input0x21867d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21871a0() {
   double input = -0.266685;
   input += synapse0x21874e0();
   input += synapse0x2187520();
   input += synapse0x2187560();
   input += synapse0x21875a0();
   input += synapse0x21875e0();
   input += synapse0x2187620();
   input += synapse0x2187660();
   input += synapse0x21876a0();
   input += synapse0x21876e0();
   input += synapse0x1f3ee30();
   input += synapse0x1f3ee70();
   input += synapse0x1f3eeb0();
   input += synapse0x1f3eef0();
   input += synapse0x1f3ef30();
   input += synapse0x1f3ef70();
   input += synapse0x1f3efb0();
   input += synapse0x2187330();
   input += synapse0x2187370();
   input += synapse0x1f3f100();
   input += synapse0x1f3f140();
   input += synapse0x1f3f180();
   input += synapse0x1f3f1c0();
   input += synapse0x1f3f200();
   input += synapse0x2187f30();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21871a0() {
   double input = input0x21871a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x2187f70() {
   double input = -0.975646;
   input += synapse0x21882b0();
   input += synapse0x21882f0();
   input += synapse0x2188330();
   input += synapse0x2188370();
   input += synapse0x21883b0();
   input += synapse0x21883f0();
   input += synapse0x2188430();
   input += synapse0x2188470();
   input += synapse0x21884b0();
   input += synapse0x21884f0();
   input += synapse0x2188530();
   input += synapse0x2188570();
   input += synapse0x21885b0();
   input += synapse0x21885f0();
   input += synapse0x2188630();
   input += synapse0x2188670();
   input += synapse0x2188100();
   input += synapse0x2188140();
   input += synapse0x21887c0();
   input += synapse0x2188800();
   input += synapse0x2188840();
   input += synapse0x2188880();
   input += synapse0x21888c0();
   input += synapse0x2188900();
   return input;
}

double NNfunction_sb_uRcR::neuron0x2187f70() {
   double input = input0x2187f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x2188940() {
   double input = 6.89647;
   input += synapse0x2188c80();
   input += synapse0x2188cc0();
   input += synapse0x2188d00();
   input += synapse0x2188d40();
   input += synapse0x2188d80();
   input += synapse0x2188dc0();
   input += synapse0x2188e00();
   input += synapse0x2188e40();
   input += synapse0x2188e80();
   input += synapse0x2188ec0();
   input += synapse0x2188f00();
   input += synapse0x2188f40();
   input += synapse0x2188f80();
   input += synapse0x2188fc0();
   input += synapse0x2189000();
   input += synapse0x2189040();
   input += synapse0x2188ad0();
   input += synapse0x2188b10();
   input += synapse0x2189190();
   input += synapse0x21891d0();
   input += synapse0x2189210();
   input += synapse0x2189250();
   input += synapse0x2189290();
   input += synapse0x21892d0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x2188940() {
   double input = input0x2188940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x2189310() {
   double input = -0.168988;
   input += synapse0x2182db0();
   input += synapse0x2182df0();
   input += synapse0x2182e30();
   input += synapse0x2182e70();
   input += synapse0x2189860();
   input += synapse0x21898a0();
   input += synapse0x21898e0();
   input += synapse0x2189920();
   input += synapse0x2189960();
   input += synapse0x21899a0();
   input += synapse0x21899e0();
   input += synapse0x2189a20();
   input += synapse0x2189a60();
   input += synapse0x2189aa0();
   input += synapse0x2189ae0();
   input += synapse0x2189b20();
   input += synapse0x21894a0();
   input += synapse0x21894e0();
   input += synapse0x2189c70();
   input += synapse0x2189cb0();
   input += synapse0x2189cf0();
   input += synapse0x2189d30();
   input += synapse0x2189d70();
   input += synapse0x2189db0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x2189310() {
   double input = input0x2189310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x2189df0() {
   double input = -0.4955;
   input += synapse0x218a130();
   input += synapse0x218a170();
   input += synapse0x218a1b0();
   input += synapse0x218a1f0();
   input += synapse0x218a230();
   input += synapse0x218a270();
   input += synapse0x218a2b0();
   input += synapse0x218a2f0();
   input += synapse0x218a330();
   input += synapse0x218a370();
   input += synapse0x218a3b0();
   input += synapse0x218a3f0();
   input += synapse0x218a430();
   input += synapse0x218a470();
   input += synapse0x218a4b0();
   input += synapse0x218a4f0();
   input += synapse0x2189f80();
   input += synapse0x2189fc0();
   input += synapse0x218a640();
   input += synapse0x218a680();
   input += synapse0x218a6c0();
   input += synapse0x218a700();
   input += synapse0x218a740();
   input += synapse0x218a780();
   return input;
}

double NNfunction_sb_uRcR::neuron0x2189df0() {
   double input = input0x2189df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x218a7c0() {
   double input = 0.397318;
   input += synapse0x218ab00();
   input += synapse0x218ab40();
   input += synapse0x218ab80();
   input += synapse0x218abc0();
   input += synapse0x218ac00();
   input += synapse0x218ac40();
   input += synapse0x218ac80();
   input += synapse0x218acc0();
   input += synapse0x218ad00();
   input += synapse0x218ad40();
   input += synapse0x218ad80();
   input += synapse0x218adc0();
   input += synapse0x218ae00();
   input += synapse0x218ae40();
   input += synapse0x218ae80();
   input += synapse0x218aec0();
   input += synapse0x218a950();
   input += synapse0x218a990();
   input += synapse0x2187720();
   input += synapse0x2187760();
   input += synapse0x21877a0();
   input += synapse0x21877e0();
   input += synapse0x2187820();
   input += synapse0x2187860();
   return input;
}

double NNfunction_sb_uRcR::neuron0x218a7c0() {
   double input = input0x218a7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21878a0() {
   double input = 1.1944;
   input += synapse0x2187be0();
   input += synapse0x2187c20();
   input += synapse0x2187c60();
   input += synapse0x2187ca0();
   input += synapse0x2187ce0();
   input += synapse0x2187d20();
   input += synapse0x2187d60();
   input += synapse0x2187da0();
   input += synapse0x2187de0();
   input += synapse0x2187e20();
   input += synapse0x2187e60();
   input += synapse0x2187ea0();
   input += synapse0x2187ee0();
   input += synapse0x218c020();
   input += synapse0x218c060();
   input += synapse0x218c0a0();
   input += synapse0x2187a30();
   input += synapse0x2187a70();
   input += synapse0x218c1f0();
   input += synapse0x218c230();
   input += synapse0x218c270();
   input += synapse0x218c2b0();
   input += synapse0x218c2f0();
   input += synapse0x218c330();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21878a0() {
   double input = input0x21878a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x218c370() {
   double input = -1.02627;
   input += synapse0x218c6b0();
   input += synapse0x218c6f0();
   input += synapse0x218c730();
   input += synapse0x218c770();
   input += synapse0x218c7b0();
   input += synapse0x218c7f0();
   input += synapse0x218c830();
   input += synapse0x218c870();
   input += synapse0x218c8b0();
   input += synapse0x218c8f0();
   input += synapse0x218c930();
   input += synapse0x218c970();
   input += synapse0x218c9b0();
   input += synapse0x218c9f0();
   input += synapse0x218ca30();
   input += synapse0x218ca70();
   input += synapse0x218c500();
   input += synapse0x218c540();
   input += synapse0x218cbc0();
   input += synapse0x218cc00();
   input += synapse0x218cc40();
   input += synapse0x218cc80();
   input += synapse0x218ccc0();
   input += synapse0x218cd00();
   return input;
}

double NNfunction_sb_uRcR::neuron0x218c370() {
   double input = input0x218c370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x218cd40() {
   double input = -2.50237;
   input += synapse0x218d080();
   input += synapse0x218d0c0();
   input += synapse0x218d100();
   input += synapse0x218d140();
   input += synapse0x218d180();
   input += synapse0x218d1c0();
   input += synapse0x218d200();
   input += synapse0x218d240();
   input += synapse0x218d280();
   input += synapse0x218d2c0();
   input += synapse0x218d300();
   input += synapse0x218d340();
   input += synapse0x218d380();
   input += synapse0x218d3c0();
   input += synapse0x218d400();
   input += synapse0x218d440();
   input += synapse0x218ced0();
   input += synapse0x218cf10();
   input += synapse0x218d590();
   input += synapse0x218d5d0();
   input += synapse0x218d610();
   input += synapse0x218d650();
   input += synapse0x218d690();
   input += synapse0x218d6d0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x218cd40() {
   double input = input0x218cd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x218d710() {
   double input = 0.257916;
   input += synapse0x218da50();
   input += synapse0x218da90();
   input += synapse0x218dad0();
   input += synapse0x218db10();
   input += synapse0x218db50();
   input += synapse0x218db90();
   input += synapse0x218dbd0();
   input += synapse0x218dc10();
   input += synapse0x218dc50();
   input += synapse0x218dc90();
   input += synapse0x218dcd0();
   input += synapse0x218dd10();
   input += synapse0x218dd50();
   input += synapse0x218dd90();
   input += synapse0x218ddd0();
   input += synapse0x218de10();
   input += synapse0x218d8a0();
   input += synapse0x218d8e0();
   input += synapse0x218df60();
   input += synapse0x218dfa0();
   input += synapse0x218dfe0();
   input += synapse0x218e020();
   input += synapse0x218e060();
   input += synapse0x218e0a0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x218d710() {
   double input = input0x218d710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x218e0e0() {
   double input = -0.936391;
   input += synapse0x218e420();
   input += synapse0x217f780();
   input += synapse0x217f7c0();
   input += synapse0x217fac0();
   input += synapse0x217fb00();
   input += synapse0x217fe00();
   input += synapse0x217fe40();
   input += synapse0x2180140();
   input += synapse0x2180180();
   input += synapse0x2180480();
   input += synapse0x21804c0();
   input += synapse0x21807c0();
   input += synapse0x2180800();
   input += synapse0x2180b00();
   input += synapse0x2180b40();
   input += synapse0x2180e40();
   input += synapse0x2180e80();
   input += synapse0x2181180();
   input += synapse0x21811c0();
   input += synapse0x21814c0();
   input += synapse0x2181500();
   input += synapse0x2181800();
   input += synapse0x2181840();
   input += synapse0x2181b40();
   return input;
}

double NNfunction_sb_uRcR::neuron0x218e0e0() {
   double input = input0x218e0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x218fef0() {
   double input = -0.159525;
   input += synapse0x2181b80();
   input += synapse0x2182840();
   input += synapse0x2182880();
   input += synapse0x218e270();
   input += synapse0x218e2b0();
   input += synapse0x2182b80();
   input += synapse0x2182bc0();
   input += synapse0x1f30b50();
   input += synapse0x1f30b90();
   input += synapse0x2183300();
   input += synapse0x2183340();
   input += synapse0x2183640();
   input += synapse0x2183680();
   input += synapse0x2183980();
   input += synapse0x21839c0();
   input += synapse0x2183cc0();
   input += synapse0x2183d00();
   input += synapse0x2184000();
   input += synapse0x2184040();
   input += synapse0x2184340();
   input += synapse0x2184380();
   input += synapse0x2181e80();
   input += synapse0x2181ec0();
   input += synapse0x2190190();
   return input;
}

double NNfunction_sb_uRcR::neuron0x218fef0() {
   double input = input0x218fef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21901d0() {
   double input = 1.95608;
   input += synapse0x2190510();
   input += synapse0x2190550();
   input += synapse0x2190590();
   input += synapse0x21905d0();
   input += synapse0x2190610();
   input += synapse0x2190650();
   input += synapse0x2190690();
   input += synapse0x21906d0();
   input += synapse0x2190710();
   input += synapse0x2190750();
   input += synapse0x2190790();
   input += synapse0x21907d0();
   input += synapse0x2190810();
   input += synapse0x2190850();
   input += synapse0x2190890();
   input += synapse0x21908d0();
   input += synapse0x2190360();
   input += synapse0x21903a0();
   input += synapse0x2190a20();
   input += synapse0x2190a60();
   input += synapse0x2190aa0();
   input += synapse0x2190ae0();
   input += synapse0x2190b20();
   input += synapse0x2190b60();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21901d0() {
   double input = input0x21901d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x2190ba0() {
   double input = -0.381332;
   input += synapse0x2190ee0();
   input += synapse0x2190f20();
   input += synapse0x2190f60();
   input += synapse0x2190fa0();
   input += synapse0x2190fe0();
   input += synapse0x2191020();
   input += synapse0x2191060();
   input += synapse0x21910a0();
   input += synapse0x21910e0();
   input += synapse0x2191120();
   input += synapse0x2191160();
   input += synapse0x21911a0();
   input += synapse0x21911e0();
   input += synapse0x2191220();
   input += synapse0x2191260();
   input += synapse0x21912a0();
   input += synapse0x2190d30();
   input += synapse0x2190d70();
   input += synapse0x21913f0();
   input += synapse0x2191430();
   input += synapse0x2191470();
   input += synapse0x21914b0();
   input += synapse0x21914f0();
   input += synapse0x2191530();
   return input;
}

double NNfunction_sb_uRcR::neuron0x2190ba0() {
   double input = input0x2190ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x2191570() {
   double input = 1.97886;
   input += synapse0x21918b0();
   input += synapse0x21918f0();
   input += synapse0x2191930();
   input += synapse0x2191970();
   input += synapse0x21919b0();
   input += synapse0x21919f0();
   input += synapse0x2191a30();
   input += synapse0x2191a70();
   input += synapse0x2191ab0();
   input += synapse0x2191af0();
   input += synapse0x2191b30();
   input += synapse0x2191b70();
   input += synapse0x2191bb0();
   input += synapse0x2191bf0();
   input += synapse0x2191c30();
   input += synapse0x2191c70();
   input += synapse0x2191700();
   input += synapse0x2191740();
   input += synapse0x2191dc0();
   input += synapse0x2191e00();
   input += synapse0x2191e40();
   input += synapse0x2191e80();
   input += synapse0x2191ec0();
   input += synapse0x2191f00();
   return input;
}

double NNfunction_sb_uRcR::neuron0x2191570() {
   double input = input0x2191570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x2191f40() {
   double input = -1.05743;
   input += synapse0x2192280();
   input += synapse0x21922c0();
   input += synapse0x2192300();
   input += synapse0x2192340();
   input += synapse0x2192380();
   input += synapse0x21923c0();
   input += synapse0x2192400();
   input += synapse0x2192440();
   input += synapse0x2192480();
   input += synapse0x21924c0();
   input += synapse0x2192500();
   input += synapse0x2192540();
   input += synapse0x2192580();
   input += synapse0x21925c0();
   input += synapse0x2192600();
   input += synapse0x2192640();
   input += synapse0x21920d0();
   input += synapse0x2192110();
   input += synapse0x2192790();
   input += synapse0x21927d0();
   input += synapse0x2192810();
   input += synapse0x2192850();
   input += synapse0x2192890();
   input += synapse0x21928d0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x2191f40() {
   double input = input0x2191f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x2192910() {
   double input = 1.24873;
   input += synapse0x2192c50();
   input += synapse0x2192c90();
   input += synapse0x2192cd0();
   input += synapse0x2192d10();
   input += synapse0x2192d50();
   input += synapse0x2192d90();
   input += synapse0x2192dd0();
   input += synapse0x2192e10();
   input += synapse0x2192e50();
   input += synapse0x218b010();
   input += synapse0x218b050();
   input += synapse0x218b090();
   input += synapse0x218b0d0();
   input += synapse0x218b110();
   input += synapse0x218b150();
   input += synapse0x218b190();
   input += synapse0x2192aa0();
   input += synapse0x2192ae0();
   input += synapse0x218b2e0();
   input += synapse0x218b320();
   input += synapse0x218b360();
   input += synapse0x218b3a0();
   input += synapse0x218b3e0();
   input += synapse0x218b420();
   return input;
}

double NNfunction_sb_uRcR::neuron0x2192910() {
   double input = input0x2192910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x218b460() {
   double input = 3.77095;
   input += synapse0x218b7a0();
   input += synapse0x218b7e0();
   input += synapse0x218b820();
   input += synapse0x218b860();
   input += synapse0x218b8a0();
   input += synapse0x218b8e0();
   input += synapse0x218b920();
   input += synapse0x218b960();
   input += synapse0x218b9a0();
   input += synapse0x218b9e0();
   input += synapse0x218ba20();
   input += synapse0x218ba60();
   input += synapse0x218baa0();
   input += synapse0x218bae0();
   input += synapse0x218bb20();
   input += synapse0x218bb60();
   input += synapse0x218b5f0();
   input += synapse0x218b630();
   input += synapse0x218bcb0();
   input += synapse0x218bcf0();
   input += synapse0x218bd30();
   input += synapse0x218bd70();
   input += synapse0x218bdb0();
   input += synapse0x218bdf0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x218b460() {
   double input = input0x218b460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x218be30() {
   double input = -1.47368;
   input += synapse0x218bfc0();
   input += synapse0x2195050();
   input += synapse0x2195090();
   input += synapse0x21950d0();
   input += synapse0x2195110();
   input += synapse0x2195150();
   input += synapse0x2195190();
   input += synapse0x21951d0();
   input += synapse0x2195210();
   input += synapse0x2195250();
   input += synapse0x2195290();
   input += synapse0x21952d0();
   input += synapse0x2195310();
   input += synapse0x2195350();
   input += synapse0x2195390();
   input += synapse0x21953d0();
   input += synapse0x2194ea0();
   input += synapse0x2194ee0();
   input += synapse0x2195520();
   input += synapse0x2195560();
   input += synapse0x21955a0();
   input += synapse0x21955e0();
   input += synapse0x2195620();
   input += synapse0x2195660();
   return input;
}

double NNfunction_sb_uRcR::neuron0x218be30() {
   double input = input0x218be30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21956a0() {
   double input = 0.718511;
   input += synapse0x21959e0();
   input += synapse0x2195a20();
   input += synapse0x2195a60();
   input += synapse0x2195aa0();
   input += synapse0x2195ae0();
   input += synapse0x2195b20();
   input += synapse0x2195b60();
   input += synapse0x2195ba0();
   input += synapse0x2195be0();
   input += synapse0x2195c20();
   input += synapse0x2195c60();
   input += synapse0x2195ca0();
   input += synapse0x2195ce0();
   input += synapse0x2195d20();
   input += synapse0x2195d60();
   input += synapse0x2195da0();
   input += synapse0x2195830();
   input += synapse0x2195870();
   input += synapse0x2195ef0();
   input += synapse0x2195f30();
   input += synapse0x2195f70();
   input += synapse0x2195fb0();
   input += synapse0x2195ff0();
   input += synapse0x2196030();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21956a0() {
   double input = input0x21956a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x2196070() {
   double input = -0.0811389;
   input += synapse0x21963b0();
   input += synapse0x21963f0();
   input += synapse0x2196430();
   input += synapse0x2196470();
   input += synapse0x21964b0();
   input += synapse0x21964f0();
   input += synapse0x2196530();
   input += synapse0x2196570();
   input += synapse0x21965b0();
   input += synapse0x21965f0();
   input += synapse0x2196630();
   input += synapse0x2196670();
   input += synapse0x21966b0();
   input += synapse0x21966f0();
   input += synapse0x2196730();
   input += synapse0x2196770();
   input += synapse0x2196200();
   input += synapse0x2196240();
   input += synapse0x21968c0();
   input += synapse0x2196900();
   input += synapse0x2196940();
   input += synapse0x2196980();
   input += synapse0x21969c0();
   input += synapse0x2196a00();
   return input;
}

double NNfunction_sb_uRcR::neuron0x2196070() {
   double input = input0x2196070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x2196a40() {
   double input = -1.87791;
   input += synapse0x2196d80();
   input += synapse0x2196dc0();
   input += synapse0x2196e00();
   input += synapse0x2196e40();
   input += synapse0x2196e80();
   input += synapse0x2196ec0();
   input += synapse0x2196f00();
   input += synapse0x2196f40();
   input += synapse0x2196f80();
   input += synapse0x2196fc0();
   input += synapse0x2197000();
   input += synapse0x2197040();
   input += synapse0x2197080();
   input += synapse0x21970c0();
   input += synapse0x2197100();
   input += synapse0x2197140();
   input += synapse0x2196bd0();
   input += synapse0x2196c10();
   input += synapse0x2197290();
   input += synapse0x21972d0();
   input += synapse0x2197310();
   input += synapse0x2197350();
   input += synapse0x2197390();
   input += synapse0x21973d0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x2196a40() {
   double input = input0x2196a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x2197410() {
   double input = -0.926109;
   input += synapse0x2197750();
   input += synapse0x2197790();
   input += synapse0x21977d0();
   input += synapse0x2197810();
   input += synapse0x2197850();
   input += synapse0x2197890();
   input += synapse0x21978d0();
   input += synapse0x2197910();
   input += synapse0x2197950();
   input += synapse0x2197990();
   input += synapse0x21979d0();
   input += synapse0x2197a10();
   input += synapse0x2197a50();
   input += synapse0x2197a90();
   input += synapse0x2197ad0();
   input += synapse0x2197b10();
   input += synapse0x21975a0();
   input += synapse0x21975e0();
   input += synapse0x2197c60();
   input += synapse0x2197ca0();
   input += synapse0x2197ce0();
   input += synapse0x2197d20();
   input += synapse0x2197d60();
   input += synapse0x2197da0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x2197410() {
   double input = input0x2197410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x2197de0() {
   double input = 0.450815;
   input += synapse0x2198120();
   input += synapse0x2198160();
   input += synapse0x21981a0();
   input += synapse0x21981e0();
   input += synapse0x2198220();
   input += synapse0x2198260();
   input += synapse0x21982a0();
   input += synapse0x21982e0();
   input += synapse0x2198320();
   input += synapse0x2198360();
   input += synapse0x21983a0();
   input += synapse0x21983e0();
   input += synapse0x2198420();
   input += synapse0x2198460();
   input += synapse0x21984a0();
   input += synapse0x21984e0();
   input += synapse0x2197f70();
   input += synapse0x2197fb0();
   input += synapse0x2198630();
   input += synapse0x2198670();
   input += synapse0x21986b0();
   input += synapse0x21986f0();
   input += synapse0x2198730();
   input += synapse0x2198770();
   return input;
}

double NNfunction_sb_uRcR::neuron0x2197de0() {
   double input = input0x2197de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21987b0() {
   double input = -0.963444;
   input += synapse0x2198af0();
   input += synapse0x2198b30();
   input += synapse0x2198b70();
   input += synapse0x2198bb0();
   input += synapse0x2198bf0();
   input += synapse0x2198c30();
   input += synapse0x2198c70();
   input += synapse0x2198cb0();
   input += synapse0x2198cf0();
   input += synapse0x2198d30();
   input += synapse0x2198d70();
   input += synapse0x2198db0();
   input += synapse0x2198df0();
   input += synapse0x2198e30();
   input += synapse0x2198e70();
   input += synapse0x2198eb0();
   input += synapse0x2198940();
   input += synapse0x2198980();
   input += synapse0x2199000();
   input += synapse0x2199040();
   input += synapse0x2199080();
   input += synapse0x21990c0();
   input += synapse0x2199100();
   input += synapse0x2199140();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21987b0() {
   double input = input0x21987b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x2199180() {
   double input = -2.69402;
   input += synapse0x21994c0();
   input += synapse0x2199500();
   input += synapse0x2199540();
   input += synapse0x2199580();
   input += synapse0x21995c0();
   input += synapse0x2199600();
   input += synapse0x2199640();
   input += synapse0x2199680();
   input += synapse0x21996c0();
   input += synapse0x2199700();
   input += synapse0x2199740();
   input += synapse0x2199780();
   input += synapse0x21997c0();
   input += synapse0x2199800();
   input += synapse0x2199840();
   input += synapse0x2199880();
   input += synapse0x2199310();
   input += synapse0x2199350();
   input += synapse0x21999d0();
   input += synapse0x2199a10();
   input += synapse0x2199a50();
   input += synapse0x2199a90();
   input += synapse0x2199ad0();
   input += synapse0x2199b10();
   return input;
}

double NNfunction_sb_uRcR::neuron0x2199180() {
   double input = input0x2199180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x2199b50() {
   double input = 1.62806;
   input += synapse0x2199e90();
   input += synapse0x218e460();
   input += synapse0x218e4a0();
   input += synapse0x218e4e0();
   input += synapse0x218e730();
   input += synapse0x218e770();
   input += synapse0x218e7b0();
   input += synapse0x218ea00();
   input += synapse0x218ea40();
   input += synapse0x218ec90();
   input += synapse0x218ecd0();
   input += synapse0x218ed10();
   input += synapse0x218ef60();
   input += synapse0x218efa0();
   input += synapse0x218f1f0();
   input += synapse0x218f230();
   input += synapse0x2199ce0();
   input += synapse0x2199d20();
   input += synapse0x218f380();
   input += synapse0x218f890();
   input += synapse0x218f8d0();
   input += synapse0x218f910();
   input += synapse0x218fb60();
   input += synapse0x218fba0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x2199b50() {
   double input = input0x2199b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x218fbe0() {
   double input = -0.0766876;
   input += synapse0x218f450();
   input += synapse0x218f490();
   input += synapse0x218f4d0();
   input += synapse0x218f510();
   input += synapse0x218fe90();
   input += synapse0x219c1e0();
   input += synapse0x219c220();
   input += synapse0x219c260();
   input += synapse0x219c2a0();
   input += synapse0x219c2e0();
   input += synapse0x219c320();
   input += synapse0x219c360();
   input += synapse0x219c3a0();
   input += synapse0x219c3e0();
   input += synapse0x219c420();
   input += synapse0x219c460();
   input += synapse0x218fd70();
   input += synapse0x218fdb0();
   input += synapse0x219c5b0();
   input += synapse0x219c5f0();
   input += synapse0x219c630();
   input += synapse0x219c670();
   input += synapse0x219c6b0();
   input += synapse0x219c6f0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x218fbe0() {
   double input = input0x218fbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x219c730() {
   double input = -1.9351;
   input += synapse0x219ca70();
   input += synapse0x219cab0();
   input += synapse0x219caf0();
   input += synapse0x219cb30();
   input += synapse0x219cb70();
   input += synapse0x219cbb0();
   input += synapse0x219cbf0();
   input += synapse0x219cc30();
   input += synapse0x219cc70();
   input += synapse0x219ccb0();
   input += synapse0x219ccf0();
   input += synapse0x219cd30();
   input += synapse0x219cd70();
   input += synapse0x219cdb0();
   input += synapse0x219cdf0();
   input += synapse0x219ce30();
   input += synapse0x219c8c0();
   input += synapse0x219c900();
   input += synapse0x219cf80();
   input += synapse0x219cfc0();
   input += synapse0x219d000();
   input += synapse0x219d040();
   input += synapse0x219d080();
   input += synapse0x219d0c0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x219c730() {
   double input = input0x219c730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x219d100() {
   double input = -0.854877;
   input += synapse0x219d440();
   input += synapse0x219d480();
   input += synapse0x219d4c0();
   input += synapse0x219d500();
   input += synapse0x219d540();
   input += synapse0x219d580();
   input += synapse0x219d5c0();
   input += synapse0x219d600();
   input += synapse0x219d640();
   input += synapse0x219d680();
   input += synapse0x219d6c0();
   input += synapse0x219d700();
   input += synapse0x219d740();
   input += synapse0x219d780();
   input += synapse0x219d7c0();
   input += synapse0x219d800();
   input += synapse0x219d290();
   input += synapse0x219d2d0();
   input += synapse0x219d950();
   input += synapse0x219d990();
   input += synapse0x219d9d0();
   input += synapse0x219da10();
   input += synapse0x219da50();
   input += synapse0x219da90();
   return input;
}

double NNfunction_sb_uRcR::neuron0x219d100() {
   double input = input0x219d100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x219dad0() {
   double input = -3.02111;
   input += synapse0x219de10();
   input += synapse0x219de50();
   input += synapse0x219de90();
   input += synapse0x219ded0();
   input += synapse0x219df10();
   input += synapse0x219df50();
   input += synapse0x219df90();
   input += synapse0x219dfd0();
   input += synapse0x219e010();
   input += synapse0x219e050();
   input += synapse0x219e090();
   input += synapse0x219e0d0();
   input += synapse0x219e110();
   input += synapse0x219e150();
   input += synapse0x219e190();
   input += synapse0x219e1d0();
   input += synapse0x219dc60();
   input += synapse0x219dca0();
   input += synapse0x219e320();
   input += synapse0x219e360();
   input += synapse0x219e3a0();
   input += synapse0x219e3e0();
   input += synapse0x219e420();
   input += synapse0x219e460();
   return input;
}

double NNfunction_sb_uRcR::neuron0x219dad0() {
   double input = input0x219dad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x219e4a0() {
   double input = -1.87787;
   input += synapse0x219e7e0();
   input += synapse0x219e820();
   input += synapse0x219e860();
   input += synapse0x219e8a0();
   input += synapse0x219e8e0();
   input += synapse0x219e920();
   input += synapse0x219e960();
   input += synapse0x219e9a0();
   input += synapse0x219e9e0();
   input += synapse0x219ea20();
   input += synapse0x219ea60();
   input += synapse0x219eaa0();
   input += synapse0x219eae0();
   input += synapse0x219eb20();
   input += synapse0x219eb60();
   input += synapse0x219eba0();
   input += synapse0x219e630();
   input += synapse0x219e670();
   input += synapse0x219ecf0();
   input += synapse0x219ed30();
   input += synapse0x219ed70();
   input += synapse0x219edb0();
   input += synapse0x219edf0();
   input += synapse0x219ee30();
   return input;
}

double NNfunction_sb_uRcR::neuron0x219e4a0() {
   double input = input0x219e4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x219ee70() {
   double input = -0.591852;
   input += synapse0x219f1b0();
   input += synapse0x219f1f0();
   input += synapse0x219f230();
   input += synapse0x219f270();
   input += synapse0x219f2b0();
   input += synapse0x219f2f0();
   input += synapse0x219f330();
   input += synapse0x219f370();
   input += synapse0x219f3b0();
   input += synapse0x219f3f0();
   input += synapse0x219f430();
   input += synapse0x219f470();
   input += synapse0x219f4b0();
   input += synapse0x219f4f0();
   input += synapse0x219f530();
   input += synapse0x219f570();
   input += synapse0x219f000();
   input += synapse0x219f040();
   input += synapse0x219f6c0();
   input += synapse0x219f700();
   input += synapse0x219f740();
   input += synapse0x219f780();
   input += synapse0x219f7c0();
   input += synapse0x219f800();
   return input;
}

double NNfunction_sb_uRcR::neuron0x219ee70() {
   double input = input0x219ee70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x219f840() {
   double input = -0.475182;
   input += synapse0x219fb80();
   input += synapse0x219fbc0();
   input += synapse0x219fc00();
   input += synapse0x219fc40();
   input += synapse0x219fc80();
   input += synapse0x219fcc0();
   input += synapse0x219fd00();
   input += synapse0x219fd40();
   input += synapse0x219fd80();
   input += synapse0x219fdc0();
   input += synapse0x219fe00();
   input += synapse0x219fe40();
   input += synapse0x219fe80();
   input += synapse0x219fec0();
   input += synapse0x219ff00();
   input += synapse0x219ff40();
   input += synapse0x219f9d0();
   input += synapse0x219fa10();
   input += synapse0x21a0090();
   input += synapse0x21a00d0();
   input += synapse0x21a0110();
   input += synapse0x21a0150();
   input += synapse0x21a0190();
   input += synapse0x21a01d0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x219f840() {
   double input = input0x219f840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21a0210() {
   double input = -1.16471;
   input += synapse0x21a0550();
   input += synapse0x21a0590();
   input += synapse0x21a05d0();
   input += synapse0x21a0610();
   input += synapse0x21a0650();
   input += synapse0x21a0690();
   input += synapse0x21a06d0();
   input += synapse0x21a0710();
   input += synapse0x21a0750();
   input += synapse0x21a0790();
   input += synapse0x21a07d0();
   input += synapse0x21a0810();
   input += synapse0x21a0850();
   input += synapse0x21a0890();
   input += synapse0x21a08d0();
   input += synapse0x21a0910();
   input += synapse0x21a03a0();
   input += synapse0x21a03e0();
   input += synapse0x21a0a60();
   input += synapse0x21a0aa0();
   input += synapse0x21a0ae0();
   input += synapse0x21a0b20();
   input += synapse0x21a0b60();
   input += synapse0x21a0ba0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21a0210() {
   double input = input0x21a0210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21a0be0() {
   double input = -2.16913;
   input += synapse0x2189650();
   input += synapse0x2189690();
   input += synapse0x21896d0();
   input += synapse0x2189710();
   input += synapse0x2189750();
   input += synapse0x2189790();
   input += synapse0x21897d0();
   input += synapse0x2189810();
   input += synapse0x21a1330();
   input += synapse0x21a1370();
   input += synapse0x21a13b0();
   input += synapse0x21a13f0();
   input += synapse0x21a1430();
   input += synapse0x21a1470();
   input += synapse0x21a14b0();
   input += synapse0x21a14f0();
   input += synapse0x21a0d70();
   input += synapse0x21a0db0();
   input += synapse0x21a1640();
   input += synapse0x21a1680();
   input += synapse0x21a16c0();
   input += synapse0x21a1700();
   input += synapse0x21a1740();
   input += synapse0x21a1780();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21a0be0() {
   double input = input0x21a0be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21a17c0() {
   double input = -0.744083;
   input += synapse0x21a1b00();
   input += synapse0x21a1b40();
   input += synapse0x21a1b80();
   input += synapse0x21a1bc0();
   input += synapse0x21a1c00();
   input += synapse0x21a1c40();
   input += synapse0x21a1c80();
   input += synapse0x21a1cc0();
   input += synapse0x21a1d00();
   input += synapse0x21a1d40();
   input += synapse0x21a1d80();
   input += synapse0x21a1dc0();
   input += synapse0x21a1e00();
   input += synapse0x21a1e40();
   input += synapse0x21a1e80();
   input += synapse0x21a1ec0();
   input += synapse0x21a1950();
   input += synapse0x21a1990();
   input += synapse0x21a2010();
   input += synapse0x21a2050();
   input += synapse0x21a2090();
   input += synapse0x21a20d0();
   input += synapse0x21a2110();
   input += synapse0x21a2150();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21a17c0() {
   double input = input0x21a17c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21a2190() {
   double input = 2.18561;
   input += synapse0x21a24d0();
   input += synapse0x21a2510();
   input += synapse0x21a2550();
   input += synapse0x21a2590();
   input += synapse0x21a25d0();
   input += synapse0x21a2610();
   input += synapse0x21a2650();
   input += synapse0x21a2690();
   input += synapse0x21a26d0();
   input += synapse0x21a2710();
   input += synapse0x21a2750();
   input += synapse0x21a2790();
   input += synapse0x21a27d0();
   input += synapse0x21a2810();
   input += synapse0x21a2850();
   input += synapse0x21a2890();
   input += synapse0x21a2320();
   input += synapse0x21a2360();
   input += synapse0x2192e90();
   input += synapse0x2192ed0();
   input += synapse0x2192f10();
   input += synapse0x2192f50();
   input += synapse0x2192f90();
   input += synapse0x2192fd0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21a2190() {
   double input = input0x21a2190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x2193010() {
   double input = 1.63731;
   input += synapse0x2193350();
   input += synapse0x2193390();
   input += synapse0x21933d0();
   input += synapse0x2193410();
   input += synapse0x2193450();
   input += synapse0x2193490();
   input += synapse0x21934d0();
   input += synapse0x2193510();
   input += synapse0x2193550();
   input += synapse0x2193590();
   input += synapse0x21935d0();
   input += synapse0x2193610();
   input += synapse0x2193650();
   input += synapse0x2193690();
   input += synapse0x21936d0();
   input += synapse0x2193710();
   input += synapse0x21931a0();
   input += synapse0x21931e0();
   input += synapse0x2193860();
   input += synapse0x21938a0();
   input += synapse0x21938e0();
   input += synapse0x2193920();
   input += synapse0x2193960();
   input += synapse0x21939a0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x2193010() {
   double input = input0x2193010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21939e0() {
   double input = -0.053011;
   input += synapse0x2193d20();
   input += synapse0x2193d60();
   input += synapse0x2193da0();
   input += synapse0x2193de0();
   input += synapse0x2193e20();
   input += synapse0x2193e60();
   input += synapse0x2193ea0();
   input += synapse0x2193ee0();
   input += synapse0x2193f20();
   input += synapse0x2193f60();
   input += synapse0x2193fa0();
   input += synapse0x2193fe0();
   input += synapse0x2194020();
   input += synapse0x2194060();
   input += synapse0x21940a0();
   input += synapse0x21940e0();
   input += synapse0x2193b70();
   input += synapse0x2193bb0();
   input += synapse0x2194230();
   input += synapse0x2194270();
   input += synapse0x21942b0();
   input += synapse0x21942f0();
   input += synapse0x2194330();
   input += synapse0x2194370();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21939e0() {
   double input = input0x21939e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21943b0() {
   double input = 1.78359;
   input += synapse0x21946f0();
   input += synapse0x2194730();
   input += synapse0x2194770();
   input += synapse0x21947b0();
   input += synapse0x21947f0();
   input += synapse0x2194830();
   input += synapse0x2194870();
   input += synapse0x21948b0();
   input += synapse0x21948f0();
   input += synapse0x2194930();
   input += synapse0x2194970();
   input += synapse0x21949b0();
   input += synapse0x21949f0();
   input += synapse0x2194a30();
   input += synapse0x2194a70();
   input += synapse0x2194ab0();
   input += synapse0x2194540();
   input += synapse0x2194580();
   input += synapse0x2194c00();
   input += synapse0x2194c40();
   input += synapse0x2194c80();
   input += synapse0x2194cc0();
   input += synapse0x2194d00();
   input += synapse0x2194d40();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21943b0() {
   double input = input0x21943b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21a69f0() {
   double input = -1.42358;
   input += synapse0x21a6c10();
   input += synapse0x21a6c50();
   input += synapse0x21a6c90();
   input += synapse0x21a6cd0();
   input += synapse0x21a6d10();
   input += synapse0x21a6d50();
   input += synapse0x21a6d90();
   input += synapse0x21a6dd0();
   input += synapse0x21a6e10();
   input += synapse0x21a6e50();
   input += synapse0x21a6e90();
   input += synapse0x21a6ed0();
   input += synapse0x21a6f10();
   input += synapse0x21a6f50();
   input += synapse0x21a6f90();
   input += synapse0x21a6fd0();
   input += synapse0x2194d80();
   input += synapse0x2194dc0();
   input += synapse0x21a7120();
   input += synapse0x21a7160();
   input += synapse0x21a71a0();
   input += synapse0x21a71e0();
   input += synapse0x21a7220();
   input += synapse0x21a7260();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21a69f0() {
   double input = input0x21a69f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21a72a0() {
   double input = -0.15357;
   input += synapse0x21a75e0();
   input += synapse0x21a7620();
   input += synapse0x21a7660();
   input += synapse0x21a76a0();
   input += synapse0x21a76e0();
   input += synapse0x21a7720();
   input += synapse0x21a7760();
   input += synapse0x21a77a0();
   input += synapse0x21a77e0();
   input += synapse0x21a7820();
   input += synapse0x21a7860();
   input += synapse0x21a78a0();
   input += synapse0x21a78e0();
   input += synapse0x21a7920();
   input += synapse0x21a7960();
   input += synapse0x21a79a0();
   input += synapse0x21a7430();
   input += synapse0x21a7470();
   input += synapse0x21a7af0();
   input += synapse0x21a7b30();
   input += synapse0x21a7b70();
   input += synapse0x21a7bb0();
   input += synapse0x21a7bf0();
   input += synapse0x21a7c30();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21a72a0() {
   double input = input0x21a72a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21a7c70() {
   double input = 2.00966;
   input += synapse0x21a7fb0();
   input += synapse0x21a7ff0();
   input += synapse0x21a8030();
   input += synapse0x21a8070();
   input += synapse0x21a80b0();
   input += synapse0x21a80f0();
   input += synapse0x21a8130();
   input += synapse0x21a8170();
   input += synapse0x21a81b0();
   input += synapse0x21a81f0();
   input += synapse0x21a8230();
   input += synapse0x21a8270();
   input += synapse0x21a82b0();
   input += synapse0x21a82f0();
   input += synapse0x21a8330();
   input += synapse0x21a8370();
   input += synapse0x21a7e00();
   input += synapse0x21a7e40();
   input += synapse0x21a84c0();
   input += synapse0x21a8500();
   input += synapse0x21a8540();
   input += synapse0x21a8580();
   input += synapse0x21a85c0();
   input += synapse0x21a8600();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21a7c70() {
   double input = input0x21a7c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21a8640() {
   double input = -0.935949;
   input += synapse0x21a8980();
   input += synapse0x21a89c0();
   input += synapse0x21a8a00();
   input += synapse0x21a8a40();
   input += synapse0x21a8a80();
   input += synapse0x21a8ac0();
   input += synapse0x21a8b00();
   input += synapse0x21a8b40();
   input += synapse0x21a8b80();
   input += synapse0x21a8bc0();
   input += synapse0x21a8c00();
   input += synapse0x21a8c40();
   input += synapse0x21a8c80();
   input += synapse0x21a8cc0();
   input += synapse0x21a8d00();
   input += synapse0x21a8d40();
   input += synapse0x21a87d0();
   input += synapse0x21a8810();
   input += synapse0x21a8e90();
   input += synapse0x21a8ed0();
   input += synapse0x21a8f10();
   input += synapse0x21a8f50();
   input += synapse0x21a8f90();
   input += synapse0x21a8fd0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21a8640() {
   double input = input0x21a8640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21af840() {
   double input = -0.214238;
   input += synapse0x2185570();
   input += synapse0x21855b0();
   input += synapse0x2186a80();
   input += synapse0x2186ac0();
   input += synapse0x2187450();
   input += synapse0x2187490();
   input += synapse0x2188220();
   input += synapse0x2188260();
   input += synapse0x2188bf0();
   input += synapse0x2188c30();
   input += synapse0x21895c0();
   input += synapse0x2189600();
   input += synapse0x218a0a0();
   input += synapse0x218a0e0();
   input += synapse0x218aa70();
   input += synapse0x218aab0();
   input += synapse0x2187b50();
   input += synapse0x2187b90();
   input += synapse0x218c620();
   input += synapse0x218c660();
   input += synapse0x218cff0();
   input += synapse0x218d030();
   input += synapse0x218d9c0();
   input += synapse0x218da00();
   input += synapse0x218e390();
   input += synapse0x218e3d0();
   input += synapse0x2182500();
   input += synapse0x2182540();
   input += synapse0x2190480();
   input += synapse0x21904c0();
   input += synapse0x2190e50();
   input += synapse0x2190e90();
   input += synapse0x2191820();
   input += synapse0x2191860();
   input += synapse0x21921f0();
   input += synapse0x2192230();
   input += synapse0x2192bc0();
   input += synapse0x2192c00();
   input += synapse0x218b710();
   input += synapse0x218b750();
   input += synapse0x2194fc0();
   input += synapse0x2195000();
   input += synapse0x2195950();
   input += synapse0x2195990();
   input += synapse0x2196320();
   input += synapse0x2196360();
   input += synapse0x2196cf0();
   input += synapse0x2196d30();
   input += synapse0x21976c0();
   input += synapse0x2197700();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21af840() {
   double input = input0x21af840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21afbe0() {
   double input = 0.743885;
   input += synapse0x2199e00();
   input += synapse0x2199e40();
   input += synapse0x218f3c0();
   input += synapse0x218f400();
   input += synapse0x219c9e0();
   input += synapse0x219ca20();
   input += synapse0x219d3b0();
   input += synapse0x219d3f0();
   input += synapse0x219dd80();
   input += synapse0x219ddc0();
   input += synapse0x219e750();
   input += synapse0x219e790();
   input += synapse0x219f120();
   input += synapse0x219f160();
   input += synapse0x219faf0();
   input += synapse0x219fb30();
   input += synapse0x21a04c0();
   input += synapse0x21a0500();
   input += synapse0x21a0e90();
   input += synapse0x21a0ed0();
   input += synapse0x21a1a70();
   input += synapse0x21a1ab0();
   input += synapse0x21a2440();
   input += synapse0x21a2480();
   input += synapse0x21932c0();
   input += synapse0x2193300();
   input += synapse0x2193c90();
   input += synapse0x2193cd0();
   input += synapse0x2194660();
   input += synapse0x21946a0();
   input += synapse0x21a6b80();
   input += synapse0x21a6bc0();
   input += synapse0x21a7550();
   input += synapse0x21a7590();
   input += synapse0x21a7f20();
   input += synapse0x21a7f60();
   input += synapse0x21a88f0();
   input += synapse0x21a8930();
   input += synapse0x21847e0();
   input += synapse0x2184820();
   input += synapse0x2198090();
   input += synapse0x21980d0();
   input += synapse0x21a9010();
   input += synapse0x21a9050();
   input += synapse0x21a9090();
   input += synapse0x21a90d0();
   input += synapse0x21aff80();
   input += synapse0x21affc0();
   input += synapse0x21b0000();
   input += synapse0x21b0040();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21afbe0() {
   double input = input0x21afbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21b0080() {
   double input = 0.0888193;
   input += synapse0x21b03c0();
   input += synapse0x21b0400();
   input += synapse0x21b0440();
   input += synapse0x21b0480();
   input += synapse0x21b04c0();
   input += synapse0x21b0500();
   input += synapse0x21b0540();
   input += synapse0x21b0580();
   input += synapse0x21b05c0();
   input += synapse0x21b0600();
   input += synapse0x21b0640();
   input += synapse0x21b0680();
   input += synapse0x21b06c0();
   input += synapse0x21b0700();
   input += synapse0x21b0740();
   input += synapse0x21b0780();
   input += synapse0x21b0210();
   input += synapse0x21b0250();
   input += synapse0x21b08d0();
   input += synapse0x21b0910();
   input += synapse0x21b0950();
   input += synapse0x21b0990();
   input += synapse0x21b09d0();
   input += synapse0x21b0a10();
   input += synapse0x21b0a50();
   input += synapse0x21b0a90();
   input += synapse0x21b0ad0();
   input += synapse0x21b0b10();
   input += synapse0x21b0b50();
   input += synapse0x21b0b90();
   input += synapse0x21b0bd0();
   input += synapse0x21b0c10();
   input += synapse0x21b07c0();
   input += synapse0x21b0800();
   input += synapse0x21b0840();
   input += synapse0x21b0880();
   input += synapse0x21b0e60();
   input += synapse0x21b0ea0();
   input += synapse0x21b0ee0();
   input += synapse0x21b0f20();
   input += synapse0x21b0f60();
   input += synapse0x21b0fa0();
   input += synapse0x21b0fe0();
   input += synapse0x21b1020();
   input += synapse0x21b1060();
   input += synapse0x21b10a0();
   input += synapse0x21b10e0();
   input += synapse0x21b1120();
   input += synapse0x21b1160();
   input += synapse0x21b11a0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21b0080() {
   double input = input0x21b0080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21b11e0() {
   double input = -0.544153;
   input += synapse0x21b1520();
   input += synapse0x21b1560();
   input += synapse0x21b15a0();
   input += synapse0x21b15e0();
   input += synapse0x21b1620();
   input += synapse0x21b1660();
   input += synapse0x21b16a0();
   input += synapse0x21b16e0();
   input += synapse0x21b1720();
   input += synapse0x21b1760();
   input += synapse0x21b17a0();
   input += synapse0x21b17e0();
   input += synapse0x21b1820();
   input += synapse0x21b1860();
   input += synapse0x21b18a0();
   input += synapse0x21b18e0();
   input += synapse0x21b1370();
   input += synapse0x21b13b0();
   input += synapse0x21b1a30();
   input += synapse0x21b1a70();
   input += synapse0x21b1ab0();
   input += synapse0x21b1af0();
   input += synapse0x21b1b30();
   input += synapse0x21b1b70();
   input += synapse0x21b1bb0();
   input += synapse0x21b1bf0();
   input += synapse0x21b1c30();
   input += synapse0x21b1c70();
   input += synapse0x21b1cb0();
   input += synapse0x21b1cf0();
   input += synapse0x21b1d30();
   input += synapse0x21b1d70();
   input += synapse0x21b1920();
   input += synapse0x21b1960();
   input += synapse0x21b19a0();
   input += synapse0x21b19e0();
   input += synapse0x21b1fc0();
   input += synapse0x21b2000();
   input += synapse0x21b2040();
   input += synapse0x21b2080();
   input += synapse0x21b20c0();
   input += synapse0x21b2100();
   input += synapse0x21b2140();
   input += synapse0x21b2180();
   input += synapse0x21b21c0();
   input += synapse0x21b2200();
   input += synapse0x21b2240();
   input += synapse0x21b2280();
   input += synapse0x21b22c0();
   input += synapse0x21b2300();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21b11e0() {
   double input = input0x21b11e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21b2340() {
   double input = 0.0530042;
   input += synapse0x21b2680();
   input += synapse0x21b26c0();
   input += synapse0x21b2700();
   input += synapse0x21b2740();
   input += synapse0x21b2780();
   input += synapse0x21b27c0();
   input += synapse0x21b2800();
   input += synapse0x21b2840();
   input += synapse0x21b2880();
   input += synapse0x21b28c0();
   input += synapse0x21b2900();
   input += synapse0x21b2940();
   input += synapse0x21b2980();
   input += synapse0x21b29c0();
   input += synapse0x21b2a00();
   input += synapse0x21b2a40();
   input += synapse0x21b24d0();
   input += synapse0x21b2510();
   input += synapse0x21b2b90();
   input += synapse0x21b2bd0();
   input += synapse0x21b2c10();
   input += synapse0x21b2c50();
   input += synapse0x21b2c90();
   input += synapse0x21b2cd0();
   input += synapse0x21b2d10();
   input += synapse0x21b2d50();
   input += synapse0x21b2d90();
   input += synapse0x21b2dd0();
   input += synapse0x21b2e10();
   input += synapse0x21b2e50();
   input += synapse0x21b2e90();
   input += synapse0x21b2ed0();
   input += synapse0x21b2a80();
   input += synapse0x21b2ac0();
   input += synapse0x21b2b00();
   input += synapse0x21b2b40();
   input += synapse0x21b3120();
   input += synapse0x21b3160();
   input += synapse0x21b31a0();
   input += synapse0x21b31e0();
   input += synapse0x21b3220();
   input += synapse0x21b3260();
   input += synapse0x21b32a0();
   input += synapse0x21b32e0();
   input += synapse0x21b3320();
   input += synapse0x21b3360();
   input += synapse0x21b33a0();
   input += synapse0x21b33e0();
   input += synapse0x21b3420();
   input += synapse0x21b3460();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21b2340() {
   double input = input0x21b2340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x21b34a0() {
   double input = 11.6889;
   input += synapse0x2184580();
   input += synapse0x21b36c0();
   input += synapse0x21b3700();
   input += synapse0x21b3740();
   input += synapse0x21b3780();
   return input;
}

double NNfunction_sb_uRcR::neuron0x21b34a0() {
   double input = input0x21b34a0();
   return (input * 1)+0;
}

double NNfunction_sb_uRcR::synapse0x1f3f3d0() {
   return (neuron0x217f560()*-0.0805477);
}

double NNfunction_sb_uRcR::synapse0x217f420() {
   return (neuron0x217f8a0()*-0.114805);
}

double NNfunction_sb_uRcR::synapse0x217f460() {
   return (neuron0x217fbe0()*-0.176496);
}

double NNfunction_sb_uRcR::synapse0x2184870() {
   return (neuron0x217ff20()*-2.45467);
}

double NNfunction_sb_uRcR::synapse0x21848b0() {
   return (neuron0x2180260()*-0.0118612);
}

double NNfunction_sb_uRcR::synapse0x21848f0() {
   return (neuron0x21805a0()*-0.0817002);
}

double NNfunction_sb_uRcR::synapse0x2184930() {
   return (neuron0x21808e0()*0.2985);
}

double NNfunction_sb_uRcR::synapse0x2184970() {
   return (neuron0x2180c20()*-0.0998427);
}

double NNfunction_sb_uRcR::synapse0x21849b0() {
   return (neuron0x2180f60()*-0.0308868);
}

double NNfunction_sb_uRcR::synapse0x21849f0() {
   return (neuron0x21812a0()*0.00554812);
}

double NNfunction_sb_uRcR::synapse0x2184a30() {
   return (neuron0x21815e0()*-0.08411);
}

double NNfunction_sb_uRcR::synapse0x2184a70() {
   return (neuron0x2181920()*0.403147);
}

double NNfunction_sb_uRcR::synapse0x2184ab0() {
   return (neuron0x2181c60()*0.0541331);
}

double NNfunction_sb_uRcR::synapse0x2184af0() {
   return (neuron0x2181fa0()*0.159204);
}

double NNfunction_sb_uRcR::synapse0x2184b30() {
   return (neuron0x21822e0()*0.589486);
}

double NNfunction_sb_uRcR::synapse0x2184b70() {
   return (neuron0x2182620()*0.341756);
}

double NNfunction_sb_uRcR::synapse0x217f390() {
   return (neuron0x2182960()*0.0593192);
}

double NNfunction_sb_uRcR::synapse0x217f3d0() {
   return (neuron0x2182ec0()*-0.0909156);
}

double NNfunction_sb_uRcR::synapse0x1f30c70() {
   return (neuron0x21830e0()*0.0965018);
}

double NNfunction_sb_uRcR::synapse0x1f30cb0() {
   return (neuron0x2183420()*0.181455);
}

double NNfunction_sb_uRcR::synapse0x2184dd0() {
   return (neuron0x2183760()*0.141599);
}

double NNfunction_sb_uRcR::synapse0x2184e10() {
   return (neuron0x2183aa0()*-0.143246);
}

double NNfunction_sb_uRcR::synapse0x2184e50() {
   return (neuron0x2183de0()*-0.0111658);
}

double NNfunction_sb_uRcR::synapse0x2184e90() {
   return (neuron0x2184120()*0.0485441);
}

double NNfunction_sb_uRcR::synapse0x2185210() {
   return (neuron0x217f560()*0.00521612);
}

double NNfunction_sb_uRcR::synapse0x2185250() {
   return (neuron0x217f8a0()*-0.0246841);
}

double NNfunction_sb_uRcR::synapse0x2185290() {
   return (neuron0x217fbe0()*-0.00087855);
}

double NNfunction_sb_uRcR::synapse0x21852d0() {
   return (neuron0x217ff20()*0.148799);
}

double NNfunction_sb_uRcR::synapse0x2185310() {
   return (neuron0x2180260()*0.0524821);
}

double NNfunction_sb_uRcR::synapse0x2185350() {
   return (neuron0x21805a0()*0.115021);
}

double NNfunction_sb_uRcR::synapse0x2185390() {
   return (neuron0x21808e0()*0.00821256);
}

double NNfunction_sb_uRcR::synapse0x21853d0() {
   return (neuron0x2180c20()*0.0148233);
}

double NNfunction_sb_uRcR::synapse0x2185410() {
   return (neuron0x2180f60()*-0.00617491);
}

double NNfunction_sb_uRcR::synapse0x2184cc0() {
   return (neuron0x21812a0()*-0.00414963);
}

double NNfunction_sb_uRcR::synapse0x2184d00() {
   return (neuron0x21815e0()*-0.011087);
}

double NNfunction_sb_uRcR::synapse0x2184d40() {
   return (neuron0x2181920()*-0.00986164);
}

double NNfunction_sb_uRcR::synapse0x2184d80() {
   return (neuron0x2181c60()*0.0177739);
}

double NNfunction_sb_uRcR::synapse0x2185660() {
   return (neuron0x2181fa0()*-0.00797339);
}

double NNfunction_sb_uRcR::synapse0x21856a0() {
   return (neuron0x21822e0()*0.168236);
}

double NNfunction_sb_uRcR::synapse0x21856e0() {
   return (neuron0x2182620()*-0.765099);
}

double NNfunction_sb_uRcR::synapse0x2185060() {
   return (neuron0x2182960()*-0.0108757);
}

double NNfunction_sb_uRcR::synapse0x21850a0() {
   return (neuron0x2182ec0()*0.0123268);
}

double NNfunction_sb_uRcR::synapse0x2185830() {
   return (neuron0x21830e0()*0.00990321);
}

double NNfunction_sb_uRcR::synapse0x2185870() {
   return (neuron0x2183420()*-0.00951942);
}

double NNfunction_sb_uRcR::synapse0x21858b0() {
   return (neuron0x2183760()*-0.0121105);
}

double NNfunction_sb_uRcR::synapse0x21858f0() {
   return (neuron0x2183aa0()*0.00751301);
}

double NNfunction_sb_uRcR::synapse0x2185930() {
   return (neuron0x2183de0()*-0.0137611);
}

double NNfunction_sb_uRcR::synapse0x2185970() {
   return (neuron0x2184120()*-0.0302552);
}

double NNfunction_sb_uRcR::synapse0x2185cf0() {
   return (neuron0x217f560()*0.00268279);
}

double NNfunction_sb_uRcR::synapse0x2185d30() {
   return (neuron0x217f8a0()*-0.750751);
}

double NNfunction_sb_uRcR::synapse0x2185d70() {
   return (neuron0x217fbe0()*-0.274432);
}

double NNfunction_sb_uRcR::synapse0x2185db0() {
   return (neuron0x217ff20()*0.258052);
}

double NNfunction_sb_uRcR::synapse0x2185df0() {
   return (neuron0x2180260()*0.300005);
}

double NNfunction_sb_uRcR::synapse0x2185e30() {
   return (neuron0x21805a0()*0.934478);
}

double NNfunction_sb_uRcR::synapse0x2185e70() {
   return (neuron0x21808e0()*-0.543813);
}

double NNfunction_sb_uRcR::synapse0x2185eb0() {
   return (neuron0x2180c20()*0.656136);
}

double NNfunction_sb_uRcR::synapse0x2185ef0() {
   return (neuron0x2180f60()*-0.585642);
}

double NNfunction_sb_uRcR::synapse0x2185f30() {
   return (neuron0x21812a0()*0.120669);
}

double NNfunction_sb_uRcR::synapse0x2185f70() {
   return (neuron0x21815e0()*0.104835);
}

double NNfunction_sb_uRcR::synapse0x2185fb0() {
   return (neuron0x2181920()*0.507961);
}

double NNfunction_sb_uRcR::synapse0x2185ff0() {
   return (neuron0x2181c60()*-0.310937);
}

double NNfunction_sb_uRcR::synapse0x2186030() {
   return (neuron0x2181fa0()*0.585131);
}

double NNfunction_sb_uRcR::synapse0x2186070() {
   return (neuron0x21822e0()*-0.194738);
}

double NNfunction_sb_uRcR::synapse0x21860b0() {
   return (neuron0x2182620()*0.217761);
}

double NNfunction_sb_uRcR::synapse0x2185b40() {
   return (neuron0x2182960()*0.186414);
}

double NNfunction_sb_uRcR::synapse0x2185b80() {
   return (neuron0x2182ec0()*0.279966);
}

double NNfunction_sb_uRcR::synapse0x1f3eac0() {
   return (neuron0x21830e0()*-0.23664);
}

double NNfunction_sb_uRcR::synapse0x1f3eb00() {
   return (neuron0x2183420()*-1.13819);
}

double NNfunction_sb_uRcR::synapse0x216e5f0() {
   return (neuron0x2183760()*-0.157309);
}

double NNfunction_sb_uRcR::synapse0x216e630() {
   return (neuron0x2183aa0()*-0.230987);
}

double NNfunction_sb_uRcR::synapse0x216e670() {
   return (neuron0x2183de0()*0.278598);
}

double NNfunction_sb_uRcR::synapse0x217f4a0() {
   return (neuron0x2184120()*0.553395);
}

double NNfunction_sb_uRcR::synapse0x2185600() {
   return (neuron0x217f560()*0.0381355);
}

double NNfunction_sb_uRcR::synapse0x217f4e0() {
   return (neuron0x217f8a0()*0.0226674);
}

double NNfunction_sb_uRcR::synapse0x217f520() {
   return (neuron0x217fbe0()*-0.132619);
}

double NNfunction_sb_uRcR::synapse0x2186200() {
   return (neuron0x217ff20()*-2.469);
}

double NNfunction_sb_uRcR::synapse0x2186240() {
   return (neuron0x2180260()*0.0358963);
}

double NNfunction_sb_uRcR::synapse0x2186280() {
   return (neuron0x21805a0()*0.109688);
}

double NNfunction_sb_uRcR::synapse0x21862c0() {
   return (neuron0x21808e0()*0.0577594);
}

double NNfunction_sb_uRcR::synapse0x2186300() {
   return (neuron0x2180c20()*0.00742965);
}

double NNfunction_sb_uRcR::synapse0x2186340() {
   return (neuron0x2180f60()*-0.0720934);
}

double NNfunction_sb_uRcR::synapse0x2186380() {
   return (neuron0x21812a0()*-0.0662551);
}

double NNfunction_sb_uRcR::synapse0x21863c0() {
   return (neuron0x21815e0()*0.000279376);
}

double NNfunction_sb_uRcR::synapse0x2186400() {
   return (neuron0x2181920()*0.0266742);
}

double NNfunction_sb_uRcR::synapse0x2186440() {
   return (neuron0x2181c60()*0.0320066);
}

double NNfunction_sb_uRcR::synapse0x2186480() {
   return (neuron0x2181fa0()*0.164488);
}

double NNfunction_sb_uRcR::synapse0x21864c0() {
   return (neuron0x21822e0()*-0.275886);
}

double NNfunction_sb_uRcR::synapse0x2186500() {
   return (neuron0x2182620()*-0.231341);
}

double NNfunction_sb_uRcR::synapse0x2185450() {
   return (neuron0x2182960()*0.168607);
}

double NNfunction_sb_uRcR::synapse0x2185490() {
   return (neuron0x2182ec0()*0.0983459);
}

double NNfunction_sb_uRcR::synapse0x2186650() {
   return (neuron0x21830e0()*0.0879297);
}

double NNfunction_sb_uRcR::synapse0x2186690() {
   return (neuron0x2183420()*0.0448606);
}

double NNfunction_sb_uRcR::synapse0x21866d0() {
   return (neuron0x2183760()*-0.0587981);
}

double NNfunction_sb_uRcR::synapse0x2186710() {
   return (neuron0x2183aa0()*-0.0195953);
}

double NNfunction_sb_uRcR::synapse0x2186750() {
   return (neuron0x2183de0()*-0.0323063);
}

double NNfunction_sb_uRcR::synapse0x2186790() {
   return (neuron0x2184120()*-0.108958);
}

double NNfunction_sb_uRcR::synapse0x2186b10() {
   return (neuron0x217f560()*0.228618);
}

double NNfunction_sb_uRcR::synapse0x2186b50() {
   return (neuron0x217f8a0()*1.0889);
}

double NNfunction_sb_uRcR::synapse0x2186b90() {
   return (neuron0x217fbe0()*-0.177458);
}

double NNfunction_sb_uRcR::synapse0x2186bd0() {
   return (neuron0x217ff20()*0.0693151);
}

double NNfunction_sb_uRcR::synapse0x2186c10() {
   return (neuron0x2180260()*-0.775924);
}

double NNfunction_sb_uRcR::synapse0x2186c50() {
   return (neuron0x21805a0()*-1.16401);
}

double NNfunction_sb_uRcR::synapse0x2186c90() {
   return (neuron0x21808e0()*-0.411645);
}

double NNfunction_sb_uRcR::synapse0x2186cd0() {
   return (neuron0x2180c20()*0.1642);
}

double NNfunction_sb_uRcR::synapse0x2186d10() {
   return (neuron0x2180f60()*0.226699);
}

double NNfunction_sb_uRcR::synapse0x2186d50() {
   return (neuron0x21812a0()*-0.380869);
}

double NNfunction_sb_uRcR::synapse0x2186d90() {
   return (neuron0x21815e0()*0.802879);
}

double NNfunction_sb_uRcR::synapse0x2186dd0() {
   return (neuron0x2181920()*0.438194);
}

double NNfunction_sb_uRcR::synapse0x2186e10() {
   return (neuron0x2181c60()*0.354942);
}

double NNfunction_sb_uRcR::synapse0x2186e50() {
   return (neuron0x2181fa0()*0.730011);
}

double NNfunction_sb_uRcR::synapse0x2186e90() {
   return (neuron0x21822e0()*0.485208);
}

double NNfunction_sb_uRcR::synapse0x2186ed0() {
   return (neuron0x2182620()*-0.801485);
}

double NNfunction_sb_uRcR::synapse0x2186960() {
   return (neuron0x2182960()*0.120475);
}

double NNfunction_sb_uRcR::synapse0x21869a0() {
   return (neuron0x2182ec0()*0.840896);
}

double NNfunction_sb_uRcR::synapse0x2187020() {
   return (neuron0x21830e0()*0.710837);
}

double NNfunction_sb_uRcR::synapse0x2187060() {
   return (neuron0x2183420()*-0.613111);
}

double NNfunction_sb_uRcR::synapse0x21870a0() {
   return (neuron0x2183760()*-0.180694);
}

double NNfunction_sb_uRcR::synapse0x21870e0() {
   return (neuron0x2183aa0()*0.152088);
}

double NNfunction_sb_uRcR::synapse0x2187120() {
   return (neuron0x2183de0()*0.278116);
}

double NNfunction_sb_uRcR::synapse0x2187160() {
   return (neuron0x2184120()*-0.0474701);
}

double NNfunction_sb_uRcR::synapse0x21874e0() {
   return (neuron0x217f560()*-0.367668);
}

double NNfunction_sb_uRcR::synapse0x2187520() {
   return (neuron0x217f8a0()*0.431474);
}

double NNfunction_sb_uRcR::synapse0x2187560() {
   return (neuron0x217fbe0()*-0.316273);
}

double NNfunction_sb_uRcR::synapse0x21875a0() {
   return (neuron0x217ff20()*0.613716);
}

double NNfunction_sb_uRcR::synapse0x21875e0() {
   return (neuron0x2180260()*-0.47477);
}

double NNfunction_sb_uRcR::synapse0x2187620() {
   return (neuron0x21805a0()*0.47957);
}

double NNfunction_sb_uRcR::synapse0x2187660() {
   return (neuron0x21808e0()*-0.433853);
}

double NNfunction_sb_uRcR::synapse0x21876a0() {
   return (neuron0x2180c20()*-0.109908);
}

double NNfunction_sb_uRcR::synapse0x21876e0() {
   return (neuron0x2180f60()*-0.208742);
}

double NNfunction_sb_uRcR::synapse0x1f3ee30() {
   return (neuron0x21812a0()*0.184269);
}

double NNfunction_sb_uRcR::synapse0x1f3ee70() {
   return (neuron0x21815e0()*-0.0943144);
}

double NNfunction_sb_uRcR::synapse0x1f3eeb0() {
   return (neuron0x2181920()*0.028176);
}

double NNfunction_sb_uRcR::synapse0x1f3eef0() {
   return (neuron0x2181c60()*-0.081169);
}

double NNfunction_sb_uRcR::synapse0x1f3ef30() {
   return (neuron0x2181fa0()*0.0198581);
}

double NNfunction_sb_uRcR::synapse0x1f3ef70() {
   return (neuron0x21822e0()*0.81939);
}

double NNfunction_sb_uRcR::synapse0x1f3efb0() {
   return (neuron0x2182620()*0.654212);
}

double NNfunction_sb_uRcR::synapse0x2187330() {
   return (neuron0x2182960()*0.157477);
}

double NNfunction_sb_uRcR::synapse0x2187370() {
   return (neuron0x2182ec0()*-0.284687);
}

double NNfunction_sb_uRcR::synapse0x1f3f100() {
   return (neuron0x21830e0()*-0.16563);
}

double NNfunction_sb_uRcR::synapse0x1f3f140() {
   return (neuron0x2183420()*0.131269);
}

double NNfunction_sb_uRcR::synapse0x1f3f180() {
   return (neuron0x2183760()*0.120257);
}

double NNfunction_sb_uRcR::synapse0x1f3f1c0() {
   return (neuron0x2183aa0()*0.210168);
}

double NNfunction_sb_uRcR::synapse0x1f3f200() {
   return (neuron0x2183de0()*-0.245913);
}

double NNfunction_sb_uRcR::synapse0x2187f30() {
   return (neuron0x2184120()*0.496354);
}

double NNfunction_sb_uRcR::synapse0x21882b0() {
   return (neuron0x217f560()*0.0312543);
}

double NNfunction_sb_uRcR::synapse0x21882f0() {
   return (neuron0x217f8a0()*0.0312649);
}

double NNfunction_sb_uRcR::synapse0x2188330() {
   return (neuron0x217fbe0()*0.0106926);
}

double NNfunction_sb_uRcR::synapse0x2188370() {
   return (neuron0x217ff20()*-1.78496);
}

double NNfunction_sb_uRcR::synapse0x21883b0() {
   return (neuron0x2180260()*-0.0606245);
}

double NNfunction_sb_uRcR::synapse0x21883f0() {
   return (neuron0x21805a0()*-0.0782547);
}

double NNfunction_sb_uRcR::synapse0x2188430() {
   return (neuron0x21808e0()*0.0871294);
}

double NNfunction_sb_uRcR::synapse0x2188470() {
   return (neuron0x2180c20()*-0.104652);
}

double NNfunction_sb_uRcR::synapse0x21884b0() {
   return (neuron0x2180f60()*-0.0511308);
}

double NNfunction_sb_uRcR::synapse0x21884f0() {
   return (neuron0x21812a0()*-0.00371402);
}

double NNfunction_sb_uRcR::synapse0x2188530() {
   return (neuron0x21815e0()*-0.00441688);
}

double NNfunction_sb_uRcR::synapse0x2188570() {
   return (neuron0x2181920()*0.106271);
}

double NNfunction_sb_uRcR::synapse0x21885b0() {
   return (neuron0x2181c60()*0.120434);
}

double NNfunction_sb_uRcR::synapse0x21885f0() {
   return (neuron0x2181fa0()*0.0353689);
}

double NNfunction_sb_uRcR::synapse0x2188630() {
   return (neuron0x21822e0()*-0.523907);
}

double NNfunction_sb_uRcR::synapse0x2188670() {
   return (neuron0x2182620()*1.01607);
}

double NNfunction_sb_uRcR::synapse0x2188100() {
   return (neuron0x2182960()*-0.0678273);
}

double NNfunction_sb_uRcR::synapse0x2188140() {
   return (neuron0x2182ec0()*-0.0643637);
}

double NNfunction_sb_uRcR::synapse0x21887c0() {
   return (neuron0x21830e0()*-0.0798634);
}

double NNfunction_sb_uRcR::synapse0x2188800() {
   return (neuron0x2183420()*0.0905637);
}

double NNfunction_sb_uRcR::synapse0x2188840() {
   return (neuron0x2183760()*0.00567509);
}

double NNfunction_sb_uRcR::synapse0x2188880() {
   return (neuron0x2183aa0()*0.0228622);
}

double NNfunction_sb_uRcR::synapse0x21888c0() {
   return (neuron0x2183de0()*0.0237734);
}

double NNfunction_sb_uRcR::synapse0x2188900() {
   return (neuron0x2184120()*0.0277717);
}

double NNfunction_sb_uRcR::synapse0x2188c80() {
   return (neuron0x217f560()*-0.0243566);
}

double NNfunction_sb_uRcR::synapse0x2188cc0() {
   return (neuron0x217f8a0()*-0.0169952);
}

double NNfunction_sb_uRcR::synapse0x2188d00() {
   return (neuron0x217fbe0()*-0.0160114);
}

double NNfunction_sb_uRcR::synapse0x2188d40() {
   return (neuron0x217ff20()*-3.88807);
}

double NNfunction_sb_uRcR::synapse0x2188d80() {
   return (neuron0x2180260()*0.100909);
}

double NNfunction_sb_uRcR::synapse0x2188dc0() {
   return (neuron0x21805a0()*-0.0106539);
}

double NNfunction_sb_uRcR::synapse0x2188e00() {
   return (neuron0x21808e0()*0.103111);
}

double NNfunction_sb_uRcR::synapse0x2188e40() {
   return (neuron0x2180c20()*0.0086928);
}

double NNfunction_sb_uRcR::synapse0x2188e80() {
   return (neuron0x2180f60()*-0.152228);
}

double NNfunction_sb_uRcR::synapse0x2188ec0() {
   return (neuron0x21812a0()*-0.00191371);
}

double NNfunction_sb_uRcR::synapse0x2188f00() {
   return (neuron0x21815e0()*-0.00119246);
}

double NNfunction_sb_uRcR::synapse0x2188f40() {
   return (neuron0x2181920()*-0.0462964);
}

double NNfunction_sb_uRcR::synapse0x2188f80() {
   return (neuron0x2181c60()*-0.0363564);
}

double NNfunction_sb_uRcR::synapse0x2188fc0() {
   return (neuron0x2181fa0()*0.00813991);
}

double NNfunction_sb_uRcR::synapse0x2189000() {
   return (neuron0x21822e0()*0.25184);
}

double NNfunction_sb_uRcR::synapse0x2189040() {
   return (neuron0x2182620()*0.334226);
}

double NNfunction_sb_uRcR::synapse0x2188ad0() {
   return (neuron0x2182960()*0.100057);
}

double NNfunction_sb_uRcR::synapse0x2188b10() {
   return (neuron0x2182ec0()*0.147524);
}

double NNfunction_sb_uRcR::synapse0x2189190() {
   return (neuron0x21830e0()*0.0861374);
}

double NNfunction_sb_uRcR::synapse0x21891d0() {
   return (neuron0x2183420()*-0.0357032);
}

double NNfunction_sb_uRcR::synapse0x2189210() {
   return (neuron0x2183760()*-0.051809);
}

double NNfunction_sb_uRcR::synapse0x2189250() {
   return (neuron0x2183aa0()*-0.0281552);
}

double NNfunction_sb_uRcR::synapse0x2189290() {
   return (neuron0x2183de0()*-0.0550184);
}

double NNfunction_sb_uRcR::synapse0x21892d0() {
   return (neuron0x2184120()*0.0650457);
}

double NNfunction_sb_uRcR::synapse0x2182db0() {
   return (neuron0x217f560()*-0.0724751);
}

double NNfunction_sb_uRcR::synapse0x2182df0() {
   return (neuron0x217f8a0()*-0.0632648);
}

double NNfunction_sb_uRcR::synapse0x2182e30() {
   return (neuron0x217fbe0()*-0.0135913);
}

double NNfunction_sb_uRcR::synapse0x2182e70() {
   return (neuron0x217ff20()*0.685469);
}

double NNfunction_sb_uRcR::synapse0x2189860() {
   return (neuron0x2180260()*0.0172996);
}

double NNfunction_sb_uRcR::synapse0x21898a0() {
   return (neuron0x21805a0()*0.31755);
}

double NNfunction_sb_uRcR::synapse0x21898e0() {
   return (neuron0x21808e0()*-0.207769);
}

double NNfunction_sb_uRcR::synapse0x2189920() {
   return (neuron0x2180c20()*0.607474);
}

double NNfunction_sb_uRcR::synapse0x2189960() {
   return (neuron0x2180f60()*0.00383104);
}

double NNfunction_sb_uRcR::synapse0x21899a0() {
   return (neuron0x21812a0()*0.160624);
}

double NNfunction_sb_uRcR::synapse0x21899e0() {
   return (neuron0x21815e0()*0.0134675);
}

double NNfunction_sb_uRcR::synapse0x2189a20() {
   return (neuron0x2181920()*-0.0985646);
}

double NNfunction_sb_uRcR::synapse0x2189a60() {
   return (neuron0x2181c60()*0.0911951);
}

double NNfunction_sb_uRcR::synapse0x2189aa0() {
   return (neuron0x2181fa0()*0.0694158);
}

double NNfunction_sb_uRcR::synapse0x2189ae0() {
   return (neuron0x21822e0()*-0.384334);
}

double NNfunction_sb_uRcR::synapse0x2189b20() {
   return (neuron0x2182620()*0.20207);
}

double NNfunction_sb_uRcR::synapse0x21894a0() {
   return (neuron0x2182960()*0.260315);
}

double NNfunction_sb_uRcR::synapse0x21894e0() {
   return (neuron0x2182ec0()*0.119134);
}

double NNfunction_sb_uRcR::synapse0x2189c70() {
   return (neuron0x21830e0()*0.0466725);
}

double NNfunction_sb_uRcR::synapse0x2189cb0() {
   return (neuron0x2183420()*0.10816);
}

double NNfunction_sb_uRcR::synapse0x2189cf0() {
   return (neuron0x2183760()*-0.0513655);
}

double NNfunction_sb_uRcR::synapse0x2189d30() {
   return (neuron0x2183aa0()*-0.0941353);
}

double NNfunction_sb_uRcR::synapse0x2189d70() {
   return (neuron0x2183de0()*0.112883);
}

double NNfunction_sb_uRcR::synapse0x2189db0() {
   return (neuron0x2184120()*0.0387632);
}

double NNfunction_sb_uRcR::synapse0x218a130() {
   return (neuron0x217f560()*0.870629);
}

double NNfunction_sb_uRcR::synapse0x218a170() {
   return (neuron0x217f8a0()*0.838482);
}

double NNfunction_sb_uRcR::synapse0x218a1b0() {
   return (neuron0x217fbe0()*-0.843361);
}

double NNfunction_sb_uRcR::synapse0x218a1f0() {
   return (neuron0x217ff20()*0.183822);
}

double NNfunction_sb_uRcR::synapse0x218a230() {
   return (neuron0x2180260()*-0.711075);
}

double NNfunction_sb_uRcR::synapse0x218a270() {
   return (neuron0x21805a0()*-1.29766);
}

double NNfunction_sb_uRcR::synapse0x218a2b0() {
   return (neuron0x21808e0()*0.842467);
}

double NNfunction_sb_uRcR::synapse0x218a2f0() {
   return (neuron0x2180c20()*0.910072);
}

double NNfunction_sb_uRcR::synapse0x218a330() {
   return (neuron0x2180f60()*-0.79181);
}

double NNfunction_sb_uRcR::synapse0x218a370() {
   return (neuron0x21812a0()*0.632847);
}

double NNfunction_sb_uRcR::synapse0x218a3b0() {
   return (neuron0x21815e0()*1.46273e-05);
}

double NNfunction_sb_uRcR::synapse0x218a3f0() {
   return (neuron0x2181920()*0.14313);
}

double NNfunction_sb_uRcR::synapse0x218a430() {
   return (neuron0x2181c60()*0.490763);
}

double NNfunction_sb_uRcR::synapse0x218a470() {
   return (neuron0x2181fa0()*-0.315278);
}

double NNfunction_sb_uRcR::synapse0x218a4b0() {
   return (neuron0x21822e0()*-0.815224);
}

double NNfunction_sb_uRcR::synapse0x218a4f0() {
   return (neuron0x2182620()*-0.24471);
}

double NNfunction_sb_uRcR::synapse0x2189f80() {
   return (neuron0x2182960()*-0.809192);
}

double NNfunction_sb_uRcR::synapse0x2189fc0() {
   return (neuron0x2182ec0()*-0.00676162);
}

double NNfunction_sb_uRcR::synapse0x218a640() {
   return (neuron0x21830e0()*0.258679);
}

double NNfunction_sb_uRcR::synapse0x218a680() {
   return (neuron0x2183420()*0.70463);
}

double NNfunction_sb_uRcR::synapse0x218a6c0() {
   return (neuron0x2183760()*-0.662272);
}

double NNfunction_sb_uRcR::synapse0x218a700() {
   return (neuron0x2183aa0()*-0.605681);
}

double NNfunction_sb_uRcR::synapse0x218a740() {
   return (neuron0x2183de0()*0.057904);
}

double NNfunction_sb_uRcR::synapse0x218a780() {
   return (neuron0x2184120()*-0.0905473);
}

double NNfunction_sb_uRcR::synapse0x218ab00() {
   return (neuron0x217f560()*0.0635261);
}

double NNfunction_sb_uRcR::synapse0x218ab40() {
   return (neuron0x217f8a0()*-0.208212);
}

double NNfunction_sb_uRcR::synapse0x218ab80() {
   return (neuron0x217fbe0()*0.00152884);
}

double NNfunction_sb_uRcR::synapse0x218abc0() {
   return (neuron0x217ff20()*-0.158283);
}

double NNfunction_sb_uRcR::synapse0x218ac00() {
   return (neuron0x2180260()*-0.317687);
}

double NNfunction_sb_uRcR::synapse0x218ac40() {
   return (neuron0x21805a0()*0.140445);
}

double NNfunction_sb_uRcR::synapse0x218ac80() {
   return (neuron0x21808e0()*0.169383);
}

double NNfunction_sb_uRcR::synapse0x218acc0() {
   return (neuron0x2180c20()*-0.162292);
}

double NNfunction_sb_uRcR::synapse0x218ad00() {
   return (neuron0x2180f60()*-0.145176);
}

double NNfunction_sb_uRcR::synapse0x218ad40() {
   return (neuron0x21812a0()*0.101738);
}

double NNfunction_sb_uRcR::synapse0x218ad80() {
   return (neuron0x21815e0()*0.33247);
}

double NNfunction_sb_uRcR::synapse0x218adc0() {
   return (neuron0x2181920()*1.28893);
}

double NNfunction_sb_uRcR::synapse0x218ae00() {
   return (neuron0x2181c60()*0.16171);
}

double NNfunction_sb_uRcR::synapse0x218ae40() {
   return (neuron0x2181fa0()*-0.152002);
}

double NNfunction_sb_uRcR::synapse0x218ae80() {
   return (neuron0x21822e0()*0.156846);
}

double NNfunction_sb_uRcR::synapse0x218aec0() {
   return (neuron0x2182620()*-0.20376);
}

double NNfunction_sb_uRcR::synapse0x218a950() {
   return (neuron0x2182960()*0.0362311);
}

double NNfunction_sb_uRcR::synapse0x218a990() {
   return (neuron0x2182ec0()*0.124639);
}

double NNfunction_sb_uRcR::synapse0x2187720() {
   return (neuron0x21830e0()*-0.128138);
}

double NNfunction_sb_uRcR::synapse0x2187760() {
   return (neuron0x2183420()*-0.186859);
}

double NNfunction_sb_uRcR::synapse0x21877a0() {
   return (neuron0x2183760()*0.131118);
}

double NNfunction_sb_uRcR::synapse0x21877e0() {
   return (neuron0x2183aa0()*0.036386);
}

double NNfunction_sb_uRcR::synapse0x2187820() {
   return (neuron0x2183de0()*-0.0906953);
}

double NNfunction_sb_uRcR::synapse0x2187860() {
   return (neuron0x2184120()*-0.000689766);
}

double NNfunction_sb_uRcR::synapse0x2187be0() {
   return (neuron0x217f560()*-0.0150434);
}

double NNfunction_sb_uRcR::synapse0x2187c20() {
   return (neuron0x217f8a0()*0.0106711);
}

double NNfunction_sb_uRcR::synapse0x2187c60() {
   return (neuron0x217fbe0()*-0.0661449);
}

double NNfunction_sb_uRcR::synapse0x2187ca0() {
   return (neuron0x217ff20()*-0.0109528);
}

double NNfunction_sb_uRcR::synapse0x2187ce0() {
   return (neuron0x2180260()*-0.143762);
}

double NNfunction_sb_uRcR::synapse0x2187d20() {
   return (neuron0x21805a0()*0.053795);
}

double NNfunction_sb_uRcR::synapse0x2187d60() {
   return (neuron0x21808e0()*0.192353);
}

double NNfunction_sb_uRcR::synapse0x2187da0() {
   return (neuron0x2180c20()*0.0442736);
}

double NNfunction_sb_uRcR::synapse0x2187de0() {
   return (neuron0x2180f60()*-0.0303035);
}

double NNfunction_sb_uRcR::synapse0x2187e20() {
   return (neuron0x21812a0()*-0.00556478);
}

double NNfunction_sb_uRcR::synapse0x2187e60() {
   return (neuron0x21815e0()*-0.0372783);
}

double NNfunction_sb_uRcR::synapse0x2187ea0() {
   return (neuron0x2181920()*-0.00342298);
}

double NNfunction_sb_uRcR::synapse0x2187ee0() {
   return (neuron0x2181c60()*-0.0474033);
}

double NNfunction_sb_uRcR::synapse0x218c020() {
   return (neuron0x2181fa0()*-0.0113066);
}

double NNfunction_sb_uRcR::synapse0x218c060() {
   return (neuron0x21822e0()*-0.683798);
}

double NNfunction_sb_uRcR::synapse0x218c0a0() {
   return (neuron0x2182620()*-0.144598);
}

double NNfunction_sb_uRcR::synapse0x2187a30() {
   return (neuron0x2182960()*-0.0555031);
}

double NNfunction_sb_uRcR::synapse0x2187a70() {
   return (neuron0x2182ec0()*-0.0306725);
}

double NNfunction_sb_uRcR::synapse0x218c1f0() {
   return (neuron0x21830e0()*-0.0352386);
}

double NNfunction_sb_uRcR::synapse0x218c230() {
   return (neuron0x2183420()*0.00171891);
}

double NNfunction_sb_uRcR::synapse0x218c270() {
   return (neuron0x2183760()*-0.0017084);
}

double NNfunction_sb_uRcR::synapse0x218c2b0() {
   return (neuron0x2183aa0()*0.00991431);
}

double NNfunction_sb_uRcR::synapse0x218c2f0() {
   return (neuron0x2183de0()*-0.0380257);
}

double NNfunction_sb_uRcR::synapse0x218c330() {
   return (neuron0x2184120()*-0.0405927);
}

double NNfunction_sb_uRcR::synapse0x218c6b0() {
   return (neuron0x217f560()*-0.426655);
}

double NNfunction_sb_uRcR::synapse0x218c6f0() {
   return (neuron0x217f8a0()*-0.619632);
}

double NNfunction_sb_uRcR::synapse0x218c730() {
   return (neuron0x217fbe0()*0.250247);
}

double NNfunction_sb_uRcR::synapse0x218c770() {
   return (neuron0x217ff20()*-0.284098);
}

double NNfunction_sb_uRcR::synapse0x218c7b0() {
   return (neuron0x2180260()*0.229804);
}

double NNfunction_sb_uRcR::synapse0x218c7f0() {
   return (neuron0x21805a0()*1.32464);
}

double NNfunction_sb_uRcR::synapse0x218c830() {
   return (neuron0x21808e0()*-0.163917);
}

double NNfunction_sb_uRcR::synapse0x218c870() {
   return (neuron0x2180c20()*0.244676);
}

double NNfunction_sb_uRcR::synapse0x218c8b0() {
   return (neuron0x2180f60()*0.00221382);
}

double NNfunction_sb_uRcR::synapse0x218c8f0() {
   return (neuron0x21812a0()*-0.167383);
}

double NNfunction_sb_uRcR::synapse0x218c930() {
   return (neuron0x21815e0()*-0.261106);
}

double NNfunction_sb_uRcR::synapse0x218c970() {
   return (neuron0x2181920()*-0.346212);
}

double NNfunction_sb_uRcR::synapse0x218c9b0() {
   return (neuron0x2181c60()*0.245285);
}

double NNfunction_sb_uRcR::synapse0x218c9f0() {
   return (neuron0x2181fa0()*0.377405);
}

double NNfunction_sb_uRcR::synapse0x218ca30() {
   return (neuron0x21822e0()*-1.73636);
}

double NNfunction_sb_uRcR::synapse0x218ca70() {
   return (neuron0x2182620()*-1.30306);
}

double NNfunction_sb_uRcR::synapse0x218c500() {
   return (neuron0x2182960()*0.605209);
}

double NNfunction_sb_uRcR::synapse0x218c540() {
   return (neuron0x2182ec0()*-0.32851);
}

double NNfunction_sb_uRcR::synapse0x218cbc0() {
   return (neuron0x21830e0()*0.276012);
}

double NNfunction_sb_uRcR::synapse0x218cc00() {
   return (neuron0x2183420()*-0.74488);
}

double NNfunction_sb_uRcR::synapse0x218cc40() {
   return (neuron0x2183760()*0.22631);
}

double NNfunction_sb_uRcR::synapse0x218cc80() {
   return (neuron0x2183aa0()*-0.355223);
}

double NNfunction_sb_uRcR::synapse0x218ccc0() {
   return (neuron0x2183de0()*-0.0474325);
}

double NNfunction_sb_uRcR::synapse0x218cd00() {
   return (neuron0x2184120()*0.0895957);
}

double NNfunction_sb_uRcR::synapse0x218d080() {
   return (neuron0x217f560()*-0.0268594);
}

double NNfunction_sb_uRcR::synapse0x218d0c0() {
   return (neuron0x217f8a0()*0.0124819);
}

double NNfunction_sb_uRcR::synapse0x218d100() {
   return (neuron0x217fbe0()*0.0515515);
}

double NNfunction_sb_uRcR::synapse0x218d140() {
   return (neuron0x217ff20()*1.21385);
}

double NNfunction_sb_uRcR::synapse0x218d180() {
   return (neuron0x2180260()*0.0766225);
}

double NNfunction_sb_uRcR::synapse0x218d1c0() {
   return (neuron0x21805a0()*0.0710896);
}

double NNfunction_sb_uRcR::synapse0x218d200() {
   return (neuron0x21808e0()*-0.100666);
}

double NNfunction_sb_uRcR::synapse0x218d240() {
   return (neuron0x2180c20()*0.20934);
}

double NNfunction_sb_uRcR::synapse0x218d280() {
   return (neuron0x2180f60()*0.0360556);
}

double NNfunction_sb_uRcR::synapse0x218d2c0() {
   return (neuron0x21812a0()*0.0497892);
}

double NNfunction_sb_uRcR::synapse0x218d300() {
   return (neuron0x21815e0()*0.00663718);
}

double NNfunction_sb_uRcR::synapse0x218d340() {
   return (neuron0x2181920()*0.111932);
}

double NNfunction_sb_uRcR::synapse0x218d380() {
   return (neuron0x2181c60()*0.122629);
}

double NNfunction_sb_uRcR::synapse0x218d3c0() {
   return (neuron0x2181fa0()*0.014585);
}

double NNfunction_sb_uRcR::synapse0x218d400() {
   return (neuron0x21822e0()*0.00421633);
}

double NNfunction_sb_uRcR::synapse0x218d440() {
   return (neuron0x2182620()*0.0748006);
}

double NNfunction_sb_uRcR::synapse0x218ced0() {
   return (neuron0x2182960()*0.0919464);
}

double NNfunction_sb_uRcR::synapse0x218cf10() {
   return (neuron0x2182ec0()*0.109596);
}

double NNfunction_sb_uRcR::synapse0x218d590() {
   return (neuron0x21830e0()*0.0943452);
}

double NNfunction_sb_uRcR::synapse0x218d5d0() {
   return (neuron0x2183420()*0.050519);
}

double NNfunction_sb_uRcR::synapse0x218d610() {
   return (neuron0x2183760()*0.0170033);
}

double NNfunction_sb_uRcR::synapse0x218d650() {
   return (neuron0x2183aa0()*-0.0911426);
}

double NNfunction_sb_uRcR::synapse0x218d690() {
   return (neuron0x2183de0()*0.0363134);
}

double NNfunction_sb_uRcR::synapse0x218d6d0() {
   return (neuron0x2184120()*0.00438476);
}

double NNfunction_sb_uRcR::synapse0x218da50() {
   return (neuron0x217f560()*-0.24438);
}

double NNfunction_sb_uRcR::synapse0x218da90() {
   return (neuron0x217f8a0()*-0.384533);
}

double NNfunction_sb_uRcR::synapse0x218dad0() {
   return (neuron0x217fbe0()*-0.631959);
}

double NNfunction_sb_uRcR::synapse0x218db10() {
   return (neuron0x217ff20()*0.445585);
}

double NNfunction_sb_uRcR::synapse0x218db50() {
   return (neuron0x2180260()*0.400491);
}

double NNfunction_sb_uRcR::synapse0x218db90() {
   return (neuron0x21805a0()*-1.16508);
}

double NNfunction_sb_uRcR::synapse0x218dbd0() {
   return (neuron0x21808e0()*-0.861189);
}

double NNfunction_sb_uRcR::synapse0x218dc10() {
   return (neuron0x2180c20()*0.306013);
}

double NNfunction_sb_uRcR::synapse0x218dc50() {
   return (neuron0x2180f60()*-0.301768);
}

double NNfunction_sb_uRcR::synapse0x218dc90() {
   return (neuron0x21812a0()*-0.291363);
}

double NNfunction_sb_uRcR::synapse0x218dcd0() {
   return (neuron0x21815e0()*0.992213);
}

double NNfunction_sb_uRcR::synapse0x218dd10() {
   return (neuron0x2181920()*-0.399759);
}

double NNfunction_sb_uRcR::synapse0x218dd50() {
   return (neuron0x2181c60()*-0.0293459);
}

double NNfunction_sb_uRcR::synapse0x218dd90() {
   return (neuron0x2181fa0()*-0.88496);
}

double NNfunction_sb_uRcR::synapse0x218ddd0() {
   return (neuron0x21822e0()*-0.00153468);
}

double NNfunction_sb_uRcR::synapse0x218de10() {
   return (neuron0x2182620()*0.528601);
}

double NNfunction_sb_uRcR::synapse0x218d8a0() {
   return (neuron0x2182960()*0.777739);
}

double NNfunction_sb_uRcR::synapse0x218d8e0() {
   return (neuron0x2182ec0()*0.0177396);
}

double NNfunction_sb_uRcR::synapse0x218df60() {
   return (neuron0x21830e0()*1.28721);
}

double NNfunction_sb_uRcR::synapse0x218dfa0() {
   return (neuron0x2183420()*0.0736361);
}

double NNfunction_sb_uRcR::synapse0x218dfe0() {
   return (neuron0x2183760()*0.527222);
}

double NNfunction_sb_uRcR::synapse0x218e020() {
   return (neuron0x2183aa0()*0.211876);
}

double NNfunction_sb_uRcR::synapse0x218e060() {
   return (neuron0x2183de0()*0.0659284);
}

double NNfunction_sb_uRcR::synapse0x218e0a0() {
   return (neuron0x2184120()*0.550942);
}

double NNfunction_sb_uRcR::synapse0x218e420() {
   return (neuron0x217f560()*-0.35495);
}

double NNfunction_sb_uRcR::synapse0x217f780() {
   return (neuron0x217f8a0()*-0.231056);
}

double NNfunction_sb_uRcR::synapse0x217f7c0() {
   return (neuron0x217fbe0()*0.605754);
}

double NNfunction_sb_uRcR::synapse0x217fac0() {
   return (neuron0x217ff20()*1.12371);
}

double NNfunction_sb_uRcR::synapse0x217fb00() {
   return (neuron0x2180260()*1.23004);
}

double NNfunction_sb_uRcR::synapse0x217fe00() {
   return (neuron0x21805a0()*-0.063837);
}

double NNfunction_sb_uRcR::synapse0x217fe40() {
   return (neuron0x21808e0()*0.495286);
}

double NNfunction_sb_uRcR::synapse0x2180140() {
   return (neuron0x2180c20()*-0.615023);
}

double NNfunction_sb_uRcR::synapse0x2180180() {
   return (neuron0x2180f60()*0.175757);
}

double NNfunction_sb_uRcR::synapse0x2180480() {
   return (neuron0x21812a0()*-0.187388);
}

double NNfunction_sb_uRcR::synapse0x21804c0() {
   return (neuron0x21815e0()*0.293017);
}

double NNfunction_sb_uRcR::synapse0x21807c0() {
   return (neuron0x2181920()*-0.0829345);
}

double NNfunction_sb_uRcR::synapse0x2180800() {
   return (neuron0x2181c60()*-0.177958);
}

double NNfunction_sb_uRcR::synapse0x2180b00() {
   return (neuron0x2181fa0()*-0.000288806);
}

double NNfunction_sb_uRcR::synapse0x2180b40() {
   return (neuron0x21822e0()*0.449998);
}

double NNfunction_sb_uRcR::synapse0x2180e40() {
   return (neuron0x2182620()*0.599379);
}

double NNfunction_sb_uRcR::synapse0x2180e80() {
   return (neuron0x2182960()*-0.372576);
}

double NNfunction_sb_uRcR::synapse0x2181180() {
   return (neuron0x2182ec0()*-0.330809);
}

double NNfunction_sb_uRcR::synapse0x21811c0() {
   return (neuron0x21830e0()*-0.0673765);
}

double NNfunction_sb_uRcR::synapse0x21814c0() {
   return (neuron0x2183420()*-0.330506);
}

double NNfunction_sb_uRcR::synapse0x2181500() {
   return (neuron0x2183760()*0.139248);
}

double NNfunction_sb_uRcR::synapse0x2181800() {
   return (neuron0x2183aa0()*0.0409206);
}

double NNfunction_sb_uRcR::synapse0x2181840() {
   return (neuron0x2183de0()*0.312895);
}

double NNfunction_sb_uRcR::synapse0x2181b40() {
   return (neuron0x2184120()*0.28144);
}

double NNfunction_sb_uRcR::synapse0x2181b80() {
   return (neuron0x217f560()*0.326916);
}

double NNfunction_sb_uRcR::synapse0x2182840() {
   return (neuron0x217f8a0()*-0.301844);
}

double NNfunction_sb_uRcR::synapse0x2182880() {
   return (neuron0x217fbe0()*-0.0502242);
}

double NNfunction_sb_uRcR::synapse0x218e270() {
   return (neuron0x217ff20()*-0.774726);
}

double NNfunction_sb_uRcR::synapse0x218e2b0() {
   return (neuron0x2180260()*-0.343397);
}

double NNfunction_sb_uRcR::synapse0x2182b80() {
   return (neuron0x21805a0()*0.633179);
}

double NNfunction_sb_uRcR::synapse0x2182bc0() {
   return (neuron0x21808e0()*-1.2961);
}

double NNfunction_sb_uRcR::synapse0x1f30b50() {
   return (neuron0x2180c20()*0.73803);
}

double NNfunction_sb_uRcR::synapse0x1f30b90() {
   return (neuron0x2180f60()*0.422825);
}

double NNfunction_sb_uRcR::synapse0x2183300() {
   return (neuron0x21812a0()*0.280389);
}

double NNfunction_sb_uRcR::synapse0x2183340() {
   return (neuron0x21815e0()*0.129401);
}

double NNfunction_sb_uRcR::synapse0x2183640() {
   return (neuron0x2181920()*0.118465);
}

double NNfunction_sb_uRcR::synapse0x2183680() {
   return (neuron0x2181c60()*0.613666);
}

double NNfunction_sb_uRcR::synapse0x2183980() {
   return (neuron0x2181fa0()*0.79764);
}

double NNfunction_sb_uRcR::synapse0x21839c0() {
   return (neuron0x21822e0()*0.456808);
}

double NNfunction_sb_uRcR::synapse0x2183cc0() {
   return (neuron0x2182620()*0.219569);
}

double NNfunction_sb_uRcR::synapse0x2183d00() {
   return (neuron0x2182960()*0.57824);
}

double NNfunction_sb_uRcR::synapse0x2184000() {
   return (neuron0x2182ec0()*0.413412);
}

double NNfunction_sb_uRcR::synapse0x2184040() {
   return (neuron0x21830e0()*0.121999);
}

double NNfunction_sb_uRcR::synapse0x2184340() {
   return (neuron0x2183420()*-0.205624);
}

double NNfunction_sb_uRcR::synapse0x2184380() {
   return (neuron0x2183760()*-0.722821);
}

double NNfunction_sb_uRcR::synapse0x2181e80() {
   return (neuron0x2183aa0()*-0.553589);
}

double NNfunction_sb_uRcR::synapse0x2181ec0() {
   return (neuron0x2183de0()*0.786349);
}

double NNfunction_sb_uRcR::synapse0x2190190() {
   return (neuron0x2184120()*0.54336);
}

double NNfunction_sb_uRcR::synapse0x2190510() {
   return (neuron0x217f560()*0.0219847);
}

double NNfunction_sb_uRcR::synapse0x2190550() {
   return (neuron0x217f8a0()*0.282347);
}

double NNfunction_sb_uRcR::synapse0x2190590() {
   return (neuron0x217fbe0()*-0.217491);
}

double NNfunction_sb_uRcR::synapse0x21905d0() {
   return (neuron0x217ff20()*1.59764);
}

double NNfunction_sb_uRcR::synapse0x2190610() {
   return (neuron0x2180260()*0.00340574);
}

double NNfunction_sb_uRcR::synapse0x2190650() {
   return (neuron0x21805a0()*-0.0499989);
}

double NNfunction_sb_uRcR::synapse0x2190690() {
   return (neuron0x21808e0()*0.0431854);
}

double NNfunction_sb_uRcR::synapse0x21906d0() {
   return (neuron0x2180c20()*0.376995);
}

double NNfunction_sb_uRcR::synapse0x2190710() {
   return (neuron0x2180f60()*-0.0724132);
}

double NNfunction_sb_uRcR::synapse0x2190750() {
   return (neuron0x21812a0()*-0.108803);
}

double NNfunction_sb_uRcR::synapse0x2190790() {
   return (neuron0x21815e0()*0.00416298);
}

double NNfunction_sb_uRcR::synapse0x21907d0() {
   return (neuron0x2181920()*-0.0318823);
}

double NNfunction_sb_uRcR::synapse0x2190810() {
   return (neuron0x2181c60()*0.0433271);
}

double NNfunction_sb_uRcR::synapse0x2190850() {
   return (neuron0x2181fa0()*0.0463292);
}

double NNfunction_sb_uRcR::synapse0x2190890() {
   return (neuron0x21822e0()*-1.19011);
}

double NNfunction_sb_uRcR::synapse0x21908d0() {
   return (neuron0x2182620()*-0.925736);
}

double NNfunction_sb_uRcR::synapse0x2190360() {
   return (neuron0x2182960()*0.0475854);
}

double NNfunction_sb_uRcR::synapse0x21903a0() {
   return (neuron0x2182ec0()*-0.78548);
}

double NNfunction_sb_uRcR::synapse0x2190a20() {
   return (neuron0x21830e0()*0.308032);
}

double NNfunction_sb_uRcR::synapse0x2190a60() {
   return (neuron0x2183420()*-0.0164105);
}

double NNfunction_sb_uRcR::synapse0x2190aa0() {
   return (neuron0x2183760()*-0.0974694);
}

double NNfunction_sb_uRcR::synapse0x2190ae0() {
   return (neuron0x2183aa0()*-0.103032);
}

double NNfunction_sb_uRcR::synapse0x2190b20() {
   return (neuron0x2183de0()*0.0359426);
}

double NNfunction_sb_uRcR::synapse0x2190b60() {
   return (neuron0x2184120()*-0.00866618);
}

double NNfunction_sb_uRcR::synapse0x2190ee0() {
   return (neuron0x217f560()*-0.324368);
}

double NNfunction_sb_uRcR::synapse0x2190f20() {
   return (neuron0x217f8a0()*-0.332581);
}

double NNfunction_sb_uRcR::synapse0x2190f60() {
   return (neuron0x217fbe0()*-0.713253);
}

double NNfunction_sb_uRcR::synapse0x2190fa0() {
   return (neuron0x217ff20()*0.604564);
}

double NNfunction_sb_uRcR::synapse0x2190fe0() {
   return (neuron0x2180260()*0.307963);
}

double NNfunction_sb_uRcR::synapse0x2191020() {
   return (neuron0x21805a0()*0.689777);
}

double NNfunction_sb_uRcR::synapse0x2191060() {
   return (neuron0x21808e0()*0.287761);
}

double NNfunction_sb_uRcR::synapse0x21910a0() {
   return (neuron0x2180c20()*-0.950991);
}

double NNfunction_sb_uRcR::synapse0x21910e0() {
   return (neuron0x2180f60()*0.213462);
}

double NNfunction_sb_uRcR::synapse0x2191120() {
   return (neuron0x21812a0()*-0.480457);
}

double NNfunction_sb_uRcR::synapse0x2191160() {
   return (neuron0x21815e0()*-1.37723);
}

double NNfunction_sb_uRcR::synapse0x21911a0() {
   return (neuron0x2181920()*0.648129);
}

double NNfunction_sb_uRcR::synapse0x21911e0() {
   return (neuron0x2181c60()*1.05945);
}

double NNfunction_sb_uRcR::synapse0x2191220() {
   return (neuron0x2181fa0()*-0.251272);
}

double NNfunction_sb_uRcR::synapse0x2191260() {
   return (neuron0x21822e0()*0.410251);
}

double NNfunction_sb_uRcR::synapse0x21912a0() {
   return (neuron0x2182620()*0.408218);
}

double NNfunction_sb_uRcR::synapse0x2190d30() {
   return (neuron0x2182960()*0.259677);
}

double NNfunction_sb_uRcR::synapse0x2190d70() {
   return (neuron0x2182ec0()*-0.522998);
}

double NNfunction_sb_uRcR::synapse0x21913f0() {
   return (neuron0x21830e0()*-0.938829);
}

double NNfunction_sb_uRcR::synapse0x2191430() {
   return (neuron0x2183420()*-0.350481);
}

double NNfunction_sb_uRcR::synapse0x2191470() {
   return (neuron0x2183760()*-0.488814);
}

double NNfunction_sb_uRcR::synapse0x21914b0() {
   return (neuron0x2183aa0()*-0.663191);
}

double NNfunction_sb_uRcR::synapse0x21914f0() {
   return (neuron0x2183de0()*0.744317);
}

double NNfunction_sb_uRcR::synapse0x2191530() {
   return (neuron0x2184120()*-0.729676);
}

double NNfunction_sb_uRcR::synapse0x21918b0() {
   return (neuron0x217f560()*0.140139);
}

double NNfunction_sb_uRcR::synapse0x21918f0() {
   return (neuron0x217f8a0()*-0.238996);
}

double NNfunction_sb_uRcR::synapse0x2191930() {
   return (neuron0x217fbe0()*0.0650663);
}

double NNfunction_sb_uRcR::synapse0x2191970() {
   return (neuron0x217ff20()*0.577357);
}

double NNfunction_sb_uRcR::synapse0x21919b0() {
   return (neuron0x2180260()*-0.710034);
}

double NNfunction_sb_uRcR::synapse0x21919f0() {
   return (neuron0x21805a0()*-0.064934);
}

double NNfunction_sb_uRcR::synapse0x2191a30() {
   return (neuron0x21808e0()*0.239106);
}

double NNfunction_sb_uRcR::synapse0x2191a70() {
   return (neuron0x2180c20()*-0.524835);
}

double NNfunction_sb_uRcR::synapse0x2191ab0() {
   return (neuron0x2180f60()*-0.349957);
}

double NNfunction_sb_uRcR::synapse0x2191af0() {
   return (neuron0x21812a0()*-0.0362209);
}

double NNfunction_sb_uRcR::synapse0x2191b30() {
   return (neuron0x21815e0()*-0.280147);
}

double NNfunction_sb_uRcR::synapse0x2191b70() {
   return (neuron0x2181920()*-1.08564);
}

double NNfunction_sb_uRcR::synapse0x2191bb0() {
   return (neuron0x2181c60()*-1.08965);
}

double NNfunction_sb_uRcR::synapse0x2191bf0() {
   return (neuron0x2181fa0()*0.342066);
}

double NNfunction_sb_uRcR::synapse0x2191c30() {
   return (neuron0x21822e0()*-0.198533);
}

double NNfunction_sb_uRcR::synapse0x2191c70() {
   return (neuron0x2182620()*1.01712);
}

double NNfunction_sb_uRcR::synapse0x2191700() {
   return (neuron0x2182960()*0.741308);
}

double NNfunction_sb_uRcR::synapse0x2191740() {
   return (neuron0x2182ec0()*0.870983);
}

double NNfunction_sb_uRcR::synapse0x2191dc0() {
   return (neuron0x21830e0()*-0.632512);
}

double NNfunction_sb_uRcR::synapse0x2191e00() {
   return (neuron0x2183420()*-0.309921);
}

double NNfunction_sb_uRcR::synapse0x2191e40() {
   return (neuron0x2183760()*0.150658);
}

double NNfunction_sb_uRcR::synapse0x2191e80() {
   return (neuron0x2183aa0()*-0.181702);
}

double NNfunction_sb_uRcR::synapse0x2191ec0() {
   return (neuron0x2183de0()*-0.301216);
}

double NNfunction_sb_uRcR::synapse0x2191f00() {
   return (neuron0x2184120()*-0.285311);
}

double NNfunction_sb_uRcR::synapse0x2192280() {
   return (neuron0x217f560()*0.0136846);
}

double NNfunction_sb_uRcR::synapse0x21922c0() {
   return (neuron0x217f8a0()*-0.108334);
}

double NNfunction_sb_uRcR::synapse0x2192300() {
   return (neuron0x217fbe0()*0.229776);
}

double NNfunction_sb_uRcR::synapse0x2192340() {
   return (neuron0x217ff20()*0.334804);
}

double NNfunction_sb_uRcR::synapse0x2192380() {
   return (neuron0x2180260()*0.189261);
}

double NNfunction_sb_uRcR::synapse0x21923c0() {
   return (neuron0x21805a0()*0.00203466);
}

double NNfunction_sb_uRcR::synapse0x2192400() {
   return (neuron0x21808e0()*0.435959);
}

double NNfunction_sb_uRcR::synapse0x2192440() {
   return (neuron0x2180c20()*-0.0299857);
}

double NNfunction_sb_uRcR::synapse0x2192480() {
   return (neuron0x2180f60()*0.0598043);
}

double NNfunction_sb_uRcR::synapse0x21924c0() {
   return (neuron0x21812a0()*-0.00423716);
}

double NNfunction_sb_uRcR::synapse0x2192500() {
   return (neuron0x21815e0()*-0.084097);
}

double NNfunction_sb_uRcR::synapse0x2192540() {
   return (neuron0x2181920()*0.173267);
}

double NNfunction_sb_uRcR::synapse0x2192580() {
   return (neuron0x2181c60()*0.307938);
}

double NNfunction_sb_uRcR::synapse0x21925c0() {
   return (neuron0x2181fa0()*0.31126);
}

double NNfunction_sb_uRcR::synapse0x2192600() {
   return (neuron0x21822e0()*1.62993);
}

double NNfunction_sb_uRcR::synapse0x2192640() {
   return (neuron0x2182620()*-0.921005);
}

double NNfunction_sb_uRcR::synapse0x21920d0() {
   return (neuron0x2182960()*-0.246302);
}

double NNfunction_sb_uRcR::synapse0x2192110() {
   return (neuron0x2182ec0()*-0.218244);
}

double NNfunction_sb_uRcR::synapse0x2192790() {
   return (neuron0x21830e0()*0.181616);
}

double NNfunction_sb_uRcR::synapse0x21927d0() {
   return (neuron0x2183420()*0.244576);
}

double NNfunction_sb_uRcR::synapse0x2192810() {
   return (neuron0x2183760()*-0.117752);
}

double NNfunction_sb_uRcR::synapse0x2192850() {
   return (neuron0x2183aa0()*0.0146208);
}

double NNfunction_sb_uRcR::synapse0x2192890() {
   return (neuron0x2183de0()*0.0960927);
}

double NNfunction_sb_uRcR::synapse0x21928d0() {
   return (neuron0x2184120()*-0.108718);
}

double NNfunction_sb_uRcR::synapse0x2192c50() {
   return (neuron0x217f560()*0.0537029);
}

double NNfunction_sb_uRcR::synapse0x2192c90() {
   return (neuron0x217f8a0()*-0.0311712);
}

double NNfunction_sb_uRcR::synapse0x2192cd0() {
   return (neuron0x217fbe0()*0.007152);
}

double NNfunction_sb_uRcR::synapse0x2192d10() {
   return (neuron0x217ff20()*0.137482);
}

double NNfunction_sb_uRcR::synapse0x2192d50() {
   return (neuron0x2180260()*-0.0871624);
}

double NNfunction_sb_uRcR::synapse0x2192d90() {
   return (neuron0x21805a0()*-0.114635);
}

double NNfunction_sb_uRcR::synapse0x2192dd0() {
   return (neuron0x21808e0()*0.0317262);
}

double NNfunction_sb_uRcR::synapse0x2192e10() {
   return (neuron0x2180c20()*-0.474725);
}

double NNfunction_sb_uRcR::synapse0x2192e50() {
   return (neuron0x2180f60()*0.0696799);
}

double NNfunction_sb_uRcR::synapse0x218b010() {
   return (neuron0x21812a0()*-0.0672254);
}

double NNfunction_sb_uRcR::synapse0x218b050() {
   return (neuron0x21815e0()*0.0583196);
}

double NNfunction_sb_uRcR::synapse0x218b090() {
   return (neuron0x2181920()*0.0394421);
}

double NNfunction_sb_uRcR::synapse0x218b0d0() {
   return (neuron0x2181c60()*-0.0210715);
}

double NNfunction_sb_uRcR::synapse0x218b110() {
   return (neuron0x2181fa0()*-0.0340928);
}

double NNfunction_sb_uRcR::synapse0x218b150() {
   return (neuron0x21822e0()*-0.118372);
}

double NNfunction_sb_uRcR::synapse0x218b190() {
   return (neuron0x2182620()*-0.19489);
}

double NNfunction_sb_uRcR::synapse0x2192aa0() {
   return (neuron0x2182960()*-0.161991);
}

double NNfunction_sb_uRcR::synapse0x2192ae0() {
   return (neuron0x2182ec0()*-0.0640507);
}

double NNfunction_sb_uRcR::synapse0x218b2e0() {
   return (neuron0x21830e0()*-0.0652376);
}

double NNfunction_sb_uRcR::synapse0x218b320() {
   return (neuron0x2183420()*-0.0515658);
}

double NNfunction_sb_uRcR::synapse0x218b360() {
   return (neuron0x2183760()*-0.0149447);
}

double NNfunction_sb_uRcR::synapse0x218b3a0() {
   return (neuron0x2183aa0()*0.129896);
}

double NNfunction_sb_uRcR::synapse0x218b3e0() {
   return (neuron0x2183de0()*-0.00770411);
}

double NNfunction_sb_uRcR::synapse0x218b420() {
   return (neuron0x2184120()*0.0229736);
}

double NNfunction_sb_uRcR::synapse0x218b7a0() {
   return (neuron0x217f560()*-0.053364);
}

double NNfunction_sb_uRcR::synapse0x218b7e0() {
   return (neuron0x217f8a0()*-0.0577696);
}

double NNfunction_sb_uRcR::synapse0x218b820() {
   return (neuron0x217fbe0()*0.0299334);
}

double NNfunction_sb_uRcR::synapse0x218b860() {
   return (neuron0x217ff20()*-1.60006);
}

double NNfunction_sb_uRcR::synapse0x218b8a0() {
   return (neuron0x2180260()*0.0981283);
}

double NNfunction_sb_uRcR::synapse0x218b8e0() {
   return (neuron0x21805a0()*0.0489289);
}

double NNfunction_sb_uRcR::synapse0x218b920() {
   return (neuron0x21808e0()*-0.00347253);
}

double NNfunction_sb_uRcR::synapse0x218b960() {
   return (neuron0x2180c20()*0.111062);
}

double NNfunction_sb_uRcR::synapse0x218b9a0() {
   return (neuron0x2180f60()*-0.0701678);
}

double NNfunction_sb_uRcR::synapse0x218b9e0() {
   return (neuron0x21812a0()*0.0792636);
}

double NNfunction_sb_uRcR::synapse0x218ba20() {
   return (neuron0x21815e0()*-0.00681113);
}

double NNfunction_sb_uRcR::synapse0x218ba60() {
   return (neuron0x2181920()*-0.0275516);
}

double NNfunction_sb_uRcR::synapse0x218baa0() {
   return (neuron0x2181c60()*-0.00559984);
}

double NNfunction_sb_uRcR::synapse0x218bae0() {
   return (neuron0x2181fa0()*0.0431993);
}

double NNfunction_sb_uRcR::synapse0x218bb20() {
   return (neuron0x21822e0()*0.0838864);
}

double NNfunction_sb_uRcR::synapse0x218bb60() {
   return (neuron0x2182620()*0.108555);
}

double NNfunction_sb_uRcR::synapse0x218b5f0() {
   return (neuron0x2182960()*0.150446);
}

double NNfunction_sb_uRcR::synapse0x218b630() {
   return (neuron0x2182ec0()*0.112092);
}

double NNfunction_sb_uRcR::synapse0x218bcb0() {
   return (neuron0x21830e0()*0.00800958);
}

double NNfunction_sb_uRcR::synapse0x218bcf0() {
   return (neuron0x2183420()*-0.0392091);
}

double NNfunction_sb_uRcR::synapse0x218bd30() {
   return (neuron0x2183760()*-0.0546199);
}

double NNfunction_sb_uRcR::synapse0x218bd70() {
   return (neuron0x2183aa0()*-0.047704);
}

double NNfunction_sb_uRcR::synapse0x218bdb0() {
   return (neuron0x2183de0()*0.0194967);
}

double NNfunction_sb_uRcR::synapse0x218bdf0() {
   return (neuron0x2184120()*0.0870643);
}

double NNfunction_sb_uRcR::synapse0x218bfc0() {
   return (neuron0x217f560()*0.0183995);
}

double NNfunction_sb_uRcR::synapse0x2195050() {
   return (neuron0x217f8a0()*-0.0400925);
}

double NNfunction_sb_uRcR::synapse0x2195090() {
   return (neuron0x217fbe0()*-0.0200309);
}

double NNfunction_sb_uRcR::synapse0x21950d0() {
   return (neuron0x217ff20()*7.34603);
}

double NNfunction_sb_uRcR::synapse0x2195110() {
   return (neuron0x2180260()*0.00620692);
}

double NNfunction_sb_uRcR::synapse0x2195150() {
   return (neuron0x21805a0()*0.0326314);
}

double NNfunction_sb_uRcR::synapse0x2195190() {
   return (neuron0x21808e0()*0.0634536);
}

double NNfunction_sb_uRcR::synapse0x21951d0() {
   return (neuron0x2180c20()*0.0505769);
}

double NNfunction_sb_uRcR::synapse0x2195210() {
   return (neuron0x2180f60()*-0.0557514);
}

double NNfunction_sb_uRcR::synapse0x2195250() {
   return (neuron0x21812a0()*-0.0395658);
}

double NNfunction_sb_uRcR::synapse0x2195290() {
   return (neuron0x21815e0()*-0.00431356);
}

double NNfunction_sb_uRcR::synapse0x21952d0() {
   return (neuron0x2181920()*-0.0335228);
}

double NNfunction_sb_uRcR::synapse0x2195310() {
   return (neuron0x2181c60()*-0.0183062);
}

double NNfunction_sb_uRcR::synapse0x2195350() {
   return (neuron0x2181fa0()*0.056565);
}

double NNfunction_sb_uRcR::synapse0x2195390() {
   return (neuron0x21822e0()*0.0931948);
}

double NNfunction_sb_uRcR::synapse0x21953d0() {
   return (neuron0x2182620()*0.0245366);
}

double NNfunction_sb_uRcR::synapse0x2194ea0() {
   return (neuron0x2182960()*0.0461767);
}

double NNfunction_sb_uRcR::synapse0x2194ee0() {
   return (neuron0x2182ec0()*0.031787);
}

double NNfunction_sb_uRcR::synapse0x2195520() {
   return (neuron0x21830e0()*0.0178025);
}

double NNfunction_sb_uRcR::synapse0x2195560() {
   return (neuron0x2183420()*0.0361858);
}

double NNfunction_sb_uRcR::synapse0x21955a0() {
   return (neuron0x2183760()*-0.0316304);
}

double NNfunction_sb_uRcR::synapse0x21955e0() {
   return (neuron0x2183aa0()*-0.0133713);
}

double NNfunction_sb_uRcR::synapse0x2195620() {
   return (neuron0x2183de0()*-0.00670762);
}

double NNfunction_sb_uRcR::synapse0x2195660() {
   return (neuron0x2184120()*-0.0337321);
}

double NNfunction_sb_uRcR::synapse0x21959e0() {
   return (neuron0x217f560()*-0.164494);
}

double NNfunction_sb_uRcR::synapse0x2195a20() {
   return (neuron0x217f8a0()*0.317833);
}

double NNfunction_sb_uRcR::synapse0x2195a60() {
   return (neuron0x217fbe0()*-0.367726);
}

double NNfunction_sb_uRcR::synapse0x2195aa0() {
   return (neuron0x217ff20()*0.547205);
}

double NNfunction_sb_uRcR::synapse0x2195ae0() {
   return (neuron0x2180260()*0.136923);
}

double NNfunction_sb_uRcR::synapse0x2195b20() {
   return (neuron0x21805a0()*0.352217);
}

double NNfunction_sb_uRcR::synapse0x2195b60() {
   return (neuron0x21808e0()*0.00313906);
}

double NNfunction_sb_uRcR::synapse0x2195ba0() {
   return (neuron0x2180c20()*0.295333);
}

double NNfunction_sb_uRcR::synapse0x2195be0() {
   return (neuron0x2180f60()*0.302009);
}

double NNfunction_sb_uRcR::synapse0x2195c20() {
   return (neuron0x21812a0()*-0.0842695);
}

double NNfunction_sb_uRcR::synapse0x2195c60() {
   return (neuron0x21815e0()*-0.0714618);
}

double NNfunction_sb_uRcR::synapse0x2195ca0() {
   return (neuron0x2181920()*-0.404029);
}

double NNfunction_sb_uRcR::synapse0x2195ce0() {
   return (neuron0x2181c60()*0.259052);
}

double NNfunction_sb_uRcR::synapse0x2195d20() {
   return (neuron0x2181fa0()*0.308776);
}

double NNfunction_sb_uRcR::synapse0x2195d60() {
   return (neuron0x21822e0()*-0.254057);
}

double NNfunction_sb_uRcR::synapse0x2195da0() {
   return (neuron0x2182620()*-0.193947);
}

double NNfunction_sb_uRcR::synapse0x2195830() {
   return (neuron0x2182960()*-0.234633);
}

double NNfunction_sb_uRcR::synapse0x2195870() {
   return (neuron0x2182ec0()*-0.350784);
}

double NNfunction_sb_uRcR::synapse0x2195ef0() {
   return (neuron0x21830e0()*0.261352);
}

double NNfunction_sb_uRcR::synapse0x2195f30() {
   return (neuron0x2183420()*0.434717);
}

double NNfunction_sb_uRcR::synapse0x2195f70() {
   return (neuron0x2183760()*-0.304034);
}

double NNfunction_sb_uRcR::synapse0x2195fb0() {
   return (neuron0x2183aa0()*-0.106961);
}

double NNfunction_sb_uRcR::synapse0x2195ff0() {
   return (neuron0x2183de0()*0.0845687);
}

double NNfunction_sb_uRcR::synapse0x2196030() {
   return (neuron0x2184120()*0.16323);
}

double NNfunction_sb_uRcR::synapse0x21963b0() {
   return (neuron0x217f560()*-0.0482322);
}

double NNfunction_sb_uRcR::synapse0x21963f0() {
   return (neuron0x217f8a0()*-0.195752);
}

double NNfunction_sb_uRcR::synapse0x2196430() {
   return (neuron0x217fbe0()*-0.0994258);
}

double NNfunction_sb_uRcR::synapse0x2196470() {
   return (neuron0x217ff20()*3.73838);
}

double NNfunction_sb_uRcR::synapse0x21964b0() {
   return (neuron0x2180260()*-0.102492);
}

double NNfunction_sb_uRcR::synapse0x21964f0() {
   return (neuron0x21805a0()*0.00664153);
}

double NNfunction_sb_uRcR::synapse0x2196530() {
   return (neuron0x21808e0()*0.0967415);
}

double NNfunction_sb_uRcR::synapse0x2196570() {
   return (neuron0x2180c20()*-0.0882939);
}

double NNfunction_sb_uRcR::synapse0x21965b0() {
   return (neuron0x2180f60()*-0.0342597);
}

double NNfunction_sb_uRcR::synapse0x21965f0() {
   return (neuron0x21812a0()*0.0111362);
}

double NNfunction_sb_uRcR::synapse0x2196630() {
   return (neuron0x21815e0()*0.0131614);
}

double NNfunction_sb_uRcR::synapse0x2196670() {
   return (neuron0x2181920()*0.0683258);
}

double NNfunction_sb_uRcR::synapse0x21966b0() {
   return (neuron0x2181c60()*-0.0864103);
}

double NNfunction_sb_uRcR::synapse0x21966f0() {
   return (neuron0x2181fa0()*0.0213169);
}

double NNfunction_sb_uRcR::synapse0x2196730() {
   return (neuron0x21822e0()*-0.185514);
}

double NNfunction_sb_uRcR::synapse0x2196770() {
   return (neuron0x2182620()*-1.3119);
}

double NNfunction_sb_uRcR::synapse0x2196200() {
   return (neuron0x2182960()*-0.0707058);
}

double NNfunction_sb_uRcR::synapse0x2196240() {
   return (neuron0x2182ec0()*0.131562);
}

double NNfunction_sb_uRcR::synapse0x21968c0() {
   return (neuron0x21830e0()*0.10322);
}

double NNfunction_sb_uRcR::synapse0x2196900() {
   return (neuron0x2183420()*0.0103006);
}

double NNfunction_sb_uRcR::synapse0x2196940() {
   return (neuron0x2183760()*0.00156971);
}

double NNfunction_sb_uRcR::synapse0x2196980() {
   return (neuron0x2183aa0()*0.00942659);
}

double NNfunction_sb_uRcR::synapse0x21969c0() {
   return (neuron0x2183de0()*-0.0224585);
}

double NNfunction_sb_uRcR::synapse0x2196a00() {
   return (neuron0x2184120()*0.0584512);
}

double NNfunction_sb_uRcR::synapse0x2196d80() {
   return (neuron0x217f560()*0.0693523);
}

double NNfunction_sb_uRcR::synapse0x2196dc0() {
   return (neuron0x217f8a0()*-0.0943252);
}

double NNfunction_sb_uRcR::synapse0x2196e00() {
   return (neuron0x217fbe0()*0.167597);
}

double NNfunction_sb_uRcR::synapse0x2196e40() {
   return (neuron0x217ff20()*2.5966);
}

double NNfunction_sb_uRcR::synapse0x2196e80() {
   return (neuron0x2180260()*-0.0722243);
}

double NNfunction_sb_uRcR::synapse0x2196ec0() {
   return (neuron0x21805a0()*0.141592);
}

double NNfunction_sb_uRcR::synapse0x2196f00() {
   return (neuron0x21808e0()*-0.153297);
}

double NNfunction_sb_uRcR::synapse0x2196f40() {
   return (neuron0x2180c20()*0.086997);
}

double NNfunction_sb_uRcR::synapse0x2196f80() {
   return (neuron0x2180f60()*0.0567173);
}

double NNfunction_sb_uRcR::synapse0x2196fc0() {
   return (neuron0x21812a0()*0.0455789);
}

double NNfunction_sb_uRcR::synapse0x2197000() {
   return (neuron0x21815e0()*-0.133326);
}

double NNfunction_sb_uRcR::synapse0x2197040() {
   return (neuron0x2181920()*-0.0626401);
}

double NNfunction_sb_uRcR::synapse0x2197080() {
   return (neuron0x2181c60()*-0.0485792);
}

double NNfunction_sb_uRcR::synapse0x21970c0() {
   return (neuron0x2181fa0()*0.043425);
}

double NNfunction_sb_uRcR::synapse0x2197100() {
   return (neuron0x21822e0()*0.531683);
}

double NNfunction_sb_uRcR::synapse0x2197140() {
   return (neuron0x2182620()*1.15274);
}

double NNfunction_sb_uRcR::synapse0x2196bd0() {
   return (neuron0x2182960()*-0.0268321);
}

double NNfunction_sb_uRcR::synapse0x2196c10() {
   return (neuron0x2182ec0()*-0.0361477);
}

double NNfunction_sb_uRcR::synapse0x2197290() {
   return (neuron0x21830e0()*-0.0287011);
}

double NNfunction_sb_uRcR::synapse0x21972d0() {
   return (neuron0x2183420()*-0.0895724);
}

double NNfunction_sb_uRcR::synapse0x2197310() {
   return (neuron0x2183760()*-0.051703);
}

double NNfunction_sb_uRcR::synapse0x2197350() {
   return (neuron0x2183aa0()*-0.069763);
}

double NNfunction_sb_uRcR::synapse0x2197390() {
   return (neuron0x2183de0()*0.123928);
}

double NNfunction_sb_uRcR::synapse0x21973d0() {
   return (neuron0x2184120()*-0.0104736);
}

double NNfunction_sb_uRcR::synapse0x2197750() {
   return (neuron0x217f560()*-0.00918894);
}

double NNfunction_sb_uRcR::synapse0x2197790() {
   return (neuron0x217f8a0()*-0.0604471);
}

double NNfunction_sb_uRcR::synapse0x21977d0() {
   return (neuron0x217fbe0()*0.0218217);
}

double NNfunction_sb_uRcR::synapse0x2197810() {
   return (neuron0x217ff20()*-0.0859817);
}

double NNfunction_sb_uRcR::synapse0x2197850() {
   return (neuron0x2180260()*-0.0137346);
}

double NNfunction_sb_uRcR::synapse0x2197890() {
   return (neuron0x21805a0()*0.24954);
}

double NNfunction_sb_uRcR::synapse0x21978d0() {
   return (neuron0x21808e0()*0.0298967);
}

double NNfunction_sb_uRcR::synapse0x2197910() {
   return (neuron0x2180c20()*-0.042868);
}

double NNfunction_sb_uRcR::synapse0x2197950() {
   return (neuron0x2180f60()*0.0149433);
}

double NNfunction_sb_uRcR::synapse0x2197990() {
   return (neuron0x21812a0()*0.0343198);
}

double NNfunction_sb_uRcR::synapse0x21979d0() {
   return (neuron0x21815e0()*0.00611722);
}

double NNfunction_sb_uRcR::synapse0x2197a10() {
   return (neuron0x2181920()*0.0549188);
}

double NNfunction_sb_uRcR::synapse0x2197a50() {
   return (neuron0x2181c60()*-0.0135433);
}

double NNfunction_sb_uRcR::synapse0x2197a90() {
   return (neuron0x2181fa0()*0.0135345);
}

double NNfunction_sb_uRcR::synapse0x2197ad0() {
   return (neuron0x21822e0()*0.182616);
}

double NNfunction_sb_uRcR::synapse0x2197b10() {
   return (neuron0x2182620()*0.483753);
}

double NNfunction_sb_uRcR::synapse0x21975a0() {
   return (neuron0x2182960()*0.0550397);
}

double NNfunction_sb_uRcR::synapse0x21975e0() {
   return (neuron0x2182ec0()*0.0406667);
}

double NNfunction_sb_uRcR::synapse0x2197c60() {
   return (neuron0x21830e0()*0.00370618);
}

double NNfunction_sb_uRcR::synapse0x2197ca0() {
   return (neuron0x2183420()*-0.0081949);
}

double NNfunction_sb_uRcR::synapse0x2197ce0() {
   return (neuron0x2183760()*0.00418137);
}

double NNfunction_sb_uRcR::synapse0x2197d20() {
   return (neuron0x2183aa0()*-0.0252713);
}

double NNfunction_sb_uRcR::synapse0x2197d60() {
   return (neuron0x2183de0()*0.0186225);
}

double NNfunction_sb_uRcR::synapse0x2197da0() {
   return (neuron0x2184120()*0.0118233);
}

double NNfunction_sb_uRcR::synapse0x2198120() {
   return (neuron0x217f560()*-0.336916);
}

double NNfunction_sb_uRcR::synapse0x2198160() {
   return (neuron0x217f8a0()*-0.280622);
}

double NNfunction_sb_uRcR::synapse0x21981a0() {
   return (neuron0x217fbe0()*-0.296763);
}

double NNfunction_sb_uRcR::synapse0x21981e0() {
   return (neuron0x217ff20()*0.433832);
}

double NNfunction_sb_uRcR::synapse0x2198220() {
   return (neuron0x2180260()*0.732165);
}

double NNfunction_sb_uRcR::synapse0x2198260() {
   return (neuron0x21805a0()*-0.225067);
}

double NNfunction_sb_uRcR::synapse0x21982a0() {
   return (neuron0x21808e0()*-0.593761);
}

double NNfunction_sb_uRcR::synapse0x21982e0() {
   return (neuron0x2180c20()*0.0946205);
}

double NNfunction_sb_uRcR::synapse0x2198320() {
   return (neuron0x2180f60()*-0.104075);
}

double NNfunction_sb_uRcR::synapse0x2198360() {
   return (neuron0x21812a0()*-0.253505);
}

double NNfunction_sb_uRcR::synapse0x21983a0() {
   return (neuron0x21815e0()*-0.352385);
}

double NNfunction_sb_uRcR::synapse0x21983e0() {
   return (neuron0x2181920()*-0.918674);
}

double NNfunction_sb_uRcR::synapse0x2198420() {
   return (neuron0x2181c60()*0.309252);
}

double NNfunction_sb_uRcR::synapse0x2198460() {
   return (neuron0x2181fa0()*-0.0439188);
}

double NNfunction_sb_uRcR::synapse0x21984a0() {
   return (neuron0x21822e0()*-0.128889);
}

double NNfunction_sb_uRcR::synapse0x21984e0() {
   return (neuron0x2182620()*0.0795929);
}

double NNfunction_sb_uRcR::synapse0x2197f70() {
   return (neuron0x2182960()*-1.61948);
}

double NNfunction_sb_uRcR::synapse0x2197fb0() {
   return (neuron0x2182ec0()*-0.523206);
}

double NNfunction_sb_uRcR::synapse0x2198630() {
   return (neuron0x21830e0()*-0.0551701);
}

double NNfunction_sb_uRcR::synapse0x2198670() {
   return (neuron0x2183420()*0.511136);
}

double NNfunction_sb_uRcR::synapse0x21986b0() {
   return (neuron0x2183760()*-0.663276);
}

double NNfunction_sb_uRcR::synapse0x21986f0() {
   return (neuron0x2183aa0()*-0.35367);
}

double NNfunction_sb_uRcR::synapse0x2198730() {
   return (neuron0x2183de0()*0.528235);
}

double NNfunction_sb_uRcR::synapse0x2198770() {
   return (neuron0x2184120()*0.541216);
}

double NNfunction_sb_uRcR::synapse0x2198af0() {
   return (neuron0x217f560()*0.0250814);
}

double NNfunction_sb_uRcR::synapse0x2198b30() {
   return (neuron0x217f8a0()*-0.0115427);
}

double NNfunction_sb_uRcR::synapse0x2198b70() {
   return (neuron0x217fbe0()*-0.0129143);
}

double NNfunction_sb_uRcR::synapse0x2198bb0() {
   return (neuron0x217ff20()*0.00792502);
}

double NNfunction_sb_uRcR::synapse0x2198bf0() {
   return (neuron0x2180260()*0.00404267);
}

double NNfunction_sb_uRcR::synapse0x2198c30() {
   return (neuron0x21805a0()*0.00946082);
}

double NNfunction_sb_uRcR::synapse0x2198c70() {
   return (neuron0x21808e0()*-0.00781897);
}

double NNfunction_sb_uRcR::synapse0x2198cb0() {
   return (neuron0x2180c20()*0.043832);
}

double NNfunction_sb_uRcR::synapse0x2198cf0() {
   return (neuron0x2180f60()*-0.00589647);
}

double NNfunction_sb_uRcR::synapse0x2198d30() {
   return (neuron0x21812a0()*0.00759815);
}

double NNfunction_sb_uRcR::synapse0x2198d70() {
   return (neuron0x21815e0()*0.0101122);
}

double NNfunction_sb_uRcR::synapse0x2198db0() {
   return (neuron0x2181920()*-0.0307548);
}

double NNfunction_sb_uRcR::synapse0x2198df0() {
   return (neuron0x2181c60()*-0.0392922);
}

double NNfunction_sb_uRcR::synapse0x2198e30() {
   return (neuron0x2181fa0()*-0.00975562);
}

double NNfunction_sb_uRcR::synapse0x2198e70() {
   return (neuron0x21822e0()*-2.06088);
}

double NNfunction_sb_uRcR::synapse0x2198eb0() {
   return (neuron0x2182620()*0.0257653);
}

double NNfunction_sb_uRcR::synapse0x2198940() {
   return (neuron0x2182960()*-0.0365198);
}

double NNfunction_sb_uRcR::synapse0x2198980() {
   return (neuron0x2182ec0()*0.050908);
}

double NNfunction_sb_uRcR::synapse0x2199000() {
   return (neuron0x21830e0()*-0.0159106);
}

double NNfunction_sb_uRcR::synapse0x2199040() {
   return (neuron0x2183420()*-0.0538516);
}

double NNfunction_sb_uRcR::synapse0x2199080() {
   return (neuron0x2183760()*0.0114214);
}

double NNfunction_sb_uRcR::synapse0x21990c0() {
   return (neuron0x2183aa0()*-0.0219856);
}

double NNfunction_sb_uRcR::synapse0x2199100() {
   return (neuron0x2183de0()*0.00905361);
}

double NNfunction_sb_uRcR::synapse0x2199140() {
   return (neuron0x2184120()*-0.000346976);
}

double NNfunction_sb_uRcR::synapse0x21994c0() {
   return (neuron0x217f560()*0.0139457);
}

double NNfunction_sb_uRcR::synapse0x2199500() {
   return (neuron0x217f8a0()*0.00995545);
}

double NNfunction_sb_uRcR::synapse0x2199540() {
   return (neuron0x217fbe0()*-0.00367583);
}

double NNfunction_sb_uRcR::synapse0x2199580() {
   return (neuron0x217ff20()*3.07759);
}

double NNfunction_sb_uRcR::synapse0x21995c0() {
   return (neuron0x2180260()*-0.00938162);
}

double NNfunction_sb_uRcR::synapse0x2199600() {
   return (neuron0x21805a0()*0.0370551);
}

double NNfunction_sb_uRcR::synapse0x2199640() {
   return (neuron0x21808e0()*-0.0353013);
}

double NNfunction_sb_uRcR::synapse0x2199680() {
   return (neuron0x2180c20()*0.0433624);
}

double NNfunction_sb_uRcR::synapse0x21996c0() {
   return (neuron0x2180f60()*0.041);
}

double NNfunction_sb_uRcR::synapse0x2199700() {
   return (neuron0x21812a0()*0.00936469);
}

double NNfunction_sb_uRcR::synapse0x2199740() {
   return (neuron0x21815e0()*-0.00369493);
}

double NNfunction_sb_uRcR::synapse0x2199780() {
   return (neuron0x2181920()*0.0279991);
}

double NNfunction_sb_uRcR::synapse0x21997c0() {
   return (neuron0x2181c60()*0.031828);
}

double NNfunction_sb_uRcR::synapse0x2199800() {
   return (neuron0x2181fa0()*0.0454781);
}

double NNfunction_sb_uRcR::synapse0x2199840() {
   return (neuron0x21822e0()*-0.0632553);
}

double NNfunction_sb_uRcR::synapse0x2199880() {
   return (neuron0x2182620()*-0.100497);
}

double NNfunction_sb_uRcR::synapse0x2199310() {
   return (neuron0x2182960()*0.0140975);
}

double NNfunction_sb_uRcR::synapse0x2199350() {
   return (neuron0x2182ec0()*-0.0282842);
}

double NNfunction_sb_uRcR::synapse0x21999d0() {
   return (neuron0x21830e0()*0.00112383);
}

double NNfunction_sb_uRcR::synapse0x2199a10() {
   return (neuron0x2183420()*0.0206537);
}

double NNfunction_sb_uRcR::synapse0x2199a50() {
   return (neuron0x2183760()*-0.0133568);
}

double NNfunction_sb_uRcR::synapse0x2199a90() {
   return (neuron0x2183aa0()*-0.0240791);
}

double NNfunction_sb_uRcR::synapse0x2199ad0() {
   return (neuron0x2183de0()*0.023986);
}

double NNfunction_sb_uRcR::synapse0x2199b10() {
   return (neuron0x2184120()*-0.0511411);
}

double NNfunction_sb_uRcR::synapse0x2199e90() {
   return (neuron0x217f560()*0.102192);
}

double NNfunction_sb_uRcR::synapse0x218e460() {
   return (neuron0x217f8a0()*-0.85566);
}

double NNfunction_sb_uRcR::synapse0x218e4a0() {
   return (neuron0x217fbe0()*0.159754);
}

double NNfunction_sb_uRcR::synapse0x218e4e0() {
   return (neuron0x217ff20()*1.09997);
}

double NNfunction_sb_uRcR::synapse0x218e730() {
   return (neuron0x2180260()*-0.244648);
}

double NNfunction_sb_uRcR::synapse0x218e770() {
   return (neuron0x21805a0()*0.0134906);
}

double NNfunction_sb_uRcR::synapse0x218e7b0() {
   return (neuron0x21808e0()*0.114074);
}

double NNfunction_sb_uRcR::synapse0x218ea00() {
   return (neuron0x2180c20()*-0.0233135);
}

double NNfunction_sb_uRcR::synapse0x218ea40() {
   return (neuron0x2180f60()*0.374718);
}

double NNfunction_sb_uRcR::synapse0x218ec90() {
   return (neuron0x21812a0()*0.582963);
}

double NNfunction_sb_uRcR::synapse0x218ecd0() {
   return (neuron0x21815e0()*-0.254345);
}

double NNfunction_sb_uRcR::synapse0x218ed10() {
   return (neuron0x2181920()*-0.0367976);
}

double NNfunction_sb_uRcR::synapse0x218ef60() {
   return (neuron0x2181c60()*-0.470565);
}

double NNfunction_sb_uRcR::synapse0x218efa0() {
   return (neuron0x2181fa0()*0.113443);
}

double NNfunction_sb_uRcR::synapse0x218f1f0() {
   return (neuron0x21822e0()*-1.15821);
}

double NNfunction_sb_uRcR::synapse0x218f230() {
   return (neuron0x2182620()*-0.356262);
}

double NNfunction_sb_uRcR::synapse0x2199ce0() {
   return (neuron0x2182960()*0.338905);
}

double NNfunction_sb_uRcR::synapse0x2199d20() {
   return (neuron0x2182ec0()*0.397377);
}

double NNfunction_sb_uRcR::synapse0x218f380() {
   return (neuron0x21830e0()*0.565502);
}

double NNfunction_sb_uRcR::synapse0x218f890() {
   return (neuron0x2183420()*0.182608);
}

double NNfunction_sb_uRcR::synapse0x218f8d0() {
   return (neuron0x2183760()*0.129096);
}

double NNfunction_sb_uRcR::synapse0x218f910() {
   return (neuron0x2183aa0()*-0.475629);
}

double NNfunction_sb_uRcR::synapse0x218fb60() {
   return (neuron0x2183de0()*-0.620616);
}

double NNfunction_sb_uRcR::synapse0x218fba0() {
   return (neuron0x2184120()*0.417902);
}

double NNfunction_sb_uRcR::synapse0x218f450() {
   return (neuron0x217f560()*-0.19618);
}

double NNfunction_sb_uRcR::synapse0x218f490() {
   return (neuron0x217f8a0()*-0.0387377);
}

double NNfunction_sb_uRcR::synapse0x218f4d0() {
   return (neuron0x217fbe0()*0.0556721);
}

double NNfunction_sb_uRcR::synapse0x218f510() {
   return (neuron0x217ff20()*-3.70559);
}

double NNfunction_sb_uRcR::synapse0x218fe90() {
   return (neuron0x2180260()*0.0718871);
}

double NNfunction_sb_uRcR::synapse0x219c1e0() {
   return (neuron0x21805a0()*-0.20177);
}

double NNfunction_sb_uRcR::synapse0x219c220() {
   return (neuron0x21808e0()*0.160156);
}

double NNfunction_sb_uRcR::synapse0x219c260() {
   return (neuron0x2180c20()*0.0850125);
}

double NNfunction_sb_uRcR::synapse0x219c2a0() {
   return (neuron0x2180f60()*-0.0972098);
}

double NNfunction_sb_uRcR::synapse0x219c2e0() {
   return (neuron0x21812a0()*-0.11514);
}

double NNfunction_sb_uRcR::synapse0x219c320() {
   return (neuron0x21815e0()*-0.0772015);
}

double NNfunction_sb_uRcR::synapse0x219c360() {
   return (neuron0x2181920()*-0.094568);
}

double NNfunction_sb_uRcR::synapse0x219c3a0() {
   return (neuron0x2181c60()*-0.386336);
}

double NNfunction_sb_uRcR::synapse0x219c3e0() {
   return (neuron0x2181fa0()*-0.147391);
}

double NNfunction_sb_uRcR::synapse0x219c420() {
   return (neuron0x21822e0()*1.93137);
}

double NNfunction_sb_uRcR::synapse0x219c460() {
   return (neuron0x2182620()*0.150719);
}

double NNfunction_sb_uRcR::synapse0x218fd70() {
   return (neuron0x2182960()*0.139066);
}

double NNfunction_sb_uRcR::synapse0x218fdb0() {
   return (neuron0x2182ec0()*-0.178575);
}

double NNfunction_sb_uRcR::synapse0x219c5b0() {
   return (neuron0x21830e0()*-0.108271);
}

double NNfunction_sb_uRcR::synapse0x219c5f0() {
   return (neuron0x2183420()*-0.103808);
}

double NNfunction_sb_uRcR::synapse0x219c630() {
   return (neuron0x2183760()*-0.0301634);
}

double NNfunction_sb_uRcR::synapse0x219c670() {
   return (neuron0x2183aa0()*-0.0279876);
}

double NNfunction_sb_uRcR::synapse0x219c6b0() {
   return (neuron0x2183de0()*0.119868);
}

double NNfunction_sb_uRcR::synapse0x219c6f0() {
   return (neuron0x2184120()*-0.0216858);
}

double NNfunction_sb_uRcR::synapse0x219ca70() {
   return (neuron0x217f560()*-0.00890506);
}

double NNfunction_sb_uRcR::synapse0x219cab0() {
   return (neuron0x217f8a0()*0.114039);
}

double NNfunction_sb_uRcR::synapse0x219caf0() {
   return (neuron0x217fbe0()*-0.00948266);
}

double NNfunction_sb_uRcR::synapse0x219cb30() {
   return (neuron0x217ff20()*0.568913);
}

double NNfunction_sb_uRcR::synapse0x219cb70() {
   return (neuron0x2180260()*-0.0312293);
}

double NNfunction_sb_uRcR::synapse0x219cbb0() {
   return (neuron0x21805a0()*0.0544679);
}

double NNfunction_sb_uRcR::synapse0x219cbf0() {
   return (neuron0x21808e0()*-0.00320496);
}

double NNfunction_sb_uRcR::synapse0x219cc30() {
   return (neuron0x2180c20()*0.0818287);
}

double NNfunction_sb_uRcR::synapse0x219cc70() {
   return (neuron0x2180f60()*-0.0403282);
}

double NNfunction_sb_uRcR::synapse0x219ccb0() {
   return (neuron0x21812a0()*0.0899004);
}

double NNfunction_sb_uRcR::synapse0x219ccf0() {
   return (neuron0x21815e0()*-0.0272806);
}

double NNfunction_sb_uRcR::synapse0x219cd30() {
   return (neuron0x2181920()*-0.171548);
}

double NNfunction_sb_uRcR::synapse0x219cd70() {
   return (neuron0x2181c60()*-0.134553);
}

double NNfunction_sb_uRcR::synapse0x219cdb0() {
   return (neuron0x2181fa0()*0.0595411);
}

double NNfunction_sb_uRcR::synapse0x219cdf0() {
   return (neuron0x21822e0()*-0.203307);
}

double NNfunction_sb_uRcR::synapse0x219ce30() {
   return (neuron0x2182620()*-0.0623915);
}

double NNfunction_sb_uRcR::synapse0x219c8c0() {
   return (neuron0x2182960()*0.026172);
}

double NNfunction_sb_uRcR::synapse0x219c900() {
   return (neuron0x2182ec0()*-0.158992);
}

double NNfunction_sb_uRcR::synapse0x219cf80() {
   return (neuron0x21830e0()*-0.257027);
}

double NNfunction_sb_uRcR::synapse0x219cfc0() {
   return (neuron0x2183420()*0.00192093);
}

double NNfunction_sb_uRcR::synapse0x219d000() {
   return (neuron0x2183760()*0.00270731);
}

double NNfunction_sb_uRcR::synapse0x219d040() {
   return (neuron0x2183aa0()*-0.0360625);
}

double NNfunction_sb_uRcR::synapse0x219d080() {
   return (neuron0x2183de0()*0.014487);
}

double NNfunction_sb_uRcR::synapse0x219d0c0() {
   return (neuron0x2184120()*-0.033523);
}

double NNfunction_sb_uRcR::synapse0x219d440() {
   return (neuron0x217f560()*-0.280034);
}

double NNfunction_sb_uRcR::synapse0x219d480() {
   return (neuron0x217f8a0()*0.987756);
}

double NNfunction_sb_uRcR::synapse0x219d4c0() {
   return (neuron0x217fbe0()*0.639057);
}

double NNfunction_sb_uRcR::synapse0x219d500() {
   return (neuron0x217ff20()*0.309053);
}

double NNfunction_sb_uRcR::synapse0x219d540() {
   return (neuron0x2180260()*0.213929);
}

double NNfunction_sb_uRcR::synapse0x219d580() {
   return (neuron0x21805a0()*-0.472216);
}

double NNfunction_sb_uRcR::synapse0x219d5c0() {
   return (neuron0x21808e0()*-0.0315152);
}

double NNfunction_sb_uRcR::synapse0x219d600() {
   return (neuron0x2180c20()*-0.515121);
}

double NNfunction_sb_uRcR::synapse0x219d640() {
   return (neuron0x2180f60()*-0.100165);
}

double NNfunction_sb_uRcR::synapse0x219d680() {
   return (neuron0x21812a0()*0.050022);
}

double NNfunction_sb_uRcR::synapse0x219d6c0() {
   return (neuron0x21815e0()*-0.399668);
}

double NNfunction_sb_uRcR::synapse0x219d700() {
   return (neuron0x2181920()*0.148048);
}

double NNfunction_sb_uRcR::synapse0x219d740() {
   return (neuron0x2181c60()*0.221404);
}

double NNfunction_sb_uRcR::synapse0x219d780() {
   return (neuron0x2181fa0()*-0.958502);
}

double NNfunction_sb_uRcR::synapse0x219d7c0() {
   return (neuron0x21822e0()*0.401707);
}

double NNfunction_sb_uRcR::synapse0x219d800() {
   return (neuron0x2182620()*0.0212037);
}

double NNfunction_sb_uRcR::synapse0x219d290() {
   return (neuron0x2182960()*-0.568425);
}

double NNfunction_sb_uRcR::synapse0x219d2d0() {
   return (neuron0x2182ec0()*-0.186816);
}

double NNfunction_sb_uRcR::synapse0x219d950() {
   return (neuron0x21830e0()*0.0264512);
}

double NNfunction_sb_uRcR::synapse0x219d990() {
   return (neuron0x2183420()*0.271238);
}

double NNfunction_sb_uRcR::synapse0x219d9d0() {
   return (neuron0x2183760()*0.170748);
}

double NNfunction_sb_uRcR::synapse0x219da10() {
   return (neuron0x2183aa0()*0.0995696);
}

double NNfunction_sb_uRcR::synapse0x219da50() {
   return (neuron0x2183de0()*-0.0271495);
}

double NNfunction_sb_uRcR::synapse0x219da90() {
   return (neuron0x2184120()*0.279738);
}

double NNfunction_sb_uRcR::synapse0x219de10() {
   return (neuron0x217f560()*-0.0415001);
}

double NNfunction_sb_uRcR::synapse0x219de50() {
   return (neuron0x217f8a0()*-0.0214954);
}

double NNfunction_sb_uRcR::synapse0x219de90() {
   return (neuron0x217fbe0()*-0.0306235);
}

double NNfunction_sb_uRcR::synapse0x219ded0() {
   return (neuron0x217ff20()*-1.09575);
}

double NNfunction_sb_uRcR::synapse0x219df10() {
   return (neuron0x2180260()*0.00732164);
}

double NNfunction_sb_uRcR::synapse0x219df50() {
   return (neuron0x21805a0()*-0.119872);
}

double NNfunction_sb_uRcR::synapse0x219df90() {
   return (neuron0x21808e0()*0.230466);
}

double NNfunction_sb_uRcR::synapse0x219dfd0() {
   return (neuron0x2180c20()*-0.118376);
}

double NNfunction_sb_uRcR::synapse0x219e010() {
   return (neuron0x2180f60()*-0.0468911);
}

double NNfunction_sb_uRcR::synapse0x219e050() {
   return (neuron0x21812a0()*-0.0869598);
}

double NNfunction_sb_uRcR::synapse0x219e090() {
   return (neuron0x21815e0()*-0.0477622);
}

double NNfunction_sb_uRcR::synapse0x219e0d0() {
   return (neuron0x2181920()*0.102683);
}

double NNfunction_sb_uRcR::synapse0x219e110() {
   return (neuron0x2181c60()*-0.102353);
}

double NNfunction_sb_uRcR::synapse0x219e150() {
   return (neuron0x2181fa0()*0.0106278);
}

double NNfunction_sb_uRcR::synapse0x219e190() {
   return (neuron0x21822e0()*0.560567);
}

double NNfunction_sb_uRcR::synapse0x219e1d0() {
   return (neuron0x2182620()*-0.200799);
}

double NNfunction_sb_uRcR::synapse0x219dc60() {
   return (neuron0x2182960()*0.0177298);
}

double NNfunction_sb_uRcR::synapse0x219dca0() {
   return (neuron0x2182ec0()*-0.0210951);
}

double NNfunction_sb_uRcR::synapse0x219e320() {
   return (neuron0x21830e0()*-0.00423963);
}

double NNfunction_sb_uRcR::synapse0x219e360() {
   return (neuron0x2183420()*-0.0136713);
}

double NNfunction_sb_uRcR::synapse0x219e3a0() {
   return (neuron0x2183760()*0.0230763);
}

double NNfunction_sb_uRcR::synapse0x219e3e0() {
   return (neuron0x2183aa0()*-0.00705599);
}

double NNfunction_sb_uRcR::synapse0x219e420() {
   return (neuron0x2183de0()*0.00171991);
}

double NNfunction_sb_uRcR::synapse0x219e460() {
   return (neuron0x2184120()*0.0146239);
}

double NNfunction_sb_uRcR::synapse0x219e7e0() {
   return (neuron0x217f560()*0.0212402);
}

double NNfunction_sb_uRcR::synapse0x219e820() {
   return (neuron0x217f8a0()*0.00203129);
}

double NNfunction_sb_uRcR::synapse0x219e860() {
   return (neuron0x217fbe0()*0.0299837);
}

double NNfunction_sb_uRcR::synapse0x219e8a0() {
   return (neuron0x217ff20()*-0.0672963);
}

double NNfunction_sb_uRcR::synapse0x219e8e0() {
   return (neuron0x2180260()*0.120597);
}

double NNfunction_sb_uRcR::synapse0x219e920() {
   return (neuron0x21805a0()*-0.0151803);
}

double NNfunction_sb_uRcR::synapse0x219e960() {
   return (neuron0x21808e0()*-0.0308115);
}

double NNfunction_sb_uRcR::synapse0x219e9a0() {
   return (neuron0x2180c20()*-0.0272459);
}

double NNfunction_sb_uRcR::synapse0x219e9e0() {
   return (neuron0x2180f60()*-0.00614431);
}

double NNfunction_sb_uRcR::synapse0x219ea20() {
   return (neuron0x21812a0()*-0.0132088);
}

double NNfunction_sb_uRcR::synapse0x219ea60() {
   return (neuron0x21815e0()*0.00429693);
}

double NNfunction_sb_uRcR::synapse0x219eaa0() {
   return (neuron0x2181920()*-0.038984);
}

double NNfunction_sb_uRcR::synapse0x219eae0() {
   return (neuron0x2181c60()*-0.0127395);
}

double NNfunction_sb_uRcR::synapse0x219eb20() {
   return (neuron0x2181fa0()*0.0268912);
}

double NNfunction_sb_uRcR::synapse0x219eb60() {
   return (neuron0x21822e0()*-1.57078);
}

double NNfunction_sb_uRcR::synapse0x219eba0() {
   return (neuron0x2182620()*-0.0908858);
}

double NNfunction_sb_uRcR::synapse0x219e630() {
   return (neuron0x2182960()*0.00911573);
}

double NNfunction_sb_uRcR::synapse0x219e670() {
   return (neuron0x2182ec0()*0.0193013);
}

double NNfunction_sb_uRcR::synapse0x219ecf0() {
   return (neuron0x21830e0()*-0.0237071);
}

double NNfunction_sb_uRcR::synapse0x219ed30() {
   return (neuron0x2183420()*-0.0265822);
}

double NNfunction_sb_uRcR::synapse0x219ed70() {
   return (neuron0x2183760()*0.00697799);
}

double NNfunction_sb_uRcR::synapse0x219edb0() {
   return (neuron0x2183aa0()*-0.0168641);
}

double NNfunction_sb_uRcR::synapse0x219edf0() {
   return (neuron0x2183de0()*0.028269);
}

double NNfunction_sb_uRcR::synapse0x219ee30() {
   return (neuron0x2184120()*0.0156462);
}

double NNfunction_sb_uRcR::synapse0x219f1b0() {
   return (neuron0x217f560()*0.0520512);
}

double NNfunction_sb_uRcR::synapse0x219f1f0() {
   return (neuron0x217f8a0()*-0.104851);
}

double NNfunction_sb_uRcR::synapse0x219f230() {
   return (neuron0x217fbe0()*0.0177664);
}

double NNfunction_sb_uRcR::synapse0x219f270() {
   return (neuron0x217ff20()*-8.89051);
}

double NNfunction_sb_uRcR::synapse0x219f2b0() {
   return (neuron0x2180260()*0.0112359);
}

double NNfunction_sb_uRcR::synapse0x219f2f0() {
   return (neuron0x21805a0()*0.130438);
}

double NNfunction_sb_uRcR::synapse0x219f330() {
   return (neuron0x21808e0()*0.0374671);
}

double NNfunction_sb_uRcR::synapse0x219f370() {
   return (neuron0x2180c20()*0.0228773);
}

double NNfunction_sb_uRcR::synapse0x219f3b0() {
   return (neuron0x2180f60()*0.0222264);
}

double NNfunction_sb_uRcR::synapse0x219f3f0() {
   return (neuron0x21812a0()*-0.00295749);
}

double NNfunction_sb_uRcR::synapse0x219f430() {
   return (neuron0x21815e0()*-0.0250611);
}

double NNfunction_sb_uRcR::synapse0x219f470() {
   return (neuron0x2181920()*-0.00641017);
}

double NNfunction_sb_uRcR::synapse0x219f4b0() {
   return (neuron0x2181c60()*-0.0353098);
}

double NNfunction_sb_uRcR::synapse0x219f4f0() {
   return (neuron0x2181fa0()*0.0875192);
}

double NNfunction_sb_uRcR::synapse0x219f530() {
   return (neuron0x21822e0()*0.272755);
}

double NNfunction_sb_uRcR::synapse0x219f570() {
   return (neuron0x2182620()*0.253075);
}

double NNfunction_sb_uRcR::synapse0x219f000() {
   return (neuron0x2182960()*-0.024639);
}

double NNfunction_sb_uRcR::synapse0x219f040() {
   return (neuron0x2182ec0()*0.104977);
}

double NNfunction_sb_uRcR::synapse0x219f6c0() {
   return (neuron0x21830e0()*0.0201654);
}

double NNfunction_sb_uRcR::synapse0x219f700() {
   return (neuron0x2183420()*-0.00697661);
}

double NNfunction_sb_uRcR::synapse0x219f740() {
   return (neuron0x2183760()*-0.0119454);
}

double NNfunction_sb_uRcR::synapse0x219f780() {
   return (neuron0x2183aa0()*-0.0363311);
}

double NNfunction_sb_uRcR::synapse0x219f7c0() {
   return (neuron0x2183de0()*-0.0169821);
}

double NNfunction_sb_uRcR::synapse0x219f800() {
   return (neuron0x2184120()*-0.0263536);
}

double NNfunction_sb_uRcR::synapse0x219fb80() {
   return (neuron0x217f560()*0.043788);
}

double NNfunction_sb_uRcR::synapse0x219fbc0() {
   return (neuron0x217f8a0()*-0.0204258);
}

double NNfunction_sb_uRcR::synapse0x219fc00() {
   return (neuron0x217fbe0()*-0.0495042);
}

double NNfunction_sb_uRcR::synapse0x219fc40() {
   return (neuron0x217ff20()*-0.862527);
}

double NNfunction_sb_uRcR::synapse0x219fc80() {
   return (neuron0x2180260()*-0.18279);
}

double NNfunction_sb_uRcR::synapse0x219fcc0() {
   return (neuron0x21805a0()*-0.0431569);
}

double NNfunction_sb_uRcR::synapse0x219fd00() {
   return (neuron0x21808e0()*0.0498098);
}

double NNfunction_sb_uRcR::synapse0x219fd40() {
   return (neuron0x2180c20()*-0.170716);
}

double NNfunction_sb_uRcR::synapse0x219fd80() {
   return (neuron0x2180f60()*-0.0142455);
}

double NNfunction_sb_uRcR::synapse0x219fdc0() {
   return (neuron0x21812a0()*-0.0313359);
}

double NNfunction_sb_uRcR::synapse0x219fe00() {
   return (neuron0x21815e0()*0.0095703);
}

double NNfunction_sb_uRcR::synapse0x219fe40() {
   return (neuron0x2181920()*-0.117878);
}

double NNfunction_sb_uRcR::synapse0x219fe80() {
   return (neuron0x2181c60()*-0.103845);
}

double NNfunction_sb_uRcR::synapse0x219fec0() {
   return (neuron0x2181fa0()*0.00536466);
}

double NNfunction_sb_uRcR::synapse0x219ff00() {
   return (neuron0x21822e0()*-0.10383);
}

double NNfunction_sb_uRcR::synapse0x219ff40() {
   return (neuron0x2182620()*0.0645811);
}

double NNfunction_sb_uRcR::synapse0x219f9d0() {
   return (neuron0x2182960()*-0.184555);
}

double NNfunction_sb_uRcR::synapse0x219fa10() {
   return (neuron0x2182ec0()*-0.200583);
}

double NNfunction_sb_uRcR::synapse0x21a0090() {
   return (neuron0x21830e0()*-0.125053);
}

double NNfunction_sb_uRcR::synapse0x21a00d0() {
   return (neuron0x2183420()*-0.0122219);
}

double NNfunction_sb_uRcR::synapse0x21a0110() {
   return (neuron0x2183760()*-0.0229035);
}

double NNfunction_sb_uRcR::synapse0x21a0150() {
   return (neuron0x2183aa0()*0.133349);
}

double NNfunction_sb_uRcR::synapse0x21a0190() {
   return (neuron0x2183de0()*0.00165618);
}

double NNfunction_sb_uRcR::synapse0x21a01d0() {
   return (neuron0x2184120()*-0.0219989);
}

double NNfunction_sb_uRcR::synapse0x21a0550() {
   return (neuron0x217f560()*0.284461);
}

double NNfunction_sb_uRcR::synapse0x21a0590() {
   return (neuron0x217f8a0()*-0.464684);
}

double NNfunction_sb_uRcR::synapse0x21a05d0() {
   return (neuron0x217fbe0()*-0.0345189);
}

double NNfunction_sb_uRcR::synapse0x21a0610() {
   return (neuron0x217ff20()*0.0994862);
}

double NNfunction_sb_uRcR::synapse0x21a0650() {
   return (neuron0x2180260()*-0.392135);
}

double NNfunction_sb_uRcR::synapse0x21a0690() {
   return (neuron0x21805a0()*-0.13238);
}

double NNfunction_sb_uRcR::synapse0x21a06d0() {
   return (neuron0x21808e0()*-0.249079);
}

double NNfunction_sb_uRcR::synapse0x21a0710() {
   return (neuron0x2180c20()*0.0623153);
}

double NNfunction_sb_uRcR::synapse0x21a0750() {
   return (neuron0x2180f60()*0.185118);
}

double NNfunction_sb_uRcR::synapse0x21a0790() {
   return (neuron0x21812a0()*-0.0402234);
}

double NNfunction_sb_uRcR::synapse0x21a07d0() {
   return (neuron0x21815e0()*-0.0262691);
}

double NNfunction_sb_uRcR::synapse0x21a0810() {
   return (neuron0x2181920()*-0.268031);
}

double NNfunction_sb_uRcR::synapse0x21a0850() {
   return (neuron0x2181c60()*-0.0956721);
}

double NNfunction_sb_uRcR::synapse0x21a0890() {
   return (neuron0x2181fa0()*0.16749);
}

double NNfunction_sb_uRcR::synapse0x21a08d0() {
   return (neuron0x21822e0()*-1.44551);
}

double NNfunction_sb_uRcR::synapse0x21a0910() {
   return (neuron0x2182620()*-0.927759);
}

double NNfunction_sb_uRcR::synapse0x21a03a0() {
   return (neuron0x2182960()*0.172413);
}

double NNfunction_sb_uRcR::synapse0x21a03e0() {
   return (neuron0x2182ec0()*0.290098);
}

double NNfunction_sb_uRcR::synapse0x21a0a60() {
   return (neuron0x21830e0()*-0.532526);
}

double NNfunction_sb_uRcR::synapse0x21a0aa0() {
   return (neuron0x2183420()*0.0602949);
}

double NNfunction_sb_uRcR::synapse0x21a0ae0() {
   return (neuron0x2183760()*-0.319262);
}

double NNfunction_sb_uRcR::synapse0x21a0b20() {
   return (neuron0x2183aa0()*0.259252);
}

double NNfunction_sb_uRcR::synapse0x21a0b60() {
   return (neuron0x2183de0()*0.437554);
}

double NNfunction_sb_uRcR::synapse0x21a0ba0() {
   return (neuron0x2184120()*0.801855);
}

double NNfunction_sb_uRcR::synapse0x2189650() {
   return (neuron0x217f560()*0.00385895);
}

double NNfunction_sb_uRcR::synapse0x2189690() {
   return (neuron0x217f8a0()*0.26452);
}

double NNfunction_sb_uRcR::synapse0x21896d0() {
   return (neuron0x217fbe0()*0.221825);
}

double NNfunction_sb_uRcR::synapse0x2189710() {
   return (neuron0x217ff20()*0.232194);
}

double NNfunction_sb_uRcR::synapse0x2189750() {
   return (neuron0x2180260()*-0.110639);
}

double NNfunction_sb_uRcR::synapse0x2189790() {
   return (neuron0x21805a0()*-0.119249);
}

double NNfunction_sb_uRcR::synapse0x21897d0() {
   return (neuron0x21808e0()*-0.168017);
}

double NNfunction_sb_uRcR::synapse0x2189810() {
   return (neuron0x2180c20()*-0.250758);
}

double NNfunction_sb_uRcR::synapse0x21a1330() {
   return (neuron0x2180f60()*0.0319723);
}

double NNfunction_sb_uRcR::synapse0x21a1370() {
   return (neuron0x21812a0()*0.554982);
}

double NNfunction_sb_uRcR::synapse0x21a13b0() {
   return (neuron0x21815e0()*0.885816);
}

double NNfunction_sb_uRcR::synapse0x21a13f0() {
   return (neuron0x2181920()*-0.203303);
}

double NNfunction_sb_uRcR::synapse0x21a1430() {
   return (neuron0x2181c60()*-0.181627);
}

double NNfunction_sb_uRcR::synapse0x21a1470() {
   return (neuron0x2181fa0()*0.324344);
}

double NNfunction_sb_uRcR::synapse0x21a14b0() {
   return (neuron0x21822e0()*-0.016358);
}

double NNfunction_sb_uRcR::synapse0x21a14f0() {
   return (neuron0x2182620()*0.123329);
}

double NNfunction_sb_uRcR::synapse0x21a0d70() {
   return (neuron0x2182960()*0.0343838);
}

double NNfunction_sb_uRcR::synapse0x21a0db0() {
   return (neuron0x2182ec0()*-0.17094);
}

double NNfunction_sb_uRcR::synapse0x21a1640() {
   return (neuron0x21830e0()*0.247498);
}

double NNfunction_sb_uRcR::synapse0x21a1680() {
   return (neuron0x2183420()*0.0917349);
}

double NNfunction_sb_uRcR::synapse0x21a16c0() {
   return (neuron0x2183760()*0.281213);
}

double NNfunction_sb_uRcR::synapse0x21a1700() {
   return (neuron0x2183aa0()*0.104562);
}

double NNfunction_sb_uRcR::synapse0x21a1740() {
   return (neuron0x2183de0()*-0.0207609);
}

double NNfunction_sb_uRcR::synapse0x21a1780() {
   return (neuron0x2184120()*0.316723);
}

double NNfunction_sb_uRcR::synapse0x21a1b00() {
   return (neuron0x217f560()*-1.03102);
}

double NNfunction_sb_uRcR::synapse0x21a1b40() {
   return (neuron0x217f8a0()*-0.239605);
}

double NNfunction_sb_uRcR::synapse0x21a1b80() {
   return (neuron0x217fbe0()*-0.312437);
}

double NNfunction_sb_uRcR::synapse0x21a1bc0() {
   return (neuron0x217ff20()*-1.36615);
}

double NNfunction_sb_uRcR::synapse0x21a1c00() {
   return (neuron0x2180260()*-0.253231);
}

double NNfunction_sb_uRcR::synapse0x21a1c40() {
   return (neuron0x21805a0()*-0.325227);
}

double NNfunction_sb_uRcR::synapse0x21a1c80() {
   return (neuron0x21808e0()*-1.11363);
}

double NNfunction_sb_uRcR::synapse0x21a1cc0() {
   return (neuron0x2180c20()*-0.493762);
}

double NNfunction_sb_uRcR::synapse0x21a1d00() {
   return (neuron0x2180f60()*0.929328);
}

double NNfunction_sb_uRcR::synapse0x21a1d40() {
   return (neuron0x21812a0()*0.486619);
}

double NNfunction_sb_uRcR::synapse0x21a1d80() {
   return (neuron0x21815e0()*-0.0375077);
}

double NNfunction_sb_uRcR::synapse0x21a1dc0() {
   return (neuron0x2181920()*0.0382551);
}

double NNfunction_sb_uRcR::synapse0x21a1e00() {
   return (neuron0x2181c60()*0.048987);
}

double NNfunction_sb_uRcR::synapse0x21a1e40() {
   return (neuron0x2181fa0()*-0.518222);
}

double NNfunction_sb_uRcR::synapse0x21a1e80() {
   return (neuron0x21822e0()*-0.0500944);
}

double NNfunction_sb_uRcR::synapse0x21a1ec0() {
   return (neuron0x2182620()*-0.400037);
}

double NNfunction_sb_uRcR::synapse0x21a1950() {
   return (neuron0x2182960()*-0.111613);
}

double NNfunction_sb_uRcR::synapse0x21a1990() {
   return (neuron0x2182ec0()*0.32718);
}

double NNfunction_sb_uRcR::synapse0x21a2010() {
   return (neuron0x21830e0()*0.344277);
}

double NNfunction_sb_uRcR::synapse0x21a2050() {
   return (neuron0x2183420()*0.0259478);
}

double NNfunction_sb_uRcR::synapse0x21a2090() {
   return (neuron0x2183760()*0.0345924);
}

double NNfunction_sb_uRcR::synapse0x21a20d0() {
   return (neuron0x2183aa0()*0.0288113);
}

double NNfunction_sb_uRcR::synapse0x21a2110() {
   return (neuron0x2183de0()*-0.118256);
}

double NNfunction_sb_uRcR::synapse0x21a2150() {
   return (neuron0x2184120()*-0.598463);
}

double NNfunction_sb_uRcR::synapse0x21a24d0() {
   return (neuron0x217f560()*0.00142737);
}

double NNfunction_sb_uRcR::synapse0x21a2510() {
   return (neuron0x217f8a0()*0.305278);
}

double NNfunction_sb_uRcR::synapse0x21a2550() {
   return (neuron0x217fbe0()*0.0144666);
}

double NNfunction_sb_uRcR::synapse0x21a2590() {
   return (neuron0x217ff20()*-0.539577);
}

double NNfunction_sb_uRcR::synapse0x21a25d0() {
   return (neuron0x2180260()*0.0466515);
}

double NNfunction_sb_uRcR::synapse0x21a2610() {
   return (neuron0x21805a0()*-0.0406389);
}

double NNfunction_sb_uRcR::synapse0x21a2650() {
   return (neuron0x21808e0()*0.0357929);
}

double NNfunction_sb_uRcR::synapse0x21a2690() {
   return (neuron0x2180c20()*-0.000139331);
}

double NNfunction_sb_uRcR::synapse0x21a26d0() {
   return (neuron0x2180f60()*-0.0262764);
}

double NNfunction_sb_uRcR::synapse0x21a2710() {
   return (neuron0x21812a0()*-0.138818);
}

double NNfunction_sb_uRcR::synapse0x21a2750() {
   return (neuron0x21815e0()*-0.0104996);
}

double NNfunction_sb_uRcR::synapse0x21a2790() {
   return (neuron0x2181920()*0.0748497);
}

double NNfunction_sb_uRcR::synapse0x21a27d0() {
   return (neuron0x2181c60()*0.0237314);
}

double NNfunction_sb_uRcR::synapse0x21a2810() {
   return (neuron0x2181fa0()*0.0858113);
}

double NNfunction_sb_uRcR::synapse0x21a2850() {
   return (neuron0x21822e0()*-0.0232212);
}

double NNfunction_sb_uRcR::synapse0x21a2890() {
   return (neuron0x2182620()*0.000255333);
}

double NNfunction_sb_uRcR::synapse0x21a2320() {
   return (neuron0x2182960()*0.0293735);
}

double NNfunction_sb_uRcR::synapse0x21a2360() {
   return (neuron0x2182ec0()*0.120517);
}

double NNfunction_sb_uRcR::synapse0x2192e90() {
   return (neuron0x21830e0()*0.0336905);
}

double NNfunction_sb_uRcR::synapse0x2192ed0() {
   return (neuron0x2183420()*-0.0602674);
}

double NNfunction_sb_uRcR::synapse0x2192f10() {
   return (neuron0x2183760()*-0.00793746);
}

double NNfunction_sb_uRcR::synapse0x2192f50() {
   return (neuron0x2183aa0()*-0.0298884);
}

double NNfunction_sb_uRcR::synapse0x2192f90() {
   return (neuron0x2183de0()*0.000141934);
}

double NNfunction_sb_uRcR::synapse0x2192fd0() {
   return (neuron0x2184120()*-0.00574844);
}

double NNfunction_sb_uRcR::synapse0x2193350() {
   return (neuron0x217f560()*0.0663789);
}

double NNfunction_sb_uRcR::synapse0x2193390() {
   return (neuron0x217f8a0()*0.378426);
}

double NNfunction_sb_uRcR::synapse0x21933d0() {
   return (neuron0x217fbe0()*-0.408391);
}

double NNfunction_sb_uRcR::synapse0x2193410() {
   return (neuron0x217ff20()*0.291375);
}

double NNfunction_sb_uRcR::synapse0x2193450() {
   return (neuron0x2180260()*-0.0965886);
}

double NNfunction_sb_uRcR::synapse0x2193490() {
   return (neuron0x21805a0()*0.135954);
}

double NNfunction_sb_uRcR::synapse0x21934d0() {
   return (neuron0x21808e0()*-0.0949361);
}

double NNfunction_sb_uRcR::synapse0x2193510() {
   return (neuron0x2180c20()*0.0548168);
}

double NNfunction_sb_uRcR::synapse0x2193550() {
   return (neuron0x2180f60()*-0.198982);
}

double NNfunction_sb_uRcR::synapse0x2193590() {
   return (neuron0x21812a0()*0.77188);
}

double NNfunction_sb_uRcR::synapse0x21935d0() {
   return (neuron0x21815e0()*-0.484639);
}

double NNfunction_sb_uRcR::synapse0x2193610() {
   return (neuron0x2181920()*0.315941);
}

double NNfunction_sb_uRcR::synapse0x2193650() {
   return (neuron0x2181c60()*1.05153);
}

double NNfunction_sb_uRcR::synapse0x2193690() {
   return (neuron0x2181fa0()*-0.0309533);
}

double NNfunction_sb_uRcR::synapse0x21936d0() {
   return (neuron0x21822e0()*-0.0204024);
}

double NNfunction_sb_uRcR::synapse0x2193710() {
   return (neuron0x2182620()*-0.118531);
}

double NNfunction_sb_uRcR::synapse0x21931a0() {
   return (neuron0x2182960()*0.0148618);
}

double NNfunction_sb_uRcR::synapse0x21931e0() {
   return (neuron0x2182ec0()*0.605101);
}

double NNfunction_sb_uRcR::synapse0x2193860() {
   return (neuron0x21830e0()*0.576036);
}

double NNfunction_sb_uRcR::synapse0x21938a0() {
   return (neuron0x2183420()*-0.2317);
}

double NNfunction_sb_uRcR::synapse0x21938e0() {
   return (neuron0x2183760()*-0.181665);
}

double NNfunction_sb_uRcR::synapse0x2193920() {
   return (neuron0x2183aa0()*0.0858632);
}

double NNfunction_sb_uRcR::synapse0x2193960() {
   return (neuron0x2183de0()*-0.0543971);
}

double NNfunction_sb_uRcR::synapse0x21939a0() {
   return (neuron0x2184120()*-0.285258);
}

double NNfunction_sb_uRcR::synapse0x2193d20() {
   return (neuron0x217f560()*0.0151324);
}

double NNfunction_sb_uRcR::synapse0x2193d60() {
   return (neuron0x217f8a0()*-0.0818002);
}

double NNfunction_sb_uRcR::synapse0x2193da0() {
   return (neuron0x217fbe0()*-0.0229381);
}

double NNfunction_sb_uRcR::synapse0x2193de0() {
   return (neuron0x217ff20()*0.763109);
}

double NNfunction_sb_uRcR::synapse0x2193e20() {
   return (neuron0x2180260()*-0.0374373);
}

double NNfunction_sb_uRcR::synapse0x2193e60() {
   return (neuron0x21805a0()*-0.000874727);
}

double NNfunction_sb_uRcR::synapse0x2193ea0() {
   return (neuron0x21808e0()*-0.00435196);
}

double NNfunction_sb_uRcR::synapse0x2193ee0() {
   return (neuron0x2180c20()*-0.0255122);
}

double NNfunction_sb_uRcR::synapse0x2193f20() {
   return (neuron0x2180f60()*0.0298982);
}

double NNfunction_sb_uRcR::synapse0x2193f60() {
   return (neuron0x21812a0()*0.10833);
}

double NNfunction_sb_uRcR::synapse0x2193fa0() {
   return (neuron0x21815e0()*0.0387903);
}

double NNfunction_sb_uRcR::synapse0x2193fe0() {
   return (neuron0x2181920()*0.00506092);
}

double NNfunction_sb_uRcR::synapse0x2194020() {
   return (neuron0x2181c60()*0.0976793);
}

double NNfunction_sb_uRcR::synapse0x2194060() {
   return (neuron0x2181fa0()*-0.0132821);
}

double NNfunction_sb_uRcR::synapse0x21940a0() {
   return (neuron0x21822e0()*-0.597365);
}

double NNfunction_sb_uRcR::synapse0x21940e0() {
   return (neuron0x2182620()*-0.735007);
}

double NNfunction_sb_uRcR::synapse0x2193b70() {
   return (neuron0x2182960()*-0.0853428);
}

double NNfunction_sb_uRcR::synapse0x2193bb0() {
   return (neuron0x2182ec0()*0.149147);
}

double NNfunction_sb_uRcR::synapse0x2194230() {
   return (neuron0x21830e0()*-0.00317704);
}

double NNfunction_sb_uRcR::synapse0x2194270() {
   return (neuron0x2183420()*0.059267);
}

double NNfunction_sb_uRcR::synapse0x21942b0() {
   return (neuron0x2183760()*0.017994);
}

double NNfunction_sb_uRcR::synapse0x21942f0() {
   return (neuron0x2183aa0()*0.0298483);
}

double NNfunction_sb_uRcR::synapse0x2194330() {
   return (neuron0x2183de0()*-0.0385825);
}

double NNfunction_sb_uRcR::synapse0x2194370() {
   return (neuron0x2184120()*0.0320331);
}

double NNfunction_sb_uRcR::synapse0x21946f0() {
   return (neuron0x217f560()*0.080253);
}

double NNfunction_sb_uRcR::synapse0x2194730() {
   return (neuron0x217f8a0()*-0.0565193);
}

double NNfunction_sb_uRcR::synapse0x2194770() {
   return (neuron0x217fbe0()*0.301964);
}

double NNfunction_sb_uRcR::synapse0x21947b0() {
   return (neuron0x217ff20()*1.64433);
}

double NNfunction_sb_uRcR::synapse0x21947f0() {
   return (neuron0x2180260()*-0.444138);
}

double NNfunction_sb_uRcR::synapse0x2194830() {
   return (neuron0x21805a0()*-0.231958);
}

double NNfunction_sb_uRcR::synapse0x2194870() {
   return (neuron0x21808e0()*0.388789);
}

double NNfunction_sb_uRcR::synapse0x21948b0() {
   return (neuron0x2180c20()*-0.585874);
}

double NNfunction_sb_uRcR::synapse0x21948f0() {
   return (neuron0x2180f60()*-0.11639);
}

double NNfunction_sb_uRcR::synapse0x2194930() {
   return (neuron0x21812a0()*0.230226);
}

double NNfunction_sb_uRcR::synapse0x2194970() {
   return (neuron0x21815e0()*0.387775);
}

double NNfunction_sb_uRcR::synapse0x21949b0() {
   return (neuron0x2181920()*0.15919);
}

double NNfunction_sb_uRcR::synapse0x21949f0() {
   return (neuron0x2181c60()*-0.574526);
}

double NNfunction_sb_uRcR::synapse0x2194a30() {
   return (neuron0x2181fa0()*-0.509443);
}

double NNfunction_sb_uRcR::synapse0x2194a70() {
   return (neuron0x21822e0()*-0.137621);
}

double NNfunction_sb_uRcR::synapse0x2194ab0() {
   return (neuron0x2182620()*-0.366751);
}

double NNfunction_sb_uRcR::synapse0x2194540() {
   return (neuron0x2182960()*-0.0570984);
}

double NNfunction_sb_uRcR::synapse0x2194580() {
   return (neuron0x2182ec0()*-0.627851);
}

double NNfunction_sb_uRcR::synapse0x2194c00() {
   return (neuron0x21830e0()*-0.134102);
}

double NNfunction_sb_uRcR::synapse0x2194c40() {
   return (neuron0x2183420()*0.209006);
}

double NNfunction_sb_uRcR::synapse0x2194c80() {
   return (neuron0x2183760()*-0.0330501);
}

double NNfunction_sb_uRcR::synapse0x2194cc0() {
   return (neuron0x2183aa0()*0.118139);
}

double NNfunction_sb_uRcR::synapse0x2194d00() {
   return (neuron0x2183de0()*0.734875);
}

double NNfunction_sb_uRcR::synapse0x2194d40() {
   return (neuron0x2184120()*0.744739);
}

double NNfunction_sb_uRcR::synapse0x21a6c10() {
   return (neuron0x217f560()*0.0375489);
}

double NNfunction_sb_uRcR::synapse0x21a6c50() {
   return (neuron0x217f8a0()*-0.497182);
}

double NNfunction_sb_uRcR::synapse0x21a6c90() {
   return (neuron0x217fbe0()*0.0134689);
}

double NNfunction_sb_uRcR::synapse0x21a6cd0() {
   return (neuron0x217ff20()*-1.18638);
}

double NNfunction_sb_uRcR::synapse0x21a6d10() {
   return (neuron0x2180260()*0.283275);
}

double NNfunction_sb_uRcR::synapse0x21a6d50() {
   return (neuron0x21805a0()*0.329227);
}

double NNfunction_sb_uRcR::synapse0x21a6d90() {
   return (neuron0x21808e0()*0.357869);
}

double NNfunction_sb_uRcR::synapse0x21a6dd0() {
   return (neuron0x2180c20()*-0.0141514);
}

double NNfunction_sb_uRcR::synapse0x21a6e10() {
   return (neuron0x2180f60()*-0.248769);
}

double NNfunction_sb_uRcR::synapse0x21a6e50() {
   return (neuron0x21812a0()*0.0192048);
}

double NNfunction_sb_uRcR::synapse0x21a6e90() {
   return (neuron0x21815e0()*0.336544);
}

double NNfunction_sb_uRcR::synapse0x21a6ed0() {
   return (neuron0x2181920()*-0.50984);
}

double NNfunction_sb_uRcR::synapse0x21a6f10() {
   return (neuron0x2181c60()*-0.588877);
}

double NNfunction_sb_uRcR::synapse0x21a6f50() {
   return (neuron0x2181fa0()*-0.332198);
}

double NNfunction_sb_uRcR::synapse0x21a6f90() {
   return (neuron0x21822e0()*0.153319);
}

double NNfunction_sb_uRcR::synapse0x21a6fd0() {
   return (neuron0x2182620()*0.168937);
}

double NNfunction_sb_uRcR::synapse0x2194d80() {
   return (neuron0x2182960()*0.236924);
}

double NNfunction_sb_uRcR::synapse0x2194dc0() {
   return (neuron0x2182ec0()*0.0391193);
}

double NNfunction_sb_uRcR::synapse0x21a7120() {
   return (neuron0x21830e0()*0.118964);
}

double NNfunction_sb_uRcR::synapse0x21a7160() {
   return (neuron0x2183420()*-1.07039);
}

double NNfunction_sb_uRcR::synapse0x21a71a0() {
   return (neuron0x2183760()*0.212242);
}

double NNfunction_sb_uRcR::synapse0x21a71e0() {
   return (neuron0x2183aa0()*-0.0806455);
}

double NNfunction_sb_uRcR::synapse0x21a7220() {
   return (neuron0x2183de0()*0.0456026);
}

double NNfunction_sb_uRcR::synapse0x21a7260() {
   return (neuron0x2184120()*0.000272953);
}

double NNfunction_sb_uRcR::synapse0x21a75e0() {
   return (neuron0x217f560()*0.188235);
}

double NNfunction_sb_uRcR::synapse0x21a7620() {
   return (neuron0x217f8a0()*-0.357584);
}

double NNfunction_sb_uRcR::synapse0x21a7660() {
   return (neuron0x217fbe0()*-0.0774684);
}

double NNfunction_sb_uRcR::synapse0x21a76a0() {
   return (neuron0x217ff20()*0.256123);
}

double NNfunction_sb_uRcR::synapse0x21a76e0() {
   return (neuron0x2180260()*0.0766457);
}

double NNfunction_sb_uRcR::synapse0x21a7720() {
   return (neuron0x21805a0()*-0.127813);
}

double NNfunction_sb_uRcR::synapse0x21a7760() {
   return (neuron0x21808e0()*0.179552);
}

double NNfunction_sb_uRcR::synapse0x21a77a0() {
   return (neuron0x2180c20()*-0.0730703);
}

double NNfunction_sb_uRcR::synapse0x21a77e0() {
   return (neuron0x2180f60()*-1.22145);
}

double NNfunction_sb_uRcR::synapse0x21a7820() {
   return (neuron0x21812a0()*-0.414638);
}

double NNfunction_sb_uRcR::synapse0x21a7860() {
   return (neuron0x21815e0()*0.102446);
}

double NNfunction_sb_uRcR::synapse0x21a78a0() {
   return (neuron0x2181920()*0.217441);
}

double NNfunction_sb_uRcR::synapse0x21a78e0() {
   return (neuron0x2181c60()*0.372542);
}

double NNfunction_sb_uRcR::synapse0x21a7920() {
   return (neuron0x2181fa0()*0.0672489);
}

double NNfunction_sb_uRcR::synapse0x21a7960() {
   return (neuron0x21822e0()*0.265952);
}

double NNfunction_sb_uRcR::synapse0x21a79a0() {
   return (neuron0x2182620()*0.198855);
}

double NNfunction_sb_uRcR::synapse0x21a7430() {
   return (neuron0x2182960()*-0.0633022);
}

double NNfunction_sb_uRcR::synapse0x21a7470() {
   return (neuron0x2182ec0()*0.0704765);
}

double NNfunction_sb_uRcR::synapse0x21a7af0() {
   return (neuron0x21830e0()*0.21163);
}

double NNfunction_sb_uRcR::synapse0x21a7b30() {
   return (neuron0x2183420()*0.278122);
}

double NNfunction_sb_uRcR::synapse0x21a7b70() {
   return (neuron0x2183760()*-0.11124);
}

double NNfunction_sb_uRcR::synapse0x21a7bb0() {
   return (neuron0x2183aa0()*-0.0271299);
}

double NNfunction_sb_uRcR::synapse0x21a7bf0() {
   return (neuron0x2183de0()*-0.0269014);
}

double NNfunction_sb_uRcR::synapse0x21a7c30() {
   return (neuron0x2184120()*0.244641);
}

double NNfunction_sb_uRcR::synapse0x21a7fb0() {
   return (neuron0x217f560()*-0.0238587);
}

double NNfunction_sb_uRcR::synapse0x21a7ff0() {
   return (neuron0x217f8a0()*0.0221715);
}

double NNfunction_sb_uRcR::synapse0x21a8030() {
   return (neuron0x217fbe0()*-0.0241625);
}

double NNfunction_sb_uRcR::synapse0x21a8070() {
   return (neuron0x217ff20()*-0.823798);
}

double NNfunction_sb_uRcR::synapse0x21a80b0() {
   return (neuron0x2180260()*0.0390824);
}

double NNfunction_sb_uRcR::synapse0x21a80f0() {
   return (neuron0x21805a0()*0.113304);
}

double NNfunction_sb_uRcR::synapse0x21a8130() {
   return (neuron0x21808e0()*0.0223595);
}

double NNfunction_sb_uRcR::synapse0x21a8170() {
   return (neuron0x2180c20()*0.342162);
}

double NNfunction_sb_uRcR::synapse0x21a81b0() {
   return (neuron0x2180f60()*-0.145411);
}

double NNfunction_sb_uRcR::synapse0x21a81f0() {
   return (neuron0x21812a0()*0.0488663);
}

double NNfunction_sb_uRcR::synapse0x21a8230() {
   return (neuron0x21815e0()*-0.0337369);
}

double NNfunction_sb_uRcR::synapse0x21a8270() {
   return (neuron0x2181920()*-0.0907789);
}

double NNfunction_sb_uRcR::synapse0x21a82b0() {
   return (neuron0x2181c60()*-0.0338848);
}

double NNfunction_sb_uRcR::synapse0x21a82f0() {
   return (neuron0x2181fa0()*-0.0395265);
}

double NNfunction_sb_uRcR::synapse0x21a8330() {
   return (neuron0x21822e0()*0.239265);
}

double NNfunction_sb_uRcR::synapse0x21a8370() {
   return (neuron0x2182620()*0.267129);
}

double NNfunction_sb_uRcR::synapse0x21a7e00() {
   return (neuron0x2182960()*0.123046);
}

double NNfunction_sb_uRcR::synapse0x21a7e40() {
   return (neuron0x2182ec0()*0.0681136);
}

double NNfunction_sb_uRcR::synapse0x21a84c0() {
   return (neuron0x21830e0()*0.0920889);
}

double NNfunction_sb_uRcR::synapse0x21a8500() {
   return (neuron0x2183420()*0.124406);
}

double NNfunction_sb_uRcR::synapse0x21a8540() {
   return (neuron0x2183760()*0.0493744);
}

double NNfunction_sb_uRcR::synapse0x21a8580() {
   return (neuron0x2183aa0()*-0.103018);
}

double NNfunction_sb_uRcR::synapse0x21a85c0() {
   return (neuron0x2183de0()*-0.0427264);
}

double NNfunction_sb_uRcR::synapse0x21a8600() {
   return (neuron0x2184120()*-0.0580309);
}

double NNfunction_sb_uRcR::synapse0x21a8980() {
   return (neuron0x217f560()*-0.128784);
}

double NNfunction_sb_uRcR::synapse0x21a89c0() {
   return (neuron0x217f8a0()*0.100114);
}

double NNfunction_sb_uRcR::synapse0x21a8a00() {
   return (neuron0x217fbe0()*-0.329837);
}

double NNfunction_sb_uRcR::synapse0x21a8a40() {
   return (neuron0x217ff20()*-0.233098);
}

double NNfunction_sb_uRcR::synapse0x21a8a80() {
   return (neuron0x2180260()*0.0202942);
}

double NNfunction_sb_uRcR::synapse0x21a8ac0() {
   return (neuron0x21805a0()*-0.0128947);
}

double NNfunction_sb_uRcR::synapse0x21a8b00() {
   return (neuron0x21808e0()*0.272536);
}

double NNfunction_sb_uRcR::synapse0x21a8b40() {
   return (neuron0x2180c20()*-0.0221721);
}

double NNfunction_sb_uRcR::synapse0x21a8b80() {
   return (neuron0x2180f60()*-0.0725335);
}

double NNfunction_sb_uRcR::synapse0x21a8bc0() {
   return (neuron0x21812a0()*0.0808465);
}

double NNfunction_sb_uRcR::synapse0x21a8c00() {
   return (neuron0x21815e0()*-0.410849);
}

double NNfunction_sb_uRcR::synapse0x21a8c40() {
   return (neuron0x2181920()*-0.068415);
}

double NNfunction_sb_uRcR::synapse0x21a8c80() {
   return (neuron0x2181c60()*-1.23212);
}

double NNfunction_sb_uRcR::synapse0x21a8cc0() {
   return (neuron0x2181fa0()*0.141274);
}

double NNfunction_sb_uRcR::synapse0x21a8d00() {
   return (neuron0x21822e0()*-0.0539698);
}

double NNfunction_sb_uRcR::synapse0x21a8d40() {
   return (neuron0x2182620()*-0.0480425);
}

double NNfunction_sb_uRcR::synapse0x21a87d0() {
   return (neuron0x2182960()*0.186311);
}

double NNfunction_sb_uRcR::synapse0x21a8810() {
   return (neuron0x2182ec0()*0.285772);
}

double NNfunction_sb_uRcR::synapse0x21a8e90() {
   return (neuron0x21830e0()*0.433349);
}

double NNfunction_sb_uRcR::synapse0x21a8ed0() {
   return (neuron0x2183420()*0.0950515);
}

double NNfunction_sb_uRcR::synapse0x21a8f10() {
   return (neuron0x2183760()*-0.149344);
}

double NNfunction_sb_uRcR::synapse0x21a8f50() {
   return (neuron0x2183aa0()*0.0109644);
}

double NNfunction_sb_uRcR::synapse0x21a8f90() {
   return (neuron0x2183de0()*0.161156);
}

double NNfunction_sb_uRcR::synapse0x21a8fd0() {
   return (neuron0x2184120()*-0.0499979);
}

double NNfunction_sb_uRcR::synapse0x2185570() {
   return (neuron0x21845c0()*-0.343679);
}

double NNfunction_sb_uRcR::synapse0x21855b0() {
   return (neuron0x2184ed0()*0.0499568);
}

double NNfunction_sb_uRcR::synapse0x2186a80() {
   return (neuron0x21859b0()*-0.286746);
}

double NNfunction_sb_uRcR::synapse0x2186ac0() {
   return (neuron0x1f3f240()*-0.418396);
}

double NNfunction_sb_uRcR::synapse0x2187450() {
   return (neuron0x21867d0()*-0.253366);
}

double NNfunction_sb_uRcR::synapse0x2187490() {
   return (neuron0x21871a0()*-0.061558);
}

double NNfunction_sb_uRcR::synapse0x2188220() {
   return (neuron0x2187f70()*-0.29524);
}

double NNfunction_sb_uRcR::synapse0x2188260() {
   return (neuron0x2188940()*-0.593177);
}

double NNfunction_sb_uRcR::synapse0x2188bf0() {
   return (neuron0x2189310()*-0.585332);
}

double NNfunction_sb_uRcR::synapse0x2188c30() {
   return (neuron0x2189df0()*-0.37613);
}

double NNfunction_sb_uRcR::synapse0x21895c0() {
   return (neuron0x218a7c0()*-0.253251);
}

double NNfunction_sb_uRcR::synapse0x2189600() {
   return (neuron0x21878a0()*-0.0353367);
}

double NNfunction_sb_uRcR::synapse0x218a0a0() {
   return (neuron0x218c370()*-0.0177185);
}

double NNfunction_sb_uRcR::synapse0x218a0e0() {
   return (neuron0x218cd40()*-0.62672);
}

double NNfunction_sb_uRcR::synapse0x218aa70() {
   return (neuron0x218d710()*-0.283493);
}

double NNfunction_sb_uRcR::synapse0x218aab0() {
   return (neuron0x218e0e0()*-0.214005);
}

double NNfunction_sb_uRcR::synapse0x2187b50() {
   return (neuron0x218fef0()*-0.0802696);
}

double NNfunction_sb_uRcR::synapse0x2187b90() {
   return (neuron0x21901d0()*-0.709807);
}

double NNfunction_sb_uRcR::synapse0x218c620() {
   return (neuron0x2190ba0()*-0.130723);
}

double NNfunction_sb_uRcR::synapse0x218c660() {
   return (neuron0x2191570()*-0.428053);
}

double NNfunction_sb_uRcR::synapse0x218cff0() {
   return (neuron0x2191f40()*-0.263464);
}

double NNfunction_sb_uRcR::synapse0x218d030() {
   return (neuron0x2192910()*-0.729156);
}

double NNfunction_sb_uRcR::synapse0x218d9c0() {
   return (neuron0x218b460()*-0.299512);
}

double NNfunction_sb_uRcR::synapse0x218da00() {
   return (neuron0x218be30()*-0.202837);
}

double NNfunction_sb_uRcR::synapse0x218e390() {
   return (neuron0x21956a0()*-0.197581);
}

double NNfunction_sb_uRcR::synapse0x218e3d0() {
   return (neuron0x2196070()*-0.355449);
}

double NNfunction_sb_uRcR::synapse0x2182500() {
   return (neuron0x2196a40()*-0.52122);
}

double NNfunction_sb_uRcR::synapse0x2182540() {
   return (neuron0x2197410()*0.0244927);
}

double NNfunction_sb_uRcR::synapse0x2190480() {
   return (neuron0x2197de0()*0.259828);
}

double NNfunction_sb_uRcR::synapse0x21904c0() {
   return (neuron0x21987b0()*-0.38374);
}

double NNfunction_sb_uRcR::synapse0x2190e50() {
   return (neuron0x2199180()*-0.644795);
}

double NNfunction_sb_uRcR::synapse0x2190e90() {
   return (neuron0x2199b50()*-0.310131);
}

double NNfunction_sb_uRcR::synapse0x2191820() {
   return (neuron0x218fbe0()*0.158141);
}

double NNfunction_sb_uRcR::synapse0x2191860() {
   return (neuron0x219c730()*-0.437354);
}

double NNfunction_sb_uRcR::synapse0x21921f0() {
   return (neuron0x219d100()*-0.36676);
}

double NNfunction_sb_uRcR::synapse0x2192230() {
   return (neuron0x219dad0()*0.400442);
}

double NNfunction_sb_uRcR::synapse0x2192bc0() {
   return (neuron0x219e4a0()*-0.327022);
}

double NNfunction_sb_uRcR::synapse0x2192c00() {
   return (neuron0x219ee70()*-0.257629);
}

double NNfunction_sb_uRcR::synapse0x218b710() {
   return (neuron0x219f840()*-0.464186);
}

double NNfunction_sb_uRcR::synapse0x218b750() {
   return (neuron0x21a0210()*-0.323413);
}

double NNfunction_sb_uRcR::synapse0x2194fc0() {
   return (neuron0x21a0be0()*-0.132904);
}

double NNfunction_sb_uRcR::synapse0x2195000() {
   return (neuron0x21a17c0()*-0.203236);
}

double NNfunction_sb_uRcR::synapse0x2195950() {
   return (neuron0x21a2190()*-0.515655);
}

double NNfunction_sb_uRcR::synapse0x2195990() {
   return (neuron0x2193010()*-0.227169);
}

double NNfunction_sb_uRcR::synapse0x2196320() {
   return (neuron0x21939e0()*-0.248704);
}

double NNfunction_sb_uRcR::synapse0x2196360() {
   return (neuron0x21943b0()*-0.194929);
}

double NNfunction_sb_uRcR::synapse0x2196cf0() {
   return (neuron0x21a69f0()*-0.130435);
}

double NNfunction_sb_uRcR::synapse0x2196d30() {
   return (neuron0x21a72a0()*-0.316655);
}

double NNfunction_sb_uRcR::synapse0x21976c0() {
   return (neuron0x21a7c70()*-0.0264013);
}

double NNfunction_sb_uRcR::synapse0x2197700() {
   return (neuron0x21a8640()*-0.360118);
}

double NNfunction_sb_uRcR::synapse0x2199e00() {
   return (neuron0x21845c0()*-0.959621);
}

double NNfunction_sb_uRcR::synapse0x2199e40() {
   return (neuron0x2184ed0()*0.0380005);
}

double NNfunction_sb_uRcR::synapse0x218f3c0() {
   return (neuron0x21859b0()*-0.0836779);
}

double NNfunction_sb_uRcR::synapse0x218f400() {
   return (neuron0x1f3f240()*-1.83116);
}

double NNfunction_sb_uRcR::synapse0x219c9e0() {
   return (neuron0x21867d0()*0.155591);
}

double NNfunction_sb_uRcR::synapse0x219ca20() {
   return (neuron0x21871a0()*0.756161);
}

double NNfunction_sb_uRcR::synapse0x219d3b0() {
   return (neuron0x2187f70()*0.579289);
}

double NNfunction_sb_uRcR::synapse0x219d3f0() {
   return (neuron0x2188940()*-1.03446);
}

double NNfunction_sb_uRcR::synapse0x219dd80() {
   return (neuron0x2189310()*-0.484139);
}

double NNfunction_sb_uRcR::synapse0x219ddc0() {
   return (neuron0x2189df0()*0.333212);
}

double NNfunction_sb_uRcR::synapse0x219e750() {
   return (neuron0x218a7c0()*-0.0471934);
}

double NNfunction_sb_uRcR::synapse0x219e790() {
   return (neuron0x21878a0()*-0.160155);
}

double NNfunction_sb_uRcR::synapse0x219f120() {
   return (neuron0x218c370()*-0.350021);
}

double NNfunction_sb_uRcR::synapse0x219f160() {
   return (neuron0x218cd40()*0.959703);
}

double NNfunction_sb_uRcR::synapse0x219faf0() {
   return (neuron0x218d710()*0.0520077);
}

double NNfunction_sb_uRcR::synapse0x219fb30() {
   return (neuron0x218e0e0()*0.902686);
}

double NNfunction_sb_uRcR::synapse0x21a04c0() {
   return (neuron0x218fef0()*0.0596056);
}

double NNfunction_sb_uRcR::synapse0x21a0500() {
   return (neuron0x21901d0()*0.136428);
}

double NNfunction_sb_uRcR::synapse0x21a0e90() {
   return (neuron0x2190ba0()*-0.0150679);
}

double NNfunction_sb_uRcR::synapse0x21a0ed0() {
   return (neuron0x2191570()*-0.256717);
}

double NNfunction_sb_uRcR::synapse0x21a1a70() {
   return (neuron0x2191f40()*-0.658194);
}

double NNfunction_sb_uRcR::synapse0x21a1ab0() {
   return (neuron0x2192910()*-0.250555);
}

double NNfunction_sb_uRcR::synapse0x21a2440() {
   return (neuron0x218b460()*0.251685);
}

double NNfunction_sb_uRcR::synapse0x21a2480() {
   return (neuron0x218be30()*3.7424);
}

double NNfunction_sb_uRcR::synapse0x21932c0() {
   return (neuron0x21956a0()*0.104337);
}

double NNfunction_sb_uRcR::synapse0x2193300() {
   return (neuron0x2196070()*-2.06776);
}

double NNfunction_sb_uRcR::synapse0x2193c90() {
   return (neuron0x2196a40()*1.73785);
}

double NNfunction_sb_uRcR::synapse0x2193cd0() {
   return (neuron0x2197410()*0.721625);
}

double NNfunction_sb_uRcR::synapse0x2194660() {
   return (neuron0x2197de0()*-0.136521);
}

double NNfunction_sb_uRcR::synapse0x21946a0() {
   return (neuron0x21987b0()*-0.623019);
}

double NNfunction_sb_uRcR::synapse0x21a6b80() {
   return (neuron0x2199180()*2.22723);
}

double NNfunction_sb_uRcR::synapse0x21a6bc0() {
   return (neuron0x2199b50()*0.208034);
}

double NNfunction_sb_uRcR::synapse0x21a7550() {
   return (neuron0x218fbe0()*0.376784);
}

double NNfunction_sb_uRcR::synapse0x21a7590() {
   return (neuron0x219c730()*0.168867);
}

double NNfunction_sb_uRcR::synapse0x21a7f20() {
   return (neuron0x219d100()*-0.149221);
}

double NNfunction_sb_uRcR::synapse0x21a7f60() {
   return (neuron0x219dad0()*1.78147);
}

double NNfunction_sb_uRcR::synapse0x21a88f0() {
   return (neuron0x219e4a0()*-0.738401);
}

double NNfunction_sb_uRcR::synapse0x21a8930() {
   return (neuron0x219ee70()*3.93239);
}

double NNfunction_sb_uRcR::synapse0x21847e0() {
   return (neuron0x219f840()*1.23435);
}

double NNfunction_sb_uRcR::synapse0x2184820() {
   return (neuron0x21a0210()*0.0179786);
}

double NNfunction_sb_uRcR::synapse0x2198090() {
   return (neuron0x21a0be0()*0.326061);
}

double NNfunction_sb_uRcR::synapse0x21980d0() {
   return (neuron0x21a17c0()*0.466215);
}

double NNfunction_sb_uRcR::synapse0x21a9010() {
   return (neuron0x21a2190()*0.797738);
}

double NNfunction_sb_uRcR::synapse0x21a9050() {
   return (neuron0x2193010()*0.212781);
}

double NNfunction_sb_uRcR::synapse0x21a9090() {
   return (neuron0x21939e0()*-0.876939);
}

double NNfunction_sb_uRcR::synapse0x21a90d0() {
   return (neuron0x21943b0()*0.210741);
}

double NNfunction_sb_uRcR::synapse0x21aff80() {
   return (neuron0x21a69f0()*0.268885);
}

double NNfunction_sb_uRcR::synapse0x21affc0() {
   return (neuron0x21a72a0()*-0.21583);
}

double NNfunction_sb_uRcR::synapse0x21b0000() {
   return (neuron0x21a7c70()*0.945496);
}

double NNfunction_sb_uRcR::synapse0x21b0040() {
   return (neuron0x21a8640()*-0.226642);
}

double NNfunction_sb_uRcR::synapse0x21b03c0() {
   return (neuron0x21845c0()*-4.62161);
}

double NNfunction_sb_uRcR::synapse0x21b0400() {
   return (neuron0x2184ed0()*-1.59112);
}

double NNfunction_sb_uRcR::synapse0x21b0440() {
   return (neuron0x21859b0()*1.28479);
}

double NNfunction_sb_uRcR::synapse0x21b0480() {
   return (neuron0x1f3f240()*-1.89764);
}

double NNfunction_sb_uRcR::synapse0x21b04c0() {
   return (neuron0x21867d0()*1.55828);
}

double NNfunction_sb_uRcR::synapse0x21b0500() {
   return (neuron0x21871a0()*1.33819);
}

double NNfunction_sb_uRcR::synapse0x21b0540() {
   return (neuron0x2187f70()*-1.32554);
}

double NNfunction_sb_uRcR::synapse0x21b0580() {
   return (neuron0x2188940()*-1.59443);
}

double NNfunction_sb_uRcR::synapse0x21b05c0() {
   return (neuron0x2189310()*1.2687);
}

double NNfunction_sb_uRcR::synapse0x21b0600() {
   return (neuron0x2189df0()*-2.34096);
}

double NNfunction_sb_uRcR::synapse0x21b0640() {
   return (neuron0x218a7c0()*1.63208);
}

double NNfunction_sb_uRcR::synapse0x21b0680() {
   return (neuron0x21878a0()*-0.455316);
}

double NNfunction_sb_uRcR::synapse0x21b06c0() {
   return (neuron0x218c370()*-2.05671);
}

double NNfunction_sb_uRcR::synapse0x21b0700() {
   return (neuron0x218cd40()*1.14098);
}

double NNfunction_sb_uRcR::synapse0x21b0740() {
   return (neuron0x218d710()*1.59548);
}

double NNfunction_sb_uRcR::synapse0x21b0780() {
   return (neuron0x218e0e0()*1.5714);
}

double NNfunction_sb_uRcR::synapse0x21b0210() {
   return (neuron0x218fef0()*-1.90702);
}

double NNfunction_sb_uRcR::synapse0x21b0250() {
   return (neuron0x21901d0()*2.7333);
}

double NNfunction_sb_uRcR::synapse0x21b08d0() {
   return (neuron0x2190ba0()*1.68557);
}

double NNfunction_sb_uRcR::synapse0x21b0910() {
   return (neuron0x2191570()*2.89188);
}

double NNfunction_sb_uRcR::synapse0x21b0950() {
   return (neuron0x2191f40()*1.08397);
}

double NNfunction_sb_uRcR::synapse0x21b0990() {
   return (neuron0x2192910()*-1.4256);
}

double NNfunction_sb_uRcR::synapse0x21b09d0() {
   return (neuron0x218b460()*-0.180076);
}

double NNfunction_sb_uRcR::synapse0x21b0a10() {
   return (neuron0x218be30()*3.88231);
}

double NNfunction_sb_uRcR::synapse0x21b0a50() {
   return (neuron0x21956a0()*0.498809);
}

double NNfunction_sb_uRcR::synapse0x21b0a90() {
   return (neuron0x2196070()*-3.18823);
}

double NNfunction_sb_uRcR::synapse0x21b0ad0() {
   return (neuron0x2196a40()*1.39945);
}

double NNfunction_sb_uRcR::synapse0x21b0b10() {
   return (neuron0x2197410()*0.416633);
}

double NNfunction_sb_uRcR::synapse0x21b0b50() {
   return (neuron0x2197de0()*1.89655);
}

double NNfunction_sb_uRcR::synapse0x21b0b90() {
   return (neuron0x21987b0()*-1.02648);
}

double NNfunction_sb_uRcR::synapse0x21b0bd0() {
   return (neuron0x2199180()*1.82295);
}

double NNfunction_sb_uRcR::synapse0x21b0c10() {
   return (neuron0x2199b50()*2.64749);
}

double NNfunction_sb_uRcR::synapse0x21b07c0() {
   return (neuron0x218fbe0()*4.59371);
}

double NNfunction_sb_uRcR::synapse0x21b0800() {
   return (neuron0x219c730()*0.617456);
}

double NNfunction_sb_uRcR::synapse0x21b0840() {
   return (neuron0x219d100()*-1.71937);
}

double NNfunction_sb_uRcR::synapse0x21b0880() {
   return (neuron0x219dad0()*-0.200231);
}

double NNfunction_sb_uRcR::synapse0x21b0e60() {
   return (neuron0x219e4a0()*-1.39707);
}

double NNfunction_sb_uRcR::synapse0x21b0ea0() {
   return (neuron0x219ee70()*5.14238);
}

double NNfunction_sb_uRcR::synapse0x21b0ee0() {
   return (neuron0x219f840()*-0.143655);
}

double NNfunction_sb_uRcR::synapse0x21b0f20() {
   return (neuron0x21a0210()*-2.12572);
}

double NNfunction_sb_uRcR::synapse0x21b0f60() {
   return (neuron0x21a0be0()*-1.39287);
}

double NNfunction_sb_uRcR::synapse0x21b0fa0() {
   return (neuron0x21a17c0()*-2.16202);
}

double NNfunction_sb_uRcR::synapse0x21b0fe0() {
   return (neuron0x21a2190()*-0.32343);
}

double NNfunction_sb_uRcR::synapse0x21b1020() {
   return (neuron0x2193010()*2.30375);
}

double NNfunction_sb_uRcR::synapse0x21b1060() {
   return (neuron0x21939e0()*0.00285743);
}

double NNfunction_sb_uRcR::synapse0x21b10a0() {
   return (neuron0x21943b0()*2.35029);
}

double NNfunction_sb_uRcR::synapse0x21b10e0() {
   return (neuron0x21a69f0()*-2.61433);
}

double NNfunction_sb_uRcR::synapse0x21b1120() {
   return (neuron0x21a72a0()*-1.08461);
}

double NNfunction_sb_uRcR::synapse0x21b1160() {
   return (neuron0x21a7c70()*0.728949);
}

double NNfunction_sb_uRcR::synapse0x21b11a0() {
   return (neuron0x21a8640()*-1.79469);
}

double NNfunction_sb_uRcR::synapse0x21b1520() {
   return (neuron0x21845c0()*0.347565);
}

double NNfunction_sb_uRcR::synapse0x21b1560() {
   return (neuron0x2184ed0()*-0.598255);
}

double NNfunction_sb_uRcR::synapse0x21b15a0() {
   return (neuron0x21859b0()*-0.267053);
}

double NNfunction_sb_uRcR::synapse0x21b15e0() {
   return (neuron0x1f3f240()*-0.48547);
}

double NNfunction_sb_uRcR::synapse0x21b1620() {
   return (neuron0x21867d0()*-0.042863);
}

double NNfunction_sb_uRcR::synapse0x21b1660() {
   return (neuron0x21871a0()*0.230564);
}

double NNfunction_sb_uRcR::synapse0x21b16a0() {
   return (neuron0x2187f70()*0.0409728);
}

double NNfunction_sb_uRcR::synapse0x21b16e0() {
   return (neuron0x2188940()*-0.407719);
}

double NNfunction_sb_uRcR::synapse0x21b1720() {
   return (neuron0x2189310()*-0.238546);
}

double NNfunction_sb_uRcR::synapse0x21b1760() {
   return (neuron0x2189df0()*0.0372948);
}

double NNfunction_sb_uRcR::synapse0x21b17a0() {
   return (neuron0x218a7c0()*0.314566);
}

double NNfunction_sb_uRcR::synapse0x21b17e0() {
   return (neuron0x21878a0()*-0.532828);
}

double NNfunction_sb_uRcR::synapse0x21b1820() {
   return (neuron0x218c370()*-0.33805);
}

double NNfunction_sb_uRcR::synapse0x21b1860() {
   return (neuron0x218cd40()*0.410786);
}

double NNfunction_sb_uRcR::synapse0x21b18a0() {
   return (neuron0x218d710()*0.220197);
}

double NNfunction_sb_uRcR::synapse0x21b18e0() {
   return (neuron0x218e0e0()*-0.0851338);
}

double NNfunction_sb_uRcR::synapse0x21b1370() {
   return (neuron0x218fef0()*-0.164179);
}

double NNfunction_sb_uRcR::synapse0x21b13b0() {
   return (neuron0x21901d0()*-0.987859);
}

double NNfunction_sb_uRcR::synapse0x21b1a30() {
   return (neuron0x2190ba0()*0.00509267);
}

double NNfunction_sb_uRcR::synapse0x21b1a70() {
   return (neuron0x2191570()*-0.0262526);
}

double NNfunction_sb_uRcR::synapse0x21b1ab0() {
   return (neuron0x2191f40()*0.770325);
}

double NNfunction_sb_uRcR::synapse0x21b1af0() {
   return (neuron0x2192910()*-0.611611);
}

double NNfunction_sb_uRcR::synapse0x21b1b30() {
   return (neuron0x218b460()*-0.220399);
}

double NNfunction_sb_uRcR::synapse0x21b1b70() {
   return (neuron0x218be30()*0.375931);
}

double NNfunction_sb_uRcR::synapse0x21b1bb0() {
   return (neuron0x21956a0()*0.579314);
}

double NNfunction_sb_uRcR::synapse0x21b1bf0() {
   return (neuron0x2196070()*-0.35629);
}

double NNfunction_sb_uRcR::synapse0x21b1c30() {
   return (neuron0x2196a40()*1.30391);
}

double NNfunction_sb_uRcR::synapse0x21b1c70() {
   return (neuron0x2197410()*-0.429517);
}

double NNfunction_sb_uRcR::synapse0x21b1cb0() {
   return (neuron0x2197de0()*-0.0282865);
}

double NNfunction_sb_uRcR::synapse0x21b1cf0() {
   return (neuron0x21987b0()*0.888582);
}

double NNfunction_sb_uRcR::synapse0x21b1d30() {
   return (neuron0x2199180()*1.06177);
}

double NNfunction_sb_uRcR::synapse0x21b1d70() {
   return (neuron0x2199b50()*0.0548954);
}

double NNfunction_sb_uRcR::synapse0x21b1920() {
   return (neuron0x218fbe0()*0.316124);
}

double NNfunction_sb_uRcR::synapse0x21b1960() {
   return (neuron0x219c730()*-0.690482);
}

double NNfunction_sb_uRcR::synapse0x21b19a0() {
   return (neuron0x219d100()*-0.187623);
}

double NNfunction_sb_uRcR::synapse0x21b19e0() {
   return (neuron0x219dad0()*-0.154441);
}

double NNfunction_sb_uRcR::synapse0x21b1fc0() {
   return (neuron0x219e4a0()*0.236711);
}

double NNfunction_sb_uRcR::synapse0x21b2000() {
   return (neuron0x219ee70()*0.747524);
}

double NNfunction_sb_uRcR::synapse0x21b2040() {
   return (neuron0x219f840()*0.157382);
}

double NNfunction_sb_uRcR::synapse0x21b2080() {
   return (neuron0x21a0210()*-0.574293);
}

double NNfunction_sb_uRcR::synapse0x21b20c0() {
   return (neuron0x21a0be0()*0.170015);
}

double NNfunction_sb_uRcR::synapse0x21b2100() {
   return (neuron0x21a17c0()*-0.0774086);
}

double NNfunction_sb_uRcR::synapse0x21b2140() {
   return (neuron0x21a2190()*0.109042);
}

double NNfunction_sb_uRcR::synapse0x21b2180() {
   return (neuron0x2193010()*0.285756);
}

double NNfunction_sb_uRcR::synapse0x21b21c0() {
   return (neuron0x21939e0()*-0.60476);
}

double NNfunction_sb_uRcR::synapse0x21b2200() {
   return (neuron0x21943b0()*-0.0435073);
}

double NNfunction_sb_uRcR::synapse0x21b2240() {
   return (neuron0x21a69f0()*0.255794);
}

double NNfunction_sb_uRcR::synapse0x21b2280() {
   return (neuron0x21a72a0()*0.0875311);
}

double NNfunction_sb_uRcR::synapse0x21b22c0() {
   return (neuron0x21a7c70()*-0.535401);
}

double NNfunction_sb_uRcR::synapse0x21b2300() {
   return (neuron0x21a8640()*-0.114004);
}

double NNfunction_sb_uRcR::synapse0x21b2680() {
   return (neuron0x21845c0()*-0.46093);
}

double NNfunction_sb_uRcR::synapse0x21b26c0() {
   return (neuron0x2184ed0()*-2.39846);
}

double NNfunction_sb_uRcR::synapse0x21b2700() {
   return (neuron0x21859b0()*-0.00492532);
}

double NNfunction_sb_uRcR::synapse0x21b2740() {
   return (neuron0x1f3f240()*-0.734043);
}

double NNfunction_sb_uRcR::synapse0x21b2780() {
   return (neuron0x21867d0()*-0.00780324);
}

double NNfunction_sb_uRcR::synapse0x21b27c0() {
   return (neuron0x21871a0()*-0.0486802);
}

double NNfunction_sb_uRcR::synapse0x21b2800() {
   return (neuron0x2187f70()*-0.463058);
}

double NNfunction_sb_uRcR::synapse0x21b2840() {
   return (neuron0x2188940()*-2.89992);
}

double NNfunction_sb_uRcR::synapse0x21b2880() {
   return (neuron0x2189310()*-0.378722);
}

double NNfunction_sb_uRcR::synapse0x21b28c0() {
   return (neuron0x2189df0()*-0.00192008);
}

double NNfunction_sb_uRcR::synapse0x21b2900() {
   return (neuron0x218a7c0()*0.163293);
}

double NNfunction_sb_uRcR::synapse0x21b2940() {
   return (neuron0x21878a0()*-1.94654);
}

double NNfunction_sb_uRcR::synapse0x21b2980() {
   return (neuron0x218c370()*0.0300642);
}

double NNfunction_sb_uRcR::synapse0x21b29c0() {
   return (neuron0x218cd40()*-4.14102);
}

double NNfunction_sb_uRcR::synapse0x21b2a00() {
   return (neuron0x218d710()*-0.0386954);
}

double NNfunction_sb_uRcR::synapse0x21b2a40() {
   return (neuron0x218e0e0()*-0.011525);
}

double NNfunction_sb_uRcR::synapse0x21b24d0() {
   return (neuron0x218fef0()*0.0486897);
}

double NNfunction_sb_uRcR::synapse0x21b2510() {
   return (neuron0x21901d0()*0.205577);
}

double NNfunction_sb_uRcR::synapse0x21b2b90() {
   return (neuron0x2190ba0()*0.00737639);
}

double NNfunction_sb_uRcR::synapse0x21b2bd0() {
   return (neuron0x2191570()*-0.00677118);
}

double NNfunction_sb_uRcR::synapse0x21b2c10() {
   return (neuron0x2191f40()*-0.0557535);
}

double NNfunction_sb_uRcR::synapse0x21b2c50() {
   return (neuron0x2192910()*-1.79761);
}

double NNfunction_sb_uRcR::synapse0x21b2c90() {
   return (neuron0x218b460()*4.39787);
}

double NNfunction_sb_uRcR::synapse0x21b2cd0() {
   return (neuron0x218be30()*0.812932);
}

double NNfunction_sb_uRcR::synapse0x21b2d10() {
   return (neuron0x21956a0()*0.000710968);
}

double NNfunction_sb_uRcR::synapse0x21b2d50() {
   return (neuron0x2196070()*-0.250404);
}

double NNfunction_sb_uRcR::synapse0x21b2d90() {
   return (neuron0x2196a40()*-0.428344);
}

double NNfunction_sb_uRcR::synapse0x21b2dd0() {
   return (neuron0x2197410()*2.00121);
}

double NNfunction_sb_uRcR::synapse0x21b2e10() {
   return (neuron0x2197de0()*0.0233805);
}

double NNfunction_sb_uRcR::synapse0x21b2e50() {
   return (neuron0x21987b0()*-1.06802);
}

double NNfunction_sb_uRcR::synapse0x21b2e90() {
   return (neuron0x2199180()*2.94012);
}

double NNfunction_sb_uRcR::synapse0x21b2ed0() {
   return (neuron0x2199b50()*-0.0368038);
}

double NNfunction_sb_uRcR::synapse0x21b2a80() {
   return (neuron0x218fbe0()*0.144571);
}

double NNfunction_sb_uRcR::synapse0x21b2ac0() {
   return (neuron0x219c730()*-2.06809);
}

double NNfunction_sb_uRcR::synapse0x21b2b00() {
   return (neuron0x219d100()*-0.0444635);
}

double NNfunction_sb_uRcR::synapse0x21b2b40() {
   return (neuron0x219dad0()*1.98477);
}

double NNfunction_sb_uRcR::synapse0x21b3120() {
   return (neuron0x219e4a0()*1.5009);
}

double NNfunction_sb_uRcR::synapse0x21b3160() {
   return (neuron0x219ee70()*0.205707);
}

double NNfunction_sb_uRcR::synapse0x21b31a0() {
   return (neuron0x219f840()*1.47743);
}

double NNfunction_sb_uRcR::synapse0x21b31e0() {
   return (neuron0x21a0210()*0.0167033);
}

double NNfunction_sb_uRcR::synapse0x21b3220() {
   return (neuron0x21a0be0()*-0.166204);
}

double NNfunction_sb_uRcR::synapse0x21b3260() {
   return (neuron0x21a17c0()*0.0127868);
}

double NNfunction_sb_uRcR::synapse0x21b32a0() {
   return (neuron0x21a2190()*1.69534);
}

double NNfunction_sb_uRcR::synapse0x21b32e0() {
   return (neuron0x2193010()*0.0994323);
}

double NNfunction_sb_uRcR::synapse0x21b3320() {
   return (neuron0x21939e0()*1.14369);
}

double NNfunction_sb_uRcR::synapse0x21b3360() {
   return (neuron0x21943b0()*-0.0239106);
}

double NNfunction_sb_uRcR::synapse0x21b33a0() {
   return (neuron0x21a69f0()*-0.0806251);
}

double NNfunction_sb_uRcR::synapse0x21b33e0() {
   return (neuron0x21a72a0()*-0.0970117);
}

double NNfunction_sb_uRcR::synapse0x21b3420() {
   return (neuron0x21a7c70()*1.65922);
}

double NNfunction_sb_uRcR::synapse0x21b3460() {
   return (neuron0x21a8640()*-0.117119);
}

double NNfunction_sb_uRcR::synapse0x2184580() {
   return (neuron0x21af840()*-1.26209);
}

double NNfunction_sb_uRcR::synapse0x21b36c0() {
   return (neuron0x21afbe0()*-1.94848);
}

double NNfunction_sb_uRcR::synapse0x21b3700() {
   return (neuron0x21b0080()*-5.30203);
}

double NNfunction_sb_uRcR::synapse0x21b3740() {
   return (neuron0x21b11e0()*-2.06884);
}

double NNfunction_sb_uRcR::synapse0x21b3780() {
   return (neuron0x21b2340()*-8.60198);
}

